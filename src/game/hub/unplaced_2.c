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
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
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
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
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
__int64* game_hub_f77560_alt1(__int64 a1,
                              unsigned __int8* a2) __asm__("game_hub_f77560");
__int64* game_hub_f79e00_alt1(_QWORD* a1,
                              unsigned __int8* a2) __asm__("game_hub_f79e00");
__attribute__((swiftcall)) void game_hub_f7a7a0(PSEUDO_X8 x8_,
                                                unsigned __int8** a1);
__attribute__((swiftcall)) void
game_hub_f7be00_alt3(PSEUDO_X8 x8_, __int64 a1,
                     __int64* a2) __asm__("game_hub_f7be00");
__int64 game_hub_f89710(__int64 a1, _DWORD* a2, __int64 a3);
__n128 game_hub_f8b240();
void game_hub_f8b300(__n128 result);
__n128 game_hub_f8b650_alt1() __asm__("game_hub_f8b650");
__n128 game_hub_f8bf30(_QWORD* a1);
__int64 game_hub_f960c0_alt1(_QWORD* a1,
                             __int64* a2) __asm__("game_hub_f960c0");
__attribute__((swiftcall)) void game_hub_f96800(PSEUDO_X8 x8_, __int64 a1,
                                                char** a2);
__int64 game_hub_f96ec0_alt1(__int64 a1, _QWORD* a2, __int64 a3, _QWORD* a4,
                             bool* a5) __asm__("game_hub_f96ec0");
__int64 game_hub_fa1b40_alt1(float* a1, float a2) __asm__("game_hub_fa1b40");
__attribute__((swiftcall)) void game_hub_fa81d0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_fa84b0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_fa87c0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_fa8a90(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_fa8d50(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_fa9030(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_fa9c10(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_hub_faac90(PSEUDO_X8 x8_);
bool game_hub_fb50e0();
void game_hub_fb6600_alt1(float32x4_t* a1, unsigned __int32 a2, float32x4_t* a3,
                          float32x4_t* a4) __asm__("game_hub_fb6600");
unsigned __int64
game_hub_fb6f80_alt1(__int64 a1,
                     unsigned __int8* a2) __asm__("game_hub_fb6f80");
__int64 game_hub_1001800_alt1(__int64 result) __asm__("game_hub_1001800");
__n128 game_hub_1001960();
__int64 game_hub_1001a00();
void game_hub_1001b60(float32x4_t* a1, __n128 result);
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
unsigned __int128 game_hub_e286a0_pair(__int64,
                                       __int64*) __asm__("game_hub_e286a0");
void __attribute__((noreturn)) GameRoutine_f7e4a0(_QWORD);
void game_hub_f71a70(__int64 a1);
__attribute__((swiftcall)) void
game_hub_f77fc0_alt3(PSEUDO_X8 x8_, _QWORD* a1, __int64 a2,
                     char a3) __asm__("game_hub_f77fc0");
__int64 game_hub_102e240(__int64 a1, __int128* a2, unsigned __int8* a3);
_QWORD* game_hub_f8bf30_alt1(_QWORD*) __asm__("game_hub_f8bf30");
__int64 game_zview_d1ff20_alt1(__int64 result, _QWORD*,
                               char) __asm__("game_zview_d1ff20");
__int64 game_hub_f8b650();
_QWORD* GameHr_e5d5a0(__int64*, _QWORD*);
__attribute__((swiftcall)) void
EventManager_cbbf20_alt1(PSEUDO_X8, __int64 result, __int64,
                         unsigned __int64) __asm__("EventManager_cbbf20");
__attribute__((swiftcall)) void
GameRoutine_622ac0_alt1(PSEUDO_X8, float32x2_t*) __asm__("GameRoutine_622ac0");
__attribute__((swiftcall)) void
game_hub_LocatorDispos_CreateExternalDataImpl_alt1(
    PSEUDO_X8, __int64, const char*, unsigned __int64, __int64**, __int64,
    __int64) __asm__("game_hub_LocatorDispos_CreateExternalDataImpl");
__attribute__((swiftcall)) void game_hub_e1b4d0(PSEUDO_X8);
__attribute__((swiftcall)) void
game_hub_e1bfe0_alt1(PSEUDO_X8, __int64, __int64,
                     __int64*) __asm__("game_hub_e1bfe0");
__attribute__((swiftcall)) void
game_hub_f7be00_alt2(PSEUDO_X8, __int64*, __int64*) __asm__("game_hub_f7be00");
__attribute__((swiftcall)) void
math_Quat_FromYawPitchRoll_alt1(PSEUDO_X8, float, float,
                                float) __asm__("math_Quat_FromYawPitchRoll");
__int64** GameRoutine_f7db00_alt1(__int64**,
                                  __int64) __asm__("GameRoutine_f7db00");
__int64* GameRoutine_f7cc80_alt1(__int64* result,
                                 __int64) __asm__("GameRoutine_f7cc80");
__int64* GameRoutine_f7cdc0_alt1(__int64* result,
                                 __int64*) __asm__("GameRoutine_f7cdc0");
__int64* GameRoutine_f7e2a0_alt1(__int64,
                                 __int64*) __asm__("GameRoutine_f7e2a0");
__int64* fw_containers_BalanceAfterInsert_alt1(
    __int64* result, __int64*) __asm__("fw_containers_BalanceAfterInsert");
__int64 GameHr_f7c340(__int64, _QWORD*, __int64*, __int64, char, __int64*);
__int64 GameHr_f7d4a0(__int64);
__int64 GameHr_f7dc20(__int64*, __int64*);
__int64 GameHr_f8bb50();
__int64 GameHr_f8c4f0();
__int64 GameHr_f8cd60();
__int64 GameRoutine_14a1390_alt1(__int64*, char) __asm__("GameRoutine_14a1390");
__int64 GameRoutine_dfffe0_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_dfffe0");
__int64 GameRoutine_f7bb20_alt1(__int64, __int64) __asm__("GameRoutine_f7bb20");
__int64 GameRoutine_f7de90_alt1(__int64,
                                __int64*) __asm__("GameRoutine_f7de90");
__int64 GameRoutine_f7dfc0_alt1(__int64*,
                                __int64*) __asm__("GameRoutine_f7dfc0");
__int64 GameRoutine_f7eac0_alt1(__int64,
                                __int64*) __asm__("GameRoutine_f7eac0");
__int64 GameRoutine_fb1ed0_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_fb1ed0");
__int64 ProcInst_657850_alt1(__int64, __int64, const char*, char,
                             __int64) __asm__("ProcInst_657850");
__int64 game_14a1b00(__int64*, float);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*game_80a680_ptr[11])();
extern __int64 (*game_80a760_ptr[11])();
float atan2f_alt1(float, float) __asm__("atan2f");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
void GameHr_f7cf00(__int64*, __int64, __int64, unsigned __int64);
void GameHr_f7d5e0(__int64*, __int64, __int64, unsigned __int64);
void GameHr_f7ee00(__int64, __int64);
void HubNatives_ccbf80_alt2(__int64) __asm__("HubNatives_ccbf80");
void __attribute__((noreturn))
GameRoutine_f7cee0_alt1() __asm__("GameRoutine_f7cee0");
void __attribute__((noreturn))
GameRoutine_f7d5b0_alt1() __asm__("GameRoutine_f7d5b0");
void __attribute__((noreturn))
GameRoutine_f7df90_alt1() __asm__("GameRoutine_f7df90");
void __attribute__((noreturn))
GameRoutine_f7e4a0_alt1() __asm__("GameRoutine_f7e4a0");
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64* game_hub_f77560(_QWORD* a1, unsigned __int8* a2);
__attribute__((swiftcall)) void game_hub_f77fc0(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64* a2, char a3);
__int64* game_hub_f79e00(_QWORD* a1, __int64* a2);
float32x4_t* game_hub_fb6600(float32x4_t* result, unsigned __int32 a2,
                             float32x4_t* a3, float32x4_t* a4);
__attribute__((swiftcall)) void
GameSituation_906320_alt1(PSEUDO_X8, __int64,
                          __int64*) __asm__("GameSituation_906320");
__attribute__((swiftcall)) void
LocatorDispos_db1e20_alt1(PSEUDO_X8,
                          __int64* result) __asm__("LocatorDispos_db1e20");
__attribute__((swiftcall)) void
LocatorDispos_db1f30_alt1(PSEUDO_X8, __int64*) __asm__("LocatorDispos_db1f30");
__attribute__((swiftcall)) void
game_db1620_alt1(PSEUDO_X8, __int64, __int64) __asm__("game_db1620");
__attribute__((swiftcall)) void
game_hub_LocatorDispos_CreateExternalDataImpl_alt2(
    PSEUDO_X8, __int64, const char*, unsigned __int64, __int64**, __int64,
    unsigned __int64) __asm__("game_hub_LocatorDispos_CreateExternalDataImpl");
__int64* GameHr_f7cc80(__int64* result, __int64);
__int64* GameHr_f7cdc0(__int64* result, __int64*);
__int64
CharacterSituation_f994e0_alt1(__int64*,
                               __int64) __asm__("CharacterSituation_f994e0");
__int64 GameHr_14a1390(__int64*, char);
__int64 GameHr_cdeee0(__int64 result, __int64);
__int64 GameHr_d1fb60(__int64, char);
__int64 GameHr_dfffe0(_QWORD*, __int64, unsigned __int64);
__int64 GameHr_f7dfc0(__int64*, __int64*);
__int64 GameHr_f7eac0(__int64, __int64*);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64
GameVariable_828f50_alt1(__int64,
                         unsigned __int64*) __asm__("GameVariable_828f50");
__int64 GlobalMapData_e27700_alt1(_QWORD*, const char*, unsigned __int64,
                                  const char*, unsigned __int64, __int64*,
                                  _DWORD*) __asm__("GlobalMapData_e27700");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
unsigned __int64 Manager_6326c0_alt1(__int64*,
                                     const char*) __asm__("Manager_6326c0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_102f2a0(__int64*);
void GameHr_102f3c0(__int64*, __int64*, __int64);
void GameHr_e273d0(__int64);
void GameHr_f7c840(__int64*, _QWORD*, __int64*, __int64, __int64*);
void GameRoutine_7a8220_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7a8220");
void __attribute__((noreturn)) fs_60a230();
__attribute__((swiftcall)) void game_hub_f7be00(PSEUDO_X8 x8_, __int64* a1,
                                                __int64* a2);
__int64 game_hub_f960c0(__int64 a1, __int64* a2);
__int64 game_hub_f96ec0(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                        bool* a5);
void game_hub_fa1b40(__int64 a1, float a2);
void game_hub_fb6f80(__int64 a1, unsigned __int8* a2);
void game_hub_1001800(__int64 a1);

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
              nn_mem_StandardAllocator_Free(*v5 + v46, (_QWORD)(v112));
            }
            if ((v130[0] & 1) != 0 && v130[2] != 0) {
              v47 = 128;
              if (*(_QWORD*)(*v5 + 200LL) == 0) {
                v47 = 56;
              }
              nn_mem_StandardAllocator_Free(*v5 + v47, (_QWORD)(v130[2]));
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
                nn_mem_StandardAllocator_Free(*(_QWORD*)v86 + v93,
                                              (_QWORD)(v90));
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
              nn_mem_StandardAllocator_Free(*v5 + v94, (_QWORD)(v125));
            }
            if ((v126 & 1) != 0 && v128 != 0) {
              v95 = 128;
              if (*(_QWORD*)(*v5 + 200LL) == 0) {
                v95 = 56;
              }
              nn_mem_StandardAllocator_Free(*v5 + v95, (_QWORD)(v128));
            }
            if ((v104 & 1) != 0 && v106 != nullptr) {
              v96 = 128;
              if (*(_QWORD*)(*v5 + 200LL) == 0) {
                v96 = 56;
              }
              nn_mem_StandardAllocator_Free(*v5 + v96, (_QWORD)(v106));
            }
            if ((v107 & 1) != 0 && v109 != nullptr) {
              v97 = 128;
              if (*(_QWORD*)(*v5 + 200LL) == 0) {
                v97 = 56;
              }
              nn_mem_StandardAllocator_Free(*v5 + v97, (_QWORD)(v109));
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

__int64* game_hub_f77560(_QWORD* a1, unsigned __int8* a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  unsigned __int64 v5;
  __int64* v6;
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
  unsigned __int64 v27;
  int v28;
  __int64* v29;
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
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64* v48;
  __int64 v49;
  int v50;
  __int64* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64* v72;
  __int64** v73;
  unsigned __int64 v74;
  bool v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  bool v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  int v85;
  int v86;
  __int64* v87;
  __int64* v88;
  __int64 v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  bool v101;
  unsigned __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  bool v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  int v111;
  int v112;
  __int64* v114;
  __int64 v115;
  __int64* v116;
  _QWORD* v117;
  __int128 v118;
  int v119;
  struct {
    __int64 v120;
    __int64 v121;
    unsigned __int64 v122;
    __int64 v123;
    char v124;
  } v120_;
  struct {
    __int64 v125;
    unsigned __int64 v126;
    __int64 v127;
    unsigned __int8 v128;
    char gap121_[7];
    __int64 v129;
    __int64 v130;
  } v125_;
  struct {
    _QWORD v131[2];
    char v132;
  } v131_;
  struct {
    __int64 v133;
    __int64 v134;
  } v133_;

  v3 = a1 + 8;
  v2 = (__int64*)a1[8];
  v4 = (__int64*)a2;
  v117 = a1;
  if (v2 == nullptr) {
    goto LABEL_50;
  }
  v5 = *a2;
  v6 = a1 + 8;
  v7 = a1[8];
  v8 = (v5 & 1) == 0;
  v9 = v5 >> 1;
  if (v8) {
    v10 = (__int64)(a2 + 1);
  }
  else {
    v10 = *((_QWORD*)a2 + 2);
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
    v18 = memcmp_alt1(v16, v10, v17);
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
      v6 = (__int64*)v7;
    }
    v7 = *(_QWORD*)(v7 + v21);
  } while (v7 != 0);
  if (v6 == v3) {
    a1 = v117;
  LABEL_50:
    v116 = v3;
    v114 = v4;
    game_hub_f77fc0_alt1((void*)(&v133_.v133), a1, (__int64)v4, 1);
    v31 = v133_.v133;
    v30 = v133_.v134;
    if (v133_.v133 == v133_.v134) {
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
            GameRoutine_ff24c0((void*)(v131_.v131), *(_QWORD*)(v31 + 184));
            if (v131_.v132 == 1) {
              v125_.v128 = 0;
              v125_.v129 = 0;
              v125_.v130 = v36;
              v38 = *(_DWORD*)(v31 + 72);
              LOBYTE(v120_.v120) = 0;
              v120_.v124 = 0;
              LOBYTE(v125_.v125) = 0;
              v119 = v38;
              *(_QWORD*)&v39 = v131_.v131[0];
              *((_QWORD*)&v39 + 1) = LODWORD(v131_.v131[1]);
              v118 = v39;
              GameHr_f7cc80(&v120_.v120, v31 + 80);
              GameHr_f7cdc0(&v125_.v125, (__int64*)(v31 + 120));
              v125_.v129 = *(_QWORD*)(v31 + 152);
              if (v33 >= v34) {
                v41 = v33 - v32;
                v42 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v33 - v32) >> 4) + 1;
                if (v42 > v35) {
                  GameRoutine_f7cee0_alt1();
                }
                if (0xDB6DB6DB6DB6DB6ELL * ((__int64)(v34 - v32) >> 4) > v42) {
                  v42 = 0xDB6DB6DB6DB6DB6ELL * ((__int64)(v34 - v32) >> 4);
                }
                if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL *
                                       ((__int64)(v34 - v32) >> 4)) >=
                    0x124924924924924LL) {
                  v42 = v35;
                }
                if (v42 > v35) {
                  GameRoutine_60a210_alt1();
                }
                v43 = v35;
                v115 = 112 * v42;
                v44 = fw_memory_HeapManager_Allocate_alt1(
                    fw_memory_g_heap_manager, 112 * v42, 16, 0);
                v45 = v44 + v41;
                v46 = v44;
                *(_BYTE*)(v45 + 24) = 0;
                *(_BYTE*)(v45 + 56) = 0;
                *(_OWORD*)v45 = v118;
                *(_DWORD*)(v45 + 16) = v119;
                if (v120_.v124 == 1) {
                  *(_BYTE*)(v45 + 24) = v120_.v120;
                  if ((v120_.v121 & 1) != 0) {
                    fw_text_String_CopyTerminated_alt1((__int64*)(v45 + 32),
                                                       v120_.v123, v120_.v122);
                  }
                  else {
                    v47 = v120_.v122;
                    *(_QWORD*)(v45 + 32) = v120_.v121;
                    *(_QWORD*)(v45 + 40) = v47;
                    *(_QWORD*)(v45 + 48) = v120_.v123;
                  }
                  *(_BYTE*)(v45 + 56) = 1;
                }
                v50 = v125_.v128;
                *(_BYTE*)(v45 + 64) = 0;
                v51 = (__int64*)(v45 + 64);
                *(_BYTE*)(v45 + 88) = 0;
                if (v50 == 1) {
                  if ((v125_.v125 & 1) != 0) {
                    fw_text_String_CopyTerminated_alt1(v51, v125_.v127,
                                                       v125_.v126);
                  }
                  else {
                    v52 = v125_.v126;
                    *v51 = v125_.v125;
                    *(_QWORD*)(v45 + 72) = v52;
                    *(_QWORD*)(v45 + 80) = v125_.v127;
                  }
                  *(_BYTE*)(v45 + 88) = 1;
                }
                v53 = v125_.v130;
                v54 = v45 - v41;
                *(_QWORD*)(v45 + 96) = v125_.v129;
                *(_QWORD*)(v45 + 104) = v53;
                if (v32 != v33) {
                  v55 = 0;
                  do {
                    v57 = v32 + v55;
                    v58 = v54 + v55;
                    *(_QWORD*)(v58 + 8) = *(_QWORD*)(v32 + v55 + 8);
                    *(_QWORD*)v58 = *(_QWORD*)(v32 + v55);
                    v59 = *(_DWORD*)(v32 + v55 + 16);
                    *(_BYTE*)(v58 + 24) = 0;
                    *(_BYTE*)(v58 + 56) = 0;
                    *(_DWORD*)(v58 + 16) = v59;
                    if (*(_BYTE*)(v32 + v55 + 56) == 1) {
                      *(_BYTE*)(v58 + 24) = *(_BYTE*)(v57 + 24);
                      *(_QWORD*)(v58 + 40) = *(_QWORD*)(v57 + 40);
                      v60 = *(_QWORD*)(v57 + 32);
                      *(_QWORD*)(v58 + 48) = *(_QWORD*)(v57 + 48);
                      *(_QWORD*)(v58 + 32) = v60;
                      *(_QWORD*)(v57 + 32) = 0;
                      *(_QWORD*)(v57 + 40) = 0;
                      *(_QWORD*)(v57 + 48) = 0;
                      *(_BYTE*)(v58 + 56) = 1;
                    }
                    *(_BYTE*)(v58 + 64) = 0;
                    *(_BYTE*)(v58 + 88) = 0;
                    if (*(_BYTE*)(v57 + 88) == 1) {
                      v61 = (_QWORD*)(v32 + v55);
                      *(_QWORD*)(v58 + 72) = *(_QWORD*)(v32 + v55 + 72);
                      v62 = *(_QWORD*)(v32 + v55 + 64);
                      *(_QWORD*)(v58 + 80) = *(_QWORD*)(v32 + v55 + 80);
                      *(_QWORD*)(v58 + 64) = v62;
                      v61[8] = 0;
                      v61[9] = 0;
                      v61[10] = 0;
                      *(_BYTE*)(v58 + 88) = 1;
                    }
                    v56 = v54 + v55;
                    v55 += 112;
                    *(_QWORD*)(v56 + 96) = *(_QWORD*)(v57 + 96);
                    *(_QWORD*)(v56 + 104) = *(_QWORD*)(v57 + 104);
                  } while (v57 + 112 != v33);
                  v63 = v32;
                  do {
                    if (*(_BYTE*)(v63 + 88) == 1 &&
                        (*(_BYTE*)(v63 + 64) & 1) != 0) {
                      v64 = *(_QWORD*)(v63 + 80);
                      if (v64 != 0) {
                        v65 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v65 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, v64);
                      }
                    }
                    if (*(_BYTE*)(v63 + 56) == 1 &&
                        (*(_BYTE*)(v63 + 32) & 1) != 0) {
                      v66 = *(_QWORD*)(v63 + 48);
                      if (v66 != 0) {
                        v67 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v67 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v66);
                      }
                    }
                    v63 += 112;
                  } while (v63 != v33);
                }
                v33 = v45 + 112;
                v34 = v46 + v115;
                if (v32 != 0) {
                  v68 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v68 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v32);
                }
                v32 = v54;
                v35 = v43;
              }
              else {
                *(_BYTE*)(v33 + 24) = 0;
                *(_BYTE*)(v33 + 56) = 0;
                *(_OWORD*)v33 = v118;
                *(_DWORD*)(v33 + 16) = v119;
                if (v120_.v124 == 1) {
                  *(_BYTE*)(v33 + 24) = v120_.v120;
                  if ((v120_.v121 & 1) != 0) {
                    fw_text_String_CopyTerminated_alt1((__int64*)(v33 + 32),
                                                       v120_.v123, v120_.v122);
                  }
                  else {
                    *(_QWORD*)(v33 + 40) = v120_.v122;
                    v40 = v120_.v121;
                    *(_QWORD*)(v33 + 48) = v120_.v123;
                    *(_QWORD*)(v33 + 32) = v40;
                  }
                  *(_BYTE*)(v33 + 56) = 1;
                }
                *(_BYTE*)(v33 + 64) = 0;
                v48 = (__int64*)(v33 + 64);
                *(_BYTE*)(v33 + 88) = 0;
                if (v125_.v128 == 1) {
                  if ((v125_.v125 & 1) != 0) {
                    fw_text_String_CopyTerminated_alt1(v48, v125_.v127,
                                                       v125_.v126);
                  }
                  else {
                    *(_QWORD*)(v33 + 72) = v125_.v126;
                    v49 = v125_.v125;
                    *(_QWORD*)(v33 + 80) = v125_.v127;
                    *v48 = v49;
                  }
                  *(_BYTE*)(v33 + 88) = 1;
                }
                *(_QWORD*)(v33 + 96) = v125_.v129;
                *(_QWORD*)(v33 + 104) = v125_.v130;
                v33 += 112LL;
              }
              if (v125_.v128 == 1 && (v125_.v125 & 1) != 0 && v125_.v127 != 0) {
                v69 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v69 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v125_.v127);
              }
              if (v120_.v124 == 1 && (v120_.v121 & 1) != 0 && v120_.v123 != 0) {
                v70 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v70 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v120_.v123);
              }
            }
          }
          else {
            GameRoutine_fb1ed0_alt1(v37 + 16, v31 + 72);
          }
        }
        v31 += 232;
      } while (v31 != v30);
    }
    v71 = v116;
    v4 = v114;
    v72 = (__int64*)*v116;
    v73 = (__int64**)v116;
    if (*v116 != 0) {
      v74 = *(unsigned __int8*)v114;
      v75 = (v74 & 1) == 0;
      v76 = v74 >> 1;
      if (v75) {
        v77 = (__int64)v114 + 1;
      }
      else {
        v77 = v114[2];
      }
      if (v75) {
        v78 = v76;
      }
      else {
        v78 = v114[1];
      }
      while (1) {
        while (1) {
          v71 = v72;
          v79 = *((unsigned __int8*)v72 + 32);
          v80 = (v79 & 1) == 0;
          v81 = v79 >> 1;
          v82 = v80 ? v81 : v71[5];
          v83 = v80 ? (__int64)v71 + 33 : v71[6];
          v84 = v82 >= v78 ? v78 : v82;
          v85 = memcmp_alt1(v77, v83, v84);
          if (v85 != 0) {
            break;
          }
          if (v78 >= v82) {
            goto LABEL_149;
          }
        LABEL_135:
          v72 = (__int64*)*v71;
          v73 = (__int64**)v71;
          if (*v71 == 0) {
            goto LABEL_155;
          }
        }
        if (v85 < 0) {
          goto LABEL_135;
        }
      LABEL_149:
        v86 = memcmp_alt1(v83, v77, v84);
        if (v86 != 0) {
          if ((v86 & 0x80000000) == 0) {
            goto LABEL_161;
          }
        }
        else if (v82 >= v78) {
        LABEL_161:
          v88 = v71;
          goto LABEL_162;
        }
        v72 = (__int64*)v71[1];
        if (v72 == nullptr) {
          v73 = (__int64**)(v71 + 1);
          break;
        }
      }
    }
  LABEL_155:
    v87 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
    v88 = v87;
    if ((*(_BYTE*)v114 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v87 + 4, v114[2], v114[1]);
    }
    else {
      v89 = v114[1];
      v87[4] = *v114;
      v87[5] = v89;
      v87[6] = v114[2];
    }
    v88[8] = 0;
    v88[9] = 0;
    v88[7] = 0;
    v90 = v88;
    *v88 = 0;
    v88[1] = 0;
    v88[2] = (__int64)v71;
    *v73 = v88;
    v91 = *(_QWORD*)v117[7];
    if (v91 != 0) {
      v117[7] = v91;
      v90 = *v73;
    }
    fw_containers_BalanceAfterInsert_alt1((__int64*)v117[8], v90);
    ++v117[9];
  LABEL_162:
    GameHr_f7cf00(v88 + 7, v32, v33,
                  0x6DB6DB6DB6DB6DB7LL * ((__int64)(v33 - v32) >> 4));
    v92 = v133_.v133;
    if (v133_.v133 != 0) {
      v93 = v133_.v134;
      if (v133_.v133 == v133_.v134) {
        goto LABEL_166;
      }
      do {
        v93 -= 232;
        GameHr_f7d4a0(v93);
      } while (v93 != v92);
      v92 = v133_.v133;
      if (v133_.v133 != 0) {
      LABEL_166:
        v94 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v94 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v94, v92);
      }
    }
    if (v32 != 0) {
      for (; v33 != v32; v33 -= 112LL) {
        if (*(_BYTE*)(v33 - 24) == 1 && (*(_BYTE*)(v33 - 48) & 1) != 0) {
          v95 = *(_QWORD*)(v33 - 32);
          if (v95 != 0) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v96 = 128;
            }
            else {
              v96 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v96,
                                               v95);
          }
        }
        if (*(_BYTE*)(v33 - 56) == 1 && (*(_BYTE*)(v33 - 80) & 1) != 0) {
          v97 = *(_QWORD*)(v33 - 64);
          if (v97 != 0) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v98 = 128;
            }
            else {
              v98 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v98,
                                               v97);
          }
        }
      }
      v99 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v99 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v99, v32);
    }
    v2 = (__int64*)*v116;
    goto LABEL_191;
  }
  v22 = *((unsigned __int8*)v6 + 32);
  v23 = (v22 & 1) == 0;
  v24 = v22 >> 1;
  if (v23) {
    v25 = v24;
  }
  else {
    v25 = v6[5];
  }
  if (v23) {
    v26 = (__int64)v6 + 33;
  }
  else {
    v26 = v6[6];
  }
  if (v25 >= v11) {
    v27 = v11;
  }
  else {
    v27 = v25;
  }
  v28 = memcmp_alt1(v10, v26, v27);
  if (v28 != 0) {
    if (v28 >= 0) {
      v29 = v6;
    }
    else {
      v29 = v3;
    }
  }
  else if (v11 >= v25) {
    v29 = v6;
  }
  else {
    v29 = v3;
  }
  a1 = v117;
  if (v3 == v29) {
    goto LABEL_50;
  }
LABEL_191:
  if (v2 == nullptr) {
  LABEL_217:
    String_60a250_alt1("map::at:  key not found");
  }
  v100 = *(unsigned __int8*)v4;
  v101 = (v100 & 1) == 0;
  v102 = v100 >> 1;
  if (v101) {
    v103 = (__int64)v4 + 1;
  }
  else {
    v103 = v4[2];
  }
  if (v101) {
    v104 = v102;
  }
  else {
    v104 = v4[1];
  }
  while (1) {
    while (1) {
      v105 = *((unsigned __int8*)v2 + 32);
      v106 = (v105 & 1) == 0;
      v107 = v105 >> 1;
      v108 = v106 ? v107 : v2[5];
      v109 = v106 ? (__int64)v2 + 33 : v2[6];
      v110 = v108 >= v104 ? v104 : v108;
      v111 = memcmp_alt1(v103, v109, v110);
      if (v111 != 0) {
        break;
      }
      if (v104 >= v108) {
        goto LABEL_212;
      }
    LABEL_198:
      v2 = (__int64*)*v2;
      if (v2 == nullptr) {
        goto LABEL_217;
      }
    }
    if (v111 < 0) {
      goto LABEL_198;
    }
  LABEL_212:
    v112 = memcmp_alt1(v109, v103, v110);
    if (v112 != 0) {
      if ((v112 & 0x80000000) == 0) {
        return v2 + 7;
      }
      goto LABEL_216;
    }
    if (v108 >= v104) {
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
                                                __int64* a2, char a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  __int64 v28;
  __int64 v29;
  int v30;
  _QWORD* v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
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
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  char v72;
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
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  char v87;
  __int64 v88;
  __int64 v89;
  _QWORD* v90;
  __int64 v91;
  int* v92;
  int v93;
  int v94;
  __int64 v96;
  int v97;
  bool v98;
  bool v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 i;
  __int64 v104;
  unsigned __int8* v105;
  __int64 v106;
  __int64* v107;
  char v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  char v112;
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
  char v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64* v130;
  __int64* v131;
  unsigned __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64* v135;
  __int64 v136;
  __int64 v137;
  __int64* v138;
  __int64* v139;
  __int64 v140;
  __int64* v141;
  __int64* v142;
  __int64* v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  int v147;
  __int64 v148;
  char v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  char v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  char v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  char v183;
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
  __int64 v196;
  __int64 v197;
  char v198;
  __int64 v199;
  __int64 v200;
  unsigned __int64 v201;
  unsigned __int64 v202;
  __int64 v203;
  __int64 v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  char v219;
  __int64 v220;
  __int64 v221;
  int v222;
  _QWORD* v223;
  _QWORD* v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  _QWORD* v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  char v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  char v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64* j;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  char v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  char v278;
  __int64 v279;
  __int64 v280;
  __int64* v283;
  __int64* v284;
  __int64* v285;
  __int64* v287;
  __int64 v288;
  __int64* v289;
  unsigned __int64 v290;
  __int64 v291;
  unsigned __int64 v292;
  __int64 v293;
  __int64* v294;
  unsigned __int64 v295;
  struct {
    __int64* v296;
    __int64* v297;
    unsigned __int64 v298;
  } v296_;
  struct {
    __int64 v299;
    __int64* v300;
    __int64 v301;
    __int64 v302;
    char gap136_[8];
    char v303;
    char gap145_[15];
    __int64 v304;
    char v305;
    char gap169_[7];
    int v306;
    char gap180_[4];
    char v307;
    char gap185_[7];
    char v308;
    char gap193_[15];
    __int64 v309;
    char v310;
    char gap217_[7];
    char v311;
    char gap225_[15];
    __int64 v312;
    char v313;
    char gap249_[7];
    __int64 v314;
    __int64 v315;
    __int64 v316;
    __int64 v317;
    __int64 v318;
    char v319;
    char gap297_[7];
    __int64 v320;
    __int64 v321;
    __int64 v322;
    __int16 v323;
  } v299_;
  struct {
    __int64 v324[2];
    __int64 v325;
  } v324_;

  v4 = a4;
  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  v6 = (__int64*)a1[1];
  v5 = (__int64*)a1[2];
  v296_.v297 = nullptr;
  v296_.v298 = 0;
  v296_.v296 = nullptr;
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v287 = v4;
  v283 = v5;
  if (v6 == v5) {
    v90 = a1;
    v10 = 0;
    goto LABEL_163;
  }
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do {
    game_hub_f7be00((void*)(&v299_.v299), a2, v6);
    v12 = v299_.v299;
    if ((__int64*)v299_.v299 == v299_.v300) {
      if (v299_.v299 == 0) {
        goto LABEL_8;
      }
    }
    else {
      v284 = v6;
      v13 = (__int64*)v299_.v299;
      v288 = v299_.v299;
      v294 = v299_.v300;
      do {
        if (v10 < v8) {
          GameRoutine_f7e2a0_alt1(v10, v13);
          v10 += 232LL;
        }
        else {
          v15 = v10 - v9;
          v16 = 0x34F72C234F72C235LL * ((__int64)(v10 - v9) >> 3) + 1;
          if (v16 > 0x11A7B9611A7B961LL) {
          LABEL_598:
            GameRoutine_f7e4a0_alt1();
          }
          if (0x69EE58469EE5846ALL * ((__int64)(v8 - v9) >> 3) > v16) {
            v16 = 0x69EE58469EE5846ALL * ((__int64)(v8 - v9) >> 3);
          }
          if ((unsigned __int64)(0x34F72C234F72C235LL *
                                 ((__int64)(v8 - v9) >> 3)) >=
              0x8D3DCB08D3DCB0LL) {
            v17 = 0x11A7B9611A7B961LL;
          }
          else {
            v17 = v16;
          }
          v292 = v17;
          if (v17 != 0) {
            if (v17 > 0x11A7B9611A7B961LL) {
            LABEL_599:
              GameRoutine_60a210_alt1();
            }
            v18 = fw_memory_HeapManager_Allocate_alt1(*v7, 232 * v17, 16, 0);
          }
          else {
            v18 = 0;
          }
          v290 = v18 + v15;
          GameRoutine_f7e2a0_alt1(v18 + v15, v13);
          if (v9 != v10) {
            v19 = 0;
            do {
              v24 = v9 + v19;
              v25 = v18 + v19;
              v26 = *(_QWORD*)(v9 + v19);
              v27 = *(_BYTE*)(v9 + v19 + 8);
              *(_BYTE*)(v25 + 64) = 0;
              *(_BYTE*)(v25 + 8) = v27;
              *(_QWORD*)v25 = v26;
              *(_BYTE*)(v18 + v19 + 16) = 0;
              if (*(_BYTE*)(v9 + v19 + 64) == 1) {
                *(_QWORD*)(v18 + v19 + 24) = 0;
                *(_QWORD*)(v18 + v19 + 32) = 0;
                *(_QWORD*)(v18 + v19 + 16) = 0;
                *(_QWORD*)(v25 + 16) = *(_QWORD*)(v24 + 16);
                *(_QWORD*)(v25 + 24) = *(_QWORD*)(v24 + 24);
                *(_QWORD*)(v25 + 32) = *(_QWORD*)(v24 + 32);
                *(_QWORD*)(v24 + 24) = 0;
                *(_QWORD*)(v24 + 32) = 0;
                *(_QWORD*)(v24 + 16) = 0;
                v28 = *(_QWORD*)(v24 + 40);
                v29 = *(_QWORD*)(v24 + 56);
                *(_QWORD*)(v25 + 48) = *(_QWORD*)(v24 + 48);
                *(_QWORD*)(v25 + 56) = v29;
                *(_QWORD*)(v25 + 40) = v28;
                *(_QWORD*)(v24 + 48) = 0;
                *(_QWORD*)(v24 + 56) = 0;
                *(_QWORD*)(v24 + 40) = 0;
                *(_BYTE*)(v25 + 64) = 1;
              }
              v30 = *(_DWORD*)(v24 + 72);
              *(_BYTE*)(v25 + 80) = 0;
              *(_BYTE*)(v25 + 112) = 0;
              *(_DWORD*)(v25 + 72) = v30;
              if (*(_BYTE*)(v24 + 112) == 1) {
                v31 = (_QWORD*)(v9 + v19);
                *(_BYTE*)(v25 + 80) = *(_BYTE*)(v9 + v19 + 80);
                v32 = (_QWORD*)(v18 + v19);
                v33 = *(_QWORD*)(v9 + v19 + 88);
                v34 = *(_QWORD*)(v9 + v19 + 104);
                v32[12] = *(_QWORD*)(v9 + v19 + 96);
                v32[13] = v34;
                v32[11] = v33;
                v31[12] = 0;
                v31[13] = 0;
                v31[11] = 0;
                *(_BYTE*)(v25 + 112) = 1;
              }
              v35 = v18 + v19;
              *(_BYTE*)(v18 + v19 + 120) = 0;
              *(_BYTE*)(v18 + v19 + 144) = 0;
              if (*(_BYTE*)(v24 + 144) == 1) {
                v36 = (_QWORD*)(v9 + v19);
                v37 = *(_QWORD*)(v9 + v19 + 120);
                v38 = *(_QWORD*)(v9 + v19 + 136);
                *(_QWORD*)(v18 + v19 + 128) = *(_QWORD*)(v9 + v19 + 128);
                *(_QWORD*)(v18 + v19 + 136) = v38;
                *(_QWORD*)(v18 + v19 + 120) = v37;
                v36[16] = 0;
                v36[17] = 0;
                v36[15] = 0;
                *(_BYTE*)(v35 + 144) = 1;
              }
              v19 += 232;
              *(_QWORD*)(v35 + 152) = *(_QWORD*)(v24 + 152);
              v20 = *(_QWORD*)(v24 + 160);
              v21 = *(_QWORD*)(v24 + 176);
              *(_QWORD*)(v35 + 168) = *(_QWORD*)(v24 + 168);
              *(_QWORD*)(v35 + 176) = v21;
              *(_QWORD*)(v35 + 160) = v20;
              *(_QWORD*)(v24 + 168) = 0;
              *(_QWORD*)(v24 + 176) = 0;
              *(_QWORD*)(v24 + 160) = 0;
              v22 = *(_QWORD*)(v24 + 184);
              v23 = *(_QWORD*)(v24 + 192);
              *(_QWORD*)(v35 + 200) = 0;
              *(_QWORD*)(v35 + 208) = 0;
              *(_QWORD*)(v35 + 216) = 0;
              *(_QWORD*)(v35 + 184) = v22;
              *(_QWORD*)(v35 + 192) = v23;
              *(_QWORD*)(v35 + 200) = *(_QWORD*)(v24 + 200);
              *(_QWORD*)(v35 + 208) = *(_QWORD*)(v24 + 208);
              *(_QWORD*)(v35 + 216) = *(_QWORD*)(v24 + 216);
              *(_QWORD*)(v24 + 208) = 0;
              *(_QWORD*)(v24 + 216) = 0;
              *(_QWORD*)(v24 + 200) = 0;
              *(_WORD*)(v35 + 224) = *(_WORD*)(v24 + 224);
            } while (v24 + 232 != v10);
            v39 = v9;
            do {
              v43 = *(_QWORD*)(v39 + 200);
              if (v43 != 0) {
                v44 = *(_QWORD*)(v39 + 208);
                if (v43 == v44) {
                  goto LABEL_51;
                }
                v45 = *(_QWORD*)(v39 + 208);
                do {
                  v46 = *(_BYTE*)(v45 - 24);
                  v45 -= 24;
                  if ((v46 & 1) != 0) {
                    v47 = *(_QWORD*)(v44 - 8);
                    if (v47 != 0) {
                      if (*(_QWORD*)(*v7 + 200) != 0) {
                        v48 = 128;
                      }
                      else {
                        v48 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(*v7 + v48, v47);
                    }
                  }
                  v44 = v45;
                } while (v45 != v43);
                v49 = *(_QWORD*)(v39 + 200);
                *(_QWORD*)(v39 + 208) = v43;
                v43 = v49;
                if (v49 != 0) {
                LABEL_51:
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v50 = 128;
                  }
                  else {
                    v50 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v50, v43);
                }
              }
              if ((*(_BYTE*)(v39 + 160) & 1) != 0) {
                v51 = *(_QWORD*)(v39 + 176);
                if (v51 != 0) {
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v52 = 128;
                  }
                  else {
                    v52 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v52, v51);
                }
              }
              if (*(_BYTE*)(v39 + 144) == 1 &&
                  (*(_BYTE*)(v39 + 120) & 1) != 0) {
                v53 = *(_QWORD*)(v39 + 136);
                if (v53 != 0) {
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v54 = 128;
                  }
                  else {
                    v54 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v54, v53);
                }
              }
              if (*(_BYTE*)(v39 + 112) == 1 && (*(_BYTE*)(v39 + 88) & 1) != 0) {
                v55 = *(_QWORD*)(v39 + 104);
                if (v55 != 0) {
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v56 = 128;
                  }
                  else {
                    v56 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v56, v55);
                }
              }
              if (*(_BYTE*)(v39 + 64) == 1) {
                if ((*(_BYTE*)(v39 + 40) & 1) != 0) {
                  v57 = *(_QWORD*)(v39 + 56);
                  if (v57 != 0) {
                    if (*(_QWORD*)(*v7 + 200) != 0) {
                      v58 = 128;
                    }
                    else {
                      v58 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v7 + v58, v57);
                  }
                }
                v41 = *(_QWORD*)(v39 + 16);
                if (v41 != 0) {
                  v59 = *(_QWORD*)(v39 + 24);
                  if (v41 == v59) {
                    goto LABEL_35;
                  }
                  v60 = *(_QWORD*)(v39 + 24);
                  do {
                    v61 = *(_BYTE*)(v60 - 24);
                    v60 -= 24;
                    if ((v61 & 1) != 0) {
                      v62 = *(_QWORD*)(v59 - 8);
                      if (v62 != 0) {
                        if (*(_QWORD*)(*v7 + 200) != 0) {
                          v63 = 128;
                        }
                        else {
                          v63 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(*v7 + v63, v62);
                      }
                    }
                    v59 = v60;
                  } while (v60 != v41);
                  v40 = *(_QWORD*)(v39 + 16);
                  *(_QWORD*)(v39 + 24) = v41;
                  v41 = v40;
                  if (v40 != 0) {
                  LABEL_35:
                    if (*(_QWORD*)(*v7 + 200) != 0) {
                      v42 = 128;
                    }
                    else {
                      v42 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v7 + v42, v41);
                  }
                }
              }
              v39 += 232;
            } while (v39 != v10);
          }
          v8 = v18 + 232 * v292;
          v10 = v290 + 232;
          if (v9 != 0) {
            if (*(_QWORD*)(*v7 + 200) != 0) {
              v64 = 128;
            }
            else {
              v64 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v7 + v64, v9);
          }
          v9 = v18;
          v12 = v288;
        }
        v14 = v294;
        v13 += 29;
      } while (v13 != v294);
      v296_.v298 = v8;
      if (v12 == 0) {
        v6 = v284;
        goto LABEL_8;
      }
      do {
        v68 = *(v14 - 4);
        v69 = v14;
        if (v68 != 0) {
          v70 = *(v14 - 3);
          if (v68 == v70) {
            goto LABEL_117;
          }
          v71 = *(v14 - 3);
          do {
            v72 = *(_BYTE*)(v71 - 24);
            v71 -= 24;
            if ((v72 & 1) != 0) {
              v73 = *(_QWORD*)(v70 - 8);
              if (v73 != 0) {
                if (*(_QWORD*)(*v7 + 200) != 0) {
                  v74 = 128;
                }
                else {
                  v74 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v7 + v74, v73);
              }
            }
            v70 = v71;
          } while (v71 != v68);
          v75 = *(v69 - 4);
          v12 = v288;
          v14 = v69;
          *(v69 - 3) = v68;
          v68 = v75;
          if (v75 != 0) {
          LABEL_117:
            if (*(_QWORD*)(*v7 + 200) != 0) {
              v76 = 128;
            }
            else {
              v76 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v7 + v76, v68);
            v14 = v69;
          }
        }
        if ((*(_BYTE*)(v14 - 9) & 1) != 0) {
          v77 = *(v14 - 7);
          if (v77 != 0) {
            if (*(_QWORD*)(*v7 + 200) != 0) {
              v78 = 128;
            }
            else {
              v78 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v7 + v78, v77);
            v14 = v69;
          }
        }
        if (*((_BYTE*)v14 - 88) == 1 && (*(_BYTE*)(v14 - 14) & 1) != 0) {
          v79 = *(v14 - 12);
          if (v79 != 0) {
            if (*(_QWORD*)(*v7 + 200) != 0) {
              v80 = 128;
            }
            else {
              v80 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v7 + v80, v79);
            v14 = v69;
          }
        }
        if (*((_BYTE*)v14 - 120) == 1 && (*(_BYTE*)(v14 - 18) & 1) != 0) {
          v81 = *(v14 - 16);
          if (v81 != 0) {
            if (*(_QWORD*)(*v7 + 200) != 0) {
              v82 = 128;
            }
            else {
              v82 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v7 + v82, v81);
            v14 = v69;
          }
        }
        if (*((_BYTE*)v14 - 168) == 1) {
          if ((*(_BYTE*)(v14 - 24) & 1) != 0) {
            v83 = *(v14 - 22);
            if (v83 != 0) {
              if (*(_QWORD*)(*v7 + 200) != 0) {
                v84 = 128;
              }
              else {
                v84 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v7 + v84, v83);
              v14 = v69;
            }
          }
          v66 = *(v14 - 27);
          if (v66 != 0) {
            v85 = *(v14 - 26);
            if (v66 == v85) {
              goto LABEL_101;
            }
            v86 = *(v14 - 26);
            do {
              v87 = *(_BYTE*)(v86 - 24);
              v86 -= 24;
              if ((v87 & 1) != 0) {
                v88 = *(_QWORD*)(v85 - 8);
                if (v88 != 0) {
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v89 = 128;
                  }
                  else {
                    v89 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v89, v88);
                }
              }
              v85 = v86;
            } while (v86 != v66);
            v65 = *(v69 - 27);
            v12 = v288;
            v14 = v69;
            *(v69 - 26) = v66;
            v66 = v65;
            if (v65 != 0) {
            LABEL_101:
              if (*(_QWORD*)(*v7 + 200) != 0) {
                v67 = 128;
              }
              else {
                v67 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v7 + v67, v66);
              v14 = v69;
            }
          }
        }
        v14 -= 29;
      } while ((__int64*)v12 != v14);
      v6 = v284;
    }
    if (*(_QWORD*)(*v7 + 200) != 0) {
      v11 = 128;
    }
    else {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v7 + v11, v12);
  LABEL_8:
    v6 += 20;
  } while (v6 != v283);
  v296_.v296 = (__int64*)v9;
  v296_.v297 = (__int64*)v10;
  if (v10 == v9) {
    v90 = a1;
    v4 = v287;
    v102 = a1[1];
    v101 = a1[2];
    if (v101 != v102) {
      for (i = 0; 0xCCCCCCCCCCCCCCCDLL * ((v101 - v102) >> 5) > i; ++i) {
        v104 = v102 + 160 * i;
        if (*(_BYTE*)(v104 + 64) == 1) {
          v105 = *(unsigned __int8**)(v104 + 16);
          if (*(unsigned __int8**)(v104 + 24) != v105) {
            BYTE3(v299_.v299) = 0;
            LOBYTE(v299_.v299) = 4;
            *(_WORD*)((char*)&v299_.v299 + 1) = 12609;
            LocatorDispos_db2180_alt1((void*)(v324_.v324), v105,
                                      (unsigned __int8*)&v299_.v299);
            if ((v299_.v299 & 1) != 0 && v299_.v301 != 0) {
              if (*(_QWORD*)(*v7 + 200) != 0) {
                v106 = 128;
              }
              else {
                v106 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v7 + v106, v299_.v301);
            }
            v299_.v299 = 0;
            LOBYTE(v299_.v300) = 0;
            LOBYTE(v299_.v301) = 0;
            v299_.v305 = 0;
            v299_.v306 = 0;
            v299_.v307 = 0;
            v299_.v319 = 1;
            v107 = (__int64*)(v90[1] + 160 * i);
            v299_.v310 = 0;
            v299_.v311 = 0;
            v299_.v313 = 0;
            v299_.v314 = 0;
            v299_.v315 = 0;
            v299_.v316 = 0;
            v299_.v317 = 0;
            v299_.v318 = 0;
            v299_.v320 = 0;
            v299_.v321 = 0;
            v299_.v322 = 0;
            v299_.v323 = 0;
            v108 =
                GameHr_f7c340((__int64)&v299_.v299, a2, v324_.v324, 0, 0, v107);
            if ((v108 & 1) != 0) {
              if (v10 >= v296_.v298) {
                v10 = GameHr_f7dfc0((__int64*)&v296_.v296, &v299_.v299);
              }
              else {
                GameRoutine_f7e2a0_alt1(v10, &v299_.v299);
                v10 += 232LL;
              }
              v296_.v297 = (__int64*)v10;
            }
            v109 = v299_.v320;
            if (v299_.v320 != 0) {
              v110 = v299_.v321;
              if (v299_.v320 == v299_.v321) {
                goto LABEL_218;
              }
              v111 = v299_.v321;
              do {
                v112 = *(_BYTE*)(v111 - 24);
                v111 -= 24;
                if ((v112 & 1) != 0) {
                  v113 = *(_QWORD*)(v110 - 8);
                  if (v113 != 0) {
                    if (*(_QWORD*)(*v7 + 200) != 0) {
                      v114 = 128;
                    }
                    else {
                      v114 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v7 + v114, v113);
                  }
                }
                v110 = v111;
              } while (v111 != v109);
              v90 = a1;
              v299_.v321 = v109;
              v109 = v299_.v320;
              if (v299_.v320 != 0) {
              LABEL_218:
                if (*(_QWORD*)(*v7 + 200) != 0) {
                  v115 = 128;
                }
                else {
                  v115 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v7 + v115, v109);
              }
            }
            if ((v299_.v315 & 1) != 0 && v299_.v317 != 0) {
              if (*(_QWORD*)(*v7 + 200) != 0) {
                v116 = 128;
              }
              else {
                v116 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v7 + v116, v299_.v317);
            }
            if (v299_.v313 == 1 && (v299_.v311 & 1) != 0 && v299_.v312 != 0) {
              if (*(_QWORD*)(*v7 + 200) != 0) {
                v117 = 128;
              }
              else {
                v117 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v7 + v117, v299_.v312);
            }
            if (v299_.v310 == 1 && (v299_.v308 & 1) != 0 && v299_.v309 != 0) {
              if (*(_QWORD*)(*v7 + 200) != 0) {
                v118 = 128;
              }
              else {
                v118 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v7 + v118, v299_.v309);
            }
            if (v299_.v305 == 1) {
              if ((v299_.v303 & 1) != 0 && v299_.v304 != 0) {
                if (*(_QWORD*)(*v7 + 200) != 0) {
                  v119 = 128;
                }
                else {
                  v119 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v7 + v119, v299_.v304);
              }
              v120 = v299_.v301;
              if (v299_.v301 != 0) {
                v121 = v299_.v302;
                if (v299_.v301 == v299_.v302) {
                  goto LABEL_260;
                }
                v122 = v299_.v302;
                do {
                  v123 = *(_BYTE*)(v122 - 24);
                  v122 -= 24;
                  if ((v123 & 1) != 0) {
                    v124 = *(_QWORD*)(v121 - 8);
                    if (v124 != 0) {
                      if (*(_QWORD*)(*v7 + 200) != 0) {
                        v125 = 128;
                      }
                      else {
                        v125 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(*v7 + v125, v124);
                    }
                  }
                  v121 = v122;
                } while (v122 != v120);
                v90 = a1;
                v299_.v302 = v120;
                v120 = v299_.v301;
                if (v299_.v301 != 0) {
                LABEL_260:
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v126 = 128;
                  }
                  else {
                    v126 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v126, v120);
                }
              }
            }
            if ((v324_.v324[0] & 1) != 0 && v324_.v325 != 0) {
              if (*(_QWORD*)(*v7 + 200) != 0) {
                v127 = 128;
              }
              else {
                v127 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v7 + v127, v324_.v325);
            }
            v4 = v287;
            if ((v108 & 1) != 0) {
              break;
            }
            v102 = v90[1];
            v101 = v90[2];
          }
        }
      }
    }
  }
  else {
    v4 = v287;
    v90 = a1;
  }
LABEL_163:
  v91 = *(_QWORD*)(GameData_21f3d10 + 48);
  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) == 0) {
    v91 = *(_BYTE*)(GameData_21f3d10 + 40) >> 1;
  }
  if (v91 != 7) {
    goto LABEL_172;
  }
  v92 = (int*)(GameData_21f3d10 + 41);
  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) != 0) {
    v92 = *(int**)(GameData_21f3d10 + 56);
  }
  v93 = *v92;
  v94 = *(int*)((char*)v92 + 3);
  if (v93 != *(_DWORD*)"Hub_000" || v94 != *(_DWORD*)"_000") {
  LABEL_172:
    if (*(_BYTE*)(GameData_21c9608 + 304) == 1) {
      if ((game_gmap_GmapClock_instance_ != 0 &&
               *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                       *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                       *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                   0 ||
           (v299_.v300 = (__int64*)&GameData_1adebe5,
            v299_.v299 = game_HashString((__int64)&GameData_1adebe5),
            game_GameModeData_instance_ != 0) &&
               (v96 = game_GameVariableTable_Find(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)&v299_.v299)) != 0 &&
               *(_DWORD*)(v96 + 32) != 0) &&
          (game_GameModeData_instance_ == 0 ||
           ((v97 = *(_DWORD*)(game_GameModeData_instance_ + 60)) == 1
                ? (v98 = *(_BYTE*)(game_GameModeData_instance_ + 15) == 5)
                : (v98 = false),
            !v98 ? (v99 = v97 == 2) : (v99 = true), !v99))) {
        v100 = (__int64)v296_.v296;
        if (v296_.v296 == (__int64*)v10) {
          v4 = v287;
        }
        else {
          v4 = v287;
          while ((*(_BYTE*)(v100 + 224) & 1) == 0) {
            v100 += 232;
            if (v100 == v10) {
              goto LABEL_285;
            }
          }
        }
        if (v100 == v10) {
          v129 = v10;
        }
        else {
          v128 = v100 + 232;
          if (v100 + 232 == v10) {
            v129 = v10;
          }
          else {
            do {
              if ((*(_BYTE*)(v128 + 224) & 1) == 0) {
                v100 = GameHr_f7eac0(v100, (__int64*)v128) + 232;
              }
              v128 += 232;
            } while (v128 != v10);
            v129 = (__int64)v296_.v297;
          }
          v4 = v287;
          if (v100 != v129) {
            v10 = v100;
            do {
              v129 -= 232;
              GameHr_f7d4a0(v129);
            } while (v129 != v10);
            v296_.v297 = (__int64*)v10;
            goto LABEL_284;
          }
        }
        v10 = v129;
      }
      else {
      LABEL_284:
        v4 = v287;
      }
    }
  }
LABEL_285:
  v130 = v296_.v296;
  if (v296_.v296 != (__int64*)v10) {
    v131 = v4;
    v132 = v4[1];
    do {
      if (v132 >= v131[2]) {
        v132 = GameHr_f7dfc0(v131, v130);
      }
      else {
        GameRoutine_f7e2a0_alt1(v132, v130);
        v132 += 232LL;
      }
      v130 += 29;
      v131[1] = v132;
    } while (v130 != (__int64*)v10);
    v130 = v296_.v296;
    v4 = v131;
  }
  if (v130 != nullptr) {
    v133 = (__int64)v296_.v297;
    if (v130 == v296_.v297) {
      v4 = v287;
    }
    else {
      do {
        v133 -= 232;
        GameHr_f7d4a0(v133);
      } while ((__int64*)v133 != v130);
      v4 = v287;
      v296_.v297 = v130;
      v130 = v296_.v296;
      if (v296_.v296 == nullptr) {
        goto LABEL_301;
      }
    }
    v134 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v134 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v7 + v134, (__int64)v130);
  }
LABEL_301:
  v135 = (__int64*)v90[4];
  v285 = (__int64*)v90[5];
  if (v135 != v285) {
    while (2) {
      game_hub_f7be00((void*)(&v299_.v299), a2, v135);
      v138 = (__int64*)v299_.v299;
      v139 = v299_.v300;
      v289 = v135;
      if ((a3 & 1) != 0) {
        v140 = v299_.v299;
        if ((__int64*)v299_.v299 != v299_.v300) {
          v140 = v299_.v299;
          while (*(_BYTE*)(v140 + 225) != 0) {
            v140 += 232;
            if ((__int64*)v140 == v299_.v300) {
              v4 = v287;
              goto LABEL_314;
            }
          }
        }
        if ((__int64*)v140 == v299_.v300 ||
            (v143 = (__int64*)(v140 + 232),
             (__int64*)(v140 + 232) == v299_.v300)) {
          v141 = (__int64*)v140;
        }
        else {
          v141 = (__int64*)v140;
          do {
            v147 = *(unsigned __int8*)(v140 + 457);
            v140 = (__int64)v143;
            if (v147 != 0) {
              v148 = *v143;
              *((_BYTE*)v141 + 8) = *(_BYTE*)(v140 + 8);
              *v141 = v148;
              GameHr_f7ee00((__int64)(v141 + 2), v140 + 16);
              *((_DWORD*)v141 + 18) = *(_DWORD*)(v140 + 72);
              if (*((unsigned __int8*)v141 + 112) ==
                  *(unsigned __int8*)(v140 + 112)) {
                if (*((_BYTE*)v141 + 112) != 0) {
                  v149 = *((_BYTE*)v141 + 88);
                  *((_BYTE*)v141 + 80) = *(_BYTE*)(v140 + 80);
                  if ((v149 & 1) != 0) {
                    v150 = v141[13];
                    if (v150 != 0) {
                      if (*(_QWORD*)(*v7 + 200) != 0) {
                        v151 = 128;
                      }
                      else {
                        v151 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(*v7 + v151, v150);
                    }
                  }
                  v152 = *(_QWORD*)(v140 + 88);
                  v153 = *(_QWORD*)(v140 + 104);
                  v141[12] = *(_QWORD*)(v140 + 96);
                  v141[13] = v153;
                  v141[11] = v152;
                  *(_WORD*)(v140 + 88) = 0;
                }
              }
              else if (*((_BYTE*)v141 + 112) != 0) {
                if ((v141[11] & 1) != 0) {
                  v154 = v141[13];
                  if (v154 != 0) {
                    if (*(_QWORD*)(*v7 + 200) != 0) {
                      v155 = 128;
                    }
                    else {
                      v155 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v7 + v155, v154);
                  }
                }
                *((_BYTE*)v141 + 112) = 0;
              }
              else {
                *((_BYTE*)v141 + 80) = *(_BYTE*)(v140 + 80);
                v156 = *(_QWORD*)(v140 + 96);
                v157 = *(_QWORD*)(v140 + 104);
                v141[11] = *(_QWORD*)(v140 + 88);
                v141[12] = v156;
                v141[13] = v157;
                *(_QWORD*)(v140 + 96) = 0;
                *(_QWORD*)(v140 + 104) = 0;
                *(_QWORD*)(v140 + 88) = 0;
                *((_BYTE*)v141 + 112) = 1;
              }
              if (*((unsigned __int8*)v141 + 144) ==
                  *(unsigned __int8*)(v140 + 144)) {
                if (*((_BYTE*)v141 + 144) != 0) {
                  if ((v141[15] & 1) != 0) {
                    v158 = v141[17];
                    if (v158 != 0) {
                      if (*(_QWORD*)(*v7 + 200) != 0) {
                        v159 = 128;
                      }
                      else {
                        v159 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(*v7 + v159, v158);
                    }
                  }
                  v160 = *(_QWORD*)(v140 + 120);
                  v161 = *(_QWORD*)(v140 + 136);
                  v141[16] = *(_QWORD*)(v140 + 128);
                  v141[17] = v161;
                  v141[15] = v160;
                  *(_WORD*)(v140 + 120) = 0;
                }
              }
              else if (*((_BYTE*)v141 + 144) != 0) {
                if ((v141[15] & 1) != 0) {
                  v162 = v141[17];
                  if (v162 != 0) {
                    if (*(_QWORD*)(*v7 + 200) != 0) {
                      v163 = 128;
                    }
                    else {
                      v163 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v7 + v163, v162);
                  }
                }
                *((_BYTE*)v141 + 144) = 0;
              }
              else {
                v164 = *(_QWORD*)(v140 + 128);
                v165 = *(_QWORD*)(v140 + 136);
                v141[15] = *(_QWORD*)(v140 + 120);
                v141[16] = v164;
                v141[17] = v165;
                *(_QWORD*)(v140 + 128) = 0;
                *(_QWORD*)(v140 + 136) = 0;
                *(_QWORD*)(v140 + 120) = 0;
                *((_BYTE*)v141 + 144) = 1;
              }
              v166 = *((_BYTE*)v141 + 160);
              v141[19] = *(_QWORD*)(v140 + 152);
              if ((v166 & 1) != 0) {
                v167 = v141[22];
                if (v167 != 0) {
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v168 = 128;
                  }
                  else {
                    v168 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v168, v167);
                }
              }
              v169 = *(_QWORD*)(v140 + 160);
              v170 = *(_QWORD*)(v140 + 176);
              v141[21] = *(_QWORD*)(v140 + 168);
              v141[22] = v170;
              v141[20] = v169;
              *(_WORD*)(v140 + 160) = 0;
              v171 = *(_QWORD*)(v140 + 184);
              v145 = v141[25];
              *((_BYTE*)v141 + 192) = *(_BYTE*)(v140 + 192);
              v141[23] = v171;
              if (v145 != 0) {
                v172 = v141[26];
                if (v145 == v172) {
                  goto LABEL_321;
                }
                v173 = v141[26];
                do {
                  v174 = *(_BYTE*)(v173 - 24);
                  v173 -= 24;
                  if ((v174 & 1) != 0) {
                    v175 = *(_QWORD*)(v172 - 8);
                    if (v175 != 0) {
                      if (*(_QWORD*)(*v7 + 200) != 0) {
                        v176 = 128;
                      }
                      else {
                        v176 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(*v7 + v176, v175);
                    }
                  }
                  v172 = v173;
                } while (v173 != v145);
                v144 = v141[25];
                v141[26] = v145;
                v145 = v144;
                if (v144 != 0) {
                LABEL_321:
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v146 = 128;
                  }
                  else {
                    v146 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v146, v145);
                }
                v141[26] = 0;
                v141[27] = 0;
                v141[25] = 0;
              }
              v141[25] = *(_QWORD*)(v140 + 200);
              v141[26] = *(_QWORD*)(v140 + 208);
              v141[27] = *(_QWORD*)(v140 + 216);
              *(_QWORD*)(v140 + 208) = 0;
              *(_QWORD*)(v140 + 216) = 0;
              *(_QWORD*)(v140 + 200) = 0;
              *((_WORD*)v141 + 112) = *(_WORD*)(v140 + 224);
              v141 += 29;
            }
            v143 = (__int64*)(v140 + 232);
          } while ((__int64*)(v140 + 232) != v139);
          v138 = (__int64*)v299_.v299;
          v139 = v299_.v300;
        }
        v4 = v287;
        if (v141 == v139) {
          v141 = v139;
          if (v138 == v139) {
            goto LABEL_315;
          }
        }
        else {
          while (v141 != v139) {
            v180 = *(v139 - 4);
            if (v180 != 0) {
              v181 = *(v139 - 3);
              if (v180 == v181) {
                goto LABEL_403;
              }
              v182 = *(v139 - 3);
              do {
                v183 = *(_BYTE*)(v182 - 24);
                v182 -= 24;
                if ((v183 & 1) != 0) {
                  v184 = *(_QWORD*)(v181 - 8);
                  if (v184 != 0) {
                    if (*(_QWORD*)(*v7 + 200) != 0) {
                      v185 = 128;
                    }
                    else {
                      v185 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v7 + v185, v184);
                  }
                }
                v181 = v182;
              } while (v182 != v180);
              v186 = *(v139 - 4);
              *(v139 - 3) = v180;
              v180 = v186;
              if (v186 != 0) {
              LABEL_403:
                if (*(_QWORD*)(*v7 + 200) != 0) {
                  v187 = 128;
                }
                else {
                  v187 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v7 + v187, v180);
              }
            }
            if ((*(_BYTE*)(v139 - 9) & 1) != 0) {
              v188 = *(v139 - 7);
              if (v188 != 0) {
                if (*(_QWORD*)(*v7 + 200) != 0) {
                  v189 = 128;
                }
                else {
                  v189 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v7 + v189, v188);
              }
            }
            if (*((_BYTE*)v139 - 88) == 1 && (*(_BYTE*)(v139 - 14) & 1) != 0) {
              v190 = *(v139 - 12);
              if (v190 != 0) {
                if (*(_QWORD*)(*v7 + 200) != 0) {
                  v191 = 128;
                }
                else {
                  v191 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v7 + v191, v190);
              }
            }
            if (*((_BYTE*)v139 - 120) == 1 && (*(_BYTE*)(v139 - 18) & 1) != 0) {
              v192 = *(v139 - 16);
              if (v192 != 0) {
                if (*(_QWORD*)(*v7 + 200) != 0) {
                  v193 = 128;
                }
                else {
                  v193 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v7 + v193, v192);
              }
            }
            if (*((_BYTE*)v139 - 168) == 1) {
              if ((*(_BYTE*)(v139 - 24) & 1) != 0) {
                v194 = *(v139 - 22);
                if (v194 != 0) {
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v195 = 128;
                  }
                  else {
                    v195 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v195, v194);
                }
              }
              v178 = *(v139 - 27);
              if (v178 != 0) {
                v196 = *(v139 - 26);
                if (v178 == v196) {
                  goto LABEL_386;
                }
                v197 = *(v139 - 26);
                do {
                  v198 = *(_BYTE*)(v197 - 24);
                  v197 -= 24;
                  if ((v198 & 1) != 0) {
                    v199 = *(_QWORD*)(v196 - 8);
                    if (v199 != 0) {
                      if (*(_QWORD*)(*v7 + 200) != 0) {
                        v200 = 128;
                      }
                      else {
                        v200 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(*v7 + v200, v199);
                    }
                  }
                  v196 = v197;
                } while (v197 != v178);
                v177 = *(v139 - 27);
                *(v139 - 26) = v178;
                v178 = v177;
                if (v177 != 0) {
                LABEL_386:
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v179 = 128;
                  }
                  else {
                    v179 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v179, v178);
                }
              }
            }
            v139 -= 29;
          }
          v138 = (__int64*)v299_.v299;
          v4 = v287;
          v299_.v300 = v141;
          if ((__int64*)v299_.v299 == v141) {
          LABEL_315:
            v142 = v289;
            if (v138 == nullptr) {
              goto LABEL_307;
            }
          LABEL_535:
            for (j = v299_.v300; v138 != j; j -= 29) {
              v260 = *(j - 4);
              if (v260 != 0) {
                v261 = *(j - 3);
                if (v260 == v261) {
                  goto LABEL_554;
                }
                v262 = *(j - 3);
                do {
                  v263 = *(_BYTE*)(v262 - 24);
                  v262 -= 24;
                  if ((v263 & 1) != 0) {
                    v264 = *(_QWORD*)(v261 - 8);
                    if (v264 != 0) {
                      if (*(_QWORD*)(*v7 + 200) != 0) {
                        v265 = 128;
                      }
                      else {
                        v265 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(*v7 + v265, v264);
                    }
                  }
                  v261 = v262;
                } while (v262 != v260);
                v266 = *(j - 4);
                *(j - 3) = v260;
                v260 = v266;
                if (v266 != 0) {
                LABEL_554:
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v267 = 128;
                  }
                  else {
                    v267 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v267, v260);
                }
              }
              if ((*(_BYTE*)(j - 9) & 1) != 0) {
                v268 = *(j - 7);
                if (v268 != 0) {
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v269 = 128;
                  }
                  else {
                    v269 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v269, v268);
                }
              }
              if (*((_BYTE*)j - 88) == 1 && (*(_BYTE*)(j - 14) & 1) != 0) {
                v270 = *(j - 12);
                if (v270 != 0) {
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v271 = 128;
                  }
                  else {
                    v271 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v271, v270);
                }
              }
              if (*((_BYTE*)j - 120) == 1 && (*(_BYTE*)(j - 18) & 1) != 0) {
                v272 = *(j - 16);
                if (v272 != 0) {
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v273 = 128;
                  }
                  else {
                    v273 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v273, v272);
                }
              }
              if (*((_BYTE*)j - 168) == 1) {
                if ((*(_BYTE*)(j - 24) & 1) != 0) {
                  v274 = *(j - 22);
                  if (v274 != 0) {
                    if (*(_QWORD*)(*v7 + 200) != 0) {
                      v275 = 128;
                    }
                    else {
                      v275 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v7 + v275, v274);
                  }
                }
                v258 = *(j - 27);
                if (v258 != 0) {
                  v276 = *(j - 26);
                  if (v258 == v276) {
                    goto LABEL_537;
                  }
                  v277 = *(j - 26);
                  do {
                    v278 = *(_BYTE*)(v277 - 24);
                    v277 -= 24;
                    if ((v278 & 1) != 0) {
                      v279 = *(_QWORD*)(v276 - 8);
                      if (v279 != 0) {
                        if (*(_QWORD*)(*v7 + 200) != 0) {
                          v280 = 128;
                        }
                        else {
                          v280 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(*v7 + v280, v279);
                      }
                    }
                    v276 = v277;
                  } while (v277 != v258);
                  v257 = *(j - 27);
                  *(j - 26) = v258;
                  v258 = v257;
                  if (v257 != 0) {
                  LABEL_537:
                    if (*(_QWORD*)(*v7 + 200) != 0) {
                      v259 = 128;
                    }
                    else {
                      v259 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v7 + v259, v258);
                  }
                }
              }
            }
            v136 = *v7;
            v299_.v300 = v138;
            if (*(_QWORD*)(v136 + 200) != 0) {
              v137 = 128;
            }
            else {
              v137 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(v136 + v137, (__int64)v138);
            v4 = v287;
          LABEL_307:
            v135 = v142 + 20;
            if (v135 == v285) {
              return;
            }
            continue;
          }
        }
      }
      else {
      LABEL_314:
        v141 = v299_.v300;
        if ((__int64*)v299_.v299 == v299_.v300) {
          goto LABEL_315;
        }
      }
      break;
    }
    v201 = v4[1];
    do {
      v202 = v4[2];
      if (v201 < v202) {
        GameRoutine_f7e2a0_alt1(v201, v138);
        v201 += 232LL;
      }
      else {
        v203 = *v4;
        v204 = v201 - *v4;
        v205 = 0x34F72C234F72C235LL * (v204 >> 3) + 1;
        if (v205 > 0x11A7B9611A7B961LL) {
          goto LABEL_598;
        }
        v206 = 0x34F72C234F72C235LL * ((__int64)(v202 - v203) >> 3);
        if (2 * v206 > v205) {
          v205 = 2 * v206;
        }
        if (v206 >= 0x8D3DCB08D3DCB0LL) {
          v205 = 0x11A7B9611A7B961LL;
        }
        v295 = v205;
        if (v205 != 0) {
          if (v205 > 0x11A7B9611A7B961LL) {
            goto LABEL_599;
          }
          v207 = fw_memory_HeapManager_Allocate_alt1(*v7, 232 * v205, 16, 0);
        }
        else {
          v207 = 0;
        }
        v208 = v207 + v204;
        v293 = v207;
        GameRoutine_f7e2a0_alt1(v207 + v204, v138);
        v4 = v287;
        v291 = v208;
        v209 = *v287;
        v210 = v208 + *v287 - v201;
        if (v201 != *v287) {
          v211 = 0;
          do {
            v216 = v209 + v211;
            v217 = v210 + v211;
            v218 = *(_QWORD*)(v209 + v211);
            v219 = *(_BYTE*)(v209 + v211 + 8);
            *(_BYTE*)(v217 + 64) = 0;
            *(_BYTE*)(v217 + 8) = v219;
            *(_QWORD*)v217 = v218;
            *(_BYTE*)(v210 + v211 + 16) = 0;
            if (*(_BYTE*)(v209 + v211 + 64) == 1) {
              *(_QWORD*)(v210 + v211 + 24) = 0;
              *(_QWORD*)(v210 + v211 + 32) = 0;
              *(_QWORD*)(v210 + v211 + 16) = 0;
              *(_QWORD*)(v217 + 16) = *(_QWORD*)(v216 + 16);
              *(_QWORD*)(v217 + 24) = *(_QWORD*)(v216 + 24);
              *(_QWORD*)(v217 + 32) = *(_QWORD*)(v216 + 32);
              *(_QWORD*)(v216 + 24) = 0;
              *(_QWORD*)(v216 + 32) = 0;
              *(_QWORD*)(v216 + 16) = 0;
              v220 = *(_QWORD*)(v216 + 40);
              v221 = *(_QWORD*)(v216 + 56);
              *(_QWORD*)(v217 + 48) = *(_QWORD*)(v216 + 48);
              *(_QWORD*)(v217 + 56) = v221;
              *(_QWORD*)(v217 + 40) = v220;
              *(_QWORD*)(v216 + 48) = 0;
              *(_QWORD*)(v216 + 56) = 0;
              *(_QWORD*)(v216 + 40) = 0;
              *(_BYTE*)(v217 + 64) = 1;
            }
            v222 = *(_DWORD*)(v216 + 72);
            *(_BYTE*)(v217 + 80) = 0;
            *(_BYTE*)(v217 + 112) = 0;
            *(_DWORD*)(v217 + 72) = v222;
            if (*(_BYTE*)(v216 + 112) == 1) {
              v223 = (_QWORD*)(v209 + v211);
              *(_BYTE*)(v217 + 80) = *(_BYTE*)(v209 + v211 + 80);
              v224 = (_QWORD*)(v210 + v211);
              v225 = *(_QWORD*)(v209 + v211 + 88);
              v226 = *(_QWORD*)(v209 + v211 + 104);
              v224[12] = *(_QWORD*)(v209 + v211 + 96);
              v224[13] = v226;
              v224[11] = v225;
              v223[12] = 0;
              v223[13] = 0;
              v223[11] = 0;
              *(_BYTE*)(v217 + 112) = 1;
            }
            v227 = v210 + v211;
            *(_BYTE*)(v210 + v211 + 120) = 0;
            *(_BYTE*)(v210 + v211 + 144) = 0;
            if (*(_BYTE*)(v216 + 144) == 1) {
              v228 = (_QWORD*)(v209 + v211);
              v229 = *(_QWORD*)(v209 + v211 + 120);
              v230 = *(_QWORD*)(v209 + v211 + 136);
              *(_QWORD*)(v210 + v211 + 128) = *(_QWORD*)(v209 + v211 + 128);
              *(_QWORD*)(v210 + v211 + 136) = v230;
              *(_QWORD*)(v210 + v211 + 120) = v229;
              v228[16] = 0;
              v228[17] = 0;
              v228[15] = 0;
              *(_BYTE*)(v227 + 144) = 1;
            }
            v211 += 232;
            *(_QWORD*)(v227 + 152) = *(_QWORD*)(v216 + 152);
            v212 = *(_QWORD*)(v216 + 160);
            v213 = *(_QWORD*)(v216 + 176);
            *(_QWORD*)(v227 + 168) = *(_QWORD*)(v216 + 168);
            *(_QWORD*)(v227 + 176) = v213;
            *(_QWORD*)(v227 + 160) = v212;
            *(_QWORD*)(v216 + 168) = 0;
            *(_QWORD*)(v216 + 176) = 0;
            *(_QWORD*)(v216 + 160) = 0;
            v214 = *(_QWORD*)(v216 + 184);
            v215 = *(_QWORD*)(v216 + 192);
            *(_QWORD*)(v227 + 200) = 0;
            *(_QWORD*)(v227 + 208) = 0;
            *(_QWORD*)(v227 + 216) = 0;
            *(_QWORD*)(v227 + 184) = v214;
            *(_QWORD*)(v227 + 192) = v215;
            *(_QWORD*)(v227 + 200) = *(_QWORD*)(v216 + 200);
            *(_QWORD*)(v227 + 208) = *(_QWORD*)(v216 + 208);
            *(_QWORD*)(v227 + 216) = *(_QWORD*)(v216 + 216);
            *(_QWORD*)(v216 + 208) = 0;
            *(_QWORD*)(v216 + 216) = 0;
            *(_QWORD*)(v216 + 200) = 0;
            *(_WORD*)(v227 + 224) = *(_WORD*)(v216 + 224);
          } while (v216 + 232 != v201);
          do {
            v234 = *(_QWORD*)(v209 + 200);
            if (v234 != 0) {
              v235 = *(_QWORD*)(v209 + 208);
              if (v234 == v235) {
                goto LABEL_486;
              }
              v236 = *(_QWORD*)(v209 + 208);
              do {
                v237 = *(_BYTE*)(v236 - 24);
                v236 -= 24;
                if ((v237 & 1) != 0) {
                  v238 = *(_QWORD*)(v235 - 8);
                  if (v238 != 0) {
                    if (*(_QWORD*)(*v7 + 200) != 0) {
                      v239 = 128;
                    }
                    else {
                      v239 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v7 + v239, v238);
                  }
                }
                v235 = v236;
              } while (v236 != v234);
              v240 = *(_QWORD*)(v209 + 200);
              *(_QWORD*)(v209 + 208) = v234;
              v234 = v240;
              if (v240 != 0) {
              LABEL_486:
                if (*(_QWORD*)(*v7 + 200) != 0) {
                  v241 = 128;
                }
                else {
                  v241 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v7 + v241, v234);
              }
            }
            if ((*(_BYTE*)(v209 + 160) & 1) != 0) {
              v242 = *(_QWORD*)(v209 + 176);
              if (v242 != 0) {
                if (*(_QWORD*)(*v7 + 200) != 0) {
                  v243 = 128;
                }
                else {
                  v243 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v7 + v243, v242);
              }
            }
            if (*(_BYTE*)(v209 + 144) == 1 &&
                (*(_BYTE*)(v209 + 120) & 1) != 0) {
              v244 = *(_QWORD*)(v209 + 136);
              if (v244 != 0) {
                if (*(_QWORD*)(*v7 + 200) != 0) {
                  v245 = 128;
                }
                else {
                  v245 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v7 + v245, v244);
              }
            }
            if (*(_BYTE*)(v209 + 112) == 1 && (*(_BYTE*)(v209 + 88) & 1) != 0) {
              v246 = *(_QWORD*)(v209 + 104);
              if (v246 != 0) {
                if (*(_QWORD*)(*v7 + 200) != 0) {
                  v247 = 128;
                }
                else {
                  v247 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v7 + v247, v246);
              }
            }
            if (*(_BYTE*)(v209 + 64) == 1) {
              if ((*(_BYTE*)(v209 + 40) & 1) != 0) {
                v248 = *(_QWORD*)(v209 + 56);
                if (v248 != 0) {
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v249 = 128;
                  }
                  else {
                    v249 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v249, v248);
                }
              }
              v232 = *(_QWORD*)(v209 + 16);
              if (v232 != 0) {
                v250 = *(_QWORD*)(v209 + 24);
                if (v232 == v250) {
                  goto LABEL_470;
                }
                v251 = *(_QWORD*)(v209 + 24);
                do {
                  v252 = *(_BYTE*)(v251 - 24);
                  v251 -= 24;
                  if ((v252 & 1) != 0) {
                    v253 = *(_QWORD*)(v250 - 8);
                    if (v253 != 0) {
                      if (*(_QWORD*)(*v7 + 200) != 0) {
                        v254 = 128;
                      }
                      else {
                        v254 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(*v7 + v254, v253);
                    }
                  }
                  v250 = v251;
                } while (v251 != v232);
                v231 = *(_QWORD*)(v209 + 16);
                *(_QWORD*)(v209 + 24) = v232;
                v232 = v231;
                if (v231 != 0) {
                LABEL_470:
                  if (*(_QWORD*)(*v7 + 200) != 0) {
                    v233 = 128;
                  }
                  else {
                    v233 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v7 + v233, v232);
                }
              }
            }
            v209 += 232;
          } while (v209 != v201);
          v4 = v287;
          v209 = *v287;
        }
        *v4 = v210;
        v4[2] = v293 + 232 * v295;
        v201 = v291 + 232;
        if (v209 != 0) {
          if (*(_QWORD*)(*v7 + 200) != 0) {
            v255 = 128;
          }
          else {
            v255 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v7 + v255, v209);
        }
      }
      v138 += 29;
      v4[1] = v201;
    } while (v138 != v141);
    v138 = (__int64*)v299_.v299;
    v142 = v289;
    if (v299_.v299 != 0) {
      goto LABEL_535;
    }
    goto LABEL_307;
  }
}

__int64* game_hub_f79e00(_QWORD* a1, __int64* a2)
{
  __int64* v2;
  _QWORD* v3;
  __int64* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  bool v8;
  __int64 v9;
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
  unsigned __int64 v27;
  int v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64* v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
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
  __int64* v69;
  __int64* v70;
  __int64** v71;
  unsigned __int64 v72;
  bool v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  bool v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  int v83;
  int v84;
  __int64* v85;
  __int64* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  bool v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  bool v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  int v109;
  int v110;
  __int64* v112;
  __int64* v113;
  _QWORD* v114;
  __int64 v115;
  int v116;
  struct {
    __int64 v117;
    __int64 v118;
    unsigned __int64 v119;
    __int64 v120;
    char v121;
  } v117_;
  struct {
    __int64 v122;
    unsigned __int64 v123;
    __int64 v124;
    unsigned __int8 v125;
    char gap105_[7];
    __int64 v126;
  } v122_;
  struct {
    __int64 v127;
    __int64 v128;
  } v127_;

  v3 = a1 + 11;
  v2 = (__int64*)a1[11];
  v4 = a2;
  v114 = a1;
  if (v2 == nullptr) {
    goto LABEL_50;
  }
  v5 = *(unsigned __int8*)a2;
  v6 = a1 + 11;
  v7 = a1[11];
  v8 = (v5 & 1) == 0;
  v9 = v5 >> 1;
  v10 = v8 ? (__int64)a2 + 1 : a2[2];
  v11 = v8 ? v9 : a2[1];
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
    v18 = memcmp_alt1(v16, v10, v17);
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
    v28 = memcmp_alt1(v10, v26, v27);
    if (v28 != 0) {
      v29 = v28 >= 0 ? v6 : v3;
    }
    else {
      v29 = v11 >= v25 ? v6 : v3;
    }
  }
  a1 = v114;
  if (v3 == v29) {
  LABEL_50:
    v112 = v4;
    v113 = v3;
    game_hub_f77fc0((void*)(&v127_.v127), a1, v4, 0);
    v30 = v127_.v127;
    v31 = v127_.v128;
    if (v127_.v127 == v127_.v128) {
      v32 = 0;
      v34 = 0;
    }
    else {
      v32 = 0;
      v33 = 0;
      v34 = 0;
      do {
        if (*(_BYTE*)(v30 + 192) == 1) {
          LOBYTE(v117_.v117) = 0;
          v117_.v121 = 0;
          LOBYTE(v122_.v122) = 0;
          v122_.v125 = 0;
          v122_.v126 = 0;
          v115 = *(_QWORD*)v30;
          v116 = *(_DWORD*)(v30 + 72);
          GameHr_f7cc80(&v117_.v117, v30 + 80);
          GameHr_f7cdc0(&v122_.v122, (__int64*)(v30 + 120));
          v122_.v126 = *(_QWORD*)(v30 + 152);
          if (v34 >= v33) {
            v37 = v34 - v32;
            v38 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v34 - v32) >> 5) + 1;
            if (v38 > 0x2AAAAAAAAAAAAAALL) {
              GameRoutine_f7d5b0_alt1();
            }
            if (0x5555555555555556LL * ((__int64)(v33 - v32) >> 5) > v38) {
              v38 = 0x5555555555555556LL * ((__int64)(v33 - v32) >> 5);
            }
            if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v33 - v32) >> 5) >=
                0x155555555555555LL) {
              v38 = 0x2AAAAAAAAAAAAAALL;
            }
            if (v38 > 0x2AAAAAAAAAAAAAALL) {
              GameRoutine_60a210_alt1();
            }
            v39 = 96 * v38;
            v40 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                      96 * v38, 16, 0);
            v41 = v40 + v37;
            v42 = v40;
            *(_BYTE*)(v41 + 16) = 0;
            *(_BYTE*)(v41 + 48) = 0;
            *(_QWORD*)v41 = v115;
            *(_DWORD*)(v41 + 8) = v116;
            if (v117_.v121 == 1) {
              *(_BYTE*)(v41 + 16) = v117_.v117;
              if ((v117_.v118 & 1) != 0) {
                fw_text_String_CopyTerminated_alt1((__int64*)(v41 + 24),
                                                   v117_.v120, v117_.v119);
              }
              else {
                v43 = v117_.v119;
                *(_QWORD*)(v41 + 24) = v117_.v118;
                *(_QWORD*)(v41 + 32) = v43;
                *(_QWORD*)(v41 + 40) = v117_.v120;
              }
              *(_BYTE*)(v41 + 48) = 1;
            }
            v47 = v122_.v125;
            *(_BYTE*)(v41 + 56) = 0;
            v48 = (__int64*)(v41 + 56);
            *(_BYTE*)(v41 + 80) = 0;
            if (v47 == 1) {
              if ((v122_.v122 & 1) != 0) {
                fw_text_String_CopyTerminated_alt1(v48, v122_.v124, v122_.v123);
              }
              else {
                v49 = v122_.v123;
                *v48 = v122_.v122;
                *(_QWORD*)(v41 + 64) = v49;
                *(_QWORD*)(v41 + 72) = v122_.v124;
              }
              *(_BYTE*)(v41 + 80) = 1;
            }
            v50 = v41 - v37;
            *(_QWORD*)(v41 + 88) = v122_.v126;
            if (v32 != v34) {
              v51 = 0;
              do {
                v53 = v32 + v51;
                v54 = v50 + v51;
                *(_QWORD*)v54 = *(_QWORD*)(v32 + v51);
                v55 = *(_DWORD*)(v32 + v51 + 8);
                *(_BYTE*)(v54 + 16) = 0;
                *(_BYTE*)(v54 + 48) = 0;
                *(_DWORD*)(v54 + 8) = v55;
                if (*(_BYTE*)(v32 + v51 + 48) == 1) {
                  *(_BYTE*)(v54 + 16) = *(_BYTE*)(v53 + 16);
                  v56 = *(_QWORD*)(v53 + 24);
                  v57 = *(_QWORD*)(v53 + 40);
                  *(_QWORD*)(v54 + 32) = *(_QWORD*)(v53 + 32);
                  *(_QWORD*)(v54 + 40) = v57;
                  *(_QWORD*)(v54 + 24) = v56;
                  *(_QWORD*)(v53 + 32) = 0;
                  *(_QWORD*)(v53 + 40) = 0;
                  *(_QWORD*)(v53 + 24) = 0;
                  *(_BYTE*)(v54 + 48) = 1;
                }
                *(_BYTE*)(v54 + 56) = 0;
                *(_BYTE*)(v54 + 80) = 0;
                if (*(_BYTE*)(v53 + 80) == 1) {
                  v58 = (_QWORD*)(v32 + v51);
                  v59 = *(_QWORD*)(v32 + v51 + 56);
                  v60 = *(_QWORD*)(v32 + v51 + 72);
                  *(_QWORD*)(v54 + 64) = *(_QWORD*)(v32 + v51 + 64);
                  *(_QWORD*)(v54 + 72) = v60;
                  *(_QWORD*)(v54 + 56) = v59;
                  v58[8] = 0;
                  v58[9] = 0;
                  v58[7] = 0;
                  *(_BYTE*)(v54 + 80) = 1;
                }
                v52 = v50 + v51;
                v51 += 96;
                *(_QWORD*)(v52 + 88) = *(_QWORD*)(v53 + 88);
              } while (v53 + 96 != v34);
              v61 = v32;
              do {
                if (*(_BYTE*)(v61 + 80) == 1 &&
                    (*(_BYTE*)(v61 + 56) & 1) != 0) {
                  v62 = *(_QWORD*)(v61 + 72);
                  if (v62 != 0) {
                    v63 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v63 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v62);
                  }
                }
                if (*(_BYTE*)(v61 + 48) == 1 &&
                    (*(_BYTE*)(v61 + 24) & 1) != 0) {
                  v64 = *(_QWORD*)(v61 + 40);
                  if (v64 != 0) {
                    v65 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v65 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, v64);
                  }
                }
                v61 += 96;
              } while (v61 != v34);
            }
            v33 = v42 + v39;
            v34 = v41 + 96;
            if (v32 != 0) {
              v66 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v66 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v32);
            }
            v32 = v50;
          }
          else {
            *(_BYTE*)(v34 + 16) = 0;
            *(_BYTE*)(v34 + 48) = 0;
            *(_QWORD*)v34 = v115;
            *(_DWORD*)(v34 + 8) = v116;
            if (v117_.v121 == 1) {
              *(_BYTE*)(v34 + 16) = v117_.v117;
              if ((v117_.v118 & 1) != 0) {
                fw_text_String_CopyTerminated_alt1((__int64*)(v34 + 24),
                                                   v117_.v120, v117_.v119);
              }
              else {
                v35 = v117_.v118;
                v36 = v117_.v120;
                *(_QWORD*)(v34 + 32) = v117_.v119;
                *(_QWORD*)(v34 + 40) = v36;
                *(_QWORD*)(v34 + 24) = v35;
              }
              *(_BYTE*)(v34 + 48) = 1;
            }
            *(_BYTE*)(v34 + 56) = 0;
            v44 = (__int64*)(v34 + 56);
            *(_BYTE*)(v34 + 80) = 0;
            if (v122_.v125 == 1) {
              if ((v122_.v122 & 1) != 0) {
                fw_text_String_CopyTerminated_alt1(v44, v122_.v124, v122_.v123);
              }
              else {
                v45 = v122_.v122;
                v46 = v122_.v124;
                *(_QWORD*)(v34 + 64) = v122_.v123;
                *(_QWORD*)(v34 + 72) = v46;
                *v44 = v45;
              }
              *(_BYTE*)(v34 + 80) = 1;
            }
            *(_QWORD*)(v34 + 88) = v122_.v126;
            v34 += 96LL;
          }
          if (v122_.v125 == 1 && (v122_.v122 & 1) != 0 && v122_.v124 != 0) {
            v67 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v67 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v122_.v124);
          }
          if (v117_.v121 == 1 && (v117_.v118 & 1) != 0 && v117_.v120 != 0) {
            v68 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v68 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v117_.v120);
          }
        }
        v30 += 232;
      } while (v30 != v31);
    }
    v4 = v112;
    v69 = v113;
    v70 = (__int64*)*v113;
    v71 = (__int64**)v113;
    if (*v113 != 0) {
      v72 = *(unsigned __int8*)v112;
      v73 = (v72 & 1) == 0;
      v74 = v72 >> 1;
      if (v73) {
        v75 = (__int64)v112 + 1;
      }
      else {
        v75 = v112[2];
      }
      if (v73) {
        v76 = v74;
      }
      else {
        v76 = v112[1];
      }
      while (1) {
        while (1) {
          v69 = v70;
          v77 = *((unsigned __int8*)v70 + 32);
          v78 = (v77 & 1) == 0;
          v79 = v77 >> 1;
          v80 = v78 ? v79 : v69[5];
          v81 = v78 ? (__int64)v69 + 33 : v69[6];
          v82 = v80 >= v76 ? v76 : v80;
          v83 = memcmp_alt1(v75, v81, v82);
          if (v83 != 0) {
            break;
          }
          if (v76 >= v80) {
            goto LABEL_142;
          }
        LABEL_128:
          v70 = (__int64*)*v69;
          v71 = (__int64**)v69;
          if (*v69 == 0) {
            goto LABEL_148;
          }
        }
        if (v83 < 0) {
          goto LABEL_128;
        }
      LABEL_142:
        v84 = memcmp_alt1(v81, v75, v82);
        if (v84 != 0) {
          if ((v84 & 0x80000000) == 0) {
            goto LABEL_154;
          }
        }
        else if (v80 >= v76) {
        LABEL_154:
          v86 = v69;
          goto LABEL_155;
        }
        v70 = (__int64*)v69[1];
        if (v70 == nullptr) {
          v71 = (__int64**)(v69 + 1);
          break;
        }
      }
    }
  LABEL_148:
    v85 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
    v86 = v85;
    if ((*(_BYTE*)v112 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v85 + 4, v112[2], v112[1]);
    }
    else {
      v87 = v112[1];
      v85[4] = *v112;
      v85[5] = v87;
      v85[6] = v112[2];
    }
    v86[8] = 0;
    v86[9] = 0;
    v86[7] = 0;
    v88 = v86;
    *v86 = 0;
    v86[1] = 0;
    v86[2] = (__int64)v69;
    *v71 = v86;
    v89 = *(_QWORD*)v114[10];
    if (v89 != 0) {
      v114[10] = v89;
      v88 = *v71;
    }
    fw_containers_BalanceAfterInsert_alt1((__int64*)v114[11], v88);
    ++v114[12];
  LABEL_155:
    GameHr_f7d5e0(v86 + 7, v32, v34,
                  0xAAAAAAAAAAAAAAABLL * ((__int64)(v34 - v32) >> 5));
    v90 = v127_.v127;
    if (v127_.v127 != 0) {
      v91 = v127_.v128;
      if (v127_.v127 == v127_.v128) {
        goto LABEL_159;
      }
      do {
        v91 -= 232;
        GameHr_f7d4a0(v91);
      } while (v91 != v90);
      v90 = v127_.v127;
      if (v127_.v127 != 0) {
      LABEL_159:
        v92 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v92 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v92, v90);
      }
    }
    if (v32 != 0) {
      for (; v34 != v32; v34 -= 96LL) {
        if (*(_BYTE*)(v34 - 16) == 1 && (*(_BYTE*)(v34 - 40) & 1) != 0) {
          v93 = *(_QWORD*)(v34 - 24);
          if (v93 != 0) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v94 = 128;
            }
            else {
              v94 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v94,
                                               v93);
          }
        }
        if (*(_BYTE*)(v34 - 48) == 1 && (*(_BYTE*)(v34 - 72) & 1) != 0) {
          v95 = *(_QWORD*)(v34 - 56);
          if (v95 != 0) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v96 = 128;
            }
            else {
              v96 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v96,
                                               v95);
          }
        }
      }
      v97 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v97 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v97, v32);
    }
    v2 = (__int64*)*v113;
  }
  if (v2 == nullptr) {
  LABEL_210:
    String_60a250_alt1("map::at:  key not found");
  }
  v98 = *(unsigned __int8*)v4;
  v99 = (v98 & 1) == 0;
  v100 = v98 >> 1;
  if (v99) {
    v101 = (__int64)v4 + 1;
  }
  else {
    v101 = v4[2];
  }
  if (v99) {
    v102 = v100;
  }
  else {
    v102 = v4[1];
  }
  while (1) {
    while (1) {
      v103 = *((unsigned __int8*)v2 + 32);
      v104 = (v103 & 1) == 0;
      v105 = v103 >> 1;
      v106 = v104 ? v105 : v2[5];
      v107 = v104 ? (__int64)v2 + 33 : v2[6];
      v108 = v106 >= v102 ? v102 : v106;
      v109 = memcmp_alt1(v101, v107, v108);
      if (v109 != 0) {
        break;
      }
      if (v102 >= v106) {
        goto LABEL_205;
      }
    LABEL_191:
      v2 = (__int64*)*v2;
      if (v2 == nullptr) {
        goto LABEL_210;
      }
    }
    if (v109 < 0) {
      goto LABEL_191;
    }
  LABEL_205:
    v110 = memcmp_alt1(v107, v101, v108);
    if (v110 != 0) {
      if ((v110 & 0x80000000) == 0) {
        return v2 + 7;
      }
      goto LABEL_209;
    }
    if (v106 >= v102) {
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
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  const char* v16;
  const char* v17;
  bool v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 i;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64* v50;
  char v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  unsigned __int64 v56;
  bool v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64* v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64* v65;
  _QWORD* v66;
  _QWORD* v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  __int64* v87;
  char v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  int v101;
  __int64* v102;
  __int64** v103;
  _BYTE* v104;
  __int64* v105;
  __int64* v106;
  __int64 v107;
  __int64* v108;
  __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  int v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  int v117;
  __int64 v118;
  __int64 v119;
  __int64* v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64* v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  char v133;
  __int64 v134;
  __int64 v135;
  int v136;
  _QWORD* v137;
  _QWORD* v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  _QWORD* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  char v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  int v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64* v164;
  __int64* v165;
  char v166;
  __int64 v167;
  __int64 v168;
  int v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64* v173;
  __int64* v174;
  __int64* v175;
  char v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  unsigned __int64 v181;
  bool v182;
  unsigned __int64 v183;
  __int64 v184;
  unsigned __int64 v185;
  __int64 v186;
  __int64* v187;
  unsigned __int64 v188;
  __int64 v189;
  int v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64* v194;
  __int64* v195;
  __int64* v196;
  char v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  unsigned __int8* v201;
  unsigned __int8* v202;
  __int64 v203;
  __int64 v204;
  _QWORD* v205;
  unsigned __int8** v207;
  __int64* v208;
  __int64 v209;
  __int64* v210;
  char* v211;
  struct {
    __int64 v212;
    __int64 v213;
  } v212_;
  struct {
    __int64* v214;
    __int64 v215;
  } v214_;
  struct {
    __int64* v216;
    __int64* v217;
    char* v218;
  } v216_;
  struct {
    __int64 v219;
    unsigned __int64 v220;
    unsigned __int8* v221;
    unsigned __int8 v222;
    char gap177_[7];
    int v223;
    char gap188_[4];
    char v224;
    char gap193_[7];
    __int64 v225;
    unsigned __int64 v226;
    __int64 v227;
    char v228;
    char gap225_[7];
    __int64 v229;
    unsigned __int64 v230;
    __int64 v231;
    unsigned __int8 v232;
    char gap257_[7];
    __int64 v233;
  } v219_;
  struct {
    __int64 v234;
    __int64 v235;
  } v234_;

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
    v8 = (__int64)a1;
    if (*a1 != v7) {
      v9 = (__int64)a1 + 25;
      v207 = a1 + 3;
      v208 = v2;
      v211 = (char*)a1 + 25;
      v201 = a1[1];
      v204 = *(_QWORD*)GameData_212dbb8[0];
      v203 = *(_QWORD*)GameData_212dbb8[0] + 41LL;
      do {
        v12 = *v6;
        if ((v12 & 1) != 0) {
          v13 = *((_QWORD*)v6 + 1);
        }
        else {
          v13 = v12 >> 1;
        }
        if (v13 != 0) {
          v18 = (v12 & 1) == 0;
          v14 = *(unsigned __int8*)(v8 + 24);
          v214_.v214 = nullptr;
          v15 = *(_QWORD*)GameData_212ec00;
          v16 = *((const char**)v6 + 2);
          v214_.v215 = 0;
          v216_.v216 = nullptr;
          if (v18) {
            v17 = (const char*)(v6 + 1);
          }
          else {
            v17 = v16;
          }
          v18 = (v14 & 1) == 0;
          v19 = v14 >> 1;
          if (v18) {
            v20 = v9;
          }
          else {
            v20 = *(_QWORD*)(v8 + 40);
          }
          if (v18) {
            v21 = v19;
          }
          else {
            v21 = *(_QWORD*)(v8 + 32);
          }
          game_hub_LocatorDispos_CreateExternalDataImpl_alt2(
              (void*)(&v234_.v234), v15, v17, v13, &v214_.v214, v20, v21);
          v23 = v234_.v234;
          for (i = v234_.v235; v23 != i; v23 += 616) {
            v35 = *(unsigned __int8*)(v23 + 112);
            if ((v35 & 1) != 0) {
              v36 = *(_QWORD*)(v23 + 120);
            }
            else {
              v36 = v35 >> 1;
            }
            v37 = *(unsigned __int8*)(v8 + 24);
            v38 = *(_QWORD*)(v8 + 32);
            if ((v37 & 1) == 0) {
              v38 = v37 >> 1;
            }
            if (v36 == v38) {
              v39 = (v35 & 1) != 0 ? *(_QWORD*)(v23 + 128) : v23 + 113;
              v40 = (v37 & 1) != 0 ? *(_QWORD*)(v8 + 40) : v9;
              if (memcmp_alt1(v39, v40, v36) == 0) {
                v219_.v224 = 0;
                v219_.v228 = 0;
                LOBYTE(v219_.v229) = 0;
                v219_.v232 = 0;
                v219_.v233 = 0;
                v41 = *(__int64**)(v23 + 80);
                LOBYTE(v214_.v215) = 0;
                LOBYTE(v216_.v216) = 0;
                v219_.v222 = 0;
                v219_.v223 = 0;
                v214_.v214 = v41;
                GameRoutine_f7db00_alt1(&v216_.v216, v8);
                v42 = v2[1];
                v43 = v2[2];
                v219_.v222 = 1;
                if (v42 >= v43) {
                  v44 = GameHr_f7dc20(v2, (__int64*)&v214_.v214);
                }
                else {
                  v44 =
                      GameRoutine_f7de90_alt1(v42, (__int64*)&v214_.v214) + 160;
                }
                v45 = v219_.v232;
                v2[1] = v44;
                if (v45 == 1 && (v219_.v229 & 1) != 0 && v219_.v231 != 0) {
                  v46 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v46 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v219_.v231);
                }
                if (v219_.v228 == 1 && (v219_.v225 & 1) != 0 &&
                    v219_.v227 != 0) {
                  v47 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v47 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v219_.v227);
                }
                if (v219_.v222 == 1) {
                  if ((v219_.v219 & 1) != 0 && v219_.v221 != nullptr) {
                    v48 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v48 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                        (__int64)v219_.v221);
                  }
                  v33 = v216_.v216;
                  if (v216_.v216 != nullptr) {
                    v49 = v216_.v217;
                    if (v216_.v216 == v216_.v217) {
                      goto LABEL_49;
                    }
                    v50 = v216_.v217;
                    do {
                      v51 = *((_BYTE*)v50 - 24);
                      v50 -= 3;
                      if ((v51 & 1) != 0) {
                        v52 = *(v49 - 1);
                        if (v52 != 0) {
                          v53 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v53 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt2(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                              v52);
                        }
                      }
                      v49 = v50;
                    } while (v50 != v33);
                    v9 = (__int64)v211;
                    v216_.v217 = v33;
                    v33 = v216_.v216;
                    if (v216_.v216 != nullptr) {
                    LABEL_49:
                      v34 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v34 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34,
                          (__int64)v33);
                    }
                  }
                }
              }
            }
          }
          v24 = *v6;
          if ((v24 & 1) != 0) {
            v25 = *((_QWORD*)v6 + 1);
          }
          else {
            v25 = v24 >> 1;
          }
          v26 = *(unsigned __int8*)(v204 + 40);
          v27 = *(_QWORD*)(v204 + 48);
          if ((v26 & 1) == 0) {
            v27 = v26 >> 1;
          }
          if (v25 == v27) {
            v28 = (v24 & 1) != 0 ? *((_QWORD*)v6 + 2) : (__int64)(v6 + 1);
            v29 = (v26 & 1) != 0 ? *(_QWORD*)(v204 + 56) : v203;
            if (memcmp_alt1(v28, v29, v25) == 0) {
              v202 = v6;
              v54 = *(_QWORD*)(GameData_220b6d0 + 8);
              v55 = *(_QWORD**)(v54 + 24);
              v205 = (_QWORD*)(v54 + 32);
              if (v55 != (_QWORD*)(v54 + 32)) {
                while (1) {
                  v65 = (__int64*)v55[7];
                  v64 = (__int64*)v55[8];
                  v210 = v64;
                  if (v65 != v64) {
                    break;
                  }
                LABEL_108:
                  v66 = (_QWORD*)v55[1];
                  if (v66 != nullptr) {
                    do {
                      v67 = v66;
                      v66 = (_QWORD*)*v66;
                    } while (v66 != nullptr);
                  }
                  else {
                    do {
                      v67 = (_QWORD*)v55[2];
                      v18 = v55 == (_QWORD*)*v67;
                      v55 = v67;
                    } while (!v18);
                  }
                  v55 = v67;
                  if (v67 == v205) {
                    goto LABEL_97;
                  }
                }
                while (2) {
                  v70 = *v65;
                  v71 = *(unsigned __int8*)(v8 + 24);
                  v72 = *(unsigned __int8*)(*v65 + 112);
                  if ((v72 & 1) != 0) {
                    v73 = *(_QWORD*)(*v65 + 120);
                  }
                  else {
                    v73 = v72 >> 1;
                  }
                  v74 = *(_QWORD*)(v8 + 32);
                  if ((v71 & 1) == 0) {
                    v74 = v71 >> 1;
                  }
                  if (v73 != v74) {
                    goto LABEL_118;
                  }
                  v75 = *(_QWORD*)(v70 + 128);
                  v76 = v70 + 113;
                  v77 = (v72 & 1) != 0 ? v75 : v76;
                  v78 = (v71 & 1) != 0 ? *(_QWORD*)(v8 + 40) : v9;
                  if (memcmp_alt1(v77, v78, v73) != 0) {
                    goto LABEL_118;
                  }
                  v214_.v214 = nullptr;
                  LOBYTE(v214_.v215) = 0;
                  v79 = *(__int64**)v8;
                  v80 = *(__int64**)(v8 + 8);
                  v81 = (__int64)v80 - *(_QWORD*)v8;
                  v18 = v80 == *(__int64**)v8;
                  LOBYTE(v216_.v216) = 0;
                  v219_.v222 = 0;
                  v219_.v223 = 0;
                  v219_.v224 = 0;
                  v219_.v228 = 0;
                  LOBYTE(v219_.v229) = 0;
                  v219_.v232 = 0;
                  v219_.v233 = 0;
                  v214_.v214 = *(__int64**)(*v65 + 56);
                  v216_.v216 = nullptr;
                  v216_.v217 = nullptr;
                  v216_.v218 = nullptr;
                  if (!v18) {
                    if (0xAAAAAAAAAAAAAAABLL * (v81 >> 3) >
                        0xAAAAAAAAAAAAAAALL) {
                      goto LABEL_352;
                    }
                    v71 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, v81, 16, 0);
                    v216_.v216 = (__int64*)v71;
                    v216_.v217 = (__int64*)v71;
                    v216_.v218 = (char*)(v71 + v81);
                    do {
                      if ((*(_BYTE*)v79 & 1) != 0) {
                        fw_text_String_CopyTerminated_alt1((__int64*)v71,
                                                           v79[2], v79[1]);
                      }
                      else {
                        v82 = *v79;
                        v83 = v79[2];
                        *(_QWORD*)(v71 + 8) = v79[1];
                        *(_QWORD*)(v71 + 16) = v83;
                        *(_QWORD*)v71 = v82;
                      }
                      v79 += 3;
                      v71 += 24LL;
                    } while (v79 != v80);
                    v216_.v217 = (__int64*)v71;
                    LOBYTE(v71) = *(_BYTE*)v4;
                  }
                  if ((v71 & 1) != 0) {
                    fw_text_String_CopyTerminated_alt1(
                        &v219_.v219, *(_QWORD*)(v8 + 40), *(_QWORD*)(v8 + 32));
                  }
                  else {
                    v84 = (unsigned __int64)v4[1];
                    v219_.v219 = (__int64)*v4;
                    v219_.v220 = v84;
                    v219_.v221 = v4[2];
                  }
                  v86 = v2[1];
                  v85 = v2[2];
                  v219_.v222 = 1;
                  if (v86 < v85) {
                    v87 = v214_.v214;
                    v88 = v214_.v215;
                    *(_BYTE*)(v86 + 64) = 0;
                    *(_BYTE*)(v86 + 8) = v88;
                    *(_QWORD*)v86 = v87;
                    *(_BYTE*)(v86 + 16) = 0;
                    if (v219_.v222 == 1) {
                      *(_QWORD*)(v86 + 24) = 0;
                      *(_QWORD*)(v86 + 32) = 0;
                      *(_QWORD*)(v86 + 16) = 0;
                      v89 = v216_.v216;
                      v90 = v216_.v217;
                      v91 = (char*)v216_.v217 - (char*)v216_.v216;
                      if (v216_.v217 != v216_.v216) {
                        if (0xAAAAAAAAAAAAAAABLL * (v91 >> 3) >
                            0xAAAAAAAAAAAAAAALL) {
                          goto LABEL_352;
                        }
                        v92 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr,
                            (char*)v216_.v217 - (char*)v216_.v216, 16, 0);
                        *(_QWORD*)(v86 + 16) = v92;
                        *(_QWORD*)(v86 + 24) = v92;
                        *(_QWORD*)(v86 + 32) = (char*)v92 + v91;
                        do {
                          if ((*(_BYTE*)v89 & 1) != 0) {
                            fw_text_String_CopyTerminated_alt1(v92, v89[2],
                                                               v89[1]);
                          }
                          else {
                            v93 = *v89;
                            v94 = v89[2];
                            v92[1] = v89[1];
                            v92[2] = v94;
                            *v92 = v93;
                          }
                          v89 += 3;
                          v92 += 3;
                        } while (v89 != v90);
                        *(_QWORD*)(v86 + 24) = v92;
                      }
                      if ((v219_.v219 & 1) != 0) {
                        fw_text_String_CopyTerminated_alt1((__int64*)(v86 + 40),
                                                           (__int64)v219_.v221,
                                                           v219_.v220);
                      }
                      else {
                        v115 = v219_.v219;
                        v116 = (__int64)v219_.v221;
                        *(_QWORD*)(v86 + 48) = v219_.v220;
                        *(_QWORD*)(v86 + 56) = v116;
                        *(_QWORD*)(v86 + 40) = v115;
                      }
                      v2 = v208;
                      *(_BYTE*)(v86 + 64) = 1;
                    }
                    v117 = v219_.v223;
                    *(_BYTE*)(v86 + 80) = 0;
                    *(_BYTE*)(v86 + 112) = 0;
                    *(_DWORD*)(v86 + 72) = v117;
                    if (v219_.v228 == 1) {
                      *(_BYTE*)(v86 + 80) = v219_.v224;
                      if ((v219_.v225 & 1) != 0) {
                        fw_text_String_CopyTerminated_alt1(
                            (__int64*)(v86 + 88), v219_.v227, v219_.v226);
                      }
                      else {
                        v118 = v219_.v225;
                        v119 = v219_.v227;
                        *(_QWORD*)(v86 + 96) = v219_.v226;
                        *(_QWORD*)(v86 + 104) = v119;
                        *(_QWORD*)(v86 + 88) = v118;
                      }
                      *(_BYTE*)(v86 + 112) = 1;
                    }
                    *(_BYTE*)(v86 + 120) = 0;
                    v120 = (__int64*)(v86 + 120);
                    *(_BYTE*)(v86 + 144) = 0;
                    if (v219_.v232 == 1) {
                      if ((v219_.v229 & 1) != 0) {
                        fw_text_String_CopyTerminated_alt1(v120, v219_.v231,
                                                           v219_.v230);
                      }
                      else {
                        v121 = v219_.v229;
                        v122 = v219_.v231;
                        *(_QWORD*)(v86 + 128) = v219_.v230;
                        *(_QWORD*)(v86 + 136) = v122;
                        *v120 = v121;
                      }
                      *(_BYTE*)(v86 + 144) = 1;
                    }
                    v64 = v210;
                    v123 = v86 + 160;
                    *(_QWORD*)(v86 + 152) = v219_.v233;
                  LABEL_248:
                    v160 = v219_.v232;
                    v2[1] = v123;
                    if (v160 == 1 && (v219_.v229 & 1) != 0 && v219_.v231 != 0) {
                      v161 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v161 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v161,
                          v219_.v231);
                    }
                    v9 = (__int64)v211;
                    if (v219_.v228 == 1 && (v219_.v225 & 1) != 0 &&
                        v219_.v227 != 0) {
                      v162 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v162 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v162,
                          v219_.v227);
                    }
                    if (v219_.v222 == 1) {
                      if ((v219_.v219 & 1) != 0 && v219_.v221 != nullptr) {
                        v163 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v163 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v163,
                            (__int64)v219_.v221);
                      }
                      v68 = v216_.v216;
                      if (v216_.v216 != nullptr) {
                        v164 = v216_.v217;
                        if (v216_.v216 == v216_.v217) {
                          goto LABEL_115;
                        }
                        v165 = v216_.v217;
                        do {
                          v166 = *((_BYTE*)v165 - 24);
                          v165 -= 3;
                          if ((v166 & 1) != 0) {
                            v167 = *(v164 - 1);
                            if (v167 != 0) {
                              v168 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v168 = 56;
                              }
                              nn_mem_StandardAllocator_Free_alt2(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v168,
                                  v167);
                            }
                          }
                          v164 = v165;
                        } while (v165 != v68);
                        v9 = (__int64)v211;
                        v216_.v217 = v68;
                        v68 = v216_.v216;
                        if (v216_.v216 != nullptr) {
                        LABEL_115:
                          v69 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v69 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt2(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v69,
                              (__int64)v68);
                        }
                      }
                    }
                  LABEL_118:
                    v65 += 6;
                    if (v65 == v64) {
                      goto LABEL_108;
                    }
                    continue;
                  }
                  break;
                }
                v95 = v86 - *v2;
                v96 = 1 - 0x3333333333333333LL * (v95 >> 5);
                if (v96 > 0x199999999999999LL) {
                  GameRoutine_f7df90_alt1();
                }
                v97 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v85 - *v2) >> 5);
                if (2 * v97 > v96) {
                  v96 = 2 * v97;
                }
                if (v97 >= 0xCCCCCCCCCCCCCCLL) {
                  v98 = 0x199999999999999LL;
                }
                else {
                  v98 = v96;
                }
                if (v98 != 0) {
                  if (v98 > 0x199999999999999LL) {
                    GameRoutine_60a210_alt1();
                  }
                  v99 = 160 * v98;
                  v100 = fw_memory_HeapManager_Allocate_alt1(
                      fw_memory_g_heap_manager, 160 * v98, 16, 0);
                  v95 += v100;
                  v101 = v219_.v222;
                  v209 = v100 + v99;
                  v102 = v214_.v214;
                  *(_BYTE*)(v95 + 16) = 0;
                  v103 = (__int64**)(v95 + 16);
                  *(_BYTE*)(v95 + 64) = 0;
                  v104 = (_BYTE*)(v95 + 64);
                  *(_QWORD*)v95 = v102;
                  *(_BYTE*)(v95 + 8) = v214_.v215;
                  if (v101 != 1) {
                  LABEL_175:
                    v112 = v219_.v223;
                    *(_BYTE*)(v95 + 80) = 0;
                    *(_BYTE*)(v95 + 112) = 0;
                    *(_DWORD*)(v95 + 72) = v112;
                    if (v219_.v228 == 1) {
                      *(_BYTE*)(v95 + 80) = v219_.v224;
                      if ((v219_.v225 & 1) != 0) {
                        fw_text_String_CopyTerminated_alt1(
                            (__int64*)(v95 + 88), v219_.v227, v219_.v226);
                      }
                      else {
                        v113 = v219_.v225;
                        v114 = v219_.v227;
                        *(_QWORD*)(v95 + 96) = v219_.v226;
                        *(_QWORD*)(v95 + 104) = v114;
                        *(_QWORD*)(v95 + 88) = v113;
                      }
                      *(_BYTE*)(v95 + 112) = 1;
                    }
                    *(_BYTE*)(v95 + 120) = 0;
                    v124 = (__int64*)(v95 + 120);
                    *(_BYTE*)(v95 + 144) = 0;
                    if (v219_.v232 == 1) {
                      if ((v219_.v229 & 1) != 0) {
                        fw_text_String_CopyTerminated_alt1(v124, v219_.v231,
                                                           v219_.v230);
                      }
                      else {
                        v125 = v219_.v229;
                        v126 = v219_.v231;
                        *(_QWORD*)(v95 + 128) = v219_.v230;
                        *(_QWORD*)(v95 + 136) = v126;
                        *v124 = v125;
                      }
                      *(_BYTE*)(v95 + 144) = 1;
                    }
                    *(_QWORD*)(v95 + 152) = v219_.v233;
                    v127 = *v2;
                    v128 = v95 + *v2 - v86;
                    if (v86 != *v2) {
                      v129 = 0;
                      do {
                        v130 = v127 + v129;
                        v131 = v128 + v129;
                        v132 = *(_QWORD*)(v127 + v129);
                        v133 = *(_BYTE*)(v127 + v129 + 8);
                        *(_BYTE*)(v131 + 64) = 0;
                        *(_BYTE*)(v131 + 8) = v133;
                        *(_QWORD*)v131 = v132;
                        *(_BYTE*)(v128 + v129 + 16) = 0;
                        if (*(_BYTE*)(v127 + v129 + 64) == 1) {
                          *(_QWORD*)(v128 + v129 + 24) = 0;
                          *(_QWORD*)(v128 + v129 + 32) = 0;
                          *(_QWORD*)(v128 + v129 + 16) = 0;
                          *(_QWORD*)(v131 + 16) = *(_QWORD*)(v130 + 16);
                          *(_QWORD*)(v131 + 24) = *(_QWORD*)(v130 + 24);
                          *(_QWORD*)(v131 + 32) = *(_QWORD*)(v130 + 32);
                          *(_QWORD*)(v130 + 24) = 0;
                          *(_QWORD*)(v130 + 32) = 0;
                          *(_QWORD*)(v130 + 16) = 0;
                          v134 = *(_QWORD*)(v130 + 40);
                          v135 = *(_QWORD*)(v130 + 56);
                          *(_QWORD*)(v131 + 48) = *(_QWORD*)(v130 + 48);
                          *(_QWORD*)(v131 + 56) = v135;
                          *(_QWORD*)(v131 + 40) = v134;
                          *(_QWORD*)(v130 + 48) = 0;
                          *(_QWORD*)(v130 + 56) = 0;
                          *(_QWORD*)(v130 + 40) = 0;
                          *(_BYTE*)(v131 + 64) = 1;
                        }
                        v136 = *(_DWORD*)(v130 + 72);
                        *(_BYTE*)(v131 + 80) = 0;
                        *(_BYTE*)(v131 + 112) = 0;
                        *(_DWORD*)(v131 + 72) = v136;
                        if (*(_BYTE*)(v130 + 112) == 1) {
                          v137 = (_QWORD*)(v127 + v129);
                          *(_BYTE*)(v131 + 80) = *(_BYTE*)(v127 + v129 + 80);
                          v138 = (_QWORD*)(v128 + v129);
                          v139 = *(_QWORD*)(v127 + v129 + 88);
                          v140 = *(_QWORD*)(v127 + v129 + 104);
                          v138[12] = *(_QWORD*)(v127 + v129 + 96);
                          v138[13] = v140;
                          v138[11] = v139;
                          v137[12] = 0;
                          v137[13] = 0;
                          v137[11] = 0;
                          *(_BYTE*)(v131 + 112) = 1;
                        }
                        v141 = v128 + v129;
                        *(_BYTE*)(v128 + v129 + 120) = 0;
                        *(_BYTE*)(v128 + v129 + 144) = 0;
                        if (*(_BYTE*)(v130 + 144) == 1) {
                          v142 = (_QWORD*)(v127 + v129);
                          v143 = *(_QWORD*)(v127 + v129 + 120);
                          v144 = *(_QWORD*)(v127 + v129 + 136);
                          *(_QWORD*)(v128 + v129 + 128) =
                              *(_QWORD*)(v127 + v129 + 128);
                          *(_QWORD*)(v128 + v129 + 136) = v144;
                          *(_QWORD*)(v128 + v129 + 120) = v143;
                          v142[16] = 0;
                          v142[17] = 0;
                          v142[15] = 0;
                          *(_BYTE*)(v141 + 144) = 1;
                        }
                        v129 += 160;
                        *(_QWORD*)(v141 + 152) = *(_QWORD*)(v130 + 152);
                      } while (v130 + 160 != v86);
                      do {
                        if (*(_BYTE*)(v127 + 144) == 1 &&
                            (*(_BYTE*)(v127 + 120) & 1) != 0) {
                          v148 = *(_QWORD*)(v127 + 136);
                          if (v148 != 0) {
                            v149 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v149 = 56;
                            }
                            nn_mem_StandardAllocator_Free_alt2(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v149,
                                v148);
                          }
                        }
                        if (*(_BYTE*)(v127 + 112) == 1 &&
                            (*(_BYTE*)(v127 + 88) & 1) != 0) {
                          v150 = *(_QWORD*)(v127 + 104);
                          if (v150 != 0) {
                            v151 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v151 = 56;
                            }
                            nn_mem_StandardAllocator_Free_alt2(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v151,
                                v150);
                          }
                        }
                        if (*(_BYTE*)(v127 + 64) == 1) {
                          if ((*(_BYTE*)(v127 + 40) & 1) != 0) {
                            v152 = *(_QWORD*)(v127 + 56);
                            if (v152 != 0) {
                              v153 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v153 = 56;
                              }
                              nn_mem_StandardAllocator_Free_alt2(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v153,
                                  v152);
                            }
                          }
                          v146 = *(_QWORD*)(v127 + 16);
                          if (v146 != 0) {
                            v154 = *(_QWORD*)(v127 + 24);
                            if (v146 == v154) {
                              goto LABEL_211;
                            }
                            v155 = *(_QWORD*)(v127 + 24);
                            do {
                              v156 = *(_BYTE*)(v155 - 24);
                              v155 -= 24;
                              if ((v156 & 1) != 0) {
                                v157 = *(_QWORD*)(v154 - 8);
                                if (v157 != 0) {
                                  v158 = 128;
                                  if (*(_QWORD*)(*(_QWORD*)
                                                     fw_memory_g_heap_manager_ptr +
                                                 200LL) == 0) {
                                    v158 = 56;
                                  }
                                  nn_mem_StandardAllocator_Free_alt2(
                                      *(_QWORD*)fw_memory_g_heap_manager_ptr +
                                          v158,
                                      v157);
                                }
                              }
                              v154 = v155;
                            } while (v155 != v146);
                            v145 = *(_QWORD*)(v127 + 16);
                            *(_QWORD*)(v127 + 24) = v146;
                            v146 = v145;
                            if (v145 != 0) {
                            LABEL_211:
                              v147 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v147 = 56;
                              }
                              nn_mem_StandardAllocator_Free_alt2(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v147,
                                  v146);
                            }
                          }
                        }
                        v127 += 160;
                      } while (v127 != v86);
                      v127 = *v2;
                    }
                    v64 = v210;
                    v123 = v95 + 160;
                    *v2 = v128;
                    v2[2] = v209;
                    if (v127 != 0) {
                      v159 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v159 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v159, v127);
                    }
                    v4 = v207;
                    goto LABEL_248;
                  }
                }
                else {
                  *(_BYTE*)(v95 + 16) = 0;
                  v103 = (__int64**)(v95 + 16);
                  *(_BYTE*)(v95 + 64) = 0;
                  v104 = (_BYTE*)(v95 + 64);
                  v209 = 0;
                  *(_QWORD*)v95 = v214_.v214;
                  *(_BYTE*)(v95 + 8) = v214_.v215;
                }
                v105 = v216_.v216;
                v106 = v216_.v217;
                v103[1] = nullptr;
                v103[2] = nullptr;
                v107 = (char*)v106 - (char*)v105;
                *v103 = nullptr;
                if (v106 != v105) {
                  if (0xAAAAAAAAAAAAAAABLL * (v107 >> 3) >
                      0xAAAAAAAAAAAAAAALL) {
                  LABEL_352:
                    GameRoutine_64aa00_alt1();
                  }
                  v108 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr,
                      (char*)v106 - (char*)v105, 16, 0);
                  *v103 = v108;
                  *(_QWORD*)(v95 + 24) = v108;
                  *(_QWORD*)(v95 + 32) = (char*)v108 + v107;
                  do {
                    if ((*(_BYTE*)v105 & 1) != 0) {
                      fw_text_String_CopyTerminated_alt1(v108, v105[2],
                                                         v105[1]);
                    }
                    else {
                      v109 = *v105;
                      v110 = v105[2];
                      v108[1] = v105[1];
                      v108[2] = v110;
                      *v108 = v109;
                    }
                    v105 += 3;
                    v108 += 3;
                  } while (v105 != v106);
                  *(_QWORD*)(v95 + 24) = v108;
                }
                if ((v219_.v219 & 1) != 0) {
                  fw_text_String_CopyTerminated_alt1(
                      (__int64*)(v95 + 40), (__int64)v219_.v221, v219_.v220);
                }
                else {
                  v111 = v219_.v220;
                  *(_QWORD*)(v95 + 40) = v219_.v219;
                  *(_QWORD*)(v95 + 48) = v111;
                  *(_QWORD*)(v95 + 56) = v219_.v221;
                }
                v8 = (__int64)a1;
                v2 = v208;
                *v104 = 1;
                goto LABEL_175;
              }
            LABEL_97:
              v56 = *(unsigned __int8*)(v8 + 24);
              v57 = (v56 & 1) == 0;
              v58 = v56 >> 1;
              if (v57) {
                v59 = v9;
              }
              else {
                v59 = *(_QWORD*)(v8 + 40);
              }
              if (v57) {
                v60 = v58;
              }
              else {
                v60 = *(_QWORD*)(v8 + 32);
              }
              EventManager_cbbf20_alt1((void*)(&v212_.v212), GameData_21f3c98,
                                       v59, v60);
              v7 = v201;
              v6 = v202;
              if (v212_.v212 != 0) {
                v61 = *(__int64**)(v212_.v212 + 176);
                LOBYTE(v214_.v215) = 0;
                LOBYTE(v216_.v216) = 0;
                v219_.v222 = 0;
                v219_.v223 = 0;
                v219_.v224 = 0;
                v219_.v228 = 0;
                LOBYTE(v219_.v229) = 0;
                v219_.v232 = 0;
                v219_.v233 = 0;
                v214_.v214 = v61;
                GameRoutine_f7bb20_alt1((__int64)&v216_.v216, v8);
                v62 = v2[1];
                if (v62 >= v2[2]) {
                  v63 = GameHr_f7dc20(v2, (__int64*)&v214_.v214);
                }
                else {
                  v63 =
                      GameRoutine_f7de90_alt1(v62, (__int64*)&v214_.v214) + 160;
                }
                v169 = v219_.v232;
                v2[1] = v63;
                if (v169 == 1 && (v219_.v229 & 1) != 0 && v219_.v231 != 0) {
                  v170 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v170 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v170,
                      v219_.v231);
                }
                if (v219_.v228 == 1 && (v219_.v225 & 1) != 0 &&
                    v219_.v227 != 0) {
                  v171 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v171 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v171,
                      v219_.v227);
                }
                if (v219_.v222 == 1) {
                  if ((v219_.v219 & 1) != 0 && v219_.v221 != nullptr) {
                    v172 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v172 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v172,
                        (__int64)v219_.v221);
                  }
                  v173 = v216_.v216;
                  if (v216_.v216 != nullptr) {
                    v174 = v216_.v217;
                    if (v216_.v216 == v216_.v217) {
                      goto LABEL_304;
                    }
                    v175 = v216_.v217;
                    do {
                      v176 = *((_BYTE*)v175 - 24);
                      v175 -= 3;
                      if ((v176 & 1) != 0) {
                        v177 = *(v174 - 1);
                        if (v177 != 0) {
                          v178 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v178 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt2(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v178,
                              v177);
                        }
                      }
                      v174 = v175;
                    } while (v175 != v173);
                    v9 = (__int64)v211;
                    v216_.v217 = v173;
                    v173 = v216_.v216;
                    if (v216_.v216 != nullptr) {
                    LABEL_304:
                      v179 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v179 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v179,
                          (__int64)v173);
                    }
                  }
                }
              }
              v180 = v212_.v213;
              if (v212_.v213 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v212_.v213 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v180 + 16LL))(v180);
                std___1___shared_weak_count___release_weak_alt2(v180);
              }
              v181 = *(unsigned __int8*)(v8 + 24);
              v182 = (v181 & 1) == 0;
              v183 = v181 >> 1;
              if (v182) {
                v184 = v9;
              }
              else {
                v184 = *(_QWORD*)(v8 + 40);
              }
              if (v182) {
                v185 = v183;
              }
              else {
                v185 = *(_QWORD*)(v8 + 32);
              }
              v186 = GameHr_dfffe0((_QWORD*)GameData_220f950, v184, v185);
              if (v186 != 0) {
                v219_.v223 = 0;
                v219_.v224 = 0;
                v219_.v228 = 0;
                LOBYTE(v219_.v229) = 0;
                v219_.v232 = 0;
                v219_.v233 = 0;
                v187 = *(__int64**)(v186 + 72);
                LOBYTE(v214_.v215) = 0;
                LOBYTE(v216_.v216) = 0;
                v219_.v222 = 0;
                v214_.v214 = v187;
                GameRoutine_f7bb20_alt1((__int64)&v216_.v216, v8);
                v188 = v2[1];
                if (v188 >= v2[2]) {
                  v189 = GameHr_f7dc20(v2, (__int64*)&v214_.v214);
                }
                else {
                  v189 = GameRoutine_f7de90_alt1(v188, (__int64*)&v214_.v214) +
                         160;
                }
                v190 = v219_.v232;
                v2[1] = v189;
                if (v190 == 1 && (v219_.v229 & 1) != 0 && v219_.v231 != 0) {
                  v191 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v191 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v191,
                      v219_.v231);
                }
                if (v219_.v228 == 1 && (v219_.v225 & 1) != 0 &&
                    v219_.v227 != 0) {
                  v192 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v192 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v192,
                      v219_.v227);
                }
                if (v219_.v222 == 1) {
                  if ((v219_.v219 & 1) != 0 && v219_.v221 != nullptr) {
                    v193 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v193 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v193,
                        (__int64)v219_.v221);
                  }
                  v194 = v216_.v216;
                  if (v216_.v216 != nullptr) {
                    v195 = v216_.v217;
                    if (v216_.v216 == v216_.v217) {
                      goto LABEL_348;
                    }
                    v196 = v216_.v217;
                    do {
                      v197 = *((_BYTE*)v196 - 24);
                      v196 -= 3;
                      if ((v197 & 1) != 0) {
                        v198 = *(v195 - 1);
                        if (v198 != 0) {
                          v199 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v199 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt2(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v199,
                              v198);
                        }
                      }
                      v195 = v196;
                    } while (v196 != v194);
                    v9 = (__int64)v211;
                    v216_.v217 = v194;
                    v194 = v216_.v216;
                    if (v216_.v216 != nullptr) {
                    LABEL_348:
                      v200 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v200 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v200,
                          (__int64)v194);
                    }
                  }
                }
              }
            }
          }
          v10 = v234_.v234;
          if (v234_.v234 != 0) {
            if (v234_.v234 == v234_.v235) {
              goto LABEL_8;
            }
            v30 = v234_.v235 - 616;
            do {
              HubNatives_ccbf80_alt2(v30 + 24);
              if ((*(_BYTE*)v30 & 1) != 0) {
                v31 = *(_QWORD*)(v30 + 16);
                if (v31 != 0) {
                  v32 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v32 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v31);
                }
              }
              v18 = v30 == v10;
              v30 -= 616;
            } while (!v18);
            v9 = (__int64)v211;
            v234_.v235 = v10;
            v10 = v234_.v234;
            if (v234_.v234 != 0) {
            LABEL_8:
              v11 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v11 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
            }
          }
        }
        v6 += 24;
      } while (v6 != v7);
    }
  }
}

__attribute__((swiftcall)) void game_hub_f7be00(PSEUDO_X8 x8_, __int64* a1,
                                                __int64* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  _QWORD* i;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  bool v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  _QWORD* v32;
  _QWORD* v33;
  _QWORD* v34;
  _QWORD* v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int8* v41;
  struct {
    __int64 v42;
    __int64 v43;
    __int64 v44;
  } v42_;
  struct {
    __int64 v45[2];
    __int64 v46;
  } v45_;

  LocatorDispos_db1e20_alt1((void*)(v45_.v45), a1);
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  v6 = *a2;
  for (i = *(_QWORD**)(*(_QWORD*)GameData_212ec00 + 8LL);
       i != *(_QWORD**)(*(_QWORD*)GameData_212ec00 + 16LL); i += 2) {
    v8 = (_QWORD*)*i;
    if ((*(_BYTE*)(*i + 16LL) & 1) == 0 && v8[10] == v6) {
      v9 = i[1];
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
      }
      if ((v8[47] & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(&v42_.v42, v8[49], v8[48]);
      }
      else {
        v10 = v8[48];
        v42_.v42 = v8[47];
        v42_.v43 = v10;
        v42_.v44 = v8[49];
      }
      GameHr_f7c840(a3, a1, &v42_.v42, v8[10], a2);
      if ((v42_.v42 & 1) != 0 && v42_.v44 != 0) {
        v11 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v42_.v44);
      }
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_alt2(v9);
      }
      break;
    }
  }
  v12 = *(_QWORD*)(GameData_220b6d0 + 8);
  v13 = *(unsigned __int8**)(v12 + 24);
  v41 = (unsigned __int8*)(v12 + 32);
  if (v13 != (unsigned __int8*)(v12 + 32)) {
    v14 = fw_memory_g_heap_manager_ptr;
    do {
      v16 = *((_QWORD*)v13 + 7);
      v15 = *((_QWORD*)v13 + 8);
      while (v16 != v15) {
        if (*(_QWORD*)(*(_QWORD*)v16 + 56LL) == v6) {
          LocatorDispos_db2180_alt1((void*)(&v42_.v42),
                                    (unsigned __int8*)v45_.v45, v13 + 32);
          GameHr_f7c840(a3, a1, &v42_.v42, *(_QWORD*)(*(_QWORD*)v16 + 56LL),
                        a2);
          if ((v42_.v42 & 1) != 0 && v42_.v44 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
              v17 = 128;
            }
            else {
              v17 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v14 + v17, v42_.v44);
          }
        }
        v16 += 48;
      }
      v18 = *((unsigned __int8**)v13 + 1);
      if (v18 != nullptr) {
        do {
          v19 = v18;
          v18 = *(unsigned __int8**)v18;
        } while (v18 != nullptr);
      }
      else {
        do {
          v19 = *((unsigned __int8**)v13 + 2);
          v20 = v13 == *(unsigned __int8**)v19;
          v13 = v19;
        } while (!v20);
      }
      v13 = v19;
    } while (v19 != v41);
  }
  v21 = *(_QWORD**)(GameData_21f3c98 + 152);
  if (v21 != (_QWORD*)(GameData_21f3c98 + 160)) {
    while (1) {
      v22 = (_QWORD*)v21[7];
      v23 = (_QWORD*)v21[8];
      if (v22 != v23) {
        while (*(_QWORD*)(*v22 + 176LL) != v6) {
          v22 += 2;
          if (v22 == v23) {
            goto LABEL_46;
          }
        }
      }
      if (v22 != v23) {
        break;
      }
    LABEL_46:
      v22 = (_QWORD*)v21[10];
      v24 = (_QWORD*)v21[11];
      if (v22 != v24) {
        while (*(_QWORD*)(*v22 + 176LL) != v6) {
          v22 += 2;
          if (v22 == v24) {
            goto LABEL_51;
          }
        }
      }
      if (v22 != v24) {
        break;
      }
    LABEL_51:
      v25 = (_QWORD*)v21[1];
      if (v25 != nullptr) {
        do {
          v26 = v25;
          v25 = (_QWORD*)*v25;
        } while (v25 != nullptr);
      }
      else {
        do {
          v26 = (_QWORD*)v21[2];
          v20 = v21 == (_QWORD*)*v26;
          v21 = v26;
        } while (!v20);
      }
      v21 = v26;
      if (v26 == (_QWORD*)(GameData_21f3c98 + 160)) {
        goto LABEL_68;
      }
    }
    v28 = *v22;
    v27 = v22[1];
    if (v27 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v28 != 0) {
      LocatorDispos_db2180_alt1((void*)(&v42_.v42), (unsigned __int8*)v45_.v45,
                                (unsigned __int8*)(v28 + 1216));
      GameHr_f7c840(a3, a1, &v42_.v42, *(_QWORD*)(v28 + 176), a2);
      if ((v42_.v42 & 1) != 0 && v42_.v44 != 0) {
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v42_.v44);
      }
    }
    if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
      std___1___shared_weak_count___release_weak_alt2(v27);
    }
  }
LABEL_68:
  v30 = *(_QWORD**)(GameData_220f950 + 40);
  v31 = *(_QWORD**)(GameData_220f950 + 48);
  if (v30 == v31) {
  LABEL_71:
    v35 = *(_QWORD**)(GameData_220f950 + 64);
    v34 = *(_QWORD**)(GameData_220f950 + 72);
    if (v35 == v34) {
      goto LABEL_83;
    }
    while (1) {
      v36 = (_QWORD*)*v35;
      v35 += 2;
      v32 = v36;
      if (v36[9] == v6) {
        break;
      }
      if (v35 == v34) {
        goto LABEL_83;
      }
    }
  }
  else {
    while (1) {
      v33 = (_QWORD*)*v30;
      v30 += 2;
      v32 = v33;
      if (v33[9] == v6) {
        break;
      }
      if (v30 == v31) {
        goto LABEL_71;
      }
    }
  }
  if ((v32[82] & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v42_.v42, v32[84], v32[83]);
    v6 = v32[9];
  }
  else {
    v37 = v32[83];
    v38 = v32[84];
    v42_.v42 = v32[82];
    v42_.v43 = v37;
    v42_.v44 = v38;
  }
  GameHr_f7c840(a3, a1, &v42_.v42, v6, a2);
  if ((v42_.v42 & 1) != 0 && v42_.v44 != 0) {
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v42_.v44);
  }
LABEL_83:
  if ((v45_.v45[0] & 1) != 0 && v45_.v46 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v45_.v46);
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
        v13 = (signed __int32)*(_DWORD*)(v9 + 32) >= 1;
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
      __cxa_guard_acquire_alt1((__int64)&GameData_2227df8) != 0) {
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
    GameData_2227048 = (__int64)game_80a680_ptr[0];
    GameData_22270c0 = 0;
    GameData_22270c8 = (__int64)GameHr_f8c4f0;
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
    GameData_2227208 = (__int64)game_80a680_ptr[0];
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
    GameData_2227548 = (__int64)GameHr_f8cd60;
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
    GameData_2227a88 = (__int64)GameHr_f8bb50;
    GameData_2227a90 = 0;
    GameData_2227a98 = 0;
    GameData_2227aa0 = 0;
    GameData_2227aa8 = 0;
    GameData_2227ab0 = 0;
    GameData_2227ab8 = 19;
    GameData_2227ac0 = 0;
    GameData_2227ac8 = (__int64)game_80a760_ptr[0];
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
    GameData_2227bc8 = (__int64)game_80a680_ptr[0];
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
    __cxa_guard_release_alt1((__int64)&GameData_2227df8);
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
  return ProcInst_657850_alt1(v6, (__int64)&GameData_2226fb8,
                              "ProcHubSeqObeliskDoor", 1, a1);
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

void game_hub_f8b300(__n128 result)
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
        return;
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
      std___1___shared_weak_count___release_weak(v4);
      return;
    }
  }
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

__int64 game_hub_f960c0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  const char* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
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
  unsigned __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  unsigned __int8* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64* v40;
  __int64 result;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  unsigned int* v60;
  __int128 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  bool v64;
  unsigned __int64 v65;
  __int64 v66;
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
  __int64 v81;
  __int64* v82;
  __int64 v83;
  __int64 v84[3];
  struct {
    __int64 v85;
    unsigned __int64 v86;
    __int64 v87;
    char gap88_[8];
    __int128 v88;
    int v89;
  } v85_;
  struct {
    __int64 v90;
    unsigned __int64 v91;
    __int64 v92;
    __int64 v93;
  } v90_;

  v2 = *(_QWORD*)(a1 + 32);
  v3 = *(_QWORD*)(a1 + 40);
  v4 = (__int64*)(a1 + 32);
  v6 = a1;
  if (v2 != v3) {
    v7 = *a2;
    while (1) {
      if (v7 != 0) {
        v8 = *(const char**)(v7 + 8);
        v9 = strlen_alt1(v8);
        v10 = *(_BYTE*)v2 >> 1;
        if ((*(_BYTE*)v2 & 1) != 0) {
          v10 = *(_QWORD*)(v2 + 8);
        }
        if (v9 == v10) {
          v11 = v9;
          if (v9 == -1) {
            fs_60a230();
          }
          v12 = (*(_BYTE*)v2 & 1) != 0 ? *(_QWORD*)(v2 + 16) : v2 + 1;
          if (memcmp_alt1(v12, (__int64)v8, v11) == 0) {
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
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v15 = v14 & 0xFFFFFFFC | (v14 >> 30);
  v16 = 1812433253 * v15;
  v17 = 1812433253 * ((1812433253 * (v16 ^ (v16 >> 30)) + 1) ^
                      ((1812433253 * (v16 ^ (v16 >> 30)) + 1) >> 30)) +
        2;
  v18 = 1812433253 * (v17 ^ (v17 >> 30)) + 3;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v19 = (((1011558400 * v15) ^ v16) >> 8) ^ (v18 >> 19) ^ (1011558400 * v15) ^
        v16 ^ v18;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
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
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  }
  v24 = (unsigned __int8*)a2[4];
  v83 = a2[5];
  if (v24 == (unsigned __int8*)v83) {
    return 0;
  }
  v26 = *(unsigned __int8**)(v6 + 8);
  v25 = *(unsigned __int8**)(v6 + 16);
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
        v34 = (v32 & 1) != 0 ? *((_QWORD*)v30 + 5) : (__int64)(v30 + 25);
        v35 = (v29 & 1) != 0 ? *((_QWORD*)v24 + 2) : (__int64)(v24 + 1);
        if (memcmp_alt1(v34, v35, v31) == 0) {
          v36 = *v30;
          v37 = *((_QWORD*)v30 + 1);
          if ((v36 & 1) == 0) {
            v37 = v36 >> 1;
          }
          if (v37 == v27) {
            v38 = (v36 & 1) != 0 ? *((_QWORD*)v30 + 2) : (__int64)(v30 + 1);
            if (memcmp_alt1(v38, (__int64)v28, v27) == 0) {
              v40 = *((__int64**)v30 + 6);
              v39 = *((__int64**)v30 + 7);
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
        if (v24 == (unsigned __int8*)v83) {
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
          v45 = (v43 & 1) != 0 ? *((_QWORD*)v30 + 5) : (__int64)(v30 + 25);
          if (memcmp_alt1(v45, *((_QWORD*)v24 + 2), v42) == 0) {
            v40 = *((__int64**)v30 + 6);
            v39 = *((__int64**)v30 + 7);
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
          if (v24 == (unsigned __int8*)v83) {
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
          v48 = (v46 & 1) != 0 ? *((_QWORD*)v30 + 5) : (__int64)(v30 + 25);
          if (memcmp_alt1(v48, (__int64)(v24 + 1), v42) == 0) {
            v40 = *((__int64**)v30 + 6);
            v39 = *((__int64**)v30 + 7);
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
  v49 = (char*)v39 - (char*)v40;
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
          v40 += 16;
          v56 -= 8LL;
        } while (v56 != 0);
      }
      for (; v55 != 0; --v55) {
        v40 += 2;
      }
    }
  }
  v57 = *v40;
  v85_.v85 = 0;
  v85_.v86 = 0;
  v85_.v87 = 0;
  v85_.v88 = (__typeof__(v85_.v88)){0};
  v85_.v89 = 0;
  v58 = *v82;
  v90_.v90 = 0;
  v90_.v91 = 0;
  v90_.v92 = 0;
  v90_.v93 = 0;
  v59 = (__int64*)(v57 + 616);
  GameRoutine_60a020_alt1((__int64)&v85_.v85, *(const char**)(v58 + 8));
  v60 = (unsigned int*)(*v40 + 168);
  *(_QWORD*)&v85_.v88 = *(_QWORD*)(*v40 + 160);
  *(_QWORD*)&v61 = v85_.v88;
  *((_QWORD*)&v61 + 1) = *v60;
  v85_.v88 = v61;
  v85_.v89 = *(_DWORD*)(*v40 + 172);
  if (&v90_.v90 != (__int64*)(v57 + 616)) {
    v62 = *(unsigned __int8*)v59;
    if ((v90_.v90 & 1) != 0) {
      v64 = (v62 & 1) == 0;
      v65 = v62 >> 1;
      if (v64) {
        v66 = v57 + 617;
      }
      else {
        v66 = *(_QWORD*)(v57 + 632);
      }
      if (v64) {
        v67 = v65;
      }
      else {
        v67 = *(_QWORD*)(v57 + 624);
      }
      SpineModel_64dde0_alt1(&v90_.v90, v66, v67);
    }
    else if ((v62 & 1) != 0) {
      GameRoutine_64df20_alt1(&v90_.v90, *(_QWORD*)(v57 + 632),
                              *(_QWORD*)(v57 + 624));
    }
    else {
      v63 = *(_QWORD*)(v57 + 624);
      v90_.v90 = *v59;
      v90_.v91 = v63;
      v90_.v92 = *(_QWORD*)(v57 + 632);
    }
  }
  v90_.v93 = *(_QWORD*)(*v40 + 80);
  v68 = *(_QWORD*)(v6 + 40);
  if (v68 >= *(_QWORD*)(v6 + 48)) {
    v70 = CharacterSituation_f994e0_alt1(v4, (__int64)&v85_.v85);
  }
  else {
    if ((v85_.v85 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(*(__int64**)(v6 + 40), v85_.v87,
                                         v85_.v86);
    }
    else {
      *(_QWORD*)(v68 + 8) = v85_.v86;
      v69 = v85_.v85;
      *(_QWORD*)(v68 + 16) = v85_.v87;
      *(_QWORD*)v68 = v69;
    }
    *(_OWORD*)(v68 + 32) = v85_.v88;
    *(_DWORD*)(v68 + 48) = v85_.v89;
    if ((v90_.v90 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1((__int64*)(v68 + 56), v90_.v92,
                                         v90_.v91);
    }
    else {
      v71 = v90_.v90;
      v72 = v90_.v92;
      *(_QWORD*)(v68 + 64) = v90_.v91;
      *(_QWORD*)(v68 + 72) = v72;
      *(_QWORD*)(v68 + 56) = v71;
    }
    v70 = v68 + 96;
    *(_QWORD*)(v68 + 80) = v90_.v93;
  }
  *(_QWORD*)(v6 + 40) = v70;
  game_hub_f96800((void*)(v84), v6, (char**)v30 + 6);
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
        std___1___shared_weak_count___release_weak_alt2(v75);
      }
      v74 -= 16;
    } while (v74 != v73);
    v76 = *((_QWORD*)v30 + 6);
    *((_QWORD*)v30 + 7) = v73;
    v73 = v76;
    if (v76 != 0) {
    LABEL_118:
      v77 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v77 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v73);
    }
  }
  qmemcpy(v30 + 48, v84, 24);
  if ((v90_.v90 & 1) != 0 && v90_.v92 != 0) {
    v78 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, v90_.v92);
  }
  if ((v85_.v85 & 1) != 0 && v85_.v87 != 0) {
    v79 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v79 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, v85_.v87);
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

__int64 game_hub_f96ec0(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                        bool* a5)
{
  unsigned __int64 v5;
  bool v11;
  __int64 result;
  const char* v13;
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
  __int64 v55;
  unsigned int v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  unsigned int v64;
  int v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64 j;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64** v73;
  __int64* v74;
  __int64* v75;
  int v76;
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
  __int64* v97;
  struct {
    __int64 v98[2];
    __int64 v99;
  } v98_;
  struct {
    __int128 v100;
    _DWORD* v101;
    char gap120_[8];
    __int64 v102;
  } v100_;
  struct {
    __int128 v103;
    _DWORD* v104;
  } v103_;

  v11 = GameRoutine_f97e30(a1, a2, false);
  result = 0;
  if (!v11) {
    return result;
  }
  v97 = a4;
  *(_QWORD*)&v100_.v100 = 0;
  *((_QWORD*)&v100_.v100 + 1) = a2;
  v13 = (const char*)*GameSituation_906a40(game_GameModeData_instance_ + 136,
                                           (__int64*)&v100_.v100);
  LOWORD(v103_.v103) = 0;
  if (v13 == nullptr) {
    v14 = 0;
    goto LABEL_21;
  }
  v14 = *v13;
  if (*v13 == 0) {
    goto LABEL_21;
  }
  v15 = strlen_alt1(v13);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
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
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0);
    *((_QWORD*)&v100_.v100 + 1) = v16;
    v100_.v101 = v17;
    *(_QWORD*)&v100_.v100 = v18 | 1;
    goto LABEL_14;
  }
  LOBYTE(v100_.v100) = 2 * v15;
  v17 = (char*)&v100_.v100 + 1;
  if (v15 != 0) {
  LABEL_14:
    memmove_alt1((__int64)v17, (__int64)v13, v16);
  }
  v19 = v103_.v103;
  v17[v16] = 0;
  if ((v19 & 1) != 0 && v103_.v104 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, (__int64)v103_.v104);
  }
  v5 = *((_QWORD*)&v100_.v100 + 1);
  v103_.v104 = v100_.v101;
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
  game_112eec0((void*)(&v100_.v100), a2, v26, v29);
  if ((v100_.v100 & 1) != 0) {
    v30 = *((_QWORD*)&v100_.v100 + 1);
  }
  else {
    v30 = (unsigned __int64)(unsigned __int8)v100_.v100 >> 1;
  }
  if ((v100_.v100 & 1) != 0 && v100_.v101 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, (__int64)v100_.v101);
  }
  if (v30 == 0) {
  LABEL_97:
    result = 0;
    if (v22 == 0) {
      return result;
    }
  LABEL_98:
    v55 = (__int64)v103_.v104;
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
      while (*(_QWORD*)v33 != a2) {
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
        if (*((_QWORD*)v33 - 2) == a2) {
          v33 -= 16;
          goto LABEL_68;
        }
        if (*((_QWORD*)v33 - 1) == a2) {
          v33 -= 8;
          goto LABEL_68;
        }
        if (*(_QWORD*)v33 == a2) {
          goto LABEL_68;
        }
        if (*((_QWORD*)v33 + 1) == a2) {
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
                             (__int64*)&v100_.v100);
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
    if (a2 != 0 &&
        (v53 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)(*(_QWORD*)(a2 + 24) + 1072LL))) != 0 &&
        *(_DWORD*)(v53 + 32) != 0 && game_GameModeData_instance_ != 0 &&
        (v54 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)(*(_QWORD*)(a2 + 24) + 1192LL))) != 0) {
      if (v93 != 3 && *(_DWORD*)(v54 + 32) == 0) {
        goto LABEL_97;
      }
    }
    else if (v93 != 3) {
      goto LABEL_97;
    }
    v58 = *(_QWORD*)(a2 + 336);
    if (v58 == 0) {
      goto LABEL_156;
    }
    v59 = GameRoutine_db0f70(v58);
    if (v59 == 0) {
      goto LABEL_156;
    }
    game_db1110((void*)((__int64*)&v100_.v100), v59);
    GameRoutine_1a0a7c0((void*)(v98_.v98), &GameData_1ab0f35, &v100_.v100);
    GameRoutine_7a8220_alt1(v97, v98_.v98);
    if ((v98_.v98[0] & 1) != 0 && v98_.v99 != 0) {
      v60 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v60 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, v98_.v99);
    }
    Manager_6326c0_alt1(v98_.v98, (const char*)&GameData_1ab0f35);
    GameRoutine_7a8220_alt1(v97, v98_.v98);
    if ((v98_.v98[0] & 1) != 0 && v98_.v99 != 0) {
      v61 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v61 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, v98_.v99);
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
  v40 = *(_QWORD*)(a2 + 336);
  v41 = v37;
  v95 = a5;
  v91 = v37 == 3;
  if (v40 == 0) {
    a3 = v92;
    v62 = 0;
    v63 = 1;
    goto LABEL_148;
  }
  v87 = v5;
  v89 = v22;
  for (i = *(_QWORD*)(a2 + 336);; i = v43) {
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
            v37 = GameVariable_828f50_alt1(game_GameModeData_instance_ + 40,
                                           (unsigned __int64*)v50);
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
    v62 = 0;
    v63 = 1;
    v5 = v87;
    goto LABEL_147;
  }
LABEL_121:
  v64 = *(unsigned __int8*)(v40 + 40);
  v63 = 1;
  v62 = 0;
  if (v64 <= 4) {
    if (*(unsigned __int8*)(v40 + 40) > 2u) {
      a3 = v92;
      v22 = v89;
      v38 = v91;
      v5 = v87;
      if (v64 == 3) {
        v63 = 0;
        v62 = 3;
        goto LABEL_147;
      }
      v21 = v64 == 4;
      v41 = v93;
      if (v21) {
        v63 = 0;
        v62 = 8;
      }
    }
    else {
      a3 = v92;
      v22 = v89;
      v38 = v91;
      v5 = v87;
      if (v64 == 1) {
        v63 = 0;
        v62 = 1;
        goto LABEL_147;
      }
      v21 = v64 == 2;
      v41 = v93;
      if (v21) {
        v63 = 0;
        v62 = 2;
      }
    }
  }
  else {
    if (*(unsigned __int8*)(v40 + 40) > 6u) {
      a3 = v92;
      v22 = v89;
      v38 = v91;
      v5 = v87;
      if (v64 == 7) {
        v63 = 0;
        v62 = 4;
      }
      else {
        if (v64 != 8) {
          v21 = v64 == 9;
          v41 = v93;
          if (v21) {
            v63 = 0;
            v62 = 9;
          }
          goto LABEL_148;
        }
        v62 = 7;
        v63 = 0;
      }
    LABEL_147:
      v41 = v93;
      goto LABEL_148;
    }
    a3 = v92;
    v22 = v89;
    v38 = v91;
    v5 = v87;
    if (v64 == 5) {
      v63 = 0;
      v62 = 5;
      goto LABEL_147;
    }
    v21 = v64 == 6;
    v41 = v93;
    if (v21) {
      v63 = 0;
      v62 = 6;
    }
  }
LABEL_148:
  if (v41 == 3) {
    if ((unsigned int)(v62 - 1) > 8) {
      v65 = 0;
    }
    else {
      v65 = (unsigned __int8)GameData_1b9df78[v62 - 1];
    }
    v66 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v66 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
    if (v65 != v66) {
      goto LABEL_156;
    }
  }
  if (v63 != 0) {
  LABEL_156:
    Manager_6326c0_alt1((__int64*)&v100_.v100, (const char*)&GameData_1ab0f35);
  LABEL_157:
    GameRoutine_7a8220_alt1(v97, &v100_.v100);
    if ((v100_.v100 & 1) != 0) {
    LABEL_158:
      if (v100_.v101 != nullptr) {
        v67 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v67 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, (__int64)v100_.v101);
      }
    }
  }
  else {
    v68 = *(_QWORD*)(a2 + 336);
    v94 = v62;
    if (v68 != 0) {
      v88 = v5;
      v90 = v22;
      for (j = *(_QWORD*)(a2 + 336);; j = v70) {
        v72 = *(_QWORD*)(j + 80);
        v71 = (__int64*)(j + 80);
        v70 = v72;
        if (v72 == 0) {
          break;
        }
        v73 = *(__int64***)(v68 + 24);
        v74 = *v73;
        v75 = v73[1];
        if (v75 != *v73) {
          v76 = 0;
          do {
            v78 = *v74;
            v77 = v74[1];
            if (v77 == *v74) {
            LABEL_168:
              ++v76;
            }
            else {
              while (1) {
                if (*(_QWORD*)v78 != 0) {
                  v79 = game_GameModeData_instance_;
                  if (game_GameModeData_instance_ != 0) {
                    v37 = GameVariable_828f50_alt1(game_GameModeData_instance_ +
                                                       40,
                                                   (unsigned __int64*)v78);
                  }
                  if (*(_BYTE*)(v78 + 16) != ((v79 == 0) | v37 & 1)) {
                    break;
                  }
                }
                v78 += 24;
                if (v78 == v77) {
                  goto LABEL_168;
                }
              }
            }
            v74 += 6;
          } while (v74 != v75);
          a5 = v95;
          if (v76 == 0) {
            break;
          }
          v70 = *v71;
        }
        v68 = v70;
      }
      v80 = *(unsigned __int8*)(v68 + 40);
      v22 = v90;
      v5 = v88;
    }
    else {
      v80 = 0;
    }
    if (strcmp_alt1((const char*)*(&game_g_hero_ids + v80),
                    *(const char**)(a2 + 8)) == 0 ||
        (v98_.v98[0] = 0, v98_.v98[1] = a2,
         X8CALL_X0(_QWORD*, GameSituation_906320_alt1(
                                (void*)(&v100_.v100),
                                game_GameModeData_instance_ + 136, v98_.v98)),
         v100_.v102 != 0) &&
            (v81 = *(_QWORD*)(v100_.v102 + 88)) != 0 &&
            (v82 = GameRoutine_67f460(a2),
             strcmp_alt1((const char*)*(&game_g_hero_ids + v82),
                         *(const char**)(v81 + 8)) == 0)) {
      game_db1110((void*)((__int64*)&v100_.v100), v94);
      GameRoutine_1a0a7c0((void*)(v98_.v98), &GameData_1ab0f35, &v100_.v100);
      GameRoutine_7a8220_alt1(v97, v98_.v98);
      if ((v98_.v98[0] & 1) != 0 && v98_.v99 != 0) {
        v84 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v84 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v84, v98_.v99);
      }
      Manager_6326c0_alt1(v98_.v98, (const char*)&GameData_1ab0f35);
      GameRoutine_7a8220_alt1(v97, v98_.v98);
      a3 = v92;
      if ((v98_.v98[0] & 1) != 0 && v98_.v99 != 0) {
        v85 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v85 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v85, v98_.v99);
      }
      v38 = v91;
      if ((v100_.v100 & 1) != 0) {
        goto LABEL_158;
      }
    }
    else {
      Manager_6326c0_alt1((__int64*)&v100_.v100,
                          (const char*)&GameData_1ab0f35);
      GameRoutine_7a8220_alt1(v97, &v100_.v100);
      if ((v100_.v100 & 1) != 0 && v100_.v101 != nullptr) {
        v83 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v83 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v83, (__int64)v100_.v101);
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
    SpineModel_64dde0_alt1((__int64*)a3, (__int64)v86, v96);
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
  GameRoutine_64df20_alt1((_QWORD*)a3, (__int64)v103_.v104, v5);
  result = 1;
  v55 = (__int64)v103_.v104;
  if (v103_.v104 != nullptr) {
  LABEL_99:
    v56 = result;
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v55);
    return v56;
  }
  return result;
}

void game_hub_fa1b40(__int64 a1, float a2)
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
  __int64 v50;
  __int64 v51;
  float v52;
  __int64 v53;
  long double v54;
  long double v55;
  __int64 v56;
  __int64 v57;
  float32x4_t v58;
  long double v59;
  _QWORD v60[25];
  struct {
    __int64* v61;
    __int64 v62;
    __int64 v63;
  } v61_;

  v4 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v4 != 0) {
    v5 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v6 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock_alt1(v6);
    std___1___shared_weak_count___release_weak_alt2(v4);
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
      v58 = v9;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt2(v7);
      v9 = v58;
    }
  }
  else {
    v9 = (__typeof__(v9)){0};
  }
LABEL_12:
  v59 = *(long double*)&v9;
  if ((*(_BYTE*)(GameData_21f3d10 + 232) & 4) != 0 ||
      *(_DWORD*)(GameData_21f3d10 + 140) != 0 ||
      (*(_BYTE*)(GameData_21f3d08 + 64) & 1) != 0 ||
      *(_QWORD*)(GameData_21f3d10 + 200) == 0) {
    v61_.v62 = 0;
    v61_.v63 = 0;
    v61_.v61 = nullptr;
  LABEL_25:
    v11 = 0x1.fffffe0000000p+127f;
    goto LABEL_26;
  }
  DungeonController_f5f960((void*)((__int64*)&v61_.v61));
  v10 = v61_.v61;
  if (v61_.v61 == (__int64*)v61_.v62) {
    v9 = *(float32x4_t*)&v59;
    goto LABEL_25;
  }
  v9 = *(float32x4_t*)&v59;
  v11 = 0x1.fffffe0000000p+127f;
  do {
    v12 = *v10++;
    v13 = vsubq_f32(
        *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v12 + 24) + 16LL) + 560LL),
        *(float32x4_t*)&v59);
    LANES128(v13).n128_f32[1] =
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
  } while (v10 != (__int64*)v61_.v62);
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
  v20 = *(float*)(a1 + 40);
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
  *(float*)(a1 + 40) = v20;
  if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 24)) & 1) != 0) {
    v23 = snd_fnd_WeakHandle_get(a1 + 24);
    if (v23 != 0) {
      v24 = v23 - 5592;
    }
    else {
      v24 = 0;
    }
    v25 = *(float*)(a1 + 12) * *(float*)(a1 + 40);
    snd_Fade_Fade_10c830((__int64)v60, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v24 + 40) + 72LL))(
        v24 + 40, v60, v25);
    snd_Fade_Destroy_Fade(v60);
    v26 = snd_fnd_WeakHandle_get(a1 + 24);
    LODWORD(v27) = v21;
    LODWORD(v28) = v22;
    if (v26 != 0) {
      v29 = v26 - 5592;
    }
    else {
      v29 = 0;
    }
    (*(void (**)(__int64, long double, long double, long double))(
        *(_QWORD*)(v29 + 40) + 1024LL))(v29 + 40, v59, v27, v28);
  }
  v30 = 0x1.0000000000000p+0f;
  if (v18 != 2) {
    v30 = 0x0.0p+0f;
  }
  v31 = *(float*)(a1 + 64);
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
  *(float*)(a1 + 64) = v31;
  if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 48)) & 1) != 0) {
    v32 = snd_fnd_WeakHandle_get(a1 + 48);
    if (v32 != 0) {
      v33 = v32 - 5592;
    }
    else {
      v33 = 0;
    }
    v34 = *(float*)(a1 + 12) * *(float*)(a1 + 64);
    snd_Fade_Fade_10c830((__int64)v60, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v33 + 40) + 72LL))(
        v33 + 40, v60, v34);
    snd_Fade_Destroy_Fade(v60);
    v35 = snd_fnd_WeakHandle_get(a1 + 48);
    LODWORD(v36) = v21;
    LODWORD(v37) = v22;
    if (v35 != 0) {
      v38 = v35 - 5592;
    }
    else {
      v38 = 0;
    }
    (*(void (**)(__int64, long double, long double, long double))(
        *(_QWORD*)(v38 + 40) + 1024LL))(v38 + 40, v59, v36, v37);
  }
  v39 = 0x1.0000000000000p+0f;
  if (v18 != 1) {
    v39 = 0x0.0p+0f;
  }
  v40 = *(float*)(a1 + 88);
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
  *(float*)(a1 + 88) = v40;
  if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 72)) & 1) != 0) {
    v41 = snd_fnd_WeakHandle_get(a1 + 72);
    if (v41 != 0) {
      v42 = v41 - 5592;
    }
    else {
      v42 = 0;
    }
    v43 = *(float*)(a1 + 12) * *(float*)(a1 + 88);
    snd_Fade_Fade_10c830((__int64)v60, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v42 + 40) + 72LL))(
        v42 + 40, v60, v43);
    snd_Fade_Destroy_Fade(v60);
    v44 = snd_fnd_WeakHandle_get(a1 + 72);
    LODWORD(v45) = v21;
    LODWORD(v46) = v22;
    if (v44 != 0) {
      v47 = v44 - 5592;
    }
    else {
      v47 = 0;
    }
    (*(void (**)(__int64, long double, long double, long double))(
        *(_QWORD*)(v47 + 40) + 1024LL))(v47 + 40, v59, v45, v46);
  }
  v48 = 0x1.0000000000000p+0f;
  if (v18 != 0) {
    v48 = 0x0.0p+0f;
  }
  v49 = *(float*)(a1 + 112);
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
  *(float*)(a1 + 112) = v49;
  if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 96)) & 1) != 0) {
    v50 = snd_fnd_WeakHandle_get(a1 + 96);
    if (v50 != 0) {
      v51 = v50 - 5592;
    }
    else {
      v51 = 0;
    }
    v52 = *(float*)(a1 + 12) * *(float*)(a1 + 112);
    snd_Fade_Fade_10c830((__int64)v60, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v51 + 40) + 72LL))(
        v51 + 40, v60, v52);
    snd_Fade_Destroy_Fade(v60);
    v53 = snd_fnd_WeakHandle_get(a1 + 96);
    LODWORD(v54) = v21;
    LODWORD(v55) = v22;
    if (v53 != 0) {
      v56 = v53 - 5592;
    }
    else {
      v56 = 0;
    }
    (*(void (**)(__int64, long double, long double, long double))(
        *(_QWORD*)(v56 + 40) + 1024LL))(v56 + 40, v59, v54, v55);
  }
  if (v61_.v61 != nullptr) {
    v61_.v62 = (__int64)v61_.v61;
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, (__int64)v61_.v61);
  }
}

__attribute__((swiftcall)) void game_hub_fa81d0(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v1;
  __int64 v2;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(a1, *(_QWORD*)(GameData_21f3d10 + 80),
                                       *(_QWORD*)(GameData_21f3d10 + 72)),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
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
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v1 = *(unsigned __int8*)(GameData_21f3cc0 + 40);
  v2 = v1 >> 1;
  if ((v1 & 1) != 0) {
    v2 = *(_QWORD*)(GameData_21f3cc0 + 48);
  }
  if (v2 != 0) {
    if ((v1 & 1) != 0) {
      {
        fw_text_String_CopyTerminated_alt1(a1,
                                           *(_QWORD*)(GameData_21f3cc0 + 56),
                                           *(_QWORD*)(GameData_21f3cc0 + 48)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
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
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  _BOOL4 v23;
  __int64* v24;
  __int64 v25;
  float32x4_t* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int128 v31;
  __int64 v32;
  float32x4_t v33;
  int8x16_t v34;
  __int64 v35;
  unsigned int v36;
  float32x4_t v37;
  float v38;
  _QWORD* v39;
  float v40;
  __int64 v41;
  int8x16_t* v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int128 v46;
  struct {
    __int64* v47;
    __int64 v48;
    char* v49;
  } v47_;
  struct {
    __int64 v50;
    void* v51;
    __int64 v52;
  } v50_;
  struct {
    _QWORD v53[18];
    int v54;
    float v55;
  } v53_;

  v50_.v51 = &GameData_1adb26c;
  v50_.v50 = game_HashString((__int64)&GameData_1adb26c);
  if (game_GameModeData_instance_ == 0) {
    return false;
  }
  v0 =
      game_GameVariableTable_Find(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                  (unsigned __int64*)&v50_.v50);
  if (v0 == 0 || *(_DWORD*)(v0 + 32) == 0) {
    return false;
  }
  v1 = *(_QWORD*)GameData_212ec00;
  v47_.v47 = nullptr;
  v47_.v48 = 0;
  v47_.v49 = nullptr;
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
    v47_.v47 = v11;
    v47_.v49 = (char*)v11 + v10;
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
    v47_.v48 = (__int64)v11;
  }
  game_hub_LocatorDispos_BuildInitTransformLocator((void*)(&v50_.v50), v1, v8,
                                                   v9, &v47_.v47);
  v15 = (__int64)v47_.v47;
  if (v47_.v47 != nullptr) {
    v16 = v47_.v48;
    if (v47_.v47 == (__int64*)v47_.v48) {
      goto LABEL_30;
    }
    v17 = v47_.v48;
    do {
      v18 = *(_BYTE*)(v17 - 24);
      v17 -= 24;
      if ((v18 & 1) != 0) {
        v19 = *(_QWORD*)(v16 - 8);
        if (v19 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v20 = 128;
          }
          else {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v20, v19);
        }
      }
      v16 = v17;
    } while (v17 != v15);
    v47_.v48 = v15;
    v15 = (__int64)v47_.v47;
    if (v47_.v47 != nullptr) {
    LABEL_30:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v21, v15);
    }
  }
  if ((v50_.v50 & 1) != 0) {
    v22 = (unsigned __int64)v50_.v51;
  }
  else {
    v22 = (unsigned __int64)(unsigned __int8)v50_.v50 >> 1;
  }
  v23 = v22 != 0;
  if (v22 != 0) {
    v24 = GameData_212d458[0];
    v25 = *(_QWORD*)(*GameData_212d458[0] + 80);
    if (v25 != 0) {
      v26 = *(float32x4_t**)(*GameData_212d458[0] + 72);
      v27 = *(_QWORD*)(*GameData_212d458[0] + 80);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                memory_order_relaxed);
      v28 = std___1___shared_weak_count_lock_alt1(v27);
      std___1___shared_weak_count___release_weak_alt2(v25);
      if (v28 != 0 && v26 != nullptr) {
        *(_QWORD*)&v31 = v53_.v53[17];
        LODWORD(v29) = v53_.v54;
        *((_QWORD*)&v31 + 1) = v29;
        v32 = *(_QWORD*)(LANES128(v26[1]).n128_u64[1] + 16);
        v46 = v31;
        game_zview_d12d30_alt1(v32, (int32x2_t*)&v46, 1);
        v33 = vsubq_f32(
            v26[79],
            *(float32x4_t*)(*(_QWORD*)(LANES128(v26[1]).n128_u64[1] + 16) +
                            560LL));
        v34 = vmulq_f32(v33, v33);
        LANES128(v34).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
                .n64_f32[0] > 0x1.0000000000000p-23f) {
          v35 = *(_QWORD*)(*v24 + 120);
          if ((*(_BYTE*)(v35 + 12) & 1) == 0) {
            *(_BYTE*)(v35 + 12) = 1;
          }
        }
        v36 = DWORD2(v46);
        LANES128(v26[79]).n128_u64[0] = v46;
        v37 = v26[79];
        LANES128(v37).n128_u64[1] = v36;
        v26[79] = v37;
        HubCharacterNatives_cabfc0((__int64)v26, 1);
        v38 = v53_.v55;
        if ((LANES128(v26[83]).n128_u8[1] & 1) == 0) {
          LANES128(v26[83]).n128_u8[1] = 1;
        }
        v39 = *(_QWORD**)(LANES128(v26[1]).n128_u64[1] + 16);
        v40 = v38 * 0x1.1df46a0000000p-6f;
        if (v39[107] != 0) {
          v41 = v39[108];
          v39[107] = 0;
          v39[108] = 0;
          if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
            std___1___shared_weak_count___release_weak_alt2(v41);
          }
        }
        v42 = (int8x16_t*)v39[61];
        v43 = LANES128(v42[11]).n128_u8[4];
        LANES128(v42[2]).n128_f32[0] = v40;
        LANES128(v42[2]).n128_f32[1] = v40;
        if (v43 == 1) {
          LANES128(v42[11]).n128_u8[4] = 0;
        }
        CharacterRotate_d519c0(v42);
        goto LABEL_57;
      }
      if (v28 != 0) {
      LABEL_57:
        if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
          std___1___shared_weak_count___release_weak_alt2(v28);
        }
      }
    }
    v44 = *(_QWORD*)GameData_212dc60[0];
    game_hub_d97a00(*(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 16LL),
                    0x0.0p+0f);
    LODWORD(v46) = 0;
    WORD2(v46) = 0;
    DWORD2(v46) = 1065353216;
    GameHr_cdeee0(v44, (__int64)&v46);
    GameHr_d1fb60(*(_QWORD*)GameData_212dc38[0], 1);
    *(_DWORD*)(*(_QWORD*)GameData_212c6a0[0] + 928LL) = 0;
  }
  HubNatives_ccbf80_alt2((__int64)v53_.v53);
  if ((v50_.v50 & 1) != 0 && v50_.v52 != 0) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v45, v50_.v52);
  }
  return v23;
}

float32x4_t* game_hub_fb6600(float32x4_t* result, unsigned __int32 a2,
                             float32x4_t* a3, float32x4_t* a4)
{
  float32x4_t* v7;
  int16x4_t v8;
  int16x4_t v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  unsigned int v13;
  float32x4_t v14;
  unsigned int v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float v19;
  float32x4_t v20;
  float32x4_t v21;
  float v22;
  float v23;
  int8x16_t v24;
  float v25;
  float v26;
  float v27;
  __int64* v28;
  __int64 v29;
  int8x16_t v30;
  float32x4_t v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  unsigned int v47;
  unsigned int i;
  float32x4_t* v49;
  __int64** v50;
  __int64 v51;
  __int64 v52;
  float v53;
  unsigned __int64 v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  float v60;
  float32x4_t v61;
  float32x4_t v62;
  __int64 v63;
  __int64 v64;
  float v65;
  float32x4_t v66;
  float32x4_t v67;
  struct {
    __int64* v68;
    __int64 v69;
  } v68_;
  float32x4_t v70;
  int8x16_t v71;
  struct {
    float32x4_t v72;
    __int64 v73;
  } v72_;

  v7 = result;
  LANES64(v8).n64_u64[0] =
      LANES64_OF(vmovn_s32(vceqq_f32(result[2], *a3))).n64_u64[0];
  if ((LANES64(v8).n64_u8[0] & 1) == 0 || (LANES64(v8).n64_u8[2] & 1) == 0 ||
      (LANES64(v8).n64_u8[4] & 1) == 0 ||
      (LANES64(v9).n64_u64[0] =
           LANES64_OF(vmovn_s32(vceqq_f32(result[3], *a4))).n64_u64[0],
       (LANES64(v9).n64_u8[0] & 1) == 0) ||
      (LANES64(v9).n64_u8[2] & 1) == 0 || (LANES64(v9).n64_u8[4] & 1) == 0 ||
      LANES128(result[4]).n128_u32[0] != a2) {
    v11 = (__int64*)LANES128(*(result)).n128_u64[1];
    v10 = (__int64*)LANES128(result[1]).n128_u64[0];
    if (v11 != v10) {
      do {
        GameHr_14a1390(v11, 1);
        v11 += 2;
      } while (v11 != v10);
      v11 = (__int64*)LANES128(*(v7)).n128_u64[1];
      v10 = (__int64*)LANES128(v7[1]).n128_u64[0];
    }
    for (; v10 != v11; v10 -= 2) {
      v12 = *(v10 - 1);
      if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak_alt2(v12);
      }
    }
    LANES128(v7[1]).n128_u64[0] = (unsigned __int64)v11;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v63 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v63;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    }
    v13 = DWORD2(GameData_21a6120);
    LANES128(v7[2]).n128_u64[0] = GameData_21a6120;
    v14 = v7[2];
    LANES128(v14).n128_u64[1] = v13;
    v7[2] = v14;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v64 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v64;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    }
    v15 = DWORD2(GameData_21a6120);
    LANES128(v7[3]).n128_u64[0] = GameData_21a6120;
    v16 = v7[3];
    LANES128(v16).n128_u64[1] = v15;
    v7[3] = v16;
    v17 = vsubq_f32(*a3, *a4);
    v18 = vmulq_f32(v17, v17);
    LANES128(v18).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
            .n64_u64[0];
    v65 = LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]))))
              .n64_f32[0];
    v19 = fmodf(v65, 0x1.0000000000000p-1f);
    v20 = vsubq_f32(*a4, *a3);
    v21 = v20;
    v22 = LANES128(v20).n128_f32[1];
    LANES128(v21).n128_u32[1] = 0;
    v66 = v21;
    v23 = atan2f_alt1(LANES128(v20).n128_f32[0], LANES128(v20).n128_f32[2]);
    v24 = vmulq_f32(v66, v66);
    LANES128(v24).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
            .n64_u64[0];
    v25 = atan2f_alt1(
        v22, LANES64_OF(vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]))))
                 .n64_f32[0]);
    v26 = 0x0.0p+0f;
    math_Quat_FromYawPitchRoll_alt1((void*)(&v71), v23, v25, 0x0.0p+0f);
    GameRoutine_622ac0_alt1((void*)(&v72_.v72), (float32x2_t*)&v71);
    v67 = vmulq_f32(v72_.v72, vdupq_n_s32(0x42652EE1u));
    v27 = v19 + 0x1.0000000000000p+0f;
    v28 = (__int64*)GameData_212dc48[0];
    do {
      v29 = *v28;
      LANES128(v30).n128_u64[0] = 0;
      LANES128(v31).n128_u64[0] = 0;
      LANES128(v30).n128_u64[1] =
          COERCE_UNSIGNED_INT(v26 + (float)(v27 * 0x1.0000000000000p-1f));
      v32 = vmulq_f32(v71, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v33).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v34).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v35).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v30).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v31).n128_i8[8] =
          vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v33).n128_u64[1] = LANES128(v34).n128_u64[0];
      LANES128(v35).n128_u64[1] = LANES128(v35).n128_u64[0];
      LANES128(v34).n128_u64[1] = LANES128(v30).n128_u64[0];
      *(int32x2_t*)&LANES128(v30).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v32).n128_u64[0]), 1);
      LANES128(v36).n128_u64[0] = LANES128(v71).n128_u64[0];
      v37 = vmulq_f32(v31, v33);
      v38 = vmlaq_f32(vmulq_f32(v32, v35),
                      COERCE_AS(float32x4_t, GameData_1a83800), v37);
      LANES128(v37).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v39 = vmlaq_f32(v38, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v30, v37));
      LANES128(v30).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v30).n128_i8[8] =
          vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      LANES128(v32).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v32).n128_u64[1] = LANES128(v32).n128_u64[0];
      v40 = vmlsq_f32(v39, v30, v34);
      LANES128(v30).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v34).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v36).n128_u64[1] = LANES128(v30).n128_u64[0];
      *(int8x8_t*)&LANES128(v34).n128_i8[8] =
          vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v37).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v41 = vmlaq_f32(vmulq_f32(v32, v40),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v36, v34));
      LANES128(v34).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v37).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v40).n128_u64[0]), 1);
      LANES128(v30).n128_u64[1] = LANES128(v34).n128_u64[0];
      LANES128(v34).n128_u64[1] = LANES128(v71).n128_u64[0];
      LANES128(v42).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v42).n128_i8[8] =
          vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v43 = vmlsq_f32(vmlaq_f32(v41, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v34, v37)),
                      v42, v30);
      LANES128(v43).n128_u32[3] = 0;
      v70 = vaddq_f32(*a3, v43);
      game_hub_e1b4d0((void*)(&v72_.v72));
      game_hub_e1bfe0_alt1((void*)(&v68_.v68), v29, (__int64)&v72_.v72,
                           (__int64*)&v70);
      if ((LANES128(v72_.v72).n128_u8[0] & 1) != 0 && v72_.v73 != 0) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v44 = 128;
        }
        else {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v72_.v73);
      }
      v45 = v68_.v68;
      v46 = *v68_.v68;
      if (*v68_.v68 != 0 && *(_DWORD*)(v46 + 16) == *((_DWORD*)v68_.v68 + 2)) {
        v47 = *(_DWORD*)(v46 + 36);
        if (v47 != 0) {
          for (i = 0; i < v47; ++i) {
            if ((int)v47 > (int)i) {
              v49 = *(float32x4_t**)(v46 + 40 + 8LL * (int)i);
              if (v49 != nullptr) {
                LANES128(v49[8]).n128_u8[0] = 1;
                v49[3] = v67;
                v47 = *(_DWORD*)(v46 + 36);
              }
            }
          }
        }
      }
      v50 = (__int64**)LANES128(v7[1]).n128_u64[0];
      if ((unsigned __int64)v50 >= LANES128(v7[1]).n128_u64[1]) {
        result = (float32x4_t*)GameHr_e5d5a0(&LANES128(*(v7)).n128_i64[1],
                                             &v68_.v68);
      }
      else {
        *v50 = v45;
        v51 = v68_.v69;
        v50[1] = (__int64*)v68_.v69;
        if (v51 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                                    memory_order_relaxed);
        }
        result = (float32x4_t*)(v50 + 2);
      }
      v52 = v68_.v69;
      v53 = 0x1.0000000000000p-1f;
      LANES128(v7[1]).n128_u64[0] = (unsigned __int64)result;
      if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, float))(*(_QWORD*)v52 + 16LL))(
            v52, 0x1.0000000000000p-1f);
        result =
            (float32x4_t*)std___1___shared_weak_count___release_weak_alt2(v52);
        v53 = 0x1.0000000000000p-1f;
      }
      v26 = v26 + v53;
    } while (v26 <= (float)(v65 + -0x1.0000000000000p+0f));
    v54 = (LANES128(v7[1]).n128_u64[0] - LANES128(*(v7)).n128_u64[1]) >> 4;
    if ((int)v54 >= 4) {
      v55 = (unsigned int)v54 >> 1;
      v56 = -16;
      v57 = 0;
      v58 = 0;
      if (v55 >= 6) {
        v55 = 6;
      }
      v59 = v55 - 1;
      do {
        v60 = powf((float)((float)(unsigned int)v58 + 0x1.0000000000000p-1f) /
                       (float)(unsigned int)v59,
                   0x1.8000000000000p+0f);
        game_14a1b00(*(__int64**)(LANES128(*(v7)).n128_u64[1] + v57), v60);
        result = (float32x4_t*)game_14a1b00(
            *(__int64**)(LANES128(v7[1]).n128_u64[0] + v56), v60);
        ++v58;
        v56 -= 16;
        v57 += 16;
      } while (v59 != v58);
    }
    LANES128(v7[2]).n128_u32[0] = LANES128(*(a3)).n128_u32[0];
    LANES128(v7[2]).n128_u32[1] = LANES128(*(a3)).n128_u32[1];
    v61 = v7[2];
    LANES128(v61).n128_u64[1] = LANES128(*(a3)).n128_u32[2];
    v7[2] = v61;
    LANES128(v7[3]).n128_u32[0] = LANES128(*(a4)).n128_u32[0];
    LANES128(v7[3]).n128_u32[1] = LANES128(*(a4)).n128_u32[1];
    v62 = v7[3];
    LANES128(v62).n128_u32[2] = LANES128(*(a4)).n128_u32[2];
    LANES128(v7[4]).n128_u32[0] = a2;
    LANES128(v62).n128_u64[1] = LANES128(v62).n128_u32[2];
    v7[3] = v62;
  }
  return result;
}

void game_hub_fb6f80(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  unsigned __int64 v24;
  __int64 v25;
  struct {
    __int64 v26;
    unsigned __int64 v27;
    char* v28;
  } v26_;

  v2 = *a2;
  v4 = (v2 & 1) == 0;
  v5 = v2 >> 1;
  if (v4) {
    v6 = (__int64)(a2 + 1);
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
  game_db1620_alt1((void*)((__int64)&v26_.v26), v6, v7);
  v8 = game_GameModeData_instance_;
  if ((v26_.v26 & 1) != 0) {
    v9 = v26_.v28;
  }
  else {
    v9 = (char*)&v26_.v26 + 1;
  }
  v10 = game_HashString((__int64)v9);
  if (v10 != 0) {
    v11 = *(_QWORD**)(v8 + 48);
    v12 = v11[2];
    if (v12 != 0 && v11[4] != 0) {
      v14 = v12 - 1;
      if ((v12 & (v12 - 1)) != 0) {
        v15 = v10;
        if (v10 >= v12) {
          v15 = v10 % v12;
        }
      }
      else {
        v15 = v14 & v10;
      }
      v16 = *(_QWORD**)(v11[1] + 8 * v15);
      if (v16 != nullptr) {
        v17 = (_QWORD*)*v16;
        if (v17 != nullptr) {
          if ((v12 & v14) == 0) {
            while (1) {
              v19 = v17[1];
              if (v10 == v19) {
                if (v17[2] == v10) {
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
            if (v10 == v18) {
              if (v17[2] == v10) {
              LABEL_35:
                v20 = (__int64*)(a1 + 24);
                if (*(_BYTE*)(a1 + 48) == 1) {
                  if (v20 != &v26_.v26) {
                    if ((*(_BYTE*)v20 & 1) != 0) {
                      if ((v26_.v26 & 1) != 0) {
                        v23 = v26_.v28;
                      }
                      else {
                        v23 = (char*)&v26_.v26 + 1;
                      }
                      if ((v26_.v26 & 1) != 0) {
                        v24 = v26_.v27;
                      }
                      else {
                        v24 = (unsigned __int64)(unsigned __int8)v26_.v26 >> 1;
                      }
                      SpineModel_64dde0_alt1(v20, (__int64)v23, v24);
                    }
                    else if ((v26_.v26 & 1) != 0) {
                      GameRoutine_64df20_alt1(v20, (__int64)v26_.v28, v26_.v27);
                    }
                    else {
                      v21 = v26_.v27;
                      *v20 = v26_.v26;
                      *(_QWORD*)(a1 + 32) = v21;
                      *(_QWORD*)(a1 + 40) = v26_.v28;
                    }
                  }
                }
                else {
                  if ((v26_.v26 & 1) != 0) {
                    fw_text_String_CopyTerminated_alt1(v20, (__int64)v26_.v28,
                                                       v26_.v27);
                  }
                  else {
                    v22 = v26_.v27;
                    *v20 = v26_.v26;
                    *(_QWORD*)(a1 + 32) = v22;
                    *(_QWORD*)(a1 + 40) = v26_.v28;
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
  if ((v26_.v26 & 1) != 0 && v26_.v28 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, (__int64)v26_.v28);
  }
}

void game_hub_1001800(__int64 a1)
{
  _QWORD handle[2];
  __int64 v1;
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
    *(_QWORD*)(a1 + 160) = v1;
    v3 = *(_DWORD**)(v1 + 24);
    *(_DWORD*)(a1 + 176) = v3[76];
    *(_DWORD*)(a1 + 180) = v3[77];
    v4 = *(_OWORD*)(a1 + 176);
    *((_QWORD*)&v4 + 1) = (unsigned int)v3[78];
    *(_OWORD*)(a1 + 176) = v4;
    game_104bd20((void*)(v12), v1, (__int64)"Loc_Eff_Obelisk_A009");
    v5 = *(_OWORD*)v12;
    v6 = *(_OWORD*)&v12[2];
    *(_DWORD*)(a1 + 276) = 0;
    *(_OWORD*)(a1 + 192) = v5;
    *(_OWORD*)(a1 + 208) = v6;
    v7 = *(_OWORD*)&v12[6];
    *(_OWORD*)(a1 + 224) = *(_OWORD*)&v12[4];
    *(_OWORD*)(a1 + 240) = v7;
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    strcpy(v9, "SE_EVT_SecondObelisk_Appear");
    snd_Fade_Fade_10c830((__int64)v12, 0x0.0p+0f);
    snd_play_ff2d0((void*)(handle), (__int64)v9, (__int64)v9, (__int64)v12, 0,
                   0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v12);
    GameRoutine_112180(a1 + 280, (__int64)&v11);
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v8 + v10, (__int64)v9);
  }
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

void game_hub_1001b60(float32x4_t* a1, __n128 result)
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
        return;
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
      std___1___shared_weak_count___release_weak(v6);
      return;
    }
  }
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
  struct {
    __int64 v59[2];
    __int64 v60;
  } v59_;
  struct {
    __int128 v61;
    int v62;
    char gap100_[4];
    __int64 v63;
    unsigned __int64 v64;
    __int64 v65;
    __int64 v66;
    unsigned __int64 v67;
    __int64 v68;
    int v69;
    char v70;
    char gap157_[3];
    char v71;
    char gap161_[7];
    __int64 v72;
    __int64 v73;
  } v61_;
  struct {
    __int64 v74[3];
    __int64 v75;
    __int64 v76;
  } v74_;

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
          LOBYTE(v61_.v63) = 0;
          v61_.v71 = 0;
          v61_.v62 = 0;
          v61_.v61 = (__typeof__(v61_.v61)){0};
          v61_.v72 = 0;
          v61_.v73 = 0;
          v9 = *(_QWORD*)(*(_QWORD*)v3 + 8LL);
          v8 = *(_QWORD*)(*(_QWORD*)v3 + 16LL);
          if (v8 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v9 != 0) {
            v10 = *(_QWORD*)(v9 + 24);
            if (v10 != 0) {
              v11 = std___1___shared_weak_count_lock_alt1(v10);
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
                  std___1___shared_weak_count___release_weak_alt2(v15);
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
          std___1___shared_weak_count___release_weak_alt2(v8);
          if ((v1 & 1) != 0) {
          LABEL_21:
            *(_QWORD*)&v17 = v57;
            *((_QWORD*)&v17 + 1) = DWORD2(v57);
            v61_.v61 = v17;
            v18 = *(_QWORD*)(*(_QWORD*)v3 + 16LL);
            v58[0] = *(_QWORD*)(*(_QWORD*)v3 + 8LL);
            v58[1] = v18;
            if (v18 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                        memory_order_relaxed);
              game_hub_102e120((void*)(v59_.v59), a1, v58);
              if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
                std___1___shared_weak_count___release_weak_alt2(v18);
              }
            }
            else {
              game_hub_102e120((void*)(v59_.v59), a1, v58);
            }
            if ((game_hub_102e240_alt1(a1, &v61_.v61, v59_.v59) & 1) == 0) {
              goto LABEL_67;
            }
            v19 = *v6;
            v20 = GameRoutine_f71d40(*v6, (__int64)&v61_.v61, a1 + 40);
            if ((GameRoutine_f71cb0(v20, v20) & 1) == 0 ||
                (unsigned int)game_hub_f71fc0_alt1(v19, (__int64)&v61_.v61,
                                                   a1 + 40) != 0 &&
                    (*(_BYTE*)(v19 + 32) & 2) == 0) {
              goto LABEL_67;
            }
            v61_.v62 = GameRoutine_f71d40(*v6, (__int64)&v61_.v61, a1 + 40);
            v22 = *(_QWORD*)(*(_QWORD*)v3 + 8LL);
            v21 = *(_QWORD*)(*(_QWORD*)v3 + 16LL);
            if (v21 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                        memory_order_relaxed);
            }
            v23 = v61_.v73;
            v61_.v72 = v22;
            v61_.v73 = v21;
            if (v23 != 0) {
              std___1___shared_weak_count___release_weak_alt2(v23);
            }
            v25 = *(_QWORD*)(a1 + 240);
            v24 = *(_QWORD*)(a1 + 248);
            if (v25 < v24) {
              v26 = *((_QWORD*)&v61_.v61 + 1);
              *(_BYTE*)(v25 + 24) = 0;
              v27 = (__int64*)(v25 + 24);
              *(_BYTE*)(v25 + 80) = 0;
              *(_QWORD*)(v25 + 8) = v26;
              *(_QWORD*)v25 = v61_.v61;
              *(_DWORD*)(v25 + 16) = v61_.v62;
              if (v61_.v71 == 1) {
                if ((v61_.v63 & 1) != 0) {
                  fw_text_String_CopyTerminated_alt1(v27, v61_.v65, v61_.v64);
                  if ((v61_.v66 & 1) == 0) {
                    goto LABEL_55;
                  }
                LABEL_39:
                  fw_text_String_CopyTerminated_alt1((__int64*)(v25 + 48),
                                                     v61_.v68, v61_.v67);
                }
                else {
                  v28 = v61_.v63;
                  v29 = v61_.v65;
                  *(_QWORD*)(v25 + 32) = v61_.v64;
                  *(_QWORD*)(v25 + 40) = v29;
                  *v27 = v28;
                  if ((v61_.v66 & 1) != 0) {
                    goto LABEL_39;
                  }
                LABEL_55:
                  *(_QWORD*)(v25 + 56) = v61_.v67;
                  v41 = v61_.v66;
                  *(_QWORD*)(v25 + 64) = v61_.v68;
                  *(_QWORD*)(v25 + 48) = v41;
                }
                v42 = v61_.v70;
                *(_DWORD*)(v25 + 72) = v61_.v69;
                *(_BYTE*)(v25 + 76) = v42;
                *(_BYTE*)(v25 + 80) = 1;
              }
              *(_QWORD*)(v25 + 88) = v61_.v72;
              v43 = v61_.v73;
              *(_QWORD*)(v25 + 96) = v61_.v73;
              if (v43 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16),
                                          1u, memory_order_relaxed);
              }
              v44 = v25 + 112;
            LABEL_66:
              *(_QWORD*)(a1 + 240) = v44;
            LABEL_67:
              if ((v59_.v59[0] & 1) != 0 && v59_.v60 != 0) {
                v53 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v53 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v59_.v60);
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
            v74_.v75 = 0;
            v74_.v76 = v56;
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
            v36 = v61_.v61;
            v37 = v35 + v31;
            *(_BYTE*)(v37 + 24) = 0;
            v38 = (__int64*)(v37 + 24);
            *(_BYTE*)(v37 + 80) = 0;
            *(_OWORD*)v37 = v36;
            *(_DWORD*)(v37 + 16) = v61_.v62;
            if (v61_.v71 == 1) {
              if ((v61_.v63 & 1) != 0) {
                fw_text_String_CopyTerminated_alt1(v38, v61_.v65, v61_.v64);
                if ((v61_.v66 & 1) != 0) {
                  goto LABEL_61;
                }
              LABEL_53:
                v40 = v61_.v67;
                *(_QWORD*)(v37 + 48) = v61_.v66;
                *(_QWORD*)(v37 + 56) = v40;
                *(_QWORD*)(v37 + 64) = v61_.v68;
              }
              else {
                v39 = v61_.v64;
                *v38 = v61_.v63;
                *(_QWORD*)(v37 + 32) = v39;
                *(_QWORD*)(v37 + 40) = v61_.v65;
                if ((v61_.v66 & 1) == 0) {
                  goto LABEL_53;
                }
              LABEL_61:
                fw_text_String_CopyTerminated_alt1((__int64*)(v37 + 48),
                                                   v61_.v68, v61_.v67);
              }
              *(_DWORD*)(v37 + 72) = v61_.v69;
              *(_BYTE*)(v37 + 76) = v61_.v70;
              *(_BYTE*)(v37 + 80) = 1;
            }
            v45 = v61_.v73;
            v46 = v7;
            *(_QWORD*)(v37 + 88) = v61_.v72;
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
            GameHr_102f3c0(v47, v48, v50);
            v51 = *(_QWORD*)(a1 + 232);
            v52 = *(_QWORD*)(a1 + 248);
            *(_QWORD*)(a1 + 232) = v50;
            *(_QWORD*)(a1 + 240) = v37 + 112;
            *(_QWORD*)(a1 + 248) = v49;
            v74_.v74[2] = v51;
            v74_.v75 = v52;
            v74_.v74[0] = v51;
            v74_.v74[1] = v51;
            GameHr_102f2a0(v74_.v74);
            v7 = v46;
            v6 = &GameData_220b6c8;
            goto LABEL_66;
          }
        LABEL_72:
          if (v61_.v73 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v61_.v73);
          }
          if (v61_.v71 == 1) {
            if ((v61_.v66 & 1) != 0 && v61_.v68 != 0) {
              v54 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v54 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v61_.v68);
            }
            if ((v61_.v63 & 1) != 0 && v61_.v65 != 0) {
              v55 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v55 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v61_.v65);
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
  unsigned __int64 v11;
  unsigned __int64 v12;
  const char* v13;
  const char* v14;
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
    const char* v69;
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
    v13 = (const char*)(a1 + 41);
  }
  else {
    v13 = *(const char**)(a1 + 56);
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
  v16 = GlobalMapData_e27700_alt1(*(_QWORD**)GameData_212ef18[0], v13, v12, v14,
                                  v15, &v65_.v65, &v70),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v16 != 0) {
    if (v16 != 2) {
      goto LABEL_104;
    }
    v17 = ({
      unsigned __int128 r_ = game_hub_e286a0_pair(*v8, &v65_.v65);
      v18 = COERCE_AS(__typeof__(v18), (unsigned long long)(r_ >> 64));
      (unsigned __int64)(unsigned long long)r_;
    });
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
          LocatorDispos_db1f30_alt1((void*)(v57), (__int64*)(v22 + 144)),
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
            std___1___shared_weak_count___release_weak_alt2(v35),
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
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, v61[0]),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if ((v58[0] & 1) != 0 && v58[2] != 0) {
          v51 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v58[2]),
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
      GameHr_e273d0(v52 - 152),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameHr_e273d0(v53),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v52 = v53;
    } while (v53 != v26);
    v65_.v66 = v26;
    v26 = v65_.v65;
    if (v65_.v65 != 0) {
    LABEL_108:
      v54 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v54 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v26),
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
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, (__int64)v68_.v69),
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
