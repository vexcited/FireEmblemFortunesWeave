#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* AIThink_121a1c0(_QWORD*);
_QWORD* GameRoutine_1290c20(__int64, __int64, int);
_QWORD* GameRoutine_129afa0(_QWORD*);
_QWORD* GameRoutine_129b020(_QWORD*);
_QWORD* GameRoutine_129b120(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_12a0ba0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_714d40();
_QWORD* GameRoutine_eb90a0(_QWORD* result);
_QWORD* Image_72c060(__int64, __int64, unsigned int, unsigned int, __int64);
__attribute__((swiftcall)) void
ForceContinueBGMBinder_1487fc0(PSEUDO_X8, __int64, unsigned __int8);
__attribute__((swiftcall)) void GameConst_7f8880(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_15b71b0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_eb5940(PSEUDO_X8);
__attribute__((swiftcall)) void LegionPool_936f60(PSEUDO_X8, __int64 result,
                                                  unsigned __int8*, __int64);
__attribute__((swiftcall)) void
RidePool_93c6a0(PSEUDO_X8, __int64 result, unsigned __int8*, __int64, char);
__attribute__((swiftcall)) void RidePool_93cb20(PSEUDO_X8, __int64 result,
                                                __int64, unsigned int);
__attribute__((swiftcall)) void SceneManager_138e780(PSEUDO_X8, __int64,
                                                     __int64);
__attribute__((swiftcall)) void
TransporterConst_89bd90(PSEUDO_X8, __int64 result, unsigned int, __int64);
__attribute__((swiftcall)) void TransporterConst_89bf10(PSEUDO_X8,
                                                        _QWORD* result,
                                                        unsigned int, __int64,
                                                        unsigned int);
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, __int64 result,
                                      unsigned __int16*, int);
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                    double, float) __asm__("snd_play_ff2d0");
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64* GameRoutine_8c9820(__int64, __int64, unsigned __int8);
__int64* GameRoutine_eb8bb0(__int64* result, __int64*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_820d50(int);
__int64* game_UnitPool_Get(_BYTE*);
__int64 AITarget_1275a80(__int64, __int64, unsigned int, int, __int64, char);
__int64 AIThink_121d220(_QWORD, _QWORD, _QWORD);
__int64 AIThink_12211a0(_QWORD, _QWORD, _QWORD);
__int64 AIThink_129a570(__int64 result, int, int);
__int64 AIThink_129b0a0(__int64);
__int64 AIThink_129b920(__int64 result, __int64, __int64);
__int64 AIThink_129d780(_QWORD*, __int64);
__int64 AssetTableFile_7e94a0(__int64);
__int64 AssetTableFile_7e94a0_alt1(_QWORD) __asm__("AssetTableFile_7e94a0");
__int64 CharacterBuilder_1084780(__int64 result);
__int64 CmdbtlPartyNatives_eb8a30(__int64, __int64);
__int64 CmdbtlPartyNatives_eb8a90(__int64, __int64, int);
__int64 Cursor_734a80(__int64, __int64*);
__int64 Dir_70d7a0(_QWORD);
__int64 FacilityDialogueFile_196e860(unsigned int, __int64, __int64);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 GameReliance_8e18b0(__int64, _QWORD*, _QWORD*);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_120ccf0(__int64, __int64, __int64, unsigned int, char);
__int64 GameRoutine_120dac0(unsigned __int16*, int, __int64);
__int64 GameRoutine_120ef00();
__int64 GameRoutine_128e990(void);
__int64 GameRoutine_128e990_alt1(__int64 result,
                                 _DWORD*) __asm__("GameRoutine_128e990");
__int64 GameRoutine_128f580(__int64);
__int64 GameRoutine_12a16f0(__int64 result, __int64);
__int64 GameRoutine_12a2730(__int64, __int64, _DWORD*);
__int64 GameRoutine_12a28c0(__int64, __int64, _DWORD*);
__int64 GameRoutine_12c1f80(unsigned __int8*);
__int64 GameRoutine_12c45b0(_QWORD*, __int64, char);
__int64 GameRoutine_12c4780(_QWORD*, __int64, __int64);
__int64 GameRoutine_13e3f40(int, char);
__int64 GameRoutine_13e5e80(__int64, unsigned int);
__int64 GameRoutine_1489520_alt1(_QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("GameRoutine_1489520");
__int64 GameRoutine_1553130(__int64 result);
__int64 GameRoutine_1604790(_QWORD);
__int64 GameRoutine_17cc240(__int64, __int64, __int64, int, char, char, char);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a8e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_60a020_alt1(_QWORD, _QWORD) __asm__("GameRoutine_60a020");
__int64 GameRoutine_60eb40(_QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_6c2b50(__int64);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_6e3b50(__int64 result, _QWORD*);
__int64 GameRoutine_717fc0(unsigned __int64*, int);
__int64 GameRoutine_747a00(__int64, __int64, __int64, __int64, char);
__int64 GameRoutine_790080(__int64);
__int64 GameRoutine_7a88a0(__int64*);
__int64 GameRoutine_8ca200(_QWORD*);
__int64 GameRoutine_8cfec0(_QWORD, _QWORD);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 GameRoutine_932360(_QWORD, _QWORD);
__int64 GameRoutine_94a480();
__int64 GameRoutine_975940(__int64);
__int64 GameRoutine_975940_alt1(_QWORD) __asm__("GameRoutine_975940");
__int64 GameRoutine_9db9e0(unsigned int, unsigned int);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ceeb40(__int64 result, __int64);
__int64 GameRoutine_eb8f90(__int64, __int64*);
__int64 GameSideStoryData_12b3d60(__int64 result);
__int64 GameSubquestData_125b8e0(_QWORD, _QWORD, _QWORD);
__int64 GameVariable_828f50(_QWORD, _QWORD);
__int64 Image_72b080(__int64);
__int64 ItemSeq_8af940(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                       long double);
__int64 KeyMap_1559920(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LegionPool_937de0(__int64, __int64);
__int64 LegionPool_938460(__int64);
__int64 Manager_a51640(__int64, __int64, _DWORD*);
__int64 ProcCmdBtlSeq_e61c90(__int64, __int64);
__int64 RidePool_93ce60(__int64, __int64, unsigned int);
__int64 RidePool_93d1e0(__int64, __int64);
__int64 RidePool_93d8e0(__int64);
__int64 RuntimeBuffer_8924a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 UnitHeroes_6d2b90(__int64, unsigned __int8*);
__int64 UnitSkillList_84cf20(__int64, __int64);
__int64 UnitUtil_12122d0(__int64*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_11f51f0(__int64, int, int);
__int64 game_11f5940(__int64 result, int, int, unsigned __int8, bool*);
__int64 game_120c6c0(__int64, unsigned int, char);
__int64 game_120e900();
__int64 game_128ef10_alt1(_QWORD, _QWORD) __asm__("game_128ef10");
__int64 game_12968e0_alt1(__int64, signed int*) __asm__("game_12968e0");
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_8aef60(_QWORD, _QWORD);
__int64 game_996d60(_QWORD, _QWORD, _QWORD);
__int64 game_AIThink_GetSpecialEnhancementScore(__int64, int*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString(__int64 result);
__int64 game_HashString32(_QWORD);
__int64 game_UnitItemList_Add(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitItemList_FindEquipped_710080(_QWORD);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_Unit_Destroy_Unit(__int64);
__int64 game_Unit_EquipItem_6d8f40(_QWORD, _QWORD);
__int64 game_Unit_RemoveItem(__int64, unsigned int);
__int64 game_Unit_SkillList_IndexOf(_QWORD*, unsigned int*);
__int64 game_Unit_Unknown6c4610(__int64);
__int64 game_Unit_Unknown6c8f90(_QWORD);
__int64 game_anonymous_RuntimeTalk_GetCondition(__int64);
__int64 game_gameui_anonymous_ProcGameUIFade_In(__int64 result, unsigned int,
                                                __int64, unsigned int,
                                                unsigned int, __int64);
__int64 game_map_history_DataAdditionalNewType_Deserialize(void);
__int64 game_util_Format(const char*, ...);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Allocate_1a0ad50(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 AISupportSkillScope_11fef70(_DWORD*);
__n128 AutoGrowJobFile_12c0bc0(__int64, __int64, char**);
__n128 BattleSide_Destructor(_QWORD*);
__n128 GameRoutine_12c20f0(_QWORD*);
__n128 GameRoutine_667c80(__int64);
__n128 game_AISupportSkillScope_Update(_BYTE*, unsigned int, unsigned int);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__n128 memset_alt1(_QWORD, _QWORD, _QWORD) __asm__("memset");
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__n128 snd_Fade_Fade_10c830_alt1(_QWORD,
                                 double) __asm__("snd_Fade_Fade_10c830");
__n128 std___1___shared_weak_count___release_weak();
bool GameRoutine_129a6e0(__int64);
bool GameRoutine_129aae0(_QWORD*);
bool GameRoutine_1604790_alt1() __asm__("GameRoutine_1604790");
bool game_11f44e0(__int64, char);
bool game_AIThink_EntrustGetAttackResult(__int64, _QWORD*);
char** GameRoutine_11fe0c0(__int64, __int64);
char* GameRoutine_1489520(__int64, unsigned int, __int64, __int64);
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
double cos(double);
double sin(double);
extern _DWORD GameData_1bcc47c[3];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c8a8;
extern _UNKNOWN* GameData_2130660;
extern _UNKNOWN* GameData_2130948;
extern _UNKNOWN* GameData_21732f0;
extern _UNKNOWN GameData_1a96422;
extern _UNKNOWN GameData_1a9666d;
extern _UNKNOWN GameData_1aa2245;
extern _UNKNOWN GameData_1aa225a;
extern _UNKNOWN GameData_1aa5c86;
extern _UNKNOWN GameData_1ab18ee;
extern _UNKNOWN GameData_1abd503;
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_1ad41a8;
extern _UNKNOWN GameData_1ada574;
extern _UNKNOWN GameData_1adf75d;
extern _UNKNOWN GameData_1ae1fdd;
extern _UNKNOWN GameData_1ae3590;
extern _UNKNOWN GameData_1ae7328;
extern _UNKNOWN GameData_1af8f10;
extern _UNKNOWN GameData_1afa7c7;
extern _UNKNOWN GameData_1afaa50;
extern _UNKNOWN GameData_1bdc600;
extern _UNKNOWN GameData_2216780;
extern _UNKNOWN GameData_224b518;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int64 (***GameData_212dae8)();
extern __int64 (*GameData_20189c8[])();
extern __int64 (*GameData_2018a58[])();
extern __int64 (*GameData_2020788[])();
extern __int64 (*GameData_2020a88[])();
extern __int64 (*GameData_2020b18[])();
extern __int64 (*GameData_20432d0[])();
extern __int64 (*game_AIThink_SpecialAssistCalculatorForEnemy_vtable[])();
extern __int64 (*game_AIThink_SpecialAssistCalculatorForEntrust_vtable[])();
extern __int64 (*game_AIThink_SpecialEntrustSummonCondition_vtable[])();
extern __int64 (*game_AIThink_SpecialInterferenceCalculatorForEnemy_vtable[])();
extern __int64 (
    *game_AIThink_SpecialInterferenceCalculatorForEntrust_vtable[])();
extern __int64 (*game_AIWorkImage_ThinningForSpecialAccessor_vtable[])();
extern __int64 (*game_map_history_anonymous_Impl_vtable[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212c650[5];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c890[3];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212cce8[42];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212d258[2];
extern __int64* GameData_212da50[3];
extern __int64* GameData_212e348;
extern __int64* GameData_2130920[5];
extern __int64* GameData_2130940;
extern __int64* GameData_2130988[3];
extern __int64* GameData_2130ab8[11];
extern __int64* GameData_2130bc0[4];
extern __int64* GameData_2130bc8[3];
extern __int64* GameData_2130bd8;
extern __int64* GameData_2130c18[9];
extern __int64* GameData_2130c20[8];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_map_history_g_record_alloc_failed_ptr;
extern __int64* game_map_history_g_record_allocators_ptr[2];
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_1bcd850;
extern __int64 GameData_205c4b8;
extern __int64 GameData_212c610;
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212cf88[4];
extern __int64 GameData_212d238[2];
extern __int64 GameData_212d290;
extern __int64 GameData_212dce8;
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21306b8[4];
extern __int64 GameData_21306c0[3];
extern __int64 GameData_21306d0;
extern __int64 GameData_21308b8;
extern __int64 GameData_21c9718;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9e90;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd108;
extern __int64 GameData_21d9188;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21f3d08;
extern __int64 GameData_21f4000;
extern __int64 GameData_21f4228;
extern __int64 GameData_21f42d0;
extern __int64 GameData_2240090;
extern __int64 GameData_22400d8;
extern __int64 GameData_22400e0;
extern __int64 GameData_22400f8;
extern __int64 GameData_22408e8;
extern __int64 GameData_2241720;
extern __int64 GameData_2241850;
extern __int64 GameData_22420f0;
extern __int64 GameData_2246cb0;
extern __int64 GameData_224b488[];
extern __int64 GameData_224b490;
extern __int64 GameData_224b498;
extern __int64 GameData_224b4a0;
extern __int64 GameData_224b4a8;
extern __int64 GameData_224b4b0;
extern __int64 GameData_224b4b8;
extern __int64 GameData_224b4c0;
extern __int64 GameData_224b4c8;
extern __int64 GameData_224b4d0;
extern __int64 GameData_224b4d8;
extern __int64 GameData_224b4e0;
extern __int64 GameData_224b4e8;
extern __int64 GameData_224b4f0;
extern __int64 GameData_224b4f8;
extern __int64 GameData_224b500;
extern __int64 GameData_224b508;
extern __int64 GameData_224b510;
extern __int64 GameData_2258178;
extern __int64 GameData_2259540;
extern __int64 GameData_22736d0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_RelianceCheck_unknown_;
extern __int64 game_TransporterConst_List_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_g_game_setting;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gameui_Header_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64 game_script_map_obj_g_object_records;
extern char* GameData_2037240[8];
extern char* GameData_212d818[9];
extern char* msg_MessageManager_empty_text_;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
extern char GameData_1b5724d;
extern char game_facility_g_unknown_2174af0;
float LayoutAccessor_155d940(__int64*);
float ProcTheaterSceneAct_13e2420(_QWORD);
float Unit_6c7fa0(__int64, __int64);
long double UnitActor_81ba20(__int64);
unsigned int* TroopMgr_1346380();
void AIDeploy_1274f90(_QWORD*, __int64, int, unsigned int*);
void GameRoutine_1226120(__int64, __int64);
void GameRoutine_129cde0(__int64*, unsigned __int64);
void GameRoutine_12a1580(__int64);
void GameRoutine_13dae60(__int64);
void GameRoutine_1464bd0(_QWORD*, __int64, int, int);
void GameRoutine_844ee0(__int64);
void LayoutAccessor_155cda0(__int64*, __int64, char*);
void LayoutAccessor_155e830(__int64*, char);
void LayoutAccessor_1562680(__int64*, __int64, float);
void RelianceCheck_19a7f00(__int64, __int64, int);
void SceneTalk_1497180(_DWORD*, __int64, unsigned __int64, __int64, __int64,
                       unsigned __int64, unsigned int);
void __attribute__((noreturn)) GameRoutine_13cf650(void);
void __attribute__((noreturn)) GameRoutine_13e0e50();
void __attribute__((noreturn)) GameRoutine_13e9e90(void);
void __attribute__((noreturn)) GameRoutine_1480890();
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a210_alt2(void) __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60f930(_QWORD);
void __attribute__((noreturn))
GameRoutine_60f930_alt1(void) __asm__("GameRoutine_60f930");
void __attribute__((noreturn)) GameRoutine_6e5a20();
void __attribute__((noreturn)) GameRoutine_6f26d0(void);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a230(_QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
void game_12c16e0(__int64*);
void game_6e8720(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_128e520(__int64 a1);
__int64 game_128ef10(__int64 a1, __int64 a2);
__int64 game_1290d40(__int64 a1, __int64 a2, __int64 a3);
__int64 game_1294f20_alt1(__int64 a1, signed int* a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6) __asm__("game_1294f20");
__int64 game_12968e0_alt2(__int64 a1, signed int* a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6) __asm__("game_12968e0");
__int64 game_12975e0(__int64* a1, __int64 a2);
__int64 game_12982e0(__int64 a1, __int64 a2, __int64 a3);
unsigned __int64 game_12a5280();
__int64 (***game_12a62a0(__int64 (***result)(_QWORD, int*)))(_QWORD, int*);
__int64 game_12adf00(__int64 result);
__n128 game_12c4de0(__int64 a1);
__int64 game_12c52c0(__int64 result, __int64 a2, char a3);
__int64 game_12c5550(__int64 a1, __int64 a2, char a3);
__int64 game_12c56a0(__int64 result, __int64 a2, char a3);
__int64 game_12c5890(__int64 a1, _QWORD* a2, char a3);
__int64 game_12c5be0(_WORD* a1, __int64 a2);
__int64 game_12c6b00(__int64* a1, __int64* a2);
__attribute__((swiftcall)) void game_12dd620(PSEUDO_X8 x8_, __int64 result,
                                             int a2, int a3, int a4);
unsigned __int64 game_1313be0(__int64 a1);
__int64 game_1373e60(__int64 result, __int64 a2, int a3, char a4, char a5);
__int64 game_1374320(__int64 a1);
__attribute__((swiftcall)) void game_1391af0(PSEUDO_X8 x8_, __int64 result);
__attribute__((swiftcall)) void game_1391c60(PSEUDO_X8 x8_, __int64 result);
__attribute__((swiftcall)) void game_1391f60(PSEUDO_X8 x8_, __int64 result);
__attribute__((swiftcall)) void game_13d2c60(PSEUDO_X8 x8_,
                                             unsigned __int16* result);
void game_13da3a0(__int64 a1);
__int64 game_13da730(__int64 result, __int64 a2, __n128 a3);
void game_13dabb0(__int64 a1);
__int64 game_13e36c0(__int64 result, __int64 a2);
char* game_13e3e50(__int64 a1, unsigned __int64 a2);
__int64 game_13e4860(__int64 a1, int a2);
__attribute__((swiftcall)) void
game_13e59c0(PSEUDO_X8 x8_, unsigned __int64 result, int a2, int a3, char a4);
__int64 game_13e5ba0(unsigned __int64 a1, int a2, char a3);
__int64 game_13e5d30(__int64 a1);
__attribute__((swiftcall)) void game_13f84c0(PSEUDO_X8 x8_, _BYTE* a1);
__attribute__((swiftcall)) void game_13f8980(PSEUDO_X8 x8_,
                                             unsigned __int8* a1);
__attribute__((swiftcall)) void game_13f8ba0(PSEUDO_X8 x8_, char* a1);
__attribute__((swiftcall)) void game_13f9200(PSEUDO_X8 x8_, int8x16_t* a1);
__attribute__((swiftcall)) void game_13f9460(PSEUDO_X8 x8_, float32x4_t* a1);
__attribute__((swiftcall)) void game_143e320(PSEUDO_X8 x8_, __int64 a1);
__int64 game_147d7e0(__int64* a1, __int64 a2);
__int64 game_147dd40(int a1);
__n128 game_1488fb0(unsigned int a1, __int64 a2, __n128 result);
_QWORD* game_14891b0(_QWORD* result);
__attribute__((swiftcall)) void game_148a650(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_148f260(PSEUDO_X8 x8_, __int64 result);
__int64* game_149e9e0(unsigned __int8 a1);
unsigned __int64 game_149edd0(__int64 a1);
__int64 game_1513f20(__int64 a1);
char* game_1514470(__int64 a1);
__n128 game_1514d20(__int64 a1);
bool game_1552980();
void* game_1556c60(_QWORD* a1, int a2, int a3);
__int64 game_15571e0(__int64 result, unsigned int* a2, __int128* a3);
__int64 game_15ddbe0(__int64 a1, char a2);
__int64 game_15de140(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                     char a5);
bool game_15de420(__int64 a1, unsigned int a2);
__int64 game_15de540(__int64 a1, __int64 a2, __int64 a3, unsigned int a4);
__int64 game_15de780(unsigned __int16* a1, int a2, __int64 a3);
__int64 game_15df0e0(__int64 result, _DWORD* a2);
__attribute__((swiftcall)) void game_1603b10(PSEUDO_X8 x8_,
                                             unsigned __int64 result);
char* game_1603e30();
__attribute__((swiftcall)) void game_1603f20(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void game_1604c70(PSEUDO_X8 x8_, int a1,
                                             unsigned int a2, unsigned int a3);
__attribute__((swiftcall)) void game_16050d0(PSEUDO_X8 x8_, unsigned int a1);
__attribute__((swiftcall)) void game_16051a0(PSEUDO_X8 x8_, unsigned int a1);
__attribute__((swiftcall)) void
game_1605540_alt1(PSEUDO_X8 x8_, __int64 a1, int a2) __asm__("game_1605540");
__attribute__((swiftcall)) void game_16073d0(PSEUDO_X8 x8_, __int64* a1,
                                             __int64 a2);
_QWORD* ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void game_95eaa0(PSEUDO_X8, __int64 result, __int64);
__int64 AISupportSkillScope_11fef70_alt1(_QWORD) __asm__(
    "AISupportSkillScope_11fef70");
__int64 AITarget_1275a80_alt1(__int64, __int64, int, int, __int64,
                              char) __asm__("AITarget_1275a80");
__int64 AIThink_1299cc0(_QWORD);
__int64 AIThink_129b260(_QWORD, _QWORD, _QWORD);
__int64
BattleSide_Destructor_alt1(_QWORD, long double,
                           long double) __asm__("BattleSide_Destructor");
__int64 GameRoutine_11fe0c0_alt1(_QWORD, _QWORD) __asm__("GameRoutine_11fe0c0");
__int64 GameRoutine_1226120_alt1(_QWORD, _QWORD) __asm__("GameRoutine_1226120");
__int64 GameRoutine_1276580(__int64, int);
__int64 GameRoutine_12a13c0(_QWORD);
__int64 GameRoutine_12a1460(_QWORD);
__int64 GameRoutine_12aaf80(_QWORD);
__int64 GameRoutine_12ac8b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12c6110();
__int64 GameRoutine_12c6140(__int64 result, __int64*,
                            __int64 (**)(__int64, __int64), unsigned __int64,
                            __int64*, signed __int64);
__int64 GameRoutine_1366ac0(__int64, __int64);
__int64 GameRoutine_1563f90(__int64 result, __int64);
__int64 GameRoutine_1564060(__int64 result);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_6c2b50_alt1(_QWORD) __asm__("GameRoutine_6c2b50");
__int64 GameRoutine_6c6da0_alt1(_QWORD) __asm__("GameRoutine_6c6da0");
__int64 GameRoutine_747a00_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_747a00");
__int64 GameRoutine_790080_alt1(_QWORD) __asm__("GameRoutine_790080");
__int64 GameRoutine_844ee0_alt1(_QWORD) __asm__("GameRoutine_844ee0");
__int64 Image_72c060_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("Image_72c060");
__int64 LayoutAccessor_155e140(__int64*);
__int64 Pane_58f8a0(__int64);
__int64 UnitSkillList_84cf20_alt1(_QWORD, _QWORD,
                                  _QWORD) __asm__("UnitSkillList_84cf20");
__int64 game_6c51e0_alt1(_QWORD) __asm__("game_6c51e0");
__int64 game_6c6ec0_alt1(_QWORD) __asm__("game_6c6ec0");
__int64 game_UnitPool_Get_alt1(_QWORD) __asm__("game_UnitPool_Get");
__int64 game_Unit_Destroy_Unit_alt1(_QWORD) __asm__("game_Unit_Destroy_Unit");
__int64 memset_alt2(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                    _QWORD) __asm__("memset");
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
bool AIThink_11fd9e0(__int64, __int64);
extern _UNKNOWN* GameData_212e350;
extern _UNKNOWN GameData_1aa9c9c;
extern _UNKNOWN GameData_1acc5c7;
extern _UNKNOWN GameData_22593b0;
extern __int64 (*game_AIThink_SpecialAttackCalculatorBase_vtable[])();
extern __int64 (*game_AIThink_SpecialAttackCalculatorForEnemy_vtable[])();
extern __int64 (*game_AIThink_SpecialAttackCalculatorForEntrust_vtable[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_2130938[2];
extern __int64* GameData_2130bd0[2];
extern __int64* GameData_2130bf8[13];
extern __int64* GameData_2130c08[11];
extern __int64* GameData_2130c10[10];
extern __int64* GameData_2130c28[7];
extern __int64* GameData_2130c30[6];
extern __int64 GameData_212c060;
extern char* GameData_205ada0;
bool game_128f6c0_alt1(__int64* a1, int* a2, __int64 a3, __int64 a4, __int64 a5,
                       __int64 a6) __asm__("game_128f6c0");
__int64 game_12c65c0(__int64 result, __int64* a2, __int64* a3,
                     __int64 (**a4)(__int64, __int64), __int64 a5, __int64 a6,
                     __int64 a7, __int64 a8);
__int64 game_15d1d80();
_QWORD* GameRoutine_12a1460_alt1(_QWORD*) __asm__("GameRoutine_12a1460");
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
__int64* GameRoutine_11fe0c0_alt3(__int64,
                                  __int64) __asm__("GameRoutine_11fe0c0");
__int64 AIThink_12211a0_alt1(__int64, __int64, int*) __asm__("AIThink_12211a0");
__int64 AIThink_129b260_alt1(__int64, _DWORD*,
                             __int64) __asm__("AIThink_129b260");
__int64 GameHr_12c6140(__int64 result, __int64*, __int64 (**)(__int64, __int64),
                       unsigned __int64, __int64*, signed __int64);
__int64 GameHr_7a88a0(__int64*);
__int64 GameHr_84cf20(__int64, __int64, char);
__int64 GameRoutine_11fe0c0_alt2(__int64,
                                 __int64) __asm__("GameRoutine_11fe0c0");
__int64 GameRoutine_1290c20_alt1(__int64, __int64,
                                 int) __asm__("GameRoutine_1290c20");
__int64 GameRoutine_12a13c0_alt1(__int64) __asm__("GameRoutine_12a13c0");
__int64 GameRoutine_12aaf80_alt1(__int64) __asm__("GameRoutine_12aaf80");
__int64 GameRoutine_12ac8b0_alt1(unsigned int, unsigned int, __int64,
                                 __int64) __asm__("GameRoutine_12ac8b0");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 GameRoutine_1a09d20_alt1(unsigned __int64,
                                 __int64) __asm__("GameRoutine_1a09d20");
__int64
GameRoutine_1a0a8e0_alt1(__int64, unsigned __int64, unsigned __int64,
                         const char*,
                         unsigned __int64) __asm__("GameRoutine_1a0a8e0");
__int64 GameRoutine_60a020_alt2(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_747a00_alt2(__int64, unsigned int, unsigned int, __int64,
                                char) __asm__("GameRoutine_747a00");
__int64
RuntimeBuffer_8924a0_alt1(__int64 result, __int64, unsigned __int64,
                          unsigned __int8) __asm__("RuntimeBuffer_8924a0");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_AIThink_GetSpecialEnhancementScore_alt1(__int64*, int*) __asm__(
    "game_AIThink_GetSpecialEnhancementScore");
__int64 game_UnitItemList_FindEquipped_710080_alt1(__int64) __asm__(
    "game_UnitItemList_FindEquipped_710080");
__int64 game_map_history_DataAdditionalNewType_Deserialize_alt1(
    __int64,
    __int64) __asm__("game_map_history_DataAdditionalNewType_Deserialize");
__int64 memchr_alt1(__int64, int, unsigned __int64) __asm__("memchr");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 memset_alt3(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(
    __int64,
    unsigned __int64) __asm__("nn_mem_StandardAllocator_Allocate_1a0ad50");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
bool AIThink_1299cc0_alt1(__int64) __asm__("AIThink_1299cc0");
bool game_HasActiveSkill_843420_alt1(_DWORD*, __int64) __asm__(
    "game_HasActiveSkill_843420");
bool game_Unit_Unknown6c8f90_alt1(__int64) __asm__("game_Unit_Unknown6c8f90");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void AIDeploy_1274f90_alt1(_QWORD*, __int64, unsigned int,
                           _DWORD*) __asm__("AIDeploy_1274f90");
void AISupportSkillScope_11fef70_alt2(_DWORD*) __asm__(
    "AISupportSkillScope_11fef70");
void AIThink_121d220_alt1(__int64, __int64, int) __asm__("AIThink_121d220");
void BattleSide_Destructor_alt2(_QWORD*) __asm__("BattleSide_Destructor");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) String_60a230_alt1() __asm__("String_60a230");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
bool game_128f6c0(__int64* a1, int* a2);
__int64 game_1294f20(__int64 a1, signed int* a2);
__int64 game_12968e0(__int64 a1, signed int* a2);
__attribute__((swiftcall)) void game_1605540(PSEUDO_X8 x8_, unsigned int a1,
                                             int a2);

__int64 game_128e520(__int64 a1)
{
  __int64* v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v21;
  unsigned __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  char v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  struct {
    _QWORD v45[4];
    _QWORD* v46;
  } v45_;
  __int64 v47;
  int v48;
  struct {
    _QWORD v49[5];
    __int64 v50;
    __int16 v51;
    char v52;
  } v49_;
  struct {
    _QWORD v53[6];
    int v54;
    int v55;
    int v56;
    char gap188_[4];
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    bool v64;
    char gap249_[7];
    __int64 v65;
  } v53_;
  _QWORD v66[6];
  _QWORD v67[7];
  int v68;

  v1 = GameData_212ce90[0];
  if (*(_BYTE*)(*GameData_212ce90[0] +
                *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) != 1) {
    return 0;
  }
  v3 = (__int64*)GameData_212d290;
  if (*(_QWORD*)GameData_212d290 != 0 &&
      (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) != 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(v4 + 1744);
  v6 = *(unsigned int*)((char*)((_UNKNOWN*)0xE0LL) +
                        game_g_shared_system_skills_ptr);
  v7 = *(_QWORD*)(v4 + 1752) - v5;
  LODWORD(v53_.v53[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xE0LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
  if (((v6 >> 5) & 0x7F) + 1 <= v7 >> 2 &&
      ((*(_DWORD*)(v5 + 4 * ((v6 >> 5) & 0x7F)) >> v6) & 1) != 0) {
    if (game_HasActiveSkill_843420_alt1(v53_.v53, v4 + 1744)) {
      return 0;
    }
    v4 = *(_QWORD*)(a1 + 8);
  }
  if (game_11f44e0(v4, 0)) {
    v8 = *(_QWORD**)(a1 + 8);
    v9 = GameData_212c880[0];
    v10 = *(_QWORD*)(*GameData_212c880[0] + 64);
    v11 =
        *(_QWORD*)(v10 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                       (unsigned __int64)((_UNKNOWN*)0x54LL)));
    if (v11 != 0) {
      v12 = *(_QWORD*)(v10 +
                       8LL * *(int*)((char*)GameData_2130920[0] +
                                     (unsigned __int64)((_UNKNOWN*)0x54LL)));
      do {
        v13 = *(unsigned int*)(*(_QWORD*)(v12 + 24) + 4LL);
        if ((v13 & 0xFFF) == 0) {
          v14 = v8[182];
          v15 = (v8[183] - v14) >> 2;
          goto LABEL_25;
        }
        v14 = v8[182];
        v15 = (v8[183] - v14) >> 2;
        if (v15 < ((v13 >> 5) & 0x7F) + 1 ||
            ((*(_DWORD*)(v14 + 4 * ((v13 >> 5) & 0x7F)) >> v13) & 1) == 0 ||
            (v16 = v8[187], v17 = v8[186], v16 == v17)) {
        LABEL_18:
          LODWORD(v19) = -1;
        }
        else {
          v18 = (v16 - v17) >> 2;
          v19 = 0;
          while (((*(_DWORD*)(v17 + 4 * v19) ^ (unsigned int)v13) & 0xFFF) !=
                 0) {
            if (v18 == ++v19) {
              goto LABEL_18;
            }
          }
        }
        if ((v19 & 0x80000000) == 0) {
          break;
        }
        v12 = *(_QWORD*)(v10 + 8 * (v13 & 0xFFF));
      } while (v12 != 0);
      if ((v19 & 0x80000000) == 0) {
        v20 = v8[186];
      LABEL_23:
        v21 = (_DWORD*)(v20 + 4LL * (unsigned int)v19);
        goto LABEL_34;
      }
    LABEL_25:
      v22 = *(unsigned __int16*)(v11 + 16);
      v23 = (v22 >> 5) & 0x7F;
      if (v15 >= v23 + 1) {
        v24 = v22 & 0xFFF;
        if (((*(_DWORD*)(v14 + 4LL * (unsigned int)v23) >> v24) & 1) != 0) {
          v20 = v8[186];
          v25 = v8[187] - v20;
          if (v25 != 0) {
            v26 = v25 >> 2;
            v19 = 0;
            v21 = GameData_212c8a8;
            while ((*(_DWORD*)(v20 + 4 * v19) & 0xFFF) != v24) {
              if (v26 == ++v19) {
                goto LABEL_34;
              }
            }
            if ((v19 & 0x8000000000000000LL) == 0) {
              goto LABEL_23;
            }
          }
        }
      }
    }
    v21 = GameData_212c8a8;
  LABEL_34:
    if ((*(_WORD*)v21 & 0xFFF) != 0 &&
        (GameRoutine_128e990_alt1((__int64)v8, v21) & 1) != 0 &&
        game_Unit_Unknown6c8f90_alt1(*(_QWORD*)(a1 + 8))) {
      v27 = game_UnitItemList_FindEquipped_710080_alt1(*(_QWORD*)(a1 + 8) +
                                                       828LL);
      if ((v27 & 0x80000000) == 0) {
        v28 = v27;
        if (*(_BYTE*)(*v1 + 25) == 1) {
          v29 = 0;
        }
        else {
          v29 = a1 + 2288;
          AIThink_121d220_alt1(a1 + 2288, *(_QWORD*)(a1 + 8), 0);
        }
        v31 = *(_QWORD*)(a1 + 8);
        v68 = 5242882;
        AIThink_12211a0_alt1(a1, v31, &v68);
        v53_.v55 = 0;
        v32 = *v3;
        v53_.v60 = 0;
        v53_.v61 = 0;
        v53_.v62 = 0;
        v53_.v63 = 0;
        v53_.v53[4] = 0;
        v53_.v53[5] = -1;
        v53_.v58 = -1;
        v53_.v59 = -1;
        v48 = 0;
        v47 = 0;
        v49_.v49[0] = 0;
        v49_.v49[1] = -1;
        v53_.v53[1] = GameData_2130660;
        v53_.v53[2] = GameData_2130660;
        v33 = *(_QWORD*)(v32 + 16);
        v34 = *(_QWORD*)(a1 + 8);
        v66[0] = GameData_20189c8;
        v53_.v54 = v28;
        v53_.v65 = -1;
        v67[0] = GameData_2018a58;
        v49_.v51 = 0;
        LODWORD(v33) = *(unsigned __int8*)(v33 + 2240);
        v53_.v53[3] = v34;
        v66[4] = v66;
        v67[4] = v67;
        LODWORD(v53_.v53[0]) = -1;
        v49_.v52 = 0;
        v49_.v49[4] = 0;
        v49_.v50 = -1;
        v49_.v49[2] = 0x7FFFFFFF;
        v49_.v49[3] = 0xFFFFFFFFLL;
        v53_.v56 = 5242882;
        v53_.v57 = v29;
        v45_.v46 = v45_.v45;
        v53_.v64 = (_DWORD)v33 == 5;
        v45_.v45[0] = GameData_2020788;
        v45_.v45[1] = &v47;
        v45_.v45[2] = &v48;
        game_128ef10((__int64)v53_.v53, (__int64)v45_.v45);
        if (v45_.v46 == v45_.v45) {
          v35 = 32;
        }
        else {
          if (v45_.v46 == nullptr) {
            goto LABEL_48;
          }
          v35 = 40;
        }
        (*(void (**)(__int64))(*v45_.v46 + v35))((__int64)v45_.v46);
      LABEL_48:
        game_AIThink_EntrustGetAttackResult((__int64)v53_.v53, v49_.v49);
        if (v48 < 3) {
          v36 = 0;
        LABEL_59:
          AIThink_121a1c0(v53_.v53);
          return v36;
        }
        v37 = *GameData_212cfd0[0];
        *(_QWORD*)(v37 + 12) = v49_.v50;
        *(_BYTE*)(v37 + 20) = 6;
        v38 = *(_QWORD*)(a1 + 8);
        if (v38 != 0) {
          *(_BYTE*)(v37 + 317) = *(_BYTE*)(v38 + 2088);
          *(_WORD*)(v37 + 313) = *(_WORD*)(v38 + 584);
          v39 = *(_QWORD*)(v38 + 440);
          if (v39 != 0) {
            v40 = *(_BYTE*)(v39 + 16);
          LABEL_55:
            *(_BYTE*)(v37 + 315) = v40;
            v41 = v49_.v50;
            *(_BYTE*)(v37 + 314) = BYTE4(v49_.v50);
            v42 = *v9;
            *(_BYTE*)(v37 + 313) = v41;
            v43 = *(_QWORD*)(*(_QWORD*)(v42 + 64) + 8LL * (*v21 & 0xFFF));
            if (v43 != 0) {
              v44 = *(_DWORD*)(v37 + 56) & 0xFFFFF000 |
                    *(_WORD*)(v43 + 16) & 0xFFF;
            }
            else {
              v44 = *(_DWORD*)(v37 + 56) & 0xFFFFF000;
            }
            v36 = 1;
            *(_DWORD*)(v37 + 56) = v44;
            goto LABEL_59;
          }
        }
        else {
          *(_BYTE*)(v37 + 317) = 0;
        }
        v40 = 9;
        goto LABEL_55;
      }
    }
  }
  return 0;
}

__int64 game_128ef10(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;

  v3 = *(_QWORD*)(a2 + 32);
  if (v3 != 0) {
    if (v3 == a2) {
      v6_.v7 = v6_.v6;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 24LL))(v3, v6_.v6);
    }
    else {
      v6_.v7 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    }
  }
  else {
    v6_.v7 = nullptr;
  }
  GameRoutine_129b120(v6_.v6, (_QWORD*)(a1 + 192));
  if (v6_.v7 == v6_.v6) {
    v4 = 32;
    goto LABEL_10;
  }
  if (v6_.v7 != nullptr) {
    v4 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v6_.v7 + v4))((__int64)v6_.v7);
  }
  return a1;
}

bool game_128f6c0(__int64* a1, int* a2)
{
  int* v2;
  __int64 v4;
  __int64* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _DWORD* v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  _QWORD* v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  bool v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  signed int v38;
  unsigned int v39;
  int v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v49;
  __int64 v50;
  bool v51;
  signed int v52;
  bool v53;
  bool v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  char v59;
  unsigned int v60;
  char v61;
  unsigned int v62;
  unsigned int v63;
  unsigned __int8 v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v81;
  bool v82;
  _QWORD* v83;
  _QWORD* v84;
  __int64 v85;
  char v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 v96;
  __int64 v97;
  int v98;
  int v99;
  float v100;
  unsigned __int64 v101;
  float v102;
  unsigned __int64 v103;
  unsigned int v104;
  __int64 v105;
  bool v106;
  unsigned int v107;
  __int64 v108;
  _BYTE* v109;
  __int64* v110;
  int v111;
  _BYTE* v112;
  __int64* v113;
  __int64 v114;
  int v115;
  __int64* v116;
  __int64 v117;
  int v118;
  int v119;
  int v120;
  char v121;
  __int64 v122;
  unsigned int v123;
  unsigned int v124;
  float32x2_t v125;
  float v126;
  float v127;
  int v128;
  __int64 v129;
  int v130;
  int v131;
  int v132;
  int v133;
  __int64 v134;
  unsigned int v135;
  int v136;
  int v137;
  bool v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  unsigned __int8 v142;
  int v143;
  int v144;
  int v145;
  unsigned int v146;
  int v147;
  __int64* v148;
  __int64* v149;
  __int64 v150;
  __int64 v151;
  int v152;
  __int64* v153;
  __int64* v154;
  __int64 v155;
  __int64* v156;
  __int64* v157;
  __int64 (**v158)();
  __int64 (**v159)();
  int v160;
  unsigned int v161;
  _BYTE* v162;
  unsigned int v163;
  signed int v164;
  int* v165;
  int* v166;
  int v167;
  __int64 v168;
  int v169;
  int v170;
  int v171;
  int v172;
  __int64 v173;
  int v174;
  __int64 v175;
  float v176;
  float32x2_t v177;
  char* v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  struct {
    signed __int64 v182;
    int v183;
    int v184;
    __int64* v185;
  } v182_;
  struct {
    _BYTE v186[12292];
    int v187;
    __int64 v188;
    unsigned __int64 v189;
    _QWORD* v190;
    __int64 v191;
    char gap12584_[8];
    int v192;
  } v186_;
  struct {
    __int64 v193;
    unsigned __int64 v194;
    _DWORD* v195;
    int v196;
    int v197;
    char v198;
    char gap12633_[7];
    __int64 v199;
    __int64 v200;
    __int64 v201;
  } v193_;
  struct {
    __int64 v202[14];
    char v203;
  } v202_;
  struct {
    char* v204;
    __int64 (***v205)();
    char gap12800_[16];
    char** v206;
  } v204_;
  struct {
    __int64 (**v207)();
    __int64 (**v208)();
  } v207_;
  struct {
    __int64 v209;
    int v210;
    char gap12860_[4];
    __int64 v211;
    __int64 v212;
    __int64 v213;
    __int64 v214;
  } v209_;
  _QWORD v215[272];
  _BYTE v216[48];
  __int64 v217;
  _QWORD v218[2];
  _QWORD v219[6];
  __int64 v220[89];
  __int64 v221[6];
  __int64 v222[89];
  __int64 v223[6];
  __int64 v224[89];
  __int64 v225[6];
  struct {
    _QWORD v226[1120];
    __int64 v227;
    char gap28616_[32];
    __int64* v228;
    __int64 v229;
    char gap28664_[520];
    int v230;
    char gap29188_[348];
    __int64* v231;
    __int64 v232;
    __int64 v233;
  } v226_;
  struct {
    int v234[5];
    char gap29600_[8];
    int v235;
    _BOOL4 v236;
  } v234_;

  a2[2] = 0;
  *((_QWORD*)a2 + 3) = 0;
  v2 = a2;
  a2[3081] = 0;
  *(_QWORD*)a2 = -1;
  v165 = a2 + 2;
  v4 = *((_QWORD*)a2 + 1544);
  *(_QWORD*)(a2 + 3) = -1;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *((_QWORD**)a2 + 1543);
    if (v6 != nullptr) {
      do {
        v7 = (_QWORD*)*v6;
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v5 + v8, (__int64)v6);
        v6 = v7;
      } while (v7 != nullptr);
    }
    v9 = *((_QWORD*)v2 + 1542);
    *((_QWORD*)v2 + 1543) = 0;
    if (v9 != 0) {
      v10 = v9 & 7;
      if (v9 >= 8) {
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        do {
          *(_QWORD*)(*((_QWORD*)v2 + 1541) + 8 * v11) = 0;
          *(_QWORD*)(*((_QWORD*)v2 + 1541) + 8 * v11 + 8) = 0;
          *(_QWORD*)(*((_QWORD*)v2 + 1541) + 8 * v11 + 16) = 0;
          *(_QWORD*)(*((_QWORD*)v2 + 1541) + 8 * v11 + 24) = 0;
          *(_QWORD*)(*((_QWORD*)v2 + 1541) + 8 * v11 + 32) = 0;
          *(_QWORD*)(*((_QWORD*)v2 + 1541) + 8 * v11 + 40) = 0;
          *(_QWORD*)(*((_QWORD*)v2 + 1541) + 8 * v11 + 48) = 0;
          v13 = *((_QWORD*)v2 + 1541) + 8 * v11;
          v11 += 8;
          *(_QWORD*)(v13 + 56) = 0;
        } while (v12 != v11);
      }
      else {
        v11 = 0;
      }
      if (v10 != 0) {
        v14 = 8 * v11;
        do {
          --v10;
          *(_QWORD*)(*((_QWORD*)v2 + 1541) + v14) = 0;
          v14 += 8;
        } while (v10 != 0);
      }
    }
    *((_QWORD*)v2 + 1544) = 0;
  }
  v2[3092] = 0;
  v2[5] = 0;
  memset_alt3(*GameData_2130940 + 8, 0, 0x2000u);
  GameRoutine_11fe0c0_alt2((__int64)v202_.v202, *a1);
  v193_.v194 = -1;
  v193_.v200 = 0;
  v193_.v201 = 0;
  GameRoutine_844ee0((__int64)v186_.v186);
  v182_.v185 = nullptr;
  v186_.v187 = 0;
  v182_.v182 = 0xFFFFFFFF00000000LL;
  v182_.v183 = -1;
  if (v186_.v191 != 0) {
    v15 = v186_.v190;
    if (v186_.v190 != nullptr) {
      do {
        v16 = (_QWORD*)*v15;
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v5 + v17, (__int64)v15);
        v15 = v16;
      } while (v16 != nullptr);
    }
    v186_.v190 = nullptr;
    if (v186_.v189 != 0) {
      v18 = v186_.v189 & 7;
      if (v186_.v189 >= 8) {
        v20 = v186_.v189 & 0xFFFFFFFFFFFFFFF8LL;
        v19 = 0;
        do {
          *(_QWORD*)(v186_.v188 + 8 * v19) = 0;
          *(_QWORD*)(v186_.v188 + 8 * v19 + 8) = 0;
          *(_QWORD*)(v186_.v188 + 8 * v19 + 16) = 0;
          *(_QWORD*)(v186_.v188 + 8 * v19 + 24) = 0;
          *(_QWORD*)(v186_.v188 + 8 * v19 + 32) = 0;
          *(_QWORD*)(v186_.v188 + 8 * v19 + 40) = 0;
          *(_QWORD*)(v186_.v188 + 8 * v19 + 48) = 0;
          v21 = v186_.v188 + 8 * v19;
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
          *(_QWORD*)(v186_.v188 + v22) = 0;
          v22 += 8;
        } while (v18 != 0);
      }
    }
    v186_.v191 = 0;
  }
  v23 = *a1;
  v24 = (_DWORD*)a1[1];
  v25 = a1[4];
  v186_.v192 = 0;
  v182_.v184 = 0;
  v193_.v193 = v23;
  LOBYTE(v23) = *((_BYTE*)a1 + 24);
  v193_.v195 = v24;
  v193_.v199 = v25;
  v193_.v198 = v23;
  v26 = *((_DWORD*)a1 + 4);
  v27 = *((_DWORD*)a1 + 5);
  v193_.v197 = v27;
  v193_.v196 = v26;
  if (*(_BYTE*)(*GameData_212ce90[0] +
                *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) != 1) {
    v29 = 0;
    v160 = 0;
    v28 = 0;
    if ((v26 & 1) == 0) {
      goto LABEL_37;
    }
    goto LABEL_44;
  }
  if (*(_QWORD*)GameData_212d290 == 0 ||
      (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) == 0) {
    v28 = 1;
    v29 = 0;
    v160 = 1;
    if ((v26 & 1) == 0) {
      goto LABEL_37;
    }
  LABEL_44:
    v30 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 8, 16, 0);
    v31 = (__int64)v30;
    v32 = GameData_2130bf8[0];
  LABEL_45:
    *v30 = v32 + 2;
    goto LABEL_46;
  }
  v160 = 0;
  v28 = 2;
  v29 = 1;
  if ((v26 & 1) != 0) {
    goto LABEL_44;
  }
LABEL_37:
  if ((v26 & 4) != 0) {
    v34 = v27 == 3;
    v35 = fw_memory_HeapManager_Allocate(*v5, 16, 16, 0);
    v36 = GameData_2130c08[0];
    *(_BYTE*)(v35 + 8) = v34;
    *(_BYTE*)(v35 + 9) = 0;
    *(_QWORD*)v35 = v36 + 2;
    v33 = v193_.v201;
    *(_DWORD*)(v35 + 12) = *(__int16*)(v193_.v193 + 492);
    v193_.v201 = v35;
    if (v33 == 0) {
      goto LABEL_50;
    }
    goto LABEL_49;
  }
  if ((v26 & 0x10) != 0) {
    v31 = fw_memory_HeapManager_Allocate(*v5, 16, 16, 0);
    v149 = GameData_2130c10[0] + 2;
    *(_BYTE*)(v31 + 8) = (v193_.v196 & 0x400) != 0;
    *(_QWORD*)v31 = v149;
  LABEL_46:
    v33 = v193_.v201;
    v193_.v201 = v31;
    if (v33 == 0) {
      goto LABEL_50;
    }
  LABEL_49:
    (*(void (**)(__int64))(*(_QWORD*)v33 + 8LL))(v33);
    goto LABEL_50;
  }
  if ((v26 & 0x80) != 0) {
    v30 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 8, 16, 0);
    v31 = (__int64)v30;
    v32 = GameData_2130c28[0];
    goto LABEL_45;
  }
  if ((v26 & 0x200) != 0) {
    v30 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 8, 16, 0);
    v31 = (__int64)v30;
    v32 = GameData_2130c30[0];
    goto LABEL_45;
  }
  if (v29 != 0) {
    GameRoutine_12a13c0_alt1((__int64)&v193_.v193);
  }
  else {
    GameRoutine_12a1460_alt1(&v193_.v193);
  }
LABEL_50:
  v37 = *GameData_2130940;
  if ((*((_BYTE*)a1 + 17) & 0x20) != 0) {
    memset_alt3(v37 + 16408, 0, 0x2000u);
  }
  v150 = v37;
  *(_BYTE*)(v37 + 24600) = 1;
  v38 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v39 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v163 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  v164 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  if (v38 <= v163 && *(unsigned __int8*)(*GameData_212ce98[0] + 28) <= v39) {
    v168 = 0;
    v167 = 0;
    v49 = GameData_21306a0[0];
    v50 = GameData_21306c0[0];
    v180 = v150 + 16408;
    v178 = (char*)GameData_2130948 + 16;
    v159 = (__int64 (**)(void))(GameData_21306b8[0] + 16);
    v158 = (__int64 (**)(void))(GameData_21308b8 + 16);
    v157 = GameData_2130bd0[0] + 2;
    v155 = GameData_212d238[0] + 16;
    v156 = GameData_2130938[0] + 2;
    v154 = GameData_212da50[0] + 2;
    v166 = v2;
    v174 = v28;
    v153 = GameData_212d258[0] + 2;
    do {
      v52 = v164;
      v234_.v235 = 32 * v38;
      v172 = 32 * (v38 - 1);
      v170 = (32 * v38) | 1;
      v171 = 32 * v38 - 1;
      v169 = 32 * (v38 + 1);
      do {
        if ((GameRoutine_747a00_alt2(*(_QWORD*)(*(_QWORD*)v49 + 8LL), v52, v38,
                                     *a1, 0) &
             1) == 0) {
          goto LABEL_72;
        }
        v53 = (signed __int32)*(_DWORD*)(*(_QWORD*)v50 + 16LL) <= v52 &&
              v52 <= (signed __int32)*(_DWORD*)(*(_QWORD*)v50 + 20LL);
        v54 = v53 && (signed __int32)*(_DWORD*)(*(_QWORD*)v50 + 24LL) <= v38;
        if (!v54 || v38 > (signed __int32)*(_DWORD*)(*(_QWORD*)v50 + 28LL)) {
          goto LABEL_72;
        }
        if ((*((_BYTE*)a1 + 17) & 0x20) != 0) {
          if ((unsigned int)(v52 + v234_.v235) >= 0x400) {
            v58 = 0;
          }
          else {
            v58 = v52 + v234_.v235;
          }
          if (*(_QWORD*)(v180 + 8LL * v58) != 0) {
            goto LABEL_72;
          }
          v59 = *(_BYTE*)(*GameData_212ce98[0] + 24);
          v60 = *(unsigned __int8*)(*GameData_212ce98[0] + 26);
          v61 = *(_BYTE*)(*GameData_212ce98[0] + 25);
          v62 = *(unsigned __int8*)(*GameData_212ce98[0] + 27);
          if (v60 > (unsigned __int8)(v52 - v59) &&
              v62 > (unsigned __int8)(v38 - 1 - v61)) {
            v63 = v52 + v172;
            if ((unsigned int)(v52 + v172) >= 0x400) {
              v63 = 0;
            }
            *(_QWORD*)(v180 + 8LL * v63) = 1;
            v59 = *(_BYTE*)(*GameData_212ce98[0] + 24);
            v60 = *(unsigned __int8*)(*GameData_212ce98[0] + 26);
            v61 = *(_BYTE*)(*GameData_212ce98[0] + 25);
            v62 = *(unsigned __int8*)(*GameData_212ce98[0] + 27);
          }
          v64 = v38 - v61;
          if (v60 > (unsigned __int8)~(v59 - v52) && v62 > v64) {
            v65 = v171 + v52;
            if ((unsigned int)(v171 + v52) >= 0x400) {
              v65 = 0;
            }
            *(_QWORD*)(v180 + 8LL * v65) = 1;
            v61 = *(_BYTE*)(*GameData_212ce98[0] + 25);
            v59 = *(_BYTE*)(*GameData_212ce98[0] + 24);
            v60 = *(unsigned __int8*)(*GameData_212ce98[0] + 26);
            v62 = *(unsigned __int8*)(*GameData_212ce98[0] + 27);
            v64 = v38 - v61;
          }
          if (v60 > (unsigned __int8)(v52 - v59) && v62 > v64) {
            *(_QWORD*)(v180 + 8LL * v58) = 1;
            v61 = *(_BYTE*)(*GameData_212ce98[0] + 25);
            v59 = *(_BYTE*)(*GameData_212ce98[0] + 24);
            v60 = *(unsigned __int8*)(*GameData_212ce98[0] + 26);
            v62 = *(unsigned __int8*)(*GameData_212ce98[0] + 27);
            v64 = v38 - v61;
          }
          if (v60 > (unsigned __int8)(v52 - v59 + 1) && v62 > v64) {
            v66 = v52 + v170;
            if ((unsigned int)(v52 + v170) >= 0x400) {
              v66 = 0;
            }
            *(_QWORD*)(v180 + 8LL * v66) = 1;
            v59 = *(_BYTE*)(*GameData_212ce98[0] + 24);
            v60 = *(unsigned __int8*)(*GameData_212ce98[0] + 26);
            v61 = *(_BYTE*)(*GameData_212ce98[0] + 25);
            v62 = *(unsigned __int8*)(*GameData_212ce98[0] + 27);
          }
          if (v60 > (unsigned __int8)(v52 - v59) &&
              v62 > (unsigned __int8)(v38 + 1 - v61)) {
            v67 = v52 + v169;
            if ((unsigned int)(v52 + v169) >= 0x400) {
              v67 = 0;
            }
            *(_QWORD*)(v180 + 8LL * v67) = 1;
          }
        }
        v209_.v210 = 0;
        v209_.v209 = 0;
        v207_.v208 = nullptr;
        v207_.v207 = nullptr;
        v209_.v211 = 0;
        v209_.v212 = 0;
        v209_.v213 = 0;
        v209_.v214 = 0;
        __builtin_memset(v215, 0, 32);
        v55 = *GameData_212ce98[0];
        v204_.v205 = &v207_.v207;
        v204_.v206 = &v204_.v204;
        v56 = *(_QWORD*)(v55 + 96);
        v204_.v204 = v178;
        Image_72c060(v56, v202_.v202[0], v52, v38, (__int64)&v204_.v204);
        if (v204_.v206 == &v204_.v204) {
          v57 = 32;
          goto LABEL_115;
        }
        if (v204_.v206 != nullptr) {
          v57 = 40;
        LABEL_115:
          (*(void (**)(void)) & (*v204_.v206)[v57])();
        }
        v68 = v202_.v202[0];
        v69 = *(_QWORD*)(v202_.v202[0] + 1680);
        if ((int)((unsigned __int64)(*(_QWORD*)(v202_.v202[0] + 1688) - v69) >>
                  2) >= 1) {
          v70 = *(_QWORD*)(v202_.v202[0] + 1648);
          *(_QWORD*)(v202_.v202[0] + 1688) = v69;
          v71 = *(_DWORD*)(v68 + 416);
          *(_DWORD*)(v68 + 1672) = 0;
          *(_QWORD*)(v68 + 1728) = 0;
          *(_QWORD*)(v68 + 1736) = 0;
          *(_QWORD*)(v68 + 1656) = v70;
          if ((v71 & 0x10000000) == 0) {
            *(_DWORD*)(v68 + 416) = v71 | 0x10000000;
            game_6c51e0(v68);
            GameRoutine_6c6da0(v68);
            game_6c6ec0(v68);
            *(_DWORD*)(v68 + 416) &= ~0x10000000u;
            v68 = v202_.v202[0];
          }
        }
        GameHr_84cf20(v68 + 1648, (__int64)&v207_.v207, 1);
        v72 = v202_.v202[0];
        v73 = *(_DWORD*)(v202_.v202[0] + 416);
        *(_BYTE*)(v202_.v202[0] + 584) = v52;
        *(_BYTE*)(v72 + 585) = v38;
        if ((v73 & 0x10000000) == 0) {
          *(_DWORD*)(v72 + 416) = v73 | 0x10000000;
          game_6c51e0(v72);
          GameRoutine_6c6da0(v72);
          game_6c6ec0(v72);
          *(_DWORD*)(v72 + 416) &= ~0x10000000u;
        }
        v202_.v203 = 1;
        if (v209_.v214 != 0) {
          v74 = *v5;
          v215[0] = v209_.v214;
          if (*(_QWORD*)(v74 + 200) != 0) {
            v75 = 128;
          }
          else {
            v75 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v74 + v75, v209_.v214);
        }
        if (v209_.v211 != 0) {
          v76 = *v5;
          v209_.v212 = v209_.v211;
          if (*(_QWORD*)(v76 + 200) != 0) {
            v77 = 128;
          }
          else {
            v77 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v76 + v77, v209_.v211);
        }
        if (v207_.v207 != nullptr) {
          v78 = *v5;
          v207_.v208 = v207_.v207;
          if (*(_QWORD*)(v78 + 200) != 0) {
            v79 = 128;
          }
          else {
            v79 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v78 + v79, (__int64)v207_.v207);
        }
        v193_.v194 = __PAIR64__(v38, v52);
        if (v28 != 2) {
          AIThink_129b260_alt1((__int64)&v207_.v207, &v193_.v193,
                               (__int64)&v182_.v182);
          if (v28 == 1) {
            v81 = *GameData_2130940;
            v226_.v232 = *GameData_2130940 + 8208;
            *(_BYTE*)(v81 + 16400) = 1;
            v207_.v207 = game_AIThink_SpecialAttackCalculatorForEntrust_vtable;
            v226_.v231 = v157;
            v226_.v233 = *(_QWORD*)GameData_21306d0 + 2688LL;
            v82 = AIThink_1299cc0_alt1((__int64)&v207_.v207);
            v226_.v231 = v156;
            *(_BYTE*)(v226_.v232 + 0x2000) = 0;
          }
          else {
            v207_.v207 = game_AIThink_SpecialAttackCalculatorForEnemy_vtable;
            v82 = AIThink_1299cc0_alt1((__int64)&v207_.v207);
          }
          v207_.v207 = game_AIThink_SpecialAttackCalculatorBase_vtable;
          v209_.v213 = GameData_21306b8[0] + 16;
          v219[4] = GameData_212d238[0] + 16;
          v226_.v228 = GameData_212da50[0] + 2;
          if (v226_.v229 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v226_.v229 + 8LL))(v226_.v229);
            v226_.v229 = 0;
          }
          v219[5] = GameData_212d258[0] + 2;
          BattleSide_Destructor_alt2(v226_.v226);
          BattleSide_Destructor_alt2(v224);
          BattleSide_Destructor_alt2(v222);
          BattleSide_Destructor_alt2(v220);
          game_Unit_Destroy_Unit((__int64)&v217);
          game_Unit_Destroy_Unit((__int64)v215);
          *(_BYTE*)(v209_.v212 + 0x2000) = 0;
          if (!v82) {
            goto LABEL_71;
          }
          goto LABEL_248;
        }
        v182_.v185 = nullptr;
        v186_.v187 = 0;
        v182_.v182 = 0xFFFFFFFF00000000LL;
        v182_.v183 = -1;
        if (v186_.v191 != 0) {
          v83 = v186_.v190;
          if (v186_.v190 != nullptr) {
            do {
              v84 = (_QWORD*)*v83;
              if (*(_QWORD*)(*v5 + 200) != 0) {
                v85 = 128;
              }
              else {
                v85 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v5 + v85, (__int64)v83);
              v83 = v84;
            } while (v84 != nullptr);
          }
          v86 = v186_.v189;
          v186_.v190 = nullptr;
          if (v186_.v189 != 0) {
            if (v186_.v189 >= 8) {
              v88 = v186_.v189 & 0xFFFFFFFFFFFFFFF8LL;
              v87 = 0;
              do {
                *(_QWORD*)(v186_.v188 + 8 * v87) = 0;
                *(_QWORD*)(v186_.v188 + 8 * v87 + 8) = 0;
                *(_QWORD*)(v186_.v188 + 8 * v87 + 16) = 0;
                *(_QWORD*)(v186_.v188 + 8 * v87 + 24) = 0;
                *(_QWORD*)(v186_.v188 + 8 * v87 + 32) = 0;
                *(_QWORD*)(v186_.v188 + 8 * v87 + 40) = 0;
                *(_QWORD*)(v186_.v188 + 8 * v87 + 48) = 0;
                v89 = v186_.v188 + 8 * v87;
                v87 += 8;
                *(_QWORD*)(v89 + 56) = 0;
              } while (v88 != v87);
            }
            else {
              v87 = 0;
            }
            v90 = v86 & 7;
            if (v90 != 0) {
              v91 = 8 * v87;
              do {
                --v90;
                *(_QWORD*)(v186_.v188 + v91) = 0;
                v91 += 8;
              } while (v90 != 0);
            }
          }
          v186_.v191 = 0;
        }
        v186_.v192 = 0;
        v182_.v184 = 0;
        v207_.v207 = v159;
        GameRoutine_6c2b50((__int64)&v209_.v209);
        GameRoutine_6c2b50((__int64)v216);
        GameRoutine_790080((__int64)v218);
        v207_.v207 = v158;
        v226_.v230 = 0;
        v92 = *GameData_2130988[0];
        v93 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                         8LL * (*v193_.v195 & 0xFFF));
        v234_.v236 =
            v93 != 0 && (unsigned int)*(unsigned __int8*)(v93 + 105) - 2 < 3;
        LODWORD(v94) = v193_.v194 + 32 * HIDWORD(v193_.v194);
        if ((unsigned int)v94 >= 0x400) {
          v94 = 0;
        }
        else {
          v94 = (unsigned int)v94;
        }
        v95 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)GameData_21306a0[0] +
                                             12880LL) +
                                  v94 + 64);
        v96 = v193_.v193;
        v175 = *GameData_2130940;
        *(_BYTE*)(*GameData_2130940 + 8200) = 1;
        v97 = GameRoutine_12aaf80_alt1(v96);
        if (v97 == 0) {
          goto LABEL_173;
        }
        v98 = *(char*)(v97 + 585);
        v99 = *(char*)(v97 + 584) - (_DWORD)v193_.v194;
        v176 = (float)v99;
        v100 = (float)(v98 - HIDWORD(v193_.v194));
        if (v99 != 0 || v98 != HIDWORD(v193_.v194)) {
          v102 = sqrtf((float)(PSEUDO_UNFUSED(v100 * v100)) +
                       (float)(v176 * v176));
          *(float*)&v103 = v176 / v102;
          *((float*)&v103 + 1) = v100 / v102;
          LANES64(v177).n64_u64[0] = v103;
        }
        else {
          *(float*)&v101 = (float)v99;
          *((float*)&v101 + 1) = (float)(v98 - HIDWORD(v193_.v194));
          LANES64(v177).n64_u64[0] = v101;
        }
        if ((AITarget_1275a80_alt1(
                 v92, v193_.v193, v193_.v194, SHIDWORD(v193_.v194),
                 *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                            8LL * (*v193_.v195 & 0xFFF)),
                 6) &
             1) != 0) {
          v152 = v95;
          v181 = *(unsigned int*)(v92 + 12356);
          if ((int)v181 >= 1) {
            v105 = 0;
            v173 = v92;
            v162 = (_BYTE*)(v92 + 12417);
            v179 = v92 + 73;
            v151 = v92 + 68;
            while (1) {
              v107 = v104;
              if (!v234_.v236) {
                break;
              }
              if ((GameRoutine_1276580(v92, v105) & 1) == 0) {
                goto LABEL_176;
              }
              v104 = v107;
              v108 = *(unsigned int*)(v92 + 24700);
              if ((int)v108 >= 1) {
                v109 = v162;
                v110 = nullptr;
                v111 = 0;
                while (2) {
                  if (*v109 == 0) {
                    goto LABEL_188;
                  }
                  v116 = game_UnitPool_Get(v109);
                  if (v116 != nullptr) {
                    v117 = v116[55];
                    v118 = v117 != 0 ? *(unsigned __int8*)(v117 + 16) : 9;
                    v119 = *(unsigned __int8*)(*(_QWORD*)(v193_.v193 + 440) +
                                               16LL);
                    if (v119 != v118) {
                      if (*(_BYTE*)(*(_QWORD*)(v193_.v193 + 440) + 16LL) != 0) {
                        if (v118 != 0 || v119 != 3) {
                          goto LABEL_200;
                        }
                      }
                      else if (v118 != 3) {
                      LABEL_200:
                        v111 += AIThink_11fd9e0(v193_.v193, (__int64)v116);
                        if (v110 == nullptr) {
                          if (*v109 != 0) {
                            v110 = game_UnitPool_Get(v109);
                          }
                          else {
                            v110 = nullptr;
                          }
                        }
                      }
                    }
                  }
                  v104 = v107;
                LABEL_188:
                  --v108;
                  v109 += 12;
                  if (v108 == 0) {
                    goto LABEL_215;
                  }
                  continue;
                }
              }
              v28 = v174;
            LABEL_177:
              if (++v105 == v181) {
                goto LABEL_244;
              }
            }
            v112 = (_BYTE*)(v179 + 12 * v105);
            if (*v112 != 0) {
              v113 = game_UnitPool_Get((_BYTE*)(v179 + 12 * v105));
              if (v113 != nullptr) {
                v114 = v113[55];
                v115 = v114 != 0 ? *(unsigned __int8*)(v114 + 16) : 9;
                v120 = *(unsigned __int8*)(*(_QWORD*)(v193_.v193 + 440) + 16LL);
                if (v120 != v115) {
                  if (*(_BYTE*)(*(_QWORD*)(v193_.v193 + 440) + 16LL) != 0) {
                    if (v115 != 0 || v120 != 3) {
                    LABEL_211:
                      v111 = AIThink_11fd9e0(v193_.v193, (__int64)v113);
                      if (*v112 != 0) {
                        v110 = game_UnitPool_Get(v112);
                      }
                      else {
                        v110 = nullptr;
                      }
                      v104 = v107;
                    LABEL_215:
                      if (v111 == 0) {
                        v2 = v166;
                        v28 = v174;
                      LABEL_242:
                        v92 = v173;
                        goto LABEL_177;
                      }
                      v2 = v166;
                      v28 = v174;
                      if (v193_.v201 != 0) {
                        LODWORD(v204_.v204) = v111;
                        v204_.v205 = (__int64 (***)(void))v110;
                        v121 = (*(__int64 (**)(__int64, char**))(
                            *(_QWORD*)v193_.v201 + 24LL))(v193_.v201,
                                                          &v204_.v204);
                        v104 = v107;
                        if ((v121 & 1) == 0) {
                          goto LABEL_242;
                        }
                      }
                      v122 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                        8LL * (*v193_.v195 & 0xFFF));
                      if (v122 != 0) {
                        v123 = *(unsigned __int8*)(v122 + 105);
                        v124 = v161;
                        if (v123 <= 5) {
                          if (((1 << v123) & 0x2B) != 0) {
                            goto LABEL_221;
                          }
                          v139 = v151 + 12 * v105;
                          v104 = *(char*)(v139 + 1);
                          v124 = *(char*)(v139 + 2);
                        }
                      }
                      else {
                      LABEL_221:
                        v104 = *((char*)v110 + 584);
                        v124 = *((char*)v110 + 585);
                      }
                      LANES64(v125).n64_f32[0] =
                          (float)(int)(v104 - v193_.v194);
                      v126 = (float)(int)(v124 - HIDWORD(v193_.v194));
                      if (__PAIR64__(v124, v104) != v193_.v194) {
                        v127 = sqrtf((float)(PSEUDO_UNFUSED(v126 * v126)) +
                                     (float)(LANES64(v125).n64_f32[0] *
                                             LANES64(v125).n64_f32[0]));
                        LANES64(v125).n64_f32[0] =
                            LANES64(v125).n64_f32[0] / v127;
                        v126 = v126 / v127;
                      }
                      LANES64(v125).n64_f32[1] = v126;
                      v161 = v124;
                      if ((float)(LANES64_OF(vmul_f32(v177, v125)).n64_f32[1] +
                                  (float)(LANES64(v177).n64_f32[0] *
                                          LANES64(v125).n64_f32[0])) <
                          0x1.0000000000000p-1f) {
                        goto LABEL_242;
                      }
                      v107 = v104;
                      v128 = GameRoutine_12ac8b0_alt1(v104, v124,
                                                      (__int64)&v204_.v204,
                                                      (__int64)v234_.v234);
                      LODWORD(v129) = (_DWORD)v204_.v204 + 32 * v234_.v234[0];
                      if ((unsigned int)v129 >= 0x400) {
                        v129 = 0;
                      }
                      else {
                        v129 = (unsigned int)v129;
                      }
                      v130 = *(unsigned __int8*)(*(_QWORD*)GameData_21306a0[0] +
                                                 v129 + 15632);
                      if (v128 >= 255) {
                        v131 = 255;
                      }
                      else {
                        v131 = v128;
                      }
                      if (v111 >= 7) {
                        v132 = 7;
                      }
                      else {
                        v132 = v111;
                      }
                      v133 = v132 - ((v130 << 11) + 8 * v131) + 524280;
                      v134 = v151 + 12 * v105;
                      v135 = v152 | (v133 << 8);
                      v136 = *(char*)(v134 + 1);
                      v137 = *(char*)(v134 + 2);
                      if (v182_.v182 < 0 || (unsigned int)v182_.v182 < v135 ||
                          ((unsigned int)v182_.v182 <= v135
                               ? (v138 = (HIDWORD(v182_.v182) |
                                          (v182_.v183 << 16)) <=
                                         (v136 | (v137 << 16)))
                               : (v138 = true),
                           !v138)) {
                        LODWORD(v182_.v182) = v152 | (v133 << 8);
                        HIDWORD(v182_.v182) = v136;
                        v182_.v185 = v110;
                        v182_.v183 = v137;
                        GameRoutine_1226120(v173 + 12408, (__int64)v186_.v186);
                        v182_.v184 = v133;
                      }
                      v92 = v173;
                    }
                  }
                  else if (v115 != 3) {
                    goto LABEL_211;
                  }
                }
              }
            }
          LABEL_176:
            v104 = v107;
            goto LABEL_177;
          }
        LABEL_244:
          v5 = (__int64*)fw_memory_g_heap_manager_ptr;
          v106 = v182_.v182 >= 0;
        }
        else {
        LABEL_173:
          v106 = false;
        }
        *(_BYTE*)(v175 + 8200) = 0;
        v207_.v207 = (__int64 (**)(void))(GameData_21306b8[0] + 16);
        v218[0] = v155;
        v226_.v226[1119] = v154;
        if (v226_.v227 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v226_.v227 + 8LL))(v226_.v227);
          v226_.v227 = 0;
        }
        v218[1] = v153;
        BattleSide_Destructor_alt2(v225);
        BattleSide_Destructor_alt2(v223);
        BattleSide_Destructor_alt2(v221);
        BattleSide_Destructor_alt2(v219);
        game_Unit_Destroy_Unit((__int64)v216);
        game_Unit_Destroy_Unit((__int64)&v209_.v209);
        if (!v106) {
        LABEL_71:
          v49 = GameData_21306a0[0];
          v50 = GameData_21306c0[0];
          goto LABEL_72;
        }
      LABEL_248:
        LOWORD(v207_.v207) = 0;
        BYTE2(v207_.v207) = 0;
        v140 = a1[4];
        if (v140 != 0) {
          LODWORD(v141) = v52 + v234_.v235;
          if ((unsigned int)(v52 + v234_.v235) >= 0x400) {
            v141 = 0;
          }
          else {
            v141 = (unsigned int)v141;
          }
          v142 = *(_BYTE*)(v140 + v141 + 8);
        }
        else {
          v142 = 0;
        }
        game_11f5940(*a1, v52, v38, v142, (bool*)&v207_.v207);
        v143 = v182_.v182;
        v144 = HIDWORD(v182_.v182);
        v145 = v182_.v183;
        v49 = GameData_21306a0[0];
        v50 = GameData_21306c0[0];
        if (*v2 < 0) {
          goto LABEL_267;
        }
        if (v160 != 0 && v2[5] == v182_.v184 &&
            ((HIDWORD(v168) | (unsigned int)v168 | BYTE1(v207_.v207)) & 1) ==
                0 &&
            (BYTE2(v207_.v207) & 1) == 0) {
          if ((v167 & 1) == 0 && ((unsigned __int8)v207_.v207 & 1) != 0) {
            v168 = 0;
            v167 = 0;
            goto LABEL_72;
          }
          if (((v167 ^ 1 | (unsigned __int8)v207_.v207) & 1) == 0) {
            goto LABEL_267;
          }
        }
        v146 = v2[2];
        if (v146 < (unsigned int)v182_.v182 || (v147 = v2[3]) < 0 ||
            v146 <= (unsigned int)v182_.v182 &&
                (v147 | (v2[4] << 16)) >
                    (HIDWORD(v182_.v182) | (v182_.v183 << 16))) {
        LABEL_267:
          *v2 = v52;
          v2[1] = v38;
          if (v165 != (int*)&v182_.v182) {
            v148 = v182_.v185;
            v2[2] = v143;
            v2[3] = v144;
            v2[4] = v145;
            *((_QWORD*)v2 + 3) = v148;
            GameRoutine_1226120((__int64)v186_.v186, (__int64)(v2 + 8));
            v2[5] = v182_.v184;
          }
          v167 = (unsigned __int8)v207_.v207;
          LODWORD(v168) = BYTE2(v207_.v207);
          HIDWORD(v168) = BYTE1(v207_.v207);
        }
      LABEL_72:
        v51 = v52++ == v39;
      } while (!v51);
      v51 = v38++ == v163;
    } while (!v51);
  }
  v41 = *v2;
  v42 = v186_.v190;
  *(_BYTE*)(v150 + 24600) = 0;
  if (v42 != nullptr) {
    do {
      v43 = (_QWORD*)*v42;
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v44 = 128;
      }
      else {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v44, (__int64)v42);
      v42 = v43;
    } while (v43 != nullptr);
  }
  v45 = v186_.v188;
  v186_.v188 = 0;
  if (v45 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v5 + v46, v45);
  }
  v47 = v193_.v201;
  v193_.v201 = 0;
  if (v47 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 8LL))(v47);
  }
  AISupportSkillScope_11fef70_alt2(v202_.v202);
  return v41 >= 0;
}

__int64 game_1290d40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int* v12;
  unsigned int v13;
  unsigned int v14;
  bool v15;
  unsigned int v16;
  __int64 v17;
  int v18;
  int* v19;
  __int64* v20;
  __int64* v21;
  _DWORD* v22;
  int v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _DWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int8 v47;
  int v48;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  struct {
    int v67[3082];
    __int64 v68;
    char gap12352_[8];
    _QWORD* v69;
  } v67_;
  struct {
    __int64 v70;
    _DWORD* v71;
    __int64 v72;
    char v73;
    char gap12417_[3];
    int v74;
    __int64 v75;
  } v70_;
  struct {
    int v76;
    char gap12444_[4];
    __int64 v77;
  } v76_;
  struct {
    _BYTE v78[12328];
    __int64 v79;
    char gap24792_[8];
    _QWORD* v80;
  } v78_;
  int v81[3];

  if (!game_11f44e0(*(_QWORD*)(a1 + 8), 0) ||
      (unsigned __int8)GameRoutine_128f580(*(_QWORD*)(a1 + 8)) != 5) {
    return 0;
  }
  result = 0;
  if ((*(__int16*)(a3 + 2) & 0x80000000) == 0 && *(_BYTE*)a3 == 0) {
    v66 = *(__int16*)(a3 + 2);
    v6 = *(_QWORD*)(a1 + 8);
    v81[0] = 2;
    AIDeploy_1274f90_alt1(*(_QWORD**)GameData_21306a0[0], v6, 0xFFFFFFFF, v81);
    v76_.v76 = 0;
    v76_.v77 = 0;
    GameRoutine_12a1580((__int64)v78_.v78);
    v70_.v73 = 0;
    v70_.v72 = 0;
    v70_.v71 = nullptr;
    v70_.v74 = -1;
    v70_.v75 = 0;
    GameRoutine_12a1580((__int64)v67_.v67);
    v7 = *(_QWORD*)(a1 + 8);
    LODWORD(v70_.v72) = 2;
    v70_.v70 = v7;
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        16, 16, 0);
    v10 = *(_DWORD*)(v7 + 1976);
    v11 = v9;
    *(_DWORD*)v9 = 10;
    v12 = (int*)(v9 + 4);
    if ((v10 & 0x1000000) != 0) {
      v12 = (int*)(v9 + 12);
      *(_QWORD*)(v9 + 4) = 0xC0000000BLL;
      v13 = *(_BYTE*)(v7 + 1980) & 7;
      if (v13 >= 6) {
        LOBYTE(v13) = v13 - 6;
      }
      v14 = (v13 & 2) != 0;
      v15 = (v13 & 4) == 0;
      v16 = v13 & 1;
      if (!v15) {
        v14 = 2;
      }
      *(_DWORD*)v9 = *(_DWORD*)(v9 + 4LL * v14);
      *(_DWORD*)(v9 + 4LL * v14) = 10;
      v17 = v9 + 4LL * v16;
      v18 = *(_DWORD*)(v9 + 4);
      *(_DWORD*)(v9 + 4) = *(_DWORD*)(v17 + 4);
      *(_DWORD*)(v17 + 4) = v18;
    }
    v19 = (int*)v9;
    v20 = GameData_2130920[0];
    v21 = GameData_212c880[0];
    v22 = GameData_212c8a8;
  LABEL_18:
    v24 = *(_QWORD**)(a1 + 8);
    v25 = *(_QWORD*)(*v21 + 64);
    v26 = *(_QWORD*)(v25 + 8LL * *((int*)v20 + *v19));
    if (v26 == 0) {
      goto LABEL_44;
    }
    v27 = *(_QWORD*)(v25 + 8LL * *((int*)v20 + *v19));
    while (1) {
      v29 = *(unsigned int*)(*(_QWORD*)(v27 + 24) + 4LL);
      v30 = v29 & 0xFFF;
      if ((v29 & 0xFFF) == 0) {
        v31 = v24[182];
        v32 = (v24[183] - v31) >> 2;
        goto LABEL_35;
      }
      v31 = v24[182];
      v32 = (v24[183] - v31) >> 2;
      if (v32 < ((v29 >> 5) & 0x7F) + 1 ||
          ((*(_DWORD*)(v31 + 4 * ((v29 >> 5) & 0x7F)) >> v29) & 1) == 0 ||
          (v33 = v24[187], v34 = v24[186], v33 == v34)) {
      LABEL_20:
        v28 = 0xFFFFFFFFLL;
      }
      else {
        v35 = (v33 - v34) >> 2;
        v36 = 0;
        while (((*(_DWORD*)(v34 + 4 * v36) ^ (unsigned int)v29) & 0xFFF) != 0) {
          if (v35 == ++v36) {
            goto LABEL_20;
          }
        }
        v28 = (unsigned int)v36;
        if ((v36 & 0x80000000) == 0) {
        LABEL_31:
          if ((v28 & 0x80000000) == 0) {
            v37 = v24[186];
          LABEL_33:
            v38 = (_DWORD*)(v37 + 4 * v28);
            goto LABEL_45;
          }
        LABEL_35:
          v39 = *(unsigned __int16*)(v26 + 16);
          v40 = (v39 >> 5) & 0x7F;
          if (v32 >= v40 + 1) {
            v41 = v39 & 0xFFF;
            if (((*(_DWORD*)(v31 + 4LL * (unsigned int)v40) >> v41) & 1) != 0) {
              v42 = v24[187];
              v37 = v24[186];
              if (v42 != v37) {
                v43 = (v42 - v37) >> 2;
                v44 = 0;
                while ((*(_DWORD*)(v37 + 4 * v44) & 0xFFF) != v41) {
                  if (v43 == ++v44) {
                    goto LABEL_44;
                  }
                }
                if ((v44 & 0x8000000000000000LL) == 0) {
                  v28 = (unsigned int)v44;
                  goto LABEL_33;
                }
              }
            }
          }
        LABEL_44:
          v38 = v22;
        LABEL_45:
          if ((*(_WORD*)v38 & 0xFFF) == 0 ||
              (GameRoutine_128e990_alt1((__int64)v24, v38) & 1) == 0) {
            goto LABEL_17;
          }
          v45 = *v21;
          v70_.v71 = v38;
          v46 = *(_QWORD*)(*(_QWORD*)(v45 + 64) + 8LL * (*v38 & 0xFFF));
          v47 = GameRoutine_128f580(*(_QWORD*)(a1 + 8));
          v23 = 0;
          if (v47 == 0 || *(_BYTE*)(v46 + 104) != 3) {
          LABEL_16:
            HIDWORD(v70_.v72) = v23;
          LABEL_17:
            if (++v19 == v12) {
              goto LABEL_74;
            }
            goto LABEL_18;
          }
          v48 = *(unsigned __int8*)(v46 + 106);
          if (v48 != 3) {
            if (v48 == 2) {
              if (v47 == 4) {
                v23 = 5;
                goto LABEL_16;
              }
            }
            else if (v48 == 1 && v47 <= 9u) {
              if (((1 << v47) & 0x38A) != 0) {
                v23 = 1;
                goto LABEL_16;
              }
              if (((1 << v47) & 0x50) != 0) {
                v23 = 6;
                goto LABEL_16;
              }
              if (v47 == 2) {
                if (*(__int16*)(v46 + 330) <= 0) {
                  v23 = 3;
                }
                else {
                  v23 = 4;
                }
                goto LABEL_16;
              }
            }
          LABEL_15:
            v23 = 0;
            goto LABEL_16;
          }
          if (v47 != 5) {
            if (v47 == 4) {
              if (*(_BYTE*)(v46 + 250) == 28) {
                v23 = 7;
                goto LABEL_16;
              }
            }
            else if (v47 == 2 && *(_BYTE*)(v46 + 250) == 13) {
              v23 = 2;
              goto LABEL_16;
            }
            goto LABEL_15;
          }
          if (*(_BYTE*)(v46 + 250) != 0) {
            goto LABEL_15;
          }
          HIDWORD(v70_.v72) = 8;
          if ((game_AIThink_GetSpecialEnhancementScore_alt1(&v70_.v70,
                                                            v67_.v67) &
               1) == 0) {
            goto LABEL_17;
          }
          v50 = *v21;
          v76_.v76 = v67_.v67[2];
          v76_.v77 = *(_QWORD*)(*(_QWORD*)(v50 + 64) + 8LL * (*v38 & 0xFFF));
          GameRoutine_12a16f0((__int64)v78_.v78, (__int64)v67_.v67);
        LABEL_74:
          if (v76_.v77 != 0) {
            GameRoutine_1290c20_alt1(a1, (__int64)&v76_.v76, v66);
            if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 1979LL) & 1) == 0 &&
                *(_BYTE*)(*GameData_212cfd0[0] + 20) == 6) {
              v51 = *(_QWORD*)(*v21 + 64);
              v52 =
                  (*(_DWORD*)(*GameData_212cfd0[0] + 56) & 0xFFF) != 0
                      ? *(_QWORD*)(v51 +
                                   8LL *
                                       (*(_DWORD*)(*GameData_212cfd0[0] + 56) &
                                        0xFFF))
                      : 0LL;
              v54 = *(_QWORD*)(v51 +
                               8LL * *(int*)((char*)(*(__int64 (*)[2])0x28LL) +
                                             (_QWORD)v20));
              if (v52 == v54 || v52 == *(_QWORD*)(v54 + 552)) {
                *(_DWORD*)(a1 + 23168) |= 0x1000000u;
              }
            }
            v53 = 1;
          }
          else {
            v53 = 0;
          }
          v55 = 128;
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
            v55 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v8 + v55, v11);
          v56 = v67_.v69;
          if (v67_.v69 != nullptr) {
            do {
              v57 = (_QWORD*)*v56;
              if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
                v58 = 128;
              }
              else {
                v58 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v8 + v58,
                                                 (__int64)v56);
              v56 = v57;
            } while (v57 != nullptr);
          }
          v59 = v67_.v68;
          v67_.v68 = 0;
          if (v59 != 0) {
            v60 = 128;
            if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
              v60 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v8 + v60, v59);
          }
          v61 = v78_.v80;
          if (v78_.v80 != nullptr) {
            do {
              v62 = (_QWORD*)*v61;
              if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
                v63 = 128;
              }
              else {
                v63 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v8 + v63,
                                                 (__int64)v61);
              v61 = v62;
            } while (v62 != nullptr);
          }
          v64 = v78_.v79;
          v78_.v79 = 0;
          if (v64 != 0) {
            v65 = 128;
            if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
              v65 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v8 + v65, v64);
          }
          return v53;
        }
      }
      v27 = *(_QWORD*)(v25 + 8 * v30);
      if (v27 == 0) {
        goto LABEL_31;
      }
    }
  }
  return result;
}

__int64 game_1294f20(__int64 a1, signed int* a2)
{

#pragma clang fp contract(off)
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _DWORD* v27;
  int v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  void (*v41)(void);
  __int64* v42;
  _QWORD* v43;
  __int64 (**v44)();
  __int64 v45;
  __int64 v46;
  signed int v47;
  unsigned int v48;
  int v50;
  _QWORD* v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  __int64 v59;
  _QWORD* v60;
  unsigned int v61;
  __int64 v62;
  signed int v63;
  bool v64;
  bool v65;
  unsigned int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  int v75;
  __int64* v76;
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
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  int v93;
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
  int v104;
  __int64 v105;
  unsigned __int64 primeEm;
  unsigned __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64* v111;
  __int64* v112;
  __int64 v113;
  int v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  unsigned __int8 v122;
  __int64 v123;
  __int64 v124;
  int v125;
  bool v126;
  __int64 i;
  bool v128;
  _QWORD* v129;
  __int64 v130;
  _QWORD* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  unsigned __int8 v137;
  int v138;
  int v139;
  int v140;
  unsigned int v141;
  int v142;
  __int64 v143;
  __int64 v144;
  unsigned int v145;
  signed int v146;
  unsigned __int64* v147;
  __int64* v148;
  __int64* v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64* v153;
  int v154;
  __int64 v155;
  __int64 v156;
  char* v157;
  _QWORD v158[2];
  struct {
    _QWORD v159[4];
    _QWORD* v160;
  } v159_;
  struct {
    unsigned __int64 v161;
    int v162;
    int v163;
    __int64 v164;
  } v161_;
  struct {
    _DWORD v165[3074];
    __int64 v166;
    unsigned __int64 v167;
    _QWORD* v168;
    __int64 v169;
    char gap12552_[8];
    int v170;
  } v165_;
  struct {
    __int64 v171;
    unsigned __int64 v172;
    _DWORD* v173;
    int v174;
    int v175;
    char v176;
    char gap12601_[7];
    __int64 v177;
    __int64 v178;
    _QWORD* v179;
  } v171_;
  struct {
    __int64 v180[14];
    char v181;
  } v180_;
  struct {
    _QWORD v182[4];
    _QWORD* v183;
  } v182_;
  struct {
    __int64 (**v184)();
    __int64* v185;
    _QWORD* v186;
    unsigned __int64* v187;
    __int64* v188;
    __int64 v189;
    __int64* v190;
    __int64 v191;
    __int64 v192;
  } v184_;
  struct {
    __int64 v193;
    unsigned __int64 v194;
    _QWORD* v195;
    unsigned __int64 v196;
    float v197;
    char gap12908_[4];
    __int64 v198;
  } v193_;
  _BYTE v199[2224];
  _BYTE v200[2232];
  _QWORD v201[2];
  __int64 v202[95];
  __int64 v203[95];
  __int64 v204[95];
  struct {
    _QWORD v205[1126];
    __int64 v206;
    char gap28696_[568];
    int v207;
    char gap29268_[188];
    __int64 v208;
    __int64 v209;
    int v210;
    char gap29476_[4];
    __int64 v211;
    __int64 v212;
    __int64 v213;
    __int64 v214;
    __int64 v215;
    __int64 v216;
    int v217;
    char gap29532_[28];
    _BOOL4 v218;
    int v219;
  } v205_;

  a2[2] = 0;
  *((_QWORD*)a2 + 3) = 0;
  a2[3081] = 0;
  *(_QWORD*)a2 = -1;
  *(_QWORD*)(a2 + 3) = -1;
  v147 = (unsigned __int64*)(a2 + 2);
  if (*((_QWORD*)a2 + 1544) != 0) {
    v4 = *((_QWORD**)a2 + 1543);
    if (v4 != nullptr) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)*v4;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v7, (__int64)v4);
        v4 = v6;
      } while (v6 != nullptr);
    }
    v8 = *((_QWORD*)a2 + 1542);
    *((_QWORD*)a2 + 1543) = 0;
    if (v8 != 0) {
      v9 = v8 & 7;
      if (v8 >= 8) {
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10 + 8) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10 + 16) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10 + 24) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10 + 32) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10 + 40) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10 + 48) = 0;
          v12 = *((_QWORD*)a2 + 1541) + 8 * v10;
          v10 += 8;
          *(_QWORD*)(v12 + 56) = 0;
        } while (v11 != v10);
      }
      else {
        v10 = 0;
      }
      if (v9 != 0) {
        v13 = 8 * v10;
        do {
          --v9;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    *((_QWORD*)a2 + 1544) = 0;
  }
  a2[3092] = 0;
  a2[5] = 0;
  memset_alt3(*GameData_2130940 + 8, 0, 0x2000u);
  v14 = GameData_212c880[0];
  v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (**(_DWORD**)(a1 + 8) & 0xFFF));
  if (v15 == 0 || (unsigned int)*(unsigned __int8*)(v15 + 105) - 2 > 2) {
    return 0;
  }
  GameRoutine_11fe0c0_alt3((__int64)v180_.v180, *(_QWORD*)a1);
  v171_.v177 = 0;
  v171_.v178 = 0;
  v171_.v179 = nullptr;
  v171_.v172 = -1;
  GameRoutine_844ee0((__int64)v165_.v165);
  v161_.v164 = 0;
  v165_.v165[3073] = 0;
  v161_.v161 = 0xFFFFFFFF00000000LL;
  v161_.v162 = -1;
  if (v165_.v169 != 0) {
    v16 = v165_.v168;
    if (v165_.v168 != nullptr) {
      v17 = fw_memory_g_heap_manager_ptr;
      do {
        v18 = (_QWORD*)*v16;
        if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v17 + v19, (__int64)v16);
        v16 = v18;
      } while (v18 != nullptr);
    }
    v165_.v168 = nullptr;
    if (v165_.v167 != 0) {
      v20 = v165_.v167 & 7;
      if (v165_.v167 >= 8) {
        v23 = v165_.v167 & 0xFFFFFFFFFFFFFFF8LL;
        v21 = 0;
        do {
          *(_QWORD*)(v165_.v166 + 8 * v21) = 0;
          *(_QWORD*)(v165_.v166 + 8 * v21 + 8) = 0;
          *(_QWORD*)(v165_.v166 + 8 * v21 + 16) = 0;
          *(_QWORD*)(v165_.v166 + 8 * v21 + 24) = 0;
          *(_QWORD*)(v165_.v166 + 8 * v21 + 32) = 0;
          *(_QWORD*)(v165_.v166 + 8 * v21 + 40) = 0;
          *(_QWORD*)(v165_.v166 + 8 * v21 + 48) = 0;
          v24 = v165_.v166 + 8 * v21;
          v21 += 8;
          *(_QWORD*)(v24 + 56) = 0;
        } while (v23 != v21);
      }
      else {
        v21 = 0;
      }
      if (v20 != 0) {
        v25 = 8 * v21;
        do {
          --v20;
          *(_QWORD*)(v165_.v166 + v25) = 0;
          v25 += 8;
        } while (v20 != 0);
      }
    }
    v165_.v169 = 0;
  }
  v26 = *(_QWORD*)a1;
  v27 = *(_DWORD**)(a1 + 8);
  v165_.v170 = 0;
  v161_.v163 = 0;
  v159_.v160 = nullptr;
  v171_.v171 = v26;
  LOBYTE(v26) = *(_BYTE*)(a1 + 24);
  v171_.v173 = v27;
  v171_.v176 = v26;
  v28 = *(_DWORD*)(a1 + 16);
  v171_.v175 = *(_DWORD*)(a1 + 20);
  v171_.v174 = v28;
  if ((v28 & 0x20) != 0) {
    v39 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
    *v39 = GameData_2130c18[0] + 2;
    v40 = v171_.v179;
    v171_.v179 = v39;
    if (v40 == nullptr) {
      goto LABEL_63;
    }
    v41 = *(void (**)(void))(*v40 + 8LL);
    goto LABEL_62;
  }
  v29 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16, 16, 0);
  if ((v28 & 0x40) == 0) {
    v30 = v29;
    GameRoutine_12a28c0(v29, v171_.v171, v171_.v173);
    v31 = v171_.v179;
    v171_.v179 = (_QWORD*)v30;
    if (v31 != nullptr) {
      (*(void (**)(_QWORD*))(*v31 + 8LL))(v31);
    }
    v32 = *(_QWORD*)(*v14 + 64);
    v33 = *(_QWORD*)(v32 + 8LL * (**(_DWORD**)(a1 + 8) & 0xFFF));
    v34 = *(_QWORD*)(v32 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                         (unsigned __int64)((char*)0x40LL)));
    if (v33 == v34 || v33 == *(_QWORD*)(v34 + 552)) {
      v44 = GameData_2020a88;
    }
    else {
      v35 = *(_QWORD*)(v32 +
                       8LL * *(int*)((char*)GameData_2130920[0] +
                                     (unsigned __int64)((_UNKNOWN*)0x44LL)));
      if (v33 != v35 && v33 != *(_QWORD*)(v35 + 552)) {
        v36 = *(_QWORD*)(v32 +
                         8LL * *(int*)((char*)GameData_2130920[0] +
                                       (unsigned __int64)((_UNKNOWN*)0x48LL)));
        if (v33 == v36 || v33 == *(_QWORD*)(v36 + 552)) {
          GameRoutine_129afa0(v159_.v159);
        }
        else {
          v37 =
              *(_QWORD*)(v32 +
                         8LL * *(int*)((char*)GameData_2130920[0] +
                                       (unsigned __int64)((_UNKNOWN*)0x4CLL)));
          if (v33 == v37 || v33 == *(_QWORD*)(v37 + 552)) {
            GameRoutine_129b020(v159_.v159);
          }
          else {
            v38 = *(_QWORD*)(v32 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                 (unsigned __int64)((
                                                     _UNKNOWN*)0x50LL)));
            if (v33 == v38 || v33 == *(_QWORD*)(v38 + 552)) {
              AIThink_129b0a0((__int64)v159_.v159);
            }
          }
        }
        goto LABEL_63;
      }
      v44 = GameData_2020b18;
    }
    v184_.v184 = v44;
    v184_.v188 = (__int64*)&v184_.v184;
    GameRoutine_12a0ba0(&v184_.v184, v159_.v159);
    if (v184_.v188 == (__int64*)&v184_.v184) {
      v45 = 32;
    }
    else {
      if (v184_.v188 == nullptr) {
        goto LABEL_63;
      }
      v45 = 40;
    }
    v41 = *(void (**)(void))(*v184_.v188 + v45);
  LABEL_62:
    v41();
    goto LABEL_63;
  }
  v42 = GameData_2130c20[0];
  *(_BYTE*)(v29 + 8) = (v171_.v174 & 0x4000) != 0;
  v43 = v171_.v179;
  v171_.v179 = (_QWORD*)v29;
  *(_QWORD*)v29 = v42 + 2;
  if (v43 != nullptr) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v43 + 8LL))(
        (void*)(v43), v43);
  }
LABEL_63:
  v46 = *GameData_2130940;
  if ((*(_BYTE*)(a1 + 17) & 0x20) != 0) {
    memset_alt3(v46 + 16408, 0, 0x2000u);
  }
  *(_BYTE*)(v46 + 24600) = 1;
  v156 = v46 + 16408;
  v158[0] = GameData_2130bd8 + 2;
  v158[1] = v46 + 16408;
  v144 = v46;
  v205_.v218 =
      *(_BYTE*)(*GameData_212ce90[0] +
                *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) == 1 &&
      (*(_QWORD*)GameData_212d290 == 0 ||
       (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) == 0);
  v47 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v48 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v145 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  v146 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  if (v47 <= v145 && *(unsigned __int8*)(*GameData_212ce98[0] + 28) <= v48) {
    v155 = 0;
    v154 = 0;
    v62 = GameData_21306a0[0];
    v157 = (char*)GameData_2130948 + 16;
    v153 = GameData_2130bc8[0] + 2;
    v152 = GameData_21306b8[0] + 16;
    v151 = GameData_21308b8 + 16;
    v150 = GameData_212d238[0] + 16;
    v149 = GameData_212da50[0] + 2;
    v148 = GameData_212d258[0] + 2;
    do {
      v63 = v146;
      v205_.v219 = 32 * v47;
      do {
        if ((GameRoutine_747a00_alt2(*(_QWORD*)(*(_QWORD*)v62 + 8LL), v63, v47,
                                     *(_QWORD*)a1, 0) &
             1) == 0) {
          goto LABEL_96;
        }
        v64 = (signed __int32)*(_DWORD*)(*(_QWORD*)GameData_21306c0[0] +
                                         16LL) <= v63 &&
              v63 <= (signed __int32)*(_DWORD*)(*(_QWORD*)GameData_21306c0[0] +
                                                20LL);
        v65 = v64 && (signed __int32)*(_DWORD*)(*(_QWORD*)GameData_21306c0[0] +
                                                24LL) <= v47;
        if (!v65 || v47 > (signed __int32)*(
                              _DWORD*)(*(_QWORD*)GameData_21306c0[0] + 28LL)) {
          goto LABEL_96;
        }
        if ((*(_BYTE*)(a1 + 17) & 0x20) != 0) {
          v66 = v63 + v205_.v219;
          if ((unsigned int)(v63 + v205_.v219) >= 0x400) {
            v66 = 0;
          }
          if (*(_QWORD*)(v156 + 8LL * v66) != 0) {
            goto LABEL_96;
          }
          AIThink_129a570((__int64)v158, v63, v47);
        }
        LODWORD(v184_.v187) = 0;
        v184_.v186 = nullptr;
        v184_.v185 = nullptr;
        v184_.v184 = nullptr;
        v184_.v188 = nullptr;
        v184_.v189 = 0;
        v184_.v190 = nullptr;
        v184_.v191 = 0;
        v184_.v192 = 0;
        v193_.v193 = 0;
        v67 = *GameData_212ce98[0];
        v193_.v194 = 0;
        v193_.v195 = nullptr;
        v182_.v182[1] = &v184_.v184;
        v182_.v183 = v182_.v182;
        v68 = *(_QWORD*)(v67 + 96);
        v182_.v182[0] = v157;
        Image_72c060(v68, v180_.v180[0], v63, v47, (__int64)v182_.v182);
        if (v182_.v183 == v182_.v182) {
          v69 = 32;
          goto LABEL_116;
        }
        if (v182_.v183 != nullptr) {
          v69 = 40;
        LABEL_116:
          (*(void (**)(__int64))(*v182_.v183 + v69))((__int64)v182_.v183);
        }
        v70 = v180_.v180[0];
        v71 = *(_QWORD*)(v180_.v180[0] + 1680);
        if ((int)((unsigned __int64)(*(_QWORD*)(v180_.v180[0] + 1688) - v71) >>
                  2) >= 1) {
          v72 = *(_QWORD*)(v180_.v180[0] + 1648);
          *(_QWORD*)(v180_.v180[0] + 1688) = v71;
          v73 = *(_DWORD*)(v70 + 416);
          *(_DWORD*)(v70 + 1672) = 0;
          *(_QWORD*)(v70 + 1728) = 0;
          *(_QWORD*)(v70 + 1736) = 0;
          *(_QWORD*)(v70 + 1656) = v72;
          if ((v73 & 0x10000000) == 0) {
            *(_DWORD*)(v70 + 416) = v73 | 0x10000000;
            game_6c51e0(v70);
            GameRoutine_6c6da0(v70);
            game_6c6ec0(v70);
            *(_DWORD*)(v70 + 416) &= ~0x10000000u;
            v70 = v180_.v180[0];
          }
        }
        GameHr_84cf20(v70 + 1648, (__int64)&v184_.v184, 1);
        v74 = v180_.v180[0];
        v75 = *(_DWORD*)(v180_.v180[0] + 416);
        *(_BYTE*)(v180_.v180[0] + 584) = v63;
        *(_BYTE*)(v74 + 585) = v47;
        if ((v75 & 0x10000000) == 0) {
          *(_DWORD*)(v74 + 416) = v75 | 0x10000000;
          game_6c51e0(v74);
          GameRoutine_6c6da0(v74);
          game_6c6ec0(v74);
          *(_DWORD*)(v74 + 416) &= ~0x10000000u;
        }
        v180_.v181 = 1;
        v76 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v184_.v191 != 0) {
          v77 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
          v184_.v192 = v184_.v191;
          if (*(_QWORD*)(v77 + 200) != 0) {
            v78 = 128;
          }
          else {
            v78 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v77 + v78, v184_.v191);
        }
        if (v184_.v188 != nullptr) {
          v79 = *v76;
          v184_.v189 = (__int64)v184_.v188;
          if (*(_QWORD*)(v79 + 200) != 0) {
            v80 = 128;
          }
          else {
            v80 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v79 + v80, (__int64)v184_.v188);
        }
        if (v184_.v184 != nullptr) {
          v81 = *v76;
          v184_.v185 = (__int64*)v184_.v184;
          if (*(_QWORD*)(v81 + 200) != 0) {
            v82 = 128;
          }
          else {
            v82 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v81 + v82, (__int64)v184_.v184);
        }
        v171_.v172 = __PAIR64__(v47, v63);
        if (v205_.v218) {
          v83 = *v14;
          v184_.v185 = &v171_.v171;
          v184_.v186 = v159_.v159;
          v184_.v187 = &v161_.v161;
          v84 = *(_QWORD*)(v83 + 64);
          v85 = *(_QWORD*)(v84 + 8LL * (*v171_.v173 & 0xFFF));
          v86 = *(_QWORD*)(v84 +
                           8LL * *(int*)((char*)GameData_2130920[0] +
                                         (unsigned __int64)((char*)0x40LL)));
          if (v85 == v86 || v85 == *(_QWORD*)(v86 + 552)) {
            v93 = 1;
          }
          else {
            v87 = *(_QWORD*)(v84 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                 (unsigned __int64)((
                                                     _UNKNOWN*)0x44LL)));
            if (v85 == v87 || v85 == *(_QWORD*)(v87 + 552)) {
              v93 = 2;
            }
            else {
              v88 = *(_QWORD*)(v84 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                   (unsigned __int64)((
                                                       _UNKNOWN*)0x48LL)));
              if (v85 == v88 || v85 == *(_QWORD*)(v88 + 552)) {
                v93 = 3;
              }
              else {
                v89 =
                    *(_QWORD*)(v84 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                   (unsigned __int64)((
                                                       _UNKNOWN*)0x4CLL)));
                if (v85 == v89 || v85 == *(_QWORD*)(v89 + 552)) {
                  v93 = 4;
                }
                else {
                  v90 = *(_QWORD*)(v84 +
                                   8LL * *(int*)((char*)GameData_2130920[0] +
                                                 (unsigned __int64)((
                                                     _UNKNOWN*)0x50LL)));
                  if (v85 == v90 || v85 == *(_QWORD*)(v90 + 552)) {
                    v93 = 5;
                  }
                  else {
                    v91 = *(_QWORD*)(v84 +
                                     8LL * *(int*)((char*)GameData_2130920[0] +
                                                   (unsigned __int64)((
                                                       _UNKNOWN*)0x8CLL)));
                    if (v85 == v91 || v85 == *(_QWORD*)(v91 + 552) ||
                        (v92 = *(
                             _QWORD*)(v84 +
                                      8LL * *(int*)((char*)GameData_2130920[0] +
                                                    (unsigned __int64)((
                                                        _UNKNOWN*)0xA4LL))),
                         v85 == v92)) {
                      v93 = 6;
                    }
                    else if (v85 == *(_QWORD*)(v92 + 552)) {
                      v93 = 6;
                    }
                    else {
                      v93 = 0;
                    }
                  }
                }
              }
            }
          }
          LODWORD(v184_.v188) = v93;
          v184_.v184 =
              game_AIThink_SpecialInterferenceCalculatorForEntrust_vtable;
          v105 = *GameData_2130940 + 8;
          *(_BYTE*)(*GameData_2130940 + 8200) = 1;
          v184_.v191 = v105;
          v184_.v190 = v153;
          v193_.v193 = 0;
          v193_.v194 = 0;
          v193_.v195 = nullptr;
          v193_.v196 = 0;
          v184_.v192 = *(_QWORD*)GameData_21306d0 + 2688LL;
          v193_.v197 = 0x1.0000000000000p+0f;
          v193_.v198 = v152;
          GameRoutine_6c2b50((__int64)v199);
          GameRoutine_6c2b50((__int64)v200);
          GameRoutine_790080((__int64)v201);
          v193_.v198 = v151;
          v205_.v207 = 0;
          v205_.v209 = -1;
          v205_.v210 = -1;
          v205_.v215 = -1;
          v205_.v217 = -1;
          v205_.v208 = 0;
          v205_.v216 = 0;
          v205_.v211 = 0;
          v205_.v212 = 0;
          v205_.v213 = 0;
          v205_.v214 = 0;
          primeEm = vcvtps_u64_f32(0x1.0000000000000p+4f / v193_.v197);
          if (primeEm == 1) {
            primeEm = 2;
          }
          else if ((primeEm & (primeEm - 1)) != 0) {
            primeEm = std___1___next_prime_alt1(primeEm);
          }
          v107 = v193_.v194;
          if (primeEm > v193_.v194) {
            goto LABEL_186;
          }
          if (primeEm < v193_.v194) {
            v108 = vcvtps_u64_f32((float)v193_.v196 / v193_.v197);
            if (v193_.v194 < 3 || (v193_.v194 & (v193_.v194 - 1)) != 0) {
              v108 = std___1___next_prime_alt1(v108);
            }
            else {
              v109 = 1LL << -(char)__clz(v108 - 1);
              if (v108 >= 2) {
                v108 = v109;
              }
            }
            if (primeEm <= v108) {
              primeEm = v108;
            }
            if (primeEm < v107) {
            LABEL_186:
              GameRoutine_129cde0(&v193_.v193, primeEm);
            }
          }
          if ((*(_BYTE*)(v184_.v191 + 4) & 1) == 0) {
            v110 = *(_QWORD*)(*v184_.v185 + 440);
            if (v110 != 0) {
              v111 = (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
              v112 = &v111[3 * *(unsigned __int8*)(v110 + 16)];
            }
            else {
              v113 = *(_QWORD*)(GameData_21ca310 + 56);
              v111 = (__int64*)(v113 + 556000);
              v112 = (__int64*)(v113 + 556216);
            }
            v114 = *((unsigned __int8*)v112 + 16);
            if (v114 == 3 || v114 == 0) {
              v115 = *v111;
              if (*v111 != 0) {
                do {
                  AIThink_129d780(&v184_.v184, v115);
                  v115 = *(_QWORD*)(v115 + 432);
                } while (v115 != 0);
                v110 = *(_QWORD*)(*v184_.v185 + 440);
              }
            }
            v116 = *(_QWORD*)(GameData_21ca310 + 56);
            if (v110 != 0) {
              v117 = v116 + 24LL * *(unsigned __int8*)(v110 + 16) + 556000;
            }
            else {
              v117 = v116 + 556216;
            }
            if (*(_BYTE*)(v117 + 16) == 1) {
              v118 = *(_QWORD*)(v116 + 556024);
              if (v118 != 0) {
                do {
                  AIThink_129d780(&v184_.v184, v118);
                  v118 = *(_QWORD*)(v118 + 432);
                } while (v118 != 0);
                v110 = *(_QWORD*)(*v184_.v185 + 440);
              }
            }
            v119 = *(_QWORD*)(GameData_21ca310 + 56);
            if (v110 != 0) {
              v120 = v119 + 24LL * *(unsigned __int8*)(v110 + 16) + 556000;
            }
            else {
              v120 = v119 + 556216;
            }
            if (*(_BYTE*)(v120 + 16) == 2) {
              v121 = *(_QWORD*)(v119 + 556048);
              if (v121 != 0) {
                do {
                  AIThink_129d780(&v184_.v184, v121);
                  v121 = *(_QWORD*)(v121 + 432);
                } while (v121 != 0);
                v110 = *(_QWORD*)(*v184_.v185 + 440);
              }
            }
            if (v110 != 0) {
              v122 = *(_BYTE*)(v110 + 16);
              v123 = *(_QWORD*)(GameData_21ca310 + 56);
              v124 = v123 + 24LL * v122 + 556000;
            }
            else {
              v123 = *(_QWORD*)(GameData_21ca310 + 56);
              v124 = v123 + 556216;
            }
            v125 = *(unsigned __int8*)(v124 + 16);
            v126 = v125 == 3 || v125 == 0;
            if (v126) {
              for (i = *(_QWORD*)(v123 + 556072); i != 0;
                   i = *(_QWORD*)(i + 432)) {
                AIThink_129d780(&v184_.v184, i);
              }
            }
            *(_QWORD*)v184_.v191 |= 0x100000000uLL;
          }
          v128 = GameRoutine_129aae0(&v184_.v184);
          v184_.v184 =
              game_AIThink_SpecialInterferenceCalculatorForEntrust_vtable;
          v193_.v198 = GameData_21306b8[0] + 16;
          v201[0] = v150;
          v205_.v205[1125] = v149;
          if (v205_.v206 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v205_.v206 + 8LL))(v205_.v206);
            v205_.v206 = 0;
          }
          v201[1] = v148;
          BattleSide_Destructor_alt2(v205_.v205);
          BattleSide_Destructor_alt2(v204);
          BattleSide_Destructor_alt2(v203);
          BattleSide_Destructor_alt2(v202);
          game_Unit_Destroy_Unit((__int64)v200);
          game_Unit_Destroy_Unit((__int64)v199);
          v129 = v193_.v195;
          v130 = fw_memory_g_heap_manager_ptr;
          if (v193_.v195 != nullptr) {
            do {
              v131 = (_QWORD*)*v129;
              if (*(_QWORD*)(*(_QWORD*)v130 + 200LL) != 0) {
                v132 = 128;
              }
              else {
                v132 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v130 + v132,
                                                 (__int64)v129);
              v129 = v131;
            } while (v131 != nullptr);
          }
          v133 = v193_.v193;
          v193_.v193 = 0;
          if (v133 != 0) {
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v134 = 128;
            }
            else {
              v134 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v134, v133);
          }
          *(_BYTE*)(v184_.v191 + 0x2000) = 0;
          v14 = GameData_212c880[0];
          if (!v128) {
          LABEL_95:
            v62 = GameData_21306a0[0];
            goto LABEL_96;
          }
        }
        else {
          v94 = *v14;
          v184_.v185 = &v171_.v171;
          v184_.v186 = v159_.v159;
          v184_.v187 = &v161_.v161;
          v95 = *(_QWORD*)(v94 + 64);
          v96 = *(_QWORD*)(v95 + 8LL * (*v171_.v173 & 0xFFF));
          v97 = *(_QWORD*)(v95 +
                           8LL * *(int*)((char*)GameData_2130920[0] +
                                         (unsigned __int64)((char*)0x40LL)));
          if (v96 == v97 || v96 == *(_QWORD*)(v97 + 552)) {
            v104 = 1;
          }
          else {
            v98 = *(_QWORD*)(v95 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                 (unsigned __int64)((
                                                     _UNKNOWN*)0x44LL)));
            if (v96 == v98 || v96 == *(_QWORD*)(v98 + 552)) {
              v104 = 2;
            }
            else {
              v99 = *(_QWORD*)(v95 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                   (unsigned __int64)((
                                                       _UNKNOWN*)0x48LL)));
              if (v96 == v99 || v96 == *(_QWORD*)(v99 + 552)) {
                v104 = 3;
              }
              else {
                v100 =
                    *(_QWORD*)(v95 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                   (unsigned __int64)((
                                                       _UNKNOWN*)0x4CLL)));
                if (v96 == v100 || v96 == *(_QWORD*)(v100 + 552)) {
                  v104 = 4;
                }
                else {
                  v101 = *(_QWORD*)(v95 +
                                    8LL * *(int*)((char*)GameData_2130920[0] +
                                                  (unsigned __int64)((
                                                      _UNKNOWN*)0x50LL)));
                  if (v96 == v101 || v96 == *(_QWORD*)(v101 + 552)) {
                    v104 = 5;
                  }
                  else {
                    v102 = *(_QWORD*)(v95 +
                                      8LL * *(int*)((char*)GameData_2130920[0] +
                                                    (unsigned __int64)((
                                                        _UNKNOWN*)0x8CLL)));
                    if (v96 == v102 || v96 == *(_QWORD*)(v102 + 552) ||
                        (v103 = *(
                             _QWORD*)(v95 +
                                      8LL * *(int*)((char*)GameData_2130920[0] +
                                                    (unsigned __int64)((
                                                        _UNKNOWN*)0xA4LL))),
                         v96 == v103)) {
                      v104 = 6;
                    }
                    else if (v96 == *(_QWORD*)(v103 + 552)) {
                      v104 = 6;
                    }
                    else {
                      v104 = 0;
                    }
                  }
                }
              }
            }
          }
          LODWORD(v184_.v188) = v104;
          v184_.v184 =
              game_AIThink_SpecialInterferenceCalculatorForEnemy_vtable;
          if (!GameRoutine_129aae0(&v184_.v184)) {
            goto LABEL_95;
          }
        }
        LOWORD(v184_.v184) = 0;
        BYTE2(v184_.v184) = 0;
        v135 = *(_QWORD*)(a1 + 32);
        if (v135 != 0) {
          LODWORD(v136) = v63 + v205_.v219;
          if ((unsigned int)(v63 + v205_.v219) >= 0x400) {
            v136 = 0;
          }
          else {
            v136 = (unsigned int)v136;
          }
          v137 = *(_BYTE*)(v135 + v136 + 8);
        }
        else {
          v137 = 0;
        }
        game_11f5940(*(_QWORD*)a1, v63, v47, v137, (bool*)&v184_.v184);
        v138 = v161_.v161;
        v139 = HIDWORD(v161_.v161);
        v140 = v161_.v162;
        v62 = GameData_21306a0[0];
        if (*a2 < 0) {
          goto LABEL_265;
        }
        if (v205_.v218 &&
            (((unsigned int)v155 | HIDWORD(v155) | BYTE1(v184_.v184)) & 1) ==
                0 &&
            (BYTE2(v184_.v184) & 1) == 0) {
          if ((v154 & 1) == 0 && ((unsigned __int8)v184_.v184 & 1) != 0) {
            v155 = 0;
            v154 = 0;
            goto LABEL_96;
          }
          if (((v154 ^ 1 | (unsigned __int8)v184_.v184) & 1) == 0) {
            goto LABEL_265;
          }
        }
        v141 = a2[2];
        if (v141 < (unsigned int)v161_.v161 || (v142 = a2[3]) < 0 ||
            v141 <= (unsigned int)v161_.v161 &&
                (v142 | (a2[4] << 16)) >
                    (HIDWORD(v161_.v161) | (v161_.v162 << 16))) {
        LABEL_265:
          *a2 = v63;
          a2[1] = v47;
          if (v147 != &v161_.v161) {
            v143 = v161_.v164;
            a2[2] = v138;
            a2[3] = v139;
            a2[4] = v140;
            *((_QWORD*)a2 + 3) = v143;
            GameRoutine_1226120((__int64)v165_.v165, (__int64)(a2 + 8));
            a2[5] = v161_.v163;
          }
          LODWORD(v155) = BYTE1(v184_.v184);
          HIDWORD(v155) = BYTE2(v184_.v184);
          v154 = (unsigned __int8)v184_.v184;
        }
      LABEL_96:
        v126 = v63++ == v48;
      } while (!v126);
      v126 = v47++ == v145;
    } while (!v126);
  }
  v50 = *a2;
  v51 = v159_.v160;
  *(_BYTE*)(v144 + 24600) = 0;
  if (v51 == v159_.v159) {
    v52 = 32;
    goto LABEL_79;
  }
  if (v51 != nullptr) {
    v52 = 40;
  LABEL_79:
    (*(void (**)(__int64))(*v51 + v52))((__int64)v51);
  }
  v53 = v165_.v168;
  if (v165_.v168 != nullptr) {
    v54 = fw_memory_g_heap_manager_ptr;
    do {
      v55 = (_QWORD*)*v53;
      if (*(_QWORD*)(*(_QWORD*)v54 + 200LL) != 0) {
        v56 = 128;
      }
      else {
        v56 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v54 + v56, (__int64)v53);
      v53 = v55;
    } while (v55 != nullptr);
  }
  v57 = v165_.v166;
  v58 = ~v50;
  v165_.v166 = 0;
  if (v57 != 0) {
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v57);
  }
  v60 = v171_.v179;
  v61 = v58 >> 31;
  v171_.v179 = nullptr;
  if (v60 != nullptr) {
    (*(void (**)(_QWORD*))(*v60 + 8LL))(v60);
  }
  AISupportSkillScope_11fef70_alt2(v180_.v180);
  return v61;
}

__int64 game_12968e0(__int64 a1, signed int* a2)
{

#pragma clang fp contract(off)
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _DWORD* v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  _BOOL4 v35;
  signed int v36;
  unsigned int v37;
  int v39;
  _QWORD* v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  __int64 v49;
  bool v50;
  signed int v51;
  bool v52;
  bool v53;
  unsigned int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 primeEm;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  _QWORD* v72;
  __int64 v73;
  _QWORD* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int8 v80;
  int v81;
  int v82;
  int v83;
  unsigned int v84;
  int v85;
  __int64 v86;
  __int64 v87;
  unsigned int v88;
  signed int v89;
  unsigned __int64* v90;
  _BOOL4 v91;
  __int64* v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64* v97;
  int v98;
  __int64 v99;
  __int64 v100;
  char* v101;
  _QWORD v102[2];
  struct {
    unsigned __int64 v103;
    int v104;
    int v105;
    __int64 v106;
  } v103_;
  struct {
    _DWORD v107[3074];
    __int64 v108;
    unsigned __int64 v109;
    _QWORD* v110;
    __int64 v111;
    char gap12504_[8];
    int v112;
  } v107_;
  struct {
    __int64 v113;
    unsigned __int64 v114;
    _DWORD* v115;
    int v116;
    int v117;
    char v118;
    char gap12553_[7];
    __int64 v119;
    __int64 v120;
    __int64 v121;
  } v113_;
  struct {
    __int64 v122[14];
    char v123;
  } v122_;
  struct {
    _QWORD v124[4];
    _QWORD* v125;
  } v124_;
  struct {
    __int64 (**v126)();
    __int64 (**v127)();
    __int64 v128;
    int v129;
    char gap12780_[4];
    __int64 v130;
    __int64 v131;
    __int64* v132;
    __int64 v133;
    __int64 v134;
    __int64 v135;
  } v126_;
  struct {
    __int64 v136;
    unsigned __int64 v137;
    _QWORD* v138;
    unsigned __int64 v139;
    float v140;
    char gap12868_[12];
    __int64 v141;
  } v136_;
  _BYTE v142[2224];
  _BYTE v143[2232];
  _QWORD v144[2];
  __int64 v145[95];
  __int64 v146[95];
  __int64 v147[95];
  struct {
    _QWORD v148[1126];
    __int64 v149;
    char gap28664_[568];
    int v150;
    char gap29236_[188];
    __int64 v151;
    __int64 v152;
    int v153;
    char gap29444_[4];
    __int64 v154;
    __int64 v155;
    __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    int v160;
    char gap29500_[28];
    _BOOL4 v161;
    int v162;
  } v148_;

  a2[2] = 0;
  *((_QWORD*)a2 + 3) = 0;
  a2[3081] = 0;
  *(_QWORD*)a2 = -1;
  *(_QWORD*)(a2 + 3) = -1;
  v90 = (unsigned __int64*)(a2 + 2);
  if (*((_QWORD*)a2 + 1544) != 0) {
    v4 = *((_QWORD**)a2 + 1543);
    if (v4 != nullptr) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)*v4;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v7, (__int64)v4);
        v4 = v6;
      } while (v6 != nullptr);
    }
    v8 = *((_QWORD*)a2 + 1542);
    *((_QWORD*)a2 + 1543) = 0;
    if (v8 != 0) {
      v9 = v8 & 7;
      if (v8 >= 8) {
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10 + 8) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10 + 16) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10 + 24) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10 + 32) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10 + 40) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v10 + 48) = 0;
          v12 = *((_QWORD*)a2 + 1541) + 8 * v10;
          v10 += 8;
          *(_QWORD*)(v12 + 56) = 0;
        } while (v11 != v10);
      }
      else {
        v10 = 0;
      }
      if (v9 != 0) {
        v13 = 8 * v10;
        do {
          --v9;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    *((_QWORD*)a2 + 1544) = 0;
  }
  a2[3092] = 0;
  a2[5] = 0;
  memset_alt3(*GameData_2130940 + 8, 0, 0x2000u);
  v14 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (**(_DWORD**)(a1 + 8) & 0xFFF));
  if (v14 == 0 || (unsigned int)*(unsigned __int8*)(v14 + 105) - 2 > 2) {
    return 0;
  }
  GameRoutine_11fe0c0_alt3((__int64)v122_.v122, *(_QWORD*)a1);
  v113_.v119 = 0;
  v113_.v120 = 0;
  v113_.v121 = 0;
  v113_.v114 = -1;
  GameRoutine_844ee0((__int64)v107_.v107);
  v103_.v106 = 0;
  v107_.v107[3073] = 0;
  v103_.v103 = 0xFFFFFFFF00000000LL;
  v103_.v104 = -1;
  if (v107_.v111 != 0) {
    v15 = v107_.v110;
    if (v107_.v110 != nullptr) {
      v16 = fw_memory_g_heap_manager_ptr;
      do {
        v17 = (_QWORD*)*v15;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v16 + v18, (__int64)v15);
        v15 = v17;
      } while (v17 != nullptr);
    }
    v107_.v110 = nullptr;
    if (v107_.v109 != 0) {
      v19 = v107_.v109 & 7;
      if (v107_.v109 >= 8) {
        v22 = v107_.v109 & 0xFFFFFFFFFFFFFFF8LL;
        v20 = 0;
        do {
          *(_QWORD*)(v107_.v108 + 8 * v20) = 0;
          *(_QWORD*)(v107_.v108 + 8 * v20 + 8) = 0;
          *(_QWORD*)(v107_.v108 + 8 * v20 + 16) = 0;
          *(_QWORD*)(v107_.v108 + 8 * v20 + 24) = 0;
          *(_QWORD*)(v107_.v108 + 8 * v20 + 32) = 0;
          *(_QWORD*)(v107_.v108 + 8 * v20 + 40) = 0;
          *(_QWORD*)(v107_.v108 + 8 * v20 + 48) = 0;
          v23 = v107_.v108 + 8 * v20;
          v20 += 8;
          *(_QWORD*)(v23 + 56) = 0;
        } while (v22 != v20);
      }
      else {
        v20 = 0;
      }
      if (v19 != 0) {
        v24 = 8 * v20;
        do {
          --v19;
          *(_QWORD*)(v107_.v108 + v24) = 0;
          v24 += 8;
        } while (v19 != 0);
      }
    }
    v107_.v111 = 0;
  }
  v25 = *(_QWORD*)a1;
  v26 = *(_DWORD**)(a1 + 8);
  v107_.v112 = 0;
  v103_.v105 = 0;
  v113_.v113 = v25;
  LOBYTE(v25) = *(_BYTE*)(a1 + 24);
  v113_.v115 = v26;
  v113_.v118 = v25;
  v27 = *(_DWORD*)(a1 + 16);
  v113_.v117 = *(_DWORD*)(a1 + 20);
  v28 = *(_QWORD*)(a1 + 40);
  v113_.v116 = v27;
  v113_.v120 = v28;
  v29 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16, 16, 0);
  v30 = v29;
  if ((v27 & 0x40) == 0) {
    v31 = v29;
    GameRoutine_12a2730(v29, v113_.v113, v113_.v115);
    v32 = v113_.v121;
    v113_.v121 = v31;
    if (v32 == 0) {
      goto LABEL_41;
    }
    goto LABEL_40;
  }
  v32 = v113_.v121;
  v113_.v121 = v30;
  v33 = GameData_2130c20[0] + 2;
  *(_BYTE*)(v30 + 8) = (v113_.v116 & 0x4000) != 0;
  *(_QWORD*)v30 = v33;
  if (v32 != 0) {
  LABEL_40:
    (*(void (**)(__int64))(*(_QWORD*)v32 + 8LL))(v32);
  }
LABEL_41:
  v34 = *GameData_2130940;
  if ((*(_BYTE*)(a1 + 17) & 0x20) != 0) {
    memset_alt3(v34 + 16408, 0, 0x2000u);
  }
  *(_BYTE*)(v34 + 24600) = 1;
  v100 = v34 + 16408;
  v102[0] = GameData_2130bd8 + 2;
  v102[1] = v34 + 16408;
  v87 = v34;
  v35 = *(_BYTE*)(*GameData_212ce90[0] +
                  *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) == 1 &&
        (*(_QWORD*)GameData_212d290 == 0 ||
         (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) == 0);
  v36 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v37 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v88 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  v89 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  if (v36 <= v88 && *(unsigned __int8*)(*GameData_212ce98[0] + 28) <= v37) {
    v99 = 0;
    v98 = 0;
    v49 = GameData_21306a0[0];
    v101 = (char*)GameData_2130948 + 16;
    v97 = GameData_2130bc0[0] + 2;
    v96 = GameData_21306b8[0] + 16;
    v95 = GameData_21308b8 + 16;
    v94 = GameData_212d238[0] + 16;
    v93 = GameData_212da50[0] + 2;
    v91 = v35;
    v92 = GameData_212d258[0] + 2;
    do {
      v51 = v89;
      v148_.v162 = 32 * v36;
      do {
        if ((GameRoutine_747a00_alt2(*(_QWORD*)(*(_QWORD*)v49 + 8LL), v51, v36,
                                     *(_QWORD*)a1, 0) &
             1) == 0) {
          goto LABEL_68;
        }
        v52 = (signed __int32)*(_DWORD*)(*(_QWORD*)GameData_21306c0[0] +
                                         40LL) <= v51 &&
              v51 <= (signed __int32)*(_DWORD*)(*(_QWORD*)GameData_21306c0[0] +
                                                44LL);
        v53 = v52 && (signed __int32)*(_DWORD*)(*(_QWORD*)GameData_21306c0[0] +
                                                48LL) <= v36;
        if (!v53 || v36 > (signed __int32)*(
                              _DWORD*)(*(_QWORD*)GameData_21306c0[0] + 52LL)) {
          goto LABEL_68;
        }
        if ((*(_BYTE*)(a1 + 17) & 0x20) != 0) {
          v54 = v51 + v148_.v162;
          if ((unsigned int)(v51 + v148_.v162) >= 0x400) {
            v54 = 0;
          }
          if (*(_QWORD*)(v100 + 8LL * v54) != 0) {
            goto LABEL_68;
          }
          AIThink_129a570((__int64)v102, v51, v36);
        }
        v126_.v129 = 0;
        v126_.v128 = 0;
        v126_.v127 = nullptr;
        v126_.v126 = nullptr;
        v126_.v130 = 0;
        v126_.v131 = 0;
        v126_.v132 = nullptr;
        v126_.v133 = 0;
        v126_.v134 = 0;
        v126_.v135 = 0;
        v55 = *GameData_212ce98[0];
        v136_.v136 = 0;
        v136_.v137 = 0;
        v124_.v124[1] = &v126_.v126;
        v124_.v125 = v124_.v124;
        v56 = *(_QWORD*)(v55 + 96);
        v124_.v124[0] = v101;
        Image_72c060(v56, v122_.v122[0], v51, v36, (__int64)v124_.v124);
        if (v124_.v125 == v124_.v124) {
          v57 = 32;
          goto LABEL_88;
        }
        if (v124_.v125 != nullptr) {
          v57 = 40;
        LABEL_88:
          (*(void (**)(__int64))(*v124_.v125 + v57))((__int64)v124_.v125);
        }
        v58 = v122_.v122[0];
        v59 = *(_QWORD*)(v122_.v122[0] + 1680);
        if ((int)((unsigned __int64)(*(_QWORD*)(v122_.v122[0] + 1688) - v59) >>
                  2) >= 1) {
          v60 = *(_QWORD*)(v122_.v122[0] + 1648);
          *(_QWORD*)(v122_.v122[0] + 1688) = v59;
          v61 = *(_DWORD*)(v58 + 416);
          *(_DWORD*)(v58 + 1672) = 0;
          *(_QWORD*)(v58 + 1728) = 0;
          *(_QWORD*)(v58 + 1736) = 0;
          *(_QWORD*)(v58 + 1656) = v60;
          if ((v61 & 0x10000000) == 0) {
            *(_DWORD*)(v58 + 416) = v61 | 0x10000000;
            game_6c51e0(v58);
            GameRoutine_6c6da0(v58);
            game_6c6ec0(v58);
            *(_DWORD*)(v58 + 416) &= ~0x10000000u;
            v58 = v122_.v122[0];
          }
        }
        GameHr_84cf20(v58 + 1648, (__int64)&v126_.v126, 1);
        v62 = v122_.v122[0];
        v63 = *(_DWORD*)(v122_.v122[0] + 416);
        *(_BYTE*)(v122_.v122[0] + 584) = v51;
        *(_BYTE*)(v62 + 585) = v36;
        if ((v63 & 0x10000000) == 0) {
          *(_DWORD*)(v62 + 416) = v63 | 0x10000000;
          game_6c51e0(v62);
          GameRoutine_6c6da0(v62);
          game_6c6ec0(v62);
          *(_DWORD*)(v62 + 416) &= ~0x10000000u;
        }
        v122_.v123 = 1;
        if (v126_.v133 != 0) {
          v126_.v134 = v126_.v133;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v64 = 128;
          }
          else {
            v64 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v126_.v133);
        }
        if (v126_.v130 != 0) {
          v126_.v131 = v126_.v130;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v65 = 128;
          }
          else {
            v65 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, v126_.v130);
        }
        if (v126_.v126 != nullptr) {
          v126_.v127 = v126_.v126;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v66 = 128;
          }
          else {
            v66 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v66,
              (__int64)v126_.v126);
        }
        v113_.v114 = __PAIR64__(v36, v51);
        if (v35) {
          AIThink_129b920((__int64)&v126_.v126, (__int64)&v113_.v113,
                          (__int64)&v103_.v103);
          v126_.v126 = game_AIThink_SpecialAssistCalculatorForEntrust_vtable;
          v126_.v131 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * *(int*)GameData_2130920[0]);
          v67 = *GameData_2130940;
          v126_.v132 = v97;
          *(_BYTE*)(v67 + 8200) = 1;
          v126_.v133 = v67 + 8;
          v136_.v136 = 0;
          v136_.v137 = 0;
          v136_.v138 = nullptr;
          v136_.v139 = 0;
          v126_.v134 = *(_QWORD*)GameData_21306d0 + 2688LL;
          v136_.v140 = 0x1.0000000000000p+0f;
          v136_.v141 = v96;
          GameRoutine_6c2b50((__int64)v142);
          GameRoutine_6c2b50((__int64)v143);
          GameRoutine_790080((__int64)v144);
          v136_.v141 = v95;
          v148_.v150 = 0;
          v148_.v152 = -1;
          v148_.v153 = -1;
          v148_.v158 = -1;
          v148_.v160 = -1;
          v148_.v151 = 0;
          v148_.v159 = 0;
          v148_.v154 = 0;
          v148_.v155 = 0;
          v148_.v156 = 0;
          v148_.v157 = 0;
          primeEm = vcvtps_u64_f32(0x1.0000000000000p+4f / v136_.v140);
          if (primeEm == 1) {
            primeEm = 2;
          }
          else if ((primeEm & (primeEm - 1)) != 0) {
            primeEm = std___1___next_prime_alt1(primeEm);
          }
          v69 = v136_.v137;
          if (primeEm > v136_.v137) {
            goto LABEL_117;
          }
          if (primeEm < v136_.v137) {
            v70 = vcvtps_u64_f32((float)v136_.v139 / v136_.v140);
            if (v136_.v137 < 3 || (v136_.v137 & (v136_.v137 - 1)) != 0) {
              v70 = std___1___next_prime_alt1(v70);
            }
            else {
              v71 = 1LL << -(char)__clz(v70 - 1);
              if (v70 >= 2) {
                v70 = v71;
              }
            }
            if (primeEm <= v70) {
              primeEm = v70;
            }
            if (primeEm < v69) {
            LABEL_117:
              GameRoutine_129cde0(&v136_.v136, primeEm);
            }
          }
          v148_.v161 = GameRoutine_129a6e0((__int64)&v126_.v126);
          v126_.v126 = game_AIThink_SpecialAssistCalculatorForEntrust_vtable;
          v136_.v141 = GameData_21306b8[0] + 16;
          v144[0] = v94;
          v148_.v148[1125] = v93;
          if (v148_.v149 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v148_.v149 + 8LL))(v148_.v149);
            v148_.v149 = 0;
          }
          v144[1] = v92;
          BattleSide_Destructor_alt2(v148_.v148);
          BattleSide_Destructor_alt2(v147);
          BattleSide_Destructor_alt2(v146);
          BattleSide_Destructor_alt2(v145);
          game_Unit_Destroy_Unit((__int64)v143);
          game_Unit_Destroy_Unit((__int64)v142);
          v72 = v136_.v138;
          v73 = fw_memory_g_heap_manager_ptr;
          if (v136_.v138 != nullptr) {
            do {
              v74 = (_QWORD*)*v72;
              if (*(_QWORD*)(*(_QWORD*)v73 + 200LL) != 0) {
                v75 = 128;
              }
              else {
                v75 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v73 + v75,
                                                 (__int64)v72);
              v72 = v74;
            } while (v74 != nullptr);
          }
          v76 = v136_.v136;
          v136_.v136 = 0;
          if (v76 != 0) {
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v77 = 128;
            }
            else {
              v77 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v76);
          }
          v35 = v91;
          *(_BYTE*)(v126_.v133 + 0x2000) = 0;
          if (!v148_.v161) {
          LABEL_67:
            v49 = GameData_21306a0[0];
            goto LABEL_68;
          }
        }
        else {
          AIThink_129b920((__int64)&v126_.v126, (__int64)&v113_.v113,
                          (__int64)&v103_.v103);
          v126_.v126 = game_AIThink_SpecialAssistCalculatorForEnemy_vtable;
          if (!GameRoutine_129a6e0((__int64)&v126_.v126)) {
            goto LABEL_67;
          }
        }
        v78 = *(_QWORD*)(a1 + 32);
        LOWORD(v126_.v126) = 0;
        BYTE2(v126_.v126) = 0;
        if (v78 != 0) {
          LODWORD(v79) = v51 + v148_.v162;
          if ((unsigned int)(v51 + v148_.v162) >= 0x400) {
            v79 = 0;
          }
          else {
            v79 = (unsigned int)v79;
          }
          v80 = *(_BYTE*)(v78 + v79 + 8);
        }
        else {
          v80 = 0;
        }
        game_11f5940(*(_QWORD*)a1, v51, v36, v80, (bool*)&v126_.v126);
        v81 = v103_.v103;
        v82 = HIDWORD(v103_.v103);
        v83 = v103_.v104;
        v49 = GameData_21306a0[0];
        if (*a2 < 0) {
          goto LABEL_159;
        }
        if (v35 &&
            (((unsigned int)v99 | HIDWORD(v99) | BYTE1(v126_.v126)) & 1) == 0 &&
            (BYTE2(v126_.v126) & 1) == 0) {
          if ((v98 & 1) == 0 && ((unsigned __int8)v126_.v126 & 1) != 0) {
            v99 = 0;
            v98 = 0;
            goto LABEL_68;
          }
          if (((v98 ^ 1 | (unsigned __int8)v126_.v126) & 1) == 0) {
            goto LABEL_159;
          }
        }
        v84 = a2[2];
        if (v84 < (unsigned int)v103_.v103 || (v85 = a2[3]) < 0 ||
            v84 <= (unsigned int)v103_.v103 &&
                (v85 | (a2[4] << 16)) >
                    (HIDWORD(v103_.v103) | (v103_.v104 << 16))) {
        LABEL_159:
          *a2 = v51;
          a2[1] = v36;
          if (v90 != &v103_.v103) {
            v86 = v103_.v106;
            a2[2] = v81;
            a2[3] = v82;
            a2[4] = v83;
            *((_QWORD*)a2 + 3) = v86;
            GameRoutine_1226120((__int64)v107_.v107, (__int64)(a2 + 8));
            a2[5] = v103_.v105;
          }
          LODWORD(v99) = BYTE1(v126_.v126);
          HIDWORD(v99) = BYTE2(v126_.v126);
          v98 = (unsigned __int8)v126_.v126;
        }
      LABEL_68:
        v50 = v51++ == v37;
      } while (!v50);
      v50 = v36++ == v88;
    } while (!v50);
  }
  v39 = *a2;
  v40 = v107_.v110;
  *(_BYTE*)(v87 + 24600) = 0;
  v41 = fw_memory_g_heap_manager_ptr;
  if (v40 != nullptr) {
    do {
      v42 = (_QWORD*)*v40;
      if (*(_QWORD*)(*(_QWORD*)v41 + 200LL) != 0) {
        v43 = 128;
      }
      else {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v41 + v43, (__int64)v40);
      v40 = v42;
    } while (v42 != nullptr);
  }
  v44 = v107_.v108;
  v45 = ~v39;
  v107_.v108 = 0;
  if (v44 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)v41 + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v41 + v46, v44);
  }
  v47 = v113_.v121;
  v48 = v45 >> 31;
  v113_.v121 = 0;
  if (v47 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 8LL))(v47);
  }
  AISupportSkillScope_11fef70_alt2(v122_.v122);
  return v48;
}

__int64 game_12975e0(__int64* a1, __int64 a2)
{

#pragma clang fp contract(off)
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  int v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  unsigned __int8 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  int v34;
  __int64 i;
  _QWORD* v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64* v43;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  _DWORD* v48;
  __int64 v49;
  int v50;
  __int64* v51;
  __int64 v52;
  __n128 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  unsigned int v60;
  unsigned int v61;
  bool v62;
  _QWORD* v63;
  unsigned int v64;
  _QWORD* v65;
  __int64 v66;
  __int64 v67;
  unsigned int v68;
  __int64 v69;
  __int64* v70;
  signed int v71;
  bool v72;
  bool v73;
  unsigned int v74;
  _QWORD* v75;
  _QWORD* v76;
  __int64 v77;
  char v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v94;
  int v95;
  int v96;
  __int64 v97;
  unsigned __int8 v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  __int64 v106;
  __int64 v107;
  unsigned int v108;
  __int64 v109;
  bool v110;
  __int64 v111;
  int v112;
  int v113;
  int v114;
  unsigned int v115;
  int v116;
  int v117;
  __int64 v118;
  _BOOL4 v119;
  int v120;
  __int64 v121;
  unsigned __int64* v122;
  unsigned int v123;
  signed int v124;
  __int64 v125;
  __int64 v126;
  int v127;
  _DWORD* v128;
  __int64 v129;
  unsigned int v130;
  int v131;
  _QWORD v132[2];
  struct {
    unsigned __int64 v133;
    int v134;
    int v135;
    __int64 v136;
  } v133_;
  struct {
    _BYTE v137[12292];
    int v138;
    __int64 v139;
    unsigned __int64 v140;
    _QWORD* v141;
    __int64 v142;
    char gap12472_[8];
    int v143;
  } v137_;
  _DWORD v144[31];
  unsigned __int8 v145[12];

  *(_DWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  *(_DWORD*)(a2 + 12324) = 0;
  *(_QWORD*)a2 = -1;
  *(_QWORD*)(a2 + 12) = -1;
  v122 = (unsigned __int64*)(a2 + 8);
  if (*(_QWORD*)(a2 + 12352) != 0) {
    v4 = *(_QWORD**)(a2 + 12344);
    if (v4 != nullptr) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)*v4;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7);
        v4 = v6;
      } while (v6 != nullptr);
    }
    v8 = *(_QWORD*)(a2 + 12336);
    *(_QWORD*)(a2 + 12344) = 0;
    if (v8 != 0) {
      v9 = v8 & 7;
      if (v8 >= 8) {
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a2 + 12328) + 8 * v10) = 0;
          *(_QWORD*)(*(_QWORD*)(a2 + 12328) + 8 * v10 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a2 + 12328) + 8 * v10 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a2 + 12328) + 8 * v10 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a2 + 12328) + 8 * v10 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a2 + 12328) + 8 * v10 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a2 + 12328) + 8 * v10 + 48) = 0;
          v12 = *(_QWORD*)(a2 + 12328) + 8 * v10;
          v10 += 8;
          *(_QWORD*)(v12 + 56) = 0;
        } while (v11 != v10);
      }
      else {
        v10 = 0;
      }
      if (v9 != 0) {
        v13 = 8 * v10;
        do {
          --v9;
          *(_QWORD*)(*(_QWORD*)(a2 + 12328) + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    *(_QWORD*)(a2 + 12352) = 0;
  }
  *(_DWORD*)(a2 + 12368) = 0;
  *(_DWORD*)(a2 + 20) = 0;
  v14 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (*(_DWORD*)a1[1] & 0xFFF));
  if (v14 != 0 && (unsigned int)*(unsigned __int8*)(v14 + 105) - 2 < 3) {
    return 0;
  }
  v15 = *a1;
  v16 = *(_QWORD*)(*a1 + 440);
  v17 = (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v16 != 0) {
    v18 = (__int64)&v17[3 * *(unsigned __int8*)(v16 + 16)];
  }
  else {
    v18 = *(_QWORD*)(GameData_21ca310 + 56) + 556216LL;
  }
  v19 = *(unsigned __int8*)(v18 + 16);
  v20 = v19 == 3 || v19 == 0;
  if (v20) {
    v21 = *v17;
    if (*v17 != 0) {
      do {
        if (*(_BYTE*)(v21 + 2089) != 0) {
          v24 = game_UnitPool_Get((_BYTE*)(v21 + 2089));
          v15 = *a1;
          if (*((unsigned __int8*)v24 + 2088) ==
              *(unsigned __int8*)(*a1 + 2088)) {
            return 0;
          }
        }
        v21 = *(_QWORD*)(v21 + 432);
      } while (v21 != 0);
      v16 = *(_QWORD*)(v15 + 440);
      if (v16 != 0) {
        goto LABEL_29;
      }
    LABEL_35:
      v22 = *(_QWORD*)(GameData_21ca310 + 56);
      v23 = v22 + 556216;
      goto LABEL_36;
    }
  }
  if (v16 == 0) {
    goto LABEL_35;
  }
LABEL_29:
  v22 = *(_QWORD*)(GameData_21ca310 + 56);
  v23 = v22 + 24LL * *(unsigned __int8*)(v16 + 16) + 556000;
LABEL_36:
  if (*(_BYTE*)(v23 + 16) == 1) {
    v25 = *(_QWORD*)(v22 + 556024);
    if (v25 != 0) {
      do {
        if (*(_BYTE*)(v25 + 2089) != 0) {
          v28 = game_UnitPool_Get((_BYTE*)(v25 + 2089));
          v15 = *a1;
          if (*((unsigned __int8*)v28 + 2088) ==
              *(unsigned __int8*)(*a1 + 2088)) {
            return 0;
          }
        }
        v25 = *(_QWORD*)(v25 + 432);
      } while (v25 != 0);
      v16 = *(_QWORD*)(v15 + 440);
      if (v16 != 0) {
        goto LABEL_39;
      }
    LABEL_45:
      v26 = *(_QWORD*)(GameData_21ca310 + 56);
      v27 = v26 + 556216;
      goto LABEL_46;
    }
  }
  if (v16 == 0) {
    goto LABEL_45;
  }
LABEL_39:
  v26 = *(_QWORD*)(GameData_21ca310 + 56);
  v27 = v26 + 24LL * *(unsigned __int8*)(v16 + 16) + 556000;
LABEL_46:
  if (*(_BYTE*)(v27 + 16) == 2 && (v29 = *(_QWORD*)(v26 + 556048)) != 0) {
    do {
      if (*(_BYTE*)(v29 + 2089) != 0) {
        v33 = game_UnitPool_Get((_BYTE*)(v29 + 2089));
        v15 = *a1;
        if (*((unsigned __int8*)v33 + 2088) ==
            *(unsigned __int8*)(*a1 + 2088)) {
          return 0;
        }
      }
      v29 = *(_QWORD*)(v29 + 432);
    } while (v29 != 0);
    v16 = *(_QWORD*)(v15 + 440);
    if (v16 != 0) {
      goto LABEL_49;
    }
  }
  else if (v16 != 0) {
  LABEL_49:
    v30 = *(_BYTE*)(v16 + 16);
    v31 = *(_QWORD*)(GameData_21ca310 + 56);
    v32 = v31 + 24LL * v30 + 556000;
    goto LABEL_56;
  }
  v31 = *(_QWORD*)(GameData_21ca310 + 56);
  v32 = v31 + 556216;
LABEL_56:
  v34 = *(unsigned __int8*)(v32 + 16);
  if (v34 == 3 || v34 == 0) {
    for (i = *(_QWORD*)(v31 + 556072); i != 0; i = *(_QWORD*)(i + 432)) {
      if (*(_BYTE*)(i + 2089) != 0) {
        v43 = game_UnitPool_Get((_BYTE*)(i + 2089));
        v15 = *a1;
        if (*((unsigned __int8*)v43 + 2088) ==
            *(unsigned __int8*)(*a1 + 2088)) {
          return 0;
        }
      }
    }
  }
  GameRoutine_11fe0c0((__int64)v144, v15);
  GameRoutine_844ee0((__int64)v137_.v137);
  v133_.v136 = 0;
  v137_.v138 = 0;
  v133_.v133 = 0xFFFFFFFF00000000LL;
  v133_.v134 = -1;
  if (v137_.v142 != 0) {
    v37 = v137_.v141;
    if (v137_.v141 != nullptr) {
      v38 = fw_memory_g_heap_manager_ptr;
      do {
        v39 = (_QWORD*)*v37;
        if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v40);
        v37 = v39;
      } while (v39 != nullptr);
    }
    v137_.v141 = nullptr;
    if (v137_.v140 != 0) {
      v41 = v137_.v140 & 7;
      if (v137_.v140 >= 8) {
        v45 = v137_.v140 & 0xFFFFFFFFFFFFFFF8LL;
        v42 = 0;
        do {
          *(_QWORD*)(v137_.v139 + 8 * v42) = 0;
          *(_QWORD*)(v137_.v139 + 8 * v42 + 8) = 0;
          *(_QWORD*)(v137_.v139 + 8 * v42 + 16) = 0;
          *(_QWORD*)(v137_.v139 + 8 * v42 + 24) = 0;
          *(_QWORD*)(v137_.v139 + 8 * v42 + 32) = 0;
          *(_QWORD*)(v137_.v139 + 8 * v42 + 40) = 0;
          *(_QWORD*)(v137_.v139 + 8 * v42 + 48) = 0;
          v46 = v137_.v139 + 8 * v42;
          v42 += 8;
          *(_QWORD*)(v46 + 56) = 0;
        } while (v45 != v42);
      }
      else {
        v42 = 0;
      }
      if (v41 != 0) {
        v47 = 8 * v42;
        do {
          --v41;
          *(_QWORD*)(v137_.v139 + v47) = 0;
          v47 += 8;
        } while (v41 != 0);
      }
    }
    v137_.v142 = 0;
  }
  v49 = *a1;
  v48 = (_DWORD*)a1[1];
  v137_.v143 = 0;
  v133_.v135 = 0;
  v50 = *((_DWORD*)a1 + 4);
  v128 = v48;
  v51 = (__int64*)fw_memory_g_heap_manager_ptr;
  v52 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  if ((v50 & 0x40) != 0) {
    v57 = fw_memory_HeapManager_Allocate(v52, 16, 16, 0);
    v58 = GameData_2130c20[0];
    v125 = v57;
    *(_BYTE*)(v57 + 8) = (v50 & 0x4000) != 0;
    *(_QWORD*)v57 = v58 + 2;
  }
  else {
    v125 = fw_memory_HeapManager_Allocate(v52, 8, 16, 0);
    *(_QWORD*)v125 = game_AIThink_SpecialEntrustSummonCondition_vtable;
  }
  v59 = GameData_22400e0;
  if ((*((_BYTE*)a1 + 17) & 0x20) != 0) {
    v56 = memset_alt1(GameData_22400e0 + 16408, 0, 0x2000);
  }
  *(_BYTE*)(v59 + 24600) = 1;
  v132[0] = game_AIWorkImage_ThinningForSpecialAccessor_vtable;
  v132[1] = v59 + 16408;
  v126 = a2;
  v118 = v59;
  v119 = *(_BYTE*)(GameData_21ca2f8 +
                   *(unsigned __int8*)(GameData_21ca2f8 + 24) + 16) == 1 &&
         (GameData_21d9188 == 0 || (*(_BYTE*)(GameData_21d9188 + 30) & 1) == 0);
  v60 = *(unsigned __int8*)(GameData_21ca300 + 29);
  v61 = *(unsigned __int8*)(GameData_21ca300 + 30);
  v123 = *(unsigned __int8*)(GameData_21ca300 + 31);
  v124 = *(unsigned __int8*)(GameData_21ca300 + 28);
  v62 = v60 > v123 || *(unsigned __int8*)(GameData_21ca300 + 28) > v61;
  if (!v62) {
    v121 = 0;
    v120 = 0;
    v70 = (__int64*)GameData_21306a0[0];
    do {
      v71 = v124;
      v131 = 32 * v60;
      do {
        if ((GameRoutine_747a00(*(_QWORD*)(*v70 + 8), (unsigned int)v71, v60,
                                *a1, 0) &
             1) != 0) {
          v72 = *(_DWORD*)(GameData_22400d8 + 16) <= v71 &&
                v71 <= *(_DWORD*)(GameData_22400d8 + 20);
          v73 = v72 && *(_DWORD*)(GameData_22400d8 + 24) <= (int)v60;
          if (v73 && (signed int)v60 <= *(_DWORD*)(GameData_22400d8 + 28)) {
            if ((*((_BYTE*)a1 + 17) & 0x20) == 0) {
              goto LABEL_126;
            }
            v74 = v71 + v131;
            if ((unsigned int)(v71 + v131) >= 0x400) {
              v74 = 0;
            }
            if (*(_QWORD*)(v59 + 16408 + 8LL * v74) == 0) {
              AIThink_129a570((__int64)v132, v71, v60);
            LABEL_126:
              game_AISupportSkillScope_Update(v144, v71, v60);
              v133_.v136 = 0;
              v137_.v138 = 0;
              v133_.v133 = 0xFFFFFFFF00000000LL;
              v133_.v134 = -1;
              if (v137_.v142 != 0) {
                v75 = v137_.v141;
                if (v137_.v141 != nullptr) {
                  do {
                    v76 = (_QWORD*)*v75;
                    if (*(_QWORD*)(*v51 + 200) != 0) {
                      v77 = 128;
                    }
                    else {
                      v77 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v51 + v77);
                    v75 = v76;
                  } while (v76 != nullptr);
                }
                v137_.v141 = nullptr;
                v78 = v137_.v140;
                v70 = (__int64*)GameData_21306a0[0];
                if (v137_.v140 != 0) {
                  if (v137_.v140 >= 8) {
                    v80 = v137_.v140 & 0xFFFFFFFFFFFFFFF8LL;
                    v79 = 0;
                    do {
                      *(_QWORD*)(v137_.v139 + 8 * v79) = 0;
                      *(_QWORD*)(v137_.v139 + 8 * v79 + 8) = 0;
                      *(_QWORD*)(v137_.v139 + 8 * v79 + 16) = 0;
                      *(_QWORD*)(v137_.v139 + 8 * v79 + 24) = 0;
                      *(_QWORD*)(v137_.v139 + 8 * v79 + 32) = 0;
                      *(_QWORD*)(v137_.v139 + 8 * v79 + 40) = 0;
                      *(_QWORD*)(v137_.v139 + 8 * v79 + 48) = 0;
                      v81 = v137_.v139 + 8 * v79;
                      v79 += 8;
                      *(_QWORD*)(v81 + 56) = 0;
                    } while (v80 != v79);
                  }
                  else {
                    v79 = 0;
                  }
                  v82 = v78 & 7;
                  if (v82 != 0) {
                    v83 = 8 * v79;
                    do {
                      --v82;
                      *(_QWORD*)(v137_.v139 + v83) = 0;
                      v83 += 8;
                    } while (v82 != 0);
                  }
                }
                v137_.v142 = 0;
              }
              v137_.v143 = 0;
              v133_.v135 = 0;
              v84 = *GameData_2130988[0];
              LODWORD(v85) = v71 + v131;
              if ((unsigned int)(v71 + v131) >= 0x400) {
                v85 = 0;
              }
              else {
                v85 = (unsigned int)v85;
              }
              v129 = v85;
              v130 = *(unsigned __int8*)(*(_QWORD*)(*v70 + 12880) + v85 + 64);
              if ((AITarget_1275a80(
                       v84, v49, v71, v60,
                       *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * (*v128 & 0xFFF)),
                       6) &
                   1) == 0 ||
                  (v86 = *(char*)(v84 + 69), v87 = *(char*)(v84 + 70),
                   *(_BYTE*)(*(_QWORD*)GameData_21306d0 + 2816LL) == 1) &&
                      ((*(_DWORD*)(*(_QWORD*)GameData_21306d0 +
                                   4LL * ((v86 + 32 * v87) >> 5) + 2688) >>
                        v86) &
                       1) == 0) {
                v51 = &fw_memory_g_heap_manager;
                goto LABEL_110;
              }
              v88 = v86 - 4;
              v89 = 0;
              v127 = v86;
              if (v86 - 4 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
                v88 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
              }
              v90 = v87 - 4;
              if (v87 - 4 <= *(unsigned __int8*)(*GameData_212ce98[0] + 29)) {
                v90 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
              }
              v91 = v86 + 4;
              if (v86 + 4 >= *(unsigned __int8*)(*GameData_212ce98[0] + 30)) {
                v91 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
              }
              v92 = v87 + 4;
              if (v87 + 4 >= *(unsigned __int8*)(*GameData_212ce98[0] + 31)) {
                v92 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
              }
              if (v90 > v92 || v88 > v91) {
              LABEL_159:
                *(_DWORD*)v145 = v89;
                if (((*(__int64 (**)(__int64, unsigned __int8*))(
                         *(_QWORD*)v125 + 48LL))(v125, v145) &
                     1) != 0) {
                  if (2 - v89 >= 0) {
                    v94 = 2 - v89;
                  }
                  else {
                    v94 = v89 - 2;
                  }
                  v95 = game_11f51f0(v49, v71, v60);
                  v96 = 409701 - v130;
                  if (v130 >= 0x65) {
                    v96 = 409600;
                  }
                  HIDWORD(v133_.v133) = v127;
                  v133_.v134 = v87;
                  LODWORD(v133_.v133) = v96 - (v94 << 12) + (v95 << 8);
                  *(_WORD*)v145 = 0;
                  v145[2] = 0;
                  v97 = a1[4];
                  if (v97 != 0) {
                    v98 = *(_BYTE*)(v97 + v129 + 8);
                  }
                  else {
                    v98 = 0;
                  }
                  game_11f5940(*a1, v71, v60, v98, (bool*)v145);
                  v114 = v133_.v133;
                  v51 = (__int64*)fw_memory_g_heap_manager_ptr;
                  if ((*(_DWORD*)v126 & 0x80000000) == 0) {
                    if (!v119 ||
                        (((unsigned int)v121 | HIDWORD(v121) | v145[1]) & 1) !=
                            0 ||
                        (v145[2] & 1) != 0) {
                      goto LABEL_209;
                    }
                    if ((v120 & 1) == 0 && (v145[0] & 1) != 0) {
                      v121 = 0;
                      v120 = 0;
                      goto LABEL_213;
                    }
                    if (((v120 ^ 1 | v145[0]) & 1) != 0) {
                    LABEL_209:
                      v115 = *(_DWORD*)(v126 + 8);
                      if (v115 >= (unsigned int)v133_.v133 &&
                          (v115 > (unsigned int)v133_.v133 ||
                           (*(_DWORD*)v126 | (*(_DWORD*)(v126 + 4) << 16)) <=
                               (int)(v71 | (v60 << 16)))) {
                        goto LABEL_213;
                      }
                    }
                  }
                  *(_DWORD*)v126 = v71;
                  *(_DWORD*)(v126 + 4) = v60;
                  if (v122 != &v133_.v133) {
                    *(_QWORD*)(v126 + 24) = v133_.v136;
                    v116 = HIDWORD(v133_.v133);
                    v117 = v133_.v134;
                    *(_DWORD*)(v126 + 8) = v114;
                    *(_DWORD*)(v126 + 12) = v116;
                    *(_DWORD*)(v126 + 16) = v117;
                    GameRoutine_1226120((__int64)v137_.v137, v126 + 32);
                    *(_DWORD*)(v126 + 20) = v133_.v135;
                  }
                  LODWORD(v121) = v145[1];
                  HIDWORD(v121) = v145[2];
                  v120 = v145[0];
                  goto LABEL_213;
                }
                v51 = &fw_memory_g_heap_manager;
              LABEL_213:
                v70 = &GameData_2240090;
                goto LABEL_110;
              }
              v99 = 32 * v90;
              v100 = -v86;
              while (2) {
                v101 = v90 - v87;
                v102 = v88;
                if (v90 - v87 < 0) {
                  v101 = v87 - v90;
                }
                v103 = v101 - 5;
              LABEL_177:
                v105 = v100 + v102;
                if (v100 + v102 < 0) {
                  v105 = -v105;
                }
                if ((unsigned int)(v103 + v105) < 0xFFFFFFFC) {
                  goto LABEL_175;
                }
                LODWORD(v106) = v99 + v102;
                v106 = (unsigned int)(v99 + v102) >= 0x400 ? 0LL
                                                           : (unsigned int)v106;
                v107 = *(_QWORD*)(*GameData_212ce98[0] + 96) + v106;
                v108 = *(unsigned __int8*)(v107 + 8);
                if (*(_BYTE*)(v107 + 8) == 0) {
                  goto LABEL_175;
                }
                v109 = *(_QWORD*)(GameData_21ca310 + 56) +
                       2224LL * *(unsigned __int8*)(v107 + 8);
                v110 = v108 > 0xFA || v109 == 2224;
                if (v110 || *(_QWORD*)(v109 - 1832) == 0) {
                  goto LABEL_175;
                }
                v111 = *(_QWORD*)(v109 - 1784);
                if (v111 != 0) {
                  v112 = *(unsigned __int8*)(v111 + 16);
                }
                else {
                  v112 = 9;
                }
                v113 = *(unsigned __int8*)(*(_QWORD*)(v49 + 440) + 16LL);
                if (v113 != v112) {
                  if (*(_BYTE*)(*(_QWORD*)(v49 + 440) + 16LL) != 0) {
                    if (v112 != 0 || v113 != 3) {
                    LABEL_198:
                      v104 = 1;
                    LABEL_174:
                      v89 += v104;
                    LABEL_175:
                      v62 = v102++ < v91;
                      if (!v62) {
                        v99 += 32;
                        v62 = v90++ < v92;
                        if (!v62) {
                          goto LABEL_159;
                        }
                        continue;
                      }
                      goto LABEL_177;
                    }
                  }
                  else if (v112 != 3) {
                    goto LABEL_198;
                  }
                }
                break;
              }
              v104 = 0;
              goto LABEL_174;
            }
          }
        }
      LABEL_110:
        v20 = v71++ == v61;
      } while (!v20);
      v20 = v60++ == v123;
    } while (!v20);
  }
  v63 = v137_.v141;
  v64 = ~*(_DWORD*)v126;
  *(_BYTE*)(v118 + 24600) = 0;
  if (v63 != nullptr) {
    do {
      v65 = (_QWORD*)*v63;
      if (*(_QWORD*)(*v51 + 200) != 0) {
        v66 = 128;
      }
      else {
        v66 = 56;
      }
      v56 = nn_mem_StandardAllocator_Free(*v51 + v66);
      v63 = v65;
    } while (v65 != nullptr);
  }
  v67 = v137_.v139;
  v68 = v64 >> 31;
  v137_.v139 = 0;
  if (v67 != 0) {
    v69 = 128;
    if (*(_QWORD*)(*v51 + 200) == 0) {
      v69 = 56;
    }
    v56 = nn_mem_StandardAllocator_Free(*v51 + v69);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v125 + 8LL))(
      v125, *(long double*)&v56);
  AISupportSkillScope_11fef70(v144);
  return v68;
}

__int64 game_12982e0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v21;
  __int64 v26;
  __int16 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  _QWORD* v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  struct {
    signed int v42[3082];
    __int64 v43;
    char gap12344_[8];
    _QWORD* v44;
  } v42_;
  struct {
    _QWORD v45[2];
    int v46;
    int v47;
    char v48;
    char gap12409_[3];
    int v49;
    __int64 v50;
    __int64 v51;
  } v45_;
  struct {
    signed int v52;
    char gap12436_[4];
    __int64 v53;
  } v52_;
  struct {
    _BYTE v54[12328];
    __int64 v55;
    char gap24784_[8];
    _QWORD* v56;
  } v54_;
  unsigned int v57;
  int v58;

  if (!game_11f44e0(*(_QWORD*)(a1 + 8), 0) ||
      (unsigned __int8)GameRoutine_128f580(*(_QWORD*)(a1 + 8)) != 4) {
    return 0;
  }
  v5 = *(__int16*)(a3 + 2);
  result = 0;
  if (v5 < 0 || *(_BYTE*)a3 != 2) {
    return result;
  }
  v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                  24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                  556000);
  if (v7 == 0) {
    return 0;
  }
  v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c890[0] + 64) + 8 * v5);
  while (*(_QWORD*)(v7 + 392) != v8) {
    v7 = *(_QWORD*)(v7 + 432);
    if (v7 == 0) {
      return 0;
    }
  }
  v9 = GameData_21306c0[0];
  (**(void (***)(__int64, _QWORD))(*(_QWORD*)GameData_21306c0[0] + 8LL))(
      *(_QWORD*)GameData_21306c0[0] + 8LL, *(_QWORD*)(a1 + 8));
  (**(void (***)(__int64, _QWORD))(*(_QWORD*)v9 + 32LL))(*(_QWORD*)v9 + 32LL,
                                                         *(_QWORD*)(a1 + 8));
  v57 = 2;
  AIDeploy_1274f90(*(_QWORD**)GameData_21306a0[0], *(_QWORD*)(a1 + 8), -1,
                   &v57);
  v52_.v52 = 0;
  v52_.v53 = 0;
  GameRoutine_12a1580((__int64)v54_.v54);
  v45_.v48 = 0;
  v45_.v49 = -1;
  v45_.v50 = 0;
  GameRoutine_12a1580((__int64)v42_.v42);
  v10 = *(_QWORD**)(a1 + 8);
  v45_.v51 = v8;
  v45_.v46 = 16448;
  v45_.v45[0] = v10;
  v11 = GameData_212c880[0];
  v12 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v13 = *(_QWORD*)(v12 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                       (unsigned __int64)((_UNKNOWN*)0xB0LL)));
  if (v13 != 0) {
    v14 =
        *(_QWORD*)(v12 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                       (unsigned __int64)((_UNKNOWN*)0xB0LL)));
    while (1) {
      v15 = *(unsigned int*)(*(_QWORD*)(v14 + 24) + 4LL);
      if ((v15 & 0xFFF) == 0) {
        break;
      }
      v16 = v10[182];
      if (((v15 >> 5) & 0x7F) + 1 <= (v10[183] - v16) >> 2 &&
          ((*(_DWORD*)(v16 + 4 * ((v15 >> 5) & 0x7F)) >> v15) & 1) != 0 &&
          (v17 = v10[186], (v18 = v10[187] - v17) != 0)) {
        v19 = v18 >> 2;
        v20 = 0;
        while (((*(_DWORD*)(v17 + 4 * v20) ^ (unsigned int)v15) & 0xFFF) != 0) {
          if (v19 == ++v20) {
            goto LABEL_20;
          }
        }
      }
      else {
      LABEL_20:
        LODWORD(v20) = -1;
      }
      if ((v20 & 0x80000000) != 0) {
        v14 = *(_QWORD*)(v12 + 8 * (v15 & 0xFFF));
        if (v14 != 0) {
          continue;
        }
      }
      if ((v20 & 0x80000000) == 0) {
        goto LABEL_25;
      }
      break;
    }
    v58 = *(_WORD*)(v13 + 16) & 0xFFF;
    LODWORD(v20) = game_Unit_SkillList_IndexOf(v10 + 182, (unsigned int*)&v58);
    if ((v20 & 0x80000000) != 0) {
      goto LABEL_26;
    }
  LABEL_25:
    v21 = (_DWORD*)(v10[186] + 4LL * (unsigned int)v20);
  }
  else {
  LABEL_26:
    v21 = GameData_212c8a8;
  }
  if ((*(_WORD*)v21 & 0xFFF) != 0 &&
      (GameRoutine_128e990_alt1((__int64)v10, v21) & 1) != 0 &&
      (v26 = *v11, v27 = *v21, v45_.v45[1] = v21,
       *(_BYTE*)((v28 =
                      *(_QWORD*)(*(_QWORD*)(v26 + 64) + 8LL * (v27 & 0xFFF))) +
                 104) == 3) &&
      *(_BYTE*)(v28 + 106) == 2 &&
      (v45_.v47 = 5,
       (game_12968e0_alt1((__int64)v45_.v45, v42_.v42) & 1) != 0)) {
    v29 = *v11;
    v52_.v52 = v42_.v42[2];
    v52_.v53 = *(_QWORD*)(*(_QWORD*)(v29 + 64) + 8LL * (*v21 & 0xFFF));
    GameRoutine_12a16f0((__int64)v54_.v54, (__int64)v42_.v42);
    GameRoutine_1290c20(a1, (__int64)&v52_.v52, -1);
    v30 = 1;
  }
  else {
    v30 = 0;
  }
  v31 = v42_.v44;
  v32 = fw_memory_g_heap_manager_ptr;
  if (v42_.v44 != nullptr) {
    do {
      v33 = (_QWORD*)*v31;
      if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) != 0) {
        v34 = 128;
      }
      else {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v32 + v34);
      v31 = v33;
    } while (v33 != nullptr);
  }
  v35 = v42_.v43;
  v42_.v43 = 0;
  if (v35 != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v32 + v36);
  }
  v37 = v54_.v56;
  if (v54_.v56 != nullptr) {
    do {
      v38 = (_QWORD*)*v37;
      if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) != 0) {
        v39 = 128;
      }
      else {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v32 + v39);
      v37 = v38;
    } while (v38 != nullptr);
  }
  v40 = v54_.v55;
  v54_.v55 = 0;
  if (v40 != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v32 + v41);
  }
  return v30;
}

unsigned __int64 game_12a5280()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v7;
  bool v8;
  __int64 v9;

  v0 = (__int64*)fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
  v2 = v1;
  if (game_script_map_obj_g_object_records == 0) {
    game_script_map_obj_g_object_records = v1;
  }
  v3 = *v0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)v2 = game_map_history_anonymous_Impl_vtable;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_DWORD*)(v2 + 64) = 1065353216;
  *(_DWORD*)(v2 + 104) = 1065353216;
  *(_QWORD*)(v2 + 112) = 0xFFFFFFFF00000000LL;
  v4 = fw_memory_HeapManager_Allocate_alt1(v3, 512, 16, 0);
  *(_QWORD*)(v2 + 8) = v4;
  *(_QWORD*)(v2 + 16) = v4;
  *(_QWORD*)(v2 + 24) = v4 + 512;
  result = GameRoutine_60eb40(v2 + 32, 16);
  v6 = vcvtps_u64_f32(16.0f / *(float*)(v2 + 104));
  if (v6 == 1) {
    v6 = 2;
  }
  else if ((v6 & (v6 - 1)) != 0) {
    result = std___1___next_prime(v6);
    v6 = result;
  }
  v7 = *(_QWORD*)(v2 + 80);
  if (v6 > v7) {
    goto LABEL_8;
  }
  if (v6 < v7) {
    v8 = v7 >= 3 && (v7 & (v7 - 1)) == 0;
    result = vcvtps_u64_f32((float)*(unsigned __int64*)(v2 + 96) /
                            *(float*)(v2 + 104));
    if (v8) {
      v9 = 1LL << -(char)__clz(result - 1);
      if (result >= 2) {
        result = v9;
      }
    }
    else {
      result = std___1___next_prime(result);
    }
    if (v6 <= result) {
      v6 = result;
    }
    if (v6 < v7) {
    LABEL_8:
      result = GameRoutine_60eb40(v2 + 72, v6);
    }
  }
  game_script_map_obj_g_object_records = v2;
  return result;
}

__int64 (***game_12a62a0(__int64 (***result)(_QWORD, int*)))(_QWORD, int*)
{
  __int64 v1;
  __int64 (***v2)(_QWORD, int*);
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int8* v7;
  unsigned __int8* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned __int8* v12;
  unsigned __int8 v13;
  __int64 v14;
  unsigned __int8 v15;
  __int64 v16;
  int v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  unsigned __int8* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;

  v1 = game_script_map_obj_g_object_records;
  if (game_script_map_obj_g_object_records != 0) {
    v2 = result;
    v29 = -918767460;
    if (((**result)(result, &v29) & 1) != 0) {
      v3 = *((int*)v2 + 5);
      *((_DWORD*)v2 + 5) = v3 + 1;
      *((_BYTE*)v2[1] + v3) = 1;
      v4 = *((int*)v2 + 5);
      v5 = *(_QWORD*)(v1 + 16) - *(_QWORD*)(v1 + 8);
      *((_DWORD*)v2 + 5) = v4 + 1;
      *((_BYTE*)v2[1] + v4) = v5 >> 5;
      v6 = *((int*)v2 + 5);
      *((_DWORD*)v2 + 5) = v6 + 1;
      *((_BYTE*)v2[1] + v6) = v5 >> 13;
      v8 = *(unsigned __int8**)(v1 + 8);
      v7 = *(unsigned __int8**)(v1 + 16);
      while (v8 != v7) {
        v18 = *v8;
        v19 = (v18 & 1) == 0;
        v20 = v18 >> 1;
        if (v19) {
          v21 = v8 + 1;
        }
        else {
          v21 = *((unsigned __int8**)v8 + 2);
        }
        v22 = *((_DWORD*)v8 + 2);
        if (v19) {
          v22 = v20;
        }
        if (v22 != 0) {
          v23 = *((int*)v2 + 5);
          v24 = (unsigned int)(v22 + 1);
          *((_DWORD*)v2 + 5) = v23 + 1;
          *((_BYTE*)v2[1] + v23) = v22 + 1;
          v25 = *((int*)v2 + 5);
          *((_DWORD*)v2 + 5) = v25 + 1;
          *((_BYTE*)v2[1] + v25) = BYTE1(v24);
          v11 = *((_DWORD*)v2 + 5);
          if ((v22 & 0x80000000) == 0) {
            memmove((char*)v2[1] + v11, v21, v24);
            v11 = *((_DWORD*)v2 + 5) + v24;
            *((_DWORD*)v2 + 5) = v11;
          }
        }
        else {
          v9 = *((int*)v2 + 5);
          *((_DWORD*)v2 + 5) = v9 + 1;
          *((_BYTE*)v2[1] + v9) = 0;
          v10 = *((int*)v2 + 5);
          *((_DWORD*)v2 + 5) = v10 + 1;
          *((_BYTE*)v2[1] + v10) = 0;
          v11 = *((_DWORD*)v2 + 5);
        }
        v12 = v8 + 1;
        v13 = v8[24];
        *((_DWORD*)v2 + 5) = v11 + 1;
        v8 += 32;
        *((_BYTE*)v2[1] + v11) = v13;
        v14 = *((int*)v2 + 5);
        v15 = v12[24];
        *((_DWORD*)v2 + 5) = v14 + 1;
        *((_BYTE*)v2[1] + v14) = v15;
        v16 = *((int*)v2 + 5);
        v17 = *(_DWORD*)(v12 + 27);
        *((_DWORD*)v2 + 5) = v16 + 1;
        *((_BYTE*)v2[1] + v16) = v17;
      }
      v26 = *((int*)v2 + 5);
      v27 = *(_DWORD*)(v1 + 112);
      *((_DWORD*)v2 + 5) = v26 + 1;
      *((_BYTE*)v2[1] + v26) = v27;
      v28 = *((int*)v2 + 5);
      *((_DWORD*)v2 + 5) = v28 + 1;
      *((_BYTE*)v2[1] + v28) = BYTE1(v27);
    }
    return (__int64 (***)(_QWORD, int*))(*v2)[1](v2, nullptr);
  }
  return result;
}

__int64 game_12adf00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 Em;
  __int64 v16;
  unsigned int v17;
  __int64 v18;

  v1 = GameData_22408e8;
  if (GameData_22408e8 != 0) {
    v2 = result;
    v3 = (unsigned int)game_HashString32_alt1("MapHistoryNewTypeMgr");
    v4 = *(_QWORD*)v2;
    v17 = v3;
    if (((*(__int64 (**)(__int64, unsigned int*))(v4 + 16))(v2, &v17) & 1) !=
        0) {
      v5 = *(int*)(v2 + 20);
      v6 = *(_QWORD*)(v2 + 8);
      *(_DWORD*)(v2 + 20) = v5 + 2;
      v7 = *(unsigned __int8*)(v6 + v5 + 1);
      *(_DWORD*)(v2 + 20) = v5 + 3;
      LODWORD(v5) = *(unsigned __int8*)(v6 + v5 + 2);
      *(_QWORD*)(v1 + 8) = 0;
      v8 = v7 | ((_DWORD)v5 << 8);
      if (v8 != 0) {
        v9 = 0;
        v10 = 0;
        v11 = game_map_history_g_record_alloc_failed_ptr;
        v12 = GameData_2130ab8[0] + 2;
        do {
          v14 = *(__int64*)((char*)game_map_history_g_record_allocators_ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL));
          while (1) {
            Em = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v14, 0x30u);
            if (Em != 0) {
              break;
            }
            v16 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v11);
            v18 = 48;
            if (v16 == 0) {
              GameRoutine_60a310_alt1();
            }
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v16 + 48LL))(v16, &v18);
          }
          *(_DWORD*)(Em + 16) = 0x4000000;
          *(_WORD*)(Em + 20) = 0;
          v13 = Em;
          *(_QWORD*)Em = v12;
          *(_QWORD*)(Em + 8) = 0;
          *(_QWORD*)(Em + 24) = 0;
          *(_WORD*)(Em + 32) = 0;
          *(_QWORD*)(Em + 40) = 0;
          game_map_history_DataAdditionalNewType_Deserialize_alt1(Em, v2);
          if (v9 != 0) {
            *(_QWORD*)(v9 + 8) = v13;
          }
          else {
            *(_QWORD*)(v1 + 8) = v13;
          }
          ++v10;
          v9 = v13;
        } while (v10 != v8);
      }
    }
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 24LL))(v2, 0);
  }
  return result;
}

void game_12c16e0(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  float* i;
  float v13;
  float v14;
  int v15;
  int v16;
  float v17;
  float v18;
  float v19;
  unsigned __int8* v20;
  float v21;
  int v22;
  int v23;
  bool v24;
  int v25;
  float v26;
  float v27;
  float v28;
  unsigned __int8* v29;
  float v30;
  int v31;
  int v32;
  int v33;
  int v34;
  float v35;
  float v36;
  float v37;
  unsigned __int8* v38;
  float v39;
  int v40;
  int v41;
  int v42;
  int v43;
  float v44;
  unsigned __int8* v45;
  float v46;
  int v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  __int64* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64* v54;
  signed __int64 v55;
  bool v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64* v63;
  signed __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64* v71;
  signed __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64* v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64* v79;
  signed __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64* v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64* v87;
  signed __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64* v95;
  signed __int64 v96;
  __int64 v97;
  __int64 v98;
  char v99;
  __int64 v100;
  int v101;
  __int64 (*v102)();
  struct {
    void* v103;
    float v104;
    float v105;
    float v106;
    float v107;
    float v108;
    float v109;
    float v110;
    float v111;
    float v112;
  } v103_;

  v1 = *a1;
  v99 = *(_BYTE*)(*a1 + 540);
  v3 = *(_QWORD*)(v1 + 541);
  v101 = *(_DWORD*)(v1 + 549);
  LODWORD(v1) = *((_DWORD*)a1 + 2);
  v100 = v3;
  if ((int)v1 >= 1) {
    v4 = 0;
    do {
      v5 = a1[2] + 16 * v4;
      v6 = *(_QWORD*)v5;
      v103_.v103 = &GameData_1aa9c9c;
      v7 = 0x0.0p+0f;
      v102 = (__int64 (*)())game_HashString((__int64)&GameData_1aa9c9c);
      if (game_GameModeData_instance_ != 0) {
        v8 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v102);
        if (v8 != 0) {
          v7 = (float)*(int*)(v8 + 32) * 0x1.47ae140000000p-7f;
        }
      }
      v103_.v103 = &GameData_1acc5c7;
      v9 = 0x0.0p+0f;
      v102 = (__int64 (*)())game_HashString((__int64)&GameData_1acc5c7);
      if (game_GameModeData_instance_ != 0) {
        v10 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v102);
        if (v10 != 0) {
          v9 = (float)*(int*)(v10 + 32) * 0x1.47ae140000000p-7f;
        }
      }
      v11 = 0;
      for (i = (float*)&v103_.v103;; i += 4) {
        v15 = *(unsigned __int8*)(v6 + v11 + 48) <= 1u
                  ? 1
                  : *(unsigned __int8*)(v6 + v11 + 48);
        v16 = (unsigned __int8)*(&v99 + v11) - v15;
        v17 = (float)v16;
        if (v16 < 1) {
          v20 = *(unsigned __int8**)(v6 + 40);
          v21 = v9;
          if (v20[433] != (unsigned __int8)v11) {
            v21 = v9;
            if (v20[434] != (unsigned __int8)v11) {
              if ((unsigned __int8)v11 == v20[435]) {
                v21 = v9;
              }
              else {
                v21 = 0x1.0000000000000p+0f;
              }
            }
          }
          v19 = -(float)(v17 * v21);
        }
        else {
          v18 = *(_BYTE*)(v6 + v11 + 48) != 0 ? v7 : 0x1.0000000000000p+0f;
          v19 = v18 * v17;
        }
        *(i - 2) = v19;
        if (v11 == 12) {
          break;
        }
        v22 = *((unsigned __int8*)&v100 + v11);
        if (*(unsigned __int8*)(v6 + v11 + 49) <= 1u) {
          v23 = 1;
        }
        else {
          v23 = *(unsigned __int8*)(v6 + v11 + 49);
        }
        v24 = __OFSUB__(v22, v23);
        v25 = v22 - v23;
        v26 = (float)v25;
        if ((v25 < 0) ^ v24 | (v25 == 0)) {
          v29 = *(unsigned __int8**)(v6 + 40);
          v30 = v9;
          v31 = (unsigned __int8)(v11 + 1);
          if (v29[433] != v31) {
            v30 = v9;
            if (v29[434] != v31) {
              if (v31 == v29[435]) {
                v30 = v9;
              }
              else {
                v30 = 0x1.0000000000000p+0f;
              }
            }
          }
          v28 = -(float)(v26 * v30);
        }
        else {
          if (*(_BYTE*)(v6 + v11 + 49) != 0) {
            v27 = v7;
          }
          else {
            v27 = 0x1.0000000000000p+0f;
          }
          v28 = v27 * v26;
        }
        *(i - 1) = v28;
        v32 = *((unsigned __int8*)&v100 + v11 + 1);
        if (*(unsigned __int8*)(v6 + v11 + 50) <= 1u) {
          v33 = 1;
        }
        else {
          v33 = *(unsigned __int8*)(v6 + v11 + 50);
        }
        v24 = __OFSUB__(v32, v33);
        v34 = v32 - v33;
        v35 = (float)v34;
        if ((v34 < 0) ^ v24 | (v34 == 0)) {
          v38 = *(unsigned __int8**)(v6 + 40);
          v39 = v9;
          v40 = (unsigned __int8)(v11 + 2);
          if (v38[433] != v40) {
            v39 = v9;
            if (v38[434] != v40) {
              if (v40 == v38[435]) {
                v39 = v9;
              }
              else {
                v39 = 0x1.0000000000000p+0f;
              }
            }
          }
          v37 = -(float)(v35 * v39);
        }
        else {
          if (*(_BYTE*)(v6 + v11 + 50) != 0) {
            v36 = v7;
          }
          else {
            v36 = 0x1.0000000000000p+0f;
          }
          v37 = v36 * v35;
        }
        *i = v37;
        v41 = *((unsigned __int8*)&v100 + v11 + 2);
        if (*(unsigned __int8*)(v6 + v11 + 51) <= 1u) {
          v42 = 1;
        }
        else {
          v42 = *(unsigned __int8*)(v6 + v11 + 51);
        }
        v24 = __OFSUB__(v41, v42);
        v43 = v41 - v42;
        v44 = (float)v43;
        if ((v43 < 0) ^ v24 | (v43 == 0)) {
          v45 = *(unsigned __int8**)(v6 + 40);
          v46 = v9;
          v47 = (unsigned __int8)(v11 + 3);
          if (v45[433] != v47) {
            v46 = v9;
            if (v45[434] != v47) {
              if (v47 == v45[435]) {
                v46 = v9;
              }
              else {
                v46 = 0x1.0000000000000p+0f;
              }
            }
          }
          v14 = -(float)(v44 * v46);
        }
        else {
          if (*(_BYTE*)(v6 + v11 + 51) != 0) {
            v13 = v7;
          }
          else {
            v13 = 0x1.0000000000000p+0f;
          }
          v14 = v13 * v44;
        }
        i[1] = v14;
        v11 += 4;
      }
      v48 = *(_QWORD*)v5;
      *(float*)(v5 + 8) =
          (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(*(float*)&v102 +
                                                                                                          0x0.0p+0f) +
                                                                                                  *((float*)&v102 +
                                                                                                    1)) +
                                                                                          *(float*)&v103_
                                                                                               .v103) +
                                                                                  *((float*)&v103_
                                                                                        .v103 +
                                                                                    1)) +
                                                                          v103_
                                                                              .v104) +
                                                                  v103_.v105) +
                                                          v103_.v106) +
                                                  v103_.v107) +
                                          v103_.v108) +
                                  v103_.v109) +
                          v103_.v110) +
                  v103_.v111) +
          v103_.v112;
      game_95eaa0((void*)((__int64)&v102), *a1, *(_QWORD*)(v48 + 40));
      if (((unsigned __int8)v102 & 2) != 0 ||
          ((unsigned __int16)v102 & 0x201) == 0x200) {
        *(_BYTE*)(v5 + 12) = 1;
        v49 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v5 + 40LL) + 49LL);
        if (v49 > *((unsigned __int8*)a1 + 168)) {
          *((_BYTE*)a1 + 168) = v49;
        }
      }
      else {
        *(_BYTE*)(v5 + 12) = 0;
      }
      ++v4;
    } while (v4 < *((int*)a1 + 2));
  }
  v50 = a1[3];
  v51 = (__int64*)a1[4];
  v102 = GameRoutine_12c6110;
  if (((__int64)v51 - v50) >> 3 < 129) {
    v55 = 0;
  LABEL_81:
    GameHr_12c6140(v50, v51, (__int64 (**)(__int64, __int64))&v102,
                   ((__int64)v51 - v50) >> 3, nullptr, v55);
  }
  else {
    v52 = ((__int64)v51 - v50) >> 3;
    v53 = GameData_212c060;
    while (1) {
      v54 = (__int64*)GameRoutine_1a09d20_alt1(8 * v52, v53);
      if (v54 != nullptr) {
        break;
      }
      v55 = v52 >> 1;
      v56 = v52 > 1;
      v52 >>= 1;
      if (!v56) {
        goto LABEL_81;
      }
    }
    v57 = (__int64)v54;
    GameHr_12c6140(v50, v51, (__int64 (**)(__int64, __int64))&v102,
                   ((__int64)v51 - v50) >> 3, v54, v52);
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v57);
  }
  v59 = a1[6];
  v60 = (__int64*)a1[7];
  v102 = GameRoutine_12c6110;
  if (((__int64)v60 - v59) >> 3 < 129) {
    v64 = 0;
  LABEL_91:
    GameHr_12c6140(v59, v60, (__int64 (**)(__int64, __int64))&v102,
                   ((__int64)v60 - v59) >> 3, nullptr, v64);
  }
  else {
    v61 = ((__int64)v60 - v59) >> 3;
    v62 = GameData_212c060;
    while (1) {
      v63 = (__int64*)GameRoutine_1a09d20_alt1(8 * v61, v62);
      if (v63 != nullptr) {
        break;
      }
      v64 = v61 >> 1;
      v56 = v61 > 1;
      v61 >>= 1;
      if (!v56) {
        goto LABEL_91;
      }
    }
    v65 = (__int64)v63;
    GameHr_12c6140(v59, v60, (__int64 (**)(__int64, __int64))&v102,
                   ((__int64)v60 - v59) >> 3, v63, v61);
    v66 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v65);
  }
  v67 = a1[9];
  v68 = (__int64*)a1[10];
  v102 = GameRoutine_12c6110;
  if (((__int64)v68 - v67) >> 3 < 129) {
    v72 = 0;
  LABEL_101:
    GameHr_12c6140(v67, v68, (__int64 (**)(__int64, __int64))&v102,
                   ((__int64)v68 - v67) >> 3, nullptr, v72);
  }
  else {
    v69 = ((__int64)v68 - v67) >> 3;
    v70 = GameData_212c060;
    while (1) {
      v71 = (__int64*)GameRoutine_1a09d20_alt1(8 * v69, v70);
      if (v71 != nullptr) {
        break;
      }
      v72 = v69 >> 1;
      v56 = v69 > 1;
      v69 >>= 1;
      if (!v56) {
        goto LABEL_101;
      }
    }
    v73 = (__int64)v71;
    GameHr_12c6140(v67, v68, (__int64 (**)(__int64, __int64))&v102,
                   ((__int64)v68 - v67) >> 3, v71, v69);
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v73);
  }
  v75 = a1[12];
  v76 = (__int64*)a1[13];
  v102 = GameRoutine_12c6110;
  if (((__int64)v76 - v75) >> 3 < 129) {
    v80 = 0;
  LABEL_111:
    GameHr_12c6140(v75, v76, (__int64 (**)(__int64, __int64))&v102,
                   ((__int64)v76 - v75) >> 3, nullptr, v80);
  }
  else {
    v77 = ((__int64)v76 - v75) >> 3;
    v78 = GameData_212c060;
    while (1) {
      v79 = (__int64*)GameRoutine_1a09d20_alt1(8 * v77, v78);
      if (v79 != nullptr) {
        break;
      }
      v80 = v77 >> 1;
      v56 = v77 > 1;
      v77 >>= 1;
      if (!v56) {
        goto LABEL_111;
      }
    }
    v81 = (__int64)v79;
    GameHr_12c6140(v75, v76, (__int64 (**)(__int64, __int64))&v102,
                   ((__int64)v76 - v75) >> 3, v79, v77);
    v82 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v82 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v82, v81);
  }
  v83 = a1[15];
  v84 = (__int64*)a1[16];
  v102 = GameRoutine_12c6110;
  if (((__int64)v84 - v83) >> 3 < 129) {
    v88 = 0;
  LABEL_121:
    GameHr_12c6140(v83, v84, (__int64 (**)(__int64, __int64))&v102,
                   ((__int64)v84 - v83) >> 3, nullptr, v88);
  }
  else {
    v85 = ((__int64)v84 - v83) >> 3;
    v86 = GameData_212c060;
    while (1) {
      v87 = (__int64*)GameRoutine_1a09d20_alt1(8 * v85, v86);
      if (v87 != nullptr) {
        break;
      }
      v88 = v85 >> 1;
      v56 = v85 > 1;
      v85 >>= 1;
      if (!v56) {
        goto LABEL_121;
      }
    }
    v89 = (__int64)v87;
    GameHr_12c6140(v83, v84, (__int64 (**)(__int64, __int64))&v102,
                   ((__int64)v84 - v83) >> 3, v87, v85);
    v90 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v90 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v90, v89);
  }
  v92 = a1[18];
  v91 = (__int64*)a1[19];
  v102 = GameRoutine_12c6110;
  if (((__int64)v91 - v92) >> 3 < 129) {
    v96 = 0;
  LABEL_131:
    GameHr_12c6140(v92, v91, (__int64 (**)(__int64, __int64))&v102,
                   ((__int64)v91 - v92) >> 3, nullptr, v96);
  }
  else {
    v93 = ((__int64)v91 - v92) >> 3;
    v94 = GameData_212c060;
    while (1) {
      v95 = (__int64*)GameRoutine_1a09d20_alt1(8 * v93, v94);
      if (v95 != nullptr) {
        break;
      }
      v96 = v93 >> 1;
      v56 = v93 > 1;
      v93 >>= 1;
      if (!v56) {
        goto LABEL_131;
      }
    }
    v97 = (__int64)v95;
    GameHr_12c6140(v92, v91, (__int64 (**)(__int64, __int64))&v102,
                   ((__int64)v91 - v92) >> 3, v95, v93);
    v98 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v98 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v98, v97);
  }
}

__n128 game_12c4de0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  bool v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  __int64 v24;
  long double v25;
  int v26;
  __int64 v27;
  struct {
    __int64 v29;
    int v30;
    int v31;
  } v29_;
  struct {
    char* v32;
    __int64 v33;
    __int64 v34;
  } v32_;
  __int64 v35[22];

  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(_QWORD*)(a1 + 8);
  v32_.v33 = 0;
  v32_.v34 = 0;
  v32_.v32 = nullptr;
  AutoGrowJobFile_12c0bc0((__int64)v35, v1, &v32_.v32),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_12c16e0(v35),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = GameRoutine_12c1f80((unsigned __int8*)v35),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 96) = v3;
  v5 = *(_QWORD*)(v4 + 392);
  if (v5 == game_GetHero(1u)) {
    GameRoutine_12c45b0(&v32_.v32, *(_QWORD*)(a1 + 8), 0),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v24 = *(_QWORD*)(a1 + 96);
    HIWORD(v29_.v31) = 0;
    if ((GameRoutine_12c4780(&v32_.v32, v24, (__int64)&v29_.v29) & 1) != 0) {
      *(_QWORD*)(a1 + 104) = v29_.v29;
      v26 = v29_.v31;
      *(_DWORD*)(a1 + 112) = v29_.v30;
      *(_DWORD*)(a1 + 116) = v26;
    }
    if (v32_.v34 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      *(__n128*)&v25 = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (v32_.v33 != 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v32_.v33 + 8LL))(v32_.v33,
                                                                     v25),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  else {
    v6 = *(_QWORD*)(a1 + 8);
    if (*(_BYTE*)(v6 + 1880) != 0) {
      v7 = *(_QWORD*)(a1 + 96);
      v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                      8LL * *(unsigned __int8*)(v6 + 1880));
      if (v8 != 0 && *(_BYTE*)(v7 + 96) == 2) {
        v10 = *(_QWORD*)(v7 + 112);
        if (v10 != 0 &&
            *(unsigned __int8*)(v8 + 32) == *(unsigned __int8*)(v10 + 32)) {
          *(_QWORD*)(a1 + 104) = v8;
          v11 = *(_QWORD*)(v6 + 392);
          if (v11 != 0) {
            v12 = *(_QWORD*)(v6 + 1904);
            if (v12 == 0) {
              goto LABEL_22;
            }
            v13 = v6 + 1904;
            v14 = *(unsigned __int8*)(v11 + 48);
            v11 = v13;
            do {
              v15 = *(unsigned __int8*)(v12 + 26);
              v16 = v15 >= v14;
              if (v15 >= v14) {
                v17 = 0;
              }
              else {
                v17 = 8;
              }
              if (v16) {
                v11 = v12;
              }
              v12 = *(_QWORD*)(v12 + v17);
            } while (v12 != 0);
            if (v11 != v13 && v14 >= *(unsigned __int8*)(v11 + 26)) {
              LODWORD(v11) = *(_WORD*)(v11 + 28) & 0xFFF;
            }
            else {
            LABEL_22:
              LODWORD(v11) = 0;
            }
          }
          v18 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
          if ((int)v18 < 1) {
            v19 = 0;
          }
          else {
            v19 = 0;
            v20 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v18 - 1));
            if (v20 >= (int)v11) {
              v20 = v11;
            }
            if ((int)v11 >= *(_DWORD*)GameData_21d9988) {
              v21 = v20;
            }
            else {
              v21 = *(_DWORD*)GameData_21d9988;
            }
            while (1) {
              v22 = (unsigned int)(v19 + v18) >> 1;
              v23 = *(_DWORD*)(GameData_21d9988 + 4LL * v22);
              if (v21 == v23) {
                break;
              }
              if (v21 < v23) {
                LODWORD(v18) = (unsigned int)(v19 + v18) >> 1;
              }
              else {
                v19 = v22 + 1;
              }
              if (v19 >= (int)v18) {
                goto LABEL_45;
              }
            }
            v19 = v22 + 1;
          }
        LABEL_45:
          *(_DWORD*)(a1 + 112) = v19;
          *(_DWORD*)(a1 + 116) = 1;
        }
      }
    }
  }
  return GameRoutine_12c20f0(v35);
}

__int64 game_12c52c0(__int64 result, __int64 a2, char a3)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  struct {
    __int64 v9;
    int v10;
  } v9_;
  _QWORD** v11;
  struct {
    _QWORD* v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    _BYTE* v16;
  } v12_;
  _BYTE v17[8];

  if (*(_BYTE*)(result + 1880) != 0) {
    v4 = result;
    if (((*(__int64 (**)(__int64))(*(_QWORD*)a2 + 16LL))(a2) & 1) != 0) {
      if ((a3 & 1) == 0) {
        WORD1(v9_.v9) = 0;
        HIDWORD(v9_.v9) = 0;
        v12_.v13 = 0;
        v12_.v14 = 0;
        v12_.v15 = 0;
        v12_.v16 = nullptr;
        v11 = &v12_.v12;
        v12_.v12 = nullptr;
        GameRoutine_930b90((__int64)&v9_.v9, v4 + 1880);
        BYTE3(v9_.v9) = 0;
        RidePool_93c6a0(
            (void*)((__int64)v17),
            *(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 176) + 2536LL),
            (unsigned __int8*)&v9_.v9, 0, 1);
        v9_.v9 = 0;
        v9_.v10 = 0;
        if ((v12_.v14 & 1) != 0) {
          *v12_.v16 = 0;
          v12_.v15 = 0;
        }
        else {
          LOWORD(v12_.v14) = 0;
        }
        GameRoutine_6e3b50((__int64)&v11, v12_.v12);
        v12_.v12 = nullptr;
        v12_.v13 = 0;
        v11 = &v12_.v12;
        if ((v12_.v14 & 1) != 0) {
          v5 = v12_.v16;
          if (v12_.v16 != nullptr) {
            v6 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v6 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
            v5 = v12_.v12;
          }
        }
        else {
          v5 = nullptr;
        }
        GameRoutine_6e3b50((__int64)&v11, v5);
      }
      return UnitHeroes_6d2b90(v4, (unsigned __int8*)GameData_212c8b0[0]);
    }
    else if ((a3 & 1) != 0) {
      return UnitHeroes_6d2b90(v4, (unsigned __int8*)GameData_212c8b0[0]);
    }
    else if (*(_BYTE*)(v4 + 1880) != 0 &&
             (RidePool_93d8e0(v4) & 0x80000000) != 0) {
      WORD1(v9_.v9) = 0;
      HIDWORD(v9_.v9) = 0;
      v12_.v13 = 0;
      v12_.v14 = 0;
      v12_.v15 = 0;
      v12_.v16 = nullptr;
      v11 = &v12_.v12;
      v12_.v12 = nullptr;
      GameRoutine_930b90((__int64)&v9_.v9, v4 + 1880);
      BYTE3(v9_.v9) = 0;
      UnitHeroes_6d2b90(v4, (unsigned __int8*)GameData_212c8b0[0]);
      RidePool_93c6a0((void*)((__int64)v17),
                      *(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL),
                      (unsigned __int8*)&v9_.v9, 0, 1);
      v9_.v9 = 0;
      v9_.v10 = 0;
      if ((v12_.v14 & 1) != 0) {
        *v12_.v16 = 0;
        v12_.v15 = 0;
      }
      else {
        LOWORD(v12_.v14) = 0;
      }
      GameRoutine_6e3b50((__int64)&v11, v12_.v12);
      v12_.v12 = nullptr;
      v12_.v13 = 0;
      v11 = &v12_.v12;
      if ((v12_.v14 & 1) != 0) {
        v7 = v12_.v16;
        if (v12_.v16 != nullptr) {
          v8 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v8);
          v7 = v12_.v12;
        }
      }
      else {
        v7 = nullptr;
      }
      return GameRoutine_6e3b50((__int64)&v11, v7);
    }
    else {
      return RidePool_93d1e0(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL),
                             v4);
    }
  }
  return result;
}

__int64 game_12c5550(__int64 a1, __int64 a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  __int64 v14;
  __int64 v15;
  struct {
    _BYTE v16[4];
    unsigned int v17;
  } v16_;

  v6 = (*(unsigned int (**)(__int64))(*(_QWORD*)a2 + 8LL))(a2) >> 16;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a2 + 16LL))(a2) & 1) != 0) {
    v7 = *(_QWORD*)(*(_QWORD*)(a1 + 392) + 336LL);
    if (v7 != 0) {
      v8 = *(unsigned __int8*)(v7 + 40);
      v9 = game_GameModeData_instance_;
      if (v8 != 0) {
        v10 = *(_QWORD*)(game_GameModeData_instance_ + 176) +
              216LL * (unsigned int)v8;
        if (*(_QWORD*)(v10 + 264) == *(_QWORD*)(v10 + 256)) {
          LODWORD(v8) = 0;
        }
      }
    }
    else {
      LODWORD(v8) = 0;
      v9 = game_GameModeData_instance_;
    }
    v14 = *(_QWORD*)(v9 + 176);
    if ((a3 & 1) != 0) {
      v12 = (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v14 +
                                                     216LL * (unsigned int)v8 +
                                                     352) +
                                          120LL) +
                               (v6 << 6));
    }
    else {
      v15 = v14 + 216LL * (unsigned int)v8;
      RidePool_93cb20((void*)((__int64)v16_.v16), v15 + 392, v15 + 344, v6);
      if ((v16_.v17 & 0x80000000) != 0) {
        v12 = (unsigned __int8*)&GameData_21f4228;
      }
      else {
        v12 = (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v15 + 400) + 120LL) +
                                 ((unsigned __int64)v16_.v17 << 6));
      }
    }
  }
  else {
    v11 = *(_QWORD*)(GameData_21f42d0 + 8);
    if ((a3 & 1) == 0) {
      return RidePool_93ce60(v11, a1, v6);
    }
    v12 = (unsigned __int8*)(*(_QWORD*)(v11 + 120) + (v6 << 6));
  }
  return UnitHeroes_6d2b90(a1, v12);
}

__int64 game_12c56a0(__int64 result, __int64 a2, char a3)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  char v9;
  int v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;

  if (*(_BYTE*)(result + 1944) == 0) {
    return result;
  }
  v4 = result;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 16LL))(a2);
  if ((result & 1) != 0) {
    if ((a3 & 1) == 0) {
      if (*(_BYTE*)(v4 + 1944) != 0) {
        v5 = *(_QWORD*)(v4 + 1944);
      }
      else {
        v5 = 0;
      }
      v16 = v5;
      BYTE1(v16) = 0;
      result = X8CALL_X0(
          __int64,
          LegionPool_936f60(
              (void*)((__int64)&v17),
              *(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 176) +
                         2552LL),
              (unsigned __int8*)&v16, 0));
    }
  }
  else if ((a3 & 1) == 0) {
    if (*(_BYTE*)(v4 + 1944) == 0 ||
        (LegionPool_938460(v4) & 0x80000000) == 0) {
      return LegionPool_937de0(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL),
                               v4);
    }
    v17 = *(_QWORD*)(v4 + 1944);
    v11 = v17;
    BYTE1(v17) = 0;
    v12 = GameData_212ceb0;
    v13 = *GameData_212ceb0;
    if (v11 != *GameData_212ceb0) {
      *(_WORD*)(v4 + 1944) = v13;
      *(_BYTE*)(v4 + 1946) = BYTE2(v13);
      v14 = *(_DWORD*)((char*)v12 + 3);
      *(_BYTE*)(v4 + 1951) = *((_BYTE*)v12 + 7);
      v15 = *(_DWORD*)(v4 + 416);
      *(_DWORD*)(v4 + 1947) = v14;
      if ((v15 & 0x10000000) == 0) {
        *(_DWORD*)(v4 + 416) = v15 | 0x10000000;
        game_6c51e0(v4);
        GameRoutine_6c6da0(v4);
        game_6c6ec0(v4);
        *(_DWORD*)(v4 + 416) &= ~0x10000000u;
      }
      *(_WORD*)(v4 + 20) |= 1u;
    }
    return X8CALL_X0(
        __int64,
        LegionPool_936f60((void*)((__int64)&v16),
                          *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL),
                          (unsigned __int8*)&v17, 0));
  }
  v6 = GameData_212ceb0;
  v7 = *GameData_212ceb0;
  if (*(_QWORD*)(v4 + 1944) != *GameData_212ceb0) {
    *(_WORD*)(v4 + 1944) = v7;
    *(_BYTE*)(v4 + 1946) = BYTE2(v7);
    v8 = *(_DWORD*)((char*)v6 + 3);
    v9 = *((_BYTE*)v6 + 7);
    *(_DWORD*)(v4 + 1947) = v8;
    *(_BYTE*)(v4 + 1951) = v9;
    v10 = *(_DWORD*)(v4 + 416);
    if ((v10 & 0x10000000) == 0) {
      *(_DWORD*)(v4 + 416) = v10 | 0x10000000;
      game_6c51e0(v4);
      GameRoutine_6c6da0(v4);
      result = game_6c6ec0(v4);
      *(_DWORD*)(v4 + 416) &= ~0x10000000u;
    }
    *(_WORD*)(v4 + 20) |= 1u;
  }
  return result;
}

__int64 game_12c5890(__int64 a1, _QWORD* a2, char a3)
{
  __int64 v3;
  __int64 result;
  __int64 v7;
  int v8;
  _BYTE v9[8];
  __int64 v10;

  v3 = a2[11];
  result = (*(__int64 (**)(_QWORD*))(*a2 + 16LL))(a2);
  if ((result & 1) != 0) {
    if (v3 != 0) {
    LABEL_3:
      v7 = *(unsigned __int8*)(v3 + 16);
      goto LABEL_7;
    }
  LABEL_6:
    v7 = 0;
  LABEL_7:
    if (*(_QWORD*)(a1 + 1944) != v7) {
      *(_WORD*)(a1 + 1944) = v7;
      *(_BYTE*)(a1 + 1951) = 0;
      *(_BYTE*)(a1 + 1946) = 0;
      *(_DWORD*)(a1 + 1947) = 0;
      v8 = *(_DWORD*)(a1 + 416);
      if ((v8 & 0x10000000) == 0) {
        *(_DWORD*)(a1 + 416) = v8 | 0x10000000;
        game_6c51e0(a1);
        GameRoutine_6c6da0(a1);
        result = game_6c6ec0(a1);
        *(_DWORD*)(a1 + 416) &= ~0x10000000u;
      }
      *(_WORD*)(a1 + 20) |= 1u;
    }
    return result;
  }
  if ((a3 & 1) != 0) {
    if (v3 != 0) {
      goto LABEL_3;
    }
    goto LABEL_6;
  }
  v10 = 0;
  if (v3 != 0) {
    LOBYTE(v10) = *(_BYTE*)(v3 + 16);
  }
  return X8CALL_X0(__int64, LegionPool_936f60(
                                (void*)((__int64)v9),
                                *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL),
                                (unsigned __int8*)&v10, a1));
}

__int64 game_12c5be0(_WORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  int v10;
  __int64 v12;
  _BYTE v13[4];

  v2 = *(_QWORD*)(a2 + 16);
  v12 = 0;
  if (v2 != 0) {
    v4 = *(unsigned __int16*)(v2 + 16);
    HIDWORD(v12) = 1;
    LOWORD(v12) = v4;
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
      HIDWORD(v12) =
          (16 * ((_WORD)v9 -
                 1000 * (unsigned __int16)((v9 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  game_UnitItemList_Add(a1 + 414, v13, &v12, 0);
  if (a1[414] != 0) {
    v10 = (a1[418] != 0) + 1;
  }
  else {
    v10 = a1[418] != 0;
  }
  if (a1[422] != 0) {
    ++v10;
  }
  if (a1[426] != 0) {
    ++v10;
  }
  if (a1[430] != 0) {
    ++v10;
  }
  if (a1[434] != 0) {
    ++v10;
  }
  return game_Unit_EquipItem_6d8f40(a1, (unsigned int)(v10 - 1));
}

__int64 game_12c65c0(__int64 result, __int64* a2, __int64* a3,
                     __int64 (**a4)(__int64, __int64), __int64 a5, __int64 a6,
                     __int64 a7, __int64 a8)
{
  __int64 v10;
  __int64* v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 (*v22)(__int64, __int64);
  unsigned __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64* v29;
  signed __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v35;
  signed __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64* v50;
  __int64* v51;
  __int64* v52;
  __int64 v53;
  bool v54;
  char v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64* v59;
  __int64 v60;
  _QWORD* v61;
  __int64* v62;
  __int64 v63;
  __int64* v64;
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
  __int64 v77;
  _QWORD* v78;
  __int64* v79;

  if (a6 != 0) {
    v10 = a6;
    v15 = (__int64*)result;
    while (a5 > a8 && v10 > a8) {
      if (a5 == 0) {
        return result;
      }
      while (1) {
        result = (*a4)(*a2, *v15);
        if ((result & 1) != 0) {
          break;
        }
        ++v15;
        if (--a5 == 0) {
          return result;
        }
      }
      v79 = a3;
      if (a5 >= v10) {
        if (a5 == 1) {
          v68 = *v15;
          *v15 = *a2;
          *a2 = v68;
          return result;
        }
        v21 = a5 / 2;
        v16 = &v15[a5 / 2];
        if (a3 != a2) {
          v22 = *a4;
          v74 = v10;
          v23 = a3 - a2;
          a3 = a2;
          v78 = (_QWORD*)a7;
          do {
            v24 = &a3[v23 >> 1];
            v26 = *v24;
            v25 = v24 + 1;
            if ((v22(v26, *v16) & 1) != 0) {
              a3 = v25;
              v23 += ~(v23 >> 1);
            }
            else {
              v23 >>= 1;
            }
          } while (v23 != 0);
          a7 = (__int64)v78;
          v10 = v74;
          v21 = a5 / 2;
        }
        v77 = a3 - a2;
      }
      else {
        a3 = &a2[v10 / 2];
        v77 = v10 / 2;
        if (v15 == a2) {
          v16 = a2;
        }
        else {
          v71 = a8;
          v73 = v10;
          v16 = v15;
          v17 = a2 - v15;
          do {
            v18 = &v16[v17 >> 1];
            v20 = *v18;
            v19 = v18 + 1;
            if (((*a4)(*a3, v20) & 1) != 0) {
              v17 >>= 1;
            }
            else {
              v16 = v19;
              v17 += ~(v17 >> 1);
            }
          } while (v17 != 0);
          a8 = v71;
          v10 = v73;
        }
        v21 = v16 - v15;
      }
      v27 = a3;
      if (v16 != a2) {
        v27 = v16;
        if (a2 != a3) {
          v28 = v16 + 1;
          if (v16 + 1 == a2) {
            v75 = v10;
            v35 = *v16;
            v36 = (char*)a3 - (char*)a2;
            v37 = a8;
            v38 = (_QWORD*)a7;
            v39 = v21;
            memmove(v16, v28, v36);
            v27 = (__int64*)((char*)v16 + v36);
            v21 = v39;
            a7 = (__int64)v38;
            a8 = v37;
            *v27 = v35;
            v10 = v75;
          }
          else {
            v29 = a2 + 1;
            if (a2 + 1 == a3) {
              v40 = v10;
              v41 = *(a3 - 1);
              v27 = v16 + 1;
              if (a3 - 1 != v16) {
                v72 = a8;
                v42 = (_QWORD*)a7;
                v43 = v21;
                memmove(v16 + 1, v16, (char*)(a3 - 1) - (char*)v16);
                v21 = v43;
                a7 = (__int64)v42;
                a8 = v72;
              }
              *v16 = v41;
              v10 = v40;
            }
            else {
              v30 = (char*)a2 - (char*)v16;
              v31 = a2 - v16;
              v32 = a3 - a2;
              if (v31 == v32) {
                do {
                  v33 = *(v28 - 1);
                  *(v28 - 1) = *(v29 - 1);
                  *(v29 - 1) = v33;
                  if (v28 == a2) {
                    break;
                  }
                  ++v28;
                } while (v29++ != a3);
                v27 = a2;
              }
              else {
                v44 = a2 - v16;
                do {
                  v45 = v44;
                  v44 = v32;
                  v32 = v45 % v32;
                } while (v32 != 0);
                if (8 * v44 != 0) {
                  v46 = &v16[v44];
                  do {
                    v48 = *--v46;
                    v47 = v48;
                    v49 = (__int64*)((char*)v46 + v30);
                    v50 = v46;
                    do {
                      v51 = v49;
                      *v50 = *v49;
                      v52 = (__int64*)((char*)v49 + v30);
                      v53 = a3 - v49;
                      v54 = __OFSUB__(v31, v53);
                      v56 = v31 - v53;
                      v55 = (v56 < 0) ^ v54;
                      v49 = &v16[v56];
                      if (v55) {
                        v49 = v52;
                      }
                      v50 = v51;
                    } while (v49 != v46);
                    *v51 = v47;
                  } while (v46 != v16);
                }
                v27 = (__int64*)((char*)v16 + ((char*)a3 - (char*)a2));
              }
            }
          }
        }
      }
      a5 -= v21;
      v10 -= v77;
      if (v21 + v77 >= a5 + v10) {
        v76 = v21;
        result = game_12c65c0(v27, a3, v79, a4, a5, v10, a7, a8);
        a5 = v76;
        a3 = v16;
        v10 = v77;
        v79 = v27;
      }
      else {
        result = game_12c65c0(v15, v16, v27, a4, v21, v77, a7, a8);
        v15 = v27;
      }
      a2 = a3;
      a3 = v79;
      if (v10 == 0) {
        return result;
      }
    }
    if (a5 <= v10) {
      if (v15 != a2) {
        v60 = -a7;
        v61 = (_QWORD*)a7;
        v62 = v15;
        do {
          v63 = *v62++;
          v60 -= 8;
          *v61++ = v63;
        } while (v62 != a2);
        while (a2 != a3) {
          result = (*a4)(*a2, *(_QWORD*)a7);
          if ((result & 1) != 0) {
            v64 = a2;
          }
          else {
            v64 = (__int64*)a7;
          }
          if ((result & 1) != 0) {
            v65 = 8;
          }
          else {
            v65 = 0;
          }
          v66 = *v64;
          a2 = (__int64*)((char*)a2 + v65);
          if ((result & 1) != 0) {
            v67 = 0;
          }
          else {
            v67 = 8;
          }
          a7 += v67;
          *v15++ = v66;
          if (v61 == (_QWORD*)a7) {
            return result;
          }
        }
        return memmove(v15, a7, -(a7 + v60));
      }
    }
    else if (a2 != a3) {
      v57 = 0;
      do {
        *(_QWORD*)(a7 + v57 * 8) = a2[v57];
        ++v57;
      } while (&a2[v57] != a3);
      v58 = (__int64*)(a7 + v57 * 8);
      while (a2 != v15) {
        result = (*a4)(*(v58 - 1), *(a2 - 1));
        if ((result & 1) != 0) {
          v59 = a2;
        }
        else {
          v59 = v58;
        }
        if ((result & 1) != 0) {
          --a2;
        }
        else {
          --v58;
        }
        *--a3 = *(v59 - 1);
        if (v58 == (__int64*)a7) {
          return result;
        }
      }
      if ((__int64*)a7 != v58) {
        v69 = 0x1FFFFFFFFFFFFFFFLL;
        do {
          v70 = *--v58;
          a3[v69--] = v70;
        } while (v58 != (__int64*)a7);
      }
    }
  }
  return result;
}

__int64 game_12c6b00(__int64* a1, __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  _QWORD* v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;

  v2 = a1[1] - *a1;
  v3 = (v2 >> 3) + 1;
  if (v3 >> 61 != 0) {
    GameRoutine_6f26d0();
  }
  v5 = a1[2] - *a1;
  if (v5 >> 2 > v3) {
    v3 = v5 >> 2;
  }
  if ((unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFF8LL) {
    v6 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v6 = v3;
  }
  if (v6 >> 61 != 0) {
    GameRoutine_60a210(a1);
  }
  v8 = fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v6, 16, 0);
  v10 = *a2;
  v11 = v9 + v2;
  *(_QWORD*)v11 = 0;
  if (v10 != 0) {
    v12 = *(unsigned __int16*)(v10 + 16);
    *(_DWORD*)(v11 + 4) = 1;
    *(_WORD*)v11 = v12;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v12) +
                  73LL) == 17) {
      v13 = v9;
      nn_os_LockMutex(&game_g_random_mutex);
      v14 = game_map_MapRandom_instance__ptr[0];
      v15 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v16 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v17 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v14 + 1) = v15;
      v18 = (v17 >> 8) ^ (v16 >> 19) ^ v17 ^ v16;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14) = v16;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14 + 4) = v18;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v9 = v13;
      *(_DWORD*)(v11 + 4) =
          (16 * ((_WORD)v18 -
                 1000 * (unsigned __int16)((v18 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  v19 = (_QWORD*)*a1;
  v20 = (__int64*)a1[1];
  v21 = v11 + *a1 - (_QWORD)v20;
  if (v20 != (__int64*)*a1) {
    v22 = (__int64*)*a1;
    v23 = (_QWORD*)(v11 + *a1 - (_QWORD)v20);
    do {
      v24 = *v22++;
      *v23++ = v24;
    } while (v22 != v20);
  }
  *a1 = v21;
  a1[1] = v11 + 8;
  a1[2] = v9 + 8 * v6;
  if (v19 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v25);
  }
  return v11 + 8;
}

__attribute__((swiftcall)) void game_12dd620(PSEUDO_X8 x8_, __int64 result,
                                             int a2, int a3, int a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  unsigned __int64 v6;
  __int16 v7;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  __int16 v13;

  v6 = *(_QWORD*)(result + 16);
  v5 = *(_QWORD*)(result + 24);
  if ((int)(-373475417 * ((v5 - v6) >> 4)) < 1) {
    v13 = a4 + 1;
    *(_WORD*)a5 = a2;
    *(_WORD*)(a5 + 2) = a3;
  }
  else {
    if (v6 != v5) {
      while (a2 != *(unsigned __int16*)(v6 + 4) ||
             a3 != *(unsigned __int8*)(v6 + 6) ||
             a4 != *(unsigned __int8*)(v6 + 7)) {
        v6 += 368LL;
        if (v6 == v5) {
          goto LABEL_13;
        }
      }
    }
    if (v6 != v5 && v6 != 0) {
      while (1) {
        v6 += 368LL;
        if (v6 > v5 - 368) {
          break;
        }
        if ((*(_BYTE*)v6 & 4) != 0) {
          v7 = *(_WORD*)(v6 + 4);
          v8 = *(unsigned __int8*)(v6 + 6);
          *(_DWORD*)(a5 + 6) = 0;
          *(_WORD*)(a5 + 10) = 0;
          *(_WORD*)a5 = v7;
          v9 = *(unsigned __int8*)(v6 + 7);
          *(_WORD*)(a5 + 2) = v8;
          *(_WORD*)(a5 + 4) = v9;
          {
            result;
            return;
          }
        }
      }
    }
  LABEL_13:
    v10 = *(_WORD*)(v5 - 364);
    v11 = *(unsigned __int8*)(v5 - 362);
    v12 = *(unsigned __int8*)(v5 - 361);
    *(_WORD*)a5 = v10;
    *(_WORD*)(a5 + 2) = v11;
    v13 = v12 + 1;
  }
  *(_WORD*)(a5 + 4) = v13;
  *(_DWORD*)(a5 + 6) = 0;
  *(_WORD*)(a5 + 10) = 0;
  {
    Dir_70d7a0(a5);
    return;
  }
}

unsigned __int64 game_1313be0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  unsigned __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  bool v7;
  __int64 v8;

  *(_QWORD*)(a1 + 24) = 0;
  v1 = a1 + 24;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 56) = 1065353216;
  v3 =
      fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 640, 16, 0);
  *(_QWORD*)a1 = v3;
  *(_QWORD*)(a1 + 8) = v3;
  *(_QWORD*)(a1 + 16) = v3 + 640;
  result = std___1___next_prime(80);
  v5 = *(_QWORD*)(a1 + 32);
  v6 = result;
  if (result > v5) {
    return GameRoutine_8cfec0(v1, v6);
  }
  if (result < v5) {
    v7 = v5 >= 3 && (v5 & (v5 - 1)) == 0;
    result = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 48) /
                            *(float*)(a1 + 56));
    if (v7) {
      v8 = 1LL << -(char)__clz(result - 1);
      if (result >= 2) {
        result = v8;
      }
    }
    else {
      result = std___1___next_prime(result);
    }
    if (v6 <= result) {
      v6 = result;
    }
    if (v6 < v5) {
      return GameRoutine_8cfec0(v1, v6);
    }
  }
  return result;
}

__int64 game_1373e60(__int64 result, __int64 a2, int a3, char a4, char a5)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17[3];
  struct {
    __int64 v18;
    void* v19;
    __int64 v20;
  } v18_;

  v9 = result;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_19;
  }
  v18_.v18 = 0;
  v18_.v19 = (void*)result;
  v10 = result != 0
            ? *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 24) + 1784LL) + 272LL)
            : 0LL;
  v18_.v20 = v10;
  v17[0] = 0;
  v17[1] = a2;
  v11 = a2 != 0 ? *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 24) + 1784LL) + 272LL)
                : 0LL;
  v12 = *(_QWORD*)(game_GameModeData_instance_ + 128);
  v17[2] = v11;
  result = GameReliance_8e18b0(v12, &v18_.v18, v17);
  if ((result & 1) != 0) {
    v18_.v18 = v9;
    v17[0] = a2;
    result = UnitUtil_12122d0(&v18_.v18);
    if ((result & 1) != 0) {
      result = UnitUtil_12122d0(v17);
      if ((result & 1) != 0) {
      LABEL_19:
        v13 = GameData_2241720;
        if (GameData_2241720 != 0) {
          v18_.v19 = &GameData_1abd503;
          v14 = game_HashString((__int64)&GameData_1abd503);
          v15 = game_GameModeData_instance_;
          v18_.v18 = v14;
          if (game_GameModeData_instance_ != 0) {
            v16 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v18_.v18);
            if (v16 != 0) {
              v15 = *(_DWORD*)(v16 + 32);
            }
            else {
              v15 = 0;
            }
          }
          return GameRoutine_17cc240(v13, v9, a2, a3, a3 >= v15, a4 & 1,
                                     a5 & 1);
        }
      }
    }
  }
  return result;
}

__int64 game_1374320(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  bool v23;
  float v24;
  __int64 result;
  struct {
    __int64 v26;
    int v27;
  } v26_;
  _QWORD v28[25];

  v2 = GameData_22736d0;
  if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 2 &&
      ((LayoutAccessor_155ea30((__int64*)(GameData_22736d0 + 168)) & 1) != 0 ||
       *(_DWORD*)(v2 + 624) != 1)) {
    LayoutAccessor_155cda0((__int64*)(v2 + 272), (__int64)"Out", nullptr);
    if (*(_DWORD*)(v2 + 624) == 1) {
      v3 = 2;
    }
    else {
      LayoutAccessor_155d940((__int64*)(v2 + 272));
      LayoutAccessor_155e830((__int64*)(v2 + 168), 0);
      v3 = 1;
    }
    *(_DWORD*)(v2 + 624) = v3;
  }
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 208LL))(a1);
  LayoutAccessor_1562680((__int64*)(a1 + 168), v4, 0x1.0000000000000p+0f);
  v6 = *(_QWORD*)(a1 + 344);
  v5 = *(_QWORD*)(a1 + 352);
  while (v6 != v5) {
    if ((*(_BYTE*)v6 & 1) != 0) {
      v7 = *(_QWORD*)(v6 + 16);
    }
    else {
      v7 = v6 + 1;
    }
    if (v7 != 0) {
      snd_Fade_Fade_10c830((__int64)v28, 0x0.0p+0f);
      snd_play_ff2d0(v7, v7, (__int64)v28, 0, 0x10001u, 0, 0x0.0p+0f,
                     0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v28);
    }
    v6 += 24;
  }
  v8 = *(unsigned __int8*)(a1 + 392);
  v9 = *(_QWORD*)(a1 + 400);
  if ((v8 & 1) == 0) {
    v9 = v8 >> 1;
  }
  if (v9 != 0) {
    if ((v8 & 1) != 0) {
      v10 = *(_QWORD*)(a1 + 408);
    }
    else {
      v10 = a1 + 393;
    }
    if (v10 != 0) {
      snd_Fade_Fade_10c830((__int64)v28, 0x0.0p+0f);
      snd_play_ff2d0(v10, v10, (__int64)v28, 0, 0x10001u, 0, 0x0.0p+0f,
                     0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v28);
    }
    else {
      v26_.v26 = 0;
      v26_.v27 = 0x2000;
    }
    GameRoutine_112180(a1 + 424, (__int64)&v26_.v26);
  }
  if (*(_BYTE*)(a1 + 338) != 1) {
    goto LABEL_43;
  }
  if (game_gameui_Header_instance_ == 0 ||
      (LayoutAccessor_155ea30((__int64*)(game_gameui_Header_instance_ + 168)) &
       1) == 0) {
    if (GameData_2259540 == 0) {
      goto LABEL_43;
    }
    v11 = *(_QWORD*)(GameData_2259540 + 40);
    if (v11 == 0) {
      goto LABEL_43;
    }
    v12 = __dynamic_cast(v11, GameData_212c610, &GameData_205c4b8, 0);
    if (v12 == 0) {
      goto LABEL_43;
    }
    v13 = GameData_212c610;
    while (1) {
      if (*(int*)(v12 + 300) <= 0) {
        v15 = *(_QWORD*)(v12 + 8);
        v14 = *(_QWORD*)(v12 + 16);
        if (v15 > v14) {
          break;
        }
        while (*(_BYTE*)v14 != 2) {
          v14 -= 64LL;
          if (v15 > v14) {
            goto LABEL_30;
          }
        }
        if (*(_DWORD*)(v14 + 32) != 2) {
          break;
        }
      }
      v16 = *(_QWORD*)(v12 + 56);
      if (v16 != 0) {
        v12 = __dynamic_cast(v16, v13, &GameData_205c4b8, 0);
        if (v12 != 0) {
          continue;
        }
      }
      goto LABEL_43;
    }
  }
LABEL_30:
  *(_BYTE*)(a1 + 337) = 1;
LABEL_43:
  v17 = *(_QWORD*)(a1 + 176);
  if (v17 == 0) {
    goto LABEL_49;
  }
  v18 = std___1___shared_weak_count_lock(v17);
  if (v18 == 0) {
    goto LABEL_49;
  }
  v19 = *(_QWORD*)(a1 + 168);
  if (v19 != 0) {
    LODWORD(v6) = *(_DWORD*)(v19 + 2372);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v19 != 0) {
      goto LABEL_50;
    }
    goto LABEL_49;
  }
  (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
  std___1___shared_weak_count___release_weak();
  if (v19 == 0) {
  LABEL_49:
    LODWORD(v6) = 0;
  }
LABEL_50:
  v20 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 144LL))(a1);
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 152LL))(a1);
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 160LL))(a1);
  v23 = v20 == 5 || v21 == 2;
  if (!v23 && GameData_2259540 != 0) {
    game_gameui_anonymous_ProcGameUIFade_In(GameData_2259540, v6 - 1, v20, v21,
                                            v22, 0);
  }
  v24 = *(float*)(a1 + 328);
  *(_DWORD*)(a1 + 420) = 0;
  if (v24 <= 0x0.0p+0f) {
    *(_DWORD*)(a1 + 328) = 1090519040;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 280LL))(a1);
  if (*(_DWORD*)(a1 + 320) == 2 && (*(_BYTE*)(a1 + 820) & 1) == 0) {
    result = GameRoutine_1553130(10);
    *(_DWORD*)(a1 + 816) = 10;
    *(_BYTE*)(a1 + 820) = 1;
  }
  return result;
}

__attribute__((swiftcall)) void game_1391af0(PSEUDO_X8 x8_, __int64 result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned int v3;
  __int64 v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _BYTE* v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v3 = *(unsigned __int16*)(result + 40);
  if (*(_WORD*)(result + 40) != 0) {
    v4 = result;
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v9 = *(_BYTE**)(*(_QWORD*)(v4 + 48) + 8 * v6);
      if (v9 != nullptr && *v9 != 0) {
        v10 = a2[2];
        if ((unsigned __int64)v5 < v10) {
          *(_QWORD*)v5 = v9;
          v5 += 8;
        }
        else {
          v11 = &v5[-v7];
          v12 = (__int64)&v5[-v7] >> 3;
          v13 = v12 + 1;
          if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
            *a2 = v7;
            GameRoutine_60f930(result);
          }
          v14 = v10 - v7;
          if (v14 >> 2 > v13) {
            v13 = v14 >> 2;
          }
          if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
            v15 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v15 = v13;
          }
          if (v15 != 0) {
            if (v15 >> 61 != 0) {
              *a2 = v7;
              GameRoutine_60a210(result);
            }
            v16 = fw_memory_HeapManager_Allocate_alt1(*v8, 8 * v15, 16, 0);
          }
          else {
            v16 = 0;
          }
          v17 = v16 + 8 * v15;
          v18 = &v5[-v7];
          v19 = (__int64)&v11[v16 + -8 * v12];
          *(_QWORD*)&v11[v16] = v9;
          v5 = &v11[v16 + 8];
          result = memcpy(v19, v7, v18);
          a2[1] = (__int64)v5;
          a2[2] = v17;
          if (v7 != 0) {
            v20 = 128;
            if (*(_QWORD*)(*v8 + 200LL) == 0) {
              v20 = 56;
            }
            result = nn_mem_StandardAllocator_Free_alt1(*v8 + v20);
          }
          v7 = v19;
        }
        v3 = *(unsigned __int16*)(v4 + 40);
        a2[1] = (__int64)v5;
      }
      ++v6;
    } while (v6 < v3);
  }
  else {
    v7 = 0;
  }
  *a2 = v7;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_1391c60(PSEUDO_X8 x8_, __int64 result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned int v3;
  __int64 v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _BYTE* v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v3 = *(unsigned __int16*)(result + 56);
  if (*(_WORD*)(result + 56) != 0) {
    v4 = result;
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v9 = *(_BYTE**)(*(_QWORD*)(v4 + 64) + 8 * v6);
      if (v9 != nullptr && *v9 != 0) {
        v10 = a2[2];
        if ((unsigned __int64)v5 < v10) {
          *(_QWORD*)v5 = v9;
          v5 += 8;
        }
        else {
          v11 = &v5[-v7];
          v12 = (__int64)&v5[-v7] >> 3;
          v13 = v12 + 1;
          if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
            *a2 = v7;
            GameRoutine_60f930(result);
          }
          v14 = v10 - v7;
          if (v14 >> 2 > v13) {
            v13 = v14 >> 2;
          }
          if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
            v15 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v15 = v13;
          }
          if (v15 != 0) {
            if (v15 >> 61 != 0) {
              *a2 = v7;
              GameRoutine_60a210(result);
            }
            v16 = fw_memory_HeapManager_Allocate_alt1(*v8, 8 * v15, 16, 0);
          }
          else {
            v16 = 0;
          }
          v17 = v16 + 8 * v15;
          v18 = &v5[-v7];
          v19 = (__int64)&v11[v16 + -8 * v12];
          *(_QWORD*)&v11[v16] = v9;
          v5 = &v11[v16 + 8];
          result = memcpy(v19, v7, v18);
          a2[1] = (__int64)v5;
          a2[2] = v17;
          if (v7 != 0) {
            v20 = 128;
            if (*(_QWORD*)(*v8 + 200LL) == 0) {
              v20 = 56;
            }
            result = nn_mem_StandardAllocator_Free_alt1(*v8 + v20);
          }
          v7 = v19;
        }
        v3 = *(unsigned __int16*)(v4 + 56);
        a2[1] = (__int64)v5;
      }
      ++v6;
    } while (v6 < v3);
  }
  else {
    v7 = 0;
  }
  *a2 = v7;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_1391f60(PSEUDO_X8 x8_, __int64 result)
{
  unsigned __int8* a2 = (unsigned __int8*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[2];
  char* v11;

  v3 = GameData_21f4000;
  if (GameData_21f4000 == 0) {
    *(_WORD*)a2 = 0;
    {
      result;
      return;
    }
  }
  v4 = *(_QWORD*)(result + 8);
  v5 = strlen(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v5);
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
    v10[1] = v6;
    v11 = v7;
    v10[0] = v8 | 1;
  }
  else {
    LOBYTE(v10[0]) = 2 * v5;
    v7 = (char*)v10 + 1;
    if (v5 == 0) {
      goto LABEL_12;
    }
  }
  memmove(v7, v4, v6);
LABEL_12:
  v7[v6] = 0;
  result =
      X8CALL_X0(__int64, SceneManager_138e780((void*)(a2), v3, (__int64)v10));
  if ((v10[0] & 1) != 0 && v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_13d2c60(PSEUDO_X8 x8_,
                                             unsigned __int16* result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int16* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (*result != 0) {
    v3 = 8;
    v4 = result;
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    do {
      v9 = *(_QWORD*)(*((_QWORD*)v4 + 1) + v3);
      v10 = a2[2];
      if ((unsigned __int64)v5 < v10) {
        *(_QWORD*)v5 = v9;
        v5 += 8;
      }
      else {
        v11 = &v5[-v7];
        v12 = (__int64)&v5[-v7] >> 3;
        v13 = v12 + 1;
        if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
          *a2 = v7;
          GameRoutine_13cf650();
        }
        v14 = v10 - v7;
        if (v14 >> 2 > v13) {
          v13 = v14 >> 2;
        }
        if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
          v15 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v15 = v13;
        }
        if (v15 != 0) {
          if (v15 >> 61 != 0) {
            *a2 = v7;
            GameRoutine_60a210(result);
          }
          v16 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
        }
        else {
          v16 = 0;
        }
        v17 = v16 + 8 * v15;
        v18 = &v5[-v7];
        v19 = (__int64)&v11[v16 + -8 * v12];
        *(_QWORD*)&v11[v16] = v9;
        v5 = &v11[v16 + 8];
        result = (unsigned __int16*)memcpy(v19, v7, v18);
        a2[1] = (__int64)v5;
        a2[2] = v17;
        if (v7 != 0) {
          v20 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v20 = 56;
          }
          result = (unsigned __int16*)nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
        }
        v7 = v19;
      }
      v8 = *v4;
      ++v6;
      v3 += 16;
      a2[1] = (__int64)v5;
    } while (v6 < v8);
  }
  else {
    v7 = 0;
  }
  *a2 = v7;
  {
    result;
    return;
  }
}

void game_13da3a0(__int64 a1)
{
  int* v1;
  int* v2;
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  int v14;
  _QWORD* v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64** v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  int v27;
  unsigned int v28;
  __int64** v29;
  unsigned __int64 v30;
  int v31;
  __int64 (***v32)();
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned int v36;
  unsigned __int64 v37;
  __int64 (***v38)();
  int v39;
  __int64 v40;
  __int64 v41;
  bool v42;
  __int64 v43;
  __int64 (***v44)();
  _QWORD* v45;
  unsigned int v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  unsigned __int64 v51;
  struct {
    _QWORD v52[2];
    __int64 v53;
  } v52_;
  _QWORD v54[11];

  v1 = *(int**)(a1 + 32);
  v2 = *(int**)(a1 + 40);
  if (v1 == v2) {
    v4 = 0;
  }
  else {
    v4 = 0;
    do {
      v5 = *v1;
      v6 = v1[1];
      v1 += 3;
      v7 = (v6 + v5) & ~((v6 + v5) >> 31);
      if (v7 >= 100) {
        v7 = 100;
      }
      v4 += v7;
    } while (v1 != v2);
  }
  v8 = GameRoutine_13e3f40(v4, *(_BYTE*)(*(_QWORD*)(a1 + 24) + 72LL) == 3);
  *(_DWORD*)(a1 + 56) = v8;
  v9 = GameRoutine_13e5e80(*(_QWORD*)(a1 + 24), v8);
  v10 = *(_DWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 64) = v9;
  if (v10 == 3) {
    if (GameData_2246cb0 != 0) {
      *(_QWORD*)(GameData_2246cb0 + 160) = *(_QWORD*)(GameData_2246cb0 + 152);
    }
    v11 = *(__int64**)a1;
    v12 = *(__int64**)(a1 + 8);
    if (*(__int64**)a1 != v12) {
      do {
        v13 = *v11;
        if (*v11 != 0) {
          v14 = *(char*)(v13 + 2090);
          v15 = (_QWORD*)GameData_2246cb0;
          v16 = v14 <= -1 ? -1 : *(char*)(v13 + 2090);
          v17 = (unsigned int)(v16 + 1) < 3 ? v16 + 1 : 3;
          *(_BYTE*)(v13 + 2090) = v17;
          if (v15 != nullptr) {
            GameRoutine_1464bd0(v15, v13, v14, v17);
          }
        }
        ++v11;
      } while (v11 != v12);
    }
    v9 = *(_QWORD*)(a1 + 64);
  }
  if (v9 != 0) {
    if (game_GameModeData_instance_ != 0) {
      v18 = *(_DWORD*)(game_GameModeData_instance_ + 72) +
            *(unsigned __int16*)(v9 + 32);
      v19 = v18 & ~(v18 >> 31);
      if (v19 >= 9999999) {
        v19 = 9999999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 72) = v19;
      v9 = *(_QWORD*)(a1 + 64);
    }
    v20 = game_13e5d30(v9);
    if (v20 != 0) {
      *(_QWORD*)(a1 + 72) = v20;
    }
  }
  v21 = (__int64**)a1;
  v22 = *(unsigned __int16*)(*(_QWORD*)(a1 + 64) + 36LL);
  v54[3] = v54[7];
  v54[4] = v54[8];
  v54[10] = v54[9];
  v23 = game_RelianceCheck_unknown_;
  v24 = *(_QWORD*)game_RelianceCheck_unknown_;
  *(_DWORD*)(game_RelianceCheck_unknown_ + 24) = 0;
  *(_QWORD*)(v23 + 8) = v24;
  v25 = *(__int64**)a1;
  v26 = *(__int64**)(a1 + 8);
  if (v26 != *(__int64**)a1) {
    v27 = 2;
    v28 = v22;
    v29 = v21;
    v30 = 0;
    v31 = 0;
    v32 = GameData_212dae8;
    while (1) {
      v33 = v30;
      v30 = (unsigned int)(v31 + 1);
      v34 = v26 - v25;
      if (v34 > v30) {
        break;
      }
    LABEL_34:
      ++v27;
      v31 = v30;
      if (v34 <= v30) {
        goto LABEL_56;
      }
    }
    v35 = v25[v33];
    v36 = v27;
    v51 = (unsigned int)(v31 + 1);
    v37 = v51;
    while (1) {
      v40 = v25[v37];
      if (v35 == v40) {
        goto LABEL_39;
      }
      v54[0] = v35;
      v54[1] = 0;
      v54[2] = 0;
      if (v35 != 0) {
        v41 = *(_QWORD*)(v35 + 392);
        v54[1] = v41;
        if (v41 != 0) {
          v41 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v41 + 24) + 1784LL) + 272LL);
        }
        v54[2] = v41;
        v42 = v41 == 0;
        v52_.v52[0] = v40;
        if (v40 == 0) {
          goto LABEL_37;
        }
      }
      else {
        v42 = true;
        v52_.v52[0] = v40;
        if (v40 == 0) {
          goto LABEL_37;
        }
      }
      v43 = *(_QWORD*)(v40 + 392);
      v52_.v52[1] = v43;
      if (v43 != 0) {
        v52_.v53 =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v43 + 24) + 1784LL) + 272LL);
        if (v52_.v53 == 0) {
          v42 = true;
        }
        if (!v42) {
          v44 = v32;
          v45 = *(_QWORD**)(game_GameModeData_instance_ + 128);
          v46 = GameReliance_8e17a0(v45, (__int64)v54, (__int64)v52_.v52);
          if ((v46 & 0x80000000) != 0) {
            v32 = v44;
            v38 = v44;
            if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v44 + 2) == 0) {
              goto LABEL_39;
            }
          }
          else {
            v47 = v45[1];
            v32 = v44;
            v38 = (__int64 (***)(void))(v47 + 56LL * v46);
            if (*((_BYTE*)v38 + 10) == 0) {
              goto LABEL_39;
            }
          }
        LABEL_38:
          v39 = ((__int64 (*)(__int64 (***)(void), _QWORD, __int64))(*v38)[2])(
              v38, v28, 1);
          RelianceCheck_19a7f00(*(_QWORD*)(v35 + 392), *(_QWORD*)(v40 + 392),
                                v39);
          goto LABEL_39;
        }
      }
    LABEL_37:
      v38 = v32;
      if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v32 + 2) != 0) {
        goto LABEL_38;
      }
    LABEL_39:
      v25 = *v29;
      v26 = v29[1];
      v37 = v36++;
      v34 = v26 - *v29;
      if (v34 <= v37) {
        v30 = v51;
        goto LABEL_34;
      }
    }
  }
LABEL_56:
  v48 = *(__int64**)(*(_QWORD*)GameData_212c7b8[0] + 16LL);
  v49 = *(__int64**)(*(_QWORD*)GameData_212c7b8[0] + 24LL);
  while (v48 != v49) {
    v50 = *v48++;
    GameSideStoryData_12b3d60(v50);
  }
}

__int64 game_13da730(__int64 result, __int64 a2, __n128 a3)
{
  __int64 v3;
  __int64 v4;
  __int64* v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = *(_QWORD*)(result + 72);
  if (v3 != 0) {
    v4 = *(unsigned __int16*)(v3 + 16);
    v16 = 0x100000000LL;
    LOWORD(v16) = v4;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v4) +
                  73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v6 = game_map_MapRandom_instance__ptr[0];
      v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL));
      v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v9 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
           (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v6 + 1) = v7;
      v10 = (v9 >> 8) ^ (v8 >> 19) ^ v9 ^ v8;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6) = v8;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4) = v10;
      a3 = nn_os_UnlockMutex_alt1(&game_g_random_mutex);
      HIDWORD(v16) =
          (16 * ((_WORD)v10 -
                 1000 * (unsigned __int16)((v10 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    v14 = 0;
    v15 = 0;
    v12 = "MID_TheaterActMenu_GetFunItem_Result";
    v13 = 0;
    if ((_DWORD)v4 != 0) {
      game_8aef60(&v13, &v16);
    }
    result = ItemSeq_8af940(a2, &v13, 0, &v12, game_vstring_kEmpty_ptr[0], 0,
                            *(long double*)&a3);
    if (v13 != 0) {
      v14 = v13;
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
    }
  }
  return result;
}

void game_13dabb0(__int64 a1)
{
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
  int v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  _QWORD* v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  _QWORD* v26;
  int v27;
  int v28;
  unsigned __int64 v29[2];

  *(_WORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 44) = 0;
  v2 = GameData_2246cb0;
  *(_QWORD*)(a1 + 56) = 0;
  if (v2 != 0) {
    *(_QWORD*)(v2 + 160) = *(_QWORD*)(v2 + 152);
  }
  v3 = **(_QWORD**)(a1 + 8);
  if (v3 != 0) {
    v3 = *(_QWORD*)(v3 + 392);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v3 + 288);
      if (v4 == 0) {
        goto LABEL_10;
      }
      v5 = *(_QWORD*)(a1 + 32);
      v6 = GameRoutine_975940(v4);
      if (v6 == 0 || *(unsigned __int16*)(v5 + 16) >=
                         (unsigned int)*(unsigned __int16*)(v6 + 192)) {
        goto LABEL_10;
      }
      LODWORD(v3) = *(unsigned __int8*)(*(_QWORD*)(v6 + 200) +
                                        *(unsigned __int16*)(v5 + 16));
      if ((_DWORD)v3 == 5) {
        LOBYTE(v3) = 2;
        goto LABEL_11;
      }
      if ((_DWORD)v3 == 4) {
      LABEL_10:
        LOBYTE(v3) = 0;
      }
    }
  }
LABEL_11:
  *(_BYTE*)(a1 + 40) = v3;
  v7 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (v7 != 0) {
    v7 = *(_QWORD*)(v7 + 392);
    if (v7 == 0) {
      goto LABEL_19;
    }
    v8 = *(_QWORD*)(v7 + 288);
    if (v8 == 0 ||
        (v9 = *(_QWORD*)(a1 + 32), (v10 = GameRoutine_975940(v8)) == 0) ||
        *(unsigned __int16*)(v9 + 16) >=
            (unsigned int)*(unsigned __int16*)(v10 + 192)) {
    LABEL_18:
      LODWORD(v7) = 0;
      goto LABEL_19;
    }
    LODWORD(v7) = *(unsigned __int8*)(*(_QWORD*)(v10 + 200) +
                                      *(unsigned __int16*)(v9 + 16));
    if ((_DWORD)v7 != 5) {
      if ((_DWORD)v7 != 4) {
        goto LABEL_19;
      }
      goto LABEL_18;
    }
    LODWORD(v7) = 2;
  }
LABEL_19:
  v11 = *(unsigned __int8*)(a1 + 40);
  *(_BYTE*)(a1 + 41) = v7;
  if (v11 == (_DWORD)v7) {
    if ((v7 & 0xFE) == 2) {
      v12 = 3;
    }
    else {
      v12 = 1;
    }
  }
  else {
    v12 = (v11 & 0xFFFFFFFB) != 0 && (v7 & 0xFB) != 0;
  }
  *(_DWORD*)(a1 + 44) = v12;
  *(_QWORD*)(a1 + 56) = FacilityDialogueFile_196e860(
      0, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 392LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 392LL));
  GameRoutine_94a480();
  v29[1] = (unsigned __int64)&GameData_1ada574;
  v29[0] = game_HashString((__int64)&GameData_1ada574);
  if (game_GameModeData_instance_ != 0 &&
      (v13 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48), v29)) != 0) {
    v14 = *(_DWORD*)(v13 + 32);
  }
  else {
    v14 = 0;
  }
  v15 = GameRoutine_9db9e0(0x14u, v14);
  if (game_GameModeData_instance_ != 0) {
    v16 = (*(_DWORD*)(game_GameModeData_instance_ + 72) - v15) &
          ~((*(_DWORD*)(game_GameModeData_instance_ + 72) - v15) >> 31);
    if (v16 >= 9999999) {
      v16 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v16;
  }
  GameRoutine_13dae60(a1);
  v17 = **(_QWORD**)(a1 + 8);
  if ((unsigned int)*(unsigned __int8*)(a1 + 40) - 1 > 2) {
    v18 = 0;
    if (v17 == 0) {
      goto LABEL_43;
    }
  }
  else {
    v18 = GameData_1bcc47c[(unsigned __int8)(*(_BYTE*)(a1 + 40) - 1)];
    if (v17 == 0) {
      goto LABEL_43;
    }
  }
  v19 = *(char*)(v17 + 2090);
  v20 = (_QWORD*)GameData_2246cb0;
  v21 = (v18 + v19) & ~((v18 + v19) >> 31);
  if (v21 >= 3) {
    v22 = 3;
  }
  else {
    v22 = v21;
  }
  *(_BYTE*)(v17 + 2090) = v22;
  if (v20 != nullptr) {
    GameRoutine_1464bd0(v20, v17, v19, v22);
  }
LABEL_43:
  v23 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if ((unsigned int)*(unsigned __int8*)(a1 + 41) - 1 > 2) {
    v24 = 0;
    if (v23 == 0) {
      return;
    }
  }
  else {
    v24 = GameData_1bcc47c[(unsigned __int8)(*(_BYTE*)(a1 + 41) - 1)];
    if (v23 == 0) {
      return;
    }
  }
  v25 = *(char*)(v23 + 2090);
  v26 = (_QWORD*)GameData_2246cb0;
  v27 = (v24 + v25) & ~((v24 + v25) >> 31);
  if (v27 >= 3) {
    v28 = 3;
  }
  else {
    v28 = v27;
  }
  *(_BYTE*)(v23 + 2090) = v28;
  if (v26 != nullptr) {
    GameRoutine_1464bd0(v26, v23, v25, v28);
  }
}

__int64 game_13e36c0(__int64 result, __int64 a2)
{
  unsigned __int8* v2;
  int v3;
  _QWORD* v4;
  _BYTE* v5;
  _BYTE* v6;
  _BYTE* v7;
  __int64 v8;
  _BYTE* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _BYTE* v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  int v22;
  _BYTE* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _BYTE* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _BYTE* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _BYTE* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _BYTE* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _BYTE* v47;
  __int64 v48;
  unsigned int v49;
  __int64* v50;
  __int64 v51;
  char* v52;
  int v53;
  unsigned int v54;
  unsigned int v55;
  int v56;
  unsigned int v57;
  char v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  int v62;
  unsigned int v63;
  unsigned __int8 v64;
  int v65;
  int v66;
  unsigned int v67;
  unsigned int v68;
  int v69;
  unsigned int v70;
  unsigned __int8 v71;
  int v72;
  int v73;
  unsigned int v74;
  unsigned int v75;
  int v76;
  unsigned int v77;
  unsigned __int8 v78;
  int v79;
  __int64 v80;

  *(_QWORD*)(result + 8) = a2;
  *(_BYTE*)(result + 2) = 8;
  *(_WORD*)result = 2056;
  if (a2 == 0) {
    return result;
  }
  v2 = (unsigned __int8*)result;
  v3 = *(unsigned __int8*)(*(_QWORD*)(a2 + 24) + 36LL);
  *(_BYTE*)result = v3;
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = (_BYTE*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1, 16, 0);
    *v5 = 0;
    v6 = v5 + 1;
    v7 = v5;
    v8 = (__int64)v5;
    v9 = v5 + 1;
    if (v3 == 1) {
      goto LABEL_23;
    }
  }
  else {
    v7 = nullptr;
    v6 = nullptr;
  }
  v10 = v6 - v7;
  v11 = v6 - v7 + 1;
  if (v11 < 0) {
    goto LABEL_116;
  }
  if (2 * v10 > v11) {
    v11 = 2 * v10;
  }
  if (v10 >= 0x3FFFFFFFFFFFFFFFLL) {
    v12 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else {
    v12 = v11;
  }
  if (v12 != 0) {
    v8 = fw_memory_HeapManager_Allocate_alt1(*v4, v12, 16, 0);
  }
  else {
    v8 = 0;
  }
  v13 = v8 + v10;
  v9 = (_BYTE*)(v8 + v12);
  v14 = (_BYTE*)(v6 - v7);
  *(_BYTE*)(v8 + v10) = 1;
  v6 = (_BYTE*)(v8 + v10 + 1);
  memcpy(v8, v7, v14);
  if (v7 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v4 + v15);
    v3 = *v2;
  }
  if (v3 == 2) {
    goto LABEL_35;
  }
  if (v6 < v9) {
    v6 = (_BYTE*)(v13 + 2);
    *(_BYTE*)(v13 + 1) = 2;
    goto LABEL_35;
  }
LABEL_23:
  v16 = &v6[-v8];
  v17 = (__int64)&v6[-v8 + 1];
  if (v17 < 0) {
    goto LABEL_116;
  }
  if (2 * (__int64)&v9[-v8] > (unsigned __int64)v17) {
    v17 = 2LL * (_QWORD)&v9[-v8];
  }
  if ((unsigned __int64)&v9[-v8] >= 0x3FFFFFFFFFFFFFFFLL) {
    v18 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v17;
  }
  if (v18 != 0) {
    v19 = fw_memory_HeapManager_Allocate_alt1(*v4, v18, 16, 0);
  }
  else {
    v19 = 0;
  }
  v9 = (_BYTE*)(v19 + v18);
  v20 = &v6[-v8];
  v16[v19] = 2;
  v6 = &v16[v19 + 1];
  memcpy(v19, v8, v20);
  v21 = 128;
  if (*(_QWORD*)(*v4 + 200LL) == 0) {
    v21 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*v4 + v21);
  v8 = v19;
LABEL_35:
  v22 = *v2;
  if (v22 == 3) {
    goto LABEL_120;
  }
  if (v6 >= v9) {
    v23 = &v6[-v8];
    v24 = (__int64)&v6[-v8 + 1];
    if (v24 < 0) {
      goto LABEL_116;
    }
    if (2 * (__int64)&v9[-v8] > (unsigned __int64)v24) {
      v24 = 2LL * (_QWORD)&v9[-v8];
    }
    if ((unsigned __int64)&v9[-v8] >= 0x3FFFFFFFFFFFFFFFLL) {
      v25 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v25 = v24;
    }
    if (v25 != 0) {
      v26 = fw_memory_HeapManager_Allocate_alt1(*v4, v25, 16, 0);
    }
    else {
      v26 = 0;
    }
    v6 = &v23[v26];
    v9 = (_BYTE*)(v26 + v25);
    v23[v26] = 3;
    memcpy(v26, v8, v23);
    v27 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v4 + v27);
    v22 = *v2;
    v8 = v26;
  }
  else {
    *v6 = 3;
  }
  ++v6;
  if (v22 != 4) {
  LABEL_120:
    if (v6 >= v9) {
      v28 = &v6[-v8];
      v29 = (__int64)&v6[-v8 + 1];
      if (v29 < 0) {
        goto LABEL_116;
      }
      if (2 * (__int64)&v9[-v8] > (unsigned __int64)v29) {
        v29 = 2LL * (_QWORD)&v9[-v8];
      }
      if ((unsigned __int64)&v9[-v8] >= 0x3FFFFFFFFFFFFFFFLL) {
        v30 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v30 = v29;
      }
      if (v30 != 0) {
        v31 = fw_memory_HeapManager_Allocate_alt1(*v4, v30, 16, 0);
      }
      else {
        v31 = 0;
      }
      v6 = &v28[v31];
      v9 = (_BYTE*)(v31 + v30);
      v28[v31] = 4;
      memcpy(v31, v8, v28);
      v32 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v32);
      v8 = v31;
    }
    else {
      *v6 = 4;
    }
    ++v6;
    if (*v2 == 5) {
      goto LABEL_119;
    }
  }
  if (v6 >= v9) {
    v33 = &v6[-v8];
    v34 = (__int64)&v6[-v8 + 1];
    if (v34 < 0) {
      goto LABEL_116;
    }
    if (2 * (__int64)&v9[-v8] > (unsigned __int64)v34) {
      v34 = 2LL * (_QWORD)&v9[-v8];
    }
    if ((unsigned __int64)&v9[-v8] >= 0x3FFFFFFFFFFFFFFFLL) {
      v35 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v35 = v34;
    }
    if (v35 != 0) {
      v36 = fw_memory_HeapManager_Allocate_alt1(*v4, v35, 16, 0);
    }
    else {
      v36 = 0;
    }
    v6 = &v33[v36];
    v9 = (_BYTE*)(v36 + v35);
    v33[v36] = 5;
    memcpy(v36, v8, v33);
    v37 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v4 + v37);
    v8 = v36;
  }
  else {
    *v6 = 5;
  }
  ++v6;
  if (*v2 != 6) {
  LABEL_119:
    if (v6 >= v9) {
      v38 = &v6[-v8];
      v39 = (__int64)&v6[-v8 + 1];
      if (v39 < 0) {
        goto LABEL_116;
      }
      if (2 * (__int64)&v9[-v8] > (unsigned __int64)v39) {
        v39 = 2LL * (_QWORD)&v9[-v8];
      }
      if ((unsigned __int64)&v9[-v8] >= 0x3FFFFFFFFFFFFFFFLL) {
        v40 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v40 = v39;
      }
      if (v40 != 0) {
        v41 = fw_memory_HeapManager_Allocate_alt1(*v4, v40, 16, 0);
      }
      else {
        v41 = 0;
      }
      v6 = &v38[v41];
      v9 = (_BYTE*)(v41 + v40);
      v38[v41] = 6;
      memcpy(v41, v8, v38);
      v42 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v42);
      v8 = v41;
    }
    else {
      *v6 = 6;
    }
    ++v6;
    if (*v2 == 7) {
    LABEL_110:
      v49 = (_DWORD)v6 - v8;
      v50 = game_map_MapRandom_instance__ptr[0];
      if ((int)v6 - (int)v8 > 0) {
        v51 = v49 & 0x7FFFFFFF;
        v52 = (char*)v8;
        do {
          nn_os_LockMutex(&game_g_random_mutex);
          v53 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v50 + 8);
          v54 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v50 + 12);
          v55 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v50) ^
                (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v50) << 11);
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v50) =
              *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v50 + 4);
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v50 + 4) = v53;
          v56 = (v55 >> 8) ^ (v54 >> 19) ^ v55 ^ v54;
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v50 + 8) = v54;
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v50 + 12) = v56;
          v57 = v56 & 0x7FFFFFFF;
          nn_os_UnlockMutex_alt1(&game_g_random_mutex);
          v58 = *v52;
          --v51;
          *v52++ = *(_BYTE*)(v8 + v57 % v49);
          *(_BYTE*)(v8 + v57 % v49) = v58;
        } while (v51 != 0);
      }
      v2[1] = *(v6 - 1);
      v2[2] = *(v6 - 2);
      nn_os_LockMutex(&game_g_random_mutex);
      v59 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50);
      v60 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50 + 4);
      v61 = *(_DWORD*)v50 ^ (*(_DWORD*)v50 << 11);
      *(_DWORD*)v50 = *((_DWORD*)v50 + 1);
      *((_DWORD*)v50 + 1) = v59;
      v62 = (v61 >> 8) ^ (v60 >> 19) ^ v61 ^ v60;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50) = v60;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50 + 4) = v62;
      v63 = v62 & 0x7FFFFFFF;
      nn_os_UnlockMutex_alt1(&game_g_random_mutex);
      v64 = *v2;
      v65 = v63 - 3 * ((1431655766 * (unsigned __int64)v63) >> 32);
      *v2 = v2[v65];
      v2[v65] = v64;
      nn_os_LockMutex(&game_g_random_mutex);
      v66 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50);
      v67 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50 + 4);
      v68 = *(_DWORD*)v50 ^ (*(_DWORD*)v50 << 11);
      *(_DWORD*)v50 = *((_DWORD*)v50 + 1);
      *((_DWORD*)v50 + 1) = v66;
      v69 = (v68 >> 8) ^ (v67 >> 19) ^ v68 ^ v67;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50) = v67;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50 + 4) = v69;
      v70 = v69 & 0x7FFFFFFF;
      nn_os_UnlockMutex_alt1(&game_g_random_mutex);
      v71 = v2[1];
      v72 = v70 - 3 * ((1431655766 * (unsigned __int64)v70) >> 32);
      v2[1] = v2[v72];
      v2[v72] = v71;
      nn_os_LockMutex(&game_g_random_mutex);
      v73 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50);
      v74 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50 + 4);
      v75 = *(_DWORD*)v50 ^ (*(_DWORD*)v50 << 11);
      *(_DWORD*)v50 = *((_DWORD*)v50 + 1);
      *((_DWORD*)v50 + 1) = v73;
      v76 = (v75 >> 8) ^ (v74 >> 19) ^ v75 ^ v74;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50) = v74;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50 + 4) = v76;
      v77 = v76 & 0x7FFFFFFF;
      nn_os_UnlockMutex_alt1(&game_g_random_mutex);
      v78 = v2[2];
      v79 = v77 - 3 * ((1431655766 * (unsigned __int64)v77) >> 32);
      v2[2] = v2[v79];
      v2[v79] = v78;
      v80 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v80 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(*v4 + v80);
    }
  }
  if (v6 < v9) {
    *v6++ = 7;
    goto LABEL_110;
  }
  v43 = &v6[-v8];
  v44 = (__int64)&v6[-v8 + 1];
  if (v44 >= 0) {
    if (2 * (__int64)&v9[-v8] > (unsigned __int64)v44) {
      v44 = 2LL * (_QWORD)&v9[-v8];
    }
    if ((unsigned __int64)&v9[-v8] >= 0x3FFFFFFFFFFFFFFFLL) {
      v45 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v45 = v44;
    }
    if (v45 != 0) {
      v46 = fw_memory_HeapManager_Allocate_alt1(*v4, v45, 16, 0);
    }
    else {
      v46 = 0;
    }
    v47 = &v6[-v8];
    v43[v46] = 7;
    v6 = &v43[v46 + 1];
    memcpy(v46, v8, v47);
    v48 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v4 + v48);
    v8 = v46;
    goto LABEL_110;
  }
LABEL_116:
  GameRoutine_13e9e90();
}

char* game_13e3e50(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2;
  const char* v3;
  __int64* v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;

  if (a2 >= 3) {
    String_60a250("array::at");
  }
  v2 = *(unsigned __int8*)(a1 + a2);
  if (v2 > 7) {
    return &GameData_1a9f09e;
  }
  v3 = GameData_2037240[v2];
  nn_os_LockMutex(&game_g_random_mutex);
  v4 = game_map_MapRandom_instance__ptr[0];
  v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v7 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v4 + 1) = v5;
  v8 = (v7 >> 8) ^ (v6 >> 19) ^ v7 ^ v6;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) = v6;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4 + 4) = v8;
  v9 = v8 & 0x7FFFFFFF;
  nn_os_UnlockMutex_alt1(&game_g_random_mutex);
  return (char*)game_util_Format(
      "%s_%02d", v3, v9 - 3 * ((1431655766 * (unsigned __int64)v9) >> 32) + 1);
}

__int64 game_13e4860(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    _QWORD v25[2];
    char* v26;
  } v25_;
  struct {
    _QWORD v27[2];
    char* v28;
  } v27_;

  if (GameData_22420f0 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != 0) {
    v4 = strchr(*(_QWORD*)(a1 + 8), 95);
    if (v4 != 0) {
      v2 = v4 + 1;
    }
  }
  v5 = strlen(v2);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v27_.v27[1] = v6;
    v27_.v28 = v7;
    v27_.v27[0] = v9 | 1;
    goto LABEL_14;
  }
  LOBYTE(v27_.v27[0]) = 2 * v5;
  v7 = (char*)v27_.v27 + 1;
  if (v5 != 0) {
  LABEL_14:
    memmove(v7, v2, v6);
  }
  v7[v6] = 0;
  GameRoutine_1a09ce0(v27_.v27, &GameData_1ac690d, 1);
  std___1_to_string_1a0a790((void*)(v25_.v25), (unsigned int)(a2 + 1));
  if ((v25_.v25[0] & 1) != 0) {
    v10 = v25_.v26;
  }
  else {
    v10 = (char*)v25_.v25 + 1;
  }
  if ((v25_.v25[0] & 1) != 0) {
    v11 = v25_.v25[1];
  }
  else {
    v11 = (unsigned __int64)LOBYTE(v25_.v25[0]) >> 1;
  }
  GameRoutine_1a09ce0(v27_.v27, v10, v11);
  if ((v25_.v25[0] & 1) != 0 && v25_.v26 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
  }
  if ((v27_.v27[0] & 1) != 0) {
    v13 = v27_.v28;
  }
  else {
    v13 = (char*)v27_.v27 + 1;
  }
  v14 = game_HashString((__int64)v13);
  if (v14 != 0) {
    v15 = *(_QWORD*)(GameData_22420f0 + 96);
    if (v15 != 0 && *(_QWORD*)(GameData_22420f0 + 112) != 0) {
      v17 = v15 - 1;
      if ((v15 & (v15 - 1)) != 0) {
        v18 = v14;
        if (v14 >= v15) {
          v18 = v14 % v15;
        }
      }
      else {
        v18 = v17 & v14;
      }
      v19 = *(_QWORD**)(*(_QWORD*)(GameData_22420f0 + 88) + 8 * v18);
      if (v19 != nullptr) {
        v20 = (_QWORD*)*v19;
        if (v20 != nullptr) {
          if ((v15 & v17) == 0) {
            while (1) {
              v22 = v20[1];
              if (v22 == v14) {
                if (v20[2] == v14) {
                  goto LABEL_60;
                }
              }
              else if ((v22 & v17) != v18) {
                goto LABEL_53;
              }
              v20 = (_QWORD*)*v20;
              v8 = 0;
              if (v20 == nullptr) {
                goto LABEL_54;
              }
            }
          }
          do {
            v21 = v20[1];
            if (v21 == v14) {
              if (v20[2] == v14) {
              LABEL_60:
                v8 = v20[3];
                if ((v27_.v27[0] & 1) != 0) {
                  goto LABEL_55;
                }
                return v8;
              }
            }
            else {
              if (v21 >= v15) {
                v21 %= v15;
              }
              if (v21 != v18) {
                break;
              }
            }
            v20 = (_QWORD*)*v20;
          } while (v20 != nullptr);
        }
      }
    }
  }
LABEL_53:
  v8 = 0;
LABEL_54:
  if ((v27_.v27[0] & 1) != 0) {
  LABEL_55:
    if (v27_.v28 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v23);
    }
  }
  return v8;
}

__attribute__((swiftcall)) void

game_13e59c0(PSEUDO_X8 x8_, unsigned __int64 result, int a2, int a3, char a4)
{
  _BYTE* a5 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  void* v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  struct {
    __int64 v18;
    unsigned __int64 v19;
    char* v20;
  } v18_;

  v5 = **(_QWORD**)(result + 40);
  v6 = *(_QWORD*)(*(_QWORD*)(result + 40) + 8LL) - v5;
  if (a2 >= (int)((unsigned __int64)v6 >> 3)) {
    goto LABEL_23;
  }
  if (a3 < 16) {
    if (a2 >= (unsigned __int64)(v6 >> 3)) {
      GameRoutine_13e0e50();
    }
    v11 = *(_QWORD*)(v5 + 8LL * a2) + 8LL * a3;
    if ((a4 & 1) != 0) {
      v12 = *(_BYTE**)(v11 + 64);
      if (v12 == nullptr) {
        goto LABEL_23;
      }
    }
    else {
      v12 = *(_BYTE**)(v11 + 192);
      if (v12 == nullptr) {
        goto LABEL_23;
      }
    }
    if (*v12 != 0) {
      v7 = a5;
      result = strlen(v12);
      if (result >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_31:
        String_60a1d0_alt1();
      }
      v14 = result;
      if (result >= 0x17) {
        if ((result | 7) == 0x17) {
          v16 = 26;
        }
        else {
          v16 = (result | 7) + 1;
        }
        v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v16, 16, 0);
        v18_.v19 = v14;
        v18_.v20 = v15;
        v18_.v18 = v16 | 1;
      }
      else {
        LOBYTE(v18_.v18) = 2 * result;
        v15 = (char*)&v18_.v18 + 1;
        if (result == 0) {
          goto LABEL_29;
        }
      }
      result = memmove(v15, v12, v14);
    LABEL_29:
      v15[v14] = 0;
      goto LABEL_30;
    }
  LABEL_23:
    *a5 = 0;
    a5[24] = 0;
    {
      result;
      return;
    }
  }
  v7 = a5;
  v8 = GameData_21732f0;
  result = strlen(GameData_21732f0);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_31;
  }
  v9 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (result | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13,
                                                16, 0);
    v18_.v19 = v9;
    v18_.v20 = v10;
    v18_.v18 = v13 | 1;
  }
  else {
    LOBYTE(v18_.v18) = 2 * result;
    v10 = (char*)&v18_.v18 + 1;
    if (result == 0) {
      goto LABEL_16;
    }
  }
  result = memmove(v10, v8, v9);
LABEL_16:
  v10[v9] = 0;
LABEL_30:
  v17 = v18_.v19;
  *(_QWORD*)v7 = v18_.v18;
  *((_QWORD*)v7 + 1) = v17;
  *((_QWORD*)v7 + 2) = v18_.v20;
  v7[24] = 1;
  {
    result;
    return;
  }
}

__int64 game_13e5ba0(unsigned __int64 a1, int a2, char a3)
{
  int v6;
  _BYTE* v7;
  void* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v15[2];
  unsigned __int8 v16;
  struct {
    char gap16_[1];
    _BYTE v17[15];
    _BYTE* v18;
    char v19;
  } v17_;

  if ((int)((*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL) - **(_QWORD**)(a1 + 40)) >>
            3) < 1) {
    return 0;
  }
  v6 = 0;
  while (1) {
    game_13e59c0((void*)(&v16), a1, v6, a2, a3 & 1);
    if ((v17_.v19 & 1) != 0) {
      v7 = v17_.v18;
      v8 = GameData_21732f0;
      v9 = (unsigned __int64)v16 >> 1;
      if ((v16 & 1) != 0) {
        v9 = *(_QWORD*)&v17_.v17[7];
      }
      else {
        v7 = v17_.v17;
      }
      v15[0] = (__int64)v7;
      v15[1] = v9;
      v10 = GameHr_7a88a0(v15);
      v11 = game_HashString((__int64)v8);
      if (v17_.v19 == 1 && (v16 & 1) != 0 && v17_.v18 != nullptr) {
        v12 = v11;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v17_.v18);
        v11 = v12;
      }
      if (v10 == v11) {
        break;
      }
    }
    if (++v6 >=
        (int)((*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL) - **(_QWORD**)(a1 + 40)) >>
              3)) {
      return 0;
    }
  }
  return 1;
}

__int64 game_13e5d30(__int64 a1)
{
  float v1;
  __int64* v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  __int64 result;

  if (*(_QWORD*)(a1 + 48) == 0) {
    return 0;
  }
  v1 = *(float*)(a1 + 56);
  if (v1 <= 0.0f) {
    return 0;
  }
  nn_os_LockMutex(&game_g_random_mutex);
  v3 = game_map_MapRandom_instance__ptr[0];
  v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL) + 8);
  v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL)) ^
       (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL))
        << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 4) = v4;
  v7 = (v6 >> 8) ^ (v5 >> 19) ^ v6 ^ v5;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8) = v5;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 12) = v7;
  v8 = v7 & 0x7FFFFFFF;
  nn_os_UnlockMutex_alt1(&game_g_random_mutex);
  if ((float)(v1 * 0x1.3880000000000p+13f) <= (float)(v8 % 0xF4240)) {
    return 0;
  }
  v9 = *(_QWORD*)(a1 + 48);
  nn_os_LockMutex(&game_g_random_mutex);
  v10 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8);
  v11 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 12);
  v12 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3) ^
        (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3) << 11);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3) =
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 4) = v10;
  v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8) = v11;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 12) = v13;
  v14 = v13 & 0x7FFFFFFF;
  nn_os_UnlockMutex_alt1(&game_g_random_mutex);
  result = game_996d60(v9, v14 % 0x3E8, 1000);
  if (result != 0) {
    return *(_QWORD*)(result + 40);
  }
  return result;
}

__attribute__((swiftcall)) void game_13f84c0(PSEUDO_X8 x8_, _BYTE* a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  const char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  char v10;
  __int64 v11;
  signed __int64 v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  char* v22;
  _QWORD* v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  const char* v29;
  unsigned __int64 v30;
  __int64* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  struct {
    __int64 v43;
    __int64 v44;
    char* v45;
  } v43_;

  if (*a1 == 0) {
    *(_WORD*)a2 = 0;
    return;
  }
  v4 = GameData_212c8a0;
  v5 = *(const char**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                  8LL * (unsigned __int8)*a1) +
                       8LL);
  v6 = strlen_alt1(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
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
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v43_.v44 = v7;
    v43_.v45 = v8;
    v43_.v43 = v9 | 1;
  }
  else {
    LOBYTE(v43_.v43) = 2 * v6;
    v8 = (char*)&v43_.v43 + 1;
    if (v6 == 0) {
      goto LABEL_12;
    }
  }
  memmove_alt1((__int64)v8, (__int64)v5, v7);
LABEL_12:
  v8[v7] = 0;
  v10 = v43_.v43;
  v11 = (__int64)v43_.v45;
  v12 = (unsigned __int64)(unsigned __int8)v43_.v43 >> 1;
  if ((v43_.v43 & 1) != 0) {
    v12 = v43_.v44;
  }
  if (v12 >= 4) {
    if ((v43_.v43 & 1) != 0) {
      v19 = v43_.v45;
    }
    else {
      v19 = (char*)&v43_.v43 + 1;
    }
    v20 = &v19[v12];
  LABEL_30:
    v21 = (__int64)v19;
    do {
      v22 = (char*)memchr_alt1(v21, 82, v12 - 3);
      if (v22 == nullptr) {
        break;
      }
      if (*(_DWORD*)v22 == 1598310738) {
        if (v22 != v20 && v22 - v19 != -1) {
          GameRoutine_1a0a8e0_alt1((__int64)&v43_.v43, v22 - v19, 4u,
                                   (const char*)&GameData_1bcd850 + 1, 0xBu);
          v10 = v43_.v43;
          v12 = v43_.v44;
          v11 = (__int64)v43_.v45;
          if ((v43_.v43 & 1) != 0) {
            v19 = v43_.v45;
          }
          else {
            v19 = (char*)&v43_.v43 + 1;
          }
          if ((v43_.v43 & 1) == 0) {
            v12 = (unsigned __int64)(unsigned __int8)v43_.v43 >> 1;
          }
          v20 = &v19[v12];
          if (v12 > 3) {
            goto LABEL_30;
          }
        }
        break;
      }
      v21 = (__int64)(v22 + 1);
      v12 = (signed __int64)&v20[-v21];
    } while ((__int64)&v20[-v21] >= 4);
  }
  if ((v10 & 1) != 0) {
    v13 = (char*)v11;
  }
  else {
    v13 = (char*)&v43_.v43 + 1;
  }
  v14 = game_HashString((__int64)v13);
  if (v14 == 0) {
    goto LABEL_62;
  }
  v15 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v15 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_62;
  }
  v17 = v15 - 1;
  if ((v15 & (v15 - 1)) != 0) {
    v18 = v14;
    if (v14 >= v15) {
      v18 = v14 % v15;
    }
  }
  else {
    v18 = v17 & v14;
  }
  v23 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v18);
  if (v23 == nullptr) {
    goto LABEL_62;
  }
  v24 = (_QWORD*)*v23;
  if (v24 == nullptr) {
    goto LABEL_62;
  }
  if ((v15 & v17) == 0) {
    while (1) {
      v26 = v24[1];
      if (v26 == v14) {
        if (v24[2] == v14) {
          goto LABEL_61;
        }
      }
      else if ((v26 & v17) != v18) {
        goto LABEL_62;
      }
      v24 = (_QWORD*)*v24;
      if (v24 == nullptr) {
        goto LABEL_62;
      }
    }
  }
  while (1) {
    v25 = v24[1];
    if (v25 == v14) {
      break;
    }
    if (v25 >= v15) {
      v25 %= v15;
    }
    if (v25 != v18) {
      goto LABEL_62;
    }
  LABEL_50:
    v24 = (_QWORD*)*v24;
    if (v24 == nullptr) {
      goto LABEL_62;
    }
  }
  if (v24[2] != v14) {
    goto LABEL_50;
  }
LABEL_61:
  if (v24[3] != 0) {
    goto LABEL_101;
  }
LABEL_62:
  v27 = (unsigned __int8)*a1;
  v28 = *(_QWORD*)(*v4 + 64);
  if (*(_WORD*)(*(_QWORD*)(v28 + 8 * v27) + 56LL) != 0) {
    if ((v10 & 1) != 0) {
      SpineModel_64dde0(&v43_.v43, (__int64)&GameData_1bcd850 + 1, 0xBu);
      v27 = (unsigned __int8)*a1;
      v28 = *(_QWORD*)(*v4 + 64);
    }
    else {
      v43_.v44 = 1604946407;
      v43_.v45 = nullptr;
      v43_.v43 = 0x958BE55F44495016LL;
    }
    v29 = **(const char***)(*(_QWORD*)(v28 + 8 * v27) + 64LL);
    v30 = strlen_alt1(v29);
    GameRoutine_1a09ce0_alt1((__int64)&v43_.v43, v29, v30);
    v10 = v43_.v43;
    v11 = (__int64)v43_.v45;
    v31 = (v43_.v43 & 1) != 0 ? (__int64*)v43_.v45
                              : (__int64*)((char*)&v43_.v43 + 1);
    v32 = game_HashString((__int64)v31);
    if (v32 != 0) {
      v33 = *(_QWORD*)(GameData_21c99c8 + 96);
      if (v33 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
        v35 = v33 - 1;
        if ((v33 & (v33 - 1)) != 0) {
          v36 = v32;
          if (v32 >= v33) {
            v36 = v32 % v33;
          }
        }
        else {
          v36 = v35 & v32;
        }
        v37 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v36);
        if (v37 != nullptr) {
          v38 = (_QWORD*)*v37;
          if (v38 != nullptr) {
            if ((v33 & v35) == 0) {
              while (1) {
                v40 = v38[1];
                if (v40 == v32) {
                  if (v38[2] == v32) {
                    goto LABEL_94;
                  }
                }
                else if ((v40 & v35) != v36) {
                  goto LABEL_95;
                }
                v38 = (_QWORD*)*v38;
                if (v38 == nullptr) {
                  goto LABEL_95;
                }
              }
            }
            do {
              v39 = v38[1];
              if (v39 == v32) {
                if (v38[2] == v32) {
                LABEL_94:
                  if (v38[3] == 0) {
                    break;
                  }
                LABEL_101:
                  v42 = v43_.v44;
                  *(_QWORD*)a2 = v43_.v43;
                  *(_QWORD*)(a2 + 8) = v42;
                  *(_QWORD*)(a2 + 16) = v43_.v45;
                  return;
                }
              }
              else {
                if (v39 >= v33) {
                  v39 %= v33;
                }
                if (v39 != v36) {
                  break;
                }
              }
              v38 = (_QWORD*)*v38;
            } while (v38 != nullptr);
          }
        }
      }
    }
  }
LABEL_95:
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (unsigned __int8)*a1) +
                32LL) != 5) {
    goto LABEL_101;
  }
  *(_BYTE*)a2 = 34;
  *(_WORD*)(a2 + 17) = 161;
  *(_QWORD*)(a2 + 1) = 0xE7958BE55F444950LL;
  *(_QWORD*)(a2 + 9) = 0xB1E8A688E65FA989LL;
  if ((v10 & 1) != 0 && v11 != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v11);
  }
}

__attribute__((swiftcall)) void game_13f8980(PSEUDO_X8 x8_, unsigned __int8* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int8* v4;
  unsigned __int8* v6;
  __int64 v7;
  unsigned __int8* v8;
  __int64 v9;
  __int64 result;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8* v15;
  unsigned __int8* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  char v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64 v28;

  v2 = *a1;
  v3 = *((_QWORD*)a1 + 1);
  v4 = *((unsigned __int8**)a1 + 2);
  v6 = a1 + 1;
  v7 = v2 >> 1;
  if ((v2 & 1) != 0) {
    v7 = *((_QWORD*)a1 + 1);
  }
  if (v7 >= 10) {
    if ((v2 & 1) != 0) {
      v15 = *((unsigned __int8**)a1 + 2);
    }
    else {
      v15 = a1 + 1;
    }
    v16 = &v15[v7];
  LABEL_16:
    v17 = (__int64)v15;
    do {
      v18 = memchr(v17, 67, v7 - 9);
      if (v18 == 0) {
        break;
      }
      if (*(_QWORD*)v18 == 0x73746E65746E6F43LL &&
          *(_WORD*)(v18 + 8) == 12090) {
        if ((unsigned __int8*)v18 != v16 && v18 - (_QWORD)v15 != -1) {
          GameRoutine_1a0a8e0(a1, v18 - (_QWORD)v15, 10, &GameData_1a9f09e, 0);
          v2 = *a1;
          v3 = *((_QWORD*)a1 + 1);
          v4 = *((unsigned __int8**)a1 + 2);
          v7 = v2 >> 1;
          if ((v2 & 1) != 0) {
            v15 = *((unsigned __int8**)a1 + 2);
          }
          else {
            v15 = v6;
          }
          if ((v2 & 1) != 0) {
            v7 = *((_QWORD*)a1 + 1);
          }
          v16 = &v15[v7];
          if (v7 > 9) {
            goto LABEL_16;
          }
        }
        break;
      }
      v17 = v18 + 1;
      v7 = (__int64)&v16[-v17];
    } while ((__int64)&v16[-v17] >= 10);
  }
  v27 = nullptr;
  v28 = 0;
  v26 = nullptr;
  if ((v2 & 1) != 0) {
    v8 = v4;
  }
  else {
    v8 = v6;
  }
  if ((v2 & 1) != 0) {
    v9 = v3;
  }
  else {
    v9 = (unsigned int)v2 >> 1;
  }
  result = RuntimeBuffer_8924a0(&v26, v8, v9, 46);
  v11 = v26;
  if ((*(_BYTE*)v26 & 1) != 0) {
    result = fw_text_String_CopyTerminated(
        a2, *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26 + 8),
        *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26));
    v11 = v26;
    if (v26 == nullptr) {
      result;
      return;
    }
  }
  else {
    v12 = *v26;
    v13 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26);
    a2[1] = v26[1];
    a2[2] = v13;
    *a2 = v12;
  }
  v20 = v27;
  v21 = fw_memory_g_heap_manager_ptr;
  if (v11 == v27) {
    goto LABEL_44;
  }
  v22 = v27;
  do {
    v23 = *((_BYTE*)v22 - 24);
    v22 -= 3;
    if ((v23 & 1) != 0 && *(v20 - 1) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
        v24 = 128;
      }
      else {
        v24 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v21 + v24);
    }
    v20 = v22;
  } while (v22 != v11);
  v27 = v11;
  if (v26 != nullptr) {
  LABEL_44:
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
      v25 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v21 + v25);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_13f8ba0(PSEUDO_X8 x8_, char* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char v4;
  char* v5;
  unsigned __int64 v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  unsigned __int64 v22;
  char* v23;
  signed __int64 v24;
  char* v25;
  __int64 v26;
  signed __int64 v27;
  char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  char* v43;
  char* v44;
  __int64 v45;
  char v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  struct {
    __int64 v50;
    unsigned __int64 v51;
    char* v52;
  } v50_;
  struct {
    __int64 v53;
    unsigned __int64 v54;
    char* v55;
  } v53_;
  struct {
    __int64 v56;
    unsigned __int64 v57;
    char* v58;
  } v56_;

  *(_WORD*)a2 = 0;
  v4 = *a1;
  *((_WORD*)a2 + 12) = 0;
  v5 = (char*)(a2 + 3);
  if ((v4 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v50_.v50, *((_QWORD*)a1 + 2),
                                       *((_QWORD*)a1 + 1));
  }
  else {
    v6 = *((_QWORD*)a1 + 1);
    v50_.v50 = *(_QWORD*)a1;
    v50_.v51 = v6;
    v50_.v52 = *((char**)a1 + 2);
  }
  v56_.v57 = 0;
  v56_.v58 = nullptr;
  v56_.v56 = 0;
  if ((v50_.v50 & 1) != 0) {
    v7 = v50_.v52;
  }
  else {
    v7 = (char*)&v50_.v50 + 1;
  }
  if ((v50_.v50 & 1) != 0) {
    v8 = v50_.v51;
  }
  else {
    v8 = (unsigned __int64)(unsigned __int8)v50_.v50 >> 1;
  }
  RuntimeBuffer_8924a0_alt1((__int64)&v56_.v56, (__int64)v7, v8, 0x2Fu);
  if ((*(_BYTE*)(v56_.v57 - 24) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v53_.v53, *(_QWORD*)(v56_.v57 - 8),
                                       *(_QWORD*)(v56_.v57 - 16));
    v11 = v56_.v56;
    if (v56_.v56 == 0) {
      goto LABEL_27;
    }
  LABEL_14:
    v12 = v56_.v57;
    v13 = fw_memory_g_heap_manager_ptr;
    if (v11 == v56_.v57) {
      goto LABEL_24;
    }
    v14 = v56_.v57;
    do {
      v15 = *(_BYTE*)(v14 - 24);
      v14 -= 24LL;
      if ((v15 & 1) != 0) {
        v16 = *(_QWORD*)(v12 - 8);
        if (v16 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
            v17 = 128;
          }
          else {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v17, v16);
        }
      }
      v12 = v14;
    } while (v14 != v11);
    v56_.v57 = v11;
    v11 = v56_.v56;
    if (v56_.v56 != 0) {
    LABEL_24:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v18, v11);
    }
    goto LABEL_27;
  }
  v9 = *(_QWORD*)(v56_.v57 - 24);
  v10 = *(_QWORD*)(v56_.v57 - 8);
  v53_.v54 = *(_QWORD*)(v56_.v57 - 16);
  v53_.v55 = (char*)v10;
  v53_.v53 = v9;
  v11 = v56_.v56;
  if (v56_.v56 != 0) {
    goto LABEL_14;
  }
LABEL_27:
  if ((v50_.v50 & 1) != 0 && v50_.v52 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v50_.v52);
  }
  v20 = v53_.v53;
  v22 = v53_.v54;
  v21 = (__int64)v53_.v55;
  if ((v53_.v53 & 1) != 0) {
    v23 = v53_.v55;
  }
  else {
    v23 = (char*)&v53_.v53 + 1;
  }
  if ((v53_.v53 & 1) != 0) {
    v24 = v53_.v54;
  }
  else {
    v24 = (unsigned __int64)(unsigned __int8)v53_.v53 >> 1;
  }
  if (v24 < 2) {
    goto LABEL_53;
  }
  v25 = &v23[v24];
  v26 = (__int64)v23;
  v27 = v24;
  while (1) {
    v28 = (char*)memchr_alt1(v26, 95, v27 - 1);
    if (v28 == nullptr) {
      goto LABEL_53;
    }
    if (*(_WORD*)v28 == 16735) {
      break;
    }
    v26 = (__int64)(v28 + 1);
    v27 = (signed __int64)&v25[-v26];
    if ((__int64)&v25[-v26] < 2) {
      goto LABEL_53;
    }
  }
  if (v28 == v25 || (v29 = v28 - v23, v28 - v23 == -1)) {
  LABEL_53:
    if (a2 != &v53_.v53) {
      if ((v20 & 1) == 0) {
        v32 = v53_.v54;
        *a2 = v53_.v53;
        a2[1] = v32;
        a2[2] = (__int64)v53_.v55;
        if ((v53_.v53 & 1) == 0) {
          return;
        }
        goto LABEL_59;
      }
      GameRoutine_64df20_alt1(a2, v21, v22);
    }
    if ((v53_.v53 & 1) == 0) {
      return;
    }
    goto LABEL_59;
  }
  if (v24 >= v29) {
    v30 = v28 - v23;
  }
  else {
    v30 = v24;
  }
  if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_96:
    String_60a1d0_alt1();
  }
  if (v30 >= 0x17) {
    if ((v30 | 7) == 0x17) {
      v34 = 26;
    }
    else {
      v34 = (v30 | 7) + 1;
    }
    v31 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v34,
                                                16, 0);
    v56_.v57 = v30;
    v56_.v58 = v31;
    v56_.v56 = v34 | 1;
  }
  else {
    LOBYTE(v56_.v56) = 2 * v30;
    v31 = (char*)&v56_.v56 + 1;
    if (v28 == v23) {
      goto LABEL_69;
    }
  }
  memmove_alt1((__int64)v31, (__int64)v23, v30);
LABEL_69:
  v35 = *(_BYTE*)a2;
  v31[v30] = 0;
  if ((v35 & 1) != 0) {
    v36 = a2[2];
    if (v36 != 0) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v36);
    }
  }
  v38 = v56_.v57;
  *a2 = v56_.v56;
  a2[1] = v38;
  v39 = (unsigned __int8)v53_.v53;
  a2[2] = (__int64)v56_.v58;
  v40 = v53_.v54;
  if ((v39 & 1) == 0) {
    v40 = v39 >> 1;
  }
  if (v29 >= v40) {
    String_60a230_alt1();
  }
  v41 = v29 + 1;
  v42 = v40 - (v29 + 1);
  if ((v39 & 1) != 0) {
    v43 = v53_.v55;
  }
  else {
    v43 = (char*)&v53_.v53 + 1;
  }
  if (v42 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_96;
  }
  if (v42 >= 0x17) {
    if ((v42 | 7) == 0x17) {
      v45 = 26;
    }
    else {
      v45 = (v42 | 7) + 1;
    }
    v44 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v45,
                                                16, 0);
    v56_.v57 = v42;
    v56_.v58 = v44;
    v56_.v56 = v45 | 1;
  }
  else {
    LOBYTE(v56_.v56) = 2 * v42;
    v44 = (char*)&v56_.v56 + 1;
    if (v40 == v41) {
      goto LABEL_89;
    }
  }
  memmove_alt1((__int64)v44, (__int64)&v43[v41], v42);
LABEL_89:
  v46 = *v5;
  v44[v42] = 0;
  if ((v46 & 1) != 0) {
    v47 = a2[5];
    if (v47 != 0) {
      v48 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v47);
    }
  }
  v49 = v56_.v57;
  *(_QWORD*)v5 = v56_.v56;
  *((_QWORD*)v5 + 1) = v49;
  *((_QWORD*)v5 + 2) = v56_.v58;
  if ((v53_.v53 & 1) != 0) {
  LABEL_59:
    if (v53_.v55 != nullptr) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, (__int64)v53_.v55);
    }
  }
}

__attribute__((swiftcall)) void game_13f9200(PSEUDO_X8 x8_, int8x16_t* a1)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t* v4;
  float i;
  double v6;
  double v7;
  double v8;
  float32x4_t v9;
  unsigned int v10;
  unsigned __int64 v11;
  unsigned int v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  int8x16_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  unsigned __int64 v28;
  float32x4_t j;

  v4 = *(float32x4_t**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    for (i = LANES128(v4[8]).n128_f32[0]; i < -0x1.6800000000000p+7;
         i = i + 0x1.6800000000000p+8)
      ;
    for (j = v4[7]; i >= 0x1.6800000000000p+7; i = i + -0x1.6800000000000p+8)
      ;
    v6 = (float)(i * 0x1.1df46a0000000p-6) * 0.5;
    v7 = cos(v6);
    v8 = sin(v6);
    LANES128(v9).n128_u64[0] = LANES128(*(a1)).n128_u64[0];
    *(float*)&v10 = v7 + v8 * 0.0;
    *(float*)&v11 = v8 * -0.0 + v7 * 0.0;
    *(float*)&v12 = v8 + v7 * 0.0;
    LANES128(v13).n128_u64[0] = __PAIR64__(v12, v11);
    LANES128(v13).n128_u64[1] = __PAIR64__(v10, v11);
    v14 = vmulq_f32(v13, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v13).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(*a1, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v15).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
    LANES128(v16).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(*a1, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v17).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v9).n128_u64[1] = LANES128(v16).n128_u64[0];
    *(int32x2_t*)&LANES128(v17).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v14).n128_u64[0]), 1);
    *(int8x8_t*)&LANES128(v15).n128_i8[8] =
        vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v18 =
        vmlaq_f32(vmulq_f32(v13, v14), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v9, v15));
    LANES128(v9).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(*a1, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v16).n128_u64[1] = LANES128(v9).n128_u64[0];
    LANES128(v9).n128_u64[1] = LANES128(*(a1)).n128_u64[0];
    LANES128(v19).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v19).n128_i8[8] =
        vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v20 = vmlsq_f32(vmlaq_f32(v18, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v9, v17)),
                    v19, v16);
    LANES128(v19).n128_u64[0] = __PAIR64__(v12, v11);
    HIDWORD(v11) = v10;
    LANES128(v21).n128_u64[0] = __PAIR64__(v12, v11);
    LANES128(v16).n128_u64[0] = __PAIR64__(v12, v11);
    LANES128(v21).n128_u64[1] = v11;
    LANES128(v22).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v24).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v25).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v22).n128_u64[1] = LANES128(v22).n128_u64[0];
    LANES128(v16).n128_u64[1] = LANES128(v23).n128_u64[0];
    *(int8x8_t*)&LANES128(v24).n128_i8[8] =
        vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v23).n128_u64[1] = LANES128(v21).n128_u64[0];
    LANES128(v21).n128_u64[1] = LANES128(v19).n128_u64[0];
    *(int32x2_t*)&LANES128(v25).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v20).n128_u64[0]), 1);
    v26 = vmlaq_f32(
        vmlaq_f32(vmulq_f32(v22, v20), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v16, v24)),
        COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v21, v25));
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v21).n128_i8[8] =
        vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v27 = vmlsq_f32(v26, v21, v23);
    LANES128(v27).n128_u32[3] = 0;
    *a2 = vaddq_f32(j, v27);
  }
  else {
    v28 = LANES128(*(a1)).n128_u64[1];
    LANES128(*(a2)).n128_u64[0] = LANES128(*(a1)).n128_u64[0];
    LANES128(*(a2)).n128_u64[1] = v28;
  }
}

__attribute__((swiftcall)) void game_13f9460(PSEUDO_X8 x8_, float32x4_t* a1)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float v3;
  float v4;
  double v5;
  double v6;
  double v7;
  float32x4_t v8;
  unsigned int v9;
  unsigned __int64 v10;
  unsigned int v11;
  float32x4_t v12;
  int8x16_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  int8x16_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  unsigned __int64 v29;
  float32x4_t v30;

  if (GameData_21f4000 != 0) {
    v3 = *(float*)(GameData_21f4000 + 128);
    v30 = vsubq_f32(*a1, *(float32x4_t*)(GameData_21f4000 + 112));
    *a2 = v30;
    v4 = -v3;
    if (v3 > 0x1.6800000000000p+7) {
      do {
        v4 = v4 + 0x1.6800000000000p+8;
      } while (v4 < -0x1.6800000000000p+7);
    }
    for (; v4 >= 0x1.6800000000000p+7; v4 = v4 + -0x1.6800000000000p+8)
      ;
    v5 = (float)(v4 * 0x1.1df46a0000000p-6) * 0.5;
    v6 = cos(v5);
    v7 = sin(v5);
    LANES128(v8).n128_u64[0] = LANES128(v30).n128_u64[0];
    *(float*)&v9 = v6 + v7 * 0.0;
    *(float*)&v10 = v7 * -0.0 + v6 * 0.0;
    *(float*)&v11 = v7 + v6 * 0.0;
    LANES128(v12).n128_u64[0] = __PAIR64__(v11, v10);
    LANES128(v12).n128_u64[1] = __PAIR64__(v9, v10);
    v13 = vmulq_f32(v12, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v12).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v14).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v12).n128_u64[1] = LANES128(v12).n128_u64[0];
    LANES128(v15).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v16).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v8).n128_u64[1] = LANES128(v15).n128_u64[0];
    *(int32x2_t*)&LANES128(v16).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v13).n128_u64[0]), 1);
    *(int8x8_t*)&LANES128(v14).n128_i8[8] =
        vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v17 =
        vmlaq_f32(vmulq_f32(v12, v13), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v8, v14));
    LANES128(v8).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v15).n128_u64[1] = LANES128(v8).n128_u64[0];
    LANES128(v8).n128_u64[1] = LANES128(v30).n128_u64[0];
    v18 = vmlaq_f32(v17, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v8, v16));
    LANES128(v8).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v8).n128_i8[8] =
        vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v13).n128_u64[0] = __PAIR64__(v11, v10);
    HIDWORD(v10) = v9;
    v19 = vmlsq_f32(v18, v8, v15);
    LANES128(v20).n128_u64[0] = __PAIR64__(v11, v10);
    LANES128(v21).n128_u64[0] = __PAIR64__(v11, v10);
    LANES128(v20).n128_u64[1] = v10;
    LANES128(v22).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v24).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v20).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v25).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v22).n128_u64[1] = LANES128(v22).n128_u64[0];
    LANES128(v21).n128_u64[1] = LANES128(v23).n128_u64[0];
    *(int8x8_t*)&LANES128(v24).n128_i8[8] =
        vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v23).n128_u64[1] = LANES128(v20).n128_u64[0];
    LANES128(v20).n128_u64[1] = LANES128(v13).n128_u64[0];
    *(int32x2_t*)&LANES128(v25).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v19).n128_u64[0]), 1);
    v26 = vmlaq_f32(
        vmlaq_f32(vmulq_f32(v22, v19), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v21, v24)),
        COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v20, v25));
    LANES128(v20).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v20).n128_i8[8] =
        vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v27 = vmlsq_f32(v26, v20, v23);
    LANES128(*(a2)).n128_u64[0] = LANES128(v27).n128_u64[0];
    v28 = *a2;
    LANES128(v28).n128_u64[1] = LANES128(v27).n128_u32[2];
    *a2 = v28;
  }
  else {
    v29 = LANES128(*(a1)).n128_u64[1];
    LANES128(*(a2)).n128_u64[0] = LANES128(*(a1)).n128_u64[0];
    LANES128(*(a2)).n128_u64[1] = v29;
  }
}

__attribute__((swiftcall)) void game_143e320(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v2;
  __int64 v5;
  __int64 v6;
  unsigned __int64 result;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;

  v2 = *(const char**)(a1 + 8);
  if (v2 != nullptr) {
    v5 = strchr(*(_QWORD*)(a1 + 8), 95);
    if (v5 != 0) {
      v2 = (const char*)(v5 + 1);
    }
  }
  v6 = game_util_Format("%s_%s", v2, *(const char**)(a1 + 32));
  result = strlen(v6);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v8 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (result | 7) + 1;
    }
    v11 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v10, 16,
                                              0);
    a2[1] = v8;
    a2[2] = v11;
    *a2 = v10 | 1;
    v9 = (char*)v11;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v9 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_13;
    }
  }
  result = memmove(v9, v6, v8);
LABEL_13:
  v9[v8] = 0;
  {
    result;
    return;
  }
}

__int64 game_147d7e0(__int64* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  int v4;
  int* v5;
  int* v6;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  int* v21;
  int* v22;
  __int64 v23;
  unsigned int v24;
  int* v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  int* v30;
  __int64* v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  unsigned int v36;
  int v37;
  unsigned int* v38;
  __int64* v39;
  _DWORD* v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v48;
  int* v49;
  int v50;
  struct {
    _DWORD v53[4];
    _DWORD* v54;
    char gap48_[8];
    char v55;
    char gap57_[15];
    __int64 v56;
    char gap80_[8];
    char v57;
    char gap89_[15];
    __int64 v58;
    char v59;
    char gap113_[15];
    __int64 v60;
  } v53_;

  if (a2 == 0) {
    return 1;
  }
  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      40, 16, 0);
  v3 = v2 + 40;
  v4 = 1;
  v5 = (int*)v2;
  v6 = (int*)v2;
  do {
    if ((unsigned __int64)v6 < v3) {
      *v6++ = v4;
    }
    else {
      v7 = (char*)((char*)v6 - (char*)v5);
      v8 = v6 - v5;
      v9 = v8 + 1;
      if ((unsigned __int64)(v8 + 1) >> 62 != 0) {
        goto LABEL_95;
      }
      if ((__int64)(v3 - (_QWORD)v5) >> 1 > v9) {
        v9 = (__int64)(v3 - (_QWORD)v5) >> 1;
      }
      if (v3 - (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFFCLL) {
        v10 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v10 = v9;
      }
      if (v10 != 0) {
        if (v10 >> 62 != 0) {
          GameRoutine_60a210_alt1();
        }
        v11 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v10, 16, 0);
      }
      else {
        v11 = 0;
      }
      v3 = v11 + 4 * v10;
      v12 = (char*)((char*)v6 - (char*)v5);
      v13 = (__int64)&v7[v11 + -4 * v8];
      *(_DWORD*)&v7[v11] = v4;
      v6 = (int*)&v7[v11 + 4];
      memcpy(v13, v5, v12);
      if (v5 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v14);
      }
      v5 = (int*)v13;
    }
    ++v4;
  } while (v4 != 11);
  v16 = *a1;
  v15 = a1[1];
  v17 = v15 - *a1;
  if (v15 == *a1) {
    v19 = 0;
    v20 = 0;
    v21 = nullptr;
    if (v5 == v6) {
      v22 = v5;
    }
    else {
      v22 = v6;
    }
  }
  else {
    if (v17 < 0) {
    LABEL_95:
      GameRoutine_6e5a20();
    }
    v18 = (__int64*)fw_memory_g_heap_manager_ptr;
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v15 - *a1, 16, 0);
    memcpy(v19, v16, v17);
    v20 = fw_memory_HeapManager_Allocate(*v18, v17, 16, 0);
    v21 = (int*)(v20 + v17);
    memcpy(v20, v19, v17);
    v22 = v5;
    if (v5 != v6) {
    LABEL_25:
      v23 = 0;
      while (*v22 != *(_DWORD*)(v20 + v23)) {
        v23 += 4;
        if (v17 == v23) {
          if (++v22 != v6) {
            goto LABEL_25;
          }
          goto LABEL_41;
        }
      }
    }
  }
  if (v22 != v6) {
    v25 = v22 + 1;
    if (v22 + 1 != v6) {
      if ((int*)v20 == v21) {
        memmove(v22, v25,
                (((char*)v6 - (char*)v22 - 8) & 0xFFFFFFFFFFFFFFFCLL) + 4);
        v22 = (int*)((char*)v22 +
                     (((char*)v6 - (char*)v22 - 8) & 0xFFFFFFFFFFFFFFFCLL) + 4);
      }
      else {
        do {
          v48 = *v25;
          v49 = (int*)v20;
          while (1) {
            v50 = *v49++;
            if (v48 == v50) {
              break;
            }
            if (v49 == v21) {
              *v22++ = v48;
              break;
            }
          }
          ++v25;
        } while (v25 != v6);
      }
    }
  }
  if (v22 != v6) {
    v6 = v22;
  }
  if (v20 != 0) {
  LABEL_41:
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
  }
  if (v19 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
  }
  v28 = (unsigned __int64)((char*)v6 - (char*)v5) >> 2;
  if ((int)v28 >= 1) {
    v29 = ((unsigned __int64)((char*)v6 - (char*)v5) >> 2) & 0x7FFFFFFF;
    v30 = v5;
    v31 = game_map_MapRandom_instance__ptr[0];
    do {
      nn_os_LockMutex(&game_g_random_mutex);
      v32 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31);
      v33 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31 + 4);
      v34 = *(_DWORD*)v31 ^ (*(_DWORD*)v31 << 11);
      *(_DWORD*)v31 = *((_DWORD*)v31 + 1);
      *((_DWORD*)v31 + 1) = v32;
      v35 = (v34 >> 8) ^ (v33 >> 19) ^ v34 ^ v33;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31) = v33;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31 + 4) = v35;
      v36 = v35 & 0x7FFFFFFF;
      nn_os_UnlockMutex_alt1(&game_g_random_mutex);
      v37 = *v30;
      --v29;
      *v30++ = v5[v36 % (unsigned int)v28];
      v5[v36 % (unsigned int)v28] = v37;
    } while (v29 != 0);
  }
  if (v5 == v6) {
    v24 = 1;
    if (v5 == nullptr) {
      return v24;
    }
    goto LABEL_84;
  }
  v38 = (unsigned int*)v5;
  v39 = msg_MessageManager_instance__ptr[0];
  while (1) {
    v24 = *v38;
    SceneTalk_1497180(v53_.v53, (__int64)"Bird", 4u, a2,
                      (__int64)&GameData_1ae1fdd, 3u, *v38);
    if ((v53_.v53[0] & 1) != 0) {
      v40 = v53_.v54;
    }
    else {
      v40 = (_DWORD*)((char*)v53_.v53 + 1);
    }
    v41 = Manager_a51640(*v39, (__int64)v40, v40);
    if ((v53_.v59 & 1) != 0 && v53_.v60 != 0) {
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v42 = 128;
      }
      else {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v42);
    }
    if ((v53_.v57 & 1) != 0 && v53_.v58 != 0) {
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v43 = 128;
      }
      else {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v43);
    }
    if ((v53_.v55 & 1) != 0 && v53_.v56 != 0) {
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v44 = 128;
      }
      else {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v44);
    }
    if ((v53_.v53[0] & 1) != 0 && v53_.v54 != nullptr) {
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v45 = 128;
      }
      else {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v45);
    }
    if ((v41 & 1) != 0) {
      break;
    }
    if (++v38 == (unsigned int*)v6) {
      v24 = 1;
      break;
    }
  }
  if (v5 != nullptr) {
  LABEL_84:
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v46);
  }
  return v24;
}

__int64 game_147dd40(int a1)
{
  __int64* v2;
  __int64* v3;
  unsigned __int64 v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;

  v3 = *(__int64**)(*GameData_212cce8[0] + 64);
  v2 = *(__int64**)(*GameData_212cce8[0] + 72);
  if ((unsigned int)((unsigned __int64)((char*)v2 - (char*)v3) >> 3) != 0) {
    v6 = (int)(v2 - v3);
    if (v6 >> 61 != 0) {
    LABEL_34:
      GameRoutine_1480890();
    }
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        8 * v6, 16, 0);
    v4 = v7 + 8 * v6;
    v5 = (char*)v7;
    if (v3 == v2) {
    LABEL_29:
      v24 = 0;
      if (v5 == nullptr) {
        return v24;
      }
      goto LABEL_30;
    }
  }
  else {
    v4 = 0;
    v5 = nullptr;
    if (v3 == v2) {
      goto LABEL_29;
    }
  }
  v8 = v5;
  do {
    v9 = *v3;
    if (a1 == *(unsigned __int8*)(*v3 + 32)) {
      if ((unsigned __int64)v8 < v4) {
        *(_QWORD*)v8 = v9;
        v8 += 8;
      }
      else {
        v10 = (char*)(v8 - v5);
        v11 = (v8 - v5) >> 3;
        v12 = v11 + 1;
        if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
          goto LABEL_34;
        }
        if ((__int64)(v4 - (_QWORD)v5) >> 2 > v12) {
          v12 = (__int64)(v4 - (_QWORD)v5) >> 2;
        }
        if (v4 - (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFF8LL) {
          v13 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v13 = v12;
        }
        if (v13 != 0) {
          if (v13 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v14 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
        }
        else {
          v14 = 0;
        }
        v4 = v14 + 8 * v13;
        v15 = (char*)(v8 - v5);
        v16 = (__int64)&v10[v14 + -8 * v11];
        *(_QWORD*)&v10[v14] = v9;
        v8 = &v10[v14 + 8];
        memcpy(v16, v5, v15);
        if (v5 != nullptr) {
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v17);
        }
        v5 = (char*)v16;
      }
    }
    ++v3;
  } while (v3 != v2);
  if (v8 == v5) {
    goto LABEL_29;
  }
  nn_os_LockMutex(&game_g_random_mutex);
  v18 = game_map_MapRandom_instance__ptr[0];
  v19 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL));
  v20 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v21 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v18 + 1) = v19;
  v22 = (v21 >> 8) ^ (v20 >> 19) ^ v21 ^ v20;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18) = v20;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18 + 4) = v22;
  v23 = v22 & 0x7FFFFFFF;
  nn_os_UnlockMutex_alt1(&game_g_random_mutex);
  v24 = *(_QWORD*)&v5[8 * (v23 % (int)((unsigned __int64)(v8 - v5) >> 3))];
  if (v5 == nullptr) {
    return v24;
  }
LABEL_30:
  v25 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v25 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
  return v24;
}

__n128 game_1488fb0(unsigned int a1, __int64 a2, __n128 result)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  _BYTE* v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  _BOOL8 v29;
  char* v31;
  __int64 v32;
  __int64 v33;
  struct {
    __int64 v34;
    int v35;
  } v34_;
  _QWORD v36[25];

  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 56) == 5) {
    v3 = *(_QWORD*)(GameData_21f3d08 + 32);
    if (v3 != 0) {
      v4 = *(_QWORD*)(GameData_21f3d08 + 24);
      v7 = *(_QWORD*)(GameData_21f3d08 + 32);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v8 = std___1___shared_weak_count_lock(v7);
      result = std___1___shared_weak_count___release_weak();
      if (v8 == 0 || v4 == 0) {
      LABEL_9:
        if (v8 == 0) {
          return result;
        }
        goto LABEL_31;
      }
      v10 = AssetTableFile_7e94a0(*(_QWORD*)(v4 + 16));
      if (v10 == 0 || (v15 = *(_BYTE**)(v10 + 32)) == nullptr || *v15 == 0) {
      LABEL_31:
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(
              v8, *(long double*)&result);
          return std___1___shared_weak_count___release_weak();
        }
        return result;
      }
      if (game_GameModeData_instance_ != 0) {
        v16 = *(_QWORD*)(v4 + 16);
        v17 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        if (v16 != 0 && v17 != 0) {
          v19 = *(_QWORD*)(v16 + 288);
          if (v19 != 0) {
            v20 = v10;
            v21 = GameRoutine_975940(v19);
            if (v21 == 0 || (v22 = v21, (v23 = *(_QWORD*)(v17 + 288)) == 0) ||
                (v24 = GameRoutine_975940(v23)) == 0) {
              v29 = false;
              v10 = v20;
              goto LABEL_35;
            }
            v25 = v24;
            v10 = v20;
            if (*(_WORD*)(v22 + 312) != 0) {
              v26 = *(unsigned __int16*)(v22 + 312) - 1LL;
              v27 = (__int64*)(*(_QWORD*)(v22 + 320) + 8LL);
              do {
                v28 = *v27;
                v27 += 2;
                v29 = v28 == v25;
              } while (v28 != v25 && v26-- != 0);
              goto LABEL_35;
            }
          }
        }
      }
      v29 = false;
    LABEL_35:
      v31 = GameRoutine_1489520(*(_QWORD*)(v10 + 32), a1, a2, v29);
      if (v31 != nullptr) {
        v32 = (__int64)v31;
        snd_Fade_Fade_10c830((__int64)v36, 0x0.0p+0f);
        snd_play_ff2d0(v32, v32, (__int64)v36, 0, 0x10001u, 0, 0x0.0p+0f,
                       0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade(v36);
      }
      else {
        v34_.v34 = 0;
        v34_.v35 = 0x2000;
      }
      if ((snd_fnd_WeakHandle_isValid(&v34_.v34) & 1) != 0) {
        v33 = *(_QWORD*)(v4 + 24);
        if (v33 != 0) {
          GameRoutine_ceeb40(v33, (__int64)&v34_.v34);
        }
      }
      goto LABEL_9;
    }
  }
  return result;
}

_QWORD* game_14891b0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _BYTE* v3;
  _BOOL8 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  _QWORD* v16;
  __int64 v17;
  _BYTE v18[200];

  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 56) == 4 &&
      *((_BYTE*)result + 32) == 2) {
    v1 = result[10];
    if (v1 != 0) {
      v2 = *(_QWORD*)(result[18] + 8LL);
      result = (_QWORD*)AssetTableFile_7e94a0_alt1(v2);
      if (result != nullptr) {
        v3 = (_BYTE*)result[4];
        if (v3 != nullptr && *v3 != 0) {
          if (game_GameModeData_instance_ != 0) {
            v4 = false;
            if (v2 == 0) {
              goto LABEL_25;
            }
            v5 = *(_QWORD*)(game_GameModeData_instance_ + 96);
            if (v5 == 0) {
              goto LABEL_25;
            }
            if (*(_QWORD*)(v2 + 288) != 0) {
              v6 = result;
              v7 = GameRoutine_975940_alt1(*(_QWORD*)(v2 + 288));
              if (v7 == 0 || (v8 = v7, (v9 = *(_QWORD*)(v5 + 288)) == 0) ||
                  (v10 = GameRoutine_975940_alt1(v9)) == 0) {
                v4 = false;
                result = v6;
              LABEL_25:
                result = (_QWORD*)GameRoutine_1489520_alt1(
                    result[4], 0, *(_QWORD*)(v1 + 8), v4);
                if (result != nullptr) {
                  v16 = result;
                  snd_Fade_Fade_10c830_alt1(v18, 0.0f);
                  snd_play_ff2d0_alt1((void*)(&v17), v16, v16, v18, 0, 65537, 0,
                                      0.0f, 1.0f);
                  return (_QWORD*)snd_Fade_Destroy_Fade_alt1(v18);
                }
                return result;
              }
              v11 = v10;
              result = v6;
              if (*(_WORD*)(v8 + 312) != 0) {
                v12 = *(unsigned __int16*)(v8 + 312) - 1LL;
                v13 = (__int64*)(*(_QWORD*)(v8 + 320) + 8LL);
                do {
                  v14 = *v13;
                  v13 += 2;
                  v4 = v14 == v11;
                } while (v14 != v11 && v12-- != 0);
                goto LABEL_25;
              }
            }
          }
          v4 = false;
          goto LABEL_25;
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_148a650(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  float v2;
  float v3;
  __int64 result;
  float v5;
  float v6;
  __int64 v7;

  if (GameData_2241850 != 0) {
    v2 = ProcTheaterSceneAct_13e2420(&GameData_1a9666d);
    v3 = ProcTheaterSceneAct_13e2420(&GameData_1afaa50);
    result = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v5 = 1.0f;
    *(_QWORD*)(result + 8) = 0;
    *(_QWORD*)(result + 16) = 0;
    *(_QWORD*)result = GameData_20432d0;
    if (v2 <= 1.0f) {
      v6 = v2;
    }
    else {
      v6 = 1.0f;
    }
    if (v2 < -1.0f) {
      v6 = -1.0f;
    }
    if (v3 <= 1.0f) {
      v5 = v3;
    }
    *(float*)(result + 24) = v6;
    v7 = result + 24;
    if (v3 < -1.0f) {
      v5 = -1.0f;
    }
    *(float*)(result + 28) = v5;
  }
  else {
    result = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    *(_QWORD*)(result + 8) = 0;
    *(_QWORD*)(result + 16) = 0;
    *(_QWORD*)result = GameData_20432d0;
    *(_QWORD*)(result + 24) = 0;
    v7 = result + 24;
  }
  *a1 = v7;
  a1[1] = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_148f260(PSEUDO_X8 x8_, __int64 result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
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
  if (*(_WORD*)(result + 88) != 0) {
    v3 = 8LL * *(unsigned __int16*)(result + 88);
    v4 = result;
    v5 = 0;
    v6 = nullptr;
    v7 = 0;
    do {
      v8 = *(_QWORD*)(*(_QWORD*)(v4 + 96) + v5);
      v9 = a2[2];
      if ((unsigned __int64)v6 < v9) {
        *(_QWORD*)v6 = v8;
        v6 += 8;
      }
      else {
        v10 = &v6[-v7];
        v11 = (__int64)&v6[-v7] >> 3;
        v12 = v11 + 1;
        if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
          *a2 = v7;
          GameRoutine_60f930_alt1();
        }
        v13 = v9 - v7;
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
            *a2 = v7;
            GameRoutine_60a210_alt2();
          }
          v15 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
        }
        else {
          v15 = 0;
        }
        v16 = v15 + 8 * v14;
        v17 = &v6[-v7];
        v18 = (__int64)&v10[v15 + -8 * v11];
        *(_QWORD*)&v10[v15] = v8;
        v6 = &v10[v15 + 8];
        result = memcpy(v18, v7, v17);
        a2[1] = (__int64)v6;
        a2[2] = v16;
        if (v7 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v19 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
        }
        v7 = v18;
      }
      v5 += 8;
      a2[1] = (__int64)v6;
    } while (v3 != v5);
  }
  else {
    v7 = 0;
  }
  *a2 = v7;
  {
    result;
    return;
  }
}

__int64* game_149e9e0(unsigned __int8 a1)
{
  int v2;
  unsigned __int8 v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_224b518,
                            memory_order_acquire) &
       1) == 0) {
    v3 = a1;
    v2 = __cxa_guard_acquire(&GameData_224b518);
    a1 = v3;
    if (v2 != 0) {
      GameData_224b490 = (__int64)&GameData_1aa2245;
      GameData_224b488[0] = game_HashString((__int64)&GameData_1aa2245);
      GameData_224b4a0 = (__int64)&GameData_1aa5c86;
      GameData_224b498 = game_HashString((__int64)&GameData_1aa5c86);
      GameData_224b4b0 = (__int64)&GameData_1afa7c7;
      GameData_224b4a8 = game_HashString((__int64)&GameData_1afa7c7);
      GameData_224b4c0 = (__int64)&GameData_1aa225a;
      GameData_224b4b8 = game_HashString((__int64)&GameData_1aa225a);
      GameData_224b4d0 = (__int64)&GameData_1ae7328;
      GameData_224b4c8 = game_HashString((__int64)&GameData_1ae7328);
      GameData_224b4e0 = (__int64)&GameData_1adf75d;
      GameData_224b4d8 = game_HashString((__int64)&GameData_1adf75d);
      GameData_224b4f0 = (__int64)&GameData_1ad41a8;
      GameData_224b4e8 = game_HashString((__int64)&GameData_1ad41a8);
      GameData_224b500 = (__int64)&GameData_1a96422;
      GameData_224b4f8 = game_HashString((__int64)&GameData_1a96422);
      GameData_224b510 = (__int64)&GameData_1ae3590;
      GameData_224b508 = game_HashString((__int64)&GameData_1ae3590);
      __cxa_guard_release(&GameData_224b518);
      a1 = v3;
    }
  }
  if (a1 == 9) {
    return GameData_212c650[0];
  }
  else {
    return &GameData_224b488[2 * a1];
  }
}

unsigned __int64 game_149edd0(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  unsigned __int64 result;
  __int64 v7;
  _BYTE v8[16];
  _QWORD v9[2];
  char* v10;

  v2 = strlen(a1);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v2);
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v5, 16, 0);
    v9[1] = v3;
    v10 = v4;
    v9[0] = v5 | 1;
  }
  else {
    LOBYTE(v9[0]) = 2 * v2;
    v4 = (char*)v9 + 1;
    if (v2 == 0) {
      goto LABEL_10;
    }
  }
  memcpy(v4, a1, v3);
LABEL_10:
  v4[v3] = 0;
  result = X8CALL_X0(
      unsigned __int64,
      ForceContinueBGMBinder_1487fc0((void*)((__int64)v8), (__int64)v9, 1u));
  if ((v9[0] & 1) != 0 && v10 != nullptr) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  return result;
}

__int64 game_1513f20(__int64 a1)
{
  _BYTE* v1;
  unsigned __int64 v3;
  int v4;
  unsigned __int8** v5;
  unsigned __int8** v6;
  int v7;
  unsigned __int8* v8;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  __int64 v31;
  __int64* v32;
  unsigned int v33;
  unsigned __int8* v34;
  int v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  int v39;
  __int64 v40;
  unsigned int v41;
  unsigned __int8* v42;
  int v43;
  int v44;
  unsigned int v45;
  unsigned int v46;
  int v47;
  __int64 v48;
  unsigned int v49;
  unsigned __int8* v50;
  int v51;
  int v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  __int64 v56;
  unsigned int v57;
  unsigned __int8* v58;
  int v59;

  v1 = *(_BYTE**)(a1 + 80);
  v4 = false;
  if (v1[73] == 20) {
    v3 = (unsigned __int8)v1[94];
    if (v3 <= 2 && *(_BYTE*)(**(_QWORD**)(a1 + 8) + v3 + 104) == 2) {
      v4 = true;
    }
  }
  v5 = *(unsigned __int8***)(GameData_21c9e90 + 64);
  v6 = *(unsigned __int8***)(GameData_21c9e90 + 72);
  if (v5 == v6) {
  LABEL_12:
    v8 = nullptr;
  }
  else {
    v7 = (unsigned __int8)v1[96];
    while (1) {
      v8 = *v5;
      if (v7 == (*v5)[33] && v8[32] == v4) {
        break;
      }
      if (++v5 == v6) {
        goto LABEL_12;
      }
    }
  }
  nn_os_LockMutex(&game_g_random_mutex);
  v9 = game_map_MapRandom_instance__ptr[0];
  v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8);
  v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) ^
        (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL))
         << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 4) = v10;
  v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8) = v11;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 12) = v13;
  v14 = v13 & 0x7FFFFFFF;
  result = nn_os_UnlockMutex(&game_g_random_mutex);
  if (v14 % 0x64 >= v8[37] || (v16 = *(_QWORD*)(a1 + 32)) == 0) {
    v17 = *(_QWORD*)(*(_QWORD*)a1 + 88LL);
    if (game_GameModeData_instance_ != 0) {
      v18 = GameSubquestData_125b8e0(
          GameData_21c9718, v17,
          *(unsigned __int8*)(game_GameModeData_instance_ + 15));
      if (v18 == 0) {
        goto LABEL_24;
      }
    }
    else {
      v18 = GameSubquestData_125b8e0(GameData_21c9718, v17, 0);
      if (v18 == 0) {
        goto LABEL_24;
      }
    }
    v19 = *(unsigned __int8*)(v18 + 9);
    if (v19 != 3 && (v19 & 0xFE) == 2) {
      *(_DWORD*)(a1 + 64) = 1;
      nn_os_LockMutex(&game_g_random_mutex);
      v44 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8);
      v45 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 12);
      v46 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) ^
            (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) << 11);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) =
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 4) = v44;
      v47 = (v46 >> 8) ^ (v45 >> 19) ^ v46 ^ v45;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8) = v45;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 12) = v47;
      result = nn_os_UnlockMutex(&game_g_random_mutex);
      v48 = *(_QWORD*)(a1 + 8);
      if (*(_QWORD*)(a1 + 16) == v48) {
        return result;
      }
      v32 = (__int64*)(v48 - 8);
      v49 = 0;
      v50 = *(unsigned __int8**)(a1 + 40);
      do {
        v51 = *v50++;
        ++v32;
        v49 += v51;
      } while ((v47 & 0x7FFFFFFFu) % 0x64 >= v49);
    LABEL_41:
      v16 = *v32;
      goto LABEL_42;
    }
  LABEL_24:
    nn_os_LockMutex(&game_g_random_mutex);
    v21 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8);
    v22 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 12);
    v23 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) ^
          (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) << 11);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) =
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 4) = v21;
    v24 = (v23 >> 8) ^ (v22 >> 19) ^ v23 ^ v22;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8) = v22;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 12) = v24;
    v25 = v24 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
    v26 = v8[34];
    if (v25 % 0x64 >= v26) {
      if (v25 % 0x64 >= v8[36] + v26) {
        *(_DWORD*)(a1 + 64) = 3;
        nn_os_LockMutex(&game_g_random_mutex);
        v52 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8);
        v53 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 12);
        v54 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) ^
              (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) << 11);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) =
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 4) = v52;
        v55 = (v54 >> 8) ^ (v53 >> 19) ^ v54 ^ v53;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8) = v53;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 12) = v55;
        result = nn_os_UnlockMutex(&game_g_random_mutex);
        v56 = *(_QWORD*)(a1 + 8);
        if (*(_QWORD*)(a1 + 16) == v56) {
          return result;
        }
        v32 = (__int64*)(v56 - 8);
        v57 = 0;
        v58 = *(unsigned __int8**)(a1 + 40);
        do {
          v59 = *v58++;
          ++v32;
          v57 += v59;
        } while ((v55 & 0x7FFFFFFFu) % 0x64 >= v57);
      }
      else {
        *(_DWORD*)(a1 + 64) = 2;
        nn_os_LockMutex(&game_g_random_mutex);
        v36 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8);
        v37 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 12);
        v38 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) ^
              (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) << 11);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) =
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 4) = v36;
        v39 = (v38 >> 8) ^ (v37 >> 19) ^ v38 ^ v37;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8) = v37;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 12) = v39;
        result = nn_os_UnlockMutex(&game_g_random_mutex);
        v40 = *(_QWORD*)(a1 + 8);
        if (*(_QWORD*)(a1 + 16) == v40) {
          return result;
        }
        v32 = (__int64*)(v40 - 8);
        v41 = 0;
        v42 = *(unsigned __int8**)(a1 + 40);
        do {
          v43 = *v42++;
          ++v32;
          v41 += v43;
        } while ((v39 & 0x7FFFFFFFu) % 0x64 >= v41);
      }
    }
    else {
      *(_DWORD*)(a1 + 64) = 1;
      nn_os_LockMutex(&game_g_random_mutex);
      v27 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8);
      v28 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 12);
      v29 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) ^
            (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) << 11);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) =
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 4) = v27;
      v30 = (v29 >> 8) ^ (v28 >> 19) ^ v29 ^ v28;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8) = v28;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 12) = v30;
      result = nn_os_UnlockMutex(&game_g_random_mutex);
      v31 = *(_QWORD*)(a1 + 8);
      if (*(_QWORD*)(a1 + 16) == v31) {
        return result;
      }
      v32 = (__int64*)(v31 - 8);
      v33 = 0;
      v34 = *(unsigned __int8**)(a1 + 40);
      do {
        v35 = *v34++;
        ++v32;
        v33 += v35;
      } while ((v30 & 0x7FFFFFFFu) % 0x64 >= v33);
    }
    goto LABEL_41;
  }
  *(_DWORD*)(a1 + 64) = 1;
LABEL_42:
  *(_QWORD*)(a1 + 72) = v16;
  return result;
}

char* game_1514470(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 80);
  if (v1 == 0) {
    return &GameData_1a9f09e;
  }
  if (*(_BYTE*)(v1 + 73) == 20 &&
      (unsigned __int64)(v2 = *(unsigned __int8*)(v1 + 94)) <= 2 &&
      *(_BYTE*)(**(_QWORD**)(a1 + 8) + v2 + 104) == 2) {
    nn_os_LockMutex(&game_g_random_mutex);
    v3 = game_map_MapRandom_instance__ptr[0];
    v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((_UNKNOWN**)0x8LL));
    v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v6 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
         (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v3 + 1) = v4;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v5;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) =
        (v6 >> 8) ^ (v5 >> 19) ^ v6 ^ v5;
    nn_os_UnlockMutex(&game_g_random_mutex);
    if (game_GameModeData_instance_ != 0) {
      v7 = *(unsigned int*)(game_GameModeData_instance_ + 60);
    }
    else {
      v7 = 0;
    }
    return (char*)game_util_Format(
        "MID_Gmap_CaptureAnimal_Item_Correct_Part%d_00%d", v7);
  }
  else if (game_GameModeData_instance_ != 0) {
    return (char*)game_util_Format(
        "MID_Gmap_CaptureAnimal_Item_Incorrect_Part%d_001",
        *(unsigned int*)(game_GameModeData_instance_ + 60));
  }
  else {
    return (char*)game_util_Format(
        "MID_Gmap_CaptureAnimal_Item_Incorrect_Part%d_001", 0);
  }
}

__n128 game_1514d20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __n128 result;
  unsigned __int64 v13;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  struct {
    __int64 v39;
    __int64 v40;
    __int64 v41;
  } v39_;
  struct {
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    char v49;
    char gap89_[3];
    char v50;
    char gap93_[3];
    __int64 v51;
    __int64 v52;
    int v53;
  } v42_;
  __int128 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  char v59;
  char v60;
  char v61;
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
  __int64 v73;
  __int64 v74;
  struct {
    _QWORD v75[5];
    char v76;
  } v75_;
  __int64 v77[3];
  struct {
    _QWORD v78[2];
    char* v79;
  } v78_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  BYTE12(v54) = 0;
  LOBYTE(v54) = 22;
  *(_QWORD*)((char*)&v54 + 1) = 0xE7958BE55F444950LL;
  DWORD2(v54) = 1604946407;
  v2 = *(_QWORD*)(a1 + 208);
  v3 = *(_QWORD*)(v2 + 8);
  if (v3 != 0) {
    v4 = strchr(*(_QWORD*)(v2 + 8), 95),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v4 != 0) {
      v3 = v4 + 1;
    }
  }
  v5 = strlen(v3),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v6 = (_QWORD*)GameRoutine_1a09ce0(&v54, v3, v5),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v8 = v6[1];
  v7 = (char*)v6[2];
  v78_.v78[0] = *v6;
  v78_.v78[1] = v8;
  v78_.v79 = v7;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = 0;
  if ((v54 & 1) != 0 && v55 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v78_.v78[0] & 1) != 0) {
    v10 = v78_.v79;
  }
  else {
    v10 = (char*)v78_.v78 + 1;
  }
  v11 = game_HashString((__int64)v10),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v11 == 0) {
    goto LABEL_40;
  }
  v13 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v13 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_40;
  }
  v15 = v13 - 1;
  if ((v13 & (v13 - 1)) != 0) {
    v16 = v11;
    if (v11 >= v13) {
      v16 = v11 % v13;
    }
  }
  else {
    v16 = v15 & v11;
  }
  v17 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v16);
  if (v17 == nullptr) {
    goto LABEL_40;
  }
  v18 = (_QWORD*)*v17;
  if (v18 == nullptr) {
    goto LABEL_40;
  }
  if ((v13 & v15) == 0) {
    while (1) {
      v20 = v18[1];
      if (v20 == v11) {
        if (v18[2] == v11) {
          goto LABEL_37;
        }
      }
      else if ((v20 & v15) != v16) {
        goto LABEL_40;
      }
      v18 = (_QWORD*)*v18;
      if (v18 == nullptr) {
        goto LABEL_40;
      }
    }
  }
  while (1) {
    v19 = v18[1];
    if (v19 == v11) {
      break;
    }
    if (v19 >= v13) {
      v19 %= v13;
    }
    if (v19 != v16) {
      goto LABEL_40;
    }
  LABEL_26:
    v18 = (_QWORD*)*v18;
    if (v18 == nullptr) {
      goto LABEL_40;
    }
  }
  if (v18[2] != v11) {
    goto LABEL_26;
  }
LABEL_37:
  v21 = v18[3];
  if (v21 == 0) {
  LABEL_40:
    v27 = *(_QWORD**)(a1 + 192);
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    if (v27 == (_QWORD*)(a1 + 160)) {
      v28 = 32;
    }
    else {
      if (v27 == nullptr) {
        goto LABEL_45;
      }
      v28 = 40;
    }
    (*(void (**)(__int64))(*v27 + v28))((__int64)v27),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_45:
    v29 = *(_QWORD*)(a1 + 8);
    if (v29 == 0) {
      goto LABEL_53;
    }
    while (1) {
      if (*(_BYTE*)v29 == 2) {
        if (*(_DWORD*)(v29 + 32) == 3) {
          *(_QWORD*)(a1 + 16) = v29;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          goto LABEL_53;
        }
      }
      else if (*(_BYTE*)v29 == 0) {
        goto LABEL_53;
      }
      v29 += 64;
    }
  }
  LOWORD(v77[0]) = 0;
  v23 = *((_QWORD*)TroopMgr_1346380() + 16),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v23 != 0) {
    GameRoutine_1a09ce0(v77, "Field_", 6),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v24 = *(_QWORD*)(v23 + 8);
    v25 = strlen(v24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_1a09ce0(v77, v24, v25),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v26 = LOBYTE(v77[0]);
    v22 = v77[1];
  }
  else {
    v26 = 0;
  }
  if ((v26 & 1) != 0) {
    v31 = v22;
  }
  else {
    v31 = v26 >> 1;
  }
  if (v31 == 0) {
    GameRoutine_60a020((__int64)v77, (__int64)&GameData_1af8f10),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v60 = 0;
  v61 = 0;
  v54 = (__typeof__(v54)){0};
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v75_.v76 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  LOBYTE(v75_.v75[0]) = 0;
  v62 = 0x500000005LL;
  GameRoutine_eb8bb0((__int64*)&v54, v77),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v32 = GameRoutine_714d40(),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v62 = 0x100000001LL;
  CmdbtlPartyNatives_eb8a90((__int64)&v54, (__int64)v32, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v42_.v50 = 0;
  v42_.v44 = 0;
  v42_.v45 = 0;
  v42_.v46 = 0;
  v42_.v47 = 0;
  v42_.v48 = 0;
  v42_.v49 = 0;
  v42_.v53 = 0;
  v42_.v42 = v21;
  v42_.v43 = 0;
  v42_.v51 = 1;
  v42_.v52 = 0;
  CmdbtlPartyNatives_eb8a30((__int64)&v54, (__int64)&v42_.v42),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_eb90a0(&v54),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v42_.v46 != 0) {
    v42_.v47 = v42_.v46;
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v42_.v43 != 0) {
    v42_.v44 = v42_.v43;
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v34),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v35 = *(_QWORD*)(a1 + 216);
  if (v35 != 0) {
    v42_.v43 = 0;
    v42_.v44 = 0;
    v42_.v42 = 0;
    LODWORD(v42_.v46) = 1;
    game_6e8720((__int64)&v39_.v39, v35),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v42_.v45 = v39_.v39;
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      game_120e900(), result = COERCE_AS(__typeof__(result),
                                         PSEUDO_REGISTER(__n128, "v0", "=w"));
      GameRoutine_eb5940((void*)(&v39_.v39)),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v42_.v42 = v39_.v39;
      v42_.v43 = v39_.v40;
      v42_.v44 = v39_.v41;
      GameRoutine_120ef00(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      GameRoutine_eb5940((void*)(&v39_.v39)),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v42_.v42 = v39_.v39;
      v42_.v43 = v39_.v40;
      v42_.v44 = v39_.v41;
    }
    GameRoutine_eb8f90((__int64)v75_.v75, &v42_.v42),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v42_.v42 != 0) {
      v42_.v43 = v42_.v42;
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v36),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  ProcCmdBtlSeq_e61c90((__int64)&GameData_2216780, (__int64)&v54),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_DWORD*)(a1 + 152) = 2;
  if (v75_.v76 == 1 && v75_.v75[0] != 0) {
    v75_.v75[1] = v75_.v75[0];
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v37),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  result = GameRoutine_667c80((__int64)&v54);
  if ((v77[0] & 1) != 0 && v77[2] != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v38);
  }
LABEL_53:
  if ((v78_.v78[0] & 1) != 0 && v78_.v79 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
  }
  return result;
}

bool game_1552980()
{
  __int64 v0;
  _BYTE* v1;
  float v2;
  __int64 v3;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  __int64 v10;
  float v11;
  float v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  bool v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  bool v28;
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
  float v44;
  float v45;
  unsigned __int64 v46[2];

  v0 = GameData_2258178;
  if (GameData_2258178 == 0) {
    return false;
  }
  v1 = (_BYTE*)game_g_game_setting;
  if (*(_BYTE*)(game_g_game_setting + 807) == 1) {
    if ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0) {
      goto LABEL_14;
    }
    if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
        (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
        (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) {
    LABEL_11:
      if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
          (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
          (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) {
        goto LABEL_14;
      }
      v2 = 0x0.0p+0f;
      if (*(_BYTE*)(game_g_game_setting + 903) == 1) {
      LABEL_21:
        if ((*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
            (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
             (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0 ||
             (*(_BYTE*)(game_g_game_setting + 902) & 1) == 0)) {
          goto LABEL_27;
        }
        v3 = 868;
        goto LABEL_26;
      }
    LABEL_27:
      if (*(_BYTE*)(game_g_game_setting + 807) != 0) {
        if ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0) {
          goto LABEL_39;
        }
        if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
            (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
            (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) {
        LABEL_36:
          if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
              (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
              (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) {
            goto LABEL_39;
          }
          v5 = 0x0.0p+0f;
          if (*(_BYTE*)(game_g_game_setting + 903) == 1) {
          LABEL_45:
            if ((*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
                (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
                 (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0 ||
                 (*(_BYTE*)(game_g_game_setting + 902) & 1) == 0)) {
              goto LABEL_51;
            }
            v6 = 872;
            goto LABEL_50;
          }
        LABEL_51:
          v7 = v2 + *(float*)(GameData_2258178 + 540);
          v8 = *(float*)(GameData_2258178 + 544);
          *(float*)(GameData_2258178 + 540) = v7;
          v9 = v8 - v5;
          *(float*)(v0 + 544) = v9;
          if (v1[807] != 1) {
            goto LABEL_71;
          }
          if ((v1[804] & 1) != 0) {
          LABEL_53:
            v10 = 772;
          LABEL_54:
            v11 = (float)*(int*)&v1[v10];
            goto LABEL_55;
          }
          if (v1[940] != 1 || (v1[805] & 1) == 0 || (v1[806] & 1) == 0) {
          LABEL_71:
            v11 = 0x0.0p+0f;
            if (v1[903] != 1 ||
                (v1[900] & 1) == 0 &&
                    (v1[940] != 1 || (v1[901] & 1) == 0 || v1[902] != 1)) {
              goto LABEL_111;
            }
            if (v1[807] == 0) {
              goto LABEL_79;
            }
            if ((v1[804] & 1) != 0) {
              goto LABEL_53;
            }
          }
          if (v1[940] != 1 || (v1[805] & 1) == 0 || (v1[806] & 1) == 0) {
            v11 = 0x0.0p+0f;
            if (v1[903] != 1) {
              goto LABEL_56;
            }
          LABEL_79:
            if ((v1[900] & 1) == 0 &&
                (v1[940] != 1 || (v1[901] & 1) == 0 || v1[902] != 1)) {
              goto LABEL_55;
            }
            if (v1[807] == 0) {
              goto LABEL_86;
            }
            if ((v1[804] & 1) != 0) {
              goto LABEL_53;
            }
          }
          if (v1[940] == 1 && (v1[805] & 1) != 0 && (v1[806] & 1) != 0) {
            goto LABEL_53;
          }
          v11 = 0x0.0p+0f;
          if (v1[903] == 1) {
          LABEL_86:
            if ((v1[900] & 1) != 0 ||
                v1[940] == 1 && (v1[901] & 1) != 0 && (v1[902] & 1) != 0) {
              v10 = 868;
              goto LABEL_54;
            }
          }
        LABEL_55:
          if (v1[807] == 0) {
            goto LABEL_60;
          }
        LABEL_56:
          if ((v1[804] & 1) != 0) {
            goto LABEL_67;
          }
          if (v1[940] != 1 || (v1[805] & 1) == 0 || (v1[806] & 1) == 0) {
          LABEL_60:
            v12 = 0x0.0p+0f;
            if (v1[903] != 1 ||
                (v1[900] & 1) == 0 &&
                    (v1[940] != 1 || (v1[901] & 1) == 0 || v1[902] != 1)) {
              goto LABEL_110;
            }
            if (v1[807] == 0) {
              goto LABEL_104;
            }
            if ((v1[804] & 1) == 0) {
              goto LABEL_64;
            }
          LABEL_67:
            v13 = 776;
          LABEL_109:
            v12 = (float)*(int*)&v1[v13];
            goto LABEL_110;
          }
        LABEL_64:
          if (v1[940] == 1 && (v1[805] & 1) != 0 && (v1[806] & 1) != 0) {
            goto LABEL_67;
          }
          v12 = 0x0.0p+0f;
          if (v1[903] == 1) {
          LABEL_104:
            if ((v1[900] & 1) == 0 &&
                (v1[940] != 1 || (v1[901] & 1) == 0 || (v1[902] & 1) == 0)) {
              goto LABEL_110;
            }
            v13 = 872;
            goto LABEL_109;
          }
        LABEL_110:
          v11 = sqrtf((float)(PSEUDO_UNFUSED(v12 * v12)) + (float)(v11 * v11));
        LABEL_111:
          v14 = v11 + *(float*)(v0 + 548);
          v15 = *(float*)(v0 + 536);
          *(float*)(v0 + 548) = v14;
          v16 = v14 / v15;
          if (v15 > 0x0.0p+0f && v16 >= 0x1.0000000000000p+0f) {
            if (v9 == 0x0.0p+0f) {
              if (v7 < 0x0.0p+0f) {
                v17 = -0x1.6800000000000p+6f;
              }
              else {
                v17 = 0x1.6800000000000p+6f;
              }
            }
            else {
              if (v9 >= 0x0.0p+0f) {
                if (v7 >= 0x0.0p+0f) {
                  v40 = v9 / v7;
                  v28 = v9 < v7;
                  v41 = v7 / v9;
                  v42 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                  (_QWORD)GameData_212c2f0);
                  v43 = *(float*)((char*)((__int128*)0x10LL) +
                                  (_QWORD)GameData_212c2f0);
                  v44 = *(float*)((char*)((__int128*)0x10LL) +
                                  (_QWORD)GameData_212c2f0 + 8);
                  v25 = v41 *
                        (float)((
                                    float)((float)((float)((float)(v44 +
                                                                   (float)((float)((
                                                                                       float)((
                                                                                                  float)(v43 + (float)((float)((float)((float)(v42 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v41 * v41)) - *((float*)GameData_212c2f0 + 1)) * (float)(v41 * v41))) * (float)(v41 * v41)) - *(
                                                                                                                                                                                                                                                                                                                   float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                       (float)(v41 *
                                                                                                                               v41))) *
                                                                                              (float)(v41 *
                                                                                                      v41)) -
                                                                                   *(float*)((char*)((
                                                                                                 __int128*)0x10LL) +
                                                                                             (_QWORD)
                                                                                                 GameData_212c2f0 +
                                                                                             4)) *
                                                                           (float)(v41 *
                                                                                   v41))) *
                                                           (float)(v41 * v41)) -
                                                   *(float*)((char*)((
                                                                 __int128*)0x10LL) +
                                                             (_QWORD)
                                                                 GameData_212c2f0 +
                                                             12)) *
                                           (float)(v41 * v41)) +
                                0x1.0000000000000p+0f);
                  v33 = 0x1.921fb60000000p+0f -
                        (float)(PSEUDO_UNFUSED(
                            v40 *
                            (float)((
                                        float)((float)((float)((float)(v44 + (float)((
                                                                                         float)((
                                                                                                    float)((
                                                                                                               float)(v43 + (float)((
                                                                                                                                        float)((float)((float)(v42 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v40 * v40)) - *((float*)GameData_212c2f0 + 1)) * (float)(v40 * v40))) * (float)(v40 * v40)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                         4)) *
                                                                                                                                    (float)(v40 *
                                                                                                                                            v40))) *
                                                                                                           (float)(v40 *
                                                                                                                   v40)) -
                                                                                                *(float*)((char*)((
                                                                                                              __int128*)0x10LL) +
                                                                                                          (_QWORD)
                                                                                                              GameData_212c2f0 +
                                                                                                          4)) *
                                                                                     (float)(v40 *
                                                                                             v40))) *
                                                               (float)(v40 *
                                                                       v40)) -
                                                       *(float*)((char*)((
                                                                     __int128*)0x10LL) +
                                                                 (_QWORD)
                                                                     GameData_212c2f0 +
                                                                 12)) *
                                               (float)(v40 * v40)) +
                                    0x1.0000000000000p+0f)));
                }
                else {
                  v26 = -v7;
                  v27 = v9 / v26;
                  v28 = v9 < v26;
                  v29 = v26 / v9;
                  v30 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                  (_QWORD)GameData_212c2f0);
                  v31 = *(float*)((char*)((__int128*)0x10LL) +
                                  (_QWORD)GameData_212c2f0);
                  v32 = *(float*)((char*)((__int128*)0x10LL) +
                                  (_QWORD)GameData_212c2f0 + 8);
                  v25 =
                      -(float)(v29 *
                               (float)((float)((float)((float)((float)(v32 + (float)((
                                                                                         float)((
                                                                                                    float)((
                                                                                                               float)(v31 + (float)((
                                                                                                                                        float)((float)((float)(v30 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v29 * v29)) - *((float*)GameData_212c2f0 + 1)) * (float)(v29 * v29))) * (float)(v29 * v29)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                         4)) *
                                                                                                                                    (float)(v29 *
                                                                                                                                            v29))) *
                                                                                                           (float)(v29 *
                                                                                                                   v29)) -
                                                                                                *(float*)((char*)((
                                                                                                              __int128*)0x10LL) +
                                                                                                          (_QWORD)
                                                                                                              GameData_212c2f0 +
                                                                                                          4)) *
                                                                                     (float)(v29 *
                                                                                             v29))) *
                                                               (float)(v29 *
                                                                       v29)) -
                                                       *(float*)((char*)((
                                                                     __int128*)0x10LL) +
                                                                 (_QWORD)
                                                                     GameData_212c2f0 +
                                                                 12)) *
                                               (float)(v29 * v29)) +
                                       0x1.0000000000000p+0f));
                  v33 = (float)(PSEUDO_UNFUSED(
                            v27 *
                            (float)((
                                        float)((float)((float)((float)(v32 + (float)((
                                                                                         float)((
                                                                                                    float)((
                                                                                                               float)(v31 + (float)((
                                                                                                                                        float)((float)((float)(v30 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v27 * v27)) - *((float*)GameData_212c2f0 + 1)) * (float)(v27 * v27))) * (float)(v27 * v27)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                         4)) *
                                                                                                                                    (float)(v27 *
                                                                                                                                            v27))) *
                                                                                                           (float)(v27 *
                                                                                                                   v27)) -
                                                                                                *(float*)((char*)((
                                                                                                              __int128*)0x10LL) +
                                                                                                          (_QWORD)
                                                                                                              GameData_212c2f0 +
                                                                                                          4)) *
                                                                                     (float)(v27 *
                                                                                             v27))) *
                                                               (float)(v27 *
                                                                       v27)) -
                                                       *(float*)((char*)((
                                                                     __int128*)0x10LL) +
                                                                 (_QWORD)
                                                                     GameData_212c2f0 +
                                                                 12)) *
                                               (float)(v27 * v27)) +
                                    0x1.0000000000000p+0f))) +
                        -0x1.921fb60000000p+0f;
                }
                if (v28) {
                  v25 = v33;
                }
              }
              else {
                if (v7 >= 0x0.0p+0f) {
                  v34 = -v9;
                  v35 = v34 / v7;
                  v19 = v7 > v34;
                  v36 = v7 / v34;
                  v37 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                  (_QWORD)GameData_212c2f0);
                  v38 = *(float*)((char*)((__int128*)0x10LL) +
                                  (_QWORD)GameData_212c2f0);
                  v39 = *(float*)((char*)((__int128*)0x10LL) +
                                  (_QWORD)GameData_212c2f0 + 8);
                  v24 = (float)(PSEUDO_UNFUSED(
                            v35 *
                            (float)((
                                        float)((float)((float)((float)(v39 + (float)((
                                                                                         float)((
                                                                                                    float)((
                                                                                                               float)(v38 + (float)((
                                                                                                                                        float)((float)((float)(v37 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v35 * v35)) - *((float*)GameData_212c2f0 + 1)) * (float)(v35 * v35))) * (float)(v35 * v35)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                         4)) *
                                                                                                                                    (float)(v35 *
                                                                                                                                            v35))) *
                                                                                                           (float)(v35 *
                                                                                                                   v35)) -
                                                                                                *(float*)((char*)((
                                                                                                              __int128*)0x10LL) +
                                                                                                          (_QWORD)
                                                                                                              GameData_212c2f0 +
                                                                                                          4)) *
                                                                                     (float)(v35 *
                                                                                             v35))) *
                                                               (float)(v35 *
                                                                       v35)) -
                                                       *(float*)((char*)((
                                                                     __int128*)0x10LL) +
                                                                 (_QWORD)
                                                                     GameData_212c2f0 +
                                                                 12)) *
                                               (float)(v35 * v35)) +
                                    0x1.0000000000000p+0f))) +
                        0x1.921fb60000000p+0f;
                  v25 = 0x1.921fb60000000p+1f -
                        (float)(PSEUDO_UNFUSED(
                            v36 *
                            (float)((
                                        float)((float)((float)((float)(v39 + (float)((
                                                                                         float)((
                                                                                                    float)((
                                                                                                               float)(v38 + (float)((
                                                                                                                                        float)((float)((float)(v37 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v36 * v36)) - *((float*)GameData_212c2f0 + 1)) * (float)(v36 * v36))) * (float)(v36 * v36)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                         4)) *
                                                                                                                                    (float)(v36 *
                                                                                                                                            v36))) *
                                                                                                           (float)(v36 *
                                                                                                                   v36)) -
                                                                                                *(float*)((char*)((
                                                                                                              __int128*)0x10LL) +
                                                                                                          (_QWORD)
                                                                                                              GameData_212c2f0 +
                                                                                                          4)) *
                                                                                     (float)(v36 *
                                                                                             v36))) *
                                                               (float)(v36 *
                                                                       v36)) -
                                                       *(float*)((char*)((
                                                                     __int128*)0x10LL) +
                                                                 (_QWORD)
                                                                     GameData_212c2f0 +
                                                                 12)) *
                                               (float)(v36 * v36)) +
                                    0x1.0000000000000p+0f)));
                }
                else {
                  v18 = v9 / v7;
                  v19 = v9 > v7;
                  v20 = v7 / v9;
                  v21 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                                  (_QWORD)GameData_212c2f0);
                  v22 = *(float*)((char*)((__int128*)0x10LL) +
                                  (_QWORD)GameData_212c2f0);
                  v23 = *(float*)((char*)((__int128*)0x10LL) +
                                  (_QWORD)GameData_212c2f0 + 8);
                  v24 = -0x1.921fb60000000p+0f -
                        (float)(PSEUDO_UNFUSED(
                            v18 *
                            (float)((
                                        float)((float)((float)((float)(v23 + (float)((
                                                                                         float)((
                                                                                                    float)((
                                                                                                               float)(v22 + (float)((
                                                                                                                                        float)((float)((float)(v21 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v18 * v18)) - *((float*)GameData_212c2f0 + 1)) * (float)(v18 * v18))) * (float)(v18 * v18)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                         4)) *
                                                                                                                                    (float)(v18 *
                                                                                                                                            v18))) *
                                                                                                           (float)(v18 *
                                                                                                                   v18)) -
                                                                                                *(float*)((char*)((
                                                                                                              __int128*)0x10LL) +
                                                                                                          (_QWORD)
                                                                                                              GameData_212c2f0 +
                                                                                                          4)) *
                                                                                     (float)(v18 *
                                                                                             v18))) *
                                                               (float)(v18 *
                                                                       v18)) -
                                                       *(float*)((char*)((
                                                                     __int128*)0x10LL) +
                                                                 (_QWORD)
                                                                     GameData_212c2f0 +
                                                                 12)) *
                                               (float)(v18 * v18)) +
                                    0x1.0000000000000p+0f)));
                  v25 = (float)(PSEUDO_UNFUSED(
                            v20 *
                            (float)((
                                        float)((float)((float)((float)(v23 + (float)((
                                                                                         float)((
                                                                                                    float)((
                                                                                                               float)(v22 + (float)((
                                                                                                                                        float)((float)((float)(v21 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v20 * v20)) - *((float*)GameData_212c2f0 + 1)) * (float)(v20 * v20))) * (float)(v20 * v20)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                         4)) *
                                                                                                                                    (float)(v20 *
                                                                                                                                            v20))) *
                                                                                                           (float)(v20 *
                                                                                                                   v20)) -
                                                                                                *(float*)((char*)((
                                                                                                              __int128*)0x10LL) +
                                                                                                          (_QWORD)
                                                                                                              GameData_212c2f0 +
                                                                                                          4)) *
                                                                                     (float)(v20 *
                                                                                             v20))) *
                                                               (float)(v20 *
                                                                       v20)) -
                                                       *(float*)((char*)((
                                                                     __int128*)0x10LL) +
                                                                 (_QWORD)
                                                                     GameData_212c2f0 +
                                                                 12)) *
                                               (float)(v20 * v20)) +
                                    0x1.0000000000000p+0f))) +
                        -0x1.921fb60000000p+1f;
                }
                if (v19) {
                  v25 = v24;
                }
              }
              v17 = v25 * 0x1.ca5dc00000000p+5f;
            }
            *(float*)(v0 + 552) = v17;
            if (fabsf(v17) <= 0x1.6800000000000p+6f) {
              v46[1] = (unsigned __int64)&GameData_1ab18ee;
              v46[0] = game_HashString((__int64)&GameData_1ab18ee);
              v45 = v17 * 0x1.4000000000000p+3f;
              GameRoutine_717fc0(v46, (int)v45);
              v15 = *(float*)(v0 + 536);
              *(float*)(v0 + 564) = truncf(v45) / 0x1.4000000000000p+3f;
              v16 = *(float*)(v0 + 548) / v15;
            }
            *(_BYTE*)(v0 + 556) = 0;
          }
          return v16 < 0x1.0000000000000p+0f || v15 <= 0x0.0p+0f;
        }
      }
      v5 = 0x0.0p+0f;
      if (*(_BYTE*)(game_g_game_setting + 903) != 1 ||
          (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
              (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
               (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0 ||
               *(_BYTE*)(game_g_game_setting + 902) != 1)) {
        goto LABEL_51;
      }
      if (*(_BYTE*)(game_g_game_setting + 807) == 0) {
        goto LABEL_45;
      }
      if ((*(_BYTE*)(game_g_game_setting + 804) & 1) == 0) {
        goto LABEL_36;
      }
    LABEL_39:
      v6 = 776;
    LABEL_50:
      v5 = (float)*(int*)(game_g_game_setting + v6);
      goto LABEL_51;
    }
  }
  v2 = 0x0.0p+0f;
  if (*(_BYTE*)(game_g_game_setting + 903) != 1 ||
      (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
          (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
           (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0 ||
           *(_BYTE*)(game_g_game_setting + 902) != 1)) {
    goto LABEL_27;
  }
  if (*(_BYTE*)(game_g_game_setting + 807) == 0) {
    goto LABEL_21;
  }
  if ((*(_BYTE*)(game_g_game_setting + 804) & 1) == 0) {
    goto LABEL_11;
  }
LABEL_14:
  v3 = 772;
LABEL_26:
  v2 = (float)*(int*)(game_g_game_setting + v3);
  goto LABEL_27;
}

void* game_1556c60(_QWORD* a1, int a2, int a3)
{
  __int64* v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64** v9;
  __int64* v10;
  void* result;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64** v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64** v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64 v23;

  v3 = *(__int64**)(*a1 + 8LL * a3);
  v4 = v3[1];
  if (v4 == 0 || v3[3] == 0) {
    return &GameData_1bdc600;
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
  v8 = *v3;
  v9 = *(__int64***)(v8 + 8 * v7);
  if (v9 == nullptr) {
    return &GameData_1bdc600;
  }
  v10 = *v9;
  if (v10 == nullptr) {
    return &GameData_1bdc600;
  }
  result = &GameData_1bdc600;
  if ((v4 & v6) == 0) {
    while (1) {
      v13 = v10[1];
      if (v13 == a2) {
        if (*((_DWORD*)v10 + 4) == a2) {
          goto LABEL_25;
        }
      }
      else if ((v13 & v6) != v7) {
        return result;
      }
      v10 = (__int64*)*v10;
      if (v10 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v12 = v10[1];
    if (v12 == a2) {
      break;
    }
    if (v12 >= v4) {
      v12 %= v4;
    }
    if (v12 != v7) {
      return result;
    }
  LABEL_14:
    v10 = (__int64*)*v10;
    if (v10 == nullptr) {
      return result;
    }
  }
  if (*((_DWORD*)v10 + 4) != a2) {
    goto LABEL_14;
  }
LABEL_25:
  if ((v4 & v6) != 0) {
    v14 = a2;
    if (v4 <= a2) {
      v14 = a2 % v4;
    }
  }
  else {
    v14 = v6 & a2;
  }
  v15 = *(__int64***)(v8 + 8 * v14);
  if (v15 == nullptr) {
    goto LABEL_67;
  }
  v16 = *v15;
  if (v16 == nullptr) {
    goto LABEL_67;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v18 = v16[1];
      if (v18 == a2) {
        if (*((_DWORD*)v16 + 4) == a2) {
          goto LABEL_44;
        }
      }
      else if ((v18 & v6) != v14) {
        goto LABEL_67;
      }
      v16 = (__int64*)*v16;
      if (v16 == nullptr) {
        goto LABEL_67;
      }
    }
  }
  while (2) {
    v17 = v16[1];
    if (v17 != a2) {
      if (v17 >= v4) {
        v17 %= v4;
      }
      if (v17 != v14) {
        goto LABEL_67;
      }
    }
    else if (*((_DWORD*)v16 + 4) == a2) {
    LABEL_44:
      if (v16[4] != v16[3]) {
        if ((v4 & v6) != 0) {
          v19 = a2;
          if (v4 <= a2) {
            v19 = a2 % v4;
          }
        }
        else {
          v19 = v6 & a2;
        }
        v20 = *(__int64***)(v8 + 8 * v19);
        if (v20 != nullptr) {
          v21 = *v20;
          if (v21 != nullptr) {
            if ((v4 & v6) == 0) {
              while (1) {
                v23 = v21[1];
                if (v23 == a2) {
                  if (*((_DWORD*)v21 + 4) == a2) {
                    return (void*)v21[3];
                  }
                }
                else if ((v23 & v6) != v19) {
                  goto LABEL_67;
                }
                v21 = (__int64*)*v21;
                if (v21 == nullptr) {
                  goto LABEL_67;
                }
              }
            }
            do {
              v22 = v21[1];
              if (v22 == a2) {
                if (*((_DWORD*)v21 + 4) == a2) {
                  return (void*)v21[3];
                }
              }
              else {
                if (v22 >= v4) {
                  v22 %= v4;
                }
                if (v22 != v19) {
                  break;
                }
              }
              v21 = (__int64*)*v21;
            } while (v21 != nullptr);
          }
        }
      LABEL_67:
        String_60a250("unordered_map::at: key not found");
      }
      return &GameData_1bdc600;
    }
    v16 = (__int64*)*v16;
    if (v16 == nullptr) {
      goto LABEL_67;
    }
    continue;
  }
}

__int64 game_15571e0(__int64 result, unsigned int* a2, __int128* a3)
{
  unsigned __int64 v3;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int128 v9;
  __int128 v10;
  __int64* v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  __int64* v19;
  unsigned __int64 v20;
  _QWORD* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  _BOOL8 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  _BYTE* v41;
  __int64 v43;
  unsigned int v44;
  int v45;
  __int64 v46;
  unsigned int v47;
  int v48;

  v5 = *(_BYTE**)game_g_game_setting_ptr;
  if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 1 &&
          ((v5[804] & 1) != 0 ||
           v5[940] == 1 && (v5[805] & 1) != 0 && (v5[806] & 1) != 0) ||
      v5[903] == 1 && ((v5[900] & 1) != 0 ||
                       v5[940] == 1 && (v5[901] & 1) != 0 && v5[902] == 1)) {
    v6 = GameData_2258178;
    if (GameData_2258178 != 0) {
      v7 = *(_QWORD*)(GameData_2258178 + 192);
      if (v7 != 0) {
        v6 = *(
            int*)(*(_QWORD*)(*(_QWORD*)(GameData_2258178 + 160) +
                             8 * ((unsigned __int64)(v7 +
                                                     *(_QWORD*)(GameData_2258178 +
                                                                184) -
                                                     1) >>
                                  10)) +
                  4 * ((v7 + *(_QWORD*)(GameData_2258178 + 184) - 1) & 0x3FF));
      }
      else {
        v6 = 0;
      }
    }
    v8 = *a2;
    v9 = *a3;
    LODWORD(v10) = 0;
    v11 = *(__int64**)(*(_QWORD*)result + 8 * v6);
    *a2 = 0;
    *(_QWORD*)a3 = 0;
    *((_QWORD*)a3 + 1) = 0;
    v12 = *((_DWORD*)v11 + 10);
    if (v12 > 1) {
      if (v12 == 2) {
        LODWORD(v10) = DWORD2(v9);
      }
      else if (v12 == 3) {
        LODWORD(v10) = HIDWORD(v9);
      }
    }
    else if (v12 != 0) {
      if (v12 == 1) {
        LODWORD(v10) = DWORD1(v9);
      }
    }
    else {
      LODWORD(v10) = v9;
    }
    v13 = *((_DWORD*)v11 + 11);
    v14 = 0;
    if (v13 > 1) {
      if (v13 == 2) {
        v14 = DWORD2(v9);
      }
      else if (v13 == 3) {
        v14 = HIDWORD(v9);
      }
    }
    else if (v13 != 0) {
      if (v13 == 1) {
        v14 = DWORD1(v9);
      }
    }
    else {
      v14 = v9;
    }
    v15 = *((_DWORD*)v11 + 12);
    v16 = 0;
    if (v15 > 1) {
      if (v15 == 2) {
        v16 = DWORD2(v9);
      }
      else if (v15 == 3) {
        v16 = HIDWORD(v9);
      }
    }
    else if (v15 != 0) {
      if (v15 == 1) {
        v16 = DWORD1(v9);
      }
    }
    else {
      v16 = v9;
    }
    v17 = *((_DWORD*)v11 + 13);
    v18 = 0;
    if (v17 > 1) {
      if (v17 == 2) {
        v18 = DWORD2(v9);
      }
      else if (v17 == 3) {
        v18 = HIDWORD(v9);
      }
    }
    else if (v17 != 0) {
      if (v17 == 1) {
        v18 = DWORD1(v9);
      }
    }
    else {
      v18 = v9;
    }
    DWORD1(v10) = v14;
    v19 = v11 + 2;
    v20 = 0;
    *((_QWORD*)&v10 + 1) = __PAIR64__(v18, v16);
    *a3 = v10;
    v21 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v22 = v11[1];
      if (v22 != 0) {
        v23 = v22 - 1;
        if ((v22 & (v22 - 1)) != 0) {
          v3 = v20;
          if (v22 <= v20) {
            v3 = v20 % v22;
          }
        }
        else {
          v3 = (v22 + 31) & v20;
        }
        v24 = *(__int64**)(*v11 + 8 * v3);
        if (v24 != nullptr) {
          v25 = *v24;
          if (*v24 != 0) {
            if ((v22 & v23) == 0) {
              while (1) {
                v27 = *(_QWORD*)(v25 + 8);
                if (v27 == v20) {
                  if (v20 == *(_DWORD*)(v25 + 16)) {
                    goto LABEL_96;
                  }
                }
                else if ((v27 & v23) != v3) {
                  goto LABEL_75;
                }
                v25 = *(_QWORD*)v25;
                if (v25 == 0) {
                  goto LABEL_75;
                }
              }
            }
            do {
              v26 = *(_QWORD*)(v25 + 8);
              if (v26 == v20) {
                if (v20 == *(_DWORD*)(v25 + 16)) {
                  goto LABEL_96;
                }
              }
              else {
                if (v26 >= v22) {
                  v26 %= v22;
                }
                if (v26 != v3) {
                  break;
                }
              }
              v25 = *(_QWORD*)v25;
            } while (v25 != 0);
          }
        }
      }
    LABEL_75:
      result = fw_memory_HeapManager_Allocate_alt1(*v21, 48, 16, 0);
      *(_QWORD*)(result + 8) = v20;
      *(_DWORD*)(result + 16) = v20;
      v25 = result;
      *(_QWORD*)(result + 24) = 0;
      *(_QWORD*)(result + 32) = 0;
      *(_QWORD*)(result + 40) = 0;
      v28 = *((float*)v11 + 8);
      v29 = (float)(unsigned __int64)(v11[3] + 1);
      if (v22 == 0 || (float)(v28 * (float)v22) < v29) {
        v30 = v29 / v28;
        v31 = (v22 & (v22 - 1)) != 0;
        if (v22 < 3) {
          v31 = true;
        }
        v32 = v31 | (2 * v22);
        v33 = vcvtps_u64_f32(v30);
        if (v32 <= v33) {
          v34 = v33;
        }
        else {
          v34 = v32;
        }
        result = KeyMap_1559920(v11, v34);
        v22 = v11[1];
        if ((v22 & (v22 - 1)) != 0) {
          if (v22 <= v20) {
            v3 = v20 % v22;
          }
          else {
            v3 = v20;
          }
        }
        else {
          v3 = (v22 + 31) & v20;
        }
      }
      v35 = *v11;
      v36 = *(__int64**)(*v11 + 8 * v3);
      if (v36 != nullptr) {
        *(_QWORD*)v25 = *v36;
        *v36 = v25;
      }
      else {
        v37 = *v19;
        *(_QWORD*)v25 = *v19;
        *v19 = v25;
        *(_QWORD*)(v35 + 8 * v3) = v19;
        if (v37 != 0) {
          v38 = *(_QWORD*)(v37 + 8);
          if ((v22 & (v22 - 1)) != 0) {
            if (v38 >= v22) {
              v38 %= v22;
            }
          }
          else {
            v38 &= v22 - 1;
          }
          *(_QWORD*)(*v11 + 8 * v38) = v25;
        }
      }
      ++v11[3];
    LABEL_96:
      v39 = *(_QWORD*)(v25 + 24);
      v40 = *(_QWORD*)(v25 + 32);
      if (v39 != v40) {
        break;
      }
    LABEL_54:
      if (++v20 == 31) {
        return result;
      }
    }
    v41 = *(_BYTE**)game_g_game_setting_ptr;
    while (1) {
      if (*(_BYTE*)(v39 + 12) == 1) {
        if (GameData_2258178 == 0) {
          goto LABEL_99;
        }
        if (v41[807] == 1 &&
            ((v41[804] & 1) != 0 ||
             v41[940] == 1 && v41[805] == 1 && (v41[806] & 1) != 0)) {
          if ((*(_BYTE*)(GameData_2258178 + 440) & 1) == 0) {
            goto LABEL_99;
          }
        }
        else if (v41[903] != 1 ||
                 (v41[900] & 1) == 0 &&
                     (v41[940] != 1 || v41[901] != 1 || v41[902] != 1) ||
                 (*(_BYTE*)(GameData_2258178 + 500) & 1) == 0) {
          goto LABEL_99;
        }
      }
      if (*(_BYTE*)(v39 + 20) == 1 && GameData_2258178 != 0) {
        if (v41[807] == 1 &&
            ((v41[804] & 1) != 0 ||
             v41[940] == 1 && v41[805] == 1 && (v41[806] & 1) != 0)) {
          v43 = 440;
        }
        else {
          if (v41[903] != 1 ||
              (v41[900] & 1) == 0 &&
                  (v41[940] != 1 || v41[901] != 1 || v41[902] != 1)) {
            goto LABEL_134;
          }
          v43 = 500;
        }
        if ((*(_BYTE*)(GameData_2258178 + v43) & 1) != 0) {
          goto LABEL_99;
        }
      }
    LABEL_134:
      if (*(_DWORD*)v39 <= 0x1Eu) {
        if (((v8 >> *(_DWORD*)v39) & 1) != 0) {
          goto LABEL_53;
        }
        goto LABEL_99;
      }
      v44 = *(_DWORD*)(v39 + 4);
      if (v44 <= 5) {
        if ((v41[807] != 1 ||
             (v41[804] & 1) == 0 && (v41[940] != 1 || (v41[805] & 1) == 0 ||
                                     (v41[806] & 1) == 0)) &&
            (v41[903] != 1 ||
             (v41[900] & 1) == 0 &&
                 (v41[940] != 1 || (v41[901] & 1) == 0 || v41[902] != 1))) {
          goto LABEL_99;
        }
        v45 = *(_DWORD*)(v39 + 16);
        if (v45 == 3) {
          if (GameData_2258178 == 0) {
            goto LABEL_99;
          }
          if (v41[807] != 0 &&
              ((v41[804] & 1) != 0 ||
               v41[940] == 1 && v41[805] == 1 && (v41[806] & 1) != 0)) {
            v47 = *(_DWORD*)(GameData_2258178 + 440);
          }
          else {
            if (v41[903] != 1 ||
                (v41[900] & 1) == 0 &&
                    (v41[940] != 1 || v41[901] != 1 || v41[902] != 1)) {
              goto LABEL_99;
            }
            v47 = *(_DWORD*)(GameData_2258178 + 500);
          }
        }
        else if (v45 == 2) {
          if (GameData_2258178 == 0) {
            goto LABEL_99;
          }
          if (v41[807] != 0 &&
              ((v41[804] & 1) != 0 ||
               v41[940] == 1 && v41[805] == 1 && (v41[806] & 1) != 0)) {
            v47 = *(_DWORD*)(GameData_2258178 + 448);
          }
          else {
            if (v41[903] != 1 ||
                (v41[900] & 1) == 0 &&
                    (v41[940] != 1 || v41[901] != 1 || v41[902] != 1)) {
              goto LABEL_99;
            }
            v47 = *(_DWORD*)(GameData_2258178 + 508);
          }
        }
        else {
          if (v45 != 1 || GameData_2258178 == 0) {
            goto LABEL_99;
          }
          if (v41[807] == 0) {
            goto LABEL_217;
          }
          if ((v41[804] & 1) != 0) {
            goto LABEL_149;
          }
          if (v41[940] == 1 && (v41[805] & 1) != 0 && (v41[806] & 1) != 0) {
          LABEL_196:
            if (v41[805] != 1 || (v41[806] & 1) == 0) {
              goto LABEL_204;
            }
          LABEL_149:
            v46 = 48;
          }
          else {
          LABEL_217:
            if (v41[903] != 1 ||
                (v41[900] & 1) == 0 &&
                    (v41[940] != 1 || (v41[901] & 1) == 0 || v41[902] != 1)) {
              goto LABEL_99;
            }
            if (v41[807] != 0) {
              if ((v41[804] & 1) != 0) {
                goto LABEL_149;
              }
              if (v41[940] == 1) {
                goto LABEL_196;
              }
            }
          LABEL_204:
            if (v41[903] != 1 ||
                (v41[900] & 1) == 0 &&
                    (v41[940] != 1 || v41[901] != 1 || v41[902] != 1)) {
              goto LABEL_99;
            }
            v46 = 144;
          }
          v47 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 712LL + v46);
        }
        if (((v47 >> v44) & 1) != 0) {
          goto LABEL_53;
        }
        goto LABEL_99;
      }
      v48 = *(_DWORD*)(v39 + 8);
      if (v48 != 0 &&
          (v41[807] == 1 &&
               ((v41[804] & 1) != 0 ||
                v41[940] == 1 && (v41[805] & 1) != 0 && (v41[806] & 1) != 0) ||
           v41[903] == 1 &&
               ((v41[900] & 1) != 0 ||
                v41[940] == 1 && (v41[901] & 1) != 0 && v41[902] == 1)) &&
          GameData_2258178 != 0 && *(_DWORD*)(GameData_2258178 + 588) == v48) {
      LABEL_53:
        *a2 |= 1 << v20;
        goto LABEL_54;
      }
    LABEL_99:
      v39 += 24;
      if (v39 == v40) {
        goto LABEL_54;
      }
    }
  }
  return result;
}

__int64 game_15d1d80()
{
  __int64 v0;
  atomic_ullong* v1;
  __int64* v2;
  __int64 v3;
  int* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  struct {
    __int64 v14;
    __int64 v15;
    __int64 v16;
  } v14_;
  __int64* v17;
  __int64 v18[2];
  struct {
    _QWORD v19[4];
    int v20;
    char gap92_[4];
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v19_;
  _QWORD v25[2];

  GameRoutine_1366ac0((__int64)"Layout/Common.arc",
                      (__int64)"Common_System_Color");
  v0 = v19_.v24;
  if (v19_.v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19_.v24 + 8), 1u,
                              memory_order_relaxed);
  }
  v18[0] = 0;
  v18[1] = 0;
  v14_.v14 = 0;
  v14_.v15 = 0;
  __builtin_memset(v19_.v19, 0, sizeof(v19_.v19));
  v19_.v21 = 0;
  v19_.v22 = 0;
  v25[0] = v19_.v23;
  v25[1] = v19_.v24;
  v14_.v16 = 0;
  v17 = v18;
  v19_.v20 = 1065353216;
  if (v19_.v24 != 0) {
    v1 = (atomic_ullong*)(v19_.v24 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19_.v24 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(&v14_.v14, v25);
    if (atomic_fetch_add((atomic_ullong* volatile)(v0 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v1, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        goto LABEL_9;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v0 + 16LL))(v0);
      std___1___shared_weak_count___release_weak_alt1(v0);
      if (atomic_fetch_add(v1, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      LABEL_9:
        (*(void (**)(__int64))(*(_QWORD*)v0 + 16LL))(v0);
        std___1___shared_weak_count___release_weak_alt1(v0);
      }
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(&v14_.v14, v25);
  }
  v2 = (__int64*)&GameData_205ada0;
  v3 = 0;
  v4 = (int*)GameData_212e350;
  v5 = GameData_212d670[0];
  v6 = GameData_212d678[0];
  do {
    v7 = *v2;
    v2 += 2;
    v8 = *v4;
    v9 = ui_LayoutAccessor_FindPane(&v14_.v14, v7);
    if (v9 != 0) {
      v10 = __dynamic_cast(v9, v5, v6, 0);
      if (v10 != 0) {
        v8 = *(_DWORD*)(Pane_58f8a0(v10) + 12);
      }
    }
    *(_DWORD*)((char*)&GameData_22593b0 + v3) = v8;
    v3 += 4;
  } while (v3 != 312);
  if (v19_.v23 != 0) {
    *(_BYTE*)(v19_.v23 + 2376) = 1;
  }
  LayoutAccessor_155e140(&v14_.v14);
  v11 = v19_.v22;
  if (v19_.v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19_.v22 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  GameRoutine_1564060((__int64)v19_.v19);
  GameRoutine_1563f90((__int64)&v17, v18[0]);
  result = v14_.v15;
  if (v14_.v15 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v14_.v15);
  }
  v13 = v19_.v24;
  if (v19_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    return std___1___shared_weak_count___release_weak_alt1(v13);
  }
  return result;
}

__int64 game_15ddbe0(__int64 a1, char a2)
{
  __int64* v4;
  __int64 v5;
  _BOOL4 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  unsigned int v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  char v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  __int64* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v32;
  char v33;
  __int64 v34;
  unsigned int v35;
  unsigned int v36;
  __int64* v37;
  __int64 v38;
  unsigned int v39;
  struct {
    _QWORD v40[2];
    __int64* v41;
    __int64* v42;
    __int64* v43;
    __int64* v44;
    __int64* v45;
  } v40_;
  unsigned int v46;

  v4 = game_820d50(3);
  if (game_GameModeData_instance_ != 0 &&
      (v5 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v4)) != 0) {
    v6 = *(_DWORD*)(v5 + 32) == 0;
    result = 0;
    if (a1 == 0) {
      return result;
    }
  }
  else {
    v6 = true;
    result = 0;
    if (a1 == 0) {
      return result;
    }
  }
  if (v6) {
    if ((*(_BYTE*)(a1 + 416) & 8) == 0) {
      v46 = 209;
      if (game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
        v46 = 465;
        goto LABEL_15;
      }
      v8 = *(_QWORD*)(a1 + 440);
      if (v8 == 0 || *(_BYTE*)(v8 + 16) != 8) {
      LABEL_15:
        result = game_UnitPool_GetFirst((int*)&v46);
        if (result != 0) {
          v9 = *(_QWORD*)(result + 432);
          v10 = (_QWORD*)result;
          if (v9 == 0) {
            v9 = *(_QWORD*)(result + 440);
            if (v9 != 0) {
              v11 = *(unsigned __int8*)(v9 + 16);
              if (v11 <= 8) {
                while (1) {
                  v39 = v11 + 1;
                  if (((v46 >> v11) & 2) != 0) {
                    v9 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                    24LL * (unsigned __int8)(v11 + 1) + 556000);
                    if (v9 != 0) {
                      break;
                    }
                  }
                  v11 = v39;
                  if (v39 == 9) {
                    goto LABEL_19;
                  }
                }
              }
              else {
              LABEL_19:
                v9 = 0;
              }
            }
          }
          v12 = game_g_shared_system_skills_ptr;
          if ((a2 & 1) == 0) {
            while (1) {
            LABEL_55:
              v26 = (_QWORD*)v9;
              if (v10 == (_QWORD*)a1) {
                goto LABEL_72;
              }
              v27 = v10[55];
              if (v27 != 0 && *(_BYTE*)(v27 + 16) == 8) {
                LODWORD(v40_.v40[0]) =
                    *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) + v12) & 0xFFF;
                if ((game_HasSkill(v10 + 218, (unsigned int*)v40_.v40) & 1) !=
                    0) {
                  goto LABEL_72;
                }
              }
              else {
                v32 = v10[49];
                if (v32 == 0 || *(_QWORD*)(v32 + 272) == 0) {
                  goto LABEL_72;
                }
                v33 = v27 != 0 ? *(_BYTE*)(v27 + 16) : 9;
                if (((1 << v33) & 0xF1) == 0) {
                  goto LABEL_72;
                }
                LODWORD(v40_.v40[0]) =
                    *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) + v12) & 0xFFF;
                if ((game_HasSkill(v10 + 218, (unsigned int*)v40_.v40) & 1) !=
                    0) {
                  goto LABEL_72;
                }
                v37 = game_820d50(3);
                if (game_GameModeData_instance_ != 0) {
                  v38 = game_GameVariableTable_Find(
                      *(_QWORD**)(game_GameModeData_instance_ + 48),
                      (unsigned __int64*)v37);
                  if (v38 != 0 && *(_DWORD*)(v38 + 32) != 0) {
                    goto LABEL_72;
                  }
                }
              }
              v28 = *(_QWORD*)(a1 + 392);
              v29 = v10[49];
              v40_.v41 = nullptr;
              v40_.v42 = nullptr;
              v40_.v43 = nullptr;
              v40_.v44 = nullptr;
              v40_.v45 = nullptr;
              v40_.v40[0] = v28;
              v40_.v40[1] = v29;
              if (v28 != 0 && v29 != 0) {
                v40_.v41 = GameRoutine_8c9820(v28, v29, 0);
                v40_.v42 = GameRoutine_8c9820(v28, v29, 1u);
                v40_.v43 = GameRoutine_8c9820(v28, v29, 2u);
                v40_.v44 = GameRoutine_8c9820(v28, v29, 3u);
                v40_.v45 = GameRoutine_8c9820(v28, v29, 4u);
              }
              v30 = GameRoutine_8ca200(v40_.v40);
              if (v30 != 0 &&
                  (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition(
                      v30) == 0) {
                return 1;
              }
            LABEL_72:
              if (v26 == nullptr) {
                return 0;
              }
              v9 = v26[54];
              v10 = v26;
              if (v9 == 0) {
                v34 = v26[55];
                v10 = v26;
                if (v34 != 0) {
                  v35 = *(unsigned __int8*)(v34 + 16);
                  v9 = 0;
                  v10 = v26;
                  if (v35 <= 8) {
                    while (1) {
                      v36 = v35 + 1;
                      if (((v46 >> v35) & 2) != 0) {
                        v9 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                        24LL * (unsigned __int8)(v35 + 1) +
                                        556000);
                        if (v9 != 0) {
                          break;
                        }
                      }
                      ++v35;
                      if (v36 == 9) {
                        v9 = 0;
                        v10 = v26;
                        goto LABEL_55;
                      }
                    }
                    v10 = v26;
                  }
                }
              }
            }
          }
          while (1) {
          LABEL_23:
            v13 = (_QWORD*)v9;
            if (v10 == (_QWORD*)a1) {
              goto LABEL_41;
            }
            v14 = v10[55];
            if (v14 != 0 && *(_BYTE*)(v14 + 16) == 8) {
              LODWORD(v40_.v40[0]) =
                  *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) + v12) & 0xFFF;
              if ((game_HasSkill(v10 + 218, (unsigned int*)v40_.v40) & 1) !=
                  0) {
                goto LABEL_41;
              }
            }
            else {
              v19 = v10[49];
              if (v19 == 0 || *(_QWORD*)(v19 + 272) == 0) {
                goto LABEL_41;
              }
              v20 = v14 != 0 ? *(_BYTE*)(v14 + 16) : 9;
              if (((1 << v20) & 0xF1) == 0) {
                goto LABEL_41;
              }
              LODWORD(v40_.v40[0]) =
                  *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) + v12) & 0xFFF;
              if ((game_HasSkill(v10 + 218, (unsigned int*)v40_.v40) & 1) !=
                  0) {
                goto LABEL_41;
              }
              v24 = game_820d50(3);
              if (game_GameModeData_instance_ != 0) {
                v25 = game_GameVariableTable_Find(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)v24);
                if (v25 != 0 && *(_DWORD*)(v25 + 32) != 0) {
                  goto LABEL_41;
                }
              }
            }
            v15 = *(_QWORD*)(a1 + 392);
            v16 = v10[49];
            v40_.v41 = nullptr;
            v40_.v42 = nullptr;
            v40_.v43 = nullptr;
            v40_.v44 = nullptr;
            v40_.v45 = nullptr;
            v40_.v40[0] = v15;
            v40_.v40[1] = v16;
            if (v15 != 0 && v16 != 0) {
              v40_.v41 = GameRoutine_8c9820(v15, v16, 0);
              v40_.v42 = GameRoutine_8c9820(v15, v16, 1u);
              v40_.v43 = GameRoutine_8c9820(v15, v16, 2u);
              v40_.v44 = GameRoutine_8c9820(v15, v16, 3u);
              v40_.v45 = GameRoutine_8c9820(v15, v16, 4u);
            }
            v17 = GameRoutine_8ca200(v40_.v40);
            if (v17 != 0 && *(_BYTE*)(v17 + 64) != 4 &&
                (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition(
                    v17) == 0) {
              return 1;
            }
          LABEL_41:
            if (v13 == nullptr) {
              return 0;
            }
            v9 = v13[54];
            v10 = v13;
            if (v9 == 0) {
              v21 = v13[55];
              v10 = v13;
              if (v21 != 0) {
                v22 = *(unsigned __int8*)(v21 + 16);
                v9 = 0;
                v10 = v13;
                if (v22 <= 8) {
                  while (1) {
                    v23 = v22 + 1;
                    if (((v46 >> v22) & 2) != 0) {
                      v9 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                      24LL * (unsigned __int8)(v22 + 1) +
                                      556000);
                      if (v9 != 0) {
                        break;
                      }
                    }
                    ++v22;
                    if (v23 == 9) {
                      v9 = 0;
                      v10 = v13;
                      goto LABEL_23;
                    }
                  }
                  v10 = v13;
                }
              }
            }
          }
        }
        return result;
      }
    }
    return 0;
  }
  return result;
}

__int64 game_15de140(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                     char a5)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  _QWORD* v13;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  struct {
    _BYTE v19[4];
    signed int v20;
  } v19_;

  if (a3 != 0) {
    v7 = GameData_22400f8;
    if (GameData_22400f8 != 0) {
      if (a1 == 0 || *(_BYTE*)(GameData_22400f8 + 8) != 1 ||
          (*(_BYTE*)(GameData_22400f8 + 9) & 1) != 0 ||
          (v8 = *(_QWORD*)(a1 + 440)) == 0 ||
          *(unsigned __int8*)(v8 + 16) > 8u ||
          game_map_UnitFlags_instance_ == 0 ||
          (v9 = *(unsigned __int8*)(a1 + 2088),
           (*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v9) & 1) == 0) ||
          (*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v9) |= 2u,
           v7 = GameData_22400f8, GameData_22400f8 != 0)) {
        if (*(_BYTE*)(v7 + 8) == 1 && (*(_BYTE*)(v7 + 9) & 1) == 0) {
          v10 = *(_QWORD*)(a3 + 440);
          if (v10 != 0 && *(unsigned __int8*)(v10 + 16) <= 8u &&
              game_map_UnitFlags_instance_ != 0) {
            v11 = *(unsigned __int8*)(a3 + 2088);
            if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v11) & 1) != 0) {
              *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v11) |= 2u;
            }
          }
        }
      }
    }
    v12 = GameRoutine_120ccf0(a1, a2, a3, a4, a5 & 1);
    if (*GameData_212cfd0[0] != 0) {
      *(_QWORD*)(*GameData_212cfd0[0] + 12672) |= 4uLL;
    }
    goto LABEL_41;
  }
  v13 = *(_QWORD**)(game_TransporterConst_List_instance_ + 8);
  if ((a4 & 0x80000000) != 0 || *(_WORD*)(v13[1] + 12LL * a4 + 4) == 0) {
    if (a1 == 0 || (a2 & 0x80000000) != 0 ||
        *(_WORD*)((v16 = a1 + 8LL * (unsigned int)a2) + 828) == 0 ||
        (v17 = a2,
         X8CALL_X0(__int64, game_UnitUtil_UniqueMap_Commit_89abc0(
                                (void*)((__int64)v19_.v19), (__int64)v13,
                                (unsigned __int16*)(v16 + 828), 1)),
         v19_.v20 < 0) ||
        (game_Unit_RemoveItem(a1, v17), (v19_.v19[0] & 1) != 0)) {
      v12 = 0;
      goto LABEL_41;
    }
    game_Unit_Unknown6c4610(a1);
    *(_WORD*)(a1 + 20) |= 1u;
    if (GameData_21cd108 == 0 ||
        (*(_QWORD*)(GameData_21cd108 + 12672) |= 8uLL, v15 = GameData_22400f8,
         GameData_22400f8 == 0)) {
      v12 = 1;
      goto LABEL_41;
    }
    v12 = 1;
    if (*(_BYTE*)(GameData_22400f8 + 8) != 1) {
      goto LABEL_41;
    }
    goto LABEL_38;
  }
  TransporterConst_89bf10((void*)((__int64)v19_.v19), v13, a4, a1, a2);
  v12 = v19_.v20 >= 0;
  if ((v19_.v20 & 0x80000000) == 0) {
    game_120c6c0(a1, v19_.v20, a5 & 1);
  }
  if (GameData_21cd108 != 0) {
    *(_QWORD*)(GameData_21cd108 + 12672) |= 8uLL;
    v15 = GameData_22400f8;
    if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1) {
    LABEL_38:
      if ((*(_BYTE*)(v15 + 9) & 1) == 0) {
        *(_DWORD*)(v15 + 12) |= 0x40u;
      }
    }
  }
LABEL_41:
  if (a1 != 0) {
    game_Unit_Unknown6c4610(a1);
    *(_WORD*)(a1 + 20) |= 1u;
  }
  if (a3 != 0) {
    game_Unit_Unknown6c4610(a3);
    *(_WORD*)(a3 + 20) |= 1u;
  }
  return v12 & 1;
}

bool game_15de420(__int64 a1, unsigned int a2)
{
  char* v3;
  __int64 v4;
  char v6;
  struct {
    char v8[4];
    int v9;
  } v8_;

  v3 = GameData_212d818[0];
  if (a1 == 0 || (a2 & 0x80000000) != 0) {
  LABEL_8:
    v6 = *v3;
    if ((*v3 & 1) != 0) {
      return (v6 & 1) == 0;
    }
    goto LABEL_9;
  }
  v4 = a1 + 8LL * a2;
  if (*(_WORD*)(v4 + 828) == 0) {
    v3 = &GameData_1b5724d;
    goto LABEL_8;
  }
  game_UnitUtil_UniqueMap_Commit_89abc0(
      (void*)((__int64)v8_.v8),
      *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL),
      (unsigned __int16*)(v4 + 828), 1);
  if (v8_.v9 < 0) {
    v6 = 1;
    return (v6 & 1) == 0;
  }
  game_Unit_RemoveItem(a1, a2);
  v6 = v8_.v8[0];
  if ((v8_.v8[0] & 1) != 0) {
    return (v6 & 1) == 0;
  }
LABEL_9:
  if (a1 != 0) {
    game_Unit_Unknown6c4610(a1);
    *(_WORD*)(a1 + 20) |= 1u;
  }
  if (GameData_21cd108 != 0) {
    *(_QWORD*)(GameData_21cd108 + 12672) |= 8uLL;
    if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      *(_DWORD*)(GameData_22400f8 + 12) |= 0x40u;
    }
  }
  return (v6 & 1) == 0;
}

__int64 game_15de540(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  signed int v6;
  struct {
    _BYTE v7[4];
    unsigned int v8;
  } v7_;

  if (a3 != 0) {
    return GameRoutine_120ccf0(a1, a2, a3, a4, 1);
  }
  TransporterConst_89bd90(
      (void*)((__int64)v7_.v7),
      *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL),
      a4, a1);
  v6 = v7_.v8;
  if ((v7_.v8 & 0x80000000) == 0) {
    game_120c6c0(a1, v7_.v8, 1);
    if (a1 != 0) {
      game_Unit_Unknown6c4610(a1);
      *(_WORD*)(a1 + 20) |= 1u;
    }
    if (GameData_21cd108 != 0) {
      *(_QWORD*)(GameData_21cd108 + 12672) |= 8uLL;
      if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
          (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
        *(_DWORD*)(GameData_22400f8 + 12) |= 0x40u;
      }
    }
  }
  return v6 >= 0;
}

__int64 game_15de780(unsigned __int16* a1, int a2, __int64 a3)
{
  char v4;
  __int64* v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  float v17;
  __int128 v18;
  __int128 v19;
  __int64 v21;
  __int64 v23;
  unsigned int v24;
  __int128 v25;

  v4 = GameRoutine_120dac0(a1, a2, a3);
  if (a3 != 0 && (v4 & 1) != 0) {
    game_Unit_Unknown6c4610(a3);
    *(_WORD*)(a3 + 20) |= 1u;
    v10 = GameData_212ce98[0];
    if (*GameData_212ce98[0] != 0) {
      v11 = *(_QWORD*)(a3 + 8);
      if (v11 != 0) {
        v12 = *(char*)(v11 + 584);
        if ((v12 & 0x80000000) == 0) {
          v13 = *(char*)(v11 + 585);
          if ((v13 & 0x80000000) == 0) {
            v14 = *(_DWORD*)(v11 + 592);
            v15 = v12 | 0x100;
            v16 = v13 | 0x100;
            v17 = (float)(unsigned int)(v14 - 1) * 0x1.4000000000000p+1f;
            if (v14 <= 0) {
              v17 = 0x0.0p+0f;
            }
            *(_QWORD*)&v18 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v15 * 0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f) +
                v17);
            v23 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v16 * 0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f) +
                v17);
            *(float*)&v24 =
                (float)((float)((float)((float)v15 * 0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f) +
                v17;
            *((_QWORD*)&v18 + 1) = v23;
            v25 = v18;
            *(_QWORD*)&v19 = __PAIR64__(
                COERCE_UNSIGNED_INT(Unit_6c7fa0(v11, (__int64)&v25)), v24);
            *((_QWORD*)&v19 + 1) = v23;
            v25 = v19;
            Cursor_734a80(a3 + 48, (__int64*)&v25);
            UnitActor_81ba20(a3);
          }
        }
        v21 = *(_QWORD*)(a3 + 264);
        if (v21 != 0) {
          CharacterBuilder_1084780(v21);
        }
      }
      Image_72b080(*v10);
    }
  }
  return v4 & 1;
}

__int64 game_15df0e0(__int64 result, _DWORD* a2)
{
  __int64 v2;
  unsigned int v3;
  int v5;
  unsigned int v6;
  bool v7;
  int v8;
  int v9;
  bool v10;
  _QWORD v11[2];

  if (result == 0) {
    return result;
  }
  if ((*a2 & 0xFFF) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a2 & 0xFFF));
  if (v2 == 0) {
    v3 = (*(unsigned __int8*)0x68LL);
    goto LABEL_11;
  }
  v3 = *(unsigned __int8*)(v2 + 104);
  if (v3 != 12) {
  LABEL_11:
    v7 = v3 > 6;
    v8 = 1 << v3;
    goto LABEL_12;
  }
  if (*(_BYTE*)(result + 1880) == 0) {
    return 1;
  }
  v11[0] = *(_QWORD*)(result + 392);
  v11[1] = result;
  v5 = *(_DWORD*)GameRoutine_932360(result + 1880, v11);
  result = 1;
  if ((v5 & 0xFFF) != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a2 & 0xFFF));
    v6 = *(unsigned __int8*)(v2 + 104);
    v7 = v6 > 6;
    v8 = 1 << v6;
  LABEL_12:
    v9 = v8 & 0x68;
    v10 = v7 || v9 == 0;
    if (!v10 || (*(_WORD*)(v2 + 248) & 0x100) != 0 ||
        (game_facility_g_unknown_2174af0 & 1) != 0) {
      return 0;
    }
    else {
      return 2;
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_1603b10(PSEUDO_X8 x8_,
                                             unsigned __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v3 = "MID_Sys_EXFont_ButtonA";
  switch ((int)result) {
  case 0:
    goto LABEL_38;
  case 1:
    v3 = "MID_Sys_EXFont_ButtonB";
    goto LABEL_38;
  case 2:
    v3 = "MID_Sys_EXFont_ButtonX";
    goto LABEL_38;
  case 3:
    v3 = "MID_Sys_EXFont_ButtonY";
    goto LABEL_38;
  case 4:
    v3 = "MID_Sys_EXFont_ButtonL";
    goto LABEL_38;
  case 5:
    v3 = "MID_Sys_EXFont_ButtonR";
    goto LABEL_38;
  case 6:
    v3 = "MID_Sys_EXFont_ButtonZL";
    goto LABEL_38;
  case 7:
    v3 = "MID_Sys_EXFont_ButtonZR";
    goto LABEL_38;
  case 8:
    v3 = "MID_Sys_EXFont_ButtonSL";
    goto LABEL_38;
  case 9:
    v3 = "MID_Sys_EXFont_ButtonSR";
    goto LABEL_38;
  case 10:
    v3 = "MID_Sys_EXFont_ButtonMinus";
    goto LABEL_38;
  case 11:
    v3 = "MID_Sys_EXFont_ButtonPlus";
    goto LABEL_38;
  case 12:
    v3 = "MID_Sys_EXFont_Up";
    goto LABEL_38;
  case 13:
    v3 = "MID_Sys_EXFont_Down";
    goto LABEL_38;
  case 14:
    v3 = "MID_Sys_EXFont_Left";
    goto LABEL_38;
  case 15:
    v3 = "MID_Sys_EXFont_Right";
    goto LABEL_38;
  case 16:
    v3 = "MID_Sys_EXFont_UD";
    goto LABEL_38;
  case 17:
    v3 = "MID_Sys_EXFont_LR";
    goto LABEL_38;
  case 18:
    v3 = "MID_Sys_EXFont_StickL";
    goto LABEL_38;
  case 19:
    v3 = "MID_Sys_EXFont_StickL_Up";
    goto LABEL_38;
  case 20:
    v3 = "MID_Sys_EXFont_StickL_UD";
    goto LABEL_38;
  case 21:
    v3 = "MID_Sys_EXFont_StickL_LR";
    goto LABEL_38;
  case 22:
    v3 = "MID_Sys_EXFont_StickLPush";
    goto LABEL_38;
  case 23:
    v3 = "MID_Sys_EXFont_StickR";
    goto LABEL_38;
  case 24:
    v3 = "MID_Sys_EXFont_StickR_Down";
    goto LABEL_38;
  case 25:
    v3 = "MID_Sys_EXFont_StickR_UD";
    goto LABEL_38;
  case 26:
    v3 = "MID_Sys_EXFont_StickR_LR";
    goto LABEL_38;
  case 27:
    v3 = "MID_Sys_EXFont_StickRPush";
    goto LABEL_38;
  case 28:
    v3 = "MID_Sys_EXFont_Mouse";
    goto LABEL_38;
  case 29:
    v3 = "MID_Sys_EXFont_Mouse_UD";
    goto LABEL_38;
  case 30:
    v3 = "MID_Sys_EXFont_Mouse_LR";
    goto LABEL_38;
  case 31:
    v3 = "MID_Sys_EXFont_MouseR";
    goto LABEL_38;
  case 32:
    v3 = "MID_Sys_EXFont_MouseR_Up";
    goto LABEL_38;
  case 33:
    v3 = "MID_Sys_EXFont_MouseR_UD";
    goto LABEL_38;
  case 34:
    v3 = "MID_Sys_EXFont_MouseR_LR";
    goto LABEL_38;
  case 35:
    v3 = "MID_Sys_EXFont_MouseZR";
  LABEL_38:
    if (*v3 == 0) {
      goto LABEL_40;
    }
    v4 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v3, 0);
    break;
  case 36:
    *(_WORD*)a2 = 0;
    {
      result;
      return;
    }
  default:
  LABEL_40:
    v4 = msg_MessageManager_empty_text_;
    break;
  }
  result = strlen_alt1(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
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
    *(_QWORD*)(a2 + 8) = v5;
    *(_QWORD*)(a2 + 16) = v8;
    *(_QWORD*)a2 = v7 | 1;
    v6 = v8;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v6 = a2 + 1;
    if (result == 0) {
      goto LABEL_50;
    }
  }
  result = memmove_alt1(v6, (__int64)v4, v5);
LABEL_50:
  *(_BYTE*)(v6 + v5) = 0;
  {
    result;
    return;
  }
}

char* game_1603e30()
{
  int v2;
  char* v3;
  char* result;
  char* v5;
  __int64 v6;
  struct {
    __int64 v7[2];
    char* v8;
  } v7_;

  if (game_GameModeData_instance_ != 0) {
    v2 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    if (v2 > 1) {
      if (v2 == 2) {
        return "MCID_chapter_29";
      }
      if (v2 == 3) {
        return "MCID_chapter_30";
      }
      return nullptr;
    }
    if (v2 != 0) {
      if (v2 != 1) {
        return nullptr;
      }
      GameConst_7f8880((void*)(v7_.v7));
      if ((v7_.v7[0] & 1) != 0) {
        v3 = v7_.v8;
      }
      else {
        v3 = (char*)v7_.v7 + 1;
      }
      result = game_util_Format_alt1("MCID_episode_%s", v3);
      if ((v7_.v7[0] & 1) != 0 && v7_.v8 != nullptr) {
        v5 = result;
        v6 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
        return v5;
      }
      return result;
    }
  }
  return "MCID_chapter_28";
}

__attribute__((swiftcall)) void game_1603f20(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64** v9;
  __int64* v10;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 result;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  char v27;
  __int64 v28;
  __int64* i;
  _WORD v30[8];
  char* v31;
  _QWORD v32[2];
  unsigned __int64 v33;
  unsigned __int64 v34;
  int v35;
  int v36;
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

  v30[0] = 0;
  v3 = msg_MessageManager_instance__ptr[0];
  v4 = GameData_212e348;
  if (a1 != 0) {
    v5 = *(_QWORD*)(a1 + 336);
    v6 = a1;
    if (v5 == 0) {
      goto LABEL_21;
    }
    v8 = (__int64*)(v5 + 80);
    v7 = *(_QWORD*)(v5 + 80);
    for (i = a2; v7 != 0; v7 = *(_QWORD*)(v7 + 80)) {
      v9 = *(__int64***)(v5 + 24);
      v10 = *v9;
      v11 = v9[1];
      if (v11 != *v9) {
        v12 = 0;
        do {
          v13 = *v10;
          v14 = v10[1];
          if (v14 == *v10) {
          LABEL_8:
            ++v12;
          }
          else {
            while (1) {
              if (*(_QWORD*)v13 != 0) {
                v15 = game_GameModeData_instance_;
                if (game_GameModeData_instance_ != 0) {
                  LOBYTE(a1) = GameVariable_828f50(
                      game_GameModeData_instance_ + 40, v13);
                }
                if (*(_BYTE*)(v13 + 16) != ((v15 == 0) | a1 & 1)) {
                  break;
                }
              }
              v13 += 24;
              if (v13 == v14) {
                goto LABEL_8;
              }
            }
          }
          v10 += 6;
        } while (v10 != v11);
        if (v12 == 0) {
          break;
        }
        v7 = *v8;
      }
      v5 = v7;
      v8 = (__int64*)(v7 + 80);
    }
    a2 = i;
    v3 = msg_MessageManager_instance__ptr[0];
    v4 = GameData_212e348;
    if (*(_BYTE*)(v5 + 40) != 0) {
      v16 = GameRoutine_67ed20(v6);
    }
    else {
    LABEL_21:
      v17 = *v3;
      v37 = -1;
      v38 = -1;
      v39 = -1;
      v40 = -1;
      v41 = -1;
      v42 = -1;
      v43 = -1;
      v44 = -1;
      v45 = -1;
      v46 = -1;
      v47 = -1;
      v48 = -1;
      v32[0] = v4 + 2;
      v32[1] = 0xFFFF0001FFFF0000LL;
      v33 = 0xFFFF0004FFFF0002LL;
      v34 = 0xFFFF0006FFFF0005LL;
      v49 = 8;
      v35 = -65529;
      v36 = -65528;
      v16 = GameRoutine_a4dbe0(v17, "MID_Sys_Unknown", 0, v32);
    }
    GameRoutine_60a020_alt1(v30, v16);
  }
  if ((v30[0] & 1) != 0) {
    v18 = v31;
  }
  else {
    v18 = (char*)v30 + 1;
  }
  if (v18 != nullptr) {
    v19 = v18;
  }
  else {
    v19 = *msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020_alt1(*v3 + 14704, v19);
  v20 = *v3;
  v37 = -1;
  v38 = -1;
  v39 = -1;
  v40 = -1;
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v44 = -1;
  v45 = -1;
  v46 = -1;
  v47 = -1;
  v48 = -1;
  v32[0] = v4 + 2;
  v32[1] = 0xFFFF0001FFFF0000LL;
  v33 = 0xFFFF0004FFFF0002LL;
  v34 = 0xFFFF0006FFFF0005LL;
  v49 = 8;
  v35 = -65529;
  v36 = -65528;
  v21 = GameRoutine_a4dbe0(v20, "MID_Menu_SideStory", 0, v32);
  result = strlen(v21);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v23 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v25 = 26;
    }
    else {
      v25 = (result | 7) + 1;
    }
    v26 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v25, 16, 0);
    a2[1] = v23;
    a2[2] = v26;
    *a2 = v25 | 1;
    v24 = (char*)v26;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v24 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_38;
    }
  }
  result = memmove(v24, v21, v23);
LABEL_38:
  v27 = v30[0];
  v24[v23] = 0;
  if ((v27 & 1) != 0 && v31 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_1604c70(PSEUDO_X8 x8_, int a1,
                                             unsigned int a2, unsigned int a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  unsigned __int64 result;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64* v24;
  char* v25;
  char** v26;
  char* v27;
  char* v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD v39[2];
  char* v40;
  _QWORD v41[2];
  char* v42;
  _QWORD v43[2];
  char* v44;
  _QWORD v45[4];
  int v46;
  int v47;
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

  v7 = game_util_Format("%d", a1);
  result = strlen(v7);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_77;
  }
  v9 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (result | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v11, 16, 0);
    v43[1] = v9;
    v44 = v10;
    v43[0] = v11 | 1;
    goto LABEL_9;
  }
  LOBYTE(v43[0]) = 2 * result;
  v10 = (char*)v43 + 1;
  if (result != 0) {
  LABEL_9:
    result = memmove(v10, v7, v9);
  }
  v10[v9] = 0;
  if ((v43[0] & 1) != 0) {
    v12 = v44;
  }
  else {
    v12 = (char*)v43 + 1;
  }
  if ((GameRoutine_1604790(result) & 1) != 0) {
    v13 = game_util_Format("%02d", a2);
  }
  else {
    v13 = game_util_Format("%d", a2);
  }
  v14 = v13;
  result = strlen(v13);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_77:
    String_60a1d0(result);
  }
  v15 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (result | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
    v41[1] = v15;
    v42 = v16;
    v41[0] = v17 | 1;
    goto LABEL_24;
  }
  LOBYTE(v41[0]) = 2 * result;
  v16 = (char*)v41 + 1;
  if (result != 0) {
  LABEL_24:
    result = memmove(v16, v14, v15);
  }
  v16[v15] = 0;
  if ((v41[0] & 1) != 0) {
    v18 = v42;
  }
  else {
    v18 = (char*)v41 + 1;
  }
  if ((GameRoutine_1604790(result) & 1) != 0) {
    v19 = game_util_Format("%02d", a3);
  }
  else {
    v19 = game_util_Format("%d", a3);
  }
  v20 = v19;
  result = strlen(v19);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_77;
  }
  v21 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (result | 7) + 1;
    }
    v22 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v23, 16, 0);
    v39[1] = v21;
    v40 = v22;
    v39[0] = v23 | 1;
    goto LABEL_39;
  }
  LOBYTE(v39[0]) = 2 * result;
  v22 = (char*)v39 + 1;
  if (result != 0) {
  LABEL_39:
    memmove(v22, v20, v21);
  }
  v22[v21] = 0;
  v24 = msg_MessageManager_instance__ptr[0];
  if ((v39[0] & 1) != 0) {
    v25 = v40;
  }
  else {
    v25 = (char*)v39 + 1;
  }
  v26 = msg_MessageManager_empty_text__ptr;
  if (v12 != nullptr) {
    v27 = v12;
  }
  else {
    v27 = *msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020_alt1(*msg_MessageManager_instance__ptr[0] + 14704, v27);
  if (v18 != nullptr) {
    v28 = v18;
  }
  else {
    v28 = *v26;
  }
  GameRoutine_60a020_alt1(*v24 + 14728, v28);
  if (v25 != nullptr) {
    v29 = v25;
  }
  else {
    v29 = *v26;
  }
  GameRoutine_60a020_alt1(*v24 + 14752, v29);
  v30 = *v24;
  v48 = -1;
  v49 = -1;
  v50 = -1;
  v51 = -1;
  v52 = -1;
  v53 = -1;
  v54 = -1;
  v55 = -1;
  v56 = -1;
  v57 = -1;
  v58 = -1;
  v59 = -1;
  v45[0] = GameData_212e348 + 2;
  v45[1] = 0xFFFF0001FFFF0000LL;
  v45[2] = 0xFFFF0004FFFF0002LL;
  v45[3] = 0xFFFF0006FFFF0005LL;
  v60 = 8;
  v46 = -65529;
  v47 = -65528;
  v31 = GameRoutine_a4dbe0(v30, "MID_Sys_DateTime_YMD", 0, v45);
  result = strlen(v31);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_77;
  }
  v32 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v34 = 26;
    }
    else {
      v34 = (result | 7) + 1;
    }
    v35 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v34, 16, 0);
    a4[1] = v32;
    a4[2] = v35;
    *a4 = v34 | 1;
    v33 = (char*)v35;
  }
  else {
    *(_BYTE*)a4 = 2 * result;
    v33 = (char*)a4 + 1;
    if (result == 0) {
      goto LABEL_61;
    }
  }
  result = memmove(v33, v31, v32);
LABEL_61:
  v33[v32] = 0;
  if ((v39[0] & 1) != 0 && v40 != nullptr) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v36);
  }
  if ((v41[0] & 1) != 0 && v42 != nullptr) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37);
  }
  if ((v43[0] & 1) != 0 && v44 != nullptr) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v38);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_16050d0(PSEUDO_X8 x8_, unsigned int a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v4;
  char* v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;

  if (GameRoutine_1604790_alt1()) {
    v4 = game_util_Format_alt1("%02d", a1);
  }
  else {
    v4 = game_util_Format_alt1("%d", a1);
  }
  v5 = v4;
  result = strlen(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v7 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a2[1] = v7;
    a2[2] = v10;
    *a2 = v9 | 1;
    v8 = (char*)v10;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v8 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_13;
    }
  }
  result = memmove(v8, v5, v7);
LABEL_13:
  v8[v7] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_16051a0(PSEUDO_X8 x8_, unsigned int a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v4;
  char* v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;

  if (GameRoutine_1604790_alt1()) {
    v4 = game_util_Format_alt1("%02d", a1);
  }
  else {
    v4 = game_util_Format_alt1("%d", a1);
  }
  v5 = v4;
  result = strlen(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v7 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a2[1] = v7;
    a2[2] = v10;
    *a2 = v9 | 1;
    v8 = (char*)v10;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v8 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_13;
    }
  }
  result = memmove(v8, v5, v7);
LABEL_13:
  v8[v7] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_1605540(PSEUDO_X8 x8_, unsigned int a1,
                                             int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v6;
  const char* v7;
  char* v8;
  __int64* v9;
  char* v10;
  unsigned __int64 result;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  if (GameRoutine_1604790_alt1()) {
    v6 = game_util_Format_alt1("%02d", a1);
  }
  else {
    v6 = game_util_Format_alt1("%d", a1);
  }
  v7 = v6;
  v8 = game_util_Format_alt1("%02d", a2);
  v9 = msg_MessageManager_instance__ptr[0];
  GameRoutine_60a020_alt2(*msg_MessageManager_instance__ptr[0] + 14704, v7);
  GameRoutine_60a020_alt2(*v9 + 14728, v8);
  v10 = GameRoutine_a4dbe0_alt1(*v9, "MID_Sys_DateTime_HM", 0);
  result = strlen_alt1(v10);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v12 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (result | 7) + 1;
    }
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v14, 16, 0);
    a3[1] = v12;
    a3[2] = v15;
    *a3 = v14 | 1;
    v13 = v15;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v13 = (__int64)a3 + 1;
    if (result == 0) {
      goto LABEL_13;
    }
  }
  result = memmove_alt1(v13, (__int64)v10, v12);
LABEL_13:
  *(_BYTE*)(v13 + v12) = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_16073d0(PSEUDO_X8 x8_, __int64* a1,
                                             __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* result;
  __int64 v7;
  _QWORD* v8;

  result = (_QWORD*)a1[1];
  if (result == nullptr) {
    goto LABEL_7;
  }
  result = (_QWORD*)std___1___shared_weak_count_lock(result);
  if (result == nullptr) {
    goto LABEL_7;
  }
  v7 = *a1;
  v8 = result;
  if (v7 != 0) {
    result = (GameRoutine_15b71b0((void*)(a3), v7, a2), (void*)(a3));
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 1),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 != 0) {
      result;
      return;
    }
    goto LABEL_7;
  }
  (*(void (**)(_QWORD*))(*v8 + 16LL))(v8);
  result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v8);
  if (v7 == 0) {
  LABEL_7:
    *a3 = 0;
    a3[1] = 0;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
