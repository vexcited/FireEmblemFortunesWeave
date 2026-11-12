#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BattleSide_7a0b00(_QWORD* result);
_QWORD* CharacterObservable_10cd4e0(_QWORD* result);
_QWORD* GameRoutine_74d660(__int64, int, char, char);
_QWORD* Image_72b6c0_alt1(_QWORD*) __asm__("Image_72b6c0");
_QWORD* game_UnitPool_Find_6ead60(__int64*, int*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64* GameRoutine_f098f0(__int64* result, __int64*, char);
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64* game_UnitPool_Get(_BYTE*);
__int64 BattleInfo_795920(__int64 result, _DWORD*, __int64, __int64);
__int64 BattleInfo_79ae60(__int64);
__int64 BattleInfo_79d030(__int64);
__int64 BattleSide_7a1610(__int64);
__int64 BattleSide_7a1a00(__int64, _DWORD*);
__int64 Camera_7bfc60(_QWORD, _QWORD);
__int64 Camera_7c0d80(_QWORD);
__int64 CharacterBuilder_1084780(void);
__int64 CharacterBuilder_1084780_alt1(__int64 result) __asm__(
    "CharacterBuilder_1084780");
__int64 Cursor_730e40(_QWORD, _QWORD);
__int64 Cursor_734a80_alt1(__int64, __int64*) __asm__("Cursor_734a80");
__int64 EscapeMenuItem_752b40(int, int, int, int, int, int, int, int);
__int64 GameRoutine_10a4c70(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_2b0();
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_718280();
__int64 GameRoutine_73bb40(__int64);
__int64 GameRoutine_74e6e0(__int64 result, char*, _DWORD*, unsigned __int64,
                           char*);
__int64 GameRoutine_757f60(__int64 result, _DWORD*, unsigned int, unsigned int,
                           __int64);
__int64 GameRoutine_75bac0();
__int64 GameRoutine_75bbc0();
__int64 GameRoutine_75bc60();
__int64 GameRoutine_75bce0();
__int64 GameRoutine_76b550(__int64, __int64, __int64, char, long double,
                           long double);
__int64 GameRoutine_76e390();
__int64 GameRoutine_76e3b0();
__int64 GameRoutine_76e5c0();
__int64 GameRoutine_76e9b0();
__int64 GameRoutine_76ebe0();
__int64 GameRoutine_76ee90();
__int64 GameRoutine_76ef60();
__int64 GameRoutine_7709f0();
__int64 GameRoutine_770bb0();
__int64 GameRoutine_783be0(__int64 result, int*, int*, _QWORD*, __int64,
                           __int64, int*, __int64);
__int64 GameRoutine_7857c0(__int64 result, int*, int*, _QWORD*, __int64,
                           __int64, int*, __int64);
__int64 GameRoutine_7873a0(__int64 result, int*, int*, _QWORD*, __int64,
                           __int64, int*, __int64);
__int64 GameRoutine_788a40();
__int64 GameRoutine_78d0e0();
__int64 GameRoutine_790080(__int64);
__int64 GameRoutine_799290(_QWORD*);
__int64 GameRoutine_7992e0(__int64);
__int64 GameRoutine_7abca0(__int64*);
__int64 GameRoutine_844ee0(_QWORD);
__int64 GameRoutine_845bc0(__int64, __int64);
__int64 GameRoutine_8517e0(__int64 result, int*, __int64, char);
__int64 GameRoutine_a859a0(__int64 result, char);
__int64 GameRoutine_c8b5a0(__int64, unsigned int, __int64, unsigned int,
                           unsigned int, unsigned int, unsigned int);
__int64 GameRoutine_f097d0(__int64);
__int64 GameRoutine_f0a0d0(__int64, int);
__int64 GameRoutine_f0f310(__int64 result, __int64);
__int64 GameRoutine_f54ba0(_QWORD, _QWORD);
__int64 IRoute_74f1a0(__int64 result, __int64);
__int64 IRoute_751080(unsigned int*, __int64);
__int64 IRoute_751080_alt1(_QWORD, _QWORD,
                           long double) __asm__("IRoute_751080");
__int64 IRoute_751300(unsigned int*, __int64);
__int64 IRoute_751300_alt1(_QWORD, _QWORD) __asm__("IRoute_751300");
__int64 IRoute_751ba0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Image_72a260(__int64);
__int64 Image_72a260_alt1(_QWORD) __asm__("Image_72a260");
__int64 Image_72b4a0(_QWORD);
__int64 Image_72b4a0_alt1(__int64) __asm__("Image_72b4a0");
__int64 Image_72b6c0(_QWORD);
__int64 MapDrawTargetLine_f21270();
__int64 MapUtil_753570(int, int);
__int64 MapUtil_757430(__int64 result);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ProcInst_657850_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD) __asm__("ProcInst_657850");
__int64 ProcUnitDead_76ecf0();
__int64 ProcUnitDead_76ed60();
__int64 ProcUnitDead_76f480();
__int64 ProcUnitDead_76f4e0();
__int64 ProcUnitDead_76f540();
__int64 ProcUnitDead_76f5d0();
__int64 Situation_7677a0(__int64*, float, float, float);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 UnitActor_81ab40(_QWORD, long double, double);
__int64 UnitActor_81ab40_alt1(__int64, float,
                              float) __asm__("UnitActor_81ab40");
__int64 UnitActor_81b040(__int64, float);
__int64 UnitActor_81ba20(_QWORD);
__int64 UnitNatives_753e40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84cc00(__int64*, _DWORD*, __int64);
__int64 UnitSkillList_84cf20(__int64, __int64, char);
__int64 UnitSkillList_84e640(__int64 result);
__int64 UnitSkillList_84e760(__int64 result);
__int64 Unit_6c7fa0_alt2(_QWORD, _QWORD) __asm__("Unit_6c7fa0");
__int64 Unit_6cb490(__int64);
__int64 Unit_6cb640(__int64);
__int64 Unit_6dfe00(__int64 result, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_9903e0(__int64 result);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HasSkill_alt1(_QWORD, _QWORD) __asm__("game_HasSkill");
__int64 game_HashString(__int64 result);
__int64 game_HashString32(__int64 result);
__int64 game_HashString32_alt1(_QWORD) __asm__("game_HashString32");
__int64 game_ProcInst_Register(__int64);
__int64 game_ProcInst_Register_alt1(void) __asm__("game_ProcInst_Register");
__int64 game_UnitPool_GetFirst(int*);
__int64 game_UnitSkillList_GetMaxValue(_QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_graphics_ObjectTransparent_Run(_QWORD, _QWORD);
__int64 game_map_792360(__int64);
__int64 game_map_79d560(__int64);
__int64 game_map_BattleSide_CalculateTerrain(__int64 result);
__int64 game_map_BattleUtil_GetFactorSkill(__int64);
__int64 game_map_anonymous_76e470();
__int64 game_map_anonymous_76ea20();
__int64 game_map_anonymous_770a30();
__int64 game_map_anonymous_ProcUnitDead_DeadDrop();
__int64 game_map_f54910_alt1(_QWORD) __asm__("game_map_f54910");
__int64 game_map_fe96c0(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__n128 Cursor_734a80(_QWORD, _QWORD);
__n128 GameRoutine_f54ba0_alt1(__int64***,
                               unsigned __int64) __asm__("GameRoutine_f54ba0");
__n128 nn_os_UnlockMutex(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, float);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool BattleSide_79eea0(__int64);
bool GameRoutine_f09e50(__int64);
bool GameRoutine_f23ea0(__int64);
bool Situation_7652c0();
bool UnitItem_6e8d00(unsigned __int16*, __int64);
bool game_HasActiveSkill_843580(_DWORD*, __int64, __int64);
bool game_map_782c60_alt1(_QWORD*, int, int) __asm__("game_map_782c60");
bool game_map_784840_alt1(_QWORD*, int, int) __asm__("game_map_784840");
bool game_map_786420_alt1(_QWORD*, int, int) __asm__("game_map_786420");
bool game_map_IRoute_IsSightOut(_DWORD*, __int64);
char* game_map_74eb00(char* result, char*, char*, _DWORD*, __int64, __int64,
                      char*, __int64);
double snd_getDefineValue(unsigned __int8*);
extern _DWORD* GameData_212d168;
extern _QWORD GameData_1b01588[4];
extern _QWORD GameData_1b01628[4];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN* GameData_212ceb8;
extern _UNKNOWN* GameData_212cf50;
extern _UNKNOWN* GameData_212d208;
extern _UNKNOWN* GameData_21d21b8;
extern _UNKNOWN GameData_1a89034;
extern _UNKNOWN GameData_1ac2f4d;
extern _UNKNOWN GameData_1b47d78;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN GameData_21a55c0;
extern _UNKNOWN GameData_21a60e8;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21c6868;
extern _UNKNOWN GameData_21cfbd8;
extern _UNKNOWN GameData_21cfd20;
extern _UNKNOWN GameData_21d23e0;
extern _UNKNOWN GameData_21d25f0;
extern _UNKNOWN GameData_21d2878;
extern _UNKNOWN GameData_21d2a40;
extern _UNKNOWN GameData_21d2bc8;
extern _UNKNOWN GameData_21d2ee0;
extern _UNKNOWN GameData_21d3128;
extern _UNKNOWN GameData_21d3370;
extern _UNKNOWN GameData_21d35b8;
extern _UNKNOWN GameData_21d3fb8;
extern _UNKNOWN GameData_21d40b0;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
extern __int128 GameData_21a6120;
extern __int16* GameData_212cf08[9];
extern __int64 (**game_map_anonymous_NullObject_vtable_ptr[])();
extern __int64 (*GameData_1f955a0[])();
extern __int64 (*GameData_1fb2478[])();
extern __int64 (*GameData_1ff1458[])();
extern __int64 (*GameData_1ff14d8[])();
extern __int64 (*GameData_1ff15d8[])();
extern __int64 (*GameData_1ff1658[])();
extern __int64 (*GameData_1ff1758[])();
extern __int64 (*GameData_1ff17d8[])();
extern __int64 (*GameData_1ff1858[])();
extern __int64 (*game_map_BattleEquipScope_vtable[])();
extern __int64 (*game_map_MapPanelDeployAction_vtable[])();
extern __int64 (*game_map_MassMeshGroup_vtable[])();
extern __int64 (*game_map_MeshData_vtable[])();
extern __int64 (*game_map_ProcSummon_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapTransition_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitAction_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitBlazeOff_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitBlazeOn_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitBurstAdd_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitDead_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitFollow_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitMorph_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitMove_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitTranslate_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitWarp_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cfd8[7];
extern __int64* GameData_212cfe8[5];
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212d178[6];
extern __int64* GameData_212d1d0[4];
extern __int64* GameData_212ddb8[4];
extern __int64* GameData_212f8b8[13];
extern __int64* GameData_212fdf0[2];
extern __int64* GameData_21309c8[5];
extern __int64* game_g_empty_item_ptr;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_212c7f0[3];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 GameData_21a60e0;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c9d30;
extern __int64 GameData_21ca240;
extern __int64 GameData_21ca248;
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21cd0f0;
extern __int64 GameData_21cd120;
extern __int64 GameData_21cd130;
extern __int64 GameData_21cd140;
extern __int64 GameData_21cd148;
extern __int64 GameData_21cfaa0;
extern __int64 GameData_21cfaa8;
extern __int64 GameData_21cfab0;
extern __int64 GameData_21cfac0;
extern __int64 GameData_21cfac8;
extern __int64 GameData_21cfad0;
extern __int64 GameData_21cfae0;
extern __int64 GameData_21cfae8;
extern __int64 GameData_21cfaf0;
extern __int64 GameData_21cfb00;
extern __int64 GameData_21cfb08;
extern __int64 GameData_21cfb10;
extern __int64 GameData_21cfb20;
extern __int64 GameData_21cfb28;
extern __int64 GameData_21cfb30;
extern __int64 GameData_21cfb40;
extern __int64 GameData_21cfb48;
extern __int64 GameData_21cfb50;
extern __int64 GameData_21cfb60;
extern __int64 GameData_21cfb68;
extern __int64 GameData_21cfb70;
extern __int64 GameData_21cfb80;
extern __int64 GameData_21cfb88;
extern __int64 GameData_21cfb90;
extern __int64 GameData_21cfba0;
extern __int64 GameData_21cfba8;
extern __int64 GameData_21cfbb0;
extern __int64 GameData_21cfbc0;
extern __int64 GameData_21cfbc8;
extern __int64 GameData_21cfbd0;
extern __int64 GameData_21cfbe8;
extern __int64 GameData_21cfbf0;
extern __int64 GameData_21cfbf8;
extern __int64 GameData_21cfc08;
extern __int64 GameData_21cfc18;
extern __int64 GameData_21cfc28;
extern __int64 GameData_21cfc30;
extern __int64 GameData_21cfc38;
extern __int64 GameData_21cfc48;
extern __int64 GameData_21cfc58;
extern __int64 GameData_21cfc68;
extern __int64 GameData_21cfc70;
extern __int64 GameData_21cfc78;
extern __int64 GameData_21cfc88;
extern __int64 GameData_21cfc98;
extern __int64 GameData_21cfca8;
extern __int64 GameData_21cfcb0;
extern __int64 GameData_21cfcb8;
extern __int64 GameData_21cfcc8;
extern __int64 GameData_21cfcd8;
extern __int64 GameData_21cfce8;
extern __int64 GameData_21cfcf0;
extern __int64 GameData_21cfcf8;
extern __int64 GameData_21cfd08;
extern __int64 GameData_21cfd18;
extern __int64 GameData_21d21c0;
extern __int64 GameData_21d21e8;
extern __int64 GameData_21d21f0;
extern __int64 GameData_21d21f8;
extern __int64 GameData_21d2208;
extern __int64 GameData_21d2218;
extern __int64 GameData_21d2228;
extern __int64 GameData_21d2230;
extern __int64 GameData_21d2238;
extern __int64 GameData_21d2248;
extern __int64 GameData_21d2258;
extern __int64 GameData_21d2268;
extern __int64 GameData_21d2270;
extern __int64 GameData_21d2278;
extern __int64 GameData_21d2288;
extern __int64 GameData_21d2298;
extern __int64 GameData_21d22a8;
extern __int64 GameData_21d22b0;
extern __int64 GameData_21d22b8;
extern __int64 GameData_21d22c8;
extern __int64 GameData_21d22d8;
extern __int64 GameData_21d22e8;
extern __int64 GameData_21d22f0;
extern __int64 GameData_21d22f8;
extern __int64 GameData_21d2308;
extern __int64 GameData_21d2318;
extern __int64 GameData_21d2328;
extern __int64 GameData_21d2330;
extern __int64 GameData_21d2338;
extern __int64 GameData_21d2348;
extern __int64 GameData_21d2358;
extern __int64 GameData_21d2368;
extern __int64 GameData_21d2370;
extern __int64 GameData_21d2378;
extern __int64 GameData_21d2388;
extern __int64 GameData_21d2398;
extern __int64 GameData_21d23a8;
extern __int64 GameData_21d23b0;
extern __int64 GameData_21d23b8;
extern __int64 GameData_21d23c8;
extern __int64 GameData_21d23d8;
extern __int64 GameData_21d24f8;
extern __int64 GameData_21d2500;
extern __int64 GameData_21d2508;
extern __int64 GameData_21d2518;
extern __int64 GameData_21d2528;
extern __int64 GameData_21d2538;
extern __int64 GameData_21d2540;
extern __int64 GameData_21d2548;
extern __int64 GameData_21d2558;
extern __int64 GameData_21d2568;
extern __int64 GameData_21d2578;
extern __int64 GameData_21d2580;
extern __int64 GameData_21d2588;
extern __int64 GameData_21d2598;
extern __int64 GameData_21d25a8;
extern __int64 GameData_21d25b8;
extern __int64 GameData_21d25c0;
extern __int64 GameData_21d25c8;
extern __int64 GameData_21d25d8;
extern __int64 GameData_21d25e8;
extern __int64 GameData_21d2600;
extern __int64 GameData_21d2608;
extern __int64 GameData_21d2610;
extern __int64 GameData_21d2620;
extern __int64 GameData_21d2630;
extern __int64 GameData_21d2640;
extern __int64 GameData_21d2648;
extern __int64 GameData_21d2650;
extern __int64 GameData_21d2660;
extern __int64 GameData_21d2670;
extern __int64 GameData_21d2680;
extern __int64 GameData_21d2688;
extern __int64 GameData_21d2690;
extern __int64 GameData_21d26a0;
extern __int64 GameData_21d26b0;
extern __int64 GameData_21d26c0;
extern __int64 GameData_21d26c8;
extern __int64 GameData_21d26d0;
extern __int64 GameData_21d26e0;
extern __int64 GameData_21d26f0;
extern __int64 GameData_21d2700;
extern __int64 GameData_21d2708;
extern __int64 GameData_21d2710;
extern __int64 GameData_21d2720;
extern __int64 GameData_21d2730;
extern __int64 GameData_21d2740;
extern __int64 GameData_21d2748;
extern __int64 GameData_21d2750;
extern __int64 GameData_21d2760;
extern __int64 GameData_21d2770;
extern __int64 GameData_21d2780;
extern __int64 GameData_21d2788;
extern __int64 GameData_21d2790;
extern __int64 GameData_21d27a0;
extern __int64 GameData_21d27b0;
extern __int64 GameData_21d27c0;
extern __int64 GameData_21d27c8;
extern __int64 GameData_21d27d0;
extern __int64 GameData_21d27e0;
extern __int64 GameData_21d27f0;
extern __int64 GameData_21d2800;
extern __int64 GameData_21d2808;
extern __int64 GameData_21d2810;
extern __int64 GameData_21d2820;
extern __int64 GameData_21d2830;
extern __int64 GameData_21d2840;
extern __int64 GameData_21d2848;
extern __int64 GameData_21d2850;
extern __int64 GameData_21d2860;
extern __int64 GameData_21d2870;
extern __int64 GameData_21d2888;
extern __int64 GameData_21d2890;
extern __int64 GameData_21d2898;
extern __int64 GameData_21d28a8;
extern __int64 GameData_21d28b8;
extern __int64 GameData_21d28c8;
extern __int64 GameData_21d28d0;
extern __int64 GameData_21d28d8;
extern __int64 GameData_21d28e8;
extern __int64 GameData_21d28f8;
extern __int64 GameData_21d2908;
extern __int64 GameData_21d2910;
extern __int64 GameData_21d2918;
extern __int64 GameData_21d2928;
extern __int64 GameData_21d2938;
extern __int64 GameData_21d2948;
extern __int64 GameData_21d2950;
extern __int64 GameData_21d2958;
extern __int64 GameData_21d2968;
extern __int64 GameData_21d2978;
extern __int64 GameData_21d2988;
extern __int64 GameData_21d2990;
extern __int64 GameData_21d2998;
extern __int64 GameData_21d29a8;
extern __int64 GameData_21d29b8;
extern __int64 GameData_21d29c8;
extern __int64 GameData_21d29d0;
extern __int64 GameData_21d29d8;
extern __int64 GameData_21d29e8;
extern __int64 GameData_21d29f8;
extern __int64 GameData_21d2a08;
extern __int64 GameData_21d2a10;
extern __int64 GameData_21d2a18;
extern __int64 GameData_21d2a28;
extern __int64 GameData_21d2a38;
extern __int64 GameData_21d2a50;
extern __int64 GameData_21d2a58;
extern __int64 GameData_21d2a60;
extern __int64 GameData_21d2a70;
extern __int64 GameData_21d2a80;
extern __int64 GameData_21d2a90;
extern __int64 GameData_21d2a98;
extern __int64 GameData_21d2aa0;
extern __int64 GameData_21d2ab0;
extern __int64 GameData_21d2ac0;
extern __int64 GameData_21d2ad0;
extern __int64 GameData_21d2ad8;
extern __int64 GameData_21d2ae0;
extern __int64 GameData_21d2af0;
extern __int64 GameData_21d2b00;
extern __int64 GameData_21d2b10;
extern __int64 GameData_21d2b18;
extern __int64 GameData_21d2b20;
extern __int64 GameData_21d2b30;
extern __int64 GameData_21d2b40;
extern __int64 GameData_21d2b50;
extern __int64 GameData_21d2b58;
extern __int64 GameData_21d2b60;
extern __int64 GameData_21d2b70;
extern __int64 GameData_21d2b80;
extern __int64 GameData_21d2b90;
extern __int64 GameData_21d2b98;
extern __int64 GameData_21d2ba0;
extern __int64 GameData_21d2bb0;
extern __int64 GameData_21d2bc0;
extern __int64 GameData_21d2d68;
extern __int64 GameData_21d2d70;
extern __int64 GameData_21d2d78;
extern __int64 GameData_21d2d88;
extern __int64 GameData_21d2d98;
extern __int64 GameData_21d2da8;
extern __int64 GameData_21d2db0;
extern __int64 GameData_21d2db8;
extern __int64 GameData_21d2dc8;
extern __int64 GameData_21d2dd8;
extern __int64 GameData_21d2de8;
extern __int64 GameData_21d2df0;
extern __int64 GameData_21d2df8;
extern __int64 GameData_21d2e08;
extern __int64 GameData_21d2e18;
extern __int64 GameData_21d2e28;
extern __int64 GameData_21d2e30;
extern __int64 GameData_21d2e38;
extern __int64 GameData_21d2e48;
extern __int64 GameData_21d2e58;
extern __int64 GameData_21d2e68;
extern __int64 GameData_21d2e70;
extern __int64 GameData_21d2e78;
extern __int64 GameData_21d2e88;
extern __int64 GameData_21d2e98;
extern __int64 GameData_21d2ea8;
extern __int64 GameData_21d2eb0;
extern __int64 GameData_21d2eb8;
extern __int64 GameData_21d2ec8;
extern __int64 GameData_21d2ed8;
extern __int64 GameData_21d2ef0;
extern __int64 GameData_21d2ef8;
extern __int64 GameData_21d2f00;
extern __int64 GameData_21d2f10;
extern __int64 GameData_21d2f20;
extern __int64 GameData_21d2f30;
extern __int64 GameData_21d2f38;
extern __int64 GameData_21d2f40;
extern __int64 GameData_21d2f50;
extern __int64 GameData_21d2f60;
extern __int64 GameData_21d2f70;
extern __int64 GameData_21d2f78;
extern __int64 GameData_21d2f80;
extern __int64 GameData_21d2f90;
extern __int64 GameData_21d2fa0;
extern __int64 GameData_21d2fb0;
extern __int64 GameData_21d2fb8;
extern __int64 GameData_21d2fc0;
extern __int64 GameData_21d2fd0;
extern __int64 GameData_21d2fe0;
extern __int64 GameData_21d2ff0;
extern __int64 GameData_21d2ff8;
extern __int64 GameData_21d3000;
extern __int64 GameData_21d3010;
extern __int64 GameData_21d3020;
extern __int64 GameData_21d3030;
extern __int64 GameData_21d3038;
extern __int64 GameData_21d3040;
extern __int64 GameData_21d3050;
extern __int64 GameData_21d3060;
extern __int64 GameData_21d3070;
extern __int64 GameData_21d3078;
extern __int64 GameData_21d3080;
extern __int64 GameData_21d3090;
extern __int64 GameData_21d30a0;
extern __int64 GameData_21d30b0;
extern __int64 GameData_21d30b8;
extern __int64 GameData_21d30c0;
extern __int64 GameData_21d30d0;
extern __int64 GameData_21d30e0;
extern __int64 GameData_21d30f0;
extern __int64 GameData_21d30f8;
extern __int64 GameData_21d3100;
extern __int64 GameData_21d3110;
extern __int64 GameData_21d3120;
extern __int64 GameData_21d3138;
extern __int64 GameData_21d3140;
extern __int64 GameData_21d3148;
extern __int64 GameData_21d3158;
extern __int64 GameData_21d3168;
extern __int64 GameData_21d3178;
extern __int64 GameData_21d3180;
extern __int64 GameData_21d3188;
extern __int64 GameData_21d3198;
extern __int64 GameData_21d31a8;
extern __int64 GameData_21d31b8;
extern __int64 GameData_21d31c0;
extern __int64 GameData_21d31c8;
extern __int64 GameData_21d31d8;
extern __int64 GameData_21d31e8;
extern __int64 GameData_21d31f8;
extern __int64 GameData_21d3200;
extern __int64 GameData_21d3208;
extern __int64 GameData_21d3218;
extern __int64 GameData_21d3228;
extern __int64 GameData_21d3238;
extern __int64 GameData_21d3240;
extern __int64 GameData_21d3248;
extern __int64 GameData_21d3258;
extern __int64 GameData_21d3268;
extern __int64 GameData_21d3278;
extern __int64 GameData_21d3280;
extern __int64 GameData_21d3288;
extern __int64 GameData_21d3298;
extern __int64 GameData_21d32a8;
extern __int64 GameData_21d32b8;
extern __int64 GameData_21d32c0;
extern __int64 GameData_21d32c8;
extern __int64 GameData_21d32d8;
extern __int64 GameData_21d32e8;
extern __int64 GameData_21d32f8;
extern __int64 GameData_21d3300;
extern __int64 GameData_21d3308;
extern __int64 GameData_21d3318;
extern __int64 GameData_21d3328;
extern __int64 GameData_21d3338;
extern __int64 GameData_21d3340;
extern __int64 GameData_21d3348;
extern __int64 GameData_21d3358;
extern __int64 GameData_21d3368;
extern __int64 GameData_21d3380;
extern __int64 GameData_21d3388;
extern __int64 GameData_21d3390;
extern __int64 GameData_21d33a0;
extern __int64 GameData_21d33b0;
extern __int64 GameData_21d33c0;
extern __int64 GameData_21d33c8;
extern __int64 GameData_21d33d0;
extern __int64 GameData_21d33e0;
extern __int64 GameData_21d33f0;
extern __int64 GameData_21d3400;
extern __int64 GameData_21d3408;
extern __int64 GameData_21d3410;
extern __int64 GameData_21d3420;
extern __int64 GameData_21d3430;
extern __int64 GameData_21d3440;
extern __int64 GameData_21d3448;
extern __int64 GameData_21d3450;
extern __int64 GameData_21d3460;
extern __int64 GameData_21d3470;
extern __int64 GameData_21d3480;
extern __int64 GameData_21d3488;
extern __int64 GameData_21d3490;
extern __int64 GameData_21d34a0;
extern __int64 GameData_21d34b0;
extern __int64 GameData_21d34c0;
extern __int64 GameData_21d34c8;
extern __int64 GameData_21d34d0;
extern __int64 GameData_21d34e0;
extern __int64 GameData_21d34f0;
extern __int64 GameData_21d3500;
extern __int64 GameData_21d3508;
extern __int64 GameData_21d3510;
extern __int64 GameData_21d3520;
extern __int64 GameData_21d3530;
extern __int64 GameData_21d3540;
extern __int64 GameData_21d3548;
extern __int64 GameData_21d3550;
extern __int64 GameData_21d3560;
extern __int64 GameData_21d3570;
extern __int64 GameData_21d3580;
extern __int64 GameData_21d3588;
extern __int64 GameData_21d3590;
extern __int64 GameData_21d35a0;
extern __int64 GameData_21d35b0;
extern __int64 GameData_21d4018;
extern __int64 GameData_21d4048;
extern __int64 GameData_21d6200;
extern __int64 GameData_21d6208;
extern __int64 GameData_21d6210;
extern __int64 GameData_21d6220;
extern __int64 GameData_21d6228;
extern __int64 GameData_21ec7c8;
extern __int64 GameData_21ed070;
extern __int64 GameData_21eea58;
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_map_Action_units_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char* GameData_1f970c0[5];
extern char GameData_1a9f09e;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern char GameData_21cfbe0;
extern char GameData_21cfc20;
extern char GameData_21cfc60;
extern char GameData_21cfca0;
extern char GameData_21cfce0;
extern char GameData_21d21e0;
extern char GameData_21d2220;
extern char GameData_21d2260;
extern char GameData_21d22a0;
extern char GameData_21d22e0;
extern char GameData_21d2320;
extern char GameData_21d2360;
extern char GameData_21d23a0;
extern char GameData_21d24f0;
extern char GameData_21d2530;
extern char GameData_21d2570;
extern char GameData_21d25b0;
extern char GameData_21d25f8;
extern char GameData_21d2638;
extern char GameData_21d2678;
extern char GameData_21d26b8;
extern char GameData_21d26f8;
extern char GameData_21d2738;
extern char GameData_21d2778;
extern char GameData_21d27b8;
extern char GameData_21d27f8;
extern char GameData_21d2838;
extern char GameData_21d2880;
extern char GameData_21d28c0;
extern char GameData_21d2900;
extern char GameData_21d2940;
extern char GameData_21d2980;
extern char GameData_21d29c0;
extern char GameData_21d2a00;
extern char GameData_21d2a48;
extern char GameData_21d2a88;
extern char GameData_21d2ac8;
extern char GameData_21d2b08;
extern char GameData_21d2b48;
extern char GameData_21d2b88;
extern char GameData_21d2d60;
extern char GameData_21d2da0;
extern char GameData_21d2de0;
extern char GameData_21d2e20;
extern char GameData_21d2e60;
extern char GameData_21d2ea0;
extern char GameData_21d2ee8;
extern char GameData_21d2f28;
extern char GameData_21d2f68;
extern char GameData_21d2fa8;
extern char GameData_21d2fe8;
extern char GameData_21d3028;
extern char GameData_21d3068;
extern char GameData_21d30a8;
extern char GameData_21d30e8;
extern char GameData_21d3130;
extern char GameData_21d3170;
extern char GameData_21d31b0;
extern char GameData_21d31f0;
extern char GameData_21d3230;
extern char GameData_21d3270;
extern char GameData_21d32b0;
extern char GameData_21d32f0;
extern char GameData_21d3330;
extern char GameData_21d3378;
extern char GameData_21d33b8;
extern char GameData_21d33f8;
extern char GameData_21d3438;
extern char GameData_21d3478;
extern char GameData_21d34b8;
extern char GameData_21d34f8;
extern char GameData_21d3538;
extern char GameData_21d3578;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_21cfa78;
extern int GameData_21cfa98[];
extern int GameData_21cfab8;
extern int GameData_21cfad8;
extern int GameData_21cfaf8;
extern int GameData_21cfb18;
extern int GameData_21cfb38;
extern int GameData_21cfb58;
extern int GameData_21cfb78;
extern int GameData_21cfb98;
extern int GameData_21cfbb8;
extern int GameData_21cfc00;
extern int GameData_21cfc10;
extern int GameData_21cfc40;
extern int GameData_21cfc50;
extern int GameData_21cfc80;
extern int GameData_21cfc90;
extern int GameData_21cfcc0;
extern int GameData_21cfcd0;
extern int GameData_21cfd00;
extern int GameData_21cfd10;
extern int GameData_21d2200;
extern int GameData_21d2210;
extern int GameData_21d2240;
extern int GameData_21d2250;
extern int GameData_21d2280;
extern int GameData_21d2290;
extern int GameData_21d22c0;
extern int GameData_21d22d0;
extern int GameData_21d2300;
extern int GameData_21d2310;
extern int GameData_21d2340;
extern int GameData_21d2350;
extern int GameData_21d2380;
extern int GameData_21d2390;
extern int GameData_21d23c0;
extern int GameData_21d23d0;
extern int GameData_21d2510;
extern int GameData_21d2520;
extern int GameData_21d2550;
extern int GameData_21d2560;
extern int GameData_21d2590;
extern int GameData_21d25a0;
extern int GameData_21d25d0;
extern int GameData_21d25e0;
extern int GameData_21d2618;
extern int GameData_21d2628;
extern int GameData_21d2658;
extern int GameData_21d2668;
extern int GameData_21d2698;
extern int GameData_21d26a8;
extern int GameData_21d26d8;
extern int GameData_21d26e8;
extern int GameData_21d2718;
extern int GameData_21d2728;
extern int GameData_21d2758;
extern int GameData_21d2768;
extern int GameData_21d2798;
extern int GameData_21d27a8;
extern int GameData_21d27d8;
extern int GameData_21d27e8;
extern int GameData_21d2818;
extern int GameData_21d2828;
extern int GameData_21d2858;
extern int GameData_21d2868;
extern int GameData_21d28a0;
extern int GameData_21d28b0;
extern int GameData_21d28e0;
extern int GameData_21d28f0;
extern int GameData_21d2920;
extern int GameData_21d2930;
extern int GameData_21d2960;
extern int GameData_21d2970;
extern int GameData_21d29a0;
extern int GameData_21d29b0;
extern int GameData_21d29e0;
extern int GameData_21d29f0;
extern int GameData_21d2a20;
extern int GameData_21d2a30;
extern int GameData_21d2a68;
extern int GameData_21d2a78;
extern int GameData_21d2aa8;
extern int GameData_21d2ab8;
extern int GameData_21d2ae8;
extern int GameData_21d2af8;
extern int GameData_21d2b28;
extern int GameData_21d2b38;
extern int GameData_21d2b68;
extern int GameData_21d2b78;
extern int GameData_21d2ba8;
extern int GameData_21d2bb8;
extern int GameData_21d2d80;
extern int GameData_21d2d90;
extern int GameData_21d2dc0;
extern int GameData_21d2dd0;
extern int GameData_21d2e00;
extern int GameData_21d2e10;
extern int GameData_21d2e40;
extern int GameData_21d2e50;
extern int GameData_21d2e80;
extern int GameData_21d2e90;
extern int GameData_21d2ec0;
extern int GameData_21d2ed0;
extern int GameData_21d2f08;
extern int GameData_21d2f18;
extern int GameData_21d2f48;
extern int GameData_21d2f58;
extern int GameData_21d2f88;
extern int GameData_21d2f98;
extern int GameData_21d2fc8;
extern int GameData_21d2fd8;
extern int GameData_21d3008;
extern int GameData_21d3018;
extern int GameData_21d3048;
extern int GameData_21d3058;
extern int GameData_21d3088;
extern int GameData_21d3098;
extern int GameData_21d30c8;
extern int GameData_21d30d8;
extern int GameData_21d3108;
extern int GameData_21d3118;
extern int GameData_21d3150;
extern int GameData_21d3160;
extern int GameData_21d3190;
extern int GameData_21d31a0;
extern int GameData_21d31d0;
extern int GameData_21d31e0;
extern int GameData_21d3210;
extern int GameData_21d3220;
extern int GameData_21d3250;
extern int GameData_21d3260;
extern int GameData_21d3290;
extern int GameData_21d32a0;
extern int GameData_21d32d0;
extern int GameData_21d32e0;
extern int GameData_21d3310;
extern int GameData_21d3320;
extern int GameData_21d3350;
extern int GameData_21d3360;
extern int GameData_21d3398;
extern int GameData_21d33a8;
extern int GameData_21d33d8;
extern int GameData_21d33e8;
extern int GameData_21d3418;
extern int GameData_21d3428;
extern int GameData_21d3458;
extern int GameData_21d3468;
extern int GameData_21d3498;
extern int GameData_21d34a8;
extern int GameData_21d34d8;
extern int GameData_21d34e8;
extern int GameData_21d3518;
extern int GameData_21d3528;
extern int GameData_21d3558;
extern int GameData_21d3568;
extern int GameData_21d3598;
extern int GameData_21d35a8;
extern int GameData_21d92e0;
extern int GameData_21fa960;
float Height_7c4d10(__int64, float, float);
float Unit_6c7fa0(__int64, __int64);
float Unit_6c7fa0_alt1(__int64, _OWORD*) __asm__("Unit_6c7fa0");
float fmodf(float, float);
long double Height_7c4d10_alt1(_QWORD, long double,
                               float) __asm__("Height_7c4d10");
long double UnitActor_81ba20_alt1(__int64) __asm__("UnitActor_81ba20");
unsigned __int64 GameRoutine_1130770(__int64, char*, __int64*);
unsigned __int64 UnitActor_81c000(unsigned __int64 result, _BYTE*);
unsigned __int64 game_map_BattleSide_GetHealPower(unsigned __int64 result);
unsigned __int8* GameRoutine_8f7c50(unsigned __int8* result, __int64, __int64);
void* BattleScenes_7a7840(__int64, char, _BYTE*, _BYTE*);
void Cursor_730b20(__int64, int, int);
void GameRoutine_6c7cb0(__int64, int, int);
void GameRoutine_6c7cb0_alt1(__int64, __int64,
                             __int64) __asm__("GameRoutine_6c7cb0");
void GameRoutine_759860(__int64*, __int64*, __int64*, __int64, char);
void GameRoutine_75a980(__int64*, __int64*, __int64*, __int64, char);
void GameRoutine_7c05a0(__int64, int, int);
void GameRoutine_7c0910(__int64, __int64);
void GameRoutine_a18d30(int*, int*, int*, int*, __int64*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6c1f60();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                   _QWORD) __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a250(const char*);
void game_9901c0();
void game_map_7823c0_alt1(unsigned int*, unsigned int*, _QWORD*,
                          unsigned __int64, unsigned int*,
                          signed __int64) __asm__("game_map_7823c0");
void game_map_7832e0_alt1(int*, int*, _QWORD*, unsigned __int64,
                          int*) __asm__("game_map_7832e0");
void game_map_783fa0_alt1(unsigned int*, unsigned int*, _QWORD*,
                          unsigned __int64, unsigned int*,
                          signed __int64) __asm__("game_map_783fa0");
void game_map_784ec0_alt1(int*, int*, _QWORD*, unsigned __int64,
                          int*) __asm__("game_map_784ec0");
void game_map_785b80_alt1(unsigned int*, unsigned int*, _QWORD*,
                          unsigned __int64, unsigned int*,
                          signed __int64) __asm__("game_map_785b80");
void game_map_786aa0_alt1(int*, int*, _QWORD*, unsigned __int64,
                          int*) __asm__("game_map_786aa0");
void snd_Fade_Fade_10c910(__int64, int);
void game_map_724ae0();
void game_map_726100();
__int64 game_map_726850(__int64 a1);
__int64 game_map_73c7c0(__int64 result, int a2, int a3, long double a4);
__attribute__((swiftcall)) void game_map_74d5a0(PSEUDO_X8 x8_, char* a1);
int* game_map_74db00(unsigned int a1);
__int64 game_map_74dcd0();
char* game_map_74e3e0(char* result, char* a2, _DWORD* a3, unsigned __int64 a4,
                      char* a5, __int64 a6);
__int64 game_map_752480(int a1, int a2, char a3);
__int64 game_map_758410(__int64 a1, __int64 a2, _DWORD* a3);
__int64 game_map_758760(__int64 a1);
__int64 game_map_758d40(__int64 result);
__int64 game_map_7596a0(__int64 result, int a2);
void game_map_75a370(__int64* a1, __int64* a2, __int64* a3, __int64* a4);
void game_map_75a4e0(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                     __int64* a5);
void game_map_75a5f0(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                     __int64* a5, __int64* a6);
bool game_map_75a760(__int64* a1, __int64* a2, __int64* a3);
void game_map_75b490(__int64* a1, __int64* a2, __int64* a3, __int64* a4);
void game_map_75b600(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                     __int64* a5);
void game_map_75b710(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                     __int64* a5, __int64* a6);
bool game_map_75b880(__int64* a1, __int64* a2, __int64* a3);
__int64 game_map_768a20(__int64 a1, __int64 a2, __int64 a3, _BYTE* a4,
                        unsigned __int8 a5, char* a6, __int64 a7, __n128 a8);
__int64 game_map_7693e0_alt1(__int64 a1, __int64 a2, int a3, int a4, char a5,
                             char* a6, char* a7) __asm__("game_map_7693e0");
__int64 game_map_769920(__int64 a1, __int64 a2, char a3, const char* a4,
                        long double a5, long double a6);
__int64 game_map_769b20(__int64 a1, __int64 a2, unsigned __int8 a3,
                        const char* a4, long double a5, long double a6);
__int64 game_map_769f40(__int64 a1, __int64 a2, _DWORD* a3, long double a4,
                        long double a5);
__int64 game_map_76a2e0(__int64 a1, __int64 a2);
__int64 game_map_76a520(__int64 a1, __int64 a2);
__int64 game_map_76a840(__int64 a1, __int64 a2);
__int64 game_map_76aaf0(__int64 a1, __int64 a2);
__int64 game_map_76b0c0(__int64 a1, __int64 a2);
__int64 game_map_76b8c0(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 game_map_76c260(__int64 a1, __int64 a2);
__int64 game_map_76ccf0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6);
void game_map_7823c0(int* a1, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5,
                     __int64 a6);
bool game_map_782c60(_QWORD* a1, int a2, int a3, long double a4);
void game_map_7832e0_alt2(int* a1, unsigned int* a2, _QWORD* a3,
                          unsigned __int64 a4, unsigned int* a5,
                          long double a6) __asm__("game_map_7832e0");
void game_map_783fa0(int* a1, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5,
                     __int64 a6);
bool game_map_784840(_QWORD* a1, int a2, int a3, long double a4);
void game_map_784ec0_alt2(int* a1, unsigned int* a2, _QWORD* a3,
                          unsigned __int64 a4, unsigned int* a5,
                          long double a6) __asm__("game_map_784ec0");
void game_map_785b80(int* a1, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5,
                     __int64 a6);
bool game_map_786420(_QWORD* a1, int a2, int a3, long double a4);
void game_map_786aa0_alt2(int* a1, unsigned int* a2, _QWORD* a3,
                          unsigned __int64 a4, unsigned int* a5,
                          long double a6) __asm__("game_map_786aa0");
__int64* game_map_78c100(__int64 a1);
__int64* game_map_78c700(__int64 a1);
__int64 game_map_790ba0(__int64 a1);
__int64 (***game_map_795820(unsigned __int8* a1, _DWORD* a2))(_QWORD);
__int64 game_map_799aa0(__int64 result, __int64 a2);
__int64 game_map_799b90(__int64 a1, __int64 a2);
unsigned __int64 game_map_799ca0(unsigned __int64 a1, __int64 a2);
__int64 game_map_79cbb0(__int64 a1);
__int64 game_map_79d190(__int64 a1);
bool game_map_79d430(__int64 a1);
__int64 game_map_7aaa60(__int64 result, _DWORD* a2);
__int64 game_map_7ca370(__int64 a1, int a2, int a3, __int64 a4);
__int64 (***game_map_812800(int a1, int a2))();
__int64 (***game_map_8129a0(int a1, int a2))();
__int64 (***game_map_812b00(__int64 a1))();
__int64* game_map_8235e0(__int64* result, __int64 a2, long double a3,
                         long double a4);
__int64 game_map_9664e0(__int64 a1);
void game_map_a18af0(int* a1, int* a2, int* a3, __int64* a4);
void game_map_a18eb0(int* a1, int* a2, int* a3, int* a4, int* a5, __int64* a6);
__int64 game_map_c8b980(__int64 a1, __int64 a2, __int64 a3);
__int64 game_map_c8baf0(__int64 a1);
void game_map_f06e20(__int64 a1);
__int64 game_map_f086e0(__int64 a1);
void game_map_f089a0(__int64 a1);
unsigned __int64* game_map_f0ee60(unsigned __int64* result, __int64 a2);
__int64 game_map_f15a60(__int64 a1);
__int64 game_map_f54910(__int64 a1);
long double game_map_f54d00(__int64 a1);
__int64 BattleInfo_795920_alt1(_QWORD, _QWORD,
                               _QWORD) __asm__("BattleInfo_795920");
__int64 BattleInfo_795b40(_QWORD, _QWORD);
__int64 BattleInfo_7960a0(_QWORD, _QWORD, _QWORD);
__int64 BattleInfo_79c6d0(_QWORD, _QWORD);
__int64 BattleInfo_79c7f0(_QWORD);
__int64 BattleInfo_79c940(_QWORD, _QWORD);
__int64 BattleInfo_79d030_alt1(_QWORD) __asm__("BattleInfo_79d030");
__int64 BattleInfo_7a3000(_QWORD);
__int64 BattleInfo_7a3110(_QWORD);
__int64 BattleScenes_7a7840_alt1(_QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("BattleScenes_7a7840");
__int64 BattleSide_79ff80(_QWORD);
__int64 BattleSide_7a0540(_QWORD, _QWORD);
__int64 BattleSide_7a13b0(_QWORD, _QWORD);
__int64 BattleSide_7a16a0(_QWORD, _QWORD);
__int64 BattleSide_7a2950(_QWORD);
__int64 GameRoutine_6fc470(void);
__int64 GameRoutine_7980c0(_QWORD, _QWORD);
__int64 GameRoutine_798350(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_799290_alt1(_QWORD) __asm__("GameRoutine_799290");
__int64 GameRoutine_7a3330(_QWORD);
__int64 GameRoutine_7a3440(_QWORD);
__int64 GameRoutine_7a76a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8ca760(_QWORD);
__int64 GameRoutine_8e3d20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_map_795820_alt1(_QWORD, _QWORD) __asm__("game_map_795820");
__int64 game_map_799ca0_alt1(_QWORD, _QWORD) __asm__("game_map_799ca0");
__int64 game_map_BattleSide_EachMaskSkill(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_map_BattleSide_GetForecastPower(_QWORD);
__int64 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
extern _DWORD GameData_1b3f5a8[5];
extern _UNKNOWN GameData_21d3f68;
extern _UNKNOWN GameData_21d40b8;
extern _UNKNOWN GameData_21d41b0;
extern __int64 (*GameData_1fab650[])();
extern __int64 GameData_21c99b8;
extern __int64 game_g_empty_item;
extern int GameData_21d3f60;
extern int GameData_21d97ec;
extern int GameData_21d97f0;
extern int GameData_21d97f4;
extern int GameData_21d97f8;
extern int game_g_shared_system_skills;
float sinf(float);
char* game_map_74efc0(char* a1, char* a2, char* a3);
__int64 game_map_7cb980(__int64 result, int a2, int a3, int a4, int a5);
_QWORD* BattleInfo_795b40_alt1(_QWORD* result, __int64,
                               _WORD*) __asm__("BattleInfo_795b40");
__int64 (***game_map_795820_alt2(unsigned __int8*,
                                 __int64))(_QWORD) __asm__("game_map_795820");
__int64 BattleInfo_79c6d0_alt1(__int64 result,
                               int) __asm__("BattleInfo_79c6d0");
__int64 BattleInfo_79c940_alt1(__int64,
                               unsigned int*) __asm__("BattleInfo_79c940");
__int64 BattleInfo_7a3000_alt1() __asm__("BattleInfo_7a3000");
__int64 BattleInfo_7a3110_alt1() __asm__("BattleInfo_7a3110");
__int64 BattleSide_79ff80_alt1(__int64) __asm__("BattleSide_79ff80");
__int64 BattleSide_7a0540_alt1(_QWORD*, __int64) __asm__("BattleSide_7a0540");
__int64 BattleSide_7a13b0_alt1(__int64, int) __asm__("BattleSide_7a13b0");
__int64 BattleSide_7a16a0_alt1(__int64,
                               unsigned int*) __asm__("BattleSide_7a16a0");
__int64 BattleSide_7a2950_alt1(_QWORD*) __asm__("BattleSide_7a2950");
__int64 GameHr_79c7f0(__int64);
__int64 GameHr_7a27a0(_QWORD*);
__int64 GameHr_7a76a0(__int64, __int64, __int64);
__int64 GameRoutine_10a4c70_alt1(__int64 result, unsigned int,
                                 unsigned int) __asm__("GameRoutine_10a4c70");
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64
GameRoutine_6fc470_alt1(__int64, _QWORD*,
                        unsigned __int16*) __asm__("GameRoutine_6fc470");
__int64 GameRoutine_7980c0_alt1(__int64, __int64) __asm__("GameRoutine_7980c0");
__int64 GameRoutine_798350_alt1(__int64, __int64,
                                __int64) __asm__("GameRoutine_798350");
__int64 GameRoutine_7a3330_alt1(_QWORD*) __asm__("GameRoutine_7a3330");
__int64 GameRoutine_7a3440_alt1(_QWORD*) __asm__("GameRoutine_7a3440");
__int64 GameRoutine_8ca760_alt1(__int64 result) __asm__("GameRoutine_8ca760");
__int64 GameRoutine_8e3d20_alt1(__int64 result, unsigned __int64, __int64,
                                char) __asm__("GameRoutine_8e3d20");
__int64 IRoute_751ba0_alt1(__int64 result, __int64, unsigned int,
                           unsigned int) __asm__("IRoute_751ba0");
__int64 ProcInst_657850_alt2(__int64, __int64, const char*, char,
                             __int64) __asm__("ProcInst_657850");
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
__int64 game_map_799ca0_alt2(__int64, __int64) __asm__("game_map_799ca0");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt2(__int64) __asm__("nn_os_UnlockMutex");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
extern _QWORD GameData_21d40b8_alt1[] __asm__("GameData_21d40b8");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void BattleInfo_795920_alt2(__int64, _DWORD*, __int64,
                            __int64) __asm__("BattleInfo_795920");
void BattleInfo_7960a0_alt1(__int64, unsigned __int8,
                            unsigned int*) __asm__("BattleInfo_7960a0");
void CharacterBuilder_1084780_alt2(__int64) __asm__("CharacterBuilder_1084780");
void GameHr_6c7cb0(__int64, int, int);
void GameHr_759860(__int64*, __int64*, __int64*, __int64, char);
void GameRoutine_7c05a0_alt1(__int64) __asm__("GameRoutine_7c05a0");
void Image_72a260_alt2(__int64) __asm__("Image_72a260");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_map_7823c0_alt2(int*, int*, _QWORD*, unsigned __int64, int*,
                          signed __int64) __asm__("game_map_7823c0");
void game_map_783fa0_alt2(int*, int*, _QWORD*, unsigned __int64, int*,
                          signed __int64) __asm__("game_map_783fa0");
void game_map_785b80_alt2(int*, int*, _QWORD*, unsigned __int64, int*,
                          signed __int64) __asm__("game_map_785b80");
void game_map_BattleSide_EachMaskSkill_alt1(
    __int64, _DWORD*, char,
    __int64) __asm__("game_map_BattleSide_EachMaskSkill");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 game_map_7693e0(__int64 a1, __int64 a2, int a3, int a4, char a5,
                        const char* a6, const char* a7);
void game_map_7832e0(int* a1, int* a2, _QWORD* a3, unsigned __int64 a4,
                     int* a5);
void game_map_784ec0(int* a1, int* a2, _QWORD* a3, unsigned __int64 a4,
                     int* a5);
void game_map_786aa0(int* a1, int* a2, _QWORD* a3, unsigned __int64 a4,
                     int* a5);

void game_map_724ae0()
{
  __int64 v0;
  __int64 v1;
  int v2;
  int v3;
  char v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int128 v13;
  __n128 v14;
  __int64* v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  char v23;
  __int64 v24;
  __int64 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;

  if (GameData_21eea58 != 0 && *(_BYTE*)(GameData_21eea58 + 32) == 1) {
    v0 = *(_QWORD*)GameData_212d038[0];
    v1 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
    v2 = *(_DWORD*)(v1 + 8);
    v3 = *(_DWORD*)(v1 + 12);
    *(_BYTE*)(v0 + 81) = 1;
    if (v2 == *(_DWORD*)(v0 + 148) && v3 == *(_DWORD*)(v0 + 152)) {
      v5 = 0;
    }
    else {
      *(_DWORD*)(v0 + 148) = v2;
      *(_DWORD*)(v0 + 152) = v3;
      v5 = 1;
    }
    *(_BYTE*)(v0 + 80) = v5;
    game_map_fe96c0(v0);
    v9 = GameData_212cfc8[0];
    if (*GameData_212cfc8[0] != 0) {
      v10 = *(_QWORD*)(v0 + 24);
      v11 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
      *(_QWORD*)&v28 = *(_QWORD*)(v0 + 16);
      *((_QWORD*)&v28 + 1) = v10;
      Camera_7bfc60(v11, &v28);
      if (*v9 != 0) {
        Camera_7c0d80(*(_QWORD*)(*v9 + 432));
      }
    }
    return;
  }
  if (game_GameModeData_instance_ == 0) {
    return;
  }
  v6 = *(_QWORD*)(game_GameModeData_instance_ + 16);
  if (v6 == 0) {
    return;
  }
  v7 = GameData_212cfc0[0];
  Cursor_730e40(*(_QWORD*)(*GameData_212cfc0[0] + 48),
                *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL));
  v8 = *(_QWORD*)(*v7 + 48);
  if (*(float*)(v8 + 28) == *(float*)(v8 + 24)) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(v8 + 16) + 16LL))((void*)&v28, v8 + 16);
  }
  else {
    v12 = *(_QWORD*)(v8 + 72);
    *(_QWORD*)&v28 = *(_QWORD*)(v8 + 64);
    *((_QWORD*)&v28 + 1) = v12;
  }
  DWORD1(v13) = DWORD1(v28);
  *(float*)&v13 =
      (float)((float)((float)(int)(float)((float)(*(float*)&v28 +
                                                  0x1.4000000000000p+10f) *
                                          0x1.99999a0000000p-3f) *
                      5.0f) +
              2.5f) +
      -0x1.4000000000000p+10f;
  *((_QWORD*)&v13 + 1) = COERCE_UNSIGNED_INT(
      (float)((float)((float)(int)(float)((float)(*((float*)&v28 + 2) +
                                                  0x1.4000000000000p+10f) *
                                          0x1.99999a0000000p-3f) *
                      5.0f) +
              2.5f) +
      -0x1.4000000000000p+10f);
  v26 = v13;
  v28 = v13;
  Cursor_734a80(v8 + 16, &v28);
  v27 = v26;
  v14 = Cursor_734a80(v8 + 80, &v27);
  *(_DWORD*)(v8 + 172) = 0;
  *(_QWORD*)(v8 + 176) = 0;
  v15 = GameData_212cfc8[0];
  LANES128(v14).n128_u16[0] = *(_WORD*)(v6 + 134);
  v16 = (float)LANES128(v14).n128_u32[0];
  v17 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  *(float*)&v28 = v16;
  if (*(_BYTE*)(v17 + 40) == 1) {
    (*(void (**)(__int64, float, float))(*(_QWORD*)(v17 + 16) + 24LL))(
        v17 + 16, v16, v16);
    *(_DWORD*)(v17 + 24) = 0;
  LABEL_22:
    *(_DWORD*)(v17 + 28) = 0;
    *(_WORD*)(v17 + 40) = 256;
    goto LABEL_23;
  }
  if (*(float*)(v17 + 24) > 0x1.8000000000000p-1f ||
      ((*(__int64 (**)(__int64, __int128*, __int64))(
           *(_QWORD*)(v17 + 16) + 8LL))(v17 + 16, &v28, v17 + 48) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v17 + 16) + 16LL))(v17 + 16);
    (*(void (**)(__int64))(*(_QWORD*)(v17 + 16) + 24LL))(v17 + 16);
    *(_DWORD*)(v17 + 24) = 1061158912;
    goto LABEL_22;
  }
LABEL_23:
  Camera_7c0d80(*(_QWORD*)(*v15 + 432));
  v18 = *(_QWORD*)GameData_212d038[0];
  v19 = *(_QWORD*)(*v7 + 48);
  v20 = *(_DWORD*)(v19 + 8);
  v21 = *(_DWORD*)(v19 + 12);
  *(_BYTE*)(v18 + 81) = 1;
  if (v20 == *(_DWORD*)(v18 + 148) && v21 == *(_DWORD*)(v18 + 152)) {
    v23 = 0;
  }
  else {
    *(_DWORD*)(v18 + 148) = v20;
    *(_DWORD*)(v18 + 152) = v21;
    v23 = 1;
  }
  *(_BYTE*)(v18 + 80) = v23;
  game_map_fe96c0(v18);
  if (*v15 != 0) {
    v24 = *(_QWORD*)(v18 + 24);
    v25 = *(_QWORD*)(*v15 + 432);
    *(_QWORD*)&v28 = *(_QWORD*)(v18 + 16);
    *((_QWORD*)&v28 + 1) = v24;
    Camera_7bfc60(v25, &v28);
    if (*v15 != 0) {
      Camera_7c0d80(*(_QWORD*)(*v15 + 432));
    }
  }
  if (*(_QWORD*)GameData_212c7d8[0] != 0) {
    game_graphics_ObjectTransparent_Run(*(_QWORD*)GameData_212c7d8[0], 1);
  }
}

void game_map_726100()
{
  __int64 v0;
  struct {
    _QWORD v1[4];
    _QWORD* v2;
  } v1_;

  game_9901c0();
  if ((*(_BYTE*)(GameData_21ca2f8 + 21) & 2) != 0 &&
      *(_DWORD*)(*(_QWORD*)(GameData_21ca300 + 160) + 528LL) == 0) {
    v1_.v1[0] = GameData_1fb2478;
    v1_.v2 = v1_.v1;
    game_9903e0((__int64)v1_.v1);
    if (v1_.v2 == v1_.v1) {
      v0 = 32;
    }
    else {
      if (v1_.v2 == nullptr) {
        return;
      }
      v0 = 40;
    }
    (*(void (**)(__int64))(*v1_.v2 + v0))((__int64)v1_.v2);
  }
}

__int64 game_map_726850(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  char v6;

  result = GameRoutine_718280();
  if ((result & 1) != 0) {
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v3, "MID_3_ISM_GameOver_e01", nullptr);
    v4 = *(_QWORD*)(a1 + 40);
    if (v4 != 0) {
      *(_QWORD*)(v4 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "talk::Seq";
    *(_QWORD*)(v3 + 32) = a1;
    *(_DWORD*)(v3 + 140) = game_HashString32((__int64)"talk::Seq");
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    *(_QWORD*)(v3 + 8) = &GameData_216de68;
    *(_QWORD*)(v3 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3);
    if ((result & 1) != 0 && (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
    v5 = *(_BYTE**)(v3 + 32);
    v6 = v5[138];
    if (v6 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v5 + 64LL))(*(_QWORD*)(v3 + 32));
      v6 = v5[138];
    }
    v5[138] = v6 + 1;
    *(_WORD*)(v3 + 136) |= 2u;
  }
  return result;
}

__int64 game_map_73c7c0(__int64 result, int a2, int a3, long double a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  float v20;
  __int128 v21;
  __int128 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int128 v26;

  if (result != 0) {
    v4 = *(_QWORD*)(result + 440);
    if (v4 == 0 || *(unsigned __int8*)(v4 + 16) > 3u) {
      *(_BYTE*)(result + 1981) = 0;
      goto LABEL_11;
    }
    *(_BYTE*)(result + 584) = a2;
    *(_BYTE*)(result + 585) = a3;
    v5 = GameData_21ca240;
    v6 = GameData_21ca248;
    if (GameData_21ca240 == GameData_21ca248) {
      *(_BYTE*)(result + 1981) = 0;
    LABEL_23:
      v13 = *(_QWORD*)(result + 8);
      if (v13 != 0) {
        goto LABEL_24;
      }
    LABEL_11:
      Image_72b4a0(*(_QWORD*)(GameData_21ca300 + 96));
      v10 = *(_QWORD*)(GameData_21ca300 + 96);
      Image_72b4a0(v10);
      return Image_72b6c0(v10);
    }
    v7 = GameData_21ca240;
    do {
      v8 = *(_QWORD*)v7;
      if (a2 == *(char*)(*(_QWORD*)v7 + 54LL) && a3 == *(char*)(v8 + 55)) {
        v9 = *(_BYTE*)(v8 + 292);
        goto LABEL_14;
      }
      v7 += 8;
    } while (v7 != GameData_21ca248);
    v9 = 0;
  LABEL_14:
    *(_BYTE*)(result + 1981) = v9;
    while (1) {
      v11 = *(_QWORD*)v5;
      if (a2 == *(char*)(*(_QWORD*)v5 + 54LL) && a3 == *(char*)(v11 + 55)) {
        break;
      }
      v5 += 8;
      if (v5 == v6) {
        goto LABEL_23;
      }
    }
    v12 = *(unsigned __int8*)(v11 + 57);
    if (v12 > 5) {
      if (*(unsigned __int8*)(v11 + 57) > 8u) {
        if (v12 == 9) {
          LODWORD(a4) = 1124532224;
          goto LABEL_45;
        }
        if (v12 == 12) {
          LODWORD(a4) = 1110704128;
          goto LABEL_45;
        }
      }
      else {
        if (v12 == 6) {
          LODWORD(a4) = 1134395392;
          goto LABEL_45;
        }
        if (v12 == 8) {
          LODWORD(a4) = 1119092736;
          goto LABEL_45;
        }
      }
    }
    else {
      if (*(unsigned __int8*)(v11 + 57) <= 1u) {
        if (*(_BYTE*)(v11 + 57) != 0) {
          LODWORD(a4) = 1127481344;
          goto LABEL_45;
        }
        goto LABEL_23;
      }
      if (v12 == 2) {
        LODWORD(a4) = 1132920832;
        goto LABEL_45;
      }
      if (v12 == 3) {
        LODWORD(a4) = 1130430464;
        goto LABEL_45;
      }
    }
    *(_QWORD*)&a4 = 0;
  LABEL_45:
    v23 = result;
    UnitActor_81ab40(result, a4, 0.0);
    result = v23;
    v13 = *(_QWORD*)(v23 + 8);
    if (v13 == 0) {
      goto LABEL_11;
    }
  LABEL_24:
    v14 = *(char*)(v13 + 584);
    if ((v14 & 0x80000000) == 0) {
      v15 = *(char*)(v13 + 585);
      if ((v15 & 0x80000000) == 0) {
        v16 = *(_DWORD*)(v13 + 592);
        v17 = v14 | 0x100;
        v18 = v15 | 0x100;
        v19 = result;
        v20 = (float)(unsigned int)(v16 - 1) * 2.5;
        if (v16 <= 0) {
          v20 = 0.0;
        }
        *(_QWORD*)&v21 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v17 * 5.0) + 2.5) +
                    -0x1.4000000000000p+10) +
            v20);
        v24 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v18 * 5.0) + 2.5) +
                    -0x1.4000000000000p+10) +
            v20);
        *(float*)&v25 = (float)((float)((float)((float)v17 * 5.0) + 2.5) +
                                -0x1.4000000000000p+10) +
                        v20;
        *((_QWORD*)&v21 + 1) = v24;
        v26 = v21;
        *(_QWORD*)&v22 = __PAIR64__(
            COERCE_UNSIGNED_INT(Unit_6c7fa0(v13, (__int64)&v26)), v25);
        *((_QWORD*)&v22 + 1) = v24;
        v26 = v22;
        Cursor_734a80_alt1(v19 + 48, (__int64*)&v26);
        UnitActor_81ba20(v19);
        result = v19;
      }
    }
    if (*(_QWORD*)(result + 264) != 0) {
      CharacterBuilder_1084780();
    }
    goto LABEL_11;
  }
  return result;
}

__attribute__((swiftcall)) void game_map_74d5a0(PSEUDO_X8 x8_, char* a1)
{
  _OWORD* a2 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  float v3;
  float v4;
  float v5;
  __int128 v6;
  float v7;
  float v8;

  v3 = (float)((float)((float)(unsigned int)(*a1 + 256) *
                       0x1.4000000000000p+2f) +
               0x1.4000000000000p+1f) +
       -0x1.4000000000000p+10f;
  v4 = (float)((float)((float)(unsigned int)(a1[1] + 256) *
                       0x1.4000000000000p+2f) +
               0x1.4000000000000p+1f) +
       -0x1.4000000000000p+10f;
  if (GameData_21ca2e8 != 0) {
    v7 = (float)((float)((float)(unsigned int)(*a1 + 256) *
                         0x1.4000000000000p+2f) +
                 0x1.4000000000000p+1f) +
         -0x1.4000000000000p+10f;
    v8 = (float)((float)((float)(unsigned int)(a1[1] + 256) *
                         0x1.4000000000000p+2f) +
                 0x1.4000000000000p+1f) +
         -0x1.4000000000000p+10f;
    v5 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456), v7, v4);
    v3 = v7;
    v4 = v8;
  }
  else {
    v5 = 0x0.0p+0f;
  }
  *(_QWORD*)&v6 = __PAIR64__(LODWORD(v5), LODWORD(v3));
  *((_QWORD*)&v6 + 1) = LODWORD(v4);
  *a2 = v6;
}

int* game_map_74db00(unsigned int a1)
{
  int v2;
  unsigned int v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21cfbd8,
                            memory_order_acquire) &
       1) == 0) {
    v3 = a1;
    v2 = __cxa_guard_acquire(&GameData_21cfbd8);
    a1 = v3;
    if (v2 != 0) {
      GameData_21cfab8 = 0;
      GameData_21cfa98[0] = 0;
      GameData_21cfac0 = 0;
      GameData_21cfac8 = 0;
      GameData_21cfad0 = 0;
      GameData_21cfaa0 = 0;
      GameData_21cfaa8 = 0;
      GameData_21cfab0 = 0;
      GameRoutine_74d660((__int64)&GameData_21cfab8, 1, 0, 0);
      GameData_21cfad8 = 0;
      GameData_21cfae0 = 0;
      GameData_21cfae8 = 0;
      GameData_21cfaf0 = 0;
      GameRoutine_74d660((__int64)&GameData_21cfad8, 2, 0, 0);
      GameData_21cfaf8 = 0;
      GameData_21cfb00 = 0;
      GameData_21cfb08 = 0;
      GameData_21cfb10 = 0;
      GameRoutine_74d660((__int64)&GameData_21cfaf8, 3, 0, 0);
      GameData_21cfb18 = 0;
      GameData_21cfb20 = 0;
      GameData_21cfb28 = 0;
      GameData_21cfb30 = 0;
      GameRoutine_74d660((__int64)&GameData_21cfb18, 4, 0, 0);
      GameData_21cfb38 = 0;
      GameData_21cfb40 = 0;
      GameData_21cfb48 = 0;
      GameData_21cfb50 = 0;
      GameRoutine_74d660((__int64)&GameData_21cfb38, 5, 0, 0);
      GameData_21cfb58 = 0;
      GameData_21cfb60 = 0;
      GameData_21cfb68 = 0;
      GameData_21cfb70 = 0;
      GameRoutine_74d660((__int64)&GameData_21cfb58, 6, 0, 0);
      GameData_21cfb78 = 0;
      GameData_21cfb80 = 0;
      GameData_21cfb88 = 0;
      GameData_21cfb90 = 0;
      GameRoutine_74d660((__int64)&GameData_21cfb78, 7, 0, 0);
      GameData_21cfb98 = 0;
      GameData_21cfba0 = 0;
      GameData_21cfba8 = 0;
      GameData_21cfbb0 = 0;
      GameRoutine_74d660((__int64)&GameData_21cfb98, 8, 0, 0);
      GameData_21cfbb8 = 0;
      GameData_21cfbc0 = 0;
      GameData_21cfbc8 = 0;
      GameData_21cfbd0 = 0;
      GameRoutine_74d660((__int64)&GameData_21cfbb8, 9, 0, 0);
      GameRoutine_2b0();
      __cxa_guard_release(&GameData_21cfbd8);
      a1 = v3;
    }
  }
  if (a1 >= 0xA) {
    return &GameData_21cfa78;
  }
  else {
    return &GameData_21cfa98[8 * a1];
  }
}

__int64 game_map_74dcd0()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = fw_memory_g_heap_manager_ptr;
  if (GameData_21cfbc0 != 0) {
    GameData_21cfbc8 = GameData_21cfbc0;
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, GameData_21cfbc0);
  }
  if (GameData_21cfba0 != 0) {
    GameData_21cfba8 = GameData_21cfba0;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v3, GameData_21cfba0);
  }
  if (GameData_21cfb80 != 0) {
    GameData_21cfb88 = GameData_21cfb80;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v4, GameData_21cfb80);
  }
  if (GameData_21cfb60 != 0) {
    GameData_21cfb68 = GameData_21cfb60;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v5, GameData_21cfb60);
  }
  if (GameData_21cfb40 != 0) {
    GameData_21cfb48 = GameData_21cfb40;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v6, GameData_21cfb40);
  }
  if (GameData_21cfb20 != 0) {
    GameData_21cfb28 = GameData_21cfb20;
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v7, GameData_21cfb20);
  }
  if (GameData_21cfb00 != 0) {
    GameData_21cfb08 = GameData_21cfb00;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v8, GameData_21cfb00);
  }
  if (GameData_21cfae0 != 0) {
    GameData_21cfae8 = GameData_21cfae0;
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v9 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v9, GameData_21cfae0);
  }
  if (GameData_21cfac0 != 0) {
    GameData_21cfac8 = GameData_21cfac0;
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v10 = 56;
    }
    result =
        nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v10, GameData_21cfac0);
  }
  if (GameData_21cfaa0 != 0) {
    GameData_21cfaa8 = GameData_21cfaa0;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v11, GameData_21cfaa0);
  }
  return result;
}

char* game_map_74e3e0(char* result, char* a2, _DWORD* a3, unsigned __int64 a4,
                      char* a5, __int64 a6)
{
  int v6;
  int v7;
  int v8;
  char* v9;
  __int64 v10;
  char* v11;
  char* v12;
  int v13;
  int v14;
  char* v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  char* v20;
  int v21;
  unsigned __int64 v22;
  unsigned __int64 v24;
  char* v25;
  char* v29;
  char* v32;
  char* v33;
  char* v34;
  char* v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  bool v39;
  char* v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  int v45;

  if (a4 >= 2) {
    if (a4 == 2) {
      v6 = a3[1];
      v7 = *a3 - *(a2 - 4);
      if (v7 * v7 + (v6 - *(a2 - 3)) * (v6 - *(a2 - 3)) <
          (unsigned int)((*a3 - *result) * (*a3 - *result) +
                         (v6 - result[1]) * (v6 - result[1]))) {
        v8 = *(_DWORD*)result;
        *(_DWORD*)result = *((_DWORD*)a2 - 1);
        *((_DWORD*)a2 - 1) = v8;
      }
    }
    else if ((__int64)a4 > 128) {
      v22 = a4 >> 1;
      v24 = a4 - (a4 >> 1);
      if ((__int64)a4 <= a6) {
        v29 = result;
        v32 = a5;
        GameRoutine_74e6e0((__int64)result, &result[4 * v22], a3, a4 >> 1, a5);
        v33 = &v32[4 * v22];
        result =
            (char*)GameRoutine_74e6e0((__int64)&v29[4 * v22], a2, a3, v24, v33);
        v34 = &v32[4 * a4];
        v35 = v33;
        while (v35 != v34) {
          v36 = a3[1];
          v37 = (*a3 - *v35) * (*a3 - *v35) + (v36 - v35[1]) * (v36 - v35[1]);
          v38 = (*a3 - *v32) * (*a3 - *v32) + (v36 - v32[1]) * (v36 - v32[1]);
          v39 = v37 >= v38;
          if (v37 >= v38) {
            v40 = v32;
          }
          else {
            v40 = v35;
          }
          if (v39) {
            v41 = 4;
          }
          else {
            v41 = 0;
          }
          v42 = *(_DWORD*)v40;
          v32 += v41;
          if (v39) {
            v43 = 0;
          }
          else {
            v43 = 4;
          }
          v35 += v43;
          *(_DWORD*)v29 = v42;
          v29 += 4;
          if (v32 == v33) {
            while (v35 != v34) {
              v45 = *(_DWORD*)v35;
              v35 += 4;
              *(_DWORD*)v29 = v45;
              v29 += 4;
            }
            return result;
          }
        }
        while (v32 != v33) {
          v44 = *(_DWORD*)v32;
          v32 += 4;
          *(_DWORD*)v29 = v44;
          v29 += 4;
        }
      }
      else {
        v25 = result;
        game_map_74e3e0(result, &result[4 * v22], a3, a4 >> 1, a5, a6);
        game_map_74e3e0(&v25[4 * v22], a2, a3, v24, a5, a6);
        return game_map_74eb00(v25, &v25[4 * v22], a2, a3, v22, v24, a5, a6);
      }
    }
    else if (result != a2) {
      v9 = result + 4;
      if (result + 4 != a2) {
        v10 = 0;
        v11 = result;
        do {
          v13 = a3[1];
          v14 = v11[4];
          v15 = v9;
          v16 = v11[5];
          if ((*a3 - v14) * (*a3 - v14) + (v13 - v16) * (v13 - v16) <
              (unsigned int)((*a3 - *v11) * (*a3 - *v11) +
                             (v13 - v11[1]) * (v13 - v11[1]))) {
            v17 = (unsigned __int8)v11[6];
            v18 = (unsigned __int8)v11[7];
            v19 = v10;
            do {
              v20 = &result[v19];
              *(_DWORD*)&result[v19 + 4] = *(_DWORD*)&result[v19];
              if (v19 == 0) {
                v12 = result;
                goto LABEL_11;
              }
              v21 = a3[1];
              v19 -= 4;
            } while ((*a3 - v14) * (*a3 - v14) + (v21 - v16) * (v21 - v16) <
                     (unsigned int)((*a3 - *(v20 - 4)) * (*a3 - *(v20 - 4)) +
                                    (v21 - *(v20 - 3)) * (v21 - *(v20 - 3))));
            v12 = &result[v19 + 4];
          LABEL_11:
            *(_DWORD*)v12 = (unsigned __int8)v14 | ((unsigned __int8)v16 << 8) |
                            (v17 << 16) | (v18 << 24);
          }
          v9 = v15 + 4;
          v10 += 4;
          v11 = v15;
        } while (v15 + 4 != a2);
      }
    }
  }
  return result;
}

char* game_map_74eb00(char* result, char* a2, char* a3, _DWORD* a4, __int64 a5,
                      __int64 a6, char* a7, __int64 a8)
{
  int v10;
  int v11;
  __int64 v12;
  __int64 i;
  char* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  char* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  int v24;
  int v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  unsigned __int64 v30;
  char* v31;
  int v32;
  int v33;
  char* v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  char* v39;
  __int64 v40;
  char* v41;
  char* v42;
  char* v43;
  int v44;
  int v45;
  unsigned int v46;
  unsigned int v47;
  bool v48;
  char* v49;
  char* v50;
  char* v51;
  char v52;
  char* v53;
  int v54;
  unsigned int v55;
  unsigned int v56;
  bool v57;
  char* v58;
  __int64 v59;
  int v60;
  __int64 v61;
  int v62;
  __int64 v63;
  int v64;
  char* v65;
  int v66;
  __int64 v67;
  char* v68;
  char* v69;
  _DWORD* v70;

  if (a6 != 0) {
    while (a5 > a8 && a6 > a8) {
      if (a5 == 0) {
        return result;
      }
      v10 = *a4;
      v11 = a4[1];
      v12 = -a5;
      for (i = 0;; i += 4) {
        v14 = &result[i];
        v15 = v11 - result[i + 1];
        if ((v10 - *a2) * (v10 - *a2) + (v11 - a2[1]) * (v11 - a2[1]) <
            (unsigned int)((v10 - result[i]) * (v10 - result[i]) + v15 * v15)) {
          break;
        }
        v48 = __CFADD__(v12++, 1);
        if (v48) {
          return result;
        }
      }
      v16 = -v12;
      v68 = a3;
      v69 = a7;
      v70 = a4;
      v67 = a8;
      if (-v12 >= a6) {
        if (v12 == -1) {
          v62 = *(_DWORD*)&result[i];
          *(_DWORD*)&result[i] = *(_DWORD*)a2;
          *(_DWORD*)a2 = v62;
          return result;
        }
        v27 = v16 / 2;
        v20 = &result[4 * (v16 / 2) + i];
        if (a3 == a2) {
          v18 = a3;
          v35 = a3;
        }
        else {
          v28 = (a3 - a2) >> 2;
          v18 = a2;
          do {
            v30 = v28 >> 1;
            v31 = &v18[4 * (v28 >> 1)];
            v32 = *v31;
            v33 = v31[1];
            v34 = v31 + 4;
            v28 += ~(v28 >> 1);
            v29 = a4[1];
            if ((*a4 - v32) * (*a4 - v32) + (v29 - v33) * (v29 - v33) <
                (unsigned int)((v29 - v20[1]) * (v29 - v20[1]) +
                               (*a4 - *v20) * (*a4 - *v20))) {
              v18 = v34;
            }
            else {
              v28 = v30;
            }
          } while (v28 != 0);
          v35 = a2;
        }
        v17 = (v18 - v35) >> 2;
      }
      else {
        v17 = a6 / 2;
        v18 = &a2[4 * (a6 / 2)];
        if (v14 == a2) {
          v20 = a2;
          v19 = a2;
        }
        else {
          v19 = &result[i];
          v20 = &result[i];
          v21 = (a2 - result - i) >> 2;
          do {
            v22 = v21 >> 1;
            v23 = &v20[4 * (v21 >> 1)];
            v24 = *v23;
            v25 = v23[1];
            v26 = v23 + 4;
            v21 += ~(v21 >> 1);
            if ((v11 - v18[1]) * (v11 - v18[1]) + (v10 - *v18) * (v10 - *v18) <
                (unsigned int)((v10 - v24) * (v10 - v24) +
                               (v11 - v25) * (v11 - v25))) {
              v21 = v22;
            }
            else {
              v20 = v26;
            }
          } while (v21 != 0);
        }
        v27 = (v20 - v19) >> 2;
      }
      v36 = a6 - v17;
      v37 = a6;
      a5 = -(v27 + v12);
      v38 = game_map_74efc0(v20, a2, v18);
      v39 = v38;
      if (v27 + v17 >= v37 - (v27 + v17) - v12) {
        a7 = v69;
        game_map_74eb00(v38, v18, v68, v70, a5, v36, v69, v67);
        v18 = v20;
        a4 = v70;
        v36 = v17;
        a8 = v67;
        a5 = v27;
        a3 = v39;
      }
      else {
        a7 = v69;
        game_map_74eb00(v14, v20, v38, v70, v27, v17, v69, v67);
        a3 = v68;
        a8 = v67;
        a4 = v70;
        v14 = v39;
      }
      a6 = v36;
      result = v14;
      a2 = v18;
      if (v36 == 0) {
        return result;
      }
    }
    if (a5 <= a6) {
      if (result != a2) {
        v50 = a7;
        v51 = result;
        do {
          *v50 = *v51;
          v50[1] = v51[1];
          v50[2] = v51[2];
          v52 = v51[3];
          v51 += 4;
          v50[3] = v52;
          v50 += 4;
        } while (v51 != a2);
        v53 = v50 - 4;
        while (a2 != a3) {
          v54 = a4[1];
          v55 = (*a4 - *a2) * (*a4 - *a2) + (v54 - a2[1]) * (v54 - a2[1]);
          v56 = (*a4 - *a7) * (*a4 - *a7) + (v54 - a7[1]) * (v54 - a7[1]);
          v57 = v55 >= v56;
          if (v55 >= v56) {
            v58 = a7;
          }
          else {
            v58 = a2;
          }
          if (v57) {
            v59 = 0;
          }
          else {
            v59 = 4;
          }
          v60 = *(_DWORD*)v58;
          a2 += v59;
          if (v57) {
            v61 = 4;
          }
          else {
            v61 = 0;
          }
          a7 += v61;
          *(_DWORD*)result = v60;
          result += 4;
          if (v50 == a7) {
            return result;
          }
        }
        v65 = a7 - 4;
        do {
          v66 = *((_DWORD*)v65 + 1);
          v65 += 4;
          *(_DWORD*)result = v66;
          result += 4;
        } while (v53 != v65);
      }
    }
    else if (a2 != a3) {
      v40 = 0;
      do {
        v41 = &a2[v40];
        v42 = &a7[v40];
        v40 += 4;
        *v42 = *v41;
        v42[1] = v41[1];
        v42[2] = v41[2];
        v42[3] = v41[3];
      } while (v41 + 4 != a3);
      v43 = &a7[v40];
      while (a2 != result) {
        v44 = *a4;
        v45 = a4[1];
        v46 = (v44 - *(v43 - 4)) * (v44 - *(v43 - 4)) +
              (v45 - *(v43 - 3)) * (v45 - *(v43 - 3));
        v47 = (v44 - *(a2 - 4)) * (v44 - *(a2 - 4)) +
              (v45 - *(a2 - 3)) * (v45 - *(a2 - 3));
        v48 = v46 >= v47;
        if (v46 >= v47) {
          v49 = v43;
        }
        else {
          v49 = a2;
        }
        if (v48) {
          v43 -= 4;
        }
        else {
          a2 -= 4;
        }
        *((_DWORD*)a3 - 1) = *((_DWORD*)v49 - 1);
        a3 -= 4;
        if (v43 == a7) {
          return result;
        }
      }
      if (a7 != v43) {
        v63 = -4;
        do {
          v64 = *((_DWORD*)v43 - 1);
          v43 -= 4;
          *(_DWORD*)&a3[v63] = v64;
          v63 -= 4;
        } while (v43 != a7);
      }
    }
  }
  return result;
}

char* game_map_74efc0(char* a1, char* a2, char* a3)
{
  char* v3;
  char* v4;
  char* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  bool v11;
  int v12;
  unsigned __int64 v14;
  int v15;
  char* v16;
  char* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  int v22;
  int v23;
  char* v24;
  char* v25;
  char* v26;
  char* v27;
  __int64 v28;
  bool v29;
  char v30;
  __int64 v31;

  if (a1 == a2) {
    return a3;
  }
  v3 = a2;
  if (a2 == a3) {
    return a1;
  }
  v4 = a1 + 4;
  if (a1 + 4 == v3) {
    v12 = *(_DWORD*)a1;
    v14 = ((a3 - a1) & 0xFFFFFFFFFFFFFFFCLL) - 4;
    memmove(a1, v4, v14);
    v3 = &a1[v14];
    *(_DWORD*)&a1[v14] = v12;
  }
  else {
    v5 = v3 + 4;
    if (v3 + 4 == a3) {
      v16 = a3 - 4;
      v15 = *((_DWORD*)a3 - 1);
      v3 = a3;
      if (a1 != a3 - 4) {
        v17 = a3 - 4;
        do {
          v18 = *((_DWORD*)v17 - 1);
          v17 -= 4;
          v3 -= 4;
          *(_DWORD*)v16 = v18;
          v16 = v17;
        } while (v17 != a1);
      }
      *(_DWORD*)a1 = v15;
    }
    else {
      v6 = v3 - a1;
      v7 = (char*)(a3 - v3);
      v8 = (v3 - a1) >> 2;
      v9 = (a3 - v3) >> 2;
      if (v8 == v9) {
        do {
          v10 = *((_DWORD*)v4 - 1);
          *((_DWORD*)v4 - 1) = *((_DWORD*)v5 - 1);
          *((_DWORD*)v5 - 1) = v10;
          if (v4 == v3) {
            break;
          }
          v4 += 4;
          v11 = v5 == a3;
          v5 += 4;
        } while (!v11);
      }
      else {
        v19 = (v3 - a1) >> 2;
        do {
          v20 = v19;
          v19 = v9;
          v9 = v20 % v9;
        } while (v9 != 0);
        if (4 * v19 != 0) {
          v21 = &a1[4 * v19];
          do {
            v23 = *((_DWORD*)v21 - 1);
            v21 -= 4;
            v22 = v23;
            v24 = &v21[v6];
            v25 = v21;
            do {
              v26 = v24;
              *(_DWORD*)v25 = *(_DWORD*)v24;
              v27 = &v24[v6];
              v28 = (a3 - v24) >> 2;
              v29 = __OFSUB__(v8, v28);
              v31 = v8 - v28;
              v30 = (v31 < 0) ^ v29;
              v24 = &a1[4 * v31];
              if (v30) {
                v24 = v27;
              }
              v25 = v26;
            } while (v24 != v21);
            *(_DWORD*)v26 = v22;
          } while (v21 != a1);
        }
        return &a1[(_QWORD)v7];
      }
    }
  }
  return v3;
}

__int64 game_map_752480(int a1, int a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned int v10;
  __int64 v11;
  float v12;
  float v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  signed __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  __int64 v30;
  int v31;
  float v32;
  __int64* v34;
  __int64 v35;
  float v36;
  __int64 v37;
  __int64 v38;
  char v39;
  __int64 v40;

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
  if (GameData_21ca300 == 0) {
    return 0;
  }
  LODWORD(v3) = a1 + 32 * a2;
  v3 = (unsigned int)v3 >= 0x400 ? 0LL : (unsigned int)v3;
  v5 = *(_QWORD*)(GameData_21ca300 + 96) + v3;
  v6 = *(unsigned __int8*)(v5 + 8);
  if (*(_BYTE*)(v5 + 8) != 0 && ((v7 = *(_QWORD*)(GameData_21ca310 + 56) +
                                       2224LL * *(unsigned __int8*)(v5 + 8),
                                  v8 = v7 - 2224, v6 <= 0xFA)
                                     ? (v9 = v7 == 2224)
                                     : (v9 = true),
                                 !v9 && *(_QWORD*)(v7 - 1832) != 0 &&
                                     (*(_BYTE*)(v7 - 1807) & 0x1C) == 0)) {
    v38 = *(_QWORD*)(v7 - 1784);
    v10 = v38 != 0 ? *(unsigned __int8*)(v38 + 16) : 9;
  }
  else {
    v8 = 0;
    v10 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  }
  v11 = GameData_21cd140;
  if (GameData_21cd140 == 0) {
    return 0;
  }
  if (v8 != 0) {
    GameRoutine_7c0910(GameData_21cd140, v8),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    GameRoutine_7c05a0_alt1(GameData_21cd140),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v13 = v12;
  v14 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 24LL * v10 + 556000);
  if (v14 == 0) {
    return 0;
  }
  v39 = a3;
  v15 = nullptr;
  v16 = nullptr;
  v17 = 0;
  v18 = game_g_shared_system_skills_ptr;
  do {
    while (1) {
      v19 = v14;
      v14 = *(_QWORD*)(v14 + 432);
      if ((*(_WORD*)(v19 + 416) & 0x1C01) == 0) {
        LODWORD(v40) =
            *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x11CLL) + v18 + 4) & 0xFFF;
        if ((game_HasSkill((_QWORD*)(v19 + 1744), (unsigned int*)&v40) & 1) ==
            0) {
          LODWORD(v40) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v18) & 0xFFF;
          if ((game_HasSkill((_QWORD*)(v19 + 1744), (unsigned int*)&v40) & 1) ==
              0) {
            if (*(_WORD*)(v19 + 492) != 0) {
              break;
            }
            if (*(_BYTE*)(v19 + 496) != 0) {
              break;
            }
            LODWORD(v40) =
                *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v18) & 0xFFF;
            if ((game_HasSkill((_QWORD*)(v19 + 1744), (unsigned int*)&v40) &
                 1) == 0) {
              break;
            }
          }
        }
      }
    LABEL_20:
      if (v14 == 0) {
        goto LABEL_44;
      }
    }
    if ((unsigned __int64)v16 >= v17) {
      v20 = (char*)v16 - (char*)v15;
      v21 = v16 - v15;
      v22 = v21 + 1;
      if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
        GameRoutine_6c1f60(),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      if ((__int64)(v17 - (_QWORD)v15) >> 2 > v22) {
        v22 = (__int64)(v17 - (_QWORD)v15) >> 2;
      }
      if (v17 - (unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
        v23 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v23 = v22;
      }
      if (v23 != 0) {
        if (v23 >> 61 != 0) {
          GameRoutine_60a210(),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v24 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v24 = 0;
      }
      v17 = v24 + 8 * v23;
      v25 = (char*)v16 - (char*)v15;
      v26 = v24 + v20 - 8 * v21;
      *(_QWORD*)(v24 + v20) = v19;
      v16 = (__int64*)(v24 + v20 + 8);
      memcpy_alt1(v26, (__int64)v15, v25),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v15 != nullptr) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v15),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v15 = (__int64*)v26;
      goto LABEL_20;
    }
    *v16++ = v19;
  } while (v14 != 0);
LABEL_44:
  if (v16 == v15) {
    v31 = 0;
  }
  else {
    v28 = 2 * __clz(v16 - v15);
    if ((v39 & 1) != 0) {
      v40 = v11;
      GameHr_759860(v15, v16, &v40, v28 ^ 0x7E, 1),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
      v29 = v15;
      while (1) {
        v30 = *v29++;
        v14 = v30;
        v31 = 1;
        GameRoutine_7c0910(v11, v30),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v32 < v13) {
          break;
        }
        if (v29 == v16) {
          goto LABEL_58;
        }
      }
    }
    else {
      v40 = v11;
      GameRoutine_75a980(v15, v16, &v40, v28 ^ 0x7E, 1),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
      v34 = v15;
      while (1) {
        v35 = *v34++;
        v14 = v35;
        v31 = 1;
        GameRoutine_7c0910(v11, v35),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v36 > v13) {
          break;
        }
        if (v34 == v16) {
        LABEL_58:
          v14 = *v15;
          goto LABEL_59;
        }
      }
    }
  }
  if (v15 != nullptr) {
  LABEL_59:
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, (__int64)v15),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v31 != 0) {
      return v14;
    }
    return 0;
  }
  if (v31 == 0) {
    return 0;
  }
  return v14;
}

__int64 game_map_758410(__int64 a1, __int64 a2, _DWORD* a3)
{

#pragma clang fp contract(off)
  int v6;
  int v7;
  unsigned __int64 v8;
  __int128 v9;
  unsigned int v11;
  unsigned int v12;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v29;
  struct {
    _BYTE v30[32];
    _BYTE* v31;
  } v30_;
  struct {
    _QWORD v32[4];
    _QWORD* v33;
  } v32_;

  if (a2 == 0) {
    return 0;
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v7 = 2)
           : (v7 = 3),
       (v7 & v6) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_18;
    }
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
    if (*((float*)&v9 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v8 + 160) + 16LL))(
                        v8 + 160, *((float*)&v9 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_18:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21cfd20,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21cfd20) != 0) {
        GameData_21cfbe8 = 0;
        GameData_21cfbf0 = (__int64)GameRoutine_75bac0;
        GameData_21cfbe0 = 13;
        GameData_21cfc60 = 13;
        GameData_21cfca0 = 13;
        GameData_21cfbf8 = 0;
        GameData_21cfc00 = 0;
        GameData_21cfc08 = 0;
        GameData_21cfc10 = 0;
        GameData_21cfc18 = 0;
        GameData_21cfc38 = 0;
        GameData_21cfc40 = 0;
        GameData_21cfc48 = 0;
        GameData_21cfc50 = 0;
        GameData_21cfc58 = 0;
        GameData_21cfc20 = 14;
        GameData_21cfc78 = 0;
        GameData_21cfc80 = 0;
        GameData_21cfc88 = 0;
        GameData_21cfc90 = 0;
        GameData_21cfc98 = 0;
        GameData_21cfca8 = 0;
        GameData_21cfcb0 = (__int64)GameRoutine_75bce0;
        GameData_21cfcb8 = 0;
        GameData_21cfcc0 = 0;
        GameData_21cfcc8 = 0;
        GameData_21cfc28 = 0;
        GameData_21cfc30 = (__int64)GameRoutine_75bbc0;
        GameData_21cfcd0 = 0;
        GameData_21cfcd8 = 0;
        GameData_21cfce0 = 0;
        GameData_21cfd08 = 0;
        GameData_21cfd10 = 0;
        GameData_21cfd18 = 0;
        GameData_21cfd00 = 0;
        GameData_21cfcf0 = 0;
        GameData_21cfcf8 = 0;
        GameData_21cfce8 = 0;
        GameData_21cfc68 = 0;
        GameData_21cfc70 = (__int64)GameRoutine_75bc60;
        __cxa_guard_release(&GameData_21cfd20);
      }
      v19 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
      v20 = GameData_212c608[0];
      *(_QWORD*)(v19 + 96) = 0;
      *(_QWORD*)(v19 + 104) = 0;
      *(_QWORD*)(v19 + 112) = 0;
      *(_QWORD*)(v19 + 120) = 0;
      *(_QWORD*)(v19 + 128) = 0;
      *(_WORD*)(v19 + 136) = 0;
      *(_QWORD*)(v19 + 16) = 0;
      *(_QWORD*)(v19 + 24) = "NULL";
      *(_QWORD*)(v19 + 138) = 0;
      *(_QWORD*)(v19 + 144) = 0;
      *(_QWORD*)(v19 + 32) = 0;
      *(_QWORD*)(v19 + 40) = 0;
      *(_QWORD*)(v19 + 48) = 0;
      *(_QWORD*)(v19 + 56) = 0;
      *(_QWORD*)(v19 + 64) = 0;
      *(_QWORD*)(v19 + 72) = 0;
      *(_QWORD*)(v19 + 80) = 0;
      *(_QWORD*)(v19 + 88) = 0;
      *(_QWORD*)v19 = v20 + 16;
      *(_QWORD*)(v19 + 8) = 0;
      game_ProcInst_Register(v19);
      *(_QWORD*)(v19 + 152) = a2;
      *(_QWORD*)v19 = game_map_ProcSummon_vtable;
      v21 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*a3 & 0xFFF));
      *(_QWORD*)(v19 + 176) = 0;
      *(_QWORD*)(v19 + 184) = 0;
      *(_QWORD*)(v19 + 160) = v21;
      *(_QWORD*)(v19 + 168) = 0;
      return ProcInst_657850(v19, (__int64)&GameData_21cfbe0,
                             (__int64)"ProcSummon", 1, a1);
    }
  }
  v11 = *(char*)(a2 + 584);
  v12 = *(char*)(a2 + 585);
  v30_.v31 = nullptr;
  v32_.v32[0] = GameData_1f955a0;
  v32_.v32[1] = v30_.v30;
  v32_.v33 = v32_.v32;
  GameRoutine_757f60(a2, a3, v11, v12, (__int64)v32_.v32);
  if (v32_.v33 == v32_.v32) {
    v18 = 32;
  }
  else {
    if (v32_.v33 == nullptr) {
      goto LABEL_22;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v32_.v33 + v18))((__int64)v32_.v33);
LABEL_22:
  v22 = *GameData_212ce98[0];
  v23 = *(_QWORD**)(*GameData_212ce98[0] + 96);
  Image_72b4a0_alt1((__int64)v23);
  Image_72b6c0_alt1(v23);
  Image_72a260(*(_QWORD*)(v22 + 152));
  if (v30_.v31 == v30_.v30) {
    v29 = 32;
  }
  else {
    if (v30_.v31 == nullptr) {
      return 0;
    }
    v29 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v30_.v31 + v29))((__int64)v30_.v31);
  return 0;
}

__int64 game_map_758760(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  int v33;
  char v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  char v38;
  __int64* v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v45;
  char v46;
  int v47;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_14;
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
    v6 = true;
  }
  else {
  LABEL_14:
    v6 = *GameData_21309c8[0] != 0 && *(_BYTE*)(*GameData_21309c8[0] + 8) == 2;
  }
  v47 = 15;
  v7 = game_UnitPool_GetFirst(&v47);
  if (v7 == 0) {
    v11 = 0;
    return v11 & 1;
  }
  v8 = *(_QWORD*)(v7 + 432);
  v9 = v7;
  if (v8 == 0) {
    v8 = *(_QWORD*)(v7 + 440);
    if (v8 != 0) {
      v10 = *(unsigned __int8*)(v8 + 16);
      if (v10 < 9) {
        v45 = 24LL * *(unsigned __int8*)(v8 + 16) + 556024;
        while (1) {
          if (v10 <= 2) {
            v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v45);
            if (v8 != 0) {
              break;
            }
          }
          ++v10;
          v45 += 24;
          if (v10 == 9) {
            goto LABEL_21;
          }
        }
      }
      else {
      LABEL_21:
        v8 = 0;
      }
    }
  }
  v46 = v6;
  v11 = 0;
  v12 = nullptr;
  v13 = 0;
  v14 = nullptr;
  v15 = GameData_212c880[0];
  v16 = (__int64*)fw_memory_g_heap_manager_ptr;
  while (1) {
  LABEL_24:
    v17 = v8;
    if (*(_BYTE*)(v9 + 2089) == 0) {
      goto LABEL_31;
    }
    v18 = game_UnitPool_Get((_BYTE*)(v9 + 2089));
    if (v18 != nullptr && v18[49] != 0) {
      v19 = v18[55];
      if (v19 != 0 && *(unsigned __int8*)(v19 + 16) < 4u) {
        goto LABEL_31;
      }
    }
    if ((unsigned __int64)v14 < v13) {
      *v14++ = v9;
      v11 = 1;
    LABEL_31:
      v20 = *(unsigned __int16*)(v9 + 1964);
      if (*(_WORD*)(v9 + 1964) == 0) {
        goto LABEL_52;
      }
    LABEL_48:
      v29 = *(_QWORD*)(*(_QWORD*)(*v15 + 64) + 8 * v20);
      if (v29 != 0 && (unsigned int)*(unsigned __int8*)(v29 + 105) - 3 <= 1) {
        v30 = *(char*)(v9 + 584);
        v31 = *(char*)(v9 + 585);
        v32 = v30 - *(unsigned __int8*)(v9 + 1960);
        v33 = v31 - *(unsigned __int8*)(v9 + 1961);
        if (((v33 * v33) | (v32 * v32)) != 0) {
          v11 = 1;
          *(_BYTE*)(v9 + 1960) = v30;
          v34 = *(_BYTE*)(v9 + 1962);
          *(_BYTE*)(v9 + 1961) = v31;
          *(_BYTE*)(v9 + 1962) = v34 + v32;
          *(_BYTE*)(v9 + 1963) += v33;
        }
      }
      goto LABEL_52;
    }
    v21 = (char*)((char*)v14 - (char*)v12);
    v22 = v14 - v12;
    v23 = v22 + 1;
    if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
      GameRoutine_6c1f60();
    }
    if ((__int64)(v13 - (_QWORD)v12) >> 2 > v23) {
      v23 = (__int64)(v13 - (_QWORD)v12) >> 2;
    }
    if (v13 - (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v23;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v25 = fw_memory_HeapManager_Allocate(*v16, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v13 = v25 + 8 * v24;
    v26 = (char*)((char*)v14 - (char*)v12);
    v27 = (__int64)&v21[v25 + -8 * v22];
    *(_QWORD*)&v21[v25] = v9;
    v14 = (__int64*)&v21[v25 + 8];
    memcpy(v27, v12, v26);
    if (v12 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*v16 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*v16 + v28, v12);
    }
    v11 = 1;
    v12 = (__int64*)v27;
    v20 = *(unsigned __int16*)(v9 + 1964);
    if (*(_WORD*)(v9 + 1964) != 0) {
      goto LABEL_48;
    }
  LABEL_52:
    if (v17 == 0) {
      break;
    }
    v8 = *(_QWORD*)(v17 + 432);
    v9 = v17;
    if (v8 == 0) {
      v35 = *(_QWORD*)(v17 + 440);
      v9 = v17;
      if (v35 != 0) {
        v36 = *(unsigned __int8*)(v35 + 16);
        v8 = 0;
        v9 = v17;
        if (v36 <= 8) {
          v37 = 24LL * (unsigned int)v36 + 556024;
          while (1) {
            if (v36 <= 2) {
              v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v37);
              if (v8 != 0) {
                break;
              }
            }
            ++v36;
            v37 += 24;
            if (v36 == 9) {
              v8 = 0;
              v9 = v17;
              goto LABEL_24;
            }
          }
          v9 = v17;
        }
      }
    }
  }
  if (v14 != v12) {
    v38 = v46;
    if (a1 == 0) {
      v38 = 1;
    }
    if ((v38 & 1) != 0) {
      v39 = v12;
      do {
        v40 = *v39++;
        MapUtil_757430(v40);
      } while (v39 != v14);
    }
    else {
      v41 = v12;
      do {
        v42 = *v41++;
        game_map_76aaf0(a1, v42);
      } while (v41 != v14);
    }
  }
  if (v12 != nullptr) {
    v43 = 128;
    if (*(_QWORD*)(*v16 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*v16 + v43, v12);
  }
  return v11 & 1;
}

__int64 game_map_758d40(__int64 result)
{
  char* v1;
  char* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  bool v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  char** v20;
  __int64 v21;
  char* v22;
  char* v23;
  char* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  int v34;
  int v35;
  int v36;
  unsigned int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v43;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  bool v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  unsigned int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  unsigned int v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  __int64 v75;
  int v76;
  int v77;
  int v78;
  unsigned int v79;
  int v80;
  int v81;
  int v82;
  int v84;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  unsigned int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  unsigned int v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  char* v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64 v116;
  char v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  char** v120;
  char* v121;
  int v122;
  char* v123;
  unsigned __int64 v124;

  v1 = *(char**)result;
  v2 = *(char**)(result + 8);
  v120 = (char**)result;
  v3 = (__int64)&v2[-*(_QWORD*)result] >> 3;
  v4 = v3 - 2;
  if (v3 >= 2) {
    if (&v2[-*(_QWORD*)result] == (char*)((_UNKNOWN**)0x8LL)) {
      v5 = 0;
      v6 = 0;
    }
    else {
      v7 = *((_QWORD*)v1 + 1);
      v8 = *(_QWORD*)v1 == 0 || v7 == 0;
      if (v8) {
        v5 = -1;
      }
      else {
        result = EscapeMenuItem_752b40(
            *(char*)(*(_QWORD*)v1 + 584LL), *(char*)(*(_QWORD*)v1 + 585LL),
            *(_DWORD*)(*(_QWORD*)v1 + 592LL), *(_DWORD*)(*(_QWORD*)v1 + 592LL),
            *(char*)(v7 + 584), *(char*)(v7 + 585), *(_DWORD*)(v7 + 592),
            *(_DWORD*)(v7 + 592));
        v5 = result;
      }
      if (v3 - 3 > 0xFFFFFFFFFFFFFFFDLL) {
        v6 = v5;
      }
      else {
        v9 = (__int64*)(v1 + 16);
        v6 = v5;
        do {
          v10 = v7;
          v11 = *v9++;
          v7 = v11;
          result = 0xFFFFFFFFLL;
          if (v10 != 0 && v7 != 0) {
            result = EscapeMenuItem_752b40(
                *(char*)(v10 + 584), *(char*)(v10 + 585), *(_DWORD*)(v10 + 592),
                *(_DWORD*)(v10 + 592), *(char*)(v7 + 584), *(char*)(v7 + 585),
                *(_DWORD*)(v7 + 592), *(_DWORD*)(v7 + 592));
          }
          v5 += result;
          if (v6 <= (int)result) {
            v6 = result;
          }
          --v4;
        } while (v4 != 0);
      }
    }
    do {
      if (v2 - v1 == 8) {
        return result;
      }
      v12 = 8;
      v13 = 1;
      v116 = 0;
      v14 = 0;
      v117 = 0;
      do {
        v17 = v2 - v1;
        v15 = v14 + 1;
        v16 = (v2 - v1) >> 3;
        if (v16 > v14 + 1) {
          v18 = 1;
          v118 = v14;
          v113 = v14 + 1;
          v114 = v13;
          v19 = v5;
          v115 = v12;
          v122 = v6;
          while (1) {
            v119 = v16;
            if (v2 == v1) {
              v22 = nullptr;
              v23 = nullptr;
            }
            else {
              if (v17 < 0) {
                goto LABEL_197;
              }
              v22 = (char*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
              v23 = &v22[v17];
              result = memcpy(v22, v1, v17);
            }
            v121 = v2;
            if (v13 != v118) {
              v24 = &v22[v12];
              v25 = 1;
              v26 = v18;
              v27 = &v22[v116];
              do {
                v28 = *(_QWORD*)v27;
                --v26;
                *(_QWORD*)v27 = *(_QWORD*)v24;
                v27 += 8;
                *(_QWORD*)v24 = v28;
                v24 -= 8;
              } while (v25++ < v26);
            }
            v30 = v23 - v22;
            v123 = v23;
            v124 = (v23 - v22) >> 3;
            if (v23 - v22 != 8) {
              break;
            }
            v5 = 0;
            v6 = 0;
          LABEL_167:
            if (v5 < v19 || v5 == v19 && v6 < v122) {
              v20 = v120;
              v107 = (__int64)v120[2];
              if (v30 <= v107 - (__int64)v1) {
                if (v124 <= v119) {
                  if (v123 != v22) {
                    result = memmove(v1, v22, v30);
                  }
                  v2 = &v1[v30];
                }
                else {
                  v112 = v121;
                  if (v121 != v1) {
                    result = memmove(v1, v22, v17);
                    v112 = v120[1];
                  }
                  if (v123 != &v22[v17]) {
                    result = memmove(v112, &v22[v17], v123 - &v22[v17]);
                  }
                  v2 = &v112[v123 - &v22[v17]];
                }
              }
              else {
                if (v1 != nullptr) {
                  v120[1] = v1;
                  v108 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v108 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v108, v1);
                  v107 = 0;
                  v120[1] = nullptr;
                  v120[2] = nullptr;
                  *v120 = nullptr;
                }
                if (v124 >> 61 != 0) {
                  goto LABEL_197;
                }
                v109 = v107 >> 2;
                if (v107 >> 2 <= v124) {
                  v109 = v124;
                }
                v110 = (unsigned __int64)v107 >= 0x7FFFFFFFFFFFFFF8LL
                           ? 0x1FFFFFFFFFFFFFFFLL
                           : v109;
                if (v110 >> 61 != 0) {
                LABEL_197:
                  GameRoutine_6c1f60();
                }
                result = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v110, 16, 0);
                v111 = result;
                *v120 = (char*)result;
                v120[2] = (char*)(result + 8 * v110);
                if (v123 != v22) {
                  result = memcpy(result, v22, v30);
                }
                v2 = (char*)(v111 + v30);
                v20 = v120;
              }
              v20[1] = v2;
              v117 = 1;
              if (v22 == nullptr) {
                goto LABEL_30;
              }
            LABEL_27:
              v21 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v21 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v22);
              v2 = v20[1];
              goto LABEL_30;
            }
            v5 = v19;
            v6 = v122;
            v20 = v120;
            v2 = v121;
            if (v22 != nullptr) {
              goto LABEL_27;
            }
          LABEL_30:
            v1 = *v20;
            ++v13;
            ++v18;
            v12 += 8;
            v122 = v6;
            v19 = v5;
            v17 = v2 - v1;
            v16 = (v2 - v1) >> 3;
            if (v16 <= v13) {
              v13 = v114;
              v12 = v115;
              v15 = v113;
              v16 = (v2 - v1) >> 3;
              goto LABEL_23;
            }
          }
          v32 = *(_QWORD*)v22;
          v31 = *((_QWORD*)v22 + 1);
          if (*(_QWORD*)v22 == 0 || v31 == 0) {
            v5 = -1;
            goto LABEL_102;
          }
          v34 = *(_DWORD*)(v32 + 592);
          v35 = *(_DWORD*)(v31 + 592);
          v36 = *(char*)(v32 + 584);
          v37 = v34 * v34;
          v38 = *(char*)(v32 + 585);
          v39 = *(char*)(v31 + 584);
          v40 = *(char*)(v31 + 585);
          v41 = v35 * v35;
          if (v35 * v35 * v34 * v34 < 2) {
            v55 = v39 - v36;
            if (v55 < 0) {
              v55 = -v55;
            }
            v56 = v40 - v38;
            if (v56 < 0) {
              v56 = -v56;
            }
            v5 = v56 + v55;
          }
          else {
            if (v37 == 1 && v41 >= 2) {
              if (v35 >= 1) {
                v57 = v35 + v40;
                v58 = v35 + v39;
                v59 = -v36;
                v5 = 10000;
                do {
                  v60 = v40 - v38;
                  v61 = *(char*)(v31 + 584);
                  if (v40 - v38 < 0) {
                    v60 = v38 - v40;
                  }
                  do {
                    v62 = v59 + v61;
                    v52 = v59 + v61++ < 0;
                    if (v52) {
                      v62 = -v62;
                    }
                    v63 = v62 + v60;
                    if (v63 < v5) {
                      v5 = v63;
                    }
                  } while (v61 < v58);
                  ++v40;
                } while (v40 < v57);
                goto LABEL_102;
              }
            LABEL_101:
              v5 = 10000;
              goto LABEL_102;
            }
            v43 = v34 + v38;
            if (v37 >= 2 && v41 == 1) {
              if (v34 < 1) {
                goto LABEL_101;
              }
              v64 = v34 + v36;
              v65 = v39 - v36;
              v5 = 10000;
              do {
                v66 = v40 - v38;
                v67 = v65;
                v68 = v36;
                if (v40 - v38 < 0) {
                  v66 = v38 - v40;
                }
                do {
                  ++v68;
                  if (v67 >= 0) {
                    v69 = v67;
                  }
                  else {
                    v69 = -v67;
                  }
                  --v67;
                  v70 = v69 + v66;
                  if (v70 < v5) {
                    v5 = v70;
                  }
                } while (v68 < v64);
                ++v38;
              } while (v38 < v43);
            }
            else {
              if (v34 < 1 || v35 < 1) {
                goto LABEL_101;
              }
              v45 = v34 + v36;
              v46 = v35 + v40;
              v47 = v35 + v39;
              v5 = 10000;
              do {
                v48 = -v36;
                LODWORD(result) = v36;
                do {
                  v49 = *(char*)(v31 + 585);
                  do {
                    v50 = v49 - v38;
                    v51 = *(char*)(v31 + 584);
                    if (v49 - v38 < 0) {
                      v50 = v38 - v49;
                    }
                    do {
                      v53 = v48 + v51;
                      v52 = v48 + v51++ < 0;
                      if (v52) {
                        v53 = -v53;
                      }
                      v54 = v53 + v50;
                      if (v54 < v5) {
                        v5 = v54;
                      }
                    } while (v51 < v47);
                    ++v49;
                  } while (v49 < v46);
                  result = (unsigned int)(result + 1);
                  --v48;
                } while ((int)result < v45);
                ++v38;
              } while (v38 < v43);
            }
          }
        LABEL_102:
          if (v124 - 3 > 0xFFFFFFFFFFFFFFFDLL) {
            v6 = v5;
            goto LABEL_167;
          }
          v71 = 1;
          v6 = v5;
          while (2) {
            v75 = v31;
            v74 = -1;
            v31 = *(_QWORD*)&v22[8 * v71 + 8];
            if (v75 != 0 && v31 != 0) {
              v76 = *(_DWORD*)(v75 + 592);
              v77 = *(_DWORD*)(v31 + 592);
              v78 = *(char*)(v75 + 584);
              v79 = v76 * v76;
              v80 = *(char*)(v75 + 585);
              v81 = *(char*)(v31 + 584);
              v82 = *(char*)(v31 + 585);
              result = (unsigned int)(v77 * v77);
              if ((int)result * v76 * v76 < 2) {
                v72 = v81 - v78;
                if (v81 - v78 < 0) {
                  v72 = v78 - v81;
                }
                v73 = v82 - v80;
                if (v73 < 0) {
                  v73 = -v73;
                }
                v74 = v73 + v72;
              }
              else {
                if (v79 == 1 && (int)result >= 2) {
                  if (v77 >= 1) {
                    v95 = v77 + v82;
                    v96 = v77 + v81;
                    v97 = -v78;
                    v74 = 10000;
                    do {
                      LODWORD(result) = v82 - v80;
                      v98 = *(char*)(v31 + 584);
                      if (v82 - v80 >= 0) {
                        result = (unsigned int)result;
                      }
                      else {
                        result = (unsigned int)(v80 - v82);
                      }
                      do {
                        v99 = v97 + v98;
                        v52 = v97 + v98++ < 0;
                        if (v52) {
                          v99 = -v99;
                        }
                        v100 = v99 + result;
                        if (v100 < v74) {
                          v74 = v100;
                        }
                      } while (v98 < v96);
                      ++v82;
                    } while (v82 < v95);
                    goto LABEL_109;
                  }
                LABEL_165:
                  v74 = 10000;
                  goto LABEL_109;
                }
                v84 = v76 + v80;
                if (v79 >= 2 && (_DWORD)result == 1) {
                  if (v76 < 1) {
                    goto LABEL_165;
                  }
                  v101 = v76 + v78;
                  v102 = v81 - v78;
                  v74 = 10000;
                  do {
                    LODWORD(result) = v82 - v80;
                    v103 = v102;
                    v104 = v78;
                    if (v82 - v80 >= 0) {
                      result = (unsigned int)result;
                    }
                    else {
                      result = (unsigned int)(v80 - v82);
                    }
                    do {
                      ++v104;
                      if (v103 >= 0) {
                        v105 = v103;
                      }
                      else {
                        v105 = -v103;
                      }
                      --v103;
                      v106 = v105 + result;
                      if (v106 < v74) {
                        v74 = v106;
                      }
                    } while (v104 < v101);
                    ++v80;
                  } while (v80 < v84);
                }
                else {
                  if (v76 < 1 || v77 < 1) {
                    goto LABEL_165;
                  }
                  v86 = v76 + v78;
                  result = (unsigned int)(v77 + v82);
                  v87 = v77 + v81;
                  v74 = 10000;
                  do {
                    v88 = -v78;
                    v89 = v78;
                    do {
                      v90 = *(char*)(v31 + 585);
                      do {
                        v91 = v90 - v80;
                        v92 = *(char*)(v31 + 584);
                        if (v90 - v80 < 0) {
                          v91 = v80 - v90;
                        }
                        do {
                          v93 = v88 + v92;
                          v52 = v88 + v92++ < 0;
                          if (v52) {
                            v93 = -v93;
                          }
                          v94 = v93 + v91;
                          if (v94 < v74) {
                            v74 = v94;
                          }
                        } while (v92 < v87);
                        ++v90;
                      } while (v90 < (int)result);
                      ++v89;
                      --v88;
                    } while (v89 < v86);
                    ++v80;
                  } while (v80 < v84);
                }
              }
            }
          LABEL_109:
            v5 += v74;
            if (v6 <= v74) {
              v6 = v74;
            }
            v8 = v71++ == v124 - 2;
            if (v8) {
              goto LABEL_167;
            }
            continue;
          }
        }
      LABEL_23:
        ++v13;
        v12 += 8;
        v116 += 8;
        v14 = v15;
      } while (v16 - 1 > v15);
    } while ((v117 & 1) != 0);
  }
  return result;
}

__int64 game_map_7596a0(__int64 result, int a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  float v11;
  __int128 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int128 v19;

  if (GameData_21ca300 != 0) {
    v2 = result + 32 * a2;
    if (v2 >= 0x400) {
      v3 = 0;
    }
    else {
      v3 = v2;
    }
    if (*(_BYTE*)(*(_QWORD*)(GameData_21ca300 + 96) + v3 + 8) != 0) {
      v4 = *(_QWORD*)(GameData_21ca310 + 56) +
           2224LL *
               *(unsigned __int8*)(*(_QWORD*)(GameData_21ca300 + 96) + v3 + 8);
      if (*(unsigned __int8*)(*(_QWORD*)(GameData_21ca300 + 96) + v3 + 8) <=
              0xFAu &&
          v4 != 2224 && *(_QWORD*)(v4 - 1832) != 0) {
        result = *(_QWORD*)(v4 - 2216);
        if (result != 0) {
          v6 = *(char*)(result + 584);
          if ((v6 & 0x80000000) == 0) {
            v7 = *(char*)(result + 585);
            if ((v7 & 0x80000000) == 0) {
              v8 = *(_DWORD*)(result + 592);
              v9 = v6 | 0x100;
              v10 = v7 | 0x100;
              v11 = (float)(unsigned int)(v8 - 1) * 2.5f;
              if (v8 <= 0) {
                v11 = 0.0f;
              }
              *(_QWORD*)&v12 = COERCE_UNSIGNED_INT(
                  (float)((float)((float)((float)v9 * 5.0f) + 2.5f) +
                          -0x1.4000000000000p+10f) +
                  v11);
              v17 = COERCE_UNSIGNED_INT(
                  (float)((float)((float)((float)v10 * 5.0f) + 2.5f) +
                          -0x1.4000000000000p+10f) +
                  v11);
              *(float*)&v18 =
                  (float)((float)((float)((float)v9 * 5.0f) + 2.5f) +
                          -0x1.4000000000000p+10f) +
                  v11;
              *((_QWORD*)&v12 + 1) = v17;
              v19 = v12;
              *(_QWORD*)&v13 = __PAIR64__(
                  COERCE_UNSIGNED_INT(Unit_6c7fa0(result, (__int64)&v19)), v18);
              *((_QWORD*)&v13 + 1) = v17;
              v19 = v13;
              Cursor_734a80_alt1(v4 - 2176, (__int64*)&v19);
              UnitActor_81ba20(v4 - 2224);
            }
          }
          result = *(_QWORD*)(v4 - 1960);
          if (result != 0) {
            result = CharacterBuilder_1084780();
          }
        }
      }
    }
    v14 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
    v15 = *(__int16*)(v14 + 2 * v3 + 12392);
    if ((v15 & 0x8000000000000000LL) == 0) {
      v16 = *(_QWORD*)(v14 + 8);
      if (v16 != 0) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)(v16 + 144LL * (int)v15) +
                                         680LL))(v16 + 144LL * (int)v15);
      }
    }
  }
  return result;
}

void game_map_75a370(__int64* a1, __int64* a2, __int64* a3, __int64* a4)
{

#pragma clang fp contract(off)
  __int64 v6;
  float v9;
  float v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
  v6 = *a1;
  GameRoutine_7c0910(*a4, *a2),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
  v10 = v9;
  GameRoutine_7c0910(*a4, v6),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
  v11 = *a2;
  v13 = v12;
  GameRoutine_7c0910(*a4, *a3),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
  v15 = v14;
  GameRoutine_7c0910(*a4, v11),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v10 <= v13) {
    if (v15 > v16) {
      v18 = *a2;
      *a2 = *a3;
      *a3 = v18;
      v19 = *a1;
      GameRoutine_7c0910(*a4, *a2),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
      v21 = v20;
      GameRoutine_7c0910(*a4, v19),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v21 > v22) {
        v23 = *a1;
        *a1 = *a2;
        *a2 = v23;
      }
    }
  }
  else {
    v17 = *a1;
    if (v15 <= v16) {
      *a1 = *a2;
      *a2 = v17;
      GameRoutine_7c0910(*a4, *a3),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
      v25 = v24;
      GameRoutine_7c0910(*a4, v17),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v25 > v26) {
        v27 = *a2;
        *a2 = *a3;
        *a3 = v27;
      }
    }
    else {
      *a1 = *a3;
      *a3 = v17;
    }
  }
}

void game_map_75a4e0(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                     __int64* a5)
{

#pragma clang fp contract(off)
  __int64 v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  game_map_75a370(a1, a2, a3, a5),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  v10 = *a3;
  GameRoutine_7c0910(*a5, *a4),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  v12 = v11;
  GameRoutine_7c0910(*a5, v10),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v12 > v13) {
    v14 = *a3;
    *a3 = *a4;
    *a4 = v14;
    v15 = *a2;
    GameRoutine_7c0910(*a5, *a3),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
    v17 = v16;
    GameRoutine_7c0910(*a5, v15),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v17 > v18) {
      v19 = *a2;
      *a2 = *a3;
      *a3 = v19;
      v20 = *a1;
      GameRoutine_7c0910(*a5, *a2),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
      v22 = v21;
      GameRoutine_7c0910(*a5, v20),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v22 > v23) {
        v24 = *a1;
        *a1 = *a2;
        *a2 = v24;
      }
    }
  }
}

void game_map_75a5f0(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                     __int64* a5, __int64* a6)
{

#pragma clang fp contract(off)
  __int64 v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  __int64 v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;

  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  game_map_75a4e0(a1, a2, a3, a4, a6),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  v12 = *a4;
  GameRoutine_7c0910(*a6, *a5),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  v14 = v13;
  GameRoutine_7c0910(*a6, v12),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v14 > v15) {
    v16 = *a4;
    *a4 = *a5;
    *a5 = v16;
    v17 = *a3;
    GameRoutine_7c0910(*a6, *a4),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    v19 = v18;
    GameRoutine_7c0910(*a6, v17),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v19 > v20) {
      v21 = *a3;
      *a3 = *a4;
      *a4 = v21;
      v22 = *a2;
      GameRoutine_7c0910(*a6, *a3),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
      v24 = v23;
      GameRoutine_7c0910(*a6, v22),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v24 > v25) {
        v26 = *a2;
        *a2 = *a3;
        *a3 = v26;
        v27 = *a1;
        GameRoutine_7c0910(*a6, *a2),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
        v29 = v28;
        GameRoutine_7c0910(*a6, v27),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v29 > v30) {
          v31 = *a1;
          *a1 = *a2;
          *a2 = v31;
        }
      }
    }
  }
}

bool game_map_75a760(__int64* a1, __int64* a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  _BOOL8 result;
  float v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  int v16;
  __int64* v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  v6 = a2 - a1;
  if (v6 <= 2) {
    if ((unsigned __int64)v6 >= 2) {
      if (v6 == 2) {
        v7 = *a1;
        GameRoutine_7c0910(*a3, *(a2 - 1)),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v9 = v8;
        GameRoutine_7c0910(*a3, v7),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        result = true;
        if (v9 > v11) {
          v12 = *a1;
          *a1 = *(a2 - 1);
          *(a2 - 1) = v12;
        }
        return result;
      }
      goto LABEL_11;
    }
    return true;
  }
  switch (v6) {
  case 3LL:
    game_map_75a370(a1, a1 + 1, a2 - 1, a3),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    return true;
  case 4LL:
    game_map_75a4e0(a1, a1 + 1, a1 + 2, a2 - 1, a3),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    return true;
  case 5LL:
    game_map_75a5f0(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1, a3),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    return true;
  default:
    break;
  }
LABEL_11:
  v13 = a1 + 2;
  game_map_75a370(a1, a1 + 1, a1 + 2, a3),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  v14 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v15 = 0;
  v16 = 0;
  while (1) {
    v18 = *v13;
    GameRoutine_7c0910(*a3, *v14),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    v20 = v19;
    GameRoutine_7c0910(*a3, v18),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v20 > v21) {
      v22 = *v14;
      v23 = v15;
      do {
        *(__int64*)((char*)a1 + v23 + 24) = *(__int64*)((char*)a1 + v23 + 16);
        if (v23 == -16) {
          v17 = a1;
          goto LABEL_14;
        }
        v24 = *(__int64*)((char*)a1 + v23 + 8);
        GameRoutine_7c0910(*a3, v22),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v26 = v25;
        GameRoutine_7c0910(*a3, v24),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v23 -= 8;
      } while (v26 > v27);
      v17 = (__int64*)((char*)a1 + v23 + 24);
    LABEL_14:
      ++v16;
      *v17 = v22;
      if (v16 == 8) {
        return v14 + 1 == a2;
      }
    }
    v13 = v14++;
    v15 += 8;
    if (v14 == a2) {
      return true;
    }
  }
}

void game_map_75b490(__int64* a1, __int64* a2, __int64* a3, __int64* a4)
{

#pragma clang fp contract(off)
  __int64 v6;
  float v9;
  float v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
  v6 = *a1;
  GameRoutine_7c0910(*a4, *a2),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
  v10 = v9;
  GameRoutine_7c0910(*a4, v6),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
  v11 = *a2;
  v13 = v12;
  GameRoutine_7c0910(*a4, *a3),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
  v15 = v14;
  GameRoutine_7c0910(*a4, v11),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v10 >= v13) {
    if (v15 < v16) {
      v18 = *a2;
      *a2 = *a3;
      *a3 = v18;
      v19 = *a1;
      GameRoutine_7c0910(*a4, *a2),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
      v21 = v20;
      GameRoutine_7c0910(*a4, v19),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v21 < v22) {
        v23 = *a1;
        *a1 = *a2;
        *a2 = v23;
      }
    }
  }
  else {
    v17 = *a1;
    if (v15 >= v16) {
      *a1 = *a2;
      *a2 = v17;
      GameRoutine_7c0910(*a4, *a3),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
      v25 = v24;
      GameRoutine_7c0910(*a4, v17),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v25 < v26) {
        v27 = *a2;
        *a2 = *a3;
        *a3 = v27;
      }
    }
    else {
      *a1 = *a3;
      *a3 = v17;
    }
  }
}

void game_map_75b600(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                     __int64* a5)
{

#pragma clang fp contract(off)
  __int64 v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  game_map_75b490(a1, a2, a3, a5),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  v10 = *a3;
  GameRoutine_7c0910(*a5, *a4),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  v12 = v11;
  GameRoutine_7c0910(*a5, v10),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v12 < v13) {
    v14 = *a3;
    *a3 = *a4;
    *a4 = v14;
    v15 = *a2;
    GameRoutine_7c0910(*a5, *a3),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
    v17 = v16;
    GameRoutine_7c0910(*a5, v15),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v17 < v18) {
      v19 = *a2;
      *a2 = *a3;
      *a3 = v19;
      v20 = *a1;
      GameRoutine_7c0910(*a5, *a2),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
      v22 = v21;
      GameRoutine_7c0910(*a5, v20),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v22 < v23) {
        v24 = *a1;
        *a1 = *a2;
        *a2 = v24;
      }
    }
  }
}

void game_map_75b710(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                     __int64* a5, __int64* a6)
{

#pragma clang fp contract(off)
  __int64 v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  __int64 v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;

  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  game_map_75b600(a1, a2, a3, a4, a6),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  v12 = *a4;
  GameRoutine_7c0910(*a6, *a5),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  v14 = v13;
  GameRoutine_7c0910(*a6, v12),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v14 < v15) {
    v16 = *a4;
    *a4 = *a5;
    *a5 = v16;
    v17 = *a3;
    GameRoutine_7c0910(*a6, *a4),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    v19 = v18;
    GameRoutine_7c0910(*a6, v17),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v19 < v20) {
      v21 = *a3;
      *a3 = *a4;
      *a4 = v21;
      v22 = *a2;
      GameRoutine_7c0910(*a6, *a3),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
      v24 = v23;
      GameRoutine_7c0910(*a6, v22),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v24 < v25) {
        v26 = *a2;
        *a2 = *a3;
        *a3 = v26;
        v27 = *a1;
        GameRoutine_7c0910(*a6, *a2),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
        v29 = v28;
        GameRoutine_7c0910(*a6, v27),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v29 < v30) {
          v31 = *a1;
          *a1 = *a2;
          *a2 = v31;
        }
      }
    }
  }
}

bool game_map_75b880(__int64* a1, __int64* a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  _BOOL8 result;
  float v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  int v16;
  __int64* v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  v6 = a2 - a1;
  if (v6 <= 2) {
    if ((unsigned __int64)v6 >= 2) {
      if (v6 == 2) {
        v7 = *a1;
        GameRoutine_7c0910(*a3, *(a2 - 1)),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v9 = v8;
        GameRoutine_7c0910(*a3, v7),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        result = true;
        if (v9 < v11) {
          v12 = *a1;
          *a1 = *(a2 - 1);
          *(a2 - 1) = v12;
        }
        return result;
      }
      goto LABEL_11;
    }
    return true;
  }
  switch (v6) {
  case 3LL:
    game_map_75b490(a1, a1 + 1, a2 - 1, a3),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    return true;
  case 4LL:
    game_map_75b600(a1, a1 + 1, a1 + 2, a2 - 1, a3),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    return true;
  case 5LL:
    game_map_75b710(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1, a3),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    return true;
  default:
    break;
  }
LABEL_11:
  v13 = a1 + 2;
  game_map_75b490(a1, a1 + 1, a1 + 2, a3),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  v14 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v15 = 0;
  v16 = 0;
  while (1) {
    v18 = *v13;
    GameRoutine_7c0910(*a3, *v14),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    v20 = v19;
    GameRoutine_7c0910(*a3, v18),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v20 < v21) {
      v22 = *v14;
      v23 = v15;
      do {
        *(__int64*)((char*)a1 + v23 + 24) = *(__int64*)((char*)a1 + v23 + 16);
        if (v23 == -16) {
          v17 = a1;
          goto LABEL_14;
        }
        v24 = *(__int64*)((char*)a1 + v23 + 8);
        GameRoutine_7c0910(*a3, v22),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v26 = v25;
        GameRoutine_7c0910(*a3, v24),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v23 -= 8;
      } while (v26 < v27);
      v17 = (__int64*)((char*)a1 + v23 + 24);
    LABEL_14:
      ++v16;
      *v17 = v22;
      if (v16 == 8) {
        return v14 + 1 == a2;
      }
    }
    v13 = v14++;
    v15 += 8;
    if (v14 == a2) {
      return true;
    }
  }
}

__int64 game_map_768a20(__int64 a1, __int64 a2, __int64 a3, _BYTE* a4,
                        unsigned __int8 a5, char* a6, __int64 a7, __n128 a8)
{
  __int64 v8;
  int v16;
  int v17;
  unsigned __int64 v18;
  __int128 v19;
  char v20;
  char v21;
  float v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  char v28;
  __int64 v29;
  int v30;
  __int64 v31;
  char* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  int v41;
  int v42;
  int v43;
  unsigned int v44;
  unsigned int v45;
  float v46;
  __int128 v47;
  __int128 v48;
  __int64 v50;
  unsigned int v51;
  __int64 v52;
  __int128 v53;
  __int128 v54;
  __int64 v55;
  __int128 v56;
  __int128 v57;
  __int128 v58;
  __int128 v59;
  __int128 v60;
  __int128 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  bool v66;
  unsigned __int64 v67;
  char v68;
  char v69;
  __int64 v70;
  __int64 v71;
  float v72;
  double v73;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  __int64* v77;
  __int64* v78;
  __int64* v79;
  __int64* v80;
  unsigned int v81;
  __int64 v87;
  int v88;
  int v89;
  int v90;
  unsigned int v91;
  unsigned int v92;
  float v93;
  __int128 v94;
  __int128 v95;
  __int64 v97;
  __int64 v98;
  _QWORD* v99;
  __int64 v105;
  _BYTE* v106;
  __int64 v108;
  __int64 v109;
  unsigned int v110;
  unsigned int v111;
  __int64 v112[26];

  v8 = 0;
  if (a2 == 0 || *(int*)(a3 + 136) < 1) {
    return v8;
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v16 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v17 = 2)
           : (v17 = 3),
       (v17 & v16) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_15;
    }
    v18 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v18 + 172) == *(float*)(v18 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v18 + 160) + 16LL))(v18 + 160);
    }
    else {
      v19 = *(_OWORD*)(v18 + 208);
    }
    if (*((float*)&v19 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v18 + 160) + 16LL))(
                        v18 + 160, *((float*)&v19 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_15:
      if (!game_map_IRoute_IsSightOut((_DWORD*)a3, a2)) {
        v23 = (__int64*)fw_memory_g_heap_manager_ptr;
        v8 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 560, 16, 0);
        v24 = GameData_212c608[0];
        *(_QWORD*)(v8 + 96) = 0;
        *(_QWORD*)(v8 + 104) = 0;
        *(_QWORD*)(v8 + 112) = 0;
        *(_QWORD*)(v8 + 120) = 0;
        *(_QWORD*)(v8 + 128) = 0;
        *(_WORD*)(v8 + 136) = 0;
        *(_QWORD*)(v8 + 16) = 0;
        *(_QWORD*)(v8 + 24) = "NULL";
        *(_QWORD*)(v8 + 138) = 0;
        *(_QWORD*)(v8 + 144) = 0;
        *(_QWORD*)(v8 + 32) = 0;
        *(_QWORD*)(v8 + 40) = 0;
        *(_QWORD*)(v8 + 48) = 0;
        *(_QWORD*)(v8 + 56) = 0;
        *(_QWORD*)(v8 + 64) = 0;
        *(_QWORD*)(v8 + 72) = 0;
        *(_QWORD*)(v8 + 80) = 0;
        *(_QWORD*)(v8 + 88) = 0;
        *(_QWORD*)v8 = v24 + 16;
        *(_QWORD*)(v8 + 8) = 0;
        game_ProcInst_Register(v8);
        *(_QWORD*)(v8 + 152) = a2;
        *(_QWORD*)v8 = game_map_anonymous_ProcUnitAction_vtable;
        v25 = *GameData_212cfe8[0];
        v26 = *(_DWORD*)(*GameData_212cfe8[0] + 16);
        *(_DWORD*)(*GameData_212cfe8[0] + 16) = v26 + 1;
        if (v26 == 0) {
          (**(void (***)(__int64))(v25 + 8))(v25 + 8);
        }
        *(_QWORD*)(v8 + 344) = 0;
        *(_QWORD*)v8 = game_map_anonymous_ProcUnitMove_vtable;
        v27 = *(unsigned int*)(a3 + 136);
        *(_QWORD*)(v8 + 160) = GameData_212d178[0] + 2;
        if ((int)v27 >= 1) {
          memcpy(v8 + 168, a3 + 8, v27);
        }
        v28 = *(_BYTE*)(a3 + 140);
        v29 = *(_QWORD*)(a7 + 32);
        *(_DWORD*)(v8 + 296) = v27;
        *(_QWORD*)(v8 + 448) = 0;
        *(_QWORD*)(v8 + 456) = 0;
        *(_QWORD*)(v8 + 432) = 0;
        *(_QWORD*)(v8 + 440) = 0;
        *(_QWORD*)(v8 + 416) = 0;
        *(_QWORD*)(v8 + 424) = 0;
        *(_QWORD*)(v8 + 400) = 0;
        *(_QWORD*)(v8 + 408) = 0;
        *(_QWORD*)(v8 + 384) = 0;
        *(_QWORD*)(v8 + 392) = 0;
        *(_QWORD*)(v8 + 368) = 0;
        *(_QWORD*)(v8 + 376) = 0;
        *(_BYTE*)(v8 + 473) = a5;
        *(_BYTE*)(v8 + 300) = v28;
        v30 = *(_DWORD*)(a3 + 148);
        *(_DWORD*)(v8 + 304) = *(_DWORD*)(a3 + 144);
        v31 = *(_QWORD*)(a3 + 152);
        *(_DWORD*)(v8 + 308) = v30;
        *(_QWORD*)(v8 + 312) = v31;
        *(_DWORD*)(v8 + 320) = *(_DWORD*)(a3 + 160);
        *(_QWORD*)(v8 + 324) = *(_QWORD*)(a3 + 164);
        *(_DWORD*)(v8 + 332) = *(_DWORD*)(a3 + 172);
        *(_BYTE*)(v8 + 336) = *(_BYTE*)(a3 + 176);
        *(_BYTE*)(v8 + 472) = *a4;
        if (v29 != 0) {
          if (v29 == a7) {
            *(_QWORD*)(v8 + 512) = v8 + 480;
            (*(void (**)(__int64))(*(_QWORD*)v29 + 24LL))(v29);
          }
          else {
            *(_QWORD*)(v8 + 512) =
                (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
          }
        }
        else {
          *(_QWORD*)(v8 + 512) = 0;
        }
        v32 = &GameData_1a9f09e;
        if (a6 != nullptr && *a6 != 0) {
          v32 = a6;
        }
        v33 = strlen(v32);
        if (v33 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0();
        }
        v34 = v33;
        if (v33 >= 0x17) {
          if ((v33 | 7) == 0x17) {
            v36 = 26;
          }
          else {
            v36 = (v33 | 7) + 1;
          }
          v35 = fw_memory_HeapManager_Allocate(*v23, v36, 16, 0);
          *(_QWORD*)(v8 + 544) = v35;
          *(_QWORD*)(v8 + 536) = v34;
          *(_QWORD*)(v8 + 528) = v36 | 1;
        }
        else {
          v35 = v8 + 529;
          *(_BYTE*)(v8 + 528) = 2 * v33;
          if (v33 == 0) {
            goto LABEL_51;
          }
        }
        memcpy(v35, v32, v34);
      LABEL_51:
        *(_BYTE*)(v35 + v34) = 0;
        v37 = *(_QWORD*)(v8 + 152);
        v38 = *(_DWORD*)(v8 + 312);
        *(_BYTE*)(v37 + 584) = *(_DWORD*)(v8 + 308);
        *(_BYTE*)(v37 + 585) = v38;
        GameRoutine_6c7cb0(*(_QWORD*)(v8 + 152),
                           *(char*)(*(_QWORD*)(v8 + 152) + 584LL),
                           *(char*)(*(_QWORD*)(v8 + 152) + 585LL));
        v39 = *(_QWORD*)(v8 + 152);
        v40 = *(_QWORD*)(v39 + 8);
        if (v40 != 0) {
          v41 = *(char*)(v40 + 584);
          if ((v41 & 0x80000000) == 0) {
            v42 = *(char*)(v40 + 585);
            if ((v42 & 0x80000000) == 0) {
              v43 = *(_DWORD*)(v40 + 592);
              v44 = v41 | 0x100;
              v45 = v42 | 0x100;
              v46 = (float)(unsigned int)(v43 - 1) * 0x1.4000000000000p+1f;
              if (v43 <= 0) {
                v46 = 0x0.0p+0f;
              }
              *(_QWORD*)&v47 = COERCE_UNSIGNED_INT(
                  (float)((float)((float)((float)v44 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v46);
              v108 = COERCE_UNSIGNED_INT(
                  (float)((float)((float)((float)v45 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v46);
              *(float*)&v110 =
                  (float)((float)((float)((float)v44 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v46;
              *((_QWORD*)&v47 + 1) = v108;
              *(_OWORD*)v112 = v47;
              *(_QWORD*)&v48 = __PAIR64__(
                  COERCE_UNSIGNED_INT(Unit_6c7fa0_alt1(v40, v112)), v110);
              *((_QWORD*)&v48 + 1) = v108;
              *(_OWORD*)v112 = v48;
              Cursor_734a80_alt1(v39 + 48, v112);
              UnitActor_81ba20_alt1(v39);
            }
          }
          v50 = *(_QWORD*)(v39 + 264);
          if (v50 != 0) {
            CharacterBuilder_1084780_alt1(v50);
          }
        }
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)(*(_QWORD*)(v8 + 152) + 48LL) + 16LL))(
            (void*)(v112), *(_QWORD*)(v8 + 152) + 48LL);
        v51 = v112[1];
        v52 = *(_QWORD*)(v8 + 152);
        *(_QWORD*)(v8 + 368) = v112[0];
        v53 = *(_OWORD*)(v8 + 368);
        *((_QWORD*)&v53 + 1) = v51;
        *(_OWORD*)(v8 + 368) = v53;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)(v52 + 48) + 16LL))((void*)(v112), v52 + 48);
        v54 = *(_OWORD*)v112;
        v55 = *(_QWORD*)(v8 + 152);
        *(_DWORD*)(v8 + 352) = 0;
        *(_QWORD*)(v8 + 464) = 0x3F80000000000000LL;
        *(_QWORD*)(v8 + 384) = v54;
        v57 = *(_OWORD*)(v8 + 368);
        v56 = *(_OWORD*)(v8 + 384);
        *((_QWORD*)&v56 + 1) = DWORD2(v54);
        *(_QWORD*)(v8 + 400) = v57;
        *(_QWORD*)(v8 + 416) = v57;
        *(_QWORD*)(v8 + 432) = v57;
        *(_QWORD*)(v8 + 448) = v57;
        *(_OWORD*)(v8 + 384) = v56;
        v58 = *(_OWORD*)(v8 + 400);
        v59 = *(_OWORD*)(v8 + 416);
        *((_QWORD*)&v58 + 1) = DWORD2(v57);
        *((_QWORD*)&v59 + 1) = DWORD2(v57);
        *(_OWORD*)(v8 + 400) = v58;
        *(_OWORD*)(v8 + 416) = v59;
        v60 = *(_OWORD*)(v8 + 432);
        v61 = *(_OWORD*)(v8 + 448);
        *((_QWORD*)&v60 + 1) = DWORD2(v57);
        *((_QWORD*)&v61 + 1) = DWORD2(v57);
        *(_OWORD*)(v8 + 432) = v60;
        *(_OWORD*)(v8 + 448) = v61;
        if (*(_DWORD*)(v55 + 16) != -1080537169 &&
            (UnitActor_81a540(v55, 0xBF984FAF, (__int64)GameData_212ceb8) &
             1) != 0) {
          v62 = *(_QWORD*)(v55 + 264);
          if (v62 != 0) {
            v63 = *(_QWORD*)(v62 + 392);
            v64 = *(_QWORD*)(v62 + 400);
            if (v64 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v64 + 8), 1u,
                                        memory_order_relaxed);
            }
            v65 = *(unsigned int*)(v63 + 11784);
            v66 = v65 > 0x21;
            v67 = 0x17FEFFFCFuLL >> v65;
            v68 = v66;
            v69 = v68 | v67;
            if (v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
              std___1___shared_weak_count___release_weak(v64);
            }
            if ((v69 & 1) != 0) {
              CharacterObservable_10cd4e0(
                  *(_QWORD**)(*(_QWORD*)(v55 + 264) + 120LL));
            }
          }
        }
        v70 = *(_QWORD*)(*(_QWORD*)(v8 + 152) + 264LL);
        if (v70 != 0) {
          *(_DWORD*)(*(_QWORD*)(v70 + 304) + 12LL) = 1065353216;
        }
        if ((*(_BYTE*)(v8 + 472) & 2) != 0) {
          UnitActor_81b040(*(_QWORD*)(v8 + 152), 0x0.0p+0f);
        }
        v71 = *game_sound_g_game_sound_ptr[0];
        if (*game_sound_g_game_sound_ptr[0] != 0) {
          ++*(_DWORD*)(v71 + 2480);
          snd_Fade_Fade_10c910((__int64)v112, 125);
          v72 = 0x1.0000000000000p+0f;
          if (*(_DWORD*)(v71 + 2752) == 1 && *(int*)(v71 + 2480) >= 1) {
            v73 = snd_getDefineValue("SetVolume_SE_Bmap_FootStep");
            v72 = *(float*)&v73 / 0x1.9000000000000p+6f;
          }
          snd_startSlotVolume_100b50(&GameData_21fa960, (__int64)v112, v72);
          snd_Fade_Destroy_Fade(v112);
        }
        v74 = *(_QWORD*)(v8 + 152);
        v75 = fw_memory_HeapManager_Allocate(*v23, 32, 16, 0);
        v76 = *(unsigned __int8*)(v74 + 2088);
        v77 = (__int64*)v75;
        v78 = (__int64*)GameData_21d21b8;
        *(_BYTE*)(v75 + 25) = v76;
        if (v78 != nullptr) {
          while (1) {
            while (1) {
              v81 = *((unsigned __int8*)v78 + 25);
              v80 = v78;
              if (v76 >= v81) {
                break;
              }
              v78 = (__int64*)*v78;
              v79 = v80;
              if (*v80 == 0) {
                goto LABEL_88;
              }
            }
            if (v81 >= v76) {
              break;
            }
            v78 = (__int64*)v78[1];
            if (v78 == nullptr) {
              v79 = v80 + 1;
              goto LABEL_88;
            }
          }
          v105 = 128;
          if (*(_QWORD*)(*v23 + 200) == 0) {
            v105 = 56;
          }
          nn_mem_StandardAllocator_Free(*v23 + v105, v75);
        }
        else {
          v79 = (__int64*)&GameData_21d21b8;
          v80 = (__int64*)&GameData_21d21b8;
        LABEL_88:
          *(_QWORD*)v75 = 0;
          *(_QWORD*)(v75 + 8) = 0;
          *(_QWORD*)(v75 + 16) = v80;
          *v79 = v75;
          if (*(_QWORD*)game_map_Action_units_ != 0) {
            game_map_Action_units_ = *(_QWORD*)game_map_Action_units_;
            v77 = (__int64*)*v79;
          }
          fw_containers_BalanceAfterInsert((__int64*)GameData_21d21b8, v77);
          ++GameData_21d21c0;
        }
        if ((*(_BYTE*)(v8 + 528) & 1) != 0) {
          v106 = *(_BYTE**)(v8 + 544);
        }
        else {
          v106 = (_BYTE*)(v8 + 529);
        }
        UnitActor_81c000(*(_QWORD*)(v8 + 152), v106);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21c6868) != 0) {
          GameData_21c67a8 = 3;
          GameData_21c67d0 = 0;
          GameData_21c67d8 = 0;
          GameData_21c67e0 = 0;
          GameData_21c67b0 = 0;
          GameData_21c67b8 = 0;
          GameData_21c67c0 = 0;
          GameData_21c67c8 = 0;
          GameData_21c6808 = 0;
          GameData_21c6810 = 0;
          GameData_21c6818 = 0;
          GameData_21c6820 = 0;
          GameData_21c6828 = 0;
          GameData_21c6850 = 0;
          GameData_21c6858 = 0;
          GameData_21c6860 = 0;
          GameData_21c6848 = 0;
          GameData_21c6838 = 0;
          GameData_21c6840 = 0;
          GameData_21c6830 = 0;
          GameData_21c67e8 = 14;
          GameData_21c67f0 = 0;
          GameData_21c67f8 = 16;
          GameData_21c6800 = 1;
          __cxa_guard_release(&GameData_21c6868);
        }
        ProcInst_657850(v8, (__int64)&GameData_21c67a8, (__int64)"ProcUnitMove",
                        1, a1);
        return v8;
      }
    }
  }
  v20 = IRoute_751080((unsigned int*)a3, a2);
  v21 = IRoute_751300((unsigned int*)a3, a2);
  *(_BYTE*)(a2 + 584) = v20;
  *(_BYTE*)(a2 + 585) = v21;
  if (a5 > 5u) {
    if (a5 > 8u) {
      if (a5 == 9) {
        v22 = 0x1.0e00000000000p+7f;
        goto LABEL_95;
      }
      if (a5 == 12) {
        v22 = 0x1.6800000000000p+5f;
        goto LABEL_95;
      }
    }
    else {
      if (a5 == 6) {
        v22 = 0x1.3b00000000000p+8f;
        goto LABEL_95;
      }
      if (a5 == 8) {
        v22 = 0x1.6800000000000p+6f;
        goto LABEL_95;
      }
    }
  }
  else {
    if (a5 <= 1u) {
      if (a5 == 0) {
      LABEL_96:
        GameRoutine_6c7cb0(a2, v20, v21);
        v87 = *(_QWORD*)(a2 + 8);
        if (v87 != 0) {
          v88 = *(char*)(v87 + 584);
          if ((v88 & 0x80000000) == 0) {
            v89 = *(char*)(v87 + 585);
            if ((v89 & 0x80000000) == 0) {
              v90 = *(_DWORD*)(v87 + 592);
              v91 = v88 | 0x100;
              v92 = v89 | 0x100;
              v93 = (float)(unsigned int)(v90 - 1) * 0x1.4000000000000p+1f;
              if (v90 <= 0) {
                v93 = 0x0.0p+0f;
              }
              *(_QWORD*)&v94 = COERCE_UNSIGNED_INT(
                  (float)((float)((float)((float)v91 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v93);
              v109 = COERCE_UNSIGNED_INT(
                  (float)((float)((float)((float)v92 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v93);
              *(float*)&v111 =
                  (float)((float)((float)((float)v91 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v93;
              *((_QWORD*)&v94 + 1) = v109;
              *(_OWORD*)v112 = v94;
              *(_QWORD*)&v95 = __PAIR64__(
                  COERCE_UNSIGNED_INT(Unit_6c7fa0_alt1(v87, v112)), v111);
              *((_QWORD*)&v95 + 1) = v109;
              *(_OWORD*)v112 = v95;
              Cursor_734a80_alt1(a2 + 48, v112);
              UnitActor_81ba20_alt1(a2);
            }
          }
          v97 = *(_QWORD*)(a2 + 264);
          if (v97 != 0) {
            CharacterBuilder_1084780_alt1(v97);
          }
        }
        v98 = *GameData_212ce98[0];
        v99 = *(_QWORD**)(*GameData_212ce98[0] + 96);
        Image_72b4a0_alt1((__int64)v99);
        Image_72b6c0_alt1(v99);
        Image_72a260(*(_QWORD*)(v98 + 152));
        return 0;
      }
      v22 = 0x1.6800000000000p+7f;
    LABEL_95:
      UnitActor_81ab40_alt1(a2, v22, 0x0.0p+0f);
      v20 = *(_BYTE*)(a2 + 584);
      v21 = *(_BYTE*)(a2 + 585);
      goto LABEL_96;
    }
    if (a5 == 2) {
      v22 = 0x1.0e00000000000p+8f;
      goto LABEL_95;
    }
    if (a5 == 3) {
      v22 = 0x1.c200000000000p+7f;
      goto LABEL_95;
    }
  }
  v22 = 0x0.0p+0f;
  goto LABEL_95;
}

__int64 game_map_7693e0(__int64 a1, __int64 a2, int a3, int a4, char a5,
                        const char* a6, const char* a7)
{
  int v14;
  int v15;
  unsigned __int64 v16;
  __int128 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  float v25;
  __int128 v26;
  __int128 v27;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  int v35;
  const char* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  const char* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v47;
  unsigned int v48;
  __int128 v49;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d23e0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21d23e0) != 0) {
    GameData_21d21e0 = 13;
    GameData_21d2220 = 13;
    GameData_21d2228 = 0;
    GameData_21d2230 = (__int64)GameRoutine_76e3b0;
    GameData_21d22a0 = 13;
    GameData_21d22e0 = 13;
    GameData_21d2360 = 13;
    GameData_21d21e8 = 0;
    GameData_21d21f0 = (__int64)GameRoutine_76e390;
    GameData_21d21f8 = 0;
    GameData_21d2200 = 0;
    GameData_21d2208 = 0;
    GameData_21d2210 = 0;
    GameData_21d2218 = 0;
    GameData_21d2238 = 0;
    GameData_21d2240 = 0;
    GameData_21d2248 = 0;
    GameData_21d2250 = 0;
    GameData_21d2258 = 0;
    GameData_21d2260 = 4;
    GameData_21d2268 = 0;
    GameData_21d2270 = 0;
    GameData_21d2278 = 0;
    GameData_21d2280 = 2;
    GameData_21d2288 = 0;
    GameData_21d2290 = 250;
    GameData_21d2298 = 0;
    GameData_21d22a8 = 0;
    GameData_21d22b0 = (__int64)game_map_anonymous_76e470;
    GameData_21d22b8 = 0;
    GameData_21d22c0 = 0;
    GameData_21d22c8 = 0;
    GameData_21d22d0 = 0;
    GameData_21d22d8 = 0;
    GameData_21d22e8 = 0;
    GameData_21d22f0 = (__int64)GameRoutine_76e390;
    GameData_21d22f8 = 0;
    GameData_21d2300 = 0;
    GameData_21d2308 = 0;
    GameData_21d2310 = 0;
    GameData_21d2318 = 0;
    GameData_21d2320 = 4;
    GameData_21d2330 = 0;
    GameData_21d2338 = 0;
    GameData_21d2328 = 0;
    GameData_21d2340 = 2;
    GameData_21d2348 = 0;
    GameData_21d2350 = 250;
    GameData_21d2358 = 0;
    GameData_21d2368 = 0;
    GameData_21d2370 = (__int64)GameRoutine_76e5c0;
    GameData_21d2378 = 0;
    GameData_21d2380 = 0;
    GameData_21d2388 = 0;
    GameData_21d2390 = 0;
    GameData_21d2398 = 0;
    GameData_21d23a0 = 0;
    GameData_21d23c8 = 0;
    GameData_21d23d0 = 0;
    GameData_21d23d8 = 0;
    GameData_21d23c0 = 0;
    GameData_21d23b0 = 0;
    GameData_21d23b8 = 0;
    GameData_21d23a8 = 0;
    __cxa_guard_release_alt1((__int64)&GameData_21d23e0);
  }
  if (a2 != 0) {
    if (game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
      v14 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v15 = (v14 & 8) != 0 ? 2 : 3;
      if ((v15 & v14) == 0) {
        goto LABEL_16;
      }
    }
    if (game_ProcFadeView_instance_ != 0) {
      v16 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v16 + 172) == *(float*)(v16 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v16 + 160) + 16LL))(v16 +
                                                                       160);
      }
      else {
        v17 = *(_OWORD*)(v16 + 208);
      }
      if (*((float*)&v17 + 3) == 0x1.0000000000000p+0f &&
          LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v16 + 160) + 16LL))(
                          v16 + 160, *((float*)&v17 + 3)))
                  .n128_f32[3] == 0x1.0000000000000p+0f) {
      LABEL_16:
        *(_BYTE*)(a2 + 584) = a3;
        *(_BYTE*)(a2 + 585) = a4;
        GameHr_6c7cb0(a2, (char)a3, (char)a4);
        v19 = *(_QWORD*)(a2 + 8);
        if (v19 != 0) {
          v20 = *(char*)(v19 + 584);
          if ((v20 & 0x80000000) == 0) {
            v21 = *(char*)(v19 + 585);
            if ((v21 & 0x80000000) == 0) {
              v22 = *(_DWORD*)(v19 + 592);
              v23 = v20 | 0x100;
              v24 = v21 | 0x100;
              v25 = (float)(unsigned int)(v22 - 1) * 0x1.4000000000000p+1f;
              if (v22 <= 0) {
                v25 = 0x0.0p+0f;
              }
              *(_QWORD*)&v26 = COERCE_UNSIGNED_INT(
                  (float)((float)((float)((float)v23 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v25);
              v47 = COERCE_UNSIGNED_INT(
                  (float)((float)((float)((float)v24 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v25);
              *(float*)&v48 =
                  (float)((float)((float)((float)v23 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v25;
              *((_QWORD*)&v26 + 1) = v47;
              v49 = v26;
              *(_QWORD*)&v27 = __PAIR64__(
                  COERCE_UNSIGNED_INT(Unit_6c7fa0_alt1(v19, &v49)), v48);
              *((_QWORD*)&v27 + 1) = v47;
              v49 = v27;
              Cursor_734a80_alt1(a2 + 48, (__int64*)&v49);
              UnitActor_81ba20_alt1(a2);
            }
          }
          v29 = *(_QWORD*)(a2 + 264);
          if (v29 != 0) {
            CharacterBuilder_1084780_alt2(v29);
          }
        }
        v30 = *GameData_212ce98[0];
        v31 = *(_QWORD**)(*GameData_212ce98[0] + 96);
        Image_72b4a0_alt1((__int64)v31);
        Image_72b6c0_alt1(v31);
        Image_72a260_alt2(*(_QWORD*)(v30 + 152));
      }
    }
    v32 = (__int64*)fw_memory_g_heap_manager_ptr;
    v18 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         224, 16, 0);
    v33 = GameData_212c608[0];
    *(_QWORD*)(v18 + 96) = 0;
    *(_QWORD*)(v18 + 104) = 0;
    *(_QWORD*)(v18 + 112) = 0;
    *(_QWORD*)(v18 + 120) = 0;
    *(_QWORD*)(v18 + 128) = 0;
    *(_WORD*)(v18 + 136) = 0;
    *(_QWORD*)(v18 + 16) = 0;
    *(_QWORD*)(v18 + 24) = "NULL";
    *(_QWORD*)(v18 + 138) = 0;
    *(_QWORD*)(v18 + 144) = 0;
    *(_QWORD*)(v18 + 32) = 0;
    *(_QWORD*)(v18 + 40) = 0;
    *(_QWORD*)(v18 + 48) = 0;
    *(_QWORD*)(v18 + 56) = 0;
    *(_QWORD*)(v18 + 64) = 0;
    *(_QWORD*)(v18 + 72) = 0;
    *(_QWORD*)(v18 + 80) = 0;
    *(_QWORD*)(v18 + 88) = 0;
    *(_QWORD*)v18 = v33 + 16;
    *(_QWORD*)(v18 + 8) = 0;
    game_ProcInst_Register(v18);
    *(_QWORD*)(v18 + 152) = a2;
    *(_QWORD*)v18 = game_map_anonymous_ProcUnitAction_vtable;
    v34 = *GameData_212cfe8[0];
    v35 = *(_DWORD*)(*GameData_212cfe8[0] + 16);
    *(_DWORD*)(*GameData_212cfe8[0] + 16) = v35 + 1;
    if (v35 == 0) {
      (**(void (***)(__int64))(v34 + 8))(v34 + 8);
    }
    *(_BYTE*)(v18 + 168) = a5;
    *(_DWORD*)(v18 + 160) = a3;
    *(_DWORD*)(v18 + 164) = a4;
    *(_QWORD*)v18 = game_map_anonymous_ProcUnitWarp_vtable;
    if (a6 != nullptr) {
      v36 = a6;
    }
    else {
      v36 = &GameData_1a9f09e;
    }
    v37 = strlen_alt1(v36);
    if (v37 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_53;
    }
    v38 = v37;
    if (v37 >= 0x17) {
      if ((v37 | 7) == 0x17) {
        v40 = 26;
      }
      else {
        v40 = (v37 | 7) + 1;
      }
      v39 = fw_memory_HeapManager_Allocate(*v32, v40, 16, 0);
      *(_QWORD*)(v18 + 184) = v38;
      *(_QWORD*)(v18 + 192) = v39;
      *(_QWORD*)(v18 + 176) = v40 | 1;
    }
    else {
      v39 = v18 + 177;
      *(_BYTE*)(v18 + 176) = 2 * v37;
      if (v37 == 0) {
      LABEL_39:
        *(_BYTE*)(v39 + v38) = 0;
        if (a7 != nullptr) {
          v41 = a7;
        }
        else {
          v41 = &GameData_1a9f09e;
        }
        v42 = strlen_alt1(v41);
        if (v42 < 0xFFFFFFFFFFFFFFF7LL) {
          v43 = v42;
          if (v42 >= 0x17) {
            if ((v42 | 7) == 0x17) {
              v45 = 26;
            }
            else {
              v45 = (v42 | 7) + 1;
            }
            v44 = fw_memory_HeapManager_Allocate(*v32, v45, 16, 0);
            *(_QWORD*)(v18 + 208) = v43;
            *(_QWORD*)(v18 + 216) = v44;
            *(_QWORD*)(v18 + 200) = v45 | 1;
          }
          else {
            v44 = v18 + 201;
            *(_BYTE*)(v18 + 200) = 2 * v42;
            if (v42 == 0) {
              goto LABEL_51;
            }
          }
          memcpy_alt1(v44, (__int64)v41, v43);
        LABEL_51:
          *(_BYTE*)(v44 + v43) = 0;
          ProcInst_657850_alt2(v18, (__int64)&GameData_21d21e0, "ProcUnitWarp",
                               1, a1);
          return v18;
        }
      LABEL_53:
        String_60a1d0();
      }
    }
    memcpy_alt1(v39, (__int64)v36, v38);
    goto LABEL_39;
  }
  return 0;
}

__int64 game_map_769920(__int64 a1, __int64 a2, char a3, const char* a4,
                        long double a5, long double a6)
{

#pragma clang fp contract(off)
  int v9;
  int v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  long double v16;
  long double v17;
  int v18;

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a2 == 0) {
    return 0;
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v9 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v10 = 2)
           : (v10 = 3),
       (v10 & v9) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_17;
    }
    v11 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    LODWORD(a6) = *(_DWORD*)(v11 + 168);
    if (*(float*)(v11 + 172) == *(float*)&a6) {
      v12 = a1;
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v11 + 160) + 16LL))(v11 + 160),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
      a1 = v12;
    }
    else {
      a5 = *(long double*)(v11 + 208);
    }
    LODWORD(a5) = HIDWORD(a5);
    if (*((float*)&a5 + 3) != 0x1.0000000000000p+0f ||
        (v13 = a1,
         *(__n128*)& a5 = ((__n128 (*)(unsigned __int64, float)) *
                           (_QWORD*)(*(_QWORD*)(v11 + 160) + 16LL))(
             v11 + 160, *((float*)&a5 + 3)),
         LODWORD(a5) = HIDWORD(a5), a1 = v13,
         *((float*)&a5 + 3) != 0x1.0000000000000p+0f)) {
    LABEL_17:
      if (a4 == nullptr || *a4 == 0) {
        if ((unsigned __int8)(a3 - 2) > 5u) {
          a4 = "Bmap_Warp_Hit";
        }
        else {
          a4 = GameData_1f970c0[(unsigned __int8)(a3 - 2)];
        }
      }
      return GameRoutine_76b550(a1, a2, (__int64)a4, 0, a5, a6);
    }
  }
  v18 = 1065353216;
  if (*(_BYTE*)(a2 + 176) == 1) {
    v14 = *(_QWORD*)(a2 + 152);
    LODWORD(a5) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  }
  else {
    if (*(float*)(a2 + 160) <= 0x0.0p+0f) {
      if (((*(__int64 (**)(__int64, int*, __int64))(
               *(_QWORD*)(a2 + 152) + 8LL))(a2 + 152, &v18, a2 + 184) &
           1) == 0) {
        return 0;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LODWORD(v16) = v18;
      (*(void (**)(__int64, long double, long double))(
          *(_QWORD*)(a2 + 152) + 24LL))(a2 + 152, v17, v16),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_25:
      *(_QWORD*)(a2 + 160) = 0;
      *(_WORD*)(a2 + 176) = 256;
      *(_WORD*)(a2 + 20) |= 8u;
      return 0;
    }
    (*(void (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v14 = *(_QWORD*)(a2 + 152);
  }
  LODWORD(a6) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  (*(void (**)(__int64, long double, long double))(v14 + 24))(a2 + 152, a5, a6),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
  goto LABEL_25;
}

__int64 game_map_769b20(__int64 a1, __int64 a2, unsigned __int8 a3,
                        const char* a4, long double a5, long double a6)
{

#pragma clang fp contract(off)
  int v9;
  int v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  long double v17;
  long double v18;
  int v19;

  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a2 == 0) {
    return 0;
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v9 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v10 = 2)
           : (v10 = 3),
       (v10 & v9) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_17;
    }
    v11 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    LODWORD(a6) = *(_DWORD*)(v11 + 168);
    if (*(float*)(v11 + 172) == *(float*)&a6) {
      v12 = a1;
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v11 + 160) + 16LL))(v11 + 160),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w"));
      a1 = v12;
    }
    else {
      a5 = *(long double*)(v11 + 208);
    }
    LODWORD(a5) = HIDWORD(a5);
    if (*((float*)&a5 + 3) != 0x1.0000000000000p+0f ||
        (v13 = a1,
         *(__n128*)& a5 = ((__n128 (*)(unsigned __int64, float)) *
                           (_QWORD*)(*(_QWORD*)(v11 + 160) + 16LL))(
             v11 + 160, *((float*)&a5 + 3)),
         LODWORD(a5) = HIDWORD(a5), a1 = v13,
         *((float*)&a5 + 3) != 0x1.0000000000000p+0f)) {
    LABEL_17:
      if (a4 == nullptr || *a4 == 0) {
        if (a3 > 4u) {
          switch (a3) {
          case 7u:
            a4 = *(const char**)(*(_QWORD*)(a2 + 392) + 672LL);
            return GameRoutine_76b550(a1, a2, (__int64)a4, 1, a5, a6);
          case 6u:
            a4 = "Bmap_BrazeArts_ShadowBladeA_Start";
            return GameRoutine_76b550(a1, a2, (__int64)a4, 1, a5, a6);
          case 5u:
            a4 = "Bmap_SC12_08_Summon_Start";
            return GameRoutine_76b550(a1, a2, (__int64)a4, 1, a5, a6);
          default:
            break;
          }
        }
        else if ((unsigned int)a3 - 2 < 3) {
          a4 = "Bmap_Summon_Destory";
          return GameRoutine_76b550(a1, a2, (__int64)a4, 1, a5, a6);
        }
        a4 = "Bmap_Warp_Start";
      }
      return GameRoutine_76b550(a1, a2, (__int64)a4, 1, a5, a6);
    }
  }
  v14 = *(unsigned __int8*)(a2 + 176);
  v19 = 0;
  if (v14 == 1) {
    v15 = *(_QWORD*)(a2 + 152);
    *(_QWORD*)&a5 = 0;
  }
  else {
    if (*(float*)(a2 + 160) <= 0x0.0p+0f) {
      if (((*(__int64 (**)(__int64, int*, __int64))(
               *(_QWORD*)(a2 + 152) + 8LL))(a2 + 152, &v19, a2 + 184) &
           1) == 0) {
        return 0;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LODWORD(v17) = v19;
      (*(void (**)(__int64, long double, long double))(
          *(_QWORD*)(a2 + 152) + 24LL))(a2 + 152, v18, v17),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_28:
      *(_QWORD*)(a2 + 160) = 0;
      *(_WORD*)(a2 + 176) = 256;
      *(_WORD*)(a2 + 20) |= 8u;
      return 0;
    }
    (*(void (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v15 = *(_QWORD*)(a2 + 152);
  }
  *(_QWORD*)&a6 = 0;
  (*(void (**)(__int64, long double, long double))(v15 + 24))(a2 + 152, a5, a6),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w"));
  goto LABEL_28;
}

__int64 game_map_769f40(__int64 a1, __int64 a2, _DWORD* a3, long double a4,
                        long double a5)
{

#pragma clang fp contract(off)
  const char* v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  const char* v14;
  long double v16;
  long double v17;
  int v18;

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a2 == 0) {
    return 0;
  }
  v6 = *(const char**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * (*a3 & 0xFFF)) +
                       768LL);
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v7 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v8 = 2)
           : (v8 = 3),
       (v8 & v7) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_16;
    }
    v9 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    LODWORD(a5) = *(_DWORD*)(v9 + 168);
    if (*(float*)(v9 + 172) == *(float*)&a5) {
      v10 = a1;
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v9 + 160) + 16LL))(v9 + 160),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
      a1 = v10;
    }
    else {
      a4 = *(long double*)(v9 + 208);
    }
    LODWORD(a4) = HIDWORD(a4);
    if (*((float*)&a4 + 3) != 0x1.0000000000000p+0f ||
        (v11 = a1,
         *(__n128*)& a4 = ((__n128 (*)(unsigned __int64, float)) *
                           (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
             v9 + 160, *((float*)&a4 + 3)),
         LODWORD(a4) = HIDWORD(a4), a1 = v11,
         *((float*)&a4 + 3) != 0x1.0000000000000p+0f)) {
    LABEL_16:
      v14 = "Bmap_Warp_Start";
      if (v6 != nullptr && *v6 != 0) {
        v14 = v6;
      }
      return GameRoutine_76b550(a1, a2, (__int64)v14, 1, a4, a5);
    }
  }
  v12 = *(unsigned __int8*)(a2 + 176);
  v18 = 0;
  if (v12 == 1) {
    v13 = *(_QWORD*)(a2 + 152);
    *(_QWORD*)&a4 = 0;
  }
  else {
    if (*(float*)(a2 + 160) <= 0x0.0p+0f) {
      if (((*(__int64 (**)(__int64, int*, __int64))(
               *(_QWORD*)(a2 + 152) + 8LL))(a2 + 152, &v18, a2 + 184) &
           1) == 0) {
        return 0;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LODWORD(v16) = v18;
      (*(void (**)(__int64, long double, long double))(
          *(_QWORD*)(a2 + 152) + 24LL))(a2 + 152, v17, v16),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_23:
      *(_QWORD*)(a2 + 160) = 0;
      *(_WORD*)(a2 + 176) = 256;
      *(_WORD*)(a2 + 20) |= 8u;
      return 0;
    }
    (*(void (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v13 = *(_QWORD*)(a2 + 152);
  }
  *(_QWORD*)&a5 = 0;
  (*(void (**)(__int64, long double, long double))(v13 + 24))(a2 + 152, a4, a5),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
  goto LABEL_23;
}

__int64 game_map_76a2e0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v10;
  int v11;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d25f0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21d25f0) != 0) {
    GameData_21d24f0 = 13;
    GameData_21d24f8 = 0;
    GameData_21d2500 = (__int64)GameRoutine_76e9b0;
    GameData_21d2530 = 13;
    GameData_21d2570 = 13;
    GameData_21d2508 = 0;
    GameData_21d2510 = 0;
    GameData_21d2518 = 0;
    GameData_21d2520 = 0;
    GameData_21d2528 = 0;
    GameData_21d2548 = 0;
    GameData_21d2550 = 0;
    GameData_21d2558 = 0;
    GameData_21d2560 = 0;
    GameData_21d2538 = 0;
    GameData_21d2540 = (__int64)game_map_anonymous_76ea20;
    GameData_21d2568 = 0;
    GameData_21d2578 = 0;
    GameData_21d2580 = (__int64)GameRoutine_76ebe0;
    GameData_21d2588 = 0;
    GameData_21d2590 = 0;
    GameData_21d2598 = 0;
    GameData_21d25a0 = 0;
    GameData_21d25a8 = 0;
    GameData_21d25b0 = 0;
    GameData_21d25d8 = 0;
    GameData_21d25e0 = 0;
    GameData_21d25e8 = 0;
    GameData_21d25d0 = 0;
    GameData_21d25c0 = 0;
    GameData_21d25c8 = 0;
    GameData_21d25b8 = 0;
    __cxa_guard_release(&GameData_21d25f0);
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      168, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4);
  *(_QWORD*)(v4 + 152) = a2;
  *(_QWORD*)v4 = game_map_anonymous_ProcUnitAction_vtable;
  v6 = *GameData_212cfe8[0];
  v7 = *(_DWORD*)(*GameData_212cfe8[0] + 16);
  *(_DWORD*)(*GameData_212cfe8[0] + 16) = v7 + 1;
  if (v7 == 0) {
    (**(void (***)(__int64))(v6 + 8))(v6 + 8);
  }
  *(_QWORD*)v4 = game_map_anonymous_ProcUnitDead_vtable;
  v8 = game_g_shared_system_skills_ptr;
  v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v10) & 1) != 0) {
    *(_BYTE*)(v4 + 160) = 3;
  }
  else if (*(_BYTE*)(a2 + 496) != 0) {
    *(_BYTE*)(v4 + 160) = 1;
  }
  else {
    v11 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v8 + 4) & 0xFFF;
    if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v11) & 1) != 0) {
      *(_BYTE*)(v4 + 160) = 2;
    }
    else {
      *(_BYTE*)(v4 + 160) = 0;
    }
  }
  return ProcInst_657850(v4, (__int64)&GameData_21d24f0,
                         (__int64)"ProcUnitDead", 1, a1);
}

__int64 game_map_76a520(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v10;
  int v11;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d2878,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21d2878) != 0) {
    GameData_21d2600 = 0;
    GameData_21d2608 = (__int64)ProcUnitDead_76ecf0;
    GameData_21d25f8 = 13;
    GameData_21d2638 = 13;
    GameData_21d2678 = 13;
    GameData_21d26b8 = 13;
    GameData_21d26f8 = 13;
    GameData_21d2738 = 13;
    GameData_21d27b8 = 13;
    GameData_21d27f8 = 13;
    GameData_21d2610 = 0;
    GameData_21d2618 = 0;
    GameData_21d2620 = 0;
    GameData_21d2628 = 0;
    GameData_21d2640 = 0;
    GameData_21d2648 = (__int64)ProcUnitDead_76ed60;
    GameData_21d2630 = 0;
    GameData_21d2650 = 0;
    GameData_21d2658 = 0;
    GameData_21d2660 = 0;
    GameData_21d2668 = 0;
    GameData_21d2670 = 0;
    GameData_21d2690 = 0;
    GameData_21d2698 = 0;
    GameData_21d26a0 = 0;
    GameData_21d2680 = 0;
    GameData_21d2688 = (__int64)game_map_anonymous_ProcUnitDead_DeadDrop;
    GameData_21d26a8 = 0;
    GameData_21d26b0 = 0;
    GameData_21d26d0 = 0;
    GameData_21d26d8 = 0;
    GameData_21d26e0 = 0;
    GameData_21d26e8 = 0;
    GameData_21d26f0 = 0;
    GameData_21d2710 = 0;
    GameData_21d2718 = 0;
    GameData_21d26c0 = 0;
    GameData_21d26c8 = (__int64)GameRoutine_76ee90;
    GameData_21d2720 = 0;
    GameData_21d2728 = 0;
    GameData_21d2730 = 0;
    GameData_21d2750 = 0;
    GameData_21d2758 = 0;
    GameData_21d2760 = 0;
    GameData_21d2768 = 0;
    GameData_21d2770 = 0;
    GameData_21d2790 = 0;
    GameData_21d2700 = 0;
    GameData_21d2708 = (__int64)GameRoutine_76ef60;
    GameData_21d2798 = 0;
    GameData_21d27a0 = 0;
    GameData_21d27a8 = 0;
    GameData_21d27b0 = 0;
    GameData_21d27d0 = 0;
    GameData_21d27d8 = 0;
    GameData_21d27e0 = 0;
    GameData_21d27e8 = 0;
    GameData_21d27f0 = 0;
    GameData_21d2740 = 0;
    GameData_21d2748 = (__int64)ProcUnitDead_76f480;
    GameData_21d2800 = 0;
    GameData_21d2808 = (__int64)ProcUnitDead_76f5d0;
    GameData_21d2810 = 0;
    GameData_21d2818 = 0;
    GameData_21d2820 = 0;
    GameData_21d2828 = 0;
    GameData_21d2830 = 0;
    GameData_21d2838 = 0;
    GameData_21d2860 = 0;
    GameData_21d2868 = 0;
    GameData_21d2778 = 14;
    GameData_21d2870 = 0;
    GameData_21d2858 = 0;
    GameData_21d2850 = 0;
    GameData_21d2848 = 0;
    GameData_21d2840 = 0;
    GameData_21d2780 = 0;
    GameData_21d2788 = (__int64)ProcUnitDead_76f4e0;
    GameData_21d27c0 = 0;
    GameData_21d27c8 = (__int64)ProcUnitDead_76f540;
    __cxa_guard_release(&GameData_21d2878);
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      168, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4);
  *(_QWORD*)(v4 + 152) = a2;
  *(_QWORD*)v4 = game_map_anonymous_ProcUnitAction_vtable;
  v6 = *GameData_212cfe8[0];
  v7 = *(_DWORD*)(*GameData_212cfe8[0] + 16);
  *(_DWORD*)(*GameData_212cfe8[0] + 16) = v7 + 1;
  if (v7 == 0) {
    (**(void (***)(__int64))(v6 + 8))(v6 + 8);
  }
  *(_QWORD*)v4 = game_map_anonymous_ProcUnitDead_vtable;
  v8 = game_g_shared_system_skills_ptr;
  v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v10) & 1) != 0) {
    *(_BYTE*)(v4 + 160) = 3;
  }
  else if (*(_BYTE*)(a2 + 496) != 0) {
    *(_BYTE*)(v4 + 160) = 1;
  }
  else {
    v11 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v8 + 4) & 0xFFF;
    if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v11) & 1) != 0) {
      *(_BYTE*)(v4 + 160) = 2;
    }
    else {
      *(_BYTE*)(v4 + 160) = 0;
    }
  }
  return ProcInst_657850(v4, (__int64)&GameData_21d25f8,
                         (__int64)"ProcUnitDead", 1, a1);
}

__int64 game_map_76a840(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v10;
  int v11;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d2a40,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21d2a40) != 0) {
    GameData_21d2888 = 0;
    GameData_21d2890 = (__int64)ProcUnitDead_76ecf0;
    GameData_21d2880 = 13;
    GameData_21d28c0 = 13;
    GameData_21d2900 = 13;
    GameData_21d2940 = 13;
    GameData_21d29c0 = 13;
    GameData_21d2898 = 0;
    GameData_21d28a0 = 0;
    GameData_21d28a8 = 0;
    GameData_21d28b0 = 0;
    GameData_21d28b8 = 0;
    GameData_21d28d8 = 0;
    GameData_21d28e0 = 0;
    GameData_21d28c8 = 0;
    GameData_21d28d0 = (__int64)game_map_anonymous_ProcUnitDead_DeadDrop;
    GameData_21d28e8 = 0;
    GameData_21d28f0 = 0;
    GameData_21d28f8 = 0;
    GameData_21d2918 = 0;
    GameData_21d2920 = 0;
    GameData_21d2928 = 0;
    GameData_21d2930 = 0;
    GameData_21d2938 = 0;
    GameData_21d2958 = 0;
    GameData_21d2908 = 0;
    GameData_21d2910 = (__int64)GameRoutine_76ef60;
    GameData_21d2960 = 0;
    GameData_21d2968 = 0;
    GameData_21d2970 = 0;
    GameData_21d2978 = 0;
    GameData_21d2998 = 0;
    GameData_21d29a0 = 0;
    GameData_21d29a8 = 0;
    GameData_21d29b0 = 0;
    GameData_21d29b8 = 0;
    GameData_21d2948 = 0;
    GameData_21d2950 = (__int64)ProcUnitDead_76f480;
    GameData_21d29c8 = 0;
    GameData_21d29d0 = (__int64)ProcUnitDead_76f540;
    GameData_21d29d8 = 0;
    GameData_21d29e0 = 0;
    GameData_21d29e8 = 0;
    GameData_21d29f0 = 0;
    GameData_21d29f8 = 0;
    GameData_21d2a00 = 0;
    GameData_21d2a28 = 0;
    GameData_21d2a30 = 0;
    GameData_21d2a38 = 0;
    GameData_21d2980 = 14;
    GameData_21d2a20 = 0;
    GameData_21d2a10 = 0;
    GameData_21d2a18 = 0;
    GameData_21d2a08 = 0;
    GameData_21d2988 = 0;
    GameData_21d2990 = (__int64)ProcUnitDead_76f4e0;
    __cxa_guard_release(&GameData_21d2a40);
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      168, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4);
  *(_QWORD*)(v4 + 152) = a2;
  *(_QWORD*)v4 = game_map_anonymous_ProcUnitAction_vtable;
  v6 = *GameData_212cfe8[0];
  v7 = *(_DWORD*)(*GameData_212cfe8[0] + 16);
  *(_DWORD*)(*GameData_212cfe8[0] + 16) = v7 + 1;
  if (v7 == 0) {
    (**(void (***)(__int64))(v6 + 8))(v6 + 8);
  }
  *(_QWORD*)v4 = game_map_anonymous_ProcUnitDead_vtable;
  v8 = game_g_shared_system_skills_ptr;
  v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v10) & 1) != 0) {
    *(_BYTE*)(v4 + 160) = 3;
  }
  else if (*(_BYTE*)(a2 + 496) != 0) {
    *(_BYTE*)(v4 + 160) = 1;
  }
  else {
    v11 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v8 + 4) & 0xFFF;
    if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v11) & 1) != 0) {
      *(_BYTE*)(v4 + 160) = 2;
    }
    else {
      *(_BYTE*)(v4 + 160) = 0;
    }
  }
  return ProcInst_657850(v4, (__int64)&GameData_21d2880,
                         (__int64)"ProcUnitDead", 1, a1);
}

__int64 game_map_76aaf0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v10;
  int v11;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d2bc8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21d2bc8) != 0) {
    GameData_21d2a50 = 0;
    GameData_21d2a58 = (__int64)ProcUnitDead_76ecf0;
    GameData_21d2a48 = 13;
    GameData_21d2a88 = 13;
    GameData_21d2ac8 = 13;
    GameData_21d2b48 = 13;
    GameData_21d2a60 = 0;
    GameData_21d2a68 = 0;
    GameData_21d2a70 = 0;
    GameData_21d2a78 = 0;
    GameData_21d2a80 = 0;
    GameData_21d2aa0 = 0;
    GameData_21d2aa8 = 0;
    GameData_21d2ab0 = 0;
    GameData_21d2a90 = 0;
    GameData_21d2a98 = (__int64)GameRoutine_76ef60;
    GameData_21d2ab8 = 0;
    GameData_21d2ac0 = 0;
    GameData_21d2ae0 = 0;
    GameData_21d2ae8 = 0;
    GameData_21d2af0 = 0;
    GameData_21d2af8 = 0;
    GameData_21d2b00 = 0;
    GameData_21d2b20 = 0;
    GameData_21d2b28 = 0;
    GameData_21d2ad0 = 0;
    GameData_21d2ad8 = (__int64)ProcUnitDead_76f480;
    GameData_21d2b30 = 0;
    GameData_21d2b38 = 0;
    GameData_21d2b40 = 0;
    GameData_21d2b50 = 0;
    GameData_21d2b58 = (__int64)ProcUnitDead_76f5d0;
    GameData_21d2b60 = 0;
    GameData_21d2b68 = 0;
    GameData_21d2b70 = 0;
    GameData_21d2b78 = 0;
    GameData_21d2b80 = 0;
    GameData_21d2b88 = 0;
    GameData_21d2b08 = 14;
    GameData_21d2bb0 = 0;
    GameData_21d2bb8 = 0;
    GameData_21d2bc0 = 0;
    GameData_21d2ba8 = 0;
    GameData_21d2b98 = 0;
    GameData_21d2ba0 = 0;
    GameData_21d2b90 = 0;
    GameData_21d2b10 = 0;
    GameData_21d2b18 = (__int64)ProcUnitDead_76f4e0;
    __cxa_guard_release(&GameData_21d2bc8);
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      168, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4);
  *(_QWORD*)(v4 + 152) = a2;
  *(_QWORD*)v4 = game_map_anonymous_ProcUnitAction_vtable;
  v6 = *GameData_212cfe8[0];
  v7 = *(_DWORD*)(*GameData_212cfe8[0] + 16);
  *(_DWORD*)(*GameData_212cfe8[0] + 16) = v7 + 1;
  if (v7 == 0) {
    (**(void (***)(__int64))(v6 + 8))(v6 + 8);
  }
  *(_QWORD*)v4 = game_map_anonymous_ProcUnitDead_vtable;
  v8 = game_g_shared_system_skills_ptr;
  v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v10) & 1) != 0) {
    *(_BYTE*)(v4 + 160) = 3;
  }
  else if (*(_BYTE*)(a2 + 496) != 0) {
    *(_BYTE*)(v4 + 160) = 1;
  }
  else {
    v11 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v8 + 4) & 0xFFF;
    if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v11) & 1) != 0) {
      *(_BYTE*)(v4 + 160) = 2;
    }
    else {
      *(_BYTE*)(v4 + 160) = 0;
    }
  }
  return ProcInst_657850(v4, (__int64)&GameData_21d2a48,
                         (__int64)"ProcUnitDead", 1, a1);
}

__int64 game_map_76b0c0(__int64 a1, __int64 a2)
{
  __int64* v4;
  unsigned int v5;
  unsigned int v6;
  unsigned __int64 v7;
  int v8;
  int v9;
  unsigned __int64 v10;
  __int128 v11;
  __int64 v12;
  char v13;
  char v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  float v21;
  __int128 v22;
  __int128 v23;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  int v32;
  __int64 v34;
  unsigned int v35;
  __int64* v36;
  __int64 v37;
  int v38;
  char v39;
  int v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  int v45;
  char v46;
  __int64 v47;
  _BYTE v48[16];
  __int64 v49[26];

  if (a2 == 0) {
    return 0;
  }
  v47 = 0;
  v45 = 0;
  v46 = 0;
  v38 = 0;
  v40 = 1;
  v39 = 9;
  v4 = GameData_212d178[0];
  v5 = *(char*)(a2 + 584);
  v6 = *(char*)(a2 + 585);
  v36 = GameData_212d178[0] + 2;
  IRoute_751ba0_alt1((__int64)&v36, a2, v5, v6);
  v7 = (unsigned int)v38;
  if (v38 < 1) {
    return 0;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v8 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v9 = (v8 & 8) != 0 ? 2 : 3;
    if ((v9 & v8) == 0) {
      goto LABEL_16;
    }
  }
  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_25;
  }
  v10 =
      game_ProcFadeView_instance_ +
      ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
       << 6);
  if (*(float*)(v10 + 172) == *(float*)(v10 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v10 + 160) + 16LL))(v10 + 160);
  }
  else {
    v11 = *(_OWORD*)(v10 + 208);
  }
  if (*((float*)&v11 + 3) == 0x1.0000000000000p+0f &&
      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v10 + 160) + 16LL))(
                      v10 + 160, *((float*)&v11 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
  LABEL_16:
    v13 = IRoute_751080((unsigned int*)&v36, a2);
    v14 = IRoute_751300((unsigned int*)&v36, a2);
    *(_BYTE*)(a2 + 584) = v13;
    *(_BYTE*)(a2 + 585) = v14;
    GameHr_6c7cb0(a2, v13, v14);
    v15 = *(_QWORD*)(a2 + 8);
    if (v15 != 0) {
      v16 = *(char*)(v15 + 584);
      if ((v16 & 0x80000000) == 0) {
        v17 = *(char*)(v15 + 585);
        if ((v17 & 0x80000000) == 0) {
          v18 = *(_DWORD*)(v15 + 592);
          v19 = v16 | 0x100;
          v20 = v17 | 0x100;
          v21 = (float)(unsigned int)(v18 - 1) * 0x1.4000000000000p+1f;
          if (v18 <= 0) {
            v21 = 0x0.0p+0f;
          }
          *(_QWORD*)&v22 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v19 * 0x1.4000000000000p+2f) +
                              0x1.4000000000000p+1f) +
                      -0x1.4000000000000p+10f) +
              v21);
          v34 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v20 * 0x1.4000000000000p+2f) +
                              0x1.4000000000000p+1f) +
                      -0x1.4000000000000p+10f) +
              v21);
          *(float*)&v35 =
              (float)((float)((float)((float)v19 * 0x1.4000000000000p+2f) +
                              0x1.4000000000000p+1f) +
                      -0x1.4000000000000p+10f) +
              v21;
          *((_QWORD*)&v22 + 1) = v34;
          *(_OWORD*)v49 = v22;
          *(_QWORD*)&v23 = __PAIR64__(
              COERCE_UNSIGNED_INT(Unit_6c7fa0(v15, (__int64)v49)), v35);
          *((_QWORD*)&v23 + 1) = v34;
          *(_OWORD*)v49 = v23;
          Cursor_734a80_alt1(a2 + 48, v49);
          UnitActor_81ba20_alt1(a2);
        }
      }
      v25 = *(_QWORD*)(a2 + 264);
      if (v25 != 0) {
        CharacterBuilder_1084780_alt2(v25);
      }
    }
    v26 = *GameData_212ce98[0];
    v27 = *(_QWORD**)(*GameData_212ce98[0] + 96);
    Image_72b4a0_alt1((__int64)v27);
    Image_72b6c0_alt1(v27);
    Image_72a260_alt2(*(_QWORD*)(v26 + 152));
    return 0;
  }
  else {
  LABEL_25:
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         384, 16, 0);
    v28 = GameData_212c608[0];
    *(_QWORD*)(v12 + 96) = 0;
    *(_QWORD*)(v12 + 104) = 0;
    *(_QWORD*)(v12 + 112) = 0;
    *(_QWORD*)(v12 + 120) = 0;
    *(_QWORD*)(v12 + 128) = 0;
    *(_WORD*)(v12 + 136) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_QWORD*)(v12 + 24) = "NULL";
    *(_QWORD*)(v12 + 138) = 0;
    *(_QWORD*)(v12 + 144) = 0;
    *(_QWORD*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 40) = 0;
    *(_QWORD*)(v12 + 48) = 0;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 0;
    *(_QWORD*)(v12 + 80) = 0;
    *(_QWORD*)(v12 + 88) = 0;
    *(_QWORD*)v12 = v28 + 16;
    *(_QWORD*)(v12 + 8) = 0;
    game_ProcInst_Register(v12);
    *(_QWORD*)(v12 + 152) = a2;
    *(_QWORD*)v12 = game_map_anonymous_ProcUnitAction_vtable;
    v29 = *GameData_212cfe8[0];
    v30 = *(_DWORD*)(*GameData_212cfe8[0] + 16);
    *(_DWORD*)(*GameData_212cfe8[0] + 16) = v30 + 1;
    if (v30 == 0) {
      (**(void (***)(__int64))(v29 + 8))(v29 + 8);
    }
    *(_QWORD*)(v12 + 344) = 0;
    *(_QWORD*)(v12 + 368) = 0;
    *(_QWORD*)v12 = game_map_anonymous_ProcUnitFollow_vtable;
    *(_QWORD*)(v12 + 160) = v4 + 2;
    *(_DWORD*)(v12 + 376) = 0x2000;
    memcpy_alt1(v12 + 168, (__int64)&v37, v7);
    v31 = v41;
    *(_DWORD*)(v12 + 296) = v7;
    *(_DWORD*)(v12 + 352) = 0;
    *(_QWORD*)(v12 + 308) = v31;
    v32 = v40;
    *(_BYTE*)(v12 + 300) = v39;
    LODWORD(v31) = v42;
    *(_DWORD*)(v12 + 304) = v32;
    *(_DWORD*)(v12 + 316) = v31;
    *(_QWORD*)(v12 + 320) = v43;
    LODWORD(v31) = v44;
    *(_DWORD*)(v12 + 332) = v45;
    LOBYTE(v32) = v46;
    *(_DWORD*)(v12 + 328) = v31;
    *(_BYTE*)(v12 + 336) = v32;
    *(_QWORD*)(v12 + 356) = 1084227584;
    snd_Fade_Fade_10c830_alt1((__int64)v49, 0x0.0p+0f);
    snd_play_ff2d0_alt1((__int64)"SE_EFF_Terrain_QuickSand_lp",
                        (__int64)"SE_EFF_Terrain_QuickSand_lp", (__int64)v49, 0,
                        0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v49);
    GameRoutine_112180_alt1(v12 + 368, (__int64)v48);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21c6868) != 0) {
      GameData_21c67a8 = 3;
      GameData_21c67d0 = 0;
      GameData_21c67d8 = 0;
      GameData_21c67e0 = 0;
      GameData_21c67b0 = 0;
      GameData_21c67b8 = 0;
      GameData_21c67c0 = 0;
      GameData_21c67c8 = 0;
      GameData_21c6808 = 0;
      GameData_21c6810 = 0;
      GameData_21c6818 = 0;
      GameData_21c6820 = 0;
      GameData_21c6828 = 0;
      GameData_21c6850 = 0;
      GameData_21c6858 = 0;
      GameData_21c6860 = 0;
      GameData_21c6848 = 0;
      GameData_21c6838 = 0;
      GameData_21c6840 = 0;
      GameData_21c6830 = 0;
      GameData_21c67e8 = 14;
      GameData_21c67f0 = 0;
      GameData_21c67f8 = 16;
      GameData_21c6800 = 1;
      __cxa_guard_release_alt1((__int64)&GameData_21c6868);
    }
    ProcInst_657850(v12, (__int64)&GameData_21c67a8, (__int64)"ProcUnitFollow",
                    1, a1);
  }
  return v12;
}

__int64 game_map_76b8c0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v5;
  int v6;
  __int64 v10;
  char v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  _BYTE* v17;
  char v18;
  __int64 v19;
  char v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  float v27;
  __int128 v28;
  __int128 v29;
  __int64 v31;
  unsigned int v32;
  __int128 v33;
  int v34;

  if (a2 == 0) {
    return 0;
  }
  if (a1 == 0 ||
      game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
          (((v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v6 = 2)
               : (v6 = 3),
           (v6 & v5) == 0)) {
    if (a3 != 0) {
      v19 = (a4 & 1) != 0 ? *(_QWORD*)(a3 + 592) : 0LL;
      Unit_6dfe00(a2, v19);
      if ((UnitNatives_753e40(&v33, &v34, a2, 0xFFFFFFFFLL, 0xFFFFFFFFLL) &
           1) != 0) {
        v20 = v34;
        *(_BYTE*)(a2 + 584) = v33;
        *(_BYTE*)(a2 + 585) = v20;
      }
    }
    v21 = *(_QWORD*)(a2 + 8);
    if (v21 != 0) {
      v22 = *(char*)(v21 + 584);
      if ((v22 & 0x80000000) == 0) {
        v23 = *(char*)(v21 + 585);
        if ((v23 & 0x80000000) == 0) {
          v24 = *(_DWORD*)(v21 + 592);
          v25 = v22 | 0x100;
          v26 = v23 | 0x100;
          v27 = (float)(unsigned int)(v24 - 1) * 2.5f;
          if (v24 <= 0) {
            v27 = 0.0f;
          }
          *(_QWORD*)&v28 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v25 * 5.0f) + 2.5f) +
                      -0x1.4000000000000p+10f) +
              v27);
          v31 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v26 * 5.0f) + 2.5f) +
                      -0x1.4000000000000p+10f) +
              v27);
          *(float*)&v32 = (float)((float)((float)((float)v25 * 5.0f) + 2.5f) +
                                  -0x1.4000000000000p+10f) +
                          v27;
          *((_QWORD*)&v28 + 1) = v31;
          v33 = v28;
          *(_QWORD*)&v29 = __PAIR64__(
              COERCE_UNSIGNED_INT(Unit_6c7fa0(v21, (__int64)&v33)), v32);
          *((_QWORD*)&v29 + 1) = v31;
          v33 = v29;
          Cursor_734a80_alt1(a2 + 48, (__int64*)&v33);
          UnitActor_81ba20(a2);
        }
      }
      if (*(_QWORD*)(a2 + 264) != 0) {
        CharacterBuilder_1084780();
      }
    }
    return 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d2ee0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21d2ee0) != 0) {
    GameData_21d2d80 = 0;
    GameData_21d2d88 = 0;
    GameData_21d2d68 = 0;
    GameData_21d2d90 = 0;
    GameData_21d2d70 = (__int64)GameRoutine_7709f0;
    GameData_21d2d78 = 0;
    GameData_21d2de8 = 0;
    GameData_21d2df0 = (__int64)game_map_anonymous_770a30;
    GameData_21d2d60 = 13;
    GameData_21d2d98 = 0;
    GameData_21d2da8 = 0;
    GameData_21d2db0 = 0;
    GameData_21d2db8 = 0;
    GameData_21d2dc0 = 2;
    GameData_21d2dc8 = 0;
    GameData_21d2da0 = 4;
    GameData_21d2dd0 = 250;
    GameData_21d2dd8 = 0;
    GameData_21d2de0 = 13;
    GameData_21d2df8 = 0;
    GameData_21d2e00 = 0;
    GameData_21d2e08 = 0;
    GameData_21d2e10 = 0;
    GameData_21d2e18 = 0;
    GameData_21d2e20 = 13;
    GameData_21d2e28 = 0;
    GameData_21d2e30 = (__int64)GameRoutine_770bb0;
    GameData_21d2e38 = 0;
    GameData_21d2e40 = 0;
    GameData_21d2e48 = 0;
    GameData_21d2e50 = 0;
    GameData_21d2e58 = 0;
    GameData_21d2e60 = 4;
    GameData_21d2e70 = 0;
    GameData_21d2e78 = 0;
    GameData_21d2e68 = 0;
    GameData_21d2e80 = 2;
    GameData_21d2e88 = 0;
    GameData_21d2e90 = 250;
    GameData_21d2e98 = 0;
    GameData_21d2ea0 = 0;
    GameData_21d2ec8 = 0;
    GameData_21d2ed0 = 0;
    GameData_21d2ed8 = 0;
    GameData_21d2ea8 = 0;
    GameData_21d2eb0 = 0;
    GameData_21d2eb8 = 0;
    GameData_21d2ec0 = 0;
    __cxa_guard_release(&GameData_21d2ee0);
  }
  v10 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
  v11 = a4 & 1;
  v12 = GameData_212c608[0];
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 32) = 0;
  v13 = (_QWORD*)(v10 + 32);
  *(_QWORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 24) = "NULL";
  *(_QWORD*)(v10 + 138) = 0;
  *(_QWORD*)(v10 + 144) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 80) = 0;
  *(_QWORD*)v10 = v12 + 16;
  *(_QWORD*)(v10 + 8) = 0;
  game_ProcInst_Register_alt1();
  *(_QWORD*)(v10 + 152) = a2;
  *(_QWORD*)v10 = game_map_anonymous_ProcUnitAction_vtable;
  v14 = *GameData_212cfe8[0];
  v15 = *(_DWORD*)(*GameData_212cfe8[0] + 16);
  *(_DWORD*)(*GameData_212cfe8[0] + 16) = v15 + 1;
  if (v15 == 0) {
    (**(void (***)(__int64))(v14 + 8))(v14 + 8);
  }
  *(_QWORD*)(v10 + 160) = a3;
  *(_BYTE*)(v10 + 168) = v11;
  *(_QWORD*)v10 = game_map_anonymous_ProcUnitMorph_vtable;
  v16 = *(_QWORD*)(a1 + 40);
  if (v16 != 0) {
    *(_QWORD*)(v16 + 48) = v10;
    *(_QWORD*)(v10 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v10;
  *(_QWORD*)(v10 + 24) = "ProcUnitMorph";
  *(_QWORD*)(v10 + 32) = a1;
  *(_DWORD*)(v10 + 140) = game_HashString32_alt1("ProcUnitMorph");
  *(_QWORD*)(v10 + 8) = &GameData_21d2d60;
  *(_QWORD*)(v10 + 16) = &GameData_21d2d60;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 24;
  *(_QWORD*)(v10 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 136LL))(v10) & 1) != 0 &&
      (*(_WORD*)(v10 + 136) & 0x100) == 0) {
    *(_WORD*)(v10 + 136) |= 0x100u;
  }
  v17 = (_BYTE*)*v13;
  v18 = *(_BYTE*)(*v13 + 138LL);
  if (v18 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v17 + 64LL))(*v13);
    v18 = v17[138];
  }
  v17[138] = v18 + 1;
  *(_WORD*)(v10 + 136) |= 2u;
  return v10;
}

__int64 game_map_76c260(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 result;
  int v5;
  int v6;
  int v7;
  unsigned __int64 v8;
  __int128 v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  __int128 v13;
  int v14;
  int v15;
  unsigned __int64 v16;
  __int128 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;

  if ((*(_BYTE*)(a2 + 416) & 8) != 0) {
    return 0;
  }
  if (Situation_7652c0()) {
    return 0;
  }
  v5 = (unsigned __int8)Unit_6cb640(a2);
  result = 0;
  if (v5 <= 2) {
    if (v5 == 1) {
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v14 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v15 = 2)
               : (v15 = 3),
           (v15 & v14) != 0)) {
        if (game_ProcFadeView_instance_ == 0) {
          goto LABEL_73;
        }
        v16 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        if (*(float*)(v16 + 172) == *(float*)(v16 + 168)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v16 + 160) + 16LL))(v16 +
                                                                         160);
        }
        else {
          v17 = *(_OWORD*)(v16 + 208);
        }
        if (*((float*)&v17 + 3) != 0x1.0000000000000p+0f ||
            LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v16 + 160) + 16LL))(
                            v16 + 160, *((float*)&v17 + 3)))
                    .n128_f32[3] != 0x1.0000000000000p+0f) {
        LABEL_73:
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d3128,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21d3128) != 0) {
            GameData_21d2ef0 = 0;
            GameData_21d2ef8 = 160;
            GameData_21d2ee8 = 13;
            GameData_21d2f28 = 13;
            GameData_21d2fa8 = 13;
            GameData_21d2fe8 = 13;
            GameData_21d3028 = 13;
            GameData_21d3068 = 13;
            GameData_21d30a8 = 13;
            GameData_21d2f00 = 1;
            GameData_21d2f08 = 0;
            GameData_21d2f10 = 0;
            GameData_21d2f18 = 0;
            GameData_21d2f20 = 0;
            GameData_21d2f40 = 1;
            GameData_21d2f48 = 0;
            GameData_21d2f30 = 0;
            GameData_21d2f38 = 168;
            GameData_21d2f50 = 0;
            GameData_21d2f58 = 0;
            GameData_21d2f60 = 0;
            GameData_21d2f80 = 1;
            GameData_21d2f88 = 0;
            GameData_21d2f90 = 0;
            GameData_21d2f98 = 0;
            GameData_21d2fa0 = 0;
            GameData_21d2fc0 = 1;
            GameData_21d2fc8 = 0;
            GameData_21d2f68 = 14;
            GameData_21d2fd0 = 0;
            GameData_21d2fd8 = 0;
            GameData_21d2fe0 = 0;
            GameData_21d3000 = 1;
            GameData_21d3008 = 0;
            GameData_21d3010 = 0;
            GameData_21d3018 = 0;
            GameData_21d3020 = 0;
            GameData_21d3040 = 1;
            GameData_21d3048 = 0;
            GameData_21d2f70 = 0;
            GameData_21d2f78 = 176;
            GameData_21d3050 = 0;
            GameData_21d3058 = 0;
            GameData_21d3060 = 0;
            GameData_21d3080 = 1;
            GameData_21d3088 = 0;
            GameData_21d3090 = 0;
            GameData_21d3098 = 0;
            GameData_21d30a0 = 0;
            GameData_21d30b0 = 0;
            GameData_21d30b8 = 216;
            GameData_21d30c0 = 1;
            GameData_21d2fb0 = 0;
            GameData_21d2fb8 = 184;
            GameData_21d30c8 = 0;
            GameData_21d30d0 = 0;
            GameData_21d30d8 = 0;
            GameData_21d30e0 = 0;
            GameData_21d30e8 = 0;
            GameData_21d3110 = 0;
            GameData_21d3118 = 0;
            GameData_21d3120 = 0;
            GameData_21d3108 = 0;
            GameData_21d3100 = 0;
            GameData_21d2ff0 = 0;
            GameData_21d2ff8 = 192;
            GameData_21d30f8 = 0;
            GameData_21d30f0 = 0;
            GameData_21d3030 = 0;
            GameData_21d3038 = 208;
            GameData_21d3070 = 0;
            GameData_21d3078 = 200;
            __cxa_guard_release(&GameData_21d3128);
          }
          v18 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 11472, 16, 0);
          v29 = GameData_212c608[0];
          *(_QWORD*)(v18 + 96) = 0;
          *(_QWORD*)(v18 + 104) = 0;
          *(_QWORD*)(v18 + 112) = 0;
          *(_QWORD*)(v18 + 120) = 0;
          *(_QWORD*)(v18 + 128) = 0;
          *(_WORD*)(v18 + 136) = 0;
          *(_QWORD*)(v18 + 16) = 0;
          *(_QWORD*)(v18 + 24) = "NULL";
          *(_QWORD*)(v18 + 138) = 0;
          *(_QWORD*)(v18 + 144) = 0;
          *(_QWORD*)(v18 + 32) = 0;
          *(_QWORD*)(v18 + 40) = 0;
          *(_QWORD*)(v18 + 48) = 0;
          *(_QWORD*)(v18 + 56) = 0;
          *(_QWORD*)(v18 + 64) = 0;
          *(_QWORD*)(v18 + 72) = 0;
          *(_QWORD*)(v18 + 80) = 0;
          *(_QWORD*)(v18 + 88) = 0;
          *(_QWORD*)v18 = v29 + 16;
          *(_QWORD*)(v18 + 8) = 0;
          game_ProcInst_Register(v18);
          *(_QWORD*)(v18 + 152) = a2;
          *(_QWORD*)v18 = game_map_anonymous_ProcUnitAction_vtable;
          v30 = *GameData_212cfe8[0];
          v31 = *(_DWORD*)(*GameData_212cfe8[0] + 16);
          *(_DWORD*)(*GameData_212cfe8[0] + 16) = v31 + 1;
          if (v31 == 0) {
            (**(void (***)(__int64))(v30 + 8))(v30 + 8);
          }
          *(_QWORD*)v18 = game_map_anonymous_ProcUnitBlazeOn_vtable;
          GameRoutine_790080(v18 + 160);
          v22 = &GameData_21d2ee8;
          return ProcInst_657850(v18, (__int64)v22, (__int64)&GameData_1a89034,
                                 1, a1);
        }
      }
      goto LABEL_55;
    }
    if (v5 != 2) {
      return result;
    }
  }
  else {
    if ((unsigned int)(v5 - 3) < 2) {
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v7 = 2)
               : (v7 = 3),
           (v7 & v6) != 0)) {
        if (game_ProcFadeView_instance_ == 0) {
          goto LABEL_69;
        }
        v8 = game_ProcFadeView_instance_ +
             ((unsigned __int64)*(
                  unsigned __int8*)(game_ProcFadeView_instance_ + 480)
              << 6);
        if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 +
                                                                        160);
        }
        else {
          v9 = *(_OWORD*)(v8 + 208);
        }
        if (*((float*)&v9 + 3) != 0x1.0000000000000p+0f ||
            LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v8 + 160) + 16LL))(
                            v8 + 160, *((float*)&v9 + 3)))
                    .n128_f32[3] != 0x1.0000000000000p+0f) {
        LABEL_69:
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d35b8,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21d35b8) != 0) {
            GameData_21d3380 = 0;
            GameData_21d3388 = 160;
            GameData_21d3378 = 13;
            GameData_21d33b8 = 13;
            GameData_21d3438 = 13;
            GameData_21d3478 = 13;
            GameData_21d34b8 = 13;
            GameData_21d34f8 = 13;
            GameData_21d3538 = 13;
            GameData_21d3390 = 1;
            GameData_21d3398 = 0;
            GameData_21d33a0 = 0;
            GameData_21d33a8 = 0;
            GameData_21d33b0 = 0;
            GameData_21d33d0 = 1;
            GameData_21d33d8 = 0;
            GameData_21d33c0 = 0;
            GameData_21d33c8 = 168;
            GameData_21d33e0 = 0;
            GameData_21d33e8 = 0;
            GameData_21d33f0 = 0;
            GameData_21d3410 = 1;
            GameData_21d3418 = 0;
            GameData_21d3420 = 0;
            GameData_21d3428 = 0;
            GameData_21d3430 = 0;
            GameData_21d3450 = 1;
            GameData_21d3458 = 0;
            GameData_21d33f8 = 14;
            GameData_21d3460 = 0;
            GameData_21d3468 = 0;
            GameData_21d3470 = 0;
            GameData_21d3490 = 1;
            GameData_21d3498 = 0;
            GameData_21d34a0 = 0;
            GameData_21d34a8 = 0;
            GameData_21d34b0 = 0;
            GameData_21d34d0 = 1;
            GameData_21d34d8 = 0;
            GameData_21d3400 = 0;
            GameData_21d3408 = 176;
            GameData_21d34e0 = 0;
            GameData_21d34e8 = 0;
            GameData_21d34f0 = 0;
            GameData_21d3510 = 1;
            GameData_21d3518 = 0;
            GameData_21d3520 = 0;
            GameData_21d3528 = 0;
            GameData_21d3530 = 0;
            GameData_21d3540 = 0;
            GameData_21d3548 = 216;
            GameData_21d3550 = 1;
            GameData_21d3440 = 0;
            GameData_21d3448 = 184;
            GameData_21d3558 = 0;
            GameData_21d3560 = 0;
            GameData_21d3568 = 0;
            GameData_21d3570 = 0;
            GameData_21d3578 = 0;
            GameData_21d35a0 = 0;
            GameData_21d35a8 = 0;
            GameData_21d35b0 = 0;
            GameData_21d3598 = 0;
            GameData_21d3590 = 0;
            GameData_21d3480 = 0;
            GameData_21d3488 = 192;
            GameData_21d3588 = 0;
            GameData_21d3580 = 0;
            GameData_21d34c0 = 0;
            GameData_21d34c8 = 208;
            GameData_21d3500 = 0;
            GameData_21d3508 = 200;
            __cxa_guard_release(&GameData_21d35b8);
          }
          v18 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
          v19 = GameData_212c608[0];
          *(_QWORD*)(v18 + 96) = 0;
          *(_QWORD*)(v18 + 104) = 0;
          *(_QWORD*)(v18 + 112) = 0;
          *(_QWORD*)(v18 + 120) = 0;
          *(_QWORD*)(v18 + 128) = 0;
          *(_WORD*)(v18 + 136) = 0;
          *(_QWORD*)(v18 + 16) = 0;
          *(_QWORD*)(v18 + 24) = "NULL";
          *(_QWORD*)(v18 + 138) = 0;
          *(_QWORD*)(v18 + 144) = 0;
          *(_QWORD*)(v18 + 32) = 0;
          *(_QWORD*)(v18 + 40) = 0;
          *(_QWORD*)(v18 + 48) = 0;
          *(_QWORD*)(v18 + 56) = 0;
          *(_QWORD*)(v18 + 64) = 0;
          *(_QWORD*)(v18 + 72) = 0;
          *(_QWORD*)(v18 + 80) = 0;
          *(_QWORD*)(v18 + 88) = 0;
          *(_QWORD*)v18 = v19 + 16;
          *(_QWORD*)(v18 + 8) = 0;
          game_ProcInst_Register(v18);
          *(_QWORD*)(v18 + 152) = a2;
          *(_QWORD*)v18 = game_map_anonymous_ProcUnitAction_vtable;
          v20 = *GameData_212cfe8[0];
          v21 = *(_DWORD*)(*GameData_212cfe8[0] + 16);
          *(_DWORD*)(*GameData_212cfe8[0] + 16) = v21 + 1;
          if (v21 == 0) {
            (**(void (***)(__int64))(v20 + 8))(v20 + 8);
          }
          *(_DWORD*)(v18 + 160) = 0;
          v22 = &GameData_21d3378;
          *(_QWORD*)v18 = game_map_anonymous_ProcUnitBurstAdd_vtable;
          return ProcInst_657850(v18, (__int64)v22, (__int64)&GameData_1a89034,
                                 1, a1);
        }
      }
      goto LABEL_55;
    }
    if (v5 != 5) {
      return result;
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v11 = 2)
           : (v11 = 3),
       (v11 & v10) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_71;
    }
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
    if (*((float*)&v13 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v12 + 160) + 16LL))(
                        v12 + 160, *((float*)&v13 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_71:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d3370,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21d3370) != 0) {
        GameData_21d3138 = 0;
        GameData_21d3140 = 160;
        GameData_21d3130 = 13;
        GameData_21d3170 = 13;
        GameData_21d31f0 = 13;
        GameData_21d3230 = 13;
        GameData_21d3270 = 13;
        GameData_21d32b0 = 13;
        GameData_21d32f0 = 13;
        GameData_21d3148 = 1;
        GameData_21d3150 = 0;
        GameData_21d3158 = 0;
        GameData_21d3160 = 0;
        GameData_21d3168 = 0;
        GameData_21d3188 = 1;
        GameData_21d3190 = 0;
        GameData_21d3178 = 0;
        GameData_21d3180 = 168;
        GameData_21d3198 = 0;
        GameData_21d31a0 = 0;
        GameData_21d31a8 = 0;
        GameData_21d31c8 = 1;
        GameData_21d31d0 = 0;
        GameData_21d31d8 = 0;
        GameData_21d31e0 = 0;
        GameData_21d31e8 = 0;
        GameData_21d3208 = 1;
        GameData_21d3210 = 0;
        GameData_21d31b0 = 14;
        GameData_21d3218 = 0;
        GameData_21d3220 = 0;
        GameData_21d3228 = 0;
        GameData_21d3248 = 1;
        GameData_21d3250 = 0;
        GameData_21d3258 = 0;
        GameData_21d3260 = 0;
        GameData_21d3268 = 0;
        GameData_21d3288 = 1;
        GameData_21d3290 = 0;
        GameData_21d31b8 = 0;
        GameData_21d31c0 = 176;
        GameData_21d3298 = 0;
        GameData_21d32a0 = 0;
        GameData_21d32a8 = 0;
        GameData_21d32c8 = 1;
        GameData_21d32d0 = 0;
        GameData_21d32d8 = 0;
        GameData_21d32e0 = 0;
        GameData_21d32e8 = 0;
        GameData_21d32f8 = 0;
        GameData_21d3300 = 216;
        GameData_21d3308 = 1;
        GameData_21d31f8 = 0;
        GameData_21d3200 = 184;
        GameData_21d3310 = 0;
        GameData_21d3318 = 0;
        GameData_21d3320 = 0;
        GameData_21d3328 = 0;
        GameData_21d3330 = 0;
        GameData_21d3358 = 0;
        GameData_21d3360 = 0;
        GameData_21d3368 = 0;
        GameData_21d3350 = 0;
        GameData_21d3348 = 0;
        GameData_21d3238 = 0;
        GameData_21d3240 = 192;
        GameData_21d3340 = 0;
        GameData_21d3338 = 0;
        GameData_21d3278 = 0;
        GameData_21d3280 = 208;
        GameData_21d32b8 = 0;
        GameData_21d32c0 = 200;
        __cxa_guard_release(&GameData_21d3370);
      }
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
      v23 = GameData_212c608[0];
      *(_QWORD*)(v18 + 96) = 0;
      *(_QWORD*)(v18 + 104) = 0;
      *(_QWORD*)(v18 + 112) = 0;
      *(_QWORD*)(v18 + 120) = 0;
      *(_QWORD*)(v18 + 128) = 0;
      *(_WORD*)(v18 + 136) = 0;
      *(_QWORD*)(v18 + 16) = 0;
      *(_QWORD*)(v18 + 24) = "NULL";
      *(_QWORD*)(v18 + 138) = 0;
      *(_QWORD*)(v18 + 144) = 0;
      *(_QWORD*)(v18 + 32) = 0;
      *(_QWORD*)(v18 + 40) = 0;
      *(_QWORD*)(v18 + 48) = 0;
      *(_QWORD*)(v18 + 56) = 0;
      *(_QWORD*)(v18 + 64) = 0;
      *(_QWORD*)(v18 + 72) = 0;
      *(_QWORD*)(v18 + 80) = 0;
      *(_QWORD*)(v18 + 88) = 0;
      *(_QWORD*)v18 = v23 + 16;
      *(_QWORD*)(v18 + 8) = 0;
      game_ProcInst_Register(v18);
      *(_QWORD*)(v18 + 152) = a2;
      *(_QWORD*)v18 = game_map_anonymous_ProcUnitAction_vtable;
      v24 = *GameData_212cfe8[0];
      v25 = *(_DWORD*)(*GameData_212cfe8[0] + 16);
      *(_DWORD*)(*GameData_212cfe8[0] + 16) = v25 + 1;
      if (v25 == 0) {
        (**(void (***)(__int64))(v24 + 8))(v24 + 8);
      }
      v22 = &GameData_21d3130;
      *(_DWORD*)(v18 + 160) = 0;
      *(_QWORD*)v18 = game_map_anonymous_ProcUnitBlazeOff_vtable;
      return ProcInst_657850(v18, (__int64)v22, (__int64)&GameData_1a89034, 1,
                             a1);
    }
  }
LABEL_55:
  Unit_6cb490(a2);
  v26 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] == 0) {
    return 0;
  }
  result = 0;
  if (*(_BYTE*)(v26 + 8) == 1 && (*(_BYTE*)(v26 + 9) & 1) == 0) {
    v27 = *(_QWORD*)(a2 + 440);
    if (v27 == 0) {
      return 0;
    }
    if (*(unsigned __int8*)(v27 + 16) > 8u) {
      return 0;
    }
    if (game_map_UnitFlags_instance_ == 0) {
      return 0;
    }
    v28 = *(unsigned __int8*)(a2 + 2088);
    if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v28) & 1) == 0) {
      return 0;
    }
    *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v28) |= 2u;
    return 0;
  }
  return result;
}

__int64 game_map_76ccf0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v7;
  int v8;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  int v19;
  float v20;
  __int128 v21;
  float v22;
  int v23;
  __int128 v24;
  float v25;
  float v26;
  __int128 v27;
  float v28;
  __int128 v29;
  __int64 v30;
  _BYTE* v31;
  char v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  float v39;
  __int128 v40;
  __int128 v41;
  __int64 v42;
  __int64 v43;
  unsigned int v45;
  float v46;
  __int64 v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  __int128 v51;

  if (a2 == 0 || a3 == a5 && a4 == a6) {
    return 0;
  }
  if (a1 == 0 ||
      game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
          (((v7 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v8 = 2)
               : (v8 = 3),
           (v8 & v7) == 0)) {
    *(_BYTE*)(a2 + 584) = a5;
    *(_BYTE*)(a2 + 585) = a6;
    GameRoutine_6c7cb0_alt1(a2, (unsigned int)(char)a5, (unsigned int)(char)a6);
    v33 = *(_QWORD*)(a2 + 8);
    if (v33 != 0) {
      v34 = *(char*)(v33 + 584);
      if ((v34 & 0x80000000) == 0) {
        v35 = *(char*)(v33 + 585);
        if ((v35 & 0x80000000) == 0) {
          v36 = *(_DWORD*)(v33 + 592);
          v37 = v34 | 0x100;
          v38 = v35 | 0x100;
          v39 = (float)(unsigned int)(v36 - 1) * 2.5f;
          if (v36 <= 0) {
            v39 = 0.0f;
          }
          *(_QWORD*)&v40 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v37 * 5.0f) + 2.5f) +
                      -0x1.4000000000000p+10f) +
              v39);
          v47 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v38 * 5.0f) + 2.5f) +
                      -0x1.4000000000000p+10f) +
              v39);
          *(float*)&v50 = (float)((float)((float)((float)v37 * 5.0f) + 2.5f) +
                                  -0x1.4000000000000p+10f) +
                          v39;
          *((_QWORD*)&v40 + 1) = v47;
          v51 = v40;
          *(_QWORD*)&v41 = __PAIR64__(
              COERCE_UNSIGNED_INT(Unit_6c7fa0(v33, (__int64)&v51)), v50);
          *((_QWORD*)&v41 + 1) = v47;
          v51 = v41;
          Cursor_734a80_alt1(a2 + 48, (__int64*)&v51);
          UnitActor_81ba20(a2);
        }
      }
      if (*(_QWORD*)(a2 + 264) != 0) {
        CharacterBuilder_1084780();
      }
    }
    v42 = *GameData_212ce98[0];
    v43 = *(_QWORD*)(*GameData_212ce98[0] + 96);
    Image_72b4a0(v43);
    Image_72b6c0(v43);
    Image_72a260_alt1(*(_QWORD*)(v42 + 152));
    return 0;
  }
  v14 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
  v15 = GameData_212c608[0];
  *(_QWORD*)(v14 + 88) = 0;
  *(_QWORD*)(v14 + 96) = 0;
  *(_QWORD*)(v14 + 104) = 0;
  *(_QWORD*)(v14 + 112) = 0;
  *(_QWORD*)(v14 + 120) = 0;
  *(_QWORD*)(v14 + 128) = 0;
  *(_WORD*)(v14 + 136) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_QWORD*)(v14 + 24) = "NULL";
  *(_QWORD*)(v14 + 32) = 0;
  v16 = (_QWORD*)(v14 + 32);
  *(_QWORD*)(v14 + 138) = 0;
  *(_QWORD*)(v14 + 144) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_QWORD*)(v14 + 80) = 0;
  *(_QWORD*)v14 = v15 + 16;
  *(_QWORD*)(v14 + 8) = 0;
  game_ProcInst_Register_alt1();
  *(_QWORD*)(v14 + 152) = a2;
  *(_QWORD*)v14 = game_map_anonymous_ProcUnitAction_vtable;
  v17 = *GameData_212cfe8[0];
  v18 = *(_DWORD*)(*GameData_212cfe8[0] + 16);
  *(_DWORD*)(*GameData_212cfe8[0] + 16) = v18 + 1;
  if (v18 == 0) {
    (**(void (***)(__int64))(v17 + 8))(v17 + 8);
  }
  *(_DWORD*)(v14 + 160) = a5;
  *(_DWORD*)(v14 + 164) = a6;
  *(_QWORD*)(v14 + 168) = 0;
  *(_QWORD*)(v14 + 176) = 0;
  *(_QWORD*)(v14 + 184) = 0;
  *(_QWORD*)(v14 + 192) = 0;
  *(_QWORD*)(v14 + 200) = 0;
  *(_QWORD*)v14 = game_map_anonymous_ProcUnitTranslate_vtable;
  v19 = *(_DWORD*)(a2 + 592);
  v20 = (float)(unsigned int)(v19 - 1) * 2.5f;
  if (v19 <= 0) {
    v20 = 0.0f;
  }
  *(float*)&v45 = (float)((float)((float)((float)(a3 + 256) * 5.0f) + 2.5f) +
                          -0x1.4000000000000p+10f) +
                  v20;
  *(float*)&v48 = (float)((float)((float)((float)(a4 + 256) * 5.0f) + 2.5f) +
                          -0x1.4000000000000p+10f) +
                  v20;
  *(_QWORD*)&v21 = v45;
  *((_QWORD*)&v21 + 1) = v48;
  v51 = v21;
  v22 = Unit_6c7fa0(a2, (__int64)&v51);
  v23 = *(_DWORD*)(a2 + 592);
  *(float*)(v14 + 176) = *(float*)&v45;
  *(float*)(v14 + 180) = v22;
  v24 = *(_OWORD*)(v14 + 176);
  *((_QWORD*)&v24 + 1) = v48;
  v25 = (float)((float)((float)(a5 + 256) * 5.0f) + 2.5f) +
        -0x1.4000000000000p+10f;
  *(_OWORD*)(v14 + 176) = v24;
  v26 = (float)(unsigned int)(v23 - 1) * 2.5f;
  if (v23 <= 0) {
    v26 = 0.0f;
  }
  v46 = v25 + v26;
  *(float*)&v49 = (float)((float)((float)((float)(a6 + 256) * 5.0f) + 2.5f) +
                          -0x1.4000000000000p+10f) +
                  v26;
  *(_QWORD*)&v27 = COERCE_UNSIGNED_INT(v25 + v26);
  *((_QWORD*)&v27 + 1) = v49;
  v51 = v27;
  v28 = Unit_6c7fa0(a2, (__int64)&v51);
  *(_DWORD*)(v14 + 172) = 1097859072;
  *(float*)(v14 + 192) = v46;
  *(float*)(v14 + 196) = v28;
  v29 = *(_OWORD*)(v14 + 192);
  *((_QWORD*)&v29 + 1) = v49;
  *(_OWORD*)(v14 + 192) = v29;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21c6868) != 0) {
    GameData_21c67d0 = 0;
    GameData_21c67d8 = 0;
    GameData_21c67e0 = 0;
    GameData_21c67b0 = 0;
    GameData_21c67b8 = 0;
    GameData_21c67c0 = 0;
    GameData_21c67c8 = 0;
    GameData_21c6808 = 0;
    GameData_21c6810 = 0;
    GameData_21c6818 = 0;
    GameData_21c67a8 = 3;
    GameData_21c6820 = 0;
    GameData_21c6828 = 0;
    GameData_21c6850 = 0;
    GameData_21c6858 = 0;
    GameData_21c6860 = 0;
    GameData_21c6848 = 0;
    GameData_21c6838 = 0;
    GameData_21c6840 = 0;
    GameData_21c6830 = 0;
    GameData_21c67e8 = 14;
    GameData_21c67f0 = 0;
    GameData_21c67f8 = 16;
    GameData_21c6800 = 1;
    __cxa_guard_release(&GameData_21c6868);
  }
  v30 = *(_QWORD*)(a1 + 40);
  if (v30 != 0) {
    *(_QWORD*)(v30 + 48) = v14;
    *(_QWORD*)(v14 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v14;
  *(_QWORD*)(v14 + 24) = "ProcUnitTranslate";
  *(_QWORD*)(v14 + 32) = a1;
  *(_DWORD*)(v14 + 140) = game_HashString32_alt1("ProcUnitTranslate");
  *(_QWORD*)(v14 + 8) = &GameData_21c67a8;
  *(_QWORD*)(v14 + 16) = &GameData_21c67a8;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 24;
  *(_QWORD*)(v14 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v14 + 136LL))(v14) & 1) != 0 &&
      (*(_WORD*)(v14 + 136) & 0x100) == 0) {
    *(_WORD*)(v14 + 136) |= 0x100u;
  }
  v31 = (_BYTE*)*v16;
  v32 = *(_BYTE*)(*v16 + 138LL);
  if (v32 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v31 + 64LL))(*v16);
    v32 = v31[138];
  }
  v31[138] = v32 + 1;
  *(_WORD*)(v14 + 136) |= 2u;
  return v14;
}

void game_map_7823c0(int* a1, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5,
                     __int64 a6)
{
  int* v7;
  int* v8;
  int v9;
  int* v10;
  __int64 v11;
  int* v12;
  int* v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  float32x4_t v18;
  float32x2_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  int8x16_t v23;
  float v24;
  __int64 v25;
  _DWORD* v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  int v36;
  unsigned int v37;
  float v38;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  __int64 v47;
  char* v48;
  float32x4_t v49;
  int8x16_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x2_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  int8x16_t v58;
  int v59;
  int v60;
  __int64 v61;
  int v62;
  int v63;
  int v64;
  int v65;
  unsigned int v66;
  float v67;
  __int64 v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  __int64 v75;
  char* v76;
  float32x4_t v77;
  int8x16_t v78;
  float32x4_t v79;
  float32x4_t v80;
  unsigned __int64 v81;
  int* v82;
  unsigned __int64 v83;
  int* v86;
  int* v87;
  int* v88;
  bool v89;
  int* v90;
  __int64 v91;
  int v92;
  __int64 v93;
  int v94;
  int v95;
  int* v97;
  __int64 v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;

  if (a4 < 2) {
    return;
  }
  v7 = a2;
  v8 = a1;
  if (a4 == 2) {
    if (game_map_782c60_alt1(a3, *(a2 - 1), *a1)) {
      v9 = *v8;
      *v8 = *(v7 - 1);
      *(v7 - 1) = v9;
    }
    return;
  }
  if ((__int64)a4 <= 128) {
    if (a1 == a2) {
      return;
    }
    v10 = a1 + 1;
    if (a1 + 1 == a2) {
      return;
    }
    v11 = 0;
    v12 = a1;
  LABEL_13:
    v15 = *v12;
    v14 = v12[1];
    v12 = v10;
    if (!game_map_782c60_alt1(a3, v14, v15)) {
      goto LABEL_12;
    }
    v97 = v12;
    v98 = v11;
    v16 = *v12;
    v17 = v11;
    while (1) {
      v25 = v17;
      v26 = (int*)((char*)v8 + v17);
      v26[1] = *v26;
      if (v25 == 0) {
        v13 = v8;
      LABEL_11:
        *v13 = v16;
        v7 = a2;
        v12 = v97;
        v11 = v98;
      LABEL_12:
        v10 = v12 + 1;
        v11 += 4;
        if (v12 + 1 != v7) {
          goto LABEL_13;
        }
        return;
      }
      v27 = a3[1];
      if (v27 == 0) {
      LABEL_10:
        v13 = (int*)((char*)v8 + v25);
        goto LABEL_11;
      }
      v28 = *(v26 - 1);
      v29 = *(char*)(v27 + 584);
      v24 = 0x0.0p+0f;
      v30 = *a3 + 60LL;
      v31 = *(char*)(v27 + 585);
      v32 = v30 + 12LL * v16;
      v33 = *(char*)(v32 + 1);
      v34 = *(char*)(v32 + 2);
      v35 = v33 - v29;
      if (v33 - v29 < 0) {
        v35 = v29 - v33;
      }
      v36 = v34 - v31;
      if (v34 - v31 < 0) {
        v36 = v31 - v34;
      }
      v37 = v36 + v35;
      if (v36 + v35 != 0) {
        v38 =
            (float)((float)(unsigned int)(v31 + 256) * 0x1.4000000000000p+2f) +
            0x1.4000000000000p+1f;
        v39 = GameData_21ca2e8;
        v40 = v38 + -0x1.4000000000000p+10f;
        v103 = (float)((float)((float)(unsigned int)(v29 + 256) *
                               0x1.4000000000000p+2f) +
                       0x1.4000000000000p+1f) +
               -0x1.4000000000000p+10f;
        v105 = 0x0.0p+0f;
        if (GameData_21ca2e8 != 0) {
          v41 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456),
                              (float)((float)((float)(unsigned int)(v29 + 256) *
                                              0x1.4000000000000p+2f) +
                                      0x1.4000000000000p+1f) +
                                  -0x1.4000000000000p+10f,
                              v38 + -0x1.4000000000000p+10f);
          v33 = *(char*)(v32 + 1);
          v34 = *(char*)(v32 + 2);
          v39 = GameData_21ca2e8;
        }
        else {
          v41 = 0x0.0p+0f;
        }
        v101 = v41;
        v43 =
            (float)((float)(unsigned int)(v34 + 256) * 0x1.4000000000000p+2f) +
            0x1.4000000000000p+1f;
        v44 = v43 + -0x1.4000000000000p+10f;
        v99 = (float)((float)((float)(unsigned int)(v33 + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f;
        if (v39 != 0) {
          v105 =
              Height_7c4d10(*(_QWORD*)(v39 + 61456),
                            (float)((float)((float)(unsigned int)(v33 + 256) *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                                -0x1.4000000000000p+10f,
                            v43 + -0x1.4000000000000p+10f);
        }
        if (*(float*)(v27 + 124) == *(float*)(v27 + 120)) {
          v45 =
              (*(float (**)(__int64))(*(_QWORD*)(v27 + 112) + 16LL))(v27 + 112);
        }
        else {
          v45 = *(float*)(v27 + 144);
        }
        v46 = fmodf(v45, 0x1.6800000000000p+8f);
        if (v45 < 0x0.0p+0f) {
          v46 = v46 + 0x1.6800000000000p+8f;
        }
        if (v46 >= 0x1.6800000000000p+4f) {
          if (v46 >= 0x1.0e00000000000p+6f) {
            if (v46 >= 0x1.c200000000000p+6f) {
              if (v46 >= 0x1.3b00000000000p+7f) {
                if (v46 >= 0x1.9500000000000p+7f) {
                  if (v46 >= 0x1.ef00000000000p+7f) {
                    v47 = 4;
                    if (v46 < 0x1.5180000000000p+8f) {
                      v47 = 6;
                    }
                    if (v46 < 0x1.2480000000000p+8f) {
                      v47 = 2;
                    }
                  }
                  else {
                    v47 = 3;
                  }
                }
                else {
                  v47 = 1;
                }
              }
              else {
                v47 = 9;
              }
            }
            else {
              v47 = 8;
            }
          }
          else {
            v47 = 12;
          }
        }
        else {
          v47 = 4;
        }
        LANES128(v49).n128_u32[1] = 0;
        LANES128(v49).n128_u32[3] = 0;
        v48 = (char*)GameData_212cf50 + v47;
        LANES128(v49).n128_f32[0] = (float)*v48;
        LANES128(v49).n128_f32[2] = (float)v48[256];
        v50 = vmulq_f32(v49, v49);
        LANES128(v50).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v50, v50, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
                .n64_u64[0];
        LANES128(v50).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
                .n64_u64[0];
        if (LANES128(v50).n128_f32[0] > 0x0.0p+0f) {
          LANES128(v50).n128_u64[1] = LANES128(v50).n128_u64[0];
          v51 = vrsqrteq_f32(v50);
          v52 = vmulq_f32(v51, vrsqrtsq_f32(v51, vmulq_f32(v50, v51)));
          v49 = vbicq_s8(
              vmulq_f32(v49,
                        vmulq_f32(v52, vrsqrtsq_f32(v52, vmulq_f32(v50, v52)))),
              vceqzq_f32(v50));
        }
        v27 = a3[1];
        LANES128(v53).n128_u64[0] =
            LANES64_OF(
                vsub_f32(COERCE_AS(float32x2_t,
                                   __PAIR64__(LODWORD(v105), LODWORD(v99))),
                         COERCE_AS(float32x2_t,
                                   __PAIR64__(LODWORD(v101), LODWORD(v103)))))
                .n64_u64[0];
        LANES128(v53).n128_u64[1] = COERCE_UNSIGNED_INT(v44 - v40);
        LANES64(v54).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    vmul_f32(*(float32x2_t*)&LANES128(v53).n128_i8[8],
                             *(float32x2_t*)&LANES128(v53).n128_i8[8]),
                    vmul_f32(
                        COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]))))
                .n64_u64[0];
        LANES128(v55).n128_u64[0] = LANES64_OF(vpadd_f32(v54, v54)).n64_u64[0];
        LANES128(v55).n128_u64[1] = LANES128(v55).n128_u64[0];
        v56 = vrsqrteq_f32(v55);
        v57 = vmulq_f32(v56, vrsqrtsq_f32(v56, vmulq_f32(v55, v56)));
        v58 = vmulq_f32(
            v49,
            vbicq_s8(
                vmulq_f32(v53, vmulq_f32(v57, vrsqrtsq_f32(
                                                  v57, vmulq_f32(v55, v57)))),
                vceqzq_f32(v55)));
        LANES128(v58).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v58, v58, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
                .n64_u64[0];
        v42 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
                  .n64_f32[0] /
              (float)v37;
        if (v27 == 0) {
          goto LABEL_16;
        }
      }
      else {
        v42 = 0x0.0p+0f;
      }
      v59 = *(char*)(v27 + 584);
      v60 = *(char*)(v27 + 585);
      v61 = v30 + 12LL * v28;
      v62 = *(char*)(v61 + 1);
      v63 = *(char*)(v61 + 2);
      v64 = v62 - v59;
      if (v62 - v59 < 0) {
        v64 = v59 - v62;
      }
      v65 = v63 - v60;
      if (v63 - v60 < 0) {
        v65 = v60 - v63;
      }
      v66 = v65 + v64;
      if (v65 + v64 != 0) {
        v67 =
            (float)((float)(unsigned int)(v60 + 256) * 0x1.4000000000000p+2f) +
            0x1.4000000000000p+1f;
        v68 = GameData_21ca2e8;
        v69 = v67 + -0x1.4000000000000p+10f;
        v104 = (float)((float)((float)(unsigned int)(v59 + 256) *
                               0x1.4000000000000p+2f) +
                       0x1.4000000000000p+1f) +
               -0x1.4000000000000p+10f;
        v106 = 0x0.0p+0f;
        if (GameData_21ca2e8 != 0) {
          v70 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456),
                              (float)((float)((float)(unsigned int)(v59 + 256) *
                                              0x1.4000000000000p+2f) +
                                      0x1.4000000000000p+1f) +
                                  -0x1.4000000000000p+10f,
                              v67 + -0x1.4000000000000p+10f);
          v62 = *(char*)(v61 + 1);
          v63 = *(char*)(v61 + 2);
          v68 = GameData_21ca2e8;
        }
        else {
          v70 = 0x0.0p+0f;
        }
        v102 = v70;
        v71 =
            (float)((float)(unsigned int)(v63 + 256) * 0x1.4000000000000p+2f) +
            0x1.4000000000000p+1f;
        v72 = v71 + -0x1.4000000000000p+10f;
        v100 = (float)((float)((float)(unsigned int)(v62 + 256) *
                               0x1.4000000000000p+2f) +
                       0x1.4000000000000p+1f) +
               -0x1.4000000000000p+10f;
        if (v68 != 0) {
          v106 =
              Height_7c4d10(*(_QWORD*)(v68 + 61456),
                            (float)((float)((float)(unsigned int)(v62 + 256) *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                                -0x1.4000000000000p+10f,
                            v71 + -0x1.4000000000000p+10f);
        }
        if (*(float*)(v27 + 124) == *(float*)(v27 + 120)) {
          v73 =
              (*(float (**)(__int64))(*(_QWORD*)(v27 + 112) + 16LL))(v27 + 112);
        }
        else {
          v73 = *(float*)(v27 + 144);
        }
        v74 = fmodf(v73, 0x1.6800000000000p+8f);
        if (v73 < 0x0.0p+0f) {
          v74 = v74 + 0x1.6800000000000p+8f;
        }
        if (v74 >= 0x1.6800000000000p+4f) {
          if (v74 >= 0x1.0e00000000000p+6f) {
            if (v74 >= 0x1.c200000000000p+6f) {
              if (v74 >= 0x1.3b00000000000p+7f) {
                if (v74 >= 0x1.9500000000000p+7f) {
                  if (v74 >= 0x1.ef00000000000p+7f) {
                    v75 = 4;
                    if (v74 < 0x1.5180000000000p+8f) {
                      v75 = 6;
                    }
                    if (v74 < 0x1.2480000000000p+8f) {
                      v75 = 2;
                    }
                  }
                  else {
                    v75 = 3;
                  }
                }
                else {
                  v75 = 1;
                }
              }
              else {
                v75 = 9;
              }
            }
            else {
              v75 = 8;
            }
          }
          else {
            v75 = 12;
          }
        }
        else {
          v75 = 4;
        }
        LANES128(v77).n128_u32[1] = 0;
        LANES128(v77).n128_u32[3] = 0;
        v76 = (char*)GameData_212cf50 + v75;
        LANES128(v77).n128_f32[0] = (float)*v76;
        LANES128(v77).n128_f32[2] = (float)v76[256];
        v78 = vmulq_f32(v77, v77);
        LANES128(v78).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v78, v78, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0])))
                .n64_u64[0];
        LANES128(v78).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0])))
                .n64_u64[0];
        if (LANES128(v78).n128_f32[0] > 0x0.0p+0f) {
          LANES128(v78).n128_u64[1] = LANES128(v78).n128_u64[0];
          v79 = vrsqrteq_f32(v78);
          v80 = vmulq_f32(v79, vrsqrtsq_f32(v79, vmulq_f32(v78, v79)));
          v77 = vbicq_s8(
              vmulq_f32(v77,
                        vmulq_f32(v80, vrsqrtsq_f32(v80, vmulq_f32(v78, v80)))),
              vceqzq_f32(v78));
        }
        LANES128(v18).n128_u64[0] =
            LANES64_OF(
                vsub_f32(COERCE_AS(float32x2_t,
                                   __PAIR64__(LODWORD(v106), LODWORD(v100))),
                         COERCE_AS(float32x2_t,
                                   __PAIR64__(LODWORD(v102), LODWORD(v104)))))
                .n64_u64[0];
        LANES128(v18).n128_u64[1] = COERCE_UNSIGNED_INT(v72 - v69);
        LANES64(v19).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    vmul_f32(*(float32x2_t*)&LANES128(v18).n128_i8[8],
                             *(float32x2_t*)&LANES128(v18).n128_i8[8]),
                    vmul_f32(
                        COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]))))
                .n64_u64[0];
        LANES128(v20).n128_u64[0] = LANES64_OF(vpadd_f32(v19, v19)).n64_u64[0];
        LANES128(v20).n128_u64[1] = LANES128(v20).n128_u64[0];
        v21 = vrsqrteq_f32(v20);
        v22 = vmulq_f32(v21, vrsqrtsq_f32(v21, vmulq_f32(v20, v21)));
        v23 = vmulq_f32(
            v77,
            vbicq_s8(
                vmulq_f32(v18, vmulq_f32(v22, vrsqrtsq_f32(
                                                  v22, vmulq_f32(v20, v22)))),
                vceqzq_f32(v20)));
        LANES128(v23).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
                .n64_u64[0];
        v24 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
                  .n64_f32[0] /
              (float)v66;
      }
    LABEL_16:
      v17 = v25 - 4;
      if (v42 <= v24) {
        goto LABEL_10;
      }
    }
  }
  v81 = a4 >> 1;
  v82 = a5;
  v83 = a4 - (a4 >> 1);
  if ((__int64)a4 > a6) {
    game_map_7823c0(a1, &a1[v81], a3, a4 >> 1, a5, a6);
    game_map_7823c0(&v8[v81], v7, a3, v83, v82, a6);
    GameRoutine_783be0((__int64)v8, &v8[v81], v7, a3, v81, v83, v82, a6);
    return;
  }
  game_map_7832e0_alt1(a1, &a1[v81], a3, a4 >> 1, a5);
  v86 = &v82[v81];
  game_map_7832e0_alt1(&v8[v81], v7, a3, v83, v86);
  v87 = &v82[a4];
  v88 = v86;
  while (v88 != v87) {
    v89 = game_map_782c60_alt1(a3, *v88, *v82);
    if (v89) {
      v90 = v88;
    }
    else {
      v90 = v82;
    }
    if (v89) {
      v91 = 0;
    }
    else {
      v91 = 4;
    }
    v92 = *v90;
    v82 = (int*)((char*)v82 + v91);
    if (v89) {
      v93 = 4;
    }
    else {
      v93 = 0;
    }
    v88 = (int*)((char*)v88 + v93);
    *v8++ = v92;
    if (v82 == v86) {
      while (v88 != v87) {
        v95 = *v88++;
        *v8++ = v95;
      }
      return;
    }
  }
  while (v82 != v86) {
    v94 = *v82++;
    *v8++ = v94;
  }
}

bool game_map_782c60(_QWORD* a1, int a2, int a3, long double a4)
{
  __int64 v4;
  int v5;
  int v6;
  float v7;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64* v14;
  char* v15;
  int v16;
  int v17;
  unsigned int v18;
  float v19;
  __int64 v20;
  int v21;
  float v22;
  float v23;
  float v24;
  unsigned __int64 v25;
  float v26;
  long double v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  float32x4_t v34;
  int8x16_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x2_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  __int64 v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;
  float v51;
  __int64 v52;
  int v53;
  float v54;
  float v55;
  unsigned __int64 v56;
  float v57;
  long double v58;
  float v59;
  float v60;
  float v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  float32x4_t v65;
  int8x16_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x2_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  int8x16_t v74;
  int v76;
  int v77;
  unsigned int v78;
  unsigned int v79;
  float v80;
  float32x2_t v81;
  float v82;
  float32x2_t v83;
  float v84;
  float32x2_t v85;
  float v86;
  float32x2_t v87;

  v4 = a1[1];
  if (v4 == 0) {
    v24 = 0.0;
    v7 = 0.0;
    return v24 > v7;
  }
  v5 = *(char*)(v4 + 584);
  v6 = *(char*)(v4 + 585);
  v7 = 0.0;
  v10 = *a1 + 60LL;
  v11 = v10 + 12LL * a2;
  v12 = *(char*)(v11 + 1);
  v13 = *(char*)(v11 + 2);
  v14 = GameData_212ce80[0];
  v15 = (char*)GameData_212cf50;
  v16 = v12 - v5;
  if (v12 - v5 < 0) {
    v16 = v5 - v12;
  }
  v17 = v13 - v6;
  if (v13 - v6 < 0) {
    v17 = v6 - v13;
  }
  v18 = v17 + v16;
  if (v17 + v16 == 0) {
    v24 = 0.0;
  LABEL_38:
    v43 = v10 + 12LL * a3;
    v44 = *(char*)(v4 + 584);
    v45 = *(char*)(v4 + 585);
    v46 = *(char*)(v43 + 1);
    v47 = *(char*)(v43 + 2);
    v48 = v46 - v44;
    if (v46 - v44 < 0) {
      v48 = v44 - v46;
    }
    v49 = v47 - v45;
    if (v47 - v45 < 0) {
      v49 = v45 - v47;
    }
    v50 = v49 + v48;
    if (v49 + v48 != 0) {
      v51 = (float)(unsigned int)(v45 + 256);
      v52 = *v14;
      v53 = 0;
      v54 = (float)(v51 * 5.0) + 2.5;
      v55 = v54 + -0x1.4000000000000p+10;
      v82 = (float)((float)((float)(unsigned int)(v44 + 256) * 5.0) + 2.5) +
            -0x1.4000000000000p+10;
      if (*v14 != 0) {
        *(float*)&a4 =
            (float)((float)((float)(unsigned int)(v44 + 256) * 5.0) + 2.5) +
            -0x1.4000000000000p+10;
        a4 = Height_7c4d10_alt1(*(_QWORD*)(v52 + 61456), a4,
                                v54 + -0x1.4000000000000p+10);
        v46 = *(char*)(v43 + 1);
        v47 = *(char*)(v43 + 2);
        v52 = *v14;
        v53 = 0;
      }
      else {
        *(_QWORD*)&a4 = 0;
      }
      v79 = LODWORD(a4);
      *(float*)&a4 = (float)(unsigned int)(v46 + 256);
      *(float*)&v56 =
          (float)((float)(*(float*)&a4 * 5.0) + 2.5) + -0x1.4000000000000p+10;
      v86 = *(float*)&v56;
      v57 = (float)((float)((float)(unsigned int)(v47 + 256) * 5.0) + 2.5) +
            -0x1.4000000000000p+10;
      if (v52 != 0) {
        *(float*)&a4 =
            (float)((float)(*(float*)&a4 * 5.0) + 2.5) + -0x1.4000000000000p+10;
        v58 = Height_7c4d10_alt1(*(_QWORD*)(v52 + 61456), a4, v57);
        *(float*)&v56 = v86;
        v53 = LODWORD(v58);
      }
      if (*(float*)(v4 + 124) == *(float*)(v4 + 120)) {
        v77 = v53;
        v59 = (*(float (**)(__int64))(*(_QWORD*)(v4 + 112) + 16LL))(v4 + 112);
        v53 = v77;
        *(float*)&v56 = v86;
        v60 = v59;
      }
      else {
        v60 = *(float*)(v4 + 144);
      }
      HIDWORD(v56) = v53;
      LANES64(v83).n64_u64[0] = __PAIR64__(v79, LODWORD(v82));
      LANES64(v87).n64_u64[0] = v56;
      v61 = fmodf(v60, 0x1.6800000000000p+8);
      if (v60 < 0.0) {
        v61 = v61 + 0x1.6800000000000p+8;
      }
      if (v61 >= 0x1.6800000000000p+4) {
        if (v61 >= 0x1.0e00000000000p+6) {
          if (v61 >= 0x1.c200000000000p+6) {
            if (v61 >= 0x1.3b00000000000p+7) {
              if (v61 >= 0x1.9500000000000p+7) {
                if (v61 >= 0x1.ef00000000000p+7) {
                  v62 = 2;
                  v63 = 4;
                  if (v61 < 0x1.5180000000000p+8) {
                    v63 = 6;
                  }
                  if (v61 >= 0x1.2480000000000p+8) {
                    v62 = v63;
                  }
                }
                else {
                  v62 = 3;
                }
              }
              else {
                v62 = 1;
              }
            }
            else {
              v62 = 9;
            }
          }
          else {
            v62 = 8;
          }
        }
        else {
          v62 = 12;
        }
      }
      else {
        v62 = 4;
      }
      v64 = &v15[v62];
      LANES128(v65).n128_u32[1] = 0;
      LANES128(v65).n128_u32[3] = 0;
      LANES128(v65).n128_f32[0] = (float)*v64;
      LANES128(v65).n128_f32[2] = (float)v64[256];
      v66 = vmulq_f32(v65, v65);
      LANES128(v66).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v66, v66, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0])))
              .n64_u64[0];
      LANES128(v66).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0])))
              .n64_u64[0];
      if (LANES128(v66).n128_f32[0] > 0.0) {
        LANES128(v66).n128_u64[1] = LANES128(v66).n128_u64[0];
        v67 = vrsqrteq_f32(v66);
        v68 = vmulq_f32(v67, vrsqrtsq_f32(v67, vmulq_f32(v66, v67)));
        v65 = vbicq_s8(
            vmulq_f32(v65,
                      vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v66, v68)))),
            vceqzq_f32(v66));
      }
      LANES128(v69).n128_u64[0] = LANES64_OF(vsub_f32(v87, v83)).n64_u64[0];
      LANES128(v69).n128_u64[1] = COERCE_UNSIGNED_INT(v57 - v55);
      LANES64(v70).n64_u64[0] =
          LANES64_OF(
              vadd_f32(
                  vmul_f32(*(float32x2_t*)&LANES128(v69).n128_i8[8],
                           *(float32x2_t*)&LANES128(v69).n128_i8[8]),
                  vmul_f32(COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]))))
              .n64_u64[0];
      LANES128(v71).n128_u64[0] = LANES64_OF(vpadd_f32(v70, v70)).n64_u64[0];
      LANES128(v71).n128_u64[1] = LANES128(v71).n128_u64[0];
      v72 = vrsqrteq_f32(v71);
      v73 = vmulq_f32(v72, vrsqrtsq_f32(v72, vmulq_f32(v71, v72)));
      v74 = vmulq_f32(
          v65,
          vbicq_s8(
              vmulq_f32(v69,
                        vmulq_f32(v73, vrsqrtsq_f32(v73, vmulq_f32(v71, v73)))),
              vceqzq_f32(v71)));
      LANES128(v74).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v74, v74, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])))
              .n64_u64[0];
      v7 = LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])))
               .n64_f32[0] /
           (float)v50;
    }
    return v24 > v7;
  }
  v19 = (float)(unsigned int)(v6 + 256);
  v20 = *GameData_212ce80[0];
  v21 = 0;
  v22 = (float)(v19 * 5.0) + 2.5;
  v23 = v22 + -0x1.4000000000000p+10;
  v80 = (float)((float)((float)(unsigned int)(v5 + 256) * 5.0) + 2.5) +
        -0x1.4000000000000p+10;
  if (*GameData_212ce80[0] != 0) {
    *(float*)&a4 =
        (float)((float)((float)(unsigned int)(v5 + 256) * 5.0) + 2.5) +
        -0x1.4000000000000p+10;
    a4 = Height_7c4d10_alt1(*(_QWORD*)(v20 + 61456), a4,
                            v22 + -0x1.4000000000000p+10);
    v12 = *(char*)(v11 + 1);
    v13 = *(char*)(v11 + 2);
    v20 = *v14;
    v21 = 0;
  }
  else {
    *(_QWORD*)&a4 = 0;
  }
  v78 = LODWORD(a4);
  *(float*)&v25 =
      (float)((float)((float)(unsigned int)(v12 + 256) * 5.0) + 2.5) +
      -0x1.4000000000000p+10;
  v84 = *(float*)&v25;
  v26 = (float)((float)((float)(unsigned int)(v13 + 256) * 5.0) + 2.5) +
        -0x1.4000000000000p+10;
  if (v20 != 0) {
    *(float*)&a4 =
        (float)((float)((float)(unsigned int)(v12 + 256) * 5.0) + 2.5) +
        -0x1.4000000000000p+10;
    v27 = Height_7c4d10_alt1(*(_QWORD*)(v20 + 61456), a4, v26);
    *(float*)&v25 = v84;
    v21 = LODWORD(v27);
  }
  if (*(float*)(v4 + 124) == *(float*)(v4 + 120)) {
    v76 = v21;
    v28 = (*(float (**)(__int64))(*(_QWORD*)(v4 + 112) + 16LL))(v4 + 112);
    v21 = v76;
    *(float*)&v25 = v84;
    v29 = v28;
  }
  else {
    v29 = *(float*)(v4 + 144);
  }
  HIDWORD(v25) = v21;
  LANES64(v81).n64_u64[0] = __PAIR64__(v78, LODWORD(v80));
  LANES64(v85).n64_u64[0] = v25;
  v30 = fmodf(v29, 0x1.6800000000000p+8);
  if (v29 < 0.0) {
    v30 = v30 + 0x1.6800000000000p+8;
  }
  if (v30 >= 0x1.6800000000000p+4) {
    if (v30 >= 0x1.0e00000000000p+6) {
      if (v30 >= 0x1.c200000000000p+6) {
        if (v30 >= 0x1.3b00000000000p+7) {
          if (v30 >= 0x1.9500000000000p+7) {
            if (v30 >= 0x1.ef00000000000p+7) {
              v31 = 2;
              v32 = 4;
              if (v30 < 0x1.5180000000000p+8) {
                v32 = 6;
              }
              if (v30 >= 0x1.2480000000000p+8) {
                v31 = v32;
              }
            }
            else {
              v31 = 3;
            }
          }
          else {
            v31 = 1;
          }
        }
        else {
          v31 = 9;
        }
      }
      else {
        v31 = 8;
      }
    }
    else {
      v31 = 12;
    }
  }
  else {
    v31 = 4;
  }
  v33 = &v15[v31];
  LANES128(v34).n128_u32[1] = 0;
  LANES128(v34).n128_u32[3] = 0;
  LANES128(v34).n128_f32[0] = (float)*v33;
  LANES128(v34).n128_f32[2] = (float)v33[256];
  v35 = vmulq_f32(v34, v34);
  LANES128(v35).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v35, v35, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
          .n64_u64[0];
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v35).n128_f32[0] > 0.0) {
    LANES128(v35).n128_u64[1] = LANES128(v35).n128_u64[0];
    v36 = vrsqrteq_f32(v35);
    v37 = vmulq_f32(v36, vrsqrtsq_f32(v36, vmulq_f32(v35, v36)));
    v34 = vbicq_s8(
        vmulq_f32(v34, vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v35, v37)))),
        vceqzq_f32(v35));
  }
  v4 = a1[1];
  LANES128(v38).n128_u64[0] = LANES64_OF(vsub_f32(v85, v81)).n64_u64[0];
  LANES128(v38).n128_u64[1] = COERCE_UNSIGNED_INT(v26 - v23);
  LANES64(v39).n64_u64[0] =
      LANES64_OF(
          vadd_f32(vmul_f32(*(float32x2_t*)&LANES128(v38).n128_i8[8],
                            *(float32x2_t*)&LANES128(v38).n128_i8[8]),
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]))))
          .n64_u64[0];
  LANES128(v40).n128_u64[0] = LANES64_OF(vpadd_f32(v39, v39)).n64_u64[0];
  LANES128(v40).n128_u64[1] = LANES128(v40).n128_u64[0];
  v41 = vrsqrteq_f32(v40);
  v42 = vmulq_f32(v41, vrsqrtsq_f32(v41, vmulq_f32(v40, v41)));
  a4 = COERCE_LONG_DOUBLE(vmulq_f32(
      v34,
      vbicq_s8(vmulq_f32(
                   v38, vmulq_f32(v42, vrsqrtsq_f32(v42, vmulq_f32(v40, v42)))),
               vceqzq_f32(v40))));
  *(float32x2_t*)&a4 = vadd_f32(
      COERCE_AS(float32x2_t,
                LANES128_OF(vextq_s8(*(int8x16_t*)&a4, *(int8x16_t*)&a4, 8u))
                    .n128_u64[0]),
      *(float32x2_t*)&a4);
  *(float32x2_t*)&a4 = vpadd_f32(*(float32x2_t*)&a4, *(float32x2_t*)&a4);
  v24 = *(float*)&a4 / (float)v18;
  if (v4 != 0) {
    goto LABEL_38;
  }
  return v24 > v7;
}

void game_map_7832e0(int* a1, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5)
{
  int* v5;
  _QWORD* v6;
  int* v7;
  int* v8;
  int v9;
  int* v10;
  __int64 v11;
  int* v12;
  int* v13;
  int* v14;
  int* v15;
  __int64 v16;
  int v17;
  int v18;
  float v19;
  int* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  __int64* v30;
  float v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  unsigned int v41;
  char* v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x2_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  int8x16_t v52;
  int v53;
  int v54;
  __int64 v55;
  int v56;
  int v57;
  int v58;
  int v59;
  unsigned int v60;
  __int64* v61;
  float v62;
  __int64 v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  __int64 v70;
  char* v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x2_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  int8x16_t v81;
  unsigned __int64 v82;
  int* v84;
  __int64 v85;
  int* v86;
  bool v87;
  int* v88;
  __int64 v89;
  int v90;
  __int64 v91;
  int v92;
  int v93;
  __int64 v94;
  int* v95;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  _DWORD* v106;

  if (a4 != 0) {
    v5 = a5;
    v6 = a3;
    v7 = a2;
    v8 = a1;
    if (a4 == 2) {
      if (game_map_782c60_alt1(a3, *(a2 - 1), *a1)) {
        *v5 = *(v7 - 1);
        v9 = *v8;
      }
      else {
        *v5 = *v8;
        v9 = *(v7 - 1);
      }
      v5[1] = v9;
    }
    else {
      if (a4 == 1) {
        *a5 = *a1;
        return;
      }
      if ((__int64)a4 > 8) {
        v82 = a4 >> 1;
        v84 = &a1[a4 >> 1];
        v85 = 4 * (a4 >> 1);
        game_map_7823c0_alt2(a1, v84, a3, v82, a5, v82);
        game_map_7823c0_alt2(v84, v7, v6, a4 - v82, &v5[v82], a4 - v82);
        if (v85 != 0) {
          v86 = v84;
          while (v86 != a2) {
            v87 = game_map_782c60_alt1(v6, *v86, *v8);
            if (v87) {
              v88 = v86;
            }
            else {
              v88 = v8;
            }
            if (v87) {
              v89 = 4;
            }
            else {
              v89 = 0;
            }
            v90 = *v88;
            v86 = (int*)((char*)v86 + v89);
            if (v87) {
              v91 = 0;
            }
            else {
              v91 = 4;
            }
            v8 = (int*)((char*)v8 + v91);
            *v5++ = v90;
            if (v8 == v84) {
              goto LABEL_113;
            }
          }
          while (v8 != v84) {
            v92 = *v8++;
            *v5++ = v92;
          }
        }
        else {
          v86 = v84;
        LABEL_113:
          while (v86 != a2) {
            v93 = *v86++;
            *v5++ = v93;
          }
        }
      }
      else if (a1 != a2) {
        v10 = a1 + 1;
        *a5 = *a1;
        if (a1 + 1 != a2) {
          v11 = 0;
          v12 = a5;
          v13 = a5;
          do {
            v14 = v13 + 1;
            if (!game_map_782c60_alt1(v6, *v10, *v13)) {
              *v14 = *v10;
              v13 = v14;
              goto LABEL_12;
            }
            v95 = v14;
            v12[1] = *v12;
            v15 = v5;
            if (v12 == v5) {
              goto LABEL_92;
            }
            v94 = v11;
            while (1) {
              v16 = v6[1];
              if (v16 == 0) {
                v15 = v12;
                goto LABEL_91;
              }
              v17 = *(char*)(v16 + 584);
              v18 = *(char*)(v16 + 585);
              v19 = 0x0.0p+0f;
              v20 = v5;
              v106 = (int*)((char*)v5 + v11);
              v21 = *(int*)((char*)v5 + v11 - 4);
              v22 = *v6 + 60LL;
              v23 = v22 + 12LL * *v10;
              v24 = *(char*)(v23 + 1);
              v25 = *(char*)(v23 + 2);
              v26 = v24 - v17;
              if (v24 - v17 < 0) {
                v26 = v17 - v24;
              }
              v27 = v25 - v18;
              if (v25 - v18 < 0) {
                v27 = v18 - v25;
              }
              v28 = v27 + v26;
              if (v27 + v26 == 0) {
                v6 = a3;
                v35 = 0x0.0p+0f;
                v5 = v20;
              LABEL_52:
                v53 = *(char*)(v16 + 584);
                v54 = *(char*)(v16 + 585);
                v55 = v22 + 12LL * v21;
                v56 = *(char*)(v55 + 1);
                v57 = *(char*)(v55 + 2);
                v58 = v56 - v53;
                if (v56 - v53 < 0) {
                  v58 = v53 - v56;
                }
                v59 = v57 - v54;
                if (v57 - v54 < 0) {
                  v59 = v54 - v57;
                }
                v60 = v59 + v58;
                if (v59 + v58 != 0) {
                  v61 = GameData_212ce80[0];
                  v62 = (float)((float)(unsigned int)(v54 + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f;
                  v63 = *GameData_212ce80[0];
                  v64 = v62 + -0x1.4000000000000p+10f;
                  v103 = (float)((float)((float)(unsigned int)(v53 + 256) *
                                         0x1.4000000000000p+2f) +
                                 0x1.4000000000000p+1f) +
                         -0x1.4000000000000p+10f;
                  v105 = 0x0.0p+0f;
                  if (*GameData_212ce80[0] != 0) {
                    v65 = Height_7c4d10(
                        *(_QWORD*)(v63 + 61456),
                        (float)((float)((float)(unsigned int)(v53 + 256) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f,
                        v62 + -0x1.4000000000000p+10f);
                    v56 = *(char*)(v55 + 1);
                    v57 = *(char*)(v55 + 2);
                    v63 = *v61;
                  }
                  else {
                    v65 = 0x0.0p+0f;
                  }
                  v101 = v65;
                  v66 = (float)((float)(unsigned int)(v57 + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f;
                  v67 = v66 + -0x1.4000000000000p+10f;
                  v99 = (float)((float)((float)(unsigned int)(v56 + 256) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f;
                  if (v63 != 0) {
                    v105 = Height_7c4d10(
                        *(_QWORD*)(v63 + 61456),
                        (float)((float)((float)(unsigned int)(v56 + 256) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f,
                        v66 + -0x1.4000000000000p+10f);
                  }
                  if (*(float*)(v16 + 124) == *(float*)(v16 + 120)) {
                    v68 = (*(float (**)(__int64))(*(_QWORD*)(v16 + 112) +
                                                  16LL))(v16 + 112);
                  }
                  else {
                    v68 = *(float*)(v16 + 144);
                  }
                  v69 = fmodf(v68, 0x1.6800000000000p+8f);
                  if (v68 < 0x0.0p+0f) {
                    v69 = v69 + 0x1.6800000000000p+8f;
                  }
                  if (v69 >= 0x1.6800000000000p+4f) {
                    if (v69 >= 0x1.0e00000000000p+6f) {
                      if (v69 >= 0x1.c200000000000p+6f) {
                        if (v69 >= 0x1.3b00000000000p+7f) {
                          if (v69 >= 0x1.9500000000000p+7f) {
                            if (v69 >= 0x1.ef00000000000p+7f) {
                              v70 = 4;
                              if (v69 < 0x1.5180000000000p+8f) {
                                v70 = 6;
                              }
                              if (v69 < 0x1.2480000000000p+8f) {
                                v70 = 2;
                              }
                            }
                            else {
                              v70 = 3;
                            }
                          }
                          else {
                            v70 = 1;
                          }
                        }
                        else {
                          v70 = 9;
                        }
                      }
                      else {
                        v70 = 8;
                      }
                    }
                    else {
                      v70 = 12;
                    }
                  }
                  else {
                    v70 = 4;
                  }
                  LANES128(v72).n128_u32[1] = 0;
                  LANES128(v72).n128_u32[3] = 0;
                  v71 = (char*)GameData_212cf50 + v70;
                  LANES128(v72).n128_f32[0] = (float)*v71;
                  LANES128(v72).n128_f32[2] = (float)v71[256];
                  v73 = vmulq_f32(v72, v72);
                  LANES128(v73).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v73, v73, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v73).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v73).n128_u64[0] =
                      LANES64_OF(
                          vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v73).n128_u64[0])))
                          .n64_u64[0];
                  if (LANES128(v73).n128_f32[0] > 0x0.0p+0f) {
                    LANES128(v73).n128_u64[1] = LANES128(v73).n128_u64[0];
                    v74 = vrsqrteq_f32(v73);
                    v75 =
                        vmulq_f32(v74, vrsqrtsq_f32(v74, vmulq_f32(v73, v74)));
                    v72 = vbicq_s8(
                        vmulq_f32(
                            v72, vmulq_f32(v75, vrsqrtsq_f32(
                                                    v75, vmulq_f32(v73, v75)))),
                        vceqzq_f32(v73));
                  }
                  LANES128(v76).n128_u64[0] =
                      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t,
                                                    __PAIR64__(LODWORD(v105),
                                                               LODWORD(v99))),
                                          COERCE_AS(float32x2_t,
                                                    __PAIR64__(LODWORD(v101),
                                                               LODWORD(v103)))))
                          .n64_u64[0];
                  LANES128(v76).n128_u64[1] = COERCE_UNSIGNED_INT(v67 - v64);
                  LANES64(v77).n64_u64[0] =
                      LANES64_OF(
                          vadd_f32(
                              vmul_f32(
                                  *(float32x2_t*)&LANES128(v76).n128_i8[8],
                                  *(float32x2_t*)&LANES128(v76).n128_i8[8]),
                              vmul_f32(COERCE_AS(float32x2_t,
                                                 LANES128(v76).n128_u64[0]),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v76).n128_u64[0]))))
                          .n64_u64[0];
                  LANES128(v78).n128_u64[0] =
                      LANES64_OF(vpadd_f32(v77, v77)).n64_u64[0];
                  LANES128(v78).n128_u64[1] = LANES128(v78).n128_u64[0];
                  v79 = vrsqrteq_f32(v78);
                  v80 = vmulq_f32(v79, vrsqrtsq_f32(v79, vmulq_f32(v78, v79)));
                  v81 = vmulq_f32(
                      v72,
                      vbicq_s8(
                          vmulq_f32(
                              v76,
                              vmulq_f32(
                                  v80, vrsqrtsq_f32(v80, vmulq_f32(v78, v80)))),
                          vceqzq_f32(v78)));
                  LANES128(v81).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v81, v81, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v81).n128_u64[0])))
                          .n64_u64[0];
                  v19 = LANES64_OF(
                            vpadd_f32(COERCE_AS(float32x2_t,
                                                LANES128(v81).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v81).n128_u64[0])))
                            .n64_f32[0] /
                        (float)v60;
                }
                goto LABEL_86;
              }
              v29 = v21;
              v30 = GameData_212ce80[0];
              v31 = (float)((float)(unsigned int)(v18 + 256) *
                            0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f;
              v32 = *GameData_212ce80[0];
              v33 = v31 + -0x1.4000000000000p+10f;
              v102 = (float)((float)((float)(unsigned int)(v17 + 256) *
                                     0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f;
              v104 = 0x0.0p+0f;
              if (*GameData_212ce80[0] != 0) {
                v34 = Height_7c4d10(
                    *(_QWORD*)(v32 + 61456),
                    (float)((float)((float)(unsigned int)(v17 + 256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f,
                    v31 + -0x1.4000000000000p+10f);
                v24 = *(char*)(v23 + 1);
                v25 = *(char*)(v23 + 2);
                v32 = *v30;
              }
              else {
                v34 = 0x0.0p+0f;
              }
              v100 = v34;
              v36 = (float)((float)(unsigned int)(v25 + 256) *
                            0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f;
              v37 = v36 + -0x1.4000000000000p+10f;
              v98 = (float)((float)((float)(unsigned int)(v24 + 256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f;
              if (v32 != 0) {
                v104 = Height_7c4d10(
                    *(_QWORD*)(v32 + 61456),
                    (float)((float)((float)(unsigned int)(v24 + 256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f,
                    v36 + -0x1.4000000000000p+10f);
              }
              if (*(float*)(v16 + 124) == *(float*)(v16 + 120)) {
                v38 = (*(float (**)(__int64))(*(_QWORD*)(v16 + 112) + 16LL))(
                    v16 + 112);
              }
              else {
                v38 = *(float*)(v16 + 144);
              }
              v39 = fmodf(v38, 0x1.6800000000000p+8f);
              if (v38 < 0x0.0p+0f) {
                v39 = v39 + 0x1.6800000000000p+8f;
              }
              if (v39 >= 0x1.6800000000000p+4f) {
                v21 = v29;
                v41 = v28;
                if (v39 >= 0x1.0e00000000000p+6f) {
                  v5 = v20;
                  if (v39 >= 0x1.c200000000000p+6f) {
                    if (v39 >= 0x1.3b00000000000p+7f) {
                      if (v39 >= 0x1.9500000000000p+7f) {
                        if (v39 >= 0x1.ef00000000000p+7f) {
                          v40 = 4;
                          if (v39 < 0x1.5180000000000p+8f) {
                            v40 = 6;
                          }
                          if (v39 < 0x1.2480000000000p+8f) {
                            v40 = 2;
                          }
                        }
                        else {
                          v40 = 3;
                        }
                      }
                      else {
                        v40 = 1;
                      }
                    }
                    else {
                      v40 = 9;
                    }
                  }
                  else {
                    v40 = 8;
                  }
                }
                else {
                  v40 = 12;
                  v5 = v20;
                }
              }
              else {
                v40 = 4;
                v21 = v29;
                v41 = v28;
                v5 = v20;
              }
              LANES128(v43).n128_u32[1] = 0;
              LANES128(v43).n128_u32[3] = 0;
              v42 = (char*)GameData_212cf50 + v40;
              LANES128(v43).n128_f32[0] = (float)*v42;
              LANES128(v43).n128_f32[2] = (float)v42[256];
              v44 = vmulq_f32(v43, v43);
              LANES128(v44).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v44, v44, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v44).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
                      .n64_u64[0];
              if (LANES128(v44).n128_f32[0] > 0x0.0p+0f) {
                LANES128(v44).n128_u64[1] = LANES128(v44).n128_u64[0];
                v45 = vrsqrteq_f32(v44);
                v46 = vmulq_f32(v45, vrsqrtsq_f32(v45, vmulq_f32(v44, v45)));
                v43 = vbicq_s8(
                    vmulq_f32(
                        v43,
                        vmulq_f32(v46, vrsqrtsq_f32(v46, vmulq_f32(v44, v46)))),
                    vceqzq_f32(v44));
              }
              v6 = a3;
              v16 = a3[1];
              LANES128(v47).n128_u64[0] =
                  LANES64_OF(
                      vsub_f32(
                          COERCE_AS(float32x2_t,
                                    __PAIR64__(LODWORD(v104), LODWORD(v98))),
                          COERCE_AS(float32x2_t,
                                    __PAIR64__(LODWORD(v100), LODWORD(v102)))))
                      .n64_u64[0];
              LANES128(v47).n128_u64[1] = COERCE_UNSIGNED_INT(v37 - v33);
              LANES64(v48).n64_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          vmul_f32(*(float32x2_t*)&LANES128(v47).n128_i8[8],
                                   *(float32x2_t*)&LANES128(v47).n128_i8[8]),
                          vmul_f32(
                              COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v47).n128_u64[0]))))
                      .n64_u64[0];
              LANES128(v49).n128_u64[0] =
                  LANES64_OF(vpadd_f32(v48, v48)).n64_u64[0];
              LANES128(v49).n128_u64[1] = LANES128(v49).n128_u64[0];
              v50 = vrsqrteq_f32(v49);
              v51 = vmulq_f32(v50, vrsqrtsq_f32(v50, vmulq_f32(v49, v50)));
              v52 = vmulq_f32(
                  v43,
                  vbicq_s8(
                      vmulq_f32(v47,
                                vmulq_f32(v51, vrsqrtsq_f32(
                                                   v51, vmulq_f32(v49, v51)))),
                      vceqzq_f32(v49)));
              LANES128(v52).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v52, v52, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
                      .n64_u64[0];
              v35 = LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
                        .n64_f32[0] /
                    (float)v41;
              if (v16 != 0) {
                goto LABEL_52;
              }
            LABEL_86:
              if (v35 <= v19) {
                break;
              }
              --v12;
              v11 -= 4;
              *v106 = *(v106 - 1);
              if (v11 == 0) {
                v15 = v5;
                goto LABEL_91;
              }
            }
            v15 = (int*)((char*)v5 + v11);
          LABEL_91:
            v7 = a2;
            v11 = v94;
          LABEL_92:
            *v15 = *v10;
            v13 = v95;
          LABEL_12:
            ++v10;
            v11 += 4;
            v12 = v13;
          } while (v10 != v7);
        }
      }
    }
  }
}

void game_map_783fa0(int* a1, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5,
                     __int64 a6)
{
  int* v7;
  int* v8;
  int v9;
  int* v10;
  __int64 v11;
  int* v12;
  int* v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  float32x4_t v18;
  float32x2_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  int8x16_t v23;
  float v24;
  __int64 v25;
  _DWORD* v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  int v36;
  unsigned int v37;
  float v38;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  __int64 v47;
  char* v48;
  float32x4_t v49;
  int8x16_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x2_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  int8x16_t v58;
  int v59;
  int v60;
  __int64 v61;
  int v62;
  int v63;
  int v64;
  int v65;
  unsigned int v66;
  float v67;
  __int64 v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  __int64 v75;
  char* v76;
  float32x4_t v77;
  int8x16_t v78;
  float32x4_t v79;
  float32x4_t v80;
  unsigned __int64 v81;
  int* v82;
  unsigned __int64 v83;
  int* v86;
  int* v87;
  int* v88;
  bool v89;
  int* v90;
  __int64 v91;
  int v92;
  __int64 v93;
  int v94;
  int v95;
  int* v97;
  __int64 v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;

  if (a4 < 2) {
    return;
  }
  v7 = a2;
  v8 = a1;
  if (a4 == 2) {
    if (game_map_784840_alt1(a3, *(a2 - 1), *a1)) {
      v9 = *v8;
      *v8 = *(v7 - 1);
      *(v7 - 1) = v9;
    }
    return;
  }
  if ((__int64)a4 <= 128) {
    if (a1 == a2) {
      return;
    }
    v10 = a1 + 1;
    if (a1 + 1 == a2) {
      return;
    }
    v11 = 0;
    v12 = a1;
  LABEL_13:
    v15 = *v12;
    v14 = v12[1];
    v12 = v10;
    if (!game_map_784840_alt1(a3, v14, v15)) {
      goto LABEL_12;
    }
    v97 = v12;
    v98 = v11;
    v16 = *v12;
    v17 = v11;
    while (1) {
      v25 = v17;
      v26 = (int*)((char*)v8 + v17);
      v26[1] = *v26;
      if (v25 == 0) {
        v13 = v8;
      LABEL_11:
        *v13 = v16;
        v7 = a2;
        v12 = v97;
        v11 = v98;
      LABEL_12:
        v10 = v12 + 1;
        v11 += 4;
        if (v12 + 1 != v7) {
          goto LABEL_13;
        }
        return;
      }
      v27 = a3[1];
      if (v27 == 0) {
      LABEL_10:
        v13 = (int*)((char*)v8 + v25);
        goto LABEL_11;
      }
      v28 = *(v26 - 1);
      v29 = *(char*)(v27 + 584);
      v24 = 0x0.0p+0f;
      v30 = *a3 + 60LL;
      v31 = *(char*)(v27 + 585);
      v32 = v30 + 12LL * v16;
      v33 = *(char*)(v32 + 1);
      v34 = *(char*)(v32 + 2);
      v35 = v33 - v29;
      if (v33 - v29 < 0) {
        v35 = v29 - v33;
      }
      v36 = v34 - v31;
      if (v34 - v31 < 0) {
        v36 = v31 - v34;
      }
      v37 = v36 + v35;
      if (v36 + v35 != 0) {
        v38 =
            (float)((float)(unsigned int)(v31 + 256) * 0x1.4000000000000p+2f) +
            0x1.4000000000000p+1f;
        v39 = GameData_21ca2e8;
        v40 = v38 + -0x1.4000000000000p+10f;
        v103 = (float)((float)((float)(unsigned int)(v29 + 256) *
                               0x1.4000000000000p+2f) +
                       0x1.4000000000000p+1f) +
               -0x1.4000000000000p+10f;
        v105 = 0x0.0p+0f;
        if (GameData_21ca2e8 != 0) {
          v41 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456),
                              (float)((float)((float)(unsigned int)(v29 + 256) *
                                              0x1.4000000000000p+2f) +
                                      0x1.4000000000000p+1f) +
                                  -0x1.4000000000000p+10f,
                              v38 + -0x1.4000000000000p+10f);
          v33 = *(char*)(v32 + 1);
          v34 = *(char*)(v32 + 2);
          v39 = GameData_21ca2e8;
        }
        else {
          v41 = 0x0.0p+0f;
        }
        v101 = v41;
        v43 =
            (float)((float)(unsigned int)(v34 + 256) * 0x1.4000000000000p+2f) +
            0x1.4000000000000p+1f;
        v44 = v43 + -0x1.4000000000000p+10f;
        v99 = (float)((float)((float)(unsigned int)(v33 + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f;
        if (v39 != 0) {
          v105 =
              Height_7c4d10(*(_QWORD*)(v39 + 61456),
                            (float)((float)((float)(unsigned int)(v33 + 256) *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                                -0x1.4000000000000p+10f,
                            v43 + -0x1.4000000000000p+10f);
        }
        if (*(float*)(v27 + 124) == *(float*)(v27 + 120)) {
          v45 =
              (*(float (**)(__int64))(*(_QWORD*)(v27 + 112) + 16LL))(v27 + 112);
        }
        else {
          v45 = *(float*)(v27 + 144);
        }
        v46 = fmodf(v45, 0x1.6800000000000p+8f);
        if (v45 < 0x0.0p+0f) {
          v46 = v46 + 0x1.6800000000000p+8f;
        }
        if (v46 >= 0x1.6800000000000p+4f) {
          if (v46 >= 0x1.0e00000000000p+6f) {
            if (v46 >= 0x1.c200000000000p+6f) {
              if (v46 >= 0x1.3b00000000000p+7f) {
                if (v46 >= 0x1.9500000000000p+7f) {
                  if (v46 >= 0x1.ef00000000000p+7f) {
                    v47 = 4;
                    if (v46 < 0x1.5180000000000p+8f) {
                      v47 = 6;
                    }
                    if (v46 < 0x1.2480000000000p+8f) {
                      v47 = 2;
                    }
                  }
                  else {
                    v47 = 3;
                  }
                }
                else {
                  v47 = 1;
                }
              }
              else {
                v47 = 9;
              }
            }
            else {
              v47 = 8;
            }
          }
          else {
            v47 = 12;
          }
        }
        else {
          v47 = 4;
        }
        LANES128(v49).n128_u32[1] = 0;
        LANES128(v49).n128_u32[3] = 0;
        v48 = (char*)GameData_212cf50 + v47;
        LANES128(v49).n128_f32[0] = (float)*v48;
        LANES128(v49).n128_f32[2] = (float)v48[256];
        v50 = vmulq_f32(v49, v49);
        LANES128(v50).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v50, v50, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
                .n64_u64[0];
        LANES128(v50).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
                .n64_u64[0];
        if (LANES128(v50).n128_f32[0] > 0x0.0p+0f) {
          LANES128(v50).n128_u64[1] = LANES128(v50).n128_u64[0];
          v51 = vrsqrteq_f32(v50);
          v52 = vmulq_f32(v51, vrsqrtsq_f32(v51, vmulq_f32(v50, v51)));
          v49 = vbicq_s8(
              vmulq_f32(v49,
                        vmulq_f32(v52, vrsqrtsq_f32(v52, vmulq_f32(v50, v52)))),
              vceqzq_f32(v50));
        }
        v27 = a3[1];
        LANES128(v53).n128_u64[0] =
            LANES64_OF(
                vsub_f32(COERCE_AS(float32x2_t,
                                   __PAIR64__(LODWORD(v105), LODWORD(v99))),
                         COERCE_AS(float32x2_t,
                                   __PAIR64__(LODWORD(v101), LODWORD(v103)))))
                .n64_u64[0];
        LANES128(v53).n128_u64[1] = COERCE_UNSIGNED_INT(v44 - v40);
        LANES64(v54).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    vmul_f32(*(float32x2_t*)&LANES128(v53).n128_i8[8],
                             *(float32x2_t*)&LANES128(v53).n128_i8[8]),
                    vmul_f32(
                        COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]))))
                .n64_u64[0];
        LANES128(v55).n128_u64[0] = LANES64_OF(vpadd_f32(v54, v54)).n64_u64[0];
        LANES128(v55).n128_u64[1] = LANES128(v55).n128_u64[0];
        v56 = vrsqrteq_f32(v55);
        v57 = vmulq_f32(v56, vrsqrtsq_f32(v56, vmulq_f32(v55, v56)));
        v58 = vmulq_f32(
            v49,
            vbicq_s8(
                vmulq_f32(v53, vmulq_f32(v57, vrsqrtsq_f32(
                                                  v57, vmulq_f32(v55, v57)))),
                vceqzq_f32(v55)));
        LANES128(v58).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v58, v58, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
                .n64_u64[0];
        v42 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
                  .n64_f32[0] /
              (float)v37;
        if (v27 == 0) {
          goto LABEL_16;
        }
      }
      else {
        v42 = 0x0.0p+0f;
      }
      v59 = *(char*)(v27 + 584);
      v60 = *(char*)(v27 + 585);
      v61 = v30 + 12LL * v28;
      v62 = *(char*)(v61 + 1);
      v63 = *(char*)(v61 + 2);
      v64 = v62 - v59;
      if (v62 - v59 < 0) {
        v64 = v59 - v62;
      }
      v65 = v63 - v60;
      if (v63 - v60 < 0) {
        v65 = v60 - v63;
      }
      v66 = v65 + v64;
      if (v65 + v64 != 0) {
        v67 =
            (float)((float)(unsigned int)(v60 + 256) * 0x1.4000000000000p+2f) +
            0x1.4000000000000p+1f;
        v68 = GameData_21ca2e8;
        v69 = v67 + -0x1.4000000000000p+10f;
        v104 = (float)((float)((float)(unsigned int)(v59 + 256) *
                               0x1.4000000000000p+2f) +
                       0x1.4000000000000p+1f) +
               -0x1.4000000000000p+10f;
        v106 = 0x0.0p+0f;
        if (GameData_21ca2e8 != 0) {
          v70 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456),
                              (float)((float)((float)(unsigned int)(v59 + 256) *
                                              0x1.4000000000000p+2f) +
                                      0x1.4000000000000p+1f) +
                                  -0x1.4000000000000p+10f,
                              v67 + -0x1.4000000000000p+10f);
          v62 = *(char*)(v61 + 1);
          v63 = *(char*)(v61 + 2);
          v68 = GameData_21ca2e8;
        }
        else {
          v70 = 0x0.0p+0f;
        }
        v102 = v70;
        v71 =
            (float)((float)(unsigned int)(v63 + 256) * 0x1.4000000000000p+2f) +
            0x1.4000000000000p+1f;
        v72 = v71 + -0x1.4000000000000p+10f;
        v100 = (float)((float)((float)(unsigned int)(v62 + 256) *
                               0x1.4000000000000p+2f) +
                       0x1.4000000000000p+1f) +
               -0x1.4000000000000p+10f;
        if (v68 != 0) {
          v106 =
              Height_7c4d10(*(_QWORD*)(v68 + 61456),
                            (float)((float)((float)(unsigned int)(v62 + 256) *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                                -0x1.4000000000000p+10f,
                            v71 + -0x1.4000000000000p+10f);
        }
        if (*(float*)(v27 + 124) == *(float*)(v27 + 120)) {
          v73 =
              (*(float (**)(__int64))(*(_QWORD*)(v27 + 112) + 16LL))(v27 + 112);
        }
        else {
          v73 = *(float*)(v27 + 144);
        }
        v74 = fmodf(v73, 0x1.6800000000000p+8f);
        if (v73 < 0x0.0p+0f) {
          v74 = v74 + 0x1.6800000000000p+8f;
        }
        if (v74 >= 0x1.6800000000000p+4f) {
          if (v74 >= 0x1.0e00000000000p+6f) {
            if (v74 >= 0x1.c200000000000p+6f) {
              if (v74 >= 0x1.3b00000000000p+7f) {
                if (v74 >= 0x1.9500000000000p+7f) {
                  if (v74 >= 0x1.ef00000000000p+7f) {
                    v75 = 4;
                    if (v74 < 0x1.5180000000000p+8f) {
                      v75 = 6;
                    }
                    if (v74 < 0x1.2480000000000p+8f) {
                      v75 = 2;
                    }
                  }
                  else {
                    v75 = 3;
                  }
                }
                else {
                  v75 = 1;
                }
              }
              else {
                v75 = 9;
              }
            }
            else {
              v75 = 8;
            }
          }
          else {
            v75 = 12;
          }
        }
        else {
          v75 = 4;
        }
        LANES128(v77).n128_u32[1] = 0;
        LANES128(v77).n128_u32[3] = 0;
        v76 = (char*)GameData_212cf50 + v75;
        LANES128(v77).n128_f32[0] = (float)*v76;
        LANES128(v77).n128_f32[2] = (float)v76[256];
        v78 = vmulq_f32(v77, v77);
        LANES128(v78).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v78, v78, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0])))
                .n64_u64[0];
        LANES128(v78).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0])))
                .n64_u64[0];
        if (LANES128(v78).n128_f32[0] > 0x0.0p+0f) {
          LANES128(v78).n128_u64[1] = LANES128(v78).n128_u64[0];
          v79 = vrsqrteq_f32(v78);
          v80 = vmulq_f32(v79, vrsqrtsq_f32(v79, vmulq_f32(v78, v79)));
          v77 = vbicq_s8(
              vmulq_f32(v77,
                        vmulq_f32(v80, vrsqrtsq_f32(v80, vmulq_f32(v78, v80)))),
              vceqzq_f32(v78));
        }
        LANES128(v18).n128_u64[0] =
            LANES64_OF(
                vsub_f32(COERCE_AS(float32x2_t,
                                   __PAIR64__(LODWORD(v106), LODWORD(v100))),
                         COERCE_AS(float32x2_t,
                                   __PAIR64__(LODWORD(v102), LODWORD(v104)))))
                .n64_u64[0];
        LANES128(v18).n128_u64[1] = COERCE_UNSIGNED_INT(v72 - v69);
        LANES64(v19).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    vmul_f32(*(float32x2_t*)&LANES128(v18).n128_i8[8],
                             *(float32x2_t*)&LANES128(v18).n128_i8[8]),
                    vmul_f32(
                        COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]))))
                .n64_u64[0];
        LANES128(v20).n128_u64[0] = LANES64_OF(vpadd_f32(v19, v19)).n64_u64[0];
        LANES128(v20).n128_u64[1] = LANES128(v20).n128_u64[0];
        v21 = vrsqrteq_f32(v20);
        v22 = vmulq_f32(v21, vrsqrtsq_f32(v21, vmulq_f32(v20, v21)));
        v23 = vmulq_f32(
            v77,
            vbicq_s8(
                vmulq_f32(v18, vmulq_f32(v22, vrsqrtsq_f32(
                                                  v22, vmulq_f32(v20, v22)))),
                vceqzq_f32(v20)));
        LANES128(v23).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
                .n64_u64[0];
        v24 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
                  .n64_f32[0] /
              (float)v66;
      }
    LABEL_16:
      v17 = v25 - 4;
      if (v42 <= v24) {
        goto LABEL_10;
      }
    }
  }
  v81 = a4 >> 1;
  v82 = a5;
  v83 = a4 - (a4 >> 1);
  if ((__int64)a4 > a6) {
    game_map_783fa0(a1, &a1[v81], a3, a4 >> 1, a5, a6);
    game_map_783fa0(&v8[v81], v7, a3, v83, v82, a6);
    GameRoutine_7857c0((__int64)v8, &v8[v81], v7, a3, v81, v83, v82, a6);
    return;
  }
  game_map_784ec0_alt1(a1, &a1[v81], a3, a4 >> 1, a5);
  v86 = &v82[v81];
  game_map_784ec0_alt1(&v8[v81], v7, a3, v83, v86);
  v87 = &v82[a4];
  v88 = v86;
  while (v88 != v87) {
    v89 = game_map_784840_alt1(a3, *v88, *v82);
    if (v89) {
      v90 = v88;
    }
    else {
      v90 = v82;
    }
    if (v89) {
      v91 = 0;
    }
    else {
      v91 = 4;
    }
    v92 = *v90;
    v82 = (int*)((char*)v82 + v91);
    if (v89) {
      v93 = 4;
    }
    else {
      v93 = 0;
    }
    v88 = (int*)((char*)v88 + v93);
    *v8++ = v92;
    if (v82 == v86) {
      while (v88 != v87) {
        v95 = *v88++;
        *v8++ = v95;
      }
      return;
    }
  }
  while (v82 != v86) {
    v94 = *v82++;
    *v8++ = v94;
  }
}

bool game_map_784840(_QWORD* a1, int a2, int a3, long double a4)
{
  __int64 v4;
  int v5;
  int v6;
  float v7;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64* v14;
  char* v15;
  int v16;
  int v17;
  unsigned int v18;
  float v19;
  __int64 v20;
  int v21;
  float v22;
  float v23;
  float v24;
  unsigned __int64 v25;
  float v26;
  long double v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  float32x4_t v34;
  int8x16_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x2_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  __int64 v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;
  float v51;
  __int64 v52;
  int v53;
  float v54;
  float v55;
  unsigned __int64 v56;
  float v57;
  long double v58;
  float v59;
  float v60;
  float v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  float32x4_t v65;
  int8x16_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x2_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  int8x16_t v74;
  int v76;
  int v77;
  unsigned int v78;
  unsigned int v79;
  float v80;
  float32x2_t v81;
  float v82;
  float32x2_t v83;
  float v84;
  float32x2_t v85;
  float v86;
  float32x2_t v87;

  v4 = a1[1];
  if (v4 == 0) {
    v24 = 0.0;
    v7 = 0.0;
    return v24 > v7;
  }
  v5 = *(char*)(v4 + 584);
  v6 = *(char*)(v4 + 585);
  v7 = 0.0;
  v10 = *a1 + 60LL;
  v11 = v10 + 12LL * a2;
  v12 = *(char*)(v11 + 1);
  v13 = *(char*)(v11 + 2);
  v14 = GameData_212ce80[0];
  v15 = (char*)GameData_212cf50;
  v16 = v12 - v5;
  if (v12 - v5 < 0) {
    v16 = v5 - v12;
  }
  v17 = v13 - v6;
  if (v13 - v6 < 0) {
    v17 = v6 - v13;
  }
  v18 = v17 + v16;
  if (v17 + v16 == 0) {
    v24 = 0.0;
  LABEL_38:
    v43 = v10 + 12LL * a3;
    v44 = *(char*)(v4 + 584);
    v45 = *(char*)(v4 + 585);
    v46 = *(char*)(v43 + 1);
    v47 = *(char*)(v43 + 2);
    v48 = v46 - v44;
    if (v46 - v44 < 0) {
      v48 = v44 - v46;
    }
    v49 = v47 - v45;
    if (v47 - v45 < 0) {
      v49 = v45 - v47;
    }
    v50 = v49 + v48;
    if (v49 + v48 != 0) {
      v51 = (float)(unsigned int)(v45 + 256);
      v52 = *v14;
      v53 = 0;
      v54 = (float)(v51 * 5.0) + 2.5;
      v55 = v54 + -0x1.4000000000000p+10;
      v82 = (float)((float)((float)(unsigned int)(v44 + 256) * 5.0) + 2.5) +
            -0x1.4000000000000p+10;
      if (*v14 != 0) {
        *(float*)&a4 =
            (float)((float)((float)(unsigned int)(v44 + 256) * 5.0) + 2.5) +
            -0x1.4000000000000p+10;
        a4 = Height_7c4d10_alt1(*(_QWORD*)(v52 + 61456), a4,
                                v54 + -0x1.4000000000000p+10);
        v46 = *(char*)(v43 + 1);
        v47 = *(char*)(v43 + 2);
        v52 = *v14;
        v53 = 0;
      }
      else {
        *(_QWORD*)&a4 = 0;
      }
      v79 = LODWORD(a4);
      *(float*)&a4 = (float)(unsigned int)(v46 + 256);
      *(float*)&v56 =
          (float)((float)(*(float*)&a4 * 5.0) + 2.5) + -0x1.4000000000000p+10;
      v86 = *(float*)&v56;
      v57 = (float)((float)((float)(unsigned int)(v47 + 256) * 5.0) + 2.5) +
            -0x1.4000000000000p+10;
      if (v52 != 0) {
        *(float*)&a4 =
            (float)((float)(*(float*)&a4 * 5.0) + 2.5) + -0x1.4000000000000p+10;
        v58 = Height_7c4d10_alt1(*(_QWORD*)(v52 + 61456), a4, v57);
        *(float*)&v56 = v86;
        v53 = LODWORD(v58);
      }
      if (*(float*)(v4 + 124) == *(float*)(v4 + 120)) {
        v77 = v53;
        v59 = (*(float (**)(__int64))(*(_QWORD*)(v4 + 112) + 16LL))(v4 + 112);
        v53 = v77;
        *(float*)&v56 = v86;
        v60 = v59;
      }
      else {
        v60 = *(float*)(v4 + 144);
      }
      HIDWORD(v56) = v53;
      LANES64(v83).n64_u64[0] = __PAIR64__(v79, LODWORD(v82));
      LANES64(v87).n64_u64[0] = v56;
      v61 = fmodf(v60, 0x1.6800000000000p+8);
      if (v60 < 0.0) {
        v61 = v61 + 0x1.6800000000000p+8;
      }
      if (v61 >= 0x1.6800000000000p+4) {
        if (v61 >= 0x1.0e00000000000p+6) {
          if (v61 >= 0x1.c200000000000p+6) {
            if (v61 >= 0x1.3b00000000000p+7) {
              if (v61 >= 0x1.9500000000000p+7) {
                if (v61 >= 0x1.ef00000000000p+7) {
                  v62 = 2;
                  v63 = 4;
                  if (v61 < 0x1.5180000000000p+8) {
                    v63 = 6;
                  }
                  if (v61 >= 0x1.2480000000000p+8) {
                    v62 = v63;
                  }
                }
                else {
                  v62 = 3;
                }
              }
              else {
                v62 = 1;
              }
            }
            else {
              v62 = 9;
            }
          }
          else {
            v62 = 8;
          }
        }
        else {
          v62 = 12;
        }
      }
      else {
        v62 = 4;
      }
      v64 = &v15[v62];
      LANES128(v65).n128_u32[1] = 0;
      LANES128(v65).n128_u32[3] = 0;
      LANES128(v65).n128_f32[0] = (float)*v64;
      LANES128(v65).n128_f32[2] = (float)v64[256];
      v66 = vmulq_f32(v65, v65);
      LANES128(v66).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v66, v66, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0])))
              .n64_u64[0];
      LANES128(v66).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0])))
              .n64_u64[0];
      if (LANES128(v66).n128_f32[0] > 0.0) {
        LANES128(v66).n128_u64[1] = LANES128(v66).n128_u64[0];
        v67 = vrsqrteq_f32(v66);
        v68 = vmulq_f32(v67, vrsqrtsq_f32(v67, vmulq_f32(v66, v67)));
        v65 = vbicq_s8(
            vmulq_f32(v65,
                      vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v66, v68)))),
            vceqzq_f32(v66));
      }
      LANES128(v69).n128_u64[0] = LANES64_OF(vsub_f32(v87, v83)).n64_u64[0];
      LANES128(v69).n128_u64[1] = COERCE_UNSIGNED_INT(v57 - v55);
      LANES64(v70).n64_u64[0] =
          LANES64_OF(
              vadd_f32(
                  vmul_f32(*(float32x2_t*)&LANES128(v69).n128_i8[8],
                           *(float32x2_t*)&LANES128(v69).n128_i8[8]),
                  vmul_f32(COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]))))
              .n64_u64[0];
      LANES128(v71).n128_u64[0] = LANES64_OF(vpadd_f32(v70, v70)).n64_u64[0];
      LANES128(v71).n128_u64[1] = LANES128(v71).n128_u64[0];
      v72 = vrsqrteq_f32(v71);
      v73 = vmulq_f32(v72, vrsqrtsq_f32(v72, vmulq_f32(v71, v72)));
      v74 = vmulq_f32(
          v65,
          vbicq_s8(
              vmulq_f32(v69,
                        vmulq_f32(v73, vrsqrtsq_f32(v73, vmulq_f32(v71, v73)))),
              vceqzq_f32(v71)));
      LANES128(v74).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v74, v74, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])))
              .n64_u64[0];
      v7 = LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])))
               .n64_f32[0] /
           (float)v50;
    }
    return v24 > v7;
  }
  v19 = (float)(unsigned int)(v6 + 256);
  v20 = *GameData_212ce80[0];
  v21 = 0;
  v22 = (float)(v19 * 5.0) + 2.5;
  v23 = v22 + -0x1.4000000000000p+10;
  v80 = (float)((float)((float)(unsigned int)(v5 + 256) * 5.0) + 2.5) +
        -0x1.4000000000000p+10;
  if (*GameData_212ce80[0] != 0) {
    *(float*)&a4 =
        (float)((float)((float)(unsigned int)(v5 + 256) * 5.0) + 2.5) +
        -0x1.4000000000000p+10;
    a4 = Height_7c4d10_alt1(*(_QWORD*)(v20 + 61456), a4,
                            v22 + -0x1.4000000000000p+10);
    v12 = *(char*)(v11 + 1);
    v13 = *(char*)(v11 + 2);
    v20 = *v14;
    v21 = 0;
  }
  else {
    *(_QWORD*)&a4 = 0;
  }
  v78 = LODWORD(a4);
  *(float*)&v25 =
      (float)((float)((float)(unsigned int)(v12 + 256) * 5.0) + 2.5) +
      -0x1.4000000000000p+10;
  v84 = *(float*)&v25;
  v26 = (float)((float)((float)(unsigned int)(v13 + 256) * 5.0) + 2.5) +
        -0x1.4000000000000p+10;
  if (v20 != 0) {
    *(float*)&a4 =
        (float)((float)((float)(unsigned int)(v12 + 256) * 5.0) + 2.5) +
        -0x1.4000000000000p+10;
    v27 = Height_7c4d10_alt1(*(_QWORD*)(v20 + 61456), a4, v26);
    *(float*)&v25 = v84;
    v21 = LODWORD(v27);
  }
  if (*(float*)(v4 + 124) == *(float*)(v4 + 120)) {
    v76 = v21;
    v28 = (*(float (**)(__int64))(*(_QWORD*)(v4 + 112) + 16LL))(v4 + 112);
    v21 = v76;
    *(float*)&v25 = v84;
    v29 = v28;
  }
  else {
    v29 = *(float*)(v4 + 144);
  }
  HIDWORD(v25) = v21;
  LANES64(v81).n64_u64[0] = __PAIR64__(v78, LODWORD(v80));
  LANES64(v85).n64_u64[0] = v25;
  v30 = fmodf(v29, 0x1.6800000000000p+8);
  if (v29 < 0.0) {
    v30 = v30 + 0x1.6800000000000p+8;
  }
  if (v30 >= 0x1.6800000000000p+4) {
    if (v30 >= 0x1.0e00000000000p+6) {
      if (v30 >= 0x1.c200000000000p+6) {
        if (v30 >= 0x1.3b00000000000p+7) {
          if (v30 >= 0x1.9500000000000p+7) {
            if (v30 >= 0x1.ef00000000000p+7) {
              v31 = 2;
              v32 = 4;
              if (v30 < 0x1.5180000000000p+8) {
                v32 = 6;
              }
              if (v30 >= 0x1.2480000000000p+8) {
                v31 = v32;
              }
            }
            else {
              v31 = 3;
            }
          }
          else {
            v31 = 1;
          }
        }
        else {
          v31 = 9;
        }
      }
      else {
        v31 = 8;
      }
    }
    else {
      v31 = 12;
    }
  }
  else {
    v31 = 4;
  }
  v33 = &v15[v31];
  LANES128(v34).n128_u32[1] = 0;
  LANES128(v34).n128_u32[3] = 0;
  LANES128(v34).n128_f32[0] = (float)*v33;
  LANES128(v34).n128_f32[2] = (float)v33[256];
  v35 = vmulq_f32(v34, v34);
  LANES128(v35).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v35, v35, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
          .n64_u64[0];
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v35).n128_f32[0] > 0.0) {
    LANES128(v35).n128_u64[1] = LANES128(v35).n128_u64[0];
    v36 = vrsqrteq_f32(v35);
    v37 = vmulq_f32(v36, vrsqrtsq_f32(v36, vmulq_f32(v35, v36)));
    v34 = vbicq_s8(
        vmulq_f32(v34, vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v35, v37)))),
        vceqzq_f32(v35));
  }
  v4 = a1[1];
  LANES128(v38).n128_u64[0] = LANES64_OF(vsub_f32(v85, v81)).n64_u64[0];
  LANES128(v38).n128_u64[1] = COERCE_UNSIGNED_INT(v26 - v23);
  LANES64(v39).n64_u64[0] =
      LANES64_OF(
          vadd_f32(vmul_f32(*(float32x2_t*)&LANES128(v38).n128_i8[8],
                            *(float32x2_t*)&LANES128(v38).n128_i8[8]),
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]))))
          .n64_u64[0];
  LANES128(v40).n128_u64[0] = LANES64_OF(vpadd_f32(v39, v39)).n64_u64[0];
  LANES128(v40).n128_u64[1] = LANES128(v40).n128_u64[0];
  v41 = vrsqrteq_f32(v40);
  v42 = vmulq_f32(v41, vrsqrtsq_f32(v41, vmulq_f32(v40, v41)));
  a4 = COERCE_LONG_DOUBLE(vmulq_f32(
      v34,
      vbicq_s8(vmulq_f32(
                   v38, vmulq_f32(v42, vrsqrtsq_f32(v42, vmulq_f32(v40, v42)))),
               vceqzq_f32(v40))));
  *(float32x2_t*)&a4 = vadd_f32(
      COERCE_AS(float32x2_t,
                LANES128_OF(vextq_s8(*(int8x16_t*)&a4, *(int8x16_t*)&a4, 8u))
                    .n128_u64[0]),
      *(float32x2_t*)&a4);
  *(float32x2_t*)&a4 = vpadd_f32(*(float32x2_t*)&a4, *(float32x2_t*)&a4);
  v24 = *(float*)&a4 / (float)v18;
  if (v4 != 0) {
    goto LABEL_38;
  }
  return v24 > v7;
}

void game_map_784ec0(int* a1, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5)
{
  int* v5;
  _QWORD* v6;
  int* v7;
  int* v8;
  int v9;
  int* v10;
  __int64 v11;
  int* v12;
  int* v13;
  int* v14;
  int* v15;
  __int64 v16;
  int v17;
  int v18;
  float v19;
  int* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  __int64* v30;
  float v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  unsigned int v41;
  char* v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x2_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  int8x16_t v52;
  int v53;
  int v54;
  __int64 v55;
  int v56;
  int v57;
  int v58;
  int v59;
  unsigned int v60;
  __int64* v61;
  float v62;
  __int64 v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  __int64 v70;
  char* v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x2_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  int8x16_t v81;
  unsigned __int64 v82;
  int* v84;
  __int64 v85;
  int* v86;
  bool v87;
  int* v88;
  __int64 v89;
  int v90;
  __int64 v91;
  int v92;
  int v93;
  __int64 v94;
  int* v95;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  _DWORD* v106;

  if (a4 != 0) {
    v5 = a5;
    v6 = a3;
    v7 = a2;
    v8 = a1;
    if (a4 == 2) {
      if (game_map_784840_alt1(a3, *(a2 - 1), *a1)) {
        *v5 = *(v7 - 1);
        v9 = *v8;
      }
      else {
        *v5 = *v8;
        v9 = *(v7 - 1);
      }
      v5[1] = v9;
    }
    else {
      if (a4 == 1) {
        *a5 = *a1;
        return;
      }
      if ((__int64)a4 > 8) {
        v82 = a4 >> 1;
        v84 = &a1[a4 >> 1];
        v85 = 4 * (a4 >> 1);
        game_map_783fa0_alt2(a1, v84, a3, v82, a5, v82);
        game_map_783fa0_alt2(v84, v7, v6, a4 - v82, &v5[v82], a4 - v82);
        if (v85 != 0) {
          v86 = v84;
          while (v86 != a2) {
            v87 = game_map_784840_alt1(v6, *v86, *v8);
            if (v87) {
              v88 = v86;
            }
            else {
              v88 = v8;
            }
            if (v87) {
              v89 = 4;
            }
            else {
              v89 = 0;
            }
            v90 = *v88;
            v86 = (int*)((char*)v86 + v89);
            if (v87) {
              v91 = 0;
            }
            else {
              v91 = 4;
            }
            v8 = (int*)((char*)v8 + v91);
            *v5++ = v90;
            if (v8 == v84) {
              goto LABEL_113;
            }
          }
          while (v8 != v84) {
            v92 = *v8++;
            *v5++ = v92;
          }
        }
        else {
          v86 = v84;
        LABEL_113:
          while (v86 != a2) {
            v93 = *v86++;
            *v5++ = v93;
          }
        }
      }
      else if (a1 != a2) {
        v10 = a1 + 1;
        *a5 = *a1;
        if (a1 + 1 != a2) {
          v11 = 0;
          v12 = a5;
          v13 = a5;
          do {
            v14 = v13 + 1;
            if (!game_map_784840_alt1(v6, *v10, *v13)) {
              *v14 = *v10;
              v13 = v14;
              goto LABEL_12;
            }
            v95 = v14;
            v12[1] = *v12;
            v15 = v5;
            if (v12 == v5) {
              goto LABEL_92;
            }
            v94 = v11;
            while (1) {
              v16 = v6[1];
              if (v16 == 0) {
                v15 = v12;
                goto LABEL_91;
              }
              v17 = *(char*)(v16 + 584);
              v18 = *(char*)(v16 + 585);
              v19 = 0x0.0p+0f;
              v20 = v5;
              v106 = (int*)((char*)v5 + v11);
              v21 = *(int*)((char*)v5 + v11 - 4);
              v22 = *v6 + 60LL;
              v23 = v22 + 12LL * *v10;
              v24 = *(char*)(v23 + 1);
              v25 = *(char*)(v23 + 2);
              v26 = v24 - v17;
              if (v24 - v17 < 0) {
                v26 = v17 - v24;
              }
              v27 = v25 - v18;
              if (v25 - v18 < 0) {
                v27 = v18 - v25;
              }
              v28 = v27 + v26;
              if (v27 + v26 == 0) {
                v6 = a3;
                v35 = 0x0.0p+0f;
                v5 = v20;
              LABEL_52:
                v53 = *(char*)(v16 + 584);
                v54 = *(char*)(v16 + 585);
                v55 = v22 + 12LL * v21;
                v56 = *(char*)(v55 + 1);
                v57 = *(char*)(v55 + 2);
                v58 = v56 - v53;
                if (v56 - v53 < 0) {
                  v58 = v53 - v56;
                }
                v59 = v57 - v54;
                if (v57 - v54 < 0) {
                  v59 = v54 - v57;
                }
                v60 = v59 + v58;
                if (v59 + v58 != 0) {
                  v61 = GameData_212ce80[0];
                  v62 = (float)((float)(unsigned int)(v54 + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f;
                  v63 = *GameData_212ce80[0];
                  v64 = v62 + -0x1.4000000000000p+10f;
                  v103 = (float)((float)((float)(unsigned int)(v53 + 256) *
                                         0x1.4000000000000p+2f) +
                                 0x1.4000000000000p+1f) +
                         -0x1.4000000000000p+10f;
                  v105 = 0x0.0p+0f;
                  if (*GameData_212ce80[0] != 0) {
                    v65 = Height_7c4d10(
                        *(_QWORD*)(v63 + 61456),
                        (float)((float)((float)(unsigned int)(v53 + 256) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f,
                        v62 + -0x1.4000000000000p+10f);
                    v56 = *(char*)(v55 + 1);
                    v57 = *(char*)(v55 + 2);
                    v63 = *v61;
                  }
                  else {
                    v65 = 0x0.0p+0f;
                  }
                  v101 = v65;
                  v66 = (float)((float)(unsigned int)(v57 + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f;
                  v67 = v66 + -0x1.4000000000000p+10f;
                  v99 = (float)((float)((float)(unsigned int)(v56 + 256) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f;
                  if (v63 != 0) {
                    v105 = Height_7c4d10(
                        *(_QWORD*)(v63 + 61456),
                        (float)((float)((float)(unsigned int)(v56 + 256) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f,
                        v66 + -0x1.4000000000000p+10f);
                  }
                  if (*(float*)(v16 + 124) == *(float*)(v16 + 120)) {
                    v68 = (*(float (**)(__int64))(*(_QWORD*)(v16 + 112) +
                                                  16LL))(v16 + 112);
                  }
                  else {
                    v68 = *(float*)(v16 + 144);
                  }
                  v69 = fmodf(v68, 0x1.6800000000000p+8f);
                  if (v68 < 0x0.0p+0f) {
                    v69 = v69 + 0x1.6800000000000p+8f;
                  }
                  if (v69 >= 0x1.6800000000000p+4f) {
                    if (v69 >= 0x1.0e00000000000p+6f) {
                      if (v69 >= 0x1.c200000000000p+6f) {
                        if (v69 >= 0x1.3b00000000000p+7f) {
                          if (v69 >= 0x1.9500000000000p+7f) {
                            if (v69 >= 0x1.ef00000000000p+7f) {
                              v70 = 4;
                              if (v69 < 0x1.5180000000000p+8f) {
                                v70 = 6;
                              }
                              if (v69 < 0x1.2480000000000p+8f) {
                                v70 = 2;
                              }
                            }
                            else {
                              v70 = 3;
                            }
                          }
                          else {
                            v70 = 1;
                          }
                        }
                        else {
                          v70 = 9;
                        }
                      }
                      else {
                        v70 = 8;
                      }
                    }
                    else {
                      v70 = 12;
                    }
                  }
                  else {
                    v70 = 4;
                  }
                  LANES128(v72).n128_u32[1] = 0;
                  LANES128(v72).n128_u32[3] = 0;
                  v71 = (char*)GameData_212cf50 + v70;
                  LANES128(v72).n128_f32[0] = (float)*v71;
                  LANES128(v72).n128_f32[2] = (float)v71[256];
                  v73 = vmulq_f32(v72, v72);
                  LANES128(v73).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v73, v73, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v73).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v73).n128_u64[0] =
                      LANES64_OF(
                          vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v73).n128_u64[0])))
                          .n64_u64[0];
                  if (LANES128(v73).n128_f32[0] > 0x0.0p+0f) {
                    LANES128(v73).n128_u64[1] = LANES128(v73).n128_u64[0];
                    v74 = vrsqrteq_f32(v73);
                    v75 =
                        vmulq_f32(v74, vrsqrtsq_f32(v74, vmulq_f32(v73, v74)));
                    v72 = vbicq_s8(
                        vmulq_f32(
                            v72, vmulq_f32(v75, vrsqrtsq_f32(
                                                    v75, vmulq_f32(v73, v75)))),
                        vceqzq_f32(v73));
                  }
                  LANES128(v76).n128_u64[0] =
                      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t,
                                                    __PAIR64__(LODWORD(v105),
                                                               LODWORD(v99))),
                                          COERCE_AS(float32x2_t,
                                                    __PAIR64__(LODWORD(v101),
                                                               LODWORD(v103)))))
                          .n64_u64[0];
                  LANES128(v76).n128_u64[1] = COERCE_UNSIGNED_INT(v67 - v64);
                  LANES64(v77).n64_u64[0] =
                      LANES64_OF(
                          vadd_f32(
                              vmul_f32(
                                  *(float32x2_t*)&LANES128(v76).n128_i8[8],
                                  *(float32x2_t*)&LANES128(v76).n128_i8[8]),
                              vmul_f32(COERCE_AS(float32x2_t,
                                                 LANES128(v76).n128_u64[0]),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v76).n128_u64[0]))))
                          .n64_u64[0];
                  LANES128(v78).n128_u64[0] =
                      LANES64_OF(vpadd_f32(v77, v77)).n64_u64[0];
                  LANES128(v78).n128_u64[1] = LANES128(v78).n128_u64[0];
                  v79 = vrsqrteq_f32(v78);
                  v80 = vmulq_f32(v79, vrsqrtsq_f32(v79, vmulq_f32(v78, v79)));
                  v81 = vmulq_f32(
                      v72,
                      vbicq_s8(
                          vmulq_f32(
                              v76,
                              vmulq_f32(
                                  v80, vrsqrtsq_f32(v80, vmulq_f32(v78, v80)))),
                          vceqzq_f32(v78)));
                  LANES128(v81).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v81, v81, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v81).n128_u64[0])))
                          .n64_u64[0];
                  v19 = LANES64_OF(
                            vpadd_f32(COERCE_AS(float32x2_t,
                                                LANES128(v81).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v81).n128_u64[0])))
                            .n64_f32[0] /
                        (float)v60;
                }
                goto LABEL_86;
              }
              v29 = v21;
              v30 = GameData_212ce80[0];
              v31 = (float)((float)(unsigned int)(v18 + 256) *
                            0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f;
              v32 = *GameData_212ce80[0];
              v33 = v31 + -0x1.4000000000000p+10f;
              v102 = (float)((float)((float)(unsigned int)(v17 + 256) *
                                     0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f;
              v104 = 0x0.0p+0f;
              if (*GameData_212ce80[0] != 0) {
                v34 = Height_7c4d10(
                    *(_QWORD*)(v32 + 61456),
                    (float)((float)((float)(unsigned int)(v17 + 256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f,
                    v31 + -0x1.4000000000000p+10f);
                v24 = *(char*)(v23 + 1);
                v25 = *(char*)(v23 + 2);
                v32 = *v30;
              }
              else {
                v34 = 0x0.0p+0f;
              }
              v100 = v34;
              v36 = (float)((float)(unsigned int)(v25 + 256) *
                            0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f;
              v37 = v36 + -0x1.4000000000000p+10f;
              v98 = (float)((float)((float)(unsigned int)(v24 + 256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f;
              if (v32 != 0) {
                v104 = Height_7c4d10(
                    *(_QWORD*)(v32 + 61456),
                    (float)((float)((float)(unsigned int)(v24 + 256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f,
                    v36 + -0x1.4000000000000p+10f);
              }
              if (*(float*)(v16 + 124) == *(float*)(v16 + 120)) {
                v38 = (*(float (**)(__int64))(*(_QWORD*)(v16 + 112) + 16LL))(
                    v16 + 112);
              }
              else {
                v38 = *(float*)(v16 + 144);
              }
              v39 = fmodf(v38, 0x1.6800000000000p+8f);
              if (v38 < 0x0.0p+0f) {
                v39 = v39 + 0x1.6800000000000p+8f;
              }
              if (v39 >= 0x1.6800000000000p+4f) {
                v21 = v29;
                v41 = v28;
                if (v39 >= 0x1.0e00000000000p+6f) {
                  v5 = v20;
                  if (v39 >= 0x1.c200000000000p+6f) {
                    if (v39 >= 0x1.3b00000000000p+7f) {
                      if (v39 >= 0x1.9500000000000p+7f) {
                        if (v39 >= 0x1.ef00000000000p+7f) {
                          v40 = 4;
                          if (v39 < 0x1.5180000000000p+8f) {
                            v40 = 6;
                          }
                          if (v39 < 0x1.2480000000000p+8f) {
                            v40 = 2;
                          }
                        }
                        else {
                          v40 = 3;
                        }
                      }
                      else {
                        v40 = 1;
                      }
                    }
                    else {
                      v40 = 9;
                    }
                  }
                  else {
                    v40 = 8;
                  }
                }
                else {
                  v40 = 12;
                  v5 = v20;
                }
              }
              else {
                v40 = 4;
                v21 = v29;
                v41 = v28;
                v5 = v20;
              }
              LANES128(v43).n128_u32[1] = 0;
              LANES128(v43).n128_u32[3] = 0;
              v42 = (char*)GameData_212cf50 + v40;
              LANES128(v43).n128_f32[0] = (float)*v42;
              LANES128(v43).n128_f32[2] = (float)v42[256];
              v44 = vmulq_f32(v43, v43);
              LANES128(v44).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v44, v44, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v44).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
                      .n64_u64[0];
              if (LANES128(v44).n128_f32[0] > 0x0.0p+0f) {
                LANES128(v44).n128_u64[1] = LANES128(v44).n128_u64[0];
                v45 = vrsqrteq_f32(v44);
                v46 = vmulq_f32(v45, vrsqrtsq_f32(v45, vmulq_f32(v44, v45)));
                v43 = vbicq_s8(
                    vmulq_f32(
                        v43,
                        vmulq_f32(v46, vrsqrtsq_f32(v46, vmulq_f32(v44, v46)))),
                    vceqzq_f32(v44));
              }
              v6 = a3;
              v16 = a3[1];
              LANES128(v47).n128_u64[0] =
                  LANES64_OF(
                      vsub_f32(
                          COERCE_AS(float32x2_t,
                                    __PAIR64__(LODWORD(v104), LODWORD(v98))),
                          COERCE_AS(float32x2_t,
                                    __PAIR64__(LODWORD(v100), LODWORD(v102)))))
                      .n64_u64[0];
              LANES128(v47).n128_u64[1] = COERCE_UNSIGNED_INT(v37 - v33);
              LANES64(v48).n64_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          vmul_f32(*(float32x2_t*)&LANES128(v47).n128_i8[8],
                                   *(float32x2_t*)&LANES128(v47).n128_i8[8]),
                          vmul_f32(
                              COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v47).n128_u64[0]))))
                      .n64_u64[0];
              LANES128(v49).n128_u64[0] =
                  LANES64_OF(vpadd_f32(v48, v48)).n64_u64[0];
              LANES128(v49).n128_u64[1] = LANES128(v49).n128_u64[0];
              v50 = vrsqrteq_f32(v49);
              v51 = vmulq_f32(v50, vrsqrtsq_f32(v50, vmulq_f32(v49, v50)));
              v52 = vmulq_f32(
                  v43,
                  vbicq_s8(
                      vmulq_f32(v47,
                                vmulq_f32(v51, vrsqrtsq_f32(
                                                   v51, vmulq_f32(v49, v51)))),
                      vceqzq_f32(v49)));
              LANES128(v52).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v52, v52, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
                      .n64_u64[0];
              v35 = LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
                        .n64_f32[0] /
                    (float)v41;
              if (v16 != 0) {
                goto LABEL_52;
              }
            LABEL_86:
              if (v35 <= v19) {
                break;
              }
              --v12;
              v11 -= 4;
              *v106 = *(v106 - 1);
              if (v11 == 0) {
                v15 = v5;
                goto LABEL_91;
              }
            }
            v15 = (int*)((char*)v5 + v11);
          LABEL_91:
            v7 = a2;
            v11 = v94;
          LABEL_92:
            *v15 = *v10;
            v13 = v95;
          LABEL_12:
            ++v10;
            v11 += 4;
            v12 = v13;
          } while (v10 != v7);
        }
      }
    }
  }
}

void game_map_785b80(int* a1, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5,
                     __int64 a6)
{
  int* v7;
  int* v8;
  int v9;
  int* v10;
  __int64 v11;
  int* v12;
  int* v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  float32x4_t v18;
  float32x2_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  int8x16_t v23;
  float v24;
  __int64 v25;
  _DWORD* v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  int v36;
  unsigned int v37;
  float v38;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  __int64 v47;
  char* v48;
  float32x4_t v49;
  int8x16_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x2_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  int8x16_t v58;
  int v59;
  int v60;
  __int64 v61;
  int v62;
  int v63;
  int v64;
  int v65;
  unsigned int v66;
  float v67;
  __int64 v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  __int64 v75;
  char* v76;
  float32x4_t v77;
  int8x16_t v78;
  float32x4_t v79;
  float32x4_t v80;
  unsigned __int64 v81;
  int* v82;
  unsigned __int64 v83;
  int* v86;
  int* v87;
  int* v88;
  bool v89;
  int* v90;
  __int64 v91;
  int v92;
  __int64 v93;
  int v94;
  int v95;
  int* v97;
  __int64 v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;

  if (a4 < 2) {
    return;
  }
  v7 = a2;
  v8 = a1;
  if (a4 == 2) {
    if (game_map_786420_alt1(a3, *(a2 - 1), *a1)) {
      v9 = *v8;
      *v8 = *(v7 - 1);
      *(v7 - 1) = v9;
    }
    return;
  }
  if ((__int64)a4 <= 128) {
    if (a1 == a2) {
      return;
    }
    v10 = a1 + 1;
    if (a1 + 1 == a2) {
      return;
    }
    v11 = 0;
    v12 = a1;
  LABEL_13:
    v15 = *v12;
    v14 = v12[1];
    v12 = v10;
    if (!game_map_786420_alt1(a3, v14, v15)) {
      goto LABEL_12;
    }
    v97 = v12;
    v98 = v11;
    v16 = *v12;
    v17 = v11;
    while (1) {
      v25 = v17;
      v26 = (int*)((char*)v8 + v17);
      v26[1] = *v26;
      if (v25 == 0) {
        v13 = v8;
      LABEL_11:
        *v13 = v16;
        v7 = a2;
        v12 = v97;
        v11 = v98;
      LABEL_12:
        v10 = v12 + 1;
        v11 += 4;
        if (v12 + 1 != v7) {
          goto LABEL_13;
        }
        return;
      }
      v27 = a3[1];
      if (v27 == 0) {
      LABEL_10:
        v13 = (int*)((char*)v8 + v25);
        goto LABEL_11;
      }
      v28 = *(v26 - 1);
      v29 = *(char*)(v27 + 584);
      v24 = 0x0.0p+0f;
      v30 = *a3 + 60LL;
      v31 = *(char*)(v27 + 585);
      v32 = v30 + 12LL * v16;
      v33 = *(char*)(v32 + 1);
      v34 = *(char*)(v32 + 2);
      v35 = v33 - v29;
      if (v33 - v29 < 0) {
        v35 = v29 - v33;
      }
      v36 = v34 - v31;
      if (v34 - v31 < 0) {
        v36 = v31 - v34;
      }
      v37 = v36 + v35;
      if (v36 + v35 != 0) {
        v38 =
            (float)((float)(unsigned int)(v31 + 256) * 0x1.4000000000000p+2f) +
            0x1.4000000000000p+1f;
        v39 = GameData_21ca2e8;
        v40 = v38 + -0x1.4000000000000p+10f;
        v103 = (float)((float)((float)(unsigned int)(v29 + 256) *
                               0x1.4000000000000p+2f) +
                       0x1.4000000000000p+1f) +
               -0x1.4000000000000p+10f;
        v105 = 0x0.0p+0f;
        if (GameData_21ca2e8 != 0) {
          v41 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456),
                              (float)((float)((float)(unsigned int)(v29 + 256) *
                                              0x1.4000000000000p+2f) +
                                      0x1.4000000000000p+1f) +
                                  -0x1.4000000000000p+10f,
                              v38 + -0x1.4000000000000p+10f);
          v33 = *(char*)(v32 + 1);
          v34 = *(char*)(v32 + 2);
          v39 = GameData_21ca2e8;
        }
        else {
          v41 = 0x0.0p+0f;
        }
        v101 = v41;
        v43 =
            (float)((float)(unsigned int)(v34 + 256) * 0x1.4000000000000p+2f) +
            0x1.4000000000000p+1f;
        v44 = v43 + -0x1.4000000000000p+10f;
        v99 = (float)((float)((float)(unsigned int)(v33 + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f;
        if (v39 != 0) {
          v105 =
              Height_7c4d10(*(_QWORD*)(v39 + 61456),
                            (float)((float)((float)(unsigned int)(v33 + 256) *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                                -0x1.4000000000000p+10f,
                            v43 + -0x1.4000000000000p+10f);
        }
        if (*(float*)(v27 + 124) == *(float*)(v27 + 120)) {
          v45 =
              (*(float (**)(__int64))(*(_QWORD*)(v27 + 112) + 16LL))(v27 + 112);
        }
        else {
          v45 = *(float*)(v27 + 144);
        }
        v46 = fmodf(v45, 0x1.6800000000000p+8f);
        if (v45 < 0x0.0p+0f) {
          v46 = v46 + 0x1.6800000000000p+8f;
        }
        if (v46 >= 0x1.6800000000000p+4f) {
          if (v46 >= 0x1.0e00000000000p+6f) {
            if (v46 >= 0x1.c200000000000p+6f) {
              if (v46 >= 0x1.3b00000000000p+7f) {
                if (v46 >= 0x1.9500000000000p+7f) {
                  if (v46 >= 0x1.ef00000000000p+7f) {
                    v47 = 4;
                    if (v46 < 0x1.5180000000000p+8f) {
                      v47 = 6;
                    }
                    if (v46 < 0x1.2480000000000p+8f) {
                      v47 = 2;
                    }
                  }
                  else {
                    v47 = 3;
                  }
                }
                else {
                  v47 = 1;
                }
              }
              else {
                v47 = 9;
              }
            }
            else {
              v47 = 8;
            }
          }
          else {
            v47 = 12;
          }
        }
        else {
          v47 = 4;
        }
        LANES128(v49).n128_u32[1] = 0;
        LANES128(v49).n128_u32[3] = 0;
        v48 = (char*)GameData_212cf50 + v47;
        LANES128(v49).n128_f32[0] = (float)*v48;
        LANES128(v49).n128_f32[2] = (float)v48[256];
        v50 = vmulq_f32(v49, v49);
        LANES128(v50).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v50, v50, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
                .n64_u64[0];
        LANES128(v50).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
                .n64_u64[0];
        if (LANES128(v50).n128_f32[0] > 0x0.0p+0f) {
          LANES128(v50).n128_u64[1] = LANES128(v50).n128_u64[0];
          v51 = vrsqrteq_f32(v50);
          v52 = vmulq_f32(v51, vrsqrtsq_f32(v51, vmulq_f32(v50, v51)));
          v49 = vbicq_s8(
              vmulq_f32(v49,
                        vmulq_f32(v52, vrsqrtsq_f32(v52, vmulq_f32(v50, v52)))),
              vceqzq_f32(v50));
        }
        v27 = a3[1];
        LANES128(v53).n128_u64[0] =
            LANES64_OF(
                vsub_f32(COERCE_AS(float32x2_t,
                                   __PAIR64__(LODWORD(v105), LODWORD(v99))),
                         COERCE_AS(float32x2_t,
                                   __PAIR64__(LODWORD(v101), LODWORD(v103)))))
                .n64_u64[0];
        LANES128(v53).n128_u64[1] = COERCE_UNSIGNED_INT(v44 - v40);
        LANES64(v54).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    vmul_f32(*(float32x2_t*)&LANES128(v53).n128_i8[8],
                             *(float32x2_t*)&LANES128(v53).n128_i8[8]),
                    vmul_f32(
                        COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]))))
                .n64_u64[0];
        LANES128(v55).n128_u64[0] = LANES64_OF(vpadd_f32(v54, v54)).n64_u64[0];
        LANES128(v55).n128_u64[1] = LANES128(v55).n128_u64[0];
        v56 = vrsqrteq_f32(v55);
        v57 = vmulq_f32(v56, vrsqrtsq_f32(v56, vmulq_f32(v55, v56)));
        v58 = vmulq_f32(
            v49,
            vbicq_s8(
                vmulq_f32(v53, vmulq_f32(v57, vrsqrtsq_f32(
                                                  v57, vmulq_f32(v55, v57)))),
                vceqzq_f32(v55)));
        LANES128(v58).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v58, v58, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
                .n64_u64[0];
        v42 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
                  .n64_f32[0] /
              (float)v37;
        if (v27 == 0) {
          goto LABEL_16;
        }
      }
      else {
        v42 = 0x0.0p+0f;
      }
      v59 = *(char*)(v27 + 584);
      v60 = *(char*)(v27 + 585);
      v61 = v30 + 12LL * v28;
      v62 = *(char*)(v61 + 1);
      v63 = *(char*)(v61 + 2);
      v64 = v62 - v59;
      if (v62 - v59 < 0) {
        v64 = v59 - v62;
      }
      v65 = v63 - v60;
      if (v63 - v60 < 0) {
        v65 = v60 - v63;
      }
      v66 = v65 + v64;
      if (v65 + v64 != 0) {
        v67 =
            (float)((float)(unsigned int)(v60 + 256) * 0x1.4000000000000p+2f) +
            0x1.4000000000000p+1f;
        v68 = GameData_21ca2e8;
        v69 = v67 + -0x1.4000000000000p+10f;
        v104 = (float)((float)((float)(unsigned int)(v59 + 256) *
                               0x1.4000000000000p+2f) +
                       0x1.4000000000000p+1f) +
               -0x1.4000000000000p+10f;
        v106 = 0x0.0p+0f;
        if (GameData_21ca2e8 != 0) {
          v70 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456),
                              (float)((float)((float)(unsigned int)(v59 + 256) *
                                              0x1.4000000000000p+2f) +
                                      0x1.4000000000000p+1f) +
                                  -0x1.4000000000000p+10f,
                              v67 + -0x1.4000000000000p+10f);
          v62 = *(char*)(v61 + 1);
          v63 = *(char*)(v61 + 2);
          v68 = GameData_21ca2e8;
        }
        else {
          v70 = 0x0.0p+0f;
        }
        v102 = v70;
        v71 =
            (float)((float)(unsigned int)(v63 + 256) * 0x1.4000000000000p+2f) +
            0x1.4000000000000p+1f;
        v72 = v71 + -0x1.4000000000000p+10f;
        v100 = (float)((float)((float)(unsigned int)(v62 + 256) *
                               0x1.4000000000000p+2f) +
                       0x1.4000000000000p+1f) +
               -0x1.4000000000000p+10f;
        if (v68 != 0) {
          v106 =
              Height_7c4d10(*(_QWORD*)(v68 + 61456),
                            (float)((float)((float)(unsigned int)(v62 + 256) *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                                -0x1.4000000000000p+10f,
                            v71 + -0x1.4000000000000p+10f);
        }
        if (*(float*)(v27 + 124) == *(float*)(v27 + 120)) {
          v73 =
              (*(float (**)(__int64))(*(_QWORD*)(v27 + 112) + 16LL))(v27 + 112);
        }
        else {
          v73 = *(float*)(v27 + 144);
        }
        v74 = fmodf(v73, 0x1.6800000000000p+8f);
        if (v73 < 0x0.0p+0f) {
          v74 = v74 + 0x1.6800000000000p+8f;
        }
        if (v74 >= 0x1.6800000000000p+4f) {
          if (v74 >= 0x1.0e00000000000p+6f) {
            if (v74 >= 0x1.c200000000000p+6f) {
              if (v74 >= 0x1.3b00000000000p+7f) {
                if (v74 >= 0x1.9500000000000p+7f) {
                  if (v74 >= 0x1.ef00000000000p+7f) {
                    v75 = 4;
                    if (v74 < 0x1.5180000000000p+8f) {
                      v75 = 6;
                    }
                    if (v74 < 0x1.2480000000000p+8f) {
                      v75 = 2;
                    }
                  }
                  else {
                    v75 = 3;
                  }
                }
                else {
                  v75 = 1;
                }
              }
              else {
                v75 = 9;
              }
            }
            else {
              v75 = 8;
            }
          }
          else {
            v75 = 12;
          }
        }
        else {
          v75 = 4;
        }
        LANES128(v77).n128_u32[1] = 0;
        LANES128(v77).n128_u32[3] = 0;
        v76 = (char*)GameData_212cf50 + v75;
        LANES128(v77).n128_f32[0] = (float)*v76;
        LANES128(v77).n128_f32[2] = (float)v76[256];
        v78 = vmulq_f32(v77, v77);
        LANES128(v78).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v78, v78, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0])))
                .n64_u64[0];
        LANES128(v78).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0])))
                .n64_u64[0];
        if (LANES128(v78).n128_f32[0] > 0x0.0p+0f) {
          LANES128(v78).n128_u64[1] = LANES128(v78).n128_u64[0];
          v79 = vrsqrteq_f32(v78);
          v80 = vmulq_f32(v79, vrsqrtsq_f32(v79, vmulq_f32(v78, v79)));
          v77 = vbicq_s8(
              vmulq_f32(v77,
                        vmulq_f32(v80, vrsqrtsq_f32(v80, vmulq_f32(v78, v80)))),
              vceqzq_f32(v78));
        }
        LANES128(v18).n128_u64[0] =
            LANES64_OF(
                vsub_f32(COERCE_AS(float32x2_t,
                                   __PAIR64__(LODWORD(v106), LODWORD(v100))),
                         COERCE_AS(float32x2_t,
                                   __PAIR64__(LODWORD(v102), LODWORD(v104)))))
                .n64_u64[0];
        LANES128(v18).n128_u64[1] = COERCE_UNSIGNED_INT(v72 - v69);
        LANES64(v19).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    vmul_f32(*(float32x2_t*)&LANES128(v18).n128_i8[8],
                             *(float32x2_t*)&LANES128(v18).n128_i8[8]),
                    vmul_f32(
                        COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]))))
                .n64_u64[0];
        LANES128(v20).n128_u64[0] = LANES64_OF(vpadd_f32(v19, v19)).n64_u64[0];
        LANES128(v20).n128_u64[1] = LANES128(v20).n128_u64[0];
        v21 = vrsqrteq_f32(v20);
        v22 = vmulq_f32(v21, vrsqrtsq_f32(v21, vmulq_f32(v20, v21)));
        v23 = vmulq_f32(
            v77,
            vbicq_s8(
                vmulq_f32(v18, vmulq_f32(v22, vrsqrtsq_f32(
                                                  v22, vmulq_f32(v20, v22)))),
                vceqzq_f32(v20)));
        LANES128(v23).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
                .n64_u64[0];
        v24 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
                  .n64_f32[0] /
              (float)v66;
      }
    LABEL_16:
      v17 = v25 - 4;
      if (v42 <= v24) {
        goto LABEL_10;
      }
    }
  }
  v81 = a4 >> 1;
  v82 = a5;
  v83 = a4 - (a4 >> 1);
  if ((__int64)a4 > a6) {
    game_map_785b80(a1, &a1[v81], a3, a4 >> 1, a5, a6);
    game_map_785b80(&v8[v81], v7, a3, v83, v82, a6);
    GameRoutine_7873a0((__int64)v8, &v8[v81], v7, a3, v81, v83, v82, a6);
    return;
  }
  game_map_786aa0_alt1(a1, &a1[v81], a3, a4 >> 1, a5);
  v86 = &v82[v81];
  game_map_786aa0_alt1(&v8[v81], v7, a3, v83, v86);
  v87 = &v82[a4];
  v88 = v86;
  while (v88 != v87) {
    v89 = game_map_786420_alt1(a3, *v88, *v82);
    if (v89) {
      v90 = v88;
    }
    else {
      v90 = v82;
    }
    if (v89) {
      v91 = 0;
    }
    else {
      v91 = 4;
    }
    v92 = *v90;
    v82 = (int*)((char*)v82 + v91);
    if (v89) {
      v93 = 4;
    }
    else {
      v93 = 0;
    }
    v88 = (int*)((char*)v88 + v93);
    *v8++ = v92;
    if (v82 == v86) {
      while (v88 != v87) {
        v95 = *v88++;
        *v8++ = v95;
      }
      return;
    }
  }
  while (v82 != v86) {
    v94 = *v82++;
    *v8++ = v94;
  }
}

bool game_map_786420(_QWORD* a1, int a2, int a3, long double a4)
{
  __int64 v4;
  int v5;
  int v6;
  float v7;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64* v14;
  char* v15;
  int v16;
  int v17;
  unsigned int v18;
  float v19;
  __int64 v20;
  int v21;
  float v22;
  float v23;
  float v24;
  unsigned __int64 v25;
  float v26;
  long double v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  float32x4_t v34;
  int8x16_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x2_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  __int64 v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;
  float v51;
  __int64 v52;
  int v53;
  float v54;
  float v55;
  unsigned __int64 v56;
  float v57;
  long double v58;
  float v59;
  float v60;
  float v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  float32x4_t v65;
  int8x16_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x2_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  int8x16_t v74;
  int v76;
  int v77;
  unsigned int v78;
  unsigned int v79;
  float v80;
  float32x2_t v81;
  float v82;
  float32x2_t v83;
  float v84;
  float32x2_t v85;
  float v86;
  float32x2_t v87;

  v4 = a1[1];
  if (v4 == 0) {
    v24 = 0.0;
    v7 = 0.0;
    return v24 > v7;
  }
  v5 = *(char*)(v4 + 584);
  v6 = *(char*)(v4 + 585);
  v7 = 0.0;
  v10 = *a1 + 60LL;
  v11 = v10 + 12LL * a2;
  v12 = *(char*)(v11 + 1);
  v13 = *(char*)(v11 + 2);
  v14 = GameData_212ce80[0];
  v15 = (char*)GameData_212cf50;
  v16 = v12 - v5;
  if (v12 - v5 < 0) {
    v16 = v5 - v12;
  }
  v17 = v13 - v6;
  if (v13 - v6 < 0) {
    v17 = v6 - v13;
  }
  v18 = v17 + v16;
  if (v17 + v16 == 0) {
    v24 = 0.0;
  LABEL_38:
    v43 = v10 + 12LL * a3;
    v44 = *(char*)(v4 + 584);
    v45 = *(char*)(v4 + 585);
    v46 = *(char*)(v43 + 1);
    v47 = *(char*)(v43 + 2);
    v48 = v46 - v44;
    if (v46 - v44 < 0) {
      v48 = v44 - v46;
    }
    v49 = v47 - v45;
    if (v47 - v45 < 0) {
      v49 = v45 - v47;
    }
    v50 = v49 + v48;
    if (v49 + v48 != 0) {
      v51 = (float)(unsigned int)(v45 + 256);
      v52 = *v14;
      v53 = 0;
      v54 = (float)(v51 * 5.0) + 2.5;
      v55 = v54 + -0x1.4000000000000p+10;
      v82 = (float)((float)((float)(unsigned int)(v44 + 256) * 5.0) + 2.5) +
            -0x1.4000000000000p+10;
      if (*v14 != 0) {
        *(float*)&a4 =
            (float)((float)((float)(unsigned int)(v44 + 256) * 5.0) + 2.5) +
            -0x1.4000000000000p+10;
        a4 = Height_7c4d10_alt1(*(_QWORD*)(v52 + 61456), a4,
                                v54 + -0x1.4000000000000p+10);
        v46 = *(char*)(v43 + 1);
        v47 = *(char*)(v43 + 2);
        v52 = *v14;
        v53 = 0;
      }
      else {
        *(_QWORD*)&a4 = 0;
      }
      v79 = LODWORD(a4);
      *(float*)&a4 = (float)(unsigned int)(v46 + 256);
      *(float*)&v56 =
          (float)((float)(*(float*)&a4 * 5.0) + 2.5) + -0x1.4000000000000p+10;
      v86 = *(float*)&v56;
      v57 = (float)((float)((float)(unsigned int)(v47 + 256) * 5.0) + 2.5) +
            -0x1.4000000000000p+10;
      if (v52 != 0) {
        *(float*)&a4 =
            (float)((float)(*(float*)&a4 * 5.0) + 2.5) + -0x1.4000000000000p+10;
        v58 = Height_7c4d10_alt1(*(_QWORD*)(v52 + 61456), a4, v57);
        *(float*)&v56 = v86;
        v53 = LODWORD(v58);
      }
      if (*(float*)(v4 + 124) == *(float*)(v4 + 120)) {
        v77 = v53;
        v59 = (*(float (**)(__int64))(*(_QWORD*)(v4 + 112) + 16LL))(v4 + 112);
        v53 = v77;
        *(float*)&v56 = v86;
        v60 = v59;
      }
      else {
        v60 = *(float*)(v4 + 144);
      }
      HIDWORD(v56) = v53;
      LANES64(v83).n64_u64[0] = __PAIR64__(v79, LODWORD(v82));
      LANES64(v87).n64_u64[0] = v56;
      v61 = fmodf(v60, 0x1.6800000000000p+8);
      if (v60 < 0.0) {
        v61 = v61 + 0x1.6800000000000p+8;
      }
      if (v61 >= 0x1.6800000000000p+4) {
        if (v61 >= 0x1.0e00000000000p+6) {
          if (v61 >= 0x1.c200000000000p+6) {
            if (v61 >= 0x1.3b00000000000p+7) {
              if (v61 >= 0x1.9500000000000p+7) {
                if (v61 >= 0x1.ef00000000000p+7) {
                  v62 = 2;
                  v63 = 4;
                  if (v61 < 0x1.5180000000000p+8) {
                    v63 = 6;
                  }
                  if (v61 >= 0x1.2480000000000p+8) {
                    v62 = v63;
                  }
                }
                else {
                  v62 = 3;
                }
              }
              else {
                v62 = 1;
              }
            }
            else {
              v62 = 9;
            }
          }
          else {
            v62 = 8;
          }
        }
        else {
          v62 = 12;
        }
      }
      else {
        v62 = 4;
      }
      v64 = &v15[v62];
      LANES128(v65).n128_u32[1] = 0;
      LANES128(v65).n128_u32[3] = 0;
      LANES128(v65).n128_f32[0] = (float)*v64;
      LANES128(v65).n128_f32[2] = (float)v64[256];
      v66 = vmulq_f32(v65, v65);
      LANES128(v66).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v66, v66, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0])))
              .n64_u64[0];
      LANES128(v66).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0])))
              .n64_u64[0];
      if (LANES128(v66).n128_f32[0] > 0.0) {
        LANES128(v66).n128_u64[1] = LANES128(v66).n128_u64[0];
        v67 = vrsqrteq_f32(v66);
        v68 = vmulq_f32(v67, vrsqrtsq_f32(v67, vmulq_f32(v66, v67)));
        v65 = vbicq_s8(
            vmulq_f32(v65,
                      vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v66, v68)))),
            vceqzq_f32(v66));
      }
      LANES128(v69).n128_u64[0] = LANES64_OF(vsub_f32(v87, v83)).n64_u64[0];
      LANES128(v69).n128_u64[1] = COERCE_UNSIGNED_INT(v57 - v55);
      LANES64(v70).n64_u64[0] =
          LANES64_OF(
              vadd_f32(
                  vmul_f32(*(float32x2_t*)&LANES128(v69).n128_i8[8],
                           *(float32x2_t*)&LANES128(v69).n128_i8[8]),
                  vmul_f32(COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]))))
              .n64_u64[0];
      LANES128(v71).n128_u64[0] = LANES64_OF(vpadd_f32(v70, v70)).n64_u64[0];
      LANES128(v71).n128_u64[1] = LANES128(v71).n128_u64[0];
      v72 = vrsqrteq_f32(v71);
      v73 = vmulq_f32(v72, vrsqrtsq_f32(v72, vmulq_f32(v71, v72)));
      v74 = vmulq_f32(
          v65,
          vbicq_s8(
              vmulq_f32(v69,
                        vmulq_f32(v73, vrsqrtsq_f32(v73, vmulq_f32(v71, v73)))),
              vceqzq_f32(v71)));
      LANES128(v74).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v74, v74, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])))
              .n64_u64[0];
      v7 = LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])))
               .n64_f32[0] /
           (float)v50;
    }
    return v24 > v7;
  }
  v19 = (float)(unsigned int)(v6 + 256);
  v20 = *GameData_212ce80[0];
  v21 = 0;
  v22 = (float)(v19 * 5.0) + 2.5;
  v23 = v22 + -0x1.4000000000000p+10;
  v80 = (float)((float)((float)(unsigned int)(v5 + 256) * 5.0) + 2.5) +
        -0x1.4000000000000p+10;
  if (*GameData_212ce80[0] != 0) {
    *(float*)&a4 =
        (float)((float)((float)(unsigned int)(v5 + 256) * 5.0) + 2.5) +
        -0x1.4000000000000p+10;
    a4 = Height_7c4d10_alt1(*(_QWORD*)(v20 + 61456), a4,
                            v22 + -0x1.4000000000000p+10);
    v12 = *(char*)(v11 + 1);
    v13 = *(char*)(v11 + 2);
    v20 = *v14;
    v21 = 0;
  }
  else {
    *(_QWORD*)&a4 = 0;
  }
  v78 = LODWORD(a4);
  *(float*)&v25 =
      (float)((float)((float)(unsigned int)(v12 + 256) * 5.0) + 2.5) +
      -0x1.4000000000000p+10;
  v84 = *(float*)&v25;
  v26 = (float)((float)((float)(unsigned int)(v13 + 256) * 5.0) + 2.5) +
        -0x1.4000000000000p+10;
  if (v20 != 0) {
    *(float*)&a4 =
        (float)((float)((float)(unsigned int)(v12 + 256) * 5.0) + 2.5) +
        -0x1.4000000000000p+10;
    v27 = Height_7c4d10_alt1(*(_QWORD*)(v20 + 61456), a4, v26);
    *(float*)&v25 = v84;
    v21 = LODWORD(v27);
  }
  if (*(float*)(v4 + 124) == *(float*)(v4 + 120)) {
    v76 = v21;
    v28 = (*(float (**)(__int64))(*(_QWORD*)(v4 + 112) + 16LL))(v4 + 112);
    v21 = v76;
    *(float*)&v25 = v84;
    v29 = v28;
  }
  else {
    v29 = *(float*)(v4 + 144);
  }
  HIDWORD(v25) = v21;
  LANES64(v81).n64_u64[0] = __PAIR64__(v78, LODWORD(v80));
  LANES64(v85).n64_u64[0] = v25;
  v30 = fmodf(v29, 0x1.6800000000000p+8);
  if (v29 < 0.0) {
    v30 = v30 + 0x1.6800000000000p+8;
  }
  if (v30 >= 0x1.6800000000000p+4) {
    if (v30 >= 0x1.0e00000000000p+6) {
      if (v30 >= 0x1.c200000000000p+6) {
        if (v30 >= 0x1.3b00000000000p+7) {
          if (v30 >= 0x1.9500000000000p+7) {
            if (v30 >= 0x1.ef00000000000p+7) {
              v31 = 2;
              v32 = 4;
              if (v30 < 0x1.5180000000000p+8) {
                v32 = 6;
              }
              if (v30 >= 0x1.2480000000000p+8) {
                v31 = v32;
              }
            }
            else {
              v31 = 3;
            }
          }
          else {
            v31 = 1;
          }
        }
        else {
          v31 = 9;
        }
      }
      else {
        v31 = 8;
      }
    }
    else {
      v31 = 12;
    }
  }
  else {
    v31 = 4;
  }
  v33 = &v15[v31];
  LANES128(v34).n128_u32[1] = 0;
  LANES128(v34).n128_u32[3] = 0;
  LANES128(v34).n128_f32[0] = (float)*v33;
  LANES128(v34).n128_f32[2] = (float)v33[256];
  v35 = vmulq_f32(v34, v34);
  LANES128(v35).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v35, v35, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
          .n64_u64[0];
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v35).n128_f32[0] > 0.0) {
    LANES128(v35).n128_u64[1] = LANES128(v35).n128_u64[0];
    v36 = vrsqrteq_f32(v35);
    v37 = vmulq_f32(v36, vrsqrtsq_f32(v36, vmulq_f32(v35, v36)));
    v34 = vbicq_s8(
        vmulq_f32(v34, vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v35, v37)))),
        vceqzq_f32(v35));
  }
  v4 = a1[1];
  LANES128(v38).n128_u64[0] = LANES64_OF(vsub_f32(v85, v81)).n64_u64[0];
  LANES128(v38).n128_u64[1] = COERCE_UNSIGNED_INT(v26 - v23);
  LANES64(v39).n64_u64[0] =
      LANES64_OF(
          vadd_f32(vmul_f32(*(float32x2_t*)&LANES128(v38).n128_i8[8],
                            *(float32x2_t*)&LANES128(v38).n128_i8[8]),
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]))))
          .n64_u64[0];
  LANES128(v40).n128_u64[0] = LANES64_OF(vpadd_f32(v39, v39)).n64_u64[0];
  LANES128(v40).n128_u64[1] = LANES128(v40).n128_u64[0];
  v41 = vrsqrteq_f32(v40);
  v42 = vmulq_f32(v41, vrsqrtsq_f32(v41, vmulq_f32(v40, v41)));
  a4 = COERCE_LONG_DOUBLE(vmulq_f32(
      v34,
      vbicq_s8(vmulq_f32(
                   v38, vmulq_f32(v42, vrsqrtsq_f32(v42, vmulq_f32(v40, v42)))),
               vceqzq_f32(v40))));
  *(float32x2_t*)&a4 = vadd_f32(
      COERCE_AS(float32x2_t,
                LANES128_OF(vextq_s8(*(int8x16_t*)&a4, *(int8x16_t*)&a4, 8u))
                    .n128_u64[0]),
      *(float32x2_t*)&a4);
  *(float32x2_t*)&a4 = vpadd_f32(*(float32x2_t*)&a4, *(float32x2_t*)&a4);
  v24 = *(float*)&a4 / (float)v18;
  if (v4 != 0) {
    goto LABEL_38;
  }
  return v24 > v7;
}

void game_map_786aa0(int* a1, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5)
{
  int* v5;
  _QWORD* v6;
  int* v7;
  int* v8;
  int v9;
  int* v10;
  __int64 v11;
  int* v12;
  int* v13;
  int* v14;
  int* v15;
  __int64 v16;
  int v17;
  int v18;
  float v19;
  int* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  __int64* v30;
  float v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  unsigned int v41;
  char* v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x2_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  int8x16_t v52;
  int v53;
  int v54;
  __int64 v55;
  int v56;
  int v57;
  int v58;
  int v59;
  unsigned int v60;
  __int64* v61;
  float v62;
  __int64 v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  __int64 v70;
  char* v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x2_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  int8x16_t v81;
  unsigned __int64 v82;
  int* v84;
  __int64 v85;
  int* v86;
  bool v87;
  int* v88;
  __int64 v89;
  int v90;
  __int64 v91;
  int v92;
  int v93;
  __int64 v94;
  int* v95;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  _DWORD* v106;

  if (a4 != 0) {
    v5 = a5;
    v6 = a3;
    v7 = a2;
    v8 = a1;
    if (a4 == 2) {
      if (game_map_786420_alt1(a3, *(a2 - 1), *a1)) {
        *v5 = *(v7 - 1);
        v9 = *v8;
      }
      else {
        *v5 = *v8;
        v9 = *(v7 - 1);
      }
      v5[1] = v9;
    }
    else {
      if (a4 == 1) {
        *a5 = *a1;
        return;
      }
      if ((__int64)a4 > 8) {
        v82 = a4 >> 1;
        v84 = &a1[a4 >> 1];
        v85 = 4 * (a4 >> 1);
        game_map_785b80_alt2(a1, v84, a3, v82, a5, v82);
        game_map_785b80_alt2(v84, v7, v6, a4 - v82, &v5[v82], a4 - v82);
        if (v85 != 0) {
          v86 = v84;
          while (v86 != a2) {
            v87 = game_map_786420_alt1(v6, *v86, *v8);
            if (v87) {
              v88 = v86;
            }
            else {
              v88 = v8;
            }
            if (v87) {
              v89 = 4;
            }
            else {
              v89 = 0;
            }
            v90 = *v88;
            v86 = (int*)((char*)v86 + v89);
            if (v87) {
              v91 = 0;
            }
            else {
              v91 = 4;
            }
            v8 = (int*)((char*)v8 + v91);
            *v5++ = v90;
            if (v8 == v84) {
              goto LABEL_113;
            }
          }
          while (v8 != v84) {
            v92 = *v8++;
            *v5++ = v92;
          }
        }
        else {
          v86 = v84;
        LABEL_113:
          while (v86 != a2) {
            v93 = *v86++;
            *v5++ = v93;
          }
        }
      }
      else if (a1 != a2) {
        v10 = a1 + 1;
        *a5 = *a1;
        if (a1 + 1 != a2) {
          v11 = 0;
          v12 = a5;
          v13 = a5;
          do {
            v14 = v13 + 1;
            if (!game_map_786420_alt1(v6, *v10, *v13)) {
              *v14 = *v10;
              v13 = v14;
              goto LABEL_12;
            }
            v95 = v14;
            v12[1] = *v12;
            v15 = v5;
            if (v12 == v5) {
              goto LABEL_92;
            }
            v94 = v11;
            while (1) {
              v16 = v6[1];
              if (v16 == 0) {
                v15 = v12;
                goto LABEL_91;
              }
              v17 = *(char*)(v16 + 584);
              v18 = *(char*)(v16 + 585);
              v19 = 0x0.0p+0f;
              v20 = v5;
              v106 = (int*)((char*)v5 + v11);
              v21 = *(int*)((char*)v5 + v11 - 4);
              v22 = *v6 + 60LL;
              v23 = v22 + 12LL * *v10;
              v24 = *(char*)(v23 + 1);
              v25 = *(char*)(v23 + 2);
              v26 = v24 - v17;
              if (v24 - v17 < 0) {
                v26 = v17 - v24;
              }
              v27 = v25 - v18;
              if (v25 - v18 < 0) {
                v27 = v18 - v25;
              }
              v28 = v27 + v26;
              if (v27 + v26 == 0) {
                v6 = a3;
                v35 = 0x0.0p+0f;
                v5 = v20;
              LABEL_52:
                v53 = *(char*)(v16 + 584);
                v54 = *(char*)(v16 + 585);
                v55 = v22 + 12LL * v21;
                v56 = *(char*)(v55 + 1);
                v57 = *(char*)(v55 + 2);
                v58 = v56 - v53;
                if (v56 - v53 < 0) {
                  v58 = v53 - v56;
                }
                v59 = v57 - v54;
                if (v57 - v54 < 0) {
                  v59 = v54 - v57;
                }
                v60 = v59 + v58;
                if (v59 + v58 != 0) {
                  v61 = GameData_212ce80[0];
                  v62 = (float)((float)(unsigned int)(v54 + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f;
                  v63 = *GameData_212ce80[0];
                  v64 = v62 + -0x1.4000000000000p+10f;
                  v103 = (float)((float)((float)(unsigned int)(v53 + 256) *
                                         0x1.4000000000000p+2f) +
                                 0x1.4000000000000p+1f) +
                         -0x1.4000000000000p+10f;
                  v105 = 0x0.0p+0f;
                  if (*GameData_212ce80[0] != 0) {
                    v65 = Height_7c4d10(
                        *(_QWORD*)(v63 + 61456),
                        (float)((float)((float)(unsigned int)(v53 + 256) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f,
                        v62 + -0x1.4000000000000p+10f);
                    v56 = *(char*)(v55 + 1);
                    v57 = *(char*)(v55 + 2);
                    v63 = *v61;
                  }
                  else {
                    v65 = 0x0.0p+0f;
                  }
                  v101 = v65;
                  v66 = (float)((float)(unsigned int)(v57 + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f;
                  v67 = v66 + -0x1.4000000000000p+10f;
                  v99 = (float)((float)((float)(unsigned int)(v56 + 256) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f;
                  if (v63 != 0) {
                    v105 = Height_7c4d10(
                        *(_QWORD*)(v63 + 61456),
                        (float)((float)((float)(unsigned int)(v56 + 256) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f,
                        v66 + -0x1.4000000000000p+10f);
                  }
                  if (*(float*)(v16 + 124) == *(float*)(v16 + 120)) {
                    v68 = (*(float (**)(__int64))(*(_QWORD*)(v16 + 112) +
                                                  16LL))(v16 + 112);
                  }
                  else {
                    v68 = *(float*)(v16 + 144);
                  }
                  v69 = fmodf(v68, 0x1.6800000000000p+8f);
                  if (v68 < 0x0.0p+0f) {
                    v69 = v69 + 0x1.6800000000000p+8f;
                  }
                  if (v69 >= 0x1.6800000000000p+4f) {
                    if (v69 >= 0x1.0e00000000000p+6f) {
                      if (v69 >= 0x1.c200000000000p+6f) {
                        if (v69 >= 0x1.3b00000000000p+7f) {
                          if (v69 >= 0x1.9500000000000p+7f) {
                            if (v69 >= 0x1.ef00000000000p+7f) {
                              v70 = 4;
                              if (v69 < 0x1.5180000000000p+8f) {
                                v70 = 6;
                              }
                              if (v69 < 0x1.2480000000000p+8f) {
                                v70 = 2;
                              }
                            }
                            else {
                              v70 = 3;
                            }
                          }
                          else {
                            v70 = 1;
                          }
                        }
                        else {
                          v70 = 9;
                        }
                      }
                      else {
                        v70 = 8;
                      }
                    }
                    else {
                      v70 = 12;
                    }
                  }
                  else {
                    v70 = 4;
                  }
                  LANES128(v72).n128_u32[1] = 0;
                  LANES128(v72).n128_u32[3] = 0;
                  v71 = (char*)GameData_212cf50 + v70;
                  LANES128(v72).n128_f32[0] = (float)*v71;
                  LANES128(v72).n128_f32[2] = (float)v71[256];
                  v73 = vmulq_f32(v72, v72);
                  LANES128(v73).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v73, v73, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v73).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v73).n128_u64[0] =
                      LANES64_OF(
                          vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v73).n128_u64[0])))
                          .n64_u64[0];
                  if (LANES128(v73).n128_f32[0] > 0x0.0p+0f) {
                    LANES128(v73).n128_u64[1] = LANES128(v73).n128_u64[0];
                    v74 = vrsqrteq_f32(v73);
                    v75 =
                        vmulq_f32(v74, vrsqrtsq_f32(v74, vmulq_f32(v73, v74)));
                    v72 = vbicq_s8(
                        vmulq_f32(
                            v72, vmulq_f32(v75, vrsqrtsq_f32(
                                                    v75, vmulq_f32(v73, v75)))),
                        vceqzq_f32(v73));
                  }
                  LANES128(v76).n128_u64[0] =
                      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t,
                                                    __PAIR64__(LODWORD(v105),
                                                               LODWORD(v99))),
                                          COERCE_AS(float32x2_t,
                                                    __PAIR64__(LODWORD(v101),
                                                               LODWORD(v103)))))
                          .n64_u64[0];
                  LANES128(v76).n128_u64[1] = COERCE_UNSIGNED_INT(v67 - v64);
                  LANES64(v77).n64_u64[0] =
                      LANES64_OF(
                          vadd_f32(
                              vmul_f32(
                                  *(float32x2_t*)&LANES128(v76).n128_i8[8],
                                  *(float32x2_t*)&LANES128(v76).n128_i8[8]),
                              vmul_f32(COERCE_AS(float32x2_t,
                                                 LANES128(v76).n128_u64[0]),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v76).n128_u64[0]))))
                          .n64_u64[0];
                  LANES128(v78).n128_u64[0] =
                      LANES64_OF(vpadd_f32(v77, v77)).n64_u64[0];
                  LANES128(v78).n128_u64[1] = LANES128(v78).n128_u64[0];
                  v79 = vrsqrteq_f32(v78);
                  v80 = vmulq_f32(v79, vrsqrtsq_f32(v79, vmulq_f32(v78, v79)));
                  v81 = vmulq_f32(
                      v72,
                      vbicq_s8(
                          vmulq_f32(
                              v76,
                              vmulq_f32(
                                  v80, vrsqrtsq_f32(v80, vmulq_f32(v78, v80)))),
                          vceqzq_f32(v78)));
                  LANES128(v81).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v81, v81, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v81).n128_u64[0])))
                          .n64_u64[0];
                  v19 = LANES64_OF(
                            vpadd_f32(COERCE_AS(float32x2_t,
                                                LANES128(v81).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v81).n128_u64[0])))
                            .n64_f32[0] /
                        (float)v60;
                }
                goto LABEL_86;
              }
              v29 = v21;
              v30 = GameData_212ce80[0];
              v31 = (float)((float)(unsigned int)(v18 + 256) *
                            0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f;
              v32 = *GameData_212ce80[0];
              v33 = v31 + -0x1.4000000000000p+10f;
              v102 = (float)((float)((float)(unsigned int)(v17 + 256) *
                                     0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f;
              v104 = 0x0.0p+0f;
              if (*GameData_212ce80[0] != 0) {
                v34 = Height_7c4d10(
                    *(_QWORD*)(v32 + 61456),
                    (float)((float)((float)(unsigned int)(v17 + 256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f,
                    v31 + -0x1.4000000000000p+10f);
                v24 = *(char*)(v23 + 1);
                v25 = *(char*)(v23 + 2);
                v32 = *v30;
              }
              else {
                v34 = 0x0.0p+0f;
              }
              v100 = v34;
              v36 = (float)((float)(unsigned int)(v25 + 256) *
                            0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f;
              v37 = v36 + -0x1.4000000000000p+10f;
              v98 = (float)((float)((float)(unsigned int)(v24 + 256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f;
              if (v32 != 0) {
                v104 = Height_7c4d10(
                    *(_QWORD*)(v32 + 61456),
                    (float)((float)((float)(unsigned int)(v24 + 256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f,
                    v36 + -0x1.4000000000000p+10f);
              }
              if (*(float*)(v16 + 124) == *(float*)(v16 + 120)) {
                v38 = (*(float (**)(__int64))(*(_QWORD*)(v16 + 112) + 16LL))(
                    v16 + 112);
              }
              else {
                v38 = *(float*)(v16 + 144);
              }
              v39 = fmodf(v38, 0x1.6800000000000p+8f);
              if (v38 < 0x0.0p+0f) {
                v39 = v39 + 0x1.6800000000000p+8f;
              }
              if (v39 >= 0x1.6800000000000p+4f) {
                v21 = v29;
                v41 = v28;
                if (v39 >= 0x1.0e00000000000p+6f) {
                  v5 = v20;
                  if (v39 >= 0x1.c200000000000p+6f) {
                    if (v39 >= 0x1.3b00000000000p+7f) {
                      if (v39 >= 0x1.9500000000000p+7f) {
                        if (v39 >= 0x1.ef00000000000p+7f) {
                          v40 = 4;
                          if (v39 < 0x1.5180000000000p+8f) {
                            v40 = 6;
                          }
                          if (v39 < 0x1.2480000000000p+8f) {
                            v40 = 2;
                          }
                        }
                        else {
                          v40 = 3;
                        }
                      }
                      else {
                        v40 = 1;
                      }
                    }
                    else {
                      v40 = 9;
                    }
                  }
                  else {
                    v40 = 8;
                  }
                }
                else {
                  v40 = 12;
                  v5 = v20;
                }
              }
              else {
                v40 = 4;
                v21 = v29;
                v41 = v28;
                v5 = v20;
              }
              LANES128(v43).n128_u32[1] = 0;
              LANES128(v43).n128_u32[3] = 0;
              v42 = (char*)GameData_212cf50 + v40;
              LANES128(v43).n128_f32[0] = (float)*v42;
              LANES128(v43).n128_f32[2] = (float)v42[256];
              v44 = vmulq_f32(v43, v43);
              LANES128(v44).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v44, v44, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v44).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
                      .n64_u64[0];
              if (LANES128(v44).n128_f32[0] > 0x0.0p+0f) {
                LANES128(v44).n128_u64[1] = LANES128(v44).n128_u64[0];
                v45 = vrsqrteq_f32(v44);
                v46 = vmulq_f32(v45, vrsqrtsq_f32(v45, vmulq_f32(v44, v45)));
                v43 = vbicq_s8(
                    vmulq_f32(
                        v43,
                        vmulq_f32(v46, vrsqrtsq_f32(v46, vmulq_f32(v44, v46)))),
                    vceqzq_f32(v44));
              }
              v6 = a3;
              v16 = a3[1];
              LANES128(v47).n128_u64[0] =
                  LANES64_OF(
                      vsub_f32(
                          COERCE_AS(float32x2_t,
                                    __PAIR64__(LODWORD(v104), LODWORD(v98))),
                          COERCE_AS(float32x2_t,
                                    __PAIR64__(LODWORD(v100), LODWORD(v102)))))
                      .n64_u64[0];
              LANES128(v47).n128_u64[1] = COERCE_UNSIGNED_INT(v37 - v33);
              LANES64(v48).n64_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          vmul_f32(*(float32x2_t*)&LANES128(v47).n128_i8[8],
                                   *(float32x2_t*)&LANES128(v47).n128_i8[8]),
                          vmul_f32(
                              COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v47).n128_u64[0]))))
                      .n64_u64[0];
              LANES128(v49).n128_u64[0] =
                  LANES64_OF(vpadd_f32(v48, v48)).n64_u64[0];
              LANES128(v49).n128_u64[1] = LANES128(v49).n128_u64[0];
              v50 = vrsqrteq_f32(v49);
              v51 = vmulq_f32(v50, vrsqrtsq_f32(v50, vmulq_f32(v49, v50)));
              v52 = vmulq_f32(
                  v43,
                  vbicq_s8(
                      vmulq_f32(v47,
                                vmulq_f32(v51, vrsqrtsq_f32(
                                                   v51, vmulq_f32(v49, v51)))),
                      vceqzq_f32(v49)));
              LANES128(v52).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v52, v52, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
                      .n64_u64[0];
              v35 = LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
                        .n64_f32[0] /
                    (float)v41;
              if (v16 != 0) {
                goto LABEL_52;
              }
            LABEL_86:
              if (v35 <= v19) {
                break;
              }
              --v12;
              v11 -= 4;
              *v106 = *(v106 - 1);
              if (v11 == 0) {
                v15 = v5;
                goto LABEL_91;
              }
            }
            v15 = (int*)((char*)v5 + v11);
          LABEL_91:
            v7 = a2;
            v11 = v94;
          LABEL_92:
            *v15 = *v10;
            v13 = v95;
          LABEL_12:
            ++v10;
            v11 += 4;
            v12 = v13;
          } while (v10 != v7);
        }
      }
    }
  }
}

__int64* game_map_78c100(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64*** v10;
  __int64** v11;
  char v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64* result;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char v22;

  GameRoutine_78d0e0();
  v2 = GameData_212cfc0[0];
  v3 = *GameData_212cfc0[0];
  v4 = GameData_212cff0[0];
  if ((GameRoutine_845bc0(*GameData_212cff0[0] + 12408,
                          *GameData_212cff0[0] + 8) &
       1) != 0) {
    v5 = *(_QWORD*)(*v4 + 24712);
    if (v5 != 0 && *(_QWORD*)(*v4 + 24728) != 0) {
      v7 = v5 - 1;
      v8 = (unsigned __int16)(*(_DWORD*)(*(_QWORD*)(*v2 + 48) + 8LL) |
                              ((unsigned __int16)*(
                                   _DWORD*)(*(_QWORD*)(*v2 + 48) + 12LL)
                               << 8));
      if ((v5 & (v5 - 1)) != 0) {
        v9 = (unsigned __int16)(*(_DWORD*)(*(_QWORD*)(*v2 + 48) + 8LL) |
                                ((unsigned __int16)*(
                                     _DWORD*)(*(_QWORD*)(*v2 + 48) + 12LL)
                                 << 8));
        if (v5 <= v8) {
          v9 = (unsigned int)v8 % (unsigned int)v5;
        }
      }
      else {
        v9 = ((_DWORD)v5 - 1) & (unsigned int)v8;
      }
      v10 = *(__int64****)(*(_QWORD*)(*v4 + 24704) + 8 * v9);
      if (v10 != nullptr) {
        v11 = *v10;
        if (v11 != nullptr) {
          if ((v5 & v7) == 0) {
            while (1) {
              v14 = v11[1];
              if (v14 == (__int64*)v8) {
                if (*((unsigned __int16*)v11 + 8) == (_DWORD)v8) {
                  goto LABEL_25;
                }
              }
              else if (((unsigned __int64)v14 & v7) != v9) {
                goto LABEL_26;
              }
              v11 = (__int64**)*v11;
              v12 = 0;
              if (v11 == nullptr) {
                goto LABEL_27;
              }
            }
          }
          while (1) {
            v13 = (unsigned __int64)v11[1];
            if (v13 == v8) {
              if (*((unsigned __int16*)v11 + 8) == (_DWORD)v8) {
              LABEL_25:
                v12 = 1;
                goto LABEL_27;
              }
            }
            else {
              if (v13 >= v5) {
                v13 %= v5;
              }
              if (v13 != v9) {
                break;
              }
            }
            v11 = (__int64**)*v11;
            v12 = 0;
            if (v11 == nullptr) {
              goto LABEL_27;
            }
          }
        }
      }
    }
  }
LABEL_26:
  v12 = 0;
LABEL_27:
  *(_BYTE*)(*(_QWORD*)(v3 + 48) + 240LL) = v12;
  result = *(__int64**)GameData_212d020[0];
  if (*(_QWORD*)GameData_212d020[0] != 0) {
    v16 = *(_DWORD*)(a1 + 276);
    if ((v16 & 0x80000000) != 0 ||
        (v17 = *v4, *(char*)(*v4 + 12LL * v16 + 12413) < 0) ||
        *(char*)(*v4 + 12LL * v16 + 12414) < 0) {
      v16 = *(_DWORD*)(a1 + 272);
      if ((v16 & 0x80000000) != 0) {
        v19 = (__int64*)GameData_212d208;
        goto LABEL_37;
      }
      v17 = *v4;
      v18 = 64;
    }
    else {
      v18 = 12408;
    }
    v19 = (__int64*)(v17 + v18 + 12LL * v16 + 4);
  LABEL_37:
    v21 = *(_QWORD*)(a1 + 8);
    v20 = *(_QWORD*)(a1 + 16);
    if (v21 > v20) {
    LABEL_40:
      v22 = 0;
    }
    else {
      while (*(_BYTE*)v20 != 2) {
        v20 -= 64LL;
        if (v21 > v20) {
          goto LABEL_40;
        }
      }
      v22 = (unsigned int)(*(_DWORD*)(v20 + 32) - 5) < 2;
    }
    return GameRoutine_f098f0(result, v19, v22);
  }
  return result;
}

__int64* game_map_78c700(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64*** v10;
  __int64** v11;
  char v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64* result;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char v22;

  if ((GameRoutine_78d0e0() & 1) != 0) {
    v2 = *(char*)(GameData_21cd0e8 + 12413);
    if ((v2 & 0x80000000) == 0) {
      v3 = *(char*)(GameData_21cd0e8 + 12414);
      if ((v3 & 0x80000000) == 0) {
        Cursor_730b20(GameData_21cd130, v2, v3);
        v4 = GameData_21cd130;
        if ((GameRoutine_845bc0(GameData_21cd0e8 + 12408,
                                GameData_21cd0e8 + 8) &
             1) != 0) {
          v5 = *(_QWORD*)(GameData_21cd0e8 + 24712);
          if (v5 != 0 && *(_QWORD*)(GameData_21cd0e8 + 24728) != 0) {
            v7 = v5 - 1;
            v8 = (unsigned __int16)(*(_DWORD*)(*(_QWORD*)(GameData_21cd130 +
                                                          48) +
                                               8LL) |
                                    ((unsigned __int16)*(
                                         _DWORD*)(*(_QWORD*)(GameData_21cd130 +
                                                             48) +
                                                  12LL)
                                     << 8));
            if ((v5 & (v5 - 1)) != 0) {
              v9 =
                  (unsigned __int16)(*(_DWORD*)(*(_QWORD*)(GameData_21cd130 +
                                                           48) +
                                                8LL) |
                                     ((unsigned __int16)*(
                                          _DWORD*)(*(_QWORD*)(GameData_21cd130 +
                                                              48) +
                                                   12LL)
                                      << 8));
              if (v5 <= v8) {
                v9 = (unsigned int)v8 % (unsigned int)v5;
              }
            }
            else {
              v9 = ((_DWORD)v5 - 1) & (unsigned int)v8;
            }
            v10 = *(__int64****)(*(_QWORD*)(GameData_21cd0e8 + 24704) + 8 * v9);
            if (v10 != nullptr) {
              v11 = *v10;
              if (v11 != nullptr) {
                if ((v5 & v7) == 0) {
                  while (1) {
                    v14 = v11[1];
                    if (v14 == (__int64*)v8) {
                      if (*((unsigned __int16*)v11 + 8) == (_DWORD)v8) {
                        goto LABEL_28;
                      }
                    }
                    else if (((unsigned __int64)v14 & v7) != v9) {
                      goto LABEL_29;
                    }
                    v11 = (__int64**)*v11;
                    v12 = 0;
                    if (v11 == nullptr) {
                      goto LABEL_30;
                    }
                  }
                }
                while (1) {
                  v13 = (unsigned __int64)v11[1];
                  if (v13 == v8) {
                    if (*((unsigned __int16*)v11 + 8) == (_DWORD)v8) {
                    LABEL_28:
                      v12 = 1;
                      goto LABEL_30;
                    }
                  }
                  else {
                    if (v13 >= v5) {
                      v13 %= v5;
                    }
                    if (v13 != v9) {
                      break;
                    }
                  }
                  v11 = (__int64**)*v11;
                  v12 = 0;
                  if (v11 == nullptr) {
                    goto LABEL_30;
                  }
                }
              }
            }
          }
        }
      LABEL_29:
        v12 = 0;
      LABEL_30:
        *(_BYTE*)(*(_QWORD*)(v4 + 48) + 240LL) = v12;
      }
    }
  }
  result = (__int64*)GameData_21cd120;
  if (GameData_21cd120 != 0) {
    v16 = *(_DWORD*)(a1 + 276);
    if ((v16 & 0x80000000) != 0 ||
        (v17 = GameData_21cd0e8,
         *(char*)(GameData_21cd0e8 + 12LL * v16 + 12413) < 0) ||
        *(char*)(GameData_21cd0e8 + 12LL * v16 + 12414) < 0) {
      v16 = *(_DWORD*)(a1 + 272);
      if ((v16 & 0x80000000) != 0) {
        v19 = (__int64*)&GameData_1b47d78;
        goto LABEL_41;
      }
      v17 = GameData_21cd0e8;
      v18 = 64;
    }
    else {
      v18 = 12408;
    }
    v19 = (__int64*)(v17 + v18 + 12LL * v16 + 4);
  LABEL_41:
    v21 = *(_QWORD*)(a1 + 8);
    v20 = *(_QWORD*)(a1 + 16);
    if (v21 > v20) {
    LABEL_44:
      v22 = 0;
    }
    else {
      while (*(_BYTE*)v20 != 2) {
        v20 -= 64LL;
        if (v21 > v20) {
          goto LABEL_44;
        }
      }
      v22 = (unsigned int)(*(_DWORD*)(v20 + 32) - 5) < 2;
    }
    return GameRoutine_f098f0((__int64*)GameData_21cd120, v19, v22);
  }
  return result;
}

__int64 game_map_790ba0(__int64 a1)
{
  int v1;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  _DWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  bool v17;
  char v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  char v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  int v33;
  char v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  int v41;
  char v42;
  __int64* v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  int v50;
  __int64 v51;
  int v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  int v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  int v62;
  __int64 v63;
  int v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  char* v68;
  int v69;
  __int64 v70;
  unsigned int v71;
  __int64 v72;
  __int16 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  unsigned int v79;
  __int64 v80;
  unsigned int v81;
  char v82;
  int v83;
  __int64 v84;
  unsigned int v85;
  __int64 v86;
  __int64* v87;
  __int64 v88;
  unsigned int v89;
  int v90;
  bool v91;
  __int16 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  int v96;
  __int64 v97;
  __int64 (***v98)(_QWORD);
  __int64 v99;
  __int64 v100;
  __int64 v101;
  int v102;
  __int64 v103;
  int v104;
  __int16 v105;
  __int64 v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  unsigned int v112;
  int v113;
  char v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  unsigned int v120;
  int v121;
  __int64 result;
  __int64 v123;
  __int16* v124;
  __int64 v125;
  int v126;
  int v127;
  __int64 v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  unsigned int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  unsigned int v146;
  __int64 v147;
  int v148;
  int v149;
  __int64 v150;
  int v151;
  unsigned int v152;
  __int64 v153;
  __int64 v154;
  __int64* v155;
  __int64 v156;
  _BYTE* v157;
  bool v158;
  unsigned __int8* v159;
  __int64 v160;
  int v161;
  int v162;
  int v163;
  __int64 v164;
  int v165;
  int v166;
  int v167;
  int v168;
  __int64 v169;
  int v170;
  int v171;
  __int64 v172;
  int v173;
  int v174;
  __int64 v175;
  int v176;
  __int64 v177;
  int v178;
  int v179;
  __int64 v180;
  int v181;
  int v182;
  __int64* v183;
  __int64 v184;
  int v185;
  __int64 v186;
  int v187;
  int v188;
  __int64 v189;
  int v190;
  int v191;
  __int64* v192;
  __int64 v193;
  int v194;
  __int64 v195;
  unsigned int v196;
  int v197;
  unsigned int v199;
  __int64 v200;
  __int64 v201;
  _DWORD* v202;
  __int64 v203;
  __int64 v204;
  _DWORD* v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  _DWORD* v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  int v214;
  __int64 v215;
  int v216;
  __int64 v217;
  int v218;
  __int64 v219;
  int v220;
  int v221;
  int v222;
  struct {
    __int64 (**v223)();
    __int64 v224;
    __int64 v225;
    __int64 v226;
  } v223_;
  struct {
    __int64 (**v227)();
    __int64 v228;
    __int64 v229;
    __int64 v230;
  } v227_;
  struct {
    __int64 (**v231)();
    __int64 v232;
    __int64 v233;
    __int64 v234;
  } v231_;
  struct {
    __int64* v235;
    __int64 v236;
    __int64 v237;
    __int64 v238;
  } v235_;
  int v239;
  _BYTE v240[4];

  v1 = *(_DWORD*)(a1 + 11276);
  v3 = game_map_MapRandom_instance__ptr[0];
  v4 = v1;
  if ((v1 & 1) != 0) {
    v5 = GameData_21d6208;
    v6 = 32 * (GameData_21d6210 - GameData_21d6208) - 1;
    if (GameData_21d6210 == GameData_21d6208) {
      v6 = 0;
    }
    v7 = GameData_21d6228 + GameData_21d6220;
    if (v6 == GameData_21d6228 + GameData_21d6220) {
      GameRoutine_7abca0(&GameData_21d6200);
      v5 = GameData_21d6208;
      v7 = GameData_21d6228 + GameData_21d6220;
    }
    v8 = (_DWORD*)(*(_QWORD*)(v5 + 8 * (v7 >> 8)) + 16LL * (unsigned __int8)v7);
    *v8 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3);
    v8[1] = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 4);
    v8[2] = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8);
    v8[3] = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 12);
    ++GameData_21d6228;
    v4 = *(_DWORD*)(a1 + 11276);
  }
  if ((v4 & 0x10000) != 0) {
    if (*(_BYTE*)(a1 + 34) == 2) {
      v9 = *(unsigned __int8*)(a1 + 32);
      if (v9 > 3) {
        v10 = *(_QWORD*)(a1 + 24) + 760LL * *(unsigned __int8*)(a1 + 32);
      }
      else {
        v10 = *(_QWORD*)(a1 + 24) + 760LL * GameData_1b01628[v9];
      }
      v18 = *(_BYTE*)(v10 + 32);
    }
    else {
      if ((BattleInfo_79d030(a1 + 16) & 1) == 0) {
        goto LABEL_27;
      }
      v11 = *(unsigned __int16*)(a1 + 60);
      if (*(_WORD*)(a1 + 60) != 0 ||
          ((int)(v12 = *(unsigned int*)(a1 + 56)) <= -1
               ? (v13 = game_g_empty_item_ptr)
               : (v13 = (__int64*)(*(_QWORD*)(a1 + 40) + 8 * v12 + 828)),
           (v11 = *(unsigned __int16*)v13) != 0)) {
        if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                  8LL * v11) +
                       73LL) &
             0xFE) == 2) {
          goto LABEL_25;
        }
      }
      v14 = *(_QWORD*)(a1 + 72);
      if (v14 != 0 && ((v15 = *(unsigned __int8*)(v14 + 250), v158 = v15 > 0x1F,
                        v16 = (1 << v15) & 0x80000600, !v158)
                           ? (v17 = v16 == 0)
                           : (v17 = true),
                       !v17)) {
      LABEL_25:
        v18 = *(_BYTE*)(a1 + 32);
      }
      else {
      LABEL_27:
        v18 = *(_BYTE*)(*(_QWORD*)(a1 + 24) +
                        760LL * *(unsigned __int8*)(a1 + 33) + 32);
      }
    }
    *(_BYTE*)(a1 + 33) = v18;
    if (*(_BYTE*)(a1 + 794) == 2) {
      v19 = *(unsigned __int8*)(a1 + 792);
      if (v19 > 3) {
        v20 = *(_QWORD*)(a1 + 784) + 760LL * *(unsigned __int8*)(a1 + 792);
      }
      else {
        v20 = *(_QWORD*)(a1 + 784) + 760LL * GameData_1b01628[v19];
      }
      v26 = *(_BYTE*)(v20 + 32);
    }
    else if ((BattleInfo_79d030(a1 + 776) & 1) != 0 &&
             (((v21 = *(unsigned __int16*)(a1 + 820),
                *(_WORD*)(a1 + 820) != 0) ||
               ((int)(v22 = *(unsigned int*)(a1 + 816)) <= -1
                    ? (v23 = game_g_empty_item_ptr)
                    : (v23 = (__int64*)(*(_QWORD*)(a1 + 800) + 8 * v22 + 828)),
                (v21 = *(unsigned __int16*)v23) != 0)) &&
                  (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8LL * v21) +
                             73LL) &
                   0xFE) == 2 ||
              (v24 = *(_QWORD*)(a1 + 832)) != 0 &&
                  (unsigned int)(v25 = *(unsigned __int8*)(v24 + 250)) <=
                      0x1F &&
                  ((1 << v25) & 0x80000600) != 0)) {
      v26 = *(_BYTE*)(a1 + 792);
    }
    else {
      v26 = *(_BYTE*)(*(_QWORD*)(a1 + 784) +
                      760LL * *(unsigned __int8*)(a1 + 793) + 32);
    }
    *(_BYTE*)(a1 + 793) = v26;
    if (*(_BYTE*)(a1 + 1554) == 2) {
      v27 = *(unsigned __int8*)(a1 + 1552);
      if (v27 > 3) {
        v28 = *(_QWORD*)(a1 + 1544) + 760LL * *(unsigned __int8*)(a1 + 1552);
      }
      else {
        v28 = *(_QWORD*)(a1 + 1544) + 760LL * GameData_1b01628[v27];
      }
      v34 = *(_BYTE*)(v28 + 32);
    }
    else if ((BattleInfo_79d030(a1 + 1536) & 1) != 0 &&
             (((v29 = *(unsigned __int16*)(a1 + 1580),
                *(_WORD*)(a1 + 1580) != 0) ||
               ((int)(v30 = *(unsigned int*)(a1 + 1576)) <= -1
                    ? (v31 = game_g_empty_item_ptr)
                    : (v31 = (__int64*)(*(_QWORD*)(a1 + 1560) + 8 * v30 + 828)),
                (v29 = *(unsigned __int16*)v31) != 0)) &&
                  (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8LL * v29) +
                             73LL) &
                   0xFE) == 2 ||
              (v32 = *(_QWORD*)(a1 + 1592)) != 0 &&
                  (unsigned int)(v33 = *(unsigned __int8*)(v32 + 250)) <=
                      0x1F &&
                  ((1 << v33) & 0x80000600) != 0)) {
      v34 = *(_BYTE*)(a1 + 1552);
    }
    else {
      v34 = *(_BYTE*)(*(_QWORD*)(a1 + 1544) +
                      760LL * *(unsigned __int8*)(a1 + 1553) + 32);
    }
    *(_BYTE*)(a1 + 1553) = v34;
    if (*(_BYTE*)(a1 + 2314) == 2) {
      v35 = *(unsigned __int8*)(a1 + 2312);
      if (v35 > 3) {
        v36 = *(_QWORD*)(a1 + 2304) + 760LL * *(unsigned __int8*)(a1 + 2312);
      }
      else {
        v36 = *(_QWORD*)(a1 + 2304) + 760LL * GameData_1b01628[v35];
      }
      v42 = *(_BYTE*)(v36 + 32);
    }
    else if ((BattleInfo_79d030(a1 + 2296) & 1) != 0 &&
             (((v37 = *(unsigned __int16*)(a1 + 2340),
                *(_WORD*)(a1 + 2340) != 0) ||
               ((int)(v38 = *(unsigned int*)(a1 + 2336)) <= -1
                    ? (v39 = game_g_empty_item_ptr)
                    : (v39 = (__int64*)(*(_QWORD*)(a1 + 2320) + 8 * v38 + 828)),
                (v37 = *(unsigned __int16*)v39) != 0)) &&
                  (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8LL * v37) +
                             73LL) &
                   0xFE) == 2 ||
              (v40 = *(_QWORD*)(a1 + 2352)) != 0 &&
                  (unsigned int)(v41 = *(unsigned __int8*)(v40 + 250)) <=
                      0x1F &&
                  ((1 << v41) & 0x80000600) != 0)) {
      v42 = *(_BYTE*)(a1 + 2312);
    }
    else {
      v42 = *(_BYTE*)(*(_QWORD*)(a1 + 2304) +
                      760LL * *(unsigned __int8*)(a1 + 2313) + 32);
    }
    *(_BYTE*)(a1 + 2313) = v42;
  }
  else if (*(_QWORD*)(a1 + 40) == *(_QWORD*)(a1 + 800)) {
    GameRoutine_7992e0(a1 + 776);
    *(_BYTE*)(a1 + 33) = *(_BYTE*)(a1 + 32);
  }
  else {
    *(_BYTE*)(a1 + 33) = *(_BYTE*)(a1 + 792);
    *(_BYTE*)(a1 + 793) = *(_BYTE*)(a1 + 32);
  }
  v43 = (__int64*)(a1 + 60);
  v44 = *(_QWORD*)(a1 + 40);
  v45 = (__int64*)(a1 + 60);
  if (*(_WORD*)(a1 + 60) == 0) {
    v46 = *(unsigned int*)(a1 + 56);
    if ((v46 & 0x80000000) != 0) {
      v45 = game_g_empty_item_ptr;
    }
    else {
      v45 = (__int64*)(v44 + 8 * v46 + 828);
    }
  }
  v47 = *v45;
  v48 = (__int64*)(a1 + 820);
  v49 = GameData_212ddb8[0];
  v235_.v237 = 0;
  v235_.v238 = 0;
  v235_.v235 = GameData_212ddb8[0] + 2;
  v235_.v236 = 0;
  if (v44 != 0) {
    v235_.v236 = v44;
    v235_.v237 = v47;
    v235_.v238 = *(_QWORD*)(v44 + 2208);
    *(_QWORD*)(v44 + 2208) = &v235_.v235;
    v50 = *(_DWORD*)(v44 + 416);
    if ((v50 & 0x10000000) == 0) {
      *(_DWORD*)(v44 + 416) = v50 | 0x10000000;
      game_6c51e0(v44);
      GameRoutine_6c6da0(v44);
      game_6c6ec0(v44);
      *(_DWORD*)(v44 + 416) &= ~0x10000000u;
    }
  }
  v51 = *(_QWORD*)(a1 + 800);
  v52 = *(unsigned __int16*)(a1 + 820);
  v53 = (__int64*)(a1 + 820);
  v235_.v235 = (__int64*)game_map_BattleEquipScope_vtable;
  if (v52 == 0) {
    v54 = *(unsigned int*)(a1 + 816);
    if ((v54 & 0x80000000) != 0) {
      v53 = game_g_empty_item_ptr;
    }
    else {
      v53 = (__int64*)(v51 + 8 * v54 + 828);
    }
  }
  v55 = *v53;
  v231_.v233 = 0;
  v231_.v234 = 0;
  v231_.v231 = (__int64 (**)(void))(v49 + 2);
  v231_.v232 = 0;
  if (v51 != 0) {
    v231_.v232 = v51;
    v231_.v233 = v55;
    v231_.v234 = *(_QWORD*)(v51 + 2208);
    *(_QWORD*)(v51 + 2208) = &v231_.v231;
    v56 = *(_DWORD*)(v51 + 416);
    if ((v56 & 0x10000000) == 0) {
      *(_DWORD*)(v51 + 416) = v56 | 0x10000000;
      game_6c51e0(v51);
      GameRoutine_6c6da0(v51);
      game_6c6ec0(v51);
      *(_DWORD*)(v51 + 416) &= ~0x10000000u;
    }
  }
  v57 = *(_QWORD*)(a1 + 1560);
  v58 = *(unsigned __int16*)(a1 + 1580);
  v59 = (__int64*)(a1 + 1580);
  v231_.v231 = game_map_BattleEquipScope_vtable;
  if (v58 == 0) {
    v60 = *(unsigned int*)(a1 + 1576);
    if ((v60 & 0x80000000) != 0) {
      v59 = game_g_empty_item_ptr;
    }
    else {
      v59 = (__int64*)(v57 + 8 * v60 + 828);
    }
  }
  v61 = *v59;
  v227_.v229 = 0;
  v227_.v230 = 0;
  v227_.v227 = (__int64 (**)(void))(v49 + 2);
  v227_.v228 = 0;
  if (v57 != 0) {
    v227_.v228 = v57;
    v227_.v229 = v61;
    v227_.v230 = *(_QWORD*)(v57 + 2208);
    *(_QWORD*)(v57 + 2208) = &v227_.v227;
    v62 = *(_DWORD*)(v57 + 416);
    if ((v62 & 0x10000000) == 0) {
      *(_DWORD*)(v57 + 416) = v62 | 0x10000000;
      game_6c51e0(v57);
      GameRoutine_6c6da0(v57);
      game_6c6ec0(v57);
      *(_DWORD*)(v57 + 416) &= ~0x10000000u;
    }
  }
  v63 = *(_QWORD*)(a1 + 2320);
  v64 = *(unsigned __int16*)(a1 + 2340);
  v227_.v227 = game_map_BattleEquipScope_vtable;
  v65 = (__int64*)(a1 + 2340);
  if (v64 == 0) {
    v66 = *(unsigned int*)(a1 + 2336);
    if ((v66 & 0x80000000) != 0) {
      v65 = game_g_empty_item_ptr;
    }
    else {
      v65 = (__int64*)(v63 + 8 * v66 + 828);
    }
  }
  v67 = *v65;
  v68 = (char*)(a1 + 11272);
  v223_.v224 = 0;
  v223_.v225 = 0;
  v223_.v226 = 0;
  v223_.v223 = (__int64 (**)(void))(v49 + 2);
  if (v63 != 0) {
    v223_.v224 = v63;
    v223_.v225 = v67;
    v223_.v226 = *(_QWORD*)(v63 + 2208);
    *(_QWORD*)(v63 + 2208) = &v223_.v223;
    v69 = *(_DWORD*)(v63 + 416);
    if ((v69 & 0x10000000) == 0) {
      *(_DWORD*)(v63 + 416) = v69 | 0x10000000;
      game_6c51e0(v63);
      GameRoutine_6c6da0(v63);
      game_6c6ec0(v63);
      *(_DWORD*)(v63 + 416) &= ~0x10000000u;
    }
  }
  v223_.v223 = game_map_BattleEquipScope_vtable;
  game_map_79d560(a1 + 16);
  game_map_79d560(a1 + 776);
  game_map_79d560(a1 + 1536);
  game_map_79d560(a1 + 2296);
  *(_DWORD*)(a1 + 11256) = 0;
  v240[0] = 4;
  LOBYTE(v239) = *(_BYTE*)(*(_QWORD*)(a1 + 11264) + 3073LL);
  BattleScenes_7a7840(a1 + 3056, 1, v240, &v239);
  v70 = *(_QWORD*)(a1 + 72);
  if (v70 != 0) {
    v71 = *(unsigned __int8*)(v70 + 104);
    if (v71 <= 3) {
      if (v71 == 2) {
        v77 = *(_QWORD*)(a1 + 11264);
        v240[0] = 0;
        LOBYTE(v239) = *(_BYTE*)(v77 + 33);
        *((_DWORD*)BattleScenes_7a7840(a1 + 3056, 5, v240, &v239) + 2) =
            *(_WORD*)(v70 + 16) & 0xFFF;
        v73 = 2;
      }
      else {
        if (v71 != 3) {
          goto LABEL_123;
        }
        v74 = *(_QWORD*)(a1 + 11264);
        v240[0] = 0;
        LOBYTE(v239) = *(_BYTE*)(v74 + 33);
        *((_DWORD*)BattleScenes_7a7840(a1 + 3056, 6, v240, &v239) + 2) =
            *(_WORD*)(v70 + 16) & 0xFFF;
        v73 = 4;
      }
    }
    else {
      switch (v71) {
      case 4u:
        v75 = *(_QWORD*)(a1 + 11264);
        v240[0] = 0;
        LOBYTE(v239) = *(_BYTE*)(v75 + 33);
        *((_DWORD*)BattleScenes_7a7840(a1 + 3056, 7, v240, &v239) + 2) =
            *(_WORD*)(v70 + 16) & 0xFFF;
        v73 = 1;
        break;
      case 5u:
        v76 = *(_QWORD*)(a1 + 11264);
        v240[0] = 0;
        LOBYTE(v239) = *(_BYTE*)(v76 + 33);
        *((_DWORD*)BattleScenes_7a7840(a1 + 3056, 8, v240, &v239) + 2) =
            *(_WORD*)(v70 + 16) & 0xFFF;
        v73 = 16;
        break;
      case 6u:
        v72 = *(_QWORD*)(a1 + 11264);
        v240[0] = 0;
        LOBYTE(v239) = *(_BYTE*)(v72 + 33);
        *((_DWORD*)BattleScenes_7a7840(a1 + 3056, 9, v240, &v239) + 2) =
            *(_WORD*)(v70 + 16) & 0xFFF;
        v73 = 8;
        break;
      default:
        goto LABEL_123;
      }
    }
    *(_WORD*)(a1 + 11288) |= v73;
  }
LABEL_123:
  v78 = *(_DWORD*)(a1 + 11276);
  if ((v78 & 1) != 0) {
    *(_WORD*)(a1 + 11288) |= 0x800u;
  }
  v79 = (unsigned __int8)*v68;
  if (*v68 == 0) {
    if ((v78 & 0x4000) != 0) {
      v82 = 8;
    }
    else if ((v78 & 0x10000) != 0) {
      v82 = 1;
    }
    else {
      v80 = *(_QWORD*)(a1 + 72);
      if (v80 != 0) {
        v81 = *(unsigned __int8*)(v80 + 104) - 4;
        if (v81 < 3) {
          *v68 = 0x50406u >> (8 * (v81 & 0x1F));
          goto LABEL_141;
        }
      }
      if ((BattleInfo_79d030(a1 + 16) & 1) != 0) {
        v82 = 2;
      }
      else {
        v83 = *(unsigned __int8*)(*(_QWORD*)(a1 + 784) + 11277LL) >> 7;
        if (*(_QWORD*)(a1 + 808) == 0) {
          v83 = 1;
        }
        if (v83 != 0) {
          v82 = 1;
        }
        else {
          v82 = 3;
        }
      }
    }
    v80 = *(_QWORD*)(a1 + 72);
    *v68 = v82;
    if (v80 == 0) {
      v85 = *(unsigned __int16*)v43;
      if (*(_WORD*)v43 == 0 &&
              ((int)(v86 = *(unsigned int*)(a1 + 56)) <= -1
                   ? (v87 = game_g_empty_item_ptr)
                   : (v87 = (__int64*)(*(_QWORD*)(a1 + 40) + 8 * v86 + 828)),
               (v85 = *(unsigned __int16*)v87) == 0) ||
          ((v88 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v85),
            v89 = *(unsigned __int8*)(v88 + 72),
            v90 = *(unsigned __int8*)(v88 + 73), v89 <= 7)
               ? (v91 = v90 == 7)
               : (v91 = false),
           !v91)) {
      LABEL_155:
        if ((BattleInfo_79d030(a1 + 16) & 1) != 0) {
          v92 = 32;
        }
        else if ((*(_BYTE*)(*(_QWORD*)(a1 + 784) + 11277LL) & 0x80) != 0 ||
                 *(_QWORD*)(a1 + 808) == 0) {
          v93 = *(_QWORD*)(a1 + 800);
          if (v93 == 0 || *(_QWORD*)(v93 + 392) == 0) {
            goto LABEL_165;
          }
          v92 = 1;
        }
        else {
          v92 = 128;
        }
      LABEL_164:
        *(_WORD*)(a1 + 11288) |= v92;
      LABEL_165:
        if ((*(_BYTE*)(a1 + 11278) & 1) != 0) {
          *(_WORD*)(a1 + 11288) |= 0x100u;
        }
        v79 = (unsigned __int8)*v68;
        goto LABEL_168;
      }
    LABEL_160:
      v92 = 64;
      goto LABEL_164;
    }
  LABEL_141:
    if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v80 + 104)) &
         1) == 0) {
      goto LABEL_155;
    }
    v84 = *(_QWORD*)(v80 + 576);
    if (v84 == 0 || *(unsigned __int8*)(v84 + 72) > 7u ||
        *(_BYTE*)(v84 + 73) != 7) {
      goto LABEL_155;
    }
    goto LABEL_160;
  }
LABEL_168:
  v94 = game_g_shared_system_skills_ptr;
  if (v79 <= 6 && ((1 << v79) & 0x74) != 0) {
    v239 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4CLL) +
                      game_g_shared_system_skills_ptr) &
           0xFFF;
    BattleSide_7a1a00(a1 + 776, &v239);
  }
  if ((MapUtil_753570(*(_DWORD*)(a1 + 96), *(_DWORD*)(a1 + 100)) & 1) == 0) {
    v239 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4CLL) + v94) & 0xFFF;
    BattleSide_7a1a00(a1 + 776, &v239);
  }
  v95 = (unsigned __int8)*v68;
  v96 = 388;
  if (v95 != 8 && v95 != 6) {
    if (v95 != 2) {
      goto LABEL_178;
    }
    v96 = 2048;
  }
  *(_DWORD*)(a1 + 11276) |= v96;
LABEL_178:
  v97 = *(_QWORD*)(a1 + 784);
  v98 = *(__int64 (****)(_QWORD))(a1 + 808);
  if ((*(_BYTE*)(v97 + 11277) & 0x80) == 0 && v98 != nullptr) {
    *(_DWORD*)(a1 + 11276) |= 0x180u;
  }
  v99 = *(_QWORD*)(a1 + 40);
  if (v99 == 0 || (v100 = *(_QWORD*)(v99 + 440)) == 0 ||
      *(unsigned __int8*)(v100 + 16) >= 4u) {
    *(_DWORD*)(a1 + 11276) |= 0x10Cu;
  }
  v101 = *(_QWORD*)(a1 + 72);
  if (v101 == 0) {
    goto LABEL_196;
  }
  if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v101 + 104)) & 1) ==
      0) {
    goto LABEL_195;
  }
  v102 = *(unsigned __int8*)(v101 + 106);
  if (*(_BYTE*)(v101 + 106) == 0 || v102 == 6) {
    v103 = *(_QWORD*)(v101 + 576);
    if (v103 == 0) {
      goto LABEL_195;
    }
  }
  else {
    if (v102 != 1) {
      goto LABEL_195;
    }
    v103 = *(_QWORD*)(v101 + 576);
    if (v103 == 0) {
      goto LABEL_196;
    }
  }
  if (*(unsigned __int8*)(v103 + 72) <= 7u && *(_BYTE*)(v103 + 73) == 1) {
  LABEL_196:
    v104 = *(_DWORD*)(a1 + 11276);
    if ((v104 & 0x20000) == 0) {
      goto LABEL_197;
    }
    goto LABEL_201;
  }
LABEL_195:
  if ((*(unsigned __int8*)(v101 + 283) | *(unsigned __int8*)(v101 + 282)) !=
      0) {
    goto LABEL_196;
  }
  *(_DWORD*)(a1 + 11276) |= 0x80u;
  v104 = *(_DWORD*)(a1 + 11276);
  if ((v104 & 0x20000) == 0) {
  LABEL_197:
    if ((v104 & 0x80000) == 0) {
      goto LABEL_198;
    }
  LABEL_202:
    v104 |= 0x800u;
    *(_DWORD*)(a1 + 11276) = v104;
    if ((v104 & 4) != 0) {
      goto LABEL_225;
    }
    goto LABEL_203;
  }
LABEL_201:
  v105 = *(_WORD*)(a1 + 11288);
  v104 |= 0x180u;
  *(_DWORD*)(a1 + 11276) = v104;
  *(_WORD*)(a1 + 11288) = v105 | 0x400;
  if ((v104 & 0x80000) != 0) {
    goto LABEL_202;
  }
LABEL_198:
  if ((v104 & 4) != 0) {
    goto LABEL_225;
  }
LABEL_203:
  v106 = *(_QWORD*)(a1 + 800);
  if (v106 != 0 && *(_QWORD*)(v106 + 392) != 0) {
    if ((v104 & 0x10000) == 0) {
      goto LABEL_206;
    }
  LABEL_224:
    v121 = 1;
    goto LABEL_226;
  }
  v121 = 0;
  if ((*(_BYTE*)(v97 + 11277) & 0x80) != 0 || v98 == nullptr) {
    goto LABEL_226;
  }
  if (((**v98)(v98) & 1) == 0) {
  LABEL_225:
    v121 = 0;
    goto LABEL_226;
  }
  if ((*(_DWORD*)(a1 + 11276) & 0x10000) != 0) {
    goto LABEL_224;
  }
LABEL_206:
  v107 = *(_DWORD*)(a1 + 88);
  v108 = *(_DWORD*)(a1 + 92);
  v109 = *(_DWORD*)(a1 + 104);
  v110 = *(_DWORD*)(a1 + 856);
  v111 = *(_DWORD*)(a1 + 860);
  if (v109 < 2) {
    LOBYTE(v113) = *(_DWORD*)(a1 + 92);
    v114 = *(_DWORD*)(a1 + 88);
    if ((*(_DWORD*)(a1 + 108) & 0x80000000) == 0) {
      goto LABEL_218;
    }
  LABEL_244:
    v113 = (char)v113;
    v131 = v110 - v114;
    *(_DWORD*)(a1 + 96) = v114;
    *(_DWORD*)(a1 + 100) = (char)v113;
    if (v131 < 0) {
      v131 = -v131;
    }
    v132 = v111 - v113;
    if (v132 < 0) {
      v132 = -v132;
    }
    *(_DWORD*)(a1 + 108) = v131 + v132;
    if ((*(_DWORD*)(a1 + 868) & 0x80000000) == 0) {
      goto LABEL_295;
    }
    goto LABEL_249;
  }
  v112 = 10000;
  LOBYTE(v113) = 0;
  v114 = 0;
  v115 = *(_DWORD*)(a1 + 92);
  do {
    v116 = v111 - v115;
    v117 = v110 - v107;
    v118 = *(_DWORD*)(a1 + 88);
    if (v111 - v115 < 0) {
      v116 = v115 - v111;
    }
    do {
      if (v117 >= 0) {
        v119 = v117;
      }
      else {
        v119 = -v117;
      }
      --v117;
      v120 = v119 + v116;
      if (v120 < v112) {
        LOBYTE(v113) = v115;
        v114 = v118;
        v112 = v120;
      }
      ++v118;
    } while (v118 < v109 + v107);
    ++v115;
  } while (v115 < v109 + v108);
  if ((*(_DWORD*)(a1 + 108) & 0x80000000) != 0) {
    goto LABEL_244;
  }
LABEL_218:
  if ((*(_DWORD*)(a1 + 868) & 0x80000000) != 0) {
  LABEL_249:
    v133 = *(_DWORD*)(a1 + 864);
    v134 = *(_DWORD*)(a1 + 848);
    v135 = *(_DWORD*)(a1 + 852);
    v136 = *(_DWORD*)(a1 + 96);
    v137 = *(_DWORD*)(a1 + 100);
    if ((unsigned int)(v133 * v133) < 2) {
      v148 = v136 - v134;
      if (v148 < 0) {
        v148 = -v148;
      }
      v149 = v137 - v135;
      if (v149 < 0) {
        v149 = -v149;
      }
      v141 = v149 + v148;
    }
    else if (v133 < 1) {
      v141 = 10000;
    }
    else {
      v138 = v133 + v135;
      v139 = v133 + v134;
      v140 = v136 - v134;
      v141 = 10000;
      do {
        v142 = v137 - v135;
        v143 = v140;
        v144 = *(_DWORD*)(a1 + 848);
        if (v137 - v135 < 0) {
          v142 = v135 - v137;
        }
        do {
          ++v144;
          if (v143 >= 0) {
            v145 = v143;
          }
          else {
            v145 = -v143;
          }
          --v143;
          v146 = v145 + v142;
          if (v146 < v141) {
            v141 = v146;
          }
        } while (v144 < v139);
        ++v135;
      } while (v135 < v138);
    }
    v150 = *(_QWORD*)(a1 + 800);
    v151 = v109 + v141 - 1;
    if (v150 != 0) {
      v152 = *(unsigned __int16*)v48;
      if (*(_WORD*)v48 != 0 || ((v153 = *(unsigned int*)(a1 + 816),
                                 v154 = v150 + 8 * v153 + 828, (int)v153 <= -1)
                                    ? (v155 = game_g_empty_item_ptr)
                                    : (v155 = (__int64*)v154),
                                (v152 = *(unsigned __int16*)v155) != 0)) {
        v156 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v152);
        v157 = *(_BYTE**)(v156 + 192);
        v158 = v157 == nullptr || *(unsigned __int8*)(v156 + 72) > 7u;
        if (v158 || v157[105] == 0) {
          v157 = nullptr;
        }
        else if (v157[104] == 2) {
          v157 = nullptr;
        }
        v159 = (unsigned __int8*)(v156 + 92);
        if (v157 != nullptr) {
          v159 = v157 + 278;
        }
        v152 = *v159;
      }
    }
    else {
      v152 = 0;
    }
    if (v151 >= (int)v152) {
      v151 = v152;
    }
    if (v152 >= v141) {
      v141 = v151;
    }
    *(_DWORD*)(a1 + 868) = v141;
  }
LABEL_295:
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 784) + 11277LL) & 0x80) != 0 ||
      *(_QWORD*)(a1 + 808) == 0) {
    v121 = EscapeMenuItem_752b40(v107, v108, v109, v109, *(_DWORD*)(a1 + 848),
                                 *(_DWORD*)(a1 + 852), *(_DWORD*)(a1 + 864),
                                 *(_DWORD*)(a1 + 864));
  }
  else {
    v160 = *(_QWORD*)(a1 + 48);
    v161 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 11276LL);
    if ((v161 & 0x8000) == 0 && v160 != 0) {
      v109 = (*(__int64 (**)(__int64))(*(_QWORD*)v160 + 72LL))(v160);
      v160 = *(_QWORD*)(a1 + 48);
      v161 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 11276LL);
    }
    v222 = v108;
    if ((v161 & 0x8000) != 0 || v160 == 0) {
      v221 = *(_DWORD*)(a1 + 104);
    }
    else {
      v221 = (*(__int64 (**)(__int64))(*(_QWORD*)v160 + 80LL))(v160);
    }
    v162 = *(_DWORD*)(a1 + 848);
    v163 = *(_DWORD*)(a1 + 852);
    v164 = *(_QWORD*)(a1 + 808);
    v165 = *(_DWORD*)(*(_QWORD*)(a1 + 784) + 11276LL);
    if ((v165 & 0x8000) != 0 || v164 == 0) {
      v166 = *(_DWORD*)(a1 + 864);
    }
    else {
      v166 = (*(__int64 (**)(__int64))(*(_QWORD*)v164 + 72LL))(v164);
      v164 = *(_QWORD*)(a1 + 808);
      v165 = *(_DWORD*)(*(_QWORD*)(a1 + 784) + 11276LL);
    }
    if ((v165 & 0x8000) != 0 || v164 == 0) {
      v167 = *(_DWORD*)(a1 + 864);
    }
    else {
      v167 = (*(__int64 (**)(__int64))(*(_QWORD*)v164 + 80LL))(v164);
    }
    v121 =
        EscapeMenuItem_752b40(v107, v222, v109, v221, v162, v163, v166, v167);
    v3 = game_map_MapRandom_instance__ptr[0];
  }
LABEL_226:
  *(_DWORD*)(a1 + 11280) = v121;
  game_map_BattleUtil_GetFactorSkill(a1 + 16);
  game_map_BattleUtil_GetFactorSkill(a1 + 776);
  game_map_BattleUtil_GetFactorSkill(a1 + 1536);
  game_map_BattleUtil_GetFactorSkill(a1 + 2296);
  BattleInfo_79ae60(a1 + 16);
  BattleInfo_79ae60(a1 + 776);
  BattleInfo_79ae60(a1 + 1536);
  BattleInfo_79ae60(a1 + 2296);
  BattleSide_7a0b00((_QWORD*)(a1 + 16));
  BattleSide_7a0b00((_QWORD*)(a1 + 776));
  BattleSide_7a0b00((_QWORD*)(a1 + 1536));
  BattleSide_7a0b00((_QWORD*)(a1 + 2296));
  game_map_BattleSide_CalculateTerrain(a1 + 16);
  game_map_BattleSide_CalculateTerrain(a1 + 776);
  game_map_BattleSide_CalculateTerrain(a1 + 1536);
  game_map_BattleSide_CalculateTerrain(a1 + 2296);
  game_map_BattleSide_GetHealPower(a1 + 16);
  game_map_BattleSide_GetHealPower(a1 + 776);
  game_map_BattleSide_GetHealPower(a1 + 1536);
  game_map_BattleSide_GetHealPower(a1 + 2296);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
  game_map_792360(a1);
  v240[0] = 4;
  LOBYTE(v239) = *(_BYTE*)(*(_QWORD*)(a1 + 11264) + 3073LL);
  result = (__int64)BattleScenes_7a7840(a1 + 3056, 24, v240, &v239);
  v123 = *(unsigned int*)(a1 + 11256);
  if ((_DWORD)v123 != 0) {
    v124 = (__int16*)(a1 + 3122);
    while (*((_BYTE*)v124 - 54) != 1) {
      --v123;
      v124 += 32;
      if (v123 == 0) {
        goto LABEL_391;
      }
    }
    v125 = *(_QWORD*)(a1 + 40);
    if (v125 != 0 && *(_QWORD*)(v125 + 392) != 0 ||
        (*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11277LL) & 0x80) == 0 &&
            (result = *(_QWORD*)(a1 + 48)) != 0 &&
            ((result = (**(__int64 (***)(__int64))result)(result)) & 1) != 0) {
      v126 = *(v124 - 21);
      v127 = *(_DWORD*)(a1 + 116);
      v128 = *(_QWORD*)(a1 + 80);
      if (v127 >= v126) {
        v127 = *(v124 - 21);
      }
      if (v126 >= 0) {
        v129 = v127;
      }
      else {
        v129 = 0;
      }
      *(_DWORD*)(a1 + 112) = v129;
      v130 = *(v124 - 18);
      if (v128 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v128 + 560LL))(v128);
      }
      else {
        if (*(_WORD*)v43 == 0) {
          v147 = *(unsigned int*)(a1 + 56);
          if ((v147 & 0x80000000) != 0) {
            v43 = game_g_empty_item_ptr;
          }
          else {
            v43 = (__int64*)(*(_QWORD*)(a1 + 40) + 8 * v147 + 828);
          }
        }
        result =
            (*((_DWORD*)v43 + 1) & 0xF) *
            (unsigned int)*(
                unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)v43) +
                                  87LL);
      }
      if ((int)result >= v130) {
        v168 = v130;
      }
      else {
        v168 = result;
      }
      if (v130 < 0) {
        v168 = 0;
      }
      *(_DWORD*)(a1 + 120) = v168;
    }
    v169 = *(_QWORD*)(a1 + 800);
    if (v169 != 0 && *(_QWORD*)(v169 + 392) != 0 ||
        (*(_BYTE*)(*(_QWORD*)(a1 + 784) + 11277LL) & 0x80) == 0 &&
            (result = *(_QWORD*)(a1 + 808)) != 0 &&
            ((result = (**(__int64 (***)(__int64))result)(result)) & 1) != 0) {
      v170 = *(v124 - 15);
      v171 = *(_DWORD*)(a1 + 876);
      v172 = *(_QWORD*)(a1 + 840);
      if (v171 >= v170) {
        v171 = *(v124 - 15);
      }
      if (v170 >= 0) {
        v173 = v171;
      }
      else {
        v173 = 0;
      }
      *(_DWORD*)(a1 + 872) = v173;
      v174 = *(v124 - 12);
      if (v172 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v172 + 560LL))(v172);
      }
      else {
        if (*(_WORD*)v48 == 0) {
          v175 = *(unsigned int*)(a1 + 816);
          if ((v175 & 0x80000000) != 0) {
            v48 = game_g_empty_item_ptr;
          }
          else {
            v48 = (__int64*)(*(_QWORD*)(a1 + 800) + 8 * v175 + 828);
          }
        }
        result =
            (*((_DWORD*)v48 + 1) & 0xF) *
            (unsigned int)*(
                unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)v48) +
                                  87LL);
      }
      if ((int)result >= v174) {
        v176 = v174;
      }
      else {
        v176 = result;
      }
      if (v174 < 0) {
        v176 = 0;
      }
      *(_DWORD*)(a1 + 880) = v176;
    }
    v177 = *(_QWORD*)(a1 + 1560);
    if (v177 != 0 && *(_QWORD*)(v177 + 392) != 0 ||
        (*(_BYTE*)(*(_QWORD*)(a1 + 1544) + 11277LL) & 0x80) == 0 &&
            (result = *(_QWORD*)(a1 + 1568)) != 0 &&
            ((result = (**(__int64 (***)(__int64))result)(result)) & 1) != 0) {
      v178 = *(v124 - 9);
      v179 = *(_DWORD*)(a1 + 1636);
      v180 = *(_QWORD*)(a1 + 1600);
      if (v179 >= v178) {
        v179 = *(v124 - 9);
      }
      if (v178 >= 0) {
        v181 = v179;
      }
      else {
        v181 = 0;
      }
      *(_DWORD*)(a1 + 1632) = v181;
      v182 = *(v124 - 6);
      if (v180 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v180 + 560LL))(v180);
      }
      else {
        v183 = (__int64*)(a1 + 1580);
        if (*(_WORD*)(a1 + 1580) == 0) {
          v184 = *(unsigned int*)(a1 + 1576);
          if ((v184 & 0x80000000) != 0) {
            v183 = game_g_empty_item_ptr;
          }
          else {
            v183 = (__int64*)(*(_QWORD*)(a1 + 1560) + 8 * v184 + 828);
          }
        }
        result =
            (*((_DWORD*)v183 + 1) & 0xF) *
            (unsigned int)*(
                unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)v183) +
                                  87LL);
      }
      if ((int)result >= v182) {
        v185 = v182;
      }
      else {
        v185 = result;
      }
      if (v182 < 0) {
        v185 = 0;
      }
      *(_DWORD*)(a1 + 1640) = v185;
    }
    v186 = *(_QWORD*)(a1 + 2320);
    if (v186 != 0 && *(_QWORD*)(v186 + 392) != 0 ||
        (*(_BYTE*)(*(_QWORD*)(a1 + 2304) + 11277LL) & 0x80) == 0 &&
            (result = *(_QWORD*)(a1 + 2328)) != 0 &&
            ((result = (**(__int64 (***)(__int64))result)(result)) & 1) != 0) {
      v187 = *(v124 - 3);
      v188 = *(_DWORD*)(a1 + 2396);
      v189 = *(_QWORD*)(a1 + 2360);
      if (v188 >= v187) {
        v188 = *(v124 - 3);
      }
      if (v187 >= 0) {
        v190 = v188;
      }
      else {
        v190 = 0;
      }
      *(_DWORD*)(a1 + 2392) = v190;
      v191 = *v124;
      if (v189 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v189 + 560LL))(v189);
      }
      else {
        v192 = (__int64*)(a1 + 2340);
        if (*(_WORD*)(a1 + 2340) == 0) {
          v193 = *(unsigned int*)(a1 + 2336);
          if ((v193 & 0x80000000) != 0) {
            v192 = game_g_empty_item_ptr;
          }
          else {
            v192 = (__int64*)(*(_QWORD*)(a1 + 2320) + 8 * v193 + 828);
          }
        }
        result =
            (*((_DWORD*)v192 + 1) & 0xF) *
            (unsigned int)*(
                unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)v192) +
                                  87LL);
      }
      if ((int)result >= v191) {
        v194 = v191;
      }
      else {
        v194 = result;
      }
      if (v191 < 0) {
        v194 = 0;
      }
      *(_DWORD*)(a1 + 2400) = v194;
    }
  }
LABEL_391:
  if ((*(_BYTE*)(a1 + 11277) & 0x20) == 0) {
    v195 = *(_QWORD*)(a1 + 72);
    if (v195 != 0) {
      v196 = *(unsigned __int8*)(v195 + 104);
      v158 = v196 > 6;
      v197 = (1 << v196) & 0x68;
      if (!v158 && v197 != 0) {
        v199 = *(_DWORD*)(a1 + 11256);
        if (v199 != 0) {
          v200 = v199 & 3;
          if (v199 < 4) {
            v201 = 0;
            if ((v199 & 3) == 0) {
              goto LABEL_416;
            }
            goto LABEL_412;
          }
          v202 = (_DWORD*)(a1 + 3268);
          v203 = 0;
          v204 = -(__int64)(v199 & 0xFFFFFFFC);
          do {
            if (*((unsigned __int8*)v202 - 198) <= 1u) {
              *(v202 - 48) |= 0x20000u;
            }
            if (*((unsigned __int8*)v202 - 134) <= 1u) {
              *(v202 - 32) |= 0x20000u;
            }
            if (*((unsigned __int8*)v202 - 70) <= 1u) {
              *(v202 - 16) |= 0x20000u;
            }
            if (*((unsigned __int8*)v202 - 6) <= 1u) {
              *v202 |= 0x20000u;
            }
            v202 += 64;
            v203 -= 4;
          } while (v204 != v203);
          v201 = -v203;
          if (v200 != 0) {
          LABEL_412:
            v205 = (_DWORD*)(a1 + (v201 << 6) + 3076);
            do {
              if (*((unsigned __int8*)v205 - 6) <= 1u) {
                *v205 |= 0x20000u;
              }
              v205 += 16;
              --v200;
            } while (v200 != 0);
          }
        }
      }
    }
  }
LABEL_416:
  if ((v1 & 1) != 0) {
    v207 = GameData_21d6220;
    v206 = GameData_21d6228;
    v208 = GameData_21d6210;
    v209 = 32 * (GameData_21d6210 - GameData_21d6208) - 1;
    if (GameData_21d6210 == GameData_21d6208) {
      v209 = 0;
    }
    v210 = (_DWORD*)(*(_QWORD*)(GameData_21d6208 +
                                8 * ((unsigned __int64)(GameData_21d6228 - 1 +
                                                        GameData_21d6220) >>
                                     8)) +
                     16LL * (unsigned __int8)(GameData_21d6228 - 1 +
                                              GameData_21d6220));
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3) = *v210;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 4) = v210[1];
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8) = v210[2];
    LODWORD(v210) = v210[3];
    GameData_21d6228 = v206 - 1;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 12) = (_DWORD)v210;
    if ((unsigned __int64)(v209 - (v206 + v207) + 1) >= 0x200) {
      v211 = *(_QWORD*)(v208 - 8);
      if (v211 != 0) {
        v212 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v212 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v212, v211);
        v208 = GameData_21d6210;
      }
      GameData_21d6210 = v208 - 8;
    }
  }
  v213 = v223_.v224;
  v223_.v223 = (__int64 (**)(void))(v49 + 2);
  if (v223_.v224 != 0 &&
      *(__int64 (****)())(v223_.v224 + 2208) == &v223_.v223) {
    *(_QWORD*)(v223_.v224 + 2208) = v223_.v226;
    v214 = *(_DWORD*)(v213 + 416);
    if ((v214 & 0x10000000) == 0) {
      *(_DWORD*)(v213 + 416) = v214 | 0x10000000;
      game_6c51e0(v213);
      GameRoutine_6c6da0(v213);
      result = game_6c6ec0(v213);
      *(_DWORD*)(v213 + 416) &= ~0x10000000u;
    }
  }
  v215 = v227_.v228;
  v227_.v227 = (__int64 (**)(void))(v49 + 2);
  if (v227_.v228 != 0 &&
      *(__int64 (****)())(v227_.v228 + 2208) == &v227_.v227) {
    *(_QWORD*)(v227_.v228 + 2208) = v227_.v230;
    v216 = *(_DWORD*)(v215 + 416);
    if ((v216 & 0x10000000) == 0) {
      *(_DWORD*)(v215 + 416) = v216 | 0x10000000;
      game_6c51e0(v215);
      GameRoutine_6c6da0(v215);
      result = game_6c6ec0(v215);
      *(_DWORD*)(v215 + 416) &= ~0x10000000u;
    }
  }
  v217 = v231_.v232;
  v231_.v231 = (__int64 (**)(void))(v49 + 2);
  if (v231_.v232 != 0 &&
      *(__int64 (****)())(v231_.v232 + 2208) == &v231_.v231) {
    *(_QWORD*)(v231_.v232 + 2208) = v231_.v234;
    v218 = *(_DWORD*)(v217 + 416);
    if ((v218 & 0x10000000) == 0) {
      *(_DWORD*)(v217 + 416) = v218 | 0x10000000;
      game_6c51e0(v217);
      GameRoutine_6c6da0(v217);
      result = game_6c6ec0(v217);
      *(_DWORD*)(v217 + 416) &= ~0x10000000u;
    }
  }
  v219 = v235_.v236;
  v235_.v235 = v49 + 2;
  if (v235_.v236 != 0 && *(__int64***)(v235_.v236 + 2208) == &v235_.v235) {
    *(_QWORD*)(v235_.v236 + 2208) = v235_.v238;
    v220 = *(_DWORD*)(v219 + 416);
    if ((v220 & 0x10000000) == 0) {
      *(_DWORD*)(v219 + 416) = v220 | 0x10000000;
      game_6c51e0(v219);
      GameRoutine_6c6da0(v219);
      result = game_6c6ec0(v219);
      *(_DWORD*)(v219 + 416) &= ~0x10000000u;
    }
  }
  return result;
}

__int64 game_map_792360(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  int v3;
  _QWORD* v4;
  int* v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v18;
  __int64 v19;
  char v20;
  __int64 v21;
  char v22;
  _DWORD* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
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
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  char v69;
  int v70;
  __int64 v71;
  _QWORD* v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  _QWORD* v81;
  __int16 v82;
  __int64 v83;
  int v84;
  _QWORD* v85;
  int v86;
  __int64 v87;
  __int64 v88;
  unsigned int* v89;
  unsigned int* v90;
  __int64 v91;
  unsigned int v92;
  __int64 v93;
  unsigned int v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned int v98;
  __int64 v99;
  __int64 v100;
  __int64* v101;
  __int64* v102;
  unsigned int v103;
  int v104;
  bool v105;
  int v106;
  unsigned int v107;
  int v108;
  _QWORD* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned int v113;
  __int64 v114;
  _DWORD* v115;
  __int64 v116;
  int v117;
  int v118;
  unsigned int v119;
  __int64 v120;
  int v121;
  __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  unsigned int v126;
  bool v127;
  int v128;
  int v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
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
  int v162;
  int v163;
  __int64 v164;
  __int64 v165;
  __int64 (***v166)(_QWORD);
  int v167;
  int v168;
  int v169;
  int v170;
  __int64 v171;
  int v172;
  int v173;
  __int64* v174;
  int v175;
  unsigned int v176;
  unsigned int v177;
  int v178;
  unsigned int v179;
  int v180;
  signed int v181;
  __int64* v182;
  int v183;
  unsigned int v184;
  unsigned int v185;
  int v186;
  unsigned int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  unsigned __int64 v192;
  __int64 v193;
  __int64 v194;
  unsigned int v195;
  __int64 v196;
  int v197;
  char v198;
  unsigned __int8 explicit;
  __int64 v200;
  float* v201;
  __int64 v202;
  int v203;
  int v204;
  __int64 v205;
  _QWORD* v206;
  int v207;
  int v208;
  __int64 v209;
  __int64 v210;
  char v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  int v215;
  int v216;
  int v217;
  unsigned int v218;
  unsigned int v219;
  __int64 v220;
  __int64 v221;
  __int64* v222;
  __int64* v223;
  int v225;
  int v226;
  char v227;
  __int64 v228;
  char v229;
  _BYTE* v230;
  _BYTE* v231;
  __int64 v232;
  int v233;
  __int64 v234;
  __int64 v235;
  __int64 (***v236)(_QWORD);
  __int16* v237;
  int v238;
  int v239;
  __int64 v240;
  __int64 (***v241)(_QWORD);
  int v242;
  int v243;
  unsigned __int8* v244;
  int v245;
  __int64* v246;
  __int64 v247;
  int v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  _DWORD* v252;
  __int16 v253;
  __int64 (***v254)(_QWORD);
  __int64 v255;
  __int64 (***v256)(_QWORD);
  _BOOL4 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  _BYTE* v262;
  char v263;
  unsigned int v264;
  __int64* v265;
  int v266;
  unsigned int v267;
  unsigned int v268;
  int v269;
  unsigned int v270;
  __int64 v271;
  _QWORD* v272;
  __int64 v273;
  int v274;
  unsigned int v275;
  int v276;
  _WORD* v277;
  int v278;
  __int64 v279;
  __int64* v280;
  __int64 v281;
  int v282;
  __int64 v283;
  __int64* v284;
  __int64 v285;
  __int64 v286;
  unsigned int v287;
  int v289;
  unsigned int v290;
  unsigned int v291;
  __int64 v292;
  __int64 v293;
  __int64* v294;
  __int64* v295;
  __int64 v296;
  unsigned int v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  __int64* v301;
  __int64* v302;
  unsigned int v303;
  int v304;
  int v306;
  int v307;
  int v308;
  unsigned int v309;
  __int64 v310;
  _DWORD* v311;
  int v312;
  bool v313;
  __int64 v314;
  _BYTE* v315;
  __int64 v316;
  __int64 v317;
  int v318;
  __int64* v319;
  int v320;
  unsigned int v321;
  unsigned int v322;
  int v323;
  unsigned int v324;
  int v325;
  bool v326;
  int v327;
  int v328;
  __int64 v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  __int64 v333;
  __int64 v334;
  __int64 v335;
  __int64 v336;
  __int64 v337;
  __int64 v338;
  __int64 v339;
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
  __int64 v350;
  __int64 v351;
  __int64 v352;
  __int64 v353;
  __int64 v354;
  __int64 v355;
  __int64 v356;
  __int64 v357;
  __int64 v358;
  __int64 v359;
  unsigned int* v360;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  __int64 v366;
  __int64 v367;
  __int64 v368;
  __int64 v369;
  __int64 v370;
  __int64 v371;
  __int64 v372;
  __int64 v373;
  __int64 v374;
  __int64 v375;
  __int64 v376;
  __int64 v377;
  __int64 v378;
  __int64 v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  __int64 v383;
  __int64 v384;
  __int64 v385;
  __int64 v386;
  __int64 v387;
  __int64 v388;
  __int64 v389;
  __int64 v390;
  __int64 v391;
  __int64 v392;
  __int64 v393;
  __int64 v394;
  _DWORD* v395;
  int v396;
  char v397;
  int v398;
  unsigned int* v399;
  __int64 v400;
  __int64 v401;
  __int64 (***v402)(_QWORD);
  int v403;
  __int64 v404;
  __int64 v405;
  unsigned __int64 v406;
  unsigned __int8* v407;
  unsigned __int8 v408;
  __int64 v409;
  __int64 v410;
  __int64 v411;
  __int64 v412;
  __int64 v413;
  __int64 v414;
  __int64 v415;
  __int64 v416;
  __int64 v417;
  __int64 v418;
  __int64 v419;
  __int64 v420;
  __int64 v421;
  __int64 v422;
  __int64 v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  __int64 v428;
  __int64 v429;
  __int64 v430;
  __int64 v431;
  __int64 v432;
  __int64 v433;
  __int64 v434;
  __int64 v435;
  __int64 v436;
  __int64 v437;
  __int64 v438;
  __int64 v439;
  __int64 v440;
  __int64 v441;
  __int64 v442;
  _QWORD* v443;
  __int64 v444;
  _QWORD* v445;
  __int64 v446;
  _QWORD* v447;
  __int64 v448;
  _QWORD* v449;
  _QWORD* v450;
  __int64 v451;
  unsigned __int16* v452;
  __int64 v453;
  unsigned int v454;
  __int64 v455;
  __int64* v456;
  unsigned int v457;
  int v458;
  __int64 v460;
  _DWORD* v461;
  __int64 v462;
  __int64 v463;
  int v464;
  int v465;
  int v466;
  unsigned int v467;
  __int64 v468;
  __int64 v469;
  _QWORD* v470;
  unsigned __int64 v471;
  __int64 v472;
  __int64 v473;
  char v474;
  int v475;
  __int64 v476;
  _QWORD* v477;
  __int64 v478;
  __int64 v479;
  unsigned int v480;
  __int64 v481;
  __int64* v482;
  __int64 v483;
  unsigned int v484;
  int v485;
  _DWORD* v487;
  __int64 v488;
  __int64 v489;
  int v490;
  int v491;
  int v492;
  unsigned int v493;
  _QWORD* v494;
  __int64 v495;
  __int64 v496;
  unsigned int v497;
  __int64 v498;
  __int64* v499;
  _DWORD* v500;
  __int64 v501;
  __int64 v502;
  int v503;
  int v504;
  int v505;
  unsigned int v506;
  _QWORD* v507;
  __int64 v508;
  __int64 v509;
  unsigned int v510;
  __int64 v511;
  __int64* v512;
  _DWORD* v513;
  __int64 v514;
  __int64 v515;
  int v516;
  int v517;
  int v518;
  unsigned int v519;
  unsigned int v520;
  __int64 v521;
  char* v522;
  __int64 v523;
  _QWORD* v524;
  char* v525;
  unsigned __int8 v526;
  __int16* v527;
  int v528;
  int v529;
  int v530;
  __int64 v531;
  int v532;
  char v533;
  __int64 v534;
  char v535;
  unsigned int* v536;
  __int64 v537;
  int v538;
  int v539;
  int v540;
  int v541;
  _WORD* v542;
  __int64 v543;
  int v544;
  unsigned int v545[40];
  unsigned int v546[40];
  int v547;
  __int16 v548;
  struct {
    __int64 v549;
    unsigned __int64 v550;
    __int64 v551;
  } v549_;
  struct {
    _QWORD v552[2];
    char v553;
    char gap321_[7];
    _QWORD* v554;
    _QWORD* v555;
    char gap344_[32];
    _BYTE* v556;
  } v552_;

  v530 = COERCE_AS(__typeof__(v530),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v1 = *(_DWORD*)(a1 + 11276);
  if ((v1 & 0x8002) != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  }
  if ((v1 & 0x2000) != 0 || (v1 & 0x4000) != 0) {
    v9 = *(_DWORD*)(a1 + 11256);
    v10 = __OFSUB__(v9, 1);
    v11 = (unsigned int)(v9 - 1);
    if ((int)v11 < 0 != v10 || *(_BYTE*)(a1 + (v11 << 6) + 3068) != 23) {
      LOBYTE(v552_.v552[0]) = 4;
      LOBYTE(v545[0]) = *(_BYTE*)(*(_QWORD*)(a1 + 11264) + 3073LL);
      BattleScenes_7a7840(a1 + 3056, 23, v552_.v552, v545),
          v530 = COERCE_AS(__typeof__(v530),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    v12 = *(_QWORD*)(a1 + 11264);
    LOBYTE(v552_.v552[0]) = *(_BYTE*)(a1 + 32);
    LOBYTE(v545[0]) = *(_BYTE*)(v12 + 760LL * LOBYTE(v552_.v552[0]) + 33);
    v13 = BattleScenes_7a7840(a1 + 3056, 2, v552_.v552, v545),
    v530 = COERCE_AS(__typeof__(v530),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v14 = *(_QWORD*)(a1 + 72);
    if (v14 != 0) {
      LODWORD(v14) = *(_WORD*)(v14 + 16) & 0xFFF;
    }
    v13[2] = v14;
    v15 = *(_DWORD*)(a1 + 11256);
    v10 = __OFSUB__(v15, 1);
    v16 = (unsigned int)(v15 - 1);
    if ((int)v16 < 0 != v10 || *(_BYTE*)(a1 + (v16 << 6) + 3068) != 23) {
      LOBYTE(v552_.v552[0]) = 4;
      LOBYTE(v545[0]) = *(_BYTE*)(*(_QWORD*)(a1 + 11264) + 3073LL);
      BattleScenes_7a7840(a1 + 3056, 23, v552_.v552, v545),
          v530 = COERCE_AS(__typeof__(v530),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  }
  if ((v1 & 0x1000) != 0) {
    GameRoutine_7a3440_alt1((_QWORD*)(a1 + 16)),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameRoutine_7a3440_alt1((_QWORD*)(a1 + 776)),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameRoutine_7a3440_alt1((_QWORD*)(a1 + 1536)),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameRoutine_7a3440_alt1((_QWORD*)(a1 + 2296)),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v18 = *(_DWORD*)(a1 + 11256);
    v10 = __OFSUB__(v18, 1);
    v19 = (unsigned int)(v18 - 1);
    if ((int)v19 < 0 != v10 || *(_BYTE*)(a1 + (v19 << 6) + 3068) != 23) {
      LOBYTE(v552_.v552[0]) = 4;
      LOBYTE(v545[0]) = *(_BYTE*)(*(_QWORD*)(a1 + 11264) + 3073LL);
      BattleScenes_7a7840(a1 + 3056, 23, v552_.v552, v545),
          v530 = COERCE_AS(__typeof__(v530),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    *(_DWORD*)(a1 + 896) = *(_DWORD*)(a1 + 872);
    v20 = BattleInfo_79d030(a1 + 16),
    v530 = COERCE_AS(__typeof__(v530),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v21 = *(_QWORD*)(a1 + 11264);
    LOBYTE(v552_.v552[0]) = *(_BYTE*)(a1 + 32);
    LOBYTE(v545[0]) = *(_BYTE*)(v21 + 760LL * LOBYTE(v552_.v552[0]) + 33);
    if ((v20 & 1) != 0) {
      v22 = 4;
    }
    else {
      v22 = 3;
    }
    v23 = BattleScenes_7a7840(a1 + 3056, v22, v552_.v552, v545),
    v530 = COERCE_AS(__typeof__(v530),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v24 = *(_QWORD*)(a1 + 72);
    if (v24 != 0) {
      LODWORD(v24) = *(_WORD*)(v24 + 16) & 0xFFF;
    }
    v23[2] = v24;
    *(_DWORD*)(GameHr_7a76a0((__int64)v23, a1 + 16, a1 + 776) +
               12) = 130,
               v530 =
                   COERCE_AS(__typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v25 = *(_QWORD*)(a1 + 11264);
    LOBYTE(v552_.v552[0]) = *(_BYTE*)(a1 + 792);
    LOBYTE(v545[0]) = *(_BYTE*)(v25 + 760LL * LOBYTE(v552_.v552[0]) + 33);
    BattleScenes_7a7840(a1 + 3056, 22, v552_.v552, v545),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v26 = *(_DWORD*)(a1 + 11256);
    v10 = __OFSUB__(v26, 1);
    v27 = (unsigned int)(v26 - 1);
    if ((int)v27 < 0 != v10 || *(_BYTE*)(a1 + (v27 << 6) + 3068) != 23) {
      LOBYTE(v552_.v552[0]) = 4;
      LOBYTE(v545[0]) = *(_BYTE*)(*(_QWORD*)(a1 + 11264) + 3073LL);
      BattleScenes_7a7840(a1 + 3056, 23, v552_.v552, v545),
          v530 = COERCE_AS(__typeof__(v530),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    v29 = *(_QWORD*)(a1 + 152);
    v28 = *(_QWORD*)(a1 + 160);
    v30 = v28 - v29;
    v105 = v28 == v29;
    v32 = *(_QWORD*)(a1 + 176);
    v31 = *(_QWORD*)(a1 + 184);
    v33 = 2 * v30 - 1;
    if (v105) {
      v33 = 0;
    }
    *(_QWORD*)(a1 + 184) = v31 - 1;
    if ((unsigned __int64)(v33 - (v31 + v32) + 1) >= 0x20) {
      v34 = *(_QWORD*)(v28 - 8);
      if (v34 != 0) {
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v34),
            v530 = COERCE_AS(__typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v28 = *(_QWORD*)(a1 + 160);
      }
      *(_QWORD*)(a1 + 160) = v28 - 8;
    }
    v36 = *(_QWORD*)(a1 + 912);
    v37 = *(_QWORD*)(a1 + 920);
    v38 = *(_QWORD*)(a1 + 936);
    v39 = v37 - v36;
    v105 = v37 == v36;
    v40 = *(_QWORD*)(a1 + 944);
    v41 = 2 * v39 - 1;
    if (v105) {
      v41 = 0;
    }
    *(_QWORD*)(a1 + 944) = v40 - 1;
    if ((unsigned __int64)(v41 - (v40 + v38) + 1) >= 0x20) {
      v42 = *(_QWORD*)(v37 - 8);
      if (v42 != 0) {
        v43 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v43 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v42),
            v530 = COERCE_AS(__typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v37 = *(_QWORD*)(a1 + 920);
      }
      *(_QWORD*)(a1 + 920) = v37 - 8;
    }
    v44 = *(_QWORD*)(a1 + 1672);
    v45 = *(_QWORD*)(a1 + 1680);
    v46 = *(_QWORD*)(a1 + 1696);
    v47 = v45 - v44;
    v105 = v45 == v44;
    v48 = *(_QWORD*)(a1 + 1704);
    v49 = 2 * v47 - 1;
    if (v105) {
      v49 = 0;
    }
    *(_QWORD*)(a1 + 1704) = v48 - 1;
    if ((unsigned __int64)(v49 - (v48 + v46) + 1) >= 0x20) {
      v50 = *(_QWORD*)(v45 - 8);
      if (v50 != 0) {
        v51 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v50),
            v530 = COERCE_AS(__typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v45 = *(_QWORD*)(a1 + 1680);
      }
      *(_QWORD*)(a1 + 1680) = v45 - 8;
    }
    v52 = *(_QWORD*)(a1 + 2432);
    v53 = *(_QWORD*)(a1 + 2440);
    v54 = *(_QWORD*)(a1 + 2456);
    v55 = v53 - v52;
    v105 = v53 == v52;
    v56 = *(_QWORD*)(a1 + 2464);
    v57 = 2 * v55 - 1;
    if (v105) {
      v57 = 0;
    }
    *(_QWORD*)(a1 + 2464) = v56 - 1;
    if ((unsigned __int64)(v57 - (v56 + v54) + 1) >= 0x20) {
      v58 = *(_QWORD*)(v53 - 8);
      if (v58 != 0) {
        v59 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v59 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v58),
            v530 = COERCE_AS(__typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v53 = *(_QWORD*)(a1 + 2440);
      }
      *(_QWORD*)(a1 + 2440) = v53 - 8;
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  }
  *(_DWORD*)(a1 + 11276) = v1 | 0x8000000;
  v545[0] = 8;
  game_map_795820_alt2((unsigned __int8*)a1, (__int64)v545),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = *(_DWORD*)(a1 + 11276);
  v4 = (_QWORD*)(a1 + 16);
  v5 = (int*)game_g_shared_system_skills_ptr;
  v545[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x78LL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
  if ((BattleSide_7a16a0_alt1(a1 + 776, v545) & 1) == 0 &&
      ((v545[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x54LL) + (_QWORD)v5) & 0xFFF,
        (BattleSide_7a16a0_alt1(a1 + 776, v545) & 1) != 0) ||
       (v545[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x78LL) + (_QWORD)v5) & 0xFFF,
        (BattleSide_7a16a0_alt1(a1 + 16, v545) & 1) != 0) ||
       (v545[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x74LL) + (_QWORD)v5) & 0xFFF,
        (BattleSide_7a16a0_alt1(a1 + 776, v545) & 1) != 0))) {
    v6 = 2;
    v7 = *(_DWORD*)(a1 + 11276) | 0x200;
    v8 = 1;
  }
  else {
    v6 = 1;
    v7 = *(_DWORD*)(a1 + 11276) & 0xFFFFFDFF;
    v8 = 2;
  }
  *(_DWORD*)(a1 + 11276) = v7;
  v60 = *(unsigned __int8*)(a1 + 32);
  *(_DWORD*)(a1 + 128) = v6;
  if (v60 > 3) {
    v61 = *(_QWORD*)(a1 + 24) + 760LL * (unsigned int)v60;
  }
  else {
    v61 = *(_QWORD*)(a1 + 24) + 760LL * GameData_1b01628[v60];
  }
  *(_DWORD*)(v61 + 128) = v6;
  *(_DWORD*)(a1 + 888) = v8;
  v62 = *(unsigned __int8*)(a1 + 792);
  if (v62 > 3) {
    v63 = *(_QWORD*)(a1 + 784) + 760LL * *(unsigned __int8*)(a1 + 792);
  }
  else {
    v63 = *(_QWORD*)(a1 + 784) + 760LL * GameData_1b01628[v62];
  }
  *(_DWORD*)(v63 + 128) = v8;
  if (((*(_DWORD*)(a1 + 11276) ^ v3) & 0x200) != 0) {
    LOBYTE(v552_.v552[0]) = 1;
    LOBYTE(v545[0]) = *(_BYTE*)(*(_QWORD*)(a1 + 11264) + 793LL);
    BattleScenes_7a7840(a1 + 3056, 20, v552_.v552, v545),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v545[0] = 16;
  game_map_795820_alt2((unsigned __int8*)a1, (__int64)v545),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((*(_BYTE*)(a1 + 11276) & 0x40) == 0) {
    v64 = *(_QWORD*)(a1 + 72);
    if (v64 != 0) {
      v65 = *(_QWORD**)(a1 + 40);
      if (v65 != nullptr && *(_BYTE*)(v64 + 275) != 0) {
        v66 = *(unsigned int*)((char*)((_UNKNOWN*)0x164LL) + (_QWORD)v5);
        v67 = v65[218];
        if (((v66 >> 5) & 0x7F) + 1 > (v65[219] - v67) >> 2 ||
            ((*(_DWORD*)(v67 + 4 * ((v66 >> 5) & 0x7F)) >> v66) & 1) == 0) {
          v68 = v65[55];
          v69 = v68 != 0 ? *(_BYTE*)(v68 + 16) : 9;
          if (((1 << v69) & 6) == 0) {
            LOBYTE(v545[0]) = 0;
            if ((int)game_Unit_GetParam_alt1((__int64)v65) >= 1 &&
                *(_BYTE*)(v64 + 275) != 0) {
              if ((v470 = *(_QWORD**)(a1 + 40)) == nullptr ||
                  (v471 = *(unsigned int*)((char*)((_UNKNOWN*)0x164LL) +
                                           (_QWORD)v5),
                   v472 = v470[218],
                   ((v471 >> 5) & 0x7F) + 1 <= (v470[219] - v472) >> 2) &&
                      ((*(_DWORD*)(v472 + 4 * ((v471 >> 5) & 0x7F)) >> v471) &
                       1) != 0 ||
                  ((v473 = v470[55]) == 0 ? (v474 = 9)
                                          : (v474 = *(_BYTE*)(v473 + 16)),
                   ((1 << v474) & 6) != 0 ||
                       (LOBYTE(v545[0]) = 0,
                        (v530 = game_Unit_GetParam_alt1((__int64)v470)) < 1))) {
                v520 = 0;
              }
              else {
                v520 =
                    (v530 * (unsigned int)*(unsigned __int8*)(v64 + 275) + 99) /
                    0x64;
              }
              *(_DWORD*)(a1 + 136) = v520;
              v521 = *(_QWORD*)(a1 + 11264);
              LOBYTE(v552_.v552[0]) = *(_BYTE*)(a1 + 32);
              LOBYTE(v545[0]) =
                  *(_BYTE*)(v521 + 760LL * LOBYTE(v552_.v552[0]) + 33);
              v522 =
                  (char*)BattleScenes_7a7840(a1 + 3056, 21, v552_.v552, v545),
              v530 = COERCE_AS(__typeof__(v530),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v523 = *(_QWORD*)(a1 + 40);
              if (v523 != 0 && *(_QWORD*)(v523 + 392) != 0) {
                goto LABEL_766;
              }
              if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11277LL) & 0x80) == 0) {
                v524 = *(_QWORD**)(a1 + 48);
                if (v524 != nullptr) {
                  v525 = v522;
                  v526 = (unsigned __int8)X8CALL_X0(
                      _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                   PSEUDO_X8, _QWORD))*v524)(
                                   (void*)v524, *(_QWORD*)(a1 + 48))),
                  v530 = COERCE_AS(
                      __typeof__(v530),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v522 = v525;
                  if ((v526 & 1) != 0) {
                  LABEL_766:
                    v527 = (__int16*)&v522[12 * *(unsigned __int8*)(a1 + 32)];
                    v528 = GameHr_79c7f0(a1 + 16),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                    v529 = v527[8];
                    v527[9] = v528;
                    if (v528 < v529) {
                      LOWORD(v529) = v528;
                    }
                    v527[10] = v529;
                    v527[8] = *(_DWORD*)(a1 + 112);
                    v527[11] = *(_DWORD*)(a1 + 120);
                    v527[12] = BattleInfo_7a3000_alt1(),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                    v527[13] = BattleInfo_7a3110_alt1(),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v70 = *(_DWORD*)(a1 + 11276);
  *(_DWORD*)(a1 + 11276) = v70 & 0xF7FFFFFF;
  if ((v70 & 0x822) == 0) {
    v73 = &v4[95 * *(unsigned __int8*)(a1 + 33)];
    v74 = v73[7];
    if (v74 != 0) {
      if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v74 + 104)) &
           1) == 0) {
        goto LABEL_642;
      }
      v75 = *(_QWORD*)(v74 + 576);
      if (v75 == 0) {
        goto LABEL_642;
      }
    }
    else {
      v454 = *((unsigned __int16*)v73 + 22);
      if (*((_WORD*)v73 + 22) == 0) {
        v455 = *((unsigned int*)v73 + 10);
        v456 = (int)v455 <= -1 ? &game_g_empty_item
                               : (__int64*)(v73[3] + 8 * v455 + 828);
        v454 = *(unsigned __int16*)v456;
        if (v454 == 0) {
        LABEL_642:
          if ((BattleInfo_79d030(
                   (__int64)&v4[95 * *(unsigned __int8*)(a1 + 33)]) &
               1) != 0) {
            goto LABEL_674;
          }
        LABEL_643:
          if ((BattleSide_7a0540_alt1(v73, a1 + 16) & 1) == 0) {
            goto LABEL_674;
          }
          v460 = *(_QWORD*)(a1 + 11264);
          LOBYTE(v552_.v552[0]) = 0;
          LOBYTE(v545[0]) = *(_BYTE*)(v460 + 33);
          v461 = BattleScenes_7a7840(a1 + 3056, 10, v552_.v552, v545),
          v530 = COERCE_AS(__typeof__(v530),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v462 = *(_QWORD*)(a1 + 40);
          if (v462 != 0) {
            v463 = *(_DWORD*)(v462 + 1872) & 0xFFF;
            if ((*(_DWORD*)(v462 + 1872) & 0xFFF) == 0) {
            LABEL_673:
              v461[2] = v463;
            LABEL_674:
              v477 = &v4[95 * *(unsigned __int8*)(a1 + 793)];
              v478 = v477[7];
              if (v478 != 0) {
                if ((((unsigned __int16)*GameData_212cf08[0] >>
                      *(_BYTE*)(v478 + 104)) &
                     1) != 0) {
                  v479 = *(_QWORD*)(v478 + 576);
                  if (v479 != 0 && *(unsigned __int8*)(v479 + 72) <= 7u &&
                      *(_BYTE*)(v479 + 73) == 7) {
                    goto LABEL_690;
                  }
                }
              }
              else {
                v480 = *((unsigned __int16*)v477 + 22);
                if (*((_WORD*)v477 + 22) != 0 ||
                    ((int)(v481 = *((unsigned int*)v477 + 10)) <= -1
                         ? (v482 = &game_g_empty_item)
                         : (v482 = (__int64*)(v477[3] + 8 * v481 + 828)),
                     (v480 = *(unsigned __int16*)v482) != 0)) {
                  v483 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                    8LL * v480);
                  v484 = *(unsigned __int8*)(v483 + 72);
                  v485 = *(unsigned __int8*)(v483 + 73);
                  if (v484 <= 7 && v485 == 7) {
                    goto LABEL_690;
                  }
                }
              }
              if ((BattleInfo_79d030(
                       (__int64)&v4[95 * *(unsigned __int8*)(a1 + 793)]) &
                   1) != 0) {
                goto LABEL_704;
              }
            LABEL_690:
              if ((BattleSide_7a0540_alt1(v477, a1 + 776) & 1) == 0) {
                goto LABEL_704;
              }
              LOBYTE(v552_.v552[0]) = 1;
              LOBYTE(v545[0]) = *(_BYTE*)(*(_QWORD*)(a1 + 11264) + 793LL);
              v487 = BattleScenes_7a7840(a1 + 3056, 10, v552_.v552, v545),
              v530 = COERCE_AS(__typeof__(v530),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v488 = *(_QWORD*)(a1 + 800);
              if (v488 != 0) {
                v489 = *(_DWORD*)(v488 + 1872) & 0xFFF;
                if ((*(_DWORD*)(v488 + 1872) & 0xFFF) == 0) {
                LABEL_703:
                  v487[2] = v489;
                LABEL_704:
                  v494 = &v4[95 * *(unsigned __int8*)(a1 + 1553)];
                  v495 = v494[7];
                  if (v495 != 0) {
                    if ((((unsigned __int16)*GameData_212cf08[0] >>
                          *(_BYTE*)(v495 + 104)) &
                         1) == 0) {
                      goto LABEL_716;
                    }
                    v496 = *(_QWORD*)(v495 + 576);
                    if (v496 == 0) {
                      goto LABEL_716;
                    }
                  }
                  else {
                    v497 = *((unsigned __int16*)v494 + 22);
                    if (*((_WORD*)v494 + 22) == 0) {
                      v498 = *((unsigned int*)v494 + 10);
                      v499 = (int)v498 <= -1
                                 ? &game_g_empty_item
                                 : (__int64*)(v494[3] + 8 * v498 + 828);
                      v497 = *(unsigned __int16*)v499;
                      if (v497 == 0) {
                      LABEL_716:
                        if ((BattleInfo_79d030(
                                 (__int64)&v4[95 *
                                              *(unsigned __int8*)(a1 + 1553)]) &
                             1) != 0) {
                          goto LABEL_731;
                        }
                      LABEL_717:
                        if ((BattleSide_7a0540_alt1(v494, a1 + 1536) & 1) ==
                            0) {
                          goto LABEL_731;
                        }
                        LOBYTE(v552_.v552[0]) = 2;
                        LOBYTE(v545[0]) =
                            *(_BYTE*)(*(_QWORD*)(a1 + 11264) + 1553LL);
                        v500 = BattleScenes_7a7840(a1 + 3056, 10, v552_.v552,
                                                   v545),
                        v530 = COERCE_AS(
                            __typeof__(v530),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                        v501 = *(_QWORD*)(a1 + 1560);
                        if (v501 != 0) {
                          v502 = *(_DWORD*)(v501 + 1872) & 0xFFF;
                          if ((*(_DWORD*)(v501 + 1872) & 0xFFF) == 0) {
                          LABEL_730:
                            v500[2] = v502;
                          LABEL_731:
                            v507 = &v4[95 * *(unsigned __int8*)(a1 + 2313)];
                            v508 = v507[7];
                            if (v508 != 0) {
                              if ((((unsigned __int16)*GameData_212cf08[0] >>
                                    *(_BYTE*)(v508 + 104)) &
                                   1) == 0) {
                                goto LABEL_743;
                              }
                              v509 = *(_QWORD*)(v508 + 576);
                              if (v509 == 0) {
                                goto LABEL_743;
                              }
                            }
                            else {
                              v510 = *((unsigned __int16*)v507 + 22);
                              if (*((_WORD*)v507 + 22) == 0) {
                                v511 = *((unsigned int*)v507 + 10);
                                v512 =
                                    (int)v511 <= -1
                                        ? &game_g_empty_item
                                        : (__int64*)(v507[3] + 8 * v511 + 828);
                                v510 = *(unsigned __int16*)v512;
                                if (v510 == 0) {
                                LABEL_743:
                                  if ((BattleInfo_79d030(
                                           (__int64)&v4
                                               [95 *
                                                *(unsigned __int8*)(a1 +
                                                                    2313)]) &
                                       1) != 0) {
                                    goto LABEL_82;
                                  }
                                LABEL_744:
                                  if ((BattleSide_7a0540_alt1(v507, a1 + 2296) &
                                       1) == 0) {
                                    goto LABEL_82;
                                  }
                                  LOBYTE(v552_.v552[0]) = 3;
                                  LOBYTE(v545[0]) = *(
                                      _BYTE*)(*(_QWORD*)(a1 + 11264) + 2313LL);
                                  v513 = BattleScenes_7a7840(a1 + 3056, 10,
                                                             v552_.v552, v545),
                                  v530 = COERCE_AS(
                                      __typeof__(v530),
                                      PSEUDO_REGISTER(unsigned long long, "x0",
                                                      "=r"));
                                  v514 = *(_QWORD*)(a1 + 2320);
                                  if (v514 != 0) {
                                    v515 = *(_DWORD*)(v514 + 1872) & 0xFFF;
                                    if ((*(_DWORD*)(v514 + 1872) & 0xFFF) ==
                                        0) {
                                    LABEL_757:
                                      v513[2] = v515;
                                      goto LABEL_82;
                                    }
                                    v516 = *(_DWORD*)(a1 + 2376) -
                                           *(_DWORD*)(a1 + 2368);
                                    v517 = *(_DWORD*)(a1 + 2380) -
                                           *(_DWORD*)(a1 + 2372);
                                    if (((v517 | v516) & 0x80000000) == 0) {
                                      v518 = *(_DWORD*)(v514 + 592);
                                      if (v516 < v518 && v517 < v518) {
                                        v519 = v516 + v518 * v517;
                                        if ((v519 & 0x80000000) == 0 &&
                                            *(char*)(*(_QWORD*)(v514 + 600) +
                                                     4LL * v519 + 2) > 0) {
                                          v515 = *(
                                              _QWORD*)(*(_QWORD*)(GameData_21c99b0 +
                                                                  64) +
                                                       8LL * (*(_DWORD*)(v514 +
                                                                         1872) &
                                                              0xFFF));
                                          if (v515 == 0) {
                                            goto LABEL_757;
                                          }
                                          goto LABEL_756;
                                        }
                                      }
                                    }
                                    v515 =
                                        *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 +
                                                              64) +
                                                   8 * v515);
                                    if (*(_BYTE*)(v515 + 273) == 0) {
                                    LABEL_756:
                                      LODWORD(v515) =
                                          *(_WORD*)(v515 + 16) & 0xFFF;
                                      goto LABEL_757;
                                    }
                                  }
                                  LODWORD(v515) = 0;
                                  goto LABEL_757;
                                }
                              }
                              v509 =
                                  *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                             8LL * v510);
                            }
                            if (*(unsigned __int8*)(v509 + 72) <= 7u &&
                                *(_BYTE*)(v509 + 73) == 7) {
                              goto LABEL_744;
                            }
                            goto LABEL_743;
                          }
                          v503 = *(_DWORD*)(a1 + 1616) - *(_DWORD*)(a1 + 1608);
                          v504 = *(_DWORD*)(a1 + 1620) - *(_DWORD*)(a1 + 1612);
                          if (((v504 | v503) & 0x80000000) == 0) {
                            v505 = *(_DWORD*)(v501 + 592);
                            if (v503 < v505 && v504 < v505) {
                              v506 = v503 + v505 * v504;
                              if ((v506 & 0x80000000) == 0 &&
                                  *(char*)(*(_QWORD*)(v501 + 600) + 4LL * v506 +
                                           2) > 0) {
                                v502 = *(
                                    _QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                             8LL * (*(_DWORD*)(v501 + 1872) &
                                                    0xFFF));
                                if (v502 == 0) {
                                  goto LABEL_730;
                                }
                                goto LABEL_729;
                              }
                            }
                          }
                          v502 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                            8 * v502);
                          if (*(_BYTE*)(v502 + 273) == 0) {
                          LABEL_729:
                            LODWORD(v502) = *(_WORD*)(v502 + 16) & 0xFFF;
                            goto LABEL_730;
                          }
                        }
                        LODWORD(v502) = 0;
                        goto LABEL_730;
                      }
                    }
                    v496 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                      8LL * v497);
                  }
                  if (*(unsigned __int8*)(v496 + 72) <= 7u &&
                      *(_BYTE*)(v496 + 73) == 7) {
                    goto LABEL_717;
                  }
                  goto LABEL_716;
                }
                v490 = *(_DWORD*)(a1 + 856) - *(_DWORD*)(a1 + 848);
                v491 = *(_DWORD*)(a1 + 860) - *(_DWORD*)(a1 + 852);
                if (((v491 | v490) & 0x80000000) == 0) {
                  v492 = *(_DWORD*)(v488 + 592);
                  if (v490 < v492 && v491 < v492) {
                    v493 = v490 + v492 * v491;
                    if ((v493 & 0x80000000) == 0 &&
                        *(char*)(*(_QWORD*)(v488 + 600) + 4LL * v493 + 2) > 0) {
                      v489 =
                          *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                     8LL * (*(_DWORD*)(v488 + 1872) & 0xFFF));
                      if (v489 == 0) {
                        goto LABEL_703;
                      }
                      goto LABEL_702;
                    }
                  }
                }
                v489 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v489);
                if (*(_BYTE*)(v489 + 273) == 0) {
                LABEL_702:
                  LODWORD(v489) = *(_WORD*)(v489 + 16) & 0xFFF;
                  goto LABEL_703;
                }
              }
              LODWORD(v489) = 0;
              goto LABEL_703;
            }
            v464 = *(_DWORD*)(a1 + 96) - *(_DWORD*)(a1 + 88);
            v465 = *(_DWORD*)(a1 + 100) - *(_DWORD*)(a1 + 92);
            if (((v465 | v464) & 0x80000000) == 0) {
              v466 = *(_DWORD*)(v462 + 592);
              if (v464 < v466 && v465 < v466) {
                v467 = v464 + v466 * v465;
                if ((v467 & 0x80000000) == 0 &&
                    *(char*)(*(_QWORD*)(v462 + 600) + 4LL * v467 + 2) > 0) {
                  v463 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                    8LL * (*(_DWORD*)(v462 + 1872) & 0xFFF));
                  if (v463 == 0) {
                    goto LABEL_673;
                  }
                  goto LABEL_672;
                }
              }
            }
            v463 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v463);
            if (*(_BYTE*)(v463 + 273) == 0) {
            LABEL_672:
              LODWORD(v463) = *(_WORD*)(v463 + 16) & 0xFFF;
              goto LABEL_673;
            }
          }
          LODWORD(v463) = 0;
          goto LABEL_673;
        }
      }
      v75 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v454);
    }
    v457 = *(unsigned __int8*)(v75 + 72);
    v458 = *(unsigned __int8*)(v75 + 73);
    if (v457 <= 7 && v458 == 7) {
      goto LABEL_643;
    }
    goto LABEL_642;
  }
LABEL_82:
  GameRoutine_7a3440_alt1((_QWORD*)(a1 + 16)),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  GameRoutine_7a3440_alt1((_QWORD*)(a1 + 776)),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  GameRoutine_7a3440_alt1((_QWORD*)(a1 + 1536)),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  GameRoutine_7a3440_alt1((_QWORD*)(a1 + 2296)),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v545[0] = 32;
  game_map_795820_alt2((unsigned __int8*)a1, (__int64)v545),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21d41b0) != 0) {
    GameRoutine_799290(GameData_21d40b8_alt1),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    __cxa_guard_release_alt1((__int64)&GameData_21d41b0),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v71 = *(_QWORD*)(a1 + 184);
  if (v71 != 0) {
    v72 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 152) +
                               8 * ((unsigned __int64)(v71 +
                                                       *(_QWORD*)(a1 + 176) -
                                                       1) >>
                                    4)) +
                    244LL * (((_DWORD)v71 + *(_DWORD*)(a1 + 176) - 1) & 0xF));
  }
  else {
    v72 = GameData_21d40b8_alt1;
  }
  memcpy_alt1(a1 + 192, (__int64)v72, 0xF4u),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21d41b0) != 0) {
    GameRoutine_799290(GameData_21d40b8_alt1),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    __cxa_guard_release_alt1((__int64)&GameData_21d41b0),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v76 = *(_QWORD*)(a1 + 944);
  if (v76 != 0) {
    v77 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 912) +
                               8 * ((unsigned __int64)(v76 +
                                                       *(_QWORD*)(a1 + 936) -
                                                       1) >>
                                    4)) +
                    244LL * (((_DWORD)v76 + *(_DWORD*)(a1 + 936) - 1) & 0xF));
  }
  else {
    v77 = GameData_21d40b8_alt1;
  }
  memcpy_alt1(a1 + 952, (__int64)v77, 0xF4u),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21d41b0) != 0) {
    GameRoutine_799290(GameData_21d40b8_alt1),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    __cxa_guard_release_alt1((__int64)&GameData_21d41b0),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v78 = *(_QWORD*)(a1 + 1704);
  if (v78 != 0) {
    v79 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1672) +
                               8 * ((unsigned __int64)(v78 +
                                                       *(_QWORD*)(a1 + 1696) -
                                                       1) >>
                                    4)) +
                    244LL * (((_DWORD)v78 + *(_DWORD*)(a1 + 1696) - 1) & 0xF));
  }
  else {
    v79 = GameData_21d40b8_alt1;
  }
  memcpy_alt1(a1 + 1712, (__int64)v79, 0xF4u),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21d41b0) != 0) {
    GameRoutine_799290(GameData_21d40b8_alt1),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    __cxa_guard_release_alt1((__int64)&GameData_21d41b0),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v80 = *(_QWORD*)(a1 + 2464);
  if (v80 != 0) {
    v81 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 2432) +
                               8 * ((unsigned __int64)(v80 +
                                                       *(_QWORD*)(a1 + 2456) -
                                                       1) >>
                                    4)) +
                    244LL * (((_DWORD)v80 + *(_DWORD*)(a1 + 2456) - 1) & 0xF));
  }
  else {
    v81 = GameData_21d40b8_alt1;
  }
  memcpy_alt1(a1 + 2472, (__int64)v81, 0xF4u),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v82 = *(_DWORD*)((char*)((_UNKNOWN*)0x74LL) + (_QWORD)v5);
  v547 = 0;
  v548 = 0;
  LODWORD(v552_.v552[0]) = v82 & 0xFFF;
  if ((BattleInfo_79c940_alt1(a1 + 16, (unsigned int*)v552_.v552) & 1) != 0) {
    goto LABEL_104;
  }
  LODWORD(v549_.v549) =
      *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x78LL) + (_QWORD)v5) & 0xFFF;
  if ((BattleInfo_79c940_alt1(a1 + 776, (unsigned int*)&v549_.v549) & 1) != 0) {
    goto LABEL_104;
  }
  LODWORD(v552_.v552[0]) =
      *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x78LL) + (_QWORD)v5) & 0xFFF;
  if ((BattleInfo_79c940_alt1(a1 + 16, (unsigned int*)v552_.v552) & 1) != 0 ||
      (LODWORD(v549_.v549) =
           *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x74LL) + (_QWORD)v5) & 0xFFF,
       (BattleInfo_79c940_alt1(a1 + 776, (unsigned int*)&v549_.v549) & 1) !=
           0)) {
  LABEL_107:
    GameRoutine_7980c0_alt1((__int64)v545, a1 + 776),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v83 = a1 + 16;
    goto LABEL_108;
  }
  LODWORD(v552_.v552[0]) =
      *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x54LL) + (_QWORD)v5) & 0xFFF;
  if ((BattleSide_7a16a0_alt1(a1 + 776, (unsigned int*)v552_.v552) & 1) != 0) {
    LODWORD(v552_.v552[0]) =
        *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x58LL) + (_QWORD)v5) & 0xFFF;
    if ((BattleSide_7a16a0_alt1(a1 + 776, (unsigned int*)v552_.v552) & 1) !=
        0) {
      goto LABEL_107;
    }
    v468 = a1 + 776;
    v469 = a1 + 16;
  LABEL_667:
    GameRoutine_798350_alt1((__int64)v545, v468, v469),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    goto LABEL_109;
  }
  LODWORD(v552_.v552[0]) =
      *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x58LL) + (_QWORD)v5) & 0xFFF;
  if ((BattleSide_7a16a0_alt1(a1 + 16, (unsigned int*)v552_.v552) & 1) == 0) {
    v469 = a1 + 776;
    v468 = a1 + 16;
    goto LABEL_667;
  }
LABEL_104:
  GameRoutine_7980c0_alt1((__int64)v545, a1 + 16),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v83 = a1 + 776;
LABEL_108:
  GameRoutine_7980c0_alt1((__int64)v545, v83),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
LABEL_109:
  v84 = v547;
  if (v547 >= 1) {
    v85 = (_QWORD*)(a1 + 72);
    v531 = *(_QWORD*)(a1 + 72);
    v86 = *(_DWORD*)(a1 + 11256);
    v10 = __OFSUB__(v86, 1);
    v87 = (unsigned int)(v86 - 1);
    if ((int)v87 < 0 == v10 && *(_BYTE*)(a1 + (v87 << 6) + 3068) == 23 ||
        (LOBYTE(v549_.v549) = 4,
         LOBYTE(v552_.v552[0]) = *(_BYTE*)(*(_QWORD*)(a1 + 11264) + 3073LL),
         BattleScenes_7a7840(a1 + 3056, 23, &v549_.v549, v552_.v552),
         v84 = v547, v547 >= 1)) {
      v88 = 0;
      v552_.v556 = (_BYTE*)(a1 + 3068);
      v89 = v546;
      do {
        v90 = &v545[2 * v88];
        v91 = *(unsigned __int8*)v90;
        if (v91 == 4) {
          goto LABEL_508;
        }
        v536 = v89;
        v537 = v88;
        v92 = v90[1];
        GameRoutine_7a3440_alt1(v4),
            v530 = COERCE_AS(__typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        GameRoutine_7a3440_alt1((_QWORD*)(a1 + 776)),
            v530 = COERCE_AS(__typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        GameRoutine_7a3440_alt1((_QWORD*)(a1 + 1536)),
            v530 = COERCE_AS(__typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        GameRoutine_7a3440_alt1((_QWORD*)(a1 + 2296)),
            v530 = COERCE_AS(__typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v93 = (__int64)&v4[95 * (unsigned int)v91];
        v94 = *(unsigned __int8*)(v93 + 17);
        *(_DWORD*)(v93 + 116) = v92;
        v95 = (__int64)&v4[95 * v94];
        v534 = v95;
        v533 = *(_BYTE*)(v95 + 17);
        *(_BYTE*)(v93 + 17) = *(_BYTE*)(v95 + 16);
        *(_BYTE*)(v95 + 17) = *(_BYTE*)(v93 + 16);
        LODWORD(v552_.v552[0]) = 128;
        BattleInfo_795920_alt2(a1, v552_.v552, v93, v95),
            v530 = COERCE_AS(__typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v96 = *(_QWORD*)(v93 + 56);
        v535 = v94;
        if (v96 != 0) {
          if ((((unsigned __int16)*GameData_212cf08[0] >>
                *(_BYTE*)(v96 + 104)) &
               1) == 0) {
            goto LABEL_130;
          }
          v97 = *(_QWORD*)(v96 + 576);
          if (v97 == 0) {
            goto LABEL_130;
          }
        }
        else {
          v98 = *(unsigned __int16*)(v93 + 44);
          if (*(_WORD*)(v93 + 44) == 0) {
            v99 = *(unsigned int*)(v93 + 40);
            v100 = *(_QWORD*)(v93 + 24) + 8 * v99;
            v326 = (int)v99 <= -1;
            v101 = &game_g_empty_item;
            v102 = (__int64*)(v100 + 828);
            if (!v326) {
              v101 = v102;
            }
            v98 = *(unsigned __int16*)v101;
            if (v98 == 0) {
              goto LABEL_130;
            }
          }
          v97 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v98);
        }
        v103 = *(unsigned __int8*)(v97 + 72);
        v104 = *(unsigned __int8*)(v97 + 73);
        v105 = v103 <= 7 && v104 == 7;
        if (v105) {
        LABEL_139:
          if ((int)GameRoutine_7a3330_alt1((_QWORD*)v93) < 1) {
            v274 = 1;
          LABEL_386:
            v88 = v537;
            goto LABEL_474;
          }
          v118 = 0;
          v542 = (_WORD*)(v93 + 44);
          while (2) {
            GameRoutine_7a3440_alt1(v4),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            GameRoutine_7a3440_alt1((_QWORD*)(a1 + 776)),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            GameRoutine_7a3440_alt1((_QWORD*)(a1 + 1536)),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            GameRoutine_7a3440_alt1((_QWORD*)(a1 + 2296)),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v119 = *(unsigned __int8*)(v93 + 17);
            v120 = *(_QWORD*)(v93 + 56);
            if (v120 == 0 ||
                (unsigned int)(v121 = *(unsigned __int8*)(v120 + 104) - 2) >
                    4 ||
                ((0x1Bu >> v121) & 1) == 0) {
              v122 = *(_QWORD*)(v93 + 64);
              if (v122 != 0) {
                if ((*(int (**)(__int64))(*(_QWORD*)v122 + 560LL))(v122) <= 0) {
                  break;
                }
              LABEL_158:
                v128 = 1;
              LABEL_160:
                if ((signed __int32)*(_DWORD*)(v93 + 104) < v128) {
                LABEL_161:
                  v129 = 0;
                  goto LABEL_162;
                }
                v164 = (__int64)&v4[95 * v119];
                v544 = v128;
                v165 = *(_QWORD*)(v164 + 24);
                if (v165 == 0 || *(_QWORD*)(v165 + 392) == 0) {
                  v129 = 0;
                  if ((*(_BYTE*)(*(_QWORD*)(v164 + 8) + 11277LL) & 0x80) == 0) {
                    v166 = *(__int64 (****)(_QWORD))(v164 + 32),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                    if (v166 != nullptr) {
                      if (((**v166)(v166) & 1) == 0) {
                        goto LABEL_161;
                      }
                      goto LABEL_203;
                    }
                  }
                LABEL_162:
                  v131 = *(_QWORD*)(a1 + 152);
                  v130 = *(_QWORD*)(a1 + 160);
                  v132 = v130 - v131;
                  v105 = v130 == v131;
                  v134 = *(_QWORD*)(a1 + 176);
                  v133 = *(_QWORD*)(a1 + 184);
                  v135 = 2 * v132 - 1;
                  if (v105) {
                    v135 = 0;
                  }
                  *(_QWORD*)(a1 + 184) = v133 - 1;
                  if ((unsigned __int64)(v135 - (v133 + v134) + 1) >= 0x20) {
                    v136 = *(_QWORD*)(v130 - 8);
                    if (v136 != 0) {
                      v137 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v137 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v137, v136),
                          v530 = COERCE_AS(
                              __typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      v130 = *(_QWORD*)(a1 + 160);
                    }
                    *(_QWORD*)(a1 + 160) = v130 - 8;
                  }
                  v138 = *(_QWORD*)(a1 + 912);
                  v139 = *(_QWORD*)(a1 + 920);
                  v140 = *(_QWORD*)(a1 + 936);
                  v141 = v139 - v138;
                  v105 = v139 == v138;
                  v142 = *(_QWORD*)(a1 + 944);
                  v143 = 2 * v141 - 1;
                  if (v105) {
                    v143 = 0;
                  }
                  *(_QWORD*)(a1 + 944) = v142 - 1;
                  if ((unsigned __int64)(v143 - (v142 + v140) + 1) >= 0x20) {
                    v144 = *(_QWORD*)(v139 - 8);
                    if (v144 != 0) {
                      v145 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v145 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v145, v144),
                          v530 = COERCE_AS(
                              __typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      v139 = *(_QWORD*)(a1 + 920);
                    }
                    *(_QWORD*)(a1 + 920) = v139 - 8;
                  }
                  v146 = *(_QWORD*)(a1 + 1672);
                  v147 = *(_QWORD*)(a1 + 1680);
                  v148 = *(_QWORD*)(a1 + 1696);
                  v149 = v147 - v146;
                  v105 = v147 == v146;
                  v150 = *(_QWORD*)(a1 + 1704);
                  v151 = 2 * v149 - 1;
                  if (v105) {
                    v151 = 0;
                  }
                  *(_QWORD*)(a1 + 1704) = v150 - 1;
                  if ((unsigned __int64)(v151 - (v150 + v148) + 1) >= 0x20) {
                    v152 = *(_QWORD*)(v147 - 8);
                    if (v152 != 0) {
                      v153 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v153 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v153, v152),
                          v530 = COERCE_AS(
                              __typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      v147 = *(_QWORD*)(a1 + 1680);
                    }
                    *(_QWORD*)(a1 + 1680) = v147 - 8;
                  }
                  v154 = *(_QWORD*)(a1 + 2432);
                  v155 = *(_QWORD*)(a1 + 2440);
                  v156 = *(_QWORD*)(a1 + 2456);
                  v157 = v155 - v154;
                  v105 = v155 == v154;
                  v158 = *(_QWORD*)(a1 + 2464);
                  v159 = 2 * v157 - 1;
                  if (v105) {
                    v159 = 0;
                  }
                  *(_QWORD*)(a1 + 2464) = v158 - 1;
                  if ((unsigned __int64)(v159 - (v158 + v156) + 1) >= 0x20) {
                    v160 = *(_QWORD*)(v155 - 8);
                    if (v160 != 0) {
                      v161 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v161 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v161, v160),
                          v530 = COERCE_AS(
                              __typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      v155 = *(_QWORD*)(a1 + 2440);
                    }
                    *(_QWORD*)(a1 + 2440) = v155 - 8;
                  }
                  if ((v129 & 1) == 0) {
                    v162 = *(_DWORD*)(a1 + 11256);
                    v10 = __OFSUB__(v162, 1);
                    v163 = v162 - 1;
                    if (v163 < 0 != v10 ||
                        v552_.v556[64 * (unsigned __int64)(unsigned int)v163] !=
                            23) {
                      LOBYTE(v549_.v549) = 4;
                      LOBYTE(v552_.v552[0]) =
                          *(_BYTE*)(*(_QWORD*)(a1 + 11264) + 3073LL);
                      BattleScenes_7a7840((__int64)(v85 + 373), 23, &v549_.v549,
                                          v552_.v552),
                          v530 = COERCE_AS(
                              __typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                    }
                    if (++v118 < (int)GameRoutine_7a3330_alt1((_QWORD*)v93)) {
                      continue;
                    }
                  }
                  v274 = v129 ^ 1;
                  goto LABEL_386;
                }
              LABEL_203:
                LODWORD(v552_.v552[0]) = 256;
                BattleInfo_795920_alt2(a1, v552_.v552, v93, v164),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v167 = BattleInfo_7a3000_alt1(),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v168 = BattleInfo_7a3110_alt1(),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v169 = *(_DWORD*)(v164 + 96);
                v540 = v168;
                v170 = GameHr_7a27a0((_QWORD*)v93),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v171 = *(_QWORD*)(v93 + 56);
                if (v171 != 0) {
                  if ((unsigned int)*(unsigned __int8*)(v171 + 104) - 2 > 4) {
                    v172 = 0;
                  }
                  else {
                    v172 = GameData_1b3f5a8[(
                        unsigned __int8)(*(_BYTE*)(v171 + 104) - 2)];
                  }
                  v173 = v172 | 0x20000;
                  if (*(_BYTE*)(v171 + 250) != 28) {
                    v173 = v172;
                  }
                }
                else {
                  v173 = 0;
                }
                v543 = *(int*)(a1 + 11256);
                if ((*(_BYTE*)(a1 + 11276) & 1) != 0) {
                  v190 = 2;
                }
                else {
                  v538 = v170;
                  v539 = v169;
                  v532 = v173;
                  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex),
                      v530 = COERCE_AS(
                          __typeof__(v530),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v174 = game_map_MapRandom_instance__ptr[0];
                  v175 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                    (unsigned __int64)((__int128*)0x10LL) + 8);
                  v176 =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
                  v177 =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL)) ^
                      (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                  (unsigned __int64)((__int128*)0x10LL))
                       << 11);
                  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((__int128*)0x10LL)) =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL) + 4);
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v174 + 4) =
                      v175;
                  v178 = (v177 >> 8) ^ (v176 >> 19) ^ v177 ^ v176;
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v174 + 8) =
                      v176;
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v174 + 12) =
                      v178;
                  nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex),
                      v530 = COERCE_AS(
                          __typeof__(v530),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  if ((v167 & ~(v167 >> 31)) >= 100) {
                    v179 = 100;
                  }
                  else {
                    v179 = v167 & ~(v167 >> 31);
                  }
                  v180 = 100 * v179;
                  if (v167 >= 51) {
                    v180 +=
                        (int)(float)((float)(sinf(
                                                 (float)((float)(180 * v179 -
                                                                 9000) /
                                                         0x1.9000000000000p+5f) *
                                                 0x1.1df46a0000000p-6f) *
                                             (float)v179) *
                                     0x1.aaaaaa0000000p+3f),
                        v530 = COERCE_AS(
                            __typeof__(v530),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  }
                  v181 = (v178 & 0x7FFFFFFF) -
                         10000 *
                             ((unsigned int)((1759218605 *
                                              (unsigned __int64)(v178 &
                                                                 0x7FFFFFFF)) >>
                                             32) >>
                              12);
                  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex),
                      v530 = COERCE_AS(
                          __typeof__(v530),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v182 = game_map_MapRandom_instance__ptr[0];
                  v183 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                    (unsigned __int64)((__int128*)0x10LL) + 8);
                  v184 =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
                  v185 =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL)) ^
                      (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                  (unsigned __int64)((__int128*)0x10LL))
                       << 11);
                  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((__int128*)0x10LL)) =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL) + 4);
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v182 + 4) =
                      v183;
                  v186 = (v185 >> 8) ^ (v184 >> 19) ^ v185 ^ v184;
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v182 + 8) =
                      v184;
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v182 + 12) =
                      v186;
                  v187 = v186 & 0x7FFFFFFF;
                  nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex),
                      v530 = COERCE_AS(
                          __typeof__(v530),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v188 =
                      v187 - 10000 * ((unsigned int)((1759218605 *
                                                      (unsigned __int64)v187) >>
                                                     32) >>
                                      12);
                  v189 = 100 * v540;
                  if (v539 <= v538) {
                    LODWORD(v552_.v552[0]) =
                        *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x154LL) +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF;
                    v198 =
                        BattleInfo_79c940_alt1(v164, (unsigned int*)v552_.v552),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                    v4 = (_QWORD*)(a1 + 16);
                    if (v181 >= v180 || (v198 & 1) != 0) {
                      goto LABEL_237;
                    }
                  }
                  else {
                    v4 = (_QWORD*)(a1 + 16);
                    if (v181 >= v180) {
                    LABEL_237:
                      v202 = *(_QWORD*)(v93 + 64);
                      v85 = (_QWORD*)(a1 + 72);
                      if (v202 != 0 && (*(unsigned __int8 (**)(__int64))(
                                           *(_QWORD*)v202 + 40LL))(v202) == 6 ||
                          (BattleSide_79ff80_alt1(v93) & 1) != 0) {
                        v203 = v532;
                        v204 = v538;
                        goto LABEL_284;
                      }
                      v212 = *(_QWORD*)(v93 + 56);
                      if (v212 != 0) {
                        v204 = v538;
                        v203 = v532;
                        if ((((unsigned __int16)*GameData_212cf08[0] >>
                              *(_BYTE*)(v212 + 104)) &
                             1) == 0) {
                          goto LABEL_283;
                        }
                        v213 = *(_QWORD*)(v212 + 576);
                        if (v213 == 0) {
                          goto LABEL_283;
                        }
                      LABEL_278:
                        if (*(_BYTE*)(v213 + 73) == 7 &&
                            *(unsigned __int8*)(v213 + 72) < 8u) {
                        LABEL_284:
                          if (v188 >= v189) {
                            v225 = 1;
                          }
                          else {
                            v225 = 5;
                          }
                          v226 = v225 | v203;
                          if (v539 <= v204) {
                            v191 = v226 | 0x100;
                          }
                          else {
                            v191 = v226;
                          }
                          LODWORD(v552_.v552[0]) = 2048;
                          BattleInfo_795920_alt2(a1, v552_.v552, v93, v164),
                              v530 =
                                  COERCE_AS(__typeof__(v530),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x0", "=r"));
                        LABEL_291:
                          BattleInfo_79c6d0_alt1(v93, v544),
                              v530 =
                                  COERCE_AS(__typeof__(v530),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x0", "=r"));
                          v227 = BattleInfo_79d030(v93),
                          v530 = COERCE_AS(
                              __typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                          v228 = *(_QWORD*)(a1 + 11264);
                          LOBYTE(v549_.v549) = *(_BYTE*)(v93 + 16);
                          LOBYTE(v552_.v552[0]) = *(
                              _BYTE*)(v228 +
                                      760LL * (unsigned __int8)v549_.v549 + 33);
                          if ((v227 & 1) != 0) {
                            v229 = 4;
                          }
                          else {
                            v229 = 3;
                          }
                          v230 = BattleScenes_7a7840((__int64)(v85 + 373), v229,
                                                     &v549_.v549, v552_.v552),
                          v530 = COERCE_AS(
                              __typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                          v230[5] = v118;
                          v231 = v230;
                          v232 = *(_QWORD*)(v93 + 56);
                          if (v232 != 0) {
                            LODWORD(v232) = *(_WORD*)(v232 + 16) & 0xFFF;
                          }
                          *((_DWORD*)v230 + 2) = v232;
                          GameHr_7a76a0((__int64)v230, v93, v164),
                              v530 =
                                  COERCE_AS(__typeof__(v530),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x0", "=r"));
                          v233 = *(unsigned __int8*)(v93 + 16);
                          if ((v233 & 0xFE) == 2) {
                            if ((v234 =
                                     *(_QWORD*)(v93 + 8) + 760LL * (v233 == 3),
                                 (v235 = *(_QWORD*)(v234 + 40)) != 0) &&
                                    *(_QWORD*)(v235 + 392) != 0 ||
                                (*(_BYTE*)(*(_QWORD*)(v234 + 24) + 11277LL) &
                                 0x80) == 0 &&
                                    (v236 = *(__int64 (****)(_QWORD))(
                                         v234 + 48)) != nullptr &&
                                    ((**v236)(v236) & 1) != 0) {
                              v237 = (__int16*)&v231[12 *
                                                     *(unsigned __int8*)(v234 +
                                                                         32)];
                              v238 = GameHr_79c7f0(v234 + 16),
                              v530 =
                                  COERCE_AS(__typeof__(v530),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x0", "=r"));
                              v239 = v237[8];
                              v237[9] = v238;
                              if (v238 < v239) {
                                LOWORD(v239) = v238;
                              }
                              v237[10] = v239;
                              v237[8] = *(_DWORD*)(v234 + 112);
                              v237[11] = *(_DWORD*)(v234 + 120);
                              v237[12] = BattleInfo_7a3000_alt1(),
                              v530 =
                                  COERCE_AS(__typeof__(v530),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x0", "=r"));
                              v237[13] = BattleInfo_7a3110_alt1(),
                              v530 =
                                  COERCE_AS(__typeof__(v530),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x0", "=r"));
                              v85 = (_QWORD*)(a1 + 72);
                            }
                          }
                          v240 = *(_QWORD*)(v164 + 24);
                          if ((v240 != 0 && *(_QWORD*)(v240 + 392) != 0 ||
                               (*(_BYTE*)(*(_QWORD*)(v164 + 8) + 11277LL) &
                                0x80) == 0 &&
                                   (v241 = *(__int64 (****)(_QWORD))(
                                        v164 + 32)) != nullptr &&
                                   ((**v241)(v241) & 1) != 0) &&
                              (((*(_BYTE*)(*(_QWORD*)(v164 + 8) + 11276LL) &
                                 1) == 0) &
                               *(_BYTE*)(v164 + 124)) != 0) {
                            v191 |= 0x80u;
                          }
                          v242 = *(_DWORD*)(a1 + 11256);
                          if (v242 > (int)v543) {
                            v243 = v242 - v543;
                            v244 = &v552_.v556[64 * v543];
                            while (1) {
                              v245 = *v244;
                              v244 += 64;
                              if (v245 == 18) {
                                break;
                              }
                              if (--v243 == 0) {
                                goto LABEL_318;
                              }
                            }
                            v191 |= 0x10u;
                          }
                        LABEL_318:
                          *((_DWORD*)v231 + 3) = v191;
                          v5 = &game_g_shared_system_skills;
                          if ((v191 & 2) != 0) {
                            v246 = (__int64*)(v93 + 44);
                            if (*v542 == 0) {
                              v247 = *(unsigned int*)(v93 + 40);
                              if ((v247 & 0x80000000) != 0) {
                                v246 = &game_g_empty_item;
                              }
                              else {
                                v246 = (__int64*)(*(_QWORD*)(v93 + 24) +
                                                  8 * v247 + 828);
                              }
                            }
                            BattleInfo_795b40_alt1((_QWORD*)a1, v164, v246),
                                v530 = COERCE_AS(
                                    __typeof__(v530),
                                    PSEUDO_REGISTER(unsigned long long, "x0",
                                                    "=r"));
                          }
                          v248 = *(_DWORD*)(a1 + 11276);
                          if ((v191 & 0x80) == 0) {
                            if ((v248 & 1) != 0) {
                              goto LABEL_161;
                            }
                            v249 = *(_QWORD*)(a1 + 40);
                            if (v249 != 0 && *(_QWORD*)(v249 + 392) != 0) {
                              if (*(_DWORD*)(a1 + 112) == 0) {
                              LABEL_339:
                                v129 = 1;
                                goto LABEL_162;
                              }
                            }
                            else if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11277LL) &
                                      0x80) == 0) {
                              v254 = *(__int64 (****)(_QWORD))(a1 + 48),
                              v530 =
                                  COERCE_AS(__typeof__(v530),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x0", "=r"));
                              if (v254 != nullptr &&
                                  ((**v254)(v254) & 1) != 0 &&
                                  *(_DWORD*)(a1 + 112) == 0) {
                                goto LABEL_339;
                              }
                            }
                            v255 = *(_QWORD*)(a1 + 800);
                            v257 = true;
                            if ((v255 == 0 || *(_QWORD*)(v255 + 392) == 0) &&
                                ((*(_BYTE*)(*(_QWORD*)(a1 + 784) + 11277LL) &
                                  0x80) != 0 ||
                                 (v256 = *(__int64 (****)(_QWORD))(a1 + 808)) ==
                                     nullptr ||
                                 ((**v256)(v256) & 1) == 0)) {
                              v257 = false;
                            }
                            v129 = *(_DWORD*)(a1 + 872) == 0 && v257;
                            goto LABEL_162;
                          }
                          if ((v248 & 1) != 0) {
                            goto LABEL_161;
                          }
                          if ((*(_BYTE*)(*(_QWORD*)(v164 + 8) + 11277LL) &
                               0x80) != 0 ||
                              *(_QWORD*)(v164 + 32) == 0) {
                            v258 = *(_QWORD*)(a1 + 11264);
                            LOBYTE(v549_.v549) = *(_BYTE*)(v93 + 16);
                            LOBYTE(v552_.v552[0]) =
                                *(_BYTE*)(v258 +
                                          760LL * (unsigned __int8)v549_.v549 +
                                          33);
                            *((_DWORD*)BattleScenes_7a7840((__int64)(v85 + 373),
                                                           14, &v549_.v549,
                                                           v552_.v552) +
                              2) = GameData_21d97ec & 0xFFF,
                              v530 =
                                  COERCE_AS(__typeof__(v530),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x0", "=r"));
                            if ((v191 & 4) != 0) {
                              v259 = *(_QWORD*)(a1 + 11264);
                              LOBYTE(v549_.v549) = *(_BYTE*)(v93 + 16);
                              LOBYTE(v552_.v552[0]) = *(
                                  _BYTE*)(v259 +
                                          760LL * (unsigned __int8)v549_.v549 +
                                          33);
                              v252 =
                                  BattleScenes_7a7840((__int64)(v85 + 373), 14,
                                                      &v549_.v549, v552_.v552),
                              v530 =
                                  COERCE_AS(__typeof__(v530),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x0", "=r"));
                              v253 = GameData_21d97f0;
                            LABEL_348:
                              v252[2] = v253 & 0xFFF;
                            }
                          }
                          else {
                            v250 = *(_QWORD*)(a1 + 11264);
                            LOBYTE(v549_.v549) = *(_BYTE*)(v93 + 16);
                            LOBYTE(v552_.v552[0]) =
                                *(_BYTE*)(v250 +
                                          760LL * (unsigned __int8)v549_.v549 +
                                          33);
                            *((_DWORD*)BattleScenes_7a7840((__int64)(v85 + 373),
                                                           14, &v549_.v549,
                                                           v552_.v552) +
                              2) = GameData_21d97f4 & 0xFFF,
                              v530 =
                                  COERCE_AS(__typeof__(v530),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x0", "=r"));
                            if ((v191 & 4) != 0) {
                              v251 = *(_QWORD*)(a1 + 11264);
                              LOBYTE(v549_.v549) = *(_BYTE*)(v93 + 16);
                              LOBYTE(v552_.v552[0]) = *(
                                  _BYTE*)(v251 +
                                          760LL * (unsigned __int8)v549_.v549 +
                                          33);
                              v252 =
                                  BattleScenes_7a7840((__int64)(v85 + 373), 14,
                                                      &v549_.v549, v552_.v552),
                              v530 =
                                  COERCE_AS(__typeof__(v530),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x0", "=r"));
                              v253 = GameData_21d97f8;
                              goto LABEL_348;
                            }
                          }
                          v260 = *(_QWORD*)(a1 + 11264);
                          LOBYTE(v549_.v549) = *(_BYTE*)(v164 + 16);
                          LOBYTE(v552_.v552[0]) = *(
                              _BYTE*)(v260 +
                                      760LL * (unsigned __int8)v549_.v549 + 33);
                          BattleScenes_7a7840((__int64)(v85 + 373), 22,
                                              &v549_.v549, v552_.v552),
                              v530 =
                                  COERCE_AS(__typeof__(v530),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x0", "=r"));
                          v129 = 1;
                          goto LABEL_162;
                        }
                      }
                      else {
                        v203 = v532;
                        v204 = v538;
                        v219 = (unsigned __int16)*v542;
                        if (*v542 != 0) {
                          goto LABEL_277;
                        }
                        v220 = *(unsigned int*)(v93 + 40);
                        v221 = *(_QWORD*)(v93 + 24) + 8 * v220;
                        v326 = (int)v220 <= -1;
                        v222 = &game_g_empty_item;
                        v223 = (__int64*)(v221 + 828);
                        if (!v326) {
                          v222 = v223;
                        }
                        v219 = *(unsigned __int16*)v222;
                        if (v219 != 0) {
                        LABEL_277:
                          v213 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                            8LL * v219);
                          goto LABEL_278;
                        }
                      }
                    LABEL_283:
                      v544 = 0;
                      goto LABEL_284;
                    }
                  }
                  v85 = (_QWORD*)(a1 + 72);
                  if (v188 >= v189) {
                    v190 = 2;
                    v5 = (int*)game_g_shared_system_skills_ptr;
                    v173 = v532;
                  }
                  else {
                    explicit = atomic_load_explicit(
                        (atomic_uchar* volatile)&GameData_21d41b0,
                        memory_order_acquire);
                    v5 = (int*)game_g_shared_system_skills_ptr;
                    if ((explicit & 1) == 0 &&
                        __cxa_guard_acquire_alt1((__int64)&GameData_21d41b0) !=
                            0) {
                      GameRoutine_799290(GameData_21d40b8_alt1),
                          v530 = COERCE_AS(
                              __typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      __cxa_guard_release_alt1((__int64)&GameData_21d41b0),
                          v530 = COERCE_AS(
                              __typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                    }
                    v200 = *(_QWORD*)(v93 + 168);
                    if (v200 != 0) {
                      v201 =
                          (float*)(*(_QWORD*)(*(_QWORD*)(v93 + 136) +
                                              8 * ((unsigned __int64)(v200 +
                                                                      *(_QWORD*)(v93 +
                                                                                 160) -
                                                                      1) >>
                                                   4)) +
                                   244LL * (((_DWORD)v200 +
                                             *(_DWORD*)(v93 + 160) - 1) &
                                            0xF));
                    }
                    else {
                      v201 = (float*)GameData_21d40b8_alt1;
                    }
                    v173 = v532;
                    v201[2] = v201[2] + 0x1.0000000000000p+1f;
                    v190 = 6;
                  }
                }
                v191 = v190 | v173;
                LODWORD(v552_.v552[0]) =
                    *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x8CLL) + (_QWORD)v5) &
                    0xFFF;
                if ((BattleInfo_79c940_alt1(v93, (unsigned int*)v552_.v552) &
                     1) != 0) {
                  v191 |= 0x40u;
                }
                LODWORD(v552_.v552[0]) =
                    *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x88LL) + (_QWORD)v5) &
                    0xFFF;
                if ((BattleInfo_79c940_alt1(v93, (unsigned int*)v552_.v552) &
                     1) != 0) {
                  v191 |= 0x20u;
                }
                v192 = *(unsigned __int8*)(v164 + 16);
                if (v192 > 3) {
                  v193 = *(_QWORD*)(v164 + 8) +
                         760LL * *(unsigned __int8*)(v164 + 16);
                }
                else {
                  v193 = *(_QWORD*)(v164 + 8) + 760LL * GameData_1b01628[v192];
                }
                v194 = v193 + 16;
                if (*(_BYTE*)(v194 + 18) == 3) {
                  v195 = *(unsigned __int8*)(v194 + 16);
                  v196 = *(_QWORD*)(a1 + 11264);
                  LOBYTE(v549_.v549) = v195;
                  LOBYTE(v552_.v552[0]) = *(_BYTE*)(v196 + 760LL * v195 + 33);
                  BattleScenes_7a7840((__int64)(v85 + 373), 11, &v549_.v549,
                                      v552_.v552),
                      v530 = COERCE_AS(
                          __typeof__(v530),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  *(_DWORD*)(v164 + 120) = 0;
                  v191 |= 8u;
                  goto LABEL_291;
                }
                LODWORD(v552_.v552[0]) = 0x20000;
                BattleInfo_795920_alt2(a1, v552_.v552, v93, v164),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                if ((v191 & 4) != 0) {
                  LODWORD(v552_.v552[0]) = 0x80000;
                  BattleInfo_795920_alt2(a1, v552_.v552, v93, v164),
                      v530 = COERCE_AS(
                          __typeof__(v530),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  LODWORD(v552_.v552[0]) = 512;
                  BattleInfo_795920_alt2(a1, v552_.v552, v93, v164),
                      v530 = COERCE_AS(
                          __typeof__(v530),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v197 = 1024;
                }
                else {
                  v197 = 512;
                }
                LODWORD(v552_.v552[0]) = v197;
                BattleInfo_795920_alt2(a1, v552_.v552, v93, v164),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                LODWORD(v552_.v552[0]) =
                    *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) + (_QWORD)v5 + 4) &
                    0xFFF;
                if ((BattleInfo_79c940_alt1(v164, (unsigned int*)v552_.v552) &
                     1) != 0) {
                  if ((atomic_load_explicit(
                           (atomic_uchar* volatile)&GameData_21d41b0,
                           memory_order_acquire) &
                       1) == 0 &&
                      __cxa_guard_acquire_alt1((__int64)&GameData_21d41b0) !=
                          0) {
                    GameRoutine_799290(GameData_21d40b8_alt1),
                        v530 = COERCE_AS(
                            __typeof__(v530),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                    __cxa_guard_release_alt1((__int64)&GameData_21d41b0),
                        v530 = COERCE_AS(
                            __typeof__(v530),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  }
                  v205 = *(_QWORD*)(v93 + 168);
                  if (v205 != 0) {
                    v206 =
                        (_QWORD*)(*(_QWORD*)(*(_QWORD*)(v93 + 136) +
                                             8 * ((unsigned __int64)(v205 +
                                                                     *(_QWORD*)(v93 +
                                                                                160) -
                                                                     1) >>
                                                  4)) +
                                  244LL * (((_DWORD)v205 +
                                            *(_DWORD*)(v93 + 160) - 1) &
                                           0xF));
                  }
                  else {
                    v206 = GameData_21d40b8_alt1;
                  }
                  *((_WORD*)v206 + 2) = 0;
                  *(_DWORD*)(v164 + 120) = 0;
                  v191 |= 0x200u;
                  v207 = 0x40000;
                  if ((v191 & 4) != 0) {
                  LABEL_259:
                    LODWORD(v552_.v552[0]) = 0x40000;
                    BattleInfo_795920_alt2(a1, v552_.v552, v93, v164),
                        v530 = COERCE_AS(
                            __typeof__(v530),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                    v207 = 0x100000;
                  }
                LABEL_260:
                  LODWORD(v552_.v552[0]) = v207;
                  BattleInfo_795920_alt2(a1, v552_.v552, v93, v164),
                      v530 = COERCE_AS(
                          __typeof__(v530),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v214 = *(_QWORD*)(v164 + 24);
                  if (v214 == 0 || (*(_DWORD*)(v214 + 1872) & 0xFFF) == 0) {
                    goto LABEL_291;
                  }
                  v215 = *(_DWORD*)(v164 + 80) - *(_DWORD*)(v164 + 72);
                  v216 = *(_DWORD*)(v164 + 84) - *(_DWORD*)(v164 + 76);
                  if ((v216 | v215) < 0 ||
                      (v217 = *(_DWORD*)(v214 + 592), v215 >= v217) ||
                      v216 >= v217 ||
                      ((v218 = v215 + v217 * v216) & 0x80000000) != 0 ||
                      *(char*)(*(_QWORD*)(v214 + 600) + 4LL * v218 + 2) <= 0) {
                    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                             8LL * (*(_DWORD*)(v214 + 1872) &
                                                    0xFFF)) +
                                  273LL) != 0) {
                      goto LABEL_291;
                    }
                  }
                  else if (*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                      8LL * (*(_DWORD*)(v214 + 1872) &
                                             0xFFF)) == 0) {
                    goto LABEL_291;
                  }
                  v191 |= ~(*(_DWORD*)(a1 + 11276) >> 1) & 0x400;
                  goto LABEL_291;
                }
                LODWORD(v552_.v552[0]) =
                    *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1A8LL) + (_QWORD)v5) &
                    0xFFF;
                if ((BattleInfo_79c940_alt1(v93, (unsigned int*)v552_.v552) &
                     1) != 0) {
                  v191 |= 0x80u;
                  *(_DWORD*)(v164 + 120) = *(_DWORD*)(v164 + 96);
                  v207 = 0x40000;
                  if ((v191 & 4) != 0) {
                    goto LABEL_259;
                  }
                  goto LABEL_260;
                }
                v208 = BattleSide_7a2950_alt1((_QWORD*)v93),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v209 = *(_QWORD*)(v164 + 24);
                if (v209 != 0) {
                  v210 = *(_QWORD*)(v209 + 440);
                  v211 = v210 != 0 ? *(_BYTE*)(v210 + 16) : 9;
                  if (((1 << v211) & 0xF1) != 0 &&
                      (*(_DWORD*)(a1 + 11276) & 0x38001) == 0 &&
                      (signed __int32)*(_DWORD*)(v164 + 96) <= v208) {
                    v261 = *(unsigned int*)(a1 + 11256);
                    if ((_DWORD)v261 != 0) {
                      v262 = v552_.v556;
                      while (*v262 != 12 ||
                             *(v262 - 2) != *(_BYTE*)(v164 + 16)) {
                        --v261;
                        v262 += 64;
                        if (v261 == 0) {
                          goto LABEL_364;
                        }
                      }
                    LABEL_371:
                      if ((atomic_load_explicit(
                               (atomic_uchar* volatile)&GameData_21d41b0,
                               memory_order_acquire) &
                           1) == 0 &&
                          __cxa_guard_acquire_alt1(
                              (__int64)&GameData_21d41b0) != 0) {
                        GameRoutine_799290(GameData_21d40b8_alt1),
                            v530 = COERCE_AS(__typeof__(v530),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x0", "=r"));
                        __cxa_guard_release_alt1((__int64)&GameData_21d41b0),
                            v530 = COERCE_AS(__typeof__(v530),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x0", "=r"));
                      }
                      v271 = *(_QWORD*)(v93 + 168);
                      if (v271 != 0) {
                        v272 =
                            (_QWORD*)(*(_QWORD*)(*(_QWORD*)(v93 + 136) +
                                                 8 * ((unsigned __int64)(v271 +
                                                                         *(_QWORD*)(v93 +
                                                                                    160) -
                                                                         1) >>
                                                      4)) +
                                      244LL * (((_DWORD)v271 +
                                                *(_DWORD*)(v93 + 160) - 1) &
                                               0xF));
                      }
                      else {
                        v272 = GameData_21d40b8_alt1;
                      }
                      *((_WORD*)v272 + 2) = 0;
                      v273 = *(_QWORD*)(a1 + 11264);
                      LOBYTE(v549_.v549) = *(_BYTE*)(v164 + 16);
                      LOBYTE(v552_.v552[0]) =
                          *(_BYTE*)(v273 + 760LL * (unsigned __int8)v549_.v549 +
                                    33);
                      BattleScenes_7a7840((__int64)(v85 + 373), 12, &v549_.v549,
                                          v552_.v552),
                          v530 = COERCE_AS(
                              __typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      v191 |= 0x8000u;
                      v208 = 0;
                    }
                    else {
                    LABEL_364:
                      if (v210 != 0) {
                        v263 = *(_BYTE*)(v210 + 16);
                      }
                      else {
                        v263 = 9;
                      }
                      v541 = v208;
                      if (((1 << v263) & 0xF1) != 0) {
                        v264 = 100 * GameRoutine_8ca760_alt1(v209),
                        v530 = COERCE_AS(
                            __typeof__(v530),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      }
                      else {
                        v264 = 0;
                      }
                      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex),
                          v530 = COERCE_AS(
                              __typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      v265 = game_map_MapRandom_instance__ptr[0];
                      v266 = *(
                          _DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((__int128*)0x10LL) + 8);
                      v267 = *(
                          _DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((__int128*)0x10LL) + 8 +
                                   4);
                      v268 =
                          *(_DWORD*)((char*)
                                         game_map_MapRandom_instance__ptr[0] +
                                     (unsigned __int64)((__int128*)0x10LL)) ^
                          (*(_DWORD*)((char*)
                                          game_map_MapRandom_instance__ptr[0] +
                                      (unsigned __int64)((__int128*)0x10LL))
                           << 11);
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL)) =
                          *(_DWORD*)((char*)
                                         game_map_MapRandom_instance__ptr[0] +
                                     (unsigned __int64)((__int128*)0x10LL) + 4);
                      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v265 +
                                 4) = v266;
                      v269 = (v268 >> 8) ^ (v267 >> 19) ^ v268 ^ v267;
                      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v265 +
                                 8) = v267;
                      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v265 +
                                 12) = v269;
                      v270 = v269 & 0x7FFFFFFF;
                      nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex),
                          v530 = COERCE_AS(
                              __typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      v208 = v541;
                      v127 =
                          v270 - 10000 *
                                     ((unsigned int)((1759218605 *
                                                      (unsigned __int64)v270) >>
                                                     32) >>
                                      12) >=
                          v264;
                      v85 = (_QWORD*)(a1 + 72);
                      if (!v127) {
                        goto LABEL_371;
                      }
                    }
                  }
                }
                *(_DWORD*)(v164 + 120) = v208;
                v207 = 0x40000;
                if ((v191 & 4) != 0) {
                  goto LABEL_259;
                }
                goto LABEL_260;
              }
              v123 = (__int64*)(v93 + 44);
              if (*v542 == 0) {
                v124 = *(unsigned int*)(v93 + 40);
                if ((v124 & 0x80000000) != 0) {
                  v123 = &game_g_empty_item;
                }
                else {
                  v123 = (__int64*)(*(_QWORD*)(v93 + 24) + 8 * v124 + 828);
                }
              }
              v125 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                8LL * *(unsigned __int16*)v123);
              if (*(_BYTE*)(v125 + 87) != 0) {
                v126 = *(unsigned __int8*)(v125 + 72);
                v127 = v126 <= 7 && v126 - 5 >= 2;
                if (!v127) {
                  goto LABEL_158;
                }
              }
            }
            break;
          }
          v128 = 0;
          goto LABEL_160;
        }
      LABEL_130:
        if ((BattleInfo_79d030(v93) & 1) == 0) {
          goto LABEL_139;
        }
        v106 = *(_DWORD*)(a1 + 11256);
        v107 = *(unsigned __int8*)(v93 + 16);
        v10 = __OFSUB__(v106, 1);
        v108 = v106 - 1;
        if (v108 < 0 != v10 ||
            v552_.v556[64 * (unsigned __int64)(unsigned int)v108] != 23) {
          LOBYTE(v549_.v549) = 4;
          LOBYTE(v552_.v552[0]) = *(_BYTE*)(*(_QWORD*)(a1 + 11264) + 3073LL);
          BattleScenes_7a7840((__int64)(v85 + 373), 23, &v549_.v549,
                              v552_.v552),
              v530 = COERCE_AS(__typeof__(v530),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        v109 = v85;
        v110 = 95LL * v107;
        v111 = (__int64)&v4[v110];
        v112 = v109[v110];
        if (v112 != 0) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d3f68,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)&GameData_21d3f68) != 0) {
            GameData_21d3f60 = 393728;
            __cxa_guard_release_alt1((__int64)&GameData_21d3f68),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          v113 = *(unsigned __int8*)(v111 + 17);
          if ((*(_BYTE*)(a1 + 11276) & 0x22) == 0 &&
              ((v401 = *(_QWORD*)(v111 + 24)) != 0 &&
                   *(_QWORD*)(v401 + 392) != 0 ||
               (*(_BYTE*)(*(_QWORD*)(v111 + 8) + 11277LL) & 0x80) == 0 &&
                   (v402 = *(__int64 (****)(_QWORD))(v111 + 32)) != nullptr &&
                   ((**v402)(v402) & 1) != 0)) {
            v403 = *(_DWORD*)(v111 + 604);
            v549_.v550 = 0;
            v549_.v551 = 0;
            v549_.v549 = 0;
            if ((GameData_21d3f60 & v403) != 0) {
              v552_.v552[0] = GameData_1fab650;
              v552_.v552[1] = &v549_.v549;
              v552_.v554 = &v4[v110];
              v552_.v555 = v552_.v552;
              v552_.v553 = 1;
              game_map_BattleSide_EachMaskSkill_alt1((__int64)&v4[v110],
                                                     &GameData_21d3f60, 1,
                                                     (__int64)v552_.v552),
                  v530 = COERCE_AS(
                      __typeof__(v530),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              if (v552_.v555 == v552_.v552) {
                v404 = 32;
              LABEL_563:
                (*(void (**)(__int64))(*v552_.v555 + v404))(
                    (__int64)v552_.v555),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              }
              else if (v552_.v555 != nullptr) {
                v404 = 40;
                goto LABEL_563;
              }
              v405 = v549_.v549;
              v406 = v549_.v550;
              if (v549_.v550 != v549_.v549) {
                GameRoutine_8e3d20_alt1(
                    v549_.v549, v549_.v550,
                    (2 * __clz(0xAAAAAAAAAAAAAAABLL *
                               ((__int64)(v549_.v550 - v549_.v549) >> 2))) ^
                        0x7E,
                    1),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v405 = v549_.v549;
                v406 = v549_.v550;
              }
              if (v406 != v405) {
                v407 = (unsigned __int8*)v405;
                do {
                  v408 = *v407;
                  v407 += 12;
                  BattleInfo_7960a0_alt1(a1, v408, (unsigned int*)(v405 + 4)),
                      v530 = COERCE_AS(
                          __typeof__(v530),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v405 = (__int64)v407;
                } while (v407 != (unsigned __int8*)v406);
                v405 = v549_.v549;
              }
              if (v405 != 0) {
                v549_.v550 = v405;
                v409 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v409 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v409, v405),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              }
            }
          }
          LOBYTE(v549_.v549) = v107;
          v114 = *(_QWORD*)(a1 + 11264) + v110 * 8;
          v85 = (_QWORD*)(a1 + 72);
          LOBYTE(v552_.v552[0]) = *(_BYTE*)(v114 + 33);
          v115 = BattleScenes_7a7840(a1 + 3056, 4, &v549_.v549, v552_.v552),
          v530 = COERCE_AS(__typeof__(v530),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v115[2] = *(_WORD*)(v112 + 16) & 0xFFF;
          v116 = GameHr_7a76a0((__int64)v115, v111, (__int64)&v4[95 * v113]),
          v530 = COERCE_AS(__typeof__(v530),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          if ((unsigned int)*(unsigned __int8*)(v112 + 104) - 2 > 4) {
            v117 = 0;
          }
          else {
            v117 =
                GameData_1b3f5a8[(unsigned __int8)(*(_BYTE*)(v112 + 104) - 2)];
          }
          v5 = (int*)game_g_shared_system_skills_ptr;
          if (*(_BYTE*)(v112 + 250) == 28) {
            v117 |= 0x20000u;
          }
          *(_DWORD*)(v116 + 12) = v117 | 2;
          goto LABEL_470;
        }
        v275 = *(unsigned __int8*)(v111 + 17);
        v276 = GameRoutine_7a3330_alt1(&v4[v110]),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v85 = (_QWORD*)(a1 + 72);
        if (v276 >= 1) {
          v277 = (_WORD*)(v111 + 44);
          v278 = 0;
          v279 = (__int64)&v4[95 * v275];
          do {
            v281 = *(_QWORD*)(v111 + 56);
            if (v281 == 0 ||
                (unsigned int)(v282 = *(unsigned __int8*)(v281 + 104) - 2) >
                    4 ||
                ((0x1Bu >> v282) & 1) == 0) {
              v283 = *(_QWORD*)(v111 + 64);
              if (v283 != 0) {
                if ((*(int (**)(__int64))(*(_QWORD*)v283 + 560LL))(v283) > 0) {
                  goto LABEL_407;
                }
              }
              else {
                v284 = (__int64*)(v111 + 44);
                if (*v277 == 0) {
                  v285 = *(unsigned int*)(v111 + 40);
                  if ((v285 & 0x80000000) != 0) {
                    v284 = &game_g_empty_item;
                  }
                  else {
                    v284 = (__int64*)(*(_QWORD*)(v111 + 24) + 8 * v285 + 828);
                  }
                }
                v286 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                  8LL * *(unsigned __int16*)v284);
                if (*(_BYTE*)(v286 + 87) != 0) {
                  v287 = *(unsigned __int8*)(v286 + 72);
                  if (v287 > 7 || v287 - 5 < 2) {
                  LABEL_407:
                    v289 = 1;
                    goto LABEL_409;
                  }
                }
              }
            }
            v289 = 0;
          LABEL_409:
            if ((signed __int32)*(_DWORD*)(v111 + 104) < v289) {
              break;
            }
            BattleInfo_79c6d0_alt1(v111, v289),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            if ((BattleInfo_79d030(v111) & 1) != 0) {
              v290 = (unsigned __int16)*v277;
              v291 = v290;
              if (*v277 == 0) {
                v292 = *(unsigned int*)(v111 + 40);
                v293 = *(_QWORD*)(v111 + 24) + 8 * v292;
                v326 = (int)v292 <= -1;
                v294 = &game_g_empty_item;
                v295 = (__int64*)(v293 + 828);
                if (!v326) {
                  v294 = v295;
                }
                v291 = *(unsigned __int16*)v294;
                if (v291 == 0) {
                  goto LABEL_416;
                }
              }
              if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                        8LL * v291) +
                             73LL) &
                   0xFE) != 2) {
              LABEL_416:
                v296 = *(_QWORD*)(v111 + 56);
                if (v296 == 0) {
                  goto LABEL_425;
                }
                v297 = *(unsigned __int8*)(v296 + 250);
                if (v297 > 0x1F || ((1 << v297) & 0x80000600) == 0) {
                LABEL_421:
                  if ((((unsigned __int16)*GameData_212cf08[0] >>
                        *(_BYTE*)(v296 + 104)) &
                       1) == 0) {
                    goto LABEL_437;
                  }
                  v298 = *(_QWORD*)(v296 + 576);
                  if (v298 == 0) {
                    goto LABEL_437;
                  }
                  goto LABEL_430;
                }
              }
              *(_DWORD*)(v279 +
                         120) = -(int)BattleSide_7a2950_alt1((_QWORD*)v111),
                         v530 = COERCE_AS(
                             __typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            }
            v296 = *(_QWORD*)(v111 + 56);
            if (v296 != 0) {
              goto LABEL_421;
            }
            v290 = (unsigned __int16)*v277;
          LABEL_425:
            if (v290 == 0) {
              v299 = *(unsigned int*)(v111 + 40);
              v300 = *(_QWORD*)(v111 + 24) + 8 * v299;
              v326 = (int)v299 <= -1;
              v301 = &game_g_empty_item;
              v302 = (__int64*)(v300 + 828);
              if (!v326) {
                v301 = v302;
              }
              v290 = *(unsigned __int16*)v301;
              if (v290 == 0) {
                goto LABEL_437;
              }
            }
            v298 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v290);
          LABEL_430:
            v303 = *(unsigned __int8*)(v298 + 72);
            v304 = *(unsigned __int8*)(v298 + 73);
            if (v303 <= 7 && v304 == 7) {
              v306 = *(_DWORD*)(a1 + 11276);
              if ((v306 & 1) == 0 || (v306 & 0xC000000) == 0xC000000) {
                v318 = BattleInfo_7a3000_alt1(),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                nn_os_LockMutex_alt1((__int64)&game_g_random_mutex),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v319 = game_map_MapRandom_instance__ptr[0];
                v320 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                  (unsigned __int64)((__int128*)0x10LL) + 8);
                v321 =
                    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                               (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
                v322 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                  (unsigned __int64)((__int128*)0x10LL)) ^
                       (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((__int128*)0x10LL))
                        << 11);
                *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((__int128*)0x10LL)) =
                    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                               (unsigned __int64)((__int128*)0x10LL) + 4);
                *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v319 + 4) =
                    v320;
                v323 = (v322 >> 8) ^ (v321 >> 19) ^ v322 ^ v321;
                *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v319 + 8) =
                    v321;
                *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v319 + 12) =
                    v323;
                nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                if ((v318 & ~(v318 >> 31)) >= 100) {
                  v324 = 100;
                }
                else {
                  v324 = v318 & ~(v318 >> 31);
                }
                v325 = 100 * v324;
                if (v318 >= 51) {
                  v325 +=
                      (int)(float)((float)(sinf((float)((float)(180 * v324 -
                                                                9000) /
                                                        0x1.9000000000000p+5f) *
                                                0x1.1df46a0000000p-6f) *
                                           (float)v324) *
                                   0x1.aaaaaa0000000p+3f),
                      v530 = COERCE_AS(
                          __typeof__(v530),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                }
                v4 = (_QWORD*)(a1 + 16);
                v326 =
                    (int)((v323 & 0x7FFFFFFF) -
                          10000 *
                              ((unsigned int)((1759218605 *
                                               (unsigned __int64)(v323 &
                                                                  0x7FFFFFFF)) >>
                                              32) >>
                               12)) < v325;
                v5 = (int*)game_g_shared_system_skills_ptr;
                v308 = v326;
                if (v326) {
                  v307 = 2;
                }
                else {
                  v307 = 1;
                }
                goto LABEL_438;
              }
            }
          LABEL_437:
            v307 = 2;
            v308 = 1;
          LABEL_438:
            v309 = *(unsigned __int8*)(v111 + 16);
            v310 = *(unsigned int*)(a1 + 11256);
            if ((_DWORD)v310 != 0) {
              v311 = (_DWORD*)(a1 + 3072);
              while (1) {
                v312 = *((unsigned __int8*)v311 - 4);
                v313 = v312 == 16 || v312 == 13;
                if (v313 && *((unsigned __int8*)v311 - 6) == v309 &&
                    (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                          8LL * (*v311 & 0xFFF)) +
                               754LL) &
                     0x100) != 0) {
                  break;
                }
                --v310;
                v311 += 16;
                if (v310 == 0) {
                  goto LABEL_449;
                }
              }
              v307 |= 0x10000u;
            }
          LABEL_449:
            v314 = *(_QWORD*)(a1 + 11264);
            LOBYTE(v549_.v549) = *(_BYTE*)(v111 + 16);
            LOBYTE(v552_.v552[0]) = *(_BYTE*)(v314 + 760LL * v309 + 33);
            v315 = BattleScenes_7a7840(a1 + 3056, 4, &v549_.v549, v552_.v552),
            v530 = COERCE_AS(__typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v315[5] = v278;
            v316 = *(_QWORD*)(v111 + 56);
            if (v316 != 0) {
              LODWORD(v316) = *(_WORD*)(v316 + 16) & 0xFFF;
            }
            *((_DWORD*)v315 + 2) = v316;
            *(_DWORD*)(GameHr_7a76a0((__int64)v315, v111, v279) +
                       12) = v307,
                       v530 = COERCE_AS(
                           __typeof__(v530),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            if (v308 != 0) {
              v280 = (__int64*)(v111 + 44);
              if (*v277 == 0) {
                v317 = *(unsigned int*)(v111 + 40);
                if ((v317 & 0x80000000) != 0) {
                  v280 = &game_g_empty_item;
                }
                else {
                  v280 = (__int64*)(*(_QWORD*)(v111 + 24) + 8 * v317 + 828);
                }
              }
              BattleInfo_795b40_alt1((_QWORD*)a1, v279, v280),
                  v530 = COERCE_AS(
                      __typeof__(v530),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            }
            ++v278;
            v85 = (_QWORD*)(a1 + 72);
          } while (v278 < (int)GameRoutine_7a3330_alt1((_QWORD*)v111));
        }
      LABEL_470:
        v327 = *(_DWORD*)(a1 + 11256);
        v10 = __OFSUB__(v327, 1);
        v328 = v327 - 1;
        if (v328 < 0 != v10 ||
            v552_.v556[64 * (unsigned __int64)(unsigned int)v328] != 23) {
          LOBYTE(v549_.v549) = 4;
          LOBYTE(v552_.v552[0]) = *(_BYTE*)(*(_QWORD*)(a1 + 11264) + 3073LL);
          BattleScenes_7a7840((__int64)(v85 + 373), 23, &v549_.v549,
                              v552_.v552),
              v530 = COERCE_AS(__typeof__(v530),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        v88 = v537;
        v274 = 1;
      LABEL_474:
        v330 = *(_QWORD*)(a1 + 152);
        v329 = *(_QWORD*)(a1 + 160);
        v89 = v536;
        v331 = 2 * (v329 - v330) - 1;
        if (v329 == v330) {
          v331 = 0;
        }
        *(_BYTE*)(v93 + 17) = v535;
        *(_BYTE*)(v534 + 17) = v533;
        v333 = *(_QWORD*)(a1 + 176);
        v332 = *(_QWORD*)(a1 + 184);
        *(_QWORD*)(a1 + 184) = v332 - 1;
        if ((unsigned __int64)(v331 - (v332 + v333) + 1) >= 0x20) {
          v334 = *(_QWORD*)(v329 - 8);
          if (v334 != 0) {
            v335 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v335 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v335, v334),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v329 = *(_QWORD*)(a1 + 160);
          }
          *(_QWORD*)(a1 + 160) = v329 - 8;
        }
        v336 = *(_QWORD*)(a1 + 912);
        v337 = *(_QWORD*)(a1 + 920);
        v338 = *(_QWORD*)(a1 + 936);
        v339 = v337 - v336;
        v105 = v337 == v336;
        v340 = *(_QWORD*)(a1 + 944);
        v341 = 2 * v339 - 1;
        if (v105) {
          v341 = 0;
        }
        *(_QWORD*)(a1 + 944) = v340 - 1;
        if ((unsigned __int64)(v341 - (v340 + v338) + 1) >= 0x20) {
          v342 = *(_QWORD*)(v337 - 8);
          if (v342 != 0) {
            v343 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v343 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v343, v342),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v337 = *(_QWORD*)(a1 + 920);
          }
          *(_QWORD*)(a1 + 920) = v337 - 8;
        }
        v344 = *(_QWORD*)(a1 + 1672);
        v345 = *(_QWORD*)(a1 + 1680);
        v346 = *(_QWORD*)(a1 + 1696);
        v347 = v345 - v344;
        v105 = v345 == v344;
        v348 = *(_QWORD*)(a1 + 1704);
        v349 = 2 * v347 - 1;
        if (v105) {
          v349 = 0;
        }
        *(_QWORD*)(a1 + 1704) = v348 - 1;
        if ((unsigned __int64)(v349 - (v348 + v346) + 1) >= 0x20) {
          v350 = *(_QWORD*)(v345 - 8);
          if (v350 != 0) {
            v351 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v351 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v351, v350),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v345 = *(_QWORD*)(a1 + 1680);
          }
          *(_QWORD*)(a1 + 1680) = v345 - 8;
        }
        v352 = *(_QWORD*)(a1 + 2432);
        v353 = *(_QWORD*)(a1 + 2440);
        v354 = *(_QWORD*)(a1 + 2456);
        v355 = v353 - v352;
        v105 = v353 == v352;
        v356 = *(_QWORD*)(a1 + 2464);
        v357 = 2 * v355 - 1;
        if (v105) {
          v357 = 0;
        }
        *(_QWORD*)(a1 + 2464) = v356 - 1;
        if ((unsigned __int64)(v357 - (v356 + v354) + 1) >= 0x20) {
          v358 = *(_QWORD*)(v353 - 8);
          if (v358 != 0) {
            v359 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v359 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v359, v358),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v353 = *(_QWORD*)(a1 + 2440);
          }
          *(_QWORD*)(a1 + 2440) = v353 - 8;
        }
        if (v274 == 0) {
          break;
        }
        v84 = v547;
      LABEL_508:
        if (v88 >= v84 - 1) {
          ++v88;
        }
        else {
          v360 = &v545[2 * v88++];
          if (v360[1] != v545[2 * v88 + 1] && *v85 != 0) {
            v363 = *(_QWORD*)(a1 + 152);
            v362 = *(_QWORD*)(a1 + 160);
            v364 = v362 - v363;
            v105 = v362 == v363;
            v366 = *(_QWORD*)(a1 + 176);
            v365 = *(_QWORD*)(a1 + 184);
            v367 = 2 * v364 - 1;
            if (v105) {
              v367 = 0;
            }
            *(_QWORD*)(a1 + 184) = v365 - 1;
            if ((unsigned __int64)(v367 - (v365 + v366) + 1) >= 0x20) {
              v368 = *(_QWORD*)(v362 - 8);
              if (v368 != 0) {
                v369 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v369 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v369, v368),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v362 = *(_QWORD*)(a1 + 160);
              }
              *(_QWORD*)(a1 + 160) = v362 - 8;
            }
            v370 = *(_QWORD*)(a1 + 912);
            v371 = *(_QWORD*)(a1 + 920);
            v372 = *(_QWORD*)(a1 + 936);
            v373 = v371 - v370;
            v105 = v371 == v370;
            v374 = *(_QWORD*)(a1 + 944);
            v375 = 2 * v373 - 1;
            if (v105) {
              v375 = 0;
            }
            *(_QWORD*)(a1 + 944) = v374 - 1;
            if ((unsigned __int64)(v375 - (v374 + v372) + 1) >= 0x20) {
              v376 = *(_QWORD*)(v371 - 8);
              if (v376 != 0) {
                v377 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v377 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v377, v376),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v371 = *(_QWORD*)(a1 + 920);
              }
              *(_QWORD*)(a1 + 920) = v371 - 8;
            }
            v378 = *(_QWORD*)(a1 + 1672);
            v379 = *(_QWORD*)(a1 + 1680);
            v380 = *(_QWORD*)(a1 + 1696);
            v381 = v379 - v378;
            v105 = v379 == v378;
            v382 = *(_QWORD*)(a1 + 1704);
            v383 = 2 * v381 - 1;
            if (v105) {
              v383 = 0;
            }
            *(_QWORD*)(a1 + 1704) = v382 - 1;
            if ((unsigned __int64)(v383 - (v382 + v380) + 1) >= 0x20) {
              v384 = *(_QWORD*)(v379 - 8);
              if (v384 != 0) {
                v385 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v385 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v385, v384),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v379 = *(_QWORD*)(a1 + 1680);
              }
              *(_QWORD*)(a1 + 1680) = v379 - 8;
            }
            v386 = *(_QWORD*)(a1 + 2432);
            v387 = *(_QWORD*)(a1 + 2440);
            v388 = *(_QWORD*)(a1 + 2456);
            v389 = v387 - v386;
            v105 = v387 == v386;
            v390 = *(_QWORD*)(a1 + 2464);
            v391 = 2 * v389 - 1;
            if (v105) {
              v391 = 0;
            }
            *(_QWORD*)(a1 + 2464) = v390 - 1;
            if ((unsigned __int64)(v391 - (v390 + v388) + 1) >= 0x20) {
              v392 = *(_QWORD*)(v387 - 8);
              if (v392 != 0) {
                v393 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v393 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v393, v392),
                    v530 = COERCE_AS(
                        __typeof__(v530),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v387 = *(_QWORD*)(a1 + 2440);
              }
              *(_QWORD*)(a1 + 2440) = v387 - 8;
            }
            GameRoutine_7a3440_alt1(v4),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            GameRoutine_7a3440_alt1((_QWORD*)(a1 + 776)),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            GameRoutine_7a3440_alt1((_QWORD*)(a1 + 1536)),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            GameRoutine_7a3440_alt1((_QWORD*)(a1 + 2296)),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            game_map_799ca0_alt2((__int64)v4, 0),
                v530 =
                    COERCE_AS(__typeof__(v530),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v394 = *(_QWORD*)(a1 + 11264);
            LOBYTE(v549_.v549) = *(_BYTE*)(a1 + 32);
            LOBYTE(v552_.v552[0]) =
                *(_BYTE*)(v394 + 760LL * (unsigned __int8)v549_.v549 + 33);
            v395 = BattleScenes_7a7840((__int64)(v85 + 373), 17, &v549_.v549,
                                       v552_.v552),
            v530 = COERCE_AS(__typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v396 = v531;
            if (v531 != 0) {
              v396 = *(_WORD*)(v531 + 16) & 0xFFF;
            }
            v395[2] = v396;
            v397 = BattleSide_7a13b0_alt1((__int64)v4, *(_DWORD*)(a1 + 108)),
            v530 = COERCE_AS(__typeof__(v530),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v84 = v547;
            if ((v397 & 1) == 0 && v88 < v547) {
              v398 = *(unsigned __int8*)(a1 + 32);
              v399 = v89;
              v400 = v88;
              do {
                if (*(unsigned __int8*)v399 == v398) {
                  *(_BYTE*)v399 = 4;
                  v84 = v547;
                }
                ++v400;
                v399 += 2;
              } while (v400 < v84);
            }
          }
        }
        v89 += 2;
      } while (v88 < v84);
    }
    if (*v85 != v531) {
      game_map_799ca0_alt2((__int64)v4, v531),
          v530 = COERCE_AS(__typeof__(v530),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  v411 = *(_QWORD*)(a1 + 152);
  v410 = *(_QWORD*)(a1 + 160);
  v412 = v410 - v411;
  v105 = v410 == v411;
  v414 = *(_QWORD*)(a1 + 176);
  v413 = *(_QWORD*)(a1 + 184);
  v415 = 2 * v412 - 1;
  if (v105) {
    v415 = 0;
  }
  *(_QWORD*)(a1 + 184) = v413 - 1;
  if ((unsigned __int64)(v415 - (v413 + v414) + 1) >= 0x20) {
    v416 = *(_QWORD*)(v410 - 8);
    if (v416 != 0) {
      v417 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v417 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v417, v416),
          v530 = COERCE_AS(__typeof__(v530),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v410 = *(_QWORD*)(a1 + 160);
    }
    *(_QWORD*)(a1 + 160) = v410 - 8;
  }
  v418 = *(_QWORD*)(a1 + 912);
  v419 = *(_QWORD*)(a1 + 920);
  v420 = *(_QWORD*)(a1 + 936);
  v421 = v419 - v418;
  v105 = v419 == v418;
  v422 = *(_QWORD*)(a1 + 944);
  v423 = 2 * v421 - 1;
  if (v105) {
    v423 = 0;
  }
  *(_QWORD*)(a1 + 944) = v422 - 1;
  if ((unsigned __int64)(v423 - (v422 + v420) + 1) >= 0x20) {
    v424 = *(_QWORD*)(v419 - 8);
    if (v424 != 0) {
      v425 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v425 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v425, v424),
          v530 = COERCE_AS(__typeof__(v530),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v419 = *(_QWORD*)(a1 + 920);
    }
    *(_QWORD*)(a1 + 920) = v419 - 8;
  }
  v426 = *(_QWORD*)(a1 + 1672);
  v427 = *(_QWORD*)(a1 + 1680);
  v428 = *(_QWORD*)(a1 + 1696);
  v429 = v427 - v426;
  v105 = v427 == v426;
  v430 = *(_QWORD*)(a1 + 1704);
  v431 = 2 * v429 - 1;
  if (v105) {
    v431 = 0;
  }
  *(_QWORD*)(a1 + 1704) = v430 - 1;
  if ((unsigned __int64)(v431 - (v430 + v428) + 1) >= 0x20) {
    v432 = *(_QWORD*)(v427 - 8);
    if (v432 != 0) {
      v433 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v433 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v433, v432),
          v530 = COERCE_AS(__typeof__(v530),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v427 = *(_QWORD*)(a1 + 1680);
    }
    *(_QWORD*)(a1 + 1680) = v427 - 8;
  }
  v434 = *(_QWORD*)(a1 + 2432);
  v435 = *(_QWORD*)(a1 + 2440);
  v436 = *(_QWORD*)(a1 + 2456);
  v437 = v435 - v434;
  v105 = v435 == v434;
  v438 = *(_QWORD*)(a1 + 2464);
  v439 = 2 * v437 - 1;
  if (v105) {
    v439 = 0;
  }
  *(_QWORD*)(a1 + 2464) = v438 - 1;
  if ((unsigned __int64)(v439 - (v438 + v436) + 1) >= 0x20) {
    v440 = *(_QWORD*)(v435 - 8);
    if (v440 != 0) {
      v441 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v441 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v441, v440),
          v530 = COERCE_AS(__typeof__(v530),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v435 = *(_QWORD*)(a1 + 2440);
    }
    *(_QWORD*)(a1 + 2440) = v435 - 8;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21d41b0) != 0) {
    GameRoutine_799290(GameData_21d40b8_alt1),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    __cxa_guard_release_alt1((__int64)&GameData_21d41b0),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v442 = *(_QWORD*)(a1 + 184);
  if (v442 != 0) {
    v443 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 152) +
                                8 * ((unsigned __int64)(v442 +
                                                        *(_QWORD*)(a1 + 176) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v442 + *(_DWORD*)(a1 + 176) - 1) & 0xF));
  }
  else {
    v443 = GameData_21d40b8_alt1;
  }
  memcpy_alt1((__int64)v443, a1 + 192, 0xF4u),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21d41b0) != 0) {
    GameRoutine_799290(GameData_21d40b8_alt1),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    __cxa_guard_release_alt1((__int64)&GameData_21d41b0),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v444 = *(_QWORD*)(a1 + 944);
  if (v444 != 0) {
    v445 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 912) +
                                8 * ((unsigned __int64)(v444 +
                                                        *(_QWORD*)(a1 + 936) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v444 + *(_DWORD*)(a1 + 936) - 1) & 0xF));
  }
  else {
    v445 = GameData_21d40b8_alt1;
  }
  memcpy_alt1((__int64)v445, a1 + 952, 0xF4u),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21d41b0) != 0) {
    GameRoutine_799290(GameData_21d40b8_alt1),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    __cxa_guard_release_alt1((__int64)&GameData_21d41b0),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v446 = *(_QWORD*)(a1 + 1704);
  if (v446 != 0) {
    v447 =
        (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1672) +
                             8 * ((unsigned __int64)(v446 +
                                                     *(_QWORD*)(a1 + 1696) -
                                                     1) >>
                                  4)) +
                  244LL * (((_DWORD)v446 + *(_DWORD*)(a1 + 1696) - 1) & 0xF));
  }
  else {
    v447 = GameData_21d40b8_alt1;
  }
  memcpy_alt1((__int64)v447, a1 + 1712, 0xF4u),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21d41b0) != 0) {
    GameRoutine_799290(GameData_21d40b8_alt1),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    __cxa_guard_release_alt1((__int64)&GameData_21d41b0),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v448 = *(_QWORD*)(a1 + 2464);
  if (v448 != 0) {
    v449 =
        (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 2432) +
                             8 * ((unsigned __int64)(v448 +
                                                     *(_QWORD*)(a1 + 2456) -
                                                     1) >>
                                  4)) +
                  244LL * (((_DWORD)v448 + *(_DWORD*)(a1 + 2456) - 1) & 0xF));
  }
  else {
    v449 = GameData_21d40b8_alt1;
  }
  memcpy_alt1((__int64)v449, a1 + 2472, 0xF4u),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((*(_BYTE*)(a1 + 11276) & 0x40) == 0) {
    v450 = *(_QWORD**)(a1 + 40);
    if (v450 != nullptr) {
      v451 = *(_QWORD*)(a1 + 72);
      if (v451 != 0) {
        v452 = (unsigned __int16*)(a1 + 60);
        if (*(_WORD*)(a1 + 60) == 0) {
          v453 = *(unsigned int*)(a1 + 56);
          if ((v453 & 0x80000000) != 0) {
            v452 = (unsigned __int16*)&game_g_empty_item;
          }
          else {
            v452 = (unsigned __int16*)&v450[v453 + 103] + 2;
          }
        }
        v475 = GameRoutine_6fc470_alt1(v451, v450, v452),
        v530 = COERCE_AS(__typeof__(v530),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (v475 != 0) {
          BattleInfo_79c6d0_alt1((__int64)v4, v475),
              v530 = COERCE_AS(__typeof__(v530),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v476 = *(_QWORD*)(a1 + 11264);
          LOBYTE(v552_.v552[0]) = *(_BYTE*)(a1 + 32);
          LOBYTE(v545[0]) =
              *(_BYTE*)(v476 + 760LL * LOBYTE(v552_.v552[0]) + 33);
          BattleScenes_7a7840(a1 + 3056, 21, v552_.v552, v545),
              v530 = COERCE_AS(__typeof__(v530),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
      }
    }
  }
  v545[0] = 4096;
  game_map_795820_alt2((unsigned __int8*)a1, (__int64)v545),
      v530 = COERCE_AS(__typeof__(v530),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
}

__int64 (***game_map_795820(unsigned __int8* a1, _DWORD* a2))(_QWORD)
{
  unsigned __int8* v2;
  __int64 (***result)(_QWORD);
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8 v10;
  char v11;

  v2 = a1 + 16;
  result = (__int64 (***)(_QWORD))BattleInfo_795920(
      (__int64)a1, a2, (__int64)(a1 + 16), (__int64)(a1 + 776));
  if ((a1[11278] & 1) != 0) {
    v6 = a1[32];
    v7 = v6 > 3 ? 4LL : GameData_1b01628[v6];
    if ((v8 = (__int64)&v2[760 * v7], (v9 = *(_QWORD*)(v8 + 24)) != 0) &&
            *(_QWORD*)(v9 + 392) != 0 ||
        (*(_BYTE*)(*(_QWORD*)(v8 + 8) + 11277LL) & 0x80) == 0 &&
            (result = *(__int64 (****)(_QWORD))(v8 + 32)) != nullptr &&
            ((unsigned __int8)(result =
                                   (__int64 (***)(_QWORD))(**result)(result)) &
             1) != 0) {
      v10 = a1[793];
      v11 = *(_BYTE*)(v8 + 17);
      a1[793] = *(_BYTE*)(v8 + 16);
      *(_BYTE*)(v8 + 17) = a1[792];
      result = (__int64 (***)(_QWORD))BattleInfo_795920((__int64)a1, a2, v8,
                                                        (__int64)(a1 + 776));
      a1[793] = v10;
      *(_BYTE*)(v8 + 17) = v11;
    }
  }
  return result;
}

__int64 game_map_799aa0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;

  *(_QWORD*)(result + 56) = a2;
  if (a2 != 0) {
    v2 = *(_QWORD*)(a2 + 576);
    if (v2 != 0) {
      *(_QWORD*)(result + 44) = 0;
      v3 = *(unsigned __int16*)(v2 + 16);
      *(_DWORD*)(result + 48) = 1;
      *(_WORD*)(result + 44) = v3;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v3) +
                    73LL) == 17) {
        v4 = result;
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
        *(_DWORD*)(v4 + 48) =
            *(_DWORD*)(v4 + 48) & 0xFFFFC00F |
            (16 *
             (((16 * (v9 - 1000 * ((v9 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
              0x3FF));
        return v4;
      }
    }
  }
  return result;
}

__int64 game_map_799b90(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;

  *(_QWORD*)(a1 + 64) = a2;
  if (a2 != 0) {
    v3 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 584LL))(
        a2, *(_QWORD*)(a1 + 24));
    if (v3 != 0) {
      *(_QWORD*)(a1 + 44) = 0;
      v4 = *(unsigned __int16*)(v3 + 16);
      *(_DWORD*)(a1 + 48) = 1;
      *(_WORD*)(a1 + 44) = v4;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v4) +
                    73LL) == 17) {
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
        *(_DWORD*)(a1 + 48) =
            *(_DWORD*)(a1 + 48) & 0xFFFFC00F |
            (16 *
             (((16 * (v9 - 1000 * ((v9 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
              0x3FF));
      }
    }
  }
  return a1;
}

unsigned __int64 game_map_799ca0(unsigned __int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int* v44;
  __int64 v45;
  int v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  __int64 v51;
  __int64 v52;
  int v54;

  *(_QWORD*)(a1 + 56) = a2;
  if (a2 != 0) {
    v3 = *(_QWORD*)(a2 + 576);
    if (v3 != 0) {
      *(_QWORD*)(a1 + 44) = 0;
      v4 = *(unsigned __int16*)(v3 + 16);
      *(_DWORD*)(a1 + 48) = 1;
      *(_WORD*)(a1 + 44) = v4;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v4) +
                    73LL) == 17) {
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
        *(_DWORD*)(a1 + 48) =
            *(_DWORD*)(a1 + 48) & 0xFFFFC00F |
            (16 *
             (((16 * (v9 - 1000 * ((v9 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
              0x3FF));
      }
    }
  }
  v10 = *(_QWORD*)(a1 + 520);
  *(_DWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 528) = v10;
  *(_QWORD*)(a1 + 560) = *(_QWORD*)(a1 + 552);
  UnitSkillList_84cf20(a1 + 520, a1 + 424, 1);
  v11 = *(_QWORD*)(a1 + 56);
  if (v11 != 0) {
    LODWORD(v11) = *(_WORD*)(v11 + 16) & 0xFFF;
  }
  v12 = (_QWORD*)(a1 + 600);
  v54 = v11;
  if ((UnitSkillList_84cc00((__int64*)(a1 + 520), &v54, 1) & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 560);
    v14 = *(_QWORD*)(a1 + 552);
    *v12 = 0;
    *(_QWORD*)(a1 + 608) = 0;
    v15 = v13 - v14;
    if ((int)((unsigned __int64)(v13 - v14) >> 2) >= 1) {
      v16 = (int)(v15 >> 2);
      v17 = v16 <= 1 ? 1LL : (int)(v15 >> 2);
      v18 = *GameData_212c880[0];
      if (v16 >= 2) {
        v24 = (int*)(v14 + 4);
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        do {
          v23 += 2;
          v25 = *(_QWORD*)(*(_QWORD*)(v18 + 64) + 8LL * (*(v24 - 1) & 0xFFF));
          v26 = v22 | (1 << *(_BYTE*)(v25 + 104));
          *(_WORD*)(a1 + 600) = v26;
          v27 = (1LL << *(_BYTE*)(v25 + 250)) | v21;
          *(_QWORD*)(a1 + 608) = v27;
          v28 = (1 << *(_BYTE*)(v25 + 115)) | v20;
          *(_DWORD*)(a1 + 604) = v28;
          v29 = *(unsigned __int16*)(*(_QWORD*)(v25 + 24) + 1064LL) | v19;
          *(_WORD*)(a1 + 602) = v29;
          v30 = *v24;
          v24 += 2;
          v31 = *(_QWORD*)(*(_QWORD*)(v18 + 64) + 8LL * (v30 & 0xFFF));
          v22 = v26 | (1 << *(_BYTE*)(v31 + 104));
          *(_WORD*)(a1 + 600) = v22;
          v21 = (1LL << *(_BYTE*)(v31 + 250)) | v27;
          *(_QWORD*)(a1 + 608) = v21;
          v20 = (1 << *(_BYTE*)(v31 + 115)) | v28;
          *(_DWORD*)(a1 + 604) = v20;
          v19 = *(unsigned __int16*)(*(_QWORD*)(v31 + 24) + 1064LL) | v29;
          *(_WORD*)(a1 + 602) = v19;
        } while ((v17 & 0x7FFFFFFFFFFFFFFELL) != v23);
      }
      else {
        LOWORD(v19) = 0;
        v20 = 0;
        v21 = 0;
        LOWORD(v22) = 0;
        v23 = 0;
      }
      if ((v17 & 1) != 0) {
        v32 = *(_QWORD*)(*(_QWORD*)(v18 + 64) +
                         8LL * (*(_DWORD*)(v14 + 4 * v23) & 0xFFF));
        *(_WORD*)(a1 + 600) = v22 | (1 << *(_BYTE*)(v32 + 104));
        *(_QWORD*)(a1 + 608) = (1LL << *(_BYTE*)(v32 + 250)) | v21;
        *(_DWORD*)(a1 + 604) = (1 << *(_BYTE*)(v32 + 115)) | v20;
        *(_WORD*)(a1 + 602) = *(_WORD*)(*(_QWORD*)(v32 + 24) + 1064LL) | v19;
      }
    }
  }
  UnitSkillList_84e640(a1 + 520);
  UnitSkillList_84e760(a1 + 520);
  v33 = *(int**)(a1 + 560);
  v34 = *(_QWORD*)(a1 + 552);
  *v12 = 0;
  *(_QWORD*)(a1 + 608) = 0;
  v35 = (__int64)v33 - v34;
  if ((int)(((unsigned __int64)v33 - v34) >> 2) >= 1) {
    v36 = (int)(v35 >> 2);
    v37 = v36 <= 1 ? 1LL : (int)(v35 >> 2);
    v38 = *GameData_212c880[0];
    if (v36 >= 2) {
      v44 = (int*)(v34 + 4);
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      do {
        v43 += 2;
        v45 = *(_QWORD*)(*(_QWORD*)(v38 + 64) + 8LL * (*(v44 - 1) & 0xFFF));
        v46 = v42 | (1 << *(_BYTE*)(v45 + 104));
        *(_WORD*)(a1 + 600) = v46;
        v47 = (1LL << *(_BYTE*)(v45 + 250)) | v41;
        *(_QWORD*)(a1 + 608) = v47;
        v48 = (1 << *(_BYTE*)(v45 + 115)) | v40;
        *(_DWORD*)(a1 + 604) = v48;
        v49 = *(unsigned __int16*)(*(_QWORD*)(v45 + 24) + 1064LL) | v39;
        *(_WORD*)(a1 + 602) = v49;
        v50 = *v44;
        v44 += 2;
        v51 = *(_QWORD*)(*(_QWORD*)(v38 + 64) + 8LL * (v50 & 0xFFF));
        v42 = v46 | (1 << *(_BYTE*)(v51 + 104));
        *(_WORD*)(a1 + 600) = v42;
        v41 = (1LL << *(_BYTE*)(v51 + 250)) | v47;
        *(_QWORD*)(a1 + 608) = v41;
        v40 = (1 << *(_BYTE*)(v51 + 115)) | v48;
        *(_DWORD*)(a1 + 604) = v40;
        v39 = *(unsigned __int16*)(*(_QWORD*)(v51 + 24) + 1064LL) | v49;
        *(_WORD*)(a1 + 602) = v39;
      } while ((v37 & 0x7FFFFFFFFFFFFFFELL) != v43);
    }
    else {
      LOWORD(v39) = 0;
      v40 = 0;
      v41 = 0;
      LOWORD(v42) = 0;
      v43 = 0;
    }
    if ((v37 & 1) != 0) {
      v52 = *(_QWORD*)(*(_QWORD*)(v38 + 64) +
                       8LL * (*(_DWORD*)(v34 + 4 * v43) & 0xFFF));
      *(_WORD*)(a1 + 600) = v42 | (1 << *(_BYTE*)(v52 + 104));
      *(_QWORD*)(a1 + 608) = (1LL << *(_BYTE*)(v52 + 250)) | v41;
      *(_DWORD*)(a1 + 604) = (1 << *(_BYTE*)(v52 + 115)) | v40;
      *(_WORD*)(a1 + 602) = *(_WORD*)(*(_QWORD*)(v52 + 24) + 1064LL) | v39;
    }
  }
  if ((int*)v34 != v33) {
    GameRoutine_8517e0(v34, v33, (2 * __clz(v35 >> 2)) ^ 0x7E, 1);
  }
  game_map_BattleUtil_GetFactorSkill(a1);
  BattleInfo_79ae60(a1);
  game_map_BattleSide_GetHealPower(a1);
  return a1;
}

__int64 game_map_79cbb0(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned __int64 v8;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  int v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v28;
  int v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  int v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  bool v40;
  __int64 v41;
  void* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int16 v45;
  __int16 v46;
  float v47;
  float v48;
  float v49;
  int v50;
  float v51;
  int v52;
  int v53;
  int v54;
  __int64 v55;
  void* v56;
  unsigned __int64 v57;
  float v58;
  float v59;
  __int16 v60;
  int v61;
  int v62;
  int v63;
  __int64 v64;
  int v65;
  int v66;
  int v67;

  v1 = *(unsigned __int8*)(a1 + 17);
  if (v1 > 3) {
    v2 = 4;
  }
  else {
    v2 = GameData_1b01588[v1];
  }
  v3 = game_g_shared_system_skills_ptr;
  v4 = *(_QWORD*)(a1 + 8) + 760 * v2;
  v5 = v4 + 16;
  v6 = *(_QWORD*)(v4 + 40);
  v7 =
      *(_DWORD*)((char*)((_UNKNOWN**)0x38LL) + game_g_shared_system_skills_ptr);
  v8 = v7 & 0xFFF;
  v67 = v7 & 0xFFF;
  if ((v7 & 0xFFF) != 0 && v6 != 0) {
    v10 = *(_QWORD*)(v5 + 8);
    v11 = *(_DWORD*)(v10 + 11276);
    if ((v11 & 0x20) == 0) {
      v12 = *(_QWORD*)(v5 + 520);
      v13 = (*(_QWORD*)(v5 + 528) - v12) >> 2;
      if (v13 >= (v8 >> 5) + 1 &&
          ((*(_DWORD*)(v12 + 4LL * (unsigned int)(v8 >> 5)) >> v7) & 1) != 0) {
        v14 =
            *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (v7 & 0xFFF));
        v15 = *(unsigned __int16*)(v10 + 11288);
        if ((v11 & 0x10000) != 0) {
          v16 = *(unsigned int*)((char*)((_UNKNOWN*)0x128LL) +
                                 game_g_shared_system_skills_ptr);
          v17 = (v16 >> 5) & 0x7F;
          if (v13 >= v17 + 1 &&
              ((*(_DWORD*)(v12 + 4 * ((v16 >> 5) & 0x7F)) >> v16) & 1) != 0) {
            v15 |= 0x200u;
          }
          v18 = v10 + 760LL * *(unsigned __int8*)(v5 + 17);
          v19 = *(_QWORD*)(v18 + 544);
          v20 = *(_QWORD*)(v18 + 536);
          if (v17 + 1 <= (unsigned __int64)((v19 - v20) >> 2) &&
              ((*(_DWORD*)(v20 + 4 * ((v16 >> 5) & 0x7F)) >> v16) & 1) != 0) {
            v15 |= 0x200u;
          }
        }
        if ((v15 & ~*(unsigned __int16*)(v14 + 248)) == 0) {
          v21 = a1;
          v22 = game_HasActiveSkill_843580(
              &v67, v5 + 520, v10 + 760LL * *(unsigned __int8*)(v5 + 17) + 536);
          a1 = v21;
          if (v22) {
            return 0;
          }
        }
      }
    }
  }
  v24 = *(_DWORD*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + v3 + 4);
  v25 = *(_QWORD*)(a1 + 24);
  v26 = v24 & 0xFFF;
  v66 = v24 & 0xFFF;
  if ((v24 & 0xFFF) != 0 && v25 != 0) {
    v28 = *(_QWORD*)(a1 + 8);
    v29 = *(_DWORD*)(v28 + 11276);
    if ((v29 & 0x20) == 0) {
      v30 = *(_QWORD*)(a1 + 520);
      v31 = (*(_QWORD*)(a1 + 528) - v30) >> 2;
      if (v31 >= (v26 >> 5) + 1 &&
          ((*(_DWORD*)(v30 + 4LL * (unsigned int)(v26 >> 5)) >> v24) & 1) !=
              0) {
        v32 =
            *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (v24 & 0xFFF));
        v33 = *(unsigned __int16*)(v28 + 11288);
        if ((v29 & 0x10000) != 0) {
          v34 = *(unsigned int*)((char*)((_UNKNOWN*)0x128LL) + v3);
          v35 = (v34 >> 5) & 0x7F;
          if (v31 >= v35 + 1 &&
              ((*(_DWORD*)(v30 + 4 * ((v34 >> 5) & 0x7F)) >> v34) & 1) != 0) {
            v33 |= 0x200u;
          }
          v36 = v28 + 760LL * *(unsigned __int8*)(a1 + 17);
          v37 = *(_QWORD*)(v36 + 544);
          v38 = *(_QWORD*)(v36 + 536);
          if (v35 + 1 <= (unsigned __int64)((v37 - v38) >> 2) &&
              ((*(_DWORD*)(v38 + 4 * ((v34 >> 5) & 0x7F)) >> v34) & 1) != 0) {
            v33 |= 0x200u;
          }
        }
        if ((v33 & ~*(unsigned __int16*)(v32 + 248)) == 0) {
          v39 = a1;
          v40 = game_HasActiveSkill_843580(
              &v66, a1 + 520, v28 + 760LL * *(unsigned __int8*)(a1 + 17) + 536);
          a1 = v39;
          if (v40) {
            return 100;
          }
        }
      }
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                            memory_order_acquire) &
       1) == 0) {
    v64 = a1;
    v65 = __cxa_guard_acquire(&GameData_21d40b0);
    a1 = v64;
    if (v65 != 0) {
      GameRoutine_799290(&GameData_21d3fb8);
      __cxa_guard_release(&GameData_21d40b0);
      a1 = v64;
    }
  }
  v41 = *(_QWORD*)(a1 + 168);
  if (v41 != 0) {
    v42 =
        (void*)(*(_QWORD*)(*(_QWORD*)(a1 + 136) +
                           8 * ((unsigned __int64)(v41 + *(_QWORD*)(a1 + 160) -
                                                   1) >>
                                4)) +
                244LL * (((_DWORD)v41 + *(_DWORD*)(a1 + 160) - 1) & 0xF));
    v43 = *((_QWORD*)v42 + 12);
    if ((v43 & 0x800000000000LL) == 0) {
    LABEL_41:
      v44 = HIDWORD(v43) & 0x7FFF;
      goto LABEL_54;
    }
  }
  else {
    v42 = &GameData_21d3fb8;
    v43 = GameData_21d4018;
    if ((GameData_21d4018 & 0x800000000000LL) == 0) {
      goto LABEL_41;
    }
  }
  v45 = *((_WORD*)v42 + 115);
  v46 = *((_WORD*)v42 + 106);
  v48 = *((float*)v42 + 26);
  v47 = *((float*)v42 + 27);
  v50 = (SHIDWORD(v43) >> 16) & (SHIDWORD(v43) >> 31);
  v51 = (float)(__int16)(v45 + WORD1(v43) + v46);
  if ((v43 & 0x8000u) == 0LL) {
    v52 = 999;
  }
  else {
    v52 = 0;
  }
  if ((v43 & 0x8000u) == 0LL) {
    v50 = (SHIDWORD(v43) >> 16) & ~(SHIDWORD(v43) >> 31);
  }
  v49 = (float)(__int16)v43;
  v53 = (int)(float)((float)(v51 + (float)(v49 * v48)) * v47);
  if (v52 >= v53) {
    v54 = (int)(float)((float)(v51 + (float)(v49 * v48)) * v47);
  }
  else {
    v54 = v52;
  }
  if (v50 <= v53) {
    LODWORD(v44) = v54;
  }
  else {
    LODWORD(v44) = v50;
  }
LABEL_54:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21d40b0) != 0) {
    GameRoutine_799290(&GameData_21d3fb8);
    __cxa_guard_release(&GameData_21d40b0);
  }
  v55 = *(_QWORD*)(v5 + 168);
  if (v55 == 0) {
    v56 = &GameData_21d3fb8;
    v57 = GameData_21d4048;
    if ((GameData_21d4048 & 0x800000000000LL) == 0) {
      goto LABEL_57;
    }
  LABEL_59:
    v59 = *((float*)v56 + 38);
    v58 = *((float*)v56 + 39);
    v60 = *((_WORD*)v56 + 118) + WORD1(v57) + *((_WORD*)v56 + 109);
    LODWORD(v56) = (SHIDWORD(v57) >> 16) & (SHIDWORD(v57) >> 31);
    if ((v57 & 0x8000u) == 0LL) {
      v61 = 999;
    }
    else {
      v61 = 0;
    }
    if ((v57 & 0x8000u) == 0LL) {
      LODWORD(v56) = (SHIDWORD(v57) >> 16) & ~(SHIDWORD(v57) >> 31);
    }
    v62 =
        (int)(float)((float)((float)v60 + (float)((float)(__int16)v57 * v59)) *
                     v58);
    if (v61 >= v62) {
      v63 = v62;
    }
    else {
      v63 = v61;
    }
    if ((int)v56 <= v62) {
      LODWORD(v56) = v63;
    }
    return (unsigned int)(v44 - (_DWORD)v56);
  }
  v56 = (void*)(*(_QWORD*)(*(_QWORD*)(v5 + 136) +
                           8 * ((unsigned __int64)(v55 + *(_QWORD*)(v5 + 160) -
                                                   1) >>
                                4)) +
                244LL * (((_DWORD)v55 + *(_DWORD*)(v5 + 160) - 1) & 0xF));
  v57 = *((_QWORD*)v56 + 18);
  if ((v57 & 0x800000000000LL) != 0) {
    goto LABEL_59;
  }
LABEL_57:
  v56 = (void*)(HIDWORD(v57) & 0x7FFF);
  return (unsigned int)(v44 - (_DWORD)v56);
}

__int64 game_map_79d190(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  bool v4;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v12;
  unsigned __int16* v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  unsigned __int64 v18[2];

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 != 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 11278LL) & 1) == 0 ||
        (v18[1] = (unsigned __int64)&GameData_1ac2f4d,
         v18[0] = game_HashString((__int64)&GameData_1ac2f4d),
         game_GameModeData_instance_ == 0) ||
        (v3 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48), v18)) == 0 ||
        (*(_DWORD*)(v3 + 32) != 0 ? (v4 = *(_BYTE*)(a1 + 16) == 1)
                                  : (v4 = false),
         !v4)) {
      if (BattleSide_79eea0(a1)) {
        return 1;
      }
      v6 = game_g_shared_system_skills_ptr;
      LODWORD(v18[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF;
      if ((game_HasSkill((_QWORD*)(v1 + 1744), (unsigned int*)v18) & 1) == 0) {
        v7 = *(_WORD*)(v1 + 492) == 0 && *(_BYTE*)(v1 + 496) == 0;
        if (!v7 || (LODWORD(v18[0]) =
                        *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v6) & 0xFFF,
                    (game_HasSkill((_QWORD*)(v1 + 1744), (unsigned int*)v18) &
                     1) == 0)) {
          LODWORD(v18[0]) =
              *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4CLL) + v6) & 0xFFF;
          if ((game_HasSkill((_QWORD*)(v1 + 1744), (unsigned int*)v18) & 1) ==
              0) {
            v8 = *(_QWORD*)(a1 + 56);
            if (v8 != 0) {
              v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                              8LL * (*(_WORD*)(v8 + 16) & 0xFFF));
              if ((((unsigned __int16)*GameData_212cf08[0] >>
                    *(_BYTE*)(v9 + 104)) &
                   1) != 0) {
                v10 = *(unsigned __int8*)(v9 + 106);
                if (*(_BYTE*)(v9 + 106) == 0 || v10 == 6) {
                  v12 = *(_QWORD*)(v9 + 576);
                  if (v12 == 0) {
                    return 0;
                  }
                }
                else {
                  if (v10 != 1) {
                    return 0;
                  }
                  v12 = *(_QWORD*)(v9 + 576);
                  if (v12 == 0) {
                    return 1;
                  }
                }
                v15 = *(unsigned __int8*)(v12 + 72);
                v16 = *(unsigned __int8*)(v12 + 73);
                if (v15 <= 7 && v16 == 1) {
                  return 1;
                }
              }
            }
            else {
              v13 = (unsigned __int16*)(a1 + 44);
              if (*(_WORD*)(a1 + 44) == 0) {
                v14 = *(unsigned int*)(a1 + 40);
                if ((v14 & 0x80000000) != 0) {
                  v13 = (unsigned __int16*)game_g_empty_item_ptr;
                }
                else {
                  v13 =
                      (unsigned __int16*)(*(_QWORD*)(a1 + 24) + 8 * v14 + 828);
                }
              }
              if (UnitItem_6e8d00(v13, v1)) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

bool game_map_79d430(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;

  if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 11276LL) & 8) != 0) {
    return false;
  }
  v1 = *(_QWORD*)(a1 + 24);
  if (v1 == 0) {
    return false;
  }
  if (*(int*)(v1 + 592) > 1) {
    return false;
  }
  v3 = game_g_shared_system_skills_ptr;
  v13 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x80LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill((_QWORD*)(v1 + 1744), (unsigned int*)&v13) & 1) != 0) {
    return false;
  }
  v5 = *(_DWORD*)((char*)((_UNKNOWN*)0x80LL) + v3);
  v6 = *(_QWORD*)(a1 + 24);
  v7 = v5 & 0xFFF;
  v12 = v5 & 0xFFF;
  v8 = (v5 & 0xFFF) == 0 || v6 == 0;
  if (!v8 && (*(_BYTE*)((v9 = *(_QWORD*)(a1 + 8)) + 11276) & 0x20) == 0 &&
      (v10 = *(_QWORD*)(a1 + 520),
       (v7 >> 5) + 1 <= (*(_QWORD*)(a1 + 528) - v10) >> 2) &&
      ((*(_DWORD*)(v10 + 4LL * (unsigned int)(v7 >> 5)) >> v5) & 1) != 0 &&
      (v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                        8LL * (v5 & 0xFFF)),
       ((unsigned int)BattleSide_7a1610(a1) &
        (*(unsigned __int16*)(v11 + 248) ^ 0xFFFF)) == 0) &&
      game_HasActiveSkill_843580(
          &v12, a1 + 520, v9 + 760LL * *(unsigned __int8*)(a1 + 17) + 536)) {
    return false;
  }
  else {
    return GameData_21ca300 != 0;
  }
}

__int64 game_map_7aaa60(__int64 result, _DWORD* a2)
{
  int v5;
  int v6;
  unsigned __int64 v7;
  __int64 v8;
  _DWORD* v9;
  __int128 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _DWORD* v14;
  float v15;
  __int16 v16;
  unsigned int v17;
  int v18;
  float v19;
  __int128 v20;
  __int128 v21;
  __int64 v22;
  unsigned int v23;
  __int128 v24;

  if (result != 0) {
    if ((*(_WORD*)a2 & 0xFFF) != 0) {
      if (game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
        v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
        v6 = (v5 & 8) != 0 ? 2 : 3;
        if ((v6 & v5) == 0) {
          return 0;
        }
      }
      if (game_ProcFadeView_instance_ != 0) {
        v7 = game_ProcFadeView_instance_ +
             ((unsigned __int64)*(
                  unsigned __int8*)(game_ProcFadeView_instance_ + 480)
              << 6);
        if (*(float*)(v7 + 172) == *(float*)(v7 + 168)) {
          v8 = result;
          v9 = a2;
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v7 + 160) + 16LL))(v7 +
                                                                        160);
          a2 = v9;
          result = v8;
        }
        else {
          v10 = *(_OWORD*)(v7 + 208);
        }
        if (*((float*)&v10 + 3) == 0x1.0000000000000p+0f) {
          v11 = *(_QWORD*)(v7 + 160);
          v12 = result;
          v13 = v7 + 160;
          v14 = a2;
          LODWORD(v15) =
              LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                           (_QWORD*)(v11 + 16))(v13, *((float*)&v10 + 3)))
                  .n128_u32[3];
          a2 = v14;
          result = v12;
          if (v15 == 0x1.0000000000000p+0f) {
            return 0;
          }
        }
      }
      if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 2) {
        return 0;
      }
      v16 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                 8LL * (*a2 & 0xFFF)) +
                      754LL);
      if ((v16 & 0x20) != 0) {
        v17 = 1024;
      }
      else if ((v16 & 0x40) != 0) {
        v17 = 2048;
      }
      else {
        if ((v16 & 0x80) == 0) {
          return 0;
        }
        v17 = 4096;
      }
      v18 = *(_DWORD*)(result + 592);
      v19 = (float)(unsigned int)(v18 - 1) * 0x1.4000000000000p+1f;
      if (v18 <= 0) {
        v19 = 0x0.0p+0f;
      }
      *(_QWORD*)&v20 = COERCE_UNSIGNED_INT(
          (float)((float)((float)((float)(unsigned int)(*(char*)(result + 584) +
                                                        256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) +
          v19);
      v22 = COERCE_UNSIGNED_INT(
          (float)((float)((float)((float)(unsigned int)(*(char*)(result + 585) +
                                                        256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) +
          v19);
      *(float*)&v23 =
          (float)((float)((float)((float)(unsigned int)(*(char*)(result + 584) +
                                                        256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) +
          v19;
      *((_QWORD*)&v20 + 1) = v22;
      v24 = v20;
      *(_QWORD*)&v21 = __PAIR64__(
          COERCE_UNSIGNED_INT(Unit_6c7fa0(result, (__int64)&v24)), v23);
      *((_QWORD*)&v21 + 1) = v22;
      v24 = v21;
      GameRoutine_10a4c70_alt1((__int64)&v24, 0, v17);
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 game_map_7ca370(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  char v12;
  int v14;
  int v15;
  int v16;

  v4 = *(_QWORD*)(a1 + 16);
  v5 = a2 + 32 * a3;
  v6 = 0;
  if (v5 >= 0x400) {
    v5 = 0;
  }
  v7 = *(__int16*)(v4 + 2LL * v5 + 4200);
  if ((v7 & 0x8000000000000000LL) == 0) {
    v8 = *(_QWORD*)(v4 + 8);
    if (v8 != 0) {
      v6 = v8 + 144LL * (int)v7;
      if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v6 + 40LL))(v6) != 7 ||
          ((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6) & 1) == 0) {
        return 0;
      }
      if (a4 != 0) {
        if (*(int*)(a4 + 592) > 1) {
          return 0;
        }
        v10 = game_g_shared_system_skills_ptr;
        v15 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                         game_g_shared_system_skills_ptr) &
              0xFFF;
        if ((game_HasSkill((_QWORD*)(a4 + 1744), (unsigned int*)&v15) & 1) !=
            0) {
          return 0;
        }
        v11 = a4;
        if (*(_WORD*)(a4 + 492) == 0 && *(_BYTE*)(a4 + 496) == 0) {
          v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v10) & 0xFFF;
          v12 = game_HasSkill((_QWORD*)(a4 + 1744), (unsigned int*)&v16);
          v11 = a4;
          if ((v12 & 1) != 0) {
            return 0;
          }
        }
        if ((*(_BYTE*)(v11 + 416) & 4) != 0) {
          return 0;
        }
        v14 = *(_DWORD*)((_BYTE*)((char*)0x40LL) + v10) & 0xFFF;
        if ((game_HasSkill((_QWORD*)(v11 + 1744), (unsigned int*)&v14) & 1) !=
            0) {
          return 0;
        }
      }
    }
  }
  return v6;
}

__int64 game_map_7cb980(__int64 result, int a2, int a3, int a4, int a5)
{
  unsigned __int64 v5;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  _BYTE* v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  bool v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  int v33;
  unsigned __int64 v34;
  _BYTE* v35;
  _BYTE* v36;
  char v37;
  __int64 v38;
  int v41;
  int v42;

  if (a5 >= 1 && a4 >= 1) {
    v5 = *(_QWORD*)(result + 8);
    v7 = result;
    v8 = 0;
    v42 = a4;
    do {
      v9 = 0;
      v41 = v8;
      v10 = v8 + a3;
      do {
        v11 = *(_BYTE**)v7;
        v12 = v5 - *(_QWORD*)v7;
        if (v12 > 0x3FF) {
          goto LABEL_8;
        }
        v13 = *(_DWORD*)(v7 + 24);
        v14 = v9 + a2;
        if (v13 < 0) {
          v27 = 1;
          *(_DWORD*)(v7 + 24) = v14;
          *(_DWORD*)(v7 + 28) = v10;
          *(_DWORD*)(v7 + 32) = 1;
        }
        else {
          v15 = *(_DWORD*)(v7 + 32);
          v16 = v13 - v14;
          v17 = v15;
          if (v13 > v14) {
            v17 = v15 + v16;
            *(_DWORD*)(v7 + 24) = v14;
            *(_DWORD*)(v7 + 32) = v15 + v16;
          }
          v18 = v13 + v15 - 1;
          v19 = __OFSUB__(v14, v18);
          v20 = v14 - v18;
          if (!((v20 < 0) ^ v19 | (v20 == 0))) {
            *(_DWORD*)(v7 + 32) = v20 + v17;
          }
          v21 = *(_DWORD*)(v7 + 28);
          v22 = *(_DWORD*)(v7 + 36);
          v23 = v21 - v10;
          v24 = v22;
          if (v21 > v10) {
            v24 = v22 + v23;
            *(_DWORD*)(v7 + 28) = v10;
            *(_DWORD*)(v7 + 36) = v22 + v23;
          }
          v25 = v21 + v22 - 1;
          v19 = __OFSUB__(v10, v25);
          v26 = v10 - v25;
          if ((v26 < 0) ^ v19 | (v26 == 0)) {
            goto LABEL_21;
          }
          v27 = v26 + v24;
        }
        *(_DWORD*)(v7 + 36) = v27;
      LABEL_21:
        v28 = *(_QWORD*)(v7 + 16);
        if (v5 < v28) {
          *(_BYTE*)v5 = v14;
          *(_BYTE*)(v5 + 1) = v10;
          *(_WORD*)(v5 + 2) = 0;
          v5 += 4LL;
        }
        else {
          v29 = v12 >> 2;
          v30 = v28 - (_QWORD)v11;
          if (v30 >> 1 <= (v12 >> 2) + 1) {
            v31 = v29 + 1;
          }
          else {
            v31 = v30 >> 1;
          }
          if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFFCLL) {
            v32 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v32 = v31;
          }
          if (v32 >> 62 != 0) {
            GameRoutine_60a210();
          }
          v33 = v10;
          result = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v32, 16, 0);
          v34 = result + v12;
          v10 = v33;
          *(_BYTE*)v34 = v14;
          *(_BYTE*)(v34 + 1) = v33;
          *(_WORD*)(v34 + 2) = 0;
          if (v11 != (_BYTE*)v5) {
            v35 = v11;
            v36 = (_BYTE*)(result + v12 - 4 * v29);
            do {
              *v36 = *v35;
              v36[1] = v35[1];
              v36[2] = v35[2];
              v37 = v35[3];
              v35 += 4;
              v36[3] = v37;
              v36 += 4;
            } while (v35 != (_BYTE*)v5);
          }
          v5 = v34 + 4;
          *(_QWORD*)v7 = result + v12 - 4 * v29;
          *(_QWORD*)(v7 + 8) = v34 + 4;
          *(_QWORD*)(v7 + 16) = result + 4 * v32;
          if (v11 != nullptr) {
            v38 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v38 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v11);
            a4 = v42;
            v10 = v33;
          }
          else {
            a4 = v42;
          }
        }
        *(_QWORD*)(v7 + 8) = v5;
      LABEL_8:
        ++v9;
      } while (v9 != a4);
      v8 = v41 + 1;
    } while (v41 + 1 != a5);
  }
  return result;
}

__int64 (***game_map_812800(int a1, int a2))()
{
  _QWORD* v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64** v8;
  __int64* v9;
  __int64 (***v10)();
  unsigned __int64 v11;
  __int64 v12;
  int* v13;
  int* v14;
  int v15;
  _DWORD* v16;

  v2 = (_QWORD*)GameData_21ec7c8;
  v3 = *(_QWORD*)(GameData_21ec7c8 + 72);
  if (v3 != 0 && *(_QWORD*)(GameData_21ec7c8 + 88) != 0) {
    v5 = a1 | (unsigned int)(a2 << 16);
    v6 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v7 = a1 | (unsigned int)(a2 << 16);
      if (v3 <= v5) {
        v7 = (unsigned int)v5 % (unsigned int)v3;
      }
    }
    else {
      v7 = ((_DWORD)v3 - 1) & (unsigned int)v5;
    }
    v8 = *(__int64***)(*(_QWORD*)(GameData_21ec7c8 + 64) + 8 * v7);
    if (v8 != nullptr) {
      v9 = *v8;
      if (v9 != nullptr) {
        v10 = game_map_anonymous_NullObject_vtable_ptr;
        if ((v3 & v6) == 0) {
          while (1) {
            v12 = v9[1];
            if (v12 == v5) {
              if (*((_DWORD*)v9 + 4) == (_DWORD)v5) {
                goto LABEL_25;
              }
            }
            else if ((v12 & v6) != v7) {
              return v10;
            }
            v9 = (__int64*)*v9;
            if (v9 == nullptr) {
              return v10;
            }
          }
        }
        while (1) {
          v11 = v9[1];
          if (v11 == v5) {
            break;
          }
          if (v11 >= v3) {
            v11 %= v3;
          }
          if (v11 != v7) {
            return v10;
          }
        LABEL_14:
          v9 = (__int64*)*v9;
          if (v9 == nullptr) {
            return v10;
          }
        }
        if (*((_DWORD*)v9 + 4) != (_DWORD)v5) {
          goto LABEL_14;
        }
      LABEL_25:
        v13 = (int*)v9[3];
        v14 = (int*)v9[4];
        if (v13 != v14) {
          v10 = game_map_anonymous_NullObject_vtable_ptr;
          while (1) {
            v15 = *v13;
            v16 = (_DWORD*)(*v2 + 176LL * *v13);
            if (((*(__int64 (**)(_DWORD*, __int64))(*(_QWORD*)v16 + 56LL))(v16,
                                                                           1) &
                 1) != 0 &&
                v16[22] == 0) {
              break;
            }
            if (++v13 == v14) {
              return v10;
            }
          }
          if ((v15 & 0x80000000) == 0) {
            return (__int64 (***)(void))(*v2 + 176LL * v15);
          }
        }
      }
    }
  }
  return game_map_anonymous_NullObject_vtable_ptr;
}

__int64 (***game_map_8129a0(int a1, int a2))()
{
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  __int64 (***result)();
  unsigned __int64 v10;
  __int64 v11;
  int* v12;
  int* v13;
  __int64 v14;
  int v15;
  __int64 v16;

  v2 = *(_QWORD*)(GameData_21ec7c8 + 72);
  if (v2 != 0 && *(_QWORD*)(GameData_21ec7c8 + 88) != 0) {
    v4 = a1 | (unsigned int)(a2 << 16);
    v5 = v2 - 1;
    if ((v2 & (v2 - 1)) != 0) {
      v6 = a1 | (unsigned int)(a2 << 16);
      if (v2 <= v4) {
        v6 = (unsigned int)v4 % (unsigned int)v2;
      }
    }
    else {
      v6 = ((_DWORD)v2 - 1) & (unsigned int)v4;
    }
    v7 = *(__int64***)(*(_QWORD*)(GameData_21ec7c8 + 64) + 8 * v6);
    if (v7 != nullptr) {
      v8 = *v7;
      if (v8 != nullptr) {
        result = game_map_anonymous_NullObject_vtable_ptr;
        if ((v2 & v5) == 0) {
          while (1) {
            v11 = v8[1];
            if (v11 == v4) {
              if (*((_DWORD*)v8 + 4) == (_DWORD)v4) {
                goto LABEL_25;
              }
            }
            else if ((v11 & v5) != v6) {
              return result;
            }
            v8 = (__int64*)*v8;
            if (v8 == nullptr) {
              return result;
            }
          }
        }
        while (1) {
          v10 = v8[1];
          if (v10 == v4) {
            break;
          }
          if (v10 >= v2) {
            v10 %= v2;
          }
          if (v10 != v6) {
            return result;
          }
        LABEL_14:
          v8 = (__int64*)*v8;
          if (v8 == nullptr) {
            return result;
          }
        }
        if (*((_DWORD*)v8 + 4) != (_DWORD)v4) {
          goto LABEL_14;
        }
      LABEL_25:
        v12 = (int*)v8[3];
        v13 = (int*)v8[4];
        if (v12 != v13) {
          v14 = *(_QWORD*)GameData_21ec7c8;
          result = game_map_anonymous_NullObject_vtable_ptr;
          while (1) {
            v15 = *v12;
            if (*(_DWORD*)(v14 + 176LL * *v12 + 88) == 0) {
              break;
            }
            if (++v12 == v13) {
              return result;
            }
          }
          v16 = v14 + 176LL * v15;
          if (v15 >= 0) {
            return (__int64 (***)(void))v16;
          }
          else {
            return game_map_anonymous_NullObject_vtable_ptr;
          }
        }
      }
    }
  }
  return game_map_anonymous_NullObject_vtable_ptr;
}

__int64 (***game_map_812b00(__int64 a1))()
{
  _QWORD* v1;
  unsigned int v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v11;
  unsigned int v12;

  v1 = (_QWORD*)GameData_21ec7c8;
  v2 = game_HashString32(a1);
  v3 = v1[4];
  if (v3 == 0 || v1[6] == 0) {
    return game_map_anonymous_NullObject_vtable_ptr;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = v2;
    if (v3 <= v2) {
      v6 = v2 % (unsigned int)v3;
    }
  }
  else {
    v6 = ((_DWORD)v3 - 1) & v2;
  }
  v7 = *(__int64***)(v1[3] + 8 * v6);
  if (v7 == nullptr) {
    return game_map_anonymous_NullObject_vtable_ptr;
  }
  v8 = *v7;
  if (v8 == nullptr) {
    return game_map_anonymous_NullObject_vtable_ptr;
  }
  if ((v3 & v5) != 0) {
    while (1) {
      v9 = v8[1];
      if (v9 == v2) {
        if (*((_DWORD*)v8 + 4) == v2) {
          goto LABEL_26;
        }
      }
      else {
        if (v9 >= v3) {
          v9 %= v3;
        }
        if (v9 != v6) {
          return game_map_anonymous_NullObject_vtable_ptr;
        }
      }
      v8 = (__int64*)*v8;
      if (v8 == nullptr) {
        return game_map_anonymous_NullObject_vtable_ptr;
      }
    }
  }
  while (1) {
    v11 = v8[1];
    if (v11 == v2) {
      break;
    }
    if ((v11 & v5) != v6) {
      return game_map_anonymous_NullObject_vtable_ptr;
    }
  LABEL_22:
    v8 = (__int64*)*v8;
    if (v8 == nullptr) {
      return game_map_anonymous_NullObject_vtable_ptr;
    }
  }
  if (*((_DWORD*)v8 + 4) != v2) {
    goto LABEL_22;
  }
LABEL_26:
  v12 = *((_DWORD*)v8 + 5);
  if ((v12 & 0x80000000) == 0) {
    return (__int64 (***)(void))(*v1 + 176LL * v12);
  }
  return game_map_anonymous_NullObject_vtable_ptr;
}

__int64* game_map_8235e0(__int64* result, __int64 a2, long double a3,
                         long double a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64* v5;
  __int64* v6;
  int v7;
  int v8;
  __int64* v9;
  float v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  float v18;
  int v19;

  v4 = GameData_212c7f0[0];
  if (*(_QWORD*)GameData_212c7f0[0] != 0) {
    v5 = *(__int64**)(*(_QWORD*)(*(_QWORD*)GameData_212c7f0[0] + 8LL) + 16LL);
    if (v5 == nullptr) {
    LABEL_8:
      String_60a250("map::at:  key not found");
    }
    v6 = (__int64*)GameData_212c638;
    v7 = ((*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
           *(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL)) >>
          3) -
         1;
    while (1) {
      while (1) {
        v8 = *((_DWORD*)v5 + 8);
        if (v7 >= v8) {
          break;
        }
        v5 = (__int64*)*v5;
        if (v5 == nullptr) {
          goto LABEL_8;
        }
      }
      if (v8 >= v7) {
        break;
      }
      v5 = (__int64*)v5[1];
      if (v5 == nullptr) {
        goto LABEL_8;
      }
    }
    if ((int)((unsigned __int64)(v5[6] - v5[5]) >> 3) < 2) {
      result = *(__int64**)(a2 + 32);
      if (result != nullptr) {
        v17 = *result;
        v19 = LODWORD(a3);
        return (__int64*)(*(__int64 (**)(__int64*, int*, long double,
                                         long double))(v17 + 48))(result, &v19,
                                                                  a3, a4);
      }
    }
    else if (GameData_21ed070 == 0) {
      v9 = result;
      v11 = *(float*)&a4;
      v12 = *(float*)&a3;
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 240, 16, 0);
      v14 = GameData_212c608[0];
      *(_QWORD*)(v13 + 96) = 0;
      *(_QWORD*)(v13 + 104) = 0;
      *(_QWORD*)(v13 + 112) = 0;
      *(_QWORD*)(v13 + 120) = 0;
      *(_QWORD*)(v13 + 128) = 0;
      *(_WORD*)(v13 + 136) = 0;
      *(_QWORD*)(v13 + 16) = 0;
      *(_QWORD*)(v13 + 24) = "NULL";
      *(_QWORD*)(v13 + 138) = 0;
      *(_QWORD*)(v13 + 144) = 0;
      *(_QWORD*)(v13 + 32) = 0;
      *(_QWORD*)(v13 + 40) = 0;
      *(_QWORD*)(v13 + 48) = 0;
      *(_QWORD*)(v13 + 56) = 0;
      *(_QWORD*)(v13 + 64) = 0;
      *(_QWORD*)(v13 + 72) = 0;
      *(_QWORD*)(v13 + 80) = 0;
      *(_QWORD*)(v13 + 88) = 0;
      *(_QWORD*)v13 = v14 + 16;
      *(_QWORD*)(v13 + 8) = 0;
      game_ProcInst_Register(v13);
      GameData_21ed070 = v13;
      *(_QWORD*)v13 = game_map_anonymous_ProcMapTransition_vtable;
      v15 = GameData_212d1d0[0];
      v16 = *(_QWORD*)(a2 + 32);
      *(_QWORD*)(v13 + 160) = 0;
      *(_QWORD*)(v13 + 168) = 0;
      *(_QWORD*)(v13 + 152) = v15 + 2;
      *(_WORD*)(v13 + 176) = 1;
      if (v16 != 0) {
        if (v16 == a2) {
          *(_QWORD*)(v13 + 224) = v13 + 192;
          (*(void (**)(__int64))(*(_QWORD*)v16 + 24LL))(v16);
        }
        else {
          *(_QWORD*)(v13 + 224) =
              (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        }
      }
      else {
        *(_QWORD*)(v13 + 224) = 0;
      }
      *(_QWORD*)(v13 + 168) = 0x300000003LL;
      if (*(_QWORD*)v4 != 0) {
        v18 = *(float*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 32LL);
      }
      else {
        v18 = 0x0.0p+0f;
      }
      Situation_7677a0((__int64*)(v13 + 152), v18, v12, v11);
      GameRoutine_a859a0(*v6, 0);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21c6868) != 0) {
        GameData_21c67a8 = 3;
        GameData_21c67d0 = 0;
        GameData_21c67d8 = 0;
        GameData_21c67e0 = 0;
        GameData_21c67b0 = 0;
        GameData_21c67b8 = 0;
        GameData_21c67c0 = 0;
        GameData_21c67c8 = 0;
        GameData_21c6808 = 0;
        GameData_21c6810 = 0;
        GameData_21c6818 = 0;
        GameData_21c6820 = 0;
        GameData_21c6828 = 0;
        GameData_21c6850 = 0;
        GameData_21c6858 = 0;
        GameData_21c6860 = 0;
        GameData_21c6848 = 0;
        GameData_21c6838 = 0;
        GameData_21c6840 = 0;
        GameData_21c6830 = 0;
        GameData_21c67e8 = 14;
        GameData_21c67f0 = 0;
        GameData_21c67f8 = 16;
        GameData_21c6800 = 1;
        __cxa_guard_release(&GameData_21c6868);
      }
      return (__int64*)ProcInst_657850(v13, (__int64)&GameData_21c67a8,
                                       (__int64)"ProcMapTransition", 0,
                                       (__int64)v9);
    }
  }
  return result;
}

__int64 game_map_9664e0(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int128 v3;
  bool v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;

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
    if (*((float*)&v3 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(
                        v2 + 160, *((float*)&v3 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      return 0;
    }
  }
  if (GameData_22400f8 != 0) {
    v4 = *(_BYTE*)(GameData_22400f8 + 8) == 2;
    v5 = 0;
    if (a1 == 0) {
      return v5;
    }
  }
  else {
    v4 = false;
    v5 = 0;
    if (a1 == 0) {
      return v5;
    }
  }
  if (v4) {
    return v5;
  }
  v6 = game_HashString(a1);
  if (v6 == 0) {
    return 0;
  }
  v7 = *(_QWORD*)(GameData_21c9d30 + 96);
  if (v7 == 0 || *(_QWORD*)(GameData_21c9d30 + 112) == 0) {
    return 0;
  }
  v10 = v7 - 1;
  if ((v7 & (v7 - 1)) != 0) {
    v11 = v6;
    if (v6 >= v7) {
      v11 = v6 % v7;
    }
  }
  else {
    v11 = v10 & v6;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(GameData_21c9d30 + 88) + 8 * v11);
  if (v5 != 0) {
    v12 = *(_QWORD**)v5;
    if (*(_QWORD*)v5 != 0) {
      if ((v7 & v10) == 0) {
        while (1) {
          v14 = v12[1];
          if (v14 == v6) {
            if (v12[2] == v6) {
              goto LABEL_40;
            }
          }
          else if ((v14 & v10) != v11) {
            return 0;
          }
          v12 = (_QWORD*)*v12;
          v5 = 0;
          if (v12 == nullptr) {
            return v5;
          }
        }
      }
      while (1) {
        v13 = v12[1];
        if (v13 == v6) {
          if (v12[2] == v6) {
          LABEL_40:
            v5 = v12[3];
            if (v5 != 0) {
              return *(_QWORD*)(v5 + 40);
            }
            return v5;
          }
        }
        else {
          if (v13 >= v7) {
            v13 %= v7;
          }
          if (v13 != v11) {
            return 0;
          }
        }
        v12 = (_QWORD*)*v12;
        v5 = 0;
        if (v12 == nullptr) {
          return v5;
        }
      }
    }
    return 0;
  }
  return v5;
}

void game_map_a18af0(int* a1, int* a2, int* a3, __int64* a4)
{

#pragma clang fp contract(off)
  int v5;
  __int64 v6;
  float v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  int v15;
  __int64 v16;
  __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  int v23;
  __int64 v24;
  float v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  float v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  float v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
  v5 = *a1;
  v6 = *(_QWORD*)(*a4 + 32);
  v40 = *a2;
  if (v6 == 0) {
    goto LABEL_20;
  }
  (*(void (**)(__int64, int*))(*(_QWORD*)v6 + 48LL))(v6, &v40),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
      v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
  v11 = *a4;
  v40 = v5;
  v12 = *(_QWORD*)(v11 + 32);
  if (v12 == 0) {
    goto LABEL_20;
  }
  v13 = v10;
  v14 = (*(float (**)(__int64, int*))(*(_QWORD*)v12 + 48LL))(v12, &v40),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
  v15 = *a2;
  v16 = *a4;
  if (v13 < v14) {
    v17 = *(_QWORD*)(v16 + 32);
    v40 = *a3;
    if (v17 != 0) {
      (*(void (**)(__int64, int*))(*(_QWORD*)v17 + 48LL))(v17, &v40),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
      v19 = *a4;
      v40 = v15;
      v20 = *(_QWORD*)(v19 + 32);
      if (v20 != 0) {
        v21 = v18;
        v22 = (*(float (**)(__int64, int*))(*(_QWORD*)v20 + 48LL))(v20, &v40),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
        v23 = *a1;
        if (v21 < v22) {
          *a1 = *a3;
          *a3 = v23;
          return;
        }
        *a1 = *a2;
        *a2 = v23;
        v35 = *(_QWORD*)(*a4 + 32);
        v40 = *a3;
        if (v35 != 0) {
          (*(void (**)(__int64, int*))(*(_QWORD*)v35 + 48LL))(v35, &v40),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v37 = *a4;
          v40 = v23;
          v38 = *(_QWORD*)(v37 + 32);
          if (v38 != 0) {
            if (v36 < (*(float (**)(__int64, int*))(*(_QWORD*)v38 + 48LL))(
                          v38, &v40)) {
              v39 = *a2;
              *a2 = *a3;
              *a3 = v39;
            }
            return;
          }
        }
      }
    }
  LABEL_20:
    GameRoutine_60a310(),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v24 = *(_QWORD*)(v16 + 32);
  v40 = *a3;
  if (v24 == 0) {
    goto LABEL_20;
  }
  (*(void (**)(__int64, int*))(*(_QWORD*)v24 + 48LL))(v24, &v40),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
      v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
  v26 = *a4;
  v40 = v15;
  v27 = *(_QWORD*)(v26 + 32);
  if (v27 == 0) {
    goto LABEL_20;
  }
  if (v25 >= (*(float (**)(__int64, int*))(*(_QWORD*)v27 + 48LL))(v27, &v40)) {
    return;
  }
  v28 = *a2;
  *a2 = *a3;
  *a3 = v28;
  v29 = *a1;
  v30 = *(_QWORD*)(*a4 + 32);
  v40 = *a2;
  if (v30 == 0) {
    goto LABEL_20;
  }
  (*(void (**)(__int64, int*))(*(_QWORD*)v30 + 48LL))(v30, &v40),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
      v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w"));
  v32 = *a4;
  v40 = v29;
  v33 = *(_QWORD*)(v32 + 32);
  if (v33 == 0) {
    goto LABEL_20;
  }
  if (v31 < (*(float (**)(__int64, int*))(*(_QWORD*)v33 + 48LL))(v33, &v40)) {
    v34 = *a1;
    *a1 = *a2;
    *a2 = v34;
  }
}

void game_map_a18eb0(int* a1, int* a2, int* a3, int* a4, int* a5, __int64* a6)
{

#pragma clang fp contract(off)
  int v12;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  float v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  float v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  __int64 v31;
  float v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;

  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w"));
  GameRoutine_a18d30(a1, a2, a3, a4, a6),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w"));
  v12 = *a4;
  v13 = *(_QWORD*)(*a6 + 32);
  v36 = *a5;
  if (v13 == 0) {
    goto LABEL_15;
  }
  (*(void (**)(__int64, int*))(*(_QWORD*)v13 + 48LL))(v13, &v36),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w"));
  v15 = *a6;
  v36 = v12;
  v16 = *(_QWORD*)(v15 + 32);
  if (v16 == 0) {
    goto LABEL_15;
  }
  if (v14 >= (*(float (**)(__int64, int*))(*(_QWORD*)v16 + 48LL))(v16, &v36)) {
    return;
  }
  v17 = *a4;
  *a4 = *a5;
  *a5 = v17;
  v18 = *a3;
  v19 = *(_QWORD*)(*a6 + 32);
  v36 = *a4;
  if (v19 == 0) {
    goto LABEL_15;
  }
  (*(void (**)(__int64, int*))(*(_QWORD*)v19 + 48LL))(v19, &v36),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w"));
  v21 = *a6;
  v36 = v18;
  v22 = *(_QWORD*)(v21 + 32);
  if (v22 == 0) {
    goto LABEL_15;
  }
  if (v20 >= (*(float (**)(__int64, int*))(*(_QWORD*)v22 + 48LL))(v22, &v36)) {
    return;
  }
  v23 = *a3;
  *a3 = *a4;
  *a4 = v23;
  v24 = *a2;
  v25 = *(_QWORD*)(*a6 + 32);
  v36 = *a3;
  if (v25 == 0) {
    goto LABEL_15;
  }
  (*(void (**)(__int64, int*))(*(_QWORD*)v25 + 48LL))(v25, &v36),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w"));
  v27 = *a6;
  v36 = v24;
  v28 = *(_QWORD*)(v27 + 32);
  if (v28 == 0) {
    goto LABEL_15;
  }
  if (v26 >= (*(float (**)(__int64, int*))(*(_QWORD*)v28 + 48LL))(v28, &v36)) {
    return;
  }
  v29 = *a2;
  *a2 = *a3;
  *a3 = v29;
  v30 = *a1;
  v31 = *(_QWORD*)(*a6 + 32);
  v36 = *a2;
  if (v31 == 0 ||
      ((*(void (**)(__int64, int*))(*(_QWORD*)v31 + 48LL))(v31, &v36),
       v33 = *a6, v36 = v30, (v34 = *(_QWORD*)(v33 + 32)) == 0)) {
  LABEL_15:
    GameRoutine_60a310(),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if (v32 < (*(float (**)(__int64, int*))(*(_QWORD*)v34 + 48LL))(v34, &v36)) {
    v35 = *a1;
    *a1 = *a2;
    *a2 = v35;
  }
}

__int64 game_map_c8b980(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  __int64 v17;
  int v18;
  __int64 v19;

  if (GameData_21cd148 != 0) {
    v6 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v19 = v6;
    v18 = 241;
    v7 = game_UnitPool_Find_6ead60(&v19, &v18);
    if (v7 == nullptr) {
      goto LABEL_7;
    }
    v8 = v7;
    if ((v7[52] & 8) == 0) {
      goto LABEL_7;
    }
    v9 = game_g_shared_system_skills_ptr;
    LODWORD(v19) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                              game_g_shared_system_skills_ptr) &
                   0xFFF;
    if ((game_HasSkill(v7 + 218, (unsigned int*)&v19) & 1) != 0) {
      goto LABEL_7;
    }
    LODWORD(v19) =
        *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) + v9 + 4) & 0xFFF;
    if ((game_HasSkill(v8 + 218, (unsigned int*)&v19) & 1) == 0) {
      v17 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x80) != 0) {
          goto LABEL_7;
        }
        v17 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      if (v8[49] != v17) {
      LABEL_7:
        if (a2 != 0) {
          v10 = *(unsigned __int16*)(*(_QWORD*)(a2 + 392) + 16LL);
          v11 = *(_QWORD*)(a2 + 440);
          if (v11 != 0) {
            v12 = *(unsigned __int8*)(v11 + 16);
            if (a3 == 0) {
              goto LABEL_15;
            }
          LABEL_12:
            v13 = *(unsigned __int16*)(*(_QWORD*)(a3 + 392) + 16LL);
            v14 = *(_QWORD*)(a3 + 440);
            if (v14 != 0) {
              v15 = *(unsigned __int8*)(v14 + 16);
            }
            else {
              v15 = 9;
            }
            return GameRoutine_c8b5a0(a1, 0x19u, a2, v10, v12, v13, v15);
          }
          v12 = 9;
          if (a3 != 0) {
            goto LABEL_12;
          }
        }
        else {
          v10 = -1;
          v12 = -1;
          if (a3 != 0) {
            goto LABEL_12;
          }
        }
      LABEL_15:
        v13 = -1;
        v15 = -1;
        return GameRoutine_c8b5a0(a1, 0x19u, a2, v10, v12, v13, v15);
      }
    }
  }
  return 0;
}

__int64 game_map_c8baf0(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v7;
  int v8;
  __int64 v9;

  if (GameData_21cd148 != 0) {
    v2 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v2 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v9 = v2;
    v8 = 241;
    v3 = game_UnitPool_Find_6ead60(&v9, &v8);
    if (v3 == nullptr) {
      return GameRoutine_c8b5a0(a1, 0x1Au, 0, 0xFFFFFFFF, 0xFFFFFFFF,
                                0xFFFFFFFF, 0xFFFFFFFF);
    }
    v4 = v3;
    if ((v3[52] & 8) == 0) {
      return GameRoutine_c8b5a0(a1, 0x1Au, 0, 0xFFFFFFFF, 0xFFFFFFFF,
                                0xFFFFFFFF, 0xFFFFFFFF);
    }
    v5 = game_g_shared_system_skills_ptr;
    LODWORD(v9) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                             game_g_shared_system_skills_ptr) &
                  0xFFF;
    if ((game_HasSkill(v3 + 218, (unsigned int*)&v9) & 1) != 0) {
      return GameRoutine_c8b5a0(a1, 0x1Au, 0, 0xFFFFFFFF, 0xFFFFFFFF,
                                0xFFFFFFFF, 0xFFFFFFFF);
    }
    LODWORD(v9) =
        *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) + v5 + 4) & 0xFFF;
    if ((game_HasSkill(v4 + 218, (unsigned int*)&v9) & 1) == 0) {
      v7 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x80) != 0) {
          return GameRoutine_c8b5a0(a1, 0x1Au, 0, 0xFFFFFFFF, 0xFFFFFFFF,
                                    0xFFFFFFFF, 0xFFFFFFFF);
        }
        v7 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      if (v4[49] == v7) {
        return 0;
      }
      return GameRoutine_c8b5a0(a1, 0x1Au, 0, 0xFFFFFFFF, 0xFFFFFFFF,
                                0xFFFFFFFF, 0xFFFFFFFF);
    }
  }
  return 0;
}

void game_map_f06e20(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 j;
  __int64 v13;
  int* v14;
  int v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int8* v26;
  unsigned __int8* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  int v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  _QWORD* v59;
  __int64* v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  long double v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned int v75;
  int v76;
  unsigned __int64 v77;
  bool v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  char v84;
  char v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  char* v93;
  char* v94;
  __int64 v95;
  __int64 v96;
  unsigned int v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int8* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  char* v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  char* v120;
  char* v121;
  unsigned __int64 v122;
  unsigned int v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  unsigned __int64 v134;
  __int64 v135;
  unsigned int v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  unsigned __int8 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  unsigned __int64 v147;
  __int64 v148;
  _QWORD* v149;
  __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  unsigned __int64 v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  unsigned __int64 v156;
  unsigned __int64 v157;
  unsigned __int64 v158;
  unsigned __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  unsigned __int64 v164;
  __int64 v165;
  char v166;
  unsigned __int64 v167;
  __int64 v168;
  float v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  unsigned __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  unsigned __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  unsigned __int64 v183;
  __int64 v184;
  unsigned __int64 v185;
  __int64 v186;
  __int64* v187;
  __int64* i;
  __int64 v189;
  unsigned __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  unsigned __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64* v198;
  __int64* v199;
  __int64 v200;
  unsigned __int64 v201;
  __int64 v202;
  __int64 v204;
  _QWORD* v205;
  _QWORD* v206;
  __int64 v207;
  __int64 v208;
  _BYTE* v209;
  __int64 v210;
  __int64 v212;
  struct {
    _QWORD v213[4];
    _QWORD* v214;
  } v213_;
  unsigned __int64 v215;
  __int64 v216;

  if (*(int*)(a1 + 4372) <= 0) {
    v1 = a1;
    v2 = 0;
    v212 = a1 + 4840;
    do {
      if ((GameRoutine_f0a0d0(v1, v2) & 1) != 0) {
        v3 = 0x9E3779B97F4B6254LL;
      }
      else {
        v3 = 0x9E3779B97F4BBB5ELL;
      }
      if (GameData_21ed070 != 0) {
        v4 = 0;
      }
      else if (*(_BYTE*)(v1 + 196) == 1) {
        v4 = *(unsigned int*)(v1 + 192);
      }
      else {
        v4 = (unsigned int)*GameData_212d168;
      }
      v5 = ((v3 << 12) - 0x61C8864680B583EBLL + (v3 >> 4) + v4) ^ v3;
      if (*(float*)(v1 + 4400) >= 0x1.99999a0000000p-2f) {
        v6 = 0x9E3779B97F4BBB5ELL;
      }
      else {
        v6 = 0x9E3779B97F4B6254LL;
      }
      v7 = (v6 + (v5 << 12) + (v5 >> 4)) ^ v5;
      v215 = v7;
      switch ((int)v2) {
      case 1:
        v93 = *(char**)(*(_QWORD*)GameData_212d020[0] + 248LL);
        v94 = *(char**)(*(_QWORD*)GameData_212d020[0] + 256LL);
        if (v93 != v94) {
          v95 = *(_QWORD*)(*GameData_212c930 + 64);
          v96 = *(_QWORD*)(*GameData_212ce98[0] + 72) + 8LL;
          do {
            v97 = *v93 + 32 * v93[1];
            if (v97 >= 0x400) {
              v97 = 0;
            }
            v98 = *(_QWORD*)(v95 + 8LL * *(unsigned __int16*)(v96 + 2LL * v97));
            v99 = 0x9E3779B97F4BBB5ELL;
            if (v98 != 0) {
              if (*(unsigned __int8*)(*(_QWORD*)(v98 + 48) + 40LL) == 255) {
                v99 = 0x9E3779B97F4B6254LL;
              }
              else {
                v99 = 0x9E3779B97F4BBB5ELL;
              }
            }
            v93 += 4;
            v7 ^= (v7 >> 4) + (v7 << 12) + v99;
            v215 = v7;
          } while (v93 != v94);
        }
        goto LABEL_318;
      case 2:
      case 8:
        LODWORD(v213_.v213[0]) = 15;
        v51 = game_UnitPool_GetFirst((int*)v213_.v213);
        if (v51 == 0) {
          goto LABEL_318;
        }
        v52 = *(_QWORD*)(v51 + 432);
        v53 = v51;
        if (v52 != 0) {
          goto LABEL_70;
        }
        v116 = *(_QWORD*)(v51 + 440);
        if (v116 == 0) {
          goto LABEL_166;
        }
        v117 = *(unsigned __int8*)(v116 + 16);
        if (v117 > 8) {
          goto LABEL_166;
        }
        v180 = 24LL * (unsigned int)v117 + 556024;
        while (1) {
          if (v117 <= 2) {
            v52 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v180);
            if (v52 != 0) {
              break;
            }
          }
          ++v117;
          v180 += 24;
          if (v117 == 9) {
            goto LABEL_166;
          }
        }
        while (1) {
          do {
          LABEL_70:
            v54 = v52;
            game_map_f0ee60(&v215, v53);
            v52 = *(_QWORD*)(v54 + 432);
            v53 = v54;
          } while (v52 != 0);
          v55 = *(_QWORD*)(v54 + 440);
          if (v55 == 0) {
            break;
          }
          v56 = *(unsigned __int8*)(v55 + 16);
          if (v56 > 8) {
            break;
          }
          v57 = 24LL * (unsigned int)v56 + 556024;
          while (1) {
            if (v56 <= 2) {
              v52 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v57);
              if (v52 != 0) {
                break;
              }
            }
            ++v56;
            v57 += 24;
            if (v56 == 9) {
              goto LABEL_162;
            }
          }
          v53 = v54;
        }
      LABEL_162:
        v53 = v54;
      LABEL_166:
        game_map_f0ee60(&v215, v53);
        goto LABEL_318;
      case 3:
        v100 = *(_QWORD*)(*GameData_212ce98[0] + 152);
        if (v100 != 0) {
          v101 = 0;
          do {
            v102 = (unsigned __int8*)(v100 + v101++);
            v215 =
                ((v7 << 12) - 0x61C8864680B583EBLL + (v7 >> 4) + v102[8]) ^ v7;
            v215 ^=
                v102[40] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[72] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[104] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[136] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[168] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[200] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[232] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[264] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[296] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[328] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[360] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[392] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[424] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[456] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[488] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[520] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[552] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[584] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[616] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[648] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[680] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[712] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[744] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[776] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[808] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[840] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[872] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[904] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[936] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v215 ^=
                v102[968] - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
            v7 = (v102[1000] - 0x61C8864680B583EBLL + (v215 << 12) +
                  (v215 >> 4)) ^
                 v215;
            v215 = v7;
          } while (v101 != 32);
        }
        v103 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
        v104 = *(_QWORD*)(v103 + 48);
        v105 = *(_QWORD*)(v103 + 56);
        if (v105 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v105 + 8), 1u,
                                    memory_order_relaxed);
          v106 = *(_QWORD*)(*(_QWORD*)(v104 + 8) + 288LL);
          if (atomic_fetch_add((atomic_ullong* volatile)(v105 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v105 + 16LL))(v105);
            std___1___shared_weak_count___release_weak_alt1(v105);
          }
        }
        else {
          v106 = *(_QWORD*)(*(_QWORD*)(v104 + 8) + 288LL);
        }
        v165 = 120;
        if (*(_BYTE*)(v106 + 90) != 0) {
          v165 = 89;
        }
        v166 = *(_BYTE*)(v106 + v165);
        v167 = 0x9E3779B97F4BBB5ELL;
        if ((v166 & 1) != 0) {
          v168 = 744;
          if (*(_BYTE*)(v106 + 712) != 0) {
            v168 = 708;
          }
          v169 = *(float*)(v106 + v168);
          v167 = 0x9E3779B97F4BBB5ELL;
          if (v169 > 0x1.0000000000000p-1f) {
            v167 = 0x9E3779B97F4B6254LL;
          }
        }
        v170 = (v167 + (v215 << 12) + (v215 >> 4)) ^ v215;
        if ((*(_DWORD*)(*GameData_212ce90[0] + 20) & 0x100) != 0) {
          v171 = 0x9E3779B97F4B6254LL;
        }
        else {
          v171 = 0x9E3779B97F4BBB5ELL;
        }
        v172 = ((v170 >> 4) + (v170 << 12) + v171) ^ v170;
        v215 = (*(unsigned int*)(v1 + 4368) - 0x61C8864680B583EBLL +
                (v172 << 12) + (v172 >> 4)) ^
               v172;
        LODWORD(v213_.v213[0]) = 15;
        v173 = game_UnitPool_GetFirst((int*)v213_.v213);
        if (v173 == 0) {
          goto LABEL_282;
        }
        v174 = *(_QWORD*)(v173 + 432);
        v175 = v173;
        if (v174 != 0) {
          goto LABEL_267;
        }
        v174 = *(_QWORD*)(v173 + 440);
        if (v174 == 0) {
          goto LABEL_267;
        }
        v176 = *(unsigned __int8*)(v174 + 16);
        if (v176 > 8) {
          goto LABEL_248;
        }
        v181 = 24LL * *(unsigned __int8*)(v174 + 16) + 556024;
        while (1) {
          if (v176 <= 2) {
            v174 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v181);
            if (v174 != 0) {
              break;
            }
          }
          ++v176;
          v181 += 24;
          if (v176 == 9) {
          LABEL_248:
            v174 = 0;
            goto LABEL_267;
          }
        }
        while (1) {
        LABEL_267:
          v182 = v174;
          game_map_f0ee60(&v215, v175);
          if (*(_QWORD*)(v175 + 392) == 0 ||
              (*(_BYTE*)(v175 + 417) & 0x1C) != 0 ||
              (*(float (**)(__int64))(*(_QWORD*)(v175 + 152) + 16LL))(
                  v175 + 152) <= 0x0.0p+0f ||
              (v183 = 0x9E3779B97F4B6254LL,
               (*(_BYTE*)(*GameData_212ce90[0] + 21) & 1) == 0) &&
                  (v183 = 0x9E3779B97F4B6254LL,
                   (*(_BYTE*)(v175 + 417) & 0x20) == 0)) {
            v183 = 0x9E3779B97F4BBB5ELL;
          }
          v215 ^= v183 + (v215 << 12) + (v215 >> 4);
          if (v182 == 0) {
            break;
          }
          v174 = *(_QWORD*)(v182 + 432);
          v175 = v182;
          if (v174 == 0) {
            v184 = *(_QWORD*)(v182 + 440);
            v175 = v182;
            if (v184 != 0) {
              v185 = *(unsigned __int8*)(v184 + 16);
              v174 = 0;
              v175 = v182;
              if (v185 <= 8) {
                v186 = 24LL * (unsigned int)v185 + 556024;
                while (1) {
                  if (v185 <= 2) {
                    v174 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v186);
                    if (v174 != 0) {
                      break;
                    }
                  }
                  ++v185;
                  v186 += 24;
                  if (v185 == 9) {
                    v174 = 0;
                    v175 = v182;
                    goto LABEL_267;
                  }
                }
                v175 = v182;
              }
            }
          }
        }
      LABEL_282:
        v187 = *(__int64**)(*(_QWORD*)GameData_212d020[0] + 4376LL);
        for (i = *(__int64**)(*(_QWORD*)GameData_212d020[0] + 4384LL);
             v187 != i; v215 ^= v190 + (v215 << 12) + (v215 >> 4)) {
          GameRoutine_f0f310((__int64)&v215, *v187);
          v189 = *v187++;
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v189 + 528LL))(v189) & 1) !=
              0) {
            v190 = 0x9E3779B97F4B6254LL;
          }
          else {
            v190 = 0x9E3779B97F4BBB5ELL;
          }
        }
        goto LABEL_318;
      case 4:
        LODWORD(v213_.v213[0]) = 15;
        v109 = game_UnitPool_GetFirst((int*)v213_.v213);
        v216 = v109;
        if (v109 == 0) {
          goto LABEL_312;
        }
        v110 = *(_QWORD*)(v109 + 432);
        if (v110 == 0) {
          v110 = *(_QWORD*)(v109 + 440);
          if (v110 == 0) {
            goto LABEL_294;
          }
          v111 = *(unsigned __int8*)(v110 + 16);
          if (v111 > 8) {
            goto LABEL_153;
          }
          v191 = 24LL * *(unsigned __int8*)(v110 + 16) + 556024;
          while (1) {
            if (v111 <= 2) {
              v110 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v191);
              if (v110 != 0) {
                break;
              }
            }
            ++v111;
            v191 += 24;
            if (v111 == 9) {
            LABEL_153:
              v110 = 0;
              break;
            }
          }
        }
      LABEL_294:
        while (2) {
          v192 = v110;
          if (*(_QWORD*)(v109 + 392) != 0 &&
              (*(_BYTE*)(v109 + 417) & 0x1C) == 0 &&
              (*(float (**)(__int64))(*(_QWORD*)(v109 + 152) + 16LL))(
                  v109 + 152) > 0x0.0p+0f &&
              *(_WORD*)(v216 + 1964) != 0) {
            v213_.v213[0] = GameData_1ff1458;
            v213_.v213[1] = &v216;
            v213_.v214 = v213_.v213;
            v213_.v213[2] = &v215;
            GameRoutine_8f7c50((unsigned __int8*)(v216 + 1960), v216,
                               (__int64)v213_.v213);
            if (v213_.v214 == v213_.v213) {
              v193 = 32;
            }
            else {
              if (v213_.v214 == nullptr) {
                goto LABEL_303;
              }
              v193 = 40;
            }
            (*(void (**)(__int64))(*v213_.v214 + v193))((__int64)v213_.v214);
          }
        LABEL_303:
          v216 = v192;
          if (v192 != 0) {
            v110 = *(_QWORD*)(v192 + 432);
            v109 = v192;
            if (v110 == 0) {
              v194 = *(_QWORD*)(v192 + 440);
              v109 = v192;
              if (v194 != 0) {
                v195 = *(unsigned __int8*)(v194 + 16);
                v110 = 0;
                v109 = v192;
                if (v195 <= 8) {
                  v196 = 24LL * (unsigned int)v195 + 556024;
                  while (1) {
                    if (v195 <= 2) {
                      v110 =
                          *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v196);
                      if (v110 != 0) {
                        break;
                      }
                    }
                    ++v195;
                    v196 += 24;
                    if (v195 == 9) {
                      v110 = 0;
                      v109 = v192;
                      goto LABEL_294;
                    }
                  }
                  v109 = v192;
                }
              }
            }
            continue;
          }
          break;
        }
      LABEL_312:
        v149 = v213_.v213;
        v213_.v214 = v213_.v213;
        v213_.v213[0] = GameData_1ff14d8;
        v213_.v213[1] = &v215;
        v197 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
        v198 = *(__int64**)(v197 + 18832);
        v199 = *(__int64**)(v197 + 18824);
        if (v198 == v199) {
          goto LABEL_316;
        }
        do {
          v200 = *v199++;
          v216 = v200;
          if (v213_.v214 == nullptr) {
            goto LABEL_332;
          }
          (*(void (**)(_QWORD*, __int64*))(*v213_.v214 + 48LL))(v213_.v214,
                                                                &v216);
        } while (v199 != v198);
        v149 = v213_.v214;
        if (v213_.v214 == v213_.v213) {
          goto LABEL_316;
        }
        goto LABEL_216;
      case 5:
      case 6:
      case 7:
        v45 = v213_.v213;
        v213_.v214 = v213_.v213;
        v213_.v213[0] = GameData_1ff1658;
        v213_.v213[1] = &v215;
        v46 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
        v47 = *(__int64**)(v46 + 18832);
        v48 = *(__int64**)(v46 + 18824);
        if (v47 == v48) {
          goto LABEL_78;
        }
        do {
          v49 = *v48++;
          v216 = v49;
          if (v213_.v214 == nullptr) {
          LABEL_332:
            GameRoutine_60a310();
          }
          (*(void (**)(_QWORD*, __int64*))(*v213_.v214 + 48LL))(v213_.v214,
                                                                &v216);
        } while (v48 != v47);
        v45 = v213_.v214;
        if (v213_.v214 == v213_.v213) {
        LABEL_78:
          v50 = 32;
        }
        else {
          if (v213_.v214 == nullptr) {
            goto LABEL_80;
          }
          v50 = 40;
        }
        (*(void (**)(__int64))(*v45 + v50))((__int64)v45);
      LABEL_80:
        if ((*(_DWORD*)(*GameData_212ce90[0] + 20) & 0x100) != 0) {
          v58 = 0x9E3779B97F4B6254LL;
        }
        else {
          v58 = 0x9E3779B97F4BBB5ELL;
        }
        v215 ^= (v215 >> 4) + (v215 << 12) + v58;
        v59 = *(_QWORD**)GameData_212d020[0];
        v60 = *(__int64**)(*(_QWORD*)GameData_212d020[0] + 4376LL);
        v61 = *(__int64**)(*(_QWORD*)GameData_212d020[0] + 4384LL);
        if (v60 != v61) {
          do {
            v62 = *v60++;
            GameRoutine_f0f310((__int64)&v215, v62);
          } while (v60 != v61);
          v59 = *(_QWORD**)GameData_212d020[0];
        }
        v63 = v59[3];
        v64 = v59[13];
        if (v64 != 0 &&
            (v65 = v59[12], v66 = v59[13],
             atomic_fetch_add_explicit((atomic_ullong* volatile)(v64 + 16), 1u,
                                       memory_order_relaxed),
             v67 = std___1___shared_weak_count_lock(v66),
             *(__n128*)& v68 =
                 std___1___shared_weak_count___release_weak_alt1(v64),
             v67 != 0)) {
          if (v65 != 0) {
            v69 = 254936;
          }
          else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
            v69 = 8;
          }
          else {
            v69 = 127472;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v67 + 16LL))(v67,
                                                                       v68);
            std___1___shared_weak_count___release_weak_alt1(v67);
          }
        }
        else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
          v69 = 8;
        }
        else {
          v69 = 127472;
        }
        v118 = v63 + v69;
        if ((*(_QWORD*)(v63 + v69 + 127168) | *(_QWORD*)(v63 + v69 + 127192)) !=
                0 &&
            v63 != 0) {
          v120 = *(char**)(v118 + 127408);
          v121 = *(char**)(v118 + 127416);
          if (v120 != v121) {
            v122 = v215;
            do {
              v215 = ((v122 << 12) - 0x61C8864680B583EBLL + (v122 >> 4) +
                      (unsigned int)*v120) ^
                     v122;
              v123 = v120[1];
              v120 += 4;
              v122 =
                  (v123 - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4)) ^
                  v215;
              v215 = v122;
            } while (v120 != v121);
          }
        }
        LODWORD(v213_.v213[0]) = 15;
        v124 = game_UnitPool_GetFirst((int*)v213_.v213);
        if (v124 == 0) {
          goto LABEL_191;
        }
        v125 = *(_QWORD*)(v124 + 432);
        v126 = v124;
        if (v125 != 0) {
          goto LABEL_181;
        }
        v146 = *(_QWORD*)(v124 + 440);
        if (v146 == 0) {
          goto LABEL_190;
        }
        v147 = *(unsigned __int8*)(v146 + 16);
        if (v147 > 8) {
          goto LABEL_190;
        }
        v148 = 24LL * (unsigned int)v147 + 556024;
        while (1) {
          if (v147 <= 2) {
            v125 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v148);
            if (v125 != 0) {
              break;
            }
          }
          ++v147;
          v148 += 24;
          if (v147 == 9) {
            goto LABEL_190;
          }
        }
        while (1) {
          do {
          LABEL_181:
            v127 = v125;
            game_map_f0ee60(&v215, v126);
            v125 = *(_QWORD*)(v127 + 432);
            v126 = v127;
          } while (v125 != 0);
          v128 = *(_QWORD*)(v127 + 440);
          if (v128 == 0) {
            break;
          }
          v129 = *(unsigned __int8*)(v128 + 16);
          if (v129 > 8) {
            break;
          }
          v130 = 24LL * (unsigned int)v129 + 556024;
          while (1) {
            if (v129 <= 2) {
              v125 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v130);
              if (v125 != 0) {
                break;
              }
            }
            ++v129;
            v130 += 24;
            if (v129 == 9) {
              goto LABEL_189;
            }
          }
          v126 = v127;
        }
      LABEL_189:
        v126 = v127;
      LABEL_190:
        game_map_f0ee60(&v215, v126);
      LABEL_191:
        v131 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
        v133 = *(unsigned int*)(v131 + 8);
        v132 = *(unsigned int*)(v131 + 12);
        v134 =
            (v133 - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4)) ^ v215;
        v135 = v132 - 0x61C8864680B583EBLL;
        v136 = v133 + 32 * v132;
        v137 = v135 + (v134 << 12);
        if (v136 >= 0x400) {
          v138 = 0;
        }
        else {
          v138 = v136;
        }
        v215 = (v137 + (v134 >> 4)) ^ v134;
        v139 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
        v140 = *(__int16*)(v139 + 2LL * (unsigned int)v138 + 4200);
        v141 = *(_QWORD*)(v139 + 8);
        if ((v140 < 0 || v141 == 0) &&
            ((v140 = *(__int16*)(v139 + 2 * v138 + 2152)) < 0 || v141 == 0)) {
          v145 = *(__int16*)(v139 + 104 + 2 * v138);
          if (v145 < 0) {
            goto LABEL_318;
          }
          v142 = v141 + 144LL * (unsigned int)v145;
          if (v142 == 0) {
            goto LABEL_318;
          }
        }
        else {
          v142 = v141 + 144LL * (unsigned int)v140;
          if (v142 == 0) {
            goto LABEL_318;
          }
        }
        v143 = (*(__int64 (**)(__int64))(*(_QWORD*)v142 + 40LL))(v142);
        v213_.v214 = v213_.v213;
        v215 ^= v143 - 0x61C8864680B583EBLL + (v215 << 12) + (v215 >> 4);
        v213_.v213[0] = GameData_1ff1758;
        v213_.v213[1] = &v215;
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v142 + 752LL))(v142,
                                                                 v213_.v213);
        if (v213_.v214 == v213_.v213) {
          v144 = 32;
        }
        else {
          if (v213_.v214 == nullptr) {
            goto LABEL_214;
          }
          v144 = 40;
        }
        (*(void (**)(__int64))(*v213_.v214 + v144))((__int64)v213_.v214);
      LABEL_214:
        v213_.v213[0] = GameData_1ff17d8;
        v213_.v213[1] = &v215;
        v213_.v214 = v213_.v213;
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v142 + 744LL))(v142,
                                                                 v213_.v213);
      LABEL_215:
        v149 = v213_.v214;
        if (v213_.v214 == v213_.v213) {
        LABEL_316:
          v150 = 32;
        }
        else {
        LABEL_216:
          if (v149 == nullptr) {
            goto LABEL_318;
          }
          v150 = 40;
        }
        (*(void (**)(__int64))(*v149 + v150))((__int64)v149);
        goto LABEL_318;
      case 9:
      case 10:
      case 12:
      case 13:
        v8 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
        v9 = ((v7 << 12) - 0x61C8864680B583EBLL + (v7 >> 4) +
              *(unsigned int*)(v8 + 8)) ^
             v7;
        v10 = (*(unsigned int*)(v8 + 12) - 0x61C8864680B583EBLL + (v9 << 12) +
               (v9 >> 4)) ^
              v9;
        v215 = v10;
        if (*GameData_212ce88[0] != 0) {
          v11 = *(_QWORD*)(*GameData_212ce88[0] + 8);
          if (*(_BYTE*)(v11 + 4) != 9) {
            for (j = 0; j != 32; ++j) {
              v13 = 0;
              v14 = (int*)(v11 + 2260);
              v15 = 1 << j;
              do {
                v16 = v11 + 2120 + j + v13;
                v13 += 128;
                v17 = ((v10 << 12) - 0x61C8864680B583EBLL + (v10 >> 4) +
                       *(unsigned __int8*)(v16 - 2056)) ^
                      v10;
                v215 = v17;
                if ((*(v14 - 35) & v15) != 0) {
                  v18 = 0x9E3779B97F4B6254LL;
                }
                else {
                  v18 = 0x9E3779B97F4BBB5ELL;
                }
                v19 = (v18 + (v17 << 12) + (v17 >> 4)) ^ v17;
                v215 = v19;
                if ((*(v14 - 3) & v15) != 0) {
                  v20 = 0x9E3779B97F4B6254LL;
                }
                else {
                  v20 = 0x9E3779B97F4BBB5ELL;
                }
                v215 = (v20 + (v19 << 12) + (v19 >> 4)) ^ v19;
                v21 = ((v215 << 12) - 0x61C8864680B583EBLL + (v215 >> 4) +
                       *(unsigned __int8*)(v16 - 2024)) ^
                      v215;
                v215 = v21;
                if ((*(v14 - 34) & v15) != 0) {
                  v22 = 0x9E3779B97F4B6254LL;
                }
                else {
                  v22 = 0x9E3779B97F4BBB5ELL;
                }
                v23 = (v22 + (v21 << 12) + (v21 >> 4)) ^ v21;
                v215 = v23;
                if ((*(v14 - 2) & v15) != 0) {
                  v24 = 0x9E3779B97F4B6254LL;
                }
                else {
                  v24 = 0x9E3779B97F4BBB5ELL;
                }
                v25 = (v24 + (v23 << 12) + (v23 >> 4)) ^ v23;
                v26 = (unsigned __int8*)(v16 - 1992);
                v27 = (unsigned __int8*)(v16 - 1960);
                v215 = v25;
                v28 = ((v25 << 12) - 0x61C8864680B583EBLL + (v25 >> 4) + *v26) ^
                      v25;
                v215 = v28;
                if ((*(v14 - 33) & v15) != 0) {
                  v29 = 0x9E3779B97F4B6254LL;
                }
                else {
                  v29 = 0x9E3779B97F4BBB5ELL;
                }
                v30 = (v29 + (v28 << 12) + (v28 >> 4)) ^ v28;
                v215 = v30;
                if ((*(v14 - 1) & v15) != 0) {
                  v31 = 0x9E3779B97F4B6254LL;
                }
                else {
                  v31 = 0x9E3779B97F4BBB5ELL;
                }
                v215 = (v31 + (v30 << 12) + (v30 >> 4)) ^ v30;
                v32 =
                    ((v215 << 12) - 0x61C8864680B583EBLL + (v215 >> 4) + *v27) ^
                    v215;
                v215 = v32;
                if ((*(v14 - 32) & v15) != 0) {
                  v33 = 0x9E3779B97F4B6254LL;
                }
                else {
                  v33 = 0x9E3779B97F4BBB5ELL;
                }
                v34 = (v33 + (v32 << 12) + (v32 >> 4)) ^ v32;
                v215 = v34;
                v35 = *v14;
                v14 += 4;
                if ((v35 & v15) != 0) {
                  v36 = 0x9E3779B97F4B6254LL;
                }
                else {
                  v36 = 0x9E3779B97F4BBB5ELL;
                }
                v10 = (v36 + (v34 << 12) + (v34 >> 4)) ^ v34;
                v215 = v10;
              } while (v13 != 1024);
            }
            if ((*(_DWORD*)v11 & 0x8000000) != 0) {
              v37 = 0x9E3779B97F4B6254LL;
            }
            else {
              v37 = 0x9E3779B97F4BBB5ELL;
            }
            v215 = ((v10 >> 4) + (v10 << 12) + v37) ^ v10;
          }
        }
        LODWORD(v213_.v213[0]) = 15;
        v38 = game_UnitPool_GetFirst((int*)v213_.v213);
        if (v38 == 0) {
          goto LABEL_95;
        }
        v39 = *(_QWORD*)(v38 + 432);
        v40 = v38;
        if (v39 != 0) {
          goto LABEL_54;
        }
        v113 = *(_QWORD*)(v38 + 440);
        if (v113 == 0) {
          goto LABEL_94;
        }
        v114 = *(unsigned __int8*)(v113 + 16);
        if (v114 > 8) {
          goto LABEL_94;
        }
        v115 = 24LL * (unsigned int)v114 + 556024;
        while (1) {
          if (v114 <= 2) {
            v39 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v115);
            if (v39 != 0) {
              break;
            }
          }
          ++v114;
          v115 += 24;
          if (v114 == 9) {
            goto LABEL_94;
          }
        }
        while (1) {
          do {
          LABEL_54:
            v41 = v39;
            game_map_f0ee60(&v215, v40);
            v39 = *(_QWORD*)(v41 + 432);
            v40 = v41;
          } while (v39 != 0);
          v42 = *(_QWORD*)(v41 + 440);
          if (v42 == 0) {
            break;
          }
          v43 = *(unsigned __int8*)(v42 + 16);
          if (v43 > 8) {
            break;
          }
          v44 = 24LL * (unsigned int)v43 + 556024;
          while (1) {
            if (v43 <= 2) {
              v39 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v44);
              if (v39 != 0) {
                break;
              }
            }
            ++v43;
            v44 += 24;
            if (v43 == 9) {
              goto LABEL_93;
            }
          }
          v40 = v41;
        }
      LABEL_93:
        v40 = v41;
      LABEL_94:
        game_map_f0ee60(&v215, v40);
      LABEL_95:
        if (*(_DWORD*)(v1 + 4368) >= 3u &&
            *(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
          v70 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8));
          if (v70 != nullptr && v70[49] != 0 &&
              (*((_BYTE*)v70 + 417) & 0x1C) == 0) {
            v71 = (__int64)v70;
            if ((*(float (**)(__int64*))(v70[19] + 16))(v70 + 19) > 0x0.0p+0f) {
              game_map_f0ee60(&v215, v71);
            }
          }
        }
        v72 = (*(_QWORD*)(v1 + 184) - 0x61C8864680B583EBLL + (v215 << 12) +
               (v215 >> 4)) ^
              v215;
        v73 = (*(_QWORD*)(v1 + 176) - 0x61C8864680B583EBLL + (v72 << 12) +
               (v72 >> 4)) ^
              v72;
        v74 = (*(_QWORD*)(v1 + 168) - 0x61C8864680B583EBLL + (v73 << 12) +
               (v73 >> 4)) ^
              v73;
        v75 = *(_DWORD*)(v1 + 4368);
        v215 = v74;
        if (v75 > 7) {
          v77 = 0x9E3779B97F4BBB5ELL;
        }
        else {
          v76 = 1 << v75;
          v77 = 0x9E3779B97F4BBB5ELL;
          if ((v76 & 0xB0) != 0) {
            v78 = GameRoutine_f23ea0(
                *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL) + 254936LL);
            v74 = v215;
            if (v78) {
              v77 = 0x9E3779B97F4B6254LL;
            }
            else {
              v77 = 0x9E3779B97F4BBB5ELL;
            }
          }
        }
        v79 = (v77 + (v74 << 12) + (v74 >> 4)) ^ v74;
        if (*(_BYTE*)(*(_QWORD*)(v1 + 4536) + 112LL) != 0) {
          v80 = 0x9E3779B97F4B6254LL;
        }
        else {
          v80 = 0x9E3779B97F4BBB5ELL;
        }
        v215 = (v80 + (v79 << 12) + (v79 >> 4)) ^ v79;
        v81 = GameRoutine_f097d0(v1);
        v82 = 0x9E3779B97F4BBB5ELL;
        if (v81 != 0) {
          v83 = v81;
          LODWORD(v213_.v213[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                                              game_g_shared_system_skills_ptr) &
                                   0xFFF;
          v84 = game_HasSkill((_QWORD*)(v81 + 1744), (unsigned int*)v213_.v213);
          v82 = 0x9E3779B97F4BBB5ELL;
          if ((v84 & 1) == 0) {
            if (*(_WORD*)(v83 + 492) != 0 || *(_BYTE*)(v83 + 496) != 0 ||
                (LODWORD(v213_.v213[0]) =
                     *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                                game_g_shared_system_skills_ptr) &
                     0xFFF,
                 v85 = game_HasSkill((_QWORD*)(v83 + 1744),
                                     (unsigned int*)v213_.v213),
                 v82 = 0x9E3779B97F4BBB5ELL, (v85 & 1) == 0)) {
              v82 = 0x9E3779B97F4BBB5ELL;
              if ((*(_BYTE*)(v83 + 416) & 4) == 0) {
                LODWORD(v213_.v213[0]) =
                    *(_DWORD*)((_BYTE*)((char*)0x40LL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
                if ((game_HasSkill((_QWORD*)(v83 + 1744),
                                   (unsigned int*)v213_.v213) &
                     1) != 0) {
                  v82 = 0x9E3779B97F4BBB5ELL;
                }
                else {
                  v82 = 0x9E3779B97F4B6254LL;
                }
              }
            }
          }
        }
        v215 ^= v82 + (v215 << 12) + (v215 >> 4);
        goto LABEL_318;
      case 11:
        LODWORD(v213_.v213[0]) = 15;
        v86 = game_UnitPool_GetFirst((int*)v213_.v213);
        if (v86 == 0) {
          goto LABEL_220;
        }
        v87 = *(_QWORD*)(v86 + 432);
        v88 = v86;
        if (v87 != 0) {
          goto LABEL_122;
        }
        v177 = *(_QWORD*)(v86 + 440);
        if (v177 == 0) {
          goto LABEL_219;
        }
        v178 = *(unsigned __int8*)(v177 + 16);
        if (v178 > 8) {
          goto LABEL_219;
        }
        v179 = 24LL * (unsigned int)v178 + 556024;
        break;
      case 15:
        v213_.v214 = v213_.v213;
        v112 = *GameData_212cfd8[0] + 24;
        v215 = ((v7 << 12) - 0x61C8864680B583EBLL + (v7 >> 4) +
                *(unsigned int*)(*GameData_212cfd8[0] + 160)) ^
               v7;
        v213_.v213[0] = GameData_1ff15d8;
        v213_.v213[1] = &v215;
        IRoute_74f1a0(v112, (__int64)v213_.v213);
        goto LABEL_215;
      case 16:
        v107 = *(char**)(v1 + 112);
        if (v107 != nullptr && v107[12] == 1) {
          v108 = ((v7 << 12) - 0x61C8864680B583EBLL + (v7 >> 4) +
                  (unsigned int)v107[8]) ^
                 v7;
          v215 = ((unsigned int)v107[9] - 0x61C8864680B583EBLL + (v108 << 12) +
                  (v108 >> 4)) ^
                 v108;
        }
        v213_.v213[0] = GameData_1ff1858;
        v213_.v213[1] = &v215;
        v213_.v214 = v213_.v213;
        GameRoutine_73bb40((__int64)v213_.v213);
        goto LABEL_215;
      default:
        goto LABEL_318;
      }
      while (1) {
        if (v178 <= 2) {
          v87 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v179);
          if (v87 != 0) {
            break;
          }
        }
        ++v178;
        v179 += 24;
        if (v178 == 9) {
          goto LABEL_219;
        }
      }
      while (1) {
        do {
        LABEL_122:
          v89 = v87;
          game_map_f0ee60(&v215, v88);
          v87 = *(_QWORD*)(v89 + 432);
          v88 = v89;
        } while (v87 != 0);
        v90 = *(_QWORD*)(v89 + 440);
        if (v90 == 0) {
          break;
        }
        v91 = *(unsigned __int8*)(v90 + 16);
        if (v91 > 8) {
          break;
        }
        v92 = 24LL * (unsigned int)v91 + 556024;
        while (1) {
          if (v91 <= 2) {
            v87 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v92);
            if (v87 != 0) {
              break;
            }
          }
          ++v91;
          v92 += 24;
          if (v91 == 9) {
            goto LABEL_218;
          }
        }
        v88 = v89;
      }
    LABEL_218:
      v88 = v89;
    LABEL_219:
      game_map_f0ee60(&v215, v88);
    LABEL_220:
      v151 = (*(unsigned int*)(v1 + 4368) - 0x61C8864680B583EBLL +
              (v215 << 12) + (v215 >> 4)) ^
             v215;
      v152 = *(_QWORD*)GameData_212d038[0];
      if (*(_QWORD*)GameData_212d038[0] != 0) {
        v153 = ((v151 << 12) - 0x61C8864680B583EBLL + (v151 >> 4) +
                *(unsigned int*)(v152 + 64)) ^
               v151;
        v154 = (*(unsigned int*)(v152 + 68) - 0x61C8864680B583EBLL +
                (v153 << 12) + (v153 >> 4)) ^
               v153;
        v155 = (*(unsigned int*)(v152 + 72) - 0x61C8864680B583EBLL +
                (v154 << 12) + (v154 >> 4)) ^
               v154;
        v156 = (*(unsigned int*)(v152 + 48) - 0x61C8864680B583EBLL +
                (v155 << 12) + (v155 >> 4)) ^
               v155;
        v157 = (*(unsigned int*)(v152 + 52) - 0x61C8864680B583EBLL +
                (v156 << 12) + (v156 >> 4)) ^
               v156;
        v158 = (*(unsigned int*)(v152 + 56) - 0x61C8864680B583EBLL +
                (v157 << 12) + (v157 >> 4)) ^
               v157;
        v159 = ((unsigned int)*(char*)(v152 + 82) - 0x61C8864680B583EBLL +
                (v158 << 12) + (v158 >> 4)) ^
               v158;
        v151 = ((unsigned int)*(char*)(v152 + 83) - 0x61C8864680B583EBLL +
                (v159 << 12) + (v159 >> 4)) ^
               v159;
      }
      v215 = (*(_QWORD*)(v1 + 168) - 0x61C8864680B583EBLL + (v151 << 12) +
              (v151 >> 4)) ^
             v151;
      v160 = MapDrawTargetLine_f21270();
      game_map_f0ee60(&v215, v160);
      v161 = 0x9E3779B97F4BBB5ELL;
      if (*GameData_212cfd0[0] != 0) {
        if ((*(_BYTE*)(*GameData_212cfd0[0] + 12673) & 0x40) != 0) {
          v161 = 0x9E3779B97F4B6254LL;
        }
        else {
          v161 = 0x9E3779B97F4BBB5ELL;
        }
      }
      v215 ^= v161 + (v215 << 12) + (v215 >> 4);
      if ((GameRoutine_788a40() & 1) != 0) {
        v162 = 0x9E3779B97F4B6254LL;
      }
      else {
        v162 = 0x9E3779B97F4BBB5ELL;
      }
      v163 = (v162 + (v215 << 12) + (v215 >> 4)) ^ v215;
      if ((*(_DWORD*)(*GameData_212ce90[0] + 20) & 0x100) != 0) {
        v164 = 0x9E3779B97F4B6254LL;
      }
      else {
        v164 = 0x9E3779B97F4BBB5ELL;
      }
      v215 = ((v163 >> 4) + (v163 << 12) + v164) ^ v163;
    LABEL_318:
      v201 = v215;
      v202 = v212 + 40 * v2;
      if (*(_BYTE*)(v202 + 8) != 1 || v215 != *(_QWORD*)v202) {
        v204 = v1;
        v205 = *(_QWORD**)(v1 + 56);
        v206 = *(_QWORD**)(v204 + 64);
        while (v205 != v206) {
          v207 = v205[1];
          if (v207 != 0) {
            v208 = std___1___shared_weak_count_lock(v207);
            if (v208 != 0) {
              v209 = (_BYTE*)*v205;
              v210 = v208;
              if (*v205 != 0 && v2 == (*(unsigned int (**)(_QWORD))(
                                          *(_QWORD*)v209 + 40LL))(*v205)) {
                v209[8] = 1;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v210 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v210 + 16LL))(v210);
                std___1___shared_weak_count___release_weak_alt1(v210);
              }
            }
          }
          v205 += 2;
        }
        v1 = a1;
        *(_QWORD*)v202 = v201;
        *(_BYTE*)(v202 + 8) = 1;
      }
      ++v2;
    } while (v2 != 17);
  }
}

__int64 game_map_f086e0(__int64 a1)
{
  unsigned int v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned int v5;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;

  if (GameData_21ed070 != 0) {
    v2 = 0;
  }
  else if (*(_BYTE*)(a1 + 196) == 1) {
    v2 = *(_DWORD*)(a1 + 192);
  }
  else {
    v2 = GameData_21d92e0;
  }
  v3 = 0x9E3779B97F4BBB5ELL;
  v4 = (((*(_QWORD*)(a1 + 168) - 0x61C8864680B583EBLL) << 12) -
        0x61C8864680B583EBLL +
        ((unsigned __int64)(*(_QWORD*)(a1 + 168) - 0x61C8864680B583EBLL) >> 4) +
        v2) ^
       (*(_QWORD*)(a1 + 168) - 0x61C8864680B583EBLL);
  v5 = *(_DWORD*)(a1 + 4368);
  if (v5 > 7 || ((1 << v5) & 0xB0) == 0) {
    v8 = 0x9E3779B97F4BBB5ELL;
  }
  else {
    v7 = GameRoutine_f23ea0(*(_QWORD*)(GameData_21cd120 + 24) + 254936LL);
    v5 = *(_DWORD*)(a1 + 4368);
    if (v7) {
      v8 = 0x9E3779B97F4B6254LL;
    }
    else {
      v8 = 0x9E3779B97F4BBB5ELL;
    }
  }
  v9 = v5 - 0x61C8864680B583EBLL;
  v10 = (v8 + (v4 << 12) + (v4 >> 4)) ^ v4;
  if ((*(_DWORD*)(*GameData_212ce90[0] + 20) & 0x100) != 0) {
    v11 = 0x9E3779B97F4B6254LL;
  }
  else {
    v11 = 0x9E3779B97F4BBB5ELL;
  }
  v12 = ((v10 >> 4) + (v10 << 12) + v11) ^ v10;
  v28 = (v9 + (v12 << 12) + (v12 >> 4)) ^ v12;
  v13 = GameRoutine_f097d0(a1);
  game_map_f0ee60(&v28, v13);
  result = GameRoutine_f097d0(a1);
  if (result != 0) {
    v15 = result;
    v16 = game_g_shared_system_skills_ptr;
    v29 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    result = game_HasSkill((_QWORD*)(result + 1744), (unsigned int*)&v29);
    if ((result & 1) == 0) {
      if (*(_WORD*)(v15 + 492) != 0 || *(_BYTE*)(v15 + 496) != 0 ||
          (v29 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v16) & 0xFFF,
           ((result =
                 game_HasSkill((_QWORD*)(v15 + 1744), (unsigned int*)&v29)) &
            1) == 0)) {
        if ((*(_BYTE*)(v15 + 416) & 4) == 0) {
          v29 = *(_DWORD*)((_BYTE*)((char*)0x40LL) + v16) & 0xFFF;
          result = game_HasSkill((_QWORD*)(v15 + 1744), (unsigned int*)&v29);
          if ((result & 1) == 0) {
            v3 = 0x9E3779B97F4B6254LL;
          }
        }
      }
    }
  }
  if (*(_BYTE*)(a1 + 5208) != 0) {
    v18 = *(_QWORD*)(a1 + 5200) - 0x61C8864680B583EBLL;
  }
  else {
    v18 = 0x9E3779B97F4A7C15LL;
  }
  v17 = (v3 + (v28 << 12) + (v28 >> 4)) ^ v28;
  v19 = (v18 + (v17 << 12) + (v17 >> 4)) ^ v17;
  if (*(_BYTE*)(a1 + 5248) != 0) {
    v20 = *(_QWORD*)(a1 + 5240) - 0x61C8864680B583EBLL;
  }
  else {
    v20 = 0x9E3779B97F4A7C15LL;
  }
  v21 = (v20 + (v19 << 12) + (v19 >> 4)) ^ v19;
  if (*(_BYTE*)(a1 + 5328) != 0) {
    v22 = *(_QWORD*)(a1 + 5320) - 0x61C8864680B583EBLL;
  }
  else {
    v22 = 0x9E3779B97F4A7C15LL;
  }
  v23 = (v22 + (v21 << 12) + (v21 >> 4)) ^ v21;
  if (*(_BYTE*)(a1 + 5368) != 0) {
    v24 = *(_QWORD*)(a1 + 5360) - 0x61C8864680B583EBLL;
  }
  else {
    v24 = 0x9E3779B97F4A7C15LL;
  }
  v25 = (v24 + (v23 << 12) + (v23 >> 4)) ^ v23;
  if (*(_BYTE*)(a1 + 4968) != 0) {
    v26 = *(_QWORD*)(a1 + 4960) - 0x61C8864680B583EBLL;
  }
  else {
    v26 = 0x9E3779B97F4A7C15LL;
  }
  v27 = (v26 + (v25 << 12) + (v25 >> 4)) ^ v25;
  if (*(_QWORD*)(a1 + 5544) != v27) {
    *(_QWORD*)(a1 + 5544) = v27;
    *(_BYTE*)(a1 + 5552) = 1;
  }
  return result;
}

void game_map_f089a0(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  int v3;
  int v4;
  bool v5;
  int v6;
  int v7;
  int v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  long double v16;
  __int64 v17;
  bool v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  long double v28;
  __int64 v29;
  bool v30;
  int v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  long double v40;
  __int64 v41;
  bool v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  long double v49;
  __int64 v50;
  bool v51;
  bool v52;
  int v53;
  float v54;
  bool v55;
  float v56;
  float v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  long double v63;
  __int64 v64;
  bool v65;
  float v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  long double v73;
  __int64 v74;
  bool v75;
  float v76;
  int v77;
  bool v78;
  float v79;
  float v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  long double v86;
  __int64 v87;
  bool v88;
  float v89;
  int v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  long double v96;
  bool v97;
  float v98;

  v2 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL) *
       0x1.0aef000000000p+4f;
  if (*(float*)(a1 + 5520) > 0x0.0p+0f || *(float*)(a1 + 5524) > 0x0.0p+0f ||
      *(float*)(a1 + 5528) > 0x0.0p+0f || *(float*)(a1 + 5532) > 0x0.0p+0f) {
    v4 = *(_DWORD*)(a1 + 5536) + 1;
    v6 = -v4;
    v5 = -v4 < 0;
    v7 = v4 & 3;
    v8 = v6 & 3;
    if (v5) {
      v3 = v7;
    }
    else {
      v3 = -v8;
    }
  }
  else {
    *(_DWORD*)(a1 + 5536) = 0;
    v3 = 1;
  }
  v9 = v2 / 0x1.f400000000000p+9f;
  v10 = 254936;
  if (GameRoutine_f09e50(a1)) {
    v11 = *(_QWORD*)(GameData_21cd120 + 24);
    v12 = *(_QWORD*)(GameData_21cd120 + 104);
    if (v12 != 0 &&
        (v13 = *(_QWORD*)(GameData_21cd120 + 96),
         v14 = *(_QWORD*)(GameData_21cd120 + 104),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                   memory_order_relaxed),
         v15 = std___1___shared_weak_count_lock(v14),
         *(__n128*)& v16 = std___1___shared_weak_count___release_weak_alt1(v12),
         v15 != 0)) {
      v17 = 254936;
      if (v13 == 0) {
        if (*(_BYTE*)(GameData_21cd0f0 + 156) != 0) {
          v17 = 8;
        }
        else {
          v17 = 127472;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 16LL))(v15, v16);
        std___1___shared_weak_count___release_weak_alt1(v15);
      }
    }
    else {
      v17 = *(_BYTE*)(GameData_21cd0f0 + 156) != 0 ? 8LL : 127472LL;
    }
    v18 = (*(_QWORD*)(v11 + v17 + 127168) | *(_QWORD*)(v11 + v17 + 127192)) ==
              0 ||
          v11 == 0;
    if (!v18 && (*(_BYTE*)(v11 + v17 + v3 + 127200) & 1) != 0) {
      goto LABEL_66;
    }
  }
  v19 = *(_DWORD*)(a1 + 5536) + 2;
  v20 = -v19;
  v5 = -v19 < 0;
  v21 = v19 & 3;
  v22 = v20 & 3;
  v3 = v5 ? v21 : -v22;
  if (GameRoutine_f09e50(a1)) {
    v23 = *(_QWORD*)(GameData_21cd120 + 24);
    v24 = *(_QWORD*)(GameData_21cd120 + 104);
    if (v24 != 0 &&
        (v25 = *(_QWORD*)(GameData_21cd120 + 96),
         v26 = *(_QWORD*)(GameData_21cd120 + 104),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                   memory_order_relaxed),
         v27 = std___1___shared_weak_count_lock(v26),
         *(__n128*)& v28 = std___1___shared_weak_count___release_weak_alt1(v24),
         v27 != 0)) {
      v29 = 254936;
      if (v25 == 0) {
        if (*(_BYTE*)(GameData_21cd0f0 + 156) != 0) {
          v29 = 8;
        }
        else {
          v29 = 127472;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v27 + 16LL))(v27, v28);
        std___1___shared_weak_count___release_weak_alt1(v27);
      }
    }
    else {
      v29 = *(_BYTE*)(GameData_21cd0f0 + 156) != 0 ? 8LL : 127472LL;
    }
    v30 = (*(_QWORD*)(v23 + v29 + 127168) | *(_QWORD*)(v23 + v29 + 127192)) ==
              0 ||
          v23 == 0;
    if (!v30 && (*(_BYTE*)(v23 + v29 + v3 + 127200) & 1) != 0) {
      goto LABEL_66;
    }
  }
  v31 = *(_DWORD*)(a1 + 5536) + 3;
  v32 = -v31;
  v5 = -v31 < 0;
  v33 = v31 & 3;
  v34 = v32 & 3;
  v3 = v5 ? v33 : -v34;
  if (!GameRoutine_f09e50(a1)) {
    goto LABEL_75;
  }
  v35 = *(_QWORD*)(GameData_21cd120 + 24);
  v36 = *(_QWORD*)(GameData_21cd120 + 104);
  if (v36 != 0 &&
      (v37 = *(_QWORD*)(GameData_21cd120 + 96),
       v38 = *(_QWORD*)(GameData_21cd120 + 104),
       atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                                 memory_order_relaxed),
       v39 = std___1___shared_weak_count_lock(v38),
       *(__n128*)& v40 = std___1___shared_weak_count___release_weak_alt1(v36),
       v39 != 0)) {
    v41 = 254936;
    if (v37 == 0) {
      if (*(_BYTE*)(GameData_21cd0f0 + 156) != 0) {
        v41 = 8;
      }
      else {
        v41 = 127472;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v39 + 16LL))(v39, v40);
      std___1___shared_weak_count___release_weak_alt1(v39);
    }
  }
  else {
    v41 = *(_BYTE*)(GameData_21cd0f0 + 156) != 0 ? 8LL : 127472LL;
  }
  v42 =
      (*(_QWORD*)(v35 + v41 + 127168) | *(_QWORD*)(v35 + v41 + 127192)) == 0 ||
      v35 == 0;
  if (!v42 && (*(_BYTE*)(v35 + v41 + v3 + 127200) & 1) != 0) {
  LABEL_66:
    v43 = *(int*)(a1 + 5536);
    *(float*)(a1 + 5540) = v9 + *(float*)(a1 + 5540);
    if (!GameRoutine_f09e50(a1)) {
      goto LABEL_87;
    }
    v44 = *(_QWORD*)(GameData_21cd120 + 24);
    v45 = *(_QWORD*)(GameData_21cd120 + 104);
    if (v45 != 0 &&
        (v46 = *(_QWORD*)(GameData_21cd120 + 96),
         v47 = *(_QWORD*)(GameData_21cd120 + 104),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16), 1u,
                                   memory_order_relaxed),
         v48 = std___1___shared_weak_count_lock(v47),
         *(__n128*)& v49 = std___1___shared_weak_count___release_weak_alt1(v45),
         v48 != 0)) {
      v50 = 254936;
      if (v46 == 0) {
        if (*(_BYTE*)(GameData_21cd0f0 + 156) != 0) {
          v50 = 8;
        }
        else {
          v50 = 127472;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v48 + 16LL))(v48, v49);
        std___1___shared_weak_count___release_weak_alt1(v48);
      }
    }
    else {
      v50 = *(_BYTE*)(GameData_21cd0f0 + 156) != 0 ? 8LL : 127472LL;
    }
    v51 = (*(_QWORD*)(v44 + v50 + 127168) | *(_QWORD*)(v44 + v50 + 127192)) ==
              0 ||
          v44 == 0;
    if (v51 || (*(_BYTE*)(v44 + v50 + v43 + 127200) == 1
                    ? (v52 = *(float*)(a1 + 5540) <= 0x1.8000000000000p+0f)
                    : (v52 = false),
                !v52)) {
    LABEL_87:
      *(_DWORD*)(a1 + 5540) = 0;
      *(_DWORD*)(a1 + 5536) = v3;
    }
  }
  else {
  LABEL_75:
    *(_DWORD*)(a1 + 5540) = 0;
  }
  v53 = *(_DWORD*)(a1 + 5536);
  v54 = fabsf(v9 / 0x1.3333340000000p-3f);
  v55 = GameRoutine_f09e50(a1);
  v56 = 0x0.0p+0f;
  v57 = 0x0.0p+0f;
  if (v55) {
    v58 = *(_QWORD*)(GameData_21cd120 + 24);
    v59 = *(_QWORD*)(GameData_21cd120 + 104);
    if (v59 != 0 &&
        (v60 = *(_QWORD*)(GameData_21cd120 + 96),
         v61 = *(_QWORD*)(GameData_21cd120 + 104),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 16), 1u,
                                   memory_order_relaxed),
         v62 = std___1___shared_weak_count_lock(v61),
         *(__n128*)& v63 = std___1___shared_weak_count___release_weak_alt1(v59),
         v62 != 0)) {
      v64 = 254936;
      if (v60 == 0) {
        if (*(_BYTE*)(GameData_21cd0f0 + 156) != 0) {
          v64 = 8;
        }
        else {
          v64 = 127472;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v62 + 16LL))(v62, v63);
        std___1___shared_weak_count___release_weak_alt1(v62);
      }
    }
    else {
      v64 = *(_BYTE*)(GameData_21cd0f0 + 156) != 0 ? 8LL : 127472LL;
    }
    v57 = 0x0.0p+0f;
    v65 = (*(_QWORD*)(v58 + v64 + 127168) | *(_QWORD*)(v58 + v64 + 127192)) ==
              0 ||
          v58 == 0;
    if (!v65 && *(_BYTE*)(v58 + v64 + 127200) == 1) {
      v66 = 0x1.0000000000000p+0f;
      if (v53 != 0) {
        v66 = 0x0.0p+0f;
      }
      v57 = *(float*)(a1 + 5520);
      if (v57 <= v66) {
        if (v57 >= v66) {
          goto LABEL_113;
        }
        v57 = v54 + v57;
        if (v57 <= v66) {
          goto LABEL_113;
        }
      }
      else {
        v57 = v57 - v54;
        if (v57 >= v66) {
          goto LABEL_113;
        }
      }
      v57 = v66;
    }
  }
LABEL_113:
  v67 = *(_DWORD*)(a1 + 5536);
  *(float*)(a1 + 5520) = v57;
  if (GameRoutine_f09e50(a1)) {
    v68 = *(_QWORD*)(GameData_21cd120 + 24);
    v69 = *(_QWORD*)(GameData_21cd120 + 104);
    if (v69 != 0 &&
        (v70 = *(_QWORD*)(GameData_21cd120 + 96),
         v71 = *(_QWORD*)(GameData_21cd120 + 104),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 16), 1u,
                                   memory_order_relaxed),
         v72 = std___1___shared_weak_count_lock(v71),
         *(__n128*)& v73 = std___1___shared_weak_count___release_weak_alt1(v69),
         v72 != 0)) {
      v74 = 254936;
      if (v70 == 0) {
        if (*(_BYTE*)(GameData_21cd0f0 + 156) != 0) {
          v74 = 8;
        }
        else {
          v74 = 127472;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v72 + 16LL))(v72, v73);
        std___1___shared_weak_count___release_weak_alt1(v72);
      }
    }
    else {
      v74 = *(_BYTE*)(GameData_21cd0f0 + 156) != 0 ? 8LL : 127472LL;
    }
    v75 = (*(_QWORD*)(v68 + v74 + 127168) | *(_QWORD*)(v68 + v74 + 127192)) ==
              0 ||
          v68 == 0;
    if (!v75 && *(_BYTE*)(v68 + v74 + 127201) == 1) {
      v56 = *(float*)(a1 + 5524);
      v76 = 0x0.0p+0f;
      if (v67 == 1) {
        v76 = 0x1.0000000000000p+0f;
      }
      if (v56 <= v76) {
        if (v56 >= v76) {
          goto LABEL_138;
        }
        v56 = v54 + v56;
        if (v56 <= v76) {
          goto LABEL_138;
        }
      }
      else {
        v56 = v56 - v54;
        if (v56 >= v76) {
          goto LABEL_138;
        }
      }
      v56 = v76;
    }
  }
LABEL_138:
  v77 = *(_DWORD*)(a1 + 5536);
  *(float*)(a1 + 5524) = v56;
  v78 = GameRoutine_f09e50(a1);
  v79 = 0x0.0p+0f;
  v80 = 0x0.0p+0f;
  if (v78) {
    v81 = *(_QWORD*)(GameData_21cd120 + 24);
    v82 = *(_QWORD*)(GameData_21cd120 + 104);
    if (v82 != 0 &&
        (v83 = *(_QWORD*)(GameData_21cd120 + 96),
         v84 = *(_QWORD*)(GameData_21cd120 + 104),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v82 + 16), 1u,
                                   memory_order_relaxed),
         v85 = std___1___shared_weak_count_lock(v84),
         *(__n128*)& v86 = std___1___shared_weak_count___release_weak_alt1(v82),
         v85 != 0)) {
      v87 = 254936;
      if (v83 == 0) {
        if (*(_BYTE*)(GameData_21cd0f0 + 156) != 0) {
          v87 = 8;
        }
        else {
          v87 = 127472;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v85 + 16LL))(v85, v86);
        std___1___shared_weak_count___release_weak_alt1(v85);
      }
    }
    else {
      v87 = *(_BYTE*)(GameData_21cd0f0 + 156) != 0 ? 8LL : 127472LL;
    }
    v80 = 0x0.0p+0f;
    v88 = (*(_QWORD*)(v81 + v87 + 127168) | *(_QWORD*)(v81 + v87 + 127192)) ==
              0 ||
          v81 == 0;
    if (!v88 && *(_BYTE*)(v81 + v87 + 127202) == 1) {
      v89 = 0x1.0000000000000p+0f;
      if (v77 != 2) {
        v89 = 0x0.0p+0f;
      }
      v80 = *(float*)(a1 + 5528);
      if (v80 <= v89) {
        if (v80 >= v89) {
          goto LABEL_163;
        }
        v80 = v54 + v80;
        if (v80 <= v89) {
          goto LABEL_163;
        }
      }
      else {
        v80 = v80 - v54;
        if (v80 >= v89) {
          goto LABEL_163;
        }
      }
      v80 = v89;
    }
  }
LABEL_163:
  v90 = *(_DWORD*)(a1 + 5536);
  *(float*)(a1 + 5528) = v80;
  if (GameRoutine_f09e50(a1)) {
    v91 = *(_QWORD*)(GameData_21cd120 + 24);
    v92 = *(_QWORD*)(GameData_21cd120 + 104);
    if (v92 != 0 &&
        (v93 = *(_QWORD*)(GameData_21cd120 + 96),
         v94 = *(_QWORD*)(GameData_21cd120 + 104),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v92 + 16), 1u,
                                   memory_order_relaxed),
         v95 = std___1___shared_weak_count_lock(v94),
         *(__n128*)& v96 = std___1___shared_weak_count___release_weak_alt1(v92),
         v95 != 0)) {
      if (v93 == 0) {
        if (*(_BYTE*)(GameData_21cd0f0 + 156) != 0) {
          v10 = 8;
        }
        else {
          v10 = 127472;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v95 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v95 + 16LL))(v95, v96);
        std___1___shared_weak_count___release_weak_alt1(v95);
      }
    }
    else {
      v10 = *(_BYTE*)(GameData_21cd0f0 + 156) != 0 ? 8LL : 127472LL;
    }
    v97 = (*(_QWORD*)(v91 + v10 + 127168) | *(_QWORD*)(v91 + v10 + 127192)) ==
              0 ||
          v91 == 0;
    if (!v97 && *(_BYTE*)(v91 + v10 + 127203) == 1) {
      v79 = *(float*)(a1 + 5532);
      v98 = 0x0.0p+0f;
      if (v90 == 3) {
        v98 = 0x1.0000000000000p+0f;
      }
      if (v79 > v98) {
        v79 = v79 - v54;
        if (v79 >= v98) {
          goto LABEL_188;
        }
        goto LABEL_187;
      }
      if (v79 < v98) {
        v79 = v54 + v79;
        if (v79 > v98) {
        LABEL_187:
          v79 = v98;
        }
      }
    }
  }
LABEL_188:
  *(float*)(a1 + 5532) = v79;
}

unsigned __int64* game_map_f0ee60(unsigned __int64* result, __int64 a2)
{
  unsigned __int64* v2;
  _QWORD* v3;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int16 v14;
  _BYTE* v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  char v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  char v42;
  char v43;
  __int64 v44;

  v2 = result;
  if (a2 != 0) {
    v3 = *(_QWORD**)(a2 + 392);
    if (v3 != nullptr) {
      *result ^= *v3 + (*result << 12) + (*result >> 4) - 0x61C8864680B583EBLL;
      v5 = (_QWORD*)game_Unit_GetJob(a2);
      v6 = *v2;
      if (v5 != nullptr) {
        v6 ^= (v6 << 12) - 0x61C8864680B583EBLL + (v6 >> 4) + *v5;
        *v2 = v6;
      }
      v7 = ((v6 << 12) - 0x61C8864680B583EBLL + (v6 >> 4) +
            (unsigned int)*(char*)(a2 + 584)) ^
           v6;
      *v2 = v7;
      v8 = ((unsigned int)*(char*)(a2 + 585) - 0x61C8864680B583EBLL +
            (v7 << 12) + (v7 >> 4)) ^
           v7;
      *v2 = v8;
      v9 = (*(unsigned int*)(a2 + 592) - 0x61C8864680B583EBLL + (v8 << 12) +
            (v8 >> 4)) ^
           v8;
      *v2 = v9;
      v10 = ((unsigned int)((*(_QWORD*)(a2 + 1304) - *(_QWORD*)(a2 + 1296)) >>
                            2) -
             0x61C8864680B583EBLL + (v9 << 12) + (v9 >> 4)) ^
            v9;
      *v2 = v10;
      v11 = *(_QWORD*)(a2 + 1296);
      if ((int)((unsigned __int64)(*(_QWORD*)(a2 + 1304) - v11) >> 2) >= 1) {
        v12 = 0;
        v13 = GameData_212c880[0];
        do {
          v14 = *(_DWORD*)(v11 + 4 * v12++);
          v10 ^= (v10 << 12) - 0x61C8864680B583EBLL + (v10 >> 4) +
                 **(_QWORD**)(*(_QWORD*)(*v13 + 64) + 8LL * (v14 & 0xFFF));
          *v2 = v10;
          v11 = *(_QWORD*)(a2 + 1296);
        } while (v12 <
                 (int)((unsigned __int64)(*(_QWORD*)(a2 + 1304) - v11) >> 2));
      }
      v15 = (_BYTE*)(a2 + 839);
      v16 = 0x9E3779B97F4A7C15LL;
      v17 = GameData_212c878[0];
      v18 = 30;
      v19 = 0x9E3779B97F4BBB5ELL;
      do {
        if (*(_WORD*)(v15 - 11) != 0) {
          v10 ^= **(_QWORD**)(*(_QWORD*)(*v17 + 64) +
                              8LL * *(unsigned __int16*)(v15 - 11)) -
                 0x61C8864680B583EBLL + (v10 << 12) + (v10 >> 4);
          *v2 = v10;
          if ((*(v15 - 8) & 1) != 0) {
            v21 = 0x9E3779B97F4B6254LL;
          }
          else {
            v21 = 0x9E3779B97F4BBB5ELL;
          }
          v22 = v21 + (v10 << 12);
        }
        else {
          v22 = v16 + (v10 << 12);
        }
        v23 = (v22 + (v10 >> 4)) ^ v10;
        *v2 = v23;
        if (*(_WORD*)(v15 - 3) != 0) {
          v23 ^= **(_QWORD**)(*(_QWORD*)(*v17 + 64) +
                              8LL * *(unsigned __int16*)(v15 - 3)) -
                 0x61C8864680B583EBLL + (v23 << 12) + (v23 >> 4);
          *v2 = v23;
          if ((*v15 & 1) != 0) {
            v24 = 0x9E3779B97F4B6254LL;
          }
          else {
            v24 = 0x9E3779B97F4BBB5ELL;
          }
          v20 = v24 + (v23 << 12);
        }
        else {
          v20 = v16 + (v23 << 12) + 1;
        }
        v15 += 16;
        v18 -= 2;
        v16 += 2LL;
        v10 = (v20 + (v23 >> 4)) ^ v23;
        *v2 = v10;
      } while (v18 != 0);
      v25 = *(_QWORD*)(a2 + 440);
      if (v25 != 0) {
        v26 = *(unsigned __int8*)(v25 + 16) - 0x61C8864680B583EBLL;
      }
      else {
        v26 = 0x9E3779B97F4A7C1ELL;
      }
      v29 = ((v10 >> 4) + (v10 << 12) + v26) ^ v10;
      *v2 = v29;
      if ((*(_DWORD*)(a2 + 416) & 1) != 0) {
        v30 = 0x9E3779B97F4B6254LL;
      }
      else {
        v30 = 0x9E3779B97F4BBB5ELL;
      }
      v31 = ((v29 >> 4) + (v29 << 12) + v30) ^ v29;
      *v2 = v31;
      if ((*(_DWORD*)(a2 + 416) & 8) != 0) {
        v32 = 0x9E3779B97F4B6254LL;
      }
      else {
        v32 = 0x9E3779B97F4BBB5ELL;
      }
      v33 = (v32 + (v31 << 12) + (v31 >> 4)) ^ v31;
      *v2 = v33;
      if ((*(_DWORD*)(a2 + 416) & 0x1C00) != 0) {
        v34 = 0x9E3779B97F4B6254LL;
      }
      else {
        v34 = 0x9E3779B97F4BBB5ELL;
      }
      v35 = (v34 + (v33 << 12) + (v33 >> 4)) ^ v33;
      *v2 = v35;
      if ((*(_DWORD*)(a2 + 416) & 0x1C00) != 0) {
        v36 = 0x9E3779B97F4BBB5ELL;
      }
      else {
        v36 = 0x9E3779B97F4B6254LL;
      }
      *v2 = (v36 + (v35 << 12) + (v35 >> 4)) ^ v35;
      v37 = game_g_shared_system_skills_ptr;
      LODWORD(v44) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                                game_g_shared_system_skills_ptr) &
                     0xFFF;
      if ((game_HasSkill_alt1(a2 + 1744, &v44) & 1) != 0 ||
          *(_WORD*)(a2 + 492) == 0 && *(_BYTE*)(a2 + 496) == 0 &&
              (LODWORD(v44) =
                   *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v37) & 0xFFF,
               (game_HasSkill_alt1(a2 + 1744, &v44) & 1) != 0) ||
          (*(_BYTE*)(a2 + 416) & 4) != 0 ||
          (LODWORD(v44) = *(_DWORD*)((_BYTE*)((char*)0x40LL) + v37) & 0xFFF,
           v38 = game_HasSkill_alt1(a2 + 1744, &v44),
           v39 = 0x9E3779B97F4BBB5ELL, (v38 & 1) != 0)) {
        v39 = 0x9E3779B97F4B6254LL;
      }
      *v2 ^= v39 + (*v2 << 12) + (*v2 >> 4);
      LODWORD(v44) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v37) & 0xFFF;
      if ((game_HasSkill_alt1(a2 + 1744, &v44) & 1) != 0 ||
          (v40 = 0x9E3779B97F4BBB5ELL, *(_WORD*)(a2 + 492) == 0) &&
              (v40 = 0x9E3779B97F4BBB5ELL, *(_BYTE*)(a2 + 496) == 0) &&
              (LODWORD(v44) =
                   *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v37) & 0xFFF,
               v43 = game_HasSkill_alt1(a2 + 1744, &v44),
               v40 = 0x9E3779B97F4BBB5ELL, (v43 & 1) != 0)) {
        v40 = 0x9E3779B97F4B6254LL;
      }
      v41 = (v40 + (*v2 << 12) + (*v2 >> 4)) ^ *v2;
      *v2 = v41;
      if (*(_WORD*)(a2 + 492) == 0 && *(_BYTE*)(a2 + 496) == 0) {
        LODWORD(v44) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v37) & 0xFFF;
        v42 = game_HasSkill_alt1(a2 + 1744, &v44);
        v41 = *v2;
        if ((v42 & 1) != 0) {
          v19 = 0x9E3779B97F4B6254LL;
        }
      }
      *v2 = (v19 + (v41 << 12) + (v41 >> 4)) ^ v41;
      v44 = 0x80000000000LL;
      result =
          (unsigned __int64*)game_UnitSkillList_GetMaxValue(a2 + 1744, &v44);
      v27 = *v2;
      v28 = (int)result - 0x61C8864680B583EBLL;
    }
    else {
      v27 = *result;
      v28 = 0x9D8929916CA008E2LL;
    }
  }
  else {
    v27 = *result;
    v28 = 0x630633B799D06868LL;
  }
  *v2 = (v28 + (v27 << 12) + (v27 >> 4)) ^ v27;
  return result;
}

__int64 game_map_f15a60(__int64 a1)
{
  __int64* v2;
  __int128 v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)(a1 + 32) = 0;
  *(_BYTE*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)a1 = game_map_MapPanelDeployAction_vtable;
  *(_QWORD*)(a1 + 16) = game_map_MassMeshGroup_vtable;
  *(_QWORD*)(a1 + 24) = a1 + 32;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = a1 + 56;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = a1 + 80;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = a1 + 104;
  game_map_f54910_alt1(a1 + 128);
  v2 = GameData_212f8b8[0];
  *(_WORD*)(a1 + 372) = 0;
  *(_QWORD*)(a1 + 128) = v2 + 2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a55c0) != 0) {
    v6 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a55a0 =
        *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55a0 + 1) = v6;
    v7 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                     (_QWORD)GameData_212c2a0);
    *(_QWORD*)&GameData_21a55b0 =
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55b0 + 1) = v7;
    v8 = *((_QWORD*)GameData_212c2a0 + 1);
    *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
    *((_QWORD*)&GameData_21a5580 + 1) = v8;
    v9 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a5590 =
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a5590 + 1) = v9;
    __cxa_guard_release(&GameData_21a55c0);
  }
  v3 = GameData_21a55a0;
  *(_DWORD*)(a1 + 448) = 0;
  *(_BYTE*)(a1 + 452) = 0;
  *(_BYTE*)(a1 + 456) = 0;
  *(_DWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_OWORD*)(a1 + 416) = v3;
  *(_OWORD*)(a1 + 432) = GameData_21a55b0;
  *(_OWORD*)(a1 + 384) = GameData_21a5580;
  *(_OWORD*)(a1 + 400) = GameData_21a5590;
  v4 = GameData_212fdf0[0];
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 496) = v4 + 2;
  *(_QWORD*)(a1 + 504) = 0;
  return GameRoutine_844ee0(a1 + 544);
}

__int64 game_map_f54910(__int64 a1)
{
  __int128 v1;
  __int128 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int128 v6;
  __int128 v7;
  __int64 v8;
  __int64 v9;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  *(_QWORD*)a1 = game_map_MeshData_vtable;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v23 = a1;
    v11 = __cxa_guard_acquire(&GameData_21a60e8);
    a1 = v23;
    if (v11 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
      a1 = v23;
    }
  }
  *(_QWORD*)(a1 + 8) = GameData_21a60e0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0) {
    v24 = a1;
    v12 = __cxa_guard_acquire(&GameData_21a55c0);
    a1 = v24;
    if (v12 != 0) {
      v13 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a55a0 =
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55a0 + 1) = v13;
      v14 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                        (_QWORD)GameData_212c2a0);
      *(_QWORD*)&GameData_21a55b0 =
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                      (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55b0 + 1) = v14;
      v15 = *((_QWORD*)GameData_212c2a0 + 1);
      *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
      *((_QWORD*)&GameData_21a5580 + 1) = v15;
      v16 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a5590 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a5590 + 1) = v16;
      __cxa_guard_release(&GameData_21a55c0);
      a1 = v24;
    }
  }
  v1 = GameData_21a55b0;
  *(_OWORD*)(a1 + 48) = GameData_21a55a0;
  *(_OWORD*)(a1 + 64) = v1;
  v2 = GameData_21a5590;
  *(_OWORD*)(a1 + 16) = GameData_21a5580;
  *(_OWORD*)(a1 + 32) = v2;
  v3 = (__int64*)GameData_212c958;
  v4 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)GameData_212c958;
  *(_QWORD*)(a1 + 88) = v4;
  *(_QWORD*)(a1 + 96) = 0;
  v5 = a1 + 96;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v21 = a1 + 96;
    v25 = a1;
    v17 = __cxa_guard_acquire(&GameData_21a6130);
    v3 = (__int64*)GameData_212c958;
    v5 = v21;
    a1 = v25;
    if (v17 != 0) {
      v18 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v18;
      __cxa_guard_release(&GameData_21a6130);
      v3 = (__int64*)GameData_212c958;
      v5 = v21;
      a1 = v25;
    }
  }
  v6 = GameData_21a6120;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_OWORD*)(v5 + 48) = v6;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v22 = v5;
    v26 = a1;
    v19 = __cxa_guard_acquire(&GameData_21a6130);
    v3 = (__int64*)GameData_212c958;
    v5 = v22;
    a1 = v26;
    if (v19 != 0) {
      v20 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v20;
      __cxa_guard_release(&GameData_21a6130);
      v3 = (__int64*)GameData_212c958;
      v5 = v22;
      a1 = v26;
    }
  }
  v7 = GameData_21a6120;
  *(_DWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 228) = 0;
  *(_OWORD*)(a1 + 176) = v7;
  v8 = *v3;
  v9 = v3[1];
  *(_QWORD*)(a1 + 208) = v8;
  *(_QWORD*)(a1 + 216) = v9;
  *(_BYTE*)(a1 + 224) = 1;
  *(_BYTE*)(a1 + 236) = 1;
  *(_DWORD*)(a1 + 240) = 2;
  return GameRoutine_f54ba0(v5, 64);
}

long double game_map_f54d00(__int64 a1)
{
  char* v2;
  __int64* v3;
  char* v4;
  __int64 v5;
  char* v6;
  char* v7;
  void (**v8)(char*);
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int128 v13;
  __int128 v14;
  long double result;
  __int128 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a55c0) != 0) {
    v17 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a55a0 =
        *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55a0 + 1) = v17;
    v18 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                      (_QWORD)GameData_212c2a0);
    *(_QWORD*)&GameData_21a55b0 =
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55b0 + 1) = v18;
    v19 = *((_QWORD*)GameData_212c2a0 + 1);
    *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
    *((_QWORD*)&GameData_21a5580 + 1) = v19;
    v20 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a5590 =
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a5590 + 1) = v20;
    __cxa_guard_release(&GameData_21a55c0);
  }
  v2 = *(char**)(a1 + 96);
  *(_OWORD*)(a1 + 16) = GameData_21a5580;
  *(_OWORD*)(a1 + 32) = GameData_21a5590;
  *(_OWORD*)(a1 + 48) = GameData_21a55a0;
  *(_OWORD*)(a1 + 64) = GameData_21a55b0;
  v3 = (__int64*)GameData_212c958;
  v4 = *(char**)(a1 + 104);
  v5 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)GameData_212c958;
  *(_QWORD*)(a1 + 88) = v5;
  if (v2 != v4) {
    v6 = v4 - 64;
    v7 = v4 - 64;
    do {
      v8 = *(void (***)(char*))v7;
      v7 -= 64;
      (*v8)(v6);
      v9 = v6 == v2;
      v6 = v7;
    } while (!v9);
  }
  *(_QWORD*)(a1 + 104) = v2;
  if ((unsigned __int64)((v4 - v2) >> 6) <= 0x40) {
    v10 = 64;
  }
  else {
    v10 = (v4 - v2) >> 6;
  }
  GameRoutine_f54ba0_alt1((__int64***)(a1 + 96), v10);
  *(_QWORD*)(a1 + 128) = *(_QWORD*)(a1 + 120);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v21 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v21;
    __cxa_guard_release(&GameData_21a6130);
  }
  v11 = *v3;
  v12 = v3[1];
  *(_QWORD*)(a1 + 160) = 0;
  v13 = GameData_21a6120;
  *(_QWORD*)(a1 + 208) = v11;
  *(_QWORD*)(a1 + 216) = v12;
  *(_QWORD*)(a1 + 144) = v13;
  v14 = *(_OWORD*)(a1 + 144);
  *((_QWORD*)&v14 + 1) = DWORD2(v13);
  *(_OWORD*)(a1 + 144) = v14;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v22 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v22;
    __cxa_guard_release(&GameData_21a6130);
  }
  result = *(long double*)&GameData_21a6120;
  *(_DWORD*)(a1 + 192) = 0;
  *(_BYTE*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 228) = 0;
  *(_QWORD*)(a1 + 176) = *(_QWORD*)&result;
  v16 = *(_OWORD*)(a1 + 176);
  *((_QWORD*)&v16 + 1) = DWORD2(result);
  *(_OWORD*)(a1 + 176) = v16;
  return result;
}

#pragma GCC visibility pop
