#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* VTarget_779660(_DWORD*, unsigned __int8);
_QWORD* GameRoutine_8768e0(_QWORD* result);
_QWORD* Manager_66cc20(__int64*, _QWORD*);
_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
__attribute__((swiftcall)) void Dir_70e900(PSEUDO_X8, __int16* result,
                                           __int16*);
__attribute__((swiftcall)) void TransporterConst_89b3d0(PSEUDO_X8, __int64,
                                                        __int64, int);
__attribute__((swiftcall)) void game_143e320(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, __int64 result,
                                      unsigned __int16*, int);
__attribute__((swiftcall)) void game_UnitUtil_UniqueMap_Commit_89abc0_alt1(
    PSEUDO_X8, __int64 result, unsigned __int16*,
    __int64) __asm__("game_UnitUtil_UniqueMap_Commit_89abc0");
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int16* Dir_70dd80(__int16* result, __int16*);
__int64** game_8aef60_alt1(__int64**, unsigned __int16*,
                           __n128) __asm__("game_8aef60");
__int64* GameRoutine_18dc920(_QWORD*, _QWORD*);
__int64* GameRoutine_6e5900(__int64* result, _DWORD*);
__int64* GameRoutine_6f2440(__int64* result, unsigned __int64);
__int64* GameRoutine_92b0a0(_QWORD*, unsigned __int8*);
__int64* game_820d50(int);
__int64* game_anonymous_87c960(__int64);
__int64 AssetTableFile_7e74e0(__int64);
__int64 AssetTableFile_7e94a0(__int64);
__int64 CharacterBuilder_1084780(long double);
__int64 Cursor_734a80(_QWORD, _QWORD);
__int64 Dir_70df40(_QWORD, _QWORD);
__int64 GameRoutine_162aea0(__int64, _QWORD*);
__int64 GameRoutine_18d3900(__int64);
__int64 GameRoutine_18d3a00(__int64);
__int64 GameRoutine_18d3d20(__int64);
__int64 GameRoutine_18d4020(__int64, __int64);
__int64 GameRoutine_18d4120(__int64, __int64);
__int64 GameRoutine_18d4220(__int64, __int64, __int64, __int64);
__int64 GameRoutine_18d4350(__int64, __int64, __int64, __int64);
__int64 GameRoutine_1a05260(int**, __int64, char, __int64, char*);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b0();
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_657460(__int64*, __int64, char);
__int64 GameRoutine_65d580(__int64 result, __int64);
__int64 GameRoutine_66aae0();
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_6e3b50(__int64 result, _QWORD*);
__int64 GameRoutine_70cdd0(_QWORD);
__int64 GameRoutine_7152e0();
__int64 GameRoutine_715440();
__int64 GameRoutine_715440_alt1(_QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_715440");
__int64 GameRoutine_75d120(__int64, char);
__int64 GameRoutine_7c9660(__int64, unsigned int, unsigned int, __int64);
__int64 GameRoutine_7fa250(__int64, __int64, __int64);
__int64 GameRoutine_845840(_QWORD*, __int16, __int16);
__int64 GameRoutine_86b4e0(__int64*);
__int64 GameRoutine_877680(__int64*);
__int64 GameRoutine_87a4e0(__int64*, __int64);
__int64 GameRoutine_87a6e0(__int64*, __int64);
__int64 GameRoutine_87a8a0();
__int64 GameRoutine_87a8c0();
__int64 GameRoutine_87ad50();
__int64 GameRoutine_87ad60();
__int64 GameRoutine_87b0a0();
__int64 GameRoutine_87b0e0();
__int64 GameRoutine_87b3e0();
__int64 GameRoutine_87b680();
__int64 GameRoutine_87b6a0();
__int64 GameRoutine_8a1f40(_QWORD);
__int64 GameRoutine_8c7040(__int64 result, char*, char*, _QWORD*, __int64,
                           __int64, __int64, __int64);
__int64 GameRoutine_95e0e0(_QWORD, _QWORD);
__int64 GameRoutine_960100(void);
__int64 GameRoutine_960100_alt1() __asm__("GameRoutine_960100");
__int64 GameRoutine_975940(__int64);
__int64 GameRoutine_9b11a0(_QWORD*, unsigned __int64*, __int64);
__int64 GameRoutine_d6f7f0(__int64);
__int64 GameRoutine_d85af0();
__int64 GameSubquestData_125d3e0(__int64);
__int64 GameVariable_828700(__int64, unsigned __int64*, int);
__int64 Mind_743fc0(__int64, char*);
__int64 ProcGameSaveData_87b030();
__int64 ProcGameSaveData_87b460();
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 Registration_18d7720(__int64, int, int);
__int64 SendUnitItemMenu_8ae490(unsigned __int16*, __int64, char);
__int64 Stream_6604e0(__int64, __int64);
__int64 Stream_660820(__int64, __int64);
__int64 TransporterConst_89ca00(_QWORD);
__int64 Trick_7d5160(__int64, __int64);
__int64 UnitActor_81a990(__int64);
__int64 Unit_6c7fa0(_QWORD, _QWORD);
__int64 Unit_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Unit_6ca760(__int64, _DWORD*);
__int64 Unit_6cb080(__int64, _WORD*);
__int64 Unit_6cd120(__int64, char, _DWORD*);
__int64 VTarget_778140(__int64, __int64, char, __int64);
__int64 VariableManager_7150e0();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_120c6c0(__int64, signed int, char);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_9a28e0_alt1(_QWORD) __asm__("game_9a28e0");
__int64 game_CorpsManager_EachUnit(__int64 result, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GameVariableTable_Find_alt1(_QWORD, _QWORD) __asm__(
    "game_GameVariableTable_Find");
__int64 game_GetHero(unsigned __int8);
__int64 game_GrowthListFile_GetJob(__int64*, __int64, char);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HasSkill_alt1(_QWORD, _QWORD) __asm__("game_HasSkill");
__int64 game_HashString(__int64 result);
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
__int64 game_ProcInst_Register(__int64);
__int64 game_TransporterConst_List_Impl_EachData(_QWORD, _QWORD, _QWORD);
__int64 game_UnitItemList_Add(_WORD*, _DWORD*, _WORD*, char);
__int64 game_UnitItemList_Count(_QWORD);
__int64 game_UnitMastery_GetMaxJobRank(__int64, __int64);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_UnitPool_GetFirst_alt1(_QWORD) __asm__("game_UnitPool_GetFirst");
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_anonymous_ProcGameSaveData_DeleteTask();
__int64 game_anonymous_ProcGameSaveData_DisposeTask();
__int64 game_anonymous_ProcGameSaveData_SaveTask();
__int64 game_anonymous_ProcGameSaveData_SkippedTask();
__int64 game_map_Mind_UpdateSubTarget(__int64 result);
__int64 game_menu_1a06650(__int64, __int64, int);
__int64 game_telop_TelopRelianceLvUp_CreateBind(__int64, __int64, __int64, char,
                                                unsigned __int8);
__int64 game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_oe_GetProgramTotalActiveTime(_QWORD);
__int64 nn_os_ConvertToTick(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__int64 nn_os_YieldThread(_QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 strchr(_QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
bool GameRoutine_876070(unsigned __int8*, __int64);
bool GameRoutine_8c4ee0(__int64);
bool GameRoutine_90c9e0(__int64);
bool GameRoutine_910ac0(unsigned __int8*, __int64, __int64, unsigned __int8*,
                        char*, int);
bool Stream_65d2d0(__int64, int*, int*, int*);
bool game_97e640(unsigned __int8*, __int64, unsigned __int8*, __int64,
                 unsigned int, char);
bool game_HasActiveSkill_843420(_DWORD*, __int64);
char* GameRoutine_874b20(unsigned __int8, unsigned __int8, int, int);
char* GameRoutine_a51530(__int64, char*);
char* game_util_Format(__int64, ...);
extern _DWORD GameData_1b37744_alt1[5] __asm__("GameData_1b37744");
extern _DWORD GameData_1b4e0b8[5];
extern _QWORD GameData_1b01648[4];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_1fb01c8;
extern _UNKNOWN* GameData_212c8a8;
extern _UNKNOWN* GameData_212d208;
extern _UNKNOWN GameData_1a85767;
extern _UNKNOWN GameData_1a85781;
extern _UNKNOWN GameData_1a85792;
extern _UNKNOWN GameData_1a857b0;
extern _UNKNOWN GameData_1a893d4;
extern _UNKNOWN GameData_1a8d53e;
extern _UNKNOWN GameData_1a8d553;
extern _UNKNOWN GameData_1a90ea3;
extern _UNKNOWN GameData_1a90ed0;
extern _UNKNOWN GameData_1a90ee8;
extern _UNKNOWN GameData_1a94dd8;
extern _UNKNOWN GameData_1a94de6;
extern _UNKNOWN GameData_1a94dfd;
extern _UNKNOWN GameData_1a94e12;
extern _UNKNOWN GameData_1a98da2;
extern _UNKNOWN GameData_1a98e95;
extern _UNKNOWN GameData_1a98e9f;
extern _UNKNOWN GameData_1a98ead;
extern _UNKNOWN GameData_1a98eba;
extern _UNKNOWN GameData_1a9c9ea;
extern _UNKNOWN GameData_1a9ca23;
extern _UNKNOWN GameData_1a9caaf;
extern _UNKNOWN GameData_1a9cac4;
extern _UNKNOWN GameData_1a9cae2;
extern _UNKNOWN GameData_1a9cb1c;
extern _UNKNOWN GameData_1aa0a5d;
extern _UNKNOWN GameData_1aa0b0b;
extern _UNKNOWN GameData_1aa485a;
extern _UNKNOWN GameData_1aa489e;
extern _UNKNOWN GameData_1aa48af;
extern _UNKNOWN GameData_1aa84e9;
extern _UNKNOWN GameData_1aa8505;
extern _UNKNOWN GameData_1aa85f6;
extern _UNKNOWN GameData_1aac16b;
extern _UNKNOWN GameData_1aac1f9;
extern _UNKNOWN GameData_1aaff8e;
extern _UNKNOWN GameData_1aaffdb;
extern _UNKNOWN GameData_1ab004e;
extern _UNKNOWN GameData_1ab3b8e;
extern _UNKNOWN GameData_1ab3bf5;
extern _UNKNOWN GameData_1ab3c18;
extern _UNKNOWN GameData_1ab3c96;
extern _UNKNOWN GameData_1ab3ca7;
extern _UNKNOWN GameData_1ab7c9d;
extern _UNKNOWN GameData_1ab7dd7;
extern _UNKNOWN GameData_1ab7ed0;
extern _UNKNOWN GameData_1ab7f00;
extern _UNKNOWN GameData_1abbcd1;
extern _UNKNOWN GameData_1abbce1;
extern _UNKNOWN GameData_1abbd06;
extern _UNKNOWN GameData_1abfaff;
extern _UNKNOWN GameData_1abfb2a;
extern _UNKNOWN GameData_1abfb42;
extern _UNKNOWN GameData_1ac31ba;
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_1ac6b6e;
extern _UNKNOWN GameData_1ac6bcb;
extern _UNKNOWN GameData_1ac6bdb;
extern _UNKNOWN GameData_1ac6ca2;
extern _UNKNOWN GameData_1acad4c;
extern _UNKNOWN GameData_1acee80;
extern _UNKNOWN GameData_1aceeaa;
extern _UNKNOWN GameData_1ad2a8f;
extern _UNKNOWN GameData_1ad2b26;
extern _UNKNOWN GameData_1ad2b30;
extern _UNKNOWN GameData_1ad2b3e;
extern _UNKNOWN GameData_1ad6755;
extern _UNKNOWN GameData_1ada551;
extern _UNKNOWN GameData_1ada5b4;
extern _UNKNOWN GameData_1ada5d7;
extern _UNKNOWN GameData_1ada5ec;
extern _UNKNOWN GameData_1ada601;
extern _UNKNOWN GameData_1ada616;
extern _UNKNOWN GameData_1ade1da;
extern _UNKNOWN GameData_1ade1ef;
extern _UNKNOWN GameData_1ae2006;
extern _UNKNOWN GameData_1ae20ad;
extern _UNKNOWN GameData_1ae20cc;
extern _UNKNOWN GameData_1ae20e1;
extern _UNKNOWN GameData_1ae20fc;
extern _UNKNOWN GameData_1ae2119;
extern _UNKNOWN GameData_1ae5908;
extern _UNKNOWN GameData_1ae5a2f;
extern _UNKNOWN GameData_1ae9824;
extern _UNKNOWN GameData_1ae98ba;
extern _UNKNOWN GameData_1ae98c4;
extern _UNKNOWN GameData_1ae98f1;
extern _UNKNOWN GameData_1ae9906;
extern _UNKNOWN GameData_1ae9924;
extern _UNKNOWN GameData_1aed8d9;
extern _UNKNOWN GameData_1aed8e3;
extern _UNKNOWN GameData_1aed8f8;
extern _UNKNOWN GameData_1aed905;
extern _UNKNOWN GameData_1af1404;
extern _UNKNOWN GameData_1af1450;
extern _UNKNOWN GameData_1af1467;
extern _UNKNOWN GameData_1af14ee;
extern _UNKNOWN GameData_1af14f8;
extern _UNKNOWN GameData_1af1506;
extern _UNKNOWN GameData_1af1528;
extern _UNKNOWN GameData_1af1540;
extern _UNKNOWN GameData_1af4ee0;
extern _UNKNOWN GameData_1af52aa;
extern _UNKNOWN GameData_1af9076;
extern _UNKNOWN GameData_1af9095;
extern _UNKNOWN GameData_1afceec;
extern _UNKNOWN GameData_1afcf5d;
extern _UNKNOWN GameData_1afcf74;
extern _UNKNOWN GameData_1b47d78;
extern _UNKNOWN GameData_1b4d210;
extern _UNKNOWN GameData_21eef10;
extern _UNKNOWN GameData_21f4318;
extern _UNKNOWN GameData_21f4999;
extern _UNKNOWN GameData_21f49b0;
extern _UNKNOWN GameData_21f4d78;
extern _UNKNOWN GameData_21f4d98;
extern _UNKNOWN GameData_21f5248;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (**game_anonymous_MountBind_vtable_ptr)();
extern __int64 (*GameData_1f94210[])();
extern __int64 (*GameData_1f94290[])();
extern __int64 (*GameData_1f94310[])();
extern __int64 (*GameData_1faf2d8[])();
extern __int64 (*GameData_1faf358[])();
extern __int64 (*GameData_1fb0e30[])();
extern __int64 (*game_anonymous_ProcGameSaveData_vtable[])();
extern __int64 (*game_anonymous_ProcSaveReload_vtable[])();
extern __int64 (*game_anonymous_ProcSaveSkip_vtable[])();
extern __int64* GameData_212c650[5];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cc38[64];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cec0;
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212d7f0[5];
extern __int64* GameData_212de10[3];
extern __int64* GameData_212dea8;
extern __int64* GameData_21309c8[5];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* snd_Game_s_instance_ptr[3];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_1ad2a61;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212d6e8;
extern __int64 GameData_2130f48;
extern __int64 GameData_21c6980;
extern __int64 GameData_21c9648;
extern __int64 GameData_21c9868;
extern __int64 GameData_21c9870;
extern __int64 GameData_21c9988;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca0a0;
extern __int64 GameData_21ca310;
extern __int64 GameData_21d8800;
extern __int64 GameData_21d8808;
extern __int64 GameData_21d8830;
extern __int64 GameData_21d8838;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 GameData_21eea58;
extern __int64 GameData_21eead8;
extern __int64 GameData_21eeae0;
extern __int64 GameData_21eeae8;
extern __int64 GameData_21eeaf8;
extern __int64 GameData_21eeb08;
extern __int64 GameData_21eeb18;
extern __int64 GameData_21eeb20;
extern __int64 GameData_21eeb28;
extern __int64 GameData_21eeb38;
extern __int64 GameData_21eeb48;
extern __int64 GameData_21eeb58;
extern __int64 GameData_21eeb60;
extern __int64 GameData_21eeb68;
extern __int64 GameData_21eeb78;
extern __int64 GameData_21eeb88;
extern __int64 GameData_21eeb98;
extern __int64 GameData_21eeba0;
extern __int64 GameData_21eeba8;
extern __int64 GameData_21eebb8;
extern __int64 GameData_21eebc8;
extern __int64 GameData_21eebd8;
extern __int64 GameData_21eebe0;
extern __int64 GameData_21eebe8;
extern __int64 GameData_21eebf8;
extern __int64 GameData_21eec08;
extern __int64 GameData_21eec18;
extern __int64 GameData_21eec20;
extern __int64 GameData_21eec28;
extern __int64 GameData_21eec38;
extern __int64 GameData_21eec48;
extern __int64 GameData_21eec58;
extern __int64 GameData_21eec60;
extern __int64 GameData_21eec68;
extern __int64 GameData_21eec78;
extern __int64 GameData_21eec88;
extern __int64 GameData_21eec98;
extern __int64 GameData_21eeca0;
extern __int64 GameData_21eeca8;
extern __int64 GameData_21eecb8;
extern __int64 GameData_21eecc8;
extern __int64 GameData_21eecd8;
extern __int64 GameData_21eece0;
extern __int64 GameData_21eece8;
extern __int64 GameData_21eecf8;
extern __int64 GameData_21eed08;
extern __int64 GameData_21eed18;
extern __int64 GameData_21eed20;
extern __int64 GameData_21eed28;
extern __int64 GameData_21eed38;
extern __int64 GameData_21eed48;
extern __int64 GameData_21eed58;
extern __int64 GameData_21eed60;
extern __int64 GameData_21eed68;
extern __int64 GameData_21eed78;
extern __int64 GameData_21eed88;
extern __int64 GameData_21eed98;
extern __int64 GameData_21eeda0;
extern __int64 GameData_21eeda8;
extern __int64 GameData_21eedb8;
extern __int64 GameData_21eedc8;
extern __int64 GameData_21eedd8;
extern __int64 GameData_21eede0;
extern __int64 GameData_21eede8;
extern __int64 GameData_21eedf8;
extern __int64 GameData_21eee08;
extern __int64 GameData_21eee18;
extern __int64 GameData_21eee20;
extern __int64 GameData_21eee28;
extern __int64 GameData_21eee38;
extern __int64 GameData_21eee48;
extern __int64 GameData_21eee58;
extern __int64 GameData_21eee60;
extern __int64 GameData_21eee68;
extern __int64 GameData_21eee78;
extern __int64 GameData_21eee88;
extern __int64 GameData_21eee98;
extern __int64 GameData_21eeea0;
extern __int64 GameData_21eeea8;
extern __int64 GameData_21eeeb8;
extern __int64 GameData_21eeec8;
extern __int64 GameData_21eeed8;
extern __int64 GameData_21eeee0;
extern __int64 GameData_21eeee8;
extern __int64 GameData_21eeef8;
extern __int64 GameData_21eef08;
extern __int64 GameData_21eef20;
extern __int64 GameData_21f3c90;
extern __int64 GameData_21f3cc0;
extern __int64 GameData_21f430c;
extern __int64 GameData_21f49a8;
extern __int64 GameData_21f49b8;
extern __int64 GameData_21f49c0;
extern __int64 GameData_21f49c8;
extern __int64 GameData_21f49d0;
extern __int64 GameData_21f4d50;
extern __int64 GameData_21f4d58;
extern __int64 GameData_21f4d60;
extern __int64 GameData_21f4d68;
extern __int64 GameData_21f4d70;
extern __int64 GameData_21f4d80;
extern __int64 GameData_21f4d88;
extern __int64 GameData_21f4d90;
extern __int64 GameData_21f4da8[];
extern __int64 GameData_21f4db0;
extern __int64 GameData_21f4db8;
extern __int64 GameData_21f4dc0;
extern __int64 GameData_21f4dc8;
extern __int64 GameData_21f4dd0;
extern __int64 GameData_21f4dd8;
extern __int64 GameData_21f4de0;
extern __int64 GameData_21f4de8;
extern __int64 GameData_21f4df0;
extern __int64 GameData_21f4df8;
extern __int64 GameData_21f4e00;
extern __int64 GameData_21f4e08;
extern __int64 GameData_21f4e10;
extern __int64 GameData_21f4e18;
extern __int64 GameData_21f4e20;
extern __int64 GameData_21f4e28;
extern __int64 GameData_21f4e30;
extern __int64 GameData_21f4e38;
extern __int64 GameData_21f4e40;
extern __int64 GameData_21f4e48;
extern __int64 GameData_21f4e50;
extern __int64 GameData_21f4e58;
extern __int64 GameData_21f4e60;
extern __int64 GameData_21f4e68;
extern __int64 GameData_21f4e70;
extern __int64 GameData_21f4e78;
extern __int64 GameData_21f4e80;
extern __int64 GameData_21f4e88;
extern __int64 GameData_21f4e90;
extern __int64 GameData_21f4e98;
extern __int64 GameData_21f4ea0;
extern __int64 GameData_21f4ea8;
extern __int64 GameData_21f4eb0;
extern __int64 GameData_21f4eb8;
extern __int64 GameData_21f4ec0;
extern __int64 GameData_21f4ec8;
extern __int64 GameData_21f4ed0;
extern __int64 GameData_21f4ed8;
extern __int64 GameData_21f4ee0;
extern __int64 GameData_21f4ee8;
extern __int64 GameData_21f4ef0;
extern __int64 GameData_21f4ef8;
extern __int64 GameData_21f4f00;
extern __int64 GameData_21f4f08;
extern __int64 GameData_21f4f10;
extern __int64 GameData_21f4f18;
extern __int64 GameData_21f4f20;
extern __int64 GameData_21f4f28;
extern __int64 GameData_21f4f30;
extern __int64 GameData_21f4f38;
extern __int64 GameData_21f4f40;
extern __int64 GameData_21f4f48;
extern __int64 GameData_21f4f50;
extern __int64 GameData_21f4f58;
extern __int64 GameData_21f4f60;
extern __int64 GameData_21f4f68;
extern __int64 GameData_21f4f70;
extern __int64 GameData_21f4f78;
extern __int64 GameData_21f4f80;
extern __int64 GameData_21f4f88;
extern __int64 GameData_21f4f90;
extern __int64 GameData_21f4f98;
extern __int64 GameData_21f4fa0;
extern __int64 GameData_21f4fa8;
extern __int64 GameData_21f4fb0;
extern __int64 GameData_21f4fb8;
extern __int64 GameData_21f4fc0;
extern __int64 GameData_21f4fc8;
extern __int64 GameData_21f4fd0;
extern __int64 GameData_21f4fd8;
extern __int64 GameData_21f4fe0;
extern __int64 GameData_21f4fe8;
extern __int64 GameData_21f4ff0;
extern __int64 GameData_21f4ff8;
extern __int64 GameData_21f5000;
extern __int64 GameData_21f5008;
extern __int64 GameData_21f5010;
extern __int64 GameData_21f5018;
extern __int64 GameData_21f5020;
extern __int64 GameData_21f5028;
extern __int64 GameData_21f5030;
extern __int64 GameData_21f5038;
extern __int64 GameData_21f5040;
extern __int64 GameData_21f5048;
extern __int64 GameData_21f5050;
extern __int64 GameData_21f5058;
extern __int64 GameData_21f5060;
extern __int64 GameData_21f5068;
extern __int64 GameData_21f5070;
extern __int64 GameData_21f5078;
extern __int64 GameData_21f5080;
extern __int64 GameData_21f5088;
extern __int64 GameData_21f5090;
extern __int64 GameData_21f5098;
extern __int64 GameData_21f50a0;
extern __int64 GameData_21f50a8;
extern __int64 GameData_21f50b0;
extern __int64 GameData_21f50b8;
extern __int64 GameData_21f50c0;
extern __int64 GameData_21f50c8;
extern __int64 GameData_21f50d0;
extern __int64 GameData_21f50d8;
extern __int64 GameData_21f50e0;
extern __int64 GameData_21f50e8;
extern __int64 GameData_21f50f0;
extern __int64 GameData_21f50f8;
extern __int64 GameData_21f5100;
extern __int64 GameData_21f5108;
extern __int64 GameData_21f5110;
extern __int64 GameData_21f5118;
extern __int64 GameData_21f5120;
extern __int64 GameData_21f5128;
extern __int64 GameData_21f5130;
extern __int64 GameData_21f5138;
extern __int64 GameData_21f5140;
extern __int64 GameData_21f5148;
extern __int64 GameData_21f5150;
extern __int64 GameData_21f5158;
extern __int64 GameData_21f5160;
extern __int64 GameData_21f5168;
extern __int64 GameData_21f5170;
extern __int64 GameData_21f5178;
extern __int64 GameData_21f5180;
extern __int64 GameData_21f5188;
extern __int64 GameData_21f5190;
extern __int64 GameData_21f5198;
extern __int64 GameData_21f51a0;
extern __int64 GameData_21f51a8;
extern __int64 GameData_21f51b0;
extern __int64 GameData_21f51b8;
extern __int64 GameData_21f51c0;
extern __int64 GameData_21f51c8;
extern __int64 GameData_21f51d0;
extern __int64 GameData_21f51d8;
extern __int64 GameData_21f51e0;
extern __int64 GameData_21f51e8;
extern __int64 GameData_21f51f0;
extern __int64 GameData_21f51f8;
extern __int64 GameData_21f5200;
extern __int64 GameData_21f5208;
extern __int64 GameData_21f5210;
extern __int64 GameData_21f5218;
extern __int64 GameData_21f5220;
extern __int64 GameData_21f5228;
extern __int64 GameData_21f5230;
extern __int64 GameData_21f5238;
extern __int64 GameData_21f5240;
extern __int64 GameData_21f5250[];
extern __int64 GameData_21f5258;
extern __int64 GameData_21f5260;
extern __int64 GameData_21f5268;
extern __int64 GameData_21f5278;
extern __int64 GameData_21f5280;
extern __int64 GameData_21f5288;
extern __int64 GameData_21f5290;
extern __int64 GameData_21f52a0;
extern __int64 GameData_21f52a8;
extern __int64 GameData_21f52b0;
extern __int64 GameData_21f52b8;
extern __int64 GameData_21f52c8;
extern __int64 GameData_21f52d0;
extern __int64 GameData_21f52d8;
extern __int64 GameData_21f52e0;
extern __int64 GameData_21f52f0;
extern __int64 GameData_21f52f8;
extern __int64 GameData_21f5300;
extern __int64 GameData_21f5308;
extern __int64 GameData_21f5318;
extern __int64 GameData_21f5320;
extern __int64 GameData_21f5328;
extern __int64 GameData_21f5330;
extern __int64 GameData_21f5340;
extern __int64 GameData_21f5348;
extern __int64 GameData_21f5350;
extern __int64 GameData_21f5358;
extern __int64 GameData_21f5368;
extern __int64 GameData_21f5370;
extern __int64 GameData_21f5378;
extern __int64 GameData_21f5380;
extern __int64 GameData_21f61c0[];
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_GameRestartData_unknown_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_kVariableHubFacilityForced;
extern __int64 game_map_UnitFlags_instance_;
extern __int64 game_script_map_effect_g_sequence;
extern char** GameData_212d860[3];
extern char** GameData_212d868[2];
extern char** GameData_212d870;
extern char GameData_1a9f09e;
extern char GameData_21eead0;
extern char GameData_21eeb10;
extern char GameData_21eeb50;
extern char GameData_21eeb90;
extern char GameData_21eebd0;
extern char GameData_21eec10;
extern char GameData_21eec50;
extern char GameData_21eec90;
extern char GameData_21eecd0;
extern char GameData_21eed10;
extern char GameData_21eed50;
extern char GameData_21eed90;
extern char GameData_21eedd0;
extern char GameData_21eee10;
extern char GameData_21eee50;
extern char GameData_21eee90;
extern char GameData_21eeed0;
extern char GameData_21eef28;
extern char GameData_21f4998;
extern int GameData_21668e0;
extern int GameData_21d87f8;
extern int GameData_21d8828;
extern int GameData_21d984c;
extern int GameData_21eeaf0;
extern int GameData_21eeb00;
extern int GameData_21eeb30;
extern int GameData_21eeb40;
extern int GameData_21eeb70;
extern int GameData_21eeb80;
extern int GameData_21eebb0;
extern int GameData_21eebc0;
extern int GameData_21eebf0;
extern int GameData_21eec00;
extern int GameData_21eec30;
extern int GameData_21eec40;
extern int GameData_21eec70;
extern int GameData_21eec80;
extern int GameData_21eecb0;
extern int GameData_21eecc0;
extern int GameData_21eecf0;
extern int GameData_21eed00;
extern int GameData_21eed30;
extern int GameData_21eed40;
extern int GameData_21eed70;
extern int GameData_21eed80;
extern int GameData_21eedb0;
extern int GameData_21eedc0;
extern int GameData_21eedf0;
extern int GameData_21eee00;
extern int GameData_21eee30;
extern int GameData_21eee40;
extern int GameData_21eee70;
extern int GameData_21eee80;
extern int GameData_21eeeb0;
extern int GameData_21eeec0;
extern int GameData_21eeef0;
extern int GameData_21eef00;
extern int GameData_21f4314;
extern int GameData_21f5270;
extern int GameData_21f5298;
extern int GameData_21f52c0;
extern int GameData_21f52e8;
extern int GameData_21f5310;
extern int GameData_21f5338;
extern int GameData_21f5360;
extern int GameData_21f5388;
extern int GameData_21f61c8;
extern unsigned int GameData_1b37744[5];
float GameRoutine_143f400(unsigned __int64*);
float fmodf(float, float);
int* GameRoutine_8767a0(int* result);
int* GameRoutine_8c6dc0(int* result, int*, _QWORD*, unsigned __int64, int*);
long double UnitActor_81ba20(__int64, long double result);
unsigned __int64 GameRoutine_887920(_QWORD*, __int64);
void* game_90f590_alt1(__int64, _DWORD*, __int16, __int16,
                       unsigned int) __asm__("game_90f590");
void GameRoutine_77a9c0();
void GameRoutine_87c860();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn))
GameRoutine_60a210_alt1(_QWORD) __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_6e5a20();
void __attribute__((noreturn)) GameRoutine_6f26d0();
void __attribute__((noreturn)) GameRoutine_87a6c0();
void __attribute__((noreturn)) GameRoutine_9433d0(long double);
void __attribute__((noreturn)) GameRoutine_943430(void);
void __attribute__((noreturn)) GameRoutine_998130();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
bool game_869980();
__int16* game_86ad40(__int64 a1, __int16* a2);
__int64* game_874800(__int64* a1, char a2, __int64 a3);
__int64* game_874970(__int64* a1, char a2, unsigned __int8 a3);
__int64* game_874c50(__int64* a1, char a2, unsigned __int8 a3,
                     unsigned __int8 a4, int a5, int a6);
__int64 game_874e20(__int64* a1, __int64 a2);
bool game_875430(__int64 a1);
bool game_877b20(unsigned __int8 a1, unsigned __int8 a2, int a3, int a4);
bool game_877f00_alt1(__int64* a1, __int64 a2,
                      __int64 a3) __asm__("game_877f00");
bool game_878240_alt1(__int64* a1, __int64 a2,
                      __int64 a3) __asm__("game_878240");
bool game_8784c0_alt1(__int64* a1, __int64 a2) __asm__("game_8784c0");
bool game_878d80_alt1(__int64* a1) __asm__("game_878d80");
__int64 game_879610(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, int a4,
                    int a5);
__int64 game_8799d0(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, int a4);
int* game_8a0490(int* result, int* a2, int* a3);
int* game_8a06e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
bool game_8a2260(__int64 a1);
__int64 game_8a26a0(__int64** a1);
__int64 game_8ab360(__int64 result);
bool game_8ae640(__int64* a1, __int64 a2, char a3);
__int64** game_8aef60(__int64** a1, unsigned __int16* a2);
__int64** game_8af240(__int64** result, __int64** a2, __n128 a3);
__int64** game_8af380(__int64** a1, __int64** a2, __n128 a3);
__int64 game_8b0ee0(__int64 a1, __n128 a2);
__int64 game_8b14e0(__int64 result);
__int64 game_8c4070(__int64 result);
__int64 game_8c4fc0(__int64 result, __int64 a2);
__attribute__((swiftcall)) void game_8c50a0(PSEUDO_X8 x8_, _DWORD* a1);
int* game_8c6b20(int* result, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5,
                 __int64 a6);
unsigned __int64 game_8ecb20(unsigned __int64 result, unsigned int* a2);
__attribute__((swiftcall)) void game_907570(PSEUDO_X8 x8_, __int64 a1);
__int64 game_90d5a0(__int64 result);
__attribute__((swiftcall)) void game_90e4c0(PSEUDO_X8 x8_, _DWORD* a1,
                                            __int64 a2, __int64 a3, int a4,
                                            unsigned int a5, int a6, int a7);
__int128* game_90edc0_alt1(__int128* result, __int64 a2) __asm__("game_90edc0");
__int64 game_90f080(__int64 a1, __int64 a2, unsigned int a3, char a4);
void* game_90f590(__int64 a1, _DWORD* a2, __int16 a3, __int16 a4,
                  unsigned __int8 a5);
_QWORD* game_910680(_QWORD* result, unsigned int* a2);
_QWORD* game_9107e0(_QWORD* result, _DWORD* a2);
__int64 game_914430(__int64 result, int a2);
__int64 game_914820();
void game_914b80(__int64 a1);
__attribute__((swiftcall)) void game_91c130(PSEUDO_X8 x8_,
                                            unsigned __int64 result);
__int64* game_92aca0(__int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void game_92ae90(PSEUDO_X8 x8_, __int64 a1,
                                            unsigned __int8* a2);
__attribute__((swiftcall)) void game_92af90(PSEUDO_X8 x8_, __int64 a1,
                                            unsigned __int8* a2);
__attribute__((swiftcall)) void game_92b240(PSEUDO_X8 x8_, __int64 a1);
__int64 game_93f620(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_93fa20(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2);
__attribute__((swiftcall)) void game_940ce0(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2, __int64 a3,
                                            unsigned __int8 a4);
__attribute__((swiftcall)) void game_941ce0(PSEUDO_X8 x8_, __int64 result);
__attribute__((swiftcall)) void
game_9470c0_alt1(PSEUDO_X8 x8_, unsigned __int64 result) __asm__("game_9470c0");
__int64 game_957720(__int64 a1, __int64 a2, __int64 a3, __int16* a4);
__int64 game_958960(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_9591b0(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void game_95e2c0(PSEUDO_X8 x8_, __int64 result,
                                            __int64 a2);
__int64 game_95e950(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_95eaa0(PSEUDO_X8 x8_, __int64 result,
                                            __int64 a2);
__attribute__((swiftcall)) void game_95eea0(PSEUDO_X8 x8_, __int64 result,
                                            __int64 a2);
__attribute__((swiftcall)) void game_95f260(PSEUDO_X8 x8_, __int64 result);
__int64 game_960210(__int64 a1, __int64 a2);
__int64 game_960280(__int64 result);
__int64 game_972b70(__int64 a1, __int64 a2);
void* game_97b2f0(__int64 a1);
__int64 game_97bb30();
bool game_97e570(unsigned __int8* a1, __int64* a2, __int64 a3, __int64 a4);
void game_9901c0();
__int64 game_9903e0(__int64 result);
__int64* game_990940();
__int64 game_990a70(__int64 a1);
__int64 game_996d60(__int64 a1, int a2, int a3);
__int64* game_9a28e0(int a1);
__int64* game_9a3180();
__int64 game_9a6420();
__attribute__((swiftcall)) void GameRoutine_82faa0(PSEUDO_X8, _QWORD, _QWORD);
__int64 EffectConst_961520(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float,
                           float);
__int64 GameRoutine_133e160(__int64, _QWORD*);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a1cc0(_QWORD, float);
__int64 GameRoutine_14a36c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_82f5a0(float*, unsigned __int16*, __int64, _WORD**);
__int64 GameRoutine_9a48c0(_QWORD, _QWORD);
__int64 TrickEntity_7d1480(__int64 result);
__int64 Troop_133e4e0(__int64);
__int64 UnitActor_819a50(__int64);
__int64 UnitActor_819f40(__int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 UnitActor_81cda0(__int64, __int128*, float);
__int64 game_UnitActor_CreateMainCharacter(__int64 result, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64* GameData_212ce80[5];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9cf0;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21d9d20;
extern __int64 GameData_21d9d30;
extern __int64 GameData_21d9d38;
extern __int64 GameData_21d9d48;
extern __int64 GameData_21d9d50;
extern __int64 GameData_21d9d60;
extern __int64 GameData_21d9d68;
extern __int64 GameData_21d9d70;
extern __int64 GameData_21f4410;
extern __int64 GameData_21f4418;
extern __int64 GameData_224b698;
extern __int64 GameData_224b6a0;
extern __int64 GameData_224b6a8;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_map_effect_g_effect_manager;
extern char GameData_21d9d78;
extern int GameData_21d9d7c;
float Height_7c4d10(__int64, float, float);
__int64 game_968b60(__int64 a1, __int64 a2, __int64 a3);
__int64 game_9953e0(__int64 a1);
_QWORD*
game_UnitPool_Find_6ead60_alt1(__int64*,
                               int*) __asm__("game_UnitPool_Find_6ead60");
__attribute__((swiftcall)) void Dir_70e900_alt1(PSEUDO_X8, __int16* result,
                                                __int64) __asm__("Dir_70e900");
__int64 Cursor_734a80_alt1(__int64, __int64*) __asm__("Cursor_734a80");
__int64 Dir_70df40_alt1(__int16*, __int16*) __asm__("Dir_70df40");
__int64 Unit_6c8a80_alt1(__int64 result, int, int,
                         __int64) __asm__("Unit_6c8a80");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
float Unit_6c7fa0_alt1(__int64, _OWORD*) __asm__("Unit_6c7fa0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
long double UnitActor_81ba20_alt1(__int64) __asm__("UnitActor_81ba20");
void CharacterBuilder_1084780_alt1(__int64) __asm__("CharacterBuilder_1084780");
void __attribute__((noreturn))
GameRoutine_943430_alt1() __asm__("GameRoutine_943430");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_90edc0(__int64 a1);
__int64 GameHr_657460(__int64*, const char*, char);
__int64 GameHr_65d580(__int64 result, __int64);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_oe_GetProgramTotalActiveTime_alt1() __asm__(
    "nn_oe_GetProgramTotalActiveTime");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt2(__int64) __asm__("nn_os_UnlockMutex");
__int64 save_Task_Close(__int64);
__int64 save_Task_GetSize(__int64, __int64);
__int64 save_Task_Mount(__int64);
__int64 save_Task_Write(__int64, __int64, __int64, __int64);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 GameData_21f61c0_alt1 __asm__("GameData_21f61c0");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_6604e0(__int64, __int64);
void GameHr_660820(__int64, __int64);
void GameRoutine_6e5900_alt1(__int64*, _DWORD*) __asm__("GameRoutine_6e5900");
void nn_os_YieldThread_alt1() __asm__("nn_os_YieldThread");
bool game_877f00(const char** a1, __int64 a2, __int64 a3);
bool game_878240(const char** a1, __int64 a2, __int64 a3);
bool game_8784c0(const char** a1, __int64 a2);
bool game_878d80(const char** a1);
__attribute__((swiftcall)) void game_9470c0(PSEUDO_X8 x8_, __int64 a1);

bool game_869980()
{
  __int64 v0;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  __int64 v12;
  __int16 v13;
  __int16 v14;
  __int64 v15;
  __int16 v16;
  __int16 v17;
  __int16 v18;
  __int16 v19;
  __int16 v20;
  unsigned __int64 v21;
  __int16 v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  struct {
    __int64 v33;
    __int16 v34;
    __int16 v35;
    __int16 v36;
    __int16 v37;
    __int16 v38;
    __int16 v39;
  } v33_;

  v0 = game_gmap_GmapClock_instance_;
  if (game_gmap_GmapClock_instance_ == 0 ||
      *(int*)(GameData_21c9648 + 16) > 0) {
    return false;
  }
  v2 = *(__int16*)(game_gmap_GmapClock_instance_ + 8);
  v3 = *(__int16*)(game_gmap_GmapClock_instance_ + 10);
  v4 = *(__int16*)(game_gmap_GmapClock_instance_ + 12);
  v5 = *(__int16*)(game_gmap_GmapClock_instance_ + 14);
  v6 = *(__int16*)(game_gmap_GmapClock_instance_ + 16);
  v7 = *(__int16*)(game_gmap_GmapClock_instance_ + 18);
  v8 = *(_DWORD*)(game_gmap_GmapClock_instance_ + 48);
  if (v8 != 0) {
    v9 = *(_WORD*)(game_gmap_GmapClock_instance_ + 10);
    v10 = *(_WORD*)(game_gmap_GmapClock_instance_ + 8);
    v11 = *(_WORD*)(game_gmap_GmapClock_instance_ + 14);
    v12 = *(__int16*)(game_gmap_GmapClock_instance_ + 26);
    v13 = *(_WORD*)(game_gmap_GmapClock_instance_ + 16);
    v14 = *(_WORD*)(game_gmap_GmapClock_instance_ + 18);
    v15 = *(__int16*)(game_gmap_GmapClock_instance_ + 28);
    v16 = *(_WORD*)(game_gmap_GmapClock_instance_ + 12);
    v17 = *(_WORD*)(game_gmap_GmapClock_instance_ + 20);
    v18 = *(_WORD*)(game_gmap_GmapClock_instance_ + 22);
    v19 = *(_WORD*)(game_gmap_GmapClock_instance_ + 24);
    v20 = *(_WORD*)(game_gmap_GmapClock_instance_ + 30);
    v21 = (v3 << 24) + (v2 << 32) + (v4 << 18) + (v5 << 12) + (v6 << 6) + v7;
    if (v21 < ((__int64)v18 << 24) + ((__int64)v17 << 32) +
                  ((__int64)v19 << 18) + (v12 << 12) + (v15 << 6) + v20) {
      v22 = v15 - 1;
      if ((int)v15 >= 1) {
      LABEL_9:
        *(_WORD*)(v0 + 28) = v22;
        *(_WORD*)(v0 + 30) = 59;
        goto LABEL_10;
      }
      if ((int)v12 >= 1) {
        *(_WORD*)(game_gmap_GmapClock_instance_ + 26) = v12 - 1;
        v22 = 59;
        goto LABEL_9;
      }
    }
  LABEL_10:
    v33_.v33 = v0;
    v33_.v34 = v10;
    v33_.v35 = v9;
    v33_.v36 = v16;
    v33_.v37 = v11;
    v33_.v38 = v13;
    v33_.v39 = v14;
    v23 = 0x1.e000000000000p+5f /
          (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v23 <= 0x0.0p+0f) {
      v24 = 0x1.119ce00000000p-6f;
    }
    else {
      v24 = v23 * 0x1.119ce00000000p-6f;
    }
    v25 = *(float*)(v0 + 44) + (float)(v24 * (float)v8);
    *(float*)(v0 + 44) = v25;
    if (v25 >= 0x1.0000000000000p+0f) {
      *(_WORD*)(v0 + 18) = v14 + (int)v25;
      *(float*)(v0 + 44) = fmodf(v25, 0x1.0000000000000p+0f);
    }
    GameRoutine_86b4e0(&v33_.v33);
    v26 = *(__int16*)(v0 + 8);
    v27 = *(__int16*)(v0 + 12);
    v28 = (__int64)*(__int16*)(v0 + 10) << 24;
    v29 = *(__int16*)(v0 + 14);
    v30 = *(__int16*)(v0 + 16);
    v31 = *(__int16*)(v0 + 18);
    *(_WORD*)(v0 + 20) = v17;
    *(_WORD*)(v0 + 22) = v18;
    *(_WORD*)(v0 + 24) = v19;
    *(_WORD*)(v0 + 26) = v12;
    *(_WORD*)(v0 + 28) = v15;
    *(_WORD*)(v0 + 30) = v20;
    v32 = v28 + (v26 << 32) + (v27 << 18) + (v29 << 12) + (v30 << 6) + v31;
    return v32 != v21;
  }
  v32 = (v3 << 24) + (v2 << 32) + (v4 << 18) + (v5 << 12) + (v6 << 6) + v7;
  v21 = v32;
  return v32 != v21;
}

__int16* game_86ad40(__int64 a1, __int16* a2)
{
  __int16* result;
  int v4;
  int v5;
  int v6;
  int v7;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  int v12;
  __int16 v13;
  __int16 v14;
  __int16 v15;
  __int16 v16;
  int v17;
  __int16 v18;

  result =
      X8CALL_X0(__int16*, Dir_70e900_alt1((void*)((__int64)&v14), a2, a1 + 20));
  if (v15 * v14 * v16 != 0) {
    v10 = v15;
    v9 = v14;
    v11 = v16;
    v12 = v17;
    v13 = v18;
  }
  else {
    v4 = *(__int16*)(a1 + 22);
    v5 = *(__int16*)(a1 + 24);
    v6 = v4 * *(__int16*)(a1 + 20);
    v7 = *(_DWORD*)(a1 + 26);
    v8 = *(_WORD*)(a1 + 30);
    v9 = *(_WORD*)(a1 + 20);
    v10 = v4;
    v11 = v5;
    v12 = v7;
    v13 = v8;
    if (v6 * v5 == 0) {
      return result;
    }
  }
  result = Dir_70dd80((__int16*)(a1 + 8), &v9);
  if (((__int64)result[1] << 24) + ((__int64)*result << 32) +
          ((__int64)result[2] << 18) + ((__int64)result[3] << 12) +
          ((__int64)result[4] << 6) + result[5] ==
      ((__int64)v10 << 24) + ((__int64)v9 << 32) + ((__int64)v11 << 18) +
          ((__int64)(__int16)v12 << 12) + ((__int64)SHIWORD(v12) << 6) + v13) {
    *(_DWORD*)(a1 + 44) = 0;
  }
  return result;
}

__int64* game_874800(__int64* a1, char a2, __int64 a3)
{
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  _BYTE v18[8];
  struct {
    __int64 v19;
    unsigned __int64 v20;
    char* v21;
  } v19_;

  v18[0] = a2;
  v5 = strlen(a3);
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
    v19_.v20 = v6;
    v19_.v21 = v7;
    v19_.v19 = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(v19_.v19) = 2 * v5;
  v7 = (char*)&v19_.v19 + 1;
  if (v5 != 0) {
  LABEL_9:
    memcpy(v7, a3, v6);
  }
  v7[v6] = 0;
  v9 = a1[1];
  if (v9 >= a1[2]) {
    v14 = GameRoutine_87a4e0(a1, (__int64)v18);
    v15 = v19_.v19 & 1;
    a1[1] = v14;
    if (v15 == 0) {
      return a1;
    }
  }
  else {
    *(_BYTE*)v9 = v18[0];
    v10 = (__int64*)(v9 + 8);
    v11 = v19_.v19 & 1;
    if (v11 != 0) {
      fw_text_String_CopyTerminated(v10, (__int64)v19_.v21, v19_.v20);
    }
    else {
      v12 = v19_.v19;
      v13 = (__int64)v19_.v21;
      *(_QWORD*)(v9 + 16) = v19_.v20;
      *(_QWORD*)(v9 + 24) = v13;
      *v10 = v12;
    }
    a1[1] = v9 + 32;
    if (v11 == 0) {
      return a1;
    }
  }
  if (v19_.v21 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  v19_.v21);
  }
  return a1;
}

__int64* game_874970(__int64* a1, char a2, unsigned __int8 a3)
{
  __int64* v6;
  __int64 v7;
  bool v8;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  char v19;
  __int64 v20;
  char v22[8];
  struct {
    __int64 v23;
    unsigned __int64 v24;
    char* v25;
  } v23_;

  v6 = game_820d50(21);
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v6);
    if (v7 != 0) {
      v8 = *(_DWORD*)(v7 + 32) == 0 || (unsigned __int8)a2 > 7u;
      if (!v8 && ((1 << a2) & 0xC2) != 0) {
        return a1;
      }
    }
  }
  v22[0] = a2;
  v10 = GameRoutine_874b20(a3, 0, 0, 0);
  v11 = strlen(v10);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v12 = v11;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v13 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v14,
                                                16, 0);
    v23_.v24 = v12;
    v23_.v25 = v13;
    v23_.v23 = v14 | 1;
    goto LABEL_19;
  }
  LOBYTE(v23_.v23) = 2 * v11;
  v13 = (char*)&v23_.v23 + 1;
  if (v11 != 0) {
  LABEL_19:
    memmove(v13, v10, v12);
  }
  v13[v12] = 0;
  v15 = a1[1];
  if (v15 >= a1[2]) {
    v18 = GameRoutine_87a6e0(a1, (__int64)v22);
    v19 = v23_.v23;
    a1[1] = v18;
    if ((v19 & 1) != 0 && v23_.v25 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v23_.v25);
    }
  }
  else {
    *(_BYTE*)v15 = v22[0];
    v16 = v23_.v23;
    v17 = v23_.v25;
    *(_QWORD*)(v15 + 16) = v23_.v24;
    *(_QWORD*)(v15 + 24) = v17;
    *(_QWORD*)(v15 + 8) = v16;
    a1[1] = v15 + 32;
  }
  return a1;
}

__int64* game_874c50(__int64* a1, char a2, unsigned __int8 a3,
                     unsigned __int8 a4, int a5, int a6)
{
  __int64* v12;
  __int64 v13;
  bool v14;
  char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  char v25;
  __int64 v26;
  char v28[8];
  struct {
    __int64 v29;
    unsigned __int64 v30;
    char* v31;
  } v29_;

  v12 = game_820d50(21);
  if (game_GameModeData_instance_ != 0) {
    v13 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v12);
    if (v13 != 0) {
      v14 = *(_DWORD*)(v13 + 32) == 0 || (unsigned __int8)a2 > 7u;
      if (!v14 && ((1 << a2) & 0xC2) != 0) {
        return a1;
      }
    }
  }
  v28[0] = a2;
  v16 = GameRoutine_874b20(a3, a4, a5, a6);
  v17 = strlen(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v19 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v20,
                                                16, 0);
    v29_.v30 = v18;
    v29_.v31 = v19;
    v29_.v29 = v20 | 1;
    goto LABEL_19;
  }
  LOBYTE(v29_.v29) = 2 * v17;
  v19 = (char*)&v29_.v29 + 1;
  if (v17 != 0) {
  LABEL_19:
    memmove(v19, v16, v18);
  }
  v19[v18] = 0;
  v21 = a1[1];
  if (v21 >= a1[2]) {
    v24 = GameRoutine_87a6e0(a1, (__int64)v28);
    v25 = v29_.v29;
    a1[1] = v24;
    if ((v25 & 1) != 0 && v29_.v31 != nullptr) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v29_.v31);
    }
  }
  else {
    *(_BYTE*)v21 = v28[0];
    v22 = v29_.v29;
    v23 = v29_.v31;
    *(_QWORD*)(v21 + 16) = v29_.v30;
    *(_QWORD*)(v21 + 24) = v23;
    *(_QWORD*)(v21 + 8) = v22;
    a1[1] = v21 + 32;
  }
  return a1;
}

__int64 game_874e20(__int64* a1, __int64 a2)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  char v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  __int64** v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v29;
  unsigned int* v30;
  unsigned int v31;
  unsigned int v32;

  if (a1[1] == *a1 && a1[8] == 0 && a1[14] == 0) {
    return 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21eef10,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21eef10) != 0) {
    GameData_21eeb18 = 0;
    GameData_21eeb20 = (__int64)GameRoutine_87a8a0;
    GameData_21eead0 = 3;
    GameData_21eeaf8 = 0;
    GameData_21eeb00 = 0;
    GameData_21eeb08 = 0;
    GameData_21eead8 = 0;
    GameData_21eeae0 = 0;
    GameData_21eeae8 = 0;
    GameData_21eeaf0 = 0;
    GameData_21eeb28 = 0;
    GameData_21eeb30 = 0;
    GameData_21eeb38 = 0;
    GameData_21eeb40 = 0;
    GameData_21eeb48 = 0;
    GameData_21eeb68 = 0;
    GameData_21eeb58 = 0;
    GameData_21eeb60 = (__int64)GameRoutine_87a8c0;
    GameData_21eeb10 = 13;
    GameData_21eeb50 = 13;
    GameData_21eeb90 = 13;
    GameData_21eebd0 = 13;
    GameData_21eec10 = 13;
    GameData_21eec50 = 13;
    GameData_21eec90 = 13;
    GameData_21eecd0 = 13;
    GameData_21eed50 = 13;
    GameData_21eeb98 = 0;
    GameData_21eeba0 = (__int64)game_anonymous_ProcGameSaveData_SaveTask;
    GameData_21eed90 = 13;
    GameData_21eedd0 = 13;
    GameData_21eee10 = 13;
    GameData_21eee50 = 13;
    GameData_21eee90 = 13;
    GameData_21eeb70 = 0;
    GameData_21eeb78 = 0;
    GameData_21eebd8 = 0;
    GameData_21eebe0 = (__int64)game_anonymous_ProcGameSaveData_DeleteTask;
    GameData_21eeb80 = 0;
    GameData_21eeb88 = 0;
    GameData_21eeba8 = 0;
    GameData_21eebb0 = 0;
    GameData_21eebb8 = 0;
    GameData_21eebc0 = 0;
    GameData_21eebc8 = 0;
    GameData_21eebe8 = 0;
    GameData_21eebf0 = 0;
    GameData_21eec18 = 0;
    GameData_21eec20 = (__int64)game_anonymous_ProcGameSaveData_DisposeTask;
    GameData_21eebf8 = 0;
    GameData_21eec00 = 0;
    GameData_21eec08 = 0;
    GameData_21eec28 = 0;
    GameData_21eec30 = 0;
    GameData_21eec38 = 0;
    GameData_21eec40 = 0;
    GameData_21eec48 = 0;
    GameData_21eec68 = 0;
    GameData_21eec58 = 0;
    GameData_21eec60 = (__int64)game_anonymous_ProcGameSaveData_SkippedTask;
    GameData_21eec70 = 0;
    GameData_21eec78 = 0;
    GameData_21eec80 = 0;
    GameData_21eec88 = 0;
    GameData_21eeca8 = 0;
    GameData_21eecb0 = 0;
    GameData_21eecb8 = 0;
    GameData_21eecc0 = 0;
    GameData_21eecc8 = 0;
    GameData_21eec98 = 0;
    GameData_21eeca0 = (__int64)GameRoutine_87ad50;
    GameData_21eecd8 = 0;
    GameData_21eece8 = 0;
    GameData_21eecf0 = 0;
    GameData_21eecf8 = 0;
    GameData_21eed00 = 0;
    GameData_21eed08 = 0;
    GameData_21eed18 = 0;
    GameData_21eed28 = 0;
    GameData_21eed30 = 0;
    GameData_21eece0 = (__int64)GameRoutine_87ad60;
    GameData_21eed38 = 0;
    GameData_21eed40 = 0;
    GameData_21eed48 = 0;
    GameData_21eed58 = 0;
    GameData_21eed68 = 0;
    GameData_21eed70 = 0;
    GameData_21eed78 = 0;
    GameData_21eed80 = 0;
    GameData_21eed88 = 0;
    GameData_21eed98 = 0;
    GameData_21eed10 = 14;
    GameData_21eeda8 = 0;
    GameData_21eedb0 = 0;
    GameData_21eedb8 = 0;
    GameData_21eedc0 = 0;
    GameData_21eedc8 = 0;
    GameData_21eedd8 = 0;
    GameData_21eede8 = 0;
    GameData_21eedf0 = 0;
    GameData_21eedf8 = 0;
    GameData_21eed20 = (__int64)ProcGameSaveData_87b030;
    GameData_21eee00 = 0;
    GameData_21eee08 = 0;
    GameData_21eee18 = 0;
    GameData_21eee28 = 0;
    GameData_21eee30 = 0;
    GameData_21eee38 = 0;
    GameData_21eee40 = 0;
    GameData_21eee48 = 0;
    GameData_21eee58 = 0;
    GameData_21eed60 = (__int64)GameRoutine_87b0a0;
    GameData_21eee68 = 0;
    GameData_21eee70 = 0;
    GameData_21eee78 = 0;
    GameData_21eee80 = 0;
    GameData_21eee88 = 0;
    GameData_21eee98 = 0;
    GameData_21eeea0 = (__int64)GameRoutine_87b6a0;
    GameData_21eeea8 = 0;
    GameData_21eeeb0 = 0;
    GameData_21eeda0 = (__int64)GameRoutine_87b0e0;
    GameData_21eeeb8 = 0;
    GameData_21eeec0 = 0;
    GameData_21eeec8 = 0;
    GameData_21eeed0 = 0;
    GameData_21eeef8 = 0;
    GameData_21eef00 = 0;
    GameData_21eef08 = 0;
    GameData_21eeef0 = 0;
    GameData_21eeee8 = 0;
    GameData_21eede0 = (__int64)GameRoutine_87b3e0;
    GameData_21eeee0 = 0;
    GameData_21eeed8 = 0;
    GameData_21eee20 = (__int64)ProcGameSaveData_87b460;
    GameData_21eee60 = (__int64)GameRoutine_87b680;
    __cxa_guard_release_alt1((__int64)&GameData_21eef10);
  }
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      336, 16, 0);
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
  v9 = *a1;
  v10 = a1[1];
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  v11 = v10 - v9;
  GameData_21eef20 = v7;
  *(_QWORD*)v7 = game_anonymous_ProcGameSaveData_vtable;
  *(_QWORD*)(v7 + 176) = 0;
  if (v10 != v9) {
    if (v11 < 0) {
      GameRoutine_87a6c0();
    }
    v12 = fw_memory_HeapManager_Allocate(*v6, v10 - v9, 16, 0);
    v13 = 0;
    *(_QWORD*)(v7 + 160) = v12;
    *(_QWORD*)(v7 + 168) = v12;
    *(_QWORD*)(v7 + 176) = v12 + v11;
    do {
      *(_BYTE*)(v12 + v13) = *(_BYTE*)(v9 + v13);
      v14 = (__int64*)(v12 + v13 + 8);
      if ((*(_BYTE*)(v9 + v13 + 8) & 1) != 0) {
        fw_text_String_CopyTerminated(v14, *(_QWORD*)(v9 + v13 + 24),
                                      *(_QWORD*)(v9 + v13 + 16));
      }
      else {
        v15 = *(_QWORD*)(v9 + v13 + 8);
        v16 = *(_QWORD*)(v9 + v13 + 24);
        *(_QWORD*)(v12 + v13 + 16) = *(_QWORD*)(v9 + v13 + 16);
        *(_QWORD*)(v12 + v13 + 24) = v16;
        *v14 = v15;
      }
      v13 += 32;
    } while (v9 + v13 != v10);
    *(_QWORD*)(v7 + 168) = v12 + v13;
  }
  v17 = (__int64*)a1[8];
  if (v17 != nullptr) {
    if (v17 != a1 + 4) {
      *(_QWORD*)(v7 + 224) = (*(__int64 (**)(__int64*))(*v17 + 16))(v17);
      v18 = (__int64*)a1[14];
      if (v18 == nullptr) {
        goto LABEL_26;
      }
    LABEL_23:
      if (v18 == a1 + 10) {
        *(_QWORD*)(v7 + 272) = v7 + 240;
        (*(void (**)(__int64*))(*v18 + 24))(v18);
      }
      else {
        *(_QWORD*)(v7 + 272) = (*(__int64 (**)(__int64*))(*v18 + 16))(v18);
      }
      goto LABEL_28;
    }
    *(_QWORD*)(v7 + 224) = v7 + 192;
    (*(void (**)(__int64*))(*v17 + 24))(v17);
    v18 = (__int64*)a1[14];
    if (v18 != nullptr) {
      goto LABEL_23;
    }
  }
  else {
    *(_QWORD*)(v7 + 224) = 0;
    v18 = (__int64*)a1[14];
    if (v18 != nullptr) {
      goto LABEL_23;
    }
  }
LABEL_26:
  *(_QWORD*)(v7 + 272) = 0;
LABEL_28:
  v19 = *((_BYTE*)a1 + 128);
  *(_QWORD*)(v7 + 304) = 0;
  *(_QWORD*)(v7 + 312) = 0;
  *(_DWORD*)(v7 + 320) = 0;
  *(_BYTE*)(v7 + 288) = v19;
  v20 = GameData_21f61c8++;
  if (v20 == 0) {
    (**(void (***)(__int64*))GameData_21f61c0)(GameData_21f61c0);
  }
  v21 = *(_QWORD*)GameData_2130f48;
  if (*(_QWORD*)GameData_2130f48 != 0) {
    v22 = *(_DWORD*)(v21 + 1736);
    *(_DWORD*)(v21 + 1736) = v22 + 1;
    if (v22 == 0) {
      (**(void (***)(__int64))(v21 + 1728))(v21 + 1728);
    }
  }
  v23 = GameData_21668e0++;
  v24 = (__int64**)GameData_212d6e8;
  if (v23 == 0) {
    ((__int64 (*)(__int64))*game_anonymous_MountBind_vtable_ptr)(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v29 = *v24;
    save_Task_Mount(**v24);
    v30 = (unsigned int*)(*v29 + 804);
    v31 = atomic_load(v30);
    if (v31 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v32 = atomic_load(v30);
      } while (v32 != 0);
    }
  }
  v26 = **v24;
  v25 = (*v24)[1];
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
  }
  v27 = *(_QWORD*)(v7 + 312);
  *(_QWORD*)(v7 + 304) = v26;
  *(_QWORD*)(v7 + 312) = v25;
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak_alt2(v27);
  }
  ProcInst_657850(v7, (__int64)&GameData_21eead0, (__int64)"ProcGameSaveData",
                  1, a2);
  return v7;
}

bool game_875430(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v11;

  if (*(_BYTE*)a1 == 0) {
    return false;
  }
  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int16*)(game_GameModeData_instance_ + 2720);
  }
  if (v1 == *(unsigned __int16*)(a1 + 88)) {
    return false;
  }
  v2 = *(_QWORD*)(a1 + 96);
  v3 = game_GetHero(9u);
  if (v3 != 0) {
    v4 = v3;
    if (game_GameModeData_instance_ != 0) {
      v5 = *(_DWORD*)(game_GameModeData_instance_ + 68);
      v6 = *(_QWORD*)(game_GameModeData_instance_ + 16);
      if (v6 != 0) {
        v5 += *(char*)(v6 + 128);
      }
      v7 = *(unsigned __int8*)(v3 + 442);
      if (*(_BYTE*)(v3 + 442) != 0) {
      LABEL_10:
        v8 = *(_QWORD*)(v3 + 304);
        if (v8 == 0) {
        LABEL_22:
          if (*(_QWORD*)(v4 + 64) != 0) {
            v3 = *(_QWORD*)(v4 + 64);
          }
          else {
            v3 = GameData_21c9988;
          }
          return v2 != v3;
        }
      LABEL_21:
        v11 = v8;
        v3 = game_GrowthListFile_GetJob(&v11, v7, 6);
        if (v3 != 0) {
          return v2 != v3;
        }
        goto LABEL_22;
      }
    }
    else {
      v5 = 0;
      v7 = *(unsigned __int8*)(v3 + 442);
      if (*(_BYTE*)(v3 + 442) != 0) {
        goto LABEL_10;
      }
    }
    v9 = v5 + *(char*)(v3 + 443);
    if (v9 <= 1) {
      v9 = 1;
    }
    if (v9 >= 99) {
      v9 = 99;
    }
    if (*(_BYTE*)(v3 + 443) != 0) {
      v7 = (unsigned int)v9;
    }
    else {
      v7 = v5;
    }
    v8 = *(_QWORD*)(v3 + 304);
    if (v8 == 0) {
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  return v2 != v3;
}

bool game_877b20(unsigned __int8 a1, unsigned __int8 a2, int a3, int a4)
{
  char* v4;
  int v5;
  __int64** v6;
  int v7;
  __int64* v8;
  int v9;
  unsigned int* v10;
  unsigned int v11;
  unsigned int v12;
  __int64* v14;
  unsigned int* v15;
  unsigned int v16;
  unsigned int v17;
  __int64* v18;
  unsigned int* v19;
  unsigned int v20;
  unsigned int v21;

  v4 = GameRoutine_874b20(a1, a2, a3, a4);
  v5 = GameData_21668e0++;
  v6 = (__int64**)GameData_212d6e8;
  if (v5 == 0) {
    ((__int64 (*)(__int64))*game_anonymous_MountBind_vtable_ptr)(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v14 = *v6;
    save_Task_Mount(**v6);
    v15 = (unsigned int*)(*v14 + 804);
    v16 = atomic_load(v15);
    if (v16 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v17 = atomic_load(v15);
      } while (v17 != 0);
    }
  }
  v7 = GameHr_657460(*v6, v4, 0);
  v8 = *v6;
  v9 = v7;
  save_Task_Close(**v6);
  v10 = (unsigned int*)(*v8 + 804);
  v11 = atomic_load(v10);
  if (v11 != 0) {
    do {
      nn_os_YieldThread_alt1();
      v12 = atomic_load(v10);
    } while (v12 != 0);
  }
  if (--GameData_21668e0 == 0) {
    (*(void (**)(__int64))((char*)((_UNKNOWN**)0x8LL) +
                           (_QWORD)game_anonymous_MountBind_vtable_ptr))(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v18 = *v6;
    GameRoutine_18d3a00(*v18);
    v19 = (unsigned int*)(*v18 + 804);
    v20 = atomic_load(v19);
    if (v20 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v21 = atomic_load(v19);
      } while (v21 != 0);
    }
  }
  return v9 == 0;
}

bool game_877f00(const char** a1, __int64 a2, __int64 a3)
{
  int v6;
  __int64** v7;
  int v8;
  __int64* v9;
  __int64 v10;
  unsigned int* v11;
  unsigned int v12;
  unsigned int v13;
  __int64* v14;
  unsigned int v15;
  unsigned int* v16;
  unsigned int v17;
  unsigned int v18;
  __int64* v19;
  unsigned int* v20;
  unsigned int v21;
  unsigned int v22;
  __int64* v23;
  unsigned int v24;
  unsigned int* v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  __int64* v29;
  unsigned int* v30;
  unsigned int v31;
  unsigned int v32;
  __int64* v33;
  __int64 v34;
  unsigned int* v35;
  unsigned int v36;
  unsigned int v37;
  __int64* v38;
  unsigned int* v39;
  unsigned int v40;
  unsigned int v41;
  __int64* v43;
  unsigned int* v44;
  unsigned int v45;
  unsigned int v46;
  __int64* v47;
  unsigned int* v48;
  unsigned int v49;
  unsigned int v50;
  int v51;
  unsigned __int64 v52;
  int v53;
  int v54;

  v6 = GameData_21668e0++;
  v7 = (__int64**)GameData_212d6e8;
  if (v6 == 0) {
    ((__int64 (*)(__int64))*game_anonymous_MountBind_vtable_ptr)(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v19 = *v7;
    save_Task_Mount(**v7);
    v20 = (unsigned int*)(*v19 + 804);
    v21 = atomic_load(v20);
    if (v21 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v22 = atomic_load(v20);
      } while (v22 != 0);
    }
  }
  v8 = GameHr_657460(*v7, *a1, 0);
  if (v8 == 0) {
    v9 = *v7;
    v52 = 0;
    v10 = *(_QWORD*)(a2 + 8);
    v51 = 0;
    save_Task_GetSize(*v9, (__int64)&v52);
    v11 = (unsigned int*)(*v9 + 804);
    v12 = atomic_load(v11);
    if (v12 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v13 = atomic_load(v11);
      } while (v13 != 0);
    }
    if (v52 < 0x100) {
      v15 = 0;
    }
    else {
      v14 = *v7;
      v15 = 256;
      GameRoutine_18d4220(**v7, v10, 0, 256);
      v16 = (unsigned int*)(*v14 + 804);
      v17 = atomic_load(v16);
      if (v17 != 0) {
        do {
          nn_os_YieldThread_alt1();
          v18 = atomic_load(v16);
        } while (v18 != 0);
        v15 = 256;
      }
    }
    v23 = *v7;
    v52 = 0;
    v24 = v15 | 4;
    save_Task_GetSize(*v23, (__int64)&v52);
    v25 = (unsigned int*)(*v23 + 804);
    v26 = atomic_load(v25);
    if (v26 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v27 = atomic_load(v25);
      } while (v27 != 0);
    }
    if (v52 >= v24) {
      v29 = *v7;
      GameRoutine_18d4220(**v7, (__int64)&v51, v15, 4);
      v30 = (unsigned int*)(*v29 + 804);
      v31 = atomic_load(v30);
      if (v31 != 0) {
        do {
          nn_os_YieldThread_alt1();
          v32 = atomic_load(v30);
        } while (v32 != 0);
      }
      v28 = v51;
      v15 = v24;
    }
    else {
      v28 = 0;
    }
    v33 = *v7;
    v52 = 0;
    v34 = *(_QWORD*)(a3 + 8);
    save_Task_GetSize(*v33, (__int64)&v52);
    v35 = (unsigned int*)(*v33 + 804);
    v36 = atomic_load(v35);
    if (v36 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v37 = atomic_load(v35);
      } while (v37 != 0);
    }
    if (v52 >= v15 + v28) {
      v47 = *v7;
      GameRoutine_18d4220(**v7, v34, v15, v28);
      v48 = (unsigned int*)(*v47 + 804);
      v49 = atomic_load(v48);
      if (v49 != 0) {
        do {
          nn_os_YieldThread_alt1();
          v50 = atomic_load(v48);
        } while (v50 != 0);
      }
    }
    GameHr_660820(a3, a3);
    if (Stream_65d2d0(a2, (int*)&v52, &v54, &v53)) {
      *(_DWORD*)(a2 + 20) = v52;
    }
    if (Stream_65d2d0(a3, (int*)&v52, &v54, &v53)) {
      *(_DWORD*)(a3 + 20) = v52;
    }
  }
  v38 = *v7;
  save_Task_Close(**v7);
  v39 = (unsigned int*)(*v38 + 804);
  v40 = atomic_load(v39);
  if (v40 != 0) {
    do {
      nn_os_YieldThread_alt1();
      v41 = atomic_load(v39);
    } while (v41 != 0);
  }
  if (--GameData_21668e0 == 0) {
    (*(void (**)(__int64))((char*)((_UNKNOWN**)0x8LL) +
                           (_QWORD)game_anonymous_MountBind_vtable_ptr))(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v43 = *v7;
    GameRoutine_18d3a00(**v7);
    v44 = (unsigned int*)(*v43 + 804);
    v45 = atomic_load(v44);
    if (v45 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v46 = atomic_load(v44);
      } while (v46 != 0);
    }
  }
  return v8 == 0;
}

bool game_878240(const char** a1, __int64 a2, __int64 a3)
{
  int v6;
  __int64** v7;
  int v8;
  __int64 v9;
  __int64* v10;
  unsigned int* v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64* v15;
  unsigned int* v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64* v20;
  unsigned int* v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  int v27;
  unsigned int* v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  __int64* v32;
  unsigned int* v33;
  unsigned int v34;
  unsigned int v35;
  __int64* v36;
  unsigned int* v37;
  unsigned int v38;
  unsigned int v39;
  __int64* v41;
  unsigned int* v42;
  unsigned int v43;
  unsigned int v44;
  int v45;

  v6 = GameData_21668e0++;
  v7 = (__int64**)GameData_212d6e8;
  if (v6 == 0) {
    ((__int64 (*)(__int64))*game_anonymous_MountBind_vtable_ptr)(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v10 = *v7;
    save_Task_Mount(**v7);
    v11 = (unsigned int*)(*v10 + 804);
    v12 = atomic_load(v11);
    if (v12 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v13 = atomic_load(v11);
      } while (v13 != 0);
    }
  }
  v8 = GameHr_657460(*v7, *a1, 1);
  if (v8 != 0) {
    v9 = 0;
  }
  else {
    GameHr_6604e0(a3, a3);
    v14 = *(_QWORD*)(a2 + 8);
    v15 = *v7;
    save_Task_Write(**v7, v14, 0, 256);
    v16 = (unsigned int*)(*v15 + 804);
    v17 = atomic_load(v16);
    if (v17 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v18 = atomic_load(v16);
      } while (v18 != 0);
    }
    if (*(_DWORD*)(*v15 + 800) != 0) {
      v19 = 0;
    }
    else {
      v19 = 256;
    }
    v20 = *v7;
    v45 = *(_DWORD*)(a3 + 20);
    save_Task_Write(*v20, (__int64)&v45, v19, 4);
    v21 = (unsigned int*)(*v20 + 804);
    v22 = atomic_load(v21);
    if (v22 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v23 = atomic_load(v21);
      } while (v23 != 0);
    }
    v24 = *v20;
    v25 = *v7;
    v26 = *(_QWORD*)(a3 + 8);
    v27 = *(_DWORD*)(a3 + 20);
    if (*(_DWORD*)(v24 + 800) != 0) {
      v19 = (unsigned int)v19;
    }
    else {
      v19 = (unsigned int)v19 | 4;
    }
    save_Task_Write(**v7, v26, v19, v27);
    v28 = (unsigned int*)(*v25 + 804);
    v29 = atomic_load(v28);
    if (v29 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v30 = atomic_load(v28);
      } while (v30 != 0);
    }
    if (*(_DWORD*)(*v25 + 800) != 0) {
      v31 = 0;
    }
    else {
      v31 = v27;
    }
    v9 = (unsigned int)(v31 + v19);
  }
  v32 = *v7;
  GameRoutine_18d4020(**v7, v9);
  v33 = (unsigned int*)(*v32 + 804);
  v34 = atomic_load(v33);
  if (v34 != 0) {
    do {
      nn_os_YieldThread_alt1();
      v35 = atomic_load(v33);
    } while (v35 != 0);
  }
  v36 = *v7;
  save_Task_Close(**v7);
  v37 = (unsigned int*)(*v36 + 804);
  v38 = atomic_load(v37);
  if (v38 != 0) {
    do {
      nn_os_YieldThread_alt1();
      v39 = atomic_load(v37);
    } while (v39 != 0);
  }
  if (--GameData_21668e0 == 0) {
    (*(void (**)(__int64))((char*)((_UNKNOWN**)0x8LL) +
                           (_QWORD)game_anonymous_MountBind_vtable_ptr))(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v41 = *v7;
    GameRoutine_18d3a00(**v7);
    v42 = (unsigned int*)(*v41 + 804);
    v43 = atomic_load(v42);
    if (v43 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v44 = atomic_load(v42);
      } while (v44 != 0);
    }
  }
  return v8 == 0;
}

bool game_8784c0(const char** a1, __int64 a2)
{
  int v4;
  __int64** v5;
  int v6;
  __int64 v7;
  __int64* v8;
  unsigned int* v9;
  unsigned int v10;
  unsigned int v11;
  __int64* v12;
  __int64 v13;
  unsigned int* v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64* v20;
  unsigned int* v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  __int64* v25;
  unsigned int* v26;
  unsigned int v27;
  unsigned int v28;
  __int64* v29;
  unsigned int* v30;
  unsigned int v31;
  unsigned int v32;
  __int64* v34;
  unsigned int* v35;
  unsigned int v36;
  unsigned int v37;
  int v38;

  v4 = GameData_21668e0++;
  v5 = (__int64**)GameData_212d6e8;
  if (v4 == 0) {
    ((__int64 (*)(__int64))*game_anonymous_MountBind_vtable_ptr)(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v8 = *v5;
    save_Task_Mount(**v5);
    v9 = (unsigned int*)(*v8 + 804);
    v10 = atomic_load(v9);
    if (v10 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v11 = atomic_load(v9);
      } while (v11 != 0);
    }
  }
  v6 = GameHr_657460(*v5, *a1, 1);
  if (v6 != 0) {
    v7 = 0;
  }
  else {
    GameHr_6604e0(a2, a2);
    v12 = *v5;
    v13 = **v5;
    v38 = *(_DWORD*)(a2 + 20);
    save_Task_Write(v13, (__int64)&v38, 0, 4);
    v14 = (unsigned int*)(*v12 + 804);
    v15 = atomic_load(v14);
    if (v15 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v16 = atomic_load(v14);
      } while (v16 != 0);
    }
    v17 = *(_QWORD*)(a2 + 8);
    v18 = *(_DWORD*)(a2 + 20);
    if (*(_DWORD*)(*v12 + 800) != 0) {
      v19 = 0;
    }
    else {
      v19 = 4;
    }
    v20 = *v5;
    save_Task_Write(**v5, v17, v19, v18);
    v21 = (unsigned int*)(*v20 + 804);
    v22 = atomic_load(v21);
    if (v22 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v23 = atomic_load(v21);
      } while (v23 != 0);
    }
    if (*(_DWORD*)(*v20 + 800) != 0) {
      v24 = 0;
    }
    else {
      v24 = v18;
    }
    v7 = (unsigned int)(v24 + v19);
  }
  v25 = *v5;
  GameRoutine_18d4020(**v5, v7);
  v26 = (unsigned int*)(*v25 + 804);
  v27 = atomic_load(v26);
  if (v27 != 0) {
    do {
      nn_os_YieldThread_alt1();
      v28 = atomic_load(v26);
    } while (v28 != 0);
  }
  v29 = *v5;
  save_Task_Close(**v5);
  v30 = (unsigned int*)(*v29 + 804);
  v31 = atomic_load(v30);
  if (v31 != 0) {
    do {
      nn_os_YieldThread_alt1();
      v32 = atomic_load(v30);
    } while (v32 != 0);
  }
  if (--GameData_21668e0 == 0) {
    (*(void (**)(__int64))((char*)((_UNKNOWN**)0x8LL) +
                           (_QWORD)game_anonymous_MountBind_vtable_ptr))(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v34 = *v5;
    GameRoutine_18d3a00(**v5);
    v35 = (unsigned int*)(*v34 + 804);
    v36 = atomic_load(v35);
    if (v36 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v37 = atomic_load(v35);
      } while (v37 != 0);
    }
  }
  return v6 == 0;
}

bool game_878d80(const char** a1)
{
  int v2;
  __int64** v3;
  int v4;
  __int64* v5;
  int v6;
  unsigned int* v7;
  unsigned int v8;
  unsigned int v9;
  __int64* v11;
  unsigned int* v12;
  unsigned int v13;
  unsigned int v14;
  __int64* v15;
  unsigned int* v16;
  unsigned int v17;
  unsigned int v18;

  v2 = GameData_21668e0++;
  v3 = (__int64**)GameData_212d6e8;
  if (v2 == 0) {
    ((__int64 (*)(__int64))*game_anonymous_MountBind_vtable_ptr)(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v11 = *v3;
    save_Task_Mount(**v3);
    v12 = (unsigned int*)(*v11 + 804);
    v13 = atomic_load(v12);
    if (v13 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v14 = atomic_load(v12);
      } while (v14 != 0);
    }
  }
  v4 = GameHr_657460(*v3, *a1, 0);
  v5 = *v3;
  v6 = v4;
  save_Task_Close(**v3);
  v7 = (unsigned int*)(*v5 + 804);
  v8 = atomic_load(v7);
  if (v8 != 0) {
    do {
      nn_os_YieldThread_alt1();
      v9 = atomic_load(v7);
    } while (v9 != 0);
  }
  if (--GameData_21668e0 == 0) {
    (*(void (**)(__int64))((char*)((_UNKNOWN**)0x8LL) +
                           (_QWORD)game_anonymous_MountBind_vtable_ptr))(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v15 = *v3;
    GameRoutine_18d3a00(*v15);
    v16 = (unsigned int*)(*v15 + 804);
    v17 = atomic_load(v16);
    if (v17 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v18 = atomic_load(v16);
      } while (v18 != 0);
    }
  }
  return v6 == 0;
}

__int64 game_879610(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, int a4,
                    int a5)
{
  char* v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  char v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int8 v20;
  int v21;
  unsigned __int8 v22;
  char* v23;
  char* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  int v33;
  __int64 v34;
  struct {
    __int64 v36;
    __int64 v37;
    char* v38;
  } v36_;

  v9 = GameRoutine_874b20(a2, a3, a4, a5);
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       208, 16, 0);
  v12 = strlen(v9);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_50;
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v12 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate(*v10, v15, 16, 0);
    v36_.v37 = v13;
    v36_.v38 = v14;
    v36_.v36 = v15 | 1;
    goto LABEL_9;
  }
  LOBYTE(v36_.v36) = 2 * v12;
  v14 = (char*)&v36_.v36 + 1;
  if (v12 != 0) {
  LABEL_9:
    memmove(v14, v9, v13);
  }
  v16 = GameData_212c608[0];
  v14[v13] = 0;
  *(_QWORD*)(v11 + 96) = 0;
  *(_QWORD*)(v11 + 104) = 0;
  *(_QWORD*)(v11 + 112) = 0;
  *(_QWORD*)(v11 + 120) = 0;
  *(_QWORD*)(v11 + 128) = 0;
  *(_WORD*)(v11 + 136) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_QWORD*)(v11 + 24) = "NULL";
  *(_QWORD*)(v11 + 138) = 0;
  *(_QWORD*)(v11 + 144) = 0;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_QWORD*)(v11 + 80) = 0;
  *(_QWORD*)(v11 + 88) = 0;
  *(_QWORD*)v11 = v16 + 16;
  *(_QWORD*)(v11 + 8) = 0;
  game_ProcInst_Register(v11);
  *(_BYTE*)(v11 + 176) = a2;
  v17 = v36_.v36;
  *(_QWORD*)(v11 + 152) = 0;
  *(_QWORD*)(v11 + 160) = 0;
  *(_QWORD*)(v11 + 168) = 0;
  *(_QWORD*)v11 = game_anonymous_ProcSaveReload_vtable;
  if ((v17 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)(v11 + 184), (__int64)v36_.v38,
                                  v36_.v37);
  }
  else {
    v18 = v36_.v37;
    *(_QWORD*)(v11 + 184) = v36_.v36;
    *(_QWORD*)(v11 + 192) = v18;
    *(_QWORD*)(v11 + 200) = v36_.v38;
  }
  GameRoutine_87c860();
  ProcInst_657850(v11, (__int64)&GameData_21eef28, (__int64)"ProcSaveReload", 1,
                  a1);
  if ((v17 & 1) != 0 && v36_.v38 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v19, v36_.v38);
  }
  v20 = 4;
  if (game_GameModeData_instance_ != 0) {
    v21 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    v22 = *(_BYTE*)(game_GameModeData_instance_ + 15);
    if (v21 == 2) {
      v20 = 5;
    }
    else {
      v20 = 4;
    }
  }
  else {
    v22 = 0;
    v21 = 0;
  }
  if (GameRoutine_874b20(v20, v22, v21, 0) == v9 ||
      game_GameModeData_instance_ != 0 && a5 == 0 && a4 == 3 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    return 1;
  }
  game_anonymous_87c960(v11);
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    return 1;
  }
  v23 = game_util_Format((__int64)"%s_%s_%d", "Part", "Ism", 3);
  v24 = game_util_Format((__int64)"%s/%s", "000", v23);
  v25 = strlen(v24);
  if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_50:
    String_60a1d0();
  }
  v26 = v25;
  if (v25 >= 0x17) {
    if ((v25 | 7) == 0x17) {
      v28 = 26;
    }
    else {
      v28 = (v25 | 7) + 1;
    }
    v27 = (char*)fw_memory_HeapManager_Allocate(*v10, v28, 16, 0);
    v36_.v37 = v26;
    v36_.v38 = v27;
    v36_.v36 = v28 | 1;
  }
  else {
    LOBYTE(v36_.v36) = 2 * v25;
    v27 = (char*)&v36_.v36 + 1;
    if (v25 == 0) {
      goto LABEL_39;
    }
  }
  memmove(v27, v24, v26);
LABEL_39:
  v27[v26] = 0;
  v29 = *(__int64**)(v11 + 160);
  if ((unsigned __int64)v29 >= *(_QWORD*)(v11 + 168)) {
    v32 = Manager_66cc20((__int64*)(v11 + 152), &v36_.v36);
    v33 = v36_.v36 & 1;
    *(_QWORD*)(v11 + 160) = v32;
    if (v33 == 0) {
      return 1;
    }
  }
  else {
    if ((v36_.v36 & 1) == 0) {
      v30 = v36_.v36;
      v31 = (__int64)v36_.v38;
      v29[1] = v36_.v37;
      v29[2] = v31;
      *v29 = v30;
      *(_QWORD*)(v11 + 160) = v29 + 3;
      return 1;
    }
    fw_text_String_CopyTerminated(*(__int64**)(v11 + 160), (__int64)v36_.v38,
                                  v36_.v37);
    *(_QWORD*)(v11 + 160) = v29 + 3;
  }
  if (v36_.v38 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v34, v36_.v38);
  }
  return 1;
}

__int64 game_8799d0(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, int a4)
{
  char* v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int8 v16;
  int v17;
  unsigned __int8 v18;
  struct {
    __int64 v20;
    unsigned __int64 v21;
    char* v22;
  } v20_;

  v6 = GameRoutine_874b20(a2, a3, a4, 0);
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      208, 16, 0);
  v9 = strlen(v6);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
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
    v11 = (char*)fw_memory_HeapManager_Allocate(*v7, v12, 16, 0);
    v20_.v21 = v10;
    v20_.v22 = v11;
    v20_.v20 = v12 | 1;
    goto LABEL_9;
  }
  LOBYTE(v20_.v20) = 2 * v9;
  v11 = (char*)&v20_.v20 + 1;
  if (v9 != 0) {
  LABEL_9:
    memmove(v11, v6, v10);
  }
  v13 = GameData_212c608[0];
  v11[v10] = 0;
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
  *(_QWORD*)v8 = v13 + 16;
  *(_QWORD*)(v8 + 8) = 0;
  game_ProcInst_Register(v8);
  *(_BYTE*)(v8 + 176) = a2;
  *(_QWORD*)(v8 + 160) = 0;
  *(_QWORD*)(v8 + 168) = 0;
  *(_QWORD*)(v8 + 152) = 0;
  *(_QWORD*)v8 = game_anonymous_ProcSaveReload_vtable;
  if ((v20_.v20 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)(v8 + 184), (__int64)v20_.v22,
                                  v20_.v21);
  }
  else {
    v14 = v20_.v21;
    *(_QWORD*)(v8 + 184) = v20_.v20;
    *(_QWORD*)(v8 + 192) = v14;
    *(_QWORD*)(v8 + 200) = v20_.v22;
  }
  *(_QWORD*)v8 = game_anonymous_ProcSaveSkip_vtable;
  GameRoutine_87c860();
  ProcInst_657850(v8, (__int64)&GameData_21eef28, (__int64)"ProcSaveSkip", 1,
                  a1);
  if ((v20_.v20 & 1) != 0 && v20_.v22 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*v7 + v15, v20_.v22);
  }
  v16 = 4;
  if (game_GameModeData_instance_ != 0) {
    v17 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    v18 = *(_BYTE*)(game_GameModeData_instance_ + 15);
    if (v17 == 2) {
      v16 = 5;
    }
    else {
      v16 = 4;
    }
  }
  else {
    v18 = 0;
    v17 = 0;
  }
  if (GameRoutine_874b20(v16, v18, v17, 0) != v6) {
    game_anonymous_87c960(v8);
  }
  return 1;
}

int* game_8a0490(int* result, int* a2, int* a3)
{
  __int16* v3;
  __int64* v4;
  __int64 v5;
  int v6;
  _WORD* v7;
  unsigned __int16* v8;
  int v9;
  __int64 v10;
  int v11;
  __int16 v12;
  int v13;
  __int64 v14;
  __int16 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int16 v19;
  __int16 v20;
  __int64 v21;
  __int16 v22;

  v3 = (__int16*)(a2 + 1);
  v4 = GameData_212c878[0];
  v5 = *(_QWORD*)(*GameData_212c878[0] + 64);
  v6 = *(
      _DWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 8LL * *((unsigned __int16*)a2 + 2)) +
                          24LL) +
               608LL);
  v7 = result + 1;
  v8 = (unsigned __int16*)(a3 + 1);
  v9 = *(
      _DWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 8LL * *((unsigned __int16*)a3 + 2)) +
                          24LL) +
               608LL);
  if (v6 >=
      *(int*)(*(_QWORD*)(*(_QWORD*)(v5 +
                                       8LL * *((unsigned __int16*)result + 2)) +
                            24LL) +
                 608LL)) {
    if (v9 < v6) {
      v13 = *a2;
      v14 = *(_QWORD*)(a2 + 1);
      *a2 = *a3;
      v15 = *v8;
      *((_BYTE*)a2 + 6) = *((_BYTE*)a3 + 6);
      *v3 = v15;
      *((_BYTE*)a2 + 7) = *((_BYTE*)a3 + 7);
      a2[2] = a3[2];
      *a3 = v13;
      *((_WORD*)a3 + 2) = v14;
      *((_BYTE*)a3 + 6) = BYTE2(v14);
      *((_BYTE*)a3 + 7) = BYTE3(v14);
      v16 = *v4;
      a3[2] = HIDWORD(v14);
      if (*(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 64) +
                                           8LL * *((unsigned __int16*)a2 + 2)) +
                                24LL) +
                     608LL) <
          *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 64) +
                                           8LL * (unsigned __int16)*v7) +
                                24LL) +
                     608LL)) {
        v17 = *result;
        v18 = *(_QWORD*)(result + 1);
        *result = *a2;
        v19 = *v3;
        *((_BYTE*)result + 6) = *((_BYTE*)a2 + 6);
        *v7 = v19;
        *((_BYTE*)result + 7) = *((_BYTE*)a2 + 7);
        result[2] = a2[2];
        *a2 = v17;
        *(_QWORD*)(a2 + 1) = v18;
      }
    }
  }
  else {
    v10 = *(_QWORD*)(result + 1);
    v11 = *result;
    if (v9 >= v6) {
      *result = *a2;
      v20 = *v3;
      *((_BYTE*)result + 6) = *((_BYTE*)a2 + 6);
      *v7 = v20;
      *((_BYTE*)result + 7) = *((_BYTE*)a2 + 7);
      result[2] = a2[2];
      *a2 = v11;
      *(_QWORD*)(a2 + 1) = v10;
      if (*(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * *v8) +
                                24LL) +
                     608LL) <
          *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) +
                                           8LL * (unsigned __int16)v10) +
                                24LL) +
                     608LL)) {
        v21 = *(_QWORD*)(a2 + 1);
        *a2 = *a3;
        v22 = *v8;
        *((_BYTE*)a2 + 6) = *((_BYTE*)a3 + 6);
        *v3 = v22;
        *((_BYTE*)a2 + 7) = *((_BYTE*)a3 + 7);
        a2[2] = a3[2];
        *a3 = v11;
        *(_QWORD*)(a3 + 1) = v21;
      }
    }
    else {
      *result = *a3;
      v12 = *v8;
      *((_BYTE*)result + 6) = *((_BYTE*)a3 + 6);
      *v7 = v12;
      *((_BYTE*)result + 7) = *((_BYTE*)a3 + 7);
      result[2] = a3[2];
      *a3 = v11;
      *(_QWORD*)(a3 + 1) = v10;
    }
  }
  return result;
}

int* game_8a06e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int* result;
  __int64* v9;
  __int16* v10;
  int v11;
  __int64 v12;
  __int16 v13;
  __int64 v14;
  __int16* v15;
  int v16;
  __int64 v17;
  __int16 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int16 v22;

  result = game_8a0490((int*)a1, (int*)a2, (int*)a3);
  v9 = GameData_212c878[0];
  v10 = (__int16*)(a3 + 4);
  if (*(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * *(unsigned __int16*)(a4 + 4)) +
                            24LL) +
                 608LL) <
      *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * *(unsigned __int16*)(a3 + 4)) +
                            24LL) +
                 608LL)) {
    v11 = *(_DWORD*)a3;
    v12 = *(_QWORD*)(a3 + 4);
    *(_DWORD*)a3 = *(_DWORD*)a4;
    v13 = *(_WORD*)(a4 + 4);
    *(_BYTE*)(a3 + 6) = *(_BYTE*)(a4 + 6);
    *v10 = v13;
    *(_BYTE*)(a3 + 7) = *(_BYTE*)(a4 + 7);
    *(_DWORD*)(a3 + 8) = *(_DWORD*)(a4 + 8);
    *(_DWORD*)a4 = v11;
    *(_WORD*)(a4 + 4) = v12;
    *(_BYTE*)(a4 + 6) = BYTE2(v12);
    *(_BYTE*)(a4 + 7) = BYTE3(v12);
    v14 = *v9;
    *(_DWORD*)(a4 + 8) = HIDWORD(v12);
    v15 = (__int16*)(a2 + 4);
    if (*(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 64) +
                                         8LL * *(unsigned __int16*)(a3 + 4)) +
                              24LL) +
                   608LL) <
        *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 64) +
                                         8LL * *(unsigned __int16*)(a2 + 4)) +
                              24LL) +
                   608LL)) {
      v16 = *(_DWORD*)a2;
      v17 = *(_QWORD*)(a2 + 4);
      *(_DWORD*)a2 = *(_DWORD*)a3;
      v18 = *v10;
      *(_BYTE*)(a2 + 6) = *(_BYTE*)(a3 + 6);
      *v15 = v18;
      *(_BYTE*)(a2 + 7) = *(_BYTE*)(a3 + 7);
      *(_DWORD*)(a2 + 8) = *(_DWORD*)(a3 + 8);
      *(_DWORD*)a3 = v16;
      *(_WORD*)(a3 + 4) = v17;
      *(_BYTE*)(a3 + 6) = BYTE2(v17);
      *(_BYTE*)(a3 + 7) = BYTE3(v17);
      v19 = *v9;
      *(_DWORD*)(a3 + 8) = HIDWORD(v17);
      if (*(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v19 + 64) +
                                           8LL * *(unsigned __int16*)(a2 + 4)) +
                                24LL) +
                     608LL) <
          *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v19 + 64) +
                                           8LL * *(unsigned __int16*)(a1 + 4)) +
                                24LL) +
                     608LL)) {
        v20 = *(_DWORD*)a1;
        v21 = *(_QWORD*)(a1 + 4);
        *(_DWORD*)a1 = *(_DWORD*)a2;
        v22 = *v15;
        *(_BYTE*)(a1 + 6) = *(_BYTE*)(a2 + 6);
        *(_WORD*)(a1 + 4) = v22;
        *(_BYTE*)(a1 + 7) = *(_BYTE*)(a2 + 7);
        *(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
        *(_DWORD*)a2 = v20;
        *(_QWORD*)(a2 + 4) = v21;
      }
    }
  }
  return result;
}

bool game_8a2260(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (*v12)(_QWORD);
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 (*v24)(_QWORD);
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64* v39;
  __int64* v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  unsigned int v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _BOOL8 result;
  bool v54;
  _QWORD v55[4];
  _QWORD* v56;
  int v57;

  v1 = *(__int64**)a1;
  v2 = *(__int64**)(a1 + 8);
  v3 = a1;
  if (v2 != *(__int64**)a1) {
    v4 = 1;
    v5 = 0;
    do {
      v6 = *v1;
      v7 = *(_QWORD*)(*v1 + 24);
      v8 = *(_QWORD*)(v7 + 48);
      v9 = *(_QWORD*)(v7 + 56);
      if (v9 == v8) {
      LABEL_6:
        if (*(_BYTE*)(v6 + 107) != 0) {
          v5 += *(unsigned __int8*)(v6 + 107);
        }
        else {
          v4 = 0;
        }
      }
      else {
        while (1) {
          if (*(_QWORD*)v8 != 0) {
            v10 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v11 = game_GameVariableTable_Find_alt1(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), v8);
              if (v11 != 0) {
                v12 = *(__int64 (**)(_QWORD))(v11 + 72);
                v13 = *(_QWORD*)(v11 + 80);
                v14 = (_QWORD*)(v11 + (v13 >> 1));
                if ((v13 & 1) != 0) {
                  v12 = *(__int64 (**)(_QWORD))((char*)v12 + *v14);
                }
                LOBYTE(a1) = v12(v14);
              }
              else {
                LOBYTE(a1) = 1;
              }
            }
            if (*(_BYTE*)(v8 + 16) != ((v10 == 0) | a1 & 1)) {
              break;
            }
          }
          v8 += 24;
          if (v8 == v9) {
            goto LABEL_6;
          }
        }
      }
      ++v1;
    } while (v1 != v2);
    v1 = *(__int64**)v3;
    v2 = *(__int64**)(v3 + 8);
    if (v5 * v4 >= 1) {
      if (v2 == v1) {
        v15 = GameData_212c650[0];
        v16 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_24;
        }
      }
      else {
        v15 = (__int64*)(*(_QWORD*)(*v1 + 24) + 32LL);
        v16 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_24;
        }
      }
      a1 = game_GameVariableTable_Find_alt1(*(_QWORD*)(v16 + 48), v15);
      if (a1 != 0 && v5 * v4 <= (*(_DWORD*)(a1 + 32) & 0x7Fu)) {
        return false;
      }
    }
  }
LABEL_24:
  if (v1 == v2) {
    v17 = &GameData_1b4d210;
  }
  else {
    v17 = &GameData_1b4d210;
    while (2) {
      v18 = *v1;
      v19 = *(_QWORD**)(*v1 + 24);
      v20 = v19[6];
      v21 = v19[7];
      if (v21 == v20) {
      LABEL_40:
        v17 = v19 + 15;
      }
      else {
        while (1) {
          if (*(_QWORD*)v20 != 0) {
            v22 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v23 = game_GameVariableTable_Find_alt1(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), v20);
              if (v23 != 0) {
                v24 = *(__int64 (**)(_QWORD))(v23 + 72);
                v25 = *(_QWORD*)(v23 + 80);
                v26 = (_QWORD*)(v23 + (v25 >> 1));
                if ((v25 & 1) != 0) {
                  v24 = *(__int64 (**)(_QWORD))((char*)v24 + *v26);
                }
                LOBYTE(a1) = v24(v26);
              }
              else {
                LOBYTE(a1) = 1;
              }
            }
            if (*(_BYTE*)(v20 + 16) != ((v22 == 0) | a1 & 1)) {
              break;
            }
          }
          v20 += 24;
          if (v20 == v21) {
            v19 = *(_QWORD**)(v18 + 24);
            goto LABEL_40;
          }
        }
        if (++v1 != v2) {
          continue;
        }
      }
      break;
    }
  }
  if (*(_QWORD*)(v3 + 8) == *(_QWORD*)v3) {
    if (v17[1] != *v17) {
      v55[0] = 0;
      goto LABEL_49;
    }
    return false;
  }
  if (v17[1] == *v17) {
    return false;
  }
  v27 = **(_QWORD**)v3;
  v55[0] = 0;
  v28 = *(_QWORD*)(v27 + 48);
  if (v28 != 0) {
    v29 = *(unsigned __int16*)(v28 + 16);
    HIDWORD(v55[0]) = 1;
    LOWORD(v55[0]) = v29;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v29) +
                  73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v30 = game_map_MapRandom_instance__ptr[0];
      v31 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v32 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v33 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v30 + 1) = v31;
      v34 = (v33 >> 8) ^ (v32 >> 19) ^ v33 ^ v32;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v30) = v32;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v30 + 4) = v34;
      nn_os_UnlockMutex(&game_g_random_mutex);
      HIDWORD(v55[0]) =
          (16 * ((_WORD)v34 -
                 1000 * (unsigned __int16)((v34 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
LABEL_49:
  if ((TransporterConst_89ca00(v55) & 1) == 0) {
    return false;
  }
  v35 = v17[1];
  if (*v17 != v35) {
    v36 = *v17 + 16LL;
    v37 = GameData_212c878[0];
    v38 = (__int64*)game_TransporterConst_List_instance__ptr[0];
    v39 = game_map_MapRandom_instance__ptr[0];
    v40 = GameData_212d7f0[0] + 2;
    while (1) {
      v41 = *(_DWORD*)(v36 - 8);
      v42 = *(_QWORD*)(v36 - 16);
      v43 = *v37;
      if (v42 != 0) {
        v44 = *(unsigned __int16*)(v42 + 16);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v43 + 64) + 8 * v44) + 73LL) ==
            17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v45 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39);
          v46 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39 + 4);
          v47 = *(_DWORD*)v39 ^ (*(_DWORD*)v39 << 11);
          *(_DWORD*)v39 = *((_DWORD*)v39 + 1);
          *((_DWORD*)v39 + 1) = v45;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39) = v46;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39 + 4) =
              (v47 >> 8) ^ (v46 >> 19) ^ v47 ^ v46;
          nn_os_UnlockMutex(&game_g_random_mutex);
          v43 = *v37;
        }
      }
      else {
        v44 = 0;
      }
      v48 = *v38;
      v49 = *(_QWORD*)(v43 + 64);
      v57 = 0;
      v50 = *(_QWORD*)(v48 + 8);
      v51 = *(_QWORD*)(v49 + 8 * v44);
      v55[0] = v40;
      v55[1] = &v57;
      v56 = v55;
      game_TransporterConst_List_Impl_EachData(v50, v51, v55);
      if (v56 == v55) {
        v52 = 32;
      }
      else {
        if (v56 == nullptr) {
          goto LABEL_61;
        }
        v52 = 40;
      }
      (*(void (**)(__int64))(*v56 + v52))((__int64)v56);
    LABEL_61:
      result = v41 <= v57;
      if (v41 <= v57) {
        v54 = v36 == v35;
        v36 += 16;
        if (!v54) {
          continue;
        }
      }
      return result;
    }
  }
  return true;
}

__int64 game_8a26a0(__int64** a1)
{
  char v2;
  __int64* v3;
  __int64* v4;
  __int64** v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (*v12)(_QWORD);
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  char v37;
  __int64** v38;
  _BYTE v39[8];
  __int64 v40;

  v2 = game_8a2260((__int64)a1);
  if ((v2 & 1) != 0) {
    v3 = *a1;
    v4 = a1[1];
    v37 = v2;
    v38 = a1;
    if (*a1 == v4) {
      v5 = (__int64**)&GameData_1b4d210;
    }
    else {
      v5 = (__int64**)&GameData_1b4d210;
      while (2) {
        v6 = *v3;
        v7 = *(_QWORD**)(*v3 + 24);
        v9 = v7[6];
        v8 = v7[7];
        if (v8 == v9) {
        LABEL_18:
          v5 = (__int64**)(v7 + 15);
        }
        else {
          while (1) {
            if (*(_QWORD*)v9 != 0) {
              v10 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v11 = game_GameVariableTable_Find_alt1(
                    *(_QWORD*)(game_GameModeData_instance_ + 48), v9);
                if (v11 != 0) {
                  v12 = *(__int64 (**)(_QWORD))(v11 + 72);
                  v13 = *(_QWORD*)(v11 + 80);
                  v14 = (_QWORD*)(v11 + (v13 >> 1));
                  if ((v13 & 1) != 0) {
                    v12 = *(__int64 (**)(_QWORD))((char*)v12 + *v14);
                  }
                  v2 = v12(v14);
                }
                else {
                  v2 = 1;
                }
              }
              if (*(_BYTE*)(v9 + 16) != ((v10 == 0) | v2 & 1)) {
                break;
              }
            }
            v9 += 24;
            if (v9 == v8) {
              v7 = *(_QWORD**)(v6 + 24);
              goto LABEL_18;
            }
          }
          if (++v3 != v4) {
            continue;
          }
        }
        break;
      }
    }
    v16 = *v5;
    v15 = v5[1];
    if (v16 != v15) {
      v17 = game_TransporterConst_List_instance__ptr[0];
      v18 = GameData_212c878[0];
      v19 = game_map_MapRandom_instance__ptr[0];
      do {
        v20 = *v16;
        v40 = 0;
        if (v20 != 0) {
          v21 = *v18;
          v22 = *(unsigned __int16*)(v20 + 16);
          HIDWORD(v40) = 1;
          v23 = *(_QWORD*)(v21 + 64);
          LOWORD(v40) = v22;
          if (*(_BYTE*)(*(_QWORD*)(v23 + 8 * v22) + 73LL) == 17) {
            nn_os_LockMutex(&game_g_random_mutex);
            v24 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19);
            v25 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19 + 4);
            v26 = *(_DWORD*)v19 ^ (*(_DWORD*)v19 << 11);
            *(_DWORD*)v19 = *((_DWORD*)v19 + 1);
            *((_DWORD*)v19 + 1) = v24;
            v27 = (v26 >> 8) ^ (v25 >> 19) ^ v26 ^ v25;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19) = v25;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19 + 4) = v27;
            nn_os_UnlockMutex(&game_g_random_mutex);
            HIDWORD(v40) =
                HIDWORD(v40) & 0xFFFFC00F |
                (16 *
                 (((16 * (v27 - 1000 * ((v27 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                   4) &
                  0x3FF));
          }
        }
        TransporterConst_89b3d0((void*)((__int64)v39),
                                *(_QWORD*)(*(_QWORD*)v17 + 8LL), (__int64)&v40,
                                *((_DWORD*)v16 + 2));
        v16 += 2;
      } while (v16 != v15);
    }
    if (v38[1] == *v38) {
      v40 = 0;
    }
    else {
      v28 = **v38;
      v40 = 0;
      v29 = *(_QWORD*)(v28 + 48);
      if (v29 != 0) {
        v30 = *(unsigned __int16*)(v29 + 16);
        HIDWORD(v40) = 1;
        LOWORD(v40) = v30;
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v30) +
                      73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v31 = game_map_MapRandom_instance__ptr[0];
          v32 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v33 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v34 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v31 + 1) = v32;
          v35 = (v34 >> 8) ^ (v33 >> 19) ^ v34 ^ v33;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31) = v33;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31 + 4) = v35;
          nn_os_UnlockMutex(&game_g_random_mutex);
          HIDWORD(v40) =
              (16 * ((_WORD)v35 -
                     1000 * (unsigned __int16)((v35 & 0x7FFFFFFFu) / 0x3E8)) +
               16) &
                  0x3FF0 |
              1;
        }
      }
    }
    game_UnitUtil_UniqueMap_Commit_89abc0(
        (void*)((__int64)v39),
        *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL),
        (unsigned __int16*)&v40, 1);
    GameRoutine_8a1f40(v38);
    v2 = v37;
  }
  return v2 & 1;
}

__int64 game_8ab360(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 ProgramTotalActiveTimeEv;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 vars0;
  __int64 _8;
  __int64 vars30;
  __int64 _38;
  __int64 vars40;
  __int64 vars48;

  v10 = game_GameRestartData_unknown_;
  if (*(_DWORD*)(game_GameRestartData_unknown_ + 368LL * (int)result + 284) !=
      0) {
    v11 = result;
    if (*snd_Game_s_instance_ptr[0] != 0) {
      v12 = *game_sound_g_game_sound_ptr[0];
      v13 = *(_DWORD*)(*game_sound_g_game_sound_ptr[0] + 2604);
      *(_DWORD*)(*game_sound_g_game_sound_ptr[0] + 2604) = v13 + 1;
      if (v13 == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 184LL))(v12);
      }
    }
    *(_DWORD*)(v10 + 12) = v11;
    GameRoutine_8767a0((int*)(v10 + 3336));
    v14 = v10 + 368LL * v11;
    v15 = GameData_21d87f8;
    v16 = GameData_21d8828;
    GameRoutine_66aae0();
    GameRoutine_876070((unsigned __int8*)(v14 + 24), v14 + 136);
    v17 = GameData_21eea58;
    if (GameData_21eea58 != 0) {
      *(_BYTE*)(GameData_21eea58 + 33) = 1;
    }
    GameHr_65d580(v17 + 336, v14 + 264);
    GameRoutine_877680((__int64*)(v14 + 264));
    if (GameData_21eea58 != 0) {
      *(_BYTE*)(GameData_21eea58 + 33) = 0;
    }
    ProgramTotalActiveTimeEv = nn_oe_GetProgramTotalActiveTime_alt1();
    v19 = nn_os_ConvertToTick(ProgramTotalActiveTimeEv);
    GameData_21d87f8 = v15;
    GameData_21d8800 = v19;
    GameData_21d8808 = 0;
    GameData_21d8808 = nn_os_ConvertToTick(
        1000000000LL *
        (HIBYTE(v15) + 3600 * (unsigned __int16)v15 + 60 * BYTE2(v15)));
    v20 = nn_oe_GetProgramTotalActiveTime_alt1();
    GameData_21d8830 = nn_os_ConvertToTick(v20);
    GameData_21d8838 = 0;
    GameData_21d8828 = v16;
    GameData_21d8838 = nn_os_ConvertToTick(
        1000000000LL *
        (HIBYTE(v16) + 3600 * (unsigned __int16)v16 + 60 * BYTE2(v16)));
    GameRoutine_8768e0((_QWORD*)(v10 + 3336));
    *(_DWORD*)(v10 + 12) = 0;
    if (*snd_Game_s_instance_ptr[0] != 0) {
      v21 = *game_sound_g_game_sound_ptr[0];
      v22 = *(_DWORD*)(*game_sound_g_game_sound_ptr[0] + 2604) - 1;
      *(_DWORD*)(*game_sound_g_game_sound_ptr[0] + 2604) = v22;
      if (v22 == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 184LL))(v21);
      }
    }
    if (*(_BYTE*)(v14 + 24) == 0) {
      return 0;
    }
    vars30 = vars0;
    _38 = _8;
    vars40 = vars48;
    v1 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v1 = *(unsigned __int16*)(game_GameModeData_instance_ + 2720);
    }
    if (v1 == *(unsigned __int16*)(v14 + 112)) {
      return 0;
    }
    v2 = *(_QWORD*)(v14 + 120);
    v3 = game_GetHero(9u);
    if (v3 == 0) {
    LABEL_39:
      if (v2 != v3) {
        VariableManager_7150e0();
        return 1;
      }
      return 0;
    }
    v4 = v3;
    if (game_GameModeData_instance_ != 0) {
      v5 = *(_DWORD*)(game_GameModeData_instance_ + 68);
      v6 = *(_QWORD*)(game_GameModeData_instance_ + 16);
      if (v6 != 0) {
        v5 += *(char*)(v6 + 128);
      }
      v7 = *(unsigned __int8*)(v3 + 442);
      if (*(_BYTE*)(v3 + 442) != 0) {
      LABEL_23:
        v8 = *(_QWORD*)(v3 + 304);
        if (v8 == 0) {
        LABEL_36:
          if (*(_QWORD*)(v4 + 64) != 0) {
            v3 = *(_QWORD*)(v4 + 64);
          }
          else {
            v3 = GameData_21c9988;
          }
          goto LABEL_39;
        }
      LABEL_35:
        vars48 = v8;
        v3 = game_GrowthListFile_GetJob(&vars48, v7, 6);
        if (v3 != 0) {
          goto LABEL_39;
        }
        goto LABEL_36;
      }
    }
    else {
      v5 = 0;
      v7 = *(unsigned __int8*)(v3 + 442);
      if (*(_BYTE*)(v3 + 442) != 0) {
        goto LABEL_23;
      }
    }
    v9 = v5 + *(char*)(v3 + 443);
    if (v9 <= 1) {
      v9 = 1;
    }
    if (v9 >= 99) {
      v9 = 99;
    }
    if (*(_BYTE*)(v3 + 443) != 0) {
      v7 = (unsigned int)v9;
    }
    else {
      v7 = v5;
    }
    v8 = *(_QWORD*)(v3 + 304);
    if (v8 == 0) {
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  return result;
}

bool game_8ae640(__int64* a1, __int64 a2, char a3)
{
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int16* v12;
  __int64 v13;
  unsigned __int16* v14;
  unsigned __int16* v15;
  __int64 v16;
  char v17;
  unsigned __int16* v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  bool v24;
  __int64 v25;
  char v26;
  unsigned __int16* v27;
  int v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  unsigned __int16* v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  char v39;
  unsigned __int16* v40;
  __int64 v45;
  int v46;
  unsigned __int16* v47;
  _BOOL4 v48;
  bool v49;
  __int64 v50;
  int v52;
  int v53;
  char v54;
  struct {
    signed int v55;
    int v56;
  } v55_;
  unsigned __int64 v57[2];

  if ((a3 & 1) != 0) {
    if (a2 != 0) {
      v5 = 2;
    }
    else {
      v5 = 0;
    }
  }
  else if (a2 != 0 && (v6 = *(_QWORD*)(a2 + 440)) != 0 &&
           (unsigned __int64)(v7 = *(unsigned __int8*)(v6 + 16)) <= 4) {
    v5 = GameData_1b4e0b8[v7];
  }
  else {
    v5 = 3;
  }
  v53 = v5;
  v8 = *a1;
  v9 = a1[1];
  v10 = v9 - *a1;
  if (v9 == *a1) {
    v24 = (v5 & 1) == 0;
    if ((unsigned int)(v5 - 1) <= 1) {
      v12 = nullptr;
      v14 = nullptr;
      goto LABEL_90;
    }
    v12 = nullptr;
    v14 = nullptr;
    goto LABEL_74;
  }
  if (v10 < 0) {
    GameRoutine_6f26d0();
  }
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       v10, 16, 0);
  v12 = (unsigned __int16*)v11;
  v13 = 0;
  do {
    *(_QWORD*)(v11 + v13) = 0;
    *(_QWORD*)(v11 + v13) = *(_QWORD*)(v8 + v13);
    v13 += 8;
  } while (v8 + v13 != v9);
  v14 = (unsigned __int16*)(v11 + v13);
  v15 = (unsigned __int16*)v11;
  v16 = v11 + v13 - 8;
  do {
    if ((SendUnitItemMenu_8ae490(v15, a2, a3 & 1) & 0xA0) != 0) {
      *(_QWORD*)v15 = 0;
    }
    v15 += 4;
    v13 -= 8;
  } while (v13 != 0);
  if ((v53 & 1) != 0) {
    v17 = 0;
    v18 = v12;
    do {
      while ((SendUnitItemMenu_8ae490(v18, a2, a3 & 1) & 1) != 0) {
        v19 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v18);
        v20 = *(_DWORD*)(v19 + 76);
        if (v20 != 0) {
          v21 = *(unsigned __int8*)(v19 + 87);
          v22 = (v21 - *((unsigned __int8*)v18 + 2)) &
                ~((int)(v21 - *((unsigned __int8*)v18 + 2)) >> 31);
          if (v22 < v21) {
            v20 = (int)(v22 * v20) / (int)v21;
          }
          if (v20 <= 1) {
            v20 = 1;
          }
        }
        if (game_GameModeData_instance_ != 0) {
          v23 = (*(_DWORD*)(game_GameModeData_instance_ + 72) + v20) &
                ~((*(_DWORD*)(game_GameModeData_instance_ + 72) + v20) >> 31);
          if (v23 >= 9999999) {
            v23 = 9999999;
          }
          *(_DWORD*)(game_GameModeData_instance_ + 72) = v23;
        }
        v17 = 1;
        v49 = v16 == (_QWORD)v18;
        *(_QWORD*)v18 = 0;
        v18 += 4;
        if (v49) {
          goto LABEL_39;
        }
      }
      v49 = v16 == (_QWORD)v18;
      v18 += 4;
    } while (!v49);
    if ((v17 & 1) == 0) {
      goto LABEL_43;
    }
  LABEL_39:
    v25 = *GameData_21309c8[0];
    if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v25 + 8) == 1 &&
        (*(_BYTE*)(v25 + 9) & 1) == 0) {
      *(_DWORD*)(v25 + 12) |= 0x100u;
    }
  }
LABEL_43:
  if ((unsigned int)(v53 - 1) < 2) {
    v26 = 0;
    v27 = v12;
    while (1) {
      while ((SendUnitItemMenu_8ae490(v27, a2, a3 & 1) & 0x82) == 0) {
        v49 = v16 == (_QWORD)v27;
        v27 += 4;
        if (v49) {
          goto LABEL_60;
        }
      }
      v57[0] = *(_QWORD*)v27;
      v28 = HIBYTE(LODWORD(v57[0]));
      BYTE3(v57[0]) &= ~1u;
      if (a2 != 0 && (v29 = *(_QWORD*)(a2 + 440)) != 0) {
        v30 = *(_BYTE*)(v29 + 16);
      }
      else {
        v30 = 9;
      }
      if (((1 << v30) & 0xF1) != 0) {
        BYTE3(v57[0]) = v28 & 0xFC;
      }
      if ((game_UnitItemList_Add((_WORD*)(a2 + 828), &v55_.v55, v57, 0) & 1) ==
              0 ||
          v55_.v55 == -1) {
        break;
      }
      v26 = 1;
      game_120c6c0(a2, v55_.v55, 1);
      v49 = v16 == (_QWORD)v27;
      *(_QWORD*)v27 = 0;
      v27 += 4;
      if (v49) {
        goto LABEL_61;
      }
    }
  LABEL_60:
    if ((v26 & 1) == 0) {
      goto LABEL_71;
    }
  LABEL_61:
    v31 = *GameData_21309c8[0];
    if (*GameData_21309c8[0] != 0) {
      v24 = (v53 & 1) == 0;
      if (a2 != 0 && *(_BYTE*)(v31 + 8) == 1 && (*(_BYTE*)(v31 + 9) & 1) == 0) {
        v32 = *(_QWORD*)(a2 + 440);
        if (v32 != 0 && *(unsigned __int8*)(v32 + 16) <= 8u &&
            game_map_UnitFlags_instance_ != 0) {
          v33 = *(unsigned __int8*)(a2 + 2088);
          if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v33) & 1) != 0) {
            *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v33) |= 2u;
            if ((v53 & 1) == 0) {
              goto LABEL_90;
            }
            goto LABEL_75;
          }
        }
      }
    LABEL_74:
      if (v24) {
        goto LABEL_90;
      }
      goto LABEL_75;
    }
  }
LABEL_71:
  if ((v53 & 1) == 0) {
    goto LABEL_90;
  }
LABEL_75:
  if (v9 != v8) {
    v34 = 0;
    v35 = v12;
    v36 = game_TransporterConst_List_instance__ptr[0];
  LABEL_77:
    v54 = v34;
    do {
      if ((SendUnitItemMenu_8ae490(v35, a2, a3 & 1) & 0x84) != 0) {
        game_UnitUtil_UniqueMap_Commit_89abc0_alt1(
            (void*)((__int64)&v55_.v55), *(_QWORD*)(*(_QWORD*)v36 + 8LL), v35,
            1);
        if ((v55_.v56 & 0x80000000) == 0) {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8LL * *v35) +
                        73LL) != 13 ||
              (v57[1] = (unsigned __int64)&GameData_1af1404,
               v57[0] = game_HashString((__int64)&GameData_1af1404),
               GameRoutine_9b11a0(GameData_21f61c0, v57, 1),
               (v55_.v56 & 0x80000000) == 0)) {
            *(_QWORD*)v35 = 0;
            v35 += 4;
            v34 = 1;
            if (v35 != v14) {
              goto LABEL_77;
            }
            goto LABEL_86;
          }
        }
      }
      v35 += 4;
    } while (v35 != v14);
    if ((v54 & 1) == 0) {
      goto LABEL_90;
    }
  LABEL_86:
    v37 = *GameData_21309c8[0];
    if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v37 + 8) == 1 &&
        (*(_BYTE*)(v37 + 9) & 1) == 0) {
      *(_DWORD*)(v37 + 12) |= 0x40u;
    }
  }
LABEL_90:
  if (a2 != 0 && game_script_map_effect_g_sequence != 0 &&
      (v38 = GameData_212cfb8[0], *GameData_212cfb8[0] != 0)) {
    if (v9 == v8) {
      v52 = *(_DWORD*)(a2 + 416);
      if ((v52 & 0x10000000) == 0) {
        *(_DWORD*)(a2 + 416) = v52 | 0x10000000;
        game_6c51e0(a2);
        GameRoutine_6c6da0(a2);
        game_6c6ec0(a2);
        *(_DWORD*)(a2 + 416) &= ~0x10000000u;
      }
      GameSubquestData_125d3e0(*(_QWORD*)GameData_212c7b0[0]);
    LABEL_125:
      v48 = true;
      if (v12 == nullptr) {
        return v48;
      }
      goto LABEL_118;
    }
    v39 = 0;
    v40 = v12;
    do {
      while ((SendUnitItemMenu_8ae490(v40, a2, a3 & 1) & 0x88) != 0) {
        GameRoutine_7c9660(
            *(_QWORD*)(*v38 + 16), *(char*)(a2 + 584), *(char*)(a2 + 585),
            *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v40));
        *(_QWORD*)v40 = 0;
        v40 += 4;
        v39 = 1;
        if (v40 == v14) {
          goto LABEL_103;
        }
      }
      v40 += 4;
    } while (v40 != v14);
    if ((v39 & 1) == 0) {
      goto LABEL_108;
    }
  LABEL_103:
    if ((Trick_7d5160(*(_QWORD*)(*v38 + 16),
                      *(unsigned __int8*)(*(_QWORD*)(*v38 + 16) + 92848LL)) &
         1) != 0) {
      v45 = *GameData_21309c8[0];
      if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v45 + 8) == 1 &&
          (*(_BYTE*)(v45 + 9) & 1) == 0) {
        *(_DWORD*)(v45 + 12) |= 0x402u;
      }
    }
  }
  else if (a2 == 0) {
    goto LABEL_110;
  }
LABEL_108:
  v46 = *(_DWORD*)(a2 + 416);
  if ((v46 & 0x10000000) == 0) {
    *(_DWORD*)(a2 + 416) = v46 | 0x10000000;
    game_6c51e0(a2);
    GameRoutine_6c6da0(a2);
    game_6c6ec0(a2);
    *(_DWORD*)(a2 + 416) &= ~0x10000000u;
  }
LABEL_110:
  GameSubquestData_125d3e0(*(_QWORD*)GameData_212c7b0[0]);
  if (v9 == v8) {
    goto LABEL_125;
  }
  v47 = v12 + 4;
  do {
    v48 = *(v47 - 4) == 0;
    v49 = *(v47 - 4) != 0 || v47 == v14;
    v47 += 4;
  } while (!v49);
  if (v12 != nullptr) {
  LABEL_118:
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v50,
                                  v12);
  }
  return v48;
}

__int64** game_8aef60(__int64** a1, unsigned __int16* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  int v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64* v36;
  __int64* v37;
  __int64* v38;
  __int64* v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v45;

  if (*a2 != 0) {
    v3 = *(_QWORD*)(GameData_21c99b8 + 64);
    v4 = *(_QWORD*)(v3 + 8LL * *a2);
    if (*(_BYTE*)(v4 + 73) == 23) {
      v5 = *(_QWORD*)(v4 + 352);
      v45 = 0x100000000LL;
      if (v5 != 0) {
        v6 = *(unsigned __int16*)(v5 + 16);
        v7 = *(_QWORD*)(v3 + 8 * v6);
        LOWORD(v45) = *(_WORD*)(v5 + 16);
        if (*(_BYTE*)(v7 + 73) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v9 = game_map_MapRandom_instance__ptr[0];
          v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v12 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v9 + 1) = v10;
          v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) = v11;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4) = v13;
          nn_os_UnlockMutex(&game_g_random_mutex);
          v14 = *(_QWORD*)(GameData_21c99b8 + 64);
          HIDWORD(v45) =
              (16 * ((_WORD)v13 -
                     1000 * (unsigned __int16)((v13 & 0x7FFFFFFFu) / 0x3E8)) +
               16) &
                  0x3FF0 |
              1;
          v4 = *(_QWORD*)(v14 + 8LL * *a2);
        }
        v15 = *(unsigned __int8*)(v4 + 360);
        v16 = *(_BYTE*)(v4 + 360) == 0 || (_DWORD)v6 == 0;
        if (!v16) {
          do {
            game_8aef60(a1, (unsigned __int16*)&v45);
            --v15;
          } while (v15 != 0);
        }
      }
    }
    else {
      v17 = *(_QWORD*)a2;
      v18 = (unsigned __int16)*(_QWORD*)a2;
      v19 = HIDWORD(*(_QWORD*)a2);
      if (*(_BYTE*)(*(_QWORD*)(v3 + 8 * v18) + 73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
        v20 = game_map_MapRandom_instance__ptr[0];
        v21 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL) + 8);
        v22 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
        v23 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL)) ^
              (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                          (unsigned __int64)((__int128*)0x10LL))
               << 11);
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) =
            *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v20 + 4) = v21;
        v24 = (v23 >> 8) ^ (v22 >> 19) ^ v23 ^ v22;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v20 + 8) = v22;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v20 + 12) = v24;
        nn_os_UnlockMutex(&game_g_random_mutex);
        v25 =
            v19 & 0xFFFFC00F |
            (16 *
             (((16 * (v24 - 1000 * ((v24 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
              0x3FF));
      }
      else {
        v25 = (unsigned int)v19 & 0xFFFFC00F;
      }
      v27 = a1[1];
      v26 = a1[2];
      if (v27 >= v26) {
        v29 = (char*)v27 - (char*)*a1;
        v30 = (v29 >> 3) + 1;
        if (v30 >> 61 != 0) {
          GameRoutine_6f26d0();
        }
        v31 = (char*)v26 - (char*)*a1;
        v32 = v31 >> 2;
        if (v31 >> 2 <= v30) {
          v32 = (v29 >> 3) + 1;
        }
        if ((unsigned __int64)v31 >= 0x7FFFFFFFFFFFFFF8LL) {
          v33 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v33 = v32;
        }
        if (v33 >> 61 != 0) {
          GameRoutine_60a210();
        }
        v34 = fw_memory_g_heap_manager_ptr;
        v35 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v33, 16, 0);
        v36 = (unsigned __int64*)(v35 + v29);
        v37 = *a1;
        v38 = a1[1];
        v16 = *a1 == v38;
        v39 = (__int64*)((char*)v36 + ((char*)*a1 - (char*)v38));
        *v36 = (unsigned int)v17 & 0xFFFF0000 | (unsigned __int64)(v25 << 32) |
               v18;
        v28 = (__int64*)(v36 + 1);
        if (!v16) {
          v40 = v37;
          v41 = v39;
          do {
            v42 = *v40++;
            *v41++ = v42;
          } while (v40 != v38);
        }
        *a1 = v39;
        a1[1] = v28;
        a1[2] = (__int64*)(v35 + 8 * v33);
        if (v37 != nullptr) {
          v43 = 128;
          if (*(_QWORD*)(*(_QWORD*)v34 + 200LL) == 0) {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v34 + v43, v37);
        }
      }
      else {
        *v27 = (unsigned int)v17 & 0xFFFF0000 | (unsigned __int64)(v25 << 32) |
               v18;
        v28 = v27 + 1;
      }
      a1[1] = v28;
    }
  }
  return a1;
}

__int64** game_8af240(__int64** result, __int64** a2, __n128 a3)
{
  __int64* v3;
  __int64* v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  __int64 v16;

  result[1] = nullptr;
  result[2] = nullptr;
  *result = nullptr;
  v3 = *a2;
  v4 = a2[1];
  if (*a2 != v4) {
    v5 = result;
    v6 = GameData_212c878[0];
    v7 = game_map_MapRandom_instance__ptr[0];
    do {
      v8 = *v3;
      v16 = 0;
      if (v8 != 0) {
        v9 = *v6;
        v10 = *(unsigned __int16*)(v8 + 16);
        HIDWORD(v16) = 1;
        v11 = *(_QWORD*)(v9 + 64);
        LOWORD(v16) = v10;
        if (*(_BYTE*)(*(_QWORD*)(v11 + 8 * v10) + 73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v12 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7);
          v13 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 4);
          v14 = *(_DWORD*)v7 ^ (*(_DWORD*)v7 << 11);
          *(_DWORD*)v7 = *((_DWORD*)v7 + 1);
          *((_DWORD*)v7 + 1) = v12;
          v15 = (v14 >> 8) ^ (v13 >> 19) ^ v14 ^ v13;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7) = v13;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 4) = v15;
          a3 = nn_os_UnlockMutex(&game_g_random_mutex);
          HIDWORD(v16) =
              (16 * ((_WORD)v15 -
                     1000 * (unsigned __int16)((v15 & 0x7FFFFFFFu) / 0x3E8)) +
               16) &
                  0x3FF0 |
              1;
        }
      }
      result = game_8aef60_alt1(v5, (unsigned __int16*)&v16, a3);
      ++v3;
    } while (v3 != v4);
  }
  return result;
}

__int64** game_8af380(__int64** a1, __int64** a2, __n128 a3)
{
  __int64* v3;
  __int64* v4;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  __int64 v17;

  v3 = *a2;
  v4 = a2[1];
  if (*a2 != v4) {
    v6 = GameData_212c878[0];
    v7 = game_map_MapRandom_instance__ptr[0];
    do {
      v8 = *v3;
      v17 = 0;
      if (v8 != 0) {
        v9 = *v6;
        v10 = *(unsigned __int16*)(v8 + 16);
        HIDWORD(v17) = 1;
        v11 = *(_QWORD*)(v9 + 64);
        LOWORD(v17) = v10;
        if (*(_BYTE*)(*(_QWORD*)(v11 + 8 * v10) + 73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v12 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7);
          v13 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 4);
          v14 = *(_DWORD*)v7 ^ (*(_DWORD*)v7 << 11);
          *(_DWORD*)v7 = *((_DWORD*)v7 + 1);
          *((_DWORD*)v7 + 1) = v12;
          v15 = (v14 >> 8) ^ (v13 >> 19) ^ v14 ^ v13;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7) = v13;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 4) = v15;
          a3 = nn_os_UnlockMutex(&game_g_random_mutex);
          HIDWORD(v17) =
              (16 * ((_WORD)v15 -
                     1000 * (unsigned __int16)((v15 & 0x7FFFFFFFu) / 0x3E8)) +
               16) &
                  0x3FF0 |
              1;
        }
      }
      game_8aef60_alt1(a1, (unsigned __int16*)&v17, a3);
      ++v3;
    } while (v3 != v4);
  }
  return a1;
}

__int64 game_8b0ee0(__int64 a1, __n128 a2)
{
  __int64 v2;
  __int64 v4;
  char v5;
  int v6;
  unsigned __int64 v7;
  char* v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int16* v11;
  unsigned __int16* v12;
  __int64 v13;
  char v14;
  char v15;
  _BOOL4 v16;
  char** v17;
  unsigned __int16* v18;
  unsigned __int16* v19;
  __int64* v20;
  unsigned int v21;
  char* v22;
  char* v23;
  __int64 result;
  int* v25;
  __int64 v26;
  int* v27;
  _QWORD* v28;
  int* v29;
  char v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  struct {
    int* v35;
    int* v36;
    __int64 v37;
  } v35_;
  struct {
    __int64 v38;
    unsigned __int64 v39;
    char* v40;
  } v38_;

  v2 = *(_QWORD*)(a1 + 200);
  if (v2 != 0 && (v4 = *(_QWORD*)(v2 + 440)) != 0) {
    v5 = *(_BYTE*)(v4 + 16);
  }
  else {
    v5 = 9;
  }
  v6 = 1 << v5;
  if ((*(_BYTE*)(a1 + 208) & 1) != 0) {
    fw_text_String_CopyTerminated(&v38_.v38, *(_QWORD*)(a1 + 224),
                                  *(_QWORD*)(a1 + 216));
  }
  else {
    v7 = *(_QWORD*)(a1 + 216);
    v8 = *(char**)(a1 + 224);
    v38_.v38 = *(_QWORD*)(a1 + 208);
    v38_.v39 = v7;
    v38_.v40 = v8;
  }
  v9 = v6 & 6;
  if ((v38_.v38 & 1) != 0) {
    v10 = v38_.v39;
  }
  else {
    v10 = (unsigned __int64)(unsigned __int8)v38_.v38 >> 1;
  }
  if (v10 == 0) {
    v11 = *(unsigned __int16**)(a1 + 152);
    v12 = *(unsigned __int16**)(a1 + 160);
    if (v11 == v12) {
      v16 = true;
    }
    else {
      v13 = *(_QWORD*)(a1 + 200);
      v14 = 0;
      do {
        v15 = SendUnitItemMenu_8ae490(v11, v13, 0);
        v11 += 4;
        v14 |= v15;
      } while (v11 != v12);
      v16 = (v14 & 0x40) == 0;
    }
    if (v16) {
      v17 = GameData_212d870;
    }
    else {
      v17 = GameData_212d868[0];
    }
    if (v9 != 0) {
      v17 = GameData_212d860[0];
    }
    GameRoutine_60a020((__int64)&v38_.v38, (__int64)*v17);
  }
  v18 = *(unsigned __int16**)(a1 + 152);
  v19 = *(unsigned __int16**)(a1 + 160);
  v35_.v36 = nullptr;
  v35_.v37 = 0;
  v35_.v35 = nullptr;
  if (v18 != v19) {
    v20 = GameData_212c878[0];
    do {
      v21 = *v18;
      v18 += 4;
      game_menu_1a06650((__int64)&v35_.v35,
                        *(_QWORD*)(*(_QWORD*)(*v20 + 64) + 8LL * v21), 1);
    } while (v18 != v19);
  }
  if ((v38_.v38 & 1) != 0) {
    v22 = v38_.v40;
  }
  else {
    v22 = (char*)&v38_.v38 + 1;
  }
  if ((*(_BYTE*)(a1 + 232) & 1) != 0) {
    v23 = *(char**)(a1 + 248);
  }
  else {
    v23 = (char*)(a1 + 233);
  }
  result = GameRoutine_1a05260(&v35_.v35, a1, v9 != 0, (__int64)v22, v23);
  v25 = v35_.v35;
  if (v35_.v35 != nullptr) {
    v26 = fw_memory_g_heap_manager_ptr;
    if (v35_.v35 == v35_.v36) {
      goto LABEL_47;
    }
    v27 = v35_.v36 - 10;
    do {
      v30 = *((_BYTE*)v27 - 8);
      *(v27 - 10) = 0;
      *((_QWORD*)v27 - 6) = 0;
      if ((v30 & 1) != 0) {
        **((_BYTE**)v27 + 1) = 0;
        *(_QWORD*)v27 = 0;
      }
      else {
        *((_WORD*)v27 - 4) = 0;
      }
      GameRoutine_6e3b50((__int64)(v27 - 8), *((_QWORD**)v27 - 3));
      v31 = *((_BYTE*)v27 - 8);
      *((_QWORD*)v27 - 3) = 0;
      *((_QWORD*)v27 - 2) = 0;
      *((_QWORD*)v27 - 4) = v27 - 6;
      if ((v31 & 1) != 0) {
        v28 = *((_QWORD**)v27 + 1);
        if (v28 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) != 0) {
            v32 = 128;
          }
          else {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v26 + v32, v28);
          v28 = *((_QWORD**)v27 - 3);
        }
      }
      else {
        v28 = nullptr;
      }
      result = GameRoutine_6e3b50((__int64)(v27 - 8), v28);
      v29 = v27 - 18;
      v27 -= 28;
    } while (v29 != v25);
    v35_.v36 = v25;
    v25 = v35_.v35;
    if (v35_.v35 != nullptr) {
    LABEL_47:
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) == 0) {
        v33 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v26 + v33, v25);
    }
  }
  if ((v38_.v38 & 1) != 0 && v38_.v40 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v38_.v40);
  }
  return result;
}

__int64 game_8b14e0(__int64 result)
{
  unsigned __int16* v1;
  unsigned __int16* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  int v9;

  v1 = *(unsigned __int16**)(result + 152);
  v2 = *(unsigned __int16**)(result + 160);
  if (v1 != v2) {
    v3 = result;
    v4 = GameData_212c878[0];
    v5 = game_g_shared_system_skills_ptr;
    while (1) {
      v6 = *v1;
      v1 += 4;
      v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * v6) + 24LL);
      v9 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1C0LL) + v5) & 0xFFF;
      result = game_HasSkill((_QWORD*)(v7 + 8), (unsigned int*)&v9);
      if ((result & 1) != 0) {
        break;
      }
      if (v1 == v2) {
        return result;
      }
    }
    GameRoutine_887920(&v8, (__int64)&GameData_1ac31ba);
    return GameRoutine_162aea0(v3, &v8);
  }
  return result;
}

__int64 game_8c4070(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(result + 176);
  if (v1 != *(_QWORD*)(result + 184)) {
    v2 = result;
    result = game_telop_TelopRelianceLvUp_CreateBind(
        result, *(_QWORD*)v1, *(_QWORD*)(v1 + 8), *(_BYTE*)(v1 + 16),
        *(_BYTE*)(v1 + 17));
    v3 = *(_QWORD*)(v2 + 184);
    v4 = v3 - (v1 + 24);
    if (v3 != v1 + 24) {
      result = memmove(v1, v1 + 24, v3 - (v1 + 24));
    }
    *(_QWORD*)(v2 + 184) = v1 + v4;
  }
  return result;
}

__int64 game_8c4fc0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  struct {
    __int16 v10;
    char v11;
  } v10_;
  int v12;
  int v13;

  v2 = *(_QWORD*)result;
  if (*(_QWORD*)result != 0) {
    v4 = result;
    v5 = (_DWORD*)game_g_shared_system_skills_ptr;
    v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    result = game_HasSkill((_QWORD*)(v2 + 1744), (unsigned int*)&v12);
    if ((result & 1) == 0) {
      v6 = *(_QWORD*)(v2 + 440);
      if (v6 != 0 && ((1 << *(_BYTE*)(v6 + 16)) & 0xF1) != 0) {
        v13 = *v5 & 0xFFF;
        result = game_HasSkill((_QWORD*)(v2 + 1744), (unsigned int*)&v13);
        if ((result & 1) == 0 ||
            ((v7 = *(_QWORD*)(v2 + 440)) == 0 ? (v8 = 9)
                                              : (v8 = *(_BYTE*)(v7 + 16)),
             ((1 << v8) & 0xF1) == 0)) {
          v9 = *(_BYTE*)(v4 + 89);
          v10_.v10 = 0;
          v10_.v11 = v9;
          return GameRoutine_7fa250(a2, v4, (__int64)&v10_.v10);
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_8c50a0(PSEUDO_X8 x8_, _DWORD* a1)
{
  char* a2 = (char*)PSEUDO_X8_VALUE(x8_);
  _BOOL8 result;
  int v5;
  int v6;
  unsigned __int64 v7;
  int v8;
  int v9;
  int v10;
  char v11;
  int v12;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned int v20;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  unsigned int v29;
  bool v30;
  __int64 v31;
  int v32;
  unsigned __int64 v33;
  int v34;
  int v36;
  int v37;
  unsigned __int64 v38;
  int v39;
  int v40;
  int v41;
  int v43;
  int v44;
  unsigned __int64 v45;
  int v46;
  int v47;
  int v48;
  int v50;
  int v51;
  unsigned __int64 v52;
  int v53;
  int v54;
  int v55;
  int v57;
  int v58;
  unsigned __int64 v59;
  int v60;
  int v61;
  int v62;
  int v64;
  int v65;
  unsigned __int64 v66;
  int v67;
  int v68;
  int v69;
  int v71;
  int v72;
  unsigned __int64 v73;
  int v74;
  int v75;
  int v76;
  int v78;
  int v79;
  unsigned __int64 v80;
  int v81;
  int v82;
  int v83;
  int v85;
  int v86;
  unsigned __int64 v87;
  int v88;
  int v89;
  int v90;
  int v92;
  int v93;
  unsigned __int64 v94;
  int v95;
  int v96;
  int v97;
  int v99;
  int v100;
  unsigned __int64 v101;
  int v102;
  int v103;
  int v104;
  int v106;
  int v107;
  unsigned __int64 v108;
  int v109;
  int v110;
  int v111;
  int v113;
  int v114;
  unsigned __int64 v115;
  int v116;
  int v117;
  int v118;
  int v120;
  int v121;
  unsigned __int64 v122;
  int v123;
  int v124;
  int v125;

  result = GameRoutine_8c4ee0((__int64)a1);
  if (!result) {
    v11 = 0;
    goto LABEL_253;
  }
  v5 = a1[2];
  if (v5 != 0) {
    v6 = *(_DWORD*)(*(_QWORD*)a1 + 504LL);
    v7 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    if (*(unsigned __int8*)(*(_QWORD*)a1 + 498LL) >= (int)v7) {
      v8 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    }
    else {
      v8 = *(unsigned __int8*)(*(_QWORD*)a1 + 498LL);
    }
    if (*(_BYTE*)(*(_QWORD*)a1 + 498LL) != 0) {
      v9 = v8;
    }
    else {
      v9 = 1;
    }
    if (v9 == (_DWORD)v7) {
      v10 = 0;
    }
    else {
      v10 = *(_DWORD*)(GameData_21d9968 + 4LL * v9);
    }
    if (v6 + v5 >= v10 && v6 < v10) {
      v11 = 7;
    }
    else {
      v11 = 3;
    }
    v12 = a1[3];
    if (v12 == 0) {
      goto LABEL_35;
    }
  }
  else {
    v11 = 1;
    v12 = a1[3];
    if (v12 == 0) {
      goto LABEL_35;
    }
  }
  v14 = *(_QWORD**)a1;
  if (*(_QWORD*)(*(_QWORD*)a1 + 408LL) == 0) {
    v15 = *(_QWORD*)(*(_QWORD*)(v14[50] + 24LL) + 1104LL);
    if (v15 != 0) {
      v16 = *(_QWORD*)(*(_QWORD*)(v15 + 24) + 1104LL);
      if (v16 != 0) {
        v17 = v14[71];
        v18 = v14[70];
        v19 = *(unsigned __int16*)(v16 + 16);
        v20 = v19 >= (v17 - v18) >> 1 ? 0 : *(_WORD*)(v18 + 2 * v19) & 0x3FF;
        LODWORD(v16) = *(unsigned __int16*)(v16 + 412);
      }
      else {
        v20 = 0;
      }
      if ((int)(v20 + v12) >= (int)v16 && v20 < (unsigned int)v16) {
        v11 |= 8u;
      }
    }
  }
LABEL_35:
  v22 = a1[4];
  if (v22 != 0) {
    v23 = *(_QWORD*)a1;
    if (*(_BYTE*)(*(_QWORD*)a1 + 1880LL) != 0) {
      v24 = *(_QWORD*)(v23 + 392);
      if (v24 != 0) {
        v25 = *(_QWORD*)(v23 + 1904);
        if (v25 == 0) {
        LABEL_50:
          v32 = v25 + v22;
          v33 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
          if ((int)v33 >= 5) {
            LODWORD(v33) = 5;
          }
          v34 = *(_DWORD*)(GameData_21d9988 + 4LL * (int)v33 - 4);
          if (v32 >= v34 && (int)v25 < v34) {
            v11 |= 0x10u;
          }
          goto LABEL_58;
        }
        v26 = v23 + 1904;
        v27 = *(unsigned __int8*)(v24 + 48);
        v28 = v26;
        do {
          v29 = *(unsigned __int8*)(v25 + 26);
          v30 = v29 >= v27;
          if (v29 >= v27) {
            v31 = 0;
          }
          else {
            v31 = 8;
          }
          if (v30) {
            v28 = v25;
          }
          v25 = *(_QWORD*)(v25 + v31);
        } while (v25 != 0);
        if (v28 != v26 && v27 >= *(unsigned __int8*)(v28 + 26)) {
          LODWORD(v25) = *(_WORD*)(v28 + 28) & 0xFFF;
          goto LABEL_50;
        }
      }
      LODWORD(v25) = 0;
      goto LABEL_50;
    }
  }
LABEL_58:
  v36 = a1[5];
  if (v36 != 0) {
    v37 = *(unsigned __int16*)(*(_QWORD*)a1 + 514LL);
    v38 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    v39 = *(unsigned __int8*)(*(_QWORD*)a1 + 540LL) >= (int)v38
              ? (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2
              : *(unsigned __int8*)(*(_QWORD*)a1 + 540LL);
    v40 = *(_BYTE*)(*(_QWORD*)a1 + 540LL) != 0 ? v39 : 1;
    v41 = v40 == (_DWORD)v38 ? 0 : *(_DWORD*)(GameData_21d99a8 + 4LL * v40);
    if (v36 + v37 >= v41 && v41 > v37) {
      v11 |= 0x20u;
    }
  }
  v43 = a1[6];
  if (v43 != 0) {
    v44 = *(unsigned __int16*)(*(_QWORD*)a1 + 516LL);
    v45 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    v46 = *(unsigned __int8*)(*(_QWORD*)a1 + 541LL) >= (int)v45
              ? (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2
              : *(unsigned __int8*)(*(_QWORD*)a1 + 541LL);
    v47 = *(_BYTE*)(*(_QWORD*)a1 + 541LL) != 0 ? v46 : 1;
    v48 = v47 == (_DWORD)v45 ? 0 : *(_DWORD*)(GameData_21d99a8 + 4LL * v47);
    if (v43 + v44 >= v48 && v48 > v44) {
      v11 |= 0x20u;
    }
  }
  v50 = a1[7];
  if (v50 != 0) {
    v51 = *(unsigned __int16*)(*(_QWORD*)a1 + 518LL);
    v52 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    v53 = *(unsigned __int8*)(*(_QWORD*)a1 + 542LL) >= (int)v52
              ? (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2
              : *(unsigned __int8*)(*(_QWORD*)a1 + 542LL);
    v54 = *(_BYTE*)(*(_QWORD*)a1 + 542LL) != 0 ? v53 : 1;
    v55 = v54 == (_DWORD)v52 ? 0 : *(_DWORD*)(GameData_21d99a8 + 4LL * v54);
    if (v50 + v51 >= v55 && v55 > v51) {
      v11 |= 0x20u;
    }
  }
  v57 = a1[8];
  if (v57 != 0) {
    v58 = *(unsigned __int16*)(*(_QWORD*)a1 + 520LL);
    v59 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    v60 = *(unsigned __int8*)(*(_QWORD*)a1 + 543LL) >= (int)v59
              ? (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2
              : *(unsigned __int8*)(*(_QWORD*)a1 + 543LL);
    v61 = *(_BYTE*)(*(_QWORD*)a1 + 543LL) != 0 ? v60 : 1;
    v62 = v61 == (_DWORD)v59 ? 0 : *(_DWORD*)(GameData_21d99a8 + 4LL * v61);
    if (v57 + v58 >= v62 && v62 > v58) {
      v11 |= 0x20u;
    }
  }
  v64 = a1[9];
  if (v64 != 0) {
    v65 = *(unsigned __int16*)(*(_QWORD*)a1 + 522LL);
    v66 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    v67 = *(unsigned __int8*)(*(_QWORD*)a1 + 544LL) >= (int)v66
              ? (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2
              : *(unsigned __int8*)(*(_QWORD*)a1 + 544LL);
    v68 = *(_BYTE*)(*(_QWORD*)a1 + 544LL) != 0 ? v67 : 1;
    v69 = v68 == (_DWORD)v66 ? 0 : *(_DWORD*)(GameData_21d99a8 + 4LL * v68);
    if (v64 + v65 >= v69 && v69 > v65) {
      v11 |= 0x20u;
    }
  }
  v71 = a1[10];
  if (v71 != 0) {
    v72 = *(unsigned __int16*)(*(_QWORD*)a1 + 524LL);
    v73 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    v74 = *(unsigned __int8*)(*(_QWORD*)a1 + 545LL) >= (int)v73
              ? (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2
              : *(unsigned __int8*)(*(_QWORD*)a1 + 545LL);
    v75 = *(_BYTE*)(*(_QWORD*)a1 + 545LL) != 0 ? v74 : 1;
    v76 = v75 == (_DWORD)v73 ? 0 : *(_DWORD*)(GameData_21d99a8 + 4LL * v75);
    if (v71 + v72 >= v76 && v76 > v72) {
      v11 |= 0x20u;
    }
  }
  v78 = a1[11];
  if (v78 != 0) {
    v79 = *(unsigned __int16*)(*(_QWORD*)a1 + 526LL);
    v80 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    v81 = *(unsigned __int8*)(*(_QWORD*)a1 + 546LL) >= (int)v80
              ? (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2
              : *(unsigned __int8*)(*(_QWORD*)a1 + 546LL);
    v82 = *(_BYTE*)(*(_QWORD*)a1 + 546LL) != 0 ? v81 : 1;
    v83 = v82 == (_DWORD)v80 ? 0 : *(_DWORD*)(GameData_21d99a8 + 4LL * v82);
    if (v78 + v79 >= v83 && v83 > v79) {
      v11 |= 0x20u;
    }
  }
  v85 = a1[12];
  if (v85 != 0) {
    v86 = *(unsigned __int16*)(*(_QWORD*)a1 + 528LL);
    v87 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    v88 = *(unsigned __int8*)(*(_QWORD*)a1 + 547LL) >= (int)v87
              ? (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2
              : *(unsigned __int8*)(*(_QWORD*)a1 + 547LL);
    v89 = *(_BYTE*)(*(_QWORD*)a1 + 547LL) != 0 ? v88 : 1;
    v90 = v89 == (_DWORD)v87 ? 0 : *(_DWORD*)(GameData_21d99a8 + 4LL * v89);
    if (v85 + v86 >= v90 && v90 > v86) {
      v11 |= 0x20u;
    }
  }
  v92 = a1[13];
  if (v92 != 0) {
    v93 = *(unsigned __int16*)(*(_QWORD*)a1 + 530LL);
    v94 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    v95 = *(unsigned __int8*)(*(_QWORD*)a1 + 548LL) >= (int)v94
              ? (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2
              : *(unsigned __int8*)(*(_QWORD*)a1 + 548LL);
    v96 = *(_BYTE*)(*(_QWORD*)a1 + 548LL) != 0 ? v95 : 1;
    v97 = v96 == (_DWORD)v94 ? 0 : *(_DWORD*)(GameData_21d99a8 + 4LL * v96);
    if (v92 + v93 >= v97 && v97 > v93) {
      v11 |= 0x20u;
    }
  }
  v99 = a1[14];
  if (v99 != 0) {
    v100 = *(unsigned __int16*)(*(_QWORD*)a1 + 532LL);
    v101 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    v102 = *(unsigned __int8*)(*(_QWORD*)a1 + 549LL) >= (int)v101
               ? (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2
               : *(unsigned __int8*)(*(_QWORD*)a1 + 549LL);
    v103 = *(_BYTE*)(*(_QWORD*)a1 + 549LL) != 0 ? v102 : 1;
    v104 = v103 == (_DWORD)v101 ? 0 : *(_DWORD*)(GameData_21d99a8 + 4LL * v103);
    if (v99 + v100 >= v104 && v104 > v100) {
      v11 |= 0x20u;
    }
  }
  v106 = a1[15];
  if (v106 != 0) {
    v107 = *(unsigned __int16*)(*(_QWORD*)a1 + 534LL);
    v108 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    v109 = *(unsigned __int8*)(*(_QWORD*)a1 + 550LL) >= (int)v108
               ? (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2
               : *(unsigned __int8*)(*(_QWORD*)a1 + 550LL);
    v110 = *(_BYTE*)(*(_QWORD*)a1 + 550LL) != 0 ? v109 : 1;
    v111 = v110 == (_DWORD)v108 ? 0 : *(_DWORD*)(GameData_21d99a8 + 4LL * v110);
    if (v106 + v107 >= v111 && v111 > v107) {
      v11 |= 0x20u;
    }
  }
  v113 = a1[16];
  if (v113 != 0) {
    v114 = *(unsigned __int16*)(*(_QWORD*)a1 + 536LL);
    v115 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    v116 = *(unsigned __int8*)(*(_QWORD*)a1 + 551LL) >= (int)v115
               ? (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2
               : *(unsigned __int8*)(*(_QWORD*)a1 + 551LL);
    v117 = *(_BYTE*)(*(_QWORD*)a1 + 551LL) != 0 ? v116 : 1;
    v118 = v117 == (_DWORD)v115 ? 0 : *(_DWORD*)(GameData_21d99a8 + 4LL * v117);
    if (v113 + v114 >= v118 && v118 > v114) {
      v11 |= 0x20u;
    }
  }
  v120 = a1[17];
  if (v120 != 0) {
    v121 = *(unsigned __int16*)(*(_QWORD*)a1 + 538LL);
    v122 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if (*(unsigned __int8*)(*(_QWORD*)a1 + 552LL) >= (int)v122) {
      v123 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v123 = *(unsigned __int8*)(*(_QWORD*)a1 + 552LL);
    }
    if (*(_BYTE*)(*(_QWORD*)a1 + 552LL) != 0) {
      v124 = v123;
    }
    else {
      v124 = 1;
    }
    if (v124 == (_DWORD)v122) {
      v125 = 0;
    }
    else {
      v125 = *(_DWORD*)(GameData_21d99a8 + 4LL * v124);
    }
    if (v120 + v121 >= v125 && v125 > v121) {
      v11 |= 0x20u;
    }
  }
LABEL_253:
  *a2 = v11;
  {
    result;
    return;
  }
}

int* game_8c6b20(int* result, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5,
                 __int64 a6)
{
  int v6;
  int* v7;
  __int64 v8;
  int* v9;
  int* v10;
  int v11;
  int v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  int* v17;
  int* v21;
  int* v24;
  int* v25;
  int* v26;
  int* v27;
  int v28;
  __int64 v29;
  int v30;
  bool v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;

  if (a4 >= 2) {
    if (a4 == 2) {
      v6 = *result;
      if (*(char*)(*a3 + 456LL + (unsigned __int8)*(a2 - 1)) >
          *(char*)(*a3 + 456LL + (unsigned __int8)*result)) {
        *result = *(a2 - 1);
        *(a2 - 1) = v6;
      }
    }
    else if ((__int64)a4 > 128) {
      v14 = a4 >> 1;
      v16 = a4 - (a4 >> 1);
      if ((__int64)a4 <= a6) {
        v21 = result;
        v24 = a5;
        GameRoutine_8c6dc0(result, &result[v14], a3, a4 >> 1, a5);
        v25 = &v24[v14];
        result = GameRoutine_8c6dc0(&v21[v14], a2, a3, v16, v25);
        v26 = &v24[a4];
        v27 = v25;
        while (v27 != v26) {
          v28 = *v27;
          v29 = *a3 + 456LL;
          v30 = *(char*)(v29 + (unsigned __int8)*v27);
          LODWORD(v29) = *(char*)(v29 + (unsigned __int8)*v24);
          v31 = v30 <= (int)v29;
          if (v30 <= (int)v29) {
            v32 = 4;
          }
          else {
            v32 = 0;
          }
          if (v31) {
            v28 = *v24;
          }
          v24 = (int*)((char*)v24 + v32);
          if (v31) {
            v33 = 0;
          }
          else {
            v33 = 4;
          }
          *v21++ = v28;
          v27 = (int*)((char*)v27 + v33);
          if (v24 == v25) {
            while (v27 != v26) {
              v35 = *v27++;
              *v21++ = v35;
            }
            return result;
          }
        }
        while (v24 != v25) {
          v34 = *v24++;
          *v21++ = v34;
        }
      }
      else {
        v17 = result;
        game_8c6b20(result, &result[v14], a3, a4 >> 1, a5, a6);
        game_8c6b20(&v17[v14], a2, a3, v16, a5, a6);
        return (int*)GameRoutine_8c7040((__int64)v17, (char*)&v17[v14],
                                        (char*)a2, a3, v14, v16, (__int64)a5,
                                        a6);
      }
    }
    else if (result != a2) {
      v7 = result + 1;
      if (result + 1 != a2) {
        v8 = 0;
        v9 = result;
        do {
          v12 = *v9;
          v11 = v9[1];
          v9 = v7;
          if (*(char*)(*a3 + 456LL + (unsigned __int8)v11) >
              *(char*)(*a3 + 456LL + (unsigned __int8)v12)) {
            v13 = v8;
            do {
              *(int*)((char*)result + v13 + 4) = v12;
              if (v13 == 0) {
                v10 = result;
                goto LABEL_11;
              }
              v12 = *(int*)((char*)result + v13 - 4);
              v13 -= 4;
            } while (*(char*)(*a3 + 456LL + (unsigned __int8)v11) >
                     *(char*)(*a3 + 456LL + (unsigned __int8)v12));
            v10 = (int*)((char*)result + v13 + 4);
          LABEL_11:
            *v10 = v11;
          }
          v7 = v9 + 1;
          v8 += 4;
        } while (v9 + 1 != a2);
      }
    }
  }
  return result;
}

unsigned __int64 game_8ecb20(unsigned __int64 result, unsigned int* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int16 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned __int64 v15;
  unsigned __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  _BOOL8 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64* v29;
  __int64 v30;
  unsigned __int64 v31;

  if (a2 == nullptr) {
    return result;
  }
  v3 = *(_QWORD*)(result + 8);
  v4 = *a2;
  v5 = *(_QWORD*)(v3 + 224);
  if (v5 == 0 || *(_QWORD*)(v3 + 240) == 0) {
    v7 = 1;
    if (v5 != 0) {
      goto LABEL_35;
    }
    goto LABEL_54;
  }
  v8 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v9 = *a2;
    if (v5 <= v4) {
      v9 = (unsigned int)v4 % (unsigned int)v5;
    }
  }
  else {
    v9 = ((_DWORD)v5 - 1) & (unsigned int)v4;
  }
  v10 = *(__int64***)(*(_QWORD*)(v3 + 216) + 8 * v9);
  if (v10 == nullptr || (v11 = *v10) == nullptr) {
    v7 = 1;
    goto LABEL_35;
  }
  if ((v5 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v13 == v4) {
        if (*((_DWORD*)v11 + 4) == (_DWORD)v4) {
          goto LABEL_30;
        }
      }
      else if ((v13 & v8) != v9) {
        goto LABEL_28;
      }
      v11 = (__int64*)*v11;
      if (v11 == nullptr) {
        goto LABEL_28;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == v4) {
      break;
    }
    if (v12 >= v5) {
      v12 %= v5;
    }
    if (v12 != v9) {
    LABEL_28:
      v14 = 1;
      goto LABEL_31;
    }
  LABEL_18:
    v11 = (__int64*)*v11;
    if (v11 == nullptr) {
      goto LABEL_28;
    }
  }
  if (*((_DWORD*)v11 + 4) != (_DWORD)v4) {
    goto LABEL_18;
  }
LABEL_30:
  v14 = *((unsigned __int16*)v11 + 10) + 1;
LABEL_31:
  if (v14 >= 0x270F) {
    v7 = 9999;
  }
  else {
    v7 = v14;
  }
  if (v5 != 0) {
  LABEL_35:
    v15 = v5 - 1;
    if ((v5 & (v5 - 1)) != 0) {
      v2 = *a2;
      if (v5 <= v4) {
        v2 = (unsigned int)v4 % (unsigned int)v5;
      }
    }
    else {
      v2 = ((_DWORD)v5 - 1) & (unsigned int)v4;
    }
    v16 = *(unsigned __int64**)(*(_QWORD*)(v3 + 216) + 8 * v2);
    if (v16 != nullptr) {
      v17 = *v16;
      if (*v16 != 0) {
        if ((v5 & v15) == 0) {
          while (1) {
            v19 = *(_QWORD*)(v17 + 8);
            if (v19 == v4) {
              if (*(_DWORD*)(v17 + 16) == (_DWORD)v4) {
                goto LABEL_91;
              }
            }
            else if ((v19 & v15) != v2) {
              goto LABEL_54;
            }
            v17 = *(_QWORD*)v17;
            if (v17 == 0) {
              goto LABEL_54;
            }
          }
        }
        do {
          v18 = *(_QWORD*)(v17 + 8);
          if (v18 == v4) {
            if (*(_DWORD*)(v17 + 16) == (_DWORD)v4) {
              goto LABEL_91;
            }
          }
          else {
            if (v18 >= v5) {
              v18 %= v5;
            }
            if (v18 != v2) {
              break;
            }
          }
          v17 = *(_QWORD*)v17;
        } while (v17 != 0);
      }
    }
  }
LABEL_54:
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  *(_QWORD*)(result + 8) = v4;
  *(_DWORD*)(result + 16) = v4;
  v17 = result;
  *(_WORD*)(result + 20) = 0;
  v20 = *(float*)(v3 + 248);
  v21 = (float)(unsigned __int64)(*(_QWORD*)(v3 + 240) + 1LL);
  if (v5 == 0 || (float)(v20 * (float)v5) < v21) {
    v22 = v21 / v20;
    v23 = true;
    if (v5 >= 3) {
      v23 = (v5 & (v5 - 1)) != 0;
    }
    v24 = v23 | (2 * v5);
    v25 = vcvtps_u64_f32(v22);
    if (v24 <= v25) {
      v26 = v25;
    }
    else {
      v26 = v24;
    }
    if (v26 == 1) {
      v26 = 2;
    }
    else if ((v26 & (v26 - 1)) != 0) {
      result = std___1___next_prime(v26);
      v5 = *(_QWORD*)(v3 + 224);
      v26 = result;
    }
    if (v26 > v5) {
      goto LABEL_66;
    }
    if (v26 < v5) {
      result = vcvtps_u64_f32((float)*(unsigned __int64*)(v3 + 240) /
                              *(float*)(v3 + 248));
      if (v5 < 3 || (v5 & (v5 - 1)) != 0) {
        result = std___1___next_prime(result);
      }
      else {
        v27 = 1LL << (-(char)__clz(result - 1) & 63);
        if (result >= 2) {
          result = v27;
        }
      }
      if (v26 <= result) {
        v26 = result;
      }
      if (v26 < v5) {
      LABEL_66:
        result =
            (unsigned __int64)GameRoutine_6f2440((__int64*)(v3 + 216), v26);
      }
    }
    v5 = *(_QWORD*)(v3 + 224);
    if ((v5 & (v5 - 1)) != 0) {
      if (v5 <= v4) {
        v2 = v4 % v5;
      }
      else {
        v2 = v4;
      }
    }
    else {
      v2 = ((_DWORD)v5 - 1) & (unsigned int)v4;
    }
  }
  v28 = *(_QWORD*)(v3 + 216);
  v29 = *(unsigned __int64**)(v28 + 8 * v2);
  if (v29 != nullptr) {
    *(_QWORD*)v17 = *v29;
    *v29 = v17;
  }
  else {
    v30 = *(_QWORD*)(v3 + 232);
    *(_QWORD*)v17 = v30;
    *(_QWORD*)(v3 + 232) = v17;
    *(_QWORD*)(v28 + 8 * v2) = v3 + 232;
    if (v30 != 0) {
      v31 = *(_QWORD*)(v30 + 8);
      if ((v5 & (v5 - 1)) != 0) {
        if (v31 >= v5) {
          v31 %= v5;
        }
      }
      else {
        v31 &= v5 - 1;
      }
      *(_QWORD*)(*(_QWORD*)(v3 + 216) + 8 * v31) = v17;
    }
  }
  ++*(_QWORD*)(v3 + 240);
LABEL_91:
  *(_WORD*)(v17 + 20) = v7;
  return result;
}

__attribute__((swiftcall)) void game_907570(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  char v8;
  char v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  _QWORD* result;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;

  v4 = game_GameModeData_instance_;
  if (game_gmap_GmapClock_instance_ != 0) {
    v5 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v5 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v6 = *(_QWORD*)v5;
  v7 = *(_DWORD*)(v5 + 8);
  *(_QWORD*)a2 = v6;
  *(_DWORD*)(a2 + 8) = v7;
  if (v4 != 0) {
    v8 = *(_BYTE*)(v4 + 12);
    v9 = *(_BYTE*)(v4 + 15);
    v10 = *(_DWORD*)(v4 + 60);
    LODWORD(v4) = *(_DWORD*)(v4 + 64);
  }
  else {
    v8 = 0;
    v9 = 0;
    v10 = 0;
  }
  *(_BYTE*)(a2 + 12) = v8;
  *(_BYTE*)(a2 + 13) = v9;
  *(_DWORD*)(a2 + 16) = v10;
  *(_DWORD*)(a2 + 20) = v4;
  v11 = GameRoutine_715440();
  v12 = game_GameModeData_instance_;
  *(_DWORD*)(a2 + 24) = v11;
  if (v12 != 0) {
    LODWORD(v12) = *(_DWORD*)(v12 + 72);
  }
  *(_DWORD*)(a2 + 28) = v12;
  v13 = GameRoutine_7152e0();
  v14 = game_GameModeData_instance_;
  *(_DWORD*)(a2 + 32) = v13;
  if (v14 != 0) {
    v14 = *(_QWORD*)(v14 + 96);
  }
  v19 = v14;
  v18 = 241;
  result = game_UnitPool_Find_6ead60_alt1(&v19, &v18);
  *(_QWORD*)(a2 + 48) = 0;
  *(_QWORD*)(a2 + 56) = result;
  *(_QWORD*)(a2 + 40) = 0;
  if (a1 != 0) {
    v16 = *(_QWORD*)(a1 + 24);
    v18 = 241;
    v17 = *(_QWORD*)(v16 + 1784);
    *(_QWORD*)(a2 + 40) = v17;
    v19 = v17;
    result = game_UnitPool_Find_6ead60_alt1(&v19, &v18);
    *(_QWORD*)(a2 + 48) = result;
  }
  {
    result;
    return;
  }
}

__int64 game_90d5a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  _DWORD* v6;
  int v7;
  bool v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  _DWORD* v15;
  int v16;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  _BYTE* v24;
  __int64 v25;
  char v26;
  int v27;
  char v28;
  char* v29;
  char v30;
  __int64 v31;
  __int64 v32;
  int v33;
  _DWORD* v34;
  int v35;
  bool v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  _BYTE* v43;
  __int64 v44;
  char v45;
  int v46;
  char v47;
  char* v48;
  char v49;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  v3 = result;
  if (v1 == v2) {
    v4 = *(_QWORD*)(result + 8);
  }
  else {
    do {
      if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
        v5 = *(_DWORD*)(v1 + 4);
        v6 = *(_DWORD**)(*(_QWORD*)(v1 + 16) + 24LL);
        v7 = v6[105];
        if ((v7 <= 2 || v6[103] > v5) && (v7 <= 1 || v6[102] > v5)) {
          v10 = v7 >= 1 && v6[101] <= v5;
          if (!v10 && (int)v6[104] <= 0) {
            *(_BYTE*)(v1 + 8) &= ~1u;
          }
        }
      }
      v1 += 32;
    } while (v1 != v2);
    v1 = *(_QWORD*)(result + 8);
    v4 = *(_QWORD*)(result + 16);
  }
  if ((int)((unsigned __int64)(v4 - v1) >> 5) < 1) {
    return result;
  }
  v11 = 0;
  do {
    result = GameRoutine_90c9e0(v1 + 32 * v11);
    v1 = *(_QWORD*)(v3 + 8);
    if ((result & 1) == 0) {
      goto LABEL_23;
    }
    v13 = v1 + 32 * v11;
    if ((*(_BYTE*)(v13 + 8) & 1) != 0) {
      goto LABEL_23;
    }
    v14 = *(_DWORD*)(v13 + 4);
    v15 = *(_DWORD**)(*(_QWORD*)(v13 + 16) + 24LL);
    v16 = v15[105];
    if ((v16 <= 2 || v15[103] > v14) && (v16 <= 1 || v15[102] > v14)) {
      v19 = v16 >= 1 && v15[101] <= v14;
      if (!v19 && (int)v15[104] < 1) {
        goto LABEL_23;
      }
    }
    v20 = *(_QWORD*)(v3 + 16) - v1;
    if ((int)(v20 >> 5) < 1) {
      goto LABEL_22;
    }
    if (((v20 >> 5) & 0x7FFFFFFF) - 1 < 7) {
      v21 = 0;
      v22 = 0;
      v23 = (unsigned __int8)v20 >> 5;
      if (v23 == 0) {
        goto LABEL_48;
      }
    LABEL_46:
      v29 = (char*)(v1 + 32 * v21 + 8);
      do {
        v30 = *v29;
        v29 += 32;
        --v23;
        v22 += v30 & 1;
      } while (v23 != 0);
      goto LABEL_48;
    }
    v24 = (_BYTE*)(v1 + 136);
    v25 = 0;
    v22 = 0;
    do {
      v25 -= 8;
      v26 = v24[96];
      v27 = v22 + (*(v24 - 128) & 1) + (*(v24 - 96) & 1) + (*(v24 - 64) & 1) +
            (*(v24 - 32) & 1) + (*v24 & 1) + (v24[32] & 1);
      v28 = v24[64];
      v24 += 256;
      v22 = v27 + (v28 & 1) + (v26 & 1);
    } while (-8LL * ((v20 >> 8) & 0xFFFFFFF) != v25);
    v21 = -v25;
    v23 = (unsigned __int8)v20 >> 5;
    if (v23 != 0) {
      goto LABEL_46;
    }
  LABEL_48:
    if (v22 <= 3) {
    LABEL_22:
      *(_BYTE*)(v13 + 8) |= 1u;
      v1 = *(_QWORD*)(v3 + 8);
    }
  LABEL_23:
    ++v11;
    v12 = (unsigned __int64)(*(_QWORD*)(v3 + 16) - v1) >> 5;
  } while (v11 < (int)v12);
  if ((int)v12 >= 1) {
    v31 = 0;
    while (1) {
      result = GameRoutine_90c9e0(v1 + 32 * v31);
      v1 = *(_QWORD*)(v3 + 8);
      if ((result & 1) == 0) {
        v32 = v1 + 32 * v31;
        if ((*(_BYTE*)(v32 + 8) & 1) == 0) {
          v33 = *(_DWORD*)(v32 + 4);
          v34 = *(_DWORD**)(*(_QWORD*)(v32 + 16) + 24LL);
          v35 = v34[105];
          if ((v35 <= 2 || v34[103] > v33) && (v35 <= 1 || v34[102] > v33)) {
            v38 = v35 >= 1 && v34[101] <= v33;
            if (!v38 && (int)v34[104] < 1) {
              goto LABEL_53;
            }
          }
          v39 = *(_QWORD*)(v3 + 16) - v1;
          if ((int)(v39 >> 5) >= 1) {
            break;
          }
        LABEL_52:
          *(_BYTE*)(v32 + 8) |= 1u;
          v1 = *(_QWORD*)(v3 + 8);
        }
      }
    LABEL_53:
      if (++v31 >= (int)((unsigned __int64)(*(_QWORD*)(v3 + 16) - v1) >> 5)) {
        return result;
      }
    }
    if (((v39 >> 5) & 0x7FFFFFFF) - 1 >= 7) {
      v43 = (_BYTE*)(v1 + 136);
      v44 = 0;
      v41 = 0;
      do {
        v44 -= 8;
        v45 = v43[96];
        v46 = v41 + (*(v43 - 128) & 1) + (*(v43 - 96) & 1) + (*(v43 - 64) & 1) +
              (*(v43 - 32) & 1) + (*v43 & 1) + (v43[32] & 1);
        v47 = v43[64];
        v43 += 256;
        v41 = v46 + (v47 & 1) + (v45 & 1);
      } while (-8LL * ((v39 >> 8) & 0xFFFFFFF) != v44);
      v40 = -v44;
      v42 = (unsigned __int8)v39 >> 5;
      if (v42 != 0) {
        goto LABEL_76;
      }
    }
    else {
      v40 = 0;
      v41 = 0;
      v42 = (unsigned __int8)v39 >> 5;
      if (v42 == 0) {
        goto LABEL_78;
      }
    LABEL_76:
      v48 = (char*)(v1 + 32 * v40 + 8);
      do {
        v49 = *v48;
        v48 += 32;
        --v42;
        v41 += v49 & 1;
      } while (v42 != 0);
    }
  LABEL_78:
    if (v41 > 3) {
      goto LABEL_53;
    }
    goto LABEL_52;
  }
  return result;
}

__attribute__((swiftcall)) void game_90e4c0(PSEUDO_X8 x8_, _DWORD* a1,
                                            __int64 a2, __int64 a3, int a4,
                                            unsigned int a5, int a6, int a7)
{
  __int64 a8 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned int v8;
  unsigned int v9;
  char v10;
  char v11;
  char v12;
  unsigned int v13;
  char v14;
  __int64 result;
  char v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  char v23;
  char v24;
  unsigned int v25;
  char v26;
  int v27;
  int v30;
  _DWORD v31[2];
  _DWORD v32[2];
  unsigned int v33;
  unsigned int v34;
  _WORD v35[2];

  LOBYTE(v8) = 0;
  if (a3 == 0 || a2 == 0) {
    LOBYTE(v17) = 0;
    LOBYTE(v9) = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    LOBYTE(v19) = 0;
    LOBYTE(v20) = 0;
    LOBYTE(v13) = 0;
    v14 = 0;
    result = 0;
    v16 = 0;
    goto LABEL_26;
  }
  LOWORD(v17) = *a1;
  LOBYTE(v9) = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  LOBYTE(v13) = 0;
  v14 = 0;
  result = 0;
  v16 = 0;
  v19 = v17 & 0xFFF;
  LOBYTE(v17) = 0;
  v18 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v19);
  LOBYTE(v19) = 0;
  LOBYTE(v20) = 0;
  if (v18 != 0) {
    if (a4 < 0) {
      LOBYTE(a4) = *(_BYTE*)(a2 + 584);
      if ((a5 & 0x80000000) == 0) {
      LABEL_6:
        if ((a6 & 0x80000000) == 0) {
          goto LABEL_7;
        }
        goto LABEL_15;
      }
    }
    else if ((a5 & 0x80000000) == 0) {
      goto LABEL_6;
    }
    a5 = *(unsigned __int8*)(a2 + 585);
    if ((a6 & 0x80000000) == 0) {
    LABEL_7:
      if (a7 < 0) {
      LABEL_16:
        LOBYTE(a7) = *(_BYTE*)(a3 + 585);
      }
    LABEL_8:
      v31[0] = (unsigned __int8)a4 | ((unsigned __int8)a5 << 8);
      v31[1] = v31[0];
      v32[0] = (unsigned __int8)a6 | ((unsigned __int8)a7 << 8);
      v32[1] = v32[0];
      if (*(_BYTE*)(v18 + 250) == 30) {
        v35[1] = 0;
        LOBYTE(v35[0]) = a6 - a4;
        v21 = *(unsigned __int16*)(v18 + 256);
        *(_WORD*)((char*)v35 + 1) = (unsigned __int8)(a7 - a5);
        if (v21 != 0) {
          v22 = a8;
          v23 = a6;
          v24 = a7;
          v25 = a5;
          v26 = a4;
          v27 = **(__int16**)(v18 + 264);
        }
        else {
          v24 = a7;
          v23 = a6;
          v25 = a5;
          v26 = a4;
          v22 = a8;
          v27 = 0;
        }
        if (GameRoutine_910ac0((unsigned __int8*)&v34, a2, a3,
                               (unsigned __int8*)v31, (char*)v35, v27) &&
            (*(unsigned __int16*)(v18 + 256) < 2u
                 ? (v30 = 0)
                 : (v30 = *(__int16*)(*(_QWORD*)(v18 + 264) + 2LL)),
             GameRoutine_910ac0((unsigned __int8*)&v33, a3, a2,
                                (unsigned __int8*)v32, (char*)v35, v30))) {
          v10 = v33;
          v14 = v34;
          a8 = v22;
          v12 = v23;
          v11 = v24;
          v13 = v34 >> 8;
          v20 = HIWORD(v34);
          LODWORD(v19) = HIBYTE(v34);
          v9 = v33 >> 8;
          v17 = HIWORD(v33);
          v8 = HIBYTE(v33);
        }
        else {
          LOBYTE(v8) = 0;
          LOBYTE(v17) = 0;
          LOBYTE(v19) = 0;
          LOBYTE(v20) = 0;
          v11 = v24;
          LOBYTE(v9) = v24;
          v12 = v23;
          v10 = v23;
          LOBYTE(v13) = v25;
          v14 = v26;
          a8 = v22;
        }
        result = v25;
        v16 = v26;
      }
      else {
        LOBYTE(v8) = 0;
        LOBYTE(v17) = 0;
        LOBYTE(v19) = 0;
        LOBYTE(v20) = 0;
        LOBYTE(v9) = a7;
        v10 = a6;
        v11 = a7;
        v12 = a6;
        LOBYTE(v13) = a5;
        v14 = a4;
        result = a5;
        v16 = a4;
      }
      goto LABEL_26;
    }
  LABEL_15:
    LOBYTE(a6) = *(_BYTE*)(a3 + 584);
    if ((a7 & 0x80000000) == 0) {
      goto LABEL_8;
    }
    goto LABEL_16;
  }
LABEL_26:
  *(_BYTE*)a8 = v16;
  *(_BYTE*)(a8 + 1) = result;
  *(_WORD*)(a8 + 2) = 0;
  *(_BYTE*)(a8 + 4) = v14;
  *(_BYTE*)(a8 + 5) = v13;
  *(_BYTE*)(a8 + 6) = v20;
  *(_BYTE*)(a8 + 7) = v19;
  *(_BYTE*)(a8 + 8) = v12;
  *(_BYTE*)(a8 + 9) = v11;
  *(_WORD*)(a8 + 10) = 0;
  *(_BYTE*)(a8 + 12) = v10;
  *(_BYTE*)(a8 + 13) = v9;
  *(_BYTE*)(a8 + 14) = v17;
  *(_BYTE*)(a8 + 15) = v8;
  {
    result;
    return;
  }
}

void game_90edc0(__int64 a1)
{
  _WORD* v1;
  _WORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  char* v10;
  char* v11;
  int v12;
  __int128* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  float v21;
  float v22;
  float v23;
  __int128 v24;
  __int128 v25;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  __int128* v31;
  char* v32;
  char* v33;
  __int64 v34;
  int v35;
  __int64 v36;
  float v37;
  struct {
    __int128 v38;
    __int64 v39;
    char gap56_[8];
    __int128* v40;
  } v38_;
  int v41;
  int v42;

  v2 = *(_WORD**)a1;
  v1 = *(_WORD**)(a1 + 8);
  if (v1 != *(_WORD**)a1) {
    v3 = GameData_212ce98[0];
    while (1) {
      v5 = *(_QWORD*)v2;
      v6 = *v3;
      v38_.v40 = &v38_.v38;
      v7 = *(_QWORD*)(v6 + 96);
      v8 = *(char*)(v5 + 584);
      v9 = *(char*)(v5 + 585);
      v10 = *(char**)(v5 + 600);
      v11 = *(char**)(v5 + 608);
      v38_.v39 = v5;
      *(_QWORD*)&v38_.v38 = GameData_1f94290;
      *((_QWORD*)&v38_.v38 + 1) = v7;
      if (v10 == v11) {
        break;
      }
      do {
        v12 = *v10 + v8;
        v41 = v10[1] + v9;
        v42 = v12;
        if (v38_.v40 == nullptr) {
        LABEL_32:
          GameRoutine_60a310_alt1();
        }
        (*(void (**)(__int128*, int*, int*))(*(_QWORD*)v38_.v40 + 48LL))(
            v38_.v40, &v42, &v41);
        v10 += 4;
      } while (v10 != v11);
      v13 = v38_.v40;
      if (v38_.v40 == &v38_.v38) {
        goto LABEL_13;
      }
      if (v38_.v40 != nullptr) {
        v14 = 40;
      LABEL_14:
        (*(void (**)(__int64))(*(_QWORD*)v13 + v14))((__int64)v13);
      }
      *(_WORD*)(*(_QWORD*)v2 + 584LL) = v2[6];
      v15 = *(_QWORD*)v2;
      v16 = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
      if (v16 != 0) {
        v17 = *(char*)(v16 + 584);
        if ((v17 & 0x80000000) == 0) {
          v18 = *(char*)(v16 + 585);
          if ((v18 & 0x80000000) == 0) {
            v19 = *(_DWORD*)(v16 + 592);
            v20 = v18 | 0x100;
            v21 = (float)(unsigned int)(v19 - 1) * 0x1.4000000000000p+1f;
            v22 =
                (float)((float)((float)(v17 | 0x100u) * 0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f;
            if (v19 <= 0) {
              v21 = 0x0.0p+0f;
            }
            v23 = v22 + v21;
            *(_QWORD*)&v24 = COERCE_UNSIGNED_INT(v22 + v21);
            v36 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v20 * 0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f) +
                v21);
            v37 = v23;
            *((_QWORD*)&v24 + 1) = v36;
            v38_.v38 = v24;
            *(_QWORD*)&v25 = __PAIR64__(
                COERCE_UNSIGNED_INT(Unit_6c7fa0_alt1(v16, &v38_.v38)),
                LODWORD(v37));
            *((_QWORD*)&v25 + 1) = v36;
            v38_.v38 = v25;
            Cursor_734a80_alt1(v15 + 48, (__int64*)&v38_.v38);
            UnitActor_81ba20_alt1(v15);
          }
        }
        v27 = *(_QWORD*)(v15 + 264);
        if (v27 != 0) {
          CharacterBuilder_1084780_alt1(v27);
        }
        v15 = *(_QWORD*)v2;
        if (*(_QWORD*)v2 == 0) {
          goto LABEL_5;
        }
      }
      if ((*(_WORD*)(v15 + 417) & 0x4004) != 0) {
        goto LABEL_5;
      }
      v28 = *v3;
      v29 = *(char*)(v15 + 584);
      v30 = *(char*)(v15 + 585);
      v31 = &v38_.v38;
      v38_.v39 = v15;
      v32 = *(char**)(v15 + 600);
      v33 = *(char**)(v15 + 608);
      v38_.v40 = &v38_.v38;
      v34 = *(_QWORD*)(v28 + 96);
      *(_QWORD*)&v38_.v38 = GameData_1f94210;
      *((_QWORD*)&v38_.v38 + 1) = v34;
      if (v32 == v33) {
        goto LABEL_3;
      }
      do {
        v35 = *v32 + v29;
        v41 = v32[1] + v30;
        v42 = v35;
        if (v38_.v40 == nullptr) {
          goto LABEL_32;
        }
        (*(void (**)(__int128*, int*, int*))(*(_QWORD*)v38_.v40 + 48LL))(
            v38_.v40, &v42, &v41);
        v32 += 4;
      } while (v32 != v33);
      v31 = v38_.v40;
      if (v38_.v40 == &v38_.v38) {
      LABEL_3:
        v4 = 32;
      }
      else {
        if (v38_.v40 == nullptr) {
          goto LABEL_5;
        }
        v4 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v31 + v4))((__int64)v31);
    LABEL_5:
      v2 += 8;
      if (v2 == v1) {
        return;
      }
    }
    v13 = &v38_.v38;
  LABEL_13:
    v14 = 32;
    goto LABEL_14;
  }
}

__int64 game_90f080(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  char* v12;
  char v13;
  char* v14;
  _DWORD* v15;
  _DWORD* v16;
  __int64 v17;
  __int64 result;
  char* v19;
  char v20;
  _DWORD* v21;
  __int64 v22;
  __int64* v23;
  __int16 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  _DWORD* v38;
  unsigned int v39;
  __int64 v40;
  int v41;
  struct {
    char gap24_[4];
    int v42;
    __int64 v43;
    __int64 v44;
    __int64 vars0;
    __int64 vars8;
  } v42_;

  if ((*(_WORD*)(a2 + 1536) & 0x40) == 0 ||
      (v7 = *(_QWORD*)(a2 + 1496), v8 = *(_QWORD*)(a2 + 1488), v7 == v8)) {
    v11 = GameData_212c8a8;
  }
  else {
    v9 = (v7 - v8) >> 2;
    v10 = 0;
    v11 = GameData_212c8a8;
    while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                8LL * (*(_DWORD*)(v8 + 4 * v10) & 0xFFF)) +
                     104LL) != 6) {
      if (v9 == ++v10) {
        goto LABEL_8;
      }
    }
    v16 = (_DWORD*)(v8 + 4LL * (unsigned int)v10);
    if (v10 > -1) {
      v11 = v16;
    }
  }
LABEL_8:
  v12 = (char*)game_90f590_alt1(a2, v11, *(char*)(a2 + 584), *(char*)(a2 + 585),
                                a3);
  v13 = a4 & 1;
  v14 = (char*)a2;
  v15 = v11;
  v42_.v43 = v42_.vars0;
  v42_.v44 = v42_.vars8;
  v17 = a1;
  result = 0;
  if ((v12[1] & 0x80000000) == 0) {
    v19 = v12;
    if ((v12[2] & 0x80000000) == 0) {
      v20 = v13;
      v21 = v15;
      v22 = (__int64)v14;
      v23 = GameData_212cfd0[0];
      Mind_743fc0(*GameData_212cfd0[0], v14);
      v24 = *v21;
      v25 = *v23;
      v26 = GameData_212c880[0];
      v27 = *GameData_212c880[0];
      v28 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (v24 & 0xFFF));
      if (v28 != 0) {
        v29 = *(_DWORD*)(v25 + 56) & 0xFFFFF000 | *(_WORD*)(v28 + 16) & 0xFFF;
      }
      else {
        v29 = *(_DWORD*)(v25 + 56) & 0xFFFFF000;
      }
      *(_DWORD*)(v25 + 56) = v29;
      v30 = (unsigned __int8)v19[1];
      *(_BYTE*)(v25 + 313) = v30;
      v31 = (unsigned __int8)v19[2];
      *(_BYTE*)(v25 + 314) = v31;
      *(_DWORD*)(v25 + 320) = *((_DWORD*)v19 + 2);
      *(_BYTE*)(v25 + 317) = v19[5];
      *(_WORD*)(v25 + 318) = *((_WORD*)v19 + 3);
      *(_BYTE*)(v25 + 315) = v19[3];
      *(_BYTE*)(v25 + 316) = v19[4];
      *(_BYTE*)(v25 + 20) = 9;
      if ((v20 & 1) == 0) {
        return GameRoutine_75d120(v17, 1);
      }
      v32 = v29 & 0xFFF;
      if (v32 != 0) {
        v33 = *(_QWORD*)(*(_QWORD*)(v27 + 64) + 8LL * v32);
        if (v33 != 0) {
          v33 = *(_WORD*)(v33 + 16) & 0xFFF;
        }
      }
      else {
        v33 = 0;
      }
      v34 = *(_QWORD*)(v22 + 1960);
      v35 = (v31 << 24) | (v33 << 32) | (v30 << 16) |
            ((unsigned __int64)(unsigned __int8)*(_DWORD*)(v25 + 16) << 8) |
            *(unsigned __int8*)(v25 + 12);
      if (v34 == v35) {
        if (WORD2(v34) == 0) {
          return GameRoutine_75d120(v17, 1);
        }
      }
      else {
        *(_QWORD*)(v22 + 1960) = v35;
        v41 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x124LL) +
                         game_g_shared_system_skills_ptr) &
              0xFFF;
        Unit_6cd120(v22, (_DWORD)v33 != 0, &v41);
        v25 = *v23;
        if (*(_WORD*)(v22 + 1964) == 0) {
          return GameRoutine_75d120(v17, 1);
        }
      }
      v36 = Mind_743fc0(v25, (char*)v22);
      *(_BYTE*)(v36 + 20) = 3;
      *(_DWORD*)(v36 + 12) = *(unsigned __int8*)(v22 + 1960);
      *(_DWORD*)(v36 + 16) = *(unsigned __int8*)(v22 + 1961);
      *(_BYTE*)(v36 + 313) = *(_BYTE*)(v22 + 1962);
      *(_BYTE*)(v36 + 314) = *(_BYTE*)(v22 + 1963);
      if (*(_WORD*)(v22 + 1964) != 0) {
        v37 = *(_QWORD*)(*(_QWORD*)(*v26 + 64) +
                         8LL * *(unsigned __int16*)(v22 + 1964));
        v38 = (_DWORD*)(v36 + 56);
        if (v37 != 0) {
          v39 = *v38 & 0xFFFFF000 | *(_WORD*)(v37 + 16) & 0xFFF;
          goto LABEL_31;
        }
      }
      else {
        v38 = (_DWORD*)(v36 + 56);
      }
      v39 = *v38 & 0xFFFFF000;
    LABEL_31:
      *(_DWORD*)(v36 + 56) = v39;
      game_map_Mind_UpdateSubTarget(v36);
      if (*(_WORD*)(v22 + 1964) != 0) {
        v40 = *GameData_212cec0;
        if (*(_QWORD*)(v22 + 1960) != *GameData_212cec0) {
          *(_QWORD*)(v22 + 1960) = v40;
          v42_.v42 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x124LL) +
                                game_g_shared_system_skills_ptr) &
                     0xFFF;
          Unit_6cd120(v22, (v40 & 0xFFFF00000000LL) != 0, &v42_.v42);
        }
      }
      return GameRoutine_75d120(v17, 1);
    }
  }
  return result;
}

void* game_90f590(__int64 a1, _DWORD* a2, __int16 a3, __int16 a4,
                  unsigned __int8 a5)
{
  int v5;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  _DWORD* v21;
  char v22;
  void* result;

  if (a1 != 0 && (*a2 & 0xFFF) != 0) {
    v5 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                        8LL * (*a2 & 0xFFF)) +
                             105LL);
    if (v5 == 2 || v5 == 4) {
      v10 = GameData_212cff0[0];
      VTarget_778140(*GameData_212cff0[0] + 8, a1, 9, 0);
      v11 = *v10;
      v12 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a2 & 0xFFF));
      if (v12 != 0) {
        v13 = *(_DWORD*)(v11 + 48) & 0xFFFFF000 | *(_WORD*)(v12 + 16) & 0xFFF;
      }
      else {
        v13 = *(_DWORD*)(v11 + 48) & 0xFFFFF000;
      }
      *(_DWORD*)(v11 + 48) = v13;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)(v11 + 8) + 24LL))(v11 + 8) &
           1) != 0) {
        v19 = *v10;
        v20 = GameRoutine_845840((_QWORD*)(*v10 + 64), a3, a4);
        if (v20 <= -1) {
          v21 = GameData_212d208;
        }
        else {
          v21 = (_DWORD*)(v19 + 12LL * (unsigned int)v20 + 68);
        }
      LABEL_21:
        v22 =
            ((__int64 (*)(__int64, _DWORD*))GameRoutine_77a9c0)(*v10 + 8, v21);
        result = v21;
        if ((v22 & 1) != 0) {
          return result;
        }
      }
    }
    else if (v5 == 3) {
      v10 = GameData_212cff0[0];
      VTarget_778140(*GameData_212cff0[0] + 8, a1, 9, 0);
      v16 = *v10;
      v17 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a2 & 0xFFF));
      v18 = v17 != 0 ? *(_DWORD*)(v16 + 48) & 0xFFFFF000 |
                           *(_WORD*)(v17 + 16) & 0xFFF
                     : *(_DWORD*)(v16 + 48) & 0xFFFFF000;
      *(_DWORD*)(v16 + 48) = v18;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)(v16 + 8) + 24LL))(v16 + 8) &
           1) != 0) {
        v21 = VTarget_779660((_DWORD*)(*v10 + 8), a5);
        goto LABEL_21;
      }
    }
  }
  return &GameData_1b47d78;
}

_QWORD* game_910680(_QWORD* result, unsigned int* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;

  if (result != nullptr) {
    v2 = *a2;
    v3 = v2 & 0xFFF;
    if ((v2 & 0xFFF) != 0) {
      v4 = result[170];
      if (((v2 >> 5) & 0x7F) + 1 <= (result[171] - v4) >> 2 &&
          ((*(_DWORD*)(v4 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) != 0) {
        v5 = result[175];
        v6 = result[174];
        if (v5 == v6) {
          return nullptr;
        }
        v7 = (v5 - v6) >> 2;
        v8 = 0;
        while (((*(_DWORD*)(v6 + 4 * v8) ^ (unsigned int)v2) & 0xFFF) != 0) {
          if (v7 == ++v8) {
            return nullptr;
          }
        }
        if (v8 < 0) {
          return nullptr;
        }
        v9 = *(_DWORD*)(v6 + 4LL * (unsigned int)v8);
        v10 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                             8LL * (v9 & 0xFFF)) +
                                  281LL);
        if (v10 <= 1) {
          v10 = 1;
        }
        if ((v9 & 0x1F000000) == 0 && ((v9 >> 19) & 0x1F) >= v10 - 1) {
          return nullptr;
        }
      }
      v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v3) +
                       536LL);
      if (v11 != 0 &&
          (v12 = *(unsigned __int16*)(v11 + 16), v13 = result[218],
           v14 = v12 & 0xFFF, v15 = (v12 >> 5) & 0x7F, v16 = result[219] - v13,
           v17 = v14, v15 + 1 <= (unsigned __int64)(v16 >> 2)) &&
          ((*(_DWORD*)(v13 + 4LL * (unsigned int)v15) >> v14) & 1) != 0 &&
          game_HasActiveSkill_843420(&v17, (__int64)(result + 218))) {
        return nullptr;
      }
      else {
        return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
      }
    }
    else {
      return nullptr;
    }
  }
  return result;
}

_QWORD* game_9107e0(_QWORD* result, _DWORD* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  __int64* v12;
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
  __int64 v23;
  unsigned __int64 v24;
  _DWORD* v25;
  bool v26;
  bool v27;
  __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;

  if (result == nullptr) {
    return result;
  }
  v2 = (unsigned int)*a2;
  v3 = v2 & 0xFFF;
  if ((v2 & 0xFFF) == 0) {
    return nullptr;
  }
  v4 = result[170];
  if (((v2 >> 5) & 0x7F) + 1 <= (result[171] - v4) >> 2 &&
      ((*(_DWORD*)(v4 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) != 0) {
    v5 = result[175];
    v6 = result[174];
    if (v5 == v6) {
      return nullptr;
    }
    v7 = (v5 - v6) >> 2;
    v8 = 0;
    while (((*(_DWORD*)(v6 + 4 * v8) ^ (unsigned int)v2) & 0xFFF) != 0) {
      if (v7 == ++v8) {
        return nullptr;
      }
    }
    if (v8 < 0) {
      return nullptr;
    }
    v9 = *(_DWORD*)(v6 + 4LL * (unsigned int)v8);
    v10 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                         8LL * (v9 & 0xFFF)) +
                              281LL);
    if (v10 <= 1) {
      v10 = 1;
    }
    if ((v9 & 0x1F000000) == 0 && ((v9 >> 19) & 0x1F) >= v10 - 1) {
      return nullptr;
    }
  }
  v11 = (__int64)result;
  v12 = GameData_212c880[0];
  v13 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v14 = *(_QWORD*)(*(_QWORD*)(v13 + 8 * v3) + 536LL);
  if (v14 == 0) {
    goto LABEL_37;
  }
  v15 = *(unsigned __int16*)(v14 + 16);
  v16 = result[218];
  v17 = v15 & 0xFFF;
  v18 = (v15 >> 5) & 0x7F;
  v19 = result[219] - v16;
  v36 = v17;
  if (v18 + 1 <= (unsigned __int64)(v19 >> 2) &&
      ((*(_DWORD*)(v16 + 4LL * (unsigned int)v18) >> v17) & 1) != 0) {
    v20 = a2;
    if (!game_HasActiveSkill_843420(&v36, (__int64)(result + 218))) {
      a2 = v20;
      result = (_QWORD*)v11;
      v13 = *(_QWORD*)(*v12 + 64);
      v3 = *v20 & 0xFFF;
      goto LABEL_22;
    }
    return nullptr;
  }
LABEL_22:
  v21 = *(_QWORD*)(v13 + 8 * v3);
  if (*(_QWORD*)(v21 + 536) != 0) {
    v22 = result[218];
    v23 = result[219] - v22;
    v35 = GameData_21d984c & 0xFFF;
    v24 = ((unsigned __int64)(unsigned int)GameData_21d984c >> 5) & 0x7F;
    if (v24 + 1 <= v23 >> 2 &&
        ((*(_DWORD*)(v22 + 4LL * (unsigned int)v24) >> GameData_21d984c) & 1) !=
            0) {
      v25 = a2;
      v26 = game_HasActiveSkill_843420(&v35, v11 + 1744);
      a2 = v25;
      v27 = v26;
      result = (_QWORD*)v11;
      if (v27) {
        v28 = *(_QWORD*)(v21 + 536);
        if (v28 != 0) {
          LODWORD(v28) = *(_WORD*)(v28 + 16) & 0xFFF;
        }
        v34 = v28;
        v29 = Unit_6ca760(v11, &v34);
        result = (_QWORD*)v11;
        a2 = v25;
        if ((v29 & 1) != 0 && GameData_22400f8 != 0 &&
            *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
            (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
          v30 = *(_QWORD*)(v11 + 440);
          if (v30 != 0 && *(unsigned __int8*)(v30 + 16) <= 8u &&
              game_map_UnitFlags_instance_ != 0) {
            v31 = *(unsigned __int8*)(v11 + 2088);
            if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v31) & 1) != 0) {
              *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v31) |= 2u;
            }
          }
        }
      }
    }
  }
LABEL_37:
  if ((Unit_6ca760((__int64)result, a2) & 1) == 0) {
    return nullptr;
  }
  if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    v32 = *(_QWORD*)(v11 + 440);
    if (v32 != 0 && *(unsigned __int8*)(v32 + 16) <= 8u &&
        game_map_UnitFlags_instance_ != 0) {
      v33 = *(unsigned __int8*)(v11 + 2088);
      if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v33) & 1) != 0) {
        *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v33) |= 2u;
      }
    }
  }
  UnitActor_81a990(v11);
  return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
}

__int64 game_914430(__int64 result, int a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  char* v8;
  unsigned __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[2];
    __int64 v17;
  } v16_;
  struct {
    _QWORD v18[2];
    __int64 v19;
  } v18_;
  struct {
    __int64 v20;
    unsigned __int64 v21;
    char* v22;
  } v20_;
  struct {
    _QWORD v23[2];
    __int64 v24;
  } v23_;

  if (a2 >= 1) {
    *(_DWORD*)(result + 12) += a2;
    if (GameData_21f3c90 != 0) {
      v23_.v23[1] = 0;
      v23_.v24 = 0;
      v23_.v23[0] = 0;
      std___1_to_string_1a0a790((void*)(v16_.v16), (unsigned int)a2);
      v4 = (_QWORD*)GameRoutine_1a0a680(v16_.v16, 0,
                                        "Insert - ProgressMinute [", 25);
      v6 = v4[1];
      v5 = v4[2];
      v18_.v18[0] = *v4;
      v18_.v18[1] = v6;
      v18_.v19 = v5;
      v4[1] = 0;
      v4[2] = 0;
      *v4 = 0;
      v7 = (__int64*)GameRoutine_1a09ce0(v18_.v18, "]", 1);
      v9 = v7[1];
      v8 = (char*)v7[2];
      v20_.v20 = *v7;
      v20_.v21 = v9;
      v20_.v22 = v8;
      v7[1] = 0;
      v7[2] = 0;
      *v7 = 0;
      if ((v20_.v20 & 1) != 0) {
        v10 = v20_.v22;
      }
      else {
        v10 = (char*)&v20_.v20 + 1;
      }
      if ((v20_.v20 & 1) != 0) {
        v11 = v20_.v21;
      }
      else {
        v11 = (unsigned __int64)(unsigned __int8)v20_.v20 >> 1;
      }
      result = GameRoutine_1a09ce0(v23_.v23, v10, v11);
      if ((v20_.v20 & 1) != 0 && v20_.v22 != nullptr) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v20_.v22);
      }
      if ((v18_.v18[0] & 1) != 0 && v18_.v19 != 0) {
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v13 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v18_.v19);
      }
      if ((v16_.v16[0] & 1) != 0 && v16_.v17 != 0) {
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v14 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v16_.v17);
      }
      if ((v23_.v23[0] & 1) != 0 && v23_.v24 != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v23_.v24);
      }
    }
    else if (game_hub_ProcHubSeqView_instance_ != 0) {
      *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 2;
    }
  }
  return result;
}

__int64 game_914820()
{

#pragma clang fp contract(off)
  unsigned __int64 v0;
  __int128 v1;

  if (game_ProcFadeView_instance_ == 0) {
    return 0;
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
  if (*((float*)&v1 + 3) == 0x1.0000000000000p+0f &&
      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v0 + 160) + 16LL))(v0 + 160,
                                                           *((float*)&v1 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
    return GameRoutine_d85af0();
  }
  else {
    return 0;
  }
}

void game_914b80(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int128 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  if (game_ProcFadeView_instance_ == 0) {
    return;
  }
  v2 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v2 + 172) == *(float*)(v2 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160);
  }
  else {
    v3 = *(_OWORD*)(v2 + 208);
  }
  if (*((float*)&v3 + 3) != 0x1.0000000000000p+0f ||
      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160,
                                                           *((float*)&v3 + 3)))
              .n128_f32[3] != 0x1.0000000000000p+0f ||
      (GameRoutine_d6f7f0(GameData_21f3cc0) & 1) == 0) {
    return;
  }
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_13;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_13:
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    while (1) {
      if (*(_BYTE*)v6 == 2) {
        if (*(_DWORD*)(v6 + 32) == 1) {
          *(_QWORD*)(a1 + 16) = v6;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return;
        }
      }
      else if (*(_BYTE*)v6 == 0) {
        return;
      }
      v6 += 64;
    }
  }
}

__attribute__((swiftcall)) void game_91c130(PSEUDO_X8 x8_,
                                            unsigned __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  unsigned __int64 v4;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned int v11;
  _QWORD* v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  _QWORD* v32;
  unsigned __int64 v33;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v43;
  unsigned __int64 v44;
  unsigned __int64 v46;
  unsigned __int64 v47;
  _QWORD* v48;
  _QWORD* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;

  v3 = *(unsigned __int8*)(result + 120);
  v4 = result;
  if (v3 == 2) {
    v11 = *(unsigned __int16*)(result + 128);
    if (v11 < 2) {
      goto LABEL_103;
    }
    result = game_HashString(*(_QWORD*)(*(_QWORD*)(result + 136) + 8LL));
    if (result == 0 || game_GameModeData_instance_ == 0) {
      goto LABEL_102;
    }
    v13 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v14 = v13[2];
    if (v14 == 0 || v13[4] == 0) {
      goto LABEL_102;
    }
    v16 = v14 - 1;
    if ((v14 & (v14 - 1)) != 0) {
      v17 = result;
      if (result >= v14) {
        v17 = result % v14;
      }
    }
    else {
      v17 = v16 & result;
    }
    v23 = *(_QWORD**)(v13[1] + 8 * v17);
    if (v23 == nullptr) {
      goto LABEL_102;
    }
    v24 = (_QWORD*)*v23;
    if (v24 == nullptr) {
      goto LABEL_102;
    }
    if ((v14 & v16) == 0) {
      while (1) {
        v26 = v24[1];
        if (result == v26) {
          if (v24[2] == result) {
            goto LABEL_66;
          }
        }
        else if ((v26 & v16) != v17) {
          goto LABEL_102;
        }
        v24 = (_QWORD*)*v24;
        if (v24 == nullptr) {
          goto LABEL_102;
        }
      }
    }
    while (1) {
      v25 = v24[1];
      if (result == v25) {
        if (v24[2] == result) {
        LABEL_66:
          v28 = v24[3];
          if (v28 == 0) {
            goto LABEL_102;
          }
          v29 = *(_DWORD*)(v28 + 32);
          v11 = *(unsigned __int16*)(v4 + 128);
          if (v29 == 0 || v11 == 0) {
            goto LABEL_103;
          }
          result = game_HashString(**(_QWORD**)(v4 + 136));
          if (result == 0 || game_GameModeData_instance_ == 0) {
            goto LABEL_102;
          }
          v32 = *(_QWORD**)(game_GameModeData_instance_ + 48);
          v33 = v32[2];
          if (v33 == 0 || v32[4] == 0) {
            goto LABEL_102;
          }
          v35 = v33 - 1;
          if ((v33 & (v33 - 1)) != 0) {
            v36 = result;
            if (result >= v33) {
              v36 = result % v33;
            }
          }
          else {
            v36 = v35 & result;
          }
          v37 = *(_QWORD**)(v32[1] + 8 * v36);
          if (v37 == nullptr) {
            goto LABEL_102;
          }
          v38 = (_QWORD*)*v37;
          if (v38 == nullptr) {
            goto LABEL_102;
          }
          if ((v33 & v35) == 0) {
            while (1) {
              v40 = v38[1];
              if (result == v40) {
                if (v38[2] == result) {
                  goto LABEL_99;
                }
              }
              else if ((v40 & v35) != v36) {
                goto LABEL_102;
              }
              v38 = (_QWORD*)*v38;
              if (v38 == nullptr) {
                goto LABEL_102;
              }
            }
          }
          while (1) {
            v39 = v38[1];
            if (result == v39) {
              if (v38[2] == result) {
              LABEL_99:
                v41 = v38[3];
                if (v41 != 0 && *(_DWORD*)(v41 + 32) != 0) {
                  *(_BYTE*)a2 = 1;
                  v18 = "MID_ScoutInfo_NegotiationConditions_"
                        "SideStoryClearAndDefeat";
                  goto LABEL_136;
                }
              LABEL_102:
                v11 = *(unsigned __int16*)(v4 + 128);
              LABEL_103:
                if (v11 == 0) {
                  goto LABEL_135;
                }
                result = game_HashString(**(_QWORD**)(v4 + 136));
                if (result == 0 || game_GameModeData_instance_ == 0) {
                  goto LABEL_135;
                }
                v43 = *(_QWORD**)(game_GameModeData_instance_ + 48);
                v44 = v43[2];
                if (v44 == 0 || v43[4] == 0) {
                  goto LABEL_135;
                }
                v46 = v44 - 1;
                if ((v44 & (v44 - 1)) != 0) {
                  v47 = result;
                  if (result >= v44) {
                    v47 = result % v44;
                  }
                }
                else {
                  v47 = v46 & result;
                }
                v48 = *(_QWORD**)(v43[1] + 8 * v47);
                if (v48 == nullptr) {
                  goto LABEL_135;
                }
                v49 = (_QWORD*)*v48;
                if (v49 == nullptr) {
                  goto LABEL_135;
                }
                if ((v44 & v46) == 0) {
                  while (1) {
                    v51 = v49[1];
                    if (result == v51) {
                      if (v49[2] == result) {
                        goto LABEL_132;
                      }
                    }
                    else if ((v51 & v46) != v47) {
                      goto LABEL_135;
                    }
                    v49 = (_QWORD*)*v49;
                    if (v49 == nullptr) {
                      goto LABEL_135;
                    }
                  }
                }
                while (1) {
                  v50 = v49[1];
                  if (result == v50) {
                    if (v49[2] == result) {
                    LABEL_132:
                      v52 = v49[3];
                      if (v52 != 0 && *(_DWORD*)(v52 + 32) != 0) {
                        *(_BYTE*)a2 = 0;
                        v18 = "MID_ScoutInfo_NegotiationConditions_"
                              "SideStoryClearAndAction";
                        goto LABEL_136;
                      }
                    LABEL_135:
                      *(_BYTE*)a2 = 0;
                      v18 =
                          "MID_ScoutInfo_NegotiationConditions_ClearAndAction";
                      goto LABEL_136;
                    }
                  }
                  else {
                    if (v50 >= v44) {
                      v50 %= v44;
                    }
                    if (v50 != v47) {
                      goto LABEL_135;
                    }
                  }
                  v49 = (_QWORD*)*v49;
                  if (v49 == nullptr) {
                    goto LABEL_135;
                  }
                }
              }
            }
            else {
              if (v39 >= v33) {
                v39 %= v33;
              }
              if (v39 != v36) {
                goto LABEL_102;
              }
            }
            v38 = (_QWORD*)*v38;
            if (v38 == nullptr) {
              goto LABEL_102;
            }
          }
        }
      }
      else {
        if (v25 >= v14) {
          v25 %= v14;
        }
        if (v25 != v17) {
          goto LABEL_102;
        }
      }
      v24 = (_QWORD*)*v24;
      if (v24 == nullptr) {
        goto LABEL_102;
      }
    }
  }
  if (v3 == 1) {
    if (*(_WORD*)(result + 128) == 0) {
      goto LABEL_65;
    }
    result = game_HashString(**(_QWORD**)(result + 136));
    if (result == 0 || game_GameModeData_instance_ == 0) {
      goto LABEL_65;
    }
    v6 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v7 = v6[2];
    if (v7 == 0 || v6[4] == 0) {
      goto LABEL_65;
    }
    v9 = v7 - 1;
    if ((v7 & (v7 - 1)) != 0) {
      v10 = result;
      if (result >= v7) {
        v10 = result % v7;
      }
    }
    else {
      v10 = v9 & result;
    }
    v19 = *(_QWORD**)(v6[1] + 8 * v10);
    if (v19 == nullptr) {
      goto LABEL_65;
    }
    v20 = (_QWORD*)*v19;
    if (v20 == nullptr) {
      goto LABEL_65;
    }
    if ((v7 & v9) == 0) {
      while (1) {
        v22 = v20[1];
        if (result == v22) {
          if (v20[2] == result) {
            goto LABEL_62;
          }
        }
        else if ((v22 & v9) != v10) {
          goto LABEL_65;
        }
        v20 = (_QWORD*)*v20;
        if (v20 == nullptr) {
          goto LABEL_65;
        }
      }
    }
    while (1) {
      v21 = v20[1];
      if (result == v21) {
        if (v20[2] == result) {
        LABEL_62:
          v27 = v20[3];
          if (v27 != 0 && *(_DWORD*)(v27 + 32) != 0) {
            *(_BYTE*)a2 = 1;
            v18 = "MID_ScoutInfo_NegotiationConditions_SideStoryClear";
            goto LABEL_136;
          }
        LABEL_65:
          *(_BYTE*)a2 = 0;
          v18 = "MID_ScoutInfo_NegotiationConditions_Clear";
          goto LABEL_136;
        }
      }
      else {
        if (v21 >= v7) {
          v21 %= v7;
        }
        if (v21 != v10) {
          goto LABEL_65;
        }
      }
      v20 = (_QWORD*)*v20;
      if (v20 == nullptr) {
        goto LABEL_65;
      }
    }
  }
  *(_BYTE*)a2 = 1;
  v18 = &GameData_1a9f09e;
LABEL_136:
  *(_QWORD*)(a2 + 8) = v18;
  v53 = *(_QWORD*)(v4 + 152);
  *(_QWORD*)(a2 + 16) = *(_QWORD*)(v4 + 144);
  *(_QWORD*)(a2 + 24) = v53;
  {
    result;
    return;
  }
}

__int64* game_92aca0(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  __int64* result;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v20[2];
    __int64 v21;
  } v20_;

  game_92b240((void*)(v20_.v20), a1);
  GameRoutine_1a09ce0(v20_.v20, &GameData_1ac690d, 1);
  v4 = *a2;
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = a2 + 1;
  }
  else {
    v7 = *((unsigned __int8**)a2 + 2);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0(v20_.v20, v7, v8);
  result = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)v20_.v20);
  v10 = result;
  if (result != nullptr) {
    v11 = result[10];
    if (v11 == 0) {
      goto LABEL_38;
    }
    result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v11 + 48LL))(v11);
  }
  if ((v20_.v20[0] & 1) != 0 && v20_.v21 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v20_.v21);
  }
  if (v10 == nullptr) {
    game_92ae90((void*)(v20_.v20), a1, a2);
    result = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)v20_.v20);
    v13 = result;
    if (result != nullptr) {
      v14 = result[10];
      if (v14 == 0) {
        goto LABEL_38;
      }
      result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v14 + 48LL))(v14);
    }
    if ((v20_.v20[0] & 1) != 0 && v20_.v21 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v20_.v21);
    }
    if (v13 == nullptr) {
      game_92af90((void*)(v20_.v20), a1, a2);
      result =
          GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)v20_.v20);
      v16 = result;
      if (result != nullptr) {
        v17 = result[10];
        if (v17 == 0) {
          goto LABEL_38;
        }
        result =
            (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v17 + 48LL))(v17);
      }
      if ((v20_.v20[0] & 1) != 0 && v20_.v21 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        result = (__int64*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v20_.v21);
      }
      if (v16 == nullptr) {
        result = GameRoutine_92b0a0((_QWORD*)(a1 + 56), a2);
        if (result != nullptr) {
          v19 = result[10];
          if (v19 != 0) {
            return (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v19 + 48LL))(
                v19);
          }
        LABEL_38:
          GameRoutine_60a310_alt1();
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_92ae90(PSEUDO_X8 x8_, __int64 a1,
                                            unsigned __int8* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 24);
  }
  else {
    v5 = a1 + 9;
  }
  v6 = strlen(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(v6);
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v9, 16,
                                             0);
    a3[1] = v7;
    a3[2] = v8;
    *a3 = v9 | 1;
    goto LABEL_12;
  }
  *(_BYTE*)a3 = 2 * v6;
  v8 = (__int64)a3 + 1;
  if (v6 != 0) {
  LABEL_12:
    memmove(v8, v5, v7);
  }
  *(_BYTE*)(v8 + v7) = 0;
  GameRoutine_1a09ce0(a3, &GameData_1ac690d, 1);
  v10 = *a2;
  v11 = (v10 & 1) == 0;
  v12 = v10 >> 1;
  if (v11) {
    v13 = a2 + 1;
  }
  else {
    v13 = *((unsigned __int8**)a2 + 2);
  }
  if (v11) {
    v14 = v12;
  }
  else {
    v14 = *((_QWORD*)a2 + 1);
  }
  {
    GameRoutine_1a09ce0(a3, v13, v14);
    return;
  }
}

__attribute__((swiftcall)) void game_92af90(PSEUDO_X8 x8_, __int64 a1,
                                            unsigned __int8* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;

  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 48);
  }
  else {
    v5 = a1 + 33;
  }
  v6 = strlen(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(v6);
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v9, 16,
                                             0);
    a3[1] = v7;
    a3[2] = v8;
    *a3 = v9 | 1;
    goto LABEL_12;
  }
  *(_BYTE*)a3 = 2 * v6;
  v8 = (__int64)a3 + 1;
  if (v6 != 0) {
  LABEL_12:
    memmove(v8, v5, v7);
  }
  *(_BYTE*)(v8 + v7) = 0;
  GameRoutine_1a09ce0(a3, &GameData_1ac690d, 1);
  v10 = *a2;
  v11 = (v10 & 1) == 0;
  v12 = v10 >> 1;
  if (v11) {
    v13 = a2 + 1;
  }
  else {
    v13 = *((unsigned __int8**)a2 + 2);
  }
  if (v11) {
    v14 = v12;
  }
  else {
    v14 = *((_QWORD*)a2 + 1);
  }
  {
    GameRoutine_1a09ce0(a3, v13, v14);
    return;
  }
}

__attribute__((swiftcall)) void game_92b240(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 24);
  }
  else {
    v4 = a1 + 9;
  }
  result = strlen(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(result);
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v7 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v8, 16,
                                             0);
    a2[1] = v6;
    a2[2] = v7;
    *a2 = v8 | 1;
    goto LABEL_12;
  }
  *(_BYTE*)a2 = 2 * result;
  v7 = (__int64)a2 + 1;
  if (result != 0) {
  LABEL_12:
    result = memmove(v7, v4, v6);
  }
  *(_BYTE*)(v7 + v6) = 0;
  v9 = *(unsigned __int8*)(a1 + 32);
  if ((v9 & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 40);
  }
  else {
    v10 = v9 >> 1;
  }
  if (v10 != 0) {
    GameRoutine_1a09ce0(a2, &GameData_1ac690d, 1);
    if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
      v11 = *(_QWORD*)(a1 + 48);
    }
    else {
      v11 = a1 + 33;
    }
    v12 = strlen(v11);
    {
      GameRoutine_1a09ce0(a2, v11, v12);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 game_93f620(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  __int64 v3;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  int v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  _QWORD* v19;
  unsigned __int64 v20;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  int v30;
  _QWORD* v31;
  unsigned __int64 v32;
  unsigned __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64* v42;
  int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  int v48;

  v2 = game_HashString_alt1(&GameData_1ae5908, a2);
  if (v2 == 0 || game_GameModeData_instance_ == 0) {
    goto LABEL_31;
  }
  v5 = *(_QWORD**)(game_GameModeData_instance_ + 48);
  v6 = v5[2];
  if (v6 == 0 || v5[4] == 0) {
    goto LABEL_31;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = v2;
    if (v2 >= v6) {
      v9 = v2 % v6;
    }
  }
  else {
    v9 = v8 & v2;
  }
  v10 = *(_QWORD**)(v5[1] + 8 * v9);
  if (v10 == nullptr) {
    goto LABEL_31;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    goto LABEL_31;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v14 = v11[1];
      if (v2 == v14) {
        if (v11[2] == v2) {
          goto LABEL_29;
        }
      }
      else if ((v14 & v8) != v9) {
        goto LABEL_31;
      }
      v11 = (_QWORD*)*v11;
      v12 = 0;
      if (v11 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v13 = v11[1];
    if (v2 == v13) {
      break;
    }
    if (v13 >= v6) {
      v13 %= v6;
    }
    if (v13 != v9) {
      goto LABEL_31;
    }
  LABEL_18:
    v11 = (_QWORD*)*v11;
    v12 = 0;
    if (v11 == nullptr) {
      goto LABEL_32;
    }
  }
  if (v11[2] != v2) {
    goto LABEL_18;
  }
LABEL_29:
  v15 = v11[3];
  if (v15 == 0) {
  LABEL_31:
    v12 = 0;
    goto LABEL_32;
  }
  v12 = *(_DWORD*)(v15 + 32);
LABEL_32:
  v16 = game_HashString_alt1(&GameData_1ada551, v3);
  v18 = 0;
  if (v16 != 0 && game_GameModeData_instance_ != 0) {
    v19 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v20 = v19[2];
    if (v20 == 0 || v19[4] == 0) {
      goto LABEL_60;
    }
    v22 = v20 - 1;
    if ((v20 & (v20 - 1)) != 0) {
      v23 = v16;
      if (v16 >= v20) {
        v23 = v16 % v20;
      }
    }
    else {
      v23 = v22 & v16;
    }
    v24 = *(_QWORD**)(v19[1] + 8 * v23);
    if (v24 == nullptr) {
      goto LABEL_60;
    }
    v25 = (_QWORD*)*v24;
    if (v25 == nullptr) {
      goto LABEL_60;
    }
    if ((v20 & v22) == 0) {
      while (1) {
        v27 = v25[1];
        if (v16 == v27) {
          if (v25[2] == v16) {
            goto LABEL_58;
          }
        }
        else if ((v27 & v22) != v23) {
          goto LABEL_60;
        }
        v25 = (_QWORD*)*v25;
        v18 = 0;
        if (v25 == nullptr) {
          goto LABEL_61;
        }
      }
    }
    do {
      v26 = v25[1];
      if (v16 == v26) {
        if (v25[2] == v16) {
        LABEL_58:
          v28 = v25[3];
          if (v28 != 0) {
            v18 = *(_DWORD*)(v28 + 32);
            break;
          }
        LABEL_60:
          v18 = 0;
          break;
        }
      }
      else {
        if (v26 >= v20) {
          v26 %= v20;
        }
        if (v26 != v23) {
          goto LABEL_60;
        }
      }
      v25 = (_QWORD*)*v25;
      v18 = 0;
    } while (v25 != nullptr);
  }
LABEL_61:
  v29 = game_HashString_alt1(&GameData_1ab3b8e, v17);
  v30 = 0;
  if (v29 == 0 || game_GameModeData_instance_ == 0) {
    goto LABEL_90;
  }
  v31 = *(_QWORD**)(game_GameModeData_instance_ + 48);
  v32 = v31[2];
  if (v32 == 0 || v31[4] == 0) {
    goto LABEL_89;
  }
  v34 = v32 - 1;
  if ((v32 & (v32 - 1)) != 0) {
    v35 = v29;
    if (v29 >= v32) {
      v35 = v29 % v32;
    }
  }
  else {
    v35 = v34 & v29;
  }
  v36 = *(_QWORD**)(v31[1] + 8 * v35);
  if (v36 == nullptr) {
    goto LABEL_89;
  }
  v37 = (_QWORD*)*v36;
  if (v37 == nullptr) {
    goto LABEL_89;
  }
  if ((v32 & v34) == 0) {
    while (1) {
      v39 = v37[1];
      if (v29 == v39) {
        if (v37[2] == v29) {
          goto LABEL_87;
        }
      }
      else if ((v39 & v34) != v35) {
        goto LABEL_89;
      }
      v37 = (_QWORD*)*v37;
      v30 = 0;
      if (v37 == nullptr) {
        goto LABEL_90;
      }
    }
  }
  while (2) {
    v38 = v37[1];
    if (v29 != v38) {
      if (v38 >= v32) {
        v38 %= v32;
      }
      if (v38 != v35) {
        goto LABEL_89;
      }
    }
    else if (v37[2] == v29) {
    LABEL_87:
      v40 = v37[3];
      if (v40 != 0) {
        v30 = *(_DWORD*)(v40 + 32);
        goto LABEL_90;
      }
    LABEL_89:
      v30 = 0;
    LABEL_90:
      v41 = 100 * (v18 + v12 + v30);
      if (v41 < 1) {
        return 0;
      }
      nn_os_LockMutex(&game_g_random_mutex);
      v42 = game_map_MapRandom_instance__ptr[0];
      v43 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 8);
      v44 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
      v45 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL)) ^
            (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((__int128*)0x10LL))
             << 11);
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL)) =
          *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 4) = v43;
      v46 = (v45 >> 8) ^ (v44 >> 19) ^ v45 ^ v44;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 8) = v44;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 12) = v46;
      v47 = v46 & 0x7FFFFFFF;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v48 = v47 % v41;
      if (v12 != 0) {
        v48 -= 100 * v12;
        if (v48 < 0) {
          return 4;
        }
      }
      if (v18 != 0) {
        v48 -= 100 * v18;
        if (v48 < 0) {
          return 3;
        }
      }
      if (v30 == 0 || ((v48 - 100 * v30) & 0x80000000) == 0) {
        return 0;
      }
      return 2;
    }
    v37 = (_QWORD*)*v37;
    v30 = 0;
    if (v37 == nullptr) {
      goto LABEL_90;
    }
    continue;
  }
}

__attribute__((swiftcall)) void game_93fa20(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  char v5;
  unsigned __int64 result;
  __int64 v7;
  long double v8;
  int v9;
  _QWORD* v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  unsigned __int64 v22;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  unsigned __int64 v32;
  int v34;
  unsigned __int8* v35;
  __int64 v36;
  unsigned __int8* v37;
  int v38;
  unsigned int v39;
  __int64 v40;
  __int64* v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  __int64 v47;
  char v48;
  _QWORD* v49;
  __int64 v50;
  signed __int64 v51;
  unsigned __int8* v52;
  __int64 v53;
  __int64 v54;
  _BYTE* v55;
  _BYTE* v56;
  _QWORD* v57;
  __int64 v58;
  unsigned int v59;
  __int64 v60;
  __int64* v61;
  int v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  _BYTE* v67;
  char v68;
  unsigned __int8* v69;
  __int64 v70;
  unsigned __int8* v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int v81;
  int* v82;
  unsigned __int64 v83;
  int v84;
  int v85;
  signed int v86;
  int v87;
  int v88;
  int v89;
  unsigned int v90;
  int v91;
  signed int v92;
  int v93;
  unsigned int v94;
  int v95;
  int v96;
  unsigned __int8 v97;
  int v98;
  int v99;
  __int64 v100;
  __int64 v101;
  int v102;
  int v103;
  signed int v104;
  signed int v105;
  int v106;
  int v107;
  unsigned int v108;
  int v109;
  signed int v110;
  signed int v111;
  unsigned int v112;
  int v113;
  unsigned __int8 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  _QWORD* v119;
  unsigned __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  int v126;
  _BYTE* v127;
  _BYTE* v128;
  __int64 v129;
  __int64 v130;
  unsigned __int8* v131;
  unsigned __int64 v132;
  _QWORD v133[4];
  _QWORD* v134;

  *(_DWORD*)(a3 + 87) = 0;
  *(_QWORD*)(a3 + 72) = 0;
  *(_QWORD*)(a3 + 80) = 0;
  v5 = a2;
  *(_QWORD*)(a3 + 56) = 0;
  *(_QWORD*)(a3 + 64) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_QWORD*)(a3 + 24) = 0;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 8) = 0;
  *(_QWORD*)(a3 + 16) = 0;
  *(_QWORD*)a3 = 0;
  *(_BYTE*)(a3 + 90) = 7;
  result = game_HashString_alt1(&GameData_1aa84e9, a2);
  v9 = 0;
  if (result == 0 || game_GameModeData_instance_ == 0) {
    goto LABEL_30;
  }
  v10 = *(_QWORD**)(game_GameModeData_instance_ + 48);
  v11 = v10[2];
  v12 = v11 == 0 || v10[4] == 0;
  if (v12) {
    goto LABEL_29;
  }
  v13 = v11 - 1;
  if ((v11 & (v11 - 1)) != 0) {
    v14 = result;
    if (result >= v11) {
      v14 = result % v11;
    }
  }
  else {
    v14 = v13 & result;
  }
  v15 = *(_QWORD**)(v10[1] + 8 * v14);
  if (v15 == nullptr) {
    goto LABEL_29;
  }
  v16 = (_QWORD*)*v15;
  if (v16 == nullptr) {
    goto LABEL_29;
  }
  if ((v11 & v13) == 0) {
    while (1) {
      v18 = v16[1];
      if (result == v18) {
        if (v16[2] == result) {
          goto LABEL_27;
        }
      }
      else if ((v18 & v13) != v14) {
        goto LABEL_29;
      }
      v16 = (_QWORD*)*v16;
      v9 = 0;
      if (v16 == nullptr) {
        goto LABEL_30;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (result == v17) {
      break;
    }
    if (v17 >= v11) {
      v17 %= v11;
    }
    if (v17 != v14) {
      goto LABEL_29;
    }
  LABEL_16:
    v16 = (_QWORD*)*v16;
    v9 = 0;
    if (v16 == nullptr) {
      goto LABEL_30;
    }
  }
  if (v16[2] != result) {
    goto LABEL_16;
  }
LABEL_27:
  v19 = v16[3];
  if (v19 != 0) {
    v9 = *(_DWORD*)(v19 + 32);
    goto LABEL_30;
  }
LABEL_29:
  v9 = 0;
LABEL_30:
  if (v5 == 2) {
    result = game_HashString_alt1(&GameData_1ae2006, v7);
    LODWORD(v20) = 0;
    if (result == 0 || game_GameModeData_instance_ == 0) {
      goto LABEL_59;
    }
    v31 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v32 = v31[2];
    if (v32 != 0 && v31[4] != 0) {
      v117 = v32 - 1;
      if ((v32 & (v32 - 1)) != 0) {
        v118 = result;
        if (result >= v32) {
          v118 = result % v32;
        }
      }
      else {
        v118 = v117 & result;
      }
      v20 = *(_QWORD*)(v31[1] + 8 * v118);
      if (v20 == 0) {
        goto LABEL_59;
      }
      v119 = *(_QWORD**)v20;
      if (*(_QWORD*)v20 != 0) {
        if ((v32 & v117) == 0) {
          while (1) {
            v123 = v119[1];
            if (result == v123) {
              if (v119[2] == result) {
                goto LABEL_237;
              }
            }
            else if ((v123 & v117) != v118) {
              goto LABEL_58;
            }
            v119 = (_QWORD*)*v119;
            LODWORD(v20) = 0;
            if (v119 == nullptr) {
              goto LABEL_59;
            }
          }
        }
        while (1) {
          v122 = v119[1];
          if (result == v122) {
            if (v119[2] == result) {
            LABEL_237:
              v20 = v119[3];
              if (v20 != 0) {
                LODWORD(v20) = *(_DWORD*)(v20 + 32);
              }
              goto LABEL_59;
            }
          }
          else {
            if (v122 >= v32) {
              v122 %= v32;
            }
            if (v122 != v118) {
              goto LABEL_58;
            }
          }
          v119 = (_QWORD*)*v119;
          LODWORD(v20) = 0;
          if (v119 == nullptr) {
            goto LABEL_59;
          }
        }
      }
    }
    goto LABEL_58;
  }
  if (v5 == 3) {
    result = game_HashString_alt1(&GameData_1ac6b6e, v7);
    LODWORD(v20) = 0;
    if (result == 0 || game_GameModeData_instance_ == 0) {
      goto LABEL_59;
    }
    v26 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v27 = v26[2];
    if (v27 != 0 && v26[4] != 0) {
      v29 = v27 - 1;
      if ((v27 & (v27 - 1)) != 0) {
        v30 = result;
        if (result >= v27) {
          v30 = result % v27;
        }
      }
      else {
        v30 = v29 & result;
      }
      v20 = *(_QWORD*)(v26[1] + 8 * v30);
      if (v20 != 0) {
        v119 = *(_QWORD**)v20;
        if (*(_QWORD*)v20 != 0) {
          if ((v27 & v29) == 0) {
            while (1) {
              v121 = v119[1];
              if (result == v121) {
                if (v119[2] == result) {
                  goto LABEL_237;
                }
              }
              else if ((v121 & v29) != v30) {
                goto LABEL_58;
              }
              v119 = (_QWORD*)*v119;
              LODWORD(v20) = 0;
              if (v119 == nullptr) {
                goto LABEL_59;
              }
            }
          }
          while (1) {
            v120 = v119[1];
            if (result == v120) {
              if (v119[2] == result) {
                goto LABEL_237;
              }
            }
            else {
              if (v120 >= v27) {
                v120 %= v27;
              }
              if (v120 != v30) {
                goto LABEL_58;
              }
            }
            v119 = (_QWORD*)*v119;
            LODWORD(v20) = 0;
            if (v119 == nullptr) {
              goto LABEL_59;
            }
          }
        }
        goto LABEL_58;
      }
      goto LABEL_59;
    }
    goto LABEL_58;
  }
  if (v5 != 4) {
    v34 = 0;
    if (a1 == 0) {
      result;
      return;
    }
  LABEL_62:
    v35 = *(unsigned __int8**)(a1 + 400);
    *(_QWORD*)a3 = a1;
    v131 = nullptr;
    v132 = 0;
    v130 = 0;
    if (v35 == nullptr) {
      v37 = nullptr;
      v38 = 0;
      goto LABEL_70;
    }
    v133[0] = GameData_1faf358;
    v133[1] = a1;
    v134 = v133;
    v133[2] = v35;
    v133[3] = &v130;
    GameRoutine_70cdd0(v133);
    if (v134 == v133) {
      v36 = 32;
    }
    else {
      if (v134 == nullptr) {
      LABEL_69:
        v37 = (unsigned __int8*)v130;
        v35 = v131;
        v38 = (int)v131;
      LABEL_70:
        v39 = v38 - (_DWORD)v37;
        if (v38 - (int)v37 >= 1) {
          v40 = 0;
          v41 = game_map_MapRandom_instance__ptr[0];
          do {
            nn_os_LockMutex(&game_g_random_mutex);
            v42 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 8);
            v43 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 12);
            v44 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41) ^
                  (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41) << 11);
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41) =
                *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 4);
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 4) = v42;
            v45 = (v44 >> 8) ^ (v43 >> 19) ^ v44 ^ v43;
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 8) = v43;
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 12) = v45;
            v46 = v45 & 0x7FFFFFFF;
            *(__n128*)&v8 = nn_os_UnlockMutex(&game_g_random_mutex);
            v47 = v130;
            v48 = *(_BYTE*)(v130 + v40);
            *(_BYTE*)(v130 + v40++) = *(_BYTE*)(v130 + v46 % v39);
            *(_BYTE*)(v47 + v46 % v39) = v48;
          } while ((v39 & 0x7FFFFFFF) != v40);
          v37 = (unsigned __int8*)v130;
          v35 = v131;
        }
        v49 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        if ((int)v35 - (int)v37 > 1) {
        LABEL_115:
          v79 = *v37;
          v80 = a1 + 514;
          v81 = v34;
          v82 = (int*)GameData_21d99a8;
          v83 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
          if ((int)v83 >= 1) {
            v84 = *(unsigned __int16*)(v80 + 2 * v79);
            v85 = *(_DWORD*)GameData_21d99a8;
            v86 = 0;
            v87 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
            v88 = *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v83 - 1));
            if (v88 >= v84) {
              v89 = *(unsigned __int16*)(v80 + 2 * v79);
            }
            else {
              v89 =
                  *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v83 - 1));
            }
            if (v85 > v84) {
              v89 = *(_DWORD*)GameData_21d99a8;
            }
            while (1) {
              v90 = (unsigned int)(v86 + v87) >> 1;
              v91 = *(_DWORD*)(GameData_21d99a8 + 4LL * v90);
              if (v89 == v91) {
                break;
              }
              if (v89 < v91) {
                v87 = (unsigned int)(v86 + v87) >> 1;
              }
              else {
                v86 = v90 + 1;
              }
              if (v86 >= v87) {
                goto LABEL_128;
              }
            }
            LOBYTE(v86) = v90 + 1;
          LABEL_128:
            v81 = v34;
            if ((unsigned __int8)v86 > 1u) {
              v92 = 0;
              if (v88 >= v34 + v84) {
                v88 = v34 + v84;
              }
              if (v34 + v84 >= v85) {
                v85 = v88;
              }
              v93 =
                  (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
              while (1) {
                v94 = (unsigned int)(v92 + v93) >> 1;
                v95 = *(_DWORD*)(GameData_21d99a8 + 4LL * v94);
                if (v85 == v95) {
                  break;
                }
                if (v85 < v95) {
                  v93 = (unsigned int)(v92 + v93) >> 1;
                }
                else {
                  v92 = v94 + 1;
                }
                if (v92 >= v93) {
                  goto LABEL_141;
                }
              }
              LOBYTE(v92) = v94 + 1;
            LABEL_141:
              v96 = (unsigned __int8)v92;
              v81 = v34;
              if (v96 - (unsigned __int8)v86 > 1) {
                v97 = v86 + 2;
                v98 = ~v84;
                v99 = v97;
                if (v97 >= (int)v83) {
                  v99 =
                      (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >>
                      2;
                }
                v12 = v97 == 0;
                v100 = v99 - 1;
                if (v12) {
                  v100 = 0;
                }
                v81 = *(_DWORD*)(GameData_21d99a8 + 4 * v100) + v98;
              }
            }
          }
          *(_DWORD*)(a3 + 4 * v79 + 20) = v81;
          v101 = v37[1];
          if ((int)v83 >= 1) {
            v102 = *(unsigned __int16*)(v80 + 2 * v101);
            v103 = *v82;
            v104 = 0;
            v105 = v83;
            v106 = v82[(unsigned int)(v83 - 1)];
            if (v106 >= v102) {
              v107 = v102;
            }
            else {
              v107 = v82[(unsigned int)(v83 - 1)];
            }
            if (v103 > v102) {
              v107 = *v82;
            }
            while (1) {
              v108 = (unsigned int)(v104 + v105) >> 1;
              v109 = v82[v108];
              if (v107 == v109) {
                break;
              }
              if (v107 < v109) {
                v105 = (unsigned int)(v104 + v105) >> 1;
              }
              else {
                v104 = v108 + 1;
              }
              if (v104 >= v105) {
                goto LABEL_160;
              }
            }
            LOBYTE(v104) = v108 + 1;
          LABEL_160:
            if ((unsigned __int8)v104 >= 2u) {
              v110 = 0;
              if (v106 >= v34 + v102) {
                v106 = v34 + v102;
              }
              if (v34 + v102 >= v103) {
                v103 = v106;
              }
              v111 = v83;
              while (1) {
                v112 = (unsigned int)(v110 + v111) >> 1;
                v113 = v82[v112];
                if (v103 == v113) {
                  break;
                }
                if (v103 < v113) {
                  v111 = (unsigned int)(v110 + v111) >> 1;
                }
                else {
                  v110 = v112 + 1;
                }
                if (v110 >= v111) {
                  goto LABEL_173;
                }
              }
              LOBYTE(v110) = v112 + 1;
            LABEL_173:
              if ((unsigned __int8)v110 - (unsigned __int8)v104 >= 2) {
                v114 = v104 + 2;
                if (v114 < (int)v83) {
                  LODWORD(v83) = v114;
                }
                v115 = (int)v83 - 1;
                if (v114 == 0) {
                  v115 = 0;
                }
                v34 = v82[v115] + ~v102;
              }
            }
          }
          v131 = v37;
          *(_DWORD*)(a3 + 4 * v101 + 20) = v34;
          v116 = 128;
          if (*(_QWORD*)(*v49 + 200LL) == 0) {
            v116 = 56;
          }
          {
            nn_mem_StandardAllocator_Free(*v49 + v116, v37);
            return;
          }
        }
        v50 = *(_QWORD*)(a1 + 400);
        v128 = nullptr;
        v129 = 0;
        v127 = nullptr;
        if (v50 == 0) {
          v55 = nullptr;
          v56 = nullptr;
        LABEL_87:
          v59 = (_DWORD)v56 - (_DWORD)v55;
          v126 = v34;
          if ((int)v56 - (int)v55 >= 1) {
            v60 = 0;
            v61 = game_map_MapRandom_instance__ptr[0];
            do {
              nn_os_LockMutex(&game_g_random_mutex);
              v62 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v61);
              v63 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v61 + 4);
              v64 = *(_DWORD*)v61 ^ (*(_DWORD*)v61 << 11);
              *(_DWORD*)v61 = *((_DWORD*)v61 + 1);
              *((_DWORD*)v61 + 1) = v62;
              v65 = (v64 >> 8) ^ (v63 >> 19) ^ v64 ^ v63;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v61) = v63;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v61 + 4) = v65;
              v66 = v65 & 0x7FFFFFFF;
              *(__n128*)&v8 = nn_os_UnlockMutex(&game_g_random_mutex);
              v67 = v127;
              v68 = v127[v60];
              v127[v60++] = v127[v66 % v59];
              v67[v66 % v59] = v68;
            } while ((v59 & 0x7FFFFFFF) != v60);
            v55 = v127;
            v56 = v128;
            v49 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          }
          if (v55 != v56) {
            v69 = v131;
            do {
              if ((unsigned __int64)v69 < v132) {
                *v69++ = *v55;
              }
              else {
                v70 = v130;
                v71 = &v69[-v130];
                v72 = (__int64)&v69[-v130 + 1];
                if (v72 < 0) {
                  goto LABEL_239;
                }
                v73 = v132 - v130;
                if (2 * (v132 - v130) > v72) {
                  v72 = 2 * v73;
                }
                if (v73 >= 0x3FFFFFFFFFFFFFFFLL) {
                  v74 = 0x7FFFFFFFFFFFFFFFLL;
                }
                else {
                  v74 = v72;
                }
                if (v74 != 0) {
                  v75 = fw_memory_HeapManager_Allocate_alt1(*v49, v74, 16, 0);
                }
                else {
                  v75 = 0;
                }
                v71[v75] = *v55;
                v69 = &v71[v75 + 1];
                memcpy(v75, v70, v71);
                v130 = v75;
                v131 = v69;
                v132 = v75 + v74;
                v49 = (_QWORD*)fw_memory_g_heap_manager_ptr;
                if (v70 != 0) {
                  v76 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v76 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v70);
                }
              }
              ++v55;
              v131 = v69;
            } while (v55 != v56);
            v55 = v127;
          }
          v34 = v126;
          if (v55 != nullptr) {
            v77 = *v49;
            v128 = v55;
            v78 = 128;
            if (*(_QWORD*)(v77 + 200) == 0) {
              v78 = 56;
            }
            nn_mem_StandardAllocator_Free(v77 + v78, v55);
          }
          v37 = (unsigned __int8*)v130;
          goto LABEL_115;
        }
        v51 = v35 - v37;
        if (v35 == v37) {
          v54 = 0;
          v53 = 0;
        }
        else {
          if (v51 < 0) {
          LABEL_239:
            GameRoutine_9433d0(v8);
          }
          v52 = v37;
          v53 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v35 - v37, 16, 0);
          v54 = v53 + v51;
          memcpy(v53, v52, v51);
        }
        v57 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v49, 48, 16, 0);
        v57[2] = v53;
        v57[3] = v54;
        v134 = v57;
        *v57 = GameData_1faf2d8;
        v57[1] = v50;
        v57[4] = v54;
        v57[5] = &v127;
        GameRoutine_70cdd0(v133);
        if (v134 == v133) {
          v58 = 32;
        }
        else {
          if (v134 == nullptr) {
          LABEL_86:
            v55 = v127;
            v56 = v128;
            goto LABEL_87;
          }
          v58 = 40;
        }
        (*(void (**)(__int64))(*v134 + v58))((__int64)v134);
        goto LABEL_86;
      }
      v36 = 40;
    }
    (*(void (**)(__int64))(*v134 + v36))((__int64)v134);
    goto LABEL_69;
  }
  result = game_HashString_alt1(&GameData_1aac16b, v7);
  LODWORD(v20) = 0;
  if (result == 0 || game_GameModeData_instance_ == 0) {
    goto LABEL_59;
  }
  v21 = *(_QWORD**)(game_GameModeData_instance_ + 48);
  v22 = v21[2];
  if (v22 == 0 || v21[4] == 0) {
  LABEL_58:
    LODWORD(v20) = 0;
    goto LABEL_59;
  }
  v24 = v22 - 1;
  if ((v22 & (v22 - 1)) != 0) {
    v25 = result;
    if (result >= v22) {
      v25 = result % v22;
    }
  }
  else {
    v25 = v24 & result;
  }
  v20 = *(_QWORD*)(v21[1] + 8 * v25);
  if (v20 != 0) {
    v119 = *(_QWORD**)v20;
    if (*(_QWORD*)v20 != 0) {
      if ((v22 & v24) == 0) {
        while (1) {
          v125 = v119[1];
          if (result == v125) {
            if (v119[2] == result) {
              goto LABEL_237;
            }
          }
          else if ((v125 & v24) != v25) {
            goto LABEL_58;
          }
          v119 = (_QWORD*)*v119;
          LODWORD(v20) = 0;
          if (v119 == nullptr) {
            goto LABEL_59;
          }
        }
      }
      while (1) {
        v124 = v119[1];
        if (result == v124) {
          if (v119[2] == result) {
            goto LABEL_237;
          }
        }
        else {
          if (v124 >= v22) {
            v124 %= v22;
          }
          if (v124 != v25) {
            goto LABEL_58;
          }
        }
        v119 = (_QWORD*)*v119;
        LODWORD(v20) = 0;
        if (v119 == nullptr) {
          goto LABEL_59;
        }
      }
    }
    goto LABEL_58;
  }
LABEL_59:
  v34 = v20 + v9;
  if (a1 != 0) {
    goto LABEL_62;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_940ce0(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2, __int64 a3,
                                            unsigned __int8 a4)
{

#pragma clang fp contract(off)
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v6;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  char v14;
  char v15;
  int v16;
  unsigned __int64 v17;
  int v18;
  _QWORD* v19;
  unsigned __int64 v20;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  unsigned __int64 v32;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  unsigned __int64 v38;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  _QWORD* v49;
  unsigned __int64 v50;
  __int64 v51;
  _QWORD* v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  unsigned __int64 v57;
  _QWORD* v58;
  unsigned __int64 v59;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  _QWORD* v64;
  unsigned __int64 v65;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  _QWORD* v70;
  unsigned __int64 v71;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  _QWORD* v76;
  unsigned __int64 v77;
  unsigned __int64 v79;
  unsigned __int64 v80;
  _QWORD* v81;
  _QWORD* v82;
  unsigned __int64 v83;
  __int64 v84;
  _QWORD* v85;
  unsigned __int64 v86;
  __int64 v87;
  _QWORD* v88;
  unsigned __int64 v89;
  __int64 v90;
  _QWORD* v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  int v96;
  _QWORD* v97;
  unsigned __int64 v98;
  unsigned __int64 v100;
  unsigned __int64 v101;
  _QWORD* v102;
  _QWORD* v103;
  unsigned __int64 v104;
  __int64 v105;
  __int64 v106;
  float v108;
  float result;
  unsigned __int64 v110[2];

  *(_DWORD*)(a5 + 87) = 0;
  v6 = 0;
  *(_QWORD*)(a5 + 72) = 0;
  *(_QWORD*)(a5 + 80) = 0;
  *(_QWORD*)(a5 + 56) = 0;
  *(_QWORD*)(a5 + 64) = 0;
  *(_QWORD*)(a5 + 40) = 0;
  *(_QWORD*)(a5 + 48) = 0;
  *(_QWORD*)(a5 + 24) = 0;
  *(_QWORD*)(a5 + 32) = 0;
  *(_QWORD*)(a5 + 8) = 0;
  *(_QWORD*)(a5 + 16) = 0;
  *(_QWORD*)a5 = a2;
  *(unsigned __int64*)((char*)v110 + 5) = 0;
  v110[0] = 0;
  *(_BYTE*)(a5 + 90) = 1;
  if (a2 == 0 || a3 == 0) {
    v8 = 0;
    goto LABEL_264;
  }
  v8 = 0;
  if (a4 != 0) {
    v9 = a1 + 90;
    v10 = a3 + 540;
    v11 = a2 + 540;
    v13 = 0;
    while (1) {
      v15 = *(_BYTE*)(v9 + v13);
      if (v15 == 0) {
        v14 = 0;
        goto LABEL_6;
      }
      v16 = *(unsigned __int8*)(v10 + v13) - *(unsigned __int8*)(v11 + v13);
      if (v16 >= 4) {
        v17 = game_HashString((__int64)&GameData_1a9c9ea);
        LOBYTE(v18) = 0;
        if (v17 != 0 && game_GameModeData_instance_ != 0) {
          v19 = *(_QWORD**)(game_GameModeData_instance_ + 48);
          v20 = v19[2];
          if (v20 != 0 && v19[4] != 0) {
            v22 = v20 - 1;
            if ((v20 & (v20 - 1)) != 0) {
              v23 = v17;
              if (v17 >= v20) {
                v23 = v17 % v20;
              }
            }
            else {
              v23 = v22 & v17;
            }
            v42 = *(_QWORD**)(v19[1] + 8 * v23);
            if (v42 != nullptr) {
              v43 = (_QWORD*)*v42;
              if (v43 != nullptr) {
                if ((v20 & v22) == 0) {
                  while (1) {
                    v45 = v43[1];
                    if (v17 == v45) {
                      if (v43[2] == v17) {
                        goto LABEL_116;
                      }
                    }
                    else if ((v45 & v22) != v23) {
                      goto LABEL_118;
                    }
                    v43 = (_QWORD*)*v43;
                    LOBYTE(v18) = 0;
                    if (v43 == nullptr) {
                      goto LABEL_119;
                    }
                  }
                }
                while (1) {
                  v44 = v43[1];
                  if (v17 == v44) {
                    if (v43[2] == v17) {
                      goto LABEL_116;
                    }
                  }
                  else {
                    if (v44 >= v20) {
                      v44 %= v20;
                    }
                    if (v44 != v23) {
                      goto LABEL_118;
                    }
                  }
                  v43 = (_QWORD*)*v43;
                  LOBYTE(v18) = 0;
                  if (v43 == nullptr) {
                    goto LABEL_119;
                  }
                }
              }
            }
          }
          goto LABEL_118;
        }
        goto LABEL_119;
      }
      if (v16 != 1) {
        if (v16 == 2) {
          v30 = game_HashString((__int64)&GameData_1aaff8e);
          LOBYTE(v18) = 0;
          if (v30 != 0 && game_GameModeData_instance_ != 0) {
            v31 = *(_QWORD**)(game_GameModeData_instance_ + 48);
            v32 = v31[2];
            if (v32 != 0 && v31[4] != 0) {
              v34 = v32 - 1;
              if ((v32 & (v32 - 1)) != 0) {
                v35 = v30;
                if (v30 >= v32) {
                  v35 = v30 % v32;
                }
              }
              else {
                v35 = v34 & v30;
              }
              v46 = *(_QWORD**)(v31[1] + 8 * v35);
              if (v46 != nullptr) {
                v43 = (_QWORD*)*v46;
                if (v43 != nullptr) {
                  if ((v32 & v34) == 0) {
                    while (1) {
                      v48 = v43[1];
                      if (v30 == v48) {
                        if (v43[2] == v30) {
                          goto LABEL_116;
                        }
                      }
                      else if ((v48 & v34) != v35) {
                        goto LABEL_118;
                      }
                      v43 = (_QWORD*)*v43;
                      LOBYTE(v18) = 0;
                      if (v43 == nullptr) {
                        goto LABEL_119;
                      }
                    }
                  }
                  while (1) {
                    v47 = v43[1];
                    if (v30 == v47) {
                      if (v43[2] == v30) {
                        goto LABEL_116;
                      }
                    }
                    else {
                      if (v47 >= v32) {
                        v47 %= v32;
                      }
                      if (v47 != v35) {
                        goto LABEL_118;
                      }
                    }
                    v43 = (_QWORD*)*v43;
                    LOBYTE(v18) = 0;
                    if (v43 == nullptr) {
                      goto LABEL_119;
                    }
                  }
                }
              }
            }
            goto LABEL_118;
          }
        }
        else {
          if (v16 != 3) {
            goto LABEL_118;
          }
          v24 = game_HashString((__int64)&GameData_1a98da2);
          LOBYTE(v18) = 0;
          if (v24 != 0 && game_GameModeData_instance_ != 0) {
            v25 = *(_QWORD**)(game_GameModeData_instance_ + 48);
            v26 = v25[2];
            if (v26 != 0 && v25[4] != 0) {
              v28 = v26 - 1;
              if ((v26 & (v26 - 1)) != 0) {
                v29 = v24;
                if (v24 >= v26) {
                  v29 = v24 % v26;
                }
              }
              else {
                v29 = v28 & v24;
              }
              v52 = *(_QWORD**)(v25[1] + 8 * v29);
              if (v52 != nullptr) {
                v43 = (_QWORD*)*v52;
                if (v43 != nullptr) {
                  if ((v26 & v28) == 0) {
                    while (1) {
                      v54 = v43[1];
                      if (v24 == v54) {
                        if (v43[2] == v24) {
                          goto LABEL_116;
                        }
                      }
                      else if ((v54 & v28) != v29) {
                        goto LABEL_118;
                      }
                      v43 = (_QWORD*)*v43;
                      LOBYTE(v18) = 0;
                      if (v43 == nullptr) {
                        goto LABEL_119;
                      }
                    }
                  }
                  while (1) {
                    v53 = v43[1];
                    if (v24 == v53) {
                      if (v43[2] == v24) {
                        goto LABEL_116;
                      }
                    }
                    else {
                      if (v53 >= v26) {
                        v53 %= v26;
                      }
                      if (v53 != v29) {
                        goto LABEL_118;
                      }
                    }
                    v43 = (_QWORD*)*v43;
                    LOBYTE(v18) = 0;
                    if (v43 == nullptr) {
                      goto LABEL_119;
                    }
                  }
                }
              }
            }
            goto LABEL_118;
          }
        }
        goto LABEL_119;
      }
      v36 = game_HashString((__int64)&GameData_1af1450);
      LOBYTE(v18) = 0;
      if (v36 == 0 || game_GameModeData_instance_ == 0) {
        goto LABEL_119;
      }
      v37 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v38 = v37[2];
      if (v38 == 0 || v37[4] == 0) {
        goto LABEL_118;
      }
      v40 = v38 - 1;
      if ((v38 & (v38 - 1)) != 0) {
        v41 = v36;
        if (v36 >= v38) {
          v41 = v36 % v38;
        }
      }
      else {
        v41 = v40 & v36;
      }
      v49 = *(_QWORD**)(v37[1] + 8 * v41);
      if (v49 == nullptr) {
        goto LABEL_118;
      }
      v43 = (_QWORD*)*v49;
      if (v43 == nullptr) {
        goto LABEL_118;
      }
      if ((v38 & v40) == 0) {
        while (1) {
          v51 = v43[1];
          if (v36 == v51) {
            if (v43[2] == v36) {
              goto LABEL_116;
            }
          }
          else if ((v51 & v40) != v41) {
            goto LABEL_118;
          }
          v43 = (_QWORD*)*v43;
          LOBYTE(v18) = 0;
          if (v43 == nullptr) {
            goto LABEL_119;
          }
        }
      }
      while (1) {
        v50 = v43[1];
        if (v36 == v50) {
          break;
        }
        if (v50 >= v38) {
          v50 %= v38;
        }
        if (v50 != v41) {
          goto LABEL_118;
        }
      LABEL_88:
        v43 = (_QWORD*)*v43;
        LOBYTE(v18) = 0;
        if (v43 == nullptr) {
          goto LABEL_119;
        }
      }
      if (v43[2] != v36) {
        goto LABEL_88;
      }
    LABEL_116:
      v55 = v43[3];
      if (v55 != 0) {
        v18 = *(_DWORD*)(v55 + 32);
        goto LABEL_119;
      }
    LABEL_118:
      LOBYTE(v18) = 0;
    LABEL_119:
      LOBYTE(v56) = 0;
      if (a4 <= 2u) {
        if (a4 == 1) {
          v69 = game_HashString((__int64)&GameData_1afceec);
          LOBYTE(v56) = 0;
          if (v69 != 0 && game_GameModeData_instance_ != 0) {
            v70 = *(_QWORD**)(game_GameModeData_instance_ + 48);
            v71 = v70[2];
            if (v71 != 0 && v70[4] != 0) {
              v73 = v71 - 1;
              if ((v71 & (v71 - 1)) != 0) {
                v74 = v69;
                if (v69 >= v71) {
                  v74 = v69 % v71;
                }
              }
              else {
                v74 = v73 & v69;
              }
              v88 = *(_QWORD**)(v70[1] + 8 * v74);
              if (v88 != nullptr) {
                v82 = (_QWORD*)*v88;
                if (v82 != nullptr) {
                  if ((v71 & v73) == 0) {
                    while (1) {
                      v90 = v82[1];
                      if (v69 == v90) {
                        if (v82[2] == v69) {
                          goto LABEL_228;
                        }
                      }
                      else if ((v90 & v73) != v74) {
                        goto LABEL_230;
                      }
                      v82 = (_QWORD*)*v82;
                      LOBYTE(v56) = 0;
                      if (v82 == nullptr) {
                        goto LABEL_231;
                      }
                    }
                  }
                  while (1) {
                    v89 = v82[1];
                    if (v69 == v89) {
                      if (v82[2] == v69) {
                        goto LABEL_228;
                      }
                    }
                    else {
                      if (v89 >= v71) {
                        v89 %= v71;
                      }
                      if (v89 != v74) {
                        goto LABEL_230;
                      }
                    }
                    v82 = (_QWORD*)*v82;
                    LOBYTE(v56) = 0;
                    if (v82 == nullptr) {
                      goto LABEL_231;
                    }
                  }
                }
              }
            }
            goto LABEL_230;
          }
        }
        else if (a4 == 2) {
          v57 = game_HashString((__int64)&GameData_1ad2a8f);
          LOBYTE(v56) = 0;
          if (v57 != 0 && game_GameModeData_instance_ != 0) {
            v58 = *(_QWORD**)(game_GameModeData_instance_ + 48);
            v59 = v58[2];
            if (v59 != 0 && v58[4] != 0) {
              v61 = v59 - 1;
              if ((v59 & (v59 - 1)) != 0) {
                v62 = v57;
                if (v57 >= v59) {
                  v62 = v57 % v59;
                }
              }
              else {
                v62 = v61 & v57;
              }
              v81 = *(_QWORD**)(v58[1] + 8 * v62);
              if (v81 != nullptr) {
                v82 = (_QWORD*)*v81;
                if (v82 != nullptr) {
                  if ((v59 & v61) == 0) {
                    while (1) {
                      v84 = v82[1];
                      if (v57 == v84) {
                        if (v82[2] == v57) {
                          goto LABEL_228;
                        }
                      }
                      else if ((v84 & v61) != v62) {
                        goto LABEL_230;
                      }
                      v82 = (_QWORD*)*v82;
                      LOBYTE(v56) = 0;
                      if (v82 == nullptr) {
                        goto LABEL_231;
                      }
                    }
                  }
                  while (1) {
                    v83 = v82[1];
                    if (v57 == v83) {
                      if (v82[2] == v57) {
                        goto LABEL_228;
                      }
                    }
                    else {
                      if (v83 >= v59) {
                        v83 %= v59;
                      }
                      if (v83 != v62) {
                        goto LABEL_230;
                      }
                    }
                    v82 = (_QWORD*)*v82;
                    LOBYTE(v56) = 0;
                    if (v82 == nullptr) {
                      goto LABEL_231;
                    }
                  }
                }
              }
            }
            goto LABEL_230;
          }
        }
        goto LABEL_231;
      }
      if (a4 != 3) {
        if (a4 == 4) {
          v63 = game_HashString((__int64)&GameData_1af1467);
          LOBYTE(v56) = 0;
          if (v63 != 0 && game_GameModeData_instance_ != 0) {
            v64 = *(_QWORD**)(game_GameModeData_instance_ + 48);
            v65 = v64[2];
            if (v65 != 0 && v64[4] != 0) {
              v67 = v65 - 1;
              if ((v65 & (v65 - 1)) != 0) {
                v68 = v63;
                if (v63 >= v65) {
                  v68 = v63 % v65;
                }
              }
              else {
                v68 = v67 & v63;
              }
              v85 = *(_QWORD**)(v64[1] + 8 * v68);
              if (v85 != nullptr) {
                v82 = (_QWORD*)*v85;
                if (v82 != nullptr) {
                  if ((v65 & v67) == 0) {
                    while (1) {
                      v87 = v82[1];
                      if (v63 == v87) {
                        if (v82[2] == v63) {
                          goto LABEL_228;
                        }
                      }
                      else if ((v87 & v67) != v68) {
                        goto LABEL_230;
                      }
                      v82 = (_QWORD*)*v82;
                      LOBYTE(v56) = 0;
                      if (v82 == nullptr) {
                        goto LABEL_231;
                      }
                    }
                  }
                  while (1) {
                    v86 = v82[1];
                    if (v63 == v86) {
                      if (v82[2] == v63) {
                        goto LABEL_228;
                      }
                    }
                    else {
                      if (v86 >= v65) {
                        v86 %= v65;
                      }
                      if (v86 != v68) {
                        goto LABEL_230;
                      }
                    }
                    v82 = (_QWORD*)*v82;
                    LOBYTE(v56) = 0;
                    if (v82 == nullptr) {
                      goto LABEL_231;
                    }
                  }
                }
              }
            }
            goto LABEL_230;
          }
        }
        goto LABEL_231;
      }
      v75 = game_HashString((__int64)&GameData_1a893d4);
      LOBYTE(v56) = 0;
      if (v75 == 0 || game_GameModeData_instance_ == 0) {
        goto LABEL_231;
      }
      v76 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v77 = v76[2];
      if (v77 == 0 || v76[4] == 0) {
        goto LABEL_230;
      }
      v79 = v77 - 1;
      if ((v77 & (v77 - 1)) != 0) {
        v80 = v75;
        if (v75 >= v77) {
          v80 = v75 % v77;
        }
      }
      else {
        v80 = v79 & v75;
      }
      v91 = *(_QWORD**)(v76[1] + 8 * v80);
      if (v91 == nullptr) {
        goto LABEL_230;
      }
      v82 = (_QWORD*)*v91;
      if (v82 == nullptr) {
        goto LABEL_230;
      }
      if ((v77 & v79) == 0) {
        while (1) {
          v93 = v82[1];
          if (v75 == v93) {
            if (v82[2] == v75) {
              goto LABEL_228;
            }
          }
          else if ((v93 & v79) != v80) {
            goto LABEL_230;
          }
          v82 = (_QWORD*)*v82;
          LOBYTE(v56) = 0;
          if (v82 == nullptr) {
            goto LABEL_231;
          }
        }
      }
      while (2) {
        v92 = v82[1];
        if (v75 != v92) {
          if (v92 >= v77) {
            v92 %= v77;
          }
          if (v92 != v80) {
            goto LABEL_230;
          }
        }
        else if (v82[2] == v75) {
          break;
        }
        v82 = (_QWORD*)*v82;
        LOBYTE(v56) = 0;
        if (v82 == nullptr) {
          goto LABEL_231;
        }
        continue;
      }
    LABEL_228:
      v94 = v82[3];
      if (v94 != 0) {
        v56 = *(_DWORD*)(v94 + 32);
        goto LABEL_231;
      }
    LABEL_230:
      LOBYTE(v56) = 0;
    LABEL_231:
      if (*(char*)(*(_QWORD*)(a2 + 392) + v13 + 597) < 1) {
        goto LABEL_260;
      }
      v95 = game_HashString((__int64)&GameData_1aa0a5d);
      LOBYTE(v96) = 0;
      if (v95 == 0 || game_GameModeData_instance_ == 0) {
        goto LABEL_261;
      }
      v97 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v98 = v97[2];
      if (v98 == 0 || v97[4] == 0) {
        goto LABEL_260;
      }
      v100 = v98 - 1;
      if ((v98 & (v98 - 1)) != 0) {
        v101 = v95;
        if (v95 >= v98) {
          v101 = v95 % v98;
        }
      }
      else {
        v101 = v100 & v95;
      }
      v102 = *(_QWORD**)(v97[1] + 8 * v101);
      if (v102 == nullptr) {
        goto LABEL_260;
      }
      v103 = (_QWORD*)*v102;
      if (v103 == nullptr) {
        goto LABEL_260;
      }
      if ((v98 & v100) == 0) {
        while (1) {
          v105 = v103[1];
          if (v95 == v105) {
            if (v103[2] == v95) {
              goto LABEL_258;
            }
          }
          else if ((v105 & v100) != v101) {
            goto LABEL_260;
          }
          v103 = (_QWORD*)*v103;
          LOBYTE(v96) = 0;
          if (v103 == nullptr) {
            goto LABEL_261;
          }
        }
      }
      while (2) {
        v104 = v103[1];
        if (v95 != v104) {
          if (v104 >= v98) {
            v104 %= v98;
          }
          if (v104 != v101) {
            goto LABEL_260;
          }
        }
        else if (v103[2] == v95) {
          break;
        }
        v103 = (_QWORD*)*v103;
        LOBYTE(v96) = 0;
        if (v103 == nullptr) {
          goto LABEL_261;
        }
        continue;
      }
    LABEL_258:
      v106 = v103[3];
      if (v106 != 0) {
        v96 = *(_DWORD*)(v106 + 32);
        goto LABEL_261;
      }
    LABEL_260:
      LOBYTE(v96) = 0;
    LABEL_261:
      v14 = v18 + v15 + v56 + v96;
    LABEL_6:
      *((_BYTE*)v110 + v13++) = v14;
      if (v13 == 13) {
        v8 = v110[0];
        v6 = LODWORD(v110[1]) | ((unsigned __int64)BYTE4(v110[1]) << 32);
        break;
      }
    }
  }
LABEL_264:
  v110[1] = (unsigned __int64)&GameData_1aa8505;
  v110[0] = game_HashString((__int64)&GameData_1aa8505);
  v108 = GameRoutine_143f400(v110);
  *(_DWORD*)(a5 + 20) = (int)(float)(v108 * (float)(char)v8);
  *(_DWORD*)(a5 + 24) = (int)(float)(v108 * (float)((__int16)v8 >> 8));
  *(_DWORD*)(a5 + 28) =
      (int)(float)(v108 * (float)((int)((_DWORD)v8 << 8) >> 24));
  *(_DWORD*)(a5 + 32) = (int)(float)(v108 * (float)((int)v8 >> 24));
  *(_DWORD*)(a5 + 36) = (int)(float)(v108 * (float)((int)(v8 >> 8) >> 24));
  *(_DWORD*)(a5 + 40) = (int)(float)(v108 * (float)((int)(v8 >> 16) >> 24));
  *(_DWORD*)(a5 + 44) = (int)(float)(v108 * (float)((int)(v8 >> 24) >> 24));
  *(_DWORD*)(a5 + 48) = (int)(float)(v108 * (float)((__int64)v8 >> 56));
  *(_DWORD*)(a5 + 52) = (int)(float)(v108 * (float)(char)v6);
  *(_DWORD*)(a5 + 56) = (int)(float)(v108 * (float)((__int16)v6 >> 8));
  *(_DWORD*)(a5 + 60) =
      (int)(float)(v108 * (float)((int)((_DWORD)v6 << 8) >> 24));
  *(_DWORD*)(a5 + 64) = (int)(float)(v108 * (float)((int)v6 >> 24));
  result = v108 * (float)((int)(v6 >> 8) >> 24);
  *(_DWORD*)(a5 + 68) = (int)result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_941ce0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int16* v2;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8* v13;
  unsigned __int8* v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 (*v42)(_QWORD);
  __int64 v43;
  _QWORD* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;

  v2 = (__int16*)a1;
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    a1 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&game_kVariableHubFacilityForced);
    if (a1 != 0 && *(_DWORD*)(a1 + 32) != 0) {
      a2[1] = 0;
      a2[2] = 0;
      v5 = *(unsigned __int8*)(v4 + 15);
      v7 = *(__int64**)(*GameData_212cc38[0] + 64);
      v6 = *(__int64**)(*GameData_212cc38[0] + 72);
      if (v7 != v6) {
        v8 = nullptr;
        v9 = 0;
        v10 = 0;
        v49 = *(__int64**)(*GameData_212cc38[0] + 72);
        while (1) {
          v11 = *v7;
          v12 = *(_QWORD*)(*v7 + 24);
          v13 = *(unsigned __int8**)(v12 + 80);
          v14 = *(unsigned __int8**)(v12 + 88);
          if (v13 != v14) {
            v15 = v14 - v13;
            v16 = (v14 - v13) & 3;
            if (v16 != 0) {
              do {
                v17 = *v13++;
                if (v5 == v17) {
                  goto LABEL_19;
                }
              } while (--v16 != 0);
            }
            if (v15 >= 4) {
              while (v5 != *v13 && v5 != v13[1] && v5 != v13[2] &&
                     v5 != v13[3]) {
                v13 += 4;
                if (v13 == v14) {
                  goto LABEL_7;
                }
              }
            LABEL_19:
              if ((unsigned __int64)v8 < v9) {
                *v8++ = v11;
              }
              else {
                v18 = (unsigned __int64)v8 - v10;
                v19 = ((__int64)v8 - v10) >> 3;
                v20 = v19 + 1;
                if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
                  a2[1] = (__int64)v8;
                  a2[2] = v9;
                  *a2 = v10;
                  GameRoutine_943430_alt1();
                }
                v21 = v10;
                if ((__int64)(v9 - v10) >> 2 > v20) {
                  v20 = (__int64)(v9 - v10) >> 2;
                }
                if (v9 - v10 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v22 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v22 = v20;
                }
                if (v22 != 0) {
                  if (v22 >> 61 != 0) {
                    a2[1] = (__int64)v8;
                    a2[2] = v9;
                    *a2 = v21;
                    GameRoutine_60a210();
                  }
                  v23 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
                }
                else {
                  v23 = 0;
                }
                v9 = v23 + 8 * v22;
                v10 = v23 + v18 - 8 * v19;
                *(_QWORD*)(v23 + v18) = v11;
                v8 = (_QWORD*)(v23 + v18 + 8);
                memcpy_alt1(v10, v21, v18);
                if (v21 != 0) {
                  v24 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v24 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v21);
                }
                v6 = v49;
              }
            }
          }
        LABEL_7:
          if (++v7 == v6) {
            v50 = v10;
            a2[1] = (__int64)v8;
            a2[2] = v9;
            goto LABEL_75;
          }
        }
      }
      goto LABEL_73;
    }
  }
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v25 = *(__int64**)(GameData_21ca0a0 + 64);
  v26 = *(__int64**)(GameData_21ca0a0 + 72);
  if (v25 == v26) {
  LABEL_73:
    v50 = 0;
    goto LABEL_75;
  }
  v27 = nullptr;
  v48 = a2;
  v50 = 0;
  do {
    v28 = *v25;
    v29 = *(_QWORD*)(*v25 + 24);
    v30 = *(_QWORD*)(v29 + 32);
    v31 = *(_QWORD*)(v29 + 40);
    if (v31 == v30) {
    LABEL_41:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4318,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_21f4318) != 0) {
        GameData_21f4314 = 0;
        GameData_21f430c = 0x10000205A5LL;
        __cxa_guard_release_alt1((__int64)&GameData_21f4318);
      }
      LODWORD(a1) = Dir_70df40_alt1((__int16*)&GameData_21f430c, v2);
      v32 = 1 << ((unsigned int)a1 / 0x2760 -
                  5 * ((858993460 *
                        (unsigned __int64)((unsigned int)a1 / 0x2760)) >>
                       32));
      if ((int)a1 < 1440) {
        LOBYTE(v32) = 1;
      }
      if (((unsigned __int8)v32 & *(_BYTE*)(v28 + 65)) != 0) {
        LODWORD(a1) = GameRoutine_715440();
        if ((int)a1 >= *(unsigned __int8*)(v28 + 64)) {
          v33 = a2[2];
          if ((unsigned __int64)v27 < v33) {
            *v27++ = v28;
          }
          else {
            v34 = (unsigned __int64)v27 - v50;
            v35 = ((__int64)v27 - v50) >> 3;
            v36 = v35 + 1;
            if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
              *a2 = v50;
              GameRoutine_943430_alt1();
            }
            v37 = v33 - v50;
            if (v37 >> 2 > v36) {
              v36 = v37 >> 2;
            }
            if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
              v38 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v38 = v36;
            }
            if (v38 != 0) {
              if (v38 >> 61 != 0) {
                *a2 = v50;
                GameRoutine_60a210();
              }
              v39 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v38, 16, 0);
            }
            else {
              v39 = 0;
            }
            v45 = v39 + 8 * v38;
            v46 = v39 + v34 - 8 * v35;
            *(_QWORD*)(v39 + v34) = v28;
            v27 = (_QWORD*)(v39 + v34 + 8);
            LOBYTE(a1) = memcpy_alt1(v46, v50, v34);
            v48[1] = (__int64)v27;
            v48[2] = v45;
            a2 = v48;
            if (v50 != 0) {
              v47 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v47 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v50);
            }
            v50 = v46;
          }
          a2[1] = (__int64)v27;
        }
      }
    }
    else {
      while (1) {
        if (*(_QWORD*)v30 != 0) {
          v40 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v41 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)v30);
            if (v41 != 0) {
              v42 = *(__int64 (**)(_QWORD))(v41 + 72);
              v43 = *(_QWORD*)(v41 + 80);
              v44 = (_QWORD*)(v41 + (v43 >> 1));
              if ((v43 & 1) != 0) {
                v42 = *(__int64 (**)(_QWORD))((char*)v42 + *v44);
              }
              LOBYTE(a1) = v42(v44);
            }
            else {
              LOBYTE(a1) = 1;
            }
          }
          if (*(_BYTE*)(v30 + 16) != ((v40 == 0) | a1 & 1)) {
            break;
          }
        }
        v30 += 24;
        if (v30 == v31) {
          goto LABEL_41;
        }
      }
    }
    ++v25;
  } while (v25 != v26);
LABEL_75:
  *a2 = v50;
}

__attribute__((swiftcall)) void game_9470c0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  __int64 v22;
  const char* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  const char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  struct {
    __int64 v38[2];
    __int64* v39;
  } v38_;

  if (a1 == 0 || *(_QWORD*)a1 == 0) {
    *(_WORD*)a2 = 0;
    return;
  }
  v4 = GameData_21f3cc0;
  if (GameData_21f3cc0 == 0 ||
      (v5 = *(__int64***)(a1 + 40), v6 = *v5, v7 = v5[1], *v5 == v7)) {
  LABEL_47:
    if (*(_QWORD*)(***(_QWORD***)(a1 + 40) + 32LL) != 0) {
      v23 = *(const char**)(***(_QWORD***)(a1 + 40) + 32LL);
    }
    else {
      v23 = &GameData_1a9f09e;
    }
    v24 = strlen_alt1(v23);
    if (v24 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_78;
    }
    v25 = v24;
    if (v24 >= 0x17) {
      if ((v24 | 7) == 0x17) {
        v27 = 26;
      }
      else {
        v27 = (v24 | 7) + 1;
      }
      v28 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v27, 16, 0);
      *(_QWORD*)(a2 + 8) = v25;
      *(_QWORD*)(a2 + 16) = v28;
      *(_QWORD*)a2 = v27 | 1;
      v26 = v28;
    }
    else {
      *(_BYTE*)a2 = 2 * v24;
      v26 = a2 + 1;
      if (v24 == 0) {
        goto LABEL_59;
      }
    }
    memmove_alt1(v26, (__int64)v23, v25);
  LABEL_59:
    *(_BYTE*)(v26 + v25) = 0;
    return;
  }
  v37 = GameData_21f3cc0 + 17;
  v8 = GameData_212de10[0];
  while (1) {
    v9 = *v6;
    game_143e320((void*)(v38_.v38), *v6);
    v10 = (v38_.v38[0] & 1) != 0 ? v38_.v39 : (__int64*)((char*)v38_.v38 + 1);
    v11 = game_HashString((__int64)v10);
    if (v11 != 0) {
      v12 = *(_QWORD*)(*v8 + 96);
      if (v12 != 0 && *(_QWORD*)(*v8 + 112) != 0) {
        v14 = v12 - 1;
        if ((v12 & (v12 - 1)) != 0) {
          v15 = v11;
          if (v11 >= v12) {
            v15 = v11 % v12;
          }
        }
        else {
          v15 = v14 & v11;
        }
        v16 = *(_QWORD**)(*(_QWORD*)(*v8 + 88) + 8 * v15);
        if (v16 != nullptr) {
          v17 = (_QWORD*)*v16;
          if (v17 != nullptr) {
            break;
          }
        }
      }
    }
  LABEL_40:
    if ((v38_.v38[0] & 1) != 0 && v38_.v39 != nullptr) {
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v22 = 128;
      }
      else {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v22,
                                         (__int64)v38_.v39);
    }
    if (++v6 == v7) {
      goto LABEL_47;
    }
  }
  if ((v12 & v14) == 0) {
    while (1) {
      v19 = v17[1];
      if (v19 == v11) {
        if (v17[2] == v11) {
          goto LABEL_35;
        }
      }
      else if ((v19 & v14) != v15) {
        goto LABEL_40;
      }
      v17 = (_QWORD*)*v17;
      if (v17 == nullptr) {
        goto LABEL_40;
      }
    }
  }
  while (1) {
    v18 = v17[1];
    if (v18 == v11) {
      break;
    }
    if (v18 >= v12) {
      v18 %= v12;
    }
    if (v18 != v15) {
      goto LABEL_40;
    }
  LABEL_24:
    v17 = (_QWORD*)*v17;
    if (v17 == nullptr) {
      goto LABEL_40;
    }
  }
  if (v17[2] != v11) {
    goto LABEL_24;
  }
LABEL_35:
  v20 = v17[3];
  if (v20 == 0) {
    goto LABEL_40;
  }
  v21 = (*(_BYTE*)(v4 + 16) & 1) != 0 ? *(const char**)(v4 + 32)
                                      : (const char*)v37;
  if (strcmp_alt1(v21, *(const char**)(v20 + 32)) != 0) {
    goto LABEL_40;
  }
  if (*(_QWORD*)(v9 + 32) != 0) {
    v29 = *(const char**)(v9 + 32);
  }
  else {
    v29 = &GameData_1a9f09e;
  }
  v30 = strlen_alt1(v29);
  if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_78:
    String_60a1d0();
  }
  v31 = v30;
  if (v30 >= 0x17) {
    if ((v30 | 7) == 0x17) {
      v33 = 26;
    }
    else {
      v33 = (v30 | 7) + 1;
    }
    v34 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v33, 16, 0);
    *(_QWORD*)(a2 + 8) = v31;
    *(_QWORD*)(a2 + 16) = v34;
    *(_QWORD*)a2 = v33 | 1;
    v32 = v34;
    goto LABEL_72;
  }
  *(_BYTE*)a2 = 2 * v30;
  v32 = a2 + 1;
  if (v30 != 0) {
  LABEL_72:
    memmove_alt1(v32, (__int64)v29, v31);
  }
  v35 = v38_.v38[0];
  *(_BYTE*)(v32 + v31) = 0;
  if ((v35 & 1) != 0 && v38_.v39 != nullptr) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, (__int64)v38_.v39);
  }
}

__int64 game_957720(__int64 a1, __int64 a2, __int64 a3, __int16* a4)
{
  __int64 v5;
  __int64 v8;
  _BOOL4 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  unsigned __int64 v21;
  int v22;
  _QWORD* v23;
  unsigned __int64 v24;
  unsigned __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  int v34;
  _QWORD* v35;
  unsigned __int64 v36;
  unsigned __int64 v38;
  unsigned __int64 v39;
  _QWORD* v40;
  _QWORD* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  int v46;
  _QWORD* v47;
  unsigned __int64 v48;
  unsigned __int64 v50;
  unsigned __int64 v51;
  _QWORD* v52;
  _QWORD* v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  int v58;
  _QWORD* v59;
  unsigned __int64 v60;
  unsigned __int64 v62;
  unsigned __int64 v63;
  _QWORD* v64;
  _QWORD* v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  int v70;
  _QWORD* v71;
  unsigned __int64 v72;
  unsigned __int64 v74;
  unsigned __int64 v75;
  _QWORD* v76;
  _QWORD* v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  int v82;
  _QWORD* v83;
  unsigned __int64 v84;
  unsigned __int64 v86;
  unsigned __int64 v87;
  _QWORD* v88;
  _QWORD* v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  int v94;
  _QWORD* v95;
  unsigned __int64 v96;
  unsigned __int64 v98;
  unsigned __int64 v99;
  _QWORD* v100;
  _QWORD* v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  int v107;
  int v108;
  int v109;
  unsigned int v110;
  _BOOL4 v111;
  int v112;
  int v113;
  int v114;
  int v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  int v119;
  __int64 v120;
  _DWORD* v122;
  __int64 v123;
  __int64 v124;
  int v125;
  int v126;
  int v127;
  int* v128;
  int v129;
  __int64* v130;
  int v131;
  unsigned int v132;
  unsigned int v133;
  int v134;
  unsigned int v135;
  __int64 v136;
  int v137;
  int v138;
  struct {
    char* v139;
    char* v140;
    __int64 v141;
  } v139_;
  int v142;

  v5 = 0;
  v139_.v140 = nullptr;
  v139_.v141 = 0;
  v139_.v139 = nullptr;
  if (a2 == a3 || a2 == 0 || a3 == 0) {
    goto LABEL_254;
  }
  if (*(_BYTE*)(a1 + 82) != 6) {
    v11 = *(_QWORD*)(a2 + 392);
    if (v11 != 0 && (v12 = *(_QWORD*)(v11 + 288)) != 0) {
      v14 = GameRoutine_975940(v12);
      v15 = *(unsigned __int8*)(a1 + 82);
      if (v14 != 0) {
        v16 = *(unsigned __int8*)(v14 + v15 + 183);
        if ((_DWORD)v15 == 6) {
          goto LABEL_19;
        }
      }
      else {
        v16 = 0;
        if ((_DWORD)v15 == 6) {
        LABEL_19:
          LODWORD(v8) = 0;
          goto LABEL_20;
        }
      }
      v8 = *(_QWORD*)(a3 + 392);
      if (v8 == 0) {
      LABEL_20:
        v9 = (v16 & 0xFB) == 0;
        if (v16 <= 5) {
          v10 = 1;
          if (((1 << v16) & 0x2C) != 0) {
            goto LABEL_22;
          }
        }
        goto LABEL_6;
      }
    }
    else {
      v16 = 0;
      v8 = *(_QWORD*)(a3 + 392);
      if (v8 == 0) {
        goto LABEL_20;
      }
    }
    v17 = *(_QWORD*)(v8 + 288);
    if (v17 == 0) {
      goto LABEL_19;
    }
    v18 = GameRoutine_975940(v17);
    if (v18 == 0) {
      goto LABEL_19;
    }
    LODWORD(v8) = *(unsigned __int8*)(v18 + *(unsigned __int8*)(a1 + 82) + 183);
    goto LABEL_20;
  }
  LODWORD(v8) = 0;
  v9 = true;
LABEL_6:
  v10 = 0;
LABEL_22:
  if (v9) {
    v19 = 2;
  }
  else {
    v19 = 1;
  }
  if ((v8 & 0xFB) != 0) {
    v20 = v9;
  }
  else {
    v20 = v19;
  }
  if ((unsigned int)v8 <= 5 && ((1 << v8) & 0x2C) != 0) {
    if (v10 != 0) {
      v10 = 2;
    }
    else {
      v10 = 1;
    }
  }
  v21 = game_HashString((__int64)&GameData_1acee80);
  v22 = 0;
  if (v21 != 0 && game_GameModeData_instance_ != 0) {
    v23 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v24 = v23[2];
    if (v24 == 0 || v23[4] == 0) {
      goto LABEL_61;
    }
    v26 = v24 - 1;
    if ((v24 & (v24 - 1)) != 0) {
      v27 = v21;
      if (v21 >= v24) {
        v27 = v21 % v24;
      }
    }
    else {
      v27 = v26 & v21;
    }
    v28 = *(_QWORD**)(v23[1] + 8 * v27);
    if (v28 == nullptr) {
      goto LABEL_61;
    }
    v29 = (_QWORD*)*v28;
    if (v29 == nullptr) {
      goto LABEL_61;
    }
    if ((v24 & v26) == 0) {
      while (1) {
        v31 = v29[1];
        if (v21 == v31) {
          if (v29[2] == v21) {
            goto LABEL_59;
          }
        }
        else if ((v31 & v26) != v27) {
          goto LABEL_61;
        }
        v29 = (_QWORD*)*v29;
        v22 = 0;
        if (v29 == nullptr) {
          goto LABEL_62;
        }
      }
    }
    do {
      v30 = v29[1];
      if (v21 == v30) {
        if (v29[2] == v21) {
        LABEL_59:
          v32 = v29[3];
          if (v32 != 0) {
            v22 = *(_DWORD*)(v32 + 32);
            break;
          }
        LABEL_61:
          v22 = 0;
          break;
        }
      }
      else {
        if (v30 >= v24) {
          v30 %= v24;
        }
        if (v30 != v27) {
          goto LABEL_61;
        }
      }
      v29 = (_QWORD*)*v29;
      v22 = 0;
    } while (v29 != nullptr);
  }
LABEL_62:
  v142 = v22;
  GameRoutine_6e5900_alt1((__int64*)&v139_.v139, &v142);
  v33 = game_HashString((__int64)&GameData_1aaffdb);
  v34 = 0;
  if (v33 != 0 && game_GameModeData_instance_ != 0) {
    v35 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v36 = v35[2];
    if (v36 == 0 || v35[4] == 0) {
      goto LABEL_90;
    }
    v38 = v36 - 1;
    if ((v36 & (v36 - 1)) != 0) {
      v39 = v33;
      if (v33 >= v36) {
        v39 = v33 % v36;
      }
    }
    else {
      v39 = v38 & v33;
    }
    v40 = *(_QWORD**)(v35[1] + 8 * v39);
    if (v40 == nullptr) {
      goto LABEL_90;
    }
    v41 = (_QWORD*)*v40;
    if (v41 == nullptr) {
      goto LABEL_90;
    }
    if ((v36 & v38) == 0) {
      while (1) {
        v43 = v41[1];
        if (v33 == v43) {
          if (v41[2] == v33) {
            goto LABEL_88;
          }
        }
        else if ((v43 & v38) != v39) {
          goto LABEL_90;
        }
        v41 = (_QWORD*)*v41;
        v34 = 0;
        if (v41 == nullptr) {
          goto LABEL_91;
        }
      }
    }
    do {
      v42 = v41[1];
      if (v33 == v42) {
        if (v41[2] == v33) {
        LABEL_88:
          v44 = v41[3];
          if (v44 != 0) {
            v34 = *(_DWORD*)(v44 + 32);
            break;
          }
        LABEL_90:
          v34 = 0;
          break;
        }
      }
      else {
        if (v42 >= v36) {
          v42 %= v36;
        }
        if (v42 != v39) {
          goto LABEL_90;
        }
      }
      v41 = (_QWORD*)*v41;
      v34 = 0;
    } while (v41 != nullptr);
  }
LABEL_91:
  v142 = v34;
  GameRoutine_6e5900_alt1((__int64*)&v139_.v139, &v142);
  v45 = game_HashString((__int64)&GameData_1aa485a);
  v46 = 0;
  if (v45 == 0 || game_GameModeData_instance_ == 0) {
    goto LABEL_120;
  }
  v47 = *(_QWORD**)(game_GameModeData_instance_ + 48);
  v48 = v47[2];
  if (v48 == 0 || v47[4] == 0) {
    goto LABEL_119;
  }
  v50 = v48 - 1;
  if ((v48 & (v48 - 1)) != 0) {
    v51 = v45;
    if (v45 >= v48) {
      v51 = v45 % v48;
    }
  }
  else {
    v51 = v50 & v45;
  }
  v52 = *(_QWORD**)(v47[1] + 8 * v51);
  if (v52 == nullptr) {
    goto LABEL_119;
  }
  v53 = (_QWORD*)*v52;
  if (v53 == nullptr) {
    goto LABEL_119;
  }
  if ((v48 & v50) == 0) {
    while (1) {
      v55 = v53[1];
      if (v45 == v55) {
        if (v53[2] == v45) {
          goto LABEL_117;
        }
      }
      else if ((v55 & v50) != v51) {
        goto LABEL_119;
      }
      v53 = (_QWORD*)*v53;
      v46 = 0;
      if (v53 == nullptr) {
        goto LABEL_120;
      }
    }
  }
  while (1) {
    v54 = v53[1];
    if (v45 == v54) {
      break;
    }
    if (v54 >= v48) {
      v54 %= v48;
    }
    if (v54 != v51) {
      goto LABEL_119;
    }
  LABEL_106:
    v53 = (_QWORD*)*v53;
    v46 = 0;
    if (v53 == nullptr) {
      goto LABEL_120;
    }
  }
  if (v53[2] != v45) {
    goto LABEL_106;
  }
LABEL_117:
  v56 = v53[3];
  if (v56 != 0) {
    v46 = *(_DWORD*)(v56 + 32);
    goto LABEL_120;
  }
LABEL_119:
  v46 = 0;
LABEL_120:
  v142 = v46;
  GameRoutine_6e5900_alt1((__int64*)&v139_.v139, &v142);
  if (v20 == 0) {
    goto LABEL_180;
  }
  v57 = game_HashString((__int64)&GameData_1a9ca23);
  v58 = 0;
  if (v57 != 0 && game_GameModeData_instance_ != 0) {
    v59 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v60 = v59[2];
    if (v60 == 0 || v59[4] == 0) {
      goto LABEL_149;
    }
    v62 = v60 - 1;
    if ((v60 & (v60 - 1)) != 0) {
      v63 = v57;
      if (v57 >= v60) {
        v63 = v57 % v60;
      }
    }
    else {
      v63 = v62 & v57;
    }
    v64 = *(_QWORD**)(v59[1] + 8 * v63);
    if (v64 == nullptr) {
      goto LABEL_149;
    }
    v65 = (_QWORD*)*v64;
    if (v65 == nullptr) {
      goto LABEL_149;
    }
    if ((v60 & v62) == 0) {
      while (1) {
        v67 = v65[1];
        if (v57 == v67) {
          if (v65[2] == v57) {
            goto LABEL_147;
          }
        }
        else if ((v67 & v62) != v63) {
          goto LABEL_149;
        }
        v65 = (_QWORD*)*v65;
        v58 = 0;
        if (v65 == nullptr) {
          goto LABEL_150;
        }
      }
    }
    do {
      v66 = v65[1];
      if (v57 == v66) {
        if (v65[2] == v57) {
        LABEL_147:
          v68 = v65[3];
          if (v68 != 0) {
            v58 = *(_DWORD*)(v68 + 32);
            break;
          }
        LABEL_149:
          v58 = 0;
          break;
        }
      }
      else {
        if (v66 >= v60) {
          v66 %= v60;
        }
        if (v66 != v63) {
          goto LABEL_149;
        }
      }
      v65 = (_QWORD*)*v65;
      v58 = 0;
    } while (v65 != nullptr);
  }
LABEL_150:
  *(_DWORD*)v139_.v139 -= v58 * v20;
  v69 = game_HashString((__int64)&GameData_1a9ca23);
  v70 = 0;
  if (v69 == 0 || game_GameModeData_instance_ == 0) {
    goto LABEL_179;
  }
  v71 = *(_QWORD**)(game_GameModeData_instance_ + 48);
  v72 = v71[2];
  if (v72 == 0 || v71[4] == 0) {
    goto LABEL_178;
  }
  v74 = v72 - 1;
  if ((v72 & (v72 - 1)) != 0) {
    v75 = v69;
    if (v69 >= v72) {
      v75 = v69 % v72;
    }
  }
  else {
    v75 = v74 & v69;
  }
  v76 = *(_QWORD**)(v71[1] + 8 * v75);
  if (v76 == nullptr) {
    goto LABEL_178;
  }
  v77 = (_QWORD*)*v76;
  if (v77 == nullptr) {
    goto LABEL_178;
  }
  if ((v72 & v74) == 0) {
    while (1) {
      v79 = v77[1];
      if (v69 == v79) {
        if (v77[2] == v69) {
          goto LABEL_176;
        }
      }
      else if ((v79 & v74) != v75) {
        goto LABEL_178;
      }
      v77 = (_QWORD*)*v77;
      v70 = 0;
      if (v77 == nullptr) {
        goto LABEL_179;
      }
    }
  }
  while (2) {
    v78 = v77[1];
    if (v69 != v78) {
      if (v78 >= v72) {
        v78 %= v72;
      }
      if (v78 != v75) {
        goto LABEL_178;
      }
    }
    else if (v77[2] == v69) {
    LABEL_176:
      v80 = v77[3];
      if (v80 != 0) {
        v70 = *(_DWORD*)(v80 + 32);
        goto LABEL_179;
      }
    LABEL_178:
      v70 = 0;
    LABEL_179:
      *((_DWORD*)v139_.v139 + 2) += v70 * v20;
    LABEL_180:
      if (v10 == 0) {
        v5 = (__int64)v139_.v139;
        goto LABEL_241;
      }
      v81 = game_HashString((__int64)&GameData_1ae9824);
      v82 = 0;
      if (v81 != 0 && game_GameModeData_instance_ != 0) {
        v83 = *(_QWORD**)(game_GameModeData_instance_ + 48);
        v84 = v83[2];
        if (v84 == 0 || v83[4] == 0) {
          goto LABEL_210;
        }
        v86 = v84 - 1;
        if ((v84 & (v84 - 1)) != 0) {
          v87 = v81;
          if (v81 >= v84) {
            v87 = v81 % v84;
          }
        }
        else {
          v87 = v86 & v81;
        }
        v88 = *(_QWORD**)(v83[1] + 8 * v87);
        if (v88 == nullptr) {
          goto LABEL_210;
        }
        v89 = (_QWORD*)*v88;
        if (v89 == nullptr) {
          goto LABEL_210;
        }
        if ((v84 & v86) == 0) {
          while (1) {
            v91 = v89[1];
            if (v81 == v91) {
              if (v89[2] == v81) {
                goto LABEL_208;
              }
            }
            else if ((v91 & v86) != v87) {
              goto LABEL_210;
            }
            v89 = (_QWORD*)*v89;
            v82 = 0;
            if (v89 == nullptr) {
              goto LABEL_211;
            }
          }
        }
        do {
          v90 = v89[1];
          if (v81 == v90) {
            if (v89[2] == v81) {
            LABEL_208:
              v92 = v89[3];
              if (v92 != 0) {
                v82 = *(_DWORD*)(v92 + 32);
                break;
              }
            LABEL_210:
              v82 = 0;
              break;
            }
          }
          else {
            if (v90 >= v84) {
              v90 %= v84;
            }
            if (v90 != v87) {
              goto LABEL_210;
            }
          }
          v89 = (_QWORD*)*v89;
          v82 = 0;
        } while (v89 != nullptr);
      }
    LABEL_211:
      *(_DWORD*)v139_.v139 += v82 * v10;
      v93 = game_HashString((__int64)&GameData_1ae9824);
      v94 = 0;
      if (v93 == 0 || game_GameModeData_instance_ == 0) {
        goto LABEL_240;
      }
      v95 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v96 = v95[2];
      if (v96 == 0 || v95[4] == 0) {
        goto LABEL_239;
      }
      v98 = v96 - 1;
      if ((v96 & (v96 - 1)) != 0) {
        v99 = v93;
        if (v93 >= v96) {
          v99 = v93 % v96;
        }
      }
      else {
        v99 = v98 & v93;
      }
      v100 = *(_QWORD**)(v95[1] + 8 * v99);
      if (v100 == nullptr) {
        goto LABEL_239;
      }
      v101 = (_QWORD*)*v100;
      if (v101 == nullptr) {
        goto LABEL_239;
      }
      if ((v96 & v98) == 0) {
        while (1) {
          v103 = v101[1];
          if (v93 == v103) {
            if (v101[2] == v93) {
              goto LABEL_237;
            }
          }
          else if ((v103 & v98) != v99) {
            goto LABEL_239;
          }
          v101 = (_QWORD*)*v101;
          v94 = 0;
          if (v101 == nullptr) {
            goto LABEL_240;
          }
        }
      }
      while (2) {
        v102 = v101[1];
        if (v93 != v102) {
          if (v102 >= v96) {
            v102 %= v96;
          }
          if (v102 != v99) {
            goto LABEL_239;
          }
        }
        else if (v101[2] == v93) {
        LABEL_237:
          v104 = v101[3];
          if (v104 != 0) {
            v94 = *(_DWORD*)(v104 + 32);
            goto LABEL_240;
          }
        LABEL_239:
          v94 = 0;
        LABEL_240:
          v5 = (__int64)v139_.v139;
          *((_DWORD*)v139_.v139 + 2) -= v94 * v10;
        LABEL_241:
          if (v139_.v140 == (char*)v5) {
            goto LABEL_254;
          }
          v105 = 0;
          do {
            *(_DWORD*)(v5 + 4 * v105) &= ~(*(int*)(v5 + 4 * v105) >> 31);
            ++v105;
            v5 = (__int64)v139_.v139;
          } while (v105 < (v139_.v140 - v139_.v139) >> 2);
          v106 = v139_.v140 - v139_.v139;
          if (v139_.v140 == v139_.v139) {
            goto LABEL_254;
          }
          v107 = a4[1];
          v108 = *a4;
          v109 = a4[2];
          v110 = 3;
          v111 = v107 < 3;
          if (v107 < 3) {
            v107 += 12;
          }
          v112 = v108 - v111;
          v113 = v112 + 4502;
          v114 = v112 + 4505;
          if (v113 >= 0) {
            v114 = v113;
          }
          v115 = (v113 + v109 + (v114 >> 2) + v113 / -100 + v113 / 400 +
                  (13 * v107 + 8) / 5) %
                 7;
          if (v115 == 0 ||
              *(unsigned __int8*)(a1 + 81) == (unsigned __int8)v115) {
          LABEL_255:
            if (v5 != 0) {
              goto LABEL_256;
            }
            return v110;
          }
          if ((int)(v106 >> 2) < 1) {
          LABEL_254:
            v110 = 0;
            goto LABEL_255;
          }
          v116 = (v106 >> 2) & 0x7FFFFFFF;
          v117 = (v106 >> 2) & 7;
          if ((unsigned __int64)(v116 - 1) >= 7) {
            v122 = v139_.v139 + 16;
            v123 = 0;
            v119 = 0;
            v124 = -8LL * ((v106 >> 5) & 0xFFFFFFF);
            do {
              v123 -= 8;
              v125 = v119 + 100 * *(v122 - 4) + 100 * *(v122 - 3) +
                     100 * *(v122 - 2) + 100 * *(v122 - 1) + 100 * *v122 +
                     100 * v122[1];
              v126 = v122[2];
              v127 = v122[3];
              v122 += 8;
              v119 = v125 + 100 * v126 + 100 * v127;
            } while (v124 != v123);
            v118 = -v123;
          }
          else {
            v118 = 0;
            v119 = 0;
          }
          if (v117 != 0) {
            v128 = (int*)&v139_.v139[4 * v118];
            do {
              v129 = *v128++;
              --v117;
              v119 += 100 * v129;
            } while (v117 != 0);
          }
          if (v119 <= 0) {
            goto LABEL_275;
          }
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v130 = game_map_MapRandom_instance__ptr[0];
          v131 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((__int128*)0x10LL) + 8);
          v132 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
          v133 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((__int128*)0x10LL)) ^
                 (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((__int128*)0x10LL))
                  << 11);
          *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL)) =
              *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL) + 4);
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v130 + 4) = v131;
          v134 = (v133 >> 8) ^ (v132 >> 19) ^ v133 ^ v132;
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v130 + 8) = v132;
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v130 + 12) = v134;
          v135 = v134 & 0x7FFFFFFF;
          nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex);
          v5 = (__int64)v139_.v139;
          v136 = 0;
          v137 = v135 % v119;
          while (1) {
            v138 = *(_DWORD*)&v139_.v139[4 * v136];
            if (v138 != 0) {
              v137 -= 100 * v138;
              if (v137 < 0) {
                break;
              }
            }
            if (v116 == ++v136) {
              goto LABEL_275;
            }
          }
          if ((_DWORD)v136 != 0) {
            if ((_DWORD)v136 == 1) {
              v110 = 2;
            }
            else {
              if ((_DWORD)v136 == 2) {
                v110 = 1;
                goto LABEL_256;
              }
            LABEL_275:
              v110 = 0;
            }
          }
          else {
            v110 = 3;
          }
        LABEL_256:
          v139_.v140 = (char*)v5;
          v120 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v120 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v120, v5);
          return v110;
        }
        v101 = (_QWORD*)*v101;
        v94 = 0;
        if (v101 == nullptr) {
          goto LABEL_240;
        }
        continue;
      }
    }
    v77 = (_QWORD*)*v77;
    v70 = 0;
    if (v77 == nullptr) {
      goto LABEL_179;
    }
    continue;
  }
}

__int64 game_958960(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  __int64 v3;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  int v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  _QWORD* v19;
  unsigned __int64 v20;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  int v30;
  _QWORD* v31;
  unsigned __int64 v32;
  unsigned __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64* v42;
  int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  int v48;

  v2 = game_HashString_alt1(&GameData_1ab7ed0, a2);
  if (v2 == 0 || game_GameModeData_instance_ == 0) {
    goto LABEL_31;
  }
  v5 = *(_QWORD**)(game_GameModeData_instance_ + 48);
  v6 = v5[2];
  if (v6 == 0 || v5[4] == 0) {
    goto LABEL_31;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = v2;
    if (v2 >= v6) {
      v9 = v2 % v6;
    }
  }
  else {
    v9 = v8 & v2;
  }
  v10 = *(_QWORD**)(v5[1] + 8 * v9);
  if (v10 == nullptr) {
    goto LABEL_31;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    goto LABEL_31;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v14 = v11[1];
      if (v2 == v14) {
        if (v11[2] == v2) {
          goto LABEL_29;
        }
      }
      else if ((v14 & v8) != v9) {
        goto LABEL_31;
      }
      v11 = (_QWORD*)*v11;
      v12 = 0;
      if (v11 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v13 = v11[1];
    if (v2 == v13) {
      break;
    }
    if (v13 >= v6) {
      v13 %= v6;
    }
    if (v13 != v9) {
      goto LABEL_31;
    }
  LABEL_18:
    v11 = (_QWORD*)*v11;
    v12 = 0;
    if (v11 == nullptr) {
      goto LABEL_32;
    }
  }
  if (v11[2] != v2) {
    goto LABEL_18;
  }
LABEL_29:
  v15 = v11[3];
  if (v15 == 0) {
  LABEL_31:
    v12 = 0;
    goto LABEL_32;
  }
  v12 = *(_DWORD*)(v15 + 32);
LABEL_32:
  v16 = game_HashString_alt1(&GameData_1ab3bf5, v3);
  v18 = 0;
  if (v16 != 0 && game_GameModeData_instance_ != 0) {
    v19 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v20 = v19[2];
    if (v20 == 0 || v19[4] == 0) {
      goto LABEL_60;
    }
    v22 = v20 - 1;
    if ((v20 & (v20 - 1)) != 0) {
      v23 = v16;
      if (v16 >= v20) {
        v23 = v16 % v20;
      }
    }
    else {
      v23 = v22 & v16;
    }
    v24 = *(_QWORD**)(v19[1] + 8 * v23);
    if (v24 == nullptr) {
      goto LABEL_60;
    }
    v25 = (_QWORD*)*v24;
    if (v25 == nullptr) {
      goto LABEL_60;
    }
    if ((v20 & v22) == 0) {
      while (1) {
        v27 = v25[1];
        if (v16 == v27) {
          if (v25[2] == v16) {
            goto LABEL_58;
          }
        }
        else if ((v27 & v22) != v23) {
          goto LABEL_60;
        }
        v25 = (_QWORD*)*v25;
        v18 = 0;
        if (v25 == nullptr) {
          goto LABEL_61;
        }
      }
    }
    do {
      v26 = v25[1];
      if (v16 == v26) {
        if (v25[2] == v16) {
        LABEL_58:
          v28 = v25[3];
          if (v28 != 0) {
            v18 = *(_DWORD*)(v28 + 32);
            break;
          }
        LABEL_60:
          v18 = 0;
          break;
        }
      }
      else {
        if (v26 >= v20) {
          v26 %= v20;
        }
        if (v26 != v23) {
          goto LABEL_60;
        }
      }
      v25 = (_QWORD*)*v25;
      v18 = 0;
    } while (v25 != nullptr);
  }
LABEL_61:
  v29 = game_HashString_alt1(&GameData_1ab3c18, v17);
  v30 = 0;
  if (v29 == 0 || game_GameModeData_instance_ == 0) {
    goto LABEL_90;
  }
  v31 = *(_QWORD**)(game_GameModeData_instance_ + 48);
  v32 = v31[2];
  if (v32 == 0 || v31[4] == 0) {
    goto LABEL_89;
  }
  v34 = v32 - 1;
  if ((v32 & (v32 - 1)) != 0) {
    v35 = v29;
    if (v29 >= v32) {
      v35 = v29 % v32;
    }
  }
  else {
    v35 = v34 & v29;
  }
  v36 = *(_QWORD**)(v31[1] + 8 * v35);
  if (v36 == nullptr) {
    goto LABEL_89;
  }
  v37 = (_QWORD*)*v36;
  if (v37 == nullptr) {
    goto LABEL_89;
  }
  if ((v32 & v34) == 0) {
    while (1) {
      v39 = v37[1];
      if (v29 == v39) {
        if (v37[2] == v29) {
          goto LABEL_87;
        }
      }
      else if ((v39 & v34) != v35) {
        goto LABEL_89;
      }
      v37 = (_QWORD*)*v37;
      v30 = 0;
      if (v37 == nullptr) {
        goto LABEL_90;
      }
    }
  }
  while (2) {
    v38 = v37[1];
    if (v29 != v38) {
      if (v38 >= v32) {
        v38 %= v32;
      }
      if (v38 != v35) {
        goto LABEL_89;
      }
    }
    else if (v37[2] == v29) {
    LABEL_87:
      v40 = v37[3];
      if (v40 != 0) {
        v30 = *(_DWORD*)(v40 + 32);
        goto LABEL_90;
      }
    LABEL_89:
      v30 = 0;
    LABEL_90:
      v41 = 100 * (v18 + v12 + v30);
      if (v41 < 1) {
        return 0;
      }
      nn_os_LockMutex(&game_g_random_mutex);
      v42 = game_map_MapRandom_instance__ptr[0];
      v43 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 8);
      v44 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
      v45 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL)) ^
            (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((__int128*)0x10LL))
             << 11);
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL)) =
          *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 4) = v43;
      v46 = (v45 >> 8) ^ (v44 >> 19) ^ v45 ^ v44;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 8) = v44;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 12) = v46;
      v47 = v46 & 0x7FFFFFFF;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v48 = v47 % v41;
      if (v12 != 0) {
        v48 -= 100 * v12;
        if (v48 < 0) {
          return 3;
        }
      }
      if (v18 != 0) {
        v48 -= 100 * v18;
        if (v48 < 0) {
          return 2;
        }
      }
      return v30 != 0 && v48 - 100 * v30 < 0;
    }
    v37 = (_QWORD*)*v37;
    v30 = 0;
    if (v37 == nullptr) {
      goto LABEL_90;
    }
    continue;
  }
}

__attribute__((swiftcall)) void game_9591b0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  const char* v4;
  __int64 v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;

  v3 = *(unsigned __int8*)(a1 + 82);
  if (v3 > 5) {
    v4 = &GameData_1a9f09e;
  }
  else {
    v4 = (const char*)*(&GameData_1fb01c8 + v3);
  }
  v5 = game_util_Format_alt1("Volunteer_%s", v4);
  result = strlen(v5);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(result);
  }
  v7 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v9, 16,
                                              0);
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

__attribute__((swiftcall)) void game_95e2c0(PSEUDO_X8 x8_, __int64 result,
                                            __int64 a2)
{
  __int16* a3 = (__int16*)PSEUDO_X8_VALUE(x8_);
  __int16 v4;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 (*v36)(_QWORD);
  __int64 v37;
  _QWORD* v38;
  bool v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  char* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  __int64 v54;
  int v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  int v60;
  unsigned int v61;
  unsigned int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  unsigned int v68;
  __int16 v69;
  __int64* v70;
  __int64* v71;
  int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 (*v77)(_QWORD);
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int16* v83;
  __int64 v84;
  _QWORD v85[4];
  _QWORD* v86;
  int v87;

  v4 = 1;
  if (result != 0 && a2 != 0) {
    v6 = *(char*)(a2 + 504);
    v7 = result;
    *a3 = 0;
    if (v6 == 0 || a2 != *(_QWORD*)(*(_QWORD*)(a2 + 24) + 1104LL) ||
        (v6 & 0x80000000) == 0 && *(_QWORD*)(a2 + 480) == 0) {
      goto LABEL_14;
    }
    v8 = *(_QWORD*)(result + 392);
    if (v8 == 0) {
      goto LABEL_14;
    }
    v9 = *(unsigned __int8*)(v8 + 441);
    if (v9 == 3) {
      v9 = *(unsigned __int8*)(result + 2136);
      if (v9 <= 1) {
        v9 = 1;
      }
    }
    if (*(_BYTE*)(a2 + 50) != 0 && *(unsigned __int8*)(a2 + 50) != v9 ||
        (*(_BYTE*)(v8 + 49) & 2) == 0) {
    LABEL_14:
      LODWORD(v10) = 1;
      *a3 = 1;
      goto LABEL_15;
    }
    v10 = *(_QWORD*)(a2 + 496);
    if (v10 != 0) {
      v80 = *(unsigned __int16*)(a2 + 488);
      if (*(_WORD*)(a2 + 488) != 0) {
        v81 = (__int64*)(v10 + 8);
        while (1) {
          v82 = *v81;
          v81 += 2;
          if (v82 == v8) {
            goto LABEL_14;
          }
          --v80;
          LODWORD(v10) = 0;
          if (v80 == 0) {
            goto LABEL_15;
          }
        }
      }
      LODWORD(v10) = 0;
    }
  LABEL_15:
    v11 = *(_QWORD*)(result + 408);
    if (v11 != 0) {
      v12 = 0;
    }
    else {
      v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 400) + 24LL) + 1104LL);
    }
    if (v12 == a2) {
      v13 = v10 | 2;
    }
    else {
      v13 = v10;
    }
    if (v11 != 0) {
      v14 = 0;
      if (v6 < 0) {
        goto LABEL_31;
      }
    }
    else {
      v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 400) + 24LL) + 1104LL);
      if (v6 < 0) {
        goto LABEL_31;
      }
    }
    if (v14 != a2) {
      v15 = *(_QWORD*)(*(_QWORD*)(a2 + 24) + 1104LL);
      if (v15 == 0) {
        v18 = a2 + 24;
        goto LABEL_36;
      }
      v16 = *(_QWORD*)(result + 560);
      v17 = *(unsigned __int16*)(v15 + 16);
      if (v17 < (*(_QWORD*)(result + 568) - v16) >> 1 &&
          (*(_WORD*)(v16 + 2 * v17) & 0x400) != 0) {
        v13 |= 0x200u;
        *a3 = v13;
      }
      v18 = a2 + 24;
    LABEL_32:
      v19 = *(_QWORD*)(result + 560);
      v20 = *(unsigned __int16*)(v15 + 16);
      if (v20 < (*(_QWORD*)(result + 568) - v19) >> 1 &&
          (*(_WORD*)(v19 + 2 * v20) & 0x800) != 0) {
        v13 |= 0x400u;
        *a3 = v13;
      }
    LABEL_36:
      v21 = *(unsigned __int8*)(a2 + 49);
      if ((v21 & 0xFE) == 4) {
        if (game_GameModeData_instance_ == 0 ||
            *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
          goto LABEL_46;
        }
      }
      else if (*(_BYTE*)(a2 + 49) == 0) {
        v22 = &GameData_21c6980;
        v23 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_46;
        }
        goto LABEL_44;
      }
      result = game_9a28e0_alt1(GameData_1b37744[v21 - 1]);
      v22 = (__int64*)result;
      v23 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_46;
      }
    LABEL_44:
      result = game_GameVariableTable_Find_alt1(*(_QWORD*)(v23 + 48), v22);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      LABEL_47:
        v24 = *(_QWORD*)(a2 + 496);
        v84 = v7;
        if (v24 != 0) {
          v25 = *(unsigned __int16*)(a2 + 488);
          if (*(_WORD*)(a2 + 488) != 0) {
            v26 = (__int64*)(v24 + 8);
            while (1) {
              v27 = *v26;
              v26 += 2;
              if (v27 == *(_QWORD*)(v7 + 392)) {
                break;
              }
              if (--v25 == 0) {
                goto LABEL_54;
              }
            }
            v13 |= 0x40u;
            *a3 = v13;
          }
        }
      LABEL_54:
        v28 = v18;
        v29 = *(__int64**)(*(_QWORD*)v18 + 1016LL);
        v30 = *(__int64**)(*(_QWORD*)v18 + 1008LL);
        if (v29 != v30) {
          v83 = a3;
          v31 = 0;
          do {
            v32 = *v30;
            v33 = v30[1];
            if (v33 == *v30) {
            LABEL_56:
              ++v31;
            }
            else {
              while (1) {
                if (*(_QWORD*)v32 != 0) {
                  v34 = game_GameModeData_instance_;
                  if (game_GameModeData_instance_ != 0) {
                    v35 = game_GameVariableTable_Find_alt1(
                        *(_QWORD*)(game_GameModeData_instance_ + 48), v32);
                    if (v35 != 0) {
                      v36 = *(__int64 (**)(_QWORD))(v35 + 72);
                      v37 = *(_QWORD*)(v35 + 80);
                      v38 = (_QWORD*)(v35 + (v37 >> 1));
                      if ((v37 & 1) != 0) {
                        v36 = *(__int64 (**)(_QWORD))((char*)v36 + *v38);
                      }
                      LOBYTE(result) = v36(v38);
                    }
                    else {
                      LOBYTE(result) = 1;
                    }
                  }
                  if (*(_BYTE*)(v32 + 16) != ((v34 == 0) | result & 1)) {
                    break;
                  }
                }
                v32 += 24;
                if (v32 == v33) {
                  goto LABEL_56;
                }
              }
            }
            v30 += 6;
          } while (v30 != v29);
          v39 = v31 == 0;
          a3 = v83;
          if (v39) {
            v13 |= 0x10u;
          }
        }
        v40 = game_9a28e0_alt1(3);
        v41 = v28;
        if (game_GameModeData_instance_ == 0) {
          v43 = v84;
          goto LABEL_88;
        }
        v42 = game_GameVariableTable_Find_alt1(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v40);
        v43 = v84;
        if (v42 != 0 && *(_DWORD*)(v42 + 32) != 0) {
          v44 = *(_QWORD*)(v84 + 392);
          if (v44 != 0) {
            if (game_GameModeData_instance_ != 0) {
              v45 = *(unsigned int*)(game_GameModeData_instance_ + 60);
              v46 = (unsigned int)v45 > 3 ? 1712LL : GameData_1b01648[v45];
            }
            else {
              v46 = 1760;
            }
            v47 = *(_QWORD*)(v44 + 24) + v46;
            v48 = *(char**)v47;
            v49 = *(char**)(v47 + 8);
            if (v48 != v49) {
              v50 = v49 - v48 - 8;
              if ((~(_BYTE)v50 & 0x18) != 0) {
                v51 = ((unsigned __int8)((unsigned int)v50 >> 3) + 1) & 3;
                do {
                  v52 = *(_QWORD*)v48;
                  v48 += 8;
                  if (a2 == v52) {
                    goto LABEL_88;
                  }
                } while (--v51 != 0);
              }
              if (v50 >= 0x18) {
                while (a2 != *(_QWORD*)v48 && a2 != *((_QWORD*)v48 + 1) &&
                       a2 != *((_QWORD*)v48 + 2) && a2 != *((_QWORD*)v48 + 3)) {
                  v48 += 32;
                  if (v48 == v49) {
                    goto LABEL_87;
                  }
                }
                goto LABEL_88;
              }
            }
          }
        LABEL_87:
          v13 |= 0x10u;
          *a3 = v13;
        }
      LABEL_88:
        if (*(_QWORD*)(a2 + 480) == 0) {
        LABEL_106:
          result = GameRoutine_95e0e0(v43, a2);
          v67 = v13 | 0x20;
          if ((int)result > 99 || *(_BYTE*)(a2 + 505) == 0) {
            if ((_DWORD)result != 0) {
              v67 = v13;
            }
            if (v67 == 0) {
              v4 = 2048;
              goto LABEL_137;
            }
            if (v67 == 1536) {
              v4 = 3584;
              goto LABEL_137;
            }
          }
          v68 = *(unsigned __int8*)(a2 + 49);
          result = GameRoutine_960100();
          if (v68 <= (unsigned __int8)result) {
            if ((v67 & 0x10) == 0) {
              v69 = 0;
              goto LABEL_136;
            }
            if (*(_QWORD*)(a2 + 464) != 0) {
              v70 = *(__int64**)(*(_QWORD*)v41 + 1064LL);
              v71 = *(__int64**)(*(_QWORD*)v41 + 1056LL);
              if (v70 == v71) {
                goto LABEL_135;
              }
              v72 = 0;
              do {
                v73 = *v71;
                v74 = v71[1];
                if (v74 == *v71) {
                LABEL_121:
                  ++v72;
                }
                else {
                  while (1) {
                    if (*(_QWORD*)v73 != 0) {
                      v75 = game_GameModeData_instance_;
                      if (game_GameModeData_instance_ != 0) {
                        v76 = game_GameVariableTable_Find_alt1(
                            *(_QWORD*)(game_GameModeData_instance_ + 48), v73);
                        if (v76 != 0) {
                          v77 = *(__int64 (**)(_QWORD))(v76 + 72);
                          v78 = *(_QWORD*)(v76 + 80);
                          v79 = (_QWORD*)(v76 + (v78 >> 1));
                          if ((v78 & 1) != 0) {
                            v77 = *(__int64 (**)(_QWORD))((char*)v77 + *v79);
                          }
                          result = v77(v79);
                        }
                        else {
                          result = 1;
                        }
                      }
                      if (*(_BYTE*)(v73 + 16) != ((v75 == 0) | result & 1)) {
                        break;
                      }
                    }
                    v73 += 24;
                    if (v73 == v74) {
                      goto LABEL_121;
                    }
                  }
                }
                v71 += 6;
              } while (v71 != v70);
              if (v72 != 0) {
              LABEL_135:
                v69 = 256;
                goto LABEL_136;
              }
            }
          }
          v69 = 128;
        LABEL_136:
          v4 = v69 | v67;
          goto LABEL_137;
        }
        v53 = game_UnitItemList_Count(v43 + 828);
        v54 = *(_QWORD*)(a2 + 480);
        v55 = v53;
        v56 = GameData_212c878[0];
        v57 = *GameData_212c878[0];
        if (v54 != 0) {
          v58 = *(unsigned __int16*)(v54 + 16);
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v57 + 64) + 8 * v58) + 73LL) ==
              17) {
            nn_os_LockMutex(&game_g_random_mutex);
            v59 = game_map_MapRandom_instance__ptr[0];
            v60 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v61 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v62 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v59 + 1) = v60;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v59) = v61;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v59 + 4) =
                (v62 >> 8) ^ (v61 >> 19) ^ v62 ^ v61;
            nn_os_UnlockMutex(&game_g_random_mutex);
            v57 = *v56;
          }
        }
        else {
          LODWORD(v58) = 0;
        }
        v63 = *(_QWORD*)(v57 + 64);
        v87 = 0;
        v64 = *(_QWORD*)(v63 + 8LL * (unsigned int)v58);
        v65 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                         8LL);
        v86 = v85;
        v85[0] = GameData_212d7f0[0] + 2;
        v85[1] = &v87;
        game_TransporterConst_List_Impl_EachData(v65, v64, v85);
        if (v86 == v85) {
          v66 = 32;
        }
        else {
          if (v86 == nullptr) {
            goto LABEL_104;
          }
          v66 = 40;
        }
        (*(void (**)(__int64))(*v86 + v66))((__int64)v86);
      LABEL_104:
        if (v87 + v55 == 0) {
          v13 |= 8u;
        }
        goto LABEL_106;
      }
    LABEL_46:
      v13 |= 4u;
      goto LABEL_47;
    }
  LABEL_31:
    v18 = a2 + 24;
    v13 |= 0x200u;
    v15 = *(_QWORD*)(*(_QWORD*)(a2 + 24) + 1104LL);
    if (v15 == 0) {
      goto LABEL_36;
    }
    goto LABEL_32;
  }
LABEL_137:
  *a3 = v4;
  {
    result;
    return;
  }
}

__int64 game_95e950(__int64 a1, __int64 a2)
{
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[4];
  _QWORD* v18;
  int v19;

  if (a2 == 0) {
    return 0xFFFFFFFFLL;
  }
  v3 = *(_QWORD*)(a2 + 480);
  if (v3 == 0) {
    return 0xFFFFFFFFLL;
  }
  if (a1 != 0) {
    v4 = game_UnitItemList_Count(a1 + 828);
    v3 = *(_QWORD*)(a2 + 480);
    v5 = GameData_21c99b8;
    v6 = v4;
    if (v3 == 0) {
      LODWORD(v7) = 0;
      goto LABEL_11;
    }
  }
  else {
    v5 = GameData_21c99b8;
    v6 = 0;
  }
  v7 = *(unsigned __int16*)(v3 + 16);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) + 8 * v7) + 73LL) == 17) {
    nn_os_LockMutex(&game_g_random_mutex);
    v9 = game_map_MapRandom_instance__ptr[0];
    v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v12 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v9 + 1) = v10;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) = v11;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4) =
        (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
    nn_os_UnlockMutex(&game_g_random_mutex);
    v5 = GameData_21c99b8;
  }
LABEL_11:
  v13 = *(_QWORD*)(v5 + 64);
  v19 = 0;
  v14 = *(_QWORD*)(v13 + 8LL * (unsigned int)v7);
  v15 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v18 = v17;
  v17[0] = GameData_212d7f0[0] + 2;
  v17[1] = &v19;
  game_TransporterConst_List_Impl_EachData(v15, v14, v17);
  if (v18 == v17) {
    v16 = 32;
    goto LABEL_15;
  }
  if (v18 != nullptr) {
    v16 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v18 + v16))((__int64)v18);
  }
  return (unsigned int)(v19 + v6);
}

__attribute__((swiftcall)) void game_95eaa0(PSEUDO_X8 x8_, __int64 result,
                                            __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int16* v3;
  int v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int16 v21;
  __int64* v22;
  __int64* v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 (*v29)(_QWORD);
  __int64 v30;
  _QWORD* v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  __int16 v35;
  __int64* v36;
  __int64* v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 (*v43)(_QWORD);
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int16* v51;

  v3 = (__int16*)a3;
  LODWORD(a3) = 1;
  if (result == 0 || a2 == 0) {
    goto LABEL_85;
  }
  v5 = *(char*)(a2 + 504);
  v6 = result;
  if (*(_BYTE*)(a2 + 504) != 0) {
    if (a2 != *(_QWORD*)(*(_QWORD*)(a2 + 24) + 1104LL) ||
        (v5 & 0x80000000) == 0 && *(_QWORD*)(a2 + 480) == 0) {
      goto LABEL_14;
    }
    v7 = *(_QWORD*)(result + 392);
    if (v7 == 0) {
      goto LABEL_14;
    }
    v8 = *(unsigned __int8*)(v7 + 441);
    if (v8 == 3) {
      v8 = *(unsigned __int8*)(result + 2136);
      if (v8 <= 1) {
        v8 = 1;
      }
    }
    if (*(_BYTE*)(a2 + 50) != 0 && *(unsigned __int8*)(a2 + 50) != v8 ||
        (*(_BYTE*)(v7 + 49) & 2) == 0) {
    LABEL_14:
      LODWORD(a3) = 1;
      goto LABEL_15;
    }
    a3 = *(_QWORD*)(a2 + 496);
    if (a3 != 0) {
      v46 = *(unsigned __int16*)(a2 + 488);
      if (*(_WORD*)(a2 + 488) != 0) {
        v47 = (__int64*)(a3 + 8);
        while (1) {
          v48 = *v47;
          v47 += 2;
          if (v48 == v7) {
            goto LABEL_14;
          }
          --v46;
          LODWORD(a3) = 0;
          if (v46 == 0) {
            goto LABEL_15;
          }
        }
      }
      LODWORD(a3) = 0;
    }
  }
LABEL_15:
  if (*(_QWORD*)(result + 408) != 0) {
    v9 = 0;
    if (v5 < 0) {
      goto LABEL_26;
    }
  }
  else {
    v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 400) + 24LL) + 1104LL);
    if (v9 == a2) {
      LODWORD(a3) = a3 | 2;
    }
    if (v5 < 0) {
    LABEL_26:
      v10 = *(_QWORD**)(a2 + 24);
      LODWORD(a3) = a3 | 0x200;
      v14 = result + 512;
      v49 = a2 + 24;
      v11 = v10[138];
      if (v11 == 0) {
        goto LABEL_29;
      }
      goto LABEL_27;
    }
  }
  if (v9 == a2) {
    goto LABEL_26;
  }
  v10 = *(_QWORD**)(a2 + 24);
  v11 = v10[138];
  if (v11 != 0) {
    v12 = *(_QWORD*)(result + 560);
    v13 = *(unsigned __int16*)(v11 + 16);
    if (v13 < (*(_QWORD*)(result + 568) - v12) >> 1) {
      LODWORD(a3) = a3 | (*(unsigned __int16*)(v12 + 2 * v13) >> 1) & 0x200;
    }
    v14 = result + 512;
    v49 = a2 + 24;
  LABEL_27:
    v15 = *(_QWORD*)(result + 560);
    v16 = *(unsigned __int16*)(v11 + 16);
    if (v16 < (*(_QWORD*)(result + 568) - v15) >> 1) {
      LODWORD(a3) = (*(unsigned __int16*)(v15 + 2 * v16) >> 1) & 0x400 | a3;
    }
  LABEL_29:
    v17 = *(_QWORD*)(a2 + 496);
    if (v17 == 0) {
      goto LABEL_37;
    }
    goto LABEL_30;
  }
  v14 = result + 512;
  v49 = a2 + 24;
  v17 = *(_QWORD*)(a2 + 496);
  if (v17 == 0) {
  LABEL_37:
    if ((_DWORD)a3 == 512) {
      v21 = 2560;
    }
    else {
      v21 = a3;
    }
    goto LABEL_40;
  }
LABEL_30:
  v18 = *(unsigned __int16*)(a2 + 488);
  if (*(_WORD*)(a2 + 488) == 0) {
    goto LABEL_37;
  }
  v19 = (__int64*)(v17 + 8);
  while (1) {
    v20 = *v19;
    v19 += 2;
    if (v20 == *(_QWORD*)(result + 392)) {
      break;
    }
    if (--v18 == 0) {
      goto LABEL_37;
    }
  }
  v21 = a3 | 0x40;
LABEL_40:
  v22 = (__int64*)v10[127];
  v23 = (__int64*)v10[126];
  *v3 = v21;
  if (v22 != v23) {
    v50 = v14;
    v51 = v3;
    v24 = 0;
    do {
      v25 = *v23;
      v26 = v23[1];
      if (v26 == *v23) {
      LABEL_42:
        ++v24;
      }
      else {
        while (1) {
          if (*(_QWORD*)v25 != 0) {
            v27 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v28 = game_GameVariableTable_Find(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)v25);
              if (v28 != 0) {
                v29 = *(__int64 (**)(_QWORD))(v28 + 72);
                v30 = *(_QWORD*)(v28 + 80);
                v31 = (_QWORD*)(v28 + (v30 >> 1));
                if ((v30 & 1) != 0) {
                  v29 = *(__int64 (**)(_QWORD))((char*)v29 + *v31);
                }
                result = v29(v31);
              }
              else {
                result = 1;
              }
            }
            if (*(_BYTE*)(v25 + 16) != ((v27 == 0) | result & 1)) {
              break;
            }
          }
          v25 += 24;
          if (v25 == v26) {
            goto LABEL_42;
          }
        }
      }
      v23 += 6;
    } while (v23 != v22);
    if (v24 != 0) {
      v3 = v51;
    }
    else {
      v3 = v51;
      v21 |= 0x10u;
      *v51 = v21;
    }
    v14 = v50;
  }
  if ((v21 & 0x800) == 0) {
    v32 = *(unsigned __int8*)(a2 + 49);
    v33 = (unsigned __int8)GameRoutine_960100_alt1();
    result = game_UnitMastery_GetMaxJobRank(v14, v6);
    v34 = (unsigned __int8)result;
    if (v33 > (unsigned __int8)result) {
      v34 = v33;
    }
    if (v32 <= v34) {
      if ((v21 & 0x10) == 0) {
        v35 = 0;
        goto LABEL_84;
      }
      if (*(_QWORD*)(a2 + 464) != 0) {
        v36 = *(__int64**)(*(_QWORD*)v49 + 1064LL);
        v37 = *(__int64**)(*(_QWORD*)v49 + 1056LL);
        if (v36 == v37) {
          goto LABEL_83;
        }
        v38 = 0;
        do {
          v39 = *v37;
          v40 = v37[1];
          if (v40 == *v37) {
          LABEL_69:
            ++v38;
          }
          else {
            while (1) {
              if (*(_QWORD*)v39 != 0) {
                v41 = game_GameModeData_instance_;
                if (game_GameModeData_instance_ != 0) {
                  v42 = game_GameVariableTable_Find(
                      *(_QWORD**)(game_GameModeData_instance_ + 48),
                      (unsigned __int64*)v39);
                  if (v42 != 0) {
                    v43 = *(__int64 (**)(_QWORD))(v42 + 72);
                    v44 = *(_QWORD*)(v42 + 80);
                    v45 = (_QWORD*)(v42 + (v44 >> 1));
                    if ((v44 & 1) != 0) {
                      v43 = *(__int64 (**)(_QWORD))((char*)v43 + *v45);
                    }
                    result = v43(v45);
                  }
                  else {
                    result = 1;
                  }
                }
                if (*(_BYTE*)(v39 + 16) != ((v41 == 0) | result & 1)) {
                  break;
                }
              }
              v39 += 24;
              if (v39 == v40) {
                goto LABEL_69;
              }
            }
          }
          v37 += 6;
        } while (v37 != v36);
        if (v38 != 0) {
        LABEL_83:
          v35 = 256;
          goto LABEL_84;
        }
      }
    }
    v35 = 128;
  LABEL_84:
    LOWORD(a3) = v35 | v21;
  LABEL_85:
    *v3 = a3;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_95eea0(PSEUDO_X8 x8_, __int64 result,
                                            __int64 a2)
{
  __int16* a3 = (__int16*)PSEUDO_X8_VALUE(x8_);
  __int16 v4;
  int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  int v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int16 v25;
  __int64* v26;
  __int64* v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 (*v33)(_QWORD);
  __int64 v34;
  _QWORD* v35;
  unsigned int v36;
  __int16 v37;
  __int64* v38;
  __int64* v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 (*v45)(_QWORD);
  __int64 v46;
  _QWORD* v47;
  __int64 v48;

  v4 = 1;
  if (result == 0 || a2 == 0) {
    goto LABEL_86;
  }
  v6 = *(char*)(a2 + 504);
  if (*(_BYTE*)(a2 + 504) != 0 &&
      a2 == *(_QWORD*)(*(_QWORD*)(a2 + 24) + 1104LL) &&
      (v6 < 0 || *(_QWORD*)(a2 + 480) != 0)) {
    v7 = *(_QWORD*)(result + 392);
    if (v7 != 0) {
      v8 = *(unsigned __int8*)(v7 + 441);
      if (v8 == 3) {
        v8 = *(unsigned __int8*)(result + 2136);
        if (v8 <= 1) {
          v8 = 1;
        }
      }
      if ((*(_BYTE*)(a2 + 50) == 0 || *(unsigned __int8*)(a2 + 50) == v8) &&
          (*(_BYTE*)(v7 + 49) & 2) != 0) {
        v9 = *(_QWORD*)(a2 + 496);
        if (v9 != 0 &&
            (v10 = *(unsigned __int16*)(a2 + 488), *(_WORD*)(a2 + 488) != 0)) {
          v11 = (__int64*)(v9 + 8);
          while (1) {
            v12 = *v11;
            v11 += 2;
            if (v12 == v7) {
              break;
            }
            if (--v10 == 0) {
              goto LABEL_19;
            }
          }
        }
        else {
        LABEL_19:
          if (*(_BYTE*)(a2 + 505) != 0) {
            v13 = 0;
            goto LABEL_22;
          }
        }
      }
    }
  }
  v13 = 1;
LABEL_22:
  if (*(_QWORD*)(result + 408) != 0) {
    v14 = 0;
    if (v6 < 0) {
    LABEL_31:
      v15 = *(_QWORD**)(a2 + 24);
      v13 |= 0x200u;
      v48 = a2 + 24;
      v16 = v15[138];
      if (v16 == 0) {
        goto LABEL_34;
      }
      goto LABEL_32;
    }
  }
  else {
    v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 400) + 24LL) + 1104LL);
    if (v6 < 0) {
      goto LABEL_31;
    }
  }
  if (v14 == a2) {
    goto LABEL_31;
  }
  v15 = *(_QWORD**)(a2 + 24);
  v16 = v15[138];
  if (v16 != 0) {
    v17 = *(_QWORD*)(result + 560);
    v18 = *(unsigned __int16*)(v16 + 16);
    if (v18 < (*(_QWORD*)(result + 568) - v17) >> 1) {
      v13 |= (*(unsigned __int16*)(v17 + 2 * v18) >> 1) & 0x200;
    }
    v48 = a2 + 24;
  LABEL_32:
    v19 = *(_QWORD*)(result + 560);
    v20 = *(unsigned __int16*)(v16 + 16);
    if (v20 < (*(_QWORD*)(result + 568) - v19) >> 1) {
      v13 |= (*(unsigned __int16*)(v19 + 2 * v20) >> 1) & 0x400;
    }
  LABEL_34:
    v21 = *(_QWORD*)(a2 + 496);
    if (v21 == 0) {
      goto LABEL_42;
    }
    goto LABEL_35;
  }
  v48 = a2 + 24;
  v21 = *(_QWORD*)(a2 + 496);
  if (v21 == 0) {
  LABEL_42:
    if (v13 == 512) {
      v25 = 2560;
    }
    else {
      v25 = v13;
    }
    goto LABEL_45;
  }
LABEL_35:
  v22 = *(unsigned __int16*)(a2 + 488);
  if (*(_WORD*)(a2 + 488) == 0) {
    goto LABEL_42;
  }
  v23 = (__int64*)(v21 + 8);
  while (1) {
    v24 = *v23;
    v23 += 2;
    if (v24 == *(_QWORD*)(result + 392)) {
      break;
    }
    if (--v22 == 0) {
      goto LABEL_42;
    }
  }
  v25 = v13 | 0x40;
LABEL_45:
  v26 = (__int64*)v15[127];
  v27 = (__int64*)v15[126];
  *a3 = v25;
  if (v26 != v27) {
    v28 = 0;
    do {
      v29 = *v27;
      v30 = v27[1];
      if (v30 == *v27) {
      LABEL_47:
        ++v28;
      }
      else {
        while (1) {
          if (*(_QWORD*)v29 != 0) {
            v31 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v32 = game_GameVariableTable_Find(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)v29);
              if (v32 != 0) {
                v33 = *(__int64 (**)(_QWORD))(v32 + 72);
                v34 = *(_QWORD*)(v32 + 80);
                v35 = (_QWORD*)(v32 + (v34 >> 1));
                if ((v34 & 1) != 0) {
                  v33 = *(__int64 (**)(_QWORD))((char*)v33 + *v35);
                }
                result = v33(v35);
              }
              else {
                result = 1;
              }
            }
            if (*(_BYTE*)(v29 + 16) != ((v31 == 0) | result & 1)) {
              break;
            }
          }
          v29 += 24;
          if (v29 == v30) {
            goto LABEL_47;
          }
        }
      }
      v27 += 6;
    } while (v27 != v26);
    if (v28 == 0) {
      v25 |= 0x10u;
      *a3 = v25;
    }
  }
  if ((v25 & 0x800) == 0) {
    v36 = *(unsigned __int8*)(a2 + 49);
    result = GameRoutine_960100_alt1();
    if (v36 <= (unsigned __int8)result) {
      if ((v25 & 0x10) == 0) {
        v37 = 0;
        goto LABEL_85;
      }
      if (*(_QWORD*)(a2 + 464) != 0) {
        v38 = *(__int64**)(*(_QWORD*)v48 + 1064LL);
        v39 = *(__int64**)(*(_QWORD*)v48 + 1056LL);
        if (v38 == v39) {
          goto LABEL_84;
        }
        v40 = 0;
        do {
          v41 = *v39;
          v42 = v39[1];
          if (v42 == *v39) {
          LABEL_70:
            ++v40;
          }
          else {
            while (1) {
              if (*(_QWORD*)v41 != 0) {
                v43 = game_GameModeData_instance_;
                if (game_GameModeData_instance_ != 0) {
                  v44 = game_GameVariableTable_Find(
                      *(_QWORD**)(game_GameModeData_instance_ + 48),
                      (unsigned __int64*)v41);
                  if (v44 != 0) {
                    v45 = *(__int64 (**)(_QWORD))(v44 + 72);
                    v46 = *(_QWORD*)(v44 + 80);
                    v47 = (_QWORD*)(v44 + (v46 >> 1));
                    if ((v46 & 1) != 0) {
                      v45 = *(__int64 (**)(_QWORD))((char*)v45 + *v47);
                    }
                    result = v45(v47);
                  }
                  else {
                    result = 1;
                  }
                }
                if (*(_BYTE*)(v41 + 16) != ((v43 == 0) | result & 1)) {
                  break;
                }
              }
              v41 += 24;
              if (v41 == v42) {
                goto LABEL_70;
              }
            }
          }
          v39 += 6;
        } while (v39 != v38);
        if (v40 != 0) {
        LABEL_84:
          v37 = 256;
          goto LABEL_85;
        }
      }
    }
    v37 = 128;
  LABEL_85:
    v4 = v37 | v25;
  LABEL_86:
    *a3 = v4;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_95f260(PSEUDO_X8 x8_, __int64 result)
{
  __int16* a2 = (__int16*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  int v5;
  __int16 v6;
  unsigned __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (*v17)(_QWORD);
  __int64 v18;
  _QWORD* v19;
  __int16 v20;
  __int16 v21;
  unsigned int v22;
  __int16 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 (*v32)(_QWORD);
  __int64 v33;
  _QWORD* v34;

  if (result == 0) {
    v6 = 1;
  LABEL_64:
    *a2 = v6;
    {
      result;
      return;
    }
  }
  v3 = result;
  v4 = *(unsigned __int8*)(result + 49);
  v5 = *(_BYTE*)(result + 505) == 0;
  if ((v4 & 0xFE) == 4) {
    if (game_GameModeData_instance_ == 0 ||
        *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
      goto LABEL_13;
    }
  LABEL_8:
    result = (__int64)game_9a28e0(GameData_1b37744_alt1[v4 - 1]);
    v7 = (unsigned __int64*)result;
    v8 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_13;
    }
    goto LABEL_11;
  }
  if (*(_BYTE*)(result + 49) != 0) {
    goto LABEL_8;
  }
  v7 = (unsigned __int64*)&GameData_21c6980;
  v8 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
  LABEL_13:
    v5 |= 4u;
    goto LABEL_14;
  }
LABEL_11:
  result = game_GameVariableTable_Find(*(_QWORD**)(v8 + 48), v7);
  if (result == 0 || *(_DWORD*)(result + 32) == 0) {
    goto LABEL_13;
  }
LABEL_14:
  v9 = *(_QWORD*)(v3 + 24);
  v10 = *(__int64**)(v9 + 1016);
  v11 = *(__int64**)(v9 + 1008);
  if (v10 == v11) {
    if (v5 != 0) {
      v21 = v5;
    }
    else {
      v21 = 2048;
    }
    *a2 = v21;
    if ((v21 & 0x800) != 0) {
      result;
      return;
    }
  LABEL_41:
    v22 = *(unsigned __int8*)(v3 + 49);
    result = GameRoutine_960100_alt1();
    if (v22 <= (unsigned __int8)result) {
      if ((v21 & 0x10) == 0) {
        v23 = 0;
        goto LABEL_63;
      }
      if (*(_QWORD*)(v3 + 464) != 0) {
        v24 = *(_QWORD*)(v3 + 24);
        v25 = *(__int64**)(v24 + 1064);
        v26 = *(__int64**)(v24 + 1056);
        if (v25 == v26) {
          goto LABEL_62;
        }
        v27 = 0;
        do {
          v28 = *v26;
          v29 = v26[1];
          if (v29 == *v26) {
          LABEL_48:
            ++v27;
          }
          else {
            while (1) {
              if (*(_QWORD*)v28 != 0) {
                v30 = game_GameModeData_instance_;
                if (game_GameModeData_instance_ != 0) {
                  v31 = game_GameVariableTable_Find(
                      *(_QWORD**)(game_GameModeData_instance_ + 48),
                      (unsigned __int64*)v28);
                  if (v31 != 0) {
                    v32 = *(__int64 (**)(_QWORD))(v31 + 72);
                    v33 = *(_QWORD*)(v31 + 80);
                    v34 = (_QWORD*)(v31 + (v33 >> 1));
                    if ((v33 & 1) != 0) {
                      v32 = *(__int64 (**)(_QWORD))((char*)v32 + *v34);
                    }
                    result = v32(v34);
                  }
                  else {
                    result = 1;
                  }
                }
                if (*(_BYTE*)(v28 + 16) != ((v30 == 0) | result & 1)) {
                  break;
                }
              }
              v28 += 24;
              if (v28 == v29) {
                goto LABEL_48;
              }
            }
          }
          v26 += 6;
        } while (v26 != v25);
        if (v27 != 0) {
        LABEL_62:
          v23 = 256;
          goto LABEL_63;
        }
      }
    }
    v23 = 128;
  LABEL_63:
    v6 = v23 | v21;
    goto LABEL_64;
  }
  v12 = 0;
  do {
    v13 = *v11;
    v14 = v11[1];
    if (v14 == *v11) {
    LABEL_16:
      ++v12;
    }
    else {
      while (1) {
        if (*(_QWORD*)v13 != 0) {
          v15 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v16 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)v13);
            if (v16 != 0) {
              v17 = *(__int64 (**)(_QWORD))(v16 + 72);
              v18 = *(_QWORD*)(v16 + 80);
              v19 = (_QWORD*)(v16 + (v18 >> 1));
              if ((v18 & 1) != 0) {
                v17 = *(__int64 (**)(_QWORD))((char*)v17 + *v19);
              }
              result = v17(v19);
            }
            else {
              result = 1;
            }
          }
          if (*(_BYTE*)(v13 + 16) != ((v15 == 0) | result & 1)) {
            break;
          }
        }
        v13 += 24;
        if (v13 == v14) {
          goto LABEL_16;
        }
      }
    }
    v11 += 6;
  } while (v11 != v10);
  if (v5 != 0) {
    v20 = v5;
  }
  else {
    v20 = 2048;
  }
  if (v12 != 0) {
    v21 = v20;
  }
  else {
    v21 = v5 | 0x10;
  }
  *a2 = v21;
  if ((v21 & 0x800) == 0) {
    goto LABEL_41;
  }
  {
    result;
    return;
  }
}

__int64 game_960210(__int64 a1, __int64 a2)
{
  __int16 v3;

  game_95e2c0((void*)(&v3), a1, a2);
  if ((v3 & 1) != 0) {
    return 0;
  }
  if ((v3 & 0x800) != 0) {
    return 3;
  }
  if ((v3 & 0x200) != 0) {
    return 2;
  }
  if ((v3 & 0xC0) != 0) {
    return 0;
  }
  if ((v3 & 0x100) != 0) {
    return 1;
  }
  else {
    return 2;
  }
}

__int64 game_960280(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _DWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  __int64 v25;
  __int64 v26;

  if (result != 0) {
    v1 = GameData_21c9868;
    v2 = GameData_21c9870;
    if (GameData_21c9868 != GameData_21c9870) {
      v3 = (_QWORD*)result;
      v4 = (_DWORD*)game_g_shared_system_skills_ptr;
      v5 = GameData_212c878[0];
      v6 = game_map_MapRandom_instance__ptr[0];
      v7 = game_TransporterConst_List_instance__ptr[0];
      do {
        v8 = *(_QWORD*)v1;
        v9 = *(_QWORD*)(*(_QWORD*)v1 + 480LL);
        if (*(_BYTE*)(*(_QWORD*)v1 + 505LL) != 0 && v9 != 0) {
          if (v3[51] != 0) {
            if (v8 == 0) {
              goto LABEL_18;
            }
          }
          else if (*(_QWORD*)(*(_QWORD*)(v3[50] + 24LL) + 1104LL) == v8) {
            goto LABEL_18;
          }
          if (*(char*)(v8 + 504) < 0 ||
              (v11 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 1104LL)) != 0 &&
                  (v12 = v3[70], (v13 = *(unsigned __int16*)(v11 + 16)) <
                                     (unsigned __int64)((v3[71] - v12) >> 1)) &&
                  (*(_WORD*)(v12 + 2 * v13) & 0x400) != 0) {
          LABEL_18:
            v14 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 1104LL);
            if (v14 != 0) {
              v15 = v3[70];
              v16 = *(unsigned __int16*)(v14 + 16);
              if (v16 < (v3[71] - v15) >> 1 &&
                  (*(_WORD*)(v15 + 2 * v16) & 0x800) == 0) {
                *(_WORD*)(v15 + 2 * v16) |= 0x800u;
                LODWORD(v26) = *v4 & 0xFFF;
                result = game_HasSkill_alt1(v3 + 218, &v26);
                if ((result & 1) == 0 ||
                    ((v17 = v3[55]) == 0 ? (v18 = 9)
                                         : (v18 = *(_BYTE*)(v17 + 16)),
                     ((1 << v18) & 0xF1) == 0)) {
                  v19 = *v5;
                  v26 = 0x100000000LL;
                  v20 = *(_QWORD*)(v19 + 64);
                  LOWORD(v26) = *(_WORD*)(v9 + 16);
                  if (*(_BYTE*)(*(_QWORD*)(v20 + 8LL * (unsigned __int16)v26) +
                                73LL) == 17) {
                    nn_os_LockMutex(&game_g_random_mutex);
                    v21 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6);
                    v22 =
                        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4);
                    v23 = *(_DWORD*)v6 ^ (*(_DWORD*)v6 << 11);
                    *(_DWORD*)v6 = *((_DWORD*)v6 + 1);
                    *((_DWORD*)v6 + 1) = v21;
                    v24 = (v23 >> 8) ^ (v22 >> 19) ^ v23 ^ v22;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6) = v22;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4) =
                        v24;
                    nn_os_UnlockMutex(&game_g_random_mutex);
                    HIDWORD(v26) =
                        HIDWORD(v26) & 0xFFFFC00F |
                        (16 *
                         (((16 * (v24 - 1000 * ((v24 & 0x7FFFFFFFu) / 0x3E8)) +
                            16) >>
                           4) &
                          0x3FF));
                  }
                  result =
                      X8CALL_X0(__int64, game_UnitUtil_UniqueMap_Commit_89abc0(
                                             (void*)((__int64)&v25),
                                             *(_QWORD*)(*(_QWORD*)v7 + 8LL),
                                             (unsigned __int16*)&v26, 1));
                }
              }
            }
          }
        }
        v1 += 8;
      } while (v1 != v2);
    }
  }
  return result;
}

__int64 game_968b60(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD* v3;
  __int64* v4;
  int v8;
  int v9;
  unsigned __int64 v10;
  __int128 v11;
  __int64 result;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  int v16;
  int v17;
  unsigned __int64 v18;
  __int128 v19;
  int v20;
  int v21;
  unsigned __int64 v22;
  __int128 v23;
  __int64 v24;
  const char* v26;
  const char** v27;
  __int64 v28;
  __int64 v29;
  _BYTE* v30;
  __int64 v31;
  __int64 v32;
  _BYTE* v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  float v38;
  float v39;
  float v40;
  __int128 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  bool v45;
  int v46;
  _QWORD* v47;
  unsigned __int64 v48;
  int v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned int v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64*** v55;
  __int64** v56;
  unsigned __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int16* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  float v72;
  __int64 v73;
  const char* v74;
  float v75;
  unsigned __int16 v76[12];
  unsigned __int16* v77;
  __int64 v78;

  if (a3 == 0) {
    return 0;
  }
  v4 = (__int64*)(a3 + 48);
  v3 = *(_DWORD**)(a3 + 48);
  if (*(_QWORD*)v3 != 0 && *(_DWORD*)(*(_QWORD*)v3 + 16LL) == v3[2]) {
    if (a2 != 0) {
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v8 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v9 = 2)
               : (v9 = 3),
           (v9 & v8) != 0)) {
        if (game_ProcFadeView_instance_ == 0) {
          goto LABEL_18;
        }
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
        if (*((float*)&v11 + 3) != 1.0f ||
            LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v10 + 160) + 16LL))(
                            v10 + 160, *((float*)&v11 + 3)))
                    .n128_f32[3] != 1.0f) {
        LABEL_18:
          v13 = GameData_21309c8[0];
          v14 = *GameData_21309c8[0];
          if (*GameData_21309c8[0] != 0) {
            LOBYTE(v14) = *(_BYTE*)(v14 + 8) == 2;
          }
          if ((v14 & 1) == 0) {
            v15 = GameData_212ce98[0];
            if (*GameData_212ce98[0] != 0 &&
                game_script_map_effect_g_effect_manager != 0) {
              if (game_ProcGameSkipView_instance_ != 0 &&
                  *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
                v16 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
                v17 = (v16 & 8) != 0 ? 2 : 3;
                if ((v17 & v16) == 0) {
                  goto LABEL_122;
                }
              }
              if (game_ProcFadeView_instance_ != 0) {
                v18 = game_ProcFadeView_instance_ +
                      ((unsigned __int64)*(
                           unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                       << 6);
                if (*(float*)(v18 + 172) == *(float*)(v18 + 168)) {
                  (*(void (**)(unsigned __int64))(*(_QWORD*)(v18 + 160) +
                                                  16LL))(v18 + 160);
                }
                else {
                  v19 = *(_OWORD*)(v18 + 208);
                }
                if (*((float*)&v19 + 3) == 1.0f &&
                    LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                 (_QWORD*)(*(_QWORD*)(v18 + 160) + 16LL))(
                                    v18 + 160, *((float*)&v19 + 3)))
                            .n128_f32[3] == 1.0f) {
                  goto LABEL_122;
                }
              }
              v66 = *v13;
              if (*v13 != 0) {
                LOBYTE(v66) = *(_BYTE*)(v66 + 8) == 2;
              }
              if ((v66 & 1) != 0 || *v15 == 0 ||
                  game_script_map_effect_g_effect_manager == 0) {
              LABEL_122:
                GameRoutine_14a1390(v4, 1);
              }
              else {
                v67 = *v4;
                LODWORD(v77) = 1092616192;
                GameRoutine_14a1cc0(v67, 1.0f);
                v68 = (_QWORD*)GameData_224b6a0;
                if (GameData_224b6a0 >= (unsigned __int64)GameData_224b6a8) {
                  v71 = GameRoutine_14a36c0(&GameData_224b698, v4, &v77);
                }
                else {
                  v69 = *(_QWORD*)(a3 + 48);
                  v70 = *(_QWORD*)(a3 + 56);
                  if (v70 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v70 + 8), 1u,
                        memory_order_relaxed);
                    *v68 = v69;
                    v68[1] = v70;
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v70 + 8), 1u,
                        memory_order_relaxed);
                    v68[2] = 0x4120000000000000LL;
                    if (atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
                      std___1___shared_weak_count___release_weak_alt1(v70);
                    }
                    v71 = (__int64)(v68 + 3);
                  }
                  else {
                    *(_QWORD*)GameData_224b6a0 = v69;
                    v68[1] = 0;
                    v71 = (__int64)(v68 + 3);
                    v68[2] = 0x4120000000000000LL;
                  }
                }
                GameData_224b6a0 = v71;
              }
              goto LABEL_34;
            }
          }
        }
      }
    }
    GameRoutine_14a1390(v4, 1);
  }
  if (a2 == 0) {
  LABEL_46:
    result = 0;
    goto LABEL_78;
  }
LABEL_34:
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v20 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v21 = (v20 & 8) != 0 ? 2 : 3;
    if ((v21 & v20) == 0) {
      goto LABEL_46;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v22 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v22 + 172) == *(float*)(v22 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v22 + 160) + 16LL))(v22 + 160);
    }
    else {
      v23 = *(_OWORD*)(v22 + 208);
    }
    if (*((float*)&v23 + 3) == 1.0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v22 + 160) + 16LL))(
                        v22 + 160, *((float*)&v23 + 3)))
                .n128_f32[3] == 1.0f) {
      goto LABEL_46;
    }
  }
  v24 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0) {
    LOBYTE(v24) = *(_BYTE*)(v24 + 8) == 2;
  }
  result = 0;
  if ((v24 & 1) == 0) {
    v73 = a2;
    if (*GameData_212ce98[0] != 0 &&
        game_script_map_effect_g_effect_manager != 0) {
      result = 0;
      v26 = (*(_BYTE*)(a3 + 16) & 1) != 0 ? *(const char**)(a3 + 32)
                                          : (const char*)(a3 + 17);
      v74 = v26;
      if (v26 != nullptr) {
        v27 = (const char**)GameData_21f4410;
        v28 = GameData_21f4418;
        if (GameData_21f4410 != GameData_21f4418) {
          while (1) {
            v29 = a1;
            if (*v27 != nullptr) {
              v30 = (_BYTE*)game_util_Format_alt1("%s_%s", v74, *v27);
              v31 = *(_QWORD*)(*eft_g_effectSystem_ptr[0] + 112);
              v32 = *(_QWORD*)(v31 + 24);
              if (v32 != 0) {
                v33 = v30;
                if (*v30 != 0) {
                  v34 = *(_DWORD*)(v31 + 32);
                  if (v34 != 0) {
                    break;
                  }
                }
              }
            }
          LABEL_60:
            ++v27;
            result = 0;
            a1 = v29;
            if (v27 == (const char**)v28) {
              goto LABEL_78;
            }
          }
          v35 = 0;
          while (1) {
            v36 = (v34 + v35) >> 1;
            v37 = strcmp(*(_QWORD*)(v32 + 336LL * v36), v33);
            if (v37 == 0) {
              break;
            }
            if (v37 < 0) {
              v35 = v36 + 1;
            }
            else {
              v34 = (v34 + v35) >> 1;
            }
            if (v35 == v34) {
              goto LABEL_60;
            }
          }
          v38 = (float)((float)((float)(*(_DWORD*)(a3 + 40) + 256) * 5.0f) +
                        2.5f) +
                -0x1.4000000000000p+10f;
          v39 = (float)((float)((float)(*(_DWORD*)(a3 + 44) + 256) * 5.0f) +
                        2.5f) +
                -0x1.4000000000000p+10f;
          if (*GameData_212ce80[0] != 0) {
            v75 = (float)((float)((float)(*(_DWORD*)(a3 + 44) + 256) * 5.0f) +
                          2.5f) +
                  -0x1.4000000000000p+10f;
            v72 = (float)((float)((float)(*(_DWORD*)(a3 + 40) + 256) * 5.0f) +
                          2.5f) +
                  -0x1.4000000000000p+10f;
            v40 = Height_7c4d10(*(_QWORD*)(*GameData_212ce80[0] + 61456), v72,
                                v39);
            v38 = v72;
            v39 = v75;
          }
          else {
            v40 = 0.0f;
          }
          a1 = v29;
          *(_QWORD*)&v41 = __PAIR64__(LODWORD(v40), LODWORD(v38));
          *((_QWORD*)&v41 + 1) = LODWORD(v39);
          *(_OWORD*)v76 = v41;
          EffectConst_961520(&v77, v33, v76, 5, 0, 1.0f, 0.0f);
          result = GameRoutine_9a48c0(v73, &v77);
          v42 = v78;
          if (v78 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            v43 = result;
            (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
            std___1___shared_weak_count___release_weak_alt1(v42);
            result = v43;
            a1 = v29;
          }
        }
      }
    }
  }
LABEL_78:
  v44 = *(_DWORD*)(a1 + 7144);
  v45 = __OFSUB__(v44, 1);
  v46 = v44 - 1;
  if (v46 < 0 == v45) {
    *(_DWORD*)(a1 + 7144) = v46;
    v47 = (_QWORD*)(*(_QWORD*)(a1 + 7136) - 8LL);
    *(_QWORD*)(a1 + 7136) = v47;
    *v47 = a3;
    v48 = *(_QWORD*)(a1 + 7184);
    if (v48 != 0 && *(_QWORD*)(a1 + 7200) != 0) {
      v49 = a1 + 8;
      v50 = v48 - 1;
      v51 = a3 - (a1 + 8);
      v52 = (unsigned __int16)((unsigned int)v51 >> 6);
      v53 = (unsigned __int16)(v51 >> 6);
      if ((v48 & (v48 - 1)) != 0) {
        v54 = v53;
        if (v48 <= v53) {
          v54 = v52 % (unsigned int)v48;
        }
      }
      else {
        v54 = ((_DWORD)v48 - 1) & (unsigned int)v53;
      }
      v55 = *(__int64****)(*(_QWORD*)(a1 + 7176) + 8 * v54);
      if (v55 != nullptr) {
        v56 = *v55;
        if (*v55 != nullptr) {
          if ((v48 & v50) == 0) {
            while (1) {
              v58 = v56[1];
              if (v58 == (__int64*)v53) {
                if (*((unsigned __int16*)v56 + 8) == v52) {
                  goto LABEL_101;
                }
              }
              else if (((unsigned __int64)v58 & v50) != v54) {
                return result;
              }
              v56 = (__int64**)*v56;
              if (v56 == nullptr) {
                return result;
              }
            }
          }
          do {
            v57 = (unsigned __int64)v56[1];
            if (v57 == v53) {
              if (*((unsigned __int16*)v56 + 8) == v52) {
              LABEL_101:
                v59 = *(_QWORD*)(a1 + 7160);
                v60 = result;
                v61 = *(_QWORD*)(v59 - 8);
                if (v61 != a3) {
                  v62 = a1;
                  v63 = *((unsigned __int16*)v56 + 9);
                  *(_QWORD*)(*(_QWORD*)(v62 + 7152) + 8 * v63) = v61;
                  v76[0] = (unsigned int)(v61 - v49) >> 6;
                  v77 = v76;
                  *(_WORD*)(GameRoutine_82f5a0(
                                (float*)(v62 + 7176), v76,
                                (__int64)std___1_piecewise_construct_ptr,
                                &v77) +
                            18) = v63;
                  a1 = v62;
                  v59 = *(_QWORD*)(v62 + 7160);
                }
                *(_QWORD*)(a1 + 7160) = v59 - 8;
                GameRoutine_82faa0((void*)(&v77), a1 + 7176, v56);
                v64 = v77;
                v77 = nullptr;
                if (v64 != nullptr) {
                  v65 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v65 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, v64);
                }
                return v60;
              }
            }
            else {
              if (v57 >= v48) {
                v57 %= v48;
              }
              if (v57 != v54) {
                return result;
              }
            }
            v56 = (__int64**)*v56;
          } while (v56 != nullptr);
        }
      }
    }
  }
  return result;
}

__int64 game_972b70(__int64 a1, __int64 a2)
{
  unsigned int v4;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  struct {
    __int64 (**v12)();
    int* v13;
    char gap16_[16];
    unsigned __int64* v14;
  } v12_;
  int v17;

  v4 = 0;
  if (a2 != 0) {
    v5 = *(_DWORD*)(a2 + 416);
    v6 = *(unsigned __int8*)(a2 + 501);
    if ((v5 & 0x100000) == 0) {
      v6 = -1;
    }
    if ((v5 & 0x80000) == 0 && v6 != (_DWORD)a1) {
      v17 = 0;
      if ((a1 & 0x80000000) != 0) {
        v8 = 0;
      LABEL_14:
        v12_.v13 = (int*)&GameData_1ada5b4;
        v12_.v12 =
            (__int64 (**)(void))game_HashString((__int64)&GameData_1ada5b4);
        v9 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v10 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)&v12_.v12);
          if (v10 != 0) {
            v9 = *(_DWORD*)(v10 + 32);
          }
          else {
            v9 = 0;
          }
        }
        return v8 < v9;
      }
      v12_.v12 = GameData_1fb0e30;
      v12_.v13 = &v17;
      v12_.v14 = (unsigned __int64*)&v12_.v12;
      game_CorpsManager_EachUnit(a1, (__int64)&v12_.v12);
      if (v12_.v14 == (unsigned __int64*)&v12_.v12) {
        v7 = 32;
      }
      else {
        if (v12_.v14 == nullptr) {
        LABEL_13:
          v8 = v17;
          goto LABEL_14;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v12_.v14 + v7))((__int64)v12_.v14);
      goto LABEL_13;
    }
  }
  return v4;
}

void* game_97b2f0(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  _BYTE* v4;
  char* v5;
  char* v6;

  v1 = *(unsigned __int8*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    if (v2 != 1) {
      v3 = *(_QWORD*)(a1 + 24);
    LABEL_17:
      if ((v1 & 1) != 0) {
        return (void*)v3;
      }
      else {
        return (void*)(a1 + 9);
      }
    }
    v3 = *(_QWORD*)(a1 + 24);
    v4 = (_BYTE*)(a1 + 9);
    if ((v1 & 1) != 0) {
      v4 = *(_BYTE**)(a1 + 24);
    }
    if (*v4 != 7) {
      goto LABEL_17;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f49b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f49b0) != 0) {
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21f49b0);
  }
  if ((*(_BYTE*)(*msg_MessageManager_instance__ptr[0] + 15040) & 1) != 0) {
    v5 = *(char**)(*msg_MessageManager_instance__ptr[0] + 15056);
  }
  else {
    v5 = (char*)(*msg_MessageManager_instance__ptr[0] + 15041);
  }
  v6 = GameRoutine_a51530(*msg_MessageManager_instance__ptr[0], v5);
  GameRoutine_60a020((__int64)&GameData_21f4998, (__int64)v6);
  if ((GameData_21f4998 & 1) != 0) {
    return (void*)GameData_21f49a8;
  }
  else {
    return &GameData_21f4999;
  }
}

__int64 game_97bb30()
{
  GameData_21f49c8 = 0;
  GameData_21f49d0 = 0;
  *(__int64*)((char*)&GameData_21f49d0 + 5) = 0;
  GameData_21f49b8 = (__int64)(GameData_212dea8 + 2);
  GameData_21f49c0 = 0;
  return GameRoutine_2b0();
}

bool game_97e570(unsigned __int8* a1, __int64* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  __int64 v11;
  _BYTE* v13;
  __int64 v14;
  _BYTE* v15;

  v4 = *a2;
  if (*a2 != 0) {
    v8 = AssetTableFile_7e74e0(*a2);
    if (v8 == 0) {
      v9 = *(_QWORD*)(v4 + 392);
      if (v9 != 0) {
        v10 = *(unsigned __int8**)(v9 + 40);
        return game_97e640(a1, a3, v10, a4, 0xFFFFFFFF, 0);
      }
    LABEL_8:
      v10 = nullptr;
      return game_97e640(a1, a3, v10, a4, 0xFFFFFFFF, 0);
    }
    goto LABEL_7;
  }
  v11 = a2[1];
  if (v11 == 0) {
    goto LABEL_8;
  }
  v8 = AssetTableFile_7e94a0(a2[1]);
  if (v8 != 0) {
  LABEL_7:
    v10 = *(unsigned __int8**)(v8 + 32);
    return game_97e640(a1, a3, v10, a4, 0xFFFFFFFF, 0);
  }
  v10 = *(unsigned __int8**)(v11 + 8);
  if (v10 != nullptr) {
    v13 = *(_BYTE**)(v11 + 8);
    v14 = strchr(v13, 95);
    if (v14 != 0) {
      v15 = (_BYTE*)(v14 + 1);
    }
    else {
      v15 = v13;
    }
    if (*v15 == 62) {
      v10 = v15 + 1;
    }
    else {
      v10 = v13;
      if (v14 != 0) {
        v10 = (unsigned __int8*)(v14 + 1);
      }
    }
  }
  return game_97e640(a1, a3, v10, a4, 0xFFFFFFFF, 0);
}

void game_9901c0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;

  if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) != 0 &&
      *(_DWORD*)(*(_QWORD*)(*GameData_212ce98[0] + 160) + 528LL) == 0) {
    v15 = 6;
    v0 = game_UnitPool_GetFirst(&v15);
    if (v0 != 0) {
      v1 = *(_QWORD*)(v0 + 432);
      v2 = v0;
      if (v1 == 0) {
        v1 = *(_QWORD*)(v0 + 440);
        if (v1 != 0) {
          v3 = *(unsigned __int8*)(v1 + 16);
          if (v3 <= 8) {
            v13 = 24LL * *(unsigned __int8*)(v1 + 16) + 556024;
            while (1) {
              if (v3 <= 1) {
                v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v13);
                if (v1 != 0) {
                  break;
                }
              }
              ++v3;
              v13 += 24;
              if (v3 == 9) {
                goto LABEL_8;
              }
            }
          }
          else {
          LABEL_8:
            v1 = 0;
          }
        }
      }
      v4 = game_g_shared_system_skills_ptr;
      v5 = GameData_21309c8[0];
      while (1) {
      LABEL_11:
        v6 = v1;
        v14 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x90LL) + v4 + 4) & 0xFFF;
        if ((Unit_6cb080(v2, &v14) & 1) != 0) {
          v7 = *v5;
          if (*v5 != 0 && *(_BYTE*)(v7 + 8) == 1 &&
              (*(_BYTE*)(v7 + 9) & 1) == 0) {
            v8 = *(_QWORD*)(v2 + 440);
            if (v8 != 0 && *(unsigned __int8*)(v8 + 16) <= 8u &&
                game_map_UnitFlags_instance_ != 0) {
              v9 = *(unsigned __int8*)(v2 + 2088);
              if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v9) & 1) != 0) {
                *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v9) |= 2u;
              }
            }
          }
        }
        if (v6 == 0) {
          break;
        }
        v1 = *(_QWORD*)(v6 + 432);
        v2 = v6;
        if (v1 == 0) {
          v10 = *(_QWORD*)(v6 + 440);
          v2 = v6;
          if (v10 != 0) {
            v11 = *(unsigned __int8*)(v10 + 16);
            v1 = 0;
            v2 = v6;
            if (v11 <= 8) {
              v12 = 24LL * (unsigned int)v11 + 556024;
              while (1) {
                if (v11 <= 1) {
                  v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v12);
                  if (v1 != 0) {
                    break;
                  }
                }
                ++v11;
                v12 += 24;
                if (v11 == 9) {
                  v1 = 0;
                  v2 = v6;
                  goto LABEL_11;
                }
              }
              v2 = v6;
            }
          }
        }
      }
    }
  }
}

__int64 game_9903e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  char v22;

  v1 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  if (((1 << v1) & 6) == 0) {
    v2 = result;
    v3 = *GameData_212ce98[0];
    v4 = *(_BYTE*)(*GameData_212ce90[0] + v1 + 16) == 1
             ? *(unsigned __int8*)(*GameData_212ce90[0] + 24)
             : 0LL;
    LODWORD(v20_.v20[0]) = 6;
    v5 = *(_QWORD*)(v3 + 160);
    result = game_UnitPool_GetFirst((int*)v20_.v20);
    if (result != 0) {
      v6 = result;
      v7 = v5 + (v4 << 7) + 8;
      v8 = *(_QWORD*)(result + 432);
      if (v8 == 0) {
        v8 = *(_QWORD*)(result + 440);
        if (v8 != 0) {
          v9 = *(unsigned __int8*)(v8 + 16);
          if (v9 <= 8) {
            v19 = 24LL * *(unsigned __int8*)(v8 + 16) + 556024;
            while (1) {
              if (v9 <= 1) {
                v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v19);
                if (v8 != 0) {
                  break;
                }
              }
              ++v9;
              v19 += 24;
              if (v9 == 9) {
                goto LABEL_10;
              }
            }
          }
          else {
          LABEL_10:
            v8 = 0;
          }
        }
      }
      v10 = game_g_shared_system_skills_ptr;
    LABEL_13:
      while (1) {
        v11 = *(char*)(v6 + 584);
        v12 = *(char*)(v6 + 585);
        v13 = v8;
        v22 = 0;
        v20_.v20[0] = GameData_1f94310;
        v20_.v20[1] = v7;
        v20_.v20[2] = &v22;
        v20_.v21 = v20_.v20;
        Unit_6c8a80_alt1(v6, v11, v12, (__int64)v20_.v20);
        result = (__int64)v20_.v21;
        if (v20_.v21 == v20_.v20) {
          break;
        }
        if (v20_.v21 != nullptr) {
          v14 = 40;
        LABEL_17:
          result =
              (*(__int64 (**)(__int64))(*v20_.v21 + v14))((__int64)v20_.v21);
        }
        if (v22 == 1) {
          LODWORD(v20_.v20[0]) =
              *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x90LL) + v10 + 4) & 0xFFF;
          result = game_HasSkill((_QWORD*)(v6 + 1744), (unsigned int*)v20_.v20);
          if ((result & 1) == 0) {
            v15 = *(_QWORD*)(v2 + 32);
            v20_.v20[0] = v6;
            if (v15 == 0) {
              GameRoutine_60a310_alt1();
            }
            result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v15 + 48LL))(
                v15, v20_.v20);
          }
        }
        if (v13 == 0) {
          return result;
        }
        v8 = *(_QWORD*)(v13 + 432);
        v6 = v13;
        if (v8 == 0) {
          v16 = *(_QWORD*)(v13 + 440);
          v6 = v13;
          if (v16 != 0) {
            v17 = *(unsigned __int8*)(v16 + 16);
            v8 = 0;
            v6 = v13;
            if (v17 <= 8) {
              v18 = 24LL * (unsigned int)v17 + 556024;
              while (1) {
                if (v17 <= 1) {
                  v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v18);
                  if (v8 != 0) {
                    break;
                  }
                }
                ++v17;
                v18 += 24;
                if (v17 == 9) {
                  v8 = 0;
                  v6 = v13;
                  goto LABEL_13;
                }
              }
              v6 = v13;
            }
          }
        }
      }
      v14 = 32;
      goto LABEL_17;
    }
  }
  return result;
}

__int64* game_990940()
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d78,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4d78) != 0) {
    GameData_21f4d50 = (__int64)&GameData_1ad2b26;
    GameData_21f4d58 = (__int64)&GameData_1af14ee;
    GameData_21f4d60 = (__int64)&GameData_1aed8d9;
    GameData_21f4d68 = (__int64)&GameData_1a98e95;
    GameData_21f4d70 = (__int64)&GameData_1ae98ba;
    __cxa_guard_release(&GameData_21f4d78);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4d98) != 0) {
    v1 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    GameData_21f4d80 = (__int64)v1;
    v2 = GameData_21f4d68;
    GameData_21f4d88 = (__int64)(v1 + 5);
    GameData_21f4d90 = (__int64)(v1 + 5);
    v1[2] = GameData_21f4d60;
    v1[3] = v2;
    v1[4] = GameData_21f4d70;
    v3 = GameData_21f4d58;
    *v1 = GameData_21f4d50;
    v1[1] = v3;
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21f4d98);
  }
  return &GameData_21f4d80;
}

__int64 game_990a70(__int64 a1)
{
  __int64 v1;
  unsigned __int64* v2;
  __int64 v3;
  __int64 result;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (*v12)(_QWORD);
  __int64 v13;
  _QWORD* v14;

  v1 = *(_QWORD*)(a1 + 24);
  v3 = *(_QWORD*)(v1 + 16);
  v2 = (unsigned __int64*)(v1 + 16);
  if (v3 == 0) {
    v5 = *(_BYTE**)(a1 + 48);
    v6 = a1;
    if (v5 == nullptr || *v5 == 0 ||
        (LODWORD(a1) = game_990a70(a1), (int)a1 >= *(_DWORD*)(v6 + 60))) {
      if (*(_WORD*)(v6 + 72) == 0) {
        return *(unsigned int*)(v6 + 60);
      }
      v7 = *(_QWORD*)(v6 + 24);
      v8 = *(_QWORD*)(v7 + 160);
      v9 = *(_QWORD*)(v7 + 168);
      if (v9 == v8) {
        return *(unsigned int*)(v6 + 60);
      }
      while (1) {
        if (*(_QWORD*)v8 != 0) {
          v10 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v11 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)v8);
            if (v11 != 0) {
              v12 = *(__int64 (**)(_QWORD))(v11 + 72);
              v13 = *(_QWORD*)(v11 + 80);
              v14 = (_QWORD*)(v11 + (v13 >> 1));
              if ((v13 & 1) != 0) {
                v12 = *(__int64 (**)(_QWORD))((char*)v12 + *v14);
              }
              LOBYTE(a1) = v12(v14);
            }
            else {
              LOBYTE(a1) = 1;
            }
          }
          if (*(_BYTE*)(v8 + 16) != ((v10 == 0) | a1 & 1)) {
            break;
          }
        }
        v8 += 24;
        if (v8 == v9) {
          return *(unsigned int*)(v6 + 60);
        }
      }
    }
    return 0;
  }
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD**)(game_GameModeData_instance_ + 48), v2);
  if (result != 0) {
    return *(unsigned int*)(result + 32);
  }
  return result;
}

__int64 game_9953e0(__int64 a1)
{
  __int64 result;
  int* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  struct {
    _QWORD v11[48];
    int v12;
    char gap388_[4];
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    char gap464_[8];
    __int64 v22;
  } v11_;
  struct {
    unsigned __int64 v23;
    int v24;
    char v25;
  } v23_;

  result = *(_QWORD*)(a1 + 392);
  if (result != 0) {
    v11_.v11[25] = 0;
    v11_.v11[27] = 0;
    memset(v11_.v11, 0, 192);
    v11_.v12 = 1065353216;
    v3 = (int*)GameData_21d9d18;
    v4 = GameData_21d9d20;
    v11_.v11[40] = 0;
    v11_.v11[41] = 0;
    memset(&v11_.v11[43], 0, 40);
    v11_.v13 = 0;
    v11_.v14 = 0;
    v11_.v15 = 0;
    v11_.v16 = 0;
    v11_.v17 = 0;
    v11_.v18 = 0;
    v11_.v19 = 0;
    v11_.v20 = 0;
    v11_.v21 = 0;
    if (GameData_21d9d18 != GameData_21d9d20) {
      do {
        v5 = *v3++;
        *(_QWORD*)(GameData_21d9d00 + 8 * v5) = 0;
      } while (v3 != (int*)v4);
      result = *(_QWORD*)(a1 + 392);
      v3 = (int*)GameData_21d9d18;
    }
    GameData_21d9d20 = (__int64)v3;
    GameData_21d9d60 = 0;
    GameData_21d9d68 = 0;
    GameData_21d9d70 = 0;
    GameData_21d9d7c = 0;
    GameData_21d9d38 = GameData_21d9d30;
    GameData_21d9cf0 = GameData_21d9ce8;
    GameData_21d9d50 = GameData_21d9d48;
    GameData_21d9d78 = 8;
    GameRoutine_133e160(result, v11_.v11);
    v6 = *(_QWORD*)(a1 + 392);
    if (v6 != 0) {
      v7 = Troop_133e4e0(v6);
      v8 = v11_.v22;
      *(_QWORD*)(a1 + 8) = v7;
      *(_QWORD*)(a1 + 408) = v8;
      game_UnitActor_CreateMainCharacter(a1, (__int64)v11_.v11);
      UnitActor_819a50(a1);
      UnitActor_81cda0(a1, (__int128*)(*(_QWORD*)(a1 + 392) + 48LL), 0x0.0p+0f);
      v9 = *(_QWORD*)(a1 + 8);
      v23_.v25 = 0;
      v23_.v23 = 0xBF800000BF800000LL;
      v23_.v24 = 1065353216;
      v10 = UnitActor_819f40(v9);
      if (v10 != *(_DWORD*)(a1 + 16)) {
        UnitActor_81a540(a1, v10, (__int64)&v23_.v23);
      }
    }
    return TrickEntity_7d1480((__int64)v11_.v11);
  }
  return result;
}

__int64 game_996d60(__int64 a1, int a2, int a3)
{
  __int64** v3;
  __int64* v4;
  __int64* v5;
  int v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 (*v16)(_QWORD);
  __int64 v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64* v30;
  int v31;
  int v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int* v38;
  __int64 v39;
  __int64* v40;
  int v41;
  int v42;
  bool v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 result;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  _QWORD* v52;
  _DWORD* v53;
  __int64 v54;

  if (a3 <= a2) {
    return 0;
  }
  v3 = *(__int64***)(a1 + 40);
  v5 = *v3;
  v4 = v3[1];
  if (*v3 == v4) {
    return 0;
  }
  v6 = a3;
  v7 = 0;
  v8 = 0;
  v52 = nullptr;
  v9 = 0;
  v51 = 0;
  v53 = nullptr;
  v50 = 0;
  do {
    v54 = *v5;
    v10 = *(__int64**)(*v5 + 24);
    v11 = *v10;
    v12 = v10[1];
    if (v12 == *v10) {
    LABEL_8:
      if ((unsigned __int64)v52 >= v51) {
        v19 = (unsigned __int64)v52 - v8;
        v20 = ((__int64)v52 - v8) >> 3;
        v21 = v20 + 1;
        if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
          GameRoutine_998130();
        }
        if ((__int64)(v51 - v8) >> 2 > v21) {
          v21 = (__int64)(v51 - v8) >> 2;
        }
        if (v51 - v8 >= 0x7FFFFFFFFFFFFFF8LL) {
          v22 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v21;
        }
        if (v22 != 0) {
          if (v22 >> 61 != 0) {
            goto LABEL_71;
          }
          v23 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
        }
        else {
          v23 = 0;
        }
        v51 = v23 + 8 * v22;
        v24 = v23 + v19 - 8 * v20;
        *(_QWORD*)(v23 + v19) = v54;
        v52 = (_QWORD*)(v23 + v19 + 8);
        LOBYTE(a1) = memcpy_alt1(v24, v8, v19);
        if (v8 != 0) {
          v25 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v8);
        }
        v13 = v54;
        v8 = v24;
      }
      else {
        v13 = v54;
        *v52++ = v54;
      }
      v14 = v6 * (unsigned int)*(unsigned __int16*)(v13 + 48);
      if ((unsigned __int64)v53 < v9) {
        *v53++ = v14;
      }
      else {
        v26 = (unsigned __int64)v53 - v50;
        v27 = ((__int64)v53 - v50) >> 2;
        v28 = v27 + 1;
        if ((unsigned __int64)(v27 + 1) >> 62 != 0) {
          GameRoutine_6e5a20();
        }
        v29 = v9 - v50;
        v30 = v4;
        v31 = v7;
        v32 = v6;
        v33 = v8;
        if (v29 >> 1 > v28) {
          v28 = v29 >> 1;
        }
        if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFFCLL) {
          v34 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v34 = v28;
        }
        if (v34 != 0) {
          if (v34 >> 62 != 0) {
          LABEL_71:
            GameRoutine_60a210();
          }
          v35 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v34, 16, 0);
        }
        else {
          v35 = 0;
        }
        v36 = v35 + v26 - 4 * v27;
        *(_DWORD*)(v35 + v26) = v14;
        v49 = v35 + 4 * v34;
        v53 = (_DWORD*)(v35 + v26 + 4);
        LOBYTE(a1) = memcpy_alt1(v36, v50, v26);
        if (v50 != 0) {
          v37 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v37 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v50);
        }
        v8 = v33;
        v6 = v32;
        v7 = v31;
        v4 = v30;
        v9 = v49;
        v13 = v54;
        v50 = v36;
      }
      v7 += *(unsigned __int16*)(v13 + 48);
    }
    else {
      while (1) {
        if (*(_QWORD*)v11 != 0) {
          v14 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v15 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)v11);
            if (v15 != 0) {
              v16 = *(__int64 (**)(_QWORD))(v15 + 72);
              v17 = *(_QWORD*)(v15 + 80);
              v18 = (_QWORD*)(v15 + (v17 >> 1));
              if ((v17 & 1) != 0) {
                v16 = *(__int64 (**)(_QWORD))((char*)v16 + *v18);
              }
              LOBYTE(a1) = v16(v18);
            }
            else {
              LOBYTE(a1) = 1;
            }
          }
          if (*(_BYTE*)(v11 + 16) != ((v14 == 0) | a1 & 1)) {
            break;
          }
        }
        v11 += 24;
        if (v11 == v12) {
          goto LABEL_8;
        }
      }
    }
    ++v5;
  } while (v5 != v4);
  v38 = (int*)v50;
  if (v7 < 1 || v53 == (_DWORD*)v50) {
    if (v50 == 0) {
      if (v8 != 0) {
        LOBYTE(v44) = 1;
        goto LABEL_62;
      }
      return 0;
    }
  LABEL_57:
    v44 = 1;
  }
  else {
    v39 = ((__int64)v53 - v50) >> 2;
    v40 = (__int64*)v8;
    v41 = v7 * a2;
    while (1) {
      v42 = *v38++;
      v43 = __OFSUB__(v41, v42);
      v41 -= v42;
      if (v41 < 0 != v43) {
        break;
      }
      ++v40;
      if (--v39 == 0) {
        goto LABEL_57;
      }
    }
    v14 = *v40;
    v44 = 0;
  }
  v45 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v45 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v50);
  if (v8 == 0) {
    result = v14;
    if (v44 == 0) {
      return result;
    }
    return 0;
  }
LABEL_62:
  v46 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v46 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v8);
  result = v14;
  if ((v44 & 1) != 0) {
    return 0;
  }
  return result;
}

__int64* game_9a28e0(int a1)
{
  int v2;
  int v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f5248,
                            memory_order_acquire) &
       1) != 0) {
    return &GameData_21f4da8[2 * a1];
  }
  v2 = __cxa_guard_acquire(&GameData_21f5248);
  v3 = a1;
  if (v2 != 0) {
    GameData_21f4db0 = (__int64)&GameData_1af4ee0;
    GameData_21f4da8[0] = game_HashString((__int64)&GameData_1af4ee0);
    GameData_21f4dc0 = (__int64)&GameData_1a98e9f;
    GameData_21f4db8 = game_HashString((__int64)&GameData_1a98e9f);
    GameData_21f4dd0 = (__int64)&GameData_1a94dd8;
    GameData_21f4dc8 = game_HashString((__int64)&GameData_1a94dd8);
    GameData_21f4de0 = (__int64)&GameData_1ad2b30;
    GameData_21f4dd8 = game_HashString((__int64)&GameData_1ad2b30);
    GameData_21f4df0 = (__int64)&GameData_1afcf5d;
    GameData_21f4de8 = game_HashString((__int64)&GameData_1afcf5d);
    GameData_21f4e00 = (__int64)&GameData_1ae5a2f;
    GameData_21f4df8 = game_HashString((__int64)&GameData_1ae5a2f);
    GameData_21f4e10 = (__int64)&GameData_1a94de6;
    GameData_21f4e08 = game_HashString((__int64)&GameData_1a94de6);
    GameData_21f4e20 = (__int64)&GameData_1ae98c4;
    GameData_21f4e18 = game_HashString((__int64)&GameData_1ae98c4);
    GameData_21f4e30 = (__int64)&GameData_1a90ea3;
    GameData_21f4e28 = game_HashString((__int64)&GameData_1a90ea3);
    GameData_21f4e40 = (__int64)&GameData_1ab7dd7;
    GameData_21f4e38 = game_HashString((__int64)&GameData_1ab7dd7);
    GameData_21f4e50 = (__int64)&GameData_1ada5d7;
    GameData_21f4e48 = game_HashString((__int64)&GameData_1ada5d7);
    GameData_21f4e60 = (__int64)&GameData_1ad2b3e;
    GameData_21f4e58 = game_HashString((__int64)&GameData_1ad2b3e);
    GameData_21f4e70 = (__int64)&GameData_1aed8e3;
    GameData_21f4e68 = game_HashString((__int64)&GameData_1aed8e3);
    GameData_21f4e80 = (__int64)&GameData_1afcf74;
    GameData_21f4e78 = game_HashString((__int64)&GameData_1afcf74);
    GameData_21f4e90 = (__int64)&GameData_1af14f8;
    GameData_21f4e88 = game_HashString((__int64)&GameData_1af14f8);
    GameData_21f4ea0 = (__int64)&GameData_1abbcd1;
    GameData_21f4e98 = game_HashString((__int64)&GameData_1abbcd1);
    GameData_21f4eb0 = (__int64)&GameData_1ac6bcb;
    GameData_21f4ea8 = game_HashString((__int64)&GameData_1ac6bcb);
    GameData_21f4ec0 = (__int64)&GameData_1a98ead;
    GameData_21f4eb8 = game_HashString((__int64)&GameData_1a98ead);
    GameData_21f4ed0 = (__int64)&GameData_1af9076;
    GameData_21f4ec8 = game_HashString((__int64)&GameData_1af9076);
    GameData_21f4ee0 = (__int64)&GameData_1af52aa;
    GameData_21f4ed8 = game_HashString((__int64)&GameData_1af52aa);
    GameData_21f4ef0 = (__int64)&GameData_1acad4c;
    GameData_21f4ee8 = game_HashString((__int64)&GameData_1acad4c);
    GameData_21f4f00 = (__int64)&GameData_1abfaff;
    GameData_21f4ef8 = game_HashString((__int64)&GameData_1abfaff);
    GameData_21f4f10 = (__int64)&GameData_1abbce1;
    GameData_21f4f08 = game_HashString((__int64)&GameData_1abbce1);
    GameData_21f4f20 = (__int64)&GameData_1af1506;
    GameData_21f4f18 = game_HashString((__int64)&GameData_1af1506);
    GameData_21f4f30 = (__int64)&GameData_1ae20ad;
    GameData_21f4f28 = game_HashString((__int64)&GameData_1ae20ad);
    GameData_21f4f40 = (__int64)&GameData_1ae20cc;
    GameData_21f4f38 = game_HashString((__int64)&GameData_1ae20cc);
    GameData_21f4f50 = (__int64)&GameData_1ae98f1;
    GameData_21f4f48 = game_HashString((__int64)&GameData_1ae98f1);
    GameData_21f4f60 = (__int64)&GameData_1a94dfd;
    GameData_21f4f58 = game_HashString((__int64)&GameData_1a94dfd);
    GameData_21f4f70 = (__int64)&GameData_1ab004e;
    GameData_21f4f68 = game_HashString((__int64)&GameData_1ab004e);
    GameData_21f4f80 = (__int64)&GameData_1ada5ec;
    GameData_21f4f78 = game_HashString((__int64)&GameData_1ada5ec);
    GameData_21f4f90 = (__int64)&GameData_1a94e12;
    GameData_21f4f88 = game_HashString((__int64)&GameData_1a94e12);
    GameData_21f4fa0 = (__int64)&GameData_1a8d53e;
    GameData_21f4f98 = game_HashString((__int64)&GameData_1a8d53e);
    GameData_21f4fb0 = (__int64)&GameData_1ade1da;
    GameData_21f4fa8 = game_HashString((__int64)&GameData_1ade1da);
    GameData_21f4fc0 = (__int64)&GameData_1a9caaf;
    GameData_21f4fb8 = game_HashString((__int64)&GameData_1a9caaf);
    GameData_21f4fd0 = (__int64)&GameData_1ada601;
    GameData_21f4fc8 = game_HashString((__int64)&GameData_1ada601);
    GameData_21f4fe0 = (__int64)&GameData_1a98eba;
    GameData_21f4fd8 = game_HashString((__int64)&GameData_1a98eba);
    GameData_21f4ff0 = (__int64)&GameData_1a90ed0;
    GameData_21f4fe8 = game_HashString((__int64)&GameData_1a90ed0);
    GameData_21f5000 = (__int64)&GameData_1af1528;
    GameData_21f4ff8 = game_HashString((__int64)&GameData_1af1528);
    GameData_21f5010 = (__int64)&GameData_1aa0b0b;
    GameData_21f5008 = game_HashString((__int64)&GameData_1aa0b0b);
    GameData_21f5020 = (__int64)&GameData_1abfb2a;
    GameData_21f5018 = game_HashString((__int64)&GameData_1abfb2a);
    GameData_21f5030 = (__int64)&GameData_1a85767;
    GameData_21f5028 = game_HashString((__int64)&GameData_1a85767);
    GameData_21f5040 = (__int64)&GameData_1ae20e1;
    GameData_21f5038 = game_HashString((__int64)&GameData_1ae20e1);
    GameData_21f5050 = (__int64)&GameData_1ae9906;
    GameData_21f5048 = game_HashString((__int64)&GameData_1ae9906);
    GameData_21f5060 = (__int64)&GameData_1af1540;
    GameData_21f5058 = game_HashString((__int64)&GameData_1af1540);
    GameData_21f5070 = (__int64)&GameData_1ab3c96;
    GameData_21f5068 = game_HashString((__int64)&GameData_1ab3c96);
    GameData_21f5080 = (__int64)&GameData_1ad2a61;
    GameData_21f5078 = game_HashString((__int64)&GameData_1ad2a61);
    GameData_21f5090 = (__int64)&GameData_1a9cac4;
    GameData_21f5088 = game_HashString((__int64)&GameData_1a9cac4);
    GameData_21f50a0 = (__int64)&GameData_1aed8f8;
    GameData_21f5098 = game_HashString((__int64)&GameData_1aed8f8);
    GameData_21f50b0 = (__int64)&GameData_1aa85f6;
    GameData_21f50a8 = game_HashString((__int64)&GameData_1aa85f6);
    GameData_21f50c0 = (__int64)&GameData_1aed905;
    GameData_21f50b8 = game_HashString((__int64)&GameData_1aed905);
    GameData_21f50d0 = (__int64)&GameData_1aceeaa;
    GameData_21f50c8 = game_HashString((__int64)&GameData_1aceeaa);
    GameData_21f50e0 = (__int64)&GameData_1aa489e;
    GameData_21f50d8 = game_HashString((__int64)&GameData_1aa489e);
    GameData_21f50f0 = (__int64)&GameData_1ae20fc;
    GameData_21f50e8 = game_HashString((__int64)&GameData_1ae20fc);
    GameData_21f5100 = (__int64)&GameData_1abbd06;
    GameData_21f50f8 = game_HashString((__int64)&GameData_1abbd06);
    GameData_21f5110 = (__int64)&GameData_1ac6bdb;
    GameData_21f5108 = game_HashString((__int64)&GameData_1ac6bdb);
    GameData_21f5120 = (__int64)&GameData_1aac1f9;
    GameData_21f5118 = game_HashString((__int64)&GameData_1aac1f9);
    GameData_21f5130 = (__int64)&GameData_1a90ee8;
    GameData_21f5128 = game_HashString((__int64)&GameData_1a90ee8);
    GameData_21f5140 = (__int64)&GameData_1a85781;
    GameData_21f5138 = game_HashString((__int64)&GameData_1a85781);
    GameData_21f5150 = (__int64)&GameData_1ad6755;
    GameData_21f5148 = game_HashString((__int64)&GameData_1ad6755);
    GameData_21f5160 = (__int64)&GameData_1ae2119;
    GameData_21f5158 = game_HashString((__int64)&GameData_1ae2119);
    GameData_21f5170 = (__int64)&GameData_1ab3ca7;
    GameData_21f5168 = game_HashString((__int64)&GameData_1ab3ca7);
    GameData_21f5180 = (__int64)&GameData_1ade1ef;
    GameData_21f5178 = game_HashString((__int64)&GameData_1ade1ef);
    GameData_21f5190 = (__int64)&GameData_1aa48af;
    GameData_21f5188 = game_HashString((__int64)&GameData_1aa48af);
    GameData_21f51a0 = (__int64)&GameData_1af9095;
    GameData_21f5198 = game_HashString((__int64)&GameData_1af9095);
    GameData_21f51b0 = (__int64)&GameData_1a8d553;
    GameData_21f51a8 = game_HashString((__int64)&GameData_1a8d553);
    GameData_21f51c0 = (__int64)&GameData_1ada616;
    GameData_21f51b8 = game_HashString((__int64)&GameData_1ada616);
    GameData_21f51d0 = (__int64)&GameData_1abfb42;
    GameData_21f51c8 = game_HashString((__int64)&GameData_1abfb42);
    GameData_21f51e0 = (__int64)&GameData_1a85792;
    GameData_21f51d8 = game_HashString((__int64)&GameData_1a85792);
    GameData_21f51f0 = (__int64)&GameData_1ab7f00;
    GameData_21f51e8 = game_HashString((__int64)&GameData_1ab7f00);
    GameData_21f5200 = (__int64)&GameData_1a9cae2;
    GameData_21f51f8 = game_HashString((__int64)&GameData_1a9cae2);
    GameData_21f5210 = (__int64)&GameData_1a9cb1c;
    GameData_21f5208 = game_HashString((__int64)&GameData_1a9cb1c);
    GameData_21f5220 = (__int64)&GameData_1ae9924;
    GameData_21f5218 = game_HashString((__int64)&GameData_1ae9924);
    GameData_21f5230 = (__int64)&GameData_1ab7c9d;
    GameData_21f5228 = game_HashString((__int64)&GameData_1ab7c9d);
    GameData_21f5240 = (__int64)&GameData_1a857b0;
    GameData_21f5238 = game_HashString((__int64)&GameData_1a857b0);
    __cxa_guard_release(&GameData_21f5248);
    v3 = a1;
  }
  return &GameData_21f4da8[2 * v3];
}

__int64* game_9a3180()
{
  __int64* v0;
  __int64 v1;
  __int64* v2;
  int v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64 v14;
  int v15;
  __int64* v16;
  __int64 v17;
  int v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  int v22;
  __int64* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  int v28;
  __int64* v29;
  __int64 v30;
  int v31;
  __int64* v32;
  __int64 v33;
  int v34;
  __int64* v35;
  __int64 v36;
  int v37;
  __int64* result;
  _QWORD v39[2];

  v0 = snd_g_fileIndex_ptr[0];
  v1 = *(_QWORD*)(*snd_g_fileIndex_ptr[0] + 4752);
  v3 = v1 != 0 &&
       (v39[0] = &GameData_1ac6ca2, v39[1] = 3,
        (v2 = GameRoutine_18dc920((_QWORD*)(v1 + 24), v39)) != nullptr) &&
       *((_DWORD*)v2 + 10) >= 0;
  v4 = game_9a28e0(50);
  game_VariableManager_SetFlag((__int64)v4, v3);
  v5 = *(_QWORD*)(*v0 + 4752);
  v6 = v5 == 0 || Registration_18d7720(v5, 0, 2) != 0;
  v7 = game_9a28e0(51);
  game_VariableManager_SetFlag((__int64)v7, v6);
  v8 = *(_QWORD*)(*v0 + 4752);
  v9 = v8 == 0 || Registration_18d7720(v8, 0, 3) != 0;
  v10 = game_9a28e0(52);
  game_VariableManager_SetFlag((__int64)v10, v9);
  v11 = *(_QWORD*)(*v0 + 4752);
  v12 = v11 == 0 || Registration_18d7720(v11, 0, 4) != 0;
  v13 = game_9a28e0(53);
  game_VariableManager_SetFlag((__int64)v13, v12);
  v14 = *(_QWORD*)(*v0 + 4752);
  v15 = v14 == 0 || Registration_18d7720(v14, 0, 5) != 0;
  v16 = game_9a28e0(54);
  game_VariableManager_SetFlag((__int64)v16, v15);
  v17 = *(_QWORD*)(*v0 + 4752);
  v18 = v17 == 0 || Registration_18d7720(v17, 0, 6) != 0;
  v19 = game_9a28e0(55);
  game_VariableManager_SetFlag((__int64)v19, v18);
  v20 = *(_QWORD*)(*v0 + 4752);
  v22 = v20 != 0 &&
        (v39[0] = &GameData_1ac6ca2, v39[1] = 3,
         (v21 = GameRoutine_18dc920((_QWORD*)(v20 + 24), v39)) != nullptr) &&
        *((_DWORD*)v21 + 10) >= 0;
  v23 = game_9a28e0(56);
  if (game_GameModeData_instance_ != 0) {
    GameVariable_828700(game_GameModeData_instance_ + 40,
                        (unsigned __int64*)v23, v22);
  }
  v24 = *(_QWORD*)(*v0 + 4752);
  v25 = v24 == 0 || Registration_18d7720(v24, 0, 2) != 0;
  v26 = game_9a28e0(57);
  if (game_GameModeData_instance_ != 0) {
    GameVariable_828700(game_GameModeData_instance_ + 40,
                        (unsigned __int64*)v26, v25);
  }
  v27 = *(_QWORD*)(*v0 + 4752);
  v28 = v27 == 0 || Registration_18d7720(v27, 0, 3) != 0;
  v29 = game_9a28e0(58);
  if (game_GameModeData_instance_ != 0) {
    GameVariable_828700(game_GameModeData_instance_ + 40,
                        (unsigned __int64*)v29, v28);
  }
  v30 = *(_QWORD*)(*v0 + 4752);
  v31 = v30 == 0 || Registration_18d7720(v30, 0, 4) != 0;
  v32 = game_9a28e0(59);
  if (game_GameModeData_instance_ != 0) {
    GameVariable_828700(game_GameModeData_instance_ + 40,
                        (unsigned __int64*)v32, v31);
  }
  v33 = *(_QWORD*)(*v0 + 4752);
  v34 = v33 == 0 || Registration_18d7720(v33, 0, 5) != 0;
  v35 = game_9a28e0(60);
  if (game_GameModeData_instance_ != 0) {
    GameVariable_828700(game_GameModeData_instance_ + 40,
                        (unsigned __int64*)v35, v34);
  }
  v36 = *(_QWORD*)(*v0 + 4752);
  v37 = v36 == 0 || Registration_18d7720(v36, 0, 6) != 0;
  result = game_9a28e0(61);
  if (game_GameModeData_instance_ != 0) {
    return (__int64*)GameVariable_828700(game_GameModeData_instance_ + 40,
                                         (unsigned __int64*)result, v37);
  }
  return result;
}

__int64 game_9a6420()
{
  GameData_21f5260 = 0;
  GameData_21f5268 = 0;
  GameData_21f5250[0] = 0;
  GameData_21f5258 = 0;
  GameData_21f5270 = 1065353216;
  GameData_21f5278 = 0;
  GameData_21f5280 = 0;
  GameData_21f5288 = 0;
  GameData_21f5290 = 0;
  GameData_21f5298 = 1065353216;
  GameData_21f52a0 = 0;
  GameData_21f52a8 = 0;
  GameData_21f52b0 = 0;
  GameData_21f52b8 = 0;
  GameData_21f52c0 = 1065353216;
  GameData_21f52c8 = 0;
  GameData_21f52d0 = 0;
  GameData_21f52d8 = 0;
  GameData_21f52e0 = 0;
  GameData_21f52e8 = 1065353216;
  GameData_21f52f0 = 0;
  GameData_21f52f8 = 0;
  GameData_21f5300 = 0;
  GameData_21f5308 = 0;
  GameData_21f5310 = 1065353216;
  GameData_21f5318 = 0;
  GameData_21f5320 = 0;
  GameData_21f5328 = 0;
  GameData_21f5330 = 0;
  GameData_21f5338 = 1065353216;
  GameData_21f5340 = 0;
  GameData_21f5348 = 0;
  GameData_21f5350 = 0;
  GameData_21f5358 = 0;
  GameData_21f5360 = 1065353216;
  GameData_21f5368 = 0;
  GameData_21f5370 = 0;
  GameData_21f5378 = 0;
  GameData_21f5380 = 0;
  GameData_21f5388 = 1065353216;
  GameRoutine_2b0();
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
