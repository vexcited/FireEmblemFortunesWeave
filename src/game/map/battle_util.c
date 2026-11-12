#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6fc510(_QWORD);
__int64 GameRoutine_6fc7a0(_QWORD, _QWORD);
__int64 GameRoutine_6fc960(_QWORD, _QWORD);
__int64 UnitItem_6e8bc0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_map_BattleUtil_EachFactorSkill_7a8e00_alt1(
    _QWORD, _QWORD,
    _QWORD) __asm__("game_map_BattleUtil_EachFactorSkill_7a8e00");
extern __int64 (*GameData_1f98f48[])();
extern __int64 (*GameData_1f98fc8[])();
extern __int64 (*GameData_1f99048[])();
extern __int64 (*GameData_1f99148[])();
extern __int64 (*GameData_1f991c8[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 game_map_BattleUtil_EachFactorSkill_7a8c20(__int64 result, __int64 a2,
                                                   char a3, __int64 a4,
                                                   __int64 a5);
__int64 game_map_BattleUtil_EachFactorSkill_7a8e00(__int64 result, __int64 a2,
                                                   __int64 a3);
__int64 game_map_BattleUtil_GetRevengeSkill(__int64 result, __int64 a2,
                                            __int64 a3);
__int64 game_map_BattleUtil_GetFactorSkill_lambda0_Invoke_7ab080(__int64 result,
                                                                 _DWORD* a2);
__int64 game_map_BattleUtil_GetFactorSkill_lambda0_Invoke_7ab1f0(__int64 result,
                                                                 _DWORD* a2);
_QWORD* game_map_BattleUtil_EachFactorSkill_lambda0_Clone_7ab370(_QWORD* a1);
_QWORD*
game_map_BattleUtil_EachFactorSkill_lambda0_CloneInto_7ab420(_QWORD* result,
                                                             _QWORD* a2);
__int64
game_map_BattleUtil_EachFactorSkill_lambda0_Invoke_7ab4f0(__int64 a1,
                                                          unsigned __int16* a2);
_QWORD* game_map_BattleUtil_EachFactorSkill_lambda0_Clone_7ab660(_QWORD* a1);
_QWORD*
game_map_BattleUtil_EachFactorSkill_lambda0_CloneInto_7ab710(_QWORD* result,
                                                             _QWORD* a2);
__int64
game_map_BattleUtil_EachFactorSkill_lambda0_Invoke_7ab7e0(__int64 result,
                                                          _DWORD* a2);
_QWORD* game_map_BattleUtil_EachFactorSkill_lambda1_Clone(_QWORD* a1);
_QWORD* game_map_BattleUtil_EachFactorSkill_lambda1_CloneInto(_QWORD* result,
                                                              _QWORD* a2);
__int64 game_map_BattleUtil_EachFactorSkill_lambda1_Invoke(__int64 result,
                                                           _DWORD* a2);
_QWORD* game_map_BattleUtil_GetHealPower_lambda0_Clone(_QWORD* a1);
__int64 game_map_BattleUtil_GetHealPower_lambda0_CloneInto(_QWORD* a1,
                                                           _QWORD* a2);
__int64 game_map_BattleUtil_GetHealPower_lambda0_Invoke(__int64 a1, _DWORD* a2,
                                                        __int64 a3);
__int64 game_map_BattleUtil_GetRevengeSkill_lambda0_Invoke(__int64 result,
                                                           _DWORD* a2);
__attribute__((swiftcall)) void MapUtil_752e60(PSEUDO_X8, __int64 result,
                                               __int64);
__int64* game_8224a0(unsigned __int8);
__int64* game_UnitPool_Get(_BYTE*);
__int64 BattleUtil_7a9bf0(__int64, char, char);
__int64 GameRoutine_1120520();
__int64 GameRoutine_11206a0();
__int64 GameRoutine_790080(_QWORD);
__int64 GameRoutine_7ae5a0();
__int64 GameRoutine_7ae9a0();
__int64 GameRoutine_7ae9c0();
__int64 GameRoutine_7aeaa0();
__int64 GameRoutine_7aeb00();
__int64 GameRoutine_7af0c0();
__int64 GameRoutine_7af120();
__int64 GameRoutine_7afa60();
__int64 GameRoutine_7afbe0();
__int64 GameRoutine_7afc60();
__int64 GameRoutine_7afca0();
__int64 GameRoutine_7afdb0();
__int64 GameRoutine_7afdf0();
__int64 GameRoutine_7b00b0();
__int64 GameRoutine_7b00c0();
__int64 GameRoutine_7b0210();
__int64 GameRoutine_7b0670();
__int64 GameRoutine_7b0700();
__int64 GameRoutine_7b11a0();
__int64 GameRoutine_7b11b0();
__int64 GameRoutine_7b1220();
__int64 GameRoutine_7b13d0();
__int64 GameRoutine_7b18a0();
__int64 GameRoutine_7b1f30();
__int64 GameRoutine_7b20c0();
__int64 GameRoutine_7b2860();
__int64 GameRoutine_7b2870();
__int64 GameRoutine_7b2960();
__int64 GameRoutine_7b2c20();
__int64 GameRoutine_7b2c80();
__int64 GameRoutine_7b2dc0();
__int64 GameRoutine_7b2e60();
__int64 GameRoutine_7b2ed0();
__int64 GameRoutine_7b3050();
__int64 GameRoutine_7b3870();
__int64 GameRoutine_7b3ac0();
__int64 GameRoutine_7b3bb0();
__int64 GameRoutine_7b3ef0();
__int64 GameRoutine_7b3f20();
__int64 GameRoutine_7b4200();
__int64 GameRoutine_7b4390();
__int64 GameRoutine_7b43b0();
__int64 GameRoutine_7b44d0();
__int64 GameRoutine_7b4550();
__int64 GameRoutine_7b47b0();
__int64 GameRoutine_7b4a20();
__int64 GameRoutine_7b4a30();
__int64 GameRoutine_7b4a90();
__int64 GameRoutine_7b5630();
__int64 GameRoutine_7b5870();
__int64 GameRoutine_7b5890();
__int64 GameRoutine_7b58a0();
__int64 GameRoutine_7b5a10();
__int64 GameRoutine_7b5ac0();
__int64 GameRoutine_7b5ad0();
__int64 GameRoutine_7b5b00();
__int64 GameRoutine_7b5bd0();
__int64 GameRoutine_7b5c80();
__int64 GameRoutine_7b5d70();
__int64 GameRoutine_7b5e20();
__int64 GameRoutine_7b5e30();
__int64 GameRoutine_7b60e0();
__int64 GameRoutine_7b62c0();
__int64 GameRoutine_7b6310();
__int64 GameRoutine_8517e0(__int64 result, int*, __int64, char);
__int64 MapInfo_825040(_QWORD, _QWORD);
__int64 Mind_743fc0(__int64, char*);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ProcInst_657850_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD) __asm__("ProcInst_657850");
__int64 ProcMapSeqBattle_7b0220();
__int64 ProcMapSeqBattle_7b06d0();
__int64 ProcMapSeqBattle_7b12b0();
__int64 ProcMapSeqBattle_7b1520();
__int64 ProcMapSeqBattle_7b16f0();
__int64 ProcMapSeqBattle_7b5c20();
__int64 UnitSkillList_84cc00(__int64*, _DWORD*, __int64);
__int64 UnitSkillList_84cf20(__int64, __int64, char);
__int64 UnitSkillList_84d980(__int64*, unsigned int*);
__int64 UnitSkillList_84e640(__int64 result);
__int64 UnitSkillList_84e760(__int64 result);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_ProcInst_Register_alt1(void) __asm__("game_ProcInst_Register");
__int64 game_UnitPool_Get_alt1(_QWORD) __asm__("game_UnitPool_Get");
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_map_anonymous_7b1e60();
__int64 game_map_anonymous_7b1f40();
__int64 game_map_anonymous_7b2f00();
__int64 game_map_anonymous_7b3130();
__int64 game_map_anonymous_7b3f80();
__int64 game_map_anonymous_7b4560();
__int64 game_map_anonymous_7b4800();
__int64 game_map_anonymous_7b4b00();
__int64 game_map_anonymous_7b5500();
__int64 game_map_anonymous_7b5740();
__int64 game_map_anonymous_ProcMapSeqBattle_BlowMove();
__int64 game_map_anonymous_ProcMapSeqBattle_RushCommit();
__int64 game_map_anonymous_ProcMapSeqBattle_RushEnd();
__int64 game_map_anonymous_ProcMapSeqBattle_TryNotice();
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
__n128 nn_os_UnlockMutex(_QWORD);
extern _BYTE* GameData_212d170;
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1aa0752;
extern _UNKNOWN GameData_1ae9494;
extern _UNKNOWN GameData_21c6868;
extern _UNKNOWN GameData_21d8770;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1f98ec8[])();
extern __int64 (*GameData_1f99bf8[])();
extern __int64 (*GameData_212c710[3])();
extern __int64 (*GameData_212d278)();
extern __int64 (*ProcMapSeqBattle_Destructor_7ba8e0_ptr[])();
extern __int64 (*game_map_ProcEventBattle_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqBattle_vtable[])();
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cff8[3];
extern __int64* GameData_212d000[2];
extern __int64* GameData_212d570[7];
extern __int64* GameData_212ddb8[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c608[2];
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
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21d6238;
extern __int64 GameData_21d6240;
extern __int64 GameData_21d6248;
extern __int64 GameData_21d6258;
extern __int64 GameData_21d6268;
extern __int64 GameData_21d6278;
extern __int64 GameData_21d6280;
extern __int64 GameData_21d6288;
extern __int64 GameData_21d6298;
extern __int64 GameData_21d62a8;
extern __int64 GameData_21d62b8;
extern __int64 GameData_21d62c0;
extern __int64 GameData_21d62c8;
extern __int64 GameData_21d62d8;
extern __int64 GameData_21d62e8;
extern __int64 GameData_21d62f8;
extern __int64 GameData_21d6300;
extern __int64 GameData_21d6308;
extern __int64 GameData_21d6318;
extern __int64 GameData_21d6328;
extern __int64 GameData_21d6338;
extern __int64 GameData_21d6340;
extern __int64 GameData_21d6348;
extern __int64 GameData_21d6358;
extern __int64 GameData_21d6368;
extern __int64 GameData_21d6378;
extern __int64 GameData_21d6380;
extern __int64 GameData_21d6388;
extern __int64 GameData_21d6398;
extern __int64 GameData_21d63a8;
extern __int64 GameData_21d63b8;
extern __int64 GameData_21d63c0;
extern __int64 GameData_21d63c8;
extern __int64 GameData_21d63d8;
extern __int64 GameData_21d63e8;
extern __int64 GameData_21d63f8;
extern __int64 GameData_21d6400;
extern __int64 GameData_21d6408;
extern __int64 GameData_21d6418;
extern __int64 GameData_21d6428;
extern __int64 GameData_21d6438;
extern __int64 GameData_21d6440;
extern __int64 GameData_21d6448;
extern __int64 GameData_21d6458;
extern __int64 GameData_21d6468;
extern __int64 GameData_21d6478;
extern __int64 GameData_21d6480;
extern __int64 GameData_21d6488;
extern __int64 GameData_21d6498;
extern __int64 GameData_21d64a8;
extern __int64 GameData_21d64b8;
extern __int64 GameData_21d64c0;
extern __int64 GameData_21d64c8;
extern __int64 GameData_21d64d8;
extern __int64 GameData_21d64e8;
extern __int64 GameData_21d64f8;
extern __int64 GameData_21d6500;
extern __int64 GameData_21d6508;
extern __int64 GameData_21d6518;
extern __int64 GameData_21d6528;
extern __int64 GameData_21d6538;
extern __int64 GameData_21d6540;
extern __int64 GameData_21d6548;
extern __int64 GameData_21d6558;
extern __int64 GameData_21d6568;
extern __int64 GameData_21d6578;
extern __int64 GameData_21d6580;
extern __int64 GameData_21d6588;
extern __int64 GameData_21d6598;
extern __int64 GameData_21d65a8;
extern __int64 GameData_21d65b8;
extern __int64 GameData_21d65c0;
extern __int64 GameData_21d65c8;
extern __int64 GameData_21d65d8;
extern __int64 GameData_21d65e8;
extern __int64 GameData_21d65f8;
extern __int64 GameData_21d6600;
extern __int64 GameData_21d6608;
extern __int64 GameData_21d6618;
extern __int64 GameData_21d6628;
extern __int64 GameData_21d6638;
extern __int64 GameData_21d6640;
extern __int64 GameData_21d6648;
extern __int64 GameData_21d6658;
extern __int64 GameData_21d6668;
extern __int64 GameData_21d6678;
extern __int64 GameData_21d6680;
extern __int64 GameData_21d6688;
extern __int64 GameData_21d6698;
extern __int64 GameData_21d66a8;
extern __int64 GameData_21d66b8;
extern __int64 GameData_21d66c0;
extern __int64 GameData_21d66c8;
extern __int64 GameData_21d66d8;
extern __int64 GameData_21d66e8;
extern __int64 GameData_21d66f8;
extern __int64 GameData_21d6700;
extern __int64 GameData_21d6708;
extern __int64 GameData_21d6718;
extern __int64 GameData_21d6728;
extern __int64 GameData_21d6738;
extern __int64 GameData_21d6740;
extern __int64 GameData_21d6748;
extern __int64 GameData_21d6758;
extern __int64 GameData_21d6768;
extern __int64 GameData_21d6778;
extern __int64 GameData_21d6780;
extern __int64 GameData_21d6788;
extern __int64 GameData_21d6798;
extern __int64 GameData_21d67a8;
extern __int64 GameData_21d67b8;
extern __int64 GameData_21d67c0;
extern __int64 GameData_21d67c8;
extern __int64 GameData_21d67d8;
extern __int64 GameData_21d67e8;
extern __int64 GameData_21d67f8;
extern __int64 GameData_21d6800;
extern __int64 GameData_21d6808;
extern __int64 GameData_21d6818;
extern __int64 GameData_21d6828;
extern __int64 GameData_21d6838;
extern __int64 GameData_21d6840;
extern __int64 GameData_21d6848;
extern __int64 GameData_21d6858;
extern __int64 GameData_21d6868;
extern __int64 GameData_21d6878;
extern __int64 GameData_21d6880;
extern __int64 GameData_21d6888;
extern __int64 GameData_21d6898;
extern __int64 GameData_21d68a8;
extern __int64 GameData_21d68b8;
extern __int64 GameData_21d68c0;
extern __int64 GameData_21d68c8;
extern __int64 GameData_21d68d8;
extern __int64 GameData_21d68e8;
extern __int64 GameData_21d68f8;
extern __int64 GameData_21d6900;
extern __int64 GameData_21d6908;
extern __int64 GameData_21d6918;
extern __int64 GameData_21d6928;
extern __int64 GameData_21d6938;
extern __int64 GameData_21d6940;
extern __int64 GameData_21d6948;
extern __int64 GameData_21d6958;
extern __int64 GameData_21d6968;
extern __int64 GameData_21d6978;
extern __int64 GameData_21d6980;
extern __int64 GameData_21d6988;
extern __int64 GameData_21d6998;
extern __int64 GameData_21d69a8;
extern __int64 GameData_21d69b8;
extern __int64 GameData_21d69c0;
extern __int64 GameData_21d69c8;
extern __int64 GameData_21d69d8;
extern __int64 GameData_21d69e8;
extern __int64 GameData_21d69f8;
extern __int64 GameData_21d6a00;
extern __int64 GameData_21d6a08;
extern __int64 GameData_21d6a18;
extern __int64 GameData_21d6a28;
extern __int64 GameData_21d6a38;
extern __int64 GameData_21d6a40;
extern __int64 GameData_21d6a48;
extern __int64 GameData_21d6a58;
extern __int64 GameData_21d6a68;
extern __int64 GameData_21d6a78;
extern __int64 GameData_21d6a80;
extern __int64 GameData_21d6a88;
extern __int64 GameData_21d6a98;
extern __int64 GameData_21d6aa8;
extern __int64 GameData_21d6ab8;
extern __int64 GameData_21d6ac0;
extern __int64 GameData_21d6ac8;
extern __int64 GameData_21d6ad8;
extern __int64 GameData_21d6ae8;
extern __int64 GameData_21d6af8;
extern __int64 GameData_21d6b00;
extern __int64 GameData_21d6b08;
extern __int64 GameData_21d6b18;
extern __int64 GameData_21d6b28;
extern __int64 GameData_21d6b38;
extern __int64 GameData_21d6b40;
extern __int64 GameData_21d6b48;
extern __int64 GameData_21d6b58;
extern __int64 GameData_21d6b68;
extern __int64 GameData_21d6b78;
extern __int64 GameData_21d6b80;
extern __int64 GameData_21d6b88;
extern __int64 GameData_21d6b98;
extern __int64 GameData_21d6ba8;
extern __int64 GameData_21d6bb8;
extern __int64 GameData_21d6bc0;
extern __int64 GameData_21d6bc8;
extern __int64 GameData_21d6bd8;
extern __int64 GameData_21d6be8;
extern __int64 GameData_21d6bf8;
extern __int64 GameData_21d6c00;
extern __int64 GameData_21d6c08;
extern __int64 GameData_21d6c18;
extern __int64 GameData_21d6c28;
extern __int64 GameData_21d6c38;
extern __int64 GameData_21d6c40;
extern __int64 GameData_21d6c48;
extern __int64 GameData_21d6c58;
extern __int64 GameData_21d6c68;
extern __int64 GameData_21d6c78;
extern __int64 GameData_21d6c80;
extern __int64 GameData_21d6c88;
extern __int64 GameData_21d6c98;
extern __int64 GameData_21d6ca8;
extern __int64 GameData_21d6cb8;
extern __int64 GameData_21d6cc0;
extern __int64 GameData_21d6cc8;
extern __int64 GameData_21d6cd8;
extern __int64 GameData_21d6ce8;
extern __int64 GameData_21d6cf8;
extern __int64 GameData_21d6d00;
extern __int64 GameData_21d6d08;
extern __int64 GameData_21d6d18;
extern __int64 GameData_21d6d28;
extern __int64 GameData_21d6d38;
extern __int64 GameData_21d6d40;
extern __int64 GameData_21d6d48;
extern __int64 GameData_21d6d58;
extern __int64 GameData_21d6d68;
extern __int64 GameData_21d6d78;
extern __int64 GameData_21d6d80;
extern __int64 GameData_21d6d88;
extern __int64 GameData_21d6d98;
extern __int64 GameData_21d6da8;
extern __int64 GameData_21d6db8;
extern __int64 GameData_21d6dc0;
extern __int64 GameData_21d6dc8;
extern __int64 GameData_21d6dd8;
extern __int64 GameData_21d6de8;
extern __int64 GameData_21d6df8;
extern __int64 GameData_21d6e00;
extern __int64 GameData_21d6e08;
extern __int64 GameData_21d6e18;
extern __int64 GameData_21d6e28;
extern __int64 GameData_21d6e38;
extern __int64 GameData_21d6e40;
extern __int64 GameData_21d6e48;
extern __int64 GameData_21d6e58;
extern __int64 GameData_21d6e68;
extern __int64 GameData_21d6e78;
extern __int64 GameData_21d6e80;
extern __int64 GameData_21d6e88;
extern __int64 GameData_21d6e98;
extern __int64 GameData_21d6ea8;
extern __int64 GameData_21d6eb8;
extern __int64 GameData_21d6ec0;
extern __int64 GameData_21d6ec8;
extern __int64 GameData_21d6ed8;
extern __int64 GameData_21d6ee8;
extern __int64 GameData_21d6ef8;
extern __int64 GameData_21d6f00;
extern __int64 GameData_21d6f08;
extern __int64 GameData_21d6f18;
extern __int64 GameData_21d6f28;
extern __int64 GameData_21d6f38;
extern __int64 GameData_21d6f40;
extern __int64 GameData_21d6f48;
extern __int64 GameData_21d6f58;
extern __int64 GameData_21d6f68;
extern __int64 GameData_21d6f78;
extern __int64 GameData_21d6f80;
extern __int64 GameData_21d6f88;
extern __int64 GameData_21d6f98;
extern __int64 GameData_21d6fa8;
extern __int64 GameData_21d6fb8;
extern __int64 GameData_21d6fc0;
extern __int64 GameData_21d6fc8;
extern __int64 GameData_21d6fd8;
extern __int64 GameData_21d6fe8;
extern __int64 GameData_21d6ff8;
extern __int64 GameData_21d7000;
extern __int64 GameData_21d7008;
extern __int64 GameData_21d7018;
extern __int64 GameData_21d7028;
extern __int64 GameData_21d7038;
extern __int64 GameData_21d7040;
extern __int64 GameData_21d7048;
extern __int64 GameData_21d7058;
extern __int64 GameData_21d7068;
extern __int64 GameData_21d7078;
extern __int64 GameData_21d7080;
extern __int64 GameData_21d7088;
extern __int64 GameData_21d7098;
extern __int64 GameData_21d70a8;
extern __int64 GameData_21d70b8;
extern __int64 GameData_21d70c0;
extern __int64 GameData_21d70c8;
extern __int64 GameData_21d70d8;
extern __int64 GameData_21d70e8;
extern __int64 GameData_21d70f8;
extern __int64 GameData_21d7100;
extern __int64 GameData_21d7108;
extern __int64 GameData_21d7118;
extern __int64 GameData_21d7128;
extern __int64 GameData_21d7138;
extern __int64 GameData_21d7140;
extern __int64 GameData_21d7148;
extern __int64 GameData_21d7158;
extern __int64 GameData_21d7168;
extern __int64 GameData_21d7178;
extern __int64 GameData_21d7180;
extern __int64 GameData_21d7188;
extern __int64 GameData_21d7198;
extern __int64 GameData_21d71a8;
extern __int64 GameData_21d71b8;
extern __int64 GameData_21d71c0;
extern __int64 GameData_21d71c8;
extern __int64 GameData_21d71d8;
extern __int64 GameData_21d71e8;
extern __int64 GameData_21d71f8;
extern __int64 GameData_21d7200;
extern __int64 GameData_21d7208;
extern __int64 GameData_21d7218;
extern __int64 GameData_21d7228;
extern __int64 GameData_21d7238;
extern __int64 GameData_21d7240;
extern __int64 GameData_21d7248;
extern __int64 GameData_21d7258;
extern __int64 GameData_21d7268;
extern __int64 GameData_21d7278;
extern __int64 GameData_21d7280;
extern __int64 GameData_21d7288;
extern __int64 GameData_21d7298;
extern __int64 GameData_21d72a8;
extern __int64 GameData_21d72b8;
extern __int64 GameData_21d72c0;
extern __int64 GameData_21d72c8;
extern __int64 GameData_21d72d8;
extern __int64 GameData_21d72e8;
extern __int64 GameData_21d72f8;
extern __int64 GameData_21d7300;
extern __int64 GameData_21d7308;
extern __int64 GameData_21d7318;
extern __int64 GameData_21d7328;
extern __int64 GameData_21d7338;
extern __int64 GameData_21d7340;
extern __int64 GameData_21d7348;
extern __int64 GameData_21d7358;
extern __int64 GameData_21d7368;
extern __int64 GameData_21d7378;
extern __int64 GameData_21d7380;
extern __int64 GameData_21d7388;
extern __int64 GameData_21d7398;
extern __int64 GameData_21d73a8;
extern __int64 GameData_21d73b8;
extern __int64 GameData_21d73c0;
extern __int64 GameData_21d73c8;
extern __int64 GameData_21d73d8;
extern __int64 GameData_21d73e8;
extern __int64 GameData_21d73f8;
extern __int64 GameData_21d7400;
extern __int64 GameData_21d7408;
extern __int64 GameData_21d7418;
extern __int64 GameData_21d7428;
extern __int64 GameData_21d7438;
extern __int64 GameData_21d7440;
extern __int64 GameData_21d7448;
extern __int64 GameData_21d7458;
extern __int64 GameData_21d7468;
extern __int64 GameData_21d7478;
extern __int64 GameData_21d7480;
extern __int64 GameData_21d7488;
extern __int64 GameData_21d7498;
extern __int64 GameData_21d74a8;
extern __int64 GameData_21d74b8;
extern __int64 GameData_21d74c0;
extern __int64 GameData_21d74c8;
extern __int64 GameData_21d74d8;
extern __int64 GameData_21d74e8;
extern __int64 GameData_21d74f8;
extern __int64 GameData_21d7500;
extern __int64 GameData_21d7508;
extern __int64 GameData_21d7518;
extern __int64 GameData_21d7528;
extern __int64 GameData_21d7538;
extern __int64 GameData_21d7540;
extern __int64 GameData_21d7548;
extern __int64 GameData_21d7558;
extern __int64 GameData_21d7568;
extern __int64 GameData_21d7578;
extern __int64 GameData_21d7580;
extern __int64 GameData_21d7588;
extern __int64 GameData_21d7598;
extern __int64 GameData_21d75a8;
extern __int64 GameData_21d75b8;
extern __int64 GameData_21d75c0;
extern __int64 GameData_21d75c8;
extern __int64 GameData_21d75d8;
extern __int64 GameData_21d75e8;
extern __int64 GameData_21d75f8;
extern __int64 GameData_21d7600;
extern __int64 GameData_21d7608;
extern __int64 GameData_21d7618;
extern __int64 GameData_21d7628;
extern __int64 GameData_21d7638;
extern __int64 GameData_21d7640;
extern __int64 GameData_21d7648;
extern __int64 GameData_21d7658;
extern __int64 GameData_21d7668;
extern __int64 GameData_21d7678;
extern __int64 GameData_21d7680;
extern __int64 GameData_21d7688;
extern __int64 GameData_21d7698;
extern __int64 GameData_21d76a8;
extern __int64 GameData_21d76b8;
extern __int64 GameData_21d76c0;
extern __int64 GameData_21d76c8;
extern __int64 GameData_21d76d8;
extern __int64 GameData_21d76e8;
extern __int64 GameData_21d76f8;
extern __int64 GameData_21d7700;
extern __int64 GameData_21d7718;
extern __int64 GameData_21d7728;
extern __int64 GameData_21d7738;
extern __int64 GameData_21d7740;
extern __int64 GameData_21d7748;
extern __int64 GameData_21d7758;
extern __int64 GameData_21d7768;
extern __int64 GameData_21d7778;
extern __int64 GameData_21d7780;
extern __int64 GameData_21d7798;
extern __int64 GameData_21d77a8;
extern __int64 GameData_21d77b8;
extern __int64 GameData_21d77c0;
extern __int64 GameData_21d77c8;
extern __int64 GameData_21d77d8;
extern __int64 GameData_21d77e8;
extern __int64 GameData_21d77f8;
extern __int64 GameData_21d7800;
extern __int64 GameData_21d7808;
extern __int64 GameData_21d7818;
extern __int64 GameData_21d7828;
extern __int64 GameData_21d7838;
extern __int64 GameData_21d7840;
extern __int64 GameData_21d7848;
extern __int64 GameData_21d7858;
extern __int64 GameData_21d7868;
extern __int64 GameData_21d7878;
extern __int64 GameData_21d7880;
extern __int64 GameData_21d7888;
extern __int64 GameData_21d7898;
extern __int64 GameData_21d78a8;
extern __int64 GameData_21d78b8;
extern __int64 GameData_21d78c0;
extern __int64 GameData_21d78c8;
extern __int64 GameData_21d78d8;
extern __int64 GameData_21d78e8;
extern __int64 GameData_21d78f8;
extern __int64 GameData_21d7900;
extern __int64 GameData_21d7908;
extern __int64 GameData_21d7918;
extern __int64 GameData_21d7928;
extern __int64 GameData_21d7938;
extern __int64 GameData_21d7940;
extern __int64 GameData_21d7948;
extern __int64 GameData_21d7958;
extern __int64 GameData_21d7968;
extern __int64 GameData_21d7978;
extern __int64 GameData_21d7980;
extern __int64 GameData_21d7988;
extern __int64 GameData_21d7998;
extern __int64 GameData_21d79a8;
extern __int64 GameData_21d79b8;
extern __int64 GameData_21d79c0;
extern __int64 GameData_21d79c8;
extern __int64 GameData_21d79d8;
extern __int64 GameData_21d79e8;
extern __int64 GameData_21d79f8;
extern __int64 GameData_21d7a00;
extern __int64 GameData_21d7a08;
extern __int64 GameData_21d7a18;
extern __int64 GameData_21d7a28;
extern __int64 GameData_21d7a38;
extern __int64 GameData_21d7a40;
extern __int64 GameData_21d7a48;
extern __int64 GameData_21d7a58;
extern __int64 GameData_21d7a68;
extern __int64 GameData_21d7a78;
extern __int64 GameData_21d7a80;
extern __int64 GameData_21d7a88;
extern __int64 GameData_21d7a98;
extern __int64 GameData_21d7aa8;
extern __int64 GameData_21d7ab8;
extern __int64 GameData_21d7ac0;
extern __int64 GameData_21d7ac8;
extern __int64 GameData_21d7ad8;
extern __int64 GameData_21d7ae8;
extern __int64 GameData_21d7af8;
extern __int64 GameData_21d7b00;
extern __int64 GameData_21d7b08;
extern __int64 GameData_21d7b18;
extern __int64 GameData_21d7b28;
extern __int64 GameData_21d7b38;
extern __int64 GameData_21d7b40;
extern __int64 GameData_21d7b48;
extern __int64 GameData_21d7b58;
extern __int64 GameData_21d7b68;
extern __int64 GameData_21d7b78;
extern __int64 GameData_21d7b80;
extern __int64 GameData_21d7b88;
extern __int64 GameData_21d7b98;
extern __int64 GameData_21d7ba8;
extern __int64 GameData_21d7bb8;
extern __int64 GameData_21d7bc0;
extern __int64 GameData_21d7bc8;
extern __int64 GameData_21d7bd8;
extern __int64 GameData_21d7be8;
extern __int64 GameData_21d7bf8;
extern __int64 GameData_21d7c00;
extern __int64 GameData_21d7c08;
extern __int64 GameData_21d7c18;
extern __int64 GameData_21d7c28;
extern __int64 GameData_21d7c38;
extern __int64 GameData_21d7c40;
extern __int64 GameData_21d7c48;
extern __int64 GameData_21d7c58;
extern __int64 GameData_21d7c68;
extern __int64 GameData_21d7c78;
extern __int64 GameData_21d7c80;
extern __int64 GameData_21d7c88;
extern __int64 GameData_21d7c98;
extern __int64 GameData_21d7ca8;
extern __int64 GameData_21d7cb8;
extern __int64 GameData_21d7cc0;
extern __int64 GameData_21d7cc8;
extern __int64 GameData_21d7cd8;
extern __int64 GameData_21d7ce8;
extern __int64 GameData_21d7cf8;
extern __int64 GameData_21d7d00;
extern __int64 GameData_21d7d08;
extern __int64 GameData_21d7d18;
extern __int64 GameData_21d7d28;
extern __int64 GameData_21d7d38;
extern __int64 GameData_21d7d40;
extern __int64 GameData_21d7d48;
extern __int64 GameData_21d7d58;
extern __int64 GameData_21d7d68;
extern __int64 GameData_21d7d78;
extern __int64 GameData_21d7d80;
extern __int64 GameData_21d7d88;
extern __int64 GameData_21d7d98;
extern __int64 GameData_21d7da8;
extern __int64 GameData_21d7db8;
extern __int64 GameData_21d7dc0;
extern __int64 GameData_21d7dc8;
extern __int64 GameData_21d7dd8;
extern __int64 GameData_21d7de8;
extern __int64 GameData_21d7df8;
extern __int64 GameData_21d7e00;
extern __int64 GameData_21d7e08;
extern __int64 GameData_21d7e18;
extern __int64 GameData_21d7e28;
extern __int64 GameData_21d7e38;
extern __int64 GameData_21d7e40;
extern __int64 GameData_21d7e48;
extern __int64 GameData_21d7e58;
extern __int64 GameData_21d7e68;
extern __int64 GameData_21d7e78;
extern __int64 GameData_21d7e80;
extern __int64 GameData_21d7e88;
extern __int64 GameData_21d7e98;
extern __int64 GameData_21d7ea8;
extern __int64 GameData_21d7eb8;
extern __int64 GameData_21d7ec0;
extern __int64 GameData_21d7ec8;
extern __int64 GameData_21d7ed8;
extern __int64 GameData_21d7ee8;
extern __int64 GameData_21d7ef8;
extern __int64 GameData_21d7f00;
extern __int64 GameData_21d7f08;
extern __int64 GameData_21d7f18;
extern __int64 GameData_21d7f28;
extern __int64 GameData_21d7f38;
extern __int64 GameData_21d7f40;
extern __int64 GameData_21d7f48;
extern __int64 GameData_21d7f58;
extern __int64 GameData_21d7f68;
extern __int64 GameData_21d7f78;
extern __int64 GameData_21d7f80;
extern __int64 GameData_21d7f88;
extern __int64 GameData_21d7f98;
extern __int64 GameData_21d7fa8;
extern __int64 GameData_21d7fb8;
extern __int64 GameData_21d7fc0;
extern __int64 GameData_21d7fc8;
extern __int64 GameData_21d7fd8;
extern __int64 GameData_21d7fe8;
extern __int64 GameData_21d7ff8;
extern __int64 GameData_21d8000;
extern __int64 GameData_21d8008;
extern __int64 GameData_21d8018;
extern __int64 GameData_21d8028;
extern __int64 GameData_21d8038;
extern __int64 GameData_21d8040;
extern __int64 GameData_21d8048;
extern __int64 GameData_21d8058;
extern __int64 GameData_21d8068;
extern __int64 GameData_21d8078;
extern __int64 GameData_21d8080;
extern __int64 GameData_21d8088;
extern __int64 GameData_21d8098;
extern __int64 GameData_21d80a8;
extern __int64 GameData_21d80b8;
extern __int64 GameData_21d80c0;
extern __int64 GameData_21d80c8;
extern __int64 GameData_21d80d8;
extern __int64 GameData_21d80e8;
extern __int64 GameData_21d80f8;
extern __int64 GameData_21d8100;
extern __int64 GameData_21d8108;
extern __int64 GameData_21d8118;
extern __int64 GameData_21d8128;
extern __int64 GameData_21d8138;
extern __int64 GameData_21d8140;
extern __int64 GameData_21d8148;
extern __int64 GameData_21d8158;
extern __int64 GameData_21d8168;
extern __int64 GameData_21d8178;
extern __int64 GameData_21d8180;
extern __int64 GameData_21d8188;
extern __int64 GameData_21d8198;
extern __int64 GameData_21d81a8;
extern __int64 GameData_21d81b8;
extern __int64 GameData_21d81c0;
extern __int64 GameData_21d81c8;
extern __int64 GameData_21d81d8;
extern __int64 GameData_21d81e8;
extern __int64 GameData_21d81f8;
extern __int64 GameData_21d8200;
extern __int64 GameData_21d8208;
extern __int64 GameData_21d8218;
extern __int64 GameData_21d8228;
extern __int64 GameData_21d8238;
extern __int64 GameData_21d8240;
extern __int64 GameData_21d8248;
extern __int64 GameData_21d8258;
extern __int64 GameData_21d8268;
extern __int64 GameData_21d8278;
extern __int64 GameData_21d8280;
extern __int64 GameData_21d8288;
extern __int64 GameData_21d8298;
extern __int64 GameData_21d82a8;
extern __int64 GameData_21d82b8;
extern __int64 GameData_21d82c0;
extern __int64 GameData_21d82c8;
extern __int64 GameData_21d82d8;
extern __int64 GameData_21d82e8;
extern __int64 GameData_21d82f8;
extern __int64 GameData_21d8300;
extern __int64 GameData_21d8308;
extern __int64 GameData_21d8318;
extern __int64 GameData_21d8328;
extern __int64 GameData_21d8338;
extern __int64 GameData_21d8340;
extern __int64 GameData_21d8348;
extern __int64 GameData_21d8358;
extern __int64 GameData_21d8368;
extern __int64 GameData_21d8378;
extern __int64 GameData_21d8380;
extern __int64 GameData_21d8388;
extern __int64 GameData_21d8398;
extern __int64 GameData_21d83a8;
extern __int64 GameData_21d83b8;
extern __int64 GameData_21d83c0;
extern __int64 GameData_21d83c8;
extern __int64 GameData_21d83d8;
extern __int64 GameData_21d83e8;
extern __int64 GameData_21d83f8;
extern __int64 GameData_21d8400;
extern __int64 GameData_21d8408;
extern __int64 GameData_21d8418;
extern __int64 GameData_21d8428;
extern __int64 GameData_21d8438;
extern __int64 GameData_21d8440;
extern __int64 GameData_21d8448;
extern __int64 GameData_21d8458;
extern __int64 GameData_21d8468;
extern __int64 GameData_21d8478;
extern __int64 GameData_21d8480;
extern __int64 GameData_21d8488;
extern __int64 GameData_21d8498;
extern __int64 GameData_21d84a8;
extern __int64 GameData_21d84b8;
extern __int64 GameData_21d84c0;
extern __int64 GameData_21d84c8;
extern __int64 GameData_21d84d8;
extern __int64 GameData_21d84e8;
extern __int64 GameData_21d84f8;
extern __int64 GameData_21d8500;
extern __int64 GameData_21d8508;
extern __int64 GameData_21d8518;
extern __int64 GameData_21d8528;
extern __int64 GameData_21d8538;
extern __int64 GameData_21d8540;
extern __int64 GameData_21d8548;
extern __int64 GameData_21d8558;
extern __int64 GameData_21d8568;
extern __int64 GameData_21d8578;
extern __int64 GameData_21d8580;
extern __int64 GameData_21d8588;
extern __int64 GameData_21d8598;
extern __int64 GameData_21d85a8;
extern __int64 GameData_21d85b8;
extern __int64 GameData_21d85c0;
extern __int64 GameData_21d85c8;
extern __int64 GameData_21d85d8;
extern __int64 GameData_21d85e8;
extern __int64 GameData_21d85f8;
extern __int64 GameData_21d8600;
extern __int64 GameData_21d8608;
extern __int64 GameData_21d8618;
extern __int64 GameData_21d8628;
extern __int64 GameData_21d8638;
extern __int64 GameData_21d8640;
extern __int64 GameData_21d8648;
extern __int64 GameData_21d8658;
extern __int64 GameData_21d8668;
extern __int64 GameData_21d8678;
extern __int64 GameData_21d8680;
extern __int64 GameData_21d8688;
extern __int64 GameData_21d8698;
extern __int64 GameData_21d86a8;
extern __int64 GameData_21d86b8;
extern __int64 GameData_21d86c0;
extern __int64 GameData_21d86c8;
extern __int64 GameData_21d86d8;
extern __int64 GameData_21d86e8;
extern __int64 GameData_21d86f8;
extern __int64 GameData_21d8700;
extern __int64 GameData_21d8708;
extern __int64 GameData_21d8718;
extern __int64 GameData_21d8728;
extern __int64 GameData_21d8738;
extern __int64 GameData_21d8740;
extern __int64 GameData_21d8748;
extern __int64 GameData_21d8758;
extern __int64 GameData_21d8768;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_frame_clock;
extern __int64 game_map_ProcMapSeqBattleView_instance_;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern char GameData_21d6230;
extern char GameData_21d6270;
extern char GameData_21d62b0;
extern char GameData_21d62f0;
extern char GameData_21d6330;
extern char GameData_21d6370;
extern char GameData_21d63b0;
extern char GameData_21d63f0;
extern char GameData_21d6430;
extern char GameData_21d6470;
extern char GameData_21d64b0;
extern char GameData_21d64f0;
extern char GameData_21d6530;
extern char GameData_21d6570;
extern char GameData_21d65b0;
extern char GameData_21d65f0;
extern char GameData_21d6630;
extern char GameData_21d6670;
extern char GameData_21d66b0;
extern char GameData_21d66f0;
extern char GameData_21d6730;
extern char GameData_21d6770;
extern char GameData_21d67b0;
extern char GameData_21d67f0;
extern char GameData_21d6830;
extern char GameData_21d6870;
extern char GameData_21d68b0;
extern char GameData_21d68f0;
extern char GameData_21d6930;
extern char GameData_21d6970;
extern char GameData_21d69b0;
extern char GameData_21d69f0;
extern char GameData_21d6a30;
extern char GameData_21d6a70;
extern char GameData_21d6ab0;
extern char GameData_21d6af0;
extern char GameData_21d6b30;
extern char GameData_21d6b70;
extern char GameData_21d6bb0;
extern char GameData_21d6bf0;
extern char GameData_21d6c30;
extern char GameData_21d6c70;
extern char GameData_21d6cb0;
extern char GameData_21d6cf0;
extern char GameData_21d6d30;
extern char GameData_21d6d70;
extern char GameData_21d6db0;
extern char GameData_21d6df0;
extern char GameData_21d6e30;
extern char GameData_21d6e70;
extern char GameData_21d6eb0;
extern char GameData_21d6ef0;
extern char GameData_21d6f30;
extern char GameData_21d6f70;
extern char GameData_21d6fb0;
extern char GameData_21d6ff0;
extern char GameData_21d7030;
extern char GameData_21d7070;
extern char GameData_21d70b0;
extern char GameData_21d70f0;
extern char GameData_21d7130;
extern char GameData_21d7170;
extern char GameData_21d71b0;
extern char GameData_21d71f0;
extern char GameData_21d7230;
extern char GameData_21d7270;
extern char GameData_21d72b0;
extern char GameData_21d72f0;
extern char GameData_21d7330;
extern char GameData_21d7370;
extern char GameData_21d73b0;
extern char GameData_21d73f0;
extern char GameData_21d7430;
extern char GameData_21d7470;
extern char GameData_21d74b0;
extern char GameData_21d74f0;
extern char GameData_21d7530;
extern char GameData_21d7570;
extern char GameData_21d75b0;
extern char GameData_21d75f0;
extern char GameData_21d7630;
extern char GameData_21d7670;
extern char GameData_21d76b0;
extern char GameData_21d76f0;
extern char GameData_21d7730;
extern char GameData_21d7770;
extern char GameData_21d77b0;
extern char GameData_21d77f0;
extern char GameData_21d7830;
extern char GameData_21d7870;
extern char GameData_21d78b0;
extern char GameData_21d78f0;
extern char GameData_21d7930;
extern char GameData_21d7970;
extern char GameData_21d79b0;
extern char GameData_21d79f0;
extern char GameData_21d7a30;
extern char GameData_21d7a70;
extern char GameData_21d7ab0;
extern char GameData_21d7af0;
extern char GameData_21d7b30;
extern char GameData_21d7b70;
extern char GameData_21d7bb0;
extern char GameData_21d7bf0;
extern char GameData_21d7c30;
extern char GameData_21d7c70;
extern char GameData_21d7cb0;
extern char GameData_21d7cf0;
extern char GameData_21d7d30;
extern char GameData_21d7d70;
extern char GameData_21d7db0;
extern char GameData_21d7df0;
extern char GameData_21d7e30;
extern char GameData_21d7e70;
extern char GameData_21d7eb0;
extern char GameData_21d7ef0;
extern char GameData_21d7f30;
extern char GameData_21d7f70;
extern char GameData_21d7fb0;
extern char GameData_21d7ff0;
extern char GameData_21d8030;
extern char GameData_21d8070;
extern char GameData_21d80b0;
extern char GameData_21d80f0;
extern char GameData_21d8130;
extern char GameData_21d8170;
extern char GameData_21d81b0;
extern char GameData_21d81f0;
extern char GameData_21d8230;
extern char GameData_21d8270;
extern char GameData_21d82b0;
extern char GameData_21d82f0;
extern char GameData_21d8330;
extern char GameData_21d8370;
extern char GameData_21d83b0;
extern char GameData_21d83f0;
extern char GameData_21d8430;
extern char GameData_21d8470;
extern char GameData_21d84b0;
extern char GameData_21d84f0;
extern char GameData_21d8530;
extern char GameData_21d8570;
extern char GameData_21d85b0;
extern char GameData_21d85f0;
extern char GameData_21d8630;
extern char GameData_21d8670;
extern char GameData_21d86b0;
extern char GameData_21d86f0;
extern char GameData_21d8730;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_21d6250;
extern int GameData_21d6260;
extern int GameData_21d6290;
extern int GameData_21d62a0;
extern int GameData_21d62d0;
extern int GameData_21d62e0;
extern int GameData_21d6310;
extern int GameData_21d6320;
extern int GameData_21d6350;
extern int GameData_21d6360;
extern int GameData_21d6390;
extern int GameData_21d63a0;
extern int GameData_21d63d0;
extern int GameData_21d63e0;
extern int GameData_21d6410;
extern int GameData_21d6420;
extern int GameData_21d6450;
extern int GameData_21d6460;
extern int GameData_21d6490;
extern int GameData_21d64a0;
extern int GameData_21d64d0;
extern int GameData_21d64e0;
extern int GameData_21d6510;
extern int GameData_21d6520;
extern int GameData_21d6550;
extern int GameData_21d6560;
extern int GameData_21d6590;
extern int GameData_21d65a0;
extern int GameData_21d65d0;
extern int GameData_21d65e0;
extern int GameData_21d6610;
extern int GameData_21d6620;
extern int GameData_21d6650;
extern int GameData_21d6660;
extern int GameData_21d6690;
extern int GameData_21d66a0;
extern int GameData_21d66d0;
extern int GameData_21d66e0;
extern int GameData_21d6710;
extern int GameData_21d6720;
extern int GameData_21d6750;
extern int GameData_21d6760;
extern int GameData_21d6790;
extern int GameData_21d67a0;
extern int GameData_21d67d0;
extern int GameData_21d67e0;
extern int GameData_21d6810;
extern int GameData_21d6820;
extern int GameData_21d6850;
extern int GameData_21d6860;
extern int GameData_21d6890;
extern int GameData_21d68a0;
extern int GameData_21d68d0;
extern int GameData_21d68e0;
extern int GameData_21d6910;
extern int GameData_21d6920;
extern int GameData_21d6950;
extern int GameData_21d6960;
extern int GameData_21d6990;
extern int GameData_21d69a0;
extern int GameData_21d69d0;
extern int GameData_21d69e0;
extern int GameData_21d6a10;
extern int GameData_21d6a20;
extern int GameData_21d6a50;
extern int GameData_21d6a60;
extern int GameData_21d6a90;
extern int GameData_21d6aa0;
extern int GameData_21d6ad0;
extern int GameData_21d6ae0;
extern int GameData_21d6b10;
extern int GameData_21d6b20;
extern int GameData_21d6b50;
extern int GameData_21d6b60;
extern int GameData_21d6b90;
extern int GameData_21d6ba0;
extern int GameData_21d6bd0;
extern int GameData_21d6be0;
extern int GameData_21d6c10;
extern int GameData_21d6c20;
extern int GameData_21d6c50;
extern int GameData_21d6c60;
extern int GameData_21d6c90;
extern int GameData_21d6ca0;
extern int GameData_21d6cd0;
extern int GameData_21d6ce0;
extern int GameData_21d6d10;
extern int GameData_21d6d20;
extern int GameData_21d6d50;
extern int GameData_21d6d60;
extern int GameData_21d6d90;
extern int GameData_21d6da0;
extern int GameData_21d6dd0;
extern int GameData_21d6de0;
extern int GameData_21d6e10;
extern int GameData_21d6e20;
extern int GameData_21d6e50;
extern int GameData_21d6e60;
extern int GameData_21d6e90;
extern int GameData_21d6ea0;
extern int GameData_21d6ed0;
extern int GameData_21d6ee0;
extern int GameData_21d6f10;
extern int GameData_21d6f20;
extern int GameData_21d6f50;
extern int GameData_21d6f60;
extern int GameData_21d6f90;
extern int GameData_21d6fa0;
extern int GameData_21d6fd0;
extern int GameData_21d6fe0;
extern int GameData_21d7010;
extern int GameData_21d7020;
extern int GameData_21d7050;
extern int GameData_21d7060;
extern int GameData_21d7090;
extern int GameData_21d70a0;
extern int GameData_21d70d0;
extern int GameData_21d70e0;
extern int GameData_21d7110;
extern int GameData_21d7120;
extern int GameData_21d7150;
extern int GameData_21d7160;
extern int GameData_21d7190;
extern int GameData_21d71a0;
extern int GameData_21d71d0;
extern int GameData_21d71e0;
extern int GameData_21d7210;
extern int GameData_21d7220;
extern int GameData_21d7250;
extern int GameData_21d7260;
extern int GameData_21d7290;
extern int GameData_21d72a0;
extern int GameData_21d72d0;
extern int GameData_21d72e0;
extern int GameData_21d7310;
extern int GameData_21d7320;
extern int GameData_21d7350;
extern int GameData_21d7360;
extern int GameData_21d7390;
extern int GameData_21d73a0;
extern int GameData_21d73d0;
extern int GameData_21d73e0;
extern int GameData_21d7410;
extern int GameData_21d7420;
extern int GameData_21d7450;
extern int GameData_21d7460;
extern int GameData_21d7490;
extern int GameData_21d74a0;
extern int GameData_21d74d0;
extern int GameData_21d74e0;
extern int GameData_21d7510;
extern int GameData_21d7520;
extern int GameData_21d7550;
extern int GameData_21d7560;
extern int GameData_21d7590;
extern int GameData_21d75a0;
extern int GameData_21d75d0;
extern int GameData_21d75e0;
extern int GameData_21d7610;
extern int GameData_21d7620;
extern int GameData_21d7650;
extern int GameData_21d7660;
extern int GameData_21d7690;
extern int GameData_21d76a0;
extern int GameData_21d76d0;
extern int GameData_21d76e0;
extern int GameData_21d7710;
extern int GameData_21d7720;
extern int GameData_21d7750;
extern int GameData_21d7760;
extern int GameData_21d7790;
extern int GameData_21d77a0;
extern int GameData_21d77d0;
extern int GameData_21d77e0;
extern int GameData_21d7810;
extern int GameData_21d7820;
extern int GameData_21d7850;
extern int GameData_21d7860;
extern int GameData_21d7890;
extern int GameData_21d78a0;
extern int GameData_21d78d0;
extern int GameData_21d78e0;
extern int GameData_21d7910;
extern int GameData_21d7920;
extern int GameData_21d7950;
extern int GameData_21d7960;
extern int GameData_21d7990;
extern int GameData_21d79a0;
extern int GameData_21d79d0;
extern int GameData_21d79e0;
extern int GameData_21d7a10;
extern int GameData_21d7a20;
extern int GameData_21d7a50;
extern int GameData_21d7a60;
extern int GameData_21d7a90;
extern int GameData_21d7aa0;
extern int GameData_21d7ad0;
extern int GameData_21d7ae0;
extern int GameData_21d7b10;
extern int GameData_21d7b20;
extern int GameData_21d7b50;
extern int GameData_21d7b60;
extern int GameData_21d7b90;
extern int GameData_21d7ba0;
extern int GameData_21d7bd0;
extern int GameData_21d7be0;
extern int GameData_21d7c10;
extern int GameData_21d7c20;
extern int GameData_21d7c50;
extern int GameData_21d7c60;
extern int GameData_21d7c90;
extern int GameData_21d7ca0;
extern int GameData_21d7cd0;
extern int GameData_21d7ce0;
extern int GameData_21d7d10;
extern int GameData_21d7d20;
extern int GameData_21d7d50;
extern int GameData_21d7d60;
extern int GameData_21d7d90;
extern int GameData_21d7da0;
extern int GameData_21d7dd0;
extern int GameData_21d7de0;
extern int GameData_21d7e10;
extern int GameData_21d7e20;
extern int GameData_21d7e50;
extern int GameData_21d7e60;
extern int GameData_21d7e90;
extern int GameData_21d7ea0;
extern int GameData_21d7ed0;
extern int GameData_21d7ee0;
extern int GameData_21d7f10;
extern int GameData_21d7f20;
extern int GameData_21d7f50;
extern int GameData_21d7f60;
extern int GameData_21d7f90;
extern int GameData_21d7fa0;
extern int GameData_21d7fd0;
extern int GameData_21d7fe0;
extern int GameData_21d8010;
extern int GameData_21d8020;
extern int GameData_21d8050;
extern int GameData_21d8060;
extern int GameData_21d8090;
extern int GameData_21d80a0;
extern int GameData_21d80d0;
extern int GameData_21d80e0;
extern int GameData_21d8110;
extern int GameData_21d8120;
extern int GameData_21d8150;
extern int GameData_21d8160;
extern int GameData_21d8190;
extern int GameData_21d81a0;
extern int GameData_21d81d0;
extern int GameData_21d81e0;
extern int GameData_21d8210;
extern int GameData_21d8220;
extern int GameData_21d8250;
extern int GameData_21d8260;
extern int GameData_21d8290;
extern int GameData_21d82a0;
extern int GameData_21d82d0;
extern int GameData_21d82e0;
extern int GameData_21d8310;
extern int GameData_21d8320;
extern int GameData_21d8350;
extern int GameData_21d8360;
extern int GameData_21d8390;
extern int GameData_21d83a0;
extern int GameData_21d83d0;
extern int GameData_21d83e0;
extern int GameData_21d8410;
extern int GameData_21d8420;
extern int GameData_21d8450;
extern int GameData_21d8460;
extern int GameData_21d8490;
extern int GameData_21d84a0;
extern int GameData_21d84d0;
extern int GameData_21d84e0;
extern int GameData_21d8510;
extern int GameData_21d8520;
extern int GameData_21d8550;
extern int GameData_21d8560;
extern int GameData_21d8590;
extern int GameData_21d85a0;
extern int GameData_21d85d0;
extern int GameData_21d85e0;
extern int GameData_21d8610;
extern int GameData_21d8620;
extern int GameData_21d8650;
extern int GameData_21d8660;
extern int GameData_21d8690;
extern int GameData_21d86a0;
extern int GameData_21d86d0;
extern int GameData_21d86e0;
extern int GameData_21d8710;
extern int GameData_21d8720;
extern int GameData_21d8750;
extern int GameData_21d8760;
float GameRoutine_1120420(__int64, char, float);
float GameRoutine_618640(int, float result, float, float, float);
float Height_7c4d10(__int64, float, float);
float Unit_6c7fa0(__int64, _OWORD*);
void GameRoutine_821a20();
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_688200(void);
int* game_map_BattleUtil_GetFactorSkill(__int64 a1);
__int64 BattleUtil_7a9320(int a1);
__int64 game_map_BattleUtil_GetHealPower(__int64 result, __int64 a2,
                                         unsigned __int16* a3, _DWORD* a4,
                                         __int64 a5, __int64 a6);
void BattleUtil_7a96a0(float a1);
__int64 BattleUtil_7a98a0(__int64 a1, char* a2, __int64 a3, int a4);
__attribute__((swiftcall)) void BattleUtil_7aa190(PSEUDO_X8 x8_, __int64 a1,
                                                  char a2, char a3);
float BattleUtil_7aa490(__int64 a1, char a2, char a3);
__int64 BattleUtil_7ac940(__int64 a1, __int64 a2);
_WORD*
game_UnitItemList_EachItem_alt1(_WORD* result,
                                __int64) __asm__("game_UnitItemList_EachItem");

int* game_map_BattleUtil_GetFactorSkill(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  char v3;
  __int64 v5;
  __int64* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
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
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  int v60;
  __int64 v61;
  int v62;
  __int64 v63;
  int* v64;
  __int64 v65;
  int v66;
  __int64 v67;
  int v68;
  int v69;
  int v70;
  __int64 v71;
  int* v72;
  __int64 v73;
  int v74;
  __int64 v75;
  int v76;
  int v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int* v84;
  __int64 v85;
  int v86;
  __int64 v87;
  int v88;
  int v89;
  int v90;
  __int64 v91;
  __int64 v92;
  int* v93;
  __int64 v94;
  int v95;
  __int64 v96;
  int v97;
  int v98;
  int v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  int* v105;
  __int64 v106;
  int v107;
  __int64 v108;
  int v109;
  int v110;
  int v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  _QWORD* v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  int v122;
  int v123;
  __int64 v124;
  int v125;
  __int64 v126;
  int* v127;
  __int64 v128;
  int v129;
  __int64 v130;
  int v131;
  int v132;
  int v133;
  __int64 v134;
  __int64 v135;
  int* v136;
  int* result;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  int v142;
  int v143;
  __int64 v144;
  int v145;
  __int64 v146;
  int* v147;
  __int64 v148;
  int v149;
  __int64 v150;
  int v151;
  int v152;
  int v153;
  __int64 v154;
  __int64 v155;
  struct {
    _QWORD v156[4];
    _QWORD* v157;
  } v156_;
  __int64 v158;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(unsigned __int8*)(a1 + 17);
  v3 = *(_BYTE*)(a1 + 608);
  v158 = 0;
  if ((v3 & 6) == 0) {
    goto LABEL_16;
  }
  v156_.v157 = v156_.v156;
  v156_.v156[0] = GameData_1f98ec8;
  v156_.v156[1] = &v158;
  game_map_BattleUtil_EachFactorSkill_7a8e00(a1 + 520, v1 + 760LL * v2 + 536,
                                             (__int64)v156_.v156);
  if (v156_.v157 == v156_.v156) {
    v5 = 32;
  }
  else {
    if (v156_.v157 == nullptr) {
      goto LABEL_7;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v156_.v157 + v5))((__int64)v156_.v157);
LABEL_7:
  if (v158 == 0) {
  LABEL_16:
    v6 = (__int64*)(a1 + 424);
    goto LABEL_17;
  }
  v6 = (__int64*)(a1 + 424);
  v7 = *((unsigned __int8*)((_UNKNOWN*)0xF4LL) + v158 + 6);
  if (v7 == 1) {
    v8 = game_g_shared_system_skills_ptr;
    LODWORD(v156_.v156[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x8CLL) +
                                        game_g_shared_system_skills_ptr) &
                             0xFFF;
    if ((UnitSkillList_84cc00((__int64*)(a1 + 424), v156_.v156, 1) & 1) != 0) {
      v9 = *(_QWORD*)(a1 + 456);
      v10 = *(_QWORD*)(a1 + 464);
      *(_QWORD*)(a1 + 504) = 0;
      *(_QWORD*)(a1 + 512) = 0;
      v11 = v10 - v9;
      if ((int)((unsigned __int64)(v10 - v9) >> 2) >= 1) {
        v12 = (int)(v11 >> 2);
        v13 = v12 <= 1 ? 1LL : (int)(v11 >> 2);
        v14 = *GameData_212c880[0];
        if (v12 >= 2) {
          v72 = (int*)(v9 + 4);
          v15 = 0;
          v16 = 0;
          v17 = 0;
          v18 = 0;
          v19 = 0;
          do {
            v19 += 2;
            v73 = *(_QWORD*)(*(_QWORD*)(v14 + 64) + 8LL * (*(v72 - 1) & 0xFFF));
            v74 = v18 | (1 << *(_BYTE*)(v73 + 104));
            *(_WORD*)(a1 + 504) = v74;
            v75 = (1LL << *(_BYTE*)(v73 + 250)) | v17;
            *(_QWORD*)(a1 + 512) = v75;
            v76 = (1 << *(_BYTE*)(v73 + 115)) | v16;
            *(_DWORD*)(a1 + 508) = v76;
            v77 = *(unsigned __int16*)(*(_QWORD*)(v73 + 24) + 1064LL) | v15;
            *(_WORD*)(a1 + 506) = v77;
            v78 = *v72;
            v72 += 2;
            v79 = *(_QWORD*)(*(_QWORD*)(v14 + 64) + 8LL * (v78 & 0xFFF));
            v18 = v74 | (1 << *(_BYTE*)(v79 + 104));
            *(_WORD*)(a1 + 504) = v18;
            v17 = (1LL << *(_BYTE*)(v79 + 250)) | v75;
            *(_QWORD*)(a1 + 512) = v17;
            v16 = (1 << *(_BYTE*)(v79 + 115)) | v76;
            *(_DWORD*)(a1 + 508) = v16;
            v15 = *(unsigned __int16*)(*(_QWORD*)(v79 + 24) + 1064LL) | v77;
            *(_WORD*)(a1 + 506) = v15;
          } while ((v13 & 0x7FFFFFFFFFFFFFFELL) != v19);
        }
        else {
          LOWORD(v15) = 0;
          v16 = 0;
          v17 = 0;
          LOWORD(v18) = 0;
          v19 = 0;
        }
        if ((v13 & 1) != 0) {
          v80 = *(_QWORD*)(*(_QWORD*)(v14 + 64) +
                           8LL * (*(_DWORD*)(v9 + 4 * v19) & 0xFFF));
          *(_WORD*)(a1 + 504) = v18 | (1 << *(_BYTE*)(v80 + 104));
          *(_QWORD*)(a1 + 512) = (1LL << *(_BYTE*)(v80 + 250)) | v17;
          *(_DWORD*)(a1 + 508) = (1 << *(_BYTE*)(v80 + 115)) | v16;
          *(_WORD*)(a1 + 506) = *(_WORD*)(*(_QWORD*)(v80 + 24) + 1064LL) | v15;
        }
      }
    }
    LODWORD(v156_.v156[0]) =
        *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x88LL) + v8) & 0xFFF;
    if ((UnitSkillList_84d980((__int64*)(a1 + 424), (unsigned int*)v156_.v156) &
         1) != 0) {
      v53 = *(_QWORD*)(a1 + 456);
      v81 = *(_QWORD*)(a1 + 464);
      *(_QWORD*)(a1 + 504) = 0;
      *(_QWORD*)(a1 + 512) = 0;
      v82 = v81 - v53;
      if ((int)((unsigned __int64)(v81 - v53) >> 2) >= 1) {
        v83 = (int)(v82 >> 2);
        if (v83 <= 1) {
          v57 = 1;
        }
        else {
          v57 = (int)(v82 >> 2);
        }
        v58 = *GameData_212c880[0];
        if (v83 >= 2) {
          v84 = (int*)(v53 + 4);
          v59 = 0;
          v60 = 0;
          v61 = 0;
          v62 = 0;
          v63 = 0;
          do {
            v63 += 2;
            v85 = *(_QWORD*)(*(_QWORD*)(v58 + 64) + 8LL * (*(v84 - 1) & 0xFFF));
            v86 = v62 | (1 << *(_BYTE*)(v85 + 104));
            *(_WORD*)(a1 + 504) = v86;
            v87 = (1LL << *(_BYTE*)(v85 + 250)) | v61;
            *(_QWORD*)(a1 + 512) = v87;
            v88 = (1 << *(_BYTE*)(v85 + 115)) | v60;
            *(_DWORD*)(a1 + 508) = v88;
            v89 = *(unsigned __int16*)(*(_QWORD*)(v85 + 24) + 1064LL) | v59;
            *(_WORD*)(a1 + 506) = v89;
            v90 = *v84;
            v84 += 2;
            v91 = *(_QWORD*)(*(_QWORD*)(v58 + 64) + 8LL * (v90 & 0xFFF));
            v62 = v86 | (1 << *(_BYTE*)(v91 + 104));
            *(_WORD*)(a1 + 504) = v62;
            v61 = (1LL << *(_BYTE*)(v91 + 250)) | v87;
            *(_QWORD*)(a1 + 512) = v61;
            v60 = (1 << *(_BYTE*)(v91 + 115)) | v88;
            *(_DWORD*)(a1 + 508) = v60;
            v59 = *(unsigned __int16*)(*(_QWORD*)(v91 + 24) + 1064LL) | v89;
            *(_WORD*)(a1 + 506) = v59;
          } while ((v57 & 0x7FFFFFFFFFFFFFFELL) != v63);
          goto LABEL_58;
        }
      LABEL_70:
        LOWORD(v59) = 0;
        v60 = 0;
        v61 = 0;
        LOWORD(v62) = 0;
        v63 = 0;
        if ((v57 & 1) == 0) {
          goto LABEL_75;
        }
      LABEL_59:
        v92 = *(_QWORD*)(*(_QWORD*)(v58 + 64) +
                         8LL * (*(_DWORD*)(v53 + 4 * v63) & 0xFFF));
        *(_WORD*)(a1 + 504) = v62 | (1 << *(_BYTE*)(v92 + 104));
        *(_QWORD*)(a1 + 512) = (1LL << *(_BYTE*)(v92 + 250)) | v61;
        *(_DWORD*)(a1 + 508) = (1 << *(_BYTE*)(v92 + 115)) | v60;
        *(_WORD*)(a1 + 506) = *(_WORD*)(*(_QWORD*)(v92 + 24) + 1064LL) | v59;
        goto LABEL_75;
      }
    }
    goto LABEL_75;
  }
  if (v7 != 2) {
  LABEL_17:
    v20 = game_g_shared_system_skills_ptr;
    LODWORD(v156_.v156[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x8CLL) +
                                        game_g_shared_system_skills_ptr) &
                             0xFFF;
    if ((UnitSkillList_84d980(v6, (unsigned int*)v156_.v156) & 1) != 0) {
      v21 = *(_QWORD*)(a1 + 456);
      v22 = *(_QWORD*)(a1 + 464);
      *(_QWORD*)(a1 + 504) = 0;
      *(_QWORD*)(a1 + 512) = 0;
      v23 = v22 - v21;
      if ((int)((unsigned __int64)(v22 - v21) >> 2) >= 1) {
        v24 = (int)(v23 >> 2);
        v25 = v24 <= 1 ? 1LL : (int)(v23 >> 2);
        v26 = *GameData_212c880[0];
        if (v24 >= 2) {
          v44 = (int*)(v21 + 4);
          v27 = 0;
          v28 = 0;
          v29 = 0;
          v30 = 0;
          v31 = 0;
          do {
            v31 += 2;
            v45 = *(_QWORD*)(*(_QWORD*)(v26 + 64) + 8LL * (*(v44 - 1) & 0xFFF));
            v46 = v30 | (1 << *(_BYTE*)(v45 + 104));
            *(_WORD*)(a1 + 504) = v46;
            v47 = (1LL << *(_BYTE*)(v45 + 250)) | v29;
            *(_QWORD*)(a1 + 512) = v47;
            v48 = (1 << *(_BYTE*)(v45 + 115)) | v28;
            *(_DWORD*)(a1 + 508) = v48;
            v49 = *(unsigned __int16*)(*(_QWORD*)(v45 + 24) + 1064LL) | v27;
            *(_WORD*)(a1 + 506) = v49;
            v50 = *v44;
            v44 += 2;
            v51 = *(_QWORD*)(*(_QWORD*)(v26 + 64) + 8LL * (v50 & 0xFFF));
            v30 = v46 | (1 << *(_BYTE*)(v51 + 104));
            *(_WORD*)(a1 + 504) = v30;
            v29 = (1LL << *(_BYTE*)(v51 + 250)) | v47;
            *(_QWORD*)(a1 + 512) = v29;
            v28 = (1 << *(_BYTE*)(v51 + 115)) | v48;
            *(_DWORD*)(a1 + 508) = v28;
            v27 = *(unsigned __int16*)(*(_QWORD*)(v51 + 24) + 1064LL) | v49;
            *(_WORD*)(a1 + 506) = v27;
          } while ((v25 & 0x7FFFFFFFFFFFFFFELL) != v31);
        }
        else {
          LOWORD(v27) = 0;
          v28 = 0;
          v29 = 0;
          LOWORD(v30) = 0;
          v31 = 0;
        }
        if ((v25 & 1) != 0) {
          v52 = *(_QWORD*)(*(_QWORD*)(v26 + 64) +
                           8LL * (*(_DWORD*)(v21 + 4 * v31) & 0xFFF));
          *(_WORD*)(a1 + 504) = v30 | (1 << *(_BYTE*)(v52 + 104));
          *(_QWORD*)(a1 + 512) = (1LL << *(_BYTE*)(v52 + 250)) | v29;
          *(_DWORD*)(a1 + 508) = (1 << *(_BYTE*)(v52 + 115)) | v28;
          *(_WORD*)(a1 + 506) = *(_WORD*)(*(_QWORD*)(v52 + 24) + 1064LL) | v27;
        }
      }
    }
    LODWORD(v156_.v156[0]) =
        *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x88LL) + v20) & 0xFFF;
    if ((UnitSkillList_84d980(v6, (unsigned int*)v156_.v156) & 1) != 0) {
      v53 = *(_QWORD*)(a1 + 456);
      v54 = *(_QWORD*)(a1 + 464);
      *(_QWORD*)(a1 + 504) = 0;
      *(_QWORD*)(a1 + 512) = 0;
      v55 = v54 - v53;
      if ((int)((unsigned __int64)(v54 - v53) >> 2) >= 1) {
        v56 = (int)(v55 >> 2);
        if (v56 <= 1) {
          v57 = 1;
        }
        else {
          v57 = (int)(v55 >> 2);
        }
        v58 = *GameData_212c880[0];
        if (v56 >= 2) {
          v64 = (int*)(v53 + 4);
          v59 = 0;
          v60 = 0;
          v61 = 0;
          v62 = 0;
          v63 = 0;
          do {
            v63 += 2;
            v65 = *(_QWORD*)(*(_QWORD*)(v58 + 64) + 8LL * (*(v64 - 1) & 0xFFF));
            v66 = v62 | (1 << *(_BYTE*)(v65 + 104));
            *(_WORD*)(a1 + 504) = v66;
            v67 = (1LL << *(_BYTE*)(v65 + 250)) | v61;
            *(_QWORD*)(a1 + 512) = v67;
            v68 = (1 << *(_BYTE*)(v65 + 115)) | v60;
            *(_DWORD*)(a1 + 508) = v68;
            v69 = *(unsigned __int16*)(*(_QWORD*)(v65 + 24) + 1064LL) | v59;
            *(_WORD*)(a1 + 506) = v69;
            v70 = *v64;
            v64 += 2;
            v71 = *(_QWORD*)(*(_QWORD*)(v58 + 64) + 8LL * (v70 & 0xFFF));
            v62 = v66 | (1 << *(_BYTE*)(v71 + 104));
            *(_WORD*)(a1 + 504) = v62;
            v61 = (1LL << *(_BYTE*)(v71 + 250)) | v67;
            *(_QWORD*)(a1 + 512) = v61;
            v60 = (1 << *(_BYTE*)(v71 + 115)) | v68;
            *(_DWORD*)(a1 + 508) = v60;
            v59 = *(unsigned __int16*)(*(_QWORD*)(v71 + 24) + 1064LL) | v69;
            *(_WORD*)(a1 + 506) = v59;
          } while ((v57 & 0x7FFFFFFFFFFFFFFELL) != v63);
        }
        else {
          LOWORD(v59) = 0;
          v60 = 0;
          v61 = 0;
          LOWORD(v62) = 0;
          v63 = 0;
        }
      LABEL_58:
        if ((v57 & 1) == 0) {
          goto LABEL_75;
        }
        goto LABEL_59;
      }
    }
    goto LABEL_75;
  }
  v32 = game_g_shared_system_skills_ptr;
  LODWORD(v156_.v156[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x8CLL) +
                                      game_g_shared_system_skills_ptr) &
                           0xFFF;
  if ((UnitSkillList_84d980((__int64*)(a1 + 424), (unsigned int*)v156_.v156) &
       1) != 0) {
    v33 = *(_QWORD*)(a1 + 456);
    v34 = *(_QWORD*)(a1 + 464);
    *(_QWORD*)(a1 + 504) = 0;
    *(_QWORD*)(a1 + 512) = 0;
    v35 = v34 - v33;
    if ((int)((unsigned __int64)(v34 - v33) >> 2) >= 1) {
      v36 = (int)(v35 >> 2);
      v37 = v36 <= 1 ? 1LL : (int)(v35 >> 2);
      v38 = *GameData_212c880[0];
      if (v36 >= 2) {
        v93 = (int*)(v33 + 4);
        v39 = 0;
        v40 = 0;
        v41 = 0;
        v42 = 0;
        v43 = 0;
        do {
          v43 += 2;
          v94 = *(_QWORD*)(*(_QWORD*)(v38 + 64) + 8LL * (*(v93 - 1) & 0xFFF));
          v95 = v42 | (1 << *(_BYTE*)(v94 + 104));
          *(_WORD*)(a1 + 504) = v95;
          v96 = (1LL << *(_BYTE*)(v94 + 250)) | v41;
          *(_QWORD*)(a1 + 512) = v96;
          v97 = (1 << *(_BYTE*)(v94 + 115)) | v40;
          *(_DWORD*)(a1 + 508) = v97;
          v98 = *(unsigned __int16*)(*(_QWORD*)(v94 + 24) + 1064LL) | v39;
          *(_WORD*)(a1 + 506) = v98;
          v99 = *v93;
          v93 += 2;
          v100 = *(_QWORD*)(*(_QWORD*)(v38 + 64) + 8LL * (v99 & 0xFFF));
          v42 = v95 | (1 << *(_BYTE*)(v100 + 104));
          *(_WORD*)(a1 + 504) = v42;
          v41 = (1LL << *(_BYTE*)(v100 + 250)) | v96;
          *(_QWORD*)(a1 + 512) = v41;
          v40 = (1 << *(_BYTE*)(v100 + 115)) | v97;
          *(_DWORD*)(a1 + 508) = v40;
          v39 = *(unsigned __int16*)(*(_QWORD*)(v100 + 24) + 1064LL) | v98;
          *(_WORD*)(a1 + 506) = v39;
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
        v101 = *(_QWORD*)(*(_QWORD*)(v38 + 64) +
                          8LL * (*(_DWORD*)(v33 + 4 * v43) & 0xFFF));
        *(_WORD*)(a1 + 504) = v42 | (1 << *(_BYTE*)(v101 + 104));
        *(_QWORD*)(a1 + 512) = (1LL << *(_BYTE*)(v101 + 250)) | v41;
        *(_DWORD*)(a1 + 508) = (1 << *(_BYTE*)(v101 + 115)) | v40;
        *(_WORD*)(a1 + 506) = *(_WORD*)(*(_QWORD*)(v101 + 24) + 1064LL) | v39;
      }
    }
  }
  LODWORD(v156_.v156[0]) =
      *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x88LL) + v32) & 0xFFF;
  if ((UnitSkillList_84cc00((__int64*)(a1 + 424), v156_.v156, 1) & 1) != 0) {
    v53 = *(_QWORD*)(a1 + 456);
    v102 = *(_QWORD*)(a1 + 464);
    *(_QWORD*)(a1 + 504) = 0;
    *(_QWORD*)(a1 + 512) = 0;
    v103 = v102 - v53;
    if ((int)((unsigned __int64)(v102 - v53) >> 2) >= 1) {
      v104 = (int)(v103 >> 2);
      if (v104 <= 1) {
        v57 = 1;
      }
      else {
        v57 = (int)(v103 >> 2);
      }
      v58 = *GameData_212c880[0];
      if (v104 < 2) {
        goto LABEL_70;
      }
      v105 = (int*)(v53 + 4);
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      do {
        v63 += 2;
        v106 = *(_QWORD*)(*(_QWORD*)(v58 + 64) + 8LL * (*(v105 - 1) & 0xFFF));
        v107 = v62 | (1 << *(_BYTE*)(v106 + 104));
        *(_WORD*)(a1 + 504) = v107;
        v108 = (1LL << *(_BYTE*)(v106 + 250)) | v61;
        *(_QWORD*)(a1 + 512) = v108;
        v109 = (1 << *(_BYTE*)(v106 + 115)) | v60;
        *(_DWORD*)(a1 + 508) = v109;
        v110 = *(unsigned __int16*)(*(_QWORD*)(v106 + 24) + 1064LL) | v59;
        *(_WORD*)(a1 + 506) = v110;
        v111 = *v105;
        v105 += 2;
        v112 = *(_QWORD*)(*(_QWORD*)(v58 + 64) + 8LL * (v111 & 0xFFF));
        v62 = v107 | (1 << *(_BYTE*)(v112 + 104));
        *(_WORD*)(a1 + 504) = v62;
        v61 = (1LL << *(_BYTE*)(v112 + 250)) | v108;
        *(_QWORD*)(a1 + 512) = v61;
        v60 = (1 << *(_BYTE*)(v112 + 115)) | v109;
        *(_DWORD*)(a1 + 508) = v60;
        v59 = *(unsigned __int16*)(*(_QWORD*)(v112 + 24) + 1064LL) | v110;
        *(_WORD*)(a1 + 506) = v59;
      } while ((v57 & 0x7FFFFFFFFFFFFFFELL) != v63);
      if ((v57 & 1) != 0) {
        goto LABEL_59;
      }
    }
  }
LABEL_75:
  v113 = *(_QWORD*)(a1 + 520);
  *(_DWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 528) = v113;
  *(_QWORD*)(a1 + 560) = *(_QWORD*)(a1 + 552);
  UnitSkillList_84cf20(a1 + 520, (__int64)v6, 1);
  v114 = *(_QWORD*)(a1 + 56);
  if (v114 != 0) {
    LODWORD(v114) = *(_WORD*)(v114 + 16) & 0xFFF;
  }
  v115 = (_QWORD*)(a1 + 600);
  LODWORD(v156_.v156[0]) = v114;
  if ((UnitSkillList_84cc00((__int64*)(a1 + 520), v156_.v156, 1) & 1) != 0) {
    v116 = *(_QWORD*)(a1 + 560);
    v117 = *(_QWORD*)(a1 + 552);
    *v115 = 0;
    *(_QWORD*)(a1 + 608) = 0;
    v118 = v116 - v117;
    if ((int)((unsigned __int64)(v116 - v117) >> 2) >= 1) {
      v119 = (int)(v118 >> 2);
      v120 = v119 <= 1 ? 1LL : (int)(v118 >> 2);
      v121 = *GameData_212c880[0];
      if (v119 >= 2) {
        v127 = (int*)(v117 + 4);
        v122 = 0;
        v123 = 0;
        v124 = 0;
        v125 = 0;
        v126 = 0;
        do {
          v126 += 2;
          v128 =
              *(_QWORD*)(*(_QWORD*)(v121 + 64) + 8LL * (*(v127 - 1) & 0xFFF));
          v129 = v125 | (1 << *(_BYTE*)(v128 + 104));
          *(_WORD*)(a1 + 600) = v129;
          v130 = (1LL << *(_BYTE*)(v128 + 250)) | v124;
          *(_QWORD*)(a1 + 608) = v130;
          v131 = (1 << *(_BYTE*)(v128 + 115)) | v123;
          *(_DWORD*)(a1 + 604) = v131;
          v132 = *(unsigned __int16*)(*(_QWORD*)(v128 + 24) + 1064LL) | v122;
          *(_WORD*)(a1 + 602) = v132;
          v133 = *v127;
          v127 += 2;
          v134 = *(_QWORD*)(*(_QWORD*)(v121 + 64) + 8LL * (v133 & 0xFFF));
          v125 = v129 | (1 << *(_BYTE*)(v134 + 104));
          *(_WORD*)(a1 + 600) = v125;
          v124 = (1LL << *(_BYTE*)(v134 + 250)) | v130;
          *(_QWORD*)(a1 + 608) = v124;
          v123 = (1 << *(_BYTE*)(v134 + 115)) | v131;
          *(_DWORD*)(a1 + 604) = v123;
          v122 = *(unsigned __int16*)(*(_QWORD*)(v134 + 24) + 1064LL) | v132;
          *(_WORD*)(a1 + 602) = v122;
        } while ((v120 & 0x7FFFFFFFFFFFFFFELL) != v126);
      }
      else {
        LOWORD(v122) = 0;
        v123 = 0;
        v124 = 0;
        LOWORD(v125) = 0;
        v126 = 0;
      }
      if ((v120 & 1) != 0) {
        v135 = *(_QWORD*)(*(_QWORD*)(v121 + 64) +
                          8LL * (*(_DWORD*)(v117 + 4 * v126) & 0xFFF));
        *(_WORD*)(a1 + 600) = v125 | (1 << *(_BYTE*)(v135 + 104));
        *(_QWORD*)(a1 + 608) = (1LL << *(_BYTE*)(v135 + 250)) | v124;
        *(_DWORD*)(a1 + 604) = (1 << *(_BYTE*)(v135 + 115)) | v123;
        *(_WORD*)(a1 + 602) = *(_WORD*)(*(_QWORD*)(v135 + 24) + 1064LL) | v122;
      }
    }
  }
  UnitSkillList_84e640(a1 + 520);
  UnitSkillList_84e760(a1 + 520);
  v136 = *(int**)(a1 + 560);
  result = *(int**)(a1 + 552);
  *v115 = 0;
  *(_QWORD*)(a1 + 608) = 0;
  v138 = (char*)v136 - (char*)result;
  if ((int)((unsigned __int64)((char*)v136 - (char*)result) >> 2) >= 1) {
    v139 = (int)(v138 >> 2);
    v140 = v139 <= 1 ? 1LL : (int)(v138 >> 2);
    v141 = *GameData_212c880[0];
    if (v139 >= 2) {
      v147 = result + 1;
      v142 = 0;
      v143 = 0;
      v144 = 0;
      v145 = 0;
      v146 = 0;
      do {
        v146 += 2;
        v148 = *(_QWORD*)(*(_QWORD*)(v141 + 64) + 8LL * (*(v147 - 1) & 0xFFF));
        v149 = v145 | (1 << *(_BYTE*)(v148 + 104));
        *(_WORD*)(a1 + 600) = v149;
        v150 = (1LL << *(_BYTE*)(v148 + 250)) | v144;
        *(_QWORD*)(a1 + 608) = v150;
        v151 = (1 << *(_BYTE*)(v148 + 115)) | v143;
        *(_DWORD*)(a1 + 604) = v151;
        v152 = *(unsigned __int16*)(*(_QWORD*)(v148 + 24) + 1064LL) | v142;
        *(_WORD*)(a1 + 602) = v152;
        v153 = *v147;
        v147 += 2;
        v154 = *(_QWORD*)(*(_QWORD*)(v141 + 64) + 8LL * (v153 & 0xFFF));
        v145 = v149 | (1 << *(_BYTE*)(v154 + 104));
        *(_WORD*)(a1 + 600) = v145;
        v144 = (1LL << *(_BYTE*)(v154 + 250)) | v150;
        *(_QWORD*)(a1 + 608) = v144;
        v143 = (1 << *(_BYTE*)(v154 + 115)) | v151;
        *(_DWORD*)(a1 + 604) = v143;
        v142 = *(unsigned __int16*)(*(_QWORD*)(v154 + 24) + 1064LL) | v152;
        *(_WORD*)(a1 + 602) = v142;
      } while ((v140 & 0x7FFFFFFFFFFFFFFELL) != v146);
    }
    else {
      LOWORD(v142) = 0;
      v143 = 0;
      v144 = 0;
      LOWORD(v145) = 0;
      v146 = 0;
    }
    if ((v140 & 1) != 0) {
      v155 = *(_QWORD*)(*(_QWORD*)(v141 + 64) + 8LL * (result[v146] & 0xFFF));
      *(_WORD*)(a1 + 600) = v145 | (1 << *(_BYTE*)(v155 + 104));
      *(_QWORD*)(a1 + 608) = (1LL << *(_BYTE*)(v155 + 250)) | v144;
      *(_DWORD*)(a1 + 604) = (1 << *(_BYTE*)(v155 + 115)) | v143;
      *(_WORD*)(a1 + 602) = *(_WORD*)(*(_QWORD*)(v155 + 24) + 1064LL) | v142;
    }
  }
  if (result != v136) {
    return (int*)GameRoutine_8517e0((__int64)result, v136,
                                    (2 * __clz(v138 >> 2)) ^ 0x7E, 1);
  }
  return result;
}

__int64 game_map_BattleUtil_EachFactorSkill_7a8c20(__int64 result, __int64 a2,
                                                   char a3, __int64 a4,
                                                   __int64 a5)
{
  __int64 v6;
  __int64 v10;
  _BYTE* v11;
  _QWORD* v12;
  _QWORD* v13;
  _WORD* v14;
  __int64 i;
  __int64 v16;
  struct {
    _BYTE v17[32];
    _BYTE* v18;
  } v17_;
  struct {
    char v19[32];
    _QWORD* v20;
  } v19_;

  if (result != 0 && a2 != 0) {
    v6 = result;
    result = game_map_BattleUtil_EachFactorSkill_7a8e00(result + 1744,
                                                        a2 + 1744, a5);
    if ((a3 & 1) == 0) {
      goto LABEL_23;
    }
    v10 = *(_QWORD*)(a5 + 32);
    if (v10 != 0) {
      if (v10 == a5) {
        v17_.v18 = v17_.v17;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v10 + 24LL))(v10, v17_.v17);
        v11 = v17_.v18;
      }
      else {
        v11 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        v17_.v18 = v11;
      }
    }
    else {
      v11 = nullptr;
      v17_.v18 = nullptr;
    }
    v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
    v13 = v12;
    *v12 = GameData_1f98f48;
    v12[2] = v6;
    v12[3] = a2;
    if (v11 != nullptr) {
      if (v11 == v17_.v17) {
        v12[8] = v12 + 4;
        (*(void (**)(_BYTE*))(*(_QWORD*)v11 + 24LL))(v11);
      }
      else {
        v12[8] = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v11 + 16LL))(v11);
      }
    }
    else {
      v12[8] = 0;
    }
    v19_.v20 = v13;
    game_UnitItemList_EachItem_alt1((_WORD*)(v6 + 828), (__int64)v19_.v19);
    v14 = (_WORD*)(v6 + 876);
    for (i = 24; i != 0; --i) {
      if (*v14 != 0) {
        (*(void (**)(_QWORD*, _WORD*))(*v13 + 48LL))(v13, v14);
      }
      v14 += 4;
    }
    (*(void (**)(_QWORD*))(*v13 + 40LL))(v13);
    result = (__int64)v17_.v18;
    if (v17_.v18 == v17_.v17) {
      v16 = 32;
    }
    else {
      if (v17_.v18 == nullptr) {
        goto LABEL_23;
      }
      v16 = 40;
    }
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)v17_.v18 + v16))((__int64)v17_.v18);
  LABEL_23:
    if (a4 != 0) {
      return game_map_BattleUtil_EachFactorSkill_7a8e00(
          *(_QWORD*)(a4 + 24) + 512LL, a2 + 1744, a5);
    }
  }
  return result;
}

__int64 game_map_BattleUtil_EachFactorSkill_7a8e00(__int64 result, __int64 a2,
                                                   __int64 a3)
{
  __int64 v5;
  __int64 v6;
  _BYTE* v9;
  __int64* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  struct {
    _BYTE v32[32];
    _BYTE* v33;
    char gap56_[8];
    __int64 v34;
    __int64 v35;
  } v32_;
  struct {
    _BYTE v36[32];
    _BYTE* v37;
  } v36_;

  if ((*(_BYTE*)(result + 88) & 6) == 0) {
    return result;
  }
  v5 = result;
  v32_.v34 = result;
  v32_.v35 = a2;
  v6 = *(_QWORD*)(a3 + 32);
  if (v6 != 0) {
    if (v6 == a3) {
      v36_.v37 = v36_.v36;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v6 + 24LL))(v6, v36_.v36);
      v9 = v36_.v37;
    }
    else {
      v9 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      v36_.v37 = v9;
    }
  }
  else {
    v9 = nullptr;
    v36_.v37 = nullptr;
  }
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v12 = v11;
  *v11 = GameData_1f98fc8;
  v13 = v32_.v35;
  v11[2] = v32_.v34;
  v11[3] = v13;
  if (v9 != nullptr) {
    if (v9 == v36_.v36) {
      v11[8] = v11 + 4;
      (*(void (**)(_BYTE*))(*(_QWORD*)v9 + 24LL))(v9);
      if ((*(_BYTE*)(v5 + 88) & 2) == 0) {
        goto LABEL_19;
      }
    }
    else {
      v11[8] = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v9 + 16LL))(v9);
      if ((*(_BYTE*)(v5 + 88) & 2) == 0) {
        goto LABEL_19;
      }
    }
  }
  else {
    v11[8] = 0;
    if ((*(_BYTE*)(v5 + 88) & 2) == 0) {
      goto LABEL_19;
    }
  }
  v14 = *(_QWORD*)(v5 + 32);
  v15 = *(_QWORD*)(v5 + 40);
  if ((int)((unsigned __int64)(v15 - v14) >> 2) >= 1) {
    v16 = 0;
    v17 = 0;
    v18 = GameData_212c880[0];
    v19 = *GameData_212c880[0];
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v19 + 64) +
                               8LL * (*(_DWORD*)(v14 + v16) & 0xFFF)) +
                    250LL) == 1) {
        (*(void (**)(_QWORD*, __int64))(*v12 + 48LL))(v12, v14 + v16);
        v19 = *v18;
        v14 = *(_QWORD*)(v5 + 32);
        v15 = *(_QWORD*)(v5 + 40);
      }
      ++v17;
      v16 += 4;
    } while (v17 < (int)((unsigned __int64)(v15 - v14) >> 2));
  }
LABEL_19:
  (*(void (**)(_QWORD*))(*v12 + 40LL))(v12);
  if (v36_.v37 == v36_.v36) {
    v20 = 32;
  }
  else {
    if (v36_.v37 == nullptr) {
      goto LABEL_24;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v36_.v37 + v20))((__int64)v36_.v37);
LABEL_24:
  v21 = *(_QWORD*)(a3 + 32);
  if (v21 != 0) {
    if (v21 == a3) {
      v32_.v33 = v32_.v32;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v21 + 24LL))(v21, v32_.v32);
      v22 = v32_.v33;
    }
    else {
      v22 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      v32_.v33 = v22;
    }
  }
  else {
    v22 = nullptr;
    v32_.v33 = nullptr;
  }
  v23 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v10, 80, 16, 0);
  v24 = v23;
  *v23 = GameData_1f99048;
  v23[2] = v5;
  v23[3] = a2;
  if (v22 == nullptr) {
    v23[8] = 0;
    if ((*(_BYTE*)(v5 + 88) & 4) == 0) {
      goto LABEL_41;
    }
    goto LABEL_36;
  }
  if (v22 != v32_.v32) {
    v23[8] = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v22 + 16LL))(v22);
    if ((*(_BYTE*)(v5 + 88) & 4) == 0) {
      goto LABEL_41;
    }
  LABEL_36:
    v25 = *(_QWORD*)(v5 + 32);
    v26 = *(_QWORD*)(v5 + 40);
    if ((int)((unsigned __int64)(v26 - v25) >> 2) >= 1) {
      v27 = 0;
      v28 = 0;
      v29 = GameData_212c880[0];
      v30 = *GameData_212c880[0];
      do {
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v30 + 64) +
                                 8LL * (*(_DWORD*)(v25 + v27) & 0xFFF)) +
                      250LL) == 2) {
          (*(void (**)(_QWORD*, __int64))(*v24 + 48LL))(v24, v25 + v27);
          v30 = *v29;
          v25 = *(_QWORD*)(v5 + 32);
          v26 = *(_QWORD*)(v5 + 40);
        }
        ++v28;
        v27 += 4;
      } while (v28 < (int)((unsigned __int64)(v26 - v25) >> 2));
    }
    goto LABEL_41;
  }
  v23[8] = v23 + 4;
  (*(void (**)(_BYTE*))(*(_QWORD*)v22 + 24LL))(v22);
  if ((*(_BYTE*)(v5 + 88) & 4) != 0) {
    goto LABEL_36;
  }
LABEL_41:
  (*(void (**)(_QWORD*))(*v24 + 40LL))(v24);
  result = (__int64)v32_.v33;
  if (v32_.v33 == v32_.v32) {
    v31 = 32;
  }
  else {
    if (v32_.v33 == nullptr) {
      return result;
    }
    v31 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v32_.v33 + v31))(
      (__int64)v32_.v33);
}

__int64 BattleUtil_7a9320(int a1)
{
  __int64* v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;

  nn_os_LockMutex(&game_g_random_mutex);
  v2 = game_map_MapRandom_instance__ptr[0];
  v3 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL) + 8);
  v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL)) ^
       (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL))
        << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v2 + 4) = v3;
  v6 = (v5 >> 8) ^ (v4 >> 19) ^ v5 ^ v4;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v2 + 8) = v4;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v2 + 12) = v6;
  v7 = v6 & 0x7FFFFFFF;
  nn_os_UnlockMutex(&game_g_random_mutex);
  return (unsigned int)(v7 % a1);
}

__int64 game_map_BattleUtil_GetHealPower(__int64 result, __int64 a2,
                                         unsigned __int16* a3, _DWORD* a4,
                                         __int64 a5, __int64 a6)
{
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  _BYTE* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned int* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    _BYTE v30[32];
    _BYTE* v31;
    char gap40_[8];
    __int64 v32;
    unsigned int* v33;
  } v30_;
  unsigned int v34;

  if (result != 0) {
    if ((*a4 & 0xFFF) == 0) {
      v11 = a6;
      v12 =
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8LL * *a3) +
                              88LL) >>
          ((*((_BYTE*)a3 + 3) & 8) != 0);
      LOBYTE(v34) = 2;
      v13 = game_Unit_GetParam_alt1(result);
      a6 = v11;
      v9 = v13 / 3 + v12;
      goto LABEL_12;
    }
    v8 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a4 & 0xFFF));
    if (*(_WORD*)(v8 + 256) != 0) {
      v9 = **(__int16**)(v8 + 264);
      if (v9 >= 1) {
        v10 = *(unsigned __int8*)(v8 + 250);
        if (v10 == 10) {
          if (a2 != 0) {
            LOBYTE(v34) = 0;
            v14 = a6;
            v15 = game_Unit_GetParam_alt1(a2);
            a6 = v14;
            v9 = (v15 * v9 + 99) / 100;
            goto LABEL_12;
          }
        }
        else if (v10 == 9) {
          goto LABEL_12;
        }
      }
    }
    v9 = 0;
  LABEL_12:
    v16 = *(_QWORD*)(a6 + 32);
    v34 = v9;
    if (v16 != 0) {
      if (v16 == a6) {
        v30_.v31 = v30_.v30;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v16 + 24LL))(v16, v30_.v30);
        v17 = v30_.v31;
      }
      else {
        v17 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        v30_.v31 = v17;
      }
    }
    else {
      v17 = nullptr;
      v30_.v31 = nullptr;
    }
    v30_.v32 = a2;
    v30_.v33 = &v34;
    v18 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       80, 16, 0);
    v19 = v18;
    *v18 = GameData_1f99148;
    v20 = v18 + 2;
    if (v17 != nullptr) {
      if (v17 == v30_.v30) {
        v18[6] = v20;
        (*(void (**)(_BYTE*))(*(_QWORD*)v17 + 24LL))(v17);
      }
      else {
        v18[6] =
            (*(__int64 (**)(_BYTE*, _QWORD*))(*(_QWORD*)v17 + 16LL))(v17, v20);
      }
    }
    else {
      v18[6] = 0;
    }
    v21 = v30_.v33;
    v19[8] = v30_.v32;
    v19[9] = v21;
    if ((*(_BYTE*)(a5 + 89) & 6) != 0 && (*(_BYTE*)(a5 + 84) & 4) != 0) {
      v22 = *(_QWORD*)(a5 + 32);
      v23 = *(_QWORD*)(a5 + 40);
      if ((int)((unsigned __int64)(v23 - v22) >> 2) >= 1) {
        v24 = 0;
        v25 = 0;
        v26 = GameData_212c880[0];
        v27 = *GameData_212c880[0];
        do {
          v28 = *(_QWORD*)(*(_QWORD*)(v27 + 64) +
                           8LL * (*(_DWORD*)(v22 + v24) & 0xFFF));
          if (((1LL << *(_BYTE*)(v28 + 250)) & 0x600) != 0 &&
              *(_BYTE*)(v28 + 115) == 2) {
            (*(void (**)(_QWORD*, __int64))(*v19 + 48LL))(v19, v22 + v24);
            v27 = *v26;
            v22 = *(_QWORD*)(a5 + 32);
            v23 = *(_QWORD*)(a5 + 40);
          }
          ++v25;
          v24 += 4;
        } while (v25 < (int)((unsigned __int64)(v23 - v22) >> 2));
      }
    }
    (*(void (**)(_QWORD*))(*v19 + 40LL))(v19);
    if (v30_.v31 == v30_.v30) {
      v29 = 32;
    }
    else {
      if (v30_.v31 == nullptr) {
        return v34;
      }
      v29 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v30_.v31 + v29))((__int64)v30_.v31);
    return v34;
  }
  return result;
}

void BattleUtil_7a96a0(float a1)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v3;
  __int64 v4;
  int v5;
  float v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  struct {
    __int64 v14;
    void* v15;
  } v14_;

  v14_.v15 = &GameData_1aa0752;
  v2 = 0x0.0p+0f;
  v14_.v14 = game_HashString((__int64)&GameData_1aa0752);
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v14_.v14);
    if (v3 != 0) {
      v2 = (float)*(int*)(v3 + 32);
    }
  }
  v14_.v15 = &GameData_1ae9494;
  v14_.v14 = game_HashString((__int64)&GameData_1ae9494);
  if (game_GameModeData_instance_ != 0 &&
      (v4 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v14_.v14)) != 0) {
    v5 = *(_DWORD*)(v4 + 32);
  }
  else {
    v5 = 0;
  }
  v6 = 0x0.0p+0f;
  if (v2 != 0x0.0p+0f && a1 <= 0x1.0000000000000p+0f && a1 >= 0x0.0p+0f) {
    v11 = a1 + 0x0.0p+0f;
    if (a1 <= 0x1.3333340000000p-2f) {
      v13 = 0x0.0p+0f;
      v12 = v2;
      goto LABEL_26;
    }
    if (a1 > 0x1.6666680000000p-1f) {
      v12 = 0x0.0p+0f;
      v11 = v11 + -0x1.6666680000000p-1f;
      v13 = v2;
    LABEL_26:
      v6 = GameRoutine_618640(11, v13, v12, v11, 0x1.3333340000000p-2f);
      goto LABEL_9;
    }
    v6 = v2;
  }
LABEL_9:
  v7 = *(_QWORD*)(game_g_frame_clock + 13224);
  v8 = *(_QWORD*)(v7 + 48);
  v9 = *(_QWORD*)(v7 + 56);
  if (v9 == 0) {
    v10 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 168LL);
    if (v6 <= 0x0.0p+0f) {
      goto LABEL_20;
    }
    goto LABEL_12;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 168LL);
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak();
    if (v6 <= 0x0.0p+0f) {
      goto LABEL_20;
    }
  LABEL_12:
    *(float*)(v10 + 92) = v6;
    *(_BYTE*)(v10 + 96) = 1;
    if (v5 >= 1) {
      *(_DWORD*)(v10 + 172) = v5;
      *(_BYTE*)(v10 + 176) = 1;
    }
    return;
  }
  if (v6 > 0x0.0p+0f) {
    goto LABEL_12;
  }
LABEL_20:
  if (*(_BYTE*)(v10 + 96) == 1) {
    *(_BYTE*)(v10 + 96) = 0;
  }
}

__int64 BattleUtil_7a98a0(__int64 a1, char* a2, __int64 a3, int a4)
{
  __int64 v4;
  __int64* v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64* v16;
  __int16 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64* v22;
  __int16 v24;

  v4 = 0;
  if (a2 != nullptr && a3 != 0) {
    MapUtil_752e60((void*)((__int64)&v24), (__int64)a2, a3);
    if ((unsigned __int8)v24 == (unsigned __int8)*GameData_212d170 &&
        HIBYTE(v24) == *(unsigned __int8*)(GameData_212d170 + 1LL)) {
      return 0;
    }
    else {
      v10 = GameData_212cfd0[0];
      Mind_743fc0(*GameData_212cfd0[0], a2);
      v11 = *v10;
      v12 = a2 + 847;
      v13 = 2;
      v14 = *GameData_212c878[0];
      while (1) {
        if (*(_WORD*)(v12 - 19) != 0 && (*(v12 - 16) & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v14 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v12 - 19)) +
                                72LL) < 8u) {
          LODWORD(v13) = v13 - 2;
          goto LABEL_23;
        }
        if (*(_WORD*)(v12 - 11) != 0 && (*(v12 - 8) & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v14 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v12 - 11)) +
                                72LL) < 8u) {
          break;
        }
        if (*(_WORD*)(v12 - 3) != 0 && (*v12 & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v14 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v12 - 3)) +
                                72LL) < 8u) {
          goto LABEL_23;
        }
        v13 += 3;
        v12 += 24;
        if (v13 == 32) {
          *(_QWORD*)(v11 + 44) = 0;
          *(_DWORD*)(v11 + 40) = -1;
          goto LABEL_26;
        }
      }
      LODWORD(v13) = v13 - 1;
    LABEL_23:
      v15 = *(unsigned __int8*)(v11 + 8);
      *(_DWORD*)(v11 + 40) = v13;
      if (v15 != 0 && game_UnitPool_Get((_BYTE*)(v11 + 8)) != nullptr) {
        v16 = &game_UnitPool_Get((_BYTE*)(v11 + 8))[(unsigned int)v13];
        v17 = *((_WORD*)v16 + 414);
        *(_BYTE*)(v11 + 46) = *((_BYTE*)v16 + 830);
        *(_WORD*)(v11 + 44) = v17;
        *(_BYTE*)(v11 + 47) = *((_BYTE*)v16 + 831);
        *(_DWORD*)(v11 + 48) = *((_DWORD*)v16 + 208);
      }
    LABEL_26:
      v18 = *v10;
      *(_BYTE*)(v18 + 317) = *(_BYTE*)(a3 + 2088);
      *(_WORD*)(v18 + 313) = *(_WORD*)(a3 + 584);
      v19 = *(_QWORD*)(a3 + 440);
      if (v19 != 0) {
        v20 = *(_BYTE*)(v19 + 16);
      }
      else {
        v20 = 9;
      }
      *(_BYTE*)(v18 + 315) = v20;
      *(_WORD*)(v18 + 313) = v24;
      *(_BYTE*)(v18 + 20) = 3;
      *(_QWORD*)(v18 + 12672) |= 0x200000uLL;
      v4 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 152, 16, 0);
      v21 = GameData_212c608[0];
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
      *(_QWORD*)v4 = v21 + 16;
      *(_QWORD*)(v4 + 8) = 0;
      game_ProcInst_Register(v4);
      *(_QWORD*)v4 = game_map_ProcEventBattle_vtable;
      GameRoutine_821a20();
      if ((unsigned int)(a4 - 1) <= 1) {
        v22 = game_8224a0(0);
        game_VariableManager_SetFlag((__int64)v22, a4);
      }
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
      ProcInst_657850(v4, (__int64)&GameData_21c67a8,
                      (__int64)"ProcEventBattle", 1, a1);
    }
  }
  return v4;
}

__attribute__((swiftcall)) void BattleUtil_7aa190(PSEUDO_X8 x8_, __int64 a1,
                                                  char a2, char a3)
{
  float32x4_t* a4 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64* v7;
  int v8;
  float v10;
  __int128 v11;
  float v12;
  int v13;
  float v14;
  __int128 v15;
  __int64 v16;
  __int64 v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  char v21;
  float32x4_t v25;
  float32x4_t v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  unsigned __int64 v35;
  float32x4_t v36;
  float v37;
  float32x4_t v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  __int128 v44;

  v7 = GameData_212ce80[0];
  if (a1 == 0) {
    v27 = (float)((float)((float)(unsigned int)(a2 + 256) *
                          0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
    v28 = (float)((float)((float)(unsigned int)(a3 + 256) *
                          0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
    v29 = *GameData_212ce80[0];
    if (*GameData_212ce80[0] == 0) {
    LABEL_15:
      v30 = 0x0.0p+0f;
      goto LABEL_16;
    }
  LABEL_13:
    v40 = v27;
    v43 = v28;
    v30 = Height_7c4d10(*(_QWORD*)(v29 + 61456), v27, v28);
    v27 = v40;
    v28 = v43;
  LABEL_16:
    LANES128(v26).n128_u64[0] = __PAIR64__(LODWORD(v30), LODWORD(v27));
    LANES128(v26).n128_u64[1] = LODWORD(v28);
    goto LABEL_17;
  }
  v8 = *(_DWORD*)(a1 + 592);
  v10 = (float)(unsigned int)(v8 - 1) * 0x1.4000000000000p+1f;
  if (v8 <= 0) {
    v10 = 0x0.0p+0f;
  }
  v37 =
      (float)((float)((float)((float)(unsigned int)(*(char*)(a1 + 584) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v10;
  *(float*)&v11 = v37;
  DWORD1(v11) = 0;
  *((_QWORD*)&v11 + 1) = COERCE_UNSIGNED_INT(
      (float)((float)((float)((float)(unsigned int)(*(char*)(a1 + 585) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v10);
  v35 = *((_QWORD*)&v11 + 1);
  v44 = v11;
  v34 = Unit_6c7fa0(a1, &v44);
  v12 = 0x0.0p+0f;
  v39 =
      (float)((float)((float)(unsigned int)(a2 + 256) * 0x1.4000000000000p+2f) +
              0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f;
  v41 =
      (float)((float)((float)(unsigned int)(a3 + 256) * 0x1.4000000000000p+2f) +
              0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f;
  if (*v7 != 0) {
    v12 = Height_7c4d10(*(_QWORD*)(*v7 + 61456),
                        (float)((float)((float)(unsigned int)(a2 + 256) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f,
                        (float)((float)((float)(unsigned int)(a3 + 256) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f);
  }
  v13 = *(_DWORD*)(a1 + 592);
  v33 = v12;
  v14 = (float)(unsigned int)(v13 - 1) * 0x1.4000000000000p+1f;
  if (v13 <= 0) {
    v14 = 0x0.0p+0f;
  }
  v31 =
      (float)((float)((float)((float)(unsigned int)(*(char*)(a1 + 585) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v14;
  v32 =
      (float)((float)((float)((float)(unsigned int)(*(char*)(a1 + 584) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v14;
  *(_QWORD*)&v15 = LODWORD(v32);
  *((_QWORD*)&v15 + 1) = LODWORD(v31);
  v44 = v15;
  Unit_6c7fa0(a1, &v44);
  if (*v7 != 0) {
    Height_7c4d10(*(_QWORD*)(*v7 + 61456), v39, v41);
  }
  v16 = GameRoutine_1120520();
  if (v16 == 0) {
    v27 = (float)((float)((float)(unsigned int)(a2 + 256) *
                          0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
    v28 = (float)((float)((float)(unsigned int)(a3 + 256) *
                          0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
    v29 = *v7;
    if (*v7 == 0) {
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v17 = v16;
  LANES128(v18).n128_u64[0] = __PAIR64__(LODWORD(v34), LODWORD(v37));
  LANES128(v19).n128_f32[0] =
      (float)((float)((float)(unsigned int)(a2 + 256) * 0x1.4000000000000p+2f) +
              0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f;
  LANES128(v19).n128_f32[1] = v33;
  LANES128(v18).n128_u64[1] = v35;
  v38 = v18;
  LANES128(v19).n128_u64[1] = LODWORD(v41);
  v36 = v19;
  LANES128(v18).n128_u32[1] = 0;
  LANES128(v18).n128_f32[0] = (float)(v39 - v32) * 0x1.99999a0000000p-3f;
  LANES128(v18).n128_u64[1] =
      COERCE_UNSIGNED_INT((float)(v41 - v31) * 0x1.99999a0000000p-3f);
  v20 = vmulq_f32(v18, v18);
  LANES128(v20).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u64[0];
  LODWORD(v42) =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]))))
          .n64_u32[0];
  v21 = BattleUtil_7a9bf0(a1, a2, a3);
  v25 = vmulq_n_f32(vsubq_f32(v36, v38), GameRoutine_1120420(v17, v21, v42));
  LANES128(v25).n128_u32[3] = 0;
  v26 = vaddq_f32(v38, v25);
LABEL_17:
  *a4 = v26;
}

float BattleUtil_7aa490(__int64 a1, char a2, char a3)
{
  float v3;
  int v4;
  float v8;
  __int128 v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float32x4_t v14;
  int8x16_t v15;
  char v16;
  float v21;
  float v22;
  float v23;
  __int128 v24;

  v3 = 0x1.0000000000000p+0f;
  if (a1 != 0) {
    v4 = *(_DWORD*)(a1 + 592);
    v8 = (float)(unsigned int)(v4 - 1) * 0x1.4000000000000p+1f;
    if (v4 <= 0) {
      v8 = 0x0.0p+0f;
    }
    v21 = (float)((float)((float)((float)(unsigned int)(*(char*)(a1 + 585) +
                                                        256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) +
          v8;
    v22 = (float)((float)((float)((float)(unsigned int)(*(char*)(a1 + 584) +
                                                        256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) +
          v8;
    *(_QWORD*)&v9 = LODWORD(v22);
    *((_QWORD*)&v9 + 1) = LODWORD(v21);
    v24 = v9;
    Unit_6c7fa0(a1, &v24);
    v10 = (float)((float)((float)(unsigned int)(a2 + 256) *
                          0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
    v11 = (float)((float)((float)(unsigned int)(a3 + 256) *
                          0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
    if (GameData_21ca2e8 != 0) {
      Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456), v10, v11);
    }
    v12 = GameRoutine_11206a0();
    if (v12 != 0) {
      v13 = v12;
      LANES128(v14).n128_u32[1] = 0;
      LANES128(v14).n128_u32[3] = 0;
      LANES128(v14).n128_f32[0] = (float)(v10 - v22) * 0x1.99999a0000000p-3f;
      LANES128(v14).n128_f32[2] = (float)(v11 - v21) * 0x1.99999a0000000p-3f;
      v15 = vmulq_f32(v14, v14);
      LANES128(v15).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
              .n64_u64[0];
      LODWORD(v23) =
          LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]))))
              .n64_u32[0];
      v16 = BattleUtil_7a9bf0(a1, a2, a3);
      return 0x1.0000000000000p+0f - GameRoutine_1120420(v13, v16, v23);
    }
  }
  return v3;
}

__int64 game_map_BattleUtil_GetRevengeSkill(__int64 result, __int64 a2,
                                            __int64 a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  __int64 v14;
  __int64 v15;

  v15 = result;
  if (result != 0) {
    v3 = result;
    if ((*(_WORD*)(result + 1536) & 0x10) == 0) {
      return 0;
    }
    v4 = v12;
    v14 = 0;
    v12[0] = GameData_1f991c8;
    v12[1] = &v15;
    v5 = *(_QWORD*)(v3 + 1496);
    v13 = v12;
    v12[2] = &v14;
    v6 = *(_QWORD*)(v3 + 1488);
    if ((int)((unsigned __int64)(v5 - v6) >> 2) < 1) {
      goto LABEL_14;
    }
    v7 = 0;
    v8 = 0;
    v9 = GameData_212c880[0];
    v10 = *GameData_212c880[0];
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                               8LL * (*(_DWORD*)(v6 + v7) & 0xFFF)) +
                    104LL) == 4) {
        if (v13 == nullptr) {
          GameRoutine_60a310(0, a2, a3);
        }
        (*(void (**)(_QWORD*, __int64))(*v13 + 48LL))(v13, v6 + v7);
        v10 = *v9;
        v5 = *(_QWORD*)(v3 + 1496);
        v6 = *(_QWORD*)(v3 + 1488);
      }
      ++v8;
      v7 += 4;
    } while (v8 < (int)((unsigned __int64)(v5 - v6) >> 2));
    v4 = v13;
    if (v13 == v12) {
    LABEL_14:
      v11 = 32;
    }
    else {
      if (v13 == nullptr) {
        return v14;
      }
      v11 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*v4 + v11))(v4, a2, a3);
    return v14;
  }
  return result;
}

__int64 game_map_BattleUtil_GetFactorSkill_lambda0_Invoke_7ab080(__int64 result,
                                                                 _DWORD* a2)
{
  __int64* v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned int v9;

  v2 = *(__int64**)(result + 8);
  v3 = *v2;
  if (*v2 != 0) {
    v4 = *(unsigned __int8*)(v3 + 250);
    if (v4 == 2) {
      v5 = 2;
    }
    else {
      v5 = 0;
    }
    if (v4 == 1) {
      LODWORD(v3) = 1;
    }
    else {
      LODWORD(v3) = v5;
    }
  }
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * (*a2 & 0xFFFLL));
  if (v6 != 0) {
    v7 = *(unsigned __int8*)(v6 + 250);
    if (v7 == 2) {
      v8 = 2;
    }
    else {
      v8 = 0;
    }
    if (v7 == 1) {
      v9 = 1;
    }
    else {
      v9 = v8;
    }
    if ((unsigned int)v3 < v9) {
      *v2 = v6;
    }
  }
  return result;
}

__int64 game_map_BattleUtil_GetFactorSkill_lambda0_Invoke_7ab1f0(__int64 result,
                                                                 _DWORD* a2)
{
  __int64* v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned int v9;

  v2 = *(__int64**)(result + 8);
  v3 = *v2;
  if (*v2 != 0) {
    v4 = *(unsigned __int8*)(v3 + 250);
    if (v4 == 2) {
      v5 = 2;
    }
    else {
      v5 = 0;
    }
    if (v4 == 1) {
      LODWORD(v3) = 1;
    }
    else {
      LODWORD(v3) = v5;
    }
  }
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * (*a2 & 0xFFFLL));
  if (v6 != 0) {
    v7 = *(unsigned __int8*)(v6 + 250);
    if (v7 == 2) {
      v8 = 2;
    }
    else {
      v8 = 0;
    }
    if (v7 == 1) {
      v9 = 1;
    }
    else {
      v9 = v8;
    }
    if ((unsigned int)v3 < v9) {
      *v2 = v6;
    }
  }
  return result;
}

_QWORD* game_map_BattleUtil_EachFactorSkill_lambda0_Clone_7ab370(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *result = GameData_1f98f48;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    if (v4 == a1 + 4) {
      v5 = result;
      result[8] = result + 4;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
    }
    else {
      v5 = result;
      result[8] = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                       *v4 + 16LL))((void*)v4, v4));
    }
    return v5;
  }
  else {
    result[8] = 0;
  }
  return result;
}

_QWORD*

game_map_BattleUtil_EachFactorSkill_lambda0_CloneInto_7ab420(_QWORD* result,
                                                             _QWORD* a2)
{
  __int64 v3;
  _QWORD* v4;

  *a2 = GameData_1f98f48;
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  v4 = (_QWORD*)result[8];
  if (v4 != nullptr) {
    if (v4 == result + 4) {
      a2[8] = a2 + 4;
      return (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)result[8] + 24LL))(
          result[8]);
    }
    else {
      result = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                       *v4 + 16LL))((void*)v4, result[8]));
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  return result;
}

__int64

game_map_BattleUtil_EachFactorSkill_lambda0_Invoke_7ab4f0(__int64 a1,
                                                          unsigned __int16* a2)
{
  __int64 result;

  result = UnitItem_6e8bc0(a2, *(_QWORD*)(a1 + 16));
  if ((result & 1) != 0) {
    return game_map_BattleUtil_EachFactorSkill_7a8e00_alt1(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                              8LL * *a2) +
                   24LL) +
            8LL,
        *(_QWORD*)(a1 + 24) + 1744LL, a1 + 32);
  }
  return result;
}

_QWORD* game_map_BattleUtil_EachFactorSkill_lambda0_Clone_7ab660(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *result = GameData_1f98fc8;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    if (v4 == a1 + 4) {
      v5 = result;
      result[8] = result + 4;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
    }
    else {
      v5 = result;
      result[8] = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                       *v4 + 16LL))((void*)v4, v4));
    }
    return v5;
  }
  else {
    result[8] = 0;
  }
  return result;
}

_QWORD*

game_map_BattleUtil_EachFactorSkill_lambda0_CloneInto_7ab710(_QWORD* result,
                                                             _QWORD* a2)
{
  __int64 v3;
  _QWORD* v4;

  *a2 = GameData_1f98fc8;
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  v4 = (_QWORD*)result[8];
  if (v4 != nullptr) {
    if (v4 == result + 4) {
      a2[8] = a2 + 4;
      return (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)result[8] + 24LL))(
          result[8]);
    }
    else {
      result = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                       *v4 + 16LL))((void*)v4, result[8]));
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  return result;
}

_QWORD* game_map_BattleUtil_EachFactorSkill_lambda1_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *result = GameData_1f99048;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    if (v4 == a1 + 4) {
      v5 = result;
      result[8] = result + 4;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
    }
    else {
      v5 = result;
      result[8] = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                       *v4 + 16LL))((void*)v4, v4));
    }
    return v5;
  }
  else {
    result[8] = 0;
  }
  return result;
}

_QWORD* game_map_BattleUtil_EachFactorSkill_lambda1_CloneInto(_QWORD* result,
                                                              _QWORD* a2)
{
  __int64 v3;
  _QWORD* v4;

  *a2 = GameData_1f99048;
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  v4 = (_QWORD*)result[8];
  if (v4 != nullptr) {
    if (v4 == result + 4) {
      a2[8] = a2 + 4;
      return (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)result[8] + 24LL))(
          result[8]);
    }
    else {
      result = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                       *v4 + 16LL))((void*)v4, result[8]));
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  return result;
}

__int64 game_map_BattleUtil_EachFactorSkill_lambda1_Invoke(__int64 result,
                                                           _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if ((*a2 & 0xFFF) != 0) {
    v3 = *(_QWORD*)(result + 16);
    v2 = *(_QWORD*)(result + 24);
    v5 = result;
    v6 = GameData_212c880[0];
    v7 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    result = GameRoutine_6fc510(v7);
    if ((result & 1) == 0) {
      if (*(_BYTE*)(v7 + 273) == 0 ||
          ((v8 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8 * (*a2 & 0xFFFLL)),
            v9 = *(unsigned __int8*)(v8 + 104),
            v10 = *(unsigned __int8*)(v8 + 273), (unsigned int)(v9 - 5) >= 2)
               ? (v11 = 0)
               : (v11 = (*a2 >> 19) & 0x1F),
           v11 - ((*a2 >> 12) & 0x7F) + v10 >= 1)) {
        result = GameRoutine_6fc7a0(v7, v3);
        if ((result & 1) != 0) {
          result = GameRoutine_6fc960(v7, v2);
          if ((result & 1) != 0) {
            v14 = *(_QWORD*)(v5 + 64);
            if (v14 == 0) {
              GameRoutine_60a310(0, v12, v13);
            }
            return (*(__int64 (**)(__int64, _DWORD*))(*(_QWORD*)v14 + 48LL))(
                v14, a2);
          }
        }
      }
    }
  }
  return result;
}

_QWORD* game_map_BattleUtil_GetHealPower_lambda0_Clone(_QWORD* a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *result = GameData_1f99148;
  v3 = result + 2;
  v4 = (_QWORD*)a1[6];
  if (v4 != nullptr) {
    if (v4 == a1 + 2) {
      result[6] = v3;
      v7 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
      result = v7;
    }
    else {
      v5 = result;
      v6 = X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                  PSEUDO_X8, _QWORD, _QWORD*))(*v4 + 16LL))(
                                  (void*)v4, a1[6], v3));
      result = v5;
      v5[6] = v6;
    }
  }
  else {
    result[6] = 0;
  }
  v8 = a1[9];
  result[8] = a1[8];
  result[9] = v8;
  return result;
}

__int64 game_map_BattleUtil_GetHealPower_lambda0_CloneInto(_QWORD* a1,
                                                           _QWORD* a2)
{
  _QWORD* v4;
  __int64 result;

  *a2 = GameData_1f99148;
  v4 = a2 + 2;
  result = a1[6];
  if (result != 0) {
    if ((_QWORD*)result == a1 + 2) {
      a2[6] = v4;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[6] + 24LL))(a1[6]);
    }
    else {
      result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)result + 16LL))(
          result, v4);
      a2[6] = result;
    }
  }
  else {
    a2[6] = 0;
  }
  a2[9] = a1[9];
  a2[8] = a1[8];
  return result;
}

__int64 game_map_BattleUtil_GetHealPower_lambda0_Invoke(__int64 a1, _DWORD* a2,
                                                        __int64 a3)
{
  __int64 v4;
  __int64 result;
  __int64 v7;
  int v8;
  int v9;
  _BYTE v10[4];

  v4 = *(_QWORD*)(a1 + 48);
  if (v4 == 0) {
    GameRoutine_60a310(0, a2, a3);
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
  if ((result & 1) != 0) {
    v7 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v7 + 256) == 0) {
      goto LABEL_10;
    }
    v8 = **(__int16**)(v7 + 264);
    if (v8 < 1) {
      goto LABEL_10;
    }
    v9 = *(unsigned __int8*)(v7 + 250);
    if (v9 == 10) {
      result = *(_QWORD*)(a1 + 64);
      if (result == 0) {
      LABEL_10:
        v8 = 0;
        goto LABEL_11;
      }
      v10[0] = 0;
      result = game_Unit_GetParam(result, v10, 1);
      v8 = ((int)result * v8 + 99) / 100;
    }
    else if (v9 != 9) {
      goto LABEL_10;
    }
  LABEL_11:
    **(_DWORD**)(a1 + 72) += v8;
  }
  return result;
}

__int64 game_map_BattleUtil_GetRevengeSkill_lambda0_Invoke(__int64 result,
                                                           _DWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;

  v2 = **(_QWORD**)(result + 8);
  if (v2 != 0 && (*a2 & 0xFFF) != 0) {
    v4 = result;
    v5 = GameData_212c880[0];
    v6 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    result = GameRoutine_6fc510(v6);
    if ((result & 1) == 0) {
      if (*(_BYTE*)(v6 + 273) == 0 ||
          ((v7 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * (*a2 & 0xFFFLL)),
            v8 = *(unsigned __int8*)(v7 + 104),
            v9 = *(unsigned __int8*)(v7 + 273), (unsigned int)(v8 - 5) >= 2)
               ? (v10 = 0)
               : (v10 = (*a2 >> 19) & 0x1F),
           v10 - ((*a2 >> 12) & 0x7F) + v9 >= 1)) {
        result = GameRoutine_6fc7a0(v6, v2 + 1744);
        if ((result & 1) != 0) {
          **(_QWORD**)(v4 + 16) =
              *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (*a2 & 0xFFF));
        }
      }
    }
  }
  return result;
}

__int64 BattleUtil_7ac940(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  __int64* v8;
  __int64 v9;
  unsigned __int32 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int128 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 i;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  __int64 v49;
  int v50;
  __int64 v52;
  float32x4_t v53;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d8770,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21d8770) != 0) {
    GameData_21d7830 = 13;
    GameData_21d6238 = 0;
    GameData_21d6240 = (__int64)GameRoutine_7ae5a0;
    GameData_21d6d68 = 0;
    GameData_21d6d60 = 0;
    GameData_21d6d78 = 0;
    GameData_21d75f0 = 13;
    GameData_21d6378 = 0;
    GameData_21d6380 = (__int64)GameRoutine_7aeb00;
    GameData_21d65b0 = 12;
    GameData_21d7870 = 13;
    GameData_21d6278 = 0;
    GameData_21d6280 = (__int64)GameRoutine_7ae9a0;
    GameData_21d63b8 = 0;
    GameData_21d63c0 = (__int64)GameRoutine_7af0c0;
    GameData_21d6610 = 1;
    GameData_21d7880 = (__int64)GameRoutine_7b3870;
    GameData_21d62b8 = 0;
    GameData_21d62c0 = (__int64)GameRoutine_7ae9c0;
    GameData_21d63f8 = 0;
    GameData_21d6400 = (__int64)GameRoutine_7af120;
    GameData_21d6b50 = 5;
    GameData_21d78b0 = 13;
    GameData_21d62f8 = 0;
    GameData_21d6300 = (__int64)GameRoutine_7aeaa0;
    GameData_21d6480 = (__int64)GameRoutine_7afbe0;
    GameData_21d6950 = 4;
    GameData_21d78c0 = (__int64)GameRoutine_7b3ac0;
    GameData_21d64f0 = 3;
    GameData_21d6810 = 3;
    GameData_21d69c0 = (__int64)GameRoutine_7b00b0;
    GameData_21d78f0 = 13;
    GameData_21d6a00 = (__int64)GameRoutine_7b00c0;
    GameData_21d6440 = (__int64)GameRoutine_7afa60;
    GameData_21d6a40 = (__int64)GameRoutine_7b0210;
    GameData_21d7900 = (__int64)GameRoutine_7b3bb0;
    GameData_21d7840 = (__int64)GameRoutine_7afa60;
    GameData_21d6a80 = (__int64)ProcMapSeqBattle_7b0220;
    GameData_21d6ac0 = (__int64)GameRoutine_7b0670;
    GameData_21d6c80 = (__int64)ProcMapSeqBattle_7b0220;
    GameData_21d77f0 = 13;
    GameData_21d6230 = 13;
    GameData_21d6270 = 13;
    GameData_21d62b0 = 13;
    GameData_21d6530 = 25;
    GameData_21d6570 = 25;
    GameData_21d65d0 = 7;
    GameData_21d6630 = 25;
    GameData_21d6670 = 25;
    GameData_21d66b0 = 12;
    GameData_21d66d0 = 7;
    GameData_21d6770 = 25;
    GameData_21d67b0 = 12;
    GameData_21d67d0 = 7;
    GameData_21d6d88 = 0;
    GameData_21d6d90 = 0;
    GameData_21d6330 = 2;
    GameData_21d64b0 = 2;
    GameData_21d6550 = 14;
    GameData_21d65f0 = 2;
    GameData_21d6650 = 14;
    GameData_21d66f0 = 2;
    GameData_21d6710 = 2;
    GameData_21d6730 = 25;
    GameData_21d6750 = 14;
    GameData_21d67f0 = 2;
    GameData_21d6bf0 = 14;
    GameData_21d6d98 = 0;
    GameData_21d7670 = 2;
    GameData_21d7930 = 15;
    GameData_21d7a00 = (__int64)game_map_anonymous_7b3f80;
    GameData_21d7e70 = 12;
    GameData_21d7a30 = 13;
    GameData_21d6790 = 5;
    GameData_21d7e30 = 13;
    GameData_21d6bc0 = (__int64)ProcMapSeqBattle_7b06d0;
    GameData_21d6c00 = (__int64)GameRoutine_7b0700;
    GameData_21d6690 = 4;
    GameData_21d7df0 = 13;
    GameData_21d6c40 = (__int64)GameRoutine_7b11a0;
    GameData_21d6590 = 3;
    GameData_21d6b80 = (__int64)GameRoutine_7afdf0;
    GameData_21d6cc0 = (__int64)GameRoutine_7b11b0;
    GameData_21d7e00 = (__int64)game_map_anonymous_7b4560;
    GameData_21d6840 = (__int64)GameRoutine_7afc60;
    GameData_21d6d50 = 6;
    GameData_21d6880 = (__int64)GameRoutine_7afca0;
    GameData_21d7d70 = 13;
    GameData_21d6d80 = (__int64)GameRoutine_7b1220;
    GameData_21d68c0 = (__int64)GameRoutine_7afdb0;
    GameData_21d6e10 = 10;
    GameData_21d62f0 = 13;
    GameData_21d6350 = 13;
    GameData_21d6370 = 13;
    GameData_21d7db0 = 13;
    GameData_21d6980 = (__int64)GameRoutine_7afdf0;
    GameData_21d6e80 = (__int64)GameRoutine_7b13d0;
    GameData_21d6ec0 = (__int64)ProcMapSeqBattle_7b1520;
    GameData_21d7dc0 = (__int64)GameRoutine_7b4550;
    GameData_21d6f40 = (__int64)ProcMapSeqBattle_7b16f0;
    GameData_21d63b0 = 13;
    GameData_21d63f0 = 13;
    GameData_21d68f0 = 26;
    GameData_21d6930 = 2;
    GameData_21d6b30 = 2;
    GameData_21d6d30 = 2;
    GameData_21d6da0 = 0;
    GameData_21d7d80 = (__int64)GameRoutine_7b44d0;
    GameData_21d7690 = 15;
    GameData_21d7940 = (__int64)GameRoutine_7b3ef0;
    GameData_21d7970 = 2;
    GameData_21d79b0 = 13;
    GameData_21d7a40 = (__int64)GameRoutine_7b4200;
    GameData_21d79c0 = (__int64)GameRoutine_7b3f20;
    GameData_21d79f0 = 13;
    GameData_21d7f30 = 13;
    GameData_21d7f40 = (__int64)game_map_anonymous_7b4800;
    GameData_21d7d30 = 13;
    GameData_21d7ef0 = 14;
    GameData_21d7f00 = (__int64)GameRoutine_7b47b0;
    GameData_21d7eb0 = 2;
    GameData_21d6430 = 13;
    GameData_21d6470 = 13;
    GameData_21d6af0 = 26;
    GameData_21d7a70 = 25;
    GameData_21d6830 = 13;
    GameData_21d6870 = 13;
    GameData_21d68b0 = 13;
    GameData_21d6cf0 = 26;
    GameData_21d6da8 = 0;
    GameData_21d6db0 = 26;
    GameData_21d6dd8 = 0;
    GameData_21d6de0 = 0;
    GameData_21d6de8 = 0;
    GameData_21d6dd0 = 0;
    GameData_21d7cf0 = 13;
    GameData_21d6970 = 13;
    GameData_21d69b0 = 13;
    GameData_21d69f0 = 13;
    GameData_21d6a30 = 13;
    GameData_21d6a70 = 13;
    GameData_21d6ab0 = 13;
    GameData_21d6b70 = 13;
    GameData_21d6bb0 = 13;
    GameData_21d6c30 = 13;
    GameData_21d6c70 = 13;
    GameData_21d7c70 = 13;
    GameData_21d6248 = 0;
    GameData_21d6250 = 0;
    GameData_21d6258 = 0;
    GameData_21d6260 = 0;
    GameData_21d6268 = 0;
    GameData_21d6288 = 0;
    GameData_21d6cb0 = 13;
    GameData_21d6d70 = 13;
    GameData_21d6dc8 = 0;
    GameData_21d7c80 = (__int64)GameRoutine_7b43b0;
    GameData_21d6290 = 0;
    GameData_21d6298 = 0;
    GameData_21d62a0 = 0;
    GameData_21d62a8 = 0;
    GameData_21d62c8 = 0;
    GameData_21d62d0 = 0;
    GameData_21d62d8 = 0;
    GameData_21d62e0 = 0;
    GameData_21d62e8 = 0;
    GameData_21d6dc0 = 0;
    GameData_21d7cb0 = 13;
    GameData_21d6308 = 0;
    GameData_21d6310 = 0;
    GameData_21d6318 = 0;
    GameData_21d6320 = 0;
    GameData_21d6328 = 0;
    GameData_21d6340 = 0;
    GameData_21d6348 = 0;
    GameData_21d6338 = 0;
    GameData_21d6358 = 0;
    GameData_21d6360 = 0;
    GameData_21d6368 = 0;
    GameData_21d7c30 = 2;
    GameData_21d6388 = 0;
    GameData_21d6390 = 0;
    GameData_21d6398 = 0;
    GameData_21d63a0 = 0;
    GameData_21d63a8 = 0;
    GameData_21d63c8 = 0;
    GameData_21d63d0 = 0;
    GameData_21d63d8 = 0;
    GameData_21d63e0 = 0;
    GameData_21d63e8 = 0;
    GameData_21d7c50 = 17;
    GameData_21d6408 = 0;
    GameData_21d6410 = 0;
    GameData_21d6418 = 0;
    GameData_21d6420 = 0;
    GameData_21d6428 = 0;
    GameData_21d6438 = 0;
    GameData_21d6448 = 0;
    GameData_21d6450 = 0;
    GameData_21d6458 = 0;
    GameData_21d6460 = 0;
    GameData_21d7bf0 = 12;
    GameData_21d6468 = 0;
    GameData_21d6478 = 0;
    GameData_21d6488 = 0;
    GameData_21d6490 = 0;
    GameData_21d6498 = 0;
    GameData_21d64a0 = 0;
    GameData_21d64a8 = 0;
    GameData_21d64d8 = 0;
    GameData_21d64e0 = 0;
    GameData_21d64e8 = 0;
    GameData_21d7990 = 16;
    GameData_21d7c10 = 16;
    GameData_21d64d0 = 0;
    GameData_21d64c8 = 0;
    GameData_21d64c0 = 0;
    GameData_21d64b8 = 0;
    GameData_21d6518 = 0;
    GameData_21d6520 = 0;
    GameData_21d6528 = 0;
    GameData_21d64f8 = 0;
    GameData_21d6500 = 0;
    GameData_21d7bb0 = 13;
    GameData_21d6508 = 0;
    GameData_21d6510 = 0;
    GameData_21d6538 = 0;
    GameData_21d6540 = 0;
    GameData_21d6548 = 0;
    GameData_21d6558 = 0;
    GameData_21d6560 = 0;
    GameData_21d6568 = 0;
    GameData_21d6588 = 0;
    GameData_21d7bc0 = (__int64)GameRoutine_7b4390;
    GameData_21d6580 = 0;
    GameData_21d6578 = 0;
    GameData_21d6598 = 0;
    GameData_21d65a0 = 0;
    GameData_21d65a8 = 0;
    GameData_21d65b8 = 0;
    GameData_21d65c0 = 0;
    GameData_21d65c8 = 0;
    GameData_21d65d8 = 0;
    GameData_21d65e0 = 0;
    GameData_21d7ab0 = 25;
    GameData_21d65e8 = 0;
    GameData_21d6608 = 0;
    GameData_21d6600 = 0;
    GameData_21d65f8 = 0;
    GameData_21d6618 = 0;
    GameData_21d6620 = 0;
    GameData_21d6628 = 0;
    GameData_21d6648 = 0;
    GameData_21d6640 = 0;
    GameData_21d6638 = 0;
    GameData_21d7b70 = 13;
    GameData_21d6658 = 0;
    GameData_21d6660 = 0;
    GameData_21d6668 = 0;
    GameData_21d6688 = 0;
    GameData_21d6680 = 0;
    GameData_21d6678 = 0;
    GameData_21d6698 = 0;
    GameData_21d66a0 = 0;
    GameData_21d66a8 = 0;
    GameData_21d66c8 = 0;
    GameData_21d7af0 = 13;
    GameData_21d66c0 = 0;
    GameData_21d66b8 = 0;
    GameData_21d66d8 = 0;
    GameData_21d66e0 = 0;
    GameData_21d66e8 = 0;
    GameData_21d6708 = 0;
    GameData_21d6700 = 0;
    GameData_21d66f8 = 0;
    GameData_21d6718 = 0;
    GameData_21d6720 = 0;
    GameData_21d6728 = 0;
    GameData_21d6748 = 0;
    GameData_21d6740 = 0;
    GameData_21d6738 = 0;
    GameData_21d6758 = 0;
    GameData_21d6760 = 0;
    GameData_21d6768 = 0;
    GameData_21d6788 = 0;
    GameData_21d6780 = 0;
    GameData_21d6778 = 0;
    GameData_21d6db8 = 0;
    GameData_21d6df0 = 2;
    GameData_21d6798 = 0;
    GameData_21d67a0 = 0;
    GameData_21d67a8 = 0;
    GameData_21d67c8 = 0;
    GameData_21d67c0 = 0;
    GameData_21d67b8 = 0;
    GameData_21d67d8 = 0;
    GameData_21d67e0 = 0;
    GameData_21d67e8 = 0;
    GameData_21d6808 = 0;
    GameData_21d6800 = 0;
    GameData_21d67f8 = 0;
    GameData_21d6818 = 0;
    GameData_21d6820 = 0;
    GameData_21d6828 = 0;
    GameData_21d6838 = 0;
    GameData_21d6848 = 0;
    GameData_21d6850 = 0;
    GameData_21d6858 = 0;
    GameData_21d6860 = 0;
    GameData_21d6868 = 0;
    GameData_21d6878 = 0;
    GameData_21d6888 = 0;
    GameData_21d6890 = 0;
    GameData_21d6898 = 0;
    GameData_21d68a0 = 0;
    GameData_21d68a8 = 0;
    GameData_21d68b8 = 0;
    GameData_21d68c8 = 0;
    GameData_21d68d0 = 0;
    GameData_21d68d8 = 0;
    GameData_21d68e0 = 0;
    GameData_21d68e8 = 0;
    GameData_21d6918 = 0;
    GameData_21d6920 = 0;
    GameData_21d6928 = 0;
    GameData_21d6910 = 0;
    GameData_21d6908 = 0;
    GameData_21d6900 = 0;
    GameData_21d68f8 = 0;
    GameData_21d6938 = 0;
    GameData_21d6940 = 0;
    GameData_21d6948 = 0;
    GameData_21d6958 = 0;
    GameData_21d6960 = 0;
    GameData_21d6968 = 0;
    GameData_21d6978 = 0;
    GameData_21d6988 = 0;
    GameData_21d6990 = 0;
    GameData_21d6998 = 0;
    GameData_21d69a0 = 0;
    GameData_21d69a8 = 0;
    GameData_21d69b8 = 0;
    GameData_21d69c8 = 0;
    GameData_21d69d0 = 0;
    GameData_21d69d8 = 0;
    GameData_21d69e0 = 0;
    GameData_21d69e8 = 0;
    GameData_21d69f8 = 0;
    GameData_21d6a08 = 0;
    GameData_21d6a10 = 0;
    GameData_21d6a18 = 0;
    GameData_21d6a20 = 0;
    GameData_21d6a28 = 0;
    GameData_21d6a38 = 0;
    GameData_21d6a48 = 0;
    GameData_21d6a50 = 0;
    GameData_21d6a58 = 0;
    GameData_21d6a60 = 0;
    GameData_21d6a68 = 0;
    GameData_21d6a78 = 0;
    GameData_21d6a88 = 0;
    GameData_21d6a90 = 0;
    GameData_21d6a98 = 0;
    GameData_21d6aa0 = 0;
    GameData_21d6aa8 = 0;
    GameData_21d6ab8 = 0;
    GameData_21d6ac8 = 0;
    GameData_21d6ad0 = 0;
    GameData_21d6ad8 = 0;
    GameData_21d6ae0 = 0;
    GameData_21d6ae8 = 0;
    GameData_21d6b18 = 0;
    GameData_21d6b20 = 0;
    GameData_21d6b28 = 0;
    GameData_21d6b10 = 0;
    GameData_21d6b08 = 0;
    GameData_21d6b00 = 0;
    GameData_21d6af8 = 0;
    GameData_21d6b38 = 0;
    GameData_21d6b40 = 0;
    GameData_21d6b48 = 0;
    GameData_21d6b58 = 0;
    GameData_21d6b60 = 0;
    GameData_21d6b68 = 0;
    GameData_21d6b78 = 0;
    GameData_21d6b88 = 0;
    GameData_21d6b90 = 0;
    GameData_21d6b98 = 0;
    GameData_21d6ba0 = 0;
    GameData_21d6ba8 = 0;
    GameData_21d6bb8 = 0;
    GameData_21d6bc8 = 0;
    GameData_21d6bd0 = 0;
    GameData_21d6bd8 = 0;
    GameData_21d6be0 = 0;
    GameData_21d6be8 = 0;
    GameData_21d6bf8 = 0;
    GameData_21d6c08 = 0;
    GameData_21d6c10 = 0;
    GameData_21d6c18 = 0;
    GameData_21d6c20 = 0;
    GameData_21d6c28 = 0;
    GameData_21d6c38 = 0;
    GameData_21d6c48 = 0;
    GameData_21d6c50 = 0;
    GameData_21d6c58 = 0;
    GameData_21d6c60 = 0;
    GameData_21d6c68 = 0;
    GameData_21d6c78 = 0;
    GameData_21d6c88 = 0;
    GameData_21d6c90 = 0;
    GameData_21d6c98 = 0;
    GameData_21d6ca0 = 0;
    GameData_21d6ca8 = 0;
    GameData_21d6cb8 = 0;
    GameData_21d6cc8 = 0;
    GameData_21d6cd0 = 0;
    GameData_21d6cd8 = 0;
    GameData_21d6ce0 = 0;
    GameData_21d6ce8 = 0;
    GameData_21d6d18 = 0;
    GameData_21d6d20 = 0;
    GameData_21d6d28 = 0;
    GameData_21d6d10 = 0;
    GameData_21d6d08 = 0;
    GameData_21d6d00 = 0;
    GameData_21d6cf8 = 0;
    GameData_21d6d38 = 0;
    GameData_21d6d40 = 0;
    GameData_21d6d48 = 0;
    GameData_21d6d58 = 0;
    GameData_21d6df8 = 0;
    GameData_21d6e00 = 0;
    GameData_21d6e08 = 0;
    GameData_21d6e18 = 0;
    GameData_21d6e20 = 0;
    GameData_21d6e28 = 0;
    GameData_21d6e30 = 14;
    GameData_21d6e38 = 0;
    GameData_21d6e40 = (__int64)ProcMapSeqBattle_7b12b0;
    GameData_21d6e48 = 0;
    GameData_21d6e50 = 0;
    GameData_21d6e58 = 0;
    GameData_21d6e60 = 0;
    GameData_21d6e68 = 0;
    GameData_21d6e70 = 13;
    GameData_21d6e78 = 0;
    GameData_21d6e88 = 0;
    GameData_21d6e90 = 0;
    GameData_21d6e98 = 0;
    GameData_21d6ea0 = 0;
    GameData_21d6ea8 = 0;
    GameData_21d6eb0 = 13;
    GameData_21d6eb8 = 0;
    GameData_21d6ec8 = 0;
    GameData_21d6ed0 = 0;
    GameData_21d6ed8 = 0;
    GameData_21d6ee0 = 0;
    GameData_21d6ee8 = 0;
    GameData_21d6ef0 = 14;
    GameData_21d6ef8 = 0;
    GameData_21d6f00 = (__int64)ProcMapSeqBattle_7b12b0;
    GameData_21d6f08 = 0;
    GameData_21d77d0 = 0;
    GameData_21d7f28 = 0;
    GameData_21d7f38 = 0;
    GameData_21d7f48 = 0;
    GameData_21d7f50 = 0;
    GameData_21d7f58 = 0;
    GameData_21d7f60 = 0;
    GameData_21d7ee0 = 0;
    GameData_21d7ee8 = 0;
    GameData_21d7ef8 = 0;
    GameData_21d7f08 = 0;
    GameData_21d7f10 = 0;
    GameData_21d7f18 = 0;
    GameData_21d7f20 = 0;
    GameData_21d7e98 = 0;
    GameData_21d7ea0 = 0;
    GameData_21d7ea8 = 0;
    GameData_21d7eb8 = 0;
    GameData_21d7ec0 = 0;
    GameData_21d7ec8 = 0;
    GameData_21d7ed0 = 8;
    GameData_21d7ed8 = 0;
    GameData_21d7e50 = 0;
    GameData_21d7e58 = 0;
    GameData_21d7e60 = 0;
    GameData_21d7e68 = 0;
    GameData_21d7e88 = 0;
    GameData_21d7e80 = 0;
    GameData_21d7e78 = 0;
    GameData_21d7e90 = 19;
    GameData_21d7e08 = 0;
    GameData_21d7e10 = 0;
    GameData_21d7e18 = 0;
    GameData_21d7e20 = 0;
    GameData_21d7e28 = 0;
    GameData_21d7e38 = 0;
    GameData_21d7e40 = (__int64)GameRoutine_7b2dc0;
    GameData_21d7e48 = 0;
    GameData_21d7dc8 = 0;
    GameData_21d7dd0 = 0;
    GameData_21d7dd8 = 0;
    GameData_21d7de0 = 0;
    GameData_21d7de8 = 0;
    GameData_21d7df8 = 0;
    GameData_21d7d88 = 0;
    GameData_21d7d90 = 0;
    GameData_21d7d98 = 0;
    GameData_21d7da0 = 0;
    GameData_21d7da8 = 0;
    GameData_21d7db8 = 0;
    GameData_21d7d40 = (__int64)GameRoutine_7b2960;
    GameData_21d7d48 = 0;
    GameData_21d7d50 = 0;
    GameData_21d7d58 = 0;
    GameData_21d7d60 = 0;
    GameData_21d7d68 = 0;
    GameData_21d7d78 = 0;
    GameData_21d7cf8 = 0;
    GameData_21d7d00 = (__int64)GameRoutine_7b20c0;
    GameData_21d7d08 = 0;
    GameData_21d7d10 = 0;
    GameData_21d7d18 = 0;
    GameData_21d7d20 = 0;
    GameData_21d7d28 = 0;
    GameData_21d7d38 = 0;
    GameData_21d7c68 = 0;
    GameData_21d7cb8 = 0;
    GameData_21d7cc0 = (__int64)game_map_anonymous_7b1f40;
    GameData_21d7cc8 = 0;
    GameData_21d7cd0 = 0;
    GameData_21d7cd8 = 0;
    GameData_21d7ce0 = 0;
    GameData_21d7ce8 = 0;
    GameData_21d7c78 = 0;
    GameData_21d7c88 = 0;
    GameData_21d7c90 = 0;
    GameData_21d7c98 = 0;
    GameData_21d7ca0 = 0;
    GameData_21d7ca8 = 0;
    GameData_21d7c18 = 0;
    GameData_21d7c20 = 0;
    GameData_21d7c28 = 0;
    GameData_21d7c38 = 0;
    GameData_21d7c40 = 0;
    GameData_21d7c48 = 0;
    GameData_21d7c58 = 0;
    GameData_21d7c60 = 0;
    GameData_21d7bd0 = 0;
    GameData_21d7bd8 = 0;
    GameData_21d7be0 = 0;
    GameData_21d7be8 = 0;
    GameData_21d7c08 = 0;
    GameData_21d7c00 = 0;
    GameData_21d7bf8 = 0;
    GameData_21d7b88 = 0;
    GameData_21d7b90 = 0;
    GameData_21d7b98 = 0;
    GameData_21d7ba0 = 0;
    GameData_21d7ba8 = 0;
    GameData_21d7bb8 = 0;
    GameData_21d7bc8 = 0;
    GameData_21d7b48 = 0;
    GameData_21d7b50 = 0;
    GameData_21d7b58 = 0;
    GameData_21d7b60 = 0;
    GameData_21d7b68 = 0;
    GameData_21d7b78 = 0;
    GameData_21d7b80 = (__int64)GameRoutine_7b2e60;
    GameData_21d7af8 = 0;
    GameData_21d7b00 = (__int64)GameRoutine_7b2c20;
    GameData_21d7b08 = 0;
    GameData_21d7b10 = 0;
    GameData_21d7b18 = 0;
    GameData_21d7b20 = 0;
    GameData_21d7b28 = 0;
    GameData_21d7b30 = 13;
    GameData_21d7b38 = 0;
    GameData_21d7b40 = (__int64)GameRoutine_7b2c80;
    GameData_21d7a90 = 8;
    GameData_21d7a98 = 0;
    GameData_21d7aa0 = 0;
    GameData_21d7aa8 = 0;
    GameData_21d7ab8 = 0;
    GameData_21d7ac0 = 0;
    GameData_21d7ac8 = 0;
    GameData_21d7ad0 = 9;
    GameData_21d7ad8 = 0;
    GameData_21d7ae0 = 0;
    GameData_21d7ae8 = 0;
    GameData_21d6f10 = 0;
    GameData_21d6f18 = 0;
    GameData_21d6f20 = 0;
    GameData_21d7a38 = 0;
    GameData_21d7a48 = 0;
    GameData_21d7a50 = 0;
    GameData_21d7a58 = 0;
    GameData_21d7a60 = 0;
    GameData_21d7a68 = 0;
    GameData_21d7a88 = 0;
    GameData_21d7a80 = 0;
    GameData_21d7a78 = 0;
    GameData_21d6f28 = 0;
    GameData_21d6f30 = 13;
    GameData_21d79d0 = 0;
    GameData_21d79d8 = 0;
    GameData_21d79e0 = 0;
    GameData_21d79e8 = 0;
    GameData_21d79f8 = 0;
    GameData_21d7a08 = 0;
    GameData_21d7a10 = 0;
    GameData_21d7a18 = 0;
    GameData_21d7a20 = 0;
    GameData_21d7a28 = 0;
    GameData_21d6f38 = 0;
    GameData_21d6f48 = 0;
    GameData_21d6f50 = 0;
    GameData_21d6f58 = 0;
    GameData_21d7988 = 0;
    GameData_21d7980 = 0;
    GameData_21d7978 = 0;
    GameData_21d7998 = 0;
    GameData_21d79a0 = 0;
    GameData_21d79a8 = 0;
    GameData_21d79b8 = 0;
    GameData_21d79c8 = 0;
    GameData_21d6f60 = 0;
    GameData_21d6f68 = 0;
    GameData_21d7910 = 0;
    GameData_21d7918 = 0;
    GameData_21d7920 = 0;
    GameData_21d7928 = 0;
    GameData_21d7938 = 0;
    GameData_21d7948 = 0;
    GameData_21d7950 = 0;
    GameData_21d7958 = 0;
    GameData_21d7960 = 0;
    GameData_21d7968 = 0;
    GameData_21d6f70 = 26;
    GameData_21d6f98 = 0;
    GameData_21d6fa0 = 0;
    GameData_21d6fa8 = 0;
    GameData_21d78b8 = 0;
    GameData_21d78c8 = 0;
    GameData_21d78d0 = 0;
    GameData_21d78d8 = 0;
    GameData_21d78e0 = 0;
    GameData_21d78e8 = 0;
    GameData_21d78f8 = 0;
    GameData_21d7908 = 0;
    GameData_21d6f90 = 0;
    GameData_21d6f88 = 0;
    GameData_21d7850 = 0;
    GameData_21d7858 = 0;
    GameData_21d7860 = 0;
    GameData_21d7868 = 0;
    GameData_21d7878 = 0;
    GameData_21d7888 = 0;
    GameData_21d7890 = 0;
    GameData_21d7898 = 0;
    GameData_21d78a0 = 0;
    GameData_21d78a8 = 0;
    GameData_21d6f80 = 0;
    GameData_21d6f78 = 0;
    GameData_21d6fb0 = 2;
    GameData_21d7698 = 0;
    GameData_21d7810 = 0;
    GameData_21d7818 = 0;
    GameData_21d7820 = 0;
    GameData_21d7828 = 0;
    GameData_21d7838 = 0;
    GameData_21d7848 = 0;
    GameData_21d7800 = (__int64)game_map_anonymous_7b3130;
    GameData_21d7780 = (__int64)GameData_212c710[0];
    GameData_21d77b0 = 13;
    GameData_21d77c0 = (__int64)GameRoutine_7b3050;
    GameData_21d7740 = (__int64)game_map_anonymous_7b2f00;
    GameData_21d7770 = 8;
    GameData_21d77c8 = 0;
    GameData_21d77d8 = 0;
    GameData_21d77e0 = 0;
    GameData_21d77e8 = 0;
    GameData_21d77f8 = 0;
    GameData_21d7808 = 0;
    GameData_21d7778 = 0;
    GameData_21d7790 = 0;
    GameData_21d7798 = 0;
    GameData_21d77a0 = 0;
    GameData_21d77a8 = 0;
    GameData_21d77b8 = 0;
    GameData_21d76e8 = 0;
    GameData_21d7738 = 0;
    GameData_21d7748 = 0;
    GameData_21d7750 = 0;
    GameData_21d7758 = 0;
    GameData_21d7760 = 0;
    GameData_21d7768 = 0;
    GameData_21d76f0 = 8;
    GameData_21d76f8 = 0;
    GameData_21d7190 = 12;
    GameData_21d70b0 = 14;
    GameData_21d6ff0 = 14;
    GameData_21d7170 = 2;
    GameData_21d71b0 = 13;
    GameData_21d70f0 = 13;
    GameData_21d7070 = 13;
    GameData_21d7030 = 13;
    GameData_21d7138 = 0;
    GameData_21d7700 = (__int64)GameData_212d278;
    GameData_21d7730 = 14;
    GameData_21d76b0 = 13;
    GameData_21d76c0 = (__int64)GameRoutine_7b2ed0;
    GameData_21d7710 = 0;
    GameData_21d7718 = 0;
    GameData_21d7720 = 0;
    GameData_21d7728 = 0;
    GameData_21d76a0 = 0;
    GameData_21d76a8 = 0;
    GameData_21d76b8 = 0;
    GameData_21d76c8 = 0;
    GameData_21d76d0 = 0;
    GameData_21d71c0 = (__int64)game_map_anonymous_ProcMapSeqBattle_BlowMove;
    GameData_21d7140 = 0;
    GameData_21d7178 = 0;
    GameData_21d7180 = 0;
    GameData_21d7188 = 0;
    GameData_21d76d8 = 0;
    GameData_21d76e0 = 0;
    GameData_21d7648 = 0;
    GameData_21d7640 = 0;
    GameData_21d7638 = 0;
    GameData_21d7650 = 19;
    GameData_21d7658 = 0;
    GameData_21d7660 = 0;
    GameData_21d7668 = 0;
    GameData_21d7678 = 0;
    GameData_21d7680 = 0;
    GameData_21d7688 = 0;
    GameData_21d7600 = (__int64)GameRoutine_7b2e60;
    GameData_21d7630 = 12;
    GameData_21d7100 = (__int64)game_map_anonymous_ProcMapSeqBattle_RushEnd;
    GameData_21d7080 = (__int64)game_map_anonymous_ProcMapSeqBattle_RushCommit;
    GameData_21d7040 = (__int64)GameRoutine_7b18a0;
    GameData_21d6fd0 = 11;
    GameData_21d7f70 = 13;
    GameData_21d7f80 = (__int64)GameRoutine_7b4a20;
    GameData_21d7fb0 = 13;
    GameData_21d7fc0 = (__int64)GameRoutine_7b4a30;
    GameData_21d7ff0 = 14;
    GameData_21d8000 = (__int64)GameRoutine_7b4a90;
    GameData_21d8030 = 13;
    GameData_21d8040 = (__int64)game_map_anonymous_7b4b00;
    GameData_21d8070 = 26;
    GameData_21d80b0 = 2;
    GameData_21d80f0 = 13;
    GameData_21d8100 = (__int64)game_map_anonymous_7b5500;
    GameData_21d8130 = 13;
    GameData_21d8140 = (__int64)GameRoutine_7b5630;
    GameData_21d8170 = 13;
    GameData_21d8180 = (__int64)game_map_anonymous_7b5740;
    GameData_21d81b0 = 26;
    GameData_21d81f0 = 2;
    GameData_21d6fb8 = 0;
    GameData_21d75e0 = 0;
    GameData_21d75e8 = 0;
    GameData_21d75f8 = 0;
    GameData_21d7608 = 0;
    GameData_21d7610 = 0;
    GameData_21d7618 = 0;
    GameData_21d7620 = 0;
    GameData_21d7628 = 0;
    GameData_21d7588 = 0;
    GameData_21d7590 = 0;
    GameData_21d7598 = 0;
    GameData_21d7198 = 0;
    GameData_21d71a0 = 0;
    GameData_21d7540 = (__int64)GameRoutine_7b2c20;
    GameData_21d7570 = 13;
    GameData_21d75b0 = 13;
    GameData_21d74f0 = 13;
    GameData_21d75a0 = 0;
    GameData_21d75a8 = 0;
    GameData_21d75b8 = 0;
    GameData_21d75c0 = (__int64)GameRoutine_7b2dc0;
    GameData_21d75c8 = 0;
    GameData_21d75d0 = 0;
    GameData_21d75d8 = 0;
    GameData_21d74e0 = 0;
    GameData_21d7538 = 0;
    GameData_21d7548 = 0;
    GameData_21d7550 = 0;
    GameData_21d7558 = 0;
    GameData_21d7560 = 0;
    GameData_21d7568 = 0;
    GameData_21d7578 = 0;
    GameData_21d7580 = (__int64)GameRoutine_7b2c80;
    GameData_21d74e8 = 0;
    GameData_21d7400 = (__int64)GameRoutine_7b20c0;
    GameData_21d74b0 = 25;
    GameData_21d7470 = 13;
    GameData_21d7480 = (__int64)GameRoutine_7b2870;
    GameData_21d7430 = 13;
    GameData_21d7500 = (__int64)GameRoutine_7b2960;
    GameData_21d7440 = (__int64)GameRoutine_7b2860;
    GameData_21d7530 = 13;
    GameData_21d73b0 = 13;
    GameData_21d74f8 = 0;
    GameData_21d7508 = 0;
    GameData_21d7510 = 0;
    GameData_21d7518 = 0;
    GameData_21d7520 = 0;
    GameData_21d7528 = 0;
    GameData_21d73a8 = 0;
    GameData_21d7498 = 0;
    GameData_21d74a0 = 0;
    GameData_21d74a8 = 0;
    GameData_21d74c8 = 0;
    GameData_21d74c0 = 0;
    GameData_21d74b8 = 0;
    GameData_21d74d0 = 9;
    GameData_21d74d8 = 0;
    GameData_21d7450 = 0;
    GameData_21d7370 = 25;
    GameData_21d7458 = 0;
    GameData_21d7460 = 0;
    GameData_21d7468 = 0;
    GameData_21d7478 = 0;
    GameData_21d7488 = 0;
    GameData_21d7490 = 0;
    GameData_21d7408 = 0;
    GameData_21d7410 = 0;
    GameData_21d7418 = 0;
    GameData_21d7420 = 0;
    GameData_21d7428 = 0;
    GameData_21d7438 = 0;
    GameData_21d73c0 = (__int64)game_map_anonymous_7b1f40;
    GameData_21d73f0 = 13;
    GameData_21d7270 = 13;
    GameData_21d7448 = 0;
    GameData_21d73b8 = 0;
    GameData_21d73c8 = 0;
    GameData_21d73d0 = 0;
    GameData_21d73d8 = 0;
    GameData_21d7390 = 8;
    GameData_21d7330 = 2;
    GameData_21d73e0 = 0;
    GameData_21d73e8 = 0;
    GameData_21d73f8 = 0;
    GameData_21d7358 = 0;
    GameData_21d7360 = 0;
    GameData_21d7368 = 0;
    GameData_21d7378 = 0;
    GameData_21d7380 = 0;
    GameData_21d7388 = 0;
    GameData_21d7398 = 0;
    GameData_21d73a0 = 0;
    GameData_21d7328 = 0;
    GameData_21d7310 = 0;
    GameData_21d7308 = 0;
    GameData_21d7300 = 0;
    GameData_21d72f8 = 0;
    GameData_21d7338 = 0;
    GameData_21d7340 = 0;
    GameData_21d7348 = 0;
    GameData_21d72f0 = 26;
    GameData_21d7350 = 7;
    GameData_21d7280 = (__int64)game_map_anonymous_7b1e60;
    GameData_21d72b0 = 13;
    GameData_21d72c0 = (__int64)GameRoutine_7b1f30;
    GameData_21d7230 = 2;
    GameData_21d8230 = 13;
    GameData_21d8240 = (__int64)GameRoutine_7b5870;
    GameData_21d8270 = 13;
    GameData_21d8280 = (__int64)GameRoutine_7b5890;
    GameData_21d82b0 = 13;
    GameData_21d82c0 = (__int64)GameRoutine_7b58a0;
    GameData_21d82f0 = 14;
    GameData_21d8300 = (__int64)GameRoutine_7b5a10;
    GameData_21d8330 = 13;
    GameData_21d8340 = (__int64)GameRoutine_7b5ac0;
    GameData_21d8370 = 13;
    GameData_21d8380 = (__int64)GameRoutine_7b5ad0;
    GameData_21d83b0 = 13;
    GameData_21d83c0 = (__int64)GameRoutine_7b5b00;
    GameData_21d83f0 = 13;
    GameData_21d8400 = (__int64)GameRoutine_7b5bd0;
    GameData_21d8430 = 13;
    GameData_21d8440 = (__int64)ProcMapSeqBattle_7b5c20;
    GameData_21d8470 = 13;
    GameData_21d8480 = (__int64)GameRoutine_7b5c80;
    GameData_21d84b0 = 13;
    GameData_21d84c0 = (__int64)GameRoutine_7b5d70;
    GameData_21d84f0 = 13;
    GameData_21d8500 = (__int64)GameRoutine_7b5e20;
    GameData_21d8530 = 14;
    GameData_21d7278 = 0;
    GameData_21d72c8 = 0;
    GameData_21d72d0 = 0;
    GameData_21d72d8 = 0;
    GameData_21d72e0 = 0;
    GameData_21d72e8 = 0;
    GameData_21d7318 = 0;
    GameData_21d7320 = 0;
    GameData_21d7288 = 0;
    GameData_21d7290 = 0;
    GameData_21d7298 = 0;
    GameData_21d7250 = 14;
    GameData_21d8540 = (__int64)GameRoutine_7b5e30;
    GameData_21d8570 = 13;
    GameData_21d8580 = (__int64)GameRoutine_7b60e0;
    GameData_21d85b0 = 13;
    GameData_21d85c0 = (__int64)game_map_anonymous_ProcMapSeqBattle_TryNotice;
    GameData_21d85f0 = 13;
    GameData_21d8600 = (__int64)GameRoutine_7b62c0;
    GameData_21d8630 = 26;
    GameData_21d8670 = 2;
    GameData_21d86b0 = 25;
    GameData_21d86f0 = 13;
    GameData_21d8700 = (__int64)GameRoutine_7b6310;
    GameData_21d72a0 = 0;
    GameData_21d72a8 = 0;
    GameData_21d72b8 = 0;
    GameData_21d7208 = 0;
    GameData_21d7200 = 0;
    GameData_21d71f8 = 0;
    GameData_21d7238 = 0;
    GameData_21d7240 = 0;
    GameData_21d7248 = 0;
    GameData_21d7258 = 0;
    GameData_21d7260 = 0;
    GameData_21d7268 = 0;
    GameData_21d71b8 = 0;
    GameData_21d71c8 = 0;
    GameData_21d71d0 = 0;
    GameData_21d71d8 = 0;
    GameData_21d71a8 = 0;
    GameData_21d71e0 = 0;
    GameData_21d71e8 = 0;
    GameData_21d71f0 = 26;
    GameData_21d7218 = 0;
    GameData_21d7220 = 0;
    GameData_21d7228 = 0;
    GameData_21d7210 = 0;
    GameData_21d7148 = 0;
    GameData_21d6fc0 = 0;
    GameData_21d7010 = 0;
    GameData_21d7108 = 0;
    GameData_21d7110 = 0;
    GameData_21d7118 = 0;
    GameData_21d7120 = 0;
    GameData_21d7128 = 0;
    GameData_21d7130 = 26;
    GameData_21d7158 = 0;
    GameData_21d7160 = 0;
    GameData_21d7168 = 0;
    GameData_21d7150 = 0;
    GameData_21d70b8 = 0;
    GameData_21d70c0 = (__int64)ProcMapSeqBattle_7b12b0;
    GameData_21d70c8 = 0;
    GameData_21d70d0 = 0;
    GameData_21d70d8 = 0;
    GameData_21d70e0 = 0;
    GameData_21d70e8 = 0;
    GameData_21d70f8 = 0;
    GameData_21d7068 = 0;
    GameData_21d7078 = 0;
    GameData_21d7088 = 0;
    GameData_21d7090 = 0;
    GameData_21d7098 = 0;
    GameData_21d70a0 = 0;
    GameData_21d70a8 = 0;
    GameData_21d7018 = 0;
    GameData_21d7020 = 0;
    GameData_21d7028 = 0;
    GameData_21d7038 = 0;
    GameData_21d7048 = 0;
    GameData_21d7050 = 0;
    GameData_21d7058 = 0;
    GameData_21d7060 = 0;
    GameData_21d6fc8 = 0;
    GameData_21d6fd8 = 0;
    GameData_21d6fe0 = 0;
    GameData_21d6fe8 = 0;
    GameData_21d6ff8 = 0;
    GameData_21d7000 = (__int64)ProcMapSeqBattle_7b12b0;
    GameData_21d7008 = 0;
    GameData_21d7f68 = 0;
    GameData_21d7f78 = 0;
    GameData_21d7f88 = 0;
    GameData_21d7f90 = 0;
    GameData_21d7f98 = 0;
    GameData_21d7fa0 = 0;
    GameData_21d7fa8 = 0;
    GameData_21d7fb8 = 0;
    GameData_21d7fc8 = 0;
    GameData_21d7fd0 = 0;
    GameData_21d7fd8 = 0;
    GameData_21d7fe0 = 0;
    GameData_21d7fe8 = 0;
    GameData_21d7ff8 = 0;
    GameData_21d8008 = 0;
    GameData_21d8010 = 0;
    GameData_21d8018 = 0;
    GameData_21d8020 = 0;
    GameData_21d8028 = 0;
    GameData_21d8038 = 0;
    GameData_21d8048 = 0;
    GameData_21d8050 = 0;
    GameData_21d8058 = 0;
    GameData_21d8060 = 0;
    GameData_21d8068 = 0;
    GameData_21d8098 = 0;
    GameData_21d80a0 = 0;
    GameData_21d80a8 = 0;
    GameData_21d8090 = 0;
    GameData_21d8088 = 0;
    GameData_21d8080 = 0;
    GameData_21d8078 = 0;
    GameData_21d80b8 = 0;
    GameData_21d80c0 = 0;
    GameData_21d80c8 = 0;
    GameData_21d80d0 = 9;
    GameData_21d80d8 = 0;
    GameData_21d80e0 = 0;
    GameData_21d80e8 = 0;
    GameData_21d80f8 = 0;
    GameData_21d8108 = 0;
    GameData_21d8110 = 0;
    GameData_21d8118 = 0;
    GameData_21d8120 = 0;
    GameData_21d8128 = 0;
    GameData_21d8138 = 0;
    GameData_21d8148 = 0;
    GameData_21d8150 = 0;
    GameData_21d8158 = 0;
    GameData_21d8160 = 0;
    GameData_21d8168 = 0;
    GameData_21d8178 = 0;
    GameData_21d8188 = 0;
    GameData_21d8190 = 0;
    GameData_21d8198 = 0;
    GameData_21d81a0 = 0;
    GameData_21d81a8 = 0;
    GameData_21d81d8 = 0;
    GameData_21d81e0 = 0;
    GameData_21d81e8 = 0;
    GameData_21d81d0 = 0;
    GameData_21d81c8 = 0;
    GameData_21d81c0 = 0;
    GameData_21d81b8 = 0;
    GameData_21d81f8 = 0;
    GameData_21d8200 = 0;
    GameData_21d8208 = 0;
    GameData_21d8210 = 18;
    GameData_21d8218 = 0;
    GameData_21d8220 = 0;
    GameData_21d8228 = 0;
    GameData_21d8238 = 0;
    GameData_21d8248 = 0;
    GameData_21d8250 = 0;
    GameData_21d8258 = 0;
    GameData_21d8260 = 0;
    GameData_21d8268 = 0;
    GameData_21d8278 = 0;
    GameData_21d8288 = 0;
    GameData_21d8290 = 0;
    GameData_21d8298 = 0;
    GameData_21d82a0 = 0;
    GameData_21d82a8 = 0;
    GameData_21d82b8 = 0;
    GameData_21d82c8 = 0;
    GameData_21d82d0 = 0;
    GameData_21d82d8 = 0;
    GameData_21d82e0 = 0;
    GameData_21d82e8 = 0;
    GameData_21d82f8 = 0;
    GameData_21d8308 = 0;
    GameData_21d8310 = 0;
    GameData_21d8318 = 0;
    GameData_21d8320 = 0;
    GameData_21d8328 = 0;
    GameData_21d8338 = 0;
    GameData_21d8348 = 0;
    GameData_21d8350 = 0;
    GameData_21d8358 = 0;
    GameData_21d8360 = 0;
    GameData_21d8368 = 0;
    GameData_21d8378 = 0;
    GameData_21d8388 = 0;
    GameData_21d8390 = 0;
    GameData_21d8398 = 0;
    GameData_21d83a0 = 0;
    GameData_21d83a8 = 0;
    GameData_21d83b8 = 0;
    GameData_21d83c8 = 0;
    GameData_21d83d0 = 0;
    GameData_21d83d8 = 0;
    GameData_21d83e0 = 0;
    GameData_21d83e8 = 0;
    GameData_21d83f8 = 0;
    GameData_21d8408 = 0;
    GameData_21d8410 = 0;
    GameData_21d8418 = 0;
    GameData_21d8420 = 0;
    GameData_21d8428 = 0;
    GameData_21d8438 = 0;
    GameData_21d8448 = 0;
    GameData_21d8450 = 0;
    GameData_21d8458 = 0;
    GameData_21d8460 = 0;
    GameData_21d8468 = 0;
    GameData_21d8478 = 0;
    GameData_21d8488 = 0;
    GameData_21d8490 = 0;
    GameData_21d8498 = 0;
    GameData_21d84a0 = 0;
    GameData_21d84a8 = 0;
    GameData_21d84b8 = 0;
    GameData_21d84c8 = 0;
    GameData_21d84d0 = 0;
    GameData_21d84d8 = 0;
    GameData_21d84e0 = 0;
    GameData_21d84e8 = 0;
    GameData_21d84f8 = 0;
    GameData_21d8508 = 0;
    GameData_21d8510 = 0;
    GameData_21d8518 = 0;
    GameData_21d8520 = 0;
    GameData_21d8528 = 0;
    GameData_21d8538 = 0;
    GameData_21d8548 = 0;
    GameData_21d8550 = 0;
    GameData_21d8558 = 0;
    GameData_21d8560 = 0;
    GameData_21d8568 = 0;
    GameData_21d8578 = 0;
    GameData_21d8588 = 0;
    GameData_21d8590 = 0;
    GameData_21d8598 = 0;
    GameData_21d85a0 = 0;
    GameData_21d85a8 = 0;
    GameData_21d85b8 = 0;
    GameData_21d85c8 = 0;
    GameData_21d85d0 = 0;
    GameData_21d85d8 = 0;
    GameData_21d85e0 = 0;
    GameData_21d85e8 = 0;
    GameData_21d85f8 = 0;
    GameData_21d8608 = 0;
    GameData_21d8610 = 0;
    GameData_21d8618 = 0;
    GameData_21d8620 = 0;
    GameData_21d8628 = 0;
    GameData_21d8658 = 0;
    GameData_21d8660 = 0;
    GameData_21d8668 = 0;
    GameData_21d8650 = 0;
    GameData_21d8648 = 0;
    GameData_21d8640 = 0;
    GameData_21d8638 = 0;
    GameData_21d8678 = 0;
    GameData_21d8680 = 0;
    GameData_21d8688 = 0;
    GameData_21d8690 = 19;
    GameData_21d8698 = 0;
    GameData_21d86a0 = 0;
    GameData_21d86a8 = 0;
    GameData_21d86b8 = 0;
    GameData_21d86c0 = 0;
    GameData_21d86c8 = 0;
    GameData_21d86d0 = 18;
    GameData_21d86d8 = 0;
    GameData_21d86e0 = 0;
    GameData_21d86e8 = 0;
    GameData_21d86f8 = 0;
    GameData_21d8708 = 0;
    GameData_21d8710 = 0;
    GameData_21d8718 = 0;
    GameData_21d8720 = 0;
    GameData_21d8728 = 0;
    GameData_21d8730 = 0;
    GameData_21d8758 = 0;
    GameData_21d8760 = 0;
    GameData_21d8768 = 0;
    GameData_21d8750 = 0;
    GameData_21d8748 = 0;
    GameData_21d8740 = 0;
    GameData_21d8738 = 0;
    __cxa_guard_release(&GameData_21d8770);
  }
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      23136, 16, 0);
  v6 = GameData_212c608[0];
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
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register_alt1();
  if (game_map_ProcMapSeqBattleView_instance_ == 0) {
    game_map_ProcMapSeqBattleView_instance_ = v5;
  }
  *(_QWORD*)(v5 + 168) = a2;
  *(_QWORD*)v5 = game_map_anonymous_ProcMapSeqBattle_vtable;
  *(_QWORD*)(v5 + 152) = ProcMapSeqBattle_Destructor_7ba8e0_ptr;
  *(_QWORD*)(v5 + 160) = GameData_1f99bf8;
  GameRoutine_790080(v5 + 176);
  GameRoutine_790080(v5 + 11488);
  *(_QWORD*)(v5 + 22872) = 0;
  *(_QWORD*)(v5 + 22864) = 0;
  *(_QWORD*)(v5 + 22856) = 0;
  *(_QWORD*)(v5 + 22988) = 0;
  *(_DWORD*)(v5 + 22887) = 0;
  *(_QWORD*)(v5 + 22880) = 0;
  *(_QWORD*)(v5 + 22848) = 0;
  *(_QWORD*)(v5 + 22840) = 0;
  *(_QWORD*)(v5 + 22832) = 0;
  *(_QWORD*)(v5 + 22824) = 0;
  *(_QWORD*)(v5 + 22816) = 0;
  *(_QWORD*)(v5 + 22808) = 0;
  *(_QWORD*)(v5 + 22800) = 0;
  *(_QWORD*)(v5 + 22896) = 0;
  *(_QWORD*)(v5 + 22904) = 0;
  *(_QWORD*)(v5 + 22912) = 0;
  *(_QWORD*)(v5 + 22928) = 0;
  *(_QWORD*)(v5 + 22936) = 0;
  *(_QWORD*)(v5 + 22944) = 0;
  *(_QWORD*)(v5 + 22952) = 0;
  *(_QWORD*)(v5 + 22960) = 0;
  *(_QWORD*)(v5 + 22968) = 0;
  *(_QWORD*)(v5 + 22976) = 0;
  *(_WORD*)(v5 + 22984) = 0;
  *(_BYTE*)(v5 + 23032) = 0;
  *(_QWORD*)(v5 + 23024) = 0;
  *(_QWORD*)(v5 + 23016) = 0;
  *(_QWORD*)(v5 + 23008) = 0;
  *(_QWORD*)(v5 + 23000) = 0;
  *(_DWORD*)(v5 + 23044) = 0;
  *(_QWORD*)(v5 + 23056) = 0;
  *(_DWORD*)(v5 + 22920) = 0;
  *(_QWORD*)(v5 + 23036) = -1;
  v7 = *(_BYTE**)(v5 + 168);
  v8 = GameData_212ddb8[0] + 2;
  *(_QWORD*)(v5 + 23064) = 0;
  *(_QWORD*)(v5 + 23072) = 0;
  *(_QWORD*)(v5 + 23088) = 0;
  *(_QWORD*)(v5 + 23096) = 0;
  *(_QWORD*)(v5 + 23104) = 0;
  *(_OWORD*)(v5 + 23120) = (__typeof__(*(_OWORD*)(v5 + 23120))){0};
  *(_QWORD*)(v5 + 22936) = 0;
  *(_QWORD*)(v5 + 23048) = v8;
  *(_BYTE*)(v5 + 23080) = 4;
  if (v7[8] != 0) {
    v9 = game_UnitPool_Get_alt1(v7 + 8);
  }
  else {
    v9 = 0;
  }
  BattleUtil_7aa190((void*)(&v53), v9, v7[53], v7[54]);
  v10 = LANES128(v53).n128_u32[2];
  v11 = *(_QWORD*)(v5 + 23008);
  v12 = *(_QWORD*)(v5 + 23024) - v11;
  v52 = a1;
  *(_QWORD*)(v5 + 23120) = LANES128(v53).n128_u64[0];
  v13 = *(_QWORD*)(v5 + 168);
  v14 = *(_OWORD*)(v5 + 23120);
  *((_QWORD*)&v14 + 1) = v10;
  *(_OWORD*)(v5 + 23120) = v14;
  v15 = *(int*)(v13 + 12356);
  if (v15 > v12 >> 3) {
    if ((v15 & 0x80000000) != 0) {
    LABEL_61:
      GameRoutine_688200();
    }
    v16 = *(_QWORD*)(v5 + 23016) - v11;
    v17 = fw_memory_HeapManager_Allocate(*v4, 8 * v15, 16, 0);
    memcpy(v17, v11, v16);
    *(_QWORD*)(v5 + 23008) = v17;
    *(_QWORD*)(v5 + 23016) = v17 + v16;
    *(_QWORD*)(v5 + 23024) = v17 + 8 * v15;
    if (v11 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v18, v11);
      v13 = *(_QWORD*)(v5 + 168);
    }
  }
  if (*(int*)(v13 + 12356) >= 1) {
    v19 = 73;
    for (i = 0; i < *(int*)(v13 + 12356); ++i) {
      if (*(_BYTE*)(v13 + v19) != 0) {
        v22 = game_UnitPool_Get_alt1(v13 + v19);
        v23 = *(_QWORD**)(v5 + 23016);
        v24 = *(_QWORD*)(v5 + 23024);
        if (v22 != 0) {
          v25 = *(_QWORD*)(v22 + 392);
          if ((unsigned __int64)v23 >= v24) {
            v26 = *(_QWORD*)(v5 + 23008);
            v33 = (char*)v23 - v26;
            v34 = ((__int64)v23 - v26) >> 3;
            v35 = v34 + 1;
            if ((unsigned __int64)(v34 + 1) >> 61 != 0) {
              goto LABEL_61;
            }
            v36 = v24 - v26;
            if (v36 >> 2 > v35) {
              v35 = v36 >> 2;
            }
            if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL) {
              v37 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v37 = v35;
            }
            if (v37 != 0) {
              if (v37 >> 61 != 0) {
              LABEL_62:
                GameRoutine_60a210();
              }
              v38 = fw_memory_HeapManager_Allocate(*v4, 8 * v37, 16, 0);
            }
            else {
              v38 = 0;
            }
            v42 = v38 + 8 * v37;
            v43 = (char*)v23 - v26;
            v44 = (__int64)&v33[v38 + -8 * v34];
            *(_QWORD*)&v33[v38] = v25;
            v21 = (__int64)&v33[v38 + 8];
            memcpy(v44, v26, v43);
            *(_QWORD*)(v5 + 23008) = v44;
            *(_QWORD*)(v5 + 23016) = v21;
            *(_QWORD*)(v5 + 23024) = v42;
            if (v26 != 0) {
            LABEL_46:
              v45 = 128;
              if (*(_QWORD*)(*v4 + 200LL) == 0) {
                v45 = 56;
              }
              nn_mem_StandardAllocator_Free(*v4 + v45, v26);
              goto LABEL_16;
            }
          }
          else {
            *v23 = v25;
            v21 = (__int64)(v23 + 1);
          }
          goto LABEL_16;
        }
      }
      else {
        v23 = *(_QWORD**)(v5 + 23016);
        v24 = *(_QWORD*)(v5 + 23024);
      }
      if ((unsigned __int64)v23 < v24) {
        *v23 = 0;
        v21 = (__int64)(v23 + 1);
      }
      else {
        v26 = *(_QWORD*)(v5 + 23008);
        v27 = (char*)v23 - v26;
        v28 = ((__int64)v23 - v26) >> 3;
        v29 = v28 + 1;
        if ((unsigned __int64)(v28 + 1) >> 61 != 0) {
          goto LABEL_61;
        }
        v30 = v24 - v26;
        if (v30 >> 2 > v29) {
          v29 = v30 >> 2;
        }
        if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
          v31 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v31 = v29;
        }
        if (v31 != 0) {
          if (v31 >> 61 != 0) {
            goto LABEL_62;
          }
          v32 = fw_memory_HeapManager_Allocate(*v4, 8 * v31, 16, 0);
        }
        else {
          v32 = 0;
        }
        v39 = v32 + 8 * v31;
        v40 = (char*)v23 - v26;
        v41 = (__int64)&v27[v32 + -8 * v28];
        *(_QWORD*)&v27[v32] = 0;
        v21 = (__int64)&v27[v32 + 8];
        memcpy(v41, v26, v40);
        *(_QWORD*)(v5 + 23008) = v41;
        *(_QWORD*)(v5 + 23016) = v21;
        *(_QWORD*)(v5 + 23024) = v39;
        if (v26 != 0) {
          goto LABEL_46;
        }
      }
    LABEL_16:
      *(_QWORD*)(v5 + 23016) = v21;
      v13 = *(_QWORD*)(v5 + 168);
      v19 += 12;
    }
  }
  if (*GameData_212cff8[0] != 0) {
    MapInfo_825040(*GameData_212cff8[0], 10);
  }
  v46 = *GameData_212d570[0];
  if (*GameData_212d570[0] != 0) {
    v47 = *(unsigned __int8*)(v46 + 336);
    *(_DWORD*)(v46 + 304) = 0;
    if (v47 == 1) {
      *(_BYTE*)(v46 + 336) = 0;
    }
    v48 = *(unsigned __int8*)(v46 + 288);
    *(_DWORD*)(v46 + 268) = 0;
    if (v48 == 1) {
      *(_BYTE*)(v46 + 288) = 0;
    }
  }
  if (*GameData_212d000[0] != 0) {
    *(_WORD*)(*GameData_212d000[0] + 1576) = 0;
  }
  v49 = *(_QWORD*)(*GameData_212ce98[0] + 160);
  v50 = *(_DWORD*)(v49 + 528);
  *(_DWORD*)(v49 + 528) = v50 + 1;
  if (v50 == 0) {
    (**(void (***)(__int64))(v49 + 520))(v49 + 520);
  }
  return ProcInst_657850_alt1(v5, &GameData_21d6230, "ProcMapSeqBattle", 1,
                              v52);
}

#pragma GCC visibility pop
