#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_6b8990(_QWORD* result, __int64*);
_QWORD* GameRoutine_6e56e0(_QWORD* result, unsigned __int64, _QWORD*);
_QWORD* game_TransporterConst_List_Impl_EachData(_QWORD* result, __int64,
                                                 __int64);
_QWORD* game_UnitConst_BattleEnhance_Commit(_QWORD* result, __int64);
_QWORD* game_UnitConst_BattleInternal_Commit(_QWORD* result, __int64);
_QWORD* game_UnitConst_CapabilityEnhance_Commit(_QWORD* result, __int64);
_QWORD* game_combat_CombatLegionManager_SetAllSoundEnable(_QWORD*, __int64);
_WORD*
game_UnitItemList_EachItem_alt1(_WORD* result,
                                __int64) __asm__("game_UnitItemList_EachItem");
__attribute__((swiftcall)) void TransporterConst_89b3d0(PSEUDO_X8, _QWORD,
                                                        _QWORD, _QWORD);
__attribute__((swiftcall)) void game_127c260(PSEUDO_X8, __int64, unsigned int);
__attribute__((swiftcall)) void
game_GrowthListFile_GetJobChanges(PSEUDO_X8, __int64*, unsigned int, char);
__attribute__((swiftcall)) void snd_BGM_getFirstHandle(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void snd_BGM_getFirstNameString(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void snd_a306d0(PSEUDO_X8, _QWORD, _QWORD, _QWORD,
                                           long double);
__attribute__((swiftcall)) void snd_a307a0(PSEUDO_X8, _QWORD, _QWORD, _QWORD,
                                           long double);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64* GameRoutine_6b87d0(__int64* result, unsigned __int64, __int64, __int64,
                            __int64, __int64);
__int64* GameRoutine_6d36d0_alt1(_QWORD*) __asm__("GameRoutine_6d36d0");
__int64* GameRoutine_8573a0(__int64* result, __int64*, __int64*, __int64*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_9a28e0_alt1(int) __asm__("game_9a28e0");
__int64 BattleInfo_797e40(__int64, unsigned __int8*);
__int64 BattleScenes_7a7a20(__int64, unsigned __int8*, __int64);
__int64 BonusExpList_7feda0(__int64, __int64, char);
__int64 BonusExpList_7ffb30(__int64);
__int64 Camera_7be4c0(_QWORD, _QWORD);
__int64 Camera_7bfc60(__int64, __int128*);
__int64 Camera_b3ac00(_QWORD);
__int64 Cursor_734a80(__int64, __int64*);
__int64 DisposFile_6bc220(_QWORD);
__int64 Drawer_9647c0(_QWORD);
__int64 EffectConst_961260(__int64, _BYTE**, __int64);
__int64 EventManagerBase_Unknown2(_QWORD);
__int64 GameManager_a30b40(__int64*, __int64);
__int64 GameRoutine_106c820(_QWORD*, __int64);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_11e8ca0(_QWORD, _QWORD);
__int64 GameRoutine_11e9180(_QWORD, _QWORD);
__int64 GameRoutine_11e94c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_11e96a0(_QWORD, _QWORD);
__int64 GameRoutine_11e9930(__int64);
__int64 GameRoutine_1273480(_QWORD);
__int64 GameRoutine_12e2b00(_QWORD);
__int64 GameRoutine_2b0();
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_610540(const char*, const char*);
__int64 GameRoutine_66dd60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b51b0(void);
__int64 GameRoutine_6b7180(unsigned int**);
__int64 GameRoutine_6b71e0(__int64*);
__int64 GameRoutine_6bc3e0(void);
__int64 GameRoutine_6c3980(_QWORD);
__int64 GameRoutine_6c47b0(__int64, _BYTE*, char, char);
__int64 GameRoutine_6c47b0_alt1(_QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_6c47b0");
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_6c6da0_alt1(_QWORD) __asm__("GameRoutine_6c6da0");
__int64 GameRoutine_6d36d0(_QWORD);
__int64 GameRoutine_6e5480(__int64 result);
__int64 GameRoutine_71fb20(__int64*);
__int64 GameRoutine_720280(__int64*);
__int64 GameRoutine_7209e0(__int64*);
__int64 GameRoutine_729040(void);
__int64 GameRoutine_72dbe0(_QWORD);
__int64 GameRoutine_73b640(_QWORD);
__int64 GameRoutine_740ac0(__int64 result, __int64, unsigned __int64, __int64*);
__int64 GameRoutine_743760(void);
__int64 GameRoutine_7475c0(void);
__int64 GameRoutine_74c460(_QWORD);
__int64 GameRoutine_772ce0(_QWORD, _QWORD);
__int64 GameRoutine_77b600(void);
__int64 GameRoutine_7bbe90(_QWORD);
__int64 GameRoutine_7c4ed0(_QWORD);
__int64 GameRoutine_7c89e0(void);
__int64 GameRoutine_800d70(__int64 result, unsigned __int8*, unsigned int);
__int64 GameRoutine_80bf20(__int64*);
__int64 GameRoutine_80eb10(char);
__int64 GameRoutine_80fde0(const char*, const char*, float*);
__int64 GameRoutine_823d90(void);
__int64 GameRoutine_8308a0(__int64, __int64, __int64);
__int64 GameRoutine_8309a0(__int64, __int64, __int64);
__int64 GameRoutine_83d720(__int64, __int64);
__int64 GameRoutine_855640(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_932360(void);
__int64 GameRoutine_960540(_QWORD);
__int64 GameRoutine_960d20(__int128*, _BYTE**, __int64, __int64, __int64,
                           __int64, __int64, __int64);
__int64 GameRoutine_9ba840(_QWORD);
__int64 GameRoutine_9db9e0(unsigned int, unsigned int);
__int64 GameRoutine_a290c0(__int64 result, __int64, __int64, int, char, float);
__int64 GameRoutine_f06390(_QWORD, _QWORD);
__int64 GameRoutine_f51010(void);
__int64 GameRoutine_f90a30(__int64 result, char);
__int64 GameRoutine_fe9550(void);
__int64 GameRoutine_ffd760(int, __int64, __int64, char);
__int64 Image_729780(_QWORD);
__int64 Impl_12262c0(void);
__int64 JobFile_6763c0(__int64, unsigned __int8*, __int64);
__int64 MapDrawManager_f02ec0(void);
__int64 MapInfo_825040(_QWORD, _QWORD);
__int64 MapTransition_823980(_QWORD, _QWORD);
__int64 Situation_7647e0(_QWORD, _QWORD);
__int64 TelopParts_17ccc20(_QWORD, _QWORD, _QWORD);
__int64 Trick_7ca860(_QWORD);
__int64 UnitActor_81ab40(_QWORD, long double, double);
__int64 UnitConst_8f7920(__int64, __int64);
__int64 UnitItemList_713480(unsigned __int16*);
__int64 UnitSkillList_84cc00(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84d140(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84d340(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84e640(_QWORD);
__int64 UnitSkillList_84e760(_QWORD);
__int64 UnitSkillList_850100(_QWORD, _QWORD);
__int64 Unit_6cd120(__int64, char, _DWORD*);
__int64 Unit_6d00c0(__int64);
__int64 Unit_6de340(__int64);
__int64 Unit_6dfe00(__int64 result, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_68e4c0_alt1(_QWORD, _QWORD) __asm__("game_68e4c0");
__int64 game_6d69a0(__int64);
__int64 game_7305a0_alt1(void) __asm__("game_7305a0");
__int64 game_855190_alt1(_QWORD, _QWORD, _QWORD) __asm__("game_855190");
__int64 game_855ec0_alt1(_QWORD, _QWORD) __asm__("game_855ec0");
__int64 game_9a28e0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GameVariableTable_Find_alt1(_QWORD, _QWORD) __asm__(
    "game_GameVariableTable_Find");
__int64 game_GrowthListFile_GetJob(__int64*, __int64, char);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HasSkill_alt1(_QWORD, _QWORD) __asm__("game_HasSkill");
__int64 game_HashString(__int64 result);
__int64 game_UnitGrow_Clamp(__int64 result);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_UnitSkillList_GetMaxValue(_QWORD, _QWORD);
__int64 game_UnitSkillList_GetRangeAddImpl(__int64, __int64);
__int64 game_UnitSkillList_GetTotalValue(_QWORD*, __int64*);
__int64 game_Unit_AutoGrowMasteryLevel(__int64, __int64*);
__int64 game_Unit_GetJob(__int64);
__int64 game_Unit_GetJob_alt1(_QWORD) __asm__("game_Unit_GetJob");
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_Unknown6cd8f0(_WORD*);
__int64 game_Unit_Unknown6d2380(__int64);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 game_graphics_ObjectTransparent_Run(_QWORD, _QWORD);
__int64 game_map_Situation_Clear(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_Param_isEnvelopeEnded(_QWORD);
__int64 snd_Param_isEnvelopeFading(_QWORD);
__int64 snd_Param_isEnvelopeReleased(_QWORD);
__int64 snd_Voice_hasFeature(_QWORD, _QWORD);
__int64 snd_a2c9c0(__int64 result, __int64);
__int64 snd_findSound(_QWORD);
__int64 snd_findSound_alt1(__int64) __asm__("snd_findSound");
__int64 snd_findVoice(__int64);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 snd_getDefineInt(unsigned __int8*);
__int64 snd_isActive_100100(_QWORD);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 snd_startVolume_ffe30(_QWORD, _QWORD, float);
__int64 snd_stop_ffbe0(__int64, __int64);
__int64 snprintf(_QWORD, _QWORD, const char*, ...);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock();
__int64 strcmp(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strstr(_QWORD, _QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 snd_Fade_Fade_10cb00(__int64, unsigned __int8*);
bool GameRoutine_6b3be0(__int64, __int64);
bool GameRoutine_7fcd20(__int64, __int64);
bool GameRoutine_800de0(__int64, unsigned __int8);
bool GameRoutine_800ea0(__int64, unsigned __int8);
bool GameRoutine_851060(__int64*, _WORD*);
bool GameRoutine_8c4ee0(__int64);
bool UnitItem_6e8bc0(unsigned __int16*, __int64);
bool game_HasActiveSkill_843420_alt1(_DWORD*, __int64) __asm__(
    "game_HasActiveSkill_843420");
bool snd_Voice_hasSends(__int64);
char* GameRoutine_740d00(char* result, char*, char*, __int64, __int64, __int64,
                         __int64);
double snd_Fade_getTime(__int64);
extern _DWORD* GameData_212d010;
extern _DWORD* GameData_212d0b0;
extern _DWORD* GameData_212d1a8;
extern _DWORD* GameData_212d340;
extern _DWORD* GameData_212d558;
extern _DWORD* GameData_212ee50;
extern _DWORD game_script_hub_schedule_kHourCycles[24];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN* GameData_21d21b8;
extern _UNKNOWN* GameData_21d21d0;
extern _UNKNOWN GameData_1a85568;
extern _UNKNOWN GameData_1a85586;
extern _UNKNOWN GameData_1a8559c;
extern _UNKNOWN GameData_1a855b6;
extern _UNKNOWN GameData_1a855e3;
extern _UNKNOWN GameData_1a8928b;
extern _UNKNOWN GameData_1a892ae;
extern _UNKNOWN GameData_1a892c8;
extern _UNKNOWN GameData_1a892dc;
extern _UNKNOWN GameData_1a892f8;
extern _UNKNOWN GameData_1a89309;
extern _UNKNOWN GameData_1a8d350;
extern _UNKNOWN GameData_1a8d367;
extern _UNKNOWN GameData_1a8d38c;
extern _UNKNOWN GameData_1a8d39d;
extern _UNKNOWN GameData_1a8d3ae;
extern _UNKNOWN GameData_1a90c95;
extern _UNKNOWN GameData_1a90cbd;
extern _UNKNOWN GameData_1a98c48;
extern _UNKNOWN GameData_1a98c65;
extern _UNKNOWN GameData_1a98c8c;
extern _UNKNOWN GameData_1a98c9d;
extern _UNKNOWN GameData_1a98cc0;
extern _UNKNOWN GameData_1a9c8d2;
extern _UNKNOWN GameData_1a9c8f2;
extern _UNKNOWN GameData_1a9c92c;
extern _UNKNOWN GameData_1aa089d;
extern _UNKNOWN GameData_1aa08ba;
extern _UNKNOWN GameData_1aa08e4;
extern _UNKNOWN GameData_1aa46f0;
extern _UNKNOWN GameData_1aa4714;
extern _UNKNOWN GameData_1aa472e;
extern _UNKNOWN GameData_1aa4748;
extern _UNKNOWN GameData_1aa837c;
extern _UNKNOWN GameData_1aa838a;
extern _UNKNOWN GameData_1aa83a4;
extern _UNKNOWN GameData_1aabfad;
extern _UNKNOWN GameData_1aabfc5;
extern _UNKNOWN GameData_1aabfd3;
extern _UNKNOWN GameData_1aaff09;
extern _UNKNOWN GameData_1aaff17;
extern _UNKNOWN GameData_1ab39d0;
extern _UNKNOWN GameData_1ab39ee;
extern _UNKNOWN GameData_1abba9d;
extern _UNKNOWN GameData_1abbab5;
extern _UNKNOWN GameData_1abbac9;
extern _UNKNOWN GameData_1abf967;
extern _UNKNOWN GameData_1abf97e;
extern _UNKNOWN GameData_1ac30db;
extern _UNKNOWN GameData_1ac30fb;
extern _UNKNOWN GameData_1ac3119;
extern _UNKNOWN GameData_1ac3133;
extern _UNKNOWN GameData_1ac3147;
extern _UNKNOWN GameData_1ac3158;
extern _UNKNOWN GameData_1ac6aa6;
extern _UNKNOWN GameData_1acab80;
extern _UNKNOWN GameData_1acab97;
extern _UNKNOWN GameData_1acabab;
extern _UNKNOWN GameData_1acabc5;
extern _UNKNOWN GameData_1acedc6;
extern _UNKNOWN GameData_1acedd9;
extern _UNKNOWN GameData_1acede7;
extern _UNKNOWN GameData_1ad2942;
extern _UNKNOWN GameData_1ad2962;
extern _UNKNOWN GameData_1ad2972;
extern _UNKNOWN GameData_1ad2986;
extern _UNKNOWN GameData_1ad65a1;
extern _UNKNOWN GameData_1ad65b8;
extern _UNKNOWN GameData_1ada348;
extern _UNKNOWN GameData_1ada369;
extern _UNKNOWN GameData_1ada380;
extern _UNKNOWN GameData_1ada391;
extern _UNKNOWN GameData_1ae1e08;
extern _UNKNOWN GameData_1ae1e1c;
extern _UNKNOWN GameData_1ae1e2a;
extern _UNKNOWN GameData_1ae1e38;
extern _UNKNOWN GameData_1ae1e4f;
extern _UNKNOWN GameData_1ae57d5;
extern _UNKNOWN GameData_1ae57f5;
extern _UNKNOWN GameData_1ae5806;
extern _UNKNOWN GameData_1ae5817;
extern _UNKNOWN GameData_1ae583a;
extern _UNKNOWN GameData_1ae9645;
extern _UNKNOWN GameData_1ae9662;
extern _UNKNOWN GameData_1ae9683;
extern _UNKNOWN GameData_1ae9691;
extern _UNKNOWN GameData_1ae96b4;
extern _UNKNOWN GameData_1aed7ac;
extern _UNKNOWN GameData_1aed7d2;
extern _UNKNOWN GameData_1af1356;
extern _UNKNOWN GameData_1af136a;
extern _UNKNOWN GameData_1af137b;
extern _UNKNOWN GameData_1af50a6;
extern _UNKNOWN GameData_1af50c1;
extern _UNKNOWN GameData_1af50d2;
extern _UNKNOWN GameData_1af50e3;
extern _UNKNOWN GameData_1af50fa;
extern _UNKNOWN GameData_1af8e4e;
extern _UNKNOWN GameData_1af8e71;
extern _UNKNOWN GameData_1af8e7f;
extern _UNKNOWN GameData_1af8e93;
extern _UNKNOWN GameData_1afcd52;
extern _UNKNOWN GameData_1afcd80;
extern _UNKNOWN GameData_1afcd97;
extern _UNKNOWN GameData_1afcdab;
extern _UNKNOWN GameData_21a60e8;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21ca2d0;
extern _UNKNOWN GameData_21ca4e8;
extern _UNKNOWN GameData_21ecc78;
extern _UNKNOWN GameData_21ecde0;
extern _UNKNOWN GameData_21ed068;
extern _UNKNOWN GameData_21ee258;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a83630;
extern __int128 GameData_21a6120;
extern __int16* GameData_212cea8[2];
extern __int16 GameData_21ca2c8;
extern __int64 (**game_Binder_vtable_ptr)();
extern __int64 (*GameData_1f91768[])();
extern __int64 (*GameData_1f917e8[])();
extern __int64 (*GameData_1f91868[])();
extern __int64 (*GameData_1f918e8[])();
extern __int64 (*GameData_1f91968[])();
extern __int64 (*GameData_1f919e8[])();
extern __int64 (*GameData_1f91a68[])();
extern __int64 (*GameData_1f91ae8[])();
extern __int64 (*GameData_1f92a40[])();
extern __int64 (*GameData_1f92ac0[])();
extern __int64 (*GameData_1f92f88[])();
extern __int64 (*GameData_1f93088[])();
extern __int64 (*GameData_1ff8cd8[])();
extern __int64 (*Route_Destructor_727b20_ptr[])();
extern __int64 (*Route_Destructor_727ba0_ptr[])();
extern __int64 (*game_InterpolatorVector3_vtable[])();
extern __int64 (*game_map_Cursor_Impl_vtable[])();
extern __int64 (*game_map_Route_vtable[])();
extern __int64 (*game_map_anonymous_Impl_vtable[])();
extern __int64 (*game_map_anonymous_MapTransition_vtable[])();
extern __int64* GameData_212c628;
extern __int64* GameData_212c650[5];
extern __int64* GameData_212c770[3];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c950;
extern __int64* GameData_212cc70[57];
extern __int64* GameData_212ce28[2];
extern __int64* GameData_212ce40;
extern __int64* GameData_212ce50[2];
extern __int64* GameData_212ce58;
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212cec0;
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cfd8[7];
extern __int64* GameData_212cfe0[6];
extern __int64* GameData_212cfe8[5];
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212cff8[3];
extern __int64* GameData_212d000[2];
extern __int64* GameData_212d008;
extern __int64* GameData_212d0a8;
extern __int64* GameData_212d190[3];
extern __int64* GameData_212d1c0;
extern __int64* GameData_212d1d8[3];
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d2a0[2];
extern __int64* GameData_212d2a8;
extern __int64* GameData_212d2e8[2];
extern __int64* GameData_212d2f0;
extern __int64* GameData_212d328;
extern __int64* GameData_212d338;
extern __int64* GameData_212d458[7];
extern __int64* GameData_212d488;
extern __int64* GameData_212d550;
extern __int64* GameData_212d7f0[5];
extern __int64* GameData_212de60[2];
extern __int64* GameData_212de68;
extern __int64* GameData_212eb50;
extern __int64* GameData_212ee48;
extern __int64* GameData_212fb88[2];
extern __int64* GameData_212fb90;
extern __int64* GameData_21309c8[5];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* snd_g_memory_ptr[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_212c7f0[3];
extern __int64 GameData_212c998[148];
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212cf88[4];
extern __int64 GameData_212cf90[3];
extern __int64 GameData_212cf98[2];
extern __int64 GameData_212cfa0;
extern __int64 GameData_212d018[6];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d028[4];
extern __int64 GameData_212d030[3];
extern __int64 GameData_212d038[2];
extern __int64 GameData_2130f48;
extern __int64 GameData_21a60e0;
extern __int64 GameData_21c6978;
extern __int64 GameData_21c6980;
extern __int64 GameData_21c6988;
extern __int64 GameData_21c6990;
extern __int64 GameData_21c6998;
extern __int64 GameData_21c69a0;
extern __int64 GameData_21c69a8;
extern __int64 GameData_21c69b0;
extern __int64 GameData_21c9608;
extern __int64 GameData_21c9988;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca0d0;
extern __int64 GameData_21ca0d8;
extern __int64 GameData_21ca0e0;
extern __int64 GameData_21ca0e8;
extern __int64 GameData_21ca0f0;
extern __int64 GameData_21ca0f8;
extern __int64 GameData_21ca100;
extern __int64 GameData_21ca108;
extern __int64 GameData_21ca110;
extern __int64 GameData_21ca118;
extern __int64 GameData_21ca120;
extern __int64 GameData_21ca128;
extern __int64 GameData_21ca130;
extern __int64 GameData_21ca138;
extern __int64 GameData_21ca140;
extern __int64 GameData_21ca148;
extern __int64 GameData_21ca150;
extern __int64 GameData_21ca158;
extern __int64 GameData_21ca160;
extern __int64 GameData_21ca168;
extern __int64 GameData_21ca170;
extern __int64 GameData_21ca178;
extern __int64 GameData_21ca180;
extern __int64 GameData_21ca188;
extern __int64 GameData_21ca190;
extern __int64 GameData_21ca198;
extern __int64 GameData_21ca1a0;
extern __int64 GameData_21ca1a8;
extern __int64 GameData_21ca1b0;
extern __int64 GameData_21ca1b8;
extern __int64 GameData_21ca1c0;
extern __int64 GameData_21ca1c8;
extern __int64 GameData_21ca1d0;
extern __int64 GameData_21ca1d8;
extern __int64 GameData_21ca1e0;
extern __int64 GameData_21ca1e8;
extern __int64 GameData_21ca1f0;
extern __int64 GameData_21ca1f8;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21caa38;
extern __int64 GameData_21caa40;
extern __int64 GameData_21caa48;
extern __int64 GameData_21caa50;
extern __int64 GameData_21caa58;
extern __int64 GameData_21caa60;
extern __int64 GameData_21caa78;
extern __int64 GameData_21caa80;
extern __int64 GameData_21caa88;
extern __int64 GameData_21caa90;
extern __int64 GameData_21caa98;
extern __int64 GameData_21caaa0;
extern __int64 GameData_21caaa8;
extern __int64 GameData_21d1f50;
extern __int64 GameData_21d21c0;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 GameData_21da4a0;
extern __int64 GameData_21ec558;
extern __int64 GameData_21ec7a8;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21ec7c8;
extern __int64 GameData_21ec9b0;
extern __int64 GameData_21ec9b8;
extern __int64 GameData_21ec9c8;
extern __int64 GameData_21ec9d0;
extern __int64 GameData_21ec9d8[];
extern __int64 GameData_21ec9e0;
extern __int64 GameData_21ec9e8;
extern __int64 GameData_21ec9f0;
extern __int64 GameData_21ec9f8;
extern __int64 GameData_21eca00;
extern __int64 GameData_21eca08;
extern __int64 GameData_21eca10;
extern __int64 GameData_21eca18;
extern __int64 GameData_21eca20;
extern __int64 GameData_21eca28;
extern __int64 GameData_21eca30;
extern __int64 GameData_21eca38;
extern __int64 GameData_21eca40;
extern __int64 GameData_21eca48;
extern __int64 GameData_21eca50;
extern __int64 GameData_21eca58;
extern __int64 GameData_21eca60;
extern __int64 GameData_21eca68;
extern __int64 GameData_21eca70;
extern __int64 GameData_21eca78;
extern __int64 GameData_21eca80;
extern __int64 GameData_21eca88;
extern __int64 GameData_21eca90;
extern __int64 GameData_21eca98;
extern __int64 GameData_21ecaa0;
extern __int64 GameData_21ecaa8;
extern __int64 GameData_21ecab0;
extern __int64 GameData_21ecab8;
extern __int64 GameData_21ecac0;
extern __int64 GameData_21ecac8;
extern __int64 GameData_21ecad0;
extern __int64 GameData_21ecad8;
extern __int64 GameData_21ecae0;
extern __int64 GameData_21ecae8;
extern __int64 GameData_21ecaf0;
extern __int64 GameData_21ecaf8;
extern __int64 GameData_21ecb00;
extern __int64 GameData_21ecb08;
extern __int64 GameData_21ecb10;
extern __int64 GameData_21ecb18;
extern __int64 GameData_21ecb20;
extern __int64 GameData_21ecb28;
extern __int64 GameData_21ecb30;
extern __int64 GameData_21ecb38;
extern __int64 GameData_21ecb40;
extern __int64 GameData_21ecb48;
extern __int64 GameData_21ecb50;
extern __int64 GameData_21ecb58;
extern __int64 GameData_21ecb60;
extern __int64 GameData_21ecb68;
extern __int64 GameData_21ecb70;
extern __int64 GameData_21ecb78;
extern __int64 GameData_21ecb80;
extern __int64 GameData_21ecb88;
extern __int64 GameData_21ecb90;
extern __int64 GameData_21ecb98;
extern __int64 GameData_21ecba0;
extern __int64 GameData_21ecba8;
extern __int64 GameData_21ecbb0;
extern __int64 GameData_21ecbb8;
extern __int64 GameData_21ecbc0;
extern __int64 GameData_21ecbc8;
extern __int64 GameData_21ecbd0;
extern __int64 GameData_21ecbd8;
extern __int64 GameData_21ecbe0;
extern __int64 GameData_21ecbe8;
extern __int64 GameData_21ecbf0;
extern __int64 GameData_21ecbf8;
extern __int64 GameData_21ecc00;
extern __int64 GameData_21ecc08;
extern __int64 GameData_21ecc10;
extern __int64 GameData_21ecc18;
extern __int64 GameData_21ecc20;
extern __int64 GameData_21ecc28;
extern __int64 GameData_21ecc30;
extern __int64 GameData_21ecc38;
extern __int64 GameData_21ecc40;
extern __int64 GameData_21ecc48;
extern __int64 GameData_21ecc50;
extern __int64 GameData_21ecc58;
extern __int64 GameData_21ecc60;
extern __int64 GameData_21ecc68;
extern __int64 GameData_21ecc70;
extern __int64 GameData_21ecc80[];
extern __int64 GameData_21ecc88;
extern __int64 GameData_21ecc90;
extern __int64 GameData_21ecc98;
extern __int64 GameData_21ecca0;
extern __int64 GameData_21ecca8;
extern __int64 GameData_21eccb0;
extern __int64 GameData_21eccb8;
extern __int64 GameData_21eccc0;
extern __int64 GameData_21eccc8;
extern __int64 GameData_21eccd0;
extern __int64 GameData_21eccd8;
extern __int64 GameData_21ecce0;
extern __int64 GameData_21ecce8;
extern __int64 GameData_21eccf0;
extern __int64 GameData_21eccf8;
extern __int64 GameData_21ecd00;
extern __int64 GameData_21ecd08;
extern __int64 GameData_21ecd10;
extern __int64 GameData_21ecd18;
extern __int64 GameData_21ecd20;
extern __int64 GameData_21ecd28;
extern __int64 GameData_21ecd30;
extern __int64 GameData_21ecd38;
extern __int64 GameData_21ecd40;
extern __int64 GameData_21ecd48;
extern __int64 GameData_21ecd50;
extern __int64 GameData_21ecd58;
extern __int64 GameData_21ecd60;
extern __int64 GameData_21ecd68;
extern __int64 GameData_21ecd70;
extern __int64 GameData_21ecd78;
extern __int64 GameData_21ecd80;
extern __int64 GameData_21ecd88;
extern __int64 GameData_21ecd90;
extern __int64 GameData_21ecd98;
extern __int64 GameData_21ecda0;
extern __int64 GameData_21ecda8;
extern __int64 GameData_21ecdb0;
extern __int64 GameData_21ecdb8;
extern __int64 GameData_21ecdc0;
extern __int64 GameData_21ecdc8;
extern __int64 GameData_21ecdd0;
extern __int64 GameData_21ecdd8;
extern __int64 GameData_21ecde8[];
extern __int64 GameData_21ecdf0;
extern __int64 GameData_21ecdf8;
extern __int64 GameData_21ece00;
extern __int64 GameData_21ece08;
extern __int64 GameData_21ece10;
extern __int64 GameData_21ece18;
extern __int64 GameData_21ece20;
extern __int64 GameData_21ece28;
extern __int64 GameData_21ece30;
extern __int64 GameData_21ece38;
extern __int64 GameData_21ece40;
extern __int64 GameData_21ece48;
extern __int64 GameData_21ece50;
extern __int64 GameData_21ece58;
extern __int64 GameData_21ece60;
extern __int64 GameData_21ece68;
extern __int64 GameData_21ece70;
extern __int64 GameData_21ece78;
extern __int64 GameData_21ece80;
extern __int64 GameData_21ece88;
extern __int64 GameData_21ece90;
extern __int64 GameData_21ece98;
extern __int64 GameData_21ecea0;
extern __int64 GameData_21ecea8;
extern __int64 GameData_21eceb0;
extern __int64 GameData_21eceb8;
extern __int64 GameData_21ecec0;
extern __int64 GameData_21ecec8;
extern __int64 GameData_21eced0;
extern __int64 GameData_21eced8;
extern __int64 GameData_21ecee0;
extern __int64 GameData_21ecee8;
extern __int64 GameData_21ecef0;
extern __int64 GameData_21ecef8;
extern __int64 GameData_21ecf00;
extern __int64 GameData_21ecf08;
extern __int64 GameData_21ecf10;
extern __int64 GameData_21ecf18;
extern __int64 GameData_21ecf20;
extern __int64 GameData_21ecf28;
extern __int64 GameData_21ecf30;
extern __int64 GameData_21ecf38;
extern __int64 GameData_21ecf40;
extern __int64 GameData_21ecf48;
extern __int64 GameData_21ecf50;
extern __int64 GameData_21ecf58;
extern __int64 GameData_21ecf60;
extern __int64 GameData_21ecf68;
extern __int64 GameData_21ecf70;
extern __int64 GameData_21ecf78;
extern __int64 GameData_21ecf80;
extern __int64 GameData_21ecf88;
extern __int64 GameData_21ecf90;
extern __int64 GameData_21ecf98;
extern __int64 GameData_21ecfa0;
extern __int64 GameData_21ecfa8;
extern __int64 GameData_21ecfb0;
extern __int64 GameData_21ecfb8;
extern __int64 GameData_21ecfc0;
extern __int64 GameData_21ecfc8;
extern __int64 GameData_21ecfd0;
extern __int64 GameData_21ecfd8;
extern __int64 GameData_21ecfe0;
extern __int64 GameData_21ecfe8;
extern __int64 GameData_21ecff0;
extern __int64 GameData_21ecff8;
extern __int64 GameData_21ed000;
extern __int64 GameData_21ed008;
extern __int64 GameData_21ed010;
extern __int64 GameData_21ed018;
extern __int64 GameData_21ed020;
extern __int64 GameData_21ed028;
extern __int64 GameData_21ed030;
extern __int64 GameData_21ed038;
extern __int64 GameData_21ed040;
extern __int64 GameData_21ed048;
extern __int64 GameData_21ed050;
extern __int64 GameData_21ed058;
extern __int64 GameData_21ed060;
extern __int64 GameData_21ee1b0;
extern __int64 GameData_21ee1b8;
extern __int64 GameData_21ee1c0;
extern __int64 GameData_21ee1d0;
extern __int64 GameData_21ee1d8;
extern __int64 GameData_21ee1e0;
extern __int64 GameData_21ee1e8;
extern __int64 GameData_21ee1f0;
extern __int64 GameData_21ee1f8;
extern __int64 GameData_21ee200;
extern __int64 GameData_21ee208;
extern __int64 GameData_21ee210;
extern __int64 GameData_21ee218;
extern __int64 GameData_21ee220;
extern __int64 GameData_21ee248;
extern __int64 GameData_21ee250;
extern __int64 GameData_21eea58;
extern __int64 GameData_21f8040;
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_cmdbtl_ProcCmdBtlSeqView_instance_;
extern __int64 game_g_empty_item;
extern __int64 game_g_game_setting;
extern __int64 game_gmap_GmapClock_kDefaultTime;
extern __int64 game_map_Action_targets_;
extern __int64 game_map_Action_units_;
extern __int64 game_map_g_hint_data;
extern __int64 game_script_unit_g_damage_sequence;
extern __int64 game_sound_g_game_sound;
extern char GameData_1a9f09e;
extern char GameData_1b37730[2];
extern char GameData_21caa70;
extern char GameData_21ec695[];
extern int (*GameData_212ce38)[29];
extern int* GameData_212ce48[4];
extern int* GameData_212ce60;
extern int* GameData_212d1c8[8];
extern int* GameData_212d1f0[3];
extern int* GameData_212d2b0[2];
extern int* GameData_212d2f8[2];
extern int* GameData_212d4c0[3];
extern int* GameData_212de70[9];
extern int* GameData_212eb58;
extern int* GameData_212fb98[7];
extern int GameData_21668c8;
extern int GameData_21ca200;
extern int GameData_21caa04;
extern int GameData_21caa68;
extern int GameData_21cfa60;
extern int GameData_21cfa64;
extern int GameData_21d989c;
extern int GameData_21d98a4;
extern int GameData_21d98ec;
extern int GameData_21ec584;
extern int GameData_21ee1c8;
extern int GameData_21ee228;
extern int game_menu_bmap_config_index;
extern unsigned __int8 GameData_1b59c6a[13];
float game_UnitSkillList_GetTotalRatio(_QWORD*, __int64*);
int* GameRoutine_855640_alt1(int*, int*, int*, int*,
                             int*) __asm__("GameRoutine_855640");
unsigned __int64 Dir_70eb90(__int16*);
unsigned __int64 GameRoutine_6b98c0(__int64, char);
unsigned __int64 GameRoutine_6ec020(unsigned __int64 result);
unsigned int* GameRoutine_842b40(unsigned int* result, unsigned __int64*);
void GameRoutine_80ecf0();
void GameRoutine_821570();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD) __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_67afd0();
void __attribute__((noreturn)) GameRoutine_6bddd0(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e56b0();
void game_map_fe96c0(__int64);
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void snd_Fade_Fade_10c910(__int64, int);
_QWORD* game_65c4a0_alt1(_QWORD* result, unsigned __int64* a2,
                         __int64 a3) __asm__("game_65c4a0");
__int64 game_65cef0();
_QWORD* game_660c40(_QWORD* result);
__int64 game_67ec40(__int64 result);
__int64 game_67ef00(__int64 result, __int64 a2, __int64 a3);
__int64 game_68e4c0(__int64 a1, _QWORD* a2);
__int64 game_68e930(__int64 result, __int64 a2);
__int64 game_68eb90(_BYTE* a1, __int64 a2);
__int64 game_68ee30(__int64 a1, __int64 a2);
__int64 game_68efa0(__int64 a1, __int64 a2);
unsigned int* game_6b7f00(unsigned int* a1, unsigned __int64 a2,
                          unsigned int* a3, __int64 a4, _QWORD* a5);
_QWORD* game_6b83e0(_QWORD* result, __int64 a2, __int64 a3, __int64 a4,
                    __int64 a5, __int64 a6);
__int64 game_6b8c20(unsigned __int8* a1, __int64 a2);
__int64 game_6b9400();
__int64 game_6c4d60(__int64 a1);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64 a1);
__int64 game_6d32c0(__int64 result, __int64 a2, int a3, int a4, char a5,
                    __int64 a6, __int64 a7, __int64 a8);
__int64 game_6d3520(__int64 result, __int64 a2, int a3, int a4, char a5,
                    __int64 a6, __int64 a7, __int64 a8);
__int64 game_6d7270(__int64 a1, __int64 a2, int a3);
unsigned __int64* game_6e4de0(unsigned __int64* result);
__int64 game_6e50e0(__int64 result);
void game_6e8720(__int64 a1, __int64 a2);
void game_6e8960(__int64 a1, __int64 a2);
void game_6ea140();
bool game_6ecba0(__int64 a1);
__int64 game_6ecd40(__int64 a1);
bool game_6ed370(__int64 a1);
__int64 game_6ed580(__int64 a1, __int64 a2);
__int64 game_6ed690(__int64 a1, __int64 a2);
__int64 game_6fbae0(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_70d530(PSEUDO_X8 x8_, __int64 result);
__int64 game_716f20_alt1() __asm__("game_716f20");
__int64 game_721330();
__int64 game_723200(__int64 result);
double game_7305a0(__int64 a1);
char* game_7408a0(char* result, char* a2, unsigned __int64 a3, __int64* a4,
                  __int64 a5);
_QWORD* game_741260(_QWORD* result, const char* a2, int a3);
__n128 game_7a7da0(float32x4_t* a1, float32x4_t* a2);
__int64 game_7fbb60(__int64 a1, __int64 a2, unsigned __int8* a3, int a4);
bool game_8007e0(__int64* a1, __int64 a2, char a3);
__int64 game_800f30(__int64 a1, unsigned __int8* a2);
__int64 game_809ba0(__int64 a1, float a2);
__int64 game_809dc0(__int64 a1, _QWORD* a2, long double a3);
void game_80a2a0(float a1);
bool game_80a5b0();
__int64 game_80a680(__int64 result, __n128 a2);
__int64 game_80a760(int a1, long double a2);
__int64 game_80a790(int a1, long double a2);
__attribute__((swiftcall)) void game_80c770(PSEUDO_X8 x8_, __int64 result);
__attribute__((swiftcall)) void game_80c7f0(PSEUDO_X8 x8_, __int64 result);
__int64 game_80cdc0();
void game_80e8e0(__int64 a1);
__int64* game_810000_alt1(const char* a1, const char* a2, int a3,
                          char a4) __asm__("game_810000");
__attribute__((swiftcall)) void game_810a70(PSEUDO_X8 x8_, __int64 result,
                                            _BYTE* a2, float a4);
__int64 game_810d20(__int64 a1, float a2);
__int64 game_811270(__int64 result, const char* a2);
__int64 game_811f20(unsigned __int8 a1);
__int64* game_820d50(int a1);
__int64* game_821090(int a1);
void game_821840();
__int64* game_8224a0(unsigned __int8 a1);
__int64 game_82cfe0(__int64 a1, __int16* a2);
unsigned __int64 game_853060(unsigned __int64 result, int* a2, __int64 a3,
                             char a4);
int* game_855190(int* result, int* a2, int* a3);
bool game_855ec0(int* a1, int* a2);
bool game_857500(__int64* a1, __int64* a2);
__int64 game_85a340();
bool game_8680c0();
double game_868350();
bool game_868630();
__int16* game_8697c0(__int16* result, char a2, float a3);
__attribute__((swiftcall)) void game_8c50a0(PSEUDO_X8, _DWORD*);
__int64 game_8007e0_alt1(__int64*, __int64, char) __asm__("game_8007e0");
__attribute__((swiftcall)) void game_800620(PSEUDO_X8 x8_, __int64 result);
char* game_803620(char* result, char* a2, char* a3, __int64 a4, __int64 a5,
                  char* a6, __int64 a7);
_QWORD* EventManagerBase_Unknown2_alt1(_QWORD* result) __asm__(
    "EventManagerBase_Unknown2");
__int64 Camera_7be4c0_alt1(__int64, __int64) __asm__("Camera_7be4c0");
__int64 GameHr_729040(_QWORD*);
__int64 GameHr_960540();
__int64 GameRoutine_1273480_alt1() __asm__("GameRoutine_1273480");
__int64 GameRoutine_7475c0_alt1(__int64) __asm__("GameRoutine_7475c0");
__int64 GameRoutine_7bbe90_alt1() __asm__("GameRoutine_7bbe90");
__int64 GameRoutine_823d90_alt1(__int64) __asm__("GameRoutine_823d90");
__int64 GameRoutine_f06390_alt1(__int64, __int64) __asm__("GameRoutine_f06390");
__int64 GameRoutine_f51010_alt1(__int64 result) __asm__("GameRoutine_f51010");
__int64 GameRoutine_fe9550_alt1(__int64) __asm__("GameRoutine_fe9550");
__int64 Image_729780_alt1(__int64) __asm__("Image_729780");
__int64 MapInfo_825040_alt1(__int64, int) __asm__("MapInfo_825040");
__int64 Trick_7ca860_alt1(__int64) __asm__("Trick_7ca860");
__int64
game_map_Situation_Clear_alt1(__int64) __asm__("game_map_Situation_Clear");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
bool GameHr_6b3be0(const char*, const char*);
extern __int64 GameData_212cc70_alt1[57] __asm__("GameData_212cc70");
extern __int64 GameData_212ce28_alt1[2] __asm__("GameData_212ce28");
long double Camera_b3ac00_alt1(__int64) __asm__("Camera_b3ac00");
void Drawer_9647c0_alt1(__int64) __asm__("Drawer_9647c0");
void GameHr_17ccc20(__int64, char, char);
void GameHr_7c89e0(_QWORD*);
void GameRoutine_6b98c0_alt1(const char*, char) __asm__("GameRoutine_6b98c0");
void GameRoutine_71fb20_alt1(__int64*) __asm__("GameRoutine_71fb20");
void GameRoutine_720280_alt1(__int64*) __asm__("GameRoutine_720280");
void GameRoutine_7209e0_alt1(__int64*) __asm__("GameRoutine_7209e0");
void GameRoutine_73b640_alt1() __asm__("GameRoutine_73b640");
void GameRoutine_743760_alt1(__int64) __asm__("GameRoutine_743760");
void GameRoutine_772ce0_alt1(__int64, _QWORD*) __asm__("GameRoutine_772ce0");
void GameRoutine_77b600_alt1(__int64) __asm__("GameRoutine_77b600");
void GameRoutine_9ba840_alt1(__int64*) __asm__("GameRoutine_9ba840");
void Impl_12262c0_alt1(__int64) __asm__("Impl_12262c0");
void MapDrawManager_f02ec0_alt1(__int64) __asm__("MapDrawManager_f02ec0");
void MapTransition_823980_alt1(__int64,
                               _QWORD*) __asm__("MapTransition_823980");
void Situation_7647e0_alt1(__int64, char) __asm__("Situation_7647e0");
void game_graphics_ObjectTransparent_Run_alt1(float32x4_t*, char) __asm__(
    "game_graphics_ObjectTransparent_Run");
void game_716f20();
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64
snd_Fade_Fade_10cb00_alt1(__int64,
                          unsigned __int8*) __asm__("snd_Fade_Fade_10cb00");
__int64 snd_a290c0(__int64 result, const char*, __int64, int, char, float);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* game_65c4a0(_QWORD* result, unsigned __int64* a2);
void game_810000(const char* a1, const char* a2, int a3, char a4);

_QWORD* game_65c4a0(_QWORD* result, unsigned __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64** v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;

  v2 = result[2];
  if (v2 != 0 && result[4] != 0) {
    v4 = *a2;
    v5 = v2 - 1;
    if ((v2 & (v2 - 1)) != 0) {
      v6 = *a2;
      if (v4 >= v2) {
        v6 = v4 % v2;
      }
    }
    else {
      v6 = v4 & v5;
    }
    v7 = *(_QWORD**)(result[1] + 8 * v6);
    if (v7 != nullptr) {
      v8 = (_QWORD*)*v7;
      if (v8 != nullptr) {
        if ((v2 & v5) == 0) {
          while (1) {
            v10 = v8[1];
            if (v10 == v4) {
              if (v8[2] == v4) {
                goto LABEL_25;
              }
            }
            else if ((v10 & v5) != v6) {
              return result;
            }
            v8 = (_QWORD*)*v8;
            if (v8 == nullptr) {
              return result;
            }
          }
        }
        do {
          v9 = v8[1];
          if (v9 == v4) {
            if (v8[2] == v4) {
            LABEL_25:
              v11 = result + 1;
              v12 = v11[1];
              if (v12 == 0 || v11[3] == 0) {
                return nullptr;
              }
              v14 = *a2;
              v15 = v12 - 1;
              if ((v12 & (v12 - 1)) != 0) {
                v16 = *a2;
                if (v14 >= v12) {
                  v16 = v14 % v12;
                }
              }
              else {
                v16 = v14 & v15;
              }
              v17 = *v11;
              v18 = *(__int64***)(*v11 + 8 * v16);
              if (v18 == nullptr) {
                return nullptr;
              }
              v19 = *v18;
              if (*v18 == nullptr) {
                return nullptr;
              }
              if ((v12 & v15) == 0) {
                while (1) {
                  v21 = v19[1];
                  if (v21 == v14) {
                    if (v19[2] == v14) {
                      goto LABEL_52;
                    }
                  }
                  else if ((v21 & v15) != v16) {
                    return nullptr;
                  }
                  v19 = (__int64*)*v19;
                  if (v19 == nullptr) {
                    return nullptr;
                  }
                }
              }
              while (1) {
                v20 = v19[1];
                if (v20 == v14) {
                  if (v19[2] == v14) {
                  LABEL_52:
                    if ((v12 & v15) != 0) {
                      if (v14 >= v12) {
                        v14 %= v12;
                      }
                    }
                    else {
                      v14 &= v15;
                    }
                    v22 = *(__int64**)(v17 + 8 * v14);
                    do {
                      v23 = v22;
                      v22 = (__int64*)*v22;
                    } while (v22 != v19);
                    if (v23 == v11 + 2) {
                      goto LABEL_69;
                    }
                    v24 = v23[1];
                    if ((v12 & v15) != 0) {
                      if (v24 >= v12) {
                        v24 %= v12;
                      }
                    }
                    else {
                      v24 &= v15;
                    }
                    if (v24 != v14) {
                    LABEL_69:
                      if (*v19 == 0) {
                        goto LABEL_70;
                      }
                      v25 = *(_QWORD*)(*v19 + 8);
                      if ((v12 & v15) != 0) {
                        if (v25 >= v12) {
                          v25 %= v12;
                        }
                      }
                      else {
                        v25 &= v15;
                      }
                      if (v25 != v14) {
                      LABEL_70:
                        *(_QWORD*)(v17 + 8 * v14) = 0;
                      }
                    }
                    v26 = *v19;
                    if (*v19 != 0) {
                      v27 = *(_QWORD*)(v26 + 8);
                      if ((v12 & v15) != 0) {
                        if (v27 >= v12) {
                          v27 %= v12;
                        }
                      }
                      else {
                        v27 &= v15;
                      }
                      if (v27 != v14) {
                        *(_QWORD*)(*v11 + 8 * v27) = v23;
                        v26 = *v19;
                      }
                    }
                    *v23 = v26;
                    *v19 = 0;
                    --v11[3];
                    v28 = 128;
                    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                      v28 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        fw_memory_g_heap_manager + v28, (__int64)v19);
                    return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
                  }
                }
                else {
                  if (v20 >= v12) {
                    v20 %= v12;
                  }
                  if (v20 != v16) {
                    return nullptr;
                  }
                }
                v19 = (__int64*)*v19;
                if (v19 == nullptr) {
                  return nullptr;
                }
              }
            }
          }
          else {
            if (v9 >= v2) {
              v9 %= v2;
            }
            if (v9 != v6) {
              return result;
            }
          }
          v8 = (_QWORD*)*v8;
        } while (v8 != nullptr);
      }
    }
  }
  return result;
}

__int64 game_65cef0()
{
  GameData_21c6980 = 0;
  GameData_21c6988 = (__int64)&GameData_1a9f09e;
  GameData_21c6990 = 0;
  GameData_21c6998 = (__int64)&GameData_1a9f09e;
  GameData_21c69a0 = 0;
  GameData_21c69a8 = 0;
  GameData_21c69b0 = 0;
  return GameRoutine_2b0();
}

_QWORD* game_660c40(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
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

  v1 = (_QWORD*)result[1];
  v2 = (_QWORD*)result[2];
  v3 = result;
  if (v2 == v1) {
    v4 = result + 5;
    v2 = (_QWORD*)result[1];
  }
  else {
    v4 = result + 5;
    v5 = result[4];
    v6 = &v1[v5 / 0x66];
    v7 = (__int64*)(*v6 + 40 * (v5 % 0x66));
    v8 = v1[(result[5] + v5) / 0x66] + 40 * ((result[5] + v5) % 0x66);
    if (v7 != (__int64*)v8) {
      v9 = fw_memory_g_heap_manager_ptr;
      do {
        v10 = (_QWORD*)v7[2];
        if (v10 != nullptr) {
          do {
            v11 = (_QWORD*)*v10;
            if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)v9 + v12, v10);
            v10 = v11;
          } while (v11 != nullptr);
        }
        v13 = *v7;
        *v7 = 0;
        if (v13 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)v9 + v14, v13);
        }
        v7 += 5;
        if ((_UNKNOWN*)((char*)v7 - *v6) == ((_UNKNOWN*)0xFF0LL)) {
          v15 = (__int64*)v6[1];
          ++v6;
          v7 = v15;
        }
      } while (v7 != (__int64*)v8);
      v1 = (_QWORD*)v3[1];
      v2 = (_QWORD*)v3[2];
    }
  }
  *v4 = 0;
  v16 = v2 - v1;
  if (v16 >= 3) {
    v17 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)v17 + v18, *v1);
        v1 = (_QWORD*)v3[1];
        v2 = (_QWORD*)v3[2];
      }
      v3[1] = ++v1;
      v16 = v2 - v1;
    } while (v16 > 2);
  }
  if (v16 == 1) {
    v19 = 51;
  }
  else {
    if (v16 != 2) {
      return result;
    }
    v19 = 102;
  }
  v3[4] = v19;
  return result;
}

__int64 game_67ec40(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;

  if (result != 0) {
    v1 = *(_QWORD*)(result + 392);
    if (v1 != 0) {
      v2 = result;
      result = *(unsigned __int8*)(v1 + 440);
      if (*(_BYTE*)(v1 + 440) == 0) {
        v3 = v2;
        v4 = game_g_shared_system_skills_ptr;
        v5 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x110LL) +
                        game_g_shared_system_skills_ptr) &
             0xFFF;
        if ((game_HasSkill((_QWORD*)(v2 + 1744), (unsigned int*)&v5) & 1) !=
            0) {
          return 6;
        }
        else {
          v5 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x10CLL) + v4) & 0xFFF;
          if ((game_HasSkill((_QWORD*)(v3 + 1744), (unsigned int*)&v5) & 1) !=
              0) {
            return 5;
          }
          else {
            v5 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x108LL) + v4) & 0xFFF;
            if ((game_HasSkill((_QWORD*)(v3 + 1744), (unsigned int*)&v5) & 1) !=
                0) {
              return 4;
            }
            else {
              v5 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xFCLL) + v4) & 0xFFF;
              return game_HasSkill((_QWORD*)(v3 + 1744), (unsigned int*)&v5) &
                     1;
            }
          }
        }
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 game_67ef00(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;

  if (a2 != 0) {
    v3 = *(_QWORD*)(result + 24);
    v4 = *(__int64**)(v3 + 928);
    v5 = *(__int64**)(v3 + 936);
    if (v4 != v5) {
      v8 = game_g_shared_system_skills_ptr;
      do {
        v9 = *v4;
        if (*(_BYTE*)(*(_QWORD*)(*v4 + 24) + 48LL) != 1 ||
            (v11 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x204LL) + v8) & 0xFFF,
             ((result =
                   game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v11)) &
              1) == 0)) {
          result = GameRoutine_83d720(v9, a2);
          if ((result & 1) != 0) {
            v10 = *(_QWORD*)(a3 + 32);
            v12 = v9;
            if (v10 == 0) {
              GameRoutine_60a310();
            }
            result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v10 + 48LL))(
                v10, &v12);
          }
        }
        ++v4;
      } while (v4 != v5);
    }
  }
  return result;
}

__int64 game_68e4c0(__int64 a1, _QWORD* a2)
{
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char v8;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;

  if (a2 == nullptr) {
    return 0;
  }
  v4 = (_QWORD*)(*(_QWORD*)(game_Unit_GetJob((__int64)a2) + 24) + 576LL);
  v13 = *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) +
                   (_QWORD)GameData_212d328 + 4) &
        0xFFF;
  if ((game_HasSkill(v4, (unsigned int*)&v13) & 1) != 0) {
    v5 = **(_QWORD**)(a1 + 24);
    v6 = *(unsigned int*)((char*)((_UNKNOWN*)0x198LL) +
                          game_g_shared_system_skills_ptr);
    if (((v6 >> 5) & 0x7F) + 1 > (*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL) - v5) >>
            2 ||
        ((*(_DWORD*)(v5 + 4 * ((v6 >> 5) & 0x7F)) >> v6) & 1) == 0) {
      return 0;
    }
  }
  v7 = a2[55];
  v8 = v7 != 0 ? *(_BYTE*)(v7 + 16) : 9;
  if (((*(unsigned __int8*)(a1 + 61) >> v8) & 1) == 0) {
    return 0;
  }
  v10 = *(_QWORD*)(a1 + 192);
  if (v10 == 0) {
    return 1;
  }
  v11 = *(unsigned __int16*)(v10 + 16);
  v12 = a2[218];
  if (((v11 >> 5) & 0x7F) + 1 <= (a2[219] - v12) >> 2) {
    return (*(_DWORD*)(v12 + 4 * ((v11 >> 5) & 0x7F)) >> v11) & 1;
  }
  else {
    return 0;
  }
}

__int64 game_68e930(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (*v12)(_QWORD);
  __int64 v13;
  _QWORD* v14;
  int v15;
  int v16;

  if (a2 != 0 && *(_QWORD*)(result + 304) != 0 && *(int*)(a2 + 592) <= 1) {
    v2 = result;
    v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x80LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v16) & 1) != 0 ||
        (game_68e4c0(v2, (_QWORD*)a2) & 1) == 0) {
      return v2;
    }
    else {
      result = v2;
      if (*(_QWORD*)(v2 + 304) != 0) {
        v4 = *(_QWORD*)(v2 + 272);
        if (v4 == 0 ||
            (v15 = *(_WORD*)(v4 + 16) & 0xFFF,
             v5 = game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v15),
             result = v2, (v5 & 1) != 0)) {
          if (*(_WORD*)(result + 280) == 0) {
            return *(_QWORD*)(result + 304);
          }
          v6 = *(_QWORD*)(result + 24);
          v7 = *(_QWORD*)(v6 + 480);
          v8 = *(_QWORD*)(v6 + 488);
          if (v8 == v7) {
            return *(_QWORD*)(result + 304);
          }
          else {
            while (1) {
              v9 = *(_QWORD*)v7;
              if (*(_QWORD*)v7 != 0) {
                v10 = game_GameModeData_instance_;
                if (game_GameModeData_instance_ != 0) {
                  v11 = game_GameVariableTable_Find(
                      *(_QWORD**)(game_GameModeData_instance_ + 48),
                      (unsigned __int64*)v7);
                  if (v11 != 0) {
                    v12 = *(__int64 (**)(_QWORD))(v11 + 72);
                    v13 = *(_QWORD*)(v11 + 80);
                    v14 = (_QWORD*)(v11 + (v13 >> 1));
                    if ((v13 & 1) != 0) {
                      v12 = *(__int64 (**)(_QWORD))((char*)v12 + *v14);
                    }
                    LOBYTE(v9) = v12(v14);
                  }
                  else {
                    LOBYTE(v9) = 1;
                  }
                  result = v2;
                }
                if (*(_BYTE*)(v7 + 16) != ((v10 == 0) | v9 & 1)) {
                  break;
                }
              }
              v7 += 24;
              if (v7 == v8) {
                return *(_QWORD*)(result + 304);
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 game_68eb90(_BYTE* a1, __int64 a2)
{
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  unsigned int v8;
  char v9;
  int v10;
  int v11;
  _BYTE v12[4];
  _BYTE v13[4];

  if (a2 == 0) {
    return 0;
  }
  if (*(int*)(a2 + 592) > 1) {
    return 0;
  }
  v4 = game_g_shared_system_skills_ptr;
  v11 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x7CLL) +
                   game_g_shared_system_skills_ptr + 4) &
        0xFFF;
  if ((game_HasSkill_alt1(a2 + 1744, &v11) & 1) != 0 ||
      (game_68e4c0_alt1(a1, a2) & 1) == 0) {
    return 0;
  }
  result = (char)a1[66] & (unsigned int)~((char)a1[66] >> 31);
  if ((char)a1[67] >= 1) {
    v12[0] = 0;
    result =
        (unsigned int)((int)(game_Unit_GetParam(a2, v12, 1) * (char)a1[67]) /
                           100 +
                       result);
  }
  v6 = (char)a1[68];
  if (v6 >= 1) {
    v7 = (1374389535LL * *(__int16*)(a2 + 492) * v6) >> 37;
    result = (unsigned int)v7 + ((unsigned int)v7 >> 31) + (unsigned int)result;
  }
  if (a1[57] == 8) {
    v8 = result;
    v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xFCLL) + v4) & 0xFFF;
    v9 = game_HasSkill_alt1(a2 + 1744, &v10);
    result = v8;
    if ((v9 & 1) != 0) {
      v13[0] = 0;
      return (unsigned int)((int)game_Unit_GetParam(a2, v13, 1) / 2);
    }
  }
  return result;
}

__int64 game_68ee30(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  char v6;
  __int64* v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;

  if (a2 == 0) {
    return 0;
  }
  if (*(int*)(a2 + 592) > 1) {
    return 0;
  }
  v4 = game_g_shared_system_skills_ptr;
  v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x80LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v12) & 1) != 0 ||
      (game_68e4c0(a1, (_QWORD*)a2) & 1) == 0) {
    return 0;
  }
  v5 = *(_QWORD*)(a2 + 440);
  v6 = v5 != 0 ? *(_BYTE*)(v5 + 16) : 9;
  if (((1 << v6) & 0xF1) == 0) {
    return 0;
  }
  v8 = game_820d50(2);
  if (game_GameModeData_instance_ != 0) {
    v9 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v8);
    if (v9 != 0 && *(_DWORD*)(v9 + 32) != 0) {
      return 0;
    }
  }
  v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xDCLL) + v4) & 0xFFF;
  game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v12);
  v10 = *(char*)(a1 + 69);
  v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x160LL) + v4) & 0xFFF;
  if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v12) & 1) != 0 ||
      (v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xCCLL) + v4) & 0xFFF,
       (game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v12) & 1) != 0)) {
    v11 = 0;
  }
  else {
    v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xCCLL) + v4 + 4) & 0xFFF;
    if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v12) & 1) != 0) {
      v11 = -1;
    }
    else {
      v11 = 1;
    }
  }
  return (unsigned int)(v11 * v10);
}

__int64 game_68efa0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  __int64 v19;

  v2 = *(_QWORD*)(a1 + 104);
  if (v2 == 0) {
    return 0;
  }
  if (a2 == 0) {
    return *(_QWORD*)(v2 + 8);
  }
  v4 = *(unsigned __int16*)(a1 + 96);
  if (*(_WORD*)(a1 + 96) == 0) {
    return *(_QWORD*)(v2 + 8);
  }
  v6 = 8;
  v7 = GameData_212c878[0];
  v8 = game_map_MapRandom_instance__ptr[0];
  while (1) {
    v9 = *(_QWORD*)(a1 + 104);
    v19 = 0;
    v10 = *(_QWORD*)(v9 + v6);
    if (v10 != 0) {
      v11 = *v7;
      v12 = *(unsigned __int16*)(v10 + 16);
      HIDWORD(v19) = 1;
      v13 = *(_QWORD*)(v11 + 64);
      LOWORD(v19) = v12;
      if (*(_BYTE*)(*(_QWORD*)(v13 + 8 * v12) + 73LL) == 17) {
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
        HIDWORD(v19) =
            (16 * ((_WORD)v17 -
                   1000 * (unsigned __int16)((v17 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
    }
    if (UnitItem_6e8bc0((unsigned __int16*)&v19, a2)) {
      break;
    }
    --v4;
    v6 += 16;
    if (v4 == 0) {
      v2 = *(_QWORD*)(a1 + 104);
      return *(_QWORD*)(v2 + 8);
    }
  }
  return v10;
}

unsigned int* game_6b7f00(unsigned int* a1, unsigned __int64 a2,
                          unsigned int* a3, __int64 a4, _QWORD* a5)
{
  unsigned int* v5;
  unsigned __int64 v6;
  int* v9;
  __int64 v10;
  unsigned __int8* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned int* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  unsigned __int8* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int8* v32;
  __int64 v34;
  struct {
    unsigned int* v35;
    unsigned __int64 v36;
  } v35_;
  unsigned int* v37[2];

  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = a1;
  v35_.v35 = a1;
  v35_.v36 = a2;
  if (a2 == a4) {
    return v5;
  }
  v6 = *a1;
  v9 = (int*)GameData_212ce38;
  if (a2 >= v6) {
    v12 = __clz(a2 - v6 + 16);
    v10 = 28 - v12;
    v11 =
        (unsigned __int8*)(*(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * (27 - v12) + 8) +
                           32LL *
                               (unsigned int)(a2 - v6 -
                                              (*GameData_212ce38)[28 - v12]));
  }
  else {
    v10 = 0;
    v11 = (unsigned __int8*)(*((_QWORD*)a1 + 1) + 32 * a2);
  }
  v13 = *a3;
  v14 = (unsigned int*)(a4 - 1);
  if (a4 - 1 < v13) {
    v15 = *((_QWORD*)a3 + 1) + 32LL * (_QWORD)v14;
    if (v10 != 0) {
      goto LABEL_7;
    }
  LABEL_10:
    v18 = v15 + 32;
    v19 = 0;
    goto LABEL_14;
  }
  v17 = __clz((_DWORD)v14 - v13 + 16);
  v15 =
      *(_QWORD*)(*((_QWORD*)a3 + 2) + 8 * (27 - v17) + 8) +
      32LL * (unsigned int)((_DWORD)v14 - v13 - (*GameData_212ce38)[28 - v17]);
  if (v10 == 28 - v17) {
    goto LABEL_10;
  }
LABEL_7:
  if (v10 != 0) {
    v6 = 8LL << v10;
    v16 = *(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * v10);
  }
  else {
    v16 = *((_QWORD*)a1 + 1);
  }
  v18 = v16 + 32 * v6;
  v19 = 0;
  do {
  LABEL_14:
    if (v11 == (unsigned __int8*)v18) {
      v37[0] = a3;
      v37[1] = v14;
      v25 = GameRoutine_6b7180(v37),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v34 = v26;
      v27 = *v35_.v35;
      v28 = 28LL - __clz(v35_.v36 - v27 + 16);
      v29 = v35_.v36 >= v27 ? v28 : 0LL;
      if (v29 == v25) {
        return a3;
      }
      v30 = v25;
      v35_.v36 = (unsigned int)v9[v29 + 1] + v27;
      v31 = GameRoutine_6b7180(&v35_.v35),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v11 = v32;
      if (v31 == v30) {
        v18 = v34 + 32;
      }
      else {
        v18 = v31 != 0
                  ? *(_QWORD*)(*((_QWORD*)v35_.v35 + 2) + 8 * (v31 - 1) + 8) +
                        32 * (16LL << ((unsigned __int8)v31 - 1))
                  : *((_QWORD*)v35_.v35 + 1) + 32LL * *v35_.v35;
      }
      if ((unsigned __int8*)v18 == v32) {
        return a3;
      }
    }
  } while (v11 == (unsigned __int8*)v18);
  v20 = -v19;
  while (1) {
    v21 = *v11;
    if ((v21 & 0x7F) == 6) {
      v22 = a5[1];
      v23 = v21 == 134 ? v11[1] : *((unsigned int*)v11 + 1);
      if (v22 == v23) {
        v24 = v21 == 6 ? *((unsigned __int8**)v11 + 1) : v11 + 2;
        if ((unsigned int)memcmp(*a5, v24, v22) == 0) {
          return v5;
        }
      }
    }
    v11 += 32;
    --v20;
    if (v11 == (unsigned __int8*)v18) {
      v19 = -v20;
      goto LABEL_14;
    }
  }
}

_QWORD* game_6b83e0(_QWORD* result, __int64 a2, __int64 a3, __int64 a4,
                    __int64 a5, __int64 a6)
{
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned int* v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  unsigned int* v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  bool v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  struct {
    __int64 v56[2];
    char* v57;
    __int64 v58;
  } v56_;
  _QWORD v59[2];

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = result[7] + result[6] - 1LL;
  v7 = *(_QWORD*)(*(_QWORD*)(result[3] + 8 * (v6 >> 9)) + 8 * (v6 & 0x1FF));
  if (v7 == 0) {
    return result;
  }
  v9 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(
        v56_.v56, *(_QWORD*)(a2 + 16), *(_QWORD*)(a2 + 8)),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v10 = *(_QWORD*)(a2 + 8);
    v56_.v56[0] = *(_QWORD*)a2;
    v56_.v56[1] = v10;
    v56_.v57 = *(char**)(a2 + 16);
  }
  if ((*(_BYTE*)v7 & 0x7F) != 8 ||
      ((v56_.v56[0] & 1) == 0 ? (v11 = (char*)v56_.v56 + 1) : (v11 = v56_.v57),
       v12 = strlen(v11), v13 = *(unsigned int**)(v7 + 1), v59[0] = v11,
       v59[1] = v12, result = game_6b7f00(v13, 0, v13, v13[1], v59),
       v14 == v13[1])) {
    v15 = 0;
    if ((v56_.v56[0] & 1) == 0) {
      goto LABEL_20;
    }
  LABEL_16:
    if (v56_.v57 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v56_.v57),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    goto LABEL_20;
  }
  v16 = *(unsigned int*)result;
  if (v14 >= v16) {
    v18 = v14 - v16;
    v19 = __clz(v18 + 16);
    v17 = *(_QWORD*)(result[2] + 8 * (27 - v19) + 8) +
          32LL * (unsigned int)(v18 - (*GameData_212ce38)[28 - v19]);
  }
  else {
    v17 = result[1] + 32 * v14;
  }
  v15 = v17 + 16;
  if ((v56_.v56[0] & 1) != 0) {
    goto LABEL_16;
  }
LABEL_20:
  if (v15 != 0 && (*(_BYTE*)v15 & 0x7F) == 7) {
    v21 = *(unsigned int**)(v15 + 1);
    v22 = *(_QWORD**)(a2 + 24);
    v23 = v22[1];
    v24 = v21[1];
    v25 = 0xAAAAAAAAAAAAAAABLL * ((v23 - *v22) >> 3);
    if (v24 <= v25) {
      if (v24 < v25) {
        v26 = *v22 + 24LL * (unsigned int)v24;
        if (v26 != v23) {
          v27 = v22[1];
          v28 = fw_memory_g_heap_manager_ptr;
          do {
            v29 = *(_BYTE*)(v27 - 24);
            v27 -= 24;
            if ((v29 & 1) != 0) {
              v30 = *(_QWORD*)(v23 - 8);
              if (v30 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) != 0) {
                  v31 = 128;
                }
                else {
                  v31 = 56;
                }
                result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)v28 + v31, v30),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            v23 = v27;
          } while (v27 != v26);
        }
        v22[1] = v26;
      }
    }
    else {
      result =
          GameRoutine_6b87d0(*(__int64**)(a2 + 24), v24 - v25, a3, a4, a5, a6),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v32 = v21[1];
    if ((_DWORD)v32 != 0) {
      v33 = 16 * v32;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      do {
        v37 = *v21;
        if (v36 >= v37) {
          v39 = v36 - v37;
          v40 = __clz(v39 + 16);
          v38 = *(_QWORD*)(*((_QWORD*)v21 + 2) + 8 * (27 - v40) + 8) +
                16LL * (unsigned int)(v39 - (*GameData_212ce38)[28 - v40]);
        }
        else {
          v38 = *((_QWORD*)v21 + 1) + v35;
        }
        v41 = v9[3];
        v42 = v9[4];
        v43 = ((v42 - v41) << 6) - 1;
        if (v42 == v41) {
          v43 = 0;
        }
        v44 = v9[7] + v9[6];
        if (v43 == v44) {
          GameRoutine_6b71e0(v9 + 2),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v41 = v9[3];
          v44 = v9[7] + v9[6];
        }
        *(_QWORD*)(*(_QWORD*)(v41 + 8 * (v44 >> 9)) + 8 * (v44 & 0x1FF)) = v38;
        ++v9[7];
        v45 = **(_QWORD**)(a2 + 24);
        LOWORD(v56_.v56[0]) = 0;
        v56_.v58 = v45 + v34;
        result = GameRoutine_6b8990(v9, v56_.v56),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((v56_.v56[0] & 1) != 0 && v56_.v57 != nullptr) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v46 = 128;
          }
          else {
            v46 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
              fw_memory_g_heap_manager + v46, v56_.v57),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v48 = v9[3];
        v47 = v9[4];
        v49 = v47 - v48;
        v50 = v47 == v48;
        v52 = v9[6];
        v51 = v9[7];
        v53 = (v49 << 6) - 1;
        if (v50) {
          v53 = 0;
        }
        v9[7] = v51 - 1;
        if ((unsigned __int64)(v53 - (v51 + v52) + 1) >= 0x400) {
          v54 = *(_QWORD*)(v47 - 8);
          if (v54 != 0) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v55 = 128;
            }
            else {
              v55 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
                fw_memory_g_heap_manager + v55, v54),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v47 = v9[4];
          }
          v9[4] = v47 - 8;
        }
        ++v36;
        v35 += 16;
        v34 += 24;
      } while (v33 != v35);
    }
  }
  return result;
}

__int64 game_6b8c20(unsigned __int8* a1, __int64 a2)
{
  int v2;
  __int64 v4;
  unsigned __int8* v5;
  char* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
    char* v19;
  } v17_;

  v2 = *a1;
  if ((v2 & 0x7F) == 6) {
    if (v2 == 134) {
      v4 = a1[1];
    }
    else {
      v4 = *((unsigned int*)a1 + 1);
    }
    if (v2 == 6) {
      v5 = *((unsigned __int8**)a1 + 1);
    }
    else {
      v5 = a1 + 2;
    }
    if ((unsigned int)v4 >= 0x17) {
      if ((v4 | 7) == 0x17) {
        v13 = 26;
      }
      else {
        v13 = (v4 | 7) + 1;
      }
      v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13,
                                                 16, 0);
      v17_.v18 = v4;
      v17_.v19 = v6;
      v17_.v17 = v13 | 1;
    }
    else {
      LOBYTE(v17_.v17) = 2 * v4;
      v6 = (char*)&v17_.v17 + 1;
      if ((_DWORD)v4 == 0) {
      LABEL_18:
        v6[v4] = 0;
        result = 0;
        v9 = v17_.v18;
        v10 = v17_.v19;
        v8 = v17_.v17 & 0xFFFFFFFFFFFF0000LL;
        v7 = (unsigned __int16)v17_.v17 & 0xFF00;
        v11 = (unsigned __int8)v17_.v17;
        if ((*(_BYTE*)a2 & 1) == 0) {
          goto LABEL_23;
        }
        goto LABEL_19;
      }
    }
    memmove(v6, v5, v4);
    goto LABEL_18;
  }
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = nullptr;
  v11 = 0;
  result = 13;
  if ((*(_BYTE*)a2 & 1) != 0) {
  LABEL_19:
    v14 = *(_QWORD*)(a2 + 16);
    if (v14 != 0) {
      v15 = result;
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v14);
      result = v15;
    }
  }
LABEL_23:
  *(_QWORD*)a2 = v8 | v7 | v11;
  *(_QWORD*)(a2 + 8) = v9;
  *(_QWORD*)(a2 + 16) = v10;
  return result;
}

__int64 game_6b9400()
{
  GameData_21ca170 = 0;
  GameData_21ca178 = 0;
  GameData_21ca160 = 0;
  GameData_21ca168 = 0;
  GameData_21ca150 = 0;
  GameData_21ca158 = 0;
  GameData_21ca140 = 0;
  GameData_21ca148 = 0;
  GameData_21ca130 = 0;
  GameData_21ca138 = 0;
  GameData_21ca120 = 0;
  GameData_21ca128 = 0;
  GameData_21ca110 = 0;
  GameData_21ca118 = 0;
  GameData_21ca100 = 0;
  GameData_21ca108 = 0;
  GameData_21ca0f0 = 0;
  GameData_21ca0f8 = 0;
  GameData_21ca0e0 = 0;
  GameData_21ca0e8 = 0;
  GameData_21ca0d0 = 0;
  GameData_21ca0d8 = 0;
  game_map_g_hint_data = 0;
  GameRoutine_2b0();
  GameData_21ca180 = 0;
  GameData_21ca188 = 0;
  GameData_21ca190 = 0;
  GameData_21ca198 = 0;
  GameData_21ca1a0 = 0;
  GameData_21ca1a8 = 0;
  GameRoutine_2b0();
  GameData_21ca1b0 = 0;
  GameData_21ca1b8 = 0;
  GameData_21ca1c0 = 0;
  GameData_21ca1c8 = 0;
  GameData_21ca1d0 = 0;
  GameData_21ca1d8 = 0;
  GameData_21ca1e0 = 0;
  GameData_21ca1e8 = 0;
  GameData_21ca200 = 1065353216;
  GameData_21ca1f0 = 0;
  GameData_21ca1f8 = 0;
  return GameRoutine_2b0();
}

__int64 game_6c4d60(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  _BYTE* v8;
  _DWORD* v9;
  __int64 v10;
  _BYTE* v11;
  _BYTE* v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  _BYTE* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  _BYTE* v23;
  _DWORD* v24;
  __int64 v25;
  _BYTE* v26;
  _BYTE* v27;
  __int64 v28;
  _BYTE* v29;
  _BYTE* v30;
  _BYTE* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  int v38;

  *(_WORD*)(a1 + 2096) = 0;
  *(_BYTE*)(a1 + 2092) = 0;
  *(_DWORD*)(a1 + 584) = -1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca2d0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21ca2d0) != 0) {
    GameData_21ca2c8 = 1022;
    __cxa_guard_release(&GameData_21ca2d0);
  }
  v2 = *(_QWORD*)(a1 + 1776);
  v3 = *(_QWORD*)(a1 + 1784) - v2;
  if ((int)(v3 >> 2) < 1) {
    v6 = 0;
  }
  else {
    v4 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v3 & 0x1FFFFFFFCLL) == 4) {
      v5 = 0;
      v6 = 0;
    }
    else {
      v9 = (_DWORD*)(v2 + 4);
      v5 = 0;
      v6 = 0;
      do {
        v10 = *(_QWORD*)(v4 + 8LL * (*(v9 - 1) & 0xFFF));
        v11 = *(_BYTE**)(v10 + 864);
        if (v11 != nullptr && *v11 != 0) {
          ++v6;
        }
        else {
          v12 = *(_BYTE**)(v10 + 872);
          if (v12 != nullptr && *v12 != 0) {
            ++v6;
          }
        }
        v13 = *(_QWORD*)(v4 + 8LL * (*v9 & 0xFFF));
        v14 = *(_BYTE**)(v13 + 864);
        if (v14 != nullptr && *v14 != 0) {
          ++v6;
        }
        else {
          v15 = *(_BYTE**)(v13 + 872);
          if (v15 != nullptr && *v15 != 0) {
            ++v6;
          }
        }
        v5 += 2;
        v9 += 2;
      } while (((v3 >> 2) & 0x7FFFFFFE) != v5);
    }
    if ((v3 & 4) != 0) {
      v7 = *(_QWORD*)(v4 + 8LL * (*(_DWORD*)(v2 + 4 * v5) & 0xFFF));
      v8 = *(_BYTE**)(v7 + 864);
      if (v8 != nullptr && *v8 != 0) {
        ++v6;
      }
      else {
        v16 = *(_BYTE**)(v7 + 872);
        if (v16 != nullptr && *v16 != 0) {
          ++v6;
        }
      }
    }
  }
  if (GameRoutine_851060((__int64*)(a1 + 1360), &GameData_21ca2c8)) {
    game_Unit_Unknown6cd8f0((_WORD*)a1);
  }
  v17 = *(_QWORD*)(a1 + 1776);
  v18 = *(_QWORD*)(a1 + 1784) - v17;
  if ((int)(v18 >> 2) < 1) {
    v21 = 0;
  }
  else {
    v19 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v18 & 0x1FFFFFFFCLL) == 4) {
      v20 = 0;
      v21 = 0;
    }
    else {
      v24 = (_DWORD*)(v17 + 4);
      v20 = 0;
      v21 = 0;
      do {
        v25 = *(_QWORD*)(v19 + 8LL * (*(v24 - 1) & 0xFFF));
        v26 = *(_BYTE**)(v25 + 864);
        if (v26 != nullptr && *v26 != 0) {
          ++v21;
        }
        else {
          v27 = *(_BYTE**)(v25 + 872);
          if (v27 != nullptr && *v27 != 0) {
            ++v21;
          }
        }
        v28 = *(_QWORD*)(v19 + 8LL * (*v24 & 0xFFF));
        v29 = *(_BYTE**)(v28 + 864);
        if (v29 != nullptr && *v29 != 0) {
          ++v21;
        }
        else {
          v30 = *(_BYTE**)(v28 + 872);
          if (v30 != nullptr && *v30 != 0) {
            ++v21;
          }
        }
        v20 += 2;
        v24 += 2;
      } while (((v18 >> 2) & 0x7FFFFFFE) != v20);
    }
    if ((v18 & 4) != 0) {
      v22 = *(_QWORD*)(v19 + 8LL * (*(_DWORD*)(v17 + 4 * v20) & 0xFFF));
      v23 = *(_BYTE**)(v22 + 864);
      if (v23 != nullptr && *v23 != 0) {
        ++v21;
      }
      else {
        v31 = *(_BYTE**)(v22 + 872);
        if (v31 != nullptr && *v31 != 0) {
          ++v21;
        }
      }
    }
  }
  if (v21 != v6) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  v32 = *(_QWORD*)(a1 + 1680);
  if ((int)((unsigned __int64)(*(_QWORD*)(a1 + 1688) - v32) >> 2) >= 1) {
    v33 = *(_QWORD*)(a1 + 1648);
    *(_QWORD*)(a1 + 1688) = v32;
    v34 = *(_DWORD*)(a1 + 416);
    *(_DWORD*)(a1 + 1672) = 0;
    *(_QWORD*)(a1 + 1728) = 0;
    *(_QWORD*)(a1 + 1736) = 0;
    *(_QWORD*)(a1 + 1656) = v33;
    if ((v34 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v34 | 0x10000000;
      game_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      game_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  Unit_6d00c0(a1);
  UnitItemList_713480((unsigned __int16*)(a1 + 828));
  *(_QWORD*)(a1 + 1976) = 0;
  *(_QWORD*)(a1 + 2000) = 0;
  *(_QWORD*)(a1 + 2014) = 0xFFFFFFFFLL;
  v35 = *(_DWORD*)(a1 + 416);
  *(_QWORD*)(a1 + 1981) = 0;
  *(_QWORD*)(a1 + 2006) = 0;
  *(_QWORD*)(a1 + 1992) = 0;
  *(_BYTE*)(a1 + 2022) = 0;
  *(_BYTE*)(a1 + 2026) = 0;
  *(_BYTE*)(a1 + 2030) = 0;
  *(_WORD*)(a1 + 2024) = -1;
  *(_WORD*)(a1 + 2028) = -1;
  *(_WORD*)(a1 + 2032) = -1;
  *(_BYTE*)(a1 + 2034) = 0;
  *(_WORD*)(a1 + 2036) = -1;
  *(_BYTE*)(a1 + 2038) = 0;
  *(_WORD*)(a1 + 2040) = -1;
  *(_BYTE*)(a1 + 2042) = 0;
  *(_WORD*)(a1 + 2044) = -1;
  *(_BYTE*)(a1 + 2046) = 0;
  *(_WORD*)(a1 + 2048) = -1;
  *(_BYTE*)(a1 + 2050) = 0;
  *(_WORD*)(a1 + 2052) = -1;
  *(_BYTE*)(a1 + 2054) = 0;
  *(_WORD*)(a1 + 2056) = -1;
  *(_BYTE*)(a1 + 2058) = 0;
  *(_WORD*)(a1 + 2060) = -1;
  *(_BYTE*)(a1 + 2062) = 0;
  *(_WORD*)(a1 + 2064) = -1;
  *(_BYTE*)(a1 + 2066) = 0;
  *(_WORD*)(a1 + 2068) = -1;
  *(_BYTE*)(a1 + 2070) = 0;
  *(_WORD*)(a1 + 2072) = -1;
  *(_BYTE*)(a1 + 2074) = 0;
  *(_WORD*)(a1 + 2076) = -1;
  *(_BYTE*)(a1 + 2078) = 0;
  *(_WORD*)(a1 + 2080) = -1;
  *(_BYTE*)(a1 + 2082) = 0;
  *(_WORD*)(a1 + 2084) = -1;
  *(_DWORD*)(a1 + 416) = v35 & 0xFCFA407E;
  if (*(_WORD*)(a1 + 1964) != 0) {
    v36 = *GameData_212cec0;
    if (*(_QWORD*)(a1 + 1960) != *GameData_212cec0) {
      *(_QWORD*)(a1 + 1960) = v36;
      v38 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x124LL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      Unit_6cd120(a1, (v36 & 0xFFFF00000000LL) != 0, &v38);
    }
  }
  *(_BYTE*)(a1 + 2089) = 0;
  return Unit_6dfe00(a1, 0);
}

__int64 game_6c51e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  _DWORD* v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int* v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  int v58;
  int v59;
  int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  int* v68;
  __int64 v69;
  int v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  __int64 v75;
  __int64* v76;
  int* v77;
  __int64 v78;
  int v79;
  __int64 v80;
  int v81;
  int v82;
  int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  char v87;
  char v88;
  __int64 v89;
  unsigned int v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  _QWORD* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64* v100;
  _BYTE* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  char v108;
  __int64 v109;
  _QWORD* v110;
  int v111;
  __int16* v112;
  int v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64* v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 (*v127)(_QWORD);
  __int64 v128;
  _QWORD* v129;
  _QWORD* v130;
  int v131;
  __int64 v132;
  __int64 v133;
  char v134;
  _DWORD* v135;
  _QWORD* v136;
  __int64 v137;
  __int64 v138;
  __int64* v139;
  __int64 v140;
  __int64 v141;
  __int64* v142;
  unsigned __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64* v146;
  char v147;
  __int64 v148;
  char v149;
  unsigned int v150;
  bool v151;
  int v152;
  int v154;
  unsigned int v155;
  unsigned int v156;
  int v157;
  int v158;
  char v159;
  char v160;
  unsigned int v161;
  _QWORD* v162;
  __int64 v163;
  int v164;
  int v165;
  int v166;
  __int64 v167;
  __int64 v168;
  unsigned __int16* v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  int v178;
  int v179;
  __int64 v180;
  int v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  int* v186;
  __int64 v187;
  int v188;
  __int64 v189;
  int v190;
  int v191;
  int v192;
  __int64 v193;
  int* v194;
  __int64 v195;
  int v196;
  __int64 v197;
  int v198;
  int v199;
  int v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  int v209;
  int v210;
  __int64 v211;
  int v212;
  __int64 v213;
  int* v214;
  __int64 v215;
  int v216;
  __int64 v217;
  int v218;
  int v219;
  int v220;
  __int64 v221;
  __int64 v222;
  int v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  int v230;
  int v231;
  __int64 v232;
  int v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  int* v238;
  __int64 v239;
  int v240;
  __int64 v241;
  int v242;
  int v243;
  int v244;
  __int64 v245;
  int* v246;
  __int64 v247;
  int v248;
  __int64 v249;
  int v250;
  int v251;
  int v252;
  __int64 v253;
  __int64 v254;
  int v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  int v262;
  int v263;
  __int64 v264;
  int v265;
  __int64 v266;
  int* v267;
  __int64 v268;
  int v269;
  __int64 v270;
  int v271;
  int v272;
  int v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  int v282;
  int v283;
  __int64 v284;
  int v285;
  __int64 v286;
  int* v287;
  __int64 v288;
  int v289;
  __int64 v290;
  int v291;
  int v292;
  int v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  _QWORD v297[4];
  _QWORD* v298;
  _QWORD v299[4];
  _QWORD* v300;
  _QWORD v301[2];
  _QWORD* v302;
  _QWORD* v303;

  v1 = *(_QWORD*)(result + 392);
  v2 = *(_QWORD*)(result + 408);
  v3 = result;
  if (v2 != 0) {
    goto LABEL_2;
  }
  v2 = *(_QWORD*)(result + 400);
  if (v2 == 0) {
    return result;
  }
  if (*(_QWORD*)(v2 + 88) == 0) {
    goto LABEL_2;
  }
  v15 = result + 400;
  v16 = game_9a28e0(1);
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find_alt1(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v16);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      goto LABEL_90;
    }
  }
  result = game_9a28e0(2);
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_90;
  }
  result = game_GameVariableTable_Find_alt1(
      *(_QWORD*)(game_GameModeData_instance_ + 48), result);
  if (result == 0 || *(_DWORD*)(result + 32) == 0) {
    if (game_GameModeData_instance_ == 0 ||
        (unsigned int)((v17 = *(unsigned __int8*)(game_GameModeData_instance_ +
                                                  56)) -
                       4) < 2) {
    LABEL_90:
      v2 = *(_QWORD*)v15;
      goto LABEL_2;
    }
    if ((unsigned int)(v17 - 6) >= 2) {
      if (v17 == 2) {
        v76 = (__int64*)(*(_QWORD*)(v3 + 400) + 88LL);
        if ((*(_BYTE*)(v3 + 418) & 4) == 0) {
          v76 = (__int64*)(v3 + 400);
        }
        v2 = *v76;
        goto LABEL_2;
      }
      goto LABEL_90;
    }
  }
  v2 = *(_QWORD*)(*(_QWORD*)v15 + 88LL);
LABEL_2:
  if (v1 == 0 || v2 == 0) {
    return result;
  }
  v5 = *(_QWORD*)(v3 + 1840);
  v6 = *(_QWORD*)(v1 + 24);
  *(_DWORD*)(v3 + 1864) = 0;
  v7 = (_QWORD*)(v3 + 1840);
  *(_QWORD*)(v3 + 1848) = v5;
  v8 = *(_QWORD*)(v2 + 24);
  if (*(_DWORD*)(v8 + 888) != 0) {
    v9 = *(_QWORD*)(v8 + 872);
    v10 = *(_QWORD*)(v8 + 864);
    if (v9 != v10) {
      LODWORD(v301[0]) = 0;
      GameRoutine_66dd60(v3 + 1840, (v9 - v10) >> 2, v301);
      v9 = *(_QWORD*)(v8 + 872);
      v10 = *(_QWORD*)(v8 + 864);
    }
    if (v9 != v10) {
      v11 = 0;
      do {
        *(_DWORD*)(*v7 + 4 * v11) |= *(_DWORD*)(v10 + 4 * v11);
        ++v11;
        v10 = *(_QWORD*)(v8 + 864);
      } while (v11 < (*(_QWORD*)(v8 + 872) - v10) >> 2);
    }
  }
  v12 = *(_QWORD*)(v3 + 440);
  if (v12 != 0) {
    v13 = *(unsigned __int8*)(v12 + 16);
    if ((unsigned int)(v13 - 1) < 2) {
      v14 = *(_QWORD*)(v2 + 24) + 192LL;
      if (*(_DWORD*)(*(_QWORD*)(v2 + 24) + 216LL) == 0) {
        goto LABEL_37;
      }
    LABEL_32:
      v18 = *(_QWORD*)v14;
      v19 = *(_QWORD*)(v14 + 8);
      v20 = (v19 - *(_QWORD*)v14) >> 2;
      v21 = (__int64)(*(_QWORD*)(v3 + 1848) - *(_QWORD*)(v3 + 1840)) >> 2;
      if (v20 > v21) {
        LODWORD(v301[0]) = 0;
        GameRoutine_66dd60(v3 + 1840, v20 - v21, v301);
        v18 = *(_QWORD*)v14;
        v19 = *(_QWORD*)(v14 + 8);
      }
      if (v19 != v18) {
        v22 = 0;
        do {
          *(_DWORD*)(*v7 + 4 * v22) |= *(_DWORD*)(v18 + 4 * v22);
          ++v22;
          v18 = *(_QWORD*)v14;
        } while (v22 < (__int64)(*(_QWORD*)(v14 + 8) - *(_QWORD*)v14) >> 2);
      }
      goto LABEL_37;
    }
    if (v13 != 9) {
      v14 = *(_QWORD*)(v2 + 24) + 96LL;
      if (*(_DWORD*)(*(_QWORD*)(v2 + 24) + 120LL) != 0) {
        goto LABEL_32;
      }
    LABEL_37:
      v23 = *(__int64**)(v1 + 24);
      v24 = (_QWORD*)(v6 + 96);
      if (*((_DWORD*)v23 + 6) != 0) {
        v25 = *v23;
        v26 = v23[1];
        v27 = (v26 - *v23) >> 2;
        v28 = (__int64)(*(_QWORD*)(v3 + 1848) - *(_QWORD*)(v3 + 1840)) >> 2;
        if (v27 > v28) {
          LODWORD(v301[0]) = 0;
          GameRoutine_66dd60(v3 + 1840, v27 - v28, v301);
          v25 = *v23;
          v26 = v23[1];
        }
        if (v26 != v25) {
          v29 = 0;
          do {
            *(_DWORD*)(*v7 + 4 * v29) |= *(_DWORD*)(v25 + 4 * v29);
            ++v29;
            v25 = *v23;
          } while (v29 < (v23[1] - *v23) >> 2);
        }
      }
      if (*(_DWORD*)(v3 + 1384) != 0) {
        v30 = *(_QWORD*)(v3 + 1368);
        v31 = *(_QWORD*)(v3 + 1360);
        v32 = (v30 - v31) >> 2;
        v33 = (__int64)(*(_QWORD*)(v3 + 1848) - *(_QWORD*)(v3 + 1840)) >> 2;
        if (v32 > v33) {
          LODWORD(v301[0]) = 0;
          GameRoutine_66dd60(v3 + 1840, v32 - v33, v301);
          v30 = *(_QWORD*)(v3 + 1368);
          v31 = *(_QWORD*)(v3 + 1360);
        }
        if (v30 != v31) {
          v34 = 0;
          do {
            *(_DWORD*)(*(_QWORD*)(v3 + 1840) + 4 * v34) |=
                *(_DWORD*)(v31 + 4 * v34);
            ++v34;
            v31 = *(_QWORD*)(v3 + 1360);
          } while (v34 < (*(_QWORD*)(v3 + 1368) - v31) >> 2);
        }
      }
      v35 = *(_QWORD*)(v3 + 1744);
      *(_DWORD*)(v3 + 1768) = 0;
      *(_QWORD*)(v3 + 1824) = 0;
      *(_QWORD*)(v3 + 1832) = 0;
      *(_QWORD*)(v3 + 1752) = v35;
      *(_QWORD*)(v3 + 1784) = *(_QWORD*)(v3 + 1776);
      UnitSkillList_84d340(v3 + 1744, *(_QWORD*)(v1 + 24), v24);
      v36 = *(_QWORD*)(v3 + 440);
      if (v36 == 0) {
        goto LABEL_53;
      }
      v37 = *(unsigned __int8*)(v36 + 16);
      if ((unsigned int)(v37 - 1) < 2) {
        v38 = *(_QWORD*)(v2 + 24) + 192LL;
        goto LABEL_55;
      }
      if (v37 != 9) {
        v38 = *(_QWORD*)(v2 + 24) + 96LL;
      }
      else {
      LABEL_53:
        v38 = *(_QWORD*)(v2 + 24);
      }
    LABEL_55:
      v39 = (_QWORD*)(v3 + 1824);
      UnitSkillList_84d340(v3 + 1744, v38, v24);
      v40 = *(_QWORD*)(v3 + 440);
      v41 = (_DWORD*)game_g_shared_system_skills_ptr;
      if (v40 == 0) {
        goto LABEL_97;
      }
      v42 = *(unsigned __int8*)(v40 + 16);
      if (((1 << v42) & 0xF1) == 0) {
        if (((1 << v42) & 6) != 0) {
          LODWORD(v301[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x224LL) +
                                        game_g_shared_system_skills_ptr) &
                             0xFFF;
          if ((UnitSkillList_84cc00(v3 + 1744, v301, 1) & 1) == 0) {
            goto LABEL_95;
          }
          v62 = *(_QWORD*)(v3 + 1784);
          v44 = *(_QWORD*)(v3 + 1776);
          *v39 = 0;
          *(_QWORD*)(v3 + 1832) = 0;
          v63 = v62 - v44;
          if ((int)((unsigned __int64)(v62 - v44) >> 2) < 1) {
            goto LABEL_95;
          }
          v64 = (int)(v63 >> 2);
          if (v64 <= 1) {
            v47 = 1;
          }
          else {
            v47 = (int)(v63 >> 2);
          }
          v48 = *GameData_212c880[0];
          if (v64 < 2) {
            goto LABEL_73;
          }
          v68 = (int*)(v44 + 4);
          v50 = 0;
          v51 = 0;
          v52 = 0;
          v53 = 0;
          v54 = 0;
          do {
            v54 += 2;
            v69 = *(_QWORD*)(*(_QWORD*)(v48 + 64) + 8LL * (*(v68 - 1) & 0xFFF));
            v70 = v53 | (1 << *(_BYTE*)(v69 + 104));
            *(_WORD*)(v3 + 1824) = v70;
            v71 = (1LL << *(_BYTE*)(v69 + 250)) | v52;
            *(_QWORD*)(v3 + 1832) = v71;
            v72 = (1 << *(_BYTE*)(v69 + 115)) | v51;
            *(_DWORD*)(v3 + 1828) = v72;
            v73 = *(unsigned __int16*)(*(_QWORD*)(v69 + 24) + 1064LL) | v50;
            *(_WORD*)(v3 + 1826) = v73;
            v74 = *v68;
            v68 += 2;
            v75 = *(_QWORD*)(*(_QWORD*)(v48 + 64) + 8LL * (v74 & 0xFFF));
            v53 = v70 | (1 << *(_BYTE*)(v75 + 104));
            *(_WORD*)(v3 + 1824) = v53;
            v52 = (1LL << *(_BYTE*)(v75 + 250)) | v71;
            *(_QWORD*)(v3 + 1832) = v52;
            v51 = (1 << *(_BYTE*)(v75 + 115)) | v72;
            *(_DWORD*)(v3 + 1828) = v51;
            v50 = *(unsigned __int16*)(*(_QWORD*)(v75 + 24) + 1064LL) | v73;
            *(_WORD*)(v3 + 1826) = v50;
          } while ((v47 & 0x7FFFFFFFFFFFFFFELL) != v54);
        }
        else {
          if (v42 != 3) {
            goto LABEL_95;
          }
          LODWORD(v301[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x228LL) +
                                        game_g_shared_system_skills_ptr) &
                             0xFFF;
          if ((UnitSkillList_84cc00(v3 + 1744, v301, 1) & 1) == 0) {
            goto LABEL_95;
          }
          v65 = *(_QWORD*)(v3 + 1784);
          v44 = *(_QWORD*)(v3 + 1776);
          *v39 = 0;
          *(_QWORD*)(v3 + 1832) = 0;
          v66 = v65 - v44;
          if ((int)((unsigned __int64)(v65 - v44) >> 2) < 1) {
            goto LABEL_95;
          }
          v67 = (int)(v66 >> 2);
          if (v67 <= 1) {
            v47 = 1;
          }
          else {
            v47 = (int)(v66 >> 2);
          }
          v48 = *GameData_212c880[0];
          if (v67 >= 2) {
            v77 = (int*)(v44 + 4);
            v50 = 0;
            v51 = 0;
            v52 = 0;
            v53 = 0;
            v54 = 0;
            do {
              v54 += 2;
              v78 =
                  *(_QWORD*)(*(_QWORD*)(v48 + 64) + 8LL * (*(v77 - 1) & 0xFFF));
              v79 = v53 | (1 << *(_BYTE*)(v78 + 104));
              *(_WORD*)(v3 + 1824) = v79;
              v80 = (1LL << *(_BYTE*)(v78 + 250)) | v52;
              *(_QWORD*)(v3 + 1832) = v80;
              v81 = (1 << *(_BYTE*)(v78 + 115)) | v51;
              *(_DWORD*)(v3 + 1828) = v81;
              v82 = *(unsigned __int16*)(*(_QWORD*)(v78 + 24) + 1064LL) | v50;
              *(_WORD*)(v3 + 1826) = v82;
              v83 = *v77;
              v77 += 2;
              v84 = *(_QWORD*)(*(_QWORD*)(v48 + 64) + 8LL * (v83 & 0xFFF));
              v53 = v79 | (1 << *(_BYTE*)(v84 + 104));
              *(_WORD*)(v3 + 1824) = v53;
              v52 = (1LL << *(_BYTE*)(v84 + 250)) | v80;
              *(_QWORD*)(v3 + 1832) = v52;
              v51 = (1 << *(_BYTE*)(v84 + 115)) | v81;
              *(_DWORD*)(v3 + 1828) = v51;
              v50 = *(unsigned __int16*)(*(_QWORD*)(v84 + 24) + 1064LL) | v82;
              *(_WORD*)(v3 + 1826) = v50;
            } while ((v47 & 0x7FFFFFFFFFFFFFFELL) != v54);
          }
          else {
            LOWORD(v50) = 0;
            v51 = 0;
            v52 = 0;
            LOWORD(v53) = 0;
            v54 = 0;
          }
        }
      LABEL_93:
        if ((v47 & 1) == 0) {
          goto LABEL_95;
        }
        goto LABEL_94;
      }
      LODWORD(v301[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x220LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
      if ((UnitSkillList_84cc00(v3 + 1744, v301, 1) & 1) == 0) {
        goto LABEL_95;
      }
      v43 = *(_QWORD*)(v3 + 1784);
      v44 = *(_QWORD*)(v3 + 1776);
      *v39 = 0;
      *(_QWORD*)(v3 + 1832) = 0;
      v45 = v43 - v44;
      if ((int)((unsigned __int64)(v43 - v44) >> 2) < 1) {
        goto LABEL_95;
      }
      v46 = (int)(v45 >> 2);
      if (v46 <= 1) {
        v47 = 1;
      }
      else {
        v47 = (int)(v45 >> 2);
      }
      v48 = *GameData_212c880[0];
      if (v46 >= 2) {
        v49 = (int*)(v44 + 4);
        v50 = 0;
        v51 = 0;
        v52 = 0;
        v53 = 0;
        v54 = 0;
        do {
          v54 += 2;
          v55 = *(_QWORD*)(*(_QWORD*)(v48 + 64) + 8LL * (*(v49 - 1) & 0xFFF));
          v56 = v53 | (1 << *(_BYTE*)(v55 + 104));
          *(_WORD*)(v3 + 1824) = v56;
          v57 = (1LL << *(_BYTE*)(v55 + 250)) | v52;
          *(_QWORD*)(v3 + 1832) = v57;
          v58 = (1 << *(_BYTE*)(v55 + 115)) | v51;
          *(_DWORD*)(v3 + 1828) = v58;
          v59 = *(unsigned __int16*)(*(_QWORD*)(v55 + 24) + 1064LL) | v50;
          *(_WORD*)(v3 + 1826) = v59;
          v60 = *v49;
          v49 += 2;
          v61 = *(_QWORD*)(*(_QWORD*)(v48 + 64) + 8LL * (v60 & 0xFFF));
          v53 = v56 | (1 << *(_BYTE*)(v61 + 104));
          *(_WORD*)(v3 + 1824) = v53;
          v52 = (1LL << *(_BYTE*)(v61 + 250)) | v57;
          *(_QWORD*)(v3 + 1832) = v52;
          v51 = (1 << *(_BYTE*)(v61 + 115)) | v58;
          *(_DWORD*)(v3 + 1828) = v51;
          v50 = *(unsigned __int16*)(*(_QWORD*)(v61 + 24) + 1064LL) | v59;
          *(_WORD*)(v3 + 1826) = v50;
        } while ((v47 & 0x7FFFFFFFFFFFFFFELL) != v54);
        goto LABEL_93;
      }
    LABEL_73:
      LOWORD(v50) = 0;
      v51 = 0;
      v52 = 0;
      LOWORD(v53) = 0;
      v54 = 0;
      if ((v47 & 1) != 0) {
      LABEL_94:
        v85 = *(_QWORD*)(*(_QWORD*)(v48 + 64) +
                         8LL * (*(_DWORD*)(v44 + 4 * v54) & 0xFFF));
        *(_WORD*)(v3 + 1824) = v53 | (1 << *(_BYTE*)(v85 + 104));
        *(_QWORD*)(v3 + 1832) = (1LL << *(_BYTE*)(v85 + 250)) | v52;
        *(_DWORD*)(v3 + 1828) = (1 << *(_BYTE*)(v85 + 115)) | v51;
        *(_WORD*)(v3 + 1826) = *(_WORD*)(*(_QWORD*)(v85 + 24) + 1064LL) | v50;
      }
    LABEL_95:
      v86 = *(_QWORD*)(v3 + 440);
      if (v86 != 0) {
        v87 = *(_BYTE*)(v86 + 16);
        goto LABEL_98;
      }
    LABEL_97:
      v87 = 9;
    LABEL_98:
      v88 = 1;
      if (((1 << v87) & 0xF1) != 0 ||
          (v89 = *(_QWORD*)(*(_QWORD*)(v3 + 392) + 320LL)) == 0 &&
              (v89 = *(_QWORD*)(*(_QWORD*)(v3 + 400) + 280LL)) == 0 ||
          (v90 = *(unsigned __int8*)(v3 + 624)) > 2) {
        v94 = 0;
        goto LABEL_110;
      }
      v91 = v301;
      v302 = v24;
      v92 = v89 + 48LL * v90;
      v303 = v301;
      v301[0] = GameData_1f91768;
      v301[1] = v3;
      v94 = v92 + 32;
      v93 = *(unsigned __int16*)(v92 + 32);
      if (*(_WORD*)(v92 + 32) != 0) {
        v95 = 8;
        do {
          v96 = v303;
          v299[0] = *(_QWORD*)(*(_QWORD*)(v92 + 40) + v95);
          if (v303 == nullptr) {
            goto LABEL_190;
          }
          (*(void (**)(_QWORD*, _QWORD*))(*v303 + 48LL))(v303, v299);
          --v93;
          v95 += 16;
        } while (v93 != 0);
        v91 = v303;
        if (v303 != v301) {
          if (v303 != nullptr) {
            v97 = 40;
          LABEL_128:
            (*(void (**)(__int64))(*v91 + v97))((__int64)v91);
          }
          v88 = 0;
        LABEL_110:
          if (*(_BYTE*)GameRoutine_6d36d0(v3) != 0) {
            v301[0] = *(_QWORD*)(v3 + 392);
            v301[1] = v3;
            v98 = GameRoutine_932360();
            UnitSkillList_84d140(v3 + 1744, v98, v24);
          }
          UnitSkillList_84d340(v3 + 1744, v3 + 1264, v24);
          UnitSkillList_84d340(v3 + 1744, v3 + 1648, v24);
          v99 = *(_QWORD*)(v3 + 2208);
          if (v99 != 0) {
            v100 = (__int64*)(v99 + 16);
          }
          else {
            v101 = (_BYTE*)(v3 + 847);
            v102 = *GameData_212c878[0];
            v103 = 2;
            while (1) {
              if (*(_WORD*)(v101 - 19) != 0 && (*(v101 - 16) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v102 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v101 -
                                                                          19)) +
                                      72LL) < 8u) {
                LODWORD(v103) = v103 - 2;
                goto LABEL_132;
              }
              if (*(_WORD*)(v101 - 11) != 0 && (*(v101 - 8) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v102 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v101 -
                                                                          11)) +
                                      72LL) < 8u) {
                break;
              }
              if (*(_WORD*)(v101 - 3) != 0 && (*v101 & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v102 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v101 -
                                                                          3)) +
                                      72LL) < 8u) {
                goto LABEL_132;
              }
              v103 += 3;
              v101 += 24;
              if (v103 == 32) {
                *(_QWORD*)(v3 + 1952) = 0;
                goto LABEL_135;
              }
            }
            LODWORD(v103) = v103 - 1;
          LABEL_132:
            v100 = (__int64*)(v3 + 828 + 8LL * (unsigned int)v103);
          }
          v104 = *v100;
          *(_QWORD*)(v3 + 1952) = v104;
          if ((_WORD)v104 != 0) {
            UnitSkillList_84d340(
                v3 + 1744,
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                      8LL * (unsigned __int16)v104) +
                           24LL) +
                    8LL,
                v24);
          }
        LABEL_135:
          v297[1] = v3;
          v297[2] = v24;
          v298 = v297;
          v297[0] = GameData_1f917e8;
          v299[0] = GameData_1f93088;
          v299[1] = v297;
          v300 = v299;
          v301[0] = GameData_1f92f88;
          v301[1] = 13;
          v302 = v299;
          v303 = v301;
          game_UnitItemList_EachItem(v3 + 828, v301);
          if (v303 == v301) {
            v105 = 32;
          }
          else {
            if (v303 == nullptr) {
              goto LABEL_140;
            }
            v105 = 40;
          }
          (*(void (**)(__int64))(*v303 + v105))((__int64)v303);
        LABEL_140:
          if (v300 == v299) {
            v106 = 32;
          }
          else {
            if (v300 == nullptr) {
              goto LABEL_145;
            }
            v106 = 40;
          }
          (*(void (**)(__int64))(*v300 + v106))((__int64)v300);
        LABEL_145:
          if (v298 == v297) {
            v107 = 32;
          }
          else {
            if (v298 == nullptr) {
              goto LABEL_150;
            }
            v107 = 40;
          }
          (*(void (**)(__int64))(*v298 + v107))((__int64)v298);
        LABEL_150:
          v302 = v24;
          v303 = v301;
          v301[0] = GameData_1f91868;
          v301[1] = v3;
          game_UnitItemList_EachItem(v3 + 828, v301);
          v108 = (char)v303;
          if (v303 == v301) {
            v109 = 32;
            goto LABEL_154;
          }
          if (v303 != nullptr) {
            v109 = 40;
          LABEL_154:
            v108 = (*(__int64 (**)(__int64))(*v303 + v109))((__int64)v303);
          }
          if (*(_QWORD*)(v3 + 408) == 0) {
            v121 = *(_QWORD*)(v3 + 392);
            if (v121 != 0 && *(_WORD*)(v121 + 408) != 0) {
              v122 = *(_QWORD*)(v121 + 24);
              v123 = *(_QWORD*)(v122 + 1792);
              v124 = *(_QWORD*)(v122 + 1800);
              if (v123 != v124) {
                while (*(_QWORD*)(v123 + 8) != 0) {
                  v125 = game_GameModeData_instance_;
                  if (game_GameModeData_instance_ != 0) {
                    v126 = game_GameVariableTable_Find_alt1(
                        *(_QWORD*)(game_GameModeData_instance_ + 48), v123 + 8);
                    if (v126 != 0) {
                      v127 = *(__int64 (**)(_QWORD))(v126 + 72);
                      v128 = *(_QWORD*)(v126 + 80);
                      v129 = (_QWORD*)(v126 + (v128 >> 1));
                      if ((v128 & 1) != 0) {
                        v127 = *(__int64 (**)(_QWORD))((char*)v127 + *v129);
                      }
                      v108 = v127(v129);
                    }
                    else {
                      v108 = 1;
                    }
                  }
                  if (*(_BYTE*)(v123 + 24) == ((v125 == 0) | v108 & 1)) {
                    break;
                  }
                  v123 += 32;
                  if (v123 == v124) {
                    goto LABEL_156;
                  }
                }
                if (*(_QWORD*)v123 != 0) {
                  UnitSkillList_84d340(
                      v3 + 1744, *(_QWORD*)(*(_QWORD*)v123 + 24LL) + 8LL, v24);
                }
              }
            }
          }
        LABEL_156:
          v110 = v301;
          v302 = v24;
          v111 = *(unsigned __int16*)(v3 + 1440);
          v301[0] = GameData_1f918e8;
          v301[1] = v3;
          v303 = v301;
          v112 = GameData_212cea8[0];
          v113 = (unsigned __int16)*GameData_212cea8[0];
          if ((v113 & v111) == 0 ||
              (v114 = *(_QWORD*)(v3 + 1400), v115 = *(_QWORD*)(v3 + 1392),
               (int)((unsigned __int64)(v114 - v115) >> 2) < 1)) {
            v120 = 32;
          LABEL_182:
            (*(void (**)(__int64))(*v110 + v120))((__int64)v110);
            v113 = (unsigned __int16)*v112;
            goto LABEL_183;
          }
          v116 = 0;
          v117 = 0;
          v118 = GameData_212c880[0];
          v119 = *GameData_212c880[0];
          do {
            if (((unsigned __int16)(1 << *(
                                        _BYTE*)(*(_QWORD*)(*(_QWORD*)(v119 +
                                                                      64) +
                                                           8LL *
                                                               (*(_DWORD*)(v115 +
                                                                           v116) &
                                                                0xFFF)) +
                                                104LL)) &
                 (unsigned __int16)v113) != 0) {
              v96 = v303;
              if (v303 == nullptr) {
                goto LABEL_190;
              }
              (*(void (**)(_QWORD*, __int64))(*v303 + 48LL))(v303, v115 + v116);
              v119 = *v118;
              v114 = *(_QWORD*)(v3 + 1400);
              v115 = *(_QWORD*)(v3 + 1392);
              v113 = (unsigned __int16)*v112;
            }
            ++v117;
            v116 += 4;
          } while (v117 < (int)((unsigned __int64)(v114 - v115) >> 2));
          v110 = v303;
          if (v303 == v301) {
            v120 = 32;
            v39 = (_QWORD*)(v3 + 1824);
            v41 = (_DWORD*)game_g_shared_system_skills_ptr;
            goto LABEL_182;
          }
          v39 = (_QWORD*)(v3 + 1824);
          v41 = (_DWORD*)game_g_shared_system_skills_ptr;
          if (v303 != nullptr) {
            v120 = 40;
            goto LABEL_182;
          }
        LABEL_183:
          v130 = v301;
          v302 = v24;
          v301[0] = GameData_1f91968;
          v301[1] = v3;
          v131 = *(unsigned __int16*)(v3 + 1152);
          v303 = v301;
          if ((v113 & v131) != 0 &&
              (v132 = *(_QWORD*)(v3 + 1112), v133 = *(_QWORD*)(v3 + 1104),
               (int)((unsigned __int64)(v132 - v133) >> 2) >= 1)) {
            v296 = v94;
            v134 = v88;
            v135 = v41;
            v136 = v39;
            v137 = 0;
            v138 = 0;
            v139 = GameData_212c880[0];
            v140 = *GameData_212c880[0];
            do {
              if (((unsigned __int16)(1 << *(
                                          _BYTE*)(*(_QWORD*)(*(_QWORD*)(v140 +
                                                                        64) +
                                                             8LL *
                                                                 (*(_DWORD*)(v133 +
                                                                             v137) &
                                                                  0xFFF)) +
                                                  104LL)) &
                   (unsigned __int16)v113) != 0) {
                v96 = v303;
                if (v303 == nullptr) {
                  goto LABEL_190;
                }
                (*(void (**)(_QWORD*, __int64))(*v303 + 48LL))(v303,
                                                               v133 + v137);
                v140 = *v139;
                v132 = *(_QWORD*)(v3 + 1112);
                v133 = *(_QWORD*)(v3 + 1104);
                LOWORD(v113) = *v112;
              }
              ++v138;
              v137 += 4;
            } while (v138 < (int)((unsigned __int64)(v132 - v133) >> 2));
            v130 = v303;
            if (v303 == v301) {
              v41 = v135;
              v88 = v134;
              v94 = v296;
              v141 = 32;
              v39 = v136;
            }
            else {
              v41 = v135;
              v88 = v134;
              v94 = v296;
              v39 = v136;
              if (v303 == nullptr) {
                goto LABEL_197;
              }
              v141 = 40;
            }
          }
          else {
            v141 = 32;
          }
          (*(void (**)(__int64))(*v130 + v141))((__int64)v130);
        LABEL_197:
          if (game_GameModeData_instance_ == 0) {
            goto LABEL_218;
          }
          v142 = *(__int64**)(game_GameModeData_instance_ + 192);
          v143 = (unsigned int)*v41;
          v144 = *(_QWORD*)(v3 + 1744);
          v145 = *(_QWORD*)(v3 + 1752) - v144;
          LODWORD(v301[0]) = *v41 & 0xFFF;
          if (((v143 >> 5) & 0x7F) + 1 > v145 >> 2 ||
              ((*(_DWORD*)(v144 + 4 * ((v143 >> 5) & 0x7F)) >> v143) & 1) ==
                  0) {
            v148 = *(_QWORD*)(v3 + 440);
            goto LABEL_204;
          }
          v146 = v142;
          v147 = game_HasActiveSkill_843420(v301, v3 + 1744);
          v148 = *(_QWORD*)(v3 + 440);
          if ((v147 & 1) == 0) {
            v142 = v146;
            goto LABEL_204;
          }
          if (v148 != 0) {
            v149 = *(_BYTE*)(v148 + 16);
          }
          else {
            v149 = 9;
          }
          v142 = v146;
          if (((1 << v149) & 0xF1) == 0) {
          LABEL_204:
            if (v148 != 0) {
              v150 = *(unsigned __int8*)(v148 + 16);
              v151 = v150 > 7;
              v152 = (1 << v150) & 0x91;
              if (!v151 && v152 != 0) {
                goto LABEL_217;
              }
            }
          }
          v142 = GameData_212c950;
        LABEL_217:
          UnitSkillList_84d340(v3 + 1744, v142, v24);
        LABEL_218:
          v301[0] = 2048;
          v154 = game_UnitSkillList_GetMaxValue(v3 + 1744, v301);
          v155 = *(unsigned __int8*)(v3 + 497);
          v156 = v154 - v155;
          if (v154 != v155) {
            v157 = *(unsigned __int8*)(v3 + 496);
            *(_BYTE*)(v3 + 497) = v154;
            v158 = v156 + v157;
            if (v154 >= v158) {
              v159 = v158;
            }
            else {
              v159 = v154;
            }
            if (v158 >= 0) {
              v160 = v159;
            }
            else {
              v160 = 0;
            }
            v155 = (unsigned __int8)v154;
            *(_BYTE*)(v3 + 496) = v160;
          }
          if ((v88 & 1) != 0) {
            goto LABEL_247;
          }
          v161 = *(unsigned __int8*)(v3 + 496);
          v162 = v301;
          v302 = v24;
          v301[0] = GameData_1f919e8;
          v301[1] = v3;
          v163 = 32;
          v303 = v301;
          if (v155 == 0 || v161 >= v155 ||
              (v164 = *(unsigned __int16*)(v94 + 32),
               *(_WORD*)(v94 + 32) == 0) ||
              ((v165 = ~v161 + v155, v164 - 1 >= v165) ? (v166 = v165)
                                                       : (v166 = v164 - 1),
               (v163 = 32, v165 < 0) || v166 < 0)) {
          LABEL_246:
            (*(void (**)(__int64))(*v162 + v163))((__int64)v162);
            goto LABEL_247;
          }
          v167 = (unsigned int)(v166 + 1);
          v168 = 0;
          do {
            v169 = (unsigned __int16*)(*(_QWORD*)(v94 + 40) + 16 * v168);
            v170 = *v169;
            if (*v169 != 0) {
              v171 = 8;
              while (1) {
                v96 = v303;
                v299[0] = *(_QWORD*)(*((_QWORD*)v169 + 1) + v171);
                if (v303 == nullptr) {
                  break;
                }
                (*(void (**)(_QWORD*, _QWORD*))(*v303 + 48LL))(v303, v299);
                --v170;
                v171 += 16;
                if (v170 == 0) {
                  goto LABEL_236;
                }
              }
            LABEL_190:
              GameRoutine_60a310_alt1(v96);
            }
          LABEL_236:
            ++v168;
          } while (v168 != v167);
          v162 = v303;
          if (v303 == v301) {
            v163 = 32;
            goto LABEL_246;
          }
          if (v303 != nullptr) {
            v163 = 40;
            goto LABEL_246;
          }
        LABEL_247:
          if (*(int*)(v3 + 592) < 2) {
            LODWORD(v301[0]) =
                *(_DWORD*)((_BYTE*)((__int128*)0x10LL) + (_QWORD)v41 + 12) &
                0xFFF;
            if ((UnitSkillList_84cc00(v3 + 1744, v301, 1) & 1) == 0) {
              goto LABEL_270;
            }
            v183 = *(_QWORD*)(v3 + 1784);
            v173 = *(_QWORD*)(v3 + 1776);
            *v39 = 0;
            v39[1] = 0;
            v184 = v183 - v173;
            if ((int)((unsigned __int64)(v183 - v173) >> 2) < 1) {
              goto LABEL_270;
            }
            v185 = (int)(v184 >> 2);
            if (v185 <= 1) {
              v176 = 1;
            }
            else {
              v176 = (int)(v184 >> 2);
            }
            v177 = *GameData_212c880[0];
            if (v185 >= 2) {
              v194 = (int*)(v173 + 4);
              v178 = 0;
              v179 = 0;
              v180 = 0;
              v181 = 0;
              v182 = 0;
              do {
                v182 += 2;
                v195 = *(_QWORD*)(*(_QWORD*)(v177 + 64) +
                                  8LL * (*(v194 - 1) & 0xFFF));
                v196 = v181 | (1 << *(_BYTE*)(v195 + 104));
                *(_WORD*)(v3 + 1824) = v196;
                v197 = (1LL << *(_BYTE*)(v195 + 250)) | v180;
                *(_QWORD*)(v3 + 1832) = v197;
                v198 = (1 << *(_BYTE*)(v195 + 115)) | v179;
                *(_DWORD*)(v3 + 1828) = v198;
                v199 =
                    *(unsigned __int16*)(*(_QWORD*)(v195 + 24) + 1064LL) | v178;
                *(_WORD*)(v3 + 1826) = v199;
                v200 = *v194;
                v194 += 2;
                v201 = *(_QWORD*)(*(_QWORD*)(v177 + 64) + 8LL * (v200 & 0xFFF));
                v181 = v196 | (1 << *(_BYTE*)(v201 + 104));
                *(_WORD*)(v3 + 1824) = v181;
                v180 = (1LL << *(_BYTE*)(v201 + 250)) | v197;
                *(_QWORD*)(v3 + 1832) = v180;
                v179 = (1 << *(_BYTE*)(v201 + 115)) | v198;
                *(_DWORD*)(v3 + 1828) = v179;
                v178 =
                    *(unsigned __int16*)(*(_QWORD*)(v201 + 24) + 1064LL) | v199;
                *(_WORD*)(v3 + 1826) = v178;
              } while ((v176 & 0x7FFFFFFFFFFFFFFELL) != v182);
            }
            else {
              LOWORD(v178) = 0;
              v179 = 0;
              v180 = 0;
              LOWORD(v181) = 0;
              v182 = 0;
            }
          LABEL_268:
            if ((v176 & 1) == 0) {
              goto LABEL_270;
            }
            goto LABEL_269;
          }
          LODWORD(v301[0]) =
              *(_DWORD*)((_BYTE*)((char*)0x20LL) + (_QWORD)v41) & 0xFFF;
          if ((UnitSkillList_84cc00(v3 + 1744, v301, 1) & 1) == 0) {
            goto LABEL_270;
          }
          v172 = *(_QWORD*)(v3 + 1784);
          v173 = *(_QWORD*)(v3 + 1776);
          *v39 = 0;
          v39[1] = 0;
          v174 = v172 - v173;
          if ((int)((unsigned __int64)(v172 - v173) >> 2) < 1) {
            goto LABEL_270;
          }
          v175 = (int)(v174 >> 2);
          if (v175 <= 1) {
            v176 = 1;
          }
          else {
            v176 = (int)(v174 >> 2);
          }
          v177 = *GameData_212c880[0];
          if (v175 >= 2) {
            v186 = (int*)(v173 + 4);
            v178 = 0;
            v179 = 0;
            v180 = 0;
            v181 = 0;
            v182 = 0;
            do {
              v182 += 2;
              v187 = *(_QWORD*)(*(_QWORD*)(v177 + 64) +
                                8LL * (*(v186 - 1) & 0xFFF));
              v188 = v181 | (1 << *(_BYTE*)(v187 + 104));
              *(_WORD*)(v3 + 1824) = v188;
              v189 = (1LL << *(_BYTE*)(v187 + 250)) | v180;
              *(_QWORD*)(v3 + 1832) = v189;
              v190 = (1 << *(_BYTE*)(v187 + 115)) | v179;
              *(_DWORD*)(v3 + 1828) = v190;
              v191 =
                  *(unsigned __int16*)(*(_QWORD*)(v187 + 24) + 1064LL) | v178;
              *(_WORD*)(v3 + 1826) = v191;
              v192 = *v186;
              v186 += 2;
              v193 = *(_QWORD*)(*(_QWORD*)(v177 + 64) + 8LL * (v192 & 0xFFF));
              v181 = v188 | (1 << *(_BYTE*)(v193 + 104));
              *(_WORD*)(v3 + 1824) = v181;
              v180 = (1LL << *(_BYTE*)(v193 + 250)) | v189;
              *(_QWORD*)(v3 + 1832) = v180;
              v179 = (1 << *(_BYTE*)(v193 + 115)) | v190;
              *(_DWORD*)(v3 + 1828) = v179;
              v178 =
                  *(unsigned __int16*)(*(_QWORD*)(v193 + 24) + 1064LL) | v191;
              *(_WORD*)(v3 + 1826) = v178;
            } while ((v176 & 0x7FFFFFFFFFFFFFFELL) != v182);
            goto LABEL_268;
          }
          LOWORD(v178) = 0;
          v179 = 0;
          v180 = 0;
          LOWORD(v181) = 0;
          v182 = 0;
          if ((v176 & 1) != 0) {
          LABEL_269:
            v202 = *(_QWORD*)(*(_QWORD*)(v177 + 64) +
                              8LL * (*(_DWORD*)(v173 + 4 * v182) & 0xFFF));
            *(_WORD*)(v3 + 1824) = v181 | (1 << *(_BYTE*)(v202 + 104));
            *(_QWORD*)(v3 + 1832) = (1LL << *(_BYTE*)(v202 + 250)) | v180;
            *(_DWORD*)(v3 + 1828) = (1 << *(_BYTE*)(v202 + 115)) | v179;
            *(_WORD*)(v3 + 1826) =
                *(_WORD*)(*(_QWORD*)(v202 + 24) + 1064LL) | v178;
          }
        LABEL_270:
          if (*(_BYTE*)(v3 + 499) != 0) {
            LODWORD(v301[0]) =
                *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x98LL) + (_QWORD)v41) & 0xFFF;
            if ((UnitSkillList_84cc00(v3 + 1744, v301, 1) & 1) != 0) {
              v203 = *(_QWORD*)(v3 + 1784);
              v204 = *(_QWORD*)(v3 + 1776);
              *v39 = 0;
              v39[1] = 0;
              v205 = v203 - v204;
              if ((int)((unsigned __int64)(v203 - v204) >> 2) >= 1) {
                v206 = (int)(v205 >> 2);
                v207 = v206 <= 1 ? 1LL : (int)(v205 >> 2);
                v208 = *GameData_212c880[0];
                if (v206 >= 2) {
                  v214 = (int*)(v204 + 4);
                  v209 = 0;
                  v210 = 0;
                  v211 = 0;
                  v212 = 0;
                  v213 = 0;
                  do {
                    v213 += 2;
                    v215 = *(_QWORD*)(*(_QWORD*)(v208 + 64) +
                                      8LL * (*(v214 - 1) & 0xFFF));
                    v216 = v212 | (1 << *(_BYTE*)(v215 + 104));
                    *(_WORD*)(v3 + 1824) = v216;
                    v217 = (1LL << *(_BYTE*)(v215 + 250)) | v211;
                    *(_QWORD*)(v3 + 1832) = v217;
                    v218 = (1 << *(_BYTE*)(v215 + 115)) | v210;
                    *(_DWORD*)(v3 + 1828) = v218;
                    v219 =
                        *(unsigned __int16*)(*(_QWORD*)(v215 + 24) + 1064LL) |
                        v209;
                    *(_WORD*)(v3 + 1826) = v219;
                    v220 = *v214;
                    v214 += 2;
                    v221 = *(_QWORD*)(*(_QWORD*)(v208 + 64) +
                                      8LL * (v220 & 0xFFF));
                    v212 = v216 | (1 << *(_BYTE*)(v221 + 104));
                    *(_WORD*)(v3 + 1824) = v212;
                    v211 = (1LL << *(_BYTE*)(v221 + 250)) | v217;
                    *(_QWORD*)(v3 + 1832) = v211;
                    v210 = (1 << *(_BYTE*)(v221 + 115)) | v218;
                    *(_DWORD*)(v3 + 1828) = v210;
                    v209 =
                        *(unsigned __int16*)(*(_QWORD*)(v221 + 24) + 1064LL) |
                        v219;
                    *(_WORD*)(v3 + 1826) = v209;
                  } while ((v207 & 0x7FFFFFFFFFFFFFFELL) != v213);
                }
                else {
                  LOWORD(v209) = 0;
                  v210 = 0;
                  v211 = 0;
                  LOWORD(v212) = 0;
                  v213 = 0;
                }
                if ((v207 & 1) != 0) {
                  v222 =
                      *(_QWORD*)(*(_QWORD*)(v208 + 64) +
                                 8LL * (*(_DWORD*)(v204 + 4 * v213) & 0xFFF));
                  *(_WORD*)(v3 + 1824) = v212 | (1 << *(_BYTE*)(v222 + 104));
                  *(_QWORD*)(v3 + 1832) = (1LL << *(_BYTE*)(v222 + 250)) | v211;
                  *(_DWORD*)(v3 + 1828) = (1 << *(_BYTE*)(v222 + 115)) | v210;
                  *(_WORD*)(v3 + 1826) =
                      *(_WORD*)(*(_QWORD*)(v222 + 24) + 1064LL) | v209;
                }
              }
            }
          }
          v223 = *(__int16*)(v3 + 492);
          LOBYTE(v301[0]) = 0;
          if ((int)game_Unit_GetParam(v3, v301, 1) <= v223) {
            LODWORD(v301[0]) =
                *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x9CLL) + (_QWORD)v41) & 0xFFF;
            if ((UnitSkillList_84cc00(v3 + 1744, v301, 1) & 1) == 0) {
              goto LABEL_305;
            }
            v235 = *(_QWORD*)(v3 + 1784);
            v225 = *(_QWORD*)(v3 + 1776);
            *v39 = 0;
            v39[1] = 0;
            v236 = v235 - v225;
            if ((int)((unsigned __int64)(v235 - v225) >> 2) < 1) {
              goto LABEL_305;
            }
            v237 = (int)(v236 >> 2);
            if (v237 <= 1) {
              v228 = 1;
            }
            else {
              v228 = (int)(v236 >> 2);
            }
            v229 = *GameData_212c880[0];
            if (v237 >= 2) {
              v246 = (int*)(v225 + 4);
              v230 = 0;
              v231 = 0;
              v232 = 0;
              v233 = 0;
              v234 = 0;
              do {
                v234 += 2;
                v247 = *(_QWORD*)(*(_QWORD*)(v229 + 64) +
                                  8LL * (*(v246 - 1) & 0xFFF));
                v248 = v233 | (1 << *(_BYTE*)(v247 + 104));
                *(_WORD*)(v3 + 1824) = v248;
                v249 = (1LL << *(_BYTE*)(v247 + 250)) | v232;
                *(_QWORD*)(v3 + 1832) = v249;
                v250 = (1 << *(_BYTE*)(v247 + 115)) | v231;
                *(_DWORD*)(v3 + 1828) = v250;
                v251 =
                    *(unsigned __int16*)(*(_QWORD*)(v247 + 24) + 1064LL) | v230;
                *(_WORD*)(v3 + 1826) = v251;
                v252 = *v246;
                v246 += 2;
                v253 = *(_QWORD*)(*(_QWORD*)(v229 + 64) + 8LL * (v252 & 0xFFF));
                v233 = v248 | (1 << *(_BYTE*)(v253 + 104));
                *(_WORD*)(v3 + 1824) = v233;
                v232 = (1LL << *(_BYTE*)(v253 + 250)) | v249;
                *(_QWORD*)(v3 + 1832) = v232;
                v231 = (1 << *(_BYTE*)(v253 + 115)) | v250;
                *(_DWORD*)(v3 + 1828) = v231;
                v230 =
                    *(unsigned __int16*)(*(_QWORD*)(v253 + 24) + 1064LL) | v251;
                *(_WORD*)(v3 + 1826) = v230;
              } while ((v228 & 0x7FFFFFFFFFFFFFFELL) != v234);
            }
            else {
              LOWORD(v230) = 0;
              v231 = 0;
              v232 = 0;
              LOWORD(v233) = 0;
              v234 = 0;
            }
          LABEL_303:
            if ((v228 & 1) == 0) {
              goto LABEL_305;
            }
            goto LABEL_304;
          }
          LODWORD(v301[0]) =
              *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xA0LL) + (_QWORD)v41) & 0xFFF;
          if ((UnitSkillList_84cc00(v3 + 1744, v301, 1) & 1) == 0) {
            goto LABEL_305;
          }
          v224 = *(_QWORD*)(v3 + 1784);
          v225 = *(_QWORD*)(v3 + 1776);
          *v39 = 0;
          v39[1] = 0;
          v226 = v224 - v225;
          if ((int)((unsigned __int64)(v224 - v225) >> 2) < 1) {
            goto LABEL_305;
          }
          v227 = (int)(v226 >> 2);
          if (v227 <= 1) {
            v228 = 1;
          }
          else {
            v228 = (int)(v226 >> 2);
          }
          v229 = *GameData_212c880[0];
          if (v227 >= 2) {
            v238 = (int*)(v225 + 4);
            v230 = 0;
            v231 = 0;
            v232 = 0;
            v233 = 0;
            v234 = 0;
            do {
              v234 += 2;
              v239 = *(_QWORD*)(*(_QWORD*)(v229 + 64) +
                                8LL * (*(v238 - 1) & 0xFFF));
              v240 = v233 | (1 << *(_BYTE*)(v239 + 104));
              *(_WORD*)(v3 + 1824) = v240;
              v241 = (1LL << *(_BYTE*)(v239 + 250)) | v232;
              *(_QWORD*)(v3 + 1832) = v241;
              v242 = (1 << *(_BYTE*)(v239 + 115)) | v231;
              *(_DWORD*)(v3 + 1828) = v242;
              v243 =
                  *(unsigned __int16*)(*(_QWORD*)(v239 + 24) + 1064LL) | v230;
              *(_WORD*)(v3 + 1826) = v243;
              v244 = *v238;
              v238 += 2;
              v245 = *(_QWORD*)(*(_QWORD*)(v229 + 64) + 8LL * (v244 & 0xFFF));
              v233 = v240 | (1 << *(_BYTE*)(v245 + 104));
              *(_WORD*)(v3 + 1824) = v233;
              v232 = (1LL << *(_BYTE*)(v245 + 250)) | v241;
              *(_QWORD*)(v3 + 1832) = v232;
              v231 = (1 << *(_BYTE*)(v245 + 115)) | v242;
              *(_DWORD*)(v3 + 1828) = v231;
              v230 =
                  *(unsigned __int16*)(*(_QWORD*)(v245 + 24) + 1064LL) | v243;
              *(_WORD*)(v3 + 1826) = v230;
            } while ((v228 & 0x7FFFFFFFFFFFFFFELL) != v234);
            goto LABEL_303;
          }
          LOWORD(v230) = 0;
          v231 = 0;
          v232 = 0;
          LOWORD(v233) = 0;
          v234 = 0;
          if ((v228 & 1) != 0) {
          LABEL_304:
            v254 = *(_QWORD*)(*(_QWORD*)(v229 + 64) +
                              8LL * (*(_DWORD*)(v225 + 4 * v234) & 0xFFF));
            *(_WORD*)(v3 + 1824) = v233 | (1 << *(_BYTE*)(v254 + 104));
            *(_QWORD*)(v3 + 1832) = (1LL << *(_BYTE*)(v254 + 250)) | v232;
            *(_DWORD*)(v3 + 1828) = (1 << *(_BYTE*)(v254 + 115)) | v231;
            *(_WORD*)(v3 + 1826) =
                *(_WORD*)(*(_QWORD*)(v254 + 24) + 1064LL) | v230;
          }
        LABEL_305:
          v255 = *(__int16*)(v3 + 492);
          LOBYTE(v301[0]) = 0;
          if (3 * v255 < (int)game_Unit_GetParam(v3, v301, 1)) {
            LODWORD(v301[0]) =
                *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1C4LL) + (_QWORD)v41) & 0xFFF;
            if ((UnitSkillList_84cc00(v3 + 1744, v301, 1) & 1) != 0) {
              v256 = *(_QWORD*)(v3 + 1784);
              v257 = *(_QWORD*)(v3 + 1776);
              *v39 = 0;
              v39[1] = 0;
              v258 = v256 - v257;
              if ((int)((unsigned __int64)(v256 - v257) >> 2) >= 1) {
                v259 = (int)(v258 >> 2);
                v260 = v259 <= 1 ? 1LL : (int)(v258 >> 2);
                v261 = *GameData_212c880[0];
                if (v259 >= 2) {
                  v267 = (int*)(v257 + 4);
                  v262 = 0;
                  v263 = 0;
                  v264 = 0;
                  v265 = 0;
                  v266 = 0;
                  do {
                    v266 += 2;
                    v268 = *(_QWORD*)(*(_QWORD*)(v261 + 64) +
                                      8LL * (*(v267 - 1) & 0xFFF));
                    v269 = v265 | (1 << *(_BYTE*)(v268 + 104));
                    *(_WORD*)(v3 + 1824) = v269;
                    v270 = (1LL << *(_BYTE*)(v268 + 250)) | v264;
                    *(_QWORD*)(v3 + 1832) = v270;
                    v271 = (1 << *(_BYTE*)(v268 + 115)) | v263;
                    *(_DWORD*)(v3 + 1828) = v271;
                    v272 =
                        *(unsigned __int16*)(*(_QWORD*)(v268 + 24) + 1064LL) |
                        v262;
                    *(_WORD*)(v3 + 1826) = v272;
                    v273 = *v267;
                    v267 += 2;
                    v274 = *(_QWORD*)(*(_QWORD*)(v261 + 64) +
                                      8LL * (v273 & 0xFFF));
                    v265 = v269 | (1 << *(_BYTE*)(v274 + 104));
                    *(_WORD*)(v3 + 1824) = v265;
                    v264 = (1LL << *(_BYTE*)(v274 + 250)) | v270;
                    *(_QWORD*)(v3 + 1832) = v264;
                    v263 = (1 << *(_BYTE*)(v274 + 115)) | v271;
                    *(_DWORD*)(v3 + 1828) = v263;
                    v262 =
                        *(unsigned __int16*)(*(_QWORD*)(v274 + 24) + 1064LL) |
                        v272;
                    *(_WORD*)(v3 + 1826) = v262;
                  } while ((v260 & 0x7FFFFFFFFFFFFFFELL) != v266);
                }
                else {
                  LOWORD(v262) = 0;
                  v263 = 0;
                  v264 = 0;
                  LOWORD(v265) = 0;
                  v266 = 0;
                }
                if ((v260 & 1) != 0) {
                  v275 =
                      *(_QWORD*)(*(_QWORD*)(v261 + 64) +
                                 8LL * (*(_DWORD*)(v257 + 4 * v266) & 0xFFF));
                  *(_WORD*)(v3 + 1824) = v265 | (1 << *(_BYTE*)(v275 + 104));
                  *(_QWORD*)(v3 + 1832) = (1LL << *(_BYTE*)(v275 + 250)) | v264;
                  *(_DWORD*)(v3 + 1828) = (1 << *(_BYTE*)(v275 + 115)) | v263;
                  *(_WORD*)(v3 + 1826) =
                      *(_WORD*)(*(_QWORD*)(v275 + 24) + 1064LL) | v262;
                }
              }
            }
          }
          UnitSkillList_84e640(v3 + 1744);
          UnitSkillList_84e760(v3 + 1744);
          v276 = *(_QWORD*)(v3 + 1784);
          v277 = *(_QWORD*)(v3 + 1776);
          *v39 = 0;
          v39[1] = 0;
          v278 = v276 - v277;
          if ((int)((unsigned __int64)(v276 - v277) >> 2) >= 1) {
            v279 = (int)(v278 >> 2);
            if (v279 <= 1) {
              v280 = 1;
            }
            else {
              v280 = (int)(v278 >> 2);
            }
            v281 = *GameData_212c880[0];
            if (v279 >= 2) {
              v287 = (int*)(v277 + 4);
              v282 = 0;
              v283 = 0;
              v284 = 0;
              v285 = 0;
              v286 = 0;
              do {
                v286 += 2;
                v288 = *(_QWORD*)(*(_QWORD*)(v281 + 64) +
                                  8LL * (*(v287 - 1) & 0xFFF));
                v289 = v285 | (1 << *(_BYTE*)(v288 + 104));
                *(_WORD*)(v3 + 1824) = v289;
                v290 = (1LL << *(_BYTE*)(v288 + 250)) | v284;
                *(_QWORD*)(v3 + 1832) = v290;
                v291 = (1 << *(_BYTE*)(v288 + 115)) | v283;
                *(_DWORD*)(v3 + 1828) = v291;
                v292 =
                    *(unsigned __int16*)(*(_QWORD*)(v288 + 24) + 1064LL) | v282;
                *(_WORD*)(v3 + 1826) = v292;
                v293 = *v287;
                v287 += 2;
                v294 = *(_QWORD*)(*(_QWORD*)(v281 + 64) + 8LL * (v293 & 0xFFF));
                v285 = v289 | (1 << *(_BYTE*)(v294 + 104));
                *(_WORD*)(v3 + 1824) = v285;
                v284 = (1LL << *(_BYTE*)(v294 + 250)) | v290;
                *(_QWORD*)(v3 + 1832) = v284;
                v283 = (1 << *(_BYTE*)(v294 + 115)) | v291;
                *(_DWORD*)(v3 + 1828) = v283;
                v282 =
                    *(unsigned __int16*)(*(_QWORD*)(v294 + 24) + 1064LL) | v292;
                *(_WORD*)(v3 + 1826) = v282;
              } while ((v280 & 0x7FFFFFFFFFFFFFFELL) != v286);
            }
            else {
              LOWORD(v282) = 0;
              v283 = 0;
              v284 = 0;
              LOWORD(v285) = 0;
              v286 = 0;
            }
            if ((v280 & 1) != 0) {
              v295 = *(_QWORD*)(*(_QWORD*)(v281 + 64) +
                                8LL * (*(_DWORD*)(v277 + 4 * v286) & 0xFFF));
              *(_WORD*)(v3 + 1824) = v285 | (1 << *(_BYTE*)(v295 + 104));
              *(_QWORD*)(v3 + 1832) = (1LL << *(_BYTE*)(v295 + 250)) | v284;
              *(_DWORD*)(v3 + 1828) = (1 << *(_BYTE*)(v295 + 115)) | v283;
              *(_WORD*)(v3 + 1826) =
                  *(_WORD*)(*(_QWORD*)(v295 + 24) + 1064LL) | v282;
            }
          }
          return UnitSkillList_850100(v3 + 1456, v3);
        }
      }
      v97 = 32;
      goto LABEL_128;
    }
  }
  v14 = *(_QWORD*)(v2 + 24);
  if (*(_DWORD*)(v14 + 24) == 0) {
    goto LABEL_37;
  }
  goto LABEL_32;
}

__int64 game_6c6ec0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64* v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  __int64* v9;
  unsigned int v10;
  bool v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  unsigned int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 (*v29)(_QWORD);
  __int64 v30;
  _QWORD* v31;
  bool v32;
  bool v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  bool v40;
  bool v41;
  unsigned __int64 v42;
  bool v43;
  _WORD* v44;
  __int64 v46;
  __int64 v47;
  __int16 v48;
  _WORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int16 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int16 v63;
  __int64 v64;
  __int16 v65;
  __int64 v66;
  __int16 v67;
  __int64 v68;
  __int16 v69;
  __int64 v70;
  __int16 v71;
  __int64 v72;
  __int16 v73;
  __int64 v74;
  __int16 v75;
  __int64 v76;
  __int16 v77;
  __int64 v78;
  __int16 v79;
  __int64 v80;
  __int16 v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  bool v87;
  bool v88;
  unsigned __int64 v89;
  bool v90;
  char v91;
  char v92;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int16 v99;
  __int16 v100;
  __int16 v101;
  __int16 v102;
  __int16 v103;
  __int16 v104;
  __int16 v105;
  __int16 v106;
  __int16 v107;
  __int16 v108;
  __int16 v109;
  __int16 v110;
  __int16 v111;
  __int16 v112;
  __int16 v113;
  __int64 v114;
  __int64* v115;
  __int64* v116;
  __int64 v117;
  __int64* v118;
  __int64 v119;
  int v120;
  __int64* v121;
  bool v123;
  char* v124;
  __int64* v125;
  int v126;
  _WORD* v127;
  struct {
    _QWORD v128[2];
    __int64 v129;
    char gap72_[8];
    _QWORD* v130;
  } v128_;
  struct {
    _QWORD v131[4];
    _QWORD* v132;
  } v131_;
  struct {
    __int64 v133[2];
    _QWORD* v134;
    char gap168_[8];
    __int64* v135;
  } v133_;

  if (*(_BYTE*)(a1 + 1944) == 0 ||
      *(_BYTE*)(*(_QWORD*)(a1 + 400) + 96LL) != 1) {
    goto LABEL_6;
  }
  v125 = GameData_212ceb0;
  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] +
                                                64LL) +
                                     8LL * *(unsigned __int8*)(a1 + 1944)) +
                          50LL) <=
      (unsigned int)*(unsigned __int8*)(a1 + 552)) {
    if (game_GameModeData_instance_ == 0 ||
        (*(_BYTE*)(game_GameModeData_instance_ + 56) & 0xFE) != 6) {
      v2 = (__int64*)(a1 + 1944);
      if (*(_QWORD*)(a1 + 408) != 0) {
        v2 = GameData_212ceb0;
      }
    }
    else {
    LABEL_6:
      v2 = GameData_212ceb0;
    }
    v125 = v2;
  }
  v126 = *(unsigned __int16*)(a1 + 1952);
  v3 = GameRoutine_6d36d0_alt1((_QWORD*)a1);
  v5 = *(_QWORD*)(a1 + 392);
  v6 = v3;
  if (v5 == 0) {
    goto LABEL_20;
  }
  v7 = v3[3];
  if (v7 == 0) {
    goto LABEL_20;
  }
  v8 = *(unsigned __int8*)(v5 + 48);
  v9 = v3 + 3;
  do {
    v10 = *(unsigned __int8*)(v7 + 26);
    v11 = v10 >= v8;
    if (v10 >= v8) {
      v12 = 0;
    }
    else {
      v12 = 8;
    }
    if (v11) {
      v9 = (__int64*)v7;
    }
    v7 = *(_QWORD*)(v7 + v12);
  } while (v7 != 0);
  if (v9 != v3 + 3 && v8 >= *((unsigned __int8*)v9 + 26)) {
    v13 = *((_WORD*)v9 + 14) & 0xFFF;
  }
  else {
  LABEL_20:
    v13 = 0;
  }
  v14 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v14 < 1) {
    v15 = 0;
  }
  else {
    v15 = 0;
    v16 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v14 - 1));
    if (v16 >= v13) {
      v16 = v13;
    }
    if (v13 >= *(_DWORD*)GameData_21d9988) {
      v17 = v16;
    }
    else {
      v17 = *(_DWORD*)GameData_21d9988;
    }
    while (1) {
      v18 = (v15 + (unsigned int)v14) >> 1;
      v19 = *(_DWORD*)(GameData_21d9988 + 4LL * v18);
      if (v17 == v19) {
        break;
      }
      if (v17 < v19) {
        LODWORD(v14) = (v15 + (unsigned int)v14) >> 1;
      }
      else {
        v15 = v18 + 1;
      }
      if ((int)v15 >= (int)v14) {
        goto LABEL_35;
      }
    }
    v15 = v18 + 1;
  }
LABEL_35:
  v127 = nullptr;
  v20 = v15;
  v21 = 5LL * v15;
  v22 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                              8LL * *(unsigned __int8*)v3) +
                   24LL);
  if (v5 != 0 && *(_QWORD*)(a1 + 408) == 0) {
    if (*(_WORD*)(v5 + 408) == 0 ||
        (v23 = *(_QWORD*)(v5 + 24), v24 = *(_QWORD*)(v23 + 1792),
         v25 = *(_QWORD*)(v23 + 1800), v24 == v25)) {
    LABEL_51:
      v127 = nullptr;
    }
    else {
      while (*(_QWORD*)(v24 + 8) != 0) {
        v26 = v6;
        v27 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v28 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)(v24 + 8));
          if (v28 != 0) {
            v29 = *(__int64 (**)(_QWORD))(v28 + 72);
            v30 = *(_QWORD*)(v28 + 80);
            v31 = (_QWORD*)(v28 + (v30 >> 1));
            if ((v30 & 1) != 0) {
              v29 = *(__int64 (**)(_QWORD))((char*)v29 + *v31);
            }
            LOBYTE(v3) = v29(v31);
          }
          else {
            LOBYTE(v3) = 1;
          }
        }
        v32 = v27 == 0;
        v6 = v26;
        v33 = v32;
        if (*(_BYTE*)(v24 + 24) == ((v33 | (unsigned __int8)v3) & 1)) {
          break;
        }
        v24 += 32;
        if (v24 == v25) {
          goto LABEL_51;
        }
      }
      v127 = *(_WORD**)v24;
    }
  }
  v34 = v20 + 2 * v21;
  v35 = game_g_shared_system_skills_ptr;
  v36 = *(_QWORD*)(a1 + 1752);
  v37 = *(unsigned int*)((char*)((_UNKNOWN*)0x1CCLL) +
                         game_g_shared_system_skills_ptr);
  LODWORD(v133_.v133[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1CCLL) +
                                      game_g_shared_system_skills_ptr) &
                           0xFFF;
  v38 = *(_QWORD*)(a1 + 1744);
  v39 = (v36 - v38) >> 2;
  if (v39 >= ((v37 >> 5) & 0x7F) + 1 &&
      ((*(_DWORD*)(v38 + 4 * ((v37 >> 5) & 0x7F)) >> v37) & 1) != 0) {
    v40 = game_HasActiveSkill_843420_alt1(v133_.v133, a1 + 1744);
    v38 = *(_QWORD*)(a1 + 1744);
    v41 = v40;
    v39 = (*(_QWORD*)(a1 + 1752) - v38) >> 2;
  }
  else {
    v41 = false;
  }
  v124 = (char*)(v22 + v34);
  v42 = *(unsigned int*)((char*)((_UNKNOWN*)0x1D0LL) + v35);
  LODWORD(v133_.v133[0]) =
      *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1D0LL) + v35) & 0xFFF;
  v43 = v39 >= ((v42 >> 5) & 0x7F) + 1 &&
        ((*(_DWORD*)(v38 + 4 * ((v42 >> 5) & 0x7F)) >> v42) & 1) != 0 &&
        game_HasActiveSkill_843420_alt1(v133_.v133, a1 + 1744);
  v44 = (_WORD*)(a1 + 716);
  game_UnitConst_CapabilityEnhance_Commit((_QWORD*)(a1 + 716), a1 + 1744);
  v123 = v41;
  if (!v41) {
    v49 = v127 + 63;
    if (v43) {
      v50 = a1 + 716;
      v51 = 0;
      while (1) {
        if (v126 != 0) {
          *v44 += *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * *(unsigned __int16*)(a1 + 1952)) +
                            2 * v51 + 126);
        }
        if (v127 != nullptr) {
          *v44 += v49[v51];
        }
        v128_.v129 = v51;
        v128_.v130 = v128_.v128;
        v131_.v132 = v131_.v131;
        v133_.v133[0] = (__int64)GameData_1f92f88;
        v133_.v133[1] = 13;
        v133_.v134 = v131_.v131;
        v133_.v135 = v133_.v133;
        v128_.v128[0] = GameData_1f91a68;
        v128_.v128[1] = v50;
        v131_.v131[0] = GameData_1f93088;
        v131_.v131[1] = v128_.v128;
        game_UnitItemList_EachItem_alt1((_WORD*)(a1 + 828),
                                        (__int64)v133_.v133);
        if (v133_.v135 == v133_.v133) {
          v53 = 32;
        }
        else {
          if (v133_.v135 == nullptr) {
            goto LABEL_82;
          }
          v53 = 40;
        }
        (*(void (**)(__int64))(*v133_.v135 + v53))((__int64)v133_.v135);
      LABEL_82:
        if (v131_.v132 == v131_.v131) {
          v54 = 32;
        }
        else {
          if (v131_.v132 == nullptr) {
            goto LABEL_87;
          }
          v54 = 40;
        }
        (*(void (**)(__int64))(*v131_.v132 + v54))((__int64)v131_.v132);
      LABEL_87:
        if (v128_.v130 == v128_.v128) {
          v52 = 32;
        }
        else {
          if (v128_.v130 == nullptr) {
            goto LABEL_72;
          }
          v52 = 40;
        }
        (*(void (**)(__int64))(*v128_.v130 + v52))((__int64)v128_.v130);
      LABEL_72:
        ++v51;
        v50 += 8;
        v44 += 4;
        if (v51 == 11) {
          goto LABEL_194;
        }
      }
    }
    v55 = a1 + 716;
    v56 = 0;
    while (1) {
      if (*(_BYTE*)v125 != 0) {
        *v44 += *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] +
                                                64LL) +
                                     8LL * *(unsigned __int8*)v125) +
                          2 * v56 + 112);
      }
      if (*(_BYTE*)v6 != 0) {
        v58 = *(_QWORD*)(a1 + 400);
        if (v58 != 0) {
          v59 = *(unsigned __int8*)(v58 + 120);
        }
        else {
          v59 = 1;
        }
        *v44 += v59 * v124[v56];
      }
      if (v126 != 0) {
        *v44 += *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *(unsigned __int16*)(a1 + 1952)) +
                          2 * v56 + 126);
      }
      if (v127 != nullptr) {
        *v44 += v49[v56];
      }
      v128_.v129 = v56;
      v128_.v130 = v128_.v128;
      v131_.v132 = v131_.v131;
      v133_.v134 = v131_.v131;
      v133_.v135 = v133_.v133;
      v128_.v128[0] = GameData_1f91a68;
      v128_.v128[1] = v55;
      v131_.v131[0] = GameData_1f93088;
      v131_.v131[1] = v128_.v128;
      v133_.v133[0] = (__int64)GameData_1f92f88;
      v133_.v133[1] = 13;
      game_UnitItemList_EachItem_alt1((_WORD*)(a1 + 828), (__int64)v133_.v133);
      if (v133_.v135 == v133_.v133) {
        v60 = 32;
      }
      else {
        if (v133_.v135 == nullptr) {
          goto LABEL_110;
        }
        v60 = 40;
      }
      (*(void (**)(__int64))(*v133_.v135 + v60))((__int64)v133_.v135);
    LABEL_110:
      if (v131_.v132 == v131_.v131) {
        v61 = 32;
      }
      else {
        if (v131_.v132 == nullptr) {
          goto LABEL_115;
        }
        v61 = 40;
      }
      (*(void (**)(__int64))(*v131_.v132 + v61))((__int64)v131_.v132);
    LABEL_115:
      if (v128_.v130 == v128_.v128) {
        v57 = 32;
      }
      else {
        if (v128_.v130 == nullptr) {
          goto LABEL_93;
        }
        v57 = 40;
      }
      (*(void (**)(__int64))(*v128_.v130 + v57))((__int64)v128_.v130);
    LABEL_93:
      ++v56;
      v55 += 8;
      v44 += 4;
      if (v56 == 11) {
        goto LABEL_194;
      }
    }
  }
  if (!v43) {
    v46 = *(unsigned __int8*)v125;
    if (*(_BYTE*)v125 != 0) {
      *v44 += *(
          _WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL) +
                             8 * v46) +
                  112LL);
    }
    if (*(_BYTE*)v6 != 0) {
      v47 = *(_QWORD*)(a1 + 400);
      if (v47 != 0) {
        v48 = *(unsigned __int8*)(v47 + 120);
      }
      else {
        v48 = 1;
      }
      *v44 += v48 * *v124;
    }
    if ((_DWORD)v46 != 0) {
      *(_WORD*)(a1 + 724) += *(
          _WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL) +
                             8 * v46) +
                  114LL);
    }
    if (*(_BYTE*)v6 != 0) {
      v62 = *(_QWORD*)(a1 + 400);
      if (v62 != 0) {
        v63 = *(unsigned __int8*)(v62 + 120);
      }
      else {
        v63 = 1;
      }
      *(_WORD*)(a1 + 724) += v63 * v124[1];
    }
    if ((_DWORD)v46 != 0) {
      *(_WORD*)(a1 + 732) += *(
          _WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL) +
                             8 * v46) +
                  116LL);
    }
    if (*(_BYTE*)v6 != 0) {
      v64 = *(_QWORD*)(a1 + 400);
      if (v64 != 0) {
        v65 = *(unsigned __int8*)(v64 + 120);
      }
      else {
        v65 = 1;
      }
      *(_WORD*)(a1 + 732) += v65 * v124[2];
    }
    if ((_DWORD)v46 != 0) {
      *(_WORD*)(a1 + 740) += *(
          _WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL) +
                             8 * v46) +
                  118LL);
    }
    if (*(_BYTE*)v6 != 0) {
      v66 = *(_QWORD*)(a1 + 400);
      if (v66 != 0) {
        v67 = *(unsigned __int8*)(v66 + 120);
      }
      else {
        v67 = 1;
      }
      *(_WORD*)(a1 + 740) += v67 * v124[3];
    }
    if ((_DWORD)v46 != 0) {
      *(_WORD*)(a1 + 748) += *(
          _WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL) +
                             8 * v46) +
                  120LL);
    }
    if (*(_BYTE*)v6 != 0) {
      v68 = *(_QWORD*)(a1 + 400);
      if (v68 != 0) {
        v69 = *(unsigned __int8*)(v68 + 120);
      }
      else {
        v69 = 1;
      }
      *(_WORD*)(a1 + 748) += v69 * v124[4];
    }
    if ((_DWORD)v46 != 0) {
      *(_WORD*)(a1 + 756) += *(
          _WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL) +
                             8 * v46) +
                  122LL);
    }
    if (*(_BYTE*)v6 != 0) {
      v70 = *(_QWORD*)(a1 + 400);
      if (v70 != 0) {
        v71 = *(unsigned __int8*)(v70 + 120);
      }
      else {
        v71 = 1;
      }
      *(_WORD*)(a1 + 756) += v71 * v124[5];
    }
    if ((_DWORD)v46 != 0) {
      *(_WORD*)(a1 + 764) += *(
          _WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL) +
                             8 * v46) +
                  124LL);
    }
    if (*(_BYTE*)v6 != 0) {
      v72 = *(_QWORD*)(a1 + 400);
      if (v72 != 0) {
        v73 = *(unsigned __int8*)(v72 + 120);
      }
      else {
        v73 = 1;
      }
      *(_WORD*)(a1 + 764) += v73 * v124[6];
    }
    if ((_DWORD)v46 != 0) {
      *(_WORD*)(a1 + 772) += *(
          _WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL) +
                             8 * v46) +
                  126LL);
    }
    if (*(_BYTE*)v6 != 0) {
      v74 = *(_QWORD*)(a1 + 400);
      if (v74 != 0) {
        v75 = *(unsigned __int8*)(v74 + 120);
      }
      else {
        v75 = 1;
      }
      *(_WORD*)(a1 + 772) += v75 * v124[7];
    }
    if ((_DWORD)v46 != 0) {
      *(_WORD*)(a1 + 780) += *(
          _WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL) +
                             8 * v46) +
                  128LL);
    }
    if (*(_BYTE*)v6 != 0) {
      v76 = *(_QWORD*)(a1 + 400);
      if (v76 != 0) {
        v77 = *(unsigned __int8*)(v76 + 120);
      }
      else {
        v77 = 1;
      }
      *(_WORD*)(a1 + 780) += v77 * v124[8];
    }
    if ((_DWORD)v46 != 0) {
      *(_WORD*)(a1 + 788) += *(
          _WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL) +
                             8 * v46) +
                  130LL);
    }
    if (*(_BYTE*)v6 != 0) {
      v78 = *(_QWORD*)(a1 + 400);
      if (v78 != 0) {
        v79 = *(unsigned __int8*)(v78 + 120);
      }
      else {
        v79 = 1;
      }
      *(_WORD*)(a1 + 788) += v79 * v124[9];
    }
    if ((_DWORD)v46 != 0) {
      *(_WORD*)(a1 + 796) += *(
          _WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL) +
                             8 * v46) +
                  132LL);
    }
    if (*(_BYTE*)v6 != 0) {
      v80 = *(_QWORD*)(a1 + 400);
      if (v80 != 0) {
        v81 = *(unsigned __int8*)(v80 + 120);
      }
      else {
        v81 = 1;
      }
      *(_WORD*)(a1 + 796) += v81 * v124[10];
    }
  }
LABEL_194:
  v82 = game_g_shared_system_skills_ptr;
  v83 = *(_QWORD*)(a1 + 1752);
  v84 = *(unsigned int*)((char*)((_UNKNOWN*)0xD4LL) +
                         game_g_shared_system_skills_ptr);
  LODWORD(v133_.v133[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xD4LL) +
                                      game_g_shared_system_skills_ptr) &
                           0xFFF;
  v85 = *(_QWORD*)(a1 + 1744);
  v86 = (v83 - v85) >> 2;
  if (v86 >= ((v84 >> 5) & 0x7F) + 1 &&
      ((*(_DWORD*)(v85 + 4 * ((v84 >> 5) & 0x7F)) >> v84) & 1) != 0) {
    v87 = game_HasActiveSkill_843420_alt1(v133_.v133, a1 + 1744);
    v85 = *(_QWORD*)(a1 + 1744);
    v88 = v87;
    v86 = (*(_QWORD*)(a1 + 1752) - v85) >> 2;
  }
  else {
    v88 = false;
  }
  v89 = *(unsigned int*)((char*)((_UNKNOWN*)0xD8LL) + v82);
  LODWORD(v133_.v133[0]) =
      *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xD8LL) + v82) & 0xFFF;
  if (v86 >= ((v89 >> 5) & 0x7F) + 1 &&
      ((*(_DWORD*)(v85 + 4 * ((v89 >> 5) & 0x7F)) >> v89) & 1) != 0) {
    v90 = game_HasActiveSkill_843420_alt1(v133_.v133, a1 + 1744);
    v91 = v88;
    if (v88) {
      v92 = 3;
    }
    else {
      v92 = 2;
    }
    if (v90) {
      v91 = v92;
    }
  }
  else {
    v91 = v88;
  }
  *(_BYTE*)(a1 + 804) = v91;
  game_UnitConst_BattleInternal_Commit((_QWORD*)(a1 + 626), a1 + 1744);
  game_UnitConst_BattleEnhance_Commit((_QWORD*)(a1 + 644), a1 + 1744);
  v133_.v133[0] = 0x200000;
  *(_BYTE*)(a1 + 807) =
      game_UnitSkillList_GetTotalValue((_QWORD*)(a1 + 1744), v133_.v133);
  v133_.v133[0] = 0x20000000;
  *(float*)(a1 + 808) =
      game_UnitSkillList_GetTotalRatio((_QWORD*)(a1 + 1744), v133_.v133);
  if (!v123) {
    v133_.v135 = v133_.v133;
    v128_.v128[0] = GameData_1f91ae8;
    v128_.v128[1] = a1;
    v128_.v130 = v128_.v128;
    v131_.v131[0] = GameData_1f93088;
    v131_.v131[1] = v128_.v128;
    v131_.v132 = v131_.v131;
    v133_.v133[0] = (__int64)GameData_1f92f88;
    v133_.v133[1] = 13;
    v133_.v134 = v131_.v131;
    game_UnitItemList_EachItem_alt1((_WORD*)(a1 + 828), (__int64)v133_.v133);
    if (v133_.v135 == v133_.v133) {
      v96 = 32;
    }
    else {
      if (v133_.v135 == nullptr) {
        goto LABEL_213;
      }
      v96 = 40;
    }
    (*(void (**)(__int64))(*v133_.v135 + v96))((__int64)v133_.v135);
  LABEL_213:
    if (v131_.v132 == v131_.v131) {
      v97 = 32;
    }
    else {
      if (v131_.v132 == nullptr) {
        goto LABEL_218;
      }
      v97 = 40;
    }
    (*(void (**)(__int64))(*v131_.v132 + v97))((__int64)v131_.v132);
  LABEL_218:
    if (v128_.v130 == v128_.v128) {
      v98 = 32;
    }
    else {
      if (v128_.v130 == nullptr) {
        goto LABEL_223;
      }
      v98 = 40;
    }
    (*(void (**)(__int64))(*v128_.v130 + v98))((__int64)v128_.v130);
  LABEL_223:
    if (v127 != nullptr) {
      v99 = *(_WORD*)(a1 + 652);
      *(_WORD*)(a1 + 644) += v127[54];
      v100 = v99 + v127[55];
      v101 = *(_WORD*)(a1 + 660);
      *(_WORD*)(a1 + 652) = v100;
      v102 = v101 + v127[56];
      v103 = *(_WORD*)(a1 + 668);
      *(_WORD*)(a1 + 660) = v102;
      v104 = v103 + v127[57];
      v105 = *(_WORD*)(a1 + 676);
      *(_WORD*)(a1 + 668) = v104;
      v106 = v105 + v127[58];
      v107 = *(_WORD*)(a1 + 684);
      *(_WORD*)(a1 + 676) = v106;
      v108 = v107 + v127[59];
      v109 = *(_WORD*)(a1 + 692);
      *(_WORD*)(a1 + 684) = v108;
      v110 = v109 + v127[60];
      v111 = *(_WORD*)(a1 + 700);
      *(_WORD*)(a1 + 692) = v110;
      v112 = v111 + v127[61];
      v113 = *(_WORD*)(a1 + 708);
      *(_WORD*)(a1 + 700) = v112;
      *(_WORD*)(a1 + 708) = v113 + v127[62];
    }
  }
  v114 = *(_QWORD*)(a1 + 408);
  if (v114 == 0) {
    v114 = *(_QWORD*)(a1 + 400);
    if (*(_QWORD*)(v114 + 88) != 0) {
      v115 = (__int64*)(a1 + 400);
      v116 = game_9a28e0_alt1(1);
      if (game_GameModeData_instance_ != 0) {
        v117 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v116);
        if (v117 != 0 && *(_DWORD*)(v117 + 32) != 0) {
          goto LABEL_241;
        }
      }
      v118 = game_9a28e0_alt1(2);
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_241;
      }
      v119 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v118);
      if (v119 != 0 && *(_DWORD*)(v119 + 32) != 0) {
        goto LABEL_236;
      }
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_241;
      }
      v120 = *(unsigned __int8*)(game_GameModeData_instance_ + 56);
      if ((unsigned int)(v120 - 4) < 2) {
        goto LABEL_241;
      }
      if ((unsigned int)(v120 - 6) < 2) {
      LABEL_236:
        v114 = *(_QWORD*)(*v115 + 88);
        goto LABEL_242;
      }
      if (v120 != 2) {
      LABEL_241:
        v114 = *v115;
        goto LABEL_242;
      }
      v121 = (__int64*)(*(_QWORD*)(a1 + 400) + 88LL);
      if ((*(_BYTE*)(a1 + 418) & 4) == 0) {
        v121 = (__int64*)(a1 + 400);
      }
      v114 = *v121;
    }
  }
LABEL_242:
  *(_BYTE*)(a1 + 812) = *(_BYTE*)(v114 + 398);
  *(_BYTE*)(a1 + 813) = *(_BYTE*)(v114 + 399);
  *(_BYTE*)(a1 + 814) = *(_BYTE*)(v114 + 400);
  *(_BYTE*)(a1 + 815) = *(_BYTE*)(v114 + 401);
  *(_BYTE*)(a1 + 816) = *(_BYTE*)(v114 + 402);
  *(_BYTE*)(a1 + 817) = *(_BYTE*)(v114 + 403);
  *(_BYTE*)(a1 + 818) = *(_BYTE*)(v114 + 404);
  *(_BYTE*)(a1 + 819) = *(_BYTE*)(v114 + 405);
  *(_BYTE*)(a1 + 820) = *(_BYTE*)(v114 + 406);
  *(_BYTE*)(a1 + 821) = *(_BYTE*)(v114 + 407);
  *(_BYTE*)(a1 + 822) = *(_BYTE*)(v114 + 408);
  *(_BYTE*)(a1 + 823) = *(_BYTE*)(v114 + 409);
  *(_BYTE*)(a1 + 824) = *(_BYTE*)(v114 + 410);
  return UnitConst_8f7920(a1 + 812, a1 + 1744);
}

__int64 game_6d32c0(__int64 result, __int64 a2, int a3, int a4, char a5,
                    __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8;
  __int64 v9;
  int v10;
  bool v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  char v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  int v30;
  __int64 v31;
  const char* v32;
  __int64 v33;
  const char* v34;
  struct {
    __int128 v35[2];
    __int64 v36;
    __int64 v37;
  } v35_;

  if ((*(_WORD*)(result + 1872) & 0xFFF) != 0) {
    if ((a4 | a3) < 0 ||
        ((v10 = *(_DWORD*)(result + 592), a3 < v10) ? (v11 = a4 < v10)
                                                    : (v11 = false),
         !v11 || ((v12 = a3 + v10 * a4) & 0x80000000) != 0 ||
             (v35_.v36 = v8, v35_.v37 = v9,
              *(char*)(*(_QWORD*)(result + 600) + 4LL * v12 + 2) < 1))) {
    LABEL_30:
      *(_BYTE*)(result + 805) = 0;
      return result;
    }
    v13 = *(_QWORD*)(result + 1744);
    v14 = *(_QWORD*)(result + 1752) - v13;
    LODWORD(v35_.v35[0]) = GameData_21d98a4 & 0xFFF;
    v15 = ((unsigned __int64)(unsigned int)GameData_21d98a4 >> 5) & 0x7F;
    if (v15 + 1 <= v14 >> 2 &&
        ((*(_DWORD*)(v13 + 4LL * (unsigned int)v15) >> GameData_21d98a4) & 1) !=
            0) {
      v16 = a2;
      v17 = a5;
      v18 = a4;
      v19 = a3;
      v20 = result;
      if (game_HasActiveSkill_843420_alt1(v35_.v35, result + 1744)) {
        result = v20;
        a2 = v16;
        a3 = v19;
        a4 = v18;
        a5 = v17;
        if ((*(_WORD*)(v20 + 1872) & 0xFFF) != 0) {
          v21 = *(_QWORD*)(v20 + 600);
          if ((int)((unsigned __int64)(*(_QWORD*)(v20 + 608) - v21) >> 2) >=
              1) {
            v22 = 2;
            v23 = 0;
            do {
              *(_BYTE*)(v21 + v22) = 0;
              ++v23;
              v22 += 4;
              v21 = *(_QWORD*)(v20 + 600);
            } while (
                v23 <
                (int)((unsigned __int64)(*(_QWORD*)(v20 + 608) - v21) >> 2));
          }
        }
      LABEL_23:
        if ((a5 & 1) != 0) {
          v25 = *(_QWORD*)(result + 1744);
          v26 = a2;
          v27 = *(_QWORD*)(result + 1752) - v25;
          LODWORD(v35_.v35[0]) = GameData_21d98a4 & 0xFFF;
          v28 = ((unsigned __int64)(unsigned int)GameData_21d98a4 >> 5) & 0x7F;
          if (v28 + 1 <= v27 >> 2 &&
              ((*(_DWORD*)(v25 + 4LL * (unsigned int)v28) >> GameData_21d98a4) &
               1) != 0) {
            v29 = a4;
            v30 = a3;
            v31 = result;
            if (game_HasActiveSkill_843420_alt1(v35_.v35, result + 1744)) {
              result = v31;
              a3 = *(int*)(v31 + 592) >> 1;
              v32 = "UI_Bmap_WallDestruction_AllBreak_Bal";
              a4 = a3;
            }
            else {
              v32 = "UI_Bmap_WallDestruction_Monster";
              result = v31;
              a3 = v30;
              a4 = v29;
            }
          }
          else {
            v32 = "UI_Bmap_WallDestruction_Monster";
          }
          v34 = v32;
          v33 = result;
          GameRoutine_960d20(v35_.v35, (_BYTE**)&v34,
                             (unsigned int)(a3 + *(char*)(result + 584)),
                             (unsigned int)(a4 + *(char*)(result + 585)), 1, 0,
                             a7, a8);
          EffectConst_961260(v26, (_BYTE**)&v34, (__int64)v35_.v35);
          result = v33;
        }
        goto LABEL_30;
      }
      v10 = *(_DWORD*)(v20 + 592);
      result = v20;
      a2 = v16;
      a3 = v19;
      a4 = v18;
      a5 = v17;
    }
    if (a3 < v10 && a4 < v10) {
      v24 = a3 + v10 * a4;
      if ((v24 & 0x80000000) == 0) {
        *(_BYTE*)(*(_QWORD*)(result + 600) + 4LL * v24 + 2) = 0;
      }
    }
    goto LABEL_23;
  }
  return result;
}

__int64 game_6d3520(__int64 result, __int64 a2, int a3, int a4, char a5,
                    __int64 a6, __int64 a7, __int64 a8)
{
  int v10;
  bool v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  const char* v22;
  const char* v23;
  __int128 v24[2];

  if ((*(_DWORD*)(result + 1872) & 0xFFF) != 0) {
    if (((a4 | a3) & 0x80000000) == 0 &&
        ((v10 = *(_DWORD*)(result + 592), a3 < v10) ? (v11 = a4 < v10)
                                                    : (v11 = false),
         v11)) {
      LODWORD(v13) = a3 + v10 * a4;
      if ((v13 & 0x80000000) != 0) {
        v14 = 0;
      }
      else {
        v14 = *(char*)(*(_QWORD*)(result + 600) + 4LL * (unsigned int)v13 + 2);
      }
      v12 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                           8LL * (*(_DWORD*)(result + 1872) &
                                                  0xFFF)) +
                                273LL);
      if (v14 < v12) {
        v13 = (int)v13;
      LABEL_14:
        *(_BYTE*)(*(_QWORD*)(result + 600) + 4 * v13 + 2) = v12;
        if ((a5 & 1) != 0) {
          v16 = result;
          v17 = *(_QWORD*)(result + 1744);
          v18 = *(unsigned int*)((char*)((_UNKNOWN*)0x1A4LL) +
                                 game_g_shared_system_skills_ptr);
          v19 = *(_QWORD*)(result + 1752) - v17;
          LODWORD(v24[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1A4LL) +
                                       game_g_shared_system_skills_ptr) &
                            0xFFF;
          if (((v18 >> 5) & 0x7F) + 1 <= v19 >> 2 &&
              ((*(_DWORD*)(v17 + 4 * ((v18 >> 5) & 0x7F)) >> v18) & 1) != 0) {
            v20 = a4;
            v21 = a3;
            if (game_HasActiveSkill_843420_alt1(v24, result + 1744)) {
              result = v16;
              a3 = *(int*)(v16 + 592) >> 1;
              v22 = "UI_Bmap_WallRepair_Bal";
              a4 = a3;
            }
            else {
              v22 = "UI_Bmap_WallRepair_Monster";
              result = v16;
              a3 = v21;
              a4 = v20;
            }
          }
          else {
            v22 = "UI_Bmap_WallRepair_Monster";
          }
          v23 = v22;
          GameRoutine_960d20(
              v24, (_BYTE**)&v23, (unsigned int)(a3 + *(char*)(result + 584)),
              (unsigned int)(a4 + *(char*)(result + 585)), 1, 0, a7, a8);
          EffectConst_961260(a2, (_BYTE**)&v23, (__int64)v24);
          result = v16;
        }
      }
    }
    else {
      LOBYTE(v12) =
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                               8LL * (*(_DWORD*)(result + 1872) & 0xFFF)) +
                    273LL);
      if ((_BYTE)v12 != 0) {
        v13 = -1;
        goto LABEL_14;
      }
    }
    *(_BYTE*)(result + 805) = 0;
  }
  return result;
}

__int64 game_6d7270(__int64 a1, __int64 a2, int a3)
{
  int v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 result;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[2];
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  int v32;
  int v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v20[0] = a2;
  v20[1] = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v31 = 0x3F80000000000000LL;
  if (game_GameModeData_instance_ != 0) {
    v4 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  }
  else {
    v4 = 0;
  }
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v32 = v4;
  v33 = 67072;
  if (a3 != 0) {
    goto LABEL_18;
  }
  if (game_GameModeData_instance_ == 0) {
    v5 = 0;
    a3 = *(unsigned __int8*)(a2 + 442);
    if (*(_BYTE*)(a2 + 442) != 0) {
      goto LABEL_18;
    }
    goto LABEL_11;
  }
  v5 = *(_DWORD*)(game_GameModeData_instance_ + 68);
  v6 = *(_QWORD*)(game_GameModeData_instance_ + 16);
  if (v6 != 0) {
    v5 += *(char*)(v6 + 128);
  }
  a3 = *(unsigned __int8*)(a2 + 442);
  if (*(_BYTE*)(a2 + 442) == 0) {
  LABEL_11:
    if (*(_BYTE*)(a2 + 443) != 0) {
      v7 = v5 + *(char*)(a2 + 443);
      if (v7 <= 1) {
        v7 = 1;
      }
      if (v7 >= 99) {
        a3 = 99;
      }
      else {
        a3 = v7;
      }
    }
    else {
      a3 = v5;
    }
  }
LABEL_18:
  v8 = *(unsigned __int8*)(a2 + 444);
  if (a3 > v8) {
    v8 = a3;
  }
  v30 = v8;
  game_6e4de0(v20);
  game_6e50e0((__int64)v20);
  GameRoutine_6e5480((__int64)v20);
  game_Unit_AutoGrowMasteryLevel(a1, v20);
  GameRoutine_11e9930(a1 + 1968);
  result = game_Unit_Unknown6d2380(a1);
  v10 = *(_DWORD*)(a1 + 416);
  if ((v10 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v10 | 0x10000000;
    game_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    result = game_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v35 != 0) {
    v12 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v36 = v35;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(v12 + v13, v35);
  }
  if (v27 != 0) {
    v14 = *v11;
    v28 = v27;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(v14 + v15, v27);
  }
  if (v24 != 0) {
    v16 = *v11;
    v25 = v24;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(v16 + v17, v24);
  }
  if (v21 != 0) {
    v18 = *v11;
    v22 = v21;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(v18 + v19, v21);
  }
  return result;
}

unsigned __int64* game_6e4de0(unsigned __int64* result)
{
  unsigned __int64* v1;
  unsigned int v2;
  char v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64** v13;
  int v14;
  __int64* v15;
  __int64 v16;
  int v17;
  unsigned __int64* v19;
  unsigned __int64** v20;
  unsigned __int64* v21;
  __int64 v22;
  unsigned __int64* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64** v26;
  unsigned __int64 v27;
  unsigned __int64* v28;
  unsigned __int64** v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41[3];

  v1 = result;
  if (*(_QWORD*)(*result + 304) == 0) {
    v6 = result[2];
    v7 = result[3];
    goto LABEL_12;
  }
  v2 = *((_DWORD*)result + 22);
  v3 = *((_BYTE*)result + 105);
  v40 = *(_QWORD*)(*result + 304);
  result = (unsigned __int64*)X8CALL_X0(
      __int64, game_GrowthListFile_GetJobChanges((void*)(v41), &v40, v2, v3));
  v4 = v1[2];
  if (v4 != 0) {
    v1[3] = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    result = (unsigned __int64*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
  }
  v6 = v41[0];
  v7 = v41[1];
  qmemcpy(v1 + 2, v41, 24);
  if (v6 != v7) {
    v8 = (__int64*)v6;
    while (1) {
      v9 = *v8++;
      if (v9 != 0) {
        break;
      }
      if (v8 == (__int64*)v7) {
        goto LABEL_10;
      }
    }
  LABEL_12:
    if (v6 != v7) {
      return result;
    }
    goto LABEL_13;
  }
LABEL_10:
  v1[3] = v6;
LABEL_13:
  v10 = (unsigned __int64*)v1[1];
  if (v10 == nullptr) {
    v11 = *v1;
    if (*(_QWORD*)(*v1 + 304) == 0 ||
        (v12 = *((unsigned int*)v1 + 22), v41[0] = *(_QWORD*)(*v1 + 304),
         result = (unsigned __int64*)game_GrowthListFile_GetJob(v41, v12, 6),
         v10 = result, result == nullptr)) {
      if (*(_QWORD*)(v11 + 64) != 0) {
        v10 = *(unsigned __int64**)(v11 + 64);
      }
      else {
        v10 = (unsigned __int64*)GameData_21c9988;
      }
    }
  }
  if (*((int*)v1 + 22) >= 1) {
    v13 = (unsigned __int64**)(v10 + 9);
    v14 = 1;
    v15 = GameData_212c650[0];
    do {
      v19 = v10;
      if (*v13 != nullptr) {
        v20 = v13;
        v19 = v10;
        do {
          if (*((_BYTE*)v19 + 49) != 0) {
            result = (unsigned __int64*)game_9a28e0_alt1(
                *(_DWORD*)&GameData_1b37730[4 * *((unsigned __int8*)v19 + 49) -
                                            4]);
            v21 = result;
            v22 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ == 0) {
              break;
            }
          }
          else {
            v21 = (unsigned __int64*)v15;
            v22 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ == 0) {
              break;
            }
          }
          result = (unsigned __int64*)game_GameVariableTable_Find(
              *(_QWORD**)(v22 + 48), v21);
          if (result == nullptr) {
            break;
          }
          if (*((_DWORD*)result + 8) <= v14) {
            break;
          }
          v19 = *v20;
          v23 = *v20;
          v24 = v23[9];
          v20 = (unsigned __int64**)(v23 + 9);
        } while (v24 != 0);
      }
      v26 = (unsigned __int64**)v1[3];
      v25 = v1[4];
      if ((unsigned __int64)v26 < v25) {
        *v26 = v19;
        v16 = (__int64)(v26 + 1);
      }
      else {
        v27 = v1[2];
        v28 = v10;
        v29 = v13;
        v30 = (char*)v26 - v27;
        v31 = (__int64)((__int64)v26 - v27) >> 3;
        v32 = v31 + 1;
        if ((unsigned __int64)(v31 + 1) >> 61 != 0) {
          GameRoutine_67afd0();
        }
        v33 = v25 - v27;
        if (v33 >> 2 > v32) {
          v32 = v33 >> 2;
        }
        if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF8LL) {
          v34 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v34 = v32;
        }
        if (v34 != 0) {
          if (v34 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v35 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v34, 16, 0);
        }
        else {
          v35 = 0;
        }
        v36 = v35 + 8 * v34;
        v37 = (char*)v26 - v27;
        v38 = (__int64)&v30[v35 + -8 * v31];
        *(_QWORD*)&v30[v35] = v19;
        v16 = (__int64)&v30[v35 + 8];
        result = (unsigned __int64*)memcpy(v38, v27, v37);
        v1[2] = v38;
        v1[3] = v16;
        v1[4] = v36;
        if (v27 != 0) {
          v39 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v39 = 56;
          }
          result = (unsigned __int64*)nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v27);
        }
        v10 = v28;
        v13 = v29;
        v15 = GameData_212c650[0];
      }
      v17 = *((_DWORD*)v1 + 22);
      v1[3] = v16;
    } while (v14++ < v17);
  }
  return result;
}

__int64 game_6e50e0(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  __int64 v14;
  bool v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46[3];

  v1 = (_QWORD*)result;
  if ((*(_BYTE*)(result + 108) & 1) != 0) {
    goto LABEL_2;
  }
  v6 = *(_QWORD*)result;
  if (*(_BYTE*)(result + 104) == 4 || (*(_BYTE*)(v6 + 49) & 1) == 0 ||
      *(_QWORD*)(v6 + 112) != 0) {
    v7 = *(_QWORD*)(v6 + 304);
    if (v7 != 0) {
    LABEL_8:
      v8 = *((_DWORD*)v1 + 22);
      v45 = v7;
      result =
          X8CALL_X0(__int64, game_127c260((void*)(v46), (__int64)&v45, v8));
      v9 = v1[5];
      if (v9 != 0) {
        v1[6] = v9;
        v10 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v10 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v9);
      }
      v12 = (char*)v46[0];
      v11 = v46[1];
      qmemcpy(v1 + 5, v46, 24);
      if (v12 == (char*)v11) {
      LABEL_16:
        v1[6] = v12;
      LABEL_24:
        v16 = (__int64*)v1[2];
        v17 = (__int64*)v1[3];
        if (v16 == v17) {
          return result;
        }
        v18 = *(_QWORD*)(*v1 + 112LL);
        while (1) {
          v19 = *v16;
          if (v18 != 0 && *(_BYTE*)(v19 + 96) == 2 &&
              (v20 = *(_QWORD*)(v19 + 112)) != 0 &&
              *(unsigned __int8*)(v18 + 32) == *(unsigned __int8*)(v20 + 32)) {
            v21 = v1[7];
            if ((unsigned __int64)v12 >= v21) {
              v25 = v1[5];
              v36 = &v12[-v25];
              v37 = (__int64)&v12[-v25] >> 3;
              v38 = v37 + 1;
              if ((unsigned __int64)(v37 + 1) >> 61 != 0) {
              LABEL_67:
                GameRoutine_6e56b0();
              }
              v39 = v21 - v25;
              if (v39 >> 2 > v38) {
                v38 = v39 >> 2;
              }
              if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF8LL) {
                v40 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v40 = v38;
              }
              if (v40 != 0) {
                if (v40 >> 61 != 0) {
                LABEL_68:
                  GameRoutine_60a210();
                }
                v41 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v40, 16, 0);
              }
              else {
                v41 = 0;
              }
              v42 = v41 + 8 * v40;
              v43 = &v12[-v25];
              v44 = (__int64)&v36[v41 + -8 * v37];
              *(_QWORD*)&v36[v41] = v18;
              v12 = &v36[v41 + 8];
              result = memcpy(v44, v25, v43);
              v1[5] = v44;
              v1[6] = v12;
              v1[7] = v42;
              if (v25 != 0) {
              LABEL_51:
                v35 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v35 = 56;
                }
                result = nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v25);
              }
            }
            else {
              *(_QWORD*)v12 = v18;
              v12 += 8;
            }
          }
          else {
            v22 = *(_QWORD*)(v19 + 112);
            if (v22 != 0) {
              if (*(_BYTE*)(v22 + 109) != 0) {
                v23 = v22;
              }
              else {
                v23 = 0;
              }
            }
            else {
              v23 = 0;
            }
            v24 = v1[7];
            if ((unsigned __int64)v12 < v24) {
              *(_QWORD*)v12 = v23;
              v12 += 8;
            }
            else {
              v25 = v1[5];
              v26 = &v12[-v25];
              v27 = (__int64)&v12[-v25] >> 3;
              v28 = v27 + 1;
              if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
                goto LABEL_67;
              }
              v29 = v24 - v25;
              if (v29 >> 2 > v28) {
                v28 = v29 >> 2;
              }
              if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
                v30 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v30 = v28;
              }
              if (v30 != 0) {
                if (v30 >> 61 != 0) {
                  goto LABEL_68;
                }
                v31 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v30, 16, 0);
              }
              else {
                v31 = 0;
              }
              v32 = v31 + 8 * v30;
              v33 = &v12[-v25];
              v34 = (__int64)&v26[v31 + -8 * v27];
              *(_QWORD*)&v26[v31] = v23;
              v12 = &v26[v31 + 8];
              result = memcpy(v34, v25, v33);
              v1[5] = v34;
              v1[6] = v12;
              v1[7] = v32;
              if (v25 != 0) {
                goto LABEL_51;
              }
            }
          }
          ++v16;
          v1[6] = v12;
          if (v16 == v17) {
            return result;
          }
        }
      }
      v13 = v12;
      while (1) {
        v14 = *(_QWORD*)v13;
        v13 += 8;
        if (v14 != 0) {
          break;
        }
        if (v13 == (char*)v11) {
          goto LABEL_16;
        }
      }
    LABEL_22:
      v15 = v12 == (char*)v11;
      v12 = (char*)v11;
      if (!v15) {
        return result;
      }
      goto LABEL_24;
    }
  LABEL_21:
    v12 = (char*)v1[5];
    v11 = v1[6];
    goto LABEL_22;
  }
  result = GameRoutine_ffd760(10, (__int64)&GameData_1a9f09e, 0, 0);
  if ((result & 1) != 0) {
    v7 = *(_QWORD*)(*v1 + 304LL);
    if (v7 != 0) {
      goto LABEL_8;
    }
    goto LABEL_21;
  }
LABEL_2:
  v2 = v1[5];
  result = (__int64)(v1 + 5);
  v3 = v1[3] - v1[2];
  v4 = v1[6] - v2;
  v46[0] = 0;
  v5 = v4 >> 3;
  if (v3 >> 3 > v5) {
    return (__int64)GameRoutine_6e56e0((_QWORD*)result, (v3 >> 3) - v5, v46);
  }
  if (v3 >> 3 < v5) {
    v1[6] = v2 + v3;
  }
  return result;
}

void game_6e8720(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;

  *(_QWORD*)a1 = 0;
  if (a2 != 0) {
    v2 = *(unsigned __int16*)(a2 + 16);
    *(_DWORD*)(a1 + 4) = 1;
    *(_WORD*)a1 = v2;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v2) +
                  73LL) == 17) {
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
      nn_os_UnlockMutex(&game_g_random_mutex);
      *(_DWORD*)(a1 + 4) =
          *(_DWORD*)(a1 + 4) & 0xFFFFC00F |
          (16 * (((16 * (v8 - 1000 * ((v8 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
                 0x3FF));
    }
  }
}

void game_6e8960(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;

  v2 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)a1 = 0;
  if (v2 != 0) {
    v3 = *(unsigned __int16*)(v2 + 16);
    *(_DWORD*)(a1 + 4) = 1;
    *(_WORD*)a1 = v3;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v3) +
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
      *(_DWORD*)(a1 + 4) =
          *(_DWORD*)(a1 + 4) & 0xFFFFC00F |
          (16 * (((16 * (v9 - 1000 * ((v9 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
                 0x3FF));
    }
  }
}

void game_6ea140()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char v39;
  char v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;
  char v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char v49;
  _BYTE v50[4];
  int v51;

  if (GameData_21ca310 != 0) {
    v0 = *(_QWORD**)(GameData_21ca310 + 56);
    v50[0] = 9;
    v1 = v0[69500];
    v2 = game_g_shared_system_skills_ptr;
    while (v1 != 0) {
      v11 = game_GameModeData_instance_;
      v12 = v1;
      if (game_GameModeData_instance_ != 0) {
        v11 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v1 = *(_QWORD*)(v1 + 432);
      v10 =
          *(_QWORD*)(v12 + 392) != v11 && (*(_BYTE*)(v12 + 418) & 8) == 0 &&
              (v13 = v12,
               v51 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v2) & 0xFFF,
               v14 = game_HasSkill((_QWORD*)(v12 + 1744), (unsigned int*)&v51),
               v12 = v13, (v14 & 1) == 0) ||
          v50[0] == 9;
      GameRoutine_6c47b0(v12, v50, v10, 0);
    }
    v50[0] = 9;
    v3 = v0[69503];
    while (v3 != 0) {
      v16 = game_GameModeData_instance_;
      v17 = v3;
      if (game_GameModeData_instance_ != 0) {
        v16 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v3 = *(_QWORD*)(v3 + 432);
      v15 =
          *(_QWORD*)(v17 + 392) != v16 && (*(_BYTE*)(v17 + 418) & 8) == 0 &&
              (v18 = v17,
               v51 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v2) & 0xFFF,
               v19 = game_HasSkill((_QWORD*)(v17 + 1744), (unsigned int*)&v51),
               v17 = v18, (v19 & 1) == 0) ||
          v50[0] == 9;
      GameRoutine_6c47b0(v17, v50, v15, 0);
    }
    v4 = v0[69506];
    v50[0] = 9;
    while (v4 != 0) {
      v21 = game_GameModeData_instance_;
      v22 = v4;
      if (game_GameModeData_instance_ != 0) {
        v21 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v4 = *(_QWORD*)(v4 + 432);
      v20 =
          *(_QWORD*)(v22 + 392) != v21 && (*(_BYTE*)(v22 + 418) & 8) == 0 &&
              (v23 = v22,
               v51 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v2) & 0xFFF,
               v24 = game_HasSkill((_QWORD*)(v22 + 1744), (unsigned int*)&v51),
               v22 = v23, (v24 & 1) == 0) ||
          v50[0] == 9;
      GameRoutine_6c47b0(v22, v50, v20, 0);
    }
    v50[0] = 9;
    v5 = v0[69509];
    while (v5 != 0) {
      v26 = game_GameModeData_instance_;
      v27 = v5;
      if (game_GameModeData_instance_ != 0) {
        v26 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v5 = *(_QWORD*)(v5 + 432);
      v25 =
          *(_QWORD*)(v27 + 392) != v26 && (*(_BYTE*)(v27 + 418) & 8) == 0 &&
              (v28 = v27,
               v51 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v2) & 0xFFF,
               v29 = game_HasSkill((_QWORD*)(v27 + 1744), (unsigned int*)&v51),
               v27 = v28, (v29 & 1) == 0) ||
          v50[0] == 9;
      GameRoutine_6c47b0(v27, v50, v25, 0);
    }
    v6 = v0[69512];
    v50[0] = 9;
    while (v6 != 0) {
      v31 = game_GameModeData_instance_;
      v32 = v6;
      if (game_GameModeData_instance_ != 0) {
        v31 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v6 = *(_QWORD*)(v6 + 432);
      v30 =
          *(_QWORD*)(v32 + 392) != v31 && (*(_BYTE*)(v32 + 418) & 8) == 0 &&
              (v33 = v32,
               v51 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v2) & 0xFFF,
               v34 = game_HasSkill((_QWORD*)(v32 + 1744), (unsigned int*)&v51),
               v32 = v33, (v34 & 1) == 0) ||
          v50[0] == 9;
      GameRoutine_6c47b0(v32, v50, v30, 0);
    }
    v50[0] = 9;
    v7 = v0[69515];
    while (v7 != 0) {
      v36 = game_GameModeData_instance_;
      v37 = v7;
      if (game_GameModeData_instance_ != 0) {
        v36 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v7 = *(_QWORD*)(v7 + 432);
      v35 =
          *(_QWORD*)(v37 + 392) != v36 && (*(_BYTE*)(v37 + 418) & 8) == 0 &&
              (v38 = v37,
               v51 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v2) & 0xFFF,
               v39 = game_HasSkill((_QWORD*)(v37 + 1744), (unsigned int*)&v51),
               v37 = v38, (v39 & 1) == 0) ||
          v50[0] == 9;
      GameRoutine_6c47b0(v37, v50, v35, 0);
    }
    v8 = v0[69518];
    v50[0] = 9;
    while (v8 != 0) {
      v41 = game_GameModeData_instance_;
      v42 = v8;
      if (game_GameModeData_instance_ != 0) {
        v41 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v8 = *(_QWORD*)(v8 + 432);
      v40 =
          *(_QWORD*)(v42 + 392) != v41 && (*(_BYTE*)(v42 + 418) & 8) == 0 &&
              (v43 = v42,
               v51 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v2) & 0xFFF,
               v44 = game_HasSkill((_QWORD*)(v42 + 1744), (unsigned int*)&v51),
               v42 = v43, (v44 & 1) == 0) ||
          v50[0] == 9;
      GameRoutine_6c47b0(v42, v50, v40, 0);
    }
    v9 = v0[69521];
    v50[0] = 9;
    while (v9 != 0) {
      v46 = game_GameModeData_instance_;
      v47 = v9;
      if (game_GameModeData_instance_ != 0) {
        v46 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v9 = *(_QWORD*)(v9 + 432);
      v45 =
          *(_QWORD*)(v47 + 392) != v46 && (*(_BYTE*)(v47 + 418) & 8) == 0 &&
              (v48 = v47,
               v51 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v2) & 0xFFF,
               v49 = game_HasSkill((_QWORD*)(v47 + 1744), (unsigned int*)&v51),
               v47 = v48, (v49 & 1) == 0) ||
          v50[0] == 9;
      GameRoutine_6c47b0(v47, v50, v45, 0);
    }
    GameRoutine_6ec020((unsigned __int64)v0);
  }
}

bool game_6ecba0(__int64 a1)
{
  int v2;
  _BOOL8 result;
  _DWORD* v4;
  _DWORD* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;
  int v23;

  if (game_GameModeData_instance_ != 0) {
    v2 = *(_DWORD*)(game_GameModeData_instance_ + 72);
  }
  else {
    v2 = 0;
  }
  if (v2 < (int)GameRoutine_9db9e0(0x16u, *(_DWORD*)(a1 + 44))) {
    return false;
  }
  v4 = *(_DWORD**)a1;
  v5 = *(_DWORD**)(a1 + 8);
  if (*(_DWORD**)a1 != v5) {
    v6 = GameData_212c878[0];
    v7 = (__int64*)game_TransporterConst_List_instance__ptr[0];
    v8 = game_map_MapRandom_instance__ptr[0];
    v9 = GameData_212d7f0[0] + 2;
    while (1) {
      v10 = *v6;
      if (*(_QWORD*)v4 != 0) {
        v11 = *(unsigned __int16*)(*(_QWORD*)v4 + 16LL);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * v11) + 73LL) ==
            17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v12 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8);
          v13 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4);
          v14 = *(_DWORD*)v8 ^ (*(_DWORD*)v8 << 11);
          *(_DWORD*)v8 = *((_DWORD*)v8 + 1);
          *((_DWORD*)v8 + 1) = v12;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) = v13;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4) =
              (v14 >> 8) ^ (v13 >> 19) ^ v14 ^ v13;
          nn_os_UnlockMutex(&game_g_random_mutex);
          v10 = *v6;
        }
      }
      else {
        v11 = 0;
      }
      v15 = *v7;
      v16 = *(_QWORD*)(v10 + 64);
      v23 = 0;
      v17 = *(_QWORD**)(v15 + 8);
      v18 = *(_QWORD*)(v16 + 8 * v11);
      v21_.v21[0] = v9;
      v21_.v21[1] = &v23;
      v21_.v22 = v21_.v21;
      game_TransporterConst_List_Impl_EachData(v17, v18, (__int64)v21_.v21);
      if (v21_.v22 == v21_.v21) {
        v19 = 32;
      }
      else {
        if (v21_.v22 == nullptr) {
          goto LABEL_17;
        }
        v19 = 40;
      }
      (*(void (**)(__int64))(*v21_.v22 + v19))((__int64)v21_.v22);
    LABEL_17:
      v20 = v4[2];
      result = v23 >= v20;
      if (v23 >= v20) {
        v4 += 4;
        if (v4 != v5) {
          continue;
        }
      }
      return result;
    }
  }
  return true;
}

__int64 game_6ecd40(__int64 a1)
{
  int v2;
  unsigned int v3;
  _DWORD* v4;
  _DWORD* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  _DWORD* v22;
  _DWORD* v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  __int64 v36;
  struct {
    _QWORD v37[4];
    _QWORD* v38;
  } v37_;

  if (game_GameModeData_instance_ != 0) {
    v2 = *(_DWORD*)(game_GameModeData_instance_ + 72);
  }
  else {
    v2 = 0;
  }
  if (v2 < (int)GameRoutine_9db9e0(0x16u, *(_DWORD*)(a1 + 44))) {
    return 0;
  }
  v4 = *(_DWORD**)a1;
  v5 = *(_DWORD**)(a1 + 8);
  if (*(_DWORD**)a1 != v5) {
    v6 = GameData_212c878[0];
    v7 = (__int64*)game_TransporterConst_List_instance__ptr[0];
    v8 = game_map_MapRandom_instance__ptr[0];
    v9 = GameData_212d7f0[0] + 2;
    while (1) {
      v10 = *v6;
      if (*(_QWORD*)v4 != 0) {
        v11 = *(unsigned __int16*)(*(_QWORD*)v4 + 16LL);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * v11) + 73LL) ==
            17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v12 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8);
          v13 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4);
          v14 = *(_DWORD*)v8 ^ (*(_DWORD*)v8 << 11);
          *(_DWORD*)v8 = *((_DWORD*)v8 + 1);
          *((_DWORD*)v8 + 1) = v12;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) = v13;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4) =
              (v14 >> 8) ^ (v13 >> 19) ^ v14 ^ v13;
          nn_os_UnlockMutex(&game_g_random_mutex);
          v10 = *v6;
        }
      }
      else {
        v11 = 0;
      }
      v15 = *v7;
      v16 = *(_QWORD*)(v10 + 64);
      LODWORD(v36) = 0;
      v17 = *(_QWORD**)(v15 + 8);
      v18 = *(_QWORD*)(v16 + 8 * v11);
      v37_.v37[0] = v9;
      v37_.v37[1] = &v36;
      v37_.v38 = v37_.v37;
      game_TransporterConst_List_Impl_EachData(v17, v18, (__int64)v37_.v37);
      if (v37_.v38 == v37_.v37) {
        break;
      }
      if (v37_.v38 != nullptr) {
        v19 = 40;
      LABEL_16:
        (*(void (**)(__int64))(*v37_.v38 + v19))((__int64)v37_.v38);
      }
      if ((int)v36 < v4[2]) {
        return 0;
      }
      v4 += 4;
      if (v4 == v5) {
        goto LABEL_19;
      }
    }
    v19 = 32;
    goto LABEL_16;
  }
LABEL_19:
  v20 = GameRoutine_9db9e0(0x16u, *(_DWORD*)(a1 + 44));
  if (game_GameModeData_instance_ != 0) {
    v21 = (*(_DWORD*)(game_GameModeData_instance_ + 72) - v20) &
          ~((*(_DWORD*)(game_GameModeData_instance_ + 72) - v20) >> 31);
    if (v21 >= 9999999) {
      v21 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v21;
  }
  v22 = *(_DWORD**)a1;
  v23 = *(_DWORD**)(a1 + 8);
  v3 = 1;
  if (v22 != v23) {
    v24 = game_TransporterConst_List_instance__ptr[0];
    v25 = GameData_212c878[0];
    v26 = game_map_MapRandom_instance__ptr[0];
    do {
      v27 = *(_QWORD*)v22;
      v37_.v37[0] = 0;
      if (v27 != 0) {
        v28 = *v25;
        v29 = *(unsigned __int16*)(v27 + 16);
        HIDWORD(v37_.v37[0]) = 1;
        v30 = *(_QWORD*)(v28 + 64);
        LOWORD(v37_.v37[0]) = v29;
        if (*(_BYTE*)(*(_QWORD*)(v30 + 8 * v29) + 73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v31 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26);
          v32 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26 + 4);
          v33 = *(_DWORD*)v26 ^ (*(_DWORD*)v26 << 11);
          *(_DWORD*)v26 = *((_DWORD*)v26 + 1);
          *((_DWORD*)v26 + 1) = v31;
          v34 = (v33 >> 8) ^ (v32 >> 19) ^ v33 ^ v32;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26) = v32;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26 + 4) = v34;
          nn_os_UnlockMutex(&game_g_random_mutex);
          HIDWORD(v37_.v37[0]) =
              HIDWORD(v37_.v37[0]) & 0xFFFFC00F |
              (16 *
               (((16 * (v34 - 1000 * ((v34 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
      TransporterConst_89b3d0((void*)(&v36), *(_QWORD*)(*(_QWORD*)v24 + 8LL),
                              v37_.v37, (unsigned int)v22[2]);
      v22 += 4;
    } while (v22 != v23);
    return 1;
  }
  return v3;
}

bool game_6ed370(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL);
  v2 = *(unsigned int*)((char*)((_UNKNOWN*)0x60LL) +
                        game_g_shared_system_skills_ptr + 4);
  v3 = (*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL) - v1) >> 2;
  if (v3 >= ((v2 >> 5) & 0x7F) + 1 &&
      ((*(_DWORD*)(v1 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) != 0) {
    return false;
  }
  v5 = *(unsigned int*)((char*)((_UNKNOWN*)0x6CLL) +
                        game_g_shared_system_skills_ptr);
  return v3 >= ((v5 >> 5) & 0x7F) + 1 &&
             ((*(_DWORD*)(v1 + 4 * ((v5 >> 5) & 0x7F)) >> v5) & 1) != 0 ||
         (unsigned int)*(unsigned __int8*)(a1 + 72) - 5 < 2;
}

__int64 game_6ed580(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  _BYTE* v8;
  bool v9;
  bool v10;
  unsigned __int8* v11;

  if (a2 != 0) {
    v2 = *(unsigned __int16*)(a1 + 16);
    v3 = GameData_212c878[0];
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v2) +
                  73LL) == 17) {
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
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) = v6;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4 + 4) =
          (v7 >> 8) ^ (v6 >> 19) ^ v7 ^ v6;
      nn_os_UnlockMutex(&game_g_random_mutex);
    }
    if ((_DWORD)v2 == 0) {
      return 0;
    }
    a1 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * v2);
    v8 = *(_BYTE**)(a1 + 192);
    v9 = v8 == nullptr || *(unsigned __int8*)(a1 + 72) > 7u;
    if (v9 || v8[105] == 0) {
      goto LABEL_19;
    }
  LABEL_16:
    if (v8[104] == 2) {
      v8 = nullptr;
    }
    goto LABEL_20;
  }
  v8 = *(_BYTE**)(a1 + 192);
  v10 = v8 == nullptr || *(unsigned __int8*)(a1 + 72) > 7u;
  if (!v10 && v8[105] != 0) {
    goto LABEL_16;
  }
LABEL_19:
  v8 = nullptr;
LABEL_20:
  if (v8 != nullptr) {
    v11 = v8 + 278;
  }
  else {
    v11 = (unsigned __int8*)(a1 + 92);
  }
  return *v11;
}

__int64 game_6ed690(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  _BYTE* v10;
  bool v11;
  _BYTE* v12;
  bool v13;
  unsigned __int8* v14;
  __int64 v15;
  unsigned __int8* v16;
  int v17;
  unsigned __int8* v19;

  if (a2 != 0) {
    v2 = *(unsigned __int16*)(a1 + 16);
    v3 = GameData_212c878[0];
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v2) +
                  73LL) == 17) {
      v4 = a2;
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
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v7;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) =
          (v8 >> 8) ^ (v7 >> 19) ^ v8 ^ v7;
      nn_os_UnlockMutex(&game_g_random_mutex);
      a2 = v4;
    }
    if ((_DWORD)v2 != 0) {
      v9 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * v2);
      v10 = *(_BYTE**)(v9 + 192);
      v11 = v10 == nullptr || *(unsigned __int8*)(v9 + 72) > 7u;
      if (v11 || v10[105] == 0) {
        v10 = nullptr;
      }
      else if (v10[104] == 2) {
        v10 = nullptr;
      }
      v14 = (unsigned __int8*)(v9 + 93);
      v15 = *(_QWORD*)(v9 + 24);
      if (v10 != nullptr) {
        v16 = v10 + 279;
      }
      else {
        v16 = v14;
      }
      v17 = *v16;
      return (unsigned int)game_UnitSkillList_GetRangeAddImpl(a2 + 1744,
                                                              v15 + 8) +
             v17;
    }
    else {
      return 0;
    }
  }
  else {
    v12 = *(_BYTE**)(a1 + 192);
    v13 = v12 == nullptr || *(unsigned __int8*)(a1 + 72) > 7u;
    if (v13 || v12[105] == 0) {
      v12 = nullptr;
    }
    else if (v12[104] == 2) {
      v12 = nullptr;
    }
    if (v12 != nullptr) {
      v19 = v12 + 279;
    }
    else {
      v19 = (unsigned __int8*)(a1 + 93);
    }
    return *v19;
  }
}

__int64 game_6fbae0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int16 v22;
  __int64 v23;
  _QWORD* v24;
  char v25;
  struct {
    _QWORD v26[4];
    _QWORD* v27;
  } v26_;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;
  struct {
    __int64 (**v30)();
    __int64 v31;
    _QWORD* v32;
    char gap120_[8];
    __int64 (***v33)();
  } v30_;
  __int64 v34;

  if (a2 == 0) {
    return 0;
  }
  result = *(_QWORD*)(a1 + 576);
  if (result != 0) {
    return result;
  }
  LODWORD(v30_.v30) = 0;
  GameRoutine_842b40((unsigned int*)&v30_.v30, (unsigned __int64*)a1);
  v5 = *(_QWORD*)(a2 + 1744);
  v6 = ((unsigned __int64)(unsigned int)v30_.v30 >> 5) & 0x7F;
  if (v6 + 1 > (*(_QWORD*)(a2 + 1752) - v5) >> 2 ||
      ((*(_DWORD*)(v5 + 4LL * (unsigned int)v6) >> (char)v30_.v30) & 1) == 0 ||
      !game_HasActiveSkill_843420_alt1(&v30_.v30, a2 + 1744)) {
    return 0;
  }
  v7 = a2;
  if (*(_WORD*)(a2 + 1952) != 0) {
    v8 = *(unsigned __int16*)(a1 + 16);
    v9 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                    8LL * *(unsigned __int16*)(a2 + 1952));
    v10 = v8 & 0xFFF;
    v11 = (v8 >> 5) & 0x7F;
    LODWORD(v30_.v30) = v10;
    v12 = *(_QWORD*)(v9 + 24);
    v14 = *(_QWORD*)(v12 + 8);
    v15 = *(_QWORD*)(v12 + 16);
    v13 = v12 + 8;
    if (v11 + 1 <= (unsigned __int64)((v15 - v14) >> 2) &&
        ((*(_DWORD*)(v14 + 4LL * (unsigned int)v11) >> v10) & 1) != 0) {
      v16 = game_HasActiveSkill_843420_alt1(&v30_.v30, v13);
      v7 = a2;
      if (v16) {
        return *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                          8LL * *(unsigned __int16*)(a2 + 1952));
      }
    }
  }
  v34 = 0;
  v26_.v26[1] = a1;
  v26_.v26[2] = &v34;
  v26_.v27 = v26_.v26;
  v26_.v26[0] = GameData_1f92a40;
  v28_.v28[0] = GameData_1f93088;
  v28_.v28[1] = v26_.v26;
  v30_.v33 = &v30_.v30;
  v28_.v29 = v28_.v28;
  v30_.v30 = GameData_1f92f88;
  v30_.v31 = 13;
  v30_.v32 = v28_.v28;
  game_UnitItemList_EachItem_alt1((_WORD*)(v7 + 828), (__int64)&v30_.v30);
  if (v30_.v33 == &v30_.v30) {
    v17 = 4;
  }
  else {
    if (v30_.v33 == nullptr) {
      goto LABEL_17;
    }
    v17 = 5;
  }
  ((__int64 (*)(__int64))(*v30_.v33)[v17])((__int64)v30_.v33);
LABEL_17:
  if (v28_.v29 == v28_.v28) {
    v18 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_22;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v28_.v29 + v18))((__int64)v28_.v29);
LABEL_22:
  if (v26_.v27 == v26_.v26) {
    v19 = 32;
  }
  else {
    if (v26_.v27 == nullptr) {
      goto LABEL_27;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*v26_.v27 + v19))((__int64)v26_.v27);
LABEL_27:
  result = v34;
  if (v34 != 0) {
    return result;
  }
  v28_.v28[0] = 0;
  v30_.v33 = &v30_.v30;
  v30_.v30 = GameData_1f92ac0;
  v30_.v31 = a1;
  v30_.v32 = v28_.v28;
  game_UnitItemList_EachItem_alt1((_WORD*)(a2 + 828), (__int64)&v30_.v30);
  if (v30_.v33 == &v30_.v30) {
    v20 = 4;
    goto LABEL_32;
  }
  if (v30_.v33 != nullptr) {
    v20 = 5;
  LABEL_32:
    ((__int64 (*)(__int64))(*v30_.v33)[v20])((__int64)v30_.v33);
  }
  result = v28_.v28[0];
  if (v28_.v28[0] == 0) {
    v21 = Unit_6de340(a2);
    if (v21 == 0) {
      return 0;
    }
    v22 = *(_WORD*)(a1 + 16);
    v23 = v21;
    v24 = (_QWORD*)(*(_QWORD*)(v21 + 24) + 8LL);
    LODWORD(v30_.v30) = v22 & 0xFFF;
    v25 = game_HasSkill(v24, (unsigned int*)&v30_.v30);
    result = v23;
    if ((v25 & 1) == 0) {
      return 0;
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_70d530(PSEUDO_X8 x8_, __int64 result)
{

#pragma clang fp contract(off)
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  char* v2;
  int v3;
  float32x4_t v4;
  int8x16_t v5;
  float32x4_t v6;
  float32x4_t v7;

  LANES128(*(a2)).n128_u64[1] = 0;
  LANES128(*(a2)).n128_u32[1] = 0;
  v2 = (char*)&GameData_21ca4e8 + (unsigned __int8)result;
  v3 = *v2;
  LODWORD(v2) = v2[256];
  LANES128(*(a2)).n128_f32[0] = (float)v3;
  v4 = *a2;
  LANES128(v4).n128_f32[2] = (float)(int)v2;
  LANES128(v4).n128_u32[3] = 0;
  v5 = vmulq_f32(v4, v4);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
          .n64_u64[0];
  LANES128(v5).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v5).n128_f32[0] > 0x0.0p+0f) {
    LANES128(v5).n128_u64[1] = LANES128(v5).n128_u64[0];
    v6 = vrsqrteq_f32(v5);
    v7 = vmulq_f32(v6, vrsqrtsq_f32(v6, vmulq_f32(v5, v6)));
    v4 = vbicq_s8(
        vmulq_f32(v4, vmulq_f32(v7, vrsqrtsq_f32(v7, vmulq_f32(v5, v7)))),
        vceqzq_f32(v5));
  }
  *a2 = v4;
  {
    result;
    return;
  }
}

void game_716f20()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned __int64 v21;

  v0 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = GameData_212cf90[0];
    v2 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0]);
    v3 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0] + 8);
    v4 = (_QWORD*)game_TransporterConst_List_instance__ptr[0];
    v5 = *(_QWORD*)game_TransporterConst_List_instance__ptr[0];
    v6 = ((v3 - v2) << 6) - 1;
    if (v3 == v2) {
      v6 = 0;
    }
    v7 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0] + 8) +
         *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0]);
    if (v6 == v7) {
      GameRoutine_71fb20_alt1((__int64*)GameData_212cf90[0]);
      v2 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v1);
      v7 = *(_QWORD*)((char*)((char*)0x20LL) + v1 + 8) +
           *(_QWORD*)((char*)((char*)0x20LL) + v1);
    }
    *(_QWORD*)(*(_QWORD*)(v2 + 8 * (v7 >> 9)) + 8 * (v7 & 0x1FF)) = v5;
    v8 = (__int64*)GameData_212cf98[0];
    *v4 = v0 + 2728;
    v9 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8);
    v10 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 8);
    v11 = ((v10 - v9) << 6) - 1;
    if (v10 == v9) {
      v11 = 0;
    }
    ++*(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v1);
    v12 = (_QWORD*)GameData_212cf80[0];
    v13 = *(_QWORD*)GameData_212cf80[0];
    v14 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v8 + 8) +
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v8);
    if (v11 == v14) {
      GameRoutine_720280_alt1(v8);
      v9 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8);
      v14 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v8 + 8) +
            *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v8);
    }
    *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v14 >> 9)) + 8 * (v14 & 0x1FF)) = v13;
    v15 = (__int64*)GameData_212cfa0;
    *v12 = v0 + 2744;
    v16 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15);
    v17 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15 + 8);
    v18 = ((v17 - v16) << 6) - 1;
    if (v17 == v16) {
      v18 = 0;
    }
    ++*(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v8);
    v19 = (_QWORD*)GameData_212cf88[0];
    v20 = *(_QWORD*)GameData_212cf88[0];
    v21 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v15 + 8) +
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v15);
    if (v18 == v21) {
      GameRoutine_7209e0_alt1(v15);
      v16 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15);
      v21 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v15 + 8) +
            *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v15);
    }
    *(_QWORD*)(*(_QWORD*)(v16 + 8 * (v21 >> 9)) + 8 * (v21 & 0x1FF)) = v20;
    *v19 = v0 + 2760;
    ++*(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v15);
  }
}

__int64 game_721330()
{
  GameData_21caa58 = 0;
  GameData_21caa60 = 0;
  GameData_21caa48 = 0;
  GameData_21caa50 = 0;
  GameData_21caa38 = 0;
  GameData_21caa40 = 0;
  GameRoutine_2b0();
  GameData_21caa68 = 0;
  GameData_21caa70 = 0;
  GameData_21caa78 = 0;
  GameData_21caa80 = 0;
  GameData_21caa88 = 0;
  GameData_21caa90 = 0;
  GameData_21caa98 = 0;
  GameData_21caaa0 = 0;
  GameData_21caaa8 = 0;
  return GameRoutine_2b0();
}

__int64 game_723200(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64** v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  double v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64* v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;
  __int64* v58;
  __int64* v59;
  _QWORD* v60;
  __int64* v61;
  __int64 v62;
  void (*v63)(__int64*);
  __int64 v64;
  __int64* v65;
  __int64* v66;
  __int64 v67;
  _QWORD* v68;
  __int64* v69;
  __int64 v70;
  __int64* v71;
  __int64* v72;
  _QWORD* v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  __int64* v77;
  void (*v78)(__int64);
  __int64 v79;
  __int64 v80;
  __int64* v81;
  __int64* v82;
  __int64 v83;
  void (*v84)(__int64);
  __int64 v85;
  __int64 v86;
  __int64* v87;
  __int64 v88;
  _QWORD* v89;
  void (*v90)(__int64);
  __int64** v91;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  __int64* v95;
  void (*v96)(__int64);
  __int64 v97;
  __int64* v98;
  __int64** v99;
  __int64* v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  __int64** v104;
  __int64 v105;
  _QWORD* v106;
  __int64 v107;
  __int64 v108;
  _QWORD* v109;
  unsigned __int64 v110;
  __int64 v111;
  const char** v112;
  char v113;
  __int64 v114;
  char v115;
  __int64* v116;
  __int64 v117;
  bool v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  char v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  char v126;
  __int64 v127;
  __int64 v128;
  __int64* v129;
  __int64* v130;
  __int64* v131;
  __int64 v132;
  __int64 v133;
  char v134[4];
  int v135;

  if ((*(_BYTE*)(result + 232) & 1) != 0) {
    return result;
  }
  v3 = result;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      328, 16, 0);
  v6 = (__int64*)v5;
  v7 = GameData_212ce90[0];
  if (*GameData_212ce90[0] == 0) {
    *GameData_212ce90[0] = v5;
    *GameData_212d1c8[0] = 1;
  }
  *(_DWORD*)(v5 + 20) = 0;
  v8 = GameData_212d1c0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_QWORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 248) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 30) = 0;
  *(_QWORD*)v5 = v8 + 2;
  *(_QWORD*)(v5 + 8) = v8 + 12;
  game_map_Situation_Clear_alt1(v5);
  v9 = *v6;
  *v7 = (__int64)v6;
  (*(void (**)(__int64*))(v9 + 16))(v6);
  v10 = fw_memory_HeapManager_Allocate(*v4, 16, 16, 0);
  v11 = (__int64*)v10;
  v12 = (__int64**)GameData_212c7f0[0];
  v13 = *(_QWORD*)GameData_212c7f0[0];
  if (*(_QWORD*)GameData_212c7f0[0] == 0) {
    *(_QWORD*)GameData_212c7f0[0] = v10;
    v13 = v10;
    *GameData_212d558 = 1;
  }
  v14 = *v4;
  *v11 = (__int64)(GameData_212d550 + 2);
  v15 = (_QWORD*)fw_memory_HeapManager_Allocate(v14, 40, 16, 0);
  v15[2] = 0;
  v15[3] = 0;
  v15[4] = 0;
  v11[1] = (__int64)v15;
  *v15 = game_map_anonymous_MapTransition_vtable;
  v15[1] = v15 + 2;
  v16 = *(_QWORD**)(v13 + 8);
  v17 = (_QWORD*)v16[2];
  v16 += 2;
  MapTransition_823980_alt1((__int64)(v16 - 1), v17);
  *v16 = 0;
  v16[1] = 0;
  *(v16 - 1) = v16;
  *((_DWORD*)v16 + 4) = 0;
  v18 = *v11;
  *v12 = v11;
  (*(void (**)(__int64*))(v18 + 16))(v11);
  v19 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 168, 16, 0);
  GameHr_729040(v19);
  *GameData_212ce98[0] = (__int64)v19;
  (*(void (**)(_QWORD*))(*v19 + 16LL))(v19);
  v20 = fw_memory_HeapManager_Allocate(*v4, 61632, 16, 0);
  v21 = v20;
  v22 = GameData_212ce80[0];
  if (*GameData_212ce80[0] == 0) {
    *GameData_212d2f8[0] = 1;
  }
  v23 = GameData_212d2e8[0];
  *(_QWORD*)(v20 + 61488) = 0;
  *(_QWORD*)(v20 + 61496) = 0;
  *(_QWORD*)(v20 + 61504) = 0;
  *(_QWORD*)(v20 + 61512) = 0;
  *(_QWORD*)(v20 + 61520) = 0;
  *(_QWORD*)(v20 + 61528) = 0;
  *(_QWORD*)(v20 + 61536) = 0;
  *(_QWORD*)(v20 + 61544) = 0;
  *(_QWORD*)(v20 + 61552) = 0;
  *(_QWORD*)(v20 + 61560) = 0;
  *(_QWORD*)(v20 + 61568) = 0;
  *(_QWORD*)(v20 + 61576) = 0;
  *(_QWORD*)(v20 + 61584) = 0;
  *(_QWORD*)(v20 + 61592) = 0;
  *(_QWORD*)(v20 + 61600) = 0;
  *(_QWORD*)(v20 + 61608) = 0;
  *(_QWORD*)v20 = v23 + 2;
  v24 = GameData_212d2f0;
  *(_DWORD*)(v20 + 61624) = 0;
  *(_QWORD*)(v20 + 61448) = v20 + 8;
  *(_QWORD*)(v20 + 61456) = v20 + 20488;
  *(_QWORD*)(v20 + 61464) = v20 + 40968;
  *(_QWORD*)(v20 + 61616) = v24 + 2;
  memset_alt1(v20 + 8, 0, 0xF000u);
  *v22 = v21;
  GameRoutine_7c4ed0(v21);
  v25 = fw_memory_HeapManager_Allocate(*v4, 24, 16, 0);
  v26 = (__int64*)v25;
  v27 = GameData_212cfb8[0];
  if (*GameData_212cfb8[0] == 0) {
    *GameData_212cfb8[0] = v25;
    *GameData_212d340 = 1;
  }
  v28 = *v4;
  v29 = GameData_212d338 + 12;
  *v26 = (__int64)(GameData_212d338 + 2);
  v26[1] = (__int64)v29;
  v30 = (_QWORD*)fw_memory_HeapManager_Allocate(v28, 92864, 16, 0);
  GameHr_7c89e0(v30);
  v31 = *v26;
  v26[2] = (__int64)v30;
  *v27 = (__int64)v26;
  (*(void (**)(__int64*))(v31 + 16))(v26);
  v32 = fw_memory_HeapManager_Allocate(*v4, 56, 16, 0);
  v33 = (__int64*)v32;
  v34 = GameData_212cfc0[0];
  if (*GameData_212cfc0[0] == 0) {
    *GameData_212cfc0[0] = v32;
    *GameData_212d0b0 = 1;
  }
  *(_DWORD*)(v32 + 40) = 0;
  *(_BYTE*)(v32 + 24) = 1;
  v35 = GameData_212d0a8;
  v36 = *v4;
  v37 = GameData_212d0a8 + 14;
  *v33 = (__int64)(GameData_212d0a8 + 2);
  v33[1] = (__int64)v37;
  v33[2] = (__int64)(v35 + 20);
  v33[4] = (__int64)(v35 + 24);
  v38 = fw_memory_HeapManager_Allocate(v36, 288, 16, 0);
  v39 = game_7305a0(v38);
  v40 = *v33;
  v33[6] = v38;
  *v34 = (__int64)v33;
  (*(void (**)(__int64*, double))(v40 + 16))(v33, v39);
  v41 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 448, 16, 0);
  v42 = (__int64)v41;
  v43 = GameData_212cfc8[0];
  if (*GameData_212cfc8[0] == 0) {
    *GameData_212cfc8[0] = (__int64)v41;
    *GameData_212d2b0[0] = 1;
  }
  v44 = GameData_212d2a8 + 8;
  *v41 = GameData_212d2a8 + 2;
  v41[1] = v44;
  Camera_b3ac00_alt1((__int64)(v41 + 2));
  *(_BYTE*)(v42 + 149) = 1;
  *(_QWORD*)(v42 + 140) = 0x469C40003DCCCCCDLL;
  v45 = GameData_212d2a0[0];
  v46 = *v4;
  *(_DWORD*)(v42 + 424) = 0;
  *(_QWORD*)v42 = v45 + 2;
  *(_QWORD*)(v42 + 8) = v45 + 14;
  *(_QWORD*)(v42 + 16) = v45 + 20;
  *(_QWORD*)(v42 + 376) = 1023;
  *(_QWORD*)(v42 + 408) = 1023;
  *(_QWORD*)(v42 + 416) = v45 + 38;
  v47 = fw_memory_HeapManager_Allocate(v46, 496, 16, 0);
  Camera_7be4c0_alt1(v47, v42);
  v48 = *(_QWORD*)v42;
  *(_QWORD*)(v42 + 432) = v47;
  *v43 = v42;
  (*(void (**)(__int64))(v48 + 16))(v42);
  v49 = fw_memory_HeapManager_Allocate(*v4, 12704, 16, 0);
  GameRoutine_743760_alt1(v49);
  *GameData_212cfd0[0] = v49;
  (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
  v50 = fw_memory_HeapManager_Allocate(*v4, 216, 16, 0);
  *(_BYTE*)(v50 + 16) = 1;
  *(_QWORD*)(v50 + 208) = 0;
  *(_DWORD*)(v50 + 196) = 0;
  *(_DWORD*)(v50 + 168) = 1;
  *(_BYTE*)(v50 + 200) = 0;
  *(_DWORD*)(v50 + 160) = 0;
  *(_BYTE*)(v50 + 164) = 9;
  *(_QWORD*)v50 = game_map_Route_vtable;
  *(_QWORD*)(v50 + 8) = Route_Destructor_727b20_ptr;
  *(_QWORD*)(v50 + 24) = Route_Destructor_727ba0_ptr;
  *GameData_212cfd8[0] = v50;
  v51 = fw_memory_HeapManager_Allocate(*v4, 16, 16, 0);
  v52 = (_QWORD*)v51;
  v53 = GameData_212cfe0[0];
  if (*GameData_212cfe0[0] == 0) {
    *GameData_212cfe0[0] = v51;
    *GameData_212de70[0] = 1;
  }
  v54 = *v4;
  *v52 = GameData_212de60[0] + 2;
  v55 = fw_memory_HeapManager_Allocate(v54, 16, 16, 0);
  *(_DWORD*)(v55 + 8) = 0;
  v56 = GameData_212de68;
  v52[1] = v55;
  *v53 = (__int64)v52;
  *(_QWORD*)v55 = v56 + 2;
  (*(void (**)(_QWORD*))(*v52 + 16LL))(v52);
  v57 = fw_memory_HeapManager_Allocate(*v4, 24, 16, 0);
  v58 = (__int64*)v57;
  v59 = GameData_212cfe8[0];
  if (*GameData_212cfe8[0] == 0) {
    *GameData_212cfe8[0] = v57;
    *GameData_212d1f0[0] = 1;
  }
  *(_DWORD*)(v57 + 16) = 0;
  v60 = GameData_21d21b8;
  v61 = GameData_212d1d8[0] + 10;
  *(_QWORD*)v57 = GameData_212d1d8[0] + 2;
  *(_QWORD*)(v57 + 8) = v61;
  GameRoutine_772ce0_alt1((__int64)&game_map_Action_units_, v60);
  GameData_21d21c0 = 0;
  game_map_Action_units_ = (__int64)&GameData_21d21b8;
  GameData_21d21b8 = nullptr;
  GameRoutine_772ce0_alt1((__int64)&game_map_Action_targets_, GameData_21d21d0);
  v62 = *v58;
  game_script_unit_g_damage_sequence = 0;
  game_map_Action_targets_ = (__int64)&GameData_21d21d0;
  v63 = *(void (**)(__int64*))(v62 + 16);
  GameData_21d21d0 = nullptr;
  *v59 = (__int64)v58;
  v63(v58);
  v64 = fw_memory_HeapManager_Allocate(*v4, 12896, 16, 0);
  GameRoutine_7475c0_alt1(v64);
  v65 = GameData_212ce88[0];
  if (*GameData_212ce88[0] == 0) {
    *GameData_212d1a8 = 1;
  }
  *(_BYTE*)(v64 + 12888) = 1;
  v66 = GameData_212d190[0];
  *v65 = v64;
  *(_QWORD*)v64 = v66 + 2;
  *(_QWORD*)(v64 + 12872) = v66 + 6;
  *(_QWORD*)(v64 + 12880) = v66 + 12;
  GameRoutine_74c460(v64 + 12872);
  v67 = fw_memory_HeapManager_Allocate(*v4, 37104, 16, 0);
  GameRoutine_77b600_alt1(v67);
  *GameData_212cff0[0] = v67;
  (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
  v68 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 264, 16, 0);
  v68[14] = 0;
  v68[15] = 0;
  v68[16] = 0;
  v68[17] = 0;
  v68[18] = 0;
  v68[19] = 0;
  v68[20] = 0;
  v68[21] = 0;
  v68[22] = 0;
  v68[23] = 0;
  v68[24] = 0;
  v68[25] = 0;
  v68[26] = 0;
  v68[27] = 0;
  v68[28] = 0;
  v68[29] = 0;
  v69 = GameData_212ce58;
  v70 = *GameData_212ce58;
  v68[30] = 0;
  v68[31] = 0;
  v68[32] = 0;
  if (v70 == 0) {
    *GameData_212ce60 = 1;
  }
  v68[13] = 0;
  v68[14] = 0;
  v68[11] = 0;
  v68[12] = 0;
  v68[9] = 0;
  v68[10] = 0;
  v68[7] = 0;
  v68[8] = 0;
  v68[5] = 0;
  v68[6] = 0;
  v68[3] = 0;
  v68[4] = 0;
  v68[2] = 0;
  v68[16] = 0;
  v68[17] = 0;
  v68[18] = 0;
  v68[19] = 0;
  v68[21] = 0;
  v68[22] = 0;
  v68[23] = 0;
  v68[24] = 0;
  *((_DWORD*)v68 + 30) = 1065353216;
  *((_DWORD*)v68 + 40) = 1065353216;
  *((_DWORD*)v68 + 50) = 1065353216;
  v68[26] = 0;
  v68[27] = 0;
  v68[28] = 0;
  v68[29] = 0;
  v68[30] = 0;
  v68[31] = 0;
  *((_BYTE*)v68 + 256) = 0;
  v71 = GameData_212ce50[0] + 2;
  v72 = GameData_212ce50[0] + 10;
  *v69 = (__int64)v68;
  *v68 = v71;
  v68[1] = v72;
  GameRoutine_6bc3e0();
  v73 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 8, 16, 0);
  v74 = GameData_212ce40;
  if (*GameData_212ce40 == 0) {
    *GameData_212ce48[0] = 1;
  }
  v75 = GameData_212ce28_alt1[0];
  *v74 = (__int64)v73;
  *v73 = v75 + 16;
  GameRoutine_6b51b0();
  v76 = fw_memory_HeapManager_Allocate(*v4, 128, 16, 0);
  GameRoutine_823d90_alt1(v76);
  v77 = GameData_212cff8[0];
  v78 = *(void (**)(__int64))(*(_QWORD*)v76 + 16LL);
  *GameData_212cff8[0] = v76;
  v78(v76);
  v79 = fw_memory_HeapManager_Allocate(*v4, 1592, 16, 0);
  v80 = v79;
  v81 = GameData_212d000[0];
  if (*GameData_212d000[0] == 0) {
    *GameData_212d000[0] = v79;
    *GameData_212eb58 = 1;
  }
  memset_alt1(v79 + 16, 0, 0x618u);
  v82 = GameData_212eb50;
  *(_WORD*)(v80 + 1576) = 0;
  *(_QWORD*)(v80 + 8) = v82 + 9;
  *(_QWORD*)v80 = v82 + 2;
  EventManagerBase_Unknown2_alt1((_QWORD*)(v80 + 8));
  v83 = *(_QWORD*)v80;
  *(_WORD*)(v80 + 1576) = 0;
  *(_BYTE*)(v80 + 1578) = 0;
  *(_QWORD*)(v80 + 1584) = 0;
  v84 = *(void (**)(__int64))(v83 + 16);
  *v81 = v80;
  v84(v80);
  v85 = fw_memory_HeapManager_Allocate(*v4, 8, 16, 0);
  v86 = v85;
  v87 = GameData_212d008;
  if (*GameData_212d008 == 0) {
    *GameData_212d008 = v85;
    *GameData_212d4c0[0] = 1;
  }
  v88 = *v4;
  *(_QWORD*)v86 = GameData_212d488 + 2;
  v89 = (_QWORD*)fw_memory_HeapManager_Allocate(v88, 184, 16, 0);
  v89[6] = 0;
  v89[7] = 0;
  v89[12] = 0;
  v89[13] = 0;
  v89[22] = 0;
  v89[13] = 0;
  v89[14] = 0;
  v89[14] = 0;
  v89[15] = 0;
  v89[15] = 0;
  v89[16] = 0;
  v89[16] = 0;
  v89[17] = 0;
  *v89 = 0;
  v89[1] = 0;
  v89[2] = 0;
  v89[3] = 0;
  v89[4] = 0;
  v89[5] = 0;
  v89[8] = 0;
  v89[9] = 0;
  *((_DWORD*)v89 + 14) = 1065353216;
  *((_DWORD*)v89 + 24) = 1065353216;
  *((_DWORD*)v89 + 34) = 1065353216;
  *((_DWORD*)v89 + 44) = 1065353216;
  v89[10] = 0;
  v89[11] = 0;
  v89[18] = 0;
  v89[19] = 0;
  v89[20] = 0;
  v89[21] = 0;
  v89[8] = 0;
  v89[9] = 0;
  v89[10] = 0;
  v89[11] = 0;
  v89[18] = 0;
  v89[19] = 0;
  v89[20] = 0;
  v89[21] = 0;
  GameData_21ec7c8 = (__int64)v89;
  v90 = *(void (**)(__int64))(*(_QWORD*)v86 + 16LL);
  *v87 = v86;
  v90(v86);
  v91 = (__int64**)GameData_212d018[0];
  if (*(_QWORD*)GameData_212d018[0] != 0) {
    ++*GameData_212d010;
  }
  else {
    v92 = (__int64*)fw_memory_HeapManager_Allocate(*v4, 136, 16, 0);
    GameRoutine_f51010_alt1((__int64)v92);
    v93 = *v92;
    *v91 = v92;
    (*(void (**)(__int64*))(v93 + 16))(v92);
  }
  v94 = fw_memory_HeapManager_Allocate(*v4, 5560, 16, 0);
  MapDrawManager_f02ec0_alt1(v94);
  v95 = (__int64*)GameData_212d020[0];
  v96 = *(void (**)(__int64))(*(_QWORD*)v94 + 16LL);
  *(_QWORD*)GameData_212d020[0] = v94;
  v96(v94);
  v97 = fw_memory_HeapManager_Allocate(*v4, 96, 16, 0);
  v98 = (__int64*)v97;
  v99 = (__int64**)GameData_212d028[0];
  if (*(_QWORD*)GameData_212d028[0] == 0) {
    *(_QWORD*)GameData_212d028[0] = v97;
    *GameData_212ee50 = 1;
  }
  v100 = GameData_212ee48;
  *(_QWORD*)(v97 + 20) = 0;
  *(_QWORD*)(v97 + 26) = 0;
  *(_QWORD*)(v97 + 40) = 0;
  *(_QWORD*)(v97 + 48) = 0;
  *(_QWORD*)(v97 + 56) = 0;
  *(_QWORD*)(v97 + 64) = 0;
  *(_QWORD*)(v97 + 72) = 0;
  *(_QWORD*)(v97 + 80) = 0;
  *(_QWORD*)(v97 + 88) = 0;
  *(_DWORD*)(v97 + 16) = 1;
  *(_QWORD*)(v97 + 8) = v100 + 8;
  *(_QWORD*)v97 = v100 + 2;
  GameRoutine_72dbe0(v97 + 8);
  v101 = *v98;
  *v99 = v98;
  (*(void (**)(__int64*))(v101 + 16))(v98);
  v102 = fw_memory_HeapManager_Allocate(*v4, 16, 16, 0);
  v103 = (__int64*)v102;
  v104 = (__int64**)GameData_212d030[0];
  if (*(_QWORD*)GameData_212d030[0] == 0) {
    *(_QWORD*)GameData_212d030[0] = v102;
    *GameData_212fb98[0] = 1;
  }
  v105 = *v4;
  *v103 = (__int64)(GameData_212fb88[0] + 2);
  v106 = (_QWORD*)fw_memory_HeapManager_Allocate(v105, 8, 16, 0);
  *v106 = GameData_212fb90 + 2;
  if (*(_QWORD*)GameData_212c7d8[0] != 0) {
    game_graphics_ObjectTransparent_Run_alt1(
        *(float32x4_t**)GameData_212c7d8[0], 1);
  }
  v107 = *v103;
  v103[1] = (__int64)v106;
  *v104 = v103;
  (*(void (**)(__int64*))(v107 + 16))(v103);
  v108 = fw_memory_HeapManager_Allocate(*v4, 208, 16, 0);
  GameRoutine_fe9550_alt1(v108);
  *(_QWORD*)GameData_212d038[0] = v108;
  (*(void (**)(__int64))(*(_QWORD*)v108 + 16LL))(v108);
  v109 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 112, 16, 0);
  v109[2] = 0;
  v109[3] = 0;
  v109[4] = 0;
  v109[5] = 0;
  v109[6] = 0;
  v109[7] = 0;
  v109[8] = 0;
  v109[9] = 0;
  v109[10] = 0;
  v109[11] = 0;
  v109[12] = 0;
  v109[13] = 0;
  *v109 = game_map_anonymous_Impl_vtable;
  v109[1] = 0;
  GameRoutine_9ba840_alt1(v109 + 1);
  v110 = v109[5] + v109[6];
  *(_BYTE*)(*(_QWORD*)(v109[2] + 8 * (v110 >> 12)) + (v110 & 0xFFF)) = 0;
  ++v109[6];
  GameData_21f8040 = (__int64)v109;
  GameHr_960540();
  GameRoutine_1273480_alt1();
  v111 = fw_memory_HeapManager_Allocate(*v4, 1160, 16, 0);
  Impl_12262c0_alt1(v111);
  *GameData_21309c8[0] = v111;
  GameRoutine_73b640_alt1();
  if (game_GameModeData_instance_ != 0) {
    v112 = *(const char***)(game_GameModeData_instance_ + 16);
    if (v112 != nullptr) {
      GameHr_6b3be0(v112[4], v112[5]);
      if (*GameData_212c770[0] != 0 && game_GameModeData_instance_ != 0) {
        v113 = *(_BYTE*)(game_GameModeData_instance_ + 15);
      }
      else {
        v113 = 0;
      }
      GameRoutine_6b98c0_alt1(v112[7], v113);
      v114 = *v7;
      v115 = GameData_21eea58;
      if (GameData_21eea58 != 0) {
        v115 = *(_BYTE*)(GameData_21eea58 + 32);
      }
      v116 = GameData_212ce98[0];
      Situation_7647e0_alt1(v114, v115 & 1);
      Image_729780_alt1(*v116);
      Trick_7ca860_alt1(*(_QWORD*)(*v27 + 16));
    }
  }
  GameRoutine_7bbe90_alt1();
  Drawer_9647c0_alt1((__int64)&GameData_21da4a0);
  if (*v77 != 0) {
    MapInfo_825040_alt1(*v77, 1);
  }
  GameData_21cfa60 = 1148190720;
  GameData_21cfa64 = 1141309440;
  v117 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v118 = (*(_DWORD*)(game_GameModeData_instance_ + 92) & 0x400) == 0;
    *(_DWORD*)(game_GameModeData_instance_ + 92) &= 0xFFFFFBE3;
    v119 = GameData_21eea58;
    if (GameData_21eea58 == 0) {
      goto LABEL_68;
    }
  LABEL_52:
    if (*(_BYTE*)(v119 + 32) == 1) {
      if (v117 == 0) {
        v118 = true;
      }
      if (!v118 && (*(_BYTE*)(v117 + 92) & 2) != 0) {
        v134[0] = 9;
        v120 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556048LL);
        if (v120 != 0) {
          v121 = game_g_shared_system_skills_ptr;
          do {
            v123 = game_GameModeData_instance_;
            v124 = v120;
            if (game_GameModeData_instance_ != 0) {
              v123 = *(_QWORD*)(game_GameModeData_instance_ + 96);
            }
            v120 = *(_QWORD*)(v120 + 432);
            v122 = *(_QWORD*)(v124 + 392) != v123 &&
                       (*(_BYTE*)(v124 + 418) & 8) == 0 &&
                       (v125 = v124,
                        v135 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v121) &
                               0xFFF,
                        v126 = game_HasSkill((_QWORD*)(v124 + 1744),
                                             (unsigned int*)&v135),
                        v124 = v125, (v126 & 1) == 0) ||
                   v134[0] == 9;
            GameRoutine_6c47b0(v124, v134, v122, 0);
          } while (v120 != 0);
        }
      }
      goto LABEL_83;
    }
    goto LABEL_68;
  }
  v118 = true;
  v119 = GameData_21eea58;
  if (GameData_21eea58 != 0) {
    goto LABEL_52;
  }
LABEL_68:
  v127 = *(_QWORD*)(*(_QWORD*)GameData_212cc70_alt1[0] + 64LL);
  v128 = *(_QWORD*)(*(_QWORD*)GameData_212cc70_alt1[0] + 72LL);
  if (v127 == v128) {
    goto LABEL_78;
  }
  v129 = GameData_212c650[0];
  do {
    v131 = **(__int64***)(*(_QWORD*)v127 + 40LL);
    if ((int)((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v127 + 40LL) + 8LL) -
               (_QWORD)v131) >>
              3) < 1 ||
        (v132 = *v131) == 0) {
      v130 = v129;
      if (*v129 == 0) {
        goto LABEL_72;
      }
    LABEL_71:
      game_VariableManager_SetFlag_alt1((__int64)v130, 0);
      goto LABEL_72;
    }
    v130 = *(__int64**)(v132 + 24);
    if (*v130 != 0) {
      goto LABEL_71;
    }
  LABEL_72:
    v127 += 8;
  } while (v127 != v128);
  v117 = game_GameModeData_instance_;
LABEL_78:
  if (v117 != 0) {
    v133 = *(_QWORD*)(v117 + 16);
    if (v133 != 0 && (*(_BYTE*)(v133 + 185) & 0x40) != 0 &&
        *(_QWORD*)GameData_2130f48 != 0) {
      GameHr_17ccc20(*(_QWORD*)GameData_2130f48, 0, 0);
    }
  }
LABEL_83:
  result = GameRoutine_f06390_alt1(
      *v95, *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c628));
  game_menu_bmap_config_index = -1;
  *(_BYTE*)(v3 + 232) = 1;
  return result;
}

double game_7305a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  char v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int128 v13;
  float v14;
  __int64 v15;
  __int128 v16;
  double result;
  __int64 v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;

  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 16) = game_InterpolatorVector3_vtable;
  v2 = a1 + 16;
  *(_QWORD*)(a1 + 80) = game_InterpolatorVector3_vtable;
  v3 = a1 + 80;
  *(_WORD*)(a1 + 40) = 1;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_WORD*)(a1 + 104) = 1;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 256) = 0x2000;
  *(_DWORD*)(a1 + 272) = 0x2000;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_BYTE*)(a1 + 240) = 1;
  *(_QWORD*)a1 = game_map_Cursor_Impl_vtable;
  *(_QWORD*)(a1 + 8) = 0x100000001LL;
  v21 = GameData_1a83630;
  Cursor_734a80(a1 + 16, (__int64*)&v21);
  v20 = GameData_1a83630;
  Cursor_734a80(v3, (__int64*)&v20);
  *(_DWORD*)(a1 + 172) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  v4 = *(_QWORD*)GameData_212d038[0];
  if (*(_QWORD*)GameData_212d038[0] != 0) {
    v5 = *(_DWORD*)(v4 + 148);
    v6 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
    v7 = *(_DWORD*)(v6 + 8);
    v8 = *(_DWORD*)(v6 + 12);
    *(_BYTE*)(v4 + 81) = 1;
    if (v7 == v5 && v8 == *(_DWORD*)(v4 + 152)) {
      v9 = 0;
    }
    else {
      *(_DWORD*)(v4 + 148) = v7;
      *(_DWORD*)(v4 + 152) = v8;
      v9 = 1;
    }
    *(_BYTE*)(v4 + 80) = v9;
    game_map_fe96c0(v4);
    if (*GameData_212cfc8[0] != 0) {
      v10 = *(_QWORD*)(v4 + 24);
      v11 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
      *(_QWORD*)&v22 = *(_QWORD*)(v4 + 16);
      *((_QWORD*)&v22 + 1) = v10;
      Camera_7bfc60(v11, &v22);
    }
  }
  *(_QWORD*)(a1 + 184) = 0x100000001LL;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v18 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v18;
    __cxa_guard_release(&GameData_21a6130);
  }
  *(_DWORD*)(a1 + 168) = 0;
  v12 = DWORD2(GameData_21a6120);
  *(_QWORD*)(a1 + 144) = GameData_21a6120;
  v13 = *(_OWORD*)(a1 + 144);
  *((_QWORD*)&v13 + 1) = v12;
  *(_OWORD*)(a1 + 144) = v13;
  v14 = *(float*)(a1 + 28);
  if (v14 == *(float*)(a1 + 24)) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, float))(
        *(_QWORD*)v2 + 16LL))((void*)(&v22), v2, v14);
  }
  else {
    v15 = *(_QWORD*)(a1 + 72);
    *(_QWORD*)&v22 = *(_QWORD*)(a1 + 64);
    *((_QWORD*)&v22 + 1) = v15;
  }
  DWORD1(v16) = DWORD1(v22);
  *(float*)&v16 =
      (float)((float)((float)(int)(float)((float)(*(float*)&v22 +
                                                  0x1.4000000000000p+10f) *
                                          0x1.99999a0000000p-3f) *
                      0x1.4000000000000p+2f) +
              0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f;
  *((_QWORD*)&v16 + 1) = COERCE_UNSIGNED_INT(
      (float)((float)((float)(int)(float)((float)(*((float*)&v22 + 2) +
                                                  0x1.4000000000000p+10f) *
                                          0x1.99999a0000000p-3f) *
                      0x1.4000000000000p+2f) +
              0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f);
  v19 = v16;
  v22 = v16;
  Cursor_734a80(v2, (__int64*)&v22);
  v21 = v19;
  Cursor_734a80(v3, (__int64*)&v21);
  *(_DWORD*)(a1 + 172) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a60e8) != 0) {
    GameData_21a60e0 = 0;
    __cxa_guard_release(&GameData_21a60e8);
  }
  result = *(double*)&GameData_21a60e0;
  *(_QWORD*)(a1 + 160) = GameData_21a60e0;
  return result;
}

char* game_7408a0(char* result, char* a2, unsigned __int64 a3, __int64* a4,
                  __int64 a5)
{
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  char* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  char* v17;
  char* v20;
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

  if (a3 >= 2) {
    if (a3 == 2) {
      v5 = *((_QWORD*)a2 - 1);
      v6 = *(_QWORD*)result;
      if (*(_DWORD*)(v5 + 592) > *(_DWORD*)(*(_QWORD*)result + 592LL)) {
        *(_QWORD*)result = v5;
        *((_QWORD*)a2 - 1) = v6;
      }
    }
    else if ((__int64)a3 > 128) {
      v14 = a3 >> 1;
      v16 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        v20 = result;
        v22 = a4;
        GameRoutine_740ac0((__int64)result, (__int64)&result[8 * v14], a3 >> 1,
                           a4);
        v23 = &v22[v14];
        result = (char*)GameRoutine_740ac0((__int64)&v20[8 * v14], (__int64)a2,
                                           v16, v23);
        v24 = &v22[a3];
        v25 = v23;
        while (v25 != v24) {
          v26 = *v25;
          v27 = *(_DWORD*)(*v25 + 592);
          v28 = *(_DWORD*)(*v22 + 592);
          if (v27 > v28) {
            v29 = 0;
          }
          else {
            v26 = *v22;
            v29 = 8;
          }
          v22 = (__int64*)((char*)v22 + v29);
          if (v27 <= v28) {
            v30 = 0;
          }
          else {
            v30 = 8;
          }
          *(_QWORD*)v20 = v26;
          v20 += 8;
          v25 = (__int64*)((char*)v25 + v30);
          if (v22 == v23) {
            while (v25 != v24) {
              v32 = *v25++;
              *(_QWORD*)v20 = v32;
              v20 += 8;
            }
            return result;
          }
        }
        while (v22 != v23) {
          v31 = *v22++;
          *(_QWORD*)v20 = v31;
          v20 += 8;
        }
      }
      else {
        v17 = result;
        game_7408a0(result, &result[8 * v14], a3 >> 1, a4, a5);
        game_7408a0(&v17[8 * v14], a2, v16, a4, a5);
        return GameRoutine_740d00(v17, &v17[8 * v14], a2, v14, v16, (__int64)a4,
                                  a5);
      }
    }
    else if (result != a2) {
      v7 = result + 8;
      if (result + 8 != a2) {
        v8 = 0;
        v9 = result;
        do {
          v12 = *(_QWORD*)v9;
          v11 = *((_QWORD*)v9 + 1);
          v9 = v7;
          if (*(_DWORD*)(v11 + 592) > *(_DWORD*)(v12 + 592)) {
            v13 = v8;
            do {
              *(_QWORD*)&result[v13 + 8] = v12;
              if (v13 == 0) {
                v10 = result;
                goto LABEL_11;
              }
              v12 = *(_QWORD*)&result[v13 - 8];
              v13 -= 8;
            } while (*(_DWORD*)(v11 + 592) > *(_DWORD*)(v12 + 592));
            v10 = &result[v13 + 8];
          LABEL_11:
            *(_QWORD*)v10 = v11;
          }
          v7 = v9 + 8;
          v8 += 8;
        } while (v9 + 8 != a2);
      }
    }
  }
  return result;
}

_QWORD* game_741260(_QWORD* result, const char* a2, int a3)
{
  char v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  long double v30;
  unsigned int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  _BOOL8 v36;
  int v37;
  __int64 v38;
  _QWORD v39[4];
  char v40[4];

  if (result[1] != *result) {
    v3 = a3;
    v4 = result;
    snprintf(v39, 32, "%s%d", a2, a3 + 1);
    result = (_QWORD*)DisposFile_6bc220(v39);
    v6 = *result;
    v5 = result[1];
    v7 = v5 - *result;
    if (v5 == *result) {
      v8 = 0;
    }
    else {
      if ((v7 & 0x8000000000000000LL) != 0) {
        GameRoutine_6bddd0(result);
      }
      v8 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v7, 16, 0);
      result = (_QWORD*)memcpy(v8, v6, v7);
      v9 = v7;
      if (v7 != 0) {
        v10 = v7 >> 3;
        if ((int)((unsigned __int64)v9 >> 3) >= 1) {
          v11 = ((unsigned __int64)v9 >> 3) & 0x7FFFFFFF;
          v12 = (__int64*)v8;
          v13 = game_map_MapRandom_instance__ptr[0];
          do {
            nn_os_LockMutex(&game_g_random_mutex);
            v14 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8);
            v15 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 12);
            v16 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13) ^
                  (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13) << 11);
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13) =
                *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 4);
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 4) = v14;
            v17 = (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8) = v15;
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 12) = v17;
            v18 = v17 & 0x7FFFFFFF;
            result = (_QWORD*)nn_os_UnlockMutex_alt1(&game_g_random_mutex);
            v19 = *v12;
            --v11;
            *v12++ = *(_QWORD*)(v8 + 8LL * (v18 % (unsigned int)v10));
            *(_QWORD*)(v8 + 8LL * (v18 % (unsigned int)v10)) = v19;
          } while (v11 != 0);
        }
        v20 = v4[1] - *v4;
        if (v20 != 0) {
          v21 = v20 >> 3;
          v22 = 32 * v3;
          v23 = 0;
          if (v21 >= v9 >> 3) {
            v24 = v9 >> 3;
          }
          else {
            v24 = v21;
          }
          while (1) {
            v25 = *(_QWORD*)(*v4 + 8 * v23);
            if (v25 != 0) {
              v26 = *(_QWORD*)(v8 + 8 * v23);
              if (*(_DWORD*)(v25 + 592) <= (int)*(unsigned __int8*)(v26 + 56)) {
                v27 = *(_QWORD*)(GameData_21ca310 + 56);
                v28 = *(_QWORD*)(v27 + 556216);
                if (v28 != 0) {
                  break;
                }
              }
            }
          LABEL_14:
            if (v24 == ++v23) {
              goto LABEL_55;
            }
          }
          GameRoutine_6c3980(*(_QWORD*)(v27 + 556216));
          v29 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v29 = *(_BYTE*)(game_GameModeData_instance_ + 13);
          }
          *(_BYTE*)(v28 + 624) = v29;
          game_6d69a0(v28);
          if ((*(_BYTE*)(v28 + 418) & 0x20) != 0) {
            *(_BYTE*)(v28 + 501) = *(_BYTE*)(v28 + 501) & 0x1F | v22;
          }
          *(_WORD*)(v28 + 584) = *(_WORD*)(v26 + 54);
          v31 = *(unsigned __int8*)(v26 + 57);
          if (v31 > 5) {
            if (*(unsigned __int8*)(v26 + 57) > 8u) {
              if (v31 == 9) {
                LODWORD(v30) = 1124532224;
                goto LABEL_40;
              }
              if (v31 == 12) {
                LODWORD(v30) = 1110704128;
                goto LABEL_40;
              }
            }
            else {
              if (v31 == 6) {
                LODWORD(v30) = 1134395392;
                goto LABEL_40;
              }
              if (v31 == 8) {
                LODWORD(v30) = 1119092736;
                goto LABEL_40;
              }
            }
          }
          else {
            if (*(unsigned __int8*)(v26 + 57) <= 1u) {
              if (*(_BYTE*)(v26 + 57) == 0) {
              LABEL_41:
                v39[0] = game_Unit_GetJob_alt1(v28);
                v32 = GameRoutine_12e2b00(v39);
                if (v32 != 0) {
                  GameRoutine_11e9180(v28 + 1968, v32);
                }
                else {
                  GameRoutine_11e8ca0(v28 + 1968, v26 + 224);
                  GameRoutine_11e96a0(v28 + 1968, v28);
                }
                GameRoutine_11e94c0(v28 + 1968, v26, v28);
                v33 = *(unsigned __int8*)(v26 + 48);
                v34 = *(_QWORD*)(v28 + 392);
                v35 = game_GameModeData_instance_;
                v40[0] = v33;
                if (game_GameModeData_instance_ != 0) {
                  v35 = *(_QWORD*)(game_GameModeData_instance_ + 96);
                }
                v36 = v34 != v35 && (*(_BYTE*)(v28 + 418) & 8) == 0 &&
                          (LODWORD(v39[0]) =
                               *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                          game_g_shared_system_skills_ptr) &
                               0xFFF,
                           (game_HasSkill_alt1(v28 + 1744, v39) & 1) == 0) ||
                      v33 == 9;
                GameRoutine_6c47b0_alt1(v28, v40, v36, 0);
                v37 = *(_DWORD*)(v28 + 416);
                if ((v37 & 0x10000000) == 0) {
                  *(_DWORD*)(v28 + 416) = v37 | 0x10000000;
                  game_6c51e0(v28);
                  GameRoutine_6c6da0_alt1(v28);
                  game_6c6ec0(v28);
                  *(_DWORD*)(v28 + 416) &= ~0x10000000u;
                }
                goto LABEL_14;
              }
              LODWORD(v30) = 1127481344;
            LABEL_40:
              UnitActor_81ab40(v28, v30, 0.0);
              goto LABEL_41;
            }
            if (v31 == 2) {
              LODWORD(v30) = 1132920832;
              goto LABEL_40;
            }
            if (v31 == 3) {
              LODWORD(v30) = 1130430464;
              goto LABEL_40;
            }
          }
          *(_QWORD*)&v30 = 0;
          goto LABEL_40;
        }
      }
    }
    if (v8 != 0) {
    LABEL_55:
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v8);
    }
  }
  return result;
}

__n128 game_7a7da0(float32x4_t* a1, float32x4_t* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __n128 result;

  result = vmulq_f32(*a1, *a2);
  LODWORD(v2) = LANES128_OF(vextq_s8(result, result, 8u)).n128_u32[0];
  HIDWORD(v2) = LANES64_OF(vdup_laneq_s32(result, 3)).n64_u32[0];
  LANES128(result).n128_u64[1] = v2;
  return result;
}

__int64 game_7fbb60(__int64 a1, __int64 a2, unsigned __int8* a3, int a4)
{
  unsigned int v4;
  __int64 v5;
  int v6;
  unsigned __int8* v7;
  __int64 v9;
  int* v10;
  __int64 v11;
  int v12;
  int v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;

  if (a2 == 0) {
    return 0;
  }
  v4 = *a3;
  if (v4 > 0xC) {
    return 0;
  }
  if ((v4 | 2) == 0xB) {
    v5 = a1;
    v6 = a4;
    v7 = a3;
    v22 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1B4LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v22) & 1) != 0) {
      return 0;
    }
    v4 = *v7;
    a3 = v7;
    a1 = v5;
    a4 = v6;
  }
  v9 = a1 + 2;
  v10 = (int*)GameData_21d99a8;
  v11 = 2LL * v4;
  v12 = *(unsigned __int16*)(a1 + 2 + v11);
  v13 = a4 + v12;
  v14 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  if ((int)v14 >= 12) {
    v15 = 12;
  }
  else {
    v15 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  }
  v16 = *(_DWORD*)(GameData_21d99a8 + 4LL * v15 - 4);
  if (v16 >= v13) {
    v16 = a4 + v12;
  }
  if (v13 < 0) {
    v16 = 0;
  }
  *(_WORD*)(v9 + v11) = v16;
  if ((int)v14 < 1) {
    LOBYTE(v17) = 0;
  }
  else {
    v17 = 0;
    v18 = v10[(unsigned int)(v14 - 1)];
    if (v18 >= v16) {
      v18 = v16;
    }
    if (v16 >= *v10) {
      v19 = v18;
    }
    else {
      v19 = *v10;
    }
    while (1) {
      v20 = (unsigned int)(v17 + v14) >> 1;
      v21 = v10[v20];
      if (v19 == v21) {
        break;
      }
      if (v19 < v21) {
        LODWORD(v14) = (unsigned int)(v17 + v14) >> 1;
      }
      else {
        v17 = v20 + 1;
      }
      if (v17 >= (int)v14) {
        goto LABEL_29;
      }
    }
    LOBYTE(v17) = v20 + 1;
  }
LABEL_29:
  *(_BYTE*)(a1 + 28 + *a3) = v17;
  return (unsigned int)*(unsigned __int16*)(v9 + 2LL * *a3) - v12;
}

__attribute__((swiftcall)) void game_800620(PSEUDO_X8 x8_, __int64 result)
{
  char* a2 = (char*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  char* v4;
  _DWORD* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14[12];

  if (result != 0) {
    v2 = *(_QWORD*)(result + 24);
    if (v2 != 0 && (*(_BYTE*)(*(_QWORD*)(result + 8) + 11276LL) & 0x80) == 0) {
      v3 = result;
      v4 = a2;
      v5 = (_DWORD*)game_g_shared_system_skills_ptr;
      LODWORD(v14[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF;
      result = game_HasSkill((_QWORD*)(v2 + 1744), (unsigned int*)v14);
      a2 = v4;
      if ((result & 1) == 0) {
        v6 = *(_QWORD*)(v2 + 440);
        if (v6 != 0) {
          v7 = *(unsigned __int8*)(v6 + 16);
          if (((1 << v7) & 0xF1) != 0) {
            LODWORD(v14[0]) = *v5 & 0xFFF;
            result = game_HasSkill((_QWORD*)(v2 + 1744), (unsigned int*)v14);
            v8 = v3;
            a2 = v4;
          }
          else {
            v8 = v3;
            if (v7 != 3 || *GameData_212ce90[0] == 0) {
              goto LABEL_24;
            }
          }
          v10 = *(_QWORD*)(v8 + 24);
          if (v10 != 0) {
            LODWORD(v14[0]) =
                *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) + (_QWORD)v5) & 0xFFF;
            result = game_HasSkill((_QWORD*)(v10 + 1744), (unsigned int*)v14);
            a2 = v4;
            if ((result & 1) == 0) {
              v11 = *(_QWORD*)(v10 + 440);
              if (v11 != 0 && ((1 << *(_BYTE*)(v11 + 16)) & 0xF1) != 0) {
                LODWORD(v14[0]) = *v5 & 0xFFF;
                result =
                    game_HasSkill((_QWORD*)(v10 + 1744), (unsigned int*)v14);
                if ((result & 1) == 0 ||
                    ((v12 = *(_QWORD*)(v10 + 440), a2 = v4, v12 == 0)
                         ? (v13 = 9)
                         : (v13 = *(_BYTE*)(v12 + 16)),
                     ((1 << v13) & 0xF1) == 0)) {
                  __builtin_memset(v14, 0, 91);
                  result = game_8007e0_alt1(v14, v3, 1);
                  if ((result & 1) != 0) {
                    X8CALL_X0(__int64, game_8c50a0((void*)(v4), v14));
                    return;
                  }
                  a2 = v4;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_24:
  *a2 = 0;
  {
    result;
    return;
  }
}

bool game_8007e0(__int64* a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  __int64* v10;
  _DWORD* v12;
  __int64 v13;
  int v14;
  __int64* v15;
  char v16;
  bool v17;
  __int64 v18;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  char v23;
  unsigned int v24;
  int v25;
  bool v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  __int64 v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  __int64 v60;
  int v61;
  unsigned int v62[3];

  *(_DWORD*)((char*)a1 + 87) = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  if (a2 == 0) {
    return GameRoutine_8c4ee0((__int64)a1);
  }
  v3 = *(_QWORD*)(a2 + 8);
  v4 = v3 + 760LL * *(unsigned __int8*)(a2 + 16);
  v5 = *(_QWORD*)(v4 + 40);
  if (v5 != 0 && *(_QWORD*)(v5 + 392) != 0) {
    v6 = v4 + 16;
    if ((*(_BYTE*)(*(_QWORD*)(v4 + 24) + 11276LL) & 1) != 0 ||
        (*(_BYTE*)(v4 + 140) & 1) == 0) {
      v7 = *(unsigned int*)(v3 + 11256);
      if ((_DWORD)v7 != 0) {
        v8 = (_BYTE*)(v3 + 3068);
        while (*v8 != 22 || *(v8 - 2) != *(_BYTE*)(a2 + 16)) {
          --v7;
          v8 += 64;
          if (v7 == 0) {
            goto LABEL_12;
          }
        }
        return false;
      }
    LABEL_12:
      v10 = a1;
      v12 = (_DWORD*)game_g_shared_system_skills_ptr;
      v62[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) +
                          game_g_shared_system_skills_ptr) &
               0xFFF;
      if ((game_HasSkill((_QWORD*)(v5 + 1744), v62) & 1) == 0) {
        v13 = *(_QWORD*)(v5 + 440);
        if (v13 != 0) {
          v14 = *(unsigned __int8*)(v13 + 16);
          if (((1 << v14) & 0xF1) != 0) {
            v62[0] = *v12 & 0xFFF;
            game_HasSkill((_QWORD*)(v5 + 1744), v62);
            v15 = v10;
            v16 = a3;
          }
          else {
            v17 = v14 == 3;
            v16 = a3;
            v17 = !v17 || *GameData_212ce90[0] == 0;
            v15 = v10;
            if (v17) {
              return false;
            }
          }
          if ((*(_BYTE*)(v3 + 11276) & 0x80) == 0) {
            if (GameData_21ca2f8 == 0 || game_GameModeData_instance_ == 0 ||
                (v18 = game_GameVariableTable_Find(
                     *(_QWORD**)(game_GameModeData_instance_ + 48),
                     (unsigned __int64*)&GameData_21d1f50),
                 v16 = a3, v15 = v10, v18 == 0) ||
                *(_DWORD*)(v18 + 32) == 0) {
              *v15 = v5;
              v20 = (__int64*)(v6 + 44);
              if (*(_WORD*)(v6 + 44) == 0) {
                v21 = *(unsigned int*)(v6 + 40);
                if ((v21 & 0x80000000) != 0) {
                  v20 = &game_g_empty_item;
                }
                else {
                  v20 = (__int64*)(*(_QWORD*)(v6 + 24) + 8 * v21 + 828);
                }
              }
              v22 = GameData_212c878[0];
              v15[9] = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                  8LL * *(unsigned __int16*)v20);
              v15[10] = *(_QWORD*)(v6 + 56);
              v23 = *(_BYTE*)(v6 + 16);
              if (v23 == 0 || *(_BYTE*)(v3 + 11272) == 1) {
                BonusExpList_7feda0((__int64)v62, v6, v16 & 1);
                v24 = BonusExpList_7ffb30((__int64)v62);
                v25 = GameRoutine_9db9e0(1u, v24);
                *((_DWORD*)v10 + 2) = v25 & ~(v25 >> 31);
                v23 = *(_BYTE*)(v6 + 16);
              }
              LOBYTE(v62[0]) = v23;
              if ((BattleInfo_797e40(v3, (unsigned __int8*)v62) & 1) != 0 &&
                  *(_QWORD*)(v5 + 408) == 0) {
                v60 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 400) + 24LL) +
                                 1104LL);
                if (v60 != 0 && !GameRoutine_7fcd20(v5 + 512, v60)) {
                  v61 = GameRoutine_9db9e0(2u, 1u);
                  *((_DWORD*)v10 + 3) = v61 & ~(v61 >> 31);
                }
              }
              if (GameRoutine_800de0(v3, *(_BYTE*)(v6 + 16))) {
                *((_DWORD*)v10 + 4) = 1;
              }
              v26 = GameRoutine_800ea0(v3, *(_BYTE*)(v6 + 16));
              a1 = v10;
              if (v26) {
                v27 = a2;
                v28 = game_Unit_GetJob(v5);
                LOBYTE(v62[0]) = *(_BYTE*)(v27 + 16);
                if ((int)BattleScenes_7a7a20(v3 + 3056, (unsigned __int8*)v62,
                                             0) >= 1) {
                  v29 = *(unsigned int*)(v6 + 40);
                  if ((v29 & 0x80000000) != 0 ||
                      (v30 = *(_QWORD*)(v6 + 24)) == 0) {
                    v31 = &game_g_empty_item;
                  }
                  else {
                    v31 = (__int64*)(v30 + 8 * v29 + 828);
                  }
                  v32 = *(unsigned __int16*)v31;
                  if (v32 != 0) {
                    v33 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v22 + 64) +
                                                         8 * v32) +
                                              72LL);
                    if ((_DWORD)v33 != 15) {
                      LOBYTE(v62[0]) = *(
                          _BYTE*)(*(_QWORD*)(*(_QWORD*)(*v22 + 64) + 8 * v32) +
                                  72LL);
                      v34 = game_800f30(v5, (unsigned __int8*)v62);
                      if ((unsigned int)v33 <= 0xC && (_DWORD)v33 != 7) {
                        v35 = GameRoutine_9db9e0(GameData_1b59c6a[v33], v34);
                        v34 = v35 & ~(v35 >> 31);
                      }
                      *((_DWORD*)v10 + v33 + 5) = v34;
                    }
                  }
                }
                LOBYTE(v62[0]) = 8;
                if ((JobFile_6763c0(v28, (unsigned __int8*)v62, v5) &
                     0x80000000) == 0) {
                  LOBYTE(v62[0]) = 8;
                  v36 = *(_QWORD*)(v5 + 392);
                  v37 = game_Unit_GetJob(v5);
                  LODWORD(v36) = *(char*)(v36 + 605);
                  v38 = JobFile_6763c0(v37, (unsigned __int8*)v62, v5);
                  v39 = GameRoutine_9db9e0(0xAu, (v38 + v36) &
                                                     ~((v38 + (int)v36) >> 31));
                  *((_DWORD*)v10 + 13) = v39 & ~(v39 >> 31);
                }
                LOBYTE(v62[0]) = 9;
                if ((JobFile_6763c0(v28, (unsigned __int8*)v62, v5) &
                     0x80000000) == 0) {
                  LOBYTE(v62[0]) = 9;
                  v40 = *(_QWORD*)(v5 + 392);
                  v41 = game_Unit_GetJob(v5);
                  LODWORD(v40) = *(char*)(v40 + 606);
                  v42 = JobFile_6763c0(v41, (unsigned __int8*)v62, v5);
                  v43 = GameRoutine_9db9e0(0xBu, (v42 + v40) &
                                                     ~((v42 + (int)v40) >> 31));
                  *((_DWORD*)v10 + 14) = v43 & ~(v43 >> 31);
                }
                LOBYTE(v62[0]) = 10;
                if ((JobFile_6763c0(v28, (unsigned __int8*)v62, v5) &
                     0x80000000) == 0) {
                  LOBYTE(v62[0]) = 10;
                  v44 = *(_QWORD*)(v5 + 392);
                  v45 = game_Unit_GetJob(v5);
                  LODWORD(v44) = *(char*)(v44 + 607);
                  v46 = JobFile_6763c0(v45, (unsigned __int8*)v62, v5);
                  v47 = GameRoutine_9db9e0(0xCu, (v46 + v44) &
                                                     ~((v46 + (int)v44) >> 31));
                  *((_DWORD*)v10 + 15) = v47 & ~(v47 >> 31);
                }
                LOBYTE(v62[0]) = 11;
                if ((JobFile_6763c0(v28, (unsigned __int8*)v62, v5) &
                     0x80000000) == 0) {
                  LOBYTE(v62[0]) = 11;
                  v48 = *(_QWORD*)(v5 + 392);
                  v49 = game_Unit_GetJob(v5);
                  LODWORD(v48) = *(char*)(v48 + 608);
                  v50 = JobFile_6763c0(v49, (unsigned __int8*)v62, v5);
                  v51 = GameRoutine_9db9e0(0xDu, (v50 + v48) &
                                                     ~((v50 + (int)v48) >> 31));
                  *((_DWORD*)v10 + 16) = v51 & ~(v51 >> 31);
                }
                LOBYTE(v62[0]) = 12;
                if ((JobFile_6763c0(v28, (unsigned __int8*)v62, v5) &
                     0x80000000) == 0) {
                  LOBYTE(v62[0]) = 12;
                  v52 = *(_QWORD*)(v5 + 392);
                  v53 = game_Unit_GetJob(v5);
                  LODWORD(v52) = *(char*)(v52 + 609);
                  v54 = JobFile_6763c0(v53, (unsigned __int8*)v62, v5);
                  v55 = GameRoutine_9db9e0(0xEu, (v54 + v52) &
                                                     ~((v54 + (int)v52) >> 31));
                  *((_DWORD*)v10 + 17) = v55 & ~(v55 >> 31);
                }
                if (*(_BYTE*)(v5 + 1944) != 0) {
                  v56 = *(_QWORD*)(v6 + 56);
                  if (v56 != 0 && *(_BYTE*)(v56 + 104) == 5) {
                    v57 = (__int64)v10;
                    v58 = 2;
                  }
                  else {
                    v58 = 1;
                    v57 = (__int64)v10;
                  }
                  LOBYTE(v62[0]) = 12;
                  GameRoutine_800d70(v57, (unsigned __int8*)v62, v58);
                }
                game_UnitGrow_Clamp((__int64)v10);
                a1 = v10;
              }
              return GameRoutine_8c4ee0((__int64)a1);
            }
          }
        }
      }
    }
  }
  return false;
}

__int64 game_800f30(__int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  int v8;
  __int64 v9;
  char v10;
  int v11;
  int v12;

  v2 = *(_QWORD*)(a1 + 392);
  v5 = game_Unit_GetJob(a1);
  v6 = *a2;
  if ((_DWORD)v6 == 7) {
    return 0;
  }
  v8 = *(char*)(v2 + v6 + 597);
  if ((_DWORD)v6 == 10) {
    v9 = v5;
    v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x228LL) +
                     game_g_shared_system_skills_ptr + 4) &
          0xFFF;
    v10 = game_HasSkill((_QWORD*)(a1 + 1744), (unsigned int*)&v12);
    v6 = *a2;
    if ((v10 & 1) != 0) {
      v11 = *(char*)(v9 + v6 + 398);
      if (v11 <= 1) {
        v11 = 1;
      }
      return (v8 + v11 + 1) & (unsigned int)~((v8 + v11 + 1) >> 31);
    }
    v5 = v9;
  }
  v11 = *(char*)(v5 + v6 + 398);
  return (v8 + v11 + 1) & (unsigned int)~((v8 + v11 + 1) >> 31);
}

char* game_803620(char* result, char* a2, char* a3, __int64 a4, __int64 a5,
                  char* a6, __int64 a7)
{
  __int64 v9;
  __int64 i;
  char* v11;
  unsigned __int64 v12;
  char* v13;
  char* v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  int v19;
  int v20;
  char* v21;
  unsigned __int64 v22;
  char* v23;
  unsigned __int64 v24;
  int v25;
  unsigned int v26;
  unsigned __int64 v27;
  char* v28;
  int v29;
  int v30;
  char* v31;
  char* v32;
  char* v33;
  char* v34;
  char* v35;
  char* v36;
  signed __int64 v37;
  signed __int64 v38;
  __int16 v39;
  bool v40;
  signed __int64 v41;
  __int64 v42;
  char* v43;
  __int16 v44;
  char* v45;
  char* v46;
  char* v47;
  __int16 v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  char* v58;
  char* v59;
  __int16 v60;
  char* v61;
  unsigned int v62;
  unsigned int v63;
  bool v64;
  char* v65;
  char v66;
  __int64 v67;
  char* v68;
  char* v69;
  __int16 v70;
  char v71;
  __int16 v72;
  char v73;
  char* v74;
  __int16 v75;
  __int64 v76;
  __int16 v77;
  char* v78;
  char v79;
  char* v80;
  char* v81;
  __int16 v82;
  char v83;
  __int16 v84;
  char v85;
  __int16 v86;
  char v87;
  __int16 v88;
  char v89;
  __int16 v90;
  char v91;

  if (a5 != 0) {
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return result;
      }
      v9 = -a4;
      for (i = 0;; i += 3) {
        v11 = &result[i];
        if (*a2 * *a2 + a2[1] * a2[1] <
            (unsigned int)(result[i] * result[i] +
                           result[i + 1] * result[i + 1])) {
          break;
        }
        v64 = __CFADD__(v9++, 1);
        if (v64) {
          return result;
        }
      }
      if (-v9 >= a5) {
        if (v9 == -1) {
          v74 = &result[i];
          v83 = v74[2];
          v82 = *(_WORD*)v74;
          v75 = *(_WORD*)a2;
          v74[2] = a2[2];
          *(_WORD*)v74 = v75;
          a2[2] = v83;
          *(_WORD*)a2 = v82;
          return result;
        }
        v22 = -v9 / 2;
        v23 = &result[i];
        v15 = &result[i + (((v9 > 0) - v9) & 0xFFFFFFFFFFFFFFFELL) + v22];
        if (a3 == a2) {
          v13 = a3;
          v32 = a3;
        }
        else {
          v24 = 0xAAAAAAAAAAAAAAABLL * (a3 - a2);
          v13 = a2;
          v25 = v23[3 * v22 + 1];
          v26 = v25 * v25 + *v15 * *v15;
          do {
            v27 = v24 >> 1;
            v28 = &v13[3 * (v24 >> 1)];
            v29 = *v28;
            v30 = v28[1];
            v31 = v28 + 3;
            v24 += ~(v24 >> 1);
            if (v29 * v29 + v30 * v30 < v26) {
              v13 = v31;
            }
            else {
              v24 = v27;
            }
          } while (v24 != 0);
          v32 = a2;
        }
        v12 = 0xAAAAAAAAAAAAAAABLL * (v13 - v32);
      }
      else {
        v12 = a5 / 2;
        v13 = &a2[((a5 + ((unsigned __int64)a5 >> 63)) & 0xFFFFFFFFFFFFFFFELL) +
                  a5 / 2];
        if (v11 == a2) {
          v15 = a2;
          v14 = a2;
        }
        else {
          v14 = &result[i];
          v15 = &result[i];
          v16 = 0xAAAAAAAAAAAAAAABLL * (a2 - result - i);
          do {
            v17 = v16 >> 1;
            v18 = &v15[3 * (v16 >> 1)];
            v19 = *v18;
            v20 = v18[1];
            v21 = v18 + 3;
            v16 += ~(v16 >> 1);
            if (v13[1] * v13[1] + *v13 * *v13 <
                (unsigned int)(v19 * v19 + v20 * v20)) {
              v16 = v17;
            }
            else {
              v15 = v21;
            }
          } while (v16 != 0);
        }
        v22 = 0xAAAAAAAAAAAAAAABLL * (v15 - v14);
      }
      v33 = v13;
      if (v15 != a2) {
        v33 = v15;
        if (a2 != v13) {
          v34 = v15 + 3;
          if (v15 + 3 == a2) {
            v49 = v13 - a2;
            v80 = a3;
            v50 = a6;
            v51 = a5;
            v85 = v15[2];
            v84 = *(_WORD*)v15;
            memmove(v15, v15 + 3, v13 - a2);
            a3 = v80;
            v33 = &v15[v49];
            a5 = v51;
            a6 = v50;
            *(_WORD*)v33 = v84;
            v33[2] = v85;
          }
          else {
            v35 = a2 + 3;
            if (a2 + 3 == v13) {
              v33 = v15 + 3;
              v86 = *(_WORD*)(v13 - 3);
              v87 = *(v13 - 1);
              if (v13 - 3 != v15) {
                v81 = a3;
                v52 = a6;
                v53 = a5;
                memmove(v15 + 3, v15, v13 - 3 - v15);
                a3 = v81;
                a5 = v53;
                a6 = v52;
              }
              v15[2] = v87;
              *(_WORD*)v15 = v86;
            }
            else {
              v36 = (char*)(a2 - v15);
              v37 = 0xAAAAAAAAAAAAAAABLL * (a2 - v15);
              v38 = 0xAAAAAAAAAAAAAAABLL * (v13 - a2);
              if (v37 == v38) {
                do {
                  v91 = *(v34 - 1);
                  v90 = *(_WORD*)(v34 - 3);
                  v39 = *(_WORD*)(v35 - 3);
                  *(v34 - 1) = *(v35 - 1);
                  *(_WORD*)(v34 - 3) = v39;
                  *(v35 - 1) = v91;
                  *(_WORD*)(v35 - 3) = v90;
                  if (v34 == a2) {
                    break;
                  }
                  v34 += 3;
                  v40 = v35 == v13;
                  v35 += 3;
                } while (!v40);
                v33 = a2;
              }
              else {
                do {
                  v41 = v37;
                  v42 = v37 / v38;
                  v37 = v38;
                  v38 = v41 - v42 * v38;
                } while (v38 != 0);
                if (3 * v37 != 0) {
                  v43 = &v15[3 * v37];
                  do {
                    v44 = *(_WORD*)(v43 - 3);
                    v43 -= 3;
                    v45 = &v43[(_QWORD)v36];
                    v46 = v43;
                    v88 = v44;
                    v89 = v43[2];
                    do {
                      v47 = v45;
                      v48 = *(_WORD*)v45;
                      v46[2] = v47[2];
                      *(_WORD*)v46 = v48;
                      v45 = &v36[(_QWORD)v47];
                      v46 = v47;
                      if ((__int64)v36 >= v13 - v47) {
                        v45 = &a2[-(v13 - v47)];
                      }
                    } while (v45 != v43);
                    v47[2] = v89;
                    *(_WORD*)v47 = v88;
                  } while (v43 != v15);
                }
                v33 = &v15[v13 - a2];
              }
            }
          }
        }
      }
      v54 = a5 - v12;
      if ((__int64)(v22 + v12) >= (__int64)(a5 - (v22 + v12) - v9)) {
        game_803620((__int64)v33, v13, a3, -(__int64)(v22 + v9), a5 - v12, a6,
                    a7);
        v13 = v15;
        v54 = v12;
        a4 = v22;
        a3 = v33;
      }
      else {
        v55 = (__int64)v11;
        v56 = a3;
        game_803620(v55, v15, v33, v22, v12, a6, a7);
        a4 = -(__int64)(v22 + v9);
        a3 = v56;
        v11 = v33;
      }
      a5 = v54;
      result = v11;
      a2 = v13;
      if (v54 == 0) {
        return result;
      }
    }
    if (a4 <= a5) {
      if (result != a2) {
        v67 = -(__int64)a6;
        v68 = a6;
        v69 = result;
        do {
          v70 = *(_WORD*)v69;
          v71 = v69[2];
          v69 += 3;
          v67 -= 3;
          v68[2] = v71;
          *(_WORD*)v68 = v70;
          v68 += 3;
        } while (v69 != a2);
        while (a2 != a3) {
          if (*a2 * *a2 + a2[1] * a2[1] >=
              (unsigned int)(*a6 * *a6 + a6[1] * a6[1])) {
            v72 = *(_WORD*)a6;
            v73 = a6[2];
            a6 += 3;
          }
          else {
            v72 = *(_WORD*)a2;
            v73 = a2[2];
            a2 += 3;
          }
          result[2] = v73;
          *(_WORD*)result = v72;
          result += 3;
          if (v68 == a6) {
            return result;
          }
        }
        return (char*)memmove(result, a6, -(__int64)&a6[v67]);
      }
    }
    else if (a2 != a3) {
      v57 = 0;
      do {
        v58 = &a2[v57];
        v59 = &a6[v57];
        v57 += 3;
        v60 = *(_WORD*)v58;
        v59[2] = v58[2];
        *(_WORD*)v59 = v60;
      } while (&a2[v57] != a3);
      v61 = &a6[v57];
      while (a2 != result) {
        v62 = *(v61 - 3) * *(v61 - 3) + *(v61 - 2) * *(v61 - 2);
        v63 = *(a2 - 3) * *(a2 - 3) + *(a2 - 2) * *(a2 - 2);
        v64 = v62 >= v63;
        if (v62 >= v63) {
          v65 = v61 - 3;
        }
        else {
          v65 = a2 - 3;
        }
        if (v64) {
          v61 -= 3;
        }
        else {
          a2 -= 3;
        }
        v66 = v65[2];
        *(_WORD*)(a3 - 3) = *(_WORD*)v65;
        a3 -= 3;
        a3[2] = v66;
        if (v61 == a6) {
          return result;
        }
      }
      if (a6 != v61) {
        v76 = -3;
        do {
          v77 = *(_WORD*)(v61 - 3);
          v61 -= 3;
          v78 = &a3[v76];
          v76 -= 3;
          v79 = v61[2];
          *(_WORD*)v78 = v77;
          v78[2] = v79;
        } while (v61 != a6);
      }
    }
  }
  return result;
}

__int64 game_809ba0(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int64 v5;
  __int64 v6;
  long double v7;
  __int64* v8;
  float v9;
  float v10;
  int v11;
  __int64 result;
  __int64 v13;
  long double v14;
  long double v15;

  v2 = a1 + 160;
  v5 = a1 + 160 + ((unsigned __int64)*(unsigned __int8*)(a1 + 480) << 6);
  v7 = ((long double (*)(unsigned __int64)) *
        (_QWORD*)(*(_QWORD*)v5 + 16LL))(v5);
  v6 = *(unsigned __int8*)(a1 + 480);
  HIDWORD(v7) = 0;
  v8 = (__int64*)(v2 + (v6 << 6));
  if (v6 != 1 ||
      (v14 = v7,
       LODWORD(v9) =
           LANES128_OF(((__n128 (*)(__int64)) *
                        (_QWORD*)(*(_QWORD*)(a1 + 352) + 16LL))(a1 + 352))
               .n128_u32[3],
       v10 = 0x0.0p+0f, v7 = v14, v9 != 0x1.0000000000000p+0f)) {
    v10 = a2;
  }
  v11 = *((unsigned __int8*)v8 + 24);
  v15 = v7;
  if (v11 == 1) {
    result = (*(__int64 (**)(__int64*, long double))(*v8 + 24))(v8, v7);
    *((_DWORD*)v8 + 2) = 0;
  }
  else {
    if (v10 >= *((float*)v8 + 2)) {
      result = (*(__int64 (**)(__int64*, long double*, __int64*))(*v8 + 8))(
          v8, &v15, v8 + 6);
      if ((result & 1) == 0) {
        return result;
      }
      (*(void (**)(__int64*))(*v8 + 16))(v8);
      v13 = *v8;
    }
    else {
      (*(void (**)(__int64*))(*v8 + 16))(v8);
      v13 = *v8;
    }
    result = (*(__int64 (**)(__int64*))(v13 + 24))(v8);
    *((float*)v8 + 2) = v10;
  }
  *((_DWORD*)v8 + 3) = 0;
  *((_WORD*)v8 + 12) = 256;
  return result;
}

__int64 game_809dc0(__int64 a1, _QWORD* a2, long double a3)
{

#pragma clang fp contract(off)
  unsigned __int32 v3;
  __int64 v6;
  __int64* v7;
  float32x2_t v8;
  int v9;
  long double v10;
  __int64 v11;
  __int64* v12;
  long double v13;
  long double v14;
  float v15;
  float v16;
  int v17;
  __int64 result;
  long double v19;
  long double v20;
  long double v21;

  v3 = LODWORD(a3);
  v6 = a1 + ((unsigned __int64)*(unsigned __int8*)(a1 + 480) << 6);
  LODWORD(a3) = *(_DWORD*)(v6 + 172);
  v7 = (__int64*)(v6 + 160);
  if (*(float*)&a3 == *(float*)(v6 + 168)) {
    *(__n128*)&a3 = ((__n128 (*)(__int64)) * (_QWORD*)(*v7 + 16))(v6 + 160);
    LODWORD(a3) = HIDWORD(a3);
    if (*((float*)&a3 + 3) == 0x0.0p+0f) {
      *(_QWORD*)&v10 = *a2;
      LANES64(v8).n64_u64[0] = a2[1];
      v9 = *((unsigned __int8*)v7 + 24);
      LANES64(v8).n64_u32[1] = vmuls_lane_f32(0x0.0p+0f, v8, 1);
      *((float32x2_t*)&v10 + 1) = v8;
      v21 = v10;
      if (v9 == 1) {
        v11 = *v7;
        v12 = v7;
        v13 = v10;
      LABEL_10:
        (*(void (**)(__int64*, long double, long double))(v11 + 24))(v12, v10,
                                                                     v13);
        v7[1] = 0;
        *((_WORD*)v7 + 12) = 256;
        goto LABEL_11;
      }
      if (*((float*)v7 + 2) > 0x0.0p+0f) {
        v19 = v10;
        (*(void (**)(__int64*))(*v7 + 16))(v7);
        v11 = *v7;
        v13 = v19;
      LABEL_9:
        v12 = v7;
        goto LABEL_10;
      }
      if (((*(__int64 (**)(__int64*, long double*, __int64*))(*v7 + 8))(
               v7, &v21, v7 + 6) &
           1) != 0) {
        (*(void (**)(__int64*))(*v7 + 16))(v7);
        v11 = *v7;
        v13 = v21;
        goto LABEL_9;
      }
    }
  }
LABEL_11:
  v14 = *(long double*)a2;
  if (*(_BYTE*)(a1 + 480) != 1 ||
      (v20 = *(long double*)a2,
       LODWORD(v15) =
           LANES128_OF(((__n128 (*)(__int64, long double)) *
                        (_QWORD*)(*(_QWORD*)(a1 + 352) + 16LL))(a1 + 352, a3))
               .n128_u32[3],
       v16 = 0x0.0p+0f, v14 = v20, v15 != 0x1.0000000000000p+0f)) {
    v16 = *(float*)&v3;
  }
  v17 = *((unsigned __int8*)v7 + 24);
  v21 = v14;
  if (v17 == 1) {
    result = (*(__int64 (**)(__int64*, long double))(*v7 + 24))(v7, v14);
    v16 = 0x0.0p+0f;
  LABEL_19:
    *((float*)v7 + 2) = v16;
    *((_DWORD*)v7 + 3) = 0;
    *((_WORD*)v7 + 12) = 256;
    return result;
  }
  if (v16 < *((float*)v7 + 2) ||
      ((result = (*(__int64 (**)(__int64*, long double*, __int64*))(*v7 + 8))(
            v7, &v21, v7 + 6)) &
       1) != 0) {
    (*(void (**)(__int64*))(*v7 + 16))(v7);
    result = (*(__int64 (**)(__int64*))(*v7 + 24))(v7);
    goto LABEL_19;
  }
  return result;
}

void game_80a2a0(float a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned __int64 v3;
  long double v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  long double v11;
  long double v12;
  long double v13;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    v3 = game_ProcFadeView_instance_ + 160 +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v3 + 12) == *(float*)(v3 + 8)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v3 + 16LL))(v3),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v4 = *(long double*)(v3 + 48);
    }
    v5 = *(_QWORD*)(v1 + 496);
    v6 = *(_QWORD*)(v1 + 504);
    v7 = ((v6 - v5) << 9) - 1;
    if (v6 == v5) {
      v7 = 0;
    }
    v8 = *(_QWORD*)(v1 + 528) + *(_QWORD*)(v1 + 520);
    if (v7 == v8) {
      v12 = v4;
      GameRoutine_80bf20((__int64*)(v1 + 488)),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v4 = v12;
      v8 = *(_QWORD*)(v1 + 528) + *(_QWORD*)(v1 + 520);
      v5 = *(_QWORD*)(v1 + 496);
    }
    *(_BYTE*)(*(_QWORD*)(v5 + 8 * (v8 >> 12)) + (v8 & 0xFFF)) =
        *((float*)&v4 + 3) == 0x1.0000000000000p+0f;
    ++*(_QWORD*)(v1 + 528);
    v9 = *(unsigned __int8*)(v1 + 480);
    v10 = v1 + 160 + (v9 << 6);
    if (*(float*)(v10 + 12) == *(float*)(v10 + 8) &&
        (*(__n128*)& v4 =
             ((__n128 (*)(__int64)) *
              (_QWORD*)(*(_QWORD*)v10 + 16LL))(v1 + 160 + (v9 << 6)),
         *((float*)&v4 + 3) == 0x1.0000000000000p+0f)) {
      if (*(float*)(v10 + 12) == *(float*)(v10 + 8)) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v11 = *(long double*)(v10 + 48);
      }
      v13 = v11;
      *(float*)&v11 = a1;
      game_809dc0(v1, &v13, v11),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      *(float*)&v4 = a1;
      game_809dc0(v1, GameData_212c960, v4),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
}

bool game_80a5b0()
{

#pragma clang fp contract(off)
  unsigned __int64 v0;
  __int128 v1;

  if (game_ProcFadeView_instance_ == 0) {
    return false;
  }
  v0 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v0 + 172) == *(float*)(v0 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v0 + 160) + 16LL))(v0 + 160);
  }
  else {
    v1 = *(_OWORD*)(v0 + 208);
  }
  return *((float*)&v1 + 3) == 0x1.0000000000000p+0f &&
         LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                      (_QWORD*)(*(_QWORD*)(v0 + 160) + 16LL))(
                         v0 + 160, *((float*)&v1 + 3)))
                 .n128_f32[3] == 0x1.0000000000000p+0f;
}

__int64 game_80a680(__int64 result, __n128 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  long double v6;
  long double v7;

  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    v3 = (float)(int)result / 0x1.f400000000000p+9f;
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) == *(float*)(v4 + 168) &&
        (v5 = v4 + 160,
         a2 = ((__n128 (*)(unsigned __int64)) *
               (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160),
         LANES128(a2).n128_f32[3] == 0x1.0000000000000p+0f)) {
      if (*(float*)(v5 + 12) == *(float*)(v5 + 8)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)v5 + 16LL))(v5),
            v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v6 = *(long double*)(v5 + 48);
      }
      v7 = v6;
      *(float*)&v6 = v3;
      return game_809dc0(v2, &v7, v6);
    }
    else {
      LANES128(a2).n128_f32[0] = v3;
      return game_809dc0(v2, GameData_212c960, *(long double*)&a2);
    }
  }
  return result;
}

__int64 game_80a760(int a1, long double a2)
{

#pragma clang fp contract(off)
  __int64 result;

  result = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    *(float*)&a2 = (float)a1 / 0x1.f400000000000p+9f;
    return game_809dc0(game_ProcFadeView_instance_, GameData_212c960, a2);
  }
  return result;
}

__int64 game_80a790(int a1, long double a2)
{

#pragma clang fp contract(off)
  __int64 result;

  result = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    *(float*)&a2 = (float)a1 / 0x1.f400000000000p+9f;
    return game_809dc0(game_ProcFadeView_instance_, GameData_212c958, a2);
  }
  return result;
}

__attribute__((swiftcall)) void game_80c770(PSEUDO_X8 x8_, __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  _BYTE v4[200];

  if (result != 0) {
    v3 = result;
    snd_Fade_Fade_10c830(v4, 0.0f);
    snd_play_ff2d0((void*)((_QWORD*)a2), v3, v3, v4, 0, 65537, 0, 0.0f, 1.0f);
    {
      snd_Fade_Destroy_Fade(v4);
      return;
    }
  }
  else {
    *(_QWORD*)a2 = 0;
    *(_DWORD*)(a2 + 8) = 0x2000;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_80c7f0(PSEUDO_X8 x8_, __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  _BYTE v4[200];

  if (result != 0) {
    v3 = result;
    snd_Fade_Fade_10c830(v4, 0.0f);
    snd_play_ff2d0((void*)((_QWORD*)a2), v3, v3, v4, 0, 65537, 0, 0.0f, 1.0f);
    {
      snd_Fade_Destroy_Fade(v4);
      return;
    }
  }
  else {
    *(_QWORD*)a2 = 0;
    *(_DWORD*)(a2 + 8) = 0x2000;
  }
  {
    result;
    return;
  }
}

__int64 game_80cdc0()
{
  __int64* v0;
  __int64 result;
  char v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v10;
  _QWORD v11[25];
  struct {
    __int64 v12[2];
    char* v13;
  } v12_;

  v0 = game_sound_g_game_sound_ptr[0];
  result = X8CALL_X0(
      unsigned __int64,
      snd_BGM_getFirstNameString(
          (void*)(v12_.v12), *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8)));
  v2 = v12_.v12[0] & 1;
  v3 = LOBYTE(v12_.v12[0]) >> 1;
  if ((v12_.v12[0] & 1) != 0) {
    v3 = v12_.v12[1];
  }
  if (v3 == 17) {
    v4 = v12_.v13;
    if ((v12_.v12[0] & 1) == 0) {
      v4 = (char*)v12_.v12 + 1;
    }
    v5 = *(_QWORD*)v4;
    v6 = *((_QWORD*)v4 + 1);
    v7 = (unsigned __int8)v4[16];
    if (v5 == 0x5F5359535F4D4742LL && v6 == 0x7265764F656D6147LL && v7 == 49) {
      v10 = *v0;
      snd_Fade_Fade_10c910((__int64)v11, 1200);
      snd_a2c9c0(v10, (__int64)v11);
      result = snd_Fade_Destroy_Fade_alt1(v11);
      v2 = v12_.v12[0] & 1;
    }
  }
  if (v2 != 0) {
    return (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                           24LL))(*snd_g_memory_ptr[0],
                                                  v12_.v13);
  }
  return result;
}

void game_80e8e0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  _BYTE* v4;
  _BYTE* v5;
  _BYTE* v6;
  _BYTE* v7;
  __int64* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  __int64 v14;
  char v15;

  v2 = game_sound_g_game_sound_ptr[0];
  v3 = *game_sound_g_game_sound_ptr[0];
  if ((*(_BYTE*)(*game_sound_g_game_sound_ptr[0] + 424) & 1) != 0) {
    v4 = *(_BYTE**)(v3 + 440);
    *(_QWORD*)(v3 + 432) = 0;
  }
  else {
    v4 = (_BYTE*)(v3 + 425);
    *(_BYTE*)(v3 + 424) = 0;
  }
  *v4 = 0;
  if ((*(_BYTE*)(v3 + 448) & 1) != 0) {
    v5 = *(_BYTE**)(v3 + 464);
    *(_QWORD*)(v3 + 456) = 0;
  }
  else {
    v5 = (_BYTE*)(v3 + 449);
    *(_BYTE*)(v3 + 448) = 0;
  }
  *v5 = 0;
  if ((*(_BYTE*)(v3 + 472) & 1) != 0) {
    v6 = *(_BYTE**)(v3 + 488);
    *(_QWORD*)(v3 + 480) = 0;
  }
  else {
    v6 = (_BYTE*)(v3 + 473);
    *(_BYTE*)(v3 + 472) = 0;
  }
  *v6 = 0;
  if ((*(_BYTE*)(v3 + 496) & 1) != 0) {
    *(_QWORD*)(v3 + 504) = 0;
    v7 = *(_BYTE**)(v3 + 512);
  }
  else {
    *(_BYTE*)(v3 + 496) = 0;
    v7 = (_BYTE*)(v3 + 497);
  }
  *v7 = 0;
  v8 = (__int64*)*v2;
  if (*(_QWORD*)(*v2 + 8) == 0) {
    return;
  }
  v9 = GameData_21ec7b0;
  if (GameData_21ec7b0 != 0) {
    if ((*(_BYTE*)(*(_QWORD*)(GameData_21ec7b0 + 8) + 116LL) & 2) == 0) {
    LABEL_27:
      LOBYTE(v7) = (*(_BYTE*)(*(_QWORD*)(v9 + 8) + 116LL) & 4) != 0;
      LOBYTE(v9) = 1;
      goto LABEL_28;
    }
    snd_Fade_Fade_10c830_alt1((__int64)v12_.v12, 0x1.f400000000000p+6f);
    GameManager_a30b40(v8, (__int64)v12_.v12);
    snd_Fade_Destroy_Fade_alt1(v12_.v12);
    v10 = (_QWORD*)GameData_21ec7b0;
    if (GameData_21ec7b0 != 0) {
      if (*(_QWORD*)(GameData_21ec7b0 + 120) != 0) {
        game_combat_CombatLegionManager_SetAllSoundEnable(
            *(_QWORD**)(GameData_21ec7b0 + 120), 0);
        v10 = (_QWORD*)GameData_21ec7b0;
        v15 = 0;
        v14 = a1;
        if (GameData_21ec7b0 == 0) {
          goto LABEL_26;
        }
      }
      else {
        v15 = 0;
        v14 = a1;
      }
      v12_.v12[0] = GameData_1ff8cd8;
      v12_.v12[1] = &v14;
      v12_.v13 = v12_.v12;
      v12_.v12[2] = &v15;
      GameRoutine_106c820(v10, (__int64)v12_.v12);
      if (v12_.v13 == v12_.v12) {
        v11 = 32;
      }
      else {
        if (v12_.v13 == nullptr) {
          goto LABEL_26;
        }
        v11 = 40;
      }
      (*(void (**)(__int64))(*v12_.v13 + v11))((__int64)v12_.v13);
    }
  LABEL_26:
    snd_Fade_Fade_10c910((__int64)v12_.v12, 100);
    snd_startSlotVolume_100b50(&GameData_21ec584, (__int64)v12_.v12, 0x0.0p+0f);
    snd_Fade_Destroy_Fade_alt1(v12_.v12);
    v9 = GameData_21ec7b0;
    if (GameData_21ec7b0 == 0) {
      goto LABEL_28;
    }
    goto LABEL_27;
  }
LABEL_28:
  GameRoutine_80eb10(v9 & (unsigned __int8)v7);
  if (game_cmdbtl_ProcCmdBtlSeqView_instance_ != 0 && a1 != 0 &&
      GameData_21ec7a8 != 0) {
    GameRoutine_f90a30(GameData_21ec7a8, *(_DWORD*)(a1 + 96) == 0);
  }
  if (GameData_21ec7b0 != 0 &&
      (*(_BYTE*)(*(_QWORD*)(GameData_21ec7b0 + 8) + 117LL) & 0xC) != 0) {
    GameRoutine_80ecf0();
  }
}

void game_810000(const char* a1, const char* a2, int a3, char a4)
{

#pragma clang fp contract(off)
  __int64 v9;
  int v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  const char* v14;
  const char* v15;
  int v16;
  int v17;
  char v18;
  __int64 v19;
  const char* v20;
  _DWORD* v21;
  char v22;
  int v23;
  int v24;
  const char* v25;
  const char* v26;
  __int64 v27;
  __int64* v28;
  char v29;
  char v30;
  const char* v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  const char* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64* v40;
  unsigned __int64 v41;
  char* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  const char* v49;
  const char* v50;
  __int64 v51;
  _QWORD v52[25];
  struct {
    __int64 v53;
    unsigned __int64 v54;
    char* v55;
  } v53_;
  __int64 v57;
  __int64 v58;

  v9 = GameRoutine_610540(a1, a2);
  if (v9 == 0) {
    return;
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v10 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    v11 = v9;
    if (v10 >= 4) {
      v12 = game_9a28e0_alt1(71);
      if (game_GameModeData_instance_ != 0 &&
          (v13 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v12)) != 0 &&
          *(_DWORD*)(v13 + 32) != 0) {
        v10 = 4;
      }
      else {
        v10 = 3;
      }
    }
    sprintf_alt1((__int64)GameData_21ec695, "%s_P3S%d", a1, v10);
    v9 = GameRoutine_610540(GameData_21ec695, a2);
    if (v9 == 0) {
      v9 = v11;
    }
  }
  v15 = *(const char**)(v9 + 40);
  v14 = *(const char**)(v9 + 48);
  v16 = snd_getDefineInt("SetTime_BGM_Night");
  if (a3 <= 23 && a3 >= v16 || (v17 = snd_getDefineInt("SetTime_BGM_Day"),
                                v18 = 0, (a3 & 0x80000000) == 0) &&
                                   a3 < v17) {
    v18 = 1;
  }
  v19 = *(_QWORD*)(GameData_21c9608 + 264);
  if ((*(_BYTE*)(GameData_21c9608 + 256) & 1) == 0) {
    v19 = *(_BYTE*)(GameData_21c9608 + 256) >> 1;
  }
  if (v19 == 0) {
  LABEL_31:
    if (v15 == nullptr) {
      goto LABEL_38;
    }
    goto LABEL_32;
  }
  if (v19 != 4) {
    v20 = *(const char**)(GameData_21c9608 + 272);
  LABEL_27:
    if ((*(_BYTE*)(GameData_21c9608 + 256) & 1) != 0) {
      v15 = v20;
    }
    else {
      v15 = (const char*)(GameData_21c9608 + 257);
    }
    v14 = v15;
    goto LABEL_31;
  }
  v20 = *(const char**)(GameData_21c9608 + 272);
  v21 = (_DWORD*)(GameData_21c9608 + 257);
  if ((*(_BYTE*)(GameData_21c9608 + 256) & 1) != 0) {
    v21 = *(_DWORD**)(GameData_21c9608 + 272);
  }
  if (*v21 != 1819047278) {
    goto LABEL_27;
  }
  v14 = &GameData_1a9f09e;
  v15 = &GameData_1a9f09e;
LABEL_32:
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v22 = v18;
    v23 = strcmp_alt1(v15, "BGM_Hub1_A");
    v18 = v22;
    if (v23 == 0 || v14 != nullptr && (v24 = strcmp_alt1(v14, "BGM_Hub1_B"),
                                       v18 = v22, v24 == 0)) {
      v14 = "BGM_Hub6_B";
      v15 = "BGM_Hub6_A";
    }
  }
LABEL_38:
  v25 = v15;
  v26 = v14;
  v27 = *game_sound_g_game_sound_ptr[0];
  if (*(_DWORD*)(*game_sound_g_game_sound_ptr[0] + 628) == 0) {
    return;
  }
  v58 = v57;
  v28 = (__int64*)(v27 + 3080);
  v29 = a4 & 1;
  v30 = v18;
  v31 = v26;
  v32 = v27;
  v33 = v27 + 3080;
  if (v15 == nullptr) {
    v25 = &GameData_1a9f09e;
  }
  GameRoutine_60a020_alt1(v33, v25);
  v34 = (__int64*)(v32 + 3104);
  if (v31 != nullptr) {
    v35 = v31;
  }
  else {
    v35 = &GameData_1a9f09e;
  }
  GameRoutine_60a020_alt1(v32 + 3104, v35);
  if ((*(_BYTE*)(v32 + 3080) & 1) != 0) {
    fw_text_String_CopyTerminated(&v53_.v53, *(_QWORD*)(v32 + 3096),
                                  *(_QWORD*)(v32 + 3088));
    if ((v30 & 1) == 0) {
      goto LABEL_60;
    }
  }
  else {
    v36 = v28[1];
    v53_.v53 = *v28;
    v53_.v54 = v36;
    v53_.v55 = (char*)v28[2];
    if ((v30 & 1) == 0) {
      goto LABEL_60;
    }
  }
  v37 = *(_BYTE*)(v32 + 3104) >> 1;
  if ((*(_BYTE*)(v32 + 3104) & 1) != 0) {
    v37 = *(_QWORD*)(v32 + 3112);
  }
  if (v37 != 0 && &v53_.v53 != v34) {
    if ((v53_.v53 & 1) != 0) {
      if ((*(_BYTE*)(v32 + 3104) & 1) != 0) {
        v39 = *(_QWORD*)(v32 + 3120);
      }
      else {
        v39 = v32 + 3105;
      }
      SpineModel_64dde0(&v53_.v53, v39, v37);
    }
    else if ((*(_BYTE*)(v32 + 3104) & 1) != 0) {
      GameRoutine_64df20(&v53_.v53, *(_QWORD*)(v32 + 3120),
                         *(_QWORD*)(v32 + 3112));
    }
    else {
      v38 = *(_QWORD*)(v32 + 3112);
      v53_.v53 = *v34;
      v53_.v54 = v38;
      v53_.v55 = *(char**)(v32 + 3120);
    }
  }
LABEL_60:
  v40 = (__int64*)(v32 + 2824);
  if ((__int64*)(v32 + 2824) != &v53_.v53) {
    if ((*(_BYTE*)v40 & 1) != 0) {
      if ((v53_.v53 & 1) != 0) {
        v42 = v53_.v55;
      }
      else {
        v42 = (char*)&v53_.v53 + 1;
      }
      if ((v53_.v53 & 1) != 0) {
        v43 = v53_.v54;
      }
      else {
        v43 = (unsigned __int64)(unsigned __int8)v53_.v53 >> 1;
      }
      SpineModel_64dde0(v40, (__int64)v42, v43);
    }
    else if ((v53_.v53 & 1) != 0) {
      GameRoutine_64df20(v40, (__int64)v53_.v55, v53_.v54);
    }
    else {
      v41 = v53_.v54;
      *v40 = v53_.v53;
      *(_QWORD*)(v32 + 2832) = v41;
      *(_QWORD*)(v32 + 2840) = v53_.v55;
    }
  }
  v44 = *(unsigned __int8*)(v32 + 2824);
  if ((v44 & 1) != 0) {
    v45 = *(_QWORD*)(v32 + 2832);
  }
  else {
    v45 = v44 >> 1;
  }
  if (v45 == 0) {
  LABEL_91:
    if ((v53_.v53 & 1) == 0) {
      return;
    }
    goto LABEL_92;
  }
  if (*(float*)(v32 + 3020) <= 0x0.0p+0f) {
    goto LABEL_87;
  }
  v46 = *(unsigned __int8*)(v32 + 3024);
  v47 = *(_QWORD*)(v32 + 3032);
  if ((v46 & 1) == 0) {
    v47 = v46 >> 1;
  }
  if (v47 != v45 ||
      ((v46 & 1) != 0 ? (v48 = *(_QWORD*)(v32 + 3040)) : (v48 = v32 + 3025),
       (v44 & 1) != 0 ? (v49 = *(const char**)(v32 + 2840))
                      : (v49 = (const char*)(v32 + 2825)),
       memcmp_alt1(v48, (__int64)v49, v45) != 0)) {
  LABEL_87:
    if ((v44 & 1) != 0) {
      v50 = *(const char**)(v32 + 2840);
    }
    else {
      v50 = (const char*)(v32 + 2825);
    }
    snd_Fade_Fade_10c830_alt1((__int64)v52, 0x0.0p+0f);
    snd_a290c0(v32, v50, (__int64)v52, 0, v29 & 1, 0x0.0p+0f);
    snd_Fade_Destroy_Fade_alt1(v52);
    goto LABEL_91;
  }
  snd_Fade_Fade_10cb00_alt1((__int64)v52, "FadeTime_BGM_Hub_In");
  snd_a290c0(v32, v49, (__int64)v52, (int)*(float*)(v32 + 3020), 0, 0x0.0p+0f);
  snd_Fade_Destroy_Fade_alt1(v52);
  *(_DWORD*)(v32 + 3020) = 0;
  if ((v53_.v53 & 1) == 0) {
    return;
  }
LABEL_92:
  if (v53_.v55 != nullptr) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, (__int64)v53_.v55);
  }
}

__attribute__((swiftcall)) void game_810a70(PSEUDO_X8 x8_, __int64 result,
                                            _BYTE* a2, float a4)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned int v6;
  double v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  long double v12;
  char v13;
  __int64 v14;
  __int64 v15;
  long double v16;
  __int64 v17;
  __int64 v18;
  _BYTE v19[200];
  _QWORD v20[2];

  if (a2 != nullptr && *a2 != 0) {
    v6 = result;
    snd_findSound(a2);
    if ((snd_isActive_100100(a3) & 1) == 0 ||
        ((v9 = snd_fnd_WeakHandle_get(a3)) != 0 ? (v10 = v9 - 5592) : (v10 = 0),
         (snd_Param_isEnvelopeReleased(v10 + 40) & 1) != 0 ||
             (snd_Param_isEnvelopeFading(v10 + 40) & 1) != 0 ||
             ((result = snd_Param_isEnvelopeEnded(v10 + 40)) & 1) != 0)) {
      if (v6 <= 5) {
        *(float*)&v8 = a4;
        if (((1 << v6) & 0x36) != 0) {
          if (*a2 == 86 && a2[1] == 95) {
            v11 = *game_sound_g_game_sound_ptr[0];
            *(__n128*)&v12 = snd_Fade_Fade_10c830(v19, v8);
            snd_a307a0((void*)(v20), v11, a2, v19, v12);
            GameRoutine_112180(a3, v20);
            snd_Fade_Destroy_Fade(v19);
            if ((snd_fnd_WeakHandle_isValid(a3) & 1) != 0 &&
                GameData_21ec7b8 != 0 &&
                (*(_BYTE*)(game_g_game_setting + 944) & 8) != 0) {
              snd_Fade_Fade_10c830(v19, 0.0);
              snd_startVolume_ffe30(a3, v19, 0.0);
              snd_Fade_Destroy_Fade(v19);
            }
          }
          else {
            snd_Fade_Fade_10c830(v19, v8);
            snd_play_ff2d0((void*)(v20), a2, a2, v19, 0, 65537, 0, 0.0, 1.0);
            GameRoutine_112180(a3, v20);
            snd_Fade_Destroy_Fade(v19);
            v13 = snd_fnd_WeakHandle_isValid(a3);
            if (v6 == 1 && (v13 & 1) != 0) {
              v14 = snd_fnd_WeakHandle_get(a3);
              (*(void (**)(__int64, __int64))(*(_QWORD*)(v14 - 5592) + 632LL))(
                  v14 - 5592, 128);
            }
          }
        }
        else if (v6 == 3) {
          v15 = *game_sound_g_game_sound_ptr[0];
          *(__n128*)&v16 = snd_Fade_Fade_10c830(v19, v8);
          snd_a306d0((void*)(v20), v15, a2, v19, v16);
          GameRoutine_112180(a3, v20);
          snd_Fade_Destroy_Fade(v19);
          if ((snd_fnd_WeakHandle_isValid(a3) & 1) != 0) {
            v17 = snd_fnd_WeakHandle_get(a3);
            (*(void (**)(__int64, _BYTE*))(*(_QWORD*)(v17 - 5592) + 16LL))(
                v17 - 5592, a2);
          }
        }
      }
      result = snd_fnd_WeakHandle_isValid(a3);
      if ((result & 1) != 0) {
        v18 = snd_fnd_WeakHandle_get(a3);
        result = snd_Voice_hasFeature(v18 - 5592, 23);
        if ((result & 1) != 0) {
          GameRoutine_112180(&GameData_21ec558, a3);
          return;
        }
      }
    }
  }
  else {
    *(_QWORD*)a3 = 0;
    *(_DWORD*)(a3 + 8) = 0x2000;
  }
  {
    result;
    return;
  }
}

__int64 game_810d20(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  _QWORD v10[25];
  _BYTE v11[16];

  snd_findSound_alt1(a1);
  v4 = snd_fnd_WeakHandle_get_alt1((__int64)v10);
  if (v4 == 0) {
    result = strstr(a1, "BGM_");
    if (result == 0) {
      return result;
    }
    goto LABEL_5;
  }
  v5 = v4;
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)(v4 - 5592) + 664LL))(
           v4 - 5592, 1) &
       1) != 0) {
  LABEL_5:
    v7 = *game_sound_g_game_sound_ptr[0];
    snd_Fade_Fade_10c830_alt1((__int64)v10, a2);
    snd_BGM_getFirstHandle((void*)((__int64)v11), *(_QWORD*)(v7 + 8));
    v8 = snd_fnd_WeakHandle_get_alt1((__int64)v11);
    if (v8 != 0 && !snd_Voice_hasSends(v8 - 5592)) {
      (*(void (**)(_QWORD, _QWORD*, _QWORD))(**(_QWORD**)(v7 + 8) + 48LL))(
          *(_QWORD*)(v7 + 8), v10, 0);
    }
    if ((*(_BYTE*)(v7 + 2824) & 1) != 0) {
      v9 = *(_BYTE**)(v7 + 2840);
      *(_QWORD*)(v7 + 2832) = 0;
    }
    else {
      v9 = (_BYTE*)(v7 + 2825);
      *(_BYTE*)(v7 + 2824) = 0;
    }
    *v9 = 0;
    return snd_Fade_Destroy_Fade_alt1(v10);
  }
  snd_Fade_Fade_10c830_alt1((__int64)v10, a2);
  (*(void (**)(__int64, _QWORD*, _QWORD, double))(
      *(_QWORD*)(v5 - 5592) + 248LL))(v5 - 5592, v10, 0, 0x0.0p+0);
  return snd_Fade_Destroy_Fade_alt1(v10);
}

__int64 game_811270(__int64 result, const char* a2)
{

#pragma clang fp contract(off)
  const char* v3;
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
  __int128 v16;
  bool v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  float v21;
  int v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  double v29;
  _QWORD* v30;
  float v31;
  double v32;
  double v33;
  double v34;
  double v35;
  float* v36;
  float v37;
  double v38;
  _QWORD v39[25];
  struct {
    _QWORD v40[2];
    int v41;
  } v40_;

  if (result == 0) {
    return result;
  }
  v3 = (const char*)result;
  result = GameRoutine_610540((const char*)result, a2);
  if (result == 0 || *(_QWORD*)(result + 48) == 0) {
    return result;
  }
  v4 = *GameData_212d458[0];
  if (*GameData_212d458[0] != 0) {
    v5 = *(_QWORD*)(v4 + 80);
    if (v5 != 0) {
      v6 = *(_QWORD*)(v4 + 72);
      v7 = *(_QWORD*)(v4 + 80);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v8 = std___1___shared_weak_count_lock_alt1(v7);
      if (v8 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v9 = v8;
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak_alt1(v9);
        }
        std___1___shared_weak_count___release_weak_alt1(v5);
        if (v6 != 0) {
          v10 = *(_QWORD*)(v4 + 80);
          if (v10 != 0) {
            v11 = *(_QWORD*)(v4 + 72);
            v12 = *(_QWORD*)(v4 + 80);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                      memory_order_relaxed);
            v13 = std___1___shared_weak_count_lock_alt1(v12);
            if (v13 != 0) {
              v14 = *(_QWORD*)(v11 + 24);
              if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v15 = v13;
                (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
                std___1___shared_weak_count___release_weak_alt1(v15);
              }
            }
            else {
              v14 = 0;
            }
            std___1___shared_weak_count___release_weak_alt1(v10);
          }
          else {
            v14 = 0;
          }
          if (v14 != 0) {
            v16 = *(_OWORD*)(*(_QWORD*)(v14 + 16) + 560LL);
            v40_.v40[1] = *(_QWORD*)(*(_QWORD*)(v14 + 16) + 560LL);
            v40_.v41 = DWORD2(v16);
            v40_.v40[0] = GameData_212d1e0[0] + 2;
            v17 =
                (unsigned int)GameRoutine_80fde0(v3, a2, (float*)v40_.v40) == 0;
            goto LABEL_21;
          }
        }
      }
      else {
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
    }
  }
  v17 = true;
LABEL_21:
  v18 = game_sound_g_game_sound_ptr[0];
  v19 = *game_sound_g_game_sound_ptr[0];
  if (*(_QWORD*)GameData_212c638 != 0) {
    v20 = *(_QWORD*)(v19 + 32);
    v21 = 0x0.0p+0f;
    v22 = *(_DWORD*)(v20 + 376);
    v23 = 0x0.0p+0f;
    if ((v22 & 0x80000000) == 0) {
      if (v22 != 0) {
        if (v22 == 1) {
          v23 = *(float*)(v20 + 384);
        }
      }
      else {
        v21 = *(float*)(v20 + 384);
      }
    }
    if (*(_DWORD*)(v19 + 2808) == 1) {
      v24 = 0x0.0p+0f;
    }
    else {
      v24 = v21;
    }
  }
  else {
    v24 = 0x0.0p+0f;
    v23 = 0x0.0p+0f;
  }
  snd_BGM_getFirstHandle((void*)((__int64)v40_.v40), *(_QWORD*)(v19 + 8));
  result = snd_fnd_WeakHandle_get_alt1((__int64)v40_.v40);
  if (result != 0) {
    v25 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
        *(_QWORD*)(result - 5592) + 440LL))((void*)(v40_.v40), result - 5592,
                                            0);
    v26 = snd_fnd_WeakHandle_get_alt1((__int64)v40_.v40);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
        *(_QWORD*)(v25 - 5592) + 440LL))((void*)(v40_.v40), v25 - 5592, 1);
    v27 = snd_fnd_WeakHandle_get_alt1((__int64)v40_.v40);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
        *(_QWORD*)(v25 - 5592) + 440LL))((void*)(v40_.v40), v25 - 5592, 2);
    v28 = snd_fnd_WeakHandle_get_alt1((__int64)v40_.v40);
    if (v17) {
      if (v26 != 0) {
        snd_Fade_Fade_10cb00_alt1((__int64)v39, "FadeTime_BGM_Elevator_Up");
        v29 = snd_Fade_getTime((__int64)v39);
        snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, *(float*)&v29);
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v26 - 5552) + 112LL))(
            v26 - 5552, v40_.v40, 0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade_alt1(v40_.v40);
        snd_Fade_Destroy_Fade_alt1(v39);
      }
      if (v27 != 0) {
        snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, 0x0.0p+0f);
        (*(void (**)(__int64, _QWORD*, double))(*(_QWORD*)(v27 - 5552) + 96LL))(
            v27 - 5552, v40_.v40, 0x0.0p+0);
        snd_Fade_Destroy_Fade_alt1(v40_.v40);
        snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, 0x1.f400000000000p+9f);
        (*(void (**)(__int64, _QWORD*, double))(
            *(_QWORD*)(v27 - 5552) + 112LL))(v27 - 5552, v40_.v40, 0x0.0p+0);
        snd_Fade_Destroy_Fade_alt1(v40_.v40);
      }
      if (v28 == 0) {
        goto LABEL_55;
      }
      snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, 0x0.0p+0f);
      (*(void (**)(__int64, _QWORD*, double))(*(_QWORD*)(v28 - 5552) + 96LL))(
          v28 - 5552, v40_.v40, 0x0.0p+0);
      snd_Fade_Destroy_Fade_alt1(v40_.v40);
      snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, 0x1.f400000000000p+9f);
      (*(void (**)(__int64, _QWORD*, double))(*(_QWORD*)(v28 - 5552) + 112LL))(
          v28 - 5552, v40_.v40, 0x0.0p+0);
      v30 = v40_.v40;
    }
    else {
      if (v26 != 0) {
        if ((*(float (**)(__int64))(*(_QWORD*)(v26 - 5552) + 104LL))(
                v26 - 5552) <= 0x0.0p+0f) {
          v31 = 0x1.f400000000000p+8f;
        }
        else {
          v31 = 0x0.0p+0f;
        }
        snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, v31);
        (*(void (**)(__int64, _QWORD*, double))(
            *(_QWORD*)(v26 - 5552) + 112LL))(v26 - 5552, v40_.v40, 0x0.0p+0);
        snd_Fade_Destroy_Fade_alt1(v40_.v40);
      }
      if (v27 != 0) {
        if ((*(float (**)(__int64))(*(_QWORD*)(v27 - 5552) + 80LL))(
                v27 - 5552) <= 0x0.0p+0f &&
            v24 >= 0x1.0000000000000p+0f) {
          snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, 0x0.0p+0f);
          (*(void (**)(__int64, _QWORD*, double))(
              *(_QWORD*)(v27 - 5552) + 160LL))(v27 - 5552, v40_.v40, 0x0.0p+0);
          snd_Fade_Destroy_Fade_alt1(v40_.v40);
          snd_Fade_Fade_10cb00_alt1((__int64)v39, "FadeTime_BGM_Hub_In");
          v32 = snd_Fade_getTime((__int64)v39);
          snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, *(float*)&v32);
          (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v27 - 5552) +
                                                 160LL))(v27 - 5552, v40_.v40,
                                                         0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade_alt1(v40_.v40);
          snd_Fade_Destroy_Fade_alt1(v39);
          snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, 0x0.0p+0f);
          (*(void (**)(__int64, _QWORD*, float))(
              *(_QWORD*)(v27 - 5552) + 96LL))(v27 - 5552, v40_.v40, v24);
          snd_Fade_Destroy_Fade_alt1(v40_.v40);
        }
        snd_Fade_Fade_10cb00_alt1((__int64)v39, "FadeTime_BGM_Elevator_Up");
        v33 = snd_Fade_getTime((__int64)v39);
        snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, *(float*)&v33);
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v27 - 5552) + 112LL))(
            v27 - 5552, v40_.v40, 0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade_alt1(v40_.v40);
        snd_Fade_Destroy_Fade_alt1(v39);
      }
      if (v28 == 0) {
        goto LABEL_55;
      }
      if ((*(float (**)(__int64))(*(_QWORD*)(v28 - 5552) + 80LL))(v28 - 5552) <=
              0x0.0p+0f &&
          v23 >= 0x1.0000000000000p+0f) {
        snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, 0x0.0p+0f);
        (*(void (**)(__int64, _QWORD*, double))(
            *(_QWORD*)(v28 - 5552) + 160LL))(v28 - 5552, v40_.v40, 0x0.0p+0);
        snd_Fade_Destroy_Fade_alt1(v40_.v40);
        snd_Fade_Fade_10cb00_alt1((__int64)v39, "FadeTime_BGM_Hub_In");
        v34 = snd_Fade_getTime((__int64)v39);
        snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, *(float*)&v34);
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v28 - 5552) + 160LL))(
            v28 - 5552, v40_.v40, 0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade_alt1(v40_.v40);
        snd_Fade_Destroy_Fade_alt1(v39);
        snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, 0x0.0p+0f);
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v28 - 5552) + 96LL))(
            v28 - 5552, v40_.v40, v23);
        snd_Fade_Destroy_Fade_alt1(v40_.v40);
      }
      snd_Fade_Fade_10cb00_alt1((__int64)v39, "FadeTime_BGM_Elevator_Up");
      v35 = snd_Fade_getTime((__int64)v39);
      snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, *(float*)&v35);
      (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v28 - 5552) + 112LL))(
          v28 - 5552, v40_.v40, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade_alt1(v40_.v40);
      v30 = v39;
    }
    snd_Fade_Destroy_Fade_alt1(v30);
  LABEL_55:
    v36 = *(float**)(*v18 + 8);
    v37 = v36[8];
    snd_Fade_Fade_10cb00_alt1((__int64)v39, "FadeTime_BGM_Elevator_Up");
    v38 = snd_Fade_getTime((__int64)v39);
    snd_Fade_Fade_10c830_alt1((__int64)v40_.v40, *(float*)&v38);
    (*(void (**)(float*, _QWORD*, _QWORD, float))(*(_QWORD*)v36 + 80LL))(
        v36, v40_.v40, 0, v37);
    snd_Fade_Destroy_Fade_alt1(v40_.v40);
    return snd_Fade_Destroy_Fade_alt1(v39);
  }
  return result;
}

__int64 game_811f20(unsigned __int8 a1)
{

#pragma clang fp contract(off)
  float v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6[2];
  _QWORD v7[25];

  if (a1 != 0) {
    v2 = 0x1.2c00000000000p+8f;
  }
  else {
    v2 = 0x1.2c00000000000p+9f;
  }
  snd_Fade_Fade_10c830_alt1((__int64)v7, v2);
  snd_stop_ffbe0((__int64)"ObeliskPreviewVoice", (__int64)v7);
  snd_Fade_Destroy_Fade_alt1(v7);
  snd_findVoice((__int64)"ObeliskFotVoice");
  result = snd_fnd_WeakHandle_isValid_alt1(v6);
  if ((result & 1) != 0) {
    v4 = snd_fnd_WeakHandle_get_alt1((__int64)v6);
    snd_Fade_Fade_10c830_alt1((__int64)v7, v2);
    (*(void (**)(__int64, _QWORD*, _QWORD, double))(
        *(_QWORD*)(v4 - 5592) + 248LL))(v4 - 5592, v7, 0, 0x0.0p+0);
    snd_Fade_Destroy_Fade_alt1(v7);
    v5 = snd_fnd_WeakHandle_get_alt1((__int64)v6);
    result = (*(__int64 (**)(__int64, const char*))(
        *(_QWORD*)(v5 - 5592) + 16LL))(v5 - 5592, "ObeliskFotVoice_Stop");
  }
  if (a1 <= 9u) {
    *(_BYTE*)(game_sound_g_game_sound + 2600) = a1;
  }
  return result;
}

__int64* game_820d50(int a1)
{
  int v2;
  int v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ecde0,
                            memory_order_acquire) &
       1) != 0) {
    return &GameData_21ecc80[2 * a1];
  }
  v2 = __cxa_guard_acquire(&GameData_21ecde0);
  v3 = a1;
  if (v2 != 0) {
    GameData_21ecc88 = (__int64)&GameData_1a9c8f2;
    GameData_21ecc80[0] = game_HashString((__int64)&GameData_1a9c8f2);
    GameData_21ecc98 = (__int64)&GameData_1aa08e4;
    GameData_21ecc90 = game_HashString((__int64)&GameData_1aa08e4);
    GameData_21ecca8 = (__int64)&GameData_1aaff09;
    GameData_21ecca0 = game_HashString((__int64)&GameData_1aaff09);
    GameData_21eccb8 = (__int64)&GameData_1af8e71;
    GameData_21eccb0 = game_HashString((__int64)&GameData_1af8e71);
    GameData_21eccc8 = (__int64)&GameData_1ae9683;
    GameData_21eccc0 = game_HashString((__int64)&GameData_1ae9683);
    GameData_21eccd8 = (__int64)&GameData_1acedd9;
    GameData_21eccd0 = game_HashString((__int64)&GameData_1acedd9);
    GameData_21ecce8 = (__int64)&GameData_1af136a;
    GameData_21ecce0 = game_HashString((__int64)&GameData_1af136a);
    GameData_21eccf8 = (__int64)&GameData_1af50c1;
    GameData_21eccf0 = game_HashString((__int64)&GameData_1af50c1);
    GameData_21ecd08 = (__int64)&GameData_1aed7d2;
    GameData_21ecd00 = game_HashString((__int64)&GameData_1aed7d2);
    GameData_21ecd18 = (__int64)&GameData_1a98c8c;
    GameData_21ecd10 = game_HashString((__int64)&GameData_1a98c8c);
    GameData_21ecd28 = (__int64)&GameData_1ae57f5;
    GameData_21ecd20 = game_HashString((__int64)&GameData_1ae57f5);
    GameData_21ecd38 = (__int64)&GameData_1aabfc5;
    GameData_21ecd30 = game_HashString((__int64)&GameData_1aabfc5);
    GameData_21ecd48 = (__int64)&GameData_1ae1e08;
    GameData_21ecd40 = game_HashString((__int64)&GameData_1ae1e08);
    GameData_21ecd58 = (__int64)&GameData_1ae5806;
    GameData_21ecd50 = game_HashString((__int64)&GameData_1ae5806);
    GameData_21ecd68 = (__int64)&GameData_1abf97e;
    GameData_21ecd60 = game_HashString((__int64)&GameData_1abf97e);
    GameData_21ecd78 = (__int64)&GameData_1a892f8;
    GameData_21ecd70 = game_HashString((__int64)&GameData_1a892f8);
    GameData_21ecd88 = (__int64)&GameData_1ac3147;
    GameData_21ecd80 = game_HashString((__int64)&GameData_1ac3147);
    GameData_21ecd98 = (__int64)&GameData_1af50d2;
    GameData_21ecd90 = game_HashString((__int64)&GameData_1af50d2);
    GameData_21ecda8 = (__int64)&GameData_1aa837c;
    GameData_21ecda0 = game_HashString((__int64)&GameData_1aa837c);
    GameData_21ecdb8 = (__int64)&GameData_1ae1e1c;
    GameData_21ecdb0 = game_HashString((__int64)&GameData_1ae1e1c);
    GameData_21ecdc8 = (__int64)&GameData_1af8e7f;
    GameData_21ecdc0 = game_HashString((__int64)&GameData_1af8e7f);
    GameData_21ecdd8 = (__int64)&GameData_1ae1e2a;
    GameData_21ecdd0 = game_HashString((__int64)&GameData_1ae1e2a);
    __cxa_guard_release(&GameData_21ecde0);
    v3 = a1;
  }
  return &GameData_21ecc80[2 * v3];
}

__int64* game_821090(int a1)
{
  int v2;
  int v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed068,
                            memory_order_acquire) &
       1) != 0) {
    return &GameData_21ecde8[2 * a1];
  }
  v2 = __cxa_guard_acquire(&GameData_21ed068);
  v3 = a1;
  if (v2 != 0) {
    GameData_21ecdf0 = (__int64)&GameData_1ad2972;
    GameData_21ecde8[0] = game_HashString((__int64)&GameData_1ad2972);
    GameData_21ece00 = (__int64)&GameData_1abbab5;
    GameData_21ecdf8 = game_HashString((__int64)&GameData_1abbab5);
    GameData_21ece10 = (__int64)&GameData_1ac6aa6;
    GameData_21ece08 = game_HashString((__int64)&GameData_1ac6aa6);
    GameData_21ece20 = (__int64)&GameData_1acab80;
    GameData_21ece18 = game_HashString((__int64)&GameData_1acab80);
    GameData_21ece30 = (__int64)&GameData_1acab97;
    GameData_21ece28 = game_HashString((__int64)&GameData_1acab97);
    GameData_21ece40 = (__int64)&GameData_1acabab;
    GameData_21ece38 = game_HashString((__int64)&GameData_1acabab);
    GameData_21ece50 = (__int64)&GameData_1ad2986;
    GameData_21ece48 = game_HashString((__int64)&GameData_1ad2986);
    GameData_21ece60 = (__int64)&GameData_1aaff17;
    GameData_21ece58 = game_HashString((__int64)&GameData_1aaff17);
    GameData_21ece70 = (__int64)&GameData_1a8d3ae;
    GameData_21ece68 = game_HashString((__int64)&GameData_1a8d3ae);
    GameData_21ece80 = (__int64)&GameData_1ada369;
    GameData_21ece78 = game_HashString((__int64)&GameData_1ada369);
    GameData_21ece90 = (__int64)&GameData_1a98c9d;
    GameData_21ece88 = game_HashString((__int64)&GameData_1a98c9d);
    GameData_21ecea0 = (__int64)&GameData_1af8e93;
    GameData_21ece98 = game_HashString((__int64)&GameData_1af8e93);
    GameData_21eceb0 = (__int64)&GameData_1aa472e;
    GameData_21ecea8 = game_HashString((__int64)&GameData_1aa472e);
    GameData_21ecec0 = (__int64)&GameData_1aa4748;
    GameData_21eceb8 = game_HashString((__int64)&GameData_1aa4748);
    GameData_21eced0 = (__int64)&GameData_1ae9691;
    GameData_21ecec8 = game_HashString((__int64)&GameData_1ae9691);
    GameData_21ecee0 = (__int64)&GameData_1ae5817;
    GameData_21eced8 = game_HashString((__int64)&GameData_1ae5817);
    GameData_21ecef0 = (__int64)&GameData_1abbac9;
    GameData_21ecee8 = game_HashString((__int64)&GameData_1abbac9);
    GameData_21ecf00 = (__int64)&GameData_1af50e3;
    GameData_21ecef8 = game_HashString((__int64)&GameData_1af50e3);
    GameData_21ecf10 = (__int64)&GameData_1ae1e38;
    GameData_21ecf08 = game_HashString((__int64)&GameData_1ae1e38);
    GameData_21ecf20 = (__int64)&GameData_1a98cc0;
    GameData_21ecf18 = game_HashString((__int64)&GameData_1a98cc0);
    GameData_21ecf30 = (__int64)&GameData_1ae96b4;
    GameData_21ecf28 = game_HashString((__int64)&GameData_1ae96b4);
    GameData_21ecf40 = (__int64)&GameData_1afcd97;
    GameData_21ecf38 = game_HashString((__int64)&GameData_1afcd97);
    GameData_21ecf50 = (__int64)&GameData_1ada380;
    GameData_21ecf48 = game_HashString((__int64)&GameData_1ada380);
    GameData_21ecf60 = (__int64)&GameData_1ada391;
    GameData_21ecf58 = game_HashString((__int64)&GameData_1ada391);
    GameData_21ecf70 = (__int64)&GameData_1acabc5;
    GameData_21ecf68 = game_HashString((__int64)&GameData_1acabc5);
    GameData_21ecf80 = (__int64)&GameData_1ad65b8;
    GameData_21ecf78 = game_HashString((__int64)&GameData_1ad65b8);
    GameData_21ecf90 = (__int64)&GameData_1acede7;
    GameData_21ecf88 = game_HashString((__int64)&GameData_1acede7);
    GameData_21ecfa0 = (__int64)&GameData_1aa838a;
    GameData_21ecf98 = game_HashString((__int64)&GameData_1aa838a);
    GameData_21ecfb0 = (__int64)&GameData_1ae1e4f;
    GameData_21ecfa8 = game_HashString((__int64)&GameData_1ae1e4f);
    GameData_21ecfc0 = (__int64)&GameData_1a89309;
    GameData_21ecfb8 = game_HashString((__int64)&GameData_1a89309);
    GameData_21ecfd0 = (__int64)&GameData_1afcdab;
    GameData_21ecfc8 = game_HashString((__int64)&GameData_1afcdab);
    GameData_21ecfe0 = (__int64)&GameData_1af50fa;
    GameData_21ecfd8 = game_HashString((__int64)&GameData_1af50fa);
    GameData_21ecff0 = (__int64)&GameData_1ac3158;
    GameData_21ecfe8 = game_HashString((__int64)&GameData_1ac3158);
    GameData_21ed000 = (__int64)&GameData_1a8559c;
    GameData_21ecff8 = game_HashString((__int64)&GameData_1a8559c);
    GameData_21ed010 = (__int64)&GameData_1af137b;
    GameData_21ed008 = game_HashString((__int64)&GameData_1af137b);
    GameData_21ed020 = (__int64)&GameData_1aabfd3;
    GameData_21ed018 = game_HashString((__int64)&GameData_1aabfd3);
    GameData_21ed030 = (__int64)&GameData_1aa83a4;
    GameData_21ed028 = game_HashString((__int64)&GameData_1aa83a4);
    GameData_21ed040 = (__int64)&GameData_1a855b6;
    GameData_21ed038 = game_HashString((__int64)&GameData_1a855b6);
    GameData_21ed050 = (__int64)&GameData_1ae583a;
    GameData_21ed048 = game_HashString((__int64)&GameData_1ae583a);
    GameData_21ed060 = (__int64)&GameData_1a855e3;
    GameData_21ed058 = game_HashString((__int64)&GameData_1a855e3);
    __cxa_guard_release(&GameData_21ed068);
    v3 = a1;
  }
  return &GameData_21ecde8[2 * v3];
}

void game_821840()
{
  int v0;
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
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

  v0 = GameData_21668c8++;
  if (v0 == 0) {
    ((__int64 (*)(__int64))*game_Binder_vtable_ptr)(
        (__int64)&game_Binder_vtable_ptr);
  }
  if (game_GameModeData_instance_ != 0) {
    v1 = *(__int64**)(*(_QWORD*)(game_GameModeData_instance_ + 48) + 3932456LL);
    v2 = *(__int64**)(*(_QWORD*)(game_GameModeData_instance_ + 48) + 3932464LL);
    while (v1 != v2) {
      v3 = *v1++;
      game_VariableManager_SetFlag_alt1(v3, *(_DWORD*)(v3 + 28));
    }
  }
  if (--GameData_21668c8 == 0) {
    (*(void (**)(__int64))((char*)((_UNKNOWN**)0x8LL) +
                           (_QWORD)game_Binder_vtable_ptr))(
        (__int64)&game_Binder_vtable_ptr);
  }
  v4 = GameData_21ec9d0;
  if (GameData_21ec9d0 != 0) {
    v5 = GameData_21ec9c8;
    v6 = GameData_21ec9b0;
    v7 = fw_memory_g_heap_manager_ptr;
    do {
      v8 = v4 - 1;
      v9 = (__int64*)(*(_QWORD*)(v6 + 8 * ((v4 - 1 + v5) / 0xAAuLL)) +
                      24 * ((v4 - 1 + v5) % 0xAAuLL));
      v10 = *v9;
      if (*v9 != 0) {
        v9[1] = v10;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v11, v10);
        v5 = GameData_21ec9c8;
        v4 = GameData_21ec9d0;
        v6 = GameData_21ec9b0;
        v8 = GameData_21ec9d0 - 1;
      }
      v12 = GameData_21ec9b8;
      v13 = v5 + v4;
      GameData_21ec9d0 = v8;
      v14 = 170 * ((GameData_21ec9b8 - v6) >> 3) - 1;
      if (GameData_21ec9b8 == v6) {
        v14 = 0;
      }
      if ((unsigned __int64)(v14 - v13 - 339) <= 0xFFFFFFFFFFFFFEABLL) {
        v15 = *(_QWORD*)(GameData_21ec9b8 - 8);
        if (v15 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v16, v15);
          v6 = GameData_21ec9b0;
          v12 = GameData_21ec9b8;
          v5 = GameData_21ec9c8;
          v8 = GameData_21ec9d0;
        }
        GameData_21ec9b8 = v12 - 8;
      }
      v4 = v8;
    } while (v8 != 0);
  }
  GameRoutine_821570();
}

__int64* game_8224a0(unsigned __int8 a1)
{
  int v2;
  unsigned __int8 v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ecc78,
                            memory_order_acquire) &
       1) != 0) {
    return &GameData_21ec9d8[2 * a1];
  }
  v2 = __cxa_guard_acquire(&GameData_21ecc78);
  v3 = a1;
  if (v2 != 0) {
    GameData_21ec9e0 = (__int64)&GameData_1ad65a1;
    GameData_21ec9d8[0] = game_HashString((__int64)&GameData_1ad65a1);
    GameData_21ec9f0 = (__int64)&GameData_1a8d350;
    GameData_21ec9e8 = game_HashString((__int64)&GameData_1a8d350);
    GameData_21eca00 = (__int64)&GameData_1abf967;
    GameData_21ec9f8 = game_HashString((__int64)&GameData_1abf967);
    GameData_21eca10 = (__int64)&GameData_1ac30db;
    GameData_21eca08 = game_HashString((__int64)&GameData_1ac30db);
    GameData_21eca20 = (__int64)&GameData_1ab39d0;
    GameData_21eca18 = game_HashString((__int64)&GameData_1ab39d0);
    GameData_21eca30 = (__int64)&GameData_1a90c95;
    GameData_21eca28 = game_HashString((__int64)&GameData_1a90c95);
    GameData_21eca40 = (__int64)&GameData_1aa46f0;
    GameData_21eca38 = game_HashString((__int64)&GameData_1aa46f0);
    GameData_21eca50 = (__int64)&GameData_1a85568;
    GameData_21eca48 = game_HashString((__int64)&GameData_1a85568);
    GameData_21eca60 = (__int64)&GameData_1ac30fb;
    GameData_21eca58 = game_HashString((__int64)&GameData_1ac30fb);
    GameData_21eca70 = (__int64)&GameData_1af8e4e;
    GameData_21eca68 = game_HashString((__int64)&GameData_1af8e4e);
    GameData_21eca80 = (__int64)&GameData_1a8928b;
    GameData_21eca78 = game_HashString((__int64)&GameData_1a8928b);
    GameData_21eca90 = (__int64)&GameData_1aed7ac;
    GameData_21eca88 = game_HashString((__int64)&GameData_1aed7ac);
    GameData_21ecaa0 = (__int64)&GameData_1a90cbd;
    GameData_21eca98 = game_HashString((__int64)&GameData_1a90cbd);
    GameData_21ecab0 = (__int64)&GameData_1af50a6;
    GameData_21ecaa8 = game_HashString((__int64)&GameData_1af50a6);
    GameData_21ecac0 = (__int64)&GameData_1ada348;
    GameData_21ecab8 = game_HashString((__int64)&GameData_1ada348);
    GameData_21ecad0 = (__int64)&GameData_1aabfad;
    GameData_21ecac8 = game_HashString((__int64)&GameData_1aabfad);
    GameData_21ecae0 = (__int64)&GameData_1a8d367;
    GameData_21ecad8 = game_HashString((__int64)&GameData_1a8d367);
    GameData_21ecaf0 = (__int64)&GameData_1afcd52;
    GameData_21ecae8 = game_HashString((__int64)&GameData_1afcd52);
    GameData_21ecb00 = (__int64)&GameData_1af1356;
    GameData_21ecaf8 = game_HashString((__int64)&GameData_1af1356);
    GameData_21ecb10 = (__int64)&GameData_1a892ae;
    GameData_21ecb08 = game_HashString((__int64)&GameData_1a892ae);
    GameData_21ecb20 = (__int64)&GameData_1aa4714;
    GameData_21ecb18 = game_HashString((__int64)&GameData_1aa4714);
    GameData_21ecb30 = (__int64)&GameData_1a892c8;
    GameData_21ecb28 = game_HashString((__int64)&GameData_1a892c8);
    GameData_21ecb40 = (__int64)&GameData_1ae57d5;
    GameData_21ecb38 = game_HashString((__int64)&GameData_1ae57d5);
    GameData_21ecb50 = (__int64)&GameData_1a98c48;
    GameData_21ecb48 = game_HashString((__int64)&GameData_1a98c48);
    GameData_21ecb60 = (__int64)&GameData_1a85586;
    GameData_21ecb58 = game_HashString((__int64)&GameData_1a85586);
    GameData_21ecb70 = (__int64)&GameData_1aa089d;
    GameData_21ecb68 = game_HashString((__int64)&GameData_1aa089d);
    GameData_21ecb80 = (__int64)&GameData_1ae9645;
    GameData_21ecb78 = game_HashString((__int64)&GameData_1ae9645);
    GameData_21ecb90 = (__int64)&GameData_1ae9662;
    GameData_21ecb88 = game_HashString((__int64)&GameData_1ae9662);
    GameData_21ecba0 = (__int64)&GameData_1a8d38c;
    GameData_21ecb98 = game_HashString((__int64)&GameData_1a8d38c);
    GameData_21ecbb0 = (__int64)&GameData_1acedc6;
    GameData_21ecba8 = game_HashString((__int64)&GameData_1acedc6);
    GameData_21ecbc0 = (__int64)&GameData_1a9c8d2;
    GameData_21ecbb8 = game_HashString((__int64)&GameData_1a9c8d2);
    GameData_21ecbd0 = (__int64)&GameData_1ad2942;
    GameData_21ecbc8 = game_HashString((__int64)&GameData_1ad2942);
    GameData_21ecbe0 = (__int64)&GameData_1ac3119;
    GameData_21ecbd8 = game_HashString((__int64)&GameData_1ac3119);
    GameData_21ecbf0 = (__int64)&GameData_1a8d39d;
    GameData_21ecbe8 = game_HashString((__int64)&GameData_1a8d39d);
    GameData_21ecc00 = (__int64)&GameData_1ad2962;
    GameData_21ecbf8 = game_HashString((__int64)&GameData_1ad2962);
    GameData_21ecc10 = (__int64)&GameData_1a892dc;
    GameData_21ecc08 = game_HashString((__int64)&GameData_1a892dc);
    GameData_21ecc20 = (__int64)&GameData_1afcd80;
    GameData_21ecc18 = game_HashString((__int64)&GameData_1afcd80);
    GameData_21ecc30 = (__int64)&GameData_1ac3133;
    GameData_21ecc28 = game_HashString((__int64)&GameData_1ac3133);
    GameData_21ecc40 = (__int64)&GameData_1abba9d;
    GameData_21ecc38 = game_HashString((__int64)&GameData_1abba9d);
    GameData_21ecc50 = (__int64)&GameData_1aa08ba;
    GameData_21ecc48 = game_HashString((__int64)&GameData_1aa08ba);
    GameData_21ecc60 = (__int64)&GameData_1a98c65;
    GameData_21ecc58 = game_HashString((__int64)&GameData_1a98c65);
    GameData_21ecc70 = (__int64)&GameData_1ab39ee;
    GameData_21ecc68 = game_HashString((__int64)&GameData_1ab39ee);
    __cxa_guard_release(&GameData_21ecc78);
    v3 = a1;
  }
  return &GameData_21ec9d8[2 * v3];
}

__int64 game_82cfe0(__int64 a1, __int16* a2)
{
  int v2;
  int v3;
  int v4;
  int v7;
  int v8;
  __int16 v9;
  __int16 v10;
  unsigned int v11;
  __int64* v12;
  __int64* v13;
  char v14;
  char v15;
  __int64 v16;
  int v17;
  __int64* v18;
  __int64* i;
  char v20;
  __int64 v21;
  int v22;
  struct {
    __int16 v24;
    __int16 v25;
    __int16 v26;
    __int16 v27;
    __int16 v28;
    __int16 v29;
  } v24_;

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v7 = v3 * v2;
  v8 = v3 * v2 * v4;
  if (v8 != 0) {
    v9 = 0;
    v10 = 0;
    v11 = 6 * game_script_hub_schedule_kHourCycles[a2[3] % 24] % 0x18u;
  }
  else {
    v4 = SWORD2(game_gmap_GmapClock_kDefaultTime);
    LOWORD(v11) = HIWORD(game_gmap_GmapClock_kDefaultTime);
    v9 = GameData_21caa04;
    v10 = HIWORD(GameData_21caa04);
    v7 = SWORD1(game_gmap_GmapClock_kDefaultTime) *
         (__int16)game_gmap_GmapClock_kDefaultTime;
    LOWORD(v2) = game_gmap_GmapClock_kDefaultTime;
    LOWORD(v3) = WORD1(game_gmap_GmapClock_kDefaultTime);
  }
  v24_.v24 = v2;
  v24_.v25 = v3;
  v24_.v26 = v4;
  v24_.v27 = v11;
  v24_.v28 = v9;
  v24_.v29 = v10;
  if (v7 * v4 == 0) {
    return 0;
  }
  if (v8 == 0 || (v12 = *(__int64**)(a1 + 3932744),
                  v13 = *(__int64**)(a1 + 3932752), v12 == v13)) {
    v14 = 0;
  }
  else {
    v14 = 0;
    do {
      if (a2[1] * *a2 * a2[2] == 0 || (*(_BYTE*)(a1 + 3932768) & 0x76) != 0) {
        v15 = 0;
      }
      else {
        v16 = *v12;
        *(_BYTE*)(a1 + 3932768) |= 8u;
        v17 = *(unsigned __int8*)(v16 + 73);
        if (v17 == 2) {
          v15 = GameRoutine_8309a0(a1, v16, (__int64)a2);
        }
        else if (v17 == 1) {
          v15 = GameRoutine_8308a0(a1, v16, (__int64)a2);
        }
        else {
          v15 = 0;
        }
        *(_BYTE*)(a1 + 3932768) &= ~8u;
      }
      ++v12;
      v14 |= v15;
    } while (v12 != v13);
  }
  v18 = *(__int64**)(a1 + 3932720);
  for (i = *(__int64**)(a1 + 3932728); v18 != i; v14 |= v20) {
    if (v24_.v25 * v24_.v24 * v24_.v26 == 0 ||
        (*(_BYTE*)(a1 + 3932768) & 0x76) != 0) {
      v20 = 0;
    }
    else {
      v21 = *v18;
      *(_BYTE*)(a1 + 3932768) |= 8u;
      v22 = *(unsigned __int8*)(v21 + 73);
      if (v22 == 2) {
        v20 = GameRoutine_8309a0(a1, v21, (__int64)&v24_.v24);
      }
      else if (v22 == 1) {
        v20 = GameRoutine_8308a0(a1, v21, (__int64)&v24_.v24);
      }
      else {
        v20 = 0;
      }
      *(_BYTE*)(a1 + 3932768) &= ~8u;
    }
    ++v18;
  }
  if ((v14 & 1) == 0) {
    return 0;
  }
  game_82cfe0(a1, a2);
  return 1;
}

unsigned __int64 game_853060(unsigned __int64 result, int* a2, __int64 a3,
                             char a4)
{
  int* v6;
  __int64* v7;
  __int64 v8;
  int* v9;
  __int64 v10;
  int* v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  unsigned int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  int v39;
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
  int v53;
  int* v54;
  int v55;
  unsigned int v56;
  int* v57;
  unsigned int v58;
  int v59;
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
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  unsigned int v74;
  int v75;
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
  __int64 v87;
  __int64 v88;
  int v89;
  int v90;
  int* v91;
  int* v92;
  int v93;
  __int64 v94;
  __int64 v95;
  int v96;
  unsigned int v97;
  unsigned int v98;
  int v99;
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
  int v113;
  int v114;
  unsigned int v115;
  unsigned int v116;
  int v117;
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
  __int64 v129;
  __int64 v130;
  int v131;
  int* v132;
  char v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  unsigned int v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  int v146;
  __int64 v147;
  __int64 v148;
  int v149;
  unsigned int v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  int v157;
  unsigned int v158;
  int v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  int v172;
  unsigned int v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  int* v180;
  int v181;
  unsigned int v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  int v189;
  unsigned int v190;
  int v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  int v198;
  int v199;
  __int64 v200;
  __int64 v201;
  int v202;
  int v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  int v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  int v218;
  int v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  unsigned int v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  int* v234;
  int v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  int v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  int* v251;
  bool v252;
  char v253;
  __int64 v254;
  int* v255;
  int* v256;
  int* v257;
  int v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  int v266;
  unsigned int v267;
  int v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  __int64 v282;
  int v283;
  unsigned int v284;
  int v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  signed __int64 v291;
  signed __int64 v292;
  signed __int64 v293;
  __int64 v294;
  __int64 v295;
  int* v296;
  _DWORD* v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  int* v319;
  int v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  int v328;
  int v329;
  __int64 v330;
  int* v331;
  __int64 v332;
  _DWORD* v333;
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
  unsigned int v354;
  __int64 v355;
  __int64 v356;
  __int64 v357;
  __int64 v358;
  __int64 v359;
  int v360;
  bool v361;
  int v362;
  __int64 v363;
  int* v364;
  int* v365;
  int* v366;
  __int64 v367;
  __int64 v368;
  __int64 v369;
  __int64 v370;
  __int64 v371;
  __int64 v372;
  __int64 v373;
  __int64 v374;
  int* v375;
  int v376;
  __int64 v377;
  __int64 v378;
  __int64 v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  __int64 v383;
  unsigned __int64 v384;
  unsigned __int64 v385;
  int* v386;
  __int64 v387;
  __int64 v388;
  __int64 v389;
  __int64 v390;
  __int64 v391;
  __int64 v392;
  __int64 v393;
  int v394;
  __int64 v395;
  __int64 v396;
  __int64 v397;
  __int64 v398;
  __int64 v399;
  __int64 v400;
  unsigned int v401;
  int v402;
  int* v403;
  __int64 v404;
  __int64 v405;
  __int64 v406;
  __int64 v407;
  __int64 v408;
  __int64 v409;
  __int64 v410;
  int v411;
  __int64 v412;
  __int64 v413;
  __int64 v414;
  __int64 v415;
  __int64 v416;
  int v417;
  int v418;
  int* v419;
  __int64 v420;
  __int64 v421;
  __int64 v422;
  __int64 v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  int v427;
  unsigned int v428;
  int v429;
  __int64 v430;
  __int64 v431;
  __int64 v432;
  __int64 v433;
  __int64 v434;
  __int64 v435;
  __int64 v436;
  int* v437;
  __int64 v438;
  __int64 v439;
  __int64 v440;
  __int64 v441;
  __int64 v442;
  __int64 v443;
  __int64 v444;
  int v445;
  unsigned int v446;
  int v447;
  __int64 v448;
  __int64 v449;
  __int64 v450;
  __int64 v451;
  __int64 v452;
  int v453;
  __int64 v454;
  __int64 v455;
  __int64 v456;
  __int64 v457;
  __int64 v458;
  __int64 v459;
  __int64 v460;
  int v461;
  __int64 v462;
  __int64 v463;
  __int64 v464;
  __int64 v465;
  __int64 v466;
  __int64 v467;
  int v468;
  int v469;
  __int64 v470;
  __int64 v471;
  __int64 v472;
  __int64 v473;
  __int64 v474;
  __int64 v475;
  __int64 v476;
  int v477;
  __int64 v478;
  __int64 v479;
  __int64 v480;
  __int64 v481;
  __int64 v482;
  __int64 v483;
  __int64 v484;
  __int64 v485;
  __int64 v486;
  __int64 v487;
  __int64 v488;
  __int64 v489;
  __int64 v490;
  int v491;
  __int64 v492;
  __int64 v493;
  __int64 v494;
  __int64 v495;
  __int64 v496;
  __int64 v497;
  __int64 v498;
  int* v499;

  v6 = (int*)result;
  v7 = GameData_212c880[0];
  v8 = game_g_shared_system_skills_ptr;
LABEL_2:
  v9 = v6;
  v499 = a2 - 1;
  while (1) {
    v6 = v9;
    v10 = a2 - v9;
    if (v10 <= 2) {
      if ((unsigned __int64)v10 < 2) {
        return result;
      }
      if (v10 == 2) {
        v243 = *(a2 - 1);
        v244 = v243 & 0xFFF;
        if ((v243 & 0xFFF) != 0) {
          v245 = *(_QWORD*)(*v7 + 64);
          v246 = *(_QWORD*)(v245 + 8 * v244);
          if (v246 != 0) {
            v247 = *(_QWORD*)(v246 + 24);
            v248 = *(_QWORD*)(v245 +
                              8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
            if (v248 != 0) {
              LODWORD(v248) = *(_WORD*)(v248 + 16) & 0xFFF;
            }
            v249 = *(_QWORD*)(v247 + 520);
            v250 = *(_QWORD*)(v247 + 512);
            if (((unsigned int)v248 >> 5) + 1 >
                    (unsigned __int64)((v249 - v250) >> 2) ||
                ((*(_DWORD*)(v250 + 4LL * ((unsigned int)v248 >> 5)) >> v248) &
                 1) == 0) {
              if ((_DWORD)v244 ==
                  *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                LODWORD(v244) = v244 | 0x10000;
              }
              else {
                LODWORD(v244) = v244 | 0x20000;
              }
            }
          }
          else {
            LODWORD(v244) = 0;
          }
        }
        v469 = *v9;
        v470 = *v9 & 0xFFFLL;
        if ((*v9 & 0xFFF) != 0) {
          v471 = *(_QWORD*)(*v7 + 64);
          v472 = *(_QWORD*)(v471 + 8 * v470);
          if (v472 != 0) {
            v473 = *(_QWORD*)(v472 + 24);
            v474 = *(_QWORD*)(v471 +
                              8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
            if (v474 != 0) {
              LODWORD(v474) = *(_WORD*)(v474 + 16) & 0xFFF;
            }
            v475 = *(_QWORD*)(v473 + 520);
            v476 = *(_QWORD*)(v473 + 512);
            if (((unsigned int)v474 >> 5) + 1 >
                    (unsigned __int64)((v475 - v476) >> 2) ||
                ((*(_DWORD*)(v476 + 4LL * ((unsigned int)v474 >> 5)) >> v474) &
                 1) == 0) {
              if ((_DWORD)v470 ==
                  *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                if ((unsigned int)v244 >= ((unsigned int)v470 | 0x10000)) {
                  return result;
                }
              }
              else if ((unsigned int)v244 >= ((unsigned int)v470 | 0x20000)) {
                return result;
              }
            LABEL_661:
              *v9 = v243;
              *(a2 - 1) = v469;
              return result;
            }
          }
          else {
            LODWORD(v470) = 0;
          }
        }
        if ((unsigned int)v244 >= (unsigned int)v470) {
          return result;
        }
        goto LABEL_661;
      }
      goto LABEL_10;
    }
    if (v10 == 3) {
      return game_855190_alt1(v9, v9 + 1, v499);
    }
    if (v10 == 4) {
      break;
    }
    if (v10 == 5) {
      return GameRoutine_855640(v9, v9 + 1, v9 + 2, v9 + 3, v499);
    }
  LABEL_10:
    if (v10 <= 23) {
      v251 = v9 + 1;
      v252 = v9 == a2 || v251 == a2;
      v253 = v252;
      if ((a4 & 1) != 0) {
        if ((v253 & 1) != 0) {
          return result;
        }
        v254 = 0;
        v255 = v9;
        while (1) {
          v257 = v251;
          v258 = v255[1];
          v259 = v258 & 0xFFF;
          if ((v258 & 0xFFF) != 0 &&
              (v260 = *(_QWORD*)(*v7 + 64),
               (v261 = *(_QWORD*)(v260 + 8 * v259)) != 0)) {
            v262 = *(_QWORD*)(v260 +
                              8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
            if (v262 != 0) {
              LODWORD(v262) = *(_WORD*)(v262 + 16) & 0xFFF;
            }
            v263 = *(_QWORD*)(v261 + 24);
            v264 = *(_QWORD*)(v263 + 520);
            v265 = *(_QWORD*)(v263 + 512);
            result = v264 - v265;
            if (((unsigned int)v262 >> 5) + 1 >
                    (unsigned __int64)((__int64)result >> 2) ||
                (v266 =
                     *(_DWORD*)(v265 + 4LL * ((unsigned int)v262 >> 5)) >> v262,
                 v267 = v255[1] & 0xFFF, (v266 & 1) == 0)) {
              if ((_DWORD)v259 ==
                  *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                v267 = v259 | 0x10000;
              }
              else {
                v267 = v259 | 0x20000;
              }
            }
          }
          else {
            v267 = 0;
          }
          v268 = *v255;
          v269 = *v255 & 0xFFFLL;
          if ((v268 & 0xFFF) == 0) {
            goto LABEL_362;
          }
          v270 = *(_QWORD*)(*v7 + 64);
          v271 = *(_QWORD*)(v270 + 8 * v269);
          if (v271 == 0) {
            break;
          }
          v272 = *(_QWORD*)(v270 +
                            8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
          if (v272 != 0) {
            LODWORD(v272) = *(_WORD*)(v272 + 16) & 0xFFF;
          }
          v273 = *(_QWORD*)(v271 + 24);
          v274 = *(_QWORD*)(v273 + 520);
          result = *(_QWORD*)(v273 + 512);
          if (((unsigned int)v272 >> 5) + 1 <=
                  (unsigned __int64)((__int64)(v274 - result) >> 2) &&
              ((*(_DWORD*)(result + 4LL * ((unsigned int)v272 >> 5)) >> v272) &
               1) != 0) {
            goto LABEL_362;
          }
          if ((_DWORD)v269 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
            if (v267 < ((unsigned int)v269 | 0x10000)) {
              goto LABEL_363;
            }
          }
          else if (v267 < ((unsigned int)v269 | 0x20000)) {
          LABEL_363:
            v275 = v254;
            do {
              *(int*)((char*)v9 + v275 + 4) = v268;
              if (v275 == 0) {
                v256 = v9;
                goto LABEL_341;
              }
              if ((v258 & 0xFFF) != 0 &&
                  (v277 = *(_QWORD*)(*v7 + 64),
                   (v278 = *(_QWORD*)(v277 + 8LL * (v258 & 0xFFF))) != 0)) {
                v279 =
                    *(_QWORD*)(v277 +
                               8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
                if (v279 != 0) {
                  LODWORD(v279) = *(_WORD*)(v279 + 16) & 0xFFF;
                }
                v280 = *(_QWORD*)(v278 + 24);
                result = ((unsigned int)v279 >> 5) + 1;
                v281 = *(_QWORD*)(v280 + 520);
                v282 = *(_QWORD*)(v280 + 512);
                if (result > (v281 - v282) >> 2 ||
                    (v283 =
                         *(_DWORD*)(v282 + 4LL * ((unsigned int)v279 >> 5)) >>
                         v279,
                     v284 = v258 & 0xFFF, (v283 & 1) == 0)) {
                  if ((_DWORD)v259 ==
                      *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                    v285 = 0x10000;
                  }
                  else {
                    v285 = 0x20000;
                  }
                  v284 = v259 | v285;
                }
              }
              else {
                v284 = 0;
              }
              v268 = *(int*)((char*)v9 + v275 - 4);
              v276 = v268 & 0xFFF;
              if ((v268 & 0xFFF) != 0) {
                v286 = *(_QWORD*)(*v7 + 64);
                result = *(_QWORD*)(v286 + 8 * v276);
                if (result != 0) {
                  v287 = *(
                      _QWORD*)(v286 +
                               8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
                  if (v287 != 0) {
                    LODWORD(v287) = *(_WORD*)(v287 + 16) & 0xFFF;
                  }
                  v288 = *(_QWORD*)(result + 24);
                  result = (unsigned int)v287 >> 5;
                  v289 = *(_QWORD*)(v288 + 520);
                  v290 = *(_QWORD*)(v288 + 512);
                  if ((unsigned int)(result + 1) >
                          (unsigned __int64)((v289 - v290) >> 2) ||
                      (((unsigned int)(result = *(
                                           unsigned int*)(v290 +
                                                          4LL * (unsigned int)
                                                                    result)) >>
                        v287) &
                       1) == 0) {
                    if ((_DWORD)v276 ==
                        *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                      LODWORD(v276) = v276 | 0x10000;
                    }
                    else {
                      LODWORD(v276) = v276 | 0x20000;
                    }
                  }
                }
                else {
                  LODWORD(v276) = 0;
                }
              }
              v275 -= 4;
            } while (v284 < (unsigned int)v276);
            v256 = (int*)((char*)v9 + v275 + 4);
          LABEL_341:
            *v256 = v258;
          }
        LABEL_342:
          v251 = v257 + 1;
          v254 += 4;
          v255 = v257;
          if (v257 + 1 == a2) {
            return result;
          }
        }
        LODWORD(v269) = 0;
      LABEL_362:
        if (v267 < (unsigned int)v269) {
          goto LABEL_363;
        }
        goto LABEL_342;
      }
      if ((v253 & 1) != 0) {
        return result;
      }
      while (1) {
        v418 = v6[1];
        v419 = v251;
        v420 = v418 & 0xFFF;
        if ((v418 & 0xFFF) != 0 &&
            (v421 = *(_QWORD*)(*v7 + 64),
             (v422 = *(_QWORD*)(v421 + 8 * v420)) != 0)) {
          v423 = *(_QWORD*)(v421 +
                            8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
          if (v423 != 0) {
            LODWORD(v423) = *(_WORD*)(v423 + 16) & 0xFFF;
          }
          v424 = *(_QWORD*)(v422 + 24);
          v425 = *(_QWORD*)(v424 + 520);
          v426 = *(_QWORD*)(v424 + 512);
          if (((unsigned int)v423 >> 5) + 1 >
                  (unsigned __int64)((v425 - v426) >> 2) ||
              (v427 =
                   *(_DWORD*)(v426 + 4LL * ((unsigned int)v423 >> 5)) >> v423,
               v428 = v6[1] & 0xFFF, (v427 & 1) == 0)) {
            if ((_DWORD)v420 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
              v428 = v420 | 0x10000;
            }
            else {
              v428 = v420 | 0x20000;
            }
          }
        }
        else {
          v428 = 0;
        }
        v429 = *v6;
        v430 = *v6 & 0xFFFLL;
        if ((*v6 & 0xFFF) == 0) {
          goto LABEL_597;
        }
        v431 = *(_QWORD*)(*v7 + 64);
        v432 = *(_QWORD*)(v431 + 8 * v430);
        if (v432 == 0) {
          break;
        }
        v433 =
            *(_QWORD*)(v431 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
        if (v433 != 0) {
          LODWORD(v433) = *(_WORD*)(v433 + 16) & 0xFFF;
        }
        v434 = *(_QWORD*)(v432 + 24);
        result = ((unsigned int)v433 >> 5) + 1;
        v435 = *(_QWORD*)(v434 + 520);
        v436 = *(_QWORD*)(v434 + 512);
        if (result <= (v435 - v436) >> 2 &&
            ((*(_DWORD*)(v436 + 4LL * ((unsigned int)v433 >> 5)) >> v433) &
             1) != 0) {
          goto LABEL_597;
        }
        if ((_DWORD)v430 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
          if (v428 < ((unsigned int)v430 | 0x10000)) {
            goto LABEL_598;
          }
        }
        else if (v428 < ((unsigned int)v430 | 0x20000)) {
        LABEL_598:
          v437 = v419;
          do {
            *v437 = v429;
            if ((v418 & 0xFFF) != 0 &&
                (v439 = *(_QWORD*)(*v7 + 64),
                 (v440 = *(_QWORD*)(v439 + 8LL * (v418 & 0xFFF))) != 0)) {
              v441 =
                  *(_QWORD*)(v439 +
                             8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
              if (v441 != 0) {
                LODWORD(v441) = *(_WORD*)(v441 + 16) & 0xFFF;
              }
              v442 = *(_QWORD*)(v440 + 24);
              v443 = *(_QWORD*)(v442 + 520);
              v444 = *(_QWORD*)(v442 + 512);
              if (((unsigned int)v441 >> 5) + 1 >
                      (unsigned __int64)((v443 - v444) >> 2) ||
                  (v445 = *(_DWORD*)(v444 + 4LL * ((unsigned int)v441 >> 5)) >>
                          v441,
                   v446 = v418 & 0xFFF, (v445 & 1) == 0)) {
                if ((_DWORD)v420 ==
                    *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                  v447 = 0x10000;
                }
                else {
                  v447 = 0x20000;
                }
                v446 = v420 | v447;
              }
            }
            else {
              v446 = 0;
            }
            v429 = *(v437 - 2);
            v438 = v429 & 0xFFF;
            if ((v429 & 0xFFF) != 0) {
              v448 = *(_QWORD*)(*v7 + 64);
              v449 = *(_QWORD*)(v448 + 8 * v438);
              if (v449 != 0) {
                v450 =
                    *(_QWORD*)(v448 +
                               8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
                if (v450 != 0) {
                  LODWORD(v450) = *(_WORD*)(v450 + 16) & 0xFFF;
                }
                v451 = *(_QWORD*)(v449 + 24);
                v452 = *(_QWORD*)(v451 + 520);
                result = *(_QWORD*)(v451 + 512);
                if (((unsigned int)v450 >> 5) + 1 >
                        (unsigned __int64)((__int64)(v452 - result) >> 2) ||
                    ((*(_DWORD*)(result + 4LL * ((unsigned int)v450 >> 5)) >>
                      v450) &
                     1) == 0) {
                  if ((_DWORD)v438 ==
                      *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                    LODWORD(v438) = v438 | 0x10000;
                  }
                  else {
                    LODWORD(v438) = v438 | 0x20000;
                  }
                }
              }
              else {
                LODWORD(v438) = 0;
              }
            }
            --v437;
          } while (v446 < (unsigned int)v438);
          *v437 = v418;
        }
      LABEL_577:
        v251 = v419 + 1;
        v6 = v419;
        if (v419 + 1 == a2) {
          return result;
        }
      }
      LODWORD(v430) = 0;
    LABEL_597:
      if (v428 < (unsigned int)v430) {
        goto LABEL_598;
      }
      goto LABEL_577;
    }
    if (a3 == 0) {
      if (v9 == a2) {
        return result;
      }
      v291 = (unsigned __int64)(v10 - 2) >> 1;
      v292 = v291;
    LABEL_395:
      v293 = v292;
      if (v291 < v292) {
        goto LABEL_394;
      }
      v294 = (2 * (v292 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
      v295 = 2 * v292 + 2;
      v296 = &v9[v294];
      if (v295 < v10) {
        v297 = v296 + 1;
        v298 = *v296 & 0xFFF;
        if ((*v296 & 0xFFF) != 0) {
          v299 = *(_QWORD*)(*v7 + 64);
          v300 = *(_QWORD*)(v299 + 8 * v298);
          if (v300 != 0) {
            v301 = *(_QWORD*)(v299 +
                              8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
            if (v301 != 0) {
              LODWORD(v301) = *(_WORD*)(v301 + 16) & 0xFFF;
            }
            v302 = *(_QWORD*)(v300 + 24);
            v303 = *(_QWORD*)(v302 + 520);
            v304 = *(_QWORD*)(v302 + 512);
            if (((unsigned int)v301 >> 5) + 1 >
                    (unsigned __int64)((v303 - v304) >> 2) ||
                ((*(_DWORD*)(v304 + 4LL * ((unsigned int)v301 >> 5)) >> v301) &
                 1) == 0) {
              if ((*v296 & 0xFFF) ==
                  *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                LODWORD(v298) = *v296 & 0xFFF | 0x10000;
              }
              else {
                LODWORD(v298) = *v296 & 0xFFF | 0x20000;
              }
            }
          }
          else {
            LODWORD(v298) = 0;
          }
        }
        v305 = *v297 & 0xFFF;
        if ((*v297 & 0xFFF) != 0) {
          v306 = *(_QWORD*)(*v7 + 64);
          v307 = *(_QWORD*)(v306 + 8 * v305);
          if (v307 != 0) {
            v308 = *(_QWORD*)(v306 +
                              8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
            if (v308 != 0) {
              LODWORD(v308) = *(_WORD*)(v308 + 16) & 0xFFF;
            }
            v309 = *(_QWORD*)(v307 + 24);
            v310 = *(_QWORD*)(v309 + 520);
            v311 = *(_QWORD*)(v309 + 512);
            if (((unsigned int)v308 >> 5) + 1 >
                    (unsigned __int64)((v310 - v311) >> 2) ||
                ((*(_DWORD*)(v311 + 4LL * ((unsigned int)v308 >> 5)) >> v308) &
                 1) == 0) {
              if ((*v297 & 0xFFF) ==
                  *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                LODWORD(v305) = *v297 & 0xFFF | 0x10000;
              }
              else {
                LODWORD(v305) = *v297 & 0xFFF | 0x20000;
              }
            }
          }
          else {
            LODWORD(v305) = 0;
          }
        }
        if ((unsigned int)v298 < (unsigned int)v305) {
          ++v296;
          v294 = 2 * v293 + 2;
        }
      }
      v312 = *v296 & 0xFFFLL;
      if ((*v296 & 0xFFF) != 0) {
        v313 = *(_QWORD*)(*v7 + 64);
        v314 = *(_QWORD*)(v313 + 8 * v312);
        if (v314 != 0) {
          v315 = *(_QWORD*)(v313 +
                            8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
          if (v315 != 0) {
            LODWORD(v315) = *(_WORD*)(v315 + 16) & 0xFFF;
          }
          v316 = *(_QWORD*)(v314 + 24);
          v317 = *(_QWORD*)(v316 + 520);
          v318 = *(_QWORD*)(v316 + 512);
          if (((unsigned int)v315 >> 5) + 1 >
                  (unsigned __int64)((v317 - v318) >> 2) ||
              ((*(_DWORD*)(v318 + 4LL * ((unsigned int)v315 >> 5)) >> v315) &
               1) == 0) {
            if ((_DWORD)v312 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
              LODWORD(v312) = v312 | 0x10000;
            }
            else {
              LODWORD(v312) = v312 | 0x20000;
            }
          }
        }
        else {
          LODWORD(v312) = 0;
        }
      }
      v319 = &v9[v293];
      v320 = *v319;
      v321 = *v319 & 0xFFFLL;
      if ((*v319 & 0xFFF) != 0) {
        v322 = *(_QWORD*)(*v7 + 64);
        v323 = *(_QWORD*)(v322 + 8 * v321);
        if (v323 != 0) {
          v324 = *(_QWORD*)(v322 +
                            8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
          if (v324 != 0) {
            LODWORD(v324) = *(_WORD*)(v324 + 16) & 0xFFF;
          }
          v325 = *(_QWORD*)(v323 + 24);
          v326 = *(_QWORD*)(v325 + 520);
          v327 = *(_QWORD*)(v325 + 512);
          if (((unsigned int)v324 >> 5) + 1 >
                  (unsigned __int64)((v326 - v327) >> 2) ||
              (v328 =
                   *(_DWORD*)(v327 + 4LL * ((unsigned int)v324 >> 5)) >> v324,
               result = (unsigned int)v321, (v328 & 1) == 0)) {
            if ((_DWORD)v321 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
              result = (unsigned int)v321 | 0x10000;
              if ((unsigned int)v312 < (unsigned int)result) {
                goto LABEL_394;
              }
            }
            else {
              result = (unsigned int)v321 | 0x20000;
              if ((unsigned int)v312 < (unsigned int)result) {
                goto LABEL_394;
              }
            }
            goto LABEL_441;
          }
        }
        else {
          result = 0;
        }
        if ((unsigned int)v312 < (unsigned int)result) {
          goto LABEL_394;
        }
      }
      else {
        result = 0;
      }
    LABEL_441:
      v329 = *v296;
      while (1) {
        v331 = v296;
        *v319 = v329;
        if (v291 < v294) {
        LABEL_393:
          *v331 = v320;
        LABEL_394:
          v292 = v293 - 1;
          if (v293 == 0) {
            while (1) {
              v362 = *v9;
              v363 = 0;
              v364 = v9;
              do {
                v366 = &v364[v363];
                v367 = (2 * v363) | 1;
                v365 = v366 + 1;
                v363 = 2 * v363 + 2;
                if (v363 >= v10) {
                  v363 = v367;
                }
                else {
                  v368 = v366[1] & 0xFFF;
                  if ((v366[1] & 0xFFF) != 0) {
                    v369 = *(_QWORD*)(*v7 + 64);
                    v370 = *(_QWORD*)(v369 + 8 * v368);
                    if (v370 != 0) {
                      v371 =
                          *(_QWORD*)(v369 +
                                     8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                                   v8));
                      if (v371 != 0) {
                        LODWORD(v371) = *(_WORD*)(v371 + 16) & 0xFFF;
                      }
                      v372 = *(_QWORD*)(v370 + 24);
                      v373 = *(_QWORD*)(v372 + 520);
                      v374 = *(_QWORD*)(v372 + 512);
                      if (((unsigned int)v371 >> 5) + 1 >
                              (unsigned __int64)((v373 - v374) >> 2) ||
                          ((*(_DWORD*)(v374 +
                                       4LL * ((unsigned int)v371 >> 5)) >>
                            v371) &
                           1) == 0) {
                        if ((v366[1] & 0xFFF) ==
                            *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                          LODWORD(v368) = v366[1] & 0xFFF | 0x10000;
                        }
                        else {
                          LODWORD(v368) = v366[1] & 0xFFF | 0x20000;
                        }
                      }
                    }
                    else {
                      LODWORD(v368) = 0;
                    }
                  }
                  v376 = v366[2];
                  v375 = v366 + 2;
                  result = v376 & 0xFFF;
                  if ((v376 & 0xFFF) != 0) {
                    v377 = *(_QWORD*)(*v7 + 64);
                    v378 = *(_QWORD*)(v377 + 8 * result);
                    if (v378 != 0) {
                      v379 =
                          *(_QWORD*)(v377 +
                                     8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                                   v8));
                      if (v379 != 0) {
                        LODWORD(v379) = *(_WORD*)(v379 + 16) & 0xFFF;
                      }
                      v380 = *(_QWORD*)(v378 + 24);
                      v381 = *(_QWORD*)(v380 + 520);
                      v382 = *(_QWORD*)(v380 + 512);
                      if (((unsigned int)v379 >> 5) + 1 >
                              (unsigned __int64)((v381 - v382) >> 2) ||
                          ((*(_DWORD*)(v382 +
                                       4LL * ((unsigned int)v379 >> 5)) >>
                            v379) &
                           1) == 0) {
                        if ((_DWORD)result ==
                            *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                          result = (unsigned int)result | 0x10000;
                        }
                        else {
                          result = (unsigned int)result | 0x20000;
                        }
                      }
                    }
                    else {
                      result = 0;
                    }
                  }
                  if ((unsigned int)v368 >= (unsigned int)result) {
                    v363 = v367;
                  }
                  else {
                    v365 = v375;
                  }
                }
                *v364 = *v365;
                v364 = v365;
              } while (v363 <= (__int64)((unsigned __int64)(v10 - 2) >> 1));
              if (v365 == --a2) {
                *v365 = v362;
                goto LABEL_495;
              }
              *v365 = *a2;
              *a2 = v362;
              v383 = ((char*)v365 - (char*)v9 + 4) >> 2;
              v361 = v383 < 2;
              v384 = v383 - 2;
              if (!v361) {
                v385 = v384 >> 1;
                v386 = &v9[v385];
                v387 = *v386 & 0xFFFLL;
                if ((*v386 & 0xFFF) != 0) {
                  v388 = *(_QWORD*)(*v7 + 64);
                  v389 = *(_QWORD*)(v388 + 8 * v387);
                  if (v389 != 0) {
                    v390 =
                        *(_QWORD*)(v388 +
                                   8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                                 v8));
                    if (v390 != 0) {
                      LODWORD(v390) = *(_WORD*)(v390 + 16) & 0xFFF;
                    }
                    v391 = *(_QWORD*)(v389 + 24);
                    result = ((unsigned int)v390 >> 5) + 1;
                    v392 = *(_QWORD*)(v391 + 520);
                    v393 = *(_QWORD*)(v391 + 512);
                    if (result > (v392 - v393) >> 2 ||
                        ((*(_DWORD*)(v393 + 4LL * ((unsigned int)v390 >> 5)) >>
                          v390) &
                         1) == 0) {
                      if ((_DWORD)v387 ==
                          *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                        LODWORD(v387) = v387 | 0x10000;
                      }
                      else {
                        LODWORD(v387) = v387 | 0x20000;
                      }
                    }
                  }
                  else {
                    LODWORD(v387) = 0;
                  }
                }
                v394 = *v365;
                v395 = *v365 & 0xFFFLL;
                if ((*v365 & 0xFFF) != 0) {
                  v396 = *(_QWORD*)(*v7 + 64);
                  result = *(_QWORD*)(v396 + 8 * v395);
                  if (result == 0) {
                    v401 = 0;
                  LABEL_546:
                    if ((unsigned int)v387 >= v401) {
                      goto LABEL_495;
                    }
                  LABEL_547:
                    v402 = *v386;
                    while (2) {
                      v403 = v386;
                      *v365 = v402;
                      if (v385 == 0) {
                      LABEL_571:
                        *v403 = v394;
                        goto LABEL_495;
                      }
                      v385 = (v385 - 1) >> 1;
                      v386 = &v9[v385];
                      v402 = *v386;
                      v404 = *v386 & 0xFFFLL;
                      if ((*v386 & 0xFFF) != 0) {
                        v405 = *(_QWORD*)(*v7 + 64);
                        v406 = *(_QWORD*)(v405 + 8 * v404);
                        if (v406 != 0) {
                          v407 = *(
                              _QWORD*)(v405 +
                                       8LL *
                                           *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                                   v8));
                          if (v407 != 0) {
                            LODWORD(v407) = *(_WORD*)(v407 + 16) & 0xFFF;
                          }
                          v408 = *(_QWORD*)(v406 + 24);
                          v409 = *(_QWORD*)(v408 + 520);
                          v410 = *(_QWORD*)(v408 + 512);
                          if (((unsigned int)v407 >> 5) + 1 >
                                  (unsigned __int64)((v409 - v410) >> 2) ||
                              ((*(_DWORD*)(v410 +
                                           4LL * ((unsigned int)v407 >> 5)) >>
                                v407) &
                               1) == 0) {
                            v252 = (_DWORD)v404 ==
                                   *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8);
                            v411 = v404 | 0x20000;
                            LODWORD(v404) = v404 | 0x10000;
                            if (!v252) {
                              LODWORD(v404) = v411;
                            }
                          }
                          goto LABEL_559;
                        }
                        LODWORD(v404) = 0;
                        if ((_DWORD)v395 == 0) {
                        LABEL_548:
                          result = 0;
                          goto LABEL_549;
                        }
                      }
                      else {
                      LABEL_559:
                        if ((_DWORD)v395 == 0) {
                          goto LABEL_548;
                        }
                      }
                      v412 = *(_QWORD*)(*v7 + 64);
                      result = *(_QWORD*)(v412 + 8LL * (unsigned int)v395);
                      if (result != 0) {
                        v413 = *(
                            _QWORD*)(v412 +
                                     8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                                   v8));
                        if (v413 != 0) {
                          LODWORD(v413) = *(_WORD*)(v413 + 16) & 0xFFF;
                        }
                        v414 = *(_QWORD*)(result + 24);
                        v415 = *(_QWORD*)(v414 + 520);
                        v416 = *(_QWORD*)(v414 + 512);
                        if (((unsigned int)v413 >> 5) + 1 >
                                (unsigned __int64)((v415 - v416) >> 2) ||
                            (result = (unsigned int)v395,
                             ((*(_DWORD*)(v416 +
                                          4LL * ((unsigned int)v413 >> 5)) >>
                               v413) &
                              1) == 0)) {
                          if ((_DWORD)v395 ==
                              *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                            v417 = 0x10000;
                          }
                          else {
                            v417 = 0x20000;
                          }
                          result = (unsigned int)v395 | v417;
                        }
                      }
                    LABEL_549:
                      v365 = v403;
                      if ((unsigned int)v404 >= (unsigned int)result) {
                        goto LABEL_571;
                      }
                      continue;
                    }
                  }
                  v397 = *(
                      _QWORD*)(v396 +
                               8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
                  if (v397 != 0) {
                    LODWORD(v397) = *(_WORD*)(v397 + 16) & 0xFFF;
                  }
                  v398 = *(_QWORD*)(result + 24);
                  result = (unsigned int)v397 >> 5;
                  v399 = *(_QWORD*)(v398 + 520);
                  v400 = *(_QWORD*)(v398 + 512);
                  if ((unsigned int)(result + 1) <=
                      (unsigned __int64)((v399 - v400) >> 2)) {
                    result =
                        (unsigned int)(*(_DWORD*)(v400 +
                                                  4LL * (unsigned int)result) >>
                                       v397);
                    v401 = *v365 & 0xFFF;
                    if ((result & 1) != 0) {
                      goto LABEL_546;
                    }
                  }
                  if ((_DWORD)v395 ==
                      *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                    if ((unsigned int)v387 >= ((unsigned int)v395 | 0x10000)) {
                      goto LABEL_495;
                    }
                    goto LABEL_547;
                  }
                  if ((unsigned int)v387 < ((unsigned int)v395 | 0x20000)) {
                    goto LABEL_547;
                  }
                }
              }
            LABEL_495:
              v361 = v10-- <= 2;
              if (v361) {
                return result;
              }
            }
          }
          goto LABEL_395;
        }
        v332 = (2 * v294) | 1;
        v294 = 2 * v294 + 2;
        v296 = &v9[v332];
        if (v294 >= v10) {
          v294 = v332;
        }
        else {
          v333 = v296 + 1;
          v334 = *v296 & 0xFFF;
          if ((*v296 & 0xFFF) != 0) {
            v335 = *(_QWORD*)(*v7 + 64);
            v336 = *(_QWORD*)(v335 + 8 * v334);
            if (v336 != 0) {
              v337 =
                  *(_QWORD*)(v335 +
                             8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
              if (v337 != 0) {
                LODWORD(v337) = *(_WORD*)(v337 + 16) & 0xFFF;
              }
              v338 = *(_QWORD*)(v336 + 24);
              v339 = *(_QWORD*)(v338 + 520);
              v340 = *(_QWORD*)(v338 + 512);
              if (((unsigned int)v337 >> 5) + 1 >
                      (unsigned __int64)((v339 - v340) >> 2) ||
                  ((*(_DWORD*)(v340 + 4LL * ((unsigned int)v337 >> 5)) >>
                    v337) &
                   1) == 0) {
                if ((*v296 & 0xFFF) ==
                    *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                  LODWORD(v334) = *v296 & 0xFFF | 0x10000;
                }
                else {
                  LODWORD(v334) = *v296 & 0xFFF | 0x20000;
                }
              }
            }
            else {
              LODWORD(v334) = 0;
            }
          }
          v341 = *v333 & 0xFFF;
          if ((*v333 & 0xFFF) != 0) {
            v342 = *(_QWORD*)(*v7 + 64);
            v343 = *(_QWORD*)(v342 + 8 * v341);
            if (v343 != 0) {
              v344 =
                  *(_QWORD*)(v342 +
                             8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
              if (v344 != 0) {
                LODWORD(v344) = *(_WORD*)(v344 + 16) & 0xFFF;
              }
              v345 = *(_QWORD*)(v343 + 24);
              v346 = *(_QWORD*)(v345 + 520);
              v347 = *(_QWORD*)(v345 + 512);
              if (((unsigned int)v344 >> 5) + 1 >
                      (unsigned __int64)((v346 - v347) >> 2) ||
                  ((*(_DWORD*)(v347 + 4LL * ((unsigned int)v344 >> 5)) >>
                    v344) &
                   1) == 0) {
                if ((*v333 & 0xFFF) ==
                    *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                  LODWORD(v341) = *v333 & 0xFFF | 0x10000;
                }
                else {
                  LODWORD(v341) = *v333 & 0xFFF | 0x20000;
                }
              }
            }
            else {
              LODWORD(v341) = 0;
            }
          }
          if ((unsigned int)v334 >= (unsigned int)v341) {
            v294 = v332;
          }
          else {
            ++v296;
          }
        }
        v329 = *v296;
        result = *v296 & 0xFFFLL;
        if ((*v296 & 0xFFF) == 0) {
          goto LABEL_479;
        }
        v348 = *(_QWORD*)(*v7 + 64);
        v349 = *(_QWORD*)(v348 + 8 * result);
        if (v349 != 0) {
          break;
        }
        result = 0;
        if ((_DWORD)v321 != 0) {
        LABEL_480:
          v355 = *(_QWORD*)(*v7 + 64);
          v330 = *(_QWORD*)(v355 + 8LL * (unsigned int)v321);
          if (v330 != 0) {
            v356 = *(_QWORD*)(v355 +
                              8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
            if (v356 != 0) {
              LODWORD(v356) = *(_WORD*)(v356 + 16) & 0xFFF;
            }
            v357 = *(_QWORD*)(v330 + 24);
            v358 = *(_QWORD*)(v357 + 520);
            v359 = *(_QWORD*)(v357 + 512);
            if (((unsigned int)v356 >> 5) + 1 >
                    (unsigned __int64)((v358 - v359) >> 2) ||
                (LODWORD(v330) = v321,
                 ((*(_DWORD*)(v359 + 4LL * ((unsigned int)v356 >> 5)) >> v356) &
                  1) == 0)) {
              if ((_DWORD)v321 ==
                  *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
                v360 = 0x10000;
              }
              else {
                v360 = 0x20000;
              }
              LODWORD(v330) = v321 | v360;
            }
          }
          goto LABEL_443;
        }
      LABEL_442:
        LODWORD(v330) = 0;
      LABEL_443:
        v319 = v331;
        if ((unsigned int)result < (unsigned int)v330) {
          goto LABEL_393;
        }
      }
      v350 = *(_QWORD*)(v348 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
      if (v350 != 0) {
        LODWORD(v350) = *(_WORD*)(v350 + 16) & 0xFFF;
      }
      v351 = *(_QWORD*)(v349 + 24);
      v352 = *(_QWORD*)(v351 + 520);
      v353 = *(_QWORD*)(v351 + 512);
      if (((unsigned int)v350 >> 5) + 1 >
              (unsigned __int64)((v352 - v353) >> 2) ||
          ((*(_DWORD*)(v353 + 4LL * ((unsigned int)v350 >> 5)) >> v350) & 1) ==
              0) {
        v252 = (_DWORD)result == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8);
        v354 = result | 0x20000;
        LODWORD(result) = result | 0x10000;
        if (v252) {
          result = (unsigned int)result;
        }
        else {
          result = v354;
        }
      }
    LABEL_479:
      if ((_DWORD)v321 != 0) {
        goto LABEL_480;
      }
      goto LABEL_442;
    }
    v11 = &v9[(unsigned __int64)v10 >> 1];
    if ((unsigned __int64)v10 < 0x81) {
      result = game_855190_alt1(&v6[(unsigned __int64)v10 >> 1], v6, v499);
    }
    else {
      game_855190_alt1(v6, &v6[(unsigned __int64)v10 >> 1], v499);
      game_855190_alt1(v6 + 1, v11 - 1, a2 - 2);
      game_855190_alt1(v6 + 2, v11 + 1, a2 - 3);
      result = game_855190_alt1(v11 - 1, v11, v11 + 1);
      v12 = *v6;
      *v6 = *v11;
      *v11 = v12;
    }
    --a3;
    if ((a4 & 1) != 0) {
      v13 = *v6;
      v14 = *v7;
      v15 = *v6 & 0xFFFLL;
    LABEL_36:
      v33 = *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8);
      v34 = *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8);
      v35 = 0;
      if ((_DWORD)v15 == v33) {
        v36 = 0x10000;
      }
      else {
        v36 = 0x20000;
      }
      v37 = v15 | v36;
      do {
        v39 = v6[v35 + 1];
        v40 = v39 & 0xFFF;
        if ((v39 & 0xFFF) == 0) {
          goto LABEL_51;
        }
        v41 = *(_QWORD*)(v14 + 64);
        v42 = *(_QWORD*)(v41 + 8 * v40);
        if (v42 != 0) {
          v43 = *(_QWORD*)(v41 + 8 * v34);
          if (v43 != 0) {
            LODWORD(v43) = *(_WORD*)(v43 + 16) & 0xFFF;
          }
          v44 = *(_QWORD*)(v42 + 24);
          v45 = *(_QWORD*)(v44 + 520);
          v46 = *(_QWORD*)(v44 + 512);
          if (((unsigned int)v43 >> 5) + 1 >
                  (unsigned __int64)((v45 - v46) >> 2) ||
              ((*(_DWORD*)(v46 + 4LL * ((unsigned int)v43 >> 5)) >> v43) & 1) ==
                  0) {
            if ((_DWORD)v40 == v33) {
              LODWORD(v40) = v33 | 0x10000;
            }
            else {
              LODWORD(v40) = v40 | 0x20000;
            }
          }
        LABEL_51:
          if ((_DWORD)v15 == 0) {
            goto LABEL_40;
          }
          goto LABEL_52;
        }
        LODWORD(v40) = 0;
        if ((_DWORD)v15 == 0) {
        LABEL_40:
          v38 = 0;
          goto LABEL_41;
        }
      LABEL_52:
        v47 = *(_QWORD*)(v14 + 64);
        v48 = *(_QWORD*)(v47 + 8 * v15);
        if (v48 == 0) {
          goto LABEL_40;
        }
        v49 = *(_QWORD*)(v47 + 8 * v34);
        if (v49 != 0) {
          LODWORD(v49) = *(_WORD*)(v49 + 16) & 0xFFF;
        }
        v50 = *(_QWORD*)(v48 + 24);
        v51 = *(_QWORD*)(v50 + 520);
        v52 = *(_QWORD*)(v50 + 512);
        if (((unsigned int)v49 >> 5) + 1 >
                (unsigned __int64)((v51 - v52) >> 2) ||
            (v53 = *(_DWORD*)(v52 + 4LL * ((unsigned int)v49 >> 5)) >> v49,
             v38 = v15, (v53 & 1) == 0)) {
          v38 = v37;
        }
      LABEL_41:
        ++v35;
      } while ((unsigned int)v40 < v38);
      v54 = a2;
      if ((_DWORD)v15 == v33) {
        v55 = 0x10000;
      }
      else {
        v55 = 0x20000;
      }
      v56 = v15 | v55;
      v57 = &v6[v35];
      if (v35 == 1) {
        v54 = a2;
        while (1) {
          if (v57 >= v54) {
            goto LABEL_106;
          }
          v75 = *--v54;
          v76 = v75 & 0xFFF;
          if ((v75 & 0xFFF) == 0) {
            goto LABEL_97;
          }
          v77 = *(_QWORD*)(v14 + 64);
          v78 = *(_QWORD*)(v77 + 8 * v76);
          if (v78 != 0) {
            break;
          }
          LODWORD(v76) = 0;
          if ((_DWORD)v15 != 0) {
          LABEL_98:
            v83 = *(_QWORD*)(v14 + 64);
            v84 = *(_QWORD*)(v83 + 8 * v15);
            if (v84 != 0) {
              v85 = *(_QWORD*)(v83 + 8 * v34);
              if (v85 != 0) {
                LODWORD(v85) = *(_WORD*)(v85 + 16) & 0xFFF;
              }
              v86 = *(_QWORD*)(v84 + 24);
              v87 = *(_QWORD*)(v86 + 520);
              v88 = *(_QWORD*)(v86 + 512);
              if (((unsigned int)v85 >> 5) + 1 >
                      (unsigned __int64)((v87 - v88) >> 2) ||
                  (v89 =
                       *(_DWORD*)(v88 + 4LL * ((unsigned int)v85 >> 5)) >> v85,
                   v74 = v15, (v89 & 1) == 0)) {
                v74 = v56;
              }
              goto LABEL_86;
            }
          }
        LABEL_85:
          v74 = 0;
        LABEL_86:
          if ((unsigned int)v76 < v74) {
            goto LABEL_106;
          }
        }
        v79 = *(_QWORD*)(v77 + 8 * v34);
        if (v79 != 0) {
          LODWORD(v79) = *(_WORD*)(v79 + 16) & 0xFFF;
        }
        v80 = *(_QWORD*)(v78 + 24);
        v81 = *(_QWORD*)(v80 + 520);
        v82 = *(_QWORD*)(v80 + 512);
        if (((unsigned int)v79 >> 5) + 1 >
                (unsigned __int64)((v81 - v82) >> 2) ||
            ((*(_DWORD*)(v82 + 4LL * ((unsigned int)v79 >> 5)) >> v79) & 1) ==
                0) {
          if ((_DWORD)v76 == v33) {
            LODWORD(v76) = v33 | 0x10000;
          }
          else {
            LODWORD(v76) = v76 | 0x20000;
          }
        }
      LABEL_97:
        if ((_DWORD)v15 == 0) {
          goto LABEL_85;
        }
        goto LABEL_98;
      }
      while (2) {
        v59 = *--v54;
        v60 = v59 & 0xFFF;
        if ((v59 & 0xFFF) != 0) {
          v61 = *(_QWORD*)(v14 + 64);
          v62 = *(_QWORD*)(v61 + 8 * v60);
          if (v62 != 0) {
            v63 = *(_QWORD*)(v61 + 8 * v34);
            if (v63 != 0) {
              LODWORD(v63) = *(_WORD*)(v63 + 16) & 0xFFF;
            }
            v64 = *(_QWORD*)(v62 + 24);
            v65 = *(_QWORD*)(v64 + 520);
            v66 = *(_QWORD*)(v64 + 512);
            if (((unsigned int)v63 >> 5) + 1 >
                    (unsigned __int64)((v65 - v66) >> 2) ||
                ((*(_DWORD*)(v66 + 4LL * ((unsigned int)v63 >> 5)) >> v63) &
                 1) == 0) {
              if ((_DWORD)v60 == v33) {
                LODWORD(v60) = v33 | 0x10000;
              }
              else {
                LODWORD(v60) = v60 | 0x20000;
              }
            }
            goto LABEL_76;
          }
          LODWORD(v60) = 0;
          if ((_DWORD)v15 == 0) {
          LABEL_65:
            v58 = 0;
            goto LABEL_66;
          }
        }
        else {
        LABEL_76:
          if ((_DWORD)v15 == 0) {
            goto LABEL_65;
          }
        }
        v67 = *(_QWORD*)(v14 + 64);
        v68 = *(_QWORD*)(v67 + 8 * v15);
        if (v68 == 0) {
          goto LABEL_65;
        }
        v69 = *(_QWORD*)(v67 + 8 * v34);
        if (v69 != 0) {
          LODWORD(v69) = *(_WORD*)(v69 + 16) & 0xFFF;
        }
        v70 = *(_QWORD*)(v68 + 24);
        v71 = *(_QWORD*)(v70 + 520);
        v72 = *(_QWORD*)(v70 + 512);
        if (((unsigned int)v69 >> 5) + 1 >
                (unsigned __int64)((v71 - v72) >> 2) ||
            (v73 = *(_DWORD*)(v72 + 4LL * ((unsigned int)v69 >> 5)) >> v69,
             v58 = v15, (v73 & 1) == 0)) {
          v58 = v56;
        }
      LABEL_66:
        if ((unsigned int)v60 >= v58) {
          continue;
        }
        break;
      }
    LABEL_106:
      if (v57 >= v54) {
        v132 = v57 - 1;
        if (v6 != v57 - 1) {
          goto LABEL_160;
        }
        goto LABEL_161;
      }
      v90 = *v54;
      v91 = v57;
      v92 = v54;
      while (2) {
        *v91 = v90;
        *v92 = v39;
        v93 = *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8);
        v94 = *v7;
        v95 = *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8);
        if ((_DWORD)v15 == v93) {
          v96 = 0x10000;
        }
        else {
          v96 = 0x20000;
        }
        v97 = v15 | v96;
        while (2) {
          v99 = v91[1];
          ++v91;
          v39 = v99;
          v100 = v99 & 0xFFF;
          if ((v99 & 0xFFF) != 0) {
            v101 = *(_QWORD*)(v94 + 64);
            v102 = *(_QWORD*)(v101 + 8 * v100);
            if (v102 != 0) {
              v103 = *(_QWORD*)(v101 + 8 * v95);
              if (v103 != 0) {
                LODWORD(v103) = *(_WORD*)(v103 + 16) & 0xFFF;
              }
              v104 = *(_QWORD*)(v102 + 24);
              v105 = *(_QWORD*)(v104 + 520);
              v106 = *(_QWORD*)(v104 + 512);
              if (((unsigned int)v103 >> 5) + 1 >
                      (unsigned __int64)((v105 - v106) >> 2) ||
                  ((*(_DWORD*)(v106 + 4LL * ((unsigned int)v103 >> 5)) >>
                    v103) &
                   1) == 0) {
                if ((_DWORD)v100 == v93) {
                  LODWORD(v100) = v93 | 0x10000;
                }
                else {
                  LODWORD(v100) = v100 | 0x20000;
                }
              }
              goto LABEL_124;
            }
            LODWORD(v100) = 0;
            if ((_DWORD)v15 == 0) {
            LABEL_113:
              v98 = 0;
              goto LABEL_114;
            }
          }
          else {
          LABEL_124:
            if ((_DWORD)v15 == 0) {
              goto LABEL_113;
            }
          }
          v107 = *(_QWORD*)(v94 + 64);
          v108 = *(_QWORD*)(v107 + 8 * v15);
          if (v108 == 0) {
            goto LABEL_113;
          }
          v109 = *(_QWORD*)(v107 + 8 * v95);
          if (v109 != 0) {
            LODWORD(v109) = *(_WORD*)(v109 + 16) & 0xFFF;
          }
          v110 = *(_QWORD*)(v108 + 24);
          v111 = *(_QWORD*)(v110 + 520);
          v112 = *(_QWORD*)(v110 + 512);
          if (((unsigned int)v109 >> 5) + 1 >
                  (unsigned __int64)((v111 - v112) >> 2) ||
              (v113 =
                   *(_DWORD*)(v112 + 4LL * ((unsigned int)v109 >> 5)) >> v109,
               v98 = v15, (v113 & 1) == 0)) {
            v98 = v97;
          }
        LABEL_114:
          if ((unsigned int)v100 < v98) {
            continue;
          }
          break;
        }
        if ((_DWORD)v15 == v93) {
          v114 = 0x10000;
        }
        else {
          v114 = 0x20000;
        }
        v115 = v15 | v114;
        while (2) {
          v117 = *--v92;
          v90 = v117;
          v118 = v117 & 0xFFF;
          if ((v117 & 0xFFF) != 0) {
            v119 = *(_QWORD*)(v94 + 64);
            v120 = *(_QWORD*)(v119 + 8 * v118);
            if (v120 != 0) {
              v121 = *(_QWORD*)(v119 + 8 * v95);
              if (v121 != 0) {
                LODWORD(v121) = *(_WORD*)(v121 + 16) & 0xFFF;
              }
              v122 = *(_QWORD*)(v120 + 24);
              v123 = *(_QWORD*)(v122 + 520);
              v124 = *(_QWORD*)(v122 + 512);
              if (((unsigned int)v121 >> 5) + 1 >
                      (unsigned __int64)((v123 - v124) >> 2) ||
                  ((*(_DWORD*)(v124 + 4LL * ((unsigned int)v121 >> 5)) >>
                    v121) &
                   1) == 0) {
                if ((_DWORD)v118 == v93) {
                  LODWORD(v118) = v93 | 0x10000;
                }
                else {
                  LODWORD(v118) = v118 | 0x20000;
                }
              }
              goto LABEL_148;
            }
            LODWORD(v118) = 0;
            if ((_DWORD)v15 == 0) {
            LABEL_137:
              v116 = 0;
              goto LABEL_138;
            }
          }
          else {
          LABEL_148:
            if ((_DWORD)v15 == 0) {
              goto LABEL_137;
            }
          }
          v125 = *(_QWORD*)(v94 + 64);
          v126 = *(_QWORD*)(v125 + 8 * v15);
          if (v126 == 0) {
            goto LABEL_137;
          }
          v127 = *(_QWORD*)(v125 + 8 * v95);
          if (v127 != 0) {
            LODWORD(v127) = *(_WORD*)(v127 + 16) & 0xFFF;
          }
          v128 = *(_QWORD*)(v126 + 24);
          v129 = *(_QWORD*)(v128 + 520);
          v130 = *(_QWORD*)(v128 + 512);
          if (((unsigned int)v127 >> 5) + 1 >
                  (unsigned __int64)((v129 - v130) >> 2) ||
              (v131 =
                   *(_DWORD*)(v130 + 4LL * ((unsigned int)v127 >> 5)) >> v127,
               v116 = v15, (v131 & 1) == 0)) {
            v116 = v115;
          }
        LABEL_138:
          if ((unsigned int)v118 >= v116) {
            continue;
          }
          break;
        }
        if (v91 < v92) {
          continue;
        }
        break;
      }
      v132 = v91 - 1;
      if (v6 != v91 - 1) {
      LABEL_160:
        *v6 = *v132;
      }
    LABEL_161:
      *v132 = v13;
      if (v57 < v54) {
      LABEL_164:
        result = game_853060(v6, v132, a3, a4 & 1);
        a4 = 0;
        v9 = v132 + 1;
      }
      else {
        v9 = v132 + 1;
        v133 = game_855ec0_alt1(v6, v132);
        result = game_855ec0_alt1(v132 + 1, a2);
        if ((result & 1) != 0) {
          a2 = v132;
          if ((v133 & 1) != 0) {
            return result;
          }
          goto LABEL_2;
        }
        if ((v133 & 1) == 0) {
          goto LABEL_164;
        }
      }
    }
    else {
      v16 = *(v6 - 1);
      v17 = v16 & 0xFFF;
      if ((v16 & 0xFFF) != 0) {
        v18 = *(_QWORD*)(*v7 + 64);
        v19 = *(_QWORD*)(v18 + 8 * v17);
        if (v19 != 0) {
          v20 =
              *(_QWORD*)(v18 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
          if (v20 != 0) {
            LODWORD(v20) = *(_WORD*)(v20 + 16) & 0xFFF;
          }
          v21 = *(_QWORD*)(v19 + 24);
          v22 = *(_QWORD*)(v21 + 520);
          v23 = *(_QWORD*)(v21 + 512);
          if (((unsigned int)v20 >> 5) + 1 >
                  (unsigned __int64)((v22 - v23) >> 2) ||
              ((*(_DWORD*)(v23 + 4LL * ((unsigned int)v20 >> 5)) >> v20) & 1) ==
                  0) {
            if ((_DWORD)v17 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
              LODWORD(v17) = v17 | 0x10000;
            }
            else {
              LODWORD(v17) = v17 | 0x20000;
            }
          }
        }
        else {
          LODWORD(v17) = 0;
        }
      }
      v13 = *v6;
      v15 = *v6 & 0xFFFLL;
      v24 = (*v6 & 0xFFF) == 0;
      if ((*v6 & 0xFFF) == 0 || (v14 = *v7, v25 = *(_QWORD*)(*v7 + 64),
                                 (v26 = *(_QWORD*)(v25 + 8 * v15)) == 0)) {
        v138 = 0;
        goto LABEL_172;
      }
      v27 = *(_QWORD*)(v25 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
      if (v27 != 0) {
        LODWORD(v27) = *(_WORD*)(v27 + 16) & 0xFFF;
      }
      v28 = *(_QWORD*)(v26 + 24);
      v29 = *(_QWORD*)(v28 + 520);
      v30 = *(_QWORD*)(v28 + 512);
      if (((unsigned int)v27 >> 5) + 1 <=
          (unsigned __int64)((v29 - v30) >> 2)) {
        v31 = *(_DWORD*)(v30 + 4LL * ((unsigned int)v27 >> 5)) >> v27;
        v32 = *v6 & 0xFFF;
        if ((v31 & 1) != 0) {
          goto LABEL_35;
        }
      }
      if ((_DWORD)v15 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
        v32 = v15 | 0x10000;
      LABEL_35:
        if ((unsigned int)v17 < v32) {
          goto LABEL_36;
        }
        goto LABEL_166;
      }
      if ((unsigned int)v17 < ((unsigned int)v15 | 0x20000)) {
        goto LABEL_36;
      }
    LABEL_166:
      v134 = *(_QWORD*)(v25 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
      if (v134 != 0) {
        LODWORD(v134) = *(_WORD*)(v134 + 16) & 0xFFF;
      }
      v135 = *(_QWORD*)(v26 + 24);
      v136 = *(_QWORD*)(v135 + 520);
      v137 = *(_QWORD*)(v135 + 512);
      if (((unsigned int)v134 >> 5) + 1 <=
              (unsigned __int64)((v136 - v137) >> 2) &&
          ((*(_DWORD*)(v137 + 4LL * ((unsigned int)v134 >> 5)) >> v134) & 1) !=
              0) {
        v24 = false;
        v138 = *v6 & 0xFFF;
      }
      else if ((_DWORD)v15 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
        v24 = false;
        v138 = v15 | 0x10000;
      }
      else {
        v138 = v15 | 0x20000;
        v24 = false;
      }
    LABEL_172:
      v139 = *v499 & 0xFFFLL;
      if ((*v499 & 0xFFF) != 0) {
        v140 = *(_QWORD*)(*v7 + 64);
        v141 = *(_QWORD*)(v140 + 8 * v139);
        if (v141 != 0) {
          v142 = *(_QWORD*)(v140 +
                            8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
          if (v142 != 0) {
            LODWORD(v142) = *(_WORD*)(v142 + 16) & 0xFFF;
          }
          v143 = *(_QWORD*)(v141 + 24);
          v144 = *(_QWORD*)(v143 + 520);
          v145 = *(_QWORD*)(v143 + 512);
          if (((unsigned int)v142 >> 5) + 1 >
                  (unsigned __int64)((v144 - v145) >> 2) ||
              ((*(_DWORD*)(v145 + 4LL * ((unsigned int)v142 >> 5)) >> v142) &
               1) == 0) {
            if ((_DWORD)v139 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
              LODWORD(v139) = v139 | 0x10000;
            }
            else {
              LODWORD(v139) = v139 | 0x20000;
            }
          }
        }
        else {
          LODWORD(v139) = 0;
        }
      }
      v146 = *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8);
      v147 = *v7;
      v148 = *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8);
      if ((_DWORD)v15 == v146) {
        v149 = 0x10000;
      }
      else {
        v149 = 0x20000;
      }
      v150 = v15 | v149;
      if (v138 >= (unsigned int)v139) {
        result = (unsigned __int64)(v6 + 1);
        do {
          v9 = (int*)result;
          if (result >= (unsigned __int64)a2) {
            break;
          }
          if (v24 ||
              (v166 = *(_QWORD*)(v147 + 64),
               (v167 = *(_QWORD*)(v166 + 8LL * (unsigned int)v15)) == 0)) {
            v173 = 0;
          }
          else {
            v168 = *(_QWORD*)(v166 + 8 * v148);
            if (v168 != 0) {
              LODWORD(v168) = *(_WORD*)(v168 + 16) & 0xFFF;
            }
            v169 = *(_QWORD*)(v167 + 24);
            v170 = *(_QWORD*)(v169 + 520);
            v171 = *(_QWORD*)(v169 + 512);
            if (((unsigned int)v168 >> 5) + 1 >
                    (unsigned __int64)((v170 - v171) >> 2) ||
                (v172 =
                     *(_DWORD*)(v171 + 4LL * ((unsigned int)v168 >> 5)) >> v168,
                 v173 = *v6 & 0xFFF, (v172 & 1) == 0)) {
              v173 = v150;
            }
          }
          v165 = *v9 & 0xFFF;
          if ((*v9 & 0xFFF) != 0) {
            v174 = *(_QWORD*)(v147 + 64);
            v175 = *(_QWORD*)(v174 + 8 * v165);
            if (v175 != 0) {
              v176 = *(_QWORD*)(v174 + 8 * v148);
              if (v176 != 0) {
                LODWORD(v176) = *(_WORD*)(v176 + 16) & 0xFFF;
              }
              v177 = *(_QWORD*)(v175 + 24);
              v178 = *(_QWORD*)(v177 + 520);
              v179 = *(_QWORD*)(v177 + 512);
              if (((unsigned int)v176 >> 5) + 1 >
                      (unsigned __int64)((v178 - v179) >> 2) ||
                  ((*(_DWORD*)(v179 + 4LL * ((unsigned int)v176 >> 5)) >>
                    v176) &
                   1) == 0) {
                if ((*v9 & 0xFFF) == v146) {
                  LODWORD(v165) = v146 | 0x10000;
                }
                else {
                  LODWORD(v165) = *v9 & 0xFFF | 0x20000;
                }
              }
            }
            else {
              LODWORD(v165) = 0;
            }
          }
          result = (unsigned __int64)(v9 + 1);
        } while (v173 >= (unsigned int)v165);
      }
      else {
        v9 = v6;
        do {
          if (v24 ||
              (v152 = *(_QWORD*)(v147 + 64),
               (v153 = *(_QWORD*)(v152 + 8LL * (unsigned int)v15)) == 0)) {
            v158 = 0;
          }
          else {
            v154 = *(_QWORD*)(v152 + 8 * v148);
            if (v154 != 0) {
              LODWORD(v154) = *(_WORD*)(v154 + 16) & 0xFFF;
            }
            v155 = *(_QWORD*)(v153 + 24);
            v156 = *(_QWORD*)(v155 + 520);
            result = *(_QWORD*)(v155 + 512);
            if (((unsigned int)v154 >> 5) + 1 >
                    (unsigned __int64)((__int64)(v156 - result) >> 2) ||
                (v157 = *(_DWORD*)(result + 4LL * ((unsigned int)v154 >> 5)) >>
                        v154,
                 v158 = *v6 & 0xFFF, (v157 & 1) == 0)) {
              v158 = v150;
            }
          }
          v159 = v9[1];
          ++v9;
          v151 = v159 & 0xFFF;
          if ((v159 & 0xFFF) != 0) {
            result = *(_QWORD*)(v147 + 64);
            v160 = *(_QWORD*)(result + 8 * v151);
            if (v160 != 0) {
              v161 = *(_QWORD*)(result + 8 * v148);
              if (v161 != 0) {
                LODWORD(v161) = *(_WORD*)(v161 + 16) & 0xFFF;
              }
              v162 = *(_QWORD*)(v160 + 24);
              v163 = *(_QWORD*)(v162 + 520);
              v164 = *(_QWORD*)(v162 + 512);
              if (((unsigned int)v161 >> 5) + 1 >
                      (unsigned __int64)((v163 - v164) >> 2) ||
                  ((result =
                        (unsigned int)(*(_DWORD*)(v164 +
                                                  4LL * ((unsigned int)v161 >>
                                                         5)) >>
                                       v161)) &
                   1) == 0) {
                result = (unsigned int)v151 | 0x20000;
                if ((_DWORD)v151 == v146) {
                  LODWORD(v151) = v146 | 0x10000;
                }
                else {
                  LODWORD(v151) = v151 | 0x20000;
                }
              }
            }
            else {
              LODWORD(v151) = 0;
            }
          }
        } while (v158 >= (unsigned int)v151);
      }
      v180 = a2;
      if (v9 < a2) {
        if ((_DWORD)v15 == v146) {
          v181 = 0x10000;
        }
        else {
          v181 = 0x20000;
        }
        v182 = v15 | v181;
        v180 = a2;
        do {
          if (v24 ||
              (v183 = *(_QWORD*)(v147 + 64),
               (v184 = *(_QWORD*)(v183 + 8LL * (unsigned int)v15)) == 0)) {
            v190 = 0;
          }
          else {
            v185 = *(_QWORD*)(v183 + 8 * v148);
            if (v185 != 0) {
              LODWORD(v185) = *(_WORD*)(v185 + 16) & 0xFFF;
            }
            v186 = *(_QWORD*)(v184 + 24);
            v187 = *(_QWORD*)(v186 + 520);
            v188 = *(_QWORD*)(v186 + 512);
            if (((unsigned int)v185 >> 5) + 1 >
                    (unsigned __int64)((v187 - v188) >> 2) ||
                (v189 =
                     *(_DWORD*)(v188 + 4LL * ((unsigned int)v185 >> 5)) >> v185,
                 v190 = *v6 & 0xFFF, (v189 & 1) == 0)) {
              v190 = v182;
            }
          }
          v191 = *--v180;
          result = v191 & 0xFFF;
          if ((v191 & 0xFFF) != 0) {
            v192 = *(_QWORD*)(v147 + 64);
            v193 = *(_QWORD*)(v192 + 8 * result);
            if (v193 != 0) {
              v194 = *(_QWORD*)(v192 + 8 * v148);
              if (v194 != 0) {
                LODWORD(v194) = *(_WORD*)(v194 + 16) & 0xFFF;
              }
              v195 = *(_QWORD*)(v193 + 24);
              v196 = *(_QWORD*)(v195 + 520);
              v197 = *(_QWORD*)(v195 + 512);
              if (((unsigned int)v194 >> 5) + 1 >
                      (unsigned __int64)((v196 - v197) >> 2) ||
                  ((*(_DWORD*)(v197 + 4LL * ((unsigned int)v194 >> 5)) >>
                    v194) &
                   1) == 0) {
                if ((_DWORD)result == v146) {
                  result = v146 | 0x10000u;
                }
                else {
                  result = (unsigned int)result | 0x20000;
                }
              }
            }
            else {
              result = 0;
            }
          }
        } while (v190 < (unsigned int)result);
      }
      if (v9 < v180) {
        v198 = *v9;
        LODWORD(result) = *v180;
        do {
          *v9 = result;
          *v180 = v198;
          v199 = *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8);
          v200 = *v7;
          v201 = *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8);
          if ((_DWORD)v15 == v199) {
            v202 = 0x10000;
          }
          else {
            v202 = 0x20000;
          }
          v203 = v15 | v202;
          do {
            if (v24) {
              LODWORD(v205) = 0;
            }
            else {
              v206 = *(_QWORD*)(v200 + 64);
              v205 = *(_QWORD*)(v206 + 8LL * (unsigned int)v15);
              if (v205 != 0) {
                v207 = *(_QWORD*)(v206 + 8 * v201);
                if (v207 != 0) {
                  LODWORD(v207) = *(_WORD*)(v207 + 16) & 0xFFF;
                }
                v208 = *(_QWORD*)(v205 + 24);
                v209 = *(_QWORD*)(v208 + 520);
                v210 = *(_QWORD*)(v208 + 512);
                if (((unsigned int)v207 >> 5) + 1 >
                        (unsigned __int64)((v209 - v210) >> 2) ||
                    (LODWORD(v205) = v15,
                     ((*(_DWORD*)(v210 + 4LL * ((unsigned int)v207 >> 5)) >>
                       v207) &
                      1) == 0)) {
                  LODWORD(v205) = v203;
                }
              }
            }
            v211 = v9[1];
            ++v9;
            v198 = v211;
            v204 = v211 & 0xFFF;
            if ((v211 & 0xFFF) != 0) {
              v212 = *(_QWORD*)(v200 + 64);
              v213 = *(_QWORD*)(v212 + 8 * v204);
              if (v213 != 0) {
                v214 = *(_QWORD*)(v212 + 8 * v201);
                if (v214 != 0) {
                  LODWORD(v214) = *(_WORD*)(v214 + 16) & 0xFFF;
                }
                v215 = *(_QWORD*)(v213 + 24);
                v216 = *(_QWORD*)(v215 + 520);
                v217 = *(_QWORD*)(v215 + 512);
                if (((unsigned int)v214 >> 5) + 1 >
                        (unsigned __int64)((v216 - v217) >> 2) ||
                    ((*(_DWORD*)(v217 + 4LL * ((unsigned int)v214 >> 5)) >>
                      v214) &
                     1) == 0) {
                  if ((_DWORD)v204 == v199) {
                    LODWORD(v204) = v199 | 0x10000;
                  }
                  else {
                    LODWORD(v204) = v204 | 0x20000;
                  }
                }
              }
              else {
                LODWORD(v204) = 0;
              }
            }
          } while ((unsigned int)v205 >= (unsigned int)v204);
          if ((_DWORD)v15 == v199) {
            v218 = 0x10000;
          }
          else {
            v218 = 0x20000;
          }
          v219 = v15 | v218;
          do {
            if (v24) {
              LODWORD(v221) = 0;
            }
            else {
              v222 = *(_QWORD*)(v200 + 64);
              v221 = *(_QWORD*)(v222 + 8LL * (unsigned int)v15);
              if (v221 != 0) {
                v223 = *(_QWORD*)(v222 + 8 * v201);
                if (v223 != 0) {
                  LODWORD(v223) = *(_WORD*)(v223 + 16) & 0xFFF;
                }
                v224 = *(_QWORD*)(v221 + 24);
                v225 = *(_QWORD*)(v224 + 520);
                v226 = *(_QWORD*)(v224 + 512);
                if (((unsigned int)v223 >> 5) + 1 >
                        (unsigned __int64)((v225 - v226) >> 2) ||
                    (LODWORD(v221) = v15,
                     ((*(_DWORD*)(v226 + 4LL * ((unsigned int)v223 >> 5)) >>
                       v223) &
                      1) == 0)) {
                  LODWORD(v221) = v219;
                }
              }
            }
            v227 = *--v180;
            result = v227;
            v220 = v227 & 0xFFF;
            if ((v227 & 0xFFF) != 0) {
              v228 = *(_QWORD*)(v200 + 64);
              v229 = *(_QWORD*)(v228 + 8 * v220);
              if (v229 != 0) {
                v230 = *(_QWORD*)(v228 + 8 * v201);
                if (v230 != 0) {
                  LODWORD(v230) = *(_WORD*)(v230 + 16) & 0xFFF;
                }
                v231 = *(_QWORD*)(v229 + 24);
                v232 = *(_QWORD*)(v231 + 520);
                v233 = *(_QWORD*)(v231 + 512);
                if (((unsigned int)v230 >> 5) + 1 >
                        (unsigned __int64)((v232 - v233) >> 2) ||
                    ((*(_DWORD*)(v233 + 4LL * ((unsigned int)v230 >> 5)) >>
                      v230) &
                     1) == 0) {
                  if ((_DWORD)v220 == v199) {
                    LODWORD(v220) = v199 | 0x10000;
                  }
                  else {
                    LODWORD(v220) = v220 | 0x20000;
                  }
                }
              }
              else {
                LODWORD(v220) = 0;
              }
            }
          } while ((unsigned int)v221 < (unsigned int)v220);
        } while (v9 < v180);
      }
      v234 = v9 - 1;
      if (v6 != v9 - 1) {
        *v6 = *v234;
      }
      a4 = 0;
      *v234 = v13;
    }
  }
  result = game_855190_alt1(v9, v9 + 1, v9 + 2);
  v235 = *(a2 - 1);
  v236 = v235 & 0xFFF;
  if ((v235 & 0xFFF) != 0) {
    v237 = *(_QWORD*)(*v7 + 64);
    v238 = *(_QWORD*)(v237 + 8 * v236);
    if (v238 != 0) {
      v239 = *(_QWORD*)(v238 + 24);
      v240 = *(_QWORD*)(v237 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
      if (v240 != 0) {
        LODWORD(v240) = *(_WORD*)(v240 + 16) & 0xFFF;
      }
      v241 = *(_QWORD*)(v239 + 520);
      v242 = *(_QWORD*)(v239 + 512);
      if (((unsigned int)v240 >> 5) + 1 >
              (unsigned __int64)((v241 - v242) >> 2) ||
          ((*(_DWORD*)(v242 + 4LL * ((unsigned int)v240 >> 5)) >> v240) & 1) ==
              0) {
        if ((_DWORD)v236 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
          LODWORD(v236) = v236 | 0x10000;
        }
        else {
          LODWORD(v236) = v236 | 0x20000;
        }
      }
    }
    else {
      LODWORD(v236) = 0;
    }
  }
  v453 = v9[2];
  v454 = v453 & 0xFFF;
  if ((v453 & 0xFFF) == 0) {
    goto LABEL_637;
  }
  v455 = *(_QWORD*)(*v7 + 64);
  v456 = *(_QWORD*)(v455 + 8 * v454);
  if (v456 == 0) {
    LODWORD(v454) = 0;
    goto LABEL_637;
  }
  v457 = *(_QWORD*)(v456 + 24);
  v458 = *(_QWORD*)(v455 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
  if (v458 != 0) {
    LODWORD(v458) = *(_WORD*)(v458 + 16) & 0xFFF;
  }
  v459 = *(_QWORD*)(v457 + 520);
  v460 = *(_QWORD*)(v457 + 512);
  if (((unsigned int)v458 >> 5) + 1 <= (unsigned __int64)((v459 - v460) >> 2) &&
      ((*(_DWORD*)(v460 + 4LL * ((unsigned int)v458 >> 5)) >> v458) & 1) != 0) {
  LABEL_637:
    if ((unsigned int)v236 >= (unsigned int)v454) {
      return result;
    }
    goto LABEL_638;
  }
  if ((_DWORD)v454 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
    if ((unsigned int)v236 >= ((unsigned int)v454 | 0x10000)) {
      return result;
    }
  LABEL_638:
    v9[2] = v235;
    *(a2 - 1) = v453;
    v461 = v9[2];
    v462 = v461 & 0xFFF;
    if ((v461 & 0xFFF) != 0) {
      v463 = *(_QWORD*)(*v7 + 64);
      v464 = *(_QWORD*)(v463 + 8 * v462);
      if (v464 != 0) {
        v465 = *(_QWORD*)(v464 + 24);
        v466 =
            *(_QWORD*)(v463 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
        if (v466 != 0) {
          LODWORD(v466) = *(_WORD*)(v466 + 16) & 0xFFF;
        }
        v467 = *(_QWORD*)(v465 + 520);
        v464 = *(_QWORD*)(v465 + 512);
        if (((unsigned int)v466 >> 5) + 1 >
                (unsigned __int64)((v467 - v464) >> 2) ||
            (v468 = *(_DWORD*)(v464 + 4LL * ((unsigned int)v466 >> 5)) >> v466,
             LODWORD(v464) = v9[2] & 0xFFF, (v468 & 1) == 0)) {
          if ((_DWORD)v462 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
            LODWORD(v464) = v462 | 0x10000;
          }
          else {
            LODWORD(v464) = v462 | 0x20000;
          }
        }
      }
    }
    else {
      LODWORD(v464) = 0;
    }
    v477 = v9[1];
    v478 = v477 & 0xFFF;
    if ((v477 & 0xFFF) != 0) {
      v479 = *(_QWORD*)(*v7 + 64);
      v480 = *(_QWORD*)(v479 + 8 * v478);
      if (v480 != 0) {
        v481 = *(_QWORD*)(v480 + 24);
        v482 =
            *(_QWORD*)(v479 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
        if (v482 != 0) {
          LODWORD(v482) = *(_WORD*)(v482 + 16) & 0xFFF;
        }
        v483 = *(_QWORD*)(v481 + 520);
        v484 = *(_QWORD*)(v481 + 512);
        if (((unsigned int)v482 >> 5) + 1 >
                (unsigned __int64)((v483 - v484) >> 2) ||
            ((*(_DWORD*)(v484 + 4LL * ((unsigned int)v482 >> 5)) >> v482) &
             1) == 0) {
          if ((_DWORD)v478 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
            LODWORD(v478) = v478 | 0x10000;
          }
          else {
            LODWORD(v478) = v478 | 0x20000;
          }
        }
      }
      else {
        LODWORD(v478) = 0;
      }
    }
    if ((unsigned int)v464 < (unsigned int)v478) {
      v9[1] = v461;
      v9[2] = v477;
      if ((v461 & 0xFFF) != 0) {
        v485 = *(_QWORD*)(*v7 + 64);
        v486 = *(_QWORD*)(v485 + 8LL * (v461 & 0xFFF));
        if (v486 != 0) {
          v487 = *(_QWORD*)(v486 + 24);
          v488 = *(_QWORD*)(v485 +
                            8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
          if (v488 != 0) {
            LODWORD(v488) = *(_WORD*)(v488 + 16) & 0xFFF;
          }
          v489 = *(_QWORD*)(v487 + 520);
          v490 = *(_QWORD*)(v487 + 512);
          if (((unsigned int)v488 >> 5) + 1 >
                  (unsigned __int64)((v489 - v490) >> 2) ||
              ((*(_DWORD*)(v490 + 4LL * ((unsigned int)v488 >> 5)) >> v488) &
               1) == 0) {
            if ((_DWORD)v462 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
              LODWORD(v462) = v462 | 0x10000;
            }
            else {
              LODWORD(v462) = v462 | 0x20000;
            }
          }
        }
        else {
          LODWORD(v462) = 0;
        }
      }
      v491 = *v9;
      v492 = *v9 & 0xFFFLL;
      if ((*v9 & 0xFFF) != 0) {
        v493 = *(_QWORD*)(*v7 + 64);
        v494 = *(_QWORD*)(v493 + 8 * v492);
        if (v494 != 0) {
          v495 = *(_QWORD*)(v494 + 24);
          v496 = *(_QWORD*)(v493 +
                            8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v8));
          if (v496 != 0) {
            LODWORD(v496) = *(_WORD*)(v496 + 16) & 0xFFF;
          }
          v497 = *(_QWORD*)(v495 + 520);
          v498 = *(_QWORD*)(v495 + 512);
          if (((unsigned int)v496 >> 5) + 1 >
                  (unsigned __int64)((v497 - v498) >> 2) ||
              ((*(_DWORD*)(v498 + 4LL * ((unsigned int)v496 >> 5)) >> v496) &
               1) == 0) {
            if ((_DWORD)v492 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v8)) {
              LODWORD(v492) = v492 | 0x10000;
            }
            else {
              LODWORD(v492) = v492 | 0x20000;
            }
          }
        }
        else {
          LODWORD(v492) = 0;
        }
      }
      if ((unsigned int)v462 < (unsigned int)v492) {
        *v9 = v461;
        v9[1] = v491;
      }
    }
  }
  else if ((unsigned int)v236 < ((unsigned int)v454 | 0x20000)) {
    goto LABEL_638;
  }
  return result;
}

int* game_855190(int* result, int* a2, int* a3)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
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
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;

  v3 = *a2;
  v4 = *a2 & 0xFFFLL;
  if ((*a2 & 0xFFF) != 0 && (v5 = *(_QWORD*)(GameData_21c99b0 + 64),
                             (v6 = *(_QWORD*)(v5 + 8 * v4)) != 0)) {
    v7 = *(_QWORD*)(v6 + 24);
    v8 = *(_QWORD*)(v5 + 8LL * GameData_21d989c);
    if (v8 != 0) {
      LODWORD(v8) = *(_WORD*)(v8 + 16) & 0xFFF;
    }
    v9 = *(_QWORD*)(v7 + 520);
    v10 = *(_QWORD*)(v7 + 512);
    if (((unsigned int)v8 >> 5) + 1 > (unsigned __int64)((v9 - v10) >> 2) ||
        (v11 = *(_DWORD*)(v10 + 4LL * ((unsigned int)v8 >> 5)) >> v8,
         v12 = *a2 & 0xFFF, (v11 & 1) == 0)) {
      if ((_DWORD)v4 == GameData_21d98ec) {
        v12 = v4 | 0x10000;
      }
      else {
        v12 = v4 | 0x20000;
      }
    }
  }
  else {
    v12 = 0;
  }
  v13 = *result;
  v14 = *result & 0xFFFLL;
  if ((*result & 0xFFF) != 0) {
    v15 = *(_QWORD*)(GameData_21c99b0 + 64);
    v16 = *(_QWORD*)(v15 + 8 * v14);
    if (v16 != 0) {
      v17 = *(_QWORD*)(v16 + 24);
      v18 = *(_QWORD*)(v15 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                           game_g_shared_system_skills_ptr));
      if (v18 != 0) {
        LODWORD(v18) = *(_WORD*)(v18 + 16) & 0xFFF;
      }
      v19 = *(_QWORD*)(v17 + 520);
      v16 = *(_QWORD*)(v17 + 512);
      if (((unsigned int)v18 >> 5) + 1 > (unsigned __int64)((v19 - v16) >> 2) ||
          (v20 = *(_DWORD*)(v16 + 4LL * ((unsigned int)v18 >> 5)) >> v18,
           LODWORD(v16) = *result & 0xFFF, (v20 & 1) == 0)) {
        if ((_DWORD)v14 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) +
                                      game_g_shared_system_skills_ptr)) {
          LODWORD(v16) = v14 | 0x10000;
        }
        else {
          LODWORD(v16) = v14 | 0x20000;
        }
      }
    }
  }
  else {
    LODWORD(v16) = 0;
  }
  v21 = *a3;
  v22 = *a3 & 0xFFFLL;
  if ((*a3 & 0xFFF) == 0) {
    goto LABEL_31;
  }
  v23 = *(_QWORD*)(GameData_21c99b0 + 64);
  v24 = *(_QWORD*)(v23 + 8 * v22);
  if (v24 == 0) {
    LODWORD(v22) = 0;
    goto LABEL_31;
  }
  v25 = *(_QWORD*)(v24 + 24);
  v26 = *(_QWORD*)(v23 + 8LL * GameData_21d989c);
  if (v26 != 0) {
    LODWORD(v26) = *(_WORD*)(v26 + 16) & 0xFFF;
  }
  v27 = *(_QWORD*)(v25 + 520);
  v28 = *(_QWORD*)(v25 + 512);
  if (((unsigned int)v26 >> 5) + 1 <= (unsigned __int64)((v27 - v28) >> 2) &&
      ((*(_DWORD*)(v28 + 4LL * ((unsigned int)v26 >> 5)) >> v26) & 1) != 0) {
  LABEL_31:
    if ((_DWORD)v4 == 0) {
      goto LABEL_51;
    }
    goto LABEL_32;
  }
  if ((_DWORD)v22 == GameData_21d98ec) {
    LODWORD(v22) = v22 | 0x10000;
    if ((_DWORD)v4 == 0) {
      goto LABEL_51;
    }
  }
  else {
    LODWORD(v22) = v22 | 0x20000;
    if ((_DWORD)v4 == 0) {
      goto LABEL_51;
    }
  }
LABEL_32:
  v29 = *(_QWORD*)(GameData_21c99b0 + 64);
  v30 = *(_QWORD*)(v29 + 8LL * (unsigned int)v4);
  if (v30 == 0) {
    LODWORD(v4) = 0;
    if (v12 < (unsigned int)v16) {
      goto LABEL_52;
    }
    goto LABEL_41;
  }
  v31 = *(_QWORD*)(v30 + 24);
  v32 = *(_QWORD*)(v29 + 8LL * GameData_21d989c);
  if (v32 != 0) {
    LODWORD(v32) = *(_WORD*)(v32 + 16) & 0xFFF;
  }
  v33 = *(_QWORD*)(v31 + 520);
  v34 = *(_QWORD*)(v31 + 512);
  if (((unsigned int)v32 >> 5) + 1 <= (unsigned __int64)((v33 - v34) >> 2) &&
      ((*(_DWORD*)(v34 + 4LL * ((unsigned int)v32 >> 5)) >> v32) & 1) != 0) {
  LABEL_51:
    if (v12 < (unsigned int)v16) {
      goto LABEL_52;
    }
  LABEL_41:
    if ((unsigned int)v22 >= (unsigned int)v4) {
      return result;
    }
    *a2 = v21;
    *a3 = v3;
    v35 = *a2 & 0xFFFLL;
    if ((*a2 & 0xFFF) != 0) {
      v36 = *(_QWORD*)(GameData_21c99b0 + 64);
      v37 = *(_QWORD*)(v36 + 8 * v35);
      if (v37 != 0) {
        v38 = *(_QWORD*)(v37 + 24);
        v39 = *(_QWORD*)(v36 + 8LL * GameData_21d989c);
        if (v39 != 0) {
          LODWORD(v39) = *(_WORD*)(v39 + 16) & 0xFFF;
        }
        v40 = *(_QWORD*)(v38 + 520);
        v41 = *(_QWORD*)(v38 + 512);
        if (((unsigned int)v39 >> 5) + 1 >
                (unsigned __int64)((v40 - v41) >> 2) ||
            ((*(_DWORD*)(v41 + 4LL * ((unsigned int)v39 >> 5)) >> v39) & 1) ==
                0) {
          if ((_DWORD)v35 == GameData_21d98ec) {
            LODWORD(v35) = v35 | 0x10000;
          }
          else {
            LODWORD(v35) = v35 | 0x20000;
          }
        }
      }
      else {
        LODWORD(v35) = 0;
      }
    }
    v55 = *result;
    v56 = *result & 0xFFFLL;
    if ((*result & 0xFFF) != 0) {
      v57 = *(_QWORD*)(GameData_21c99b0 + 64);
      v58 = *(_QWORD*)(v57 + 8 * v56);
      if (v58 != 0) {
        v59 = *(_QWORD*)(v58 + 24);
        v60 = *(_QWORD*)(v57 + 8LL * GameData_21d989c);
        if (v60 != 0) {
          LODWORD(v60) = *(_WORD*)(v60 + 16) & 0xFFF;
        }
        v61 = *(_QWORD*)(v59 + 520);
        v62 = *(_QWORD*)(v59 + 512);
        if (((unsigned int)v60 >> 5) + 1 >
                (unsigned __int64)((v61 - v62) >> 2) ||
            ((*(_DWORD*)(v62 + 4LL * ((unsigned int)v60 >> 5)) >> v60) & 1) ==
                0) {
          if ((_DWORD)v56 == GameData_21d98ec) {
            if ((unsigned int)v35 >= ((unsigned int)v56 | 0x10000)) {
              return result;
            }
          }
          else if ((unsigned int)v35 >= ((unsigned int)v56 | 0x20000)) {
            return result;
          }
          goto LABEL_88;
        }
      }
      else {
        LODWORD(v56) = 0;
      }
    }
    if ((unsigned int)v35 >= (unsigned int)v56) {
      return result;
    }
  LABEL_88:
    *result = *a2;
    *a2 = v55;
    return result;
  }
  if ((_DWORD)v4 == GameData_21d98ec) {
    LODWORD(v4) = v4 | 0x10000;
    if (v12 < (unsigned int)v16) {
      goto LABEL_52;
    }
    goto LABEL_41;
  }
  LODWORD(v4) = v4 | 0x20000;
  if (v12 >= (unsigned int)v16) {
    goto LABEL_41;
  }
LABEL_52:
  if ((unsigned int)v22 < (unsigned int)v4) {
    *result = v21;
    goto LABEL_94;
  }
  *result = v3;
  *a2 = v13;
  v42 = *a3 & 0xFFFLL;
  if ((*a3 & 0xFFF) != 0) {
    v43 = *(_QWORD*)(GameData_21c99b0 + 64);
    v44 = *(_QWORD*)(v43 + 8 * v42);
    if (v44 != 0) {
      v45 = *(_QWORD*)(v44 + 24);
      v46 = *(_QWORD*)(v43 + 8LL * GameData_21d989c);
      if (v46 != 0) {
        LODWORD(v46) = *(_WORD*)(v46 + 16) & 0xFFF;
      }
      v47 = *(_QWORD*)(v45 + 520);
      v48 = *(_QWORD*)(v45 + 512);
      if (((unsigned int)v46 >> 5) + 1 > (unsigned __int64)((v47 - v48) >> 2) ||
          ((*(_DWORD*)(v48 + 4LL * ((unsigned int)v46 >> 5)) >> v46) & 1) ==
              0) {
        if ((_DWORD)v42 == GameData_21d98ec) {
          LODWORD(v42) = v42 | 0x10000;
          if ((_DWORD)v14 == 0) {
            goto LABEL_92;
          }
        }
        else {
          LODWORD(v42) = v42 | 0x20000;
          if ((_DWORD)v14 == 0) {
            goto LABEL_92;
          }
        }
      LABEL_68:
        v49 = *(_QWORD*)(GameData_21c99b0 + 64);
        v50 = *(_QWORD*)(v49 + 8LL * (unsigned int)v14);
        if (v50 != 0) {
          v51 = *(_QWORD*)(v50 + 24);
          v52 = *(_QWORD*)(v49 + 8LL * GameData_21d989c);
          if (v52 != 0) {
            LODWORD(v52) = *(_WORD*)(v52 + 16) & 0xFFF;
          }
          v53 = *(_QWORD*)(v51 + 520);
          v54 = *(_QWORD*)(v51 + 512);
          if (((unsigned int)v52 >> 5) + 1 >
                  (unsigned __int64)((v53 - v54) >> 2) ||
              ((*(_DWORD*)(v54 + 4LL * ((unsigned int)v52 >> 5)) >> v52) & 1) ==
                  0) {
            if ((_DWORD)v14 == GameData_21d98ec) {
              LODWORD(v14) = v14 | 0x10000;
            }
            else {
              LODWORD(v14) = v14 | 0x20000;
            }
          }
        }
        else {
          LODWORD(v14) = 0;
        }
        goto LABEL_92;
      }
    }
    else {
      LODWORD(v42) = 0;
    }
  }
  if ((_DWORD)v14 != 0) {
    goto LABEL_68;
  }
LABEL_92:
  if ((unsigned int)v42 >= (unsigned int)v14) {
    return result;
  }
  *a2 = *a3;
LABEL_94:
  *a3 = v13;
  return result;
}

bool game_855ec0(int* a1, int* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  int* v14;
  __int64 v15;
  int v16;
  __int64* v17;
  __int64 v18;
  int* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  unsigned int v29;
  int v30;
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
  int v47;
  unsigned int v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int* v65;
  __int64 v66;
  __int64 v67;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  int v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  int v92;
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
  __int64 v104;
  __int64 v105;
  __int64 v106;
  int v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      game_855190(a1, a1 + 1, a2 - 1);
      return true;
    }
    if (v2 != 4) {
      if (v2 == 5) {
        GameRoutine_855640_alt1(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
        return true;
      }
    LABEL_17:
      v11 = a1 + 2;
      game_855190(a1, a1 + 1, a1 + 2);
      v14 = a1 + 3;
      if (a1 + 3 == a2) {
        return true;
      }
      v15 = 12;
      v16 = 0;
      v17 = GameData_212c880[0];
      v18 = game_g_shared_system_skills_ptr;
      while (1) {
        v20 = *v14;
        v21 = *v14 & 0xFFFLL;
        if ((*v14 & 0xFFF) != 0 && (v22 = *(_QWORD*)(*v17 + 64),
                                    (v23 = *(_QWORD*)(v22 + 8 * v21)) != 0)) {
          v24 = *(_QWORD*)(v22 +
                           8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v18));
          if (v24 != 0) {
            LODWORD(v24) = *(_WORD*)(v24 + 16) & 0xFFF;
          }
          v25 = *(_QWORD*)(v23 + 24);
          v26 = *(_QWORD*)(v25 + 520);
          v27 = *(_QWORD*)(v25 + 512);
          if (((unsigned int)v24 >> 5) + 1 >
                  (unsigned __int64)((v26 - v27) >> 2) ||
              (v28 = *(_DWORD*)(v27 + 4LL * ((unsigned int)v24 >> 5)) >> v24,
               v29 = *v14 & 0xFFF, (v28 & 1) == 0)) {
            if ((_DWORD)v21 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v18)) {
              v29 = v21 | 0x10000;
            }
            else {
              v29 = v21 | 0x20000;
            }
          }
        }
        else {
          v29 = 0;
        }
        v30 = *v11;
        v31 = *v11 & 0xFFFLL;
        if ((*v11 & 0xFFF) == 0) {
          goto LABEL_41;
        }
        v32 = *(_QWORD*)(*v17 + 64);
        v33 = *(_QWORD*)(v32 + 8 * v31);
        if (v33 == 0) {
          break;
        }
        v34 =
            *(_QWORD*)(v32 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v18));
        if (v34 != 0) {
          LODWORD(v34) = *(_WORD*)(v34 + 16) & 0xFFF;
        }
        v35 = *(_QWORD*)(v33 + 24);
        v36 = *(_QWORD*)(v35 + 520);
        v37 = *(_QWORD*)(v35 + 512);
        if (((unsigned int)v34 >> 5) + 1 <=
                (unsigned __int64)((v36 - v37) >> 2) &&
            ((*(_DWORD*)(v37 + 4LL * ((unsigned int)v34 >> 5)) >> v34) & 1) !=
                0) {
          goto LABEL_41;
        }
        if ((_DWORD)v31 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v18)) {
          if (v29 >= ((unsigned int)v31 | 0x10000)) {
            goto LABEL_21;
          }
        }
        else if (v29 >= ((unsigned int)v31 | 0x20000)) {
          goto LABEL_21;
        }
      LABEL_42:
        v38 = v15;
        do {
          v40 = v38 - 4;
          *(int*)((char*)a1 + v38) = v30;
          if (v38 == 4) {
            v19 = a1;
            goto LABEL_20;
          }
          if ((_DWORD)v21 != 0 &&
              (v41 = *(_QWORD*)(*v17 + 64),
               (v42 = *(_QWORD*)(v41 + 8LL * (unsigned int)v21)) != 0)) {
            v43 = *(_QWORD*)(v41 +
                             8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) + v18));
            if (v43 != 0) {
              LODWORD(v43) = *(_WORD*)(v43 + 16) & 0xFFF;
            }
            v44 = *(_QWORD*)(v42 + 24);
            v45 = *(_QWORD*)(v44 + 520);
            v46 = *(_QWORD*)(v44 + 512);
            if (((unsigned int)v43 >> 5) + 1 >
                    (unsigned __int64)((v45 - v46) >> 2) ||
                (v47 = *(_DWORD*)(v46 + 4LL * ((unsigned int)v43 >> 5)) >> v43,
                 v48 = v21, (v47 & 1) == 0)) {
              if ((_DWORD)v21 ==
                  *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v18)) {
                v49 = 0x10000;
              }
              else {
                v49 = 0x20000;
              }
              v48 = v21 | v49;
            }
          }
          else {
            v48 = 0;
          }
          v30 = *(int*)((char*)a1 + v38 - 8);
          v39 = v30 & 0xFFF;
          if ((v30 & 0xFFF) != 0) {
            v50 = *(_QWORD*)(*v17 + 64);
            v51 = *(_QWORD*)(v50 + 8 * v39);
            if (v51 != 0) {
              v52 = *(_QWORD*)(v50 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                                   v18));
              if (v52 != 0) {
                LODWORD(v52) = *(_WORD*)(v52 + 16) & 0xFFF;
              }
              v53 = *(_QWORD*)(v51 + 24);
              v54 = *(_QWORD*)(v53 + 520);
              v55 = *(_QWORD*)(v53 + 512);
              if (((unsigned int)v52 >> 5) + 1 >
                      (unsigned __int64)((v54 - v55) >> 2) ||
                  ((*(_DWORD*)(v55 + 4LL * ((unsigned int)v52 >> 5)) >> v52) &
                   1) == 0) {
                if ((_DWORD)v39 ==
                    *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) + v18)) {
                  LODWORD(v39) = v39 | 0x10000;
                }
                else {
                  LODWORD(v39) = v39 | 0x20000;
                }
              }
            }
            else {
              LODWORD(v39) = 0;
            }
          }
          v38 = v40;
        } while (v48 < (unsigned int)v39);
        v19 = (int*)((char*)a1 + v40);
      LABEL_20:
        ++v16;
        *v19 = v20;
        if (v16 == 8) {
          return v14 + 1 == a2;
        }
      LABEL_21:
        v11 = v14++;
        v15 += 4;
        if (v14 == a2) {
          return true;
        }
      }
      LODWORD(v31) = 0;
    LABEL_41:
      if (v29 >= (unsigned int)v31) {
        goto LABEL_21;
      }
      goto LABEL_42;
    }
    game_855190(a1, a1 + 1, a1 + 2);
    v58 = *(a2 - 1);
    v59 = GameData_212c880[0];
    v60 = v58 & 0xFFF;
    if ((v58 & 0xFFF) != 0) {
      v61 = *(_QWORD*)(*GameData_212c880[0] + 64);
      v62 = *(_QWORD*)(v61 + 8 * v60);
      if (v62 != 0) {
        v63 = *(_QWORD*)(v62 + 24);
        v64 = *(_QWORD*)(v61 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                             game_g_shared_system_skills_ptr));
        v65 = a1;
        if (v64 != 0) {
          LODWORD(v64) = *(_WORD*)(v64 + 16) & 0xFFF;
        }
        v66 = *(_QWORD*)(v63 + 520);
        v67 = *(_QWORD*)(v63 + 512);
        if (((unsigned int)v64 >> 5) + 1 >
                (unsigned __int64)((v66 - v67) >> 2) ||
            ((*(_DWORD*)(v67 + 4LL * ((unsigned int)v64 >> 5)) >> v64) & 1) ==
                0) {
          if ((_DWORD)v60 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) +
                                        game_g_shared_system_skills_ptr)) {
            LODWORD(v60) = v60 | 0x10000;
          }
          else {
            LODWORD(v60) = v60 | 0x20000;
          }
        }
      }
      else {
        LODWORD(v60) = 0;
        v65 = a1;
      }
    }
    else {
      v65 = a1;
    }
    v77 = v65[2];
    v78 = v77 & 0xFFF;
    if ((v77 & 0xFFF) != 0) {
      v79 = *(_QWORD*)(*GameData_212c880[0] + 64);
      v80 = *(_QWORD*)(v79 + 8 * v78);
      if (v80 != 0) {
        v81 = *(_QWORD*)(v80 + 24);
        v82 = *(_QWORD*)(v79 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                             game_g_shared_system_skills_ptr));
        if (v82 != 0) {
          LODWORD(v82) = *(_WORD*)(v82 + 16) & 0xFFF;
        }
        v83 = *(_QWORD*)(v81 + 520);
        v84 = *(_QWORD*)(v81 + 512);
        if (((unsigned int)v82 >> 5) + 1 >
                (unsigned __int64)((v83 - v84) >> 2) ||
            ((*(_DWORD*)(v84 + 4LL * ((unsigned int)v82 >> 5)) >> v82) & 1) ==
                0) {
          if ((_DWORD)v78 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) +
                                        game_g_shared_system_skills_ptr)) {
            if ((unsigned int)v60 >= ((unsigned int)v78 | 0x10000)) {
              return true;
            }
          }
          else if ((unsigned int)v60 >= ((unsigned int)v78 | 0x20000)) {
            return true;
          }
          goto LABEL_109;
        }
      }
      else {
        LODWORD(v78) = 0;
      }
    }
    if ((unsigned int)v60 >= (unsigned int)v78) {
      return true;
    }
  LABEL_109:
    v65[2] = v58;
    *(a2 - 1) = v77;
    v85 = v65[2];
    v86 = v85 & 0xFFF;
    if ((v85 & 0xFFF) != 0) {
      v87 = *(_QWORD*)(*v59 + 64);
      v88 = *(_QWORD*)(v87 + 8 * v86);
      if (v88 != 0) {
        v89 = *(_QWORD*)(v88 + 24);
        v90 = *(_QWORD*)(v87 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                             game_g_shared_system_skills_ptr));
        if (v90 != 0) {
          LODWORD(v90) = *(_WORD*)(v90 + 16) & 0xFFF;
        }
        v91 = *(_QWORD*)(v89 + 520);
        v88 = *(_QWORD*)(v89 + 512);
        if (((unsigned int)v90 >> 5) + 1 >
                (unsigned __int64)((v91 - v88) >> 2) ||
            (v92 = *(_DWORD*)(v88 + 4LL * ((unsigned int)v90 >> 5)) >> v90,
             LODWORD(v88) = v65[2] & 0xFFF, (v92 & 1) == 0)) {
          if ((_DWORD)v86 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) +
                                        game_g_shared_system_skills_ptr)) {
            LODWORD(v88) = v86 | 0x10000;
          }
          else {
            LODWORD(v88) = v86 | 0x20000;
          }
        }
      }
    }
    else {
      LODWORD(v88) = 0;
    }
    v93 = v65[1];
    v94 = v93 & 0xFFF;
    if ((v93 & 0xFFF) != 0) {
      v95 = *(_QWORD*)(*v59 + 64);
      v96 = *(_QWORD*)(v95 + 8 * v94);
      if (v96 != 0) {
        v97 = *(_QWORD*)(v96 + 24);
        v98 = *(_QWORD*)(v95 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                             game_g_shared_system_skills_ptr));
        if (v98 != 0) {
          LODWORD(v98) = *(_WORD*)(v98 + 16) & 0xFFF;
        }
        v99 = *(_QWORD*)(v97 + 520);
        v100 = *(_QWORD*)(v97 + 512);
        if (((unsigned int)v98 >> 5) + 1 >
                (unsigned __int64)((v99 - v100) >> 2) ||
            ((*(_DWORD*)(v100 + 4LL * ((unsigned int)v98 >> 5)) >> v98) & 1) ==
                0) {
          if ((_DWORD)v94 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) +
                                        game_g_shared_system_skills_ptr)) {
            LODWORD(v94) = v94 | 0x10000;
          }
          else {
            LODWORD(v94) = v94 | 0x20000;
          }
        }
      }
      else {
        LODWORD(v94) = 0;
      }
    }
    if ((unsigned int)v88 < (unsigned int)v94) {
      v65[1] = v85;
      v65[2] = v93;
      if ((v85 & 0xFFF) != 0) {
        v101 = *(_QWORD*)(*v59 + 64);
        v102 = *(_QWORD*)(v101 + 8LL * (v85 & 0xFFF));
        if (v102 != 0) {
          v103 = *(_QWORD*)(v102 + 24);
          v104 =
              *(_QWORD*)(v101 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                              game_g_shared_system_skills_ptr));
          if (v104 != 0) {
            LODWORD(v104) = *(_WORD*)(v104 + 16) & 0xFFF;
          }
          v105 = *(_QWORD*)(v103 + 520);
          v106 = *(_QWORD*)(v103 + 512);
          if (((unsigned int)v104 >> 5) + 1 >
                  (unsigned __int64)((v105 - v106) >> 2) ||
              ((*(_DWORD*)(v106 + 4LL * ((unsigned int)v104 >> 5)) >> v104) &
               1) == 0) {
            if ((_DWORD)v86 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) +
                                          game_g_shared_system_skills_ptr)) {
              LODWORD(v86) = v86 | 0x10000;
            }
            else {
              LODWORD(v86) = v86 | 0x20000;
            }
          }
        }
        else {
          LODWORD(v86) = 0;
        }
      }
      v107 = *v65;
      v108 = *v65 & 0xFFFLL;
      if ((*v65 & 0xFFF) != 0) {
        v109 = *(_QWORD*)(*v59 + 64);
        v110 = *(_QWORD*)(v109 + 8 * v108);
        if (v110 != 0) {
          v111 = *(_QWORD*)(v110 + 24);
          v112 =
              *(_QWORD*)(v109 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                              game_g_shared_system_skills_ptr));
          if (v112 != 0) {
            LODWORD(v112) = *(_WORD*)(v112 + 16) & 0xFFF;
          }
          v113 = *(_QWORD*)(v111 + 520);
          v114 = *(_QWORD*)(v111 + 512);
          if (((unsigned int)v112 >> 5) + 1 >
                  (unsigned __int64)((v113 - v114) >> 2) ||
              ((*(_DWORD*)(v114 + 4LL * ((unsigned int)v112 >> 5)) >> v112) &
               1) == 0) {
            if ((_DWORD)v108 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) +
                                           game_g_shared_system_skills_ptr)) {
              LODWORD(v108) = v108 | 0x10000;
            }
            else {
              LODWORD(v108) = v108 | 0x20000;
            }
          }
        }
        else {
          LODWORD(v108) = 0;
        }
      }
      if ((unsigned int)v86 < (unsigned int)v108) {
        *v65 = v85;
        v65[1] = v107;
      }
    }
    return true;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 != 2) {
    goto LABEL_17;
  }
  v3 = *(a2 - 1);
  v4 = v3 & 0xFFF;
  if ((v3 & 0xFFF) != 0) {
    v5 = *(_QWORD*)(*GameData_212c880[0] + 64);
    v6 = *(_QWORD*)(v5 + 8 * v4);
    if (v6 != 0) {
      v7 = *(_QWORD*)(v6 + 24);
      v8 = *(_QWORD*)(v5 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                         game_g_shared_system_skills_ptr));
      if (v8 != 0) {
        LODWORD(v8) = *(_WORD*)(v8 + 16) & 0xFFF;
      }
      v9 = *(_QWORD*)(v7 + 520);
      v10 = *(_QWORD*)(v7 + 512);
      if (((unsigned int)v8 >> 5) + 1 > (unsigned __int64)((v9 - v10) >> 2) ||
          ((*(_DWORD*)(v10 + 4LL * ((unsigned int)v8 >> 5)) >> v8) & 1) == 0) {
        if ((_DWORD)v4 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) +
                                     game_g_shared_system_skills_ptr)) {
          LODWORD(v4) = v4 | 0x10000;
        }
        else {
          LODWORD(v4) = v4 | 0x20000;
        }
      }
    }
    else {
      LODWORD(v4) = 0;
    }
  }
  v69 = *a1;
  v70 = *a1 & 0xFFFLL;
  if ((*a1 & 0xFFF) != 0) {
    v71 = *(_QWORD*)(*GameData_212c880[0] + 64);
    v72 = *(_QWORD*)(v71 + 8 * v70);
    if (v72 != 0) {
      v73 = *(_QWORD*)(v72 + 24);
      v74 = *(_QWORD*)(v71 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                           game_g_shared_system_skills_ptr));
      if (v74 != 0) {
        LODWORD(v74) = *(_WORD*)(v74 + 16) & 0xFFF;
      }
      v75 = *(_QWORD*)(v73 + 520);
      v76 = *(_QWORD*)(v73 + 512);
      if (((unsigned int)v74 >> 5) + 1 > (unsigned __int64)((v75 - v76) >> 2) ||
          ((*(_DWORD*)(v76 + 4LL * ((unsigned int)v74 >> 5)) >> v74) & 1) ==
              0) {
        if ((_DWORD)v70 == *(_DWORD*)((char*)((_UNKNOWN*)0x1ECLL) +
                                      game_g_shared_system_skills_ptr)) {
          if ((unsigned int)v4 >= ((unsigned int)v70 | 0x10000)) {
            return true;
          }
        }
        else if ((unsigned int)v4 >= ((unsigned int)v70 | 0x20000)) {
          return true;
        }
        goto LABEL_94;
      }
    }
    else {
      LODWORD(v70) = 0;
    }
  }
  if ((unsigned int)v4 < (unsigned int)v70) {
  LABEL_94:
    *a1 = v3;
    *(a2 - 1) = v69;
  }
  return true;
}

bool game_857500(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  int v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v13 = *a1;
      v14 = a1[1];
      v15 = *(unsigned __int16*)(v14 + 16) |
            (*(unsigned __int8*)(v14 + 112) << 16);
      v16 = *(a2 - 1);
      v17 = *(unsigned __int16*)(v16 + 16) |
            (*(unsigned __int8*)(v16 + 112) << 16);
      if (v15 >= (*(unsigned __int16*)(*a1 + 16) |
                  (*(unsigned __int8*)(*a1 + 112) << 16))) {
        if (v17 < v15) {
          a1[1] = v16;
          *(a2 - 1) = v14;
          v25 = *a1;
          v24 = a1[1];
          if ((*(unsigned __int16*)(v24 + 16) |
               (*(unsigned __int8*)(v24 + 112) << 16)) <
              (unsigned int)(*(unsigned __int16*)(*a1 + 16) |
                             (*(unsigned __int8*)(*a1 + 112) << 16))) {
            *a1 = v24;
            a1[1] = v25;
          }
        }
      }
      else if (v17 >= v15) {
        *a1 = v14;
        a1[1] = v13;
        v26 = *(a2 - 1);
        if ((*(unsigned __int16*)(v26 + 16) |
             (*(unsigned __int8*)(v26 + 112) << 16)) <
            (unsigned int)(*(unsigned __int16*)(v13 + 16) |
                           (*(unsigned __int8*)(v13 + 112) << 16))) {
          a1[1] = v26;
          *(a2 - 1) = v13;
        }
      }
      else {
        *a1 = v16;
        *(a2 - 1) = v13;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 == 5) {
        GameRoutine_8573a0(a1, a1 + 1, a1 + 2, a1 + 3);
        v7 = *(a2 - 1);
        v8 = a1[3];
        if ((*(unsigned __int16*)(v7 + 16) |
             (*(unsigned __int8*)(v7 + 112) << 16)) <
            (unsigned int)(*(unsigned __int16*)(v8 + 16) |
                           (*(unsigned __int8*)(v8 + 112) << 16))) {
          a1[3] = v7;
          *(a2 - 1) = v8;
          v10 = a1[2];
          v9 = a1[3];
          if ((*(unsigned __int16*)(v9 + 16) |
               (*(unsigned __int8*)(v9 + 112) << 16)) <
              (unsigned int)(*(unsigned __int16*)(v10 + 16) |
                             (*(unsigned __int8*)(v10 + 112) << 16))) {
            a1[2] = v9;
            a1[3] = v10;
            v11 = a1[1];
            if ((*(unsigned __int16*)(v9 + 16) |
                 (*(unsigned __int8*)(v9 + 112) << 16)) <
                (unsigned int)(*(unsigned __int16*)(v11 + 16) |
                               (*(unsigned __int8*)(v11 + 112) << 16))) {
              a1[1] = v9;
              a1[2] = v11;
              v12 = *a1;
              if ((*(unsigned __int16*)(v9 + 16) |
                   (*(unsigned __int8*)(v9 + 112) << 16)) <
                  (unsigned int)(*(unsigned __int16*)(*a1 + 16) |
                                 (*(unsigned __int8*)(*a1 + 112) << 16))) {
                *a1 = v9;
                a1[1] = v12;
              }
            }
          }
        }
        return true;
      }
      goto LABEL_17;
    }
    GameRoutine_8573a0(a1, a1 + 1, a1 + 2, a2 - 1);
    return true;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(a2 - 1);
    v4 = *a1;
    if ((*(unsigned __int16*)(v3 + 16) |
         (*(unsigned __int8*)(v3 + 112) << 16)) <
        (unsigned int)(*(unsigned __int16*)(*a1 + 16) |
                       (*(unsigned __int8*)(*a1 + 112) << 16))) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_17:
  v18 = *a1;
  v19 = a1[1];
  v20 = a1 + 2;
  v21 = a1[2];
  v22 = *(unsigned __int16*)(v19 + 16) | (*(unsigned __int8*)(v19 + 112) << 16);
  v23 = *(unsigned __int16*)(v21 + 16) | (*(unsigned __int8*)(v21 + 112) << 16);
  if (v22 >= (*(unsigned __int16*)(*a1 + 16) |
              (*(unsigned __int8*)(*a1 + 112) << 16))) {
    if (v23 < v22) {
      a1[1] = v21;
      a1[2] = v19;
      if ((*(unsigned __int16*)(v21 + 16) |
           (*(unsigned __int8*)(v21 + 112) << 16)) <
          (unsigned int)(*(unsigned __int16*)(v18 + 16) |
                         (*(unsigned __int8*)(v18 + 112) << 16))) {
        *a1 = v21;
        a1[1] = v18;
      }
    }
  }
  else {
    if (v23 >= v22) {
      *a1 = v19;
      a1[1] = v18;
      if ((*(unsigned __int16*)(v21 + 16) |
           (*(unsigned __int8*)(v21 + 112) << 16)) >=
          (unsigned int)(*(unsigned __int16*)(v18 + 16) |
                         (*(unsigned __int8*)(v18 + 112) << 16))) {
        goto LABEL_32;
      }
      a1[1] = v21;
    }
    else {
      *a1 = v21;
    }
    a1[2] = v18;
  }
LABEL_32:
  v27 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v28 = 24;
  v29 = 0;
  while (1) {
    v31 = *v27;
    v32 = *v20;
    if ((*(unsigned __int16*)(*v27 + 16) |
         (*(unsigned __int8*)(*v27 + 112) << 16)) <
        (unsigned int)(*(unsigned __int16*)(v32 + 16) |
                       (*(unsigned __int8*)(v32 + 112) << 16))) {
      v33 = v28;
      do {
        v34 = v33 - 8;
        *(__int64*)((char*)a1 + v33) = v32;
        if (v33 == 8) {
          v30 = a1;
          goto LABEL_35;
        }
        v32 = *(__int64*)((char*)a1 + v33 - 16);
        v33 -= 8;
      } while ((*(unsigned __int16*)(v31 + 16) |
                (*(unsigned __int8*)(v31 + 112) << 16)) <
               (unsigned int)(*(unsigned __int16*)(v32 + 16) |
                              (*(unsigned __int8*)(v32 + 112) << 16)));
      v30 = (__int64*)((char*)a1 + v34);
    LABEL_35:
      ++v29;
      *v30 = v31;
      if (v29 == 8) {
        return v27 + 1 == a2;
      }
    }
    v20 = v27++;
    v28 += 8;
    if (v27 == a2) {
      return true;
    }
  }
}

__int64 game_85a340()
{
  GameData_21ee228 = 0;
  GameData_21ee218 = 0;
  GameData_21ee220 = 0;
  GameData_21ee210 = 0;
  GameRoutine_2b0();
  GameData_21ee1b0 = 0;
  GameData_21ee1b8 = 0;
  GameData_21ee1c0 = 0;
  GameData_21ee1c8 = 0;
  GameData_21ee1d0 = 0;
  GameData_21ee1d8 = 0;
  GameData_21ee1e0 = 0;
  GameData_21ee1e8 = 0;
  GameData_21ee1f0 = 0;
  GameData_21ee1f8 = 0;
  GameData_21ee200 = 0;
  GameData_21ee208 = 0;
  return GameRoutine_2b0();
}

bool game_8680c0()
{

#pragma clang fp contract(off)
  int v0;
  int v1;
  unsigned __int64 v2;
  __int128 v3;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v0 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v1 = (v0 & 8) != 0 ? 2 : 3;
    if ((v1 & v0) == 0) {
      return true;
    }
  }
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
    if (*((float*)&v3 + 3) == 0x1.0000000000000p+0f) {
      return LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                          (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(
                             v2 + 160, *((float*)&v3 + 3)))
                 .n128_f32[3] == 0x1.0000000000000p+0f;
    }
  }
  return false;
}

double game_868350()
{

#pragma clang fp contract(off)
  double result;
  __int64 v1;
  __int64 v2;
  int v3;
  float v4;
  float v5;
  float v6;
  int v7;

  result = 0x0.0p+0;
  v1 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0 &&
      (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 5) == 4) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ee258,
                              memory_order_acquire) &
         1) == 0) {
      v7 = __cxa_guard_acquire(&GameData_21ee258);
      result = 0x0.0p+0;
      if (v7 != 0) {
        GameData_21ee250 = (__int64)&GameData_1a9c92c;
        GameData_21ee248 = game_HashString((__int64)&GameData_1a9c92c);
        __cxa_guard_release(&GameData_21ee258);
        result = 0x0.0p+0;
      }
    }
    if (game_GameModeData_instance_ != 0) {
      v2 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&GameData_21ee248);
      if (v2 != 0) {
        v3 = *(_DWORD*)(v2 + 32);
        result = 0x0.0p+0;
        if (v3 != 0) {
          v4 = (float)v3 * 0x1.eb851e0000000p-5f;
          if ((int)v4 != 0) {
            v5 = *(float*)(v1 + 224);
            v6 = (float)(int)v4;
            LODWORD(result) =
                COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
            if (v5 < v6) {
              *(float*)&result = v5 / v6;
            }
          }
        }
      }
      else {
        return 0x0.0p+0;
      }
    }
  }
  return result;
}

bool game_868630()
{

#pragma clang fp contract(off)
  int v0;
  int v1;
  unsigned __int64 v2;
  __int128 v3;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v0 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v1 = (v0 & 8) != 0 ? 2 : 3;
    if ((v1 & v0) == 0) {
      return true;
    }
  }
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
      return true;
    }
  }
  if (GameData_22400f8 != 0) {
    return *(_BYTE*)(GameData_22400f8 + 8) == 2;
  }
  return false;
}

__int16* game_8697c0(__int16* result, char a2, float a3)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  int v5;
  int v6;
  float v8;
  __int16* v9;
  unsigned __int64 v10;
  __int128 v11;
  _BOOL4 v12;
  __int64 v13;
  _DWORD* v14;
  _DWORD* v15;
  __int64 v16;
  int v17;
  float v18;

  if (GameData_21c6978 != 0) {
    v3 = result[1];
    v4 = result[2];
    if (v3 * *result * v4 != 0) {
      v5 = result[3];
      v6 = result[4];
      v8 = a3 + (float)result[5];
      if (game_ProcFadeView_instance_ != 0) {
        v9 = result;
        v10 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        if (*(float*)(v10 + 172) == *(float*)(v10 + 168)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v10 + 160) + 16LL))(v10 +
                                                                         160);
        }
        else {
          v11 = *(_OWORD*)(v10 + 208);
        }
        v12 = *((float*)&v11 + 3) == 0x1.0000000000000p+0f &&
              LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                           (_QWORD*)(*(_QWORD*)(v10 + 160) + 16LL))(
                              v10 + 160, *((float*)&v11 + 3)))
                      .n128_f32[3] == 0x1.0000000000000p+0f;
        result = v9;
      }
      else {
        v12 = false;
      }
      v13 = GameData_21c6978;
      v14 = *(_DWORD**)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) +
                        40LL);
      v14[68] = 23;
      v14[69] = v3;
      v14[70] = v4;
      v15 = *(_DWORD**)(*(_QWORD*)(*(_QWORD*)(v13 + 32) - 8LL) + 40LL);
      v15[71] = v5;
      v15[72] = v6;
      v15[73] = (int)v8;
      v16 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 32) - 8LL) + 40LL) +
                     360LL);
      result = (__int16*)Dir_70eb90(result);
      if ((int)result >= 0) {
        v17 = (int)result;
      }
      else {
        v17 = -(int)result;
      }
      v18 = (float)(1000 * v17 % 0x733Cu) / 0x1.ccf0000000000p+14f;
      if ((int)result < 0) {
        v18 = 0x1.0000000000000p+0f - v18;
      }
      *(float*)(v16 + 196) = v18;
      if ((a2 & 1) != 0 || v12) {
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 32) - 8LL) + 40LL) +
                  225LL) = 1;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
