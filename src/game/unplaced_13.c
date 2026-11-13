#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_6bfb40(float*, unsigned __int64*, __int64*, __int64*);
_QWORD* GameRoutine_6c0100(__int64, unsigned __int64, __int64*);
_QWORD* VariableAssign_62dbb0(_QWORD*, __int64, unsigned __int64);
_QWORD* game_map_Mind_SetTargetList(__int64, _QWORD*);
_WORD* game_UnitItemList_EachItem(_WORD* result, __int64);
__attribute__((swiftcall)) void GameRoutine_15b6f50(PSEUDO_X8, __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_a51060(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void LocatorDispos_db1e20(PSEUDO_X8, char* result);
__attribute__((swiftcall)) void Manager_66c4e0(PSEUDO_X8, unsigned __int8*);
__attribute__((swiftcall)) void SceneTalk_1497de0(PSEUDO_X8, __int64, __int16);
__attribute__((swiftcall)) void TroopMgr_134b820(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void fs_a501f0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void game_112d860(PSEUDO_X8, __int64*);
__attribute__((swiftcall)) void game_127c600(PSEUDO_X8, __int64, unsigned int);
__attribute__((swiftcall)) void game_facility_140a6e0(PSEUDO_X8,
                                                      unsigned __int8**);
__attribute__((swiftcall)) void game_sound_PlaySeAt(PSEUDO_X8, __int64 result,
                                                    __int64);
__int64* CharacterAnimatorSound_10f7300(__int64* result);
__int64* Element_18863e0(__int64, const char**, char);
__int64* GameRoutine_11f29e0(__int64* result, __int64, __int64*);
__int64* GameRoutine_18894a0(__int64);
__int64* GameRoutine_60e940(__int64, unsigned __int64, int*);
__int64* GameVariable_82e4d0(int);
__int64* Manager_bc6460(_QWORD*, __int64, char);
__int64* Mind_746a00(__int64* result, int);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* VariableAssign_62da90(__int64*, __int64, unsigned __int64);
__int64* game_820d50(int);
__int64* game_8224a0(unsigned __int8);
__int64* game_8aef60(__int64*, unsigned __int16*);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 AIBattleSimulator_11fc220(__int64, long double);
__int64 AIThink_11f6e20(__int64, _DWORD*);
__int64 AIThink_11f73f0(_DWORD*, __int64, __int64, __int64);
__int64 AIThink_1223580(_QWORD*);
__int64 AIThink_12a7f80(__int64, int*);
__int64 AutoPlay_f82bc0(__int64, int);
__int64 CausationFile_9dbdc0(__int64 result);
__int64 CharacterTrailModule_d3d630(_QWORD*, __int64*, __int64, int);
__int64 GameHr_1006bf0(__int64 result);
__int64 GameHr_1018480(__int64 result, _OWORD*, __int64, char);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 GameHr_7bd1a0();
__int64 GameHr_7bd3a0();
__int64 GameHr_7bd590();
__int64 GameHr_7bd6a0();
__int64 GameHr_cdeee0(__int64 result, __int64);
__int64 GameHr_d1fb60(__int64, char);
__int64 GameHr_ffd760(int, __int64, __int64, char);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 GameRoutine_10965c0(__int64 result, __int64);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_112ea40(__int64, _BYTE*);
__int64 GameRoutine_1195900(__int64, __int64, __int64, unsigned __int64,
                            __int64*, __int64);
__int64 GameRoutine_11f7b10(_QWORD);
__int64 GameRoutine_11f7b30(__int64, _QWORD*);
__int64 GameRoutine_11fbb20(__int64);
__int64 GameRoutine_11fe0c0(__int64, __int64);
__int64 GameRoutine_12256e0(unsigned __int8**, _DWORD*);
__int64 GameRoutine_1276580(__int64, int);
__int64 GameRoutine_128df90(__int64, __int64*);
__int64 GameRoutine_128f580(__int64);
__int64 GameRoutine_12c2260(__int64);
__int64 GameRoutine_14a1390(__int64*, char);
__int64 GameRoutine_15b7370();
__int64 GameRoutine_1842b90(__int64, int);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a09d20(unsigned __int64, __int64);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 GameRoutine_55d680(_QWORD, long double);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_60f380(__int64, int*, int*, _QWORD*);
__int64 GameRoutine_64d860(__int64, __int64);
__int64 GameRoutine_6c0520(__int64 result, __int64*, __int64, __int64*,
                           __int64);
__int64 GameRoutine_6c0d40(__int64 result, __int64*, __int64, __int64*,
                           __int64);
__int64 GameRoutine_6c2b50(__int64);
__int64 GameRoutine_6fc510(__int64);
__int64 GameRoutine_747a00(__int64, unsigned int, unsigned int, __int64, char);
__int64 GameRoutine_7bcc80();
__int64 GameRoutine_7bcd40();
__int64 GameRoutine_7bceb0();
__int64 GameRoutine_7bcf20();
__int64 GameRoutine_7bcfe0();
__int64 GameRoutine_7bd090();
__int64 GameRoutine_7bd110();
__int64 GameRoutine_7bd4b0();
__int64 GameRoutine_7bd4f0();
__int64 GameRoutine_7bd9a0();
__int64 GameRoutine_7c91c0(__int64, int, int, __int64, __int64);
__int64 GameRoutine_801020(__int64 result, __int64, __int64, int, int,
                           unsigned __int8, __int64);
__int64 GameRoutine_867df0();
__int64 GameRoutine_9db9e0(unsigned int, unsigned int);
__int64 GameRoutine_a69620(__int64*, __int64*);
__int64 GameRoutine_ae0560();
__int64 GameRoutine_e9f200(__int64 result);
__int64 GameRoutine_ec1530();
__int64 GameVariable_828800(__int64, unsigned __int64*, int);
__int64 HubCharacterNatives_cabfc0(__int64 result, char);
__int64 MapInfo_825040(__int64, int);
__int64 Pane_58f8a0(__int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 Signal_d30a60(__int64**, const char*, __int64, __int64);
__int64 Situation_764060(__int64, __int64);
__int64 Trick_7d5160(__int64, char);
__int64 Unit_6c91f0(_QWORD*, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_11eabf0(__int64);
__int64 game_11f4c40(__int64, char);
__int64 game_11f51f0(__int64, int, int);
__int64 game_1225500(__int64, _DWORD*, _DWORD*);
__int64 game_12c6b00(__int64*, __int64*);
__int64 game_14a3920(__int64 result);
__int64 game_64c980(__int64 result, _DWORD*, unsigned __int64, __int64);
__int64 game_7408a0(__int64 result, __int64*, __int64, __int64*, __int64);
__int64 game_7bdbd0();
__int64 game_7bdd40();
__int64 game_809ba0(__int64, float);
__int64 game_8a06e0(int*, int*, int*, int*);
__int64 game_9903e0(__int64 result);
__int64 game_AITarget_EnumerateAssist(__int64, __int64, int, int, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_Unit_Destroy_Unit(__int64);
__int64 game_Unit_GetParam(__int64);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_character_CharacterAnimatorSound_CharacterAnimatorSound(_QWORD*,
                                                                     _QWORD*,
                                                                     _QWORD*);
__int64 game_dbe360();
__int64 game_facility_14107c0(__int64, __int64);
__int64 game_hub_d97a00(__int64 result, float);
__int64 game_menu_SendUnitItemMenu_CreateBind(__int64, __int64, __int64, char,
                                              char, __int64, __int64);
__int64 game_telop_17549a0(__int64, __int64**, unsigned int, __int64);
__int64 game_zview_cee580(_QWORD*);
__int64 game_zview_d12d30(__int64 result, int32x2_t*, char);
__int64 hub_AcquireTableResource(_QWORD*, const char*);
__int64 hub_ColumnAlias(unsigned __int64*);
__int64 memchr(__int64, int, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, __int64, __int64,
                                                 __int64, __int64, unsigned int,
                                                 unsigned int, int, float,
                                                 float);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 strchr(const char*, int);
__int64 strtol(const char*, __int64, int);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 GameRoutine_790080(__int64);
bool GameRoutine_11fe200(__int64*, __int64);
bool GameRoutine_6bebe0(_QWORD*);
bool GameRoutine_6fc7a0(__int64, _QWORD*);
bool GameRoutine_90c9e0(__int64);
bool UnitItem_6e8bc0(unsigned __int16*, __int64);
bool UnitItem_6e8e50(unsigned __int16*, __int64);
bool game_19f0540(_QWORD*, _QWORD*);
bool game_868630();
bool game_8ae640(__int64*, __int64, char);
bool game_HasActiveSkill_843420(_DWORD*, __int64);
bool game_HasSkill_alt1(_QWORD*, _DWORD*) __asm__("game_HasSkill");
bool game_Unit_Unknown6c90c0(__int64);
char* GameRoutine_60a020(char*, const char*);
char* GameRoutine_7410c0(char*, char*, char*);
const char* hub_ColumnAliasSuffix(unsigned __int64*);
const char* hub_ResourceVariant(unsigned __int8*);
double cos(double);
double sin(double);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_1b561e0;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN GameData_1a85358;
extern _UNKNOWN GameData_1abc9d5;
extern _UNKNOWN GameData_1acfb96;
extern _UNKNOWN GameData_1b9c4a8;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a61b0;
extern _UNKNOWN GameData_21d9148;
extern _UNKNOWN GameData_21f8028;
extern _UNKNOWN GameData_2258fb0;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82b20;
extern __int128 GameData_1a82d40;
extern __int128 GameData_1a82e80;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a61a0;
extern __int16 GameData_224ae48;
extern __int64 (***GameData_212dae8)();
extern __int64 (*GameData_1b561b8[5])();
extern __int64 (*GameData_1f91370[])();
extern __int64 (*GameData_1f91400[])();
extern __int64 (*GameData_1f95fe8[])();
extern __int64 (*GameData_1f96068[])();
extern __int64 (*GameData_1fa9248[])();
extern __int64 (*GameData_1faa450[])();
extern __int64 (*GameData_1fad598[])();
extern __int64 (*GameData_1fb24f8[])();
extern __int64 (*GameData_1fd3de0[28])();
extern __int64 (*GameData_200a608[])();
extern __int64 (*GameData_200a700[])();
extern __int64 (*GameData_200a780[])();
extern __int64 (*GameData_200a800[])();
extern __int64 (*GameData_200a880[])();
extern __int64 (*GameData_200a900[])();
extern __int64 (*GameData_200a980[])();
extern __int64 (*GameData_200aa00[])();
extern __int64 (*GameData_200aa80[])();
extern __int64 (*GameData_200ab00[])();
extern __int64 (*GameData_200ab80[])();
extern __int64 (*GameData_200ac00[])();
extern __int64 (*GameData_200ac80[])();
extern __int64 (*GameData_200ad00[])();
extern __int64 (*GameData_200ad80[])();
extern __int64 (*GameData_200ae00[])();
extern __int64 (*GameData_200ae80[])();
extern __int64 (*GameData_200af00[])();
extern __int64 (*GameData_200af80[])();
extern __int64 (*GameData_200b080[])();
extern __int64 (*GameData_200b180[])();
extern __int64 (*GameData_200b200[])();
extern __int64 (*GameData_200b280[])();
extern __int64 (*GameData_200b300[])();
extern __int64 (*GameData_200b380[])();
extern __int64 (*GameData_200b400[])();
extern __int64 (*GameData_200b480[])();
extern __int64 (*GameData_200b500[])();
extern __int64 (*GameData_200b580[])();
extern __int64 (*GameData_200b600[])();
extern __int64 (*GameData_201fed8[])();
extern __int64 (*GameData_201ffd8[])();
extern __int64 (*GameData_203f830[])();
extern __int64 (*GameData_203f8b0[])();
extern __int64 (*GameData_203f930[])();
extern __int64 (*GameData_203f9b0[])();
extern __int64 (*GameData_203fa30[])();
extern __int64 (*GameData_212cfa8)();
extern __int64 (*GameData_212d108[12])();
extern __int64 (*GameData_212d110[11])();
extern __int64 (*GameData_212d118[10])();
extern __int64 (*GameData_212d1b8)();
extern __int64 (*GameData_21308e0[3])();
extern __int64 (*decltype_c81af0_ptr[3])();
extern __int64 (*game_11f3890_ptr[6])();
extern __int64 (*game_AIThink_SpecialEntrustMultiAttackCondition_vtable[])();
extern __int64 (*game_anonymous_ItemFinder_GameConvergeAccessor_vtable[])();
extern __int64 (*game_anonymous_ItemFinder_TransporterAccessor_vtable[])();
extern __int64 (*game_character_CharacterObservable_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqAI_vtable[])();
extern __int64 (*snd_Vec3_vtable[])();
extern __int64 (*snd_fnd_Vec3_vtable[])();
extern __int64* GameData_212c770[3];
extern __int64* GameData_212c790;
extern __int64* GameData_212c868;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cb90[85];
extern __int64* GameData_212ce58;
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cfd8[7];
extern __int64* GameData_212cff8[3];
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d258[2];
extern __int64* GameData_212d458[7];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212da50[3];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212f4e0[3];
extern __int64* GameData_2130910[7];
extern __int64* GameData_2130918[6];
extern __int64* GameData_2130988[3];
extern __int64* GameData_2130f08[4];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212c060;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d238[2];
extern __int64 GameData_212d290;
extern __int64 GameData_212d310;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212ec00;
extern __int64 GameData_212f510[6];
extern __int64 GameData_212f518[5];
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21306b8[4];
extern __int64 GameData_21306c0[3];
extern __int64 GameData_21308b8;
extern __int64 GameData_21308f8[2];
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21c9bd0;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd158;
extern __int64 GameData_21d8850;
extern __int64 GameData_21d8858;
extern __int64 GameData_21d8860;
extern __int64 GameData_21d8870;
extern __int64 GameData_21d8880;
extern __int64 GameData_21d8890;
extern __int64 GameData_21d8898;
extern __int64 GameData_21d88b0;
extern __int64 GameData_21d88c0;
extern __int64 GameData_21d88d0;
extern __int64 GameData_21d88d8;
extern __int64 GameData_21d88e0;
extern __int64 GameData_21d88f0;
extern __int64 GameData_21d8900;
extern __int64 GameData_21d8910;
extern __int64 GameData_21d8918;
extern __int64 GameData_21d8920;
extern __int64 GameData_21d8930;
extern __int64 GameData_21d8940;
extern __int64 GameData_21d8950;
extern __int64 GameData_21d8958;
extern __int64 GameData_21d8960;
extern __int64 GameData_21d8970;
extern __int64 GameData_21d8980;
extern __int64 GameData_21d8990;
extern __int64 GameData_21d8998;
extern __int64 GameData_21d89a0;
extern __int64 GameData_21d89b0;
extern __int64 GameData_21d89c0;
extern __int64 GameData_21d89d0;
extern __int64 GameData_21d89d8;
extern __int64 GameData_21d89e0;
extern __int64 GameData_21d89f0;
extern __int64 GameData_21d8a00;
extern __int64 GameData_21d8a10;
extern __int64 GameData_21d8a18;
extern __int64 GameData_21d8a20;
extern __int64 GameData_21d8a30;
extern __int64 GameData_21d8a40;
extern __int64 GameData_21d8a50;
extern __int64 GameData_21d8a58;
extern __int64 GameData_21d8a60;
extern __int64 GameData_21d8a70;
extern __int64 GameData_21d8a80;
extern __int64 GameData_21d8a90;
extern __int64 GameData_21d8a98;
extern __int64 GameData_21d8aa0;
extern __int64 GameData_21d8ab0;
extern __int64 GameData_21d8ac0;
extern __int64 GameData_21d8ad0;
extern __int64 GameData_21d8ad8;
extern __int64 GameData_21d8ae0;
extern __int64 GameData_21d8af0;
extern __int64 GameData_21d8b00;
extern __int64 GameData_21d8b10;
extern __int64 GameData_21d8b18;
extern __int64 GameData_21d8b20;
extern __int64 GameData_21d8b30;
extern __int64 GameData_21d8b40;
extern __int64 GameData_21d8b50;
extern __int64 GameData_21d8b58;
extern __int64 GameData_21d8b60;
extern __int64 GameData_21d8b70;
extern __int64 GameData_21d8b80;
extern __int64 GameData_21d8b90;
extern __int64 GameData_21d8b98;
extern __int64 GameData_21d8ba0;
extern __int64 GameData_21d8bb0;
extern __int64 GameData_21d8bc0;
extern __int64 GameData_21d8bd0;
extern __int64 GameData_21d8bd8;
extern __int64 GameData_21d8be0;
extern __int64 GameData_21d8bf0;
extern __int64 GameData_21d8c00;
extern __int64 GameData_21d8c10;
extern __int64 GameData_21d8c18;
extern __int64 GameData_21d8c20;
extern __int64 GameData_21d8c30;
extern __int64 GameData_21d8c40;
extern __int64 GameData_21d8c50;
extern __int64 GameData_21d8c58;
extern __int64 GameData_21d8c70;
extern __int64 GameData_21d8c80;
extern __int64 GameData_21d8c90;
extern __int64 GameData_21d8c98;
extern __int64 GameData_21d8cb0;
extern __int64 GameData_21d8cc0;
extern __int64 GameData_21d8cd0;
extern __int64 GameData_21d8cd8;
extern __int64 GameData_21d8ce0;
extern __int64 GameData_21d8cf0;
extern __int64 GameData_21d8d00;
extern __int64 GameData_21d8d10;
extern __int64 GameData_21d8d18;
extern __int64 GameData_21d8d20;
extern __int64 GameData_21d8d30;
extern __int64 GameData_21d8d40;
extern __int64 GameData_21d8d50;
extern __int64 GameData_21d8d58;
extern __int64 GameData_21d8d70;
extern __int64 GameData_21d8d80;
extern __int64 GameData_21d8d90;
extern __int64 GameData_21d8d98;
extern __int64 GameData_21d8da0;
extern __int64 GameData_21d8db0;
extern __int64 GameData_21d8dc0;
extern __int64 GameData_21d8dd0;
extern __int64 GameData_21d8dd8;
extern __int64 GameData_21d8de0;
extern __int64 GameData_21d8df0;
extern __int64 GameData_21d8e00;
extern __int64 GameData_21d8e10;
extern __int64 GameData_21d8e18;
extern __int64 GameData_21d8e20;
extern __int64 GameData_21d8e30;
extern __int64 GameData_21d8e40;
extern __int64 GameData_21d8e50;
extern __int64 GameData_21d8e58;
extern __int64 GameData_21d8e60;
extern __int64 GameData_21d8e70;
extern __int64 GameData_21d8e80;
extern __int64 GameData_21d8e90;
extern __int64 GameData_21d8e98;
extern __int64 GameData_21d8ea0;
extern __int64 GameData_21d8eb0;
extern __int64 GameData_21d8ec0;
extern __int64 GameData_21d8ed0;
extern __int64 GameData_21d8ed8;
extern __int64 GameData_21d8ee0;
extern __int64 GameData_21d8ef0;
extern __int64 GameData_21d8f00;
extern __int64 GameData_21d8f10;
extern __int64 GameData_21d8f18;
extern __int64 GameData_21d8f20;
extern __int64 GameData_21d8f30;
extern __int64 GameData_21d8f40;
extern __int64 GameData_21d8f50;
extern __int64 GameData_21d8f58;
extern __int64 GameData_21d8f60;
extern __int64 GameData_21d8f70;
extern __int64 GameData_21d8f80;
extern __int64 GameData_21d8f90;
extern __int64 GameData_21d8f98;
extern __int64 GameData_21d8fa0;
extern __int64 GameData_21d8fb0;
extern __int64 GameData_21d8fc0;
extern __int64 GameData_21d8fd0;
extern __int64 GameData_21d8fd8;
extern __int64 GameData_21d8fe0;
extern __int64 GameData_21d8ff0;
extern __int64 GameData_21d9000;
extern __int64 GameData_21d9010;
extern __int64 GameData_21d9018;
extern __int64 GameData_21d9020;
extern __int64 GameData_21d9030;
extern __int64 GameData_21d9040;
extern __int64 GameData_21d9050;
extern __int64 GameData_21d9058;
extern __int64 GameData_21d9060;
extern __int64 GameData_21d9070;
extern __int64 GameData_21d9080;
extern __int64 GameData_21d9090;
extern __int64 GameData_21d9098;
extern __int64 GameData_21d90a0;
extern __int64 GameData_21d90b0;
extern __int64 GameData_21d90c0;
extern __int64 GameData_21d90d0;
extern __int64 GameData_21d90d8;
extern __int64 GameData_21d90e0;
extern __int64 GameData_21d90f0;
extern __int64 GameData_21d9100;
extern __int64 GameData_21d9110;
extern __int64 GameData_21d9118;
extern __int64 GameData_21d9120;
extern __int64 GameData_21d9130;
extern __int64 GameData_21d9140;
extern __int64 GameData_21d9180;
extern __int64 GameData_21d9188;
extern __int64 GameData_21d96b8;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 GameData_21f8020;
extern __int64 GameData_21f84a0;
extern __int64 GameData_22054a8;
extern __int64 GameData_22336e0;
extern __int64 GameData_2235100;
extern __int64 GameData_22400f8;
extern __int64 GameData_2258f88;
extern __int64 GameData_2258f90;
extern __int64 GameData_2258f98;
extern __int64 GameData_2258fa0;
extern __int64 GameData_2258fa8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_UnitListSet_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_sound_g_game_sound;
extern char* game_menu_kTabAnimations[21];
extern char GameData_1a94a43[];
extern char GameData_1a9f09e;
extern char GameData_21ca258;
extern char GameData_21d8848;
extern char GameData_21d8888;
extern char GameData_21d88c8;
extern char GameData_21d8908;
extern char GameData_21d8948;
extern char GameData_21d8988;
extern char GameData_21d89c8;
extern char GameData_21d8a08;
extern char GameData_21d8a48;
extern char GameData_21d8a88;
extern char GameData_21d8ac8;
extern char GameData_21d8b08;
extern char GameData_21d8b48;
extern char GameData_21d8b88;
extern char GameData_21d8bc8;
extern char GameData_21d8c08;
extern char GameData_21d8c48;
extern char GameData_21d8c88;
extern char GameData_21d8cc8;
extern char GameData_21d8d08;
extern char GameData_21d8d48;
extern char GameData_21d8d88;
extern char GameData_21d8dc8;
extern char GameData_21d8e08;
extern char GameData_21d8e48;
extern char GameData_21d8e88;
extern char GameData_21d8ec8;
extern char GameData_21d8f08;
extern char GameData_21d8f48;
extern char GameData_21d8f88;
extern char GameData_21d8fc8;
extern char GameData_21d9008;
extern char GameData_21d9048;
extern char GameData_21d9088;
extern char GameData_21d90c8;
extern char GameData_21d9108;
extern int* GameData_212df08;
extern int GameData_1b9c59c[];
extern int GameData_21ca25c;
extern int GameData_21d8868;
extern int GameData_21d8878;
extern int GameData_21d88a8;
extern int GameData_21d88b8;
extern int GameData_21d88e8;
extern int GameData_21d88f8;
extern int GameData_21d8928;
extern int GameData_21d8938;
extern int GameData_21d8968;
extern int GameData_21d8978;
extern int GameData_21d89a8;
extern int GameData_21d89b8;
extern int GameData_21d89e8;
extern int GameData_21d89f8;
extern int GameData_21d8a28;
extern int GameData_21d8a38;
extern int GameData_21d8a68;
extern int GameData_21d8a78;
extern int GameData_21d8aa8;
extern int GameData_21d8ab8;
extern int GameData_21d8ae8;
extern int GameData_21d8af8;
extern int GameData_21d8b28;
extern int GameData_21d8b38;
extern int GameData_21d8b68;
extern int GameData_21d8b78;
extern int GameData_21d8ba8;
extern int GameData_21d8bb8;
extern int GameData_21d8be8;
extern int GameData_21d8bf8;
extern int GameData_21d8c28;
extern int GameData_21d8c38;
extern int GameData_21d8c68;
extern int GameData_21d8c78;
extern int GameData_21d8ca8;
extern int GameData_21d8cb8;
extern int GameData_21d8ce8;
extern int GameData_21d8cf8;
extern int GameData_21d8d28;
extern int GameData_21d8d38;
extern int GameData_21d8d68;
extern int GameData_21d8d78;
extern int GameData_21d8da8;
extern int GameData_21d8db8;
extern int GameData_21d8de8;
extern int GameData_21d8df8;
extern int GameData_21d8e28;
extern int GameData_21d8e38;
extern int GameData_21d8e68;
extern int GameData_21d8e78;
extern int GameData_21d8ea8;
extern int GameData_21d8eb8;
extern int GameData_21d8ee8;
extern int GameData_21d8ef8;
extern int GameData_21d8f28;
extern int GameData_21d8f38;
extern int GameData_21d8f68;
extern int GameData_21d8f78;
extern int GameData_21d8fa8;
extern int GameData_21d8fb8;
extern int GameData_21d8fe8;
extern int GameData_21d8ff8;
extern int GameData_21d9028;
extern int GameData_21d9038;
extern int GameData_21d9068;
extern int GameData_21d9078;
extern int GameData_21d90a8;
extern int GameData_21d90b8;
extern int GameData_21d90e8;
extern int GameData_21d90f8;
extern int GameData_21d9128;
extern int GameData_21d9138;
extern int GameData_21d9864;
float AiBattleSimulator_11fc090(__int64, unsigned int);
float GameRoutine_d1fae0();
float game_5c4910(float*, float, float);
float game_5c4de0(float, float);
float powf(float, float);
int* GameRoutine_89ef30(int* result, int*, int*, int*, __int64);
int* GameRoutine_89f190(int*, int*, int*, int*, int*, __int64);
int* game_8a0490(int* result, int*, int*);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
int strcmp(const char*, const char*);
long double GameRoutine_a7f140(__int64, __int64, const char*);
unsigned __int64 GrowthListFile_127c740(unsigned __int64 result);
unsigned __int64 strlen(const char*);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void AIBattleSimulator_11fbe50(__int64, int);
void AIDeploy_1274f90(_QWORD*, __int64, unsigned int, _DWORD*);
void AISupportSkillScope_11fef70(_DWORD*);
void AiInterferenceSimulator_128e230(__int64, __int64);
void BattleSide_Destructor(_QWORD*);
void CharacterRotate_d519c0(int8x16_t*);
void CmdBtlSkipInput_1006e20(__int64);
void FacilityUnitList_145d160(__int64, __int64);
void GameHr_64d6c0(int*, __int64);
void GameHr_7aa840(_BYTE*, __int64);
void GameHr_d23780(__int64, __int64, __int64, __int64, float);
void GameRoutine_100b790(__int64);
void GameRoutine_1196940(_QWORD*);
void GameRoutine_64da00(unsigned __int64*, __int64);
void GameRoutine_6bf680(_QWORD*, unsigned __int64*, __int64);
void GameRoutine_6e5900(__int64*, _DWORD*);
void GameRoutine_6e5a40(__int64*, unsigned __int64, _DWORD*);
void GameRoutine_844ee0(__int64);
void GameRoutine_ebb360(__int64*, __int64*, __int64, __int64*);
void GameRoutine_ebbc40(__int64*, __int64*, __int64*, __int64, __int64, _QWORD*,
                        __int64);
void GameRoutine_ebc760(__int64*, __int64*);
void HubCharacterNatives_cabfc0_alt1(__int64, char) __asm__(
    "HubCharacterNatives_cabfc0");
void UnitMastery_7fe910(__int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_1018450();
void __attribute__((noreturn)) GameRoutine_1038a20();
void __attribute__((noreturn)) GameRoutine_10cac40();
void __attribute__((noreturn)) GameRoutine_12c6cd0();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_60e910();
void __attribute__((noreturn)) GameRoutine_60f930();
void __attribute__((noreturn)) GameRoutine_6706a0();
void __attribute__((noreturn)) GameRoutine_670c00();
void __attribute__((noreturn)) GameRoutine_6bddd0();
void __attribute__((noreturn)) GameRoutine_6c00d0();
void __attribute__((noreturn)) GameRoutine_6f26d0();
void __attribute__((noreturn)) GameRoutine_8c43b0();
void __attribute__((noreturn)) GameRoutine_dbd600();
void __attribute__((noreturn)) GameRoutine_fcf840();
void __attribute__((noreturn)) GameRoutine_fcfb90();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void collision_6704c0(__int64*, unsigned __int64);
void game_112d580(char*, __int64, __int64);
void game_112daa0(unsigned __int8*);
void game_112dfe0(__int64, __int64);
void game_64d0e0(int*, int*, int*, __int64, __int64, _DWORD*, __int64);
void game_AISupportSkillScope_Update(_BYTE*, unsigned int, unsigned int);
void game_facility_SceneTalk_Args_Args(unsigned __int8*, __int64,
                                       unsigned __int64);
void game_zview_d12d30_alt1(__int64, int32x2_t*,
                            char) __asm__("game_zview_d12d30");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void snd_Fade_Fade_10c910(__int64, int);
__int64 game_55c3a0(__int64 result, __int64 a2, float a3, double a4, float a5,
                    double a6, float a7);
void game_5c11f0(float a1, __int64 a2, float32x2_t* a3, float32x2_t* a4,
                 float* a5, int32x4_t* a6, _QWORD* a7, int a8, __int64 a9);
float game_5c4340(__int128* a1, __int64 a2, __int64 a3, int a4, float* a5,
                  float a6);
float game_5c4b80(float a1, float a2, float a3, float a4, float a5, float a6);
void game_64c460(int* a1, int* a2, unsigned __int64 a3, _DWORD* a4, __int64 a5);
void game_66f9a0(__int64 a1);
void game_6b98c0(const char* a1, char a2);
void game_6e5480(__int64* a1);
__int64* game_6f1f10(__int64* result, __int64* a2, __int64* a3, __int64* a4,
                     __int64* a5);
__int64 game_739bc0();
__int64 game_740ac0(__int64 result, __int64* a2, unsigned __int64 a3,
                    __int64* a4);
char* game_740d00(char* result, char* a2, char* a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7);
__int64 game_7bc4e0(__int64 a1, char a2);
__int64 game_7fbcc0(__int64 a1, unsigned __int8* a2);
bool game_89f340(int* a1, int* a2, __int64 a3);
__int64 game_8a08b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5);
bool game_8a0b20(__int64 a1, __int64 a2);
void game_8b11c0(__int64 a1);
void game_8c3c80(__int64 a1);
__int64 game_90c8d0(__int64 a1);
__int64 game_90c930(__int64 a1);
bool game_90cb60(__int64 a1);
__int64 game_90fd20(__int64 a1, _DWORD* a2);
__int64 game_989ea0(__int64 result, int a2, __int64 a3);
__int64 game_9dc300(__int64 a1);
__int64 game_a0ba50();
__int64 game_a0c5d0();
__int64 game_a0cb40(__int64 result);
__int64 game_a690c0(__int64 result, __int64 a2, __int64 a3, __int64 a4);
bool game_a691e0(__int64 a1, __int64 a2);
__int64* game_cb3d30(__int64* result, __int64* a2, __int64* a3);
void game_d58e20(__int64 a1, int a2, __int64* a3, int a4);
__int64 game_d8cf60(__int64 result);
_DWORD* game_d8d2c0(_DWORD* result);
__int64* game_dbd1a0(__int64* a1, __int64* a2);
void game_dbdff0(__int64 a1, int32x2_t* a2);
__int64* game_deb450(__int64* result, __int64* a2, __int64* a3, __int64* a4,
                     __int64* a5);
bool game_e2aae0(__int64 a1, __int64 a2);
__int64 game_e9f360(__int64 result);
__attribute__((swiftcall)) void game_e9fe30(PSEUDO_X8 x8_, __int64* a1);
__int64 game_eade00(__int64 a1);
void game_ebabe0(__int64 a1, __int64* a2, unsigned __int64 a3, __int64* a4,
                 __int64 a5);
void game_f6af20(unsigned __int64* a1, unsigned int a2);
__int64* game_fcf860(__int64* a1, __int64* a2);
__int64 game_1007060(__int64 a1);
void game_1017a40(__int64 a1);
void game_1017cc0(__int64 a1);
void game_1029080(__int64 a1);
_QWORD* game_1038880(__int64* a1, _QWORD* a2);
__int64 game_104e980();
__int64 game_109f0c0(__int64 result, const char* a2);
void game_10ca920(__int64* a1, __int64 a2);
__int64 game_10cbfe0(__int64 a1, __int64 a2);
__int64 game_113aec0();
__int64 game_113aee0();
__int64 game_113af00();
__int64 game_113af20();
unsigned __int64 game_11e9ce0(unsigned __int64 result, unsigned __int8* a2);
bool game_11fdbc0(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_1225280(PSEUDO_X8 x8_, __int64* result);
__int64 game_1282980(__int64 a1);
__int64 game_12a2520(__int64 a1, __int64 a2, _DWORD* a3);
__int64 game_12a7560(__int64 a1, unsigned int a2, __int64 a3, __int64 a4);
void game_12c2aa0(__int64* a1);
void game_1367b60(__int64 a1, _QWORD* a2);
bool game_145c270(__int64 a1, __int64 a2);
__int64 game_145d6e0();
void game_145d990(int* a1);
void game_1489b40(unsigned __int8* a1, const char* a2);
_QWORD* game_156d210(__int64 a1, int a2, __int16 a3);
__int64 game_159df00(__int64 a1, char a2);
__int64 game_159e2c0(__int64 a1, char a2);
__int64 game_159e540(__int64 a1);
__int64 game_15fc3b0(__int64 a1, _QWORD* a2, __int64 a3);

__int64 game_55c3a0(__int64 result, __int64 a2, float a3, double a4, float a5,
                    double a6, float a7)
{
  unsigned int v8;
  float v9;
  float v10;
  float v11;
  unsigned int v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  unsigned int v19;
  float v20;
  unsigned int v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;
  int v28;
  float v29;
  float v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  char v36;
  float v37;
  int v38;
  float v39;
  long double v40;
  float v41;

  v8 = *(unsigned __int16*)(a2 + 24);
  v9 = (float)v8;
  if (*(_BYTE*)(*(_QWORD*)(result + 40) + 9LL) == 1) {
    LOWORD(a5) = *(_WORD*)(a2 + 20);
    v10 = (float)(*(unsigned __int16*)(a2 + 14) + v8);
    v11 = (float)LODWORD(a5);
    v12 = *(unsigned __int16*)(a2 + 26);
    v13 = (float)(v9 + -0x1.0000000000000p-1f) / v11;
    v14 = (float)(v10 + 0x1.0000000000000p-1f) / v11;
    v15 = *(float*)(result + 12);
    v16 = *(float*)(result + 16);
    v17 = *(float*)(result + 24);
    a3 = a3 + (float)(v15 * -0x1.0000000000000p-1f);
    v18 = v17 + (float)(v16 * -0x1.0000000000000p-1f);
    LOWORD(v17) = *(_WORD*)(a2 + 10);
    *(float*)&v19 = (float)LODWORD(v17) + 0x1.0000000000000p+0f;
    v20 = v15 * *(float*)&v19;
    LOWORD(v19) = *(_WORD*)(a2 + 16);
    *(float*)&v21 = (float)v19;
    v22 = *(float*)&v21 + 0x1.0000000000000p+0f;
    LOWORD(v21) = *(_WORD*)(a2 + 22);
    v23 = (float)v21;
    v24 = (float)((float)v12 + -0x1.0000000000000p-1f) / (float)v21;
    v25 = v16 * v22;
    v26 = (float)((float)(*(unsigned __int16*)(a2 + 18) + v12) +
                  0x1.0000000000000p-1f) /
          v23;
    v27 = *(_QWORD*)(result + 48);
    v28 = *(_DWORD*)(v27 + 156);
    if (v28 >= (signed __int32)*(_DWORD*)(v27 + 152)) {
      return result;
    }
  }
  else {
    LOWORD(a5) = *(_WORD*)(a2 + 20);
    LOWORD(a7) = *(_WORD*)(a2 + 22);
    v29 = (float)LODWORD(a5);
    v30 = (float)(*(unsigned __int16*)(a2 + 14) + v8);
    v31 = *(unsigned __int16*)(a2 + 26);
    v13 = v9 / v29;
    v14 = v30 / v29;
    *(float*)&v32 = (float)v31;
    v24 = (float)v31 / (float)LODWORD(a7);
    LOWORD(v32) = *(_WORD*)(a2 + 10);
    v26 = (float)(*(unsigned __int16*)(a2 + 18) + v31) / (float)LODWORD(a7);
    *(float*)&v33 = (float)v32;
    v20 = *(float*)(result + 12) * *(float*)&v33;
    LOWORD(v33) = *(_WORD*)(a2 + 16);
    v25 = *(float*)(result + 16) * (float)v33;
    v18 = *(float*)(result + 24);
    v27 = *(_QWORD*)(result + 48);
    v28 = *(_DWORD*)(v27 + 156);
    if (v28 >= (signed __int32)*(_DWORD*)(v27 + 152)) {
      return result;
    }
  }
  v34 = result;
  *(_DWORD*)(v27 + 156) = v28 + 1;
  v35 = *(_QWORD*)(*(_QWORD*)(result + 48) + 160LL) + 56LL * v28;
  *(float*)v35 = v20;
  *(float*)(v35 + 4) = v25;
  *(float*)(v35 + 8) = a3;
  *(float*)(v35 + 12) = v18;
  *(_DWORD*)(v35 + 16) = *(_DWORD*)result;
  *(_DWORD*)(v35 + 20) = *(_DWORD*)(result + 4);
  v36 = *(_BYTE*)(result + 57);
  *(float*)(v35 + 24) = v13;
  *(float*)(v35 + 28) = 0x1.0000000000000p+0f - v24;
  *(float*)(v35 + 32) = v14;
  *(float*)(v35 + 36) = 0x1.0000000000000p+0f - v26;
  *(_BYTE*)(v35 + 51) = v36;
  v37 = *(float*)(result + 36) * *(float*)(result + 12);
  *(_WORD*)(v35 + 48) =
      (int)(float)(v37 * (float)(int)X8CALL_X0(
                             _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                          PSEUDO_X8, _QWORD))(
                                          **(_QWORD**)(result + 40) + 32LL))(
                                          (void*)*(_QWORD**)(result + 40),
                                          *(_QWORD*)(result + 40))));
  v38 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v34 + 40) + 40LL))(
      *(_QWORD*)(v34 + 40));
  v39 = *(float*)(v34 + 16);
  *(float*)&v40 = v39 * (float)v38;
  v41 = v39 + *(float*)&v40;
  if (*(_BYTE*)(*(_QWORD*)(v34 + 40) + 9LL) != 0) {
    *(float*)&v40 = v41;
  }
  GameRoutine_55d680(*(_QWORD*)(v34 + 48), v40);
  *(_BYTE*)(v35 + 50) = *(_BYTE*)(a2 + 42);
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v34 + 40) + 280LL))(
      *(_QWORD*)(v34 + 40));
  *(_QWORD*)(v35 + 40) = *(_QWORD*)(a2 + 32) | result & 1;
  return result;
}

void game_5c11f0(float a1, __int64 a2, float32x2_t* a3, float32x2_t* a4,
                 float* a5, int32x4_t* a6, _QWORD* a7, int a8, __int64 a9)
{
  __int64 v9;
  int v10;
  float v11;
  __int64 v12;
  unsigned int* v13;
  unsigned int* v14;
  unsigned int* v15;
  int32x4_t v16;
  int8x16_t v17;
  int8x16_t v18;
  float32x4_t v19;
  __int128 v20;
  float32x4_t v21;
  __int128 v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  int8x16_t v35;
  int8x16_t v36;
  int8x16_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  unsigned __int64 v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  int8x16_t v46;
  float32x4_t v47;
  __int128 v48;
  float32x4_t v49;
  __int128 v50;
  float v51;

  v9 = *(_QWORD*)(LANES128(a6[35]).n128_u64[1] + 616);
  v10 = *(_DWORD*)(v9 + 12);
  if (v10 != -1 && v10 <= (signed __int32)*(_DWORD*)(a9 + 4)) {
    return;
  }
  v11 = *(float*)(v9 + 4);
  if (*(_BYTE*)(v9 + 1) != 0) {
    if (*(_BYTE*)(LANES128(a6[10]).n128_u64[0] + 1875) != 0) {
      v12 = 16LL * a8;
      v13 = (unsigned int*)(a7[8] + v12);
      v14 = (unsigned int*)(a7[9] + v12);
      v15 = (unsigned int*)(a7[10] + v12);
      LANES128(v16).n128_u64[0] = *v13 | ((unsigned __int64)*v14 << 32);
      LANES128(v16).n128_u64[1] = *v15;
      LANES128(v17).n128_u64[0] = v13[1] | ((unsigned __int64)v14[1] << 32);
      LANES128(v17).n128_u64[1] = v15[1];
      LANES128(v18).n128_u64[0] = v13[2] | ((unsigned __int64)v14[2] << 32);
      LANES128(v18).n128_u64[1] = v15[2];
      LANES128(v19).n128_u64[0] = v13[3] | ((unsigned __int64)v14[3] << 32);
      LANES128(v19).n128_u64[1] = v15[3];
    }
    else {
      v16 = a6[52];
      v17 = a6[53];
      v18 = a6[54];
      v19 = a6[55];
    }
    v21 = vaddq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v16,
                            COERCE_FLOAT(*(_OWORD*)LANES64(*(a3)).n64_u64)),
                v17, COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0]), 1),
            v18, *(float32x4_t*)LANES64(*(a3)).n64_u64, 2),
        v19);
    if (*(_BYTE*)v9 != 0) {
      if (*(_BYTE*)v9 == 1 && LANES128(v21).n128_f32[1] < v11) {
        *a5 = a1;
      }
      return;
    }
    if (LANES128(v21).n128_f32[1] >= v11) {
      return;
    }
    v22 = *(_OWORD*)LANES64(*(a4)).n64_u64;
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v23).n128_i8[8] =
        vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v24 = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(v16, COERCE_FLOAT(*(_OWORD*)LANES64(*(a4)).n64_u64)),
            v17, COERCE_AS(float32x2_t, LANES64(*(a4)).n64_u64[0]), 1),
        v18, *(float32x4_t*)LANES64(*(a4)).n64_u64, 2);
    LANES128(v25).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v25).n128_i8[8] =
        vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v26 = vmulq_f32(vmulq_f32(v16, v23), v25);
    LANES128(v25).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v25).n128_i8[8] =
        vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v27).n128_i8[8] =
        vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v28 = vsubq_f32(v26, vmulq_f32(vmulq_f32(v16, v25), v27));
    LANES128(v28).n128_u64[0] = LANES128_OF(vpaddq_f32(v28, v28)).n128_u64[0];
    v29 = vaddq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v28).n128_u64[0]), 0),
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v28).n128_u64[0]), 1));
    v30 = vrecpeq_f32(v29);
    v31 = vmulq_f32(v30, vrecpsq_f32(v30, v29));
    v32 = vmulq_f32(v31, vrecpsq_f32(v31, v29));
    v33 = vzip1q_s32(v16, v18);
    v34 = vzip1q_s32(v17, COERCE_AS(int32x4_t, 0));
    v35 = vzip2q_s32(v33, v34);
    v36 = vzip1q_s32(vzip2q_s32(v16, v18),
                     vzip2q_s32(v17, COERCE_AS(int32x4_t, 0)));
    v37 = vzip1q_s32(v33, v34);
    LANES128(v38).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v39).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v40).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v41).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v38).n128_i8[8] =
        vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v42 = LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    *(int8x8_t*)&LANES128(v40).n128_i8[8] =
        vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v36).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v39).n128_u64[1] = v42;
    *(int8x8_t*)&LANES128(v41).n128_i8[8] =
        vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    *(int8x8_t*)&LANES128(v36).n128_i8[8] =
        vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v23).n128_i8[8] =
        vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v43 = vmlsq_f32(vmulq_f32(v38, v39), v36, v40);
    v44 = vmulq_f32(v36, v41);
    v45 = vmlsq_f32(vmulq_f32(v40, v23), v39, v41);
    v46 = vceqzq_f32(v29);
    v47 = vaddq_f32(
        vmlaq_laneq_f32(
            vmlaq_n_f32(vmulq_n_f32(vbicq_s8(vmulq_f32(v32, v43), v46),
                                    LANES128(v24).n128_f32[0]),
                        vbicq_s8(vmulq_f32(v32, v45), v46),
                        vmuls_lane_f32(
                            -*(float*)(v9 + 8),
                            COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                            1)),
            vbicq_s8(vmulq_f32(v32, vmlsq_f32(v44, v23, v38)), v46), v24, 2),
        COERCE_AS(float32x4_t, 0));
    *(float*)&v22 = *(float*)(v9 + 16) * LANES128(v47).n128_f32[0];
    *(_OWORD*)LANES64(*(a4)).n64_u64 = v22;
    DWORD1(v22) =
        COERCE_UNSIGNED_INT(vmuls_lane_f32(*(float*)(v9 + 16),
                       COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]), 1));
    *(_OWORD*)LANES64(*(a4)).n64_u64 = v22;
    *((_QWORD*)&v22 + 1) =
        COERCE_UNSIGNED_INT(vmuls_lane_f32(*(float*)(v9 + 16), v47, 2));
    *(_OWORD*)LANES64(*(a4)).n64_u64 = v22;
  LABEL_19:
    ++*(_DWORD*)(a9 + 4);
    return;
  }
  if (*(_BYTE*)v9 == 0) {
    v48 = *(_OWORD*)LANES64(*(a3)).n64_u64;
    if (COERCE_FLOAT(HIDWORD(LANES64(*(a3)).n64_u64[0])) >= v11) {
      return;
    }
    DWORD1(v48) = *(_DWORD*)(v9 + 4);
    *(_OWORD*)LANES64(*(a3)).n64_u64 = v48;
    v49 = *(float32x4_t*)LANES64(*(a4)).n64_u64;
    *((float32x2_t*)&v50 + 1) = a4[1];
    v51 = vmuls_lane_f32(-*(float*)(v9 + 8),
                         COERCE_AS(float32x2_t, LANES64(*(a4)).n64_u64[0]), 1);
    LANES64(*(a4)).n64_f32[1] = v51;
    *(float*)&v50 = *(float*)(v9 + 16) * LANES128(v49).n128_f32[0];
    *((float*)&v50 + 1) = v51;
    *(_OWORD*)LANES64(*(a4)).n64_u64 = v50;
    *((float*)&v50 + 1) = v51 * *(float*)(v9 + 16);
    *(_OWORD*)LANES64(*(a4)).n64_u64 = v50;
    *((_QWORD*)&v50 + 1) =
        COERCE_UNSIGNED_INT(vmuls_lane_f32(*(float*)(v9 + 16), v49, 2));
    *(_OWORD*)LANES64(*(a4)).n64_u64 = v50;
    goto LABEL_19;
  }
  if (*(_BYTE*)v9 == 1) {
    v20 = *(_OWORD*)LANES64(*(a3)).n64_u64;
    if (COERCE_FLOAT(HIDWORD(LANES64(*(a3)).n64_u64[0])) < v11) {
      DWORD1(v20) = *(_DWORD*)(v9 + 4);
      *(_OWORD*)LANES64(*(a3)).n64_u64 = v20;
      *a5 = a1;
    }
  }
}

float game_5c4340(__int128* a1, __int64 a2, __int64 a3, int a4, float* a5,
                  float a6)
{
  __int64 v6;
  float v7;
  float v8;
  __int64 v14;
  int v15;
  float v16;
  float v17;
  float v18;
  int v19;
  float* v20;
  float v21;
  float v22;
  float32x4_t v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float* v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  __int128 v73;
  float v74;
  float v75;
  float v76;
  float result;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;

  v6 = *(_QWORD*)(a2 + 568);
  v7 = *(float*)(a2 + 76);
  v8 = a6;
  v14 = *(_QWORD*)(v6 + 584);
  v15 = *(_DWORD*)(v14 + 16);
  if (*(_BYTE*)(v14 + 2) != 0) {
    v16 = *(float*)(*(_QWORD*)(v6 + 24) + 112LL);
    v17 = v16 + (float)((float)(0x1.0000000000000p+0f - v16) *
                        (float)(0x1.0000000000000p+0f - v7));
    if (v17 != 0x1.0000000000000p+0f) {
      v8 = (float)(0x1.0000000000000p+0f -
                   powf(v16 + (float)((float)(0x1.0000000000000p+0f - v16) *
                                      (float)(0x1.0000000000000p+0f - v7)),
                        a6)) /
           (float)(0x1.0000000000000p+0f - v17);
    }
  }
  v18 = (float)v15;
  if (*(_BYTE*)v14 != 0) {
    v19 = *(_DWORD*)(v14 + 16);
    v20 = (float*)(*(_QWORD*)(a3 + 32) + 16LL * a4);
    v21 = (float)(*(float*)(v14 + 24) / 0x1.9000000000000p+6f) * v18;
    v22 = (float)(*(float*)(v14 + 20) / 0x1.9000000000000p+6f) * v18;
    v23 = vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82b20), v18);
    v24 = v7 * v22;
    v25 = (float)(PSEUDO_UNFUSED(*(float*)(a2 + 68) * v22)) - v21;
    v26 = v21 + v21;
    v27 = (float)(LANES128(v23).n128_f32[0] + v25) + (float)(v26 * *v20);
    v28 = v8 + v27;
    v29 = (float)(LANES128(v23).n128_f32[1] + v25) + (float)(v26 * v20[1]);
    v79 = (float)(LANES128(v23).n128_f32[2] + v25) + (float)(v26 * v20[2]);
    v30 = 0x1.921fb60000000p+2f / (float)v19;
    if (*(_BYTE*)(v14 + 1) != 0) {
      v31 = game_5c4910((float*)v14, v24 + (float)(v7 + v28),
                        0x1.921fb60000000p+2f / (float)v19);
      v32 = v31 - game_5c4910((float*)v14, v8 + v27, v30);
      v33 = game_5c4910((float*)v14, v24 + v27, v30);
      v80 = v32 - (float)(v33 - game_5c4910((float*)v14, v27, v30));
      v34 =
          game_5c4910((float*)v14, v24 + (float)(v7 + (float)(v8 + v29)), v30);
      v35 = v34 - game_5c4910((float*)v14, v8 + v29, v30);
      v36 = game_5c4910((float*)v14, v24 + v29, v30);
      v37 = v35 - (float)(v36 - game_5c4910((float*)v14, v29, v30));
      v38 = v8 + v79;
      v39 = game_5c4910((float*)v14, v24 + (float)(v7 + v38), v30);
      v40 = v39 - game_5c4910((float*)v14, v38, v30);
      v41 = game_5c4910((float*)v14, v24 + v79, v30);
      v42 = v37;
      v43 = v40 - (float)(v41 - game_5c4910((float*)v14, v79, v30));
    }
    else {
      v54 = v24 * v30;
      v55 = v27 * v30;
      v56 = v55 + (float)(PSEUDO_UNFUSED(v24 * v30));
      v78 = v54;
      v57 =
          v54 + (float)((float)(PSEUDO_UNFUSED(v28 * v30)) + (float)(v7 * v30));
      v81 = game_5c4b80(v28 * v30, v57, v55, v56, 0x1.aaaaaa0000000p+0f,
                        0x1.0000000000000p+2f);
      v82 = v81 + game_5c4b80(v28 * v30, v57, v55, v56, 0x1.30c30c0000000p+1f,
                              0x1.8000000000000p+1f);
      v83 = v82 + game_5c4b80(v28 * v30, v57, v55, v56, 0x1.30c30c0000000p+1f,
                              0x1.0000000000000p+1f);
      v80 = v83 + game_5c4b80(v28 * v30, v57, v55, v56, 0x1.30c30c0000000p+1f,
                              0x1.8000000000000p+0f);
      v58 = v8 + v29;
      v59 = v29 * v30;
      v60 = v58 * v30;
      v61 =
          v78 + (float)((float)(PSEUDO_UNFUSED(v58 * v30)) + (float)(v7 * v30));
      v62 = game_5c4b80(v58 * v30, v61, v59, v59 + v78, 0x1.aaaaaa0000000p+0f,
                        0x1.0000000000000p+2f);
      v63 = v62 + game_5c4b80(v60, v61, v59, v59 + v78, 0x1.30c30c0000000p+1f,
                              0x1.8000000000000p+1f);
      v64 = v63 + game_5c4b80(v60, v61, v59, v59 + v78, 0x1.30c30c0000000p+1f,
                              0x1.0000000000000p+1f);
      v42 = v64 + game_5c4b80(v60, v61, v59, v59 + v78, 0x1.30c30c0000000p+1f,
                              0x1.8000000000000p+0f);
      v65 = v79 * v30;
      v66 = (float)(v8 + v79) * v30;
      v67 = v66 + (float)(v7 * v30);
      v68 = (float)(PSEUDO_UNFUSED(v79 * v30)) + v78;
      v69 = v78 + v67;
      v70 = game_5c4b80(v66, v78 + v67, v65, v68, 0x1.aaaaaa0000000p+0f,
                        0x1.0000000000000p+2f);
      v71 = v70 + game_5c4b80(v66, v69, v65, v68, 0x1.30c30c0000000p+1f,
                              0x1.8000000000000p+1f);
      v72 = v71 + game_5c4b80(v66, v69, v65, v68, 0x1.30c30c0000000p+1f,
                              0x1.0000000000000p+1f);
      v43 = v72 + game_5c4b80(v66, v69, v65, v68, 0x1.30c30c0000000p+1f,
                              0x1.8000000000000p+0f);
    }
  }
  else {
    v44 = (float*)(*(_QWORD*)(a3 + 32) + 16LL * a4);
    v45 = v44[1] * v18;
    v46 = v8 + (float)(PSEUDO_UNFUSED(*v44 * v18));
    v47 = v44[2] * v18;
    v48 = 0x1.921fb60000000p+2f / (float)*(int*)(v14 + 16);
    if (*(_BYTE*)(v14 + 1) != 0) {
      v49 = game_5c4910((float*)v14, v7 + v46, v48);
      v80 = v49 - game_5c4910((float*)v14, v46, v48);
      v50 = game_5c4910((float*)v14, v7 + (float)(v8 + v45), v48);
      v51 = game_5c4910((float*)v14, v8 + v45, v48);
      v52 = v8 + v47;
      v42 = v50 - v51;
      v53 = game_5c4910((float*)v14, v7 + v52, v48);
      v43 = v53 - game_5c4910((float*)v14, v52, v48);
    }
    else {
      v80 = game_5c4de0(v46 * v48,
                        (float)(PSEUDO_UNFUSED(v46 * v48)) + (float)(v7 * v48));
      v42 = game_5c4de0((float)(v8 + v45) * v48,
                        (float)(PSEUDO_UNFUSED((float)(v8 + v45) * v48)) +
                            (float)(v7 * v48));
      v43 = game_5c4de0((float)(v8 + v47) * v48,
                        (float)(PSEUDO_UNFUSED((float)(v8 + v47) * v48)) +
                            (float)(v7 * v48));
    }
  }
  v73 = *a1;
  v74 = COERCE_FLOAT(*a1) + (float)(v80 * *a5);
  LODWORD(v75) = HIDWORD(*(_QWORD*)a1);
  v76 = COERCE_FLOAT(*((_QWORD*)a1 + 1));
  *(float*)a1 = v74;
  *(float*)&v73 = v74;
  *((float*)&v73 + 1) = v75 + (float)(v42 * a5[1]);
  *a1 = v73;
  result = v76 + (float)(v43 * a5[2]);
  *((_QWORD*)&v73 + 1) = LODWORD(result);
  *a1 = v73;
  return result;
}

float game_5c4b80(float a1, float a2, float a3, float a4, float a5, float a6)
{
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
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;

  v6 = a2 * a5;
  v7 = a3 * a5;
  v8 = a4 * a5;
  v9 = (float)(PSEUDO_UNFUSED(a1 * a5)) +
       (float)(roundf((float)(a1 * a5) * 0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  v10 = -0x1.921fb60000000p+1f - v9;
  if (v9 >= -0x1.921fb60000000p+0f) {
    v10 = v9;
  }
  if (v9 > 0x1.921fb60000000p+0f) {
    v11 = 0x1.921fb60000000p+1f - v9;
  }
  else {
    v11 = v10;
  }
  v17 =
      v6 + (float)(roundf(v6 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  v18 = -0x1.921fb60000000p+1f - v17;
  if (v17 >= -0x1.921fb60000000p+0f) {
    v18 = v17;
  }
  if (v17 > 0x1.921fb60000000p+0f) {
    v19 = 0x1.921fb60000000p+1f - v17;
  }
  else {
    v19 = v18;
  }
  v20 =
      v7 + (float)(roundf(v7 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  v21 = -0x1.921fb60000000p+1f - v20;
  if (v20 >= -0x1.921fb60000000p+0f) {
    v21 = v20;
  }
  if (v20 > 0x1.921fb60000000p+0f) {
    v22 = 0x1.921fb60000000p+1f - v20;
  }
  else {
    v22 = v21;
  }
  v23 =
      v8 + (float)(roundf(v8 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  v24 = -0x1.921fb60000000p+1f - v23;
  if (v23 >= -0x1.921fb60000000p+0f) {
    v24 = v23;
  }
  if (v23 > 0x1.921fb60000000p+0f) {
    v25 = 0x1.921fb60000000p+1f - v23;
  }
  else {
    v25 = v24;
  }
  v12 = *(float*)GameData_212c190;
  v13 = *((float*)GameData_212c190 + 1);
  v15 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v16 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v14 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  return a6 *
         (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                     v19 *
                                     (float)((float)((float)-(
                                                         float)(v14 -
                                                                (float)((float)(v16 +
                                                                                (float)((float)-(
                                                                                            float)(v15 -
                                                                                                   (float)((float)(v13 -
                                                                                                                   (float)(v12 *
                                                                                                                           (float)(v19 *
                                                                                                                                   v19))) *
                                                                                                           (float)(v19 *
                                                                                                                   v19))) *
                                                                                        (float)(v19 *
                                                                                                v19))) *
                                                                        (float)(v19 *
                                                                                v19))) *
                                                     (float)(v19 * v19)) +
                                             0x1.0000000000000p+0f))) -
                                 (float)(PSEUDO_UNFUSED(
                                     v11 *
                                     (float)((float)((float)-(
                                                         float)(v14 -
                                                                (float)((float)(v16 +
                                                                                (float)((float)-(
                                                                                            float)(v15 -
                                                                                                   (float)((float)(v13 -
                                                                                                                   (float)(v12 *
                                                                                                                           (float)(v11 *
                                                                                                                                   v11))) *
                                                                                                           (float)(v11 *
                                                                                                                   v11))) *
                                                                                        (float)(v11 *
                                                                                                v11))) *
                                                                        (float)(v11 *
                                                                                v11))) *
                                                     (float)(v11 * v11)) +
                                             0x1.0000000000000p+0f)))) +
                         (float)(PSEUDO_UNFUSED(
                             v22 *
                             (float)((
                                         float)((float)-(
                                                    float)(v14 -
                                                           (float)((float)(v16 +
                                                                           (float)((
                                                                                       float)-(float)(v15 - (float)((float)(v13 -
                                                                                                                            (float)(v12 *
                                                                                                                                    (float)(v22 *
                                                                                                                                            v22))) *
                                                                                                                    (float)(v22 *
                                                                                                                            v22))) *
                                                                                   (float)(v22 *
                                                                                           v22))) *
                                                                   (float)(v22 *
                                                                           v22))) *
                                                (float)(v22 * v22)) +
                                     0x1.0000000000000p+0f)))) -
                 (float)(PSEUDO_UNFUSED(
                     v25 *
                     (float)((float)((float)-(
                                         float)(v14 -
                                                (float)((float)(v16 +
                                                                (float)((float)-(
                                                                            float)(v15 -
                                                                                   (float)((float)(v13 -
                                                                                                   (float)(v12 *
                                                                                                           (float)(v25 *
                                                                                                                   v25))) *
                                                                                           (float)(v25 *
                                                                                                   v25))) *
                                                                        (float)(v25 *
                                                                                v25))) *
                                                        (float)(v25 * v25))) *
                                     (float)(v25 * v25)) +
                             0x1.0000000000000p+0f))));
}

void game_64c460(int* a1, int* a2, unsigned __int64 a3, _DWORD* a4, __int64 a5)
{
  int* v5;
  int* v6;
  unsigned __int64 v7;
  unsigned __int64 v10;
  unsigned __int64 v12;
  int* v13;
  int* v14;
  __int64 v15;
  int* v16;
  unsigned __int64 v17;
  __int64 v18;
  int* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
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
  char v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _DWORD* v54;
  _DWORD* v55;
  _DWORD* v56;
  _DWORD* v57;
  struct {
    unsigned __int64 v59[2];
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
  } v59_;

  if (a3 < 2) {
    return;
  }
  v5 = a2;
  v6 = a1;
  if (a3 == 2) {
    if (*(a2 - 18) < *a1) {
      GameHr_64d6c0(a1, (__int64)(a2 - 18));
    }
    return;
  }
  if ((__int64)a3 > 0) {
    v7 = a3 >> 1;
    v10 = 9 * (a3 >> 1);
    if ((__int64)a3 <= a5) {
      v52 = 18 * (a3 >> 1);
      game_64c980((__int64)a1, &a1[v52], a3 >> 1, (__int64)a4);
      v53 = a3 - v7;
      v54 = &a4[v52];
      game_64c980((__int64)&v6[2 * v10], v5, v53, (__int64)&a4[v52]);
      v59_.v59[0] = a3;
      v55 = &a4[v52];
      v56 = a4;
      v57 = &a4[18 * a3];
      while (v55 != v57) {
        if ((signed __int32)*v55 >= (signed __int32)*v56) {
          GameRoutine_64d860((__int64)v6, (__int64)v56);
          v56 += 18;
        }
        else {
          GameRoutine_64d860((__int64)v6, (__int64)v55);
          v55 += 18;
        }
        v6 += 18;
        if (v56 == v54) {
          while (v55 != v57) {
            GameRoutine_64d860((__int64)v6, (__int64)v55);
            v55 += 18;
            v6 += 18;
          }
          goto LABEL_79;
        }
      }
      while (v56 != v54) {
        GameRoutine_64d860((__int64)v6, (__int64)v56);
        v56 += 18;
        v6 += 18;
      }
    LABEL_79:
      if (a4 != nullptr) {
        GameRoutine_64da00(v59_.v59, (__int64)a4);
      }
    }
    else {
      game_64c460(a1, &a1[18 * (a3 >> 1)], a3 >> 1, a4, a5);
      v12 = a3 - v7;
      game_64c460(&v6[2 * v10], v5, v12, a4, a5);
      game_64d0e0(v6, &v6[2 * v10], v5, v7, v12, a4, a5);
    }
    return;
  }
  if (a1 == a2) {
    return;
  }
  v13 = a1 + 18;
  if (a1 + 18 == a2) {
    return;
  }
  v14 = a1;
  v15 = fw_memory_g_heap_manager_ptr;
  while (2) {
    v16 = v13;
    if (v14[18] >= *v14) {
      goto LABEL_12;
    }
    LODWORD(v59_.v59[0]) = v14[18];
    v17 = *((_QWORD*)v14 + 10);
    v18 = *((_QWORD*)v14 + 11);
    v19 = v16;
    *((_QWORD*)v14 + 10) = 0;
    *((_QWORD*)v14 + 11) = 0;
    v59_.v59[1] = v17;
    v59_.v60 = v18;
    v20 = *((_QWORD*)v14 + 12);
    v21 = *((_QWORD*)v14 + 13);
    *((_QWORD*)v14 + 12) = 0;
    *((_QWORD*)v14 + 13) = 0;
    v59_.v61 = v20;
    v59_.v62 = v21;
    v22 = *((_QWORD*)v14 + 14);
    v23 = *((_QWORD*)v14 + 15);
    *((_QWORD*)v14 + 14) = 0;
    *((_QWORD*)v14 + 15) = 0;
    v59_.v63 = v22;
    v24 = *((_QWORD*)v14 + 16);
    v25 = *((_QWORD*)v14 + 17);
    v59_.v64 = v23;
    *((_QWORD*)v14 + 16) = 0;
    *((_QWORD*)v14 + 17) = 0;
    v59_.v65 = v24;
    v59_.v66 = v25;
    v26 = *v14;
    while (1) {
      *v19 = v26;
      v27 = v14;
      v28 = *((_QWORD*)v14 + 1);
      v29 = *((_QWORD*)v27 + 2);
      *((_QWORD*)v27 + 1) = 0;
      *((_QWORD*)v27 + 2) = 0;
      v30 = *((_QWORD*)v19 + 2);
      *((_QWORD*)v19 + 1) = v28;
      *((_QWORD*)v19 + 2) = v29;
      if (v30 == 0) {
        goto LABEL_17;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
        std___1___shared_weak_count___release_weak(v30);
        v31 = *((_QWORD*)v19 + 3);
        if (v31 == 0) {
          goto LABEL_33;
        }
      }
      else {
      LABEL_17:
        v31 = *((_QWORD*)v19 + 3);
        if (v31 == 0) {
          goto LABEL_33;
        }
      }
      v32 = *((_QWORD*)v19 + 4);
      if (v31 == v32) {
        goto LABEL_28;
      }
      v33 = *((_QWORD*)v19 + 4);
      do {
        v34 = *(_BYTE*)(v33 - 24);
        v33 -= 24;
        if ((v34 & 1) != 0) {
          v35 = *(_QWORD*)(v32 - 8);
          if (v35 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
              v36 = 128;
            }
            else {
              v36 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v36, v35);
          }
        }
        v32 = v33;
      } while (v33 != v31);
      v37 = *((_QWORD*)v19 + 3);
      *((_QWORD*)v19 + 4) = v31;
      v31 = v37;
      if (v37 != 0) {
      LABEL_28:
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
          v38 = 128;
        }
        else {
          v38 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v38, v31);
      }
      *((_QWORD*)v19 + 4) = 0;
      *((_QWORD*)v19 + 5) = 0;
    LABEL_33:
      *((_QWORD*)v19 + 3) = *((_QWORD*)v27 + 3);
      *((_QWORD*)v19 + 4) = *((_QWORD*)v27 + 4);
      *((_QWORD*)v19 + 5) = *((_QWORD*)v27 + 5);
      *((_QWORD*)v27 + 3) = 0;
      *((_QWORD*)v27 + 4) = 0;
      *((_QWORD*)v27 + 5) = 0;
      if ((v19[12] & 1) != 0) {
        v39 = *((_QWORD*)v19 + 8);
        if (v39 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
            v40 = 128;
          }
          else {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v40, v39);
        }
      }
      v41 = *((_QWORD*)v27 + 7);
      *((_QWORD*)v19 + 6) = *((_QWORD*)v27 + 6);
      *((_QWORD*)v19 + 7) = v41;
      *((_QWORD*)v19 + 8) = *((_QWORD*)v27 + 8);
      *((_WORD*)v27 + 24) = 0;
      if (v27 == v6) {
        break;
      }
      v14 = v27 - 18;
      v26 = *(v27 - 18);
      v19 = v27;
      if (SLODWORD(v59_.v59[0]) >= v26) {
        goto LABEL_45;
      }
    }
    v27 = v6;
  LABEL_45:
    GameRoutine_64d860((__int64)v27, (__int64)v59_.v59);
    if ((v59_.v64 & 1) != 0 && v59_.v66 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
        v42 = 128;
      }
      else {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v42, v59_.v66);
    }
    v43 = v59_.v61;
    v5 = a2;
    if (v59_.v61 != 0) {
      v44 = v59_.v62;
      if (v59_.v61 != v59_.v62) {
        v45 = v59_.v62;
        do {
          v46 = *(_BYTE*)(v45 - 24);
          v45 -= 24;
          if ((v46 & 1) != 0) {
            v47 = *(_QWORD*)(v44 - 8);
            if (v47 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
                v48 = 128;
              }
              else {
                v48 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v48, v47);
            }
          }
          v44 = v45;
        } while (v45 != v43);
      }
      v49 = *(_QWORD*)v15;
      v59_.v62 = v43;
      if (*(_QWORD*)(v49 + 200) != 0) {
        v50 = 128;
      }
      else {
        v50 = 56;
      }
      nn_mem_StandardAllocator_Free(v49 + v50, v43);
    }
    v51 = v59_.v60;
    if (v59_.v60 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v59_.v60 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
      std___1___shared_weak_count___release_weak(v51);
    }
  LABEL_12:
    v13 = v16 + 18;
    v14 = v16;
    if (v16 + 18 != v5) {
      continue;
    }
    break;
  }
}

void game_66f9a0(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v2;
  int v3;
  unsigned __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
  unsigned int v23;
  int v24;
  int v25;
  unsigned int v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  int v32;
  __int64 v33;
  bool v34;
  _QWORD* v35;
  __int64 v36;
  int v37;
  __int64 v38;
  bool v39;
  _QWORD* v40;
  __int64 v41;
  int v42;
  __int64 v43;
  bool v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  _BYTE* v52;
  char v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64* v64;
  _QWORD* v65;
  __int64 v66;
  char* v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64* v73;
  __int64 v74;
  __int64* v75;
  __int64* v76;
  __int64* v77;
  __int64* v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;

  v1 = *(_QWORD*)(a1 + 248);
  v2 = *(_QWORD*)(a1 + 256);
  v3 = *(unsigned __int8*)(a1 + 184);
  if (v1 == v2 << 6) {
    if ((__int64)(v1 + 1) < 0) {
      goto LABEL_96;
    }
    v5 = v2 << 7;
    v6 = (__int64*)(a1 + 240);
    if (v5 <= (v1 & 0x3FFFFFFFFFFFFFC0LL) + 64) {
      v5 = (v1 & 0x3FFFFFFFFFFFFFC0LL) + 64;
    }
    if (v1 <= 0x3FFFFFFFFFFFFFFELL) {
      v7 = v5;
    }
    else {
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    collision_6704c0(v6, v7);
    v1 = *(_QWORD*)(a1 + 248);
  }
  v8 = v1 >> 6;
  *(_QWORD*)(a1 + 248) = v1 + 1;
  v9 = *(_QWORD*)(a1 + 240);
  v10 = 1LL << v1;
  if (v3 != 0) {
    v11 = *(_QWORD*)(v9 + 8 * v8) | v10;
  }
  else {
    v11 = *(_QWORD*)(v9 + 8 * v8) & ~v10;
  }
  *(_QWORD*)(v9 + 8 * v8) = v11;
  *(_BYTE*)(a1 + 184) = 0;
  v13 = *(_QWORD*)(a1 + 96);
  v12 = *(_QWORD*)(a1 + 104);
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  v15 = v12 - v13;
  if (v12 == v13) {
    v20 = 0;
    v16 = 0;
    v17 = 0;
    goto LABEL_71;
  }
  if (v15 < 0) {
  LABEL_96:
    GameRoutine_6706a0();
  }
  v16 = 0xCCCCCCCCCCCCCCCDLL * (v15 >> 3);
  v17 = ((v16 - 1) >> 6) + 1;
  v18 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       8 * v17, 16, 0);
  v19 = v16 >> 6;
  v20 = v18;
  if (v16 >= 0x40) {
    memset(v18, 0, 8 * v19);
  }
  if ((v16 & 0x3F) != 0) {
    *(_QWORD*)(v20 + 8 * v19) &=
        ~(0xFFFFFFFFFFFFFFFFLL >> (-(v16 & 0x3F) & 63));
  }
  v21 = v16 & 0x3F;
  if ((v16 & 0x3F) != 0) {
    v22 = (_QWORD*)(v20 + 8 * v19);
    v23 = v21 ^ 0x3F;
    v24 = 64 - v21;
    v25 = (64 - v21) & 3;
    if (v25 != 0) {
      v26 = v21 | 0xFFFFFFC0;
      do {
        v27 = 1LL << v21;
        v28 = v21 == 63;
        ++v26;
        if (v21 == 63) {
          v21 = 0;
        }
        else {
          ++v21;
        }
        *v22 &= ~v27;
        if (v28) {
          v29 = 8;
        }
        else {
          v29 = 0;
        }
        --v25;
        v22 = (_QWORD*)((char*)v22 + v29);
      } while (v25 != 0);
      v24 = -v26;
    }
    if (v23 >= 3) {
      do {
        v30 = 1LL << v21;
        v31 = v21 == 63;
        if (v21 == 63) {
          v32 = 0;
        }
        else {
          v32 = v21 + 1;
        }
        *v22 &= ~v30;
        v33 = v31;
        v34 = v32 == 63;
        v35 = &v22[v33];
        v36 = 1LL << v32;
        if (v32 == 63) {
          v37 = 0;
        }
        else {
          v37 = v32 + 1;
        }
        *v35 &= ~v36;
        v38 = v34;
        v39 = v37 == 63;
        v40 = &v35[v38];
        v41 = 1LL << v37;
        if (v37 == 63) {
          v42 = 0;
        }
        else {
          v42 = v37 + 1;
        }
        *v40 &= ~v41;
        v43 = v39;
        v44 = v42 == 63;
        v45 = &v40[v43];
        v46 = 1LL << v42;
        if (v42 == 63) {
          v21 = 0;
        }
        else {
          v21 = v42 + 1;
        }
        *v45 &= ~v46;
        v47 = v44;
        v24 -= 4;
        v22 = &v45[v47];
      } while (v24 != 0);
    }
  }
  if (v15 == 40) {
    v48 = 0;
  }
  else {
    v55 = 0;
    v48 = 0;
    do {
      v57 = 1LL << (v48 & 0x3E);
      v58 = *(_QWORD*)(a1 + 96) + v55;
      v59 = v48 >> 6;
      if (*(_BYTE*)(v58 + 36) == 1) {
        v60 = *(_QWORD*)(v20 + 8 * v59) | v57;
      }
      else {
        v60 = *(_QWORD*)(v20 + 8 * v59) & ~v57;
      }
      *(_QWORD*)(v20 + 8 * v59) = v60;
      *(_BYTE*)(v58 + 36) = 0;
      v61 = 1LL << ((unsigned __int8)v48 + 1);
      v62 = *(_QWORD*)(a1 + 96) + v55;
      if ((*(_BYTE*)(v62 + 76) & 1) != 0) {
        v56 = *(_QWORD*)(v20 + 8 * v59) | v61;
      }
      else {
        v56 = *(_QWORD*)(v20 + 8 * v59) & ~v61;
      }
      v48 += 2LL;
      v55 += 80;
      *(_QWORD*)(v20 + 8 * v59) = v56;
      *(_BYTE*)(v62 + 76) = 0;
    } while ((v16 & 0x3FFFFFFFFFFFFFELL) != v48);
  }
  if ((v16 & 1) != 0) {
    v49 = *(_QWORD*)(a1 + 96) + 40 * v48;
    v50 = v48 >> 6;
    v51 = 1LL << v48;
    v53 = *(_BYTE*)(v49 + 36);
    v52 = (_BYTE*)(v49 + 36);
    if ((v53 & 1) != 0) {
      v54 = *(_QWORD*)(v20 + 8 * v50) | v51;
    }
    else {
      v54 = *(_QWORD*)(v20 + 8 * v50) & ~v51;
    }
    *(_QWORD*)(v20 + 8 * v50) = v54;
    *v52 = 0;
  }
LABEL_71:
  v64 = *(__int64**)(a1 + 272);
  v63 = *(_QWORD*)(a1 + 280);
  if ((unsigned __int64)v64 >= v63) {
    v66 = *(_QWORD*)(a1 + 264);
    v67 = (char*)v64 - v66;
    v68 = 1 - 0x5555555555555555LL * (((__int64)v64 - v66) >> 3);
    if (v68 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_670c00();
    }
    v69 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v63 - v66) >> 3);
    if (2 * v69 > v68) {
      v68 = 2 * v69;
    }
    if (v69 >= 0x555555555555555LL) {
      v70 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v70 = v68;
    }
    if (v70 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_60a210();
    }
    v71 = 3 * v70;
    v72 = fw_memory_HeapManager_Allocate(*v14, 24 * v70, 16, 0);
    v73 = (__int64*)&v67[v72];
    v74 = v72 + 8 * v71;
    *v73 = v20;
    v73[1] = v16;
    v75 = *(__int64**)(a1 + 264);
    v76 = *(__int64**)(a1 + 272);
    v73[2] = v17;
    v65 = v73 + 3;
    v77 = (__int64*)((char*)v73 + ((char*)v75 - (char*)v76));
    if (v75 != v76) {
      v78 = v75;
      v79 = v77;
      do {
        *v79 = *v78;
        v79[1] = v78[1];
        v79[2] = v78[2];
        v78[1] = 0;
        v78[2] = 0;
        *v78 = 0;
        v78 += 3;
        v79 += 3;
      } while (v78 != v76);
      do {
        if (*v75 != 0) {
          if (*(_QWORD*)(*v14 + 200) != 0) {
            v80 = 128;
          }
          else {
            v80 = 56;
          }
          nn_mem_StandardAllocator_Free(*v14 + v80, *v75);
        }
        v75 += 3;
      } while (v75 != v76);
      v75 = *(__int64**)(a1 + 264);
    }
    *(_QWORD*)(a1 + 264) = v77;
    *(_QWORD*)(a1 + 272) = v65;
    *(_QWORD*)(a1 + 280) = v74;
    if (v75 != nullptr) {
      v81 = 128;
      if (*(_QWORD*)(*v14 + 200) == 0) {
        v81 = 56;
      }
      nn_mem_StandardAllocator_Free(*v14 + v81, (__int64)v75);
    }
  }
  else {
    *v64 = v20;
    v64[1] = v16;
    v65 = v64 + 3;
    v64[2] = v17;
  }
  *(_QWORD*)(a1 + 272) = v65;
}

void game_6b98c0(const char* a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned int* v9;
  __int64 v10;
  __int64 (**v11)();
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  const char* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  int v25;
  __int64* v26;
  __int64 v27;
  const char* v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  unsigned __int64 v33;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  _DWORD* v42;
  unsigned __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  _QWORD* v69;
  unsigned __int64 v70;
  __int64 (***v71)();
  int v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  _QWORD* v79;
  _QWORD* v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  char* v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  char* v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64** v118;
  __int64* v119;
  unsigned __int64 v120;
  __int64 v121;
  __int64 v122;
  _QWORD* v123;
  char v124;
  __int64 v125;
  __int64 v126;
  _QWORD* v127;
  char v128;
  __int64 v129;
  _QWORD* v130;
  char v131;
  const char* v132;
  _QWORD* v133;
  char v134;
  const char* v135;
  unsigned __int64 v136;
  const char** v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  const char* v144;
  __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64* v149;
  __int64* v150;
  __int64 v151;
  unsigned __int16 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  _QWORD* v156;
  __int64 (***v157)();
  int v158;
  __int64 v159;
  _QWORD* v160;
  __int64* v161;
  __int64* v162;
  __int64 v163;
  __int64 v164;
  __int64* v165;
  unsigned __int64 v166;
  __int64 v167;
  __int64* v168;
  __int64 v169;
  bool v170;
  unsigned __int64** v171;
  unsigned __int64** v172;
  __int64* v173;
  _QWORD* v174;
  __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  unsigned __int64** v178;
  unsigned __int64* v179;
  unsigned __int64 v181;
  unsigned __int64 v182;
  unsigned __int64 v183;
  unsigned __int64 v184;
  unsigned __int64 v185;
  __int64 (*v186)();
  _QWORD* v187;
  unsigned __int64 v188;
  __int64 v189;
  __int64 (**v190)();
  __int64* v191;
  __int64 v192;
  unsigned __int64 v193;
  __int64* v194;
  __int64 v195;
  unsigned __int64* v196;
  unsigned __int64 v197;
  unsigned __int64 v198;
  __int64 (*v199)();
  __int64 v200;
  unsigned __int64 v201;
  __int64* v202;
  __int64* v203;
  __int64* v204;
  _QWORD* v205;
  __int64 v206;
  unsigned __int64 v207;
  __int64 v208;
  signed __int64 v209;
  unsigned __int64 v210;
  __int64 v211;
  unsigned __int64 v212;
  __int64 v213;
  unsigned __int64 v214;
  __int64 v215;
  __int64 v216;
  unsigned __int64 v217;
  __int64 v218;
  unsigned __int64 v219;
  __int64 v220;
  unsigned __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  unsigned __int64 v229;
  unsigned __int64 v230;
  __int64 v231;
  __int64* v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64* v237;
  __int64* v238;
  __int64 v239;
  __int64* v240;
  __int64 v241;
  __int64 v242;
  unsigned __int64 v243;
  __int64* v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  unsigned __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  unsigned __int64 v255;
  __int64 v256;
  __int64 v257;
  char* v258;
  __int64 v259;
  unsigned __int64 v260;
  __int64 v261;
  __int64 v262;
  _QWORD* v263;
  __int64 v264;
  _QWORD* v265;
  __int64 v266;
  __int64 (**v267)();
  __int64 v268;
  __int64 v269;
  __int64 v270;
  _QWORD* v271;
  __int64 v272;
  _QWORD* v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  char v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  unsigned int v287;
  unsigned __int64** v288;
  _QWORD* v289;
  __int64* v290;
  __int64 v291;
  bool v292;
  __int64 v293;
  unsigned __int64 v294;
  unsigned __int64 v295;
  __int64 v296;
  __int64* v297;
  __int64* v298;
  __int64 v299;
  __int64 v300;
  __int64 v301[3];
  struct {
    _QWORD v302[2];
    char* v303;
  } v302_;
  struct {
    __int64 v304;
    __int64 v305;
  } v304_;
  __int64 v306;
  struct {
    __int64 v307;
    unsigned __int64 v308;
    _QWORD* v309;
    __int64 v310;
    int v311;
  } v307_;
  struct {
    signed __int64 v312;
    unsigned __int64 v313;
  } v312_;
  struct {
    __int64 v314;
    __int64 v315;
    __int64* v316;
  } v314_;
  int v317[4];

  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v131 = COERCE_AS(__typeof__(v131),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameData_21ca258 = a2;
  if (*GameData_212c770[0] == 0 || game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) == 0) {
    goto LABEL_22;
  }
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if ((v4 & 0x80000000) == 0) {
    while (v5 != v6) {
      v8 = *v5++;
      v7 = v8;
      if (*(_DWORD*)(v8 + 84) == v4) {
        goto LABEL_15;
      }
    }
  LABEL_10:
    v9 = game_gmap_SpotMgr_GetCurrentSpot(),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v131 = COERCE_AS(__typeof__(v131),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v9 != nullptr) {
      goto LABEL_16;
    }
  LABEL_22:
    LODWORD(v13) = -1;
    goto LABEL_23;
  }
  if (v5 == v6) {
    goto LABEL_10;
  }
  while (1) {
    v7 = *v5;
    if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
      break;
    }
    if (++v5 == v6) {
      goto LABEL_10;
    }
  }
LABEL_15:
  v9 = *(unsigned int**)v7;
  if (*(_QWORD*)v7 == 0) {
    goto LABEL_22;
  }
LABEL_16:
  v10 = *((_QWORD*)v9 + 15);
  if (v10 == GameRoutine_ae0560()) {
    LODWORD(v13) = 2;
  }
  else {
    TroopMgr_134b820((void*)(&v312_.v312), (__int64)v9),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v131 = COERCE_AS(__typeof__(v131),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v11 = (__int64 (**)(void))v312_.v312,
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v131 = COERCE_AS(__typeof__(v131),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v12 = v312_.v313;
    v13 = (v312_.v313 - v312_.v312) >> 3;
    if (v312_.v312 != 0) {
      v312_.v313 = v312_.v312;
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v312_.v312),
          v124 = COERCE_AS(__typeof__(v124),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v128 = COERCE_AS(__typeof__(v128),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v131 = COERCE_AS(__typeof__(v131),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v134 = COERCE_AS(__typeof__(v134),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if ((__int64 (**)(void))v12 == v11) {
      goto LABEL_22;
    }
  }
LABEL_23:
  GameData_21ca25c = v13;
  if (a1 == nullptr) {
    GameRoutine_6bebe0((_QWORD*)(*GameData_212ce58 + 8)),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v131 = COERCE_AS(__typeof__(v131),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return;
  }
  BYTE1(v301[2]) = 0;
  WORD1(v301[2]) = 0;
  HIDWORD(v301[2]) = 0;
  strcpy((char*)v301, " GameData/Dispos");
  v15 = strlen(a1),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v131 = COERCE_AS(__typeof__(v131),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_1a09ce0((__int64)v301, a1, v15),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v131 = COERCE_AS(__typeof__(v131),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_1a09ce0((__int64)v301, ".bin", 4u),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v131 = COERCE_AS(__typeof__(v131),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v301[0] & 1) != 0) {
    v16 = (const char*)v301[2];
  }
  else {
    v16 = (char*)v301 + 1;
  }
  v17 = *GameData_212ce58;
  v18 = strlen(v16),
  v124 = COERCE_AS(__typeof__(v124),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v128 = COERCE_AS(__typeof__(v128),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v131 = COERCE_AS(__typeof__(v131),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v134 = COERCE_AS(__typeof__(v134),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v131 = COERCE_AS(__typeof__(v131),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v19 = v18;
  if (v18 >= 0x17) {
    if ((v18 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v18 | 7) + 1;
    }
    v20 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v21, 16, 0),
    v124 = COERCE_AS(__typeof__(v124),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v128 = COERCE_AS(__typeof__(v128),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v131 = COERCE_AS(__typeof__(v131),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v134 = COERCE_AS(__typeof__(v134),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v302_.v302[1] = v19;
    v302_.v303 = v20;
    v302_.v302[0] = v21 | 1;
  }
  else {
    LOBYTE(v302_.v302[0]) = 2 * v18;
    v20 = (char*)v302_.v302 + 1;
    if (v18 == 0) {
      goto LABEL_37;
    }
  }
  memcpy((__int64)v20, (__int64)v16, v19),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v131 = COERCE_AS(__typeof__(v131),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_37:
  v20[v19] = 0;
  Manager_66c4e0((void*)((__int64)&v304_.v304), (unsigned __int8*)v302_.v302),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v131 = COERCE_AS(__typeof__(v131),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_6bebe0((_QWORD*)(v17 + 8)),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v131 = COERCE_AS(__typeof__(v131),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = v304_.v304;
  v23 = v304_.v305;
  v307_.v309 = nullptr;
  v307_.v310 = 0;
  v307_.v307 = 0;
  v307_.v308 = 0;
  v296 = v17;
  v307_.v311 = 1065353216;
  if (v304_.v304 == v304_.v305) {
    v292 = false;
  }
  else {
    v24 = (__int64*)(v17 + 168);
    v25 = 0;
    v289 = (_QWORD*)(v17 + 184);
    v26 = (__int64*)fw_memory_g_heap_manager_ptr;
    v297 = (__int64*)(v17 + 168);
    do {
      if ((*(_BYTE*)v22 & 1) != 0) {
        v28 = *(const char**)(v22 + 16);
      }
      else {
        v28 = (const char*)(v22 + 1);
      }
      v29 = hub_AcquireTableResource((_QWORD*)(v17 + 8), v28),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v131 = COERCE_AS(__typeof__(v131),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v29 != 0) {
        v30 = v29;
        v31 = game_HashString((__int64)&GameData_1a85358),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v131 = COERCE_AS(__typeof__(v131),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v31 != 0) {
          v32 = *(_QWORD**)(v30 + 808);
          v33 = v32[2];
          if (v33 != 0 && v32[4] != 0) {
            v35 = v33 - 1;
            if ((v33 & (v33 - 1)) != 0) {
              v36 = v31;
              if (v31 >= v33) {
                v36 = v31 % v33;
              }
            }
            else {
              v36 = v35 & v31;
            }
            v37 = *(_QWORD**)(v32[1] + 8 * v36);
            if (v37 != nullptr) {
              v38 = (_QWORD*)*v37;
              if (v38 != nullptr) {
                if ((v33 & v35) == 0) {
                  while (1) {
                    v40 = v38[1];
                    if (v31 == v40) {
                      if (v38[2] == v31) {
                        goto LABEL_73;
                      }
                    }
                    else if ((v40 & v35) != v36) {
                      goto LABEL_43;
                    }
                    v38 = (_QWORD*)*v38;
                    if (v38 == nullptr) {
                      goto LABEL_43;
                    }
                  }
                }
                while (1) {
                  v39 = v38[1];
                  if (v31 == v39) {
                    break;
                  }
                  if (v39 >= v33) {
                    v39 %= v33;
                  }
                  if (v39 != v36) {
                    goto LABEL_43;
                  }
                LABEL_62:
                  v38 = (_QWORD*)*v38;
                  if (v38 == nullptr) {
                    goto LABEL_43;
                  }
                }
                if (v38[2] != v31) {
                  goto LABEL_62;
                }
              LABEL_73:
                v41 = v38[3];
                if (v41 != 0) {
                  v42 = *(_DWORD**)(v41 + 32);
                  if (v42 != nullptr && *v42 == 539300353 && v42[4] == 328) {
                    v287 = v25;
                    v44 = *(_QWORD**)(v17 + 48);
                    v43 = *(_QWORD*)(v17 + 56);
                    v293 = v38[3];
                    if ((unsigned __int64)v44 >= v43) {
                      v46 = *(_QWORD*)(v17 + 40);
                      v47 = (char*)v44 - v46;
                      v48 = ((__int64)v44 - v46) >> 3;
                      v49 = v48 + 1;
                      if ((unsigned __int64)(v48 + 1) >> 61 != 0) {
                        GameRoutine_60e910(),
                            v124 = COERCE_AS(__typeof__(v124),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v128 = COERCE_AS(__typeof__(v128),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v131 = COERCE_AS(__typeof__(v131),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v134 = COERCE_AS(__typeof__(v134),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                      }
                      v50 = v43 - v46;
                      if (v50 >> 2 > v49) {
                        v49 = v50 >> 2;
                      }
                      if ((unsigned __int64)v50 >= 0x7FFFFFFFFFFFFFF8LL) {
                        v51 = 0x1FFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v51 = v49;
                      }
                      if (v51 != 0) {
                        if (v51 >> 61 != 0) {
                          goto LABEL_485;
                        }
                        v52 = fw_memory_HeapManager_Allocate(*v26, 8 * v51, 16,
                                                             0),
                        v124 = COERCE_AS(
                            __typeof__(v124),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v128 = COERCE_AS(
                            __typeof__(v128),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v131 = COERCE_AS(
                            __typeof__(v131),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v134 = COERCE_AS(
                            __typeof__(v134),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        v41 = v293;
                      }
                      else {
                        v52 = 0;
                      }
                      v53 = v52 + 8 * v51;
                      v54 = (unsigned __int64)v44 - v46;
                      v55 = (__int64)&v47[v52 + -8 * v48];
                      *(_QWORD*)&v47[v52] = v41;
                      v45 = (__int64)&v47[v52 + 8];
                      memcpy(v55, v46, v54),
                          v124 = COERCE_AS(
                              __typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v128 = COERCE_AS(
                              __typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v131 = COERCE_AS(
                              __typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v134 = COERCE_AS(
                              __typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      *(_QWORD*)(v296 + 40) = v55;
                      *(_QWORD*)(v296 + 48) = v45;
                      *(_QWORD*)(v296 + 56) = v53;
                      v17 = v296;
                      v26 = (__int64*)fw_memory_g_heap_manager_ptr;
                      if (v46 != 0) {
                        v56 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v56 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v46),
                            v124 = COERCE_AS(__typeof__(v124),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v128 = COERCE_AS(__typeof__(v128),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v131 = COERCE_AS(__typeof__(v131),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v134 = COERCE_AS(__typeof__(v134),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                      }
                      v41 = v293;
                    }
                    else {
                      *v44 = v41;
                      v45 = (__int64)(v44 + 1);
                    }
                    *(_QWORD*)(v17 + 48) = v45;
                    v57 = v287;
                    if (*(_WORD*)(v41 + 18) != 0) {
                      v58 = *(_QWORD*)(v41 + 40);
                      if (v58 != 0) {
                        v59 = 0;
                        while (1) {
                          v60 = v58 + 48 * v59;
                          v306 = v60;
                          if (v58 == 0) {
                            goto LABEL_191;
                          }
                          v61 = *(unsigned __int16*)(v60 + 22) + 1LL;
                          v62 = fw_memory_HeapManager_Allocate(*v26, 24, 16, 0),
                          v124 = COERCE_AS(
                              __typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v128 = COERCE_AS(
                              __typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v131 = COERCE_AS(
                              __typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v134 = COERCE_AS(
                              __typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          *(_DWORD*)(v62 + 16) = v61;
                          v63 = (_QWORD*)v62;
                          *(_DWORD*)(v62 + 20) = v57;
                          *(_QWORD*)v62 = 0;
                          *(_QWORD*)(v62 + 8) = v61;
                          if (GameRoutine_60e940((__int64)v24, v61,
                                                 (int*)(v62 + 16)) != nullptr) {
                            v64 = 128;
                            if (*(_QWORD*)(*v26 + 200) == 0) {
                              v64 = 56;
                            }
                            nn_mem_StandardAllocator_Free(*v26 + v64,
                                                          (__int64)v63),
                                v124 = COERCE_AS(
                                    __typeof__(v124),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v128 = COERCE_AS(
                                    __typeof__(v128),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v131 = COERCE_AS(
                                    __typeof__(v131),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v134 = COERCE_AS(
                                    __typeof__(v134),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                            v17 = v296;
                          }
                          else {
                            v17 = v296;
                            v65 = v63[1];
                            v66 = *(_QWORD*)(v296 + 176);
                            v67 = v66 - 1;
                            if ((v66 & (v66 - 1)) != 0) {
                              if (v65 >= v66) {
                                v65 %= v66;
                              }
                            }
                            else {
                              v65 &= v67;
                            }
                            v68 = *v24;
                            v69 = *(_QWORD**)(*v24 + 8 * v65);
                            if (v69 != nullptr) {
                              *v63 = *v69;
                              *v69 = v63;
                            }
                            else {
                              *v63 = *v289;
                              *v289 = v63;
                              *(_QWORD*)(v68 + 8 * v65) = v289;
                              if (*v63 != 0) {
                                v70 = *(_QWORD*)(*v63 + 8LL);
                                if ((v66 & v67) != 0) {
                                  if (v70 >= v66) {
                                    v70 %= v66;
                                  }
                                }
                                else {
                                  v70 &= v67;
                                }
                                *(_QWORD*)(*v24 + 8 * v70) = v63;
                              }
                            }
                            ++*(_QWORD*)(v296 + 192);
                          }
                          v71 = (__int64 (***)(void))&v312_.v312,
                          v124 = COERCE_AS(
                              __typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v128 = COERCE_AS(
                              __typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v131 = COERCE_AS(
                              __typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v134 = COERCE_AS(
                              __typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          v312_.v312 = (signed __int64)GameData_1f91370;
                          v312_.v313 = (unsigned __int64)v24;
                          v314_.v316 = &v312_.v312;
                          v314_.v314 = v287;
                          v72 = *(unsigned __int16*)(v60 + 18);
                          if (*(_WORD*)(v60 + 18) == 0) {
                            break;
                          }
                          v73 = *(_QWORD*)(v60 + 32);
                          do {
                            *(_QWORD*)v317 = v73;
                            if (v314_.v316 == nullptr) {
                            LABEL_483:
                              GameRoutine_60a310(),
                                  v124 = COERCE_AS(
                                      __typeof__(v124),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v128 = COERCE_AS(
                                      __typeof__(v128),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v131 = COERCE_AS(
                                      __typeof__(v131),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v134 = COERCE_AS(
                                      __typeof__(v134),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                            }
                            (*(void (**)(__int64*, int*))(*v314_.v316 + 48))(
                                v314_.v316, v317),
                                v124 = COERCE_AS(
                                    __typeof__(v124),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v128 = COERCE_AS(
                                    __typeof__(v128),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v131 = COERCE_AS(
                                    __typeof__(v131),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v134 = COERCE_AS(
                                    __typeof__(v134),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                            v73 += 328;
                            --v72;
                          } while (v72 != 0);
                          v71 = (__int64 (***)(void))v314_.v316,
                          v124 = COERCE_AS(
                              __typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v128 = COERCE_AS(
                              __typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v131 = COERCE_AS(
                              __typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v134 = COERCE_AS(
                              __typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          if (v314_.v316 == &v312_.v312) {
                            v74 = 4;
                            v26 = (__int64*)fw_memory_g_heap_manager_ptr;
                            goto LABEL_124;
                          }
                          v26 = (__int64*)fw_memory_g_heap_manager_ptr;
                          if (v314_.v316 != nullptr) {
                            v74 = 5;
                          LABEL_124:
                            ((__int64 (*)(__int64))(*v71)[v74])((__int64)v71),
                                v124 = COERCE_AS(
                                    __typeof__(v124),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v128 = COERCE_AS(
                                    __typeof__(v128),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v131 = COERCE_AS(
                                    __typeof__(v131),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v134 = COERCE_AS(
                                    __typeof__(v134),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                          }
                          if (v57 < 1) {
                            goto LABEL_150;
                          }
                          v75 = *(_QWORD*)v60;
                          if (*(_QWORD*)v60 == 0) {
                            goto LABEL_150;
                          }
                          v76 = *(_QWORD*)(v17 + 96);
                          if (v76 == 0 || *(_QWORD*)(v17 + 112) == 0) {
                            goto LABEL_150;
                          }
                          v77 = v76 - 1;
                          if ((v76 & (v76 - 1)) != 0) {
                            v78 = *(_QWORD*)v60;
                            if (v75 >= v76) {
                              v78 = v75 % v76;
                            }
                          }
                          else {
                            v78 = v77 & v75;
                          }
                          v79 = *(_QWORD**)(*(_QWORD*)(v17 + 88) + 8 * v78);
                          if (v79 == nullptr ||
                              (v80 = (_QWORD*)*v79) == nullptr) {
                          LABEL_150:
                            v317[0] = *(unsigned __int16*)(v60 + 22) + 1;
                            v312_.v312 = (__int64)(*(_QWORD*)(v17 + 72) -
                                                   *(_QWORD*)(v17 + 64)) >>
                                         3;
                            GameRoutine_60f380((__int64)&v307_.v307, v317, v317,
                                               &v312_.v312),
                                v124 = COERCE_AS(
                                    __typeof__(v124),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v128 = COERCE_AS(
                                    __typeof__(v128),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v131 = COERCE_AS(
                                    __typeof__(v131),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v134 = COERCE_AS(
                                    __typeof__(v134),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                            v84 = *(__int64**)(v17 + 72);
                            v83 = *(_QWORD*)(v17 + 80);
                            if ((unsigned __int64)v84 < v83) {
                              *v84 = v60;
                              v85 = (__int64)(v84 + 1);
                              goto LABEL_167;
                            }
                            v86 = *(_QWORD*)(v17 + 64);
                            v87 = (char*)v84 - v86;
                            v88 = ((__int64)v84 - v86) >> 3;
                            v89 = v88 + 1;
                            if ((unsigned __int64)(v88 + 1) >> 61 == 0) {
                              v90 = v83 - v86;
                              if (v90 >> 2 > v89) {
                                v89 = v90 >> 2;
                              }
                              if ((unsigned __int64)v90 >=
                                  0x7FFFFFFFFFFFFFF8LL) {
                                v91 = 0x1FFFFFFFFFFFFFFFLL;
                              }
                              else {
                                v91 = v89;
                              }
                              if (v91 != 0) {
                                if (v91 >> 61 == 0) {
                                  v92 = fw_memory_HeapManager_Allocate(
                                      *v26, 8 * v91, 16, 0),
                                  v124 = COERCE_AS(
                                      __typeof__(v124),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v128 = COERCE_AS(
                                      __typeof__(v128),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v131 = COERCE_AS(
                                      __typeof__(v131),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v134 = COERCE_AS(
                                      __typeof__(v134),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  goto LABEL_162;
                                }
                              LABEL_485:
                                GameRoutine_60a210(),
                                    v124 = COERCE_AS(
                                        __typeof__(v124),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v128 = COERCE_AS(
                                        __typeof__(v128),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v131 = COERCE_AS(
                                        __typeof__(v131),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v134 = COERCE_AS(
                                        __typeof__(v134),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                              }
                              v92 = 0;
                            LABEL_162:
                              v93 = v92 + 8 * v91;
                              v94 = (unsigned __int64)v84 - v86;
                              v95 = (__int64)&v87[v92 + -8 * v88];
                              *(_QWORD*)&v87[v92] = v60;
                              v85 = (__int64)&v87[v92 + 8];
                              memcpy(v95, v86, v94),
                                  v124 = COERCE_AS(
                                      __typeof__(v124),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v128 = COERCE_AS(
                                      __typeof__(v128),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v131 = COERCE_AS(
                                      __typeof__(v131),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v134 = COERCE_AS(
                                      __typeof__(v134),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                              v17 = v296;
                              *(_QWORD*)(v296 + 64) = v95;
                              *(_QWORD*)(v296 + 72) = v85;
                              *(_QWORD*)(v296 + 80) = v93;
                              if (v86 != 0) {
                                v26 = (__int64*)fw_memory_g_heap_manager_ptr;
                                v96 = 128;
                                if (*(_QWORD*)(*(_QWORD*)
                                                   fw_memory_g_heap_manager_ptr +
                                               200LL) == 0) {
                                  v96 = 56;
                                }
                                nn_mem_StandardAllocator_Free(
                                    *(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v96,
                                    v86),
                                    v124 = COERCE_AS(
                                        __typeof__(v124),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v128 = COERCE_AS(
                                        __typeof__(v128),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v131 = COERCE_AS(
                                        __typeof__(v131),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v134 = COERCE_AS(
                                        __typeof__(v134),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                v57 = v287;
                              }
                              else {
                                v57 = v287;
                                v26 = (__int64*)fw_memory_g_heap_manager_ptr;
                              }
                            LABEL_167:
                              *(_QWORD*)(v17 + 72) = v85;
                              v24 = v297;
                              v97 = *(_QWORD*)(v60 + 8);
                              if (v97 == 0) {
                                goto LABEL_189;
                              }
                              v99 = *(__int64**)(v17 + 240);
                              v98 = *(_QWORD*)(v17 + 248);
                              if ((unsigned __int64)v99 < v98) {
                                *v99 = v97;
                                v100 = (__int64)(v99 + 1);
                                goto LABEL_185;
                              }
                              v101 = *(_QWORD*)(v17 + 232);
                              v102 = (char*)v99 - v101;
                              v103 = ((__int64)v99 - v101) >> 3;
                              v104 = v103 + 1;
                              if ((unsigned __int64)(v103 + 1) >> 61 == 0) {
                                v105 = v98 - v101;
                                if (v105 >> 2 > v104) {
                                  v104 = v105 >> 2;
                                }
                                if ((unsigned __int64)v105 >=
                                    0x7FFFFFFFFFFFFFF8LL) {
                                  v106 = 0x1FFFFFFFFFFFFFFFLL;
                                }
                                else {
                                  v106 = v104;
                                }
                                if (v106 != 0) {
                                  if (v106 >> 61 != 0) {
                                    goto LABEL_485;
                                  }
                                  v107 = fw_memory_HeapManager_Allocate(
                                      *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      8 * v106, 16, 0),
                                  v124 = COERCE_AS(
                                      __typeof__(v124),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v128 = COERCE_AS(
                                      __typeof__(v128),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v131 = COERCE_AS(
                                      __typeof__(v131),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v134 = COERCE_AS(
                                      __typeof__(v134),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                }
                                else {
                                  v107 = 0;
                                }
                                v108 = v107 + 8 * v106;
                                v109 = (unsigned __int64)v99 - v101;
                                v110 = (__int64)&v102[v107 + -8 * v103];
                                *(_QWORD*)&v102[v107] = v97;
                                v100 = (__int64)&v102[v107 + 8];
                                memcpy(v110, v101, v109),
                                    v124 = COERCE_AS(
                                        __typeof__(v124),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v128 = COERCE_AS(
                                        __typeof__(v128),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v131 = COERCE_AS(
                                        __typeof__(v131),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v134 = COERCE_AS(
                                        __typeof__(v134),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                *(_QWORD*)(v296 + 232) = v110;
                                *(_QWORD*)(v296 + 240) = v100;
                                *(_QWORD*)(v296 + 248) = v108;
                                if (v101 != 0) {
                                  v26 = (__int64*)fw_memory_g_heap_manager_ptr;
                                  v111 = 128;
                                  if (*(_QWORD*)(*(_QWORD*)
                                                     fw_memory_g_heap_manager_ptr +
                                                 200LL) == 0) {
                                    v111 = 56;
                                  }
                                  nn_mem_StandardAllocator_Free(
                                      *(_QWORD*)fw_memory_g_heap_manager_ptr +
                                          v111,
                                      v101),
                                      v124 = COERCE_AS(
                                          __typeof__(v124),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r")),
                                      v128 = COERCE_AS(
                                          __typeof__(v128),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r")),
                                      v131 = COERCE_AS(
                                          __typeof__(v131),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r")),
                                      v134 = COERCE_AS(
                                          __typeof__(v134),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                  v17 = v296;
                                  v24 = v297;
                                  v57 = v287;
                                }
                                else {
                                  v17 = v296;
                                  v24 = v297;
                                  v57 = v287;
                                  v26 = (__int64*)fw_memory_g_heap_manager_ptr;
                                }
                              LABEL_185:
                                *(_QWORD*)(v17 + 240) = v100;
                                v312_.v313 = v97;
                                v312_.v312 = game_HashString(v97),
                                v124 = COERCE_AS(
                                    __typeof__(v124),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v128 = COERCE_AS(
                                    __typeof__(v128),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v131 = COERCE_AS(
                                    __typeof__(v131),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v134 = COERCE_AS(
                                    __typeof__(v134),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                GameRoutine_6bf680(
                                    (_QWORD*)(v17 + 8),
                                    (unsigned __int64*)&v312_.v312, v60),
                                    v124 = COERCE_AS(
                                        __typeof__(v124),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v128 = COERCE_AS(
                                        __typeof__(v128),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v131 = COERCE_AS(
                                        __typeof__(v131),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v134 = COERCE_AS(
                                        __typeof__(v134),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                v112 = *(_QWORD*)(v60 + 8);
                                if (v112 != 0) {
                                  v113 = strchr(*(const char**)(v60 + 8), 95),
                                  v124 = COERCE_AS(
                                      __typeof__(v124),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v128 = COERCE_AS(
                                      __typeof__(v128),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v131 = COERCE_AS(
                                      __typeof__(v131),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v134 = COERCE_AS(
                                      __typeof__(v134),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  if (v113 != 0) {
                                    v112 = v113 + 1;
                                  }
                                }
                                v312_.v313 = v112;
                                v312_.v312 = game_HashString(v112),
                                v124 = COERCE_AS(
                                    __typeof__(v124),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v128 = COERCE_AS(
                                    __typeof__(v128),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v131 = COERCE_AS(
                                    __typeof__(v131),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v134 = COERCE_AS(
                                    __typeof__(v134),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                GameRoutine_6bf680(
                                    (_QWORD*)(v17 + 8),
                                    (unsigned __int64*)&v312_.v312, v60),
                                    v124 = COERCE_AS(
                                        __typeof__(v124),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v128 = COERCE_AS(
                                        __typeof__(v128),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v131 = COERCE_AS(
                                        __typeof__(v131),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v134 = COERCE_AS(
                                        __typeof__(v134),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                              LABEL_189:
                                v114 = hub_ColumnAlias((unsigned __int64*)v60),
                                v124 = COERCE_AS(
                                    __typeof__(v124),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v128 = COERCE_AS(
                                    __typeof__(v128),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v131 = COERCE_AS(
                                    __typeof__(v131),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v134 = COERCE_AS(
                                    __typeof__(v134),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                if (v114 != 0) {
                                  v312_.v313 = v114;
                                  v312_.v312 = game_HashString(v114),
                                  v124 = COERCE_AS(
                                      __typeof__(v124),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v128 = COERCE_AS(
                                      __typeof__(v128),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v131 = COERCE_AS(
                                      __typeof__(v131),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v134 = COERCE_AS(
                                      __typeof__(v134),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  GameRoutine_6bf680(
                                      (_QWORD*)(v17 + 8),
                                      (unsigned __int64*)&v312_.v312, v60),
                                      v124 = COERCE_AS(
                                          __typeof__(v124),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r")),
                                      v128 = COERCE_AS(
                                          __typeof__(v128),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r")),
                                      v131 = COERCE_AS(
                                          __typeof__(v131),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r")),
                                      v134 = COERCE_AS(
                                          __typeof__(v134),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                  v312_.v313 =
                                      (unsigned __int64)hub_ColumnAliasSuffix(
                                          (unsigned __int64*)v60),
                                  v124 = COERCE_AS(
                                      __typeof__(v124),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v128 = COERCE_AS(
                                      __typeof__(v128),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v131 = COERCE_AS(
                                      __typeof__(v131),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v134 = COERCE_AS(
                                      __typeof__(v134),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v312_.v312 = game_HashString(v312_.v313),
                                  v124 = COERCE_AS(
                                      __typeof__(v124),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v128 = COERCE_AS(
                                      __typeof__(v128),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v131 = COERCE_AS(
                                      __typeof__(v131),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v134 = COERCE_AS(
                                      __typeof__(v134),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  GameRoutine_6bf680(
                                      (_QWORD*)(v17 + 8),
                                      (unsigned __int64*)&v312_.v312, v60),
                                      v124 = COERCE_AS(
                                          __typeof__(v124),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r")),
                                      v128 = COERCE_AS(
                                          __typeof__(v128),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r")),
                                      v131 = COERCE_AS(
                                          __typeof__(v131),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r")),
                                      v134 = COERCE_AS(
                                          __typeof__(v134),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                                goto LABEL_191;
                              }
                            LABEL_488:
                              GameRoutine_60f930(),
                                  v124 = COERCE_AS(
                                      __typeof__(v124),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v128 = COERCE_AS(
                                      __typeof__(v128),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v131 = COERCE_AS(
                                      __typeof__(v131),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v134 = COERCE_AS(
                                      __typeof__(v134),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                            }
                          LABEL_486:
                            GameRoutine_6c00d0(),
                                v124 = COERCE_AS(
                                    __typeof__(v124),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v128 = COERCE_AS(
                                    __typeof__(v128),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v131 = COERCE_AS(
                                    __typeof__(v131),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v134 = COERCE_AS(
                                    __typeof__(v134),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                          }
                          if ((v76 & v77) == 0) {
                            while (1) {
                              v82 = v80[1];
                              if (v82 == v75) {
                                if (v80[2] == v75) {
                                  goto LABEL_149;
                                }
                              }
                              else if ((v82 & v77) != v78) {
                                goto LABEL_150;
                              }
                              v80 = (_QWORD*)*v80;
                              if (v80 == nullptr) {
                                goto LABEL_150;
                              }
                            }
                          }
                          while (1) {
                            v81 = v80[1];
                            if (v81 == v75) {
                              break;
                            }
                            if (v81 >= v76) {
                              v81 %= v76;
                            }
                            if (v81 != v78) {
                              goto LABEL_150;
                            }
                          LABEL_138:
                            v80 = (_QWORD*)*v80;
                            if (v80 == nullptr) {
                              goto LABEL_150;
                            }
                          }
                          if (v80[2] != v75) {
                            goto LABEL_138;
                          }
                        LABEL_149:
                          if (*(_BYTE*)(*(_QWORD*)(v293 + 32) + 4LL) == 2 ||
                              v307_.v308 == 0 || v307_.v310 == 0) {
                            goto LABEL_150;
                          }
                          v115 = v307_.v308 - 1;
                          v116 = *(unsigned __int16*)(v80[3] + 22LL) + 1LL;
                          if ((v307_.v308 & (v307_.v308 - 1)) != 0) {
                            v117 = *(unsigned __int16*)(v80[3] + 22LL) + 1LL;
                            if (v307_.v308 <= v116) {
                              v117 =
                                  (unsigned int)v116 % (unsigned int)v307_.v308;
                            }
                          }
                          else {
                            v117 =
                                ((_DWORD)v307_.v308 - 1) & (unsigned int)v116;
                          }
                          v118 = *(__int64***)(v307_.v307 + 8 * v117);
                          if (v118 == nullptr) {
                            goto LABEL_150;
                          }
                          v119 = *v118;
                          if (v119 == nullptr) {
                            goto LABEL_150;
                          }
                          if ((v307_.v308 & v115) == 0) {
                            while (1) {
                              v121 = v119[1];
                              if (v121 == v116) {
                                if (*((_DWORD*)v119 + 4) == (_DWORD)v116) {
                                  goto LABEL_215;
                                }
                              }
                              else if ((v121 & v115) != v117) {
                                goto LABEL_150;
                              }
                              v119 = (__int64*)*v119;
                              if (v119 == nullptr) {
                                goto LABEL_150;
                              }
                            }
                          }
                          while (2) {
                            v120 = v119[1];
                            if (v120 != v116) {
                              if (v120 >= v307_.v308) {
                                v120 %= v307_.v308;
                              }
                              if (v120 != v117) {
                                goto LABEL_150;
                              }
                            }
                            else if (*((_DWORD*)v119 + 4) == (_DWORD)v116) {
                              break;
                            }
                            v119 = (__int64*)*v119;
                            if (v119 == nullptr) {
                              goto LABEL_150;
                            }
                            continue;
                          }
                        LABEL_215:
                          *(_QWORD*)(*(_QWORD*)(v17 + 64) + 8 * v119[3]) = v60;
                          v122 = *(_QWORD*)(v60 + 8);
                          if (v122 != 0) {
                            v312_.v312 = game_HashString(v122),
                            v124 = COERCE_AS(__typeof__(v124),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v128 = COERCE_AS(__typeof__(v128),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v131 = COERCE_AS(__typeof__(v131),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v134 = COERCE_AS(__typeof__(v134),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            v123 = GameRoutine_6bfb40(
                                (float*)(v17 + 88),
                                (unsigned __int64*)&v312_.v312, &v312_.v312,
                                &v306),
                            v124 = COERCE_AS(__typeof__(v124),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v128 = COERCE_AS(__typeof__(v128),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v131 = COERCE_AS(__typeof__(v131),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v134 = COERCE_AS(__typeof__(v134),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            if ((v124 & 1) == 0) {
                              v123[3] = v60;
                            }
                            v125 = *(_QWORD*)(v60 + 8);
                            if (v125 != 0) {
                              v126 = strchr(*(const char**)(v60 + 8), 95),
                              v124 =
                                  COERCE_AS(__typeof__(v124),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v128 =
                                  COERCE_AS(__typeof__(v128),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v131 =
                                  COERCE_AS(__typeof__(v131),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v134 =
                                  COERCE_AS(__typeof__(v134),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              if (v126 != 0) {
                                v125 = v126 + 1;
                              }
                            }
                            v17 = v296;
                            v312_.v312 = game_HashString(v125),
                            v124 = COERCE_AS(__typeof__(v124),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v128 = COERCE_AS(__typeof__(v128),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v131 = COERCE_AS(__typeof__(v131),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v134 = COERCE_AS(__typeof__(v134),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            v127 = GameRoutine_6bfb40(
                                (float*)(v296 + 88),
                                (unsigned __int64*)&v312_.v312, &v312_.v312,
                                &v306),
                            v124 = COERCE_AS(__typeof__(v124),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v128 = COERCE_AS(__typeof__(v128),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v131 = COERCE_AS(__typeof__(v131),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v134 = COERCE_AS(__typeof__(v134),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            if ((v128 & 1) == 0) {
                              v127[3] = v60;
                            }
                            v57 = v287;
                            v24 = v297;
                            v26 = (__int64*)fw_memory_g_heap_manager_ptr;
                          }
                          if (hub_ColumnAlias((unsigned __int64*)v60) != 0) {
                            v129 = hub_ColumnAlias((unsigned __int64*)v60),
                            v124 = COERCE_AS(__typeof__(v124),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v128 = COERCE_AS(__typeof__(v128),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v131 = COERCE_AS(__typeof__(v131),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v134 = COERCE_AS(__typeof__(v134),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            v312_.v312 = game_HashString(v129),
                            v124 = COERCE_AS(__typeof__(v124),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v128 = COERCE_AS(__typeof__(v128),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v131 = COERCE_AS(__typeof__(v131),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v134 = COERCE_AS(__typeof__(v134),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            v130 = GameRoutine_6bfb40(
                                (float*)(v17 + 88),
                                (unsigned __int64*)&v312_.v312, &v312_.v312,
                                &v306),
                            v124 = COERCE_AS(__typeof__(v124),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v128 = COERCE_AS(__typeof__(v128),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v131 = COERCE_AS(__typeof__(v131),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v134 = COERCE_AS(__typeof__(v134),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            if ((v131 & 1) == 0) {
                              v130[3] = v60;
                            }
                            v132 =
                                hub_ColumnAliasSuffix((unsigned __int64*)v60),
                            v124 = COERCE_AS(__typeof__(v124),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v128 = COERCE_AS(__typeof__(v128),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v131 = COERCE_AS(__typeof__(v131),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v134 = COERCE_AS(__typeof__(v134),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            v312_.v312 = game_HashString((__int64)v132),
                            v124 = COERCE_AS(__typeof__(v124),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v128 = COERCE_AS(__typeof__(v128),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v131 = COERCE_AS(__typeof__(v131),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v134 = COERCE_AS(__typeof__(v134),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            v133 = GameRoutine_6bfb40(
                                (float*)(v17 + 88),
                                (unsigned __int64*)&v312_.v312, &v312_.v312,
                                &v306),
                            v124 = COERCE_AS(__typeof__(v124),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v128 = COERCE_AS(__typeof__(v128),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v131 = COERCE_AS(__typeof__(v131),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v134 = COERCE_AS(__typeof__(v134),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            if ((v134 & 1) == 0) {
                              v133[3] = v60;
                            }
                            v57 = v287;
                            v24 = v297;
                            v26 = (__int64*)fw_memory_g_heap_manager_ptr;
                          }
                        LABEL_191:
                          if (++v59 >= (unsigned __int64)*(
                                           unsigned __int16*)(v293 + 18)) {
                            goto LABEL_230;
                          }
                          v58 = *(_QWORD*)(v293 + 40);
                        }
                        v74 = 4;
                        goto LABEL_124;
                      }
                    }
                  LABEL_230:
                    v135 = hub_ResourceVariant((unsigned __int8*)v22),
                    v124 = COERCE_AS(
                        __typeof__(v124),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v128 = COERCE_AS(
                        __typeof__(v128),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v131 = COERCE_AS(
                        __typeof__(v131),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v134 = COERCE_AS(
                        __typeof__(v134),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v137 = *(const char***)(v17 + 216);
                    v136 = *(_QWORD*)(v17 + 224);
                    if ((unsigned __int64)v137 < v136) {
                      *v137 = v135;
                      v27 = (__int64)(v137 + 1);
                    }
                    else {
                      v138 = *(_QWORD*)(v17 + 208);
                      v139 = (unsigned __int64)v137 - v138;
                      v140 = ((__int64)v137 - v138) >> 3;
                      v141 = v140 + 1;
                      if ((unsigned __int64)(v140 + 1) >> 61 != 0) {
                        goto LABEL_488;
                      }
                      v142 = v136 - v138;
                      if (v142 >> 2 > v141) {
                        v141 = v142 >> 2;
                      }
                      if ((unsigned __int64)v142 >= 0x7FFFFFFFFFFFFFF8LL) {
                        v143 = 0x1FFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v143 = v141;
                      }
                      if (v143 != 0) {
                        if (v143 >> 61 != 0) {
                          goto LABEL_485;
                        }
                        v144 = v135;
                        v145 = fw_memory_HeapManager_Allocate(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v143,
                            16, 0),
                        v124 = COERCE_AS(
                            __typeof__(v124),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v128 = COERCE_AS(
                            __typeof__(v128),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v131 = COERCE_AS(
                            __typeof__(v131),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v134 = COERCE_AS(
                            __typeof__(v134),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        v135 = v144;
                      }
                      else {
                        v145 = 0;
                      }
                      v146 = v145 + 8 * v143;
                      v147 = v145 + v139 - 8 * v140;
                      *(_QWORD*)(v145 + v139) = v135;
                      v27 = v145 + v139 + 8;
                      memcpy(v147, v138, v139),
                          v124 = COERCE_AS(
                              __typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v128 = COERCE_AS(
                              __typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v131 = COERCE_AS(
                              __typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v134 = COERCE_AS(
                              __typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      *(_QWORD*)(v296 + 208) = v147;
                      *(_QWORD*)(v296 + 216) = v27;
                      *(_QWORD*)(v296 + 224) = v146;
                      v17 = v296;
                      v26 = (__int64*)fw_memory_g_heap_manager_ptr;
                      if (v138 != 0) {
                        v148 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v148 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v148,
                            v138),
                            v124 = COERCE_AS(__typeof__(v124),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v128 = COERCE_AS(__typeof__(v128),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v131 = COERCE_AS(__typeof__(v131),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v134 = COERCE_AS(__typeof__(v134),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                      }
                    }
                    v25 = v57 + 1;
                    *(_QWORD*)(v17 + 216) = v27;
                  }
                }
              }
            }
          }
        }
      }
    LABEL_43:
      v22 += 24;
    } while (v22 != v23);
    v292 = v25 > 1;
  }
  v149 = *(__int64**)(v17 + 40);
  v298 = *(__int64**)(v17 + 48);
  if (v149 != v298) {
    v150 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v151 = *v149;
      if (*(_BYTE*)(*(_QWORD*)(*v149 + 32) + 4LL) == 2) {
        v152 = *(_WORD*)(v151 + 18);
        if (v152 != 0) {
          break;
        }
      }
    LABEL_248:
      if (++v149 == v298) {
        goto LABEL_264;
      }
    }
    v153 = 0;
    while (1) {
      v155 = *(_QWORD*)(v151 + 40) + 48 * v153;
      if (*(_QWORD*)(v155 + 40) != 0) {
        goto LABEL_255;
      }
      v156 = (_QWORD*)fw_memory_HeapManager_Allocate(*v150, 24, 16, 0),
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v131 = COERCE_AS(__typeof__(v131),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *v156 = 0;
      v156[1] = 0;
      v156[2] = 0;
      v312_.v312 = (signed __int64)GameData_1f91400;
      v312_.v313 = (unsigned __int64)v156;
      v157 = (__int64 (***)(void))&v312_.v312,
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v131 = COERCE_AS(__typeof__(v131),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v314_.v316 = &v312_.v312;
      v158 = *(unsigned __int16*)(v155 + 18);
      if (*(_WORD*)(v155 + 18) == 0) {
        goto LABEL_252;
      }
      v159 = *(_QWORD*)(v155 + 32);
      do {
        *(_QWORD*)v317 = v159;
        if (v314_.v316 == nullptr) {
          goto LABEL_483;
        }
        (*(void (**)(__int64*, int*))(*v314_.v316 + 48))(v314_.v316, v317),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v159 += 328;
        --v158;
      } while (v158 != 0);
      v157 = (__int64 (***)(void))v314_.v316,
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v131 = COERCE_AS(__typeof__(v131),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v314_.v316 == &v312_.v312) {
      LABEL_252:
        v154 = 4;
      }
      else {
        if (v314_.v316 == nullptr) {
          goto LABEL_254;
        }
        v154 = 5;
      }
      ((__int64 (*)(__int64))(*v157)[v154])((__int64)v157),
          v124 = COERCE_AS(__typeof__(v124),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v128 = COERCE_AS(__typeof__(v128),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v131 = COERCE_AS(__typeof__(v131),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v134 = COERCE_AS(__typeof__(v134),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_254:
      *(_QWORD*)(v155 + 40) = v156;
      v152 = *(_WORD*)(v151 + 18);
    LABEL_255:
      if (++v153 >= (unsigned __int64)v152) {
        goto LABEL_248;
      }
    }
  }
LABEL_264:
  v160 = (_QWORD*)v296;
  if (v292) {
    v161 = *(__int64**)(v296 + 40);
    v162 = *(__int64**)(v296 + 48);
    if (v161 == v162) {
    LABEL_268:
      v164 = *(_QWORD*)(v296 + 64);
      v165 = *(__int64**)(v296 + 72);
      if (((__int64)v165 - v164) >> 3 < 129) {
        v169 = 0;
      LABEL_274:
        GameRoutine_6c0d40(v164, v165, ((__int64)v165 - v164) >> 3, nullptr,
                           v169),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v166 = ((__int64)v165 - v164) >> 3;
        v167 = GameData_212c060;
        while (1) {
          v168 = (__int64*)GameRoutine_1a09d20(8 * v166, v167),
          v124 = COERCE_AS(__typeof__(v124),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v128 = COERCE_AS(__typeof__(v128),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v131 = COERCE_AS(__typeof__(v131),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v134 = COERCE_AS(__typeof__(v134),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v168 != nullptr) {
            break;
          }
          v169 = v166 >> 1;
          v170 = v166 > 1;
          v166 >>= 1;
          if (!v170) {
            goto LABEL_274;
          }
        }
        v226 = (__int64)v168;
        GameRoutine_6c0d40(v164, v165, ((__int64)v165 - v164) >> 3, v168, v166),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v227 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v227 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v227, v226),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v228 = *(_QWORD*)(v296 + 64);
      if (*(_QWORD*)(v296 + 72) != v228) {
        v229 = 0;
        do {
          *(_WORD*)(*(_QWORD*)(v228 + 8 * v229) + 16LL) = v229;
          ++v229;
          v228 = *(_QWORD*)(v296 + 64);
        } while (v229 < (*(_QWORD*)(v296 + 72) - v228) >> 3);
      }
    }
    else {
      while (1) {
        v163 = *v161++;
        if (*(_BYTE*)(*(_QWORD*)(v163 + 32) + 4LL) == 2) {
          break;
        }
        if (v161 == v162) {
          goto LABEL_268;
        }
      }
      v171 = *(unsigned __int64***)(v296 + 64);
      v314_.v314 = 0;
      v314_.v315 = 0;
      v312_.v312 = 0;
      v312_.v313 = 0;
      v172 = *(unsigned __int64***)(v296 + 72);
      LODWORD(v314_.v316) = 1065353216;
      if (v171 != v172) {
        v173 = (__int64*)fw_memory_g_heap_manager_ptr;
        do {
          v178 = v172;
          v179 = *v171;
          if (v312_.v313 != 0 && v314_.v315 != 0) {
            v181 = *v179;
            v182 = v312_.v313 - 1;
            if ((v312_.v313 & (v312_.v313 - 1)) != 0) {
              v183 = *v179;
              if (v181 >= v312_.v313) {
                v183 = v181 % v312_.v313;
              }
            }
            else {
              v183 = v182 & v181;
            }
            v186 = *(__int64 (**)(void))(v312_.v312 + 8 * v183),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v186 != nullptr) {
              v187 = *(_QWORD**)v186;
              if (v187 != nullptr) {
                if ((v312_.v313 & v182) == 0) {
                  while (1) {
                    v189 = v187[1];
                    if (v189 == v181) {
                      if (v187[2] == v181) {
                        goto LABEL_282;
                      }
                    }
                    else if ((v189 & v182) != v183) {
                      goto LABEL_277;
                    }
                    v187 = (_QWORD*)*v187;
                    if (v187 == nullptr) {
                      goto LABEL_277;
                    }
                  }
                }
                do {
                  v188 = v187[1];
                  if (v188 == v181) {
                    if (v187[2] == v181) {
                      goto LABEL_282;
                    }
                  }
                  else {
                    if (v188 >= v312_.v313) {
                      v188 %= v312_.v313;
                    }
                    if (v188 != v183) {
                      break;
                    }
                  }
                  v187 = (_QWORD*)*v187;
                } while (v187 != nullptr);
              }
            }
          }
        LABEL_277:
          v174 = (_QWORD*)fw_memory_HeapManager_Allocate(*v173, 32, 16, 0),
          v124 = COERCE_AS(__typeof__(v124),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v128 = COERCE_AS(__typeof__(v128),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v131 = COERCE_AS(__typeof__(v131),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v134 = COERCE_AS(__typeof__(v134),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *v174 = 0;
          v175 = (__int64)v174;
          v176 = *v179;
          v174[3] = v179;
          v174[2] = v176;
          v174[1] = v176;
          if (GameRoutine_6c0100((__int64)&v312_.v312, v176, v174 + 2) !=
              nullptr) {
            if (*(_QWORD*)(*v173 + 200) != 0) {
              v177 = 128;
            }
            else {
              v177 = 56;
            }
            nn_mem_StandardAllocator_Free(*v173 + v177, v175),
                v124 =
                    COERCE_AS(__typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v128 =
                    COERCE_AS(__typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v131 =
                    COERCE_AS(__typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v134 =
                    COERCE_AS(__typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v184 = v312_.v313;
            v185 = v312_.v313 - 1;
            if ((v184 & (v184 - 1)) != 0) {
              if (v176 >= v312_.v313) {
                v176 %= v312_.v313;
              }
            }
            else {
              v176 &= v185;
            }
            v190 = (__int64 (**)(void))v312_.v312,
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v191 = *(__int64**)(v312_.v312 + 8 * v176);
            if (v191 != nullptr) {
              *(_QWORD*)v175 = *v191;
              *v191 = v175;
            }
            else {
              v192 = v314_.v314;
              v314_.v314 = v175;
              *(_QWORD*)v175 = v192;
              v190[v176] = (__int64 (*)())&v314_.v314,
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v128 = COERCE_AS(__typeof__(v128),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (*(_QWORD*)v175 != 0) {
                v193 = *(_QWORD*)(*(_QWORD*)v175 + 8LL);
                if ((v184 & v185) != 0) {
                  if (v193 >= v184) {
                    v193 %= v184;
                  }
                }
                else {
                  v193 &= v185;
                }
                *(_QWORD*)(v312_.v312 + 8 * v193) = v175;
              }
            }
            ++v314_.v315;
          }
        LABEL_282:
          ++v171;
          v172 = v178;
        } while (v171 != v178);
        v171 = *(unsigned __int64***)(v296 + 64);
        v172 = *(unsigned __int64***)(v296 + 72);
      }
      if (v171 != v172) {
        v194 = nullptr;
        v294 = 0;
        v195 = 0;
        v288 = v172;
        while (1) {
          v196 = *v171;
          v197 = **v171;
          if ((v312_.v313 & (v312_.v313 - 1)) != 0) {
            v198 = **v171;
            if (v197 >= v312_.v313) {
              v198 = v197 % v312_.v313;
            }
            v199 = *(__int64 (**)(void))(v312_.v312 + 8 * v198),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            do {
              do {
                v199 = *(__int64 (**)(void))v199,
                v124 =
                    COERCE_AS(__typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v128 =
                    COERCE_AS(__typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v131 =
                    COERCE_AS(__typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v134 =
                    COERCE_AS(__typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              } while (*((_QWORD*)v199 + 1) != v197);
            } while (*((_QWORD*)v199 + 2) != v197);
          }
          else {
            v199 = *(__int64 (**)(void))(v312_.v312 +
                                         8 * ((v312_.v313 - 1) & v197)),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            do {
              do {
                v199 = *(__int64 (**)(void))v199,
                v124 =
                    COERCE_AS(__typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v128 =
                    COERCE_AS(__typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v131 =
                    COERCE_AS(__typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v134 =
                    COERCE_AS(__typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              } while (*((_QWORD*)v199 + 1) != v197);
            } while (*((_QWORD*)v199 + 2) != v197);
          }
          v200 = *((_QWORD*)v199 + 3);
          if ((unsigned __int64*)v200 == v196) {
            if ((unsigned __int64)v194 >= v294) {
              v217 = (unsigned __int64)v194 - v195;
              v218 = ((__int64)v194 - v195) >> 3;
              v219 = v218 + 1;
              if ((unsigned __int64)(v218 + 1) >> 61 != 0) {
                goto LABEL_486;
              }
              v220 = v195;
              if ((__int64)(v294 - v195) >> 2 > v219) {
                v219 = (__int64)(v294 - v195) >> 2;
              }
              if (v294 - v195 >= 0x7FFFFFFFFFFFFFF8LL) {
                v221 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v221 = v219;
              }
              if (v221 != 0) {
                if (v221 >> 61 != 0) {
                  goto LABEL_485;
                }
                v222 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v221, 16, 0),
                v124 =
                    COERCE_AS(__typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v128 =
                    COERCE_AS(__typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v131 =
                    COERCE_AS(__typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v134 =
                    COERCE_AS(__typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v222 = 0;
              }
              v223 = v195;
              v195 = v222 + v217 - 8 * v218;
              *(_QWORD*)(v222 + v217) = v196;
              v294 = v222 + 8 * v221;
              v224 = v222 + v217 + 8;
              memcpy(v195, v223, v217),
                  v124 = COERCE_AS(
                      __typeof__(v124),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v128 = COERCE_AS(
                      __typeof__(v128),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v131 = COERCE_AS(
                      __typeof__(v131),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v134 = COERCE_AS(
                      __typeof__(v134),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (v220 != 0) {
                v225 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v225 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v225, v220),
                    v124 = COERCE_AS(
                        __typeof__(v124),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v128 = COERCE_AS(
                        __typeof__(v128),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v131 = COERCE_AS(
                        __typeof__(v131),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v134 = COERCE_AS(
                        __typeof__(v134),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              v194 = (__int64*)v224;
            }
            else {
              *v194++ = (__int64)v196;
            }
          }
          else {
            v201 = v196[5];
            v299 = v195;
            v203 = *(__int64**)v201;
            v202 = *(__int64**)(v201 + 8);
            if (*(__int64**)v201 != v202) {
              v290 = v194;
              v204 = *(__int64**)(v200 + 40);
              v205 = (_QWORD*)v204[1];
              do {
                v206 = *v203;
                v207 = v204[2];
                if ((unsigned __int64)v205 < v207) {
                  *v205++ = v206;
                }
                else {
                  v208 = *v204;
                  v209 = (signed __int64)v205 - *v204;
                  v210 = (v209 >> 3) + 1;
                  if (v210 >> 61 != 0) {
                    GameRoutine_6bddd0(),
                        v124 = COERCE_AS(
                            __typeof__(v124),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v128 = COERCE_AS(
                            __typeof__(v128),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v131 = COERCE_AS(
                            __typeof__(v131),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v134 = COERCE_AS(
                            __typeof__(v134),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  v211 = v207 - v208;
                  if (v211 >> 2 > v210) {
                    v210 = v211 >> 2;
                  }
                  if ((unsigned __int64)v211 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v212 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v212 = v210;
                  }
                  if (v212 != 0) {
                    if (v212 >> 61 != 0) {
                      goto LABEL_485;
                    }
                    v213 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v212, 16,
                        0),
                    v124 = COERCE_AS(
                        __typeof__(v124),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v128 = COERCE_AS(
                        __typeof__(v128),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v131 = COERCE_AS(
                        __typeof__(v131),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v134 = COERCE_AS(
                        __typeof__(v134),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  else {
                    v213 = 0;
                  }
                  v214 = v213 + 8 * v212;
                  v215 = v213 + v209 - 8 * (v209 >> 3);
                  *(_QWORD*)(v213 + v209) = v206;
                  v205 = (_QWORD*)(v213 + v209 + 8);
                  memcpy(v215, v208, v209),
                      v124 = COERCE_AS(
                          __typeof__(v124),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v128 = COERCE_AS(
                          __typeof__(v128),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v131 = COERCE_AS(
                          __typeof__(v131),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v134 = COERCE_AS(
                          __typeof__(v134),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  *v204 = v215;
                  v204[1] = (__int64)v205;
                  v204[2] = v214;
                  if (v208 != 0) {
                    v216 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v216 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v216, v208),
                        v124 = COERCE_AS(
                            __typeof__(v124),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v128 = COERCE_AS(
                            __typeof__(v128),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v131 = COERCE_AS(
                            __typeof__(v131),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v134 = COERCE_AS(
                            __typeof__(v134),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                }
                ++v203;
                v204[1] = (__int64)v205;
              } while (v203 != v202);
              v195 = v299;
              v172 = v288;
              v194 = v290;
            }
          }
          if (++v171 == v172) {
            goto LABEL_381;
          }
        }
      }
      v194 = nullptr;
      v195 = 0;
    LABEL_381:
      v291 = ((__int64)v194 - v195) >> 3;
      v295 = (unsigned __int64)v194 - v195;
      if (v291 < 129) {
        v233 = 0;
      LABEL_387:
        GameRoutine_6c0d40(v195, v194, ((__int64)v194 - v195) >> 3, nullptr,
                           v233),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v230 = ((__int64)v194 - v195) >> 3;
        v231 = GameData_212c060;
        while (1) {
          v232 = (__int64*)GameRoutine_1a09d20(8 * v230, v231),
          v124 = COERCE_AS(__typeof__(v124),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v128 = COERCE_AS(__typeof__(v128),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v131 = COERCE_AS(__typeof__(v131),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v134 = COERCE_AS(__typeof__(v134),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v232 != nullptr) {
            break;
          }
          v233 = v230 >> 1;
          v170 = v230 > 1;
          v230 >>= 1;
          if (!v170) {
            goto LABEL_387;
          }
        }
        v234 = (__int64)v232;
        GameRoutine_6c0d40(v195, v194, ((__int64)v194 - v195) >> 3, v232, v230),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v235 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v235 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v235, v234),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v160 = (_QWORD*)v296;
      v300 = v195;
      if ((__int64*)v195 != v194) {
        v236 = GameData_212c060;
        do {
          v237 = v194;
          v238 = *(__int64**)(*(_QWORD*)v195 + 40LL);
          v239 = *v238;
          v240 = (__int64*)v238[1];
          v241 = (__int64)v240 - *v238;
          v242 = v241 >> 3;
          if (v241 >> 3 < 129) {
            v245 = 0;
          LABEL_400:
            GameRoutine_6c0520(v239, v240, v242, nullptr, v245),
                v124 =
                    COERCE_AS(__typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v128 =
                    COERCE_AS(__typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v131 =
                    COERCE_AS(__typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v134 =
                    COERCE_AS(__typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v243 = v241 >> 3;
            while (1) {
              v244 = (__int64*)GameRoutine_1a09d20(8 * v243, v236),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v128 = COERCE_AS(__typeof__(v128),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (v244 != nullptr) {
                break;
              }
              v245 = v243 >> 1;
              v170 = v243 > 1;
              v243 >>= 1;
              if (!v170) {
                goto LABEL_400;
              }
            }
            v246 = (__int64)v244;
            GameRoutine_6c0520(v239, v240, v242, v244, v243),
                v124 =
                    COERCE_AS(__typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v128 =
                    COERCE_AS(__typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v131 =
                    COERCE_AS(__typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v134 =
                    COERCE_AS(__typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v247 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v247 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v247, v246),
                v124 =
                    COERCE_AS(__typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v128 =
                    COERCE_AS(__typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v131 =
                    COERCE_AS(__typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v134 =
                    COERCE_AS(__typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v248 = *v238;
          v160 = (_QWORD*)v296;
          v194 = v237;
          if (v238[1] != *v238) {
            v249 = 0;
            do {
              *(_WORD*)(*(_QWORD*)(v248 + 8 * v249) + 16LL) = v249;
              ++v249;
              v248 = *v238;
            } while (v249 < (v238[1] - *v238) >> 3);
          }
          v195 += 8;
        } while ((__int64*)v195 != v237);
      }
      v250 = v160[10];
      v251 = v160[8];
      if (v295 <= v250 - v251) {
        v259 = v160[9];
        v252 = v300;
        v260 = v259 - v251;
        if (v295 <= v259 - v251) {
          if ((__int64*)v300 != v194) {
            memmove(v160[8], v300, v295),
                v124 =
                    COERCE_AS(__typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v128 =
                    COERCE_AS(__typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v131 =
                    COERCE_AS(__typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v134 =
                    COERCE_AS(__typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v258 = (char*)(v251 + v295);
        }
        else {
          v261 = v300 + v260;
          if (v259 != v251) {
            memmove(v160[8], v300, v260),
                v124 =
                    COERCE_AS(__typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v128 =
                    COERCE_AS(__typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v131 =
                    COERCE_AS(__typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v134 =
                    COERCE_AS(__typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v259 = v160[9];
          }
          if (v194 != (__int64*)v261) {
            memmove(v259, v261, (unsigned __int64)v194 - v261),
                v124 =
                    COERCE_AS(__typeof__(v124),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v128 =
                    COERCE_AS(__typeof__(v128),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v131 =
                    COERCE_AS(__typeof__(v131),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v134 =
                    COERCE_AS(__typeof__(v134),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v258 = (char*)v194 + v259 - v261;
          v252 = v300;
        }
      }
      else {
        v252 = v300;
        if (v251 != 0) {
          v160[9] = v251;
          v253 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v253 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v253, v251),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v128 = COERCE_AS(__typeof__(v128),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v250 = 0;
          *(_QWORD*)(v296 + 72) = 0;
          *(_QWORD*)(v296 + 80) = 0;
          *(_QWORD*)(v296 + 64) = 0;
        }
        if ((unsigned __int64)v291 >> 61 != 0) {
          goto LABEL_486;
        }
        v254 = v250 >> 2;
        if (v250 >> 2 <= (unsigned __int64)v291) {
          v254 = v291;
        }
        v255 = (unsigned __int64)v250 >= 0x7FFFFFFFFFFFFFF8LL
                   ? 0x1FFFFFFFFFFFFFFFLL
                   : v254;
        if (v255 >> 61 != 0) {
          goto LABEL_486;
        }
        v256 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v255, 16, 0),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v131 = COERCE_AS(__typeof__(v131),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v257 = v256;
        v160[8] = v256;
        v160[9] = v256;
        v160[10] = v256 + 8 * v255;
        if ((__int64*)v300 != v194) {
          memcpy(v256, v300, v295),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v128 = COERCE_AS(__typeof__(v128),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v258 = (char*)(v257 + v295);
      }
      v160[9] = v258;
      if (v252 != 0) {
        v262 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v262 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v262, v252),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v263 = (_QWORD*)v314_.v314;
      if (v314_.v314 != 0) {
        v264 = fw_memory_g_heap_manager_ptr;
        do {
          v265 = (_QWORD*)*v263;
          if (*(_QWORD*)(*(_QWORD*)v264 + 200LL) != 0) {
            v266 = 128;
          }
          else {
            v266 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v264 + v266, (__int64)v263),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v128 = COERCE_AS(__typeof__(v128),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v263 = v265;
        } while (v265 != nullptr);
      }
      v267 = (__int64 (**)(void))v312_.v312,
      v124 = COERCE_AS(__typeof__(v124),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v128 = COERCE_AS(__typeof__(v128),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v131 = COERCE_AS(__typeof__(v131),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v134 = COERCE_AS(__typeof__(v134),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v312_.v312 = 0;
      if (v267 != nullptr) {
        v268 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v268 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v268, (__int64)v267),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  v270 = v160[5];
  v269 = v160[6];
  v271 = v307_.v309;
  if (v307_.v309 != nullptr) {
    v272 = fw_memory_g_heap_manager_ptr;
    do {
      v273 = (_QWORD*)*v271;
      if (*(_QWORD*)(*(_QWORD*)v272 + 200LL) != 0) {
        v274 = 128;
      }
      else {
        v274 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v272 + v274, (__int64)v271),
          v124 = COERCE_AS(__typeof__(v124),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v128 = COERCE_AS(__typeof__(v128),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v131 = COERCE_AS(__typeof__(v131),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v134 = COERCE_AS(__typeof__(v134),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v271 = v273;
    } while (v273 != nullptr);
  }
  v275 = v307_.v307;
  v307_.v307 = 0;
  if (v275 != 0) {
    v276 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v276 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v276,
                                  v275),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v131 = COERCE_AS(__typeof__(v131),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v277 = v304_.v304;
  if (v304_.v304 != 0) {
    v278 = v304_.v305;
    if (v304_.v304 == v304_.v305) {
      goto LABEL_467;
    }
    v279 = v304_.v305;
    v280 = fw_memory_g_heap_manager_ptr;
    do {
      v281 = *(_BYTE*)(v279 - 24);
      v279 -= 24;
      if ((v281 & 1) != 0) {
        v282 = *(_QWORD*)(v278 - 8);
        if (v282 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v280 + 200LL) != 0) {
            v283 = 128;
          }
          else {
            v283 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v280 + v283, v282),
              v124 = COERCE_AS(__typeof__(v124),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v128 = COERCE_AS(__typeof__(v128),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v278 = v279;
    } while (v279 != v277);
    v304_.v305 = v277;
    v277 = v304_.v304;
    if (v304_.v304 != 0) {
    LABEL_467:
      v284 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v284 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v284, v277),
          v124 = COERCE_AS(__typeof__(v124),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v128 = COERCE_AS(__typeof__(v128),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v131 = COERCE_AS(__typeof__(v131),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v134 = COERCE_AS(__typeof__(v134),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if ((v302_.v302[0] & 1) != 0 && v302_.v303 != nullptr) {
    v285 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v285 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v285,
                                  (__int64)v302_.v303),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v131 = COERCE_AS(__typeof__(v131),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v269 != v270) {
    (*(void (**)(__int64))(*(_QWORD*)(*GameData_212ce58 + 8) + 16LL))(
        *GameData_212ce58 + 8),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v131 = COERCE_AS(__typeof__(v131),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v301[0] & 1) != 0 && v301[2] != 0) {
    v286 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v286 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v286,
                                  v301[2]),
        v124 = COERCE_AS(__typeof__(v124),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v128 = COERCE_AS(__typeof__(v128),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v131 = COERCE_AS(__typeof__(v131),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v134 = COERCE_AS(__typeof__(v134),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

void game_6e5480(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int* v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  const char** v22;
  const char* v23;
  const char* v24;
  int v25;
  int v26;
  __int64 v28[3];
  __int64 v29;

  if ((*((_BYTE*)a1 + 108) & 1) != 0) {
    goto LABEL_2;
  }
  v7 = *a1;
  if (*((_BYTE*)a1 + 104) == 4 || (*(_BYTE*)(v7 + 49) & 1) == 0 ||
      *(_QWORD*)(v7 + 112) != 0) {
    v8 = *(_QWORD*)(v7 + 304);
    if (v8 != 0) {
      goto LABEL_8;
    }
  LABEL_21:
    v12 = a1[8];
    v13 = a1[9];
    goto LABEL_22;
  }
  if ((GameHr_ffd760(10, (__int64)&GameData_1a9f09e, 0, 0) & 1) == 0) {
  LABEL_2:
    v3 = a1[5];
    v2 = a1[6];
    LODWORD(v28[0]) = 0;
    v4 = a1[8];
    v5 = (v2 - v3) >> 3;
    v6 = (a1[9] - v4) >> 2;
    if (v5 <= v6) {
      if (v5 < v6) {
        a1[9] = v4 + 4 * v5;
      }
    }
    else {
      GameRoutine_6e5a40(a1 + 8, v5 - v6, v28);
    }
    return;
  }
  v8 = *(_QWORD*)(*a1 + 304);
  if (v8 == 0) {
    goto LABEL_21;
  }
LABEL_8:
  v9 = *((_DWORD*)a1 + 22);
  v29 = v8;
  game_127c600((void*)(v28), (__int64)&v29, v9);
  v10 = a1[8];
  if (v10 != 0) {
    a1[9] = v10;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  v10);
  }
  v12 = v28[0];
  v13 = v28[1];
  qmemcpy(a1 + 8, v28, 24);
  if (v12 != v13) {
    v14 = (int*)v12;
    while (1) {
      v15 = *v14++;
      if (v15 != 0) {
        break;
      }
      if (v14 == (int*)v13) {
        goto LABEL_16;
      }
    }
  LABEL_22:
    if (v12 != v13) {
      return;
    }
    goto LABEL_23;
  }
LABEL_16:
  a1[9] = v12;
LABEL_23:
  if (*((int*)a1 + 22) >= 1) {
    v16 = 1;
    do {
      v17 = a1[5];
      if (v16 >= 0x50) {
        v18 = 80;
      }
      else {
        v18 = v16;
      }
      if (v16 > (a1[6] - v17) >> 3) {
        break;
      }
      v19 = GrowthListFile_127c740(*(_QWORD*)(v17 + 8 * v16 - 8));
      if (v19 == 0) {
        goto LABEL_38;
      }
      v20 = *(_QWORD*)(*(_QWORD*)(v19 + 24) + 16LL);
      if (v20 == 0) {
        goto LABEL_38;
      }
      v21 = v18 + 1;
      v22 = (const char**)(v20 + 8 * v18 + 32);
      while (1) {
        v24 = *v22--;
        v23 = v24;
        if (v24 != nullptr) {
          break;
        }
        if ((unsigned __int64)--v21 < 2) {
          goto LABEL_38;
        }
      }
      if (strcmp(v23, GameData_1a94a43) != 0 && v23[1] == 0 &&
          (unsigned int)((v25 = *(unsigned __int8*)v23) - 58) >= 0xFFFFFFF6) {
        v26 = v25 - 48;
      }
      else {
      LABEL_38:
        v26 = 0;
      }
      LODWORD(v28[0]) = v26;
      GameRoutine_6e5900(a1 + 8, v28);
    } while ((__int64)v16++ < *((int*)a1 + 22));
  }
}

__int64* game_6f1f10(__int64* result, __int64* a2, __int64* a3, __int64* a4,
                     __int64* a5)
{
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = *a2;
  v6 = *result;
  v7 = *(_DWORD*)(*(_QWORD*)(*a2 + 24) + 608LL);
  v8 = *a3;
  v9 = *(_DWORD*)(*(_QWORD*)(*a3 + 24) + 608LL);
  if (v7 >= (signed __int32)*(_DWORD*)(*(_QWORD*)(*result + 24) + 608LL)) {
    if (v9 >= v7) {
      v5 = *a3;
    }
    else {
      *a2 = v8;
      *a3 = v5;
      v10 = *result;
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a2 + 24) + 608LL) <
          (signed __int32)*(_DWORD*)(*(_QWORD*)(*result + 24) + 608LL)) {
        *result = *a2;
        *a2 = v10;
        v5 = *a3;
      }
    }
  }
  else {
    if (v9 < v7) {
      *result = v8;
    LABEL_9:
      *a3 = v6;
      v5 = v6;
      goto LABEL_11;
    }
    *result = v5;
    *a2 = v6;
    v5 = *a3;
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a3 + 24) + 608LL) <
        (signed __int32)*(_DWORD*)(*(_QWORD*)(v6 + 24) + 608LL)) {
      *a2 = v5;
      goto LABEL_9;
    }
  }
LABEL_11:
  if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a4 + 24) + 608LL) <
      (signed __int32)*(_DWORD*)(*(_QWORD*)(v5 + 24) + 608LL)) {
    *a3 = *a4;
    *a4 = v5;
    v11 = *a2;
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a3 + 24) + 608LL) <
        (signed __int32)*(_DWORD*)(*(_QWORD*)(*a2 + 24) + 608LL)) {
      *a2 = *a3;
      *a3 = v11;
      v12 = *result;
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a2 + 24) + 608LL) <
          (signed __int32)*(_DWORD*)(*(_QWORD*)(*result + 24) + 608LL)) {
        *result = *a2;
        *a2 = v12;
      }
    }
  }
  v13 = *a4;
  if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a5 + 24) + 608LL) <
      (signed __int32)*(_DWORD*)(*(_QWORD*)(*a4 + 24) + 608LL)) {
    *a4 = *a5;
    *a5 = v13;
    v14 = *a3;
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a4 + 24) + 608LL) <
        (signed __int32)*(_DWORD*)(*(_QWORD*)(*a3 + 24) + 608LL)) {
      *a3 = *a4;
      *a4 = v14;
      v15 = *a2;
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a3 + 24) + 608LL) <
          (signed __int32)*(_DWORD*)(*(_QWORD*)(*a2 + 24) + 608LL)) {
        *a2 = *a3;
        *a3 = v15;
        v16 = *result;
        if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a2 + 24) + 608LL) <
            (signed __int32)*(_DWORD*)(*(_QWORD*)(*result + 24) + 608LL)) {
          *result = *a2;
          *a2 = v16;
        }
      }
    }
  }
  return result;
}

__int64 game_739bc0()
{
  __int64* v0;
  __int64 result;
  __int64 v2;
  __int64 v3;
  bool v4;
  int v5;
  int v6;

  v0 = game_8224a0(0x17u);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v0);
  if (result == 0) {
    return result;
  }
  if (*(_DWORD*)(result + 32) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                  24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                  556000);
  if (v2 != 0) {
    v3 = game_g_shared_system_skills_ptr;
    while (1) {
      v5 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v3) & 0xFFF;
      if ((game_HasSkill((_QWORD*)(v2 + 1744), (unsigned int*)&v5) & 1) == 0) {
        v4 = *(_WORD*)(v2 + 492) == 0 && *(_BYTE*)(v2 + 496) == 0;
        if (!v4 || (v6 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v3) & 0xFFF,
                    (game_HasSkill((_QWORD*)(v2 + 1744), (unsigned int*)&v6) &
                     1) == 0)) {
          if ((*(_BYTE*)(v2 + 416) & 1) == 0) {
            break;
          }
        }
      }
      v2 = *(_QWORD*)(v2 + 432);
      if (v2 == 0) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}

__int64 game_740ac0(__int64 result, __int64* a2, unsigned __int64 a3,
                    __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  if (a3 != 0) {
    if (a3 == 2) {
      v4 = *(a2 - 1);
      if ((signed __int32)*(_DWORD*)(v4 + 592) <=
          (signed __int32)*(_DWORD*)(*(_QWORD*)result + 592LL)) {
        *a4 = *(_QWORD*)result;
        v5 = *(a2 - 1);
      }
      else {
        *a4 = v4;
        v5 = *(_QWORD*)result;
      }
      a4[1] = v5;
    }
    else if (a3 == 1) {
      *a4 = *(_QWORD*)result;
    }
    else if ((__int64)a3 > 8) {
      v15 = a3 >> 1;
      v16 = result;
      v20 = (__int64*)(result + 8 * (a3 >> 1));
      v21 = 8 * (a3 >> 1);
      game_7408a0(result, v20, v15, a4, v15);
      result = game_7408a0((__int64)v20, a2, a3 - v15, &a4[v15], a3 - v15);
      if (v21 != 0) {
        v22 = v20;
        v23 = a4;
        v24 = a2;
        v25 = (__int64*)v16;
        while (v22 != a2) {
          v26 = *v22;
          v27 = *(_DWORD*)(*v22 + 592);
          v28 = *(_DWORD*)(*v25 + 592);
          if (v27 > v28) {
            v29 = 8;
          }
          else {
            v26 = *v25;
            v29 = 0;
          }
          v22 = (__int64*)((char*)v22 + v29);
          if (v27 <= v28) {
            v30 = 8;
          }
          else {
            v30 = 0;
          }
          *v23++ = v26;
          v25 = (__int64*)((char*)v25 + v30);
          if (v25 == v20) {
            goto LABEL_38;
          }
        }
        while (v25 != v20) {
          v31 = *v25++;
          *v23++ = v31;
        }
      }
      else {
        v22 = v20;
        v23 = a4;
        v24 = a2;
      LABEL_38:
        while (v22 != v24) {
          v32 = *v22++;
          *v23++ = v32;
        }
      }
    }
    else if ((__int64*)result != a2) {
      v6 = *(_QWORD*)result;
      result += 8;
      *a4 = v6;
      if ((__int64*)result != a2) {
        v7 = 0;
        v8 = a4;
        v9 = a4;
        do {
          v11 = *v9++;
          v10 = v11;
          if ((signed __int32)*(_DWORD*)(*(_QWORD*)result + 592LL) <=
              (signed __int32)*(_DWORD*)(v11 + 592)) {
            *v9 = *(_QWORD*)result;
          }
          else {
            v8[1] = v10;
            v12 = a4;
            if (v8 != a4) {
              v13 = v7;
              while (1) {
                v12 = (__int64*)((char*)a4 + v13);
                v14 = *(__int64*)((char*)a4 + v13 - 8);
                if ((signed __int32)*(_DWORD*)(*(_QWORD*)result + 592LL) <=
                    (signed __int32)*(_DWORD*)(v14 + 592)) {
                  break;
                }
                v13 -= 8;
                *v12 = v14;
                if (v13 == 0) {
                  v12 = a4;
                  break;
                }
              }
            }
            *v12 = *(_QWORD*)result;
          }
          result += 8;
          v7 += 8;
          v8 = v9;
        } while ((__int64*)result != a2);
      }
    }
  }
  return result;
}

char* game_740d00(char* result, char* a2, char* a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  char* v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  char* v26;
  char* v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  char* v52;
  __int64 v53;

  if (a5 != 0) {
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return result;
      }
      v9 = 0;
      v10 = 0;
      while (1) {
        v11 = *(_QWORD*)&result[8 * v10];
        if ((signed __int32)*(_DWORD*)(*(_QWORD*)a2 + 592LL) >
            (signed __int32)*(_DWORD*)(v11 + 592)) {
          break;
        }
        ++v10;
        v9 -= 8;
        if (a4 == v10) {
          return result;
        }
      }
      v12 = a4 - v10;
      v53 = a6;
      v51 = a7;
      v52 = a3;
      v50 = &result[-v9];
      if (a4 - v10 >= a5) {
        if (a4 - 1 == v10) {
          *(_QWORD*)&result[8 * v10] = *(_QWORD*)a2;
          *(_QWORD*)a2 = v11;
          return result;
        }
        v22 = v12 / 2;
        v23 = &result[8 * (v12 / 2)];
        if (a3 == a2) {
          v14 = a3;
          v29 = a3;
        }
        else {
          v24 = (a3 - a2) >> 3;
          v14 = a2;
          do {
            v25 = v24 >> 1;
            v26 = &v14[8 * (v24 >> 1)];
            v28 = *(_QWORD*)v26;
            v27 = v26 + 8;
            v24 += ~(v24 >> 1);
            if ((signed __int32)*(_DWORD*)(v28 + 592) >
                (signed __int32)*(_DWORD*)(*(_QWORD*)&v23[8 * v10] + 592LL)) {
              v14 = v27;
            }
            else {
              v24 = v25;
            }
          } while (v24 != 0);
          v29 = a2;
        }
        v15 = &v23[-v9];
        v13 = (v14 - v29) >> 3;
      }
      else {
        v13 = a5 / 2;
        v14 = &a2[8 * (a5 / 2)];
        if (&result[-v9] == a2) {
          v15 = a2;
          v21 = a2;
        }
        else {
          v15 = &result[-v9];
          v16 = (a2 - result + v9) >> 3;
          do {
            v17 = v16 >> 1;
            v18 = &v15[8 * (v16 >> 1)];
            v20 = *(_QWORD*)v18;
            v19 = v18 + 8;
            v16 += ~(v16 >> 1);
            if ((signed __int32)*(_DWORD*)(*(_QWORD*)v14 + 592LL) >
                (signed __int32)*(_DWORD*)(v20 + 592)) {
              v16 = v17;
            }
            else {
              v15 = v19;
            }
          } while (v16 != 0);
          v21 = &result[-v9];
        }
        v22 = (v15 - v21) >> 3;
      }
      v30 = a5 - v13;
      v31 = a4;
      v32 = a5;
      v33 = a4 - v22 - v10;
      v34 = GameRoutine_7410c0(v15, a2, v14);
      v35 = v34;
      if (v22 + v13 >= v32 + v31 - (v22 + v13) - v10) {
        a7 = v51;
        a6 = v53;
        game_740d00(v34, v14, v52, v33, v30, v53, v51);
        result = v50;
        v14 = v15;
        v30 = v13;
        v33 = v22;
        a3 = v35;
      }
      else {
        a7 = v51;
        a6 = v53;
        game_740d00(v50, v15, v34, v22, v13, v53, v51);
        a3 = v52;
        result = v35;
      }
      a4 = v33;
      a5 = v30;
      a2 = v14;
      if (v30 == 0) {
        return result;
      }
    }
    if (a4 <= a5) {
      if (result != a2) {
        v39 = -a6;
        v40 = (_QWORD*)a6;
        v41 = result;
        do {
          v42 = *(_QWORD*)v41;
          v41 += 8;
          v39 -= 8;
          *v40++ = v42;
        } while (v41 != a2);
        while (a2 != a3) {
          v43 = *(_QWORD*)a2;
          v44 = *(_DWORD*)(*(_QWORD*)a2 + 592LL);
          v45 = *(_DWORD*)(*(_QWORD*)a6 + 592LL);
          if (v44 > v45) {
            v46 = 8;
          }
          else {
            v43 = *(_QWORD*)a6;
            v46 = 0;
          }
          a2 += v46;
          if (v44 <= v45) {
            v47 = 8;
          }
          else {
            v47 = 0;
          }
          *(_QWORD*)result = v43;
          result += 8;
          a6 += v47;
          if (v40 == (_QWORD*)a6) {
            return result;
          }
        }
        return (char*)memmove((__int64)result, a6, -(a6 + v39));
      }
    }
    else if (a2 != a3) {
      v36 = 0;
      do {
        *(_QWORD*)(a6 + v36) = *(_QWORD*)&a2[v36];
        v36 += 8;
      } while (&a2[v36] != a3);
      v37 = a6 + v36;
      while (a2 != result) {
        v38 = *((_QWORD*)a2 - 1);
        if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v37 - 8) + 592LL) >
            (signed __int32)*(_DWORD*)(v38 + 592)) {
          a2 -= 8;
        }
        else {
          v38 = *(_QWORD*)(v37 - 8);
          v37 -= 8;
        }
        *((_QWORD*)a3 - 1) = v38;
        a3 -= 8;
        if (v37 == a6) {
          return result;
        }
      }
      if (a6 != v37) {
        v48 = -8;
        do {
          v49 = *(_QWORD*)(v37 - 8);
          v37 -= 8;
          *(_QWORD*)&a3[v48] = v49;
          v48 -= 8;
        } while (v37 != a6);
      }
    }
  }
  return result;
}

__int64 game_7bc4e0(__int64 a1, char a2)
{
  __int64* v4;
  __int64 v5;
  char v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9148,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d9148) != 0) {
    GameData_21d8848 = 3;
    GameData_21d8870 = 0;
    GameData_21d8950 = 0;
    GameData_21d8958 = (__int64)GameRoutine_7bcd40;
    GameData_21d8a78 = 100;
    GameData_21d8888 = 10;
    GameData_21d8878 = 0;
    GameData_21d8880 = 0;
    GameData_21d8850 = 0;
    GameData_21d8858 = 0;
    GameData_21d8860 = 0;
    GameData_21d8868 = 0;
    GameData_21d88a8 = 0;
    GameData_21d88b0 = 0;
    GameData_21d88b8 = 0;
    GameData_21d88c0 = 0;
    GameData_21d88f0 = 0;
    GameData_21d8988 = 15;
    GameData_21d8a98 = (__int64)GameRoutine_7bd090;
    GameData_21d88c8 = 2;
    GameData_21d88f8 = 0;
    GameData_21d8900 = 0;
    GameData_21d88e8 = 0;
    GameData_21d88d8 = 0;
    GameData_21d88e0 = 0;
    GameData_21d88d0 = 0;
    GameData_21d8990 = 0;
    GameData_21d8998 = (__int64)GameRoutine_7bceb0;
    GameData_21d8ad8 = (__int64)GameRoutine_7bd110;
    GameData_21d8910 = 0;
    GameData_21d8918 = (__int64)GameRoutine_7bcc80;
    GameData_21d8920 = 0;
    GameData_21d8928 = 0;
    GameData_21d8930 = 0;
    GameData_21d8938 = 0;
    GameData_21d8940 = 0;
    GameData_21d8960 = 0;
    GameData_21d89d0 = 0;
    GameData_21d89d8 = (__int64)GameRoutine_7bcf20;
    GameData_21d8b28 = 1;
    GameData_21d8968 = 0;
    GameData_21d8970 = 0;
    GameData_21d8978 = 0;
    GameData_21d8980 = 0;
    GameData_21d89a0 = 0;
    GameData_21d89a8 = 0;
    GameData_21d8890 = 0;
    GameData_21d8898 = (__int64)GameData_212d1b8;
    GameData_21d8a10 = 0;
    GameData_21d8a18 = (__int64)GameRoutine_7bcfe0;
    GameData_21d8b98 = (__int64)GameHr_7bd1a0;
    GameData_21d89b0 = 0;
    GameData_21d89b8 = 0;
    GameData_21d89c0 = 0;
    GameData_21d89e0 = 0;
    GameData_21d89e8 = 0;
    GameData_21d8908 = 13;
    GameData_21d8948 = 13;
    GameData_21d89c8 = 13;
    GameData_21d89f0 = 0;
    GameData_21d89f8 = 0;
    GameData_21d8a00 = 0;
    GameData_21d8a08 = 13;
    GameData_21d8a20 = 0;
    GameData_21d8a28 = 0;
    GameData_21d8a30 = 0;
    GameData_21d8a38 = 0;
    GameData_21d8a40 = 0;
    GameData_21d8a48 = 4;
    GameData_21d8a60 = 0;
    GameData_21d8a58 = 0;
    GameData_21d8a50 = 0;
    GameData_21d8a68 = 2;
    GameData_21d8a70 = 0;
    GameData_21d8a80 = 0;
    GameData_21d8a88 = 13;
    GameData_21d8a90 = 0;
    GameData_21d8aa0 = 0;
    GameData_21d8aa8 = 0;
    GameData_21d8ab0 = 0;
    GameData_21d8ab8 = 0;
    GameData_21d8ac0 = 0;
    GameData_21d8ac8 = 13;
    GameData_21d8ad0 = 0;
    GameData_21d8ae0 = 0;
    GameData_21d8ae8 = 0;
    GameData_21d8af0 = 0;
    GameData_21d8af8 = 0;
    GameData_21d8b00 = 0;
    GameData_21d8b08 = 2;
    GameData_21d8b20 = 0;
    GameData_21d8b18 = 0;
    GameData_21d8b10 = 0;
    GameData_21d8b30 = 0;
    GameData_21d8b38 = 0;
    GameData_21d8b40 = 0;
    GameData_21d8b48 = 13;
    GameData_21d8b50 = 0;
    GameData_21d8b58 = (__int64)GameRoutine_7bcc80;
    GameData_21d8b60 = 0;
    GameData_21d8b68 = 0;
    GameData_21d8b70 = 0;
    GameData_21d8b78 = 0;
    GameData_21d8b80 = 0;
    GameData_21d8b88 = 13;
    GameData_21d8b90 = 0;
    GameData_21d8ba0 = 0;
    GameData_21d8ba8 = 0;
    GameData_21d8bb0 = 0;
    GameData_21d8bb8 = 0;
    GameData_21d8bc0 = 0;
    GameData_21d8bc8 = 13;
    GameData_21d8bd0 = 0;
    GameData_21d8bd8 = (__int64)GameHr_7bd3a0;
    GameData_21d8be0 = 0;
    GameData_21d8be8 = 0;
    GameData_21d8bf0 = 0;
    GameData_21d8bf8 = 0;
    GameData_21d8c00 = 0;
    GameData_21d8c08 = 8;
    GameData_21d8c10 = (__int64)GameData_212d108[0];
    GameData_21d8c30 = 0;
    GameData_21d8c38 = 0;
    GameData_21d8c40 = 0;
    GameData_21d8c28 = 0;
    GameData_21d8c20 = 0;
    GameData_21d8c18 = 0;
    GameData_21d8c48 = 8;
    GameData_21d8c50 = 0;
    GameData_21d8c68 = 0;
    GameData_21d8c70 = 0;
    GameData_21d8c78 = 0;
    GameData_21d8c80 = 0;
    GameData_21d8c88 = 12;
    GameData_21d8c90 = 0;
    GameData_21d8c58 = (__int64)GameData_212d110[0];
    GameData_21d8cd8 = (__int64)GameRoutine_7bd4b0;
    GameData_21d8cb0 = 0;
    GameData_21d8cb8 = 0;
    GameData_21d8cc0 = 0;
    GameData_21d8cc8 = 13;
    GameData_21d8cd0 = 0;
    GameData_21d8ce0 = 0;
    GameData_21d8ce8 = 0;
    GameData_21d8cf0 = 0;
    GameData_21d8cf8 = 0;
    GameData_21d8d00 = 0;
    GameData_21d8d08 = 13;
    GameData_21d8d10 = 0;
    GameData_21d8d20 = 0;
    GameData_21d8d28 = 0;
    GameData_21d8d30 = 0;
    GameData_21d8d38 = 0;
    GameData_21d8d40 = 0;
    GameData_21d8d48 = 8;
    GameData_21d8d50 = 0;
    GameData_21d8d18 = (__int64)GameRoutine_7bd4f0;
    GameData_21d8c98 = (__int64)GameData_212cfa8;
    GameData_21d8ca8 = 6;
    GameData_21d8ea8 = 3;
    GameData_21d8e08 = 2;
    GameData_21d8e28 = 2;
    GameData_21d8e88 = 2;
    GameData_21d8f48 = 2;
    GameData_21d8fc8 = 2;
    GameData_21d9088 = 2;
    GameData_21d8d68 = 0;
    GameData_21d8d70 = 0;
    GameData_21d8d78 = 0;
    GameData_21d8d80 = 0;
    GameData_21d8d88 = 13;
    GameData_21d8d90 = 0;
    GameData_21d8da0 = 0;
    GameData_21d8da8 = 0;
    GameData_21d8db0 = 0;
    GameData_21d8db8 = 0;
    GameData_21d8dc0 = 0;
    GameData_21d8dc8 = 12;
    GameData_21d8df0 = 0;
    GameData_21d8df8 = 0;
    GameData_21d8e00 = 0;
    GameData_21d8de8 = 0;
    GameData_21d8de0 = 0;
    GameData_21d8dd8 = 0;
    GameData_21d8dd0 = 0;
    GameData_21d8e10 = 0;
    GameData_21d8e18 = 0;
    GameData_21d8e20 = 0;
    GameData_21d8e30 = 0;
    GameData_21d8e38 = 0;
    GameData_21d8e40 = 0;
    GameData_21d8e48 = 13;
    GameData_21d8e50 = 0;
    GameData_21d8e60 = 0;
    GameData_21d8e68 = 0;
    GameData_21d8e70 = 0;
    GameData_21d8e78 = 0;
    GameData_21d8e80 = 0;
    GameData_21d8ea0 = 0;
    GameData_21d8e98 = 0;
    GameData_21d8e90 = 0;
    GameData_21d8eb0 = 0;
    GameData_21d8eb8 = 0;
    GameData_21d8ec0 = 0;
    GameData_21d8ec8 = 13;
    GameData_21d8ed0 = 0;
    GameData_21d8ed8 = (__int64)GameRoutine_7bcc80;
    GameData_21d8ee0 = 0;
    GameData_21d8ee8 = 0;
    GameData_21d8ef0 = 0;
    GameData_21d8ef8 = 0;
    GameData_21d8f00 = 0;
    GameData_21d8f08 = 13;
    GameData_21d8f10 = 0;
    GameData_21d8f20 = 0;
    GameData_21d8f28 = 0;
    GameData_21d8f30 = 0;
    GameData_21d8f38 = 0;
    GameData_21d8f40 = 0;
    GameData_21d8f60 = 0;
    GameData_21d8f58 = 0;
    GameData_21d8f50 = 0;
    GameData_21d8f68 = 4;
    GameData_21d8f70 = 0;
    GameData_21d8f78 = 0;
    GameData_21d8f80 = 0;
    GameData_21d8f88 = 12;
    GameData_21d8f90 = 0;
    GameData_21d8f98 = 0;
    GameData_21d8fa0 = 0;
    GameData_21d8fa8 = 6;
    GameData_21d8fb0 = 0;
    GameData_21d8fb8 = 0;
    GameData_21d8fc0 = 0;
    GameData_21d8fe0 = 0;
    GameData_21d8fd8 = 0;
    GameData_21d8fd0 = 0;
    GameData_21d8ff0 = 0;
    GameData_21d8ff8 = 0;
    GameData_21d9000 = 0;
    GameData_21d9008 = 13;
    GameData_21d9010 = 0;
    GameData_21d9020 = 0;
    GameData_21d9028 = 0;
    GameData_21d9030 = 0;
    GameData_21d9038 = 0;
    GameData_21d9040 = 0;
    GameData_21d9048 = 12;
    GameData_21d9050 = 0;
    GameData_21d9058 = 0;
    GameData_21d9060 = 0;
    GameData_21d9068 = 6;
    GameData_21d9070 = 0;
    GameData_21d9078 = 0;
    GameData_21d9080 = 0;
    GameData_21d90a0 = 0;
    GameData_21d9098 = 0;
    GameData_21d8f18 = (__int64)GameRoutine_7bd9a0;
    GameData_21d9090 = 0;
    GameData_21d90a8 = 6;
    GameData_21d90b0 = 0;
    GameData_21d90b8 = 0;
    GameData_21d90c0 = 0;
    GameData_21d90c8 = 13;
    GameData_21d90d0 = 0;
    GameData_21d90d8 = (__int64)game_7bdd40;
    GameData_21d90e0 = 0;
    GameData_21d90e8 = 0;
    GameData_21d8fe8 = 5;
    GameData_21d90f0 = 0;
    GameData_21d90f8 = 0;
    GameData_21d9100 = 0;
    GameData_21d9108 = 0;
    GameData_21d9130 = 0;
    GameData_21d9138 = 0;
    GameData_21d9140 = 0;
    GameData_21d9128 = 0;
    GameData_21d9120 = 0;
    GameData_21d9018 = (__int64)game_7bdbd0;
    GameData_21d9118 = 0;
    GameData_21d9110 = 0;
    GameData_21d8d58 = (__int64)GameData_212d118[0];
    GameData_21d8d98 = (__int64)GameHr_7bd590;
    GameData_21d8e58 = (__int64)GameHr_7bd6a0;
    __cxa_guard_release((__int64)&GameData_21d9148);
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      224, 16, 0);
  v6 = a2 & 1;
  v7 = GameData_212c608[0];
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)v5 = v7 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  GameData_21d9180 = v5;
  *(_QWORD*)v5 = game_map_anonymous_ProcMapSeqAI_vtable;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2258fb0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2258fb0) != 0) {
    BYTE4(GameData_2258fa0) = 0;
    GameData_2258fa8 = 0;
    GameData_2258f88 = (__int64)&GameData_1a9f09e;
    GameData_2258f90 = (__int64)"MID_KeyHelp_AutoCancel";
    LOBYTE(GameData_2258f98) = 1;
    *(__int64*)((char*)&GameData_2258f98 + 4) = 2;
    __cxa_guard_release((__int64)&GameData_2258fb0);
  }
  v15 = GameData_2258f98;
  v16 = GameData_2258fa0;
  v17 = GameData_2258fa8;
  v13 = GameData_2258f88;
  v14 = GameData_2258f90;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 40, 16, 0);
  *(_QWORD*)(v5 + 152) = v8;
  *(_BYTE*)(v5 + 176) = v6;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 213) = 0;
  *(_QWORD*)(v5 + 160) = v8 + 5;
  *(_QWORD*)(v5 + 168) = v8 + 5;
  *(_QWORD*)(v5 + 180) = -1;
  v8[2] = v15;
  v8[3] = v16;
  v8[4] = v17;
  *v8 = v13;
  v8[1] = v14;
  v9 = *v4;
  *(_DWORD*)(*GameData_212ce90[0] + 20) |= 0x40000000u;
  v10 = fw_memory_HeapManager_Allocate(v9, 32, 16, 0);
  game_11eabf0(v10);
  *(_QWORD*)GameData_212d290 = v10;
  v11 = GameData_212cfc0[0];
  *(_BYTE*)(v10 + 30) = v6;
  *(_BYTE*)(*v11 + 24) = 0;
  *(_BYTE*)(*GameData_212ce88[0] + 12888) = 0;
  *(_BYTE*)(*GameData_212cfd8[0] + 16) = 0;
  GameRoutine_867df0();
  if (*GameData_212cff8[0] != 0) {
    MapInfo_825040(*GameData_212cff8[0], 4);
  }
  return ProcInst_657850(v5, (__int64)&GameData_21d8848,
                         (__int64)"ProcMapSeqAI", 1, a1);
}

__int64 game_7fbcc0(__int64 a1, unsigned __int8* a2)
{
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 result;
  __int64 v9;
  int* v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  signed int v19;
  int v20;
  int v21;
  signed int v22;
  unsigned int v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  signed int v30;
  int v31;
  int v32;
  signed int v33;
  unsigned int v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;
  signed int v41;
  int v42;
  int v43;
  signed int v44;
  unsigned int v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  signed int v52;
  int v53;
  int v54;
  signed int v55;
  unsigned int v56;
  int v57;
  int v58;
  __int64 v59;
  __int64 v60;
  int v61;
  int v62;
  signed int v63;
  int v64;
  int v65;
  signed int v66;
  unsigned int v67;
  int v68;
  int v69;
  __int64 v70;
  __int64 v71;
  int v72;
  int v73;
  signed int v74;
  int v75;
  int v76;
  signed int v77;
  unsigned int v78;
  int v79;
  int v80;
  __int64 v81;
  __int64 v82;
  int v83;
  int v84;
  signed int v85;
  int v86;
  int v87;
  signed int v88;
  unsigned int v89;
  int v90;
  int v91;
  __int64 v92;
  __int64 v93;
  int v94;
  int v95;
  signed int v96;
  int v97;
  int v98;
  signed int v99;
  unsigned int v100;
  int v101;
  int v102;
  __int64 v103;
  __int64 v104;
  int v105;
  int v106;
  signed int v107;
  int v108;
  int v109;
  signed int v110;
  unsigned int v111;
  int v112;
  int v113;
  __int64 v114;
  __int64 v115;
  int v116;
  int v117;
  signed int v118;
  int v119;
  int v120;
  signed int v121;
  unsigned int v122;
  int v123;
  int v124;
  __int64 v125;
  __int64 v126;
  int v127;
  int v128;
  signed int v129;
  int v130;
  int v131;
  signed int v132;
  unsigned int v133;
  int v134;
  int v135;
  __int64 v136;
  __int64 v137;
  int v138;
  int v139;
  signed int v140;
  int v141;
  int v142;
  signed int v143;
  unsigned int v144;
  int v145;
  int v146;
  int v147;
  __int64 v148;
  __int64 v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  unsigned int v155;
  int v156;

  *(_QWORD*)(a1 + 33) = 0;
  *(_QWORD*)(a1 + 26) = 0;
  *(_QWORD*)(a1 + 18) = 0;
  *(_QWORD*)(a1 + 10) = 0;
  *(_QWORD*)(a1 + 2) = 0;
  if (*GameData_212c868 != 0) {
    v5 = *(_QWORD*)(a1 + 48);
    v4 = (__int64*)(a1 + 48);
    v6 = (*(_QWORD*)(a1 + 56) - v5) >> 1;
    v7 = (int)((__int64)(*(_QWORD*)(*GameData_212c868 + 72) -
                         *(_QWORD*)(*GameData_212c868 + 64)) >>
               3);
    if (v7 != v6) {
      if (v7 <= v6) {
        if (v7 < v6) {
          *(_QWORD*)(a1 + 56) = v5 + 2 * v7;
        }
      }
      else {
        UnitMastery_7fe910(v4, v7 - v6);
      }
    }
  }
  result = *(_QWORD*)(a1 + 48);
  v9 = *(_QWORD*)(a1 + 56);
  if (result != v9) {
    result = memset(result, 0, v9 - result);
  }
  v10 = (int*)GameData_21d99a8;
  v11 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  if (*a2 >= (int)v11) {
    v12 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  }
  else {
    v12 = *a2;
  }
  v13 = v12 - 1;
  if (*a2 != 0) {
    v14 = v13;
  }
  else {
    v14 = 0;
  }
  v15 = *(_DWORD*)(GameData_21d99a8 + 4 * v14);
  if ((int)v11 >= 12) {
    v16 = 12;
  }
  else {
    v16 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  }
  v17 = GameData_21d99a8 + 4LL * v16;
  v18 = *(_DWORD*)(v17 - 4);
  if (v18 >= v15) {
    v18 = v15;
  }
  if (v15 < 0) {
    v18 = 0;
  }
  *(_WORD*)(a1 + 2) = v18;
  if ((int)v11 < 1) {
    LOBYTE(v19) = 0;
  }
  else {
    v19 = 0;
    v20 = v10[(unsigned int)(v11 - 1)];
    if (v20 >= v18) {
      v20 = v18;
    }
    if (v18 >= *v10) {
      v21 = v20;
    }
    else {
      v21 = *v10;
    }
    v22 = v11;
    while (1) {
      v23 = (unsigned int)(v19 + v22) >> 1;
      v24 = v10[v23];
      if (v21 == v24) {
        break;
      }
      if (v21 < v24) {
        v22 = (unsigned int)(v19 + v22) >> 1;
      }
      else {
        v19 = v23 + 1;
      }
      if (v19 >= v22) {
        goto LABEL_37;
      }
    }
    LOBYTE(v19) = v23 + 1;
  }
LABEL_37:
  *(_BYTE*)(a1 + 28) = v19;
  if (a2[1] >= (int)v11) {
    v25 = v11;
  }
  else {
    v25 = a2[1];
  }
  v26 = v25 - 1;
  if (a2[1] != 0) {
    v27 = v26;
  }
  else {
    v27 = 0;
  }
  v28 = *(_DWORD*)(v17 - 4);
  v29 = v10[v27];
  if (v28 >= v29) {
    v28 = v29;
  }
  if (v29 < 0) {
    v28 = 0;
  }
  *(_WORD*)(a1 + 4) = v28;
  if ((int)v11 < 1) {
    LOBYTE(v30) = 0;
  }
  else {
    v30 = 0;
    v31 = v10[(unsigned int)(v11 - 1)];
    if (v31 >= v28) {
      v31 = v28;
    }
    if (v28 >= *v10) {
      v32 = v31;
    }
    else {
      v32 = *v10;
    }
    v33 = v11;
    while (1) {
      v34 = (unsigned int)(v30 + v33) >> 1;
      v35 = v10[v34];
      if (v32 == v35) {
        break;
      }
      if (v32 < v35) {
        v33 = (unsigned int)(v30 + v33) >> 1;
      }
      else {
        v30 = v34 + 1;
      }
      if (v30 >= v33) {
        goto LABEL_62;
      }
    }
    LOBYTE(v30) = v34 + 1;
  }
LABEL_62:
  *(_BYTE*)(a1 + 29) = v30;
  if (a2[2] >= (int)v11) {
    v36 = v11;
  }
  else {
    v36 = a2[2];
  }
  v37 = v36 - 1;
  if (a2[2] != 0) {
    v38 = v37;
  }
  else {
    v38 = 0;
  }
  v39 = *(_DWORD*)(v17 - 4);
  v40 = v10[v38];
  if (v39 >= v40) {
    v39 = v40;
  }
  if (v40 < 0) {
    v39 = 0;
  }
  *(_WORD*)(a1 + 6) = v39;
  if ((int)v11 < 1) {
    LOBYTE(v41) = 0;
  }
  else {
    v41 = 0;
    v42 = v10[(unsigned int)(v11 - 1)];
    if (v42 >= v39) {
      v42 = v39;
    }
    if (v39 >= *v10) {
      v43 = v42;
    }
    else {
      v43 = *v10;
    }
    v44 = v11;
    while (1) {
      v45 = (unsigned int)(v41 + v44) >> 1;
      v46 = v10[v45];
      if (v43 == v46) {
        break;
      }
      if (v43 < v46) {
        v44 = (unsigned int)(v41 + v44) >> 1;
      }
      else {
        v41 = v45 + 1;
      }
      if (v41 >= v44) {
        goto LABEL_87;
      }
    }
    LOBYTE(v41) = v45 + 1;
  }
LABEL_87:
  *(_BYTE*)(a1 + 30) = v41;
  if (a2[3] >= (int)v11) {
    v47 = v11;
  }
  else {
    v47 = a2[3];
  }
  v48 = v47 - 1;
  if (a2[3] != 0) {
    v49 = v48;
  }
  else {
    v49 = 0;
  }
  v50 = *(_DWORD*)(v17 - 4);
  v51 = v10[v49];
  if (v50 >= v51) {
    v50 = v51;
  }
  if (v51 < 0) {
    v50 = 0;
  }
  *(_WORD*)(a1 + 8) = v50;
  if ((int)v11 < 1) {
    LOBYTE(v52) = 0;
  }
  else {
    v52 = 0;
    v53 = v10[(unsigned int)(v11 - 1)];
    if (v53 >= v50) {
      v53 = v50;
    }
    if (v50 >= *v10) {
      v54 = v53;
    }
    else {
      v54 = *v10;
    }
    v55 = v11;
    while (1) {
      v56 = (unsigned int)(v52 + v55) >> 1;
      v57 = v10[v56];
      if (v54 == v57) {
        break;
      }
      if (v54 < v57) {
        v55 = (unsigned int)(v52 + v55) >> 1;
      }
      else {
        v52 = v56 + 1;
      }
      if (v52 >= v55) {
        goto LABEL_112;
      }
    }
    LOBYTE(v52) = v56 + 1;
  }
LABEL_112:
  *(_BYTE*)(a1 + 31) = v52;
  if (a2[4] >= (int)v11) {
    v58 = v11;
  }
  else {
    v58 = a2[4];
  }
  v59 = v58 - 1;
  if (a2[4] != 0) {
    v60 = v59;
  }
  else {
    v60 = 0;
  }
  v61 = *(_DWORD*)(v17 - 4);
  v62 = v10[v60];
  if (v61 >= v62) {
    v61 = v62;
  }
  if (v62 < 0) {
    v61 = 0;
  }
  *(_WORD*)(a1 + 10) = v61;
  if ((int)v11 < 1) {
    LOBYTE(v63) = 0;
  }
  else {
    v63 = 0;
    v64 = v10[(unsigned int)(v11 - 1)];
    if (v64 >= v61) {
      v64 = v61;
    }
    if (v61 >= *v10) {
      v65 = v64;
    }
    else {
      v65 = *v10;
    }
    v66 = v11;
    while (1) {
      v67 = (unsigned int)(v63 + v66) >> 1;
      v68 = v10[v67];
      if (v65 == v68) {
        break;
      }
      if (v65 < v68) {
        v66 = (unsigned int)(v63 + v66) >> 1;
      }
      else {
        v63 = v67 + 1;
      }
      if (v63 >= v66) {
        goto LABEL_137;
      }
    }
    LOBYTE(v63) = v67 + 1;
  }
LABEL_137:
  *(_BYTE*)(a1 + 32) = v63;
  if (a2[5] >= (int)v11) {
    v69 = v11;
  }
  else {
    v69 = a2[5];
  }
  v70 = v69 - 1;
  if (a2[5] != 0) {
    v71 = v70;
  }
  else {
    v71 = 0;
  }
  v72 = *(_DWORD*)(v17 - 4);
  v73 = v10[v71];
  if (v72 >= v73) {
    v72 = v73;
  }
  if (v73 < 0) {
    v72 = 0;
  }
  *(_WORD*)(a1 + 12) = v72;
  if ((int)v11 < 1) {
    LOBYTE(v74) = 0;
  }
  else {
    v74 = 0;
    v75 = v10[(unsigned int)(v11 - 1)];
    if (v75 >= v72) {
      v75 = v72;
    }
    if (v72 >= *v10) {
      v76 = v75;
    }
    else {
      v76 = *v10;
    }
    v77 = v11;
    while (1) {
      v78 = (unsigned int)(v74 + v77) >> 1;
      v79 = v10[v78];
      if (v76 == v79) {
        break;
      }
      if (v76 < v79) {
        v77 = (unsigned int)(v74 + v77) >> 1;
      }
      else {
        v74 = v78 + 1;
      }
      if (v74 >= v77) {
        goto LABEL_162;
      }
    }
    LOBYTE(v74) = v78 + 1;
  }
LABEL_162:
  *(_BYTE*)(a1 + 33) = v74;
  if (a2[6] >= (int)v11) {
    v80 = v11;
  }
  else {
    v80 = a2[6];
  }
  v81 = v80 - 1;
  if (a2[6] != 0) {
    v82 = v81;
  }
  else {
    v82 = 0;
  }
  v83 = *(_DWORD*)(v17 - 4);
  v84 = v10[v82];
  if (v83 >= v84) {
    v83 = v84;
  }
  if (v84 < 0) {
    v83 = 0;
  }
  *(_WORD*)(a1 + 14) = v83;
  if ((int)v11 < 1) {
    LOBYTE(v85) = 0;
  }
  else {
    v85 = 0;
    v86 = v10[(unsigned int)(v11 - 1)];
    if (v86 >= v83) {
      v86 = v83;
    }
    if (v83 >= *v10) {
      v87 = v86;
    }
    else {
      v87 = *v10;
    }
    v88 = v11;
    while (1) {
      v89 = (unsigned int)(v85 + v88) >> 1;
      v90 = v10[v89];
      if (v87 == v90) {
        break;
      }
      if (v87 < v90) {
        v88 = (unsigned int)(v85 + v88) >> 1;
      }
      else {
        v85 = v89 + 1;
      }
      if (v85 >= v88) {
        goto LABEL_187;
      }
    }
    LOBYTE(v85) = v89 + 1;
  }
LABEL_187:
  *(_BYTE*)(a1 + 34) = v85;
  if (a2[7] >= (int)v11) {
    v91 = v11;
  }
  else {
    v91 = a2[7];
  }
  v92 = v91 - 1;
  if (a2[7] != 0) {
    v93 = v92;
  }
  else {
    v93 = 0;
  }
  v94 = *(_DWORD*)(v17 - 4);
  v95 = v10[v93];
  if (v94 >= v95) {
    v94 = v95;
  }
  if (v95 < 0) {
    v94 = 0;
  }
  *(_WORD*)(a1 + 16) = v94;
  if ((int)v11 < 1) {
    LOBYTE(v96) = 0;
  }
  else {
    v96 = 0;
    v97 = v10[(unsigned int)(v11 - 1)];
    if (v97 >= v94) {
      v97 = v94;
    }
    if (v94 >= *v10) {
      v98 = v97;
    }
    else {
      v98 = *v10;
    }
    v99 = v11;
    while (1) {
      v100 = (unsigned int)(v96 + v99) >> 1;
      v101 = v10[v100];
      if (v98 == v101) {
        break;
      }
      if (v98 < v101) {
        v99 = (unsigned int)(v96 + v99) >> 1;
      }
      else {
        v96 = v100 + 1;
      }
      if (v96 >= v99) {
        goto LABEL_212;
      }
    }
    LOBYTE(v96) = v100 + 1;
  }
LABEL_212:
  *(_BYTE*)(a1 + 35) = v96;
  if (a2[8] >= (int)v11) {
    v102 = v11;
  }
  else {
    v102 = a2[8];
  }
  v103 = v102 - 1;
  if (a2[8] != 0) {
    v104 = v103;
  }
  else {
    v104 = 0;
  }
  v105 = *(_DWORD*)(v17 - 4);
  v106 = v10[v104];
  if (v105 >= v106) {
    v105 = v106;
  }
  if (v106 < 0) {
    v105 = 0;
  }
  *(_WORD*)(a1 + 18) = v105;
  if ((int)v11 < 1) {
    LOBYTE(v107) = 0;
  }
  else {
    v107 = 0;
    v108 = v10[(unsigned int)(v11 - 1)];
    if (v108 >= v105) {
      v108 = v105;
    }
    if (v105 >= *v10) {
      v109 = v108;
    }
    else {
      v109 = *v10;
    }
    v110 = v11;
    while (1) {
      v111 = (unsigned int)(v107 + v110) >> 1;
      v112 = v10[v111];
      if (v109 == v112) {
        break;
      }
      if (v109 < v112) {
        v110 = (unsigned int)(v107 + v110) >> 1;
      }
      else {
        v107 = v111 + 1;
      }
      if (v107 >= v110) {
        goto LABEL_237;
      }
    }
    LOBYTE(v107) = v111 + 1;
  }
LABEL_237:
  *(_BYTE*)(a1 + 36) = v107;
  if (a2[9] >= (int)v11) {
    v113 = v11;
  }
  else {
    v113 = a2[9];
  }
  v114 = v113 - 1;
  if (a2[9] != 0) {
    v115 = v114;
  }
  else {
    v115 = 0;
  }
  v116 = *(_DWORD*)(v17 - 4);
  v117 = v10[v115];
  if (v116 >= v117) {
    v116 = v117;
  }
  if (v117 < 0) {
    v116 = 0;
  }
  *(_WORD*)(a1 + 20) = v116;
  if ((int)v11 < 1) {
    LOBYTE(v118) = 0;
  }
  else {
    v118 = 0;
    v119 = v10[(unsigned int)(v11 - 1)];
    if (v119 >= v116) {
      v119 = v116;
    }
    if (v116 >= *v10) {
      v120 = v119;
    }
    else {
      v120 = *v10;
    }
    v121 = v11;
    while (1) {
      v122 = (unsigned int)(v118 + v121) >> 1;
      v123 = v10[v122];
      if (v120 == v123) {
        break;
      }
      if (v120 < v123) {
        v121 = (unsigned int)(v118 + v121) >> 1;
      }
      else {
        v118 = v122 + 1;
      }
      if (v118 >= v121) {
        goto LABEL_262;
      }
    }
    LOBYTE(v118) = v122 + 1;
  }
LABEL_262:
  *(_BYTE*)(a1 + 37) = v118;
  if (a2[10] >= (int)v11) {
    v124 = v11;
  }
  else {
    v124 = a2[10];
  }
  v125 = v124 - 1;
  if (a2[10] != 0) {
    v126 = v125;
  }
  else {
    v126 = 0;
  }
  v127 = *(_DWORD*)(v17 - 4);
  v128 = v10[v126];
  if (v127 >= v128) {
    v127 = v128;
  }
  if (v128 < 0) {
    v127 = 0;
  }
  *(_WORD*)(a1 + 22) = v127;
  if ((int)v11 < 1) {
    LOBYTE(v129) = 0;
  }
  else {
    v129 = 0;
    v130 = v10[(unsigned int)(v11 - 1)];
    if (v130 >= v127) {
      v130 = v127;
    }
    if (v127 >= *v10) {
      v131 = v130;
    }
    else {
      v131 = *v10;
    }
    v132 = v11;
    while (1) {
      v133 = (unsigned int)(v129 + v132) >> 1;
      v134 = v10[v133];
      if (v131 == v134) {
        break;
      }
      if (v131 < v134) {
        v132 = (unsigned int)(v129 + v132) >> 1;
      }
      else {
        v129 = v133 + 1;
      }
      if (v129 >= v132) {
        goto LABEL_287;
      }
    }
    LOBYTE(v129) = v133 + 1;
  }
LABEL_287:
  *(_BYTE*)(a1 + 38) = v129;
  if (a2[11] >= (int)v11) {
    v135 = v11;
  }
  else {
    v135 = a2[11];
  }
  v136 = v135 - 1;
  if (a2[11] != 0) {
    v137 = v136;
  }
  else {
    v137 = 0;
  }
  v138 = *(_DWORD*)(v17 - 4);
  v139 = v10[v137];
  if (v138 >= v139) {
    v138 = v139;
  }
  if (v139 < 0) {
    v138 = 0;
  }
  *(_WORD*)(a1 + 24) = v138;
  if ((int)v11 < 1) {
    LOBYTE(v140) = 0;
  }
  else {
    v140 = 0;
    v141 = v10[(unsigned int)(v11 - 1)];
    if (v141 >= v138) {
      v141 = v138;
    }
    if (v138 >= *v10) {
      v142 = v141;
    }
    else {
      v142 = *v10;
    }
    v143 = v11;
    while (1) {
      v144 = (unsigned int)(v140 + v143) >> 1;
      v145 = v10[v144];
      if (v142 == v145) {
        break;
      }
      if (v142 < v145) {
        v143 = (unsigned int)(v140 + v143) >> 1;
      }
      else {
        v140 = v144 + 1;
      }
      if (v140 >= v143) {
        goto LABEL_312;
      }
    }
    LOBYTE(v140) = v144 + 1;
  }
LABEL_312:
  *(_BYTE*)(a1 + 39) = v140;
  v146 = *(_DWORD*)(v17 - 4);
  if (a2[12] >= (int)v11) {
    v147 = v11;
  }
  else {
    v147 = a2[12];
  }
  v148 = v147 - 1;
  if (a2[12] != 0) {
    v149 = v148;
  }
  else {
    v149 = 0;
  }
  v150 = v10[v149];
  if (v146 >= v150) {
    v146 = v150;
  }
  if (v150 >= 0) {
    v151 = v146;
  }
  else {
    v151 = 0;
  }
  *(_WORD*)(a1 + 26) = v151;
  if ((int)v11 < 1) {
    LOBYTE(v152) = 0;
  }
  else {
    v152 = 0;
    v153 = v10[(unsigned int)(v11 - 1)];
    if (v153 >= v151) {
      v153 = v151;
    }
    if (v151 >= *v10) {
      v154 = v153;
    }
    else {
      v154 = *v10;
    }
    while (1) {
      v155 = (unsigned int)(v152 + v11) >> 1;
      v156 = v10[v155];
      if (v154 == v156) {
        break;
      }
      if (v154 < v156) {
        LODWORD(v11) = (unsigned int)(v152 + v11) >> 1;
      }
      else {
        v152 = v155 + 1;
      }
      if (v152 >= (int)v11) {
        goto LABEL_337;
      }
    }
    LOBYTE(v152) = v155 + 1;
  }
LABEL_337:
  *(_BYTE*)(a1 + 40) = v152;
  return result;
}

bool game_89f340(int* a1, int* a2, __int64 a3)
{
  __int64 v4;
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int* v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int* v39;

  v4 = a2 - a1;
  if (v4 > 2) {
    switch (v4) {
    case 3LL:
      v7 = *a1;
      v8 = a1[1];
      v9 = *(_QWORD*)(*(_QWORD*)a3 + 8LL);
      v10 = *(_QWORD*)(GameData_21c99b8 + 64);
      v11 = *(
          _DWORD*)(*(_QWORD*)(*(_QWORD*)(v10 +
                                         8LL * *(unsigned __int16*)(v9 +
                                                                    12LL * v8 +
                                                                    4)) +
                              24LL) +
                   608LL);
      v12 = *(
          _DWORD*)(*(_QWORD*)(*(_QWORD*)(v10 +
                                         8LL * *(unsigned __int16*)(v9 +
                                                                    12LL * *a1 +
                                                                    4)) +
                              24LL) +
                   608LL);
      v13 = *(a2 - 1);
      v14 = *(
          _DWORD*)(*(_QWORD*)(*(_QWORD*)(v10 +
                                         8LL * *(unsigned __int16*)(v9 +
                                                                    12LL * v13 +
                                                                    4)) +
                              24LL) +
                   608LL);
      if (v11 >= v12) {
        if (v14 < v11) {
          a1[1] = v13;
          *(a2 - 1) = v8;
          v26 = *a1;
          v25 = a1[1];
          if ((signed __int32)*(
                  _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 +
                                                            64) +
                                                 8LL *
                                                     *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                         a3 +
                                                                                     8LL) +
                                                                          12LL *
                                                                              v25 +
                                                                          4)) +
                                      24LL) +
                           608LL) <
              (signed __int32)*(
                  _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 +
                                                            64) +
                                                 8LL *
                                                     *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                         a3 +
                                                                                     8LL) +
                                                                          12LL *
                                                                              *a1 +
                                                                          4)) +
                                      24LL) +
                           608LL)) {
            *a1 = v25;
            a1[1] = v26;
          }
        }
      }
      else if (v14 >= v11) {
        *a1 = v8;
        a1[1] = v7;
        v27 = *(a2 - 1);
        if ((signed __int32)*(
                _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 +
                                                          64) +
                                               8LL *
                                                   *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                       a3 +
                                                                                   8LL) +
                                                                        12LL *
                                                                            v27 +
                                                                        4)) +
                                    24LL) +
                         608LL) <
            (signed __int32)*(
                _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 +
                                                          64) +
                                               8LL *
                                                   *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                       a3 +
                                                                                   8LL) +
                                                                        12LL *
                                                                            v7 +
                                                                        4)) +
                                    24LL) +
                         608LL)) {
          a1[1] = v27;
          *(a2 - 1) = v7;
        }
      }
      else {
        *a1 = v13;
        *(a2 - 1) = v7;
      }
      return true;
    case 4LL:
      GameRoutine_89ef30(a1, a1 + 1, a1 + 2, a2 - 1, a3);
      break;
    case 5LL:
      GameRoutine_89f190(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1, a3);
      break;
    default:
      goto LABEL_13;
    }
    return true;
  }
  if ((unsigned __int64)v4 < 2) {
    return true;
  }
  if (v4 == 2) {
    v5 = *(a2 - 1);
    v6 = *a1;
    if ((signed __int32)*(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                   a3 +
                                                                               8LL) +
                                                                    12LL * v5 +
                                                                    4)) +
                                24LL) +
                     608LL) <
        (signed __int32)*(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                   a3 +
                                                                               8LL) +
                                                                    12LL * *a1 +
                                                                    4)) +
                                24LL) +
                     608LL)) {
      *a1 = v5;
      *(a2 - 1) = v6;
    }
    return true;
  }
LABEL_13:
  v15 = *a1;
  v16 = a1[1];
  v17 = a1 + 2;
  v18 = a1[2];
  v19 = *(_QWORD*)(*(_QWORD*)a3 + 8LL);
  v20 = *(_QWORD*)(GameData_21c99b8 + 64);
  v21 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v20 +
                                         8LL * *(unsigned __int16*)(v19 +
                                                                    12LL * v16 +
                                                                    4)) +
                              24LL) +
                   608LL);
  v22 = *a1;
  v23 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v20 +
                                         8LL * *(unsigned __int16*)(v19 +
                                                                    12LL * *a1 +
                                                                    4)) +
                              24LL) +
                   608LL);
  v24 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v20 +
                                         8LL * *(unsigned __int16*)(v19 +
                                                                    12LL * v18 +
                                                                    4)) +
                              24LL) +
                   608LL);
  if (v21 >= v23) {
    if (v24 < v21) {
      a1[1] = v18;
      a1[2] = v16;
      if ((signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                             8LL *
                                                 *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                     a3 +
                                                                                 8LL) +
                                                                      12LL *
                                                                          v18 +
                                                                      4)) +
                                  24LL) +
                       608LL) <
          (signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                             8LL *
                                                 *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                     a3 +
                                                                                 8LL) +
                                                                      12LL *
                                                                          v22 +
                                                                      4)) +
                                  24LL) +
                       608LL)) {
        *a1 = v18;
        a1[1] = v15;
      }
    }
  }
  else {
    if (v24 >= v21) {
      *a1 = v16;
      a1[1] = v15;
      if ((signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                             8LL *
                                                 *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                     a3 +
                                                                                 8LL) +
                                                                      12LL *
                                                                          v18 +
                                                                      4)) +
                                  24LL) +
                       608LL) >=
          (signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                             8LL *
                                                 *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                     a3 +
                                                                                 8LL) +
                                                                      12LL *
                                                                          v22 +
                                                                      4)) +
                                  24LL) +
                       608LL)) {
        goto LABEL_28;
      }
      a1[1] = v18;
    }
    else {
      *a1 = v18;
    }
    a1[2] = v15;
  }
LABEL_28:
  v28 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v29 = GameData_21c99b8;
  v30 = 12;
  v31 = 0;
  while (1) {
    v32 = *v28;
    v33 = *v17;
    if ((signed __int32)*(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v29 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                   a3 +
                                                                               8LL) +
                                                                    12LL *
                                                                        *v28 +
                                                                    4)) +
                                24LL) +
                     608LL) <
        (signed __int32)*(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v29 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                   a3 +
                                                                               8LL) +
                                                                    12LL * v33 +
                                                                    4)) +
                                24LL) +
                     608LL)) {
      break;
    }
  LABEL_30:
    v17 = v28++;
    v30 += 4;
    if (v28 == a2) {
      return true;
    }
  }
  v34 = v30;
  while (1) {
    v35 = v34 - 4;
    *(int*)((char*)a1 + v34) = v33;
    if (v34 == 4) {
      break;
    }
    v33 = *(int*)((char*)a1 + v34 - 8);
    v36 = *(_QWORD*)(*(_QWORD*)a3 + 8LL);
    v37 = *(_QWORD*)(GameData_21c99b8 + 64);
    v38 =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v37 +
                                         8LL * *(unsigned __int16*)(v36 +
                                                                    12LL * v32 +
                                                                    4)) +
                              24LL) +
                   608LL);
    LODWORD(v37) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v37 +
                                         8LL * *(unsigned __int16*)(v36 +
                                                                    12LL * v33 +
                                                                    4)) +
                              24LL) +
                   608LL);
    v34 = v35;
    if (v38 >= (int)v37) {
      v39 = (int*)((char*)a1 + v35);
      goto LABEL_37;
    }
  }
  v39 = a1;
LABEL_37:
  ++v31;
  *v39 = v32;
  if (v31 != 8) {
    v29 = GameData_21c99b8;
    goto LABEL_30;
  }
  return v28 + 1 == a2;
}

__int64 game_8a08b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result;
  __int64* v11;
  __int16* v12;
  int v13;
  __int64 v14;
  __int16 v15;
  __int64 v16;
  __int16* v17;
  int v18;
  __int64 v19;
  __int16 v20;
  __int64 v21;
  __int16* v22;
  int v23;
  __int64 v24;
  __int16 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int16 v29;

  result = game_8a06e0((int*)a1, (int*)a2, (int*)a3, (int*)a4);
  v11 = GameData_212c878[0];
  v12 = (__int16*)(a4 + 4);
  if ((signed __int32)*(
          _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8LL * *(unsigned __int16*)(a5 + 4)) +
                              24LL) +
                   608LL) <
      (signed __int32)*(
          _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8LL * *(unsigned __int16*)(a4 + 4)) +
                              24LL) +
                   608LL)) {
    v13 = *(_DWORD*)a4;
    v14 = *(_QWORD*)(a4 + 4);
    *(_DWORD*)a4 = *(_DWORD*)a5;
    v15 = *(_WORD*)(a5 + 4);
    *(_BYTE*)(a4 + 6) = *(_BYTE*)(a5 + 6);
    *v12 = v15;
    *(_BYTE*)(a4 + 7) = *(_BYTE*)(a5 + 7);
    *(_DWORD*)(a4 + 8) = *(_DWORD*)(a5 + 8);
    *(_DWORD*)a5 = v13;
    *(_WORD*)(a5 + 4) = v14;
    *(_BYTE*)(a5 + 6) = BYTE2(v14);
    *(_BYTE*)(a5 + 7) = BYTE3(v14);
    v16 = *v11;
    *(_DWORD*)(a5 + 8) = HIDWORD(v14);
    v17 = (__int16*)(a3 + 4);
    if ((signed __int32)*(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 64) +
                                           8LL * *(unsigned __int16*)(a4 + 4)) +
                                24LL) +
                     608LL) <
        (signed __int32)*(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 64) +
                                           8LL * *(unsigned __int16*)(a3 + 4)) +
                                24LL) +
                     608LL)) {
      v18 = *(_DWORD*)a3;
      v19 = *(_QWORD*)(a3 + 4);
      *(_DWORD*)a3 = *(_DWORD*)a4;
      v20 = *v12;
      *(_BYTE*)(a3 + 6) = *(_BYTE*)(a4 + 6);
      *v17 = v20;
      *(_BYTE*)(a3 + 7) = *(_BYTE*)(a4 + 7);
      *(_DWORD*)(a3 + 8) = *(_DWORD*)(a4 + 8);
      *(_DWORD*)a4 = v18;
      *(_WORD*)(a4 + 4) = v19;
      *(_BYTE*)(a4 + 6) = BYTE2(v19);
      *(_BYTE*)(a4 + 7) = BYTE3(v19);
      v21 = *v11;
      *(_DWORD*)(a4 + 8) = HIDWORD(v19);
      v22 = (__int16*)(a2 + 4);
      if ((signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 64) +
                                             8LL *
                                                 *(unsigned __int16*)(a3 + 4)) +
                                  24LL) +
                       608LL) <
          (signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 64) +
                                             8LL *
                                                 *(unsigned __int16*)(a2 + 4)) +
                                  24LL) +
                       608LL)) {
        v23 = *(_DWORD*)a2;
        v24 = *(_QWORD*)(a2 + 4);
        *(_DWORD*)a2 = *(_DWORD*)a3;
        v25 = *v17;
        *(_BYTE*)(a2 + 6) = *(_BYTE*)(a3 + 6);
        *v22 = v25;
        *(_BYTE*)(a2 + 7) = *(_BYTE*)(a3 + 7);
        *(_DWORD*)(a2 + 8) = *(_DWORD*)(a3 + 8);
        *(_DWORD*)a3 = v23;
        *(_WORD*)(a3 + 4) = v24;
        *(_BYTE*)(a3 + 6) = BYTE2(v24);
        *(_BYTE*)(a3 + 7) = BYTE3(v24);
        v26 = *v11;
        *(_DWORD*)(a3 + 8) = HIDWORD(v24);
        if ((signed __int32)*(
                _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v26 + 64) +
                                               8LL * *(unsigned __int16*)(a2 +
                                                                          4)) +
                                    24LL) +
                         608LL) <
            (signed __int32)*(
                _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v26 + 64) +
                                               8LL * *(unsigned __int16*)(a1 +
                                                                          4)) +
                                    24LL) +
                         608LL)) {
          v27 = *(_DWORD*)a1;
          v28 = *(_QWORD*)(a1 + 4);
          *(_DWORD*)a1 = *(_DWORD*)a2;
          v29 = *v22;
          *(_BYTE*)(a1 + 6) = *(_BYTE*)(a2 + 6);
          *(_WORD*)(a1 + 4) = v29;
          *(_BYTE*)(a1 + 7) = *(_BYTE*)(a2 + 7);
          *(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
          *(_DWORD*)a2 = v27;
          *(_QWORD*)(a2 + 4) = v28;
        }
      }
    }
  }
  return result;
}

bool game_8a0b20(__int64 a1, __int64 a2)
{
  signed __int64 v2;
  int v3;
  __int64 v4;
  __int16 v5;
  __int64 v6;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 2);
  if (v2 <= 2) {
    if ((unsigned __int64)v2 >= 2) {
      if (v2 == 2) {
        if ((signed __int32)*(
                _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                          64) +
                                               8LL * *(unsigned __int16*)(a2 -
                                                                          8)) +
                                    24LL) +
                         608LL) <
            (signed __int32)*(
                _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                          64) +
                                               8LL * *(unsigned __int16*)(a1 +
                                                                          4)) +
                                    24LL) +
                         608LL)) {
          v3 = *(_DWORD*)a1;
          v4 = *(_QWORD*)(a1 + 4);
          *(_DWORD*)a1 = *(_DWORD*)(a2 - 12);
          v5 = *(_WORD*)(a2 - 8);
          *(_BYTE*)(a1 + 6) = *(_BYTE*)(a2 - 6);
          *(_WORD*)(a1 + 4) = v5;
          *(_BYTE*)(a1 + 7) = *(_BYTE*)(a2 - 5);
          *(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 - 4);
          *(_DWORD*)(a2 - 12) = v3;
          *(_QWORD*)(a2 - 8) = v4;
        }
        return true;
      }
      goto LABEL_11;
    }
    return true;
  }
  switch (v2) {
  case 3LL:
    game_8a0490((int*)a1, (int*)(a1 + 12), (int*)(a2 - 12));
    return true;
  case 4LL:
    game_8a06e0((int*)a1, (int*)(a1 + 12), (int*)(a1 + 24), (int*)(a2 - 12));
    return true;
  case 5LL:
    game_8a08b0(a1, a1 + 12, a1 + 24, a1 + 36, a2 - 12);
    return true;
  default:
    break;
  }
LABEL_11:
  v6 = a1 + 24;
  game_8a0490((int*)a1, (int*)(a1 + 12), (int*)(a1 + 24));
  v9 = a1 + 36;
  if (a1 + 36 == a2) {
    return true;
  }
  v10 = 0;
  v11 = 0;
  v12 = GameData_212c878[0];
  v13 = *GameData_212c878[0];
  while (
      (signed __int32)*(
          _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) +
                                         8LL * *(unsigned __int16*)(v9 + 4)) +
                              24LL) +
                   608LL) >=
      (signed __int32)*(
          _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) +
                                         8LL * *(unsigned __int16*)(v6 + 4)) +
                              24LL) +
                   608LL)) {
  LABEL_13:
    v6 = v9;
    v9 += 12;
    v10 += 12;
    if (v9 == a2) {
      return true;
    }
  }
  v14 = *(_QWORD*)(v9 + 4);
  v15 = *(_DWORD*)v9;
  v16 = v10;
  while (1) {
    v17 = a1 + v16;
    *(_QWORD*)(v17 + 36) = *(_QWORD*)(a1 + v16 + 24);
    *(_DWORD*)(v17 + 44) = *(_DWORD*)(a1 + v16 + 32);
    if (v16 == -24) {
      break;
    }
    v16 -= 12;
    if ((signed __int32)*(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                           8LL * (unsigned __int16)v14) +
                                24LL) +
                     608LL) >=
        (signed __int32)*(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v17 + 16)) +
                                24LL) +
                     608LL)) {
      v18 = a1 + v16 + 36;
      goto LABEL_20;
    }
  }
  v18 = a1;
LABEL_20:
  *(_DWORD*)v18 = v15;
  *(_WORD*)(v17 + 28) = v14;
  ++v11;
  *(_BYTE*)(v17 + 30) = BYTE2(v14);
  *(_BYTE*)(v18 + 7) = BYTE3(v14);
  *(_DWORD*)(v18 + 8) = HIDWORD(v14);
  if (v11 != 8) {
    v13 = *v12;
    goto LABEL_13;
  }
  return v9 + 12 == a2;
}

void game_8b11c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  unsigned __int16* v7;
  unsigned __int16* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v15;
  int v16;
  __int64 v17;
  char v18;
  __int64 v19;
  int v20;
  __int64 v21;
  char v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    _BYTE v28[32];
    _BYTE* v29;
  } v28_;
  struct {
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v30_;
  struct {
    _QWORD v33[4];
    _QWORD* v34;
  } v33_;

  if (*(_BYTE*)(a1 + 256) == 1) {
    game_8ae640((__int64*)(a1 + 152), *(_QWORD*)(a1 + 200), 1);
    return;
  }
  v2 = *(_QWORD*)(a1 + 200);
  if (v2 == 0) {
    goto LABEL_53;
  }
  v3 = *(_QWORD*)(v2 + 440);
  v4 = v3 != 0 ? *(_BYTE*)(v3 + 16) : 9;
  if (((1 << v4) & 0xF1) == 0) {
    goto LABEL_53;
  }
  v5 = *(_QWORD*)(a1 + 176);
  v30_.v31 = 0;
  v30_.v32 = 0;
  v30_.v30 = 0;
  v33_.v34 = v33_.v33;
  *(_QWORD*)(a1 + 184) = v5;
  v33_.v33[0] = GameData_1fa9248;
  v33_.v33[1] = a1 + 176;
  game_UnitItemList_EachItem((_WORD*)(v2 + 828), (__int64)v33_.v33);
  if (v33_.v34 == v33_.v33) {
    v6 = 32;
  }
  else {
    if (v33_.v34 == nullptr) {
      goto LABEL_13;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v33_.v34 + v6))((__int64)v33_.v34);
LABEL_13:
  v7 = *(unsigned __int16**)(a1 + 152);
  v8 = *(unsigned __int16**)(a1 + 160);
  if (v7 != v8) {
    v9 = GameData_212c878[0];
    do {
      v11 = *(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * *v7);
      v12 = *(unsigned __int8*)(v11 + 73);
      v13 = ((0x10000000000LL << *(_BYTE*)(v11 + 72)) | (1LL << v12)) &
            0xFFBFFFFFFFA39FFFLL;
      if (v12 == 24 || v13 == 0) {
        v15 = *(_QWORD*)(a1 + 200);
        v33_.v33[0] = *(_QWORD*)v7;
        v16 = HIBYTE(LODWORD(v33_.v33[0]));
        BYTE3(v33_.v33[0]) &= ~1u;
        if (v15 != 0 && (v17 = *(_QWORD*)(v15 + 440)) != 0) {
          v18 = *(_BYTE*)(v17 + 16);
        }
        else {
          v18 = 9;
        }
        if (((1 << v18) & 0xF1) != 0) {
          BYTE3(v33_.v33[0]) = v16 & 0xFC;
        }
        v10 = &v30_.v30;
      }
      else {
        v19 = *(_QWORD*)(a1 + 200);
        v33_.v33[0] = *(_QWORD*)v7;
        v20 = HIBYTE(LODWORD(v33_.v33[0]));
        BYTE3(v33_.v33[0]) &= ~1u;
        if (v19 != 0 && (v21 = *(_QWORD*)(v19 + 440)) != 0) {
          v22 = *(_BYTE*)(v21 + 16);
        }
        else {
          v22 = 9;
        }
        if (((1 << v22) & 0xF1) != 0) {
          BYTE3(v33_.v33[0]) = v20 & 0xFC;
        }
        v10 = (__int64*)(a1 + 176);
      }
      game_8aef60(v10, (unsigned __int16*)v33_.v33);
      v7 += 4;
    } while (v7 != v8);
  }
  v23 = *(_QWORD*)(a1 + 184) - *(_QWORD*)(a1 + 176);
  if (v23 >= 0x31) {
    v24 = *(_QWORD*)(a1 + 200);
    v33_.v34 = nullptr;
    v28_.v29 = nullptr;
    game_menu_SendUnitItemMenu_CreateBind(a1, v24, a1 + 176, 1, 0,
                                          (__int64)v33_.v33, (__int64)v28_.v28);
    if (v28_.v29 == v28_.v28) {
      v25 = 32;
    }
    else {
      if (v28_.v29 == nullptr) {
        goto LABEL_41;
      }
      v25 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v28_.v29 + v25))((__int64)v28_.v29);
  LABEL_41:
    if (v33_.v34 == v33_.v33) {
      v26 = 32;
    }
    else {
      if (v33_.v34 == nullptr) {
      LABEL_46:
        game_8ae640(&v30_.v30, 0, 0);
        goto LABEL_47;
      }
      v26 = 40;
    }
    (*(void (**)(__int64))(*v33_.v34 + v26))((__int64)v33_.v34);
    goto LABEL_46;
  }
LABEL_47:
  if (v30_.v30 != 0) {
    v30_.v31 = v30_.v30;
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  v30_.v30);
  }
  if (v23 <= 0x30) {
    v2 = *(_QWORD*)(a1 + 200);
  LABEL_53:
    game_8ae640((__int64*)(a1 + 152), v2, 0);
  }
}

void game_8c3c80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  __int64* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  char* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    _BYTE v21[32];
    _BYTE* v22;
  } v21_;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
  } v25_;
  struct {
    __int64 (**v27)();
    __int64 (**v28)();
    __int64* v29;
    char gap184_[8];
    __int64** v30;
  } v27_;
  int v31;

  *(_QWORD*)(a1 + 160) = *(_QWORD*)(a1 + 152);
  if (GameData_21ca2f8 == 0) {
    return;
  }
  v31 = 0;
  v23_.v24 = v23_.v23;
  v23_.v23[0] = GameData_1faa450;
  v23_.v23[1] = a1;
  v25_.v25[0] = GameData_1f96068;
  v25_.v25[1] = GameData_21ca2f8;
  v25_.v25[2] = v23_.v23;
  v27_.v30 = (__int64**)&v27_.v27;
  v25_.v26 = v25_.v25;
  v27_.v27 = GameData_1f95fe8;
  v27_.v28 = (__int64 (**)(void))&v31;
  v27_.v29 = v25_.v25;
  Situation_764060(a1, (__int64)&v27_.v27);
  if (v27_.v30 == (__int64**)&v27_.v27) {
    v2 = 4;
  }
  else {
    if (v27_.v30 == nullptr) {
      goto LABEL_7;
    }
    v2 = 5;
  }
  ((void (*)(void*))(*v27_.v30)[v2])(v27_.v30);
LABEL_7:
  if (v25_.v26 == v25_.v25) {
    v3 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      goto LABEL_12;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v25_.v26 + v3))((__int64)v25_.v26);
LABEL_12:
  if (v23_.v24 == v23_.v23) {
    v4 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_17;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v23_.v24 + v4))((__int64)v23_.v24);
LABEL_17:
  v5 = *(__int64**)(a1 + 152);
  v6 = *(__int64**)(a1 + 160);
  if (v6 == v5) {
    return;
  }
  v20 = a1;
  v7 = 0;
  v27_.v28 = nullptr;
  v27_.v29 = nullptr;
  v27_.v27 = nullptr;
  do {
    v8 = *v5;
    v9 = *((_DWORD*)v5 + 2);
    if (v7 < (unsigned __int64)v27_.v29) {
      *(_QWORD*)v7 = v8;
      *(_DWORD*)(v7 + 8) = v9;
      *(_DWORD*)(v7 + 12) = 0;
      *(_WORD*)(v7 + 16) = 1;
      v7 += 24LL;
    }
    else {
      v10 = (__int64*)v27_.v27;
      v11 = v7 - (_QWORD)v27_.v27;
      v12 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v7 - (_QWORD)v27_.v27) >> 3) + 1;
      if (v12 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_8c43b0();
      }
      if (0x5555555555555556LL * (((char*)v27_.v29 - (char*)v27_.v27) >> 3) >
          v12) {
        v12 = 0x5555555555555556LL * (((char*)v27_.v29 - (char*)v27_.v27) >> 3);
      }
      if (0xAAAAAAAAAAAAAAABLL * (((char*)v27_.v29 - (char*)v27_.v27) >> 3) >=
          0x555555555555555LL) {
        v13 = 0xAAAAAAAAAAAAAAALL;
      }
      else {
        v13 = v12;
      }
      if (v13 != 0) {
        if (v13 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_60a210();
        }
        v14 = (__int64*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                       24 * v13, 16, 0);
      }
      else {
        v14 = nullptr;
      }
      v15 = (char*)v14 + v11;
      *(_QWORD*)v15 = v8;
      v16 = &v14[3 * v13];
      *((_DWORD*)v15 + 2) = v9;
      *((_DWORD*)v15 + 3) = 0;
      v7 = (unsigned __int64)v14 + v11 + 24;
      *((_WORD*)v15 + 8) = 1;
      memcpy((__int64)v14, (__int64)v10, v11);
      v27_.v27 = (__int64 (**)(void))v14;
      v27_.v28 = (__int64 (**)(void))v7;
      v27_.v29 = v16;
      if (v10 != nullptr) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v10);
      }
    }
    v5 += 2;
    v27_.v28 = (__int64 (**)(void))v7;
  } while (v5 != v6);
  v21_.v22 = nullptr;
  game_telop_17549a0(v20, (__int64**)&v27_.v27, 0, (__int64)v21_.v21);
  if (v21_.v22 == v21_.v21) {
    v18 = 32;
  }
  else {
    if (v21_.v22 == nullptr) {
      goto LABEL_41;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v21_.v22 + v18))((__int64)v21_.v22);
LABEL_41:
  if (v27_.v27 != nullptr) {
    v27_.v28 = v27_.v27;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  (__int64)v27_.v27);
  }
}

__int64 game_90c8d0(__int64 a1)
{
  int v1;
  _DWORD* v2;
  int v3;

  v1 = *(_DWORD*)(a1 + 4);
  v2 = *(_DWORD**)(*(_QWORD*)(a1 + 16) + 24LL);
  v3 = v2[105];
  if (v3 > 2 && (signed __int32)v2[103] <= v1) {
    return 3;
  }
  if (v3 > 1 && (signed __int32)v2[102] <= v1) {
    return 2;
  }
  if (v3 >= 1 && (signed __int32)v2[101] <= v1) {
    return 1;
  }
  else {
    return (unsigned int)v2[104];
  }
}

__int64 game_90c930(__int64 a1)
{
  int v1;
  _DWORD* v2;
  int v3;
  __int64 v7;

  v1 = *(_DWORD*)(a1 + 4);
  v2 = *(_DWORD**)(*(_QWORD*)(a1 + 16) + 24LL);
  v3 = v2[105];
  if (v3 > 2 && (signed __int32)v2[103] <= v1) {
    if ((unsigned int)v3 <= 3) {
      return 0;
    }
    v7 = 4;
  }
  else {
    if (v3 <= 1 || (signed __int32)v2[102] > v1) {
      if (v3 < 1 || (signed __int32)v2[101] > v1) {
        if ((signed __int32)v2[104] >= v3) {
          return 0;
        }
      }
      else if (v3 <= 1) {
        return 0;
      }
      if (v3 >= 1 && (signed __int32)v2[101] <= v1) {
        v7 = 2;
      }
      else {
        v7 = (int)v2[104] + 1LL;
      }
      return (unsigned int)v2[v7 + 100];
    }
    if ((unsigned int)v3 <= 2) {
      return 0;
    }
    v7 = 3;
  }
  return (unsigned int)v2[v7 + 100];
}

bool game_90cb60(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  int v4;
  _DWORD* v5;
  int v6;
  bool v9;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  signed int v16;

  v2 = game_820d50(1);
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v2);
    if (v3 != 0 && *(_DWORD*)(v3 + 32) != 0) {
      return false;
    }
  }
  v4 = *(_DWORD*)(a1 + 4);
  v5 = *(_DWORD**)(*(_QWORD*)(a1 + 16) + 24LL);
  v6 = v5[105];
  if ((v6 <= 2 || (signed __int32)v5[103] > v4) &&
      (v6 <= 1 || (signed __int32)v5[102] > v4)) {
    v9 = v6 >= 1 && (signed __int32)v5[101] <= v4;
    if (!v9 && v5[104] == 0) {
      return false;
    }
  }
  if (GameRoutine_90c9e0(a1)) {
    if (GameData_22400f8 == 0) {
      return false;
    }
    if (*(_BYTE*)(GameData_22400f8 + 8) == 0 ||
        (signed __int32)*(_DWORD*)(GameData_22400f8 + 824) < 1) {
      return false;
    }
  }
  v12 = *(_QWORD*)(a1 + 16);
  if (v12 != 0) {
    v13 = CausationFile_9dbdc0(*(_QWORD*)(a1 + 16));
    if (game_GameModeData_instance_ != 0) {
      v14 = 90;
      if (*(_BYTE*)(game_GameModeData_instance_ + 13) == 0) {
        v14 = 88;
      }
      v15 = 92;
      if (*(_BYTE*)(game_GameModeData_instance_ + 13) != 2) {
        v15 = v14;
      }
    }
    else {
      v15 = 88;
    }
    v16 = *(unsigned __int16*)(v12 + v15);
    if ((_BYTE)v13 != 0) {
      v16 = GameRoutine_9db9e0(v13, v16);
    }
  }
  else {
    v16 = 0;
  }
  return v16 <= ((*(_DWORD*)(*(_QWORD*)(a1 + 24) + 104LL) -
                  *(_DWORD*)(*(_QWORD*)(a1 + 24) + 108LL)) &
                 ~((*(_DWORD*)(*(_QWORD*)(a1 + 24) + 104LL) -
                    *(_DWORD*)(*(_QWORD*)(a1 + 24) + 108LL)) >>
                   31));
}

__int64 game_90fd20(__int64 a1, _DWORD* a2)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  _DWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  char v29;
  _WORD* v30;
  __int64 v31;
  int v32;
  int v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  int v37;
  __int64 v38;
  unsigned int v39;
  unsigned __int8 v40;
  unsigned int v41;
  __int64 v42;
  float v43;
  __int64* v44;
  int v45;
  unsigned int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  char v53;
  __int64 v54;
  char v55;
  __int64 v56;
  __int64 v57;
  bool v58;
  _BYTE* v59;
  char v60;
  char v61;
  struct {
    _QWORD v62[4];
    _QWORD* v63;
  } v62_;
  __int64 v64;

  result = 0;
  v64 = a1;
  if (a1 == 0) {
    return result;
  }
  v4 = GameData_212c880[0];
  v5 = *a2 & 0xFFF;
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v5);
  if (*(_QWORD*)(v6 + 664) == 0) {
    return result;
  }
  if ((*a2 & 0xFFF) == 0 ||
      (GameRoutine_6fc510(
           *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v5)) &
       1) != 0) {
    return 0;
  }
  if (*(_BYTE*)(v6 + 273) != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8 * (*a2 & 0xFFFLL));
    v9 = *(unsigned __int8*)(v8 + 104);
    v10 = *(unsigned __int8*)(v8 + 273);
    v11 = (unsigned int)(v9 - 5) >= 2 ? 0 : (*a2 >> 19) & 0x1F;
    if (v11 - ((*a2 >> 12) & 0x7F) + v10 < 1) {
      return 0;
    }
  }
  if (!GameRoutine_6fc7a0(v6, (_QWORD*)(a1 + 1744))) {
    return 0;
  }
  v12 = *(_QWORD*)(*v4 + 64);
  v13 = *a2 & 0xFFF;
  v14 = *(_QWORD*)(*(_QWORD*)(v12 + 8 * v13) + 648LL);
  if (v14 != 0) {
    v15 = *(unsigned __int16*)(v14 + 16);
    v16 = *(_QWORD*)(a1 + 1744);
    v17 = v15 & 0xFFF;
    v18 = (v15 >> 5) & 0x7F;
    v19 = *(_QWORD*)(a1 + 1752) - v16;
    LODWORD(v62_.v62[0]) = v17;
    if (v18 + 1 > (unsigned __int64)(v19 >> 2) ||
        ((*(_DWORD*)(v16 + 4LL * (unsigned int)v18) >> v17) & 1) == 0 ||
        !game_HasActiveSkill_843420(v62_.v62, a1 + 1744)) {
      return 0;
    }
    v20 = a2;
    v12 = *(_QWORD*)(*v4 + 64);
    v13 = *a2 & 0xFFF;
  }
  else {
    v20 = a2;
  }
  v21 = *(_QWORD*)(v12 + 8 * v13);
  v22 = *(unsigned __int16*)(v21 + 656);
  if (*(_WORD*)(v21 + 656) == 0) {
    goto LABEL_30;
  }
  v23 = (__int64*)(*(_QWORD*)(v21 + 664) + 8LL);
  while (1) {
    v25 = *v23;
    v23 += 2;
    v24 = v25;
    if (v25 != 0 && *(_BYTE*)(v24 + 57) == 14) {
      break;
    }
    if (--v22 == 0) {
      goto LABEL_30;
    }
  }
  v26 = *(_QWORD*)(GameData_21cd158 + 16);
  v27 = *(_QWORD**)(v26 + 18872);
  v28 = *(_QWORD**)(v26 + 18880);
  if (v27 == v28) {
  LABEL_30:
    v29 = 0;
  }
  else {
    v29 = 0;
    do {
      v30 = (_WORD*)*v27;
      if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*v27 + 216LL))(*v27) == a1) {
        if (((*(__int64 (**)(_WORD*))(*(_QWORD*)v30 + 480LL))(v30) & 1) != 0) {
          v30[10] |= 2u;
        }
        else {
          (*(void (**)(_WORD*))(*(_QWORD*)v30 + 416LL))(v30);
        }
        v29 = 1;
        *(_BYTE*)(v26 + 92848) = 1;
      }
      ++v27;
    } while (v27 != v28);
    v20 = a2;
    v12 = *(_QWORD*)(*v4 + 64);
    v13 = *a2 & 0xFFF;
  }
  v31 = *(_QWORD*)(v12 + 8 * v13);
  v32 = *(char*)(a1 + 584);
  v33 = *(char*)(a1 + 585);
  v61 = v29 & 1;
  v34 = *(_QWORD*)(v31 + 608);
  if (v34 == 0) {
    v60 = v29;
    if (*(_BYTE*)(v31 + 634) != 0) {
      v43 = (float)*(unsigned __int8*)(v31 + 634);
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v44 = game_map_MapRandom_instance__ptr[0];
      v45 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 8);
      v46 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
      v47 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL)) ^
            (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((__int128*)0x10LL))
             << 11);
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL)) =
          *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v44 + 4) = v45;
      v48 = (v47 >> 8) ^ (v46 >> 19) ^ v47 ^ v46;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v44 + 8) = v46;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v44 + 12) = v48;
      v49 = v48 & 0x7FFFFFFF;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      if ((float)(v43 * 0x1.3880000000000p+13f) <= (float)(v49 % 0xF4240)) {
        goto LABEL_55;
      }
      LODWORD(v13) = *a2 & 0xFFF;
    }
    if ((_DWORD)v13 != 0) {
      v50 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (unsigned int)v13);
      v51 = *(unsigned __int16*)(v50 + 656);
      if (*(_WORD*)(v50 + 656) != 0) {
        v52 = 8;
        v53 = 0;
        v54 = *GameData_212cfb8[0];
        do {
          v55 = GameRoutine_7c91c0(*(_QWORD*)(v54 + 16), v32, v33, a1,
                                   *(_QWORD*)(*(_QWORD*)(v50 + 664) + v52));
          --v51;
          v52 += 16;
          v53 |= v55;
        } while (v51 != 0);
      LABEL_56:
        v61 = (v60 | v53) & 1;
        if (v61 != 0) {
          goto LABEL_65;
        }
        return 0;
      }
    }
  LABEL_55:
    v53 = 0;
    goto LABEL_56;
  }
  v35 = v62_.v62;
  v62_.v62[0] = GameData_1fad598;
  v62_.v62[1] = &v61;
  v62_.v63 = v62_.v62;
  v62_.v62[2] = &v64;
  v62_.v62[3] = v20;
  if ((_DWORD)v13 == 0) {
    goto LABEL_61;
  }
  v36 = *(_QWORD*)(v12 + 8 * v13);
  v37 = *(unsigned __int8*)(v36 + 280);
  if (*(_BYTE*)(v36 + 280) == 0) {
    v37 = *(_DWORD*)(a1 + 592);
    if (v37 == 0) {
      v35 = v62_.v62;
      goto LABEL_61;
    }
  }
  v38 = *(_QWORD*)(v34 + 24);
  if (v38 == 0) {
    v42 = 32;
    v35 = v62_.v62;
    goto LABEL_62;
  }
  v58 = *(_BYTE*)(v36 + 105) == 3;
  v39 = v37 - 1;
  v40 = v58;
  if (v39 >= 3) {
    v39 = 3;
  }
  v41 = v37 <= 0 ? 0 : v39;
  GameRoutine_801020(v38 + 48LL * v41, a1, (__int64)a2, v32, v33, v40,
                     (__int64)v62_.v62);
  v35 = v62_.v63;
  if (v62_.v63 == v62_.v62) {
  LABEL_61:
    v42 = 32;
    goto LABEL_62;
  }
  if (v62_.v63 != nullptr) {
    v42 = 40;
  LABEL_62:
    (*(void (**)(__int64))(*v35 + v42))((__int64)v35);
  }
  if (v61 != 1) {
    return 0;
  }
  a1 = v64;
LABEL_65:
  Trick_7d5160(*(_QWORD*)(*GameData_212cfb8[0] + 16), 1);
  if ((*(_BYTE*)(GameData_21ca2f8 + 21) & 2) != 0 &&
      *(_DWORD*)(*(_QWORD*)(GameData_21ca300 + 160) + 528LL) == 0) {
    v62_.v62[0] = GameData_1fb24f8;
    v62_.v63 = v62_.v62;
    game_9903e0((__int64)v62_.v62);
    if (v62_.v63 == v62_.v62) {
      v56 = 32;
      goto LABEL_73;
    }
    if (v62_.v63 != nullptr) {
      v56 = 40;
    LABEL_73:
      (*(void (**)(__int64))(*v62_.v63 + v56))((__int64)v62_.v63);
    }
  }
  v57 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (*a2 & 0xFFF));
  v58 = *(_WORD*)(v57 + 656) == 0 || *(_QWORD*)(v57 + 856) == 0;
  if (v58) {
    v59 = nullptr;
  }
  else {
    v59 = *(_BYTE**)(v57 + 856);
  }
  GameHr_7aa840(v59, a1);
  if (GameData_22400f8 == 0) {
    return 1;
  }
  result = 1;
  if (*(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
  }
  return result;
}

__int64 game_989ea0(__int64 result, int a2, __int64 a3)
{
  _QWORD* v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64** v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  const char* v14;
  __int64 v15;
  unsigned __int8 explicit;
  int* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  char v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int32x2_t v27;
  unsigned int v28;
  __int64 v29;
  int32x4_t v30;
  float32x2_t v31;
  float32x4_t v32;
  float v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  unsigned int i;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 j;
  __int64 v61;
  const char* v62;
  int v63;
  float32x4_t v64;
  _BYTE v65[16];
  struct {
    float32x4_t v66;
    float32x4_t v67;
    float32x4_t v68;
    float32x4_t v69;
  } v66_;
  struct {
    __int64* v70;
    unsigned __int64 v71;
    __int64 v72;
    int v73;
    char gap140_[4];
    float32x4_t v74;
    __int128 v75;
    __int64 v76;
    __int64 v77;
  } v70_;

  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (result == 0) {
    return result;
  }
  v3 = *(_QWORD**)(result + 24);
  v4 = v3[1];
  if (v4 == 0 || v3[3] == 0) {
    return result;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = a2;
    if (v4 <= a2) {
      v7 = a2 % v4;
    }
  }
  else {
    v7 = v6 & a2;
  }
  v8 = *(__int64***)(*v3 + 8 * v7);
  if (v8 == nullptr) {
    return result;
  }
  v9 = *v8;
  if (v9 == nullptr) {
    return result;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v11 = v9[1];
      if (v11 == a2) {
        if (*((_DWORD*)v9 + 4) == a2) {
          goto LABEL_26;
        }
      }
      else if ((v11 & v6) != v7) {
        return result;
      }
      v9 = (__int64*)*v9;
      if (v9 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == a2) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      return result;
    }
  LABEL_15:
    v9 = (__int64*)*v9;
    if (v9 == nullptr) {
      return result;
    }
  }
  if (*((_DWORD*)v9 + 4) != a2) {
    goto LABEL_15;
  }
LABEL_26:
  if (a3 != 0) {
    v12 = v9[3];
    if (v12 != 0) {
      result = game_868630(),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((result & 1) == 0) {
        v14 = *(const char**)(v12 + 128);
        v15 = a3;
        if (v14 != nullptr) {
          explicit = atomic_load_explicit(
              (atomic_uchar* volatile)GameData_212df10, memory_order_acquire);
          v17 = GameData_212df08;
          if ((explicit & 1) == 0) {
            v62 = v14;
            v63 = __cxa_guard_acquire((__int64)GameData_212df10),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v14 = v62;
            v15 = a3;
            if (v63 != 0) {
              *v17 = wld_Crc32(0, "ModelModule", 0xBu),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              __cxa_guard_release((__int64)GameData_212df10),
                  v22 = COERCE_AS(
                      __typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v50 = COERCE_AS(
                      __typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v14 = v62;
              v15 = a3;
            }
          }
          v18 = *(_QWORD*)(v15 + 512);
          v19 = v18;
          while (v19 != *(_QWORD*)(v15 + 504)) {
            v20 = *(_DWORD*)(v19 - 16);
            v19 -= 16;
            v18 -= 16;
            if (v20 == *v17) {
              if (*(_QWORD*)(v15 + 512) != v18) {
                v21 = *(_QWORD*)(v18 + 8);
                if (v21 != 0) {
                  GameRoutine_a7f140(v21, (__int64)&v66_.v66, v14),
                      v22 = COERCE_AS(
                          __typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                      v50 = COERCE_AS(
                          __typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v15 = a3;
                  if ((v22 & 1) != 0) {
                    goto LABEL_38;
                  }
                }
              }
              break;
            }
          }
        }
        v23 = *(_QWORD*)(v15 + 472);
        LANES128(v66_.v68).n128_u64[0] = *(_QWORD*)(v15 + 464);
        LANES128(v66_.v68).n128_u64[1] = v23;
        v24 = *(_QWORD*)(v15 + 488);
        LANES128(v66_.v69).n128_u64[0] = *(_QWORD*)(v15 + 480);
        LANES128(v66_.v69).n128_u64[1] = v24;
        v25 = *(_QWORD*)(v15 + 440);
        LANES128(v66_.v66).n128_u64[0] = *(_QWORD*)(v15 + 432);
        LANES128(v66_.v66).n128_u64[1] = v25;
        v26 = *(_QWORD*)(v15 + 456);
        LANES128(v66_.v67).n128_u64[0] = *(_QWORD*)(v15 + 448);
        LANES128(v66_.v67).n128_u64[1] = v26;
      LABEL_38:
        LANES64(v27).n64_u32[1] = LANES128(v66_.v69).n128_u32[1];
        result = *(_QWORD*)(v12 + 40);
        v64 = v66_.v69;
        if (result != 0 && *(_BYTE*)result != 0) {
          v70_.v71 = LANES128(v66_.v69).n128_u64[0];
          LODWORD(v70_.v72) = LANES128(v66_.v69).n128_u32[2];
          v70_.v70 = GameData_212d1e0[0] + 2;
          result = X8CALL_X0(__int64,
                             game_sound_PlaySeAt((void*)((__int64)v65), result,
                                                 (__int64)&v70_.v70)),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v15 = a3;
        }
        v28 = *(_DWORD*)(v15 + 284) - 1;
        if (v28 > 4) {
          v29 = 88;
        }
        else {
          v29 = (__int64)GameData_1b561b8[v28];
        }
        LANES64(v27).n64_u32[0] = *(_DWORD*)(v12 + v29);
        if (LANES64(v27).n64_f32[0] != 0x1.0000000000000p+0f) {
          v30 = vdupq_lane_s32(v27, 0);
          LANES64(v31).n64_u32[0] = 0;
          LANES128(v32).n128_u64[0] = 0;
          LANES64(v31).n64_u32[1] = LANES128(v30).n128_u32[1];
          v33 = LANES128(v30).n128_f32[0];
          LANES128(v32).n128_u64[1] = LANES128(v30).n128_u32[2];
          v34 = v66_.v66;
          v35 = v66_.v67;
          v36 = vmlaq_f32(vmlaq_f32(vmulq_n_f32(v66_.v66, v33),
                                    COERCE_AS(float32x4_t, 0), v66_.v67),
                          COERCE_AS(float32x4_t, 0), v66_.v68);
          v37 = vmlaq_f32(
              vmlaq_lane_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v66_.v66),
                             v66_.v67, v31, 1),
              COERCE_AS(float32x4_t, 0), v66_.v68);
          v66_.v66 = v36;
          v66_.v67 = v37;
          v38 = vmulq_f32(COERCE_AS(float32x4_t, 0), v34);
          v39 = vaddq_f32(
              v66_.v69,
              vmlaq_f32(vmlaq_f32(vmulq_f32(v34, COERCE_AS(float32x4_t, 0)),
                                  COERCE_AS(float32x4_t, 0), v35),
                        COERCE_AS(float32x4_t, 0), v66_.v68));
          v66_.v68 = vmlaq_laneq_f32(
              vmlaq_f32(v38, COERCE_AS(float32x4_t, 0), v35), v66_.v68, v32, 2);
          v66_.v69 = v39;
        }
        if (v28 > 4) {
          v40 = 72;
        }
        else {
          v40 = (__int64)*(&GameData_1b561e0 + v28);
        }
        v41 = v12 + v40;
        v42 = *(unsigned __int16*)(v12 + v40);
        if (*(_WORD*)(v12 + v40) != 0) {
          v43 = 0;
          v44 = (__int64*)GameData_212c540;
          do {
            v45 = *(_QWORD*)(*(_QWORD*)(v41 + 8) + 8 * v43);
            v70_.v70 = nullptr;
            v70_.v71 = 0;
            v46 = (_QWORD*)*eft_g_effectSystem_ptr[0];
            v70_.v72 = v45;
            v70_.v73 = 8;
            v47 = *v44;
            v48 = v44[1];
            v70_.v74 = v64;
            v70_.v75 = GameData_1a837f0;
            v70_.v76 = v47;
            v70_.v77 = v48;
            v49 = Manager_bc6460(v46, (__int64)&v70_.v70, 1),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            result = GameHr_14a10d0(&v70_.v70, (__int64)v49, v50,
                                    (__int64)&GameData_1a9f09e),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v51 = (__int64)v70_.v70;
            v52 = *v70_.v70;
            if (*v70_.v70 != 0 &&
                *(_DWORD*)(v52 + 16) == *((_DWORD*)v70_.v70 + 2)) {
              v53 = *(_DWORD*)(v52 + 36);
              if (v53 != 0) {
                for (i = 0; i < v53; ++i) {
                  if ((int)v53 > (int)i) {
                    v55 = *(_QWORD*)(v52 + 40 + 8LL * (int)i);
                    if (v55 != 0) {
                      v57 = LANES128(v66_.v66).n128_u64[1];
                      v56 = LANES128(v66_.v66).n128_u64[0];
                      *(_WORD*)(v55 + 128) = 257;
                      *(_OWORD*)(v55 + 64) = __PAIR128__(v57, v56);
                      *(float32x4_t*)(v55 + 80) = v66_.v67;
                      *(float32x4_t*)(v55 + 112) = v66_.v69;
                      *(float32x4_t*)(v55 + 96) = v66_.v68;
                      v53 = *(_DWORD*)(v52 + 36);
                    }
                  }
                }
              }
              result = game_14a3920(v51),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v58 = *(_QWORD*)v51;
              if (*(_QWORD*)v51 != 0 &&
                  *(_DWORD*)(v58 + 16) == *(_DWORD*)(v51 + 8)) {
                v59 = *(unsigned int*)(v58 + 36);
                if ((_DWORD)v59 != 0) {
                  for (j = 0; j < v59; ++j) {
                    result = *(_QWORD*)(v58 + 40 + 8 * j);
                    if (result != 0) {
                      result = (*(__int64 (**)(__int64))(*(_QWORD*)result +
                                                         72LL))(result),
                      v22 = COERCE_AS(
                          __typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                      v50 = COERCE_AS(
                          __typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      if ((result & 1) != 0) {
                        result = GameRoutine_14a1390((__int64*)&v70_.v70, 1),
                        v22 = COERCE_AS(
                            __typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                        v50 = COERCE_AS(
                            __typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        break;
                      }
                      v59 = *(unsigned int*)(v58 + 36);
                    }
                  }
                }
              }
            }
            v61 = v70_.v71;
            if (v70_.v71 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v70_.v71 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61),
                  v22 = COERCE_AS(
                      __typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v50 = COERCE_AS(
                      __typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result = std___1___shared_weak_count___release_weak(v61),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            ++v43;
          } while (v43 != v42);
        }
      }
    }
  }
  return result;
}

__int64 game_9dc300(__int64 a1)
{
  int v2;
  unsigned __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _QWORD* v11;
  int v12;
  int v13;

  v2 = **(_DWORD**)(a1 + 24);
  v3 = (unsigned __int64*)(GameData_21f84a0 +
                           40LL * *(unsigned __int8*)(a1 + 56));
  v4 = *v3;
  if (*v3 != 0) {
    LODWORD(v4) = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v5 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v3);
      if (v5 == 0) {
        if (v2 <= 0) {
          return 0;
        }
        goto LABEL_6;
      }
      LODWORD(v4) = *(_DWORD*)(v5 + 32);
    }
  }
  if (v2 <= (int)v4) {
    return 0;
  }
LABEL_6:
  v6 = *(unsigned __int8*)(a1 + 59);
  if (*(_BYTE*)(a1 + 59) != 0) {
    v7 = GameVariable_82e4d0(1);
    v8 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0 &&
        (v9 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v7)) != 0) {
      if ((signed __int32)*(_DWORD*)(v9 + 32) < v6) {
        return 0;
      }
    }
    else if (v6 > 0) {
      return 0;
    }
    v10 = *(unsigned __int16*)(a1 + 60);
    if (v8 != 0) {
      goto LABEL_11;
    }
  }
  else {
    v8 = game_GameModeData_instance_;
    v10 = *(unsigned __int16*)(a1 + 60);
    if (game_GameModeData_instance_ != 0) {
    LABEL_11:
      if ((signed __int32)*(_DWORD*)(v8 + 80) >= v10) {
        goto LABEL_17;
      }
      return 0;
    }
  }
  if (v10 > 0) {
    return 0;
  }
LABEL_17:
  v11 = (_QWORD*)(GameData_21f84a0 + 40LL * *(unsigned __int8*)(a1 + 56));
  if (*v11 != 0) {
    game_VariableManager_SetFlag((__int64)v11, **(_DWORD**)(a1 + 24));
    v8 = game_GameModeData_instance_;
  }
  if (v8 != 0) {
    v12 = *(_DWORD*)(v8 + 80) - *(unsigned __int16*)(a1 + 60);
    v13 = v12 & ~(v12 >> 31);
    if (v13 >= 99999) {
      v13 = 99999;
    }
    *(_DWORD*)(v8 + 80) = v13;
  }
  return 1;
}

__int64 game_a0ba50()
{
  _QWORD v1[25];
  unsigned int v2;

  v2 = (unsigned int)snd_fnd_calcCrc32("AMBENV", 0);
  snd_Fade_Fade_10c830((__int64)v1, 0x1.f400000000000p+8f);
  snd_startSlotVolume_100b50((int*)&v2, (__int64)v1, 0x0.0p+0f);
  return snd_Fade_Destroy_Fade(v1);
}

__int64 game_a0c5d0()
{
  _QWORD v1[25];
  unsigned int v2;

  v2 = (unsigned int)snd_fnd_calcCrc32("AMBENV", 0);
  snd_Fade_Fade_10c830((__int64)v1, 0x1.f400000000000p+9f);
  snd_startSlotVolume_100b50((int*)&v2, (__int64)v1, 0x1.0000000000000p+0f);
  return snd_Fade_Destroy_Fade(v1);
}

__int64 game_a0cb40(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 v4;

  if ((signed __int32)*(_DWORD*)(result + 200) >=
      (int)((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 192) + 40LL) + 8LL) -
             **(_QWORD**)(*(_QWORD*)(result + 192) + 40LL)) >>
            3)) {
    v4 = *(_QWORD*)(result + 8);
    if (v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == 1) {
          LABEL_26:
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
  }
  else {
    v1 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0 &&
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 <=
            2) {
      v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v3 = (v2 & 8) != 0 ? 2 : 3;
      if ((v3 & v2) == 0) {
        if (*(_BYTE*)(result + 204) == 1) {
          *(_BYTE*)(result + 204) = 0;
          if (*(_BYTE*)(v1 + 152) != 0) {
            *(_DWORD*)(v1 + 156) |= 2u;
          }
        }
        else {
          v4 = *(_QWORD*)(result + 8);
          if (v4 != 0) {
            while (1) {
              if (*(_BYTE*)v4 == 2) {
                if (*(_DWORD*)(v4 + 32) == 1) {
                  goto LABEL_26;
                }
              }
              else if (*(_BYTE*)v4 == 0) {
                return result;
              }
              v4 += 64;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 game_a690c0(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  int v4;
  int v5;
  __int64 v9;
  __int64* v10;

  v4 = *(_DWORD*)(a2 + 4);
  v5 = *(_DWORD*)(a3 + 4);
  v9 = result;
  if (v4 >= (signed __int32)*(_DWORD*)(result + 4)) {
    if (v5 < v4) {
      result = GameRoutine_a69620((__int64*)a2, (__int64*)a3);
      if ((signed __int32)*(_DWORD*)(a2 + 4) <
          (signed __int32)*(_DWORD*)(v9 + 4)) {
        result = v9;
        v10 = (__int64*)a2;
        goto LABEL_9;
      }
    }
  }
  else {
    if (v5 < v4) {
    LABEL_5:
      v10 = (__int64*)a3;
    LABEL_9:
      result = GameRoutine_a69620((__int64*)result, v10);
      goto LABEL_10;
    }
    result = GameRoutine_a69620((__int64*)result, (__int64*)a2);
    if ((signed __int32)*(_DWORD*)(a3 + 4) <
        (signed __int32)*(_DWORD*)(a2 + 4)) {
      result = a2;
      goto LABEL_5;
    }
  }
LABEL_10:
  if ((signed __int32)*(_DWORD*)(a4 + 4) < (signed __int32)*(_DWORD*)(a3 + 4)) {
    result = GameRoutine_a69620((__int64*)a3, (__int64*)a4);
    if ((signed __int32)*(_DWORD*)(a3 + 4) <
        (signed __int32)*(_DWORD*)(a2 + 4)) {
      result = GameRoutine_a69620((__int64*)a2, (__int64*)a3);
      if ((signed __int32)*(_DWORD*)(a2 + 4) <
          (signed __int32)*(_DWORD*)(v9 + 4)) {
        return GameRoutine_a69620((__int64*)v9, (__int64*)a2);
      }
    }
  }
  return result;
}

bool game_a691e0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  int v7;
  int v8;
  __int64* v9;
  int v10;
  int v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  _BYTE* v29;
  __int64 v30;
  __int64 v32;
  struct {
    _BYTE v33[32];
    _BYTE* v34;
  } v33_;

  v3 = a1;
  v4 = (a2 - a1) >> 6;
  if (v4 > 2) {
    switch (v4) {
    case 3LL:
      v7 = *(_DWORD*)(a1 + 68);
      v8 = *(_DWORD*)(a2 - 60);
      v5 = (__int64*)(a2 - 64);
      if (v7 < (signed __int32)*(_DWORD*)(a1 + 4)) {
        if (v8 < v7) {
          goto LABEL_25;
        }
        GameRoutine_a69620((__int64*)a1, (__int64*)(a1 + 64));
        if ((signed __int32)*(_DWORD*)(a2 - 60) <
            (signed __int32)*(_DWORD*)(v3 + 68)) {
          v9 = (__int64*)(v3 + 64);
          v5 = (__int64*)(a2 - 64);
        LABEL_26:
          GameRoutine_a69620(v9, v5);
          return true;
        }
        return true;
      }
      if (v8 >= v7) {
        return true;
      }
      v6 = (__int64*)(a1 + 64);
      break;
    case 4LL:
      game_a690c0(a1, a1 + 64, a1 + 128, a2 - 64);
      return true;
    case 5LL:
      game_a690c0(a1, a1 + 64, a1 + 128, a1 + 192);
      if ((signed __int32)*(_DWORD*)(a2 - 60) >=
          (signed __int32)*(_DWORD*)(v3 + 196)) {
        return true;
      }
      GameRoutine_a69620((__int64*)(v3 + 192), (__int64*)(a2 - 64));
      if ((signed __int32)*(_DWORD*)(v3 + 196) >=
          (signed __int32)*(_DWORD*)(v3 + 132)) {
        return true;
      }
      GameRoutine_a69620((__int64*)(v3 + 128), (__int64*)(v3 + 192));
      if ((signed __int32)*(_DWORD*)(v3 + 132) >=
          (signed __int32)*(_DWORD*)(v3 + 68)) {
        return true;
      }
      v6 = (__int64*)(v3 + 64);
      v5 = (__int64*)(v3 + 128);
      break;
    default:
      goto LABEL_17;
    }
    GameRoutine_a69620(v6, v5);
    if ((signed __int32)*(_DWORD*)(v3 + 68) <
        (signed __int32)*(_DWORD*)(v3 + 4)) {
      v5 = (__int64*)(v3 + 64);
      goto LABEL_25;
    }
    return true;
  }
  if ((unsigned __int64)v4 < 2) {
    return true;
  }
  if (v4 == 2) {
    if ((signed __int32)*(_DWORD*)(a2 - 60) <
        (signed __int32)*(_DWORD*)(a1 + 4)) {
      v5 = (__int64*)(a2 - 64);
    LABEL_25:
      v9 = (__int64*)v3;
      goto LABEL_26;
    }
    return true;
  }
LABEL_17:
  v10 = *(_DWORD*)(a1 + 68);
  v11 = *(_DWORD*)(a1 + 132);
  v12 = a1 + 128;
  if (v10 >= (signed __int32)*(_DWORD*)(a1 + 4)) {
    if (v11 >= v10) {
      goto LABEL_34;
    }
    GameRoutine_a69620((__int64*)(a1 + 64), (__int64*)(a1 + 128));
    if ((signed __int32)*(_DWORD*)(v3 + 68) >=
        (signed __int32)*(_DWORD*)(v3 + 4)) {
      goto LABEL_34;
    }
    v13 = (__int64*)(v3 + 64);
    a1 = v3;
    goto LABEL_33;
  }
  if (v11 < v10) {
  LABEL_32:
    v13 = (__int64*)(v3 + 128);
  LABEL_33:
    GameRoutine_a69620((__int64*)a1, v13);
    goto LABEL_34;
  }
  GameRoutine_a69620((__int64*)a1, (__int64*)(a1 + 64));
  if ((signed __int32)*(_DWORD*)(v3 + 132) <
      (signed __int32)*(_DWORD*)(v3 + 68)) {
    a1 = v3 + 64;
    goto LABEL_32;
  }
LABEL_34:
  v14 = v3 + 192;
  if (v3 + 192 == a2) {
    return true;
  }
  v15 = 0;
  v16 = 0;
  while (2) {
    if ((signed __int32)*(_DWORD*)(v14 + 4) >=
        (signed __int32)*(_DWORD*)(v12 + 4)) {
      goto LABEL_38;
    }
    v17 = *(_QWORD*)(v14 + 48);
    v32 = *(_QWORD*)v14;
    if (v17 != 0) {
      if (v17 == v14 + 16) {
        v33_.v34 = v33_.v33;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v17 + 24LL))(v17, v33_.v33);
      }
      else {
        v33_.v34 = *(_BYTE**)(v14 + 48);
        *(_QWORD*)(v14 + 48) = 0;
      }
    }
    else {
      v33_.v34 = nullptr;
    }
    v18 = v15;
    do {
      v19 = (_QWORD*)(v3 + v18);
      v20 = v18;
      v21 = *(_QWORD*)(v3 + v18 + 128);
      v22 = (_QWORD*)v19[30];
      v19[30] = 0;
      v19[24] = v21;
      if (v19 + 26 == v22) {
        v23 = 32;
      }
      else {
        if (v22 == nullptr) {
          goto LABEL_53;
        }
        v23 = 40;
      }
      (*(void (**)(__int64))(*v22 + v23))((__int64)v22);
    LABEL_53:
      v24 = *(_QWORD**)(v3 + v20 + 176);
      if (v24 != nullptr) {
        if (v19 + 18 == v24) {
          v19[30] = v19 + 26;
          (*(void (**)(_QWORD*, _QWORD*))(*v24 + 24LL))(v24, v19 + 26);
          if (v20 == -128) {
          LABEL_58:
            v25 = (_QWORD*)v3;
            goto LABEL_60;
          }
        }
        else {
          v19[30] = v24;
          *(_QWORD*)(v3 + v20 + 176) = 0;
          if (v20 == -128) {
            goto LABEL_58;
          }
        }
      }
      else {
        v19[30] = 0;
        if (v20 == -128) {
          goto LABEL_58;
        }
      }
      v18 = v20 - 64;
    } while (SHIDWORD(v32) < (signed __int32)*(_DWORD*)(v3 + v20 + 68));
    v25 = (_QWORD*)(v3 + v18 + 192);
  LABEL_60:
    v26 = v3 + v20;
    *v25 = v32;
    v27 = *(_QWORD**)(v26 + 176);
    *(_QWORD*)(v26 + 176) = 0;
    if ((_QWORD*)(v26 + 144) == v27) {
      v28 = 32;
    LABEL_64:
      (*(void (**)(__int64))(*v27 + v28))((__int64)v27);
    }
    else if (v27 != nullptr) {
      v28 = 40;
      goto LABEL_64;
    }
    if (v33_.v34 != nullptr) {
      if (v33_.v34 == v33_.v33) {
        v29 = v33_.v34;
        *(_QWORD*)(v26 + 176) = v26 + 144;
        (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v29 + 24LL))(v29, v26 + 144);
        goto LABEL_69;
      }
      *(_QWORD*)(v26 + 176) = v33_.v34;
      ++v16;
    }
    else {
      *(_QWORD*)(v26 + 176) = 0;
    LABEL_69:
      ++v16;
      if (v33_.v34 == v33_.v33) {
        v30 = 32;
      }
      else {
        if (v33_.v34 == nullptr) {
          goto LABEL_37;
        }
        v30 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v33_.v34 + v30))((__int64)v33_.v34);
    }
  LABEL_37:
    if (v16 != 8) {
    LABEL_38:
      v12 = v14;
      v14 += 64;
      v15 += 64;
      if (v14 == a2) {
        return true;
      }
      continue;
    }
    return v14 + 64 == a2;
  }
}

__int64* game_cb3d30(__int64* result, __int64* a2, __int64* a3)
{
  int v3;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char v18;

  v3 = *((_DWORD*)result + 6);
  v5 = result;
  if (v3 == -1) {
    goto LABEL_8;
  }
  if (v3 != 5) {
    result = (__int64*)((__int64 (*)(char*, __int64*))GameData_1fd3de0[v3])(
        &v18, result);
  LABEL_8:
    *((_DWORD*)v5 + 6) = -1;
    v9 = a3[1];
    v10 = a3[2];
    *v5 = *a3;
    v5[1] = v9;
    v5[2] = v10;
    a3[1] = 0;
    a3[2] = 0;
    *a3 = 0;
    *((_DWORD*)v5 + 6) = 5;
    return result;
  }
  if (a2 == a3) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v11 = a2;
      result = (__int64*)GameRoutine_25ec90(a2[2], *a2 & 0xFFFFFFFFFFFFFFFELL);
      a2 = v11;
    }
    v12 = *a3;
    v13 = a3[2];
    a2[1] = a3[1];
    a2[2] = v13;
    *a2 = v12;
    *(_WORD*)a3 = 0;
  }
  else {
    v6 = *(unsigned __int8*)a3;
    if ((*(_BYTE*)a2 & 1) != 0) {
      v14 = a3[2];
      v15 = (v6 & 1) == 0;
      v16 = v6 >> 1;
      if (v15) {
        v14 = (__int64)a3 + 1;
      }
      if (v15) {
        v17 = v16;
      }
      else {
        v17 = a3[1];
      }
      return VariableAssign_62da90(a2, v14, v17);
    }
    else if ((v6 & 1) != 0) {
      return VariableAssign_62dbb0(a2, a3[2], a3[1]);
    }
    else {
      v7 = *a3;
      v8 = a3[2];
      a2[1] = a3[1];
      a2[2] = v8;
      *a2 = v7;
    }
  }
  return result;
}

void game_d58e20(__int64 a1, int a2, __int64* a3, int a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    unsigned __int64 v15;
    char* v16;
    int v17;
  } v14_;

  v6 = a1 + 32LL * a2;
  if ((signed __int32)*(_DWORD*)(v6 + 1480) <= a4) {
    v7 = v6 + 1456;
    LOWORD(v14_.v14) = 0;
    v14_.v17 = 0;
    if (&v14_.v14 != a3) {
      if ((*(_BYTE*)a3 & 1) != 0) {
        v9 = a4;
        GameRoutine_64df20(&v14_.v14, a3[2], a3[1]);
        a4 = v9;
      }
      else {
        v8 = a3[1];
        v14_.v14 = *a3;
        v14_.v15 = v8;
        v14_.v16 = (char*)a3[2];
      }
    }
    v14_.v17 = a4;
    if ((__int64*)v7 != &v14_.v14) {
      if ((*(_BYTE*)v7 & 1) != 0) {
        if ((v14_.v14 & 1) != 0) {
          v11 = v14_.v16;
        }
        else {
          v11 = (char*)&v14_.v14 + 1;
        }
        if ((v14_.v14 & 1) != 0) {
          v12 = v14_.v15;
        }
        else {
          v12 = (unsigned __int64)(unsigned __int8)v14_.v14 >> 1;
        }
        SpineModel_64dde0((__int64*)v7, (__int64)v11, v12);
      }
      else if ((v14_.v14 & 1) != 0) {
        GameRoutine_64df20((_QWORD*)v7, (__int64)v14_.v16, v14_.v15);
      }
      else {
        v10 = v14_.v15;
        *(_QWORD*)v7 = v14_.v14;
        *(_QWORD*)(v7 + 8) = v10;
        *(_QWORD*)(v7 + 16) = v14_.v16;
      }
    }
    *(_DWORD*)(v7 + 24) = v14_.v17;
    if ((v14_.v14 & 1) != 0 && v14_.v16 != nullptr) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v14_.v16);
    }
  }
}

__int64 game_d8cf60(__int64 result)
{
  int v1;
  _DWORD* v2;
  int v3;
  _BYTE* v4;
  bool v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  char v10;
  int v11;
  bool v13;
  int v14;

  v1 = *(_DWORD*)(result + 32);
  v2 = (_DWORD*)result;
  v3 = v1 - 1;
  *(_DWORD*)(result + 32) = v1 - 1;
  if (v1 == 1) {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)(result + 24) + 8LL))(result + 24);
    v3 = v2[8];
  }
  v4 = *(_BYTE**)GameData_212d310;
  v5 = v3 <= 0 && (signed __int32)v2[4] <= 0;
  if (!v5 ||
      game_ProcGameSkipView_instance_ != 0 &&
          (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                            152) -
                  1 <=
              2 &&
          (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v7 = 2)
               : (v7 = 3),
           (v7 & v6) == 0) ||
      game_hub_ProcHubSeqView_instance_ != 0 &&
          (v8 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) != 0 &&
          *(_QWORD*)(v8 + 40) != 0 ||
      (v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416)) != 0 &&
          *(_QWORD*)(v9 + 40) != 0) {
    v10 = 0;
  }
  else {
    v10 = *(_BYTE*)(GameData_21f3d10 + 10);
  }
  v11 = (unsigned __int8)v4[14];
  v4[12] = v10 & 1;
  v13 = (int)v2[8] < 1 && (signed __int32)v2[12] < 1;
  v4[13] = v13;
  v14 = (signed __int32)v2[8] < 1;
  if (v11 != v14) {
    v4[14] = v14;
  }
  return result;
}

_DWORD* game_d8d2c0(_DWORD* result)
{
  __int64 v1;
  bool v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  char v7;
  int v8;
  bool v10;
  int v11;

  v1 = GameData_21d96b8;
  v2 = (int)result[8] <= 0 && (signed __int32)result[4] <= 0;
  if (!v2 ||
      game_ProcGameSkipView_instance_ != 0 &&
          (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                            152) -
                  1 <=
              2 &&
          (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v4 = 2)
               : (v4 = 3),
           (v4 & v3) == 0) ||
      game_hub_ProcHubSeqView_instance_ != 0 &&
          (v5 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) != 0 &&
          *(_QWORD*)(v5 + 40) != 0 ||
      (v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416)) != 0 &&
          *(_QWORD*)(v6 + 40) != 0) {
    v7 = 0;
  }
  else {
    v7 = *(_BYTE*)(GameData_21f3d10 + 10);
  }
  v8 = *(unsigned __int8*)(GameData_21d96b8 + 14);
  *(_BYTE*)(GameData_21d96b8 + 12) = v7 & 1;
  v10 = (int)result[8] < 1 && (signed __int32)result[12] < 1;
  *(_BYTE*)(v1 + 13) = v10;
  v11 = (signed __int32)result[8] < 1;
  if (v8 != v11) {
    *(_BYTE*)(v1 + 14) = v11;
  }
  return result;
}

__int64* game_dbd1a0(__int64* a1, __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  _QWORD* v34;
  __int64* v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;

  v2 = a1[1] - *a1;
  v3 = 0xF83E0F83E0F83E1LL * (v2 >> 3) + 1;
  if (v3 > 0xF83E0F83E0F83ELL) {
    GameRoutine_dbd600();
  }
  v6 = fw_memory_g_heap_manager_ptr;
  if (0x1F07C1F07C1F07C2LL * ((a1[2] - *a1) >> 3) > v3) {
    v3 = 0x1F07C1F07C1F07C2LL * ((a1[2] - *a1) >> 3);
  }
  if ((unsigned __int64)(0xF83E0F83E0F83E1LL * ((a1[2] - *a1) >> 3)) >=
      0x7C1F07C1F07C1FLL) {
    v7 = 0xF83E0F83E0F83ELL;
  }
  else {
    v7 = v3;
  }
  if (v7 != 0) {
    if (v7 > 0xF83E0F83E0F83ELL) {
      GameRoutine_60a210();
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        264 * v7, 16, 0);
  }
  else {
    v8 = 0;
  }
  v9 = (__int64*)(v8 + v2);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v9, a2[2], a2[1]);
  }
  else {
    v10 = a2[1];
    *v9 = *a2;
    v9[1] = v10;
    v9[2] = a2[2];
  }
  v11 = a2[4];
  v12 = a2[5];
  v13 = a2[6];
  v14 = v8 + 264 * v7;
  v9[3] = a2[3];
  v9[4] = v11;
  v15 = a2[7];
  v16 = a2[8];
  v17 = *a1;
  v18 = (__int64*)a1[1];
  v9[5] = v12;
  v9[6] = v13;
  v9[7] = v15;
  v9[8] = v16;
  v19 = a2[11];
  v20 = a2[12];
  v21 = a2[10];
  v9[9] = a2[9];
  v9[10] = v21;
  v9[11] = v19;
  v9[12] = v20;
  v22 = a2[14];
  v9[13] = a2[13];
  v9[14] = v22;
  v23 = a2[16];
  v9[15] = a2[15];
  v9[16] = v23;
  v24 = a2[18];
  v9[17] = a2[17];
  v9[18] = v24;
  v25 = a2[20];
  v9[19] = a2[19];
  v9[20] = v25;
  v26 = a2[22];
  v9[21] = a2[21];
  v9[22] = v26;
  v27 = a2[24];
  v9[23] = a2[23];
  v9[24] = v27;
  v28 = a2[26];
  v9[25] = a2[25];
  v9[26] = v28;
  v29 = a2[28];
  v9[27] = a2[27];
  v9[28] = v29;
  v30 = a2[30];
  v9[29] = a2[29];
  v9[30] = v30;
  v31 = a2[31];
  v32 = a2[32];
  v33 = v9 + 33;
  v9[31] = v31;
  v9[32] = v32;
  v34 = (__int64*)((char*)v9 + v17 - (_QWORD)v18);
  if (v18 != (__int64*)v17) {
    v35 = (__int64*)v17;
    v36 = v34;
    do {
      v37 = *v35;
      v38 = v35[2];
      v36[1] = v35[1];
      v36[2] = v38;
      *v36 = v37;
      v35[1] = 0;
      v35[2] = 0;
      *v35 = 0;
      v36[3] = 0;
      v36[3] = v35[3];
      v36[4] = 0;
      v36[4] = v35[4];
      v36[5] = 0;
      v36[5] = v35[5];
      v36[6] = 0;
      v36[6] = v35[6];
      v36[7] = 0;
      v36[7] = v35[7];
      v36[8] = 0;
      v36[8] = v35[8];
      v36[9] = 0;
      v36[9] = v35[9];
      v36[10] = 0;
      v36[10] = v35[10];
      v36[11] = 0;
      v36[11] = v35[11];
      v36[12] = 0;
      v36[12] = v35[12];
      v36[13] = 0;
      v36[13] = v35[13];
      v36[14] = 0;
      v36[14] = v35[14];
      v36[15] = 0;
      v36[15] = v35[15];
      v36[16] = 0;
      v36[16] = v35[16];
      v36[17] = 0;
      v36[17] = v35[17];
      v36[18] = 0;
      v36[18] = v35[18];
      v36[19] = 0;
      v36[19] = v35[19];
      v36[20] = 0;
      v36[20] = v35[20];
      v36[21] = 0;
      v36[21] = v35[21];
      v36[22] = 0;
      v36[22] = v35[22];
      v36[23] = 0;
      v36[23] = v35[23];
      v36[24] = 0;
      v36[24] = v35[24];
      v36[25] = 0;
      v36[25] = v35[25];
      v36[26] = 0;
      v36[26] = v35[26];
      v36[27] = 0;
      v36[27] = v35[27];
      v36[28] = 0;
      v36[28] = v35[28];
      v36[29] = 0;
      v36[29] = v35[29];
      v36[30] = 0;
      v36[30] = v35[30];
      v36[31] = 0;
      v36[31] = v35[31];
      v36[32] = 0;
      v39 = v35[32];
      v35 += 33;
      v36[32] = v39;
      v36 += 33;
    } while (v35 != v18);
    do {
      if ((*(_BYTE*)v17 & 1) != 0) {
        v40 = *(_QWORD*)(v17 + 16);
        if (v40 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
            v41 = 128;
          }
          else {
            v41 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v41, v40);
        }
      }
      v17 += 264;
    } while ((__int64*)v17 != v18);
    v17 = *a1;
  }
  *a1 = (__int64)v34;
  a1[1] = (__int64)v33;
  a1[2] = v14;
  if (v17 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v42, v17);
  }
  return v33;
}

void game_dbdff0(__int64 a1, int32x2_t* a2)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64 v4;
  float32x4_t* v5;
  __int64 v6;
  __int64 v7;
  float32x4_t v9;
  int8x16_t v10;
  __int64 v11;
  float32x4_t v12;
  float v13;
  _QWORD* v14;
  float v15;
  __int64 v16;
  int8x16_t* v17;
  int v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v28;
  float v29;
  float v30;
  __int64 v31;
  struct {
    int v32;
    __int16 v33;
    char gap10_[2];
    int v34;
  } v32_;

  v3 = GameData_212d458[0];
  v4 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v4 == 0) {
    v7 = 0;
  LABEL_19:
    v19 = game_dbe360();
    goto LABEL_20;
  }
  v5 = *(float32x4_t**)(*GameData_212d458[0] + 72);
  v6 = *(_QWORD*)(*GameData_212d458[0] + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = std___1___shared_weak_count_lock(v6);
  std___1___shared_weak_count___release_weak(v4);
  if (v7 == 0 || v5 == nullptr) {
    goto LABEL_19;
  }
  game_zview_d12d30(*(_QWORD*)(LANES128(v5[1]).n128_u64[1] + 16), a2 + 10, 1);
  v9 = vsubq_f32(
      v5[79],
      *(float32x4_t*)(*(_QWORD*)(LANES128(v5[1]).n128_u64[1] + 16) + 560LL));
  v10 = vmulq_f32(v9, v9);
  LANES128(v10).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_f32[0] > 0x1.0000000000000p-23f) {
    v11 = *(_QWORD*)(*v3 + 120);
    if ((*(_BYTE*)(v11 + 12) & 1) == 0) {
      *(_BYTE*)(v11 + 12) = 1;
    }
  }
  LANES128(v5[79]).n128_u32[0] = LANES64(a2[10]).n64_u32[0];
  LANES128(v5[79]).n128_u32[1] = LANES64(a2[10]).n64_u32[1];
  v12 = v5[79];
  LANES128(v12).n128_u64[1] = LANES64(a2[11]).n64_u32[0];
  v5[79] = v12;
  HubCharacterNatives_cabfc0((__int64)v5, 1);
  v13 = LANES64(a2[12]).n64_f32[0];
  if ((LANES128(v5[83]).n128_u8[1] & 1) == 0) {
    LANES128(v5[83]).n128_u8[1] = 1;
  }
  v14 = *(_QWORD**)(LANES128(v5[1]).n128_u64[1] + 16);
  v15 = v13 * 0x1.1df46a0000000p-6f;
  if (v14[107] != 0) {
    v16 = v14[108];
    v14[107] = 0;
    v14[108] = 0;
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
    }
  }
  v17 = (int8x16_t*)v14[61];
  v18 = LANES128(v17[11]).n128_u8[4];
  LANES128(v17[2]).n128_f32[0] = v15;
  LANES128(v17[2]).n128_f32[1] = v15;
  if (v18 == 1) {
    LANES128(v17[11]).n128_u8[4] = 0;
  }
  CharacterRotate_d519c0(v17);
  v19 = game_dbe360();
  game_zview_cee580((_QWORD*)LANES128(v5[1]).n128_u64[1]);
LABEL_20:
  v20 = *(_QWORD*)GameData_212dc60[0];
  game_hub_d97a00(*(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 16LL), 0x0.0p+0f);
  v32_.v32 = 0;
  v32_.v33 = 0;
  v32_.v34 = 1065353216;
  GameHr_cdeee0(v20, (__int64)&v32_.v32);
  v21 = GameData_212dc38[0];
  GameHr_d1fb60(*(_QWORD*)GameData_212dc38[0], 1);
  if (LANES64(a2[12]).n64_u8[4] == 1) {
    v22 = *(_QWORD*)(*(_QWORD*)v21 + 1160LL);
    if (v22 != 0) {
      GameHr_d23780(v22, LANES64(a2[13]).n64_u32[0] | 0x100000000LL,
                    LANES64(a2[13]).n64_u32[1] | 0x100000000LL, 0, 0x0.0p+0f);
    }
  }
  if ((v19 & 1) == 0) {
    goto LABEL_35;
  }
  v23 = *(_QWORD*)(*v3 + 80);
  if (v23 == 0) {
    goto LABEL_35;
  }
  v24 = *(_QWORD*)(*v3 + 72);
  v25 = *(_QWORD*)(*v3 + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                            memory_order_relaxed);
  v26 = std___1___shared_weak_count_lock(v25);
  std___1___shared_weak_count___release_weak(v23);
  if (v26 == 0 || v24 == 0) {
    if (v26 != 0) {
      goto LABEL_34;
    }
  LABEL_35:
    if (v7 == 0) {
      return;
    }
    goto LABEL_36;
  }
  v28 = *(_QWORD*)v21;
  v29 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v24 + 24) + 16LL) + 488LL) +
                  36LL);
  v30 = GameRoutine_d1fae0();
  v31 = *(_QWORD*)(v28 + 1160);
  if (v31 != 0) {
    GameHr_d23780(
        v31,
        COERCE_UNSIGNED_INT((float)((float)(v29 * 0x1.ca5dc20000000p+5f) +
                                    0x1.6800000000000p+7f) +
                            -0x1.0000000000000p+3f) |
            0x100000000LL,
        LODWORD(v30) | 0x100000000LL, 0, 0x0.0p+0f);
  }
LABEL_34:
  if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_35;
  }
  (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
  std___1___shared_weak_count___release_weak(v26);
  if (v7 == 0) {
    return;
  }
LABEL_36:
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
}

__int64* game_deb450(__int64* result, __int64* a2, __int64* a3, __int64* a4,
                     __int64* a5)
{
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = *a2;
  v6 = *result;
  v7 = *(_DWORD*)(*(_QWORD*)(*a2 + 24) + 608LL);
  v8 = *a3;
  v9 = *(_DWORD*)(*(_QWORD*)(*a3 + 24) + 608LL);
  if (v7 >= (signed __int32)*(_DWORD*)(*(_QWORD*)(*result + 24) + 608LL)) {
    if (v9 >= v7) {
      v5 = *a3;
    }
    else {
      *a2 = v8;
      *a3 = v5;
      v10 = *result;
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a2 + 24) + 608LL) <
          (signed __int32)*(_DWORD*)(*(_QWORD*)(*result + 24) + 608LL)) {
        *result = *a2;
        *a2 = v10;
        v5 = *a3;
      }
    }
  }
  else {
    if (v9 < v7) {
      *result = v8;
    LABEL_9:
      *a3 = v6;
      v5 = v6;
      goto LABEL_11;
    }
    *result = v5;
    *a2 = v6;
    v5 = *a3;
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a3 + 24) + 608LL) <
        (signed __int32)*(_DWORD*)(*(_QWORD*)(v6 + 24) + 608LL)) {
      *a2 = v5;
      goto LABEL_9;
    }
  }
LABEL_11:
  if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a4 + 24) + 608LL) <
      (signed __int32)*(_DWORD*)(*(_QWORD*)(v5 + 24) + 608LL)) {
    *a3 = *a4;
    *a4 = v5;
    v11 = *a2;
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a3 + 24) + 608LL) <
        (signed __int32)*(_DWORD*)(*(_QWORD*)(*a2 + 24) + 608LL)) {
      *a2 = *a3;
      *a3 = v11;
      v12 = *result;
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a2 + 24) + 608LL) <
          (signed __int32)*(_DWORD*)(*(_QWORD*)(*result + 24) + 608LL)) {
        *result = *a2;
        *a2 = v12;
      }
    }
  }
  v13 = *a4;
  if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a5 + 24) + 608LL) <
      (signed __int32)*(_DWORD*)(*(_QWORD*)(*a4 + 24) + 608LL)) {
    *a4 = *a5;
    *a5 = v13;
    v14 = *a3;
    if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a4 + 24) + 608LL) <
        (signed __int32)*(_DWORD*)(*(_QWORD*)(*a3 + 24) + 608LL)) {
      *a3 = *a4;
      *a4 = v14;
      v15 = *a2;
      if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a3 + 24) + 608LL) <
          (signed __int32)*(_DWORD*)(*(_QWORD*)(*a2 + 24) + 608LL)) {
        *a2 = *a3;
        *a3 = v15;
        v16 = *result;
        if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*a2 + 24) + 608LL) <
            (signed __int32)*(_DWORD*)(*(_QWORD*)(*result + 24) + 608LL)) {
          *result = *a2;
          *a2 = v16;
        }
      }
    }
  }
  return result;
}

bool game_e2aae0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  bool v16;
  __int64 v17;
  struct {
    _QWORD v19[2];
    char* v20;
  } v19_;
  struct {
    _QWORD v21[2];
    char* v22;
  } v21_;

  if (a2 == 0) {
    return false;
  }
  if ((unsigned int)*(unsigned __int8*)(a2 + 33) - 13 > 1) {
    return false;
  }
  v2 = *(_QWORD*)(a2 + 120);
  if (v2 == 0) {
    return false;
  }
  v3 = *(_QWORD*)(v2 + 88);
  if (v3 == 0) {
    return false;
  }
  v4 = *(_QWORD*)GameData_212dbb8[0];
  v5 = strlen(*(const char**)(v2 + 88));
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v19_.v19[1] = v6;
    v19_.v20 = v7;
    v19_.v19[0] = v8 | 1;
  }
  else {
    LOBYTE(v19_.v19[0]) = 2 * v5;
    v7 = (char*)v19_.v19 + 1;
    if (v5 == 0) {
      goto LABEL_14;
    }
  }
  memmove((__int64)v7, v3, v6);
LABEL_14:
  v7[v6] = 0;
  LocatorDispos_db1e20((void*)(v21_.v21), (char*)v19_.v19);
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (__int64)v19_.v20);
  }
  v10 = *(unsigned __int8*)(v4 + 40);
  v11 = v21_.v21[0];
  if ((v10 & 1) != 0) {
    v12 = *(_QWORD*)(v4 + 48);
  }
  else {
    v12 = v10 >> 1;
  }
  v13 = v21_.v21[1];
  if ((v21_.v21[0] & 1) == 0) {
    v13 = (unsigned __int64)LOBYTE(v21_.v21[0]) >> 1;
  }
  if (v12 == v13) {
    if ((v10 & 1) != 0) {
      v14 = *(_QWORD*)(v4 + 56);
    }
    else {
      v14 = v4 + 41;
    }
    if ((v21_.v21[0] & 1) != 0) {
      v15 = v21_.v22;
    }
    else {
      v15 = (char*)v21_.v21 + 1;
    }
    v16 = memcmp(v14, (__int64)v15, v12) == 0;
    if ((v11 & 1) == 0) {
      return v16;
    }
  }
  else {
    v16 = false;
    if ((v21_.v21[0] & 1) == 0) {
      return v16;
    }
  }
  if (v21_.v22 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  (__int64)v21_.v22);
  }
  return v16;
}

__int64 game_e9f360(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v1 + 8);
    v3 = *(_QWORD*)(result + 16);
    if (v2 != -1 && v3 != 0) {
      v6 = *(_QWORD*)(v3 + 392);
      v5 = *(_QWORD*)(v3 + 400);
      if (v5 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v6 != 0) {
        v7 = *(_QWORD*)(v3 + 400);
        if (v7 == 0) {
          if (v5 == 0) {
            return result;
          }
          goto LABEL_14;
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          result = std___1___shared_weak_count___release_weak(v7);
          if (v5 == 0) {
            return result;
          }
          goto LABEL_14;
        }
      }
      if (v5 == 0) {
        return result;
      }
    LABEL_14:
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_e9fe30(PSEUDO_X8 x8_, __int64* a1)
{

#pragma clang fp contract(off)
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  float32x4_t* v12;
  __int64 v13;
  __int64 v14;
  float32x4_t* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  float32x4_t v21;
  int8x16_t v22;
  float32x4_t v23;
  float v24;
  float v25;
  __int64 v26;
  float v27;
  __int64 v28;
  float v29;
  __int64 v30;
  float32x4_t* v31;
  float32x4_t v32;
  float32x4_t v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  float v39;
  float v40;
  unsigned __int64 v41;
  float32x4_t* v42;
  unsigned __int64 v43;
  __int64 v44;
  float32x4_t v45;
  __int64 v46;
  float32x4_t v47;

  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
  v3 = a1[1];
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v5 != 0) {
      v6 = *a1;
    }
    else {
      v6 = 0;
    }
    result = a1[3];
    if (result == 0) {
      goto LABEL_20;
    }
  }
  else {
    v5 = 0;
    v6 = 0;
    result = a1[3];
    if (result == 0) {
      goto LABEL_20;
    }
  }
  result = std___1___shared_weak_count_lock(result),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v6 == 0 || result == 0 || (v8 = a1[2]) == 0) {
  LABEL_20:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v16 = result;
      v17 = __cxa_guard_acquire((__int64)&GameData_21a6130),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
      result = v16;
      if (v17 != 0) {
        v18 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v18;
        __cxa_guard_release((__int64)&GameData_21a6130),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
        result = v16;
      }
    }
    *a2 = COERCE_AS(float32x4_t, GameData_21a6120);
    if (result == 0) {
      goto LABEL_50;
    }
    goto LABEL_49;
  }
  v9 = *(_QWORD*)(v8 + 8);
  if (v9 == 0 ||
      ((v10 = *(_QWORD*)(v8 + 16), *(_QWORD*)(v9 + 8) != -1) ? (v11 = v10 == 0)
                                                             : (v11 = true),
       v11)) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      v12 = (float32x4_t*)&GameData_21a6120;
      v13 = *(_QWORD*)(v6 + 8);
      if (v13 == 0) {
        goto LABEL_32;
      }
    }
    else {
      v44 = result;
      v19 = __cxa_guard_acquire((__int64)&GameData_21a6130),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
      v12 = (float32x4_t*)&GameData_21a6120;
      if (v19 != 0) {
        v20 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v20;
        __cxa_guard_release((__int64)&GameData_21a6130),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
        v12 = (float32x4_t*)&GameData_21a6120;
      }
      result = v44;
      v13 = *(_QWORD*)(v6 + 8);
      if (v13 == 0) {
        goto LABEL_32;
      }
    }
  }
  else {
    v12 = (float32x4_t*)(*(_QWORD*)(v10 + 8) + 304LL);
    v13 = *(_QWORD*)(v6 + 8);
    if (v13 == 0) {
      goto LABEL_32;
    }
  }
  if (*(_QWORD*)(v13 + 8) == -1 || (v14 = *(_QWORD*)(v6 + 16)) == 0) {
  LABEL_32:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      v15 = (float32x4_t*)&GameData_21a6120;
    }
    else {
      v42 = v12;
      v46 = result;
      v35 = __cxa_guard_acquire((__int64)&GameData_21a6130),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
      v15 = (float32x4_t*)&GameData_21a6120;
      if (v35 != 0) {
        v36 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v36;
        __cxa_guard_release((__int64)&GameData_21a6130),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
        v15 = (float32x4_t*)&GameData_21a6120;
      }
      result = v46;
      v12 = v42;
    }
    goto LABEL_34;
  }
  v15 = (float32x4_t*)(*(_QWORD*)(v14 + 8) + 304LL);
LABEL_34:
  v21 = vsubq_f32(*v12, *v15);
  v22 = vmulq_f32(v21, v21);
  LANES128(v22).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u64[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u64[0];
  LODWORD(v24) =
      LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
          .n64_u32[0];
  if (*(_BYTE*)(v6 + 61) == 1) {
    v25 = v24 * 0x1.0000000000000p-1f;
  }
  else {
    v26 = result;
    v45 = v21;
    v39 = v24;
    v41 = LANES128(v23).n128_u64[0];
    GameRoutine_e9f200(v6),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
    v21 = v45;
    result = v26;
    v25 = fmaxf(v27, 0x1.3333340000000p-1f);
    if ((*(_BYTE*)(v6 + 92) & (*(float*)(v6 + 88) < v25)) != 0) {
      v25 = *(float*)(v6 + 88);
    }
    v24 = v39;
    LANES128(v23).n128_u64[0] = v41;
  }
  v28 = *(_QWORD*)(v6 + 8);
  if (v25 >= v24) {
    v29 = v24;
  }
  else {
    v29 = v25;
  }
  if (v28 != 0 && *(_QWORD*)(v28 + 8) != -1 &&
      (v30 = *(_QWORD*)(v6 + 16)) != 0) {
    v31 = (float32x4_t*)(*(_QWORD*)(v30 + 8) + 304LL);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v31 = (float32x4_t*)&GameData_21a6120;
  }
  else {
    v37 = result;
    v40 = v29;
    v43 = LANES128(v23).n128_u64[0];
    v47 = v21;
    v31 = (float32x4_t*)&GameData_21a6120;
    if (__cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
      v38 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v38;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    v21 = v47;
    v29 = v40;
    LANES128(v23).n128_u64[0] = v43;
    result = v37;
  }
  LANES128(v23).n128_u64[1] = LANES128(v23).n128_u64[0];
  v32 = vrsqrteq_f32(v23);
  v33 = vmulq_f32(v32, vrsqrtsq_f32(v32, vmulq_f32(v23, v32)));
  *a2 = vaddq_f32(
      *v31,
      vmulq_n_f32(
          vbicq_s8(
              vmulq_f32(v21,
                        vmulq_f32(v33, vrsqrtsq_f32(v33, vmulq_f32(v23, v33)))),
              vceqzq_f32(v23)),
          v29));
LABEL_49:
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v34 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
    result = std___1___shared_weak_count___release_weak(v34),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v5 == 0) {
      result;
      return;
    }
    goto LABEL_53;
  }
LABEL_50:
  if (v5 == 0) {
    result;
    return;
  }
LABEL_53:
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
    {
      std___1___shared_weak_count___release_weak(v5),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 game_eade00(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v12;
  __int64 v13;
  unsigned __int64 v14;
  char v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  unsigned __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  unsigned __int64 v38[2];
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;

  v3 = *(_DWORD*)(a1 + 88);
  if ((v3 & 0x80000000) == 0 && v3 <= (signed __int32)*(_DWORD*)(a1 + 92)) {
    return 0;
  }
  if (GameData_22054a8 != 0) {
    v5 = (_QWORD*)(GameData_22054a8 + 8);
  }
  else {
    v5 = nullptr;
  }
  v6 = *(unsigned __int8*)(a1 + 32);
  v7 = *(_QWORD*)(a1 + 40);
  if ((v6 & 1) == 0) {
    v7 = v6 >> 1;
  }
  if (v7 == 0) {
    return 1;
  }
  v42 = v1;
  v43 = v2;
  v28 = (v6 & 1) == 0;
  v8 = v5[9];
  v9 = a1 + 33;
  v10 = (__int64)v5;
  if (v28) {
    v12 = (const char*)(a1 + 33);
  }
  else {
    v12 = *(const char**)(a1 + 48);
  }
  if (v8 != 0) {
    v13 = *(_QWORD*)(*(_QWORD*)(v5[5] + 8 * ((v8 + v5[8] - 1) / 0x33uLL)) +
                     80 * ((v8 + v5[8] - 1) % 0x33uLL) + 72);
  }
  else {
    v13 = 0;
  }
  v14 = strlen(v12);
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v15 = GameRoutine_1195900(v10, v13, (__int64)v12, v14, &v39, (__int64)&v44);
  v16 = v39;
  v17 = v15;
  if (v39 != 0) {
    v18 = v40;
    if (v39 == v40) {
      goto LABEL_24;
    }
    do {
      v19 = *(unsigned int*)(v18 - 8);
      v20 = v18 - 32;
      if ((_DWORD)v19 != -1) {
        ((void (*)(unsigned __int64*, __int64))decltype_c81af0_ptr[v19])(
            v38, v18 - 32);
      }
      *(_DWORD*)(v18 - 8) = -1;
      v18 -= 32;
    } while (v20 != v16);
    v40 = v16;
    v16 = v39;
    if (v39 != 0) {
    LABEL_24:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v16);
    }
  }
  GameRoutine_1196940((_QWORD*)(v10 + 32));
  if ((v17 & 1) != 0) {
    v22 = v44;
    return v22 & 1;
  }
  v23 = game_GameModeData_instance_;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v24 = *(_QWORD*)(a1 + 48);
  }
  else {
    v24 = v9;
  }
  v25 = game_HashString(v24);
  if (v25 == 0) {
    goto LABEL_64;
  }
  v26 = *(_QWORD**)(v23 + 48);
  v27 = v26[2];
  v28 = v27 == 0 || v26[4] == 0;
  if (v28) {
    goto LABEL_64;
  }
  v29 = v27 - 1;
  if ((v27 & (v27 - 1)) != 0) {
    v30 = v25;
    if (v25 >= v27) {
      v30 = v25 % v27;
    }
  }
  else {
    v30 = v29 & v25;
  }
  v31 = *(_QWORD**)(v26[1] + 8 * v30);
  if (v31 == nullptr || (v32 = (_QWORD*)*v31) == nullptr) {
  LABEL_64:
    v22 = 0;
    return v22 & 1;
  }
  if ((v27 & v29) == 0) {
    while (1) {
      v34 = v32[1];
      if (v25 == v34) {
        if (v32[2] == v25) {
          goto LABEL_57;
        }
      }
      else if ((v34 & v29) != v30) {
        goto LABEL_64;
      }
      v32 = (_QWORD*)*v32;
      if (v32 == nullptr) {
        goto LABEL_64;
      }
    }
  }
  while (1) {
    v33 = v32[1];
    if (v25 == v33) {
      break;
    }
    if (v33 >= v27) {
      v33 %= v27;
    }
    if (v33 != v30) {
      goto LABEL_64;
    }
  LABEL_46:
    v32 = (_QWORD*)*v32;
    if (v32 == nullptr) {
      goto LABEL_64;
    }
  }
  if (v32[2] != v25) {
    goto LABEL_46;
  }
LABEL_57:
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v35 = *(_QWORD*)(a1 + 48);
  }
  else {
    v35 = v9;
  }
  v38[1] = v35;
  v38[0] = game_HashString(v35);
  v36 = game_GameVariableTable_Find(*(_QWORD**)(v23 + 48), v38);
  if (v36 != 0) {
    v37 = *(_DWORD*)(v36 + 32);
  }
  else {
    v37 = 0;
  }
  if (v37 == (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1)) {
    goto LABEL_64;
  }
  v22 = 1;
  return v22 & 1;
}

void game_ebabe0(__int64 a1, __int64* a2, unsigned __int64 a3, __int64* a4,
                 __int64 a5)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
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
  __int64* v51;
  __int64* v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
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
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  __int64 v102;
  int v103;

  if (a3 >= 2) {
    if (a3 == 2) {
      if ((signed __int32)*((_DWORD*)a2 - 2) >
          (signed __int32)*(_DWORD*)(a1 + 80)) {
        GameRoutine_ebc760((__int64*)a1, a2 - 11);
      }
    }
    else {
      v6 = a3;
      if ((__int64)a3 <= 0) {
        if ((__int64*)a1 != a2) {
          v14 = (__int64*)(a1 + 88);
          if ((__int64*)(a1 + 88) != a2) {
            v15 = 0;
            v16 = a1;
            v17 = fw_memory_g_heap_manager_ptr;
            v91 = a2;
            do {
              v18 = v14;
              v19 = *(_DWORD*)(v16 + 168);
              if (v19 > (signed __int32)*(_DWORD*)(v16 + 80)) {
                v21 = *(_QWORD*)(v16 + 96);
                v20 = *(_QWORD*)(v16 + 104);
                v22 = *v18;
                v23 = v15;
                *(_QWORD*)(v16 + 96) = 0;
                *(_QWORD*)(v16 + 104) = 0;
                v94 = v20;
                v95 = v21;
                v25 = *(_QWORD*)(v16 + 112);
                v24 = *(_QWORD*)(v16 + 120);
                *(_QWORD*)(v16 + 112) = 0;
                *(_QWORD*)(v16 + 120) = 0;
                v92 = v22;
                v93 = v25;
                v99 = v24;
                v27 = *(_QWORD*)(v16 + 128);
                v26 = *(_QWORD*)(v16 + 136);
                *(_QWORD*)(v16 + 128) = 0;
                *(_QWORD*)(v16 + 136) = 0;
                v98 = v27;
                v97 = v26;
                v103 = *(_DWORD*)(v16 + 160);
                v96 = *(_DWORD*)(v16 + 164);
                v101 = *(_QWORD*)(v16 + 144);
                v102 = *(_QWORD*)(v16 + 152);
                while (1) {
                  v28 = (_QWORD*)(a1 + v23);
                  v29 = *(_QWORD*)(a1 + v23 + 96);
                  *(_QWORD*)(a1 + v23 + 88) = *(_QWORD*)(a1 + v23);
                  if (v29 != 0) {
                    v28[13] = v29;
                    if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
                      v30 = 128;
                    }
                    else {
                      v30 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v30, v29);
                    v28[13] = 0;
                    v28[14] = 0;
                  }
                  v31 = v28[1];
                  v32 = v28[2];
                  v33 = v28[15];
                  v28[1] = 0;
                  v28[12] = v31;
                  v28[13] = v32;
                  v34 = v28[3];
                  v28[2] = 0;
                  v28[3] = 0;
                  v28[14] = v34;
                  if (v33 != 0) {
                    v35 = a1 + v23;
                    *(_QWORD*)(a1 + v23 + 128) = v33;
                    if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
                      v36 = 128;
                    }
                    else {
                      v36 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v36, v33);
                    *(_QWORD*)(v35 + 128) = 0;
                    *(_QWORD*)(v35 + 136) = 0;
                  }
                  v37 = a1 + v23;
                  v38 = *(_QWORD*)(a1 + v23 + 32);
                  v39 = *(_QWORD*)(a1 + v23 + 40);
                  *(_QWORD*)(v37 + 32) = 0;
                  v28[15] = v38;
                  v40 = *(_QWORD*)(a1 + v23 + 48);
                  v41 = *(_QWORD*)(a1 + v23 + 56);
                  *(_QWORD*)(v37 + 40) = 0;
                  *(_QWORD*)(v37 + 48) = 0;
                  *(_QWORD*)(v37 + 128) = v39;
                  *(_QWORD*)(v37 + 136) = v40;
                  v42 = *(_QWORD*)(a1 + v23 + 64);
                  v43 = *(_QWORD*)(a1 + v23 + 72);
                  *(_QWORD*)(v37 + 144) = v41;
                  *(_QWORD*)(v37 + 152) = v42;
                  LODWORD(v42) = *(_DWORD*)(a1 + v23 + 80);
                  *(_QWORD*)(v37 + 160) = v43;
                  *(_DWORD*)(v37 + 168) = v42;
                  if (v23 == 0) {
                    break;
                  }
                  v23 -= 88;
                  if (v19 <= (signed __int32)*(_DWORD*)(v37 - 8)) {
                    v44 = a1 + v23 + 88;
                    goto LABEL_30;
                  }
                }
                v44 = a1;
              LABEL_30:
                *(_QWORD*)v44 = v92;
                v45 = *(_QWORD*)(v37 + 8);
                if (v45 != 0) {
                  v46 = *(_QWORD*)v17;
                  *(_QWORD*)(v44 + 16) = v45;
                  if (*(_QWORD*)(v46 + 200) != 0) {
                    v47 = 128;
                  }
                  else {
                    v47 = 56;
                  }
                  nn_mem_StandardAllocator_Free(v46 + v47, v45);
                }
                *(_QWORD*)(v37 + 8) = v95;
                *(_QWORD*)(v44 + 16) = v94;
                *(_QWORD*)(v44 + 24) = v93;
                v48 = *(_QWORD*)(v37 + 32);
                if (v48 != 0) {
                  v49 = *(_QWORD*)v17;
                  *(_QWORD*)(v44 + 40) = v48;
                  if (*(_QWORD*)(v49 + 200) != 0) {
                    v50 = 128;
                  }
                  else {
                    v50 = 56;
                  }
                  nn_mem_StandardAllocator_Free(v49 + v50, v48);
                }
                a2 = v91;
                *(_QWORD*)(v37 + 32) = v99;
                *(_QWORD*)(v44 + 40) = v98;
                *(_QWORD*)(v44 + 48) = v97;
                *(_QWORD*)(v37 + 56) = v101;
                *(_QWORD*)(v37 + 64) = v102;
                *(_DWORD*)(v37 + 72) = v103;
                *(_DWORD*)(v44 + 76) = v96;
                *(_DWORD*)(v44 + 80) = v19;
              }
              v14 = v18 + 11;
              v15 += 88;
              v16 = (__int64)v18;
            } while (v18 + 11 != a2);
          }
        }
      }
      else {
        v7 = a3 >> 1;
        v8 = a2;
        v9 = 88 * (a3 >> 1);
        v10 = a3 - (a3 >> 1);
        v11 = (__int64*)(v9 + a1);
        if ((__int64)a3 <= a5) {
          v51 = a4;
          GameRoutine_ebb360((__int64*)a1, v11, a3 >> 1, a4);
          v52 = &v51[v9 / 8];
          GameRoutine_ebb360((__int64*)(v9 + a1), v8, v6 - (v6 >> 1),
                             &v51[v9 / 8]);
          v53 = a1 + 32;
          v54 = &v51[v9 / 8];
          v55 = fw_memory_g_heap_manager_ptr;
          v56 = &v51[11 * v6];
          v100 = v51;
          while (v54 != v56) {
            v61 = (_QWORD*)(v53 - 24);
            if ((signed __int32)*((_DWORD*)v54 + 20) <=
                (signed __int32)*((_DWORD*)v51 + 20)) {
              v66 = *(_QWORD*)(v53 - 24);
              *(_QWORD*)(v53 - 32) = *v51;
              if (v66 != 0) {
                *(_QWORD*)(v53 - 16) = v66;
                v67 = 128;
                if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) == 0) {
                  v67 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v67, v66);
                *(_QWORD*)(v53 - 16) = 0;
                *(_QWORD*)(v53 - 8) = 0;
                *v61 = 0;
              }
              *(_QWORD*)(v53 - 24) = v51[1];
              *(_QWORD*)(v53 - 16) = v51[2];
              *(_QWORD*)(v53 - 8) = v51[3];
              v51[2] = 0;
              v51[3] = 0;
              v51[1] = 0;
              v68 = *(_QWORD*)v53;
              if (*(_QWORD*)v53 != 0) {
                *(_QWORD*)(v53 + 8) = v68;
                v69 = 128;
                if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) == 0) {
                  v69 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v69, v68);
                *(_QWORD*)(v53 + 8) = 0;
                *(_QWORD*)(v53 + 16) = 0;
                *(_QWORD*)v53 = 0;
              }
              *(_QWORD*)v53 = v51[4];
              *(_QWORD*)(v53 + 8) = v51[5];
              *(_QWORD*)(v53 + 16) = v51[6];
              v51[5] = 0;
              v51[6] = 0;
              v51[4] = 0;
              v57 = v51[7];
              v58 = v51[8];
              v59 = v51[9];
              v60 = *((_DWORD*)v51 + 20);
              v51 += 11;
            }
            else {
              v62 = *(_QWORD*)(v53 - 24);
              *(_QWORD*)(v53 - 32) = *v54;
              if (v62 != 0) {
                *(_QWORD*)(v53 - 16) = v62;
                v63 = 128;
                if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) == 0) {
                  v63 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v63, v62);
                *(_QWORD*)(v53 - 16) = 0;
                *(_QWORD*)(v53 - 8) = 0;
                *v61 = 0;
              }
              *(_QWORD*)(v53 - 24) = v54[1];
              *(_QWORD*)(v53 - 16) = v54[2];
              *(_QWORD*)(v53 - 8) = v54[3];
              v54[2] = 0;
              v54[3] = 0;
              v54[1] = 0;
              v64 = *(_QWORD*)v53;
              if (*(_QWORD*)v53 != 0) {
                *(_QWORD*)(v53 + 8) = v64;
                v65 = 128;
                if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) == 0) {
                  v65 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v65, v64);
                *(_QWORD*)(v53 + 8) = 0;
                *(_QWORD*)(v53 + 16) = 0;
                *(_QWORD*)v53 = 0;
              }
              *(_QWORD*)v53 = v54[4];
              *(_QWORD*)(v53 + 8) = v54[5];
              *(_QWORD*)(v53 + 16) = v54[6];
              v54[5] = 0;
              v54[6] = 0;
              v54[4] = 0;
              v57 = v54[7];
              v58 = v54[8];
              v59 = v54[9];
              v60 = *((_DWORD*)v54 + 20);
              v54 += 11;
            }
            *(_DWORD*)(v53 + 48) = v60;
            *(_QWORD*)(v53 + 32) = v58;
            *(_QWORD*)(v53 + 40) = v59;
            *(_QWORD*)(v53 + 24) = v57;
            v53 += 88;
            if (v51 == v52) {
              for (; v54 != v56; v53 += 88) {
                v82 = *(_QWORD*)(v53 - 24);
                *(_QWORD*)(v53 - 32) = *v54;
                if (v82 != 0) {
                  *(_QWORD*)(v53 - 16) = v82;
                  if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) != 0) {
                    v83 = 128;
                  }
                  else {
                    v83 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v83, v82);
                  *(_QWORD*)(v53 - 16) = 0;
                  *(_QWORD*)(v53 - 8) = 0;
                  *(_QWORD*)(v53 - 24) = 0;
                }
                *(_QWORD*)(v53 - 24) = v54[1];
                *(_QWORD*)(v53 - 16) = v54[2];
                *(_QWORD*)(v53 - 8) = v54[3];
                v54[2] = 0;
                v54[3] = 0;
                v54[1] = 0;
                v84 = *(_QWORD*)v53;
                if (*(_QWORD*)v53 != 0) {
                  *(_QWORD*)(v53 + 8) = v84;
                  if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) != 0) {
                    v85 = 128;
                  }
                  else {
                    v85 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v85, v84);
                  *(_QWORD*)(v53 + 8) = 0;
                  *(_QWORD*)(v53 + 16) = 0;
                  *(_QWORD*)v53 = 0;
                }
                *(_QWORD*)v53 = v54[4];
                *(_QWORD*)(v53 + 8) = v54[5];
                *(_QWORD*)(v53 + 16) = v54[6];
                v54[5] = 0;
                v54[6] = 0;
                v54[4] = 0;
                v78 = v54[7];
                v79 = v54[8];
                v80 = v54[9];
                v81 = *((_DWORD*)v54 + 20);
                v54 += 11;
                *(_DWORD*)(v53 + 48) = v81;
                *(_QWORD*)(v53 + 32) = v79;
                *(_QWORD*)(v53 + 40) = v80;
                *(_QWORD*)(v53 + 24) = v78;
              }
              goto LABEL_88;
            }
          }
          for (; v51 != v52; v53 += 88) {
            v74 = *(_QWORD*)(v53 - 24);
            *(_QWORD*)(v53 - 32) = *v51;
            if (v74 != 0) {
              *(_QWORD*)(v53 - 16) = v74;
              if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) != 0) {
                v75 = 128;
              }
              else {
                v75 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v75, v74);
              *(_QWORD*)(v53 - 16) = 0;
              *(_QWORD*)(v53 - 8) = 0;
              *(_QWORD*)(v53 - 24) = 0;
            }
            *(_QWORD*)(v53 - 24) = v51[1];
            *(_QWORD*)(v53 - 16) = v51[2];
            *(_QWORD*)(v53 - 8) = v51[3];
            v51[2] = 0;
            v51[3] = 0;
            v51[1] = 0;
            v76 = *(_QWORD*)v53;
            if (*(_QWORD*)v53 != 0) {
              *(_QWORD*)(v53 + 8) = v76;
              if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) != 0) {
                v77 = 128;
              }
              else {
                v77 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v77, v76);
              *(_QWORD*)(v53 + 8) = 0;
              *(_QWORD*)(v53 + 16) = 0;
              *(_QWORD*)v53 = 0;
            }
            *(_QWORD*)v53 = v51[4];
            *(_QWORD*)(v53 + 8) = v51[5];
            *(_QWORD*)(v53 + 16) = v51[6];
            v51[5] = 0;
            v51[6] = 0;
            v51[4] = 0;
            v70 = v51[7];
            v71 = v51[8];
            v72 = v51[9];
            v73 = *((_DWORD*)v51 + 20);
            v51 += 11;
            *(_DWORD*)(v53 + 48) = v73;
            *(_QWORD*)(v53 + 32) = v71;
            *(_QWORD*)(v53 + 40) = v72;
            *(_QWORD*)(v53 + 24) = v70;
          }
        LABEL_88:
          if (v100 != nullptr) {
            v86 = v100 + 5;
            do {
              v87 = *(v86 - 1);
              if (v87 != 0) {
                *v86 = v87;
                if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) != 0) {
                  v88 = 128;
                }
                else {
                  v88 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v88, v87);
              }
              v89 = *(v86 - 4);
              if (v89 != 0) {
                *(v86 - 3) = v89;
                if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) != 0) {
                  v90 = 128;
                }
                else {
                  v90 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v90, v89);
              }
              --v6;
              v86 += 11;
            } while (v6 != 0);
          }
        }
        else {
          game_ebabe0(a1, v11, a3 >> 1, a4, a5);
          game_ebabe0(v9 + a1, v8, v10, a4, a5);
          GameRoutine_ebbc40((__int64*)a1, (__int64*)(v9 + a1), v8, v7, v10, a4,
                             a5);
        }
      }
    }
  }
}

void game_f6af20(unsigned __int64* a1, unsigned int a2)
{

#pragma clang fp contract(off)
  const char* v3;
  char* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  float32x4_t v24;
  struct {
    float32x4_t v25[3];
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    int v31;
    char gap108_[4];
    float32x4_t v32;
    float32x4_t v33;
  } v25_;
  float32x4_t v34;
  float32x4_t v35;
  struct {
    __int64 v36;
    unsigned __int64 v37;
    char* v38;
  } v36_;
  struct {
    float32x4_t v39[2];
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    int v45;
    char gap316_[4];
    char v46;
  } v39_;

  v36_.v37 = 0;
  v36_.v38 = nullptr;
  v36_.v36 = 0;
  if (a2 > 3) {
    v3 = (const char*)&GameData_1b9c4a8;
  }
  else {
    v3 = (char*)GameData_1b9c59c + GameData_1b9c59c[a2];
  }
  GameRoutine_60a020((char*)&v36_.v36, v3);
  if ((v36_.v36 & 1) != 0) {
    v4 = v36_.v38;
  }
  else {
    v4 = (char*)&v36_.v36 + 1;
  }
  if ((v36_.v36 & 1) != 0) {
    v5 = v36_.v37;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v36_.v36 >> 1;
  }
  if (v5 != 0) {
    v6 = *(_QWORD**)(*(_QWORD*)GameData_212ec00 + 8LL);
    v7 = *(_QWORD**)(*(_QWORD*)GameData_212ec00 + 16LL);
    while (v6 != v7) {
      v8 = *v6;
      if ((*(_BYTE*)(*v6 + 16LL) & 1) == 0) {
        v9 = *(unsigned __int8*)(v8 + 112);
        v10 = *(_QWORD*)(v8 + 120);
        if ((v9 & 1) == 0) {
          v10 = v9 >> 1;
        }
        if (v5 == v10) {
          v11 = (v9 & 1) != 0 ? *(_QWORD*)(v8 + 128) : v8 + 113;
          if (memcmp((__int64)v4, v11, v5) == 0) {
            v13 = v6[1];
            if (v13 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                        memory_order_relaxed);
            }
            LANES128(v14).n128_u64[0] = *(_QWORD*)(v8 + 160);
            LODWORD(v12) = *(_DWORD*)(v8 + 168);
            LANES128(v14).n128_u64[1] = v12;
            v35 = v14;
            v24 = vaddq_f32(v14, COERCE_AS(float32x4_t, GameData_1a82e80));
            v25_.v25[0] =
                vaddq_f32(v14, COERCE_AS(float32x4_t, GameData_1a82d40));
            collision_670c60((void*)((__int64)v39_.v39), v25_.v25, &v24, 1);
            if (v39_.v46 == 1) {
              v15 = v39_.v39[0];
              v16 = v39_.v39[1];
              LANES128(v15).n128_u32[3] = 0;
              v25_.v28 = v39_.v42;
              v25_.v29 = v39_.v43;
              v18 = v24;
              v17 = v25_.v25[0];
              LANES128(v16).n128_u32[3] = 0;
              LANES128(v17).n128_u32[3] = 0;
              LANES128(v18).n128_u32[3] = 0;
              v25_.v30 = v39_.v44;
              v25_.v25[1] = v15;
              v25_.v25[2] = v16;
              v25_.v32 = v17;
              v25_.v33 = v18;
              v34 = v15;
              v25_.v31 = v39_.v45;
              v25_.v26 = v39_.v40;
              v25_.v27 = v39_.v41;
            }
            v19 = &v35;
            if (v39_.v46 != 0) {
              v19 = &v34;
            }
            v21 = LANES128(*(v19)).n128_u64[0];
            v20 = LANES128(*(v19)).n128_i64[1];
            *a1 = v21;
            a1[1] = v20;
            if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
              std___1___shared_weak_count___release_weak(v13);
            }
            goto LABEL_33;
          }
        }
      }
      v6 += 2;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v23 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v23;
    __cxa_guard_release((__int64)&GameData_21a6130);
  }
  *(_OWORD*)a1 = GameData_21a6120;
LABEL_33:
  if ((v36_.v36 & 1) != 0 && v36_.v38 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  (__int64)v36_.v38);
  }
}

__int64* game_fcf860(__int64* a1, __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64* v6;
  unsigned __int64 v7;
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
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64* v21;
  _QWORD* v22;
  __int64* v23;
  _QWORD* v24;
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
  __int64 v35;

  v2 = a1[1] - *a1;
  v3 = 1 - 0x71C71C71C71C71C7LL * (v2 >> 3);
  if (v3 > 0x38E38E38E38E38ELL) {
    GameRoutine_fcfb90();
  }
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (0x1C71C71C71C71C72LL * ((a1[2] - *a1) >> 3) > v3) {
    v3 = 0x1C71C71C71C71C72LL * ((a1[2] - *a1) >> 3);
  }
  if (0x8E38E38E38E38E39LL * ((a1[2] - *a1) >> 3) >= 0x1C71C71C71C71C7LL) {
    v7 = 0x38E38E38E38E38ELL;
  }
  else {
    v7 = v3;
  }
  if (v7 != 0) {
    if (v7 > 0x38E38E38E38E38ELL) {
      GameRoutine_60a210();
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        72 * v7, 16, 0);
  }
  else {
    v8 = 0;
  }
  v9 = (__int64*)(v8 + v2);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v9, a2[2], a2[1]);
  }
  else {
    v10 = a2[1];
    *v9 = *a2;
    v9[1] = v10;
    v9[2] = a2[2];
  }
  if ((a2[3] & 1) != 0) {
    fw_text_String_CopyTerminated(v9 + 3, a2[5], a2[4]);
  }
  else {
    v11 = a2[4];
    v12 = a2[5];
    v9[3] = a2[3];
    v9[4] = v11;
    v9[5] = v12;
  }
  v14 = a2[6];
  v13 = a2[7];
  v9[7] = 0;
  v9[8] = 0;
  v15 = v13 - v14;
  v9[6] = 0;
  if (v13 != v14) {
    if (0xAAAAAAAAAAAAAAABLL * (v15 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_fcf840();
    }
    v16 = fw_memory_HeapManager_Allocate(*v6, v15, 16, 0);
    v17 = v16 + v15;
    v9[6] = v16;
    v9[7] = v16;
    v9[8] = v16 + v15;
    memcpy(v16, v14, v15 - 7);
    v9[7] = v17;
  }
  v18 = v9 + 9;
  v19 = v8 + 72 * v7;
  v20 = *a1;
  v21 = (__int64*)a1[1];
  v22 = (__int64*)((char*)v9 + *a1 - (_QWORD)v21);
  if (v21 != (__int64*)*a1) {
    v23 = (__int64*)*a1;
    v24 = v22;
    do {
      v25 = *v23;
      v26 = v23[2];
      v24[1] = v23[1];
      v24[2] = v26;
      *v24 = v25;
      v23[1] = 0;
      v23[2] = 0;
      *v23 = 0;
      v27 = v23[3];
      v28 = v23[5];
      v24[4] = v23[4];
      v24[5] = v28;
      v24[3] = v27;
      v23[4] = 0;
      v23[5] = 0;
      v23[3] = 0;
      v24[7] = 0;
      v24[8] = 0;
      v24[6] = 0;
      v24[6] = v23[6];
      v24[7] = v23[7];
      v24[8] = v23[8];
      v23[7] = 0;
      v23[8] = 0;
      v23[6] = 0;
      v23 += 9;
      v24 += 9;
    } while (v23 != v21);
    do {
      v29 = *(_QWORD*)(v20 + 48);
      if (v29 != 0) {
        *(_QWORD*)(v20 + 56) = v29;
        if (*(_QWORD*)(*v6 + 200) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free(*v6 + v30, v29);
      }
      if ((*(_BYTE*)(v20 + 24) & 1) != 0) {
        v31 = *(_QWORD*)(v20 + 40);
        if (v31 != 0) {
          if (*(_QWORD*)(*v6 + 200) != 0) {
            v32 = 128;
          }
          else {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v32, v31);
        }
      }
      if ((*(_BYTE*)v20 & 1) != 0) {
        v33 = *(_QWORD*)(v20 + 16);
        if (v33 != 0) {
          if (*(_QWORD*)(*v6 + 200) != 0) {
            v34 = 128;
          }
          else {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v34, v33);
        }
      }
      v20 += 72;
    } while ((__int64*)v20 != v21);
    v20 = *a1;
  }
  *a1 = (__int64)v22;
  a1[1] = (__int64)v18;
  a1[2] = v19;
  if (v20 != 0) {
    v35 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v35, v20);
  }
  return v18;
}

__int64 game_1007060(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64* v5;
  __int64 v6;
  int v7;
  char v8;
  struct {
    __int64 v10;
    void* v11;
  } v10_;

  *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 10LL) = 1;
  CmdBtlSkipInput_1006e20(a1);
  v2 = GameData_212f518[0];
  if (*(_DWORD*)(a1 + 28) != 2 && *(_BYTE*)(a1 + 12) != 0) {
    v3 = *(_QWORD*)GameData_212f518[0];
    *(_BYTE*)(a1 + 12) = 0;
    GameRoutine_100b790(v3);
    if ((*(_BYTE*)(a1 + 11) & 1) == 0 &&
        (*(_BYTE*)(*(_QWORD*)v2 + 10LL) & 1) == 0 &&
        (GameRoutine_ec1530() & 1) == 0 &&
        game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
    }
  }
  if (*(_BYTE*)(a1 + 11) == 1) {
    v4 = *(_BYTE*)(a1 + 20);
    *(_BYTE*)(a1 + 11) = 0;
    if ((v4 & 1) != 0) {
      AutoPlay_f82bc0(*GameData_212f4e0[0], *(_DWORD*)(a1 + 16));
    }
    else {
      v5 = GameData_212f4e0[0];
      v10_.v11 = &GameData_1acfb96;
      v6 = *GameData_212f4e0[0];
      v10_.v10 = game_HashString((__int64)&GameData_1acfb96);
      if (game_GameModeData_instance_ != 0) {
        GameVariable_828800(game_GameModeData_instance_ + 40,
                            (unsigned __int64*)&v10_.v10, -1);
      }
      v10_.v11 = &GameData_1abc9d5;
      v10_.v10 = game_HashString((__int64)&GameData_1abc9d5);
      if (game_GameModeData_instance_ != 0) {
        GameVariable_828800(game_GameModeData_instance_ + 40,
                            (unsigned __int64*)&v10_.v10, 0);
      }
      v7 = *(unsigned __int8*)(v6 + 28);
      *(_BYTE*)(v6 + 13) = 0;
      if (v7 == 1) {
        *(_BYTE*)(v6 + 28) = 0;
      }
      if (*(_BYTE*)(*v5 + 20) == 1) {
        *(_BYTE*)(*v5 + 20) = 0;
      }
    }
  }
  if ((*(_BYTE*)(a1 + 9) & 1) == 0 && game_ProcFadeView_instance_ != 0) {
    v8 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
    *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 2;
    if (game_ProcFadeView_instance_ != 0) {
      game_809ba0(game_ProcFadeView_instance_, 0x1.1111120000000p-3f);
      if (game_ProcFadeView_instance_ != 0) {
        *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v8;
      }
    }
  }
  if ((*(_BYTE*)(*(_QWORD*)v2 + 10LL) & 1) == 0 &&
      (GameRoutine_ec1530() & 1) == 0 && game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
  }
  return GameHr_1006bf0(a1);
}

void game_1017a40(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[25];

  v1 = *(__int64**)(a1 + 88);
  v2 = *(__int64**)(a1 + 96);
  if (v1 != v2) {
    do {
      if ((snd_fnd_WeakHandle_isValid(v1) & 1) != 0) {
        v4 = snd_fnd_WeakHandle_get((__int64)v1);
        snd_Fade_Fade_10c910((__int64)v10, 500);
        (*(void (**)(__int64, _QWORD*, _QWORD, double))(
            *(_QWORD*)(v4 - 5592) + 248LL))(v4 - 5592, v10, 0, 0x0.0p+0);
        snd_Fade_Destroy_Fade(v10);
      }
      v1 += 2;
    } while (v1 != v2);
    v1 = *(__int64**)(a1 + 88);
  }
  if (v1 != nullptr) {
    *(_QWORD*)(a1 + 96) = v1;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                  (__int64)v1);
  }
  v6 = *(_QWORD**)(a1 + 64);
  if (v6 == (_QWORD*)(a1 + 32)) {
    v7 = 32;
    goto LABEL_15;
  }
  if (v6 != nullptr) {
    v7 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v8);
    }
  }
}

void game_1017cc0(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  float v1;
  __int64 v3;
  float32x4_t* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float32x4_t* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 n128_u64;
  float32x4_t v12;
  int8x16_t v13;
  unsigned __int32 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  float32x4_t* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  unsigned __int64 v26;
  int* v27;
  __int64 v28;
  __int64 v29;
  float32x4_t* v30;
  float32x4_t v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  bool v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int32 v42;
  float32x4_t v43;
  float32x4_t v44;
  struct {
    __int64 v45;
    int v46;
  } v45_;
  struct {
    float32x4_t* v47;
    float32x4_t* v48;
    __int64 v49;
  } v47_;
  float32x4_t v50;
  struct {
    _QWORD v51[2];
    unsigned __int32 v52;
  } v51_;
  struct {
    _QWORD v53[2];
    unsigned __int32 v54;
  } v53_;

  v1 = *(float*)(a1 + 112) +
       (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                       -0x1.0aef000000000p+4f) /
               0x1.f400000000000p+9f);
  *(float*)(a1 + 112) = v1;
  if (v1 > 0x0.0p+0f) {
    return;
  }
  v3 = *(_QWORD*)(a1 + 64);
  v50 = (__typeof__(v50)){0};
  v47_.v48 = nullptr;
  v47_.v49 = 0;
  v47_.v47 = nullptr;
  if (v3 == 0) {
    v10 = 0;
  LABEL_45:
    v27 = (int*)(a1 + 28);
    v37 = *(_DWORD*)(a1 + 28);
    LODWORD(v29) = 0;
    goto LABEL_46;
  }
  (*(void (**)(__int64, float32x4_t*, float32x4_t**))(*(_QWORD*)v3 + 48LL))(
      v3, &v50, &v47_.v47);
  v4 = v47_.v47;
  v5 = (char*)v47_.v48 - (char*)v47_.v47;
  if (v47_.v48 == v47_.v47) {
    v10 = 0;
    goto LABEL_45;
  }
  v6 = v5 >> 4;
  if ((unsigned __int64)(v5 >> 4) >> 59 != 0) {
  LABEL_60:
    GameRoutine_1018450();
  }
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      2 * v5, 16, 0);
  v8 = v47_.v48;
  v9 = v7 + 32 * v6;
  v10 = v7;
  if (v4 == v47_.v48) {
    goto LABEL_45;
  }
  n128_u64 = v7;
  do {
    v12 = vsubq_f32(*v4, v50);
    v13 = vmulq_f32(v12, v12);
    LANES128(v13).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
            .n64_u64[0];
    v14 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
            .n64_u32[0];
    if (n128_u64 < v9) {
      *(float32x4_t*)n128_u64 = *v4;
      *(_DWORD*)(n128_u64 + 16) = v14;
      n128_u64 += 32LL;
    }
    else {
      v15 = n128_u64 - v10;
      v16 = (__int64)(n128_u64 - v10) >> 5;
      v17 = v16 + 1;
      if ((unsigned __int64)(v16 + 1) >> 59 != 0) {
        goto LABEL_60;
      }
      v42 = v14;
      v43 = *v4;
      if ((__int64)(v9 - v10) >> 4 > v17) {
        v17 = (__int64)(v9 - v10) >> 4;
      }
      if (v9 - v10 >= 0x7FFFFFFFFFFFFFE0LL) {
        v17 = 0x7FFFFFFFFFFFFFFLL;
      }
      if (v17 >> 59 != 0) {
        GameRoutine_60a210();
      }
      v18 = 32 * v17;
      v19 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v17, 16, 0);
      v20 = (float32x4_t*)(v19 + v15);
      v21 = v19 + v15 - 32 * v16;
      *v20 = v43;
      LANES128(v20[1]).n128_u32[0] = v42;
      if (v10 != n128_u64) {
        v22 = v10;
        v23 = v21;
        do {
          *(_QWORD*)(v23 + 8) = *(_QWORD*)(v22 + 8);
          *(_QWORD*)v23 = *(_QWORD*)v22;
          v24 = *(_DWORD*)(v22 + 16);
          v22 += 32;
          *(_DWORD*)(v23 + 16) = v24;
          v23 += 32;
        } while (v22 != n128_u64);
      }
      v9 = v19 + v18;
      n128_u64 = (unsigned __int64)LANES128(v20[2]).n128_u64;
      if (v10 != 0) {
        v25 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v10);
      }
      v10 = v21;
    }
    ++v4;
  } while (v4 != v8);
  if (v10 == n128_u64) {
    goto LABEL_45;
  }
  v26 = (__int64)(n128_u64 - v10) >> 5;
  GameHr_1018480(v10, (_OWORD*)n128_u64, (2 * __clz(v26)) ^ 0x7E, 1);
  v27 = (int*)(a1 + 28);
  if (*(int*)(a1 + 28) >= 1) {
    v28 = 0;
    v29 = 0;
    v30 = (float32x4_t*)v10;
    do {
      v31 = *v30;
      v30 += 2;
      v44 = v31;
      if ((snd_fnd_WeakHandle_isValid((__int64*)(*(_QWORD*)(a1 + 88) + v28)) &
           1) != 0) {
        v53_.v53[0] = snd_fnd_Vec3_vtable;
        v53_.v53[1] = LANES128(v44).n128_u64[0];
        v53_.v54 = LANES128(v44).n128_u32[2];
        v32 = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 88) + v28);
        if (v32 != 0) {
          v33 = v32 - 5592;
        }
        else {
          v33 = 0;
        }
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)(v33 + 40) + 1040LL))(
            v33 + 40, v53_.v53);
      }
      else {
        v34 = *(_QWORD*)(a1 + 16);
        v35 = (*(_BYTE*)a1 & 1) == 0;
        v51_.v51[0] = snd_Vec3_vtable;
        v51_.v51[1] = LANES128(v44).n128_u64[0];
        v51_.v52 = LANES128(v44).n128_u32[2];
        if (v35) {
          v36 = a1 + 1;
        }
        else {
          v36 = v34;
        }
        if (v36 != 0) {
          snd_Fade_Fade_10c830((__int64)v53_.v53, 0x0.0p+0f);
          snd_playAt_ff5f0((void*)(handle), v36, v36, (__int64)v51_.v51,
                           (__int64)v53_.v53, 0, 0x10001u, 0, 0x0.0p+0f,
                           0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade(v53_.v53);
        }
        else {
          v45_.v45 = 0;
          v45_.v46 = 0x2000;
        }
        GameRoutine_112180(*(_QWORD*)(a1 + 88) + v28, (__int64)&v45_.v45);
      }
      v37 = *v27;
      if (v26 <= ++v29) {
        break;
      }
      v28 += 16;
    } while (v29 < v37);
  LABEL_46:
    if ((int)v29 < v37) {
      v38 = 16LL * (unsigned int)v29;
      do {
        if ((snd_fnd_WeakHandle_isValid((__int64*)(*(_QWORD*)(a1 + 88) + v38)) &
             1) != 0) {
          v39 = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 88) + v38);
          snd_Fade_Fade_10c910((__int64)v53_.v53, 500);
          (*(void (**)(__int64, _QWORD*, _QWORD, double))(
              *(_QWORD*)(v39 - 5592) + 248LL))(v39 - 5592, v53_.v53, 0,
                                               0x0.0p+0);
          snd_Fade_Destroy_Fade(v53_.v53);
        }
        LODWORD(v29) = v29 + 1;
        v38 += 16;
      } while (*v27 > (int)v29);
    }
  }
  if (v10 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v40,
                                  v10);
  }
  if (v47_.v47 != nullptr) {
    v47_.v48 = v47_.v47;
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                                  (__int64)v47_.v47);
  }
}

void game_1029080(__int64 a1)
{
  __int64* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float32x4_t* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  float32x4_t v14;
  float v15;
  double v16;
  double v17;
  unsigned int v18;
  float32x4_t v19;
  unsigned __int64 v20;
  unsigned int v21;
  float32x4_t v22;
  int8x16_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  __int64 v29;
  int8x16_t v30;
  int8x16_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  __int64 v40;
  unsigned __int32 v41;
  float32x4_t v42;
  _QWORD* v43;
  float v44;
  __int64 v45;
  int8x16_t* v46;
  int v47;
  __int64 v48;
  float32x4_t v49;
  float32x4_t v50;

  v1 = GameData_212d458[0];
  v2 = *(_QWORD**)(*GameData_212d458[0] + 24);
  v3 = *(_QWORD**)(*GameData_212d458[0] + 32);
  if (v2 != v3) {
    while (1) {
      v4 = *v2;
      if (*(_QWORD*)(*v2 + 264LL) == a1) {
        break;
      }
      v2 += 2;
      if (v2 == v3) {
        return;
      }
    }
    v5 = v2[1];
    if (v5 != 0) {
      v6 = v2[1];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v7 = std___1___shared_weak_count_lock(v6);
      std___1___shared_weak_count___release_weak(v5);
      if (v7 != 0) {
        v8 = *(_QWORD*)(*v1 + 80);
        if (v8 != 0) {
          v9 = *(float32x4_t**)(*v1 + 72);
          v10 = *(_QWORD*)(*v1 + 80);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
          v11 = std___1___shared_weak_count_lock(v10);
          std___1___shared_weak_count___release_weak(v8);
          if (v11 != 0 && v9 != nullptr) {
            LANES128(v14).n128_u64[0] = *(_QWORD*)(v4 + 392);
            LODWORD(v12) = *(_DWORD*)(v4 + 400);
            v15 = *(float*)(v4 + 404);
            LANES128(v14).n128_u64[1] = v12;
            v49 = v14;
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                                      memory_order_acquire) &
                 1) == 0 &&
                __cxa_guard_acquire((__int64)&GameData_21a61b0) != 0) {
              v48 = *((_QWORD*)GameData_212c560 + 1);
              *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
              *((_QWORD*)&GameData_21a61a0 + 1) = v48;
              __cxa_guard_release((__int64)&GameData_21a61b0);
            }
            v16 = cos((float)(v15 * 0x1.1df46a0000000p-6f) *
                      0x1.0000000000000p-1);
            v17 = sin((float)(v15 * 0x1.1df46a0000000p-6f) *
                      0x1.0000000000000p-1);
            *(float*)&v18 = v16 + PSEUDO_UNFUSED(v17 * 0x0.0p+0);
            LANES128(v19).n128_u64[0] = GameData_21a61a0;
            *(float*)&v20 = PSEUDO_UNFUSED(v17 * -0x0.0p+0) + v16 * 0x0.0p+0;
            *(float*)&v21 = v17 + PSEUDO_UNFUSED(v16 * 0x0.0p+0);
            LANES128(v22).n128_u64[0] = __PAIR64__(v21, v20);
            LANES128(v22).n128_u64[1] = __PAIR64__(v18, v20);
            v23 = vmulq_f32(v22, COERCE_AS(float32x4_t, GameData_1a829d0));
            LANES128(v22).n128_u64[0] =
                LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                                     COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v24).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v22).n128_u64[1] = LANES128(v22).n128_u64[0];
            LANES128(v25).n128_u64[0] =
                LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                                     COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v26).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v19).n128_u64[1] = LANES128(v25).n128_u64[0];
            *(int32x2_t*)&LANES128(v26).n128_i8[8] = vdup_lane_s32(
                COERCE_AS(int32x2_t, LANES128(v23).n128_u64[0]), 1);
            *(int8x8_t*)&LANES128(v24).n128_i8[8] =
                vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
            v27 = vmlaq_f32(vmulq_f32(v22, v23),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v19, v24));
            LANES128(v19).n128_u64[0] =
                LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                                     COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v25).n128_u64[1] = LANES128(v19).n128_u64[0];
            LANES128(v19).n128_u64[1] = GameData_21a61a0;
            LANES128(v28).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            v29 = *(_QWORD*)(LANES128(v9[1]).n128_u64[1] + 16);
            *(int8x8_t*)&LANES128(v28).n128_i8[8] =
                vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
            v30 = vmlsq_f32(vmlaq_f32(v27,
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v19, v26)),
                            v28, v25);
            LANES128(v28).n128_u64[0] = __PAIR64__(v21, v20);
            HIDWORD(v20) = v18;
            LANES128(v31).n128_u64[0] = __PAIR64__(v21, v20);
            LANES128(v25).n128_u64[0] = __PAIR64__(v21, v20);
            LANES128(v31).n128_u64[1] = v20;
            LANES128(v32).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v33).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v34).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v31).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v35).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v32).n128_u64[1] = LANES128(v32).n128_u64[0];
            LANES128(v25).n128_u64[1] = LANES128(v33).n128_u64[0];
            *(int8x8_t*)&LANES128(v34).n128_i8[8] =
                vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
            LANES128(v33).n128_u64[1] = LANES128(v31).n128_u64[0];
            LANES128(v31).n128_u64[1] = LANES128(v28).n128_u64[0];
            *(int32x2_t*)&LANES128(v35).n128_i8[8] = vdup_lane_s32(
                COERCE_AS(int32x2_t, LANES128(v30).n128_u64[0]), 1);
            v36 = vmlaq_f32(vmlaq_f32(vmulq_f32(v32, v30),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v25, v34)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v31, v35));
            LANES128(v31).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v31).n128_i8[8] =
                vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
            LANES128(v30).n128_u64[0] = 0x4040000040400000LL;
            LANES128(v30).n128_u64[1] = 0x4040000040400000LL;
            v37 = vmlsq_f32(v36, v31, v33);
            LANES128(v37).n128_u32[3] = 0;
            v50 = vaddq_f32(v49, vmulq_f32(v37, v30));
            game_zview_d12d30_alt1(v29, (int32x2_t*)&v50, 1);
            v38 = vsubq_f32(
                v9[79],
                *(float32x4_t*)(*(_QWORD*)(LANES128(v9[1]).n128_u64[1] + 16) +
                                560LL));
            v39 = vmulq_f32(v38, v38);
            LANES128(v39).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v39, v39, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
                    .n64_u64[0];
            if (LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
                    .n64_f32[0] > 0x1.0000000000000p-23f) {
              v40 = *(_QWORD*)(*v1 + 120);
              if ((*(_BYTE*)(v40 + 12) & 1) == 0) {
                *(_BYTE*)(v40 + 12) = 1;
              }
            }
            v41 = LANES128(v50).n128_u32[2];
            LANES128(v9[79]).n128_u64[0] = LANES128(v50).n128_u64[0];
            v42 = v9[79];
            LANES128(v42).n128_u64[1] = v41;
            v9[79] = v42;
            HubCharacterNatives_cabfc0_alt1((__int64)v9, 1);
            if ((LANES128(v9[83]).n128_u8[1] & 1) == 0) {
              LANES128(v9[83]).n128_u8[1] = 1;
            }
            v43 = *(_QWORD**)(LANES128(v9[1]).n128_u64[1] + 16);
            v44 = (float)(v15 + 0x1.6800000000000p+7f) * 0x1.1df46a0000000p-6f;
            if (v43[107] != 0) {
              v45 = v43[108];
              v43[107] = 0;
              v43[108] = 0;
              if (v45 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
                std___1___shared_weak_count___release_weak(v45);
              }
            }
            v46 = (int8x16_t*)v43[61];
            v47 = LANES128(v46[11]).n128_u8[4];
            LANES128(v46[2]).n128_f32[0] = v44;
            LANES128(v46[2]).n128_f32[1] = v44;
            if (v47 == 1) {
              LANES128(v46[11]).n128_u8[4] = 0;
            }
            CharacterRotate_d519c0(v46);
            goto LABEL_28;
          }
          if (v11 != 0) {
          LABEL_28:
            if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
              std___1___shared_weak_count___release_weak(v11);
            }
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
      }
    }
  }
}

_QWORD* game_1038880(__int64* a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v2 = a1[1] - *a1;
  v3 = (v2 >> 6) + 1;
  if (v3 >> 58 != 0) {
    GameRoutine_1038a20();
  }
  v5 = a1[2] - *a1;
  if (v5 >> 5 > v3) {
    v3 = v5 >> 5;
  }
  v6 = (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFC0LL;
  v7 = 0x3FFFFFFFFFFFFFFLL;
  if (!v6) {
    v7 = v3;
  }
  if (v7 >> 58 != 0) {
    GameRoutine_60a210();
  }
  v8 = v7 << 6;
  v10 = fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       v7 << 6, 16, 0);
  v12 = a2[1];
  v13 = (_QWORD*)(v11 + v2);
  v14 = v11 + v8;
  *v13 = *a2;
  v13[1] = v12;
  v15 = a2[2];
  v16 = a2[3];
  a2[2] = 0;
  a2[3] = 0;
  v17 = *a1;
  v18 = (_QWORD*)a1[1];
  v13[2] = v15;
  v13[3] = v16;
  v13[4] = a2[4];
  v19 = a2[6];
  v20 = a2[7];
  v21 = v13 + 8;
  v13[6] = v19;
  v13[7] = v20;
  v22 = (_QWORD*)((char*)v13 + v17 - (_QWORD)v18);
  if ((_QWORD*)v17 != v18) {
    v23 = (_QWORD*)v17;
    v24 = v22;
    do {
      v24[1] = v23[1];
      *v24 = *v23;
      v24[2] = v23[2];
      v24[3] = v23[3];
      v23[2] = 0;
      v23[3] = 0;
      v24[4] = v23[4];
      v26 = v23[6];
      v25 = v23[7];
      v23 += 8;
      v24[6] = v26;
      v24[7] = v25;
      v24 += 8;
    } while (v23 != v18);
    do {
      v27 = *(_QWORD*)(v17 + 24);
      if (v27 != 0) {
        std___1___shared_weak_count___release_weak(v27);
      }
      v17 += 64;
    } while ((_QWORD*)v17 != v18);
    v17 = *a1;
  }
  *a1 = (__int64)v22;
  a1[1] = (__int64)v21;
  a1[2] = v14;
  if (v17 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v28, v17);
  }
  return v21;
}

__int64 game_104e980()
{
  __int64 result;

  result = GameData_2235100;
  if (GameData_2235100 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_2235100 + 48LL))(
        GameData_2235100);
  }
  return result;
}

__int64 game_109f0c0(__int64 result, const char* a2)
{
  _QWORD* v2;
  __int64 v3;
  const char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned __int16* v14;
  __int64 v15;

  if (result != 0) {
    v2 = *(_QWORD**)(result + 168);
    if (v2 == nullptr) {
      return 0;
    }
    v3 = *(_QWORD*)(*v2 + 8LL);
    if (v3 == 0) {
      return 0;
    }
    if (a2 != nullptr) {
      v4 = a2;
      v5 = strlen(a2);
      a2 = v4;
      v6 = v5;
    }
    else {
      v6 = 0;
    }
    v7 = v3 + 8;
    v8 = *(unsigned __int16*)(v3 + 12);
    v9 = v3 + 8 + 16 * v8;
    v10 = *(_DWORD*)v9;
    if ((signed __int32)*(_DWORD*)(v3 + 8) < (signed __int32)*(_DWORD*)v9) {
      do {
        v13 = (__int64)v10 >> 3;
        if (v6 > v13) {
          v11 = ((unsigned __int8)a2[v6 + ~v13] >> (v10 & 7)) & 1;
        }
        else {
          v11 = 0;
        }
        v8 = *(unsigned __int16*)(v3 + 12 + 16 * v8 + 2 * v11);
        v12 = v10 < (signed __int32)*(_DWORD*)(v7 + 16 * v8);
        v10 = *(_DWORD*)(v7 + 16 * v8);
      } while (v12);
      v9 = v7 + 16 * v8;
    }
    v14 = *(unsigned __int16**)(v9 + 8);
    if (v6 == *v14 && memcmp((__int64)(v14 + 1), (__int64)a2, v6) == 0 &&
        (~(v15 = v9 - v3 - 24) & 0xFFFFFFFF0LL) != 0) {
      return v2[4] + ((__int64)(int)(v15 >> 4) << 6);
    }
    else {
      return 0;
    }
  }
  return result;
}

void game_10ca920(__int64* a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int128 v6;
  atomic_ullong* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  signed __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      96, 16, 0);
  v6 = *(_OWORD*)(a2 + 16);
  *(_QWORD*)(v5 + 8) = 0;
  v7 = (atomic_ullong*)(v5 + 8);
  v8 = v5;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)v5 = GameData_200a608;
  *(_DWORD*)(v5 + 32) = *(_DWORD*)a2;
  v9 = v5 + 32;
  v10 = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(v5 + 48) = v6;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = v10;
  *(_DWORD*)(v5 + 80) = v10;
  *(_DWORD*)(v5 + 84) = 2;
  v11 = (__int64*)a1[1];
  v12 = a1[2];
  v13 = *(_OWORD*)(v5 + 48);
  *((_QWORD*)&v13 + 1) = DWORD2(v6);
  *(_OWORD*)(v5 + 48) = v13;
  if ((unsigned __int64)v11 >= v12) {
    v15 = *a1;
    v16 = (signed __int64)v11 - *a1;
    v17 = (v16 >> 4) + 1;
    if (v17 >> 60 != 0) {
      GameRoutine_10cac40();
    }
    v18 = v12 - v15;
    if (v18 >> 3 > v17) {
      v17 = v18 >> 3;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF0LL) {
      v19 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 >> 60 != 0) {
      GameRoutine_60a210();
    }
    v20 = fw_memory_HeapManager_Allocate(*v4, 16 * v19, 16, 0);
    v21 = (__int64*)(v20 + v16);
    v22 = v20 + 16 * v19;
    *v21 = v9;
    v21[1] = v8;
    v23 = v20 + v16 - 16 * (v16 >> 4);
    v14 = v20 + v16 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    memcpy(v23, v15, v16);
    *a1 = v23;
    a1[1] = v14;
    a1[2] = v22;
    if (v15 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v24, v15);
    }
  }
  else {
    *v11 = v9;
    v11[1] = v5;
    v14 = (__int64)(v11 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[1] = v14;
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
}

__int64 game_10cbfe0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64** v15;
  __int64 v16;
  __int64 v17;
  __int64** v18;
  __int64 v19;
  __int64 v20;
  __int64** v21;
  __int64 v22;
  __int64 v23;
  __int64** v24;
  __int64 v25;
  __int64 v26;
  __int64** v27;
  __int64 v28;
  __int64 v29;
  __int64** v30;
  __int64 v31;
  __int64 v32;
  __int64** v33;
  __int64 v34;
  __int64 v35;
  __int64** v36;
  __int64 v37;
  __int64 v38;
  __int64** v39;
  __int64 v40;
  __int64 v41;
  __int64** v42;
  __int64 v43;
  __int64 v44;
  __int64** v45;
  __int64 v46;
  __int64 v47;
  __int64** v48;
  __int64 v49;
  __int64 v50;
  __int64** v51;
  __int64 v52;
  __int64 v53;
  __int64** v54;
  __int64 v55;
  __int64 v56;
  __int64** v57;
  __int64 v58;
  __int64 v59;
  __int64** v60;
  __int64 v61;
  __int64 v62;
  __int64** v63;
  __int64 v64;
  __int64 v65;
  __int64** v66;
  __int64 v67;
  __int64 v68;
  __int64** v69;
  __int64 v70;
  __int64 v71;
  __int64** v72;
  __int64 v73;
  __int64 v74;
  __int64** v75;
  __int64 v76;
  __int64 v77;
  __int64** v78;
  __int64 v79;
  __int64 v80;
  __int64** v81;
  __int64 v82;
  __int64 v83;
  __int64** v84;
  __int64 v85;
  __int64 v86;
  __int64** v87;
  __int64 v88;
  __int64 v89;
  __int64** v90;
  __int64 v91;
  __int64 v92;
  __int64** v93;
  __int64 v94;
  __int64 v95;
  __int64** v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 result;
  __int64 v103;
  struct {
    _QWORD v104[4];
    _QWORD* v105;
  } v104_;
  __int64 v106[3];

  GameRoutine_10965c0(a1, a2);
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_BYTE*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_BYTE*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_BYTE*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)a1 = game_character_CharacterObservable_vtable;
  *(_QWORD*)(a1 + 168) = 0;
  *(_BYTE*)(a1 + 176) = 0;
  *(_BYTE*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_BYTE*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_WORD*)(a1 + 416) = 257;
  *(_BYTE*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_BYTE*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_BYTE*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_BYTE*)(a1 + 368) = 0;
  *(_DWORD*)(a1 + 420) = 1065353216;
  *(_QWORD*)(a1 + 376) = 0;
  *(_WORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_DWORD*)(a1 + 432) = 0x2000;
  v3 = *(_QWORD*)(a1 + 32);
  if (v3 == 0 || *(_QWORD*)(v3 + 8) == -1) {
    v4 = 0;
  }
  else {
    v4 = *(_QWORD*)(a1 + 40);
  }
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  game_character_CharacterAnimatorSound_CharacterAnimatorSound(v6, (_QWORD*)v4,
                                                               (_QWORD*)a1);
  v7 = *(__int64**)(a1 + 376);
  *(_QWORD*)(a1 + 376) = v6;
  if (v7 != nullptr) {
    CharacterAnimatorSound_10f7300(v7);
    v8 = v7[3];
    if (v8 != 0) {
      v9 = *(_QWORD*)v5;
      v7[4] = v8;
      v10 = 128;
      if (*(_QWORD*)(v9 + 200) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(v9 + v10, v8);
    }
    v11 = *v7;
    if (*v7 != 0) {
      v12 = *(_QWORD*)v5;
      v7[1] = v11;
      v13 = 128;
      if (*(_QWORD*)(v12 + 200) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(v12 + v13, v11);
    }
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v14, (__int64)v7);
  }
  v15 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200a700;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 30;
  strcpy((char*)v106 + 1, "Signal_Footstep");
  Signal_d30a60(v15, (const char*)v106 + 1, 15, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v16, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v17 = 32;
    goto LABEL_26;
  }
  if (v104_.v105 != nullptr) {
    v17 = 40;
  LABEL_26:
    (*(void (**)(__int64))(*v104_.v105 + v17))((__int64)v104_.v105);
  }
  v18 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200a780;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 30;
  strcpy((char*)v106 + 1, "Signal_Flapping");
  Signal_d30a60(v18, (const char*)v106 + 1, 15, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v19, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v20 = 32;
    goto LABEL_36;
  }
  if (v104_.v105 != nullptr) {
    v20 = 40;
  LABEL_36:
    (*(void (**)(__int64))(*v104_.v105 + v20))((__int64)v104_.v105);
  }
  v21 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200a800;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 30;
  strcpy((char*)v106 + 1, "Signal_Particle");
  Signal_d30a60(v21, (const char*)v106 + 1, 15, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v22, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v23 = 32;
    goto LABEL_46;
  }
  if (v104_.v105 != nullptr) {
    v23 = 40;
  LABEL_46:
    (*(void (**)(__int64))(*v104_.v105 + v23))((__int64)v104_.v105);
  }
  v24 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200a880;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  strcpy((char*)v106, "*Signal_GroundParticle");
  Signal_d30a60(v24, (const char*)v106 + 1, 21, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v25, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v26 = 32;
    goto LABEL_56;
  }
  if (v104_.v105 != nullptr) {
    v26 = 40;
  LABEL_56:
    (*(void (**)(__int64))(*v104_.v105 + v26))((__int64)v104_.v105);
  }
  v27 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200a900;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  strcpy((char*)v106, "\"Signal_WeaponDrop");
  Signal_d30a60(v27, (const char*)v106 + 1, 17, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v28, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v29 = 32;
    goto LABEL_66;
  }
  if (v104_.v105 != nullptr) {
    v29 = 40;
  LABEL_66:
    (*(void (**)(__int64))(*v104_.v105 + v29))((__int64)v104_.v105);
  }
  v30 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200a980;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  strcpy((char*)v106, "\"Signal_WeaponAnim");
  Signal_d30a60(v30, (const char*)v106 + 1, 17, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v31, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v32 = 32;
    goto LABEL_76;
  }
  if (v104_.v105 != nullptr) {
    v32 = 40;
  LABEL_76:
    (*(void (**)(__int64))(*v104_.v105 + v32))((__int64)v104_.v105);
  }
  v33 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200aa00;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 24;
  strcpy((char*)v106 + 1, "Signal_Sound");
  Signal_d30a60(v33, (const char*)v106 + 1, 12, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v34, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v35 = 32;
    goto LABEL_86;
  }
  if (v104_.v105 != nullptr) {
    v35 = 40;
  LABEL_86:
    (*(void (**)(__int64))(*v104_.v105 + v35))((__int64)v104_.v105);
  }
  v36 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200aa80;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 24;
  strcpy((char*)v106 + 1, "Signal_Voice");
  Signal_d30a60(v36, (const char*)v106 + 1, 12, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v37, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v38 = 32;
    goto LABEL_96;
  }
  if (v104_.v105 != nullptr) {
    v38 = 40;
  LABEL_96:
    (*(void (**)(__int64))(*v104_.v105 + v38))((__int64)v104_.v105);
  }
  v39 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200ab00;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 18;
  strcpy((char*)v106 + 1, "Signal_IK");
  Signal_d30a60(v39, (const char*)v106 + 1, 9, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v40, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v41 = 32;
    goto LABEL_106;
  }
  if (v104_.v105 != nullptr) {
    v41 = 40;
  LABEL_106:
    (*(void (**)(__int64))(*v104_.v105 + v41))((__int64)v104_.v105);
  }
  v42 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200ab80;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  strcpy((char*)v106, " Signal_Stabilize");
  Signal_d30a60(v42, (const char*)v106 + 1, 16, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v43, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v44 = 32;
    goto LABEL_116;
  }
  if (v104_.v105 != nullptr) {
    v44 = 40;
  LABEL_116:
    (*(void (**)(__int64))(*v104_.v105 + v44))((__int64)v104_.v105);
  }
  v45 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200ac00;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 26;
  strcpy((char*)v106 + 1, "Signal_LookAt");
  Signal_d30a60(v45, (const char*)v106 + 1, 13, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v46, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v47 = 32;
    goto LABEL_126;
  }
  if (v104_.v105 != nullptr) {
    v47 = 40;
  LABEL_126:
    (*(void (**)(__int64))(*v104_.v105 + v47))((__int64)v104_.v105);
  }
  v48 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200ac80;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 26;
  strcpy((char*)v106 + 1, "Signal_Facial");
  Signal_d30a60(v48, (const char*)v106 + 1, 13, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v49, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v50 = 32;
    goto LABEL_136;
  }
  if (v104_.v105 != nullptr) {
    v50 = 40;
  LABEL_136:
    (*(void (**)(__int64))(*v104_.v105 + v50))((__int64)v104_.v105);
  }
  v51 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200ad00;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  strcpy((char*)v106, "\"Signal_BeginTrail");
  Signal_d30a60(v51, (const char*)v106 + 1, 17, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v52, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v53 = 32;
    goto LABEL_146;
  }
  if (v104_.v105 != nullptr) {
    v53 = 40;
  LABEL_146:
    (*(void (**)(__int64))(*v104_.v105 + v53))((__int64)v104_.v105);
  }
  v54 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200ad80;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  strcpy((char*)v106, "$Signal_AttackVoice");
  Signal_d30a60(v54, (const char*)v106 + 1, 18, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v55, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v56 = 32;
    goto LABEL_156;
  }
  if (v104_.v105 != nullptr) {
    v56 = 40;
  LABEL_156:
    (*(void (**)(__int64))(*v104_.v105 + v56))((__int64)v104_.v105);
  }
  v57 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200ae00;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 24;
  strcpy((char*)v106 + 1, "Signal_Quake");
  Signal_d30a60(v57, (const char*)v106 + 1, 12, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v58, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v59 = 32;
    goto LABEL_166;
  }
  if (v104_.v105 != nullptr) {
    v59 = 40;
  LABEL_166:
    (*(void (**)(__int64))(*v104_.v105 + v59))((__int64)v104_.v105);
  }
  v60 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200ae80;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  strcpy((char*)v106, "\"Signal_RadialBlur");
  Signal_d30a60(v60, (const char*)v106 + 1, 17, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v61 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v61, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v62 = 32;
    goto LABEL_176;
  }
  if (v104_.v105 != nullptr) {
    v62 = 40;
  LABEL_176:
    (*(void (**)(__int64))(*v104_.v105 + v62))((__int64)v104_.v105);
  }
  v63 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200af00;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  strcpy((char*)v106, "\"Signal_ClothBlend");
  Signal_d30a60(v63, (const char*)v106 + 1, 17, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v64, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v65 = 32;
    goto LABEL_186;
  }
  if (v104_.v105 != nullptr) {
    v65 = 40;
  LABEL_186:
    (*(void (**)(__int64))(*v104_.v105 + v65))((__int64)v104_.v105);
  }
  v66 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200af80;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  strcpy((char*)v106, " Signal_ClothWind");
  Signal_d30a60(v66, (const char*)v106 + 1, 16, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v67 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v67, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v68 = 32;
    goto LABEL_196;
  }
  if (v104_.v105 != nullptr) {
    v68 = 40;
  LABEL_196:
    (*(void (**)(__int64))(*v104_.v105 + v68))((__int64)v104_.v105);
  }
  v69 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200b080;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  strcpy((char*)v106, "$Signal_ClothCancel");
  Signal_d30a60(v69, (const char*)v106 + 1, 18, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v70, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v71 = 32;
    goto LABEL_206;
  }
  if (v104_.v105 != nullptr) {
    v71 = 40;
  LABEL_206:
    (*(void (**)(__int64))(*v104_.v105 + v71))((__int64)v104_.v105);
  }
  v72 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200b180;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  strcpy((char*)v106, " Signal_Invisible");
  Signal_d30a60(v72, (const char*)v106 + 1, 16, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v73 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v73, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v74 = 32;
    goto LABEL_216;
  }
  if (v104_.v105 != nullptr) {
    v74 = 40;
  LABEL_216:
    (*(void (**)(__int64))(*v104_.v105 + v74))((__int64)v104_.v105);
  }
  v75 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200b200;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 22;
  strcpy((char*)v106 + 1, "Signal_Fade");
  Signal_d30a60(v75, (const char*)v106 + 1, 11, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v76 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v76 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v76, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v77 = 32;
    goto LABEL_226;
  }
  if (v104_.v105 != nullptr) {
    v77 = 40;
  LABEL_226:
    (*(void (**)(__int64))(*v104_.v105 + v77))((__int64)v104_.v105);
  }
  v78 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200b280;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 26;
  strcpy((char*)v106 + 1, "Signal_Camera");
  Signal_d30a60(v78, (const char*)v106 + 1, 13, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v79 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v79 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v79, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v80 = 32;
    goto LABEL_236;
  }
  if (v104_.v105 != nullptr) {
    v80 = 40;
  LABEL_236:
    (*(void (**)(__int64))(*v104_.v105 + v80))((__int64)v104_.v105);
  }
  v81 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200b300;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  strcpy((char*)v106, " Signal_CameraEnd");
  Signal_d30a60(v81, (const char*)v106 + 1, 16, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v82 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v82 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v82, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v83 = 32;
    goto LABEL_246;
  }
  if (v104_.v105 != nullptr) {
    v83 = 40;
  LABEL_246:
    (*(void (**)(__int64))(*v104_.v105 + v83))((__int64)v104_.v105);
  }
  v84 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200b380;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 24;
  strcpy((char*)v106 + 1, "Signal_DOF_C");
  Signal_d30a60(v84, (const char*)v106 + 1, 12, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v85 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v85 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v85, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v86 = 32;
    goto LABEL_256;
  }
  if (v104_.v105 != nullptr) {
    v86 = 40;
  LABEL_256:
    (*(void (**)(__int64))(*v104_.v105 + v86))((__int64)v104_.v105);
  }
  v87 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200b400;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 30;
  strcpy((char*)v106 + 1, "Signal_Illusion");
  Signal_d30a60(v87, (const char*)v106 + 1, 15, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v88 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v88 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v88, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v89 = 32;
    goto LABEL_266;
  }
  if (v104_.v105 != nullptr) {
    v89 = 40;
  LABEL_266:
    (*(void (**)(__int64))(*v104_.v105 + v89))((__int64)v104_.v105);
  }
  v90 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200b480;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  strcpy((char*)v106, "$Signal_IllusionEnd");
  Signal_d30a60(v90, (const char*)v106 + 1, 18, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v91 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v91 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v91, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v92 = 32;
  }
  else {
    if (v104_.v105 == nullptr) {
      goto LABEL_277;
    }
    v92 = 40;
  }
  (*(void (**)(__int64))(*v104_.v105 + v92))((__int64)v104_.v105);
LABEL_277:
  if ((*(_BYTE*)(v4 + 343) & 4) == 0) {
    goto LABEL_298;
  }
  v93 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200b500;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 24;
  strcpy((char*)v106 + 1, "Signal_Chant");
  Signal_d30a60(v93, (const char*)v106 + 1, 12, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v94 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v94 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v94, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v95 = 32;
    goto LABEL_287;
  }
  if (v104_.v105 != nullptr) {
    v95 = 40;
  LABEL_287:
    (*(void (**)(__int64))(*v104_.v105 + v95))((__int64)v104_.v105);
  }
  v96 = *(__int64***)(v4 + 320);
  v104_.v104[0] = GameData_200b580;
  v104_.v104[1] = a1;
  v104_.v105 = v104_.v104;
  LOBYTE(v106[0]) = 24;
  strcpy((char*)v106 + 1, "Signal_Shoot");
  Signal_d30a60(v96, (const char*)v106 + 1, 12, (__int64)v104_.v104);
  if ((v106[0] & 1) != 0 && v106[2] != 0) {
    v97 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v97 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v97, v106[2]);
  }
  if (v104_.v105 == v104_.v104) {
    v98 = 32;
  }
  else {
    if (v104_.v105 == nullptr) {
      goto LABEL_298;
    }
    v98 = 40;
  }
  (*(void (**)(__int64))(*v104_.v105 + v98))((__int64)v104_.v105);
LABEL_298:
  v99 = *(_QWORD*)(v4 + 72);
  v100 = *(_QWORD*)(v4 + 48);
  v101 = *(_QWORD*)(v4 + 56);
  if (v101 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v101 + 16), 1u,
                              memory_order_relaxed);
    v106[0] = v100;
    v106[1] = v101;
    v104_.v104[0] = GameData_200b600;
    v104_.v104[1] = a1;
    v104_.v105 = v104_.v104;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v101 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v106[0] = v100;
    v106[1] = 0;
    v104_.v104[0] = GameData_200b600;
    v104_.v104[1] = a1;
    v104_.v105 = v104_.v104;
  }
  CharacterTrailModule_d3d630((_QWORD*)(v99 + 56), v106, (__int64)v104_.v104,
                              1);
  if (v106[1] != 0) {
    std___1___shared_weak_count___release_weak(v106[1]);
  }
  result = (__int64)v104_.v105;
  if (v104_.v105 == v104_.v104) {
    v103 = 32;
  }
  else {
    if (v104_.v105 == nullptr) {
      goto LABEL_308;
    }
    v103 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v104_.v105 + v103))((__int64)v104_.v105);
LABEL_308:
  if (v101 != 0) {
    return std___1___shared_weak_count___release_weak(v101);
  }
  return result;
}

__int64 game_113aec0()
{
  if (GameData_22336e0 != 0) {
    *(_BYTE*)(GameData_22336e0 + 776) = 1;
  }
  return 1;
}

__int64 game_113aee0()
{
  if (GameData_22336e0 != 0) {
    *(_BYTE*)(GameData_22336e0 + 776) = 0;
  }
  return 1;
}

__int64 game_113af00()
{
  if (game_sound_g_game_sound != 0) {
    *(_BYTE*)(game_sound_g_game_sound + 600) = 1;
  }
  return 1;
}

__int64 game_113af20()
{
  if (game_sound_g_game_sound != 0) {
    *(_BYTE*)(game_sound_g_game_sound + 600) = 0;
  }
  return 1;
}

unsigned __int64 game_11e9ce0(unsigned __int64 result, unsigned __int8* a2)
{
  char* v2;
  _BYTE* v3;
  int v4;
  const char* v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  _BYTE* v10;
  int v12;
  unsigned __int8* v13;
  __int64* v14;
  char v15;
  int v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  int v21;
  unsigned __int8* v22;
  __int64* v23;
  char v24;
  int v25;
  unsigned __int64 v26;
  unsigned __int8* v27;
  char v29;
  _QWORD* v30;
  _QWORD* v31;
  unsigned __int64 v32;
  __int64 v33;
  _QWORD* v34;
  struct {
    unsigned __int8* v35;
    unsigned __int64 v36;
  } v35_;
  struct {
    unsigned __int8* v37;
    unsigned __int64 v38;
  } v37_;
  __int64 v39[16];
  __int64* v40;

  *(_QWORD*)(result + 24) = 0;
  v2 = (char*)(result + 24);
  v3 = (_BYTE*)result;
  v4 = *(unsigned __int8*)(result + 20);
  *(_QWORD*)(result + 32) = 0;
  if (v4 <= 3) {
    if (v4 == 1) {
      *v2 = 1;
      if (a2 != nullptr && *a2 != 0) {
        v37_.v37 = a2;
        v37_.v38 = strlen((const char*)a2);
        result = (unsigned __int64)X8CALL_X0(
            __int64*,
            game_1225280((void*)((__int64*)&v35_.v35), (__int64*)&v37_.v37));
        v21 = v35_.v36;
        if (v35_.v36 != 0) {
          if (v35_.v36 <= 0x1F) {
            v22 = v35_.v35;
            v23 = v39;
            do {
              v25 = *v22++;
              v24 = v25;
              if (v25 == 0) {
                break;
              }
              *(_BYTE*)v23 = v24;
              v23 = (__int64*)((char*)v23 + 1);
              --v21;
            } while (v21 != 0);
            *(_BYTE*)v23 = 0;
          }
          result = strtol((const char*)v39, (__int64)&v40, 10);
          if (v39 != v40 && (char*)v40 - (char*)v39 == v35_.v36) {
            *v2 = result;
          }
        }
        else {
          *v2 = 1;
        }
      }
      return result;
    }
    if (v4 != 3) {
      return result;
    }
    *(_QWORD*)v2 = -1;
    *(_QWORD*)(result + 32) = -1;
    if (a2 == nullptr) {
      return result;
    }
    result = strlen((const char*)a2);
    if (result == 0) {
      return result;
    }
    v6 = (const char*)a2;
    if (result >= 3) {
      v7 = *a2;
      if (v7 != 112) {
        goto LABEL_13;
      }
      if (a2[1] == 111) {
        v8 = 3;
        if (a2[2] != 115) {
          v8 = 0;
        }
        v6 = (const char*)&a2[v8];
      }
    }
    v7 = *(unsigned __int8*)v6;
  LABEL_13:
    if (v7 == 40) {
      v39[0] = (__int64)v6;
      v39[1] = strlen(v6);
      game_1225280((void*)((__int64*)&v37_.v37), v39);
      result = game_1225500((__int64)&v37_.v37, &v35_.v35, &v40);
      if ((result & 1) != 0) {
        v3[24] = (_BYTE)v35_.v35;
        v3[32] = (_BYTE)v40;
      }
    }
    else if (v7 == 91) {
      v39[0] = (__int64)(v6 + 1);
      v39[1] = strlen(v6) - 2;
      result = (unsigned __int64)X8CALL_X0(
          __int64*, game_1225280((void*)((__int64*)&v37_.v37), v39));
      if (v37_.v38 != 0) {
        v9 = 0;
        do {
          result = game_1225500((__int64)&v37_.v37, &v35_.v35, &v40);
          if ((result & 1) == 0) {
            break;
          }
          if (v9 >= 8) {
            break;
          }
          v10 = &v3[v9++];
          v10[24] = (_BYTE)v35_.v35;
          v10[32] = (_BYTE)v40;
          result = (unsigned __int64)X8CALL_X0(
              __int64*, game_1225280((void*)((__int64*)&v37_.v37), v39));
        } while (v37_.v38 != 0);
      }
    }
    return result;
  }
  if (v4 == 4) {
    *(_WORD*)(result + 24) = 265;
    if (a2 != nullptr && *a2 != 0) {
      v39[0] = (__int64)a2;
      v39[1] = strlen((const char*)a2);
      result = (unsigned __int64)X8CALL_X0(
          __int64*, game_1225280((void*)((__int64*)&v37_.v37), v39));
      v26 = v37_.v38 - 6;
      if (v37_.v38 >= 6) {
        v27 = v37_.v37;
        if (*(_DWORD*)v37_.v37 == 1129467718 &&
            *((_WORD*)v37_.v37 + 2) == 24389) {
          switch (v37_.v38) {
          case 0xAuLL:
            result = memcmp((__int64)(v37_.v37 + 6), (__int64)"ALLY", v26);
            if ((_DWORD)result != 0) {
              return result;
            }
            v29 = 3;
            break;
          case 0xBuLL:
            if (memcmp((__int64)(v37_.v37 + 6), (__int64)"ENEMY", v26) != 0) {
              result = memcmp((__int64)(v27 + 6), (__int64)"THIRD", 5u);
              if ((_DWORD)result != 0) {
                return result;
              }
              v29 = 2;
            }
            else {
              v29 = 1;
            }
            break;
          case 0xCuLL:
            result = memcmp((__int64)(v37_.v37 + 6), (__int64)"PLAYER", v26);
            if ((_DWORD)result != 0) {
              return result;
            }
            v29 = 0;
            break;
          default:
            return result;
          }
          *v2 = v29;
          result = (unsigned __int64)X8CALL_X0(
              __int64*, game_1225280((void*)((__int64*)&v35_.v35), v39));
          v37_.v37 = v35_.v35;
          v37_.v38 = v35_.v36;
          if (v35_.v36 != 0) {
            result = GameRoutine_12256e0(&v37_.v37, &v35_.v35);
            if ((result & 1) != 0) {
              v3[25] = (_BYTE)v35_.v35;
            }
          }
          else {
            v3[25] = 1;
          }
        }
      }
    }
  }
  else if (v4 == 5 && a2 != nullptr && *a2 != 0) {
    v37_.v37 = a2;
    v37_.v38 = strlen((const char*)a2);
    result = (unsigned __int64)X8CALL_X0(
        __int64*,
        game_1225280((void*)((__int64*)&v35_.v35), (__int64*)&v37_.v37));
    v12 = v35_.v36;
    if (v35_.v36 >= 4) {
      v13 = v35_.v35;
      if (*(_DWORD*)v35_.v35 == 1598310740) {
        if (v35_.v36 <= 0x7F) {
          v14 = v39;
          do {
            v16 = *v13++;
            v15 = v16;
            if (v16 == 0) {
              break;
            }
            *(_BYTE*)v14 = v15;
            v14 = (__int64*)((char*)v14 + 1);
            --v12;
          } while (v12 != 0);
          *(_BYTE*)v14 = 0;
        }
        result = game_HashString((__int64)v39);
        if (result != 0) {
          v17 = *(_QWORD*)(GameData_21c9bd0 + 96);
          if (v17 != 0 && *(_QWORD*)(GameData_21c9bd0 + 112) != 0) {
            v19 = v17 - 1;
            if ((v17 & (v17 - 1)) != 0) {
              v20 = result;
              if (result >= v17) {
                v20 = result % v17;
              }
            }
            else {
              v20 = v19 & result;
            }
            v30 = *(_QWORD**)(*(_QWORD*)(GameData_21c9bd0 + 88) + 8 * v20);
            if (v30 != nullptr) {
              v31 = (_QWORD*)*v30;
              if (v31 != nullptr) {
                if ((v17 & v19) == 0) {
                  while (1) {
                    v33 = v31[1];
                    if (v33 == result) {
                      if (v31[2] == result) {
                        goto LABEL_97;
                      }
                    }
                    else if ((v33 & v19) != v20) {
                      return result;
                    }
                    v31 = (_QWORD*)*v31;
                    if (v31 == nullptr) {
                      return result;
                    }
                  }
                }
                do {
                  v32 = v31[1];
                  if (v32 == result) {
                    if (v31[2] == result) {
                    LABEL_97:
                      v34 = (_QWORD*)v31[3];
                      if (v34 != nullptr) {
                        *(_QWORD*)v2 = *v34;
                      }
                      return result;
                    }
                  }
                  else {
                    if (v32 >= v17) {
                      v32 %= v17;
                    }
                    if (v32 != v20) {
                      return result;
                    }
                  }
                  v31 = (_QWORD*)*v31;
                } while (v31 != nullptr);
              }
            }
          }
        }
      }
    }
  }
  return result;
}

bool game_11fdbc0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  long double v4;
  long double v5;
  __int64 v6;
  _BOOL4 v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int8* v20;
  unsigned int v21;
  bool v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  long double v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v37;
  _QWORD* v39;
  _BOOL4 v40;
  struct {
    __int64 v41;
    int v42;
    int v43;
    int v44;
    char gap52_[4];
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    unsigned __int64 v49;
    __int64 v50;
    int v51;
  } v41_;
  _QWORD v52[2];
  _BYTE v53[2224];
  _QWORD v54[279];
  _QWORD v55[2];
  _QWORD v56[95];
  _QWORD v57[95];
  _QWORD v58[95];
  struct {
    _QWORD v59[1126];
    __int64 v60;
    unsigned int v61;
    char gap15900_[484];
    int v62;
    char gap16388_[4];
    float v63;
    char gap16396_[68];
    int v64;
    char gap16468_[164];
    float v65;
    char gap16636_[4];
    float v66;
  } v59_;
  _QWORD v67[2];
  struct {
    __int64 v68[2];
    __int64 v69;
    __int64 v70;
    int v71;
    char gap16708_[4];
    __int64 v72;
    __int64 v73;
    __int64 v74;
  } v68_;
  _DWORD v75[31];
  int v76[5];

  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
  *(_QWORD*)a2 = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = 0xFFFFFFFF00000000LL;
  *(_DWORD*)(a2 + 24) = -1;
  v39 = (_QWORD*)(a2 + 16);
  GameRoutine_11fe0c0((__int64)v75, *(_QWORD*)a1),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v68_.v68[0] = 0;
  v68_.v68[1] = 0;
  v68_.v69 = -1;
  v68_.v70 = 0xFFFFFFFFLL;
  v68_.v71 = 0;
  WORD2(v67[1]) = 0;
  BYTE6(v67[1]) = 0;
  v67[0] = 0xFFFFFFFF00000000LL;
  LODWORD(v67[1]) = -1;
  v68_.v72 = 0;
  v68_.v73 = -1;
  v68_.v74 = -1;
  v52[0] = GameData_21306b8[0] + 16;
  GameRoutine_6c2b50((__int64)v53),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
  GameRoutine_6c2b50((__int64)v54),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
  *(__n128*)&v4 = GameRoutine_790080((__int64)v55),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v6 = *(_QWORD*)a1;
  v59_.v64 = 0;
  v41_.v41 = 0;
  v41_.v42 = -1;
  v41_.v43 = -1;
  v41_.v44 = -1;
  v41_.v45 = 0;
  v41_.v46 = 0;
  v41_.v47 = 0;
  v41_.v48 = 0;
  v41_.v49 = -1;
  v41_.v50 = 0;
  v41_.v51 = -1;
  v52[0] = GameData_21308b8 + 16;
  v7 = (*(_BYTE*)(*(_QWORD*)(v6 + 440) + 16LL) == 3 ||
        *(_BYTE*)(*(_QWORD*)(v6 + 440) + 16LL) == 0) &&
           (v76[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x11CLL) +
                                game_g_shared_system_skills_ptr + 4) &
                     0xFFF,
            !game_HasSkill_alt1((_QWORD*)(v6 + 1744), v76)) ||
       (*(_BYTE*)(v6 + 1976) & 0x20) != 0,
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v40 = v7;
  v8 = *(_DWORD*)(a1 + 20);
  v9 = 828;
  v10 = *(_DWORD*)(a1 + 28);
  v11 = *(_DWORD*)(a1 + 32);
  v12 = 0;
  v13 = *(_QWORD*)a1;
  v14 = *(_QWORD*)(a1 + 8);
  LODWORD(v68_.v69) = *(_DWORD*)(a1 + 16);
  HIDWORD(v68_.v69) = v8;
  HIDWORD(v68_.v70) = v10;
  v68_.v71 = v11;
  v68_.v68[0] = v13;
  v68_.v68[1] = v14;
  v68_.v72 = *(_QWORD*)(a1 + 40);
  LODWORD(v14) = *(_DWORD*)(a1 + 52);
  LODWORD(v68_.v73) = *(_DWORD*)(a1 + 48);
  HIDWORD(v68_.v73) = v14;
  LODWORD(v14) = *(_DWORD*)(a1 + 60);
  LODWORD(v68_.v74) = *(_DWORD*)(a1 + 56);
  HIDWORD(v68_.v74) = v14;
  v15 = GameData_212c878[0];
  do {
    v18 = *(_QWORD*)a1;
    v19 = *v15;
    LODWORD(v68_.v70) = v12;
    v20 = *(unsigned __int8**)(*(_QWORD*)(v19 + 64) +
                               8LL * *(unsigned __int16*)(v18 + v9));
    v21 = v20[72];
    v22 = v21 <= 7 && v20[73] == 1;
    if (v22 &&
        (v21 - 5 > 1 ||
         (*(_DWORD*)(v18 + v9 + 4) & 0xF) * (unsigned int)v20[87] - 1 >=
             *(unsigned __int8*)(v18 + v9 + 2)) &&
        (*(_BYTE*)(v18 + v9 + 3) & 0x20) == 0 &&
        GameRoutine_11fe200(v68_.v68, (__int64)v67)) {
      v23 = HIDWORD(v67[0]);
      v24 = v67[1];
      game_AISupportSkillScope_Update(v75, HIDWORD(v67[0]), v67[1]),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v25 = *(_QWORD*)a1;
      v26 = *(_QWORD*)(a1 + 8);
      v27 = *(_DWORD*)(a1 + 16);
      v28 = *(_DWORD*)(a1 + 20);
      v41_.v47 = 0;
      v41_.v48 = 0;
      v41_.v45 = 0;
      v41_.v46 = 0;
      v41_.v50 = 0;
      v41_.v51 = -1;
      v41_.v42 = v23;
      v41_.v43 = v24;
      v41_.v44 = v12;
      v41_.v41 = v25;
      v29 = *(_QWORD*)(a1 + 88);
      v41_.v49 = __PAIR64__(v28, v27);
      v41_.v46 = v29;
      v41_.v47 = v26;
      GameRoutine_128df90((__int64)v52, &v41_.v41),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
      AiInterferenceSimulator_128e230((__int64)v52, (__int64)&v41_.v41),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
      GameRoutine_11fbb20((__int64)v52),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
      AIBattleSimulator_11fbe50((__int64)v52, 0),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
      AIBattleSimulator_11fbe50((__int64)v52, 1),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
      AiBattleSimulator_11fc090((__int64)v52, 0),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
      *(float*)&v30 = AiBattleSimulator_11fc090((__int64)v52, 1u),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
      AIBattleSimulator_11fc220((__int64)v52, v30),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
      if (!v40 ||
          v59_.v62 >= 1 && (*(float*)& v4 = v59_.v63, v59_.v63 > 0x0.0p+0f)) {
        v31 = (unsigned int)v59_.v66;
        *(float*)&v4 = v59_.v65;
        if ((*(_BYTE*)(a1 + 28) & 0x10) == 0) {
          v31 = v59_.v61;
        }
        if (*(_BYTE*)(a1 + 96) != 1 ||
            (LODWORD(v5) = 1050253722, v59_.v65 >= 0x1.3333340000000p-2f)) {
          if ((*(_DWORD*)(a2 + 20) & 0x80000000) != 0) {
            goto LABEL_40;
          }
          v32 = *(_QWORD*)(a1 + 72);
          if (v32 != 0) {
            v33 = *(_QWORD*)(*v15 + 64);
            v34 =
                *(_QWORD*)(v33 + 8LL * *(unsigned __int16*)(*(_QWORD*)a1 + v9));
            if (*(_QWORD*)(v33 +
                           8LL * *(unsigned __int16*)(*(_QWORD*)a1 +
                                                      8LL * *(int*)(a2 + 4) +
                                                      828)) == v32) {
              if (v34 != v32) {
                goto LABEL_14;
              }
            }
            else if (v34 == v32) {
              goto LABEL_40;
            }
          }
          if (*(_DWORD*)a2 < v31 ||
              *(_DWORD*)a2 <= v31 && v12 < *(int*)(a2 + 4)) {
          LABEL_40:
            v35 = v54[278];
            *(_DWORD*)a2 = v31;
            *(_DWORD*)(a2 + 4) = v12;
            *(_DWORD*)(a2 + 8) = LODWORD(v4);
            if (v35 != 0) {
              v36 = (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 160LL))(v35),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
              if (v36 < 1) {
              LABEL_44:
                *(_QWORD*)&v4 = 0;
              LABEL_13:
                v17 = v67[0];
                *(_DWORD*)(a2 + 12) = LODWORD(v4);
                *v39 = v17;
                *(_QWORD*)((char*)v39 + 7) = *(_QWORD*)((char*)v67 + 7);
                goto LABEL_14;
              }
            }
            else {
              LOBYTE(v76[0]) = 0;
              v36 = game_Unit_GetParam((__int64)v54),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
              if (v36 < 1) {
                goto LABEL_44;
              }
            }
            v16 = v59_.v66 / (float)(unsigned int)v36;
            if (v16 <= 0x1.0000000000000p+0f) {
              *(float*)&v5 = v59_.v66 / (float)(unsigned int)v36;
            }
            else {
              *(float*)&v5 = 0x1.0000000000000p+0f;
            }
            if (v16 >= 0x0.0p+0f) {
              *(float*)&v4 = *(float*)&v5;
            }
            else {
              *(float*)&v4 = 0x0.0p+0f;
            }
            goto LABEL_13;
          }
        }
      }
    }
  LABEL_14:
    ++v12;
    v9 += 8;
  } while (v9 != 1068);
  v37 = *(_DWORD*)(a2 + 20);
  v52[0] = GameData_21306b8[0] + 16;
  v55[0] = GameData_212d238[0] + 16;
  v59_.v59[1125] = GameData_212da50[0] + 2;
  if (v59_.v60 != 0) {
    (*(void (**)(__int64, long double, long double))(*(_QWORD*)v59_.v60 + 8LL))(
        v59_.v60, v4, v5),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v59_.v60 = 0;
  }
  v55[1] = GameData_212d258[0] + 2;
  BattleSide_Destructor(v59_.v59),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
  BattleSide_Destructor(v58),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
  BattleSide_Destructor(v57),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
  BattleSide_Destructor(v56),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
  game_Unit_Destroy_Unit((__int64)v54),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
  game_Unit_Destroy_Unit((__int64)v53),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
  AISupportSkillScope_11fef70(v75),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v1", "=w"));
  return v37 >= 0;
}

__attribute__((swiftcall)) void game_1225280(PSEUDO_X8 x8_, __int64* result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  unsigned __int64 v6;
  _BYTE* v7;
  __int64 v8;
  unsigned int v9;
  bool v10;
  __int64 v11;
  int v13;
  __int64* v14;
  __int64* v15;
  int v16;
  char* v17;
  int v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  int v23;

  v2 = result[1];
  if (v2 == 0) {
    *a2 = 0;
    a2[1] = 0;
    {
      result;
      return;
    }
  }
  v3 = *result;
  v4 = result[1] & 3;
  v5 = (_BYTE*)*result;
  if ((v2 & 3) != 0) {
    v5 = (_BYTE*)*result;
    while (*v5 == 32) {
      ++v5;
      if (--v4 == 0) {
        goto LABEL_6;
      }
    }
    goto LABEL_19;
  }
LABEL_6:
  if (v2 >= 4) {
    v5 += 3;
    while (1) {
      if (*(v5 - 3) != 32) {
        v5 -= 3;
        goto LABEL_19;
      }
      if (*(v5 - 2) != 32) {
        v5 -= 2;
        goto LABEL_19;
      }
      if (*(v5 - 1) != 32) {
        break;
      }
      if (*v5 != 32) {
        goto LABEL_19;
      }
      v7 = v5 + 1;
      v5 += 4;
      if (v7 == (_BYTE*)(v3 + v2)) {
        goto LABEL_7;
      }
    }
    --v5;
  LABEL_19:
    v6 = (unsigned __int64)&v5[-v3];
    if (&v5[-v3] != (_BYTE*)-1LL) {
      v3 = (__int64)v5;
      v2 -= v6;
      *result = (__int64)v5;
      result[1] = v2;
    }
    goto LABEL_21;
  }
LABEL_7:
  v6 = -1;
LABEL_21:
  if (v2 == 0) {
    goto LABEL_39;
  }
  v8 = 0;
  while (1) {
    v9 = *(unsigned __int8*)(v3 + v8) - 40;
    v10 = v9 > 0x33;
    v11 = (1LL << v9) & 0x8000000000011LL;
    if (!v10 && v11 != 0) {
      break;
    }
    if (v2 == ++v8) {
      goto LABEL_39;
    }
  }
  if (v2 == v8 || v8 == -1) {
    goto LABEL_39;
  }
  v13 = *(unsigned __int8*)(v3 + v8);
  if (v13 == 40) {
    v16 = 41;
    v14 = result;
    v15 = a2;
  }
  else {
    if (v13 != 91) {
      goto LABEL_51;
    }
    v14 = result;
    v15 = a2;
    v16 = 93;
  }
  result = (__int64*)memchr(v3, v16, v2);
  if (result != nullptr) {
    v17 = (char*)result - v3;
    if ((__int64*)((char*)result - v3) != (__int64*)-1LL) {
      a2 = v15;
      result = v14;
      if (v2 >= (unsigned __int64)v17) {
        v19 = v14;
        v20 = a2;
        v21 = memchr((__int64)&v17[v3], 44, v2 - (_QWORD)v17);
        a2 = v20;
        v22 = v21;
        result = v19;
        if (v22 != 0) {
          v8 = v22 - v3;
          if (v8 != -1) {
          LABEL_51:
            *result = v3 + v8 + 1;
            result[1] = v2 - (v8 + 1);
            if (v8 != 0) {
              if (v8 - 1 >= v2) {
                v6 = v2;
              }
              else {
                v6 = v8;
              }
              while (v6 != 0) {
                v23 = *(unsigned __int8*)(v3 - 1 + v6--);
                if (v23 != 32) {
                  goto LABEL_57;
                }
              }
            }
            else {
            LABEL_57:
              if (v6 != -1) {
              LABEL_43:
                if (v6 < v2 - 1) {
                  v8 = v6 + 1;
                }
                else {
                  v8 = v2;
                }
              }
            }
          LABEL_47:
            *a2 = v3;
            a2[1] = v8;
            {
              result;
              return;
            }
          }
        }
      }
    LABEL_39:
      v6 = v2;
      *result = v3 + v2;
      result[1] = 0;
      while (v6 != 0) {
        v18 = *(unsigned __int8*)(v3 - 1 + v6--);
        if (v18 != 32) {
          if (v6 != -1) {
            goto LABEL_43;
          }
          break;
        }
      }
      v8 = v2;
      goto LABEL_47;
    }
  }
  *v15 = 0;
  v15[1] = 0;
  {
    result;
    return;
  }
}

__int64 game_1282980(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;
  unsigned int v45;
  _QWORD* v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  struct {
    _BYTE v58[3];
    char gap3_[29];
    _BYTE* v59;
  } v58_;
  int v60;
  __int64 v61;
  __int64 v62;
  struct {
    _DWORD v63[3074];
    __int64 v64;
    unsigned __int64 v65;
    _QWORD* v66;
    __int64 v67;
    char gap12400_[8];
    int v68;
  } v63_;
  struct {
    _QWORD v69[2];
    int v70;
    __int16 v71;
    char gap12438_[2];
    __int64 v72;
  } v69_;
  struct {
    _QWORD v73[4];
    _QWORD* v74;
  } v73_;
  __int64 v75;
  int v76;
  unsigned __int64 v77;
  __int64 v78;
  struct {
    _DWORD v79[3074];
    __int64 v80;
    unsigned __int64 v81;
    _QWORD* v82;
    __int64 v83;
    char gap24856_[8];
    int v84;
  } v79_;
  int v85;
  struct {
    _QWORD v86[4];
    _QWORD* v87;
  } v86_;
  __int64 v88;

  v2 = 0;
  if ((game_11f4c40(*(_QWORD*)(a1 + 8), 0) & 1) == 0) {
    return v2;
  }
  (**(void (***)(__int64, _QWORD))(*(_QWORD*)GameData_21306c0[0] + 32LL))(
      *(_QWORD*)GameData_21306c0[0] + 32LL, *(_QWORD*)(a1 + 8));
  v85 = 2;
  if (*(_BYTE*)(GameData_21ca2f8 + *(unsigned __int8*)(GameData_21ca2f8 + 24) +
                16) != 1 ||
      GameData_21d9188 != 0 && (*(_BYTE*)(GameData_21d9188 + 30) & 1) != 0) {
    AIDeploy_1274f90(*(_QWORD**)GameData_21306a0[0], *(_QWORD*)(a1 + 8),
                     0xFFFFFFFF, &v85);
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
    v4 = *(_QWORD*)(v3 + 440);
    if (v4 != 0) {
      v5 = *(unsigned __int8*)(v4 + 16);
    }
    else {
      v5 = 9;
    }
    v6 = *(_QWORD*)(GameData_21ca310 + 56) + 24LL * v5;
    v7 = *(_QWORD*)(v6 + 556000);
    if (v7 == 0) {
      goto LABEL_19;
    }
    v8 = *(_QWORD*)(v6 + 556000);
    while (1) {
      v9 = game_GameModeData_instance_ != 0
               ? *(_QWORD*)(game_GameModeData_instance_ + 96)
               : 0LL;
      if (*(_QWORD*)(v8 + 392) == v9) {
        break;
      }
      v8 = *(_QWORD*)(v8 + 432);
      if (v8 == 0) {
        v8 = v7;
        break;
      }
    }
    if ((*(_BYTE*)(GameData_21ca2f8 + 25) & 0xFE) == 2 &&
        *(unsigned __int8*)(v8 + 2088) != *(unsigned __int8*)(v3 + 2088)) {
      v10 = *(char*)(v8 + 584);
      v11 = *(char*)(v8 + 585);
      v12 = 5;
    }
    else {
    LABEL_19:
      v10 = -1;
      v11 = -1;
      v12 = -1;
    }
    v75 = *(_QWORD*)(a1 + 8);
    BYTE5(v78) = 0;
    v76 = 2;
    v13 = *(_DWORD*)(a1 + 2248);
    v77 = __PAIR64__(v11, v10);
    LODWORD(v78) = v12;
    BYTE4(v78) = (v13 & 0x20000) != 0;
    AIThink_1223580(&v75);
  }
  v75 = 0;
  GameRoutine_844ee0((__int64)v79_.v79);
  v76 = 0;
  v79_.v79[3073] = 0;
  v77 = -1;
  v78 = -1;
  v14 = fw_memory_g_heap_manager_ptr;
  if (v79_.v83 != 0) {
    v15 = v79_.v82;
    if (v79_.v82 != nullptr) {
      do {
        v16 = (_QWORD*)*v15;
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v17, (__int64)v15);
        v15 = v16;
      } while (v16 != nullptr);
    }
    v79_.v82 = nullptr;
    if (v79_.v81 != 0) {
      v18 = v79_.v81 & 7;
      if (v79_.v81 >= 8) {
        v20 = v79_.v81 & 0xFFFFFFFFFFFFFFF8LL;
        v19 = 0;
        do {
          *(_QWORD*)(v79_.v80 + 8 * v19) = 0;
          *(_QWORD*)(v79_.v80 + 8 * v19 + 8) = 0;
          *(_QWORD*)(v79_.v80 + 8 * v19 + 16) = 0;
          *(_QWORD*)(v79_.v80 + 8 * v19 + 24) = 0;
          *(_QWORD*)(v79_.v80 + 8 * v19 + 32) = 0;
          *(_QWORD*)(v79_.v80 + 8 * v19 + 40) = 0;
          *(_QWORD*)(v79_.v80 + 8 * v19 + 48) = 0;
          v21 = v79_.v80 + 8 * v19;
          v19 += 8;
          *(_QWORD*)(v21 + 56) = 0;
        } while (v20 != v19);
      }
      else {
        v19 = 0;
      }
      if (v18 != 0) {
        v22 = 8 * v19;
        do {
          --v18;
          *(_QWORD*)(v79_.v80 + v22) = 0;
          v22 += 8;
        } while (v18 != 0);
      }
    }
    v79_.v83 = 0;
  }
  v79_.v84 = 0;
  v69_.v70 = 0;
  v69_.v71 = 257;
  v69_.v69[1] = 0;
  v69_.v69[0] = 0;
  v69_.v72 = -1;
  v73_.v73[0] = GameData_201ffd8;
  v73_.v74 = v73_.v73;
  GameRoutine_844ee0((__int64)v63_.v63);
  v60 = 0;
  v61 = -1;
  v62 = -1;
  v63_.v63[3073] = 0;
  if (v63_.v67 != 0) {
    v23 = v63_.v66;
    if (v63_.v66 != nullptr) {
      do {
        v24 = (_QWORD*)*v23;
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v25, (__int64)v23);
        v23 = v24;
      } while (v24 != nullptr);
    }
    v63_.v66 = nullptr;
    if (v63_.v65 != 0) {
      v26 = v63_.v65 & 7;
      if (v63_.v65 >= 8) {
        v28 = v63_.v65 & 0xFFFFFFFFFFFFFFF8LL;
        v27 = 0;
        do {
          *(_QWORD*)(v63_.v64 + 8 * v27) = 0;
          *(_QWORD*)(v63_.v64 + 8 * v27 + 8) = 0;
          *(_QWORD*)(v63_.v64 + 8 * v27 + 16) = 0;
          *(_QWORD*)(v63_.v64 + 8 * v27 + 24) = 0;
          *(_QWORD*)(v63_.v64 + 8 * v27 + 32) = 0;
          *(_QWORD*)(v63_.v64 + 8 * v27 + 40) = 0;
          *(_QWORD*)(v63_.v64 + 8 * v27 + 48) = 0;
          v29 = v63_.v64 + 8 * v27;
          v27 += 8;
          *(_QWORD*)(v29 + 56) = 0;
        } while (v28 != v27);
      }
      else {
        v27 = 0;
      }
      if (v26 != 0) {
        v30 = 8 * v27;
        do {
          --v26;
          *(_QWORD*)(v63_.v64 + v30) = 0;
          v30 += 8;
        } while (v26 != 0);
      }
    }
    v63_.v67 = 0;
  }
  v31 = *(_QWORD*)(a1 + 8);
  v32 = *(_QWORD*)v14;
  v63_.v68 = 0;
  v69_.v69[0] = v31;
  v69_.v70 = v85;
  v33 = (_QWORD*)fw_memory_HeapManager_Allocate(v32, 40, 16, 0);
  v33[2] = &v60;
  v33[3] = a1;
  v58_.v59 = v33;
  v88 = v31;
  *v33 = GameData_201fed8;
  v33[1] = v69_.v69;
  v33[4] = &v75;
  v34 = v86_.v86;
  v86_.v87 = v86_.v86;
  v86_.v86[0] = GameData_21308f8[0] + 16;
  v86_.v86[1] = &v88;
  v86_.v86[2] = v58_.v58;
  if ((*(_BYTE*)(v31 + 1536) & 0x20) == 0) {
    goto LABEL_61;
  }
  v35 = *(_QWORD*)(v31 + 1496);
  v36 = *(_QWORD*)(v31 + 1488);
  if ((int)((unsigned __int64)(v35 - v36) >> 2) < 1) {
    goto LABEL_61;
  }
  v37 = 0;
  v38 = 0;
  v39 = GameData_212c880[0];
  v40 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v40 + 64) +
                             8LL * (*(_DWORD*)(v36 + v37) & 0xFFF)) +
                  104LL) == 5) {
      if (v86_.v87 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, __int64))(*v86_.v87 + 48LL))(v86_.v87, v36 + v37);
      v40 = *v39;
      v35 = *(_QWORD*)(v31 + 1496);
      v36 = *(_QWORD*)(v31 + 1488);
    }
    ++v38;
    v37 += 4;
  } while (v38 < (int)((unsigned __int64)(v35 - v36) >> 2));
  v34 = v86_.v87;
  if (v86_.v87 == v86_.v86) {
  LABEL_61:
    v41 = 32;
  }
  else {
    if (v86_.v87 == nullptr) {
      goto LABEL_63;
    }
    v41 = 40;
  }
  (*(void (**)(__int64))(*v34 + v41))((__int64)v34);
LABEL_63:
  if (v58_.v59 == v58_.v58) {
    v42 = 32;
  }
  else {
    if (v58_.v59 == nullptr) {
      goto LABEL_68;
    }
    v42 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v58_.v59 + v42))((__int64)v58_.v59);
LABEL_68:
  if (v75 != 0) {
    v43 = *GameData_212cfd0[0];
    *(_QWORD*)(v43 + 12) = v78;
    *(_BYTE*)(v43 + 20) = 8;
    v44 = BYTE4(v77);
    *(_BYTE*)(v43 + 313) = v77;
    *(_BYTE*)(v43 + 314) = v44;
    game_map_Mind_SetTargetList(v43, v79_.v79);
    if (v75 != 0) {
      v45 = *(_DWORD*)(v43 + 56) & 0xFFFFF000 |
            *(_WORD*)((_BYTE*)((__int128*)0x10LL) + v75) & 0xFFF;
    }
    else {
      v45 = *(_DWORD*)(v43 + 56) & 0xFFFFF000;
    }
    *(_DWORD*)(v43 + 56) = v45;
    GameRoutine_11f29e0((__int64*)a1, *(_QWORD*)(a1 + 8), &v75);
    v2 = 1;
    v46 = v63_.v66;
    if (v63_.v66 == nullptr) {
      goto LABEL_79;
    }
  }
  else {
    v2 = 0;
    v46 = v63_.v66;
    if (v63_.v66 == nullptr) {
      goto LABEL_79;
    }
  }
  do {
    v47 = (_QWORD*)*v46;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
      v48 = 128;
    }
    else {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v48, (__int64)v46);
    v46 = v47;
  } while (v47 != nullptr);
LABEL_79:
  v49 = v63_.v64;
  v63_.v64 = 0;
  if (v49 != 0) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v50, v49);
  }
  if (v73_.v74 == v73_.v73) {
    v51 = 32;
    goto LABEL_87;
  }
  if (v73_.v74 != nullptr) {
    v51 = 40;
  LABEL_87:
    (*(void (**)(__int64))(*v73_.v74 + v51))((__int64)v73_.v74);
  }
  v52 = v79_.v82;
  if (v79_.v82 != nullptr) {
    do {
      v53 = (_QWORD*)*v52;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
        v54 = 128;
      }
      else {
        v54 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v54, (__int64)v52);
      v52 = v53;
    } while (v53 != nullptr);
  }
  v55 = v79_.v80;
  v79_.v80 = 0;
  if (v55 != 0) {
    v56 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v56, v55);
  }
  return v2;
}

__int64 game_12a2520(__int64 a1, __int64 a2, _DWORD* a3)
{
  int v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  bool v20;

  *(_QWORD*)a1 = game_AIThink_SpecialEntrustMultiAttackCondition_vtable;
  v6 = AIThink_11f6e20(a2, a3);
  if (v6 < 2) {
    v9 = 1;
  }
  else {
    v7 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a3 & 0xFFF));
    v8 = *(char*)(v7 + 276);
    if ((v8 & 0x80000000) != 0) {
      v8 = *(unsigned __int8*)(a2 + 499) >> 2;
    }
    v9 = 0;
    if (v8 <= 2) {
      LOBYTE(v8) = 2;
    }
    v10 = (unsigned __int8)v8;
    if (a2 != 0 && *(_BYTE*)(v7 + 275) != 0) {
      v11 = *(_QWORD*)(a2 + 1744);
      v12 = ((unsigned __int64)(unsigned int)GameData_21d9864 >> 5) & 0x7F;
      if (v12 + 1 <= (*(_QWORD*)(a2 + 1752) - v11) >> 2 &&
              ((*(_DWORD*)(v11 + 4LL * (unsigned int)v12) >> GameData_21d9864) &
               1) != 0 ||
          ((v13 = *(_QWORD*)(a2 + 440)) == 0 ? (v14 = 9)
                                             : (v14 = *(_BYTE*)(v13 + 16)),
           ((1 << v14) & 6) != 0)) {
        v9 = 0;
      }
      else {
        v15 = v6;
        v16 = game_Unit_GetParam(a2);
        if (v16 < 1) {
          v9 = 0;
        }
        else {
          v9 = 30 *
               ((v16 * (unsigned int)*(unsigned __int8*)(v7 + 275) + 99) /
                0x64) /
               0x64;
        }
        v6 = v15;
      }
    }
    if (v9 <= v10) {
      v9 = v10;
    }
    if (v9 >= v6 - 1) {
      v9 = v6 - 1;
    }
    if (v9 >= 4) {
      v9 = 4;
    }
  }
  *(_DWORD*)(a1 + 8) = v9;
  *(_DWORD*)(a1 + 12) = game_Unit_GetParam(a2);
  v17 = GameData_21c99b0;
  *(_DWORD*)(a1 + 16) = *(__int16*)(a2 + 492);
  v18 = *(_QWORD*)(*(_QWORD*)(v17 + 64) + 8LL * (*a3 & 0xFFF));
  result = GameRoutine_128f580(a2);
  v20 = false;
  if ((_BYTE)result != 0 && *(_BYTE*)(v18 + 104) == 3) {
    v20 = false;
    if ((unsigned __int8)result == 2 && *(_BYTE*)(v18 + 106) == 1) {
      v20 = *(__int16*)(v18 + 330) < 1;
    }
  }
  *(_BYTE*)(a1 + 20) = v20;
  return result;
}

__int64 game_12a7560(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 (**v9)();
  __int64 v10;
  char v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  __int64* v20;
  int v21;
  __int64 v22;
  int v23;
  signed int v24;
  signed int v25;
  signed int v26;
  signed int v27;
  int v28;
  signed int v29;
  int v30;
  signed int v31;
  int v32;
  signed int v33;
  int v34;
  int v35;
  signed int v36;
  signed int v37;
  int v38;
  signed int v39;
  signed int v40;
  int v41;
  signed int v42;
  int v43;
  int v44;
  int v45;
  signed int v46;
  signed int v47;
  signed int v48;
  __int64 v49;
  __int64 v50;
  unsigned __int8* v51;
  int v52;
  signed int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v57;
  signed int v58;
  __int64 v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned int v65;
  int v66;
  __int64 v67;
  __int64 v68;
  bool v69;
  int v70;
  _WORD* v71;
  bool v72;
  __int64 v73;
  __int64 v74;
  int v75;
  __int64 v76;
  int v77;
  int v78;
  __int64 v79;
  int v80;
  __int64 v81;
  char* v82;
  __int64 v83;
  _BOOL4 v84;
  _BOOL4 v85;
  _BOOL4 v86;
  int v87;
  _BOOL4 v88;
  int v89;
  _BOOL4 v90;
  _BOOL4 v91;
  int v92;
  _BOOL4 v93;
  _BOOL4 v94;
  int v95;
  int v96;
  int v97;
  _BOOL4 v98;
  _BOOL4 v99;
  int v100;
  _BOOL4 v101;
  _BOOL4 v102;
  int v103;
  int v104;
  int v105;
  _BOOL4 v106;
  _BOOL4 v107;
  int v108;
  _BOOL4 v109;
  _BOOL4 v110;
  int v111;
  char v112;
  int v113;
  char v114;
  int v115;
  int v116;
  char* v117;
  int v118;
  _BOOL4 v120;
  int v122;
  char v123;
  int v124;
  __int64 v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  bool v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  unsigned int v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  unsigned int v144;
  bool v145;
  unsigned int* v146;
  int v147;
  unsigned int v148;
  unsigned int v149;
  int v150;
  unsigned int v151;
  signed int v152;
  signed int v153;
  int v154;
  int v155;
  int v156;
  unsigned int v157;
  unsigned int v158;
  int v159;
  int v160;
  signed int v161;
  __int64 v162;
  int v163;
  int v164;
  int v165;
  signed int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  unsigned int v171;
  unsigned int v172;
  unsigned int v173;
  __int64 v174;
  int v175;
  __int64 v176;
  __int64* v177;
  __int64 v178;
  int v179;
  int v180;
  int v181;
  int v182;
  struct {
    __int64 (*v183[4])();
    __int64 (**v184)();
  } v183_;
  int v185;
  struct {
    __int64 v186;
    __int64 v187;
  } v186_;
  struct {
    _QWORD v188[4];
    _QWORD* v189;
  } v188_;
  __int64 v190;

  if (*(_BYTE*)(a1 + 2240) == 4) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v5 = a1;
  if (!game_Unit_Unknown6c90c0(v4)) {
    return 0;
  }
  v9 = v183_.v183;
  v10 = 876;
  v183_.v184 = v183_.v183;
  v188_.v188[0] = v4;
  LOBYTE(v186_.v186) = 0;
  v183_.v183[0] = (__int64 (*)())(GameData_2130910[0] + 2);
  v183_.v183[1] = game_11f3890_ptr[0];
  while (1) {
    v11 = (*((__int64 (**)(__int64 (**)(void), _QWORD*, __int64, __int64*))*v9 +
             6))(v9, v188_.v188, v4 + v10, &v186_.v186);
    v9 = v183_.v184;
    if ((v11 & 1) != 0 || v10 == 1060) {
      break;
    }
    v10 += 8;
    v188_.v188[0] = v4;
    LOBYTE(v186_.v186) = 0;
    if (v183_.v184 == nullptr) {
      GameRoutine_60a310();
    }
  }
  if (v183_.v184 == v183_.v183) {
    v12 = 32;
  }
  else {
    if (v183_.v184 == nullptr) {
      goto LABEL_13;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))((char*)*v183_.v184 + v12))((__int64)v183_.v184);
LABEL_13:
  if ((v11 & 1) == 0) {
    return 0;
  }
  v186_.v186 = -1;
  v186_.v187 = -1;
  if ((AIThink_11f73f0(&v186_.v186, a2, a3, a4) & 1) == 0) {
    return 0;
  }
  v13 = v186_.v186;
  v14 = HIDWORD(v186_.v186);
  v16 = v186_.v187;
  v15 = HIDWORD(v186_.v187);
  if ((_DWORD)v186_.v186 == -1 && (_DWORD)v186_.v187 == -1 &&
      __PAIR64__(HIDWORD(v186_.v187), -1) ==
          (HIDWORD(v186_.v186) | 0xFFFFFFFF00000000LL)) {
    return 0;
  }
  if ((AIThink_12a7f80(*(_QWORD*)(v5 + 8), (int*)&v186_.v186) & 1) == 0) {
    return 0;
  }
  v17 = *(_QWORD*)(v5 + 8);
  v18 = v14 - 2;
  v19 = v15 + 2;
  v20 = GameData_212ce98[0];
  v21 = *(char*)(v17 + 585);
  v22 = *GameData_212ce98[0];
  v23 = v21 - 2;
  v24 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v25 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  if (v13 - 2 >= v24) {
    v26 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  }
  else {
    v26 = v13 - 2;
  }
  if (v13 - 2 >= v25) {
    v27 = v26;
  }
  else {
    v27 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  }
  v28 = *(unsigned __int8*)(v22 + 29);
  v29 = *(unsigned __int8*)(v22 + 31);
  if (v18 >= v29) {
    v30 = v29;
  }
  else {
    v30 = v14 - 2;
  }
  if (v18 >= v28) {
    v31 = v30;
  }
  else {
    v31 = v28;
  }
  if (v16 + 2 >= v24) {
    v32 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  }
  else {
    v32 = v16 + 2;
  }
  if (v16 + 2 >= v25) {
    v33 = v32;
  }
  else {
    v33 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  }
  if (v19 >= v29) {
    v34 = v29;
  }
  else {
    v34 = v15 + 2;
  }
  if (v19 >= v28) {
    v35 = v34;
  }
  else {
    v35 = v28;
  }
  if (v33 >= v27) {
    v36 = v27;
  }
  else {
    v36 = v33;
  }
  if (v33 > v27) {
    v27 = v33;
  }
  if (v35 >= v31) {
    v37 = v31;
  }
  else {
    v37 = v35;
  }
  if (v35 > v31) {
    v31 = v35;
  }
  v38 = *(char*)(v17 + 584);
  v39 = v38 - 2;
  v40 = v38 + 2;
  if (v39 >= v24) {
    v41 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  }
  else {
    v41 = v39;
  }
  if (v39 >= v25) {
    v42 = v41;
  }
  else {
    v42 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  }
  if (v23 >= v29) {
    v43 = v29;
  }
  else {
    v43 = v21 - 2;
  }
  if (v23 >= v28) {
    v44 = v43;
  }
  else {
    v44 = v28;
  }
  if (v42 < v36) {
    v36 = v42;
  }
  if (v42 > v27) {
    v27 = v42;
  }
  v45 = v21 + 2;
  if (v44 < v37) {
    v37 = v44;
  }
  if (v44 > v31) {
    v31 = v44;
  }
  if (v40 < v24) {
    v24 = v40;
  }
  if (v40 >= v25) {
    v25 = v24;
  }
  if (v45 < v29) {
    v29 = v21 + 2;
  }
  if (v45 < v28) {
    v29 = v28;
  }
  if (v25 >= v36) {
    v46 = v36;
  }
  else {
    v46 = v25;
  }
  if (v25 > v27) {
    v27 = v25;
  }
  if (v29 >= v37) {
    v47 = v37;
  }
  else {
    v47 = v29;
  }
  v166 = v27;
  if (v29 <= v31) {
    v48 = v31;
  }
  else {
    v48 = v29;
  }
  v152 = v48;
  v153 = v47;
  v185 = 2;
  v49 = GameData_21306a0[0];
  AIDeploy_1274f90(*(_QWORD**)GameData_21306a0[0], v17, 0xFFFFFFFF, &v185);
  v50 = *(_QWORD*)(v5 + 8);
  v174 = v50;
  v163 = *(char*)(v50 + 585);
  v164 = *(char*)(v50 + 584);
  GameRoutine_11fe0c0((__int64)v183_.v183, v50);
  v51 = (unsigned __int8*)*v20;
  v52 = 0;
  v53 = *(unsigned __int8*)(*v20 + 29);
  v151 = v51[31];
  if (v53 <= v151) {
    v54 = v51[28];
    v55 = v51[30];
    v157 = v54;
    if (v54 <= v55) {
      v171 = v55;
      v172 = v55 + 1;
      v158 = 0;
      v159 = -1;
      v162 = v5;
      v177 = GameData_2130918[0] + 2;
      v155 = -1;
      v156 = -1;
      v160 = -1;
      v161 = v46;
      v154 = -1;
      while (1) {
        v57 = v157;
        if (v53 > v152 || (v57 = v157, v53 < v153)) {
          do {
            GameRoutine_747a00(*(_QWORD*)(*(_QWORD*)v49 + 8LL), v57++, v53,
                               *(_QWORD*)(v5 + 8), 0);
          } while (v172 != v57);
          goto LABEL_96;
        }
        v58 = v157;
        v59 = v174 + 828;
        v179 = v53;
        v165 = 32 * v53;
      LABEL_105:
        v180 = v58;
        if ((GameRoutine_747a00(*(_QWORD*)(*(_QWORD*)v49 + 8LL), v58, v53,
                                *(_QWORD*)(v5 + 8), 0) &
             1) == 0 ||
            v58 < v46 || v58 > v166) {
        LABEL_103:
          v60 = v171;
          goto LABEL_104;
        }
        game_AISupportSkillScope_Update(v183_.v183, v58, v53);
        v61 = *(_QWORD*)v49;
        v173 = 0;
        v62 = 0;
        LODWORD(v63) = v58 + v165;
        v64 = *(_QWORD*)(v61 + 12880);
        v63 = (unsigned int)(v58 + v165) >= 0x400 ? 0LL : (unsigned int)v63;
        v65 = *(unsigned __int8*)(v64 + v63 + 64);
        v66 = v65 >= 0x65 ? 0 : 1616 - 16 * v65;
        v169 = v66;
        v67 = v174;
        v68 = *GameData_2130988[0];
        v176 = *GameData_2130988[0] + 12437;
        v69 = v53 == v163 && v58 == v164;
        v70 = v69 ? 256 : 0;
        v178 = *GameData_2130988[0] + 68;
        v167 = -1;
        v168 = v70;
        v170 = -1;
        v175 = -1;
      LABEL_123:
        v71 = (_WORD*)(v59 + 8 * v62);
        v188_.v188[0] = v177;
        v188_.v188[1] = GameData_21308e0[0];
        v188_.v189 = v188_.v188;
        if (*v71 == 0) {
          GameRoutine_11f7b10(v188_.v188);
          goto LABEL_122;
        }
        v190 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                          8LL * (unsigned __int16)*v71);
        v72 = (GameRoutine_11f7b30((__int64)v188_.v188, &v190) & 1) != 0 &&
              game_Unit_Unknown6c90c0(v67) &&
              UnitItem_6e8e50((unsigned __int16*)(v59 + 8 * v62), v67);
        if (v188_.v189 == v188_.v188) {
          break;
        }
        if (v188_.v189 != nullptr) {
          v73 = 40;
        LABEL_132:
          (*(void (**)(__int64))(*v188_.v189 + v73))((__int64)v188_.v189);
        }
        if (!v72) {
          goto LABEL_122;
        }
        if ((game_AITarget_EnumerateAssist(v68, v67, v180, v53, v62) & 1) ==
            0) {
          v5 = v162;
          v46 = v161;
          v49 = GameData_21306a0[0];
          goto LABEL_103;
        }
        v74 = *(unsigned int*)(v68 + 12356);
        if ((int)v74 < 1) {
          v59 = v174 + 828;
          goto LABEL_122;
        }
        v75 = 0x7FFFFFFF;
        v76 = 0;
        v77 = 0;
        v181 = -1;
        v182 = -1;
        do {
          if ((GameRoutine_1276580(v68, v76) & 1) == 0) {
            goto LABEL_137;
          }
          v78 = *(_DWORD*)(v68 + 24700);
          if (v78 < 1) {
            goto LABEL_137;
          }
          if ((unsigned int)v78 >= 4) {
            v82 = (char*)v176;
            v83 = 0;
            v80 = 0;
            do {
              v83 -= 4;
              v84 = v15 == -1;
              v85 = v14 == -1;
              v86 = v16 == -1;
              v87 = *(v82 - 24);
              v88 = v13 == -1;
              v89 = *(v82 - 23);
              v90 = v13 <= v87 || v13 == -1;
              v91 = v16 >= v87 || v16 == -1;
              v92 = v90 && v91;
              v93 = v14 <= v89 || v14 == -1;
              v94 = v15 >= v89 || v15 == -1;
              v95 = v80 + (v92 & (v93 && v94));
              v96 = *(v82 - 11);
              v97 = *(v82 - 12);
              v98 = v13 <= v97 || v13 == -1;
              v99 = v16 >= v97 || v16 == -1;
              v100 = v98 && v99;
              v101 = v14 <= v96 || v14 == -1;
              v102 = v15 >= v96 || v15 == -1;
              v103 = v100 & (v101 && v102);
              v104 = v82[1];
              v105 = *v82;
              v106 = v13 <= v105 || v13 == -1;
              v107 = v16 >= v105 || v16 == -1;
              v108 = v106 && v107;
              v109 = v14 <= v104 || v14 == -1;
              v110 = v15 >= v104 || v15 == -1;
              v111 = v108 & (v109 && v110);
              v112 = v82[13];
              v113 = v103 + v111;
              v114 = v82[12];
              v82 += 48;
              v115 = v95 + v113;
              if (v13 <= v114) {
                v88 = true;
              }
              if (v16 >= v114) {
                v86 = true;
              }
              if (v14 <= v112) {
                v85 = true;
              }
              v116 = v88 && v86;
              if (v15 >= v112) {
                v84 = true;
              }
              v80 = v115 + (v116 & (v85 && v84));
            } while (-(__int64)(v78 & 0x7FFFFFFC) != v83);
            v79 = -v83;
            v81 = v78 & 3;
            if (v81 == 0) {
              goto LABEL_214;
            }
          LABEL_190:
            v117 = (char*)(v68 + 12414 + 12 * v79);
            do {
              v118 = *(v117 - 1);
              v120 = v13 == -1 || v13 <= v118;
              v122 = (v16 == -1 || v16 >= v118) && v120;
              v123 = *v117;
              v117 += 12;
              v124 = v123;
              if (v14 != -1 && v14 > v124) {
                v122 = 0;
              }
              if (v15 != -1 && v15 < v124) {
                v122 = 0;
              }
              --v81;
              v80 += v122;
            } while (v81 != 0);
            goto LABEL_214;
          }
          v79 = 0;
          v80 = 0;
          v81 = v78 & 3;
          if (v81 != 0) {
            goto LABEL_190;
          }
        LABEL_214:
          if (v80 != 0) {
            v77 += v80;
            v127 = v178 + 12 * v76;
            v128 = *(char*)(v127 + 1);
            v129 = *(char*)(v127 + 2);
            v130 = v128 - v180;
            if (v128 - v180 < 0) {
              v130 = v180 - v128;
            }
            v131 = v129 - v179;
            if (v129 - v179 < 0) {
              v131 = v179 - v129;
            }
            v132 = v131 + v130;
            v133 = v132 < v75;
            if (v132 < v75) {
              v75 = v132;
            }
            v134 = v181;
            if (v133) {
              v134 = v129;
            }
            v135 = v182;
            if (v133) {
              v135 = v128;
            }
            v181 = v134;
            v182 = v135;
          }
        LABEL_137:
          ++v76;
        } while (v76 != v74);
        if (v77 < 1) {
          v67 = v174;
          v59 = v174 + 828;
          v53 = v179;
        }
        else {
          v67 = v174;
          if ((unsigned int)v77 >= 0xFF) {
            v136 = 255;
          }
          else {
            v136 = v77;
          }
          v137 = v136 | v168;
          v138 = game_11f51f0(v174, v180, v179);
          v139 = v169 + (v137 << 12);
          v53 = v179;
          v59 = v174 + 828;
          v140 = v139 + v138;
          if (v175 < 0 || v173 < v140 ||
              v173 <= v140 && (v175 | (v170 << 16)) > (v182 | (v181 << 16))) {
            v167 = v62;
            v173 = v140;
            v170 = v181;
            v175 = v182;
          }
        }
      LABEL_122:
        if (++v62 != 30) {
          goto LABEL_123;
        }
        v5 = v162;
        v60 = v171;
        if (v175 < 0) {
          v46 = v161;
          v49 = GameData_21306a0[0];
        }
        else {
          v46 = v161;
          v49 = GameData_21306a0[0];
          if (v160 < 0 || v159 < 0 || v158 < v173 ||
              v158 <= v173 && (v159 | (v156 << 16)) > (v175 | (v170 << 16))) {
            v158 = v173;
            v159 = v175;
            v160 = v180;
            v155 = v53;
            v156 = v170;
            v154 = v167;
          }
        }
      LABEL_104:
        v58 = v180 + 1;
        if (v180 != v60) {
          goto LABEL_105;
        }
      LABEL_96:
        v69 = v53++ == v151;
        if (v69) {
          if (v160 < 0) {
            v52 = 0;
          }
          else {
            v141 = *GameData_212cfd0[0];
            Mind_746a00(*(__int64**)GameData_212cfd0[0], v154);
            *(_DWORD*)(v141 + 12) = v160;
            *(_DWORD*)(v141 + 16) = v155;
            *(_BYTE*)(v141 + 20) = 4;
            *(_BYTE*)(v141 + 313) = v159;
            *(_BYTE*)(v141 + 314) = v156;
            v142 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                              8LL * *(unsigned __int16*)(*(_QWORD*)(v5 + 8) +
                                                         8LL * v154 + 828));
            v143 = *(_QWORD*)(v142 + 192);
            v144 = *(unsigned __int8*)(v142 + 72);
            v145 = v143 == 0 || v144 > 7;
            if (v145 || *(_BYTE*)(v143 + 105) == 0 ||
                *(_BYTE*)(v143 + 104) == 2) {
              v147 = *(_DWORD*)(v141 + 56);
              v146 = (unsigned int*)(v141 + 56);
              v148 = v147 & 0xFFFFF000;
            }
            else {
              v150 = *(_DWORD*)(v141 + 56);
              v146 = (unsigned int*)(v141 + 56);
              v148 = v150 & 0xFFFFF000 | *(_WORD*)(v143 + 16) & 0xFFF;
            }
            v52 = 1;
            *v146 = v148;
          }
          goto LABEL_255;
        }
      }
      v73 = 32;
      goto LABEL_132;
    }
  }
LABEL_255:
  v149 = v52;
  AISupportSkillScope_11fef70(v183_.v183);
  return v149;
}

void game_12c2aa0(__int64* a1)
{
  __int64* v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  signed __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  signed __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int8* v45;
  __int64 v46;
  __int64* v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  int v58;
  unsigned int v59;
  unsigned int v60;
  int v61;
  bool v62;
  __int64 i;
  int v64;
  __int64 j;
  unsigned __int8* v66;
  unsigned __int64 v67;
  _QWORD* v68;
  _QWORD* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64* v73;
  int v74;
  unsigned int v75;
  unsigned int v76;
  int v77;
  unsigned int v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  __int64* v82;
  int v83;
  unsigned int v84;
  unsigned int v85;
  int v86;
  __int16 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  int v92;
  unsigned int v93;
  unsigned int v94;
  int v95;
  unsigned int v96;
  unsigned int v97;
  __int64 v98;
  __int64 v99;
  __int64* v100;
  int v101;
  unsigned int v102;
  unsigned int v103;
  int v104;
  __int16 v105;
  __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  _QWORD* v115;
  _QWORD* v116;
  __int64* v117;
  _QWORD* v118;
  __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  int* v122;
  __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  unsigned __int64 v131;
  __int64 v132;
  __int64 v133;
  unsigned int v134;
  char v135;
  unsigned __int64 v136;
  __int64 v137;
  unsigned __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  char v144;
  _BOOL4 v145;
  __int64 v146;
  __int64* v147;
  __int64 v148;
  __int64* v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  unsigned __int64 v152;
  unsigned __int64 v153;
  unsigned __int64 v154;
  __int64 v155;
  __int64 v156;
  int v157;
  unsigned int v158;
  unsigned int v159;
  int v160;
  __int64 v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  unsigned __int64 v164;
  __int64 v165;
  signed __int64 v166;
  __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  __int64 v171;
  __int64* v172;
  signed __int64 v173;
  __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64* v184;
  __int64 v185;
  __int64 v186;
  int v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  unsigned __int8* v191;
  __int64 v192;

  v1 = a1;
  v2 = GameRoutine_12c2260(a1[1]);
  v192 = v2;
  if (v2 != 0) {
    v3 = v1[3];
    if (v3 >= v1[4]) {
      v10 = game_12c6b00(v1 + 2, &v192);
    }
    else {
      *(_QWORD*)v3 = 0;
      v4 = *(unsigned __int16*)(v2 + 16);
      *(_DWORD*)(v3 + 4) = 1;
      *(_WORD*)v3 = v4;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v4) +
                    73LL) == 17) {
        nn_os_LockMutex((__int64)&game_g_random_mutex);
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
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        *(_DWORD*)(v3 + 4) =
            *(_DWORD*)(v3 + 4) & 0xFFFFC00F |
            (16 *
             (((16 * (v9 - 1000 * ((v9 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
              0x3FF));
      }
      v10 = v3 + 8;
    }
    v11 = v1[6];
    v12 = v1[7];
    v1[3] = v10;
    if (v11 >= v12) {
      v14 = v1[5];
      v15 = v11 - v14;
      v16 = (__int64)(v11 - v14) >> 2;
      v17 = v16 + 1;
      if ((unsigned __int64)(v16 + 1) >> 62 != 0) {
      LABEL_188:
        GameRoutine_12c6cd0();
      }
      v18 = v12 - v14;
      v19 = fw_memory_g_heap_manager_ptr;
      if (v18 >> 1 > v17) {
        v17 = v18 >> 1;
      }
      if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFFCLL) {
        v20 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v20 = v17;
      }
      if (v20 != 0) {
        if (v20 >> 62 != 0) {
        LABEL_189:
          GameRoutine_60a210();
        }
        v21 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v20, 16, 0);
        v14 = v1[5];
        v22 = v1[6] - v14;
        v16 = v22 >> 2;
      }
      else {
        v21 = 0;
        v22 = v15;
      }
      v23 = v21 + v15;
      v24 = v21 + 4 * v20;
      v25 = v21 + v15 - 4 * v16;
      *(_BYTE*)v23 = 0;
      *(_WORD*)(v23 + 2) = 0;
      v13 = v23 + 4;
      memcpy(v25, v14, v22);
      v1[5] = v25;
      v1[6] = v13;
      v1[7] = v24;
      if (v14 != 0) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v26, v14);
      }
    }
    else {
      *(_BYTE*)v11 = 0;
      *(_WORD*)(v11 + 2) = 0;
      v13 = v11 + 4;
    }
    v27 = v1[9];
    v28 = v1[10];
    v1[6] = v13;
    if (v27 == v28 << 6) {
      if ((__int64)(v27 + 1) < 0) {
      LABEL_184:
        GameRoutine_6706a0();
      }
      v29 = v28 << 7;
      if (v29 <= (v27 & 0x3FFFFFFFFFFFFFC0LL) + 64) {
        v29 = (v27 & 0x3FFFFFFFFFFFFFC0LL) + 64;
      }
      if (v27 <= 0x3FFFFFFFFFFFFFFELL) {
        v30 = v29;
      }
      else {
        v30 = 0x7FFFFFFFFFFFFFFFLL;
      }
      collision_6704c0(v1 + 8, v30);
      v27 = v1[9];
    }
    v1[9] = v27 + 1;
    *(_QWORD*)(v1[8] + ((v27 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) &= ~(1LL << v27);
  }
  v31 = *GameData_212cb90[0];
  if (*GameData_212cb90[0] != 0) {
    v32 = *(__int64**)(v31 + 64);
    v33 = *(__int64**)(v31 + 72);
    if (v32 != v33) {
      v34 = v1[1];
      while (1) {
        v36 = *v32++;
        v35 = v36;
        if (*(_QWORD*)(v36 + 40) == *(_QWORD*)(v34 + 392)) {
          break;
        }
        if (v32 == v33) {
          return;
        }
      }
      if (((*(__int64 (**)(__int64*))(*v1 + 16))(v1) & 1) != 0) {
        v37 = *(_QWORD*)(*(_QWORD*)(v34 + 392) + 336LL);
        if (v37 != 0 &&
            (v38 = *(unsigned __int8*)(v37 + 40), *(_BYTE*)(v37 + 40) != 0) &&
            *(_QWORD*)((v39 = *(_QWORD*)(game_GameModeData_instance_ + 176) +
                              216LL * *(unsigned __int8*)(v37 + 40)) +
                       264) != *(_QWORD*)(v39 + 256)) {
          v40 = (_QWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
          *v40 = game_anonymous_ItemFinder_GameConvergeAccessor_vtable;
          v40[1] =
              *(_QWORD*)(game_GameModeData_instance_ + 176) + 216LL * v38 + 328;
        }
        else {
          v40 = nullptr;
        }
      }
      else {
        v40 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
        *v40 = game_anonymous_ItemFinder_TransporterAccessor_vtable;
      }
      v183 = v35;
      v184 = v1;
      v181 = *(unsigned __int16*)(v35 + 48);
      if (*(_WORD*)(v35 + 48) != 0) {
        v41 = 0;
        v179 = 0;
        do {
          v42 = *(_QWORD*)(*(_QWORD*)(v35 + 56) + 16 * v41 + 8);
          v187 &= 0xFF00u;
          if (v42 == 0) {
            goto LABEL_49;
          }
          v185 = *(_QWORD*)(*(_QWORD*)(v35 + 56) + 16 * v41 + 8);
          v182 = v41;
          v43 = *(_QWORD*)(*(_QWORD*)(v34 + 392) + 336LL);
          if (v43 == 0) {
            goto LABEL_63;
          }
          v44 = *(unsigned __int8*)(v43 + 40);
          if (v44 == 0) {
            goto LABEL_63;
          }
          v45 = nullptr;
          if (v40 == nullptr ||
              *(_QWORD*)((v46 = *(_QWORD*)(game_GameModeData_instance_ + 176) +
                                216LL * (unsigned int)v44) +
                         264) == *(_QWORD*)(v46 + 256)) {
            v55 = 0;
            goto LABEL_65;
          }
          v192 = 0x100000000LL;
          LOWORD(v192) = *(_WORD*)(v42 + 16);
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8LL * (unsigned __int16)v192) +
                        73LL) == 17) {
            nn_os_LockMutex((__int64)&game_g_random_mutex);
            v47 = game_map_MapRandom_instance__ptr[0];
            v48 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v49 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v50 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v47 + 1) = v48;
            v51 = (v50 >> 8) ^ (v49 >> 19) ^ v50 ^ v49;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v47) = v49;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v47 + 4) = v51;
            nn_os_UnlockMutex((__int64)&game_g_random_mutex);
            HIDWORD(v192) =
                (16 * ((_WORD)v51 -
                       1000 * (unsigned __int16)((v51 & 0x7FFFFFFFu) / 0x3E8)) +
                 16) &
                    0x3FF0 |
                1;
          }
          v52 = (*(__int64 (**)(_QWORD*, __int64*))(*v40 + 24LL))(v40, &v192);
          if ((v52 & 0x80000000) != 0) {
            goto LABEL_63;
          }
          v53 = v52;
          v54 = (__int64*)(*(__int64 (**)(_QWORD*, _QWORD))(*v40 + 16LL))(v40,
                                                                          v52);
          v45 = (unsigned __int8*)v185;
          v55 = *v54;
          if (*(unsigned __int8*)(v185 + 72) > 7u) {
            goto LABEL_62;
          }
          v56 = v1[1];
          v192 = 0x100000000LL;
          LOWORD(v192) = *(_WORD*)(v185 + 16);
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8LL * (unsigned __int16)v192) +
                        73LL) == 17) {
            v190 = v56;
            nn_os_LockMutex((__int64)&game_g_random_mutex);
            v57 = game_map_MapRandom_instance__ptr[0];
            v58 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v59 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v60 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v57 + 1) = v58;
            v61 = (v60 >> 8) ^ (v59 >> 19) ^ v60 ^ v59;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v57) = v59;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v57 + 4) = v61;
            nn_os_UnlockMutex((__int64)&game_g_random_mutex);
            v56 = v190;
            HIDWORD(v192) =
                (16 * ((_WORD)v61 -
                       1000 * (unsigned __int16)((v61 & 0x7FFFFFFFu) / 0x3E8)) +
                 16) &
                    0x3FF0 |
                1;
          }
          v62 = UnitItem_6e8bc0((unsigned __int16*)&v192, v56);
          v45 = (unsigned __int8*)v185;
          if (v62) {
          LABEL_62:
            v187 = (v53 << 16) | 2;
          }
          else {
          LABEL_63:
            v45 = nullptr;
            v55 = 0;
          }
        LABEL_65:
          v191 = v45;
          for (i = *(_QWORD*)(v185 + 296); i != 0; i = *(_QWORD*)(i + 296)) {
            v88 = *(_QWORD*)(*(_QWORD*)(v34 + 392) + 336LL);
            if (v88 != 0) {
              v89 = *(unsigned __int8*)(v88 + 40);
              if (v89 != 0 && v40 != nullptr) {
                v90 = *(_QWORD*)(game_GameModeData_instance_ + 176) +
                      216LL * (unsigned int)v89;
                if (*(_QWORD*)(v90 + 264) != *(_QWORD*)(v90 + 256)) {
                  v192 = 0x100000000LL;
                  LOWORD(v192) = *(_WORD*)(i + 16);
                  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL * (unsigned __int16)v192) +
                                73LL) == 17) {
                    nn_os_LockMutex((__int64)&game_g_random_mutex);
                    v91 = game_map_MapRandom_instance__ptr[0];
                    v92 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                    v93 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                    v94 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                    *((_DWORD*)v91 + 1) = v92;
                    v95 = (v94 >> 8) ^ (v93 >> 19) ^ v94 ^ v93;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v91) = v93;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v91 + 4) =
                        v95;
                    nn_os_UnlockMutex((__int64)&game_g_random_mutex);
                    HIDWORD(v192) =
                        HIDWORD(v192) & 0xFFFFC00F |
                        (16 *
                         (((16 * (v95 - 1000 * ((v95 & 0x7FFFFFFFu) / 0x3E8)) +
                            16) >>
                           4) &
                          0x3FF));
                  }
                  v96 = (*(__int64 (**)(_QWORD*, __int64*))(*v40 + 24LL))(
                      v40, &v192);
                  if ((v96 & 0x80000000) == 0) {
                    v97 = v96;
                    v98 = *(_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(
                        *v40 + 16LL))(v40, v96);
                    if (*(unsigned __int8*)(i + 72) > 7u) {
                      goto LABEL_86;
                    }
                    v99 = v1[1];
                    v192 = 0x100000000LL;
                    LOWORD(v192) = *(_WORD*)(i + 16);
                    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * (unsigned __int16)v192) +
                                  73LL) == 17) {
                      v180 = v99;
                      nn_os_LockMutex((__int64)&game_g_random_mutex);
                      v100 = game_map_MapRandom_instance__ptr[0];
                      v189 = v55;
                      v101 = *(
                          _DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                      v102 = *(
                          _DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                      v103 = *(_DWORD*)v100 ^ (*(_DWORD*)v100 << 11);
                      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                      *((_DWORD*)v100 + 1) = v101;
                      v104 = (v103 >> 8) ^ (v102 >> 19) ^ v103 ^ v102;
                      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v100) =
                          v102;
                      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v100 +
                                 4) = v104;
                      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
                      v99 = v180;
                      v105 = v104 - 1000 * ((v104 & 0x7FFFFFFFu) / 0x3E8);
                      v55 = v189;
                      HIDWORD(v192) = (16 * v105 + 16) & 0x3FF0 | 1;
                    }
                    if (UnitItem_6e8bc0((unsigned __int16*)&v192, v99)) {
                    LABEL_86:
                      v191 = (unsigned __int8*)i;
                      v55 = v98;
                      v187 = (v97 << 16) | 2;
                    }
                  }
                }
              }
            }
          }
          v64 = v187;
          v188 = v55;
          for (j = *(_QWORD*)(v185 + 352); j != 0; j = *(_QWORD*)(v186 + 352)) {
            v186 = j;
            do {
              v70 = *(_QWORD*)(*(_QWORD*)(v34 + 392) + 336LL);
              if (v70 != 0) {
                v71 = *(unsigned __int8*)(v70 + 40);
                if (v71 != 0 && v40 != nullptr) {
                  v72 = *(_QWORD*)(game_GameModeData_instance_ + 176) +
                        216LL * (unsigned int)v71;
                  if (*(_QWORD*)(v72 + 264) != *(_QWORD*)(v72 + 256)) {
                    v192 = 0x100000000LL;
                    LOWORD(v192) = *(_WORD*)(j + 16);
                    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * (unsigned __int16)v192) +
                                  73LL) == 17) {
                      nn_os_LockMutex((__int64)&game_g_random_mutex);
                      v73 = game_map_MapRandom_instance__ptr[0];
                      v74 = *(
                          _DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                      v75 = *(
                          _DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                      v76 =
                          *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                      *((_DWORD*)v73 + 1) = v74;
                      v77 = (v76 >> 8) ^ (v75 >> 19) ^ v76 ^ v75;
                      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v73) =
                          v75;
                      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v73 + 4) =
                          v77;
                      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
                      HIDWORD(v192) =
                          HIDWORD(v192) & 0xFFFFC00F |
                          (16 * (((16 * (v77 -
                                         1000 * ((v77 & 0x7FFFFFFFu) / 0x3E8)) +
                                   16) >>
                                  4) &
                                 0x3FF));
                    }
                    v78 = (*(__int64 (**)(_QWORD*, __int64*))(*v40 + 24LL))(
                        v40, &v192);
                    if ((v78 & 0x80000000) == 0) {
                      v79 = v78;
                      v80 = *(_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(
                          *v40 + 16LL))(v40, v78);
                      if (*(unsigned __int8*)(j + 72) > 7u) {
                        goto LABEL_72;
                      }
                      v81 = v1[1];
                      v192 = 0x100000000LL;
                      LOWORD(v192) = *(_WORD*)(j + 16);
                      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                          64) +
                                               8LL * (unsigned __int16)v192) +
                                    73LL) == 17) {
                        nn_os_LockMutex((__int64)&game_g_random_mutex);
                        v82 = game_map_MapRandom_instance__ptr[0];
                        v83 =
                            *(_DWORD*)((char*)
                                           game_map_MapRandom_instance__ptr[0] +
                                       (unsigned __int64)((_UNKNOWN**)0x8LL));
                        v84 = *(
                            _DWORD*)((char*)
                                         game_map_MapRandom_instance__ptr[0] +
                                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                        v85 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                              (*(_DWORD*)game_map_MapRandom_instance__ptr[0]
                               << 11);
                        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                        *((_DWORD*)v82 + 1) = v83;
                        v86 = (v85 >> 8) ^ (v84 >> 19) ^ v85 ^ v84;
                        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v82) =
                            v84;
                        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v82 +
                                   4) = v86;
                        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
                        v87 = v86 - 1000 * ((v86 & 0x7FFFFFFFu) / 0x3E8);
                        v1 = v184;
                        HIDWORD(v192) = (16 * v87 + 16) & 0x3FF0 | 1;
                      }
                      if (UnitItem_6e8bc0((unsigned __int16*)&v192, v81)) {
                      LABEL_72:
                        v188 = v80;
                        v191 = (unsigned __int8*)j;
                        v64 = (v79 << 16) | 2;
                      }
                    }
                  }
                }
              }
              j = *(_QWORD*)(j + 296);
            } while (j != 0);
          }
          v66 = v191;
          v187 = v64;
          if (v191 != nullptr) {
            v68 = (_QWORD*)v1[3];
            v67 = v1[4];
            v35 = v183;
            if ((unsigned __int64)v68 >= v67) {
              v106 = v1[2];
              v107 = (__int64)v68 - v106;
              v108 = (v107 >> 3) + 1;
              if (v108 >> 61 != 0) {
                GameRoutine_6f26d0();
              }
              v109 = v67 - v106;
              v110 = v109 >> 2;
              if (v109 >> 2 <= v108) {
                v110 = (v107 >> 3) + 1;
              }
              if ((unsigned __int64)v109 >= 0x7FFFFFFFFFFFFFF8LL) {
                v111 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v111 = v110;
              }
              if (v111 >> 61 != 0) {
                goto LABEL_189;
              }
              v112 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v111, 16, 0);
              v113 = v1[2];
              v114 = (__int64*)v1[3];
              v115 = (_QWORD*)(v112 + v107);
              v116 = (_QWORD*)((char*)v115 + v113 - (_QWORD)v114);
              *v115 = v188;
              v69 = v115 + 1;
              if ((__int64*)v113 != v114) {
                v117 = (__int64*)v113;
                v118 = v116;
                do {
                  v119 = *v117++;
                  *v118++ = v119;
                } while (v117 != v114);
              }
              v1[2] = (__int64)v116;
              v1[3] = (__int64)v69;
              v1[4] = v112 + 8 * v111;
              if (v113 != 0) {
                v120 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v120 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v120, v113);
              }
            }
            else {
              *v68 = v188;
              v69 = v68 + 1;
            }
            v1[3] = (__int64)v69;
            v122 = (int*)v1[6];
            v121 = v1[7];
            if ((unsigned __int64)v122 >= v121) {
              v124 = v1[5];
              v125 = (unsigned __int64)v122 - v124;
              v126 = ((__int64)v122 - v124) >> 2;
              v127 = v126 + 1;
              if ((unsigned __int64)(v126 + 1) >> 62 != 0) {
                goto LABEL_188;
              }
              v128 = v121 - v124;
              if (v128 >> 1 > v127) {
                v127 = v128 >> 1;
              }
              if ((unsigned __int64)v128 >= 0x7FFFFFFFFFFFFFFCLL) {
                v129 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v129 = v127;
              }
              if (v129 != 0) {
                if (v129 >> 62 != 0) {
                  goto LABEL_189;
                }
                v130 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v129, 16, 0);
              }
              else {
                v130 = 0;
              }
              v131 = v130 + 4 * v129;
              v132 = v130 + v125 - 4 * v126;
              *(_DWORD*)(v130 + v125) = v187;
              v123 = v130 + v125 + 4;
              memcpy(v132, v124, v125);
              v1[5] = v132;
              v1[6] = v123;
              v1[7] = v131;
              if (v124 != 0) {
                v133 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v133 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v133, v124);
              }
              v35 = v183;
              v66 = v191;
            }
            else {
              *v122 = v187;
              v123 = (__int64)(v122 + 1);
            }
            v1[6] = v123;
            if ((v66[336] & 8) != 0 ||
                (v134 = v66[72]) <= 7 && ((1LL << v66[73]) & 0x7DC) != 0 ||
                ((1LL << v134) & 0x20FF) == 0) {
              v135 = 0;
            }
            else if (v134 > 7) {
              v144 = v179;
              v145 = v134 == 13;
              LODWORD(v179) = v145 | v179;
              v135 = v145 & (v144 ^ 1);
            }
            else {
              v135 = BYTE4(v179) ^ 1;
              BYTE4(v179) = 1;
            }
            v136 = v1[9];
            v137 = v1[10];
            if (v136 == v137 << 6) {
              if ((__int64)(v136 + 1) < 0) {
                goto LABEL_184;
              }
              v138 = v137 << 7;
              if (v138 <= (v136 & 0x3FFFFFFFFFFFFFC0LL) + 64) {
                v138 = (v136 & 0x3FFFFFFFFFFFFFC0LL) + 64;
              }
              if (v136 <= 0x3FFFFFFFFFFFFFFELL) {
                v139 = v138;
              }
              else {
                v139 = 0x7FFFFFFFFFFFFFFFLL;
              }
              collision_6704c0(v1 + 8, v139);
              v136 = v1[9];
            }
            v140 = v136 >> 6;
            v1[9] = v136 + 1;
            v141 = v1[8];
            v142 = 1LL << v136;
            if ((v135 & 1) != 0) {
              v143 = *(_QWORD*)(v141 + 8 * v140) | v142;
            }
            else {
              v143 = *(_QWORD*)(v141 + 8 * v140) & ~v142;
            }
            *(_QWORD*)(v141 + 8 * v140) = v143;
          }
          else {
            v35 = v183;
          }
          v41 = v182;
        LABEL_49:
          ++v41;
        } while (v41 != v181);
      }
      v146 = *(unsigned __int16*)(v35 + 64);
      if (*(_WORD*)(v35 + 64) != 0) {
        v147 = v1;
        v148 = 8;
        v149 = game_map_MapRandom_instance__ptr[0];
        do {
          v154 = v147[3];
          v153 = v147[4];
          v155 = *(_QWORD*)(*(_QWORD*)(v183 + 72) + v148);
          v192 = v155;
          if (v154 >= v153) {
            v161 = game_12c6b00(v147 + 2, &v192);
          }
          else {
            *(_QWORD*)v154 = 0;
            if (v155 != 0) {
              v156 = *(unsigned __int16*)(v155 + 16);
              *(_DWORD*)(v154 + 4) = 1;
              *(_WORD*)v154 = v156;
              if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8 * v156) +
                            73LL) == 17) {
                nn_os_LockMutex((__int64)&game_g_random_mutex);
                v157 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v149);
                v158 =
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v149 + 4);
                v159 = *(_DWORD*)v149 ^ (*(_DWORD*)v149 << 11);
                *(_DWORD*)v149 = *((_DWORD*)v149 + 1);
                *((_DWORD*)v149 + 1) = v157;
                v160 = (v159 >> 8) ^ (v158 >> 19) ^ v159 ^ v158;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v149) = v158;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v149 + 4) =
                    v160;
                nn_os_UnlockMutex((__int64)&game_g_random_mutex);
                *(_DWORD*)(v154 + 4) =
                    *(_DWORD*)(v154 + 4) & 0xFFFFC00F |
                    (16 *
                     (((16 * (v160 - 1000 * ((v160 & 0x7FFFFFFFu) / 0x3E8)) +
                        16) >>
                       4) &
                      0x3FF));
              }
            }
            v147 = v184;
            v161 = v154 + 8;
          }
          v162 = v147[6];
          v163 = v147[7];
          v147[3] = v161;
          if (v162 >= v163) {
            v165 = v147[5];
            v166 = v162 - v165;
            v167 = (__int64)(v162 - v165) >> 2;
            v168 = v167 + 1;
            if ((unsigned __int64)(v167 + 1) >> 62 != 0) {
              goto LABEL_188;
            }
            v169 = v163 - v165;
            if (v169 >> 1 > v168) {
              v168 = v169 >> 1;
            }
            if ((unsigned __int64)v169 >= 0x7FFFFFFFFFFFFFFCLL) {
              v170 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v170 = v168;
            }
            if (v170 != 0) {
              if (v170 >> 62 != 0) {
                goto LABEL_189;
              }
              v171 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v170, 16, 0);
              v172 = v184;
              v165 = v184[5];
              v173 = v184[6] - v165;
              v167 = v173 >> 2;
            }
            else {
              v172 = v184;
              v171 = 0;
              v173 = v166;
            }
            v174 = v171 + v166;
            v175 = v171 + 4 * v170;
            v176 = v171 + v166 - 4 * v167;
            *(_BYTE*)v174 = 0;
            *(_WORD*)(v174 + 2) = 0;
            v164 = v174 + 4;
            memcpy(v176, v165, v173);
            v172[5] = v176;
            v172[6] = v164;
            v172[7] = v175;
            if (v165 != 0) {
              v177 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v177 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v177, v165);
            }
          }
          else {
            *(_BYTE*)v162 = 0;
            *(_WORD*)(v162 + 2) = 0;
            v164 = v162 + 4;
          }
          v147 = v184;
          v152 = v184[9];
          v178 = v184[10];
          v184[6] = v164;
          if (v152 == v178 << 6) {
            if ((__int64)(v152 + 1) < 0) {
              goto LABEL_184;
            }
            v150 = v178 << 7;
            v147 = v184;
            if (v150 <= (v152 & 0x3FFFFFFFFFFFFFC0LL) + 64) {
              v150 = (v152 & 0x3FFFFFFFFFFFFFC0LL) + 64;
            }
            if (v152 <= 0x3FFFFFFFFFFFFFFELL) {
              v151 = v150;
            }
            else {
              v151 = 0x7FFFFFFFFFFFFFFFLL;
            }
            collision_6704c0(v184 + 8, v151);
            v152 = v184[9];
          }
          --v146;
          v147[9] = v152 + 1;
          v148 += 16;
          *(_QWORD*)(v147[8] + ((v152 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) &=
              ~(1LL << v152);
        } while (v146 != 0);
      }
      if (v40 != nullptr) {
        (*(void (**)(_QWORD*))(*v40 + 8LL))(v40);
      }
    }
  }
}

void game_1367b60(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  _QWORD* v23;
  float v24;
  float v25;
  float v26;
  _BOOL8 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 primeEm;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  _QWORD* v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  _QWORD* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  __int64 v56;
  unsigned __int64 v57;

  if (*a2 == 0) {
    return;
  }
  v5 = __dynamic_cast(*a2, GameData_212dfc0[0], GameData_2130f08[0], 0);
  if (v5 == 0) {
    return;
  }
  v6 = a2[1];
  v7 = v5;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  v8 = GameRoutine_18894a0(v5);
  if (v8 != nullptr) {
    v9 = *(_QWORD*)(a1 + 1208);
    v10 = (unsigned __int64)v8;
    if (v9 != 0 && *(_QWORD*)(a1 + 1224) != 0) {
      v11 = v9 - 1;
      if ((v9 & (v9 - 1)) != 0) {
        v12 = (unsigned __int64)v8;
        if ((unsigned __int64)v8 >= v9) {
          v12 = (unsigned __int64)v8 % v9;
        }
      }
      else {
        v12 = v11 & (unsigned __int64)v8;
      }
      v13 = *(_QWORD**)(*(_QWORD*)(a1 + 1200) + 8 * v12);
      if (v13 != nullptr) {
        v14 = (_QWORD*)*v13;
        if (v14 != nullptr) {
          if ((v9 & v11) == 0) {
            while (1) {
              v16 = v14[1];
              if ((__int64*)v16 == v8) {
                if ((__int64*)v14[2] == v8) {
                  goto LABEL_124;
                }
              }
              else if ((v16 & v11) != v12) {
                goto LABEL_27;
              }
              v14 = (_QWORD*)*v14;
              if (v14 == nullptr) {
                goto LABEL_27;
              }
            }
          }
          while (1) {
            v15 = v14[1];
            if ((__int64*)v15 == v8) {
              if ((__int64*)v14[2] == v8) {
                goto LABEL_124;
              }
            }
            else {
              if (v15 >= v9) {
                v15 %= v9;
              }
              if (v15 != v12) {
                goto LABEL_27;
              }
            }
            v14 = (_QWORD*)*v14;
            if (v14 == nullptr) {
              goto LABEL_27;
            }
          }
        }
      }
    }
    else {
    LABEL_27:
      if (v9 == 0) {
      LABEL_47:
        v22 = (__int64*)fw_memory_g_heap_manager_ptr;
        v23 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
        *v23 = 0;
        v23[1] = v10;
        v23[2] = v10;
        v23[3] = v7;
        v23[4] = v6;
        if (v6 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                    memory_order_relaxed);
        }
        v24 = *(float*)(a1 + 1232);
        v25 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 1224) + 1LL);
        if (v9 != 0 && (float)(v24 * (float)v9) >= v25) {
          goto LABEL_115;
        }
        v26 = v25 / v24;
        v27 = true;
        if (v9 >= 3) {
          v27 = (v9 & (v9 - 1)) != 0;
        }
        v28 = v27 | (2 * v9);
        v29 = vcvtps_u64_f32(v26);
        if (v28 <= v29) {
          primeEm = v29;
        }
        else {
          primeEm = v28;
        }
        if (primeEm == 1) {
          primeEm = 2;
        }
        else if ((primeEm & (primeEm - 1)) != 0) {
          primeEm = std___1___next_prime(primeEm);
        }
        v31 = *(_QWORD*)(a1 + 1208);
        if (primeEm <= v31) {
          if (primeEm >= v31) {
            goto LABEL_110;
          }
          v37 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 1224) /
                               *(float*)(a1 + 1232));
          if (v31 < 3 || (v31 & (v31 - 1)) != 0) {
            v37 = std___1___next_prime(v37);
          }
          else {
            v38 = 1LL << (-(char)__clz(v37 - 1) & 63);
            if (v37 >= 2) {
              v37 = v38;
            }
          }
          if (primeEm <= v37) {
            primeEm = v37;
          }
          if (primeEm >= v31) {
            goto LABEL_110;
          }
          if (primeEm == 0) {
            v52 = *(_QWORD*)(a1 + 1200);
            *(_QWORD*)(a1 + 1200) = 0;
            if (v52 != 0) {
              v53 = 128;
              if (*(_QWORD*)(*v22 + 200) == 0) {
                v53 = 56;
              }
              nn_mem_StandardAllocator_Free(*v22 + v53, v52);
            }
            *(_QWORD*)(a1 + 1208) = 0;
            goto LABEL_110;
          }
        }
        if (primeEm >> 61 != 0) {
          GameRoutine_60a210();
        }
        v32 = fw_memory_HeapManager_Allocate(*v22, 8 * primeEm, 16, 0);
        v33 = *(_QWORD*)(a1 + 1200);
        *(_QWORD*)(a1 + 1200) = v32;
        if (v33 != 0) {
          v34 = 128;
          if (*(_QWORD*)(*v22 + 200) == 0) {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free(*v22 + v34, v33);
        }
        v35 = primeEm & 7;
        *(_QWORD*)(a1 + 1208) = primeEm;
        if (primeEm >= 8) {
          v36 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 1200) + 8 * v36) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 1200) + 8 * v36 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 1200) + 8 * v36 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 1200) + 8 * v36 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 1200) + 8 * v36 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 1200) + 8 * v36 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 1200) + 8 * v36 + 48) = 0;
            v39 = *(_QWORD*)(a1 + 1200) + 8 * v36;
            v36 += 8;
            *(_QWORD*)(v39 + 56) = 0;
          } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v36);
        }
        else {
          v36 = 0;
        }
        if ((primeEm & 7) != 0) {
          v40 = 8 * v36;
          do {
            --v35;
            *(_QWORD*)(*(_QWORD*)(a1 + 1200) + v40) = 0;
            v40 += 8;
          } while (v35 != 0);
        }
        v41 = *(_QWORD**)(a1 + 1216);
        if (v41 != nullptr) {
          v42 = v41[1];
          v43 = a1 + 1216;
          v44 = primeEm - 1;
          if ((primeEm & (primeEm - 1)) != 0) {
            if (v42 >= primeEm) {
              v42 %= primeEm;
            }
            *(_QWORD*)(*(_QWORD*)(a1 + 1200) + 8 * v42) = v43;
            v45 = (_QWORD*)*v41;
            if (*v41 == 0) {
              goto LABEL_110;
            }
            while (1) {
              v46 = v45[1];
              if (v46 >= primeEm) {
                v46 %= primeEm;
              }
              if (v46 != v42) {
                v47 = *(_QWORD*)(a1 + 1200);
                if (*(_QWORD*)(v47 + 8 * v46) == 0) {
                  *(_QWORD*)(v47 + 8 * v46) = v41;
                  goto LABEL_87;
                }
                *v41 = *v45;
                *v45 = **(_QWORD**)(*(_QWORD*)(a1 + 1200) + 8 * v46);
                **(_QWORD**)(*(_QWORD*)(a1 + 1200) + 8 * v46) = v45;
                v45 = v41;
              }
              v46 = v42;
            LABEL_87:
              v41 = v45;
              v45 = (_QWORD*)*v45;
              v42 = v46;
              if (v45 == nullptr) {
                goto LABEL_110;
              }
            }
          }
          v48 = v42 & v44;
          *(_QWORD*)(*(_QWORD*)(a1 + 1200) + 8 * v48) = v43;
          while (1) {
            v49 = (_QWORD*)*v41;
            if (*v41 == 0) {
              break;
            }
            v50 = v49[1] & v44;
            if (v50 == v48) {
              v41 = (_QWORD*)*v41;
            }
            else {
              v51 = *(_QWORD*)(a1 + 1200);
              if (*(_QWORD*)(v51 + 8 * v50) != 0) {
                *v41 = *v49;
                *v49 = **(_QWORD**)(*(_QWORD*)(a1 + 1200) + 8 * v50);
                **(_QWORD**)(*(_QWORD*)(a1 + 1200) + 8 * v50) = v49;
              }
              else {
                *(_QWORD*)(v51 + 8 * v50) = v41;
                v41 = v49;
                v48 = v50;
              }
            }
          }
        }
      LABEL_110:
        v9 = *(_QWORD*)(a1 + 1208);
        if ((v9 & (v9 - 1)) != 0) {
          if (v10 >= v9) {
            v2 = v10 % v9;
          }
          else {
            v2 = v10;
          }
        }
        else {
          v2 = (v9 - 1) & v10;
        }
      LABEL_115:
        v54 = *(_QWORD*)(a1 + 1200);
        v55 = *(_QWORD**)(v54 + 8 * v2);
        if (v55 != nullptr) {
          *v23 = *v55;
          *v55 = v23;
        }
        else {
          v56 = *(_QWORD*)(a1 + 1216);
          *(_QWORD*)(a1 + 1216) = v23;
          *v23 = v56;
          *(_QWORD*)(v54 + 8 * v2) = a1 + 1216;
          if (v56 != 0) {
            v57 = *(_QWORD*)(v56 + 8);
            if ((v9 & (v9 - 1)) != 0) {
              if (v57 >= v9) {
                v57 %= v9;
              }
            }
            else {
              v57 &= v9 - 1;
            }
            *(_QWORD*)(*(_QWORD*)(a1 + 1200) + 8 * v57) = v23;
          }
        }
        ++*(_QWORD*)(a1 + 1224);
        goto LABEL_124;
      }
    }
    v17 = v9 - 1;
    if ((v9 & (v9 - 1)) != 0) {
      v2 = (unsigned __int64)v8;
      if ((unsigned __int64)v8 >= v9) {
        v2 = (unsigned __int64)v8 % v9;
      }
    }
    else {
      v2 = v17 & (unsigned __int64)v8;
    }
    v18 = *(_QWORD**)(*(_QWORD*)(a1 + 1200) + 8 * v2);
    if (v18 != nullptr) {
      v19 = (_QWORD*)*v18;
      if (v19 != nullptr) {
        if ((v9 & v17) == 0) {
          while (1) {
            v21 = v19[1];
            if ((__int64*)v21 == v8) {
              if ((__int64*)v19[2] == v8) {
                goto LABEL_124;
              }
            }
            else if ((v21 & v17) != v2) {
              goto LABEL_47;
            }
            v19 = (_QWORD*)*v19;
            if (v19 == nullptr) {
              goto LABEL_47;
            }
          }
        }
        while (1) {
          v20 = v19[1];
          if ((__int64*)v20 == v8) {
            if ((__int64*)v19[2] == v8) {
              goto LABEL_124;
            }
          }
          else {
            if (v20 >= v9) {
              v20 %= v9;
            }
            if (v20 != v2) {
              goto LABEL_47;
            }
          }
          v19 = (_QWORD*)*v19;
          if (v19 == nullptr) {
            goto LABEL_47;
          }
        }
      }
    }
    goto LABEL_47;
  }
LABEL_124:
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
}

bool game_145c270(__int64 a1, __int64 a2)
{
  __int16 v4;
  __int16 v5;
  _BOOL4 v6;
  __int64* v10;
  __int64* v11;
  bool v12;
  bool v13;
  __int64 v14;
  int v15;
  bool v16;
  __int64 v17;
  int v18;
  bool v19;
  struct {
    __int64 v20;
    char v21;
    bool v22;
    bool v23;
    char gap11_[1];
    int v24;
    char v25;
  } v20_;
  struct {
    __int64 v26;
    char v27;
    bool v28;
    bool v29;
    char gap35_[1];
    int v30;
    char v31;
  } v26_;

  if (a1 == a2 || *(_QWORD*)a1 == *(_QWORD*)a2) {
    return false;
  }
  v4 = *(_WORD*)(a1 + 48);
  v5 = *(_WORD*)(a2 + 48);
  v6 = (v4 & 0x20) == 0;
  if (v6 != ((v5 & 0x20) == 0)) {
    return v6;
  }
  if ((v4 & 1) != (v5 & 1)) {
    return (v4 & 1) == 0;
  }
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    LOBYTE(v6) =
        (signed __int32)*(_DWORD*)(a1 + 8) < (signed __int32)*(_DWORD*)(a2 + 8);
    return v6;
  }
  if ((GameRoutine_15b7370() & 1) != 0) {
    v10 = (__int64*)a1;
    v11 = (__int64*)a2;
    v12 = (*(_WORD*)(a1 + 48) & 0x100) != 0;
    v13 = (*(_WORD*)(a2 + 48) & 0x100) != 0;
  }
  else {
    v12 = false;
    v13 = false;
    v11 = (__int64*)a2;
    v10 = (__int64*)a1;
  }
  v14 = *v10;
  v26_.v26 = v14;
  if (v14 != 0) {
    v15 = *(_DWORD*)(v14 + 416);
    LOBYTE(v14) = (v15 & 0x80) != 0;
    v16 = (v15 & 0x100) != 0;
  }
  else {
    v16 = false;
  }
  v17 = *v11;
  v26_.v27 = v14;
  v26_.v28 = v16;
  v26_.v29 = v12;
  v26_.v30 = 0;
  v26_.v31 = 0;
  v20_.v20 = v17;
  if (v17 != 0) {
    v18 = *(_DWORD*)(v17 + 416);
    LOBYTE(v17) = (v18 & 0x80) != 0;
    v19 = (v18 & 0x100) != 0;
  }
  else {
    v19 = false;
  }
  v20_.v21 = v17;
  v20_.v22 = v19;
  v20_.v23 = v13;
  v20_.v24 = 0;
  v20_.v25 = 0;
  return game_19f0540(&v26_.v26, &v20_.v20);
}

__int64 game_145d6e0()
{
  __int64 v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  _BYTE v14[16];
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;

  v0 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v15_.v16 = nullptr;
  v14[0] = 5;
  FacilityUnitList_145d160(v0, (__int64)v14);
  v1 = *(_QWORD*)(game_UnitListSet_instance_ + 32);
  v12_.v13 = v12_.v12;
  v15_.v16 = v15_.v15;
  v12_.v12[0] = GameData_203f9b0;
  v15_.v15[0] = GameData_203f9b0;
  v14[0] = 1;
  FacilityUnitList_145d160(v1, (__int64)v14);
  v2 = v15_.v16;
  v15_.v16 = nullptr;
  if (v2 == v15_.v15) {
    v3 = 32;
  }
  else {
    if (v2 == nullptr) {
      goto LABEL_10;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v2 + v3))((__int64)v2);
  if (v15_.v16 == v15_.v15) {
    v4 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_10;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v4))((__int64)v15_.v16);
LABEL_10:
  if (v12_.v13 == v12_.v12) {
    v5 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_15;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v12_.v13 + v5))((__int64)v12_.v13);
LABEL_15:
  v12_.v13 = v12_.v12;
  v6 = *(_QWORD*)(game_UnitListSet_instance_ + 40);
  v15_.v16 = v15_.v15;
  v12_.v12[0] = GameData_203fa30;
  v15_.v15[0] = GameData_203fa30;
  v14[0] = 1;
  FacilityUnitList_145d160(v6, (__int64)v14);
  v7 = v15_.v16;
  v15_.v16 = nullptr;
  if (v7 == v15_.v15) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_24;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  if (v15_.v16 == v15_.v15) {
    v9 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_24;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v9))((__int64)v15_.v16);
LABEL_24:
  result = (__int64)v12_.v13;
  if (v12_.v13 == v12_.v12) {
    v11 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (*(__int64 (**)(__int64))(*v12_.v13 + v11))((__int64)v12_.v13);
}

void game_145d990(int* a1)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 (**v5)();
  char v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  _BYTE v13[16];
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;

  v1 = *a1;
  if (*a1 > 7) {
    if (v1 > 10) {
      if (v1 != 11) {
        if (v1 != 17) {
          return;
        }
        goto LABEL_15;
      }
      v4 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
      v5 = GameData_203f830;
    }
    else {
      if (v1 == 8) {
        game_145d6e0();
        return;
      }
      if (v1 != 10) {
        return;
      }
      v4 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
      v5 = GameData_203f930;
    }
  }
  else {
    if (v1 <= 5) {
      if (v1 != 1) {
        if (v1 != 5) {
          return;
        }
        v2 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
        v14_.v15 = nullptr;
        v13[0] = 5;
        FacilityUnitList_145d160(v2, (__int64)v13);
        v3 = *(_QWORD*)(game_UnitListSet_instance_ + 32);
        goto LABEL_18;
      }
    LABEL_15:
      v3 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
      v6 = 5;
      v14_.v15 = nullptr;
    LABEL_19:
      v13[0] = v6;
      FacilityUnitList_145d160(v3, (__int64)v13);
      return;
    }
    if (v1 == 6) {
      v3 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
    LABEL_18:
      v14_.v15 = nullptr;
      v6 = 3;
      goto LABEL_19;
    }
    if (v1 != 7) {
      return;
    }
    v4 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
    v5 = GameData_203f8b0;
  }
  v11_.v12 = v11_.v11;
  v11_.v11[0] = v5;
  v14_.v14[0] = v5;
  v14_.v15 = v14_.v14;
  v13[0] = 1;
  FacilityUnitList_145d160(v4, (__int64)v13);
  v7 = v14_.v15;
  v14_.v15 = nullptr;
  if (v7 == v14_.v14) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_30;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  if (v14_.v15 == v14_.v14) {
    v9 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_30;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v9))((__int64)v14_.v15);
LABEL_30:
  if (v11_.v12 == v11_.v11) {
    v10 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      return;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v10))((__int64)v11_.v12);
}

void game_1489b40(unsigned __int8* a1, const char* a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  bool v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  int v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  unsigned __int64 v40;
  bool v41;
  char v42;
  unsigned __int16* v43;
  unsigned __int64 v44;
  __int64 v45;
  _BYTE* v46;
  __int64 v47;
  __int64 v48;
  unsigned __int8* v49;
  unsigned __int8* v50;
  unsigned __int8* v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  struct {
    __int64 v59;
    unsigned __int64 v60;
    __int64* v61;
    char gap32_[8];
    char v62;
    char gap41_[15];
    __int64 v63;
    char gap64_[8];
    char v64;
    char gap73_[15];
    __int64 v65;
    char v66;
    char gap97_[15];
    __int64 v67;
  } v59_;
  struct {
    unsigned __int8* v68;
    unsigned __int8* v69;
    __int64 v70;
  } v68_;
  struct {
    __int64 v71[2];
    unsigned __int16* v72;
  } v71_;
  struct {
    __int64 v73;
    unsigned __int64 v74;
    __int64* v75;
  } v73_;

  if (GameData_21f4000 == 0) {
    return;
  }
  GameRoutine_60a020_alt1((__int64)a1, a2);
  v3 = msg_MessageManager_instance__ptr[0];
  if ((*a1 & 1) != 0) {
    v4 = *((_QWORD*)a1 + 2);
  }
  else {
    v4 = (__int64)(a1 + 1);
  }
  fs_a501f0((void*)(&v59_.v59), *msg_MessageManager_instance__ptr[0], v4);
  if ((a1[24] & 1) != 0) {
    v5 = *((_QWORD*)a1 + 5);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v5);
    }
  }
  v7 = v59_.v60;
  v8 = *v3;
  *((_QWORD*)a1 + 3) = v59_.v59;
  *((_QWORD*)a1 + 4) = v7;
  v9 = *((_QWORD*)a1 + 2);
  *((_QWORD*)a1 + 5) = v59_.v61;
  if ((*a1 & 1) != 0) {
    v10 = v9;
  }
  else {
    v10 = (__int64)(a1 + 1);
  }
  GameRoutine_a51060((void*)(&v59_.v59), v8, v10);
  game_112d580((char*)&v59_.v59, (__int64)(a1 + 48), (__int64)(a1 + 72));
  if ((v59_.v59 & 1) != 0 && v59_.v61 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  (__int64)v59_.v61);
  }
  v12 = *a1;
  v13 = (v12 & 1) == 0;
  v14 = v12 >> 1;
  if (v13) {
    v15 = (__int64)(a1 + 1);
  }
  else {
    v15 = *((_QWORD*)a1 + 2);
  }
  if (v13) {
    v16 = v14;
  }
  else {
    v16 = *((_QWORD*)a1 + 1);
  }
  game_facility_SceneTalk_Args_Args((unsigned __int8*)&v59_.v59, v15, v16);
  SceneTalk_1497de0((void*)(&v73_.v73), (__int64)&v59_.v59, GameData_224ae48);
  if ((a1[96] & 1) != 0) {
    v17 = *((_QWORD*)a1 + 14);
    if (v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v17);
    }
  }
  v19 = v73_.v73;
  v20 = v73_.v74;
  LOWORD(v73_.v73) = 0;
  *((_QWORD*)a1 + 12) = v19;
  *((_QWORD*)a1 + 13) = v20;
  *((_QWORD*)a1 + 14) = v73_.v75;
  if ((v59_.v66 & 1) != 0 && v59_.v67 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  v59_.v67);
  }
  if ((v59_.v64 & 1) != 0 && v59_.v65 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v59_.v65);
  }
  if ((v59_.v62 & 1) != 0 && v59_.v63 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v59_.v63);
  }
  if ((v59_.v59 & 1) != 0 && v59_.v61 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24,
                                  (__int64)v59_.v61);
  }
  v25 = a1[48];
  v26 = *((_QWORD*)a1 + 7);
  *((_QWORD*)a1 + 15) = 0;
  v27 = v25 >> 1;
  if ((v25 & 1) != 0) {
    v27 = v26;
  }
  if (v27 == 0) {
    v29 = a1[96];
    if ((v29 & 1) != 0) {
      v30 = *((_QWORD*)a1 + 13);
    }
    else {
      v30 = v29 >> 1;
    }
    if (v30 != 0) {
      game_facility_14107c0((__int64)&v59_.v59, (__int64)(a1 + 96));
      v31 = v59_.v60;
      if ((v59_.v59 & 1) == 0) {
        v31 = (unsigned __int64)(unsigned __int8)v59_.v59 >> 1;
      }
      if (v31 != 0) {
        v32 = (a1[24] & 1) != 0 ? *((_QWORD*)a1 + 5) : (__int64)(a1 + 25);
        v33 = (v59_.v59 & 1) != 0 ? v59_.v61 : (__int64*)((char*)&v59_.v59 + 1);
        v34 = GameRoutine_112ea40(v32, v33);
        if (v34 != 0) {
          *((_QWORD*)a1 + 15) = v34;
        }
      }
      if ((v59_.v59 & 1) != 0) {
        v35 = v59_.v61;
        if (v59_.v61 != nullptr) {
          goto LABEL_132;
        }
      }
    }
    return;
  }
  if ((v25 & 1) != 0) {
    fw_text_String_CopyTerminated(&v73_.v73, *((_QWORD*)a1 + 8), v26);
  }
  else {
    v28 = *((_QWORD*)a1 + 7);
    v73_.v73 = *((_QWORD*)a1 + 6);
    v73_.v74 = v28;
    v73_.v75 = *((__int64**)a1 + 8);
  }
  v36 = v73_.v73 & 1;
  v37 = (unsigned __int64)(unsigned __int8)v73_.v73 >> 1;
  if (v36 != 0) {
    v37 = v73_.v74;
  }
  if (v37 == 0) {
  LABEL_130:
    if (v36 != 0) {
      goto LABEL_131;
    }
    return;
  }
  v38 = fw_memory_g_heap_manager_ptr;
  while (1) {
    game_112d860((void*)(v71_.v71), &v73_.v73);
    *(_WORD*)((char*)&v59_.v59 + 1) = 12079;
    v39 = v71_.v71[0] & 1;
    v40 = (unsigned __int64)LOBYTE(v71_.v71[0]) >> 1;
    if (v39 != 0) {
      v40 = v71_.v71[1];
    }
    if (v40 >= 2) {
      v43 = v71_.v72;
      if (v39 == 0) {
        v43 = (unsigned __int16*)((char*)v71_.v71 + 1);
      }
      v41 = *v43 == *(unsigned __int16*)((char*)&v59_.v59 + 1);
      v42 = 2;
    }
    else {
      v41 = false;
      v42 = 2;
      if (v40 == 0) {
        goto LABEL_120;
      }
    }
    if (!v41) {
      game_112daa0((unsigned __int8*)v71_.v71);
      v68_.v69 = nullptr;
      v68_.v70 = 0;
      v68_.v68 = nullptr;
      game_112dfe0((__int64)v71_.v71, (__int64)&v68_.v68);
      game_facility_140a6e0((void*)((__int64)&v59_.v59), &v68_.v68);
      v44 = v59_.v60;
      if ((v59_.v59 & 1) == 0) {
        v44 = (unsigned __int64)(unsigned __int8)v59_.v59 >> 1;
      }
      if (v44 != 0 && ((a1[24] & 1) != 0 ? (v45 = *((_QWORD*)a1 + 5))
                                         : (v45 = (__int64)(a1 + 25)),
                       (v59_.v59 & 1) != 0 ? (v46 = v59_.v61)
                                           : (v46 = (char*)&v59_.v59 + 1),
                       (v47 = GameRoutine_112ea40(v45, v46)) != 0)) {
        v42 = 1;
        *((_QWORD*)a1 + 15) = v47;
        if ((v59_.v59 & 1) == 0) {
        LABEL_104:
          v49 = v68_.v68;
          if (v68_.v68 != nullptr) {
            v50 = v68_.v69;
            if (v68_.v68 == v68_.v69) {
              goto LABEL_115;
            }
            v51 = v68_.v69;
            do {
              v52 = *(v51 - 24);
              v51 -= 24;
              if ((v52 & 1) != 0) {
                v53 = *((_QWORD*)v50 - 1);
                if (v53 != 0) {
                  if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) != 0) {
                    v54 = 128;
                  }
                  else {
                    v54 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v54, v53);
                }
              }
              v50 = v51;
            } while (v51 != v49);
            v68_.v69 = v49;
            v49 = v68_.v68;
            if (v68_.v68 != nullptr) {
            LABEL_115:
              if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) != 0) {
                v55 = 128;
              }
              else {
                v55 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v55, (__int64)v49);
            }
          }
          v39 = v71_.v71[0] & 1;
          goto LABEL_120;
        }
      }
      else {
        v42 = 0;
        if ((v59_.v59 & 1) == 0) {
          goto LABEL_104;
        }
      }
      if (v59_.v61 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) != 0) {
          v48 = 128;
        }
        else {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v48, (__int64)v59_.v61);
      }
      goto LABEL_104;
    }
  LABEL_120:
    if (v39 != 0 && v71_.v72 != nullptr) {
      if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) != 0) {
        v56 = 128;
      }
      else {
        v56 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v56, (__int64)v71_.v72);
    }
    if ((v42 & 1) != 0) {
      break;
    }
    v36 = v73_.v73 & 1;
    v57 = (unsigned __int64)(unsigned __int8)v73_.v73 >> 1;
    if (v36 != 0) {
      v57 = v73_.v74;
    }
    if (v57 == 0) {
      goto LABEL_130;
    }
  }
  if ((v73_.v73 & 1) == 0) {
    return;
  }
LABEL_131:
  v35 = v73_.v75;
  if (v73_.v75 != nullptr) {
  LABEL_132:
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v58,
                                  (__int64)v35);
  }
}

_QWORD* game_156d210(__int64 a1, int a2, __int16 a3)
{

#pragma clang fp contract(off)
  _QWORD* result;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  float v10;
  float v11;
  __int64 v12;
  bool v13;
  float v14;
  float v15;
  __int64 var4;

  result = (_QWORD*)Pane_58f8a0(a1);
  if (result != nullptr) {
    v7 = result[3] + 16LL * a2;
    v8 = *(_QWORD*)(v7 + 8);
    if (v8 != 0) {
      v9 = result;
      result = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                       *(_QWORD*)v8 + 32LL))((void*)&var4, *(_QWORD*)(v7 + 8)));
      if ((_WORD)var4 != 0 && WORD1(var4) != 0) {
        v10 = *(float*)(a1 + 80);
        if (v10 != 0x0.0p+0f) {
          v11 = *(float*)(a1 + 84);
          if (v11 != 0x0.0p+0f) {
            v12 = v9[3] + 16LL * (v9[2] & 3) + 20LL * a2;
            v13 = v10 >= v11;
            if ((a3 & 0x100) != 0) {
              v13 = a3;
            }
            if (v13) {
              v14 = *(float*)(v12 + 12);
              v15 = (float)((float)((float)(unsigned __int16)var4 /
                                    (float)WORD1(var4)) *
                            (float)(v11 / v10)) *
                    v14;
            }
            else {
              v15 = *(float*)(v12 + 16);
              v14 = (float)((float)((float)WORD1(var4) /
                                    (float)(unsigned __int16)var4) *
                            (float)(v10 / v11)) *
                    v15;
            }
            *(float*)(v12 + 12) = v14;
            *(float*)(v12 + 16) = v15;
          }
        }
      }
    }
  }
  return result;
}

__int64 game_159df00(__int64 a1, char a2)
{
  int v2;
  __int64 result;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v6 = *(__int64**)a1;
      v7 = result;
      if (*(_QWORD*)a1 == 0) {
        goto LABEL_48;
      }
      if (v6[2] == 0) {
        goto LABEL_21;
      }
      v8 = v6[1];
      if (v8 == 0) {
        goto LABEL_21;
      }
      v9 = std___1___shared_weak_count_lock(v8);
      if (v9 == 0) {
        goto LABEL_15;
      }
      v10 = *v6;
      if (*v6 != 0) {
        v2 = *(unsigned __int8*)(v10 + 24);
        v11 = v10 + 152;
        if (v2 == 0) {
          v11 = 0;
        }
        v12 = v11 != v6[2];
      }
      else {
        v12 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v13 = v9;
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v13);
      }
      if (!v12) {
        if ((v2 & 1) == 0) {
          goto LABEL_21;
        }
      }
      else {
      LABEL_15:
        v14 = v6[1];
        if (v14 == 0 || *(_QWORD*)(v14 + 8) == -1) {
          goto LABEL_21;
        }
      }
      v15 = v6[2];
      if (v15 != 0) {
        v16 = *(_QWORD*)(v15 + 24);
        goto LABEL_22;
      }
    LABEL_21:
      v16 = 0;
    LABEL_22:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f8028,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21f8028) != 0) {
        GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
        __cxa_guard_release((__int64)&GameData_21f8028);
      }
      if (v16 == 0) {
        goto LABEL_31;
      }
      v17 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      if (v17 != &GameData_21f8020) {
        do {
          v17 = (__int64*)*v17;
        } while (v17 != &GameData_21f8020 && v17 != nullptr);
        if (v17 == nullptr) {
        LABEL_31:
          v16 = 0;
        }
      }
      result = v6[1];
      if (result == 0) {
        goto LABEL_48;
      }
      result = std___1___shared_weak_count_lock(result);
      if (result == 0) {
        goto LABEL_48;
      }
      v19 = *v6;
      v20 = result;
      if (v19 != 0) {
        result = X8CALL_X0(__int64,
                           GameRoutine_15b6f50((void*)(&v23_.v23), v19, v16));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        result = std___1___shared_weak_count___release_weak(v20);
      }
      if (v19 == 0) {
        goto LABEL_48;
      }
      result = v23_.v24;
      if (v23_.v24 == 0) {
        goto LABEL_48;
      }
      v21 = std___1___shared_weak_count_lock(v23_.v24);
      v22 = v23_.v23;
      result = v23_.v24;
      if (v23_.v24 != 0) {
        result = std___1___shared_weak_count___release_weak(v23_.v24);
      }
      if (v21 != 0 && v22 != 0) {
        result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v22 + 40LL))(
            v22, a2 & 1);
      }
      else if (v21 == 0) {
      LABEL_48:
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          return std___1___shared_weak_count___release_weak(v7);
        }
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        result = std___1___shared_weak_count___release_weak(v21);
      }
      goto LABEL_48;
    }
  }
  return result;
}

__int64 game_159e2c0(__int64 a1, char a2)
{
  int v2;
  __int64 result;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  const char* v22;
  struct {
    const char* v23;
    __int64 v24;
  } v23_;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v6 = *(__int64**)a1;
      v7 = result;
      if (*(_QWORD*)a1 == 0) {
        goto LABEL_48;
      }
      if (v6[2] == 0) {
        goto LABEL_21;
      }
      v8 = v6[1];
      if (v8 == 0) {
        goto LABEL_21;
      }
      v9 = std___1___shared_weak_count_lock(v8);
      if (v9 == 0) {
        goto LABEL_15;
      }
      v10 = *v6;
      if (*v6 != 0) {
        v2 = *(unsigned __int8*)(v10 + 24);
        v11 = v10 + 152;
        if (v2 == 0) {
          v11 = 0;
        }
        v12 = v11 != v6[2];
      }
      else {
        v12 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v13 = v9;
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v13);
      }
      if (!v12) {
        if ((v2 & 1) == 0) {
          goto LABEL_21;
        }
      }
      else {
      LABEL_15:
        v14 = v6[1];
        if (v14 == 0 || *(_QWORD*)(v14 + 8) == -1) {
          goto LABEL_21;
        }
      }
      v15 = v6[2];
      if (v15 != 0) {
        v16 = *(_QWORD*)(v15 + 24);
        goto LABEL_22;
      }
    LABEL_21:
      v16 = 0;
    LABEL_22:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f8028,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21f8028) != 0) {
        GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
        __cxa_guard_release((__int64)&GameData_21f8028);
      }
      if (v16 == 0) {
        goto LABEL_31;
      }
      v17 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      if (v17 != &GameData_21f8020) {
        do {
          v17 = (__int64*)*v17;
        } while (v17 != &GameData_21f8020 && v17 != nullptr);
        if (v17 == nullptr) {
        LABEL_31:
          v16 = 0;
        }
      }
      result = v6[1];
      if (result == 0) {
        goto LABEL_48;
      }
      result = std___1___shared_weak_count_lock(result);
      if (result == 0) {
        goto LABEL_48;
      }
      v19 = *v6;
      v20 = result;
      if (v19 != 0) {
        result =
            X8CALL_X0(__int64, GameRoutine_15b6f50((void*)((__int64*)&v23_.v23),
                                                   v19, v16));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        result = std___1___shared_weak_count___release_weak(v20);
      }
      if (v19 == 0) {
        goto LABEL_48;
      }
      result = v23_.v24;
      if (v23_.v24 == 0) {
        goto LABEL_48;
      }
      v21 = std___1___shared_weak_count_lock(v23_.v24);
      v22 = v23_.v23;
      result = v23_.v24;
      if (v23_.v24 != 0) {
        result = std___1___shared_weak_count___release_weak(v23_.v24);
      }
      if (v21 != 0 && v22 != nullptr) {
        v23_.v23 = "Wait";
        v23_.v24 = 4;
        result = (__int64)Element_18863e0((__int64)v22, &v23_.v23, a2 & 1);
      }
      else if (v21 == 0) {
      LABEL_48:
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          return std___1___shared_weak_count___release_weak(v7);
        }
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        result = std___1___shared_weak_count___release_weak(v21);
      }
      goto LABEL_48;
    }
  }
  return result;
}

__int64 game_159e540(__int64 a1)
{
  int v1;
  __int64 result;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    __int64 v21;
    __int64 v22;
  } v21_;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v4 = *(__int64**)a1;
      v5 = result;
      if (*(_QWORD*)a1 == 0) {
        goto LABEL_48;
      }
      if (v4[2] == 0) {
        goto LABEL_21;
      }
      v6 = v4[1];
      if (v6 == 0) {
        goto LABEL_21;
      }
      v7 = std___1___shared_weak_count_lock(v6);
      if (v7 == 0) {
        goto LABEL_15;
      }
      v8 = *v4;
      if (*v4 != 0) {
        v1 = *(unsigned __int8*)(v8 + 24);
        v9 = v8 + 152;
        if (v1 == 0) {
          v9 = 0;
        }
        v10 = v9 != v4[2];
      }
      else {
        v10 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v11 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v11);
      }
      if (!v10) {
        if ((v1 & 1) == 0) {
          goto LABEL_21;
        }
      }
      else {
      LABEL_15:
        v12 = v4[1];
        if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
          goto LABEL_21;
        }
      }
      v13 = v4[2];
      if (v13 != 0) {
        v14 = *(_QWORD*)(v13 + 24);
        goto LABEL_22;
      }
    LABEL_21:
      v14 = 0;
    LABEL_22:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f8028,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21f8028) != 0) {
        GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
        __cxa_guard_release((__int64)&GameData_21f8028);
      }
      if (v14 == 0) {
        goto LABEL_31;
      }
      v15 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      if (v15 != &GameData_21f8020) {
        do {
          v15 = (__int64*)*v15;
        } while (v15 != &GameData_21f8020 && v15 != nullptr);
        if (v15 == nullptr) {
        LABEL_31:
          v14 = 0;
        }
      }
      result = v4[1];
      if (result == 0) {
        goto LABEL_48;
      }
      result = std___1___shared_weak_count_lock(result);
      if (result == 0) {
        goto LABEL_48;
      }
      v17 = *v4;
      v18 = result;
      if (v17 != 0) {
        result = X8CALL_X0(__int64,
                           GameRoutine_15b6f50((void*)(&v21_.v21), v17, v14));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        result = std___1___shared_weak_count___release_weak(v18);
      }
      if (v17 == 0) {
        goto LABEL_48;
      }
      result = v21_.v22;
      if (v21_.v22 == 0) {
        goto LABEL_48;
      }
      v19 = std___1___shared_weak_count_lock(v21_.v22);
      v20 = v21_.v21;
      result = v21_.v22;
      if (v21_.v22 != 0) {
        result = std___1___shared_weak_count___release_weak(v21_.v22);
      }
      if (v19 != 0 && v20 != 0) {
        result = GameHr_1562680(
            v20 + 88,
            (unsigned int*)
                game_menu_kTabAnimations[3 * *(unsigned __int8*)(v20 + 1041) +
                                         2],
            0x1.0000000000000p+0f);
      }
      else if (v19 == 0) {
      LABEL_48:
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return std___1___shared_weak_count___release_weak(v5);
        }
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        result = std___1___shared_weak_count___release_weak(v19);
      }
      goto LABEL_48;
    }
  }
  return result;
}

__int64 game_15fc3b0(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v4;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 (***v15)();
  _QWORD* v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  struct {
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v27_;
  _QWORD v30[3];

  v4 = *(_QWORD*)(a1 + 8);
  if (v4 != 0) {
    v7 = std___1___shared_weak_count_lock(v4);
    v8 = ui_LayoutAccessor_empty__ptr[0];
    if (v7 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v8 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v9 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
        v8 = v9;
      }
    }
  }
  else {
    v8 = ui_LayoutAccessor_empty__ptr[0];
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)v8, "N_Reliance", 0);
  *(_BYTE*)(a1 + 2394) = 0;
  result = Unit_6c91f0(a2, a3);
  if ((result & 1) != 0) {
    v11 = a2[49];
    v30[0] = a2;
    v30[1] = v11;
    if (v11 != 0) {
      v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 1784LL) + 272LL);
    }
    else {
      v12 = 0;
    }
    v30[2] = v12;
    v27_.v27 = a3;
    v27_.v28 = 0;
    v27_.v29 = 0;
    if (a3 != 0) {
      v13 = *(_QWORD*)(a3 + 392);
      v27_.v28 = v13;
      if (v13 != 0) {
        v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 24) + 1784LL) + 272LL);
        v27_.v29 = v14;
        v15 = GameData_212dae8;
        if (v12 == 0 || v14 == 0) {
        LABEL_19:
          v17 = *((unsigned __int8*)v15 + 11);
          if (v17 >= 2) {
            v18 = *(_QWORD*)(a1 + 8);
            if (v18 != 0) {
              v19 = std___1___shared_weak_count_lock(v18);
              v20 = ui_LayoutAccessor_empty__ptr[0];
              if (v19 != 0) {
                if (*(_QWORD*)a1 != 0) {
                  v20 = *(__int64**)a1;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v21 = v20;
                  (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
                  std___1___shared_weak_count___release_weak(v19);
                  v20 = v21;
                }
              }
            }
            else {
              v20 = ui_LayoutAccessor_empty__ptr[0];
            }
            ui_LayoutAccessor_SetPaneVisible((__int64)v20, "N_Reliance", 1);
            v22 = *(_QWORD*)(a1 + 8);
            if (v22 != 0) {
              v23 = std___1___shared_weak_count_lock(v22);
              v24 = ui_LayoutAccessor_empty__ptr[0];
              if (v23 != 0) {
                if (*(_QWORD*)a1 != 0) {
                  v24 = *(__int64**)a1;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v25 = v24;
                  (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
                  std___1___shared_weak_count___release_weak(v23);
                  v24 = v25;
                }
              }
            }
            else {
              v24 = ui_LayoutAccessor_empty__ptr[0];
            }
            v26 = ui_LayoutAccessor_FindPane(v24, "IconReliance");
            if (v26 != 0) {
              v26 = __dynamic_cast(v26, GameData_212d670[0],
                                   GameData_212d678[0], 0);
            }
            result = GameRoutine_1842b90(v26, v17);
            *(_BYTE*)(a1 + 2394) = 1;
          }
          return result;
        }
        v16 = *(_QWORD**)(game_GameModeData_instance_ + 128);
        result = GameReliance_8e17a0(v16, (__int64)v30, (__int64)&v27_.v27);
        if ((result & 0x80000000) == 0) {
          v15 = (__int64 (***)(void))(v16[1] + 56LL * (unsigned int)result);
          goto LABEL_19;
        }
      }
    }
    v15 = GameData_212dae8;
    goto LABEL_19;
  }
  return result;
}

#pragma GCC visibility pop
