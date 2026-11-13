#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern _UNKNOWN GameData_1a0d058;
extern _UNKNOWN GameData_1a95e39;
extern _UNKNOWN GameData_1a99a9b;
extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1ab8d7f;
extern __int64 (*GameData_1fb1468[])();
extern __int64 (*GameData_1ff8930[])();
extern __int64 (*GameData_1ff90f8[])();
extern __int64 (*GameData_1ff9b60[])();
extern __int64 (*GameData_1ff9fd0[])();
extern __int64 (*GameData_1ffa0a0[])();
extern _UNKNOWN* GameData_1ffce40;
extern __int64 (*GameData_1ffe878[])();
extern __int64 (*GameData_1ffe918[])();
extern __int64 (*GameData_1ffe968[])();
extern __int64 (*GameData_1ffe9b8[])();
extern __int64 (*GameData_1fffd38[])();
extern __int64 (*GameData_1fffd88[])();
extern __int64 (*GameData_2000778[])();
extern __int64 (*GameData_20007c8[])();
extern __int64 (*GameData_209d8c0[])();
extern __int64 (*GameData_209dd28[])();
extern __int64 (*GameData_209ddf8[])();
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64 GameData_212c5c0[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212c6a0[3];
extern _DWORD* GameData_212d330;
extern __int64* GameData_212d458[7];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_212dc48[5];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212dc68;
extern __int64* GameData_212dcc8[2];
extern __int64* GameData_212dcd0;
extern _DWORD* GameData_212dcd8;
extern __int64* GameData_212de58[3];
extern __int64* GameData_212e8c0;
extern __int64* GameData_212ea58;
extern __int64* GameData_212eb88;
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212ebc8[4];
extern __int64 GameData_212ebf8[2];
extern __int64* GameData_212ec18[2];
extern __int64* GameData_212ec50[3];
extern __int64* GameData_212ee30[4];
extern __int64* GameData_212ef20;
extern __int64* GameData_212ef38[2];
extern __int64 GameData_212ef60;
extern __int64* GameData_212f290[4];
extern __int64 GameData_212f500[8];
extern __int64* GameData_212f8f0[6];
extern __int64* GameData_212fb78;
extern _UNKNOWN* GameData_212fb80;
extern __int64* GameData_212fbc8;
extern __int64* GameData_212fc58[5];
extern __int64 (**GameData_2166ce8)();
extern char GameData_2166cf2;
extern __int128 GameData_21a5670;
extern _UNKNOWN GameData_21a5680;
extern __int64 GameData_21a60d8;
extern __int128 GameData_21a6120;
extern _UNKNOWN GameData_21a6130;
extern __int64 GameData_21c9758;
extern __int64 GameData_21caab0;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21ee260;
extern __int64 GameData_21f3ca8;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_21f3cc0;
extern __int64 GameData_21f3d08;
extern __int64 GameData_21f3d10;
extern int GameData_21f3ff4;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2212500;
extern __int64 GameData_22127a8;
extern __int64 GameData_2216820;
extern char GameData_2216858;
extern int GameData_221beb0;
extern char GameData_2228a08;
extern __int64 GameData_2228a10;
extern __int64 GameData_2228a18;
extern __int64 GameData_2228a20;
extern int GameData_2228a28;
extern __int64 GameData_2228a30;
extern int GameData_2228a38;
extern __int64 GameData_2228a40;
extern char GameData_2228a48;
extern __int64 GameData_2228a50;
extern __int64 GameData_2228a58;
extern __int64 GameData_2228a60;
extern int GameData_2228a68;
extern __int64 GameData_2228a70;
extern int GameData_2228a78;
extern __int64 GameData_2228a80;
extern char GameData_2228a88;
extern __int64 GameData_2228a90;
extern __int64 GameData_2228a98;
extern __int64 GameData_2228aa0;
extern int GameData_2228aa8;
extern __int64 GameData_2228ab0;
extern int GameData_2228ab8;
extern __int64 GameData_2228ac0;
extern char GameData_2228ac8;
extern __int64 GameData_2228ad0;
extern __int64 GameData_2228ad8;
extern __int64 GameData_2228ae0;
extern int GameData_2228ae8;
extern __int64 GameData_2228af0;
extern int GameData_2228af8;
extern __int64 GameData_2228b00;
extern _UNKNOWN GameData_2228b08;
extern __int64 GameData_2228b10;
extern char GameData_2232018;
extern __int64 GameData_2233740;
extern __int64 GameData_2233750;
extern __int64 GameData_2233760;
extern __int64 GameData_2265ee0;
_QWORD* GameRoutine_1005820(_QWORD*, __int64, __int64);
void __attribute__((noreturn)) GameRoutine_10064a0(_QWORD);
__int64 GameRoutine_100b50(_QWORD, _QWORD, float);
__int64 GameRoutine_1013de0(_QWORD, float);
__int64 GameRoutine_1028ee0(_QWORD, _QWORD);
__int64 GameRoutine_1029080(_QWORD);
void GameRoutine_102a220(__int64*);
__int64 GameRoutine_102b580(_QWORD);
__int64 GameRoutine_102bce0(_QWORD);
__int64 GameRoutine_102c400(_QWORD);
__int64 GameRoutine_102ca20(_QWORD);
__int64 GameRoutine_102d120(_QWORD);
__int64 GameRoutine_102d900(_QWORD);
__int64 GameRoutine_102e240(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_102e7c0(_QWORD);
__int64 GameRoutine_102e920(_QWORD, _QWORD);
__int64 GameRoutine_102eb40(_QWORD, _QWORD);
__int64 GameRoutine_102ed40(_QWORD);
__int64 GameRoutine_102ee80(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_102f050(void);
__int64 GameRoutine_102f080(_QWORD, _QWORD);
__int64 GameRoutine_102f2a0(_QWORD);
__int64 GameRoutine_102f3c0(_QWORD, _QWORD, _QWORD);
__n128 GameRoutine_10c830(_QWORD, float);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_1212140(_QWORD);
__int64 GameRoutine_12124a0(_QWORD);
__int64 GameRoutine_145c3e0(void);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD, long double);
__int64 GameRoutine_14a1b00(_QWORD, float);
__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1782140(_QWORD);
__int64 GameRoutine_190bf00(_QWORD, _QWORD);
__n128 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD, long double);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__n128 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__n128 GameRoutine_1a0a4e0_alt9(_QWORD) __asm__("GameRoutine_1a0a4e0");
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65a7c0(void);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_65c660(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(long double);
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
__int64 GameRoutine_6b7aa0(_QWORD);
__int64 GameRoutine_6c4610(_QWORD);
__int64 GameRoutine_716d80(_QWORD, _QWORD);
__int64 GameRoutine_7a8520(void);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_7fb640(_QWORD, long double);
__int64 GameRoutine_7fb7c0(void);
__int64 GameRoutine_7fb930(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 GameRoutine_84cb50(_QWORD, _QWORD);
__int64 GameRoutine_8c4ee0(_QWORD);
__int64 GameRoutine_8e17a0(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_943410(_QWORD);
__int64 GameRoutine_9a4d20(_QWORD, _QWORD);
__int64 GameRoutine_a78450(_QWORD, _QWORD);
__int64 GameRoutine_a858a0(void);
__int64 GameRoutine_a867a0(_QWORD);
__int64 GameRoutine_adf880(void);
__int64 GameRoutine_bc6460(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c444d0(void);
__int64 GameRoutine_c6a240(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c98260(_QWORD);
__attribute__((swiftcall)) void GameRoutine_c98880(PSEUDO_X8, _QWORD);
__int64 GameRoutine_c98a80(_QWORD, _QWORD, _QWORD, _QWORD, long double);
void __attribute__((noreturn)) GameRoutine_ca7de0(void);
void __attribute__((noreturn)) GameRoutine_ca7e00(_QWORD);
void __attribute__((noreturn)) GameRoutine_ca7e40(_QWORD);
__int64 GameRoutine_caea10(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cb10a0(_QWORD);
__int64 GameRoutine_cb2640(_QWORD, long double);
void __attribute__((noreturn)) GameRoutine_cb48b0(void);
struct PseudoSret GameRoutine_cdf420(_QWORD, _QWORD, float, float, float);
__int64 GameRoutine_cf5c00(_QWORD);
__int64 GameRoutine_d523c0(_QWORD);
__int64 GameRoutine_d540c0(_QWORD);
void __attribute__((noreturn)) GameRoutine_d5f350(void);
__int64 GameRoutine_d783a0(_QWORD, double);
float GameRoutine_d78a40(_QWORD);
__int64 GameRoutine_d82e50(_QWORD, _QWORD);
__int64 GameRoutine_d8d760(_QWORD);
__int64 GameRoutine_d8e140(_QWORD);
__int64 GameRoutine_d8ec60(_QWORD);
__int64 GameRoutine_d90760(_QWORD);
__int64 GameRoutine_d97ff0(_QWORD);
__int64 GameRoutine_d98960(_QWORD, _QWORD, long double);
__int64 GameRoutine_d98e20(_QWORD);
__int64 GameRoutine_d99480(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d9d750(_QWORD, _QWORD, _QWORD, _QWORD, long double);
__attribute__((swiftcall)) void GameRoutine_db1ce0(PSEUDO_X8, _QWORD);
struct PseudoSret GameRoutine_db1f30(_QWORD);
__attribute__((swiftcall)) void GameRoutine_db2180(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_dbcd30(_QWORD, _QWORD);
__int64 GameRoutine_dfc000(void);
__int64 GameRoutine_e023c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e02840(_QWORD);
__int64 GameRoutine_e07e20(_QWORD);
__int64 GameRoutine_e08050(_QWORD, _QWORD);
__int64 GameRoutine_e08150(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e08260(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e149a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e152d0(_QWORD);
__int64 GameRoutine_e1a560(_QWORD, _QWORD);
struct PseudoSret GameRoutine_e1b4d0(void);
struct PseudoSret GameRoutine_e1bfe0(_QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_e1c160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e73070(_QWORD, _QWORD);
__int64 GameRoutine_e7c3f0(_QWORD, _QWORD, _QWORD, double);
__int64 GameRoutine_e98240(_QWORD, _QWORD, long double);
__int64 GameRoutine_e9b550(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_e9cb40(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_ebfd20(_QWORD);
__int64 GameRoutine_edede0(__int64, float, float, float);
__int64 GameRoutine_ee0900(__int64);
__int64 GameRoutine_efb6f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_efbb60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_efc3b0(__int64, __int64*, char, __int64);
__int64 GameRoutine_f39c40(__int64 result, char);
__int64 GameRoutine_f64760(_QWORD);
__int64 GameRoutine_f71cb0(__int64, int);
__int64 GameRoutine_f71d40(__int64, __int64, __int64);
__int64 GameRoutine_f71fc0(_QWORD, _QWORD, _QWORD);
__int64* GameRoutine_f77560(__int64, unsigned __int8*);
__int64* GameRoutine_f79e00(_QWORD*, unsigned __int8*);
__int64 GameRoutine_f7cf00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f7d5e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f93720();
__int64 GameRoutine_f93800();
__int64 GameRoutine_f9e060(_QWORD, long double);
__int64 GameRoutine_fa03f0(void);
__int64 GameRoutine_fdf60(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_fe8a10(long double);
__int64 GameRoutine_ff6c00(_QWORD, _QWORD);
__int64 GameRoutine_ff7060(_QWORD, _QWORD);
__int64 GameRoutine_ffbe20(_QWORD, _QWORD, long double);
__int64 GameRoutine_ffbf60(_QWORD);
void __attribute__((noreturn)) GameRoutine_ffc160(void);
__int64 GameRoutine_ffc180(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ffc2b0(_QWORD, _QWORD);
_QWORD* GameHr_14a10d0_alt1(_QWORD*, __int64, __int64,
                            __int64) __asm__("GameHr_14a10d0");
__attribute__((swiftcall)) void game_hub_cdf420(PSEUDO_X8, __int64, __int64,
                                                float, float, float);
__int64* Manager_bc6460(_QWORD*, float32x4_t*, char);
__int64* Manager_bc6460_alt1(_QWORD*, __int64, char) __asm__("Manager_bc6460");
__int64 CharacterModel_cf5c00(__int64);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_c6a240(__int64, __int64, unsigned __int64);
__int64 GameRoutine_14a1390_alt1(__int64*, char) __asm__("GameRoutine_14a1390");
__int64 GameRoutine_14a1520_alt1(__int64*, char) __asm__("GameRoutine_14a1520");
__int64 GameRoutine_d783a0_alt1(__int64 result,
                                float) __asm__("GameRoutine_d783a0");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString32(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_anonymous_ProcTimeSlipPerch_vtable[])();
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float GameRoutine_d78a40_alt1(__int64**) __asm__("GameRoutine_d78a40");
float GameRoutine_d78a40_alt2(__int64*) __asm__("GameRoutine_d78a40");
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void snd_Fade_Fade_10c830(__int64, float);
__n128 GameHr_f8c4f0();
void GameHr_f928a0(_QWORD* a1);
void GameHr_f93280(_QWORD* a1);
__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8, __int64*);
__attribute__((swiftcall)) void game_hub_e1b4d0(PSEUDO_X8);
__attribute__((swiftcall)) void game_hub_e1bfe0(PSEUDO_X8, __int64, __int64,
                                                __int64*);
__attribute__((swiftcall)) void game_hub_e1c160(PSEUDO_X8, __int64, char*,
                                                __int64*);
__int64 CmdBtlUnit_e7c3f0(__int64, int, __int16, float);
__int64 GameRoutine_1013de0_alt1(unsigned int,
                                 float) __asm__("GameRoutine_1013de0");
__int64 GameRoutine_a858a0_alt1(__int64 result) __asm__("GameRoutine_a858a0");
__int64 Manager_c444d0(__int64 result, int);
__int64 Manager_e9b550(__int64, int, unsigned int);
__int64 ProcCmdBtlSeqSupportAttack_f9e060(__int64 result);
__int64 ProcLoadWait_9a4d20(int, _QWORD*);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_14a1b00(__int64*, float);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_cmdbtl_Manager_UnitRelocationImpl(_QWORD*, __int64);
__int64 game_edede0(__int64, float, float, float);
__int64 game_hub_102e240(__int64, __int128*, __int64*);
__int64 game_hub_f71fc0(__int64, __int64, __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
bool CmdbtlPartyNatives_e73070(_QWORD*, __int64*);
extern _DWORD* game_g_shared_system_skills_ptr;
extern __int64 fw_memory_g_heap_manager;
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void GameHr_102f080(__int64*, _QWORD*);
void __attribute__((noreturn))
GameRoutine_10064a0_alt1() __asm__("GameRoutine_10064a0");
void __attribute__((noreturn))
GameRoutine_102f050_alt1() __asm__("GameRoutine_102f050");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_graphics_ObjectTransparent_Run(float32x4_t*, char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_f8eee0(__int64 a1);
__int64 GameHr_f9cf10(__int64 a1);
__int64 GameHr_fa05c0(__int64 result);
void GameHr_fb5a40();
void GameHr_fb9850();
void GameHr_1001d80(__int64 a1);
__int64* GameHr_1005520(_QWORD* a1, __int64 a2);
__int64 GameHr_100fe70(__int64* a1);
void GameHr_1013a50(__int64 a1, char a2);
__int64 GameHr_101c1b0(__int64* a1);
void GameHr_102ca20(__int64 a1);
_QWORD* game_hub_MapSimulator_Build_CondTalk(__int64);
_QWORD* game_hub_MapSimulator_Build_MinimapIcon(__int64);
__attribute__((swiftcall)) void
LocatorDispos_db2180(PSEUDO_X8, unsigned __int8*, unsigned __int8*);
__int64* game_hub_f77560(__int64, unsigned __int8*);
__int64* game_hub_f79e00(__int64, unsigned __int8*);
__int64 GameHr_14a1390(__int64*, char);
__int64 GameHr_a867a0(__int64 result);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 GameRoutine_190bf00_alt1(__int64,
                                 _QWORD*) __asm__("GameRoutine_190bf00");
__int64 GameRoutine_e1a560_alt1(__int64, _QWORD*) __asm__("GameRoutine_e1a560");
__int64 GameRoutine_efb6f0_alt1(__int64, __int64,
                                _QWORD*) __asm__("GameRoutine_efb6f0");
__int64 GameRoutine_efbb60_alt1(__int64, __int64*,
                                char) __asm__("GameRoutine_efbb60");
__int64 HubDisposFileReader_Destructor(_QWORD*);
__int64 game_hub_efc3b0(__int64, __int64*, char, __int64);
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 (*game_UnitEdit_vtable[])();
extern __int64* game_spine_g_resource_releaser_ptr;
extern __int64 game_GameModeData_instance_;
void GameHr_102c400(_QWORD*);
void GameHr_102d120(_QWORD*);
void GameHr_f7cf00(__int64*, __int64, __int64, unsigned __int64);
void GameHr_f7d5e0(__int64*, __int64, __int64, unsigned __int64);
void __attribute__((noreturn))
GameRoutine_688200_alt1() __asm__("GameRoutine_688200");
void __attribute__((noreturn))
GameRoutine_cb48b0_alt1() __asm__("GameRoutine_cb48b0");
void __attribute__((noreturn))
GameRoutine_d5f350_alt1() __asm__("GameRoutine_d5f350");
void __attribute__((noreturn))
GameRoutine_ebfd20_alt1() __asm__("GameRoutine_ebfd20");
void game_hub_102d900(__int64);
void game_hub_FastTravelManager_RefreshTravelList(__int64);
void GameHr_fb5cc0(__int64 a1);
_QWORD* GameHr_fb7480(_QWORD* result, __int64 a2);
__int64 GameHr_ff69e0(__int64* a1, _QWORD* a2);
void GameHr_ff6c00(_QWORD* a1, _QWORD* a2);
void GameHr_ff9d40(__int64 a1);
void GameHr_ffc420(__int64 a1);
__int64 GameHr_ffcfa0(__int64* a1);
void GameHr_fffbc0(__int64 a1);
void GameHr_1002260(__int64 a1);
_QWORD* GameHr_1005820(_QWORD* a1, __int64 a2, __int64 a3);
void GameHr_100fc20(__int64 a1);
void GameHr_1015560(__int64 a1);
void GameHr_102abb0(__int64 a1);
__int64 game_d523c0(__int64);
__int64 GameHr_f8dae0(__int64 result);

__n128 GameHr_f8c4f0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __n128 result;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;
  _QWORD v9[4];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               40LL);
  GameHr_c6a240(*(_QWORD*)(v0 + 392), (__int64)"Map/Hub/Hub_100/Hub_100_A1_Dgs",
                0x1Eu),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(_QWORD*)(v0 + 392);
  v2 = *(_QWORD*)(v1 + 544);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 != 0) {
      v4 = *(_QWORD*)(v1 + 536);
      if (v4 != 0) {
        *(_DWORD*)(v4 + 32) = 1065353216;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v5 = v3;
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v5),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
  v9[0] = 0x423433334369C4DDLL;
  v9[1] = 0xC09CCCCD41CEC28FLL;
  v9[2] = 1124722278;
  v9[3] = 0x41F0000040DC3958LL;
  game_hub_cdf420((void*)(&v7_.v7), *(_QWORD*)GameData_212dc60[0], (__int64)v9,
                  0x0.0p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v7_.v8 != 0) {
    return std___1___shared_weak_count___release_weak(v7_.v8);
  }
  return result;
}

__int64 GameHr_f8dae0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v3 = result;
    v4 = *(_QWORD*)(GameData_21ec7c0 + 80);
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
      v7 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 24LL);
      if (*(_BYTE*)(v7 + 96) == 1) {
        *(_BYTE*)(v7 + 96) = 0;
      }
      *(_BYTE*)(v7 + 25) = 0;
      v8 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 24LL);
      *(_BYTE*)(v8 + 25) = 0;
      *(_QWORD*)(v8 + 32) = 0;
      *(_QWORD*)(v8 + 37) = 0;
      *(_BYTE*)(v8 + 48) = 0;
      *(_BYTE*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 80) = 0;
      *(_BYTE*)(v8 + 96) = 1;
      *(_DWORD*)(v8 + 32) = 1086918608;
      *(_QWORD*)(v8 + 56) = *(_QWORD*)(v3 + 184);
      v9 = *(_QWORD*)(v3 + 176);
      *(_BYTE*)(v8 + 64) = 1;
      *(_QWORD*)(v8 + 48) = v9;
      result = game_d523c0(*(_QWORD*)(*(_QWORD*)(v8 + 16) + 488LL));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak_alt2(v5);
    }
  }
  return result;
}

void GameHr_f8eee0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = GameData_212c638;
  if (*(_QWORD*)GameData_212c638 != 0) {
    GameRoutine_a858a0_alt1(*(_QWORD*)GameData_212c638);
    v3 = *(_QWORD*)v2;
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 32LL) - 8LL) +
                         40LL) +
              228LL) = 1;
  }
  else {
    v3 = 0;
  }
  if (GameData_21c9758 != 0) {
    game_graphics_ObjectTransparent_Run((float32x4_t*)GameData_21c9758, 1);
    v3 = *(_QWORD*)v2;
  }
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 32) - 8LL) + 40LL) + 226LL) =
      1;
  v5 = *(__int64**)(a1 + 16);
  v4 = *(__int64**)(a1 + 24);
  v6 = v5;
  if (v5 != v4) {
    v6 = *(__int64**)(a1 + 16);
    while (1) {
      v7 = v6[1];
      if (v7 == 0 || *(_QWORD*)(v7 + 8) == -1) {
        break;
      }
      v6 += 2;
      if (v6 == v4) {
        goto LABEL_23;
      }
    }
  }
  if (v6 == v4 || (v8 = v6 + 2, v6 + 2 == v4)) {
    if (v6 != v4) {
      goto LABEL_25;
    }
  LABEL_23:
    v6 = v4;
    if (v5 == v4) {
      return;
    }
    goto LABEL_29;
  }
  do {
    v9 = v8[1];
    if (v9 != 0 && *(_QWORD*)(v9 + 8) != -1) {
      v10 = *v8;
      *v8 = 0;
      v8[1] = 0;
      v11 = v6[1];
      *v6 = v10;
      v6[1] = v9;
      if (v11 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v11);
      }
      v6 += 2;
    }
    v8 += 2;
  } while (v8 != v4);
  v5 = *(__int64**)(a1 + 16);
  v4 = *(__int64**)(a1 + 24);
  if (v6 == v4) {
    goto LABEL_23;
  }
LABEL_25:
  while (v4 != v6) {
    v16 = *(v4 - 1);
    if (v16 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v16);
    }
    v4 -= 2;
  }
  v5 = *(__int64**)(a1 + 16);
  for (*(_QWORD*)(a1 + 24) = v6; v5 != v6; v5 += 2) {
  LABEL_29:
    v12 = v5[1];
    if (v12 != 0) {
      v13 = std___1___shared_weak_count_lock_alt1(v12);
      if (v13 != 0) {
        v14 = v13;
        if (*v5 != 0) {
          v15 = *(_QWORD*)(*v5 + 32);
          if (v15 == 0) {
            GameRoutine_60a310_alt1();
          }
          (*(void (**)(__int64))(*(_QWORD*)v15 + 48LL))(v15);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak_alt2(v14);
        }
      }
    }
  }
}

void GameHr_f8f3e0(__int64 a1, __int64* a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  unsigned __int64 add;
  bool v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v2 = *(__int64**)(a1 + 16);
  v3 = *(__int64**)(a1 + 24);
  v4 = a2[1];
  if (v4 != 0) {
    v6 = *a2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    if (v2 != v3) {
      while (1) {
        v7 = GameRoutine_1a0a0c0(v4);
        v8 = v2[1];
        v9 = v7 != 0 ? v6 : 0LL;
        if (v8 != 0 && (v10 = GameRoutine_1a0a0c0(v8)) != 0) {
          v11 = v9 == *v2;
          add = atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL);
          v13 = v11;
          if (add == 0) {
            v14 = v10;
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            GameRoutine_1a09c50(v14);
          }
        }
        else {
          v13 = v9 == 0;
        }
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          GameRoutine_1a09c50(v7);
        }
        if (v13) {
          break;
        }
        v2 += 2;
        if (v2 == v3) {
          v2 = v3;
          break;
        }
      }
    }
    GameRoutine_1a09c50(v4);
  }
  else if (v2 != v3) {
    while (1) {
      v21 = v2[1];
      if (v21 == 0) {
        break;
      }
      v22 = GameRoutine_1a0a0c0(v21);
      if (v22 == 0) {
        break;
      }
      v23 = *v2;
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v24 = v22;
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        GameRoutine_1a09c50(v24);
      }
      if (v23 == 0) {
        break;
      }
      v2 += 2;
      if (v2 == v3) {
        v2 = v3;
        break;
      }
    }
  }
  v15 = *(__int64**)(a1 + 24);
  if (v2 != v15) {
    v16 = v2 + 2;
    if (v2 + 2 == v15) {
      if (v2 == v15) {
      LABEL_29:
        *(_QWORD*)(a1 + 24) = v2;
        return;
      }
    }
    else {
      do {
        v18 = *v16;
        v17 = v16[1];
        v19 = *(v16 - 1);
        *v16 = 0;
        v16[1] = 0;
        *(v16 - 2) = v18;
        *(v16 - 1) = v17;
        if (v19 != 0) {
          GameRoutine_1a09c50(v19);
        }
        v16 += 2;
      } while (v16 != v15);
      v15 = *(__int64**)(a1 + 24);
      v2 = v16 - 2;
      if (v16 - 2 == v15) {
        goto LABEL_29;
      }
    }
    do {
      v20 = *(v15 - 1);
      if (v20 != 0) {
        GameRoutine_1a09c50(v20);
      }
      v15 -= 2;
    } while (v15 != v2);
    goto LABEL_29;
  }
}

void GameHr_f928a0(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  float v8;
  __int64* v9;
  __int64* v10;
  int v11;
  bool v12;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  unsigned int v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 i;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64* v33;
  unsigned int v34;
  __int64* v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 j;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64* v48;
  unsigned int v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 k;
  __int64 v58;
  __int64 v59;
  float v62;
  struct {
    __int64* v63;
    __int64 v64;
  } v63_;
  struct {
    float32x4_t v65;
    const char* v66;
    int v67;
    char gap44_[4];
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
  } v65_;

  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2228b08,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2228b08) != 0) {
    GameData_2228a28 = 0;
    GameData_2228a30 = 0;
    GameData_2228a10 = 0;
    GameData_2228a38 = 0;
    GameData_2228a40 = 0;
    GameData_2228a68 = 0;
    GameData_2228a70 = 0;
    GameData_2228a18 = (__int64)GameRoutine_f93720;
    GameData_2228a20 = 0;
    GameData_2228a08 = 13;
    GameData_2228a88 = 13;
    GameData_2228a78 = 0;
    GameData_2228a80 = 0;
    GameData_2228aa0 = 0;
    GameData_2228aa8 = 0;
    GameData_2228ab0 = 0;
    GameData_2228ab8 = 0;
    GameData_2228a48 = 14;
    GameData_2228a90 = 0;
    GameData_2228a98 = (__int64)GameRoutine_f93800;
    GameData_2228ac0 = 0;
    GameData_2228ac8 = 0;
    GameData_2228af0 = 0;
    GameData_2228af8 = 0;
    GameData_2228b00 = 0;
    GameData_2228ae8 = 0;
    GameData_2228ad8 = 0;
    GameData_2228ae0 = 0;
    GameData_2228ad0 = 0;
    GameData_2228a50 = 0;
    GameData_2228a58 = 16;
    GameData_2228a60 = 1;
    __cxa_guard_release(&GameData_2228b08),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = GameData_212c608[0];
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 152) = 0;
  *(_QWORD*)(v2 + 160) = 0;
  *(_QWORD*)(v2 + 168) = 0;
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_WORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = "NULL";
  *(_QWORD*)(v2 + 138) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)v2 = v3 + 16;
  *(_QWORD*)(v2 + 8) = 0;
  game_ProcInst_Register(v2),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v2 + 152) = 0;
  *(_QWORD*)(v2 + 160) = 0;
  *(_DWORD*)(v2 + 168) = 0;
  *(_QWORD*)v2 = game_hub_anonymous_ProcTimeSlipPerch_vtable;
  v4 = a1[5];
  GameData_2228b10 = v2;
  if (v4 != 0) {
    *(_QWORD*)(v4 + 48) = v2;
    *(_QWORD*)(v2 + 56) = a1[5];
  }
  a1[5] = v2;
  *(_QWORD*)(v2 + 24) = "ProcTimeSlipPerch";
  *(_QWORD*)(v2 + 32) = a1;
  *(_DWORD*)(v2 +
             140) = game_HashString32((__int64)"ProcTimeSlipPerch"),
             v19 = COERCE_AS(__typeof__(v19),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
             v34 = COERCE_AS(__typeof__(v34),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
             v49 = COERCE_AS(__typeof__(v49),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v2 + 8) = &GameData_2228a08;
  *(_QWORD*)(v2 + 16) = &GameData_2228a08;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 24;
  v5 = *(_QWORD*)v2;
  *(_QWORD*)(v2 + 80) = 1;
  (*(void (**)(__int64))(v5 + 32))(v2),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2) & 1) != 0 &&
      (*(_WORD*)(v2 + 136) & 0x100) == 0) {
    *(_WORD*)(v2 + 136) |= 0x100u;
  }
  v6 = GameData_2228b10;
  v7 = *(float*)(GameData_2228b10 + 152);
  v8 = *(float*)(GameData_2228b10 + 160);
  v9 = (__int64*)GameData_212c540;
  v10 = (__int64*)GameData_212c548;
  v11 = *(_DWORD*)(GameData_2228b10 + 168);
  *(_DWORD*)(GameData_2228b10 + 168) = 1;
  v65_.v65 = (__typeof__(v65_.v65)){0};
  v12 = v11 == 2;
  v13 = v9[1];
  v14 = v7 * v8;
  if (!v12) {
    v14 = 0x0.0p+0f;
  }
  v65_.v68 = *v9;
  v65_.v69 = v13;
  *(float*)(v6 + 156) = v14;
  v15 = v10[1];
  v65_.v70 = *v10;
  v65_.v71 = v15;
  v16 = v9[1];
  v65_.v72 = *v9;
  v65_.v73 = v16;
  v65_.v67 = 9;
  v65_.v66 = "UI_Deco_GodSkill_Time_SandA";
  v17 = eft_g_effectSystem_ptr[0];
  v18 = Manager_bc6460(*(_QWORD**)eft_g_effectSystem_ptr[0], &v65_.v65, 0),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a10d0(&v63_.v63, (__int64)v18, v19, (__int64)&GameData_1a9f09e),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = v63_.v63;
  v21 = *v63_.v63;
  if (*v63_.v63 != 0 && *(_DWORD*)(v21 + 16) == *((_DWORD*)v63_.v63 + 2)) {
    v22 = *(unsigned int*)(v21 + 36);
    if ((_DWORD)v22 != 0) {
      for (i = 0; i < v22; ++i) {
        v24 = *(_QWORD*)(v21 + 40 + 8 * i);
        if (v24 != 0) {
          *(_DWORD*)(v24 + 408) = 1;
          v22 = *(unsigned int*)(v21 + 36);
        }
      }
    }
  }
  v25 = v63_.v64;
  if (v63_.v64 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v63_.v64 + 8), 1u,
                              memory_order_relaxed);
  }
  v26 = a1[25];
  a1[24] = v20;
  a1[25] = v25;
  if (v26 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v26),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v25 = a1[25];
  }
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v25),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v27 = v63_.v64;
  if (v63_.v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63_.v64 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v27),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v28 = *v9;
  v29 = v9[1];
  v30 = *v10;
  v31 = v10[1];
  v32 = (_QWORD*)*v17;
  v65_.v65 = (__typeof__(v65_.v65)){0};
  v65_.v68 = v28;
  v65_.v69 = v29;
  v65_.v72 = v28;
  v65_.v73 = v29;
  v65_.v70 = v30;
  v65_.v71 = v31;
  v65_.v67 = 9;
  v65_.v66 = "UI_Deco_GodSkill_Time_SandB";
  v33 = Manager_bc6460(v32, &v65_.v65, 0),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a10d0(&v63_.v63, (__int64)v33, v34, (__int64)&GameData_1a9f09e),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = v63_.v63;
  v36 = *v63_.v63;
  if (*v63_.v63 != 0 && *(_DWORD*)(v36 + 16) == *((_DWORD*)v63_.v63 + 2)) {
    v37 = *(unsigned int*)(v36 + 36);
    if ((_DWORD)v37 != 0) {
      for (j = 0; j < v37; ++j) {
        v39 = *(_QWORD*)(v36 + 40 + 8 * j);
        if (v39 != 0) {
          *(_DWORD*)(v39 + 408) = 1;
          v37 = *(unsigned int*)(v36 + 36);
        }
      }
    }
  }
  v40 = v63_.v64;
  if (v63_.v64 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v63_.v64 + 8), 1u,
                              memory_order_relaxed);
  }
  v41 = a1[27];
  a1[26] = v35;
  a1[27] = v40;
  if (v41 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v41),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v40 = a1[27];
  }
  if (v40 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v40),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v42 = v63_.v64;
  if (v63_.v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63_.v64 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v42),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v43 = *v9;
  v44 = v9[1];
  v45 = *v10;
  v46 = v10[1];
  v47 = (_QWORD*)*v17;
  v65_.v65 = (__typeof__(v65_.v65)){0};
  v65_.v68 = v43;
  v65_.v69 = v44;
  v65_.v72 = v43;
  v65_.v73 = v44;
  v65_.v70 = v45;
  v65_.v71 = v46;
  v65_.v67 = 9;
  v65_.v66 = "UI_Deco_GodSkill_Time_Sand_Loop";
  v48 = Manager_bc6460(v47, &v65_.v65, 0),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a10d0(&v63_.v63, (__int64)v48, v49, (__int64)&GameData_1a9f09e),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v50 = v63_.v63;
  v51 = v63_.v64;
  if (v63_.v64 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v63_.v64 + 8), 1u,
                              memory_order_relaxed);
  }
  v52 = a1[23];
  a1[22] = v50;
  a1[23] = v51;
  if (v52 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v52),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v51 = a1[23];
  }
  if (v51 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v51),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v53 = v63_.v64;
  if (v63_.v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63_.v64 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v53),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v54 = (__int64*)a1[22];
  v55 = *v54;
  if (*v54 != 0 && *(_DWORD*)(v55 + 16) == *((_DWORD*)v54 + 2)) {
    v56 = *(unsigned int*)(v55 + 36);
    if ((_DWORD)v56 != 0) {
      for (k = 0; k < v56; ++k) {
        v58 = *(_QWORD*)(v55 + 40 + 8 * k);
        if (v58 != 0) {
          *(_DWORD*)(v58 + 408) = 1;
          v56 = *(unsigned int*)(v55 + 36);
        }
      }
    }
  }
  **(_DWORD**)(*(_QWORD*)GameData_212ebf8[0] + 16LL) = 0;
  v59 = *GameData_212ec50[0];
  GameRoutine_d783a0_alt1(*(_QWORD*)(*GameData_212ec50[0] + 8), 0x0.0p+0f),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v62 = GameRoutine_d78a40_alt1(*(__int64***)(v59 + 8)),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v62 == 0x1.0000000000000p+0f) {
    if (*(_BYTE*)(v59 + 16) != 1) {
      return;
    }
  }
  else {
    *(_BYTE*)(v59 + 16) = 1;
  }
  *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) = v62;
}

void GameHr_f93280(_QWORD* a1)
{

#pragma clang fp contract(off)
  _DWORD* v1;
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  unsigned int v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 i;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64* v28;
  unsigned int v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 j;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  float v36;
  float v37;
  float v38;
  __int64 v39;
  float v40;
  __int64 v41;
  __int64 k;
  _QWORD* v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  bool v49;
  bool v50;
  __int64 v52;
  __int64 v53;
  struct {
    _DWORD* v54;
    __int64 v55;
    const char* v56;
    int v57;
    char gap28_[4];
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
  } v54_;
  struct {
    __int64* v64;
    __int64 v65;
  } v64_;
  struct {
    __int64* v66;
    __int64 v67;
  } v66_;
  unsigned int v68;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = (_DWORD*)a1[22];
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    v3 = a1[23];
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      v54_.v55 = v3;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v54_.v55 = 0;
    }
    v54_.v54 = v1;
    GameRoutine_14a1520_alt1((__int64*)&v54_.v54, 1),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = v54_.v55;
    if (v54_.v55 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v54_.v55 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v4),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v3),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    *(_QWORD*)a1[22] = 0;
  }
  v5 = (_DWORD*)a1[24];
  if (*(_QWORD*)v5 != 0 && *(_DWORD*)(*(_QWORD*)v5 + 16LL) == v5[2]) {
    GameRoutine_14a1390_alt1(a1 + 24, 1),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v8 = (_QWORD*)a1[26];
  v7 = a1 + 26;
  v6 = v8;
  v9 = *v8;
  if (*v8 != 0 && *(_DWORD*)(v9 + 16) == *((_DWORD*)v6 + 2)) {
    GameRoutine_14a1390_alt1(v7, 1),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v10 = (__int64*)GameData_212c540;
  v11 = (__int64*)GameData_212c548;
  v54_.v54 = nullptr;
  v54_.v55 = 0;
  v12 = *((_QWORD*)GameData_212c540 + 1);
  v13 = *(_QWORD*)GameData_212c548;
  v14 = *((_QWORD*)GameData_212c548 + 1);
  v54_.v58 = *(_QWORD*)GameData_212c540;
  v54_.v59 = v12;
  v54_.v62 = v54_.v58;
  v54_.v63 = v12;
  v54_.v60 = v13;
  v54_.v61 = v14;
  v54_.v57 = 9;
  v54_.v56 = "UI_Deco_GodSkill_Time_SandC";
  v15 = eft_g_effectSystem_ptr[0];
  v16 = Manager_bc6460_alt1(*(_QWORD**)eft_g_effectSystem_ptr[0],
                            (__int64)&v54_.v54, 0),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a10d0_alt1(&v66_.v66, (__int64)v16, v17, (__int64)&GameData_1a9f09e),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = *v66_.v66;
  if (*v66_.v66 != 0 && *(_DWORD*)(v18 + 16) == *((_DWORD*)v66_.v66 + 2)) {
    v19 = *(unsigned int*)(v18 + 36);
    if ((_DWORD)v19 != 0) {
      for (i = 0; i < v19; ++i) {
        v21 = *(_QWORD*)(v18 + 40 + 8 * i);
        if (v21 != 0) {
          *(_DWORD*)(v21 + 408) = 1;
          v19 = *(unsigned int*)(v18 + 36);
        }
      }
    }
  }
  v22 = v66_.v67;
  if (v66_.v67 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v66_.v67 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt2(v22),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v23 = *v10;
  v24 = v10[1];
  v25 = *v11;
  v26 = v11[1];
  v27 = (_QWORD*)*v15;
  v54_.v54 = nullptr;
  v54_.v55 = 0;
  v54_.v58 = v23;
  v54_.v59 = v24;
  v54_.v62 = v23;
  v54_.v63 = v24;
  v54_.v60 = v25;
  v54_.v61 = v26;
  v54_.v57 = 9;
  v54_.v56 = "UI_Deco_GodSkill_Time_SandD";
  v28 = Manager_bc6460_alt1(v27, (__int64)&v54_.v54, 0),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a10d0_alt1(&v64_.v64, (__int64)v28, v29, (__int64)&GameData_1a9f09e),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = *v64_.v64;
  if (*v64_.v64 != 0 && *(_DWORD*)(v30 + 16) == *((_DWORD*)v64_.v64 + 2)) {
    v31 = *(unsigned int*)(v30 + 36);
    if ((_DWORD)v31 != 0) {
      for (j = 0; j < v31; ++j) {
        v33 = *(_QWORD*)(v30 + 40 + 8 * j);
        if (v33 != 0) {
          *(_DWORD*)(v33 + 408) = 1;
          v31 = *(unsigned int*)(v30 + 36);
        }
      }
    }
  }
  v34 = v64_.v65;
  if (v64_.v65 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v64_.v65 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt2(v34),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v68 = (unsigned int)snd_fnd_calcCrc32("SE_Fade", 0),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  snd_Fade_Fade_10c830((__int64)&v54_.v54, 0x1.f400000000000p+8f),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  snd_startSlotVolume_100b50((int*)&v68, (__int64)&v54_.v54,
                             0x1.0000000000000p+0f),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  snd_Fade_Destroy_Fade(&v54_.v54),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = GameData_2228b10;
  v36 = *(float*)(GameData_2228b10 + 164);
  v49 = *(_DWORD*)(GameData_2228b10 + 168) == 1;
  v37 = 0x1.0000000000000p+0f - *(float*)(GameData_2228b10 + 152);
  *(_DWORD*)(GameData_2228b10 + 168) = 2;
  v38 = v37 * v36;
  if (!v49) {
    v38 = 0x0.0p+0f;
  }
  *(float*)(v35 + 156) = v38;
  **(_DWORD**)(*(_QWORD*)GameData_212ebf8[0] + 16LL) = 1065353216;
  v39 = *GameData_212ec50[0];
  GameRoutine_d783a0_alt1(*(_QWORD*)(*GameData_212ec50[0] + 8), 0x0.0p+0f),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v40 = GameRoutine_d78a40_alt2(*(__int64**)(v39 + 8)),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v40 == 0x1.0000000000000p+0f) {
    if (*(_BYTE*)(v39 + 16) != 1) {
      goto LABEL_45;
    }
  }
  else {
    *(_BYTE*)(v39 + 16) = 1;
  }
  *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) = v40;
LABEL_45:
  v41 = *(_QWORD*)(*GameData_212d458[0] + 24);
  for (k = *(_QWORD*)(*GameData_212d458[0] + 32); v41 != k; v41 += 16) {
    v43 = *(_QWORD**)v41;
    if ((*(_BYTE*)(*(_QWORD*)v41 + 296LL) & 1) != 0 && v43[38] == 25) {
      v44 = (__int64*)v43[39];
      v45 = v44[2];
      v46 = *v44;
      v47 = v44[1];
      v48 = *((unsigned __int8*)v44 + 24);
      v49 = v46 == 0xE3A482E35F444950LL && v47 == 0x9E83E3A583E3B782LL;
      v50 = v49 && v45 == 0xB3E9AB83E3BC83E3LL;
      if (v50 && v48 == 165) {
        continue;
      }
    }
    v52 = *(_QWORD*)(*(_QWORD*)(v43[3] + 8LL) + 328LL);
    v53 = *(_QWORD*)(v52 + 360);
    *(_QWORD*)(v52 + 336) = 0x3F8000003F800000LL;
    *(_DWORD*)(v52 + 352) = 0;
    *(_BYTE*)(v52 + 356) = 1;
    *(_BYTE*)(v52 + 369) = 1;
    CharacterModel_cf5c00(v53),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

float GameHr_f93720(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  float result;

  v1 = *(_QWORD*)(GameData_21a60d8 + 13224);
  v2 = *(_QWORD*)(v1 + 48);
  v3 = *(_QWORD*)(v1 + 56);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v4 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 288LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v5 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      GameRoutine_1a09c50(v3);
      a1 = v5;
    }
  }
  else {
    v4 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 288LL);
  }
  v6 = *(_DWORD*)(v4 + 744);
  *(_WORD*)(v4 + 89) = 257;
  *(_BYTE*)(v4 + 712) = 1;
  v7 = *(unsigned __int8*)(v4 + 792);
  *(_DWORD*)(v4 + 708) = v6;
  v8 = v7 == 0;
  v9 = 824;
  if (!v8) {
    v9 = 788;
  }
  *(_DWORD*)(a1 + 160) = *(_DWORD*)(v4 + v9);
  v10 = 904;
  if (*(_BYTE*)(v4 + 872) != 0) {
    v10 = 868;
  }
  result = *(float*)(v4 + v10);
  *(float*)(a1 + 164) = result;
  return result;
}

void GameHr_f93800()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v0 = *(_QWORD*)(GameData_21a60d8 + 13224);
  v1 = *(_QWORD*)(v0 + 48);
  v2 = *(_QWORD*)(v0 + 56);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    v3 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 288LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      GameRoutine_1a09c50(v2);
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

__n128 GameHr_f93d90(unsigned __int64 a1)
{
  int v1;
  __int64 v2;
  const char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __n128 result;
  char v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  char* v23;
  char* v24;
  char* v25;
  unsigned __int64 v26;
  long double v27;
  unsigned __int64 v28;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _BYTE* v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  _BYTE* v42;
  __int64 v43;
  char* v44;
  unsigned __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;

  v1 = *(_DWORD*)(GameData_21f3cc0 + 92);
  switch (v1) {
  case 3:
    v2 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32, 16, 0);
    v49 = 33;
    v50 = 24;
    v51 = (char*)v2;
    v3 = "MID_AreaTelop_UpperLayer";
    goto LABEL_7;
  case 2:
    v2 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32, 16, 0);
    v49 = 33;
    v50 = 25;
    v51 = (char*)v2;
    *(_WORD*)(v2 + 24) = 114;
    v4 = *(_QWORD*)"MID_AreaTelop_MiddleLayer";
    v5 = *(_QWORD*)"Telop_MiddleLayer";
    v6 = *(_QWORD*)"ddleLayer";
  LABEL_8:
    *(_QWORD*)v2 = v4;
    *(_QWORD*)(v2 + 8) = v5;
    *(_QWORD*)(v2 + 16) = v6;
    goto LABEL_9;
  case 1:
    v2 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32, 16, 0);
    v49 = 33;
    v3 = "MID_AreaTelop_UnderLayer";
    v50 = 24;
    v51 = (char*)v2;
  LABEL_7:
    v4 = *(_QWORD*)v3;
    v5 = *((_QWORD*)v3 + 1);
    v6 = *((_QWORD*)v3 + 2);
    *(_BYTE*)(v2 + 24) = 0;
    goto LABEL_8;
  default:
    break;
  }
  v13 = *(unsigned __int8*)(GameData_21f3d10 + 64);
  v14 = (v13 & 1) == 0;
  v15 = v13 >> 1;
  if (v14) {
    v16 = v15;
  }
  else {
    v16 = *(_QWORD*)(GameData_21f3d10 + 72);
  }
  if (v14) {
    v17 = GameData_21f3d10 + 65;
  }
  else {
    v17 = *(_QWORD*)(GameData_21f3d10 + 80);
  }
  v18 = v16 + 3;
  if (v16 + 3 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_110;
  }
  if (v18 > 0x16) {
    if ((v18 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v18 | 7) + 1;
    }
    v20 = GameRoutine_651b90(GameData_2265ee0, v21, 16, 0);
    v50 = v16 + 3;
    v51 = (char*)v20;
    v49 = v21 | 1;
    v19 = v21 | 1;
  }
  else {
    v19 = 2 * v18;
    v20 = 0;
    v50 = 0;
    v51 = nullptr;
    v49 = (unsigned __int8)(2 * v18);
  }
  v22 = (v19 & 1) == 0;
  if ((v19 & 1) != 0) {
    v23 = (char*)v20;
  }
  else {
    v23 = (char*)&v49 + 1;
  }
  v23[2] = 95;
  *(_WORD*)v23 = 19540;
  if (v22) {
    v24 = (char*)&v49 + 4;
  }
  else {
    v24 = (char*)(v20 + 3);
  }
  if (v16 != 0) {
    GameRoutine_1a0b940(v24, v17, v16);
  }
  v24[v16] = 0;
  if ((v49 & 1) != 0) {
    v25 = v51;
  }
  else {
    v25 = (char*)&v49 + 1;
  }
  v26 = GameRoutine_7a86e0(v25);
  if (v26 != 0) {
    v28 = *(_QWORD*)(GameData_2212500 + 96);
    if (v28 != 0 && *(_QWORD*)(GameData_2212500 + 112) != 0) {
      v30 = v28 - 1;
      if ((v28 & (v28 - 1)) != 0) {
        v31 = v26;
        if (v26 >= v28) {
          v31 = v26 % v28;
        }
      }
      else {
        v31 = v30 & v26;
      }
      v32 = *(_QWORD**)(*(_QWORD*)(GameData_2212500 + 88) + 8 * v31);
      if (v32 != nullptr) {
        v33 = (_QWORD*)*v32;
        if (v33 != nullptr) {
          if ((v28 & v30) == 0) {
            while (1) {
              v36 = v33[1];
              if (v36 == v26) {
                if (v33[2] == v26) {
                  goto LABEL_108;
                }
              }
              else if ((v36 & v30) != v31) {
                goto LABEL_71;
              }
              v33 = (_QWORD*)*v33;
              v35 = 0;
              if (v33 == nullptr) {
                goto LABEL_72;
              }
            }
          }
          do {
            v34 = v33[1];
            if (v34 == v26) {
              if (v33[2] == v26) {
              LABEL_108:
                v35 = v33[3];
                if ((v49 & 1) != 0) {
                  goto LABEL_73;
                }
                goto LABEL_77;
              }
            }
            else {
              if (v34 >= v28) {
                v34 %= v28;
              }
              if (v34 != v31) {
                break;
              }
            }
            v33 = (_QWORD*)*v33;
          } while (v33 != nullptr);
        }
      }
    }
  }
LABEL_71:
  v35 = 0;
LABEL_72:
  if ((v49 & 1) != 0) {
  LABEL_73:
    if (v51 != nullptr) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v37 = 56;
      }
      *(__n128*)&v27 =
          GameRoutine_1a0a4e0_alt9(*(_QWORD*)GameData_212bf68 + v37);
    }
  }
LABEL_77:
  if (v35 == 0 || (v38 = *(_BYTE**)(v35 + 32)) == nullptr || *v38 == 0) {
    v41 = GameRoutine_d540c0(GameData_21f3d10);
    if (v41 == 0) {
      goto LABEL_95;
    }
    v42 = *(_BYTE**)(v41 + 32);
    if (v42 == nullptr || *v42 == 0) {
      goto LABEL_95;
    }
    v43 = GameRoutine_adf880();
    if (v43 != 0) {
      v44 = (char*)v43;
    }
    else {
      v44 = &GameData_1a9f09e;
    }
    a1 = GameRoutine_1a09c70(v44);
    if (a1 < 0xFFFFFFFFFFFFFFF7LL) {
      v45 = a1;
      if (a1 >= 0x17) {
        if ((a1 | 7) == 0x17) {
          v47 = 26;
        }
        else {
          v47 = (a1 | 7) + 1;
        }
        v46 = (char*)GameRoutine_651b90(GameData_2265ee0, v47, 16, 0);
        v50 = v45;
        v51 = v46;
        v49 = v47 | 1;
      }
      else {
        LOBYTE(v49) = 2 * a1;
        v46 = (char*)&v49 + 1;
        if (a1 == 0) {
          goto LABEL_101;
        }
      }
      GameRoutine_1a0b940(v46, v44, v45);
    LABEL_101:
      v46[v45] = 0;
      goto LABEL_9;
    }
  LABEL_110:
    GameRoutine_60a1d0(a1);
  }
  if ((unsigned int)GameRoutine_1a09d30(v38, &GameData_1a99a9b, v27) == 0) {
  LABEL_95:
    LOWORD(v49) = 0;
    goto LABEL_9;
  }
  a1 = GameRoutine_1a09c70(v38);
  if (a1 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_110;
  }
  v39 = a1;
  if (a1 >= 0x17) {
    if ((a1 | 7) == 0x17) {
      v48 = 26;
    }
    else {
      v48 = (a1 | 7) + 1;
    }
    v40 = (char*)GameRoutine_651b90(GameData_2265ee0, v48, 16, 0);
    v50 = v39;
    v51 = v40;
    v49 = v48 | 1;
  }
  else {
    LOBYTE(v49) = 2 * a1;
    v40 = (char*)&v49 + 1;
    if (a1 == 0) {
      goto LABEL_107;
    }
  }
  GameRoutine_1a0b940(v40, v38, v39);
LABEL_107:
  v40[v39] = 0;
LABEL_9:
  v7 = GameRoutine_dbcd30(*(_QWORD*)GameData_212c6a0[0], &v49);
  v9 = v49;
  if ((v7 & 1) != 0) {
    v10 = v50;
    if ((v49 & 1) == 0) {
      v10 = (unsigned __int64)(unsigned __int8)v49 >> 1;
    }
    if (v10 != 0) {
      if ((v49 & 1) != 0) {
        v11 = v51;
      }
      else {
        v11 = (char*)&v49 + 1;
      }
      GameRoutine_1782140(v11);
      v9 = v49;
    }
  }
  if ((v9 & 1) != 0 && v51 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v12 = 56;
    }
    return GameRoutine_1a0a4e0_alt9(*(_QWORD*)GameData_212bf68 + v12);
  }
  return result;
}

__int64 GameHr_f9cf10(__int64 a1)
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
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;
  struct {
    __int16 v32;
    char gap26_[6];
    __int64 v33;
    __int64 v34;
  } v32_;

  v2 = GameData_212ea58;
  v3 = (_QWORD*)*GameData_212ea58;
  v4 = *(_QWORD*)(*GameData_212ea58 + 760);
  if (v4 != 0) {
    v5 = v3[94];
    v6 = *(_QWORD*)(*GameData_212ea58 + 760);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock_alt1(v6);
    if (v7 != 0) {
      v8 = v5;
    }
    else {
      v8 = 0;
    }
  }
  else {
    v7 = 0;
    v8 = 0;
  }
  v9 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(a1 + 176) = v8;
  *(_QWORD*)(a1 + 184) = v7;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt2(v9);
  }
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v4);
  }
  v10 = *v2;
  v11 = *(_QWORD*)(*v2 + 1240);
  if (v11 != 0) {
    v12 = *(_QWORD*)(v10 + 1232);
    v13 = *(_QWORD*)(*v2 + 1240);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    v14 = std___1___shared_weak_count_lock_alt1(v13);
    std___1___shared_weak_count___release_weak_alt2(v11);
    Manager_e9b550(v10, *(_DWORD*)(v12 + 8), 0);
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak_alt2(v14);
    }
  }
  else {
    Manager_e9b550(*v2, (int)&GameData_1a0d058, 0);
  }
  v15 = *v2;
  v16 = v3[94];
  v17 = v3[95];
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
  }
  v18 = *(_QWORD*)(v15 + 1256);
  *(_QWORD*)(v15 + 1248) = v16;
  *(_QWORD*)(v15 + 1256) = v17;
  if (v18 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v18);
  }
  if (v17 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v17);
  }
  v19 = *(_QWORD*)(*v2 + 1240);
  if (v19 != 0) {
    v20 = *(_QWORD*)(*v2 + 1232);
    v21 = 1;
    v22 = *(_QWORD*)(*v2 + 1240);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v23 = std___1___shared_weak_count_lock_alt1(v22);
    if (v23 == 0) {
      v20 = 0;
    }
    std___1___shared_weak_count___release_weak_alt2(v19);
    v30_.v30 = v20;
    v30_.v31 = v23;
    if (v23 != 0) {
      v21 = 0;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                                memory_order_relaxed);
    }
  }
  else {
    v23 = 0;
    v30_.v30 = 0;
    v30_.v31 = 0;
    v21 = 1;
  }
  CmdbtlPartyNatives_e73070(v3 + 84, &v30_.v30);
  if (v30_.v31 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v30_.v31);
  }
  if ((v21 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt2(v23);
  }
  ProcCmdBtlSeqSupportAttack_f9e060(1);
  v24 = (_QWORD*)*v2;
  v32_.v33 = 0;
  v32_.v34 = 0;
  v32_.v32 = 256;
  game_cmdbtl_Manager_UnitRelocationImpl(v24, (__int64)&v32_.v32);
  if (v32_.v34 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v32_.v34);
  }
  GameData_221beb0 |= 0x1D800u;
  v25 = *(_QWORD*)(*v2 + 1240);
  if (v25 == 0) {
    return CmdBtlUnit_e7c3f0(0, 3, 256, 0x0.0p+0f);
  }
  v26 = *(_QWORD*)(*v2 + 1232);
  v27 = *(_QWORD*)(*v2 + 1240);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                            memory_order_relaxed);
  v28 = std___1___shared_weak_count_lock_alt1(v27);
  std___1___shared_weak_count___release_weak_alt2(v25);
  result = CmdBtlUnit_e7c3f0(v26, 3, 256, 0x0.0p+0f);
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    return std___1___shared_weak_count___release_weak_alt2(v28);
  }
  return result;
}

__n128 GameHr_fa0180(_QWORD* a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  *a1 = GameData_1ff90f8;
  GameRoutine_fa03f0();
  GameRoutine_14a1390(a1 + 15, 1);
  GameRoutine_14a1390(a1 + 17, 1);
  GameRoutine_14a1390(a1 + 19, 1);
  GameRoutine_14a1390(a1 + 21, 1);
  GameRoutine_14a1390(a1 + 23, 1);
  GameRoutine_14a1390(a1 + 25, 1);
  GameRoutine_14a1390(a1 + 27, 1);
  GameRoutine_14a1390(a1 + 29, 1);
  GameRoutine_14a1390(a1 + 31, 1);
  v3 = a1[32];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = GameRoutine_1a09c50(v3);
  }
  v4 = a1[30];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 16LL))(
        v4, *(long double*)&result);
    result = GameRoutine_1a09c50(v4);
  }
  v5 = a1[28];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(
        v5, *(long double*)&result);
    result = GameRoutine_1a09c50(v5);
  }
  v6 = a1[26];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 16LL))(
        v6, *(long double*)&result);
    result = GameRoutine_1a09c50(v6);
  }
  v7 = a1[24];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v7 + 16LL))(
        v7, *(long double*)&result);
    result = GameRoutine_1a09c50(v7);
  }
  v8 = a1[22];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(
        v8, *(long double*)&result);
    result = GameRoutine_1a09c50(v8);
  }
  v9 = a1[20];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(
        v9, *(long double*)&result);
    result = GameRoutine_1a09c50(v9);
  }
  v10 = a1[18];
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v10 + 16LL))(
        v10, *(long double*)&result);
    result = GameRoutine_1a09c50(v10);
    v11 = a1[16];
    if (v11 == 0) {
      return result;
    }
  }
  else {
    v11 = a1[16];
    if (v11 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v11 + 16LL))(
        v11, *(long double*)&result);
    return GameRoutine_1a09c50(v11);
  }
  return result;
}

__int64 GameHr_fa05c0(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64* v19;
    __int64 v20;
  } v19_;
  struct {
    _QWORD v21[2];
    __int64 v22;
  } v21_;

  if ((*(_BYTE*)(result + 20) & 1) == 0) {
    v1 = result;
    *(_BYTE*)(result + 20) = 1;
    v2 = (__int64*)GameData_212dc48[0];
    v3 = *(_QWORD*)GameData_212dc48[0];
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v18 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v18;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    }
    game_hub_e1b4d0((void*)(v21_.v21));
    game_hub_e1bfe0((void*)(&v19_.v19), v3, (__int64)v21_.v21,
                    (__int64*)&GameData_21a6120);
    if ((v21_.v21[0] & 1) != 0 && v21_.v22 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v21_.v22);
    }
    v5 = v19_.v19;
    v6 = v19_.v20;
    if (v19_.v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19_.v20 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = *(_QWORD*)(v1 + 128);
    *(_QWORD*)(v1 + 120) = v5;
    *(_QWORD*)(v1 + 128) = v6;
    if (v7 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt2(v7);
      }
      v6 = *(_QWORD*)(v1 + 128);
    }
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt2(v6);
      }
    }
    v8 = v19_.v20;
    if (v19_.v20 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v19_.v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt2(v8);
    }
    v9 = (__int64*)(v1 + 144);
    v10 = 128;
    while (1) {
      v11 = *v2;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
        v17 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v17;
        __cxa_guard_release_alt1((__int64)&GameData_21a6130);
      }
      game_hub_e1b4d0((void*)(v21_.v21));
      game_hub_e1bfe0((void*)(&v19_.v19), v11, (__int64)v21_.v21,
                      (__int64*)&GameData_21a6120);
      if ((v21_.v21[0] & 1) != 0 && v21_.v22 != 0) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v21_.v22);
      }
      v13 = v19_.v19;
      v14 = v19_.v20;
      if (v19_.v20 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19_.v20 + 8), 1u,
                                  memory_order_relaxed);
      }
      v15 = *v9;
      *(v9 - 1) = (__int64)v13;
      *v9 = v14;
      if (v15 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak_alt2(v15);
        }
        v14 = *v9;
      }
      if (v14 != 0 &&
          (atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                     memory_order_relaxed),
           atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                            0xFFFFFFFFFFFFFFFFLL) == 0)) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak_alt2(v14);
        v16 = v19_.v20;
        if (v19_.v20 != 0) {
        LABEL_37:
          if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            std___1___shared_weak_count___release_weak_alt2(v16);
          }
        }
      }
      else {
        v16 = v19_.v20;
        if (v19_.v20 != 0) {
          goto LABEL_37;
        }
      }
      v9 += 2;
      v10 -= 16;
      if (v10 == 0) {
        game_14a1b00(*(__int64**)(v1 + 120), *(float*)(v1 + 8));
        game_14a1b00(*(__int64**)(v1 + 136), *(float*)(v1 + 8));
        game_14a1b00(*(__int64**)(v1 + 152), *(float*)(v1 + 8));
        game_14a1b00(*(__int64**)(v1 + 168), *(float*)(v1 + 8));
        game_14a1b00(*(__int64**)(v1 + 184), *(float*)(v1 + 8));
        game_14a1b00(*(__int64**)(v1 + 200), *(float*)(v1 + 8));
        game_14a1b00(*(__int64**)(v1 + 216), *(float*)(v1 + 8));
        game_14a1b00(*(__int64**)(v1 + 232), *(float*)(v1 + 8));
        return game_14a1b00(*(__int64**)(v1 + 248), *(float*)(v1 + 8));
      }
    }
  }
  return result;
}

__int64 GameHr_fa54a0(__int64 a1)
{
  __int64 v1;
  _QWORD* v3;
  _QWORD* v4;
  __int64 result;
  long double v6;
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

  v1 = *(int*)(a1 + 176);
  v3 = (_QWORD*)(*(_QWORD*)(a1 + 152) + 16 * v1);
  v4 = (_QWORD*)*v3;
  result = GameRoutine_8c4ee0(*v3);
  if ((result & 1) == 0) {
    v15 = *(_QWORD*)(a1 + 8);
    if (v15 == 0) {
      goto LABEL_21;
    }
    while (1) {
      if (*(_BYTE*)v15 == 2) {
        if (*(_DWORD*)(v15 + 32) == 1) {
          *(_QWORD*)(a1 + 16) = v15;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          goto LABEL_21;
        }
      }
      else if (*(_BYTE*)v15 == 0) {
        goto LABEL_21;
      }
      v15 += 64;
    }
  }
  *(_QWORD*)(a1 + 184) = *v4;
  v8 = *v3;
  v7 = v3[1];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  v9 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)(a1 + 192) = v8;
  *(_QWORD*)(a1 + 200) = v7;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    *(__n128*)&v6 = GameRoutine_1a09c50(v9);
  }
  v10 = *(_QWORD*)(a1 + 184);
  *(_DWORD*)(a1 + 208) = *(unsigned __int8*)(v10 + 498);
  v11 = *(_QWORD*)(v10 + 522);
  v12 = *(_QWORD*)(v10 + 530);
  v13 = *(_QWORD*)(v10 + 538);
  *(_QWORD*)(a1 + 249) = *(_QWORD*)(v10 + 545);
  *(_QWORD*)(a1 + 242) = v13;
  *(_QWORD*)(a1 + 234) = v12;
  *(_QWORD*)(a1 + 226) = v11;
  *(_QWORD*)(a1 + 218) = *(_QWORD*)(v10 + 514);
  if (a1 + 216 != v10 + 512) {
    GameRoutine_7fb640(a1 + 264, v6);
    v10 = *(_QWORD*)(a1 + 184);
  }
  v14 = GameRoutine_6c4610(v10);
  result = a1 + 288;
  if (a1 + 288 == v14) {
    *(_DWORD*)(a1 + 312) = *(_DWORD*)(v14 + 24);
  }
  else {
    GameRoutine_7fb7c0();
    *(_DWORD*)(a1 + 312) = *(_DWORD*)(v14 + 24);
    GameRoutine_7fb930(a1 + 320);
    result = GameRoutine_7fb930(a1 + 344);
  }
  v16 = *(_QWORD*)(v14 + 80);
  v17 = *(_QWORD*)(v14 + 88);
  LODWORD(v1) = *(_DWORD*)(a1 + 176);
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 368) = v16;
  *(_QWORD*)(a1 + 376) = v17;
  *(_QWORD*)(a1 + 400) = *(_QWORD*)(a1 + 392);
LABEL_21:
  *(_DWORD*)(a1 + 176) = v1 + 1;
  return result;
}

void GameHr_fa6720(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v9 = 0;
  v10 = 0;
  GameRoutine_16dcd30(a1, a2, &v9, 0);
  v3 = v10;
  *a1 = GameData_209d8c0;
  a1[22] = GameData_209dd28;
  a1[132] = GameData_209ddf8;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    GameRoutine_1a09c50(v3);
  }
  *a1 = GameData_1ff9b60;
  a1[22] = GameData_1ff9fd0;
  a1[132] = GameData_1ffa0a0;
  v4 = GameData_212dcd0;
  if (*GameData_212dcd0 != 0) {
    ++GameData_21f3ff4;
  }
  else {
    v5 = (__int64*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 96, 16, 0);
    v6 = v5;
    if (*v4 == 0) {
      *v4 = (__int64)v5;
      *GameData_212dcd8 = 1;
    }
    v7 = GameData_212dcc8[0];
    v5[6] = 0;
    v5[7] = 0;
    v5[8] = 0;
    v5[9] = 0;
    v5[10] = 0;
    v5[11] = 0;
    v5[2] = -1;
    v5[3] = -1;
    v5[4] = -1;
    v5[5] = -1;
    *v5 = (__int64)(v7 + 2);
    v5[1] = -1;
    GameRoutine_145c3e0();
    v8 = *v6;
    *v4 = (__int64)v6;
    (*(void (**)(__int64*))(v8 + 16))(v6);
  }
}

void GameHr_fb5a40()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64* v9;
    __int64 v10;
  } v9_;
  struct {
    _QWORD v11[2];
    __int64 v12;
  } v11_;

  v0 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock_alt1(v2);
    std___1___shared_weak_count___release_weak_alt2(v0);
    if (v3 == 0 || v1 == 0) {
      if (v3 == 0) {
        return;
      }
    }
    else {
      v5 = *(_QWORD*)GameData_212dc48[0];
      v6 = *(_QWORD*)(*(_QWORD*)(v1 + 24) + 16LL);
      game_hub_e1b4d0((void*)(v11_.v11));
      game_hub_e1bfe0((void*)(&v9_.v9), v5, (__int64)v11_.v11,
                      (__int64*)(v6 + 560));
      if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v11_.v12);
      }
      v8 = v9_.v10;
      if (v9_.v10 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v9_.v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt2(v8);
      }
      *(_QWORD*)(v1 + 1068) = 0x3F0000003F800000LL;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt2(v3);
    }
  }
}

void GameHr_fb5cc0(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  _QWORD v22[3];
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;
  __int64 v25[2];

  v1 = *(__int64**)(GameData_21ec7c0 + 24);
  v2 = *(__int64**)(GameData_21ec7c0 + 32);
  if (v1 != v2) {
    while (1) {
      v3 = *v1;
      v4 = *(unsigned __int8*)(*v1 + 320);
      v5 = *(_QWORD*)(*v1 + 328);
      if ((v4 & 1) == 0) {
        v5 = v4 >> 1;
      }
      if (v5 == 12) {
        v6 = (v4 & 1) != 0 ? *(__int64**)(v3 + 336) : (__int64*)(v3 + 321);
        v7 = *v6;
        v8 = *((_DWORD*)v6 + 2);
        if (v7 == 0x83E3A982E39583E3LL && v8 == -1971068024) {
          break;
        }
      }
      v1 += 2;
      if (v1 == v2) {
        return;
      }
    }
    v10 = v1[1];
    if (v10 != 0) {
      v12 = v1[1];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                memory_order_relaxed);
      v13 = std___1___shared_weak_count_lock_alt1(v12);
      std___1___shared_weak_count___release_weak_alt2(v10);
      if (v13 != 0) {
        v15 = (__int64*)GameData_212dbf0[0];
        v25[0] = v3;
        v25[1] = v13;
        v16 = *(_QWORD*)GameData_212dbf0[0];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_efbb60_alt1(v16, v25, 1);
        std___1___shared_weak_count___release_weak_alt2(v13);
        v17 = *v15;
        v23_.v23 = v3;
        v23_.v24 = v13;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                  memory_order_relaxed);
        game_hub_efc3b0(v17, &v23_.v23, 1, 0x13F99999ALL);
        if (v23_.v24 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v23_.v24);
        }
        v18 = *v15;
        v19 = fw_memory_g_heap_manager_ptr;
        v20 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
        v22[0] = 41;
        v22[1] = 33;
        v22[2] = v20;
        strcpy(v20, "MID_LGV_LG00_099_Part1NoClear_m01");
        GameRoutine_efb6f0_alt1(v18, a1, v22);
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v21, (__int64)v20);
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak_alt2(v13);
        }
      }
    }
  }
}

__int64 GameHr_fb6e10(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v12;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 == 0) {
  LABEL_22:
    v10 = *(_QWORD*)(a1 + 16);
    return v10 != 0 && (*(_BYTE*)(v10 + 1760) & 2) != 0;
  }
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 24) + 16LL) + 8LL) +
                 387LL) &
       0x40) != 0) {
    return 0;
  }
  v2 = *(_DWORD*)(v1 + 1248);
  if ((v2 & 2) != 0) {
    return 5;
  }
  v3 = *(_QWORD*)(v1 + 112);
  if (v3 == 0 || *(_QWORD*)(v3 + 8) == -1) {
    goto LABEL_12;
  }
  if ((v2 & 8) != 0) {
    return 4;
  }
  if ((v2 & 4) == 0) {
    if (*(_QWORD*)(v3 + 8) != -1 && *(_DWORD*)(v1 + 1160) == 4) {
      return 1;
    }
  LABEL_12:
    v5 = a1;
    v12 = *(_QWORD*)(v1 + 16);
    if ((GameRoutine_1212140(&v12) & 1) != 0) {
      return 1;
    }
    v6 = *(_QWORD*)(v5 + 8);
    a1 = v5;
    v7 = *(_QWORD*)(v6 + 760);
    v8 = *(_QWORD*)(v6 + 768);
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v7 != 0 && *(_BYTE*)(v7 + 300) == 1 && (*(_BYTE*)(v7 + 297) & 8) != 0) {
      v9 = 1;
      if (v8 == 0) {
        goto LABEL_21;
      }
    }
    else {
      v9 = 0;
      if (v8 == 0) {
        goto LABEL_21;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      GameRoutine_1a09c50(v8);
      a1 = v5;
    }
  LABEL_21:
    if ((v9 & 1) == 0) {
      goto LABEL_22;
    }
    return 1;
  }
  v12 = *(_QWORD*)(v1 + 16);
  if ((GameRoutine_12124a0(&v12) & 1) != 0) {
    return 3;
  }
  else {
    return 2;
  }
}

_QWORD* GameHr_fb7480(_QWORD* result, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;

  v2 = *(__int64**)(GameData_21ec7c0 + 24);
  v3 = *(__int64**)(GameData_21ec7c0 + 32);
  if (v2 != v3) {
    while (1) {
      v4 = *v2;
      if (*v2 == a2) {
        break;
      }
      v2 += 2;
      if (v2 == v3) {
        return result;
      }
    }
    v5 = v2[1];
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      if (*(_QWORD*)(v5 + 8) != -1) {
        v6 = (_QWORD*)result[2];
        v7 = result[3];
        if ((unsigned __int64)v6 >= v7) {
          v9 = result[1];
          v10 = (char*)v6 - v9;
          v11 = (((__int64)v6 - v9) >> 4) + 1;
          if (v11 >> 60 != 0) {
            GameRoutine_cb48b0_alt1();
          }
          v12 = v7 - v9;
          if (v12 >> 3 > v11) {
            v11 = v12 >> 3;
          }
          if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF0LL) {
            v13 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v13 = v11;
          }
          if (v13 >> 60 != 0) {
            GameRoutine_60a210_alt1();
          }
          v14 = result;
          v15 = fw_memory_g_heap_manager_ptr;
          v16 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v13, 16, 0);
          v17 = &v10[v16];
          v18 = v16 + 16 * v13;
          *(_QWORD*)v17 = v4;
          *((_QWORD*)v17 + 1) = v5;
          v8 = (__int64)&v10[v16 + 16];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                    memory_order_relaxed);
          v19 = v14[1];
          v20 = v14[2] - v19;
          v21 = (__int64)&v10[v16 - v20];
          memcpy(v21, v19, v20);
          v14[1] = v21;
          v14[2] = v8;
          v14[3] = v18;
          if (v19 == 0) {
            return (_QWORD*)std___1___shared_weak_count___release_weak_alt2(v5);
          }
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v22, v19);
          result = v14;
        }
        else {
          *v6 = v4;
          v6[1] = v5;
          v8 = (__int64)(v6 + 2);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                    memory_order_relaxed);
        }
        result[2] = v8;
      }
      return (_QWORD*)std___1___shared_weak_count___release_weak_alt2(v5);
    }
  }
  return result;
}

void GameHr_fb9850()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64* v9;
    __int64 v10;
  } v9_;
  struct {
    _QWORD v11[2];
    __int64 v12;
  } v11_;

  v0 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock_alt1(v2);
    std___1___shared_weak_count___release_weak_alt2(v0);
    if (v3 == 0 || v1 == 0) {
      if (v3 == 0) {
        return;
      }
    }
    else {
      v5 = *(_QWORD*)GameData_212dc48[0];
      v6 = *(_QWORD*)(*(_QWORD*)(v1 + 24) + 16LL);
      game_hub_e1b4d0((void*)(v11_.v11));
      game_hub_e1bfe0((void*)(&v9_.v9), v5, (__int64)v11_.v11,
                      (__int64*)(v6 + 560));
      if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v11_.v12);
      }
      v8 = v9_.v10;
      if (v9_.v10 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v9_.v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt2(v8);
      }
      *(_QWORD*)(v1 + 1068) = 0x3F0000003F800000LL;
      game_edede0(*(_QWORD*)(GameData_21f3cb0 + 912), 0x1.99999a0000000p-3f,
                  0x1.47ae140000000p-7f, 0x1.0000000000000p+0f);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt2(v3);
    }
  }
}

__n128 GameHr_fbe300(__int64 a1)
{
  __int64 v2;
  char* v3;
  __int64 v4;
  __n128 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __n128 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __n128 result;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  _QWORD v35[3];
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  char v41;
  __int64 v42;
  _QWORD* v43;

  v41 = 0;
  v42 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v34 = nullptr;
  memset(v35, 0, sizeof(v35));
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v40 = nullptr;
  if (&v36 != (__int64*)(a1 + 160)) {
    GameRoutine_6b7aa0(&v36);
  }
  v2 = *(unsigned int*)(a1 + 152);
  if ((unsigned int)v2 > 3) {
    v3 = &GameData_1a9f09e;
  }
  else {
    v3 = (char*)*(&GameData_1ffce40 + v2);
  }
  v4 = GameRoutine_1a09c70(v3);
  if (v4 != 0) {
    v6 = *(_QWORD**)(GameData_21ec7c0 + 24);
    v7 = *(_QWORD**)(GameData_21ec7c0 + 32);
    if (v6 != v7) {
      v8 = v4;
      while (1) {
        v9 = *v6;
        v10 = *(unsigned __int8*)(*v6 + 320LL);
        v11 = *(_QWORD*)(*v6 + 328LL);
        if ((v10 & 1) == 0) {
          v11 = v10 >> 1;
        }
        if (v8 == v11) {
          v12 = (v10 & 1) != 0 ? *(_QWORD*)(v9 + 336) : v9 + 321;
          if ((unsigned int)GameRoutine_1a09cf0(v3, v12, v8) == 0) {
            break;
          }
        }
        v6 += 2;
        if (v6 == v7) {
          goto LABEL_21;
        }
      }
      v13 = v6[1];
      if (v13 != 0) {
        v14 = v6[1];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                  memory_order_relaxed);
        v15 = GameRoutine_1a0a0c0(v14);
        v5 = GameRoutine_1a09c50(v13);
        if (v15 != 0) {
          v29 = *(_QWORD*)(v9 + 16);
          if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 16LL))(
                v15, *(long double*)&v5);
            v5 = GameRoutine_1a09c50(v15);
          }
        }
      }
    }
  }
LABEL_21:
  GameRoutine_e98240(a1, &v29, *(long double*)&v5);
  if (v40 == &v39) {
    v17 = 32;
    goto LABEL_25;
  }
  if (v40 != nullptr) {
    v17 = 40;
  LABEL_25:
    (*(void (**)(__int64*))(*v40 + v17))(v40);
  }
  v18 = v36;
  v19 = GameData_212bf68;
  if (v36 != 0) {
    v20 = v37;
    if (v36 == v37) {
      goto LABEL_37;
    }
    v21 = v37;
    do {
      v22 = *(_BYTE*)(v21 - 24);
      v21 -= 24;
      if ((v22 & 1) != 0 && *(_QWORD*)(v20 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        v16 = GameRoutine_1a0a4e0_alt9(*(_QWORD*)v19 + v23);
      }
      v20 = v21;
    } while (v21 != v18);
    v37 = v18;
    if (v36 != 0) {
    LABEL_37:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
        v24 = 56;
      }
      v16 = GameRoutine_1a0a4e0_alt9(*(_QWORD*)v19 + v24);
    }
  }
  v43 = v35;
  GameRoutine_cb2640(&v43, *(long double*)&v16);
  if (v34 == &v33) {
    v26 = 32;
  }
  else {
    if (v34 == nullptr) {
      goto LABEL_45;
    }
    v26 = 40;
  }
  (*(void (**)(__int64*))(*v34 + v26))(v34);
LABEL_45:
  if (v30 != 0) {
    v27 = *(_QWORD*)v19;
    v31 = v30;
    v28 = 128;
    if (*(_QWORD*)(v27 + 200) == 0) {
      v28 = 56;
    }
    return GameRoutine_1a0a4e0_alt9(v27 + v28);
  }
  return result;
}

__n128 GameHr_fc9ee0(__n128 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[2];

  v1 = *(_QWORD**)(GameData_21ec7c0 + 24);
  v2 = *(_QWORD**)(GameData_21ec7c0 + 32);
  if (v1 != v2) {
    while (1) {
      v3 = *v1;
      v4 = *(unsigned __int8*)(*v1 + 320LL);
      v5 = *(_QWORD*)(*v1 + 328LL);
      if ((v4 & 1) == 0) {
        v5 = v4 >> 1;
      }
      if (v5 == 9) {
        v6 = (v4 & 1) != 0 ? *(__int64**)(v3 + 336) : (__int64*)(v3 + 321);
        v7 = *v6;
        v8 = *((unsigned __int8*)v6 + 8);
        if (v7 == 0xB8E58888E8A9BEE5LL && v8 == 171) {
          break;
        }
      }
      v1 += 2;
      if (v1 == v2) {
        return result;
      }
    }
    v10 = v1[1];
    if (v10 != 0) {
      v11 = v1[1];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                memory_order_relaxed);
      v12 = GameRoutine_1a0a0c0(v11);
      result = GameRoutine_1a09c50(v10);
      if (v12 != 0) {
        v14[0] = v3;
        v14[1] = v12;
        v13 = *(_QWORD*)GameData_212dbf0[0];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_efbb60(v13, v14, 1);
        result = GameRoutine_1a09c50(v12);
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 16LL))(
              v12, *(long double*)&result);
          return GameRoutine_1a09c50(v12);
        }
      }
    }
  }
  return result;
}

__n128 GameHr_fca040(__n128 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = *(__int64**)(GameData_21ec7c0 + 24);
  v2 = *(__int64**)(GameData_21ec7c0 + 32);
  if (v1 != v2) {
    while (1) {
      v3 = *v1;
      v4 = *(unsigned __int8*)(*v1 + 320);
      v5 = *(_QWORD*)(*v1 + 328);
      if ((v4 & 1) == 0) {
        v5 = v4 >> 1;
      }
      if (v5 == 9) {
        v6 = (v4 & 1) != 0 ? *(__int64**)(v3 + 336) : (__int64*)(v3 + 321);
        v7 = *v6;
        v8 = *((unsigned __int8*)v6 + 8);
        if (v7 == 0xB8E58888E8A9BEE5LL && v8 == 171) {
          break;
        }
      }
      v1 += 2;
      if (v1 == v2) {
        return result;
      }
    }
    v10 = v1[1];
    if (v10 != 0) {
      v11 = v1[1];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                memory_order_relaxed);
      v12 = GameRoutine_1a0a0c0(v11);
      result = GameRoutine_1a09c50(v10);
      if (v12 != 0) {
        v14 = v3;
        v15 = v12;
        v13 = *(_QWORD*)GameData_212dbf0[0];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_efc3b0(v13, &v14, 0, 0);
        if (v15 != 0) {
          result = GameRoutine_1a09c50(v15);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 16LL))(
              v12, *(long double*)&result);
          return GameRoutine_1a09c50(v12);
        }
      }
    }
  }
  return result;
}

void GameHr_fcd4a0(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_QWORD**)(a1 + 56);
  v2 = *(_QWORD**)(a1 + 64);
  if (v1 != v2) {
    do {
      v4 = v1[1];
      if (v4 != 0) {
        v5 = GameRoutine_1a0a0c0(v4);
        if (v5 != 0) {
          v6 = v5;
          if (*v1 != 0) {
            GameRoutine_dfc000();
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
            GameRoutine_1a09c50(v6);
          }
        }
      }
      v1 += 2;
    } while (v1 != v2);
    v1 = *(_QWORD**)(a1 + 56);
    v2 = *(_QWORD**)(a1 + 64);
  }
  for (; v2 != v1; v2 -= 2) {
    v7 = *(v2 - 1);
    if (v7 != 0) {
      GameRoutine_1a09c50(v7);
    }
  }
  *(_QWORD*)(a1 + 64) = v1;
}

void GameHr_fe83e0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  _QWORD* v11;
  __n128 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  char* v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  char* v56;
  __int64 v57;
  __int64 v58;

  if (*GameData_212ee30[0] == 0) {
    *GameData_212ee30[0] = (__int64)a1;
  }
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  *a1 = GameData_1ffe878;
  a1[1] = 0;
  v2 = (_QWORD*)GameData_212bf68;
  v3 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 72, 16, 0);
  v3[1] = 0;
  v3[2] = 0;
  *v3 = GameData_1ffe918;
  v4 = GameData_212fb78;
  v5 = a1[2];
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  a1[2] = v3;
  v3[3] = v4 + 2;
  a1[1] = v3 + 3;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    GameRoutine_1a09c50(v5);
  }
  v6 = GameRoutine_651b90(*v2, 224, 16, 0);
  *(_QWORD*)(v6 + 16) = 0;
  v7 = v6;
  v8 = v6;
  v9 = GameData_212ef38[0];
  *(_QWORD*)v6 = GameData_1ffe968;
  *(_QWORD*)(v6 + 8) = 0;
  *(_QWORD*)(v6 + 84) = 0;
  *(_QWORD*)(v6 + 96) = 0;
  *(_DWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_WORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 24) = v9 + 2;
  GameRoutine_1a0a040(v6 + 80, 1, 0);
  *(_WORD*)(v7 + 192) = 0;
  *(_BYTE*)(v7 + 144) = 0;
  *(_BYTE*)(v7 + 156) = 0;
  *(_BYTE*)(v7 + 160) = 0;
  *(_BYTE*)(v7 + 176) = 0;
  *(_DWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 196) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  *(_DWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_BYTE*)(v7 + 136) = 0;
  GameRoutine_1a0a040(v7 + 192, 1, 0);
  v10 = a1[4];
  a1[3] = v8 + 24;
  a1[4] = v7;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    GameRoutine_1a09c50(v10);
  }
  v11 = (_QWORD*)GameRoutine_651b90(*v2, 32, 16, 0);
  v11[1] = 0;
  v11[2] = 0;
  *v11 = GameData_1ffe9b8;
  v13 = (char*)GameData_212fb80;
  v14 = a1[6];
  a1[6] = v11;
  v11[3] = v13 + 16;
  v15 = (__int64)(v11 + 3);
  a1[5] = v15;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    v12 = GameRoutine_1a09c50(v14);
  }
  v16 = a1[1];
  v18 = (_QWORD*)a1[8];
  v17 = a1[9];
  if ((unsigned __int64)v18 >= v17) {
    v20 = a1[7];
    v21 = (char*)v18 - v20;
    v22 = ((__int64)v18 - v20) >> 3;
    v23 = v22 + 1;
    if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
      goto LABEL_61;
    }
    v24 = v17 - v20;
    if (v24 >> 2 > v23) {
      v23 = v24 >> 2;
    }
    if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
      v25 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v25 = v23;
    }
    if (v25 != 0) {
      if (v25 >> 61 != 0) {
        goto LABEL_62;
      }
      v26 = GameRoutine_651b90(*v2, 8 * v25, 16, 0);
    }
    else {
      v26 = 0;
    }
    v27 = v26 + 8 * v25;
    v28 = (char*)v18 - v20;
    v29 = (__int64)&v21[v26 + -8 * v22];
    *(_QWORD*)&v21[v26] = v16;
    v19 = &v21[v26 + 8];
    v15 = GameRoutine_1a0b950(v29, v20, v28);
    a1[7] = v29;
    a1[8] = v19;
    a1[9] = v27;
    if (v20 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v30 = 56;
      }
      v12 = GameRoutine_1a0a4e0(*v2 + v30, (_QWORD)(v20));
    }
  }
  else {
    *v18 = v16;
    v19 = (char*)(v18 + 1);
  }
  v31 = a1[3];
  v32 = a1[9];
  a1[8] = v19;
  if ((unsigned __int64)v19 >= v32) {
    v34 = a1[7];
    v35 = &v19[-v34];
    v36 = (__int64)&v19[-v34] >> 3;
    v37 = v36 + 1;
    if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
      goto LABEL_61;
    }
    v38 = v32 - v34;
    if (v38 >> 2 > v37) {
      v37 = v38 >> 2;
    }
    if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
      v39 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v39 = v37;
    }
    if (v39 != 0) {
      if (v39 >> 61 != 0) {
        goto LABEL_62;
      }
      v40 = GameRoutine_651b90(*v2, 8 * v39, 16, 0);
    }
    else {
      v40 = 0;
    }
    v41 = v40 + 8 * v39;
    v42 = &v19[-v34];
    v43 = (__int64)&v35[v40 + -8 * v36];
    *(_QWORD*)&v35[v40] = v31;
    v33 = &v35[v40 + 8];
    v15 = GameRoutine_1a0b950(v43, v34, v42);
    a1[7] = v43;
    a1[8] = v33;
    a1[9] = v41;
    if (v34 != 0) {
      v44 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v44 = 56;
      }
      v12 = GameRoutine_1a0a4e0(*v2 + v44, (_QWORD)(v34));
    }
  }
  else {
    *(_QWORD*)v19 = v31;
    v33 = v19 + 8;
  }
  v45 = a1[5];
  v46 = a1[9];
  a1[8] = v33;
  if ((unsigned __int64)v33 < v46) {
    *(_QWORD*)v33 = v45;
    v47 = (__int64)(v33 + 8);
    goto LABEL_60;
  }
  v48 = a1[7];
  v49 = &v33[-v48];
  v50 = (__int64)&v33[-v48] >> 3;
  v51 = v50 + 1;
  if ((unsigned __int64)(v50 + 1) >> 61 != 0) {
  LABEL_61:
    GameRoutine_fe8a10(*(long double*)&v12);
  }
  v52 = v46 - v48;
  if (v52 >> 2 > v51) {
    v51 = v52 >> 2;
  }
  if ((unsigned __int64)v52 >= 0x7FFFFFFFFFFFFFF8LL) {
    v53 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v53 = v51;
  }
  if (v53 != 0) {
    if (v53 >> 61 == 0) {
      v54 = GameRoutine_651b90(*v2, 8 * v53, 16, 0);
      goto LABEL_56;
    }
  LABEL_62:
    GameRoutine_60a210(v15);
  }
  v54 = 0;
LABEL_56:
  v55 = v54 + 8 * v53;
  v56 = &v33[-v48];
  v57 = (__int64)&v49[v54 + -8 * v50];
  *(_QWORD*)&v49[v54] = v45;
  v47 = (__int64)&v49[v54 + 8];
  GameRoutine_1a0b950(v57, v48, v56);
  a1[7] = v57;
  a1[8] = v47;
  a1[9] = v55;
  if (v48 != 0) {
    v58 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v58 = 56;
    }
    GameRoutine_1a0a4e0(*v2 + v58, (_QWORD)(v48));
  }
LABEL_60:
  a1[8] = v47;
}

__int64 GameHr_ff69e0(__int64* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* i;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v24;
    _QWORD* v25;
    _QWORD* v26;
    unsigned __int64 v27;
    __int64* v28;
  } v24_;

  v2 = *a1;
  v3 = a1[1] - *a1;
  v4 = 1 - 0x5555555555555555LL * (v3 >> 4);
  if (v4 > 0x555555555555555LL) {
    GameRoutine_d5f350_alt1();
  }
  v5 = a1[2];
  v24_.v28 = a1 + 2;
  v8 = fw_memory_g_heap_manager_ptr;
  v9 = 0xAAAAAAAAAAAAAAABLL * ((v5 - v2) >> 4);
  if (2 * v9 > v4) {
    v4 = 2 * v9;
  }
  if (v9 >= 0x2AAAAAAAAAAAAAALL) {
    v10 = 0x555555555555555LL;
  }
  else {
    v10 = v4;
  }
  if (v10 != 0) {
    if (v10 > 0x555555555555555LL) {
      GameRoutine_60a210_alt1();
    }
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         48 * v10, 16, 0);
  }
  else {
    v11 = 0;
  }
  v12 = (_QWORD*)(v11 + v3);
  v24_.v24 = v11;
  v24_.v25 = v12;
  v24_.v27 = v11 + 48 * v10;
  v13 = a2[1];
  *v12 = *a2;
  v12[1] = v13;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((a2[2] & 1) != 0) {
    fw_text_String_CopyTerminated(v12 + 2, a2[4], a2[3]);
  }
  else {
    v14 = a2[3];
    v15 = a2[4];
    v12[2] = a2[2];
    v12[3] = v14;
    v12[4] = v15;
  }
  v12[5] = a2[5];
  v24_.v26 = v12 + 6;
  GameHr_ff6c00(a1, &v24_.v24);
  v16 = a1[1];
  v18 = v24_.v25;
  for (i = v24_.v26; v18 != v24_.v26; i = v24_.v26) {
    v24_.v26 = i - 6;
    if ((*(_BYTE*)(i - 4) & 1) != 0) {
      v19 = *(i - 2);
      if (v19 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v20, v19);
      }
    }
    v21 = *(i - 5);
    if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak_alt2(v21);
    }
  }
  if (v24_.v24 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v22, v24_.v24);
  }
  return v16;
}

void GameHr_ff6c00(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;

  v3 = (_QWORD*)*a1;
  v2 = (_QWORD*)a1[1];
  v6 = a2[1] + *a1 - (_QWORD)v2;
  if (v2 != (_QWORD*)*a1) {
    v7 = (_QWORD*)*a1;
    v8 = (_QWORD*)(a2[1] + *a1 - (_QWORD)v2);
    do {
      *v8 = *v7;
      v8[1] = v7[1];
      *v7 = 0;
      v7[1] = 0;
      v9 = v7[2];
      v10 = v7[4];
      v8[3] = v7[3];
      v8[4] = v10;
      v8[2] = v9;
      v7[3] = 0;
      v7[4] = 0;
      v7[2] = 0;
      v11 = v7[5];
      v7 += 6;
      v8[5] = v11;
      v8 += 6;
    } while (v7 != v2);
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      if ((v3[2] & 1) != 0) {
        v13 = v3[4];
        if (v13 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14, v13);
        }
      }
      v15 = v3[1];
      if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak_alt2(v15);
      }
      v3 += 6;
    } while (v3 != v2);
  }
  a2[1] = v6;
  v16 = (_QWORD*)*a1;
  a1[1] = *a1;
  *a1 = a2[1];
  a2[1] = v16;
  v17 = a1[1];
  a1[1] = a2[2];
  a2[2] = v17;
  v18 = a1[2];
  a1[2] = a2[3];
  a2[3] = v18;
  *a2 = a2[1];
}

void GameHr_ff9d40(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
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
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  v1 = *(__int64**)(a1 + 128);
  v2 = *(__int64**)(a1 + 136);
  if (v1 != v2) {
    v4 = GameData_212ebc8[0];
    do {
      v5 = *v4;
      v19_.v19 = *v1;
      v6 = v1[1];
      v19_.v20 = v6;
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_e1a560_alt1(v5, &v19_.v19);
      if (v19_.v20 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v19_.v20);
      }
      v1 += 2;
    } while (v1 != v2);
    v1 = *(__int64**)(a1 + 128);
  }
  if (v1 != nullptr) {
    v7 = *(__int64**)(a1 + 136);
    if (v1 == v7) {
      goto LABEL_16;
    }
    do {
      v8 = *(v7 - 1);
      if (v8 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v8);
      }
      v7 -= 2;
    } while (v7 != v1);
    v9 = *(__int64**)(a1 + 128);
    *(_QWORD*)(a1 + 136) = v1;
    v1 = v9;
    if (v9 != nullptr) {
    LABEL_16:
      v10 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v10,
                                    (__int64)v1);
    }
  }
  v11 = *(_QWORD*)(a1 + 104);
  if (v11 != 0) {
    v12 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 112) = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(v12 + v13, v11);
  }
  if ((*(_BYTE*)(a1 + 72) & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 88);
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v15, v14);
    }
  }
  v16 = *(_QWORD*)(a1 + 48);
  if (v16 != 0) {
    v17 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 56) = v16;
    v18 = 128;
    if (*(_QWORD*)(v17 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(v17 + v18, v16);
  }
}

__n128 GameHr_ffa3e0(_QWORD* a1, _QWORD* a2, _DWORD* a3, __n128 result)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64* v23;
  __int64 v24;
  _BYTE* v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  int v29;
  unsigned __int64 v30;
  _BYTE* v31;
  __int64 v32;
  __int64 v33;
  _BYTE* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  _BYTE* v42;
  _QWORD* v43;
  _QWORD* v44;
  _QWORD* v45;
  long double v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD** v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  char* v56;
  __int64 v57;
  __int64 v58;
  long double v59;
  __int64 v60;
  int v61;
  unsigned __int64 v62;
  __int64* v63;
  unsigned __int64 v64;
  char* v65;
  long double v66;
  int* v67;
  _DWORD* v68;
  int v69;
  _BOOL8 v70;
  char* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;
  _QWORD* v78;
  _QWORD* v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v86;
  unsigned __int64 v87;
  _QWORD* v88;
  _QWORD* v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v97;
  _BYTE* v98;
  __int64 v99;
  unsigned __int64 v100;
  char* v101;
  __int64 v102;
  __int64 v103;
  char v104;
  unsigned __int64 v105;
  long double v106;
  __int64 v107;
  _QWORD* v108;
  _QWORD* v109;
  char* v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  _QWORD* v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  _QWORD* v135;
  _QWORD* v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64* v151;
  __int64 v152;
  __int64 v153;
  int v154;
  __int64 v155;
  unsigned __int64 v156;
  int v157;
  char* v158;
  unsigned __int64 v159;
  __int64 v160;
  _QWORD* v161;
  _QWORD* v162;
  char* v163;
  __int64 v164;
  unsigned __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  __int64 v168;
  unsigned __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  _QWORD* v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  _QWORD* v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  unsigned __int64 v187;
  unsigned __int64 v188;
  unsigned __int64 v189;
  unsigned __int64 v190;
  _QWORD* v191;
  _QWORD* v192;
  unsigned __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  unsigned __int64 v199;
  __int64 v200;
  char* v201;
  unsigned __int64 v202;
  char v203;
  __int64 v204;
  char v205;
  __int64 v206;
  __int64 v207;
  unsigned __int64 v208;
  char* v209;
  __int64 v210;
  char v211;
  char* v212;
  char* v213;
  unsigned __int64 v214;
  unsigned __int64 v215;
  char v216;
  __int64 v217;
  __int64 v218;
  bool v219;
  _QWORD* v220;
  _BYTE* v221;
  char* v222;
  __int64 v223;
  bool v224;
  __int64 v225;
  __int64 v226;
  int v227;
  unsigned __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  unsigned __int64 v232;
  unsigned __int64 v233;
  unsigned __int64 v234;
  __int64 v235;
  __int64 v236;
  unsigned __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  _QWORD* v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  _QWORD** v251;
  __int64 v252;
  __int64* v253;
  _QWORD** v254;
  _QWORD* v255;
  __int64 v256;
  unsigned __int64 v257;
  _QWORD* v258;
  _QWORD* v259;
  __int64 v260;
  __int64 v261;
  __int64* v262;
  __int64 v263;
  __int64* v264;
  __int64 v265;
  atomic_ullong* v266;
  __int128 v267;
  __int64 v268;
  _QWORD* v269;
  _QWORD* v270;
  unsigned __int64 v271;
  _QWORD* v272;
  _QWORD* v273;
  unsigned __int64 v274;
  __int64 v275;
  unsigned __int64 v276;
  char* v277;
  char v278;
  __int64 v279;
  _QWORD v280[2];
  __int64 v281;
  unsigned __int64 v282;
  __int64 v283;
  _BYTE _139[7];

  if (a2[1] != *a2 && (*(_QWORD*)GameData_212dbb8[0] == 0 ||
                       *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 288LL) ==
                           *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 280LL))) {
    v7 = a1[1];
    v6 = a1[2];
    GameData_2232018 = 1;
    v8 = (_QWORD*)GameData_212bf68;
    v255 = a1;
    v9 = v7;
    if (v7 != v6) {
      do {
        v10 = *(_QWORD*)(v6 - 24);
        if (v10 != 0) {
          *(_QWORD*)(v6 - 16) = v10;
          if (*(_QWORD*)(*v8 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          GameRoutine_1a0a4e0(*v8 + v11, (_QWORD)(v10));
        }
        v12 = *(_QWORD*)(v6 - 48);
        if (v12 != 0) {
          *(_QWORD*)(v6 - 40) = v12;
          if (*(_QWORD*)(*v8 + 200LL) != 0) {
            v13 = 128;
          }
          else {
            v13 = 56;
          }
          GameRoutine_1a0a4e0(*v8 + v13, (_QWORD)(v12));
        }
        v6 -= 72;
      } while (v6 != v7);
      a1 = v255;
      v9 = v255[1];
    }
    a1[2] = v7;
    v14 = a1;
    v15 = (__int64)(a2[1] - *a2) >> 3;
    if (v15 > 0x8E38E38E38E38E39LL * ((a1[3] - v9) >> 3)) {
      if (v15 > 0x38E38E38E38E38ELL) {
      LABEL_448:
        GameRoutine_ffc160();
      }
      v16 = 9 * v15;
      v17 = GameRoutine_651b90(*v8, 72 * v15, 16, 0);
      v18 = v17 + v7 - v9;
      v19 = v17 + 8 * v16;
      GameRoutine_ffc180(v9, v7, v17);
      v20 = v255[1];
      v255[1] = v17;
      v8 = (_QWORD*)GameData_212bf68;
      v255[2] = v18;
      v255[3] = v19;
      v14 = v255;
      if (v20 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*v8 + 200LL) == 0) {
          v21 = 56;
        }
        GameRoutine_1a0a4e0(*v8 + v21, (_QWORD)(v20));
      }
    }
    v22 = (_QWORD*)GameRoutine_651b90(*v8, 296, 16, 0);
    v22[2] = 0;
    v23 = GameData_212eb88;
    v24 = v14[5];
    v22[4] = 0;
    v22[5] = 0;
    v22[6] = 0;
    v22[7] = 0;
    *v22 = GameData_1fffd38;
    v22[1] = 0;
    v22[8] = 0;
    v22[9] = 0;
    v22[8] = 0;
    v22[9] = 0;
    v22[10] = 0;
    v22[11] = 0;
    v22[10] = 0;
    v22[11] = 0;
    v22[12] = 0;
    v22[13] = 0;
    v22[12] = 0;
    v22[13] = 0;
    v22[14] = 0;
    v22[15] = 0;
    v22[14] = 0;
    v22[15] = 0;
    v22[16] = 0;
    v22[17] = 0;
    v22[16] = 0;
    v22[17] = 0;
    v22[18] = 0;
    v22[19] = 0;
    v22[18] = 0;
    v22[19] = 0;
    v22[20] = 0;
    v22[21] = 0;
    v22[20] = 0;
    v22[21] = 0;
    v22[22] = 0;
    v22[23] = 0;
    v22[22] = 0;
    v22[23] = 0;
    v22[24] = 0;
    v22[25] = 0;
    v22[24] = 0;
    v22[25] = 0;
    v22[26] = 0;
    v22[27] = 0;
    v22[26] = 0;
    v22[27] = 0;
    v22[28] = 0;
    v22[29] = 0;
    v22[28] = 0;
    v22[29] = 0;
    v22[30] = 0;
    v22[31] = 0;
    v22[30] = 0;
    *((_BYTE*)v22 + 248) = 0;
    v22[35] = 0;
    v22[36] = 0;
    v22[33] = 0;
    v22[34] = 0;
    v22[32] = 0;
    v14[5] = v22;
    v22[7] = v23 + 2;
    v22[3] = 0;
    v14[4] = v22 + 3;
    if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      result = GameRoutine_1a09c50(v24);
    }
    *(_DWORD*)v14[4] = *a3;
    v25 = (_BYTE*)v14[4];
    if ((*v25 & 2) != 0) {
      v29 = 1;
      v252 = 0;
      v30 = 0;
      v31 = nullptr;
      do {
        *(_QWORD*)((char*)&v267 + 4) = 0;
        HIDWORD(v267) = 0;
        v32 = v255[4];
        LOBYTE(v267) = v29;
        v33 = GameRoutine_ffbe20(v32 + 8, &v267, *(long double*)&result);
        if ((unsigned __int64)v31 < v30) {
          *v31++ = v29;
        }
        else {
          v34 = &v31[-v252];
          v35 = (__int64)&v31[-v252 + 1];
          if (v35 < 0) {
            GameRoutine_943410(v33);
          }
          v36 = v30 - v252;
          if (2 * (v30 - v252) > v35) {
            v35 = 2 * v36;
          }
          if (v36 >= 0x3FFFFFFFFFFFFFFFLL) {
            v37 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else {
            v37 = v35;
          }
          if (v37 != 0) {
            v38 = GameRoutine_651b90(*v8, v37, 16, 0);
          }
          else {
            v38 = 0;
          }
          v30 = v38 + v37;
          v34[v38] = v29;
          v31 = &v34[v38 + 1];
          GameRoutine_1a0b950(v38, v252, v34);
          if (v252 != 0) {
            v39 = GameData_212bf68;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) != 0) {
              v40 = 128;
            }
            else {
              v40 = 56;
            }
            result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v40,
                                         (_QWORD)(v252));
            v252 = v38;
            v8 = (_QWORD*)v39;
          }
          else {
            v252 = v38;
            v8 = (_QWORD*)GameData_212bf68;
          }
        }
        ++v29;
      } while (v29 != 10);
    }
    else {
      v26 = GameData_21caab0;
      if (GameData_21caab0 != 0) {
        v27 = *(unsigned __int8*)(GameData_21caab0 + 15);
        v28 = *(_DWORD*)(GameData_21caab0 + 60);
        v26 = *(_DWORD*)(GameData_21caab0 + 64);
      }
      else {
        v27 = 0;
        v28 = 0;
      }
      *(_QWORD*)((char*)&v267 + 4) = __PAIR64__(v26, v28);
      LOBYTE(v267) = v27;
      v41 = GameData_21ee260;
      if (GameData_21ee260 != 0) {
        v41 = *(__int16*)(GameData_21ee260 + 10);
      }
      HIDWORD(v267) = v41;
      GameRoutine_ffbe20(v25 + 8, &v267, *(long double*)&result);
      if (v27 != 0) {
        v42 = (_BYTE*)GameRoutine_651b90(*v8, 1, 16, 0);
        *v42 = v27;
        v31 = v42 + 1;
        v252 = (__int64)v42;
      }
      else {
        v252 = 0;
        v31 = nullptr;
      }
    }
    if (v31 == (_BYTE*)v252) {
      GameData_22127a8 = 0;
      v246 = v255[5];
      v255[4] = 0;
      v255[5] = 0;
    }
    else {
      v43 = (_QWORD*)GameRoutine_651b90(*v8, 504, 16, 0);
      v44 = v43 + 3;
      v45 = v43;
      v43[1] = 0;
      v43[2] = 0;
      *v43 = GameData_1fffd88;
      GameRoutine_d97ff0(v43 + 3);
      v47 = v255;
      v48 = v255[4];
      v49 = *(_QWORD*)(v48 + 240);
      *(_QWORD*)(v48 + 232) = v44;
      *(_QWORD*)(v48 + 240) = v45;
      if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
        *(__n128*)&v46 = GameRoutine_1a09c50(v49);
      }
      GameRoutine_d9d750(*(_QWORD*)(v255[4] + 232LL) + 136LL, v252, v31,
                         &v31[-v252], v46);
      v50 = *(_QWORD*)(v255[4] + 232LL);
      GameRoutine_d98e20(v50);
      GameRoutine_d99480(v50, "HubXml_Common", 0, 0);
      GameRoutine_d99480(v50, "HubXml_Character", 0, 0);
      GameRoutine_d99480(v50, "HubXml_Conditions", 0, 0);
      GameRoutine_d99480(v50, "HubXml_Timeline", 0, 0);
      GameData_22127a8 = *(_QWORD*)(v255[4] + 232LL);
      v51 = (_QWORD**)*a2;
      v251 = (_QWORD**)a2[1];
      v8 = (_QWORD*)GameData_212bf68;
      if ((_QWORD**)*a2 != v251) {
        v250 = GameData_212ef60 + 16;
        v253 = GameData_212f290[0] + 2;
        v262 = GameData_212fbc8 + 2;
        while (1) {
          v254 = v51;
          v273 = nullptr;
          v274 = 0;
          v271 = 0;
          v272 = nullptr;
          v269 = nullptr;
          v270 = nullptr;
          v268 = 0;
          v52 = (*v51)[1];
          v53 = (*v51)[11];
          *(_QWORD*)&v267 = **v51;
          *((_QWORD*)&v267 + 1) = v52;
          v54 = GameRoutine_1a09c70(v53);
          if (v54 >= 0xFFFFFFFFFFFFFFF7LL) {
          LABEL_445:
            GameRoutine_60a1d0(v54);
          }
          v55 = v54;
          if (v54 >= 0x17) {
            break;
          }
          v56 = (char*)&v281 + 1;
          LOBYTE(v281) = 2 * v54;
          if (v54 != 0) {
            goto LABEL_70;
          }
        LABEL_71:
          v56[v55] = 0;
          GameRoutine_db1ce0((void*)(&v275), &v281);
          if ((v281 & 1) != 0 && v283 != 0) {
            v60 = 128;
            if (*(_QWORD*)(*v8 + 200LL) == 0) {
              v60 = 56;
            }
            *(__n128*)&v59 = GameRoutine_1a0a4e0(*v8 + v60, (_QWORD)(v283));
          }
          if ((v275 & 1) != 0) {
            GameRoutine_60a270(&v281, v277, v276);
          }
          else {
            v281 = v275;
            v282 = v276;
            v283 = (__int64)v277;
          }
          v61 = v281 & 1;
          v62 = (unsigned __int64)(unsigned __int8)v281 >> 1;
          if (v61 != 0) {
            v62 = v282;
          }
          if (v62 != 0) {
            v63 = (__int64*)(v47[4] + 248LL);
            if (v63 != &v281) {
              if ((*(_BYTE*)v63 & 1) != 0) {
                if (v61 != 0) {
                  v65 = (char*)v283;
                }
                else {
                  v65 = (char*)&v281 + 1;
                }
                GameRoutine_64dde0(v63, v65, v62);
              }
              else if (v61 != 0) {
                GameRoutine_64df20(v63, v283, v282);
              }
              else {
                v64 = v282;
                *v63 = v281;
                v63[1] = v64;
                v63[2] = v283;
              }
            }
            GameRoutine_d98960(*(_QWORD*)(v47[4] + 232LL), &v281, v59);
            v67 = (int*)v47[4];
            v69 = *v67;
            v68 = v67 + 2;
            v70 = (v69 & 2) != 0;
            if ((v281 & 1) != 0) {
              v71 = (char*)v283;
            }
            else {
              v71 = (char*)&v281 + 1;
            }
            GameRoutine_c98a80(v47[4] + 32LL, v71, v68, v70, v66);
            v61 = v281 & 1;
          }
          if (v61 != 0 && v283 != 0) {
            v72 = 128;
            if (*(_QWORD*)(*v8 + 200LL) == 0) {
              v72 = 56;
            }
            GameRoutine_1a0a4e0(*v8 + v72, (_QWORD)(v283));
          }
          if ((v278 & 1) != 0 && v279 != 0) {
            v73 = 128;
            if (*(_QWORD*)(*v8 + 200LL) == 0) {
              v73 = 56;
            }
            GameRoutine_1a0a4e0(*v8 + v73, (_QWORD)(v279));
          }
          if ((v275 & 1) != 0 && v277 != nullptr) {
            v74 = 128;
            if (*(_QWORD*)(*v8 + 200LL) == 0) {
              v74 = 56;
            }
            GameRoutine_1a0a4e0(*v8 + v74, (_QWORD)(v277));
          }
          v75 = (_QWORD*)v47[4];
          v270 = v269;
          v273 = v272;
          GameRoutine_c98880((void*)(&v275), v75 + 4);
          v77 = v75[10];
          v76 = v75[11];
          v259 = v75;
          v260 = v76;
          while (v77 != v76) {
            if (*(_BYTE*)v77 != 0) {
              GameRoutine_db2180((void*)(&v281), v259 + 31, v77 + 56);
              v78 = (_QWORD*)v275;
              v79 = (_QWORD*)v276;
              if (v275 != v276) {
                v80 = v77 + 9;
                while (1) {
                  v81 = (_QWORD*)*v78;
                  v82 = (*(_BYTE*)(v77 + 8) & 1) != 0 ? *(_QWORD*)(v77 + 24)
                                                      : v80;
                  v83 = GameRoutine_7a86e0(v82);
                  if (v83 != 0) {
                    v84 = v81[11];
                    if (v84 != 0 && v81[13] != 0) {
                      v86 = v84 - 1;
                      if ((v84 & (v84 - 1)) != 0) {
                        v87 = v83;
                        if (v83 >= v84) {
                          v87 = v83 % v84;
                        }
                      }
                      else {
                        v87 = v86 & v83;
                      }
                      v88 = *(_QWORD**)(v81[10] + 8 * v87);
                      if (v88 != nullptr) {
                        v89 = (_QWORD*)*v88;
                        if (v89 != nullptr) {
                          if ((v84 & v86) == 0) {
                            while (1) {
                              v91 = v89[1];
                              if (v91 == v83) {
                                if (v89[2] == v83) {
                                  goto LABEL_145;
                                }
                              }
                              else if ((v91 & v86) != v87) {
                                goto LABEL_116;
                              }
                              v89 = (_QWORD*)*v89;
                              if (v89 == nullptr) {
                                goto LABEL_116;
                              }
                            }
                          }
                          while (1) {
                            v90 = v89[1];
                            if (v90 == v83) {
                              break;
                            }
                            if (v90 >= v84) {
                              v90 %= v84;
                            }
                            if (v90 != v87) {
                              goto LABEL_116;
                            }
                          LABEL_134:
                            v89 = (_QWORD*)*v89;
                            if (v89 == nullptr) {
                              goto LABEL_116;
                            }
                          }
                          if (v89[2] != v83) {
                            goto LABEL_134;
                          }
                        LABEL_145:
                          v92 = v89[3];
                          if (v92 != 0) {
                            v93 = **(_QWORD**)(v92 + 40);
                            v94 = *(_QWORD*)(*(_QWORD*)(v92 + 40) + 8LL) - v93;
                            if ((int)((unsigned __int64)v94 >> 3) >= 1) {
                              break;
                            }
                          }
                        }
                      }
                    }
                  }
                LABEL_116:
                  if (++v78 == v79) {
                    goto LABEL_191;
                  }
                }
                v95 = 0;
                v263 = v89[3];
                v265 = v80;
                while (2) {
                  if (v95 >= v94 >> 3) {
                    GameRoutine_ca7de0();
                  }
                  v97 = *(_QWORD*)(v93 + 8 * v95);
                  v98 = *(_BYTE**)(v97 + 248);
                  if (v98 != nullptr && *v98 != 0) {
                    v99 = GameRoutine_651b90(*v8, 872, 16, 0);
                    *(_QWORD*)(v99 + 16) = 0;
                    *(_QWORD*)(v99 + 8) = 0;
                    *(_QWORD*)v99 = v262;
                    GameRoutine_ff7060(v99 + 24, v97);
                    if ((v281 & 1) != 0) {
                      v100 = v282;
                    }
                    else {
                      v100 = (unsigned __int64)(unsigned __int8)v281 >> 1;
                    }
                    if ((v281 & 1) != 0) {
                      v101 = (char*)v283;
                    }
                    else {
                      v101 = (char*)&v281 + 1;
                    }
                    GameRoutine_60a060(v99 + 848, v101, v100);
                    GameRoutine_d8d760(v99 + 24);
                    GameRoutine_e07e20(v99 + 24);
                    GameRoutine_d8e140(v99 + 24);
                    GameRoutine_d8ec60(v99 + 24);
                    if (*(_QWORD*)(v99 + 616) != 0) {
                      goto LABEL_173;
                    }
                    v102 = *(_QWORD*)(v99 + 576);
                    v103 = *(_QWORD*)(v99 + 584);
                    if (v103 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v103 + 8), 1u,
                          memory_order_relaxed);
                    }
                    if (v102 != 0 && *(_BYTE*)(v102 + 224) == 1 &&
                        *(_DWORD*)(v102 + 144) == 31) {
                      v104 = 0;
                      if (v103 == 0) {
                      LABEL_172:
                        if ((v104 & 1) == 0) {
                          goto LABEL_173;
                        }
                        goto LABEL_150;
                      }
                    }
                    else {
                      v104 = 1;
                      if (v103 == 0) {
                        goto LABEL_172;
                      }
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v103 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) != 0) {
                      goto LABEL_172;
                    }
                    (*(void (**)(__int64))(*(_QWORD*)v103 + 16LL))(v103);
                    GameRoutine_1a09c50(v103);
                    if ((v104 & 1) == 0) {
                    LABEL_173:
                      v105 = GameRoutine_d90760(v99 + 24);
                      if ((v105 & 1) != 0) {
                        v107 = *(_QWORD*)(v99 + 80);
                        v108 = v270;
                        if ((unsigned __int64)v270 < v271) {
                          *v270 = v107;
                          v96 = (__int64)(v108 + 1);
                        }
                        else {
                          v109 = v269;
                          v110 = (char*)((char*)v270 - (char*)v269);
                          v111 = v270 - v269;
                          v112 = v111 + 1;
                          if ((unsigned __int64)(v111 + 1) >> 61 != 0) {
                            goto LABEL_442;
                          }
                          v113 = v271 - (_QWORD)v269;
                          if ((__int64)(v271 - (_QWORD)v269) >> 2 > v112) {
                            v112 = v113 >> 2;
                          }
                          if ((unsigned __int64)v113 >= 0x7FFFFFFFFFFFFFF8LL) {
                            v114 = 0x1FFFFFFFFFFFFFFFLL;
                          }
                          else {
                            v114 = v112;
                          }
                          if (v114 != 0) {
                            v256 = v270 - v269;
                            if (v114 >> 61 != 0) {
                              goto LABEL_443;
                            }
                            v115 = *(_QWORD*)(v99 + 80);
                            v116 = GameRoutine_651b90(
                                *(_QWORD*)GameData_212bf68, 8 * v114, 16, 0);
                            v111 = v256;
                            v107 = v115;
                          }
                          else {
                            v116 = 0;
                          }
                          v117 = v116 + 8 * v114;
                          v118 = (__int64)&v110[v116 + -8 * v111];
                          v257 = v117;
                          *(_QWORD*)&v110[v116] = v107;
                          v96 = (__int64)&v110[v116 + 8];
                          GameRoutine_1a0b950(v118, v109, v110);
                          v269 = (_QWORD*)v118;
                          v271 = v257;
                          v8 = (_QWORD*)GameData_212bf68;
                          if (v109 != nullptr) {
                            v119 = 128;
                            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 +
                                           200LL) == 0) {
                              v119 = 56;
                            }
                            GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 +
                                                v119, (_QWORD)(v109));
                          }
                        }
                        v270 = (_QWORD*)v96;
                      }
                    }
                  LABEL_150:
                    v92 = v263;
                    v80 = v265;
                    if (atomic_fetch_add((atomic_ullong* volatile)(v99 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99);
                      GameRoutine_1a09c50(v99);
                    }
                  }
                  ++v95;
                  v93 = **(_QWORD**)(v92 + 40);
                  v94 = *(_QWORD*)(*(_QWORD*)(v92 + 40) + 8LL) - v93;
                  if ((__int64)v95 >= (int)((unsigned __int64)v94 >> 3)) {
                    goto LABEL_116;
                  }
                  continue;
                }
              }
            LABEL_191:
              if ((v281 & 1) != 0 && v283 != 0) {
                v120 = 128;
                if (*(_QWORD*)(*v8 + 200LL) == 0) {
                  v120 = 56;
                }
                GameRoutine_1a0a4e0(*v8 + v120, (_QWORD)(v283));
              }
            }
            v76 = v260;
            v77 += 144;
          }
          if (v275 != 0) {
            v121 = *v8;
            v276 = v275;
            v122 = 128;
            if (*(_QWORD*)(v121 + 200) == 0) {
              v122 = 56;
            }
            GameRoutine_1a0a4e0(v121 + v122, (_QWORD)(v275));
          }
          v123 = v259[6];
          if (v123 == 0 || (v124 = GameRoutine_1a0a0c0(v123)) == 0) {
          LABEL_206:
            v126 = nullptr;
            goto LABEL_207;
          }
          v125 = v259[5];
          if (atomic_fetch_add((atomic_ullong* volatile)(v124 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v125 == 0) {
              goto LABEL_206;
            }
          }
          else {
            v127 = v124;
            (*(void (**)(__int64))(*(_QWORD*)v124 + 16LL))(v124);
            GameRoutine_1a09c50(v127);
            if (v125 == 0) {
              goto LABEL_206;
            }
          }
          v126 = (_QWORD*)(v125 + 608);
        LABEL_207:
          v128 = v259[19];
          v129 = v259[20];
          while (v128 != v129) {
            if (*(_BYTE*)v128 == 0) {
              goto LABEL_209;
            }
            v130 = (*(_BYTE*)(v128 + 8) & 1) != 0 ? *(_QWORD*)(v128 + 24)
                                                  : v128 + 9;
            v131 = GameRoutine_7a86e0(v130);
            if (v131 == 0) {
              goto LABEL_209;
            }
            v132 = v126[11];
            if (v132 == 0 || v126[13] == 0) {
              goto LABEL_209;
            }
            v133 = v132 - 1;
            if ((v132 & (v132 - 1)) != 0) {
              v134 = v131;
              if (v131 >= v132) {
                v134 = v131 % v132;
              }
            }
            else {
              v134 = v133 & v131;
            }
            v135 = *(_QWORD**)(v126[10] + 8 * v134);
            if (v135 == nullptr) {
              goto LABEL_209;
            }
            v136 = (_QWORD*)*v135;
            if (v136 == nullptr) {
              goto LABEL_209;
            }
            if ((v132 & v133) == 0) {
              while (1) {
                v138 = v136[1];
                if (v138 == v131) {
                  if (v136[2] == v131) {
                    goto LABEL_238;
                  }
                }
                else if ((v138 & v133) != v134) {
                  goto LABEL_209;
                }
                v136 = (_QWORD*)*v136;
                if (v136 == nullptr) {
                  goto LABEL_209;
                }
              }
            }
            while (1) {
              v137 = v136[1];
              if (v137 == v131) {
                break;
              }
              if (v137 >= v132) {
                v137 %= v132;
              }
              if (v137 != v134) {
                goto LABEL_209;
              }
            LABEL_227:
              v136 = (_QWORD*)*v136;
              if (v136 == nullptr) {
                goto LABEL_209;
              }
            }
            if (v136[2] != v131) {
              goto LABEL_227;
            }
          LABEL_238:
            v139 = v136[3];
            if (v139 != 0) {
              v249 = v129;
              v258 = v126;
              v105 =
                  (unsigned __int64)(GameRoutine_db2180((void*)(&v275),
                                                        v259 + 31, v128 + 56),
                                     (void*)(&v275));
              v140 = **(_QWORD**)(v139 + 40);
              v141 = *(_QWORD*)(*(_QWORD*)(v139 + 40) + 8LL) - v140;
              if ((int)((unsigned __int64)v141 >> 3) >= 1) {
                v142 = 0;
                v261 = v139;
                do {
                  if (v142 >= v141 >> 3) {
                    GameRoutine_ca7e40(v105);
                  }
                  v144 = *(_QWORD*)(v140 + 8 * v142);
                  if (*(_BYTE*)(v144 + 88) == 1) {
                    v145 = GameRoutine_651b90(*v8, 712, 16, 0);
                    *(_QWORD*)(v145 + 8) = 0;
                    *(_QWORD*)(v145 + 24) = 0;
                    v146 = v145 + 24;
                    v147 = v145;
                    *(_QWORD*)(v145 + 16) = 0;
                    *(_QWORD*)(v145 + 32) = 0;
                    *(_QWORD*)(v145 + 40) = 0;
                    *(_QWORD*)(v145 + 48) = 0;
                    *(_QWORD*)(v145 + 56) = 0;
                    *(_QWORD*)(v145 + 64) = 0;
                    *(_BYTE*)(v145 + 72) = 0;
                    *(_BYTE*)(v145 + 512) = 0;
                    *(_BYTE*)(v145 + 520) = 0;
                    *(_BYTE*)(v145 + 584) = 0;
                    *(_BYTE*)(v145 + 592) = 0;
                    *(_BYTE*)(v145 + 656) = 0;
                    *(_QWORD*)(v145 + 88) = 0;
                    *(_QWORD*)(v145 + 96) = 0;
                    *(_QWORD*)(v145 + 104) = 0;
                    *(_QWORD*)(v145 + 120) = 0;
                    *(_QWORD*)(v145 + 128) = 0;
                    *(_QWORD*)(v145 + 144) = 0;
                    *(_QWORD*)(v145 + 152) = 0;
                    *(_QWORD*)(v145 + 168) = 0;
                    *(_QWORD*)(v145 + 176) = 0;
                    *(_QWORD*)(v145 + 184) = 0;
                    *(_DWORD*)(v145 + 192) = 0;
                    *(_QWORD*)(v145 + 160) = 0;
                    v148 = v145 + 160;
                    *(_QWORD*)(v145 + 136) = 0;
                    v149 = v145 + 136;
                    *(_DWORD*)(v145 + 224) = 0;
                    *(_QWORD*)(v145 + 112) = 0;
                    v150 = v145 + 112;
                    *(_QWORD*)(v145 + 200) = 0;
                    v151 = (__int64*)(v145 + 200);
                    *(_QWORD*)(v145 + 232) = 0;
                    v152 = v145 + 232;
                    *(_QWORD*)(v145 + 208) = 0;
                    *(_QWORD*)(v145 + 216) = 0;
                    *(_QWORD*)(v145 + 240) = 0;
                    *(_QWORD*)(v145 + 248) = 0;
                    *(_QWORD*)(v145 + 256) = 0;
                    *(_QWORD*)(v145 + 264) = 0;
                    *(_QWORD*)(v145 + 272) = 0;
                    *(_QWORD*)(v145 + 280) = 0;
                    *(_QWORD*)(v145 + 288) = 0;
                    *(_QWORD*)(v145 + 296) = 0;
                    *(_QWORD*)(v145 + 304) = 0;
                    *(_QWORD*)(v145 + 312) = 0;
                    *(_QWORD*)v145 = v253;
                    *(_QWORD*)(v145 + 80) = 0;
                    *(_QWORD*)(v145 + 320) = 0;
                    *(_QWORD*)(v145 + 328) = 0;
                    *(_QWORD*)(v145 + 336) = 0;
                    *(_QWORD*)(v145 + 344) = 0;
                    *(_QWORD*)(v145 + 352) = 0;
                    *(_QWORD*)(v145 + 360) = 0;
                    *(_QWORD*)(v145 + 368) = 0;
                    *(_QWORD*)(v145 + 376) = 0;
                    *(_QWORD*)(v145 + 384) = 0;
                    *(_QWORD*)(v145 + 392) = 0;
                    *(_QWORD*)(v145 + 400) = 0;
                    *(_QWORD*)(v145 + 408) = 0;
                    *(_QWORD*)(v145 + 416) = 0;
                    *(_QWORD*)(v145 + 424) = 0;
                    *(_QWORD*)(v145 + 432) = 0;
                    *(_QWORD*)(v145 + 440) = 0;
                    v264 = (__int64*)(v145 + 80);
                    v266 = (atomic_ullong*)(v145 + 8);
                    *(_BYTE*)(v145 + 448) = 0;
                    *(_QWORD*)(v145 + 704) = 0;
                    *(_QWORD*)(v145 + 696) = 0;
                    *(_QWORD*)(v145 + 688) = 0;
                    *(_QWORD*)(v145 + 680) = 0;
                    *(_QWORD*)(v145 + 672) = 0;
                    *(_QWORD*)(v145 + 664) = 0;
                    GameRoutine_e08050(v145 + 24, v144);
                    GameRoutine_e08150(v146, v150, v144 + 32);
                    GameRoutine_e08150(v146, v149, v144 + 40);
                    GameRoutine_e08150(v146, v148, v144 + 48);
                    v153 = *v151;
                    *(_DWORD*)(v147 + 184) = *(_DWORD*)(v144 + 56);
                    *(_DWORD*)(v147 + 188) = *(_DWORD*)(v144 + 60);
                    v154 = *(_DWORD*)(v144 + 64);
                    *(_QWORD*)(v147 + 208) = v153;
                    *(_DWORD*)(v147 + 192) = v154;
                    if (*(_WORD*)(v144 + 72) != 0) {
                      v155 = 0;
                      v156 = 0;
                      do {
                        GameRoutine_a78450(v151, *(_QWORD*)(v144 + 80) + v155);
                        ++v156;
                        v155 += 4;
                      } while (v156 < *(unsigned __int16*)(v144 + 72));
                    }
                    if (((*(_BYTE*)(v144 + 88) - 1) & 0xF8) != 0) {
                      v157 = 0;
                    }
                    else {
                      v157 = (unsigned __int8)(*(_BYTE*)(v144 + 88) - 1) + 1;
                    }
                    *(_DWORD*)(v147 + 224) = v157;
                    GameRoutine_e08260(v146, v152, v144 + 96);
                    GameRoutine_e08150(v146, v147 + 256, v144 + 112);
                    GameRoutine_e08260(v146, v147 + 280, v144 + 120);
                    GameRoutine_e08150(v146, v147 + 304, v144 + 136);
                    GameRoutine_e08260(v146, v147 + 328, v144 + 144);
                    GameRoutine_e08150(v146, v147 + 352, v144 + 160);
                    GameRoutine_e08260(v146, v147 + 376, v144 + 168);
                    GameRoutine_e08150(v146, v147 + 400, v144 + 184);
                    GameRoutine_e08260(v146, v147 + 424, v144 + 192);
                    if ((v275 & 1) != 0) {
                      v158 = v277;
                    }
                    else {
                      v158 = (char*)&v275 + 1;
                    }
                    if ((v275 & 1) != 0) {
                      v159 = v276;
                    }
                    else {
                      v159 = (unsigned __int64)(unsigned __int8)v275 >> 1;
                    }
                    GameRoutine_e023c0(v146, v158, v159);
                    v105 = GameRoutine_e02840(v146);
                    v8 = (_QWORD*)GameData_212bf68;
                    if ((v105 & 1) != 0) {
                      v160 = *v264;
                      v161 = v273;
                      if ((unsigned __int64)v273 < v274) {
                        *v273 = v160;
                        v143 = (__int64)(v161 + 1);
                      }
                      else {
                        v162 = v272;
                        v163 = (char*)((char*)v273 - (char*)v272);
                        v164 = v273 - v272;
                        v165 = v164 + 1;
                        if ((unsigned __int64)(v164 + 1) >> 61 != 0) {
                        LABEL_442:
                          GameRoutine_65c760(v106);
                        }
                        v166 = v274 - (_QWORD)v272;
                        if ((__int64)(v274 - (_QWORD)v272) >> 2 > v165) {
                          v165 = v166 >> 2;
                        }
                        if ((unsigned __int64)v166 >= 0x7FFFFFFFFFFFFFF8LL) {
                          v167 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v167 = v165;
                        }
                        if (v167 != 0) {
                          if (v167 >> 61 != 0) {
                            goto LABEL_443;
                          }
                          v168 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                                    8 * v167, 16, 0);
                        }
                        else {
                          v168 = 0;
                        }
                        v169 = v168 + 8 * v167;
                        v170 = (__int64)&v163[v168 + -8 * v164];
                        *(_QWORD*)&v163[v168] = v160;
                        v143 = (__int64)&v163[v168 + 8];
                        v105 = GameRoutine_1a0b950(v170, v162, v163);
                        v272 = (_QWORD*)v170;
                        v274 = v169;
                        v8 = (_QWORD*)GameData_212bf68;
                        if (v162 != nullptr) {
                          v171 = 128;
                          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) ==
                              0) {
                            v171 = 56;
                          }
                          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 +
                                              v171, (_QWORD)(v162));
                        }
                      }
                      v273 = (_QWORD*)v143;
                    }
                    v139 = v261;
                    if (atomic_fetch_add(v266, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v147 + 16LL))(v147);
                      GameRoutine_1a09c50(v147);
                    }
                  }
                  ++v142;
                  v140 = **(_QWORD**)(v139 + 40);
                  v141 = *(_QWORD*)(*(_QWORD*)(v139 + 40) + 8LL) - v140;
                } while ((__int64)v142 < (int)((unsigned __int64)v141 >> 3));
              }
              if ((v275 & 1) != 0 && v277 != nullptr) {
                v172 = 128;
                if (*(_QWORD*)(*v8 + 200LL) == 0) {
                  v172 = 56;
                }
                GameRoutine_1a0a4e0(*v8 + v172, (_QWORD)(v277));
              }
              v126 = v258;
              v129 = v249;
            }
          LABEL_209:
            v128 += 144;
          }
          v173 = (__int64)*v254;
          v174 = (*v254)[3];
          v176 = *(_QWORD*)(v174 + 72);
          v175 = *(_QWORD*)(v174 + 80);
          if (v175 == v176) {
            goto LABEL_406;
          }
          while (1) {
            if (GameData_21caab0 != 0 &&
                (GameRoutine_65c660(*(_QWORD*)(GameData_21caab0 + 48), v176) &
                 1) != 0) {
              if (GameData_21caab0 == 0) {
                break;
              }
              v177 =
                  GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v176);
              if (v177 == 0 || *(_DWORD*)(v177 + 32) == 0) {
                break;
              }
            }
            v176 += 16;
            if (v176 == v175) {
              goto LABEL_406;
            }
          }
          v178 = (_QWORD*)v255[4];
          v179 = v178[6];
          if (v179 == 0) {
            goto LABEL_296;
          }
          v180 = GameRoutine_1a0a0c0(v179);
          if (v180 == 0) {
            goto LABEL_296;
          }
          v181 = v178[5];
          if (atomic_fetch_add((atomic_ullong* volatile)(v180 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v181 != 0) {
              goto LABEL_294;
            }
          LABEL_296:
            v182 = nullptr;
          }
          else {
            v183 = v180;
            (*(void (**)(__int64))(*(_QWORD*)v180 + 16LL))(v180);
            GameRoutine_1a09c50(v183);
            if (v181 == 0) {
              goto LABEL_296;
            }
          LABEL_294:
            v182 = (_QWORD*)(v181 + 96);
          }
          v184 = v178[13];
          v185 = v178[14];
        LABEL_300:
          if (v184 != v185) {
            if (*(_BYTE*)v184 == 0) {
              goto LABEL_299;
            }
            v186 = (*(_BYTE*)(v184 + 8) & 1) != 0 ? *(_QWORD*)(v184 + 24)
                                                  : v184 + 9;
            v187 = GameRoutine_7a86e0(v186);
            if (v187 == 0) {
              goto LABEL_299;
            }
            v188 = v182[11];
            if (v188 == 0 || v182[13] == 0) {
              goto LABEL_299;
            }
            v189 = v188 - 1;
            if ((v188 & (v188 - 1)) != 0) {
              v190 = v187;
              if (v187 >= v188) {
                v190 = v187 % v188;
              }
            }
            else {
              v190 = v189 & v187;
            }
            v191 = *(_QWORD**)(v182[10] + 8 * v190);
            if (v191 == nullptr) {
              goto LABEL_299;
            }
            v192 = (_QWORD*)*v191;
            if (v192 == nullptr) {
              goto LABEL_299;
            }
            if ((v188 & v189) == 0) {
              while (1) {
                v194 = v192[1];
                if (v194 == v187) {
                  if (v192[2] == v187) {
                    goto LABEL_328;
                  }
                }
                else if ((v194 & v189) != v190) {
                  goto LABEL_299;
                }
                v192 = (_QWORD*)*v192;
                if (v192 == nullptr) {
                  goto LABEL_299;
                }
              }
            }
            while (1) {
              v193 = v192[1];
              if (v193 == v187) {
                if (v192[2] == v187) {
                LABEL_328:
                  v195 = v192[3];
                  if (v195 != 0) {
                    v196 = (__int64)(GameRoutine_db2180((void*)(&v275),
                                                        v178 + 31, v184 + 56),
                                     (void*)(&v275));
                    v197 = **(_QWORD**)(v195 + 40);
                    v198 = *(_QWORD*)(*(_QWORD*)(v195 + 40) + 8LL) - v197;
                    if ((int)((unsigned __int64)v198 >> 3) < 1) {
                      v205 = 0;
                      if ((v275 & 1) != 0) {
                        goto LABEL_350;
                      }
                    }
                    else {
                      v199 = 0;
                      do {
                        if (v199 >= v198 >> 3) {
                          GameRoutine_ca7e00(v196);
                        }
                        v204 = *(_QWORD*)(v197 + 8 * v199);
                        if ((GameRoutine_ffbf60(*(_QWORD*)(v204 + 152)) & 1) !=
                                0 ||
                            ((v196 =
                                  GameRoutine_ffbf60(*(_QWORD*)(v204 + 176))) &
                             1) != 0) {
                          v200 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                                    1040, 16, 0);
                          *(_QWORD*)(v200 + 16) = 0;
                          *(_QWORD*)(v200 + 8) = 0;
                          *(_QWORD*)v200 = v250;
                          GameRoutine_d82e50(v200 + 24, v204);
                          if ((v275 & 1) != 0) {
                            v201 = v277;
                          }
                          else {
                            v201 = (char*)&v275 + 1;
                          }
                          if ((v275 & 1) != 0) {
                            v202 = v276;
                          }
                          else {
                            v202 = (unsigned __int64)(unsigned __int8)v275 >> 1;
                          }
                          GameRoutine_e149a0(v200 + 24, v201, v202);
                          v196 = GameRoutine_e152d0(v200 + 24);
                          v203 = v196;
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v200 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
                            if ((v196 & 1) != 0) {
                              goto LABEL_345;
                            }
                          }
                          else {
                            (*(void (**)(__int64))(*(_QWORD*)v200 + 16LL))(
                                v200);
                            GameRoutine_1a09c50(v200);
                            if ((v203 & 1) != 0) {
                            LABEL_345:
                              v205 = 1;
                              goto LABEL_349;
                            }
                          }
                        }
                        ++v199;
                        v197 = **(_QWORD**)(v195 + 40);
                        v198 = *(_QWORD*)(*(_QWORD*)(v195 + 40) + 8LL) - v197;
                      } while ((__int64)v199 <
                               (int)((unsigned __int64)v198 >> 3));
                      v205 = 0;
                    LABEL_349:
                      if ((v275 & 1) != 0) {
                      LABEL_350:
                        if (v277 != nullptr) {
                          v206 = 128;
                          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) ==
                              0) {
                            v206 = 56;
                          }
                          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 +
                                              v206, (_QWORD)(v277));
                        }
                      }
                    }
                    if ((v205 & 1) != 0) {
                      v227 = 2;
                      v8 = (_QWORD*)GameData_212bf68;
                    LABEL_405:
                      HIDWORD(v268) |= v227;
                      LODWORD(v268) = 1;
                      goto LABEL_406;
                    }
                  }
                LABEL_299:
                  v184 += 144;
                  goto LABEL_300;
                }
              }
              else {
                if (v193 >= v188) {
                  v193 %= v188;
                }
                if (v193 != v190) {
                  goto LABEL_299;
                }
              }
              v192 = (_QWORD*)*v192;
              if (v192 == nullptr) {
                goto LABEL_299;
              }
            }
          }
          v207 = *(_QWORD*)(v173 + 8);
          v54 = GameRoutine_1a09c70(v207);
          if (v54 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_445;
          }
          v208 = v54;
          if (v54 >= 0x17) {
            if ((v54 | 7) == 0x17) {
              v210 = 26;
            }
            else {
              v210 = (v54 | 7) + 1;
            }
            v209 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v210,
                                             16, 0);
            v276 = v208;
            v277 = v209;
            v275 = v210 | 1;
          LABEL_362:
            v54 = GameRoutine_1a0b940(v209, v207, v208);
            goto LABEL_363;
          }
          v209 = (char*)&v275 + 1;
          LOBYTE(v275) = 2 * v54;
          if (v54 != 0) {
            goto LABEL_362;
          }
        LABEL_363:
          v209[v208] = 0;
          v211 = v275;
          v212 = v277;
          v213 = (v275 & 1) != 0 ? v277 : (char*)&v275 + 1;
          v214 = (v275 & 1) != 0 ? v276
                                 : (unsigned __int64)(unsigned __int8)v275 >> 1;
          v215 = v214 + 40;
          if (v214 + 40 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_445;
          }
          if (v215 > 0x16) {
            if ((v215 | 7) == 0x17) {
              v218 = 26;
            }
            else {
              v218 = (v215 | 7) + 1;
            }
            v217 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v218, 16, 0);
            v282 = v214 + 40;
            v283 = v217;
            v281 = v218 | 1;
            v216 = v218 | 1;
          }
          else {
            v216 = 2 * v215;
            v217 = 0;
            v282 = 0;
            v283 = 0;
            v281 = (unsigned __int8)(2 * v215);
          }
          v219 = (v216 & 1) == 0;
          if ((v216 & 1) != 0) {
            v220 = (_QWORD*)v217;
          }
          else {
            v220 = (__int64*)((char*)&v281 + 1);
          }
          v220[2] = 0x8FB8E8B383E3A783LL;
          v220[3] = 0x83E8AF8FE5B4A0E7LL;
          v220[4] = 0x5FBAA4E7A8A1E8BDLL;
          *v220 = 0x83E3B688E5B7BCE5LL;
          v220[1] = 0xE3B882E3B383E380LL;
          if (v219) {
            v221 = _139;
          }
          else {
            v221 = (_BYTE*)(v217 + 40);
          }
          if (v214 != 0) {
            GameRoutine_1a0b940(v221, v213, v214);
          }
          v221[v214] = 0;
          if ((v281 & 1) != 0) {
            v222 = (char*)v283;
          }
          else {
            v222 = (char*)&v281 + 1;
          }
          v280[1] = v222;
          v280[0] = GameRoutine_7a86e0(v222);
          if (GameData_21caab0 == 0) {
            v224 = true;
            v8 = (_QWORD*)GameData_212bf68;
            if ((v281 & 1) == 0) {
              goto LABEL_398;
            }
            goto LABEL_394;
          }
          v223 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v280);
          v8 = (_QWORD*)GameData_212bf68;
          if (v223 != 0) {
            v224 = *(_DWORD*)(v223 + 32) < 1;
            if ((v281 & 1) == 0) {
              goto LABEL_398;
            }
          LABEL_394:
            if (v283 != 0) {
              v225 = 128;
              if (*(_QWORD*)(*v8 + 200LL) == 0) {
                v225 = 56;
              }
              GameRoutine_1a0a4e0(*v8 + v225, (_QWORD)(v283));
            }
          }
          else {
            v224 = true;
            if ((v281 & 1) != 0) {
              goto LABEL_394;
            }
          }
        LABEL_398:
          if ((v211 & 1) != 0 && v212 != nullptr) {
            v226 = 128;
            if (*(_QWORD*)(*v8 + 200LL) == 0) {
              v226 = 56;
            }
            GameRoutine_1a0a4e0(*v8 + v226, (_QWORD)(v212));
          }
          if (!v224) {
            v227 = 4;
            goto LABEL_405;
          }
        LABEL_406:
          v105 = v255[2];
          v228 = v255[3];
          if (v105 < v228) {
            v229 = GameRoutine_ffc2b0(v105, &v267) + 72;
            goto LABEL_422;
          }
          v230 = v255[1];
          v231 = v105 - v230;
          v232 = 1 - 0x71C71C71C71C71C7LL * ((__int64)(v105 - v230) >> 3);
          if (v232 > 0x38E38E38E38E38ELL) {
            goto LABEL_448;
          }
          v233 = 0x8E38E38E38E38E39LL * ((__int64)(v228 - v230) >> 3);
          if (2 * v233 > v232) {
            v232 = 2 * v233;
          }
          if (v233 >= 0x1C71C71C71C71C7LL) {
            v234 = 0x38E38E38E38E38ELL;
          }
          else {
            v234 = v232;
          }
          if (v234 != 0) {
            if (v234 > 0x38E38E38E38E38ELL) {
            LABEL_443:
              GameRoutine_60a210(v105);
            }
            v235 = GameRoutine_651b90(*v8, 72 * v234, 16, 0);
          }
          else {
            v235 = 0;
          }
          v236 = v235 + v231;
          v237 = v235 + 72 * v234;
          GameRoutine_ffc2b0(v235 + v231, &v267);
          v229 = v236 + 72;
          v238 = v255[1];
          v239 = v255[2];
          v240 = v236 + v238 - v239;
          GameRoutine_ffc180(v238, v239, v240);
          v241 = v255[1];
          v255[1] = v240;
          v255[2] = v229;
          v255[3] = v237;
          if (v241 != 0) {
            v242 = 128;
            if (*(_QWORD*)(*v8 + 200LL) == 0) {
              v242 = 56;
            }
            result = GameRoutine_1a0a4e0(*v8 + v242, (_QWORD)(v241));
          }
        LABEL_422:
          v243 = v272;
          v255[2] = v229;
          v47 = v255;
          if (v243 != nullptr) {
            v244 = 128;
            if (*(_QWORD*)(*v8 + 200LL) == 0) {
              v244 = 56;
            }
            result = GameRoutine_1a0a4e0(*v8 + v244, (_QWORD)(v243));
          }
          if (v269 != nullptr) {
            v245 = 128;
            if (*(_QWORD*)(*v8 + 200LL) == 0) {
              v245 = 56;
            }
            result = GameRoutine_1a0a4e0(*v8 + v245, (_QWORD)(v269));
          }
          v51 = v254 + 1;
          if (v254 + 1 == v251) {
            goto LABEL_431;
          }
        }
        if ((v54 | 7) == 0x17) {
          v57 = 26;
        }
        else {
          v57 = (v54 | 7) + 1;
        }
        v283 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v57, 16, 0);
        v58 = v57 | 1;
        v56 = (char*)v283;
        v8 = (_QWORD*)GameData_212bf68;
        v281 = v58;
        v282 = v55;
      LABEL_70:
        GameRoutine_1a0b940(v56, v53, v55);
        goto LABEL_71;
      }
    LABEL_431:
      v246 = v47[5];
      v47[4] = 0;
      v47[5] = 0;
      GameData_22127a8 = 0;
    }
    v247 = v252;
    if (v246 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v246 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v246 + 16LL))(v246);
      result = GameRoutine_1a09c50(v246);
      v247 = v252;
    }
    GameData_2232018 = 0;
    if (v247 != 0) {
      v248 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v248 = 56;
      }
      return GameRoutine_1a0a4e0(*v8 + v248, (_QWORD)(v247));
    }
  }
  return result;
}

void GameHr_ffc420(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if ((*(_BYTE*)(a1 + 272) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 288);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  v4 = *(_QWORD*)(a1 + 264);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt2(v4);
  }
  HubDisposFileReader_Destructor((_QWORD*)(a1 + 56));
  v5 = *(_QWORD*)(a1 + 32);
  if (v5 != 0) {
    *(_QWORD*)(a1 + 40) = v5;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  v5);
  }
}

__int64 GameHr_ffcfa0(__int64* a1)
{
  __int64* v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  signed __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;

  a1[1] = *a1;
  v2 = GameData_212ec18[0];
  result = *GameData_212ec18[0];
  if (*GameData_212ec18[0] == 0) {
    return result;
  }
  game_hub_FastTravelManager_RefreshTravelList(result);
  v4 = *(_QWORD**)(*v2 + 40);
  v5 = *(_QWORD*)(*v2 + 48);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v4 == nullptr || v4[1] == *v4) {
    result = 0;
    if (v5 == 0) {
      return result;
    }
  }
  else {
    v6 = (__int64*)v4[6];
    v7 = (__int64*)v4[7];
    while (v6 != v7) {
      v9 = *v6;
      if (*v6 != 0) {
        v10 = *(_DWORD**)(v9 + 8);
        if (v10 != nullptr && *v10 == 1) {
          v11 = *(_QWORD*)(v9 + 32);
          if (v11 != 0) {
            v13 = (_QWORD*)a1[1];
            v12 = a1[2];
            if ((unsigned __int64)v13 < v12) {
              *v13 = v11;
              v8 = (__int64)(v13 + 1);
            }
            else {
              v14 = *a1;
              v15 = (signed __int64)v13 - *a1;
              v16 = (v15 >> 3) + 1;
              if (v16 >> 61 != 0) {
                GameRoutine_688200_alt1();
              }
              v17 = v12 - v14;
              if (v17 >> 2 > v16) {
                v16 = v17 >> 2;
              }
              if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
                v18 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v18 = v16;
              }
              if (v18 != 0) {
                if (v18 >> 61 != 0) {
                  GameRoutine_60a210_alt1();
                }
                v19 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
              }
              else {
                v19 = 0;
              }
              v20 = v19 + 8 * v18;
              v21 = v19 + v15 - 8 * (v15 >> 3);
              *(_QWORD*)(v19 + v15) = v11;
              v8 = v19 + v15 + 8;
              memcpy(v21, v14, v15);
              *a1 = v21;
              a1[1] = v8;
              a1[2] = v20;
              if (v14 != 0) {
                v22 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v22 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v14);
              }
            }
            a1[1] = v8;
          }
        }
      }
      v6 += 2;
    }
    result = 1;
    if (v5 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v23 = result;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt2(v5);
    return v23;
  }
  return result;
}

void GameHr_fffa20(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[2];

  v1 = *(_QWORD*)(a1 + 16);
  v2 = *(_QWORD**)(v1 + 32);
  v3 = *(_QWORD**)(v1 + 40);
  if (v2 != v3) {
    do {
      v5 = v2[1];
      if (v5 != 0) {
        v6 = GameRoutine_1a0a0c0(v5);
        if (v6 != 0) {
          v7 = v6;
          if (*v2 != 0) {
            v9[0] = *v2;
            v9[1] = v6;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                      memory_order_relaxed);
            GameRoutine_f64760(v9);
            if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
              GameRoutine_1a09c50(v7);
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            GameRoutine_1a09c50(v7);
          }
        }
      }
      v2 += 2;
    } while (v2 != v3);
    v1 = *(_QWORD*)(a1 + 16);
    v2 = *(_QWORD**)(v1 + 32);
    v3 = *(_QWORD**)(v1 + 40);
  }
  for (; v3 != v2; v3 -= 2) {
    v8 = *(v3 - 1);
    if (v8 != 0) {
      GameRoutine_1a09c50(v8);
    }
  }
  *(_QWORD*)(v1 + 40) = v2;
}

void GameHr_fffbc0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 64);
  if (v1 != 0) {
    v2 = *(_QWORD*)(a1 + 72);
    if (v1 == v2) {
      goto LABEL_8;
    }
    do {
      v4 = *(_QWORD*)(v2 - 8);
      if (v4 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v4);
      }
      v2 -= 16;
    } while (v2 != v1);
    v5 = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a1 + 72) = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_8:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v1);
    }
  }
}

void GameHr_1001d80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[2];
    char* v11;
  } v10_;
  struct {
    __int64* v12;
    __int64 v13;
  } v12_;

  *(_BYTE*)(a1 + 272) = 1;
  v2 = *(_QWORD*)GameData_212dc48[0];
  v3 = fw_memory_g_heap_manager_ptr;
  v4 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v10_.v10[0] = 33;
  v10_.v10[1] = 28;
  v10_.v11 = v4;
  strcpy(v4, "Gim_Obelisk_DarkAura_Trigger");
  game_hub_e1c160((void*)(&v12_.v12), v2, (char*)v10_.v10,
                  (__int64*)(a1 + 192));
  v5 = v12_.v12;
  v6 = v12_.v13;
  if (v12_.v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12_.v13 + 8), 1u,
                              memory_order_relaxed);
  }
  v7 = *(_QWORD*)(a1 + 264);
  *(_QWORD*)(a1 + 256) = v5;
  *(_QWORD*)(a1 + 264) = v6;
  if (v7 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt2(v7);
    }
    v6 = *(_QWORD*)(a1 + 264);
  }
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt2(v6);
    }
  }
  v8 = v12_.v13;
  if (v12_.v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12_.v13 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt2(v8);
    if ((v10_.v10[0] & 1) == 0) {
      return;
    }
  }
  else if ((v10_.v10[0] & 1) == 0) {
    return;
  }
  if (v10_.v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, (__int64)v10_.v11);
  }
}

__int64 GameHr_1001f20()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float* v4;
  _BOOL4 v5;
  __int64 v6;

  v0 = GameData_21f3ca8;
  v1 = *(_QWORD*)(GameData_21f3ca8 + 16);
  v2 = *(_QWORD*)(v1 + 24);
  if (v2 != 0 && (v3 = GameRoutine_1a0a0c0(v2)) != 0) {
    v4 = *(float**)(v1 + 16);
    v5 = v4 != nullptr && ((*(_BYTE*)(*(_QWORD*)v4 + 12LL) & 1) != 0 ||
                           v4[8] < *(float*)(*(_QWORD*)v4 + 8LL));
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      GameRoutine_1a09c50(v6);
    }
  }
  else {
    v5 = false;
  }
  return *(float*)(v0 + 8) > 0.0f || v5;
}

void GameHr_1002260(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  _QWORD v21[3];
  __int64 v22[2];

  v1 = *(__int64**)(GameData_21ec7c0 + 24);
  v2 = *(__int64**)(GameData_21ec7c0 + 32);
  if (v1 != v2) {
    while (1) {
      v3 = *v1;
      v4 = *(unsigned __int8*)(*v1 + 320);
      v5 = *(_QWORD*)(*v1 + 328);
      if ((v4 & 1) == 0) {
        v5 = v4 >> 1;
      }
      if (v5 == 12) {
        v6 = (v4 & 1) != 0 ? *(__int64**)(v3 + 336) : (__int64*)(v3 + 321);
        v7 = *v6;
        v8 = *((_DWORD*)v6 + 2);
        if (v7 == 0x83E3A982E39583E3LL && v8 == -1971068024) {
          break;
        }
      }
      v1 += 2;
      if (v1 == v2) {
        return;
      }
    }
    v10 = v1[1];
    if (v10 != 0) {
      v12 = v1[1];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                memory_order_relaxed);
      v13 = std___1___shared_weak_count_lock_alt1(v12);
      std___1___shared_weak_count___release_weak_alt2(v10);
      if (v13 != 0) {
        v14 = a1;
        v15 = (__int64*)GameData_212dbf0[0];
        v22[0] = v3;
        v22[1] = v13;
        v16 = *(_QWORD*)GameData_212dbf0[0];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_efbb60_alt1(v16, v22, 1);
        std___1___shared_weak_count___release_weak_alt2(v13);
        v17 = *v15;
        v18 = fw_memory_g_heap_manager_ptr;
        v19 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v21[0] = 33;
        v21[1] = 31;
        v21[2] = v19;
        strcpy(v19, "MID_LGV_LG00_099_Part1Clear_m01");
        GameRoutine_efb6f0_alt1(v17, v14, v21);
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v20, (__int64)v19);
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak_alt2(v13);
        }
      }
    }
  }
}

__int64* GameHr_1005520(_QWORD* a1, __int64 a2)
{
  char v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64* result;
  __int64** v9;
  __int64** v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  signed __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  int v30;

  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0_alt1();
  }
  if ((GameData_2216820 & 0x10) != 0 ||
      (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0 ||
      (GameData_2216820 & 8) != 0 && *(_BYTE*)(GameData_21f4cc0 + 13) == 0) {
    return nullptr;
  }
  v30 = *game_g_shared_system_skills_ptr & 0xFFF;
  v4 = game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v30);
  v5 = a2;
  if ((v4 & 1) != 0) {
    v6 = *(_QWORD*)(a2 + 440);
    v7 = v6 != 0 ? *(_BYTE*)(v6 + 16) : 9;
    if (((1 << v7) & 0xF1) != 0) {
      return nullptr;
    }
  }
  v10 = (__int64**)a1[4];
  v9 = (__int64**)a1[5];
  if (v10 != v9) {
    do {
      v11 = *v10;
      v12 = (__int64)v10[1];
      if (v12 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                  memory_order_relaxed);
        v13 = *v11;
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v13 == v5) {
            goto LABEL_24;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak_alt2(v12);
          v5 = a2;
          if (v13 == a2) {
            goto LABEL_24;
          }
        }
      }
      else if (*v11 == v5) {
        goto LABEL_24;
      }
      v10 += 2;
    } while (v10 != v9);
    v10 = v9;
  LABEL_24:
    v9 = (__int64**)a1[5];
  }
  if (v10 != v9) {
    return *v10;
  }
  v14 = v5;
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       48, 16, 0);
  *(_QWORD*)(v16 + 8) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_QWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_QWORD*)v16 = GameData_2000778;
  v17 = a1[6];
  *(_QWORD*)(v16 + 24) = v14;
  result = (__int64*)(v16 + 24);
  if ((unsigned __int64)v9 >= v17) {
    v19 = a1[4];
    v20 = (signed __int64)v9 - v19;
    v21 = (v20 >> 4) + 1;
    if (v21 >> 60 != 0) {
      GameRoutine_10064a0_alt1();
    }
    v22 = v17 - v19;
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
    v24 = fw_memory_HeapManager_Allocate(*v15, 16 * v23, 16, 0);
    v25 = (_QWORD*)(v24 + v20);
    v26 = v24 + 16 * v23;
    *v25 = v16 + 24;
    v25[1] = v16;
    v27 = v24 + v20 - 16 * (v20 >> 4);
    v18 = v24 + v20 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
    memcpy(v27, v19, v20);
    a1[4] = v27;
    a1[5] = v18;
    a1[6] = v26;
    if (v19 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v15 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*v15 + v28, v19);
    }
    result = (__int64*)(v16 + 24);
  }
  else {
    *v9 = result;
    v9[1] = (__int64*)v16;
    v18 = (__int64)(v9 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[5] = v18;
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v29 = result;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt2(v16);
    return v29;
  }
  return result;
}

_QWORD* GameHr_1005820(_QWORD* a1, __int64 a2, __int64 a3)
{
  _QWORD* result;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  char v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  __int64 v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  unsigned int v34;
  __int64 (***v35)();
  _QWORD* v36;
  struct {
    _QWORD v37[2];
    __int64 v38;
  } v37_;
  struct {
    __int64 v39;
    __int64 v40;
    __int64 v41;
  } v39_;

  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0_alt1();
  }
  if ((GameData_2216820 & 0x10) != 0 ||
      (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0 ||
      (GameData_2216820 & 8) != 0 && *(_BYTE*)(GameData_21f4cc0 + 13) == 0) {
    return nullptr;
  }
  v5 = (_QWORD*)a1[7];
  v6 = (_QWORD*)a1[8];
  v7 = a3;
  v8 = a2;
  if (v5 == v6) {
    goto LABEL_24;
  }
  do {
    v9 = (_QWORD*)*v5;
    v10 = v5[1];
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    if (*v9 == a2 && v9[1] == a3 || *v9 == a3 && v9[1] == a2) {
      v11 = 1;
      if (v10 == 0) {
        goto LABEL_20;
      }
    }
    else {
      v11 = 0;
      if (v10 == 0) {
        goto LABEL_20;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt2(v10);
      a2 = v8;
      a3 = v7;
    }
  LABEL_20:
    if ((v11 & 1) != 0) {
      goto LABEL_23;
    }
    v5 += 2;
  } while (v5 != v6);
  v5 = v6;
LABEL_23:
  v6 = (_QWORD*)a1[8];
LABEL_24:
  if (v5 != v6) {
    return (_QWORD*)*v5;
  }
  v12 = (__int64*)fw_memory_g_heap_manager_ptr;
  v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       48, 16, 0);
  *(_QWORD*)(v13 + 8) = 0;
  *(_QWORD*)(v13 + 16) = 0;
  *(_QWORD*)(v13 + 32) = v7;
  *(_QWORD*)(v13 + 40) = 0;
  v39_.v39 = v8;
  v39_.v40 = 0;
  v39_.v41 = 0;
  *(_QWORD*)v13 = GameData_20007c8;
  v14 = game_GameModeData_instance_;
  *(_QWORD*)(v13 + 24) = v8;
  result = (_QWORD*)(v13 + 24);
  if (v8 != 0) {
    v15 = *(_QWORD*)(v8 + 392);
    v39_.v40 = v15;
    if (v15 != 0) {
      v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v15 + 24) + 1784LL) + 272LL);
    }
    v39_.v41 = v15;
    v16 = v15 == 0;
    v37_.v37[0] = v7;
    if (v7 == 0) {
    LABEL_36:
      if (GameData_2166cf2 != 0) {
        goto LABEL_37;
      }
    LABEL_56:
      result = nullptr;
      goto LABEL_57;
    }
  }
  else {
    v16 = true;
    v37_.v37[0] = v7;
    if (v7 == 0) {
      goto LABEL_36;
    }
  }
  v17 = *(_QWORD*)(v7 + 392);
  v37_.v37[1] = v17;
  if (v17 == 0) {
    goto LABEL_36;
  }
  v37_.v38 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v17 + 24) + 1784LL) + 272LL);
  if (v37_.v38 == 0) {
    v16 = true;
  }
  if (v16) {
    goto LABEL_36;
  }
  v33 = *(_QWORD**)(v14 + 128);
  v34 = GameReliance_8e17a0(v33, (__int64)&v39_.v39, (__int64)v37_.v37);
  if ((v34 & 0x80000000) != 0) {
    v35 = &game_GameReliance_Impl_Data_vtable_ptr;
  }
  else {
    v35 = (__int64 (***)(void))(v33[1] + 56LL * v34);
  }
  result = (_QWORD*)(v13 + 24);
  if (*((_BYTE*)v35 + 10) == 0) {
    goto LABEL_56;
  }
LABEL_37:
  v18 = (_QWORD*)a1[8];
  v19 = a1[9];
  if ((unsigned __int64)v18 >= v19) {
    v21 = a1[7];
    v22 = (unsigned __int64)v18 - v21;
    v23 = ((__int64)v18 - v21) >> 4;
    v24 = v23 + 1;
    if ((unsigned __int64)(v23 + 1) >> 60 != 0) {
      GameRoutine_ebfd20_alt1();
    }
    v25 = v19 - v21;
    if (v25 >> 3 > v24) {
      v24 = v25 >> 3;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF0LL) {
      v26 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 >> 60 != 0) {
      GameRoutine_60a210_alt1();
    }
    v27 = result;
    v28 = fw_memory_HeapManager_Allocate(*v12, 16 * v26, 16, 0);
    v29 = (_QWORD*)(v28 + v22);
    v30 = v28 + 16 * v26;
    *v29 = v27;
    v29[1] = v13;
    v31 = v28 + v22 - 16 * v23;
    v20 = v28 + v22 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    memcpy(v31, v21, v22);
    a1[7] = v31;
    a1[8] = v20;
    a1[9] = v30;
    if (v21 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v12 + 200) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*v12 + v32, v21);
    }
    result = v27;
  }
  else {
    *v18 = result;
    v18[1] = v13;
    v20 = (__int64)(v18 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[8] = v20;
LABEL_57:
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v36 = result;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak_alt2(v13);
    return v36;
  }
  return result;
}

bool GameHr_1005ba0(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  int v12;
  __int64 v13;
  _QWORD v15[2];

  v6 = GameRoutine_1a0a0c0(a2[1]);
  v7 = a3[1];
  v8 = *(_QWORD*)(*a2 + 16LL);
  if (v7 != 0 && (v9 = GameRoutine_1a0a0c0(v7)) != 0) {
    v10 = v9;
    v11 = GameRoutine_1005820(a1, v8, *(_QWORD*)(*a3 + 16LL));
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      GameRoutine_1a09c50(v10);
    }
  }
  else {
    v11 = GameRoutine_1005820(a1, v8, 0);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    GameRoutine_1a09c50(v6);
  }
  if (v11 != nullptr) {
    v15[1] = &GameData_1ab8d7f;
    v15[0] = GameRoutine_7a86e0(&GameData_1ab8d7f);
    v12 = GameData_21caab0;
    if (GameData_21caab0 != 0) {
      v13 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v15);
      if (v13 != 0) {
        v12 = *(_DWORD*)(v13 + 32);
      }
      else {
        v12 = 0;
      }
    }
    *((_DWORD*)v11 + 4) += v12;
  }
  return v11 != nullptr;
}

bool GameHr_1005ce0(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  int v12;
  __int64 v13;
  _QWORD v15[2];

  v6 = GameRoutine_1a0a0c0(a2[1]);
  v7 = a3[1];
  v8 = *(_QWORD*)(*a2 + 16LL);
  if (v7 != 0 && (v9 = GameRoutine_1a0a0c0(v7)) != 0) {
    v10 = v9;
    v11 = GameRoutine_1005820(a1, v8, *(_QWORD*)(*a3 + 16LL));
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      GameRoutine_1a09c50(v10);
    }
  }
  else {
    v11 = GameRoutine_1005820(a1, v8, 0);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    GameRoutine_1a09c50(v6);
  }
  if (v11 != nullptr) {
    v15[1] = &GameData_1a95e39;
    v15[0] = GameRoutine_7a86e0(&GameData_1a95e39);
    v12 = GameData_21caab0;
    if (GameData_21caab0 != 0) {
      v13 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v15);
      if (v13 != 0) {
        v12 = *(_DWORD*)(v13 + 32);
      }
      else {
        v12 = 0;
      }
    }
    *((_DWORD*)v11 + 4) += v12;
  }
  return v11 != nullptr;
}

__n128 GameHr_1007bc0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = GameData_21f3d08;
  if (GameData_21f3d08 != 0 && *(_QWORD*)(GameData_21f3d08 + 32) != 0) {
    v2 = *(_QWORD*)(a1 + 208);
    v3 = GameRoutine_1a0a0c0(*(_QWORD*)(GameData_21f3d08 + 32));
    if (v3 != 0) {
      v5 = *(_QWORD*)(v1 + 24);
      if (v5 != 0 && *(_QWORD*)(v5 + 16) != v2) {
        v6 = *(_QWORD*)(v1 + 32);
        *(_QWORD*)(v1 + 24) = 0;
        *(_QWORD*)(v1 + 32) = 0;
        if (v6 != 0) {
          v7 = v3;
          result = GameRoutine_1a09c50(v6);
          v3 = v7;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v8 = v3;
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return GameRoutine_1a09c50(v8);
      }
    }
  }
  return result;
}

void GameHr_100fc20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  GameHr_14a1390((__int64*)(a1 + 64), 1);
  GameHr_14a1390((__int64*)(a1 + 88), 1);
  GameHr_14a1390((__int64*)(a1 + 112), 1);
  GameHr_14a1390((__int64*)(a1 + 136), 1);
  GameHr_14a1390((__int64*)(a1 + 160), 1);
  if (*(_QWORD*)(a1 + 32) != 0) {
    GameHr_a867a0(a1 + 32);
  }
  if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 200);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  v4 = *(_QWORD*)(a1 + 168);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt2(v4);
  }
  v5 = *(_QWORD*)(a1 + 144);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt2(v5);
  }
  v6 = *(_QWORD*)(a1 + 120);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt2(v6);
  }
  v7 = *(_QWORD*)(a1 + 96);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt2(v7);
    v8 = *(_QWORD*)(a1 + 72);
    if (v8 == 0) {
      return;
    }
  }
  else {
    v8 = *(_QWORD*)(a1 + 72);
    if (v8 == 0) {
      return;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt2(v8);
  }
}

__int64 GameHr_100fe70(__int64* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  GameRoutine_14a1390_alt1(a1 + 4, 1);
  result = GameRoutine_14a1390_alt1(a1 + 6, 1);
  v3 = a1[7];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak_alt2(v3);
    v4 = a1[5];
    if (v4 == 0) {
      return result;
    }
  }
  else {
    v4 = a1[5];
    if (v4 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak_alt2(v4);
  }
  return result;
}

void GameHr_1013a50(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  int v3;
  int v5;
  float v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  __int16 v15;
  __int64 v16;
  const char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  struct {
    _QWORD v23[2];
    char* v24;
  } v23_;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v3 = *(_DWORD*)(a1 + 8);
  if ((a2 & 1) != 0) {
    v5 = 4;
  }
  else {
    v5 = 0;
  }
  *(_DWORD*)(a1 + 8) = v3 & 0xFFFFFFFB | v5;
  game_VariableManager_SetFlag((__int64)&GameData_2233760, (v3 & 8) != 0);
  game_VariableManager_SetFlag((__int64)&GameData_2233740,
                               (*(_DWORD*)(a1 + 8) & 4) != 0);
  game_VariableManager_SetFlag((__int64)&GameData_2233750,
                               (*(_DWORD*)(a1 + 8) & 2) != 0);
  v26 = v28;
  v27 = v29;
  v31 = v30;
  if ((*(_BYTE*)(a1 + 8) & 8) != 0) {
    BYTE5(v23_.v23[0]) = 0;
    LOBYTE(v23_.v23[0]) = 8;
    *(_DWORD*)((char*)v23_.v23 + 1) = 1819043144;
  }
  else {
    HIBYTE(v23_.v23[0]) = 0;
    LOBYTE(v23_.v23[0]) = 12;
    *(_DWORD*)((char*)v23_.v23 + 1) = 1836216142;
    *(_WORD*)((char*)v23_.v23 + 5) = 27745;
  }
  ProcLoadWait_9a4d20(1, v23_.v23);
  if ((*(_BYTE*)(a1 + 8) & 4) != 0) {
    v6 = 0x1.0000000000000p+0f;
  }
  else {
    v6 = 0x0.0p+0f;
  }
  if (v6 <= 0x0.0p+0f) {
    HIBYTE(v23_.v23[0]) = 0;
    LOBYTE(v23_.v23[0]) = 12;
    *(_DWORD*)((char*)v23_.v23 + 1) = 1836216142;
    *(_WORD*)((char*)v23_.v23 + 5) = 27745;
  }
  else {
    BYTE5(v23_.v23[0]) = 0;
    LOBYTE(v23_.v23[0]) = 8;
    *(_DWORD*)((char*)v23_.v23 + 1) = 1852399954;
  }
  ProcLoadWait_9a4d20(2, v23_.v23);
  GameRoutine_1013de0_alt1(1u, v6);
  v7 = *(_DWORD*)(a1 + 8);
  v8 = GameData_212f500[0];
  if ((v7 & 2) != 0) {
    v9 = *(_QWORD*)(*(_QWORD*)GameData_212f500[0] + 48LL);
    if (v9 != 0) {
      v10 = *(unsigned __int16*)(v9 + 190);
      if (v10 == 1) {
        v11 = 3;
      }
      else {
        v11 = 0;
      }
      if (v10 == 2) {
        v12 = 2;
      }
      else {
        v12 = v11;
      }
      GameRoutine_1013de0_alt1(v12, 0x1.0000000000000p+0f);
      v7 = *(_DWORD*)(a1 + 8);
    }
  }
  v13 = (v7 & 8) != 0;
  v14 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               56LL);
  if (*(_DWORD*)(v14 + 16) != v13) {
    Manager_c444d0(v14, v13);
    v7 = *(_DWORD*)(a1 + 8);
  }
  if ((v7 & 2) != 0) {
    qmemcpy(v23_.v23, "\nSigh", 5);
    v15 = 116;
  }
  else {
    HIBYTE(v23_.v23[0]) = 0;
    LOBYTE(v23_.v23[0]) = 12;
    *(_DWORD*)((char*)v23_.v23 + 1) = 1836216142;
    v15 = 27745;
  }
  *(_WORD*)((char*)v23_.v23 + 5) = v15;
  ProcLoadWait_9a4d20(4, v23_.v23);
  v16 = *(_QWORD*)(*(_QWORD*)v8 + 48LL);
  if (v16 != 0) {
    v17 = *(const char**)(v16 + 8);
    v18 = strlen(v17);
    if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v19 = v18;
    if (v18 >= 0x17) {
      if ((v18 | 7) == 0x17) {
        v21 = 26;
      }
      else {
        v21 = (v18 | 7) + 1;
      }
      v20 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v21,
                                                  16, 0);
      v23_.v23[1] = v19;
      v23_.v24 = v20;
      v23_.v23[0] = v21 | 1;
    }
    else {
      LOBYTE(v23_.v23[0]) = 2 * v18;
      v20 = (char*)v23_.v23 + 1;
      if (v18 == 0) {
        goto LABEL_37;
      }
    }
    memmove((__int64)v20, (__int64)v17, v19);
  LABEL_37:
    v20[v19] = 0;
    ProcLoadWait_9a4d20(3, v23_.v23);
    if ((v23_.v23[0] & 1) != 0 && v23_.v24 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v23_.v24);
    }
  }
}

void GameHr_1015560(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (*(_QWORD*)a1 != 0) {
    GameRoutine_190bf00_alt1(*game_spine_g_resource_releaser_ptr, (_QWORD*)a1);
    v2 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)a1 = 0;
    *(_QWORD*)(a1 + 8) = 0;
    if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak_alt2(v2);
      if ((*(_BYTE*)(a1 + 64) & 1) == 0) {
      LABEL_5:
        *(_WORD*)(a1 + 64) = 0;
        if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
        LABEL_6:
          **(_BYTE**)(a1 + 112) = 0;
          *(_QWORD*)(a1 + 104) = 0;
        LABEL_10:
          *(_BYTE*)(a1 + 124) = 0;
          *(_DWORD*)(a1 + 120) = 0;
          *(_QWORD*)(a1 + 128) = 0;
          *(_QWORD*)(a1 + 136) = 0;
          *(_QWORD*)(a1 + 144) = 0;
          *(_QWORD*)(a1 + 152) = 0;
          *(_BYTE*)(a1 + 160) = 0;
          *(_DWORD*)(a1 + 164) = 1;
          goto LABEL_11;
        }
      LABEL_9:
        *(_WORD*)(a1 + 96) = 0;
        goto LABEL_10;
      }
    }
    else if ((*(_BYTE*)(a1 + 64) & 1) == 0) {
      goto LABEL_5;
    }
    **(_BYTE**)(a1 + 80) = 0;
    *(_QWORD*)(a1 + 72) = 0;
    if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
LABEL_11:
  *(_QWORD*)(a1 + 88) = game_UnitEdit_vtable;
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 112);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 80);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v5);
    }
  }
  v7 = *(_QWORD*)(a1 + 8);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt2(v7);
  }
}

__int64 GameHr_101c1b0(__int64* a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int128 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *a1 = 0;
  a1[1] = 0;
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 256, 16, 0);
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)result = GameData_212f8f0[0] + 2;
  *(_QWORD*)(result + 8) = 0;
  v3 = GameData_212fc58[0];
  *(_QWORD*)(result + 40) = 0;
  *(_BYTE*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_QWORD*)(result + 128) = 0;
  *(_QWORD*)(result + 136) = 0;
  *(_QWORD*)(result + 144) = 0;
  *(_QWORD*)(result + 152) = 0;
  *(_QWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 184) = 0;
  *(_QWORD*)(result + 32) = v3 + 2;
  v4 = result + 32;
  *(_BYTE*)(result + 160) = 1;
  *(_BYTE*)(result + 192) = 1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                            memory_order_acquire) &
       1) == 0) {
    v9 = result + 32;
    v10 = result;
    v7 = __cxa_guard_acquire_alt1((__int64)&GameData_21a5680);
    v4 = v9;
    result = v10;
    if (v7 != 0) {
      v8 = *((_QWORD*)GameData_212c2f8 + 1);
      *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
      *((_QWORD*)&GameData_21a5670 + 1) = v8;
      __cxa_guard_release_alt1((__int64)&GameData_21a5680);
      v4 = v9;
      result = v10;
    }
  }
  v5 = GameData_21a5670;
  v6 = a1[1];
  *(_DWORD*)(result + 232) = 0;
  *(_BYTE*)(result + 236) = 0;
  *a1 = v4;
  a1[1] = result;
  *(_OWORD*)(result + 208) = v5;
  *(_QWORD*)(result + 224) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 240) = 0x3F80000000000000LL;
  *(_DWORD*)(result + 248) = 1065353216;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak_alt2(v6);
  }
  return result;
}

__n128 GameHr_1028d60(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  int v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __n128 result;
  __int64 v18;
  __int64 v19;
  _QWORD v20[2];

  GameRoutine_1028ee0(*(_QWORD*)(a1 + 152), 0);
  GameRoutine_1029080(*(_QWORD*)(a1 + 152));
  v2 = (__int64*)GameData_212dbb8[0];
  v3 = *(_QWORD*)GameData_212dbb8[0];
  v4 = *(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 184LL);
  *(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 184LL) = v4 + 1;
  if (v4 == 0) {
    (**(void (***)(__int64))(v3 + 176))(v3 + 176);
    v3 = *v2;
  }
  v5 = *(_DWORD*)(v3 + 168);
  *(_DWORD*)(v3 + 168) = v5 + 1;
  if (v5 == 0) {
    (**(void (***)(__int64))(v3 + 160))(v3 + 160);
  }
  v6 = (__int64*)GameData_212dbf0[0];
  v7 = *(_QWORD*)GameData_212dbf0[0];
  v8 = GameData_212d458[0];
  v9 = *(_QWORD**)(*GameData_212d458[0] + 24);
  v10 = *(_QWORD**)(*GameData_212d458[0] + 32);
  if (v9 == v10) {
  LABEL_8:
    v20[0] = 0;
    v20[1] = 0;
  LABEL_9:
    GameRoutine_efbb60(v7, v20, 1);
    goto LABEL_10;
  }
  while (*(_QWORD*)(*v9 + 264LL) != *(_QWORD*)(a1 + 152)) {
    v9 += 2;
    if (v9 == v10) {
      goto LABEL_8;
    }
  }
  v15 = v9[1];
  v20[0] = *v9;
  v20[1] = v15;
  if (v15 == 0) {
    goto LABEL_9;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                            memory_order_relaxed);
  GameRoutine_efbb60(v7, v20, 1);
  GameRoutine_1a09c50(v15);
LABEL_10:
  v11 = *v6;
  v12 = *(__int64**)(*v8 + 24);
  v13 = *(__int64**)(*v8 + 32);
  if (v12 == v13) {
  LABEL_13:
    v18 = 0;
    v19 = 0;
  }
  else {
    while (1) {
      v14 = *v12;
      if (*(_QWORD*)(*v12 + 264) == *(_QWORD*)(a1 + 152)) {
        break;
      }
      v12 += 2;
      if (v12 == v13) {
        goto LABEL_13;
      }
    }
    v16 = v12[1];
    v18 = v14;
    v19 = v16;
    if (v16 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                memory_order_relaxed);
    }
  }
  GameRoutine_efc3b0(v11, &v18, 0, 0x100000000LL);
  if (v19 != 0) {
    return GameRoutine_1a09c50(v19);
  }
  return result;
}

void GameHr_1028ee0(__int64 a1, char a2)
{
  __int64* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  long double v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;

  v3 = GameData_212d458[0];
  v4 = *(_QWORD**)(*GameData_212d458[0] + 24);
  v5 = *(_QWORD**)(*GameData_212d458[0] + 32);
  if (v4 != v5) {
    while (1) {
      v6 = *v4;
      if (*(_QWORD*)(*v4 + 264LL) == a1) {
        break;
      }
      v4 += 2;
      if (v4 == v5) {
        goto LABEL_4;
      }
    }
    v13 = v4[1];
    if (v13 != 0) {
      v14 = v4[1];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                memory_order_relaxed);
      v15 = GameRoutine_1a0a0c0(v14);
      GameRoutine_1a09c50(v13);
      if (v15 != 0) {
        GameRoutine_caea10(v6, 512, (a2 & 1) == 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          GameRoutine_1a09c50(v15);
        }
      }
    }
  }
LABEL_4:
  v7 = *(_QWORD*)(*v3 + 80);
  if (v7 != 0) {
    v8 = *(_QWORD*)(*v3 + 72);
    v9 = *(_QWORD*)(*v3 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    v10 = GameRoutine_1a0a0c0(v9);
    *(__n128*)&v11 = GameRoutine_1a09c50(v7);
    if (v10 == 0 || v8 == 0) {
      if (v10 == 0) {
        goto LABEL_18;
      }
    }
    else {
      GameRoutine_caea10(v8, 512, (a2 & 1) == 0);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v10 + 16LL))(v10, v11);
      GameRoutine_1a09c50(v10);
    }
  }
LABEL_18:
  v16 = *(__int64**)(*v3 + 24);
  v17 = *(__int64**)(*v3 + 32);
  while (v16 != v17) {
    v18 = *v16;
    v16 += 2;
    GameRoutine_cb10a0(v18);
  }
}

void GameHr_102a220(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 i;
  __int64 v9;
  __int64 v10;
  __int64 j;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 k;
  __int64 v18;
  __int64 v19;
  __int64 m;
  __int64 v21;
  __int64 v22;
  __int64 n;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 ii;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 jj;
  __int64 v43;
  __int64 v44;
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
  __int64 kk;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  _QWORD* v75;
  _QWORD* v76;
  __int64 v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
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
  _QWORD* v93;

  v1 = *a1;
  v2 = a1[1];
  v4 = (_QWORD*)GameData_212bf68;
  if (*a1 != v2) {
    do {
      if (*(_BYTE*)(v2 - 32) == 1) {
        if ((*(_BYTE*)(v2 - 64) & 1) != 0 && *(_QWORD*)(v2 - 48) != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v5 = 128;
          }
          else {
            v5 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v5, (_QWORD)(*(_QWORD*)(v2 - 48)));
        }
        if ((*(_BYTE*)(v2 - 88) & 1) != 0 && *(_QWORD*)(v2 - 72) != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v6, (_QWORD)(*(_QWORD*)(v2 - 72)));
        }
      }
      v2 -= 112;
    } while (v2 != v1);
  }
  v7 = a1[3];
  a1[1] = v1;
  for (i = a1[4]; i != v7; i -= 96) {
    if (*(_BYTE*)(i - 16) == 1) {
      if ((*(_BYTE*)(i - 48) & 1) != 0 && *(_QWORD*)(i - 32) != 0) {
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        GameRoutine_1a0a4e0(*v4 + v9, (_QWORD)(*(_QWORD*)(i - 32)));
      }
      if ((*(_BYTE*)(i - 72) & 1) != 0 && *(_QWORD*)(i - 56) != 0) {
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        GameRoutine_1a0a4e0(*v4 + v10, (_QWORD)(*(_QWORD*)(i - 56)));
      }
    }
  }
  a1[4] = v7;
  v12 = a1[6];
  for (j = a1[7]; j != v12; j -= 128) {
    if ((*(_BYTE*)(j - 32) & 1) != 0 && *(_QWORD*)(j - 16) != 0) {
      if (*(_QWORD*)(*v4 + 200LL) != 0) {
        v13 = 128;
      }
      else {
        v13 = 56;
      }
      GameRoutine_1a0a4e0(*v4 + v13, (_QWORD)(*(_QWORD*)(j - 16)));
    }
    if (*(_BYTE*)(j - 48) == 1) {
      if ((*(_BYTE*)(j - 80) & 1) != 0 && *(_QWORD*)(j - 64) != 0) {
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        GameRoutine_1a0a4e0(*v4 + v14, (_QWORD)(*(_QWORD*)(j - 64)));
      }
      if ((*(_BYTE*)(j - 104) & 1) != 0 && *(_QWORD*)(j - 88) != 0) {
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        GameRoutine_1a0a4e0(*v4 + v15, (_QWORD)(*(_QWORD*)(j - 88)));
      }
    }
  }
  v16 = a1[9];
  a1[7] = v12;
  for (k = a1[10]; k != v16; k -= 96) {
    if (*(_BYTE*)(k - 16) == 1) {
      if ((*(_BYTE*)(k - 48) & 1) != 0 && *(_QWORD*)(k - 32) != 0) {
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        GameRoutine_1a0a4e0(*v4 + v18, (_QWORD)(*(_QWORD*)(k - 32)));
      }
      if ((*(_BYTE*)(k - 72) & 1) != 0 && *(_QWORD*)(k - 56) != 0) {
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        GameRoutine_1a0a4e0(*v4 + v19, (_QWORD)(*(_QWORD*)(k - 56)));
      }
    }
  }
  a1[10] = v16;
  v21 = a1[12];
  for (m = a1[13]; m != v21; GameRoutine_102e7c0(m)) {
    m -= 176;
  }
  a1[13] = v21;
  v22 = a1[15];
  for (n = a1[16]; n != v22; n -= 112) {
    v24 = *(_QWORD*)(n - 16);
    if (v24 != 0) {
      GameRoutine_1a09c50(v24);
    }
    if (*(_BYTE*)(n - 32) == 1) {
      if ((*(_BYTE*)(n - 64) & 1) != 0 && *(_QWORD*)(n - 48) != 0) {
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        GameRoutine_1a0a4e0(*v4 + v25, (_QWORD)(*(_QWORD*)(n - 48)));
      }
      if ((*(_BYTE*)(n - 88) & 1) != 0 && *(_QWORD*)(n - 72) != 0) {
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        GameRoutine_1a0a4e0(*v4 + v26, (_QWORD)(*(_QWORD*)(n - 72)));
      }
    }
  }
  v27 = a1[2];
  v28 = *a1;
  a1[16] = v22;
  if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((v27 - v28) >> 4)) <= 0x7F) {
    v29 = a1[1];
    v30 = *v4;
    v93 = a1 + 2;
    v31 = v29 - v28;
    v89 = GameRoutine_651b90(v30, 14336, 16, 0);
    v90 = v89 + v31;
    v91 = v89 + v31;
    v92 = v89 + 14336;
    GameRoutine_102e920(a1, &v89);
    v32 = v90;
    for (ii = v91; ii != v32; ii -= 112) {
      if (*(_BYTE*)(ii - 32) == 1) {
        if ((*(_BYTE*)(ii - 64) & 1) != 0 && *(_QWORD*)(ii - 48) != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v34 = 128;
          }
          else {
            v34 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v34, (_QWORD)(*(_QWORD*)(ii - 48)));
        }
        if ((*(_BYTE*)(ii - 88) & 1) != 0 && *(_QWORD*)(ii - 72) != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v35 = 128;
          }
          else {
            v35 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v35, (_QWORD)(*(_QWORD*)(ii - 72)));
        }
      }
    }
    if (v89 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v36 = 56;
      }
      GameRoutine_1a0a4e0(*v4 + v36, (_QWORD)(v89));
    }
  }
  v37 = a1[3];
  if (0xAAAAAAAAAAAAAAABLL * ((a1[5] - v37) >> 5) <= 0x7F) {
    v38 = a1[4];
    v39 = *v4;
    v93 = a1 + 5;
    v40 = v38 - v37;
    v89 = GameRoutine_651b90(v39, 12288, 16, 0);
    v90 = v89 + v40;
    v91 = v89 + v40;
    v92 = v89 + 12288;
    GameRoutine_102eb40(a1 + 3, &v89);
    v41 = v90;
    for (jj = v91; jj != v41; jj -= 96) {
      if (*(_BYTE*)(jj - 16) == 1) {
        if ((*(_BYTE*)(jj - 48) & 1) != 0 && *(_QWORD*)(jj - 32) != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v43 = 128;
          }
          else {
            v43 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v43, (_QWORD)(*(_QWORD*)(jj - 32)));
        }
        if ((*(_BYTE*)(jj - 72) & 1) != 0 && *(_QWORD*)(jj - 56) != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v44 = 128;
          }
          else {
            v44 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v44, (_QWORD)(*(_QWORD*)(jj - 56)));
        }
      }
    }
    if (v89 != 0) {
      v45 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v45 = 56;
      }
      GameRoutine_1a0a4e0(*v4 + v45, (_QWORD)(v89));
    }
  }
  v46 = a1[6];
  if ((unsigned __int64)(a1[8] - v46) >> 14 == 0) {
    v47 = a1[7];
    v48 = *v4;
    v93 = a1 + 8;
    v49 = GameRoutine_651b90(v48, 0x4000, 16, 0);
    GameRoutine_102ee80(v46, v47, v49);
    v50 = a1[6];
    v51 = a1[8];
    a1[6] = v49;
    a1[7] = v49 + v47 - v46;
    a1[8] = v49 + 0x4000;
    v91 = v50;
    v92 = v51;
    v89 = v50;
    v90 = v50;
    GameRoutine_102ed40(&v89);
  }
  v52 = a1[9];
  if (0xAAAAAAAAAAAAAAABLL * ((a1[11] - v52) >> 5) <= 0x7F) {
    v53 = a1[10];
    v54 = *v4;
    v93 = a1 + 11;
    v55 = v53 - v52;
    v89 = GameRoutine_651b90(v54, 12288, 16, 0);
    v90 = v89 + v55;
    v91 = v89 + v55;
    v92 = v89 + 12288;
    GameRoutine_102f080(a1 + 9, &v89);
    v56 = v90;
    for (kk = v91; kk != v56; kk -= 96) {
      if (*(_BYTE*)(kk - 16) == 1) {
        if ((*(_BYTE*)(kk - 48) & 1) != 0 && *(_QWORD*)(kk - 32) != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v58 = 128;
          }
          else {
            v58 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v58, (_QWORD)(*(_QWORD*)(kk - 32)));
        }
        if ((*(_BYTE*)(kk - 72) & 1) != 0 && *(_QWORD*)(kk - 56) != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v59 = 128;
          }
          else {
            v59 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v59, (_QWORD)(*(_QWORD*)(kk - 56)));
        }
      }
    }
    if (v89 != 0) {
      v60 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v60 = 56;
      }
      GameRoutine_1a0a4e0(*v4 + v60, (_QWORD)(v89));
    }
  }
  v61 = a1[12];
  if ((unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((a1[14] - v61) >> 4)) <=
      0x7F) {
    v62 = a1[13];
    v63 = GameRoutine_651b90(*v4, 22528, 16, 0);
    v64 = v63 + 22528;
    v65 = v63;
    v66 = v63 + v62 - v61;
    if (v62 != v61) {
      v67 = 0;
      do {
        v68 = v61 + v67;
        v69 = v63 + v67;
        *(_QWORD*)(v69 + 8) = *(_QWORD*)(v61 + v67 + 8);
        *(_QWORD*)v69 = *(_QWORD*)(v61 + v67);
        v70 = *(_DWORD*)(v61 + v67 + 16);
        *(_BYTE*)(v69 + 80) = 0;
        *(_DWORD*)(v69 + 16) = v70;
        *(_BYTE*)(v63 + v67 + 24) = 0;
        if (*(_BYTE*)(v61 + v67 + 80) == 1) {
          v71 = *(_QWORD*)(v68 + 24);
          v72 = *(_QWORD*)(v68 + 40);
          *(_QWORD*)(v63 + v67 + 32) = *(_QWORD*)(v68 + 32);
          *(_QWORD*)(v63 + v67 + 40) = v72;
          *(_QWORD*)(v63 + v67 + 24) = v71;
          *(_QWORD*)(v68 + 32) = 0;
          *(_QWORD*)(v68 + 40) = 0;
          *(_QWORD*)(v68 + 24) = 0;
          *(_QWORD*)(v69 + 56) = *(_QWORD*)(v68 + 56);
          v73 = *(_QWORD*)(v68 + 48);
          *(_QWORD*)(v69 + 64) = *(_QWORD*)(v68 + 64);
          *(_QWORD*)(v69 + 48) = v73;
          *(_QWORD*)(v68 + 48) = 0;
          *(_QWORD*)(v68 + 56) = 0;
          *(_QWORD*)(v68 + 64) = 0;
          LODWORD(v73) = *(_DWORD*)(v68 + 72);
          LOBYTE(v71) = *(_BYTE*)(v68 + 76);
          *(_BYTE*)(v69 + 80) = 1;
          *(_BYTE*)(v69 + 76) = v71;
          *(_DWORD*)(v69 + 72) = v73;
        }
        v74 = *(_DWORD*)(v68 + 88);
        *(_BYTE*)(v69 + 96) = 0;
        *(_BYTE*)(v69 + 128) = 0;
        *(_DWORD*)(v69 + 88) = v74;
        if (*(_BYTE*)(v68 + 128) == 1) {
          v75 = (_QWORD*)(v61 + v67);
          *(_BYTE*)(v69 + 96) = *(_BYTE*)(v61 + v67 + 96);
          v76 = (_QWORD*)(v63 + v67);
          v77 = *(_QWORD*)(v61 + v67 + 104);
          v78 = *(_QWORD*)(v61 + v67 + 120);
          v76[14] = *(_QWORD*)(v61 + v67 + 112);
          v76[15] = v78;
          v76[13] = v77;
          v75[14] = 0;
          v75[15] = 0;
          v75[13] = 0;
          *(_BYTE*)(v69 + 128) = 1;
        }
        *(_BYTE*)(v63 + v67 + 136) = 0;
        *(_BYTE*)(v63 + v67 + 160) = 0;
        if (*(_BYTE*)(v68 + 160) == 1) {
          v79 = (_QWORD*)(v61 + v67);
          v80 = *(_QWORD*)(v61 + v67 + 136);
          v81 = *(_QWORD*)(v61 + v67 + 152);
          *(_QWORD*)(v63 + v67 + 144) = *(_QWORD*)(v61 + v67 + 144);
          *(_QWORD*)(v63 + v67 + 152) = v81;
          *(_QWORD*)(v63 + v67 + 136) = v80;
          v79[18] = 0;
          v79[19] = 0;
          v79[17] = 0;
          *(_BYTE*)(v63 + v67 + 160) = 1;
        }
        v67 += 176;
      } while (v68 + 176 != v62);
      do {
        GameRoutine_102e7c0(v61);
        v61 += 176;
      } while (v61 != v62);
      v61 = a1[12];
    }
    a1[12] = v65;
    a1[13] = v66;
    a1[14] = v64;
    if (v61 != 0) {
      v82 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v82 = 56;
      }
      GameRoutine_1a0a4e0(*v4 + v82, (_QWORD)(v61));
    }
  }
  v83 = a1[15];
  if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((a1[17] - v83) >> 4)) <=
      0x7F) {
    v84 = a1[16];
    v85 = *v4;
    v93 = a1 + 17;
    v86 = GameRoutine_651b90(v85, 14336, 16, 0);
    GameRoutine_102f3c0(v83, v84, v86);
    v87 = a1[15];
    v88 = a1[17];
    a1[15] = v86;
    a1[16] = v86 + v84 - v83;
    a1[17] = v86 + 14336;
    v91 = v87;
    v92 = v88;
    v89 = v87;
    v90 = v87;
    GameRoutine_102f2a0(&v89);
  }
}

void GameHr_102abb0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  _QWORD v7[3];

  LocatorDispos_db2180((void*)(v7),
                       (unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 40LL),
                       (unsigned __int8*)(a1 + 8));
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 56);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  qmemcpy((void*)(a1 + 40), v7, 24);
  v4 = GameData_212ef20;
  v5 = game_hub_f77560(*GameData_212ef20, (unsigned __int8*)(a1 + 40));
  if ((__int64*)(a1 + 64) != v5) {
    GameHr_f7cf00((__int64*)(a1 + 64), *v5, v5[1],
                  0x6DB6DB6DB6DB6DB7LL * ((v5[1] - *v5) >> 4));
  }
  v6 = game_hub_f79e00(*v4, (unsigned __int8*)(a1 + 40));
  if ((__int64*)(a1 + 88) != v6) {
    GameHr_f7d5e0((__int64*)(a1 + 88), *v6, v6[1],
                  0xAAAAAAAAAAAAAAABLL * ((v6[1] - *v6) >> 5));
  }
  GameRoutine_102a220((__int64*)(a1 + 112));
  game_hub_MapSimulator_Build_MinimapIcon(a1);
  game_hub_MapSimulator_Build_CondTalk(a1);
  GameHr_102c400((_QWORD*)a1);
  GameHr_102ca20(a1);
  GameHr_102d120((_QWORD*)a1);
  game_hub_102d900(a1);
}

void GameHr_102ca20(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64* v5;
  int v6;
  int v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int128 v19;
  unsigned __int64 v20;
  char v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  char* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  unsigned __int64 v45;
  __int64 v46;
  char v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 i;
  __int64 v51;
  __int64 v52;
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
  struct {
    __int64 v63;
    unsigned __int64 v64;
    char* v65;
  } v63_;
  struct {
    __int64 v66;
    unsigned __int64 v67;
    char* v68;
  } v66_;
  struct {
    __int128 v69;
    int v70;
    char gap100_[4];
    __int64 v71;
    unsigned __int64 v72;
    __int64 v73;
    __int64 v74;
    unsigned __int64 v75;
    __int64 v76;
    int v77;
    char v78;
    char gap157_[3];
    char v79;
    char gap161_[7];
    __int64 v80;
  } v69_;
  struct {
    __int64 v81;
    __int64 v82;
    __int64 v83;
    unsigned __int64 v84;
    __int64 v85;
  } v81_;

  v1 = *(_QWORD*)(a1 + 64);
  v2 = *(_QWORD*)(a1 + 72);
  if (v1 != v2) {
    v62 = a1 + 9;
    v4 = GameData_212dc68;
    v61 = a1 + 200;
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v6 = *(_DWORD*)(v1 + 16);
      if ((v6 & 0x40) != 0) {
        v7 = 1;
      }
      else {
        if ((v6 & 0x80) == 0) {
          goto LABEL_4;
        }
        v7 = 0;
      }
      v8 = *(_QWORD**)(*(_QWORD*)v4 + 152LL);
      v9 = *(_QWORD*)v4 + 160LL;
      if (v8 == (_QWORD*)v9) {
        goto LABEL_4;
      }
      v10 = *(_QWORD*)(v1 + 104);
      while (1) {
        v11 = (_QWORD*)v8[7];
        v12 = (_QWORD*)v8[8];
        if (v11 != v12) {
          while (*(_QWORD*)(*v11 + 176LL) != v10) {
            v11 += 2;
            if (v11 == v12) {
              goto LABEL_17;
            }
          }
        }
        if (v11 != v12) {
          break;
        }
      LABEL_17:
        v11 = (_QWORD*)v8[10];
        v13 = (_QWORD*)v8[11];
        if (v11 != v13) {
          while (*(_QWORD*)(*v11 + 176LL) != v10) {
            v11 += 2;
            if (v11 == v13) {
              goto LABEL_22;
            }
          }
        }
        if (v11 != v13) {
          break;
        }
      LABEL_22:
        v14 = (_QWORD*)v8[1];
        if (v14 != nullptr) {
          do {
            v15 = v14;
            v14 = (_QWORD*)*v14;
          } while (v14 != nullptr);
        }
        else {
          do {
            v15 = (_QWORD*)v8[2];
            v16 = v8 == (_QWORD*)*v15;
            v8 = v15;
          } while (!v16);
        }
        v8 = v15;
        if (v15 == (_QWORD*)v9) {
          goto LABEL_4;
        }
      }
      v17 = *v11;
      v18 = v11[1];
      if (v18 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                  memory_order_relaxed);
        if (v17 == 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            goto LABEL_4;
          }
          goto LABEL_3;
        }
      }
      else if (v17 == 0) {
        goto LABEL_4;
      }
      LODWORD(v69_.v80) = v7;
      *(_QWORD*)&v19 = *(_QWORD*)(v17 + 260);
      LOBYTE(v69_.v71) = 0;
      v69_.v79 = 0;
      v69_.v70 = 0;
      v69_.v69 = (unsigned __int64)v19;
      *((_QWORD*)&v19 + 1) = *(unsigned int*)(v17 + 268);
      v69_.v69 = v19;
      HIDWORD(v69_.v80) = *(_DWORD*)(v17 + 272);
      LocatorDispos_db1f30((void*)(&v66_.v66), (__int64*)(v17 + 856));
      v20 = *(unsigned __int8*)(a1 + 8);
      v21 = v66_.v66;
      v22 = v66_.v67;
      if ((v20 & 1) != 0) {
        v23 = *(_QWORD*)(a1 + 16);
      }
      else {
        v23 = v20 >> 1;
      }
      v24 = (unsigned __int64)(unsigned __int8)v66_.v66 >> 1;
      if ((v66_.v66 & 1) != 0) {
        v24 = v66_.v67;
      }
      if (v23 == v24 &&
          ((v20 & 1) != 0 ? (v25 = *(_QWORD*)(a1 + 24)) : (v25 = v62),
           (v66_.v66 & 1) != 0 ? (v26 = v66_.v68)
                               : (v26 = (char*)&v66_.v66 + 1),
           memcmp(v25, (__int64)v26, v23) == 0)) {
        LOWORD(v63_.v63) = 0;
      }
      else if ((v21 & 1) != 0) {
        fw_text_String_CopyTerminated(&v63_.v63, (__int64)v66_.v68, v22);
      }
      else {
        v63_.v63 = v66_.v66;
        v63_.v64 = v66_.v67;
        v63_.v65 = v66_.v68;
      }
      if (*(_BYTE*)(a1 + 32) != 1 ||
          ((v63_.v63 & 1) != 0
               ? (v27 = v63_.v64)
               : (v27 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1),
           v27 == 0)) {
        if ((game_hub_102e240(a1, &v69_.v69, &v63_.v63) & 1) != 0) {
          v28 = *GameData_212ebb0[0];
          v29 = GameRoutine_f71d40(*GameData_212ebb0[0], (__int64)&v69_.v69,
                                   a1 + 40);
          if ((GameRoutine_f71cb0(v29, v29) & 1) != 0 &&
              ((unsigned int)game_hub_f71fc0(v28, (__int64)&v69_.v69,
                                             a1 + 40) == 0 ||
               (*(_BYTE*)(v28 + 32) & 2) != 0)) {
            break;
          }
        }
      }
    LABEL_91:
      if ((v63_.v63 & 1) != 0 && v63_.v65 != nullptr) {
        v53 = 128;
        if (*(_QWORD*)(*v5 + 200) == 0) {
          v53 = 56;
        }
        nn_mem_StandardAllocator_Free(*v5 + v53, (__int64)v63_.v65);
      }
      if ((v66_.v66 & 1) != 0 && v66_.v68 != nullptr) {
        v54 = 128;
        if (*(_QWORD*)(*v5 + 200) == 0) {
          v54 = 56;
        }
        nn_mem_StandardAllocator_Free(*v5 + v54, (__int64)v66_.v68);
      }
      if (v69_.v79 == 1) {
        if ((v69_.v74 & 1) != 0 && v69_.v76 != 0) {
          v55 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v55 = 56;
          }
          nn_mem_StandardAllocator_Free(*v5 + v55, v69_.v76);
        }
        if ((v69_.v71 & 1) != 0 && v69_.v73 != 0) {
          v56 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v56 = 56;
          }
          nn_mem_StandardAllocator_Free(*v5 + v56, v69_.v73);
        }
      }
      if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
      LABEL_3:
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak_alt2(v18);
      }
    LABEL_4:
      v1 += 112;
      if (v1 == v2) {
        return;
      }
    }
    v30 = GameRoutine_f71d40(*GameData_212ebb0[0], (__int64)&v69_.v69, a1 + 40);
    v32 = *(_QWORD*)(a1 + 192);
    v31 = *(_QWORD*)(a1 + 200);
    v69_.v70 = v30;
    if (v32 < v31) {
      v33 = *((_QWORD*)&v69_.v69 + 1);
      *(_BYTE*)(v32 + 24) = 0;
      v34 = (__int64*)(v32 + 24);
      *(_BYTE*)(v32 + 80) = 0;
      *(_QWORD*)(v32 + 8) = v33;
      *(_QWORD*)v32 = v69_.v69;
      *(_DWORD*)(v32 + 16) = v69_.v70;
      if (v69_.v79 != 1) {
      LABEL_81:
        *(_QWORD*)(v32 + 88) = v69_.v80;
        v48 = v32 + 96;
      LABEL_90:
        *(_QWORD*)(a1 + 192) = v48;
        goto LABEL_91;
      }
      if ((v69_.v71 & 1) != 0) {
        fw_text_String_CopyTerminated(v34, v69_.v73, v69_.v72);
        if ((v69_.v74 & 1) != 0) {
          goto LABEL_63;
        }
      }
      else {
        v35 = v69_.v71;
        v36 = v69_.v73;
        *(_QWORD*)(v32 + 32) = v69_.v72;
        *(_QWORD*)(v32 + 40) = v36;
        *v34 = v35;
        if ((v69_.v74 & 1) != 0) {
        LABEL_63:
          fw_text_String_CopyTerminated((__int64*)(v32 + 48), v69_.v76,
                                        v69_.v75);
        LABEL_80:
          v47 = v69_.v78;
          *(_DWORD*)(v32 + 72) = v69_.v77;
          *(_BYTE*)(v32 + 76) = v47;
          *(_BYTE*)(v32 + 80) = 1;
          goto LABEL_81;
        }
      }
      *(_QWORD*)(v32 + 56) = v69_.v75;
      v46 = v69_.v74;
      *(_QWORD*)(v32 + 64) = v69_.v76;
      *(_QWORD*)(v32 + 48) = v46;
      goto LABEL_80;
    }
    v37 = *(_QWORD*)(a1 + 184);
    v38 = v32 - v37;
    v39 = 1 - 0x5555555555555555LL * (v38 >> 5);
    if (v39 > 0x2AAAAAAAAAAAAAALL) {
      GameRoutine_102f050_alt1();
    }
    v40 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v31 - v37) >> 5);
    if (2 * v40 > v39) {
      v39 = 2 * v40;
    }
    if (v40 >= 0x155555555555555LL) {
      v41 = 0x2AAAAAAAAAAAAAALL;
    }
    else {
      v41 = v39;
    }
    v81_.v85 = v61;
    if (v41 != 0) {
      if (v41 > 0x2AAAAAAAAAAAAAALL) {
        GameRoutine_60a210_alt1();
      }
      v42 = fw_memory_HeapManager_Allocate(*v5, 96 * v41, 16, 0);
      v30 = v69_.v70;
    }
    else {
      v42 = 0;
    }
    v43 = v42 + v38;
    v81_.v81 = v42;
    v81_.v82 = v43;
    *(_DWORD*)(v43 + 16) = v30;
    *(_BYTE*)(v43 + 24) = 0;
    v44 = (__int64*)(v43 + 24);
    *(_BYTE*)(v43 + 80) = 0;
    v81_.v84 = v42 + 96 * v41;
    *(_OWORD*)v43 = v69_.v69;
    if (v69_.v79 != 1) {
    LABEL_85:
      *(_QWORD*)(v43 + 88) = v69_.v80;
      v81_.v83 = v43 + 96;
      GameHr_102f080((__int64*)(a1 + 184), &v81_.v81);
      v48 = *(_QWORD*)(a1 + 192);
      v51 = v81_.v82;
      for (i = v81_.v83; i != v51; i -= 96) {
        if (*(_BYTE*)(i - 16) == 1) {
          if ((*(_BYTE*)(i - 48) & 1) != 0) {
            v57 = *(_QWORD*)(i - 32);
            if (v57 != 0) {
              v58 = 128;
              if (*(_QWORD*)(*v5 + 200) == 0) {
                v58 = 56;
              }
              nn_mem_StandardAllocator_Free(*v5 + v58, v57);
            }
          }
          if ((*(_BYTE*)(i - 72) & 1) != 0) {
            v59 = *(_QWORD*)(i - 56);
            if (v59 != 0) {
              v60 = 128;
              if (*(_QWORD*)(*v5 + 200) == 0) {
                v60 = 56;
              }
              nn_mem_StandardAllocator_Free(*v5 + v60, v59);
            }
          }
        }
      }
      if (v81_.v81 != 0) {
        v52 = 128;
        if (*(_QWORD*)(*v5 + 200) == 0) {
          v52 = 56;
        }
        nn_mem_StandardAllocator_Free(*v5 + v52, v81_.v81);
      }
      goto LABEL_90;
    }
    if ((v69_.v71 & 1) != 0) {
      fw_text_String_CopyTerminated(v44, v69_.v73, v69_.v72);
      if ((v69_.v74 & 1) != 0) {
        goto LABEL_77;
      }
    }
    else {
      v45 = v69_.v72;
      *v44 = v69_.v71;
      *(_QWORD*)(v43 + 32) = v45;
      *(_QWORD*)(v43 + 40) = v69_.v73;
      if ((v69_.v74 & 1) != 0) {
      LABEL_77:
        fw_text_String_CopyTerminated((__int64*)(v43 + 48), v69_.v76, v69_.v75);
      LABEL_84:
        *(_DWORD*)(v43 + 72) = v69_.v77;
        *(_BYTE*)(v43 + 76) = v69_.v78;
        *(_BYTE*)(v43 + 80) = 1;
        goto LABEL_85;
      }
    }
    v49 = v69_.v75;
    *(_QWORD*)(v43 + 48) = v69_.v74;
    *(_QWORD*)(v43 + 56) = v49;
    *(_QWORD*)(v43 + 64) = v69_.v76;
    goto LABEL_84;
  }
}

#pragma GCC visibility pop
