#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* GameRoutine_111f310(__int64, __int64, __int64, char*);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_7a8220(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_e1cd00(_QWORD*, _QWORD*);
_QWORD* Manager_66cc20(__int64*, _QWORD*);
_QWORD* StateMoveTo_d42860(_QWORD* result, __int64*);
_WORD* GameRoutine_6d7d00(__int64, _WORD*);
__attribute__((swiftcall)) void GameRoutine_108dd30(PSEUDO_X8, __int64, char*,
                                                    float32x4_t*, float32x4_t*,
                                                    int8x16_t*, long double);
__attribute__((swiftcall)) void GameRoutine_108df10(PSEUDO_X8, __int64, char*,
                                                    int8x16_t*, long double);
__attribute__((swiftcall)) void
GameRoutine_1096110(PSEUDO_X8, __int64, char*, const char*, __int64, float);
__attribute__((swiftcall)) void GameRoutine_a6ea10(PSEUDO_X8, __int64, int);
__attribute__((swiftcall)) void GameRoutine_eb5940(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_edf510(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void Manager_a501f0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void Manager_a50570(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD);
__attribute__((swiftcall)) void
collision_670c60_alt1(PSEUDO_X8, float32x4_t* result, float32x4_t*,
                      __int64) __asm__("collision_670c60");
__attribute__((swiftcall)) void game_character_1075be0(PSEUDO_X8,
                                                       unsigned int*);
__attribute__((swiftcall)) void game_character_10b49e0(PSEUDO_X8,
                                                       __int64 result, _BYTE*);
__attribute__((swiftcall)) void game_combat_10906b0(PSEUDO_X8, float32x4_t*);
__attribute__((swiftcall)) void game_hub_e1c160(PSEUDO_X8, _QWORD, _QWORD,
                                                _QWORD);
__attribute__((swiftcall)) void
game_zview_d163f0(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64* GameRoutine_112cc60(__int64* result, unsigned __int8*,
                             unsigned __int8*);
__int64* GlobalMapData_e28380(char**, __int64*, __int64*);
__int64* Manager_bc6460(_QWORD*, float32x4_t*, char);
__int64 BattleArea_8b9d00(_QWORD);
__int64 BattleInfo_790800(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 BattleInfo_790b00(_QWORD, _QWORD);
__int64 BattleInfo_7a3000();
__int64 BattleInfo_7a3110();
__int64 BattleSide_7a2950(_QWORD*);
__int64 BattleSide_Destructor(_QWORD);
__int64 CharacterBuilder_1084a50(_QWORD, _QWORD);
__int64
CharacterBuilder_1084a50_alt1(__int64,
                              _BYTE*) __asm__("CharacterBuilder_1084a50");
__int64 CharacterTrailModule_d3d1c0(__int64, __int64, int*);
__int64 CombatCamera_1098000(__int64, unsigned int, char, long double);
__int64 Components_a870e0(__int64*, char);
__int64 Components_a878a0(__int64 result, __int64);
__int64 CrowdCharacter_10315c0(__int64 result);
__int64 GameRoutine_1010220(__int64, __int64, char);
__int64 GameRoutine_1025a10(_QWORD, _QWORD);
__int64 GameRoutine_1025be0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1025e20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1029b30();
__int64 GameRoutine_1029ba0();
__int64 GameRoutine_1029c20();
__int64 GameRoutine_104b900(_QWORD, _QWORD);
__int64 GameRoutine_104c660(_QWORD, _QWORD);
__int64 GameRoutine_104e980();
__int64 GameRoutine_106b140(__int64 result, float*, float);
__int64 GameRoutine_10761d0(__int64);
__int64 GameRoutine_1096780(__int64, unsigned __int8*, char);
__int64 GameRoutine_109ecc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10f8960(_BYTE*, __int64**);
__int64 GameRoutine_10f8ba0(__int64 result, __int64);
__int64 GameRoutine_111ef70(__int64, __int64, ...);
__int64 GameRoutine_111f040(__int64, __int64, int*, unsigned int);
__int64 GameRoutine_111f130(__int64, __int64, int*, unsigned int);
__int64 GameRoutine_112e3e0(__int64, _BYTE*, __int64**, _BYTE*);
__int64 GameRoutine_14a0820(_QWORD);
__int64 GameRoutine_14a3920(__int64 result);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_60a020_alt1(__int64, __int64) __asm__("GameRoutine_60a020");
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65f9a0(_QWORD*, unsigned int*, unsigned int);
__int64 GameRoutine_6616e0(float*, unsigned int*);
__int64 GameRoutine_6b7aa0(void);
__int64 GameRoutine_790080(_QWORD);
__int64 GameRoutine_7992e0(_QWORD);
__int64 GameRoutine_940640(_QWORD*, __int64**);
__int64 GameRoutine_960f80(_QWORD);
__int64 GameRoutine_9a3bc0(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a539c0_alt1(_QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_a539c0");
__int64 GameRoutine_a7f140(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a8c380(__int64, _QWORD*);
__int64 GameRoutine_cec4a0(_QWORD, _QWORD);
__int64 GameRoutine_efb6f0(_QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125ea20(_QWORD);
__int64 GmapUIDef_1654300(__int64 result, __int64, char);
__int64 Image_72add0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Image_72af70(_QWORD);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155d940(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 Manager_a50b20(__int64, __int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ResFile_5e5f00(__int64);
__int64 RuntimeBuffer_8924a0(__int64 result, __int64, unsigned __int64,
                             unsigned __int8);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 UnitItem_6e8800(__int64 result, unsigned __int64*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_170ecf0(_QWORD, _QWORD);
__int64 game_810d20(__int64);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(__int64 result);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_ProcInst_Register(__int64);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_combat_d360c0(__int64, int, __int64*);
__int64 game_map_790ba0(_QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_g3d_5eb5c0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD, long double);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_findSound(__int64);
__int64 snd_mute(__int64*, __int64);
__int64 snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, double,
                       float);
__int64 snprintf(_QWORD, _QWORD, const char*, ...);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
__int64 strstr(_QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
__int64 wld_a7fda0(_QWORD);
__n128 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__n128 GameRoutine_14a1390(_QWORD*, char);
__n128 GameRoutine_14a1520(_QWORD*, char);
__n128 GameRoutine_7f7720(__int64, __int64);
__n128 game_map_100bdf0(__int64, __int64, __int64);
__n128 memset_alt1(_QWORD, _QWORD, _QWORD) __asm__("memset");
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt2() __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_108e940(_BYTE*);
bool GameRoutine_ad7390(_QWORD*);
extern _DWORD* GameData_212d168;
extern _DWORD GameData_1b01468[8];
extern _QWORD GameData_1bb1cc8[3];
extern _QWORD GameData_1fb0230[4];
extern _QWORD GameData_22350e0[];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN* GameData_212c840;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN GameData_1a8a3b5;
extern _UNKNOWN GameData_1a95e8b;
extern _UNKNOWN GameData_1ac40f5;
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_1af239d;
extern _UNKNOWN GameData_1b47d74;
extern _UNKNOWN GameData_1bfa05c;
extern _UNKNOWN GameData_2167560;
extern _UNKNOWN GameData_216dc28;
extern _UNKNOWN GameData_21a55c0;
extern _UNKNOWN GameData_21a5680;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN GameData_2213f98;
extern _UNKNOWN GameData_2234558;
extern _UNKNOWN GameData_2235210;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82b70;
extern __int128 GameData_1a82c00;
extern __int128 GameData_1a83040;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
extern __int128 GameData_21a5670;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6160;
extern __int64 (*GameData_20030c0[])();
extern __int64 (*GameData_202d448[])();
extern __int64 (*GameData_212c6d0[11])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212c848[2])();
extern __int64 (
    *game_cmdbtl_anonymous_ProcCmdBtlSeqPostGrow_PostGrowArgs_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqPostGrow_vtable[])();
extern __int64 (*game_hub_anonymous_ProcEnterFadeOut_vtable[])();
extern __int64 (*game_map_zv_CrowdCharacter_vtable[])();
extern __int64* GameData_212c838;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212d258[2];
extern __int64* GameData_212d448[9];
extern __int64* GameData_212d458[7];
extern __int64* GameData_212da50[3];
extern __int64* GameData_212e348;
extern __int64* GameData_212e740[2];
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ebd0[3];
extern __int64* GameData_212ee68[4];
extern __int64* GameData_212fff0[3];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_g_empty_item_ptr;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 GameData_212d238[2];
extern __int64 GameData_212d270;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc48[5];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212e438;
extern __int64 GameData_2131678;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c9c28;
extern __int64 GameData_21c9c30;
extern __int64 GameData_21c9c38;
extern __int64 GameData_21c9c48;
extern __int64 GameData_21c9cb8;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_21f3cc0;
extern __int64 GameData_220f8c8;
extern __int64 GameData_2234360;
extern __int64 GameData_2234368;
extern __int64 GameData_2234370;
extern __int64 GameData_2234380;
extern __int64 GameData_2234390;
extern __int64 GameData_22343a0;
extern __int64 GameData_22343a8;
extern __int64 GameData_22343b0;
extern __int64 GameData_22343c0;
extern __int64 GameData_22343d0;
extern __int64 GameData_22343e0;
extern __int64 GameData_22343e8;
extern __int64 GameData_22343f0;
extern __int64 GameData_2234400;
extern __int64 GameData_2234410;
extern __int64 GameData_2234420;
extern __int64 GameData_2234428;
extern __int64 GameData_2234430;
extern __int64 GameData_2234440;
extern __int64 GameData_2234450;
extern __int64 GameData_2234460;
extern __int64 GameData_2234468;
extern __int64 GameData_2234470;
extern __int64 GameData_2234480;
extern __int64 GameData_2234490;
extern __int64 GameData_22344a0;
extern __int64 GameData_22344a8;
extern __int64 GameData_22344b0;
extern __int64 GameData_22344c0;
extern __int64 GameData_22344d0;
extern __int64 GameData_22344e0;
extern __int64 GameData_22344e8;
extern __int64 GameData_22344f0;
extern __int64 GameData_2234500;
extern __int64 GameData_2234510;
extern __int64 GameData_2234520;
extern __int64 GameData_2234528;
extern __int64 GameData_2234530;
extern __int64 GameData_2234540;
extern __int64 GameData_2234550;
extern __int64 GameData_2235118;
extern __int64 GameData_2235120;
extern __int64 GameData_2235138;
extern __int64 GameData_2235148;
extern __int64 GameData_2235158;
extern __int64 GameData_2235160;
extern __int64 GameData_2235178;
extern __int64 GameData_2235188;
extern __int64 GameData_2235198;
extern __int64 GameData_22351a0;
extern __int64 GameData_22351a8;
extern __int64 GameData_22351b8;
extern __int64 GameData_22351c8;
extern __int64 GameData_22351d8;
extern __int64 GameData_22351e0;
extern __int64 GameData_22351e8;
extern __int64 GameData_22351f8;
extern __int64 GameData_2235208;
extern __int64 GameData_2235218;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235700;
extern __int64 GameData_2235708;
extern __int64 GameData_2235e30;
extern __int64 GameData_22736d0;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_g_empty_item;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char* GameData_200c9d0[12];
extern char* GameData_200c9f0[8];
extern char* GameData_200ca10[4];
extern char* GameData_212fc50[12];
extern char* game_hub_g_motions;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
extern char GameData_2234358;
extern char GameData_2234398;
extern char GameData_22343d8;
extern char GameData_2234418;
extern char GameData_2234458;
extern char GameData_2234498;
extern char GameData_22344d8;
extern char GameData_2234518;
extern char GameData_2235110;
extern char GameData_2235150;
extern char GameData_2235190;
extern char GameData_22351d0;
extern int* GameData_212df08;
extern int GameData_216dc0c;
extern int GameData_21d92e0;
extern int GameData_2234378;
extern int GameData_2234388;
extern int GameData_22343b8;
extern int GameData_22343c8;
extern int GameData_22343f8;
extern int GameData_2234408;
extern int GameData_2234438;
extern int GameData_2234448;
extern int GameData_2234478;
extern int GameData_2234488;
extern int GameData_22344b8;
extern int GameData_22344c8;
extern int GameData_22344f8;
extern int GameData_2234508;
extern int GameData_2234538;
extern int GameData_2234548;
extern int GameData_2235130;
extern int GameData_2235140;
extern int GameData_2235170;
extern int GameData_2235180;
extern int GameData_22351b0;
extern int GameData_22351c0;
extern int GameData_22351f0;
extern int GameData_2235200;
extern int GameData_2235710;
extern int GameData_2235720;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
float CharacterLoadCostCalculator_170f460(_QWORD);
float GameRoutine_10a00a0(float, long double, float);
float GameRoutine_111e8d0(float*, float, float);
float GameRoutine_9e1800(unsigned __int64*);
float cosf(float);
float game_combat_e401e0(float*, float*);
float game_zview_CharacterLoadCostCalculator_collectCharaPolygon(_QWORD,
                                                                 _QWORD);
float powf(float, float);
float sinf(float);
float tanf(float);
float32x4_t* MagicInst_10a3950(float32x4_t* result, float32x4_t*, float32x4_t*);
float32x4_t GameRoutine_10a3bd0(float32x4_t*);
long double Camera_b3bb60(_QWORD);
unsigned __int64* game_map_f0ee60(unsigned __int64* result, __int64);
unsigned __int8* GameRoutine_a539c0(unsigned __int8* result, __int64,
                                    unsigned __int64);
void CharacterTrailVertex_d35160(__int64*, _DWORD*);
void Components_a87260(__int64, __int64, int);
void GameRoutine_1017900(__int64**, __int64*);
void GameRoutine_10d93e0(_QWORD*, int);
void GameRoutine_111e780(__int64, unsigned int);
void GameRoutine_111f220(__int64, __int64, float*, float);
void GameRoutine_7d6200(__int64*, _DWORD*);
void GameRoutine_b3aee0(float32x4_t*);
void __attribute__((noreturn)) GameRoutine_1023940(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_1025e00(_QWORD, long double);
void __attribute__((noreturn)) GameRoutine_10335a0(_QWORD);
void __attribute__((noreturn)) GameRoutine_104c640(_QWORD);
void __attribute__((noreturn)) GameRoutine_112e1c0();
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_60f930();
void __attribute__((noreturn)) GameRoutine_d38e30();
void __attribute__((noreturn)) GameRoutine_e4e0b0(void);
void __attribute__((noreturn)) GameRoutine_e876f0();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a230();
void __attribute__((noreturn)) String_60a250(const char*);
void game_113c060(unsigned __int8*);
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64* game_100f680(_QWORD* a1);
__int64 game_1010060(__int64 a1, __int64 a2);
void game_1016400(float32x4_t* a1, unsigned __int32 a2, unsigned __int32* a3,
                  unsigned __int32* a4, unsigned __int64* a5, _QWORD* a6,
                  char a7, float a8);
__int64 game_10167a0(__int64 a1);
void game_101c320(__int64 a1);
__n128 game_1020d80(__int64 a1);
__int64 game_10212e0(__int64 a1);
void game_10221c0(__int64 a1);
void game_1023ae0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6);
bool game_1029840(__int64 a1, __int64* a2);
__int64 game_10332b0_alt1(__int64 a1, int8x16_t* a2, int a3, __int64 a4,
                          float a5) __asm__("game_10332b0");
__attribute__((swiftcall)) void game_103a420(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_103b760(PSEUDO_X8 x8_, unsigned __int8* a1,
                                             unsigned __int8* a2);
__attribute__((swiftcall)) void game_103bcc0(PSEUDO_X8 x8_, __int64 unused_int0,
                                             __int64 a1);
void game_1040540(__int64 a1);
void game_10411d0(__int64 a1);
__attribute__((swiftcall)) void game_10413a0(PSEUDO_X8 x8_, __int64 a1,
                                             float32x4_t* a2, float32x4_t* a3,
                                             float a5, float a6);
void game_10460c0(__int64 a1);
__attribute__((swiftcall)) void game_104bd20(PSEUDO_X8 x8_, __int64 result,
                                             __int64 a2);
__int64 game_104bf20(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6);
__int64 game_104e1d0(__int64 a1, __int64 a2);
__int64 game_106ffe0(__int64 a1, unsigned int a2, unsigned int* a3,
                     unsigned __int64 a4);
void* game_1070860(__int64 a1, int a2);
unsigned __int64 game_108acc0(__int64 a1, int a2);
unsigned __int64 game_108b900();
bool game_108c760(int a1);
__int64 game_108c8a0(int a1);
bool game_108c9c0(int a1);
unsigned __int64 game_108cc80(unsigned __int64 result, int a2);
bool game_108cee0(int a1);
__attribute__((swiftcall)) void game_108d130(PSEUDO_X8 x8_, __int64 a1,
                                             char* a2, float32x4_t* a3,
                                             __int64* a4, long double a6);
__attribute__((swiftcall)) void
game_108d920_alt1(PSEUDO_X8 x8_, _QWORD* a1, char* a2, const char* a3,
                  float a5) __asm__("game_108d920");
__attribute__((swiftcall)) void
game_108db00(PSEUDO_X8 x8_, __int64 a1, char* a2, float32x4_t* a3, float a5);
void game_109b6a0(__int64 a1, __int64* a2);
float game_10a2940(__int64 a1);
float32x4_t game_10a2a40(__int64 a1);
float32x4_t game_10be1a0(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_10cab00(PSEUDO_X8 x8_, float32x4_t*** a1,
                                             __int64 a2);
__int64 game_10d43c0(__int64 result);
void game_10d9020(_QWORD* a1, __int64 a2, __int64* a3);
void game_10e7f80(int8x16_t* a1, int a2, __int64 a3, int a4);
void game_10e88f0(_QWORD* a1, unsigned int a2);
void game_10e91c0(_QWORD* a1, float32x4_t* a2, float32x4_t* a3, long double a4);
__attribute__((swiftcall)) void game_10ea2a0(PSEUDO_X8 x8_, __int64 a1, int a2,
                                             char* a3, float a5);
_WORD* game_10ea490(__int64 a1, __int64 a2);
__int64* game_10f0680(__int64* a1, __n128 a2);
__int64 game_10f0920(__int64 a1, __n128 a2);
__int64 game_10f20b0();
__int64 game_10f21c0(_BYTE* a1, unsigned int a2);
__int64* game_10f2400(__int64* result, char a2, __n128 a3);
__n128 game_10f2860(float32x4_t* a1, float32x4_t* a2, __n128 result);
__n128 game_10f2cc0(float32x4_t* a1);
__n128 game_10f2ea0(float32x4_t* a1, __n128 result);
__n128 game_10f3240(float32x4_t* a1);
unsigned __int64 game_10f8580(__int64 a1, __int64 a2);
float game_1109f50(__int64 a1, float result);
float game_110d7c0(float32x4_t* a1, float32x4_t* a2, float32x4_t* a3,
                   float32x4_t** a4, float a5);
float game_111e3c0(__int64 a1);
float game_111f520(char a1, float a2, long double a3, float a4);
void game_111f610(float32x4_t* a1);
__n128 game_112ce60(__int64 a1, __int64* a2, __int64 a3);
__n128 game_112cfc0(__int64* a1, unsigned __int8** a2, __int64 a3);
__n128 game_112d480(__int64 a1, char a2, __int64 a3);
__n128 game_112d580(char* a1, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void
game_112d860_alt1(PSEUDO_X8 x8_,
                  unsigned __int8* result) __asm__("game_112d860");
__n128 game_112daa0(__int64* a1);
void game_112dfe0(__int64 a1, _QWORD* a2);
__attribute__((swiftcall)) void
game_112e760_alt1(PSEUDO_X8 x8_, __int64 a1) __asm__("game_112e760");
__int64 game_113a800(__int64 a1, __int64* a2);
__int64 game_113a8c0(__int64 a1, __int64* a2);
__attribute__((swiftcall)) void GameRoutine_53b30(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_53c20(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_800620(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void game_combat_10de490(PSEUDO_X8, __int64 result,
                                                    _BYTE*);
__int64 BattleInfo_796bc0(__int64);
__int64 BattleInfo_797c80(__int64);
__int64 GameRoutine_10d7a40(__int64, __int64*);
__int64 GameRoutine_10de5e0(__int64*, __int64);
__int64 GameRoutine_5fc420(__int64 result);
__int64 GameRoutine_606220(__int64*, __int64);
__int64 GameRoutine_c8bc00(__int64, __int64);
__int64 GameRoutine_d28740(__int64 result, int, __int64);
extern _DWORD GameData_1a835a0[4];
extern _DWORD GameData_1b01888[8];
extern _UNKNOWN GameData_1fc16a0;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_21779a0)(void);
extern __int64 (*GameData_2177d68)(void);
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_21c99b8;
extern __int64 GameData_220b680;
float GameRoutine_10b9f40(int32x2_t*, _QWORD*, __int64, char);
void GameRoutine_d28880(__int64**, __int64*);
void GameRoutine_d28a00(__int64, __int64, unsigned __int64);
void game_10ea6e0(__int64 a1, __int64 a2);
__int64 game_111a3e0(__int64 a1, unsigned int a2, unsigned int a3);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
__attribute__((swiftcall)) void
Manager_a501f0_alt1(PSEUDO_X8, __int64, const char*) __asm__("Manager_a501f0");
__attribute__((swiftcall)) void
Manager_a50570_alt1(PSEUDO_X8, __int64, const char*) __asm__("Manager_a50570");
__attribute__((swiftcall)) void
game_108d130_alt1(PSEUDO_X8, __int64, const char*, float32x4_t*, __int64*,
                  long double) __asm__("game_108d130");
__int64 GameHr_112e3e0(__int64, _BYTE*, __int64**, _BYTE*);
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 GameRoutine_60a020_alt2(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 Manager_a50b20_alt1(__int64, const char*) __asm__("Manager_a50b20");
__int64 memchr_alt1(__int64, int, unsigned __int64) __asm__("memchr");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt2(__int64) __asm__("nn_os_UnlockMutex");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64 std___1___shared_weak_count___release_weak_alt3(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void CrowdCharacter_10315c0_alt1(__int64) __asm__("CrowdCharacter_10315c0");
void __attribute__((noreturn))
GameRoutine_10335a0_alt1() __asm__("GameRoutine_10335a0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_10332b0(__int64 a1, int8x16_t* a2, int a3, __int64 a4, float a5);
__attribute__((swiftcall)) void
game_108d920(PSEUDO_X8 x8_, _QWORD* a1, const char* a2, char* a3, float a5);
__attribute__((swiftcall)) void game_112d860(PSEUDO_X8 x8_, __int64* a1);
__attribute__((swiftcall)) void game_112e760(PSEUDO_X8 x8_, const char* a1);

__int64* game_100f680(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  _DWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int128 v7;
  __int64 v8;
  __int64* v9;
  unsigned int v10;
  __n128 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _DWORD* v15;
  unsigned __int8 explicit;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int128 v20;
  __int64 v21;
  __int64* v22;
  unsigned int v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  __int128 v31;
  __int64 v32;
  int32x2_t v33;
  __int64* v34;
  __int64 v35;
  unsigned int v36;
  unsigned int v37;
  int32x4_t v38;
  int32x4_t* v39;
  __int64* result;
  __int64 v41;
  unsigned int v42;
  unsigned int v43;
  __int128 v44;
  __int64 v45;
  int32x2_t v46;
  __int64* v47;
  __int64 v48;
  unsigned int v49;
  unsigned int v50;
  int32x4_t v51;
  int32x4_t* v52;
  __int64 v53;
  __int64 v54;
  struct {
    float32x4_t v55;
    const char* v56;
    int v57;
    char gap28_[4];
    __int128 v58;
    __int128 v59;
    __int64 v60;
    __int64 v61;
  } v55_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((a1[5] & 1) == 0) {
    GameRoutine_14a1390(a1 + 1, 1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_14a1390(a1 + 3, 1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_31;
  }
  v2 = (unsigned int)*GameData_212d168;
  if ((unsigned int)v2 > 7) {
    v3 = 6;
  }
  else {
    v3 = GameData_1b01468[v2];
  }
  if (*((_BYTE*)a1 + 41) == 1) {
    GameRoutine_14a1390(a1 + 3, 1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = (_DWORD*)a1[1];
    if (*(_QWORD*)v4 != 0 && *(_DWORD*)(*(_QWORD*)v4 + 16LL) == v4[2]) {
      goto LABEL_31;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v53 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v53;
      __cxa_guard_release(&GameData_21a6130),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v5 = *(unsigned int*)(*a1 + 196LL);
    v55_.v55 = (__typeof__(v55_.v55)){0};
    v55_.v57 = v3;
    v6 = (_QWORD*)*eft_g_effectSystem_ptr[0];
    *(_QWORD*)&v7 = v5 | (v5 << 32);
    *((_QWORD*)&v7 + 1) = v5;
    v55_.v58 = GameData_21a6120;
    v55_.v59 = v7;
    v8 = *((_QWORD*)GameData_212c540 + 1);
    v55_.v60 = *(_QWORD*)GameData_212c540;
    v55_.v61 = v8;
    v55_.v56 = "UI_Base_Arrow_Bmap_0";
    v9 = Manager_bc6460(v6, &v55_.v55, 1),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v11 = GameRoutine_14a10d0(&v55_.v55, (__int64)v9, v10,
                              (__int64)&GameData_1a9f09e),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v13 = LANES128(v55_.v55).n128_u64[1];
    v12 = LANES128(v55_.v55).n128_u64[0];
    if (LANES128(v55_.v55).n128_u64[1] != 0) {
      atomic_fetch_add_explicit(
          (atomic_ullong* volatile)(LANES128(v55_.v55).n128_u64[1] + 8), 1u,
          memory_order_relaxed);
    }
    v14 = a1[2];
    a1[1] = v12;
    a1[2] = v13;
    if (v14 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(
            v14, *(long double*)&v11),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v11 = std___1___shared_weak_count___release_weak(v14),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v13 = a1[2];
    }
  }
  else {
    GameRoutine_14a1390(a1 + 1, 1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v15 = (_DWORD*)a1[3];
    if (*(_QWORD*)v15 != 0 && *(_DWORD*)(*(_QWORD*)v15 + 16LL) == v15[2]) {
      goto LABEL_31;
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire);
    v17 = GameData_212c540;
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v54 = v17[1];
      *(_QWORD*)&GameData_21a6120 = *v17;
      *((_QWORD*)&GameData_21a6120 + 1) = v54;
      __cxa_guard_release(&GameData_21a6130),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v18 = *(unsigned int*)(*a1 + 196LL);
    v55_.v55 = (__typeof__(v55_.v55)){0};
    v55_.v57 = v3;
    v19 = (_QWORD*)*eft_g_effectSystem_ptr[0];
    *(_QWORD*)&v20 = v18 | (v18 << 32);
    *((_QWORD*)&v20 + 1) = v18;
    v55_.v58 = GameData_21a6120;
    v21 = v17[1];
    v55_.v60 = *v17;
    v55_.v61 = v21;
    v55_.v59 = v20;
    v55_.v56 = "UI_Base_Arrow_Bmap_1";
    v22 = Manager_bc6460(v19, &v55_.v55, 1),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v11 = GameRoutine_14a10d0(&v55_.v55, (__int64)v22, v23,
                              (__int64)&GameData_1a9f09e),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v13 = LANES128(v55_.v55).n128_u64[1];
    v24 = LANES128(v55_.v55).n128_u64[0];
    if (LANES128(v55_.v55).n128_u64[1] != 0) {
      atomic_fetch_add_explicit(
          (atomic_ullong* volatile)(LANES128(v55_.v55).n128_u64[1] + 8), 1u,
          memory_order_relaxed);
    }
    v25 = a1[4];
    a1[3] = v24;
    a1[4] = v13;
    if (v25 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v25 + 16LL))(
            v25, *(long double*)&v11),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v11 = std___1___shared_weak_count___release_weak(v25),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v13 = a1[4];
    }
  }
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v13 + 16LL))(
          v13, *(long double*)&v11),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v11 = std___1___shared_weak_count___release_weak(v13),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v26 = LANES128(v55_.v55).n128_u64[1];
  if (LANES128(v55_.v55).n128_u64[1] != 0 &&
      atomic_fetch_add(
          (atomic_ullong* volatile)(LANES128(v55_.v55).n128_u64[1] + 8),
          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v26 + 16LL))(
        v26, *(long double*)&v11),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v26),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_31:
  v27 = a1[1];
  v28 = *(_QWORD*)v27;
  if (*(_QWORD*)v27 != 0 && *(_DWORD*)(v28 + 16) == *(_DWORD*)(v27 + 8)) {
    v29 = *(_DWORD*)(v28 + 36);
    if (v29 != 0) {
      v30 = 0;
      v31 = *(_OWORD*)(*a1 + 144LL);
      do {
        if ((int)v29 > (int)v30) {
          v32 = *(_QWORD*)(v28 + 40 + 8LL * (int)v30);
          if (v32 != 0) {
            *(_OWORD*)(v32 + 16) = v31;
            *(_BYTE*)(v32 + 128) = 1;
            v29 = *(_DWORD*)(v28 + 36);
          }
        }
        ++v30;
      } while (v30 < v29);
    }
    GameRoutine_14a3920(v27),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v34 = (__int64*)a1[1];
    v35 = *v34;
    if (*v34 != 0 && *(_DWORD*)(v35 + 16) == *((_DWORD*)v34 + 2)) {
      v36 = *(_DWORD*)(v35 + 36);
      if (v36 != 0) {
        v37 = 0;
        PSEUDO_LOW_LANE64(v33, n64_u32, *(_DWORD*)(*a1 + 196LL));
        v38 = vdupq_lane_s32(v33, 0);
        LANES128(v38).n128_u32[3] = 0;
        do {
          if ((int)v36 > (int)v37) {
            v39 = *(int32x4_t**)(v35 + 40 + 8LL * (int)v37);
            if (v39 != nullptr) {
              v39[2] = v38;
              LANES128(v39[8]).n128_u8[0] = 1;
              v36 = *(_DWORD*)(v35 + 36);
            }
          }
          ++v37;
        } while (v37 < v36);
      }
    }
  }
  result = (__int64*)a1[3];
  v41 = *result;
  if (*result != 0 && *(_DWORD*)(v41 + 16) == *((_DWORD*)result + 2)) {
    v42 = *(_DWORD*)(v41 + 36);
    if (v42 != 0) {
      v43 = 0;
      v44 = *(_OWORD*)(*a1 + 144LL);
      do {
        if ((int)v42 > (int)v43) {
          v45 = *(_QWORD*)(v41 + 40 + 8LL * (int)v43);
          if (v45 != 0) {
            *(_OWORD*)(v45 + 16) = v44;
            *(_BYTE*)(v45 + 128) = 1;
            v42 = *(_DWORD*)(v41 + 36);
          }
        }
        ++v43;
      } while (v43 < v42);
    }
    result = (__int64*)GameRoutine_14a3920((__int64)result),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v47 = (__int64*)a1[3];
    v48 = *v47;
    if (*v47 != 0 && *(_DWORD*)(v48 + 16) == *((_DWORD*)v47 + 2)) {
      v49 = *(_DWORD*)(v48 + 36);
      if (v49 != 0) {
        v50 = 0;
        PSEUDO_LOW_LANE64(v46, n64_u32, *(_DWORD*)(*a1 + 196LL));
        v51 = vdupq_lane_s32(v46, 0);
        LANES128(v51).n128_u32[3] = 0;
        do {
          if ((int)v49 > (int)v50) {
            v52 = *(int32x4_t**)(v48 + 40 + 8LL * (int)v50);
            if (v52 != nullptr) {
              v52[2] = v51;
              LANES128(v52[8]).n128_u8[0] = 1;
              v49 = *(_DWORD*)(v48 + 36);
            }
          }
          ++v50;
        } while (v50 < v49);
      }
    }
  }
  return result;
}

__int64 game_1010060(__int64 a1, __int64 a2)
{
  __int64 (***v3)();
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  struct {
    __int64* v14;
    __int64* v15;
    __int64 v16;
  } v14_;
  struct {
    __int64 (**v17)();
    __int64** v18;
    int v19;
    int v20;
    __int64 v21;
    __int64 (***v22)();
    __int64 v23;
    int v24;
    int v25;
    __int64 v26;
    int v27;
    int v28;
    __int64 v29;
    int v30;
    int v31;
    __int64 v32;
    unsigned int v33;
    char v34;
  } v17_;
  _QWORD* v35;

  v3 = &v17_.v17;
  v14_.v15 = nullptr;
  v14_.v16 = 0;
  v14_.v14 = nullptr;
  v17_.v17 = GameData_202d448;
  v17_.v18 = &v14_.v14;
  v17_.v22 = &v17_.v17;
  if (a2 == 0) {
    goto LABEL_12;
  }
  v4 = *(_QWORD*)(GameData_21c96e8 + 8);
  v5 = *(_QWORD**)(v4 + 8);
  v6 = *(_QWORD**)(v4 + 16);
  if (v5 == v6) {
    v3 = &v17_.v17;
  LABEL_12:
    v8 = 4;
    goto LABEL_13;
  }
  do {
    if (*(_QWORD*)*v5 == a2) {
      v35 = (_QWORD*)*v5;
      if (v17_.v22 == nullptr) {
        GameRoutine_60a310();
      }
      ((void (*)(__int64 (***)(void), _QWORD**))(*v17_.v22)[6])(v17_.v22, &v35);
    }
    ++v5;
  } while (v5 != v6);
  v3 = v17_.v22;
  if (v17_.v22 == &v17_.v17) {
    goto LABEL_12;
  }
  if (v17_.v22 != nullptr) {
    v8 = 5;
  LABEL_13:
    ((__int64 (*)(__int64))(*v3)[v8])((__int64)v3);
  }
  v9 = v14_.v14;
  if (v14_.v15 == v14_.v14) {
    v11 = 0;
    if (v14_.v14 == nullptr) {
      return v11;
    }
  }
  else {
    v10 = *v14_.v14;
    if (*v14_.v14 != 0) {
      v17_.v18 = nullptr;
      v17_.v20 = 0;
      v17_.v21 = 0;
      v17_.v23 = 0;
      v17_.v25 = 0;
      v17_.v26 = 0;
      v17_.v28 = 0;
      v17_.v29 = 0;
      v17_.v31 = 0;
      v17_.v32 = 0;
      v17_.v33 = 0;
      v17_.v34 = 0;
      v17_.v17 = (__int64 (**)(void))(((_UNKNOWN*)0x0LL) + 2);
      v17_.v19 = 2;
      v17_.v22 = (__int64 (***)(void))(((_UNKNOWN*)0x0LL) + 2);
      v17_.v24 = 2;
      v17_.v27 = 2;
      v17_.v30 = 2;
      GmapUIDef_1654300((__int64)&v17_.v17, v10, 0);
      GameRoutine_1010220(a1, (__int64)&v17_.v17, 0);
      v11 = v17_.v33;
      v9 = v14_.v14;
      if (v14_.v14 == nullptr) {
        return v11;
      }
    }
    else {
      v11 = 0;
    }
  }
  v14_.v15 = v9;
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v12 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
  return v11;
}

void game_1016400(float32x4_t* a1, unsigned __int32 a2, unsigned __int32* a3,
                  unsigned __int32* a4, unsigned __int64* a5, _QWORD* a6,
                  char a7, float a8)
{

#pragma clang fp contract(off)
  float32x4_t v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD** v16;
  unsigned __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  float v22;
  __int64 v23;
  float v24;
  unsigned __int64 v25;
  float v26;
  float32x4_t v27;
  float32x4_t v28;
  __int64 v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  bool v34;
  unsigned int v35;
  float v36;
  float v37;
  float v38;

  LANES128(a1[4]).n128_u32[2] = a2;
  LANES128(a1[5]).n128_u32[0] = *a3;
  LANES128(a1[5]).n128_u32[1] = a3[1];
  v12 = a1[5];
  LANES128(v12).n128_u64[1] = a3[2];
  a1[5] = v12;
  LANES128(a1[6]).n128_u32[0] = *a4;
  LANES128(a1[6]).n128_u32[1] = a4[1];
  LANES128(a1[6]).n128_u32[2] = a4[2];
  LANES128(a1[6]).n128_u32[3] = a4[3];
  v14 = *a5;
  v13 = a5[1];
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  v15 = LANES128(a1[7]).n128_u64[1];
  LANES128(a1[7]).n128_u64[0] = v14;
  LANES128(a1[7]).n128_u64[1] = v13;
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak(v15);
  }
  LANES128(*(a1)).n128_f32[2] = a8;
  LANES128(a1[8]).n128_u64[0] = (unsigned __int64)a6;
  LANES128(a1[11]).n128_u32[2] = 0;
  if (a6 != nullptr) {
    v16 = *(_QWORD***)(GameData_21c9cb8 + 64);
    v17 = *(_QWORD*)(GameData_21c9cb8 + 72) - (_QWORD)v16;
    if ((int)(v17 >> 3) >= 1) {
      v18 = (v17 >> 3) & 0x7FFFFFFF;
      while (1) {
        v20 = *v16++;
        v19 = v20;
        if (*v20 == *a6) {
          break;
        }
        if (--v18 == 0) {
          goto LABEL_13;
        }
      }
      if ((a7 & 1) != 0) {
        LANES128(a1[11]).n128_u32[2] = *((_DWORD*)v19 + 8);
      }
    }
  }
LABEL_13:
  v21 = LANES128(a1[7]).n128_u64[1];
  v22 = 0x0.0p+0f;
  v38 = 0x1.0000000000000p+0f;
  if (v21 != 0) {
    v23 = std___1___shared_weak_count_lock(v21);
    v24 = 0x0.0p+0f;
    if (v23 != 0) {
      v25 = LANES128(a1[7]).n128_u64[0];
      if (v25 != 0) {
        v26 = *(float*)(*(_QWORD*)(v25 + 11792) + 40LL) *
              (float)(*(float*)(v25 + 32) *
                      (float)(*(float*)(v25 + 40) +
                              (float)(0x1.0000000000000p+0f -
                                      *(float*)(v25 + 40))));
        LANES128(a1[8]).n128_f32[3] = v26;
        LANES128(a1[9]).n128_f32[0] =
            *(float*)(*(_QWORD*)(v25 + 11792) + 32LL) *
            (float)(*(float*)(v25 + 32) *
                    (float)(*(float*)(v25 + 40) +
                            (float)(0x1.0000000000000p+0f -
                                    *(float*)(v25 + 40))));
        LANES128(a1[11]).n128_f32[0] =
            *(float*)(*(_QWORD*)(v25 + 11792) + 36LL) *
            (float)(*(float*)(v25 + 32) *
                    (float)(*(float*)(v25 + 40) +
                            (float)(0x1.0000000000000p+0f -
                                    *(float*)(v25 + 40))));
        LANES128(a1[11]).n128_u32[3] = *(_DWORD*)(v25 + 11784);
        v27 = vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83040),
                          *(float*)(v25 + 36));
        LANES128(a1[10]).n128_u64[0] = LANES128(v27).n128_u64[0];
        v28 = a1[10];
        LANES128(v28).n128_u64[1] = LANES128(v27).n128_u32[2];
        a1[10] = v28;
        v38 = *(float*)(v25 + 32);
        v24 = *(_DWORD*)(v25 + 11784) == 18 ? 0x1.4000000000000p+3f : 0x0.0p+0f;
        v22 = v26 + 0x0.0p+0f;
      }
      else {
        v38 = 0x1.0000000000000p+0f;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v29 = v23;
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak(v29);
      }
    }
  }
  else {
    v24 = 0x0.0p+0f;
  }
  v30 = LANES128(a1[11]).n128_u32[3];
  if (v30 < 7) {
  LABEL_25:
    if ((game_10167a0((__int64)a1) & 1) != 0) {
      v31 = 0;
      v32 = 0;
      v33 = 0;
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  if (v30 == 7) {
    if ((game_10167a0((__int64)a1) & 1) != 0) {
      v31 = 0;
      v32 = 1;
      v33 = 1;
      goto LABEL_33;
    }
  }
  else if (v30 == 8) {
    goto LABEL_25;
  }
LABEL_32:
  v33 = 2;
  v31 = 1;
  v32 = 0;
LABEL_33:
  LANES128(a1[12]).n128_u32[2] = v33;
  v34 = v31 == 0;
  v35 = LANES128(a1[11]).n128_u32[3];
  v36 =
      v24 + (float)((float)(v22 + 0x1.8000000000000p+1f) +
                    fmaxf(LANES128(a1[9]).n128_f32[0] + -0x1.cccccc0000000p+0f,
                          0x0.0p+0f));
  v37 = fmaxf(v22 + -0x1.cccccc0000000p-2f, 0x0.0p+0f) + v36;
  if (!v34) {
    v36 = v37;
  }
  LANES128(*(a1)).n128_f32[0] = v36;
  if (v35 <= 0x21 && ((1LL << v35) & 0x3E4260100LL) != 0) {
    v36 = v36 / 0x1.3439580000000p+0f;
  LABEL_38:
    LANES128(*(a1)).n128_f32[0] = v36;
    goto LABEL_39;
  }
  if (v32 != 0) {
    v36 = v36 * 0x1.d9999a0000000p-1f;
    goto LABEL_38;
  }
LABEL_39:
  if (v35 == 8 && LANES128(a1[4]).n128_u32[2] == 1) {
    a1[10] = vaddq_f32(
        vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82c00), v38), a1[10]);
    LANES128(*(a1)).n128_f32[0] = v36 * 0x1.cccccc0000000p-1f;
  }
}

__int64 game_10167a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  bool v19;
  __int64 v20;

  v2 = *(_QWORD*)(a1 + 120);
  if (v2 != 0 && (v3 = std___1___shared_weak_count_lock(v2)) != 0) {
    v4 = *(_QWORD*)(a1 + 112);
    if (v4 != 0) {
      v5 = *(unsigned __int8*)(v4 + 184);
      if ((v5 & 1) != 0) {
        v6 = *(_QWORD*)(v4 + 192);
      }
      else {
        v6 = v5 >> 1;
      }
      if (v6 != 0) {
        v7 = v3;
        if ((GameRoutine_10761d0(v4 + 176) & 1) != 0) {
          v8 = *(unsigned __int8*)(v4 + 184);
          v9 = (__int64*)(v4 + 185);
          v3 = v7;
          v19 = (v8 & 1) == 0;
          v10 = v8 >> 1;
          if (!v19) {
            v9 = *(__int64**)(v4 + 200);
            v10 = *(_QWORD*)(v4 + 192);
          }
          if (v10 == 0) {
            goto LABEL_28;
          }
          v11 = 0;
          v12 = v9;
          while (v10 != v11) {
            v13 = v11;
            v14 = (__int64)v12 + v10;
            v12 = (__int64*)((char*)v12 - 1);
            v15 = *(unsigned __int8*)(v14 - 1);
            v11 = v13 + 1;
            if (v15 == 47) {
              if (v10 + 1 != v11) {
                if (v10 < v11) {
                  String_60a250("string_view::substr");
                }
                v16 = (__int64)v12 + v10;
                v10 = v13;
                v9 = (__int64*)(v16 + 1);
              }
              break;
            }
          }
          if (v10 == 12) {
            v17 = *v9;
            v18 = *((_DWORD*)v9 + 2);
            v19 = v17 == 0x7369766E495F4443LL && v18 == 1701601897;
            LODWORD(v4) = !v19;
          }
          else {
          LABEL_28:
            LODWORD(v4) = 1;
          }
        }
        else {
          LODWORD(v4) = 0;
          v3 = v7;
        }
      }
      else {
        LODWORD(v4) = 0;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v20 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v20);
    }
  }
  else {
    LODWORD(v4) = 0;
  }
  return (unsigned int)v4;
}

void game_101c320(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1 + 16;
  v2 = 0;
  v3 = GameData_212d020[0];
  v4 = GameData_212fc50[0];
  do {
    v5 = **(_QWORD**)(v1 + v2);
    *(_QWORD*)(v5 + 8) = *(_QWORD*)(*(_QWORD*)v3 + 240LL);
    if ((*v4 & 1) != 0) {
      v6 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4);
    }
    else {
      v6 = (__int64)(v4 + 1);
    }
    v7 = strlen(v6);
    game_map_100bdf0(v5, v6, v7);
    if ((*((_BYTE*)((__int128*)0x10LL) + (_QWORD)v4 + 8) & 1) != 0) {
      v8 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v4);
    }
    else {
      v8 = (__int64)(v4 + 25);
    }
    v9 = strlen(v8);
    game_map_100bdf0(v5, v8, v9);
    if ((*((_BYTE*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v4) & 1) != 0) {
      v10 = *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v4);
    }
    else {
      v10 = (__int64)(v4 + 49);
    }
    v11 = strlen(v10);
    game_map_100bdf0(v5, v10, v11);
    v2 += 16;
  } while (v2 != 1024);
}

__n128 game_1020d80(__int64 a1)
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
  __n128 result;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v27[10];
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  char v35;
  char v36;
  __int64 v37;
  int v38;
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
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;

  v28 = 1065353216;
  v29 = 0x100000000LL;
  v33 = 0;
  v38 = 0;
  v66 = 0;
  v67 = 0;
  v63 = 0;
  v64 = 0;
  v30 = 0x4248000041D80000LL;
  v31 = 0x41C0000042100000LL;
  v32 = 0x4110000041800000LL;
  v37 = 1092616192;
  v2 = *(_QWORD*)GameData_212c2a0;
  v3 = *((_QWORD*)GameData_212c2a0 + 1);
  v4 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
  v5 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
  v6 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
  v8 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2b0);
  v7 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2b0 + 8);
  v41 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
  v42 = v4;
  v43 = v5;
  v44 = v6;
  v10 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2b0);
  v9 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                   (_QWORD)GameData_212c2b0);
  v11 = *(_QWORD*)GameData_212c2b0;
  v39 = v2;
  v40 = v3;
  v12 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                    (_QWORD)GameData_212c2a0);
  v14 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0);
  v13 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0 + 8);
  v45 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2a0);
  v46 = v12;
  v15 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2b0);
  v49 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2b0 + 8);
  v50 = v13;
  v16 = *(_QWORD*)GameData_212c2b0;
  v17 = *((_QWORD*)GameData_212c2b0 + 1);
  v55 = v11;
  v56 = v15;
  v47 = v16;
  v48 = v17;
  v18 =
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)GameData_212c2b0);
  v53 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2b0);
  v54 = v9;
  v20 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0 + 8);
  v19 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0 + 16);
  v21 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)GameData_212c2b0);
  v59 = v8;
  v60 = v18;
  v51 = v19;
  v52 = v7;
  v57 = v14;
  v58 = v20;
  v61 = v10;
  v62 = v21;
  v35 = 1;
  *(_OWORD*)&v27[2] = GameData_1a83090;
  *(_OWORD*)&v27[4] = (__typeof__(*(_OWORD*)&v27[4])){0};
  *(_OWORD*)&v27[6] = GameData_1a83610;
  *(_OWORD*)&v27[8] = (__typeof__(*(_OWORD*)&v27[8])){0};
  v36 = 1;
  v27[0] = GameData_212e438 + 16;
  v27[1] = 0;
  v34 = 0x469C40003DCCCCCDLL;
  v68 = 1023;
  v64 = 1023;
  v65 = 0;
  wld_a7fda0(v27);
  wld_a7fda0(*(_QWORD*)(a1 + 8));
  v23 = v65;
  v27[0] = GameData_212e740[0] + 2;
  if (v65 != 0) {
    v24 = v66;
    if (v65 == v66) {
      goto LABEL_8;
    }
    do {
      v25 = *(_QWORD*)(v24 - 8);
      *(_QWORD*)(v24 - 8) = 0;
      if (v25 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
      }
      v24 -= 24;
    } while (v24 != v23);
    v66 = v23;
    if (v65 != 0) {
    LABEL_8:
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
    }
  }
  return result;
}

__int64 game_10212e0(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64* v14;
  void* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
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

  v15 = &GameData_1a95e8b;
  v14 = (__int64*)game_HashString(&GameData_1a95e8b);
  if (game_GameModeData_instance_ == 0 ||
      (v2 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v14)) == 0 ||
      *(_DWORD*)(v2 + 32) == 0) {
    v3 = (_QWORD*)GameData_212c7b0[0];
    if (GameSubquestData_125ea20(*(_QWORD*)GameData_212c7b0[0]) != 0) {
      v4 = msg_MessageManager_instance__ptr[0];
      v5 = *msg_MessageManager_instance__ptr[0];
      v6 = *(_QWORD*)(GameSubquestData_125ea20(*v3) + 32);
      if (v6 != 0) {
        v7 = *v4;
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
        v14 = GameData_212e348 + 2;
        v15 = (void*)0xFFFF0001FFFF0000LL;
        v16 = 0xFFFF0004FFFF0002LL;
        v17 = 0xFFFF0006FFFF0005LL;
        v32 = 8;
        v18 = -65529;
        v19 = -65528;
        v8 = (char*)GameRoutine_a4dbe0(v7, v6, 0, &v14);
        if (v8 == nullptr) {
          v8 = *msg_MessageManager_empty_text__ptr;
        }
      }
      else {
        v8 = &GameData_1a9f09e;
      }
      GameRoutine_60a020(v5 + 14824, v8);
      v9 = *(_QWORD*)GameData_212dbf0[0];
      v10 = fw_memory_g_heap_manager_ptr;
      v11 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
      v14 = (_QWORD*)(((char*)0x20LL) + 1);
      v15 = ((__int128*)0x10LL) + 9;
      v16 = (unsigned __int64)v11;
      strcpy(v11, "MID_LGV_1SEO_LG13_009_m03");
      GameRoutine_efb6f0(v9, a1 + 16, &v14);
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v12);
    }
  }
  v15 = &GameData_1a95e8b;
  v14 = (__int64*)game_HashString(&GameData_1a95e8b);
  return game_VariableManager_SetFlag(&v14, 1);
}

void game_10221c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  long double v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v23;
  int v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  _BYTE* v30;
  __int64 v31;
  bool v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  __int16* v50;
  int v51;
  __int64 v52;
  __int64 i;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int** v58;
  int* v59;
  int* v60;
  unsigned __int64 v61;
  char v62;
  __int64 v63;
  int* v64;
  __int64 v65;
  __int64 v66;
  long double v67;
  __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  int v72;
  int v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  char v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64* v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  int v90;
  __int64 v91;
  char v92;
  char v93;
  char v94;
  char v95;
  __int64 v96;
  char v97;
  char v98;
  char v99;
  char v100;
  int v101;
  char v102;
  char v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
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
  int v128;
  __int64 v129;
  int v130;
  __int64 v131;
  __int64 v132;
  char v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  unsigned int v137;
  __int64 v138;
  unsigned int v139;
  bool v140;
  char* v141;
  char v142;
  __int64 v143;
  __int64 v144;
  int v145;
  int v146;
  __int64 v147;
  __int64 v148;
  char v149;
  __int64 v150;
  __int16 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  int* v162;
  unsigned int v163;
  __int64 v164;
  char v165;
  unsigned int v166;
  char v167;
  int v168;
  char v169;
  char v170;
  __int64* v171;
  char v172;
  __int64* v173;
  int v174;
  __int64 v175;
  __int64 v176;
  unsigned __int64 v177;
  unsigned __int64 v178;
  char v179;
  int v180;
  __int16 v181;
  __int64 v182;
  __int64 v183;
  int v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64* v188;
  __int64 v189;
  __int64 v190;
  int v191;
  _BYTE v192[12];
  __int64 v193;
  _BYTE v194[13];
  __int128 v195;
  unsigned __int64 v196;
  unsigned __int64 v197;
  int v198;
  unsigned __int8 v199;
  unsigned __int64 v200[82];
  _BYTE v201[24];
  __int64 v202;
  _BYTE v203[760];
  _BYTE v204[8960];
  int v205;
  __int16 v206;
  _QWORD v207[2];
  __int64* v208;
  __int64 v209;

  if ((float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                160LL) *
                      0x1.0aef000000000p+4) /
              0x1.f400000000000p+9) > 0.0) {
    v2 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
    v3 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
    if (v3 != 0 &&
        (v4 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL),
         v5 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                   memory_order_relaxed),
         v6 = std___1___shared_weak_count_lock(v5),
         *(__n128*)& v7 = std___1___shared_weak_count___release_weak(v3),
         v6 != 0)) {
      if (v4 != 0) {
        v8 = 254936;
      }
      else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
        v8 = 8;
      }
      else {
        v8 = 127472;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 16LL))(v6, v7);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
    else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
      v8 = 8;
    }
    else {
      v8 = 127472;
    }
    v9 = v2 + v8;
    v160 = a1;
    v10 = (*(_QWORD*)(v2 + v8 + 127168) | *(_QWORD*)(v2 + v8 + 127192)) == 0 ||
          v2 == 0;
    if (!v10) {
      v52 = *(_QWORD*)(a1 + 16);
      for (i = *(_QWORD*)(a1 + 24); v52 != i; v52 += 136) {
        *(_DWORD*)(v52 + 132) |= 1u;
      }
      v54 = 0;
      v158 = v2 + v8;
      v159 = v9 + 127208;
      while (1) {
        v190 = 0;
        v191 = 0;
        v192[0] = 0;
        v192[8] = 0;
        v194[12] = 0;
        LOBYTE(v195) = 0;
        v199 = 0;
        v200[0] = 0;
        v193 = 0;
        *(_QWORD*)v194 = 0;
        v194[8] = 0;
        LODWORD(v189) = 0;
        LODWORD(v187) = v54;
        v188 = *(__int64**)(v9 + 127192);
        LODWORD(v189) = *(_DWORD*)(v9 + 127308);
        if (*(_BYTE*)(v9 + 127184) == 1) {
          v55 = *(_QWORD*)(v9 + 127176);
          v192[8] = 1;
          *(_QWORD*)v192 = v55;
        }
        v56 = *GameData_212cff0[0];
        if (*GameData_212cff0[0] != 0 && *(_BYTE*)(v56 + 32) != 0 &&
            (unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) -
                           7) <= 1) {
          if ((*(_DWORD*)(v56 + 48) & 0xFFF) != 0) {
            v57 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (*(_DWORD*)(v56 + 48) & 0xFFF));
          }
          else {
            v137 = *(unsigned __int16*)(v56 + 40);
            if (v137 == 0) {
              v137 = *(unsigned __int16*)game_g_empty_item_ptr;
            }
            v138 =
                *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v137);
            v57 = *(_QWORD*)(v138 + 192);
            v139 = *(unsigned __int8*)(v138 + 72);
            v140 = v57 == 0 || v139 > 7;
            if (v140 || *(_BYTE*)(v57 + 105) == 0) {
              v57 = 0;
            }
            else if (*(_BYTE*)(v57 + 104) == 2) {
              v57 = 0;
            }
          }
        }
        else {
          v57 = *(_QWORD*)(v9 + 127160);
        }
        v193 = v57;
        v58 = (int**)(v159 + 24 * v54);
        *(_QWORD*)v194 = *(_QWORD*)(v9 + 127168);
        v59 = *v58;
        v60 = v58[1];
        v162 = v60;
        v164 = v54;
        if (*v58 != v60) {
          break;
        }
      LABEL_114:
        v9 = v158;
        if (++v54 == 4) {
          goto LABEL_19;
        }
      }
      while (1) {
        if (v54 != v59[6]) {
          goto LABEL_127;
        }
        v190 = *((_QWORD*)v59 + 1);
        v191 = *v59;
        v62 = *((_BYTE*)v59 + 20);
        *(_DWORD*)&v194[8] = v59[4];
        v194[12] = v62;
        if (v199 == 1) {
          v199 = 0;
        }
        v63 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 88LL);
        if (v63 != 0) {
          v64 = *(int**)(*(_QWORD*)GameData_212d020[0] + 80LL);
          v65 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 88LL);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 16), 1u,
                                    memory_order_relaxed);
          v66 = std___1___shared_weak_count_lock(v65);
          *(__n128*)&v67 = std___1___shared_weak_count___release_weak(v63);
          if (v66 != 0) {
            if (v64 != nullptr && *((_QWORD*)v64 + 3) == v190 &&
                *((unsigned __int8*)v64 + 12) == (unsigned __int8)v191 &&
                *((unsigned __int8*)v64 + 13) == BYTE1(v191)) {
              if (v199 == 1) {
                *(_QWORD*)&v195 = *(_QWORD*)v64;
                v69 = *((_QWORD*)v64 + 1);
                v70 = *((_QWORD*)v64 + 2);
                v71 = *((_QWORD*)v64 + 3);
                LOBYTE(v198) = *((_BYTE*)v64 + 32);
                v196 = v70;
                v197 = v71;
                *((_QWORD*)&v195 + 1) = v69;
              }
              else {
                v72 = *v64;
                BYTE4(v195) = *((_BYTE*)v64 + 4);
                LODWORD(v195) = v72;
                BYTE5(v195) = *((_BYTE*)v64 + 5);
                v73 = *(int*)((char*)v64 + 6);
                WORD5(v195) = *((_WORD*)v64 + 5);
                *(_DWORD*)((char*)&v195 + 6) = v73;
                HIDWORD(v195) = v64[3];
                v74 = *((_QWORD*)v64 + 2);
                v75 = *((_QWORD*)v64 + 3);
                v76 = *((_BYTE*)v64 + 32);
                v199 = 1;
                LOBYTE(v198) = v76;
                v196 = v74;
                v197 = v75;
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, long double))(*(_QWORD*)v66 + 16LL))(v66,
                                                                         v67);
              std___1___shared_weak_count___release_weak(v66);
            }
          }
        }
        v200[0] = (unsigned int)v187 - 0x61C8864680B583EBLL;
        game_map_f0ee60(v200, (__int64)v188);
        v77 = ((unsigned int)(char)v189 - 0x61C8864680B583EBLL +
               (v200[0] << 12) + (v200[0] >> 4)) ^
              v200[0];
        v200[0] = ((unsigned int)SBYTE1(v189) - 0x61C8864680B583EBLL +
                   (v77 << 12) + (v77 >> 4)) ^
                  v77;
        game_map_f0ee60(v200, v190);
        v78 = ((unsigned int)(char)v191 - 0x61C8864680B583EBLL +
               (v200[0] << 12) + (v200[0] >> 4)) ^
              v200[0];
        v79 = ((unsigned int)SBYTE1(v191) - 0x61C8864680B583EBLL + (v78 << 12) +
               (v78 >> 4)) ^
              v78;
        v200[0] = v79;
        if (v192[8] == 1) {
          v80 =
              ((v79 << 12) - 0x61C8864680B583EBLL + (v79 >> 4) +
               *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                          64) +
                                               8LL * *(unsigned __int16*)v192) +
                                    16LL)) ^
              v79;
          v81 = (*(unsigned __int16*)v192 - 0x61C8864680B583EBLL + (v80 << 12) +
                 (v80 >> 4)) ^
                v80;
          v82 =
              (v192[2] - 0x61C8864680B583EBLL + (v81 << 12) + (v81 >> 4)) ^ v81;
          v83 = 0x9E3779B97F4B6254LL;
          if ((v192[3] & 8) == 0) {
            v83 = 0x9E3779B97F4BBB5ELL;
          }
          v79 = (v83 + (v82 << 12) + (v82 >> 4)) ^ v82;
          v200[0] = v79;
        }
        if (v193 != 0) {
          v79 ^= (v79 << 12) - 0x61C8864680B583EBLL + (v79 >> 4) +
                 *(unsigned __int16*)(v193 + 16);
          v200[0] = v79;
        }
        v84 = *(unsigned __int64**)v194;
        if (*(_QWORD*)v194 != 0) {
          v84 = (unsigned __int64*)(*(__int64 (**)(_QWORD))(
              **(_QWORD**)v194 + 32LL))(*(_QWORD*)v194);
          v79 = ((unsigned int)v84 - 0x61C8864680B583EBLL + (v200[0] << 12) +
                 (v200[0] >> 4)) ^
                v200[0];
          v200[0] = v79;
        }
        if (v194[12] == 1) {
          v79 ^= (v79 << 12) - 0x61C8864680B583EBLL + (v79 >> 4) +
                 *(unsigned int*)&v194[8];
          v200[0] = v79;
        }
        if (v199 == 1) {
          v85 = ((unsigned int)SBYTE13(v195) - 0x61C8864680B583EBLL +
                 ((((v79 << 12) - 0x61C8864680B583EBLL + (v79 >> 4) +
                    (unsigned int)SBYTE12(v195)) ^
                   v79)
                  << 12) +
                 ((((v79 << 12) - 0x61C8864680B583EBLL + (v79 >> 4) +
                    (unsigned int)SBYTE12(v195)) ^
                   v79) >>
                  4)) ^
                ((v79 << 12) - 0x61C8864680B583EBLL + (v79 >> 4) +
                 (unsigned int)SBYTE12(v195)) ^
                v79;
          v200[0] = ((unsigned __int8)v195 - 0x61C8864680B583EBLL +
                     (v85 << 12) + (v85 >> 4)) ^
                    v85;
          if (BYTE5(v195) != 0) {
            v86 = game_UnitPool_Get((char*)&v195 + 5);
          }
          else {
            v86 = 0;
          }
          v84 = game_map_f0ee60(v200, v86);
        }
        v88 = *(_QWORD*)(a1 + 16);
        v87 = *(_QWORD*)(a1 + 24);
        if (v88 == v87) {
          v89 = *(_QWORD*)(a1 + 16);
        }
        else {
          v89 = *(_QWORD*)(a1 + 16);
          while (*(_QWORD*)(v89 + 120) != v200[0]) {
            v89 += 136;
            if (v89 == v87) {
              goto LABEL_168;
            }
          }
        }
        if (v89 != v87) {
          *(_DWORD*)(v89 + 132) &= ~1u;
          goto LABEL_127;
        }
      LABEL_168:
        v90 = v192[8];
        v185 = v187;
        v186 = (__int64)v188;
        v91 = v192[8] != 0 ? *(_QWORD*)v192 : v176 & 0xFFFFFFFFFFFFFF00LL;
        v176 = v91;
        v92 = v189;
        v93 = BYTE1(v189);
        v94 = BYTE2(v189);
        v95 = BYTE3(v189);
        v96 = v190;
        v97 = v191;
        v98 = BYTE1(v191);
        v99 = BYTE2(v191);
        v100 = HIBYTE(v191);
        v101 = v199;
        v182 = v193;
        v183 = *(_QWORD*)v194;
        v184 = *(_DWORD*)&v194[8];
        if (v199 != 0) {
          v102 = v195;
          v174 = *(_DWORD*)((char*)&v195 + 1);
          v172 = BYTE5(v195);
          v180 = *(_DWORD*)((char*)&v195 + 6);
          v181 = WORD5(v195);
          v170 = BYTE12(v195);
          v167 = BYTE14(v195);
          v169 = BYTE13(v195);
          v165 = HIBYTE(v195);
          v177 = v196;
          v178 = v197;
          v179 = v198;
        }
        else {
          v102 = 0;
        }
        v103 = v194[12];
        v104 = v200[0];
        v105 = *(_QWORD*)(a1 + 32);
        if (v87 >= v105) {
          break;
        }
        v106 = v187;
        v107 = (__int64)v188;
        *(_BYTE*)(v87 + 16) = v189;
        *(_BYTE*)(v87 + 17) = v93;
        *(_BYTE*)(v87 + 18) = v94;
        *(_BYTE*)(v87 + 19) = v95;
        *(_QWORD*)(v87 + 24) = v96;
        *(_BYTE*)(v87 + 32) = v97;
        *(_BYTE*)(v87 + 33) = v98;
        *(_BYTE*)(v87 + 34) = v99;
        *(_BYTE*)(v87 + 35) = v100;
        *(_BYTE*)(v87 + 36) = 0;
        *(_BYTE*)(v87 + 44) = 0;
        *(_QWORD*)v87 = v106;
        *(_QWORD*)(v87 + 8) = v107;
        if (v90 != 0) {
          *(_BYTE*)(v87 + 44) = 1;
          *(_QWORD*)(v87 + 36) = v176;
        }
        v54 = v164;
        *(_BYTE*)(v87 + 68) = v103;
        *(_BYTE*)(v87 + 72) = 0;
        *(_BYTE*)(v87 + 112) = 0;
        *(_QWORD*)(v87 + 48) = v182;
        *(_QWORD*)(v87 + 56) = v183;
        *(_DWORD*)(v87 + 64) = v184;
        if (v101 != 0) {
          *(_BYTE*)(v87 + 72) = v102;
          *(_BYTE*)(v87 + 112) = 1;
          *(_DWORD*)(v87 + 73) = v174;
          *(_WORD*)(v87 + 82) = v181;
          *(_BYTE*)(v87 + 77) = v172;
          *(_DWORD*)(v87 + 78) = v180;
          *(_BYTE*)(v87 + 84) = v170;
          *(_BYTE*)(v87 + 86) = v167;
          *(_BYTE*)(v87 + 85) = v169;
          *(_BYTE*)(v87 + 87) = v165;
          *(_QWORD*)(v87 + 88) = v177;
          *(_QWORD*)(v87 + 96) = v178;
          *(_BYTE*)(v87 + 104) = v179;
        }
        v60 = v162;
        *(_QWORD*)(v87 + 120) = v104;
        *(_QWORD*)(v87 + 128) = 0;
        v61 = v87 + 136;
      LABEL_126:
        *(_QWORD*)(a1 + 24) = v61;
      LABEL_127:
        v59 += 8;
        if (v59 == v60) {
          goto LABEL_114;
        }
      }
      v108 = v87 - v88;
      v109 = 1 - 0xF0F0F0F0F0F0F0FLL * ((__int64)(v87 - v88) >> 3);
      if (v109 > 0x1E1E1E1E1E1E1E1LL) {
        GameRoutine_1023940(v84, v190);
      }
      v110 = 0xF0F0F0F0F0F0F0F1LL * ((__int64)(v105 - v88) >> 3);
      if (2 * v110 > v109) {
        v109 = 2 * v110;
      }
      if (v110 >= 0xF0F0F0F0F0F0F0LL) {
        v111 = 0x1E1E1E1E1E1E1E1LL;
      }
      else {
        v111 = v109;
      }
      v161 = v111;
      if (v111 != 0) {
        if (v111 > 0x1E1E1E1E1E1E1E1LL) {
          GameRoutine_60a210(v84);
        }
        v112 = v102;
        v113 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 136 * v111, 16, 0);
        v96 = v190;
        v95 = BYTE3(v189);
        v90 = v192[8];
        v93 = BYTE1(v189);
        v94 = BYTE2(v189);
        v102 = v112;
        v103 = v194[12];
        v92 = v189;
      }
      else {
        v113 = 0;
      }
      v114 = v113 + v108;
      *(_BYTE*)(v114 + 16) = v92;
      *(_BYTE*)(v114 + 17) = v93;
      *(_BYTE*)(v114 + 18) = v94;
      *(_BYTE*)(v114 + 19) = v95;
      *(_QWORD*)(v114 + 24) = v96;
      *(_BYTE*)(v114 + 32) = v97;
      *(_BYTE*)(v114 + 33) = v98;
      *(_BYTE*)(v114 + 34) = v99;
      *(_BYTE*)(v114 + 35) = v100;
      *(_BYTE*)(v114 + 36) = 0;
      *(_BYTE*)(v114 + 44) = 0;
      *(_QWORD*)v114 = v185;
      *(_QWORD*)(v114 + 8) = v186;
      if (v90 != 0) {
        a1 = v160;
        v54 = v164;
        *(_BYTE*)(v114 + 44) = 1;
        *(_BYTE*)(v114 + 68) = v103;
        *(_BYTE*)(v114 + 72) = 0;
        *(_BYTE*)(v114 + 112) = 0;
        *(_QWORD*)(v114 + 36) = v176;
        *(_QWORD*)(v114 + 48) = v182;
        *(_QWORD*)(v114 + 56) = v183;
        *(_DWORD*)(v114 + 64) = v184;
        if (v101 == 0) {
        LABEL_192:
          v115 = *(_QWORD*)(a1 + 16);
          v116 = *(_QWORD*)(a1 + 24);
          v60 = v162;
          *(_QWORD*)(v114 + 120) = v104;
          *(_QWORD*)(v114 + 128) = 0;
          v117 = v114 + v115 - v116;
          if (v115 != v116) {
            v118 = 0;
            do {
              v120 = v115 + v118;
              v121 = v117 + v118;
              v122 = *(_QWORD*)(v115 + v118 + 8);
              *(_QWORD*)v121 = *(_QWORD*)(v115 + v118);
              *(_QWORD*)(v121 + 8) = v122;
              *(_BYTE*)(v121 + 16) = *(_BYTE*)(v115 + v118 + 16);
              *(_BYTE*)(v121 + 17) = *(_BYTE*)(v115 + v118 + 17);
              *(_BYTE*)(v121 + 18) = *(_BYTE*)(v115 + v118 + 18);
              *(_BYTE*)(v121 + 19) = *(_BYTE*)(v115 + v118 + 19);
              *(_QWORD*)(v121 + 24) = *(_QWORD*)(v115 + v118 + 24);
              *(_BYTE*)(v121 + 32) = *(_BYTE*)(v115 + v118 + 32);
              *(_BYTE*)(v121 + 33) = *(_BYTE*)(v115 + v118 + 33);
              *(_BYTE*)(v121 + 34) = *(_BYTE*)(v115 + v118 + 34);
              v123 = *(_BYTE*)(v115 + v118 + 35);
              *(_BYTE*)(v121 + 36) = 0;
              *(_BYTE*)(v121 + 44) = 0;
              *(_BYTE*)(v121 + 35) = v123;
              if (*(_BYTE*)(v115 + v118 + 44) == 1) {
                *(_QWORD*)(v121 + 36) = 0;
                v124 = *(_QWORD*)(v120 + 36);
                *(_BYTE*)(v121 + 44) = 1;
                *(_QWORD*)(v121 + 36) = v124;
              }
              v125 = *(_QWORD*)(v120 + 48);
              v126 = *(_QWORD*)(v120 + 56);
              v127 = *(_QWORD*)(v120 + 61);
              *(_BYTE*)(v121 + 112) = 0;
              *(_QWORD*)(v121 + 61) = v127;
              *(_QWORD*)(v121 + 48) = v125;
              *(_QWORD*)(v121 + 56) = v126;
              *(_BYTE*)(v121 + 72) = 0;
              if (*(_BYTE*)(v120 + 112) == 1) {
                v128 = *(_DWORD*)(v115 + v118 + 72);
                *(_BYTE*)(v121 + 76) = *(_BYTE*)(v115 + v118 + 76);
                *(_DWORD*)(v121 + 72) = v128;
                v129 = v117 + v118;
                *(_BYTE*)(v129 + 77) = *(_BYTE*)(v115 + v118 + 77);
                v130 = *(_DWORD*)(v115 + v118 + 78);
                *(_WORD*)(v129 + 82) = *(_WORD*)(v115 + v118 + 82);
                *(_DWORD*)(v129 + 78) = v130;
                *(_BYTE*)(v129 + 84) = *(_BYTE*)(v115 + v118 + 84);
                *(_BYTE*)(v129 + 85) = *(_BYTE*)(v115 + v118 + 85);
                *(_BYTE*)(v129 + 86) = *(_BYTE*)(v115 + v118 + 86);
                *(_BYTE*)(v129 + 87) = *(_BYTE*)(v115 + v118 + 87);
                v131 = *(_QWORD*)(v115 + v118 + 88);
                v132 = *(_QWORD*)(v115 + v118 + 96);
                v133 = *(_BYTE*)(v115 + v118 + 104);
                *(_BYTE*)(v121 + 112) = 1;
                *(_BYTE*)(v129 + 104) = v133;
                *(_QWORD*)(v129 + 88) = v131;
                *(_QWORD*)(v129 + 96) = v132;
              }
              v119 = v117 + v118;
              v118 += 136;
              *(_QWORD*)(v119 + 120) = *(_QWORD*)(v120 + 120);
              *(_DWORD*)(v119 + 128) = *(_DWORD*)(v120 + 128);
              *(_DWORD*)(v119 + 132) = *(_DWORD*)(v120 + 132);
            } while (v120 + 136 != v116);
            v115 = *(_QWORD*)(a1 + 16);
          }
          v61 = v114 + 136;
          *(_QWORD*)(a1 + 16) = v117;
          *(_QWORD*)(a1 + 24) = v114 + 136;
          *(_QWORD*)(a1 + 32) = v113 + 136 * v161;
          if (v115 != 0) {
            v134 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v134 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v134);
          }
          goto LABEL_126;
        }
      }
      else {
        a1 = v160;
        v54 = v164;
        *(_BYTE*)(v114 + 72) = 0;
        v135 = v193;
        v136 = *(_QWORD*)v194;
        *(_BYTE*)(v114 + 112) = 0;
        *(_QWORD*)(v114 + 48) = v135;
        *(_QWORD*)(v114 + 56) = v136;
        *(_QWORD*)(v114 + 61) = *(_QWORD*)&v194[5];
        if (v101 == 0) {
          goto LABEL_192;
        }
      }
      *(_BYTE*)(v114 + 72) = v102;
      *(_BYTE*)(v114 + 112) = 1;
      *(_DWORD*)(v114 + 73) = v174;
      *(_WORD*)(v114 + 82) = v181;
      *(_BYTE*)(v114 + 77) = v172;
      *(_DWORD*)(v114 + 78) = v180;
      *(_BYTE*)(v114 + 84) = v170;
      *(_BYTE*)(v114 + 86) = v167;
      *(_BYTE*)(v114 + 85) = v169;
      *(_BYTE*)(v114 + 87) = v165;
      *(_QWORD*)(v114 + 88) = v177;
      *(_QWORD*)(v114 + 96) = v178;
      *(_BYTE*)(v114 + 104) = v179;
      goto LABEL_192;
    }
  LABEL_19:
    v12 = *(_QWORD*)(a1 + 16);
    v11 = *(_QWORD*)(a1 + 24);
    if (v11 == v12) {
      goto LABEL_251;
    }
    if (*(int*)(a1 + 8) >= 1) {
      v13 = 0;
      v14 = GameData_212c878[0];
      v175 = GameData_212d238[0] + 16;
      v173 = GameData_212da50[0] + 2;
      v171 = GameData_212d258[0] + 2;
      v15 = fw_memory_g_heap_manager_ptr;
      while (1) {
        v16 = v12 + 136 * v13;
        if ((*(_BYTE*)(v16 + 132) & 2) != 0) {
          goto LABEL_43;
        }
        std___1_to_string_1a0a790((void*)(&v187), (unsigned int)v13);
        if ((v187 & 1) != 0 && v189 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
            v18 = 128;
          }
          else {
            v18 = 56;
          }
          *(__n128*)&v17 =
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 + v18);
        }
        v19 = *(_QWORD*)(v16 + 8);
        if (v19 == 0) {
          goto LABEL_41;
        }
        v20 = *(_QWORD*)(v19 + 392);
        if (v20 != 0) {
          if ((*(_BYTE*)(v19 + 417) & 0x1C) != 0) {
            goto LABEL_41;
          }
          v21 = *(_QWORD*)(v16 + 24);
          if ((*(float (**)(__int64, long double))(
                  *(_QWORD*)(v19 + 152) + 16LL))(v19 + 152, v17) <= 0.0 ||
              v21 == 0) {
            goto LABEL_41;
          }
          v20 = *(_QWORD*)(v21 + 392);
          if (v20 != 0) {
            break;
          }
        }
      LABEL_42:
        *(_DWORD*)(v16 + 128) = v20;
        --*(_DWORD*)(v160 + 8);
        *(_DWORD*)(v16 + 132) |= 2u;
        v12 = *(_QWORD*)(v160 + 16);
        v11 = *(_QWORD*)(v160 + 24);
      LABEL_43:
        ++v13;
        v25 = 0xF0F0F0F0F0F0F0F1LL * ((v11 - v12) >> 3);
        if (v25 <= v13) {
          a1 = v160;
          if (v11 != v12) {
            goto LABEL_221;
          }
          goto LABEL_251;
        }
        a1 = v160;
        if (*(int*)(v160 + 8) < 1) {
          goto LABEL_218;
        }
      }
      if ((*(_BYTE*)(v21 + 417) & 0x1C) == 0 &&
          (*(float (**)(__int64))(*(_QWORD*)(v21 + 152) + 16LL))(v21 + 152) >
              0.0) {
        v23 = *(__int16*)(v21 + 492);
        if (*(_BYTE*)(v16 + 68) == 1) {
          v24 = v23 - *(_DWORD*)(v16 + 64);
        }
        else {
          v168 = *(__int16*)(v21 + 492);
          if (*(_BYTE*)(v16 + 44) == 1 &&
              *(_BYTE*)((v26 =
                             *(_QWORD*)(*(_QWORD*)(*v14 + 64) +
                                        8LL * *(unsigned __int16*)(v16 + 36))) +
                        72) == 14) {
            v24 = *(__int16*)(v21 + 492);
            if (*(_BYTE*)(v26 + 73) == 2) {
              v24 = *(unsigned __int8*)(v26 + 88) + v23;
            }
          }
          else {
            Image_72add0(*GameData_212ce98[0], v19,
                         (unsigned int)*(char*)(v16 + 16),
                         (unsigned int)*(char*)(v16 + 17));
            GameRoutine_790080(&v187);
            v27 = *(char*)(v16 + 16);
            v28 = *(char*)(v16 + 17);
            v29 = *v14;
            v30 = (_BYTE*)(v19 + 871);
            v31 = 5;
            while (1) {
              if (*(_WORD*)(v30 - 43) != 0 && (*(v30 - 40) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v29 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v30 -
                                                                          43)) +
                                      72LL) < 8u) {
                LODWORD(v31) = v31 - 5;
                goto LABEL_77;
              }
              if (*(_WORD*)(v30 - 35) != 0 && (*(v30 - 32) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v29 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v30 -
                                                                          35)) +
                                      72LL) < 8u) {
                LODWORD(v31) = v31 - 4;
                goto LABEL_77;
              }
              if (*(_WORD*)(v30 - 27) != 0 && (*(v30 - 24) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v29 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v30 -
                                                                          27)) +
                                      72LL) < 8u) {
                LODWORD(v31) = v31 - 3;
                goto LABEL_77;
              }
              if (*(_WORD*)(v30 - 19) != 0 && (*(v30 - 16) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v29 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v30 -
                                                                          19)) +
                                      72LL) < 8u) {
                LODWORD(v31) = v31 - 2;
                goto LABEL_77;
              }
              if (*(_WORD*)(v30 - 11) != 0 && (*(v30 - 8) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v29 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v30 -
                                                                          11)) +
                                      72LL) < 8u) {
                break;
              }
              if (*(_WORD*)(v30 - 3) != 0 && (*v30 & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v29 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v30 -
                                                                          3)) +
                                      72LL) < 8u) {
                goto LABEL_77;
              }
              v30 += 48;
              v31 += 6;
              if (v31 == 35) {
                LODWORD(v31) = -1;
                goto LABEL_77;
              }
            }
            LODWORD(v31) = v31 - 1;
          LABEL_77:
            if (HIBYTE(v206) != 0) {
              v166 = *(char*)(v16 + 16);
              v163 = *(char*)(v16 + 17);
              GameRoutine_7992e0(&v189);
              GameRoutine_7992e0(v201);
              GameRoutine_7992e0(v203);
              GameRoutine_7992e0(v204);
              v205 = 0;
              v206 = 0;
              v207[0] = 0;
              *(_QWORD*)((char*)v207 + 6) = 0;
              BattleArea_8b9d00(&v208);
              v28 = v163;
              v27 = v166;
              v32 = HIBYTE(v206) == 0;
            }
            else {
              v32 = true;
            }
            v33 = *(_DWORD*)(v19 + 592);
            *(_QWORD*)&v192[4] = v19;
            v197 = __PAIR64__(v28, v27);
            v196 = __PAIR64__(v28, v27);
            *(_DWORD*)v194 = v31;
            v198 = v33;
            v34 = *(_QWORD*)(v16 + 48);
            if (!v32) {
              GameRoutine_7992e0(&v189);
              GameRoutine_7992e0(v201);
              GameRoutine_7992e0(v203);
              GameRoutine_7992e0(v204);
              v205 = 0;
              v207[0] = 0;
              *(_QWORD*)((char*)v207 + 6) = 0;
              v206 = 0;
              BattleArea_8b9d00(&v208);
            }
            *(_QWORD*)&v195 = v34;
            if (v34 != 0) {
              v35 = *(_QWORD*)(v34 + 576);
              if (v35 != 0) {
                *(_QWORD*)&v194[4] = 0;
                v36 = *(unsigned __int16*)(v35 + 16);
                *(_DWORD*)&v194[8] = 1;
                *(_WORD*)&v194[4] = v36;
                if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8 * v36) +
                              73LL) == 17) {
                  nn_os_LockMutex(&game_g_random_mutex);
                  v37 = game_map_MapRandom_instance__ptr[0];
                  v38 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                  v39 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                  v40 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                  *((_DWORD*)v37 + 1) = v38;
                  v41 = (v40 >> 8) ^ (v39 >> 19) ^ v40 ^ v39;
                  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v37) = v39;
                  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v37 + 4) =
                      v41;
                  nn_os_UnlockMutex(&game_g_random_mutex);
                  *(_DWORD*)&v194[8] =
                      *(_DWORD*)&v194[8] & 0xFFFFC00F |
                      (16 *
                       (((16 * (v41 - 1000 * ((v41 & 0x7FFFFFFFu) / 0x3E8)) +
                          16) >>
                         4) &
                        0x3FF));
                }
              }
            }
            v42 = *(_QWORD*)(v16 + 56);
            if (HIBYTE(v206) != 0) {
              GameRoutine_7992e0(&v189);
              GameRoutine_7992e0(v201);
              GameRoutine_7992e0(v203);
              GameRoutine_7992e0(v204);
              v205 = 0;
              v206 = 0;
              v207[0] = 0;
              *(_QWORD*)((char*)v207 + 6) = 0;
              BattleArea_8b9d00(&v208);
            }
            *((_QWORD*)&v195 + 1) = v42;
            if (v42 != 0) {
              v43 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v42 + 584LL))(
                  v42, *(_QWORD*)&v192[4]);
              if (v43 != 0) {
                *(_QWORD*)&v194[4] = 0;
                v44 = *(unsigned __int16*)(v43 + 16);
                *(_DWORD*)&v194[8] = 1;
                *(_WORD*)&v194[4] = v44;
                if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8 * v44) +
                              73LL) == 17) {
                  nn_os_LockMutex(&game_g_random_mutex);
                  v45 = game_map_MapRandom_instance__ptr[0];
                  v46 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                  v47 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                  v48 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                  *((_DWORD*)v45 + 1) = v46;
                  v49 = (v48 >> 8) ^ (v47 >> 19) ^ v48 ^ v47;
                  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v45) = v47;
                  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v45 + 4) =
                      v49;
                  nn_os_UnlockMutex(&game_g_random_mutex);
                  *(_DWORD*)&v194[8] =
                      *(_DWORD*)&v194[8] & 0xFFFFC00F |
                      (16 *
                       (((16 * (v49 - 1000 * ((v49 & 0x7FFFFFFFu) / 0x3E8)) +
                          16) >>
                         4) &
                        0x3FF));
                }
              }
            }
            if (*(_BYTE*)(v16 + 112) == 1) {
              BattleInfo_790b00(&v187, v16 + 72);
            }
            else {
              BattleInfo_790800(&v187, v21, (unsigned int)*(char*)(v16 + 32),
                                (unsigned int)*(char*)(v16 + 33));
            }
            v24 = v168;
            if (*(_BYTE*)(v16 + 44) == 1) {
              *(_QWORD*)&v194[4] = *(_QWORD*)(v16 + 36);
            }
            LODWORD(v207[0]) |= 1u;
            game_map_790ba0(&v187);
            HIBYTE(v206) |= 1u;
            if (v202 != 0 && v21 == v202) {
              v50 = (_WORD*)(((__int128*)0x10LL) + 12);
              if (v205 > 0) {
                v50 = (__int16*)&v204
                    [64 * (unsigned __int64)(unsigned int)(v205 - 1) + 796];
              }
              v24 = *v50;
            }
            v187 = v175;
            v208 = v173;
            if (v209 != 0) {
              (*(void (**)(__int64))(*(_QWORD*)v209 + 8LL))(v209);
              v209 = 0;
            }
            v188 = v171;
            BattleSide_Destructor(v204);
            BattleSide_Destructor(v203);
            BattleSide_Destructor(v201);
            BattleSide_Destructor(&v189);
            Image_72af70(*GameData_212ce98[0]);
            v14 = GameData_212c878[0];
          }
        }
        LOBYTE(v187) = 0;
        v51 = game_Unit_GetParam(v21, &v187, 1);
        if (v51 >= v24) {
          LODWORD(v20) = v24;
        }
        else {
          LODWORD(v20) = v51;
        }
        if (v24 < 0) {
          LODWORD(v20) = 0;
        }
        goto LABEL_42;
      }
    LABEL_41:
      LODWORD(v20) = 0;
      goto LABEL_42;
    }
    v25 = 0xF0F0F0F0F0F0F0F1LL * ((v11 - v12) >> 3);
  LABEL_218:
    if (v11 != v12) {
    LABEL_221:
      if (v25 != 0) {
        v141 = (char*)(v12 + 132);
        while (1) {
          v142 = *v141;
          v141 += 136;
          if ((v142 & 3) == 0) {
            break;
          }
          if (--v25 == 0) {
            goto LABEL_225;
          }
        }
      }
      else {
      LABEL_225:
        v143 = v12 + 136;
        while ((*(_BYTE*)(v143 - 4) & 1) == 0) {
          v10 = v143 == v11;
          v143 += 136;
          if (v10) {
            goto LABEL_251;
          }
        }
        v144 = v143 - 136;
        if (v143 - 136 != v11 && v143 != v11) {
          do {
            if ((*(_BYTE*)(v143 + 132) & 1) == 0) {
              v150 = *(_QWORD*)(v143 + 8);
              *(_QWORD*)v144 = *(_QWORD*)v143;
              *(_QWORD*)(v144 + 8) = v150;
              *(_DWORD*)(v144 + 16) = *(_DWORD*)(v143 + 16);
              *(_QWORD*)(v144 + 24) = *(_QWORD*)(v143 + 24);
              *(_DWORD*)(v144 + 32) = *(_DWORD*)(v143 + 32);
              if (*(unsigned __int8*)(v144 + 44) ==
                  *(unsigned __int8*)(v143 + 44)) {
                if (*(_BYTE*)(v144 + 44) != 0) {
                  v151 = *(_WORD*)(v143 + 36);
                  *(_BYTE*)(v144 + 38) = *(_BYTE*)(v143 + 38);
                  *(_WORD*)(v144 + 36) = v151;
                  *(_BYTE*)(v144 + 39) = *(_BYTE*)(v143 + 39);
                  *(_DWORD*)(v144 + 40) = *(_DWORD*)(v143 + 40);
                }
              }
              else if (*(_BYTE*)(v144 + 44) != 0) {
                *(_BYTE*)(v144 + 44) = 0;
              }
              else {
                *(_QWORD*)(v144 + 36) = 0;
                v152 = *(_QWORD*)(v143 + 36);
                *(_BYTE*)(v144 + 44) = 1;
                *(_QWORD*)(v144 + 36) = v152;
              }
              v153 = *(_QWORD*)(v143 + 48);
              v154 = *(_QWORD*)(v143 + 56);
              *(_QWORD*)(v144 + 61) = *(_QWORD*)(v143 + 61);
              *(_QWORD*)(v144 + 48) = v153;
              *(_QWORD*)(v144 + 56) = v154;
              if (*(unsigned __int8*)(v144 + 112) ==
                  *(unsigned __int8*)(v143 + 112)) {
                if (*(_BYTE*)(v144 + 112) != 0) {
                  *(_QWORD*)(v144 + 72) = *(_QWORD*)(v143 + 72);
                  v155 = *(_QWORD*)(v143 + 80);
                  v156 = *(_QWORD*)(v143 + 88);
                  v157 = *(_QWORD*)(v143 + 96);
                  *(_BYTE*)(v144 + 104) = *(_BYTE*)(v143 + 104);
                  *(_QWORD*)(v144 + 88) = v156;
                  *(_QWORD*)(v144 + 96) = v157;
                  *(_QWORD*)(v144 + 80) = v155;
                }
              }
              else if (*(_BYTE*)(v144 + 112) != 0) {
                *(_BYTE*)(v144 + 112) = 0;
              }
              else {
                v145 = *(_DWORD*)(v143 + 72);
                *(_BYTE*)(v144 + 76) = *(_BYTE*)(v143 + 76);
                *(_DWORD*)(v144 + 72) = v145;
                *(_BYTE*)(v144 + 77) = *(_BYTE*)(v143 + 77);
                v146 = *(_DWORD*)(v143 + 78);
                *(_WORD*)(v144 + 82) = *(_WORD*)(v143 + 82);
                *(_DWORD*)(v144 + 78) = v146;
                *(_BYTE*)(v144 + 84) = *(_BYTE*)(v143 + 84);
                *(_BYTE*)(v144 + 85) = *(_BYTE*)(v143 + 85);
                *(_BYTE*)(v144 + 86) = *(_BYTE*)(v143 + 86);
                *(_BYTE*)(v144 + 87) = *(_BYTE*)(v143 + 87);
                v147 = *(_QWORD*)(v143 + 88);
                v148 = *(_QWORD*)(v143 + 96);
                v149 = *(_BYTE*)(v143 + 104);
                *(_BYTE*)(v144 + 112) = 1;
                *(_BYTE*)(v144 + 104) = v149;
                *(_QWORD*)(v144 + 88) = v147;
                *(_QWORD*)(v144 + 96) = v148;
              }
              *(_QWORD*)(v144 + 120) = *(_QWORD*)(v143 + 120);
              *(_QWORD*)(v144 + 128) = *(_QWORD*)(v143 + 128);
              v144 += 136;
            }
            v143 += 136;
          } while (v143 != v11);
          v11 = *(_QWORD*)(a1 + 24);
        }
        if (v144 != v11) {
          *(_QWORD*)(a1 + 24) = v144;
        }
      }
    }
  LABEL_251:
    *(_DWORD*)(a1 + 8) = 3;
  }
}

void game_1023ae0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6)
{
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
  int v21;
  __int64 v22;
  float32x4_t** v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  long double v32;
  __int128 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  bool v41;
  float v42;
  __int64* v43;
  float32x4_t v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  float v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64* v60;
  float32x4_t v61;
  __int64 v62;
  int v63;
  int v64;
  int v65;
  bool v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  bool v72;
  char v73;
  bool v74;
  __int64 v75;
  int v76;
  __int64 v78;
  char* v79;
  char* v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  float32x4_t v84;
  int8x16_t v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  float32x4_t* v92;
  float32x4_t* v93;
  float32x4_t v94;
  float32x4_t v95;
  int8x16_t v96;
  float v97;
  __int64 v98;
  __int64 v99;
  float v100;
  __int64 v101;
  void* v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  char v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  char* v113;
  __int64 v114;
  bool v115;
  int v116;
  float32x4_t v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  float32x4_t* v121;
  float32x4_t* v122;
  float32x4_t v123;
  float32x4_t v124;
  _QWORD* v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64 v128;
  char* v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  char* v133;
  __int64 v134;
  _QWORD* v135;
  _QWORD* v136;
  __int64 v137;
  unsigned __int64 v138;
  __int64* v139;
  __int64 v140;
  __int64 v141;
  char* v142;
  char* v143;
  unsigned __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  float v149;
  float v150;
  float* v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  __int64* v159;
  char* v160;
  __int64 v161;
  char* v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  char* v166;
  char* v167;
  __int64 v168;
  unsigned __int64 v169;
  __int64 v170;
  char* v171;
  char* v172;
  char* v173;
  char* v174;
  unsigned __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  float v179;
  float v180;
  float* v181;
  float v182;
  __int64 v183;
  float v184;
  float v185;
  float v186;
  float v187;
  float v188;
  float v189;
  char* v190;
  __int64 v191;
  char* v192;
  unsigned __int64 v193;
  __int64 v194;
  float v195;
  float v196;
  __int64 v197;
  char* v198;
  char* v199;
  __int64 v200;
  unsigned __int64 v201;
  __int64 v202;
  char* v203;
  char* v204;
  unsigned int v205;
  __int64 v206;
  __int64 v207;
  float v208;
  float v209;
  float* v210;
  float v211;
  float v212;
  float v213;
  float v214;
  float v215;
  float v216;
  float v217;
  char* v218;
  __int64 v219;
  char* v220;
  unsigned __int64 v221;
  __int64 v222;
  __int64 v223;
  char* v224;
  char* v225;
  __int64 v226;
  unsigned __int64 v227;
  __int64 v228;
  char* v229;
  unsigned int v230;
  char* v231;
  __int64* v232;
  __int64* v233;
  __int64 v234;
  unsigned __int64 v235;
  int v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  _BOOL4 v241;
  __int64 v242;
  float v243;
  __int64 v244;
  void* v245;
  float v246;
  __int64* v247;
  __int64* v248;
  int v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  unsigned __int64 v254;
  __int128 v255;
  __int64 v256;
  __int64 v257;
  unsigned __int64 v258;
  __int128 v259;
  int v260;
  int v261;
  __int64* v262;
  __int64* v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  unsigned __int64 v268;
  __int128 v269;
  __int64 v270;
  __int64 v271;
  unsigned __int64 v272;
  __int128 v273;
  int v274;
  int v275;
  __int64 v276;
  __int64 i;
  __int64 v278;
  __int64 v279;
  unsigned __int64 v280;
  __int128 v281;
  int v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  int v290;
  int v291;
  __int128 v292;
  float32x4_t v293;
  float32x4_t v294;
  float32x4_t v295;
  long double v296;
  __int128 v297;
  __int64 v298;
  void* v299;
  float v300;
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

  if ((*(_BYTE*)(a1 + 13) & 1) != 0 || *(_BYTE*)(a1 + 12) == 0) {
    return;
  }
  *(_BYTE*)(a1 + 12) = 0;
  memset(&v298, 0, 384, a4, a5, a6);
  v306 = 0;
  v307 = 0;
  v308 = 0;
  v309 = 0;
  v310 = 0;
  v311 = 0;
  v304 = 0x7F7FFFFF7F7FFFFFLL;
  v305 = 0x7F7FFFFF7F7FFFFFLL;
  GameRoutine_1025a10(a1 + 16, &v298);
  v7 = fw_memory_g_heap_manager_ptr;
  if (v309 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v8);
  }
  if (v306 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v9);
  }
  if (v303 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v10);
  }
  if (v302 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v11);
  }
  if (v301 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v12);
  }
  v13 = *(_QWORD*)(a1 + 344);
  if ((unsigned __int64)(*(_QWORD*)(a1 + 360) - v13) <= 0x7FF) {
    v14 = *(_QWORD*)(a1 + 352) - v13;
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         2048, 16, 0);
    memcpy(v15, v13, v14);
    *(_QWORD*)(a1 + 344) = v15;
    *(_QWORD*)(a1 + 352) = v15 + v14;
    *(_QWORD*)(a1 + 360) = v15 + 2048;
    if (v13 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
    }
  }
  v17 = *(_QWORD*)(a1 + 368);
  if ((unsigned __int64)(*(_QWORD*)(a1 + 384) - v17) <= 0x7FF) {
    v18 = *(_QWORD*)(a1 + 376) - v17;
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         2048, 16, 0);
    memcpy(v19, v17, v18);
    *(_QWORD*)(a1 + 368) = v19;
    *(_QWORD*)(a1 + 376) = v19 + v18;
    *(_QWORD*)(a1 + 384) = v19 + 2048;
    if (v17 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
    }
  }
  v299 = &GameData_1af239d;
  v298 = game_HashString(&GameData_1af239d);
  v21 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v22 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v298);
    if (v22 != 0) {
      v21 = *(_DWORD*)(v22 + 32);
    }
    else {
      v21 = 0;
    }
  }
  *(_DWORD*)(a1 + 16) = v21;
  v23 = (float32x4_t**)GameData_212dc38[0];
  GameRoutine_edf510((void*)((__int64)&v298),
                     *(_QWORD*)GameData_212dc38[0] + 16LL);
  memcpy(a1 + 32, &v298, 240);
  v24 = GameData_212dbb8[0];
  v25 = fw_memory_g_heap_manager_ptr;
  if (*(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 136LL) == 1) {
    v26 = 2;
  }
  else {
    v26 = 1;
  }
  v27 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       128, 16, 0);
  v28 = game_170ecf0(v27, v26);
  v34 = *(_QWORD*)(a1 + 272);
  *(_QWORD*)(a1 + 272) = v27;
  if (v34 != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
      v35 = 56;
    }
    *(__n128*)&v32 = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v25 + v35);
  }
  v36 = *(_QWORD*)v24;
  v37 = *(_QWORD*)(*(_QWORD*)v24 + 72LL);
  if ((*(_BYTE*)(*(_QWORD*)v24 + 64LL) & 1) == 0) {
    v37 = *(_BYTE*)(*(_QWORD*)v24 + 64LL) >> 1;
  }
  if (v37 == 10 && ((*(_BYTE*)(*(_QWORD*)v24 + 64LL) & 1) != 0
                        ? (v38 = *(__int64**)(v36 + 80))
                        : (v38 = (__int64*)(v36 + 65)),
                    (v39 = *v38, v40 = *((unsigned __int16*)v38 + 4),
                     v39 == *(_QWORD*)"Hub_000_A1")
                        ? (v41 = v40 == *(unsigned __int16*)"A1")
                        : (v41 = false),
                    v41) ||
      *(_DWORD*)(v36 + 136) == 0 && (*(_BYTE*)(a1 + 15) & 1) == 0) {
    v299 = &GameData_1ac40f5;
    v28 = game_HashString(&GameData_1ac40f5);
    v42 = 0.0;
    v298 = v28;
    if (game_GameModeData_instance_ != 0) {
      v28 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v298);
      if (v28 != 0) {
        v42 = (float)*(int*)(v28 + 32);
      }
    }
    *(float*)(a1 + 328) = v42 * v42;
    *(float*)(a1 + 332) = v42 * v42;
    *(float*)(a1 + 336) = (float)(v42 + 0x1.4000000000000p+5) *
                          (float)(v42 + 0x1.4000000000000p+5);
    *(float*)&v32 = (float)(v42 + 0x1.9000000000000p+6) *
                    (float)(v42 + 0x1.9000000000000p+6);
    *(_DWORD*)(a1 + 340) = LODWORD(v32);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v28 = __cxa_guard_acquire(&GameData_21a6130);
    if ((_DWORD)v28 != 0) {
      v289 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v289;
      v28 = __cxa_guard_release(&GameData_21a6130);
    }
  }
  v43 = GameData_212d458[0];
  if (*(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 32LL) != 0) {
    v44 = (*v23)[2];
    LANES128(v44).n128_u32[3] = 0;
    goto LABEL_74;
  }
  v44 = COERCE_AS(float32x4_t, GameData_21a6120);
  v45 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v45 != 0) {
    v292 = GameData_21a6120;
    v23 = *(float32x4_t***)(*GameData_212d458[0] + 72);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16), 1u,
                              memory_order_relaxed);
    v46 = std___1___shared_weak_count_lock(v45);
    *(__n128*)&v32 = std___1___shared_weak_count___release_weak(v45);
    if (v46 != 0 && v23 != nullptr) {
      v44 = *(float32x4_t*)(LANES128(v23[3][1]).n128_u64[0] + 560);
      LANES128(v44).n128_u32[3] = 0;
    LABEL_72:
      if (atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v293 = v44;
        (*(void (**)(__int64, long double))(*(_QWORD*)v46 + 16LL))(v46, v32);
        *(__n128*)&v32 = std___1___shared_weak_count___release_weak(v46);
        v44 = v293;
      }
      goto LABEL_74;
    }
    v44 = COERCE_AS(float32x4_t, v292);
  }
  else {
    v46 = 0;
  }
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 40LL) == 1) {
    v44 = *(float32x4_t*)(*(_QWORD*)GameData_212c6a0[0] + 128LL);
    LANES128(v44).n128_u32[3] = 0;
  }
  if (v46 != 0) {
    goto LABEL_72;
  }
LABEL_74:
  v47 = *v43;
  v48 = *(_QWORD*)(a1 + 280);
  v49 = *(float*)(a1 + 332);
  v294 = v44;
  v50 = (__int64)(*(_QWORD*)(v47 + 32) - *(_QWORD*)(v47 + 24)) >> 4;
  if (v50 > 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a1 + 296) - v48) >> 3)) {
    if (v50 > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_532;
    }
    v51 = 3 * v50;
    v52 = *(_QWORD*)(a1 + 288) - v48;
    v23 = (float32x4_t**)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v50, 16, 0);
    v28 = memcpy(v23, v48, v52);
    v44 = v294;
    *(_QWORD*)(a1 + 280) = v23;
    *(_QWORD*)(a1 + 288) = (char*)v23 + v52;
    *(_QWORD*)(a1 + 296) = &v23[v51];
    if (v48 != 0) {
      v53 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v53 = 56;
      }
      *(__n128*)&v32 = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v53);
      v44 = v294;
    }
  }
  v54 = *(_QWORD*)(a1 + 304);
  v55 = (__int64)(*(_QWORD*)(v47 + 32) - *(_QWORD*)(v47 + 24)) >> 4;
  if (v55 > 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a1 + 320) - v54) >> 3)) {
    if (v55 <= 0xAAAAAAAAAAAAAAALL) {
      v56 = 3 * v55;
      v57 = *(_QWORD*)(a1 + 312) - v54;
      v23 = (float32x4_t**)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v55, 16, 0);
      v28 = memcpy(v23, v54, v57);
      v44 = v294;
      *(_QWORD*)(a1 + 304) = v23;
      *(_QWORD*)(a1 + 312) = (char*)v23 + v57;
      *(_QWORD*)(a1 + 320) = &v23[v56];
      if (v54 != 0) {
        v58 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v58 = 56;
        }
        *(__n128*)&v32 = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v58);
        v44 = v294;
      }
      goto LABEL_86;
    }
  LABEL_532:
    GameRoutine_1025e00(v28, v32);
  }
LABEL_86:
  v59 = *(__int64**)(v47 + 24);
  v60 = *(__int64**)(v47 + 32);
  if (v59 != v60) {
    v290 = *(_DWORD*)(*(_QWORD*)v24 + 136LL);
    v291 = *(_DWORD*)(*(_QWORD*)GameData_212dbc0[0] + 88LL);
    v61 = COERCE_AS(float32x4_t, GameData_1a82b70);
    while (1) {
      v62 = *v59;
      v63 = *(_DWORD*)(*v59 + 1112);
      v64 = *(_DWORD*)(*v59 + 184);
      v65 = *(_DWORD*)(*v59 + 1296);
      if ((v63 & 0xFFFFFFFE) == 2 || (*(_DWORD*)(*v59 + 184) & 0x100) != 0) {
        v67 = true;
        if ((v64 & 0x40) != 0) {
          goto LABEL_133;
        }
        goto LABEL_108;
      }
      if (*(_DWORD*)(*(_QWORD*)GameData_212dbc0[0] + 92LL) != v65) {
        break;
      }
      v68 = *(_QWORD*)(v62 + 24);
      if (v68 != 0) {
        v69 = *(_QWORD*)(*GameData_212eba8[0] + 160);
        v70 = *(_QWORD*)(*GameData_212eba8[0] + 168);
        if (v69 == v70) {
          break;
        }
        v71 = v69 + 8;
        do {
          v67 = *(_QWORD*)(v71 - 8) == v68;
          v72 = *(_QWORD*)(v71 - 8) == v68 || v71 == v70;
          v71 += 8;
        } while (!v72);
        if ((v64 & 0x40) != 0) {
          goto LABEL_133;
        }
      }
      else {
        v67 = false;
        if ((v64 & 0x40) != 0) {
          goto LABEL_133;
        }
      }
    LABEL_108:
      v73 = 1;
      if ((v64 & 0x100) != 0) {
        goto LABEL_134;
      }
      v74 = (v63 & 0xFFFFFFFE) == 2 || v63 == 1;
      v75 = *v59;
      v76 = v64 & 0x800800;
      if (v74 || v76 != 0) {
        goto LABEL_135;
      }
      if (*(_DWORD*)(*(_QWORD*)GameData_212dbc0[0] + 92LL) == v65) {
        v78 = *(_QWORD*)(v62 + 24);
        if (v78 != 0) {
          v79 = *(char**)(*GameData_212eba8[0] + 160);
          v80 = *(char**)(*GameData_212eba8[0] + 168);
          if (v79 != v80) {
            v81 = v80 - v79 - 8;
            if ((~(_BYTE)v81 & 0x18) != 0) {
              v82 = ((unsigned __int8)((unsigned int)v81 >> 3) + 1) & 3;
              do {
                v83 = *(_QWORD*)v79;
                v79 += 8;
                if (v83 == v78) {
                  goto LABEL_133;
                }
              } while (--v82 != 0);
            }
            if (v81 >= 0x18) {
              while (*(_QWORD*)v79 != v78 && *((_QWORD*)v79 + 1) != v78 &&
                     *((_QWORD*)v79 + 2) != v78 && *((_QWORD*)v79 + 3) != v78) {
                v79 += 32;
                if (v79 == v80) {
                  goto LABEL_125;
                }
              }
            LABEL_133:
              v73 = 1;
              goto LABEL_134;
            }
          }
        }
      }
    LABEL_125:
      if (v67) {
        goto LABEL_126;
      }
      v115 = v290 == 1 || v65 == v291;
      v116 = v115;
      if (!v115 && v291 == 2 && v65 == 1) {
        v117 = vaddq_f32(
            *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v62 + 24) + 16LL) + 560LL),
            v61);
        LANES128(v117).n128_u32[1] = vmuls_lane_f32(
            0x1.99999a0000000p-4,
            COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0]), 1);
        v32 = COERCE_LONG_DOUBLE(vmulq_f32(v117, v117));
        *(float32x2_t*)&v32 = vadd_f32(
            COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&v32,
                                                        *(int8x16_t*)&v32, 8u))
                                       .n128_u64[0]),
            *(float32x2_t*)&v32);
        *(float32x2_t*)&v33 =
            vpadd_f32(*(float32x2_t*)&v32, *(float32x2_t*)&v32);
        if (*(float*)&v33 < v49) {
          v118 = *(_QWORD*)(v62 + 88);
          v28 = *(_QWORD*)(v118 + 56);
          if (v28 == 0) {
            goto LABEL_184;
          }
          v297 = v33;
          v28 = std___1___shared_weak_count_lock(v28);
          v44 = v294;
          v33 = v297;
          v61 = COERCE_AS(float32x4_t, GameData_1a82b70);
          if (v28 == 0) {
            goto LABEL_184;
          }
          v119 = *(_QWORD*)(v118 + 48);
          v120 = v28;
          if (v119 != 0) {
            v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v119 + 56LL))(v119);
            v44 = v294;
            v33 = v297;
            v61 = COERCE_AS(float32x4_t, GameData_1a82b70);
            v23 = (float32x4_t**)v28;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v120 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v120 + 16LL))(v120);
            *(__n128*)&v32 = std___1___shared_weak_count___release_weak(v120);
            v44 = v294;
            v33 = v297;
            v61 = COERCE_AS(float32x4_t, GameData_1a82b70);
          }
          if (v119 == 0) {
          LABEL_184:
            v23 = (float32x4_t**)&GameData_2213f98;
          }
          v121 = *v23;
          v122 = v23[1];
          if (*v23 != v122) {
            do {
              v123 = *v121++;
              v124 = vaddq_f32(v123, v61);
              LANES128(v124).n128_u32[1] = vmuls_lane_f32(
                  0x1.99999a0000000p-4,
                  COERCE_AS(float32x2_t, LANES128(v124).n128_u64[0]), 1);
              v32 = COERCE_LONG_DOUBLE(vmulq_f32(v124, v124));
              *(float32x2_t*)&v32 = vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(*(int8x16_t*)&v32,
                                                 *(int8x16_t*)&v32, 8u))
                                .n128_u64[0]),
                  *(float32x2_t*)&v32);
              *(float32x2_t*)&v32 =
                  vpadd_f32(*(float32x2_t*)&v32, *(float32x2_t*)&v32);
              if (*(float*)&v32 < *(float*)&v33) {
                *(float*)&v33 = *(float*)&v32;
              }
            } while (v121 != v122);
          }
        }
        if (*(float*)&v33 < v49) {
          v75 = *v59;
          v73 = 0;
        LABEL_135:
          v84 = vsubq_f32(
              *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v75 + 24) + 16LL) + 560LL),
              v44);
          LANES128(v84).n128_u32[1] = vmuls_lane_f32(
              0x1.99999a0000000p-4,
              COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0]), 1);
          v85 = vmulq_f32(v84, v84);
          LANES128(v85).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v85, v85, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v85).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v61).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v85).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v85).n128_u64[0])))
                  .n64_u64[0];
          if (LANES128(v61).n128_f32[0] >= v49) {
            goto LABEL_147;
          }
          v86 = *(_QWORD*)(v75 + 88);
          v87 = *(_QWORD*)(v86 + 56);
          if (v87 != 0) {
            v295 = v61;
            v88 = std___1___shared_weak_count_lock(v87);
            v44 = v294;
            v61 = v295;
            if (v88 != 0) {
              v89 = *(_QWORD*)(v86 + 48);
              v90 = v88;
              if (v89 != 0) {
                v91 = (*(__int64 (**)(__int64))(*(_QWORD*)v89 + 56LL))(v89);
                v44 = v294;
                v61 = v295;
                v23 = (float32x4_t**)v91;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
                if (v89 == 0) {
                  goto LABEL_142;
                }
              LABEL_143:
                v92 = *v23;
                v93 = v23[1];
                if (*v23 != v93) {
                  do {
                    v94 = *v92++;
                    v95 = vsubq_f32(v94, v44);
                    LANES128(v95).n128_u32[1] = vmuls_lane_f32(
                        0x1.99999a0000000p-4,
                        COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0]), 1);
                    v96 = vmulq_f32(v95, v95);
                    LANES128(v96).n128_u64[0] =
                        LANES64_OF(
                            vadd_f32(
                                COERCE_AS(float32x2_t,
                                          LANES128_OF(vextq_s8(v96, v96, 8u))
                                              .n128_u64[0]),
                                COERCE_AS(float32x2_t,
                                          LANES128(v96).n128_u64[0])))
                            .n64_u64[0];
                    v97 = LANES64_OF(
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v96).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v96).n128_u64[0])))
                              .n64_f32[0];
                    if (v97 < LANES128(v61).n128_f32[0]) {
                      LANES128(v61).n128_f32[0] = v97;
                    }
                  } while (v92 != v93);
                }
              LABEL_147:
                v296 = *(long double*)&v61;
                v98 = *(_QWORD*)(*v59 + 24);
                v99 = *(_QWORD*)(v98 + 16);
                v100 = *(float*)(v98 + 544);
                v101 = *(_QWORD*)(v99 + 560);
                v102 = *(void**)(v99 + 568);
                v298 = v101;
                v299 = v102;
                v300 = v100 * 0x1.3333340000000p+0;
                v28 = nn_g3d_5eb5c0(a1 + 32, &v298);
                v103 = *(_QWORD*)(a1 + 288);
                v104 = *(_QWORD*)(a1 + 296);
                v105 = v28 & 1;
                if (v103 >= v104) {
                  v107 = *(_QWORD*)(a1 + 280);
                  v32 = v296;
                  v108 = v103 - v107;
                  v109 =
                      0xAAAAAAAAAAAAAAABLL * ((__int64)(v103 - v107) >> 3) + 1;
                  if (v109 > 0xAAAAAAAAAAAAAAALL) {
                    goto LABEL_532;
                  }
                  v110 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v104 - v107) >> 3);
                  if (2 * v110 > v109) {
                    v109 = 2 * v110;
                  }
                  if (v110 >= 0x555555555555555LL) {
                    v111 = 0xAAAAAAAAAAAAAAALL;
                  }
                  else {
                    v111 = v109;
                  }
                  if (v111 != 0) {
                    if (v111 > 0xAAAAAAAAAAAAAAALL) {
                      goto LABEL_533;
                    }
                    v112 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v111, 16,
                        0);
                    LODWORD(v32) = LODWORD(v296);
                    v23 = (float32x4_t**)v112;
                  }
                  else {
                    v23 = nullptr;
                  }
                  v113 = (char*)v23 + v108;
                  *(_QWORD*)v113 = v62;
                  *((_DWORD*)v113 + 2) = LODWORD(v32);
                  *((_DWORD*)v113 + 3) = 0;
                  v113[16] = v105;
                  v106 = (__int64)v23 + v108 + 24;
                  v113[17] = v73;
                  *(_DWORD*)(v113 + 18) = 0;
                  *((_WORD*)v113 + 11) = 0;
                  v28 = memcpy(v23, v107, v108);
                  *(_QWORD*)(a1 + 280) = v23;
                  *(_QWORD*)(a1 + 288) = v106;
                  *(_QWORD*)(a1 + 296) = &v23[3 * v111];
                  if (v107 != 0) {
                    v114 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v114 = 56;
                    }
                    *(__n128*)&v32 = nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v114);
                  }
                  v44 = v294;
                }
                else {
                  v44 = v294;
                  v32 = v296;
                  *(_QWORD*)v103 = v62;
                  *(_DWORD*)(v103 + 12) = 0;
                  *(_BYTE*)(v103 + 16) = v105;
                  v106 = v103 + 24;
                  *(_BYTE*)(v103 + 17) = v73;
                  *(_DWORD*)(v103 + 18) = 0;
                  *(_WORD*)(v103 + 22) = 0;
                  *(_DWORD*)(v103 + 8) = LODWORD(v296);
                }
                v61 = COERCE_AS(float32x4_t, GameData_1a82b70);
                *(_QWORD*)(a1 + 288) = v106;
                goto LABEL_165;
              }
              (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
              std___1___shared_weak_count___release_weak(v90);
              v44 = v294;
              v61 = v295;
              if (v89 != 0) {
                goto LABEL_143;
              }
            }
          }
        LABEL_142:
          v23 = (float32x4_t**)&GameData_2213f98;
          goto LABEL_143;
        }
      }
      else if (v116 != 0) {
      LABEL_126:
        v73 = 0;
      LABEL_134:
        v75 = *v59;
        goto LABEL_135;
      }
      v125 = *(_QWORD**)(a1 + 312);
      v126 = *(_QWORD*)(a1 + 320);
      if ((unsigned __int64)v125 >= v126) {
        v128 = *(_QWORD*)(a1 + 304);
        v129 = (char*)v125 - v128;
        v130 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v125 - v128) >> 3) + 1;
        if (v130 > 0xAAAAAAAAAAAAAAALL) {
          goto LABEL_532;
        }
        v131 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v126 - v128) >> 3);
        if (2 * v131 > v130) {
          v130 = 2 * v131;
        }
        if (v131 >= 0x555555555555555LL) {
          v132 = 0xAAAAAAAAAAAAAAALL;
        }
        else {
          v132 = v130;
        }
        if (v132 != 0) {
          if (v132 > 0xAAAAAAAAAAAAAAALL) {
          LABEL_533:
            GameRoutine_60a210(v28);
          }
          v23 = (float32x4_t**)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v132, 16, 0);
        }
        else {
          v23 = nullptr;
        }
        v133 = &v129[(_QWORD)v23];
        v127 = (__int64)&v129[(_QWORD)v23 + 24];
        *(_QWORD*)v133 = v62;
        *((_QWORD*)v133 + 1) = 0;
        *((_QWORD*)v133 + 2) = 0;
        v28 = memcpy(v23, v128, v129);
        *(_QWORD*)(a1 + 304) = v23;
        *(_QWORD*)(a1 + 312) = v127;
        *(_QWORD*)(a1 + 320) = &v23[3 * v132];
        if (v128 != 0) {
          v134 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v134 = 56;
          }
          *(__n128*)&v32 = nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v134);
        }
        v61 = COERCE_AS(float32x4_t, GameData_1a82b70);
        v44 = v294;
      }
      else {
        v127 = (__int64)(v125 + 3);
        *v125 = v62;
        v125[1] = 0;
        v125[2] = 0;
      }
      *(_QWORD*)(a1 + 312) = v127;
    LABEL_165:
      v59 += 2;
      if (v59 == v60) {
        goto LABEL_212;
      }
    }
    v67 = false;
    if ((v64 & 0x40) != 0) {
      goto LABEL_133;
    }
    goto LABEL_108;
  }
LABEL_212:
  v135 = *(_QWORD**)(a1 + 280);
  v136 = *(_QWORD**)(a1 + 288);
  if (v135 != v136) {
    GameRoutine_1025e20(
        *(_QWORD*)(a1 + 280), *(_QWORD*)(a1 + 288),
        (2 * __clz(0xAAAAAAAAAAAAAAABLL * (v136 - v135))) ^ 0x7E, 1);
    v135 = *(_QWORD**)(a1 + 280);
    v136 = *(_QWORD**)(a1 + 288);
    if (v136 != v135) {
      v137 = 12;
      v138 = 0;
      do {
        *(_DWORD*)((char*)v135 + v137) = v138++;
        v137 += 24;
        v135 = *(_QWORD**)(a1 + 280);
        v136 = *(_QWORD**)(a1 + 288);
      } while (0xAAAAAAAAAAAAAAABLL * (v136 - v135) > v138);
    }
  }
  if (v135 != v136) {
    v139 = GameData_212eba8[0];
    while (1) {
      v140 = *v135;
      if ((*(_DWORD*)(*v135 + 1112LL) & 0xFFFFFFFE) == 2 ||
          (*(_BYTE*)(v140 + 185) & 1) != 0) {
        goto LABEL_231;
      }
      if (*(_DWORD*)(*(_QWORD*)GameData_212dbc0[0] + 92LL) ==
          *(_DWORD*)(v140 + 1296)) {
        v141 = *(_QWORD*)(v140 + 24);
        if (v141 != 0) {
          v142 = *(char**)(*v139 + 160);
          v143 = *(char**)(*v139 + 168);
          if (v142 != v143) {
            v144 = v143 - v142 - 8;
            if ((~(_BYTE)v144 & 0x18) != 0) {
              v145 = ((unsigned __int8)((unsigned int)v144 >> 3) + 1) & 3;
              do {
                v146 = *(_QWORD*)v142;
                v142 += 8;
                if (v146 == v141) {
                  goto LABEL_231;
                }
              } while (--v145 != 0);
            }
            if (v144 >= 0x18) {
              while (*(_QWORD*)v142 != v141 && *((_QWORD*)v142 + 1) != v141 &&
                     *((_QWORD*)v142 + 2) != v141 &&
                     *((_QWORD*)v142 + 3) != v141) {
                v142 += 32;
                if (v142 == v143) {
                  goto LABEL_229;
                }
              }
            LABEL_231:
              GameRoutine_cec4a0(*(_QWORD*)(v140 + 24), 0);
              GameRoutine_1025be0(a1, *v135, 1);
              if ((*(_DWORD*)(*v135 + 184LL) & 0x800800) == 0 &&
                  (*(_BYTE*)(a1 + 20) & 1) == 0) {
                v147 = *(_QWORD*)(a1 + 272);
                v148 = *(_QWORD*)(*v135 + 24LL);
                v149 = 0.0;
                v150 = 0.0;
                v151 = (float*)((char*)&GameData_1bfa05c +
                                12 * *(int*)(v147 + 96));
                if (*v151 > 0.0) {
                  v152 = *v151;
                  v150 =
                      game_zview_CharacterLoadCostCalculator_collectCharaPolygon(
                          *(_QWORD*)(a1 + 272),
                          *(_QWORD*)(*(_QWORD*)(v148 + 8) + 232LL)) /
                      v152;
                }
                v153 = v151[2];
                if (v153 > 0.0) {
                  v149 = CharacterLoadCostCalculator_170f460(v148) / v153;
                }
                v154 = *(float*)v147;
                v155 = *(float*)(v147 + 4);
                v156 = *(float*)(v147 + 8);
                *(_DWORD*)(v147 + 16) = 0;
                v157 = v150 + v154;
                v158 = v149 + v156;
                *(float*)(v147 + 20) = v149;
                *(float*)v147 = v157;
                *(float*)(v147 + 4) = v155 + 0.0;
                *(float*)(v147 + 8) = v158;
                *(float*)(v147 + 12) = v150;
                if (v157 < v155) {
                  v157 = v155 + 0.0;
                }
                if (v157 < v158) {
                  v157 = v158;
                }
                if (v157 >= 0x1.0000000000000p+0) {
                  *(_BYTE*)(a1 + 20) = 1;
                }
              }
              goto LABEL_218;
            }
          }
        }
      }
    LABEL_229:
      if (*((_BYTE*)v135 + 16) == 1 &&
          *((float*)v135 + 2) <= 0x1.e000000000000p+3) {
        goto LABEL_231;
      }
    LABEL_218:
      v135 += 3;
      if (v135 == v136) {
        v135 = *(_QWORD**)(a1 + 280);
        v136 = *(_QWORD**)(a1 + 288);
        break;
      }
    }
  }
  if (v135 != v136) {
    v159 = GameData_212eba8[0];
    while (1) {
      v161 = *v135;
      v160 = *(char**)(a1 + 344);
      v162 = *(char**)(a1 + 352);
      if (v160 != v162) {
        v163 = v162 - v160 - 8;
        if ((~(_BYTE)v163 & 0x18) != 0) {
          v164 = ((unsigned __int8)((unsigned int)v163 >> 3) + 1) & 3;
          while (*(_QWORD*)v160 != v161) {
            v160 += 8;
            if (--v164 == 0) {
              goto LABEL_260;
            }
          }
        }
        else {
        LABEL_260:
          if (v163 < 0x18) {
            goto LABEL_261;
          }
          v160 += 16;
          while (1) {
            if (*((_QWORD*)v160 - 2) == v161) {
              v160 -= 16;
              goto LABEL_253;
            }
            if (*((_QWORD*)v160 - 1) == v161) {
              v160 -= 8;
              goto LABEL_253;
            }
            if (*(_QWORD*)v160 == v161) {
              goto LABEL_253;
            }
            if (*((_QWORD*)v160 + 1) == v161) {
              break;
            }
            v172 = v160 + 16;
            v160 += 32;
            if (v172 == v162) {
              goto LABEL_261;
            }
          }
          v160 += 8;
        }
      }
    LABEL_253:
      if (v160 != v162) {
        goto LABEL_254;
      }
    LABEL_261:
      if ((*((_BYTE*)v135 + 17) & 1) == 0 &&
          *((float*)v135 + 2) > *(float*)(a1 + 332)) {
        goto LABEL_254;
      }
      v165 = *(_QWORD*)(v161 + 24);
      if ((*(_DWORD*)(v165 + 336) & 1) == 0) {
        goto LABEL_254;
      }
      if (*(float*)(a1 + 24) >= (float)*(int*)(a1 + 16)) {
        v167 = *(char**)(a1 + 368);
        v166 = *(char**)(a1 + 376);
        if (v167 != v166) {
          v168 = *(_QWORD*)(v165 + 328);
          v169 = v166 - v167 - 8;
          if ((~(_BYTE)v169 & 0x18) != 0) {
            v170 = ((unsigned __int8)((unsigned int)v169 >> 3) + 1) & 3;
            while (*(_QWORD*)v167 != v168) {
              v167 += 8;
              if (--v170 == 0) {
                goto LABEL_270;
              }
            }
          }
          else {
          LABEL_270:
            if (v169 < 0x18) {
              goto LABEL_254;
            }
            v167 += 16;
            while (1) {
              if (*((_QWORD*)v167 - 2) == v168) {
                v167 -= 16;
                goto LABEL_290;
              }
              if (*((_QWORD*)v167 - 1) == v168) {
                v167 -= 8;
                goto LABEL_290;
              }
              if (*(_QWORD*)v167 == v168) {
                goto LABEL_290;
              }
              if (*((_QWORD*)v167 + 1) == v168) {
                break;
              }
              v171 = v167 + 16;
              v167 += 32;
              if (v171 == v166) {
                goto LABEL_254;
              }
            }
            v167 += 8;
          }
        }
      LABEL_290:
        if (v167 == v166) {
          goto LABEL_254;
        }
      }
      if ((*(_BYTE*)(v165 + 384) & 0x40) == 0) {
        goto LABEL_300;
      }
      v173 = *(char**)(*v159 + 160);
      v174 = *(char**)(*v159 + 168);
      if (v173 == v174) {
      LABEL_298:
        if ((*(_BYTE*)(*(_QWORD*)(v161 + 88) + 8LL) & 1) == 0 &&
            *((_BYTE*)v135 + 16) != 1) {
          goto LABEL_254;
        }
        goto LABEL_300;
      }
      v175 = v174 - v173 - 8;
      if ((~(_BYTE)v175 & 0x18) != 0) {
        v176 = ((unsigned __int8)((unsigned int)v175 >> 3) + 1) & 3;
        while (1) {
          v177 = *(_QWORD*)v173;
          v173 += 8;
          if (v177 == v165) {
            break;
          }
          if (--v176 == 0) {
            goto LABEL_297;
          }
        }
      }
      else {
      LABEL_297:
        if (v175 < 0x18) {
          goto LABEL_298;
        }
        while (*(_QWORD*)v173 != v165 && *((_QWORD*)v173 + 1) != v165 &&
               *((_QWORD*)v173 + 2) != v165 && *((_QWORD*)v173 + 3) != v165) {
          v173 += 32;
          if (v173 == v174) {
            goto LABEL_298;
          }
        }
      }
    LABEL_300:
      if ((*(_DWORD*)(v161 + 184) & 0x800800) == 0) {
        if ((*(_BYTE*)(a1 + 20) & 1) != 0) {
          goto LABEL_254;
        }
        v178 = *(_QWORD*)(a1 + 272);
        v179 = 0.0;
        v180 = 0.0;
        v181 = (float*)((char*)&GameData_1bfa05c + 12 * *(int*)(v178 + 96));
        if (*v181 > 0.0) {
          v183 = *(_QWORD*)(v161 + 24);
          v182 = *v181;
          v180 = game_zview_CharacterLoadCostCalculator_collectCharaPolygon(
                     *(_QWORD*)(a1 + 272),
                     *(_QWORD*)(*(_QWORD*)(v165 + 8) + 232LL)) /
                 v182;
          v165 = v183;
        }
        v184 = v181[2];
        if (v184 > 0.0) {
          v179 = CharacterLoadCostCalculator_170f460(v165) / v184;
        }
        v185 = *(float*)v178;
        v186 = *(float*)(v178 + 4);
        v187 = *(float*)(v178 + 8);
        *(_DWORD*)(v178 + 16) = 0;
        v188 = v180 + v185;
        v189 = v179 + v187;
        *(float*)(v178 + 20) = v179;
        *(float*)v178 = v188;
        *(float*)(v178 + 4) = v186 + 0.0;
        *(float*)(v178 + 8) = v189;
        *(float*)(v178 + 12) = v180;
        if (v188 < v186) {
          v188 = v186 + 0.0;
        }
        if (v188 < v189) {
          v188 = v189;
        }
        if (v188 >= 0x1.0000000000000p+0) {
          *(_BYTE*)(a1 + 20) = 1;
          goto LABEL_254;
        }
        v165 = *(_QWORD*)(*v135 + 24LL);
      }
      GameRoutine_cec4a0(v165, 0);
      GameRoutine_1025be0(a1, *v135, 1);
    LABEL_254:
      v135 += 3;
      if (v135 == v136) {
        v135 = *(_QWORD**)(a1 + 280);
        v136 = *(_QWORD**)(a1 + 288);
        break;
      }
    }
  }
  if (v135 == v136) {
    goto LABEL_391;
  }
  do {
    v191 = *v135;
    v190 = *(char**)(a1 + 344);
    v192 = *(char**)(a1 + 352);
    if (v190 != v192) {
      v193 = v192 - v190 - 8;
      if ((~(_BYTE)v193 & 0x18) != 0) {
        v194 = ((unsigned __int8)((unsigned int)v193 >> 3) + 1) & 3;
        while (*(_QWORD*)v190 != v191) {
          v190 += 8;
          if (--v194 == 0) {
            goto LABEL_331;
          }
        }
      }
      else {
      LABEL_331:
        if (v193 < 0x18) {
          goto LABEL_332;
        }
        v190 += 16;
        while (1) {
          if (*((_QWORD*)v190 - 2) == v191) {
            v190 -= 16;
            goto LABEL_324;
          }
          if (*((_QWORD*)v190 - 1) == v191) {
            v190 -= 8;
            goto LABEL_324;
          }
          if (*(_QWORD*)v190 == v191) {
            goto LABEL_324;
          }
          if (*((_QWORD*)v190 + 1) == v191) {
            break;
          }
          v204 = v190 + 16;
          v190 += 32;
          if (v204 == v192) {
            goto LABEL_332;
          }
        }
        v190 += 8;
      }
    }
  LABEL_324:
    if (v190 != v192) {
      goto LABEL_325;
    }
  LABEL_332:
    if (*(_BYTE*)(a1 + 15) == 1) {
      if ((*((_BYTE*)v135 + 17) & 1) == 0) {
        v195 = *((float*)v135 + 2);
        if (v195 > *(float*)(a1 + 336) &&
            (v195 > *(float*)(a1 + 340) || (v135[2] & 1) == 0)) {
          goto LABEL_325;
        }
      }
    }
    else {
      v196 = *((float*)v135 + 2);
      if (v196 > 0x1.c200000000000p+7 &&
          (v196 > *(float*)(a1 + 332) || *((_BYTE*)v135 + 16) != 1)) {
        goto LABEL_325;
      }
    }
    v197 = *(_QWORD*)(v191 + 24);
    if ((*(_DWORD*)(v197 + 336) & 1) == 0) {
      goto LABEL_325;
    }
    if (*(float*)(a1 + 24) < (float)*(int*)(a1 + 16)) {
      goto LABEL_370;
    }
    v199 = *(char**)(a1 + 368);
    v198 = *(char**)(a1 + 376);
    if (v199 != v198) {
      v200 = *(_QWORD*)(v197 + 328);
      v201 = v198 - v199 - 8;
      if ((~(_BYTE)v201 & 0x18) != 0) {
        v202 = ((unsigned __int8)((unsigned int)v201 >> 3) + 1) & 3;
        while (*(_QWORD*)v199 != v200) {
          v199 += 8;
          if (--v202 == 0) {
            goto LABEL_348;
          }
        }
      }
      else {
      LABEL_348:
        if (v201 < 0x18) {
          goto LABEL_325;
        }
        v199 += 16;
        while (1) {
          if (*((_QWORD*)v199 - 2) == v200) {
            v199 -= 16;
            goto LABEL_368;
          }
          if (*((_QWORD*)v199 - 1) == v200) {
            v199 -= 8;
            goto LABEL_368;
          }
          if (*(_QWORD*)v199 == v200) {
            goto LABEL_368;
          }
          if (*((_QWORD*)v199 + 1) == v200) {
            break;
          }
          v203 = v199 + 16;
          v199 += 32;
          if (v203 == v198) {
            goto LABEL_325;
          }
        }
        v199 += 8;
      }
    }
  LABEL_368:
    if (v199 != v198) {
    LABEL_370:
      if ((*((_BYTE*)v135 + 17) & 1) != 0 ||
          *((float*)v135 + 2) <= 0x1.c200000000000p+7) {
        if ((*(_DWORD*)(v191 + 184) & 0x800800) != 0) {
          v205 = 0;
          v206 = 1;
        LABEL_375:
          GameRoutine_1025be0(a1, *v135, v206);
          GameRoutine_cec4a0(*(_QWORD*)(*v135 + 24LL), v205);
          goto LABEL_325;
        }
        if ((*(_BYTE*)(a1 + 20) & 1) == 0) {
          v207 = *(_QWORD*)(a1 + 272);
          v208 = 0.0;
          v209 = 0.0;
          v210 = (float*)((char*)&GameData_1bfa05c + 12 * *(int*)(v207 + 96));
          if (*v210 > 0.0) {
            v211 = *v210;
            v209 = game_zview_CharacterLoadCostCalculator_collectCharaPolygon(
                       *(_QWORD*)(a1 + 272),
                       *(_QWORD*)(*(_QWORD*)(v197 + 8) + 232LL)) /
                   v211;
          }
          v212 = v210[2];
          if (v212 > 0.0) {
            v208 = CharacterLoadCostCalculator_170f460(v197) / v212;
          }
          v213 = *(float*)v207;
          v214 = *(float*)(v207 + 4);
          v215 = *(float*)(v207 + 8);
          v206 = 1;
          *(_DWORD*)(v207 + 16) = 0;
          v216 = v209 + v213;
          v217 = v208 + v215;
          *(float*)(v207 + 20) = v208;
          *(float*)v207 = v216;
          *(float*)(v207 + 4) = v214 + 0.0;
          *(float*)(v207 + 8) = v217;
          *(float*)(v207 + 12) = v209;
          if (v216 < v214) {
            v216 = v214 + 0.0;
          }
          if (v216 < v217) {
            v216 = v217;
          }
          if (v216 >= 0x1.0000000000000p+0) {
            v205 = 1;
            *(_BYTE*)(a1 + 20) = 1;
            v206 = 0;
          }
          else {
            v205 = 0;
          }
          goto LABEL_375;
        }
      }
      v206 = 0;
      v205 = 1;
      goto LABEL_375;
    }
  LABEL_325:
    v135 += 3;
  } while (v135 != v136);
  v135 = *(_QWORD**)(a1 + 280);
  v136 = *(_QWORD**)(a1 + 288);
LABEL_391:
  while (v135 != v136) {
    v219 = *v135;
    v218 = *(char**)(a1 + 344);
    v220 = *(char**)(a1 + 352);
    if (v218 == v220) {
      goto LABEL_389;
    }
    v221 = v220 - v218 - 8;
    if ((~(_BYTE)v221 & 0x18) != 0) {
      v222 = ((unsigned __int8)((unsigned int)v221 >> 3) + 1) & 3;
      while (*(_QWORD*)v218 != v219) {
        v218 += 8;
        if (--v222 == 0) {
          goto LABEL_397;
        }
      }
    LABEL_389:
      if (v218 != v220) {
        goto LABEL_390;
      }
      goto LABEL_398;
    }
  LABEL_397:
    if (v221 >= 0x18) {
      v218 += 16;
      while (1) {
        if (*((_QWORD*)v218 - 2) == v219) {
          if (v218 - 16 != v220) {
            goto LABEL_390;
          }
          goto LABEL_398;
        }
        if (*((_QWORD*)v218 - 1) == v219) {
          v218 -= 8;
          goto LABEL_389;
        }
        if (*(_QWORD*)v218 == v219) {
          goto LABEL_389;
        }
        if (*((_QWORD*)v218 + 1) == v219) {
          break;
        }
        v231 = v218 + 16;
        v218 += 32;
        if (v231 == v220) {
          goto LABEL_398;
        }
      }
      if (v218 + 8 != v220) {
        goto LABEL_390;
      }
    }
  LABEL_398:
    if (*(_BYTE*)(a1 + 15) != 1) {
      goto LABEL_430;
    }
    v223 = *(_QWORD*)(v219 + 24);
    if ((*(_DWORD*)(v223 + 336) & 1) == 0) {
      goto LABEL_430;
    }
    if (*(float*)(a1 + 24) >= (float)*(int*)(a1 + 16)) {
      v225 = *(char**)(a1 + 368);
      v224 = *(char**)(a1 + 376);
      if (v225 != v224) {
        v226 = *(_QWORD*)(v223 + 328);
        v227 = v224 - v225 - 8;
        if ((~(_BYTE)v227 & 0x18) != 0) {
          v228 = ((unsigned __int8)((unsigned int)v227 >> 3) + 1) & 3;
          while (*(_QWORD*)v225 != v226) {
            v225 += 8;
            if (--v228 == 0) {
              goto LABEL_406;
            }
          }
        }
        else {
        LABEL_406:
          if (v227 < 0x18) {
            goto LABEL_430;
          }
          v225 += 16;
          while (1) {
            if (*((_QWORD*)v225 - 2) == v226) {
              v225 -= 16;
              goto LABEL_428;
            }
            if (*((_QWORD*)v225 - 1) == v226) {
              v225 -= 8;
              goto LABEL_428;
            }
            if (*(_QWORD*)v225 == v226) {
              goto LABEL_428;
            }
            if (*((_QWORD*)v225 + 1) == v226) {
              break;
            }
            v229 = v225 + 16;
            v225 += 32;
            v230 = 2;
            if (v229 == v224) {
              goto LABEL_431;
            }
          }
          v225 += 8;
        }
      }
    LABEL_428:
      if (v225 == v224) {
      LABEL_430:
        v230 = 2;
        goto LABEL_431;
      }
    }
    GameRoutine_1025be0(a1, v219, 0);
    v219 = *v135;
    v230 = 1;
  LABEL_431:
    GameRoutine_cec4a0(*(_QWORD*)(v219 + 24), v230);
  LABEL_390:
    v135 += 3;
  }
  v232 = *(__int64**)(a1 + 304);
  v233 = *(__int64**)(a1 + 312);
  while (v232 != v233) {
    v234 = *v232;
    v232 += 3;
    GameRoutine_cec4a0(*(_QWORD*)(v234 + 24), 2);
  }
  v235 = *(_QWORD*)(a1 + 352) - *(_QWORD*)(a1 + 344);
  if ((int)(v235 >> 3) >= 1) {
    v236 = -(int)(v235 >> 3);
    v237 = (v235 >> 3) & 0x7FFFFFFF;
    v238 = 0;
    do {
      v239 = *(_QWORD*)(*(_QWORD*)(a1 + 344) + v238);
      v240 = *(_QWORD*)(v239 + 24);
      v241 = *(_QWORD*)(v239 + 760) != 0 || *(_DWORD*)(v240 + 376) == 5;
      v242 = *(_QWORD*)(v240 + 16);
      if ((unsigned int)(*(_DWORD*)(v240 + 512) - 1) >= 2) {
        v243 = (float)v236;
      }
      else {
        v243 = (float)v236 + 0x1.f400000000000p+8;
      }
      v244 = *(_QWORD*)(v242 + 560);
      v245 = *(void**)(v242 + 568);
      v246 = *(float*)(v240 + 544) * 0x1.3333340000000p+0;
      v298 = v244;
      v299 = v245;
      v300 = v246;
      if ((nn_g3d_5eb5c0(a1 + 32, &v298) & 1) != 0) {
        if (v241) {
          v243 = v243 + -0x1.9000000000000p+5;
        }
        else {
          v243 = v243 + -20.0;
        }
      }
      --v237;
      ++v236;
      v238 += 8;
      *(float*)(v240 + 460) = v243;
    } while (v237 != 0);
  }
  v247 = *(__int64**)(a1 + 280);
  v248 = *(__int64**)(a1 + 288);
  if (v247 != v248) {
    v249 = 0;
    while (1) {
      if (*((_BYTE*)v247 + 16) != 0) {
        v250 = *v247;
        if (v249 < 120) {
          v251 = *(_QWORD*)(v250 + 24);
          if ((*((_BYTE*)v247 + 17) & 1) != 0 ||
              (*(_BYTE*)(v251 + 492) != 1 || *(_DWORD*)(v251 + 488) != 2) &&
                  *((float*)v247 + 2) < *(float*)(a1 + 328)) {
            v256 = *(_QWORD*)(*(_QWORD*)(v251 + 8) + 328LL);
            v257 = game_ProcFadeView_instance_;
            *(_DWORD*)(v256 + 304) = 1065353216;
            if (v257 != 0) {
              v258 = v257 +
                     ((unsigned __int64)*(unsigned __int8*)(v257 + 480) << 6);
              if (*(float*)(v258 + 172) == *(float*)(v258 + 168)) {
                (*(void (**)(unsigned __int64))(*(_QWORD*)(v258 + 160) + 16LL))(
                    v258 + 160);
              }
              else {
                v259 = *(_OWORD*)(v258 + 208);
              }
              if (*((float*)&v259 + 3) == 0x1.0000000000000p+0 &&
                  LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                               (_QWORD*)(*(_QWORD*)(v258 + 160) + 16LL))(
                                  v258 + 160, *((float*)&v259 + 3)))
                          .n128_f32[3] == 0x1.0000000000000p+0) {
                v261 = *(_DWORD*)(v256 + 304);
                *(_DWORD*)(v256 + 320) = 0;
                *(_DWORD*)(v256 + 308) = v261;
              }
            }
            *(_BYTE*)(v256 + 324) = 1;
            ++v249;
            goto LABEL_450;
          }
        }
        else {
          v251 = *(_QWORD*)(v250 + 24);
        }
        v252 = *(_QWORD*)(*(_QWORD*)(v251 + 8) + 328LL);
        v253 = game_ProcFadeView_instance_;
        *(_DWORD*)(v252 + 304) = 0;
        if (v253 != 0) {
          v254 =
              v253 + ((unsigned __int64)*(unsigned __int8*)(v253 + 480) << 6);
          if (*(float*)(v254 + 172) == *(float*)(v254 + 168)) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)(v254 + 160) + 16LL))(
                v254 + 160);
          }
          else {
            v255 = *(_OWORD*)(v254 + 208);
          }
          if (*((float*)&v255 + 3) == 0x1.0000000000000p+0 &&
              LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                           (_QWORD*)(*(_QWORD*)(v254 + 160) + 16LL))(
                              v254 + 160, *((float*)&v255 + 3)))
                      .n128_f32[3] == 0x1.0000000000000p+0) {
            v260 = *(_DWORD*)(v252 + 304);
            *(_DWORD*)(v252 + 320) = 0;
            *(_DWORD*)(v252 + 308) = v260;
          }
        }
        *(_BYTE*)(v252 + 324) = 1;
      }
    LABEL_450:
      v247 += 3;
      if (v247 == v248) {
        v262 = *(__int64**)(a1 + 280);
        v263 = *(__int64**)(a1 + 288);
        if (v262 == v263) {
          break;
        }
      LABEL_479:
        if ((v262[2] & 1) == 0) {
          v264 = *v262;
          if (v249 >= 120) {
            v265 = *(_QWORD*)(v264 + 24);
            goto LABEL_482;
          }
          v265 = *(_QWORD*)(v264 + 24);
          if ((*((_BYTE*)v262 + 17) & 1) == 0 &&
              (*(_BYTE*)(v265 + 492) == 1 && *(_DWORD*)(v265 + 488) == 2 ||
               *((float*)v262 + 2) >= *(float*)(a1 + 328))) {
          LABEL_482:
            v266 = *(_QWORD*)(*(_QWORD*)(v265 + 8) + 328LL);
            v267 = game_ProcFadeView_instance_;
            *(_DWORD*)(v266 + 304) = 0;
            if (v267 != 0) {
              v268 = v267 +
                     ((unsigned __int64)*(unsigned __int8*)(v267 + 480) << 6);
              if (*(float*)(v268 + 172) == *(float*)(v268 + 168)) {
                (*(void (**)(unsigned __int64))(*(_QWORD*)(v268 + 160) + 16LL))(
                    v268 + 160);
              }
              else {
                v269 = *(_OWORD*)(v268 + 208);
              }
              if (*((float*)&v269 + 3) == 0x1.0000000000000p+0 &&
                  LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                               (_QWORD*)(*(_QWORD*)(v268 + 160) + 16LL))(
                                  v268 + 160, *((float*)&v269 + 3)))
                          .n128_f32[3] == 0x1.0000000000000p+0) {
                v274 = *(_DWORD*)(v266 + 304);
                *(_DWORD*)(v266 + 320) = 0;
                *(_DWORD*)(v266 + 308) = v274;
              }
            }
            *(_BYTE*)(v266 + 324) = 1;
          }
          else {
            v270 = *(_QWORD*)(*(_QWORD*)(v265 + 8) + 328LL);
            v271 = game_ProcFadeView_instance_;
            *(_DWORD*)(v270 + 304) = 1065353216;
            if (v271 != 0) {
              v272 = v271 +
                     ((unsigned __int64)*(unsigned __int8*)(v271 + 480) << 6);
              if (*(float*)(v272 + 172) == *(float*)(v272 + 168)) {
                (*(void (**)(unsigned __int64))(*(_QWORD*)(v272 + 160) + 16LL))(
                    v272 + 160);
              }
              else {
                v273 = *(_OWORD*)(v272 + 208);
              }
              if (*((float*)&v273 + 3) == 0x1.0000000000000p+0 &&
                  LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                               (_QWORD*)(*(_QWORD*)(v272 + 160) + 16LL))(
                                  v272 + 160, *((float*)&v273 + 3)))
                          .n128_f32[3] == 0x1.0000000000000p+0) {
                v275 = *(_DWORD*)(v270 + 304);
                *(_DWORD*)(v270 + 320) = 0;
                *(_DWORD*)(v270 + 308) = v275;
              }
            }
            *(_BYTE*)(v270 + 324) = 1;
            ++v249;
          }
        }
        v262 += 3;
        if (v262 == v263) {
          break;
        }
        goto LABEL_479;
      }
    }
  }
  v276 = *(_QWORD*)(a1 + 304);
  for (i = *(_QWORD*)(a1 + 312); v276 != i; *(_BYTE*)(v278 + 324) = 1) {
    v278 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v276 + 24LL) + 8LL) + 328LL);
    v279 = game_ProcFadeView_instance_;
    *(_DWORD*)(v278 + 304) = 0;
    if (v279 != 0) {
      v280 = v279 + ((unsigned __int64)*(unsigned __int8*)(v279 + 480) << 6);
      if (*(float*)(v280 + 172) == *(float*)(v280 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v280 + 160) + 16LL))(v280 +
                                                                        160);
      }
      else {
        v281 = *(_OWORD*)(v280 + 208);
      }
      if (*((float*)&v281 + 3) == 0x1.0000000000000p+0 &&
          LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v280 + 160) + 16LL))(
                          v280 + 160, *((float*)&v281 + 3)))
                  .n128_f32[3] == 0x1.0000000000000p+0) {
        v282 = *(_DWORD*)(v278 + 304);
        *(_DWORD*)(v278 + 320) = 0;
        *(_DWORD*)(v278 + 308) = v282;
      }
    }
    v276 += 24;
  }
  memset(&v298, 0, 384, v29, v30, v31);
  v306 = 0;
  v307 = 0;
  v308 = 0;
  v309 = 0;
  v310 = 0;
  v311 = 0;
  v304 = 0x7F7FFFFF7F7FFFFFLL;
  v305 = 0x7F7FFFFF7F7FFFFFLL;
  GameRoutine_1025a10(a1 + 16, &v298);
  v283 = fw_memory_g_heap_manager_ptr;
  if (v309 != 0) {
    v284 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v284 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v284);
  }
  if (v306 != 0) {
    v285 = 128;
    if (*(_QWORD*)(*(_QWORD*)v283 + 200LL) == 0) {
      v285 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v283 + v285);
  }
  if (v303 != 0) {
    v286 = 128;
    if (*(_QWORD*)(*(_QWORD*)v283 + 200LL) == 0) {
      v286 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v283 + v286);
  }
  if (v302 != 0) {
    v287 = 128;
    if (*(_QWORD*)(*(_QWORD*)v283 + 200LL) == 0) {
      v287 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v283 + v287);
  }
  if (v301 != 0) {
    v288 = 128;
    if (*(_QWORD*)(*(_QWORD*)v283 + 200LL) == 0) {
      v288 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v283 + v288);
  }
}

bool game_1029840(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v16[3];

  v3 = *a2;
  v2 = a2[1];
  if (v2 != *a2) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2234558,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_2234558) != 0) {
      GameData_2234358 = 3;
      GameData_22343e0 = 0;
      GameData_22343e8 = (__int64)GameRoutine_1029b30;
      GameData_2234380 = 0;
      GameData_2234388 = 0;
      GameData_2234390 = 0;
      GameData_2234360 = 0;
      GameData_2234368 = 0;
      GameData_2234370 = 0;
      GameData_2234378 = 0;
      GameData_22343c0 = 0;
      GameData_22343c8 = 0;
      GameData_22343d0 = 0;
      GameData_22343a0 = 0;
      GameData_22343a8 = 0;
      GameData_22343b0 = 0;
      GameData_2234398 = 2;
      GameData_2234498 = 2;
      GameData_2234420 = 0;
      GameData_2234428 = (__int64)GameRoutine_1029ba0;
      GameData_22343b8 = 0;
      GameData_22343d8 = 13;
      GameData_22343f0 = 0;
      GameData_22343f8 = 0;
      GameData_2234400 = 0;
      GameData_2234408 = 0;
      GameData_2234410 = 0;
      GameData_22344b8 = 1;
      GameData_2234418 = 13;
      GameData_2234430 = 0;
      GameData_2234438 = 0;
      GameData_2234440 = 0;
      GameData_2234448 = 0;
      GameData_2234450 = 0;
      GameData_2234458 = 12;
      GameData_2234480 = 0;
      GameData_2234488 = 0;
      GameData_2234490 = 0;
      GameData_2234478 = 0;
      GameData_2234468 = 0;
      GameData_2234470 = 0;
      GameData_2234460 = 0;
      GameData_22344a0 = 0;
      GameData_22344a8 = 0;
      GameData_22344b0 = 0;
      GameData_22344c0 = 0;
      GameData_22344c8 = 0;
      GameData_22344d0 = 0;
      GameData_22344d8 = 13;
      GameData_22344e0 = 0;
      GameData_22344e8 = (__int64)GameRoutine_1029c20;
      GameData_22344f0 = 0;
      GameData_22344f8 = 0;
      GameData_2234500 = 0;
      GameData_2234508 = 0;
      GameData_2234510 = 0;
      GameData_2234518 = 0;
      GameData_2234540 = 0;
      GameData_2234548 = 0;
      GameData_2234550 = 0;
      GameData_2234538 = 0;
      GameData_2234528 = 0;
      GameData_2234530 = 0;
      GameData_2234520 = 0;
      __cxa_guard_release(&GameData_2234558);
    }
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    v7 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 240, 16, 0);
    v8 = GameData_212c608[0];
    *(_QWORD*)(v7 + 96) = 0;
    *(_QWORD*)(v7 + 104) = 0;
    *(_QWORD*)(v7 + 112) = 0;
    *(_QWORD*)(v7 + 120) = 0;
    *(_QWORD*)(v7 + 128) = 0;
    *(_WORD*)(v7 + 136) = 0;
    *(_QWORD*)(v7 + 16) = 0;
    *(_QWORD*)(v7 + 24) = "NULL";
    *(_QWORD*)(v7 + 138) = 0;
    *(_QWORD*)(v7 + 144) = 0;
    *(_QWORD*)(v7 + 32) = 0;
    *(_QWORD*)(v7 + 40) = 0;
    *(_QWORD*)(v7 + 48) = 0;
    *(_QWORD*)(v7 + 56) = 0;
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 0;
    *(_QWORD*)(v7 + 80) = 0;
    *(_QWORD*)(v7 + 88) = 0;
    *(_QWORD*)v7 = v8 + 16;
    *(_QWORD*)(v7 + 8) = 0;
    game_ProcInst_Register(v7);
    *(_QWORD*)(v7 + 160) = 0;
    *(_QWORD*)(v7 + 168) = 0;
    *(_QWORD*)(v7 + 176) = 0;
    *(_QWORD*)(v7 + 184) = 0;
    *(_QWORD*)(v7 + 192) = 0;
    *(_QWORD*)(v7 + 200) = 0;
    *(_QWORD*)(v7 + 208) = 0;
    *(_QWORD*)(v7 + 216) = 0;
    *(_QWORD*)(v7 + 224) = 0;
    *(_QWORD*)v7 = game_cmdbtl_anonymous_ProcCmdBtlSeqPostGrow_vtable;
    *(_QWORD*)(v7 + 152) =
        game_cmdbtl_anonymous_ProcCmdBtlSeqPostGrow_PostGrowArgs_vtable;
    v9 = *a2;
    v10 = a2[1] - *a2;
    if (v10 != 0) {
      if (v10 < 0) {
        GameRoutine_e876f0();
      }
      v11 = fw_memory_HeapManager_Allocate_alt1(*v6, v10, 16, 0);
      v12 = v11 + v10;
      *(_QWORD*)(v7 + 208) = v11;
      *(_QWORD*)(v7 + 216) = v11;
      *(_QWORD*)(v7 + 224) = v11 + v10;
      memcpy(v11, v9, v10);
      *(_QWORD*)(v7 + 216) = v12;
    }
    *(_DWORD*)(v7 + 232) = 0;
    GameRoutine_eb5940((void*)((__int64*)v16));
    GameRoutine_940640((_QWORD*)(v7 + 152), v16);
    if (v16[0] != nullptr) {
      v13 = *v6;
      v16[1] = v16[0];
      v14 = 128;
      if (*(_QWORD*)(v13 + 200) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v13 + v14);
    }
    ProcInst_657850(v7, (__int64)&GameData_2234358,
                    (__int64)"ProcCmdBtlSeqPostGrow", 1, a1);
  }
  return v2 != v3;
}

void game_10332b0(__int64 a1, int8x16_t* a2, int a3, __int64 a4, float a5)
{
  int8x16_t v6;
  float32x4_t v11;
  float v12;
  __int64* v13;
  __int64 v14;
  atomic_ullong* v15;
  __int64 v16;
  __int128 v17;
  __int64 v18;
  __int64* v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  float v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;
  unsigned __int32 v41;
  struct {
    char v42[4];
    float v43;
    char gap40_[72];
    char v44;
  } v42_;
  float32x4_t v45;
  float32x4_t v46[2];

  v6 = *a2;
  LANES128(v11).n128_u64[0] = LANES128(*(a2)).n128_u64[0];
  LODWORD(v12) = HIDWORD(LANES128(*(a2)).n128_u64[0]);
  LANES128(v11).n128_u64[1] = LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u32[0];
  v46[0] = v11;
  LANES128(v6).n128_u32[1] = -1027080192;
  LANES128(v6).n128_u64[1] = LANES128(v11).n128_u64[1];
  v45 = v6;
  collision_670c60_alt1((void*)((__int64)v42_.v42), v46, &v45, 1);
  if (v42_.v44 != 0) {
    v12 = v42_.v43;
  }
  v40 = LANES128(*(a2)).n128_u64[0];
  v41 = LANES128(*(a2)).n128_u32[2];
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  v14 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  *(_QWORD*)(v14 + 8) = 0;
  v15 = (atomic_ullong*)(v14 + 8);
  *(_QWORD*)(v14 + 16) = 0;
  v16 = v14;
  *(_QWORD*)v14 = GameData_20030c0;
  *(_QWORD*)(v14 + 80) = 0;
  *(_QWORD*)(v14 + 88) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_DWORD*)(v14 + 72) = a3;
  *(_QWORD*)(v14 + 96) = 0;
  *(_QWORD*)(v14 + 40) = a1;
  *(_QWORD*)(v14 + 48) = a4;
  *(float*)(v14 + 96) = a5;
  *(_DWORD*)(v14 + 80) = v40;
  *(float*)(v14 + 84) = v12;
  v17 = *(_OWORD*)(v14 + 80);
  *(_QWORD*)(v14 + 32) = game_map_zv_CrowdCharacter_vtable;
  v18 = v14 + 32;
  *(_DWORD*)(v14 + 56) = *(_DWORD*)(a1 + 48);
  *((_QWORD*)&v17 + 1) = v41;
  *(_OWORD*)(v14 + 80) = v17;
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
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
  nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex);
  *(_DWORD*)(v16 + 76) = 1;
  v24 =
      (float)(fminf(fmaxf((float)(unsigned __int16)v23 / 0x1.fffe000000000p+15f,
                          0x0.0p+0f),
                    0x1.0000000000000p+0f) *
              0x1.4000000000000p+3f) +
      -0x1.0000000000000p+1f;
  if (v24 < 0x0.0p+0f) {
    v24 = 0x0.0p+0f;
  }
  *(float*)(v16 + 100) = v24;
  CrowdCharacter_10315c0_alt1(v18);
  v25 = *(__int64**)(a1 + 16);
  v26 = *(_QWORD*)(a1 + 24);
  if ((unsigned __int64)v25 >= v26) {
    v28 = *(_QWORD*)(a1 + 8);
    v29 = (unsigned __int64)v25 - v28;
    v30 = ((__int64)v25 - v28) >> 4;
    v31 = v30 + 1;
    if ((unsigned __int64)(v30 + 1) >> 60 != 0) {
      GameRoutine_10335a0_alt1();
    }
    v32 = v26 - v28;
    if (v32 >> 3 > v31) {
      v31 = v32 >> 3;
    }
    if ((unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFF0LL) {
      v33 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v33 = v31;
    }
    if (v33 >> 60 != 0) {
      GameRoutine_60a210_alt1();
    }
    v34 = fw_memory_HeapManager_Allocate_alt1(*v13, 16 * v33, 16, 0);
    v35 = (__int64*)(v34 + v29);
    v36 = v34 + 16 * v33;
    *v35 = v18;
    v35[1] = v16;
    v37 = v34 + v29 - 16 * v30;
    v27 = v34 + v29 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
    memcpy_alt1(v37, v28, v29);
    *(_QWORD*)(a1 + 8) = v37;
    *(_QWORD*)(a1 + 16) = v27;
    *(_QWORD*)(a1 + 24) = v36;
    if (v28 != 0) {
      v38 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v13 + v38, v28);
    }
  }
  else {
    *v25 = v18;
    v25[1] = v16;
    v27 = (__int64)(v25 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
  }
  v39 = *(_DWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 16) = v27;
  *(_DWORD*)(a1 + 48) = v39 + 1;
  if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt3(v16);
  }
}

__attribute__((swiftcall)) void game_103a420(PSEUDO_X8 x8_)
{
  __int64 a1 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int8* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
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
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;

  v2 = GameData_21f3cc0;
  if (GameData_21f3cc0 != 0) {
    v3 = (__int64*)(GameData_21f3cc0 + 16);
    v35 = 0;
    v36 = 0;
    v33 = 0;
    v34 = 0;
    v31 = 0;
    v32 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    if (&v31 != (__int64*)(GameData_21f3cc0 + 16)) {
      if ((*(_BYTE*)v3 & 1) != 0) {
        GameRoutine_64df20(&v31, *(_QWORD*)(GameData_21f3cc0 + 32),
                           *(_QWORD*)(GameData_21f3cc0 + 24));
      }
      else {
        v4 = *v3;
        v5 = *(_QWORD*)(GameData_21f3cc0 + 24);
        v6 = *(_QWORD*)(GameData_21f3cc0 + 32);
        v31 = v4;
        v32 = v5;
        v33 = v6;
      }
    }
    v7 = (unsigned __int8*)(v2 + 40);
    if (&v34 != (__int64*)(v2 + 40)) {
      v8 = *v7;
      if ((v34 & 1) != 0) {
        if ((v8 & 1) != 0) {
          v12 = *(_QWORD*)(v2 + 56);
        }
        else {
          v12 = v2 + 41;
        }
        if ((v8 & 1) != 0) {
          v13 = *(_QWORD*)(v2 + 48);
        }
        else {
          v13 = v8 >> 1;
        }
        SpineModel_64dde0(&v34, v12, v13);
      }
      else if ((v8 & 1) != 0) {
        GameRoutine_64df20(&v34, *(_QWORD*)(v2 + 56), *(_QWORD*)(v2 + 48));
      }
      else {
        v9 = *(_QWORD*)v7;
        v10 = *(_QWORD*)(v2 + 48);
        v11 = *(_QWORD*)(v2 + 56);
        v34 = v9;
        v35 = v10;
        v36 = v11;
      }
    }
    v37 = *(_DWORD*)(v2 + 164);
    v14 = (unsigned __int8*)(v2 + 136);
    if (&v38 != (__int64*)(v2 + 136)) {
      v15 = *v14;
      if ((v38 & 1) != 0) {
        if ((v15 & 1) != 0) {
          v19 = *(_QWORD*)(v2 + 152);
        }
        else {
          v19 = v2 + 137;
        }
        if ((v15 & 1) != 0) {
          v20 = *(_QWORD*)(v2 + 144);
        }
        else {
          v20 = v15 >> 1;
        }
        SpineModel_64dde0(&v38, v19, v20);
      }
      else if ((v15 & 1) != 0) {
        GameRoutine_64df20(&v38, *(_QWORD*)(v2 + 152), *(_QWORD*)(v2 + 144));
      }
      else {
        v16 = *(_QWORD*)v14;
        v17 = *(_QWORD*)(v2 + 144);
        v18 = *(_QWORD*)(v2 + 152);
        v38 = v16;
        v39 = v17;
        v40 = v18;
      }
    }
    if (&v41 != (__int64*)(v2 + 192)) {
      GameRoutine_6b7aa0();
    }
    v21 = v32;
    v22 = v33;
    v23 = v36;
    *(_QWORD*)a1 = v31;
    *(_QWORD*)(a1 + 8) = v21;
    v24 = v34;
    v25 = v35;
    *(_QWORD*)(a1 + 16) = v22;
    *(_QWORD*)(a1 + 24) = v24;
    LODWORD(v24) = v37;
    *(_QWORD*)(a1 + 32) = v25;
    *(_QWORD*)(a1 + 40) = v23;
    v26 = v40;
    *(_DWORD*)(a1 + 48) = v24;
    v27 = v39;
    *(_QWORD*)(a1 + 56) = v38;
    *(_QWORD*)(a1 + 64) = v27;
    v28 = v41;
    v29 = v42;
    *(_BYTE*)(a1 + 104) = 1;
    *(_QWORD*)(a1 + 72) = v26;
    *(_QWORD*)(a1 + 80) = v28;
    v30 = v43;
    *(_QWORD*)(a1 + 88) = v29;
    *(_QWORD*)(a1 + 96) = v30;
  }
  else {
    *(_BYTE*)a1 = 0;
    *(_BYTE*)(a1 + 104) = 0;
  }
}

__attribute__((swiftcall)) void game_103b760(PSEUDO_X8 x8_, unsigned __int8* a1,
                                             unsigned __int8* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  unsigned __int8* v5;
  unsigned __int64 v6;
  bool v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  __n128 result;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int8* v21;
  unsigned __int64 v22;
  char* v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  char* v30;
  unsigned __int64 v31;
  __int64 v32;
  char* v33;
  unsigned __int64 v34;
  char* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  char* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  char* v48;
  char* v49;
  char v50;
  __int64 v51;
  __int64 v52;
  struct {
    __int64 v53;
    unsigned __int64 v54;
    char* v55;
  } v53_;
  struct {
    __int64 v56;
    unsigned __int64 v57;
    __int64 v58;
  } v56_;
  struct {
    __int64 v59;
    unsigned __int64 v60;
    __int64 v61;
  } v59_;
  struct {
    char* v62;
    char* v63;
    __int64 v64;
  } v62_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *a1;
  v6 = *((_QWORD*)a1 + 1);
  v5 = *((unsigned __int8**)a1 + 2);
  v8 = (v4 & 1) == 0;
  v9 = v4 >> 1;
  v62_.v63 = nullptr;
  v62_.v64 = 0;
  v62_.v62 = nullptr;
  if (v8) {
    v10 = a1 + 1;
  }
  else {
    v10 = v5;
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = v6;
  }
  RuntimeBuffer_8924a0((__int64)&v62_.v62, (__int64)v10, v11, 0x2Fu),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v13 = *a2;
  v14 = *((_QWORD*)a2 + 1);
  v15 = v13 >> 1;
  v8 = (v13 & 1) == 0;
  v16 = v62_.v62;
  if (v8) {
    v14 = v15;
  }
  if (v14 != 0 && 0xAAAAAAAAAAAAAAABLL * ((v62_.v63 - v62_.v62) >> 3) >= 2) {
    GlobalMapData_e28380(&v62_.v62, (__int64*)v62_.v62 + 6, (__int64*)a2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v16 = v62_.v62;
  }
  LOWORD(v59_.v59) = 0;
  LOWORD(v56_.v56) = 0;
  if (v62_.v63 == v16) {
  LABEL_76:
    v43 = v59_.v60;
    *a3 = v59_.v59;
    a3[1] = v43;
    a3[2] = v59_.v61;
    if ((v56_.v56 & 1) != 0) {
      goto LABEL_79;
    }
    goto LABEL_77;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0xAAAAAAAAAAAAAAABLL * ((v62_.v63 - v16) >> 3);
  do {
    v23 = &v16[v17];
    if (v19 - 1 <= v18) {
      v20 = (unsigned __int8)*v23;
      if ((v20 & 1) != 0) {
        v21 = *((unsigned __int8**)v23 + 2);
      }
      else {
        v21 = (unsigned __int8*)(v23 + 1);
      }
      if ((v20 & 1) != 0) {
        v22 = *((_QWORD*)v23 + 1);
      }
      else {
        v22 = v20 >> 1;
      }
      GameRoutine_1a09ce0(&v56_.v56, v21, v22),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_21;
    }
    v24 = (unsigned __int8)*v23;
    if ((v24 & 1) != 0) {
      v25 = *((unsigned __int8**)v23 + 2);
    }
    else {
      v25 = (unsigned __int8*)(v23 + 1);
    }
    if ((v24 & 1) != 0) {
      v26 = *((_QWORD*)v23 + 1);
    }
    else {
      v26 = v24 >> 1;
    }
    v27 = v26 + 1;
    if (v26 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_104;
    }
    if (v27 >= 0x17) {
      if ((v27 | 7) == 0x17) {
        v29 = 26;
      }
      else {
        v29 = (v27 | 7) + 1;
      }
      v28 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v29, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v53_.v54 = v26 + 1;
      v53_.v55 = v28;
      v53_.v53 = v29 | 1;
    LABEL_37:
      memmove(v28, v25, v26),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_38;
    }
    v53_.v54 = 0;
    v53_.v55 = nullptr;
    v28 = (char*)&v53_.v53 + 1;
    v53_.v53 = (unsigned __int8)(2 * v27);
    if (v26 != 0) {
      goto LABEL_37;
    }
  LABEL_38:
    *(_WORD*)&v28[v26] = 47;
    if ((v53_.v53 & 1) != 0) {
      v30 = v53_.v55;
    }
    else {
      v30 = (char*)&v53_.v53 + 1;
    }
    if ((v53_.v53 & 1) != 0) {
      v31 = v53_.v54;
    }
    else {
      v31 = (unsigned __int64)(unsigned __int8)v53_.v53 >> 1;
    }
    GameRoutine_1a09ce0(&v59_.v59, v30, v31),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v53_.v53 & 1) != 0 && v53_.v55 != nullptr) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v33 = &v62_.v62[v17];
    v34 = (unsigned __int8)v62_.v62[v17];
    if ((v34 & 1) != 0) {
      v35 = *((char**)v33 + 2);
    }
    else {
      v35 = v33 + 1;
    }
    if ((v34 & 1) != 0) {
      v36 = *(_QWORD*)&v62_.v62[v17 + 8];
    }
    else {
      v36 = v34 >> 1;
    }
    v37 = v36 + 1;
    if (v36 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_104:
      String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                          PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (v37 >= 0x17) {
      if ((v37 | 7) == 0x17) {
        v39 = 26;
      }
      else {
        v39 = (v37 | 7) + 1;
      }
      v38 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v39, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v53_.v54 = v36 + 1;
      v53_.v55 = v38;
      v53_.v53 = v39 | 1;
    LABEL_63:
      memmove(v38, v35, v36),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_64;
    }
    v53_.v54 = 0;
    v53_.v55 = nullptr;
    v38 = (char*)&v53_.v53 + 1;
    v53_.v53 = (unsigned __int8)(2 * v37);
    if (v36 != 0) {
      goto LABEL_63;
    }
  LABEL_64:
    *(_WORD*)&v38[v36] = 47;
    if ((v53_.v53 & 1) != 0) {
      v40 = v53_.v55;
    }
    else {
      v40 = (char*)&v53_.v53 + 1;
    }
    if ((v53_.v53 & 1) != 0) {
      v41 = v53_.v54;
    }
    else {
      v41 = (unsigned __int64)(unsigned __int8)v53_.v53 >> 1;
    }
    GameRoutine_1a09ce0(&v56_.v56, v40, v41),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v53_.v53 & 1) != 0 && v53_.v55 != nullptr) {
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v42 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v42);
    }
  LABEL_21:
    v16 = v62_.v62;
    ++v18;
    v17 += 24;
    v19 = 0xAAAAAAAAAAAAAAABLL * ((v62_.v63 - v62_.v62) >> 3);
  } while (v19 > v18);
  if ((v59_.v59 & 1) == 0) {
    goto LABEL_76;
  }
  fw_text_String_CopyTerminated(a3, v59_.v61, v59_.v60),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v56_.v56 & 1) == 0) {
  LABEL_77:
    v44 = v56_.v57;
    a3[3] = v56_.v56;
    a3[4] = v44;
    a3[5] = v56_.v58;
    goto LABEL_84;
  }
LABEL_79:
  fw_text_String_CopyTerminated(a3 + 3, v56_.v58, v56_.v57),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v56_.v56 & 1) != 0 && v56_.v58 != 0) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v45);
  }
LABEL_84:
  if ((v59_.v59 & 1) != 0 && v59_.v61 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v46 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v46);
  }
  v47 = v62_.v62;
  if (v62_.v62 != nullptr) {
    v48 = v62_.v63;
    if (v62_.v62 == v62_.v63) {
      goto LABEL_100;
    }
    v49 = v62_.v63;
    do {
      v50 = *(v49 - 24);
      v49 -= 24;
      if ((v50 & 1) != 0 && *((_QWORD*)v48 - 1) != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v51 = 128;
        }
        else {
          v51 = 56;
        }
        result =
            nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v51);
      }
      v48 = v49;
    } while (v49 != v47);
    v62_.v63 = v47;
    if (v62_.v62 != nullptr) {
    LABEL_100:
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v52 = 56;
      }
      {
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v52),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_103bcc0(PSEUDO_X8 x8_, __int64 unused_int0,
                                             __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 result;
  _QWORD v4[25];

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((*(_BYTE*)a1 & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 16);
  }
  else {
    v2 = a1 + 1;
  }
  if (v2 != 0) {
    snd_Fade_Fade_10c830_alt1((__int64)v4, 0x0.0p+0f),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    snd_play_ff2d0_alt1(v2, v2, (__int64)v4, 0, 0x10001u, 0, 0x0.0p+0f,
                        0x1.0000000000000p+0f),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    {
      snd_Fade_Destroy_Fade_alt1(v4),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
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

void game_1040540(__int64 a1)
{
  float v2;
  __int64 v3;
  float32x4_t* v4;
  unsigned __int8 v5;
  float v6;
  unsigned __int32 v7;
  __int128 v8;
  float v9;
  __int64 v10;
  float32x4_t v11;
  __int64 v12;
  float v13;
  unsigned __int64 v14;
  int8x16_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  int8x16_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  int8x16_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  int8x16_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  int8x16_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  int8x16_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  __int64* v71;
  __int64* v72;
  __int64* v73;
  float32x4_t v74;
  int8x16_t v75;
  float v76;
  float32x4_t v77;
  int8x16_t v78;
  float v79;
  float v80;
  float v81;
  __int64* v82;
  __int64 v83;
  char v84;
  int v85;
  float v86;
  float v87;
  bool v88;
  __int64 v89;
  int v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  __int64 v101;
  __int64 v102;
  _QWORD* v103;
  _QWORD* v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float32x4_t v121;
  __int128 v122;
  float32x4_t v123;
  unsigned __int64 v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  struct {
    char gap96_[8];
    __int64* v128;
    __int64* v129;
    __int64 v130;
    float32x4_t v131;
  } v128_;
  float32x4_t v132;
  struct {
    float32x4_t v133[2];
    char v134;
  } v133_;
  struct {
    float32x4_t v135[5];
    char v136;
    char gap289_[47];
    float32x4_t v137;
    char v138;
  } v135_;
  float32x4_t v139[2];

  v2 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL);
  v3 = GameData_212dc38[0];
  v4 = *(float32x4_t**)(a1 + 8);
  game_10413a0((void*)(v133_.v133), a1, v4 + 59, v4 + 60,
               *(float*)(*(_QWORD*)GameData_212dc38[0] + 1064LL),
               LANES128(v4[45]).n128_f32[0]);
  if (v133_.v134 != 1) {
    return;
  }
  v5 = LANES128(v133_.v133[0]).n128_u8[0];
  v132 = v133_.v133[1];
  v128_.v131 = v133_.v133[0];
  *(float32x4_t*)(a1 + 16) = v133_.v133[0];
  v6 = (float)(v2 * 0x1.0aef000000000p+4f) / 0x1.f400000000000p+9f;
  v7 = LANES128(v132).n128_u32[2];
  *(_QWORD*)(a1 + 32) = LANES128(v132).n128_u64[0];
  v8 = *(_OWORD*)(a1 + 32);
  *((_QWORD*)&v8 + 1) = v7;
  *(_OWORD*)(a1 + 32) = v8;
  v9 = *(float*)(a1 + 80);
  if ((v5 & 1) == 0 || v9 > 0x0.0p+0f) {
    v80 = LANES128(v128_.v131).n128_f32[1];
    v81 = 0x0.0p+0f;
    if ((v5 & 1) != 0) {
      goto LABEL_21;
    }
    goto LABEL_23;
  }
  v10 = *(_QWORD*)(a1 + 8);
  LANES128(v11).n128_u32[0] = 0;
  LANES128(v11).n128_u32[3] = 0;
  v128_.v129 = nullptr;
  v128_.v130 = 0;
  v128_.v128 = nullptr;
  *(unsigned __int64*)((char*)LANES128(v11).n128_u64 + 4) =
      *(unsigned int*)(v10 + 788);
  v135_.v135[0] = v11;
  GameRoutine_1017900(&v128_.v128, (__int64*)v135_.v135);
  v12 = *(_QWORD*)(a1 + 8);
  v13 = *(float*)(v12 + 832);
  LODWORD(v14) = *(_DWORD*)(v12 + 792);
  v124 = v14;
  math_Quat_FromYawPitchRoll((void*)(v139), v13 * 0x1.1df46a0000000p-6f,
                             0x0.0p+0f, 0x0.0p+0f);
  LANES128(v15).n128_u64[0] = v124;
  LANES128(v16).n128_u64[0] = v124;
  v17 = vmulq_f32(v139[0], COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[1] = LANES128(v18).n128_u64[0];
  LANES128(v16).n128_u64[1] = LANES128(v19).n128_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v127 = v18;
  v126 = v16;
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v15).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v17).n128_u64[0]), 1);
  LANES128(v19).n128_u64[1] = LANES128(v21).n128_u64[0];
  LANES128(v21).n128_u64[1] = v124;
  v123 = v19;
  v125 = v21;
  v22 = vmlaq_f32(
      vmlaq_f32(vmulq_f32(v17, v18), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v16, v20)),
      COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v21, v15));
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v15).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v17).n128_u64[0];
  v23 = vmlsq_f32(v22, v15, v19);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] = LANES128(v139[0]).n128_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v15).n128_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v24 = vmlaq_f32(vmulq_f32(v17, v23), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v19, v20));
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v21).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v23).n128_u64[0]), 1);
  LANES128(v15).n128_u64[1] = LANES128(v20).n128_u64[0];
  LANES128(v20).n128_u64[1] = LANES128(v139[0]).n128_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v25).n128_i8[8] =
      vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v26 = vmlsq_f32(vmlaq_f32(v24, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v20, v21)),
                  v25, v15);
  LANES128(v26).n128_u32[3] = 0;
  v135_.v135[0] = v26;
  StateMoveTo_d42860(&v128_.v128, (__int64*)v135_.v135);
  v139[0] = vsubq_f32(COERCE_AS(float32x4_t, 0), v135_.v135[0]);
  GameRoutine_1017900(&v128_.v128, (__int64*)v139);
  math_Quat_FromYawPitchRoll((void*)(v139),
                             (float)(v13 + 0x1.e000000000000p+4f) *
                                 0x1.1df46a0000000p-6f,
                             0x0.0p+0f, 0x0.0p+0f);
  v27 = vmulq_f32(v139[0], COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v28).n128_u64[0] = LANES128(v139[0]).n128_u64[0];
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v29).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v30 =
      vmlaq_f32(vmulq_f32(v127, v27), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v126, v29));
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v29).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v27).n128_u64[0]), 1);
  v31 = vmlaq_f32(v30, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v125, v29));
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v29).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v32 = vmlsq_f32(v31, v29, v123);
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[1] = LANES128(v27).n128_u64[0];
  LANES128(v28).n128_u64[1] = LANES128(v29).n128_u64[0];
  *(int8x8_t*)&LANES128(v33).n128_i8[8] =
      vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v35 = vmlaq_f32(vmulq_f32(v27, v32), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v28, v33));
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v34).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v32).n128_u64[0]), 1);
  LANES128(v29).n128_u64[1] = LANES128(v33).n128_u64[0];
  LANES128(v33).n128_u64[1] = LANES128(v139[0]).n128_u64[0];
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v36).n128_i8[8] =
      vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v37 = vmlsq_f32(vmlaq_f32(v35, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v33, v34)),
                  v36, v29);
  LANES128(v37).n128_u32[3] = 0;
  v135_.v135[0] = v37;
  StateMoveTo_d42860(&v128_.v128, (__int64*)v135_.v135);
  v139[0] = vsubq_f32(COERCE_AS(float32x4_t, 0), v135_.v135[0]);
  GameRoutine_1017900(&v128_.v128, (__int64*)v139);
  math_Quat_FromYawPitchRoll((void*)(v139),
                             (float)(v13 + -0x1.e000000000000p+4f) *
                                 0x1.1df46a0000000p-6f,
                             0x0.0p+0f, 0x0.0p+0f);
  v38 = vmulq_f32(v139[0], COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v39).n128_u64[0] = LANES128(v139[0]).n128_u64[0];
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v40).n128_i8[8] =
      vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v41 =
      vmlaq_f32(vmulq_f32(v127, v38), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v126, v40));
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v40).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 1);
  v42 = vmlaq_f32(v41, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v125, v40));
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v40).n128_i8[8] =
      vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v43 = vmlsq_f32(v42, v40, v123);
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v44).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v38).n128_u64[1] = LANES128(v38).n128_u64[0];
  LANES128(v39).n128_u64[1] = LANES128(v40).n128_u64[0];
  *(int8x8_t*)&LANES128(v44).n128_i8[8] =
      vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v46 = vmlaq_f32(vmulq_f32(v38, v43), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v39, v44));
  LANES128(v44).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v45).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v43).n128_u64[0]), 1);
  LANES128(v40).n128_u64[1] = LANES128(v44).n128_u64[0];
  LANES128(v44).n128_u64[1] = LANES128(v139[0]).n128_u64[0];
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v47).n128_i8[8] =
      vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v48 = vmlsq_f32(vmlaq_f32(v46, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v44, v45)),
                  v47, v40);
  LANES128(v48).n128_u32[3] = 0;
  v135_.v135[0] = v48;
  StateMoveTo_d42860(&v128_.v128, (__int64*)v135_.v135);
  v139[0] = vsubq_f32(COERCE_AS(float32x4_t, 0), v135_.v135[0]);
  GameRoutine_1017900(&v128_.v128, (__int64*)v139);
  math_Quat_FromYawPitchRoll((void*)(v139),
                             (float)(v13 + 0x1.e000000000000p+5f) *
                                 0x1.1df46a0000000p-6f,
                             0x0.0p+0f, 0x0.0p+0f);
  v49 = vmulq_f32(v139[0], COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v50).n128_u64[0] = LANES128(v139[0]).n128_u64[0];
  LANES128(v51).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v51).n128_i8[8] =
      vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v52 =
      vmlaq_f32(vmulq_f32(v127, v49), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v126, v51));
  LANES128(v51).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v51).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v49).n128_u64[0]), 1);
  v53 = vmlaq_f32(v52, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v125, v51));
  LANES128(v51).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v51).n128_i8[8] =
      vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v54 = vmlsq_f32(v53, v51, v123);
  LANES128(v49).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v51).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v55).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v49).n128_u64[1] = LANES128(v49).n128_u64[0];
  LANES128(v50).n128_u64[1] = LANES128(v51).n128_u64[0];
  *(int8x8_t*)&LANES128(v55).n128_i8[8] =
      vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v56).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v57 = vmlaq_f32(vmulq_f32(v49, v54), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v50, v55));
  LANES128(v55).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v56).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v54).n128_u64[0]), 1);
  LANES128(v51).n128_u64[1] = LANES128(v55).n128_u64[0];
  LANES128(v55).n128_u64[1] = LANES128(v139[0]).n128_u64[0];
  LANES128(v58).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v58).n128_i8[8] =
      vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v59 = vmlsq_f32(vmlaq_f32(v57, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v55, v56)),
                  v58, v51);
  LANES128(v59).n128_u32[3] = 0;
  v135_.v135[0] = v59;
  StateMoveTo_d42860(&v128_.v128, (__int64*)v135_.v135);
  v139[0] = vsubq_f32(COERCE_AS(float32x4_t, 0), v135_.v135[0]);
  GameRoutine_1017900(&v128_.v128, (__int64*)v139);
  math_Quat_FromYawPitchRoll((void*)(v139),
                             (float)(v13 + -0x1.e000000000000p+5f) *
                                 0x1.1df46a0000000p-6f,
                             0x0.0p+0f, 0x0.0p+0f);
  v60 = vmulq_f32(v139[0], COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v61).n128_u64[0] = LANES128(v139[0]).n128_u64[0];
  LANES128(v62).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v62).n128_i8[8] =
      vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v63 =
      vmlaq_f32(vmulq_f32(v127, v60), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v126, v62));
  LANES128(v62).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v62).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v60).n128_u64[0]), 1);
  v64 = vmlaq_f32(v63, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v125, v62));
  LANES128(v62).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v62).n128_i8[8] =
      vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v65 = vmlsq_f32(v64, v62, v123);
  LANES128(v60).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v62).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v66).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v60).n128_u64[1] = LANES128(v60).n128_u64[0];
  LANES128(v61).n128_u64[1] = LANES128(v62).n128_u64[0];
  *(int8x8_t*)&LANES128(v66).n128_i8[8] =
      vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v67).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v68 = vmlaq_f32(vmulq_f32(v60, v65), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v61, v66));
  LANES128(v66).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139[0], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v67).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v65).n128_u64[0]), 1);
  LANES128(v62).n128_u64[1] = LANES128(v66).n128_u64[0];
  LANES128(v66).n128_u64[1] = LANES128(v139[0]).n128_u64[0];
  LANES128(v69).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v69).n128_i8[8] =
      vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v70 = vmlsq_f32(vmlaq_f32(v68, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v66, v67)),
                  v69, v62);
  LANES128(v70).n128_u32[3] = 0;
  v135_.v135[0] = v70;
  StateMoveTo_d42860(&v128_.v128, (__int64*)v135_.v135);
  v139[0] = vsubq_f32(COERCE_AS(float32x4_t, 0), v135_.v135[0]);
  GameRoutine_1017900(&v128_.v128, (__int64*)v139);
  v71 = v128_.v128;
  v72 = v128_.v129;
  if (v128_.v128 == v128_.v129) {
  LABEL_16:
    v81 = 0x0.0p+0f;
    v82 = v128_.v128;
    if (v128_.v128 == nullptr) {
      goto LABEL_20;
    }
    goto LABEL_17;
  }
  v73 = GameData_212ebd0[0];
  while (1) {
    v74 = *(float32x4_t*)v71;
    v75 = vmulq_f32(v74, v74);
    LANES128(v75).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v75, v75, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0])))
            .n64_f32[0] >= 0x1.0000000000000p-23f) {
      v76 = *(float*)(*(_QWORD*)v3 + 1064LL);
      v139[0] = vaddq_f32(v74, v4[59]);
      collision_670c60_alt1((void*)((__int64)v135_.v135), v4 + 59, v139,
                            0x100000003LL);
      if ((v135_.v136 & 1) != 0) {
        goto LABEL_6;
      }
      game_zview_d163f0((void*)(v135_.v135), *v73, v139, &v132, 0x100000003LL,
                        0, v76);
      if ((v135_.v138 & 1) != 0) {
        goto LABEL_6;
      }
      game_zview_d163f0((void*)(v135_.v135), *v73, &v132, &v4[59],
                        0x100000003LL, 1, v76);
      if (v135_.v138 != 1) {
        break;
      }
      v77 = vsubq_f32(v132, v135_.v137);
      v78 = vmulq_f32(v77, v77);
      LANES128(v78).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v78, v78, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0])))
              .n64_u64[0];
      v79 = fminf(
          (float)(LANES128(v128_.v131).n128_f32[2] -
                  LANES64_OF(
                      vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0]))))
                      .n64_f32[0]) +
              (float)(LANES128(v128_.v131).n128_f32[2] * 0x1.99999a0000000p-4f),
          LANES128(v128_.v131).n128_f32[2]);
      if (*(float*)(a1 + 92) >= (float)(LANES128(v128_.v131).n128_f32[2] *
                                        0x1.cccccc0000000p-1f) ||
          v79 <= (float)(LANES128(v128_.v131).n128_f32[2] *
                         0x1.cccccc0000000p-1f)) {
        goto LABEL_99;
      }
    }
  LABEL_6:
    v71 += 2;
    if (v71 == v72) {
      goto LABEL_16;
    }
  }
  v79 = 0x0.0p+0f;
LABEL_99:
  LANES128(v128_.v131).n128_u8[0] = 0;
  LANES128(v128_.v131).n128_u32[1] = LANES128(v128_.v131).n128_u32[2];
  v81 = v79;
  v82 = v128_.v128;
  if (v128_.v128 != nullptr) {
  LABEL_17:
    v128_.v129 = v82;
    v83 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v83 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v83);
  }
LABEL_20:
  v80 = LANES128(v128_.v131).n128_f32[1];
  if ((LANES128(v128_.v131).n128_u8[0] & 1) != 0) {
  LABEL_21:
    v84 = 0;
    v85 = 1;
    v9 = 0x1.99999a0000000p-3f;
    goto LABEL_32;
  }
  v9 = *(float*)(a1 + 80);
LABEL_23:
  v86 = fabsf(v6);
  if (v9 <= 0x0.0p+0f) {
    v87 = v86 + v9;
    if (v87 > 0x0.0p+0f) {
      v87 = 0x0.0p+0f;
    }
    v88 = v9 < 0x0.0p+0f;
    v85 = 0;
  }
  else {
    v9 = v9 - v86;
    v87 = 0x0.0p+0f;
    v85 = 0;
    v88 = v9 < 0x0.0p+0f;
  }
  if (v88) {
    v9 = v87;
  }
  v84 = 1;
LABEL_32:
  v89 = *(_QWORD*)(a1 + 8);
  *(float*)(a1 + 80) = v9;
  if (*(_BYTE*)(v89 + 876) == 1) {
    *(_BYTE*)(a1 + 88) = 0;
    *(float*)(a1 + 92) = v80;
    *(_DWORD*)(a1 + 84) = 1065353216;
    goto LABEL_96;
  }
  v90 = *(unsigned __int8*)(a1 + 96);
  if (v90 == 1) {
    *(_BYTE*)(a1 + 88) = 1;
    *(_DWORD*)(a1 + 84) = 1065353216;
  }
  v91 = LANES128(v128_.v131).n128_f32[2];
  if (LANES128(v128_.v131).n128_f32[2] > 0x0.0p+0f) {
    v92 = 0x1.0000000000000p+0f;
    if (v85 != 0) {
      v93 = fminf(fmaxf(v80 / LANES128(v128_.v131).n128_f32[2], 0x0.0p+0f),
                  0x1.0000000000000p+0f);
      v92 = (float)(fminf(fmaxf(v93 * v93, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                    0x1.99999a0000000p-1f) +
            0x1.99999a0000000p-3f;
    }
    if (v92 < *(float*)(a1 + 84)) {
      *(float*)(a1 + 84) = v92;
    }
  }
  if ((*(_BYTE*)(a1 + 88) & 1) != 0) {
  LABEL_51:
    v100 = 0x1.0000000000000p+0f;
    v101 = **(_QWORD**)(v89 + 880);
    if (v101 != 0) {
      v102 = *GameData_212eba8[0];
      if (*GameData_212eba8[0] != 0) {
        v103 = *(_QWORD**)(v102 + 8);
        v104 = *(_QWORD**)(v102 + 16);
        if (v103 != v104) {
          while (*v103 != v101) {
            v103 += 2;
            if (v103 == v104) {
              v100 = 0x1.0000000000000p+0f;
              goto LABEL_61;
            }
          }
        }
        v100 = 0x1.0000000000000p+0f;
        if (v103 != v104) {
          v105 = fminf(
              fmaxf(
                  (float)(sqrtf(
                              (float)(PSEUDO_UNFUSED(
                                  *(float*)(*(_QWORD*)(v101 + 16) + 672LL) *
                                  *(float*)(*(_QWORD*)(v101 + 16) + 672LL))) +
                              (float)(*(float*)(*(_QWORD*)(v101 + 16) + 668LL) *
                                      *(float*)(*(_QWORD*)(v101 + 16) +
                                                668LL))) +
                          -0x1.0000000000000p+1f) /
                      0x1.c000000000000p+2f,
                  0x0.0p+0f),
              0x1.0000000000000p+0f);
          v106 = (float)(fminf(fmaxf(v105, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                         0x1.99999a0000000p-1f) +
                 0x1.99999a0000000p-3f;
          if (v105 > 0x0.0p+0f) {
            v105 = v106;
          }
          v100 = v105 + 0x1.0000000000000p+0f;
        }
      }
    }
  LABEL_61:
    v107 = 0x1.c000000000000p+1f / v100;
    v108 = *(float*)(a1 + 84);
    v109 = fabsf(v6 / v107);
    if (v108 <= 0x1.0000000000000p+0f) {
      if (v108 >= 0x1.0000000000000p+0f ||
          (v108 = v108 + v109) <= 0x1.0000000000000p+0f) {
      LABEL_67:
        *(float*)(a1 + 84) = v108;
        v110 = v6 * v108;
        v94 = *(float*)(a1 + 92);
        if (v110 <= 0x0.0p+0f) {
          goto LABEL_84;
        }
        v111 = vabds_f32(v94, v80);
        v112 = v110 + v110;
        if (v111 <= 0x1.0000000000000p+0f) {
          v113 = v111;
        }
        else {
          v113 = 0x1.0000000000000p+0f;
        }
        v114 = v111 + v111;
        if (v114 > 0x1.0000000000000p+0f) {
          v114 = 0x1.0000000000000p+0f;
        }
        if (v90 != 0) {
          v112 = 0x1.0000000000000p+1f;
        }
        v94 = v94 + (float)(fminf(fmaxf(v112 * v113, 0x0.0p+0f),
                                  0x1.0000000000000p+0f) *
                            (float)(v80 - v94));
        v115 = fminf(fmaxf(v94 / v91, 0x0.0p+0f), 0x1.0000000000000p+0f);
        v116 = fabsf(
            v110 *
            (float)((float)((float)(v115 * -0x1.3333340000000p-3f) +
                            0x1.99999a0000000p-3f) +
                    (float)(fminf(fmaxf(v114 * v114, 0x0.0p+0f),
                                  0x1.0000000000000p+0f) *
                            (float)(0x1.0000000000000p+0f -
                                    (float)((float)(v115 *
                                                    -0x1.3333340000000p-3f) +
                                            0x1.99999a0000000p-3f)))));
        if (v90 != 0) {
          v116 = 0x1.0000000000000p+4f;
        }
        if (v94 <= v80) {
          if (v94 >= v80) {
            goto LABEL_83;
          }
          v94 = v94 + v116;
          if (v94 <= v80) {
            goto LABEL_83;
          }
        }
        else {
          v94 = v94 - v116;
          if (v94 >= v80) {
            goto LABEL_83;
          }
        }
        v94 = v80;
      LABEL_83:
        *(float*)(a1 + 92) = v94;
      LABEL_84:
        if (vabds_f32(v94, v80) < 0x1.0000000000000p-23f) {
          *(_BYTE*)(a1 + 88) = 0;
        }
        goto LABEL_86;
      }
    }
    else {
      v108 = v108 - v109;
      if (v108 >= 0x1.0000000000000p+0f) {
        goto LABEL_67;
      }
    }
    v108 = 0x1.0000000000000p+0f;
    goto LABEL_67;
  }
  if ((v84 & 1) != 0) {
    goto LABEL_50;
  }
  v94 = *(float*)(a1 + 92);
  v95 = 0x0.0p+0f;
  v96 = vabds_f32(v94, v80);
  v97 = v91 - (float)(PSEUDO_UNFUSED(v91 * 0x1.99999a0000000p-3f));
  if (v97 != 0x0.0p+0f) {
    v98 = (float)(v94 - (float)(PSEUDO_UNFUSED(v91 * 0x1.99999a0000000p-3f))) /
          v97;
    v99 = 0x1.0000000000000p+0f;
    if (v98 <= 0x1.0000000000000p+0f) {
      v99 = v98;
    }
    if (v98 >= 0x0.0p+0f) {
      v95 = v99;
    }
    else {
      v95 = 0x0.0p+0f;
    }
  }
  if (v96 > (float)(v91 * (float)((float)(fminf(fmaxf(v95, 0x0.0p+0f),
                                                0x1.0000000000000p+0f) *
                                          0x1.3333340000000p-3f) +
                                  0x1.99999a0000000p-5f))) {
  LABEL_50:
    *(_BYTE*)(a1 + 88) = 1;
    goto LABEL_51;
  }
LABEL_86:
  v117 = *(float*)(v89 + 868);
  if (v117 > 0x0.0p+0f) {
    v118 = v94 + (float)(fminf(fmaxf((float)(fminf(fmaxf(v117, 0x0.0p+0f),
                                                   0x1.0000000000000p+0f) *
                                             0x1.0000000000000p-1f) +
                                         0x0.0p+0f,
                                     0x0.0p+0f),
                               0x1.0000000000000p+0f) *
                         (float)(v80 - v94));
    v119 = v80 + -0x1.0000000000000p+0f;
    if (v118 >= v119) {
      v94 = v118;
    }
    else {
      v94 = v119;
    }
  }
  if (v94 >= v81) {
    v120 = v94;
  }
  else {
    v120 = v81;
  }
  if (LANES128(v128_.v131).n128_f32[1] < v120) {
    v120 = LANES128(v128_.v131).n128_f32[1];
  }
  *(float*)(a1 + 92) = v120;
LABEL_96:
  v121 = v132;
  *(float32x4_t*)(a1 + 48) = v128_.v131;
  *(_QWORD*)(a1 + 64) = LANES128(v121).n128_u64[0];
  v122 = *(_OWORD*)(a1 + 64);
  *((_QWORD*)&v122 + 1) = LANES128(v121).n128_u32[2];
  *(_OWORD*)(a1 + 64) = v122;
}

void game_10411d0(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  float32x4_t* v2;
  float v4;
  float v5;
  float v6;
  float v8;
  int v9;
  float v10;
  float v11;
  float v12;
  float32x4_t v13;
  struct {
    float32x4_t v14[2];
    char v15;
  } v14_;

  v1 = *(unsigned __int8*)(a1 + 16);
  *(_DWORD*)(a1 + 192) = 0;
  if (v1 != 0) {
    v2 = *(float32x4_t**)(a1 + 8);
    v4 = LANES128(v2[44]).n128_f32[2];
    if (v4 > 0x0.0p+0f) {
      v12 = v4 * 0x1.0000000000000p+2f;
      v5 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 1064LL);
      v6 = LANES128(v2[45]).n128_f32[0];
      v13 = vaddq_f32(
          COERCE_AS(float32x4_t,
                    COERCE_UNSIGNED_INT((float)(v4 * 0x1.0000000000000p+2f) *
                                        -0x1.0000000000000p-1f)),
          v2[60]);
      game_10413a0((void*)(v14_.v14), a1, v2 + 59, &v13, v5, v6);
      if (v14_.v15 == 1 && LANES128(v14_.v14[0]).n128_u8[0] == 0) {
        goto LABEL_12;
      }
      v8 = LANES128(v2[45]).n128_f32[0];
      v13 =
          vaddq_f32(COERCE_AS(float32x4_t,
                              COERCE_UNSIGNED_INT(v12 * 0x1.0000000000000p-1f)),
                    v2[60]);
      game_10413a0((void*)(v14_.v14), a1, v2 + 59, &v13, v5, v8);
      if (v14_.v15 == 1 && LANES128(v14_.v14[0]).n128_u8[0] == 0) {
        goto LABEL_9;
      }
      v10 = LANES128(v2[45]).n128_f32[0];
      v13 = vaddq_f32(
          COERCE_AS(float32x4_t,
                    COERCE_UNSIGNED_INT(-(float)(v4 * 0x1.0000000000000p+2f))),
          v2[60]);
      game_10413a0((void*)(v14_.v14), a1, v2 + 59, &v13, v5, v10);
      if (v14_.v15 == 1 && LANES128(v14_.v14[0]).n128_u8[0] == 0) {
      LABEL_12:
        v9 = 1;
        goto LABEL_13;
      }
      v11 = LANES128(v2[45]).n128_f32[0];
      v13 = vaddq_f32(COERCE_AS(float32x4_t, LODWORD(v12)), v2[60]);
      game_10413a0((void*)(v14_.v14), a1, v2 + 59, &v13, v5, v11);
      if (v14_.v15 == 1 && (LANES128(v14_.v14[0]).n128_u8[0] & 1) == 0) {
      LABEL_9:
        v9 = 2;
      LABEL_13:
        *(_DWORD*)(a1 + 192) = v9;
      }
    }
  }
}

__attribute__((swiftcall)) void game_10413a0(PSEUDO_X8 x8_, __int64 a1,
                                             float32x4_t* a2, float32x4_t* a3,
                                             float a5, float a6)
{

#pragma clang fp contract(off)
  float32x4_t* a4 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float32x4_t v16;
  int v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  __int64* v21;
  float v22;
  float32x4_t v23;
  float32x4_t v24;
  unsigned int v25;
  float32x4_t v26;
  int8x16_t v27;
  float v28;
  float v29;
  __int64 v30;
  unsigned __int32 v31;
  unsigned __int8 v32;
  float32x4_t v33;
  float v35;
  float v36;
  float32x4_t v37;
  struct {
    _QWORD v38[18];
    char v39;
  } v38_;
  float32x4_t v40;
  struct {
    _QWORD v41[16];
    float32x4_t v42;
    char v43;
  } v41_;
  struct {
    _QWORD v44[18];
    char v45;
  } v44_;
  float32x4_t v46;
  float32x4_t v47;

  LANES64(v10).n64_u64[0] =
      LANES128_OF(vaddq_f32(*a3, COERCE_AS(float32x4_t, 0))).n128_u64[0];
  v11 = 0x1.1df46a0000000p-6f * LANES64(v10).n64_f32[0];
  v12 = vmuls_lane_f32(0x1.1df46a0000000p-6f, v10, 1);
  v13 = sinf(0x1.1df46a0000000p-6f * LANES64(v10).n64_f32[0]);
  v14 = cosf(v11);
  v36 = sinf(v12);
  v15 = cosf(v12);
  LANES128(v16).n128_u32[3] = 0;
  LANES128(v16).n128_f32[0] = v13 * v15;
  v17 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 880LL) + 64LL);
  LANES128(v16).n128_f32[1] = v36;
  LANES128(v16).n128_f32[2] = v14 * v15;
  v18 = vsubq_f32(COERCE_AS(float32x4_t, 0), v16);
  v19 = *a2;
  v20 = vsubq_f32(*a2, vmulq_n_f32(v18, a6));
  v47 = v20;
  if (v17 != 1) {
    v32 = 0;
    v29 = a6;
    v31 = LODWORD(a6);
  LABEL_16:
    LANES128(v20).n128_u32[3] = 0;
    LANES128(*(a4)).n128_u8[0] = v32;
    LANES128(*(a4)).n128_f32[1] = v29;
    LANES128(*(a4)).n128_u32[2] = v31;
    LANES128(*(a4)).n128_u32[3] = 0;
    LANES128(a4[2]).n128_u8[0] = 1;
    a4[1] = v20;
    return;
  }
  v33 = v20;
  v37 = v18;
  v46 = vaddq_f32(v19, v18);
  v21 = GameData_212ebd0[0];
  game_zview_d163f0((void*)(v44_.v44), *GameData_212ebd0[0], a2, &v46,
                    0x100000003LL, 0, a5);
  v22 = 0x1.0000000000000p+0f;
  if (v44_.v45 == 1) {
    v23 = *a2;
    v22 = 0x0.0p+0f;
    LANES128(v46).n128_u64[0] = LANES128(*(a2)).n128_u64[0];
    LANES128(v24).n128_u64[0] = LANES128(v46).n128_u64[0];
    LANES128(v24).n128_u64[1] = LANES128(v23).n128_u32[2];
    v46 = v24;
  }
  game_zview_d163f0((void*)(v41_.v41), *v21, &v46, &v47, 0x100000003LL, 1, a5);
  if (v41_.v43 != 1) {
    v20 = v33;
    v31 = LODWORD(a6);
    v32 = 0;
    v29 = a6;
    goto LABEL_16;
  }
  v25 = 40;
  v26 = vsubq_f32(v46, v41_.v42);
  v27 = vmulq_f32(v26, v26);
  LANES128(v27).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
          .n64_u64[0];
  v28 = LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]))))
            .n64_f32[0] -
        v22;
  if (v28 >= 0x0.0p+0f) {
    v29 = v28;
  }
  else {
    v29 = 0x0.0p+0f;
  }
  while (1) {
    v30 = *v21;
    v35 = (float)(v29 * (float)v25) / 0x1.4000000000000p+5f;
    v40 = vsubq_f32(*a2, vmulq_n_f32(v37, v35));
    game_zview_d163f0((void*)(v38_.v38), v30, a2, &v40, 0x100000003LL, 0, a5);
    if (v38_.v39 != 1) {
      break;
    }
    if (--v25 == -1) {
      v20 = v33;
      v31 = LODWORD(a6);
    LABEL_15:
      v32 = 1;
      goto LABEL_16;
    }
  }
  v20 = v33;
  if (v35 >= 0x0.0p+0f) {
    v29 = (float)(v29 * (float)v25) / 0x1.4000000000000p+5f;
    v31 = LODWORD(a6);
    goto LABEL_15;
  }
  LANES128(*(a4)).n128_u8[0] = 0;
  LANES128(a4[2]).n128_u8[0] = 0;
}

void game_10460c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float32x4_t v4;
  int8x16_t v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;
  float32x4_t v11;

  v2 = *(_QWORD*)GameData_212dc38[0];
  if (*(_BYTE*)(*(_QWORD*)GameData_212dc38[0] + 816LL) != 1 ||
      (v3 = *(_QWORD*)(v2 + 1160),
       v11 = COERCE_FLOAT32X4_T(Camera_b3bb60(v2 + 16)),
       v4 = vsubq_f32(v11, COERCE_FLOAT32X4_T(Camera_b3bb60(v3 + 80))),
       v5 = vmulq_f32(v4, v4),
       LANES128(v5).n128_u64[0] =
           LANES64_OF(
               vadd_f32(
                   COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
               .n64_u64[0],
       LANES64_OF(vsqrt_f32(vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]))))
               .n64_f32[0] <= 2.0f)) {
    v6 = *(unsigned __int8**)(a1 + 16);
    if (v6 != nullptr) {
      v7 = *v6;
      v8 = v7 > 0x10;
      v9 = (1 << v7) & 0x1CE00;
      if (!v8 && v9 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
}

__attribute__((swiftcall)) void game_104bd20(PSEUDO_X8 x8_, __int64 result,
                                             __int64 a2)
{
  _OWORD* a3 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int128* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _OWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _OWORD* v26;
  _BYTE v27[64];

  v3 = *(_QWORD*)(result + 24);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v5 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v25 = a2;
    v26 = a3;
    result = __cxa_guard_acquire(GameData_212df10);
    a2 = v25;
    a3 = v26;
    if ((_DWORD)result != 0) {
      *v5 = wld_Crc32(0, "ModelModule", 11);
      result = __cxa_guard_release(GameData_212df10);
      a2 = v25;
      a3 = v26;
    }
  }
  v6 = *(_QWORD*)(v3 + 512);
  v7 = v6;
  while (v7 != *(_QWORD*)(v3 + 504)) {
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    v6 -= 16;
    if (v8 == *v5) {
      if (*(_QWORD*)(v3 + 512) != v6) {
        result = *(_QWORD*)(v6 + 8);
        if (result != 0) {
          v9 = (__int128*)v27;
          v10 = a3;
          result = GameRoutine_a7f140(result, v27, a2);
          v11 = v10;
          if ((result & 1) == 0) {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                                      memory_order_acquire) &
                 1) != 0) {
              v9 = &GameData_21a5580;
            }
            else {
              result = __cxa_guard_acquire(&GameData_21a55c0);
              v9 = &GameData_21a5580;
              if ((_DWORD)result != 0) {
                v21 = *(_QWORD*)((char*)((char*)0x20LL) +
                                 (_QWORD)GameData_212c2a0 + 8);
                *(_QWORD*)&GameData_21a55a0 = *(
                    _QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
                *((_QWORD*)&GameData_21a55a0 + 1) = v21;
                v22 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                                  (_QWORD)GameData_212c2a0);
                *(_QWORD*)&GameData_21a55b0 =
                    *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                                (_QWORD)GameData_212c2a0);
                *((_QWORD*)&GameData_21a55b0 + 1) = v22;
                v23 = *((_QWORD*)GameData_212c2a0 + 1);
                *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
                *((_QWORD*)&GameData_21a5580 + 1) = v23;
                v24 = *(_QWORD*)((char*)((__int128*)0x10LL) +
                                 (_QWORD)GameData_212c2a0 + 8);
                *(_QWORD*)&GameData_21a5590 =
                    *(_QWORD*)((char*)((__int128*)0x10LL) +
                               (_QWORD)GameData_212c2a0);
                *((_QWORD*)&GameData_21a5590 + 1) = v24;
                result = __cxa_guard_release(&GameData_21a55c0);
              }
              v11 = v10;
            }
          }
          v12 = *((_QWORD*)v9 + 5);
          v11[4] = *((_QWORD*)v9 + 4);
          v11[5] = v12;
          v13 = *((_QWORD*)v9 + 7);
          v11[6] = *((_QWORD*)v9 + 6);
          v11[7] = v13;
          v14 = *((_QWORD*)v9 + 1);
          *v11 = *(_QWORD*)v9;
          v11[1] = v14;
          v15 = *((_QWORD*)v9 + 3);
          v11[2] = *((_QWORD*)v9 + 2);
          v11[3] = v15;
          {
            result;
            return;
          }
        }
      }
      break;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0) {
    v16 = a3;
    result = __cxa_guard_acquire(&GameData_21a55c0);
    a3 = v16;
    if ((_DWORD)result != 0) {
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
      v20 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a5590 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a5590 + 1) = v20;
      result = __cxa_guard_release(&GameData_21a55c0);
      a3 = v16;
    }
  }
  a3[2] = GameData_21a55a0;
  a3[3] = GameData_21a55b0;
  *a3 = GameData_21a5580;
  a3[1] = GameData_21a5590;
  {
    result;
    return;
  }
}

__int64 game_104bf20(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6)
{
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  char* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  _QWORD* v44;
  char* v45;
  char* v46;
  unsigned __int64 v47;
  char* v48;
  char* v49;
  char* v50;
  __int64 v51;
  char* v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 result;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD v64[4];
  _QWORD* v65;
  _OWORD v66[4];
  _QWORD v67[2];
  char* v68;
  _QWORD* v69;

  strlen(a4);
  game_104bd20((void*)(v66), (__int64)a1, a4);
  v10 = strlen(a2);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_114;
  }
  v11 = v10;
  v12 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v10 | 7) + 1;
    }
    v13 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v14, 16, 0);
    v63 = v11;
    v64[0] = v13;
    v62 = v14 | 1;
    goto LABEL_9;
  }
  LOBYTE(v62) = 2 * v10;
  v13 = (char*)&v62 + 1;
  if (v10 != 0) {
  LABEL_9:
    memmove(v13, a2, v11);
  }
  v13[v11] = 0;
  if ((v62 & 1) != 0) {
    v15 = (char*)v64[0];
  }
  else {
    v15 = (char*)&v62 + 1;
  }
  GameRoutine_9a3bc0(4, v15);
  if ((v62 & 1) != 0 && v64[0] != 0) {
    v16 = 128;
    if (*(_QWORD*)(*v12 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*v12 + v16);
  }
  v17 = fw_memory_HeapManager_Allocate(*v12, 296, 16, 0);
  v18 = GameData_2131678;
  *(_DWORD*)(v17 + 48) = 0x2000;
  *(_QWORD*)(v17 + 8) = 0;
  *(_QWORD*)(v17 + 16) = 0;
  *(_DWORD*)(v17 + 32) = 0;
  *(_QWORD*)(v17 + 40) = 0;
  *(_DWORD*)(v17 + 104) = 0;
  *(_WORD*)(v17 + 108) = 256;
  *(_QWORD*)(v17 + 56) = 0;
  *(_QWORD*)(v17 + 64) = 0;
  *(_QWORD*)(v17 + 72) = 0;
  *(_WORD*)(v17 + 80) = 0;
  *(_WORD*)(v17 + 116) = 0;
  *(_WORD*)(v17 + 136) = 0;
  *(_BYTE*)(v17 + 160) = 0;
  *(_BYTE*)(v17 + 288) = 0;
  *(_QWORD*)(v17 + 272) = 0;
  *(_QWORD*)(v17 + 280) = 0;
  *(_QWORD*)(v17 + 256) = 0;
  *(_QWORD*)(v17 + 264) = 0;
  *(_QWORD*)(v17 + 240) = 0;
  *(_QWORD*)(v17 + 248) = 0;
  *(_QWORD*)(v17 + 224) = 0;
  *(_QWORD*)(v17 + 232) = 0;
  *(_QWORD*)(v17 + 208) = 0;
  *(_QWORD*)(v17 + 216) = 0;
  *(_QWORD*)(v17 + 192) = 0;
  *(_QWORD*)(v17 + 200) = 0;
  *(_QWORD*)(v17 + 176) = 0;
  *(_QWORD*)(v17 + 184) = 0;
  *(_QWORD*)(v17 + 168) = 0;
  *(_QWORD*)(v17 + 120) = 0;
  *(_DWORD*)(v17 + 127) = 0;
  v63 = v17;
  *(_QWORD*)v17 = v18 + 16;
  *(_DWORD*)(v17 + 112) = -1082130432;
  *(_DWORD*)(v17 + 292) = 2;
  *(_QWORD*)(v17 + 24) = 0;
  v19 = *(_QWORD*)GameData_212dc48[0];
  v62 = v17 + 24;
  v65 = nullptr;
  v10 = strlen(a2);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_114:
    String_60a1d0_alt1(v10);
  }
  v20 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v22 = 26;
    }
    else {
      v22 = (v10 | 7) + 1;
    }
    v21 = (char*)fw_memory_HeapManager_Allocate(*v12, v22, 16, 0);
    v67[1] = v20;
    v68 = v21;
    v67[0] = v22 | 1;
    goto LABEL_26;
  }
  LOBYTE(v67[0]) = 2 * v10;
  v21 = (char*)v67 + 1;
  if (v10 != 0) {
  LABEL_26:
    memmove(v21, a2, v20);
  }
  v21[v20] = 0;
  game_hub_e1c160((void*)(&v60), v19, v67, v66);
  v23 = v60;
  v24 = v61;
  if (v61 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v61 + 8), 1u,
                              memory_order_relaxed);
  }
  v25 = v63;
  v62 = v23;
  v63 = v24;
  if (v25 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak_alt1(v25);
    }
    v24 = v63;
  }
  if (v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak_alt1(v24);
    }
  }
  v26 = v61;
  if (v61 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak_alt1(v26);
    if ((v67[0] & 1) == 0) {
      goto LABEL_44;
    }
  }
  else if ((v67[0] & 1) == 0) {
    goto LABEL_44;
  }
  if (v68 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*v12 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*v12 + v27);
  }
LABEL_44:
  v28 = *(_QWORD*)(a6 + 32);
  if (v28 != 0) {
    if (v28 == a6) {
      v69 = v67;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v28 + 24LL))(v28, v67);
    }
    else {
      v69 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    }
  }
  else {
    v69 = nullptr;
  }
  GameRoutine_104c660(v67, v64);
  v29 = (__int64)v69;
  if (v69 == v67) {
    v30 = 32;
  }
  else {
    if (v69 == nullptr) {
      goto LABEL_54;
    }
    v30 = 40;
  }
  v29 = (*(__int64 (**)(__int64))(*v69 + v30))((__int64)v69);
LABEL_54:
  v32 = (__int64*)a1[10];
  v31 = a1[11];
  if ((unsigned __int64)v32 < v31) {
    *v32 = v62;
    v33 = v63;
    v32[1] = v63;
    if (v33 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v65 != nullptr) {
      if (v65 == v64) {
        v32[6] = (__int64)(v32 + 2);
        (*(void (**)(_QWORD*))(*v65 + 24LL))(v65);
      }
      else {
        v32[6] = (*(__int64 (**)(__int64))(*v65 + 16LL))((__int64)v65);
      }
      v34 = v32 + 8;
    }
    else {
      v32[6] = 0;
      v34 = v32 + 8;
    }
    goto LABEL_105;
  }
  v35 = a1[9];
  v36 = (char*)v32 - v35;
  v37 = (((__int64)v32 - v35) >> 6) + 1;
  if (v37 >> 58 != 0) {
    GameRoutine_104c640(v29);
  }
  v38 = v31 - v35;
  v39 = v38 >> 5;
  if (v38 >> 5 <= v37) {
    v39 = v37;
  }
  if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFC0LL) {
    v40 = 0x3FFFFFFFFFFFFFFLL;
  }
  else {
    v40 = v39;
  }
  if (v40 != 0) {
    if (v40 >> 58 != 0) {
      GameRoutine_60a210(v29);
    }
    v41 = fw_memory_HeapManager_Allocate(*v12, v40 << 6, 16, 0);
  }
  else {
    v41 = 0;
  }
  v42 = v63;
  v43 = (__int64*)&v36[v41];
  *v43 = v62;
  v43[1] = v42;
  if (v42 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                              memory_order_relaxed);
  }
  v44 = v65;
  if (v65 != nullptr) {
    if (v65 == v64) {
      v43[6] = (__int64)(v43 + 2);
      (*(void (**)(_QWORD*))(*v44 + 24LL))(v44);
    }
    else {
      v43[6] = (*(__int64 (**)(__int64))(*v65 + 16LL))((__int64)v65);
    }
  }
  else {
    v43[6] = 0;
  }
  v45 = (char*)a1[9];
  v46 = (char*)a1[10];
  v47 = v41 + (v40 << 6);
  v48 = (char*)v43 - (v46 - v45);
  v34 = v43 + 8;
  if (v46 != v45) {
    v49 = (char*)a1[9];
    v50 = &v36[v41 + 48 + -64 * ((v46 - v45) >> 6)];
    do {
      *((_QWORD*)v50 - 6) = *(_QWORD*)v49;
      v51 = *((_QWORD*)v49 + 1);
      *((_QWORD*)v50 - 5) = v51;
      if (v51 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                                  memory_order_relaxed);
      }
      v52 = *((char**)v49 + 6);
      if (v52 != nullptr) {
        if (v49 + 16 == v52) {
          *(_QWORD*)v50 = v50 - 32;
          (*(void (**)(_QWORD))(**((_QWORD**)v49 + 6) + 24LL))(
              *((_QWORD*)v49 + 6));
        }
        else {
          *(_QWORD*)v50 = v52;
          *((_QWORD*)v49 + 6) = 0;
        }
      }
      else {
        *(_QWORD*)v50 = 0;
      }
      v49 += 64;
      v50 += 64;
    } while (v49 != v46);
    while (1) {
      v53 = *((char**)v45 + 6);
      if (v45 + 16 == v53) {
        v54 = 32;
      }
      else {
        if (v53 == nullptr) {
          goto LABEL_97;
        }
        v54 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v53 + v54))((__int64)v53);
    LABEL_97:
      v55 = *((_QWORD*)v45 + 1);
      if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
        std___1___shared_weak_count___release_weak_alt1(v55);
      }
      v45 += 64;
      if (v45 == v46) {
        v45 = (char*)a1[9];
        break;
      }
    }
  }
  a1[9] = v48;
  a1[10] = v34;
  a1[11] = v47;
  if (v45 != nullptr) {
    v56 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v56);
  }
LABEL_105:
  a1[10] = v34;
  GameRoutine_104b900(a1, 1);
  result = (__int64)v65;
  if (v65 == v64) {
    v58 = 32;
  }
  else {
    if (v65 == nullptr) {
      goto LABEL_110;
    }
    v58 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v65 + v58))((__int64)v65);
LABEL_110:
  v59 = v63;
  if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
    return std___1___shared_weak_count___release_weak_alt1(v59);
  }
  return result;
}

__int64 game_104e1d0(__int64 a1, __int64 a2)
{
  __int64 v3;
  _BYTE* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  struct {
    _BYTE v10[32];
    _BYTE* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;

  v3 = *(_QWORD*)(a2 + 32);
  if (v3 == 0) {
    v10_.v11 = nullptr;
    v12_.v13 = nullptr;
    goto LABEL_10;
  }
  if (v3 != a2) {
    v4 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    v10_.v11 = v4;
    if (v4 != nullptr) {
      goto LABEL_4;
    }
  LABEL_8:
    v12_.v13 = nullptr;
    goto LABEL_10;
  }
  v10_.v11 = v10_.v10;
  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v3 + 24LL))(v3, v10_.v10);
  v4 = v10_.v11;
  if (v10_.v11 == nullptr) {
    goto LABEL_8;
  }
LABEL_4:
  if (v4 == v10_.v10) {
    v12_.v13 = v12_.v12;
    (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v4 + 24LL))(v4, v12_.v12);
  }
  else {
    v12_.v13 = (_QWORD*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v4 + 16LL))(v4);
  }
LABEL_10:
  GameRoutine_654050(v12_.v12, GameData_22350e0);
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
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235210,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2235210) != 0) {
    GameData_2235110 = 19;
    GameData_2235130 = 500;
    GameData_2235150 = 10;
    GameData_2235118 = 0;
    GameData_2235120 = (__int64)GameData_212c6d0[0];
    GameData_2235138 = 0;
    GameData_2235140 = 0;
    GameData_2235148 = 0;
    GameData_2235170 = 0;
    GameData_2235178 = 0;
    GameData_2235180 = 0;
    GameData_2235188 = 0;
    GameData_22351b8 = 0;
    GameData_22351c0 = 0;
    GameData_22351c8 = 0;
    GameData_22351d0 = 0;
    GameData_22351f8 = 0;
    GameData_2235200 = 0;
    GameData_2235208 = 0;
    GameData_22351b0 = 0;
    GameData_22351a0 = 0;
    GameData_22351a8 = 0;
    GameData_22351d8 = 0;
    GameData_22351e0 = 0;
    GameData_22351e8 = 0;
    GameData_22351f0 = 0;
    GameData_2235158 = 0;
    GameData_2235160 = (__int64)GameData_212c720;
    GameData_2235190 = 8;
    GameData_2235198 = (__int64)GameRoutine_104e980;
    __cxa_guard_release(&GameData_2235210);
  }
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 152, 16, 0);
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
  GameData_2235218 = v6;
  *(_QWORD*)v6 = game_hub_anonymous_ProcEnterFadeOut_vtable;
  ProcInst_657850(v6, (__int64)&GameData_2235110, (__int64)"ProcEnterFadeOut",
                  1, a1);
  result = (__int64)v10_.v11;
  if (v10_.v11 == v10_.v10) {
    v9 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      return result;
    }
    v9 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v10_.v11 + v9))((__int64)v10_.v11);
}

__int64 game_106ffe0(__int64 a1, unsigned int a2, unsigned int* a3,
                     unsigned __int64 a4)
{
  __int64 v8;
  unsigned int* v9;
  unsigned __int64 v10;
  char* v11;
  char* v12;
  unsigned int v13;
  __int64 v15;
  unsigned __int64 v16;
  __int64** v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned int* v37;

  if (a4 < 2) {
    return 0;
  }
  v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      64, 16, 0);
  v9 = &a3[a4];
  v10 = v8 + 64;
  v11 = (char*)v8;
  v37 = a3;
  v12 = (char*)v8;
  do {
    v13 = *a3;
    if (*a3 == a2) {
      goto LABEL_4;
    }
    if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
      v15 = GameData_22356f8 - 1;
      if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
        v16 = (int)v13;
        if (GameData_22356f8 <= (unsigned __int64)(int)v13) {
          v16 = (int)v13 % (unsigned __int64)GameData_22356f8;
        }
      }
      else {
        v16 = v15 & (int)v13;
      }
      v17 = *(__int64***)(GameData_22356f0 + 8 * v16);
      if (v17 != nullptr) {
        v18 = *v17;
        if (v18 != nullptr) {
          if ((GameData_22356f8 & v15) == 0) {
            while (1) {
              v20 = v18[1];
              if (v20 == v13) {
                if (*((_DWORD*)v18 + 4) == v13) {
                  goto LABEL_46;
                }
              }
              else if ((v20 & v15) != v16) {
                goto LABEL_29;
              }
              v18 = (__int64*)*v18;
              if (v18 == nullptr) {
                goto LABEL_29;
              }
            }
          }
          do {
            v19 = v18[1];
            if (v19 == v13) {
              if (*((_DWORD*)v18 + 4) == v13) {
              LABEL_46:
                if (*(_QWORD*)(a1 + 8LL * *((int*)v18 + 5)) == 0) {
                  goto LABEL_4;
                }
                goto LABEL_30;
              }
            }
            else {
              if (v19 >= GameData_22356f8) {
                v19 %= (unsigned __int64)GameData_22356f8;
              }
              if (v19 != v16) {
                break;
              }
            }
            v18 = (__int64*)*v18;
          } while (v18 != nullptr);
        }
      }
    }
  LABEL_29:
    if (*(_QWORD*)(a1 + 5112) == 0) {
      goto LABEL_4;
    }
  LABEL_30:
    if ((unsigned __int64)v11 < v10) {
      *(_DWORD*)v11 = v13;
      v11 += 4;
    }
    else {
      v21 = (char*)(v11 - v12);
      v22 = (v11 - v12) >> 2;
      v23 = v22 + 1;
      if ((unsigned __int64)(v22 + 1) >> 62 != 0) {
        GameRoutine_e4e0b0();
      }
      if ((__int64)(v10 - (_QWORD)v12) >> 1 > v23) {
        v23 = (__int64)(v10 - (_QWORD)v12) >> 1;
      }
      if (v10 - (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFFCLL) {
        v24 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v24 = v23;
      }
      if (v24 != 0) {
        if (v24 >> 62 != 0) {
          GameRoutine_60a210(v8);
        }
        v25 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v24, 16, 0);
        v13 = *a3;
      }
      else {
        v25 = 0;
      }
      v10 = v25 + 4 * v24;
      v26 = (char*)(v11 - v12);
      v27 = (__int64)&v21[v25 + -4 * v22];
      *(_DWORD*)&v21[v25] = v13;
      v11 = &v21[v25 + 4];
      v8 = memcpy(v27, v12, v26);
      if (v12 != nullptr) {
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v28 = 56;
        }
        v8 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
      }
      v12 = (char*)v27;
    }
  LABEL_4:
    ++a3;
  } while (a3 != v9);
  if (v12 != v11) {
    nn_os_LockMutex(&game_g_random_mutex);
    v29 = game_map_MapRandom_instance__ptr[0];
    v30 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v31 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v32 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v29 + 1) = v30;
    v33 = (v32 >> 8) ^ (v31 >> 19) ^ v32 ^ v31;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v29) = v31;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v29 + 4) = v33;
    v34 = v33 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
    a2 = *(_DWORD*)&v12[4 * (v34 % ((v11 - v12) >> 2))];
  LABEL_54:
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v35);
    return a2;
  }
  if (a2 == 0) {
    a2 = *v37;
  }
  if (v12 != nullptr) {
    goto LABEL_54;
  }
  return a2;
}

void* game_1070860(__int64 a1, int a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64** v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  _QWORD* v18;
  void* result;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v27;
  unsigned __int64 v28;
  __int64** v29;
  __int64* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD v35[9];

  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v4 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v5 = a2;
      if (GameData_22356f8 <= (unsigned __int64)a2) {
        v5 = a2 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v5 = v4 & a2;
    }
    v6 = *(__int64***)(GameData_22356f0 + 8 * v5);
    if (v6 != nullptr) {
      v7 = *v6;
      if (v7 == nullptr) {
        v8 = 639;
      LABEL_28:
        v10 = *(_QWORD*)(a1 + 5112);
        if (v10 != 0) {
          goto LABEL_29;
        }
        return nullptr;
      }
      v8 = 639;
      if ((GameData_22356f8 & v4) == 0) {
        while (1) {
          v11 = v7[1];
          if (v11 == a2) {
            if (*((_DWORD*)v7 + 4) == a2) {
              goto LABEL_76;
            }
          }
          else if ((v11 & v4) != v5) {
            goto LABEL_28;
          }
          v7 = (__int64*)*v7;
          if (v7 == nullptr) {
            goto LABEL_28;
          }
        }
      }
      while (1) {
        v9 = v7[1];
        if (v9 == a2) {
          break;
        }
        if (v9 >= GameData_22356f8) {
          v9 %= (unsigned __int64)GameData_22356f8;
        }
        if (v9 != v5) {
          goto LABEL_28;
        }
      LABEL_14:
        v7 = (__int64*)*v7;
        if (v7 == nullptr) {
          goto LABEL_28;
        }
      }
      if (*((_DWORD*)v7 + 4) != a2) {
        goto LABEL_14;
      }
    LABEL_76:
      v8 = *((int*)v7 + 5);
      v10 = *(_QWORD*)(a1 + 8 * v8);
      if (v10 == 0) {
        return nullptr;
      }
    LABEL_29:
      v12 = *(_QWORD*)(v10 + 56);
      if (v12 != 0 && *(_BYTE*)(v12 + 165) == 1) {
        v13 = a1;
        v14 = GameRoutine_ad7390(*(_QWORD**)(v10 + 56));
        a1 = v13;
        if (v14) {
          v15 = *(_QWORD*)(v10 + 56);
          if (*(_BYTE*)(v15 + 165) == 1) {
            v16 = GameRoutine_ad7390((_QWORD*)v15);
            a1 = v13;
            if (v16) {
              v17 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v15 + 8) + 592LL));
              a1 = v13;
              if (v17 != 0) {
                if (*(unsigned __int16*)(v17 + 226) < 2u) {
                  return nullptr;
                }
                v18 = *(_QWORD**)(v13 + 8 * v8);
                result = v18 + 18;
                if (v18[21] == 0 && v18[22] == 0 && v18[23] == 0 &&
                    v18[24] == 0 && v18[25] == 0) {
                  GameRoutine_a6ea10((void*)(v35), v17, 1);
                  result = v18 + 18;
                  if ((v18[18] & 1) != 0 && v18[20] != 0) {
                    v20 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v20 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
                    result = v18 + 18;
                  }
                  v21 = v35[3];
                  qmemcpy(result, v35, 24);
                  v22 = v35[6];
                  v23 = v35[7];
                  v24 = v35[4];
                  v18[23] = v35[5];
                  v18[24] = v22;
                  v25 = v35[8];
                  v18[21] = v21;
                  v18[22] = v24;
                  v18[25] = v23;
                  v18[26] = v25;
                }
                return result;
              }
            }
          }
        }
      }
      if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
        v27 = GameData_22356f8 - 1;
        if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
          v28 = a2;
          if (GameData_22356f8 <= (unsigned __int64)a2) {
            v28 = a2 % (unsigned __int64)GameData_22356f8;
          }
        }
        else {
          v28 = v27 & a2;
        }
        v29 = *(__int64***)(GameData_22356f0 + 8 * v28);
        if (v29 != nullptr) {
          v30 = *v29;
          if (*v29 != nullptr) {
            v31 = 639;
            if ((GameData_22356f8 & v27) == 0) {
              while (1) {
                v34 = v30[1];
                if (v34 == a2) {
                  if (*((_DWORD*)v30 + 4) == a2) {
                    goto LABEL_78;
                  }
                }
                else if ((v34 & v27) != v28) {
                  goto LABEL_67;
                }
                v30 = (__int64*)*v30;
                if (v30 == nullptr) {
                  goto LABEL_67;
                }
              }
            }
            while (1) {
              v32 = v30[1];
              if (v32 == a2) {
                if (*((_DWORD*)v30 + 4) == a2) {
                LABEL_78:
                  v31 = *((int*)v30 + 5);
                  goto LABEL_67;
                }
              }
              else {
                if (v32 >= GameData_22356f8) {
                  v32 %= (unsigned __int64)GameData_22356f8;
                }
                if (v32 != v28) {
                  goto LABEL_67;
                }
              }
              v30 = (__int64*)*v30;
              if (v30 == nullptr) {
                goto LABEL_67;
              }
            }
          }
        }
      }
      v31 = 639;
    LABEL_67:
      v33 = *(_QWORD*)(a1 + 8 * v31);
      *(_QWORD*)(a1 + 8 * v31) = 0;
      if (v33 != 0) {
        GameRoutine_7f7720(a1 + 8 * v31, v33);
      }
      return nullptr;
    }
  }
  v8 = 639;
  v10 = *(_QWORD*)(a1 + 5112);
  if (v10 == 0) {
    return nullptr;
  }
  goto LABEL_29;
}

unsigned __int64 game_108acc0(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 result;
  unsigned __int64 v20;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  signed __int64 v43;
  _BYTE* v44;
  char** v45;
  int v46;
  unsigned __int8* v47;
  int v48;
  int v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  bool v54;
  unsigned __int8* v55;
  unsigned __int8* v56;
  int v57;
  unsigned __int8* v58;
  int v59;
  int v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  _QWORD* v63;
  unsigned __int64 v64;
  __int64 v65;
  int v66;
  int v67;
  unsigned __int64 v68;
  int v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64** v72;
  __int64* v73;
  unsigned __int64 v74;
  __int64 v75;
  _QWORD* v76;
  float v77;
  float v78;
  _BOOL8 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 primeEm;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  _QWORD** v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  _QWORD* v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  _QWORD* v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  _QWORD* v104;
  __int64 v105;
  unsigned __int64 v106;
  int v107;
  char** v108;
  int v109;
  char** v110;
  __int64 v111;
  signed __int64 v112;
  __int64 v113;
  __int64 v114;

  if (a2 <= 99) {
    v4 = game_HashString_alt1((__int64)"Group");
    if (v4 != 0) {
      v5 = *(_QWORD*)(GameData_21c9c28 + 96);
      if (v5 != 0 && *(_QWORD*)(GameData_21c9c28 + 112) != 0) {
        v7 = v5 - 1;
        if ((v5 & (v5 - 1)) != 0) {
          v8 = v4;
          if (v4 >= v5) {
            v8 = v4 % v5;
          }
        }
        else {
          v8 = v7 & v4;
        }
        v14 = *(_QWORD**)(*(_QWORD*)(GameData_21c9c28 + 88) + 8 * v8);
        if (v14 != nullptr) {
          v15 = (_QWORD*)*v14;
          if (v15 != nullptr) {
            if ((v5 & v7) == 0) {
              while (1) {
                v18 = v15[1];
                if (v18 == v4) {
                  if (v15[2] == v4) {
                    goto LABEL_258;
                  }
                }
                else if ((v18 & v7) != v8) {
                  goto LABEL_34;
                }
                v15 = (_QWORD*)*v15;
                v17 = 0;
                if (v15 == nullptr) {
                  goto LABEL_35;
                }
              }
            }
            do {
              v16 = v15[1];
              if (v16 == v4) {
                if (v15[2] == v4) {
                LABEL_258:
                  v17 = v15[3];
                  goto LABEL_35;
                }
              }
              else {
                if (v16 >= v5) {
                  v16 %= v5;
                }
                if (v16 != v8) {
                  break;
                }
              }
              v15 = (_QWORD*)*v15;
            } while (v15 != nullptr);
          }
        }
      }
    }
  LABEL_34:
    v17 = 0;
  LABEL_35:
    result = game_HashString_alt1((__int64)"Combat");
    if (result != 0) {
      v20 = *(_QWORD*)(GameData_21c9c38 + 96);
      if (v20 != 0 && *(_QWORD*)(GameData_21c9c38 + 112) != 0) {
        v22 = v20 - 1;
        if ((v20 & (v20 - 1)) != 0) {
          v23 = result;
          if (result >= v20) {
            v23 = result % v20;
          }
        }
        else {
          v23 = v22 & result;
        }
        v32 = *(_QWORD**)(*(_QWORD*)(GameData_21c9c38 + 88) + 8 * v23);
        if (v32 != nullptr) {
          v33 = (_QWORD*)*v32;
          if (v33 != nullptr) {
            if ((v20 & v22) == 0) {
              while (1) {
                v35 = v33[1];
                if (v35 == result) {
                  if (v33[2] == result) {
                    goto LABEL_257;
                  }
                }
                else if ((v35 & v22) != v23) {
                  goto LABEL_101;
                }
                v33 = (_QWORD*)*v33;
                if (v33 == nullptr) {
                  goto LABEL_101;
                }
              }
            }
            while (1) {
              v34 = v33[1];
              if (v34 == result) {
                if (v33[2] == result) {
                  goto LABEL_257;
                }
              }
              else {
                if (v34 >= v20) {
                  v34 %= v20;
                }
                if (v34 != v23) {
                  goto LABEL_101;
                }
              }
              v33 = (_QWORD*)*v33;
              if (v33 == nullptr) {
                goto LABEL_101;
              }
            }
          }
        }
      }
    }
    goto LABEL_101;
  }
  v9 = game_HashString_alt1((__int64)"GroupEv");
  if (v9 == 0) {
    goto LABEL_59;
  }
  v10 = *(_QWORD*)(GameData_21c9c30 + 96);
  if (v10 == 0 || *(_QWORD*)(GameData_21c9c30 + 112) == 0) {
    goto LABEL_59;
  }
  v12 = v10 - 1;
  if ((v10 & (v10 - 1)) != 0) {
    v13 = v9;
    if (v9 >= v10) {
      v13 = v9 % v10;
    }
  }
  else {
    v13 = v12 & v9;
  }
  v24 = *(_QWORD**)(*(_QWORD*)(GameData_21c9c30 + 88) + 8 * v13);
  if (v24 == nullptr || (v25 = (_QWORD*)*v24) == nullptr) {
  LABEL_59:
    v17 = 0;
    goto LABEL_60;
  }
  if ((v10 & v12) == 0) {
    while (1) {
      v27 = v25[1];
      if (v27 == v9) {
        if (v25[2] == v9) {
          goto LABEL_259;
        }
      }
      else if ((v27 & v12) != v13) {
        goto LABEL_59;
      }
      v25 = (_QWORD*)*v25;
      v17 = 0;
      if (v25 == nullptr) {
        goto LABEL_60;
      }
    }
  }
  while (1) {
    v26 = v25[1];
    if (v26 == v9) {
      break;
    }
    if (v26 >= v10) {
      v26 %= v10;
    }
    if (v26 != v13) {
      goto LABEL_59;
    }
  LABEL_49:
    v25 = (_QWORD*)*v25;
    if (v25 == nullptr) {
      goto LABEL_59;
    }
  }
  if (v25[2] != v9) {
    goto LABEL_49;
  }
LABEL_259:
  v17 = v25[3];
LABEL_60:
  result = game_HashString_alt1((__int64)"Event");
  if (result == 0) {
    goto LABEL_101;
  }
  v28 = *(_QWORD*)(GameData_21c9c38 + 96);
  if (v28 == 0 || *(_QWORD*)(GameData_21c9c38 + 112) == 0) {
    goto LABEL_101;
  }
  v30 = v28 - 1;
  if ((v28 & (v28 - 1)) != 0) {
    v31 = result;
    if (result >= v28) {
      v31 = result % v28;
    }
  }
  else {
    v31 = v30 & result;
  }
  v36 = *(_QWORD**)(*(_QWORD*)(GameData_21c9c38 + 88) + 8 * v31);
  if (v36 == nullptr || (v33 = (_QWORD*)*v36) == nullptr) {
  LABEL_101:
    v114 = 0;
    goto LABEL_102;
  }
  if ((v28 & v30) == 0) {
    while (1) {
      v38 = v33[1];
      if (v38 == result) {
        if (v33[2] == result) {
          goto LABEL_257;
        }
      }
      else if ((v38 & v30) != v31) {
        goto LABEL_101;
      }
      v33 = (_QWORD*)*v33;
      if (v33 == nullptr) {
        goto LABEL_101;
      }
    }
  }
  while (2) {
    v37 = v33[1];
    if (v37 != result) {
      if (v37 >= v28) {
        v37 %= v28;
      }
      if (v37 != v31) {
        goto LABEL_101;
      }
    }
    else if (v33[2] == result) {
    LABEL_257:
      v114 = v33[3];
    LABEL_102:
      v39 = *(_DWORD*)(a1 + 20);
      if (v39 < 2) {
        return result;
      }
      v40 = a2;
      v113 = a1;
      v41 = a2 + v39 - 1;
      v42 = a2;
      v43 = v41;
      v112 = v41;
      while (2) {
        v44 = *(_BYTE**)(*(_QWORD*)(a1 + 24) + ((v42 - v40) << 32 >> 27) + 32);
        if (v44 == nullptr) {
          goto LABEL_106;
        }
        if (*v44 == 0) {
          goto LABEL_106;
        }
        result = strcmp(
            *(_QWORD*)(*(_QWORD*)(a1 + 24) + ((v42 - v40) << 32 >> 27) + 32),
            "null");
        if ((_DWORD)result == 0) {
          goto LABEL_106;
        }
        v45 = &(&game_hub_g_motions)[5 * v42];
        *v45 = v44;
        v46 = (unsigned __int8)*v44;
        if (*v44 != 0) {
          v47 = v44 + 1;
          v48 = 0;
          do {
            v48 = v46 - v48 + 32 * v48;
            v49 = *v47++;
            v46 = v49;
          } while (v49 != 0);
        }
        else {
          v48 = 0;
        }
        *((_DWORD*)v45 + 2) = v48;
        v50 = *(_QWORD*)(v17 + 40 + 8 * (v42 - v40));
        v51 = v114;
        if (v50 == 0) {
          goto LABEL_146;
        }
        v52 = game_HashString_alt1(v50);
        if (v52 == 0 || ((v53 = *(_QWORD*)(GameData_21c9c38 + 96)) != 0
                             ? (v54 = *(_QWORD*)(GameData_21c9c38 + 112) == 0)
                             : (v54 = true),
                         v54)) {
        LABEL_122:
          v51 = 0;
          v55 = *(unsigned __int8**)((char*)0x20LL);
          if (*(_QWORD*)((char*)0x20LL) == 0) {
            goto LABEL_123;
          }
          goto LABEL_147;
        }
        v61 = v53 - 1;
        if ((v53 & (v53 - 1)) != 0) {
          v62 = v52;
          if (v52 >= v53) {
            v62 = v52 % v53;
          }
        }
        else {
          v62 = v61 & v52;
        }
        v51 = *(_QWORD*)(*(_QWORD*)(GameData_21c9c38 + 88) + 8 * v62);
        if (v51 == 0) {
        LABEL_146:
          v55 = *(unsigned __int8**)(v51 + 32);
          if (v55 == nullptr) {
            goto LABEL_123;
          }
          goto LABEL_147;
        }
        v63 = *(_QWORD**)v51;
        if (*(_QWORD*)v51 == 0) {
          v51 = 0;
          goto LABEL_146;
        }
        if ((v53 & v61) == 0) {
          while (1) {
            v65 = v63[1];
            if (v65 == v52) {
              if (v63[2] == v52) {
                goto LABEL_254;
              }
            }
            else if ((v65 & v61) != v62) {
              goto LABEL_122;
            }
            v63 = (_QWORD*)*v63;
            v51 = 0;
            if (v63 == nullptr) {
              goto LABEL_146;
            }
          }
        }
        while (1) {
          v64 = v63[1];
          if (v64 == v52) {
            break;
          }
          if (v64 >= v53) {
            v64 %= v53;
          }
          if (v64 != v62) {
            goto LABEL_122;
          }
        LABEL_134:
          v63 = (_QWORD*)*v63;
          v51 = 0;
          if (v63 == nullptr) {
            goto LABEL_146;
          }
        }
        if (v63[2] != v52) {
          goto LABEL_134;
        }
      LABEL_254:
        v51 = v63[3];
        v55 = *(unsigned __int8**)(v51 + 32);
        if (v55 == nullptr) {
        LABEL_123:
          v56 = *(unsigned __int8**)(v114 + 32);
          v59 = *v56;
          v58 = v56 + 1;
          v57 = v59;
          if (v59 == 0) {
            goto LABEL_124;
          }
        LABEL_148:
          v60 = 0;
          do {
            v60 = v57 - v60 + 32 * v60;
            v67 = *v58++;
            v57 = v67;
          } while (v67 != 0);
          goto LABEL_150;
        }
      LABEL_147:
        v66 = *v55;
        v58 = v55 + 1;
        v57 = v66;
        if (v66 != 0) {
          goto LABEL_148;
        }
      LABEL_124:
        v60 = 0;
      LABEL_150:
        *((_DWORD*)v45 + 3) = v60;
        v68 = *((int*)v45 + 2);
        v69 = *((_DWORD*)v45 + 2);
        *((_BYTE*)v45 + 16) = *(_BYTE*)(v51 + 40);
        *((_DWORD*)v45 + 5) = *(_DWORD*)(v51 + 44);
        *((_DWORD*)v45 + 6) = *(_DWORD*)(v51 + 48);
        *((_DWORD*)v45 + 7) = *(_DWORD*)(v51 + 52);
        v70 = GameData_22356f8;
        *((_DWORD*)v45 + 8) = *(_DWORD*)(v51 + 56);
        if (v70 != 0) {
          v71 = v70 - 1;
          if ((v70 & (v70 - 1)) != 0) {
            v43 = v68;
            if (v70 <= v68) {
              v43 = v68 % v70;
            }
          }
          else {
            v43 = v71 & v68;
          }
          v72 = *(__int64***)(GameData_22356f0 + 8 * v43);
          if (v72 != nullptr) {
            v73 = *v72;
            if (v73 != nullptr) {
              if ((v70 & v71) == 0) {
                while (1) {
                  v75 = v73[1];
                  if (v75 == v68) {
                    if (*((_DWORD*)v73 + 4) == (_DWORD)v68) {
                      goto LABEL_245;
                    }
                  }
                  else if ((v75 & v71) != v43) {
                    goto LABEL_170;
                  }
                  v73 = (__int64*)*v73;
                  if (v73 == nullptr) {
                    goto LABEL_170;
                  }
                }
              }
              do {
                v74 = v73[1];
                if (v74 == v68) {
                  if (*((_DWORD*)v73 + 4) == v69) {
                    goto LABEL_245;
                  }
                }
                else {
                  if (v74 >= v70) {
                    v74 %= v70;
                  }
                  if (v74 != v43) {
                    break;
                  }
                }
                v73 = (__int64*)*v73;
              } while (v73 != nullptr);
            }
          }
        }
      LABEL_170:
        v76 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
        *v76 = 0;
        v76[1] = v68;
        v76[2] = (unsigned int)v68 | (unsigned __int64)(v42 << 32);
        v77 = (float)(unsigned __int64)(GameData_2235708 + 1);
        if (v70 == 0 ||
            (float)(*(float*)&GameData_2235710 * (float)v70) < v77) {
          v78 = v77 / *(float*)&GameData_2235710;
          v79 = (v70 & (v70 - 1)) != 0;
          if (v70 < 3) {
            v79 = true;
          }
          v80 = v79 | (2 * v70);
          v81 = vcvtps_u64_f32(v78);
          if (v80 <= v81) {
            primeEm = v81;
          }
          else {
            primeEm = v80;
          }
          if (primeEm == 1) {
            primeEm = 2;
          }
          else if ((primeEm & (primeEm - 1)) != 0) {
            primeEm = std___1___next_prime(primeEm);
            v70 = GameData_22356f8;
          }
          if (primeEm <= v70) {
            if (primeEm < v70) {
              v88 = vcvtps_u64_f32((float)(unsigned __int64)GameData_2235708 /
                                   *(float*)&GameData_2235710);
              if (v70 < 3 || (v70 & (v70 - 1)) != 0) {
                v88 = std___1___next_prime(v88);
              }
              else {
                v89 = 1LL << -(char)__clz(v88 - 1);
                if (v88 >= 2) {
                  v88 = v89;
                }
              }
              if (primeEm <= v88) {
                primeEm = v88;
              }
              if (primeEm < v70) {
                if (primeEm != 0) {
                  goto LABEL_182;
                }
                v101 = GameData_22356f0;
                GameData_22356f0 = 0;
                if (v101 != 0) {
                  v102 = 128;
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                    v102 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager +
                                                     v102);
                }
                GameData_22356f8 = 0;
              }
            }
            goto LABEL_231;
          }
        LABEL_182:
          v83 = fw_memory_g_heap_manager_ptr;
          if (primeEm >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v84 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * primeEm, 16, 0);
          v85 = GameData_22356f0;
          GameData_22356f0 = v84;
          if (v85 != 0) {
            v86 = 128;
            if (*(_QWORD*)(*(_QWORD*)v83 + 200LL) == 0) {
              v86 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v83 + v86);
          }
          GameData_22356f8 = primeEm;
          if (primeEm >= 8) {
            v87 = 0;
            do {
              *(_QWORD*)(GameData_22356f0 + 8 * v87) = 0;
              *(_QWORD*)(GameData_22356f0 + 8 * v87 + 8) = 0;
              *(_QWORD*)(GameData_22356f0 + 8 * v87 + 16) = 0;
              *(_QWORD*)(GameData_22356f0 + 8 * v87 + 24) = 0;
              *(_QWORD*)(GameData_22356f0 + 8 * v87 + 32) = 0;
              *(_QWORD*)(GameData_22356f0 + 8 * v87 + 40) = 0;
              *(_QWORD*)(GameData_22356f0 + 8 * v87 + 48) = 0;
              v90 = GameData_22356f0 + 8 * v87;
              v87 += 8;
              *(_QWORD*)(v90 + 56) = 0;
            } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v87);
          }
          else {
            v87 = 0;
          }
          v91 = primeEm & 7;
          if ((primeEm & 7) != 0) {
            v92 = 8 * v87;
            do {
              --v91;
              *(_QWORD*)(GameData_22356f0 + v92) = 0;
              v92 += 8;
            } while (v91 != 0);
          }
          v93 = (_QWORD**)GameData_2235700;
          if (GameData_2235700 == 0) {
            goto LABEL_231;
          }
          v94 = *(_QWORD*)(GameData_2235700 + 8);
          v95 = primeEm - 1;
          if ((primeEm & (primeEm - 1)) == 0) {
            v98 = v94 & v95;
            *(_QWORD*)(GameData_22356f0 + 8 * v98) = &GameData_2235700;
            while (1) {
              v99 = *v93;
              if (*v93 == nullptr) {
                break;
              }
              v100 = v99[1] & v95;
              if (v100 == v98) {
                v93 = (_QWORD**)*v93;
              }
              else if (*(_QWORD*)(GameData_22356f0 + 8 * v100) != 0) {
                *v93 = (_QWORD*)*v99;
                *v99 = **(_QWORD**)(GameData_22356f0 + 8 * v100);
                **(_QWORD**)(GameData_22356f0 + 8 * v100) = v99;
              }
              else {
                *(_QWORD*)(GameData_22356f0 + 8 * v100) = v93;
                v93 = (_QWORD**)v99;
                v98 = v100;
              }
            }
            goto LABEL_231;
          }
          if (v94 >= primeEm) {
            v94 %= primeEm;
          }
          *(_QWORD*)(GameData_22356f0 + 8 * v94) = &GameData_2235700;
          v96 = *v93;
          if (*v93 == nullptr) {
          LABEL_231:
            v70 = GameData_22356f8;
            if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
              if (GameData_22356f8 <= v68) {
                v43 = v68 % GameData_22356f8;
              }
              else {
                v43 = v68;
              }
            }
            else {
              v43 = (GameData_22356f8 - 1) & v68;
            }
            goto LABEL_236;
          }
          while (2) {
            v97 = v96[1];
            if (v97 >= primeEm) {
              v97 %= primeEm;
            }
            if (v97 != v94) {
              if (*(_QWORD*)(GameData_22356f0 + 8 * v97) == 0) {
                *(_QWORD*)(GameData_22356f0 + 8 * v97) = v93;
              LABEL_208:
                v93 = (_QWORD**)v96;
                v96 = (_QWORD*)*v96;
                v94 = v97;
                if (v96 == nullptr) {
                  goto LABEL_231;
                }
                continue;
              }
              *v93 = (_QWORD*)*v96;
              *v96 = **(_QWORD**)(GameData_22356f0 + 8 * v97);
              **(_QWORD**)(GameData_22356f0 + 8 * v97) = v96;
              v96 = v93;
            }
            break;
          }
          v97 = v94;
          goto LABEL_208;
        }
      LABEL_236:
        v103 = GameData_22356f0;
        v104 = *(_QWORD**)(GameData_22356f0 + 8 * v43);
        if (v104 != nullptr) {
          *v76 = *v104;
          *v104 = v76;
        }
        else {
          v105 = GameData_2235700;
          GameData_2235700 = (__int64)v76;
          *v76 = v105;
          *(_QWORD*)(v103 + 8 * v43) = &GameData_2235700;
          if (*v76 != 0) {
            v106 = *(_QWORD*)(*v76 + 8LL);
            if ((v70 & (v70 - 1)) != 0) {
              if (v106 >= v70) {
                v106 %= v70;
              }
            }
            else {
              v106 &= v70 - 1;
            }
            *(_QWORD*)(GameData_22356f0 + 8 * v106) = v76;
          }
        }
        ++GameData_2235708;
      LABEL_245:
        result = strstr(v44, "Start");
        if (result != 0) {
          v43 = v112;
          a1 = v113;
          goto LABEL_105;
        }
        result = strstr(v44, "Loop");
        v43 = v112;
        a1 = v113;
        if (result == 0) {
          result = strlen(v44);
          if ((int)result < 4) {
            goto LABEL_106;
          }
          result = strcmp(&v44[(unsigned int)(result - 3)], "Out");
          if ((_DWORD)result != 0) {
            goto LABEL_106;
          }
        LABEL_105:
          *((_DWORD*)v45 + 3) = 0;
          goto LABEL_106;
        }
        v107 = *((_DWORD*)v45 + 2);
        v108 = &(&game_hub_g_motions)[5 * v42];
        v109 = *((_DWORD*)v108 - 7);
        *((_DWORD*)v45 + 3) = v107;
        if (v109 == 0) {
          v110 = v108 - 5;
          v111 = (__int64)*(v108 - 5);
          result = strstr(v111, "Start");
          if (result != 0) {
            result = strncmp(v44, v111, result - v111);
            if ((_DWORD)result == 0) {
              *((_DWORD*)v110 + 3) = v107;
            }
          }
        }
      LABEL_106:
        if (++v42 < v43) {
          continue;
        }
        return result;
      }
    }
    v33 = (_QWORD*)*v33;
    if (v33 == nullptr) {
      goto LABEL_101;
    }
    continue;
  }
}

unsigned __int64 game_108b900()
{
  unsigned __int64 v0;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  int v7;
  unsigned __int64 v8;
  unsigned __int64 result;
  __int64 v10;
  __int64 v11;
  __int64** v12;
  __int64* v13;
  int v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64** v18;
  __int64* v19;
  int v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64** v24;
  __int64* v25;
  int v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64** v30;
  __int64* v31;
  int v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64** v36;
  __int64* v37;
  int v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64** v42;
  __int64* v43;
  int v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64** v48;
  __int64* v49;
  int v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64** v54;
  __int64* v55;
  int v56;
  unsigned __int64 v57;
  __int64 v58;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = GameData_22356f8;
  if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
    GameData_216dc0c = 0;
    goto LABEL_212;
  }
  v2 = GameData_22356f8 - 1;
  if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
    v3 = 81174351;
    if ((unsigned __int64)GameData_22356f8 <= 0x4D69F4F) {
      v3 = 0x4D69F4F % (unsigned int)GameData_22356f8;
    }
  }
  else {
    v3 = ((_DWORD)GameData_22356f8 - 1) & 0x4D69F4F;
  }
  v4 = GameData_22356f0;
  v5 = *(__int64***)(GameData_22356f0 + 8 * v3);
  if (v5 == nullptr || (v6 = *v5, *v5 == nullptr)) {
    GameData_216dc0c = 119788728;
    if ((GameData_22356f8 & v2) == 0) {
      goto LABEL_34;
    }
    goto LABEL_28;
  }
  v7 = 639;
  if ((GameData_22356f8 & v2) == 0) {
    while (1) {
      v10 = v6[1];
      if (v10 == 81174351) {
        if (*((_DWORD*)v6 + 4) == 81174351) {
          goto LABEL_32;
        }
      }
      else if ((v10 & v2) != v3) {
        goto LABEL_33;
      }
      v6 = (__int64*)*v6;
      if (v6 == nullptr) {
        goto LABEL_33;
      }
    }
  }
  while (1) {
    v8 = v6[1];
    if (v8 == 81174351) {
      break;
    }
    if (v8 >= GameData_22356f8) {
      result = v8 / GameData_22356f8;
      v8 %= (unsigned __int64)GameData_22356f8;
    }
    if (v8 != v3) {
      goto LABEL_33;
    }
  LABEL_16:
    v6 = (__int64*)*v6;
    if (v6 == nullptr) {
      goto LABEL_33;
    }
  }
  if (*((_DWORD*)v6 + 4) != 81174351) {
    goto LABEL_16;
  }
LABEL_32:
  v7 = *((_DWORD*)v6 + 5);
LABEL_33:
  *((_DWORD*)&game_hub_g_motions + 10 * v7 + 3) = 119788728;
  if ((v0 & v2) == 0) {
  LABEL_34:
    v11 = ((_DWORD)v0 + 0x7FFFFFF) & 0x4D69F55;
    v12 = *(__int64***)(v4 + 8 * v11);
    if (v12 != nullptr) {
      goto LABEL_35;
    }
    goto LABEL_50;
  }
LABEL_28:
  v11 = 81174357;
  if (v0 <= 0x4D69F55) {
    v11 = 0x4D69F55 % (unsigned int)v0;
  }
  v12 = *(__int64***)(v4 + 8 * v11);
  if (v12 == nullptr) {
    goto LABEL_50;
  }
LABEL_35:
  v13 = *v12;
  if (*v12 == nullptr) {
  LABEL_50:
    GameData_216dc0c = 119788728;
    goto LABEL_53;
  }
  v14 = 639;
  if ((v0 & v2) == 0) {
    while (1) {
      v16 = v13[1];
      result = 81174357;
      if (v16 == 81174357) {
        result = 81174357;
        if (*((_DWORD*)v13 + 4) == 81174357) {
          goto LABEL_51;
        }
      }
      else if ((v16 & v2) != v11) {
        goto LABEL_52;
      }
      v13 = (__int64*)*v13;
      if (v13 == nullptr) {
        goto LABEL_52;
      }
    }
  }
  while (2) {
    v15 = v13[1];
    result = 81174357;
    if (v15 != 81174357) {
      if (v15 >= v0) {
        result = v15 / v0;
        v15 %= v0;
      }
      if (v15 != v11) {
        goto LABEL_52;
      }
      goto LABEL_39;
    }
    result = 81174357;
    if (*((_DWORD*)v13 + 4) != 81174357) {
    LABEL_39:
      v13 = (__int64*)*v13;
      if (v13 == nullptr) {
        goto LABEL_52;
      }
      continue;
    }
    break;
  }
LABEL_51:
  v14 = *((_DWORD*)v13 + 5);
LABEL_52:
  *((_DWORD*)&game_hub_g_motions + 10 * v14 + 3) = 119788728;
LABEL_53:
  if ((v0 & v2) == 0) {
    v17 = v2 & 0xFFFFFFFFBF80FBAALL;
    v18 = *(__int64***)(v4 + 8 * (v2 & 0xFFFFFFFFBF80FBAALL));
    if (v18 != nullptr) {
      goto LABEL_59;
    }
    goto LABEL_74;
  }
  v17 = -1082066006;
  if (v0 <= 0xFFFFFFFFBF80FBAALL) {
    v17 = 0xFFFFFFFFBF80FBAALL % v0;
  }
  v18 = *(__int64***)(v4 + 8 * v17);
  if (v18 == nullptr) {
    goto LABEL_74;
  }
LABEL_59:
  v19 = *v18;
  if (*v18 == nullptr) {
  LABEL_74:
    GameData_216dc0c = 0;
    goto LABEL_77;
  }
  v20 = 639;
  if ((v0 & v2) == 0) {
    while (1) {
      v22 = v19[1];
      if (v22 == -1082066006) {
        if (*((_DWORD*)v19 + 4) == -1082066006) {
          goto LABEL_75;
        }
      }
      else if ((v22 & v2) != v17) {
        goto LABEL_76;
      }
      v19 = (__int64*)*v19;
      if (v19 == nullptr) {
        goto LABEL_76;
      }
    }
  }
  while (1) {
    v21 = v19[1];
    if (v21 == -1082066006) {
      break;
    }
    if (v21 >= v0) {
      result = v21 / v0;
      v21 %= v0;
    }
    if (v21 != v17) {
      goto LABEL_76;
    }
  LABEL_63:
    v19 = (__int64*)*v19;
    if (v19 == nullptr) {
      goto LABEL_76;
    }
  }
  if (*((_DWORD*)v19 + 4) != -1082066006) {
    goto LABEL_63;
  }
LABEL_75:
  v20 = *((_DWORD*)v19 + 5);
LABEL_76:
  *((_DWORD*)&game_hub_g_motions + 10 * v20 + 3) = 0;
LABEL_77:
  if ((v0 & v2) == 0) {
    v23 = v2 & 0xFFFFFFFFBB51DBC3LL;
    v24 = *(__int64***)(v4 + 8 * (v2 & 0xFFFFFFFFBB51DBC3LL));
    if (v24 != nullptr) {
      goto LABEL_83;
    }
    goto LABEL_98;
  }
  v23 = -1152263229;
  if (v0 <= 0xFFFFFFFFBB51DBC3LL) {
    v23 = 0xFFFFFFFFBB51DBC3LL % v0;
  }
  v24 = *(__int64***)(v4 + 8 * v23);
  if (v24 == nullptr) {
    goto LABEL_98;
  }
LABEL_83:
  v25 = *v24;
  if (*v24 == nullptr) {
  LABEL_98:
    GameData_216dc0c = 0;
    goto LABEL_101;
  }
  v26 = 639;
  if ((v0 & v2) == 0) {
    while (1) {
      v28 = v25[1];
      if (v28 == -1152263229) {
        if (*((_DWORD*)v25 + 4) == -1152263229) {
          goto LABEL_99;
        }
      }
      else if ((v28 & v2) != v23) {
        goto LABEL_100;
      }
      v25 = (__int64*)*v25;
      if (v25 == nullptr) {
        goto LABEL_100;
      }
    }
  }
  while (1) {
    v27 = v25[1];
    if (v27 == -1152263229) {
      break;
    }
    if (v27 >= v0) {
      result = v27 / v0;
      v27 %= v0;
    }
    if (v27 != v23) {
      goto LABEL_100;
    }
  LABEL_87:
    v25 = (__int64*)*v25;
    if (v25 == nullptr) {
      goto LABEL_100;
    }
  }
  if (*((_DWORD*)v25 + 4) != -1152263229) {
    goto LABEL_87;
  }
LABEL_99:
  v26 = *((_DWORD*)v25 + 5);
LABEL_100:
  *((_DWORD*)&game_hub_g_motions + 10 * v26 + 3) = 0;
LABEL_101:
  if ((v0 & v2) != 0) {
    v29 = -906281409;
    if (v0 <= 0xFFFFFFFFC9FB3E3FLL) {
      v29 = 0xFFFFFFFFC9FB3E3FLL % v0;
    }
  }
  else {
    v29 = v2 & 0xFFFFFFFFC9FB3E3FLL;
  }
  v30 = *(__int64***)(v4 + 8 * v29);
  if (v30 == nullptr || (v31 = *v30, *v30 == nullptr)) {
    GameData_216dc0c = 0;
    goto LABEL_124;
  }
  v32 = 639;
  if ((v0 & v2) == 0) {
    while (1) {
      v34 = v31[1];
      if (v34 == -906281409) {
        if (*((_DWORD*)v31 + 4) == -906281409) {
          goto LABEL_122;
        }
      }
      else if ((v34 & v2) != v29) {
        goto LABEL_123;
      }
      v31 = (__int64*)*v31;
      if (v31 == nullptr) {
        goto LABEL_123;
      }
    }
  }
  while (2) {
    v33 = v31[1];
    if (v33 != -906281409) {
      if (v33 >= v0) {
        result = v33 / v0;
        v33 %= v0;
      }
      if (v33 != v29) {
        goto LABEL_123;
      }
    }
    else if (*((_DWORD*)v31 + 4) == -906281409) {
    LABEL_122:
      v32 = *((_DWORD*)v31 + 5);
    LABEL_123:
      *((_DWORD*)&game_hub_g_motions + 10 * v32 + 3) = 0;
    LABEL_124:
      v35 = -906281408;
      if ((v0 & v2) == 0) {
        v35 = v2 & 0xFFFFFFFFC9FB3E40LL;
        v36 = *(__int64***)(v4 + 8 * (v2 & 0xFFFFFFFFC9FB3E40LL));
        if (v36 != nullptr) {
          goto LABEL_130;
        }
        goto LABEL_145;
      }
      if (v0 <= 0xFFFFFFFFC9FB3E40LL) {
        v35 = 0xFFFFFFFFC9FB3E40LL % v0;
      }
      v36 = *(__int64***)(v4 + 8 * v35);
      if (v36 == nullptr) {
        goto LABEL_145;
      }
    LABEL_130:
      v37 = *v36;
      if (*v36 == nullptr) {
      LABEL_145:
        GameData_216dc0c = 0;
        goto LABEL_148;
      }
      v38 = 639;
      if ((v0 & v2) == 0) {
        while (1) {
          v40 = v37[1];
          result = -906281408;
          if (v40 == -906281408) {
            result = 3388685888LL;
            if (*((_DWORD*)v37 + 4) == -906281408) {
              goto LABEL_146;
            }
          }
          else if ((v40 & v2) != v35) {
            goto LABEL_147;
          }
          v37 = (__int64*)*v37;
          if (v37 == nullptr) {
            goto LABEL_147;
          }
        }
      }
      while (1) {
        v39 = v37[1];
        result = -906281408;
        if (v39 == -906281408) {
          break;
        }
        if (v39 >= v0) {
          result = v39 / v0;
          v39 %= v0;
        }
        if (v39 != v35) {
          goto LABEL_147;
        }
      LABEL_134:
        v37 = (__int64*)*v37;
        if (v37 == nullptr) {
          goto LABEL_147;
        }
      }
      result = 3388685888LL;
      if (*((_DWORD*)v37 + 4) != -906281408) {
        goto LABEL_134;
      }
    LABEL_146:
      v38 = *((_DWORD*)v37 + 5);
    LABEL_147:
      *((_DWORD*)&game_hub_g_motions + 10 * v38 + 3) = 0;
    LABEL_148:
      v41 = -906281407;
      if ((v0 & v2) == 0) {
        v41 = v2 & 0xFFFFFFFFC9FB3E41LL;
        v42 = *(__int64***)(v4 + 8 * (v2 & 0xFFFFFFFFC9FB3E41LL));
        if (v42 != nullptr) {
          goto LABEL_154;
        }
        goto LABEL_169;
      }
      if (v0 <= 0xFFFFFFFFC9FB3E41LL) {
        v41 = 0xFFFFFFFFC9FB3E41LL % v0;
      }
      v42 = *(__int64***)(v4 + 8 * v41);
      if (v42 == nullptr) {
        goto LABEL_169;
      }
    LABEL_154:
      v43 = *v42;
      if (*v42 == nullptr) {
      LABEL_169:
        GameData_216dc0c = 0;
        goto LABEL_172;
      }
      v44 = 639;
      if ((v0 & v2) == 0) {
        while (1) {
          v46 = v43[1];
          result = -906281407;
          if (v46 == -906281407) {
            result = 3388685889LL;
            if (*((_DWORD*)v43 + 4) == -906281407) {
              goto LABEL_170;
            }
          }
          else if ((v46 & v2) != v41) {
            goto LABEL_171;
          }
          v43 = (__int64*)*v43;
          if (v43 == nullptr) {
            goto LABEL_171;
          }
        }
      }
      while (1) {
        v45 = v43[1];
        result = -906281407;
        if (v45 == -906281407) {
          break;
        }
        if (v45 >= v0) {
          result = v45 / v0;
          v45 %= v0;
        }
        if (v45 != v41) {
          goto LABEL_171;
        }
      LABEL_158:
        v43 = (__int64*)*v43;
        if (v43 == nullptr) {
          goto LABEL_171;
        }
      }
      result = 3388685889LL;
      if (*((_DWORD*)v43 + 4) != -906281407) {
        goto LABEL_158;
      }
    LABEL_170:
      v44 = *((_DWORD*)v43 + 5);
    LABEL_171:
      *((_DWORD*)&game_hub_g_motions + 10 * v44 + 3) = 0;
    LABEL_172:
      if ((v0 & v2) == 0) {
        v47 = v2 & 0xFFFFFFFFB27D7F4ALL;
        v48 = *(__int64***)(v4 + 8 * (v2 & 0xFFFFFFFFB27D7F4ALL));
        if (v48 != nullptr) {
          goto LABEL_178;
        }
        goto LABEL_193;
      }
      v47 = -1300398262;
      if (v0 <= 0xFFFFFFFFB27D7F4ALL) {
        v47 = 0xFFFFFFFFB27D7F4ALL % v0;
      }
      v48 = *(__int64***)(v4 + 8 * v47);
      if (v48 == nullptr) {
        goto LABEL_193;
      }
    LABEL_178:
      v49 = *v48;
      if (v49 == nullptr) {
      LABEL_193:
        GameData_216dc0c = 0;
        goto LABEL_196;
      }
      v50 = 639;
      if ((v0 & v2) == 0) {
        while (1) {
          v52 = v49[1];
          if (v52 == -1300398262) {
            if (*((_DWORD*)v49 + 4) == -1300398262) {
              goto LABEL_194;
            }
          }
          else if ((v52 & v2) != v47) {
            goto LABEL_195;
          }
          v49 = (__int64*)*v49;
          if (v49 == nullptr) {
            goto LABEL_195;
          }
        }
      }
      while (1) {
        v51 = v49[1];
        if (v51 == -1300398262) {
          break;
        }
        if (v51 >= v0) {
          v51 %= v0;
        }
        if (v51 != v47) {
          goto LABEL_195;
        }
      LABEL_182:
        v49 = (__int64*)*v49;
        if (v49 == nullptr) {
          goto LABEL_195;
        }
      }
      if (*((_DWORD*)v49 + 4) != -1300398262) {
        goto LABEL_182;
      }
    LABEL_194:
      v50 = *((_DWORD*)v49 + 5);
    LABEL_195:
      *((_DWORD*)&game_hub_g_motions + 10 * v50 + 3) = 0;
    LABEL_196:
      if ((v0 & v2) != 0) {
        v53 = 1715476756;
        if (v0 <= 0x66401914) {
          v53 = 0x66401914 % (unsigned int)v0;
        }
        v54 = *(__int64***)(v4 + 8 * v53);
        if (v54 == nullptr) {
          goto LABEL_212;
        }
      LABEL_202:
        v55 = *v54;
        if (*v54 != nullptr) {
          v56 = 639;
          if ((v0 & v2) == 0) {
            while (1) {
              v58 = v55[1];
              if (v58 == 1715476756) {
                if (*((_DWORD*)v55 + 4) == 1715476756) {
                  goto LABEL_219;
                }
              }
              else if ((v58 & v2) != v53) {
                goto LABEL_213;
              }
              v55 = (__int64*)*v55;
              if (v55 == nullptr) {
                goto LABEL_213;
              }
            }
          }
          while (1) {
            v57 = v55[1];
            if (v57 == 1715476756) {
              if (*((_DWORD*)v55 + 4) == 1715476756) {
              LABEL_219:
                v56 = *((_DWORD*)v55 + 5);
                goto LABEL_213;
              }
            }
            else {
              if (v57 >= v0) {
                v57 %= v0;
              }
              if (v57 != v53) {
                goto LABEL_213;
              }
            }
            v55 = (__int64*)*v55;
            if (v55 == nullptr) {
              goto LABEL_213;
            }
          }
        }
      }
      else {
        v53 = ((_DWORD)v0 - 1) & 0x66401914;
        v54 = *(__int64***)(v4 + 8 * v53);
        if (v54 != nullptr) {
          goto LABEL_202;
        }
      }
    LABEL_212:
      v56 = 639;
    LABEL_213:
      *((_DWORD*)&game_hub_g_motions + 10 * v56 + 3) = -589947500;
      return result;
    }
    v31 = (__int64*)*v31;
    if (v31 == nullptr) {
      goto LABEL_123;
    }
    continue;
  }
}

bool game_108c760(int a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64** v4;
  __int64* v5;
  int v6;
  unsigned __int64 v7;
  int v8;
  __int64 v11;

  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v2 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v3 = a1;
      if (GameData_22356f8 <= (unsigned __int64)a1) {
        v3 = a1 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v3 = v2 & a1;
    }
    v4 = *(__int64***)(GameData_22356f0 + 8 * v3);
    if (v4 != nullptr) {
      v5 = *v4;
      if (*v4 != nullptr) {
        v6 = 639;
        if ((GameData_22356f8 & v2) == 0) {
          while (1) {
            v11 = v5[1];
            if (v11 == a1) {
              if (*((_DWORD*)v5 + 4) == a1) {
                goto LABEL_35;
              }
            }
            else if ((v11 & v2) != v3) {
              goto LABEL_21;
            }
            v5 = (__int64*)*v5;
            if (v5 == nullptr) {
              goto LABEL_21;
            }
          }
        }
        while (1) {
          v7 = v5[1];
          if (v7 == a1) {
            break;
          }
          if (v7 >= GameData_22356f8) {
            v7 %= (unsigned __int64)GameData_22356f8;
          }
          if (v7 != v3) {
            goto LABEL_21;
          }
        LABEL_14:
          v5 = (__int64*)*v5;
          if (v5 == nullptr) {
            goto LABEL_21;
          }
        }
        if (*((_DWORD*)v5 + 4) != a1) {
          goto LABEL_14;
        }
      LABEL_35:
        v6 = *((_DWORD*)v5 + 5);
      LABEL_21:
        v8 = *((_DWORD*)&game_hub_g_motions + 10 * v6 + 3);
        return v8 != -574916402 && v8 != 1669996436 && v8 != 0;
      }
    }
  }
  v6 = 639;
  goto LABEL_21;
}

__int64 game_108c8a0(int a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64** v4;
  __int64* v5;
  int v6;
  unsigned __int64 v7;
  __int64 v9;

  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v2 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v3 = a1;
      if (GameData_22356f8 <= (unsigned __int64)a1) {
        v3 = a1 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v3 = v2 & a1;
    }
    v4 = *(__int64***)(GameData_22356f0 + 8 * v3);
    if (v4 != nullptr) {
      v5 = *v4;
      if (*v4 != nullptr) {
        v6 = 639;
        if ((GameData_22356f8 & v2) == 0) {
          while (1) {
            v9 = v5[1];
            if (v9 == a1) {
              if (*((_DWORD*)v5 + 4) == a1) {
                goto LABEL_27;
              }
            }
            else if ((v9 & v2) != v3) {
              return *((unsigned int*)&game_hub_g_motions + 10 * v6 + 3);
            }
            v5 = (__int64*)*v5;
            if (v5 == nullptr) {
              return *((unsigned int*)&game_hub_g_motions + 10 * v6 + 3);
            }
          }
        }
        while (1) {
          v7 = v5[1];
          if (v7 == a1) {
            if (*((_DWORD*)v5 + 4) == a1) {
            LABEL_27:
              v6 = *((_DWORD*)v5 + 5);
              return *((unsigned int*)&game_hub_g_motions + 10 * v6 + 3);
            }
          }
          else {
            if (v7 >= GameData_22356f8) {
              v7 %= (unsigned __int64)GameData_22356f8;
            }
            if (v7 != v3) {
              return *((unsigned int*)&game_hub_g_motions + 10 * v6 + 3);
            }
          }
          v5 = (__int64*)*v5;
          if (v5 == nullptr) {
            return *((unsigned int*)&game_hub_g_motions + 10 * v6 + 3);
          }
        }
      }
    }
  }
  v6 = 639;
  return *((unsigned int*)&game_hub_g_motions + 10 * v6 + 3);
}

bool game_108c9c0(int a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64** v4;
  __int64* v5;
  int v6;
  unsigned __int64 v7;
  int v8;
  bool v9;
  __int64 v11;
  _BOOL8 result;

  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v2 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v3 = a1;
      if (GameData_22356f8 <= (unsigned __int64)a1) {
        v3 = a1 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v3 = v2 & a1;
    }
    v4 = *(__int64***)(GameData_22356f0 + 8 * v3);
    if (v4 != nullptr) {
      v5 = *v4;
      if (*v4 != nullptr) {
        v6 = 639;
        if ((GameData_22356f8 & v2) == 0) {
          while (1) {
            v11 = v5[1];
            if (v11 == a1) {
              if (*((_DWORD*)v5 + 4) == a1) {
                goto LABEL_36;
              }
            }
            else if ((v11 & v2) != v3) {
              goto LABEL_21;
            }
            v5 = (__int64*)*v5;
            if (v5 == nullptr) {
              goto LABEL_21;
            }
          }
        }
        while (1) {
          v7 = v5[1];
          if (v7 == a1) {
            if (*((_DWORD*)v5 + 4) == a1) {
            LABEL_36:
              v6 = *((_DWORD*)v5 + 5);
              goto LABEL_21;
            }
          }
          else {
            if (v7 >= GameData_22356f8) {
              v7 %= (unsigned __int64)GameData_22356f8;
            }
            if (v7 != v3) {
              goto LABEL_21;
            }
          }
          v5 = (__int64*)*v5;
          if (v5 == nullptr) {
            goto LABEL_21;
          }
        }
      }
    }
  }
  v6 = 639;
LABEL_21:
  v8 = *((_DWORD*)&game_hub_g_motions + 10 * v6 + 3);
  result = false;
  if (a1 != v8) {
    v9 = v8 == -574916402 || v8 == 1669996436;
    if (!v9 && v8 != 0) {
      return true;
    }
  }
  return result;
}

unsigned __int64 game_108cc80(unsigned __int64 result, int a2)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  char** v10;

  if ((_DWORD)result == 0) {
    return result;
  }
  if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
    goto LABEL_25;
  }
  v3 = GameData_22356f8 - 1;
  if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
    v4 = (int)result;
    if (GameData_22356f8 <= (unsigned __int64)(int)result) {
      v4 = (int)result % (unsigned __int64)GameData_22356f8;
    }
  }
  else {
    v4 = v3 & (int)result;
  }
  v5 = *(__int64***)(GameData_22356f0 + 8 * v4);
  if (v5 == nullptr || (v6 = *v5) == nullptr) {
  LABEL_25:
    v9 = 639;
    return *((_DWORD*)&game_hub_g_motions + 10 * v9 + 3) == a2 &&
           *((_DWORD*)(v10 = &(&game_hub_g_motions)[5 * v9]) + 12) == a2 &&
           *((_DWORD*)v10 + 13) == a2;
  }
  if ((GameData_22356f8 & v3) == 0) {
    while (1) {
      v8 = v6[1];
      if (v8 == (int)result) {
        if (*((_DWORD*)v6 + 4) == (_DWORD)result) {
          goto LABEL_31;
        }
      }
      else if ((v8 & v3) != v4) {
        goto LABEL_25;
      }
      v6 = (__int64*)*v6;
      if (v6 == nullptr) {
        goto LABEL_25;
      }
    }
  }
  while (1) {
    v7 = v6[1];
    if (v7 == (int)result) {
      break;
    }
    if (v7 >= GameData_22356f8) {
      v7 %= (unsigned __int64)GameData_22356f8;
    }
    if (v7 != v4) {
      goto LABEL_25;
    }
  LABEL_15:
    v6 = (__int64*)*v6;
    if (v6 == nullptr) {
      goto LABEL_25;
    }
  }
  if (*((_DWORD*)v6 + 4) != (_DWORD)result) {
    goto LABEL_15;
  }
LABEL_31:
  v9 = *((_DWORD*)v6 + 5);
  return *((_DWORD*)&game_hub_g_motions + 10 * v9 + 3) == a2 &&
         *((_DWORD*)(v10 = &(&game_hub_g_motions)[5 * v9]) + 12) == a2 &&
         *((_DWORD*)v10 + 13) == a2;
}

bool game_108cee0(int a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64** v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;

  if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
    return false;
  }
  v2 = GameData_22356f8 - 1;
  if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
    v3 = a1;
    if (GameData_22356f8 <= (unsigned __int64)a1) {
      v3 = a1 % (unsigned __int64)GameData_22356f8;
    }
  }
  else {
    v3 = v2 & a1;
  }
  v4 = *(__int64***)(GameData_22356f0 + 8 * v3);
  if (v4 == nullptr) {
    return false;
  }
  v5 = *v4;
  if (v5 == nullptr) {
    return false;
  }
  if ((GameData_22356f8 & v2) == 0) {
    while (1) {
      v7 = v5[1];
      if (v7 == a1) {
        if (*((_DWORD*)v5 + 4) == a1) {
          return *((_DWORD*)v5 + 5) < 100;
        }
      }
      else if ((v7 & v2) != v3) {
        return false;
      }
      v5 = (__int64*)*v5;
      if (v5 == nullptr) {
        return false;
      }
    }
  }
  while (1) {
    v6 = v5[1];
    if (v6 == a1) {
      break;
    }
    if (v6 >= GameData_22356f8) {
      v6 %= (unsigned __int64)GameData_22356f8;
    }
    if (v6 != v3) {
      return false;
    }
  LABEL_14:
    v5 = (__int64*)*v5;
    if (v5 == nullptr) {
      return false;
    }
  }
  if (*((_DWORD*)v5 + 4) != a1) {
    goto LABEL_14;
  }
  return *((_DWORD*)v5 + 5) < 100;
}

__attribute__((swiftcall)) void game_108d130(PSEUDO_X8 x8_, __int64 a1,
                                             char* a2, float32x4_t* a3,
                                             __int64* a4, long double a6)
{

#pragma clang fp contract(off)
  _QWORD* a5 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float v6;
  int v7;
  char* v10;
  __int64 v12;
  float32x4_t* v13;
  float32x4_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  float v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  _BYTE* v29;
  float v30;
  __int64 v31;
  __int64 v32;
  int v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int8* v36;
  unsigned __int64 v37;
  __int8* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64* v42;
  unsigned __int8* v43;
  __int64 v44;
  int v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  float v49;
  float32x4_t v50;
  _QWORD* v51;
  __int64 v52;
  __int128 v53;
  __int64 v54;
  __int64* v55;
  unsigned int v56;
  __int64 v57;
  float32x4_t v58;
  float32x4_t v59;
  char* v60;
  struct {
    float32x4_t v61;
    unsigned __int8* v62;
    int v63;
    char gap76_[4];
    float32x4_t v64;
    __int128 v65;
    __int64 v66;
    __int64 v67;
  } v61_;

  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = *(float*)(a1 + 72);
  v7 = *(_DWORD*)(a1 + 68);
  v10 = a2;
  *(_DWORD*)(a1 + 68) = 0;
  if (v6 == 0x0.0p+0f) {
    v18 = (__typeof__(v18)){0};
    if (a2 == nullptr) {
      goto LABEL_37;
    }
    goto LABEL_16;
  }
  if (GameData_21ec7b0 != 0) {
    v12 = *(_QWORD*)(GameData_21ec7b0 + 128);
    if (v12 != 0) {
      v13 = *(float32x4_t**)(v12 + 72);
    LABEL_5:
      if (v13 != nullptr) {
        v14 = vsubq_f32(*a3, v13[1]);
        v15 = vmulq_f32(v14, v14);
        LANES128(v15).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                .n64_u64[0];
        LANES128(v15).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                .n64_u64[0];
        LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
        v16 = vrsqrteq_f32(v15);
        v17 = vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v15, v16)));
        v18 = vmulq_n_f32(
            vbicq_s8(
                vmulq_f32(v14, vmulq_f32(v17, vrsqrtsq_f32(
                                                  v17, vmulq_f32(v15, v17)))),
                vceqzq_f32(v15)),
            *(float*)(a1 + 72));
        LANES128(v18).n128_u32[3] = 0;
      }
      else {
        v18 = (__typeof__(v18)){0};
      }
      goto LABEL_15;
    }
  }
  v18 = (__typeof__(v18)){0};
  v19 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
  if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) != v19) {
    v20 = *(_QWORD*)(v19 - 8);
    if (v20 != 0) {
      v13 = *(float32x4_t**)(v20 + 24);
      v21 = *(_QWORD*)(v20 + 32);
      if (v21 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v22 = a1;
          v23 = LODWORD(a6);
          (*(void (**)(__int64, long double, long double))(*(_QWORD*)v21 +
                                                           16LL))(
              v21, a6, COERCE_LONG_DOUBLE((unsigned __int128)0LL)),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v21),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          LODWORD(a6) = v23;
          a1 = v22;
        }
      }
      goto LABEL_5;
    }
  }
LABEL_15:
  *(_DWORD*)(a1 + 72) = 0;
  if (v10 == nullptr) {
  LABEL_37:
    v39 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v39 + 16) = 0;
    v40 = GameData_2131678;
    *(_DWORD*)(v39 + 32) = 0;
    *(_QWORD*)(v39 + 40) = 0;
    *(_DWORD*)(v39 + 48) = 0x2000;
    *(_DWORD*)(v39 + 104) = 0;
    *(_QWORD*)(v39 + 56) = 0;
    *(_QWORD*)(v39 + 64) = 0;
    *(_QWORD*)(v39 + 72) = 0;
    *(_WORD*)(v39 + 80) = 0;
    *(_WORD*)(v39 + 116) = 0;
    *(_WORD*)(v39 + 136) = 0;
    *(_BYTE*)(v39 + 160) = 0;
    *(_BYTE*)(v39 + 288) = 0;
    *(_QWORD*)(v39 + 272) = 0;
    *(_QWORD*)(v39 + 280) = 0;
    *(_QWORD*)(v39 + 256) = 0;
    *(_QWORD*)(v39 + 264) = 0;
    *(_QWORD*)(v39 + 240) = 0;
    *(_QWORD*)(v39 + 248) = 0;
    *(_QWORD*)(v39 + 224) = 0;
    *(_QWORD*)(v39 + 232) = 0;
    *(_QWORD*)(v39 + 208) = 0;
    *(_QWORD*)(v39 + 216) = 0;
    *(_QWORD*)(v39 + 192) = 0;
    *(_QWORD*)(v39 + 200) = 0;
    *(_QWORD*)(v39 + 176) = 0;
    *(_QWORD*)(v39 + 184) = 0;
    *(_QWORD*)(v39 + 168) = 0;
    *(_QWORD*)(v39 + 120) = 0;
    *(_DWORD*)(v39 + 127) = 0;
    a5[1] = v39;
    *(_QWORD*)v39 = v40 + 16;
    *(_QWORD*)(v39 + 8) = 0;
    *(_WORD*)(v39 + 108) = 256;
    *(_DWORD*)(v39 + 112) = -1082130432;
    *(_DWORD*)(v39 + 292) = 2;
    *(_QWORD*)(v39 + 24) = 0;
    *a5 = v39 + 24;
    return;
  }
LABEL_16:
  if (*v10 == 0) {
    goto LABEL_37;
  }
  v24 = *(float*)(a1 + 64);
  v58 = v18;
  LANES128(v61_.v61).n128_u64[1] = (unsigned __int64)v10;
  v25 = a1;
  v26 = *(float*)&a6 * v24;
  if (*(float*)&a6 >= 0x0.0p+0f) {
    v27 = v26;
  }
  else {
    v27 = -*(float*)&a6;
  }
  LANES128(v61_.v61).n128_u64[0] = game_HashString_alt1((__int64)v10),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = GameRoutine_9e1800(LANES128(v61_.v61).n128_u64),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = *(_BYTE**)(v25 + 56);
  v30 = v28;
  v61_.v62 = nullptr;
  v61_.v61 = (__typeof__(v61_.v61)){0};
  v31 = strchr(v10, 63),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v31 == 0) {
    v60 = nullptr;
    v59 = (__typeof__(v59)){0};
    goto LABEL_46;
  }
  v32 = v31;
  GameRoutine_1a09ce0(&v61_.v61, v10, v31 - (_QWORD)v10),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(v32 + 1) == 111 && *(_BYTE*)(v32 + 2) == 114) {
    v33 = LANES128(v61_.v61).n128_u8[0] & 1;
    if (v33 != 0) {
      v34 = LANES128(v61_.v61).n128_u64[1];
    }
    else {
      v34 = (unsigned __int64)LANES128(v61_.v61).n128_u8[0] >> 1;
    }
    if (v29 == nullptr || *v29 == 0) {
      goto LABEL_49;
    }
    GameRoutine_1a09ce0(&v61_.v61, &GameData_1ac690d, 1),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v35 = strlen(v29),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_1a09ce0(&v61_.v61, v29, v35),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((LANES128(v61_.v61).n128_u8[0] & 1) != 0) {
      v36 = v61_.v62;
    }
    else {
      v36 = &LANES128(v61_.v61).n128_u8[1];
    }
    if (!GameRoutine_108e940(v36)) {
      v37 = LANES128(v61_.v61).n128_u64[1];
      if ((LANES128(v61_.v61).n128_u8[0] & 1) == 0) {
        v37 = (unsigned __int64)LANES128(v61_.v61).n128_u8[0] >> 1;
      }
      if (v34 > v37) {
        String_60a230(),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if ((LANES128(v61_.v61).n128_u8[0] & 1) != 0) {
        v38 = (__int8*)v61_.v62;
        LANES128(v61_.v61).n128_u64[1] = v34;
      }
      else {
        v38 = &LANES128(v61_.v61).n128_i8[1];
        LANES128(v61_.v61).n128_u8[0] = 2 * v34;
      }
      v38[v34] = 0;
      v33 = LANES128(v61_.v61).n128_u8[0] & 1;
    LABEL_49:
      if (v33 != 0) {
        v43 = v61_.v62;
      }
      else {
        v43 = &LANES128(v61_.v61).n128_u8[1];
      }
      if (!GameRoutine_108e940(v43)) {
        goto LABEL_53;
      }
    }
  LABEL_44:
    v59 = v61_.v61;
    v60 = (char*)v61_.v62;
  LABEL_46:
    v61_.v61 = (__typeof__(v61_.v61)){0};
    v61_.v62 = nullptr;
    goto LABEL_58;
  }
  if (v29 != nullptr && *v29 != 0) {
    GameRoutine_1a09ce0(&v61_.v61, &GameData_1ac690d, 1),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v41 = strlen(v29),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_1a09ce0(&v61_.v61, v29, v41),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v42 = (LANES128(v61_.v61).n128_u8[0] & 1) != 0
              ? (unsigned __int64*)v61_.v62
              : (unsigned __int64*)((char*)LANES128(v61_.v61).n128_u64 + 1);
    if (GameRoutine_108e940(v42)) {
      goto LABEL_44;
    }
  }
LABEL_53:
  LANES128(v59).n128_u8[2] = 0;
  LANES128(v59).n128_u16[0] = 8450;
  if ((LANES128(v61_.v61).n128_u8[0] & 1) != 0 && v61_.v62 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v44),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_58:
  v45 = LANES128(v59).n128_u8[0] & 1;
  v46 = (unsigned __int64)LANES128(v59).n128_u8[0] >> 1;
  if (v45 != 0) {
    v46 = LANES128(v59).n128_u64[1];
  }
  if (v46 != 0) {
    v10 = v45 != 0 ? v60 : (char*)LANES128(v59).n128_u64 + 1;
    if (*v10 == 33) {
      v47 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(v47 + 16) = 0;
      v48 = GameData_2131678;
      *(_DWORD*)(v47 + 32) = 0;
      *(_QWORD*)(v47 + 40) = 0;
      *(_DWORD*)(v47 + 48) = 0x2000;
      *(_DWORD*)(v47 + 104) = 0;
      *(_QWORD*)(v47 + 56) = 0;
      *(_QWORD*)(v47 + 64) = 0;
      *(_QWORD*)(v47 + 72) = 0;
      *(_WORD*)(v47 + 80) = 0;
      *(_WORD*)(v47 + 116) = 0;
      *(_WORD*)(v47 + 136) = 0;
      *(_BYTE*)(v47 + 160) = 0;
      *(_BYTE*)(v47 + 288) = 0;
      *(_QWORD*)(v47 + 272) = 0;
      *(_QWORD*)(v47 + 280) = 0;
      *(_QWORD*)(v47 + 256) = 0;
      *(_QWORD*)(v47 + 264) = 0;
      *(_QWORD*)(v47 + 240) = 0;
      *(_QWORD*)(v47 + 248) = 0;
      *(_QWORD*)(v47 + 224) = 0;
      *(_QWORD*)(v47 + 232) = 0;
      *(_QWORD*)(v47 + 208) = 0;
      *(_QWORD*)(v47 + 216) = 0;
      *(_QWORD*)(v47 + 192) = 0;
      *(_QWORD*)(v47 + 200) = 0;
      *(_QWORD*)(v47 + 176) = 0;
      *(_QWORD*)(v47 + 184) = 0;
      *(_QWORD*)(v47 + 168) = 0;
      *(_QWORD*)(v47 + 120) = 0;
      *(_DWORD*)(v47 + 127) = 0;
      a5[1] = v47;
      *(_QWORD*)v47 = v48 + 16;
      *(_QWORD*)(v47 + 8) = 0;
      *(_WORD*)(v47 + 108) = 256;
      *(_DWORD*)(v47 + 112) = -1082130432;
      *(_DWORD*)(v47 + 292) = 2;
      *(_QWORD*)(v47 + 24) = 0;
      *a5 = v47 + 24;
      if (v45 == 0) {
        return;
      }
      goto LABEL_74;
    }
  }
  v49 = v27 * v30;
  if (v7 == 0) {
    if (GameData_21ec7b0 != 0) {
      v7 = 7;
    }
    else if ((unsigned int)GameData_21d92e0 > 7) {
      v7 = 6;
    }
    else {
      v7 = GameData_1b01468[GameData_21d92e0];
    }
  }
  v50 = *a3;
  v61_.v61 = (__typeof__(v61_.v61)){0};
  v61_.v63 = v7;
  v61_.v62 = (unsigned __int8*)v10;
  v51 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  v52 = LODWORD(v49);
  *(_QWORD*)&v53 = LODWORD(v49) | ((unsigned __int64)LODWORD(v49) << 32);
  v54 = a4[1];
  *((_QWORD*)&v53 + 1) = v52;
  v61_.v66 = *a4;
  v61_.v67 = v54;
  v61_.v64 = vaddq_f32(v58, v50);
  v61_.v65 = v53;
  v55 = Manager_bc6460(v51, &v61_.v61, 1),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_14a10d0(a5, (__int64)v55, v56, (__int64)&GameData_1a9f09e),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((LANES128(v59).n128_u8[0] & 1) != 0) {
  LABEL_74:
    if (v60 != nullptr) {
      v57 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v57),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
}

__attribute__((swiftcall)) void game_108d920(PSEUDO_X8 x8_, _QWORD* a1,
                                             const char* a2, char* a3, float a5)
{

#pragma clang fp contract(off)
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v7;
  char* v9;
  __int64 v11;
  __int64 v12;
  __int64 v16;
  long double v17;
  float32x4_t v18;
  unsigned __int64 v19;
  __int128 v20;
  struct {
    float32x4_t v21;
    char v22;
  } v21_;

  if (a2 == nullptr) {
    goto LABEL_19;
  }
  v6 = a1[4];
  if (v6 == 0) {
    GameData_2235720 = 0;
    goto LABEL_19;
  }
  v7 = a1[5];
  if (*(_QWORD*)(v6 + 8) == -1 || v7 == 0) {
    GameData_2235720 = 0;
    goto LABEL_11;
  }
  if ((*(_BYTE*)(v7 + 340) & 1) != 0) {
  LABEL_19:
    v11 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
    *(_QWORD*)(v11 + 16) = 0;
    v12 = GameData_2131678;
    *(_DWORD*)(v11 + 32) = 0;
    *(_QWORD*)(v11 + 40) = 0;
    *(_DWORD*)(v11 + 48) = 0x2000;
    *(_DWORD*)(v11 + 104) = 0;
    *(_QWORD*)(v11 + 56) = 0;
    *(_QWORD*)(v11 + 64) = 0;
    *(_QWORD*)(v11 + 72) = 0;
    *(_WORD*)(v11 + 80) = 0;
    *(_WORD*)(v11 + 116) = 0;
    *(_WORD*)(v11 + 136) = 0;
    *(_BYTE*)(v11 + 160) = 0;
    *(_BYTE*)(v11 + 288) = 0;
    *(_QWORD*)(v11 + 272) = 0;
    *(_QWORD*)(v11 + 280) = 0;
    *(_QWORD*)(v11 + 256) = 0;
    *(_QWORD*)(v11 + 264) = 0;
    *(_QWORD*)(v11 + 240) = 0;
    *(_QWORD*)(v11 + 248) = 0;
    *(_QWORD*)(v11 + 224) = 0;
    *(_QWORD*)(v11 + 232) = 0;
    *(_QWORD*)(v11 + 208) = 0;
    *(_QWORD*)(v11 + 216) = 0;
    *(_QWORD*)(v11 + 192) = 0;
    *(_QWORD*)(v11 + 200) = 0;
    *(_QWORD*)(v11 + 176) = 0;
    *(_QWORD*)(v11 + 184) = 0;
    *(_QWORD*)(v11 + 168) = 0;
    *(_QWORD*)(v11 + 120) = 0;
    *(_DWORD*)(v11 + 127) = 0;
    a4[1] = v11;
    *(_QWORD*)v11 = v12 + 16;
    *(_QWORD*)(v11 + 8) = 0;
    *(_WORD*)(v11 + 108) = 256;
    *(_DWORD*)(v11 + 112) = -1082130432;
    *(_DWORD*)(v11 + 292) = 2;
    *(_QWORD*)(v11 + 24) = 0;
    *a4 = v11 + 24;
    return;
  }
LABEL_11:
  v9 = "-Loc_C_Center";
  if (a3 != nullptr) {
    v9 = a3;
  }
  if (*(_QWORD*)(v6 + 8) == -1 || v7 == 0) {
    LANES128(v21_.v21).n128_u8[0] = 0;
    v21_.v22 = 0;
    goto LABEL_19;
  }
  v16 = CharacterBuilder_1084a50_alt1(v7, v9);
  if (v16 == 0) {
    LANES128(v21_.v21).n128_u8[0] = 0;
    v21_.v22 = 0;
    goto LABEL_19;
  }
  v18 = *(float32x4_t*)(v16 + 48);
  v21_.v22 = 1;
  LODWORD(v19) = 0;
  *((float*)&v19 + 1) = *(float*)(a1[1] + 324LL) * 0x1.ca5dc20000000p+5f;
  *(float*)&v17 = a5;
  v20 = v19;
  v21_.v21 = v18;
  game_108d130_alt1((void*)(a4), (__int64)a1, a2, &v21_.v21, (__int64*)&v20,
                    v17);
}

__attribute__((swiftcall)) void

game_108db00(PSEUDO_X8 x8_, __int64 a1, char* a2, float32x4_t* a3, float a5)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v10;
  float v11;
  _QWORD* v12;
  char* v13;
  __int64* v14;
  const char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  _QWORD* v22;
  int v23;
  unsigned __int8 v24;
  long double v25;
  __int64 v26;
  __int64 result;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  _QWORD v31[2];
  const char* v32;
  _QWORD v33[2];
  char* v34;
  __int128 v35;

  v33[1] = 0;
  v34 = nullptr;
  v32 = nullptr;
  v33[0] = 0;
  v31[0] = 0;
  v31[1] = 0;
  v10 = strlen(a2);
  if ((GameRoutine_109ecc0(a2, v10, v33, v31) & 1) != 0) {
    v11 = 1.0;
    v12 = (_QWORD*)a1;
    if ((v33[0] & 1) != 0) {
      v13 = v34;
    }
    else {
      v13 = (char*)v33 + 1;
    }
    v14 = a4;
    if ((v31[0] & 1) != 0) {
      v15 = v32;
    }
    else {
      v15 = (char*)v31 + 1;
    }
  LABEL_21:
    result =
        X8CALL_X0(__int64, game_108d920_alt1((void*)(v14), v12, v13, v15, v11));
    if ((v31[0] & 1) == 0) {
      goto LABEL_27;
    }
    goto LABEL_22;
  }
  v16 = *(_QWORD*)(eft_g_effectSystem + 112);
  v17 = *(_QWORD*)(v16 + 24);
  if (v17 != 0) {
    v18 = 0;
    if (*a2 != 0) {
      v19 = *(_DWORD*)(v16 + 32);
      if (v19 != 0) {
        v20 = 0;
        while (1) {
          v21 = (v19 + v20) >> 1;
          v22 = (_QWORD*)(v17 + 336LL * v21);
          v23 = strcmp(*v22, a2);
          if (v23 == 0) {
            break;
          }
          if (v23 < 0) {
            v20 = v21 + 1;
          }
          else {
            v19 = (v19 + v20) >> 1;
          }
          if (v20 == v19) {
            goto LABEL_17;
          }
        }
        v18 = v22[14];
      }
    }
  }
  else {
  LABEL_17:
    v18 = 0;
  }
  v24 = GameRoutine_960f80(v18);
  if (v24 != 0) {
    v26 = v24;
    v11 = 1.0;
    v12 = (_QWORD*)a1;
    v13 = a2;
    v15 = (const char*)GameData_1fb0230[v26];
    v14 = a4;
    goto LABEL_21;
  }
  LODWORD(v29) = 0;
  *((float*)&v29 + 1) =
      *(float*)(*(_QWORD*)(a1 + 8) + 324LL) * 0x1.ca5dc20000000p+5;
  *(float*)&v25 = a5;
  v35 = v29;
  result = X8CALL_X0(
      __int64, game_108d130((void*)(a4), a1, a2, a3, (__int64*)&v35, v25));
  if ((v31[0] & 1) != 0) {
  LABEL_22:
    if (v32 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
    }
  }
LABEL_27:
  if ((v33[0] & 1) != 0 && v34 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v30);
      return;
    }
  }
  {
    result;
    return;
  }
}

void game_109b6a0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  _QWORD* v4;
  unsigned __int16 v5;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned int v40;
  float* v41;
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
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  int* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  struct {
    unsigned __int64 v59;
    __int64 v60;
    __int64 v61;
  } v59_;

  if (*(_BYTE*)(a1 + 64) != 1) {
    v38 = *(_QWORD*)(a1 + 8);
    v39 = a2[1] - *a2;
    v40 = game_HashString32((__int64)"Signals");
    v41 = *(float**)(v38 + 120);
    v59_.v59 = __PAIR64__(*(_DWORD*)(v38 + 20), v40);
    GameRoutine_6616e0(v41, (unsigned int*)&v59_.v59);
    v42 = *(int*)(v38 + 20);
    *(_DWORD*)(v38 + 20) = v42 + 1;
    *(_BYTE*)(*(_QWORD*)(v38 + 8) + v42) = v39 >> 6;
    v43 = *(int*)(v38 + 20);
    *(_DWORD*)(v38 + 20) = v43 + 1;
    *(_BYTE*)(*(_QWORD*)(v38 + 8) + v43) = v39 >> 14;
    goto LABEL_56;
  }
  v4 = *(_QWORD**)(a1 + 8);
  LODWORD(v59_.v59) = game_HashString32((__int64)"Signals");
  v5 = GameRoutine_65f9a0(v4, (unsigned int*)&v59_.v59, 0);
  v9 = *a2;
  v10 = a2[1];
  v11 = v5;
  v12 = v10 - *a2;
  v13 = v5 - (v12 >> 6);
  if (v5 <= (unsigned __int64)(v12 >> 6)) {
    if (v5 >= (unsigned __int64)(v12 >> 6)) {
      goto LABEL_56;
    }
    v44 = v9 + ((unsigned __int64)v5 << 6);
    if (v44 != v10) {
      v45 = fw_memory_g_heap_manager_ptr;
      do {
        if ((*(_BYTE*)(v10 - 32) & 1) != 0 && *(_QWORD*)(v10 - 16) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v45 + 200LL) != 0) {
            v46 = 128;
          }
          else {
            v46 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v45 + v46);
        }
        if ((*(_BYTE*)(v10 - 56) & 1) != 0 && *(_QWORD*)(v10 - 40) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v45 + 200LL) != 0) {
            v47 = 128;
          }
          else {
            v47 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v45 + v47);
        }
        v10 -= 64;
      } while (v10 != v44);
    }
    goto LABEL_36;
  }
  v14 = a2[2];
  if (v13 <= (v14 - v10) >> 6) {
    v44 = v10 + (v13 << 6);
    memset_alt1(a2[1], 0, v13 << 6);
  LABEL_36:
    a2[1] = v44;
    goto LABEL_56;
  }
  v15 = v14 - v9;
  if (v15 >> 5 > (unsigned __int64)v5) {
    v11 = v15 >> 5;
  }
  if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFC0LL) {
    v11 = 0x3FFFFFFFFFFFFFFLL;
  }
  if (v11 >> 58 != 0) {
    GameRoutine_60a210_alt1();
  }
  v16 = v11 << 6;
  v17 = fw_memory_g_heap_manager_ptr;
  v18 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, v11 << 6, 16, 0);
  v19 = *a2;
  v20 = a2[1];
  v21 = v18 + v12;
  v22 = v13 << 6;
  v23 = v18;
  memset_alt1(v21, 0, v22);
  v27 = v21 + v22;
  v28 = v23 + v16;
  v29 = v21 + v19 - v20;
  if (v19 != v20) {
    v30 = 0;
    do {
      v32 = v29 + v30;
      *(_WORD*)v32 = *(_WORD*)(v19 + v30);
      *(_WORD*)(v32 + 2) = *(_WORD*)(v19 + v30 + 2);
      *(_DWORD*)(v32 + 4) = *(_DWORD*)(v19 + v30 + 4);
      if ((*(_BYTE*)(v19 + v30 + 8) & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)(v32 + 8),
                                      *(_QWORD*)(v19 + v30 + 24),
                                      *(_QWORD*)(v19 + v30 + 16));
      }
      else {
        v33 = *(_QWORD*)(v19 + v30 + 8);
        v34 = *(_QWORD*)(v19 + v30 + 24);
        *(_QWORD*)(v32 + 16) = *(_QWORD*)(v19 + v30 + 16);
        *(_QWORD*)(v32 + 24) = v34;
        *(_QWORD*)(v32 + 8) = v33;
      }
      v35 = (__int64*)(v29 + v30);
      if ((*(_BYTE*)(v19 + v30 + 32) & 1) != 0) {
        fw_text_String_CopyTerminated(v35 + 4, *(_QWORD*)(v19 + v30 + 48),
                                      *(_QWORD*)(v19 + v30 + 40));
      }
      else {
        v36 = *(_QWORD*)(v19 + v30 + 32);
        v37 = *(_QWORD*)(v19 + v30 + 48);
        v35[5] = *(_QWORD*)(v19 + v30 + 40);
        v35[6] = v37;
        v35[4] = v36;
      }
      v31 = v19 + v30;
      v30 += 64;
      *(_QWORD*)(v32 + 56) = *(_QWORD*)(v31 + 56);
    } while (v19 + v30 != v20);
    do {
      if ((*(_BYTE*)(v19 + 32) & 1) != 0 && *(_QWORD*)(v19 + 48) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
          v48 = 128;
        }
        else {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v48);
      }
      if ((*(_BYTE*)(v19 + 8) & 1) != 0 && *(_QWORD*)(v19 + 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
          v49 = 128;
        }
        else {
          v49 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v49);
      }
      v19 += 64;
    } while (v19 != v20);
    v19 = *a2;
  }
  *a2 = v29;
  a2[1] = v27;
  a2[2] = v28;
  if (v19 != 0) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v50);
  }
LABEL_56:
  if (a2[1] != *a2) {
    v51 = 0;
    v52 = 0;
    do {
      GameRoutine_111ef70(a1, (__int64)"%s[%d]", "Signals", v52);
      v54 = *a2;
      v55 = (int*)(*a2 + v51);
      GameRoutine_111f130(a1, (__int64)"Frame", v55 + 1, 0);
      LODWORD(v59_.v59) = *(unsigned __int8*)v55;
      GameRoutine_111f130(a1, (__int64)"Command", (int*)&v59_.v59, 0);
      *(_BYTE*)v55 = v59_.v59;
      LODWORD(v59_.v59) = *((unsigned __int8*)v55 + 1);
      GameRoutine_111f130(a1, (__int64)"Connect", (int*)&v59_.v59, 0);
      *((_BYTE*)v55 + 1) = v59_.v59;
      v59_.v60 = 0;
      v59_.v61 = 0;
      v59_.v59 = 0;
      GameRoutine_111f310(a1, (__int64)"ParticleName", (__int64)(v55 + 2),
                          (char*)&v59_.v59);
      if ((v59_.v59 & 1) != 0 && v59_.v61 != 0) {
        v56 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v56 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v56);
      }
      v59_.v60 = 0;
      v59_.v61 = 0;
      v59_.v59 = 0;
      GameRoutine_111f310(a1, (__int64)"BoneName", (__int64)(v55 + 8),
                          (char*)&v59_.v59);
      if ((v59_.v59 & 1) != 0 && v59_.v61 != 0) {
        v57 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v57 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v57);
      }
      v58 = v54 + v51;
      GameRoutine_111f130(a1, (__int64)"IntValue", (int*)(v58 + 56), 0);
      GameRoutine_111f220(a1, (__int64)"FloatValue", (float*)(v58 + 60),
                          0x0.0p+0f);
      LODWORD(v59_.v59) = *(unsigned __int16*)(v58 + 2);
      GameRoutine_111f040(a1, (__int64)"Flags", (int*)&v59_.v59, 0);
      if (*(_BYTE*)(a1 + 64) == 1) {
        *(_WORD*)(v58 + 2) = v59_.v59;
        v53 = 8;
        if (*(_BYTE*)(a1 + 64) != 0) {
          v53 = 24;
        }
      }
      else {
        v53 = 8;
      }
      (*(void (**)(void*))(**(_QWORD**)(a1 + 8) + v53))(
          (void*)*(_QWORD**)(a1 + 8));
      ++v52;
      v51 += 64;
    } while (v52 < (a2[1] - *a2) >> 6);
  }
}

float game_10a2940(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  float result;
  __int64 v3;
  char v4;

  if (GameData_21ec7b0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v1 != 0) {
      LODWORD(v1) = *(unsigned __int8*)(v1 + 113) >> 7;
    }
  }
  result = -0x1.99999a0000000p-3f;
  if (((GameData_21ec7b0 != 0) & (unsigned __int8)v1) == 0) {
    result = -0x1.0000000000000p+0f;
  }
  if (*(_DWORD*)(a1 + 232) != 1 ||
      (*(_WORD*)((v3 = *(_QWORD*)(a1 + 152)) + 80) & 2) != 0) {
    if ((*(_BYTE*)(a1 + 624) & 1) == 0) {
      *(_BYTE*)(a1 + 624) = 1;
      *(_DWORD*)(a1 + 628) = -1131902839;
    }
    if ((*(_WORD*)(*(_QWORD*)(a1 + 152) + 80LL) & 1) != 0 &&
        (*(_BYTE*)(a1 + 648) & 1) == 0) {
      *(_BYTE*)(a1 + 648) = 1;
      *(float*)(a1 + 652) = result;
    }
  }
  else {
    if ((*(_BYTE*)(a1 + 648) & 1) == 0) {
      if (*(int*)(v3 + 88) < 1) {
        result = 0x0.0p+0f;
      }
      *(_BYTE*)(a1 + 648) = 1;
      *(float*)(a1 + 652) = result;
    }
    v4 = *(_BYTE*)(a1 + 624);
    *(_BYTE*)(a1 + 625) = 1;
    if ((v4 & 1) == 0) {
      *(_BYTE*)(a1 + 624) = 1;
      *(_DWORD*)(a1 + 628) = -1131902839;
      return -0x1.1111120000000p-6f;
    }
  }
  return result;
}

float32x4_t game_10a2a40(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  char v4;
  _BYTE* v5;
  _BYTE* v6;
  _BYTE* v7;
  __int64 v8;
  char v9;
  _BYTE* v10;
  _BYTE* v11;
  _BYTE* v12;
  float32x4_t result;
  __int128 v14;
  __int128 v15;
  __int64 v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;

  *(_BYTE*)(a1 + 624) = 0;
  *(_DWORD*)(a1 + 628) = 0;
  *(_DWORD*)(a1 + 236) = 953267991;
  *(_DWORD*)(a1 + 800) &= 0xFFFFFF9B;
  v2 = *(_QWORD*)(a1 + 152);
  v3 = a1 + 664;
  v4 = *(_BYTE*)(v2 + 32);
  v5 = *(_BYTE**)(v2 + 48);
  v6 = (_BYTE*)(v2 + 33);
  if ((v4 & 1) != 0) {
    v7 = v5;
  }
  else {
    v7 = v6;
  }
  game_character_10b49e0((void*)(&v18), v3, v7);
  v8 = *(_QWORD*)(a1 + 152);
  v9 = *(_BYTE*)(v8 + 56);
  v10 = *(_BYTE**)(v8 + 72);
  v11 = (_BYTE*)(v8 + 57);
  if ((v9 & 1) != 0) {
    v12 = v10;
  }
  else {
    v12 = v11;
  }
  game_character_10b49e0((void*)(&v19), a1 + 664, v12);
  v17 = vaddq_f32(v19, *(float32x4_t*)(a1 + 752));
  MagicInst_10a3950((float32x4_t*)(a1 + 304), &v18, &v17);
  PSEUDO_LOW_LANE128(result, n128_u32, *(_DWORD*)(a1 + 424));
  *(_DWORD*)(a1 + 420) = 0;
  if (LANES128(result).n128_f32[0] >= 0x0.0p+0f) {
    if (LANES128(result).n128_f32[0] == 0x0.0p+0f) {
      v14 = *(_OWORD*)(a1 + 448);
      *(_QWORD*)(a1 + 464) = v14;
      v15 = *(_OWORD*)(a1 + 464);
      *((_QWORD*)&v15 + 1) = DWORD2(v14);
      *(_OWORD*)(a1 + 464) = v15;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a5680) != 0) {
        v16 = *((_QWORD*)GameData_212c2f8 + 1);
        *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
        *((_QWORD*)&GameData_21a5670 + 1) = v16;
        __cxa_guard_release(&GameData_21a5680);
      }
      result = COERCE_AS(float32x4_t, GameData_21a5670);
      *(_QWORD*)(a1 + 496) = GameData_21a5670;
      *(_QWORD*)(a1 + 504) =
          LANES128_OF(vextq_s8(result, result, 8u)).n128_u64[0];
    }
    else {
      return GameRoutine_10a3bd0((float32x4_t*)(a1 + 304));
    }
  }
  return result;
}

float32x4_t game_10be1a0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  float32x4_t result;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_DWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = a2;
  *(_QWORD*)(a1 + 80) = 1109393408;
  *(_DWORD*)(a1 + 112) = 257;
  *(_OWORD*)(a1 + 48) = GameData_1a83090;
  *(_OWORD*)(a1 + 64) = GameData_1a83610;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                            memory_order_acquire) &
       1) == 0) {
    v7 = a1;
    v3 = __cxa_guard_acquire(&GameData_21a6170);
    a1 = v7;
    if (v3 != 0) {
      v4 = *((_QWORD*)GameData_212c550 + 1);
      *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
      *((_QWORD*)&GameData_21a6160 + 1) = v4;
      __cxa_guard_release(&GameData_21a6170);
      a1 = v7;
    }
  }
  *(_OWORD*)(a1 + 128) = GameData_21a6160;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                            memory_order_acquire) &
       1) == 0) {
    v8 = a1;
    v5 = __cxa_guard_acquire(&GameData_21a6170);
    a1 = v8;
    if (v5 != 0) {
      v6 = *((_QWORD*)GameData_212c550 + 1);
      *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
      *((_QWORD*)&GameData_21a6160 + 1) = v6;
      __cxa_guard_release(&GameData_21a6170);
      a1 = v8;
    }
  }
  *(_BYTE*)(a1 + 160) = 0;
  *(_BYTE*)(a1 + 164) = 0;
  *(_BYTE*)(a1 + 168) = 0;
  *(_BYTE*)(a1 + 172) = 0;
  result = vsubq_f32(COERCE_AS(float32x4_t, 0),
                     COERCE_AS(float32x4_t, GameData_21a6160));
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(float32x4_t*)(a1 + 144) = result;
  return result;
}

__attribute__((swiftcall)) void game_10cab00(PSEUDO_X8 x8_, float32x4_t*** a1,
                                             __int64 a2)
{

#pragma clang fp contract(off)
  float32x4_t** a3 = (float32x4_t**)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  float32x4_t** v4;
  float32x4_t** v5;
  float v6;
  float32x4_t* v7;
  float32x4_t v8;
  int8x16_t v9;
  float v10;
  float32x4_t* v11;
  float32x4_t* v12;
  __int64 v13;
  float32x4_t** v14;
  float v15;

  v3 = *(_QWORD*)(a2 + 800);
  *a3 = nullptr;
  a3[1] = nullptr;
  if (v3 != 0) {
    v4 = *a1;
    v5 = a1[1];
    if (*a1 != v5) {
      v6 = 0x1.fffffe0000000p+127f;
      do {
        v7 = *v4;
        if (LANES128((*v4)[3]).n128_u32[1] != 0 ||
            LANES128(v7[3]).n128_f32[0] > 0x0.0p+0f) {
          v8 = vsubq_f32(
              v7[1],
              *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(a2 + 24) + 16LL) + 560LL));
          v9 = vmulq_f32(v8, v8);
          LANES128(v9).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(float32x2_t,
                                LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
                  .n64_u64[0];
          v10 = LANES64_OF(
                    vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                              COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
                    .n64_f32[0];
          if (v10 < v6 && v10 < (float)((float)(LANES128(v7[2]).n128_f32[1] +
                                                *(float*)(v3 + 40)) *
                                        (float)(LANES128(v7[2]).n128_f32[1] +
                                                *(float*)(v3 + 40)))) {
            v11 = v4[1];
            if (v11 != nullptr) {
              atomic_fetch_add_explicit(
                  (atomic_ullong* volatile)&LANES128(*(v11)).n128_i8[8], 1u,
                  memory_order_relaxed);
            }
            v12 = a3[1];
            *a3 = v7;
            a3[1] = v11;
            if (v12 == nullptr ||
                atomic_fetch_add(
                    (atomic_ullong* volatile)&LANES128(*(v12)).n128_i8[8],
                    0xFFFFFFFFFFFFFFFFLL) != 0) {
              v6 = v10;
            }
            else {
              v13 = a2;
              v14 = a3;
              v15 = v10;
              (*(void (**)(float32x4_t*))(LANES128(*(v12)).n128_u64[0] + 16))(
                  v12);
              std___1___shared_weak_count___release_weak(v12);
              a3 = v14;
              a2 = v13;
              v6 = v15;
            }
          }
        }
        v4 += 2;
      } while (v4 != v5);
    }
  }
}

__int64 game_10d43c0(__int64 result)
{
  __int64 v1;
  unsigned __int8 explicit;
  __int64* v3;
  _DWORD* v4;
  __int64 v5;
  int v6;

  *(_DWORD*)(result + 40) = -1082130432;
  v1 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0];
  *(_DWORD*)(v1 + 156) = 1065353216;
  *(_DWORD*)(v1 + 316) = 1065353216;
  *(_DWORD*)(result + 44) = 1065353216;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v3 = GameData_212c838;
  if ((explicit & 1) == 0) {
    result = __cxa_guard_acquire(GameData_212c840);
    v3 = GameData_212c838;
    if ((_DWORD)result != 0) {
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c838) = 0;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8) = 0;
      *v3 = 0;
      v3[1] = 0;
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v3) = 0;
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v3) = 0;
      *((_BYTE*)((char*)0x40LL) + (_QWORD)v3) = 0;
      *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v3) = 0;
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v3) =
          (_UNKNOWN*)1065353216;
      GameRoutine_14a0820(GameData_212c838);
      GameRoutine_2b0(GameData_212c848[0]);
      result = __cxa_guard_release(GameData_212c840);
      v3 = GameData_212c838;
    }
  }
  *(_DWORD*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v3) = 1065353216;
  v4 = (_DWORD*)*GameData_212fff0[0];
  if (*GameData_212fff0[0] != 0) {
    v4[14] = -1082130432;
    v4[30] = -1082130432;
    v4[46] = -1082130432;
    v4[62] = -1082130432;
    v4[78] = -1082130432;
    v4[94] = -1082130432;
    v4[110] = -1082130432;
    v4[126] = -1082130432;
    v4[142] = -1082130432;
    v4[158] = -1082130432;
    v4[174] = -1082130432;
    v4[190] = -1082130432;
    v4[206] = -1082130432;
    v4[222] = -1082130432;
    v4[238] = -1082130432;
  }
  v5 = GameData_22736d0;
  if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 2) {
    result = LayoutAccessor_155ea30(GameData_22736d0 + 168);
    if ((result & 1) != 0 || *(_DWORD*)(v5 + 624) != 1) {
      result = LayoutAccessor_155cda0(v5 + 272, "Out", 0);
      if (*(_DWORD*)(v5 + 624) == 1) {
        v6 = 2;
      }
      else {
        LayoutAccessor_155d940(v5 + 272);
        result = LayoutAccessor_155e830(v5 + 168, 0);
        v6 = 1;
      }
      *(_DWORD*)(v5 + 624) = v6;
    }
  }
  return result;
}

void game_10d9020(_QWORD* a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int16* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int16* v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int16* v35;
  unsigned __int64 v36;
  bool v37;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  __int128 v42;
  int v43;
  int i;
  int v45;
  __int64 v47;
  __int64 v48;
  int v50;

  *a1 = a2;
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 112) + 24LL) + 8LL);
  if (v3 == 0) {
    return;
  }
  v4 = v3 + 12;
  v5 = v3 + 8;
  v6 = *a3;
  v48 = *(_QWORD*)(*(_QWORD*)(a2 + 112) + 24LL);
  v8 = *(unsigned __int16*)(v3 + 12);
  v9 = *(_DWORD*)(v3 + 8);
  v10 = v3 + 8 + 16 * v8;
  v11 = *(_DWORD*)v10;
  if (*a3 != 0) {
    v12 = strlen(v6);
  }
  else {
    v12 = 0;
  }
  v13 = v3 + 8 + 16 * v8;
  if (v9 < v11) {
    v14 = v11;
    v15 = v8;
    do {
      v18 = (__int64)v14 >> 3;
      if (v12 > v18) {
        v16 = (*(unsigned __int8*)(v6 + v12 + ~v18) >> (v14 & 7)) & 1;
      }
      else {
        v16 = 0;
      }
      v15 = *(unsigned __int16*)(v4 + 16 * v15 + 2 * v16);
      v17 = v14 < *(_DWORD*)(v5 + 16 * v15);
      v14 = *(_DWORD*)(v5 + 16 * v15);
    } while (v17);
    v13 = v5 + 16 * v15;
  }
  v19 = *(unsigned __int16**)(v13 + 8);
  v20 = v3 + 24;
  v47 = v20;
  if (v12 == *v19 && (unsigned int)memcmp(v19 + 1, v6, v12) == 0) {
    v21 = (unsigned __int64)(v13 - v20) >> 4;
    v22 = a3[1];
    if (v22 != 0) {
      goto LABEL_15;
    }
  }
  else {
    LODWORD(v21) = -1;
    v22 = a3[1];
    if (v22 != 0) {
    LABEL_15:
      v23 = strlen(v22);
      goto LABEL_18;
    }
  }
  v23 = 0;
LABEL_18:
  v24 = v10;
  if (v9 < v11) {
    v25 = v11;
    v26 = v8;
    do {
      v28 = (__int64)v25 >> 3;
      if (v23 > v28) {
        v27 = (*(unsigned __int8*)(v22 + v23 + ~v28) >> (v25 & 7)) & 1;
      }
      else {
        v27 = 0;
      }
      v26 = *(unsigned __int16*)(v4 + 16 * v26 + 2 * v27);
      v17 = v25 < *(_DWORD*)(v5 + 16 * v26);
      v25 = *(_DWORD*)(v5 + 16 * v26);
    } while (v17);
    v24 = v5 + 16 * v26;
  }
  v29 = *(unsigned __int16**)(v24 + 8);
  if (v23 == *v29 && (unsigned int)memcmp(v29 + 1, v22, v23) == 0) {
    v30 = (unsigned __int64)(v24 - v47) >> 4;
    v31 = a3[2];
    if (v31 != 0) {
    LABEL_28:
      v32 = strlen(v31);
      if (v9 >= v11) {
        goto LABEL_38;
      }
      goto LABEL_36;
    }
  }
  else {
    LODWORD(v30) = -1;
    v31 = a3[2];
    if (v31 != 0) {
      goto LABEL_28;
    }
  }
  v32 = 0;
  if (v9 < v11) {
    do {
    LABEL_36:
      v34 = (__int64)v11 >> 3;
      if (v32 > v34) {
        v33 = (*(unsigned __int8*)(v31 + v32 + ~v34) >> (v11 & 7)) & 1;
      }
      else {
        v33 = 0;
      }
      v8 = *(unsigned __int16*)(v4 + 16 * v8 + 2 * v33);
      v17 = v11 < *(_DWORD*)(v5 + 16 * v8);
      v11 = *(_DWORD*)(v5 + 16 * v8);
    } while (v17);
    v10 = v5 + 16 * v8;
  }
LABEL_38:
  v35 = *(unsigned __int16**)(v10 + 8);
  if (v32 == *v35 && (unsigned int)memcmp(v35 + 1, v31, v32) == 0) {
    v36 = (unsigned __int64)(v10 - v47) >> 4;
    v37 = (_DWORD)v36 == -1 || (_DWORD)v30 == -1;
    if (!v37 && (_DWORD)v21 != -1) {
      GameRoutine_10d93e0(a1, v21);
      GameRoutine_10d93e0(a1, v30);
      GameRoutine_10d93e0(a1, v36);
      v39 = a1[1];
      if (a1[2] - v39 == 96) {
        v40 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*a1 + 112LL) + 24LL) + 16LL) +
              96LL * *(int*)(v39 + 32);
        v41 = *(_DWORD*)(v40 + 76);
        a1[8] = *(_QWORD*)(v40 + 68);
        v42 = *((_OWORD*)a1 + 4);
        *((_QWORD*)&v42 + 1) = v41;
        *((_OWORD*)a1 + 4) = v42;
      }
      v43 = *(unsigned __int16*)(v48 + 56);
      for (i = v21 + 1; i < v43; ++i) {
        if (i != 0 && i != (_DWORD)v30 && i != (_DWORD)v36) {
          v45 = i;
          do {
            v45 = *(unsigned __int16*)(*(_QWORD*)(v48 + 16) + 96LL * v45 + 42);
          } while (v45 != 0 && (_DWORD)v21 != v45);
          if (v45 != 0) {
            v50 = i;
            GameRoutine_7d6200(a1 + 4, &v50);
            v43 = *(unsigned __int16*)(v48 + 56);
          }
        }
      }
    }
  }
}

void game_10e7f80(int8x16_t* a1, int a2, __int64 a3, int a4)
{

#pragma clang fp contract(off)
  float v6;
  int8x16_t** v7;
  int8x16_t** v8;
  char v9;
  float v10;
  int v11;
  int8x16_t* v12;
  float32x4_t* v13;
  float32x4_t v14;
  int16x4_t v15;
  float v16;
  float v17;
  bool v18;
  char v19;
  int8x16_t* v20;
  int8x16_t v21;
  unsigned __int32 v22;
  int8x16_t* v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  float v28;
  float v29;
  float32x4_t v30;
  float v31;

  LANES128(*(a1)).n128_u32[2] = a2;
  v6 = (float)a4 / 0x1.e000000000000p+5f;
  LANES128(*(a1)).n128_f32[3] = v6;
  LANES128(a1[2]).n128_f32[0] = v6;
  LANES128(*(a1)).n128_f32[0] =
      (float)*(int*)(*(_QWORD*)GameData_212d270 + 16LL) * 0x1.1111120000000p-6f;
  v8 = *(int8x16_t***)(a3 + 80);
  v7 = *(int8x16_t***)(a3 + 88);
  if (v8 != v7) {
    v9 = 0;
    v10 = 0x0.0p+0f;
    do {
      v11 = (*(__int64 (**)(int8x16_t*))(LANES128(*((*v8))).n128_u64[0] + 32))(
          *v8);
      if (v11 == (unsigned int)wld_Crc32_alt1(0, "Signal_B_Cancel", 0xFu)) {
      LABEL_4:
        LANES128(a1[2]).n128_f32[0] =
            LANES128(*((*v8))).n128_f32[2] / 0x1.e000000000000p+5f;
      }
      else if (v11 ==
               (unsigned int)wld_Crc32_alt1(0, "Signal_F_Cancel", 0xFu)) {
      LABEL_8:
        LANES128(a1[1]).n128_f32[2] =
            LANES128(*((*v8))).n128_f32[2] / 0x1.e000000000000p+5f;
      }
      else if (v11 ==
               (unsigned int)wld_Crc32_alt1(0, "Signal_FR_Cancel", 0x10u)) {
      LABEL_10:
        LANES128(a1[1]).n128_f32[3] =
            LANES128(*((*v8))).n128_f32[2] / 0x1.e000000000000p+5f;
      }
      else if (v11 == (unsigned int)wld_Crc32_alt1(0, "Signal_F_Cancel_Dungeon",
                                                   0x17u)) {
      LABEL_12:
        LANES128(a1[5]).n128_f32[3] =
            LANES128(*((*v8))).n128_f32[2] / 0x1.e000000000000p+5f;
      }
      else if (v11 ==
               (unsigned int)wld_Crc32_alt1(0, "Signal_AttackRange", 0x12u)) {
      LABEL_14:
        v12 = *v8;
        LANES128(a1[1]).n128_u32[1] = LANES128((*v8)[2]).n128_u32[0];
        LANES128(a1[1]).n128_u32[0] = LANES128(v12[2]).n128_u32[1];
      }
      else if (v11 == (unsigned int)wld_Crc32_alt1(0, "Signal_Hit", 0xAu)) {
      LABEL_16:
        v13 = *v8;
        v31 = LANES128(*((*v8))).n128_f32[2] / 0x1.e000000000000p+5f;
        CharacterTrailVertex_d35160(&LANES128(a1[2]).n128_i64[1], &v31);
        v14 = v13[3];
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0) {
          v30 = v14;
          v24 = __cxa_guard_acquire(&GameData_21a6130);
          v14 = v30;
          if (v24 != 0) {
            v25 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v25;
            __cxa_guard_release(&GameData_21a6130);
            v14 = v30;
          }
        }
        LANES64(v15).n64_u64[0] =
            LANES64_OF(vmovn_s32(vceqq_f32(
                           v14, COERCE_AS(float32x4_t, GameData_21a6120))))
                .n64_u64[0];
        if ((LANES64(v15).n64_u8[0] & 1) != 0 &&
                (LANES64(v15).n64_u8[2] & 1) != 0 &&
                (LANES64(v15).n64_u8[4] & 1) != 0 ||
            ((v16 = fabsf(LANES128(v14).n128_f32[0]),
              v17 = fabsf(LANES128(v14).n128_f32[1]) * 0x1.3333340000000p-1f,
              v16 >= fabsf(LANES128(v14).n128_f32[2]))
                 ? (v18 = v16 < v17)
                 : (v18 = true),
             v18)) {
          LANES128(a1[5]).n128_u8[0] = 1;
        }
        else {
          if (LANES128(v14).n128_f32[0] <= 0x0.0p+0f) {
            v19 = 3;
          }
          else {
            v19 = 2;
          }
          LANES128(a1[5]).n128_u8[0] = v19;
        }
      }
      else if (v11 == (unsigned int)wld_Crc32_alt1(0, "Signal_Shoot", 0xCu)) {
      LABEL_27:
        LANES128(a1[2]).n128_f32[1] =
            LANES128(*((*v8))).n128_f32[2] / 0x1.e000000000000p+5f;
      }
      else if (v11 == (unsigned int)wld_Crc32_alt1(0, "Signal_Jump", 0xBu)) {
      LABEL_29:
        v10 = LANES128(*((*v8))).n128_f32[2] / 0x1.e000000000000p+5f;
      }
      else if (v11 == (unsigned int)wld_Crc32_alt1(0, "Signal_Landing", 0xEu)) {
      LABEL_35:
        LANES128(*(a1)).n128_f32[1] =
            (float)(LANES128(*((*v8))).n128_f32[2] / 0x1.e000000000000p+5f) -
            v10;
      }
      else {
        if (v11 ==
            (unsigned int)wld_Crc32_alt1(0, "Signal_BlendFrames", 0x12u)) {
          while (1) {
            v20 = *v8;
            v8 += 2;
            LANES128(*(a1)).n128_f32[0] =
                (float)LANES128(v20[2]).n128_i32[0] / 0x1.e000000000000p+5f;
            if (v8 == v7) {
              goto LABEL_80;
            }
            v11 = (*(__int64 (**)(int8x16_t*))(LANES128(*((*v8))).n128_u64[0] +
                                               32))(*v8);
            if (v11 ==
                (unsigned int)wld_Crc32_alt1(0, "Signal_B_Cancel", 0xFu)) {
              v9 = 1;
              goto LABEL_4;
            }
            if (v11 ==
                (unsigned int)wld_Crc32_alt1(0, "Signal_F_Cancel", 0xFu)) {
              v9 = 1;
              goto LABEL_8;
            }
            if (v11 ==
                (unsigned int)wld_Crc32_alt1(0, "Signal_FR_Cancel", 0x10u)) {
              v9 = 1;
              goto LABEL_10;
            }
            if (v11 == (unsigned int)wld_Crc32_alt1(
                           0, "Signal_F_Cancel_Dungeon", 0x17u)) {
              v9 = 1;
              goto LABEL_12;
            }
            if (v11 ==
                (unsigned int)wld_Crc32_alt1(0, "Signal_AttackRange", 0x12u)) {
              v9 = 1;
              goto LABEL_14;
            }
            if (v11 == (unsigned int)wld_Crc32_alt1(0, "Signal_Hit", 0xAu)) {
              v9 = 1;
              goto LABEL_16;
            }
            if (v11 == (unsigned int)wld_Crc32_alt1(0, "Signal_Shoot", 0xCu)) {
              v9 = 1;
              goto LABEL_27;
            }
            if (v11 == (unsigned int)wld_Crc32_alt1(0, "Signal_Jump", 0xBu)) {
              v9 = 1;
              goto LABEL_29;
            }
            if (v11 ==
                (unsigned int)wld_Crc32_alt1(0, "Signal_Landing", 0xEu)) {
              v9 = 1;
              goto LABEL_35;
            }
            if (v11 !=
                (unsigned int)wld_Crc32_alt1(0, "Signal_BlendFrames", 0x12u)) {
              v9 = 1;
              break;
            }
          }
        }
        if (v11 == (unsigned int)wld_Crc32_alt1(0, "Signal_RootMoved", 0x10u)) {
          v21 = (*v8)[2];
          v22 = LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u32[0];
          LANES128(v21).n128_u32[1] = 0;
          LANES128(v21).n128_u64[1] = v22;
          a1[4] = v21;
        }
        else if (v11 ==
                 (unsigned int)wld_Crc32_alt1(0, "Signal_Camera", 0xDu)) {
          LANES128(a1[6]).n128_u8[0] |= 1u;
        }
        else if (v11 ==
                 (unsigned int)wld_Crc32_alt1(0, "Signal_RunSpeed", 0xFu)) {
          v23 = *v8;
          LANES128(a1[5]).n128_u32[1] = LANES128((*v8)[2]).n128_u32[0];
          LANES128(a1[5]).n128_u32[2] = LANES128(v23[2]).n128_u32[1];
        }
      }
      v8 += 2;
    } while (v8 != v7);
    if ((v9 & 1) != 0) {
      goto LABEL_80;
    }
  }
  v26 = 0;
  if (a2 <= -371817050) {
    if ((unsigned int)(a2 + 1193575789) > 0x10) {
    LABEL_70:
      v27 = -1300398262;
      goto LABEL_76;
    }
    if (((1 << (a2 + 109)) & 0x10403) == 0) {
      if (a2 != -1193575777) {
        goto LABEL_70;
      }
    LABEL_78:
      v26 = 1036831949;
    }
  LABEL_79:
    LANES128(*(a1)).n128_u32[0] = v26;
    goto LABEL_80;
  }
  if (a2 > 1400556094) {
    if (a2 == 1400556095) {
      goto LABEL_79;
    }
    v27 = 1715476756;
  }
  else {
    if (a2 == -371817049) {
      goto LABEL_78;
    }
    v27 = -77626398;
  }
LABEL_76:
  if (a2 == v27) {
    goto LABEL_79;
  }
LABEL_80:
  v28 = LANES128(a1[1]).n128_f32[2];
  if (LANES128(a1[1]).n128_f32[3] < v28) {
    LANES128(a1[1]).n128_f32[3] = v28;
  }
  v29 = LANES128(*(a1)).n128_f32[3];
  if (v29 >= LANES128(a1[2]).n128_f32[0]) {
    v29 = LANES128(a1[2]).n128_f32[0];
  }
  LANES128(a1[2]).n128_f32[0] = v29;
}

void game_10e88f0(_QWORD* a1, unsigned int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    __int64 v27[2];
    char* v28;
  } v27_;
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;

  v2 = a1[2] + 72LL * a2;
  v3 = *(_QWORD*)(v2 + 232);
  if (v3 != 0 && *(_BYTE*)(v3 + 165) == 1) {
    v4 = *a1;
    if (GameRoutine_ad7390(*(_QWORD**)(v2 + 232))) {
      v8 = *(_QWORD*)(v2 + 232);
      v7 = *(_QWORD*)(v2 + 240);
      v9 = a2;
      v10 = a1;
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
          v9 = a2;
          v10 = a1;
        }
      }
      if (v8 != 0) {
        v11 = v9;
        v12 = v10[2] + 72LL * v9;
        v13 = *(_QWORD*)(v12 + 232);
        if (v13 != 0 && *(_BYTE*)(v13 + 165) == 1 &&
            (v14 = *(_QWORD**)v10[1], v15 = *(_DWORD*)v10[3],
             GameRoutine_ad7390((_QWORD*)v13))) {
          v16 = *(_QWORD*)(v12 + 232);
          if (v16 != 0 && *(_BYTE*)(v16 + 165) == 1 &&
              GameRoutine_ad7390((_QWORD*)v16)) {
            v17 = *(_QWORD*)(v12 + 232);
            v29_.v29 = v17;
            v18 = *(_QWORD*)(v12 + 240);
            v29_.v30 = v18;
            if (v18 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                        memory_order_relaxed);
            }
          }
          else {
            v18 = 0;
            v17 = 0;
            v29_.v29 = 0;
            v29_.v30 = 0;
          }
          if (*(_BYTE*)(v17 + 165) == 1 && GameRoutine_ad7390((_QWORD*)v17) &&
              ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v17 + 8) + 592LL)) != 0 &&
              (GameRoutine_ad7390((_QWORD*)v17),
               *(_WORD*)(ResFile_5e5f00(
                             *(_QWORD*)(*(_QWORD*)(v17 + 8) + 592LL)) +
                         220) != 0)) {
            v20 = Components_a870e0(
                *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                                   32LL) -
                                        8LL) +
                             48LL),
                0);
            v19 = v20;
            if (v14 != nullptr) {
              GameRoutine_a8c380(v20, v14);
            }
            game_character_1075be0((void*)(v27_.v27),
                                   (unsigned int*)(v12 + 176));
            v21 = v27_.v27[0];
            if ((v27_.v27[0] & 1) != 0) {
              v22 = v27_.v27[1];
            }
            else {
              v22 = (unsigned __int64)LOBYTE(v27_.v27[0]) >> 1;
            }
            if (v22 != 0) {
              if ((v27_.v27[0] & 1) != 0) {
                v23 = v27_.v28;
              }
              else {
                v23 = (char*)v27_.v27 + 1;
              }
              if (v22 >= 0xFF) {
                v24 = 255;
              }
              else {
                v24 = v22;
              }
              memmove(v19 + 16, v23, v24);
            }
            *(_QWORD*)(v19 + 272) = v22;
            *(_BYTE*)(v19 + 16 + v22) = 0;
            if ((v21 & 1) != 0 && v27_.v28 != nullptr) {
              v25 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v25 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
            }
            if (*(_DWORD*)(v19 + 280) != v15) {
              v26 = *(_QWORD*)(v19 + 8);
              nn_os_LockMutex(&GameData_2167560);
              Components_a878a0(v26, v19);
              Components_a87260(v26, v19, v15);
              *(_BYTE*)(v26 + 80) = 1;
              nn_os_UnlockMutex_alt1(&GameData_2167560);
              *(_DWORD*)(v19 + 280) = v15;
            }
            LODWORD(v27_.v27[0]) = 0;
            *(_DWORD*)(v19 + 284) = 8;
            CharacterTrailModule_d3d1c0(v19, (__int64)&v29_.v29,
                                        (int*)v27_.v27);
            v18 = v29_.v30;
          }
          else {
            v19 = 0;
          }
          if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
            std___1___shared_weak_count___release_weak(v18);
          }
        }
        else {
          v19 = 0;
        }
        *(_QWORD*)(v4 + 8 * v11 + 16) = v19;
      }
    }
  }
}

void game_10e91c0(_QWORD* a1, float32x4_t* a2, float32x4_t* a3, long double a4)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  int v9;
  float v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  float32x4_t* v14;
  float32x4_t* v15;
  unsigned __int64 v16;
  float v17;
  __int64 v18;
  float v19;
  __int64 v20;
  float32x4_t v21;
  int8x16_t v22;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t* v26;
  unsigned __int64* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;
  __int64 v34;

  if (a1[5] != 0) {
    if (*GameData_212d448[0] != 0) {
      v7 = *GameData_212d448[0];
      v8 = nn_os_ConvertToTimeSpan(
               *(_QWORD*)(game_script_hub_g_frame_counter + 344), a4) /
               1000 -
           *(_QWORD*)(v7 + 136);
      v9 = 1232348160;
    }
    else {
      v8 = nn_os_ConvertToTimeSpan(
               *(_QWORD*)(game_script_hub_g_frame_counter + 344), a4) /
           1000000;
      v9 = 1148846080;
    }
    v10 = *(float*)&v9;
    v11 = a1[4];
    v12 = v11 / 0x55;
    v13 = a1[1];
    if (a1[2] != v13) {
      v14 = *(float32x4_t**)(v13 + 8 * v12);
      v15 = &v14[3 * (v11 % 0x55)];
      v16 = *(_QWORD*)(v13 + 8 * ((a1[5] + v11) / 0x55)) +
            48 * ((a1[5] + v11) % 0x55);
      if (v15 != (float32x4_t*)v16) {
        v17 = (float)v8;
        v18 = v13 + 8 * v12;
        v19 = v17 / v10;
        v20 = *(_QWORD*)GameData_212d270;
        while (LANES128(v15[1]).n128_f32[0] >= v19) {
          v21 = vsubq_f32(*v15, *a2);
          v22 = vmulq_f32(v21, v21);
          LANES128(v22).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v22).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
                  .n64_u64[0];
          if (LANES128(v22).n128_f32[0] >
              (float)(*(float*)(v20 + 484) * *(float*)(v20 + 484))) {
            break;
          }
          LANES128(v22).n128_u64[1] = LANES128(v22).n128_u64[0];
          v23 = vrsqrteq_f32(v22);
          v24 = vmulq_f32(v23, vrsqrtsq_f32(v23, vmulq_f32(v22, v23)));
          v25 = vmulq_f32(
              *a3,
              vbicq_s8(
                  vmulq_f32(v21, vmulq_f32(v24, vrsqrtsq_f32(
                                                    v24, vmulq_f32(v22, v24)))),
                  vceqzq_f32(v22)));
          LANES128(v25).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                  .n64_u64[0];
          if (LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                  .n64_f32[0] <= *(float*)(v20 + 488)) {
            break;
          }
          v15 += 3;
          if ((char*)v15 - (char*)v14 == 4080) {
            v26 = *(float32x4_t**)(v18 + 8);
            v18 += 8;
            v14 = v26;
            v15 = v26;
          }
          if (v15 == (float32x4_t*)v16) {
            goto LABEL_18;
          }
        }
        nn_os_LockMutex(&GameData_216dc28);
        v27 = &LANES128(v15[1]).n128_u64[1];
        if (LANES128(v15[1]).n128_f32[0] >= v19) {
          GameRoutine_14a1390(v27, 1);
        }
        else {
          GameRoutine_14a1520(v27, 1);
        }
        nn_os_UnlockMutex_alt1(&GameData_216dc28);
        LANES128(v15[1]).n128_u32[0] = -1082130432;
        v11 = a1[4];
        v13 = a1[1];
        v12 = v11 / 0x55;
      }
    }
  LABEL_18:
    v28 = *(_QWORD*)(v13 + 8 * v12);
    v29 = v11 % 0x55;
    if (*(float*)(v28 + 48 * v29 + 16) < 0x0.0p+0f) {
      v30 = *(_QWORD*)(v28 + 48 * v29 + 32);
      if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
        std___1___shared_weak_count___release_weak(v30);
      }
      v31 = a1[5] - 1LL;
      v32 = a1[4] + 1LL;
      a1[4] = v32;
      a1[5] = v31;
      if (v32 >= 0xAA) {
        v33 = (_QWORD*)a1[1];
        if (*v33 != 0) {
          v34 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v34);
          v33 = (_QWORD*)a1[1];
          v32 = a1[4];
        }
        a1[1] = v33 + 1;
        a1[4] = v32 - 85;
      }
    }
  }
}

__attribute__((swiftcall)) void game_10ea2a0(PSEUDO_X8 x8_, __int64 a1, int a2,
                                             char* a3, float a5)
{

#pragma clang fp contract(off)
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  int v6;
  char* v10;
  char* v11;
  int8x16_t* v12;
  long double v13;
  __int64 v14;
  int8x16_t* v15;
  long double v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int8x16_t v24;
  struct {
    _DWORD* v25;
    __int64 v26;
  } v25_;

  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  if (a1 != 0) {
    v6 = a2 - 2;
    if ((unsigned int)(a2 - 2) <= 3) {
      v10 = GameData_200c9d0[v6];
      v11 = GameData_200ca10[v6];
      v12 = (int8x16_t*)CharacterBuilder_1084a50_alt1(a1, GameData_200c9f0[v6]);
      if (v12 != nullptr) {
        v14 = *(_QWORD*)(a1 + 80);
        *(float*)&v13 = a5;
        v15 = v12;
        GameRoutine_108df10((void*)(&v25_.v25), v14, v10, v12, v13);
        if (*(_QWORD*)v25_.v25 != 0 &&
            *(_DWORD*)(*(_QWORD*)v25_.v25 + 16LL) == v25_.v25[2]) {
          a4[1] = GameRoutine_e1cd00(a4, &v25_.v25);
        }
        if (a3 != nullptr) {
          *(float*)&v16 = a5;
          GameRoutine_108df10((void*)(&v24), v14, a3, v15, v16);
          if (*(_QWORD*)LANES128(v24).n128_u64[0] != 0 &&
              *(_DWORD*)(*(_QWORD*)LANES128(v24).n128_u64[0] + 16LL) ==
                  *(_DWORD*)(LANES128(v24).n128_u64[0] + 8)) {
            v17 = (_QWORD*)a4[1];
            if ((unsigned __int64)v17 >= a4[2]) {
              v19 = GameRoutine_e1cd00(a4, &v24);
            }
            else {
              *v17 = LANES128(v24).n128_u64[0];
              v18 = LANES128(v24).n128_i64[1];
              v17[1] = LANES128(v24).n128_u64[1];
              if (v18 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8),
                                          1u, memory_order_relaxed);
              }
              v19 = v17 + 2;
            }
            a4[1] = v19;
          }
          v20 = LANES128(v24).n128_i64[1];
          if (LANES128(v24).n128_u64[1] != 0 &&
              atomic_fetch_add(
                  (atomic_ullong* volatile)(LANES128(v24).n128_u64[1] + 8),
                  0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
            std___1___shared_weak_count___release_weak(v20);
          }
        }
        v21 = *(_QWORD*)(a1 + 136);
        v24 = v15[3];
        GameRoutine_1096110((void*)((__int64)&v23), v21, v11, nullptr,
                            (__int64)&v24, 0x1.0000000000000p+0f);
        v22 = v25_.v26;
        if (v25_.v26 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
          std___1___shared_weak_count___release_weak(v22);
        }
      }
    }
  }
}

_WORD* game_10ea490(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  char v6;
  _QWORD* v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64* v11;
  int v12;
  bool v15;
  int v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  _WORD* result;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  int v25;

  v2 = *(_QWORD*)(a2 + 24);
  if (v2 != 0) {
    *(_QWORD*)(a1 + 40) = v2;
    v5 = *(_QWORD*)(v2 + 440);
    if (v5 != 0) {
      v6 = *(_BYTE*)(v5 + 16);
    }
    else {
      v6 = 9;
    }
    *(_BYTE*)(a1 + 56) = v6;
    *(_QWORD*)(a1 + 24) = *(_QWORD*)(v2 + 232);
    v7 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                      8, 16, 0);
    v8 = (__int64*)(a2 + 44);
    v9 = v7;
    if (*(_WORD*)(a2 + 44) == 0) {
      v10 = *(unsigned int*)(a2 + 40);
      if ((v10 & 0x80000000) != 0) {
        v8 = &game_g_empty_item;
      }
      else {
        v8 = (__int64*)(*(_QWORD*)(a2 + 24) + 8 * v10 + 828);
      }
    }
    v11 = *(unsigned __int64**)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                8LL * *(unsigned __int16*)v8);
    *v7 = 0;
    UnitItem_6e8800((__int64)v7, v11);
    *(_QWORD*)(a1 + 48) = v9;
    v25 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x134LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    *(_BYTE*)(a1 + 34) =
        game_HasSkill((_QWORD*)(v2 + 1744), (unsigned int*)&v25) & 1;
    v12 = *(_DWORD*)(v2 + 16);
    v15 = v12 == -860551158 || v12 == -589947500 || v12 == 105782307;
    *(_BYTE*)(a1 + 33) = v15;
  }
  *(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 100);
  v16 = *(_DWORD*)(a2 + 96);
  *(_DWORD*)(a1 + 80) = v16;
  *(_DWORD*)(a1 + 64) = v16;
  *(_DWORD*)(a1 + 68) = BattleSide_7a2950((_QWORD*)a2);
  *(_DWORD*)(a1 + 72) = BattleInfo_7a3000();
  *(_DWORD*)(a1 + 76) = BattleInfo_7a3110();
  *(_DWORD*)(a1 + 84) = *(_DWORD*)(a2 + 80);
  *(_DWORD*)(a1 + 88) = *(_DWORD*)(a2 + 84);
  v17 = *(_QWORD*)(a2 + 24);
  if (v17 != 0) {
    v18 = (__int64*)(a2 + 44);
    if (*(_WORD*)(a2 + 44) == 0) {
      v19 = *(unsigned int*)(a2 + 40);
      if ((int)v19 >= 0) {
        v18 = (__int64*)(v17 + 8 * v19 + 828);
      }
      else {
        v18 = &game_g_empty_item;
      }
    }
    result = GameRoutine_6d7d00(v17, v18);
  }
  else {
    result = &GameData_1b47d74;
  }
  if ((*result & 0xFFF) != 0) {
    v21 = *(_QWORD*)(a2 + 24);
    if (v21 != 0) {
      v22 = (__int64*)(a2 + 44);
      if (*(_WORD*)(a2 + 44) == 0) {
        v23 = *(unsigned int*)(a2 + 40);
        if ((int)v23 >= 0) {
          v22 = (__int64*)(v21 + 8 * v23 + 828);
        }
        else {
          v22 = &game_g_empty_item;
        }
      }
      result = GameRoutine_6d7d00(v21, v22);
    }
    else {
      result = &GameData_1b47d74;
    }
    if ((*(_DWORD*)result & 0xFFF) != 0) {
      v24 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                  8LL * (*(_DWORD*)result & 0xFFF)) +
                       792LL);
    }
    else {
      v24 = 0;
    }
    *(_QWORD*)a1 = v24;
  }
  return result;
}

void game_10ea6e0(__int64 a1, __int64 a2)
{
  int32x2_t* v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  bool v13;
  int v14;
  char v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* i;
  __int64* v28;
  __int64* j;
  __int64 v30;
  int v31;
  __int64* v32;
  __int64* k;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64* v37;
  __int64* m;
  __int64 v39;
  __int64 v40;
  _BYTE* v41;
  unsigned __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  int v50;
  int v51;
  _DWORD* v52;
  bool v53;
  int v54;
  _DWORD* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  int v64;
  _DWORD* v65;
  int v66;
  int v67;
  int v68;
  bool v69;
  int v70;
  _DWORD* v71;
  int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  unsigned int v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned int v86;
  int v87;
  int v88;
  __int64 v89;
  int v90;
  unsigned int v91;
  __int64 v92;
  __int64 v93;
  unsigned __int8* v94;
  int v95;
  unsigned __int8* v96;
  int v97;
  int v98;
  int v99;
  __int64 v101;
  unsigned __int64 v102;
  __int64** v103;
  __int64* v104;
  unsigned __int64 v105;
  __int64 v106;
  int v107;
  int v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  unsigned int v112;
  __int64 v113;
  __int64* v114;
  int v116;
  int* v117;
  int* v118;
  bool v119;
  __int64* v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  int v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  int v130;
  char v131;
  int32x2_t* v132;
  char v133;
  _BYTE v134[4];
  struct {
    int v135;
    char gap36_[4];
    __int64 v136;
    char v137;
    char gap49_[7];
    char v138;
  } v135_;
  struct {
    __int64 v139;
    __int64 v140;
    __int64 v141;
    char v142;
    char gap89_[7];
    __int128 v143;
    __int64 v144;
    __int64 v145;
    __int64 v146;
    __int64 v147;
    __int64 v148;
    __int64 v149;
    __int64 v150;
    _BYTE v151[56];
  } v139_;

  *(_BYTE*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_BYTE*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_BYTE*)(a1 + 188) = 0;
  *(_BYTE*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 128) = 0xC3FA0000C3FA0000LL;
  *(_QWORD*)(a1 + 136) = 0x43FA000043FA0000LL;
  *(_QWORD*)(a1 + 144) = 0xC3FA0000C3FA0000LL;
  *(_QWORD*)(a1 + 120) = 0x43FA000043FA0000LL;
  v4 = (int32x2_t*)(a1 + 120);
  *(_WORD*)(a1 + 196) = 0;
  *(_BYTE*)(a1 + 198) = 0;
  *(_DWORD*)(a1 + 200) = 0;
  *(_WORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_BYTE*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 247) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_BYTE*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 276) = 0x6300000063LL;
  *(_QWORD*)(a1 + 372) = 0x6300000063LL;
  *(_BYTE*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_BYTE*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_DWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 284) = 0;
  *(_QWORD*)(a1 + 468) = 0x6300000063LL;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 292) = 0x6300000000LL;
  *(_QWORD*)(a1 + 564) = 0x6300000063LL;
  *(_QWORD*)(a1 + 640) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  *(_QWORD*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 300) = -1;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  *(_DWORD*)(a1 + 343) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 380) = 0;
  *(_QWORD*)(a1 + 388) = 0x6300000000LL;
  *(_QWORD*)(a1 + 396) = -1;
  *(_DWORD*)(a1 + 439) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 476) = 0;
  *(_QWORD*)(a1 + 484) = 0x6300000000LL;
  *(_QWORD*)(a1 + 492) = -1;
  *(_DWORD*)(a1 + 535) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 572) = 0;
  *(_QWORD*)(a1 + 580) = 0x6300000000LL;
  *(_QWORD*)(a1 + 588) = -1;
  if ((*(_BYTE*)(a2 + 11278) & 0x80) != 0) {
    *(_DWORD*)(a1 + 112) = 0x8000;
  }
  v5 = *(_QWORD*)(a2 + 40);
  if (v5 != 0 && (v6 = *(_QWORD*)(v5 + 440)) != 0) {
    v7 = *(unsigned __int8*)(v6 + 16);
    v8 = *(_QWORD*)(a2 + 800);
    if (v8 == 0) {
      goto LABEL_12;
    }
  }
  else {
    v7 = 9;
    v8 = *(_QWORD*)(a2 + 800);
    if (v8 == 0) {
      goto LABEL_12;
    }
  }
  v9 = *(_QWORD*)(v8 + 440);
  if (v9 != 0) {
    v10 = *(unsigned __int8*)(v9 + 16);
    if (v7 <= 3) {
      goto LABEL_13;
    }
    goto LABEL_10;
  }
LABEL_12:
  v10 = 9;
  if (v7 <= 3) {
  LABEL_13:
    v11 = GameData_1a835a0[v7];
    if (v10 > 3) {
      goto LABEL_14;
    }
  LABEL_11:
    v12 = GameData_1a835a0[v10];
    goto LABEL_15;
  }
LABEL_10:
  v11 = 2;
  if (v10 <= 3) {
    goto LABEL_11;
  }
LABEL_14:
  v12 = 2;
LABEL_15:
  v13 = v11 > v12;
  v14 = *(_DWORD*)(a1 + 112);
  v15 = v13;
  v134[0] = v15;
  if (v13) {
    v16 = 0x80000;
  }
  else {
    v16 = 0;
  }
  v17 = v14 | v16;
  *(_DWORD*)(a1 + 112) = v17;
  if ((unsigned __int8)(*(_BYTE*)(a2 + 11272) - 1) <= 7u &&
      ((0x9Fu >> (*(_BYTE*)(a2 + 11272) - 1)) & 1) != 0) {
    v17 |= GameData_1b01888[(unsigned __int8)(*(_BYTE*)(a2 + 11272) - 1)];
    *(_DWORD*)(a1 + 112) = v17;
  }
  v18 = *(_DWORD*)(a2 + 11276);
  if ((v18 & 0x10000) != 0) {
    v17 |= 0x40u;
    *(_DWORD*)(a1 + 112) = v17;
    v18 = *(_DWORD*)(a2 + 11276);
    if ((v18 & 0x20000) == 0) {
    LABEL_26:
      if ((v18 & 0x40000) == 0) {
        goto LABEL_28;
      }
      goto LABEL_27;
    }
  }
  else if ((v18 & 0x20000) == 0) {
    goto LABEL_26;
  }
  *(_DWORD*)(a1 + 112) = v17 | 0x4000;
  if ((*(_DWORD*)(a2 + 11276) & 0x40000) != 0) {
  LABEL_27:
    *(_DWORD*)(a1 + 116) |= 0x20u;
  }
LABEL_28:
  if ((GameRoutine_c8bc00(*(_QWORD*)(a2 + 40), *(_QWORD*)(a2 + 800)) & 1) !=
      0) {
    *(_DWORD*)(a1 + 112) |= 0x8000000u;
  }
  if ((BattleInfo_797c80(a2) & 1) != 0) {
    *(_DWORD*)(a1 + 112) |= 0x10000000u;
    v19 = *(_DWORD*)(a2 + 11276);
    if ((v19 & 0x2000) != 0) {
      goto LABEL_32;
    }
  }
  else {
    v19 = *(_DWORD*)(a2 + 11276);
    if ((v19 & 0x2000) != 0) {
    LABEL_32:
      *(_DWORD*)(a1 + 112) |= 0x400u;
      v19 = *(_DWORD*)(a2 + 11276);
      if ((v19 & 0x1000000) != 0) {
        goto LABEL_33;
      }
    LABEL_37:
      if ((v19 & 0x2000000) == 0) {
        goto LABEL_39;
      }
      goto LABEL_38;
    }
  }
  if ((v19 & 0x1000000) == 0) {
    goto LABEL_37;
  }
LABEL_33:
  *(_DWORD*)(a1 + 112) |= 0x200u;
  if ((*(_DWORD*)(a2 + 11276) & 0x2000000) != 0) {
  LABEL_38:
    *(_DWORD*)(a1 + 112) |= 0x800u;
  }
LABEL_39:
  v20 = a1 + 600;
  v21 = BattleInfo_796bc0(a2);
  if (v21 != 0) {
    game_800620((void*)(&v139_.v139), v21);
    v22 = v139_.v139;
    if ((v139_.v139 & 1) != 0) {
      *(_DWORD*)(a1 + 112) |= 0x20000000u;
    }
    if ((v22 & 0x3C) != 0) {
      *(_DWORD*)(a1 + 112) |= 0x40000000u;
    }
  }
  v23 = *(_QWORD*)(a2 + 40);
  if (v23 == 0 || (v24 = *(_QWORD*)(a2 + 800)) == 0 || v23 == v24) {
    *(_DWORD*)(a1 + 112) |= 0x20000u;
  }
  v25 = a1 + 216;
  game_10ea490(a1 + 216 + 96LL * v134[0], a2 + 16);
  GameRoutine_d28740(a1 + 600, v134[0], a2 + 16);
  v26 = *(__int64**)(a2 + 752);
  for (i = *(__int64**)(a2 + 760); v26 != i; v26 += 4) {
    GameRoutine_d28880((__int64**)(v20 + 24LL * v134[0]), v26);
  }
  game_10ea490(v25 + 96LL * (v134[0] ^ 1u), a2 + 776);
  GameRoutine_d28740(a1 + 600, v134[0] ^ 1, a2 + 776);
  v28 = *(__int64**)(a2 + 1512);
  for (j = *(__int64**)(a2 + 1520); v28 != j; v28 += 4) {
    GameRoutine_d28880((__int64**)(v20 + 24LL * (v134[0] ^ 1u)), v28);
  }
  v30 = 192;
  if (v134[0] != 0) {
    v30 = 288;
  }
  game_10ea490(v25 + v30, a2 + 1536);
  if (v134[0] != 0) {
    v31 = 3;
  }
  else {
    v31 = 2;
  }
  GameRoutine_d28740(a1 + 600, v31, a2 + 1536);
  v32 = *(__int64**)(a2 + 2272);
  for (k = *(__int64**)(a2 + 2280); v32 != k; v32 += 4) {
    if (v134[0] != 0) {
      v34 = 72;
    }
    else {
      v34 = 48;
    }
    GameRoutine_d28880((__int64**)(v20 + v34), v32);
  }
  v35 = 288;
  if (v134[0] != 0) {
    v35 = 192;
  }
  game_10ea490(v25 + v35, a2 + 2296);
  if (v134[0] != 0) {
    v36 = 2;
  }
  else {
    v36 = 3;
  }
  GameRoutine_d28740(a1 + 600, v36, a2 + 2296);
  v37 = *(__int64**)(a2 + 3032);
  for (m = *(__int64**)(a2 + 3040); v37 != m; v37 += 4) {
    if (v134[0] != 0) {
      v39 = 48;
    }
    else {
      v39 = 72;
    }
    GameRoutine_d28880((__int64**)(v20 + v39), v37);
  }
  if (game_GameModeData_instance_ != 0 &&
      (v40 = *(_QWORD*)(game_GameModeData_instance_ + 16)) != 0 &&
      (v41 = *(_BYTE**)(v40 + 144)) != nullptr && *v41 != 0) {
    v42 = strlen(v41);
    GameRoutine_d28a00(a1 + 600, (__int64)v41, v42);
    v43 = 1;
  }
  else {
    v43 = 0;
  }
  v44 = *(unsigned int*)(a2 + 11256);
  LODWORD(v139_.v141) = 0;
  BYTE4(v139_.v141) = 0;
  v139_.v142 = 0;
  v139_.v143 = (__typeof__(v139_.v143)){0};
  v139_.v144 = 0;
  v139_.v145 = 0;
  v139_.v146 = 0;
  v139_.v147 = 0;
  v139_.v150 = 0;
  __builtin_memset(v139_.v151, 0, 40);
  v139_.v148 = 0;
  v139_.v149 = 0;
  v139_.v139 = 0;
  v139_.v140 = 0x100000000LL;
  if ((int)v44 >= 1) {
    v132 = v4;
    v45 = a1 + 728;
    v46 = a2 + 3064;
    v131 = v43;
    v47 = 0;
    v133 = 0;
    while (1) {
      v48 = v46 + (v47 << 6);
      if ((*(_BYTE*)(v48 + 14) & 2) != 0) {
        goto LABEL_82;
      }
      v49 = *(unsigned __int8*)(v48 + 4);
      if (v49 > 7) {
        if (*(unsigned __int8*)(v48 + 4) > 0xCu) {
          if (v49 - 23 < 2) {
            if ((v139_.v139 & 3) != 0) {
              GameRoutine_10d7a40(a1, &v139_.v139);
              v139_.v141 = 0;
              v139_.v139 = 0;
              v139_.v140 = 0x100000000LL;
              v139_.v142 = 0;
              v139_.v144 = 0;
              v139_.v145 = 0;
              v139_.v146 = 0;
              v139_.v143 = (__typeof__(v139_.v143)){0};
              if (v139_.v147 != 0) {
                v139_.v148 = v139_.v147;
                v85 = 56;
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                  v85 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager +
                                                   v85);
              }
              v139_.v150 = 0;
              __builtin_memset(v139_.v151, 0, 40);
              v139_.v149 = 0;
              v133 = 1;
              goto LABEL_81;
            }
            v133 = 1;
          }
          else if (v49 - 13 <= 1) {
            game_combat_10de490((void*)((__int64)&v135_.v135), v46 + (v47 << 6),
                                v134);
            if (v135_.v138 == 1) {
              if ((v133 & 1) != 0) {
                if (*(_QWORD*)v45 == 0 ||
                    v135_.v136 != *(_QWORD*)(*(_QWORD*)v45 + 8LL)) {
                  GameRoutine_10de5e0(&v139_.v147, (__int64)&v135_.v135);
                  v50 = v134[0];
                  v51 = *(__int16*)(v48 + 16);
                  v52 = &v139_.v151[12 * v134[0] - 8];
                  v53 = v134[0] == 0;
                  *v52 = *(_DWORD*)(a2 + 116);
                  v52[1] = v51;
                  v54 = *(__int16*)(v48 + 28);
                  v52[2] += *(__int16*)(v48 + 18);
                  v55 = &v139_.v151[12 * (v50 ^ 1) - 8];
                  *v55 = *(_DWORD*)(a2 + 876);
                  v55[1] = v54;
                  v55[2] += *(__int16*)(v48 + 30);
                  if (v53) {
                    v56 = 120;
                  }
                  else {
                    v56 = 132;
                  }
                  *(_DWORD*)((char*)&v139_.v139 + v56) = *(_DWORD*)(a2 + 1636);
                  if (v53) {
                    v57 = 124;
                  }
                  else {
                    v57 = 136;
                  }
                  *(_DWORD*)((char*)&v139_.v139 + v57) = *(__int16*)(v48 + 40);
                  if (v53) {
                    v58 = 128;
                  }
                  else {
                    v58 = 140;
                  }
                  *(_DWORD*)((char*)&v139_.v139 + v58) += *(__int16*)(v48 + 42);
                  if (v53) {
                    v59 = 132;
                  }
                  else {
                    v59 = 120;
                  }
                  *(_DWORD*)((char*)&v139_.v139 + v59) = *(_DWORD*)(a2 + 2396);
                  if (v53) {
                    v60 = 136;
                  }
                  else {
                    v60 = 124;
                  }
                  *(_DWORD*)((char*)&v139_.v139 + v60) = *(__int16*)(v48 + 52);
                  if (v53) {
                    v61 = 140;
                  }
                  else {
                    v61 = 128;
                  }
                  *(_DWORD*)((char*)&v139_.v139 + v61) += *(__int16*)(v48 + 54);
                }
              }
              else {
                GameRoutine_10de5e0((__int64*)(a1 + 736), (__int64)&v135_.v135);
              }
            }
          }
          goto LABEL_82;
        }
        if (v49 - 8 >= 2) {
          if (v49 == 11) {
            HIDWORD(v139_.v139) |= 0x40000002u;
          }
          goto LABEL_82;
        }
      LABEL_143:
        game_combat_10de490((void*)((__int64)&v135_.v135), v46 + (v47 << 6),
                            v134);
        if (v135_.v138 == 1) {
          v81 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
          v82 = v135_.v135;
          v83 = *(_QWORD*)v45;
          *(_QWORD*)v45 = v81;
          *(_DWORD*)v81 = v82;
          *(_QWORD*)(v81 + 8) = v135_.v136;
          *(_BYTE*)(v81 + 16) = v135_.v137;
          if (v83 != 0) {
            v84 = 56;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v84 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v84);
          }
        }
        goto LABEL_82;
      }
      if (v49 - 2 >= 3) {
        if (v49 != 5) {
          if (v49 != 6) {
            goto LABEL_82;
          }
          *(_DWORD*)(a1 + 112) |= 0x100u;
        }
        goto LABEL_143;
      }
      game_combat_10de490((void*)((__int64)&v135_.v135), v46 + (v47 << 6),
                          v134);
      if (v135_.v138 == 1 && (*(_QWORD*)v45 == 0 ||
                              v135_.v136 != *(_QWORD*)(*(_QWORD*)v45 + 8LL))) {
        GameRoutine_10de5e0(&v139_.v147, (__int64)&v135_.v135);
      }
      v62 = v134[0];
      v63 = *(__int16*)(v48 + 16);
      v64 = 0;
      v65 = &v139_.v151[12 * v134[0] - 8];
      v66 = *(__int16*)(v48 + 18);
      v67 = *(_DWORD*)(a2 + 876);
      v68 = *(__int16*)(v48 + 28);
      v69 = v134[0] == 0;
      *v65 = *(_DWORD*)(a2 + 116);
      v65[1] = v63;
      v70 = *(__int16*)(v48 + 30);
      v65[2] += v66;
      v71 = &v139_.v151[12 * (v62 ^ 1) - 8];
      *v71 = v67;
      v71[1] = v68;
      v72 = v71[2] + v70;
      if (v69) {
        v73 = 120;
      }
      else {
        v73 = 132;
      }
      v71[2] = v72;
      if (v69) {
        v74 = 124;
      }
      else {
        v74 = 136;
      }
      *(_DWORD*)((char*)&v139_.v139 + v73) = *(_DWORD*)(a2 + 1636);
      *(_DWORD*)((char*)&v139_.v139 + v74) = *(__int16*)(v48 + 40);
      if (v69) {
        v75 = 128;
      }
      else {
        v75 = 140;
      }
      *(_DWORD*)((char*)&v139_.v139 + v75) += *(__int16*)(v48 + 42);
      if (v69) {
        v76 = 132;
      }
      else {
        v76 = 120;
      }
      *(_DWORD*)((char*)&v139_.v139 + v76) = *(_DWORD*)(a2 + 2396);
      if (v69) {
        v77 = 136;
      }
      else {
        v77 = 124;
      }
      *(_DWORD*)((char*)&v139_.v139 + v77) = *(__int16*)(v48 + 52);
      if (v69) {
        v78 = 140;
      }
      else {
        v78 = 128;
      }
      *(_DWORD*)((char*)&v139_.v139 + v78) += *(__int16*)(v48 + 54);
      v79 = *(_DWORD*)(a1 + 112);
      v80 = *(unsigned __int8*)(v48 + 2);
      if (v80 > 1) {
        if (v80 == 2) {
          if (v62 != 0) {
            v64 = 3;
          }
          else {
            v64 = 2;
          }
        }
        else if (v80 == 3) {
          if (v62 != 0) {
            v64 = 2;
          }
          else {
            v64 = 3;
          }
        }
      }
      else if (*(_BYTE*)(v48 + 2) != 0) {
        v64 = v62 ^ 1;
      }
      else {
        v64 = v62;
      }
      v86 = (v64 - 1) & 0xFFFFFFFD;
      LODWORD(v139_.v140) = v64;
      HIDWORD(v139_.v140) = v86 != 0;
      v87 = *(_DWORD*)(v48 + 12);
      if ((v87 & 2) != 0) {
        LODWORD(v139_.v139) = v139_.v139 | 2;
        if ((v87 & 1) == 0) {
        LABEL_166:
          if ((v87 & 4) == 0) {
            goto LABEL_168;
          }
        LABEL_167:
          LODWORD(v139_.v139) = v139_.v139 | 4;
          goto LABEL_168;
        }
      }
      else if ((v87 & 1) == 0) {
        goto LABEL_166;
      }
      LODWORD(v139_.v139) = v139_.v139 | 1;
      if ((v87 & 4) != 0) {
        goto LABEL_167;
      }
    LABEL_168:
      if ((v87 & 0x4800) != 0) {
        LODWORD(v139_.v139) = v139_.v139 | 0x10;
      }
      if ((v87 & 0x60) != 0) {
        LODWORD(v139_.v139) = v139_.v139 | 0x20;
      }
      if ((v87 & 0x80) != 0) {
        LODWORD(v139_.v139) = v139_.v139 | 0x40;
        if ((v87 & 0x10000) == 0) {
        LABEL_174:
          if ((v87 & 0x100) == 0) {
            goto LABEL_175;
          }
          goto LABEL_192;
        }
      }
      else if ((v87 & 0x10000) == 0) {
        goto LABEL_174;
      }
      LODWORD(v139_.v139) = v139_.v139 | 0x400;
      if ((v87 & 0x100) == 0) {
      LABEL_175:
        if ((v87 & 8) == 0) {
          goto LABEL_176;
        }
        goto LABEL_193;
      }
    LABEL_192:
      HIDWORD(v139_.v139) |= 1u;
      if ((v87 & 8) == 0) {
      LABEL_176:
        if ((v87 & 0x8000) == 0) {
          goto LABEL_177;
        }
        goto LABEL_194;
      }
    LABEL_193:
      HIDWORD(v139_.v139) |= 0x40000002u;
      if ((v87 & 0x8000) == 0) {
      LABEL_177:
        if ((v87 & 0x400) == 0) {
          goto LABEL_178;
        }
        goto LABEL_195;
      }
    LABEL_194:
      HIDWORD(v139_.v139) |= 0x40000004u;
      if ((v87 & 0x400) == 0) {
      LABEL_178:
        if ((v79 & 0x100) == 0) {
          goto LABEL_180;
        }
      LABEL_179:
        LODWORD(v139_.v139) = v139_.v139 | 0x10;
        goto LABEL_180;
      }
    LABEL_195:
      HIDWORD(v139_.v139) |= 0x20u;
      if ((v79 & 0x100) != 0) {
        goto LABEL_179;
      }
    LABEL_180:
      if ((*(_BYTE*)(a2 + 11278) & 8) != 0) {
        HIDWORD(v139_.v139) |= 0x100u;
      }
      v88 = v139_.v139;
      if ((v139_.v139 & 1) != 0) {
        v90 = v139_.v139 & 0xFFFFFFFB;
      }
      else {
        v89 = 104;
        v90 = v139_.v139 | 2;
        LODWORD(v139_.v139) = v139_.v139 | 2;
        if (v86 != 0) {
          v89 = 116;
        }
        if (*(_DWORD*)((char*)&v139_.v139 + v89) != 0) {
          goto LABEL_199;
        }
        v90 = v88 | 0xA;
      }
      LODWORD(v139_.v139) = v90;
    LABEL_199:
      v91 = *(unsigned __int8*)(v48 + 5);
      v92 = *(_DWORD*)(v48 + 8) & 0xFFF;
      LODWORD(v139_.v141) = v91;
      if ((_DWORD)v92 == 0) {
        goto LABEL_250;
      }
      v93 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v92) +
                       816LL);
      if (v93 == 0) {
        goto LABEL_250;
      }
      if (*(_WORD*)(v93 + 32) == 0) {
        goto LABEL_250;
      }
      v94 = *(unsigned __int8**)(*(_QWORD*)(v93 + 40) +
                                 8LL * (v91 % *(unsigned __int16*)(v93 + 32)));
      if (v94 == nullptr) {
        goto LABEL_250;
      }
      v97 = *v94;
      v96 = v94 + 1;
      v95 = v97;
      if (v97 != 0) {
        v98 = 0;
        do {
          v98 = v95 - v98 + 32 * v98;
          v99 = *v96++;
          v95 = v99;
        } while (v99 != 0);
      }
      else {
        v98 = 0;
      }
      if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
        goto LABEL_282;
      }
      v101 = GameData_22356f8 - 1;
      if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
        v102 = v98;
        if (GameData_22356f8 <= (unsigned __int64)v98) {
          v102 = v98 % (unsigned __int64)GameData_22356f8;
        }
      }
      else {
        v102 = v101 & v98;
      }
      v103 = *(__int64***)(GameData_22356f0 + 8 * v102);
      if (v103 == nullptr) {
        goto LABEL_282;
      }
      v104 = *v103;
      if (v104 == nullptr) {
        goto LABEL_282;
      }
      if ((GameData_22356f8 & v101) == 0) {
        while (1) {
          v106 = v104[1];
          if (v106 == v98) {
            if (*((_DWORD*)v104 + 4) == v98) {
              goto LABEL_235;
            }
          }
          else if ((v106 & v101) != v102) {
            goto LABEL_282;
          }
          v104 = (__int64*)*v104;
          if (v104 == nullptr) {
            goto LABEL_282;
          }
        }
      }
      while (1) {
        v105 = v104[1];
        if (v105 == v98) {
          break;
        }
        if (v105 >= GameData_22356f8) {
          v105 %= (unsigned __int64)GameData_22356f8;
        }
        if (v105 != v102) {
          goto LABEL_282;
        }
      LABEL_224:
        v104 = (__int64*)*v104;
        if (v104 == nullptr) {
          goto LABEL_282;
        }
      }
      if (*((_DWORD*)v104 + 4) != v98) {
        goto LABEL_224;
      }
    LABEL_235:
      if ((v79 & 0x8000) == 0 || v98 == 65798035) {
        if ((v90 & 4) == 0) {
          goto LABEL_238;
        }
        v107 = 989295323;
        if (v98 <= 603384485) {
          if ((unsigned int)(v98 - 603384300) <= 0x12 &&
              ((1 << (v98 + 20)) & 0x40007) != 0) {
            v107 = 603384318;
          }
          else if ((unsigned int)(v98 + 2068235592) >= 2) {
            if (v98 == 309207191) {
              goto LABEL_244;
            }
            goto LABEL_238;
          }
        }
        else if ((unsigned int)(v98 - 989295305) > 0x21 ||
                 ((1LL << ((unsigned __int8)v98 + 55)) & 0x200040007LL) == 0) {
          if ((unsigned int)(v98 - 603384486) <= 0x12 &&
              ((1 << (v98 + 90)) & 0x40007) != 0) {
          LABEL_244:
            v107 = 603384504;
            goto LABEL_249;
          }
        LABEL_238:
          v107 = v98;
        }
      LABEL_249:
        LODWORD(v139_.v146) = v107;
      }
    LABEL_250:
      v108 = *(unsigned __int8*)(v48 + 4);
      if (v108 == 4 || v108 == 2) {
        v109 = a2 + 16 + 760LL * v80;
        v110 = *(_QWORD*)(v109 + 56);
        if (v110 != 0) {
          if ((((unsigned __int16)*GameData_212cf08[0] >>
                *(_BYTE*)(v110 + 104)) &
               1) == 0) {
            goto LABEL_266;
          }
          v111 = *(_QWORD*)(v110 + 576);
          if (v111 == 0) {
            goto LABEL_266;
          }
        LABEL_261:
          if (*(_BYTE*)(v111 + 73) == 7 &&
              *(unsigned __int8*)(v111 + 72) < 8u) {
            v116 = 768;
            goto LABEL_267;
          }
        }
        else {
          v112 = *(unsigned __int16*)(v109 + 44);
          if (*(_WORD*)(v109 + 44) != 0) {
            goto LABEL_260;
          }
          v113 = *(unsigned int*)(v109 + 40);
          v114 = (__int64*)(*(_QWORD*)(v109 + 24) + 8 * v113 + 828);
          if ((int)v113 <= -1) {
            v114 = &game_g_empty_item;
          }
          v112 = *(unsigned __int16*)v114;
          if (*(_WORD*)v114 != 0) {
          LABEL_260:
            v111 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v112);
            goto LABEL_261;
          }
        }
      LABEL_266:
        v116 = 640;
      LABEL_267:
        v90 = v116 | v90 & 0xFFFFFDF7;
        LODWORD(v139_.v139) = v90;
      }
      if ((v90 & 0x80) != 0) {
        if ((v64 & 0x7E) == 2 &&
            (v117 = (int*)&v139_.v151[12 * (v64 & 1) - 8])[2] < 0 &&
            *v117 > 0) {
          HIDWORD(v139_.v140) = v64 & 1;
          HIDWORD(v139_.v139) |= 0x200u;
        }
        else {
          v118 = (int*)&v139_.v151[12 * v64 - 8];
          if (v118[2] < 0 && *v118 > 0) {
            goto LABEL_281;
          }
          v119 = v86 == 0;
          if (v86 != 0) {
            v120 = (__int64*)&v139_.v151[4];
          }
          else {
            v120 = &v139_.v150;
          }
          v121 = 100;
          if (!v119) {
            v121 = 112;
          }
          if ((*(_DWORD*)v120 | *(_DWORD*)((char*)&v139_.v139 + v121)) == 0) {
          LABEL_281:
            HIDWORD(v139_.v140) = v64 & 1;
          }
        }
      }
    LABEL_282:
      if ((v90 & 3) != 0) {
        GameRoutine_10d7a40(a1, &v139_.v139);
        v139_.v141 = 0;
        v139_.v139 = 0;
        v139_.v140 = 0x100000000LL;
        v139_.v142 = 0;
        v139_.v144 = 0;
        v139_.v145 = 0;
        v139_.v146 = 0;
        v139_.v143 = (__typeof__(v139_.v143)){0};
        if (v139_.v147 != 0) {
          v139_.v148 = v139_.v147;
          v122 = 56;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v122 = 128;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v122);
        }
        v139_.v150 = 0;
        __builtin_memset(v139_.v151, 0, 40);
        v139_.v149 = 0;
      LABEL_81:
        v139_.v147 = 0;
        v139_.v148 = 0;
      }
    LABEL_82:
      if (++v47 == v44) {
        v4 = v132;
        v43 = v131;
        if (v139_.v147 != 0) {
          v139_.v148 = v139_.v147;
          v123 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v123 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v123);
        }
        break;
      }
    }
  }
  v124 = *(_DWORD*)(a1 + 112);
  if ((v124 & 0x200) != 0) {
    v124 &= 0xFFFFFE67;
    *(_DWORD*)(a1 + 112) = v124;
  }
  if ((v124 & 8) != 0) {
    v125 = *(_QWORD*)(a1 + 32);
    v126 = *(_QWORD*)(a1 + 40);
    if (v125 != v126) {
      v127 = fw_memory_g_heap_manager_ptr;
      do {
        v128 = *(_QWORD*)(v126 - 72);
        if (v128 != 0) {
          *(_QWORD*)(v126 - 64) = v128;
          if (*(_QWORD*)(*(_QWORD*)v127 + 200LL) != 0) {
            v129 = 128;
          }
          else {
            v129 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v127 + v129);
        }
        v126 -= 144;
      } while (v126 != v125);
    }
    *(_QWORD*)(a1 + 40) = v125;
  }
  GameRoutine_10b9f40(v4, (_QWORD*)a2, a1, v43);
  if (*(int*)(a2 + 11280) >= 2 && (*(_BYTE*)(a2 + 11278) & 1) == 0) {
    v130 = *(_DWORD*)(a1 + 112);
    *(_DWORD*)(a1 + 112) = v130 | 0x100000;
    if (*(int*)(a2 + 11280) > 2 || (*(_BYTE*)(a1 + 196) & 1) != 0) {
      *(_DWORD*)(a1 + 112) = v130 | 0x300000;
    }
  }
}

__int64* game_10f0680(__int64* a1, __n128 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  unsigned int v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  bool v11;
  long double v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  bool v26;
  long double v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v32;
  __n128 v33;
  unsigned __int8 v34;
  _BYTE v35[96];
  float32x4_t v36;
  float32x4_t v37;

  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (GameData_21ec7b0 == 0) {
    goto LABEL_55;
  }
  v2 = *(_QWORD*)(GameData_21ec7b0 + 8);
  if (v2 == 0) {
    goto LABEL_55;
  }
  v3 = *(_DWORD*)(v2 + 112);
  if ((v3 & 0x200000) != 0) {
    return game_10f2400(a1, 0, a2);
  }
  if ((v3 & 0x102000) == 0) {
    goto LABEL_55;
  }
  v4 = *((_DWORD*)a1 + 2);
  v5 = a1;
  if (v4 > 3 ||
      (v6 = GameData_21ec7b0 + 24LL * v4, (v7 = *(_QWORD*)(v6 + 32)) == 0)) {
    v37 = (__typeof__(v37)){0};
    goto LABEL_27;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                            memory_order_relaxed);
  v8 = *(_QWORD*)(v6 + 40);
  if (*(_QWORD*)(v7 + 8) != -1 && v8 != 0) {
    v10 = *(_QWORD*)(v8 + 80);
    if (v10 != 0) {
      v11 = *(_QWORD*)(v10 + 8) == -1 || *(_QWORD*)(v8 + 88) == 0;
      if (!v11 && *(_QWORD*)(v7 + 8) != -1) {
        *(__n128*)&v12 = std___1___shared_weak_count___release_weak(v7),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v13 = *(_QWORD*)(v8 + 80);
        v37 = (__typeof__(v37)){0};
        a1 = v5;
        if (v13 != 0) {
          v14 = *(_QWORD*)(v13 + 8);
          v15 = *(_QWORD*)(v8 + 88);
          if (v14 != -1 && v15 != 0) {
            v17 = *(_QWORD*)(v15 + 400);
            if (v17 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                        memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64, long double))(*(_QWORD*)v17 + 16LL))(v17,
                                                                           v12),
                    v33 = COERCE_AS(__typeof__(v33),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                std___1___shared_weak_count___release_weak(v17),
                    v33 = COERCE_AS(__typeof__(v33),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                goto LABEL_30;
              }
            }
          }
        }
      LABEL_27:
        v19 = GameData_21ec7b0;
        if (GameData_21ec7b0 == 0) {
          goto LABEL_52;
        }
        goto LABEL_31;
      }
    }
  }
  std___1___shared_weak_count___release_weak(v7),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v37 = (__typeof__(v37)){0};
LABEL_30:
  a1 = v5;
  v19 = GameData_21ec7b0;
  if (GameData_21ec7b0 == 0) {
  LABEL_52:
    v36 = (__typeof__(v36)){0};
    goto LABEL_53;
  }
LABEL_31:
  v20 = *((_DWORD*)a1 + 3);
  if (v20 > 3) {
    goto LABEL_52;
  }
  v21 = v19 + 24LL * v20;
  v22 = *(_QWORD*)(v21 + 32);
  if (v22 == 0) {
    goto LABEL_52;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                            memory_order_relaxed);
  v23 = *(_QWORD*)(v21 + 40);
  v24 = *(_QWORD*)(v22 + 8) == -1 || v23 == 0;
  if (v24 || (v25 = *(_QWORD*)(v23 + 80)) == 0 ||
      (*(_QWORD*)(v25 + 8) != -1 ? (v26 = *(_QWORD*)(v23 + 88) == 0)
                                 : (v26 = true),
       v26 || *(_QWORD*)(v22 + 8) == -1)) {
    std___1___shared_weak_count___release_weak(v22),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_52;
  }
  *(__n128*)&v27 = std___1___shared_weak_count___release_weak(v22),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v28 = *(_QWORD*)(v23 + 80);
  v36 = (__typeof__(v36)){0};
  if (v28 != 0) {
    v29 = *(_QWORD*)(v28 + 8);
    v30 = *(_QWORD*)(v23 + 88);
    if (v29 != -1 && v30 != 0) {
      v32 = *(_QWORD*)(v30 + 400);
      if (v32 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v32 + 16LL))(v32, v27),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak(v32),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
    }
  }
LABEL_53:
  collision_670c60_alt1((void*)((__int64)v35), &v37, &v36, 0x100000001LL),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v35[80] & 1) == 0) {
  LABEL_55:
    v34 = 0;
    return (__int64*)(v34 & 1);
  }
  *(_DWORD*)(*(_QWORD*)(GameData_21ec7b0 + 8) + 112LL) |= 0x200000u;
  v34 = (unsigned __int8)game_10f2400(v5, 0, v33),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
  return (__int64*)(v34 & 1);
}

__int64 game_10f0920(__int64 a1, __n128 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  bool v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  int v31;
  __n128 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v37;
  char v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  bool v44;
  unsigned __int64 v45;
  int v46;
  int v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  int v56;
  int v57;
  __int64 v58;
  __int64 v59;
  int* v60;
  __int64 v61;
  __int64* v62;
  int v63;
  int* v64;
  __int64* v65;
  int v66;
  int v67;
  char v68;
  int v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  unsigned __int8* v74;
  __int64 v75;
  __int64 v76;
  int* v77;
  __int64 v78;
  int v79;
  char v80;
  __int64 v82;
  __int64 v83[2];

  v2 = GameData_220f8c8;
  if (GameData_220f8c8 == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(GameData_220f8c8 + 8);
  v4 = *(_QWORD*)(GameData_220f8c8 + 16) - v3;
  if (v4 == 0) {
    return 0;
  }
  v5 = (int*)(v3 + 24);
  v6 = 0;
  v7 = 0x4EC4EC4EC4EC4EC5LL * (v4 >> 3);
  while (1) {
    v8 = *v5;
    v5 += 26;
    if (v8 == 1986002266) {
      break;
    }
    if (v7 == ++v6) {
      return 0;
    }
  }
  if (v6 < 0) {
    return 0;
  }
  v9 = GameData_21ec7b0;
  if (GameData_21ec7b0 == 0) {
    return 0;
  }
  v10 = *(_DWORD*)(a1 + 8);
  if (v10 <= 3 && (v11 = GameData_21ec7b0 + 24LL * v10,
                   (v12 = *(_QWORD*)(v11 + 32)) != 0)) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    v13 = *(_QWORD*)(v11 + 40);
    v14 = *(_QWORD*)(v12 + 8) == -1 || v13 == 0;
    if (v14 || (v15 = *(_QWORD*)(v13 + 80)) == 0 ||
        (*(_QWORD*)(v15 + 8) != -1 ? (v16 = *(_QWORD*)(v13 + 88) == 0)
                                   : (v16 = true),
         v16)) {
      v17 = a1;
      v18 = 0;
    }
    else {
      v17 = a1;
      if (*(_QWORD*)(v12 + 8) == -1) {
        v18 = 0;
      }
      else {
        v18 = v13;
      }
    }
    std___1___shared_weak_count___release_weak(v12);
    v9 = GameData_21ec7b0;
    if (GameData_21ec7b0 == 0) {
      goto LABEL_39;
    }
    a1 = v17;
  }
  else {
    v18 = 0;
  }
  v19 = *(_DWORD*)(a1 + 12);
  if (v19 > 3 || (v20 = v9 + 24LL * v19, (v21 = *(_QWORD*)(v20 + 32)) == 0)) {
  LABEL_39:
    v26 = 0;
    goto LABEL_40;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                            memory_order_relaxed);
  v22 = *(_QWORD*)(v20 + 40);
  v23 = *(_QWORD*)(v21 + 8) == -1 || v22 == 0;
  if (v23 || (v24 = *(_QWORD*)(v22 + 80)) == 0 ||
      (*(_QWORD*)(v24 + 8) != -1 ? (v25 = *(_QWORD*)(v22 + 88) == 0)
                                 : (v25 = true),
       v25)) {
    v26 = 0;
  }
  else if (*(_QWORD*)(v21 + 8) == -1) {
    v26 = 0;
  }
  else {
    v26 = v22;
  }
  std___1___shared_weak_count___release_weak(v21);
LABEL_40:
  if (v18 == 0) {
    if (v26 == 0) {
      return 0;
    }
    v82 = 0;
    v31 = v6;
    v33 = *(_QWORD*)(v26 + 80);
    if (v33 == 0) {
      goto LABEL_59;
    }
  LABEL_54:
    if (*(_QWORD*)(v33 + 8) != -1) {
      v34 = *(_QWORD*)(v26 + 88);
      if (v34 != 0) {
        v35 = *(_QWORD*)(v34 + 400);
        v36 = v31;
        v83[0] = *(_QWORD*)(v34 + 392);
        v83[1] = v35;
        if (v35 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                                    memory_order_relaxed);
          v37 = game_combat_d360c0(v2, v6, v83);
          if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
            v32 = std___1___shared_weak_count___release_weak(v35);
          }
        LABEL_61:
          v31 = v36;
          v38 = 0;
          v39 = 0;
          if (v18 == 0) {
            goto LABEL_79;
          }
          goto LABEL_64;
        }
      LABEL_60:
        v37 = game_combat_d360c0(v2, v6, v83);
        goto LABEL_61;
      }
    }
  LABEL_59:
    v36 = v31;
    v83[0] = 0;
    v83[1] = 0;
    goto LABEL_60;
  }
  v27 = *(_QWORD*)(v18 + 80);
  if (v27 == 0 ||
      ((v28 = *(_QWORD*)(v27 + 8), v29 = *(_QWORD*)(v18 + 88), v28 != -1)
           ? (v30 = v29 == 0)
           : (v30 = true),
       v30)) {
    v83[0] = 0;
    v83[1] = 0;
  LABEL_48:
    v31 = game_combat_d360c0(v2, v6, v83);
    goto LABEL_49;
  }
  v48 = *(_QWORD*)(v29 + 400);
  v83[0] = *(_QWORD*)(v29 + 392);
  v83[1] = v48;
  if (v48 == 0) {
    goto LABEL_48;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                            memory_order_relaxed);
  v31 = game_combat_d360c0(v2, v6, v83);
  if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v49 = v31;
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    v32 = std___1___shared_weak_count___release_weak(v48);
    v31 = v49;
  }
LABEL_49:
  if (v26 != 0) {
    v82 = v18;
    v33 = *(_QWORD*)(v26 + 80);
    if (v33 == 0) {
      goto LABEL_59;
    }
    goto LABEL_54;
  }
  v38 = 1;
  v82 = v18;
  v37 = v6;
LABEL_64:
  v40 = *(_QWORD*)(v82 + 88);
  v41 = *(_QWORD*)(v40 + 392);
  v42 = *(_QWORD*)(v40 + 400);
  if (v42 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                              memory_order_relaxed);
  }
  v43 = *(unsigned int*)(v41 + 11784);
  v44 = v43 >= 0x22;
  v45 = 0x36C260000uLL >> v43;
  v46 = !v44;
  v39 = v46 & v45;
  if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v50 = v31;
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    v32 = std___1___shared_weak_count___release_weak(v42);
    if ((v38 & 1) != 0) {
      v26 = 0;
      v47 = 0;
      v31 = v50;
      goto LABEL_87;
    }
    v31 = v50;
  }
  else if ((v38 & 1) != 0) {
    v26 = 0;
    v47 = 0;
    goto LABEL_87;
  }
LABEL_79:
  v51 = *(_QWORD*)(v26 + 88);
  v52 = *(_QWORD*)(v51 + 392);
  v53 = *(_QWORD*)(v51 + 400);
  if (v53 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                              memory_order_relaxed);
  }
  v54 = *(unsigned int*)(v52 + 11784);
  v44 = v54 >= 0x22;
  v55 = 0x36C260000uLL >> v54;
  v56 = !v44;
  v47 = v56 & v55;
  if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v57 = v31;
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    v32 = std___1___shared_weak_count___release_weak(v53);
    v31 = v57;
  }
LABEL_87:
  if (v31 != (_DWORD)v6 && v37 != (_DWORD)v6) {
    v58 = *(_QWORD*)(GameData_220f8c8 + 8);
    v59 = *(_QWORD*)(GameData_220f8c8 + 16) - v58;
    if (v59 != 0) {
      v60 = (int*)(v58 + 24);
      v61 = 0;
      v62 = GameData_212d448[0];
      while (1) {
        v63 = *v60;
        v60 += 26;
        if (v63 == 1890962995) {
          break;
        }
        if (0x4EC4EC4EC4EC4EC5LL * (v59 >> 3) == ++v61) {
          LODWORD(v61) = -1;
          break;
        }
      }
    }
    else {
      LODWORD(v61) = -1;
      v62 = GameData_212d448[0];
    }
    if (*v62 != 0) {
      v73 = *(_QWORD*)(*v62 + 128);
      if (v73 != 0) {
        if ((v61 & 0x80000000) == 0) {
        LABEL_116:
          if (0x4EC4EC4EC4EC4EC5LL * (v59 >> 3) <=
              (unsigned __int64)(unsigned int)v61) {
            GameRoutine_d38e30();
          }
          v74 = (unsigned __int8*)(v58 + 104LL * (unsigned int)v61);
          return GameRoutine_1096780(v73, v74, 0);
        }
      LABEL_130:
        v74 = nullptr;
        return GameRoutine_1096780(v73, v74, 0);
      }
    }
    return 0;
  }
  if ((v39 & v47) == 1) {
    v58 = *(_QWORD*)(GameData_220f8c8 + 8);
    v59 = *(_QWORD*)(GameData_220f8c8 + 16) - v58;
    if (v59 != 0) {
      v64 = (int*)(v58 + 24);
      v61 = 0;
      v65 = GameData_212d448[0];
      while (1) {
        v66 = *v64;
        v64 += 26;
        if (v66 == 1890962995) {
          break;
        }
        if (0x4EC4EC4EC4EC4EC5LL * (v59 >> 3) == ++v61) {
          LODWORD(v61) = -1;
          break;
        }
      }
    }
    else {
      LODWORD(v61) = -1;
      v65 = GameData_212d448[0];
    }
    if (*v65 != 0) {
      v73 = *(_QWORD*)(*v65 + 128);
      if (v73 != 0) {
        if ((v61 & 0x80000000) == 0) {
          goto LABEL_116;
        }
        goto LABEL_130;
      }
    }
    return 0;
  }
  if (v31 == (_DWORD)v6) {
    v67 = 0;
  }
  else {
    v67 = v47;
  }
  if (v37 == (_DWORD)v6) {
    v68 = 0;
  }
  else {
    v68 = v39;
  }
  if ((v68 & 1) != 0 || v67 != 0) {
    v75 = *(_QWORD*)(GameData_220f8c8 + 8);
    v76 = *(_QWORD*)(GameData_220f8c8 + 16) - v75;
    if (v76 != 0) {
      v77 = (int*)(v75 + 24);
      v71 = 0;
      v78 = 0x4EC4EC4EC4EC4EC5LL * (v76 >> 3);
      while (1) {
        v79 = *v77;
        v77 += 26;
        if (v79 == 1890962995) {
          break;
        }
        if (v78 == ++v71) {
          goto LABEL_122;
        }
      }
    }
    else {
    LABEL_122:
      LODWORD(v71) = -1;
    }
    if (*GameData_212d448[0] != 0) {
      v70 = *(_QWORD*)(*GameData_212d448[0] + 128);
      if (v70 != 0) {
        v80 = 0;
        return CombatCamera_1098000(v70, v71, v80, *(long double*)&v32);
      }
    }
  }
  else if (v31 == (_DWORD)v6) {
    if (v37 != (_DWORD)v6 && GameData_21ec7b0 != 0) {
      v70 = *(_QWORD*)(GameData_21ec7b0 + 128);
      if (v70 != 0) {
        v72 = *(_DWORD*)(v26 + 96);
        LODWORD(v71) = v37;
        goto LABEL_136;
      }
    }
  }
  else if (GameData_21ec7b0 != 0) {
    v69 = v31;
    v70 = *(_QWORD*)(GameData_21ec7b0 + 128);
    if (v70 != 0) {
      LODWORD(v71) = v69;
      v72 = *(_DWORD*)(v82 + 96);
    LABEL_136:
      v80 = v72 != 0;
      return CombatCamera_1098000(v70, v71, v80, *(long double*)&v32);
    }
  }
  return 0;
}

__int64 game_10f20b0()
{
  __int64 v0;
  int v1;
  __int64 v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int8* v6;
  int v7;
  int v8;
  int v10;
  unsigned int v11;
  char* v13;

  if (GameData_21ec7b0 == 0) {
    return 0;
  }
  v0 = *(_QWORD*)(GameData_21ec7b0 + 8);
  if (v0 != 0) {
    v1 = *(_DWORD*)(v0 + 112);
    if ((v1 & 0x8000) != 0) {
      return 0;
    }
    if ((v1 & 0x10000000) != 0) {
      goto LABEL_7;
    }
  }
  if ((*(_BYTE*)(v0 + 116) & 1) == 0) {
    return 0;
  }
  v1 = *(_DWORD*)(v0 + 112);
LABEL_7:
  if ((v1 & 0x10000) == 0) {
    v2 = *(_QWORD*)(GameData_21ec7b0 + 128);
    if (v2 != 0) {
      v3 = *(unsigned __int8**)(v2 + 176);
      if (v3 != nullptr) {
        v4 = *v3;
        v5 = *((_QWORD*)v3 + 1);
        if ((v4 & 1) == 0) {
          v5 = v4 >> 1;
        }
        if (v5 >= 3) {
          v6 = (v4 & 1) != 0 ? *((unsigned __int8**)v3 + 2) : v3 + 1;
          v7 = *(unsigned __int16*)v6;
          v8 = v6[2];
          if (v7 == 26948 && v8 == 101) {
            return 0;
          }
        }
      }
    }
  }
  v10 = *(_DWORD*)(v0 + 116);
  if ((v10 & 0x800) != 0) {
    v11 = 1;
  }
  else {
    v11 = 0;
    if ((v10 & 0x400) == 0) {
      return 0;
    }
  }
  if ((v10 & 0x80) != 0) {
    v13 = "DieN";
  }
  else {
    if ((game_10f21c0("DieE", (v10 & 0x800) == 0) & 1) != 0) {
      return 1;
    }
    v13 = (char*)&GameData_1a8a3b5;
  }
  return game_10f21c0(v13, v11);
}

__int64 game_10f21c0(_BYTE* a1, unsigned int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  bool v7;
  int v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  int v18;
  _BYTE* v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int* v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  unsigned __int8* v31;
  __int64 v32[2];

  if (a2 > 3) {
    return 0;
  }
  if (GameData_21ec7b0 == 0) {
    return 0;
  }
  v2 = GameData_21ec7b0 + 24LL * a2;
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 == 0) {
    return 0;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v4 = *(_QWORD*)(v2 + 40);
  v5 = *(_QWORD*)(v3 + 8) == -1 || v4 == 0;
  if (v5 || (v6 = *(_QWORD*)(v4 + 80)) == 0 ||
      (*(_QWORD*)(v6 + 8) != -1 ? (v7 = *(_QWORD*)(v4 + 88) == 0) : (v7 = true),
       v7 || *(_QWORD*)(v3 + 8) == -1)) {
    std___1___shared_weak_count___release_weak(v3);
    return 0;
  }
  std___1___shared_weak_count___release_weak(v3);
  v9 = *(_DWORD*)(v4 + 96);
  v10 = GameData_212ee68[0];
  v11 = *(_QWORD*)(v4 + 80);
  v12 = *GameData_212ee68[0];
  if (v11 == 0 ||
      ((v13 = *(_QWORD*)(v11 + 8), v14 = *(_QWORD*)(v4 + 88), v13 != -1)
           ? (v15 = v14 == 0)
           : (v15 = true),
       v15)) {
    v16 = 0;
    v32[0] = 0;
    v32[1] = 0;
  }
  else {
    v16 = *(_QWORD*)(v14 + 400);
    v32[0] = *(_QWORD*)(v14 + 392);
    v32[1] = v16;
    if (v16 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  if (a1 == nullptr) {
    goto LABEL_35;
  }
  v18 = (unsigned __int8)*a1;
  if (*a1 != 0) {
    v19 = a1 + 1;
    v20 = 0;
    do {
      v20 = v18 - v20 + 32 * v20;
      v21 = (unsigned __int8)*v19++;
      v18 = v21;
    } while (v21 != 0);
  }
  else {
    v20 = 0;
  }
  v22 = *(_QWORD*)(v12 + 8);
  v23 = *(_QWORD*)(v12 + 16) - v22;
  if (v23 != 0) {
    v24 = (int*)(v22 + 24);
    v25 = 0;
    v26 = 0x4EC4EC4EC4EC4EC5LL * (v23 >> 3);
    while (1) {
      v27 = *v24;
      v24 += 26;
      if (v20 == v27) {
        break;
      }
      if (v26 == ++v25) {
        goto LABEL_35;
      }
    }
  }
  else {
  LABEL_35:
    LODWORD(v25) = -1;
  }
  v28 = game_combat_d360c0(v12, v25, v32);
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  if (GameData_21ec7b0 == 0) {
    return 0;
  }
  v29 = *(_QWORD*)(GameData_21ec7b0 + 128);
  if (v29 == 0) {
    return 0;
  }
  if ((v28 & 0x80000000) != 0) {
    v31 = nullptr;
  }
  else {
    v30 = *(_QWORD*)(*v10 + 8);
    if (0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD*)(*v10 + 16) - v30) >> 3) <=
        (unsigned __int64)v28) {
      GameRoutine_d38e30();
    }
    v31 = (unsigned __int8*)(v30 + 104LL * v28);
  }
  return GameRoutine_1096780(v29, v31, (v9 & 0xFFFFFFFD) != 0);
}

__int64* game_10f2400(__int64* result, char a2, __n128 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  int* v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  bool v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  bool v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int* v34;
  __int64 v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int8* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  bool v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int* v51;
  __int64 v52;
  __int64 v53;
  int v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  unsigned __int8* v58;
  __int64 v59[2];

  if (GameData_21ec7b0 != 0) {
    v3 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v3 != 0) {
      if ((*(_BYTE*)(v3 + 113) & 0x80) != 0) {
        return nullptr;
      }
      if (result == nullptr) {
        v4 = *(_QWORD*)(v3 + 32);
        v5 = *(_QWORD*)(v3 + 40);
        if (v4 == v5) {
          result = &GameData_2235e30;
        }
        else {
          v6 = *(_DWORD*)(v3 + 56);
          v7 = 954437177 * ((unsigned __int64)(v5 - v4) >> 4) - 1;
          if (v6 < v7) {
            v7 = v6;
          }
          if (v6 >= 0) {
            v8 = v7;
          }
          else {
            v8 = 0;
          }
          if (v4 == 0) {
            return nullptr;
          }
          result = (__int64*)(v4 + 144LL * v8);
        }
      }
    }
    else if (result == nullptr) {
      return result;
    }
    v11 = (int*)result + 1;
    v9 = *((_DWORD*)result + 1);
    if ((a2 & 1) == 0 && (v9 & 0x800) == 0) {
      v12 = *((_DWORD*)result + 2);
      if (v12 <= 3 && (v13 = GameData_21ec7b0 + 24LL * v12,
                       (v14 = *(_QWORD*)(v13 + 32)) != 0)) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                  memory_order_relaxed);
        v15 = *(_QWORD*)(v13 + 40);
        v16 = *(_QWORD*)(v14 + 8) == -1 || v15 == 0;
        if (v16 || (v17 = *(_QWORD*)(v15 + 80)) == 0 ||
            (*(_QWORD*)(v17 + 8) != -1 ? (v18 = *(_QWORD*)(v15 + 88) == 0)
                                       : (v18 = true),
             v18)) {
          v10 = 0;
          std___1___shared_weak_count___release_weak(v14);
        }
        else {
          if (*(_QWORD*)(v14 + 8) == -1) {
            v10 = 0;
          }
          else {
            v10 = v15;
          }
          std___1___shared_weak_count___release_weak(v14);
        }
      }
      else {
        v10 = 0;
      }
      goto LABEL_50;
    }
    v19 = *((_DWORD*)result + 3);
    if (v19 <= 3 && (v20 = GameData_21ec7b0 + 24LL * v19,
                     (v21 = *(_QWORD*)(v20 + 32)) != 0)) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                memory_order_relaxed);
      v22 = *(_QWORD*)(v20 + 40);
      v23 = *(_QWORD*)(v21 + 8) == -1 || v22 == 0;
      if (v23 || (v24 = *(_QWORD*)(v22 + 80)) == 0 ||
          (*(_QWORD*)(v24 + 8) != -1 ? (v25 = *(_QWORD*)(v22 + 88) == 0)
                                     : (v25 = true),
           v25)) {
        v10 = 0;
      }
      else if (*(_QWORD*)(v21 + 8) == -1) {
        v10 = 0;
      }
      else {
        v10 = v22;
      }
      std___1___shared_weak_count___release_weak(v21);
      v9 = *v11;
    }
    else {
      v10 = 0;
    }
  LABEL_48:
    *v11 = v9 | 0x800;
    goto LABEL_50;
  }
  if (result == nullptr) {
    return result;
  }
  v9 = *((_DWORD*)result + 1);
  v10 = 0;
  v11 = (int*)result + 1;
  if ((a2 & 1) != 0 || (v9 & 0x800) != 0) {
    goto LABEL_48;
  }
LABEL_50:
  v26 = *(_QWORD*)(v10 + 80);
  v27 = GameData_220f8c8;
  if (v26 == 0 ||
      ((v28 = *(_QWORD*)(v26 + 8), v29 = *(_QWORD*)(v10 + 88), v28 != -1)
           ? (v30 = v29 == 0)
           : (v30 = true),
       v30)) {
    v31 = 0;
    v59[0] = 0;
    v59[1] = 0;
  }
  else {
    v31 = *(_QWORD*)(v29 + 400);
    v59[0] = *(_QWORD*)(v29 + 392);
    v59[1] = v31;
    if (v31 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  v32 = *(_QWORD*)(v27 + 8);
  v33 = *(_QWORD*)(v27 + 16) - v32;
  if (v33 != 0) {
    v34 = (int*)(v32 + 24);
    v35 = 0;
    v36 = 0x4EC4EC4EC4EC4EC5LL * (v33 >> 3);
    while (1) {
      v37 = *v34;
      v34 += 26;
      if (v37 == 388452356) {
        break;
      }
      if (v36 == ++v35) {
        goto LABEL_63;
      }
    }
  }
  else {
  LABEL_63:
    LODWORD(v35) = -1;
  }
  v38 = game_combat_d360c0(v27, v35, v59);
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v31);
    v39 = GameData_21ec7b0;
    if (GameData_21ec7b0 == 0) {
      goto LABEL_76;
    }
  }
  else {
    v39 = GameData_21ec7b0;
    if (GameData_21ec7b0 == 0) {
      goto LABEL_76;
    }
  }
  v40 = *(_QWORD*)(v39 + 128);
  if (v40 != 0) {
    if ((v38 & 0x80000000) != 0) {
      v42 = nullptr;
    }
    else {
      v41 = *(_QWORD*)(GameData_220f8c8 + 8);
      if (0x4EC4EC4EC4EC4EC5LL *
              ((*(_QWORD*)(GameData_220f8c8 + 16) - v41) >> 3) <=
          (unsigned __int64)v38) {
        goto LABEL_110;
      }
      v42 = (unsigned __int8*)(v41 + 104LL * v38);
    }
    if ((GameRoutine_1096780(v40, v42,
                             (*(_DWORD*)(v10 + 96) & 0xFFFFFFFD) != 0) &
         1) != 0) {
      return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
    }
  }
LABEL_76:
  v43 = GameData_220f8c8;
  v44 = *(_QWORD*)(v10 + 80);
  if (v44 == 0 ||
      ((v45 = *(_QWORD*)(v44 + 8), v46 = *(_QWORD*)(v10 + 88), v45 != -1)
           ? (v47 = v46 == 0)
           : (v47 = true),
       v47)) {
    v48 = 0;
    v59[0] = 0;
    v59[1] = 0;
  }
  else {
    v48 = *(_QWORD*)(v46 + 400);
    v59[0] = *(_QWORD*)(v46 + 392);
    v59[1] = v48;
    if (v48 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  v49 = *(_QWORD*)(v43 + 8);
  v50 = *(_QWORD*)(v43 + 16) - v49;
  if (v50 != 0) {
    v51 = (int*)(v49 + 24);
    v52 = 0;
    v53 = 0x4EC4EC4EC4EC4EC5LL * (v50 >> 3);
    while (1) {
      v54 = *v51;
      v51 += 26;
      if (v54 == -842878802) {
        break;
      }
      if (v53 == ++v52) {
        goto LABEL_89;
      }
    }
  }
  else {
  LABEL_89:
    LODWORD(v52) = -1;
  }
  v55 = game_combat_d360c0(v43, v52, v59);
  if (v48 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    v56 = GameData_21ec7b0;
    if (GameData_21ec7b0 != 0) {
      goto LABEL_93;
    }
    return nullptr;
  }
  (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
  std___1___shared_weak_count___release_weak(v48);
  v56 = GameData_21ec7b0;
  if (GameData_21ec7b0 == 0) {
    return nullptr;
  }
LABEL_93:
  result = *(__int64**)(v56 + 128);
  if (result != nullptr) {
    if ((v55 & 0x80000000) != 0) {
      v58 = nullptr;
      return (__int64*)GameRoutine_1096780(
          (__int64)result, v58, (*(_DWORD*)(v10 + 96) & 0xFFFFFFFD) != 0);
    }
    v57 = *(_QWORD*)(GameData_220f8c8 + 8);
    if (0x4EC4EC4EC4EC4EC5LL *
            ((*(_QWORD*)(GameData_220f8c8 + 16) - v57) >> 3) >
        (unsigned __int64)v55) {
      v58 = (unsigned __int8*)(v57 + 104LL * v55);
      return (__int64*)GameRoutine_1096780(
          (__int64)result, v58, (*(_DWORD*)(v10 + 96) & 0xFFFFFFFD) != 0);
    }
  LABEL_110:
    GameRoutine_d38e30();
  }
  return result;
}

__n128 game_10f2860(float32x4_t* a1, float32x4_t* a2, __n128 result)
{

#pragma clang fp contract(off)
  unsigned __int32 v3;
  bool v4;
  unsigned int v5;
  bool v6;
  int v7;
  bool v8;
  __int64* v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;
  bool v17;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  bool v25;
  __int64 v26;
  long double v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  const char* v31;
  const char* v32;
  float32x4_t* v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  bool v37;
  __int64 v38;
  bool v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  int* v43;
  char* v44;
  long double v45;
  __int64 v46;
  __int64 v47;
  __int128 v48;
  struct {
    __int64 v49;
    __int64 v50;
  } v49_;
  struct {
    __int64 v51;
    __int64 v52;
  } v51_;
  _BYTE v53[64];
  float32x4_t v54;

  v3 = LANES128(a1[4]).n128_u32[0];
  v4 = v3 - 989295305 > 0x21 ||
       ((1LL << ((unsigned __int8)v3 + 55)) & 0x200040007LL) == 0;
  if (!v4 ||
      ((v5 = v3 + 2068235592, v6 = v5 > 0x12, v7 = (1 << v5) & 0x40003, !v6)
           ? (v8 = v7 == 0)
           : (v8 = true),
       !v8)) {
    v9 = GameData_212d448[0];
    if (*GameData_212d448[0] != 0) {
      v10 = LANES128(*(a1)).n128_u32[3];
      if (v10 <= 3) {
        v11 = *GameData_212d448[0] + 24LL * v10;
        v12 = *(_QWORD*)(v11 + 32);
        if (v12 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                    memory_order_relaxed);
          v13 = *(_QWORD*)(v11 + 40);
          if (*(_QWORD*)(v12 + 8) == -1 || v13 == 0) {
            return std___1___shared_weak_count___release_weak(v12);
          }
          v15 = *(_QWORD*)(v13 + 80);
          if (v15 == 0) {
            return std___1___shared_weak_count___release_weak(v12);
          }
          v16 = *(_QWORD*)(v13 + 88);
          v17 = *(_QWORD*)(v15 + 8) == -1 || v16 == 0;
          if (v17 || *(_QWORD*)(v12 + 8) == -1) {
            return std___1___shared_weak_count___release_weak(v12);
          }
          else {
            std___1___shared_weak_count___release_weak(v12);
            v20 = *v9 + 24LL * LANES128(*(a1)).n128_u32[2];
            v21 = *(_QWORD*)(v20 + 32);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                      memory_order_relaxed);
            v22 = *(_QWORD*)(v20 + 40);
            v23 = *(_QWORD*)(v21 + 8) == -1 || v22 == 0;
            if (v23 || (v24 = *(_QWORD*)(v22 + 80)) == 0 ||
                (*(_QWORD*)(v24 + 8) != -1 ? (v25 = *(_QWORD*)(v22 + 88) == 0)
                                           : (v25 = true),
                 v25)) {
              v26 = 0;
            }
            else if (*(_QWORD*)(v21 + 8) == -1) {
              v26 = 0;
            }
            else {
              v26 = v22;
            }
            *(__n128*)&v27 = std___1___shared_weak_count___release_weak(v21);
            v28 = *(_QWORD*)(v26 + 88);
            v29 = *(_QWORD*)(v28 + 392);
            v30 = *(_QWORD*)(v28 + 400);
            if (v30 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                        memory_order_relaxed);
            }
            v31 = *(const char**)(v29 + 11736);
            if (v31 != nullptr) {
              if (*v31 == 95) {
                v32 = v31;
              }
              else {
                v32 = nullptr;
              }
            }
            else {
              v32 = nullptr;
            }
            v33 = a1;
            if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, long double))(*(_QWORD*)v30 + 16LL))(v30,
                                                                         v27);
              std___1___shared_weak_count___release_weak(v30);
              v33 = a1;
            }
            v34 = *v9 + 24LL * LANES128(*(v33)).n128_u32[3];
            v35 = *(_QWORD*)(v34 + 32);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                                      memory_order_relaxed);
            v36 = *(_QWORD**)(v34 + 40);
            v37 = *(_QWORD*)(v35 + 8) == -1 || v36 == nullptr;
            if (v37 || (v38 = v36[10]) == 0 ||
                (*(_QWORD*)(v38 + 8) != -1 ? (v39 = v36[11] == 0)
                                           : (v39 = true),
                 v39)) {
              v36 = nullptr;
            }
            std___1___shared_weak_count___release_weak(v35);
            v40 = v36[47];
            game_combat_10906b0((void*)(&v54), a1);
            if (v32 != nullptr) {
              v41 = "Btl_Hit_Damage";
              if (*v32 != 0) {
                snprintf(v53, 64, "%s%s", "Btl_Hit_Damage", v32);
                if (GameRoutine_108e940(v53)) {
                  v41 = v53;
                }
              }
            }
            else {
              v41 = "Btl_Hit_Damage";
            }
            game_108db00((void*)(&v51_.v51), v40, v41, &v54,
                         0x1.0000000000000p+0f);
            v42 = v51_.v52;
            if (v51_.v52 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v51_.v52 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
              std___1___shared_weak_count___release_weak(v42);
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                      memory_order_acquire) &
                 1) == 0 &&
                (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
              v47 = *((_QWORD*)GameData_212c540 + 1);
              *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
              *((_QWORD*)&GameData_21a6120 + 1) = v47;
              __cxa_guard_release(&GameData_21a6130);
            }
            result = vceqq_f32(*a2, COERCE_AS(float32x4_t, GameData_21a6120));
            LANES128(result).n128_u64[0] =
                LANES64_OF(vmovn_s32(result)).n64_u64[0];
            if ((LANES128(result).n128_u8[0] & 1) == 0 ||
                (LANES128(result).n128_u8[2] & 1) == 0 ||
                (LANES128(result).n128_u8[4] & 1) == 0) {
              if ((LANES128(*(a1)).n128_u8[0] & 4) != 0 ||
                  (v43 = (int*)a1 + 3 * LANES128(*(a1)).n128_i32[3])[26] >=
                      v43[24] >> 1) {
                v44 = "Btl_Hit_Slash_H";
              }
              else {
                v44 = "Btl_Hit_Slash_L";
              }
              if (v32 != nullptr && *v32 != 0) {
                snprintf(v53, 64, "%s%s", v44, v32);
                if (GameRoutine_108e940(v53)) {
                  v44 = v53;
                }
              }
              v45 = *(long double*)&GameData_1a83610;
              v48 = GameData_1a83610;
              LODWORD(v45) =
                  COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
              GameRoutine_108dd30((void*)(&v49_.v49), v40, v44, &v54, a2,
                                  (int8x16_t*)&v48, v45);
              v46 = v49_.v50;
              if (v49_.v50 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v49_.v50 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
                return std___1___shared_weak_count___release_weak(v46);
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__n128 game_10f2cc0(float32x4_t* a1)
{

#pragma clang fp contract(off)
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  bool v7;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  float32x4_t v18;
  __n128 result;
  __int64 v20;
  float32x4_t v21;
  float32x4_t v22;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (GameData_21ec7b0 != 0) {
    v1 = LANES128(*(a1)).n128_u32[3];
    if (v1 <= 3) {
      v2 = GameData_21ec7b0 + 24LL * v1;
      v3 = *(_QWORD*)(v2 + 32);
      if (v3 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                  memory_order_relaxed);
        v4 = *(_QWORD**)(v2 + 40);
        if (*(_QWORD*)(v3 + 8) == -1 || v4 == nullptr) {
          return std___1___shared_weak_count___release_weak(v3);
        }
        v6 = v4[10];
        if (v6 == 0) {
          return std___1___shared_weak_count___release_weak(v3);
        }
        v7 = *(_QWORD*)(v6 + 8) == -1 || v4[11] == 0;
        if (v7 || *(_QWORD*)(v3 + 8) == -1) {
          return std___1___shared_weak_count___release_weak(v3);
        }
        else {
          std___1___shared_weak_count___release_weak(v3),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v9 = v4[47];
          if ((LANES128(*(a1)).n128_u32[1] & 4) != 0) {
            v10 = "Btl_Guard_Ish";
          }
          else {
            v10 = "Btl_Guard_NormalA";
          }
          game_combat_10906b0((void*)(&v21), a1),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v11 = GameData_21ec7b0 + 24LL * LANES128(*(a1)).n128_u32[3];
          v12 = *(_QWORD*)(v11 + 32);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                    memory_order_relaxed);
          v13 = *(_QWORD*)(v11 + 40);
          v14 = *(_QWORD*)(v12 + 8) == -1 || v13 == 0;
          if (v14 || (v15 = *(_QWORD*)(v13 + 80)) == 0 ||
              (*(_QWORD*)(v15 + 8) != -1 ? (v16 = *(_QWORD*)(v13 + 88) == 0)
                                         : (v16 = true),
               v16)) {
            v17 = 0;
          }
          else if (*(_QWORD*)(v12 + 8) == -1) {
            v17 = 0;
          }
          else {
            v17 = v13;
          }
          std___1___shared_weak_count___release_weak(v12),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          LANES128(v18).n128_u32[1] = 0;
          LANES128(v18).n128_u32[3] = 0;
          LANES128(v18).n128_f32[0] =
              *(float*)(v17 + 48) * 0x1.6666660000000p-1f;
          LANES128(v18).n128_f32[2] =
              *(float*)(v17 + 52) * 0x1.6666660000000p-1f;
          v22 = vaddq_f32(v21, v18);
          game_108db00((void*)(&v23_.v23), v9, v10, &v22,
                       0x1.0000000000000p+0f),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v20 = v23_.v24;
          if (v23_.v24 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            return std___1___shared_weak_count___release_weak(v20);
          }
        }
      }
    }
  }
  return result;
}

__n128 game_10f2ea0(float32x4_t* a1, __n128 result)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  bool v9;
  float32x4_t* v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  bool v18;
  float32x4_t* v19;
  __int64 v20;
  __int64 v21;
  float32x4_t* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  __int64 v32;
  bool v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  bool v39;
  __int64 v40;
  bool v41;
  float32x4_t* v42;
  __int64 v43;
  float32x4_t* v44;
  __int64 v45;
  __int64 v46;
  float32x4_t v47;
  float32x4_t* v48;
  float32x4_t v49;
  __int64 v50;
  unsigned __int64 v51;
  float32x4_t v52;
  float32x4_t v53;
  struct {
    float32x4_t v54;
    char v55;
  } v54_;

  v2 = GameData_21ec7b0;
  if (GameData_21ec7b0 == 0) {
    return result;
  }
  v3 = LANES128(*(a1)).n128_u32[2];
  if (v3 > 3 ||
      (v4 = GameData_21ec7b0 + 24LL * v3, (v5 = *(_QWORD*)(v4 + 32)) == 0)) {
    v11 = 0;
    goto LABEL_18;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(v4 + 40);
  v7 = *(_QWORD*)(v5 + 8) == -1 || v6 == 0;
  if (v7 || (v8 = *(_QWORD*)(v6 + 80)) == 0 ||
      (*(_QWORD*)(v8 + 8) != -1 ? (v9 = *(_QWORD*)(v6 + 88) == 0) : (v9 = true),
       v9)) {
    v10 = a1;
    v11 = 0;
  }
  else {
    v10 = a1;
    if (*(_QWORD*)(v5 + 8) == -1) {
      v11 = 0;
    }
    else {
      v11 = v6;
    }
  }
  result = std___1___shared_weak_count___release_weak(v5);
  v2 = GameData_21ec7b0;
  a1 = v10;
  if (GameData_21ec7b0 != 0) {
  LABEL_18:
    v12 = LANES128(*(a1)).n128_u32[3];
    if (v12 > 3) {
      return result;
    }
    v13 = v2 + 24LL * v12;
    v14 = *(_QWORD*)(v13 + 32);
    if (v14 == 0) {
      return result;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
    v15 = *(_QWORD*)(v13 + 40);
    v16 = *(_QWORD*)(v14 + 8) == -1 || v15 == 0;
    if (v16 || (v17 = *(_QWORD*)(v15 + 80)) == 0 ||
        (*(_QWORD*)(v17 + 8) != -1 ? (v18 = *(_QWORD*)(v15 + 88) == 0)
                                   : (v18 = true),
         v18)) {
      v19 = a1;
      v20 = 0;
    }
    else {
      v19 = a1;
      v20 = *(_QWORD*)(v14 + 8) == -1 ? 0LL : v15;
    }
    result = std___1___shared_weak_count___release_weak(v14);
    if (v11 == 0 || v20 == 0) {
      return result;
    }
    v21 = *(_QWORD*)(v11 + 136);
    v22 = v19;
    LANES128(v54_.v54).n128_u8[0] = 0;
    v54_.v55 = 0;
    if (v21 != 0 && *(_QWORD*)(v21 + 8) != -1) {
      v23 = *(_QWORD*)(v11 + 144);
      if (v23 != 0 && *(_BYTE*)(v23 + 784) != 0) {
        v24 = *(_QWORD*)(v23 + 768);
        v25 = *(_QWORD*)(v23 + 776);
        LANES128(v54_.v54).n128_u64[0] = v24;
        LANES128(v54_.v54).n128_u64[1] = v25;
        goto LABEL_84;
      }
    }
    v26 = GameData_21ec7b0;
    if (GameData_21ec7b0 == 0) {
      goto LABEL_82;
    }
    v27 = LANES128(*(v19)).n128_u32[2];
    if (v27 <= 3 && (v28 = GameData_21ec7b0 + 24LL * v27,
                     (v29 = *(_QWORD*)(v28 + 32)) != 0)) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                                memory_order_relaxed);
      v30 = *(_QWORD*)(v28 + 40);
      v31 = *(_QWORD*)(v29 + 8) == -1 || v30 == 0;
      if (v31 || (v32 = *(_QWORD*)(v30 + 80)) == 0 ||
          (*(_QWORD*)(v32 + 8) != -1 ? (v33 = *(_QWORD*)(v30 + 88) == 0)
                                     : (v33 = true),
           v33)) {
        v34 = 0;
      }
      else if (*(_QWORD*)(v29 + 8) == -1) {
        v34 = 0;
      }
      else {
        v34 = v30;
      }
      std___1___shared_weak_count___release_weak(v29);
      v26 = GameData_21ec7b0;
      v22 = v19;
      if (GameData_21ec7b0 == 0) {
        goto LABEL_82;
      }
    }
    else {
      v34 = 0;
    }
    v35 = LANES128(*(v22)).n128_u32[3];
    if (v35 <= 3) {
      v36 = v26 + 24LL * v35;
      v37 = *(_QWORD*)(v36 + 32);
      if (v37 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 16), 1u,
                                  memory_order_relaxed);
        v38 = *(_QWORD*)(v36 + 40);
        v39 = *(_QWORD*)(v37 + 8) == -1 || v38 == 0;
        if (v39 || (v40 = *(_QWORD*)(v38 + 80)) == 0 ||
            (*(_QWORD*)(v40 + 8) != -1 ? (v41 = *(_QWORD*)(v38 + 88) == 0)
                                       : (v41 = true),
             v41)) {
          v42 = v22;
          v43 = 0;
        }
        else {
          v42 = v22;
          v43 = *(_QWORD*)(v37 + 8) == -1 ? 0LL : v38;
        }
        std___1___shared_weak_count___release_weak(v37);
        v22 = v42;
        if (v34 != 0 && v43 != 0) {
          v44 = v42;
          v45 = CharacterBuilder_1084a50_alt1(*(_QWORD*)(v34 + 88),
                                              "Loc_TrailRoot");
          v46 = v45;
          if (v45 != 0) {
            v47 = *(float32x4_t*)(v45 + 48);
          }
          else {
            v47 = (__typeof__(v47)){0};
          }
          v52 = v47;
          v48 = (float32x4_t*)CharacterBuilder_1084a50_alt1(
              *(_QWORD*)(v43 + 88), "Loc_TrailRoot");
          v22 = v44;
          if (v46 != 0 && v48 != nullptr) {
            LANES128(v49).n128_u64[0] = 0x3F0000003F000000LL;
            LANES128(v49).n128_u64[1] = 0x3F0000003F000000LL;
            v53 = vmulq_f32(vaddq_f32(v52, v48[3]), v49);
          LABEL_83:
            v54_.v54 = v53;
          LABEL_84:
            v50 = *(_QWORD*)(v20 + 376);
            v54_.v55 = 1;
            game_108db00((void*)(&v53), v50, "Btl_Guard_Parry", &v54_.v54,
                         0x1.0000000000000p+0f);
            v51 = LANES128(v53).n128_u64[1];
            if (LANES128(v53).n128_u64[1] != 0 &&
                atomic_fetch_add(
                    (atomic_ullong* volatile)(LANES128(v53).n128_u64[1] + 8),
                    0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(unsigned __int64))(*(_QWORD*)v51 + 16LL))(v51);
              return std___1___shared_weak_count___release_weak(v51);
            }
            return result;
          }
        }
      }
    }
  LABEL_82:
    game_combat_10906b0((void*)(&v53), v22);
    goto LABEL_83;
  }
  return result;
}

__n128 game_10f3240(float32x4_t* a1)
{

#pragma clang fp contract(off)
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  bool v7;
  __int64 v9;
  char* v10;
  __int64 v11;
  __n128 result;
  __int64 v13;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  float32x4_t v16;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (GameData_21ec7b0 != 0) {
    v1 = LANES128(*(a1)).n128_u32[3];
    if (v1 <= 3) {
      v2 = GameData_21ec7b0 + 24LL * v1;
      v3 = *(_QWORD*)(v2 + 32);
      if (v3 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                  memory_order_relaxed);
        v4 = *(_QWORD*)(v2 + 40);
        if (*(_QWORD*)(v3 + 8) == -1 || v4 == 0) {
          return std___1___shared_weak_count___release_weak(v3);
        }
        v6 = *(_QWORD*)(v4 + 80);
        if (v6 == 0) {
          return std___1___shared_weak_count___release_weak(v3);
        }
        v7 = *(_QWORD*)(v6 + 8) == -1 || *(_QWORD*)(v4 + 88) == 0;
        if (v7 || *(_QWORD*)(v3 + 8) == -1) {
          return std___1___shared_weak_count___release_weak(v3);
        }
        else {
          std___1___shared_weak_count___release_weak(v3),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          game_combat_10906b0((void*)(&v16), a1),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v9 = *(_QWORD*)(*(_QWORD*)(GameData_21ec7b0 + 8) +
                          96LL * *(int*)(v4 + 96) + 256);
          if (v9 != 0) {
            v10 = "Btl_Guard_MonsterA";
            v11 = *(_DWORD*)(v9 + 1872) & 0xFFF;
            if ((_DWORD)v11 != 0 &&
                *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                     8 * v11) +
                          273LL) == 0) {
              v10 = "Btl_Guard_MonsterB";
            }
          }
          else {
            v10 = "Btl_Guard_MonsterA";
          }
          game_108db00((void*)(&v14_.v14), *(_QWORD*)(v4 + 376), v10, &v16,
                       0x1.0000000000000p+0f),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v13 = v14_.v15;
          if (v14_.v15 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            return std___1___shared_weak_count___release_weak(v13);
          }
        }
      }
    }
  }
  return result;
}

unsigned __int64 game_10f8580(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 i;
  __int64 v6;
  unsigned __int64 result;
  __int64 v8;
  unsigned __int64 v9;
  _BYTE* v10;
  unsigned __int64 v11;
  _BYTE* v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  _BYTE* v16;
  unsigned __int64 v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  unsigned __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64* v34;
  unsigned __int64* v35;
  char* v36;
  char* v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v42;
  unsigned __int64 v43;
  char* v44;
  _QWORD* v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = a2 + 176;
  for (i = 0; i != 12; ++i) {
    v8 = v2 + 72 * i;
    v9 = *(unsigned __int8*)(v8 + 8);
    v10 = (_BYTE*)(v8 + 9);
    v13 = v8 + 16;
    v11 = *(_QWORD*)(v8 + 16);
    v12 = *(_BYTE**)(v13 + 8);
    v14 = (v9 & 1) == 0;
    v15 = v9 >> 1;
    if (v14) {
      v16 = v10;
    }
    else {
      v16 = v12;
    }
    if (v14) {
      v11 = v15;
    }
    if (v11 != 0) {
      v17 = v11;
      while (v17 != 0) {
        v18 = &v16[v17--];
        if (*(v18 - 1) == 47) {
          if (v17 != -1) {
            if (v17 >= v11) {
              String_60a250("string_view::substr"),
                  result = COERCE_AS(
                      __typeof__(result),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v19 = COERCE_AS(
                      __typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v16 += v17 + 1;
          }
          break;
        }
      }
    }
    result = GameRoutine_10f8960(v16, (__int64**)(a2 + 11656)),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (result != 0) {
      v20 = result;
      if (v19 != 0) {
        v21 = *(_QWORD**)(a2 + 11688);
        v22 = *(_QWORD*)(a2 + 11696);
        if ((unsigned __int64)v21 < v22) {
          *v21 = v19;
          v6 = (__int64)(v21 + 1);
        }
        else {
          v23 = *(_QWORD*)(a2 + 11680);
          v24 = (char*)v21 - v23;
          v25 = ((__int64)v21 - v23) >> 3;
          v26 = v25 + 1;
          if ((unsigned __int64)(v25 + 1) >> 61 != 0) {
            GameRoutine_60f930(),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v19 =
                    COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v27 = v22 - v23;
          if (v27 >> 2 > v26) {
            v26 = v27 >> 2;
          }
          if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
            v28 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v28 = v26;
          }
          if (v28 != 0) {
            if (v28 >> 61 != 0) {
              GameRoutine_60a210_alt1(),
                  result = COERCE_AS(
                      __typeof__(result),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v19 = COERCE_AS(
                      __typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v29 = v19;
            v30 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v19 = v29;
          }
          else {
            v30 = 0;
          }
          v31 = v30 + 8 * v28;
          v32 = (__int64)&v24[v30 + -8 * v25];
          *(_QWORD*)&v24[v30] = v19;
          v6 = (__int64)&v24[v30 + 8];
          memcpy(v32, v23, v24),
              result =
                  COERCE_AS(__typeof__(result),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *(_QWORD*)(a2 + 11680) = v32;
          *(_QWORD*)(a2 + 11688) = v6;
          *(_QWORD*)(a2 + 11696) = v31;
          if (v23 != 0) {
            v33 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v33 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v33),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v19 =
                    COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        *(_QWORD*)(a2 + 11688) = v6;
      }
      result = GameRoutine_10f8ba0(a1, v20),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v34 = *(unsigned __int64**)(a2 + 11656);
  v35 = *(unsigned __int64**)(a2 + 11664);
  if (v34 != v35) {
    while (1) {
      result = *v34;
      v36 = *(char**)(a2 + 11680);
      v37 = *(char**)(a2 + 11688);
      if (v36 == v37) {
        goto LABEL_39;
      }
      v38 = v37 - v36 - 8;
      if ((~(_BYTE)v38 & 0x18) != 0) {
        break;
      }
    LABEL_46:
      if (v38 >= 0x18) {
        v36 += 16;
        while (1) {
          if (*((_QWORD*)v36 - 2) == result) {
            v36 -= 16;
            goto LABEL_39;
          }
          if (*((_QWORD*)v36 - 1) == result) {
            v36 -= 8;
            goto LABEL_39;
          }
          if (*(_QWORD*)v36 == result) {
            goto LABEL_39;
          }
          if (*((_QWORD*)v36 + 1) == result) {
            break;
          }
          v44 = v36 + 16;
          v36 += 32;
          if (v44 == v37) {
            goto LABEL_47;
          }
        }
        v36 += 8;
      LABEL_39:
        if (v36 != v37) {
          goto LABEL_40;
        }
      }
    LABEL_47:
      result = game_HashString_alt1(result),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (result != 0) {
        v40 = *(_QWORD*)(GameData_21c9c48 + 96);
        if (v40 != 0 && *(_QWORD*)(GameData_21c9c48 + 112) != 0) {
          v42 = v40 - 1;
          if ((v40 & (v40 - 1)) != 0) {
            v43 = result;
            if (result >= v40) {
              v43 = result % v40;
            }
          }
          else {
            v43 = v42 & result;
          }
          v45 = *(_QWORD**)(*(_QWORD*)(GameData_21c9c48 + 88) + 8 * v43);
          if (v45 != nullptr) {
            v46 = (_QWORD*)*v45;
            if (v46 != nullptr) {
              if ((v40 & v42) == 0) {
                while (1) {
                  v48 = v46[1];
                  if (v48 == result) {
                    if (v46[2] == result) {
                      goto LABEL_81;
                    }
                  }
                  else if ((v48 & v42) != v43) {
                    goto LABEL_40;
                  }
                  v46 = (_QWORD*)*v46;
                  if (v46 == nullptr) {
                    goto LABEL_40;
                  }
                }
              }
              do {
                v47 = v46[1];
                if (v47 == result) {
                  if (v46[2] == result) {
                  LABEL_81:
                    v49 = v46[3];
                    if (v49 != 0) {
                      result = GameRoutine_10f8ba0(a1, v49),
                      v19 = COERCE_AS(
                          __typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    break;
                  }
                }
                else {
                  if (v47 >= v40) {
                    v47 %= v40;
                  }
                  if (v47 != v43) {
                    break;
                  }
                }
                v46 = (_QWORD*)*v46;
              } while (v46 != nullptr);
            }
          }
        }
      }
    LABEL_40:
      if (++v34 == v35) {
        return result;
      }
    }
    v39 = ((unsigned __int8)((unsigned int)v38 >> 3) + 1) & 3;
    while (*(_QWORD*)v36 != result) {
      v36 += 8;
      if (--v39 == 0) {
        goto LABEL_46;
      }
    }
    goto LABEL_39;
  }
  return result;
}

float game_1109f50(__int64 a1, float result)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  bool v7;
  unsigned int v9;
  __int64 v10;
  int v12;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  bool v33;
  float v34;
  float v35;
  float v36;
  float v37;
  __int64 v38;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  float v43;
  long double v44;
  _QWORD v45[3];

  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_DWORD*)(*(_QWORD*)(v4 + 368) + 120LL);
  if (v5 <= 309207208) {
    if (v5 > 309207022) {
      if (v5 != 309207023 && v5 != 309207191) {
        goto LABEL_18;
      }
    }
    else if (v5 != -371817049 && v5 != 82343) {
    LABEL_18:
      v45[1] = v2;
      v45[2] = v3;
      v9 = *(_DWORD*)(v4 + 96) - 1;
      if (v9 > 2) {
        v10 = 2;
      }
      else {
        v10 = GameData_1bb1cc8[v9];
      }
      v15 = GameData_21ec7b0 + 24 * v10;
      v16 = *(_QWORD*)(v15 + 32);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                memory_order_relaxed);
      v17 = *(_QWORD*)(v15 + 40);
      v18 = *(_QWORD*)(v16 + 8) == -1 || v17 == 0;
      if (v18 || (v19 = *(_QWORD*)(v17 + 80)) == 0 ||
          (*(_QWORD*)(v19 + 8) != -1 ? (v20 = *(_QWORD*)(v17 + 88) == 0)
                                     : (v20 = true),
           v20)) {
        v21 = a1;
        v22 = 0;
      }
      else {
        v21 = a1;
        if (*(_QWORD*)(v16 + 8) == -1) {
          v22 = 0;
        }
        else {
          v22 = v17;
        }
      }
      std___1___shared_weak_count___release_weak_alt2();
      v23 = GameData_21ec7b0 +
            24LL * (((*(_DWORD*)(v22 + 96) - 1) & 0xFFFFFFFD) != 0);
      v24 = *(_QWORD*)(v23 + 32);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                memory_order_relaxed);
      v25 = *(_QWORD*)(v23 + 40);
      v26 = *(_QWORD*)(v24 + 8) == -1 || v25 == 0;
      if (v26 || (v27 = *(_QWORD*)(v25 + 80)) == 0 ||
          (*(_QWORD*)(v27 + 8) != -1 ? (v28 = *(_QWORD*)(v25 + 88) == 0)
                                     : (v28 = true),
           v28)) {
        v29 = 0;
      }
      else if (*(_QWORD*)(v24 + 8) == -1) {
        v29 = 0;
      }
      else {
        v29 = v25;
      }
      std___1___shared_weak_count___release_weak_alt2();
      v30 = *(float*)(v29 + 44) - *(float*)(v22 + 44);
      v31 = *(float*)(v29 + 40) - *(float*)(v22 + 40);
      v32 = (float)(PSEUDO_UNFUSED(v30 * v30)) + (float)(v31 * v31);
      v33 = v32 < 0x1.0000000000000p-23f;
      v34 = 0x1.0000000000000p+0f / sqrtf(v32);
      v35 = v31 * v34;
      v36 = v30 * v34;
      if (v33) {
        v35 = 0x0.0p+0f;
        v36 = 0x1.0000000000000p+0f;
      }
      v37 =
          (float)((float)((float)-(
                              float)(*(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c190) -
                                     (float)((float)(*(float*)((char*)((
                                                                   _UNKNOWN**)0x8LL) +
                                                               (_QWORD)
                                                                   GameData_212c190 +
                                                               4) +
                                                     (float)((float)-(
                                                                 float)(*(float*)((char*)((
                                                                                      _UNKNOWN**)0x8LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c190) -
                                                                        (float)((float)(*((float*)
                                                                                              GameData_212c190 +
                                                                                          1) -
                                                                                        (float)(*(float*)
                                                                                                    GameData_212c190 *
                                                                                                0x1.f315cc0000000p-2f)) *
                                                                                0x1.f315cc0000000p-2f)) *
                                                             0x1.f315cc0000000p-2f)) *
                                             0x1.f315cc0000000p-2f)) *
                          0x1.f315cc0000000p-2f) +
                  0x1.0000000000000p+0f) *
          -0x1.6571840000000p-1f;
      v38 = *(_QWORD*)(v21 + 8);
      v39 = *(_QWORD*)(v38 + 808);
      v40 =
          (float)((float)-(
                      float)(*(float*)((char*)((__int128*)0x10LL) +
                                       (_QWORD)GameData_212c188) -
                             (float)((float)(*(float*)((char*)((
                                                           _UNKNOWN**)0x8LL) +
                                                       (_QWORD)
                                                           GameData_212c188 +
                                                       4) +
                                             (float)((float)-(
                                                         float)(*(float*)((char*)((
                                                                              _UNKNOWN**)0x8LL) +
                                                                          (_QWORD)
                                                                              GameData_212c188) -
                                                                (float)((float)(*((float*)
                                                                                      GameData_212c188 +
                                                                                  1) -
                                                                                (float)(*(float*)
                                                                                            GameData_212c188 *
                                                                                        0x1.f315cc0000000p-2f)) *
                                                                        0x1.f315cc0000000p-2f)) *
                                                     0x1.f315cc0000000p-2f)) *
                                     0x1.f315cc0000000p-2f)) *
                  0x1.f315cc0000000p-2f) +
          0x1.0000000000000p+0f;
      v41 = (float)(PSEUDO_UNFUSED(v36 * v37)) + (float)(v35 * v40);
      v42 = (float)(PSEUDO_UNFUSED(v36 * v40)) - (float)(v35 * v37);
      v43 = *(float*)(v39 + 44);
      *(float*)v45 = (float)(PSEUDO_UNFUSED(v41 * 0x1.3880000000000p+13f)) +
                     *(float*)(v39 + 40);
      *((float*)v45 + 1) =
          (float)(PSEUDO_UNFUSED(v42 * 0x1.3880000000000p+13f)) + v43;
      GameRoutine_106b140(v38 + 800, (float*)v45, 0x1.3333340000000p-3f);
      LODWORD(v44) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 8) + 368LL) + 152LL) = 1067030938;
      return CharacterAnimator_1079580(*(_QWORD*)(*(_QWORD*)(v21 + 8) + 368LL),
                                       -2109400973, v44, -0x1.0000000000000p+0f,
                                       0x1.0000000000000p+0f);
    }
  }
  else if ((unsigned int)(v5 - 603384300) > 0x12 ||
           ((1 << (v5 + 20)) & 0x40007) == 0) {
    v7 = (unsigned int)(v5 - 603384486) > 0x12 ||
         ((1 << (v5 + 90)) & 0x40007) == 0;
    if (v7 && v5 != 309207209) {
      goto LABEL_18;
    }
  }
  v12 = *(_DWORD*)(a1 + 16);
  if (v12 != 1 && v12 != 3) {
    if (v12 == 2) {
      v14 = 3;
    }
    else {
      v14 = 1;
    }
    *(_DWORD*)(a1 + 16) = v14;
  }
  return result;
}

float game_110d7c0(float32x4_t* a1, float32x4_t* a2, float32x4_t* a3,
                   float32x4_t** a4, float a5)
{
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
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
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float v33;
  float32x4_t* v34;
  float32x4_t* v35;
  float v36;
  float32x4_t v37;
  float32x4_t v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  float32x4_t v46;
  int8x16_t v47;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55[4];
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  float v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  char v65;
  char v66;
  __int64 v67;
  int v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
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
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;

  v58 = 1065353216;
  v61 = 0x4210000042480000LL;
  v62 = 0x4180000041C00000LL;
  v9 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
  v10 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
  v63 = 1091567616;
  v67 = 1092616192;
  v11 = *(_QWORD*)GameData_212c2a0;
  v12 = *((_QWORD*)GameData_212c2a0 + 1);
  LANES128(v70).n128_u64[0] = v9;
  LANES128(v70).n128_u64[1] = v10;
  LANES128(v69).n128_u64[0] = v11;
  LANES128(v69).n128_u64[1] = v12;
  v13 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                    (_QWORD)GameData_212c2a0);
  v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
  v14 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
  LANES128(v72).n128_u64[0] = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                                          (_QWORD)GameData_212c2a0);
  LANES128(v72).n128_u64[1] = v13;
  LANES128(v71).n128_u64[0] = v15;
  LANES128(v71).n128_u64[1] = v14;
  v56 = 0;
  v57 = 0;
  v68 = 0;
  v92 = 0;
  v93 = 0;
  v89 = 0;
  v90 = 0;
  v16 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2b0);
  v18 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0);
  v17 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0 + 8);
  v20 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2b0);
  v19 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                    (_QWORD)GameData_212c2b0);
  v22 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2b0);
  v21 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2b0 + 8);
  v23 = *(_QWORD*)GameData_212c2b0;
  v75 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2b0 + 8);
  v76 = v17;
  v24 = *(_QWORD*)GameData_212c2b0;
  v25 = *((_QWORD*)GameData_212c2b0 + 1);
  v81 = v23;
  v82 = v16;
  v73 = v24;
  v74 = v25;
  v26 =
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)GameData_212c2b0);
  v79 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2b0);
  v80 = v19;
  v28 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0 + 8);
  v27 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0 + 16);
  v29 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)GameData_212c2b0);
  v85 = v22;
  v86 = v26;
  v77 = v27;
  v78 = v21;
  v83 = v18;
  v84 = v28;
  v87 = v20;
  v88 = v29;
  v65 = 1;
  v30 = *a1;
  v31 = *a2;
  v66 = 1;
  v60 = a5;
  v59 = 0;
  v55[0] = COERCE_AS(float32x4_t, (unsigned __int64)(GameData_212e438 + 16));
  v55[1] = v30;
  v55[2] = v31;
  v32 = *a3;
  v64 = 0x469C40003DCCCCCDLL;
  v94 = 1023;
  v90 = 1023;
  v91 = 0;
  v55[3] = v32;
  GameRoutine_b3aee0(v55);
  v51 = v70;
  v53 = v69;
  v49 = v72;
  v50 = v71;
  v33 = tanf((float)(a5 * 0x1.1df46a0000000p-6f) * 0x1.0000000000000p-1f);
  v34 = *a4;
  v35 = a4[1];
  if (*a4 == v35) {
    v36 = 0x0.0p+0f;
  }
  else {
    v36 = 0x0.0p+0f;
    do {
      v37 = *v34++;
      v38 = vaddq_f32(
          v49, vmlaq_laneq_f32(
                   vmlaq_lane_f32(
                       vmulq_n_f32(v53, LANES128(v37).n128_f32[0]), v51,
                       COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]), 1),
                   v50, v37, 2));
      v39 = (float)(LANES128(v37).n128_f32[3] +
                    fabsf(LANES128(v38).n128_f32[0])) /
            (float)(v33 * 0x1.c71c720000000p+0f);
      v40 = (float)(LANES128(v37).n128_f32[3] +
                    fabsf(LANES128(v38).n128_f32[1])) /
            v33;
      if (v39 >= v40) {
        v40 = v39;
      }
      v41 = LANES128(v38).n128_f32[2] + v40;
      if (v41 > v36) {
        v36 = v41;
      }
    } while (v34 != v35);
  }
  v52 = *a2;
  v54 = *a1;
  v42 = v91;
  LANES128(v55[0]).n128_u64[0] = (unsigned __int64)(GameData_212e740[0] + 2);
  if (v91 != 0) {
    v43 = v92;
    if (v91 == v92) {
      goto LABEL_17;
    }
    do {
      v44 = *(_QWORD*)(v43 - 8);
      *(_QWORD*)(v43 - 8) = 0;
      if (v44 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v44 + 8LL))(v44);
      }
      v43 -= 24;
    } while (v43 != v42);
    v92 = v42;
    v42 = v91;
    if (v91 != 0) {
    LABEL_17:
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v42);
    }
  }
  v46 = vsubq_f32(v54, v52);
  v47 = vmulq_f32(v46, v46);
  LANES128(v47).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v47, v47, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
          .n64_u64[0];
  return v36 +
         LANES64_OF(vsqrt_f32(vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]))))
             .n64_f32[0];
}

__int64 game_111a3e0(__int64 a1, unsigned int a2, unsigned int a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 result;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  long double v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  struct {
    _QWORD v20[4];
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v20_;
  __int64 v25;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_QWORD*)(a1 + 128) == 0 || (v6 = *(_QWORD*)(a1 + 136)) == 0 ||
      (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 40LL))(v6) == 0 ||
      GameData_2177d68() == 0 || (result = GameData_21779a0()) == 0) {
    v20_.v23 = 0;
    v20_.v24 = 0;
    v20_.v21 = 0;
    v20_.v22 = 0;
    __builtin_memset(v20_.v20, 0, sizeof(v20_.v20));
    GameRoutine_5fc420((__int64)v20_.v20),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    HIDWORD(v20_.v20[2]) = a2;
    LODWORD(v20_.v20[3]) = a3;
    *(_QWORD*)((char*)&v20_.v20[1] + 4) = 0x2000000B06LL;
    v8 = game_g_frame_clock_ptr[0];
    v9 = GameRoutine_606220((__int64*)(*game_g_frame_clock_ptr[0] + 568),
                            (__int64)v20_.v20),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (*(_QWORD*)(a1 + 128) == 0) {
      v20_.v20[0] = v9;
      LODWORD(v20_.v20[1]) = 36;
      HIDWORD(v20_.v20[1]) = *(_DWORD*)GameData_220b680;
      GameRoutine_53b30((void*)(&v25), (__int64)v20_.v20),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v14 = v25;
      v15 = *(_QWORD*)(a1 + 128);
      v25 = 0;
      *(_QWORD*)(a1 + 128) = v14;
      if (v15 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v16 = v25;
        v25 = 0;
        if (v16 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    }
    v10 = *(_QWORD*)(a1 + 136);
    if (v10 == 0) {
      v20_.v20[0] = __PAIR64__(a3, a2);
      v20_.v20[1] = 0x100000001LL;
      *(_DWORD*)((char*)&v20_.v20[2] + 7) = 0;
      v20_.v20[2] = 0x500000000LL;
      v20_.v21 = *(_QWORD*)(a1 + 128);
      v20_.v22 = *(_QWORD*)(*(_QWORD*)(*v8 + 552) + 16LL);
      LOBYTE(v20_.v20[3]) = 1;
      GameRoutine_53c20((void*)(&v25), (__int64)v20_.v20),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v12 = v25;
      if (v25 != 0) {
        v13 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v13[2] = 0;
        v13[3] = v12;
        *v13 = &GameData_1fc16a0;
        v13[1] = 0;
      }
      else {
        v13 = nullptr;
      }
      v17 = *(_QWORD*)(a1 + 144);
      v25 = 0;
      *(_QWORD*)(a1 + 136) = v12;
      *(_QWORD*)(a1 + 144) = v13;
      if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(__n128*)&v11 = std___1___shared_weak_count___release_weak_alt2(),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v18 = v25;
      v25 = 0;
      if (v18 != 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v18 + 8LL))(v18, v11),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v10 = *(_QWORD*)(a1 + 136);
    }
    *(_WORD*)(a1 + 120) = a2;
    *(_WORD*)(a1 + 122) = a3;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 40LL))(v10),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(a1 + 112) = v19;
  }
  return result;
}

float game_111e3c0(__int64 a1)
{
  unsigned int v1;
  __int64 v2;
  __int64 v4;
  float* v5;
  float* v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  bool v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float* v28;
  float v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  int v35;
  int v36;
  bool v37;
  __int64 v38;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  float v43;
  bool v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v53;
  float v54;
  float v55;

  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = *(unsigned __int8*)(a1 + 72);
  v2 = 32;
  if (*(_BYTE*)(a1 + 72) != 0) {
    v4 = 48;
  }
  else {
    v4 = 32;
  }
  if (*(_BYTE*)(a1 + 72) == 0) {
    v2 = 48;
  }
  v5 = (float*)(a1 + v4);
  v6 = (float*)(a1 + v2);
  v7 = v6[1];
  v8 = v7 - *(float*)(a1 + v4 + 4);
  v9 = *v6 - *(float*)(a1 + v4);
  v10 = (float)(PSEUDO_UNFUSED(v8 * v8)) + (float)(v9 * v9);
  if (v10 >= 0x1.0000000000000p-23f) {
    v13 = 0x1.0000000000000p+0f / sqrtf(v10);
    v12 = v9 * v13;
    v11 = v8 * v13;
  }
  else {
    v11 = 0x1.0000000000000p+0f;
    v12 = 0x0.0p+0f;
  }
  v14 = *(_QWORD*)(a1 + 8);
  v15 = 0x1.2000000000000p+3f;
  if ((*(_DWORD*)(v14 + 112) & 0x100000) == 0) {
    v15 = 0x1.8000000000000p+2f;
  }
  *v5 = *v6 - (float)(PSEUDO_UNFUSED(v12 * v15));
  v5[1] = v7 - (float)(PSEUDO_UNFUSED(v11 * v15));
  GameRoutine_111e780(v14, v1),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w"));
  v17 = v16;
  GameRoutine_111e780(*(_QWORD*)(a1 + 8), v1 ^ 1),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w"));
  v19 = v17 + v18;
  v20 = *(_BYTE*)(a1 + 72) == 0;
  v21 = 68;
  v22 = *v5 - (float)(PSEUDO_UNFUSED(v12 * v19));
  v23 = v5[1] - (float)(PSEUDO_UNFUSED(v11 * v19));
  if (*(_BYTE*)(a1 + 72) != 0) {
    v21 = 64;
  }
  *v5 = v22;
  v5[1] = v23;
  v24 = *(float*)(a1 + v21);
  v25 = 40;
  if (!v20) {
    v25 = 56;
  }
  v26 = 44;
  if (!v20) {
    v26 = 60;
  }
  GameRoutine_111e8d0(
      (float*)a1, (float)(v24 * 0x1.0000000000000p+2f) * *(float*)(a1 + v25),
      (float)(v24 * 0x1.0000000000000p+2f) * *(float*)(a1 + v26)),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_BYTE*)(*(_QWORD*)a1 + 78LL) == 1) {
    v27 = 56;
    if (*(_BYTE*)(a1 + 72) != 0) {
      v27 = 40;
    }
    v28 = (float*)(a1 + v27);
    v30 = *(float*)(a1 + v27);
    v29 = *(float*)(a1 + v27 + 4);
    GameRoutine_111e8d0((float*)a1, v29 * -0x1.0000000000000p+1f, v30 + v30),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w"));
    GameRoutine_111e8d0((float*)a1, v29 + v29, v30 * -0x1.0000000000000p+1f),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w"));
    GameRoutine_111e8d0((float*)a1, *v28 * -0x1.c000000000000p+2f,
                        v28[1] * -0x1.c000000000000p+2f),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v31 = *(_QWORD*)(a1 + 8);
  v32 = *(_QWORD*)(v31 + 32);
  v33 = *(_QWORD*)(v31 + 40);
  if (v32 != v33) {
    v34 = 0;
    do {
      v35 = *(_DWORD*)(v32 + 4);
      v32 += 144;
      v34 += (v35 & 4) != 0;
    } while (v32 != v33);
    if (v34 > 1) {
      GameRoutine_111e8d0((float*)a1,
                          *(float*)(a1 + 56) * 0x1.4000000000000p+2f,
                          *(float*)(a1 + 60) * 0x1.4000000000000p+2f),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w"));
    }
  }
  v36 = *(_DWORD*)(a1 + 76);
  if (v36 != 0) {
    v37 = v36 <= 0;
    v38 = 56;
    if (!v37) {
      v38 = 40;
    }
    v39 = 60;
    if (!v37) {
      v39 = 44;
    }
    GameRoutine_111e8d0((float*)a1, *(float*)(a1 + v38) * 0x1.0000000000000p+3f,
                        *(float*)(a1 + v39) * 0x1.0000000000000p+3f),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v40 = *(float*)(a1 + 60) - *(float*)(a1 + 44);
  v41 = *(float*)(a1 + 56) - *(float*)(a1 + 40);
  v42 = (float)(PSEUDO_UNFUSED(v40 * v40)) + (float)(v41 * v41);
  v43 = 0x1.0000000000000p+0f;
  v44 = v42 < 0x1.0000000000000p-23f;
  v45 = 0x1.0000000000000p+0f / sqrtf(v42);
  v46 = v41 * v45;
  v47 = v40 * v45;
  if (v44) {
    v46 = 0x0.0p+0f;
    v47 = 0x1.0000000000000p+0f;
  }
  v48 = 0x1.2d97c80000000p+1f;
  if ((*(_DWORD*)(*(_QWORD*)(a1 + 8) + 112LL) & 0x80000) == 0) {
    v48 = 0x1.921fb60000000p-1f;
  }
  v49 = v48 +
        (float)(roundf(v48 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v49 <= 0x1.921fb60000000p+0f) {
    if (v49 >= -0x1.921fb60000000p+0f) {
      goto LABEL_41;
    }
    v50 = -0x1.921fb60000000p+1f;
  }
  else {
    v50 = 0x1.921fb60000000p+1f;
  }
  v49 = v50 - v49;
  v43 = -0x1.0000000000000p+0f;
LABEL_41:
  v51 = 0x1.4000000000000p+2f;
  if (*(int*)(*(_QWORD*)a1 + 52LL) > 1 || *(_DWORD*)(*(_QWORD*)a1 + 48LL) > 1) {
    v51 = 0x1.0000000000000p+3f;
  }
  v53 = v49 * v49;
  v54 =
      v49 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v49 *
                                                                                                    v49))) *
                                                                            (float)(v49 *
                                                                                    v49))) *
                                                         (float)(v49 * v49))) *
                                         (float)(v49 * v49))) *
                      (float)(v49 * v49)) +
              0x1.0000000000000p+0f);
  v55 =
      v43 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            v53)) *
                                                                            v53)) *
                                                         v53)) *
                                         v53)) *
                      v53) +
              0x1.0000000000000p+0f);
  return GameRoutine_111e8d0(
      (float*)a1,
      v51 * (float)((float)(PSEUDO_UNFUSED(v47 * v54)) + (float)(v46 * v55)),
      v51 * (float)((float)(PSEUDO_UNFUSED(v47 * v55)) - (float)(v46 * v54)));
}

float game_111f520(char a1, float a2, long double a3, float a4)
{
  float v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v10;
  float v12;
  float v13;
  float v14;
  bool v15;
  float v16;
  float v17;

  v6 = *(float*)&a3 - a2;
  *(float*)&a3 = vabds_f32(*(float*)&a3, a2);
  v7 = *(_QWORD*)GameData_212d270;
  v8 = 164;
  if ((a1 & 1) != 0) {
    v8 = 172;
  }
  v9 = *(float*)(v7 + v8);
  v10 = 168;
  if ((a1 & 1) != 0) {
    v10 = 176;
  }
  v12 = GameRoutine_10a00a0(v9, a3, *(float*)(v7 + v10));
  v13 = 0x1.0000000000000p+0f;
  if (v12 <= 0x1.0000000000000p+0f) {
    v14 = v12;
  }
  else {
    v14 = 0x1.0000000000000p+0f;
  }
  v15 = v12 < 0x0.0p+0f;
  v16 = 0x0.0p+0f;
  if (!v15) {
    v16 = v14;
  }
  v17 = *(float*)(v7 + 180) +
        (float)((float)(*(float*)(v7 + 184) - *(float*)(v7 + 180)) *
                (float)((float)(v16 * v16) *
                        (float)((float)(v16 * -0x1.0000000000000p+1f) +
                                0x1.8000000000000p+1f)));
  if (v17 <= 0x0.0p+0f) {
    v13 = 0x0.0p+0f;
  }
  else if (v17 < 0x1.0000000000000p+0f) {
    v13 = 0x0.0p+0f;
    if (a4 > 0x0.0p+0f) {
      v13 = 0x1.0000000000000p+0f -
            powf(0x1.0000000000000p+0f - v17, a4 * 0x1.df851e0000000p+4f);
    }
  }
  return a2 + (float)(v6 * v13);
}

void game_111f610(float32x4_t* a1)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64 v3;
  float32x4_t* v5;
  float32x4_t v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int64 v13;
  __int64 v14;
  int v15;
  const char* v16;
  char* v17;
  __int64 v18;
  float32x4_t v19;
  float32x4_t v20;
  _DWORD* v21;
  float32x4_t v22;
  __int64 v23;
  __int64 v24;
  float v25;
  _DWORD* v26;
  float v27;
  float v28;
  float32x4_t v29;
  int v30;
  unsigned __int64 v31;
  __int64 v32;
  int v33;
  bool v34;
  int v35;
  __int64 v37;
  _DWORD* v38;
  float32x4_t v39;
  __int64 v40;
  __int64 v41;
  float32x4_t v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  int v50;
  unsigned __int64 v51;
  __int64 v52;
  float v53;
  __int64 v54;
  float v55;
  float v56[2];
  __int64 v57;

  v1 = LANES128(*(a1)).n128_u64[1];
  v2 = *(_QWORD*)(v1 + 80);
  if (v2 == 0) {
    return;
  }
  v3 = *(_QWORD*)(v1 + 88);
  if (*(_QWORD*)(v2 + 8) == -1 || v3 == 0) {
    return;
  }
  v5 = *(float32x4_t**)(v3 + 8);
  v57 = 0x3F80000000000000LL;
  v7 = v5[29];
  LODWORD(v8) = LANES128(v5[29]).n128_u64[1];
  v9 = vmuls_lane_f32(v8, v7, 2) +
       (float)(LANES128(v7).n128_f32[0] * LANES128(v7).n128_f32[0]);
  if (v9 >= 0x1.0000000000000p-23f) {
    v12 = 0x1.0000000000000p+0f / sqrtf(v9);
    v11 = LANES128(v7).n128_f32[0] * v12;
    v10 = v8 * v12;
  }
  else {
    v10 = 0x1.0000000000000p+0f;
    v11 = 0x0.0p+0f;
  }
  v56[0] = v11;
  v56[1] = v10;
  LANES128(a1[6]).n128_f32[0] = game_combat_e401e0((float*)&v57, v56);
  v13 = *(_QWORD*)(v3 + 392);
  v14 = *(_QWORD*)(v3 + 400);
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    v15 = *(_DWORD*)(v13 + 11784);
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak_alt2();
    }
  }
  else {
    v15 = *(_DWORD*)(v13 + 11784);
  }
  v16 = "-Loc_C_Center";
  if (v15 == 32) {
    v16 = "-Jnt_C_Head";
  }
  if ((*(_DWORD*)(v3 + 340) & 0x400) != 0) {
    v17 = "Jnt_C_Hip";
  }
  else {
    v17 = (char*)v16;
  }
  v18 = CharacterBuilder_1084a50_alt1(v3, v17);
  if (v18 == 0) {
    v21 = *(_DWORD**)(v3 + 8);
    LANES128(a1[3]).n128_u32[0] = v21[76];
    LANES128(a1[3]).n128_u32[1] = v21[77];
    v22 = a1[3];
    LANES128(v22).n128_u64[1] = (unsigned int)v21[78];
    a1[3] = v22;
    v24 = *(_QWORD*)(v3 + 392);
    v23 = *(_QWORD*)(v3 + 400);
    if (v23 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak_alt2();
      }
    }
    v25 = (float)(PSEUDO_UNFUSED(*(float*)(*(_QWORD*)(v24 + 11792) + 36LL) *
                                 *(float*)(v24 + 32))) +
          LANES128(a1[3]).n128_f32[1];
    LANES128(a1[3]).n128_f32[1] = v25;
    goto LABEL_64;
  }
  if ((*(_BYTE*)(v3 + 341) & 4) != 0) {
    v26 = *(_DWORD**)(v3 + 8);
    LANES128(a1[5]).n128_u32[0] = v26[76];
    LANES128(a1[5]).n128_u32[1] = v26[77];
    v20 = a1[5];
    LANES128(v20).n128_u32[2] = v26[78];
  }
  else {
    v19 = *(float32x4_t*)(v18 + 48);
    LANES128(a1[5]).n128_u64[0] = LANES128(v19).n128_u64[0];
    v20 = a1[5];
    LANES128(v20).n128_u32[2] = LANES128(v19).n128_u32[2];
  }
  LANES128(v20).n128_u32[3] = 0;
  a1[5] = v20;
  v27 = *(float*)(v3 + 336);
  if (v27 != 0x1.0000000000000p+0f) {
    v28 = *(float*)(*(_QWORD*)(v3 + 392) + 40LL) +
          (float)((float)(0x1.0000000000000p+0f -
                          *(float*)(*(_QWORD*)(v3 + 392) + 40LL)) *
                  v27);
    if (v28 > 0x1.a36e2e0000000p-14f) {
      v29 = vaddq_f32(
          *(float32x4_t*)(*(_QWORD*)(v3 + 8) + 304LL),
          vmulq_n_f32(
              vsubq_f32(v20, *(float32x4_t*)(*(_QWORD*)(v3 + 8) + 304LL)),
              0x1.0000000000000p+0f / v28));
      LANES128(a1[5]).n128_u64[0] = LANES128(v29).n128_u64[0];
      v19 = a1[5];
      LANES128(v19).n128_u64[1] = LANES128(v29).n128_u32[2];
      a1[5] = v19;
    }
  }
  v30 = LANES128(a1[2]).n128_u8[8];
  v31 = LANES128(*(a1)).n128_u64[1];
  if (LANES128(a1[2]).n128_u8[8] != 0) {
    v32 = *(_QWORD*)(v31 + 80);
    if (v32 == 0) {
      goto LABEL_50;
    }
  }
  else {
    v33 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v31 + 88) + 72LL) + 120LL);
    if (v33 > -77626399) {
      v34 = v33 == 1400556095;
      v35 = -77626398;
    }
    else {
      v34 = v33 == -972548316;
      v35 = -93581017;
    }
    if (v34 || v33 == v35) {
      v30 = 1;
    }
    LANES128(a1[2]).n128_u8[8] = v30;
    v32 = *(_QWORD*)(v31 + 80);
    if (v32 == 0) {
      goto LABEL_50;
    }
  }
  if (*(_QWORD*)(v32 + 8) != -1) {
    v37 = *(_QWORD*)(v31 + 88);
    if (v37 != 0) {
      v38 = *(_DWORD**)(v37 + 8);
      LANES128(a1[3]).n128_u32[0] = v38[76];
      LANES128(a1[3]).n128_u32[1] = v38[77];
      v39 = a1[3];
      LANES128(v39).n128_u64[1] = (unsigned int)v38[78];
      a1[3] = v39;
      v41 = *(_QWORD*)(v37 + 392);
      v40 = *(_QWORD*)(v37 + 400);
      if (v40 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
          std___1___shared_weak_count___release_weak_alt2();
        }
      }
      v30 = LANES128(a1[2]).n128_u8[8];
      LANES128(a1[3]).n128_f32[1] =
          (float)(PSEUDO_UNFUSED(*(float*)(*(_QWORD*)(v41 + 11792) + 36LL) *
                                 *(float*)(v41 + 32))) +
          LANES128(a1[3]).n128_f32[1];
      if (v30 == 1) {
        v42 = a1[5];
        LANES128(a1[3]).n128_u32[0] = LANES128(v42).n128_u32[0];
        v19 = a1[3];
        LANES128(v19).n128_u64[1] = LANES128(v42).n128_u32[2];
        a1[3] = v19;
        if ((*(_BYTE*)(v37 + 176) & 1) != 0) {
          LANES128(a1[3]).n128_u32[1] = *(_DWORD*)(v37 + 172);
        }
        goto LABEL_51;
      }
    }
  }
LABEL_50:
  if (v30 == 2) {
    goto LABEL_63;
  }
LABEL_51:
  if (GameData_21ec7b0 != 0) {
    v43 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v43 != 0 && (*(_BYTE*)(v43 + 112) & 0x20) != 0) {
      goto LABEL_63;
    }
  }
  v44 = LANES128(*(a1)).n128_u64[1];
  v45 = *(_QWORD*)(v44 + 80);
  if (v45 == 0) {
    return;
  }
  if (*(_QWORD*)(v45 + 8) == -1) {
    return;
  }
  v46 = *(_QWORD*)(v44 + 88);
  if (v46 == 0) {
    return;
  }
  v47 = *(_QWORD*)(v46 + 392);
  v48 = *(_QWORD*)(v46 + 400);
  if (v48 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                              memory_order_relaxed);
    v49 = *(_DWORD*)(v47 + 11784);
    if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
      std___1___shared_weak_count___release_weak_alt2();
    }
  }
  else {
    v49 = *(_DWORD*)(v47 + 11784);
  }
  if (v49 <= 0x21 && ((1LL << v49) & 0x268200000LL) != 0 ||
      (v50 = LANES128(a1[2]).n128_u8[8]) == 1 &&
          (*(_BYTE*)(v46 + 176) & 1) != 0) {
  LABEL_63:
    v25 = LANES128(a1[3]).n128_f32[1];
  LABEL_64:
    LANES128(a1[4]).n128_f32[0] = v25;
    return;
  }
  LANES128(v19).n128_f32[0] = LANES128(a1[5]).n128_f32[1] +
                              *(float*)(*(_QWORD*)GameData_212d270 + 188LL);
  if (LANES128(a1[2]).n128_u8[9] == 1) {
    LANES128(a1[2]).n128_u8[9] = 0;
    LANES128(a1[4]).n128_u32[0] = LANES128(v19).n128_u32[0];
  }
  if (*(_DWORD*)(*(_QWORD*)(v46 + 72) + 120LL) != -589947500) {
    v51 = LANES128(*(a1)).n128_u64[1];
    v52 = *(_QWORD*)(v51 + 80);
    if (v52 != 0) {
      v53 = 0x1.11570c0000000p-5f;
      if (*(_QWORD*)(v52 + 8) != -1) {
        v54 = *(_QWORD*)(v51 + 88);
        if (v54 != 0) {
          v53 = (float)(*(float*)(*(_QWORD*)(v54 + 304) + 16LL) *
                        0x1.0aef000000000p+4f) *
                0x1.0624de0000000p-10f;
        }
      }
    }
    else {
      v53 = 0x1.11570c0000000p-5f;
    }
    v55 = game_111f520((v49 < 0x22) & (0x34C260000uLL >> v49),
                       LANES128(a1[4]).n128_f32[0], *(long double*)&v19, v53);
    v50 = LANES128(a1[2]).n128_u8[8];
    LANES128(a1[4]).n128_f32[0] = v55;
  }
  if (v50 != 1) {
    v25 = *(float*)(*(_QWORD*)(*(_QWORD*)(LANES128(*(a1)).n128_u64[1] + 88) +
                               8LL) +
                    308LL) +
          0x1.99999a0000000p-1f;
    if (LANES128(a1[4]).n128_f32[0] >= v25) {
      v25 = LANES128(a1[4]).n128_f32[0];
    }
    goto LABEL_64;
  }
}

__n128 game_112ce60(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned __int8* v11;
  __int64 v12;
  __n128 result;
  __int64 v14;
  struct {
    unsigned __int8* v15;
    unsigned __int8* v16;
    unsigned __int8* v17;
  } v15_;
  struct {
    __int64 v18[2];
    __int64 v19;
  } v18_;

  if ((*(_BYTE*)a1 & 1) != 0) {
    fw_text_String_CopyTerminated(v18_.v18, *(_QWORD*)(a1 + 16),
                                  *(_QWORD*)(a1 + 8));
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
    v18_.v18[0] = *(_QWORD*)a1;
    v18_.v18[1] = v5;
    v18_.v19 = *(_QWORD*)(a1 + 16);
  }
  v7 = *a2;
  v6 = a2[1];
  v15_.v16 = nullptr;
  v15_.v17 = nullptr;
  v8 = v6 - v7;
  v15_.v15 = nullptr;
  if (v6 == v7) {
    result = game_112cfc0(v18_.v18, &v15_.v15, a3);
    if ((v18_.v18[0] & 1) == 0) {
      return result;
    }
    goto LABEL_11;
  }
  if (v8 < 0) {
    GameRoutine_112e1c0();
  }
  v9 = fw_memory_g_heap_manager_ptr;
  v10 = (unsigned __int8*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, v6 - v7, 16, 0);
  v11 = &v10[v8];
  v15_.v15 = v10;
  v15_.v17 = &v10[v8];
  memcpy(v10, v7, v8);
  v15_.v16 = v11;
  game_112cfc0(v18_.v18, &v15_.v15, a3);
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v12 = 56;
  }
  result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v12);
  if ((v18_.v18[0] & 1) != 0) {
  LABEL_11:
    if (v18_.v19 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
    }
  }
  return result;
}

__n128 game_112cfc0(__int64* a1, unsigned __int8** a2, __int64 a3)
{
  unsigned __int8* v3;
  unsigned __int8* v4;
  __int64 v8;
  __n128 result;
  unsigned __int8* v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  char* v15;
  unsigned int v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  char v27;
  unsigned __int8* v28;
  unsigned __int8* v29;
  unsigned __int64 v30;
  unsigned __int8* v31;
  unsigned __int8* v32;
  __int64 v33;
  __int64 v34;
  unsigned __int8* v35;
  unsigned __int8* v36;
  unsigned __int64 v37;
  unsigned __int8* v38;
  unsigned __int8* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  struct {
    unsigned __int8* v45;
    unsigned __int8* v46;
    unsigned __int8* v47;
  } v45_;
  struct {
    __int64 v48[2];
    __int64 v49;
  } v48_;
  struct {
    unsigned __int8* v50;
    unsigned __int8* v51;
    unsigned __int8* v52;
  } v50_;
  struct {
    __int64 v53[2];
    __int64 v54;
  } v53_;
  struct {
    __int64 v55;
    unsigned __int64 v56;
    char* v57;
  } v55_;
  struct {
    __int64 v58;
    __int64 v59;
    char* v60;
  } v58_;
  struct {
    __int64 v61;
    unsigned __int64 v62;
    char* v63;
  } v61_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *a2;
  v3 = a2[1];
  if ((*(_BYTE*)a1 & 1) != 0) {
    fw_text_String_CopyTerminated(&v61_.v61, a1[2], a1[1]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 == v4) {
    LABEL_27:
      v22 = *(__int64**)(a3 + 8);
      if ((unsigned __int64)v22 >= *(_QWORD*)(a3 + 16)) {
        v25 = Manager_66cc20((__int64*)a3, a1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else if ((*(_BYTE*)a1 & 1) != 0) {
        fw_text_String_CopyTerminated(*(__int64**)(a3 + 8), a1[2], a1[1]),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v25 = v22 + 3;
      }
      else {
        v23 = *a1;
        v24 = a1[2];
        v25 = v22 + 3;
        v22[1] = a1[1];
        v22[2] = v24;
        *v22 = v23;
      }
      *(_QWORD*)(a3 + 8) = v25;
      goto LABEL_83;
    }
  }
  else {
    v8 = a1[1];
    v61_.v61 = *a1;
    v61_.v62 = v8;
    v61_.v63 = (char*)a1[2];
    if (v3 == v4) {
      goto LABEL_27;
    }
  }
  v10 = *a2;
  v11 = (unsigned __int8*)(v3 - v4);
  v12 = -1;
  if ((v61_.v61 & 1) != 0) {
    v13 = v61_.v62;
  }
  else {
    v13 = (unsigned __int64)(unsigned __int8)v61_.v61 >> 1;
  }
  v14 = (char*)&v61_.v61 + 1;
  if ((v61_.v61 & 1) != 0) {
    v15 = v61_.v63;
  }
  else {
    v15 = (char*)&v61_.v61 + 1;
  }
  do {
    v16 = *v10++;
    v17 = memchr(v15, v16, v13),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v18 = v17 - (_QWORD)v15;
    if (v17 == 0) {
      v18 = -1;
    }
    if (v12 >= v18) {
      v19 = v18;
    }
    else {
      v19 = v12;
    }
    if (v18 != -1) {
      v12 = v19;
    }
    --v11;
  } while (v11 != nullptr);
  if (v12 == -1) {
    goto LABEL_27;
  }
  if (v13 >= v12) {
    v20 = v12;
  }
  else {
    v20 = v13;
  }
  if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v26 = 26;
    }
    else {
      v26 = (v20 | 7) + 1;
    }
    v21 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v26, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v58_.v59 = v20;
    v58_.v60 = v21;
    v58_.v58 = v26 | 1;
    goto LABEL_35;
  }
  LOBYTE(v58_.v58) = 2 * v20;
  v21 = (char*)&v58_.v58 + 1;
  if (v20 != 0) {
  LABEL_35:
    memmove(v21, v15, v20),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v21[v20] = 0;
  if (v12 != -2) {
    GameRoutine_a539c0((unsigned __int8*)&v61_.v61, 0, v12 + 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v61_.v61 & 1) == 0) {
      goto LABEL_38;
    }
  LABEL_46:
    fw_text_String_CopyTerminated(&v55_.v55, (__int64)v61_.v63, v61_.v62),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v27 = v58_.v58;
    if ((v58_.v58 & 1) == 0) {
      goto LABEL_39;
    }
    goto LABEL_47;
  }
  if ((v61_.v61 & 1) != 0) {
    v14 = v61_.v63;
    v61_.v62 = 0;
  }
  else {
    LOBYTE(v61_.v61) = 0;
  }
  *v14 = 0;
  if ((v61_.v61 & 1) != 0) {
    goto LABEL_46;
  }
LABEL_38:
  v55_.v55 = v61_.v61;
  v55_.v56 = v61_.v62;
  v55_.v57 = v61_.v63;
  v27 = v58_.v58;
  if ((v58_.v58 & 1) == 0) {
  LABEL_39:
    v53_.v53[0] = v58_.v58;
    v53_.v53[1] = v58_.v59;
    v53_.v54 = (__int64)v58_.v60;
    goto LABEL_48;
  }
LABEL_47:
  fw_text_String_CopyTerminated(v53_.v53, (__int64)v58_.v60, v58_.v59),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_48:
  v29 = *a2;
  v28 = a2[1];
  v50_.v51 = nullptr;
  v50_.v52 = nullptr;
  v30 = v28 - v29;
  v50_.v50 = nullptr;
  if (v28 == v29) {
    game_112cfc0(v53_.v53, &v50_.v50, a3),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v53_.v53[0] & 1) == 0) {
      goto LABEL_59;
    }
  }
  else {
    if ((v30 & 0x8000000000000000LL) != 0) {
      goto LABEL_89;
    }
    v31 = (unsigned __int8*)fw_memory_HeapManager_Allocate_alt1(
        fw_memory_g_heap_manager, v28 - v29, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v32 = &v31[v30];
    v50_.v50 = v31;
    v50_.v52 = &v31[v30];
    memcpy(v31, v29, v30),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v50_.v51 = v32;
    game_112cfc0(v53_.v53, &v50_.v50, a3),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v33 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v33),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v53_.v53[0] & 1) == 0) {
      goto LABEL_59;
    }
  }
  if (v53_.v54 != 0) {
    v34 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v34),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_59:
  if ((v55_.v55 & 1) != 0) {
    fw_text_String_CopyTerminated(v48_.v48, (__int64)v55_.v57, v55_.v56),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v48_.v48[0] = v55_.v55;
    v48_.v48[1] = v55_.v56;
    v48_.v49 = (__int64)v55_.v57;
  }
  v36 = *a2;
  v35 = a2[1];
  v45_.v46 = nullptr;
  v45_.v47 = nullptr;
  v37 = v35 - v36;
  v45_.v45 = nullptr;
  if (v35 != v36) {
    if ((v37 & 0x8000000000000000LL) == 0) {
      v38 = (unsigned __int8*)fw_memory_HeapManager_Allocate_alt1(
          fw_memory_g_heap_manager, v35 - v36, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v39 = &v38[v37];
      v45_.v45 = v38;
      v45_.v47 = &v38[v37];
      memcpy(v38, v36, v37),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v45_.v46 = v39;
      game_112cfc0(v48_.v48, &v45_.v45, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v40 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v40 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v40);
      if ((v48_.v48[0] & 1) == 0) {
        goto LABEL_73;
      }
      goto LABEL_69;
    }
  LABEL_89:
    GameRoutine_112e1c0(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  result = game_112cfc0(v48_.v48, &v45_.v45, a3);
  if ((v48_.v48[0] & 1) != 0) {
  LABEL_69:
    if (v48_.v49 != 0) {
      v41 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v41 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v41);
    }
  }
LABEL_73:
  if ((v55_.v55 & 1) != 0 && v55_.v57 != nullptr) {
    v42 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v42 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v42);
  }
  if ((v27 & 1) != 0 && v58_.v60 != nullptr) {
    v43 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v43 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v43);
  }
LABEL_83:
  if ((v61_.v61 & 1) != 0 && v61_.v63 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
  }
  return result;
}

__n128 game_112d480(__int64 a1, char a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  __n128 result;
  __int64 v10;
  __int64 v11[3];
  struct {
    __int64 v12[2];
    __int64 v13;
  } v12_;

  if ((*(_BYTE*)a1 & 1) != 0) {
    fw_text_String_CopyTerminated(v12_.v12, *(_QWORD*)(a1 + 16),
                                  *(_QWORD*)(a1 + 8));
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
    v12_.v12[0] = *(_QWORD*)a1;
    v12_.v12[1] = v5;
    v12_.v13 = *(_QWORD*)(a1 + 16);
  }
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = (_BYTE*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1, 16, 0);
  *v7 = a2;
  v11[0] = (__int64)v7;
  v11[1] = (__int64)(v7 + 1);
  v11[2] = (__int64)(v7 + 1);
  game_112ce60((__int64)v12_.v12, v11, a3);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v8 = 56;
  }
  result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v8);
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v10);
  }
  return result;
}

__n128 game_112d580(char* a1, __int64 a2, __int64 a3)
{
  char v3;
  __int64 v6;
  __int64 v7;
  unsigned __int8* v8;
  __int64 v9;
  __n128 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64* v21;
  char v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v25_;
  unsigned __int8* v28[3];
  struct {
    __int64 v29[2];
    __int64 v30;
  } v29_;
  struct {
    __int64* v31;
    __int64* v32;
    __int64 v33;
  } v31_;

  v3 = *a1;
  v31_.v32 = nullptr;
  v31_.v33 = 0;
  v31_.v31 = nullptr;
  if ((v3 & 1) != 0) {
    fw_text_String_CopyTerminated(v29_.v29, *((_QWORD*)a1 + 2),
                                  *((_QWORD*)a1 + 1));
  }
  else {
    v6 = *((_QWORD*)a1 + 1);
    v29_.v29[0] = *(_QWORD*)a1;
    v29_.v29[1] = v6;
    v29_.v30 = *((_QWORD*)a1 + 2);
  }
  v7 = fw_memory_g_heap_manager_ptr;
  v8 = (unsigned __int8*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1, 16, 0);
  v28[0] = v8;
  *v8 = 42;
  v28[1] = v8 + 1;
  v28[2] = v8 + 1;
  game_112cfc0(v29_.v29, v28, (__int64)&v31_.v31);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v9 = 56;
  }
  result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v9);
  if ((v29_.v29[0] & 1) != 0 && v29_.v30 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v11);
  }
  if (v31_.v32 == v31_.v31) {
    LOWORD(v25_.v25) = 0;
    if ((*(_BYTE*)a2 & 1) == 0) {
      goto LABEL_22;
    }
  }
  else if ((*(_BYTE*)v31_.v31 & 1) != 0) {
    fw_text_String_CopyTerminated(&v25_.v25, v31_.v31[2], v31_.v31[1]);
    if ((*(_BYTE*)a2 & 1) == 0) {
      goto LABEL_22;
    }
  }
  else {
    v12 = *v31_.v31;
    v13 = v31_.v31[2];
    v25_.v26 = v31_.v31[1];
    v25_.v27 = v13;
    v25_.v25 = v12;
    if ((*(_BYTE*)a2 & 1) == 0) {
      goto LABEL_22;
    }
  }
  if (*(_QWORD*)(a2 + 16) != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v14);
  }
LABEL_22:
  v15 = v25_.v26;
  *(_QWORD*)a2 = v25_.v25;
  *(_QWORD*)(a2 + 8) = v15;
  *(_QWORD*)(a2 + 16) = v25_.v27;
  if (0xAAAAAAAAAAAAAAABLL * (v31_.v32 - v31_.v31) < 2) {
    LOWORD(v25_.v25) = 0;
    if ((*(_BYTE*)a3 & 1) == 0) {
      goto LABEL_33;
    }
  }
  else if ((v31_.v31[3] & 1) != 0) {
    fw_text_String_CopyTerminated(&v25_.v25, v31_.v31[5], v31_.v31[4]);
    if ((*(_BYTE*)a3 & 1) == 0) {
      goto LABEL_33;
    }
  }
  else {
    v16 = v31_.v31[4];
    v25_.v25 = v31_.v31[3];
    v25_.v26 = v16;
    v25_.v27 = v31_.v31[5];
    if ((*(_BYTE*)a3 & 1) == 0) {
      goto LABEL_33;
    }
  }
  if (*(_QWORD*)(a3 + 16) != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v17);
  }
LABEL_33:
  v18 = v25_.v26;
  *(_QWORD*)a3 = v25_.v25;
  *(_QWORD*)(a3 + 8) = v18;
  *(_QWORD*)(a3 + 16) = v25_.v27;
  v19 = v31_.v31;
  if (v31_.v31 != nullptr) {
    v20 = v31_.v32;
    if (v31_.v31 == v31_.v32) {
      goto LABEL_44;
    }
    v21 = v31_.v32;
    do {
      v22 = *((_BYTE*)v21 - 24);
      v21 -= 3;
      if ((v22 & 1) != 0 && *(v20 - 1) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v23);
      }
      v20 = v21;
    } while (v21 != v19);
    v31_.v32 = v19;
    if (v31_.v31 != nullptr) {
    LABEL_44:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v24 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v24);
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_112d860(PSEUDO_X8 x8_, __int64* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  _BYTE* v6;
  __int64 v8;
  __int64 v9;
  _WORD* v10;
  __int64 v11;
  __int64 v12;
  _WORD* v13;
  char* v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  struct {
    __int64 v23;
    unsigned __int64 v24;
    char* v25;
  } v23_;

  v2 = *(unsigned __int8*)a1;
  v4 = a1[1];
  v3 = a1[2];
  v6 = (char*)a1 + 1;
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if ((v2 & 1) != 0) {
    v8 = v3;
  }
  else {
    v8 = (__int64)a1 + 1;
  }
  if ((v2 & 1) != 0) {
    v9 = v4;
  }
  else {
    v9 = v2 >> 1;
  }
  if (v9 >= 2) {
    v10 = (_WORD*)(v8 + v9);
    v11 = v9;
    v12 = v8;
    while (1) {
      v13 = (_WORD*)memchr_alt1(v12, 13, v11 - 1);
      if (v13 == nullptr) {
        goto LABEL_22;
      }
      if (*v13 == 2573) {
        break;
      }
      v12 = (__int64)v13 + 1;
      v11 = (__int64)v10 - v12;
      if ((__int64)v10 - v12 < 2) {
        goto LABEL_22;
      }
    }
    if (v13 == v10) {
      goto LABEL_22;
    }
    v14 = (char*)v13 - v8;
    if ((_WORD*)((char*)v13 - v8) == (_WORD*)-1LL) {
      goto LABEL_22;
    }
    if (v9 >= (unsigned __int64)v14) {
      v15 = (unsigned __int64)v13 - v8;
    }
    else {
      v15 = v9;
    }
    if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (v15 >= 0x17) {
      if ((v15 | 7) == 0x17) {
        v18 = 26;
      }
      else {
        v18 = (v15 | 7) + 1;
      }
      v16 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v18, 16, 0);
      v23_.v24 = v15;
      v23_.v25 = v16;
      v23_.v23 = v18 | 1;
    }
    else {
      LOBYTE(v23_.v23) = 2 * v15;
      v16 = (char*)&v23_.v23 + 1;
      if (v13 == (_WORD*)v8) {
        goto LABEL_35;
      }
    }
    memmove_alt1((__int64)v16, v8, v15);
  LABEL_35:
    v19 = *(_BYTE*)a2;
    v16[v15] = 0;
    if ((v19 & 1) != 0) {
      v20 = a2[2];
      if (v20 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
      }
    }
    v22 = v23_.v24;
    *a2 = v23_.v23;
    a2[1] = v22;
    a2[2] = (__int64)v23_.v25;
    if (v14 != (char*)-3LL) {
      GameRoutine_a539c0((unsigned __int8*)a1, 0, (unsigned __int64)(v14 + 2));
      return;
    }
    if ((*(_BYTE*)a1 & 1) != 0) {
      goto LABEL_28;
    }
    goto LABEL_26;
  }
LABEL_22:
  if (a2 != a1) {
    if ((v2 & 1) != 0) {
      GameRoutine_64df20_alt1(a2, v3, v4);
      if ((*(_BYTE*)a1 & 1) == 0) {
        goto LABEL_26;
      }
    LABEL_28:
      v6 = (_BYTE*)a1[2];
      a1[1] = 0;
      goto LABEL_29;
    }
    v17 = a1[1];
    *a2 = *a1;
    a2[1] = v17;
    a2[2] = a1[2];
  }
  if ((v2 & 1) != 0) {
    goto LABEL_28;
  }
LABEL_26:
  *(_BYTE*)a1 = 0;
LABEL_29:
  *v6 = 0;
}

__n128 game_112daa0(__int64* a1)
{
  unsigned __int64 v1;
  bool v3;
  unsigned __int64 v4;
  char* v5;
  unsigned __int64 v6;
  char* v7;
  unsigned __int64 v8;
  char* v9;
  char* v10;
  char* v11;
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
  __int64 v23;
  __n128 result;
  __int64 v25;
  struct {
    __int16 v26;
    char v27;
    char gap3_[13];
    __int64 v28;
  } v26_;
  struct {
    __int64 v29;
    unsigned __int64 v30;
    char* v31;
  } v29_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(unsigned __int8*)a1;
  v3 = (v1 & 1) == 0;
  v4 = v1 >> 1;
  if (v3) {
    v5 = (char*)a1 + 1;
  }
  else {
    v5 = (char*)a1[2];
  }
  if (v3) {
    v6 = v4;
  }
  else {
    v6 = a1[1];
  }
  if ((__int64)v6 >= 2) {
    v7 = &v5[v6];
    v8 = v6;
    v9 = v5;
    while (1) {
      v10 = (char*)memchr(v9, 47, v8 - 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v10 == nullptr) {
        goto LABEL_32;
      }
      if (*(_WORD*)v10 == 12079) {
        break;
      }
      v9 = v10 + 1;
      v8 = v7 - v9;
      if (v7 - v9 < 2) {
        goto LABEL_32;
      }
    }
    if (v10 == v7 || v10 - v5 == -1) {
      goto LABEL_32;
    }
    if (v6 >= v10 - v5) {
      v6 = v10 - v5;
    }
    if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                          PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (v6 >= 0x17) {
      if ((v6 | 7) == 0x17) {
        v12 = 26;
      }
      else {
        v12 = (v6 | 7) + 1;
      }
      v11 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v12, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v29_.v30 = v6;
      v29_.v31 = v11;
      v29_.v29 = v12 | 1;
    }
    else {
      LOBYTE(v29_.v29) = 2 * v6;
      v11 = (char*)&v29_.v29 + 1;
      if (v10 == v5) {
      LABEL_26:
        v11[v6] = 0;
        if ((*(_BYTE*)a1 & 1) != 0 && a1[2] != 0) {
          v13 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v13 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v13),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v14 = v29_.v30;
        *a1 = v29_.v29;
        a1[1] = v14;
        a1[2] = (__int64)v29_.v31;
        goto LABEL_32;
      }
    }
    memmove(v11, v5, v6),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_26;
  }
LABEL_32:
  BYTE2(v29_.v29) = 0;
  v26_.v26 = 0;
  LOWORD(v29_.v29) = 8194;
  GameRoutine_112cc60(a1, (unsigned __int8*)&v29_.v29,
                      (unsigned __int8*)&v26_.v26),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26_.v26 & 1) != 0 && v26_.v28 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v15),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v26_.v26 = 0;
  LOBYTE(v29_.v29) = 6;
  *(_DWORD*)((char*)&v29_.v29 + 1) = 8421603;
  GameRoutine_112cc60(a1, (unsigned __int8*)&v29_.v29,
                      (unsigned __int8*)&v26_.v26),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26_.v26 & 1) != 0 && v26_.v28 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v16),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  BYTE2(v29_.v29) = 0;
  v26_.v27 = 0;
  LOWORD(v29_.v29) = 10242;
  v26_.v26 = 11266;
  GameRoutine_112cc60(a1, (unsigned __int8*)&v29_.v29,
                      (unsigned __int8*)&v26_.v26),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26_.v26 & 1) != 0 && v26_.v28 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v17),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v26_.v26 = 11266;
  v26_.v27 = 0;
  LOBYTE(v29_.v29) = 6;
  *(_DWORD*)((char*)&v29_.v29 + 1) = 8961263;
  GameRoutine_112cc60(a1, (unsigned __int8*)&v29_.v29,
                      (unsigned __int8*)&v26_.v26),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26_.v26 & 1) != 0 && v26_.v28 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v18),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  BYTE2(v29_.v29) = 0;
  v26_.v26 = 0;
  LOWORD(v29_.v29) = 10498;
  GameRoutine_112cc60(a1, (unsigned __int8*)&v29_.v29,
                      (unsigned __int8*)&v26_.v26),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26_.v26 & 1) != 0 && v26_.v28 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v19),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v26_.v26 = 0;
  LOBYTE(v29_.v29) = 6;
  *(_DWORD*)((char*)&v29_.v29 + 1) = 9026799;
  GameRoutine_112cc60(a1, (unsigned __int8*)&v29_.v29,
                      (unsigned __int8*)&v26_.v26),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26_.v26 & 1) != 0 && v26_.v28 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v20),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  BYTE2(v29_.v29) = 0;
  v26_.v26 = 0;
  LOWORD(v29_.v29) = 10754;
  GameRoutine_112cc60(a1, (unsigned __int8*)&v29_.v29,
                      (unsigned __int8*)&v26_.v26),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26_.v26 & 1) != 0 && v26_.v28 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v21),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v26_.v27 = 0;
  LOBYTE(v29_.v29) = 6;
  *(_DWORD*)((char*)&v29_.v29 + 1) = 8487139;
  v26_.v26 = 11266;
  GameRoutine_112cc60(a1, (unsigned __int8*)&v29_.v29,
                      (unsigned __int8*)&v26_.v26),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26_.v26 & 1) != 0 && v26_.v28 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v22),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  LOBYTE(v29_.v29) = 6;
  v26_.v27 = 0;
  *(_DWORD*)((char*)&v29_.v29 + 1) = 10272239;
  v26_.v26 = 31746;
  GameRoutine_112cc60(a1, (unsigned __int8*)&v29_.v29,
                      (unsigned __int8*)&v26_.v26),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26_.v26 & 1) != 0 && v26_.v28 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v23),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  BYTE2(v29_.v29) = 0;
  v26_.v26 = 0;
  LOWORD(v29_.v29) = 2306;
  GameRoutine_112cc60(a1, (unsigned __int8*)&v29_.v29,
                      (unsigned __int8*)&v26_.v26),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26_.v26 & 1) != 0 && v26_.v28 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
  }
  return result;
}

void game_112dfe0(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  unsigned __int8* v5;
  __int64 v6;
  __int64 v7;
  int i;
  __int64 v9;
  _QWORD v10[3];
  unsigned __int8* v11[3];
  struct {
    __int64 v12[2];
    __int64 v13;
  } v12_;

  if ((*(_BYTE*)a1 & 1) != 0) {
    fw_text_String_CopyTerminated(v12_.v12, *(_QWORD*)(a1 + 16),
                                  *(_QWORD*)(a1 + 8));
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
    v12_.v12[0] = *(_QWORD*)a1;
    v12_.v12[1] = v3;
    v12_.v13 = *(_QWORD*)(a1 + 16);
  }
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = (unsigned __int8*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1, 16, 0);
  v11[0] = v5;
  *v5 = 44;
  v11[1] = v5 + 1;
  v11[2] = v5 + 1;
  game_112cfc0(v12_.v12, v11, (__int64)a2);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v6);
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v7);
  }
  for (i = 32; i != 0; --i) {
    LOWORD(v10[0]) = 0;
    GameRoutine_7a8220(a2, v10);
    if ((v10[0] & 1) != 0 && v10[2] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v9);
    }
  }
}

__attribute__((swiftcall)) void game_112e760(PSEUDO_X8 x8_, const char* a1)
{
  unsigned __int8* a2 = (unsigned __int8*)PSEUDO_X8_VALUE(x8_);
  unsigned __int8* v2;
  __int64* v5;
  __int64 v6;
  _BYTE* v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int16* v15;
  int v16;
  int v17;
  bool v18;
  unsigned int v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char v31;
  __int64 v32;
  __int64 v33;
  struct {
    __int64 v34[2];
    _BYTE* v35;
  } v34_;
  struct {
    __int64 v36[2];
    _BYTE* v37;
  } v36_;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  *(_WORD*)a2 = 0;
  v2 = a2 + 1;
  v5 = msg_MessageManager_instance__ptr[0];
  Manager_a501f0_alt1((void*)(v36_.v36), *msg_MessageManager_instance__ptr[0],
                      a1),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  Manager_a50570_alt1((void*)(v34_.v34), *v5, a1),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v36_.v36[0] & 1) != 0) {
    v7 = v36_.v37;
  }
  else {
    v7 = (char*)v36_.v36 + 1;
  }
  if ((v34_.v34[0] & 1) != 0) {
    v8 = v34_.v35;
  }
  else {
    v8 = (char*)v34_.v34 + 1;
  }
  v9 = GameHr_112e3e0(v6, v7, nullptr, v8),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v34_.v34[0] & 1) != 0 && v34_.v35 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (__int64)v34_.v35),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if ((v36_.v36[0] & 1) != 0 && v36_.v37 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v36_.v37),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if (v9 != 0) {
    if (*(_QWORD*)(v9 + 32) != 0) {
      v12 = *(const char**)(v9 + 32);
    }
    else {
      v12 = &GameData_1a9f09e;
    }
    GameRoutine_60a020_alt2((__int64)a2, v12),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v13 = *a2;
    qmemcpy((char*)v36_.v36 + 1, "Ism", 3);
    v14 = *((_QWORD*)a2 + 1);
    if ((v13 & 1) == 0) {
      v14 = v13 >> 1;
    }
    if (v14 <= 2 || ((v13 & 1) != 0 ? (v15 = *((unsigned __int16**)a2 + 2))
                                    : (v15 = (unsigned __int16*)v2),
                     (v16 = *v15, v17 = *((unsigned __int8*)v15 + 2),
                      v16 == *(unsigned __int16*)((char*)v36_.v36 + 1))
                         ? (v18 = v17 == BYTE3(v36_.v36[0]))
                         : (v18 = false),
                     !v18)) {
      v19 = Manager_a50b20_alt1(*v5, a1) - 1,
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v19 <= 3) {
        *(_WORD*)((char*)v36_.v36 + 1) = (unsigned __int8)(v19 + 54);
        v20 = *a2;
        LOBYTE(v36_.v36[0]) = 2;
        v21 = *((_QWORD*)a2 + 2);
        v22 = v20 >> 1;
        if ((v20 & 1) != 0) {
          v22 = *((_QWORD*)a2 + 1);
        }
        if (v22 >= 3) {
          v23 = 3;
        }
        else {
          v23 = v22;
        }
        LOBYTE(v34_.v34[0]) = 2 * v23;
        if (v22 != 0) {
          if ((v20 & 1) != 0) {
            v24 = v21;
          }
          else {
            v24 = (__int64)v2;
          }
          memmove_alt1((__int64)v34_.v34 + 1, v24, v23),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        *((_BYTE*)v34_.v34 + v23 + 1) = 0;
        v25 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)v34_.v34,
                                                 (const char*)v36_.v36 + 1, 1u),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v26 = *v25;
        v27 = v25[1];
        v28 = v25[2];
        *v25 = 0;
        v25[1] = 0;
        v25[2] = 0;
        if ((*a2 & 1) != 0) {
          v29 = *((_QWORD*)a2 + 2);
          if (v29 != 0) {
            v30 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v30 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v29),
                v6 = COERCE_AS(__typeof__(v6),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
        }
        v31 = v34_.v34[0];
        *(_QWORD*)a2 = v26;
        *((_QWORD*)a2 + 1) = v27;
        *((_QWORD*)a2 + 2) = v28;
        if ((v31 & 1) != 0 && v34_.v35 != nullptr) {
          v32 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v34_.v35),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        if ((v36_.v36[0] & 1) != 0 && v36_.v37 != nullptr) {
          v33 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, (__int64)v36_.v37),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
      }
    }
  }
}

__int64 game_113a800(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  char* v7;
  __int64 v8;
  struct {
    __int64 v10[2];
    char* v11;
  } v10_;

  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(v10_.v10, *(_QWORD*)(v2 + 40),
                                  *(_QWORD*)(v2 + 32));
    v2 = *a2;
  }
  else {
    v3 = *(_QWORD*)(*a2 + 32);
    v4 = *(char**)(*a2 + 40);
    v10_.v10[0] = *(_QWORD*)(*a2 + 24);
    v10_.v10[1] = v3;
    v10_.v11 = v4;
  }
  game_113c060((unsigned __int8*)(v2 + 48));
  if ((v10_.v10[0] & 1) != 0) {
    v7 = v10_.v11;
  }
  else {
    v7 = (char*)v10_.v10 + 1;
  }
  game_810d20((__int64)v7);
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v8);
  }
  return 1;
}

__int64 game_113a8c0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  char* v4;
  float v6;
  float v7;
  char* v8;
  __int64 v9;
  struct {
    __int64 v11[2];
    char* v12;
  } v11_;
  _QWORD v13[25];
  __int64 v14;

  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(v11_.v11, *(_QWORD*)(v2 + 40),
                                  *(_QWORD*)(v2 + 32)),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
    v2 = *a2;
  }
  else {
    v3 = *(_QWORD*)(*a2 + 32);
    v4 = *(char**)(*a2 + 40);
    v11_.v11[0] = *(_QWORD*)(*a2 + 24);
    v11_.v11[1] = v3;
    v11_.v12 = v4;
  }
  game_113c060((unsigned __int8*)(v2 + 48)),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  v7 = v6;
  if ((v11_.v11[0] & 1) != 0) {
    v8 = v11_.v12;
  }
  else {
    v8 = (char*)v11_.v11 + 1;
  }
  snd_findSound((__int64)v8),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_Fade_Fade_10c830_alt1((__int64)v13, v7),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_mute(&v14, (__int64)v13),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_Fade_Destroy_Fade_alt1(v13),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v9),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  return 1;
}

#pragma GCC visibility pop
