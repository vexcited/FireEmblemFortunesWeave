#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* GameRoutine_7a8220(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_edec80(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void DungeonController_f5f960(PSEUDO_X8);
__attribute__((swiftcall)) void EventManager_cbbf20(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD);
__attribute__((swiftcall)) void GameRoutine_1a0a7c0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_622ac0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void GameRoutine_e1b4d0(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_fb48a0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_ff24c0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void GameSituation_906320(PSEUDO_X8, __int64,
                                                     __int64*, __int64);
__attribute__((swiftcall)) void LocatorDispos_db1e20(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void LocatorDispos_db2180(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_104bd20(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void game_112eec0(PSEUDO_X8, __int64 result,
                                             unsigned int, unsigned int);
__attribute__((swiftcall)) void game_db1110(PSEUDO_X8, unsigned int);
__attribute__((swiftcall)) void game_db1620(PSEUDO_X8, unsigned __int64 result,
                                            __int64);
__attribute__((swiftcall)) void game_hub_102e120(PSEUDO_X8, __int64, __int64*);
__attribute__((swiftcall)) void
    game_hub_LocatorDispos_BuildInitTransformLocator(PSEUDO_X8, _QWORD, _QWORD,
                                                     _QWORD, _QWORD);
__attribute__((swiftcall)) void game_hub_LocatorDispos_CreateExternalDataImpl(
    PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_hub_cdf420(PSEUDO_X8, __int64, __int64,
                                                float, float, float);
__attribute__((swiftcall)) void game_hub_e1bfe0(PSEUDO_X8, _QWORD, _QWORD,
                                                _QWORD);
__attribute__((swiftcall)) void
    game_hub_f77fc0_alt2(PSEUDO_X8, _QWORD, _QWORD,
                         _QWORD) __asm__("game_hub_f77fc0");
__attribute__((swiftcall)) void
game_hub_f77fc0_alt1(PSEUDO_X8, _QWORD*, __int64,
                     char) __asm__("game_hub_f77fc0");
__attribute__((swiftcall)) void
    game_hub_f96800_alt1(PSEUDO_X8, _QWORD, _QWORD) __asm__("game_hub_f96800");
__attribute__((swiftcall)) void
math_Quat_FromYawPitchRoll(PSEUDO_X8, long double, float, float);
__attribute__((swiftcall)) void std___1_to_string_1a0abd0(PSEUDO_X8, _QWORD);
__int64* GameSituation_906a40(__int64, __int64*);
__int64* SpineModel_64dde0_alt1(__int64*, __int64,
                                unsigned __int64) __asm__("SpineModel_64dde0");
__int64 CharacterSituation_f994e0(_QWORD, _QWORD);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a1b00(_QWORD, float);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67f460(__int64);
__int64 GameRoutine_cacc00(_QWORD);
__int64 GameRoutine_cae2c0(_QWORD, _QWORD);
__int64 GameRoutine_cdeee0(__int64 result, __int64);
__int64 GameRoutine_cfd8e0(__int64 result, char);
__int64 GameRoutine_d1fb60(__int64, char);
__int64 GameRoutine_d6b220(__int64, float32x4_t*, double);
__int64 GameRoutine_d8ce40(__int64 result);
__int64 GameRoutine_db0f70(__int64 result);
__int64 GameRoutine_db0fa0(__int64, __int64);
__int64 GameRoutine_dfffe0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e149a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e5d5a0(_QWORD, _QWORD);
__int64 GameRoutine_f71cb0(__int64, int);
__int64 GameRoutine_f71d40(__int64, __int64, __int64);
__int64 GameRoutine_f7bb20(_QWORD, _QWORD);
__int64 GameRoutine_f7c840(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f7cc80(_QWORD, _QWORD);
__int64 GameRoutine_f7cdc0(_QWORD, _QWORD);
__int64 GameRoutine_f7cf00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f7d4a0(_QWORD);
__int64 GameRoutine_f7d5e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f7db00(_QWORD, _QWORD);
__int64 GameRoutine_f7dc20(_QWORD, _QWORD);
__int64 GameRoutine_f7de90(_QWORD, _QWORD);
__int64 GameRoutine_f8a200(__int64, _QWORD*);
__int64 GameRoutine_f8a870(__int64 result, __int64*);
__int64 GameRoutine_f8aa60();
__int64 GameRoutine_f8abd0();
__int64 GameRoutine_f8ad80();
__int64 GameRoutine_f8baa0();
__int64 GameRoutine_f8bb50();
__int64 GameRoutine_f8c3d0();
__int64 GameRoutine_f8c4f0();
__int64 GameRoutine_f8c600();
__int64 GameRoutine_f8c610();
__int64 GameRoutine_f8cd60();
__int64 GameRoutine_f8d3e0();
__int64 GameRoutine_f8dae0();
__int64 GameRoutine_f8dc00();
__int64 GameRoutine_f8dfb0();
__int64 GameRoutine_f8e020();
__int64 GameRoutine_fb1ed0(_QWORD, _QWORD);
__int64 GameSituation_906440(__int64, __int64*);
__int64 GameVariable_828f50(__int64, __int64);
__int64 HubCharacterNatives_cabfc0(__int64 result, char);
__int64 HubCharacterNatives_cee990(__int64, unsigned __int32, int, __int64,
                                   __int64, __int64, float);
__int64 HubNatives_ccbf80(_QWORD);
__int64 HubNatives_ccbf80_alt1(__int64 result) __asm__("HubNatives_ccbf80");
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_d523c0(__int64);
__int64 game_edede0(__int64, float, float, float);
__int64 game_hub_102e240_alt1(__int64, __int128*,
                              __int64*) __asm__("game_hub_102e240");
__int64 game_hub_anonymous_f8c620();
__int64 game_hub_anonymous_f8c6a0();
__int64 game_hub_anonymous_f8cb20();
__int64 game_hub_anonymous_f8d660();
__int64 game_hub_anonymous_f8d8a0();
__int64 game_hub_anonymous_f8e0a0();
__int64 game_hub_d6a8e0(_QWORD);
__int64 game_hub_d97a00(__int64 result, float);
__int64 game_hub_f71fc0_alt1(__int64, __int64,
                             __int64) __asm__("game_hub_f71fc0");
__int64 game_hub_f72640_alt1(_QWORD, _QWORD) __asm__("game_hub_f72640");
__int64 game_zview_d12d30_alt1(__int64 result, int32x2_t*,
                               char) __asm__("game_zview_d12d30");
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 std___1_to_string_1a0acd0(_QWORD, float);
__int64
std___1_to_string_1a0acd0_alt1(float) __asm__("std___1_to_string_1a0acd0");
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__n128 GameRoutine_102f2a0(_QWORD*);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
bool GameRoutine_f97e30(__int64, __int64, bool);
extern _UNKNOWN* GameData_1f9caf8;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* game_g_hero_ids;
extern _UNKNOWN GameData_1a95d15;
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_1adb26c;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_2227df8;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82990;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82af0;
extern __int128 GameData_1a82cb0;
extern __int128 GameData_1a83410;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ff7898[])();
extern __int64 (*GameData_212c6d0[11])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d060[8])();
extern __int64 (*GameData_212d3f0[11])();
extern __int64 (*game_hub_anonymous_ProcHubSeqObeliskBase_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqObeliskDoor_vtable[])();
extern __int64* GameData_212d458[7];
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212f180;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_1ab0f35;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212c6c8;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc8[7];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc40[6];
extern __int64 GameData_212dc48[5];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212ec00;
extern __int64 GameData_212efc0;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3c98;
extern __int64 GameData_21f3ca0;
extern __int64 GameData_21f3ca8;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_21f3cc0;
extern __int64 GameData_21f3d08;
extern __int64 GameData_21f3d10;
extern __int64 GameData_220b6c8;
extern __int64 GameData_220b6d0;
extern __int64 GameData_220d618;
extern __int64 GameData_220f950;
extern __int64 GameData_2226fc0;
extern __int64 GameData_2226fc8;
extern __int64 GameData_2226fd0;
extern __int64 GameData_2226fe0;
extern __int64 GameData_2226ff0;
extern __int64 GameData_2227000;
extern __int64 GameData_2227008;
extern __int64 GameData_2227010;
extern __int64 GameData_2227020;
extern __int64 GameData_2227030;
extern __int64 GameData_2227040;
extern __int64 GameData_2227048;
extern __int64 GameData_2227060;
extern __int64 GameData_2227070;
extern __int64 GameData_2227080;
extern __int64 GameData_2227088;
extern __int64 GameData_22270a0;
extern __int64 GameData_22270b0;
extern __int64 GameData_22270c0;
extern __int64 GameData_22270c8;
extern __int64 GameData_22270d0;
extern __int64 GameData_22270e0;
extern __int64 GameData_22270f0;
extern __int64 GameData_2227100;
extern __int64 GameData_2227108;
extern __int64 GameData_2227110;
extern __int64 GameData_2227120;
extern __int64 GameData_2227130;
extern __int64 GameData_2227140;
extern __int64 GameData_2227148;
extern __int64 GameData_2227150;
extern __int64 GameData_2227160;
extern __int64 GameData_2227170;
extern __int64 GameData_2227180;
extern __int64 GameData_2227188;
extern __int64 GameData_22271a0;
extern __int64 GameData_22271b0;
extern __int64 GameData_22271c0;
extern __int64 GameData_22271c8;
extern __int64 GameData_22271d0;
extern __int64 GameData_22271e0;
extern __int64 GameData_22271f0;
extern __int64 GameData_2227200;
extern __int64 GameData_2227208;
extern __int64 GameData_2227220;
extern __int64 GameData_2227230;
extern __int64 GameData_2227240;
extern __int64 GameData_2227248;
extern __int64 GameData_2227260;
extern __int64 GameData_2227270;
extern __int64 GameData_2227280;
extern __int64 GameData_2227288;
extern __int64 GameData_2227290;
extern __int64 GameData_22272a0;
extern __int64 GameData_22272b0;
extern __int64 GameData_22272c0;
extern __int64 GameData_22272c8;
extern __int64 GameData_22272d0;
extern __int64 GameData_22272e0;
extern __int64 GameData_22272f0;
extern __int64 GameData_2227300;
extern __int64 GameData_2227308;
extern __int64 GameData_2227310;
extern __int64 GameData_2227320;
extern __int64 GameData_2227330;
extern __int64 GameData_2227340;
extern __int64 GameData_2227348;
extern __int64 GameData_2227350;
extern __int64 GameData_2227360;
extern __int64 GameData_2227370;
extern __int64 GameData_2227380;
extern __int64 GameData_2227388;
extern __int64 GameData_2227390;
extern __int64 GameData_22273a0;
extern __int64 GameData_22273b0;
extern __int64 GameData_22273c0;
extern __int64 GameData_22273c8;
extern __int64 GameData_22273d0;
extern __int64 GameData_22273e0;
extern __int64 GameData_22273f0;
extern __int64 GameData_2227400;
extern __int64 GameData_2227408;
extern __int64 GameData_2227410;
extern __int64 GameData_2227420;
extern __int64 GameData_2227430;
extern __int64 GameData_2227440;
extern __int64 GameData_2227448;
extern __int64 GameData_2227460;
extern __int64 GameData_2227470;
extern __int64 GameData_2227480;
extern __int64 GameData_2227488;
extern __int64 GameData_22274a0;
extern __int64 GameData_22274b0;
extern __int64 GameData_22274c0;
extern __int64 GameData_22274c8;
extern __int64 GameData_22274d0;
extern __int64 GameData_22274e0;
extern __int64 GameData_22274f0;
extern __int64 GameData_2227500;
extern __int64 GameData_2227508;
extern __int64 GameData_2227510;
extern __int64 GameData_2227520;
extern __int64 GameData_2227530;
extern __int64 GameData_2227540;
extern __int64 GameData_2227548;
extern __int64 GameData_2227550;
extern __int64 GameData_2227560;
extern __int64 GameData_2227570;
extern __int64 GameData_2227580;
extern __int64 GameData_2227588;
extern __int64 GameData_2227590;
extern __int64 GameData_22275a0;
extern __int64 GameData_22275b0;
extern __int64 GameData_22275c0;
extern __int64 GameData_22275c8;
extern __int64 GameData_22275d0;
extern __int64 GameData_22275e0;
extern __int64 GameData_22275f0;
extern __int64 GameData_2227600;
extern __int64 GameData_2227608;
extern __int64 GameData_2227610;
extern __int64 GameData_2227620;
extern __int64 GameData_2227630;
extern __int64 GameData_2227640;
extern __int64 GameData_2227648;
extern __int64 GameData_2227650;
extern __int64 GameData_2227660;
extern __int64 GameData_2227670;
extern __int64 GameData_2227680;
extern __int64 GameData_2227688;
extern __int64 GameData_22276a0;
extern __int64 GameData_22276b0;
extern __int64 GameData_22276c0;
extern __int64 GameData_22276c8;
extern __int64 GameData_22276e0;
extern __int64 GameData_22276f0;
extern __int64 GameData_2227700;
extern __int64 GameData_2227708;
extern __int64 GameData_2227710;
extern __int64 GameData_2227720;
extern __int64 GameData_2227730;
extern __int64 GameData_2227740;
extern __int64 GameData_2227748;
extern __int64 GameData_2227750;
extern __int64 GameData_2227760;
extern __int64 GameData_2227770;
extern __int64 GameData_2227780;
extern __int64 GameData_2227788;
extern __int64 GameData_2227790;
extern __int64 GameData_22277a0;
extern __int64 GameData_22277b0;
extern __int64 GameData_22277c0;
extern __int64 GameData_22277c8;
extern __int64 GameData_22277d0;
extern __int64 GameData_22277e0;
extern __int64 GameData_22277f0;
extern __int64 GameData_2227800;
extern __int64 GameData_2227808;
extern __int64 GameData_2227810;
extern __int64 GameData_2227820;
extern __int64 GameData_2227830;
extern __int64 GameData_2227840;
extern __int64 GameData_2227848;
extern __int64 GameData_2227850;
extern __int64 GameData_2227860;
extern __int64 GameData_2227870;
extern __int64 GameData_2227880;
extern __int64 GameData_2227888;
extern __int64 GameData_2227890;
extern __int64 GameData_22278a0;
extern __int64 GameData_22278b0;
extern __int64 GameData_22278c0;
extern __int64 GameData_22278c8;
extern __int64 GameData_22278d0;
extern __int64 GameData_22278e0;
extern __int64 GameData_22278f0;
extern __int64 GameData_2227900;
extern __int64 GameData_2227908;
extern __int64 GameData_2227910;
extern __int64 GameData_2227920;
extern __int64 GameData_2227930;
extern __int64 GameData_2227940;
extern __int64 GameData_2227948;
extern __int64 GameData_2227950;
extern __int64 GameData_2227960;
extern __int64 GameData_2227970;
extern __int64 GameData_2227980;
extern __int64 GameData_2227988;
extern __int64 GameData_22279a0;
extern __int64 GameData_22279b0;
extern __int64 GameData_22279c0;
extern __int64 GameData_22279c8;
extern __int64 GameData_22279d0;
extern __int64 GameData_22279e0;
extern __int64 GameData_22279f0;
extern __int64 GameData_2227a00;
extern __int64 GameData_2227a08;
extern __int64 GameData_2227a10;
extern __int64 GameData_2227a20;
extern __int64 GameData_2227a30;
extern __int64 GameData_2227a40;
extern __int64 GameData_2227a48;
extern __int64 GameData_2227a50;
extern __int64 GameData_2227a60;
extern __int64 GameData_2227a70;
extern __int64 GameData_2227a80;
extern __int64 GameData_2227a88;
extern __int64 GameData_2227a90;
extern __int64 GameData_2227aa0;
extern __int64 GameData_2227ab0;
extern __int64 GameData_2227ac0;
extern __int64 GameData_2227ac8;
extern __int64 GameData_2227ae0;
extern __int64 GameData_2227af0;
extern __int64 GameData_2227b00;
extern __int64 GameData_2227b08;
extern __int64 GameData_2227b20;
extern __int64 GameData_2227b30;
extern __int64 GameData_2227b40;
extern __int64 GameData_2227b48;
extern __int64 GameData_2227b50;
extern __int64 GameData_2227b60;
extern __int64 GameData_2227b70;
extern __int64 GameData_2227b80;
extern __int64 GameData_2227b88;
extern __int64 GameData_2227b90;
extern __int64 GameData_2227ba0;
extern __int64 GameData_2227bb0;
extern __int64 GameData_2227bc0;
extern __int64 GameData_2227bc8;
extern __int64 GameData_2227be0;
extern __int64 GameData_2227bf0;
extern __int64 GameData_2227c00;
extern __int64 GameData_2227c08;
extern __int64 GameData_2227c20;
extern __int64 GameData_2227c30;
extern __int64 GameData_2227c40;
extern __int64 GameData_2227c48;
extern __int64 GameData_2227c50;
extern __int64 GameData_2227c60;
extern __int64 GameData_2227c70;
extern __int64 GameData_2227c80;
extern __int64 GameData_2227c88;
extern __int64 GameData_2227c90;
extern __int64 GameData_2227ca0;
extern __int64 GameData_2227cb0;
extern __int64 GameData_2227cc0;
extern __int64 GameData_2227cc8;
extern __int64 GameData_2227ce0;
extern __int64 GameData_2227cf0;
extern __int64 GameData_2227d00;
extern __int64 GameData_2227d08;
extern __int64 GameData_2227d20;
extern __int64 GameData_2227d30;
extern __int64 GameData_2227d40;
extern __int64 GameData_2227d48;
extern __int64 GameData_2227d50;
extern __int64 GameData_2227d60;
extern __int64 GameData_2227d70;
extern __int64 GameData_2227d80;
extern __int64 GameData_2227d88;
extern __int64 GameData_2227d90;
extern __int64 GameData_2227da0;
extern __int64 GameData_2227db0;
extern __int64 GameData_2227dc0;
extern __int64 GameData_2227dc8;
extern __int64 GameData_2227dd0;
extern __int64 GameData_2227de0;
extern __int64 GameData_2227df0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char* GameData_1ffb600;
extern char GameData_1a9f09e;
extern char GameData_1b9df78[];
extern char GameData_2226fb8;
extern char GameData_2226ff8;
extern char GameData_2227038;
extern char GameData_2227078;
extern char GameData_22270b8;
extern char GameData_22270f8;
extern char GameData_2227138;
extern char GameData_2227178;
extern char GameData_22271b8;
extern char GameData_22271f8;
extern char GameData_2227238;
extern char GameData_2227278;
extern char GameData_22272b8;
extern char GameData_22272f8;
extern char GameData_2227338;
extern char GameData_2227378;
extern char GameData_22273b8;
extern char GameData_22273f8;
extern char GameData_2227438;
extern char GameData_2227478;
extern char GameData_22274b8;
extern char GameData_22274f8;
extern char GameData_2227538;
extern char GameData_2227578;
extern char GameData_22275b8;
extern char GameData_22275f8;
extern char GameData_2227638;
extern char GameData_2227678;
extern char GameData_22276b8;
extern char GameData_22276f8;
extern char GameData_2227738;
extern char GameData_2227778;
extern char GameData_22277b8;
extern char GameData_22277f8;
extern char GameData_2227838;
extern char GameData_2227878;
extern char GameData_22278b8;
extern char GameData_22278f8;
extern char GameData_2227938;
extern char GameData_2227978;
extern char GameData_22279b8;
extern char GameData_22279f8;
extern char GameData_2227a38;
extern char GameData_2227a78;
extern char GameData_2227ab8;
extern char GameData_2227af8;
extern char GameData_2227b38;
extern char GameData_2227b78;
extern char GameData_2227bb8;
extern char GameData_2227bf8;
extern char GameData_2227c38;
extern char GameData_2227c78;
extern char GameData_2227cb8;
extern char GameData_2227cf8;
extern char GameData_2227d38;
extern char GameData_2227d78;
extern char GameData_2227db8;
extern int GameData_2226fd8;
extern int GameData_2226fe8;
extern int GameData_2227018;
extern int GameData_2227028;
extern int GameData_2227058;
extern int GameData_2227068;
extern int GameData_2227098;
extern int GameData_22270a8;
extern int GameData_22270d8;
extern int GameData_22270e8;
extern int GameData_2227118;
extern int GameData_2227128;
extern int GameData_2227158;
extern int GameData_2227168;
extern int GameData_2227198;
extern int GameData_22271a8;
extern int GameData_22271d8;
extern int GameData_22271e8;
extern int GameData_2227218;
extern int GameData_2227228;
extern int GameData_2227258;
extern int GameData_2227268;
extern int GameData_2227298;
extern int GameData_22272a8;
extern int GameData_22272d8;
extern int GameData_22272e8;
extern int GameData_2227318;
extern int GameData_2227328;
extern int GameData_2227358;
extern int GameData_2227368;
extern int GameData_2227398;
extern int GameData_22273a8;
extern int GameData_22273d8;
extern int GameData_22273e8;
extern int GameData_2227418;
extern int GameData_2227428;
extern int GameData_2227458;
extern int GameData_2227468;
extern int GameData_2227498;
extern int GameData_22274a8;
extern int GameData_22274d8;
extern int GameData_22274e8;
extern int GameData_2227518;
extern int GameData_2227528;
extern int GameData_2227558;
extern int GameData_2227568;
extern int GameData_2227598;
extern int GameData_22275a8;
extern int GameData_22275d8;
extern int GameData_22275e8;
extern int GameData_2227618;
extern int GameData_2227628;
extern int GameData_2227658;
extern int GameData_2227668;
extern int GameData_2227698;
extern int GameData_22276a8;
extern int GameData_22276d8;
extern int GameData_22276e8;
extern int GameData_2227718;
extern int GameData_2227728;
extern int GameData_2227758;
extern int GameData_2227768;
extern int GameData_2227798;
extern int GameData_22277a8;
extern int GameData_22277d8;
extern int GameData_22277e8;
extern int GameData_2227818;
extern int GameData_2227828;
extern int GameData_2227858;
extern int GameData_2227868;
extern int GameData_2227898;
extern int GameData_22278a8;
extern int GameData_22278d8;
extern int GameData_22278e8;
extern int GameData_2227918;
extern int GameData_2227928;
extern int GameData_2227958;
extern int GameData_2227968;
extern int GameData_2227998;
extern int GameData_22279a8;
extern int GameData_22279d8;
extern int GameData_22279e8;
extern int GameData_2227a18;
extern int GameData_2227a28;
extern int GameData_2227a58;
extern int GameData_2227a68;
extern int GameData_2227a98;
extern int GameData_2227aa8;
extern int GameData_2227ad8;
extern int GameData_2227ae8;
extern int GameData_2227b18;
extern int GameData_2227b28;
extern int GameData_2227b58;
extern int GameData_2227b68;
extern int GameData_2227b98;
extern int GameData_2227ba8;
extern int GameData_2227bd8;
extern int GameData_2227be8;
extern int GameData_2227c18;
extern int GameData_2227c28;
extern int GameData_2227c58;
extern int GameData_2227c68;
extern int GameData_2227c98;
extern int GameData_2227ca8;
extern int GameData_2227cd8;
extern int GameData_2227ce8;
extern int GameData_2227d18;
extern int GameData_2227d28;
extern int GameData_2227d58;
extern int GameData_2227d68;
extern int GameData_2227d98;
extern int GameData_2227da8;
extern int GameData_2227dd8;
extern int GameData_2227de8;
float atan2f(_QWORD, long double, float);
float cosf(float);
float fmodf(float, float);
float powf(float, float);
float sinf(float);
unsigned __int64 Manager_6326c0(__int64*, __int64);
void CharacterRotate_d519c0(int8x16_t*);
void GameRoutine_102f3c0(__int64*, __int64*, __int64);
void GameRoutine_f5db40(__int64*, __int64);
void __attribute__((noreturn)) GameRoutine_102f270();
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
void __attribute__((noreturn))
GameRoutine_64aa00_alt1() __asm__("GameRoutine_64aa00");
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_db5cb0(_QWORD);
void __attribute__((noreturn)) GameRoutine_f72740(_QWORD);
void __attribute__((noreturn)) GameRoutine_f7cee0(_QWORD);
void __attribute__((noreturn)) GameRoutine_f7d5b0(_QWORD);
void __attribute__((noreturn)) GameRoutine_f7df90(_QWORD);
void __attribute__((noreturn)) String_60a1d0(void);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __attribute__((noreturn))
String_60a1d0_alt2(_QWORD) __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a230(void);
void __attribute__((noreturn)) String_60a250(_QWORD);
void game_zview_d12d30(__int64 result, int32x2_t*, char);
void game_zview_d1ff20(float32x4_t*, unsigned __int64*, char);
void snd_Fade_Fade_10c830(__int64, float);
void game_hub_f5d880(float32x4_t* result);
__int64 game_hub_f5e370(__int128* a1, __int64* a2);
void game_hub_f710c0(__int64 a1);
__int64 game_hub_f71fc0(__int64 a1, float32x4_t* a2, unsigned __int8* a3);
__attribute__((swiftcall)) void game_hub_f724a0(PSEUDO_X8 x8_, __int64 result,
                                                unsigned __int8* a2,
                                                unsigned __int8* a3);
__int64* game_hub_f72640(__int64 a1, unsigned __int8* a2);
__int64* game_hub_f77560(__int64 a1, unsigned __int8* a2);
__int64* game_hub_f79e00(_QWORD* a1, unsigned __int8* a2);
__attribute__((swiftcall)) void game_hub_f7a7a0(PSEUDO_X8 x8_,
                                                unsigned __int8** a1);
__attribute__((swiftcall)) void game_hub_f7be00(PSEUDO_X8 x8_, __int64 a1,
                                                __int64* a2);
__int64 game_hub_f89710(__int64 a1, _DWORD* a2, __int64 a3);
__n128 game_hub_f8b240();
__n128 game_hub_f8b300(__n128 result);
__n128 game_hub_f8b650_alt1() __asm__("game_hub_f8b650");
__n128 game_hub_f8bf30(_QWORD* a1);
__int64 game_hub_f960c0(_QWORD* a1, __int64* a2);
__attribute__((swiftcall)) void game_hub_f96800(PSEUDO_X8 x8_, __int64 a1,
                                                char** a2);
__int64 game_hub_f96ec0(__int64 a1, _QWORD* a2, __int64 a3, _QWORD* a4,
                        bool* a5);
__int64 game_hub_fa1b40(float* a1, float a2);
__attribute__((swiftcall)) void game_hub_fa81d0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_fa84b0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_fa87c0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_fa8a90(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_fa8d50(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_fa9030(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_fa9c10(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_faac90(PSEUDO_X8 x8_);
bool game_hub_fb50e0();
void game_hub_fb6600(float32x4_t* a1, unsigned __int32 a2, float32x4_t* a3,
                     float32x4_t* a4);
unsigned __int64 game_hub_fb6f80(__int64 a1, unsigned __int8* a2);
__int64 game_hub_1001800(__int64 result);
__n128 game_hub_1001960();
__int64 game_hub_1001a00();
__n128 game_hub_1001b60(float32x4_t* a1, __n128 result);
__n128 game_hub_1001d00(__int64 a1);
void game_hub_102d900(__int64 a1);
__n128 game_hub_1035650(__int64 a1, __int64 a2, __int64 a3, float* a4,
                        __n128 result);
__attribute__((swiftcall)) void game_hub_10c3a70(PSEUDO_X8 x8_, __int64 a1);
float32x2_t game_hub_10c3b70(_QWORD* a1);
__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8,
                                                     unsigned __int8*);
__attribute__((swiftcall)) void
LocatorDispos_db2180_alt1(PSEUDO_X8, unsigned __int8*,
                          unsigned __int8*) __asm__("LocatorDispos_db2180");
__attribute__((swiftcall)) void
as_Manager_executeContext_d9d220(PSEUDO_X8, __int64, __int64, __int64, _QWORD*,
                                 unsigned int);
__attribute__((swiftcall)) void game_hub_e28d20(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void
    game_hub_f7be00_alt1(PSEUDO_X8, _QWORD, _QWORD) __asm__("game_hub_f7be00");
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 GameRoutine_f7c340(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           long double);
__int64 GameRoutine_f7dfc0(_QWORD, _QWORD);
__int64 GameRoutine_f7e2a0(_QWORD, _QWORD);
__int64 GameRoutine_f7eac0(_QWORD, _QWORD);
__int64 GameRoutine_f7ee00(_QWORD, _QWORD, long double);
__int64 GlobalMapData_e27700(_QWORD*, __int64, __int64, __int64, __int64,
                             __int64*, _DWORD*);
__int64 game_GameVariableTable_Find_alt1(_QWORD, _QWORD) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(_QWORD) __asm__("game_HashString");
__n128 GlobalMapData_e273d0(__int64);
extern _UNKNOWN GameData_1ab0f1b;
extern _UNKNOWN GameData_1adebe5;
extern __int64* GameData_212ef18[2];
extern __int64 GameData_212dc68;
extern __int64 GameData_21c9608;
extern __int64 GameData_22127a8;
unsigned __int64 game_hub_e286a0(__int64, __int64*);
void __attribute__((noreturn)) GameRoutine_f7e4a0(_QWORD);
void game_hub_f71a70(__int64 a1);
__attribute__((swiftcall)) void game_hub_f77fc0(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2, char a3);
__int64 game_hub_102e240(__int64 a1, __int128* a2, unsigned __int8* a3);
_QWORD* game_hub_f8bf30_alt1(_QWORD*) __asm__("game_hub_f8bf30");
__int64 game_zview_d1ff20_alt1(__int64 result, _QWORD*,
                               char) __asm__("game_zview_d1ff20");
__int64 game_hub_f8b650();

void game_hub_f5d880(float32x4_t* result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __n128 v6;
  __int64 v8;
  __int128 v9;
  float v10;
  unsigned __int64 v11;
  float v12;
  unsigned int v13;
  __n128 v14;
  int v15;
  float32x4_t v16;
  float v17;
  float32x4_t v18;
  unsigned __int64 v19;
  float v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  bool v25;
  unsigned __int64 v26;
  __int128 v27;
  int v28;
  __int128 v29;
  struct {
    __n128 v30;
    unsigned __int64 v31;
    unsigned __int8 v32;
  } v30_;

  v1 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v4 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock(v4);
    v6 = std___1___shared_weak_count___release_weak(v1);
    if (v5 != 0 && v2 != 0) {
      if (*(_BYTE*)(GameData_21f3d10 + 10) != 1) {
      LABEL_12:
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(
              v5, *(long double*)&v6);
          std___1___shared_weak_count___release_weak(v5);
        }
        return;
      }
      v8 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 16LL);
      v9 = *(_OWORD*)(v8 + 560);
      v10 = *(float*)(*(_QWORD*)(v8 + 488) + 36LL);
      v11 = LANES128(result[1]).n128_u64[0];
      v12 = v10 * 0x1.ca5dc20000000p+5f;
      v13 = DWORD1(v9);
      if (v11 == LANES128(*(result)).n128_u64[1]) {
        LANES128(v14).n128_u64[0] = v9;
        v30_.v32 = 0;
        v30_.v31 = LODWORD(v12);
        LANES128(v14).n128_u64[1] = DWORD2(v9);
        v29 = v9;
        v30_.v30 = v14;
        GameRoutine_f5db40(&LANES128(*(result)).n128_i64[1],
                           (__int64)&v30_.v30);
        v9 = v29;
        v11 = LANES128(result[1]).n128_u64[0];
      }
      v30_.v30 = COERCE_AS(__n128, __PAIR64__(v13, v9));
      v15 = LANES128(result[4]).n128_u8[0];
      v30_.v32 = 0;
      LANES128(v6).n128_u64[0] = __PAIR64__(v13, v9);
      v30_.v31 = LODWORD(v12);
      LANES128(v6).n128_u64[1] = DWORD2(v9);
      v30_.v30 = v6;
      if (v15 == 1) {
        v16 = vsubq_f32(result[2], v6);
        v6 = vmulq_f32(v16, v16);
        LANES128(v6).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
                .n64_u64[0];
        LANES128(v6).n128_u64[0] =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]))))
                .n64_u64[0];
        LANES128(v6).n128_f32[0] =
            LANES128(result[5]).n128_f32[2] + LANES128(v6).n128_f32[0];
        LANES128(result[5]).n128_u32[2] = LANES128(v6).n128_u32[0];
        v17 = *(float*)(v11 - 12);
        LANES128(result[2]).n128_u64[0] = __PAIR64__(v13, v9);
        v18 = result[2];
        LANES128(v18).n128_u64[1] = DWORD2(v9);
        *((float*)&v30_.v31 + 1) = v17 + LANES128(v6).n128_f32[0];
        LANES128(result[3]).n128_u8[8] = v30_.v32;
        v19 = v30_.v31;
        result[2] = v18;
        LANES128(result[3]).n128_u64[0] = v19;
      }
      else {
        LANES128(v6).n128_u32[0] = LANES128(result[5]).n128_u32[2];
        v20 = LANES128(v6).n128_f32[0] + *(float*)(v11 - 12);
        result[2] = v30_.v30;
        *((float*)&v30_.v31 + 1) = v20;
        LANES128(result[3]).n128_u64[0] = v30_.v31;
        LANES128(result[3]).n128_u8[8] = v30_.v32;
        LANES128(result[4]).n128_u8[0] = 1;
      }
      if (LANES128(v6).n128_f32[0] >= LANES128(result[5]).n128_f32[0]) {
        LANES128(result[5]).n128_u32[2] = 0;
        GameRoutine_f5db40(&LANES128(*(result)).n128_i64[1],
                           (__int64)&v30_.v30);
        v21 = LANES128(*(result)).n128_u64[1];
        v22 = LANES128(result[1]).n128_u64[0];
        v23 = LANES128(result[5]).n128_i32[1];
        if (v23 <= (__int64)(v22 - v21) >> 5) {
          do {
            if (v21 + 32 == v22) {
              v24 = v21;
            }
            else {
              do {
                v26 = v21;
                v27 = *(_OWORD*)(v21 + 32);
                v21 += 32LL;
                v28 = *(_DWORD*)(v26 + 36);
                *(_DWORD*)v26 = v27;
                *(_DWORD*)(v26 + 4) = v28;
                v6 = *(__n128*)v26;
                LANES128(v6).n128_u32[2] = *(_DWORD*)(v26 + 40);
                *(_QWORD*)(v26 + 16) = *(_QWORD*)(v26 + 48);
                LANES128(v6).n128_u64[1] = LANES128(v6).n128_u32[2];
                *(_BYTE*)(v26 + 24) = *(_BYTE*)(v26 + 56);
                *(__n128*)v26 = v6;
              } while (v26 + 64 != v22);
              v24 = LANES128(*(result)).n128_u64[1];
              LODWORD(v23) = LANES128(result[5]).n128_u32[1];
            }
            v22 = v21;
            LANES128(result[1]).n128_u64[0] = v21;
            v25 = (int)v23 > (unsigned __int64)((__int64)(v21 - v24) >> 5);
            v21 = v24;
          } while (!v25);
        }
      }
    }
    if (v5 == 0) {
      return;
    }
    goto LABEL_12;
  }
}

__int64 game_hub_f5e370(__int128* a1, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  __int128 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  int v33;

  v2 = *a2;
  v33 = 0;
  (*(void (**)(__int64*, int*))(v2 + 16))(a2, &v33);
  v5 = *((int*)a2 + 5);
  v6 = a2[1];
  *((_DWORD*)a2 + 5) = v5 + 1;
  if (*(_BYTE*)(v6 + v5) != 0) {
    *((_DWORD*)a2 + 5) = v5 + 2;
    v7 = *(unsigned __int8*)(v6 + v5 + 1);
    *((_DWORD*)a2 + 5) = v5 + 3;
    v8 = v7 | (*(unsigned __int8*)(v6 + v5 + 2) << 8);
    *((_DWORD*)a2 + 5) = v5 + 4;
    v9 = *(unsigned __int8*)(v6 + v5 + 3);
    *((_DWORD*)a2 + 5) = v5 + 5;
    *(_DWORD*)a1 = v8 | (v9 << 16) | (*(unsigned __int8*)(v6 + v5 + 4) << 24);
    v10 = *((int*)a2 + 5);
    v11 = a2[1];
    *((_DWORD*)a2 + 5) = v10 + 1;
    v12 = *(unsigned __int8*)(v11 + v10);
    *((_DWORD*)a2 + 5) = v10 + 2;
    v13 = v12 | (*(unsigned __int8*)(v11 + v10 + 1) << 8);
    *((_DWORD*)a2 + 5) = v10 + 3;
    v14 = *(unsigned __int8*)(v11 + v10 + 2);
    *((_DWORD*)a2 + 5) = v10 + 4;
    *((_DWORD*)a1 + 1) =
        v13 | (v14 << 16) | (*(unsigned __int8*)(v11 + v10 + 3) << 24);
    v15 = *((int*)a2 + 5);
    v16 = a2[1];
    *((_DWORD*)a2 + 5) = v15 + 1;
    v17 = *(unsigned __int8*)(v16 + v15);
    *((_DWORD*)a2 + 5) = v15 + 2;
    v18 = v17 | (*(unsigned __int8*)(v16 + v15 + 1) << 8);
    *((_DWORD*)a2 + 5) = v15 + 3;
    v19 = *(unsigned __int8*)(v16 + v15 + 2);
    *((_DWORD*)a2 + 5) = v15 + 4;
    v20 = *a1;
    *((_QWORD*)&v20 + 1) =
        v18 | (unsigned int)(v19 << 16) |
        (unsigned __int64)(*(unsigned __int8*)(v16 + v15 + 3) << 24);
    *a1 = v20;
    v21 = *((int*)a2 + 5);
    v22 = a2[1];
    *((_DWORD*)a2 + 5) = v21 + 1;
    v23 = *(unsigned __int8*)(v22 + v21);
    *((_DWORD*)a2 + 5) = v21 + 2;
    v24 = v23 | (*(unsigned __int8*)(v22 + v21 + 1) << 8);
    *((_DWORD*)a2 + 5) = v21 + 3;
    v25 = *(unsigned __int8*)(v22 + v21 + 2);
    *((_DWORD*)a2 + 5) = v21 + 4;
    *((_DWORD*)a1 + 4) =
        v24 | (v25 << 16) | (*(unsigned __int8*)(v22 + v21 + 3) << 24);
    v26 = *((int*)a2 + 5);
    v27 = a2[1];
    *((_DWORD*)a2 + 5) = v26 + 1;
    v28 = *(unsigned __int8*)(v27 + v26);
    *((_DWORD*)a2 + 5) = v26 + 2;
    v29 = v28 | (*(unsigned __int8*)(v27 + v26 + 1) << 8);
    *((_DWORD*)a2 + 5) = v26 + 3;
    v30 = *(unsigned __int8*)(v27 + v26 + 2);
    *((_DWORD*)a2 + 5) = v26 + 4;
    *((_DWORD*)a1 + 5) =
        v29 | (v30 << 16) | (*(unsigned __int8*)(v27 + v26 + 3) << 24);
    v31 = *((int*)a2 + 5);
    *((_DWORD*)a2 + 5) = v31 + 1;
    *((_BYTE*)a1 + 24) = *(_BYTE*)(a2[1] + v31);
  }
  return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
}

void game_hub_f710c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64*** v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64** v26;
  char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  bool v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __int64* v38;
  char* v39;
  unsigned __int64 v40;
  char* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  const char* v51;
  char* v52;
  char* v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  float v57;
  int v58;
  int v59;
  __int64** v60;
  __int64*** v61;
  __int64** v62;
  char* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  bool v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  int v71;
  __int64 v72;
  __int64** v73;
  __int64** v74;
  unsigned __int64 v75;
  __int64** v76;
  __int64 v77;
  __int64* v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64* v81;
  char* v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64* v88;
  unsigned __int64 v89;
  __int64* v90;
  __int64 v91;
  char* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64*** v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  char* v106;
  __int64 v107;
  unsigned __int64 v108;
  char* v109;
  __int64 v110;
  unsigned __int64 v111;
  char* v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  char v116;
  _DWORD v117[128];
  char v118;
  char v119;
  char v120;
  char v121;
  char v122;
  __int64 v123;
  _QWORD v124[2];
  char* v125;
  char v126;
  char v127[15];
  __int64 v128;
  char v129[256];
  _QWORD v130[33];

  v1 = *GameData_212f180;
  v2 = *(_QWORD*)(*GameData_212f180 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(*GameData_212f180 + 72) - v2) >> 3) >=
      1) {
    v3 = (__int64***)(a1 + 16);
    v4 = 0;
    v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v100 = (__int64***)(a1 + 16);
  LABEL_5:
    v6 = *(_QWORD*)(v2 + 8 * v4);
    if (v6 == 0) {
      goto LABEL_4;
    }
    v101 = *(unsigned __int16*)(v6 + 40);
    if (*(_WORD*)(v6 + 40) == 0) {
      goto LABEL_4;
    }
    v98 = v4;
    v102 = *(_QWORD*)(v2 + 8 * v4);
    v103 = 0;
  LABEL_9:
    v7 = *(_QWORD*)(v6 + 48);
    if (*(_QWORD*)(v6 + 32) != 0) {
      v8 = *(char**)(v6 + 32);
    }
    else {
      v8 = &GameData_1a9f09e;
    }
    v9 = strlen(v8);
    if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_167:
      String_60a1d0();
    }
    v10 = v9;
    if (v9 >= 0x17) {
      if ((v9 | 7) == 0x17) {
        v12 = 26;
      }
      else {
        v12 = (v9 | 7) + 1;
      }
      v6 = v102;
      v11 = (char*)fw_memory_HeapManager_Allocate(*v5, v12, 16, 0);
      v108 = v10;
      v109 = v11;
      v107 = v12 | 1;
    }
    else {
      v11 = (char*)&v107 + 1;
      LOBYTE(v107) = 2 * v9;
      if (v9 == 0) {
      LABEL_21:
        v11[v10] = 0;
        v13 = *(_DWORD*)(v6 + 56);
        v14 = *(_DWORD*)(v6 + 60);
        v15 = *(_DWORD*)(v6 + 64);
        v16 = *(_DWORD*)(v6 + 68);
        v17 = *(_DWORD*)(v6 + 72);
        v18 = *(_DWORD*)(v6 + 76);
        v19 = *(_DWORD*)(v6 + 80);
        if (*(_QWORD*)(v7 + 8 * v103) != 0) {
          v20 = *(char**)(v7 + 8 * v103);
        }
        else {
          v20 = &GameData_1a9f09e;
        }
        v21 = strlen(v20);
        if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_167;
        }
        v22 = v21;
        if (v21 >= 0x17) {
          if ((v21 | 7) == 0x17) {
            v24 = 26;
          }
          else {
            v24 = (v21 | 7) + 1;
          }
          v23 = (char*)fw_memory_HeapManager_Allocate(*v5, v24, 16, 0);
          v105 = v22;
          v106 = v23;
          v104 = v24 | 1;
        }
        else {
          v23 = (char*)&v104 + 1;
          LOBYTE(v104) = 2 * v21;
          if (v21 == 0) {
            goto LABEL_33;
          }
        }
        memmove(v23, v20, v22);
      LABEL_33:
        v23[v22] = 0;
        v25 = (unsigned __int8)v107;
        v26 = *v3;
        if (*v3 == nullptr) {
          v37 = 0;
          goto LABEL_62;
        }
        if ((v107 & 1) != 0) {
          v27 = v109;
        }
        else {
          v27 = (char*)&v107 + 1;
        }
        if ((v107 & 1) != 0) {
          v28 = v108;
        }
        else {
          v28 = (unsigned __int64)(unsigned __int8)v107 >> 1;
        }
        while (1) {
          v29 = *((unsigned __int8*)v26 + 32);
          v30 = (v29 & 1) == 0;
          v31 = v29 >> 1;
          if (v30) {
            v32 = v31;
          }
          else {
            v32 = (unsigned __int64)v26[5];
          }
          if (v30) {
            v33 = (__int64*)((char*)v26 + 33);
          }
          else {
            v33 = v26[6];
          }
          if (v32 >= v28) {
            v34 = v28;
          }
          else {
            v34 = v32;
          }
          v35 = memcmp(v27, v33, v34);
          if (v35 != 0) {
            if ((v35 & 0x80000000) == 0) {
              goto LABEL_56;
            }
          }
          else if (v28 >= v32) {
          LABEL_56:
            v36 = memcmp(v33, v27, v34);
            if (v36 != 0) {
              if ((v36 & 0x80000000) == 0) {
              LABEL_58:
                v37 = 1;
                goto LABEL_60;
              }
            }
            else if (v32 >= v28) {
              goto LABEL_58;
            }
            ++v26;
          }
          v26 = (__int64**)*v26;
          if (v26 == nullptr) {
            v37 = 0;
          LABEL_60:
            v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          LABEL_62:
            v126 = 24;
            strcpy(v127, "MapContactBB");
            if ((v25 & 1) != 0) {
              fw_text_String_CopyTerminated(v124, v109, v108);
            }
            else {
              v124[0] = v107;
              v124[1] = v108;
              v125 = v109;
            }
            std___1_to_string_1a0abd0((void*)(v130), v37);
            v38 = (__int64*)GameRoutine_1a0a680(v130, 0, &GameData_1ac690d, 1);
            v40 = v38[1];
            v39 = (char*)v38[2];
            v110 = *v38;
            v111 = v40;
            v112 = v39;
            v38[1] = 0;
            v38[2] = 0;
            *v38 = 0;
            if ((v110 & 1) != 0) {
              v41 = v112;
            }
            else {
              v41 = (char*)&v110 + 1;
            }
            if ((v110 & 1) != 0) {
              v42 = v111;
            }
            else {
              v42 = (unsigned __int64)(unsigned __int8)v110 >> 1;
            }
            GameRoutine_1a09ce0(v124, v41, v42);
            if ((v110 & 1) != 0 && v112 != nullptr) {
              v46 = 128;
              if (*(_QWORD*)(*v5 + 200LL) == 0) {
                v46 = 56;
              }
              nn_mem_StandardAllocator_Free(*v5 + v46);
            }
            if ((v130[0] & 1) != 0 && v130[2] != 0) {
              v47 = 128;
              if (*(_QWORD*)(*v5 + 200LL) == 0) {
                v47 = 56;
              }
              nn_mem_StandardAllocator_Free(*v5 + v47);
            }
            v116 = 0;
            v114 = 0;
            v115 = 0;
            v112 = nullptr;
            v113 = 0;
            v110 = 0;
            v111 = 0;
            v118 = 0;
            v119 = 0;
            v120 = 0;
            v121 = 0;
            v122 = 0;
            memset(&v123, 0, 296, v43, v44, v45);
            memset(v117, 0, 449, v48, v49, v50);
            v117[21] = v13;
            v117[22] = v14;
            v117[23] = v15;
            v117[24] = v16;
            v117[25] = v17;
            v117[26] = v18;
            v117[27] = v19;
            if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
              v51 = *(const char**)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
            }
            else {
              v51 = (const char*)(*(_QWORD*)GameData_212dbb8[0] + 65LL);
            }
            if ((v124[0] & 1) != 0) {
              v52 = v125;
            }
            else {
              v52 = (char*)v124 + 1;
            }
            sprintf(v129, "%s::%s", v127, v52);
            sprintf(v130, "%s=%s", v51, v129);
            GameRoutine_60a020(&v110, v130);
            if ((v104 & 1) != 0) {
              v53 = v106;
            }
            else {
              v53 = (char*)&v104 + 1;
            }
            if ((v104 & 1) != 0) {
              v54 = v105;
            }
            else {
              v54 = (unsigned __int64)(unsigned __int8)v104 >> 1;
            }
            GameRoutine_e149a0(&v110, v53, v54);
            v55 = fw_memory_HeapManager_Allocate(*v5, 1232, 16, 0);
            *(_QWORD*)(v55 + 16) = 0;
            *(_BYTE*)(v55 + 64) = 0;
            *(_BYTE*)(v55 + 80) = 0;
            *(_BYTE*)(v55 + 96) = 0;
            *(_BYTE*)(v55 + 132) = 0;
            *(_QWORD*)(v55 + 40) = 0;
            *(_QWORD*)v55 = GameData_1ff7898;
            *(_BYTE*)(v55 + 48) = 0;
            *(_QWORD*)(v55 + 112) = 0;
            *(_QWORD*)(v55 + 120) = 0;
            *(_BYTE*)(v55 + 128) = 0;
            *(_QWORD*)(v55 + 8) = 0;
            *(_QWORD*)(v55 + 32) = 0;
            v56 = v55 + 32;
            GameRoutine_cae2c0(v55 + 136, &v110);
            v57 = *(float*)(v55 + 296);
            *(_DWORD*)(v55 + 32) = 0;
            v58 = v117[20];
            *(_QWORD*)(v55 + 1222) = 0;
            *(_QWORD*)(v55 + 1216) = 0;
            *(_QWORD*)(v55 + 1208) = 0;
            *(_QWORD*)(v55 + 1200) = 0;
            *(_QWORD*)(v55 + 1192) = 0;
            *(_QWORD*)(v55 + 1184) = 0;
            *(_QWORD*)(v55 + 1176) = 0;
            *(_QWORD*)(v55 + 1168) = 0;
            *(_QWORD*)(v55 + 1160) = 0;
            *(float*)(v55 + 36) = v57 * 0.5f;
            *(_OWORD*)(v55 + 32) = *(unsigned __int64*)(v55 + 32);
            if (v58 == 3) {
              *(_DWORD*)(v55 + 128) = 1124204544;
              *(_BYTE*)(v55 + 132) = 1;
              v59 = 2;
            }
            else {
              v59 = v58 == 1;
            }
            *(_DWORD*)(v55 + 1152) = v59;
            game_hub_d6a8e0(v56);
            v60 = *v3;
            v61 = v3;
            v62 = (__int64**)v3;
            if (*v3 != nullptr) {
              if ((v25 & 1) != 0) {
                v63 = v109;
              }
              else {
                v63 = (char*)&v107 + 1;
              }
              if ((v25 & 1) != 0) {
                v64 = v108;
              }
              else {
                v64 = v25 >> 1;
              }
              while (1) {
                while (1) {
                  v62 = v60;
                  v65 = *((unsigned __int8*)v60 + 32);
                  v66 = (v65 & 1) == 0;
                  v67 = v65 >> 1;
                  v68 = v66 ? v67 : (unsigned __int64)v62[5];
                  v69 = v66 ? (__int64)v62 + 33 : (__int64)v62[6];
                  v70 = v68 >= v64 ? v64 : v68;
                  v71 = memcmp(v63, v69, v70);
                  if (v71 != 0) {
                    break;
                  }
                  if (v64 >= v68) {
                    goto LABEL_117;
                  }
                LABEL_103:
                  v60 = (__int64**)*v62;
                  v61 = v62;
                  if (*v62 == nullptr) {
                    goto LABEL_123;
                  }
                }
                if (v71 < 0) {
                  goto LABEL_103;
                }
              LABEL_117:
                v72 = memcmp(v69, v63, v70);
                if ((_DWORD)v72 != 0) {
                  if ((v72 & 0x80000000) == 0) {
                    goto LABEL_129;
                  }
                }
                else if (v68 >= v64) {
                LABEL_129:
                  v74 = v62;
                  goto LABEL_130;
                }
                v60 = (__int64**)v62[1];
                if (v60 == nullptr) {
                  v61 = v62 + 1;
                  break;
                }
              }
            }
          LABEL_123:
            v73 = (__int64**)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
            v74 = v73;
            if ((v25 & 1) != 0) {
              fw_text_String_CopyTerminated(v73 + 4, v109, v108);
            }
            else {
              v75 = v108;
              v73[4] = (__int64*)v107;
              v73[5] = (__int64*)v75;
              v73[6] = (__int64*)v109;
            }
            v74[8] = nullptr;
            v74[9] = nullptr;
            v74[7] = nullptr;
            v76 = v74;
            *v74 = nullptr;
            v74[1] = nullptr;
            v74[2] = (__int64*)v62;
            *v61 = v74;
            v77 = **(_QWORD**)(a1 + 8);
            if (v77 != 0) {
              *(_QWORD*)(a1 + 8) = v77;
              v76 = (__int64**)*v61;
            }
            v72 = fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 16), v76);
            ++*(_QWORD*)(a1 + 24);
          LABEL_130:
            v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
            v78 = v74[8];
            v79 = (unsigned __int64)v74[9];
            v6 = v102;
            if ((unsigned __int64)v78 >= v79) {
              v81 = v74[7];
              v82 = (char*)((char*)v78 - (char*)v81);
              v83 = (((char*)v78 - (char*)v81) >> 4) + 1;
              if (v83 >> 60 != 0) {
                GameRoutine_f72740(v72);
              }
              v84 = v79 - (_QWORD)v81;
              v3 = v100;
              if (v84 >> 3 > v83) {
                v83 = v84 >> 3;
              }
              if ((unsigned __int64)v84 >= 0x7FFFFFFFFFFFFFF0LL) {
                v85 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v85 = v83;
              }
              if (v85 >> 60 != 0) {
                GameRoutine_60a210(v72);
              }
              v86 = fw_memory_g_heap_manager_ptr;
              v87 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v85, 16, 0);
              v88 = (__int64*)&v82[v87];
              v89 = v87 + 16 * v85;
              *v88 = v56;
              v88[1] = v55;
              v80 = (__int64)&v82[v87 + 16];
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 8), 1u,
                                        memory_order_relaxed);
              v90 = v74[7];
              v91 = (char*)v74[8] - (char*)v90;
              v92 = (char*)v88 - v91;
              memcpy((char*)v88 - v91, v90, v91);
              v74[7] = (__int64*)v92;
              v74[8] = (__int64*)v80;
              v74[9] = (__int64*)v89;
              if (v90 != nullptr) {
                v93 = 128;
                if (*(_QWORD*)(*(_QWORD*)v86 + 200LL) == 0) {
                  v93 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v86 + v93);
              }
              v5 = (_QWORD*)v86;
              v6 = v102;
            }
            else {
              *v78 = v56;
              v78[1] = v55;
              v80 = (__int64)(v78 + 2);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 8), 1u,
                                        memory_order_relaxed);
              v3 = v100;
            }
            v74[8] = (__int64*)v80;
            if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
              std___1___shared_weak_count___release_weak_alt1(v55);
            }
            GameRoutine_cacc00(&v110);
            if ((v124[0] & 1) != 0 && v125 != nullptr) {
              v94 = 128;
              if (*(_QWORD*)(*v5 + 200LL) == 0) {
                v94 = 56;
              }
              nn_mem_StandardAllocator_Free(*v5 + v94);
            }
            if ((v126 & 1) != 0 && v128 != 0) {
              v95 = 128;
              if (*(_QWORD*)(*v5 + 200LL) == 0) {
                v95 = 56;
              }
              nn_mem_StandardAllocator_Free(*v5 + v95);
            }
            if ((v104 & 1) != 0 && v106 != nullptr) {
              v96 = 128;
              if (*(_QWORD*)(*v5 + 200LL) == 0) {
                v96 = 56;
              }
              nn_mem_StandardAllocator_Free(*v5 + v96);
            }
            if ((v107 & 1) != 0 && v109 != nullptr) {
              v97 = 128;
              if (*(_QWORD*)(*v5 + 200LL) == 0) {
                v97 = 56;
              }
              nn_mem_StandardAllocator_Free(*v5 + v97);
            }
            if (++v103 != v101) {
              goto LABEL_9;
            }
            v4 = v98;
            v1 = *GameData_212f180;
          LABEL_4:
            v2 = *(_QWORD*)(v1 + 64);
            if (++v4 >=
                (int)((unsigned __int64)(*(_QWORD*)(v1 + 72) - v2) >> 3)) {
              return;
            }
            goto LABEL_5;
          }
        }
      }
    }
    memmove(v11, v8, v10);
    goto LABEL_21;
  }
}

void game_hub_f71a70(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  int* v3;
  int v4;
  int v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  void* v11;
  int* v12;
  int v13;
  int v14;
  _BOOL4 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int* v20;
  int v21;
  int v22;
  struct {
    __int64 v24[2];
    int* v25;
  } v24_;
  struct {
    __int64 v26;
    void* v27;
    int* v28;
  } v26_;
  _QWORD v29[3];

  *(_DWORD*)(a1 + 32) = 0;
  v1 = *(unsigned __int8*)(GameData_21f3d10 + 40);
  v2 = *(_QWORD*)(GameData_21f3d10 + 48);
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 == 7) {
    v3 = *(int**)(GameData_21f3d10 + 56);
    if ((v1 & 1) == 0) {
      v3 = (int*)(GameData_21f3d10 + 41);
    }
    v4 = *v3;
    v5 = *(int*)((char*)v3 + 3);
    if (v4 == 1600288072 && v5 == 808464479) {
      __builtin_memset(v29, 0, sizeof(v29));
      v26_.v27 = &GameData_1ab0f1b;
      v26_.v26 = game_HashString((__int64)&GameData_1ab0f1b);
      if (game_GameModeData_instance_ == 0 ||
          (v8 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v26_.v26)) == 0 ||
          *(_DWORD*)(v8 + 32) == 0) {
        if (GameData_21f3d10 != 0) {
          v9 = GameData_21f3d10 + 248;
        }
        else {
          v9 = 0;
        }
        if (GameData_22127a8 != 0) {
          v10 = GameData_22127a8;
        }
        else {
          v10 = v9;
        }
        as_Manager_executeContext_d9d220(
            (void*)(&v26_.v26), v10, (__int64)"Condition_SecurityWorshipper",
            28, v29, 0);
        v11 = (void*)((unsigned __int8)v26_.v26 >> 1);
        if ((v26_.v26 & 1) != 0) {
          v11 = v26_.v27;
        }
        if (v11 != ((_UNKNOWN*)0x7LL)) {
          goto LABEL_29;
        }
        v12 = v26_.v28;
        if ((v26_.v26 & 1) == 0) {
          v12 = (int*)((char*)&v26_.v26 + 1);
        }
        v13 = *v12;
        v14 = *(int*)((char*)v12 + 3);
        if (v13 == 1634953572 && v14 == 1701601889) {
          if (GameData_21f3d10 != 0) {
            v17 = GameData_21f3d10 + 248;
          }
          else {
            v17 = 0;
          }
          if (GameData_22127a8 != 0) {
            v18 = GameData_22127a8;
          }
          else {
            v18 = v17;
          }
          as_Manager_executeContext_d9d220(
              (void*)(v24_.v24), v18, (__int64)"Condition_SecurityCommerce", 26,
              v29, 0);
          v19 = v24_.v24[1];
          if ((v24_.v24[0] & 1) == 0) {
            v19 = LOBYTE(v24_.v24[0]) >> 1;
          }
          if (v19 == 7) {
            v20 = v24_.v25;
            if ((v24_.v24[0] & 1) == 0) {
              v20 = (int*)((char*)v24_.v24 + 1);
            }
            v21 = *v20;
            v22 = *(int*)((char*)v20 + 3);
            v16 = v21 != 1634953572 || v22 != 1701601889;
          }
          else {
            v16 = true;
          }
          if ((v24_.v24[0] & 1) != 0) {
            GameRoutine_25ec90(v24_.v25, v24_.v24[0] & 0xFFFFFFFFFFFFFFFELL);
          }
          if ((v26_.v26 & 1) == 0) {
            goto LABEL_31;
          }
        }
        else {
        LABEL_29:
          v16 = true;
          if ((v26_.v26 & 1) == 0) {
            goto LABEL_31;
          }
        }
        GameRoutine_25ec90(v26_.v28, v26_.v26 & 0xFFFFFFFFFFFFFFFELL);
      LABEL_31:
        if (v16) {
          *(_DWORD*)(a1 + 32) |= 2u;
        }
      }
    }
  }
}

__int64 game_hub_f71fc0(__int64 a1, float32x4_t* a2, unsigned __int8* a3)
{

#pragma clang fp contract(off)
  double v4;
  __int64 result;
  __int64 v8;
  unsigned int v9;
  unsigned __int8 v10;
  char v11[23];
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  v10 = 20;
  strcpy(v11, "MaskWealth");
  game_hub_f724a0((void*)(&v12_.v12), a1, &v10, a3);
  if (v12_.v12 != 0 && *(float*)(v12_.v12 + 260) > 0x0.0p+0f &&
      (LODWORD(v4) = *(_DWORD*)(v12_.v12 + 264), *(float*)&v4 > 0x0.0p+0f) &&
      (GameRoutine_d6b220(v12_.v12, a2, v4) & 1) != 0) {
    result = 1;
    v8 = v12_.v13;
    if (v12_.v13 == 0) {
      return result;
    }
  }
  else {
    result = 0;
    v8 = v12_.v13;
    if (v12_.v13 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v9 = result;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
    return v9;
  }
  return result;
}

__attribute__((swiftcall)) void game_hub_f724a0(PSEUDO_X8 x8_, __int64 result,
                                                unsigned __int8* a2,
                                                unsigned __int8* a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64** v4;
  unsigned __int64 v6;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int8* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;

  v4 = *(__int64***)(result + 16);
  if (v4 == nullptr) {
    goto LABEL_43;
  }
  v6 = *a2;
  v9 = result;
  v10 = (v6 & 1) == 0;
  v11 = v6 >> 1;
  if (v10) {
    v12 = a2 + 1;
  }
  else {
    v12 = *((unsigned __int8**)a2 + 2);
  }
  if (v10) {
    v13 = v11;
  }
  else {
    v13 = *((_QWORD*)a2 + 1);
  }
  while (1) {
    v14 = *((unsigned __int8*)v4 + 32);
    v15 = (v14 & 1) == 0;
    v16 = v14 >> 1;
    if (v15) {
      v17 = v16;
    }
    else {
      v17 = (unsigned __int64)v4[5];
    }
    if (v15) {
      v18 = (__int64*)((char*)v4 + 33);
    }
    else {
      v18 = v4[6];
    }
    if (v17 >= v13) {
      v19 = v13;
    }
    else {
      v19 = v17;
    }
    result = memcmp(v12, v18, v19);
    if ((_DWORD)result != 0) {
      if ((result & 0x80000000) != 0) {
        goto LABEL_10;
      }
    }
    else if (v13 < v17) {
      goto LABEL_10;
    }
    result = memcmp(v18, v12, v19);
    if ((_DWORD)result == 0) {
      if (v17 >= v13) {
        break;
      }
      goto LABEL_9;
    }
    if ((result & 0x80000000) == 0) {
      break;
    }
  LABEL_9:
    ++v4;
  LABEL_10:
    v4 = (__int64**)*v4;
    if (v4 == nullptr) {
      goto LABEL_43;
    }
  }
  result = game_hub_f72640_alt1(v9 + 8, a2);
  v20 = *(_QWORD**)result;
  v21 = *(_QWORD**)(result + 8);
  if (*(_QWORD**)result == v21) {
  LABEL_43:
    *a4 = 0;
    a4[1] = 0;
    {
      result;
      return;
    }
  }
  v22 = *a3;
  if ((v22 & 1) != 0) {
    v23 = *((_QWORD*)a3 + 1);
  }
  else {
    v23 = v22 >> 1;
  }
  if ((v22 & 1) != 0) {
    v24 = *((unsigned __int8**)a3 + 2);
  }
  else {
    v24 = a3 + 1;
  }
  while (1) {
    v25 = *v20;
    v26 = *(unsigned __int8*)(*v20 + 840LL);
    v27 = *(_QWORD*)(*v20 + 848LL);
    if ((v26 & 1) == 0) {
      v27 = v26 >> 1;
    }
    if (v27 == v23) {
      v28 = (v26 & 1) != 0 ? *(_QWORD*)(v25 + 856) : v25 + 841;
      result = memcmp(v28, v24, v23);
      if ((_DWORD)result == 0) {
        break;
      }
    }
    v20 += 2;
    if (v20 == v21) {
      goto LABEL_43;
    }
  }
  v29 = v20[1];
  *a4 = v25;
  a4[1] = v29;
  if (v29 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

__int64* game_hub_f72640(__int64 a1, unsigned __int8* a2)
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

__int64* game_hub_f77560(__int64 a1, unsigned __int8* a2)
{
  __int64* v2;
  _QWORD* v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  bool v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  int v18;
  int v19;
  bool v20;
  __int64 v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  int v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int128 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  int v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  _QWORD* v72;
  unsigned __int64 v73;
  bool v74;
  unsigned __int64 v75;
  char* v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  bool v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  int v85;
  _QWORD* v86;
  _QWORD* v87;
  __int64 v88;
  _QWORD* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  bool v98;
  unsigned __int64 v99;
  unsigned __int8* v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  bool v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  int v108;
  int v109;
  _QWORD* v111;
  __int64 v112;
  _QWORD* v113;
  __int64 v114;
  __int128 v115;
  int v116;
  char v117[8];
  __int64 v118;
  __int64 v119;
  __int64 v120;
  char v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  unsigned __int8 v125;
  __int64 v126;
  __int64 v127;
  _QWORD v128[2];
  char v129;
  __int64 v130;
  __int64 v131;

  v3 = (_QWORD*)(a1 + 64);
  v2 = *(__int64**)(a1 + 64);
  v4 = a2;
  v114 = a1;
  if (v2 == nullptr) {
    goto LABEL_50;
  }
  v5 = *a2;
  v6 = a1 + 64;
  v7 = *(_QWORD*)(a1 + 64);
  v8 = (v5 & 1) == 0;
  v9 = v5 >> 1;
  if (v8) {
    v10 = a2 + 1;
  }
  else {
    v10 = *((unsigned __int8**)a2 + 2);
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = *((_QWORD*)a2 + 1);
  }
  do {
    v12 = *(unsigned __int8*)(v7 + 32);
    v13 = (v12 & 1) == 0;
    v14 = v12 >> 1;
    if (v13) {
      v15 = v14;
    }
    else {
      v15 = *(_QWORD*)(v7 + 40);
    }
    if (v13) {
      v16 = v7 + 33;
    }
    else {
      v16 = *(_QWORD*)(v7 + 48);
    }
    if (v11 >= v15) {
      v17 = v15;
    }
    else {
      v17 = v11;
    }
    v18 = memcmp(v16, v10, v17);
    if (v15 < v11) {
      v19 = -1;
    }
    else {
      v19 = 1;
    }
    if (v15 == v11) {
      v19 = 0;
    }
    if (v18 != 0) {
      v19 = v18;
    }
    v20 = v19 < 0;
    if (v19 >= 0) {
      v21 = 0;
    }
    else {
      v21 = 8;
    }
    if (!v20) {
      v6 = v7;
    }
    v7 = *(_QWORD*)(v7 + v21);
  } while (v7 != 0);
  if ((_QWORD*)v6 == v3) {
    a1 = v114;
  LABEL_50:
    v113 = v3;
    v111 = v4;
    game_hub_f77fc0_alt2((void*)(&v130), a1, v4, 1);
    v31 = v130;
    v30 = v131;
    if (v130 == v131) {
      v32 = 0;
      v33 = 0;
    }
    else {
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0x249249249249249LL;
      do {
        if (*(_BYTE*)(v31 + 192) == 1) {
          v36 = *(_QWORD*)(v31 + 184);
          v37 = v32;
          if (v32 != v33) {
            v37 = v32;
            while (*(_QWORD*)(v37 + 104) != v36) {
              v37 += 112;
              if (v37 == v33) {
                goto LABEL_60;
              }
            }
          }
          if (v37 == v33) {
          LABEL_60:
            GameRoutine_ff24c0((void*)(v128), *(_QWORD*)(v31 + 184));
            if (v129 == 1) {
              v125 = 0;
              v126 = 0;
              v127 = v36;
              v38 = *(_DWORD*)(v31 + 72);
              v117[0] = 0;
              v121 = 0;
              LOBYTE(v122) = 0;
              v116 = v38;
              *(_QWORD*)&v39 = v128[0];
              *((_QWORD*)&v39 + 1) = LODWORD(v128[1]);
              v115 = v39;
              GameRoutine_f7cc80(v117, v31 + 80);
              v40 = GameRoutine_f7cdc0(&v122, v31 + 120);
              v126 = *(_QWORD*)(v31 + 152);
              if (v33 >= v34) {
                v42 = v33 - v32;
                v43 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v33 - v32) >> 4) + 1;
                if (v43 > v35) {
                  GameRoutine_f7cee0(v40);
                }
                if (0xDB6DB6DB6DB6DB6ELL * ((__int64)(v34 - v32) >> 4) > v43) {
                  v43 = 0xDB6DB6DB6DB6DB6ELL * ((__int64)(v34 - v32) >> 4);
                }
                if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL *
                                       ((__int64)(v34 - v32) >> 4)) >=
                    0x124924924924924LL) {
                  v43 = v35;
                }
                if (v43 > v35) {
                  GameRoutine_60a210(v40);
                }
                v44 = v35;
                v112 = 112 * v43;
                v45 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                     112 * v43, 16, 0);
                v46 = v45 + v42;
                v47 = v45;
                *(_BYTE*)(v46 + 24) = 0;
                *(_BYTE*)(v46 + 56) = 0;
                *(_OWORD*)v46 = v115;
                *(_DWORD*)(v46 + 16) = v116;
                if (v121 == 1) {
                  *(_BYTE*)(v46 + 24) = v117[0];
                  if ((v118 & 1) != 0) {
                    fw_text_String_CopyTerminated(v46 + 32, v120, v119);
                  }
                  else {
                    v48 = v119;
                    *(_QWORD*)(v46 + 32) = v118;
                    *(_QWORD*)(v46 + 40) = v48;
                    *(_QWORD*)(v46 + 48) = v120;
                  }
                  *(_BYTE*)(v46 + 56) = 1;
                }
                v51 = v125;
                *(_BYTE*)(v46 + 64) = 0;
                v52 = (_QWORD*)(v46 + 64);
                *(_BYTE*)(v46 + 88) = 0;
                if (v51 == 1) {
                  if ((v122 & 1) != 0) {
                    fw_text_String_CopyTerminated(v52, v124, v123);
                  }
                  else {
                    v53 = v123;
                    *v52 = v122;
                    *(_QWORD*)(v46 + 72) = v53;
                    *(_QWORD*)(v46 + 80) = v124;
                  }
                  *(_BYTE*)(v46 + 88) = 1;
                }
                v54 = v127;
                v55 = v46 - v42;
                *(_QWORD*)(v46 + 96) = v126;
                *(_QWORD*)(v46 + 104) = v54;
                if (v32 != v33) {
                  v56 = 0;
                  do {
                    v58 = v32 + v56;
                    v59 = v55 + v56;
                    *(_QWORD*)(v59 + 8) = *(_QWORD*)(v32 + v56 + 8);
                    *(_QWORD*)v59 = *(_QWORD*)(v32 + v56);
                    v60 = *(_DWORD*)(v32 + v56 + 16);
                    *(_BYTE*)(v59 + 24) = 0;
                    *(_BYTE*)(v59 + 56) = 0;
                    *(_DWORD*)(v59 + 16) = v60;
                    if (*(_BYTE*)(v32 + v56 + 56) == 1) {
                      *(_BYTE*)(v59 + 24) = *(_BYTE*)(v58 + 24);
                      *(_QWORD*)(v59 + 40) = *(_QWORD*)(v58 + 40);
                      v61 = *(_QWORD*)(v58 + 32);
                      *(_QWORD*)(v59 + 48) = *(_QWORD*)(v58 + 48);
                      *(_QWORD*)(v59 + 32) = v61;
                      *(_QWORD*)(v58 + 32) = 0;
                      *(_QWORD*)(v58 + 40) = 0;
                      *(_QWORD*)(v58 + 48) = 0;
                      *(_BYTE*)(v59 + 56) = 1;
                    }
                    *(_BYTE*)(v59 + 64) = 0;
                    *(_BYTE*)(v59 + 88) = 0;
                    if (*(_BYTE*)(v58 + 88) == 1) {
                      v62 = (_QWORD*)(v32 + v56);
                      *(_QWORD*)(v59 + 72) = *(_QWORD*)(v32 + v56 + 72);
                      v63 = *(_QWORD*)(v32 + v56 + 64);
                      *(_QWORD*)(v59 + 80) = *(_QWORD*)(v32 + v56 + 80);
                      *(_QWORD*)(v59 + 64) = v63;
                      v62[8] = 0;
                      v62[9] = 0;
                      v62[10] = 0;
                      *(_BYTE*)(v59 + 88) = 1;
                    }
                    v57 = v55 + v56;
                    v56 += 112;
                    *(_QWORD*)(v57 + 96) = *(_QWORD*)(v58 + 96);
                    *(_QWORD*)(v57 + 104) = *(_QWORD*)(v58 + 104);
                  } while (v58 + 112 != v33);
                  v64 = v32;
                  do {
                    if (*(_BYTE*)(v64 + 88) == 1 &&
                        (*(_BYTE*)(v64 + 64) & 1) != 0 &&
                        *(_QWORD*)(v64 + 80) != 0) {
                      v65 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v65 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v65);
                    }
                    if (*(_BYTE*)(v64 + 56) == 1 &&
                        (*(_BYTE*)(v64 + 32) & 1) != 0 &&
                        *(_QWORD*)(v64 + 48) != 0) {
                      v66 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v66 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v66);
                    }
                    v64 += 112;
                  } while (v64 != v33);
                }
                v33 = v46 + 112;
                v34 = v47 + v112;
                if (v32 != 0) {
                  v67 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v67 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v67);
                }
                v32 = v55;
                v35 = v44;
              }
              else {
                *(_BYTE*)(v33 + 24) = 0;
                *(_BYTE*)(v33 + 56) = 0;
                *(_OWORD*)v33 = v115;
                *(_DWORD*)(v33 + 16) = v116;
                if (v121 == 1) {
                  *(_BYTE*)(v33 + 24) = v117[0];
                  if ((v118 & 1) != 0) {
                    fw_text_String_CopyTerminated(v33 + 32, v120, v119);
                  }
                  else {
                    *(_QWORD*)(v33 + 40) = v119;
                    v41 = v118;
                    *(_QWORD*)(v33 + 48) = v120;
                    *(_QWORD*)(v33 + 32) = v41;
                  }
                  *(_BYTE*)(v33 + 56) = 1;
                }
                *(_BYTE*)(v33 + 64) = 0;
                v49 = (_QWORD*)(v33 + 64);
                *(_BYTE*)(v33 + 88) = 0;
                if (v125 == 1) {
                  if ((v122 & 1) != 0) {
                    fw_text_String_CopyTerminated(v49, v124, v123);
                  }
                  else {
                    *(_QWORD*)(v33 + 72) = v123;
                    v50 = v122;
                    *(_QWORD*)(v33 + 80) = v124;
                    *v49 = v50;
                  }
                  *(_BYTE*)(v33 + 88) = 1;
                }
                *(_QWORD*)(v33 + 96) = v126;
                *(_QWORD*)(v33 + 104) = v127;
                v33 += 112LL;
              }
              if (v125 == 1 && (v122 & 1) != 0 && v124 != 0) {
                v68 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v68 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v68);
              }
              if (v121 == 1 && (v118 & 1) != 0 && v120 != 0) {
                v69 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v69 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v69);
              }
            }
          }
          else {
            GameRoutine_fb1ed0(v37 + 16, v31 + 72);
          }
        }
        v31 += 232;
      } while (v31 != v30);
    }
    v70 = v113;
    v4 = (unsigned __int8*)v111;
    v71 = *v113;
    v72 = v113;
    if (*v113 != 0) {
      v73 = *(unsigned __int8*)v111;
      v74 = (v73 & 1) == 0;
      v75 = v73 >> 1;
      if (v74) {
        v76 = (char*)v111 + 1;
      }
      else {
        v76 = (char*)v111[2];
      }
      if (v74) {
        v77 = v75;
      }
      else {
        v77 = v111[1];
      }
      while (1) {
        while (1) {
          v70 = (_QWORD*)v71;
          v78 = *(unsigned __int8*)(v71 + 32);
          v79 = (v78 & 1) == 0;
          v80 = v78 >> 1;
          v81 = v79 ? v80 : v70[5];
          v82 = v79 ? (__int64)v70 + 33 : v70[6];
          v83 = v81 >= v77 ? v77 : v81;
          v84 = memcmp(v76, v82, v83);
          if (v84 != 0) {
            break;
          }
          if (v77 >= v81) {
            goto LABEL_149;
          }
        LABEL_135:
          v71 = *v70;
          v72 = v70;
          if (*v70 == 0) {
            goto LABEL_155;
          }
        }
        if (v84 < 0) {
          goto LABEL_135;
        }
      LABEL_149:
        v85 = memcmp(v82, v76, v83);
        if (v85 != 0) {
          if ((v85 & 0x80000000) == 0) {
            goto LABEL_161;
          }
        }
        else if (v81 >= v77) {
        LABEL_161:
          v87 = v70;
          goto LABEL_162;
        }
        v71 = v70[1];
        if (v71 == 0) {
          v72 = v70 + 1;
          break;
        }
      }
    }
  LABEL_155:
    v86 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
    v87 = v86;
    if ((*(_BYTE*)v111 & 1) != 0) {
      fw_text_String_CopyTerminated(v86 + 4, v111[2], v111[1]);
    }
    else {
      v88 = v111[1];
      v86[4] = *v111;
      v86[5] = v88;
      v86[6] = v111[2];
    }
    v87[8] = 0;
    v87[9] = 0;
    v87[7] = 0;
    v89 = v87;
    *v87 = 0;
    v87[1] = 0;
    v87[2] = v70;
    *v72 = v87;
    v90 = **(_QWORD**)(v114 + 56);
    if (v90 != 0) {
      *(_QWORD*)(v114 + 56) = v90;
      v89 = (_QWORD*)*v72;
    }
    fw_containers_BalanceAfterInsert(*(_QWORD*)(v114 + 64), v89);
    ++*(_QWORD*)(v114 + 72);
  LABEL_162:
    GameRoutine_f7cf00(v87 + 7, v32, v33,
                       0x6DB6DB6DB6DB6DB7LL * ((__int64)(v33 - v32) >> 4));
    v91 = v130;
    if (v130 != 0) {
      v92 = v131;
      if (v130 == v131) {
        goto LABEL_166;
      }
      do {
        v92 -= 232;
        GameRoutine_f7d4a0(v92);
      } while (v92 != v91);
      if (v130 != 0) {
      LABEL_166:
        v93 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v93 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v93);
      }
    }
    if (v32 != 0) {
      for (; v33 != v32; v33 -= 112LL) {
        if (*(_BYTE*)(v33 - 24) == 1 && (*(_BYTE*)(v33 - 48) & 1) != 0 &&
            *(_QWORD*)(v33 - 32) != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v94 = 128;
          }
          else {
            v94 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v94);
        }
        if (*(_BYTE*)(v33 - 56) == 1 && (*(_BYTE*)(v33 - 80) & 1) != 0 &&
            *(_QWORD*)(v33 - 64) != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v95 = 128;
          }
          else {
            v95 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v95);
        }
      }
      v96 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v96 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v96);
    }
    v2 = (__int64*)*v113;
    goto LABEL_191;
  }
  v22 = *(unsigned __int8*)(v6 + 32);
  v23 = (v22 & 1) == 0;
  v24 = v22 >> 1;
  if (v23) {
    v25 = v24;
  }
  else {
    v25 = *(_QWORD*)(v6 + 40);
  }
  if (v23) {
    v26 = v6 + 33;
  }
  else {
    v26 = *(_QWORD*)(v6 + 48);
  }
  if (v25 >= v11) {
    v27 = v11;
  }
  else {
    v27 = v25;
  }
  v28 = memcmp(v10, v26, v27);
  if (v28 != 0) {
    if (v28 >= 0) {
      v29 = (_QWORD*)v6;
    }
    else {
      v29 = v3;
    }
  }
  else if (v11 >= v25) {
    v29 = (_QWORD*)v6;
  }
  else {
    v29 = v3;
  }
  a1 = v114;
  if (v3 == v29) {
    goto LABEL_50;
  }
LABEL_191:
  if (v2 == nullptr) {
  LABEL_217:
    String_60a250("map::at:  key not found");
  }
  v97 = *v4;
  v98 = (v97 & 1) == 0;
  v99 = v97 >> 1;
  if (v98) {
    v100 = v4 + 1;
  }
  else {
    v100 = *((unsigned __int8**)v4 + 2);
  }
  if (v98) {
    v101 = v99;
  }
  else {
    v101 = *((_QWORD*)v4 + 1);
  }
  while (1) {
    while (1) {
      v102 = *((unsigned __int8*)v2 + 32);
      v103 = (v102 & 1) == 0;
      v104 = v102 >> 1;
      v105 = v103 ? v104 : v2[5];
      v106 = v103 ? (__int64)v2 + 33 : v2[6];
      v107 = v105 >= v101 ? v101 : v105;
      v108 = memcmp(v100, v106, v107);
      if (v108 != 0) {
        break;
      }
      if (v101 >= v105) {
        goto LABEL_212;
      }
    LABEL_198:
      v2 = (__int64*)*v2;
      if (v2 == nullptr) {
        goto LABEL_217;
      }
    }
    if (v108 < 0) {
      goto LABEL_198;
    }
  LABEL_212:
    v109 = memcmp(v106, v100, v107);
    if (v109 != 0) {
      if ((v109 & 0x80000000) == 0) {
        return v2 + 7;
      }
      goto LABEL_216;
    }
    if (v105 >= v101) {
      return v2 + 7;
    }
  LABEL_216:
    v2 = (__int64*)v2[1];
    if (v2 == nullptr) {
      goto LABEL_217;
    }
  }
}

__attribute__((swiftcall)) void game_hub_f77fc0(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2, char a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  int v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char v46;
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
  char v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  char v66;
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
  char v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  int* v81;
  int v82;
  int v83;
  __int64 v85;
  int v86;
  bool v87;
  bool v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 i;
  __int64 v93;
  __int64 v94;
  long double v95;
  __int64 v96;
  __int64 v97;
  char v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  char v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  char v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  __int64* v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __n128 v126;
  char* v127;
  char* v128;
  char* v129;
  char* v130;
  __int64 v131;
  char* v132;
  __int64 v133;
  __int64 v134;
  int v135;
  __int64 v136;
  char v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  char v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  char v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  char v165;
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
  unsigned __int64 v178;
  unsigned __int64 v179;
  __int64 v180;
  __int64 v181;
  unsigned __int64 v182;
  unsigned __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  char v196;
  __int64 v197;
  __int64 v198;
  int v199;
  _QWORD* v200;
  _QWORD* v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  _QWORD* v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  char v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  char v224;
  __int64 v225;
  __int64 v226;
  char* j;
  __int64 v228;
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
  __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  char v244;
  __int64 v245;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64* v252;
  __int64 v253;
  __int64 v254;
  unsigned __int64 v255;
  __int64 v256;
  unsigned __int64 v257;
  __int64 v258;
  char* v259;
  unsigned __int64 v260;
  __int64 v261;
  unsigned __int64 v262;
  unsigned __int64 v263;
  __int64 v264;
  char* v265;
  __int64 v266;
  __int64 v267;
  char v268;
  __int64 v269;
  char v270;
  int v271;
  char v272;
  char v273;
  __int64 v274;
  char v275;
  char v276;
  __int64 v277;
  char v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  char v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  __int16 v288;
  _QWORD v289[4];

  v4 = a4;
  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  v6 = a1[1];
  v5 = a1[2];
  v262 = 0;
  v263 = 0;
  v261 = 0;
  v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v252 = v4;
  v248 = v5;
  if (v6 == v5) {
    v79 = a1;
    v10 = 0;
    goto LABEL_163;
  }
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do {
    v12 = (game_hub_f7be00_alt1((void*)(&v264), a2, v6), (void*)(&v264));
    v13 = v264;
    if ((char*)v264 == v265) {
      if (v264 == 0) {
        goto LABEL_8;
      }
    }
    else {
      v249 = v6;
      v14 = v264;
      v253 = v264;
      v259 = v265;
      do {
        if (v10 < v8) {
          v12 = (_QWORD*)GameRoutine_f7e2a0(v10, v14);
          v10 += 232LL;
        }
        else {
          v16 = v10 - v9;
          v17 = 0x34F72C234F72C235LL * ((__int64)(v10 - v9) >> 3) + 1;
          if (v17 > 0x11A7B9611A7B961LL) {
          LABEL_598:
            GameRoutine_f7e4a0(v12);
          }
          if (0x69EE58469EE5846ALL * ((__int64)(v8 - v9) >> 3) > v17) {
            v17 = 0x69EE58469EE5846ALL * ((__int64)(v8 - v9) >> 3);
          }
          if ((unsigned __int64)(0x34F72C234F72C235LL *
                                 ((__int64)(v8 - v9) >> 3)) >=
              0x8D3DCB08D3DCB0LL) {
            v18 = 0x11A7B9611A7B961LL;
          }
          else {
            v18 = v17;
          }
          v257 = v18;
          if (v18 != 0) {
            if (v18 > 0x11A7B9611A7B961LL) {
            LABEL_599:
              GameRoutine_60a210(v12);
            }
            v19 = fw_memory_HeapManager_Allocate(*v7, 232 * v18, 16, 0);
          }
          else {
            v19 = 0;
          }
          v255 = v19 + v16;
          v12 = (_QWORD*)GameRoutine_f7e2a0(v19 + v16, v14);
          if (v9 != v10) {
            v20 = 0;
            do {
              v25 = v9 + v20;
              v26 = v19 + v20;
              v27 = *(_QWORD*)(v9 + v20);
              v28 = *(_BYTE*)(v9 + v20 + 8);
              *(_BYTE*)(v26 + 64) = 0;
              *(_BYTE*)(v26 + 8) = v28;
              *(_QWORD*)v26 = v27;
              *(_BYTE*)(v19 + v20 + 16) = 0;
              if (*(_BYTE*)(v9 + v20 + 64) == 1) {
                *(_QWORD*)(v19 + v20 + 24) = 0;
                *(_QWORD*)(v19 + v20 + 32) = 0;
                *(_QWORD*)(v19 + v20 + 16) = 0;
                *(_QWORD*)(v26 + 16) = *(_QWORD*)(v25 + 16);
                *(_QWORD*)(v26 + 24) = *(_QWORD*)(v25 + 24);
                *(_QWORD*)(v26 + 32) = *(_QWORD*)(v25 + 32);
                *(_QWORD*)(v25 + 24) = 0;
                *(_QWORD*)(v25 + 32) = 0;
                *(_QWORD*)(v25 + 16) = 0;
                v29 = *(_QWORD*)(v25 + 40);
                v30 = *(_QWORD*)(v25 + 56);
                *(_QWORD*)(v26 + 48) = *(_QWORD*)(v25 + 48);
                *(_QWORD*)(v26 + 56) = v30;
                *(_QWORD*)(v26 + 40) = v29;
                *(_QWORD*)(v25 + 48) = 0;
                *(_QWORD*)(v25 + 56) = 0;
                *(_QWORD*)(v25 + 40) = 0;
                *(_BYTE*)(v26 + 64) = 1;
              }
              v31 = *(_DWORD*)(v25 + 72);
              *(_BYTE*)(v26 + 80) = 0;
              *(_BYTE*)(v26 + 112) = 0;
              *(_DWORD*)(v26 + 72) = v31;
              if (*(_BYTE*)(v25 + 112) == 1) {
                v32 = (_QWORD*)(v9 + v20);
                *(_BYTE*)(v26 + 80) = *(_BYTE*)(v9 + v20 + 80);
                v33 = (_QWORD*)(v19 + v20);
                v34 = *(_QWORD*)(v9 + v20 + 88);
                v35 = *(_QWORD*)(v9 + v20 + 104);
                v33[12] = *(_QWORD*)(v9 + v20 + 96);
                v33[13] = v35;
                v33[11] = v34;
                v32[12] = 0;
                v32[13] = 0;
                v32[11] = 0;
                *(_BYTE*)(v26 + 112) = 1;
              }
              v36 = v19 + v20;
              *(_BYTE*)(v19 + v20 + 120) = 0;
              *(_BYTE*)(v19 + v20 + 144) = 0;
              if (*(_BYTE*)(v25 + 144) == 1) {
                v37 = (_QWORD*)(v9 + v20);
                v38 = *(_QWORD*)(v9 + v20 + 120);
                v39 = *(_QWORD*)(v9 + v20 + 136);
                *(_QWORD*)(v19 + v20 + 128) = *(_QWORD*)(v9 + v20 + 128);
                *(_QWORD*)(v19 + v20 + 136) = v39;
                *(_QWORD*)(v19 + v20 + 120) = v38;
                v37[16] = 0;
                v37[17] = 0;
                v37[15] = 0;
                *(_BYTE*)(v36 + 144) = 1;
              }
              v20 += 232;
              *(_QWORD*)(v36 + 152) = *(_QWORD*)(v25 + 152);
              v21 = *(_QWORD*)(v25 + 160);
              v22 = *(_QWORD*)(v25 + 176);
              *(_QWORD*)(v36 + 168) = *(_QWORD*)(v25 + 168);
              *(_QWORD*)(v36 + 176) = v22;
              *(_QWORD*)(v36 + 160) = v21;
              *(_QWORD*)(v25 + 168) = 0;
              *(_QWORD*)(v25 + 176) = 0;
              *(_QWORD*)(v25 + 160) = 0;
              v23 = *(_QWORD*)(v25 + 184);
              v24 = *(_QWORD*)(v25 + 192);
              *(_QWORD*)(v36 + 200) = 0;
              *(_QWORD*)(v36 + 208) = 0;
              *(_QWORD*)(v36 + 216) = 0;
              *(_QWORD*)(v36 + 184) = v23;
              *(_QWORD*)(v36 + 192) = v24;
              *(_QWORD*)(v36 + 200) = *(_QWORD*)(v25 + 200);
              *(_QWORD*)(v36 + 208) = *(_QWORD*)(v25 + 208);
              *(_QWORD*)(v36 + 216) = *(_QWORD*)(v25 + 216);
              *(_QWORD*)(v25 + 208) = 0;
              *(_QWORD*)(v25 + 216) = 0;
              *(_QWORD*)(v25 + 200) = 0;
              *(_WORD*)(v36 + 224) = *(_WORD*)(v25 + 224);
            } while (v25 + 232 != v10);
            v40 = v9;
            do {
              v43 = *(_QWORD*)(v40 + 200);
              if (v43 != 0) {
                v44 = *(_QWORD*)(v40 + 208);
                if (v43 == v44) {
                  goto LABEL_51;
                }
                v45 = *(_QWORD*)(v40 + 208);
                do {
                  v46 = *(_BYTE*)(v45 - 24);
                  v45 -= 24;
                  if ((v46 & 1) != 0 && *(_QWORD*)(v44 - 8) != 0) {
                    if (*(_QWORD*)(*v7 + 200LL) != 0) {
                      v47 = 128;
                    }
                    else {
                      v47 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v7 + v47);
                  }
                  v44 = v45;
                } while (v45 != v43);
                v48 = *(_QWORD*)(v40 + 200);
                *(_QWORD*)(v40 + 208) = v43;
                if (v48 != 0) {
                LABEL_51:
                  if (*(_QWORD*)(*v7 + 200LL) != 0) {
                    v49 = 128;
                  }
                  else {
                    v49 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v7 + v49);
                }
              }
              if ((*(_BYTE*)(v40 + 160) & 1) != 0 &&
                  *(_QWORD*)(v40 + 176) != 0) {
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v50 = 128;
                }
                else {
                  v50 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v50);
              }
              if (*(_BYTE*)(v40 + 144) == 1 &&
                  (*(_BYTE*)(v40 + 120) & 1) != 0 &&
                  *(_QWORD*)(v40 + 136) != 0) {
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v51 = 128;
                }
                else {
                  v51 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v51);
              }
              if (*(_BYTE*)(v40 + 112) == 1 && (*(_BYTE*)(v40 + 88) & 1) != 0 &&
                  *(_QWORD*)(v40 + 104) != 0) {
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v52 = 128;
                }
                else {
                  v52 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v52);
              }
              if (*(_BYTE*)(v40 + 64) == 1) {
                if ((*(_BYTE*)(v40 + 40) & 1) != 0 &&
                    *(_QWORD*)(v40 + 56) != 0) {
                  if (*(_QWORD*)(*v7 + 200LL) != 0) {
                    v53 = 128;
                  }
                  else {
                    v53 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v7 + v53);
                }
                v54 = *(_QWORD*)(v40 + 16);
                if (v54 != 0) {
                  v55 = *(_QWORD*)(v40 + 24);
                  if (v54 == v55) {
                    goto LABEL_35;
                  }
                  v56 = *(_QWORD*)(v40 + 24);
                  do {
                    v57 = *(_BYTE*)(v56 - 24);
                    v56 -= 24;
                    if ((v57 & 1) != 0 && *(_QWORD*)(v55 - 8) != 0) {
                      if (*(_QWORD*)(*v7 + 200LL) != 0) {
                        v58 = 128;
                      }
                      else {
                        v58 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v7 + v58);
                    }
                    v55 = v56;
                  } while (v56 != v54);
                  v41 = *(_QWORD*)(v40 + 16);
                  *(_QWORD*)(v40 + 24) = v54;
                  if (v41 != 0) {
                  LABEL_35:
                    if (*(_QWORD*)(*v7 + 200LL) != 0) {
                      v42 = 128;
                    }
                    else {
                      v42 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v7 + v42);
                  }
                }
              }
              v40 += 232;
            } while (v40 != v10);
          }
          v8 = v19 + 232 * v257;
          v10 = v255 + 232;
          if (v9 != 0) {
            if (*(_QWORD*)(*v7 + 200LL) != 0) {
              v59 = 128;
            }
            else {
              v59 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v59);
          }
          v9 = v19;
          v13 = v253;
        }
        v15 = v259;
        v14 += 232;
      } while ((char*)v14 != v259);
      v263 = v8;
      if (v13 == 0) {
        v6 = v249;
        goto LABEL_8;
      }
      do {
        v62 = *((_QWORD*)v15 - 4);
        v63 = v15;
        if (v62 != 0) {
          v64 = *((_QWORD*)v15 - 3);
          if (v62 == v64) {
            goto LABEL_117;
          }
          v65 = *((_QWORD*)v15 - 3);
          do {
            v66 = *(_BYTE*)(v65 - 24);
            v65 -= 24;
            if ((v66 & 1) != 0 && *(_QWORD*)(v64 - 8) != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v67 = 128;
              }
              else {
                v67 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v67);
            }
            v64 = v65;
          } while (v65 != v62);
          v68 = *((_QWORD*)v63 - 4);
          v13 = v253;
          v15 = v63;
          *((_QWORD*)v63 - 3) = v62;
          if (v68 != 0) {
          LABEL_117:
            if (*(_QWORD*)(*v7 + 200LL) != 0) {
              v69 = 128;
            }
            else {
              v69 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v69);
            v15 = v63;
          }
        }
        if ((*(v15 - 72) & 1) != 0 && *((_QWORD*)v15 - 7) != 0) {
          if (*(_QWORD*)(*v7 + 200LL) != 0) {
            v70 = 128;
          }
          else {
            v70 = 56;
          }
          nn_mem_StandardAllocator_Free(*v7 + v70);
          v15 = v63;
        }
        if (*(v15 - 88) == 1 && (*(v15 - 112) & 1) != 0 &&
            *((_QWORD*)v15 - 12) != 0) {
          if (*(_QWORD*)(*v7 + 200LL) != 0) {
            v71 = 128;
          }
          else {
            v71 = 56;
          }
          nn_mem_StandardAllocator_Free(*v7 + v71);
          v15 = v63;
        }
        if (*(v15 - 120) == 1 && (*(v15 - 144) & 1) != 0 &&
            *((_QWORD*)v15 - 16) != 0) {
          if (*(_QWORD*)(*v7 + 200LL) != 0) {
            v72 = 128;
          }
          else {
            v72 = 56;
          }
          nn_mem_StandardAllocator_Free(*v7 + v72);
          v15 = v63;
        }
        if (*(v15 - 168) == 1) {
          if ((*(v15 - 192) & 1) != 0 && *((_QWORD*)v15 - 22) != 0) {
            if (*(_QWORD*)(*v7 + 200LL) != 0) {
              v73 = 128;
            }
            else {
              v73 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v73);
            v15 = v63;
          }
          v74 = *((_QWORD*)v15 - 27);
          if (v74 != 0) {
            v75 = *((_QWORD*)v15 - 26);
            if (v74 == v75) {
              goto LABEL_101;
            }
            v76 = *((_QWORD*)v15 - 26);
            do {
              v77 = *(_BYTE*)(v76 - 24);
              v76 -= 24;
              if ((v77 & 1) != 0 && *(_QWORD*)(v75 - 8) != 0) {
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v78 = 128;
                }
                else {
                  v78 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v78);
              }
              v75 = v76;
            } while (v76 != v74);
            v60 = *((_QWORD*)v63 - 27);
            v13 = v253;
            v15 = v63;
            *((_QWORD*)v63 - 26) = v74;
            if (v60 != 0) {
            LABEL_101:
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v61 = 128;
              }
              else {
                v61 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v61);
              v15 = v63;
            }
          }
        }
        v15 -= 232;
      } while ((char*)v13 != v15);
      v6 = v249;
    }
    if (*(_QWORD*)(*v7 + 200LL) != 0) {
      v11 = 128;
    }
    else {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*v7 + v11);
  LABEL_8:
    v6 += 160;
  } while (v6 != v248);
  v261 = v9;
  v262 = v10;
  if (v10 == v9) {
    v79 = a1;
    v4 = v252;
    v91 = a1[1];
    v90 = a1[2];
    if (v90 != v91) {
      for (i = 0; 0xCCCCCCCCCCCCCCCDLL * ((v90 - v91) >> 5) > i; ++i) {
        v93 = v91 + 160 * i;
        if (*(_BYTE*)(v93 + 64) == 1) {
          v94 = *(_QWORD*)(v93 + 16);
          if (*(_QWORD*)(v93 + 24) != v94) {
            BYTE3(v264) = 0;
            LOBYTE(v264) = 4;
            *(_WORD*)((char*)&v264 + 1) = 12609;
            LocatorDispos_db2180((void*)(v289), v94, &v264);
            if ((v264 & 1) != 0 && v266 != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v96 = 128;
              }
              else {
                v96 = 56;
              }
              *(__n128*)&v95 = nn_mem_StandardAllocator_Free(*v7 + v96);
            }
            v264 = 0;
            LOBYTE(v265) = 0;
            LOBYTE(v266) = 0;
            v270 = 0;
            v271 = 0;
            v272 = 0;
            v284 = 1;
            v97 = v79[1] + 160 * i;
            v275 = 0;
            v276 = 0;
            v278 = 0;
            v279 = 0;
            v280 = 0;
            v281 = 0;
            v282 = 0;
            v283 = 0;
            v285 = 0;
            v286 = 0;
            v287 = 0;
            v288 = 0;
            v98 = GameRoutine_f7c340(&v264, a2, v289, 0, 0, v97, v95);
            if ((v98 & 1) != 0) {
              if (v10 >= v263) {
                v10 = GameRoutine_f7dfc0(&v261, &v264);
              }
              else {
                GameRoutine_f7e2a0(v10, &v264);
                v10 += 232LL;
              }
              v262 = v10;
            }
            v99 = v285;
            if (v285 != 0) {
              v100 = v286;
              if (v285 == v286) {
                goto LABEL_218;
              }
              v101 = v286;
              do {
                v102 = *(_BYTE*)(v101 - 24);
                v101 -= 24;
                if ((v102 & 1) != 0 && *(_QWORD*)(v100 - 8) != 0) {
                  if (*(_QWORD*)(*v7 + 200LL) != 0) {
                    v103 = 128;
                  }
                  else {
                    v103 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v7 + v103);
                }
                v100 = v101;
              } while (v101 != v99);
              v79 = a1;
              v286 = v99;
              if (v285 != 0) {
              LABEL_218:
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v104 = 128;
                }
                else {
                  v104 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v104);
              }
            }
            if ((v280 & 1) != 0 && v282 != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v105 = 128;
              }
              else {
                v105 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v105);
            }
            if (v278 == 1 && (v276 & 1) != 0 && v277 != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v106 = 128;
              }
              else {
                v106 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v106);
            }
            if (v275 == 1 && (v273 & 1) != 0 && v274 != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v107 = 128;
              }
              else {
                v107 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v107);
            }
            if (v270 == 1) {
              if ((v268 & 1) != 0 && v269 != 0) {
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v108 = 128;
                }
                else {
                  v108 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v108);
              }
              v109 = v266;
              if (v266 != 0) {
                v110 = v267;
                if (v266 == v267) {
                  goto LABEL_260;
                }
                v111 = v267;
                do {
                  v112 = *(_BYTE*)(v111 - 24);
                  v111 -= 24;
                  if ((v112 & 1) != 0 && *(_QWORD*)(v110 - 8) != 0) {
                    if (*(_QWORD*)(*v7 + 200LL) != 0) {
                      v113 = 128;
                    }
                    else {
                      v113 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v7 + v113);
                  }
                  v110 = v111;
                } while (v111 != v109);
                v79 = a1;
                v267 = v109;
                if (v266 != 0) {
                LABEL_260:
                  if (*(_QWORD*)(*v7 + 200LL) != 0) {
                    v114 = 128;
                  }
                  else {
                    v114 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v7 + v114);
                }
              }
            }
            if ((v289[0] & 1) != 0 && v289[2] != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v115 = 128;
              }
              else {
                v115 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v115);
            }
            v4 = v252;
            if ((v98 & 1) != 0) {
              break;
            }
            v91 = v79[1];
            v90 = v79[2];
          }
        }
      }
    }
  }
  else {
    v4 = v252;
    v79 = a1;
  }
LABEL_163:
  v80 = *(_QWORD*)(GameData_21f3d10 + 48);
  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) == 0) {
    v80 = *(_BYTE*)(GameData_21f3d10 + 40) >> 1;
  }
  if (v80 != 7) {
    goto LABEL_172;
  }
  v81 = (int*)(GameData_21f3d10 + 41);
  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) != 0) {
    v81 = *(int**)(GameData_21f3d10 + 56);
  }
  v82 = *v81;
  v83 = *(int*)((char*)v81 + 3);
  if (v82 != *(_DWORD*)"Hub_000" || v83 != *(_DWORD*)"_000") {
  LABEL_172:
    if (*(_BYTE*)(GameData_21c9608 + 304) == 1) {
      if ((game_gmap_GmapClock_instance_ != 0 &&
               *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                       *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                       *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                   0 ||
           (v265 = (char*)&GameData_1adebe5,
            v264 = game_HashString_alt1(&GameData_1adebe5),
            game_GameModeData_instance_ != 0) &&
               (v85 = game_GameVariableTable_Find_alt1(
                    *(_QWORD*)(game_GameModeData_instance_ + 48), &v264)) !=
                   0 &&
               *(_DWORD*)(v85 + 32) != 0) &&
          (game_GameModeData_instance_ == 0 ||
           ((v86 = *(_DWORD*)(game_GameModeData_instance_ + 60)) == 1
                ? (v87 = *(_BYTE*)(game_GameModeData_instance_ + 15) == 5)
                : (v87 = false),
            !v87 ? (v88 = v86 == 2) : (v88 = true), !v88))) {
        v89 = v261;
        if (v261 == v10) {
          v4 = v252;
        }
        else {
          v4 = v252;
          while ((*(_BYTE*)(v89 + 224) & 1) == 0) {
            v89 += 232;
            if (v89 == v10) {
              goto LABEL_285;
            }
          }
        }
        if (v89 == v10) {
          v117 = v10;
        }
        else {
          v116 = v89 + 232;
          if (v89 + 232 == v10) {
            v117 = v10;
          }
          else {
            do {
              if ((*(_BYTE*)(v116 + 224) & 1) == 0) {
                v89 = GameRoutine_f7eac0(v89, v116) + 232;
              }
              v116 += 232;
            } while (v116 != v10);
            v117 = v262;
          }
          v4 = v252;
          if (v89 != v117) {
            v10 = v89;
            do {
              v117 -= 232LL;
              GameRoutine_f7d4a0(v117);
            } while (v117 != v10);
            v262 = v10;
            goto LABEL_284;
          }
        }
        v10 = v117;
      }
      else {
      LABEL_284:
        v4 = v252;
      }
    }
  }
LABEL_285:
  v118 = v261;
  if (v261 != v10) {
    v119 = v4;
    v120 = v4[1];
    do {
      if (v120 >= v119[2]) {
        v120 = GameRoutine_f7dfc0(v119, v118);
      }
      else {
        GameRoutine_f7e2a0(v120, v118);
        v120 += 232LL;
      }
      v118 += 232LL;
      v119[1] = v120;
    } while (v118 != v10);
    v118 = v261;
    v4 = v119;
  }
  if (v118 != 0) {
    v121 = v262;
    if (v118 == v262) {
      v4 = v252;
    }
    else {
      do {
        v121 -= 232LL;
        GameRoutine_f7d4a0(v121);
      } while (v121 != v118);
      v4 = v252;
      v262 = v118;
      if (v261 == 0) {
        goto LABEL_301;
      }
    }
    v122 = 128;
    if (*(_QWORD*)(*v7 + 200LL) == 0) {
      v122 = 56;
    }
    nn_mem_StandardAllocator_Free(*v7 + v122);
  }
LABEL_301:
  v123 = v79[4];
  v250 = v79[5];
  if (v123 != v250) {
    while (2) {
      v12 = (game_hub_f7be00_alt1((void*)(&v264), a2, v123), (void*)(&v264));
      v127 = (char*)v264;
      v128 = v265;
      v254 = v123;
      if ((a3 & 1) != 0) {
        v129 = (char*)v264;
        if ((char*)v264 != v265) {
          v129 = (char*)v264;
          while (v129[225] != 0) {
            v129 += 232;
            if (v129 == v265) {
              v4 = v252;
              goto LABEL_314;
            }
          }
        }
        if (v129 == v265 || (v132 = v129 + 232, v129 + 232 == v265)) {
          v130 = v129;
        }
        else {
          v130 = v129;
          do {
            v135 = (unsigned __int8)v129[457];
            v129 = v132;
            if (v135 != 0) {
              v136 = *(_QWORD*)v132;
              v130[8] = v129[8];
              *(_QWORD*)v130 = v136;
              v12 = (_QWORD*)GameRoutine_f7ee00(v130 + 16, v129 + 16,
                                                *(long double*)&v126);
              *((_DWORD*)v130 + 18) = *((_DWORD*)v129 + 18);
              if (v130[112] == v129[112]) {
                if (v130[112] != 0) {
                  v137 = v130[88];
                  v130[80] = v129[80];
                  if ((v137 & 1) != 0 && *((_QWORD*)v130 + 13) != 0) {
                    if (*(_QWORD*)(*v7 + 200LL) != 0) {
                      v138 = 128;
                    }
                    else {
                      v138 = 56;
                    }
                    v126 = nn_mem_StandardAllocator_Free(*v7 + v138);
                  }
                  v139 = *((_QWORD*)v129 + 11);
                  v140 = *((_QWORD*)v129 + 13);
                  *((_QWORD*)v130 + 12) = *((_QWORD*)v129 + 12);
                  *((_QWORD*)v130 + 13) = v140;
                  *((_QWORD*)v130 + 11) = v139;
                  *((_WORD*)v129 + 44) = 0;
                }
              }
              else if (v130[112] != 0) {
                if ((v130[88] & 1) != 0 && *((_QWORD*)v130 + 13) != 0) {
                  if (*(_QWORD*)(*v7 + 200LL) != 0) {
                    v141 = 128;
                  }
                  else {
                    v141 = 56;
                  }
                  v126 = nn_mem_StandardAllocator_Free(*v7 + v141);
                }
                v130[112] = 0;
              }
              else {
                v130[80] = v129[80];
                v142 = *((_QWORD*)v129 + 12);
                v143 = *((_QWORD*)v129 + 13);
                *((_QWORD*)v130 + 11) = *((_QWORD*)v129 + 11);
                *((_QWORD*)v130 + 12) = v142;
                *((_QWORD*)v130 + 13) = v143;
                *((_QWORD*)v129 + 12) = 0;
                *((_QWORD*)v129 + 13) = 0;
                *((_QWORD*)v129 + 11) = 0;
                v130[112] = 1;
              }
              if (v130[144] == v129[144]) {
                if (v130[144] != 0) {
                  if ((v130[120] & 1) != 0 && *((_QWORD*)v130 + 17) != 0) {
                    if (*(_QWORD*)(*v7 + 200LL) != 0) {
                      v144 = 128;
                    }
                    else {
                      v144 = 56;
                    }
                    v126 = nn_mem_StandardAllocator_Free(*v7 + v144);
                  }
                  v145 = *((_QWORD*)v129 + 15);
                  v146 = *((_QWORD*)v129 + 17);
                  *((_QWORD*)v130 + 16) = *((_QWORD*)v129 + 16);
                  *((_QWORD*)v130 + 17) = v146;
                  *((_QWORD*)v130 + 15) = v145;
                  *((_WORD*)v129 + 60) = 0;
                }
              }
              else if (v130[144] != 0) {
                if ((v130[120] & 1) != 0 && *((_QWORD*)v130 + 17) != 0) {
                  if (*(_QWORD*)(*v7 + 200LL) != 0) {
                    v147 = 128;
                  }
                  else {
                    v147 = 56;
                  }
                  v126 = nn_mem_StandardAllocator_Free(*v7 + v147);
                }
                v130[144] = 0;
              }
              else {
                v148 = *((_QWORD*)v129 + 16);
                v149 = *((_QWORD*)v129 + 17);
                *((_QWORD*)v130 + 15) = *((_QWORD*)v129 + 15);
                *((_QWORD*)v130 + 16) = v148;
                *((_QWORD*)v130 + 17) = v149;
                *((_QWORD*)v129 + 16) = 0;
                *((_QWORD*)v129 + 17) = 0;
                *((_QWORD*)v129 + 15) = 0;
                v130[144] = 1;
              }
              v150 = v130[160];
              *((_QWORD*)v130 + 19) = *((_QWORD*)v129 + 19);
              if ((v150 & 1) != 0 && *((_QWORD*)v130 + 22) != 0) {
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v151 = 128;
                }
                else {
                  v151 = 56;
                }
                v126 = nn_mem_StandardAllocator_Free(*v7 + v151);
              }
              v152 = *((_QWORD*)v129 + 20);
              v153 = *((_QWORD*)v129 + 22);
              *((_QWORD*)v130 + 21) = *((_QWORD*)v129 + 21);
              *((_QWORD*)v130 + 22) = v153;
              *((_QWORD*)v130 + 20) = v152;
              *((_WORD*)v129 + 80) = 0;
              v154 = *((_QWORD*)v129 + 23);
              v155 = *((_QWORD*)v130 + 25);
              v130[192] = v129[192];
              *((_QWORD*)v130 + 23) = v154;
              if (v155 != 0) {
                v156 = *((_QWORD*)v130 + 26);
                if (v155 == v156) {
                  goto LABEL_321;
                }
                v157 = *((_QWORD*)v130 + 26);
                do {
                  v158 = *(_BYTE*)(v157 - 24);
                  v157 -= 24;
                  if ((v158 & 1) != 0 && *(_QWORD*)(v156 - 8) != 0) {
                    if (*(_QWORD*)(*v7 + 200LL) != 0) {
                      v159 = 128;
                    }
                    else {
                      v159 = 56;
                    }
                    v126 = nn_mem_StandardAllocator_Free(*v7 + v159);
                  }
                  v156 = v157;
                } while (v157 != v155);
                v133 = *((_QWORD*)v130 + 25);
                *((_QWORD*)v130 + 26) = v155;
                if (v133 != 0) {
                LABEL_321:
                  if (*(_QWORD*)(*v7 + 200LL) != 0) {
                    v134 = 128;
                  }
                  else {
                    v134 = 56;
                  }
                  v126 = nn_mem_StandardAllocator_Free(*v7 + v134);
                }
                *((_QWORD*)v130 + 26) = 0;
                *((_QWORD*)v130 + 27) = 0;
                *((_QWORD*)v130 + 25) = 0;
              }
              *((_QWORD*)v130 + 25) = *((_QWORD*)v129 + 25);
              *((_QWORD*)v130 + 26) = *((_QWORD*)v129 + 26);
              *((_QWORD*)v130 + 27) = *((_QWORD*)v129 + 27);
              *((_QWORD*)v129 + 26) = 0;
              *((_QWORD*)v129 + 27) = 0;
              *((_QWORD*)v129 + 25) = 0;
              *((_WORD*)v130 + 112) = *((_WORD*)v129 + 112);
              v130 += 232;
            }
            v132 = v129 + 232;
          } while (v129 + 232 != v128);
          v127 = (char*)v264;
          v128 = v265;
        }
        v4 = v252;
        if (v130 == v128) {
          v130 = v128;
          if (v127 == v128) {
            goto LABEL_315;
          }
        }
        else {
          while (v130 != v128) {
            v162 = *((_QWORD*)v128 - 4);
            if (v162 != 0) {
              v163 = *((_QWORD*)v128 - 3);
              if (v162 == v163) {
                goto LABEL_403;
              }
              v164 = *((_QWORD*)v128 - 3);
              do {
                v165 = *(_BYTE*)(v164 - 24);
                v164 -= 24;
                if ((v165 & 1) != 0 && *(_QWORD*)(v163 - 8) != 0) {
                  if (*(_QWORD*)(*v7 + 200LL) != 0) {
                    v166 = 128;
                  }
                  else {
                    v166 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v7 + v166);
                }
                v163 = v164;
              } while (v164 != v162);
              v167 = *((_QWORD*)v128 - 4);
              *((_QWORD*)v128 - 3) = v162;
              if (v167 != 0) {
              LABEL_403:
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v168 = 128;
                }
                else {
                  v168 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v168);
              }
            }
            if ((*(v128 - 72) & 1) != 0 && *((_QWORD*)v128 - 7) != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v169 = 128;
              }
              else {
                v169 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v169);
            }
            if (*(v128 - 88) == 1 && (*(v128 - 112) & 1) != 0 &&
                *((_QWORD*)v128 - 12) != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v170 = 128;
              }
              else {
                v170 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v170);
            }
            if (*(v128 - 120) == 1 && (*(v128 - 144) & 1) != 0 &&
                *((_QWORD*)v128 - 16) != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v171 = 128;
              }
              else {
                v171 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v171);
            }
            if (*(v128 - 168) == 1) {
              if ((*(v128 - 192) & 1) != 0 && *((_QWORD*)v128 - 22) != 0) {
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v172 = 128;
                }
                else {
                  v172 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v172);
              }
              v173 = *((_QWORD*)v128 - 27);
              if (v173 != 0) {
                v174 = *((_QWORD*)v128 - 26);
                if (v173 == v174) {
                  goto LABEL_386;
                }
                v175 = *((_QWORD*)v128 - 26);
                do {
                  v176 = *(_BYTE*)(v175 - 24);
                  v175 -= 24;
                  if ((v176 & 1) != 0 && *(_QWORD*)(v174 - 8) != 0) {
                    if (*(_QWORD*)(*v7 + 200LL) != 0) {
                      v177 = 128;
                    }
                    else {
                      v177 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v7 + v177);
                  }
                  v174 = v175;
                } while (v175 != v173);
                v160 = *((_QWORD*)v128 - 27);
                *((_QWORD*)v128 - 26) = v173;
                if (v160 != 0) {
                LABEL_386:
                  if (*(_QWORD*)(*v7 + 200LL) != 0) {
                    v161 = 128;
                  }
                  else {
                    v161 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v7 + v161);
                }
              }
            }
            v128 -= 232;
          }
          v127 = (char*)v264;
          v4 = v252;
          v265 = v130;
          if ((char*)v264 == v130) {
          LABEL_315:
            v131 = v254;
            if (v127 == nullptr) {
              goto LABEL_307;
            }
          LABEL_535:
            for (j = v265; v127 != j; j -= 232) {
              v230 = *((_QWORD*)j - 4);
              if (v230 != 0) {
                v231 = *((_QWORD*)j - 3);
                if (v230 == v231) {
                  goto LABEL_554;
                }
                v232 = *((_QWORD*)j - 3);
                do {
                  v233 = *(_BYTE*)(v232 - 24);
                  v232 -= 24;
                  if ((v233 & 1) != 0 && *(_QWORD*)(v231 - 8) != 0) {
                    if (*(_QWORD*)(*v7 + 200LL) != 0) {
                      v234 = 128;
                    }
                    else {
                      v234 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v7 + v234);
                  }
                  v231 = v232;
                } while (v232 != v230);
                v235 = *((_QWORD*)j - 4);
                *((_QWORD*)j - 3) = v230;
                if (v235 != 0) {
                LABEL_554:
                  if (*(_QWORD*)(*v7 + 200LL) != 0) {
                    v236 = 128;
                  }
                  else {
                    v236 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v7 + v236);
                }
              }
              if ((*(j - 72) & 1) != 0 && *((_QWORD*)j - 7) != 0) {
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v237 = 128;
                }
                else {
                  v237 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v237);
              }
              if (*(j - 88) == 1 && (*(j - 112) & 1) != 0 &&
                  *((_QWORD*)j - 12) != 0) {
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v238 = 128;
                }
                else {
                  v238 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v238);
              }
              if (*(j - 120) == 1 && (*(j - 144) & 1) != 0 &&
                  *((_QWORD*)j - 16) != 0) {
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v239 = 128;
                }
                else {
                  v239 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v239);
              }
              if (*(j - 168) == 1) {
                if ((*(j - 192) & 1) != 0 && *((_QWORD*)j - 22) != 0) {
                  if (*(_QWORD*)(*v7 + 200LL) != 0) {
                    v240 = 128;
                  }
                  else {
                    v240 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v7 + v240);
                }
                v241 = *((_QWORD*)j - 27);
                if (v241 != 0) {
                  v242 = *((_QWORD*)j - 26);
                  if (v241 == v242) {
                    goto LABEL_537;
                  }
                  v243 = *((_QWORD*)j - 26);
                  do {
                    v244 = *(_BYTE*)(v243 - 24);
                    v243 -= 24;
                    if ((v244 & 1) != 0 && *(_QWORD*)(v242 - 8) != 0) {
                      if (*(_QWORD*)(*v7 + 200LL) != 0) {
                        v245 = 128;
                      }
                      else {
                        v245 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v7 + v245);
                    }
                    v242 = v243;
                  } while (v243 != v241);
                  v228 = *((_QWORD*)j - 27);
                  *((_QWORD*)j - 26) = v241;
                  if (v228 != 0) {
                  LABEL_537:
                    if (*(_QWORD*)(*v7 + 200LL) != 0) {
                      v229 = 128;
                    }
                    else {
                      v229 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v7 + v229);
                  }
                }
              }
            }
            v124 = *v7;
            v265 = v127;
            if (*(_QWORD*)(v124 + 200) != 0) {
              v125 = 128;
            }
            else {
              v125 = 56;
            }
            nn_mem_StandardAllocator_Free(v124 + v125);
            v4 = v252;
          LABEL_307:
            v123 = v131 + 160;
            if (v123 == v250) {
              return;
            }
            continue;
          }
        }
      }
      else {
      LABEL_314:
        v130 = v265;
        if ((char*)v264 == v265) {
          goto LABEL_315;
        }
      }
      break;
    }
    v178 = v4[1];
    do {
      v179 = v4[2];
      if (v178 < v179) {
        v12 = (_QWORD*)GameRoutine_f7e2a0(v178, v127);
        v178 += 232LL;
      }
      else {
        v180 = *v4;
        v181 = v178 - *v4;
        v182 = 0x34F72C234F72C235LL * (v181 >> 3) + 1;
        if (v182 > 0x11A7B9611A7B961LL) {
          goto LABEL_598;
        }
        v183 = 0x34F72C234F72C235LL * ((__int64)(v179 - v180) >> 3);
        if (2 * v183 > v182) {
          v182 = 2 * v183;
        }
        if (v183 >= 0x8D3DCB08D3DCB0LL) {
          v182 = 0x11A7B9611A7B961LL;
        }
        v260 = v182;
        if (v182 != 0) {
          if (v182 > 0x11A7B9611A7B961LL) {
            goto LABEL_599;
          }
          v184 = fw_memory_HeapManager_Allocate(*v7, 232 * v182, 16, 0);
        }
        else {
          v184 = 0;
        }
        v185 = v184 + v181;
        v258 = v184;
        v12 = (_QWORD*)GameRoutine_f7e2a0(v184 + v181, v127);
        v4 = v252;
        v256 = v185;
        v186 = *v252;
        v187 = v185 + *v252 - v178;
        if (v178 != *v252) {
          v188 = 0;
          do {
            v193 = v186 + v188;
            v194 = v187 + v188;
            v195 = *(_QWORD*)(v186 + v188);
            v196 = *(_BYTE*)(v186 + v188 + 8);
            *(_BYTE*)(v194 + 64) = 0;
            *(_BYTE*)(v194 + 8) = v196;
            *(_QWORD*)v194 = v195;
            *(_BYTE*)(v187 + v188 + 16) = 0;
            if (*(_BYTE*)(v186 + v188 + 64) == 1) {
              *(_QWORD*)(v187 + v188 + 24) = 0;
              *(_QWORD*)(v187 + v188 + 32) = 0;
              *(_QWORD*)(v187 + v188 + 16) = 0;
              *(_QWORD*)(v194 + 16) = *(_QWORD*)(v193 + 16);
              *(_QWORD*)(v194 + 24) = *(_QWORD*)(v193 + 24);
              *(_QWORD*)(v194 + 32) = *(_QWORD*)(v193 + 32);
              *(_QWORD*)(v193 + 24) = 0;
              *(_QWORD*)(v193 + 32) = 0;
              *(_QWORD*)(v193 + 16) = 0;
              v197 = *(_QWORD*)(v193 + 40);
              v198 = *(_QWORD*)(v193 + 56);
              *(_QWORD*)(v194 + 48) = *(_QWORD*)(v193 + 48);
              *(_QWORD*)(v194 + 56) = v198;
              *(_QWORD*)(v194 + 40) = v197;
              *(_QWORD*)(v193 + 48) = 0;
              *(_QWORD*)(v193 + 56) = 0;
              *(_QWORD*)(v193 + 40) = 0;
              *(_BYTE*)(v194 + 64) = 1;
            }
            v199 = *(_DWORD*)(v193 + 72);
            *(_BYTE*)(v194 + 80) = 0;
            *(_BYTE*)(v194 + 112) = 0;
            *(_DWORD*)(v194 + 72) = v199;
            if (*(_BYTE*)(v193 + 112) == 1) {
              v200 = (_QWORD*)(v186 + v188);
              *(_BYTE*)(v194 + 80) = *(_BYTE*)(v186 + v188 + 80);
              v201 = (_QWORD*)(v187 + v188);
              v202 = *(_QWORD*)(v186 + v188 + 88);
              v203 = *(_QWORD*)(v186 + v188 + 104);
              v201[12] = *(_QWORD*)(v186 + v188 + 96);
              v201[13] = v203;
              v201[11] = v202;
              v200[12] = 0;
              v200[13] = 0;
              v200[11] = 0;
              *(_BYTE*)(v194 + 112) = 1;
            }
            v204 = v187 + v188;
            *(_BYTE*)(v187 + v188 + 120) = 0;
            *(_BYTE*)(v187 + v188 + 144) = 0;
            if (*(_BYTE*)(v193 + 144) == 1) {
              v205 = (_QWORD*)(v186 + v188);
              v206 = *(_QWORD*)(v186 + v188 + 120);
              v207 = *(_QWORD*)(v186 + v188 + 136);
              *(_QWORD*)(v187 + v188 + 128) = *(_QWORD*)(v186 + v188 + 128);
              *(_QWORD*)(v187 + v188 + 136) = v207;
              *(_QWORD*)(v187 + v188 + 120) = v206;
              v205[16] = 0;
              v205[17] = 0;
              v205[15] = 0;
              *(_BYTE*)(v204 + 144) = 1;
            }
            v188 += 232;
            *(_QWORD*)(v204 + 152) = *(_QWORD*)(v193 + 152);
            v189 = *(_QWORD*)(v193 + 160);
            v190 = *(_QWORD*)(v193 + 176);
            *(_QWORD*)(v204 + 168) = *(_QWORD*)(v193 + 168);
            *(_QWORD*)(v204 + 176) = v190;
            *(_QWORD*)(v204 + 160) = v189;
            *(_QWORD*)(v193 + 168) = 0;
            *(_QWORD*)(v193 + 176) = 0;
            *(_QWORD*)(v193 + 160) = 0;
            v191 = *(_QWORD*)(v193 + 184);
            v192 = *(_QWORD*)(v193 + 192);
            *(_QWORD*)(v204 + 200) = 0;
            *(_QWORD*)(v204 + 208) = 0;
            *(_QWORD*)(v204 + 216) = 0;
            *(_QWORD*)(v204 + 184) = v191;
            *(_QWORD*)(v204 + 192) = v192;
            *(_QWORD*)(v204 + 200) = *(_QWORD*)(v193 + 200);
            *(_QWORD*)(v204 + 208) = *(_QWORD*)(v193 + 208);
            *(_QWORD*)(v204 + 216) = *(_QWORD*)(v193 + 216);
            *(_QWORD*)(v193 + 208) = 0;
            *(_QWORD*)(v193 + 216) = 0;
            *(_QWORD*)(v193 + 200) = 0;
            *(_WORD*)(v204 + 224) = *(_WORD*)(v193 + 224);
          } while (v193 + 232 != v178);
          do {
            v210 = *(_QWORD*)(v186 + 200);
            if (v210 != 0) {
              v211 = *(_QWORD*)(v186 + 208);
              if (v210 == v211) {
                goto LABEL_486;
              }
              v212 = *(_QWORD*)(v186 + 208);
              do {
                v213 = *(_BYTE*)(v212 - 24);
                v212 -= 24;
                if ((v213 & 1) != 0 && *(_QWORD*)(v211 - 8) != 0) {
                  if (*(_QWORD*)(*v7 + 200LL) != 0) {
                    v214 = 128;
                  }
                  else {
                    v214 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v7 + v214);
                }
                v211 = v212;
              } while (v212 != v210);
              v215 = *(_QWORD*)(v186 + 200);
              *(_QWORD*)(v186 + 208) = v210;
              if (v215 != 0) {
              LABEL_486:
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v216 = 128;
                }
                else {
                  v216 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v216);
              }
            }
            if ((*(_BYTE*)(v186 + 160) & 1) != 0 &&
                *(_QWORD*)(v186 + 176) != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v217 = 128;
              }
              else {
                v217 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v217);
            }
            if (*(_BYTE*)(v186 + 144) == 1 &&
                (*(_BYTE*)(v186 + 120) & 1) != 0 &&
                *(_QWORD*)(v186 + 136) != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v218 = 128;
              }
              else {
                v218 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v218);
            }
            if (*(_BYTE*)(v186 + 112) == 1 && (*(_BYTE*)(v186 + 88) & 1) != 0 &&
                *(_QWORD*)(v186 + 104) != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v219 = 128;
              }
              else {
                v219 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v219);
            }
            if (*(_BYTE*)(v186 + 64) == 1) {
              if ((*(_BYTE*)(v186 + 40) & 1) != 0 &&
                  *(_QWORD*)(v186 + 56) != 0) {
                if (*(_QWORD*)(*v7 + 200LL) != 0) {
                  v220 = 128;
                }
                else {
                  v220 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v220);
              }
              v221 = *(_QWORD*)(v186 + 16);
              if (v221 != 0) {
                v222 = *(_QWORD*)(v186 + 24);
                if (v221 == v222) {
                  goto LABEL_470;
                }
                v223 = *(_QWORD*)(v186 + 24);
                do {
                  v224 = *(_BYTE*)(v223 - 24);
                  v223 -= 24;
                  if ((v224 & 1) != 0 && *(_QWORD*)(v222 - 8) != 0) {
                    if (*(_QWORD*)(*v7 + 200LL) != 0) {
                      v225 = 128;
                    }
                    else {
                      v225 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v7 + v225);
                  }
                  v222 = v223;
                } while (v223 != v221);
                v208 = *(_QWORD*)(v186 + 16);
                *(_QWORD*)(v186 + 24) = v221;
                if (v208 != 0) {
                LABEL_470:
                  if (*(_QWORD*)(*v7 + 200LL) != 0) {
                    v209 = 128;
                  }
                  else {
                    v209 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v7 + v209);
                }
              }
            }
            v186 += 232;
          } while (v186 != v178);
          v4 = v252;
          v186 = *v252;
        }
        *v4 = v187;
        v4[2] = v258 + 232 * v260;
        v178 = v256 + 232;
        if (v186 != 0) {
          if (*(_QWORD*)(*v7 + 200LL) != 0) {
            v226 = 128;
          }
          else {
            v226 = 56;
          }
          nn_mem_StandardAllocator_Free(*v7 + v226);
        }
      }
      v127 += 232;
      v4[1] = v178;
    } while (v127 != v130);
    v127 = (char*)v264;
    v131 = v254;
    if (v264 != 0) {
      goto LABEL_535;
    }
    goto LABEL_307;
  }
}

__int64* game_hub_f79e00(_QWORD* a1, unsigned __int8* a2)
{
  __int64* v2;
  _QWORD* v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  bool v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  int v18;
  int v19;
  bool v20;
  __int64 v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  int v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  _QWORD* v70;
  unsigned __int64 v71;
  bool v72;
  unsigned __int64 v73;
  char* v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  bool v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  int v83;
  _QWORD* v84;
  _QWORD* v85;
  __int64 v86;
  _QWORD* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  bool v96;
  unsigned __int64 v97;
  unsigned __int8* v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  bool v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  int v106;
  int v107;
  _QWORD* v109;
  _QWORD* v110;
  _QWORD* v111;
  __int64 v112;
  int v113;
  char v114[8];
  __int64 v115;
  __int64 v116;
  __int64 v117;
  char v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  unsigned __int8 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;

  v3 = a1 + 11;
  v2 = (__int64*)a1[11];
  v4 = a2;
  v111 = a1;
  if (v2 == nullptr) {
    goto LABEL_50;
  }
  v5 = *a2;
  v6 = a1 + 11;
  v7 = a1[11];
  v8 = (v5 & 1) == 0;
  v9 = v5 >> 1;
  v10 = v8 ? (__int64)(a2 + 1) : *((_QWORD*)a2 + 2);
  v11 = v8 ? v9 : *((_QWORD*)a2 + 1);
  do {
    v12 = *(unsigned __int8*)(v7 + 32);
    v13 = (v12 & 1) == 0;
    v14 = v12 >> 1;
    if (v13) {
      v15 = v14;
    }
    else {
      v15 = *(_QWORD*)(v7 + 40);
    }
    if (v13) {
      v16 = v7 + 33;
    }
    else {
      v16 = *(_QWORD*)(v7 + 48);
    }
    if (v11 >= v15) {
      v17 = v15;
    }
    else {
      v17 = v11;
    }
    v18 = memcmp(v16, v10, v17);
    if (v15 < v11) {
      v19 = -1;
    }
    else {
      v19 = 1;
    }
    if (v15 == v11) {
      v19 = 0;
    }
    if (v18 != 0) {
      v19 = v18;
    }
    v20 = v19 < 0;
    if (v19 >= 0) {
      v21 = 0;
    }
    else {
      v21 = 8;
    }
    if (!v20) {
      v6 = (_QWORD*)v7;
    }
    v7 = *(_QWORD*)(v7 + v21);
  } while (v7 != 0);
  if (v6 == v3) {
    v29 = v3;
  }
  else {
    v22 = *((unsigned __int8*)v6 + 32);
    v23 = (v22 & 1) == 0;
    v24 = v22 >> 1;
    v25 = v23 ? v24 : v6[5];
    v26 = v23 ? (__int64)v6 + 33 : v6[6];
    v27 = v25 >= v11 ? v11 : v25;
    v28 = memcmp(v10, v26, v27);
    if (v28 != 0) {
      v29 = v28 >= 0 ? v6 : v3;
    }
    else {
      v29 = v11 >= v25 ? v6 : v3;
    }
  }
  a1 = v111;
  if (v3 == v29) {
  LABEL_50:
    v109 = v4;
    v110 = v3;
    game_hub_f77fc0_alt1((void*)(&v124), a1, (__int64)v4, 0);
    v30 = v124;
    v31 = v125;
    if (v124 == v125) {
      v32 = 0;
      v34 = 0;
    }
    else {
      v32 = 0;
      v33 = 0;
      v34 = 0;
      do {
        if (*(_BYTE*)(v30 + 192) == 1) {
          v114[0] = 0;
          v118 = 0;
          LOBYTE(v119) = 0;
          v122 = 0;
          v123 = 0;
          v112 = *(_QWORD*)v30;
          v113 = *(_DWORD*)(v30 + 72);
          GameRoutine_f7cc80(v114, v30 + 80);
          v35 = GameRoutine_f7cdc0(&v119, v30 + 120);
          v123 = *(_QWORD*)(v30 + 152);
          if (v34 >= v33) {
            v38 = v34 - v32;
            v39 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v34 - v32) >> 5) + 1;
            if (v39 > 0x2AAAAAAAAAAAAAALL) {
              GameRoutine_f7d5b0(v35);
            }
            if (0x5555555555555556LL * ((__int64)(v33 - v32) >> 5) > v39) {
              v39 = 0x5555555555555556LL * ((__int64)(v33 - v32) >> 5);
            }
            if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v33 - v32) >> 5) >=
                0x155555555555555LL) {
              v39 = 0x2AAAAAAAAAAAAAALL;
            }
            if (v39 > 0x2AAAAAAAAAAAAAALL) {
              GameRoutine_60a210(v35);
            }
            v40 = 96 * v39;
            v41 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                 96 * v39, 16, 0);
            v42 = v41 + v38;
            v43 = v41;
            *(_BYTE*)(v42 + 16) = 0;
            *(_BYTE*)(v42 + 48) = 0;
            *(_QWORD*)v42 = v112;
            *(_DWORD*)(v42 + 8) = v113;
            if (v118 == 1) {
              *(_BYTE*)(v42 + 16) = v114[0];
              if ((v115 & 1) != 0) {
                fw_text_String_CopyTerminated(v42 + 24, v117, v116);
              }
              else {
                v44 = v116;
                *(_QWORD*)(v42 + 24) = v115;
                *(_QWORD*)(v42 + 32) = v44;
                *(_QWORD*)(v42 + 40) = v117;
              }
              *(_BYTE*)(v42 + 48) = 1;
            }
            v48 = v122;
            *(_BYTE*)(v42 + 56) = 0;
            v49 = (_QWORD*)(v42 + 56);
            *(_BYTE*)(v42 + 80) = 0;
            if (v48 == 1) {
              if ((v119 & 1) != 0) {
                fw_text_String_CopyTerminated(v49, v121, v120);
              }
              else {
                v50 = v120;
                *v49 = v119;
                *(_QWORD*)(v42 + 64) = v50;
                *(_QWORD*)(v42 + 72) = v121;
              }
              *(_BYTE*)(v42 + 80) = 1;
            }
            v51 = v42 - v38;
            *(_QWORD*)(v42 + 88) = v123;
            if (v32 != v34) {
              v52 = 0;
              do {
                v54 = v32 + v52;
                v55 = v51 + v52;
                *(_QWORD*)v55 = *(_QWORD*)(v32 + v52);
                v56 = *(_DWORD*)(v32 + v52 + 8);
                *(_BYTE*)(v55 + 16) = 0;
                *(_BYTE*)(v55 + 48) = 0;
                *(_DWORD*)(v55 + 8) = v56;
                if (*(_BYTE*)(v32 + v52 + 48) == 1) {
                  *(_BYTE*)(v55 + 16) = *(_BYTE*)(v54 + 16);
                  v57 = *(_QWORD*)(v54 + 24);
                  v58 = *(_QWORD*)(v54 + 40);
                  *(_QWORD*)(v55 + 32) = *(_QWORD*)(v54 + 32);
                  *(_QWORD*)(v55 + 40) = v58;
                  *(_QWORD*)(v55 + 24) = v57;
                  *(_QWORD*)(v54 + 32) = 0;
                  *(_QWORD*)(v54 + 40) = 0;
                  *(_QWORD*)(v54 + 24) = 0;
                  *(_BYTE*)(v55 + 48) = 1;
                }
                *(_BYTE*)(v55 + 56) = 0;
                *(_BYTE*)(v55 + 80) = 0;
                if (*(_BYTE*)(v54 + 80) == 1) {
                  v59 = (_QWORD*)(v32 + v52);
                  v60 = *(_QWORD*)(v32 + v52 + 56);
                  v61 = *(_QWORD*)(v32 + v52 + 72);
                  *(_QWORD*)(v55 + 64) = *(_QWORD*)(v32 + v52 + 64);
                  *(_QWORD*)(v55 + 72) = v61;
                  *(_QWORD*)(v55 + 56) = v60;
                  v59[8] = 0;
                  v59[9] = 0;
                  v59[7] = 0;
                  *(_BYTE*)(v55 + 80) = 1;
                }
                v53 = v51 + v52;
                v52 += 96;
                *(_QWORD*)(v53 + 88) = *(_QWORD*)(v54 + 88);
              } while (v54 + 96 != v34);
              v62 = v32;
              do {
                if (*(_BYTE*)(v62 + 80) == 1 &&
                    (*(_BYTE*)(v62 + 56) & 1) != 0 &&
                    *(_QWORD*)(v62 + 72) != 0) {
                  v63 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v63 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v63);
                }
                if (*(_BYTE*)(v62 + 48) == 1 &&
                    (*(_BYTE*)(v62 + 24) & 1) != 0 &&
                    *(_QWORD*)(v62 + 40) != 0) {
                  v64 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v64 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v64);
                }
                v62 += 96;
              } while (v62 != v34);
            }
            v33 = v43 + v40;
            v34 = v42 + 96;
            if (v32 != 0) {
              v65 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v65 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v65);
            }
            v32 = v51;
          }
          else {
            *(_BYTE*)(v34 + 16) = 0;
            *(_BYTE*)(v34 + 48) = 0;
            *(_QWORD*)v34 = v112;
            *(_DWORD*)(v34 + 8) = v113;
            if (v118 == 1) {
              *(_BYTE*)(v34 + 16) = v114[0];
              if ((v115 & 1) != 0) {
                fw_text_String_CopyTerminated(v34 + 24, v117, v116);
              }
              else {
                v36 = v115;
                v37 = v117;
                *(_QWORD*)(v34 + 32) = v116;
                *(_QWORD*)(v34 + 40) = v37;
                *(_QWORD*)(v34 + 24) = v36;
              }
              *(_BYTE*)(v34 + 48) = 1;
            }
            *(_BYTE*)(v34 + 56) = 0;
            v45 = (_QWORD*)(v34 + 56);
            *(_BYTE*)(v34 + 80) = 0;
            if (v122 == 1) {
              if ((v119 & 1) != 0) {
                fw_text_String_CopyTerminated(v45, v121, v120);
              }
              else {
                v46 = v119;
                v47 = v121;
                *(_QWORD*)(v34 + 64) = v120;
                *(_QWORD*)(v34 + 72) = v47;
                *v45 = v46;
              }
              *(_BYTE*)(v34 + 80) = 1;
            }
            *(_QWORD*)(v34 + 88) = v123;
            v34 += 96LL;
          }
          if (v122 == 1 && (v119 & 1) != 0 && v121 != 0) {
            v66 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v66 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v66);
          }
          if (v118 == 1 && (v115 & 1) != 0 && v117 != 0) {
            v67 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v67 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v67);
          }
        }
        v30 += 232;
      } while (v30 != v31);
    }
    v4 = (unsigned __int8*)v109;
    v68 = v110;
    v69 = *v110;
    v70 = v110;
    if (*v110 != 0) {
      v71 = *(unsigned __int8*)v109;
      v72 = (v71 & 1) == 0;
      v73 = v71 >> 1;
      if (v72) {
        v74 = (char*)v109 + 1;
      }
      else {
        v74 = (char*)v109[2];
      }
      if (v72) {
        v75 = v73;
      }
      else {
        v75 = v109[1];
      }
      while (1) {
        while (1) {
          v68 = (_QWORD*)v69;
          v76 = *(unsigned __int8*)(v69 + 32);
          v77 = (v76 & 1) == 0;
          v78 = v76 >> 1;
          v79 = v77 ? v78 : v68[5];
          v80 = v77 ? (__int64)v68 + 33 : v68[6];
          v81 = v79 >= v75 ? v75 : v79;
          v82 = memcmp(v74, v80, v81);
          if (v82 != 0) {
            break;
          }
          if (v75 >= v79) {
            goto LABEL_142;
          }
        LABEL_128:
          v69 = *v68;
          v70 = v68;
          if (*v68 == 0) {
            goto LABEL_148;
          }
        }
        if (v82 < 0) {
          goto LABEL_128;
        }
      LABEL_142:
        v83 = memcmp(v80, v74, v81);
        if (v83 != 0) {
          if ((v83 & 0x80000000) == 0) {
            goto LABEL_154;
          }
        }
        else if (v79 >= v75) {
        LABEL_154:
          v85 = v68;
          goto LABEL_155;
        }
        v69 = v68[1];
        if (v69 == 0) {
          v70 = v68 + 1;
          break;
        }
      }
    }
  LABEL_148:
    v84 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
    v85 = v84;
    if ((*(_BYTE*)v109 & 1) != 0) {
      fw_text_String_CopyTerminated(v84 + 4, v109[2], v109[1]);
    }
    else {
      v86 = v109[1];
      v84[4] = *v109;
      v84[5] = v86;
      v84[6] = v109[2];
    }
    v85[8] = 0;
    v85[9] = 0;
    v85[7] = 0;
    v87 = v85;
    *v85 = 0;
    v85[1] = 0;
    v85[2] = v68;
    *v70 = v85;
    v88 = *(_QWORD*)v111[10];
    if (v88 != 0) {
      v111[10] = v88;
      v87 = (_QWORD*)*v70;
    }
    fw_containers_BalanceAfterInsert(v111[11], v87);
    ++v111[12];
  LABEL_155:
    GameRoutine_f7d5e0(v85 + 7, v32, v34,
                       0xAAAAAAAAAAAAAAABLL * ((__int64)(v34 - v32) >> 5));
    v89 = v124;
    if (v124 != 0) {
      v90 = v125;
      if (v124 == v125) {
        goto LABEL_159;
      }
      do {
        v90 -= 232;
        GameRoutine_f7d4a0(v90);
      } while (v90 != v89);
      if (v124 != 0) {
      LABEL_159:
        v91 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v91 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v91);
      }
    }
    if (v32 != 0) {
      for (; v34 != v32; v34 -= 96LL) {
        if (*(_BYTE*)(v34 - 16) == 1 && (*(_BYTE*)(v34 - 40) & 1) != 0 &&
            *(_QWORD*)(v34 - 24) != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v92 = 128;
          }
          else {
            v92 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v92);
        }
        if (*(_BYTE*)(v34 - 48) == 1 && (*(_BYTE*)(v34 - 72) & 1) != 0 &&
            *(_QWORD*)(v34 - 56) != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v93 = 128;
          }
          else {
            v93 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v93);
        }
      }
      v94 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v94 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v94);
    }
    v2 = (__int64*)*v110;
  }
  if (v2 == nullptr) {
  LABEL_210:
    String_60a250("map::at:  key not found");
  }
  v95 = *v4;
  v96 = (v95 & 1) == 0;
  v97 = v95 >> 1;
  if (v96) {
    v98 = v4 + 1;
  }
  else {
    v98 = *((unsigned __int8**)v4 + 2);
  }
  if (v96) {
    v99 = v97;
  }
  else {
    v99 = *((_QWORD*)v4 + 1);
  }
  while (1) {
    while (1) {
      v100 = *((unsigned __int8*)v2 + 32);
      v101 = (v100 & 1) == 0;
      v102 = v100 >> 1;
      v103 = v101 ? v102 : v2[5];
      v104 = v101 ? (__int64)v2 + 33 : v2[6];
      v105 = v103 >= v99 ? v99 : v103;
      v106 = memcmp(v98, v104, v105);
      if (v106 != 0) {
        break;
      }
      if (v99 >= v103) {
        goto LABEL_205;
      }
    LABEL_191:
      v2 = (__int64*)*v2;
      if (v2 == nullptr) {
        goto LABEL_210;
      }
    }
    if (v106 < 0) {
      goto LABEL_191;
    }
  LABEL_205:
    v107 = memcmp(v104, v98, v105);
    if (v107 != 0) {
      if ((v107 & 0x80000000) == 0) {
        return v2 + 7;
      }
      goto LABEL_209;
    }
    if (v103 >= v99) {
      return v2 + 7;
    }
  LABEL_209:
    v2 = (__int64*)v2[1];
    if (v2 == nullptr) {
      goto LABEL_210;
    }
  }
}

__attribute__((swiftcall)) void game_hub_f7a7a0(PSEUDO_X8 x8_,
                                                unsigned __int8** a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int8** v4;
  unsigned __int8* v5;
  unsigned __int8* v6;
  unsigned __int8* v7;
  unsigned __int8** v8;
  unsigned __int8* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  bool v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  __int64 i;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int8* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int8* v36;
  __int64 v37;
  unsigned __int8* v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  char v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  unsigned __int64 v54;
  bool v55;
  unsigned __int8* v56;
  unsigned __int8* v57;
  unsigned __int8* v58;
  __n128 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64* v63;
  __int64* v64;
  _QWORD* v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int8* v76;
  __int64 v77;
  char* v78;
  char* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int8* v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  char v87;
  __int64* v88;
  __int64* v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  int v99;
  __int64 v100;
  _QWORD* v101;
  _BYTE* v102;
  char* v103;
  char* v104;
  __int64 v105;
  _QWORD* v106;
  __int64 v107;
  __int64 v108;
  unsigned __int8* v109;
  int v110;
  __int64 v111;
  __int64 v112;
  unsigned __int8* v113;
  unsigned __int8* v114;
  int v115;
  __int64 v116;
  __int64 v117;
  _QWORD* v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  _QWORD* v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  char v131;
  __int64 v132;
  __int64 v133;
  int v134;
  _QWORD* v135;
  _QWORD* v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  _QWORD* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  char v151;
  __int64 v152;
  __int64 v153;
  int v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  _QWORD* v158;
  __int64 v159;
  __int64 v160;
  char v161;
  __int64 v162;
  int v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  _QWORD* v167;
  __int64 v168;
  __int64 v169;
  char v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  unsigned __int64 v174;
  bool v175;
  unsigned __int8* v176;
  unsigned __int8* v177;
  unsigned __int8* v178;
  __int64 v179;
  __int64 v180;
  unsigned __int64 v181;
  __int64 v182;
  int v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  _QWORD* v187;
  __int64 v188;
  __int64 v189;
  char v190;
  __int64 v191;
  __int64 v192;
  unsigned __int8* v193;
  unsigned __int8* v194;
  __int64 v195;
  __int64 v196;
  _QWORD* v197;
  unsigned __int8** v199;
  __int64* v200;
  __int64 v201;
  __int64* v202;
  char* v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  _QWORD* v208;
  __int64 v209;
  __int64 v210;
  unsigned __int8* v211;
  unsigned __int8* v212;
  unsigned __int8* v213;
  unsigned __int8 v214;
  int v215;
  char v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  char v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  unsigned __int8 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;

  v2 = a2;
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v4 = a1 + 3;
  v3 = *((unsigned __int8*)a1 + 24);
  if ((v3 & 1) != 0) {
    v5 = a1[4];
  }
  else {
    v5 = (unsigned __int8*)(v3 >> 1);
  }
  if (v5 != nullptr) {
    v6 = *a1;
    v7 = a1[1];
    v8 = a1;
    if (*a1 != v7) {
      v9 = (unsigned __int8*)a1 + 25;
      v199 = a1 + 3;
      v200 = v2;
      v203 = (char*)a1 + 25;
      v193 = a1[1];
      v196 = *(_QWORD*)GameData_212dbb8[0];
      v195 = *(_QWORD*)GameData_212dbb8[0] + 41LL;
      do {
        v11 = *v6;
        if ((v11 & 1) != 0) {
          v12 = *((_QWORD*)v6 + 1);
        }
        else {
          v12 = v11 >> 1;
        }
        if (v12 != 0) {
          v17 = (v11 & 1) == 0;
          v13 = *((unsigned __int8*)v8 + 24);
          v206 = 0;
          v14 = *(_QWORD*)GameData_212ec00;
          v15 = *((unsigned __int8**)v6 + 2);
          v207 = 0;
          v208 = nullptr;
          if (v17) {
            v16 = v6 + 1;
          }
          else {
            v16 = v15;
          }
          v17 = (v13 & 1) == 0;
          v18 = (unsigned __int8*)(v13 >> 1);
          if (v17) {
            v19 = v9;
          }
          else {
            v19 = v8[5];
          }
          if (v17) {
            v20 = v18;
          }
          else {
            v20 = v8[4];
          }
          game_hub_LocatorDispos_CreateExternalDataImpl(
              (void*)(&v226), v14, v16, v12, &v206, v19, v20);
          v22 = v226;
          for (i = v227; v22 != i; v22 += 616) {
            v33 = *(unsigned __int8*)(v22 + 112);
            if ((v33 & 1) != 0) {
              v34 = *(_QWORD*)(v22 + 120);
            }
            else {
              v34 = v33 >> 1;
            }
            v35 = *((unsigned __int8*)v8 + 24);
            v36 = v8[4];
            if ((v35 & 1) == 0) {
              v36 = (unsigned __int8*)(v35 >> 1);
            }
            if ((unsigned __int8*)v34 == v36) {
              v37 = (v33 & 1) != 0 ? *(_QWORD*)(v22 + 128) : v22 + 113;
              v38 = (v35 & 1) != 0 ? v8[5] : v9;
              if ((unsigned int)memcmp(v37, v38, v34) == 0) {
                v216 = 0;
                v220 = 0;
                LOBYTE(v221) = 0;
                v224 = 0;
                v225 = 0;
                v39 = *(_QWORD*)(v22 + 80);
                LOBYTE(v207) = 0;
                LOBYTE(v208) = 0;
                v214 = 0;
                v215 = 0;
                v206 = v39;
                GameRoutine_f7db00(&v208, v8);
                v40 = v2[1];
                v41 = v2[2];
                v214 = 1;
                if (v40 >= v41) {
                  v42 = GameRoutine_f7dc20(v2, &v206);
                }
                else {
                  v42 = GameRoutine_f7de90(v40, &v206) + 160;
                }
                v43 = v224;
                v2[1] = v42;
                if (v43 == 1 && (v221 & 1) != 0 && v223 != 0) {
                  v44 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v44 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
                }
                if (v220 == 1 && (v217 & 1) != 0 && v219 != 0) {
                  v45 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v45 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v45);
                }
                if (v214 == 1) {
                  if (((unsigned __int8)v211 & 1) != 0 && v213 != nullptr) {
                    v46 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v46 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v46);
                  }
                  v47 = v208;
                  if (v208 != nullptr) {
                    v48 = v209;
                    if (v208 == (_QWORD*)v209) {
                      goto LABEL_49;
                    }
                    v49 = v209;
                    do {
                      v50 = *(_BYTE*)(v49 - 24);
                      v49 -= 24;
                      if ((v50 & 1) != 0 && *(_QWORD*)(v48 - 8) != 0) {
                        v51 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v51 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v51);
                      }
                      v48 = v49;
                    } while ((_QWORD*)v49 != v47);
                    v9 = (unsigned __int8*)v203;
                    v209 = (__int64)v47;
                    if (v208 != nullptr) {
                    LABEL_49:
                      v32 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v32 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
                    }
                  }
                }
              }
            }
          }
          v23 = *v6;
          if ((v23 & 1) != 0) {
            v24 = *((_QWORD*)v6 + 1);
          }
          else {
            v24 = v23 >> 1;
          }
          v25 = *(unsigned __int8*)(v196 + 40);
          v26 = *(_QWORD*)(v196 + 48);
          if ((v25 & 1) == 0) {
            v26 = v25 >> 1;
          }
          if (v24 == v26) {
            v27 = (v23 & 1) != 0 ? *((unsigned __int8**)v6 + 2) : v6 + 1;
            v28 = (v25 & 1) != 0 ? *(_QWORD*)(v196 + 56) : v195;
            if ((unsigned int)memcmp(v27, v28, v24) == 0) {
              v194 = v6;
              v52 = *(_QWORD*)(GameData_220b6d0 + 8);
              v53 = *(_QWORD**)(v52 + 24);
              v197 = (_QWORD*)(v52 + 32);
              if (v53 != (_QWORD*)(v52 + 32)) {
                while (1) {
                  v64 = (__int64*)v53[7];
                  v63 = (__int64*)v53[8];
                  v202 = v63;
                  if (v64 != v63) {
                    break;
                  }
                LABEL_108:
                  v65 = (_QWORD*)v53[1];
                  if (v65 != nullptr) {
                    do {
                      v66 = v65;
                      v65 = (_QWORD*)*v65;
                    } while (v65 != nullptr);
                  }
                  else {
                    do {
                      v66 = (_QWORD*)v53[2];
                      v17 = v53 == (_QWORD*)*v66;
                      v53 = v66;
                    } while (!v17);
                  }
                  v53 = v66;
                  if (v66 == v197) {
                    goto LABEL_97;
                  }
                }
                while (2) {
                  v68 = *v64;
                  v69 = *((unsigned __int8*)v8 + 24);
                  v70 = *(unsigned __int8*)(*v64 + 112);
                  if ((v70 & 1) != 0) {
                    v71 = *(_QWORD*)(*v64 + 120);
                  }
                  else {
                    v71 = v70 >> 1;
                  }
                  v72 = (unsigned __int64)v8[4];
                  if ((v69 & 1) == 0) {
                    v72 = v69 >> 1;
                  }
                  if (v71 != v72) {
                    goto LABEL_118;
                  }
                  v73 = *(_QWORD*)(v68 + 128);
                  v74 = v68 + 113;
                  v75 = (v70 & 1) != 0 ? v73 : v74;
                  v76 = (v69 & 1) != 0 ? v8[5] : v9;
                  v77 = memcmp(v75, v76, v71);
                  if ((_DWORD)v77 != 0) {
                    goto LABEL_118;
                  }
                  v206 = 0;
                  LOBYTE(v207) = 0;
                  v78 = (char*)*v8;
                  v79 = (char*)v8[1];
                  v80 = v79 - (char*)*v8;
                  v17 = v79 == (char*)*v8;
                  LOBYTE(v208) = 0;
                  v214 = 0;
                  v215 = 0;
                  v216 = 0;
                  v220 = 0;
                  LOBYTE(v221) = 0;
                  v224 = 0;
                  v225 = 0;
                  v206 = *(_QWORD*)(*v64 + 56);
                  v208 = nullptr;
                  v209 = 0;
                  v210 = 0;
                  if (!v17) {
                    if (0xAAAAAAAAAAAAAAABLL * (v80 >> 3) >
                        0xAAAAAAAAAAAAAAALL) {
                      goto LABEL_352;
                    }
                    v77 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, v80, 16, 0);
                    v69 = v77;
                    v208 = (_QWORD*)v77;
                    v209 = v77;
                    v210 = v77 + v80;
                    do {
                      if ((*v78 & 1) != 0) {
                        v77 = fw_text_String_CopyTerminated(
                            v69, *((_QWORD*)v78 + 2), *((_QWORD*)v78 + 1));
                      }
                      else {
                        v81 = *(_QWORD*)v78;
                        v82 = *((_QWORD*)v78 + 2);
                        *(_QWORD*)(v69 + 8) = *((_QWORD*)v78 + 1);
                        *(_QWORD*)(v69 + 16) = v82;
                        *(_QWORD*)v69 = v81;
                      }
                      v78 += 24;
                      v69 += 24LL;
                    } while (v78 != v79);
                    v209 = v69;
                    LOBYTE(v69) = *(_BYTE*)v4;
                  }
                  if ((v69 & 1) != 0) {
                    v77 = fw_text_String_CopyTerminated(&v211, v8[5], v8[4]);
                  }
                  else {
                    v83 = v4[1];
                    v211 = *v4;
                    v212 = v83;
                    v213 = v4[2];
                  }
                  v85 = v2[1];
                  v84 = v2[2];
                  v214 = 1;
                  if (v85 < v84) {
                    v86 = v206;
                    v87 = v207;
                    *(_BYTE*)(v85 + 64) = 0;
                    *(_BYTE*)(v85 + 8) = v87;
                    *(_QWORD*)v85 = v86;
                    *(_BYTE*)(v85 + 16) = 0;
                    if (v214 == 1) {
                      *(_QWORD*)(v85 + 24) = 0;
                      *(_QWORD*)(v85 + 32) = 0;
                      *(_QWORD*)(v85 + 16) = 0;
                      v88 = v208;
                      v89 = (__int64*)v209;
                      v90 = v209 - (_QWORD)v208;
                      if ((_QWORD*)v209 != v208) {
                        if (0xAAAAAAAAAAAAAAABLL * (v90 >> 3) >
                            0xAAAAAAAAAAAAAAALL) {
                          goto LABEL_352;
                        }
                        v91 = (_QWORD*)fw_memory_HeapManager_Allocate(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr,
                            v209 - (_QWORD)v208, 16, 0);
                        *(_QWORD*)(v85 + 16) = v91;
                        *(_QWORD*)(v85 + 24) = v91;
                        *(_QWORD*)(v85 + 32) = (char*)v91 + v90;
                        do {
                          if ((*(_BYTE*)v88 & 1) != 0) {
                            fw_text_String_CopyTerminated(v91, v88[2], v88[1]);
                          }
                          else {
                            v92 = *v88;
                            v93 = v88[2];
                            v91[1] = v88[1];
                            v91[2] = v93;
                            *v91 = v92;
                          }
                          v88 += 3;
                          v91 += 3;
                        } while (v88 != v89);
                        *(_QWORD*)(v85 + 24) = v91;
                      }
                      if (((unsigned __int8)v211 & 1) != 0) {
                        fw_text_String_CopyTerminated(v85 + 40, v213, v212);
                      }
                      else {
                        v113 = v211;
                        v114 = v213;
                        *(_QWORD*)(v85 + 48) = v212;
                        *(_QWORD*)(v85 + 56) = v114;
                        *(_QWORD*)(v85 + 40) = v113;
                      }
                      v2 = v200;
                      *(_BYTE*)(v85 + 64) = 1;
                    }
                    v115 = v215;
                    *(_BYTE*)(v85 + 80) = 0;
                    *(_BYTE*)(v85 + 112) = 0;
                    *(_DWORD*)(v85 + 72) = v115;
                    if (v220 == 1) {
                      *(_BYTE*)(v85 + 80) = v216;
                      if ((v217 & 1) != 0) {
                        fw_text_String_CopyTerminated(v85 + 88, v219, v218);
                      }
                      else {
                        v116 = v217;
                        v117 = v219;
                        *(_QWORD*)(v85 + 96) = v218;
                        *(_QWORD*)(v85 + 104) = v117;
                        *(_QWORD*)(v85 + 88) = v116;
                      }
                      *(_BYTE*)(v85 + 112) = 1;
                    }
                    *(_BYTE*)(v85 + 120) = 0;
                    v118 = (_QWORD*)(v85 + 120);
                    *(_BYTE*)(v85 + 144) = 0;
                    if (v224 == 1) {
                      if ((v221 & 1) != 0) {
                        fw_text_String_CopyTerminated(v118, v223, v222);
                      }
                      else {
                        v119 = v221;
                        v120 = v223;
                        *(_QWORD*)(v85 + 128) = v222;
                        *(_QWORD*)(v85 + 136) = v120;
                        *v118 = v119;
                      }
                      *(_BYTE*)(v85 + 144) = 1;
                    }
                    v63 = v202;
                    v121 = v85 + 160;
                    *(_QWORD*)(v85 + 152) = v225;
                  LABEL_248:
                    v154 = v224;
                    v2[1] = v121;
                    if (v154 == 1 && (v221 & 1) != 0 && v223 != 0) {
                      v155 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v155 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v155);
                    }
                    v9 = (unsigned __int8*)v203;
                    if (v220 == 1 && (v217 & 1) != 0 && v219 != 0) {
                      v156 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v156 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v156);
                    }
                    if (v214 == 1) {
                      if (((unsigned __int8)v211 & 1) != 0 && v213 != nullptr) {
                        v157 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v157 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v157);
                      }
                      v158 = v208;
                      if (v208 != nullptr) {
                        v159 = v209;
                        if (v208 == (_QWORD*)v209) {
                          goto LABEL_115;
                        }
                        v160 = v209;
                        do {
                          v161 = *(_BYTE*)(v160 - 24);
                          v160 -= 24;
                          if ((v161 & 1) != 0 && *(_QWORD*)(v159 - 8) != 0) {
                            v162 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v162 = 56;
                            }
                            nn_mem_StandardAllocator_Free(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v162);
                          }
                          v159 = v160;
                        } while ((_QWORD*)v160 != v158);
                        v9 = (unsigned __int8*)v203;
                        v209 = (__int64)v158;
                        if (v208 != nullptr) {
                        LABEL_115:
                          v67 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v67 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v67);
                        }
                      }
                    }
                  LABEL_118:
                    v64 += 6;
                    if (v64 == v63) {
                      goto LABEL_108;
                    }
                    continue;
                  }
                  break;
                }
                v94 = v85 - *v2;
                v95 = 1 - 0x3333333333333333LL * (v94 >> 5);
                if (v95 > 0x199999999999999LL) {
                  GameRoutine_f7df90(v77);
                }
                v96 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v84 - *v2) >> 5);
                if (2 * v96 > v95) {
                  v95 = 2 * v96;
                }
                if (v96 >= 0xCCCCCCCCCCCCCCLL) {
                  v97 = 0x199999999999999LL;
                }
                else {
                  v97 = v95;
                }
                if (v97 != 0) {
                  if (v97 > 0x199999999999999LL) {
                    GameRoutine_60a210(v77);
                  }
                  v98 = 160 * v97;
                  v77 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                       160 * v97, 16, 0);
                  v94 += v77;
                  v99 = v214;
                  v201 = v77 + v98;
                  v100 = v206;
                  *(_BYTE*)(v94 + 16) = 0;
                  v101 = (_QWORD*)(v94 + 16);
                  *(_BYTE*)(v94 + 64) = 0;
                  v102 = (_BYTE*)(v94 + 64);
                  *(_QWORD*)v94 = v100;
                  *(_BYTE*)(v94 + 8) = v207;
                  if (v99 != 1) {
                  LABEL_175:
                    v110 = v215;
                    *(_BYTE*)(v94 + 80) = 0;
                    *(_BYTE*)(v94 + 112) = 0;
                    *(_DWORD*)(v94 + 72) = v110;
                    if (v220 == 1) {
                      *(_BYTE*)(v94 + 80) = v216;
                      if ((v217 & 1) != 0) {
                        fw_text_String_CopyTerminated(v94 + 88, v219, v218);
                      }
                      else {
                        v111 = v217;
                        v112 = v219;
                        *(_QWORD*)(v94 + 96) = v218;
                        *(_QWORD*)(v94 + 104) = v112;
                        *(_QWORD*)(v94 + 88) = v111;
                      }
                      *(_BYTE*)(v94 + 112) = 1;
                    }
                    *(_BYTE*)(v94 + 120) = 0;
                    v122 = (_QWORD*)(v94 + 120);
                    *(_BYTE*)(v94 + 144) = 0;
                    if (v224 == 1) {
                      if ((v221 & 1) != 0) {
                        fw_text_String_CopyTerminated(v122, v223, v222);
                      }
                      else {
                        v123 = v221;
                        v124 = v223;
                        *(_QWORD*)(v94 + 128) = v222;
                        *(_QWORD*)(v94 + 136) = v124;
                        *v122 = v123;
                      }
                      *(_BYTE*)(v94 + 144) = 1;
                    }
                    *(_QWORD*)(v94 + 152) = v225;
                    v125 = *v2;
                    v126 = v94 + *v2 - v85;
                    if (v85 != *v2) {
                      v127 = 0;
                      do {
                        v128 = v125 + v127;
                        v129 = v126 + v127;
                        v130 = *(_QWORD*)(v125 + v127);
                        v131 = *(_BYTE*)(v125 + v127 + 8);
                        *(_BYTE*)(v129 + 64) = 0;
                        *(_BYTE*)(v129 + 8) = v131;
                        *(_QWORD*)v129 = v130;
                        *(_BYTE*)(v126 + v127 + 16) = 0;
                        if (*(_BYTE*)(v125 + v127 + 64) == 1) {
                          *(_QWORD*)(v126 + v127 + 24) = 0;
                          *(_QWORD*)(v126 + v127 + 32) = 0;
                          *(_QWORD*)(v126 + v127 + 16) = 0;
                          *(_QWORD*)(v129 + 16) = *(_QWORD*)(v128 + 16);
                          *(_QWORD*)(v129 + 24) = *(_QWORD*)(v128 + 24);
                          *(_QWORD*)(v129 + 32) = *(_QWORD*)(v128 + 32);
                          *(_QWORD*)(v128 + 24) = 0;
                          *(_QWORD*)(v128 + 32) = 0;
                          *(_QWORD*)(v128 + 16) = 0;
                          v132 = *(_QWORD*)(v128 + 40);
                          v133 = *(_QWORD*)(v128 + 56);
                          *(_QWORD*)(v129 + 48) = *(_QWORD*)(v128 + 48);
                          *(_QWORD*)(v129 + 56) = v133;
                          *(_QWORD*)(v129 + 40) = v132;
                          *(_QWORD*)(v128 + 48) = 0;
                          *(_QWORD*)(v128 + 56) = 0;
                          *(_QWORD*)(v128 + 40) = 0;
                          *(_BYTE*)(v129 + 64) = 1;
                        }
                        v134 = *(_DWORD*)(v128 + 72);
                        *(_BYTE*)(v129 + 80) = 0;
                        *(_BYTE*)(v129 + 112) = 0;
                        *(_DWORD*)(v129 + 72) = v134;
                        if (*(_BYTE*)(v128 + 112) == 1) {
                          v135 = (_QWORD*)(v125 + v127);
                          *(_BYTE*)(v129 + 80) = *(_BYTE*)(v125 + v127 + 80);
                          v136 = (_QWORD*)(v126 + v127);
                          v137 = *(_QWORD*)(v125 + v127 + 88);
                          v138 = *(_QWORD*)(v125 + v127 + 104);
                          v136[12] = *(_QWORD*)(v125 + v127 + 96);
                          v136[13] = v138;
                          v136[11] = v137;
                          v135[12] = 0;
                          v135[13] = 0;
                          v135[11] = 0;
                          *(_BYTE*)(v129 + 112) = 1;
                        }
                        v139 = v126 + v127;
                        *(_BYTE*)(v126 + v127 + 120) = 0;
                        *(_BYTE*)(v126 + v127 + 144) = 0;
                        if (*(_BYTE*)(v128 + 144) == 1) {
                          v140 = (_QWORD*)(v125 + v127);
                          v141 = *(_QWORD*)(v125 + v127 + 120);
                          v142 = *(_QWORD*)(v125 + v127 + 136);
                          *(_QWORD*)(v126 + v127 + 128) =
                              *(_QWORD*)(v125 + v127 + 128);
                          *(_QWORD*)(v126 + v127 + 136) = v142;
                          *(_QWORD*)(v126 + v127 + 120) = v141;
                          v140[16] = 0;
                          v140[17] = 0;
                          v140[15] = 0;
                          *(_BYTE*)(v139 + 144) = 1;
                        }
                        v127 += 160;
                        *(_QWORD*)(v139 + 152) = *(_QWORD*)(v128 + 152);
                      } while (v128 + 160 != v85);
                      do {
                        if (*(_BYTE*)(v125 + 144) == 1 &&
                            (*(_BYTE*)(v125 + 120) & 1) != 0 &&
                            *(_QWORD*)(v125 + 136) != 0) {
                          v145 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v145 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v145);
                        }
                        if (*(_BYTE*)(v125 + 112) == 1 &&
                            (*(_BYTE*)(v125 + 88) & 1) != 0 &&
                            *(_QWORD*)(v125 + 104) != 0) {
                          v146 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v146 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v146);
                        }
                        if (*(_BYTE*)(v125 + 64) == 1) {
                          if ((*(_BYTE*)(v125 + 40) & 1) != 0 &&
                              *(_QWORD*)(v125 + 56) != 0) {
                            v147 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v147 = 56;
                            }
                            nn_mem_StandardAllocator_Free(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v147);
                          }
                          v148 = *(_QWORD*)(v125 + 16);
                          if (v148 != 0) {
                            v149 = *(_QWORD*)(v125 + 24);
                            if (v148 == v149) {
                              goto LABEL_211;
                            }
                            v150 = *(_QWORD*)(v125 + 24);
                            do {
                              v151 = *(_BYTE*)(v150 - 24);
                              v150 -= 24;
                              if ((v151 & 1) != 0 &&
                                  *(_QWORD*)(v149 - 8) != 0) {
                                v152 = 128;
                                if (*(_QWORD*)(*(_QWORD*)
                                                   fw_memory_g_heap_manager_ptr +
                                               200LL) == 0) {
                                  v152 = 56;
                                }
                                nn_mem_StandardAllocator_Free(
                                    *(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v152);
                              }
                              v149 = v150;
                            } while (v150 != v148);
                            v143 = *(_QWORD*)(v125 + 16);
                            *(_QWORD*)(v125 + 24) = v148;
                            if (v143 != 0) {
                            LABEL_211:
                              v144 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v144 = 56;
                              }
                              nn_mem_StandardAllocator_Free(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr +
                                  v144);
                            }
                          }
                        }
                        v125 += 160;
                      } while (v125 != v85);
                      v125 = *v2;
                    }
                    v63 = v202;
                    v121 = v94 + 160;
                    *v2 = v126;
                    v2[2] = v201;
                    if (v125 != 0) {
                      v153 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v153 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v153);
                    }
                    v4 = v199;
                    goto LABEL_248;
                  }
                }
                else {
                  *(_BYTE*)(v94 + 16) = 0;
                  v101 = (_QWORD*)(v94 + 16);
                  *(_BYTE*)(v94 + 64) = 0;
                  v102 = (_BYTE*)(v94 + 64);
                  v201 = 0;
                  *(_QWORD*)v94 = v206;
                  *(_BYTE*)(v94 + 8) = v207;
                }
                v103 = (char*)v208;
                v104 = (char*)v209;
                v101[1] = 0;
                v101[2] = 0;
                v105 = v104 - v103;
                *v101 = 0;
                if (v104 != v103) {
                  if (0xAAAAAAAAAAAAAAABLL * (v105 >> 3) >
                      0xAAAAAAAAAAAAAAALL) {
                  LABEL_352:
                    GameRoutine_64aa00(v77);
                  }
                  v106 = (_QWORD*)fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v104 - v103, 16,
                      0);
                  *v101 = v106;
                  *(_QWORD*)(v94 + 24) = v106;
                  *(_QWORD*)(v94 + 32) = (char*)v106 + v105;
                  do {
                    if ((*v103 & 1) != 0) {
                      fw_text_String_CopyTerminated(v106, *((_QWORD*)v103 + 2),
                                                    *((_QWORD*)v103 + 1));
                    }
                    else {
                      v107 = *(_QWORD*)v103;
                      v108 = *((_QWORD*)v103 + 2);
                      v106[1] = *((_QWORD*)v103 + 1);
                      v106[2] = v108;
                      *v106 = v107;
                    }
                    v103 += 24;
                    v106 += 3;
                  } while (v103 != v104);
                  *(_QWORD*)(v94 + 24) = v106;
                }
                if (((unsigned __int8)v211 & 1) != 0) {
                  fw_text_String_CopyTerminated(v94 + 40, v213, v212);
                }
                else {
                  v109 = v212;
                  *(_QWORD*)(v94 + 40) = v211;
                  *(_QWORD*)(v94 + 48) = v109;
                  *(_QWORD*)(v94 + 56) = v213;
                }
                v8 = a1;
                v2 = v200;
                *v102 = 1;
                goto LABEL_175;
              }
            LABEL_97:
              v54 = *((unsigned __int8*)v8 + 24);
              v55 = (v54 & 1) == 0;
              v56 = (unsigned __int8*)(v54 >> 1);
              if (v55) {
                v57 = v9;
              }
              else {
                v57 = v8[5];
              }
              if (v55) {
                v58 = v56;
              }
              else {
                v58 = v8[4];
              }
              EventManager_cbbf20((void*)(&v204), GameData_21f3c98, v57, v58);
              v7 = v193;
              v6 = v194;
              if (v204 != 0) {
                v60 = *(_QWORD*)(v204 + 176);
                LOBYTE(v207) = 0;
                LOBYTE(v208) = 0;
                v214 = 0;
                v215 = 0;
                v216 = 0;
                v220 = 0;
                LOBYTE(v221) = 0;
                v224 = 0;
                v225 = 0;
                v206 = v60;
                GameRoutine_f7bb20(&v208, v8);
                v61 = v2[1];
                if (v61 >= v2[2]) {
                  v62 = GameRoutine_f7dc20(v2, &v206);
                }
                else {
                  v62 = GameRoutine_f7de90(v61, &v206) + 160;
                }
                v163 = v224;
                v2[1] = v62;
                if (v163 == 1 && (v221 & 1) != 0 && v223 != 0) {
                  v164 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v164 = 56;
                  }
                  v59 = nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v164);
                }
                if (v220 == 1 && (v217 & 1) != 0 && v219 != 0) {
                  v165 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v165 = 56;
                  }
                  v59 = nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v165);
                }
                if (v214 == 1) {
                  if (((unsigned __int8)v211 & 1) != 0 && v213 != nullptr) {
                    v166 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v166 = 56;
                    }
                    v59 = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v166);
                  }
                  v167 = v208;
                  if (v208 != nullptr) {
                    v168 = v209;
                    if (v208 == (_QWORD*)v209) {
                      goto LABEL_304;
                    }
                    v169 = v209;
                    do {
                      v170 = *(_BYTE*)(v169 - 24);
                      v169 -= 24;
                      if ((v170 & 1) != 0 && *(_QWORD*)(v168 - 8) != 0) {
                        v171 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v171 = 56;
                        }
                        v59 = nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v171);
                      }
                      v168 = v169;
                    } while ((_QWORD*)v169 != v167);
                    v9 = (unsigned __int8*)v203;
                    v209 = (__int64)v167;
                    if (v208 != nullptr) {
                    LABEL_304:
                      v172 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v172 = 56;
                      }
                      v59 = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v172);
                    }
                  }
                }
              }
              v173 = v205;
              if (v205 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v205 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64, long double))(*(_QWORD*)v173 + 16LL))(
                    v173, *(long double*)&v59);
                std___1___shared_weak_count___release_weak_alt1(v173);
              }
              v174 = *((unsigned __int8*)v8 + 24);
              v175 = (v174 & 1) == 0;
              v176 = (unsigned __int8*)(v174 >> 1);
              if (v175) {
                v177 = v9;
              }
              else {
                v177 = v8[5];
              }
              if (v175) {
                v178 = v176;
              }
              else {
                v178 = v8[4];
              }
              v179 = GameRoutine_dfffe0(GameData_220f950, v177, v178);
              if (v179 != 0) {
                v215 = 0;
                v216 = 0;
                v220 = 0;
                LOBYTE(v221) = 0;
                v224 = 0;
                v225 = 0;
                v180 = *(_QWORD*)(v179 + 72);
                LOBYTE(v207) = 0;
                LOBYTE(v208) = 0;
                v214 = 0;
                v206 = v180;
                GameRoutine_f7bb20(&v208, v8);
                v181 = v2[1];
                if (v181 >= v2[2]) {
                  v182 = GameRoutine_f7dc20(v2, &v206);
                }
                else {
                  v182 = GameRoutine_f7de90(v181, &v206) + 160;
                }
                v183 = v224;
                v2[1] = v182;
                if (v183 == 1 && (v221 & 1) != 0 && v223 != 0) {
                  v184 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v184 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v184);
                }
                if (v220 == 1 && (v217 & 1) != 0 && v219 != 0) {
                  v185 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v185 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v185);
                }
                if (v214 == 1) {
                  if (((unsigned __int8)v211 & 1) != 0 && v213 != nullptr) {
                    v186 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v186 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v186);
                  }
                  v187 = v208;
                  if (v208 != nullptr) {
                    v188 = v209;
                    if (v208 == (_QWORD*)v209) {
                      goto LABEL_348;
                    }
                    v189 = v209;
                    do {
                      v190 = *(_BYTE*)(v189 - 24);
                      v189 -= 24;
                      if ((v190 & 1) != 0 && *(_QWORD*)(v188 - 8) != 0) {
                        v191 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v191 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v191);
                      }
                      v188 = v189;
                    } while ((_QWORD*)v189 != v187);
                    v9 = (unsigned __int8*)v203;
                    v209 = (__int64)v187;
                    if (v208 != nullptr) {
                    LABEL_348:
                      v192 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v192 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v192);
                    }
                  }
                }
              }
            }
          }
          v29 = v226;
          if (v226 != 0) {
            if (v226 == v227) {
              goto LABEL_8;
            }
            v30 = v227 - 616;
            do {
              HubNatives_ccbf80(v30 + 24);
              if ((*(_BYTE*)v30 & 1) != 0 && *(_QWORD*)(v30 + 16) != 0) {
                v31 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v31 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
              }
              v17 = v30 == v29;
              v30 -= 616;
            } while (!v17);
            v9 = (unsigned __int8*)v203;
            v227 = v29;
            if (v226 != 0) {
            LABEL_8:
              v10 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v10 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
            }
          }
        }
        v6 += 24;
      } while (v6 != v7);
    }
  }
}

__attribute__((swiftcall)) void game_hub_f7be00(PSEUDO_X8 x8_, __int64 a1,
                                                __int64* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __n128 result;
  __int64 v7;
  _QWORD* i;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  bool v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  _QWORD* v33;
  _QWORD* v34;
  _QWORD* v35;
  _QWORD* v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD v46[3];

  LocatorDispos_db1e20((void*)(v46), a1);
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  v7 = *a2;
  for (i = *(_QWORD**)(*(_QWORD*)GameData_212ec00 + 8LL);
       i != *(_QWORD**)(*(_QWORD*)GameData_212ec00 + 16LL); i += 2) {
    v9 = (_QWORD*)*i;
    if ((*(_BYTE*)(*i + 16LL) & 1) == 0 && v9[10] == v7) {
      v10 = i[1];
      if (v10 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
      }
      if ((v9[47] & 1) != 0) {
        fw_text_String_CopyTerminated(&v43, v9[49], v9[48]);
      }
      else {
        v11 = v9[48];
        v43 = v9[47];
        v44 = v11;
        v45 = v9[49];
      }
      GameRoutine_f7c840(a3, a1, &v43, v9[10], a2);
      if ((v43 & 1) != 0 && v45 != 0) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
      }
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v10 + 16LL))(
            v10, *(long double*)&result);
        std___1___shared_weak_count___release_weak_alt1(v10);
      }
      break;
    }
  }
  v13 = *(_QWORD*)(GameData_220b6d0 + 8);
  v14 = *(_QWORD**)(v13 + 24);
  v42 = (_QWORD*)(v13 + 32);
  if (v14 != (_QWORD*)(v13 + 32)) {
    v15 = fw_memory_g_heap_manager_ptr;
    do {
      v17 = v14[7];
      v16 = v14[8];
      while (v17 != v16) {
        if (*(_QWORD*)(*(_QWORD*)v17 + 56LL) == v7) {
          LocatorDispos_db2180((void*)(&v43), v46, v14 + 4);
          GameRoutine_f7c840(a3, a1, &v43, *(_QWORD*)(*(_QWORD*)v17 + 56LL),
                             a2);
          if ((v43 & 1) != 0 && v45 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v18);
          }
        }
        v17 += 48;
      }
      v19 = (_QWORD*)v14[1];
      if (v19 != nullptr) {
        do {
          v20 = v19;
          v19 = (_QWORD*)*v19;
        } while (v19 != nullptr);
      }
      else {
        do {
          v20 = (_QWORD*)v14[2];
          v21 = v14 == (_QWORD*)*v20;
          v14 = v20;
        } while (!v21);
      }
      v14 = v20;
    } while (v20 != v42);
  }
  v22 = *(_QWORD**)(GameData_21f3c98 + 152);
  if (v22 != (_QWORD*)(GameData_21f3c98 + 160)) {
    while (1) {
      v23 = (_QWORD*)v22[7];
      v24 = (_QWORD*)v22[8];
      if (v23 != v24) {
        while (*(_QWORD*)(*v23 + 176LL) != v7) {
          v23 += 2;
          if (v23 == v24) {
            goto LABEL_46;
          }
        }
      }
      if (v23 != v24) {
        break;
      }
    LABEL_46:
      v23 = (_QWORD*)v22[10];
      v25 = (_QWORD*)v22[11];
      if (v23 != v25) {
        while (*(_QWORD*)(*v23 + 176LL) != v7) {
          v23 += 2;
          if (v23 == v25) {
            goto LABEL_51;
          }
        }
      }
      if (v23 != v25) {
        break;
      }
    LABEL_51:
      v26 = (_QWORD*)v22[1];
      if (v26 != nullptr) {
        do {
          v27 = v26;
          v26 = (_QWORD*)*v26;
        } while (v26 != nullptr);
      }
      else {
        do {
          v27 = (_QWORD*)v22[2];
          v21 = v22 == (_QWORD*)*v27;
          v22 = v27;
        } while (!v21);
      }
      v22 = v27;
      if (v27 == (_QWORD*)(GameData_21f3c98 + 160)) {
        goto LABEL_68;
      }
    }
    v29 = *v23;
    v28 = v23[1];
    if (v28 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v29 != 0) {
      LocatorDispos_db2180((void*)(&v43), v46, v29 + 1216);
      GameRoutine_f7c840(a3, a1, &v43, *(_QWORD*)(v29 + 176), a2);
      if ((v43 & 1) != 0 && v45 != 0) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v30 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
      }
    }
    if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v28 + 16LL))(
          v28, *(long double*)&result);
      std___1___shared_weak_count___release_weak_alt1(v28);
    }
  }
LABEL_68:
  v31 = *(_QWORD**)(GameData_220f950 + 40);
  v32 = *(_QWORD**)(GameData_220f950 + 48);
  if (v31 == v32) {
  LABEL_71:
    v36 = *(_QWORD**)(GameData_220f950 + 64);
    v35 = *(_QWORD**)(GameData_220f950 + 72);
    if (v36 == v35) {
      goto LABEL_83;
    }
    while (1) {
      v37 = (_QWORD*)*v36;
      v36 += 2;
      v33 = v37;
      if (v37[9] == v7) {
        break;
      }
      if (v36 == v35) {
        goto LABEL_83;
      }
    }
  }
  else {
    while (1) {
      v34 = (_QWORD*)*v31;
      v31 += 2;
      v33 = v34;
      if (v34[9] == v7) {
        break;
      }
      if (v31 == v32) {
        goto LABEL_71;
      }
    }
  }
  if ((v33[82] & 1) != 0) {
    fw_text_String_CopyTerminated(&v43, v33[84], v33[83]);
    v7 = v33[9];
  }
  else {
    v38 = v33[83];
    v39 = v33[84];
    v43 = v33[82];
    v44 = v38;
    v45 = v39;
  }
  GameRoutine_f7c840(a3, a1, &v43, v7, a2);
  if ((v43 & 1) != 0 && v45 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40);
  }
LABEL_83:
  if ((v46[0] & 1) != 0 && v46[2] != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v41);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 game_hub_f89710(__int64 a1, _DWORD* a2, __int64 a3)
{
  int v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int128* v10;
  char v11;
  __int64 v12;
  bool v13;
  __int128 v14;
  char v15;

  if (a3 == 4 && *a2 == -1467750094) {
    v13 = false;
    v11 = 0;
    *((_QWORD*)&v14 + 1) = &GameData_1a95d15;
    v12 = 0x800000002LL;
    *(_QWORD*)&v14 = game_HashString((__int64)&GameData_1a95d15);
    if (game_GameModeData_instance_ != 0) {
      v9 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v14);
      if (v9 != 0) {
        v13 = *(_DWORD*)(v9 + 32) >= 1;
      }
    }
    v10 = (__int128*)&v11;
    return GameRoutine_f8a200(a1, v10);
  }
  v4 = GameRoutine_db0fa0((__int64)a2, a3);
  v5 = 0;
  if (v4 <= 4) {
    if (v4 > 2) {
      BYTE12(v14) = 0;
      if (v4 == 3) {
        *(_QWORD*)((char*)&v14 + 4) = 0x200000001LL;
        v5 = 3;
      }
      else {
        *(_QWORD*)((char*)&v14 + 4) = 0x600000001LL;
        v5 = 7;
      }
      goto LABEL_28;
    }
    if (v4 == 1) {
      v5 = 1;
    }
    else if (v4 == 2) {
      BYTE12(v14) = 0;
      *(_QWORD*)((char*)&v14 + 4) = 0x100000001LL;
      v5 = 2;
    LABEL_28:
      v10 = &v14;
      LOBYTE(v14) = v5;
      return GameRoutine_f8a200(a1, v10);
    }
  LABEL_23:
    BYTE12(v14) = 0;
    *(_QWORD*)((char*)&v14 + 4) = 1;
    goto LABEL_28;
  }
  if (v4 <= 6) {
    BYTE12(v14) = 0;
    if (v4 == 5) {
      *(_QWORD*)((char*)&v14 + 4) = 0x400000001LL;
      v5 = 5;
    }
    else {
      *(_QWORD*)((char*)&v14 + 4) = 0x500000001LL;
      v5 = 6;
    }
    goto LABEL_28;
  }
  if (v4 == 7) {
    BYTE12(v14) = 0;
    *(_QWORD*)((char*)&v14 + 4) = 0x700000001LL;
    v5 = 8;
    goto LABEL_28;
  }
  if (v4 == 8) {
    BYTE12(v14) = 0;
    *(_QWORD*)((char*)&v14 + 4) = 0x300000001LL;
    v5 = 4;
    goto LABEL_28;
  }
  if (v4 != 9) {
    goto LABEL_23;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2227df8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2227df8) != 0) {
    GameData_2227000 = 0;
    GameData_2227008 = (__int64)GameRoutine_f8c3d0;
    GameData_2226fb8 = 2;
    GameData_2226fc0 = 0;
    GameData_2226fc8 = 0;
    GameData_2226fd0 = 0;
    GameData_2226fd8 = 1;
    GameData_2226fe0 = 0;
    GameData_2226fe8 = 0;
    GameData_2226ff0 = 0;
    GameData_2226ff8 = 13;
    GameData_2227010 = 0;
    GameData_2227018 = 0;
    GameData_2227020 = 0;
    GameData_2227028 = 0;
    GameData_2227030 = 0;
    GameData_2227038 = 19;
    GameData_2227058 = 500;
    GameData_2227060 = 0;
    GameData_2227068 = 0;
    GameData_2227070 = 0;
    GameData_2227078 = 10;
    GameData_2227040 = 0;
    GameData_2227048 = (__int64)GameData_212c6d0[0];
    GameData_22270c0 = 0;
    GameData_22270c8 = (__int64)GameRoutine_f8c4f0;
    GameData_2227138 = 15;
    GameData_2227098 = 0;
    GameData_22270a0 = 0;
    GameData_22270a8 = 0;
    GameData_22270b0 = 0;
    GameData_22270b8 = 13;
    GameData_22270d0 = 0;
    GameData_22270d8 = 0;
    GameData_22270e0 = 0;
    GameData_22270e8 = 0;
    GameData_22270f0 = 0;
    GameData_2227108 = 0;
    GameData_2227110 = 0;
    GameData_2227100 = 0;
    GameData_2227118 = 1;
    GameData_2227120 = 0;
    GameData_2227128 = 250;
    GameData_2227130 = 0;
    GameData_2227150 = 0;
    GameData_2227158 = 0;
    GameData_2227160 = 0;
    GameData_2227168 = 0;
    GameData_2227170 = 0;
    GameData_22270f8 = 4;
    GameData_2227140 = 0;
    GameData_2227148 = (__int64)GameRoutine_f8c600;
    GameData_2227080 = 0;
    GameData_2227088 = (__int64)GameData_212c720;
    GameData_2227388 = (__int64)game_hub_anonymous_f8c6a0;
    GameData_22271d8 = 0;
    GameData_22271e0 = 0;
    GameData_22271e8 = 0;
    GameData_22271f0 = 0;
    GameData_22271f8 = 19;
    GameData_2227200 = 0;
    GameData_2227178 = 19;
    GameData_2227198 = 500;
    GameData_22271a0 = 0;
    GameData_22271a8 = 0;
    GameData_22271d0 = 0;
    GameData_2227208 = (__int64)GameData_212c6d0[0];
    GameData_2227218 = 500;
    GameData_2227220 = 0;
    GameData_2227228 = 0;
    GameData_2227230 = 0;
    GameData_2227238 = 10;
    GameData_2227240 = 0;
    GameData_22271c8 = (__int64)GameRoutine_f8c610;
    GameData_22271b0 = 0;
    GameData_22271b8 = 13;
    GameData_22271c0 = 0;
    GameData_2227248 = (__int64)GameData_212c720;
    GameData_2227258 = 0;
    GameData_2227260 = 0;
    GameData_2227268 = 0;
    GameData_2227270 = 0;
    GameData_2227278 = 13;
    GameData_2227280 = 0;
    GameData_2227290 = 0;
    GameData_2227298 = 0;
    GameData_22272a0 = 0;
    GameData_22272a8 = 0;
    GameData_22272b0 = 0;
    GameData_22272b8 = 13;
    GameData_22272c0 = 0;
    GameData_22272d0 = 0;
    GameData_22272d8 = 0;
    GameData_22272e0 = 0;
    GameData_22272e8 = 0;
    GameData_22272f0 = 0;
    GameData_22272f8 = 2;
    GameData_2227310 = 0;
    GameData_2227308 = 0;
    GameData_2227300 = 0;
    GameData_2227320 = 0;
    GameData_2227328 = 0;
    GameData_2227330 = 0;
    GameData_2227338 = 13;
    GameData_2227340 = 0;
    GameData_2227350 = 0;
    GameData_2227358 = 0;
    GameData_2227360 = 0;
    GameData_2227368 = 0;
    GameData_2227370 = 0;
    GameData_2227378 = 13;
    GameData_2227380 = 0;
    GameData_2227390 = 0;
    GameData_2227398 = 0;
    GameData_22273a0 = 0;
    GameData_22273a8 = 0;
    GameData_22273b0 = 0;
    GameData_22273b8 = 13;
    GameData_22273c0 = 0;
    GameData_22273d0 = 0;
    GameData_22273d8 = 0;
    GameData_22273e0 = 0;
    GameData_22273e8 = 0;
    GameData_22273f0 = 0;
    GameData_22273f8 = 4;
    GameData_2227410 = 0;
    GameData_2227408 = 0;
    GameData_2227400 = 0;
    GameData_2227418 = 1;
    GameData_2227420 = 0;
    GameData_2227428 = 250;
    GameData_2227430 = 0;
    GameData_2227438 = 19;
    GameData_2227440 = 0;
    GameData_2227458 = 500;
    GameData_2227460 = 0;
    GameData_2227468 = 0;
    GameData_2227470 = 0;
    GameData_2227478 = 10;
    GameData_2227480 = 0;
    GameData_2227488 = (__int64)GameData_212c720;
    GameData_2227498 = 0;
    GameData_22274a0 = 0;
    GameData_22273c8 = (__int64)game_hub_anonymous_f8cb20;
    GameData_2227288 = (__int64)game_hub_anonymous_f8c620;
    GameData_22274a8 = 0;
    GameData_22274b0 = 0;
    GameData_22274b8 = 4;
    GameData_22274d0 = 0;
    GameData_22274c8 = 0;
    GameData_22274c0 = 0;
    GameData_2227548 = (__int64)GameRoutine_f8cd60;
    GameData_22272c8 = (__int64)GameRoutine_f8aa60;
    GameData_22274d8 = 1;
    GameData_22274e0 = 0;
    GameData_22274e8 = 500;
    GameData_22274f0 = 0;
    GameData_22274f8 = 2;
    GameData_2227500 = 0;
    GameData_2227508 = 0;
    GameData_2227588 = (__int64)GameRoutine_f8d3e0;
    GameData_2227318 = 3;
    GameData_2227510 = 0;
    GameData_2227518 = 4;
    GameData_2227520 = 0;
    GameData_2227528 = 0;
    GameData_2227530 = 0;
    GameData_2227538 = 13;
    GameData_2227540 = 0;
    GameData_22275d8 = 5;
    GameData_2227348 = (__int64)GameRoutine_f8ad80;
    GameData_2227608 = (__int64)GameRoutine_f8ad80;
    GameData_2227180 = 0;
    GameData_2227188 = (__int64)GameData_212d060[0];
    GameData_2227448 = (__int64)GameData_212d060[0];
    GameData_2227550 = 0;
    GameData_2227558 = 0;
    GameData_2227560 = 0;
    GameData_2227568 = 0;
    GameData_2227718 = 6;
    GameData_2227758 = 6;
    GameData_2227648 = (__int64)game_hub_anonymous_f8d660;
    GameData_2227570 = 0;
    GameData_2227578 = 13;
    GameData_2227580 = 0;
    GameData_2227590 = 0;
    GameData_2227598 = 0;
    GameData_22275a0 = 0;
    GameData_22277c8 = (__int64)GameRoutine_f8abd0;
    GameData_22275a8 = 0;
    GameData_22275b0 = 0;
    GameData_22275b8 = 2;
    GameData_22275d0 = 0;
    GameData_22275c8 = 0;
    GameData_22275c0 = 0;
    GameData_22275e0 = 0;
    GameData_22275e8 = 0;
    GameData_22275f0 = 0;
    GameData_2227808 = (__int64)game_hub_anonymous_f8d8a0;
    GameData_22275f8 = 13;
    GameData_2227600 = 0;
    GameData_2227610 = 0;
    GameData_2227618 = 0;
    GameData_2227620 = 0;
    GameData_2227628 = 0;
    GameData_2227630 = 0;
    GameData_2227638 = 13;
    GameData_2227640 = 0;
    GameData_2227848 = (__int64)GameRoutine_f8dae0;
    GameData_2227650 = 0;
    GameData_2227658 = 0;
    GameData_2227660 = 0;
    GameData_2227668 = 0;
    GameData_2227670 = 0;
    GameData_2227678 = 19;
    GameData_2227680 = 0;
    GameData_2227688 = (__int64)GameData_212d060[0];
    GameData_2227698 = 500;
    GameData_22276a0 = 0;
    GameData_22278a8 = 2300;
    GameData_22276a8 = 0;
    GameData_22276b0 = 0;
    GameData_22276b8 = 10;
    GameData_22276c0 = 0;
    GameData_22276c8 = (__int64)GameData_212c720;
    GameData_22276d8 = 0;
    GameData_22276e0 = 0;
    GameData_22276e8 = 0;
    GameData_22276f0 = 0;
    GameData_22278c8 = (__int64)GameRoutine_f8dc00;
    GameData_22276f8 = 12;
    GameData_2227710 = 0;
    GameData_2227708 = 0;
    GameData_2227700 = 0;
    GameData_2227720 = 0;
    GameData_2227728 = 0;
    GameData_2227730 = 0;
    GameData_2227738 = 2;
    GameData_2227740 = 0;
    GameData_2227748 = 0;
    GameData_2227928 = 3500;
    GameData_2227750 = 0;
    GameData_2227760 = 0;
    GameData_2227768 = 0;
    GameData_2227770 = 0;
    GameData_2227778 = 4;
    GameData_2227790 = 0;
    GameData_2227788 = 0;
    GameData_2227780 = 0;
    GameData_2227798 = 1;
    GameData_2227948 = (__int64)GameRoutine_f8dfb0;
    GameData_22277a0 = 0;
    GameData_22277a8 = 500;
    GameData_22277b0 = 0;
    GameData_22277b8 = 13;
    GameData_22277c0 = 0;
    GameData_22277d0 = 0;
    GameData_22277d8 = 0;
    GameData_22277e0 = 0;
    GameData_22277e8 = 0;
    GameData_2227a08 = (__int64)GameRoutine_f8baa0;
    GameData_22277f0 = 0;
    GameData_22277f8 = 13;
    GameData_2227800 = 0;
    GameData_2227810 = 0;
    GameData_2227818 = 0;
    GameData_2227820 = 0;
    GameData_2227828 = 0;
    GameData_2227830 = 0;
    GameData_2227838 = 13;
    GameData_2227a48 = (__int64)GameRoutine_f8e020;
    GameData_2227840 = 0;
    GameData_2227850 = 0;
    GameData_2227858 = 0;
    GameData_2227860 = 0;
    GameData_2227868 = 0;
    GameData_2227870 = 0;
    GameData_2227878 = 4;
    GameData_2227890 = 0;
    GameData_2227888 = 0;
    GameData_2227880 = 0;
    GameData_2227898 = 1;
    GameData_22278a0 = 0;
    GameData_22278b0 = 0;
    GameData_22278b8 = 13;
    GameData_22278c0 = 0;
    GameData_22278d0 = 0;
    GameData_22278d8 = 0;
    GameData_22278e0 = 0;
    GameData_22278e8 = 0;
    GameData_22278f0 = 0;
    GameData_22278f8 = 4;
    GameData_2227900 = 0;
    GameData_2227908 = 0;
    GameData_2227910 = 0;
    GameData_2227918 = 1;
    GameData_2227920 = 0;
    GameData_2227930 = 0;
    GameData_2227938 = 13;
    GameData_2227940 = 0;
    GameData_2227950 = 0;
    GameData_2227958 = 0;
    GameData_2227960 = 0;
    GameData_2227968 = 0;
    GameData_2227970 = 0;
    GameData_2227978 = 10;
    GameData_2227980 = 0;
    GameData_2227988 = (__int64)GameData_212c720;
    GameData_2227998 = 0;
    GameData_22279a0 = 0;
    GameData_22279a8 = 0;
    GameData_22279b0 = 0;
    GameData_22279b8 = 4;
    GameData_22279d0 = 0;
    GameData_22279c8 = 0;
    GameData_22279c0 = 0;
    GameData_22279d8 = 1;
    GameData_22279e0 = 0;
    GameData_22279e8 = 500;
    GameData_22279f0 = 0;
    GameData_22279f8 = 13;
    GameData_2227a00 = 0;
    GameData_2227a10 = 0;
    GameData_2227a18 = 0;
    GameData_2227a20 = 0;
    GameData_2227a28 = 0;
    GameData_2227a30 = 0;
    GameData_2227a38 = 13;
    GameData_2227a40 = 0;
    GameData_2227a50 = 0;
    GameData_2227a58 = 0;
    GameData_2227a60 = 0;
    GameData_2227a68 = 0;
    GameData_2227a70 = 0;
    GameData_2227a78 = 13;
    GameData_2227a80 = 0;
    GameData_2227a88 = (__int64)GameRoutine_f8bb50;
    GameData_2227a90 = 0;
    GameData_2227a98 = 0;
    GameData_2227aa0 = 0;
    GameData_2227aa8 = 0;
    GameData_2227ab0 = 0;
    GameData_2227ab8 = 19;
    GameData_2227ac0 = 0;
    GameData_2227ac8 = (__int64)GameData_212d3f0[0];
    GameData_2227c38 = 13;
    GameData_2227cc8 = (__int64)GameData_212d060[0];
    GameData_2227ad8 = 500;
    GameData_2227ae0 = 0;
    GameData_2227ae8 = 0;
    GameData_2227af0 = 0;
    GameData_2227af8 = 10;
    GameData_2227b00 = 0;
    GameData_2227b08 = (__int64)GameData_212c720;
    GameData_2227b18 = 0;
    GameData_2227b20 = 0;
    GameData_2227b28 = 0;
    GameData_2227b30 = 0;
    GameData_2227b38 = 12;
    GameData_2227b50 = 0;
    GameData_2227b48 = 0;
    GameData_2227b40 = 0;
    GameData_2227b58 = 9;
    GameData_2227b60 = 0;
    GameData_2227b68 = 0;
    GameData_2227b70 = 0;
    GameData_2227b78 = 2;
    GameData_2227b80 = 0;
    GameData_2227b88 = 0;
    GameData_2227b90 = 0;
    GameData_2227b98 = 8;
    GameData_2227ba0 = 0;
    GameData_2227ba8 = 0;
    GameData_2227bb0 = 0;
    GameData_2227bb8 = 19;
    GameData_2227bc0 = 0;
    GameData_2227bc8 = (__int64)GameData_212c6d0[0];
    GameData_2227bd8 = 500;
    GameData_2227be0 = 0;
    GameData_2227be8 = 0;
    GameData_2227bf0 = 0;
    GameData_2227bf8 = 10;
    GameData_2227c00 = 0;
    GameData_2227c08 = (__int64)GameData_212c720;
    GameData_2227c18 = 0;
    GameData_2227c20 = 0;
    GameData_2227c28 = 0;
    GameData_2227c30 = 0;
    GameData_2227c40 = 0;
    GameData_2227c48 = (__int64)game_hub_anonymous_f8e0a0;
    GameData_2227c50 = 0;
    GameData_2227c58 = 0;
    GameData_2227c60 = 0;
    GameData_2227c68 = 0;
    GameData_2227c70 = 0;
    GameData_2227c78 = 4;
    GameData_2227c90 = 0;
    GameData_2227c88 = 0;
    GameData_2227c80 = 0;
    GameData_2227c98 = 1;
    GameData_2227ca0 = 0;
    GameData_2227ca8 = 250;
    GameData_2227cb0 = 0;
    GameData_2227cb8 = 19;
    GameData_2227cc0 = 0;
    GameData_2227cd8 = 500;
    GameData_2227ce0 = 0;
    GameData_2227ce8 = 0;
    GameData_2227cf0 = 0;
    GameData_2227cf8 = 10;
    GameData_2227d00 = 0;
    GameData_2227d08 = (__int64)GameData_212c720;
    GameData_2227d18 = 0;
    GameData_2227d20 = 0;
    GameData_2227d28 = 0;
    GameData_2227d30 = 0;
    GameData_2227d38 = 12;
    GameData_2227d50 = 0;
    GameData_2227d48 = 0;
    GameData_2227d40 = 0;
    GameData_2227d58 = 9;
    GameData_2227d60 = 0;
    GameData_2227d68 = 0;
    GameData_2227d70 = 0;
    GameData_2227d78 = 2;
    GameData_2227d80 = 0;
    GameData_2227d88 = 0;
    GameData_2227d90 = 0;
    GameData_2227d98 = 9;
    GameData_2227da0 = 0;
    GameData_2227da8 = 0;
    GameData_2227db0 = 0;
    GameData_2227db8 = 0;
    GameData_2227de0 = 0;
    GameData_2227de8 = 0;
    GameData_2227df0 = 0;
    GameData_2227dd8 = 0;
    GameData_2227dd0 = 0;
    GameData_2227dc8 = 0;
    GameData_2227dc0 = 0;
    __cxa_guard_release(&GameData_2227df8);
  }
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
  v7 = GameData_212c608[0];
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = "NULL";
  *(_QWORD*)(v6 + 138) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)v6 = v7 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  game_ProcInst_Register(v6);
  *(_DWORD*)(v6 + 164) = 0;
  *(_BYTE*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)v6 = game_hub_anonymous_ProcHubSeqObeliskBase_vtable;
  *(_BYTE*)(v6 + 152) = 9;
  *(_QWORD*)(v6 + 156) = 0x900000003LL;
  LOBYTE(v14) = 0;
  v15 = 0;
  GameRoutine_f8a870(*(_QWORD*)GameData_212efc0, (__int64*)&v14);
  GameRoutine_d8ce40(*(_QWORD*)GameData_212dbc8[0]);
  *(_QWORD*)(v6 + 200) = 0;
  *(_DWORD*)(v6 + 192) = 0;
  *(_QWORD*)v6 = game_hub_anonymous_ProcHubSeqObeliskDoor_vtable;
  *(_DWORD*)(v6 + 208) = 0x2000;
  return ProcInst_657850(v6, (__int64)&GameData_2226fb8,
                         (__int64)"ProcHubSeqObeliskDoor", 1, a1);
}

__n128 game_hub_f8b240()
{

#pragma clang fp contract(off)
  float32x4_t* v0;
  __n128 result;
  __int64 v2;
  __int64 v3;
  struct {
    unsigned __int64 v4;
    __int64 v5;
  } v4_;
  struct {
    unsigned __int64 v6;
    __int64 v7;
  } v6_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_hub_f8bf30(&v6_.v6),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = (float32x4_t*)GameData_21f3cb0;
  v4_.v4 = v6_.v6;
  v4_.v5 = v6_.v7;
  if (v6_.v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6_.v7 + 8), 1u,
                              memory_order_relaxed);
  }
  game_zview_d1ff20(v0, &v4_.v4, 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = v4_.v5;
  if (v4_.v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4_.v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak(v2);
  }
  v3 = v6_.v7;
  if (v6_.v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6_.v7 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v3 + 16LL))(
        v3, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__n128 game_hub_f8b300(__n128 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  float32x4_t** v8;
  float32x4_t** v9;
  float32x4_t* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  bool v18;
  bool v19;
  float32x4_t* v21;
  float32x4_t* v22;
  __int64 v23;
  int32x2_t* v24;
  float32x4_t v25;
  int8x16_t v26;
  __int64 v27;
  float32x4_t v28;
  float v29;
  _QWORD* v30;
  float v31;
  __int64 v32;
  int8x16_t* v33;
  int v34;
  __int64 v35;

  v1 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v3 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v4 = std___1___shared_weak_count_lock(v3);
    result = std___1___shared_weak_count___release_weak(v1);
    if (v4 == 0 || v2 == 0) {
      if (v4 == 0) {
        return result;
      }
    }
    else {
      v6 = *(_QWORD*)(v2 + 24);
      *(_DWORD*)(v2 + 1072) = 0;
      *(_QWORD*)(v2 + 1064) = 0;
      v7 = *(_QWORD*)(v6 + 16);
      *(_BYTE*)(v7 + 288) = 1;
      GameRoutine_cfd8e0(v7 + 136, 1);
      v8 = *(float32x4_t***)(GameData_21ec7c0 + 24);
      v9 = *(float32x4_t***)(GameData_21ec7c0 + 32);
      if (v8 != v9) {
        while (1) {
          v10 = *v8;
          v11 = LANES128((*v8)[20]).n128_u8[0];
          v12 = LANES128((*v8)[20]).n128_u64[1];
          if ((v11 & 1) == 0) {
            v12 = v11 >> 1;
          }
          if (v12 == 27) {
            v13 = (v11 & 1) != 0
                      ? (unsigned __int64*)LANES128(v10[21]).n128_u64[0]
                      : (unsigned __int64*)((char*)LANES128(v10[20]).n128_u64 +
                                            1);
            v14 = *v13;
            v15 = v13[1];
            v16 = v13[2];
            v17 = *(unsigned __int64*)((char*)v13 + 19);
            v18 = v14 == 0x82E3BA87E594BCE6LL && v15 == 0xE3A583E3B782E3A4LL;
            v19 = v18 && v16 == 0xAB83E3BC83E39E83LL;
            if (v19 && v17 == 0xA5B3E9AB83E3BC83LL) {
              break;
            }
          }
          v8 += 2;
          if (v8 == v9) {
            goto LABEL_44;
          }
        }
        v21 = v8[1];
        if (v21 != nullptr) {
          v22 = v8[1];
          atomic_fetch_add_explicit((atomic_ullong* volatile)&v21[1], 1u,
                                    memory_order_relaxed);
          v23 = std___1___shared_weak_count_lock(v22);
          result = std___1___shared_weak_count___release_weak(v21);
          if (v23 != 0) {
            v24 = *(int32x2_t**)(*(_QWORD*)(v2 + 24) + 16LL);
            game_zview_d12d30(*(_QWORD*)(LANES128(v10[1]).n128_u64[1] + 16),
                              v24 + 70, 1);
            v25 = vsubq_f32(
                v10[79],
                *(float32x4_t*)(*(_QWORD*)(LANES128(v10[1]).n128_u64[1] + 16) +
                                560LL));
            v26 = vmulq_f32(v25, v25);
            LANES128(v26).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
                    .n64_u64[0];
            if (LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
                    .n64_f32[0] > 0x1.0000000000000p-23f) {
              v27 = *(_QWORD*)(GameData_21ec7c0 + 120);
              if ((*(_BYTE*)(v27 + 12) & 1) == 0) {
                *(_BYTE*)(v27 + 12) = 1;
              }
            }
            LANES128(v10[79]).n128_u32[0] = LANES64(v24[70]).n64_u32[0];
            LANES128(v10[79]).n128_u32[1] = LANES64(v24[70]).n64_u32[1];
            v28 = v10[79];
            LANES128(v28).n128_u64[1] = LANES64(v24[71]).n64_u32[0];
            v10[79] = v28;
            HubCharacterNatives_cabfc0((__int64)v10, 1);
            v29 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 24) + 16LL) +
                                       488LL) +
                            36LL) *
                  0x1.ca5dc20000000p+5f;
            if ((LANES128(v10[83]).n128_u8[1] & 1) == 0) {
              LANES128(v10[83]).n128_u8[1] = 1;
            }
            v30 = *(_QWORD**)(LANES128(v10[1]).n128_u64[1] + 16);
            v31 = v29 * 0x1.1df46a0000000p-6f;
            if (v30[107] != 0) {
              v32 = v30[108];
              v30[107] = 0;
              v30[108] = 0;
              if (v32 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
                std___1___shared_weak_count___release_weak(v32);
              }
            }
            v33 = (int8x16_t*)v30[61];
            v34 = LANES128(v33[11]).n128_u8[4];
            LANES128(v33[2]).n128_f32[0] = v31;
            LANES128(v33[2]).n128_f32[1] = v31;
            if (v34 == 1) {
              LANES128(v33[11]).n128_u8[4] = 0;
            }
            CharacterRotate_d519c0(v33);
            v35 = LANES128(v10[1]).n128_i64[1];
            LANES128(v10[67]).n128_u32[0] = 0;
            LANES128(v10[66]).n128_u64[1] = 0x3F8000003F800000LL;
            HubCharacterNatives_cee990(v35, 0x2B875D67u, 2, 0x100000000LL,
                                       0x100000000LL, 0x100000000LL,
                                       0x1.0000000000000p+0f);
            if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
              result = std___1___shared_weak_count___release_weak(v23);
            }
          }
        }
      }
    }
  LABEL_44:
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 16LL))(
          v4, *(long double*)&result);
      return std___1___shared_weak_count___release_weak(v4);
    }
  }
  return result;
}

__int64 game_hub_f8b650()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  float v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;
  struct {
    __int64 v9;
    __int64 v10;
  } v9_;

  game_hub_f8bf30_alt1(&v9_.v9);
  v1 = v9_.v9;
  v0 = v9_.v10;
  v2 = *(float*)(v9_.v9 + 32);
  *(_DWORD*)(v9_.v9 + 36) = 1084227584;
  *(float*)(v1 + 32) = v2 + -0x1.99999a0000000p-4f;
  v7_.v7 = v1;
  v7_.v8 = v0;
  v3 = *(_QWORD*)GameData_212dc38[0];
  if (v0 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 8), 1u,
                              memory_order_relaxed);
  }
  result = game_zview_d1ff20_alt1(v3, &v7_.v7, 1);
  v5 = v7_.v8;
  if (v7_.v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7_.v8 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = v9_.v10;
  if (v9_.v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9_.v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak_alt1(v6);
  }
  return result;
}

__n128 game_hub_f8bf30(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __n128 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float32x4_t v11;
  __int128 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float v32;
  struct {
    __int64 v33;
    int v34;
    char v35;
  } v33_;
  struct {
    unsigned __int64 v36[2];
    float v37;
  } v36_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 16) = 0;
  v4 = GameData_212dc40[0];
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_DWORD*)(v2 + 68) = 1065353216;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 72) = 0x3F8000003F800000LL;
  *(_DWORD*)(v2 + 80) = 1109393408;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_BYTE*)(v2 + 84) = 1;
  *(_QWORD*)v2 = v4 + 16;
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  *a1 = v2 + 32;
  a1[1] = v2;
  v5 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v5 != 0) {
    v6 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v7 = v2;
    v8 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v9 = std___1___shared_weak_count_lock(v8),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak(v5);
    if (v9 == 0 || v6 == 0) {
      if (v9 == 0) {
        return result;
      }
    }
    else {
      v11 = vaddq_f32(
          *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v6 + 24) + 16LL) + 560LL),
          COERCE_AS(float32x4_t, GameData_1a82af0));
      *(_QWORD*)(v7 + 32) = LANES128(v11).n128_u64[0];
      v12 = *(_OWORD*)(v7 + 32);
      *((_QWORD*)&v12 + 1) = LANES128(v11).n128_u32[2];
      *(_OWORD*)(v7 + 32) = v12;
      v13 = *(_QWORD*)GameData_212efc0;
      if ((*(_BYTE*)(*(_QWORD*)GameData_212efc0 + 24LL) & 1) == 0) {
        GameRoutine_8123d0(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v14 = GameData_21f3ca0;
      v15 = *(unsigned __int8*)(v13 + 12);
      v16 = *(unsigned int*)(v13 + 16);
      v17 = v16 << 32;
      if ((_DWORD)v15 == 9 || (_DWORD)v16 == 3) {
        v19 = 9;
        v20 = v17 | 9;
      }
      else {
        v20 = v17 | v15;
        if ((_DWORD)v16 == 2) {
          v21 = GameData_21f3ca0;
          v36_.v36[1] = (unsigned __int64)&GameData_1a95d15;
          v36_.v36[0] = game_HashString((__int64)&GameData_1a95d15),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (game_GameModeData_instance_ != 0 &&
              (v22 = game_GameVariableTable_Find(
                   *(_QWORD**)(game_GameModeData_instance_ + 48), v36_.v36)) !=
                  0) {
            v23 = *(_DWORD*)(v22 + 32);
            v14 = v21;
            v24 = v23 <= 0;
            v19 = 8;
            if (!v24) {
              v19 = 0x100000008LL;
            }
          }
          else {
            v19 = 8;
            v14 = v21;
          }
        }
        else {
          v25 = 7;
          v26 = 6;
          v27 = 5;
          v28 = 3;
          if ((_DWORD)v15 != 8) {
            v25 = 0;
          }
          if ((_DWORD)v15 != 7) {
            v26 = v25;
          }
          v29 = 4;
          if ((_DWORD)v15 != 6) {
            v27 = 0;
          }
          if ((_DWORD)v15 != 5) {
            v29 = v27;
          }
          v30 = 2;
          if ((int)v15 <= 6) {
            v26 = v29;
          }
          v31 = 1;
          if ((_DWORD)v15 != 4) {
            v28 = 0;
          }
          if ((_DWORD)v15 != 3) {
            v30 = v28;
          }
          if ((_DWORD)v15 != 2) {
            v31 = v30;
          }
          if ((int)v15 <= 4) {
            v19 = v31;
          }
          else {
            v19 = v26;
          }
        }
      }
      v33_.v34 = v19;
      v33_.v33 = v20;
      v33_.v35 = BYTE4(v19);
      GameRoutine_fb48a0((void*)(v36_.v36), v14, &v33_.v33),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v32 = v36_.v37;
      *(_DWORD*)(v7 + 52) = -1049624576;
      *(_QWORD*)(v7 + 64) = 1074580685;
      *(_DWORD*)(v7 + 80) = 1114636288;
      *(float*)(v7 + 48) = v32 + 0x1.6800000000000p+7f;
      result = *(__n128*)(v7 + 48);
      LANES128(result).n128_u64[1] = 0;
      *(_OWORD*)(v7 + 48) = LANES128(result).n128_u64[0];
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(
          v9, *(long double*)&result),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      return std___1___shared_weak_count___release_weak(v9);
    }
  }
  return result;
}

__int64 game_hub_f960c0(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int16* v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  __int64* v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned __int8* v24;
  unsigned __int8* v25;
  unsigned __int8* v26;
  __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  unsigned __int8* v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int8* v34;
  unsigned __int8* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int8* v38;
  __int64 v39;
  __int64 v40;
  __int64 result;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int8* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int8* v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  _QWORD* v57;
  __int64 v58;
  unsigned __int8* v59;
  unsigned int* v60;
  __int128 v61;
  unsigned __int64 v62;
  __int64 v63;
  bool v64;
  unsigned __int64 v65;
  char* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
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
  unsigned int v80;
  _QWORD* v81;
  __int64* v82;
  unsigned __int8* v83;
  _QWORD v84[3];
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int128 v88;
  int v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;

  v2 = a1[4];
  v3 = a1[5];
  v4 = a1 + 4;
  v6 = a1;
  if (v2 != v3) {
    v7 = *a2;
    while (1) {
      if (v7 != 0) {
        v8 = *(_QWORD*)(v7 + 8);
        v9 = strlen(v8);
        v10 = *(_BYTE*)v2 >> 1;
        if ((*(_BYTE*)v2 & 1) != 0) {
          v10 = *(_QWORD*)(v2 + 8);
        }
        if (v9 == v10) {
          v11 = v9;
          if (v9 == -1) {
            String_60a230();
          }
          v12 = (*(_BYTE*)v2 & 1) != 0 ? *(_QWORD*)(v2 + 16) : v2 + 1;
          if ((unsigned int)memcmp(v12, v8, v11) == 0) {
            break;
          }
        }
      }
      v2 += 96;
      if (v2 == v3) {
        goto LABEL_14;
      }
    }
  }
  if (v2 != v3) {
    return 0;
  }
LABEL_14:
  if (game_gmap_GmapClock_instance_ != 0) {
    v13 = (unsigned __int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v13 = (unsigned __int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v14 = ((__int16)v13[1] << 14) + (*v13 << 20) + ((__int16)v13[2] << 8);
  nn_os_LockMutex(&game_g_random_mutex);
  v15 = v14 & 0xFFFFFFFC | (v14 >> 30);
  v16 = 1812433253 * v15;
  v17 = 1812433253 * ((1812433253 * (v16 ^ (v16 >> 30)) + 1) ^
                      ((1812433253 * (v16 ^ (v16 >> 30)) + 1) >> 30)) +
        2;
  v18 = 1812433253 * (v17 ^ (v17 >> 30)) + 3;
  nn_os_UnlockMutex(&game_g_random_mutex);
  nn_os_LockMutex(&game_g_random_mutex);
  v19 = (((1011558400 * v15) ^ v16) >> 8) ^ (v18 >> 19) ^ (1011558400 * v15) ^
        v16 ^ v18;
  nn_os_UnlockMutex(&game_g_random_mutex);
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
    nn_os_LockMutex(&game_g_random_mutex);
    v20 = game_map_MapRandom_instance__ptr[0];
    v21 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v22 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v23 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v20 + 1) = v21;
    v19 = (v23 >> 8) ^ (v22 >> 19) ^ v23 ^ v22;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v20) = v22;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v20 + 4) = v19;
    nn_os_UnlockMutex(&game_g_random_mutex);
  }
  v24 = (unsigned __int8*)a2[4];
  v83 = (unsigned __int8*)a2[5];
  if (v24 == v83) {
    return 0;
  }
  v26 = (unsigned __int8*)v6[1];
  v25 = (unsigned __int8*)v6[2];
  v27 = (a2[1] & 1) != 0 ? a2[2] : *((_BYTE*)a2 + 8) >> 1;
  v28 = (a2[1] & 1) != 0 ? (__int64*)a2[3] : (__int64*)((char*)a2 + 9);
  if (v26 == v25) {
    return 0;
  }
  v82 = a2;
  if (v27 != 0) {
    v80 = v19;
    v81 = v6;
  LABEL_31:
    v29 = *v24;
    v30 = v26;
    v31 = (v29 & 1) != 0 ? *((_QWORD*)v24 + 1) : v29 >> 1;
    while (1) {
      v32 = v30[24];
      v33 = *((_QWORD*)v30 + 4);
      if ((v32 & 1) == 0) {
        v33 = v32 >> 1;
      }
      if (v33 == v31) {
        v34 = (v32 & 1) != 0 ? *((unsigned __int8**)v30 + 5) : v30 + 25;
        v35 = (v29 & 1) != 0 ? *((unsigned __int8**)v24 + 2) : v24 + 1;
        if ((unsigned int)memcmp(v34, v35, v31) == 0) {
          v36 = *v30;
          v37 = *((_QWORD*)v30 + 1);
          if ((v36 & 1) == 0) {
            v37 = v36 >> 1;
          }
          if (v37 == v27) {
            v38 = (v36 & 1) != 0 ? *((unsigned __int8**)v30 + 2) : v30 + 1;
            if ((unsigned int)memcmp(v38, v28, v27) == 0) {
              v40 = *((_QWORD*)v30 + 6);
              v39 = *((_QWORD*)v30 + 7);
              if (v39 != v40) {
                break;
              }
            }
          }
        }
      }
      v30 += 80;
      if (v30 == v25) {
        v24 += 24;
        if (v24 == v83) {
          return 0;
        }
        goto LABEL_31;
      }
    }
    v6 = v81;
    v19 = v80;
  }
  else {
  LABEL_55:
    v30 = v26;
    v42 = (*v24 & 1) != 0 ? *((_QWORD*)v24 + 1) : *v24 >> 1;
    if ((*v24 & 1) != 0) {
      while (1) {
        v43 = v30[24];
        v44 = *((_QWORD*)v30 + 4);
        if ((v43 & 1) == 0) {
          v44 = v43 >> 1;
        }
        if (v44 == v42) {
          v45 = (v43 & 1) != 0 ? *((unsigned __int8**)v30 + 5) : v30 + 25;
          if ((unsigned int)memcmp(v45, *((_QWORD*)v24 + 2), v42) == 0) {
            v40 = *((_QWORD*)v30 + 6);
            v39 = *((_QWORD*)v30 + 7);
            if (v39 != v40) {
              break;
            }
          }
        }
        v30 += 80;
        if (v30 == v25) {
        LABEL_54:
          v24 += 24;
          result = 0;
          if (v24 == v83) {
            return result;
          }
          goto LABEL_55;
        }
      }
    }
    else {
      v30 = v26;
      while (1) {
        v46 = v30[24];
        v47 = *((_QWORD*)v30 + 4);
        if ((v46 & 1) == 0) {
          v47 = v46 >> 1;
        }
        if (v47 == v42) {
          v48 = (v46 & 1) != 0 ? *((unsigned __int8**)v30 + 5) : v30 + 25;
          if ((unsigned int)memcmp(v48, v24 + 1, v42) == 0) {
            v40 = *((_QWORD*)v30 + 6);
            v39 = *((_QWORD*)v30 + 7);
            if (v39 != v40) {
              break;
            }
          }
        }
        v30 += 80;
        if (v30 == v25) {
          goto LABEL_54;
        }
      }
    }
  }
  v49 = v39 - v40;
  if (v39 == v40) {
    return 0;
  }
  if (v30[72] == 1) {
    v50 = v19 & 0x7FFFFFFF;
    v51 = v49 >> 4;
    v52 = v50 / (v49 >> 4);
    v53 = v50 % (v49 >> 4);
    if (v53 != 0) {
      v54 = ~(v52 * v51) + v50;
      v55 = v53 & 7;
      if (v54 >= 7) {
        v56 = v53 & 0x7FFFFFF8;
        do {
          v40 += 128;
          v56 -= 8LL;
        } while (v56 != 0);
      }
      for (; v55 != 0; --v55) {
        v40 += 16;
      }
    }
  }
  v57 = *(_QWORD**)v40;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = (__typeof__(v88)){0};
  v89 = 0;
  v58 = *v82;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v59 = (unsigned __int8*)(v57 + 77);
  GameRoutine_60a020(&v85, *(_QWORD*)(v58 + 8));
  v60 = (unsigned int*)(*(_QWORD*)v40 + 168LL);
  *(_QWORD*)&v88 = *(_QWORD*)(*(_QWORD*)v40 + 160LL);
  *(_QWORD*)&v61 = v88;
  *((_QWORD*)&v61 + 1) = *v60;
  v88 = v61;
  v89 = *(_DWORD*)(*(_QWORD*)v40 + 172LL);
  if (&v90 != v57 + 77) {
    v62 = *v59;
    if ((v90 & 1) != 0) {
      v64 = (v62 & 1) == 0;
      v65 = v62 >> 1;
      if (v64) {
        v66 = (char*)v57 + 617;
      }
      else {
        v66 = (char*)v57[79];
      }
      if (v64) {
        v67 = v65;
      }
      else {
        v67 = v57[78];
      }
      SpineModel_64dde0(&v90, v66, v67);
    }
    else if ((v62 & 1) != 0) {
      GameRoutine_64df20(&v90, v57[79], v57[78]);
    }
    else {
      v63 = v57[78];
      v90 = *(_QWORD*)v59;
      v91 = v63;
      v92 = v57[79];
    }
  }
  v93 = *(_QWORD*)(*(_QWORD*)v40 + 80LL);
  v68 = v6[5];
  if (v68 >= v6[6]) {
    v70 = CharacterSituation_f994e0(v4, &v85);
  }
  else {
    if ((v85 & 1) != 0) {
      fw_text_String_CopyTerminated(v6[5], v87, v86);
    }
    else {
      *(_QWORD*)(v68 + 8) = v86;
      v69 = v85;
      *(_QWORD*)(v68 + 16) = v87;
      *(_QWORD*)v68 = v69;
    }
    *(_OWORD*)(v68 + 32) = v88;
    *(_DWORD*)(v68 + 48) = v89;
    if ((v90 & 1) != 0) {
      fw_text_String_CopyTerminated(v68 + 56, v92, v91);
    }
    else {
      v71 = v90;
      v72 = v92;
      *(_QWORD*)(v68 + 64) = v91;
      *(_QWORD*)(v68 + 72) = v72;
      *(_QWORD*)(v68 + 56) = v71;
    }
    v70 = v68 + 96;
    *(_QWORD*)(v68 + 80) = v93;
  }
  v6[5] = v70;
  game_hub_f96800_alt1((void*)(v84), v6, v30 + 48);
  v73 = *((_QWORD*)v30 + 6);
  if (v73 != 0) {
    v74 = *((_QWORD*)v30 + 7);
    if (v73 == v74) {
      goto LABEL_118;
    }
    do {
      v75 = *(_QWORD*)(v74 - 8);
      if (v75 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
        std___1___shared_weak_count___release_weak(v75);
      }
      v74 -= 16;
    } while (v74 != v73);
    v76 = *((_QWORD*)v30 + 6);
    *((_QWORD*)v30 + 7) = v73;
    if (v76 != 0) {
    LABEL_118:
      v77 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v77 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v77);
    }
  }
  qmemcpy(v30 + 48, v84, 24);
  if ((v90 & 1) != 0 && v92 != 0) {
    v78 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v78);
  }
  if ((v85 & 1) != 0 && v87 != 0) {
    v79 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v79 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v79);
  }
  return 1;
}

__attribute__((swiftcall)) void game_hub_f96800(PSEUDO_X8 x8_, __int64 a1,
                                                char** a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  char* v3;
  char* v4;
  signed __int64 v5;
  _QWORD* v8;
  __n128 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  bool v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  bool v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;

  v3 = *a2;
  v4 = a2[1];
  a3[1] = 0;
  a3[2] = 0;
  v5 = v4 - v3;
  *a3 = 0;
  if (v4 == v3) {
    return;
  }
  if (v5 < 0) {
    GameRoutine_db5cb0(a1);
  }
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, v4 - v3, 16, 0);
  *a3 = v8;
  v10 = v8;
  a3[2] = (char*)v8 + v5;
  do {
    *v10 = *(_QWORD*)v3;
    v11 = *((_QWORD*)v3 + 1);
    v10[1] = v11;
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    v3 += 16;
    v10 += 2;
  } while (v3 != v4);
  v12 = v10 - 2;
  a3[1] = v10;
  while (1) {
    v13 = *v8;
    v14 = v8[1];
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
    }
    v16 = *(_QWORD*)(a1 + 32);
    v15 = *(_QWORD*)(a1 + 40);
    if (v16 == v15) {
      v20 = false;
      if (v14 == 0) {
        goto LABEL_22;
      }
    }
    else {
      v17 = *(_QWORD*)(v13 + 80);
      v18 = v16 + 96;
      do {
        v19 = *(_QWORD*)(v18 - 16);
        v20 = v17 == v19;
        v21 = v17 == v19 || v18 == v15;
        v18 += 96;
      } while (!v21);
      if (v14 == 0) {
        goto LABEL_22;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      v9 = std___1___shared_weak_count___release_weak(v14);
    }
  LABEL_22:
    if (v20) {
      break;
    }
    v21 = v12 == v8;
    v8 += 2;
    if (v21) {
      goto LABEL_50;
    }
  }
  if (v10 != v8) {
    v10 -= 2;
    if (v12 != v8) {
      v10 = v8;
      v22 = v8;
      do {
        v23 = v22[2];
        v24 = v22[3];
        v22 += 2;
        if (v24 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                    memory_order_relaxed);
        }
        v26 = *(_QWORD*)(a1 + 32);
        v25 = *(_QWORD*)(a1 + 40);
        if (v26 == v25) {
          v30 = false;
          if (v24 == 0) {
            goto LABEL_44;
          }
        }
        else {
          v27 = *(_QWORD*)(v23 + 80);
          v28 = v26 + 96;
          do {
            v29 = *(_QWORD*)(v28 - 16);
            v30 = v27 == v29;
            v31 = v27 == v29 || v28 == v25;
            v28 += 96;
          } while (!v31);
          if (v24 == 0) {
          LABEL_44:
            if (!v30) {
              goto LABEL_45;
            }
            goto LABEL_30;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_44;
        }
        (*(void (**)(__int64, long double))(*(_QWORD*)v24 + 16LL))(
            v24, *(long double*)&v9);
        v9 = std___1___shared_weak_count___release_weak(v24);
        if (!v30) {
        LABEL_45:
          v32 = v8[2];
          v33 = v8[3];
          *v22 = 0;
          v22[1] = 0;
          v34 = v10[1];
          *v10 = v32;
          v10[1] = v33;
          if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v34 + 16LL))(
                v34, *(long double*)&v9);
            v9 = std___1___shared_weak_count___release_weak(v34);
          }
          v10 += 2;
        }
      LABEL_30:
        v8 = v22;
      } while (v12 != v22);
    }
  }
LABEL_50:
  v35 = (_QWORD*)a3[1];
  if (v10 != v35) {
    do {
      v36 = *(v35 - 1);
      if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v36 + 16LL))(
            v36, *(long double*)&v9);
        v9 = std___1___shared_weak_count___release_weak(v36);
      }
      v35 -= 2;
    } while (v35 != v10);
    a3[1] = v10;
  }
}

__int64 game_hub_f96ec0(__int64 a1, _QWORD* a2, __int64 a3, _QWORD* a4,
                        bool* a5)
{
  unsigned __int64 v5;
  bool v11;
  __int64 result;
  unsigned __int8* v13;
  unsigned __int8 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  char v19;
  __int64 v20;
  bool v21;
  char v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _DWORD* v25;
  unsigned int v26;
  __int64 v27;
  int v28;
  unsigned int v29;
  unsigned __int64 v30;
  __int64 v31;
  char* v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  char* v36;
  char v37;
  bool v38;
  int v39;
  __int64 v40;
  char v41;
  __int64 i;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64** v46;
  __int64* v47;
  __int64* v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  __int64 v59;
  __int64 v60;
  int v61;
  int v62;
  unsigned int v63;
  int v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 j;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64** v72;
  __int64* v73;
  __int64* v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int8 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  char* v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  char v89;
  char v90;
  bool v91;
  __int64 v92;
  char v93;
  unsigned int v94;
  bool* v95;
  unsigned __int64 v96;
  _QWORD* v97;
  struct {
    __int64 v98[2];
    __int64 v99;
  } v98_;
  struct {
    __int128 v100;
    __int64 v101;
    char gap120_[8];
    __int64 v102;
  } v100_;
  struct {
    __int128 v103;
    _DWORD* v104;
  } v103_;

  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v11 = GameRoutine_f97e30(a1, (__int64)a2, false),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  result = 0;
  if (!v11) {
    return result;
  }
  v97 = a4;
  *(_QWORD*)&v100_.v100 = 0;
  *((_QWORD*)&v100_.v100 + 1) = a2;
  v13 = (unsigned __int8*)*GameSituation_906a40(
      game_GameModeData_instance_ + 136, (__int64*)&v100_.v100),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  LOWORD(v103_.v103) = 0;
  if (v13 == nullptr) {
    v14 = 0;
    goto LABEL_21;
  }
  v14 = *v13;
  if (*v13 == 0) {
    goto LABEL_21;
  }
  v15 = strlen(v13),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v16 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    *((_QWORD*)&v100_.v100 + 1) = v16;
    v100_.v101 = (__int64)v17;
    *(_QWORD*)&v100_.v100 = v18 | 1;
    goto LABEL_14;
  }
  LOBYTE(v100_.v100) = 2 * v15;
  v17 = (char*)&v100_.v100 + 1;
  if (v15 != 0) {
  LABEL_14:
    memmove(v17, v13, v16),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v19 = v103_.v103;
  v17[v16] = 0;
  if ((v19 & 1) != 0 && v103_.v104 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v20),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v5 = *((_QWORD*)&v100_.v100 + 1);
  v103_.v104 = (_DWORD*)v100_.v101;
  v14 = v100_.v100;
  v103_.v103 = v100_.v100;
LABEL_21:
  v22 = v14 & 1;
  v21 = (v14 & 1) == 0;
  v23 = v14 >> 1;
  if (v21) {
    v24 = v23;
  }
  else {
    v24 = v5;
  }
  if (v24 == 4) {
    v25 = v103_.v104;
    if (v22 == 0) {
      v25 = (_DWORD*)((char*)&v103_.v103 + 1);
    }
    if (*v25 == 1819047246) {
      goto LABEL_97;
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v26 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  }
  else {
    v26 = 0;
  }
  if (*(_QWORD*)GameData_212c6c8 != 0) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v27 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v27 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v28 = *(__int16*)(v27 + 2);
  }
  else {
    v28 = 1;
  }
  v96 = v24;
  if (v26 == 3) {
    v29 = 0;
  }
  else {
    v29 = v28;
  }
  if (game_GameModeData_instance_ != 0 && v26 == 3) {
    v29 = *(_DWORD*)(game_GameModeData_instance_ + 64);
  }
  game_112eec0((void*)(&v100_.v100), (__int64)a2, v26, v29),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((v100_.v100 & 1) != 0) {
    v30 = *((_QWORD*)&v100_.v100 + 1);
  }
  else {
    v30 = (unsigned __int64)(unsigned __int8)v100_.v100 >> 1;
  }
  if ((v100_.v100 & 1) != 0 && v100_.v101 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v31),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  if (v30 == 0) {
  LABEL_97:
    result = 0;
    if (v22 == 0) {
      return result;
    }
  LABEL_98:
    if (v103_.v104 == nullptr) {
      return result;
    }
    goto LABEL_99;
  }
  v33 = *(char**)(a1 + 56);
  v32 = *(char**)(a1 + 64);
  if (v33 != v32) {
    v34 = v32 - v33 - 8;
    if ((~(_BYTE)v34 & 0x18) != 0) {
      v35 = ((unsigned __int8)((unsigned int)v34 >> 3) + 1) & 3;
      while (*(_QWORD**)v33 != a2) {
        v33 += 8;
        if (--v35 == 0) {
          goto LABEL_57;
        }
      }
    }
    else {
    LABEL_57:
      if (v34 < 0x18) {
        goto LABEL_69;
      }
      v33 += 16;
      while (1) {
        if (*((_QWORD**)v33 - 2) == a2) {
          v33 -= 16;
          goto LABEL_68;
        }
        if (*((_QWORD**)v33 - 1) == a2) {
          v33 -= 8;
          goto LABEL_68;
        }
        if (*(_QWORD**)v33 == a2) {
          goto LABEL_68;
        }
        if (*((_QWORD**)v33 + 1) == a2) {
          break;
        }
        v36 = v33 + 16;
        v33 += 32;
        if (v36 == v32) {
          goto LABEL_69;
        }
      }
      v33 += 8;
    }
  LABEL_68:
    if (v32 != v33) {
      goto LABEL_97;
    }
  }
LABEL_69:
  *(_QWORD*)&v100_.v100 = 0;
  *((_QWORD*)&v100_.v100 + 1) = a2;
  v37 = GameSituation_906440(game_GameModeData_instance_ + 136,
                             (__int64*)&v100_.v100),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v38 = v37 == 3;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_97;
  }
  v39 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  v93 = v37;
  if (v39 == 3) {
    LOBYTE(v100_.v100) = 18;
    *(_WORD*)((char*)&v100_.v100 + 9) = 169;
    *(_QWORD*)((char*)&v100_.v100 + 1) = 0x83E3A383E3AD82E3LL;
    goto LABEL_157;
  }
  if (v39 == 2) {
    if (a2 != nullptr &&
        (v53 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)(a2[3] + 1072LL))) != 0 &&
        *(_DWORD*)(v53 + 32) != 0 && game_GameModeData_instance_ != 0 &&
        (v54 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)(a2[3] + 1192LL))) != 0) {
      if (v93 != 3 && *(_DWORD*)(v54 + 32) == 0) {
        goto LABEL_97;
      }
    }
    else if (v93 != 3) {
      goto LABEL_97;
    }
    v57 = a2[42];
    if (v57 == 0) {
      goto LABEL_156;
    }
    v58 = GameRoutine_db0f70(v57),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v58 == 0) {
      goto LABEL_156;
    }
    game_db1110((void*)((__int64*)&v100_.v100), v58),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_1a0a7c0((void*)(v98_.v98), &GameData_1ab0f35, &v100_.v100),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7a8220(v97, v98_.v98),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((v98_.v98[0] & 1) != 0 && v98_.v99 != 0) {
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v59),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    Manager_6326c0(v98_.v98, (__int64)&GameData_1ab0f35),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7a8220(v97, v98_.v98),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((v98_.v98[0] & 1) != 0 && v98_.v99 != 0) {
      v60 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v60 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v60),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    if ((v100_.v100 & 1) != 0) {
      goto LABEL_158;
    }
    goto LABEL_202;
  }
  if (v39 != 1) {
    goto LABEL_97;
  }
  v92 = a3;
  v40 = a2[42];
  v41 = v37;
  v95 = a5;
  v91 = v37 == 3;
  if (v40 == 0) {
    a3 = v92;
    v61 = 0;
    v62 = 1;
    goto LABEL_148;
  }
  v87 = v5;
  v89 = v22;
  for (i = a2[42];; i = v43) {
    v45 = *(_QWORD*)(i + 80);
    v44 = (__int64*)(i + 80);
    v43 = v45;
    if (v45 == 0) {
      goto LABEL_121;
    }
    v46 = *(__int64***)(v40 + 24);
    v47 = *v46;
    v48 = v46[1];
    if (v48 != *v46) {
      break;
    }
  LABEL_75:
    v40 = v43;
  }
  v49 = 0;
  do {
    v50 = *v47;
    v51 = v47[1];
    if (v51 == *v47) {
    LABEL_79:
      ++v49;
    }
    else {
      while (1) {
        if (*(_QWORD*)v50 != 0) {
          v52 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v37 = GameVariable_828f50(game_GameModeData_instance_ + 40, v50),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
          if (*(_BYTE*)(v50 + 16) != ((v52 == 0) | v37 & 1)) {
            break;
          }
        }
        v50 += 24;
        if (v50 == v51) {
          goto LABEL_79;
        }
      }
    }
    v47 += 6;
  } while (v47 != v48);
  if (v49 != 0) {
    v43 = *v44;
    a5 = v95;
    goto LABEL_75;
  }
  a5 = v95;
  if (v40 == 0) {
    a3 = v92;
    v22 = v89;
    v38 = v91;
    v61 = 0;
    v62 = 1;
    v5 = v87;
    goto LABEL_147;
  }
LABEL_121:
  v63 = *(unsigned __int8*)(v40 + 40);
  v62 = 1;
  v61 = 0;
  if (v63 <= 4) {
    if (*(unsigned __int8*)(v40 + 40) > 2u) {
      a3 = v92;
      v22 = v89;
      v38 = v91;
      v5 = v87;
      if (v63 == 3) {
        v62 = 0;
        v61 = 3;
        goto LABEL_147;
      }
      v21 = v63 == 4;
      v41 = v93;
      if (v21) {
        v62 = 0;
        v61 = 8;
      }
    }
    else {
      a3 = v92;
      v22 = v89;
      v38 = v91;
      v5 = v87;
      if (v63 == 1) {
        v62 = 0;
        v61 = 1;
        goto LABEL_147;
      }
      v21 = v63 == 2;
      v41 = v93;
      if (v21) {
        v62 = 0;
        v61 = 2;
      }
    }
  }
  else {
    if (*(unsigned __int8*)(v40 + 40) > 6u) {
      a3 = v92;
      v22 = v89;
      v38 = v91;
      v5 = v87;
      if (v63 == 7) {
        v62 = 0;
        v61 = 4;
      }
      else {
        if (v63 != 8) {
          v21 = v63 == 9;
          v41 = v93;
          if (v21) {
            v62 = 0;
            v61 = 9;
          }
          goto LABEL_148;
        }
        v61 = 7;
        v62 = 0;
      }
    LABEL_147:
      v41 = v93;
      goto LABEL_148;
    }
    a3 = v92;
    v22 = v89;
    v38 = v91;
    v5 = v87;
    if (v63 == 5) {
      v62 = 0;
      v61 = 5;
      goto LABEL_147;
    }
    v21 = v63 == 6;
    v41 = v93;
    if (v21) {
      v62 = 0;
      v61 = 6;
    }
  }
LABEL_148:
  if (v41 == 3) {
    if ((unsigned int)(v61 - 1) > 8) {
      v64 = 0;
    }
    else {
      v64 = (unsigned __int8)GameData_1b9df78[v61 - 1];
    }
    v65 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v65 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
    if (v64 != v65) {
      goto LABEL_156;
    }
  }
  if (v62 != 0) {
  LABEL_156:
    Manager_6326c0((__int64*)&v100_.v100, (__int64)&GameData_1ab0f35),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  LABEL_157:
    GameRoutine_7a8220(v97, &v100_.v100),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((v100_.v100 & 1) != 0) {
    LABEL_158:
      if (v100_.v101 != 0) {
        v66 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v66 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v66),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
  }
  else {
    v67 = a2[42];
    v94 = v61;
    if (v67 != 0) {
      v88 = v5;
      v90 = v22;
      for (j = a2[42];; j = v69) {
        v71 = *(_QWORD*)(j + 80);
        v70 = (__int64*)(j + 80);
        v69 = v71;
        if (v71 == 0) {
          break;
        }
        v72 = *(__int64***)(v67 + 24);
        v73 = *v72;
        v74 = v72[1];
        if (v74 != *v72) {
          v75 = 0;
          do {
            v77 = *v73;
            v76 = v73[1];
            if (v76 == *v73) {
            LABEL_168:
              ++v75;
            }
            else {
              while (1) {
                if (*(_QWORD*)v77 != 0) {
                  v78 = game_GameModeData_instance_;
                  if (game_GameModeData_instance_ != 0) {
                    v37 = GameVariable_828f50(game_GameModeData_instance_ + 40,
                                              v77),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                  }
                  if (*(_BYTE*)(v77 + 16) != ((v78 == 0) | v37 & 1)) {
                    break;
                  }
                }
                v77 += 24;
                if (v77 == v76) {
                  goto LABEL_168;
                }
              }
            }
            v73 += 6;
          } while (v73 != v74);
          a5 = v95;
          if (v75 == 0) {
            break;
          }
          v69 = *v70;
        }
        v67 = v69;
      }
      v79 = *(unsigned __int8*)(v67 + 40);
      v22 = v90;
      v5 = v88;
    }
    else {
      v79 = 0;
    }
    if ((unsigned int)strcmp(*(&game_g_hero_ids + v79), a2[1]) == 0 ||
        (v98_.v98[0] = 0, v98_.v98[1] = (__int64)a2,
         X8CALL_X0(_QWORD*,
                   GameSituation_906320((void*)(&v100_.v100),
                                        game_GameModeData_instance_ + 136,
                                        v98_.v98, v80)),
         v100_.v102 != 0) &&
            (v81 = *(_QWORD*)(v100_.v102 + 88)) != 0 &&
            (v82 = GameRoutine_67f460((__int64)a2),
             (unsigned int)strcmp(*(&game_g_hero_ids + v82),
                                  *(_QWORD*)(v81 + 8)) == 0)) {
      game_db1110((void*)((__int64*)&v100_.v100), v94),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      GameRoutine_1a0a7c0((void*)(v98_.v98), &GameData_1ab0f35, &v100_.v100),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      GameRoutine_7a8220(v97, v98_.v98),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if ((v98_.v98[0] & 1) != 0 && v98_.v99 != 0) {
        v84 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v84 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v84),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      Manager_6326c0(v98_.v98, (__int64)&GameData_1ab0f35),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      GameRoutine_7a8220(v97, v98_.v98),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      a3 = v92;
      if ((v98_.v98[0] & 1) != 0 && v98_.v99 != 0) {
        v85 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v85 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v85),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v38 = v91;
      if ((v100_.v100 & 1) != 0) {
        goto LABEL_158;
      }
    }
    else {
      Manager_6326c0((__int64*)&v100_.v100, (__int64)&GameData_1ab0f35),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      GameRoutine_7a8220(v97, &v100_.v100),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if ((v100_.v100 & 1) != 0 && v100_.v101 != 0) {
        v83 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v83 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v83),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      a3 = v92;
      v38 = v91;
    }
  }
LABEL_202:
  *a5 = v38;
  if ((__int128*)a3 == &v103_.v103) {
    goto LABEL_210;
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    if (v22 != 0) {
      v86 = (char*)v103_.v104;
    }
    else {
      v86 = (char*)&v103_.v103 + 1;
    }
    SpineModel_64dde0_alt1((__int64*)a3, (__int64)v86, v96),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v22 = v103_.v103 & 1;
  LABEL_210:
    result = 1;
    if (v22 == 0) {
      return result;
    }
    goto LABEL_98;
  }
  if (v22 == 0) {
    *(_OWORD*)a3 = v103_.v103;
    *(_QWORD*)(a3 + 16) = v103_.v104;
    return 1;
  }
  GameRoutine_64df20_alt1((_QWORD*)a3, (__int64)v103_.v104, v5),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  result = 1;
  if (v103_.v104 != nullptr) {
  LABEL_99:
    v55 = result;
    v56 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v56),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    return v55;
  }
  return result;
}

__int64 game_hub_fa1b40(float* a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float32x4_t v9;
  __int64* v10;
  float v11;
  __int64 v12;
  float32x4_t v13;
  int8x16_t v14;
  float v15;
  float v16;
  float v17;
  int v18;
  float v19;
  float v20;
  unsigned __int32 v21;
  unsigned __int32 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  __int64 v26;
  long double v27;
  long double v28;
  __int64 v29;
  float v30;
  float v31;
  __int64 v32;
  __int64 v33;
  float v34;
  __int64 v35;
  long double v36;
  long double v37;
  __int64 v38;
  float v39;
  float v40;
  __int64 v41;
  __int64 v42;
  float v43;
  __int64 v44;
  long double v45;
  long double v46;
  __int64 v47;
  float v48;
  float v49;
  __int64 result;
  __int64 v51;
  __int64 v52;
  float v53;
  __int64 v54;
  long double v55;
  long double v56;
  __int64 v57;
  __int64 v58;
  float32x4_t v59;
  long double v60;
  _QWORD v61[25];
  struct {
    __int64* v62;
    __int64 v63;
    __int64 v64;
  } v62_;

  v4 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v4 != 0) {
    v5 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v6 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6);
    std___1___shared_weak_count___release_weak_alt1(v4);
    if (v7 == 0 || v5 == 0) {
      v9 = (__typeof__(v9)){0};
      if (v7 == 0) {
        goto LABEL_12;
      }
    }
    else {
      v9 = vaddq_f32(
          *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 16LL) + 560LL),
          COERCE_AS(float32x4_t, GameData_1a82cb0));
      LANES128(v9).n128_u32[3] = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v59 = v9;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v7);
      v9 = v59;
    }
  }
  else {
    v9 = (__typeof__(v9)){0};
  }
LABEL_12:
  v60 = *(long double*)&v9;
  if ((*(_BYTE*)(GameData_21f3d10 + 232) & 4) != 0 ||
      *(_DWORD*)(GameData_21f3d10 + 140) != 0 ||
      (*(_BYTE*)(GameData_21f3d08 + 64) & 1) != 0 ||
      *(_QWORD*)(GameData_21f3d10 + 200) == 0) {
    v62_.v63 = 0;
    v62_.v64 = 0;
    v62_.v62 = nullptr;
  LABEL_25:
    v11 = 0x1.fffffe0000000p+127f;
    goto LABEL_26;
  }
  DungeonController_f5f960((void*)((__int64*)&v62_.v62));
  v10 = v62_.v62;
  if (v62_.v62 == (__int64*)v62_.v63) {
    v9 = *(float32x4_t*)&v60;
    goto LABEL_25;
  }
  v9 = *(float32x4_t*)&v60;
  v11 = 0x1.fffffe0000000p+127f;
  do {
    v12 = *v10++;
    v13 = vsubq_f32(
        *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v12 + 24) + 16LL) + 560LL),
        *(float32x4_t*)&v60);
    LANES128(v13).n128_u32[1] =
        vmuls_lane_f32(0x1.0000000000000p+2f,
                       COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]), 1);
    v14 = vmulq_f32(v13, v13);
    LANES128(v14).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_u64[0];
    v15 = LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]))))
              .n64_f32[0] +
          -0x1.0000000000000p+1f;
    if (v15 < 0x0.0p+0f) {
      v15 = 0x0.0p+0f;
    }
    if (v15 < v11) {
      v11 = v15;
    }
  } while (v10 != (__int64*)v62_.v63);
LABEL_26:
  v16 = v11 / 0x1.9000000000000p+4f;
  v17 = 0x1.0000000000000p+0f;
  if (v16 > 0x1.0000000000000p+0f) {
    v16 = 0x1.0000000000000p+0f;
  }
  v18 = (int)(float)(v16 * 0x1.0000000000000p+2f);
  v19 = fabsf(a2 / 0x1.99999a0000000p-3f);
  if (v18 != 3) {
    v17 = 0x0.0p+0f;
  }
  v20 = a1[10];
  if (v20 <= v17) {
    if (v20 < v17) {
      v20 = v19 + v20;
      if (v20 > v17) {
        v20 = v17;
      }
    }
  }
  else {
    v20 = v20 - v19;
    if (v20 < v17) {
      v20 = v17;
    }
  }
  v21 = LANES128(v9).n128_u32[1];
  v22 = LANES128(v9).n128_u32[2];
  a1[10] = v20;
  if ((snd_fnd_WeakHandle_isValid((__int64*)a1 + 3) & 1) != 0) {
    v23 = snd_fnd_WeakHandle_get((__int64)(a1 + 6));
    if (v23 != 0) {
      v24 = v23 - 5592;
    }
    else {
      v24 = 0;
    }
    v25 = a1[3] * a1[10];
    snd_Fade_Fade_10c830((__int64)v61, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v24 + 40) + 72LL))(
        v24 + 40, v61, v25);
    snd_Fade_Destroy_Fade(v61);
    v26 = snd_fnd_WeakHandle_get((__int64)(a1 + 6));
    LODWORD(v27) = v21;
    LODWORD(v28) = v22;
    if (v26 != 0) {
      v29 = v26 - 5592;
    }
    else {
      v29 = 0;
    }
    (*(void (**)(__int64, long double, long double, long double))(
        *(_QWORD*)(v29 + 40) + 1024LL))(v29 + 40, v60, v27, v28);
  }
  v30 = 0x1.0000000000000p+0f;
  if (v18 != 2) {
    v30 = 0x0.0p+0f;
  }
  v31 = a1[16];
  if (v31 <= v30) {
    if (v31 < v30) {
      v31 = v19 + v31;
      if (v31 > v30) {
        v31 = v30;
      }
    }
  }
  else {
    v31 = v31 - v19;
    if (v31 < v30) {
      v31 = v30;
    }
  }
  a1[16] = v31;
  if ((snd_fnd_WeakHandle_isValid((__int64*)a1 + 6) & 1) != 0) {
    v32 = snd_fnd_WeakHandle_get((__int64)(a1 + 12));
    if (v32 != 0) {
      v33 = v32 - 5592;
    }
    else {
      v33 = 0;
    }
    v34 = a1[3] * a1[16];
    snd_Fade_Fade_10c830((__int64)v61, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v33 + 40) + 72LL))(
        v33 + 40, v61, v34);
    snd_Fade_Destroy_Fade(v61);
    v35 = snd_fnd_WeakHandle_get((__int64)(a1 + 12));
    LODWORD(v36) = v21;
    LODWORD(v37) = v22;
    if (v35 != 0) {
      v38 = v35 - 5592;
    }
    else {
      v38 = 0;
    }
    (*(void (**)(__int64, long double, long double, long double))(
        *(_QWORD*)(v38 + 40) + 1024LL))(v38 + 40, v60, v36, v37);
  }
  v39 = 0x1.0000000000000p+0f;
  if (v18 != 1) {
    v39 = 0x0.0p+0f;
  }
  v40 = a1[22];
  if (v40 <= v39) {
    if (v40 < v39) {
      v40 = v19 + v40;
      if (v40 > v39) {
        v40 = v39;
      }
    }
  }
  else {
    v40 = v40 - v19;
    if (v40 < v39) {
      v40 = v39;
    }
  }
  a1[22] = v40;
  if ((snd_fnd_WeakHandle_isValid((__int64*)a1 + 9) & 1) != 0) {
    v41 = snd_fnd_WeakHandle_get((__int64)(a1 + 18));
    if (v41 != 0) {
      v42 = v41 - 5592;
    }
    else {
      v42 = 0;
    }
    v43 = a1[3] * a1[22];
    snd_Fade_Fade_10c830((__int64)v61, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v42 + 40) + 72LL))(
        v42 + 40, v61, v43);
    snd_Fade_Destroy_Fade(v61);
    v44 = snd_fnd_WeakHandle_get((__int64)(a1 + 18));
    LODWORD(v45) = v21;
    LODWORD(v46) = v22;
    if (v44 != 0) {
      v47 = v44 - 5592;
    }
    else {
      v47 = 0;
    }
    (*(void (**)(__int64, long double, long double, long double))(
        *(_QWORD*)(v47 + 40) + 1024LL))(v47 + 40, v60, v45, v46);
  }
  v48 = 0x1.0000000000000p+0f;
  if (v18 != 0) {
    v48 = 0x0.0p+0f;
  }
  v49 = a1[28];
  if (v49 > v48) {
    v49 = v49 - v19;
    if (v49 >= v48) {
      goto LABEL_87;
    }
  LABEL_86:
    v49 = v48;
    goto LABEL_87;
  }
  if (v49 < v48) {
    v49 = v19 + v49;
    if (v49 > v48) {
      goto LABEL_86;
    }
  }
LABEL_87:
  a1[28] = v49;
  result = snd_fnd_WeakHandle_isValid((__int64*)a1 + 12);
  if ((result & 1) != 0) {
    v51 = snd_fnd_WeakHandle_get((__int64)(a1 + 24));
    if (v51 != 0) {
      v52 = v51 - 5592;
    }
    else {
      v52 = 0;
    }
    v53 = a1[3] * a1[28];
    snd_Fade_Fade_10c830((__int64)v61, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v52 + 40) + 72LL))(
        v52 + 40, v61, v53);
    snd_Fade_Destroy_Fade(v61);
    v54 = snd_fnd_WeakHandle_get((__int64)(a1 + 24));
    LODWORD(v55) = v21;
    LODWORD(v56) = v22;
    if (v54 != 0) {
      v57 = v54 - 5592;
    }
    else {
      v57 = 0;
    }
    result = (*(__int64 (**)(__int64, long double, long double, long double))(
        *(_QWORD*)(v57 + 40) + 1024LL))(v57 + 40, v60, v55, v56);
  }
  if (v62_.v62 != nullptr) {
    v62_.v63 = (__int64)v62_.v62;
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v58);
  }
  return result;
}

__attribute__((swiftcall)) void game_hub_fa81d0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v1;
  __int64 v2;
  __int64 result;

  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) != 0) {
    fw_text_String_CopyTerminated(a1, *(_QWORD*)(GameData_21f3d10 + 80),
                                  *(_QWORD*)(GameData_21f3d10 + 72));
    return;
  }
  v1 = *(_QWORD*)(GameData_21f3d10 + 64);
  v2 = *(_QWORD*)(GameData_21f3d10 + 80);
  a1[1] = *(_QWORD*)(GameData_21f3d10 + 72);
  a1[2] = v2;
  *a1 = v1;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_hub_fa84b0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v1 = *(unsigned __int8*)(GameData_21f3cc0 + 40);
  v2 = v1 >> 1;
  if ((v1 & 1) != 0) {
    v2 = *(_QWORD*)(GameData_21f3cc0 + 48);
  }
  if (v2 != 0) {
    if ((v1 & 1) != 0) {
      {
        fw_text_String_CopyTerminated(a1, *(_QWORD*)(GameData_21f3cc0 + 56),
                                      *(_QWORD*)(GameData_21f3cc0 + 48));
        return;
      }
    }
    else {
      v3 = *(_QWORD*)(GameData_21f3cc0 + 40);
      v4 = *(_QWORD*)(GameData_21f3cc0 + 56);
      a1[1] = *(_QWORD*)(GameData_21f3cc0 + 48);
      a1[2] = v4;
      *a1 = v3;
    }
  }
  else {
    a1[1] = 0;
    a1[2] = 0;
    *a1 = 0x6C6C756E08LL;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_hub_fa87c0(PSEUDO_X8 x8_)
{

#pragma clang fp contract(off)
  _WORD* a1 = (_WORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v8;

  v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v2 == 0) {
    goto LABEL_11;
  }
  v3 = *(_QWORD*)(GameData_21ec7c0 + 72);
  v4 = *(_QWORD*)(GameData_21ec7c0 + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                            memory_order_relaxed);
  v5 = std___1___shared_weak_count_lock(v4);
  v6 = std___1___shared_weak_count___release_weak_alt1(v2);
  v8 = v5 == 0 || v3 == 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    v6 = std___1___shared_weak_count___release_weak_alt1(v5);
    if (v8) {
      goto LABEL_11;
    }
  }
  else if (v8) {
  LABEL_11:
    *a1 = 0;
    return;
  }
  std___1_to_string_1a0acd0(
      v6, *(float*)(*(_QWORD*)(*(_QWORD*)(v3 + 24) + 16LL) + 560LL));
}

__attribute__((swiftcall)) void game_hub_fa8a90(PSEUDO_X8 x8_)
{

#pragma clang fp contract(off)
  _WORD* a1 = (_WORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v8;

  v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v2 == 0) {
    goto LABEL_11;
  }
  v3 = *(_QWORD*)(GameData_21ec7c0 + 72);
  v4 = *(_QWORD*)(GameData_21ec7c0 + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                            memory_order_relaxed);
  v5 = std___1___shared_weak_count_lock(v4);
  v6 = std___1___shared_weak_count___release_weak_alt1(v2);
  v8 = v5 == 0 || v3 == 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    v6 = std___1___shared_weak_count___release_weak_alt1(v5);
    if (v8) {
      goto LABEL_11;
    }
  }
  else if (v8) {
  LABEL_11:
    *a1 = 0;
    return;
  }
  std___1_to_string_1a0acd0(
      v6, *(float*)(*(_QWORD*)(*(_QWORD*)(v3 + 24) + 16LL) + 564LL));
}

__attribute__((swiftcall)) void game_hub_fa8d50(PSEUDO_X8 x8_)
{

#pragma clang fp contract(off)
  _WORD* a1 = (_WORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v8;

  v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v2 == 0) {
    goto LABEL_11;
  }
  v3 = *(_QWORD*)(GameData_21ec7c0 + 72);
  v4 = *(_QWORD*)(GameData_21ec7c0 + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                            memory_order_relaxed);
  v5 = std___1___shared_weak_count_lock(v4);
  v6 = std___1___shared_weak_count___release_weak_alt1(v2);
  v8 = v5 == 0 || v3 == 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    v6 = std___1___shared_weak_count___release_weak_alt1(v5);
    if (v8) {
      goto LABEL_11;
    }
  }
  else if (v8) {
  LABEL_11:
    *a1 = 0;
    return;
  }
  std___1_to_string_1a0acd0(
      v6, *(float*)(*(_QWORD*)(*(_QWORD*)(v3 + 24) + 16LL) + 568LL));
}

__attribute__((swiftcall)) void game_hub_fa9030(PSEUDO_X8 x8_)
{
  _WORD* a1 = (_WORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  long double v6;
  bool v8;

  v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v2 == 0) {
    goto LABEL_11;
  }
  v3 = *(_QWORD*)(GameData_21ec7c0 + 72);
  v4 = *(_QWORD*)(GameData_21ec7c0 + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                            memory_order_relaxed);
  v5 = std___1___shared_weak_count_lock(v4);
  *(__n128*)&v6 = std___1___shared_weak_count___release_weak(v2);
  v8 = v5 == 0 || v3 == 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(v5, v6);
    std___1___shared_weak_count___release_weak(v5);
    if (v8) {
      goto LABEL_11;
    }
  }
  else if (v8) {
  LABEL_11:
    *a1 = 0;
    return;
  }
  std___1_to_string_1a0acd0_alt1(
      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 24) + 16LL) + 488LL) +
                36LL) *
      0x1.ca5dc20000000p+5);
}

__attribute__((swiftcall)) void game_hub_fa9c10(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  unsigned __int64 result;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;

  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v2 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v3 = (__int64)*(&GameData_1f9caf8 + v2);
  result = strlen(v3);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt2(result);
  }
  v5 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (result | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16, 0);
    a1[1] = v5;
    a1[2] = v8;
    *a1 = v7 | 1;
    v6 = (char*)v8;
  }
  else {
    *(_BYTE*)a1 = 2 * result;
    v6 = (char*)a1 + 1;
    if (result == 0) {
      goto LABEL_12;
    }
  }
  result = memmove(v6, v3, v5);
LABEL_12:
  v6[v5] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_hub_faac90(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  char* v3;
  unsigned __int64 result;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;

  v2 = *(unsigned int*)(GameData_21f3cc0 + 160);
  if ((unsigned int)v2 > 2) {
    v3 = nullptr;
  }
  else {
    v3 = (&GameData_1ffb600)[2 * v2];
  }
  result = strlen(v3);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt2(result);
  }
  v5 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (result | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16, 0);
    a1[1] = v5;
    a1[2] = v8;
    *a1 = v7 | 1;
    v6 = (char*)v8;
  }
  else {
    *(_BYTE*)a1 = 2 * result;
    v6 = (char*)a1 + 1;
    if (result == 0) {
      goto LABEL_13;
    }
  }
  result = memmove(v6, v3, v5);
LABEL_13:
  v6[v5] = 0;
  {
    result;
    return;
  }
}

bool game_hub_fb50e0()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  unsigned __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  bool v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v15;
  __int64* v16;
  __int64* v17;
  char v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  _BOOL4 v22;
  __int64* v23;
  __int64 v24;
  float32x4_t* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int128 v30;
  __int64 v31;
  float32x4_t v32;
  int8x16_t v33;
  __int64 v34;
  unsigned int v35;
  float32x4_t v36;
  float v37;
  _QWORD* v38;
  float v39;
  __int64 v40;
  int8x16_t* v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int128 v45;
  struct {
    __int64* v46;
    __int64* v47;
    char* v48;
  } v46_;
  struct {
    __int64 v49;
    void* v50;
    __int64 v51;
  } v49_;
  struct {
    _QWORD v52[18];
    int v53;
    float v54;
  } v52_;

  v49_.v50 = &GameData_1adb26c;
  v49_.v49 = game_HashString((__int64)&GameData_1adb26c);
  if (game_GameModeData_instance_ == 0) {
    return false;
  }
  v0 =
      game_GameVariableTable_Find(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                  (unsigned __int64*)&v49_.v49);
  if (v0 == 0 || *(_DWORD*)(v0 + 32) == 0) {
    return false;
  }
  v1 = *(_QWORD*)GameData_212ec00;
  v46_.v46 = nullptr;
  v46_.v47 = nullptr;
  v46_.v48 = nullptr;
  v2 = *(unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 40LL);
  v3 = *(__int64**)(*(_QWORD*)GameData_212dbb8[0] + 112LL);
  v4 = *(__int64**)(*(_QWORD*)GameData_212dbb8[0] + 120LL);
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = (v2 & 1) == 0;
  v7 = v2 >> 1;
  if (v6) {
    v8 = *(_QWORD*)GameData_212dbb8[0] + 41LL;
  }
  else {
    v8 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 56LL);
  }
  if (v6) {
    v9 = v7;
  }
  else {
    v9 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 48LL);
  }
  v10 = (char*)v4 - (char*)v3;
  if (v4 != v3) {
    if (0xAAAAAAAAAAAAAAABLL * (v10 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00_alt1();
    }
    v11 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, (char*)v4 - (char*)v3, 16, 0);
    v46_.v46 = v11;
    v46_.v48 = (char*)v11 + v10;
    do {
      if ((*(_BYTE*)v3 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(v11, v3[2], v3[1]);
      }
      else {
        v12 = *v3;
        v13 = v3[2];
        v11[1] = v3[1];
        v11[2] = v13;
        *v11 = v12;
      }
      v3 += 3;
      v11 += 3;
    } while (v3 != v4);
    v46_.v47 = v11;
  }
  game_hub_LocatorDispos_BuildInitTransformLocator((void*)(&v49_.v49), v1, v8,
                                                   v9, &v46_.v46);
  v15 = v46_.v46;
  if (v46_.v46 != nullptr) {
    v16 = v46_.v47;
    if (v46_.v46 == v46_.v47) {
      goto LABEL_30;
    }
    v17 = v46_.v47;
    do {
      v18 = *((_BYTE*)v17 - 24);
      v17 -= 3;
      if ((v18 & 1) != 0 && *(v16 - 1) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v19);
      }
      v16 = v17;
    } while (v17 != v15);
    v46_.v47 = v15;
    if (v46_.v46 != nullptr) {
    LABEL_30:
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v20);
    }
  }
  if ((v49_.v49 & 1) != 0) {
    v21 = (unsigned __int64)v49_.v50;
  }
  else {
    v21 = (unsigned __int64)(unsigned __int8)v49_.v49 >> 1;
  }
  v22 = v21 != 0;
  if (v21 != 0) {
    v23 = GameData_212d458[0];
    v24 = *(_QWORD*)(*GameData_212d458[0] + 80);
    if (v24 != 0) {
      v25 = *(float32x4_t**)(*GameData_212d458[0] + 72);
      v26 = *(_QWORD*)(*GameData_212d458[0] + 80);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                memory_order_relaxed);
      v27 = std___1___shared_weak_count_lock(v26);
      std___1___shared_weak_count___release_weak_alt1(v24);
      if (v27 != 0 && v25 != nullptr) {
        *(_QWORD*)&v30 = v52_.v52[17];
        LODWORD(v28) = v52_.v53;
        *((_QWORD*)&v30 + 1) = v28;
        v31 = *(_QWORD*)(LANES128(v25[1]).n128_u64[1] + 16);
        v45 = v30;
        game_zview_d12d30_alt1(v31, (int32x2_t*)&v45, 1);
        v32 = vsubq_f32(
            v25[79],
            *(float32x4_t*)(*(_QWORD*)(LANES128(v25[1]).n128_u64[1] + 16) +
                            560LL));
        v33 = vmulq_f32(v32, v32);
        LANES128(v33).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
                .n64_f32[0] > 0x1.0000000000000p-23f) {
          v34 = *(_QWORD*)(*v23 + 120);
          if ((*(_BYTE*)(v34 + 12) & 1) == 0) {
            *(_BYTE*)(v34 + 12) = 1;
          }
        }
        v35 = DWORD2(v45);
        LANES128(v25[79]).n128_u64[0] = v45;
        v36 = v25[79];
        LANES128(v36).n128_u64[1] = v35;
        v25[79] = v36;
        HubCharacterNatives_cabfc0((__int64)v25, 1);
        v37 = v52_.v54;
        if ((LANES128(v25[83]).n128_u8[1] & 1) == 0) {
          LANES128(v25[83]).n128_u8[1] = 1;
        }
        v38 = *(_QWORD**)(LANES128(v25[1]).n128_u64[1] + 16);
        v39 = v37 * 0x1.1df46a0000000p-6f;
        if (v38[107] != 0) {
          v40 = v38[108];
          v38[107] = 0;
          v38[108] = 0;
          if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
            std___1___shared_weak_count___release_weak_alt1(v40);
          }
        }
        v41 = (int8x16_t*)v38[61];
        v42 = LANES128(v41[11]).n128_u8[4];
        LANES128(v41[2]).n128_f32[0] = v39;
        LANES128(v41[2]).n128_f32[1] = v39;
        if (v42 == 1) {
          LANES128(v41[11]).n128_u8[4] = 0;
        }
        CharacterRotate_d519c0(v41);
        goto LABEL_57;
      }
      if (v27 != 0) {
      LABEL_57:
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak_alt1(v27);
        }
      }
    }
    v43 = *(_QWORD*)GameData_212dc60[0];
    game_hub_d97a00(*(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 16LL),
                    0x0.0p+0f);
    LODWORD(v45) = 0;
    WORD2(v45) = 0;
    DWORD2(v45) = 1065353216;
    GameRoutine_cdeee0(v43, (__int64)&v45);
    GameRoutine_d1fb60(*(_QWORD*)GameData_212dc38[0], 1);
    *(_DWORD*)(*(_QWORD*)GameData_212c6a0[0] + 928LL) = 0;
  }
  HubNatives_ccbf80_alt1((__int64)v52_.v52);
  if ((v49_.v49 & 1) != 0 && v49_.v51 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v44);
  }
  return v22;
}

void game_hub_fb6600(float32x4_t* a1, unsigned __int32 a2, float32x4_t* a3,
                     float32x4_t* a4)
{
  int16x4_t v8;
  int16x4_t v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int v13;
  float32x4_t v14;
  unsigned int v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float v19;
  long double v20;
  long double v21;
  unsigned __int32 v22;
  __int64 v23;
  float v24;
  int8x16_t v25;
  float v26;
  __int64 v27;
  float v28;
  long double v29;
  float v30;
  float v31;
  __int64* v32;
  __int64 v33;
  int8x16_t v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  unsigned int v51;
  unsigned int i;
  float32x4_t* v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  float v58;
  unsigned __int64 v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  float v65;
  float32x4_t v66;
  float32x4_t v67;
  __int64 v68;
  __int64 v69;
  float v70;
  float32x4_t v71;
  float32x4_t v72;
  __int64* v73;
  __int64 v74;
  float32x4_t v75;
  int8x16_t v76;
  float32x4_t v77;
  __int64 v78;

  LANES64(v8).n64_u64[0] =
      LANES64_OF(vmovn_s32(vceqq_f32(a1[2], *a3))).n64_u64[0];
  if ((LANES64(v8).n64_u8[0] & 1) == 0 || (LANES64(v8).n64_u8[2] & 1) == 0 ||
      (LANES64(v8).n64_u8[4] & 1) == 0 ||
      (LANES64(v9).n64_u64[0] =
           LANES64_OF(vmovn_s32(vceqq_f32(a1[3], *a4))).n64_u64[0],
       (LANES64(v9).n64_u8[0] & 1) == 0) ||
      (LANES64(v9).n64_u8[2] & 1) == 0 || (LANES64(v9).n64_u8[4] & 1) == 0 ||
      LANES128(a1[4]).n128_u32[0] != a2) {
    v11 = LANES128(*(a1)).n128_u64[1];
    v10 = LANES128(a1[1]).n128_u64[0];
    if (v11 != v10) {
      do {
        GameRoutine_14a1390(v11, 1);
        v11 += 16LL;
      } while (v11 != v10);
      v11 = LANES128(*(a1)).n128_u64[1];
      v10 = LANES128(a1[1]).n128_u64[0];
    }
    for (; v10 != v11; v10 -= 16LL) {
      v12 = *(_QWORD*)(v10 - 8);
      if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
    }
    LANES128(a1[1]).n128_u64[0] = v11;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v68 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v68;
      __cxa_guard_release(&GameData_21a6130);
    }
    v13 = DWORD2(GameData_21a6120);
    LANES128(a1[2]).n128_u64[0] = GameData_21a6120;
    v14 = a1[2];
    LANES128(v14).n128_u64[1] = v13;
    a1[2] = v14;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v69 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v69;
      __cxa_guard_release(&GameData_21a6130);
    }
    v15 = DWORD2(GameData_21a6120);
    LANES128(a1[3]).n128_u64[0] = GameData_21a6120;
    v16 = a1[3];
    LANES128(v16).n128_u64[1] = v15;
    a1[3] = v16;
    v17 = vsubq_f32(*a3, *a4);
    v18 = vmulq_f32(v17, v17);
    LANES128(v18).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
            .n64_u64[0];
    v70 = LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]))))
              .n64_f32[0];
    v19 = fmodf(v70, 0.5);
    v20 = COERCE_LONG_DOUBLE(vsubq_f32(*a4, *a3));
    v21 = v20;
    v22 = DWORD1(v20);
    DWORD1(v21) = 0;
    v71 = *(float32x4_t*)&v21;
    v24 = atan2f(v23, v20, *((float*)&v20 + 2));
    v25 = vmulq_f32(v71, v71);
    LANES128(v25).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_u64[0];
    LANES128(v25).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_u64[0];
    LODWORD(v26) =
        LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_u32[0];
    LANES128(v25).n128_u32[0] = v22;
    v28 = atan2f(v27, *(long double*)&v25, v26);
    *(float*)&v29 = v24;
    v30 = 0.0;
    math_Quat_FromYawPitchRoll((void*)(&v76), v29, v28, 0.0);
    GameRoutine_622ac0((void*)(&v77), &v76);
    v72 = vmulq_f32(v77, vdupq_n_s32(0x42652EE1u));
    v31 = v19 + 0x1.0000000000000p+0;
    v32 = (__int64*)GameData_212dc48[0];
    do {
      v33 = *v32;
      LANES128(v34).n128_u64[0] = 0;
      LANES128(v35).n128_u64[0] = 0;
      LANES128(v34).n128_u64[1] = COERCE_UNSIGNED_INT(v30 + (float)(v31 * 0.5));
      v36 = vmulq_f32(v76, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v37).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v38).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v39).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v34).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v35).n128_i8[8] =
          vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v37).n128_u64[1] = LANES128(v38).n128_u64[0];
      LANES128(v39).n128_u64[1] = LANES128(v39).n128_u64[0];
      LANES128(v38).n128_u64[1] = LANES128(v34).n128_u64[0];
      *(int32x2_t*)&LANES128(v34).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v36).n128_u64[0]), 1);
      LANES128(v40).n128_u64[0] = LANES128(v76).n128_u64[0];
      v41 = vmulq_f32(v35, v37);
      v42 = vmlaq_f32(vmulq_f32(v36, v39),
                      COERCE_AS(float32x4_t, GameData_1a83800), v41);
      LANES128(v41).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v43 = vmlaq_f32(v42, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v34, v41));
      LANES128(v34).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v34).n128_i8[8] =
          vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      LANES128(v36).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
      v44 = vmlsq_f32(v43, v34, v38);
      LANES128(v34).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v38).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v40).n128_u64[1] = LANES128(v34).n128_u64[0];
      *(int8x8_t*)&LANES128(v38).n128_i8[8] =
          vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v41).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v45 = vmlaq_f32(vmulq_f32(v36, v44),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v40, v38));
      LANES128(v38).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v41).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v44).n128_u64[0]), 1);
      LANES128(v34).n128_u64[1] = LANES128(v38).n128_u64[0];
      LANES128(v38).n128_u64[1] = LANES128(v76).n128_u64[0];
      LANES128(v46).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v46).n128_i8[8] =
          vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v47 = vmlsq_f32(vmlaq_f32(v45, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v38, v41)),
                      v46, v34);
      LANES128(v47).n128_u32[3] = 0;
      v75 = vaddq_f32(*a3, v47);
      GameRoutine_e1b4d0((void*)(&v77));
      game_hub_e1bfe0((void*)(&v73), v33, &v77, &v75);
      if ((LANES128(v77).n128_u8[0] & 1) != 0 && v78 != 0) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v48 = 128;
        }
        else {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v48);
      }
      v49 = v73;
      v50 = *v73;
      if (*v73 != 0 && *(_DWORD*)(v50 + 16) == *((_DWORD*)v73 + 2)) {
        v51 = *(_DWORD*)(v50 + 36);
        if (v51 != 0) {
          for (i = 0; i < v51; ++i) {
            if ((int)v51 > (int)i) {
              v53 = *(float32x4_t**)(v50 + 40 + 8LL * (int)i);
              if (v53 != nullptr) {
                LANES128(v53[8]).n128_u8[0] = 1;
                v53[3] = v72;
                v51 = *(_DWORD*)(v50 + 36);
              }
            }
          }
        }
      }
      v54 = (_QWORD*)LANES128(a1[1]).n128_u64[0];
      if ((unsigned __int64)v54 >= LANES128(a1[1]).n128_u64[1]) {
        v56 = GameRoutine_e5d5a0(&LANES128(*(a1)).n128_i8[8], &v73);
      }
      else {
        *v54 = v49;
        v55 = v74;
        v54[1] = v74;
        if (v55 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 8), 1u,
                                    memory_order_relaxed);
        }
        v56 = (__int64)(v54 + 2);
      }
      v57 = v74;
      v58 = 0.5;
      LANES128(a1[1]).n128_u64[0] = v56;
      if (v57 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, float))(*(_QWORD*)v57 + 16LL))(v57, 0.5);
        std___1___shared_weak_count___release_weak(v57);
        v58 = 0.5;
      }
      v30 = v30 + v58;
    } while (v30 <= (float)(v70 + -0x1.0000000000000p+0));
    v59 = (LANES128(a1[1]).n128_u64[0] - LANES128(*(a1)).n128_u64[1]) >> 4;
    if ((int)v59 >= 4) {
      v60 = (unsigned int)v59 >> 1;
      v61 = -16;
      v62 = 0;
      v63 = 0;
      if (v60 >= 6) {
        v60 = 6;
      }
      v64 = v60 - 1;
      do {
        v65 = powf((float)((float)(unsigned int)v63 + 0.5) /
                       (float)(unsigned int)v64,
                   1.5);
        GameRoutine_14a1b00(*(_QWORD*)(LANES128(*(a1)).n128_u64[1] + v62), v65);
        GameRoutine_14a1b00(*(_QWORD*)(LANES128(a1[1]).n128_u64[0] + v61), v65);
        ++v63;
        v61 -= 16;
        v62 += 16;
      } while (v64 != v63);
    }
    LANES128(a1[2]).n128_u32[0] = LANES128(*(a3)).n128_u32[0];
    LANES128(a1[2]).n128_u32[1] = LANES128(*(a3)).n128_u32[1];
    v66 = a1[2];
    LANES128(v66).n128_u64[1] = LANES128(*(a3)).n128_u32[2];
    a1[2] = v66;
    LANES128(a1[3]).n128_u32[0] = LANES128(*(a4)).n128_u32[0];
    LANES128(a1[3]).n128_u32[1] = LANES128(*(a4)).n128_u32[1];
    v67 = a1[3];
    LANES128(v67).n128_u32[2] = LANES128(*(a4)).n128_u32[2];
    LANES128(a1[4]).n128_u32[0] = a2;
    LANES128(v67).n128_u64[1] = LANES128(v67).n128_u32[2];
    a1[3] = v67;
  }
}

unsigned __int64 game_hub_fb6f80(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  unsigned __int64 result;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char* v22;
  unsigned __int64 v23;
  __int64 v24;
  struct {
    __int64 v25;
    unsigned __int64 v26;
    char* v27;
  } v25_;

  v2 = *a2;
  v4 = (v2 & 1) == 0;
  v5 = v2 >> 1;
  if (v4) {
    v6 = (unsigned __int64)(a2 + 1);
  }
  else {
    v6 = *((_QWORD*)a2 + 2);
  }
  if (v4) {
    v7 = v5;
  }
  else {
    v7 = *((_QWORD*)a2 + 1);
  }
  game_db1620((void*)((__int64)&v25_.v25), v6, v7);
  v8 = game_GameModeData_instance_;
  if ((v25_.v25 & 1) != 0) {
    v9 = v25_.v27;
  }
  else {
    v9 = (char*)&v25_.v25 + 1;
  }
  result = game_HashString((__int64)v9);
  if (result != 0) {
    v11 = *(_QWORD**)(v8 + 48);
    v12 = v11[2];
    if (v12 != 0 && v11[4] != 0) {
      v14 = v12 - 1;
      if ((v12 & (v12 - 1)) != 0) {
        v15 = result;
        if (result >= v12) {
          v15 = result % v12;
        }
      }
      else {
        v15 = v14 & result;
      }
      v16 = *(_QWORD**)(v11[1] + 8 * v15);
      if (v16 != nullptr) {
        v17 = (_QWORD*)*v16;
        if (v17 != nullptr) {
          if ((v12 & v14) == 0) {
            while (1) {
              v19 = v17[1];
              if (result == v19) {
                if (v17[2] == result) {
                  goto LABEL_35;
                }
              }
              else if ((v19 & v14) != v15) {
                goto LABEL_52;
              }
              v17 = (_QWORD*)*v17;
              if (v17 == nullptr) {
                goto LABEL_52;
              }
            }
          }
          do {
            v18 = v17[1];
            if (result == v18) {
              if (v17[2] == result) {
              LABEL_35:
                result = a1 + 24;
                if (*(_BYTE*)(a1 + 48) == 1) {
                  if ((__int64*)result != &v25_.v25) {
                    if ((*(_BYTE*)result & 1) != 0) {
                      if ((v25_.v25 & 1) != 0) {
                        v22 = v25_.v27;
                      }
                      else {
                        v22 = (char*)&v25_.v25 + 1;
                      }
                      if ((v25_.v25 & 1) != 0) {
                        v23 = v25_.v26;
                      }
                      else {
                        v23 = (unsigned __int64)(unsigned __int8)v25_.v25 >> 1;
                      }
                      result = (unsigned __int64)SpineModel_64dde0_alt1(
                          (__int64*)result, (__int64)v22, v23);
                    }
                    else if ((v25_.v25 & 1) != 0) {
                      result = (unsigned __int64)GameRoutine_64df20_alt1(
                          (_QWORD*)result, (__int64)v25_.v27, v25_.v26);
                    }
                    else {
                      v20 = v25_.v26;
                      *(_QWORD*)result = v25_.v25;
                      *(_QWORD*)(a1 + 32) = v20;
                      *(_QWORD*)(a1 + 40) = v25_.v27;
                    }
                  }
                }
                else {
                  if ((v25_.v25 & 1) != 0) {
                    result = fw_text_String_CopyTerminated_alt1(
                        (__int64*)result, (__int64)v25_.v27, v25_.v26);
                  }
                  else {
                    v21 = v25_.v26;
                    *(_QWORD*)result = v25_.v25;
                    *(_QWORD*)(a1 + 32) = v21;
                    *(_QWORD*)(a1 + 40) = v25_.v27;
                  }
                  *(_BYTE*)(a1 + 48) = 1;
                }
                break;
              }
            }
            else {
              if (v18 >= v12) {
                v18 %= v12;
              }
              if (v18 != v15) {
                break;
              }
            }
            v17 = (_QWORD*)*v17;
          } while (v17 != nullptr);
        }
      }
    }
  }
LABEL_52:
  if ((v25_.v25 & 1) != 0 && v25_.v27 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
  }
  return result;
}

__int64 game_hub_1001800(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _DWORD* v3;
  __int128 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[26];

  v1 = *(_QWORD*)(GameData_21f3ca0 + 72);
  if (v1 != 0) {
    *(_QWORD*)(result + 160) = v1;
    v2 = result;
    v3 = *(_DWORD**)(v1 + 24);
    *(_DWORD*)(result + 176) = v3[76];
    *(_DWORD*)(result + 180) = v3[77];
    v4 = *(_OWORD*)(result + 176);
    *((_QWORD*)&v4 + 1) = (unsigned int)v3[78];
    *(_OWORD*)(result + 176) = v4;
    game_104bd20((void*)(v12), v1, (__int64)"Loc_Eff_Obelisk_A009");
    v5 = *(_OWORD*)v12;
    v6 = *(_OWORD*)&v12[2];
    *(_DWORD*)(v2 + 276) = 0;
    *(_OWORD*)(v2 + 192) = v5;
    *(_OWORD*)(v2 + 208) = v6;
    v7 = *(_OWORD*)&v12[6];
    *(_OWORD*)(v2 + 224) = *(_OWORD*)&v12[4];
    *(_OWORD*)(v2 + 240) = v7;
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    strcpy(v9, "SE_EVT_SecondObelisk_Appear");
    snd_Fade_Fade_10c830((__int64)v12, 0x0.0p+0f);
    snd_play_ff2d0((__int64)v9, (__int64)v9, (__int64)v12, 0, 0x10001u, 0,
                   0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v12);
    GameRoutine_112180(v2 + 280, (__int64)&v11);
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v10);
  }
  return result;
}

__n128 game_hub_1001960()
{
  __int64* v0;
  __int64 v1;
  __n128 result;
  struct {
    __int64 v3;
    __int64 v4;
  } v3_;
  _QWORD v5[4];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = (__int64*)GameData_212dc60[0];
  LODWORD(v5[1]) = 1065353216;
  LODWORD(v5[0]) = 0;
  WORD2(v5[0]) = 0;
  GameRoutine_cdeee0(*(_QWORD*)GameData_212dc60[0], (__int64)v5),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *v0;
  v5[0] = 0x402A2D0E00000000LL;
  v5[1] = 0xBF800000411CC083LL;
  v5[2] = 1127481344;
  v5[3] = 0x4220000000000000LL;
  game_hub_cdf420((void*)(&v3_.v3), v1, (__int64)v5, 0x0.0p+0f,
                  0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v3_.v4 != 0) {
    return std___1___shared_weak_count___release_weak(v3_.v4);
  }
  return result;
}

__int64 game_hub_1001a00()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  float32x4_t v2;
  float32x4_t v3;
  float32x4_t v4;
  int8x16_t v5;
  __int128 v6;
  int v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    char gap24_[8];
    __int128 v12;
  } v11_;

  v0 = GameData_212dc38[0];
  v1 = *(_QWORD*)(*(_QWORD*)GameData_212dc38[0] + 912LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v10 = v1;
    v8 = __cxa_guard_acquire(&GameData_21a6130);
    v1 = v10;
    if (v8 != 0) {
      v9 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v9;
      __cxa_guard_release(&GameData_21a6130);
      v1 = v10;
    }
  }
  LANES128(v2).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 0x3DB851EC3D051EB9LL),
                           COERCE_AS(float32x2_t, 0x3DB851EC3D051EB9LL)))
          .n64_u64[0];
  LANES128(v2).n128_u64[1] = LANES128(v2).n128_u64[0];
  v3 = vrsqrteq_f32(v2);
  v4 = vmulq_f32(v3, vrsqrtsq_f32(v3, vmulq_f32(v2, v3)));
  v11_.v11 = 0x3E99999A3E99999ALL;
  v5 = vbicq_s8(
      vmulq_f32(vmulq_f32(vmulq_f32(v4, vrsqrtsq_f32(v4, vmulq_f32(v2, v4))),
                          COERCE_AS(float32x4_t, GameData_1a82990)),
                vdupq_n_s32(0x3E4CCCCDu)),
      vceqzq_f32(v2));
  *(_QWORD*)&v6 = LANES128(v5).n128_u64[0];
  *((_QWORD*)&v6 + 1) = LANES128(v5).n128_u32[2];
  v11_.v12 = v6;
  GameRoutine_edec80((_QWORD*)(v1 + 8), &v11_.v11);
  game_edede0(*(_QWORD*)(*(_QWORD*)v0 + 912LL), 0x1.99999a0000000p-3f,
              0x1.47ae140000000p-6f, 0x1.0000000000000p+0f);
  return game_edede0(*(_QWORD*)(*(_QWORD*)v0 + 912LL), 0x1.99999a0000000p-1f,
                     0x1.47ae140000000p-8f, 0x1.0000000000000p+0f);
}

__n128 game_hub_1001b60(float32x4_t* a1, __n128 result)
{

#pragma clang fp contract(off)
  __int64 v2;
  float32x4_t v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  float32x4_t v9;

  v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v2 != 0) {
    v3 = a1[11];
    v4 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v5 = *(_QWORD*)(GameData_21ec7c0 + 80);
    v9 = v3;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock(v5);
    result = std___1___shared_weak_count___release_weak(v2);
    if (v6 == 0 || v4 == 0) {
      if (v6 == 0) {
        return result;
      }
    }
    else {
      v8 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 24LL);
      *(_BYTE*)(v8 + 25) = 0;
      *(_QWORD*)(v8 + 32) = 0;
      *(_QWORD*)(v8 + 37) = 0;
      *(_QWORD*)(v8 + 80) = 0;
      *(_BYTE*)(v8 + 96) = 1;
      *(_DWORD*)(v8 + 32) = 1086918608;
      *(_BYTE*)(v8 + 64) = 1;
      *(float32x4_t*)(v8 + 48) =
          vaddq_f32(v9, COERCE_AS(float32x4_t, GameData_1a83410));
      game_d523c0(*(_QWORD*)(*(_QWORD*)(v8 + 16) + 488LL));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 16LL))(
          v6, *(long double*)&result);
      return std___1___shared_weak_count___release_weak(v6);
    }
  }
  return result;
}

__n128 game_hub_1001d00(__int64 a1)
{

#pragma clang fp contract(off)
  __n128 result;
  struct {
    __int64 v2;
    __int64 v3;
  } v2_;
  _QWORD v4[4];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4[0] = 0x402A2D0E00000000LL;
  v4[1] = 0xBF80000042153021LL;
  v4[2] = 1127481344;
  v4[3] = 0x4220000000000000LL;
  game_hub_cdf420((void*)(&v2_.v2), GameData_21f3ca8, (__int64)v4,
                  *(float*)(a1 + 152), 0x1.0000000000000p+0f,
                  0x1.4000000000000p+0f),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v2_.v3 != 0) {
    return std___1___shared_weak_count___release_weak(v2_.v3);
  }
  return result;
}

void game_hub_102d900(__int64 a1)
{
  char v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int128 v14;
  __int64 v15;
  __int128 v16;
  __int128 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int128 v36;
  __int64 v37;
  __int64* v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  char v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int128 v57;
  __int64 v58[2];
  __int64 v59[3];
  struct {
    __int128 v60;
    int v61;
    char gap100_[4];
    __int64 v62;
    unsigned __int64 v63;
    __int64 v64;
    __int64 v65;
    unsigned __int64 v66;
    __int64 v67;
    int v68;
    char v69;
    char gap157_[3];
    char v70;
    char gap161_[7];
    __int64 v71;
    __int64 v72;
  } v60_;
  struct {
    _QWORD v73[3];
    __int64 v74;
    __int64 v75;
  } v73_;

  if (*(_BYTE*)(a1 + 32) != 0) {
    v2 = *(__int64**)(GameData_220d618 + 40);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v2[1];
      if (*v2 != v4) {
        v56 = a1 + 248;
        v6 = GameData_212ebb0[0];
        v7 = 0x249249249249249LL;
        do {
          LOBYTE(v60_.v62) = 0;
          v60_.v70 = 0;
          v60_.v61 = 0;
          v60_.v60 = (__typeof__(v60_.v60)){0};
          v60_.v71 = 0;
          v60_.v72 = 0;
          v9 = *(_QWORD*)(*(_QWORD*)v3 + 8LL);
          v8 = *(_QWORD*)(*(_QWORD*)v3 + 16LL);
          if (v8 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v9 != 0) {
            v10 = *(_QWORD*)(v9 + 24);
            if (v10 != 0) {
              v11 = std___1___shared_weak_count_lock(v10);
              if (v11 != 0) {
                v13 = *(_QWORD*)(v9 + 16);
                if (v13 != 0) {
                  *(_QWORD*)&v14 = *(_QWORD*)(v13 + 160);
                  LODWORD(v12) = *(_DWORD*)(v13 + 168);
                  v1 = 1;
                  *((_QWORD*)&v14 + 1) = v12;
                  v57 = v14;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) != 0) {
                  if (v13 != 0) {
                    goto LABEL_15;
                  }
                }
                else {
                  v15 = v11;
                  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
                  std___1___shared_weak_count___release_weak(v15);
                  if (v13 != 0) {
                  LABEL_15:
                    if (v8 == 0) {
                      goto LABEL_20;
                    }
                    goto LABEL_19;
                  }
                }
              }
            }
          }
          v16 = v57;
          v1 = 0;
          LOBYTE(v16) = 0;
          v57 = v16;
          if (v8 == 0) {
            goto LABEL_20;
          }
        LABEL_19:
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
          LABEL_20:
            if ((v1 & 1) != 0) {
              goto LABEL_21;
            }
            goto LABEL_72;
          }
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
          if ((v1 & 1) != 0) {
          LABEL_21:
            *(_QWORD*)&v17 = v57;
            *((_QWORD*)&v17 + 1) = DWORD2(v57);
            v60_.v60 = v17;
            v18 = *(_QWORD*)(*(_QWORD*)v3 + 16LL);
            v58[0] = *(_QWORD*)(*(_QWORD*)v3 + 8LL);
            v58[1] = v18;
            if (v18 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                        memory_order_relaxed);
              game_hub_102e120((void*)(v59), a1, v58);
              if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
                std___1___shared_weak_count___release_weak(v18);
              }
            }
            else {
              game_hub_102e120((void*)(v59), a1, v58);
            }
            if ((game_hub_102e240_alt1(a1, &v60_.v60, v59) & 1) == 0) {
              goto LABEL_67;
            }
            v19 = *v6;
            v20 = GameRoutine_f71d40(*v6, (__int64)&v60_.v60, a1 + 40);
            if ((GameRoutine_f71cb0(v20, v20) & 1) == 0 ||
                (unsigned int)game_hub_f71fc0_alt1(v19, (__int64)&v60_.v60,
                                                   a1 + 40) != 0 &&
                    (*(_BYTE*)(v19 + 32) & 2) == 0) {
              goto LABEL_67;
            }
            v60_.v61 = GameRoutine_f71d40(*v6, (__int64)&v60_.v60, a1 + 40);
            v22 = *(_QWORD*)(*(_QWORD*)v3 + 8LL);
            v21 = *(_QWORD*)(*(_QWORD*)v3 + 16LL);
            if (v21 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                        memory_order_relaxed);
            }
            v23 = v60_.v72;
            v60_.v71 = v22;
            v60_.v72 = v21;
            if (v23 != 0) {
              std___1___shared_weak_count___release_weak(v23);
            }
            v25 = *(_QWORD*)(a1 + 240);
            v24 = *(_QWORD*)(a1 + 248);
            if (v25 < v24) {
              v26 = *((_QWORD*)&v60_.v60 + 1);
              *(_BYTE*)(v25 + 24) = 0;
              v27 = (__int64*)(v25 + 24);
              *(_BYTE*)(v25 + 80) = 0;
              *(_QWORD*)(v25 + 8) = v26;
              *(_QWORD*)v25 = v60_.v60;
              *(_DWORD*)(v25 + 16) = v60_.v61;
              if (v60_.v70 == 1) {
                if ((v60_.v62 & 1) != 0) {
                  fw_text_String_CopyTerminated_alt1(v27, v60_.v64, v60_.v63);
                  if ((v60_.v65 & 1) == 0) {
                    goto LABEL_55;
                  }
                LABEL_39:
                  fw_text_String_CopyTerminated_alt1((__int64*)(v25 + 48),
                                                     v60_.v67, v60_.v66);
                }
                else {
                  v28 = v60_.v62;
                  v29 = v60_.v64;
                  *(_QWORD*)(v25 + 32) = v60_.v63;
                  *(_QWORD*)(v25 + 40) = v29;
                  *v27 = v28;
                  if ((v60_.v65 & 1) != 0) {
                    goto LABEL_39;
                  }
                LABEL_55:
                  *(_QWORD*)(v25 + 56) = v60_.v66;
                  v41 = v60_.v65;
                  *(_QWORD*)(v25 + 64) = v60_.v67;
                  *(_QWORD*)(v25 + 48) = v41;
                }
                v42 = v60_.v69;
                *(_DWORD*)(v25 + 72) = v60_.v68;
                *(_BYTE*)(v25 + 76) = v42;
                *(_BYTE*)(v25 + 80) = 1;
              }
              *(_QWORD*)(v25 + 88) = v60_.v71;
              v43 = v60_.v72;
              *(_QWORD*)(v25 + 96) = v60_.v72;
              if (v43 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16),
                                          1u, memory_order_relaxed);
              }
              v44 = v25 + 112;
            LABEL_66:
              *(_QWORD*)(a1 + 240) = v44;
            LABEL_67:
              if ((v59[0] & 1) != 0 && v59[2] != 0) {
                v53 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v53 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v53);
              }
              goto LABEL_72;
            }
            v30 = *(_QWORD*)(a1 + 232);
            v31 = v25 - v30;
            v32 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v25 - v30) >> 4) + 1;
            if (v32 > v7) {
              GameRoutine_102f270();
            }
            v33 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v24 - v30) >> 4);
            if (2 * v33 > v32) {
              v32 = 2 * v33;
            }
            if (v33 >= 0x124924924924924LL) {
              v34 = v7;
            }
            else {
              v34 = v32;
            }
            v73_.v74 = 0;
            v73_.v75 = v56;
            if (v34 != 0) {
              if (v34 > v7) {
                GameRoutine_60a210_alt1();
              }
              v35 = fw_memory_HeapManager_Allocate_alt1(
                  fw_memory_g_heap_manager, 112 * v34, 16, 0);
            }
            else {
              v35 = 0;
            }
            v36 = v60_.v60;
            v37 = v35 + v31;
            *(_BYTE*)(v37 + 24) = 0;
            v38 = (__int64*)(v37 + 24);
            *(_BYTE*)(v37 + 80) = 0;
            *(_OWORD*)v37 = v36;
            *(_DWORD*)(v37 + 16) = v60_.v61;
            if (v60_.v70 == 1) {
              if ((v60_.v62 & 1) != 0) {
                fw_text_String_CopyTerminated_alt1(v38, v60_.v64, v60_.v63);
                if ((v60_.v65 & 1) != 0) {
                  goto LABEL_61;
                }
              LABEL_53:
                v40 = v60_.v66;
                *(_QWORD*)(v37 + 48) = v60_.v65;
                *(_QWORD*)(v37 + 56) = v40;
                *(_QWORD*)(v37 + 64) = v60_.v67;
              }
              else {
                v39 = v60_.v63;
                *v38 = v60_.v62;
                *(_QWORD*)(v37 + 32) = v39;
                *(_QWORD*)(v37 + 40) = v60_.v64;
                if ((v60_.v65 & 1) == 0) {
                  goto LABEL_53;
                }
              LABEL_61:
                fw_text_String_CopyTerminated_alt1((__int64*)(v37 + 48),
                                                   v60_.v67, v60_.v66);
              }
              *(_DWORD*)(v37 + 72) = v60_.v68;
              *(_BYTE*)(v37 + 76) = v60_.v69;
              *(_BYTE*)(v37 + 80) = 1;
            }
            v45 = v60_.v72;
            v46 = v7;
            *(_QWORD*)(v37 + 88) = v60_.v71;
            *(_QWORD*)(v37 + 96) = v45;
            if (v45 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16), 1u,
                                        memory_order_relaxed);
            }
            v47 = *(__int64**)(a1 + 232);
            v48 = *(__int64**)(a1 + 240);
            v49 = v35 + 112 * v34;
            v44 = v37 + 112;
            v50 = v37 + (char*)v47 - (char*)v48;
            GameRoutine_102f3c0(v47, v48, v50);
            v51 = *(_QWORD*)(a1 + 232);
            v52 = *(_QWORD*)(a1 + 248);
            *(_QWORD*)(a1 + 232) = v50;
            *(_QWORD*)(a1 + 240) = v37 + 112;
            *(_QWORD*)(a1 + 248) = v49;
            v73_.v73[2] = v51;
            v73_.v74 = v52;
            v73_.v73[0] = v51;
            v73_.v73[1] = v51;
            GameRoutine_102f2a0(v73_.v73);
            v7 = v46;
            v6 = &GameData_220b6c8;
            goto LABEL_66;
          }
        LABEL_72:
          if (v60_.v72 != 0) {
            std___1___shared_weak_count___release_weak(v60_.v72);
          }
          if (v60_.v70 == 1) {
            if ((v60_.v65 & 1) != 0 && v60_.v67 != 0) {
              v54 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v54 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v54);
            }
            if ((v60_.v62 & 1) != 0 && v60_.v64 != 0) {
              v55 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v55 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v55);
            }
          }
          v3 += 16;
        } while (v3 != v4);
      }
    }
  }
}

__int64 game_hub_102e240(__int64 a1, __int128* a2, unsigned __int8* a3)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64* v8;
  unsigned __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  int v16;
  unsigned __int64 v17;
  char v18;
  unsigned __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int128 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  _QWORD* v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  unsigned __int64 v45;
  __int64* v46;
  unsigned __int64 v47;
  char* v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v57[3];
  _QWORD v58[3];
  struct {
    __int64 v59;
    unsigned __int64 v60;
  } v59_;
  __int64 v61[2];
  struct {
    _QWORD v62[2];
    int v63;
    char gap100_[12];
    char v64;
  } v62_;
  struct {
    __int64 v65;
    __int64 v66;
    __int64 v67;
  } v65_;
  struct {
    _QWORD v68[2];
    char* v69;
  } v68_;
  int v70;

  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *a3;
  if ((v3 & 1) != 0) {
    v4 = *((_QWORD*)a3 + 1);
  }
  else {
    v4 = v3 >> 1;
  }
  if (v4 == 0) {
    return 1;
  }
  LocatorDispos_db2180_alt1(
      (void*)(v68_.v68),
      (unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 40LL), a3),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v65_.v66 = 0;
  v65_.v67 = 0;
  v65_.v65 = 0;
  v70 = 0;
  v8 = GameData_212ef18[0];
  v9 = *(unsigned __int8*)(a1 + 40);
  v10 = (v9 & 1) == 0;
  v11 = v9 >> 1;
  if (v10) {
    v12 = v11;
  }
  else {
    v12 = *(_QWORD*)(a1 + 48);
  }
  if (v10) {
    v13 = a1 + 41;
  }
  else {
    v13 = *(_QWORD*)(a1 + 56);
  }
  if ((v68_.v68[0] & 1) != 0) {
    v14 = v68_.v69;
  }
  else {
    v14 = (char*)v68_.v68 + 1;
  }
  if ((v68_.v68[0] & 1) != 0) {
    v15 = v68_.v68[1];
  }
  else {
    v15 = (unsigned __int64)LOBYTE(v68_.v68[0]) >> 1;
  }
  v16 = GlobalMapData_e27700(*(_QWORD**)GameData_212ef18[0], v13, v12,
                             (__int64)v14, v15, &v65_.v65, &v70),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v16 != 0) {
    if (v16 != 2) {
      goto LABEL_104;
    }
    v17 = game_hub_e286a0(*v8, &v65_.v65),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v18 & 1) != 0) {
      v19 = v17;
      game_hub_e28d20((void*)(v62_.v62), *v8, v17),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v62_.v64 == 1) {
        v20 = v62_.v62[1];
        v22 = v65_.v65;
        v21 = v65_.v66;
        v59_.v60 = 0;
        __builtin_memset(v61, 0, 13);
        v59_.v59 = 0;
        __builtin_memset(v58, 0, sizeof(v58));
        *(_QWORD*)a2 = v62_.v62[0];
        v23 = *a2;
        *((_QWORD*)&v23 + 1) = v20;
        *a2 = v23;
        if (v21 != v22) {
          LocatorDispos_db1f30((void*)(v57), (unsigned __int8*)(v22 + 144)),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          qmemcpy(v58, v57, sizeof(v58));
        }
        if (&v59_.v59 != (__int64*)a3) {
          if ((*a3 & 1) != 0) {
            GameRoutine_64df20_alt1(&v59_.v59, *((_QWORD*)a3 + 2),
                                    *((_QWORD*)a3 + 1)),
                v18 =
                    COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v24 = *((_QWORD*)a3 + 1);
            v59_.v59 = *(_QWORD*)a3;
            v59_.v60 = v24;
            v61[0] = *((_QWORD*)a3 + 2);
          }
        }
        if ((v62_.v64 & 1) == 0) {
          GameRoutine_8123d0(),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        LODWORD(v61[1]) = v62_.v63;
        v27 = *(_QWORD**)(*(_QWORD*)GameData_212dc68 + 152LL);
        v28 = *(_QWORD*)GameData_212dc68 + 160LL;
        if (v27 != (_QWORD*)v28) {
          while (1) {
            v29 = (_QWORD*)v27[7];
            v30 = (_QWORD*)v27[8];
            if (v29 != v30) {
              while (*(_QWORD*)(*v29 + 176LL) != v19) {
                v29 += 2;
                if (v29 == v30) {
                  goto LABEL_39;
                }
              }
            }
            if (v29 != v30) {
              break;
            }
          LABEL_39:
            v29 = (_QWORD*)v27[10];
            v31 = (_QWORD*)v27[11];
            if (v29 != v31) {
              while (*(_QWORD*)(*v29 + 176LL) != v19) {
                v29 += 2;
                if (v29 == v31) {
                  goto LABEL_44;
                }
              }
            }
            if (v29 != v31) {
              break;
            }
          LABEL_44:
            v32 = (_QWORD*)v27[1];
            if (v32 != nullptr) {
              do {
                v33 = v32;
                v32 = (_QWORD*)*v32;
              } while (v32 != nullptr);
            }
            else {
              do {
                v33 = (_QWORD*)v27[2];
                v10 = v27 == (_QWORD*)*v33;
                v27 = v33;
              } while (!v10);
            }
            v27 = v33;
            if (v33 == (_QWORD*)v28) {
              goto LABEL_62;
            }
          }
          v34 = *v29;
          v35 = v29[1];
          if (v35 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v34 != 0) {
            v36 = *(_QWORD*)(v34 + 1384);
            v37 = *(_QWORD*)(v34 + 1376);
            v38 = *(_DWORD*)(v34 + 256);
            if (v36 == v37 && v38 == 0) {
              BYTE4(v61[1]) = 1;
            }
          }
          if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
                v18 =
                    COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v35),
                v18 =
                    COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      LABEL_62:
        v40 = (__int64*)a2 + 3;
        if (*((_BYTE*)a2 + 80) == 1) {
          if (v40 != v58) {
            if ((*(_BYTE*)v40 & 1) != 0) {
              if ((v58[0] & 1) != 0) {
                v44 = (char*)v58[2];
              }
              else {
                v44 = (char*)v58 + 1;
              }
              if ((v58[0] & 1) != 0) {
                v45 = v58[1];
              }
              else {
                v45 = (unsigned __int64)LOBYTE(v58[0]) >> 1;
              }
              SpineModel_64dde0_alt1(v40, (__int64)v44, v45),
                  v18 = COERCE_AS(
                      __typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else if ((v58[0] & 1) != 0) {
              GameRoutine_64df20_alt1(v40, v58[2], v58[1]),
                  v18 = COERCE_AS(
                      __typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else {
              v41 = v58[1];
              *v40 = v58[0];
              *((_QWORD*)a2 + 4) = v41;
              *((_QWORD*)a2 + 5) = v58[2];
            }
            v46 = (__int64*)(a2 + 3);
            if ((a2[3] & 1) != 0) {
              if ((v59_.v59 & 1) != 0) {
                v48 = (char*)v61[0];
              }
              else {
                v48 = (char*)&v59_.v59 + 1;
              }
              if ((v59_.v59 & 1) != 0) {
                v49 = v59_.v60;
              }
              else {
                v49 = (unsigned __int64)(unsigned __int8)v59_.v59 >> 1;
              }
              SpineModel_64dde0_alt1(v46, (__int64)v48, v49),
                  v18 = COERCE_AS(
                      __typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else if ((v59_.v59 & 1) != 0) {
              GameRoutine_64df20_alt1(v46, v61[0], v59_.v60),
                  v18 = COERCE_AS(
                      __typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else {
              v47 = v59_.v60;
              *v46 = v59_.v59;
              *((_QWORD*)a2 + 7) = v47;
              *((_QWORD*)a2 + 8) = v61[0];
            }
          }
          *((_DWORD*)a2 + 18) = v61[1];
          *((_BYTE*)a2 + 76) = BYTE4(v61[1]);
        }
        else {
          if ((v58[0] & 1) != 0) {
            fw_text_String_CopyTerminated_alt1(v40, v58[2], v58[1]),
                v18 =
                    COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v42 = v58[1];
            *v40 = v58[0];
            *((_QWORD*)a2 + 4) = v42;
            *((_QWORD*)a2 + 5) = v58[2];
          }
          if ((v59_.v59 & 1) != 0) {
            fw_text_String_CopyTerminated_alt1((__int64*)a2 + 6, v61[0],
                                               v59_.v60),
                v18 =
                    COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v43 = v59_.v60;
            *((_QWORD*)a2 + 6) = v59_.v59;
            *((_QWORD*)a2 + 7) = v43;
            *((_QWORD*)a2 + 8) = v61[0];
          }
          *((_DWORD*)a2 + 18) = v61[1];
          *((_BYTE*)a2 + 76) = BYTE4(v61[1]);
          *((_BYTE*)a2 + 80) = 1;
        }
        if ((v59_.v59 & 1) != 0 && v61[0] != 0) {
          v50 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v50 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v50),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if ((v58[0] & 1) != 0 && v58[2] != 0) {
          v51 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v51),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      LABEL_104:
        v25 = 1;
        v26 = v65_.v65;
        if (v65_.v65 != 0) {
          goto LABEL_105;
        }
        goto LABEL_111;
      }
    }
  }
  v25 = 0;
  v26 = v65_.v65;
  if (v65_.v65 != 0) {
  LABEL_105:
    v52 = v65_.v66;
    if (v26 == v65_.v66) {
      goto LABEL_108;
    }
    do {
      v53 = v52 - 296;
      GlobalMapData_e273d0(v52 - 152),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GlobalMapData_e273d0(v53),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v52 = v53;
    } while (v53 != v26);
    v65_.v66 = v26;
    if (v65_.v65 != 0) {
    LABEL_108:
      v54 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v54 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v54),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
LABEL_111:
  if ((v68_.v68[0] & 1) != 0 && v68_.v69 != nullptr) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v55),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v25;
}

__n128 game_hub_1035650(__int64 a1, __int64 a2, __int64 a3, float* a4,
                        __n128 result)
{
  float v5;
  float v7;
  float v8;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  char v17;
  char v18;

  if ((*(_BYTE*)(a2 + 88) & 1) != 0) {
    v5 = a4[1];
    v7 = *a4 * (float)(COERCE_FLOAT(*(_OWORD*)a3) - a4[2]);
    v8 = *a4 * (float)(COERCE_FLOAT(*(_QWORD*)(a3 + 8)) - a4[3]);
    if (*(_QWORD*)(a1 + 16) != 0) {
      v10 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 16));
      if (v10 != 0) {
        v11 = *(__int64**)(a1 + 8);
        if (v11 != nullptr) {
          v12 = *(_QWORD*)(a2 + 24);
          if (v12 == ui_LayoutAccessor_FindPane(v11, (__int64)"N_Select")) {
            v13 = fmodf(v5, 0x1.6800000000000p+8f);
            if (v5 < 0x0.0p+0f) {
              v13 = v13 + 0x1.6800000000000p+8f;
            }
            v14 = v13 * 0x1.1df46a0000000p-6f;
            v15 = sinf(v13 * 0x1.1df46a0000000p-6f);
            LANES128(result).n128_f32[0] = cosf(v14);
            v16 = -(float)(v15 * v8);
            v5 = 0x0.0p+0f;
            v8 = (float)(PSEUDO_UNFUSED(v8 * LANES128(result).n128_f32[0])) +
                 (float)(v15 * v7);
            v7 = v16 + (float)(LANES128(result).n128_f32[0] * v7);
          }
          v17 = *(_BYTE*)(a2 + 88);
          PSEUDO_LOW_LANE128(result, n128_f32, -v8);
          *(_DWORD*)(a2 + 64) = 0;
          *(float*)(a2 + 68) = v5;
          *(float*)(a2 + 48) = v7;
          *(float*)(a2 + 52) = -v8;
          *(_QWORD*)(a2 + 56) = 0;
          *(_BYTE*)(a2 + 88) = v17 | 0x10;
        LABEL_12:
          if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            return std___1___shared_weak_count___release_weak(v10);
          }
          return result;
        }
      }
    }
    else {
      v10 = 0;
    }
    v18 = *(_BYTE*)(a2 + 88);
    PSEUDO_LOW_LANE128(result, n128_f32, -v8);
    *(_DWORD*)(a2 + 64) = 0;
    *(float*)(a2 + 68) = v5;
    *(float*)(a2 + 48) = v7;
    *(float*)(a2 + 52) = -v8;
    *(_QWORD*)(a2 + 56) = 0;
    *(_BYTE*)(a2 + 88) = v18 | 0x10;
    if (v10 == 0) {
      return result;
    }
    goto LABEL_12;
  }
  return result;
}

__attribute__((swiftcall)) void game_hub_10c3a70(PSEUDO_X8 x8_, __int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0) {
    v4 = *(_QWORD*)(a1 + 16);
    v5 = *(_QWORD*)(a1 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock(v5);
    *(__n128*)&v7 = std___1___shared_weak_count___release_weak(v2);
    if (v6 != 0) {
      if (v4 != 0) {
        v8 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 16LL);
        v9 = *(_QWORD*)(v8 + 560);
        v10 = *(_QWORD*)(v8 + 568);
        *a2 = v9;
        a2[1] = v10;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v4 != 0) {
          return;
        }
      }
      else {
        (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 16LL))(v6, v7);
        std___1___shared_weak_count___release_weak(v6);
        if (v4 != 0) {
          return;
        }
      }
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v11 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v11;
    __cxa_guard_release(&GameData_21a6130);
  }
  *(_OWORD*)a2 = GameData_21a6120;
}

float32x2_t game_hub_10c3b70(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  long double v6;
  __int128 v7;
  float32x4_t v8;
  int8x16_t v9;
  __int64 v11;
  __n128 v12;

  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v1 = a1[3];
  if (v1 != 0) {
    v3 = a1[2];
    v4 = a1[3];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock(v4),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w"));
    *(__n128*)&v6 = std___1___shared_weak_count___release_weak(v1),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if (v5 != 0) {
      if (v3 != 0) {
        v7 = *(_OWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 24) + 16LL) + 560LL);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v3 != 0) {
          goto LABEL_11;
        }
      }
      else {
        v12 = COERCE_AS(__n128, v7);
        (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(v5, v6),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w"));
        std___1___shared_weak_count___release_weak(v5),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v7 = (__int128)v12;
        if (v3 != 0) {
          goto LABEL_11;
        }
      }
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v11 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v11;
    __cxa_guard_release(&GameData_21a6130),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  v7 = GameData_21a6120;
LABEL_11:
  v8 = vsubq_f32(
      *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(a1[1] + 24LL) + 16LL) + 560LL),
      COERCE_AS(float32x4_t, v7));
  LANES128(v8).n128_u32[1] = 0;
  v9 = vmulq_f32(v8, v8);
  LANES128(v9).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  return vsqrt_f32(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])));
}

#pragma GCC visibility pop
