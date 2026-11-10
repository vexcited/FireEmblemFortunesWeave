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
__int64 game_1294f20(__int64 a1, signed int* a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6);
__int64 game_12968e0(__int64 a1, signed int* a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6);
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
__attribute__((swiftcall)) void game_1605540(PSEUDO_X8 x8_, __int64 a1, int a2);
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
bool game_128f6c0(__int64* a1, int* a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6);
__int64 game_12c65c0(__int64 result, __int64* a2, __int64* a3,
                     __int64 (**a4)(__int64, __int64), __int64 a5, __int64 a6,
                     __int64 a7, __int64 a8);
__int64 game_15d1d80();

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
  _QWORD v45[4];
  _QWORD* v46;
  __int64 v47;
  int v48;
  _QWORD v49[5];
  __int64 v50;
  __int16 v51;
  char v52;
  _QWORD v53[6];
  int v54;
  int v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  bool v64;
  __int64 v65;
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
  LODWORD(v53[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xE0LL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
  if (((v6 >> 5) & 0x7F) + 1 <= v7 >> 2 &&
      ((*(_DWORD*)(v5 + 4 * ((v6 >> 5) & 0x7F)) >> v6) & 1) != 0) {
    if ((game_HasActiveSkill_843420(v53, v4 + 1744) & 1) != 0) {
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
    if ((*(_WORD*)v21 & 0xFFF) != 0 && (GameRoutine_128e990() & 1) != 0 &&
        (game_Unit_Unknown6c8f90(*(_QWORD*)(a1 + 8)) & 1) != 0) {
      v27 = game_UnitItemList_FindEquipped_710080(*(_QWORD*)(a1 + 8) + 828LL);
      if ((v27 & 0x80000000) == 0) {
        v28 = v27;
        if (*(_BYTE*)(*v1 + 25) == 1) {
          v29 = 0;
        }
        else {
          v29 = a1 + 2288;
          AIThink_121d220(a1 + 2288, *(_QWORD*)(a1 + 8), 0);
        }
        v31 = *(_QWORD*)(a1 + 8);
        v68 = 5242882;
        AIThink_12211a0(a1, v31, &v68);
        v55 = 0;
        v32 = *v3;
        v60 = 0;
        v61 = 0;
        v62 = 0;
        v63 = 0;
        v53[4] = 0;
        v53[5] = -1;
        v58 = -1;
        v59 = -1;
        v48 = 0;
        v47 = 0;
        v49[0] = 0;
        v49[1] = -1;
        v53[1] = GameData_2130660;
        v53[2] = GameData_2130660;
        v33 = *(_QWORD*)(v32 + 16);
        v34 = *(_QWORD*)(a1 + 8);
        v66[0] = GameData_20189c8;
        v54 = v28;
        v65 = -1;
        v67[0] = GameData_2018a58;
        v51 = 0;
        LODWORD(v33) = *(unsigned __int8*)(v33 + 2240);
        v53[3] = v34;
        v66[4] = v66;
        v67[4] = v67;
        LODWORD(v53[0]) = -1;
        v52 = 0;
        v49[4] = 0;
        v50 = -1;
        v49[2] = 0x7FFFFFFF;
        v49[3] = 0xFFFFFFFFLL;
        v56 = 5242882;
        v57 = v29;
        v46 = v45;
        v64 = (_DWORD)v33 == 5;
        v45[0] = GameData_2020788;
        v45[1] = &v47;
        v45[2] = &v48;
        game_128ef10_alt1(v53, v45);
        if (v46 == v45) {
          v35 = 32;
        }
        else {
          if (v46 == nullptr) {
            goto LABEL_48;
          }
          v35 = 40;
        }
        (*(void (**)(__int64))(*v46 + v35))((__int64)v46);
      LABEL_48:
        game_AIThink_EntrustGetAttackResult((__int64)v53, v49);
        if (v48 < 3) {
          v36 = 0;
        LABEL_59:
          AIThink_121a1c0(v53);
          return v36;
        }
        v37 = *GameData_212cfd0[0];
        *(_QWORD*)(v37 + 12) = v50;
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
            v41 = v50;
            *(_BYTE*)(v37 + 314) = BYTE4(v50);
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

bool game_128f6c0(__int64* a1, int* a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6)
{
  int* v6;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _DWORD* v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  bool v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  unsigned int v45;
  unsigned int v46;
  int v48;
  _QWORD* v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v56;
  __int64 v57;
  bool v58;
  int v59;
  bool v60;
  bool v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned int v65;
  char v66;
  unsigned int v67;
  char v68;
  unsigned int v69;
  unsigned int v70;
  unsigned __int8 v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  __int64 v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  char v88;
  long double v89;
  long double v90;
  _QWORD* v91;
  _QWORD* v92;
  __int64 v93;
  char v94;
  __int64 v95;
  long double v96;
  long double v97;
  long double v98;
  long double v99;
  long double v100;
  long double v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int64 v110;
  __int64 v111;
  long double v112;
  long double v113;
  int v114;
  int v115;
  float v116;
  unsigned __int64 v117;
  float v118;
  unsigned __int64 v119;
  unsigned int v120;
  __int64 v121;
  bool v122;
  unsigned int v123;
  __int64 v124;
  _BYTE* v125;
  __int64 v126;
  int v127;
  _BYTE* v128;
  __int64 v129;
  __int64 v130;
  int v131;
  __int64 v132;
  __int64 v133;
  int v134;
  int v135;
  int v136;
  char v137;
  __int64 v138;
  unsigned int v139;
  unsigned int v140;
  __int64 v141;
  float v142;
  float v143;
  int v144;
  __int64 v145;
  int v146;
  int v147;
  int v148;
  int v149;
  __int64 v150;
  unsigned int v151;
  int v152;
  int v153;
  bool v154;
  __int64 v155;
  long double v156;
  long double v157;
  long double v158;
  long double v159;
  long double v160;
  long double v161;
  __int64 v162;
  __int64 v163;
  unsigned __int8 v164;
  int v165;
  int v166;
  int v167;
  unsigned int v168;
  int v169;
  __int64 v170;
  __int64* v171;
  __int64 v172;
  __int64 v173;
  int v174;
  __int64* v175;
  __int64* v176;
  __int64 v177;
  __int64* v178;
  __int64* v179;
  __int64 v180;
  __int64 v181;
  int v182;
  unsigned int v183;
  _BYTE* v184;
  unsigned int v185;
  int v186;
  signed __int64* v187;
  int* v188;
  int v189;
  __int64 v190;
  int v191;
  int v192;
  int v193;
  int v194;
  __int64 v195;
  int v196;
  __int64 v197;
  float v198;
  float32x2_t v199;
  char* v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  signed __int64 v204;
  int v205;
  int v206;
  __int64 v207;
  _BYTE v208[12292];
  int v209;
  __int64 v210;
  unsigned __int64 v211;
  _QWORD* v212;
  __int64 v213;
  int v214;
  __int64 v215;
  unsigned __int64 v216;
  _DWORD* v217;
  int v218;
  int v219;
  char v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  _QWORD v224[14];
  char v225;
  char* v226;
  __int64 (***v227)();
  char** v228;
  __int64 (**v229)();
  __int64 (**v230)();
  __int64 v231;
  int v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  _QWORD v237[272];
  _BYTE v238[48];
  __int64 v239;
  _QWORD v240[2];
  _QWORD v241[6];
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  _QWORD v248[1120];
  __int64 v249;
  __int64* v250;
  __int64 v251;
  int v252;
  __int64* v253;
  __int64 v254;
  __int64 v255;
  int v256[5];
  int v257;
  _BOOL4 v258;

  a2[2] = 0;
  *((_QWORD*)a2 + 3) = 0;
  v6 = a2;
  a2[3081] = 0;
  *(_QWORD*)a2 = -1;
  v187 = (signed __int64*)(a2 + 2);
  v8 = *((_QWORD*)a2 + 1544);
  *(_QWORD*)(a2 + 3) = -1;
  v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = *((_QWORD**)a2 + 1543);
    if (v10 != nullptr) {
      do {
        v11 = (_QWORD*)*v10;
        if (*(_QWORD*)(*v9 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v9 + v12);
        v10 = v11;
      } while (v11 != nullptr);
    }
    v13 = *((_QWORD*)v6 + 1542);
    *((_QWORD*)v6 + 1543) = 0;
    if (v13 != 0) {
      v14 = v13 & 7;
      if (v13 >= 8) {
        v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = 0;
        do {
          *(_QWORD*)(*((_QWORD*)v6 + 1541) + 8 * v15) = 0;
          *(_QWORD*)(*((_QWORD*)v6 + 1541) + 8 * v15 + 8) = 0;
          *(_QWORD*)(*((_QWORD*)v6 + 1541) + 8 * v15 + 16) = 0;
          *(_QWORD*)(*((_QWORD*)v6 + 1541) + 8 * v15 + 24) = 0;
          *(_QWORD*)(*((_QWORD*)v6 + 1541) + 8 * v15 + 32) = 0;
          *(_QWORD*)(*((_QWORD*)v6 + 1541) + 8 * v15 + 40) = 0;
          *(_QWORD*)(*((_QWORD*)v6 + 1541) + 8 * v15 + 48) = 0;
          v17 = *((_QWORD*)v6 + 1541) + 8 * v15;
          v15 += 8;
          *(_QWORD*)(v17 + 56) = 0;
        } while (v16 != v15);
      }
      else {
        v15 = 0;
      }
      if (v14 != 0) {
        v18 = 8 * v15;
        do {
          --v14;
          *(_QWORD*)(*((_QWORD*)v6 + 1541) + v18) = 0;
          v18 += 8;
        } while (v14 != 0);
      }
    }
    *((_QWORD*)v6 + 1544) = 0;
  }
  v6[3092] = 0;
  v6[5] = 0;
  memset_alt2(*GameData_2130940 + 8, 0, 0x2000, a4, a5, a6);
  GameRoutine_11fe0c0_alt1(v224, *a1);
  v216 = -1;
  v222 = 0;
  v223 = 0;
  GameRoutine_844ee0_alt1(v208);
  v207 = 0;
  v209 = 0;
  v204 = 0xFFFFFFFF00000000LL;
  v205 = -1;
  if (v213 != 0) {
    v19 = v212;
    if (v212 != nullptr) {
      do {
        v20 = (_QWORD*)*v19;
        if (*(_QWORD*)(*v9 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v9 + v21);
        v19 = v20;
      } while (v20 != nullptr);
    }
    v212 = nullptr;
    if (v211 != 0) {
      v22 = v211 & 7;
      if (v211 >= 8) {
        v24 = v211 & 0xFFFFFFFFFFFFFFF8LL;
        v23 = 0;
        do {
          *(_QWORD*)(v210 + 8 * v23) = 0;
          *(_QWORD*)(v210 + 8 * v23 + 8) = 0;
          *(_QWORD*)(v210 + 8 * v23 + 16) = 0;
          *(_QWORD*)(v210 + 8 * v23 + 24) = 0;
          *(_QWORD*)(v210 + 8 * v23 + 32) = 0;
          *(_QWORD*)(v210 + 8 * v23 + 40) = 0;
          *(_QWORD*)(v210 + 8 * v23 + 48) = 0;
          v25 = v210 + 8 * v23;
          v23 += 8;
          *(_QWORD*)(v25 + 56) = 0;
        } while (v24 != v23);
      }
      else {
        v23 = 0;
      }
      if (v22 != 0) {
        v26 = 8 * v23;
        do {
          --v22;
          *(_QWORD*)(v210 + v26) = 0;
          v26 += 8;
        } while (v22 != 0);
      }
    }
    v213 = 0;
  }
  v27 = *a1;
  v28 = (_DWORD*)a1[1];
  v29 = a1[4];
  v214 = 0;
  v206 = 0;
  v215 = v27;
  LOBYTE(v27) = *((_BYTE*)a1 + 24);
  v217 = v28;
  v221 = v29;
  v220 = v27;
  v30 = *((_DWORD*)a1 + 4);
  v31 = *((_DWORD*)a1 + 5);
  v219 = v31;
  v218 = v30;
  if (*(_BYTE*)(*GameData_212ce90[0] +
                *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) != 1) {
    v33 = 0;
    v182 = 0;
    v32 = 0;
    if ((v30 & 1) == 0) {
      goto LABEL_37;
    }
    goto LABEL_44;
  }
  if (*(_QWORD*)GameData_212d290 == 0 ||
      (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) == 0) {
    v32 = 1;
    v33 = 0;
    v182 = 1;
    if ((v30 & 1) == 0) {
      goto LABEL_37;
    }
  LABEL_44:
    v37 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v9, 8, 16, 0);
    v38 = (__int64)v37;
    v39 = GameData_2130bf8[0];
  LABEL_45:
    *v37 = v39 + 2;
    goto LABEL_46;
  }
  v182 = 0;
  v32 = 2;
  v33 = 1;
  if ((v30 & 1) != 0) {
    goto LABEL_44;
  }
LABEL_37:
  if ((v30 & 4) != 0) {
    v41 = v31 == 3;
    v42 = fw_memory_HeapManager_Allocate_alt1(*v9, 16, 16, 0);
    v43 = GameData_2130c08[0];
    *(_BYTE*)(v42 + 8) = v41;
    *(_BYTE*)(v42 + 9) = 0;
    *(_QWORD*)v42 = v43 + 2;
    v40 = v223;
    *(_DWORD*)(v42 + 12) = *(__int16*)(v215 + 492);
    v223 = v42;
    if (v40 == 0) {
      goto LABEL_50;
    }
    goto LABEL_49;
  }
  if ((v30 & 0x10) != 0) {
    v38 = fw_memory_HeapManager_Allocate_alt1(*v9, 16, 16, 0);
    v171 = GameData_2130c10[0] + 2;
    *(_BYTE*)(v38 + 8) = (v218 & 0x400) != 0;
    *(_QWORD*)v38 = v171;
  LABEL_46:
    v40 = v223;
    v223 = v38;
    if (v40 == 0) {
      goto LABEL_50;
    }
  LABEL_49:
    (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
    goto LABEL_50;
  }
  if ((v30 & 0x80) != 0) {
    v37 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v9, 8, 16, 0);
    v38 = (__int64)v37;
    v39 = GameData_2130c28[0];
    goto LABEL_45;
  }
  if ((v30 & 0x200) != 0) {
    v37 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v9, 8, 16, 0);
    v38 = (__int64)v37;
    v39 = GameData_2130c30[0];
    goto LABEL_45;
  }
  if (v33 != 0) {
    GameRoutine_12a13c0(&v215);
  }
  else {
    GameRoutine_12a1460(&v215);
  }
LABEL_50:
  v44 = *GameData_2130940;
  if ((*((_BYTE*)a1 + 17) & 0x20) != 0) {
    memset_alt2(v44 + 16408, 0, 0x2000, v34, v35, v36);
  }
  v172 = v44;
  *(_BYTE*)(v44 + 24600) = 1;
  v45 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v46 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v185 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  v186 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  if (v45 <= v185 && *(unsigned __int8*)(*GameData_212ce98[0] + 28) <= v46) {
    v190 = 0;
    v189 = 0;
    v56 = GameData_21306a0[0];
    v57 = GameData_21306c0[0];
    v202 = v172 + 16408;
    v200 = (char*)GameData_2130948 + 16;
    v181 = GameData_21306b8[0] + 16;
    v180 = GameData_21308b8 + 16;
    v179 = GameData_2130bd0[0] + 2;
    v177 = GameData_212d238[0] + 16;
    v178 = GameData_2130938[0] + 2;
    v176 = GameData_212da50[0] + 2;
    v188 = v6;
    v196 = v32;
    v175 = GameData_212d258[0] + 2;
    do {
      v59 = v186;
      v257 = 32 * v45;
      v194 = 32 * (v45 - 1);
      v192 = (32 * v45) | 1;
      v193 = 32 * v45 - 1;
      v191 = 32 * (v45 + 1);
      do {
        if ((GameRoutine_747a00_alt1(*(_QWORD*)(*(_QWORD*)v56 + 8LL),
                                     (unsigned int)v59, v45, *a1, 0) &
             1) == 0) {
          goto LABEL_72;
        }
        v60 = *(_DWORD*)(*(_QWORD*)v57 + 16LL) <= v59 &&
              v59 <= *(_DWORD*)(*(_QWORD*)v57 + 20LL);
        v61 = v60 && *(_DWORD*)(*(_QWORD*)v57 + 24LL) <= (int)v45;
        if (!v61 || (signed int)v45 > *(_DWORD*)(*(_QWORD*)v57 + 28LL)) {
          goto LABEL_72;
        }
        if ((*((_BYTE*)a1 + 17) & 0x20) != 0) {
          if ((unsigned int)(v59 + v257) >= 0x400) {
            v65 = 0;
          }
          else {
            v65 = v59 + v257;
          }
          if (*(_QWORD*)(v202 + 8LL * v65) != 0) {
            goto LABEL_72;
          }
          v66 = *(_BYTE*)(*GameData_212ce98[0] + 24);
          v67 = *(unsigned __int8*)(*GameData_212ce98[0] + 26);
          v68 = *(_BYTE*)(*GameData_212ce98[0] + 25);
          v69 = *(unsigned __int8*)(*GameData_212ce98[0] + 27);
          if (v67 > (unsigned __int8)(v59 - v66) &&
              v69 > (unsigned __int8)(v45 - 1 - v68)) {
            v70 = v59 + v194;
            if ((unsigned int)(v59 + v194) >= 0x400) {
              v70 = 0;
            }
            *(_QWORD*)(v202 + 8LL * v70) = 1;
            v66 = *(_BYTE*)(*GameData_212ce98[0] + 24);
            v67 = *(unsigned __int8*)(*GameData_212ce98[0] + 26);
            v68 = *(_BYTE*)(*GameData_212ce98[0] + 25);
            v69 = *(unsigned __int8*)(*GameData_212ce98[0] + 27);
          }
          v71 = v45 - v68;
          if (v67 > (unsigned __int8)~(v66 - v59) && v69 > v71) {
            v72 = v193 + v59;
            if ((unsigned int)(v193 + v59) >= 0x400) {
              v72 = 0;
            }
            *(_QWORD*)(v202 + 8LL * v72) = 1;
            v68 = *(_BYTE*)(*GameData_212ce98[0] + 25);
            v66 = *(_BYTE*)(*GameData_212ce98[0] + 24);
            v67 = *(unsigned __int8*)(*GameData_212ce98[0] + 26);
            v69 = *(unsigned __int8*)(*GameData_212ce98[0] + 27);
            v71 = v45 - v68;
          }
          if (v67 > (unsigned __int8)(v59 - v66) && v69 > v71) {
            *(_QWORD*)(v202 + 8LL * v65) = 1;
            v68 = *(_BYTE*)(*GameData_212ce98[0] + 25);
            v66 = *(_BYTE*)(*GameData_212ce98[0] + 24);
            v67 = *(unsigned __int8*)(*GameData_212ce98[0] + 26);
            v69 = *(unsigned __int8*)(*GameData_212ce98[0] + 27);
            v71 = v45 - v68;
          }
          if (v67 > (unsigned __int8)(v59 - v66 + 1) && v69 > v71) {
            v73 = v59 + v192;
            if ((unsigned int)(v59 + v192) >= 0x400) {
              v73 = 0;
            }
            *(_QWORD*)(v202 + 8LL * v73) = 1;
            v66 = *(_BYTE*)(*GameData_212ce98[0] + 24);
            v67 = *(unsigned __int8*)(*GameData_212ce98[0] + 26);
            v68 = *(_BYTE*)(*GameData_212ce98[0] + 25);
            v69 = *(unsigned __int8*)(*GameData_212ce98[0] + 27);
          }
          if (v67 > (unsigned __int8)(v59 - v66) &&
              v69 > (unsigned __int8)(v45 + 1 - v68)) {
            v74 = v59 + v191;
            if ((unsigned int)(v59 + v191) >= 0x400) {
              v74 = 0;
            }
            *(_QWORD*)(v202 + 8LL * v74) = 1;
          }
        }
        v232 = 0;
        v231 = 0;
        v230 = nullptr;
        v229 = nullptr;
        v233 = 0;
        v234 = 0;
        v235 = 0;
        v236 = 0;
        __builtin_memset(v237, 0, 32);
        v62 = *GameData_212ce98[0];
        v227 = &v229;
        v228 = &v226;
        v63 = *(_QWORD*)(v62 + 96);
        v226 = v200;
        Image_72c060_alt1(v63, v224[0], (unsigned int)v59, v45, &v226);
        if (v228 == &v226) {
          v64 = 32;
          goto LABEL_115;
        }
        if (v228 != nullptr) {
          v64 = 40;
        LABEL_115:
          (*(void (**)(void)) & (*v228)[v64])();
        }
        v75 = v224[0];
        v76 = *(_QWORD*)(v224[0] + 1680LL);
        if ((int)((unsigned __int64)(*(_QWORD*)(v224[0] + 1688LL) - v76) >>
                  2) >= 1) {
          v77 = *(_QWORD*)(v224[0] + 1648LL);
          *(_QWORD*)(v224[0] + 1688LL) = v76;
          v78 = *(_DWORD*)(v75 + 416);
          *(_DWORD*)(v75 + 1672) = 0;
          *(_QWORD*)(v75 + 1728) = 0;
          *(_QWORD*)(v75 + 1736) = 0;
          *(_QWORD*)(v75 + 1656) = v77;
          if ((v78 & 0x10000000) == 0) {
            *(_DWORD*)(v75 + 416) = v78 | 0x10000000;
            game_6c51e0_alt1(v75);
            GameRoutine_6c6da0_alt1(v75);
            game_6c6ec0_alt1(v75);
            *(_DWORD*)(v75 + 416) &= ~0x10000000u;
            v75 = v224[0];
          }
        }
        UnitSkillList_84cf20_alt1(v75 + 1648, &v229, 1);
        v79 = v224[0];
        v80 = *(_DWORD*)(v224[0] + 416LL);
        *(_BYTE*)(v224[0] + 584LL) = v59;
        *(_BYTE*)(v79 + 585) = v45;
        if ((v80 & 0x10000000) == 0) {
          *(_DWORD*)(v79 + 416) = v80 | 0x10000000;
          game_6c51e0_alt1(v79);
          GameRoutine_6c6da0_alt1(v79);
          game_6c6ec0_alt1(v79);
          *(_DWORD*)(v79 + 416) &= ~0x10000000u;
        }
        v225 = 1;
        if (v236 != 0) {
          v81 = *v9;
          v237[0] = v236;
          if (*(_QWORD*)(v81 + 200) != 0) {
            v82 = 128;
          }
          else {
            v82 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v81 + v82);
        }
        if (v233 != 0) {
          v83 = *v9;
          v234 = v233;
          if (*(_QWORD*)(v83 + 200) != 0) {
            v84 = 128;
          }
          else {
            v84 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v83 + v84);
        }
        if (v229 != nullptr) {
          v85 = *v9;
          v230 = v229;
          if (*(_QWORD*)(v85 + 200) != 0) {
            v86 = 128;
          }
          else {
            v86 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v85 + v86);
        }
        v216 = __PAIR64__(v45, v59);
        if (v32 != 2) {
          AIThink_129b260(&v229, &v215, &v204);
          if (v32 == 1) {
            v87 = *GameData_2130940;
            v254 = *GameData_2130940 + 8208;
            *(_BYTE*)(v87 + 16400) = 1;
            v229 = game_AIThink_SpecialAttackCalculatorForEntrust_vtable;
            v253 = v179;
            v255 = *(_QWORD*)GameData_21306d0 + 2688LL;
            v88 = AIThink_1299cc0(&v229);
            v253 = v178;
            *(_BYTE*)(v254 + 0x2000) = 0;
          }
          else {
            v229 = game_AIThink_SpecialAttackCalculatorForEnemy_vtable;
            v88 = AIThink_1299cc0(&v229);
          }
          v229 = game_AIThink_SpecialAttackCalculatorBase_vtable;
          v235 = GameData_21306b8[0] + 16;
          v241[4] = GameData_212d238[0] + 16;
          v250 = GameData_212da50[0] + 2;
          if (v251 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v251 + 8LL))(v251);
            v251 = 0;
          }
          v241[5] = GameData_212d258[0] + 2;
          BattleSide_Destructor_alt1(v248, v89, v90);
          BattleSide_Destructor_alt1(&v246, v96, v97);
          BattleSide_Destructor_alt1(&v244, v98, v99);
          BattleSide_Destructor_alt1(&v242, v100, v101);
          game_Unit_Destroy_Unit_alt1(&v239);
          game_Unit_Destroy_Unit_alt1(v237);
          *(_BYTE*)(v234 + 0x2000) = 0;
          if ((v88 & 1) == 0) {
            goto LABEL_71;
          }
          goto LABEL_248;
        }
        v207 = 0;
        v209 = 0;
        v204 = 0xFFFFFFFF00000000LL;
        v205 = -1;
        if (v213 != 0) {
          v91 = v212;
          if (v212 != nullptr) {
            do {
              v92 = (_QWORD*)*v91;
              if (*(_QWORD*)(*v9 + 200LL) != 0) {
                v93 = 128;
              }
              else {
                v93 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v9 + v93);
              v91 = v92;
            } while (v92 != nullptr);
          }
          v94 = v211;
          v212 = nullptr;
          if (v211 != 0) {
            if (v211 >= 8) {
              v102 = v211 & 0xFFFFFFFFFFFFFFF8LL;
              v95 = 0;
              do {
                *(_QWORD*)(v210 + 8 * v95) = 0;
                *(_QWORD*)(v210 + 8 * v95 + 8) = 0;
                *(_QWORD*)(v210 + 8 * v95 + 16) = 0;
                *(_QWORD*)(v210 + 8 * v95 + 24) = 0;
                *(_QWORD*)(v210 + 8 * v95 + 32) = 0;
                *(_QWORD*)(v210 + 8 * v95 + 40) = 0;
                *(_QWORD*)(v210 + 8 * v95 + 48) = 0;
                v103 = v210 + 8 * v95;
                v95 += 8;
                *(_QWORD*)(v103 + 56) = 0;
              } while (v102 != v95);
            }
            else {
              v95 = 0;
            }
            v104 = v94 & 7;
            if (v104 != 0) {
              v105 = 8 * v95;
              do {
                --v104;
                *(_QWORD*)(v210 + v105) = 0;
                v105 += 8;
              } while (v104 != 0);
            }
          }
          v213 = 0;
        }
        v214 = 0;
        v206 = 0;
        v229 = (__int64 (**)())v181;
        GameRoutine_6c2b50_alt1(&v231);
        GameRoutine_6c2b50_alt1(v238);
        GameRoutine_790080_alt1(v240);
        v229 = (__int64 (**)())v180;
        v252 = 0;
        v106 = *GameData_2130988[0];
        v107 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                          8LL * (*v217 & 0xFFF));
        v258 =
            v107 != 0 && (unsigned int)*(unsigned __int8*)(v107 + 105) - 2 < 3;
        LODWORD(v108) = v216 + 32 * HIDWORD(v216);
        if ((unsigned int)v108 >= 0x400) {
          v108 = 0;
        }
        else {
          v108 = (unsigned int)v108;
        }
        v109 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)GameData_21306a0[0] +
                                              12880LL) +
                                   v108 + 64);
        v110 = v215;
        v197 = *GameData_2130940;
        *(_BYTE*)(*GameData_2130940 + 8200) = 1;
        v111 = GameRoutine_12aaf80(v110);
        if (v111 == 0) {
          goto LABEL_173;
        }
        v114 = *(char*)(v111 + 585);
        v115 = *(char*)(v111 + 584) - (_DWORD)v216;
        v198 = (float)v115;
        v116 = (float)(v114 - HIDWORD(v216));
        if (v115 != 0 || v114 != HIDWORD(v216)) {
          v118 = sqrtf((float)(v116 * v116) + (float)(v198 * v198));
          *(float*)&v119 = v198 / v118;
          *((float*)&v119 + 1) = v116 / v118;
          LANES64(v199).n64_u64[0] = v119;
        }
        else {
          *(float*)&v117 = (float)v115;
          *((float*)&v117 + 1) = (float)(v114 - HIDWORD(v216));
          LANES64(v199).n64_u64[0] = v117;
        }
        if ((AITarget_1275a80_alt1(
                 v106, v215, v216, SHIDWORD(v216),
                 *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                            8LL * (*v217 & 0xFFF)),
                 6) &
             1) != 0) {
          v174 = v109;
          v203 = *(unsigned int*)(v106 + 12356);
          if ((int)v203 >= 1) {
            v121 = 0;
            v195 = v106;
            v184 = (_BYTE*)(v106 + 12417);
            v201 = v106 + 73;
            v173 = v106 + 68;
            while (1) {
              v123 = v120;
              if (!v258) {
                break;
              }
              if ((GameRoutine_1276580(v106, v121) & 1) == 0) {
                goto LABEL_176;
              }
              v120 = v123;
              v124 = *(unsigned int*)(v106 + 24700);
              if ((int)v124 >= 1) {
                v125 = v184;
                v126 = 0;
                v127 = 0;
                while (2) {
                  if (*v125 == 0) {
                    goto LABEL_188;
                  }
                  v132 = game_UnitPool_Get_alt1(v125);
                  if (v132 != 0) {
                    v133 = *(_QWORD*)(v132 + 440);
                    v134 = v133 != 0 ? *(unsigned __int8*)(v133 + 16) : 9;
                    v135 = *(unsigned __int8*)(*(_QWORD*)(v215 + 440) + 16LL);
                    if (v135 != v134) {
                      if (*(_BYTE*)(*(_QWORD*)(v215 + 440) + 16LL) != 0) {
                        if (v134 != 0 || v135 != 3) {
                          goto LABEL_200;
                        }
                      }
                      else if (v134 != 3) {
                      LABEL_200:
                        v127 += AIThink_11fd9e0(v215, v132);
                        if (v126 == 0) {
                          if (*v125 != 0) {
                            v126 = game_UnitPool_Get_alt1(v125);
                          }
                          else {
                            v126 = 0;
                          }
                        }
                      }
                    }
                  }
                  v120 = v123;
                LABEL_188:
                  --v124;
                  v125 += 12;
                  if (v124 == 0) {
                    goto LABEL_215;
                  }
                  continue;
                }
              }
              v32 = v196;
            LABEL_177:
              if (++v121 == v203) {
                goto LABEL_244;
              }
            }
            v128 = (_BYTE*)(v201 + 12 * v121);
            if (*v128 != 0) {
              v129 = game_UnitPool_Get_alt1(v201 + 12 * v121);
              if (v129 != 0) {
                v130 = *(_QWORD*)(v129 + 440);
                v131 = v130 != 0 ? *(unsigned __int8*)(v130 + 16) : 9;
                v136 = *(unsigned __int8*)(*(_QWORD*)(v215 + 440) + 16LL);
                if (v136 != v131) {
                  if (*(_BYTE*)(*(_QWORD*)(v215 + 440) + 16LL) != 0) {
                    if (v131 != 0 || v136 != 3) {
                    LABEL_211:
                      v127 = AIThink_11fd9e0(v215, v129);
                      if (*v128 != 0) {
                        v126 = game_UnitPool_Get_alt1(v128);
                      }
                      else {
                        v126 = 0;
                      }
                      v120 = v123;
                    LABEL_215:
                      if (v127 == 0) {
                        v6 = v188;
                        v32 = v196;
                      LABEL_242:
                        v106 = v195;
                        goto LABEL_177;
                      }
                      v6 = v188;
                      v32 = v196;
                      if (v223 != 0) {
                        LODWORD(v226) = v127;
                        v227 = (__int64 (***)())v126;
                        v137 = (*(__int64 (**)(__int64, char**))(
                            *(_QWORD*)v223 + 24LL))(v223, &v226);
                        v120 = v123;
                        if ((v137 & 1) == 0) {
                          goto LABEL_242;
                        }
                      }
                      v138 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                        8LL * (*v217 & 0xFFF));
                      if (v138 != 0) {
                        v139 = *(unsigned __int8*)(v138 + 105);
                        v140 = v183;
                        if (v139 <= 5) {
                          if (((1 << v139) & 0x2B) != 0) {
                            goto LABEL_221;
                          }
                          v155 = v173 + 12 * v121;
                          v120 = *(char*)(v155 + 1);
                          v140 = *(char*)(v155 + 2);
                        }
                      }
                      else {
                      LABEL_221:
                        v120 = *(char*)(v126 + 584);
                        v140 = *(char*)(v126 + 585);
                      }
                      *(float*)&v141 = (float)(int)(v120 - v216);
                      v142 = (float)(int)(v140 - HIDWORD(v216));
                      if (__PAIR64__(v140, v120) != v216) {
                        v143 = sqrtf((float)(v142 * v142) +
                                     (float)(*(float*)&v141 * *(float*)&v141));
                        *(float*)&v141 = *(float*)&v141 / v143;
                        v142 = v142 / v143;
                      }
                      *((float*)&v112 + 1) = v142;
                      v183 = v140;
                      DWORD1(v113) =
                          LANES64_OF(vmul_f32(v199, *(float32x2_t*)&v112))
                              .n64_u32[1];
                      LODWORD(v113) = DWORD1(v113);
                      *(float*)&v112 =
                          *((float*)&v113 + 1) +
                          (float)(LANES64(v199).n64_f32[0] * *(float*)&v141);
                      if (*(float*)&v112 < 0.5) {
                        goto LABEL_242;
                      }
                      v123 = v120;
                      v144 = GameRoutine_12ac8b0(v120, v140, &v226, v256);
                      LODWORD(v145) = (_DWORD)v226 + 32 * v256[0];
                      if ((unsigned int)v145 >= 0x400) {
                        v145 = 0;
                      }
                      else {
                        v145 = (unsigned int)v145;
                      }
                      v146 = *(unsigned __int8*)(*(_QWORD*)GameData_21306a0[0] +
                                                 v145 + 15632);
                      if (v144 >= 255) {
                        v147 = 255;
                      }
                      else {
                        v147 = v144;
                      }
                      if (v127 >= 7) {
                        v148 = 7;
                      }
                      else {
                        v148 = v127;
                      }
                      v149 = v148 - ((v146 << 11) + 8 * v147) + 524280;
                      v150 = v173 + 12 * v121;
                      v151 = v174 | (v149 << 8);
                      v152 = *(char*)(v150 + 1);
                      v153 = *(char*)(v150 + 2);
                      if (v204 < 0 || (unsigned int)v204 < v151 ||
                          ((unsigned int)v204 <= v151
                               ? (v154 = (HIDWORD(v204) | (v205 << 16)) <=
                                         (v152 | (v153 << 16)))
                               : (v154 = true),
                           !v154)) {
                        LODWORD(v204) = v174 | (v149 << 8);
                        HIDWORD(v204) = v152;
                        v207 = v126;
                        v205 = v153;
                        GameRoutine_1226120_alt1(v195 + 12408, v208);
                        v206 = v149;
                      }
                      v106 = v195;
                    }
                  }
                  else if (v131 != 3) {
                    goto LABEL_211;
                  }
                }
              }
            }
          LABEL_176:
            v120 = v123;
            goto LABEL_177;
          }
        LABEL_244:
          v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          v122 = v204 >= 0;
        }
        else {
        LABEL_173:
          v122 = false;
        }
        *(_BYTE*)(v197 + 8200) = 0;
        v229 = (__int64 (**)())(GameData_21306b8[0] + 16);
        v240[0] = v177;
        v248[1119] = v176;
        if (v249 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v249 + 8LL))(v249);
          v249 = 0;
        }
        v240[1] = v175;
        BattleSide_Destructor_alt1(&v247, v112, v113);
        BattleSide_Destructor_alt1(&v245, v156, v157);
        BattleSide_Destructor_alt1(&v243, v158, v159);
        BattleSide_Destructor_alt1(v241, v160, v161);
        game_Unit_Destroy_Unit_alt1(v238);
        game_Unit_Destroy_Unit_alt1(&v231);
        if (!v122) {
        LABEL_71:
          v56 = GameData_21306a0[0];
          v57 = GameData_21306c0[0];
          goto LABEL_72;
        }
      LABEL_248:
        LOWORD(v229) = 0;
        BYTE2(v229) = 0;
        v162 = a1[4];
        if (v162 != 0) {
          LODWORD(v163) = v59 + v257;
          if ((unsigned int)(v59 + v257) >= 0x400) {
            v163 = 0;
          }
          else {
            v163 = (unsigned int)v163;
          }
          v164 = *(_BYTE*)(v162 + v163 + 8);
        }
        else {
          v164 = 0;
        }
        game_11f5940(*a1, v59, v45, v164, (bool*)&v229);
        v165 = v204;
        v166 = HIDWORD(v204);
        v167 = v205;
        v56 = GameData_21306a0[0];
        v57 = GameData_21306c0[0];
        if (*v6 < 0) {
          goto LABEL_267;
        }
        if (v182 != 0 && v6[5] == v206 &&
            ((HIDWORD(v190) | (unsigned int)v190 | BYTE1(v229)) & 1) == 0 &&
            (BYTE2(v229) & 1) == 0) {
          if ((v189 & 1) == 0 && ((unsigned __int8)v229 & 1) != 0) {
            v190 = 0;
            v189 = 0;
            goto LABEL_72;
          }
          if (((v189 ^ 1 | (unsigned __int8)v229) & 1) == 0) {
            goto LABEL_267;
          }
        }
        v168 = v6[2];
        if (v168 < (unsigned int)v204 || (v169 = v6[3]) < 0 ||
            v168 <= (unsigned int)v204 &&
                (v169 | (v6[4] << 16)) > (HIDWORD(v204) | (v205 << 16))) {
        LABEL_267:
          *v6 = v59;
          v6[1] = v45;
          if (v187 != &v204) {
            v170 = v207;
            v6[2] = v165;
            v6[3] = v166;
            v6[4] = v167;
            *((_QWORD*)v6 + 3) = v170;
            GameRoutine_1226120_alt1(v208, v6 + 8);
            v6[5] = v206;
          }
          v189 = (unsigned __int8)v229;
          LODWORD(v190) = BYTE2(v229);
          HIDWORD(v190) = BYTE1(v229);
        }
      LABEL_72:
        v58 = v59++ == v46;
      } while (!v58);
      v58 = v45++ == v185;
    } while (!v58);
  }
  v48 = *v6;
  v49 = v212;
  *(_BYTE*)(v172 + 24600) = 0;
  if (v49 != nullptr) {
    do {
      v50 = (_QWORD*)*v49;
      if (*(_QWORD*)(*v9 + 200LL) != 0) {
        v51 = 128;
      }
      else {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v9 + v51);
      v49 = v50;
    } while (v50 != nullptr);
  }
  v52 = v210;
  v210 = 0;
  if (v52 != 0) {
    v53 = 128;
    if (*(_QWORD*)(*v9 + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v9 + v53);
  }
  v54 = v223;
  v223 = 0;
  if (v54 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 8LL))(v54);
  }
  AISupportSkillScope_11fef70_alt1(v224);
  return v48 >= 0;
}

__int64 game_1290d40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int* v11;
  unsigned int v12;
  unsigned int v13;
  bool v14;
  unsigned int v15;
  __int64 v16;
  int v17;
  int* v18;
  __int64* v19;
  __int64* v20;
  _DWORD* v21;
  int v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _DWORD* v37;
  unsigned __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int8 v46;
  int v47;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  struct {
    int v66[3082];
    __int64 v67;
    char gap12352_[8];
    _QWORD* v68;
  } v66_;
  struct {
    __int64 v69;
    _DWORD* v70;
    __int64 v71;
    char v72;
    char gap12417_[3];
    int v73;
    __int64 v74;
  } v69_;
  struct {
    int v75;
    char gap12444_[4];
    __int64 v76;
  } v75_;
  struct {
    _BYTE v77[12328];
    __int64 v78;
    char gap24792_[8];
    _QWORD* v79;
  } v77_;
  int v80[3];

  if (!game_11f44e0(*(_QWORD*)(a1 + 8), 0) ||
      (unsigned __int8)GameRoutine_128f580(*(_QWORD*)(a1 + 8)) != 5) {
    return 0;
  }
  result = 0;
  if ((*(__int16*)(a3 + 2) & 0x80000000) == 0 && *(_BYTE*)a3 == 0) {
    v65 = *(__int16*)(a3 + 2);
    v6 = *(_QWORD*)(a1 + 8);
    v80[0] = 2;
    AIDeploy_1274f90(*(_QWORD**)GameData_21306a0[0], v6, -1,
                     (unsigned int*)v80);
    v75_.v75 = 0;
    v75_.v76 = 0;
    GameRoutine_12a1580((__int64)v77_.v77);
    v69_.v72 = 0;
    v69_.v71 = 0;
    v69_.v70 = nullptr;
    v69_.v73 = -1;
    v69_.v74 = 0;
    GameRoutine_12a1580((__int64)v66_.v66);
    v7 = *(_QWORD*)(a1 + 8);
    LODWORD(v69_.v71) = 2;
    v69_.v69 = v7;
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        16, 16, 0);
    v10 = *(_DWORD*)(v7 + 1976);
    *(_DWORD*)v9 = 10;
    v11 = (int*)(v9 + 4);
    if ((v10 & 0x1000000) != 0) {
      v11 = (int*)(v9 + 12);
      *(_QWORD*)(v9 + 4) = 0xC0000000BLL;
      v12 = *(_BYTE*)(v7 + 1980) & 7;
      if (v12 >= 6) {
        LOBYTE(v12) = v12 - 6;
      }
      v13 = (v12 & 2) != 0;
      v14 = (v12 & 4) == 0;
      v15 = v12 & 1;
      if (!v14) {
        v13 = 2;
      }
      *(_DWORD*)v9 = *(_DWORD*)(v9 + 4LL * v13);
      *(_DWORD*)(v9 + 4LL * v13) = 10;
      v16 = v9 + 4LL * v15;
      v17 = *(_DWORD*)(v9 + 4);
      *(_DWORD*)(v9 + 4) = *(_DWORD*)(v16 + 4);
      *(_DWORD*)(v16 + 4) = v17;
    }
    v18 = (int*)v9;
    v19 = GameData_2130920[0];
    v20 = GameData_212c880[0];
    v21 = GameData_212c8a8;
  LABEL_18:
    v23 = *(_QWORD**)(a1 + 8);
    v24 = *(_QWORD*)(*v20 + 64);
    v25 = *(_QWORD*)(v24 + 8LL * *((int*)v19 + *v18));
    if (v25 == 0) {
      goto LABEL_44;
    }
    v26 = *(_QWORD*)(v24 + 8LL * *((int*)v19 + *v18));
    while (1) {
      v28 = *(unsigned int*)(*(_QWORD*)(v26 + 24) + 4LL);
      v29 = v28 & 0xFFF;
      if ((v28 & 0xFFF) == 0) {
        v30 = v23[182];
        v31 = (v23[183] - v30) >> 2;
        goto LABEL_35;
      }
      v30 = v23[182];
      v31 = (v23[183] - v30) >> 2;
      if (v31 < ((v28 >> 5) & 0x7F) + 1 ||
          ((*(_DWORD*)(v30 + 4 * ((v28 >> 5) & 0x7F)) >> v28) & 1) == 0 ||
          (v32 = v23[187], v33 = v23[186], v32 == v33)) {
      LABEL_20:
        v27 = 0xFFFFFFFFLL;
      }
      else {
        v34 = (v32 - v33) >> 2;
        v35 = 0;
        while (((*(_DWORD*)(v33 + 4 * v35) ^ (unsigned int)v28) & 0xFFF) != 0) {
          if (v34 == ++v35) {
            goto LABEL_20;
          }
        }
        v27 = (unsigned int)v35;
        if ((v35 & 0x80000000) == 0) {
        LABEL_31:
          if ((v27 & 0x80000000) == 0) {
            v36 = v23[186];
          LABEL_33:
            v37 = (_DWORD*)(v36 + 4 * v27);
            goto LABEL_45;
          }
        LABEL_35:
          v38 = *(unsigned __int16*)(v25 + 16);
          v39 = (v38 >> 5) & 0x7F;
          if (v31 >= v39 + 1) {
            v40 = v38 & 0xFFF;
            if (((*(_DWORD*)(v30 + 4LL * (unsigned int)v39) >> v40) & 1) != 0) {
              v41 = v23[187];
              v36 = v23[186];
              if (v41 != v36) {
                v42 = (v41 - v36) >> 2;
                v43 = 0;
                while ((*(_DWORD*)(v36 + 4 * v43) & 0xFFF) != v40) {
                  if (v42 == ++v43) {
                    goto LABEL_44;
                  }
                }
                if ((v43 & 0x8000000000000000LL) == 0) {
                  v27 = (unsigned int)v43;
                  goto LABEL_33;
                }
              }
            }
          }
        LABEL_44:
          v37 = v21;
        LABEL_45:
          if ((*(_WORD*)v37 & 0xFFF) == 0 ||
              (GameRoutine_128e990_alt1((__int64)v23, v37) & 1) == 0) {
            goto LABEL_17;
          }
          v44 = *v20;
          v69_.v70 = v37;
          v45 = *(_QWORD*)(*(_QWORD*)(v44 + 64) + 8LL * (*v37 & 0xFFF));
          v46 = GameRoutine_128f580(*(_QWORD*)(a1 + 8));
          v22 = 0;
          if (v46 == 0 || *(_BYTE*)(v45 + 104) != 3) {
          LABEL_16:
            HIDWORD(v69_.v71) = v22;
          LABEL_17:
            if (++v18 == v11) {
              goto LABEL_74;
            }
            goto LABEL_18;
          }
          v47 = *(unsigned __int8*)(v45 + 106);
          if (v47 != 3) {
            if (v47 == 2) {
              if (v46 == 4) {
                v22 = 5;
                goto LABEL_16;
              }
            }
            else if (v47 == 1 && v46 <= 9u) {
              if (((1 << v46) & 0x38A) != 0) {
                v22 = 1;
                goto LABEL_16;
              }
              if (((1 << v46) & 0x50) != 0) {
                v22 = 6;
                goto LABEL_16;
              }
              if (v46 == 2) {
                if (*(__int16*)(v45 + 330) <= 0) {
                  v22 = 3;
                }
                else {
                  v22 = 4;
                }
                goto LABEL_16;
              }
            }
          LABEL_15:
            v22 = 0;
            goto LABEL_16;
          }
          if (v46 != 5) {
            if (v46 == 4) {
              if (*(_BYTE*)(v45 + 250) == 28) {
                v22 = 7;
                goto LABEL_16;
              }
            }
            else if (v46 == 2 && *(_BYTE*)(v45 + 250) == 13) {
              v22 = 2;
              goto LABEL_16;
            }
            goto LABEL_15;
          }
          if (*(_BYTE*)(v45 + 250) != 0) {
            goto LABEL_15;
          }
          HIDWORD(v69_.v71) = 8;
          if ((game_AIThink_GetSpecialEnhancementScore((__int64)&v69_.v69,
                                                       v66_.v66) &
               1) == 0) {
            goto LABEL_17;
          }
          v49 = *v20;
          v75_.v75 = v66_.v66[2];
          v75_.v76 = *(_QWORD*)(*(_QWORD*)(v49 + 64) + 8LL * (*v37 & 0xFFF));
          GameRoutine_12a16f0((__int64)v77_.v77, (__int64)v66_.v66);
        LABEL_74:
          if (v75_.v76 != 0) {
            GameRoutine_1290c20(a1, (__int64)&v75_.v75, v65);
            if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 1979LL) & 1) == 0 &&
                *(_BYTE*)(*GameData_212cfd0[0] + 20) == 6) {
              v50 = *(_QWORD*)(*v20 + 64);
              v51 =
                  (*(_DWORD*)(*GameData_212cfd0[0] + 56) & 0xFFF) != 0
                      ? *(_QWORD*)(v50 +
                                   8LL *
                                       (*(_DWORD*)(*GameData_212cfd0[0] + 56) &
                                        0xFFF))
                      : 0LL;
              v53 = *(_QWORD*)(v50 +
                               8LL * *(int*)((char*)(*(__int64 (*)[2])0x28LL) +
                                             (_QWORD)v19));
              if (v51 == v53 || v51 == *(_QWORD*)(v53 + 552)) {
                *(_DWORD*)(a1 + 23168) |= 0x1000000u;
              }
            }
            v52 = 1;
          }
          else {
            v52 = 0;
          }
          v54 = 128;
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v54);
          v55 = v66_.v68;
          if (v66_.v68 != nullptr) {
            do {
              v56 = (_QWORD*)*v55;
              if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
                v57 = 128;
              }
              else {
                v57 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v57);
              v55 = v56;
            } while (v56 != nullptr);
          }
          v58 = v66_.v67;
          v66_.v67 = 0;
          if (v58 != 0) {
            v59 = 128;
            if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
              v59 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v59);
          }
          v60 = v77_.v79;
          if (v77_.v79 != nullptr) {
            do {
              v61 = (_QWORD*)*v60;
              if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
                v62 = 128;
              }
              else {
                v62 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v62);
              v60 = v61;
            } while (v61 != nullptr);
          }
          v63 = v77_.v78;
          v77_.v78 = 0;
          if (v63 != 0) {
            v64 = 128;
            if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
              v64 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v64);
          }
          return v52;
        }
      }
      v26 = *(_QWORD*)(v24 + 8 * v29);
      if (v26 == 0) {
        goto LABEL_31;
      }
    }
  }
  return result;
}

__int64 game_1294f20(__int64 a1, signed int* a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6)
{

#pragma clang fp contract(off)
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _DWORD* v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __n128 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  void (*v49)(void);
  __int64* v50;
  _QWORD* v51;
  __int64 (**v52)();
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  unsigned int v56;
  int v58;
  _QWORD* v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  _QWORD* v68;
  unsigned int v69;
  __int64 v70;
  signed int v71;
  bool v72;
  bool v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int v81;
  __int64 v82;
  int v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
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
  int v101;
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
  int v112;
  __int64 v113;
  unsigned __int64 primeEm;
  unsigned __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64* v119;
  __int64* v120;
  __int64 v121;
  int v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  unsigned __int8 v130;
  __int64 v131;
  __int64 v132;
  int v133;
  bool v134;
  __int64 i;
  bool v136;
  _QWORD* v137;
  __int64 v138;
  _QWORD* v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  unsigned __int8 v145;
  int v146;
  int v147;
  int v148;
  unsigned int v149;
  int v150;
  __int64 v151;
  __int64 v152;
  unsigned int v153;
  signed int v154;
  unsigned __int64* v155;
  __int64* v156;
  __int64* v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64* v161;
  int v162;
  __int64 v163;
  __int64 v164;
  char* v165;
  _QWORD v166[2];
  struct {
    _QWORD v167[4];
    _QWORD* v168;
  } v167_;
  struct {
    unsigned __int64 v169;
    int v170;
    int v171;
    __int64 v172;
  } v169_;
  struct {
    _DWORD v173[3074];
    __int64 v174;
    unsigned __int64 v175;
    _QWORD* v176;
    __int64 v177;
    char gap12552_[8];
    int v178;
  } v173_;
  struct {
    __int64 v179;
    unsigned __int64 v180;
    _DWORD* v181;
    int v182;
    int v183;
    char v184;
    char gap12601_[7];
    __int64 v185;
    __int64 v186;
    _QWORD* v187;
  } v179_;
  struct {
    __int64 v188[14];
    char v189;
  } v188_;
  struct {
    _QWORD v190[4];
    _QWORD* v191;
  } v190_;
  struct {
    __int64 (**v192)();
    __int64* v193;
    _QWORD* v194;
    unsigned __int64* v195;
    __int64 (***v196)();
    __int64 (***v197)();
    __int64* v198;
    __int64 v199;
    __int64 v200;
  } v192_;
  struct {
    __int64 v201;
    unsigned __int64 v202;
    _QWORD* v203;
    unsigned __int64 v204;
    float v205;
    char gap12908_[4];
    __int64 v206;
  } v201_;
  _BYTE v207[2224];
  _BYTE v208[2232];
  _QWORD v209[2];
  __int64 v210[95];
  __int64 v211[95];
  __int64 v212[95];
  struct {
    _QWORD v213[1126];
    __int64 v214;
    char gap28696_[568];
    int v215;
    char gap29268_[188];
    __int64 v216;
    __int64 v217;
    int v218;
    char gap29476_[4];
    __int64 v219;
    __int64 v220;
    __int64 v221;
    __int64 v222;
    __int64 v223;
    __int64 v224;
    int v225;
    char gap29532_[28];
    _BOOL4 v226;
    int v227;
  } v213_;

  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  a2[2] = 0;
  *((_QWORD*)a2 + 3) = 0;
  a2[3081] = 0;
  *(_QWORD*)a2 = -1;
  *(_QWORD*)(a2 + 3) = -1;
  v155 = (unsigned __int64*)(a2 + 2);
  if (*((_QWORD*)a2 + 1544) != 0) {
    v8 = *((_QWORD**)a2 + 1543);
    if (v8 != nullptr) {
      v9 = fw_memory_g_heap_manager_ptr;
      do {
        v10 = (_QWORD*)*v8;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        v8 = v10;
      } while (v10 != nullptr);
    }
    v12 = *((_QWORD*)a2 + 1542);
    *((_QWORD*)a2 + 1543) = 0;
    if (v12 != 0) {
      v13 = v12 & 7;
      if (v12 >= 8) {
        v15 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        v14 = 0;
        do {
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14 + 8) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14 + 16) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14 + 24) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14 + 32) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14 + 40) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14 + 48) = 0;
          v16 = *((_QWORD*)a2 + 1541) + 8 * v14;
          v14 += 8;
          *(_QWORD*)(v16 + 56) = 0;
        } while (v15 != v14);
      }
      else {
        v14 = 0;
      }
      if (v13 != 0) {
        v17 = 8 * v14;
        do {
          --v13;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + v17) = 0;
          v17 += 8;
        } while (v13 != 0);
      }
    }
    *((_QWORD*)a2 + 1544) = 0;
  }
  a2[3092] = 0;
  a2[5] = 0;
  memset(*GameData_2130940 + 8, 0, 0x2000, a4, a5, a6),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v18 = GameData_212c880[0];
  v19 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (**(_DWORD**)(a1 + 8) & 0xFFF));
  if (v19 == 0 || (unsigned int)*(unsigned __int8*)(v19 + 105) - 2 > 2) {
    return 0;
  }
  GameRoutine_11fe0c0((__int64)v188_.v188, *(_QWORD*)a1),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v179_.v185 = 0;
  v179_.v186 = 0;
  v179_.v187 = nullptr;
  v179_.v180 = -1;
  GameRoutine_844ee0((__int64)v173_.v173),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v169_.v172 = 0;
  v173_.v173[3073] = 0;
  v169_.v169 = 0xFFFFFFFF00000000LL;
  v169_.v170 = -1;
  if (v173_.v177 != 0) {
    v20 = v173_.v176;
    if (v173_.v176 != nullptr) {
      v21 = fw_memory_g_heap_manager_ptr;
      do {
        v22 = (_QWORD*)*v20;
        if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v23),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        v20 = v22;
      } while (v22 != nullptr);
    }
    v173_.v176 = nullptr;
    if (v173_.v175 != 0) {
      v24 = v173_.v175 & 7;
      if (v173_.v175 >= 8) {
        v27 = v173_.v175 & 0xFFFFFFFFFFFFFFF8LL;
        v25 = 0;
        do {
          *(_QWORD*)(v173_.v174 + 8 * v25) = 0;
          *(_QWORD*)(v173_.v174 + 8 * v25 + 8) = 0;
          *(_QWORD*)(v173_.v174 + 8 * v25 + 16) = 0;
          *(_QWORD*)(v173_.v174 + 8 * v25 + 24) = 0;
          *(_QWORD*)(v173_.v174 + 8 * v25 + 32) = 0;
          *(_QWORD*)(v173_.v174 + 8 * v25 + 40) = 0;
          *(_QWORD*)(v173_.v174 + 8 * v25 + 48) = 0;
          v28 = v173_.v174 + 8 * v25;
          v25 += 8;
          *(_QWORD*)(v28 + 56) = 0;
        } while (v27 != v25);
      }
      else {
        v25 = 0;
      }
      if (v24 != 0) {
        v29 = 8 * v25;
        do {
          --v24;
          *(_QWORD*)(v173_.v174 + v29) = 0;
          v29 += 8;
        } while (v24 != 0);
      }
    }
    v173_.v177 = 0;
  }
  v30 = *(_QWORD*)a1;
  v31 = *(_DWORD**)(a1 + 8);
  v173_.v178 = 0;
  v169_.v171 = 0;
  v167_.v168 = nullptr;
  v179_.v179 = v30;
  LOBYTE(v30) = *(_BYTE*)(a1 + 24);
  v179_.v181 = v31;
  v179_.v184 = v30;
  v32 = *(_DWORD*)(a1 + 16);
  v179_.v183 = *(_DWORD*)(a1 + 20);
  v179_.v182 = v32;
  if ((v32 & 0x20) != 0) {
    v47 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    *v47 = GameData_2130c18[0] + 2;
    v48 = v179_.v187;
    v179_.v187 = v47;
    if (v48 == nullptr) {
      goto LABEL_63;
    }
    v49 = *(void (**)(void))(*v48 + 8LL),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    goto LABEL_62;
  }
  v33 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16, 16, 0),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  if ((v32 & 0x40) == 0) {
    v38 = v33;
    GameRoutine_12a28c0(v33, v179_.v179, v179_.v181),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    v39 = v179_.v187;
    v179_.v187 = (_QWORD*)v38;
    if (v39 != nullptr) {
      (*(void (**)(_QWORD*))(*v39 + 8LL))(v39),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    }
    v40 = *(_QWORD*)(*v18 + 64);
    v41 = *(_QWORD*)(v40 + 8LL * (**(_DWORD**)(a1 + 8) & 0xFFF));
    v42 = *(_QWORD*)(v40 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                         (unsigned __int64)((char*)0x40LL)));
    if (v41 == v42 || v41 == *(_QWORD*)(v42 + 552)) {
      v52 = GameData_2020a88;
    }
    else {
      v43 = *(_QWORD*)(v40 +
                       8LL * *(int*)((char*)GameData_2130920[0] +
                                     (unsigned __int64)((_UNKNOWN*)0x44LL)));
      if (v41 != v43 && v41 != *(_QWORD*)(v43 + 552)) {
        v44 = *(_QWORD*)(v40 +
                         8LL * *(int*)((char*)GameData_2130920[0] +
                                       (unsigned __int64)((_UNKNOWN*)0x48LL)));
        if (v41 == v44 || v41 == *(_QWORD*)(v44 + 552)) {
          GameRoutine_129afa0(v167_.v167),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        }
        else {
          v45 =
              *(_QWORD*)(v40 +
                         8LL * *(int*)((char*)GameData_2130920[0] +
                                       (unsigned __int64)((_UNKNOWN*)0x4CLL)));
          if (v41 == v45 || v41 == *(_QWORD*)(v45 + 552)) {
            GameRoutine_129b020(v167_.v167),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          }
          else {
            v46 = *(_QWORD*)(v40 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                 (unsigned __int64)((
                                                     _UNKNOWN*)0x50LL)));
            if (v41 == v46 || v41 == *(_QWORD*)(v46 + 552)) {
              AIThink_129b0a0((__int64)v167_.v167),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v35 = COERCE_AS(
                      __typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            }
          }
        }
        goto LABEL_63;
      }
      v52 = GameData_2020b18;
    }
    v192_.v192 = v52;
    v192_.v196 = &v192_.v192;
    GameRoutine_12a0ba0(&v192_.v192, v167_.v167),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    if (v192_.v196 == &v192_.v192) {
      v53 = 4;
    }
    else {
      if (v192_.v196 == nullptr) {
        goto LABEL_63;
      }
      v53 = 5;
    }
    v49 = (void (*)(void))(*v192_.v196)[v53],
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  LABEL_62:
    v49(),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    goto LABEL_63;
  }
  v50 = GameData_2130c20[0];
  *(_BYTE*)(v33 + 8) = (v179_.v182 & 0x4000) != 0;
  v51 = v179_.v187;
  v179_.v187 = (_QWORD*)v33;
  *(_QWORD*)v33 = v50 + 2;
  if (v51 != nullptr) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v51 + 8LL))(
        (void*)(v51), v51),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  }
LABEL_63:
  v54 = *GameData_2130940;
  if ((*(_BYTE*)(a1 + 17) & 0x20) != 0) {
    v37 = memset(v54 + 16408, 0, 0x2000, v34, v35, v36),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  }
  *(_BYTE*)(v54 + 24600) = 1;
  v164 = v54 + 16408;
  v166[0] = GameData_2130bd8 + 2;
  v166[1] = v54 + 16408;
  v152 = v54;
  v213_.v226 =
      *(_BYTE*)(*GameData_212ce90[0] +
                *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) == 1 &&
      (*(_QWORD*)GameData_212d290 == 0 ||
       (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) == 0);
  v55 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v56 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v153 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  v154 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  if (v55 <= v153 && *(unsigned __int8*)(*GameData_212ce98[0] + 28) <= v56) {
    v163 = 0;
    v162 = 0;
    v70 = GameData_21306a0[0];
    v165 = (char*)GameData_2130948 + 16;
    v161 = GameData_2130bc8[0] + 2;
    v160 = GameData_21306b8[0] + 16;
    v159 = GameData_21308b8 + 16;
    v158 = GameData_212d238[0] + 16;
    v157 = GameData_212da50[0] + 2;
    v156 = GameData_212d258[0] + 2;
    do {
      v71 = v154;
      v213_.v227 = 32 * v55;
      do {
        if ((GameRoutine_747a00(*(_QWORD*)(*(_QWORD*)v70 + 8LL),
                                (unsigned int)v71, v55, *(_QWORD*)a1, 0) &
             1) == 0) {
          goto LABEL_96;
        }
        v72 = *(_DWORD*)(*(_QWORD*)GameData_21306c0[0] + 16LL) <= v71 &&
              v71 <= *(_DWORD*)(*(_QWORD*)GameData_21306c0[0] + 20LL);
        v73 =
            v72 && *(_DWORD*)(*(_QWORD*)GameData_21306c0[0] + 24LL) <= (int)v55;
        if (!v73 || (signed int)v55 >
                        *(_DWORD*)(*(_QWORD*)GameData_21306c0[0] + 28LL)) {
          goto LABEL_96;
        }
        if ((*(_BYTE*)(a1 + 17) & 0x20) != 0) {
          v74 = v71 + v213_.v227;
          if ((unsigned int)(v71 + v213_.v227) >= 0x400) {
            v74 = 0;
          }
          if (*(_QWORD*)(v164 + 8LL * v74) != 0) {
            goto LABEL_96;
          }
          AIThink_129a570((__int64)v166, v71, v55),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        }
        LODWORD(v192_.v195) = 0;
        v192_.v194 = nullptr;
        v192_.v193 = nullptr;
        v192_.v192 = nullptr;
        v192_.v196 = nullptr;
        v192_.v197 = nullptr;
        v192_.v198 = nullptr;
        v192_.v199 = 0;
        v192_.v200 = 0;
        v201_.v201 = 0;
        v75 = *GameData_212ce98[0];
        v201_.v202 = 0;
        v201_.v203 = nullptr;
        v190_.v190[1] = &v192_.v192;
        v190_.v191 = v190_.v190;
        v76 = *(_QWORD*)(v75 + 96);
        v190_.v190[0] = v165;
        Image_72c060(v76, v188_.v188[0], v71, v55, (__int64)v190_.v190),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        if (v190_.v191 == v190_.v190) {
          v77 = 32;
          goto LABEL_116;
        }
        if (v190_.v191 != nullptr) {
          v77 = 40;
        LABEL_116:
          (*(void (**)(__int64))(*v190_.v191 + v77))((__int64)v190_.v191),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        }
        v78 = v188_.v188[0];
        v79 = *(_QWORD*)(v188_.v188[0] + 1680);
        if ((int)((unsigned __int64)(*(_QWORD*)(v188_.v188[0] + 1688) - v79) >>
                  2) >= 1) {
          v80 = *(_QWORD*)(v188_.v188[0] + 1648);
          *(_QWORD*)(v188_.v188[0] + 1688) = v79;
          v81 = *(_DWORD*)(v78 + 416);
          *(_DWORD*)(v78 + 1672) = 0;
          *(_QWORD*)(v78 + 1728) = 0;
          *(_QWORD*)(v78 + 1736) = 0;
          *(_QWORD*)(v78 + 1656) = v80;
          if ((v81 & 0x10000000) == 0) {
            *(_DWORD*)(v78 + 416) = v81 | 0x10000000;
            game_6c51e0(v78),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            GameRoutine_6c6da0(v78),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            game_6c6ec0(v78),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            *(_DWORD*)(v78 + 416) &= ~0x10000000u;
            v78 = v188_.v188[0];
          }
        }
        UnitSkillList_84cf20(v78 + 1648, (__int64)&v192_.v192),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        v82 = v188_.v188[0];
        v83 = *(_DWORD*)(v188_.v188[0] + 416);
        *(_BYTE*)(v188_.v188[0] + 584) = v71;
        *(_BYTE*)(v82 + 585) = v55;
        if ((v83 & 0x10000000) == 0) {
          *(_DWORD*)(v82 + 416) = v83 | 0x10000000;
          game_6c51e0(v82),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          GameRoutine_6c6da0(v82),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          game_6c6ec0(v82),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          *(_DWORD*)(v82 + 416) &= ~0x10000000u;
        }
        v188_.v189 = 1;
        v84 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v192_.v199 != 0) {
          v85 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
          v192_.v200 = v192_.v199;
          if (*(_QWORD*)(v85 + 200) != 0) {
            v86 = 128;
          }
          else {
            v86 = 56;
          }
          nn_mem_StandardAllocator_Free(v85 + v86),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        }
        if (v192_.v196 != nullptr) {
          v87 = *v84;
          v192_.v197 = v192_.v196;
          if (*(_QWORD*)(v87 + 200) != 0) {
            v88 = 128;
          }
          else {
            v88 = 56;
          }
          nn_mem_StandardAllocator_Free(v87 + v88),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        }
        if (v192_.v192 != nullptr) {
          v89 = *v84;
          v192_.v193 = (__int64*)v192_.v192;
          if (*(_QWORD*)(v89 + 200) != 0) {
            v90 = 128;
          }
          else {
            v90 = 56;
          }
          nn_mem_StandardAllocator_Free(v89 + v90),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        }
        v179_.v180 = __PAIR64__(v55, v71);
        if (v213_.v226) {
          v91 = *v18;
          v192_.v193 = &v179_.v179;
          v192_.v194 = v167_.v167;
          v192_.v195 = &v169_.v169;
          v92 = *(_QWORD*)(v91 + 64);
          v93 = *(_QWORD*)(v92 + 8LL * (*v179_.v181 & 0xFFF));
          v94 = *(_QWORD*)(v92 +
                           8LL * *(int*)((char*)GameData_2130920[0] +
                                         (unsigned __int64)((char*)0x40LL)));
          if (v93 == v94 || v93 == *(_QWORD*)(v94 + 552)) {
            v101 = 1;
          }
          else {
            v95 = *(_QWORD*)(v92 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                 (unsigned __int64)((
                                                     _UNKNOWN*)0x44LL)));
            if (v93 == v95 || v93 == *(_QWORD*)(v95 + 552)) {
              v101 = 2;
            }
            else {
              v96 = *(_QWORD*)(v92 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                   (unsigned __int64)((
                                                       _UNKNOWN*)0x48LL)));
              if (v93 == v96 || v93 == *(_QWORD*)(v96 + 552)) {
                v101 = 3;
              }
              else {
                v97 =
                    *(_QWORD*)(v92 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                   (unsigned __int64)((
                                                       _UNKNOWN*)0x4CLL)));
                if (v93 == v97 || v93 == *(_QWORD*)(v97 + 552)) {
                  v101 = 4;
                }
                else {
                  v98 = *(_QWORD*)(v92 +
                                   8LL * *(int*)((char*)GameData_2130920[0] +
                                                 (unsigned __int64)((
                                                     _UNKNOWN*)0x50LL)));
                  if (v93 == v98 || v93 == *(_QWORD*)(v98 + 552)) {
                    v101 = 5;
                  }
                  else {
                    v99 = *(_QWORD*)(v92 +
                                     8LL * *(int*)((char*)GameData_2130920[0] +
                                                   (unsigned __int64)((
                                                       _UNKNOWN*)0x8CLL)));
                    if (v93 == v99 || v93 == *(_QWORD*)(v99 + 552) ||
                        (v100 = *(
                             _QWORD*)(v92 +
                                      8LL * *(int*)((char*)GameData_2130920[0] +
                                                    (unsigned __int64)((
                                                        _UNKNOWN*)0xA4LL))),
                         v93 == v100)) {
                      v101 = 6;
                    }
                    else if (v93 == *(_QWORD*)(v100 + 552)) {
                      v101 = 6;
                    }
                    else {
                      v101 = 0;
                    }
                  }
                }
              }
            }
          }
          LODWORD(v192_.v196) = v101;
          v192_.v192 =
              game_AIThink_SpecialInterferenceCalculatorForEntrust_vtable;
          v113 = *GameData_2130940 + 8;
          *(_BYTE*)(*GameData_2130940 + 8200) = 1;
          v192_.v199 = v113;
          v192_.v198 = v161;
          v201_.v201 = 0;
          v201_.v202 = 0;
          v201_.v203 = nullptr;
          v201_.v204 = 0;
          v192_.v200 = *(_QWORD*)GameData_21306d0 + 2688LL;
          v201_.v205 = 0x1.0000000000000p+0f;
          v201_.v206 = v160;
          GameRoutine_6c2b50((__int64)v207),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          GameRoutine_6c2b50((__int64)v208),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          GameRoutine_790080((__int64)v209),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          v201_.v206 = v159;
          v213_.v215 = 0;
          v213_.v217 = -1;
          v213_.v218 = -1;
          v213_.v223 = -1;
          v213_.v225 = -1;
          v213_.v216 = 0;
          v213_.v224 = 0;
          v213_.v219 = 0;
          v213_.v220 = 0;
          v213_.v221 = 0;
          v213_.v222 = 0;
          primeEm = vcvtps_u64_f32(0x1.0000000000000p+4f / v201_.v205);
          if (primeEm == 1) {
            primeEm = 2;
          }
          else if ((primeEm & (primeEm - 1)) != 0) {
            primeEm = std___1___next_prime(primeEm),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          }
          v115 = v201_.v202;
          if (primeEm > v201_.v202) {
            goto LABEL_186;
          }
          if (primeEm < v201_.v202) {
            v116 = vcvtps_u64_f32((float)v201_.v204 / v201_.v205);
            if (v201_.v202 < 3 || (v201_.v202 & (v201_.v202 - 1)) != 0) {
              v116 = std___1___next_prime(v116),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            }
            else {
              v117 = 1LL << -(char)__clz(v116 - 1);
              if (v116 >= 2) {
                v116 = v117;
              }
            }
            if (primeEm <= v116) {
              primeEm = v116;
            }
            if (primeEm < v115) {
            LABEL_186:
              GameRoutine_129cde0(&v201_.v201, primeEm),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v35 = COERCE_AS(
                      __typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            }
          }
          if ((*(_BYTE*)(v192_.v199 + 4) & 1) == 0) {
            v118 = *(_QWORD*)(*v192_.v193 + 440);
            if (v118 != 0) {
              v119 = (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
              v120 = &v119[3 * *(unsigned __int8*)(v118 + 16)];
            }
            else {
              v121 = *(_QWORD*)(GameData_21ca310 + 56);
              v119 = (__int64*)(v121 + 556000);
              v120 = (__int64*)(v121 + 556216);
            }
            v122 = *((unsigned __int8*)v120 + 16);
            if (v122 == 3 || v122 == 0) {
              v123 = *v119;
              if (*v119 != 0) {
                do {
                  AIThink_129d780(&v192_.v192, v123),
                      v34 = COERCE_AS(
                          __typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v35 = COERCE_AS(
                          __typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v36 = COERCE_AS(
                          __typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
                  v123 = *(_QWORD*)(v123 + 432);
                } while (v123 != 0);
                v118 = *(_QWORD*)(*v192_.v193 + 440);
              }
            }
            v124 = *(_QWORD*)(GameData_21ca310 + 56);
            if (v118 != 0) {
              v125 = v124 + 24LL * *(unsigned __int8*)(v118 + 16) + 556000;
            }
            else {
              v125 = v124 + 556216;
            }
            if (*(_BYTE*)(v125 + 16) == 1) {
              v126 = *(_QWORD*)(v124 + 556024);
              if (v126 != 0) {
                do {
                  AIThink_129d780(&v192_.v192, v126),
                      v34 = COERCE_AS(
                          __typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v35 = COERCE_AS(
                          __typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v36 = COERCE_AS(
                          __typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
                  v126 = *(_QWORD*)(v126 + 432);
                } while (v126 != 0);
                v118 = *(_QWORD*)(*v192_.v193 + 440);
              }
            }
            v127 = *(_QWORD*)(GameData_21ca310 + 56);
            if (v118 != 0) {
              v128 = v127 + 24LL * *(unsigned __int8*)(v118 + 16) + 556000;
            }
            else {
              v128 = v127 + 556216;
            }
            if (*(_BYTE*)(v128 + 16) == 2) {
              v129 = *(_QWORD*)(v127 + 556048);
              if (v129 != 0) {
                do {
                  AIThink_129d780(&v192_.v192, v129),
                      v34 = COERCE_AS(
                          __typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v35 = COERCE_AS(
                          __typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v36 = COERCE_AS(
                          __typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
                  v129 = *(_QWORD*)(v129 + 432);
                } while (v129 != 0);
                v118 = *(_QWORD*)(*v192_.v193 + 440);
              }
            }
            if (v118 != 0) {
              v130 = *(_BYTE*)(v118 + 16);
              v131 = *(_QWORD*)(GameData_21ca310 + 56);
              v132 = v131 + 24LL * v130 + 556000;
            }
            else {
              v131 = *(_QWORD*)(GameData_21ca310 + 56);
              v132 = v131 + 556216;
            }
            v133 = *(unsigned __int8*)(v132 + 16);
            v134 = v133 == 3 || v133 == 0;
            if (v134) {
              for (i = *(_QWORD*)(v131 + 556072); i != 0;
                   i = *(_QWORD*)(i + 432)) {
                AIThink_129d780(&v192_.v192, i),
                    v34 = COERCE_AS(
                        __typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v35 = COERCE_AS(
                        __typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v36 = COERCE_AS(
                        __typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
              }
            }
            *(_QWORD*)v192_.v199 |= 0x100000000uLL;
          }
          v136 = GameRoutine_129aae0(&v192_.v192),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          v192_.v192 =
              game_AIThink_SpecialInterferenceCalculatorForEntrust_vtable;
          v201_.v206 = GameData_21306b8[0] + 16;
          v209[0] = v158;
          v213_.v213[1125] = v157;
          if (v213_.v214 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v213_.v214 + 8LL))(v213_.v214),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            v213_.v214 = 0;
          }
          v209[1] = v156;
          BattleSide_Destructor(v213_.v213),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          BattleSide_Destructor(v212),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          BattleSide_Destructor(v211),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          BattleSide_Destructor(v210),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          game_Unit_Destroy_Unit((__int64)v208),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          game_Unit_Destroy_Unit((__int64)v207),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          v137 = v201_.v203;
          v138 = fw_memory_g_heap_manager_ptr;
          if (v201_.v203 != nullptr) {
            do {
              v139 = (_QWORD*)*v137;
              if (*(_QWORD*)(*(_QWORD*)v138 + 200LL) != 0) {
                v140 = 128;
              }
              else {
                v140 = 56;
              }
              v37 = nn_mem_StandardAllocator_Free(*(_QWORD*)v138 + v140),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
              v137 = v139;
            } while (v139 != nullptr);
          }
          v141 = v201_.v201;
          v201_.v201 = 0;
          if (v141 != 0) {
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v142 = 128;
            }
            else {
              v142 = 56;
            }
            v37 = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v142),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          }
          *(_BYTE*)(v192_.v199 + 0x2000) = 0;
          v18 = GameData_212c880[0];
          if (!v136) {
          LABEL_95:
            v70 = GameData_21306a0[0];
            goto LABEL_96;
          }
        }
        else {
          v102 = *v18;
          v192_.v193 = &v179_.v179;
          v192_.v194 = v167_.v167;
          v192_.v195 = &v169_.v169;
          v103 = *(_QWORD*)(v102 + 64);
          v104 = *(_QWORD*)(v103 + 8LL * (*v179_.v181 & 0xFFF));
          v105 = *(_QWORD*)(v103 +
                            8LL * *(int*)((char*)GameData_2130920[0] +
                                          (unsigned __int64)((char*)0x40LL)));
          if (v104 == v105 || v104 == *(_QWORD*)(v105 + 552)) {
            v112 = 1;
          }
          else {
            v106 = *(_QWORD*)(v103 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                   (unsigned __int64)((
                                                       _UNKNOWN*)0x44LL)));
            if (v104 == v106 || v104 == *(_QWORD*)(v106 + 552)) {
              v112 = 2;
            }
            else {
              v107 =
                  *(_QWORD*)(v103 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                  (unsigned __int64)((
                                                      _UNKNOWN*)0x48LL)));
              if (v104 == v107 || v104 == *(_QWORD*)(v107 + 552)) {
                v112 = 3;
              }
              else {
                v108 =
                    *(_QWORD*)(v103 + 8LL * *(int*)((char*)GameData_2130920[0] +
                                                    (unsigned __int64)((
                                                        _UNKNOWN*)0x4CLL)));
                if (v104 == v108 || v104 == *(_QWORD*)(v108 + 552)) {
                  v112 = 4;
                }
                else {
                  v109 = *(_QWORD*)(v103 +
                                    8LL * *(int*)((char*)GameData_2130920[0] +
                                                  (unsigned __int64)((
                                                      _UNKNOWN*)0x50LL)));
                  if (v104 == v109 || v104 == *(_QWORD*)(v109 + 552)) {
                    v112 = 5;
                  }
                  else {
                    v110 = *(_QWORD*)(v103 +
                                      8LL * *(int*)((char*)GameData_2130920[0] +
                                                    (unsigned __int64)((
                                                        _UNKNOWN*)0x8CLL)));
                    if (v104 == v110 || v104 == *(_QWORD*)(v110 + 552) ||
                        (v111 = *(
                             _QWORD*)(v103 +
                                      8LL * *(int*)((char*)GameData_2130920[0] +
                                                    (unsigned __int64)((
                                                        _UNKNOWN*)0xA4LL))),
                         v104 == v111)) {
                      v112 = 6;
                    }
                    else if (v104 == *(_QWORD*)(v111 + 552)) {
                      v112 = 6;
                    }
                    else {
                      v112 = 0;
                    }
                  }
                }
              }
            }
          }
          LODWORD(v192_.v196) = v112;
          v192_.v192 =
              game_AIThink_SpecialInterferenceCalculatorForEnemy_vtable;
          if (!GameRoutine_129aae0(&v192_.v192)) {
            goto LABEL_95;
          }
        }
        LOWORD(v192_.v192) = 0;
        BYTE2(v192_.v192) = 0;
        v143 = *(_QWORD*)(a1 + 32);
        if (v143 != 0) {
          LODWORD(v144) = v71 + v213_.v227;
          if ((unsigned int)(v71 + v213_.v227) >= 0x400) {
            v144 = 0;
          }
          else {
            v144 = (unsigned int)v144;
          }
          v145 = *(_BYTE*)(v143 + v144 + 8);
        }
        else {
          v145 = 0;
        }
        game_11f5940(*(_QWORD*)a1, v71, v55, v145, (bool*)&v192_.v192),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        v146 = v169_.v169;
        v147 = HIDWORD(v169_.v169);
        v148 = v169_.v170;
        v70 = GameData_21306a0[0];
        if (*a2 < 0) {
          goto LABEL_265;
        }
        if (v213_.v226 &&
            (((unsigned int)v163 | HIDWORD(v163) | BYTE1(v192_.v192)) & 1) ==
                0 &&
            (BYTE2(v192_.v192) & 1) == 0) {
          if ((v162 & 1) == 0 && ((unsigned __int8)v192_.v192 & 1) != 0) {
            v163 = 0;
            v162 = 0;
            goto LABEL_96;
          }
          if (((v162 ^ 1 | (unsigned __int8)v192_.v192) & 1) == 0) {
            goto LABEL_265;
          }
        }
        v149 = a2[2];
        if (v149 < (unsigned int)v169_.v169 || (v150 = a2[3]) < 0 ||
            v149 <= (unsigned int)v169_.v169 &&
                (v150 | (a2[4] << 16)) >
                    (HIDWORD(v169_.v169) | (v169_.v170 << 16))) {
        LABEL_265:
          *a2 = v71;
          a2[1] = v55;
          if (v155 != &v169_.v169) {
            v151 = v169_.v172;
            a2[2] = v146;
            a2[3] = v147;
            a2[4] = v148;
            *((_QWORD*)a2 + 3) = v151;
            GameRoutine_1226120((__int64)v173_.v173, (__int64)(a2 + 8)),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            a2[5] = v169_.v171;
          }
          LODWORD(v163) = BYTE1(v192_.v192);
          HIDWORD(v163) = BYTE2(v192_.v192);
          v162 = (unsigned __int8)v192_.v192;
        }
      LABEL_96:
        v134 = v71++ == v56;
      } while (!v134);
      v134 = v55++ == v153;
    } while (!v134);
  }
  v58 = *a2;
  v59 = v167_.v168;
  *(_BYTE*)(v152 + 24600) = 0;
  if (v59 == v167_.v167) {
    v60 = 32;
    goto LABEL_79;
  }
  if (v59 != nullptr) {
    v60 = 40;
  LABEL_79:
    (*(void (**)(long double))(*v59 + v60))(*(long double*)&v37),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  }
  v61 = v173_.v176;
  if (v173_.v176 != nullptr) {
    v62 = fw_memory_g_heap_manager_ptr;
    do {
      v63 = (_QWORD*)*v61;
      if (*(_QWORD*)(*(_QWORD*)v62 + 200LL) != 0) {
        v64 = 128;
      }
      else {
        v64 = 56;
      }
      v37 = nn_mem_StandardAllocator_Free(*(_QWORD*)v62 + v64),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
      v61 = v63;
    } while (v63 != nullptr);
  }
  v65 = v173_.v174;
  v66 = ~v58;
  v173_.v174 = 0;
  if (v65 != 0) {
    v67 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v67 = 56;
    }
    v37 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v67),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  }
  v68 = v179_.v187;
  v69 = v66 >> 31;
  v179_.v187 = nullptr;
  if (v68 != nullptr) {
    (*(void (**)(_QWORD*, long double))(*v68 + 8LL))(v68, *(long double*)&v37),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  }
  AISupportSkillScope_11fef70(v188_.v188),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  return v69;
}

__int64 game_12968e0(__int64 a1, signed int* a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6)
{

#pragma clang fp contract(off)
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _DWORD* v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __n128 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  _BOOL4 v43;
  unsigned int v44;
  unsigned int v45;
  int v47;
  _QWORD* v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  __int64 v54;
  __int64 v55;
  unsigned int v56;
  __int64 v57;
  bool v58;
  signed int v59;
  bool v60;
  bool v61;
  unsigned int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 primeEm;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  _QWORD* v80;
  __int64 v81;
  _QWORD* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned __int8 v88;
  int v89;
  int v90;
  int v91;
  unsigned int v92;
  int v93;
  __int64 v94;
  __int64 v95;
  unsigned int v96;
  signed int v97;
  unsigned __int64* v98;
  _BOOL4 v99;
  __int64* v100;
  __int64* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64* v105;
  int v106;
  __int64 v107;
  __int64 v108;
  char* v109;
  _QWORD v110[2];
  struct {
    unsigned __int64 v111;
    int v112;
    int v113;
    __int64 v114;
  } v111_;
  struct {
    _DWORD v115[3074];
    __int64 v116;
    unsigned __int64 v117;
    _QWORD* v118;
    __int64 v119;
    char gap12504_[8];
    int v120;
  } v115_;
  struct {
    __int64 v121;
    unsigned __int64 v122;
    _DWORD* v123;
    int v124;
    int v125;
    char v126;
    char gap12553_[7];
    __int64 v127;
    __int64 v128;
    __int64 v129;
  } v121_;
  struct {
    __int64 v130[14];
    char v131;
  } v130_;
  struct {
    _QWORD v132[4];
    _QWORD* v133;
  } v132_;
  struct {
    __int64 (**v134)();
    __int64 (**v135)();
    __int64 v136;
    int v137;
    char gap12780_[4];
    __int64 v138;
    __int64 v139;
    __int64* v140;
    __int64 v141;
    __int64 v142;
    __int64 v143;
  } v134_;
  struct {
    __int64 v144;
    unsigned __int64 v145;
    _QWORD* v146;
    unsigned __int64 v147;
    float v148;
    char gap12868_[12];
    __int64 v149;
  } v144_;
  _BYTE v150[2224];
  _BYTE v151[2232];
  _QWORD v152[2];
  __int64 v153[95];
  __int64 v154[95];
  __int64 v155[95];
  struct {
    _QWORD v156[1126];
    __int64 v157;
    char gap28664_[568];
    int v158;
    char gap29236_[188];
    __int64 v159;
    __int64 v160;
    int v161;
    char gap29444_[4];
    __int64 v162;
    __int64 v163;
    __int64 v164;
    __int64 v165;
    __int64 v166;
    __int64 v167;
    int v168;
    char gap29500_[28];
    _BOOL4 v169;
    int v170;
  } v156_;

  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  a2[2] = 0;
  *((_QWORD*)a2 + 3) = 0;
  a2[3081] = 0;
  *(_QWORD*)a2 = -1;
  *(_QWORD*)(a2 + 3) = -1;
  v98 = (unsigned __int64*)(a2 + 2);
  if (*((_QWORD*)a2 + 1544) != 0) {
    v8 = *((_QWORD**)a2 + 1543);
    if (v8 != nullptr) {
      v9 = fw_memory_g_heap_manager_ptr;
      do {
        v10 = (_QWORD*)*v8;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        v8 = v10;
      } while (v10 != nullptr);
    }
    v12 = *((_QWORD*)a2 + 1542);
    *((_QWORD*)a2 + 1543) = 0;
    if (v12 != 0) {
      v13 = v12 & 7;
      if (v12 >= 8) {
        v15 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        v14 = 0;
        do {
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14 + 8) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14 + 16) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14 + 24) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14 + 32) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14 + 40) = 0;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + 8 * v14 + 48) = 0;
          v16 = *((_QWORD*)a2 + 1541) + 8 * v14;
          v14 += 8;
          *(_QWORD*)(v16 + 56) = 0;
        } while (v15 != v14);
      }
      else {
        v14 = 0;
      }
      if (v13 != 0) {
        v17 = 8 * v14;
        do {
          --v13;
          *(_QWORD*)(*((_QWORD*)a2 + 1541) + v17) = 0;
          v17 += 8;
        } while (v13 != 0);
      }
    }
    *((_QWORD*)a2 + 1544) = 0;
  }
  a2[3092] = 0;
  a2[5] = 0;
  memset(*GameData_2130940 + 8, 0, 0x2000, a4, a5, a6),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v18 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (**(_DWORD**)(a1 + 8) & 0xFFF));
  if (v18 == 0 || (unsigned int)*(unsigned __int8*)(v18 + 105) - 2 > 2) {
    return 0;
  }
  GameRoutine_11fe0c0((__int64)v130_.v130, *(_QWORD*)a1),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v121_.v127 = 0;
  v121_.v128 = 0;
  v121_.v129 = 0;
  v121_.v122 = -1;
  GameRoutine_844ee0((__int64)v115_.v115),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v111_.v114 = 0;
  v115_.v115[3073] = 0;
  v111_.v111 = 0xFFFFFFFF00000000LL;
  v111_.v112 = -1;
  if (v115_.v119 != 0) {
    v19 = v115_.v118;
    if (v115_.v118 != nullptr) {
      v20 = fw_memory_g_heap_manager_ptr;
      do {
        v21 = (_QWORD*)*v19;
        if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v22),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        v19 = v21;
      } while (v21 != nullptr);
    }
    v115_.v118 = nullptr;
    if (v115_.v117 != 0) {
      v23 = v115_.v117 & 7;
      if (v115_.v117 >= 8) {
        v26 = v115_.v117 & 0xFFFFFFFFFFFFFFF8LL;
        v24 = 0;
        do {
          *(_QWORD*)(v115_.v116 + 8 * v24) = 0;
          *(_QWORD*)(v115_.v116 + 8 * v24 + 8) = 0;
          *(_QWORD*)(v115_.v116 + 8 * v24 + 16) = 0;
          *(_QWORD*)(v115_.v116 + 8 * v24 + 24) = 0;
          *(_QWORD*)(v115_.v116 + 8 * v24 + 32) = 0;
          *(_QWORD*)(v115_.v116 + 8 * v24 + 40) = 0;
          *(_QWORD*)(v115_.v116 + 8 * v24 + 48) = 0;
          v27 = v115_.v116 + 8 * v24;
          v24 += 8;
          *(_QWORD*)(v27 + 56) = 0;
        } while (v26 != v24);
      }
      else {
        v24 = 0;
      }
      if (v23 != 0) {
        v28 = 8 * v24;
        do {
          --v23;
          *(_QWORD*)(v115_.v116 + v28) = 0;
          v28 += 8;
        } while (v23 != 0);
      }
    }
    v115_.v119 = 0;
  }
  v29 = *(_QWORD*)a1;
  v30 = *(_DWORD**)(a1 + 8);
  v115_.v120 = 0;
  v111_.v113 = 0;
  v121_.v121 = v29;
  LOBYTE(v29) = *(_BYTE*)(a1 + 24);
  v121_.v123 = v30;
  v121_.v126 = v29;
  v31 = *(_DWORD*)(a1 + 16);
  v121_.v125 = *(_DWORD*)(a1 + 20);
  v32 = *(_QWORD*)(a1 + 40);
  v121_.v124 = v31;
  v121_.v128 = v32;
  v33 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16, 16, 0),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v38 = v33;
  if ((v31 & 0x40) == 0) {
    v39 = v33;
    GameRoutine_12a2730(v33, v121_.v121, v121_.v123),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    v40 = v121_.v129;
    v121_.v129 = v39;
    if (v40 == 0) {
      goto LABEL_41;
    }
    goto LABEL_40;
  }
  v40 = v121_.v129;
  v121_.v129 = v38;
  v41 = GameData_2130c20[0] + 2;
  *(_BYTE*)(v38 + 8) = (v121_.v124 & 0x4000) != 0;
  *(_QWORD*)v38 = v41;
  if (v40 != 0) {
  LABEL_40:
    (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  }
LABEL_41:
  v42 = *GameData_2130940;
  if ((*(_BYTE*)(a1 + 17) & 0x20) != 0) {
    v37 = memset(v42 + 16408, 0, 0x2000, v34, v35, v36),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  }
  *(_BYTE*)(v42 + 24600) = 1;
  v108 = v42 + 16408;
  v110[0] = GameData_2130bd8 + 2;
  v110[1] = v42 + 16408;
  v95 = v42;
  v43 = *(_BYTE*)(*GameData_212ce90[0] +
                  *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) == 1 &&
        (*(_QWORD*)GameData_212d290 == 0 ||
         (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) == 0);
  v44 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v45 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v96 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  v97 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  if (v44 <= v96 && *(unsigned __int8*)(*GameData_212ce98[0] + 28) <= v45) {
    v107 = 0;
    v106 = 0;
    v57 = GameData_21306a0[0];
    v109 = (char*)GameData_2130948 + 16;
    v105 = GameData_2130bc0[0] + 2;
    v104 = GameData_21306b8[0] + 16;
    v103 = GameData_21308b8 + 16;
    v102 = GameData_212d238[0] + 16;
    v101 = GameData_212da50[0] + 2;
    v99 = v43;
    v100 = GameData_212d258[0] + 2;
    do {
      v59 = v97;
      v156_.v170 = 32 * v44;
      do {
        if ((GameRoutine_747a00(*(_QWORD*)(*(_QWORD*)v57 + 8LL),
                                (unsigned int)v59, v44, *(_QWORD*)a1, 0) &
             1) == 0) {
          goto LABEL_68;
        }
        v60 = *(_DWORD*)(*(_QWORD*)GameData_21306c0[0] + 40LL) <= v59 &&
              v59 <= *(_DWORD*)(*(_QWORD*)GameData_21306c0[0] + 44LL);
        v61 =
            v60 && *(_DWORD*)(*(_QWORD*)GameData_21306c0[0] + 48LL) <= (int)v44;
        if (!v61 || (signed int)v44 >
                        *(_DWORD*)(*(_QWORD*)GameData_21306c0[0] + 52LL)) {
          goto LABEL_68;
        }
        if ((*(_BYTE*)(a1 + 17) & 0x20) != 0) {
          v62 = v59 + v156_.v170;
          if ((unsigned int)(v59 + v156_.v170) >= 0x400) {
            v62 = 0;
          }
          if (*(_QWORD*)(v108 + 8LL * v62) != 0) {
            goto LABEL_68;
          }
          AIThink_129a570((__int64)v110, v59, v44),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        }
        v134_.v137 = 0;
        v134_.v136 = 0;
        v134_.v135 = nullptr;
        v134_.v134 = nullptr;
        v134_.v138 = 0;
        v134_.v139 = 0;
        v134_.v140 = nullptr;
        v134_.v141 = 0;
        v134_.v142 = 0;
        v134_.v143 = 0;
        v63 = *GameData_212ce98[0];
        v144_.v144 = 0;
        v144_.v145 = 0;
        v132_.v132[1] = &v134_.v134;
        v132_.v133 = v132_.v132;
        v64 = *(_QWORD*)(v63 + 96);
        v132_.v132[0] = v109;
        Image_72c060(v64, v130_.v130[0], v59, v44, (__int64)v132_.v132),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        if (v132_.v133 == v132_.v132) {
          v65 = 32;
          goto LABEL_88;
        }
        if (v132_.v133 != nullptr) {
          v65 = 40;
        LABEL_88:
          (*(void (**)(__int64))(*v132_.v133 + v65))((__int64)v132_.v133),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        }
        v66 = v130_.v130[0];
        v67 = *(_QWORD*)(v130_.v130[0] + 1680);
        if ((int)((unsigned __int64)(*(_QWORD*)(v130_.v130[0] + 1688) - v67) >>
                  2) >= 1) {
          v68 = *(_QWORD*)(v130_.v130[0] + 1648);
          *(_QWORD*)(v130_.v130[0] + 1688) = v67;
          v69 = *(_DWORD*)(v66 + 416);
          *(_DWORD*)(v66 + 1672) = 0;
          *(_QWORD*)(v66 + 1728) = 0;
          *(_QWORD*)(v66 + 1736) = 0;
          *(_QWORD*)(v66 + 1656) = v68;
          if ((v69 & 0x10000000) == 0) {
            *(_DWORD*)(v66 + 416) = v69 | 0x10000000;
            game_6c51e0(v66),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            GameRoutine_6c6da0(v66),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            game_6c6ec0(v66),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            *(_DWORD*)(v66 + 416) &= ~0x10000000u;
            v66 = v130_.v130[0];
          }
        }
        UnitSkillList_84cf20(v66 + 1648, (__int64)&v134_.v134),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        v70 = v130_.v130[0];
        v71 = *(_DWORD*)(v130_.v130[0] + 416);
        *(_BYTE*)(v130_.v130[0] + 584) = v59;
        *(_BYTE*)(v70 + 585) = v44;
        if ((v71 & 0x10000000) == 0) {
          *(_DWORD*)(v70 + 416) = v71 | 0x10000000;
          game_6c51e0(v70),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          GameRoutine_6c6da0(v70),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          game_6c6ec0(v70),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          *(_DWORD*)(v70 + 416) &= ~0x10000000u;
        }
        v130_.v131 = 1;
        if (v134_.v141 != 0) {
          v134_.v142 = v134_.v141;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v72 = 128;
          }
          else {
            v72 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v72),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        }
        if (v134_.v138 != 0) {
          v134_.v139 = v134_.v138;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v73 = 128;
          }
          else {
            v73 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v73),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        }
        if (v134_.v134 != nullptr) {
          v134_.v135 = v134_.v134;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v74 = 128;
          }
          else {
            v74 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v74),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        }
        v121_.v122 = __PAIR64__(v44, v59);
        if (v43) {
          AIThink_129b920((__int64)&v134_.v134, (__int64)&v121_.v121,
                          (__int64)&v111_.v111),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          v134_.v134 = game_AIThink_SpecialAssistCalculatorForEntrust_vtable;
          v134_.v139 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * *(int*)GameData_2130920[0]);
          v75 = *GameData_2130940;
          v134_.v140 = v105;
          *(_BYTE*)(v75 + 8200) = 1;
          v134_.v141 = v75 + 8;
          v144_.v144 = 0;
          v144_.v145 = 0;
          v144_.v146 = nullptr;
          v144_.v147 = 0;
          v134_.v142 = *(_QWORD*)GameData_21306d0 + 2688LL;
          v144_.v148 = 0x1.0000000000000p+0f;
          v144_.v149 = v104;
          GameRoutine_6c2b50((__int64)v150),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          GameRoutine_6c2b50((__int64)v151),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          GameRoutine_790080((__int64)v152),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          v144_.v149 = v103;
          v156_.v158 = 0;
          v156_.v160 = -1;
          v156_.v161 = -1;
          v156_.v166 = -1;
          v156_.v168 = -1;
          v156_.v159 = 0;
          v156_.v167 = 0;
          v156_.v162 = 0;
          v156_.v163 = 0;
          v156_.v164 = 0;
          v156_.v165 = 0;
          primeEm = vcvtps_u64_f32(0x1.0000000000000p+4f / v144_.v148);
          if (primeEm == 1) {
            primeEm = 2;
          }
          else if ((primeEm & (primeEm - 1)) != 0) {
            primeEm = std___1___next_prime(primeEm),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          }
          v77 = v144_.v145;
          if (primeEm > v144_.v145) {
            goto LABEL_117;
          }
          if (primeEm < v144_.v145) {
            v78 = vcvtps_u64_f32((float)v144_.v147 / v144_.v148);
            if (v144_.v145 < 3 || (v144_.v145 & (v144_.v145 - 1)) != 0) {
              v78 = std___1___next_prime(v78),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            }
            else {
              v79 = 1LL << -(char)__clz(v78 - 1);
              if (v78 >= 2) {
                v78 = v79;
              }
            }
            if (primeEm <= v78) {
              primeEm = v78;
            }
            if (primeEm < v77) {
            LABEL_117:
              GameRoutine_129cde0(&v144_.v144, primeEm),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v35 = COERCE_AS(
                      __typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            }
          }
          v156_.v169 = GameRoutine_129a6e0((__int64)&v134_.v134),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          v134_.v134 = game_AIThink_SpecialAssistCalculatorForEntrust_vtable;
          v144_.v149 = GameData_21306b8[0] + 16;
          v152[0] = v102;
          v156_.v156[1125] = v101;
          if (v156_.v157 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v156_.v157 + 8LL))(v156_.v157),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            v156_.v157 = 0;
          }
          v152[1] = v100;
          BattleSide_Destructor(v156_.v156),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          BattleSide_Destructor(v155),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          BattleSide_Destructor(v154),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          BattleSide_Destructor(v153),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          game_Unit_Destroy_Unit((__int64)v151),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          game_Unit_Destroy_Unit((__int64)v150),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          v80 = v144_.v146;
          v81 = fw_memory_g_heap_manager_ptr;
          if (v144_.v146 != nullptr) {
            do {
              v82 = (_QWORD*)*v80;
              if (*(_QWORD*)(*(_QWORD*)v81 + 200LL) != 0) {
                v83 = 128;
              }
              else {
                v83 = 56;
              }
              v37 = nn_mem_StandardAllocator_Free(*(_QWORD*)v81 + v83),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
              v80 = v82;
            } while (v82 != nullptr);
          }
          v84 = v144_.v144;
          v144_.v144 = 0;
          if (v84 != 0) {
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v85 = 128;
            }
            else {
              v85 = 56;
            }
            v37 = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v85),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          }
          v43 = v99;
          *(_BYTE*)(v134_.v141 + 0x2000) = 0;
          if (!v156_.v169) {
          LABEL_67:
            v57 = GameData_21306a0[0];
            goto LABEL_68;
          }
        }
        else {
          AIThink_129b920((__int64)&v134_.v134, (__int64)&v121_.v121,
                          (__int64)&v111_.v111),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          v134_.v134 = game_AIThink_SpecialAssistCalculatorForEnemy_vtable;
          if (!GameRoutine_129a6e0((__int64)&v134_.v134)) {
            goto LABEL_67;
          }
        }
        v86 = *(_QWORD*)(a1 + 32);
        LOWORD(v134_.v134) = 0;
        BYTE2(v134_.v134) = 0;
        if (v86 != 0) {
          LODWORD(v87) = v59 + v156_.v170;
          if ((unsigned int)(v59 + v156_.v170) >= 0x400) {
            v87 = 0;
          }
          else {
            v87 = (unsigned int)v87;
          }
          v88 = *(_BYTE*)(v86 + v87 + 8);
        }
        else {
          v88 = 0;
        }
        game_11f5940(*(_QWORD*)a1, v59, v44, v88, (bool*)&v134_.v134),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        v89 = v111_.v111;
        v90 = HIDWORD(v111_.v111);
        v91 = v111_.v112;
        v57 = GameData_21306a0[0];
        if (*a2 < 0) {
          goto LABEL_159;
        }
        if (v43 &&
            (((unsigned int)v107 | HIDWORD(v107) | BYTE1(v134_.v134)) & 1) ==
                0 &&
            (BYTE2(v134_.v134) & 1) == 0) {
          if ((v106 & 1) == 0 && ((unsigned __int8)v134_.v134 & 1) != 0) {
            v107 = 0;
            v106 = 0;
            goto LABEL_68;
          }
          if (((v106 ^ 1 | (unsigned __int8)v134_.v134) & 1) == 0) {
            goto LABEL_159;
          }
        }
        v92 = a2[2];
        if (v92 < (unsigned int)v111_.v111 || (v93 = a2[3]) < 0 ||
            v92 <= (unsigned int)v111_.v111 &&
                (v93 | (a2[4] << 16)) >
                    (HIDWORD(v111_.v111) | (v111_.v112 << 16))) {
        LABEL_159:
          *a2 = v59;
          a2[1] = v44;
          if (v98 != &v111_.v111) {
            v94 = v111_.v114;
            a2[2] = v89;
            a2[3] = v90;
            a2[4] = v91;
            *((_QWORD*)a2 + 3) = v94;
            GameRoutine_1226120((__int64)v115_.v115, (__int64)(a2 + 8)),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
            a2[5] = v111_.v113;
          }
          LODWORD(v107) = BYTE1(v134_.v134);
          HIDWORD(v107) = BYTE2(v134_.v134);
          v106 = (unsigned __int8)v134_.v134;
        }
      LABEL_68:
        v58 = v59++ == v45;
      } while (!v58);
      v58 = v44++ == v96;
    } while (!v58);
  }
  v47 = *a2;
  v48 = v115_.v118;
  *(_BYTE*)(v95 + 24600) = 0;
  v49 = fw_memory_g_heap_manager_ptr;
  if (v48 != nullptr) {
    do {
      v50 = (_QWORD*)*v48;
      if (*(_QWORD*)(*(_QWORD*)v49 + 200LL) != 0) {
        v51 = 128;
      }
      else {
        v51 = 56;
      }
      v37 = nn_mem_StandardAllocator_Free(*(_QWORD*)v49 + v51),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
      v48 = v50;
    } while (v50 != nullptr);
  }
  v52 = v115_.v116;
  v53 = ~v47;
  v115_.v116 = 0;
  if (v52 != 0) {
    v54 = 128;
    if (*(_QWORD*)(*(_QWORD*)v49 + 200LL) == 0) {
      v54 = 56;
    }
    v37 = nn_mem_StandardAllocator_Free(*(_QWORD*)v49 + v54),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  }
  v55 = v121_.v129;
  v56 = v53 >> 31;
  v121_.v129 = 0;
  if (v55 != 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v55 + 8LL))(
        v55, *(long double*)&v37),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  }
  AISupportSkillScope_11fef70(v130_.v130),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  return v56;
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
  int v3;
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
  __int64 v17;
  int v18;
  __int64 v19;

  v1 = GameData_22408e8;
  if (GameData_22408e8 != 0) {
    v2 = result;
    v3 = game_HashString32("MapHistoryNewTypeMgr");
    v4 = *(_QWORD*)v2;
    v18 = v3;
    if (((*(__int64 (**)(__int64, int*))(v4 + 16))(v2, &v18) & 1) != 0) {
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
            Em = nn_mem_StandardAllocator_Allocate_1a0ad50(v14, 48);
            if (Em != 0) {
              break;
            }
            v17 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v11);
            v19 = 48;
            if (v17 == 0) {
              GameRoutine_60a310(0, v16);
            }
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v17 + 48LL))(v17, &v19);
          }
          *(_DWORD*)(Em + 16) = 0x4000000;
          *(_WORD*)(Em + 20) = 0;
          v13 = Em;
          *(_QWORD*)Em = v12;
          *(_QWORD*)(Em + 8) = 0;
          *(_QWORD*)(Em + 24) = 0;
          *(_WORD*)(Em + 32) = 0;
          *(_QWORD*)(Em + 40) = 0;
          game_map_history_DataAdditionalNewType_Deserialize();
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
  __int64* v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64* v62;
  signed __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64* v69;
  signed __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64* v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64* v76;
  signed __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64* v83;
  signed __int64 v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64* v90;
  signed __int64 v91;
  __int64 v92;
  char v93;
  __int64 v94;
  int v95;
  __int64 (*v96)();
  struct {
    void* v97;
    float v98;
    float v99;
    float v100;
    float v101;
    float v102;
    float v103;
    float v104;
    float v105;
    float v106;
  } v97_;

  v1 = *a1;
  v93 = *(_BYTE*)(*a1 + 540);
  v3 = *(_QWORD*)(v1 + 541);
  v95 = *(_DWORD*)(v1 + 549);
  LODWORD(v1) = *((_DWORD*)a1 + 2);
  v94 = v3;
  if ((int)v1 >= 1) {
    v4 = 0;
    do {
      v5 = a1[2] + 16 * v4;
      v6 = *(_QWORD*)v5;
      v97_.v97 = &GameData_1aa9c9c;
      v7 = 0x0.0p+0f;
      v96 = (__int64 (*)())game_HashString((__int64)&GameData_1aa9c9c);
      if (game_GameModeData_instance_ != 0) {
        v8 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v96);
        if (v8 != 0) {
          v7 = (float)*(int*)(v8 + 32) * 0x1.47ae140000000p-7f;
        }
      }
      v97_.v97 = &GameData_1acc5c7;
      v9 = 0x0.0p+0f;
      v96 = (__int64 (*)())game_HashString((__int64)&GameData_1acc5c7);
      if (game_GameModeData_instance_ != 0) {
        v10 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v96);
        if (v10 != 0) {
          v9 = (float)*(int*)(v10 + 32) * 0x1.47ae140000000p-7f;
        }
      }
      v11 = 0;
      for (i = (float*)&v97_.v97;; i += 4) {
        v15 = *(unsigned __int8*)(v6 + v11 + 48) <= 1u
                  ? 1
                  : *(unsigned __int8*)(v6 + v11 + 48);
        v16 = (unsigned __int8)*(&v93 + v11) - v15;
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
        v22 = *((unsigned __int8*)&v94 + v11);
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
        v32 = *((unsigned __int8*)&v94 + v11 + 1);
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
        v41 = *((unsigned __int8*)&v94 + v11 + 2);
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
          (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(*(float*)&v96 +
                                                                                                          0x0.0p+0f) +
                                                                                                  *((float*)&v96 +
                                                                                                    1)) +
                                                                                          *(float*)&v97_
                                                                                               .v97) +
                                                                                  *((float*)&v97_
                                                                                        .v97 +
                                                                                    1)) +
                                                                          v97_.v98) +
                                                                  v97_.v99) +
                                                          v97_.v100) +
                                                  v97_.v101) +
                                          v97_.v102) +
                                  v97_.v103) +
                          v97_.v104) +
                  v97_.v105) +
          v97_.v106;
      game_95eaa0((void*)((__int64)&v96), *a1, *(_QWORD*)(v48 + 40));
      if (((unsigned __int8)v96 & 2) != 0 ||
          ((unsigned __int16)v96 & 0x201) == 0x200) {
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
  v96 = GameRoutine_12c6110;
  if (((__int64)v51 - v50) >> 3 < 129) {
    v55 = 0;
  LABEL_81:
    GameRoutine_12c6140(v50, v51, (__int64 (**)(__int64, __int64))&v96,
                        ((__int64)v51 - v50) >> 3, nullptr, v55);
  }
  else {
    v52 = ((__int64)v51 - v50) >> 3;
    v53 = GameData_212c060;
    while (1) {
      v54 = (__int64*)GameRoutine_1a09d20(8 * v52, v53);
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
    GameRoutine_12c6140(v50, v51, (__int64 (**)(__int64, __int64))&v96,
                        ((__int64)v51 - v50) >> 3, v54, v52);
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v57);
  }
  v58 = a1[6];
  v59 = (__int64*)a1[7];
  v96 = GameRoutine_12c6110;
  if (((__int64)v59 - v58) >> 3 < 129) {
    v63 = 0;
  LABEL_91:
    GameRoutine_12c6140(v58, v59, (__int64 (**)(__int64, __int64))&v96,
                        ((__int64)v59 - v58) >> 3, nullptr, v63);
  }
  else {
    v60 = ((__int64)v59 - v58) >> 3;
    v61 = GameData_212c060;
    while (1) {
      v62 = (__int64*)GameRoutine_1a09d20(8 * v60, v61);
      if (v62 != nullptr) {
        break;
      }
      v63 = v60 >> 1;
      v56 = v60 > 1;
      v60 >>= 1;
      if (!v56) {
        goto LABEL_91;
      }
    }
    GameRoutine_12c6140(v58, v59, (__int64 (**)(__int64, __int64))&v96,
                        ((__int64)v59 - v58) >> 3, v62, v60);
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v64);
  }
  v65 = a1[9];
  v66 = (__int64*)a1[10];
  v96 = GameRoutine_12c6110;
  if (((__int64)v66 - v65) >> 3 < 129) {
    v70 = 0;
  LABEL_101:
    GameRoutine_12c6140(v65, v66, (__int64 (**)(__int64, __int64))&v96,
                        ((__int64)v66 - v65) >> 3, nullptr, v70);
  }
  else {
    v67 = ((__int64)v66 - v65) >> 3;
    v68 = GameData_212c060;
    while (1) {
      v69 = (__int64*)GameRoutine_1a09d20(8 * v67, v68);
      if (v69 != nullptr) {
        break;
      }
      v70 = v67 >> 1;
      v56 = v67 > 1;
      v67 >>= 1;
      if (!v56) {
        goto LABEL_101;
      }
    }
    GameRoutine_12c6140(v65, v66, (__int64 (**)(__int64, __int64))&v96,
                        ((__int64)v66 - v65) >> 3, v69, v67);
    v71 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v71 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v71);
  }
  v72 = a1[12];
  v73 = (__int64*)a1[13];
  v96 = GameRoutine_12c6110;
  if (((__int64)v73 - v72) >> 3 < 129) {
    v77 = 0;
  LABEL_111:
    GameRoutine_12c6140(v72, v73, (__int64 (**)(__int64, __int64))&v96,
                        ((__int64)v73 - v72) >> 3, nullptr, v77);
  }
  else {
    v74 = ((__int64)v73 - v72) >> 3;
    v75 = GameData_212c060;
    while (1) {
      v76 = (__int64*)GameRoutine_1a09d20(8 * v74, v75);
      if (v76 != nullptr) {
        break;
      }
      v77 = v74 >> 1;
      v56 = v74 > 1;
      v74 >>= 1;
      if (!v56) {
        goto LABEL_111;
      }
    }
    GameRoutine_12c6140(v72, v73, (__int64 (**)(__int64, __int64))&v96,
                        ((__int64)v73 - v72) >> 3, v76, v74);
    v78 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v78);
  }
  v79 = a1[15];
  v80 = (__int64*)a1[16];
  v96 = GameRoutine_12c6110;
  if (((__int64)v80 - v79) >> 3 < 129) {
    v84 = 0;
  LABEL_121:
    GameRoutine_12c6140(v79, v80, (__int64 (**)(__int64, __int64))&v96,
                        ((__int64)v80 - v79) >> 3, nullptr, v84);
  }
  else {
    v81 = ((__int64)v80 - v79) >> 3;
    v82 = GameData_212c060;
    while (1) {
      v83 = (__int64*)GameRoutine_1a09d20(8 * v81, v82);
      if (v83 != nullptr) {
        break;
      }
      v84 = v81 >> 1;
      v56 = v81 > 1;
      v81 >>= 1;
      if (!v56) {
        goto LABEL_121;
      }
    }
    GameRoutine_12c6140(v79, v80, (__int64 (**)(__int64, __int64))&v96,
                        ((__int64)v80 - v79) >> 3, v83, v81);
    v85 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v85 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v85);
  }
  v87 = a1[18];
  v86 = (__int64*)a1[19];
  v96 = GameRoutine_12c6110;
  if (((__int64)v86 - v87) >> 3 < 129) {
    v91 = 0;
  LABEL_131:
    GameRoutine_12c6140(v87, v86, (__int64 (**)(__int64, __int64))&v96,
                        ((__int64)v86 - v87) >> 3, nullptr, v91);
  }
  else {
    v88 = ((__int64)v86 - v87) >> 3;
    v89 = GameData_212c060;
    while (1) {
      v90 = (__int64*)GameRoutine_1a09d20(8 * v88, v89);
      if (v90 != nullptr) {
        break;
      }
      v91 = v88 >> 1;
      v56 = v88 > 1;
      v88 >>= 1;
      if (!v56) {
        goto LABEL_131;
      }
    }
    GameRoutine_12c6140(v87, v86, (__int64 (**)(__int64, __int64))&v96,
                        ((__int64)v86 - v87) >> 3, v90, v88);
    v92 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v92 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v92);
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
      v10 = GameRoutine_7a88a0(v15);
      v11 = game_HashString((__int64)v8);
      if (v17_.v19 == 1 && (v16 & 1) != 0 && v17_.v18 != nullptr) {
        v12 = v11;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v13);
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
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  char v10;
  char* v11;
  signed __int64 v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  char* v20;
  char* v21;
  char* v22;
  _QWORD* v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
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
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                             8LL * (unsigned __int8)*a1) +
                  8LL);
  v6 = strlen(v5);
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
  memmove(v8, v5, v7);
LABEL_12:
  v8[v7] = 0;
  v10 = v43_.v43;
  v11 = v43_.v45;
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
    v21 = v19;
    do {
      v22 = (char*)memchr(v21, 82, v12 - 3);
      if (v22 == nullptr) {
        break;
      }
      if (*(_DWORD*)v22 == 1598310738) {
        if (v22 != v20 && v22 - v19 != -1) {
          GameRoutine_1a0a8e0(&v43_.v43, v22 - v19, 4,
                              (char*)&GameData_1bcd850 + 1, 11);
          v10 = v43_.v43;
          v12 = v43_.v44;
          v11 = v43_.v45;
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
      v21 = v22 + 1;
      v12 = v20 - v21;
    } while (v20 - v21 >= 4);
  }
  if ((v10 & 1) != 0) {
    v13 = v11;
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
    v29 = **(_QWORD**)(*(_QWORD*)(v28 + 8 * v27) + 64LL);
    v30 = strlen(v29);
    GameRoutine_1a09ce0(&v43_.v43, v29, v30);
    v10 = v43_.v43;
    v11 = v43_.v45;
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
  if ((v10 & 1) != 0 && v11 != nullptr) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
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
  char* result;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  char* v21;
  signed __int64 v22;
  char* v23;
  signed __int64 v24;
  char* v25;
  signed __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  signed __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char* v40;
  char* v41;
  __int64 v42;
  char v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  signed __int64 v50;
  char* v51;
  __int64 v52;
  unsigned __int64 v53;
  char* v54;

  *(_WORD*)a2 = 0;
  v4 = *a1;
  *((_WORD*)a2 + 12) = 0;
  v5 = (char*)(a2 + 3);
  if ((v4 & 1) != 0) {
    fw_text_String_CopyTerminated(&v46, *((_QWORD*)a1 + 2), *((_QWORD*)a1 + 1));
  }
  else {
    v6 = *((_QWORD*)a1 + 1);
    v46 = *(_QWORD*)a1;
    v47 = v6;
    v48 = *((char**)a1 + 2);
  }
  v53 = 0;
  v54 = nullptr;
  v52 = 0;
  if ((v46 & 1) != 0) {
    v7 = v48;
  }
  else {
    v7 = (char*)&v46 + 1;
  }
  if ((v46 & 1) != 0) {
    v8 = v47;
  }
  else {
    v8 = (unsigned __int64)(unsigned __int8)v46 >> 1;
  }
  result = (char*)RuntimeBuffer_8924a0(&v52, v7, v8, 47);
  if ((*(_BYTE*)(v53 - 24) & 1) != 0) {
    result = (char*)fw_text_String_CopyTerminated(&v49, *(_QWORD*)(v53 - 8),
                                                  *(_QWORD*)(v53 - 16));
    v12 = v52;
    if (v52 == 0) {
      goto LABEL_27;
    }
  LABEL_14:
    v13 = v53;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v12 == v53) {
      goto LABEL_24;
    }
    v15 = v53;
    do {
      v16 = *(_BYTE*)(v15 - 24);
      v15 -= 24LL;
      if ((v16 & 1) != 0 && *(_QWORD*)(v13 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        result = (char*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v17);
      }
      v13 = v15;
    } while (v15 != v12);
    v53 = v12;
    if (v52 != 0) {
    LABEL_24:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v18 = 56;
      }
      result = (char*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v18);
    }
    goto LABEL_27;
  }
  v10 = *(_QWORD*)(v53 - 24);
  v11 = *(char**)(v53 - 8);
  v50 = *(_QWORD*)(v53 - 16);
  v51 = v11;
  v49 = v10;
  v12 = v52;
  if (v52 != 0) {
    goto LABEL_14;
  }
LABEL_27:
  if ((v46 & 1) != 0 && v48 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    result = (char*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  v20 = v49;
  v22 = v50;
  v21 = v51;
  if ((v49 & 1) != 0) {
    v23 = v51;
  }
  else {
    v23 = (char*)&v49 + 1;
  }
  if ((v49 & 1) != 0) {
    v24 = v50;
  }
  else {
    v24 = (unsigned __int64)(unsigned __int8)v49 >> 1;
  }
  if (v24 < 2) {
    goto LABEL_53;
  }
  v25 = &v23[v24];
  result = v23;
  v26 = v24;
  while (1) {
    result = (char*)memchr(result, 95, v26 - 1);
    if (result == nullptr) {
      goto LABEL_53;
    }
    if (*(_WORD*)result == 16735) {
      break;
    }
    ++result;
    v26 = v25 - result;
    if (v25 - result < 2) {
      goto LABEL_53;
    }
  }
  if (result == v25 || (v27 = result - v23, result - v23 == -1)) {
  LABEL_53:
    if (a2 != &v49) {
      if ((v20 & 1) == 0) {
        v30 = v50;
        *a2 = v49;
        a2[1] = v30;
        a2[2] = (__int64)v51;
        if ((v49 & 1) == 0) {
          result;
          return;
        }
        goto LABEL_59;
      }
      result = (char*)GameRoutine_64df20(a2, v21, v22);
    }
    if ((v49 & 1) == 0) {
      result;
      return;
    }
    goto LABEL_59;
  }
  if (v24 >= v27) {
    v28 = result - v23;
  }
  else {
    v28 = v24;
  }
  if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_96:
    String_60a1d0(result);
  }
  if (v28 >= 0x17) {
    if ((v28 | 7) == 0x17) {
      v32 = 26;
    }
    else {
      v32 = (v28 | 7) + 1;
    }
    v29 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v32, 16, 0);
    v53 = v28;
    v54 = v29;
    v52 = v32 | 1;
  }
  else {
    LOBYTE(v52) = 2 * v28;
    v29 = (char*)&v52 + 1;
    if (result == v23) {
      goto LABEL_69;
    }
  }
  result = (char*)memmove(v29, v23, v28);
LABEL_69:
  v33 = *(_BYTE*)a2;
  v29[v28] = 0;
  if ((v33 & 1) != 0 && a2[2] != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    result = (char*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34);
  }
  v35 = v53;
  *a2 = v52;
  a2[1] = v35;
  v36 = (unsigned __int8)v49;
  a2[2] = (__int64)v54;
  v37 = v50;
  if ((v36 & 1) == 0) {
    v37 = v36 >> 1;
  }
  if (v27 >= v37) {
    String_60a230(result);
  }
  v38 = v27 + 1;
  v39 = v37 - (v27 + 1);
  if ((v36 & 1) != 0) {
    v40 = v51;
  }
  else {
    v40 = (char*)&v49 + 1;
  }
  if (v39 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_96;
  }
  if (v39 >= 0x17) {
    if ((v39 | 7) == 0x17) {
      v42 = 26;
    }
    else {
      v42 = (v39 | 7) + 1;
    }
    v41 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v42, 16, 0);
    v53 = v39;
    v54 = v41;
    v52 = v42 | 1;
  }
  else {
    LOBYTE(v52) = 2 * v39;
    v41 = (char*)&v52 + 1;
    if (v37 == v38) {
      goto LABEL_89;
    }
  }
  result = (char*)memmove(v41, &v40[v38], v39);
LABEL_89:
  v43 = *v5;
  v41[v39] = 0;
  if ((v43 & 1) != 0 && a2[5] != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    result = (char*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
  }
  v45 = v53;
  *(_QWORD*)v5 = v52;
  *((_QWORD*)v5 + 1) = v45;
  *((_QWORD*)v5 + 2) = v54;
  if ((v49 & 1) != 0) {
  LABEL_59:
    if (v51 != nullptr) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      {
        (char*)nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
        return;
      }
    }
  }
  {
    result;
    return;
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
  const char* v3;
  __int64 v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  int v11;
  int v12;
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
  __int64 v24;
  __int64 v25;

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
    v13 = -1;
    v14 = -1;
    v15 = -1;
    v16 = -1;
    v4 = *msg_MessageManager_instance__ptr[0];
    v17 = -1;
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v10[0] = msg_TagSelector_vtable;
    v10[1] = 0xFFFF0001FFFF0000LL;
    v10[2] = 0xFFFF0004FFFF0002LL;
    v10[3] = 0xFFFF0006FFFF0005LL;
    v25 = 8;
    v11 = -65529;
    v12 = -65528;
    v5 = (char*)GameRoutine_a4dbe0(v4, v3, 0, v10);
    break;
  case 36:
    *(_WORD*)a2 = 0;
    {
      result;
      return;
    }
  default:
  LABEL_40:
    v5 = msg_MessageManager_empty_text_;
    break;
  }
  result = strlen(v5);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v8, 16,
                                             0);
    *(_QWORD*)(a2 + 8) = v6;
    *(_QWORD*)(a2 + 16) = v9;
    *(_QWORD*)a2 = v8 | 1;
    v7 = v9;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v7 = a2 + 1;
    if (result == 0) {
      goto LABEL_50;
    }
  }
  result = memmove(v7, v5, v6);
LABEL_50:
  *(_BYTE*)(v7 + v6) = 0;
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

__attribute__((swiftcall)) void game_1605540(PSEUDO_X8 x8_, __int64 a1, int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned int v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 result;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[4];
  int v18;
  int v19;
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

  v4 = a1;
  if ((GameRoutine_1604790(a1) & 1) != 0) {
    v6 = game_util_Format("%02d", v4);
  }
  else {
    v6 = game_util_Format("%d", v4);
  }
  v7 = v6;
  v8 = game_util_Format("%02d", a2);
  v9 = msg_MessageManager_instance__ptr[0];
  GameRoutine_60a020_alt1(*msg_MessageManager_instance__ptr[0] + 14704, v7);
  GameRoutine_60a020_alt1(*v9 + 14728, v8);
  v10 = *v9;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  v17[0] = GameData_212e348 + 2;
  v17[1] = 0xFFFF0001FFFF0000LL;
  v17[2] = 0xFFFF0004FFFF0002LL;
  v17[3] = 0xFFFF0006FFFF0005LL;
  v32 = 8;
  v18 = -65529;
  v19 = -65528;
  v11 = GameRoutine_a4dbe0(v10, "MID_Sys_DateTime_HM", 0, v17);
  result = strlen(v11);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v13 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (result | 7) + 1;
    }
    v16 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v15, 16, 0);
    a3[1] = v13;
    a3[2] = v16;
    *a3 = v15 | 1;
    v14 = (char*)v16;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v14 = (char*)a3 + 1;
    if (result == 0) {
      goto LABEL_13;
    }
  }
  result = memmove(v14, v11, v13);
LABEL_13:
  v14[v13] = 0;
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
