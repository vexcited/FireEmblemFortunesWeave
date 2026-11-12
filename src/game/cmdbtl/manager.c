#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleSide_Destructor(_QWORD);
__int64 CmdBtlParty_Destructor(__int64);
__int64 CmdBtlUnit_e79df0(__int64 result);
__int64 GameRoutine_120faa0(_QWORD);
__int64 GameRoutine_e73e20(__int64 result);
__int64 GameRoutine_e7f9a0(__int64);
__int64 GameRoutine_e9a300(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_1fec768[])();
extern __int64 (*game_cmdbtl_Manager_vtable[])();
extern __int64 GameData_212d238[2];
extern __int64 GameData_2130f48;
extern __int64 GameData_21f61c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d258[2];
extern __int64* GameData_212da50[3];
extern __int64* GameData_212ea58;
extern __int64* GameData_212f2e0;
extern __int64* GameData_212f770[3];
extern int GameData_21f61c8;
extern int* GameData_212f2e8[7];
__int64 Manager_Destructor_e99e00(__int64 a1);
__int64 Manager_e9a420(__int64 a1);
__int64 CmdbtlPartyNatives_e9a800(_QWORD, _QWORD, long double);
__int64 Config_bc79a0(_QWORD, _QWORD);
__int64 GameRoutine_14a4d00(_QWORD);
__int64 GameRoutine_18c8060(_QWORD);
__int64 GameRoutine_7c51c0(_QWORD);
extern _DWORD* GameData_212d168;
extern __int64 (*GameData_1feceb8[])();
extern __int64 GameData_22162a8;
extern __int64 GameData_224b668;
extern __int64* GameData_21320e8;
extern __int64* eft_g_effectSystem_ptr[3];
long double GameRoutine_ea19a0(_QWORD);
__int64 Manager_e9a300(__int64 a1);
__int64 CmdBtlCombatWindow_17c4450(_QWORD, _QWORD);
__int64 CmdBtlUnit_e79c10(void);
__int64 CmdBtlUnit_e7c280(_QWORD);
__int64 CmdBtlUnit_e7ca80(_QWORD, double);
__int64 CmdBtlUnit_e7d620(_QWORD);
__int64 CmdBtlUnit_e7e180(_QWORD);
__int64 CmdbtlPartyNatives_e9ba00(__int64, __int64, unsigned int,
                                  unsigned __int8, __int64*, float);
__int64 GameRoutine_1012f40(_QWORD);
__int64 GameRoutine_16249f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_1624b10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17c8240(_QWORD);
__int64 GameRoutine_7555e0(void);
__int64 GameRoutine_e79f00(__int64 result);
__int64 GameRoutine_e7b0a0(__int64 result, long double);
__int64 GameRoutine_e7c3f0(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_e7c6f0(_QWORD, _QWORD, double);
__int64 GameRoutine_e81260(__int64);
__int64 GameRoutine_e9c3f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ec1530(_QWORD);
__int64 GameRoutine_edbb00(_QWORD, _QWORD, _QWORD);
__int64 JostleManager_ea0ec0(_QWORD);
__int64 MapSkillInfo_17ce320(void);
__int64 MindBtlInfo_Destructor(_QWORD);
__int64 MindBtlInfo_edb660(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
char* GameRoutine_e743f0(__int64);
extern _QWORD GameData_1b014c8[4];
extern _QWORD GameData_1b018e8[4];
extern _UNKNOWN GameData_1a90b0d;
extern _UNKNOWN GameData_1a90b24;
extern _UNKNOWN GameData_1a95a99;
extern _UNKNOWN GameData_1a99886;
extern _UNKNOWN GameData_1ad7123;
extern _UNKNOWN GameData_1af5ec9;
extern __int64 (*GameData_1fecc98[])();
extern __int64 (*GameData_1fecd18[])();
extern __int64 (*GameData_1fecd68[])();
extern __int64 (*GameData_1fef2b8[])();
extern __int64 (*game_cmdbtl_MindBtlInfo_vtable[])();
extern __int64 (*game_cmdbtl_MindViewer_vtable[])();
extern __int64 (*game_cmdbtl_Target_vtable[])();
extern __int64 GameData_212f538;
extern __int64 GameData_212f5c0[3];
extern __int64 GameData_212f730[2];
extern __int64 GameData_21c99b8;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_21f5350;
extern __int64 GameData_2203490;
extern __int64 GameData_2219078;
extern __int64 eft_g_effectSystem;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d448[9];
extern __int64* GameData_212d578[6];
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212f7d0[4];
extern __int64* GameData_212f968;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 Manager_e9a6e0(__int64 a1);
void Manager_e9b830(__int64 a1, int a2);
__int64 Manager_e9bcb0(__int64 a1, __int64 a2, signed int a3, __int64* a4);
__int64 Manager_e9bf00(__int64 result);
__int64 Manager_e9bfc0(__int64 a1);
__int64 game_cmdbtl_Manager_IsAnyLoading();
__int64 Manager_e9c780(__int64 a1, int a2);
__int64 Manager_e9c990(__int64 a1, int a2);
__int64 Manager_e9cd90(__int64 result);
__int64 game_cmdbtl_Manager_Manager_lambda0_Invoke(__int64 result);
__int64 game_cmdbtl_Manager_FindBattleUnit_lambda0_Invoke_e9d100(__int64 result,
                                                                 __int64* a2);
__int64 game_cmdbtl_Manager_FindBattleUnit_lambda0_Invoke_e9d2b0(__int64 result,
                                                                 __int64* a2);
__int64 game_cmdbtl_Manager_FindBattleUnit_lambda0_Invoke_e9d470(__int64 result,
                                                                 __int64* a2);
__int64 game_cmdbtl_Manager_ForAllBattleUnit_lambda0_Invoke_e9d620(__int64 a1,
                                                                   __int64* a2);
__int64 game_cmdbtl_Manager_ForAllBattleUnit_lambda0_Invoke_e9d7d0(__int64 a1,
                                                                   __int64* a2);
__int64 game_cmdbtl_Manager_GetReinforceIsmUnit_lambda0_Invoke(__int64 result,
                                                               __int64* a2);
unsigned __int64 game_cmdbtl_Manager_GetTalkActiveCharacter_lambda0_Invoke(
    unsigned __int64 result, __int64* a2);
__int64 game_cmdbtl_Manager_CheckAutoPlay_lambda0_Invoke(__int64 a1,
                                                         __int64* a2);
__int64 game_cmdbtl_Manager_IsAnyLoading_lambda0_Invoke(__int64 result,
                                                        __int64* a2);
__int64 game_cmdbtl_Manager_SeqBattleEnterGameView_lambda0_Invoke(__int64 a1,
                                                                  __int64* a2);
__int64 game_cmdbtl_Manager_UnitRelocationImpl_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 game_cmdbtl_Manager_PostSeqAttack_lambda0_Invoke(__int64 a1,
                                                         __int64* a2);
__int64 game_cmdbtl_Manager_OnRunEventManager_lambda0_Invoke(__int64 a1,
                                                             __int64* a2);
__int64 game_cmdbtl_Manager_OnEndEventManager_lambda0_Invoke(__int64 a1,
                                                             __int64* a2,
                                                             long double a3);
_QWORD*
CmdbtlPartyNatives_e9a800_alt1(_QWORD*,
                               __int64) __asm__("CmdbtlPartyNatives_e9a800");
__int64 CmdBtlUnit_e79c10_alt1(_QWORD, _QWORD) __asm__("CmdBtlUnit_e79c10");
__int64 CmdbtlPartyNatives_e73070(_QWORD, _QWORD);
__int64 CmdbtlPartyNatives_e9aba0(_QWORD, _QWORD);
__int64 GameRoutine_809ba0(float);
__int64 GameRoutine_e74b60(_QWORD, _QWORD);
__int64 GameRoutine_e9b550(_QWORD, _QWORD, _QWORD, long double);
__int64 Manager_e9b1b0_alt1(_QWORD*) __asm__("Manager_e9b1b0");
__int64 game_cmdbtl_Manager_UnitRelocationImpl_alt1(_QWORD, _QWORD) __asm__(
    "game_cmdbtl_Manager_UnitRelocationImpl");
__int64 std___1___shared_weak_count___release_weak_alt2(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _QWORD GameData_1b01768[4];
extern __int64 (*GameData_1feca98[])();
extern __int64 (*GameData_1fecf38[])();
extern __int64 GameData_22190c0;
extern __int64 game_ProcFadeView_instance_;
void CmdBtlUnit_e7cc80(__int64);
__n128 Manager_e9b1b0(_QWORD* a1);
void game_cmdbtl_Manager_UnitRelocationImpl_alt2(
    _QWORD* a1, __int64 a2) __asm__("game_cmdbtl_Manager_UnitRelocationImpl");
__int64
game_cmdbtl_Manager_TryPhaseCameraCutResetLerp_lambda0_Invoke(__int64 result);
__int64 game_cmdbtl_Manager_SeqBattleCombatUniverse_lambda0_Invoke(__int64 a1,
                                                                   __int64* a2);
__int64 game_cmdbtl_Manager_ExitCombatView_lambda0_Invoke(__int64 a1,
                                                          __int64* a2);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_66b000(__int64*, _QWORD*);
__int64 GameRoutine_6c47b0(__int64, _BYTE*, char, char);
__int64 GameRoutine_790080(__int64);
__int64 GameRoutine_eb6a20(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_cmdbtl_e7f4d0(__int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 CmdbtlPartyNatives_e74760(__int64, __int64*);
__n128 GameRoutine_ea0930(__int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fec798[])();
extern __int64 (*GameData_1fec918[])();
extern __int64 (*GameData_1fecb98[])();
extern __int64 (*GameData_1fed038[])();
extern __int64* GameData_212d2f0;
extern __int64* GameData_212ee40[2];
extern __int64* GameData_212f4e0[3];
extern __int64* GameData_212f630[8];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212f5c8[2];
extern __int64 GameData_21c9668;
extern __int64 fw_memory_g_heap_manager;
long double GameRoutine_e74040(__int64, _QWORD*);
void CmdBtlUnit_e7aab0(__int64, char, __n128);
void GameRoutine_66ae00(__int64*);
void UnitActor_81d740(__int64);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
__int64 Manager_e63720();
void game_cmdbtl_Manager_Manager(__int64 a1);
__attribute__((swiftcall)) void Manager_e9af40(PSEUDO_X8 x8_, __int64 a1);
void Manager_e9b550(__int64 a1, int a2, unsigned int a3);
__n128 game_cmdbtl_Manager_FindBattleUnit(_QWORD* a1, __int64 a2, __int64 a3);
_QWORD* GameRoutine_e74b60_alt1(__int64, __int64) __asm__("GameRoutine_e74b60");
__int64 CmdBtlUnit_e7cc80_alt1(__int64) __asm__("CmdBtlUnit_e7cc80");
__int64 Manager_e9a300_alt1(_QWORD*) __asm__("Manager_e9a300");
__int64 game_809ba0(__int64, float);
__int64 game_cmdbtl_Manager_UnitRelocationImpl(_QWORD* a1, __int64 a2);
_QWORD* MapUtil_7555e0();
__int64
CmdBtlCombatWindow_17c4450_alt1(_QWORD*,
                                __int64) __asm__("CmdBtlCombatWindow_17c4450");
__int64 Field_1012f40(__int64);
__int64 MindBtlInfo_Destructor_alt1(_QWORD*) __asm__("MindBtlInfo_Destructor");
__int64 MindBtlInfo_edb660_alt1(__int64) __asm__("MindBtlInfo_edb660");
__int64 std___1___shared_weak_count___release_weak_alt3(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo(__int64, __int64, int);

__int64 Manager_e63720()
{
  _QWORD* v0;
  __int64 result;
  __int64 v2;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;

  v3_.v4 = v3_.v3;
  v0 = (_QWORD*)*GameData_212ea58;
  v3_.v3[0] = GameData_1fecb98;
  CmdbtlPartyNatives_e9a800_alt1(v0, (__int64)v3_.v3);
  result = (__int64)v3_.v4;
  if (v3_.v4 == v3_.v3) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v3_.v4 != nullptr) {
    v2 = 40;
  LABEL_5:
    result = (*(__int64 (**)(__int64))(*v3_.v4 + v2))((__int64)v3_.v4);
  }
  *(_BYTE*)(*GameData_212f4e0[0] + 9) = 1;
  return result;
}

void game_cmdbtl_Manager_Manager(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  long double v16;
  __int64 v17;
  __int64* v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;
  struct {
    __int64 v27[4];
    __int64* v28;
  } v27_;

  if (*GameData_212ea58 == 0) {
    *GameData_212ea58 = a1;
  }
  *(_QWORD*)a1 = game_cmdbtl_Manager_vtable;
  game_cmdbtl_e7f4d0(a1 + 16);
  *(_QWORD*)(a1 + 584) = 0;
  v2 = GameData_212f770[0];
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  v3 = GameData_212d2f0;
  *(_DWORD*)(a1 + 616) = 0;
  *(_DWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 640) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 576) = v2 + 2;
  v4 = GameData_212f630[0];
  *(_QWORD*)(a1 + 624) = v3 + 2;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_BYTE*)(a1 + 704) = 0;
  v4 += 2;
  *(_QWORD*)(a1 + 780) = 0;
  *(_QWORD*)(a1 + 788) = 0;
  *(_QWORD*)(a1 + 764) = 0;
  *(_QWORD*)(a1 + 772) = 0;
  *(_QWORD*)(a1 + 748) = 0;
  *(_QWORD*)(a1 + 756) = 0;
  *(_QWORD*)(a1 + 732) = 0;
  *(_QWORD*)(a1 + 740) = 0;
  *(_QWORD*)(a1 + 716) = 0;
  *(_QWORD*)(a1 + 724) = 0;
  *(_QWORD*)(a1 + 708) = 0;
  *(_QWORD*)(a1 + 836) = 0;
  *(_QWORD*)(a1 + 844) = 0;
  *(_QWORD*)(a1 + 852) = 0;
  *(_QWORD*)(a1 + 860) = 0;
  *(_QWORD*)(a1 + 868) = 0;
  *(_QWORD*)(a1 + 876) = 0;
  *(_QWORD*)(a1 + 884) = 0;
  *(_QWORD*)(a1 + 892) = 0;
  *(_QWORD*)(a1 + 900) = 0;
  *(_QWORD*)(a1 + 908) = 0;
  *(_QWORD*)(a1 + 916) = 0;
  *(_QWORD*)(a1 + 1036) = 0;
  *(_QWORD*)(a1 + 1044) = 0;
  *(_QWORD*)(a1 + 1020) = 0;
  *(_QWORD*)(a1 + 1028) = 0;
  *(_QWORD*)(a1 + 1004) = 0;
  *(_QWORD*)(a1 + 1012) = 0;
  *(_QWORD*)(a1 + 988) = 0;
  *(_QWORD*)(a1 + 996) = 0;
  *(_QWORD*)(a1 + 972) = 0;
  *(_QWORD*)(a1 + 980) = 0;
  *(_QWORD*)(a1 + 964) = 0;
  *(_DWORD*)(a1 + 796) = 0;
  *(_QWORD*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_BYTE*)(a1 + 832) = 0;
  *(_DWORD*)(a1 + 924) = 0;
  *(_BYTE*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_DWORD*)(a1 + 1052) = 0;
  *(_BYTE*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1072) = 0;
  *(_QWORD*)(a1 + 1064) = 0;
  *(_DWORD*)(a1 + 1260) = 0;
  *(_QWORD*)(a1 + 1244) = 0;
  *(_QWORD*)(a1 + 1252) = 0;
  *(_QWORD*)(a1 + 1228) = 0;
  *(_QWORD*)(a1 + 1236) = 0;
  *(_QWORD*)(a1 + 1212) = 0;
  *(_QWORD*)(a1 + 1220) = 0;
  *(_QWORD*)(a1 + 1204) = 0;
  *(_QWORD*)(a1 + 672) = v4;
  *(_QWORD*)(a1 + 800) = v4;
  *(_QWORD*)(a1 + 928) = v4;
  *(_QWORD*)(a1 + 1056) = v4;
  *(_QWORD*)(a1 + 1194) = 0;
  *(_QWORD*)(a1 + 1180) = 0;
  *(_QWORD*)(a1 + 1188) = 0;
  *(_QWORD*)(a1 + 1164) = 0;
  *(_QWORD*)(a1 + 1172) = 0;
  *(_QWORD*)(a1 + 1148) = 0;
  *(_QWORD*)(a1 + 1156) = 0;
  *(_QWORD*)(a1 + 1132) = 0;
  *(_QWORD*)(a1 + 1140) = 0;
  *(_QWORD*)(a1 + 1116) = 0;
  *(_QWORD*)(a1 + 1124) = 0;
  *(_QWORD*)(a1 + 1100) = 0;
  *(_QWORD*)(a1 + 1108) = 0;
  *(_QWORD*)(a1 + 1092) = 0;
  GameRoutine_790080(a1 + 1264);
  *(_QWORD*)(a1 + 1264) = GameData_212f5c8[0] + 16;
  *(_BYTE*)(a1 + 12576) = 0;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v6[2] = 0;
  v7 = GameData_212ee40[0];
  v8 = *(_QWORD*)(a1 + 1192);
  v6[8] = 0;
  *(_QWORD*)(a1 + 1192) = v6;
  *v6 = v7 + 2;
  v6[1] = 0;
  *(_QWORD*)(a1 + 1184) = v6 + 4;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  v9 = *(_QWORD**)(a1 + 1184);
  v27_.v27[0] = (__int64)GameData_1fec798;
  v27_.v27[1] = a1;
  v27_.v28 = v27_.v27;
  GameRoutine_654050(v27_.v27, v9);
  if (v27_.v28 == v27_.v27) {
    v10 = 32;
  }
  else {
    if (v27_.v28 == nullptr) {
      goto LABEL_11;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v27_.v28 + v10))((__int64)v27_.v28);
LABEL_11:
  v11 = *(_QWORD*)(a1 + 1184);
  v12 = *(_QWORD*)(a1 + 1192);
  v25_.v25 = v11;
  v25_.v26 = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    v27_.v27[0] = v11;
    v27_.v27[1] = v12;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_66ae00(v27_.v27);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  else {
    v27_.v27[0] = v11;
    v27_.v27[1] = 0;
    GameRoutine_66ae00(v27_.v27);
  }
  GameRoutine_66b000(&GameData_21c9668, &v25_.v25);
  if (v25_.v26 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v25_.v26);
  }
  v13 = GameData_212f2e0;
  v14 = *GameData_212f2e0;
  if (*GameData_212f2e0 != 0) {
    ++*GameData_212f2e8[0];
  }
  else {
    v15 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v5, 144, 16, 0);
    *(__n128*)&v16 = GameRoutine_ea0930((__int64)v15);
    v17 = *v15;
    *v13 = (__int64)v15;
    (*(void (**)(__int64*, long double))(v17 + 16))(v15, v16);
    v14 = *v13;
  }
  *(_BYTE*)(v14 + 115) = 1;
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
  nn_os_UnlockMutex(&game_g_random_mutex);
  *(_DWORD*)(a1 + 1216) =
      vcvts_n_u64_f32(vcvts_n_f32_u32((unsigned __int16)v22, 0x10u), 0x10u);
  v23 = *(_DWORD*)(a1 + 612);
  if (v23 <= 0) {
    v24 = *(_DWORD*)(a1 + 1204);
    *(_DWORD*)(a1 + 612) = 1;
    *(_DWORD*)(a1 + 1204) = v24 | 0x40;
    *(_DWORD*)(a1 + 616) = *(_DWORD*)(a1 + 616) - v23 + 1;
  }
}

__int64 Manager_Destructor_e99e00(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64* v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  void (***v28)(_QWORD);
  void (***v29)(_QWORD);
  void (***v30)(_QWORD);
  void (***v31)(_QWORD);
  void (**v32)(_QWORD);
  bool v33;
  __int64 v34;
  __int64 v35;
  __int64 result;

  *(_QWORD*)a1 = game_cmdbtl_Manager_vtable;
  GameRoutine_e9a300(a1);
  v2 = *(__int64**)(a1 + 712);
  v3 = *(__int64**)(a1 + 720);
  if (v2 != v3) {
    do {
      v4 = *v2;
      v2 += 2;
      CmdBtlUnit_e79df0(v4);
    } while (v2 != v3);
    v3 = *(__int64**)(a1 + 720);
    v2 = *(__int64**)(a1 + 712);
  }
  for (; v3 != v2; v3 -= 2) {
    v5 = *(v3 - 1);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 720) = v2;
  *(_DWORD*)(a1 + 700) = 0;
  GameRoutine_e73e20(a1 + 672);
  v6 = *(__int64**)(a1 + 840);
  v7 = *(__int64**)(a1 + 848);
  if (v6 != v7) {
    do {
      v8 = *v6;
      v6 += 2;
      CmdBtlUnit_e79df0(v8);
    } while (v6 != v7);
    v7 = *(__int64**)(a1 + 848);
    v6 = *(__int64**)(a1 + 840);
  }
  for (; v7 != v6; v7 -= 2) {
    v9 = *(v7 - 1);
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 848) = v6;
  *(_DWORD*)(a1 + 828) = 0;
  GameRoutine_e73e20(a1 + 800);
  v10 = *(__int64**)(a1 + 968);
  v11 = *(__int64**)(a1 + 976);
  if (v10 != v11) {
    do {
      v12 = *v10;
      v10 += 2;
      CmdBtlUnit_e79df0(v12);
    } while (v10 != v11);
    v11 = *(__int64**)(a1 + 976);
    v10 = *(__int64**)(a1 + 968);
  }
  for (; v11 != v10; v11 -= 2) {
    v13 = *(v11 - 1);
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 976) = v10;
  *(_DWORD*)(a1 + 956) = 0;
  GameRoutine_e73e20(a1 + 928);
  v14 = *(__int64**)(a1 + 1096);
  v15 = *(__int64**)(a1 + 1104);
  if (v14 != v15) {
    do {
      v16 = *v14;
      v14 += 2;
      CmdBtlUnit_e79df0(v16);
    } while (v14 != v15);
    v15 = *(__int64**)(a1 + 1104);
    v14 = *(__int64**)(a1 + 1096);
  }
  for (; v15 != v14; v15 -= 2) {
    v17 = *(v15 - 1);
    if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 1104) = v14;
  *(_DWORD*)(a1 + 1084) = 0;
  v18 = GameRoutine_e73e20(a1 + 1056);
  GameRoutine_120faa0(v18);
  if (*(_BYTE*)(a1 + 12576) != 0) {
    *(_BYTE*)(a1 + 12576) = 0;
    v19 = *(_QWORD*)GameData_2130f48;
    if (*(_QWORD*)GameData_2130f48 != 0) {
      v20 = *(_DWORD*)(v19 + 1736) - 1;
      *(_DWORD*)(v19 + 1736) = v20;
      if (v20 == 0) {
        (*(void (**)(__int64))(*(_QWORD*)(v19 + 1728) + 8LL))(v19 + 1728);
      }
    }
    if (--GameData_21f61c8 == 0) {
      (*(void (**)(void))(GameData_21f61c0 + 8))();
    }
  }
  v21 = GameData_212f2e0;
  v22 = *GameData_212f2e0;
  *(_BYTE*)(*GameData_212f2e0 + 115) = 0;
  if ((*GameData_212f2e8[0])-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 24LL))(v22);
    if (*v21 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v21 + 8LL))(*v21);
    }
    *v21 = 0;
  }
  *(_QWORD*)(a1 + 1264) = GameData_212d238[0] + 16;
  v24 = *(_QWORD*)(a1 + 12568);
  *(_QWORD*)(a1 + 12560) = GameData_212da50[0] + 2;
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
    *(_QWORD*)(a1 + 12568) = 0;
  }
  *(_QWORD*)(a1 + 1272) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 3560);
  BattleSide_Destructor(a1 + 2800);
  BattleSide_Destructor(a1 + 2040);
  BattleSide_Destructor(a1 + 1280);
  if (*(_QWORD*)(a1 + 1256) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (*(_QWORD*)(a1 + 1240) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  v25 = *(_QWORD*)(a1 + 1192);
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak();
  }
  CmdBtlParty_Destructor(a1 + 1056);
  CmdBtlParty_Destructor(a1 + 928);
  CmdBtlParty_Destructor(a1 + 800);
  CmdBtlParty_Destructor(a1 + 672);
  v26 = *(_QWORD*)(a1 + 664);
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak();
  }
  v27 = *(_QWORD*)(a1 + 648);
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak();
  }
  v28 = *(void (****)(_QWORD))(a1 + 584);
  *(_QWORD*)(a1 + 576) = GameData_212f770[0] + 2;
  if (v28 != nullptr) {
    v29 = *(void (****)(_QWORD))(a1 + 592);
    if (v28 == v29) {
      goto LABEL_69;
    }
    v30 = v29 - 6;
    v31 = v29 - 6;
    do {
      v32 = *v31;
      v31 -= 6;
      (*v32)(v30);
      v33 = v30 == v28;
      v30 = v31;
    } while (!v33);
    v34 = *(_QWORD*)(a1 + 584);
    *(_QWORD*)(a1 + 592) = v28;
    if (v34 != 0) {
    LABEL_69:
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v35);
    }
  }
  result = GameRoutine_e7f9a0(a1 + 16);
  *(_QWORD*)a1 = GameData_1fec768;
  if (*GameData_212ea58 == a1) {
    *GameData_212ea58 = 0;
  }
  return result;
}

__int64 Manager_e9a300(__int64 a1)
{
  __int64 v2;
  long double v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;
  _QWORD v8[4];
  _QWORD* v9;

  if (*GameData_212d168 == 3) {
    *GameData_212d168 = 2;
    GameRoutine_7c51c0(a1);
    Config_bc79a0(*eft_g_effectSystem_ptr[0], 7);
    GameRoutine_14a4d00(&GameData_224b668);
  }
  v9 = v8;
  v8[0] = GameData_21320e8 + 2;
  GameRoutine_18c8060(v8);
  if (v9 == v8) {
    v2 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_8;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v9 + v2))((__int64)v9);

LABEL_8:
  v3 = GameRoutine_ea19a0(GameData_22162a8);
  v6[0] = GameData_1feceb8;
  v7 = v6;
  CmdbtlPartyNatives_e9a800(a1, v6, v3);
  result = (__int64)v7;
  if (v7 == v6) {
    v5 = 32;
  }
  else {
    if (v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7 + v5))((__int64)v7);
}

__int64 Manager_e9a420(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v1 = *(__int64**)(a1 + 712);
  v2 = *(__int64**)(a1 + 720);
  if (v1 != v2) {
    do {
      v4 = *v1;
      v1 += 2;
      CmdBtlUnit_e79df0(v4);
    } while (v1 != v2);
    v2 = *(__int64**)(a1 + 720);
    v1 = *(__int64**)(a1 + 712);
  }
  for (; v2 != v1; v2 -= 2) {
    v5 = *(v2 - 1);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 720) = v1;
  *(_DWORD*)(a1 + 700) = 0;
  GameRoutine_e73e20(a1 + 672);
  v6 = *(__int64**)(a1 + 840);
  v7 = *(__int64**)(a1 + 848);
  if (v6 != v7) {
    do {
      v8 = *v6;
      v6 += 2;
      CmdBtlUnit_e79df0(v8);
    } while (v6 != v7);
    v7 = *(__int64**)(a1 + 848);
    v6 = *(__int64**)(a1 + 840);
  }
  for (; v7 != v6; v7 -= 2) {
    v9 = *(v7 - 1);
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 848) = v6;
  *(_DWORD*)(a1 + 828) = 0;
  GameRoutine_e73e20(a1 + 800);
  v10 = *(__int64**)(a1 + 968);
  v11 = *(__int64**)(a1 + 976);
  if (v10 != v11) {
    do {
      v12 = *v10;
      v10 += 2;
      CmdBtlUnit_e79df0(v12);
    } while (v10 != v11);
    v11 = *(__int64**)(a1 + 976);
    v10 = *(__int64**)(a1 + 968);
  }
  for (; v11 != v10; v11 -= 2) {
    v13 = *(v11 - 1);
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 976) = v10;
  *(_DWORD*)(a1 + 956) = 0;
  GameRoutine_e73e20(a1 + 928);
  v14 = *(__int64**)(a1 + 1096);
  v15 = *(__int64**)(a1 + 1104);
  if (v14 != v15) {
    do {
      v16 = *v14;
      v14 += 2;
      CmdBtlUnit_e79df0(v16);
    } while (v14 != v15);
    v15 = *(__int64**)(a1 + 1104);
    v14 = *(__int64**)(a1 + 1096);
  }
  for (; v15 != v14; v15 -= 2) {
    v17 = *(v15 - 1);
    if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 1104) = v14;
  *(_DWORD*)(a1 + 1084) = 0;
  v18 = GameRoutine_e73e20(a1 + 1056);
  return GameRoutine_120faa0(v18);
}

__int64 Manager_e9a6e0(__int64 a1)
{
  __int64 result;
  long double v5;
  __int64* v6;
  __int64* i;
  __int64 v8;
  __int64* v9;
  __int64* j;
  __int64 v11;
  __int64* v12;
  __int64* k;
  __int64 v14;
  __int64* v15;
  __int64* m;
  __int64 v17;

  GameRoutine_17c8240(*(_QWORD*)GameData_212f538);
  result = *GameData_212d578[0];
  if (*GameData_212d578[0] != 0) {
    result = MapSkillInfo_17ce320();
  }
  if (*(int*)(a1 + 632) <= 0 && *GameData_212d168 == 2 &&
      *GameData_212d448[0] == 0) {
    result = JostleManager_ea0ec0(*GameData_212f2e0);
    v6 = *(__int64**)(a1 + 712);
    for (i = *(__int64**)(a1 + 720); v6 != i;
         result = GameRoutine_e7b0a0(v8, v5)) {
      v8 = *v6;
      v6 += 2;
    }
    v9 = *(__int64**)(a1 + 840);
    for (j = *(__int64**)(a1 + 848); v9 != j;
         result = GameRoutine_e7b0a0(v11, v5)) {
      v11 = *v9;
      v9 += 2;
    }
    v12 = *(__int64**)(a1 + 968);
    for (k = *(__int64**)(a1 + 976); v12 != k;
         result = GameRoutine_e7b0a0(v14, v5)) {
      v14 = *v12;
      v12 += 2;
    }
    v15 = *(__int64**)(a1 + 1096);
    for (m = *(__int64**)(a1 + 1104); v15 != m;
         result = GameRoutine_e7b0a0(v17, v5)) {
      v17 = *v15;
      v15 += 2;
    }
    *(_BYTE*)(a1 + 1200) = 1;
  }
  return result;
}

__attribute__((swiftcall)) void Manager_e9af40(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  char* v5;
  __int64 v6;
  _QWORD* v7;
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
  __int64 v20;
  __int64 i;
  __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = *(_QWORD*)(a1 + 712);
  v3 = *(_QWORD*)(a1 + 720);
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v34 = a1;
  if (v2 == v3) {
    v5 = nullptr;
    v6 = 0;
  }
  else {
    v5 = nullptr;
    v6 = 0;
    v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v8 = *(_QWORD*)(*(_QWORD*)v2 + 16LL);
      v9 = a2[2];
      if ((unsigned __int64)v5 < v9) {
        *(_QWORD*)v5 = v8;
        v5 += 8;
      }
      else {
        v10 = &v5[-v6];
        v11 = (__int64)&v5[-v6] >> 3;
        v12 = v11 + 1;
        if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
        LABEL_43:
          *a2 = v6;
          GameRoutine_6c1f60();
        }
        v13 = v9 - v6;
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
          LABEL_44:
            *a2 = v6;
            GameRoutine_60a210(a1);
          }
          v15 = fw_memory_HeapManager_Allocate(*v7, 8 * v14, 16, 0);
        }
        else {
          v15 = 0;
        }
        v16 = v15 + 8 * v14;
        v17 = &v5[-v6];
        v18 = (__int64)&v10[v15 + -8 * v11];
        *(_QWORD*)&v10[v15] = v8;
        v5 = &v10[v15 + 8];
        a1 = memcpy(v18, v6, v17);
        a2[1] = (__int64)v5;
        a2[2] = v16;
        if (v6 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*v7 + 200LL) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v7 + v19, v6);
        }
        v6 = v18;
      }
      v2 += 16;
      a2[1] = (__int64)v5;
    } while (v2 != v3);
  }
  *a2 = v6;
  v20 = *(_QWORD*)(v34 + 840);
  for (i = *(_QWORD*)(v34 + 848); v20 != i; a2[1] = (__int64)v5) {
    v22 = *(_QWORD*)(*(_QWORD*)v20 + 16LL);
    v23 = a2[2];
    if ((unsigned __int64)v5 < v23) {
      *(_QWORD*)v5 = v22;
      v5 += 8;
    }
    else {
      v24 = &v5[-v6];
      v25 = (__int64)&v5[-v6] >> 3;
      v26 = v25 + 1;
      if ((unsigned __int64)(v25 + 1) >> 61 != 0) {
        goto LABEL_43;
      }
      v27 = v23 - v6;
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
          goto LABEL_44;
        }
        v29 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 8 * v28,
                                             16, 0);
      }
      else {
        v29 = 0;
      }
      v30 = v29 + 8 * v28;
      v31 = &v5[-v6];
      v32 = (__int64)&v24[v29 + -8 * v25];
      *(_QWORD*)&v24[v29] = v22;
      v5 = &v24[v29 + 8];
      a1 = memcpy(v32, v6, v31);
      a2[1] = (__int64)v5;
      a2[2] = v30;
      if (v6 != 0) {
        v33 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v33, v6);
      }
      v6 = v32;
    }
    v20 += 16;
  }
  *a2 = v6;
}

__n128 Manager_e9b1b0(_QWORD* a1)
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
  __n128 result;
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
  _QWORD v37[4];
  _QWORD* v38;

  v2 = a1[155];
  if (v2 != 0 && (v3 = std___1___shared_weak_count_lock(v2)) != 0) {
    v4 = a1[154];
    if (v4 != 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 16) + 440LL);
      if (v5 != 0 &&
          (unsigned __int64)(v6 = *(unsigned __int8*)(v5 + 16)) <= 3) {
        v7 = GameData_1b01768[v6];
      }
      else {
        v7 = 3;
      }
      v9 = v3;
      v8 = *GameData_212ea58 + (v7 << 7) + 672;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v9 = 0;
      v8 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v10 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1(v10);
    }
  }
  else {
    v8 = 0;
    v9 = 0;
    v4 = 0;
  }
  v35 = 0;
  v36 = 0;
  v37[0] = GameData_1feca98;
  v37[1] = &v35;
  v38 = v37;
  CmdbtlPartyNatives_e9aba0(a1, v37);
  if (v38 == v37) {
    v12 = 32;
  }
  else {
    if (v38 == nullptr) {
      goto LABEL_18;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v38 + v12))((__int64)v38);
LABEL_18:
  if (v36 == 0) {
    goto LABEL_48;
  }
  v13 = std___1___shared_weak_count_lock(v36);
  v14 = v35;
  if (v13 != 0) {
    v15 = v35;
  }
  else {
    v15 = 0;
  }
  if (v36 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v36);
  }
  if (v15 != 0) {
    v16 = *(_QWORD*)(*(_QWORD*)(v14 + 16) + 440LL);
    if (v16 != 0 &&
        (unsigned __int64)(v17 = *(unsigned __int8*)(v16 + 16)) <= 3) {
      v18 = GameData_1b01768[v17];
    }
    else {
      v18 = 3;
    }
    v19 = GameData_2203490 + (v18 << 7);
    v20 = *(_QWORD*)(v19 + 760);
    if (v20 != 0) {
      v21 = *(_QWORD*)(v19 + 752);
      v22 = *(_QWORD*)(v19 + 760);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                memory_order_relaxed);
      v23 = std___1___shared_weak_count_lock(v22);
      if (v23 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v24 = v23;
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
          std___1___shared_weak_count___release_weak_alt1(v24);
        }
        result = std___1___shared_weak_count___release_weak_alt1(v20);
        if (v21 != v15) {
          goto LABEL_45;
        }
        v25 = *(_QWORD*)(*(_QWORD*)(v14 + 16) + 440LL);
        if (v25 != 0 &&
            (unsigned __int64)(v26 = *(unsigned __int8*)(v25 + 16)) <= 3) {
          v27 = GameData_1b01768[v26];
        }
        else {
          v27 = 3;
        }
        v8 = GameData_2203490 + (v27 << 7) + 672;
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v9 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) != 0) {
          v4 = v14;
          v9 = v13;
          goto LABEL_45;
        }
        (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(
            v9, *(long double*)&result);
        v20 = v9;
        v9 = v13;
        v4 = v14;
      }
      result = std___1___shared_weak_count___release_weak_alt1(v20);
    }
  }
LABEL_45:
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v13 + 16LL))(
        v13, *(long double*)&result);
    result = std___1___shared_weak_count___release_weak_alt1(v13);
  }
LABEL_48:
  if (v8 != 0) {
    v28 = a1[157];
    if (v28 != 0) {
      v29 = std___1___shared_weak_count_lock(v28);
      if (v29 != 0) {
        v30 = v29;
        if (a1[156] != 0) {
          v33 = a1[156];
          v34 = v29;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                                    memory_order_relaxed);
          CmdbtlPartyNatives_e73070(v8, &v33);
          if (v34 != 0) {
            result = std___1___shared_weak_count___release_weak_alt1(v34);
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v30 + 16LL))(
              v30, *(long double*)&result);
          result = std___1___shared_weak_count___release_weak_alt1(v30);
        }
      }
    }
  }
  if (v4 != 0) {
    GameRoutine_e9b550(a1, *(unsigned int*)(v4 + 8), 2, *(long double*)&result);
  }
  v31 = a1[155];
  a1[154] = 0;
  a1[155] = 0;
  if (v31 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v31);
  }
  v32 = a1[157];
  a1[156] = 0;
  a1[157] = 0;
  if (v32 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v32);
  }
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(
        v9, *(long double*)&result);
    return std___1___shared_weak_count___release_weak_alt1(v9);
  }
  return result;
}

void Manager_e9b550(__int64 a1, int a2, unsigned int a3)
{

#pragma clang fp contract(off)
  __int64* v5;
  _QWORD* v6;
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
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  long double v24;
  __int64 v25;
  __n128 v26;
  __int64* v27;
  struct {
    __int64 v28;
    __int64 v29;
  } v28_;
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;
  struct {
    __int64 (**v32)();
    __int64* v33;
    int* v34;
    char gap56_[8];
    __int64 (***v35)();
  } v32_;
  int v36;

  v36 = a2;
  v30_.v30 = 0;
  v30_.v31 = 0;
  v5 = GameData_212ea58;
  v32_.v32 = GameData_1fed038;
  v32_.v33 = &v30_.v30;
  v32_.v35 = &v32_.v32;
  v6 = (_QWORD*)*GameData_212ea58;
  v32_.v34 = &v36;
  CmdbtlPartyNatives_e9a800_alt1(v6, (__int64)&v32_.v32);
  if (v32_.v35 == &v32_.v32) {
    v7 = 4;
  }
  else {
    if (v32_.v35 == nullptr) {
      goto LABEL_6;
    }
    v7 = 5;
  }
  ((__int64 (*)(__int64))(*v32_.v35)[v7])((__int64)v32_.v35);
LABEL_6:
  if (v30_.v31 != 0) {
    v8 = std___1___shared_weak_count_lock(v30_.v31);
    if (v8 != 0) {
      v9 = v30_.v30;
    }
    else {
      v9 = 0;
    }
    if (v30_.v31 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v30_.v31);
    }
  }
  else {
    v8 = 0;
    v9 = 0;
  }
  v10 = *(_QWORD*)(v9 + 16);
  v11 = *(_QWORD*)(v10 + 440);
  if (v11 != 0 &&
      (unsigned __int64)(v12 = *(unsigned __int8*)(v11 + 16)) <= 3) {
    v13 = GameData_1b018e8[v12];
  }
  else {
    v13 = 392;
  }
  v14 = *v5;
  v15 = a1 + 672;
  v16 = v14 + v13;
  v17 = 0x30100u >> (8 * a3);
  v18 = *(int*)(v16 + 672);
  if (a3 >= 3) {
    LOBYTE(v17) = 8;
  }
  LOBYTE(v30_.v30) = v17;
  v19 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v19 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  v20 = v15 + (v18 << 7);
  if (*(_QWORD*)(v10 + 392) == v19 || (*(_BYTE*)(v10 + 418) & 8) != 0) {
    v22 = 0;
  }
  else {
    v21 = v10;
    LODWORD(v32_.v32) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF;
    v22 = game_HasSkill((_QWORD*)(v10 + 1744), (unsigned int*)&v32_.v32) ^ 1;
    v10 = v21;
  }
  GameRoutine_6c47b0(v10, &v30_.v30, v22 & 1, 0);
  v28_.v28 = v9;
  v28_.v29 = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  v23 = v15 + ((__int64)(int)a3 << 7);
  *(__n128*)&v24 = CmdbtlPartyNatives_e74760(v20, &v28_.v28);
  v25 = v28_.v29;
  if (v28_.v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28_.v29 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v25 + 16LL))(v25, v24);
    std___1___shared_weak_count___release_weak_alt1(v25);
    if (v8 != 0) {
      goto LABEL_30;
    }
  LABEL_32:
    v32_.v33 = nullptr;
    goto LABEL_33;
  }
  if (v8 == 0) {
    goto LABEL_32;
  }
LABEL_30:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                            memory_order_relaxed);
  v32_.v33 = (__int64*)v8;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                            memory_order_relaxed);
LABEL_33:
  v32_.v32 = (__int64 (**)(void))v9;
  *(long double*)&v26 = GameRoutine_e74040(v23, &v32_.v32);
  v27 = v32_.v33;
  if (v32_.v33 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64*, long double))(*v27 + 16))(v27, *(long double*)&v26);
    v26 = std___1___shared_weak_count___release_weak_alt1(v27);
    if (v8 != 0) {
      goto LABEL_36;
    }
  LABEL_41:
    CmdBtlUnit_e7aab0(v9, *(_DWORD*)(v23 + 8) > 1u, v26);
    return;
  }
  if (v8 == 0) {
    goto LABEL_41;
  }
LABEL_36:
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(
        v8, *(long double*)&v26);
    v26 = std___1___shared_weak_count___release_weak_alt1(v8);
  }
  CmdBtlUnit_e7aab0(v9, *(_DWORD*)(v23 + 8) > 1u, v26);
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
}

void Manager_e9b830(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  int v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  char* v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  void* v20;

  v2 = GameData_2203490;
  v3 = *(_QWORD*)(**(_QWORD**)(GameData_2203490 + 712) + 16LL);
  if (v3 != 0) {
    v4 = (*(_DWORD*)(GameData_2203490 + 684) + a2) &
         ~((*(_DWORD*)(GameData_2203490 + 684) + a2) >> 31);
    v5 =
        *(_DWORD*)(GameData_2203490 + 692) + *(_DWORD*)(GameData_2203490 + 688);
    if (v5 <= 1) {
      v5 = 1;
    }
    v6 = (v5 + a2) & ~((v5 + a2) >> 31);
    v7 = GameRoutine_e743f0(GameData_2203490 + 672);
    if (*(_DWORD*)(v2 + 680) != 0) {
      v8 = 0;
    }
    else {
      if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0) {
        v8 = 0;
      }
      else {
        v14 = v7;
        v20 = &GameData_1af5ec9;
        v19 = game_HashString(&GameData_1af5ec9);
        if (game_GameModeData_instance_ != 0 &&
            (v15 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), &v19)) != 0) {
          v8 = *(unsigned int*)(v15 + 32);
        }
        else {
          v8 = 0;
        }
        v7 = v14;
        if (*(_DWORD*)(v2 + 680) != 0) {
          goto LABEL_6;
        }
      }
      if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
        v16 = v7;
        v17 = v8;
        v20 = &GameData_1ad7123;
        v19 = game_HashString(&GameData_1ad7123);
        if (game_GameModeData_instance_ != 0 &&
            (v18 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), &v19)) != 0) {
          v9 = *(unsigned int*)(v18 + 32);
        }
        else {
          v9 = 0;
        }
        v7 = v16;
        v8 = v17;
        goto LABEL_7;
      }
    }
  LABEL_6:
    v9 = 0;
  LABEL_7:
    GameRoutine_16249f0(v7, v3, v4, v4, v6, v8, v9);
    v2 = GameData_2203490;
  }
  v10 = *(_QWORD*)(**(_QWORD**)(v2 + 840) + 16LL);
  if (v10 != 0) {
    v11 = GameRoutine_e743f0(v2 + 800);
    v12 = *(_DWORD*)(v2 + 820) + *(_DWORD*)(v2 + 816);
    if (v12 <= 1) {
      v13 = 1;
    }
    else {
      v13 = (unsigned int)v12;
    }
    GameRoutine_1624b10(v11, v10, *(unsigned int*)(v2 + 812),
                        *(unsigned int*)(v2 + 812), v13);
  }
}

__int64 Manager_e9bcb0(__int64 a1, __int64 a2, signed int a3, __int64* a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  unsigned int v19;
  char v20;
  __int64 v22[2];

  v7 = a1 + ((__int64)a3 << 7);
  v8 = *(_QWORD*)(v7 + 752);
  v9 = *(_QWORD*)(v7 + 760);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  v10 = a4[1];
  if (v10 == 0) {
    v10 = v9;
    goto LABEL_9;
  }
  if (*(_QWORD*)(v10 + 8) == -1) {
    v10 = v9;
    v11 = *(_QWORD*)(a1 + 536);
    if (v11 == 0) {
      goto LABEL_15;
    }
  LABEL_10:
    v12 = *(_QWORD*)(a1 + 528);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    v13 = std___1___shared_weak_count_lock(v11);
    if (v13 == 0) {
      v12 = 0;
    }
    if (v10 == 0) {
      goto LABEL_19;
    }
    goto LABEL_16;
  }
  v8 = *a4;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                            memory_order_relaxed);
  if (v9 == 0) {
  LABEL_9:
    v11 = *(_QWORD*)(a1 + 536);
    if (v11 == 0) {
      goto LABEL_15;
    }
    goto LABEL_10;
  }
  std___1___shared_weak_count___release_weak();
  v11 = *(_QWORD*)(a1 + 536);
  if (v11 != 0) {
    goto LABEL_10;
  }
LABEL_15:
  v13 = 0;
  v12 = 0;
  if (v10 == 0) {
  LABEL_19:
    v15 = v12 == 0;
    goto LABEL_20;
  }
LABEL_16:
  v14 = std___1___shared_weak_count_lock(v10);
  if (v14 == 0) {
    goto LABEL_19;
  }
  v15 = v12 == v8;
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak();
  }
LABEL_20:
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak();
  }
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (v15) {
  LABEL_34:
    v19 = !v15;
    if (v10 == 0) {
      return v19;
    }
    goto LABEL_37;
  }
  v16 = *(_QWORD*)(a1 + 536);
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                              memory_order_relaxed);
    v17 = *(_QWORD*)(v16 + 8);
    std___1___shared_weak_count___release_weak();
    if (v17 != -1) {
      v18 = 0.3;
      v22[0] = v8;
      v22[1] = v10;
      if (v10 == 0) {
        goto LABEL_29;
      }
    LABEL_32:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                memory_order_relaxed);
      v20 = CmdbtlPartyNatives_e9ba00(a1, a2, a3, 1u, v22, v18);
      std___1___shared_weak_count___release_weak();
      if ((v20 & 1) == 0) {
        v19 = 0;
      LABEL_37:
        std___1___shared_weak_count___release_weak();
        return v19;
      }
      goto LABEL_33;
    }
  }
  v18 = 0.0;
  v22[0] = v8;
  v22[1] = v10;
  if (v10 != 0) {
    goto LABEL_32;
  }
LABEL_29:
  if ((CmdbtlPartyNatives_e9ba00(a1, a2, a3, 1u, v22, v18) & 1) != 0) {
  LABEL_33:
    *(_DWORD*)(GameData_2203490 + 1204) |= 0x800u;
    goto LABEL_34;
  }
  return 0;
}

__int64 Manager_e9bf00(__int64 result)
{
  __int64* v1;
  __int64* v2;
  _QWORD* i;
  __int64 v4;
  __int64* v5;
  __int64* j;
  __int64 v7;
  __int64* v8;
  __int64* k;
  __int64 v10;
  __int64* v11;
  __int64* m;
  __int64 v13;

  v1 = *(__int64**)(result + 712);
  v2 = *(__int64**)(result + 720);
  for (i = (_QWORD*)result; v1 != v2; result = GameRoutine_e79f00(v4)) {
    v4 = *v1;
    v1 += 2;
  }
  v5 = (__int64*)i[105];
  for (j = (__int64*)i[106]; v5 != j; result = GameRoutine_e79f00(v7)) {
    v7 = *v5;
    v5 += 2;
  }
  v8 = (__int64*)i[121];
  for (k = (__int64*)i[122]; v8 != k; result = GameRoutine_e79f00(v10)) {
    v10 = *v8;
    v8 += 2;
  }
  v11 = (__int64*)i[137];
  for (m = (__int64*)i[138]; v11 != m; result = GameRoutine_e79f00(v13)) {
    v13 = *v11;
    v11 += 2;
  }
  return result;
}

__int64 Manager_e9bfc0(__int64 a1)
{
  __int64 result;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;

  result = GameRoutine_ec1530(*GameData_212dec0[0]);
  if ((result & 1) == 0) {
    return result;
  }
  v3 = game_HashString(&GameData_1a90b0d);
  if (v3 == 0) {
    goto LABEL_27;
  }
  v4 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v4 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_27;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = v3;
    if (v3 >= v4) {
      v7 = v3 % v4;
    }
  }
  else {
    v7 = v6 & v3;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v7);
  if (v8 == nullptr || (v9 = (_QWORD*)*v8) == nullptr) {
  LABEL_27:
    v11 = 0;
    goto LABEL_28;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v12 = v9[1];
      if (v12 == v3) {
        if (v9[2] == v3) {
          goto LABEL_104;
        }
      }
      else if ((v12 & v6) != v7) {
        goto LABEL_27;
      }
      v9 = (_QWORD*)*v9;
      v11 = 0;
      if (v9 == nullptr) {
        goto LABEL_28;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v3) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      goto LABEL_27;
    }
  LABEL_17:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      goto LABEL_27;
    }
  }
  if (v9[2] != v3) {
    goto LABEL_17;
  }
LABEL_104:
  v11 = v9[3];
LABEL_28:
  v13 = game_HashString(&GameData_1a95a99);
  if (v13 == 0) {
    goto LABEL_52;
  }
  v14 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v14 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    goto LABEL_52;
  }
  v16 = v14 - 1;
  if ((v14 & (v14 - 1)) != 0) {
    v17 = v13;
    if (v13 >= v14) {
      v17 = v13 % v14;
    }
  }
  else {
    v17 = v16 & v13;
  }
  v18 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v17);
  if (v18 == nullptr || (v19 = (_QWORD*)*v18) == nullptr) {
  LABEL_52:
    v21 = 0;
    goto LABEL_53;
  }
  if ((v14 & v16) == 0) {
    while (1) {
      v22 = v19[1];
      if (v22 == v13) {
        if (v19[2] == v13) {
          goto LABEL_105;
        }
      }
      else if ((v22 & v16) != v17) {
        goto LABEL_52;
      }
      v19 = (_QWORD*)*v19;
      v21 = 0;
      if (v19 == nullptr) {
        goto LABEL_53;
      }
    }
  }
  while (2) {
    v20 = v19[1];
    if (v20 != v13) {
      if (v20 >= v14) {
        v20 %= v14;
      }
      if (v20 != v17) {
        goto LABEL_52;
      }
    }
    else if (v19[2] == v13) {
    LABEL_105:
      v21 = v19[3];
    LABEL_53:
      GameRoutine_e9c3f0(a1, v11, v21);
      v23 = game_HashString(&GameData_1a90b24);
      if (v23 == 0) {
        goto LABEL_77;
      }
      v24 = *(_QWORD*)(GameData_21c99c8 + 96);
      if (v24 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
        goto LABEL_77;
      }
      v26 = v24 - 1;
      if ((v24 & (v24 - 1)) != 0) {
        v27 = v23;
        if (v23 >= v24) {
          v27 = v23 % v24;
        }
      }
      else {
        v27 = v26 & v23;
      }
      v28 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v27);
      if (v28 == nullptr || (v29 = (_QWORD*)*v28) == nullptr) {
      LABEL_77:
        v31 = 0;
        goto LABEL_78;
      }
      if ((v24 & v26) == 0) {
        while (1) {
          v32 = v29[1];
          if (v32 == v23) {
            if (v29[2] == v23) {
              goto LABEL_106;
            }
          }
          else if ((v32 & v26) != v27) {
            goto LABEL_77;
          }
          v29 = (_QWORD*)*v29;
          v31 = 0;
          if (v29 == nullptr) {
            goto LABEL_78;
          }
        }
      }
      while (2) {
        v30 = v29[1];
        if (v30 != v23) {
          if (v30 >= v24) {
            v30 %= v24;
          }
          if (v30 != v27) {
            goto LABEL_77;
          }
        }
        else if (v29[2] == v23) {
        LABEL_106:
          v31 = v29[3];
        LABEL_78:
          v33 = game_HashString(&GameData_1a99886);
          if (v33 == 0) {
            goto LABEL_102;
          }
          v34 = *(_QWORD*)(GameData_21c99b8 + 96);
          if (v34 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
            goto LABEL_102;
          }
          v36 = v34 - 1;
          if ((v34 & (v34 - 1)) != 0) {
            v37 = v33;
            if (v33 >= v34) {
              v37 = v33 % v34;
            }
          }
          else {
            v37 = v36 & v33;
          }
          v38 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v37);
          if (v38 == nullptr || (v39 = (_QWORD*)*v38) == nullptr) {
          LABEL_102:
            v41 = 0;
            return GameRoutine_e9c3f0(a1, v31, v41);
          }
          if ((v34 & v36) == 0) {
            while (1) {
              v42 = v39[1];
              if (v42 == v33) {
                if (v39[2] == v33) {
                  goto LABEL_107;
                }
              }
              else if ((v42 & v36) != v37) {
                goto LABEL_102;
              }
              v39 = (_QWORD*)*v39;
              v41 = 0;
              if (v39 == nullptr) {
                return GameRoutine_e9c3f0(a1, v31, v41);
              }
            }
          }
          while (2) {
            v40 = v39[1];
            if (v40 != v33) {
              if (v40 >= v34) {
                v40 %= v34;
              }
              if (v40 != v37) {
                goto LABEL_102;
              }
            }
            else if (v39[2] == v33) {
            LABEL_107:
              v41 = v39[3];
              return GameRoutine_e9c3f0(a1, v31, v41);
            }
            v39 = (_QWORD*)*v39;
            if (v39 == nullptr) {
              goto LABEL_102;
            }
            continue;
          }
        }
        v29 = (_QWORD*)*v29;
        if (v29 == nullptr) {
          goto LABEL_77;
        }
        continue;
      }
    }
    v19 = (_QWORD*)*v19;
    if (v19 == nullptr) {
      goto LABEL_52;
    }
    continue;
  }
}

__n128 game_cmdbtl_Manager_FindBattleUnit(_QWORD* a1, __int64 a2, __int64 a3)
{
  __n128 result;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  struct {
    __int64* v9;
    __int64 v10;
  } v9_;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  __int64 v13;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v13 = a2;
  v9_.v9 = nullptr;
  v9_.v10 = 0;
  v11_.v11[0] = GameData_1fec918;
  v11_.v11[1] = &v13;
  v11_.v12 = v11_.v11;
  v11_.v11[2] = &v9_.v9;
  CmdbtlPartyNatives_e9a800_alt1(a1, (__int64)v11_.v11),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v11_.v12 == v11_.v11) {
    v6 = 32;
    goto LABEL_5;
  }
  if (v11_.v12 != nullptr) {
    v6 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v11_.v12 + v6))((__int64)v11_.v12),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v9_.v9 != nullptr && (unsigned int)GameRoutine_eb6a20(a2, a3) - 2 <= 2) {
    v7 = v9_.v9;
    *(_WORD*)(v9_.v9[2] + 20) |= 1u;
    if (v7[53] == v7[52]) {
      UnitActor_81d740(v7[2]),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v8 = v9_.v10;
  if (v9_.v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9_.v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt1(v8);
  }
  return result;
}

__int64 game_cmdbtl_Manager_IsAnyLoading()
{
  char v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  char v11;

  if (((unsigned __int8)MapUtil_7555e0() & 1) == 0 &&
      (Field_1012f40(GameData_2219078) & 1) == 0) {
    v1 = *(_QWORD*)(eft_g_effectSystem + 104);
    if (v1 != 0) {
      v2 = GameData_21f5350;
      if (GameData_21f5350 != 0) {
        v3 = v1 + 24;
        do {
          v4 = *(__int16*)(v2 + 24);
          if ((v4 & 0x80000000) == 0) {
            v5 = *(_QWORD*)(v1 + 32);
            if (v5 != v3) {
              while (*(_DWORD*)(v5 + 16) != v4) {
                v5 = *(_QWORD*)(v5 + 8);
                if (v5 == v3) {
                  goto LABEL_8;
                }
              }
              if (*(_BYTE*)(v5 - 7) != 1) {
                goto LABEL_3;
              }
            }
          }
        LABEL_8:
          v2 = *(_QWORD*)v2;
        } while (v2 != 0);
      }
    }
    v11 = 0;
    v9_.v10 = v9_.v9;
    v6 = (_QWORD*)*GameData_212ea58;
    v9_.v9[0] = GameData_1fecc98;
    v9_.v9[1] = &v11;
    CmdbtlPartyNatives_e9a800_alt1(v6, (__int64)v9_.v9);
    if (v9_.v10 == v9_.v9) {
      v7 = 32;
    }
    else {
      if (v9_.v10 == nullptr) {
      LABEL_19:
        v0 = v11;
        return v0 & 1;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v9_.v10 + v7))((__int64)v9_.v10);
    goto LABEL_19;
  }
LABEL_3:
  v0 = 1;
  return v0 & 1;
}

__int64 Manager_e9c780(__int64 a1, int a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      128, 16, 0);
  *(_QWORD*)(v5 + 8) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_BYTE*)(v5 + 32) = 0;
  v6 = v5;
  v7 = v5;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)v5 = GameData_1fecd18;
  *(_DWORD*)(v5 + 72) = -1;
  *(_QWORD*)(v5 + 76) = 0;
  *(_QWORD*)(v5 + 84) = 0;
  *(_QWORD*)(v5 + 92) = 0;
  *(_QWORD*)(v5 + 100) = 0;
  *(_DWORD*)(v5 + 108) = 0;
  *(_QWORD*)(v5 + 36) = 0xFFFFFFFF00000000LL;
  v8 = *v4;
  *(_QWORD*)(v7 + 24) = game_cmdbtl_MindBtlInfo_vtable;
  v7 += 24;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(v8, 88, 16, 0);
  v9[2] = 0;
  *v9 = GameData_1fef2b8;
  v9[1] = 0;
  v10 = *(_QWORD*)(a1 + 648);
  v9[6] = 0;
  v9[7] = 0;
  v9[8] = 0;
  v9[9] = 0;
  v9[10] = 0;
  v9[4] = v7;
  v9[5] = 0;
  *(_QWORD*)(v6 + 120) = v9;
  *(_QWORD*)(a1 + 640) = v7;
  *(_QWORD*)(a1 + 648) = v6;
  v9[3] = game_cmdbtl_Target_vtable;
  *(_QWORD*)(v6 + 112) = v9 + 3;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak();
  }
  v11 = *(_QWORD*)(a1 + 640);
  v12 = *(_QWORD*)(v11 + 40);
  *(_BYTE*)(v11 + 8) = 0;
  *(_DWORD*)(v11 + 12) = a2;
  *(_DWORD*)(v11 + 16) = -1;
  *(_QWORD*)(v11 + 24) = 0;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  if (v12 != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_DWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 48) = 0xFFFFFFFFLL;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11);
  v14 = *(_QWORD*)(a1 + 640);
  v15 = *(_QWORD*)(a1 + 648);
  if (v15 == 0 || (atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) != 0)) {
    if (v14 == 0) {
      goto LABEL_9;
    }
  LABEL_15:
    *(_DWORD*)(v14 + 60) |= *(_DWORD*)(a1 + 1228);
    return result;
  }
  (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
  result = std___1___shared_weak_count___release_weak();
  if (v14 != 0) {
    goto LABEL_15;
  }
LABEL_9:
  v14 = *(_QWORD*)(a1 + 656);
  v16 = *(_QWORD*)(a1 + 664);
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      result = std___1___shared_weak_count___release_weak();
    }
  }
  if (v14 != 0) {
    goto LABEL_15;
  }
  return result;
}

__int64 Manager_e9c990(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      136, 16, 0);
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_BYTE*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 76) = 0;
  *(_QWORD*)(v4 + 84) = 0;
  *(_QWORD*)(v4 + 92) = 0;
  *(_QWORD*)(v4 + 100) = 0;
  *(_DWORD*)(v4 + 108) = 0;
  *(_QWORD*)v4 = GameData_1fecd68;
  *(_DWORD*)(v4 + 72) = -1;
  *(_QWORD*)(v4 + 36) = 0xFFFFFFFF00000000LL;
  v5 = *(_QWORD*)(a1 + 664);
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_QWORD*)(a1 + 664) = v4;
  *(_QWORD*)(v4 + 24) = game_cmdbtl_MindViewer_vtable;
  *(_QWORD*)(a1 + 656) = v4 + 24;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak();
  }
  v6 = *(_QWORD*)(a1 + 656);
  v7 = *(_QWORD*)(v6 + 40);
  *(_BYTE*)(v6 + 8) = 0;
  *(_DWORD*)(v6 + 12) = a2;
  *(_DWORD*)(v6 + 16) = -1;
  *(_QWORD*)(v6 + 24) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_DWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 48) = 0xFFFFFFFFLL;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 56LL))(v6);
  v9 = *(_QWORD*)(a1 + 640);
  v10 = *(_QWORD*)(a1 + 648);
  if (v10 == 0 || (atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) != 0)) {
    if (v9 == 0) {
      goto LABEL_9;
    }
  LABEL_15:
    *(_DWORD*)(v9 + 60) |= *(_DWORD*)(a1 + 1228);
    return result;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  result = std___1___shared_weak_count___release_weak();
  if (v9 != 0) {
    goto LABEL_15;
  }
LABEL_9:
  v9 = *(_QWORD*)(a1 + 656);
  v11 = *(_QWORD*)(a1 + 664);
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      result = std___1___shared_weak_count___release_weak();
    }
  }
  if (v9 != 0) {
    goto LABEL_15;
  }
  return result;
}

__int64 game_cmdbtl_Manager_UnitRelocationImpl(_QWORD* a1, __int64 a2)
{
  char v4;
  __int64 result;
  __int64 v6;
  __int64* v7;
  __int64* i;
  __int64 v9;
  __int64* v10;
  __int64* j;
  __int64 v12;
  __int64* v13;
  __int64* k;
  __int64 v15;
  __int64* v16;
  __int64* m;
  __int64 v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;

  Manager_e9a300_alt1(a1);
  if ((*(_BYTE*)(a2 + 1) & 1) == 0) {
    Manager_e9b1b0_alt1(a1);
  }
  if ((*(_BYTE*)(GameData_22190c0 + 9) & 1) == 0 &&
      game_ProcFadeView_instance_ != 0) {
    v4 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
    *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 2;
    if (game_ProcFadeView_instance_ != 0) {
      game_809ba0(game_ProcFadeView_instance_, 0x1.1111120000000p-3f);
      if (game_ProcFadeView_instance_ != 0) {
        *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v4;
      }
    }
  }
  GameRoutine_e74b60_alt1((__int64)(a1 + 84), a2);
  GameRoutine_e74b60_alt1((__int64)(a1 + 100), a2);
  GameRoutine_e74b60_alt1((__int64)(a1 + 116), a2);
  GameRoutine_e74b60_alt1((__int64)(a1 + 132), a2);
  v19_.v19[0] = GameData_1fecf38;
  v19_.v20 = v19_.v19;
  CmdbtlPartyNatives_e9a800_alt1(a1, (__int64)v19_.v19);
  result = (__int64)v19_.v20;
  if (v19_.v20 == v19_.v19) {
    v6 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      goto LABEL_13;
    }
    v6 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v19_.v20 + v6))((__int64)v19_.v20);
LABEL_13:
  v7 = (__int64*)a1[89];
  for (i = (__int64*)a1[90]; v7 != i; result = CmdBtlUnit_e7cc80_alt1(v9)) {
    v9 = *v7;
    v7 += 2;
  }
  v10 = (__int64*)a1[105];
  for (j = (__int64*)a1[106]; v10 != j; result = CmdBtlUnit_e7cc80_alt1(v12)) {
    v12 = *v10;
    v10 += 2;
  }
  v13 = (__int64*)a1[121];
  for (k = (__int64*)a1[122]; v13 != k; result = CmdBtlUnit_e7cc80_alt1(v15)) {
    v15 = *v13;
    v13 += 2;
  }
  v16 = (__int64*)a1[137];
  for (m = (__int64*)a1[138]; v16 != m; result = CmdBtlUnit_e7cc80_alt1(v18)) {
    v18 = *v16;
    v16 += 2;
  }
  return result;
}

__int64 Manager_e9cd90(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  char v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  _QWORD* v18;
  _QWORD* v19;

  v1 = *(_QWORD**)GameData_212f5c0[0];
  if (*(_QWORD*)GameData_212f5c0[0] != 0) {
    v17 = 0;
    v16 = 0;
    v2 = result;
    v15 = 0;
    v14 = 0;
    v6 = GameData_212f730[0] + 16;
    v3 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
    v3[2] = 0;
    v4 = GameData_212f7d0[0];
    v5 = GameData_212f968;
    v3[6] = 0;
    v3[7] = 0;
    v3[8] = 0;
    v3[9] = 0;
    v3[10] = 0;
    v19 = v3;
    v7 = 0;
    v9 = 0;
    v10 = 0;
    v13 = 0;
    *v3 = v4 + 2;
    v3[1] = 0;
    v3[4] = &v6;
    v3[5] = 0;
    v3[3] = v5 + 2;
    v18 = v3 + 3;
    v8 = 0xFFFFFFFF00000000LL;
    v11 = 0;
    v12 = 0xFFFFFFFFLL;
    MindBtlInfo_edb660_alt1((__int64)&v6);
    game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo((__int64)&v6, v2 + 1264, 0x2000);
    CmdBtlCombatWindow_17c4450_alt1(v1, v2 + 1264);
    return MindBtlInfo_Destructor_alt1(&v6);
  }
  return result;
}

__int64 game_cmdbtl_Manager_Manager_lambda0_Invoke(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (*(_BYTE*)(v1 + 1200) != 0) {
    *(_BYTE*)(v1 + 1200) = 0;
    return GameRoutine_e81260(v1 + 16);
  }
  return result;
}

__int64 game_cmdbtl_Manager_FindBattleUnit_lambda0_Invoke_e9d100(__int64 result,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  if (*(_QWORD*)(v2 + 16) == **(_QWORD**)(result + 8)) {
    v4 = *(_QWORD**)(result + 16);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
    }
    v5 = v4[1];
    *v4 = v2;
    v4[1] = v3;
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      result = std___1___shared_weak_count___release_weak();
    }
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64 game_cmdbtl_Manager_FindBattleUnit_lambda0_Invoke_e9d2b0(__int64 result,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(v2 + 208);
  if (v4 != 0 && **(_QWORD**)(result + 8) == *(_QWORD*)(v4 + 8)) {
    v5 = *(_QWORD**)(result + 16);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
    }
    v6 = v5[1];
    *v5 = v2;
    v5[1] = v3;
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak();
    }
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64 game_cmdbtl_Manager_FindBattleUnit_lambda0_Invoke_e9d470(__int64 result,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  if (*(_QWORD*)(*(_QWORD*)(v2 + 16) + 392LL) == **(_QWORD**)(result + 8)) {
    v4 = *(_QWORD**)(result + 16);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
    }
    v5 = v4[1];
    *v4 = v2;
    v4[1] = v3;
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      result = std___1___shared_weak_count___release_weak();
    }
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64 game_cmdbtl_Manager_ForAllBattleUnit_lambda0_Invoke_e9d620(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(a1 + 8);
  v8 = v2;
  v9 = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = *(_QWORD*)(v4 + 32);
  if (v5 == 0) {
    GameRoutine_60a310(0, a2);
  }
  result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5, &v8);
  v7 = v9;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak();
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64 game_cmdbtl_Manager_ForAllBattleUnit_lambda0_Invoke_e9d7d0(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(a1 + 8);
  v8 = v2;
  v9 = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = *(_QWORD*)(v4 + 32);
  if (v5 == 0) {
    GameRoutine_60a310(0, a2);
  }
  result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5, &v8);
  v7 = v9;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak();
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64 game_cmdbtl_Manager_GetReinforceIsmUnit_lambda0_Invoke(__int64 result,
                                                               __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;

  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(v3 + 320);
  if (v4 == 0) {
    goto LABEL_10;
  }
  v5 = *(_QWORD*)(v3 + 312);
  v6 = result;
  v7 = *(_QWORD*)(v3 + 320);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v8 = std___1___shared_weak_count_lock(v7);
  result = std___1___shared_weak_count___release_weak();
  if (v8 == 0) {
    goto LABEL_10;
  }
  if (v5 != 0 && (*(_BYTE*)(*(_QWORD*)v5 + 76LL) & 0x20) != 0) {
    v9 = *(_QWORD**)(v6 + 8);
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
    }
    result = v9[1];
    *v9 = v3;
    v9[1] = v2;
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak();
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak();
    if (v2 == 0) {
      return result;
    }
  }
  else {
  LABEL_10:
    if (v2 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

unsigned __int64 game_cmdbtl_Manager_GetTalkActiveCharacter_lambda0_Invoke(
    unsigned __int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD**)(result + 8);
  if (*v4 != 0) {
    goto LABEL_2;
  }
  v5 = *(_QWORD*)(result + 16);
  v6 = result;
  if ((*(_BYTE*)v5 & 1) != 0) {
    v7 = *(_QWORD*)(v5 + 16);
  }
  else {
    v7 = v5 + 1;
  }
  v8 = *(_QWORD*)(*(_QWORD*)(v3 + 16) + 392LL);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v8 + 8);
  }
  else {
    v9 = 0;
  }
  result = strcmp(v7, v9);
  if ((_DWORD)result == 0) {
    *v4 = *(_QWORD*)(*(_QWORD*)(v3 + 208) + 8LL);
    goto LABEL_2;
  }
  v10 = game_HashString(v7);
  if (v10 == 0) {
    goto LABEL_38;
  }
  v11 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v11 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_38;
  }
  v13 = v11 - 1;
  if ((v11 & (v11 - 1)) != 0) {
    v14 = v10;
    if (v10 >= v11) {
      v14 = v10 % v11;
    }
  }
  else {
    v14 = v13 & v10;
  }
  v15 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v14);
  if (v15 == nullptr || (v16 = (_QWORD*)*v15) == nullptr) {
  LABEL_38:
    v18 = 0;
    goto LABEL_39;
  }
  if ((v11 & v13) == 0) {
    while (1) {
      v19 = v16[1];
      if (v19 == v10) {
        if (v16[2] == v10) {
          goto LABEL_73;
        }
      }
      else if ((v19 & v13) != v14) {
        goto LABEL_38;
      }
      v16 = (_QWORD*)*v16;
      v18 = 0;
      if (v16 == nullptr) {
        goto LABEL_39;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == v10) {
      break;
    }
    if (v17 >= v11) {
      v17 %= v11;
    }
    if (v17 != v14) {
      goto LABEL_38;
    }
  LABEL_28:
    v16 = (_QWORD*)*v16;
    if (v16 == nullptr) {
      goto LABEL_38;
    }
  }
  if (v16[2] != v10) {
    goto LABEL_28;
  }
LABEL_73:
  v18 = v16[3];
LABEL_39:
  result = game_HashString(v9);
  if (result != 0) {
    v20 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v20 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
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
      v24 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v23);
      if (v24 != nullptr) {
        v25 = (_QWORD*)*v24;
        if (v25 != nullptr) {
          if ((v20 & v22) == 0) {
            while (1) {
              v27 = v25[1];
              if (v27 == result) {
                if (v25[2] == result) {
                  goto LABEL_64;
                }
              }
              else if ((v27 & v22) != v23) {
                goto LABEL_2;
              }
              v25 = (_QWORD*)*v25;
              if (v25 == nullptr) {
                goto LABEL_2;
              }
            }
          }
          do {
            v26 = v25[1];
            if (v26 == result) {
              if (v25[2] == result) {
              LABEL_64:
                if (v18 != 0) {
                  v28 = v25[3];
                  if (v28 != 0) {
                    v29 = *(_QWORD*)(v18 + 32);
                    if (v29 != 0 && (v30 = *(_QWORD*)(v28 + 32)) != 0 &&
                        (_DWORD)(result = strcmp(v29, v30)) == 0) {
                      **(_QWORD**)(v6 + 8) =
                          *(_QWORD*)(*(_QWORD*)(v3 + 208) + 8LL);
                    }
                    else {
                      result = *(_QWORD*)(v18 + 40);
                      if (result != 0) {
                        v31 = *(_QWORD*)(v28 + 40);
                        if (v31 != 0) {
                          result = strcmp(result, v31);
                          if ((_DWORD)result == 0) {
                            **(_QWORD**)(v6 + 8) =
                                *(_QWORD*)(*(_QWORD*)(v3 + 208) + 8LL);
                          }
                        }
                      }
                    }
                  }
                }
                break;
              }
            }
            else {
              if (v26 >= v20) {
                v26 %= v20;
              }
              if (v26 != v23) {
                break;
              }
            }
            v25 = (_QWORD*)*v25;
          } while (v25 != nullptr);
        }
      }
    }
  }
LABEL_2:
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64 game_cmdbtl_Manager_CheckAutoPlay_lambda0_Invoke(__int64 a1,
                                                         __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  result = CmdBtlUnit_e7e180(v3);
  *(_BYTE*)(v3 + 190) = result & 1;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64

game_cmdbtl_Manager_TryPhaseCameraCutResetLerp_lambda0_Invoke(__int64 result)
{
  _QWORD* v1;
  struct {
    __int16 v2;
    char gap10_[6];
    __int64 v3;
    __int64 v4;
  } v2_;

  if ((*(_BYTE*)(result + 16) & 1) == 0) {
    v1 = *(_QWORD**)(result + 8);
    v2_.v2 = 0;
    v2_.v3 = 0;
    v2_.v4 = 0;
    game_cmdbtl_Manager_UnitRelocationImpl(v1, (__int64)&v2_.v2);
    result = v2_.v4;
    if (v2_.v4 != 0) {
      return std___1___shared_weak_count___release_weak_alt3(v2_.v4);
    }
  }
  return result;
}

__int64 game_cmdbtl_Manager_IsAnyLoading_lambda0_Invoke(__int64 result,
                                                        __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  if (*(_QWORD*)(v2 + 24) != 0) {
    v4 = *(_QWORD*)(v2 + 208);
    if (v4 == 0 || (*(_BYTE*)(v4 + 342) & 1) == 0) {
      **(_BYTE**)(result + 8) = 1;
    }
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 game_cmdbtl_Manager_SeqBattleEnterGameView_lambda0_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  result = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(*(_QWORD*)(result + 16) + 440LL);
  if (v4 != 0 && (unsigned __int64)(v5 = *(unsigned __int8*)(v4 + 16)) <= 3) {
    v6 = GameData_1b018e8[v5];
  }
  else {
    v6 = 392;
  }
  if (*(_DWORD*)(GameData_2203490 + v6 + 672) != 3) {
    result = CmdBtlUnit_e79c10();
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 game_cmdbtl_Manager_SeqBattleCombatUniverse_lambda0_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  result = CmdBtlUnit_e79c10_alt1(v2, 3);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak_alt2(v3);
  }
  return result;
}

__int64 game_cmdbtl_Manager_ExitCombatView_lambda0_Invoke(__int64 a1,
                                                          __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  result = CmdBtlUnit_e79c10_alt1(v2, 1);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak_alt2(v3);
  }
  return result;
}

__int64 game_cmdbtl_Manager_UnitRelocationImpl_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  GameRoutine_e7c6f0(v3, 0, 0.0);
  result = CmdBtlUnit_e7ca80(v3, 0.0);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64 game_cmdbtl_Manager_PostSeqAttack_lambda0_Invoke(__int64 a1,
                                                         __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  result = CmdBtlUnit_e7d620(v2);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 game_cmdbtl_Manager_OnRunEventManager_lambda0_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int16 v7;
  int v8;
  __int64 result;

  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(*(_QWORD*)(v3 + 16) + 440LL);
  if (v4 != 0 && (unsigned __int64)(v5 = *(unsigned __int8*)(v4 + 16)) <= 3) {
    v6 = GameData_1b014c8[v5];
  }
  else {
    v6 = 416;
  }
  v7 = *(unsigned __int8*)(*GameData_212ea58 + v6 + 672) | 0x100;
  v8 = CmdBtlUnit_e7c280(v3) & 1;
  *(_WORD*)(v3 + 368) = v7;
  result = CmdBtlUnit_e7c280(v3);
  if (v8 != (result & 1)) {
    *(_BYTE*)(v3 + 191) = 1;
  }
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64 game_cmdbtl_Manager_OnEndEventManager_lambda0_Invoke(__int64 a1,
                                                             __int64* a2,
                                                             long double a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;

  v3 = *a2;
  v4 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  LODWORD(a3) = 1051260355;
  if (*(_BYTE*)(a1 + 8) == 0) {
    *(float*)&a3 = 0.0;
  }
  result = GameRoutine_e7c3f0(v3, 0, 0, a3);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

#pragma GCC visibility pop
