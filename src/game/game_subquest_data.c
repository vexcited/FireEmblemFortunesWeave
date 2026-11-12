#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* GameRoutine_1258640(__int64*);
__attribute__((swiftcall)) void GameRoutine_1264da0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void GameRoutine_89cb30(PSEUDO_X8);
__int64 GameRoutine_1256660(_QWORD, _QWORD);
__int64 GameRoutine_12569c0(__int64, __int64, int);
__int64 GameRoutine_12571e0(__int64*);
__int64 GameRoutine_1257440(__int64);
__int64 GameRoutine_1257620(__int64 result, char);
__int64 GameRoutine_1257a20(__int64);
__int64 GameRoutine_1258420(_QWORD);
__int64 GameRoutine_125e1a0(_QWORD);
__int64 GameRoutine_1260d00(_QWORD, _QWORD);
__int64 GameRoutine_12645e0(_QWORD);
__int64 GameRoutine_1268100(_QWORD);
__int64 GameRoutine_1268280(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1269fa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1326a40(_QWORD);
__int64 GameRoutine_1332f00(_QWORD);
__int64 GameRoutine_17cc060(_QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657a50(void);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_715440(_QWORD);
__int64 GameRoutine_82e7c0(_QWORD, _QWORD);
__int64 GameRoutine_8679c0(_QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_8b03f0(_QWORD);
__int64 GameRoutine_8f7120(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 GameRoutine_9bd480(_QWORD);
__int64 JobFile_676ef0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_ProcInst_Register(void);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 game_UnitItemList_Sort(_QWORD, _QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 game_util_Format(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64* GameRoutine_1255920(__int64* result, unsigned __int64*);
extern _UNKNOWN GameData_1ae67be;
extern _UNKNOWN GameData_1aed6ab;
extern _UNKNOWN GameData_1afaabd;
extern _UNKNOWN GameData_21701d0;
extern _UNKNOWN GameData_2170390;
extern _UNKNOWN GameData_2170710;
extern __int64 (*GameData_201df88[])();
extern __int64 (*GameData_201dfb8[])();
extern __int64 (*GameData_201e038[])();
extern __int64 (*game_GameSubquestData_ProcLearnSkill_vtable[])();
extern __int64 (*game_GameSubquestData_ProcRewardForSharedComp_vtable[])();
extern __int64 (*game_GameSubquestData_ProcReward_vtable[])();
extern __int64 GameData_1a8d218;
extern __int64 GameData_212c060;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_2130f48;
extern __int64 GameData_21ca050;
extern __int64 GameData_21ca310;
extern __int64 GameData_21eea40;
extern __int64 GameData_2240198;
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212cb58[92];
extern __int64* GameData_212d6d0;
extern int GameData_22401a0;
unsigned __int64** GameRoutine_1255aa0(unsigned __int64** result, __int64);
void __attribute__((noreturn)) GameRoutine_1265540(_QWORD);
void __attribute__((noreturn)) GameRoutine_1267840(void);
void __attribute__((noreturn)) GameRoutine_12680d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameSubquestData_Destructor(_QWORD* a1);
__int64 GameSubquestData_12598c0();
__int64* GameSubquestData_1259ce0_alt1(__int64* result) __asm__(
    "GameSubquestData_1259ce0");
__int64
GameSubquestData_1259ea0_alt1(__int64 result, __int64* a2,
                              char a3) __asm__("GameSubquestData_1259ea0");
__int64
GameSubquestData_125a000_alt1(__int64 result, __int64* a2,
                              char a3) __asm__("GameSubquestData_125a000");
__int64
GameSubquestData_125a1a0_alt1(__int64 result, __int64* a2, __int64 a3,
                              char a4) __asm__("GameSubquestData_125a1a0");
__int64
GameSubquestData_125a300_alt1(__int64 a1, __int64* a2,
                              char a3) __asm__("GameSubquestData_125a300");
bool GameSubquestData_125a520(__int64 a1, __int64 a2);
__int64 GameSubquestData_125a550(unsigned __int8* a1, unsigned __int8* a2);
__int64
GameSubquestData_125a640_alt1(__int64 a1, __int64* a2,
                              char a3) __asm__("GameSubquestData_125a640");
__int64
GameSubquestData_125a860_alt1(__int64 result,
                              __int64* a2) __asm__("GameSubquestData_125a860");
__int64
GameSubquestData_125a9c0_alt1(__int64 a1,
                              __int64* a2) __asm__("GameSubquestData_125a9c0");
__int64
GameSubquestData_125abc0_alt1(__int64 result, __int64* a2,
                              char a3) __asm__("GameSubquestData_125abc0");
__int64
GameSubquestData_125ad40_alt1(__int64 a1, __int64* a2,
                              char a3) __asm__("GameSubquestData_125ad40");
__int64
GameSubquestData_125af60_alt1(__int64 result,
                              __int64* a2) __asm__("GameSubquestData_125af60");
__int64
GameSubquestData_125b0c0_alt1(__int64 result,
                              __int64* a2) __asm__("GameSubquestData_125b0c0");
__int64
GameSubquestData_125b200_alt1(__int64 result,
                              __int64* a2) __asm__("GameSubquestData_125b200");
__int64
GameSubquestData_125b340_alt1(__int64 result, __int64* a2,
                              __int64 a3) __asm__("GameSubquestData_125b340");
__int64
GameSubquestData_125b4a0_alt1(__int64 a1,
                              __int64* a2) __asm__("GameSubquestData_125b4a0");
__int64
GameSubquestData_125b6a0_alt1(__int64 result, __int64* a2,
                              char a3) __asm__("GameSubquestData_125b6a0");
__int64 GameSubquestData_125b8e0(_QWORD* a1, __int64 a2);
__int64 GameSubquestData_125ba20(__int64 a1);
__int64 GameSubquestData_125ba80(__int64 result);
__int64 GameSubquestData_125bbc0(__int64 result);
__int64 GameSubquestData_125bca0(__int64 result, _BYTE* a2);
__int64 GameSubquestData_125c0c0(__int64 a1, __int64* a2);
void GameSubquestData_125c1a0(__int64 a1, __int64 a2, __int64** a3);
__int64
GameSubquestData_125c2c0_alt1(__int64 result, __int64 a2, __int64** a3,
                              int a4) __asm__("GameSubquestData_125c2c0");
__int64
GameSubquestData_125d1c0_alt1(__int64 a1, __int64 a2,
                              __int64** a3) __asm__("GameSubquestData_125d1c0");
__int64
GameSubquestData_125d3e0_alt1(__int64 a1) __asm__("GameSubquestData_125d3e0");
__int64
GameSubquestData_125d600_alt1(__int64 a1) __asm__("GameSubquestData_125d600");
__int64
GameSubquestData_125d800_alt1(__int64 a1,
                              __int64 a2) __asm__("GameSubquestData_125d800");
__int64
GameSubquestData_125da40_alt1(__int64 a1, __int64 a2,
                              __int64 a3) __asm__("GameSubquestData_125da40");
void GameSubquestData_125dfc0(__int64 a1, unsigned __int8* a2);
__int64
GameSubquestData_125e460_alt1(__int64 a1,
                              __int64 a2) __asm__("GameSubquestData_125e460");
__int64 GameSubquestData_125e760(__int64 a1, __int64 a2, __int64* a3);
__int64 GameSubquestData_125ea20();
__int64
GameSubquestData_125ec20_alt1(__int64 result,
                              __int64 a2) __asm__("GameSubquestData_125ec20");
__int64 GameSubquestData_Unknown8(__int64 result, __int64 a2);
unsigned __int64** GameSubquestData_Unknown9(unsigned __int64** result,
                                             __int64 a2, int a3);
__int64 GameSubquestData_Unknown10(__int64 result, __int64 a2);
__int64 GameSubquestData_1260b40(__int64 result, __int64 a2);
unsigned __int64** GameSubquestData_Unknown11(unsigned __int64** result,
                                              __int64 a2, int a3);
__int64 GameRoutine_1260fa0(__int64 result, __int64*, _BYTE*);
__int64 GameRoutine_12694e0(_QWORD);
__int64 GameRoutine_187d290(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_82dd50(_QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_1256ec0(_QWORD*, char);
__int64
    GameSubquestData_1257720_alt1(_QWORD,
                                  _QWORD) __asm__("GameSubquestData_1257720");
__int64
    GameSubquestData_125b8e0_alt1(_QWORD, _QWORD,
                                  _QWORD) __asm__("GameSubquestData_125b8e0");
__int64
    GameSubquestData_125dfc0_alt1(_QWORD,
                                  _QWORD) __asm__("GameSubquestData_125dfc0");
__int64 GameSubquestData_125e760_alt1(void) __asm__("GameSubquestData_125e760");
__int64 GameSubquestData_1269fa0_alt1(
    __int64 result, __int64*, __int64 (**)(__int64, __int64), unsigned __int64,
    __int64*, signed __int64) __asm__("GameSubquestData_1269fa0");
__int64
    GameSubquestData_126a200_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD) __asm__("GameSubquestData_126a200");
__int64
    GameSubquestData_126a420_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD,
                                  _QWORD) __asm__("GameSubquestData_126a420");
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_ProcInst_Register_alt1(_QWORD) __asm__("game_ProcInst_Register");
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_util_SNPrintf_alt1(_QWORD, _QWORD, const char*,
                              ...) __asm__("nn_util_SNPrintf");
__int64 strncmp(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1a89194;
extern _UNKNOWN GameData_2170050;
extern _UNKNOWN GameData_21c6868;
extern _UNKNOWN GameData_2240190;
extern __int64 (*game_GameSubquestData_ProcAccept_vtable[])();
extern __int64 (*game_GameSubquestData_ProcSubquestWatcher_vtable[])();
extern __int64 GameData_1ac302b;
extern __int64 GameData_212c6c8;
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
extern __int64 GameData_21c9718;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212c770[3];
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_224018c;
unsigned __int64** GameSubquestData_1255aa0(unsigned __int64** result, __int64);
void __attribute__((noreturn)) GameRoutine_1267e70(_QWORD);
__int64 GameSubquestData_1257440(__int64 a1);
__int64 GameSubquestData_1257620(__int64 result, char a2);
bool GameSubquestData_1257720(__int64* a1, int a2);
bool GameSubquestData_1258420(__int64 a1);
_BYTE* GameSubquestData_1258640(__int64* a1);
__int64 GameSubquestData_1259670(__int64 a1, __int64 a2);
__int64 GameSubquestData_125bda0(__int64 result, unsigned __int16* a2);
__int64 GameSubquestData_125dca0(__int64 result, unsigned __int16* a2);
unsigned __int64** GameSubquestData_Unknown10_1260cb0(unsigned __int64** result,
                                                      __int64 a2, int a3);
__int64 GameSubquestData_1267be0(__int64 a1, __int64* a2, __int64 a3,
                                 _BYTE* a4);
__int64 GameSubquestData_1267cf0(__int64 a1, __int64 a2, __int64* a3,
                                 __int64 a4, _BYTE* a5);
__int64 game_GameSubquestData_Entity_IsTalked_lambda0_Invoke(
    __int64 a1, unsigned __int8* a2, unsigned __int8* a3);
__int64 game_GameSubquestData_Entity_IsTalked_lambda1_Invoke(__int64 a1,
                                                             _BYTE* a2,
                                                             _BYTE* a3);
__int64 GameSubquestData_1269fa0(__int64 result, __int64* a2,
                                 __int64 (**a3)(__int64, __int64),
                                 unsigned __int64 a4, __int64* a5,
                                 signed __int64 a6);
__int64 GameSubquestData_126a200(__int64 result, __int64* a2,
                                 __int64 (**a3)(__int64, __int64),
                                 unsigned __int64 a4, __int64* a5);
__int64 GameSubquestData_126a420(__int64 result, __int64* a2, __int64* a3,
                                 __int64 (**a4)(__int64, __int64), __int64 a5,
                                 __int64 a6, __int64 a7, __int64 a8);
__int64 game_GameSubquestData_AcceptForShow_lambda0_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_GameSubquestData_AcceptForShow_lambda1_Invoke(__int64 a1,
                                                           __int64* a2);
__attribute__((swiftcall)) void
GameSubquestData_1256b40_alt1(PSEUDO_X8,
                              __int64*) __asm__("GameSubquestData_1256b40");
__attribute__((swiftcall)) void
GameSubquestData_1264da0_alt1(PSEUDO_X8,
                              __int64*) __asm__("GameSubquestData_1264da0");
__int64* game_UnitPool_Get(_BYTE*);
__int64 GameRoutine_12658e0(__int64**, __int64);
__int64 GameRoutine_12667e0(__int64**, __int64);
__int64 GameRoutine_8b03f0_alt1(__int64, int,
                                char) __asm__("GameRoutine_8b03f0");
__int64 GameSubquestData_125b8e0_alt2(
    _QWORD*, const char*, unsigned __int8) __asm__("GameSubquestData_125b8e0");
__int64 GameSubquestData_1260d00(__int64, __int64);
__int64 RidePool_93d8e0(__int64);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_UnitPool_GetFirst(int*);
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__n128 GameRoutine_658c00(_QWORD*);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_DeliveryItemChecker_vtable[])();
extern __int64 (*game_anonymous_DeliveryItemCounter_vtable[])();
extern __int64 (*game_anonymous_DeliveryKindChecker_vtable[])();
extern __int64 (*game_anonymous_DeliveryRideChecker_vtable[])();
extern __int64 (*game_anonymous_DeliveryRideCounter_vtable[])();
extern __int64* GameData_212c8a0;
extern __int64* GameData_212cb68[90];
extern __int64 GameData_212cf88[4];
unsigned __int64 GameRoutine_1265c20(unsigned __int64 result, int*, int*, int*);
unsigned __int64 GameRoutine_1266e00(unsigned __int64 result, __int64);
unsigned __int64 GameRoutine_682bc0_alt1(_QWORD*,
                                         __int64) __asm__("GameRoutine_682bc0");
void GameRoutine_6e5900(__int64*, _DWORD*);
void __attribute__((noreturn)) GameRoutine_667c50(void);
void __attribute__((noreturn)) GameRoutine_6e5c60(void);
void game_12645e0(__int64*, __n128);
void game_anonymous_12669e0(__int64*, __int64, __int64, _QWORD*);
__attribute__((swiftcall)) void GameSubquestData_1256b40_alt2(
    PSEUDO_X8 x8_, __int64 result) __asm__("GameSubquestData_1256b40");
__attribute__((swiftcall)) void GameSubquestData_1256d00(PSEUDO_X8 x8_,
                                                         __int64 result);
__int64 GameSubquestData_1257a20(__int64* a1);
void GameSubquestData_1257e40(__int64* a1, __int64* a2);
void GameSubquestData_125e1a0_alt1(__int64* a1, __n128 a2) __asm__(
    "GameSubquestData_125e1a0");
__attribute__((swiftcall)) void GameSubquestData_1264da0_alt2(
    PSEUDO_X8 x8_, unsigned __int64 result) __asm__("GameSubquestData_1264da0");
__n128 GameSubquestData_ProcReward_Destructor_alt1(__int64 a1) __asm__(
    "GameSubquestData_ProcReward_Destructor");
__n128 GameSubquestData_ProcReward_DeletingDestructor_alt1(__int64 a1) __asm__(
    "GameSubquestData_ProcReward_DeletingDestructor");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___next_prime(_QWORD);
void GameRoutine_1269a20(__int64*, unsigned __int64);
void GameSubquestData_1269cc0(__int64 a1, unsigned __int64* a2, __int64* a3,
                              __int64* a4);
_QWORD* game_8f7120(float*, __int64*, __int64*);
__attribute__((swiftcall)) void TransporterConst_89cb30(PSEUDO_X8, unsigned int,
                                                        int);
__int64 GameRoutine_6c6da0_alt1(__int64) __asm__("GameRoutine_6c6da0");
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_UnitItemList_Sort_alt1(__int64, unsigned int,
                                    int) __asm__("game_UnitItemList_Sort");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GameSubquestData_125ec20(__int64 a1, __int64 a2);
__int64 ProcList_9bd480(__int64);
__int64
game_ProcList_Call_9bcfa0_alt1(__int64,
                               __int64) __asm__("game_ProcList_Call_9bcfa0");
_BYTE* ProcInst_657a50_alt1(__int64, char) __asm__("ProcInst_657a50");
__int64* game_9a28e0(int);
__int64 GameHr_876a40(_QWORD*, _QWORD*);
__int64 GameRoutine_1326a40_alt1(__int64) __asm__("GameRoutine_1326a40");
__int64 GameRoutine_1a09d20_alt1(unsigned __int64,
                                 __int64) __asm__("GameRoutine_1a09d20");
__int64 GameRoutine_715440_alt1() __asm__("GameRoutine_715440");
__int64 GameSubquestData_12569c0(__int64, __int64, int);
__int64 GameSubquestData_125a520_alt1() __asm__("GameSubquestData_125a520");
__int64 GameSubquestData_125a550_alt1() __asm__("GameSubquestData_125a550");
__int64
GameSubquestData_125bbc0_alt1(__int64 result, __int64,
                              __int64) __asm__("GameSubquestData_125bbc0");
__int64 ProcInst_657850_alt1(__int64, __int64, const char*, char,
                             __int64) __asm__("ProcInst_657850");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_ProcInst_Register_alt2(__int64) __asm__("game_ProcInst_Register");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 strchr_alt1(const char*, int) __asm__("strchr");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
extern const char GameData_1afaabd_alt1[] __asm__("GameData_1afaabd");
unsigned __int64* game_1268280(unsigned __int64* result, unsigned __int64*,
                               __int64, __int64*, __int64);
unsigned __int64 DeliveryItemChecker_1265c20(unsigned __int64 result, int*,
                                             int*, int*);
unsigned __int64 GameHr_17cc060(__int64, __int64);
unsigned __int64 game_anonymous_1266e00(unsigned __int64 result, __int64);
unsigned int* game_gmap_SpotMgr_FindSpot_alt1(unsigned int* result) __asm__(
    "game_gmap_SpotMgr_FindSpot");
void GameHr_1255920(__int64*, unsigned __int64*);
void GameHr_8679c0();
void GameRoutine_1256660_alt1(__int64*, _QWORD*) __asm__("GameRoutine_1256660");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void SpotMgr_1332f00(__int64);
void __attribute__((noreturn))
GameRoutine_1265540_alt1() __asm__("GameRoutine_1265540");
void __attribute__((noreturn))
GameRoutine_1267840_alt1() __asm__("GameRoutine_1267840");
void __attribute__((noreturn))
GameRoutine_12680d0_alt1() __asm__("GameRoutine_12680d0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_667c50_alt1() __asm__("GameRoutine_667c50");
void __attribute__((noreturn))
GameRoutine_6e5c60_alt1() __asm__("GameRoutine_6e5c60");
void game_12645e0_alt1(__int64*) __asm__("game_12645e0");
__attribute__((swiftcall)) void GameSubquestData_1256b40(PSEUDO_X8 x8_,
                                                         __int64* a1);
void GameSubquestData_1259ce0(__int64* a1);
void GameSubquestData_1259ea0(__int64 a1, __int64* a2, __int64 a3);
void GameSubquestData_125a000(__int64 a1, __int64* a2, __int64 a3);
void GameSubquestData_125a1a0(__int64 a1, __int64* a2, __int64 a3, char a4);
void GameSubquestData_125a300(__int64 a1, __int64* a2, __int64 a3);
void GameSubquestData_125a640(__int64 a1, __int64* a2, __int64 a3);
void GameSubquestData_125a860(__int64 a1, __int64* a2);
void GameSubquestData_125a9c0(__int64 a1, __int64* a2);
void GameSubquestData_125abc0(__int64 a1, __int64* a2, __int64 a3);
void GameSubquestData_125ad40(__int64 a1, __int64* a2, __int64 a3);
void GameSubquestData_125af60(__int64 a1, __int64* a2);
void GameSubquestData_125b0c0(__int64 a1, __int64* a2);
void GameSubquestData_125b200(__int64 a1, __int64* a2);
void GameSubquestData_125b340(__int64 a1, __int64* a2, __int64 a3);
void GameSubquestData_125b4a0(__int64 a1, __int64* a2);
void GameSubquestData_125b6a0(__int64 a1, __int64* a2, __int64 a3);
void GameSubquestData_125c2c0(__int64 a1, __int64 a2, __int64*** a3, int a4);
void GameSubquestData_125d1c0(__int64 a1, __int64 a2, const char*** a3);
void GameSubquestData_125d3e0(__int64 a1);
void GameSubquestData_125d600(__int64 a1);
void GameSubquestData_125d800(__int64 a1, __int64 a2);
void GameSubquestData_125da40(__int64 a1, __int64 a2, __int64 a3);
void GameSubquestData_125e1a0(__int64* a1);
void GameSubquestData_125e460(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void GameSubquestData_1264da0(PSEUDO_X8 x8_,
                                                         __int64* a1);
void GameSubquestData_ProcReward_Destructor(__int64 a1);
void GameSubquestData_ProcReward_DeletingDestructor(__int64 a1);

__attribute__((swiftcall)) void GameSubquestData_1256b40(PSEUDO_X8 x8_,
                                                         __int64* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;

  v2 = *a1;
  v4 = *(unsigned __int16*)(*a1 + 320);
  if (*(_WORD*)(*a1 + 320) != 0) {
    v5 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v4, 16, 0);
    v6 = v5 + 8 * v4;
    v7 = 8;
    v8 = (char*)v5;
    *a2 = v5;
    a2[1] = v5;
    v9 = v5;
    a2[2] = v6;
    do {
      v10 = *(_QWORD*)(*(_QWORD*)(v2 + 328) + v7);
      if ((unsigned __int64)v8 < v6) {
        *(_QWORD*)v8 = v10;
        v8 += 8;
      }
      else {
        v11 = &v8[-v9];
        v12 = (__int64)&v8[-v9] >> 3;
        v13 = v12 + 1;
        if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
          a2[2] = v6;
          *a2 = v9;
          GameRoutine_6e5c60_alt1();
        }
        if ((__int64)(v6 - v9) >> 2 > v13) {
          v13 = (__int64)(v6 - v9) >> 2;
        }
        if (v6 - v9 >= 0x7FFFFFFFFFFFFFF8LL) {
          v14 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v14 = v13;
        }
        if (v14 != 0) {
          if (v14 >> 61 != 0) {
            a2[2] = v6;
            *a2 = v9;
            GameRoutine_60a210_alt1();
          }
          v15 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
        }
        else {
          v15 = 0;
        }
        v16 = (unsigned __int64)&v8[-v9];
        v17 = (__int64)&v11[v15 + -8 * v12];
        v19 = v15 + 8 * v14;
        *(_QWORD*)&v11[v15] = v10;
        v8 = &v11[v15 + 8];
        memcpy_alt1(v17, v9, v16);
        a2[1] = (__int64)v8;
        if (v9 != 0) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v9);
        }
        v6 = v19;
        v9 = v17;
      }
      --v4;
      v7 += 16;
      a2[1] = (__int64)v8;
    } while (v4 != 0);
    a2[2] = v6;
    *a2 = v9;
  }
  else {
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
  }
}

__attribute__((swiftcall)) void GameSubquestData_1256d00(PSEUDO_X8 x8_,
                                                         __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;

  v3 = *(_QWORD*)(*(_QWORD*)a1 + 344LL);
  if (v3 != 0 &&
      (v4 = *(unsigned __int16*)(v3 + 40), *(_WORD*)(v3 + 40) != 0)) {
    v5 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v4, 16, 0);
    v6 = v5 + 8 * v4;
    v7 = 8;
    v8 = (char*)v5;
    *a2 = v5;
    a2[1] = v5;
    v9 = v5;
    a2[2] = v6;
    do {
      v10 = *(_QWORD*)(*(_QWORD*)(v3 + 48) + v7);
      if ((unsigned __int64)v8 < v6) {
        *(_QWORD*)v8 = v10;
        v8 += 8;
      }
      else {
        v11 = &v8[-v9];
        v12 = (__int64)&v8[-v9] >> 3;
        v13 = v12 + 1;
        if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
          a2[2] = v6;
          *a2 = v9;
          GameRoutine_6e5c60_alt1();
        }
        if ((__int64)(v6 - v9) >> 2 > v13) {
          v13 = (__int64)(v6 - v9) >> 2;
        }
        if (v6 - v9 >= 0x7FFFFFFFFFFFFFF8LL) {
          v14 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v14 = v13;
        }
        if (v14 != 0) {
          if (v14 >> 61 != 0) {
            a2[2] = v6;
            *a2 = v9;
            GameRoutine_60a210_alt1();
          }
          v15 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
        }
        else {
          v15 = 0;
        }
        v16 = (unsigned __int64)&v8[-v9];
        v17 = (__int64)&v11[v15 + -8 * v12];
        v19 = v15 + 8 * v14;
        *(_QWORD*)&v11[v15] = v10;
        v8 = &v11[v15 + 8];
        memcpy_alt1(v17, v9, v16);
        a2[1] = (__int64)v8;
        if (v9 != 0) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v9);
        }
        v6 = v19;
        v9 = v17;
      }
      --v4;
      v7 += 16;
      a2[1] = (__int64)v8;
    } while (v4 != 0);
    a2[2] = v6;
    *a2 = v9;
  }
  else {
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
  }
}

__int64 GameSubquestData_1257440(__int64 a1)
{
  int v1;
  __int64 v2;
  int v3;
  _BOOL4 v4;
  _BOOL4 v5;
  _BOOL4 v6;
  _BOOL4 v7;
  _BOOL4 v8;
  _BOOL4 v9;
  _BOOL4 v10;
  _BOOL4 v11;
  _BOOL4 v12;
  int v13;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v2 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    v3 = *(_DWORD*)(GameData_21c9718 + 136 * v2 + 200) & 1;
    v4 = (*(_DWORD*)(GameData_21c9718 + 136 * v2 + 200) & 4) != 0;
    v5 = (*(_DWORD*)(GameData_21c9718 + 136 * v2 + 200) & 8) != 0;
    v6 = (*(_DWORD*)(GameData_21c9718 + 136 * v2 + 200) & 0x10) != 0;
    v7 = (*(_DWORD*)(GameData_21c9718 + 136 * v2 + 200) & 0x20) != 0;
    v8 = (*(_DWORD*)(GameData_21c9718 + 136 * v2 + 200) & 0x40) != 0;
    v9 = (*(_DWORD*)(GameData_21c9718 + 136 * v2 + 200) & 0x80) != 0;
    v10 = (*(_DWORD*)(GameData_21c9718 + 136 * v2 + 200) & 0x100) != 0;
    v11 = (*(_DWORD*)(GameData_21c9718 + 136 * v2 + 200) & 2) != 0;
    v12 = (*(_DWORD*)(GameData_21c9718 + 136 * v2 + 200) & 0x200) != 0;
    if (*(_BYTE*)(game_GameModeData_instance_ + 15) == 0) {
      v3 = 0;
    }
    if ((_DWORD)v2 == 2) {
      v4 = false;
    }
    if ((_DWORD)v2 == 3) {
      v5 = false;
    }
    if ((_DWORD)v2 == 4) {
      v6 = false;
    }
    if ((_DWORD)v2 == 5) {
      v7 = false;
    }
    if ((_DWORD)v2 == 6) {
      v8 = false;
    }
    if ((_DWORD)v2 == 7) {
      v9 = false;
    }
    if ((_DWORD)v2 == 8) {
      v10 = false;
    }
    if ((_DWORD)v2 == 1) {
      v13 = 1;
    }
    else {
      v13 = v11 + 1;
    }
    if ((_DWORD)v2 == 9) {
      v12 = false;
      v13 = v11 + 1;
    }
  }
  else {
    v3 = 0;
    v4 = (*(_DWORD*)(GameData_21c9718 + 200) & 4) != 0;
    v5 = (*(_DWORD*)(GameData_21c9718 + 200) & 8) != 0;
    v6 = (*(_DWORD*)(GameData_21c9718 + 200) & 0x10) != 0;
    v7 = (*(_DWORD*)(GameData_21c9718 + 200) & 0x20) != 0;
    v8 = (*(_DWORD*)(GameData_21c9718 + 200) & 0x40) != 0;
    v9 = (*(_DWORD*)(GameData_21c9718 + 200) & 0x80) != 0;
    v10 = (*(_DWORD*)(GameData_21c9718 + 200) & 0x100) != 0;
    v12 = (*(_DWORD*)(GameData_21c9718 + 200) & 0x200) != 0;
    v13 = ((*(_DWORD*)(GameData_21c9718 + 200) & 2) != 0) + 1;
  }
  if (v9 + v12 + v7 + v5 + v3 + v4 + v6 + v8 + v10 + v13 <
      (unsigned int)*(unsigned __int8*)(a1 + 240)) {
    return 0;
  }
  if (**(_BYTE**)(a1 + 24) != 0) {
    v15 = game_gmap_GmapClock_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
      v16 = *(__int16*)(game_gmap_GmapClock_instance_ + 8);
      v17 = *(__int16*)(game_gmap_GmapClock_instance_ + 10);
      v15 = *(__int16*)(game_gmap_GmapClock_instance_ + 12);
    }
    else {
      v17 = 0;
      v16 = 0;
    }
    v19 = *(unsigned __int16*)(a1 + 246);
    if (v16 < v19) {
      return 0;
    }
    if (v16 == v19) {
      v20 = *(unsigned __int8*)(a1 + 248);
      if (v17 < v20) {
        return 0;
      }
      if (v17 == v20 && v15 < *(unsigned __int8*)(a1 + 249)) {
        return 0;
      }
    }
  }
  else {
    if (game_GameModeData_instance_ != 0) {
      v1 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v18 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v18 = 0;
    }
    v21 = *(unsigned __int8*)(a1 + 241);
    if (v1 < v21) {
      return 0;
    }
    if (v1 == v21 && v18 < *(unsigned __int8*)(a1 + 242)) {
      return 0;
    }
  }
  return 1;
}

__int64 GameSubquestData_1257620(__int64 result, char a2)
{
  int v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  v4 = *(unsigned __int8*)(result + 9);
  if ((v4 & 0xFE) != 4) {
    v5 = result;
    if (v4 == 1) {
      result = GameSubquestData_1257720((__int64*)result, 0);
      v6 = 0;
      if ((result & 1) == 0) {
        return result;
      }
      goto LABEL_9;
    }
    if (v4 == 0) {
      result = GameSubquestData_1256ec0((_QWORD*)result, 0);
      if ((result & 1) == 0) {
        return result;
      }
      if ((*(_BYTE*)(v5 + 11) & 1) != 0) {
        v6 = 3;
      }
      else {
        v6 = 1;
      }
    LABEL_9:
      *(_BYTE*)(v5 + 9) = v6;
      return result;
    }
    if ((v4 & 0xFE) == 2) {
      result = GameSubquestData_1257720((__int64*)result, a2 & 1);
      if ((result & 1) != 0) {
        *(_WORD*)(v5 + 9) = 5;
        v7 = *(_QWORD*)v5;
        if (*(_WORD*)(v7 + 304) != 0) {
          v8 = 8LL * *(unsigned __int16*)(v7 + 304);
          v9 = 0;
          do {
            v10_.v11 = *(_QWORD*)(*(_QWORD*)(v7 + 312) + v9);
            v10_.v10 = game_HashString_alt1(v10_.v11);
            result = game_VariableManager_SetFlag_alt1((__int64)&v10_.v10, 0);
            v9 += 8;
          } while (v8 != v9);
        }
      }
    }
  }
  return result;
}

bool GameSubquestData_1257720(__int64* a1, int a2)
{
  __int64 v2;
  _BYTE* v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  _BOOL8 result;
  bool v15;
  _BOOL4 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  int v23;
  _BYTE v24[8];

  v2 = *a1;
  v4 = *(_BYTE**)(*a1 + 24);
  if (*v4 != 0) {
    v5 = game_gmap_GmapClock_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
      v6 = *(__int16*)(game_gmap_GmapClock_instance_ + 8);
      v7 = *(unsigned __int16*)(v2 + 250);
      if (v6 > v7) {
        return true;
      }
      v8 = *(__int16*)(game_gmap_GmapClock_instance_ + 10);
      v5 = *(__int16*)(game_gmap_GmapClock_instance_ + 12);
      if (v6 != v7) {
      LABEL_19:
        v17 = *(unsigned __int16*)(v2 + 256);
        if (*(_WORD*)(v2 + 256) != 0) {
          v18 = 8;
          v19 = (_QWORD*)GameData_212c7b0[0];
          while (1) {
            v20 = game_GameModeData_instance_ != 0
                      ? *(unsigned __int8*)(game_GameModeData_instance_ + 15)
                      : 0LL;
            v21 = GameSubquestData_125b8e0_alt1(
                *v19, *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 264) + v18) + 8LL),
                v20);
            if (v21 != 0 && *(_BYTE*)(v21 + 9) == 5) {
              return true;
            }
            --v17;
            v18 += 16;
            if (v17 == 0) {
              v4 = *(_BYTE**)(v2 + 24);
              break;
            }
          }
        }
        if (v4[1] != 3) {
          return false;
        }
        if (*(_BYTE*)(*a1 + 113) == 1) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2240190,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_2240190) != 0) {
            GameData_224018c = 145;
            __cxa_guard_release(&GameData_2240190);
          }
          v22 = &GameData_1ac302b;
        }
        else {
          v23 = *(unsigned __int8*)(*a1 + 112);
          switch (v23) {
          case 7:
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2240190,
                                      memory_order_acquire) &
                 1) == 0 &&
                (unsigned int)__cxa_guard_acquire(&GameData_2240190) != 0) {
              GameData_224018c = 145;
              __cxa_guard_release(&GameData_2240190);
            }
            v22 = &GameData_1a8d218;
            break;
          case 6:
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2240190,
                                      memory_order_acquire) &
                 1) == 0 &&
                (unsigned int)__cxa_guard_acquire(&GameData_2240190) != 0) {
              GameData_224018c = 145;
              __cxa_guard_release(&GameData_2240190);
            }
            v22 = (__int64*)&GameData_1a89194;
            break;
          case 5:
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2240190,
                                      memory_order_acquire) &
                 1) == 0 &&
                (unsigned int)__cxa_guard_acquire(&GameData_2240190) != 0) {
              GameData_224018c = 145;
              __cxa_guard_release(&GameData_2240190);
            }
            v22 = (__int64*)&GameData_1aed6ab;
            break;
          default:
            return false;
          }
        }
        GameRoutine_682bc0(v24, v22);
        return game_UnitPool_Find_6ead60(v24, &GameData_224018c) == 0;
      }
    }
    else {
      v8 = 0;
      if (*(_WORD*)(v2 + 250) != 0) {
        goto LABEL_19;
      }
    }
    v12 = *(unsigned __int8*)(v2 + 252);
    if (v8 > v12 || v8 == v12 && v5 > *(unsigned __int8*)(v2 + 253)) {
      return true;
    }
    goto LABEL_19;
  }
  v9 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v10 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    v11 = *(unsigned __int8*)(v2 + 243);
    if (v10 > v11) {
      return true;
    }
    v9 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    if (v10 != v11) {
      goto LABEL_19;
    }
  }
  else if (*(_BYTE*)(v2 + 243) != 0) {
    goto LABEL_19;
  }
  v13 = *(unsigned __int8*)(v2 + 244);
  result = true;
  v15 = v9 <= v13;
  v16 = v9 == v13;
  if (v15 && (a2 & v16 & 1) == 0) {
    goto LABEL_19;
  }
  return result;
}

__int64 GameSubquestData_1257a20(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  int v8;
  char v9;
  _QWORD* v10;
  char v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  struct {
    __int64 (**v41)();
    int v42;
    int v43;
  } v41_;
  struct {
    _QWORD v44[2];
    _QWORD* v45;
    __int64 v46;
    int v47;
  } v44_;
  struct {
    __int64* v48;
    __int64* v49;
  } v48_;
  int v50;
  int v51;

  v1 = *a1;
  if (*(_WORD*)(*a1 + 320) != 0) {
    GameSubquestData_1256b40((void*)((__int64*)&v48_.v48), a1);
    v3 = *a1;
    v4 = v48_.v48;
    v5 = v48_.v49;
    v44_.v44[0] = 0;
    v44_.v44[1] = 0;
    v44_.v45 = nullptr;
    v44_.v46 = 0;
    v41_.v41 = game_anonymous_DeliveryItemChecker_vtable;
    v41_.v42 = *(unsigned __int8*)(v3 + 368);
    v44_.v47 = 1065353216;
    if (v48_.v48 != v48_.v49) {
      v6 = v48_.v48;
      do {
        v7 = *v6++;
        v8 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 600LL) +
                                  16LL);
        v50 = 0;
        v51 = v8;
        DeliveryItemChecker_1265c20((unsigned __int64)v44_.v44, &v51, &v51,
                                    &v50);
      } while (v6 != v5);
    }
    v9 = GameRoutine_12658e0(&v48_.v48, (__int64)&v41_.v41);
    v41_.v41 = game_anonymous_DeliveryItemChecker_vtable;
    v10 = v44_.v45;
    v11 = v9;
    v12 = fw_memory_g_heap_manager_ptr;
    if (v44_.v45 != nullptr) {
      do {
        v13 = (_QWORD*)*v10;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v14, (__int64)v10);
        v10 = v13;
      } while (v13 != nullptr);
    }
    v15 = v44_.v44[0];
    v44_.v44[0] = 0;
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v16, v15);
    }
    if (v4 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v17, (__int64)v4);
    }
    LOBYTE(v18) = v11;
    return v18 & 1;
  }
  v20 = *(_QWORD*)(v1 + 344);
  if (v20 != 0 && *(_WORD*)(v20 + 40) != 0) {
    GameSubquestData_1256d00((void*)((__int64*)&v41_.v41), (__int64)a1);
    v21 = *a1;
    v48_.v48 = (__int64*)game_anonymous_DeliveryKindChecker_vtable;
    v48_.v49 = (__int64*)*(unsigned __int8*)(v21 + 368);
    LOBYTE(v18) = GameRoutine_12658e0((__int64**)&v41_.v41, (__int64)&v48_.v48);
    if (v41_.v41 != nullptr) {
      v22 = v18;
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v41_.v41);
      LOBYTE(v18) = v22;
    }
    return v18 & 1;
  }
  v24 = *(_QWORD*)(v1 + 360);
  if (v24 == 0) {
    LOBYTE(v18) = 0;
    return v18 & 1;
  }
  v25 = *(unsigned __int8*)(v1 + 368);
  v26 = 0;
  v27 = 0;
  v41_.v41 = game_anonymous_DeliveryRideChecker_vtable;
  v41_.v42 = v25;
  v41_.v43 = 0;
  v28 = GameData_212cf88[0];
  v29 = GameData_212c8a0;
  while (1) {
    v30 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v28 + 8LL) + 120LL);
    if (*(_BYTE*)(v30 + v26) != 0 &&
        *(_WORD*)(v24 + 16) == *(unsigned __int8*)(v30 + v26) &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v29 + 64) +
                             8LL * *(unsigned __int8*)(v30 + v26)) +
                  108LL) == 0 &&
        (*(_BYTE*)(v30 + v26 + 3) == 0 ||
         game_UnitPool_Get((_BYTE*)(v30 + v26 + 3)) == nullptr)) {
      break;
    }
    if (v27 > 0xC6) {
      goto LABEL_37;
    }
  LABEL_29:
    ++v27;
    v26 += 64;
  }
  v31 = ((__int64 (*)(__int64 (***)(void), __int64, _QWORD))v41_.v41[2])(
      &v41_.v41, v30 + v26, (unsigned int)v27);
  if (v27 <= 0xC6 && v31 != 1) {
    goto LABEL_29;
  }
LABEL_37:
  if ((((__int64 (*)(__int64 (***)(void)))v41_.v41[4])(&v41_.v41) & 1) != 0) {
    LOBYTE(v18) = 1;
  }
  else {
    LODWORD(v48_.v48) = 17;
    v18 = game_UnitPool_GetFirst((int*)&v48_.v48);
    if (v18 != 0) {
      v32 = *(_QWORD*)(v18 + 432);
      v33 = v18;
      if (v32 == 0) {
        v32 = *(_QWORD*)(v18 + 440);
        if (v32 != 0) {
          v34 = *(unsigned __int8*)(v32 + 16);
          if (v34 <= 8) {
            v40 = v34 - 3;
            while (1) {
              if (v40 == 0) {
                v32 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v32 != 0) {
                  break;
                }
              }
              if (++v40 == 6) {
                goto LABEL_44;
              }
            }
          }
          else {
          LABEL_44:
            v32 = 0;
          }
        }
      }
      while (1) {
      LABEL_47:
        v35 = v32;
        if (*(_BYTE*)(v33 + 1880) != 0 &&
            *(_WORD*)(v24 + 16) == *(unsigned __int8*)(v33 + 1880) &&
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v29 + 64) +
                                 8LL * *(unsigned __int8*)(v33 + 1880)) +
                      108LL) == 0) {
          v36 = RidePool_93d8e0(v33);
          ((void (*)(__int64 (***)(void), __int64, _QWORD))v41_.v41[3])(
              &v41_.v41, v33, v36);
        }
        LOBYTE(v18) =
            ((__int64 (*)(__int64 (***)(void)))v41_.v41[4])(&v41_.v41);
        if ((v18 & 1) != 0 || v35 == 0) {
          break;
        }
        v32 = *(_QWORD*)(v35 + 432);
        v33 = v35;
        if (v32 == 0) {
          v37 = *(_QWORD*)(v35 + 440);
          v33 = v35;
          if (v37 != 0) {
            v38 = *(unsigned __int8*)(v37 + 16);
            v32 = 0;
            v33 = v35;
            if (v38 <= 8) {
              v39 = v38 - 3;
              while (1) {
                if (v39 == 0) {
                  v32 =
                      *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                  if (v32 != 0) {
                    break;
                  }
                }
                if (++v39 == 6) {
                  v32 = 0;
                  v33 = v35;
                  goto LABEL_47;
                }
              }
              v33 = v35;
            }
          }
        }
      }
    }
  }
  return v18 & 1;
}

void GameSubquestData_1257e40(__int64* a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  struct {
    int v56[4];
    _QWORD* v57;
  } v56_;
  __int64 (**v58)();
  struct {
    __int64 v59;
    __int64 v60;
    _QWORD* v61;
    __int64 v62;
    int v63;
  } v59_;
  _QWORD v64[3];
  int v65;

  a2[1] = *a2;
  v4 = *a1;
  if (*(_WORD*)(*a1 + 320) != 0) {
    GameSubquestData_1256b40((void*)(v64), a1);
    v5 = v64[0];
    v6 = v64[1];
    v58 = game_anonymous_DeliveryItemCounter_vtable;
    v59_.v59 = 0;
    v59_.v60 = 0;
    v59_.v61 = nullptr;
    v59_.v62 = 0;
    v59_.v63 = 1065353216;
    if (v64[0] != v64[1]) {
      v7 = (__int64*)v64[0];
      do {
        v8 = *v7++;
        v65 = 0;
        v56_.v56[0] = *(
            unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v8 + 24) + 600LL) + 16LL);
        DeliveryItemChecker_1265c20((unsigned __int64)&v59_.v59, v56_.v56,
                                    v56_.v56, &v65);
      } while (v7 != (__int64*)v6);
    }
    GameRoutine_12667e0((__int64**)v64, (__int64)&v58);
    game_anonymous_1266e00((unsigned __int64)v56_.v56, (__int64)&v59_.v59);
    game_anonymous_12669e0(a2, v5, v6, v56_.v56);
    v9 = v56_.v57;
    v10 = fw_memory_g_heap_manager_ptr;
    if (v56_.v57 != nullptr) {
      do {
        v11 = (_QWORD*)*v9;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v12, (__int64)v9);
        v9 = v11;
      } while (v11 != nullptr);
    }
    v13 = *(_QWORD*)v56_.v56;
    *(_QWORD*)v56_.v56 = 0;
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v14, v13);
    }
    v15 = v59_.v61;
    v58 = game_anonymous_DeliveryItemCounter_vtable;
    if (v59_.v61 != nullptr) {
      do {
        v16 = (_QWORD*)*v15;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v17, (__int64)v15);
        v15 = v16;
      } while (v16 != nullptr);
    }
    v18 = v59_.v59;
    v59_.v59 = 0;
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v19, v18);
    }
    if (v5 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v20, v5);
    }
    v4 = *a1;
  }
  v21 = *(_QWORD*)(v4 + 344);
  if (v21 != 0 && *(_WORD*)(v21 + 40) != 0) {
    GameSubquestData_1256d00((void*)(v64), (__int64)a1);
    v22 = v64[0];
    v23 = v64[1];
    v58 = game_anonymous_DeliveryItemCounter_vtable;
    v59_.v59 = 0;
    v59_.v60 = 0;
    v59_.v61 = nullptr;
    v59_.v62 = 0;
    v59_.v63 = 1065353216;
    if (v64[0] != v64[1]) {
      v24 = (__int64*)v64[0];
      do {
        v25 = *v24++;
        v65 = 0;
        v56_.v56[0] = *(
            unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v25 + 24) + 600LL) + 16LL);
        DeliveryItemChecker_1265c20((unsigned __int64)&v59_.v59, v56_.v56,
                                    v56_.v56, &v65);
      } while (v24 != (__int64*)v23);
    }
    GameRoutine_12667e0((__int64**)v64, (__int64)&v58);
    game_anonymous_1266e00((unsigned __int64)v56_.v56, (__int64)&v59_.v59);
    game_anonymous_12669e0(a2, v22, v23, v56_.v56);
    v26 = v56_.v57;
    if (v56_.v57 != nullptr) {
      v27 = fw_memory_g_heap_manager_ptr;
      do {
        v28 = (_QWORD*)*v26;
        if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
          v29 = 128;
        }
        else {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v27 + v29, (__int64)v26);
        v26 = v28;
      } while (v28 != nullptr);
    }
    v30 = *(_QWORD*)v56_.v56;
    *(_QWORD*)v56_.v56 = 0;
    if (v30 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v30);
    }
    v32 = v59_.v61;
    v58 = game_anonymous_DeliveryItemCounter_vtable;
    if (v59_.v61 != nullptr) {
      v33 = fw_memory_g_heap_manager_ptr;
      do {
        v34 = (_QWORD*)*v32;
        if (*(_QWORD*)(*(_QWORD*)v33 + 200LL) != 0) {
          v35 = 128;
        }
        else {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v33 + v35, (__int64)v32);
        v32 = v34;
      } while (v34 != nullptr);
    }
    v36 = v59_.v59;
    v59_.v59 = 0;
    if (v36 != 0) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v36);
    }
    if (v22 != 0) {
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v22);
    }
    v4 = *a1;
  }
  v39 = *(_QWORD*)(v4 + 360);
  if (v39 == 0) {
    return;
  }
  LODWORD(v59_.v59) = 0;
  v40 = 0;
  v41 = 0;
  v58 = game_anonymous_DeliveryRideCounter_vtable;
  v42 = GameData_212cf88[0];
  v43 = GameData_212c8a0;
  while (1) {
    v44 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v42 + 8LL) + 120LL);
    if (*(_BYTE*)(v44 + v40) != 0 &&
        *(_WORD*)(v39 + 16) == *(unsigned __int8*)(v44 + v40) &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v43 + 64) +
                             8LL * *(unsigned __int8*)(v44 + v40)) +
                  108LL) == 0 &&
        (*(_BYTE*)(v44 + v40 + 3) == 0 ||
         game_UnitPool_Get((_BYTE*)(v44 + v40 + 3)) == nullptr)) {
      break;
    }
    if (v41 > 0xC6) {
      goto LABEL_69;
    }
  LABEL_61:
    ++v41;
    v40 += 64;
  }
  v45 = ((__int64 (*)(__int64 (***)(void), __int64, _QWORD))v58[2])(
      &v58, v44 + v40, (unsigned int)v41);
  if (v41 <= 0xC6 && v45 != 1) {
    goto LABEL_61;
  }
LABEL_69:
  v56_.v56[0] = 17;
  v46 = game_UnitPool_GetFirst(v56_.v56);
  if (v46 != 0) {
    v47 = *(_QWORD*)(v46 + 432);
    v48 = v46;
    if (v47 == 0) {
      v47 = *(_QWORD*)(v46 + 440);
      if (v47 != 0) {
        v49 = *(unsigned __int8*)(v47 + 16);
        if (v49 <= 8) {
          v55 = v49 - 3;
          while (1) {
            if (v55 == 0) {
              v47 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v47 != 0) {
                break;
              }
            }
            if (++v55 == 6) {
              goto LABEL_73;
            }
          }
        }
        else {
        LABEL_73:
          v47 = 0;
        }
      }
    }
    while (1) {
    LABEL_76:
      v50 = v47;
      if (*(_BYTE*)(v48 + 1880) != 0 &&
          *(_WORD*)(v39 + 16) == *(unsigned __int8*)(v48 + 1880) &&
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v43 + 64) +
                               8LL * *(unsigned __int8*)(v48 + 1880)) +
                    108LL) == 0) {
        v51 = RidePool_93d8e0(v48);
        ((void (*)(__int64 (***)(void), __int64, _QWORD))v58[3])(&v58, v48,
                                                                 v51);
      }
      if (v50 == 0) {
        break;
      }
      v47 = *(_QWORD*)(v50 + 432);
      v48 = v50;
      if (v47 == 0) {
        v52 = *(_QWORD*)(v50 + 440);
        v48 = v50;
        if (v52 != 0) {
          v53 = *(unsigned __int8*)(v52 + 16);
          v47 = 0;
          v48 = v50;
          if (v53 <= 8) {
            v54 = v53 - 3;
            while (1) {
              if (v54 == 0) {
                v47 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v47 != 0) {
                  break;
                }
              }
              if (++v54 == 6) {
                v47 = 0;
                v48 = v50;
                goto LABEL_76;
              }
            }
            v48 = v50;
          }
        }
      }
    }
  }
  v56_.v56[0] = v59_.v59;
  GameRoutine_6e5900(a2, v56_.v56);
}

bool GameSubquestData_1258420(__int64 a1)
{
  int v1;
  _BYTE* v2;
  unsigned __int8* v3;
  int v4;
  char v6;
  bool v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v20;
  __int64 v21;

  v1 = *(unsigned __int8*)(a1 + 9);
  if (v1 != 1) {
    return v1 == 1;
  }
  v2 = (_BYTE*)a1;
  v3 = *(unsigned __int8**)a1;
  *(_BYTE*)(a1 + 9) = *(_BYTE*)(a1 + 11) & 1 | 2;
  v4 = v3[112];
  if (v3[112] == 0 || v4 == 6) {
    a1 = GameRoutine_1257a20(a1);
    if ((a1 & 1) != 0) {
      v6 = 3;
    }
    else {
      v6 = 2;
    }
    goto LABEL_10;
  }
  if (v4 == 7 && v3[113] == 3 && v3[368] != 0) {
    a1 = GameRoutine_715440(a1);
    if ((int)a1 >= *(unsigned __int8*)(*(_QWORD*)v2 + 424LL) &&
        (*(_BYTE*)(*(_QWORD*)v2 + 368LL) == 0 ||
         ((a1 = GameRoutine_1257a20((__int64)v2)) & 1) != 0)) {
      v6 = 3;
    LABEL_10:
      v2[9] = v6;
    }
  }
  if ((v2[9] & 0xFE) == 2) {
    v7 = *(_BYTE*)(*(_QWORD*)v2 + 112LL) == 7 &&
         *(_BYTE*)(*(_QWORD*)v2 + 113LL) == 3;
    if (v7 &&
        (int)GameRoutine_715440(a1) >=
            *(unsigned __int8*)(*(_QWORD*)v2 + 424LL) &&
        (*(_BYTE*)(*(_QWORD*)v2 + 368LL) == 0 ||
         (GameRoutine_1257a20((__int64)v2) & 1) != 0)) {
      v2[9] = 3;
    }
  }
  if ((v2[9] & 0xFE) == 2) {
    v8 = *(_QWORD*)v2;
    if (*(_BYTE*)(*(_QWORD*)v2 + 112LL) == 7 &&
        *(_BYTE*)(*(_QWORD*)v2 + 113LL) == 4) {
      v10 = *(unsigned __int16*)(v8 + 128);
      if (*(_WORD*)(v8 + 128) == 0) {
      LABEL_50:
        v2[9] = 3;
        return v1 == 1;
      }
      v11 = 8;
      while (1) {
        v12 = game_gmap_SpotMgr_FindSpot(
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 136LL) + v11));
        if (v12 == 0) {
          goto LABEL_29;
        }
        v13 = GameRoutine_1326a40(v12);
        if (v13 != 0) {
          v14 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            break;
          }
          v15 = 0;
          v16 = *(_QWORD*)(v13 + 8);
          if (v16 != 0) {
            goto LABEL_36;
          }
        LABEL_37:
          v21 = game_util_Format(&GameData_1afaabd, v15);
          v20 = game_HashString(v21);
          v17 = game_GameVariableTable_Find(*(_QWORD*)(v14 + 48), &v20);
          if (v17 == 0 || *(_DWORD*)(v17 + 32) == 0) {
            return v1 == 1;
          }
        }
      LABEL_29:
        --v10;
        v11 += 16;
        if (v10 == 0) {
          goto LABEL_50;
        }
      }
      v15 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v16 = *(_QWORD*)(v13 + 8);
      if (v16 == 0) {
        goto LABEL_37;
      }
    LABEL_36:
      strchr(v16, 95);
      goto LABEL_37;
    }
  }
  return v1 == 1;
}

_BYTE* GameSubquestData_1258640(__int64* a1)
{
  __int64 v1;
  _BYTE* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE* result;
  __int64 v13;
  __int64 v14;

  v1 = *a1;
  *((_BYTE*)a1 + 9) = 4;
  *((_BYTE*)a1 + 11) |= 2u;
  v3 = *(_BYTE**)(v1 + 272);
  if (v3 != nullptr && *v3 != 0) {
    v14 = *(_QWORD*)(v1 + 272);
    v13 = game_HashString(v3);
    if (game_GameModeData_instance_ != 0) {
      GameRoutine_82dd50(game_GameModeData_instance_ + 40, &v13, 1);
    }
    v1 = *a1;
  }
  if (*(_WORD*)(v1 + 288) != 0) {
    v4 = 8LL * *(unsigned __int16*)(v1 + 288);
    v5 = 0;
    do {
      v6 = *(_QWORD*)(v1 + 296);
      v14 = *(_QWORD*)(v6 + v5);
      v13 = game_HashString(v14);
      if (game_GameModeData_instance_ == 0 ||
          (v7 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), &v13)) == 0 ||
          *(_DWORD*)(v7 + 32) == 0) {
        v14 = *(_QWORD*)(v6 + v5);
        v13 = game_HashString(v14);
        game_VariableManager_SetFlag(&v13, 1);
      }
      v5 += 8;
    } while (v4 != v5);
    v1 = *a1;
  }
  if (*(_WORD*)(v1 + 376) != 0) {
    v8 = 8LL * *(unsigned __int16*)(v1 + 376);
    v9 = 0;
    do {
      v14 = *(_QWORD*)(*(_QWORD*)(v1 + 384) + v9);
      v13 = game_HashString(v14);
      if (game_GameModeData_instance_ != 0) {
        GameRoutine_82dd50(game_GameModeData_instance_ + 40, &v13, 1);
      }
      v9 += 8;
    } while (v8 != v9);
    v1 = *a1;
  }
  if (*(_WORD*)(v1 + 480) != 0) {
    v10 = 8LL * *(unsigned __int16*)(v1 + 480);
    v11 = 0;
    do {
      v14 = *(_QWORD*)(*(_QWORD*)(v1 + 488) + v11);
      v13 = game_HashString(v14);
      game_VariableManager_SetFlag(&v13, 1);
      v11 += 8;
    } while (v10 != v11);
    v1 = *a1;
  }
  result = *(_BYTE**)(v1 + 496);
  if (result != nullptr && *result != 0) {
    v14 = *(_QWORD*)(v1 + 496);
    result = (_BYTE*)game_HashString(result);
    v13 = (__int64)result;
    if (game_GameModeData_instance_ != 0) {
      return (_BYTE*)GameRoutine_82dd50(game_GameModeData_instance_ + 40, &v13,
                                        1);
    }
  }
  return result;
}

__int64 GameSubquestData_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 i;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 result;
  _QWORD* v27;

  if (GameData_2240198 != 0 && (*(_WORD*)(GameData_2240198 + 136) & 1) == 0) {
    ProcInst_657a50_alt1(GameData_2240198, 1);
  }
  v2 = a1[179];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[180] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v4 + v5, v2);
  }
  for (i = 175; i != 5; i -= 17) {
    v7 = &a1[i];
    v8 = a1[i - 1];
    if (v8 != 0) {
      a1[i] = v8;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v9, v8);
    }
    v10 = *(v7 - 4);
    if (v10 != 0) {
      a1[i - 3] = v10;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v11 = 128;
      }
      else {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v11, v10);
    }
    v12 = &a1[i];
    v13 = a1[i - 7];
    if (v13 != 0) {
      *(v12 - 6) = v13;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v14, v13);
    }
    v15 = *(v12 - 10);
    if (v15 != 0) {
      a1[i - 9] = v15;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v16 = 128;
      }
      else {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v16, v15);
    }
    v17 = *(v7 - 13);
    if (v17 != 0) {
      a1[i - 12] = v17;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v18 = 128;
      }
      else {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v18, v17);
    }
  }
  v19 = (_QWORD*)a1[6];
  if (v19 != nullptr) {
    do {
      v20 = (_QWORD*)*v19;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v21 = 128;
      }
      else {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v21, (__int64)v19);
      v19 = v20;
    } while (v20 != nullptr);
  }
  v22 = a1[4];
  a1[4] = 0;
  if (v22 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v23, v22);
  }
  v24 = a1[2];
  a1[2] = 0;
  if (v24 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v25, v24);
  }
  a1[1] = GameData_212d6d0 + 2;
  v27 = a1 + 1;
  result = GameHr_876a40(&GameData_21eea40, &v27);
  *a1 = GameData_201df88;
  if (*(_QWORD**)GameData_212c7b0[0] == a1) {
    *(_QWORD*)GameData_212c7b0[0] = 0;
    GameData_22401a0 = 0;
  }
  return result;
}

__int64 GameSubquestData_1259670(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 result;
  __int64 v9;

  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      168, 16, 0);
  v4 = GameData_212c608[0];
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = "NULL";
  *(_QWORD*)(v3 + 138) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)v3 = v4 + 16;
  *(_QWORD*)(v3 + 8) = 0;
  v5 = game_ProcInst_Register();
  *(_DWORD*)(v3 + 160) = 0;
  GameData_2240198 = v3;
  *(_QWORD*)v3 = game_GameSubquestData_ProcSubquestWatcher_vtable;
  *(_QWORD*)(v3 + 152) = 0;
  if (*(_QWORD*)GameData_212c6c8 != 0) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v6 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v6 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v7 = *(_DWORD*)(v6 + 8);
    *(_QWORD*)(v3 + 152) = *(_QWORD*)v6;
    *(_DWORD*)(v3 + 160) = v7;
  }
  if (*GameData_212c770[0] != 0) {
    result = GameRoutine_715440(v5);
  }
  else {
    result = 1;
  }
  *(_DWORD*)(v3 + 164) = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_21c6868);
    if ((_DWORD)result != 0) {
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
      result = __cxa_guard_release(&GameData_21c6868);
    }
  }
  if (a2 != 0) {
    v9 = *(_QWORD*)(a2 + 40);
    if (v9 != 0) {
      *(_QWORD*)(v9 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(a2 + 40);
    }
    *(_QWORD*)(a2 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "ProcSubquestWatcher";
    *(_QWORD*)(v3 + 32) = a2;
    *(_DWORD*)(v3 + 140) = game_HashString32("ProcSubquestWatcher");
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    *(_QWORD*)(v3 + 8) = &GameData_21c67a8;
    *(_QWORD*)(v3 + 16) = &GameData_21c67a8;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3);
    if ((result & 1) != 0 && (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v3 + 136) & 1) == 0) {
    return ProcInst_657a50(v3, 1);
  }
  return result;
}

__int64 GameSubquestData_12598c0()
{
  bool v0;
  bool v1;
  bool v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  unsigned __int8 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  bool v43;
  bool v44;
  bool v45;
  bool v46;
  bool v47;
  bool v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  v3 = (__int64*)GameRoutine_82e7c0(0, 1);
  v52 = *v3;
  if (*v3 != 0) {
    v48 = game_GameModeData_instance_ != 0 &&
          (v4 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v3)) != 0 &&
          *(_DWORD*)(v4 + 32) != 0;
  }
  v5 = (__int64*)GameRoutine_82e7c0(1, 1);
  v51 = *v5;
  if (*v5 != 0) {
    v47 = game_GameModeData_instance_ != 0 &&
          (v6 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v5)) != 0 &&
          *(_DWORD*)(v6 + 32) != 0;
  }
  v7 = (__int64*)GameRoutine_82e7c0(2, 1);
  v50 = *v7;
  if (*v7 != 0) {
    v46 = game_GameModeData_instance_ != 0 &&
          (v8 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v7)) != 0 &&
          *(_DWORD*)(v8 + 32) != 0;
  }
  v9 = (__int64*)GameRoutine_82e7c0(3, 1);
  v49 = *v9;
  if (*v9 != 0) {
    v45 = game_GameModeData_instance_ != 0 &&
          (v10 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v9)) != 0 &&
          *(_DWORD*)(v10 + 32) != 0;
  }
  v11 = (__int64*)GameRoutine_82e7c0(4, 1);
  v12 = *v11;
  if (*v11 != 0) {
    v44 = game_GameModeData_instance_ != 0 &&
          (v13 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v11)) != 0 &&
          *(_DWORD*)(v13 + 32) != 0;
  }
  v14 = (__int64*)GameRoutine_82e7c0(5, 1);
  v15 = *v14;
  if (*v14 != 0) {
    v43 = game_GameModeData_instance_ != 0 &&
          (v16 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v14)) != 0 &&
          *(_DWORD*)(v16 + 32) != 0;
  }
  v17 = (__int64*)GameRoutine_82e7c0(6, 1);
  v18 = *v17;
  if (*v17 != 0) {
    v0 = game_GameModeData_instance_ != 0 &&
         (v19 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), v17)) != 0 &&
         *(_DWORD*)(v19 + 32) != 0;
  }
  v20 = (__int64*)GameRoutine_82e7c0(7, 1);
  v21 = *v20;
  if (*v20 != 0) {
    v2 = game_GameModeData_instance_ != 0 &&
         (v22 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), v20)) != 0 &&
         *(_DWORD*)(v22 + 32) != 0;
  }
  v23 = (__int64*)GameRoutine_82e7c0(8, 1);
  v24 = *v23;
  if (*v23 != 0) {
    v1 = game_GameModeData_instance_ != 0 &&
         (v25 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), v23)) != 0 &&
         *(_DWORD*)(v25 + 32) != 0;
  }
  v26 = (__int64*)GameRoutine_82e7c0(9, 1);
  v28 = *v26;
  if (*v26 != 0) {
    v27 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v29 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v26);
      v27 = v29 != 0 && *(_DWORD*)(v29 + 32) != 0;
    }
  }
  if (v24 != 0 && v1) {
    v30 = 256;
  }
  else {
    v30 = 0;
  }
  if (v21 != 0 && v2) {
    v31 = 128;
  }
  else {
    v31 = 0;
  }
  if (v18 != 0 && v0) {
    v32 = 64;
  }
  else {
    v32 = 0;
  }
  v33 = v31 | v30;
  if (v15 != 0 && v43) {
    v34 = 32;
  }
  else {
    v34 = 0;
  }
  if (v12 != 0 && v44) {
    v35 = 16;
  }
  else {
    v35 = 0;
  }
  if (v49 != 0 && v45) {
    v36 = 8;
  }
  else {
    v36 = 0;
  }
  v37 = v35 | v34 | v32;
  if (v50 != 0 && v46) {
    v38 = 4;
  }
  else {
    v38 = 0;
  }
  if (v51 != 0 && v47) {
    v39 = 2;
  }
  else {
    v39 = 0;
  }
  v40 = v38 | v36;
  if (((v28 != 0) & v27) != 0) {
    v41 = 512;
  }
  else {
    v41 = 0;
  }
  return v39 | (v52 != 0 && v48) | v40 | v37 | v33 | (unsigned int)v41;
}

void GameSubquestData_1259ce0(__int64* a1)
{
  unsigned int v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  bool v9;
  unsigned __int64* v10;
  unsigned __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  bool v18;
  __int64 v19;
  __int64 v20;

  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v2 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v3 = &a1[17 * v2];
  v4 = v3[9];
  v5 = v3[10];
  a1[182] = (a1[180] - a1[179]) >> 3;
  if (v4 != v5) {
    do {
      v6 = *(__int64**)v4;
      if (*(_BYTE*)(*(_QWORD*)v4 + 9LL) == 4) {
        v7 = *v6;
        v8 = *(unsigned __int8*)(*v6 + 113);
        if (v8 != 1) {
          v9 = v8 != 5 && (unsigned int)*(unsigned __int8*)(v7 + 112) - 5 >= 3;
          if (v9 && (*(_BYTE*)(v7 + 161) & 0x10) != 0) {
            GameHr_1255920(a1 + 179, (unsigned __int64*)v7);
          }
        }
      }
      v4 += 8;
    } while (v4 != v5);
    v10 = (unsigned __int64*)a1[180];
    v11 = (unsigned __int64*)a1[179];
    v12 = a1[182];
    v13 = v10 - v11;
    if (v12 != v13) {
      if (v13 < 129) {
        v17 = 0;
      LABEL_22:
        game_1268280(v11, v10, v10 - v11, nullptr, v17);
      }
      else {
        v14 = v10 - v11;
        v15 = GameData_212c060;
        while (1) {
          v16 = (__int64*)GameRoutine_1a09d20_alt1(8 * v14, v15);
          if (v16 != nullptr) {
            break;
          }
          v17 = v14 >> 1;
          v18 = v14 > 1;
          v14 >>= 1;
          if (!v18) {
            goto LABEL_22;
          }
        }
        v19 = (__int64)v16;
        game_1268280(v11, v10, v10 - v11, v16, v14);
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v19);
      }
    }
  }
}

void GameSubquestData_1259ea0(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned int v21;
  bool v22;
  int v23;

  if ((a3 & 1) != 0) {
    GameSubquestData_125bbc0_alt1(a1, (__int64)a2, a3);
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = a1 + 136LL * v5;
  v7 = *a2;
  v8 = a2[1] - *a2;
  v9 = *(_QWORD*)(v6 + 72);
  v10 = *(_QWORD*)(v6 + 80);
  v11 = v6 + 72;
  v12 = (v8 >> 3) + ((v10 - v9) >> 3);
  if (v12 > (a2[2] - *a2) >> 3) {
    if (v12 >> 61 != 0) {
      GameRoutine_1265540_alt1();
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    v15 = v14 + v8;
    v16 = v14 + 8 * v12;
    v17 = v14 + v8 - 8 * (v8 >> 3);
    memcpy_alt1(v17, v7, v8);
    *a2 = v17;
    a2[1] = v15;
    a2[2] = v16;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v18, v7);
    }
  }
  v19 = *(_QWORD**)v11;
  v20 = *(_QWORD**)(v11 + 8);
  if (*(_QWORD**)v11 != v20) {
    do {
      v21 = *(unsigned __int8*)(*v19 + 9LL);
      v22 = v21 > 5;
      v23 = (1 << v21) & 0x31;
      if (v22 || v23 == 0) {
        GameRoutine_1256660_alt1(a2, v19);
      }
      ++v19;
    } while (v19 != v20);
  }
}

void GameSubquestData_125a000(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64*** v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64** v19;
  __int64** v20;
  __int64 v21;
  int v22;
  bool v23;
  unsigned int v24;
  bool v25;
  int v26;

  if ((a3 & 1) != 0) {
    GameSubquestData_125bbc0_alt1(a1, (__int64)a2, a3);
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = a1 + 136LL * v5;
  v7 = *a2;
  v8 = a2[1] - *a2;
  v9 = *(_QWORD*)(v6 + 72);
  v10 = *(_QWORD*)(v6 + 80);
  v11 = (__int64***)(v6 + 72);
  v12 = (v8 >> 3) + ((v10 - v9) >> 3);
  if (v12 > (a2[2] - *a2) >> 3) {
    if (v12 >> 61 != 0) {
      GameRoutine_1265540_alt1();
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    v15 = v14 + v8;
    v16 = v14 + 8 * v12;
    v17 = v14 + v8 - 8 * (v8 >> 3);
    memcpy_alt1(v17, v7, v8);
    *a2 = v17;
    a2[1] = v15;
    a2[2] = v16;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v18, v7);
    }
  }
  v19 = *v11;
  v20 = v11[1];
  if (*v11 != v20) {
    do {
      v21 = **v19;
      v22 = *(unsigned __int8*)(v21 + 113);
      if (v22 != 1) {
        v23 = v22 != 5 && (unsigned int)*(unsigned __int8*)(v21 + 112) - 5 >= 3;
        if (v23 && (*(_BYTE*)(v21 + 161) & 2) == 0 &&
            *(_QWORD*)(v21 + 272) == 0) {
          v24 = *((unsigned __int8*)*v19 + 9);
          v25 = v24 > 5;
          v26 = (1 << v24) & 0x31;
          if (v25 || v26 == 0) {
            GameRoutine_1256660_alt1(a2, v19);
          }
        }
      }
      ++v19;
    } while (v19 != v20);
  }
}

void GameSubquestData_125a1a0(__int64 a1, __int64* a2, __int64 a3, char a4)
{
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  signed __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;

  if ((a4 & 1) != 0) {
    GameSubquestData_125bbc0_alt1(a1, (__int64)a2, a3);
  }
  if (a3 != 0) {
    v7 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v7 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
    v8 = a1 + 136LL * v7;
    v9 = *a2;
    v10 = a2[1] - *a2;
    v11 = *(_QWORD*)(v8 + 72);
    v12 = *(_QWORD*)(v8 + 80);
    v13 = v8 + 72;
    v14 = (v10 >> 3) + ((v12 - v11) >> 3);
    if (v14 > (a2[2] - *a2) >> 3) {
      if (v14 >> 61 != 0) {
        GameRoutine_1265540_alt1();
      }
      v15 = fw_memory_g_heap_manager_ptr;
      v16 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      v17 = v16 + v10;
      v18 = v16 + 8 * v14;
      v19 = v16 + v10 - 8 * (v10 >> 3);
      memcpy_alt1(v19, v9, v10);
      *a2 = v19;
      a2[1] = v17;
      a2[2] = v18;
      if (v9 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v15 + v20, v9);
      }
    }
    v21 = *(__int64**)v13;
    v22 = *(__int64**)(v13 + 8);
    while (v21 != v22) {
      v23 = *v21;
      if ((GameSubquestData_12569c0(*v21, a3, 1) & 1) != 0 &&
          *(_BYTE*)(v23 + 9) == 2) {
        GameRoutine_1256660_alt1(a2, v21);
      }
      ++v21;
    }
  }
}

void GameSubquestData_125a300(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64** v19;
  __int64** v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64* v29;
  signed __int64 v30;
  bool v31;
  __int64 v32;
  __int64 v33;
  __int64 (*v34)();

  if ((a3 & 1) != 0) {
    GameSubquestData_125bbc0_alt1(a1, (__int64)a2, a3);
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = a1 + 136LL * v5;
  v7 = *a2;
  v8 = a2[1] - *a2;
  v9 = *(_QWORD*)(v6 + 72);
  v10 = *(_QWORD*)(v6 + 80);
  v11 = v6 + 72;
  v12 = (v8 >> 3) + ((v10 - v9) >> 3);
  if (v12 > (a2[2] - *a2) >> 3) {
    if (v12 >> 61 != 0) {
      GameRoutine_1265540_alt1();
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    v15 = v14 + v8;
    v16 = v14 + 8 * v12;
    v17 = v14 + v8 - 8 * (v8 >> 3);
    memcpy_alt1(v17, v7, v8);
    *a2 = v17;
    a2[1] = v15;
    a2[2] = v16;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v18, v7);
    }
  }
  v19 = *(__int64***)v11;
  v20 = *(__int64***)(v11 + 8);
  while (v19 != v20) {
    v21 = **v19;
    v22 = *(unsigned __int8*)(v21 + 113);
    if (v22 != 1) {
      v23 = *(unsigned __int8*)(v21 + 112) - 5;
      if (v22 != 5 && v23 >= 3 &&
          (unsigned int)*((unsigned __int8*)*v19 + 9) - 2 <= 3) {
        GameRoutine_1256660_alt1(a2, v19);
      }
    }
    ++v19;
  }
  v26 = *a2;
  v25 = (__int64*)a2[1];
  v34 = GameSubquestData_125a520_alt1;
  if (((__int64)v25 - v26) >> 3 < 129) {
    v30 = 0;
  LABEL_28:
    GameSubquestData_1269fa0_alt1(v26, v25,
                                  (__int64 (**)(__int64, __int64))&v34,
                                  ((__int64)v25 - v26) >> 3, nullptr, v30);
  }
  else {
    v27 = ((__int64)v25 - v26) >> 3;
    v28 = GameData_212c060;
    while (1) {
      v29 = (__int64*)GameRoutine_1a09d20_alt1(8 * v27, v28);
      if (v29 != nullptr) {
        break;
      }
      v30 = v27 >> 1;
      v31 = v27 > 1;
      v27 >>= 1;
      if (!v31) {
        goto LABEL_28;
      }
    }
    v32 = (__int64)v29;
    GameSubquestData_1269fa0_alt1(v26, v25,
                                  (__int64 (**)(__int64, __int64))&v34,
                                  ((__int64)v25 - v26) >> 3, v29, v27);
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v32);
  }
}

bool GameSubquestData_125a520(__int64 a1, __int64 a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  _BOOL4 v6;

  v2 = *(unsigned __int8*)(a2 + 9);
  v3 = *(unsigned __int8*)(a1 + 9);
  v4 = v3 & 0xFE;
  v6 = (v2 & 0xFE) == 4 && v3 < v2;
  if (v4 == 4) {
    return v6;
  }
  else {
    return (v2 & 0xFE) == 4;
  }
}

__int64 GameSubquestData_125a550(unsigned __int8* a1, unsigned __int8* a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;

  v2 = a1[9];
  v3 = a2[9];
  v4 = v3 & 0xFE;
  if ((v2 & 0xFE) == 4) {
    if (v4 != 4) {
      return 0;
    }
    if (v2 != v3) {
      return v2 < v3;
    }
  }
  else if (v4 == 4) {
    return 1;
  }
  if (*(_BYTE*)(*(_QWORD*)a1 + 113LL) == 1) {
    v6 = 1;
  }
  else {
    v7 = *(unsigned __int8*)(*(_QWORD*)a1 + 112LL);
    if (v7 == 7) {
      v8 = 4;
    }
    else {
      v8 = 0;
    }
    if (v7 == 6) {
      v9 = 3;
    }
    else {
      v9 = v8;
    }
    if (v7 == 5) {
      v6 = 2;
    }
    else {
      v6 = v9;
    }
  }
  if (*(_BYTE*)(*(_QWORD*)a2 + 113LL) == 1) {
    v10 = 1;
  }
  else {
    v11 = *(unsigned __int8*)(*(_QWORD*)a2 + 112LL);
    switch (v11) {
    case 5:
      v10 = 2;
      break;
    case 6:
      v10 = 3;
      break;
    case 7:
      v10 = 4;
      break;
    default:
      v10 = 0;
      break;
    }
  }
  return v6 < v10;
}

void GameSubquestData_125a640(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  signed __int64 v26;
  bool v27;
  __int64 v28;
  __int64 v29;
  __int64 (*v30)();

  if ((a3 & 1) != 0) {
    GameSubquestData_125bbc0_alt1(a1, (__int64)a2, a3);
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = a1 + 136LL * v5;
  v7 = *a2;
  v8 = a2[1] - *a2;
  v9 = *(_QWORD*)(v6 + 72);
  v10 = *(_QWORD*)(v6 + 80);
  v11 = v6 + 72;
  v12 = (v8 >> 3) + ((v10 - v9) >> 3);
  if (v12 > (a2[2] - *a2) >> 3) {
    if (v12 >> 61 != 0) {
      GameRoutine_1265540_alt1();
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    v15 = v14 + v8;
    v16 = v14 + 8 * v12;
    v17 = v14 + v8 - 8 * (v8 >> 3);
    memcpy_alt1(v17, v7, v8);
    *a2 = v17;
    a2[1] = v15;
    a2[2] = v16;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v18, v7);
    }
  }
  v19 = *(_QWORD**)v11;
  v20 = *(_QWORD**)(v11 + 8);
  while (v19 != v20) {
    if (*(_BYTE*)(*(_QWORD*)*v19 + 113LL) == 1 &&
        (unsigned int)*(unsigned __int8*)(*v19 + 9LL) - 2 <= 3) {
      GameRoutine_1256660_alt1(a2, v19);
    }
    ++v19;
  }
  v22 = *a2;
  v21 = (__int64*)a2[1];
  v30 = GameSubquestData_125a520_alt1;
  if (((__int64)v21 - v22) >> 3 < 129) {
    v26 = 0;
  LABEL_23:
    GameSubquestData_1269fa0_alt1(v22, v21,
                                  (__int64 (**)(__int64, __int64))&v30,
                                  ((__int64)v21 - v22) >> 3, nullptr, v26);
  }
  else {
    v23 = ((__int64)v21 - v22) >> 3;
    v24 = GameData_212c060;
    while (1) {
      v25 = (__int64*)GameRoutine_1a09d20_alt1(8 * v23, v24);
      if (v25 != nullptr) {
        break;
      }
      v26 = v23 >> 1;
      v27 = v23 > 1;
      v23 >>= 1;
      if (!v27) {
        goto LABEL_23;
      }
    }
    v28 = (__int64)v25;
    GameSubquestData_1269fa0_alt1(v22, v21,
                                  (__int64 (**)(__int64, __int64))&v30,
                                  ((__int64)v21 - v22) >> 3, v25, v23);
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v28);
  }
}

void GameSubquestData_125a860(__int64 a1, __int64* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  signed __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned int v19;
  bool v20;
  int v21;

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = a1 + 136LL * v3;
  v5 = *a2;
  v6 = a2[1] - *a2;
  v7 = *(_QWORD*)(v4 + 72);
  v8 = *(_QWORD*)(v4 + 80);
  v9 = v4 + 72;
  v10 = (v6 >> 3) + ((v8 - v7) >> 3);
  if (v10 > (a2[2] - *a2) >> 3) {
    if (v10 >> 61 != 0) {
      GameRoutine_1265540_alt1();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
    v13 = v12 + v6;
    v14 = v12 + 8 * v10;
    v15 = v12 + v6 - 8 * (v6 >> 3);
    memcpy_alt1(v15, v5, v6);
    *a2 = v15;
    a2[1] = v13;
    a2[2] = v14;
    if (v5 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v16, v5);
    }
  }
  v17 = *(_QWORD**)v9;
  v18 = *(_QWORD**)(v9 + 8);
  if (*(_QWORD**)v9 != v18) {
    do {
      if (*(_BYTE*)(*(_QWORD*)*v17 + 112LL) == 5) {
        v19 = *(unsigned __int8*)(*v17 + 9LL);
        v20 = v19 > 5;
        v21 = (1 << v19) & 0x31;
        if (v20 || v21 == 0) {
          GameRoutine_1256660_alt1(a2, v17);
        }
      }
      ++v17;
    } while (v17 != v18);
  }
}

void GameSubquestData_125a9c0(__int64 a1, __int64* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  signed __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64* v23;
  signed __int64 v24;
  bool v25;
  __int64 v26;
  __int64 v27;
  __int64 (*v28)();

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = a1 + 136LL * v3;
  v5 = *a2;
  v6 = a2[1] - *a2;
  v7 = *(_QWORD*)(v4 + 72);
  v8 = *(_QWORD*)(v4 + 80);
  v9 = v4 + 72;
  v10 = (v6 >> 3) + ((v8 - v7) >> 3);
  if (v10 > (a2[2] - *a2) >> 3) {
    if (v10 >> 61 != 0) {
      GameRoutine_1265540_alt1();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
    v13 = v12 + v6;
    v14 = v12 + 8 * v10;
    v15 = v12 + v6 - 8 * (v6 >> 3);
    memcpy_alt1(v15, v5, v6);
    *a2 = v15;
    a2[1] = v13;
    a2[2] = v14;
    if (v5 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v16, v5);
    }
  }
  v17 = *(_QWORD**)v9;
  v18 = *(_QWORD**)(v9 + 8);
  while (v17 != v18) {
    if (*(_BYTE*)(*(_QWORD*)*v17 + 112LL) == 5 &&
        (unsigned int)*(unsigned __int8*)(*v17 + 9LL) - 2 <= 3) {
      GameRoutine_1256660_alt1(a2, v17);
    }
    ++v17;
  }
  v20 = *a2;
  v19 = (__int64*)a2[1];
  v28 = GameSubquestData_125a520_alt1;
  if (((__int64)v19 - v20) >> 3 < 129) {
    v24 = 0;
  LABEL_21:
    GameSubquestData_1269fa0_alt1(v20, v19,
                                  (__int64 (**)(__int64, __int64))&v28,
                                  ((__int64)v19 - v20) >> 3, nullptr, v24);
  }
  else {
    v21 = ((__int64)v19 - v20) >> 3;
    v22 = GameData_212c060;
    while (1) {
      v23 = (__int64*)GameRoutine_1a09d20_alt1(8 * v21, v22);
      if (v23 != nullptr) {
        break;
      }
      v24 = v21 >> 1;
      v25 = v21 > 1;
      v21 >>= 1;
      if (!v25) {
        goto LABEL_21;
      }
    }
    v26 = (__int64)v23;
    GameSubquestData_1269fa0_alt1(v20, v19,
                                  (__int64 (**)(__int64, __int64))&v28,
                                  ((__int64)v19 - v20) >> 3, v23, v21);
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v26);
  }
}

void GameSubquestData_125abc0(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned int v21;
  bool v22;
  int v23;

  if ((a3 & 1) != 0) {
    GameSubquestData_125bbc0_alt1(a1, (__int64)a2, a3);
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = a1 + 136LL * v5;
  v7 = *a2;
  v8 = a2[1] - *a2;
  v9 = *(_QWORD*)(v6 + 72);
  v10 = *(_QWORD*)(v6 + 80);
  v11 = v6 + 72;
  v12 = (v8 >> 3) + ((v10 - v9) >> 3);
  if (v12 > (a2[2] - *a2) >> 3) {
    if (v12 >> 61 != 0) {
      GameRoutine_1265540_alt1();
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    v15 = v14 + v8;
    v16 = v14 + 8 * v12;
    v17 = v14 + v8 - 8 * (v8 >> 3);
    memcpy_alt1(v17, v7, v8);
    *a2 = v17;
    a2[1] = v15;
    a2[2] = v16;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v18, v7);
    }
  }
  v19 = *(_QWORD**)v11;
  v20 = *(_QWORD**)(v11 + 8);
  if (*(_QWORD**)v11 != v20) {
    do {
      if (*(_BYTE*)(*(_QWORD*)*v19 + 112LL) == 6) {
        v21 = *(unsigned __int8*)(*v19 + 9LL);
        v22 = v21 > 5;
        v23 = (1 << v21) & 0x31;
        if (v22 || v23 == 0) {
          GameRoutine_1256660_alt1(a2, v19);
        }
      }
      ++v19;
    } while (v19 != v20);
  }
}

void GameSubquestData_125ad40(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  signed __int64 v26;
  bool v27;
  __int64 v28;
  __int64 v29;
  __int64 (*v30)();

  if ((a3 & 1) != 0) {
    GameSubquestData_125bbc0_alt1(a1, (__int64)a2, a3);
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = a1 + 136LL * v5;
  v7 = *a2;
  v8 = a2[1] - *a2;
  v9 = *(_QWORD*)(v6 + 72);
  v10 = *(_QWORD*)(v6 + 80);
  v11 = v6 + 72;
  v12 = (v8 >> 3) + ((v10 - v9) >> 3);
  if (v12 > (a2[2] - *a2) >> 3) {
    if (v12 >> 61 != 0) {
      GameRoutine_1265540_alt1();
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    v15 = v14 + v8;
    v16 = v14 + 8 * v12;
    v17 = v14 + v8 - 8 * (v8 >> 3);
    memcpy_alt1(v17, v7, v8);
    *a2 = v17;
    a2[1] = v15;
    a2[2] = v16;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v18, v7);
    }
  }
  v19 = *(_QWORD**)v11;
  v20 = *(_QWORD**)(v11 + 8);
  while (v19 != v20) {
    if (*(_BYTE*)(*(_QWORD*)*v19 + 112LL) == 6 &&
        (unsigned int)*(unsigned __int8*)(*v19 + 9LL) - 2 <= 3) {
      GameRoutine_1256660_alt1(a2, v19);
    }
    ++v19;
  }
  v22 = *a2;
  v21 = (__int64*)a2[1];
  v30 = GameSubquestData_125a520_alt1;
  if (((__int64)v21 - v22) >> 3 < 129) {
    v26 = 0;
  LABEL_23:
    GameSubquestData_1269fa0_alt1(v22, v21,
                                  (__int64 (**)(__int64, __int64))&v30,
                                  ((__int64)v21 - v22) >> 3, nullptr, v26);
  }
  else {
    v23 = ((__int64)v21 - v22) >> 3;
    v24 = GameData_212c060;
    while (1) {
      v25 = (__int64*)GameRoutine_1a09d20_alt1(8 * v23, v24);
      if (v25 != nullptr) {
        break;
      }
      v26 = v23 >> 1;
      v27 = v23 > 1;
      v23 >>= 1;
      if (!v27) {
        goto LABEL_23;
      }
    }
    v28 = (__int64)v25;
    GameSubquestData_1269fa0_alt1(v22, v21,
                                  (__int64 (**)(__int64, __int64))&v30,
                                  ((__int64)v21 - v22) >> 3, v25, v23);
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v28);
  }
}

void GameSubquestData_125af60(__int64 a1, __int64* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  signed __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned int v19;
  bool v20;
  int v21;

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = a1 + 136LL * v3;
  v5 = *a2;
  v6 = a2[1] - *a2;
  v7 = *(_QWORD*)(v4 + 72);
  v8 = *(_QWORD*)(v4 + 80);
  v9 = v4 + 72;
  v10 = (v6 >> 3) + ((v8 - v7) >> 3);
  if (v10 > (a2[2] - *a2) >> 3) {
    if (v10 >> 61 != 0) {
      GameRoutine_1265540_alt1();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
    v13 = v12 + v6;
    v14 = v12 + 8 * v10;
    v15 = v12 + v6 - 8 * (v6 >> 3);
    memcpy_alt1(v15, v5, v6);
    *a2 = v15;
    a2[1] = v13;
    a2[2] = v14;
    if (v5 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v16, v5);
    }
  }
  v17 = *(_QWORD**)v9;
  v18 = *(_QWORD**)(v9 + 8);
  if (*(_QWORD**)v9 != v18) {
    do {
      if (*(_BYTE*)(*(_QWORD*)*v17 + 112LL) == 7) {
        v19 = *(unsigned __int8*)(*v17 + 9LL);
        v20 = v19 > 5;
        v21 = (1 << v19) & 0x31;
        if (v20 || v21 == 0) {
          GameRoutine_1256660_alt1(a2, v17);
        }
      }
      ++v17;
    } while (v17 != v18);
  }
}

void GameSubquestData_125b0c0(__int64 a1, __int64* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  signed __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = a1 + 136LL * v3;
  v5 = *a2;
  v6 = a2[1] - *a2;
  v7 = *(_QWORD*)(v4 + 72);
  v8 = *(_QWORD*)(v4 + 80);
  v9 = v4 + 72;
  v10 = (v6 >> 3) + ((v8 - v7) >> 3);
  if (v10 > (a2[2] - *a2) >> 3) {
    if (v10 >> 61 != 0) {
      GameRoutine_1265540_alt1();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
    v13 = v12 + v6;
    v14 = v12 + 8 * v10;
    v15 = v12 + v6 - 8 * (v6 >> 3);
    memcpy_alt1(v15, v5, v6);
    *a2 = v15;
    a2[1] = v13;
    a2[2] = v14;
    if (v5 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v16, v5);
    }
  }
  v17 = *(_QWORD**)v9;
  v18 = *(_QWORD**)(v9 + 8);
  while (v17 != v18) {
    if (*(_BYTE*)(*(_QWORD*)*v17 + 112LL) == 7 && *(_BYTE*)(*v17 + 9LL) == 1) {
      GameRoutine_1256660_alt1(a2, v17);
    }
    ++v17;
  }
}

void GameSubquestData_125b200(__int64 a1, __int64* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  signed __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = a1 + 136LL * v3;
  v5 = *a2;
  v6 = a2[1] - *a2;
  v7 = *(_QWORD*)(v4 + 72);
  v8 = *(_QWORD*)(v4 + 80);
  v9 = v4 + 72;
  v10 = (v6 >> 3) + ((v8 - v7) >> 3);
  if (v10 > (a2[2] - *a2) >> 3) {
    if (v10 >> 61 != 0) {
      GameRoutine_1265540_alt1();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
    v13 = v12 + v6;
    v14 = v12 + 8 * v10;
    v15 = v12 + v6 - 8 * (v6 >> 3);
    memcpy_alt1(v15, v5, v6);
    *a2 = v15;
    a2[1] = v13;
    a2[2] = v14;
    if (v5 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v16, v5);
    }
  }
  v17 = *(_QWORD**)v9;
  v18 = *(_QWORD**)(v9 + 8);
  while (v17 != v18) {
    if (*(_BYTE*)(*(_QWORD*)*v17 + 112LL) == 7 && *(_BYTE*)(*v17 + 9LL) == 3) {
      GameRoutine_1256660_alt1(a2, v17);
    }
    ++v17;
  }
}

void GameSubquestData_125b340(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64** v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  _BYTE* v21;

  if (a3 != 0) {
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
    v6 = a1 + 136LL * v5;
    v7 = *a2;
    v8 = a2[1] - *a2;
    v9 = *(_QWORD*)(v6 + 72);
    v10 = *(_QWORD*)(v6 + 80);
    v11 = (__int64**)(v6 + 72);
    v12 = (v8 >> 3) + ((v10 - v9) >> 3);
    if (v12 > (a2[2] - *a2) >> 3) {
      if (v12 >> 61 != 0) {
        GameRoutine_1265540_alt1();
      }
      v13 = fw_memory_g_heap_manager_ptr;
      v14 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      v15 = v14 + v8;
      v16 = v14 + 8 * v12;
      v17 = v14 + v8 - 8 * (v8 >> 3);
      memcpy_alt1(v17, v7, v8);
      *a2 = v17;
      a2[1] = v15;
      a2[2] = v16;
      if (v7 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v18, v7);
      }
    }
    v19 = *v11;
    v20 = v11[1];
    while (v19 != v20) {
      v21 = (_BYTE*)*v19;
      if ((GameSubquestData_12569c0(*v19, a3, 1) & 1) != 0 &&
          *(_BYTE*)(*(_QWORD*)v21 + 112LL) == 7 && v21[9] == 2) {
        GameRoutine_1256660_alt1(a2, v19);
      }
      ++v19;
    }
  }
}

void GameSubquestData_125b4a0(__int64 a1, __int64* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  signed __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64* v23;
  signed __int64 v24;
  bool v25;
  __int64 v26;
  __int64 v27;
  __int64 (*v28)();

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = a1 + 136LL * v3;
  v5 = *a2;
  v6 = a2[1] - *a2;
  v7 = *(_QWORD*)(v4 + 72);
  v8 = *(_QWORD*)(v4 + 80);
  v9 = v4 + 72;
  v10 = (v6 >> 3) + ((v8 - v7) >> 3);
  if (v10 > (a2[2] - *a2) >> 3) {
    if (v10 >> 61 != 0) {
      GameRoutine_1265540_alt1();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
    v13 = v12 + v6;
    v14 = v12 + 8 * v10;
    v15 = v12 + v6 - 8 * (v6 >> 3);
    memcpy_alt1(v15, v5, v6);
    *a2 = v15;
    a2[1] = v13;
    a2[2] = v14;
    if (v5 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v16, v5);
    }
  }
  v17 = *(_QWORD**)v9;
  v18 = *(_QWORD**)(v9 + 8);
  while (v17 != v18) {
    if (*(_BYTE*)(*(_QWORD*)*v17 + 112LL) == 7 &&
        (unsigned int)*(unsigned __int8*)(*v17 + 9LL) - 2 <= 3) {
      GameRoutine_1256660_alt1(a2, v17);
    }
    ++v17;
  }
  v20 = *a2;
  v19 = (__int64*)a2[1];
  v28 = GameSubquestData_125a520_alt1;
  if (((__int64)v19 - v20) >> 3 < 129) {
    v24 = 0;
  LABEL_21:
    GameSubquestData_1269fa0_alt1(v20, v19,
                                  (__int64 (**)(__int64, __int64))&v28,
                                  ((__int64)v19 - v20) >> 3, nullptr, v24);
  }
  else {
    v21 = ((__int64)v19 - v20) >> 3;
    v22 = GameData_212c060;
    while (1) {
      v23 = (__int64*)GameRoutine_1a09d20_alt1(8 * v21, v22);
      if (v23 != nullptr) {
        break;
      }
      v24 = v21 >> 1;
      v25 = v21 > 1;
      v21 >>= 1;
      if (!v25) {
        goto LABEL_21;
      }
    }
    v26 = (__int64)v23;
    GameSubquestData_1269fa0_alt1(v20, v19,
                                  (__int64 (**)(__int64, __int64))&v28,
                                  ((__int64)v19 - v20) >> 3, v23, v21);
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v26);
  }
}

void GameSubquestData_125b6a0(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64** v19;
  __int64** v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  bool v24;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64* v29;
  signed __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 (*v33)();

  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0 ||
      (unsigned int)(*(_DWORD*)(game_GameModeData_instance_ + 60) - 1) >= 2) {
    if ((a3 & 1) != 0) {
      v5 = a1;
      GameSubquestData_125bbc0_alt1(a1, (__int64)a2, a3);
      v4 = game_GameModeData_instance_;
      a1 = v5;
    }
    if (v4 != 0) {
      LODWORD(v4) = *(unsigned __int8*)(v4 + 15);
    }
    v6 = a1 + 136LL * (unsigned int)v4;
    v7 = *a2;
    v8 = a2[1] - *a2;
    v9 = *(_QWORD*)(v6 + 72);
    v10 = *(_QWORD*)(v6 + 80);
    v11 = v6 + 72;
    v12 = (v8 >> 3) + ((v10 - v9) >> 3);
    if (v12 > (a2[2] - *a2) >> 3) {
      if (v12 >> 61 != 0) {
        GameRoutine_1265540_alt1();
      }
      v13 = fw_memory_g_heap_manager_ptr;
      v14 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      v15 = v14 + v8;
      v16 = v14 + 8 * v12;
      v17 = v14 + v8 - 8 * (v8 >> 3);
      memcpy_alt1(v17, v7, v8);
      *a2 = v17;
      a2[1] = v15;
      a2[2] = v16;
      if (v7 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v18, v7);
      }
    }
    v19 = *(__int64***)v11;
    v20 = *(__int64***)(v11 + 8);
    while (v19 != v20) {
      v21 = **v19;
      v22 = *(unsigned __int8*)(v21 + 113);
      if (v22 == 1 || ((v23 = *(unsigned __int8*)(v21 + 112) - 5, v22 != 5)
                           ? (v24 = v23 > 2)
                           : (v24 = false),
                       !v24)) {
        if ((unsigned int)*((unsigned __int8*)*v19 + 9) - 2 <= 3) {
          GameRoutine_1256660_alt1(a2, v19);
        }
      }
      ++v19;
    }
    v26 = *a2;
    v25 = (__int64*)a2[1];
    v33 = GameSubquestData_125a550_alt1;
    if (((__int64)v25 - v26) >> 3 < 129) {
      v30 = 0;
    LABEL_29:
      GameSubquestData_1269fa0_alt1(v26, v25,
                                    (__int64 (**)(__int64, __int64))&v33,
                                    ((__int64)v25 - v26) >> 3, nullptr, v30);
    }
    else {
      v27 = ((__int64)v25 - v26) >> 3;
      v28 = GameData_212c060;
      while (1) {
        v29 = (__int64*)GameRoutine_1a09d20_alt1(8 * v27, v28);
        if (v29 != nullptr) {
          break;
        }
        v30 = v27 >> 1;
        v24 = v27 > 1;
        v27 >>= 1;
        if (!v24) {
          goto LABEL_29;
        }
      }
      v31 = (__int64)v29;
      GameSubquestData_1269fa0_alt1(v26, v25,
                                    (__int64 (**)(__int64, __int64))&v33,
                                    ((__int64)v25 - v26) >> 3, v29, v27);
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v31);
    }
  }
}

__int64 GameSubquestData_125b8e0(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  _BYTE v13[512];

  nn_util_SNPrintf(v13, 512, "%s_%d", a2);
  v3 = game_HashString(v13);
  v4 = a1[5];
  if (v4 != 0 && a1[7] != 0) {
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
    v8 = *(_QWORD**)(a1[4] + 8 * v7);
    if (v8 != nullptr) {
      v9 = (_QWORD*)*v8;
      if (v9 != nullptr) {
        if ((v4 & v6) == 0) {
          while (1) {
            v11 = v9[1];
            if (v3 == v11) {
              if (v9[2] == v3) {
                return v9[3];
              }
            }
            else if ((v11 & v6) != v7) {
              return 0;
            }
            v9 = (_QWORD*)*v9;
            if (v9 == nullptr) {
              return 0;
            }
          }
        }
        do {
          v10 = v9[1];
          if (v3 == v10) {
            if (v9[2] == v3) {
              return v9[3];
            }
          }
          else {
            if (v10 >= v4) {
              v10 %= v4;
            }
            if (v10 != v7) {
              return 0;
            }
          }
          v9 = (_QWORD*)*v9;
        } while (v9 != nullptr);
      }
    }
  }
  return 0;
}

__int64 GameSubquestData_125ba20(__int64 a1)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v2 = a1 + 136LL * v1;
  v3 = *(_QWORD*)(v2 + 72);
  v4 = *(_QWORD*)(v2 + 80);
  while (v3 != v4) {
    if (*(_BYTE*)(**(_QWORD**)v3 + 112LL) == 5 &&
        *(_BYTE*)(*(_QWORD*)v3 + 9LL) != 4) {
      return 0;
    }
    v3 += 8;
  }
  return 1;
}

__int64 GameSubquestData_125ba80(__int64 result)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64 v7;
  int v8;
  bool v9;
  int v10;
  __int64 v11;
  unsigned __int8* v12;
  int v13;
  unsigned __int64* v14;
  unsigned __int64* v15;
  unsigned __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64* v20;
  unsigned __int64* v21;
  unsigned __int64 v22;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v2 = result + 136LL * v1;
  v4 = *(__int64***)(v2 + 72);
  v5 = *(__int64***)(v2 + 80);
  v3 = v2 + 72;
  while (v4 != v5) {
    v6 = *v4;
    v7 = **v4;
    v8 = *(unsigned __int8*)(v7 + 113);
    if (v8 != 1) {
      v9 = v8 != 5 && (unsigned int)*(unsigned __int8*)(v7 + 112) - 5 >= 3;
      if (v9 && (*(_BYTE*)(v7 + 161) & 0x10) != 0) {
        v10 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v10 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
        }
        v11 = *(unsigned __int16*)(v7 + 168);
        if (*(_WORD*)(v7 + 168) != 0) {
          v12 = *(unsigned __int8**)(v7 + 176);
          while (1) {
            v13 = *v12++;
            if (v13 == v10) {
              break;
            }
            if (--v11 == 0) {
              goto LABEL_4;
            }
          }
        }
        else {
        LABEL_4:
          if (*((_BYTE*)v6 + 9) == 0) {
            result = GameRoutine_1257440(**v4);
            if ((result & 1) != 0) {
              v14 = *(_QWORD*)(v7 + 192) != 0 ? *(unsigned __int64**)(v7 + 192)
                                              : (unsigned __int64*)v7;
              v15 = *(unsigned __int64**)(v3 + 96);
              v16 = *(unsigned __int64**)(v3 + 104);
              if (v16 != v15) {
                v17 = *v14;
                v18 = v16 - v15;
                do {
                  v19 = v18 >> 1;
                  v20 = &v15[v18 >> 1];
                  v22 = *v20;
                  v21 = v20 + 1;
                  v18 += ~(v18 >> 1);
                  if (v22 < v17) {
                    v15 = v21;
                  }
                  else {
                    v18 = v19;
                  }
                } while (v18 != 0);
                if (v15 != v16 && v17 >= *v15) {
                  result = (__int64)GameRoutine_1258640(v6);
                }
              }
            }
          }
        }
      }
    }
    ++v4;
  }
  return result;
}

__int64 GameSubquestData_125bbc0(__int64 result)
{
  unsigned int v1;
  __int64 v2;
  __int64* v3;
  __int64* i;
  char v5;
  _BYTE* v6;
  __int64 v7;
  int v8;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v2 = result + 136LL * v1;
  v3 = *(__int64**)(v2 + 72);
  for (i = *(__int64**)(v2 + 80); v3 != i; ++v3) {
    v6 = (_BYTE*)*v3;
    if ((*(_BYTE*)(*v3 + 9) & 0xFE) == 2) {
      v7 = *(_QWORD*)v6;
      v8 = *(unsigned __int8*)(*(_QWORD*)v6 + 112LL);
      if (*(_BYTE*)(*(_QWORD*)v6 + 112LL) == 0 || v8 == 6) {
        result = GameRoutine_1257a20(*v3);
        if ((result & 1) != 0) {
          v5 = 3;
        }
        else {
          v5 = 2;
        }
      }
      else {
        if (v8 != 7 || *(_BYTE*)(v7 + 113) != 3) {
          continue;
        }
        if (*(_BYTE*)(v7 + 368) == 0) {
          continue;
        }
        result = GameRoutine_715440(result);
        if ((int)result < *(unsigned __int8*)(*(_QWORD*)v6 + 424LL)) {
          continue;
        }
        if (*(_BYTE*)(*(_QWORD*)v6 + 368LL) != 0) {
          result = GameRoutine_1257a20((__int64)v6);
          if ((result & 1) == 0) {
            continue;
          }
        }
        v5 = 3;
      }
      v6[9] = v5;
    }
  }
  return result;
}

__int64 GameSubquestData_125bca0(__int64 result, _BYTE* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64 v8;
  _BYTE* v9;

  if (a2 != nullptr && *a2 != 0) {
    v3 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
    v4 = result + 136LL * v3;
    v5 = *(__int64***)(v4 + 72);
    v6 = *(__int64***)(v4 + 80);
    while (v5 != v6) {
      v7 = *v5;
      v8 = **v5;
      v9 = *(_BYTE**)(v8 + 272);
      if (v9 != nullptr) {
        result = strcmp(*(_QWORD*)(v8 + 272), a2);
        if ((_DWORD)result == 0) {
          if (*v9 == 77 && v9[1] == 73 && v9[2] == 68 && v9[3] == 95 &&
              v9[4] == 69 && v9[5] == 86 && *((_BYTE*)v7 + 9) == 0) {
            return GameRoutine_1257620((__int64)v7, 0);
          }
          return result;
        }
      }
      ++v5;
    }
  }
  return result;
}

__int64 GameSubquestData_125bda0(__int64 result, unsigned __int16* a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  const char* v6;
  __int64 v7;
  const char* v8;
  char* v9;
  char* v10;
  char* v11;
  char* v12;
  char* v13;
  char* v14;
  char* v15;
  char* v16;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[32];

  v2 = *a2;
  if (*a2 != 0) {
    v4 = (_QWORD*)result;
    v5 = 0;
    do {
      v6 = *(const char**)(*((_QWORD*)a2 + 1) + 8 * v5);
      if (v6 != nullptr && *v6 != 0) {
        if ((unsigned int)strncmp(v6, "SQID_", 5) != 0) {
          nn_util_SNPrintf_alt1(&v22, 256, "SQID_%s", v6);
        }
        else {
          v7 = 0;
          while (1) {
            v8 = &v6[v7];
            if (v6[v7] == 0) {
            LABEL_27:
              *((_BYTE*)&v23[-1] + v7) = 0;
              goto LABEL_28;
            }
            v9 = (char*)&v23[-1] + v7;
            *((_BYTE*)&v23[-1] + v7) = v6[v7];
            if (v8[1] == 0) {
              v9[1] = 0;
              goto LABEL_28;
            }
            v9[1] = v8[1];
            if (v8[2] == 0) {
              *((_BYTE*)&v23[-1] + v7 + 2) = 0;
              goto LABEL_28;
            }
            v9[2] = v8[2];
            v10 = (char*)&v23[-1] + v7;
            if (v8[3] == 0) {
              v10[3] = 0;
              goto LABEL_28;
            }
            v10[3] = v8[3];
            if (v8[4] == 0) {
              *((_BYTE*)&v23[-1] + v7 + 4) = 0;
              goto LABEL_28;
            }
            v10[4] = v8[4];
            v11 = (char*)&v23[-1] + v7;
            if (v8[5] == 0) {
              v11[5] = 0;
              goto LABEL_28;
            }
            v11[5] = v8[5];
            if (v8[6] == 0) {
              *((_BYTE*)&v23[-1] + v7 + 6) = 0;
              goto LABEL_28;
            }
            v11[6] = v8[6];
            v12 = (char*)&v23[-1] + v7;
            if (v8[7] == 0) {
              v12[7] = 0;
              goto LABEL_28;
            }
            v12[7] = v8[7];
            if (v8[8] == 0) {
              *((_BYTE*)v23 + v7) = 0;
              goto LABEL_28;
            }
            v12[8] = v8[8];
            v13 = (char*)&v23[-1] + v7;
            if (v8[9] == 0) {
              v13[9] = 0;
              goto LABEL_28;
            }
            v13[9] = v8[9];
            if (v8[10] == 0) {
              *((_BYTE*)v23 + v7 + 2) = 0;
              goto LABEL_28;
            }
            v13[10] = v8[10];
            v14 = (char*)&v23[-1] + v7;
            if (v8[11] == 0) {
              v14[11] = 0;
              goto LABEL_28;
            }
            v14[11] = v8[11];
            if (v8[12] == 0) {
              *((_BYTE*)v23 + v7 + 4) = 0;
              goto LABEL_28;
            }
            v14[12] = v8[12];
            v15 = (char*)&v23[-1] + v7;
            if (v8[13] == 0) {
              v15[13] = 0;
              goto LABEL_28;
            }
            v15[13] = v8[13];
            if (v8[14] == 0) {
              *((_BYTE*)v23 + v7 + 6) = 0;
              goto LABEL_28;
            }
            v15[14] = v8[14];
            v16 = (char*)&v23[-1] + v7;
            if (v8[15] == 0) {
              v16[15] = 0;
              goto LABEL_28;
            }
            v16[15] = v8[15];
            v17 = *((unsigned __int8*)v8 + 16);
            if (v17 == 0) {
              break;
            }
            v7 += 17;
            v16[16] = v17;
            if ((_DWORD)v7 == 255) {
              goto LABEL_27;
            }
          }
          *((_BYTE*)&v23[1] + v7) = 0;
        }
      LABEL_28:
        result = GameSubquestData_125b8e0(v4, (__int64)&v22);
        if (result != 0) {
          v18 = (__int64*)result;
          if (*(_BYTE*)(result + 9) == 0) {
            *(_BYTE*)(result + 9) = 1;
          }
          result = GameSubquestData_1258420(result);
          if ((result & 1) != 0) {
            result = GameSubquestData_125e760_alt1();
            v19 = *v18;
            if (*(_WORD*)(v19 + 304) != 0) {
              v20 = 8LL * *(unsigned __int16*)(v19 + 304);
              v21 = 0;
              do {
                v23[0] = *(_QWORD*)(*(_QWORD*)(v19 + 312) + v21);
                v22 = game_HashString(v23[0]);
                result = game_VariableManager_SetFlag(&v22, 1);
                v21 += 8;
              } while (v20 != v21);
            }
          }
        }
      }
      ++v5;
    } while (v5 != v2);
  }
  return result;
}

__int64 GameSubquestData_125c0c0(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  result = GameRoutine_1258420(a2);
  if ((result & 1) != 0) {
    v4 = *a2;
    if (*((_BYTE*)a2 + 9) == 3) {
      v5 = *(_BYTE**)(v4 + 8);
      if (v5 != nullptr) {
        v6 = strchr(*(_QWORD*)(v4 + 8), 95);
        if (v6 != 0) {
          v7 = (_BYTE*)(v6 + 1);
        }
        else {
          v7 = v5;
        }
        if (*v7 == 62) {
          v5 = v7 + 1;
        }
        else if (v6 != 0) {
          v5 = (_BYTE*)(v6 + 1);
        }
      }
      result = GameData_2241720;
      if (GameData_2241720 != 0) {
        result = GameRoutine_17cc060(GameData_2241720, v5);
        v4 = *a2;
      }
    }
    if (*(_WORD*)(v4 + 304) != 0) {
      v8 = 8LL * *(unsigned __int16*)(v4 + 304);
      v9 = 0;
      do {
        v11 = *(_QWORD*)(*(_QWORD*)(v4 + 312) + v9);
        v10 = game_HashString(v11);
        result = game_VariableManager_SetFlag(&v10, 1);
        v9 += 8;
      } while (v8 != v9);
    }
  }
  return result;
}

void GameSubquestData_125c1a0(__int64 a1, __int64 a2, __int64** a3)
{
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;

  if (a3[1] != *a3) {
    v6 = ProcList_9bd480(a2);
    if (v6 != 0) {
      v8 = *a3;
      v7 = a3[1];
      if (v8 != v7) {
        v9 = v6;
        do {
          v11 = *v8;
          v14_.v15 = v14_.v14;
          v14_.v14[0] = GameData_201dfb8;
          v14_.v14[1] = v11;
          game_ProcList_Call_9bcfa0_alt1(v9, (__int64)v14_.v14);
          if (v14_.v15 == v14_.v14) {
            v12 = 32;
          }
          else {
            if (v14_.v15 == nullptr) {
              goto LABEL_13;
            }
            v12 = 40;
          }
          (*(void (**)(__int64))(*v14_.v15 + v12))((__int64)v14_.v15);
        LABEL_13:
          v13 = *v8;
          v14_.v15 = v14_.v14;
          v14_.v14[0] = GameData_201e038;
          v14_.v14[1] = v13;
          game_ProcList_Call_9bcfa0_alt1(v9, (__int64)v14_.v14);
          if (v14_.v15 == v14_.v14) {
            v10 = 32;
          }
          else {
            if (v14_.v15 == nullptr) {
              goto LABEL_7;
            }
            v10 = 40;
          }
          (*(void (**)(__int64))(*v14_.v15 + v10))((__int64)v14_.v15);
        LABEL_7:
          ++v8;
        } while (v8 != v7);
      }
    }
  }
}

void GameSubquestData_125c2c0(__int64 a1, __int64 a2, __int64*** a3, int a4)
{

#pragma clang fp contract(off)
  __int64** v4;
  __int64** v5;
  char* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64* v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  char v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64** v19;
  __int64* v20;
  int v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int* v30;
  __int64 v31;
  __int64* v32;
  int v33;
  __int64 v34;
  unsigned int v35;
  char* v36;
  const char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _BYTE* v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  int v66;
  unsigned __int64 v68;
  _QWORD* v69;
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
  __int64 v80;
  __int64 v81;
  int v82;
  float v83;
  __int64 v84;
  _BYTE* v85;
  char v86;
  __int64** v87;
  _QWORD** v88;
  __int64* v89;
  __int64 v90;
  int v91;
  unsigned int v92;
  _QWORD* v94;
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
  __int64 v107;
  __int64 v108;
  __int64 v109;
  char* v110;
  __int64 v111;
  __int64* v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int8 v117;
  __int64 v118;
  char v119;
  __int64* v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  _QWORD* v124;
  __int64 v125;
  __int64 v126;
  int v127;
  float v128;
  __int64 v129;
  _BYTE* v130;
  char v131;
  __int64* v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64** v139;
  unsigned __int64 v140;
  char* v142;
  unsigned __int64 v143;
  char* v144;
  char* v145;
  __int64* v146;
  _QWORD v147[2];
  struct {
    __int64* v148;
    char* v149;
  } v148_;

  v5 = *a3;
  v4 = a3[1];
  if (*a3 == v4) {
    return;
  }
  v146 = nullptr;
  v7 = nullptr;
  v8 = 0;
  v144 = nullptr;
  v145 = nullptr;
  v143 = 0;
  v9 = (__int64*)GameData_2130f48;
  while (2) {
    v10 = *v5;
    v11 = *((unsigned __int8*)*v5 + 9);
    if (v11 < 2) {
      if ((*((_BYTE*)v10 + 11) & 1) == 0) {
        if ((unsigned int)*(unsigned __int8*)(*v10 + 112) - 1 <= 2) {
          *((_BYTE*)v10 + 11) |= 1u;
        }
        goto LABEL_28;
      }
      goto LABEL_4;
    }
    if (v11 != 2) {
      goto LABEL_4;
    }
    v12 = *v10;
    v13 = *(unsigned __int8*)(*v10 + 112);
    if (v13 <= 3) {
      if (*(unsigned __int8*)(*v10 + 112) > 1u) {
        if (v13 != 2) {
          if (v13 != 3) {
            goto LABEL_4;
          }
        LABEL_24:
          if ((*(_BYTE*)(v12 + 161) & 8) != 0) {
            LOBYTE(v11) = 4;
          }
          else {
            LOBYTE(v11) = 3;
          }
          *((_BYTE*)v10 + 9) = v11;
          goto LABEL_28;
        }
      LABEL_68:
        *((_BYTE*)v10 + 9) = 3;
      LABEL_69:
        v40 = *v10;
        if (*(_BYTE*)(*v10 + 112) != 5) {
          goto LABEL_87;
        }
        if ((unsigned __int64)v146 < v8) {
          *v146++ = (__int64)v10;
        LABEL_86:
          v40 = *v10;
        LABEL_87:
          v48 = *(_QWORD*)(v40 + 8);
          if (v48 != 0) {
            v49 = strchr_alt1(*(const char**)(v40 + 8), 95);
            if (v49 != 0) {
              v50 = (_BYTE*)(v49 + 1);
            }
            else {
              v50 = (_BYTE*)v48;
            }
            if (*v50 == 62) {
              v48 = (__int64)(v50 + 1);
            }
            else if (v49 != 0) {
              v48 = v49 + 1;
            }
          }
          if (*v9 != 0) {
            GameHr_17cc060(*v9, v48);
          }
          if ((a4 & 1) != 0 && game_GameModeData_instance_ != 0 &&
              *(_BYTE*)(game_GameModeData_instance_ + 56) == 6 &&
              *(_QWORD*)GameData_212dbb8[0] != 0 &&
              *(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 10LL) == 1) {
            v51 = *v10;
            v52 = *(unsigned __int8*)(*v10 + 112);
            if (*(_BYTE*)(*v10 + 112) == 0 || v52 == 6 ||
                v52 == 7 && *(_BYTE*)(v51 + 113) == 3 &&
                    *(_BYTE*)(v51 + 368) != 0) {
              v53 = *(unsigned __int16*)(v51 + 320);
              if (*(_WORD*)(v51 + 320) != 0) {
                v54 = (__int64*)(*(_QWORD*)(v51 + 328) + 8LL);
                while (1) {
                  v56 = *v54;
                  v54 += 2;
                  v55 = v56;
                  if (v56 == 0) {
                    break;
                  }
                  v57 = *(unsigned __int8*)(v55 + 73);
                  if (v57 != 20 && v57 != 13) {
                    break;
                  }
                  if (--v53 == 0) {
                    v59 = *(_QWORD*)(v51 + 344);
                    if (v59 != 0) {
                      v60 = *(unsigned __int16*)(v59 + 40);
                      if (*(_WORD*)(v59 + 40) != 0) {
                        goto LABEL_123;
                      }
                    }
                  LABEL_131:
                    if (*v9 != 0) {
                      *(_BYTE*)(*v9 + 1688) = 1;
                    }
                    goto LABEL_4;
                  }
                }
              }
              else {
                v59 = *(_QWORD*)(v51 + 344);
                if (v59 != 0) {
                  v60 = *(unsigned __int16*)(v59 + 40);
                  if (*(_WORD*)(v59 + 40) != 0) {
                  LABEL_123:
                    v61 = *(_QWORD*)(v59 + 48);
                    v62 = v60;
                    v63 = (__int64*)(v61 + 8);
                    while (1) {
                      v65 = *v63;
                      v63 += 2;
                      v64 = v65;
                      if (v65 == 0) {
                        break;
                      }
                      v66 = *(unsigned __int8*)(v64 + 73);
                      if (v66 != 20 && v66 != 13) {
                        break;
                      }
                      if (--v62 == 0) {
                        goto LABEL_131;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_4;
        }
        v41 = (char*)v146 - v7;
        v42 = ((char*)v146 - v7) >> 3;
        v43 = v42 + 1;
        if ((unsigned __int64)(v42 + 1) >> 61 == 0) {
          if ((__int64)(v8 - (_QWORD)v7) >> 2 > v43) {
            v43 = (__int64)(v8 - (_QWORD)v7) >> 2;
          }
          if (v8 - (unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF8LL) {
            v44 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v44 = v43;
          }
          if (v44 == 0) {
            v45 = (__int64)v7;
            v46 = 0;
          LABEL_82:
            v8 = v46 + 8 * v44;
            v7 = (char*)(v46 + v41 - 8 * v42);
            *(_QWORD*)(v46 + v41) = v10;
            v146 = (__int64*)(v46 + v41 + 8);
            memcpy_alt1((__int64)v7, v45, v41);
            if (v45 != 0) {
              v47 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v47 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v45);
            }
            goto LABEL_86;
          }
          if (v44 >> 61 == 0) {
            v45 = (__int64)v7;
            v46 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v44, 16, 0);
            goto LABEL_82;
          }
        LABEL_282:
          GameRoutine_60a210_alt1();
        }
        goto LABEL_281;
      }
      if (*(_BYTE*)(*v10 + 112) != 0) {
        goto LABEL_24;
      }
    LABEL_17:
      v14 = GameSubquestData_1257a20(*v5) & 1;
      if (v14 != 0) {
        v15 = 3;
      }
      else {
        v15 = 2;
      }
      *((_BYTE*)v10 + 9) = v15;
      if (v14 == 0) {
        goto LABEL_4;
      }
      goto LABEL_69;
    }
    if (v13 - 4 < 2) {
      goto LABEL_68;
    }
    if (v13 != 7) {
      if (v13 != 6) {
        goto LABEL_4;
      }
      goto LABEL_17;
    }
    v25 = *(unsigned __int8*)(v12 + 113);
    if (v25 != 4) {
      if (v25 == 3) {
        if ((int)GameRoutine_715440_alt1() < *(unsigned __int8*)(*v10 + 424) ||
            *(_BYTE*)(*v10 + 368) != 0 &&
                (GameSubquestData_1257a20(v10) & 1) == 0) {
          v11 = *((unsigned __int8*)v10 + 9);
          if (v11 != 3) {
            goto LABEL_28;
          }
        }
        else {
          *((_BYTE*)v10 + 9) = 3;
        }
        goto LABEL_4;
      }
      if (v25 != 2) {
        goto LABEL_4;
      }
      *((_BYTE*)v10 + 9) = 4;
    LABEL_30:
      if ((unsigned __int64)v144 < v143) {
        *(_QWORD*)v144 = v10;
        v144 += 8;
        goto LABEL_4;
      }
      v16 = v144 - v145;
      v17 = (v144 - v145) >> 3;
      v18 = v17 + 1;
      if ((unsigned __int64)(v17 + 1) >> 61 == 0) {
        v19 = v4;
        v20 = v9;
        v21 = a4;
        v22 = v8;
        v142 = v7;
        if ((__int64)(v143 - (_QWORD)v145) >> 2 > v18) {
          v18 = (__int64)(v143 - (_QWORD)v145) >> 2;
        }
        if (v143 - (unsigned __int64)v145 >= 0x7FFFFFFFFFFFFFF8LL) {
          v23 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v23 = v18;
        }
        if (v23 != 0) {
          if (v23 >> 61 != 0) {
            goto LABEL_282;
          }
          v24 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
        }
        else {
          v24 = 0;
        }
        v26 = v24 + v16 - 8 * v17;
        *(_QWORD*)(v24 + v16) = v10;
        v143 = v24 + 8 * v23;
        v144 = (char*)(v24 + v16 + 8);
        memcpy_alt1(v26, (__int64)v145, v16);
        if (v145 != nullptr) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v145);
        }
        v145 = (char*)v26;
        v7 = v142;
        v8 = v22;
        a4 = v21;
        v9 = v20;
        v4 = v19;
        goto LABEL_4;
      }
    LABEL_281:
      GameRoutine_1267840_alt1();
    }
    v28 = *(unsigned __int16*)(v12 + 128);
    if (*(_WORD*)(v12 + 128) == 0) {
      goto LABEL_68;
    }
    v29 = 8;
    v139 = v4;
    v140 = v8;
    while (1) {
      v30 = game_gmap_SpotMgr_FindSpot_alt1(
          *(unsigned int**)(*(_QWORD*)(*v10 + 136) + v29));
      if (v30 == nullptr) {
        goto LABEL_56;
      }
      v31 = GameRoutine_1326a40_alt1((__int64)v30);
      if (v31 == 0) {
        goto LABEL_56;
      }
      v32 = v9;
      v33 = a4;
      v34 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v35 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        v36 = v7;
        v37 = *(const char**)(v31 + 8);
        if (v37 == nullptr) {
          goto LABEL_65;
        }
      }
      else {
        v36 = v7;
        v35 = 0;
        v37 = *(const char**)(v31 + 8);
        if (v37 == nullptr) {
          goto LABEL_65;
        }
      }
      v38 = strchr_alt1(v37, 95);
      if (v38 != 0) {
        v37 = (const char*)(v38 + 1);
      }
    LABEL_65:
      v148_.v149 = game_util_Format_alt1(GameData_1afaabd_alt1, v35, v37);
      v148_.v148 = (__int64*)game_HashString_alt1((__int64)v148_.v149);
      v39 = game_GameVariableTable_Find_alt1(*(_QWORD**)(v34 + 48),
                                             (unsigned __int64*)&v148_.v148);
      if (v39 == 0) {
        break;
      }
      v7 = v36;
      a4 = v33;
      v9 = v32;
      v4 = v139;
      v8 = v140;
      if (*(_DWORD*)(v39 + 32) == 0) {
        goto LABEL_134;
      }
    LABEL_56:
      --v28;
      v29 += 16;
      if (v28 == 0) {
        goto LABEL_68;
      }
    }
    v7 = v36;
    a4 = v33;
    v9 = v32;
    v4 = v139;
    v8 = v140;
  LABEL_134:
    v11 = *((unsigned __int8*)v10 + 9);
    if (v11 != 2) {
    LABEL_28:
      if ((unsigned __int8)v11 == 3) {
        goto LABEL_69;
      }
      if ((unsigned __int8)v11 == 4) {
        goto LABEL_30;
      }
    }
  LABEL_4:
    if (++v5 != v4) {
      continue;
    }
    break;
  }
  if (v146 != (__int64*)v7) {
    GameRoutine_682bc0_alt1(v147, (__int64)&GameData_1aed6ab);
    if (v147[0] != 0) {
      v68 = v8;
      v69 = *(_QWORD**)(GameData_21ca310 + 56);
      if (v69 != nullptr) {
        v70 = 250;
        while (1) {
          v71 = v69[55];
          if (v71 != 0 && *(_BYTE*)(v71 + 16) != 9 && v69[49] == v147[0]) {
            break;
          }
          v72 = v69[333];
          if (v72 != 0 && *(_BYTE*)(v72 + 16) != 9 && v69[327] == v147[0]) {
            v69 += 278;
            break;
          }
          v73 = v69[611];
          if (v73 != 0 && *(_BYTE*)(v73 + 16) != 9 && v69[605] == v147[0]) {
            v76 = 4448;
            goto LABEL_247;
          }
          v74 = v69[889];
          if (v74 != 0 && *(_BYTE*)(v74 + 16) != 9 && v69[883] == v147[0]) {
            v76 = 6672;
            goto LABEL_247;
          }
          v75 = v69[1167];
          if (v75 != 0 && *(_BYTE*)(v75 + 16) != 9 && v69[1161] == v147[0]) {
            v76 = 8896;
          LABEL_247:
            v69 = (_QWORD*)((char*)v69 + v76);
            break;
          }
          v69 += 1390;
          v70 -= 5;
          if (v70 == 0) {
            goto LABEL_271;
          }
        }
        v119 = 0;
        v120 = (__int64*)v7;
        do {
          v121 = *v120++;
          v119 |= *(_QWORD*)(*(_QWORD*)v121 + 544LL) != 0;
        } while (v120 != v146);
        if ((v119 & 1) != 0) {
          if (a2 != 0) {
            v122 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
            v123 = GameData_212c608[0];
            *(_QWORD*)(v122 + 88) = 0;
            *(_QWORD*)(v122 + 96) = 0;
            *(_QWORD*)(v122 + 104) = 0;
            *(_QWORD*)(v122 + 112) = 0;
            *(_QWORD*)(v122 + 120) = 0;
            *(_QWORD*)(v122 + 128) = 0;
            *(_WORD*)(v122 + 136) = 0;
            *(_QWORD*)(v122 + 16) = 0;
            *(_QWORD*)(v122 + 24) = "NULL";
            *(_QWORD*)(v122 + 32) = 0;
            v124 = (_QWORD*)(v122 + 32);
            *(_QWORD*)(v122 + 138) = 0;
            *(_QWORD*)(v122 + 144) = 0;
            *(_QWORD*)(v122 + 40) = 0;
            *(_QWORD*)(v122 + 48) = 0;
            *(_QWORD*)(v122 + 56) = 0;
            *(_QWORD*)(v122 + 64) = 0;
            *(_QWORD*)(v122 + 72) = 0;
            *(_QWORD*)(v122 + 80) = 0;
            *(_QWORD*)v122 = v123 + 16;
            *(_QWORD*)(v122 + 8) = 0;
            game_ProcInst_Register_alt2(v122);
            *(_QWORD*)v122 = game_GameSubquestData_ProcLearnSkill_vtable;
            v125 = *(_QWORD*)v7;
            *(_QWORD*)(v122 + 168) = v146;
            *(_QWORD*)(v122 + 176) = v68;
            *(_DWORD*)(v122 + 184) = 0;
            *(_QWORD*)(v122 + 192) = v69;
            *(_BYTE*)(v122 + 200) = 0;
            *(_QWORD*)(v122 + 152) = v125;
            *(_QWORD*)(v122 + 160) = v7;
            GameHr_8679c0();
            v126 = game_ProcGameSkipView_instance_;
            if (game_ProcGameSkipView_instance_ != 0) {
              v127 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
              if ((v127 & 0x10) == 0) {
                v128 = *(float*)(game_ProcGameSkipView_instance_ + 224);
                *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
                    v127 & 0xFFFFFFE2 | 1;
                if (v128 > 0x0.0p+0f) {
                  *(_DWORD*)(v126 + 224) = 0;
                }
              }
            }
            v129 = *(_QWORD*)(a2 + 40);
            v77 = (__int64)v145;
            if (v129 != 0) {
              *(_QWORD*)(v129 + 48) = v122;
              *(_QWORD*)(v122 + 56) = *(_QWORD*)(a2 + 40);
            }
            *(_QWORD*)(a2 + 40) = v122;
            *(_QWORD*)(v122 + 24) = "ProcLearnSkill";
            *(_QWORD*)(v122 + 32) = a2;
            *(_DWORD*)(v122 + 140) =
                (unsigned int)game_HashString32_alt1("ProcLearnSkill");
            *(_QWORD*)(v122 + 64) = 0;
            *(_QWORD*)(v122 + 72) = 24;
            *(_QWORD*)(v122 + 80) = 1;
            *(_QWORD*)(v122 + 8) = &GameData_21701d0;
            *(_QWORD*)(v122 + 16) = &GameData_21701d0;
            (*(void (**)(__int64))(*(_QWORD*)v122 + 32LL))(v122);
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v122 + 136LL))(v122) &
                 1) != 0 &&
                (*(_WORD*)(v122 + 136) & 0x100) == 0) {
              *(_WORD*)(v122 + 136) |= 0x100u;
            }
            v130 = (_BYTE*)*v124;
            v131 = *(_BYTE*)(*v124 + 138LL);
            if (v131 == 0) {
              (*(void (**)(_QWORD))(*(_QWORD*)v130 + 64LL))(*v124);
              v131 = v130[138];
            }
            v7 = nullptr;
            v130[138] = v131 + 1;
            *(_WORD*)(v122 + 136) |= 2u;
            goto LABEL_272;
          }
          v132 = (__int64*)v7;
          do {
            v133 = *v132;
            GameSubquestData_1260d00(*v132, (__int64)v69);
            v134 = *(_QWORD*)v133;
            if (*(_BYTE*)(*(_QWORD*)v133 + 112LL) == 5 &&
                *(_WORD*)(v134 + 552) != 0) {
              v135 = 8LL * *(unsigned __int16*)(v134 + 552);
              v136 = 0;
              do {
                v148_.v149 = *(char**)(*(_QWORD*)(v134 + 560) + v136);
                v148_.v148 =
                    (__int64*)game_HashString_alt1((__int64)v148_.v149);
                game_VariableManager_SetFlag_alt1((__int64)&v148_.v148, 1);
                v136 += 8;
              } while (v135 != v136);
            }
            ++v132;
          } while (v132 != v146);
        }
      }
    }
  LABEL_271:
    v77 = (__int64)v145;
    goto LABEL_272;
  }
  v77 = (__int64)v145;
  if (v144 == v145) {
    goto LABEL_272;
  }
  if (a2 != 0) {
    v78 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
    v79 = GameData_212c608[0];
    *(_QWORD*)(v78 + 88) = 0;
    *(_QWORD*)(v78 + 96) = 0;
    *(_QWORD*)(v78 + 104) = 0;
    *(_QWORD*)(v78 + 112) = 0;
    *(_QWORD*)(v78 + 120) = 0;
    *(_QWORD*)(v78 + 128) = 0;
    *(_WORD*)(v78 + 136) = 0;
    *(_QWORD*)(v78 + 32) = 0;
    *(_QWORD*)(v78 + 16) = 0;
    *(_QWORD*)(v78 + 24) = "NULL";
    *(_QWORD*)(v78 + 138) = 0;
    *(_QWORD*)(v78 + 144) = 0;
    *(_QWORD*)(v78 + 40) = 0;
    *(_QWORD*)(v78 + 48) = 0;
    *(_QWORD*)(v78 + 56) = 0;
    *(_QWORD*)(v78 + 64) = 0;
    *(_QWORD*)(v78 + 72) = 0;
    *(_QWORD*)(v78 + 80) = 0;
    *(_QWORD*)v78 = v79 + 16;
    *(_QWORD*)(v78 + 8) = 0;
    game_ProcInst_Register_alt2(v78);
    *(_QWORD*)v78 = game_GameSubquestData_ProcReward_vtable;
    v80 = *(_QWORD*)v145;
    *(_DWORD*)(v78 + 184) = 0;
    *(_QWORD*)(v78 + 192) = 0;
    *(_QWORD*)(v78 + 200) = 0;
    *(_QWORD*)(v78 + 208) = 0;
    *(_QWORD*)(v78 + 256) = 0;
    *(_QWORD*)(v78 + 152) = v80;
    *(_QWORD*)(v78 + 160) = v145;
    *(_QWORD*)(v78 + 168) = v144;
    *(_QWORD*)(v78 + 176) = v143;
    *(_BYTE*)(v78 + 272) = 5;
    GameHr_8679c0();
    v81 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v82 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v82 & 0x10) == 0) {
        v83 = *(float*)(game_ProcGameSkipView_instance_ + 224);
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
            v82 & 0xFFFFFFE2 | 1;
        if (v83 > 0x0.0p+0f) {
          *(_DWORD*)(v81 + 224) = 0;
        }
      }
    }
    v84 = *(_QWORD*)(a2 + 40);
    if (v84 != 0) {
      *(_QWORD*)(v84 + 48) = v78;
      *(_QWORD*)(v78 + 56) = *(_QWORD*)(a2 + 40);
    }
    *(_QWORD*)(a2 + 40) = v78;
    *(_QWORD*)(v78 + 24) = "ProcReward";
    *(_QWORD*)(v78 + 32) = a2;
    *(_DWORD*)(v78 + 140) = (unsigned int)game_HashString32_alt1("ProcReward");
    *(_QWORD*)(v78 + 64) = 0;
    *(_QWORD*)(v78 + 72) = 24;
    *(_QWORD*)(v78 + 80) = 1;
    *(_QWORD*)(v78 + 8) = &GameData_2170390;
    *(_QWORD*)(v78 + 16) = &GameData_2170390;
    (*(void (**)(__int64))(*(_QWORD*)v78 + 32LL))(v78);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v78 + 136LL))(v78) & 1) != 0 &&
        (*(_WORD*)(v78 + 136) & 0x100) == 0) {
      *(_WORD*)(v78 + 136) |= 0x100u;
    }
    v85 = *(_BYTE**)(v78 + 32);
    v86 = v85[138];
    if (v86 == 0) {
      (*(void (**)(_BYTE*))(*(_QWORD*)v85 + 64LL))(v85);
      v86 = v85[138];
    }
    v85[138] = v86 + 1;
    *(_WORD*)(v78 + 136) |= 2u;
  }
  else {
    if (v145 != v144) {
      v87 = (__int64**)v145;
      v88 = (_QWORD**)GameData_212c7b0[0];
      do {
        v89 = *v87;
        game_12645e0_alt1(*v87);
        v90 = *v89;
        if (*(_WORD*)(*v89 + 428) != 0) {
          GameRoutine_8b03f0_alt1(0, *(unsigned __int16*)(*v89 + 428), 0);
          v90 = *v89;
        }
        v91 = *(unsigned __int8*)(v90 + 112);
        v92 = *(unsigned __int8*)(v90 + 113) - 3;
        if (v91 == 7 && v92 <= 1) {
          GameRoutine_682bc0_alt1(v147, (__int64)&GameData_1a8d218);
          if (v147[0] != 0) {
            v94 = *(_QWORD**)(GameData_21ca310 + 56);
            if (v94 != nullptr) {
              v95 = 250;
              while (1) {
                v96 = v94[55];
                if (v96 != 0 && *(_BYTE*)(v96 + 16) != 9 &&
                    v94[49] == v147[0]) {
                  break;
                }
                v97 = v94[333];
                if (v97 != 0 && *(_BYTE*)(v97 + 16) != 9 &&
                    v94[327] == v147[0]) {
                  v94 += 278;
                  break;
                }
                v98 = v94[611];
                if (v98 != 0 && *(_BYTE*)(v98 + 16) != 9 &&
                    v94[605] == v147[0]) {
                  v106 = 4448;
                  goto LABEL_223;
                }
                v99 = v94[889];
                if (v99 != 0 && *(_BYTE*)(v99 + 16) != 9 &&
                    v94[883] == v147[0]) {
                  v106 = 6672;
                  goto LABEL_223;
                }
                v100 = v94[1167];
                if (v100 != 0 && *(_BYTE*)(v100 + 16) != 9 &&
                    v94[1161] == v147[0]) {
                  v106 = 8896;
                  goto LABEL_223;
                }
                v101 = v94[1445];
                if (v101 != 0 && *(_BYTE*)(v101 + 16) != 9 &&
                    v94[1439] == v147[0]) {
                  v106 = 11120;
                  goto LABEL_223;
                }
                v102 = v94[1723];
                if (v102 != 0 && *(_BYTE*)(v102 + 16) != 9 &&
                    v94[1717] == v147[0]) {
                  v106 = 13344;
                  goto LABEL_223;
                }
                v103 = v94[2001];
                if (v103 != 0 && *(_BYTE*)(v103 + 16) != 9 &&
                    v94[1995] == v147[0]) {
                  v106 = 15568;
                  goto LABEL_223;
                }
                v104 = v94[2279];
                if (v104 != 0 && *(_BYTE*)(v104 + 16) != 9 &&
                    v94[2273] == v147[0]) {
                  v106 = 17792;
                  goto LABEL_223;
                }
                v105 = v94[2557];
                if (v105 != 0 && *(_BYTE*)(v105 + 16) != 9 &&
                    v94[2551] == v147[0]) {
                  v106 = 20016;
                LABEL_223:
                  v94 = (_QWORD*)((char*)v94 + v106);
                  break;
                }
                v94 += 2780;
                v95 -= 10;
                if (v95 == 0) {
                  goto LABEL_229;
                }
              }
              if (*(_QWORD*)(*v89 + 544) != 0) {
                GameSubquestData_1260d00((__int64)v89, (__int64)v94);
                v107 = *v89;
                if (*(_BYTE*)(*v89 + 112) == 5 && *(_WORD*)(v107 + 552) != 0) {
                  v108 = 8LL * *(unsigned __int16*)(v107 + 552);
                  v109 = 0;
                  do {
                    v148_.v149 = *(char**)(*(_QWORD*)(v107 + 560) + v109);
                    v148_.v148 =
                        (__int64*)game_HashString_alt1((__int64)v148_.v149);
                    game_VariableManager_SetFlag_alt1((__int64)&v148_.v148, 1);
                    v109 += 8;
                  } while (v108 != v109);
                }
              }
            }
          }
        }
      LABEL_229:
        GameSubquestData_1264da0((void*)((__int64*)&v148_.v148), v89);
        v111 = (__int64)v148_.v148;
        v110 = v148_.v149;
        v112 = v148_.v148;
        while (v112 != (__int64*)v110) {
          v113 = *v112++;
          v147[1] = v113;
          v147[0] = game_HashString_alt1(v113);
          game_VariableManager_SetFlag_alt1((__int64)v147, 1);
        }
        if (v111 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v114 = 128;
          }
          else {
            v114 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v114, v111);
        }
        v115 = *v89;
        v77 = (__int64)v145;
        v116 = *(_QWORD*)(v115 + 208);
        if (v116 != 0) {
          v117 = game_GameModeData_instance_ != 0
                     ? *(_BYTE*)(game_GameModeData_instance_ + 15)
                     : 0;
          v118 = GameSubquestData_125b8e0_alt2(*v88, *(const char**)(v116 + 8),
                                               v117);
          if (v118 != 0 && (*(_BYTE*)(v118 + 9) & 0xFE) == 2) {
            *(_WORD*)(v118 + 9) = 261;
          }
        }
        ++v87;
      } while (v87 != (__int64**)v144);
    }
  LABEL_272:
    if (v77 != 0) {
      v137 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v137 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v137, v77);
    }
  }
  if (v7 != nullptr) {
    v138 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v138 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v138, (__int64)v7);
  }
}

void GameSubquestData_125d1c0(__int64 a1, __int64 a2, const char*** a3)
{
  const char** v3;
  const char** v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  unsigned __int8 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64** v22;
    __int64* v23;
    unsigned __int64 v24;
  } v22_;

  v22_.v23 = nullptr;
  v4 = *a3;
  v3 = a3[1];
  v5 = (char*)v3 - (char*)*a3;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v3 == *a3) {
    v9 = 0;
  }
  else {
    v21 = a2;
    if (v5 < 0) {
    LABEL_33:
      GameRoutine_1265540_alt1();
    }
    v7 = (_QWORD*)a1;
    v8 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v5, 16, 0);
    v9 = v8 + v5;
    v10 = (__int64*)v8;
    v5 = v8;
    do {
      if (game_GameModeData_instance_ != 0) {
        v11 = *(_BYTE*)(game_GameModeData_instance_ + 15);
      }
      else {
        v11 = 0;
      }
      a1 = GameSubquestData_125b8e0_alt2(v7, *v4, v11);
      if (a1 != 0) {
        if ((unsigned __int64)v10 < v9) {
          *v10++ = a1;
        }
        else {
          v12 = (unsigned __int64)v10 - v5;
          v13 = ((__int64)v10 - v5) >> 3;
          v14 = v13 + 1;
          if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
            goto LABEL_33;
          }
          if ((__int64)(v9 - v5) >> 2 > v14) {
            v14 = (__int64)(v9 - v5) >> 2;
          }
          if (v9 - v5 >= 0x7FFFFFFFFFFFFFF8LL) {
            v15 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v15 = v14;
          }
          if (v15 != 0) {
            if (v15 >> 61 != 0) {
              GameRoutine_60a210_alt1();
            }
            v16 = a1;
            v17 = fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v15, 16, 0);
            a1 = v16;
          }
          else {
            v17 = 0;
          }
          v9 = v17 + 8 * v15;
          v18 = v17 + v12 - 8 * v13;
          *(_QWORD*)(v17 + v12) = a1;
          v10 = (__int64*)(v17 + v12 + 8);
          a1 = memcpy_alt1(v18, v5, v12);
          if (v5 != 0) {
            v19 = 128;
            if (*(_QWORD*)(*v6 + 200) == 0) {
              v19 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v6 + v19, v5);
          }
          v5 = v18;
        }
      }
      ++v4;
    } while (v4 != v3);
    a2 = v21;
    v22_.v23 = v10;
  }
  v22_.v24 = v9;
  v22_.v22 = (__int64**)v5;
  GameSubquestData_125c2c0(a1, a2, &v22_.v22, 0);
  if (v5 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v20, v5);
  }
}

void GameSubquestData_125d3e0(__int64 a1)
{
  unsigned int v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  unsigned __int64 v7;
  char* v8;
  __int64** v9;
  __int64* v10;
  __int64 v11;
  int v12;
  bool v13;
  signed __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64** v24;
    char* v25;
    unsigned __int64 v26;
  } v24_;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = a1 + 136LL * v1;
  v4 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v5 = *(__int64**)(v3 + 72);
  v6 = *(__int64**)(v3 + 80);
  v7 = v4 + 64;
  v8 = (char*)v4;
  v24_.v25 = (char*)v4;
  if (v5 == v6) {
    v9 = (__int64**)v4;
  }
  else {
    v9 = (__int64**)v4;
    do {
      v10 = (__int64*)*v5;
      if ((*(_BYTE*)(*v5 + 9) & 0xFE) != 4) {
        v11 = *v10;
        v12 = *(unsigned __int8*)(*v10 + 112);
        v13 = *(_BYTE*)(*v10 + 112) == 0 || v12 == 6;
        if (v13 ||
            (v12 == 7 ? (v19 = *(_BYTE*)(v11 + 113) == 3) : (v19 = false),
             v19 && *(_BYTE*)(v11 + 368) != 0)) {
          if ((unsigned __int64)v8 < v7) {
            *(_QWORD*)v8 = v10;
            v8 += 8;
          }
          else {
            v14 = v8 - (char*)v9;
            v15 = (v8 - (char*)v9) >> 3;
            v16 = v15 + 1;
            if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
              GameRoutine_1265540_alt1();
            }
            if ((__int64)(v7 - (_QWORD)v9) >> 2 > v16) {
              v16 = (__int64)(v7 - (_QWORD)v9) >> 2;
            }
            if (v7 - (unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
              v17 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v17 = v16;
            }
            if (v17 != 0) {
              if (v17 >> 61 != 0) {
                GameRoutine_60a210_alt1();
              }
              v18 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v17, 16, 0);
            }
            else {
              v18 = 0;
            }
            v7 = v18 + 8 * v17;
            v20 = v8 - (char*)v9;
            v21 = v18 + v14 - 8 * v15;
            *(_QWORD*)(v18 + v14) = v10;
            v8 = (char*)(v18 + v14 + 8);
            v4 = memcpy_alt1(v21, (__int64)v9, v20);
            if (v9 != nullptr) {
              v22 = 128;
              if (*(_QWORD*)(*v2 + 200) == 0) {
                v22 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v2 + v22, (__int64)v9);
            }
            v9 = (__int64**)v21;
          }
        }
      }
      ++v5;
    } while (v5 != v6);
    v24_.v25 = v8;
  }
  v24_.v26 = v7;
  v24_.v24 = v9;
  GameSubquestData_125c2c0(v4, 0, &v24_.v24, 1);
  if (v9 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v2 + v23, (__int64)v9);
  }
}

void GameSubquestData_125d600(__int64 a1)
{
  unsigned int v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  unsigned __int64 v7;
  char* v8;
  __int64** v9;
  __int64 v10;
  signed __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    __int64** v21;
    char* v22;
    unsigned __int64 v23;
  } v21_;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = a1 + 136LL * v1;
  v4 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v5 = *(__int64**)(v3 + 72);
  v6 = *(__int64**)(v3 + 80);
  v7 = v4 + 64;
  v8 = (char*)v4;
  v21_.v22 = (char*)v4;
  if (v5 == v6) {
    v9 = (__int64**)v4;
  }
  else {
    v9 = (__int64**)v4;
    do {
      v10 = *v5;
      if ((*(_BYTE*)(*v5 + 9) & 0xFE) != 4 &&
          *(_BYTE*)(*(_QWORD*)v10 + 112LL) == 7 &&
          *(_BYTE*)(*(_QWORD*)v10 + 113LL) == 3) {
        if ((unsigned __int64)v8 < v7) {
          *(_QWORD*)v8 = v10;
          v8 += 8;
        }
        else {
          v12 = v8 - (char*)v9;
          v13 = (v8 - (char*)v9) >> 3;
          v14 = v13 + 1;
          if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
            GameRoutine_1265540_alt1();
          }
          if ((__int64)(v7 - (_QWORD)v9) >> 2 > v14) {
            v14 = (__int64)(v7 - (_QWORD)v9) >> 2;
          }
          if (v7 - (unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
            v15 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v15 = v14;
          }
          if (v15 != 0) {
            if (v15 >> 61 != 0) {
              GameRoutine_60a210_alt1();
            }
            v16 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v15, 16, 0);
          }
          else {
            v16 = 0;
          }
          v7 = v16 + 8 * v15;
          v17 = v8 - (char*)v9;
          v18 = v16 + v12 - 8 * v13;
          *(_QWORD*)(v16 + v12) = v10;
          v8 = (char*)(v16 + v12 + 8);
          v4 = memcpy_alt1(v18, (__int64)v9, v17);
          if (v9 != nullptr) {
            v19 = 128;
            if (*(_QWORD*)(*v2 + 200) == 0) {
              v19 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v2 + v19, (__int64)v9);
          }
          v9 = (__int64**)v18;
        }
      }
      ++v5;
    } while (v5 != v6);
    v21_.v22 = v8;
  }
  v21_.v23 = v7;
  v21_.v21 = v9;
  GameSubquestData_125c2c0(v4, 0, &v21_.v21, 0);
  if (v9 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v2 + v20, (__int64)v9);
  }
}

void GameSubquestData_125d800(__int64 a1, __int64 a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64** v6;
  __int64** v7;
  unsigned __int64 v8;
  char* v9;
  __int64** v10;
  __int64* v11;
  unsigned int v12;
  bool v13;
  int v14;
  signed __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int64** v26;
    char* v27;
    unsigned __int64 v28;
  } v26_;

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = a1 + 136LL * v3;
  v5 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 32, 16, 0);
  v6 = *(__int64***)(v4 + 72);
  v7 = *(__int64***)(v4 + 80);
  v8 = v5 + 32;
  v9 = (char*)v5;
  v26_.v27 = (char*)v5;
  if (v6 == v7) {
    v10 = (__int64**)v5;
  }
  else {
    v25 = a2;
    v10 = (__int64**)v5;
    do {
      v11 = *v6;
      v12 = *((unsigned __int8*)*v6 + 9);
      v13 = v12 > 5;
      v14 = (1 << v12) & 0x31;
      if (v13 || v14 == 0) {
        v5 = GameRoutine_12571e0(*v6);
        if ((v5 & 1) != 0) {
          if ((unsigned __int64)v9 < v8) {
            *(_QWORD*)v9 = v11;
            v9 += 8;
          }
          else {
            v16 = v9 - (char*)v10;
            v17 = (v9 - (char*)v10) >> 3;
            v18 = v17 + 1;
            if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
              GameRoutine_1265540_alt1();
            }
            if ((__int64)(v8 - (_QWORD)v10) >> 2 > v18) {
              v18 = (__int64)(v8 - (_QWORD)v10) >> 2;
            }
            if (v8 - (unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
              v19 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v19 = v18;
            }
            if (v19 != 0) {
              if (v19 >> 61 != 0) {
                GameRoutine_60a210_alt1();
              }
              v20 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
            }
            else {
              v20 = 0;
            }
            v8 = v20 + 8 * v19;
            v21 = v9 - (char*)v10;
            v22 = v20 + v16 - 8 * v17;
            *(_QWORD*)(v20 + v16) = v11;
            v9 = (char*)(v20 + v16 + 8);
            v5 = memcpy_alt1(v22, (__int64)v10, v21);
            if (v10 != nullptr) {
              v23 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v23 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v10);
            }
            v10 = (__int64**)v22;
          }
        }
      }
      ++v6;
    } while (v6 != v7);
    a2 = v25;
    v26_.v27 = v9;
  }
  v26_.v28 = v8;
  v26_.v26 = v10;
  GameSubquestData_125c2c0(v5, a2, &v26_.v26, 0);
  if (v10 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v10);
  }
}

void GameSubquestData_125da40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  unsigned __int64 v10;
  char* v11;
  __int64** v12;
  __int64* v13;
  __int64 v14;
  int v15;
  __int64 v17;
  unsigned int** v18;
  unsigned int* v19;
  signed __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64** v29;
    char* v30;
    unsigned __int64 v31;
  } v29_;

  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = a1 + 136LL * v5;
  v7 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 64, 16, 0);
  v8 = *(__int64**)(v6 + 72);
  v9 = *(__int64**)(v6 + 80);
  v10 = v7 + 64;
  v11 = (char*)v7;
  v29_.v30 = (char*)v7;
  if (v8 == v9) {
    v12 = (__int64**)v7;
  }
  else {
    v12 = (__int64**)v7;
    do {
      v13 = (__int64*)*v8;
      if ((*(_BYTE*)(*v8 + 9) & 0xFE) != 4) {
        v14 = *v13;
        if (*(_BYTE*)(*v13 + 112) == 7) {
          v15 = *(unsigned __int8*)(v14 + 113);
          if (v15 == 4 || v15 == 2) {
            v17 = *(unsigned __int16*)(v14 + 128);
            if (*(_WORD*)(v14 + 128) != 0) {
              v18 = (unsigned int**)(*(_QWORD*)(v14 + 136) + 8LL);
              while (1) {
                v19 = *v18;
                v18 += 2;
                v7 = (__int64)game_gmap_SpotMgr_FindSpot_alt1(v19);
                if (a3 == v7) {
                  break;
                }
                if (--v17 == 0) {
                  goto LABEL_6;
                }
              }
              if ((unsigned __int64)v11 < v10) {
                *(_QWORD*)v11 = v13;
                v11 += 8;
              }
              else {
                v20 = v11 - (char*)v12;
                v21 = (v11 - (char*)v12) >> 3;
                v22 = v21 + 1;
                if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
                  GameRoutine_1265540_alt1();
                }
                if ((__int64)(v10 - (_QWORD)v12) >> 2 > v22) {
                  v22 = (__int64)(v10 - (_QWORD)v12) >> 2;
                }
                if (v10 - (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v23 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v23 = v22;
                }
                if (v23 != 0) {
                  if (v23 >> 61 != 0) {
                    GameRoutine_60a210_alt1();
                  }
                  v24 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
                }
                else {
                  v24 = 0;
                }
                v10 = v24 + 8 * v23;
                v25 = v11 - (char*)v12;
                v26 = v24 + v20 - 8 * v21;
                *(_QWORD*)(v24 + v20) = v13;
                v11 = (char*)(v24 + v20 + 8);
                v7 = memcpy_alt1(v26, (__int64)v12, v25);
                if (v12 != nullptr) {
                  v27 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v27 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                      (__int64)v12);
                }
                v12 = (__int64**)v26;
              }
            }
          }
        }
      }
    LABEL_6:
      ++v8;
    } while (v8 != v9);
    v29_.v30 = v11;
  }
  v29_.v31 = v10;
  v29_.v29 = v12;
  GameSubquestData_125c2c0(v7, a2, &v29_.v29, 0);
  if (v12 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v12);
  }
}

__int64 GameSubquestData_125dca0(__int64 result, unsigned __int16* a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  const char* v6;
  __int64 v7;
  const char* v8;
  _BYTE* v9;
  _BYTE* v10;
  _BYTE* v11;
  _BYTE* v12;
  _BYTE* v13;
  _BYTE* v14;
  _BYTE* v15;
  _BYTE* v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  __int64* v20;
  __int64* i;
  __int64 v22;
  _BYTE v23[256];

  v2 = *a2;
  if (*a2 != 0) {
    v4 = (_QWORD*)result;
    v5 = 0;
    do {
      v6 = *(const char**)(*((_QWORD*)a2 + 1) + 8 * v5);
      if (v6 != nullptr && *v6 != 0) {
        if ((unsigned int)strncmp(v6, "SQID_", 5) != 0) {
          nn_util_SNPrintf_alt1(v23, 256, "SQID_%s", v6);
        }
        else {
          v7 = 0;
          while (1) {
            v8 = &v6[v7];
            if (v6[v7] == 0) {
            LABEL_27:
              v23[v7] = 0;
              goto LABEL_28;
            }
            v9 = &v23[v7];
            v23[v7] = v6[v7];
            if (v8[1] == 0) {
              v9[1] = 0;
              goto LABEL_28;
            }
            v9[1] = v8[1];
            if (v8[2] == 0) {
              v23[v7 + 2] = 0;
              goto LABEL_28;
            }
            v9[2] = v8[2];
            v10 = &v23[v7];
            if (v8[3] == 0) {
              v10[3] = 0;
              goto LABEL_28;
            }
            v10[3] = v8[3];
            if (v8[4] == 0) {
              v23[v7 + 4] = 0;
              goto LABEL_28;
            }
            v10[4] = v8[4];
            v11 = &v23[v7];
            if (v8[5] == 0) {
              v11[5] = 0;
              goto LABEL_28;
            }
            v11[5] = v8[5];
            if (v8[6] == 0) {
              v23[v7 + 6] = 0;
              goto LABEL_28;
            }
            v11[6] = v8[6];
            v12 = &v23[v7];
            if (v8[7] == 0) {
              v12[7] = 0;
              goto LABEL_28;
            }
            v12[7] = v8[7];
            if (v8[8] == 0) {
              v23[v7 + 8] = 0;
              goto LABEL_28;
            }
            v12[8] = v8[8];
            v13 = &v23[v7];
            if (v8[9] == 0) {
              v13[9] = 0;
              goto LABEL_28;
            }
            v13[9] = v8[9];
            if (v8[10] == 0) {
              v23[v7 + 10] = 0;
              goto LABEL_28;
            }
            v13[10] = v8[10];
            v14 = &v23[v7];
            if (v8[11] == 0) {
              v14[11] = 0;
              goto LABEL_28;
            }
            v14[11] = v8[11];
            if (v8[12] == 0) {
              v23[v7 + 12] = 0;
              goto LABEL_28;
            }
            v14[12] = v8[12];
            v15 = &v23[v7];
            if (v8[13] == 0) {
              v15[13] = 0;
              goto LABEL_28;
            }
            v15[13] = v8[13];
            if (v8[14] == 0) {
              v23[v7 + 14] = 0;
              goto LABEL_28;
            }
            v15[14] = v8[14];
            v16 = &v23[v7];
            if (v8[15] == 0) {
              v16[15] = 0;
              goto LABEL_28;
            }
            v16[15] = v8[15];
            v17 = *((unsigned __int8*)v8 + 16);
            if (v17 == 0) {
              break;
            }
            v7 += 17;
            v16[16] = v17;
            if ((_DWORD)v7 == 255) {
              goto LABEL_27;
            }
          }
          v23[v7 + 16] = 0;
        }
      LABEL_28:
        result = GameSubquestData_125b8e0(v4, (__int64)v23);
        if (result != 0) {
          result = GameSubquestData_125dfc0_alt1(result, result);
        }
      }
      ++v5;
    } while (v5 != v2);
    if (*a2 != 0) {
      result = GameSubquestData_125bbc0(GameData_21c9718);
      v18 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v18 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      }
      v19 = GameData_21c9718 + 136LL * v18;
      v20 = *(__int64**)(v19 + 72);
      for (i = *(__int64**)(v19 + 80); v20 != i;
           result = GameSubquestData_1257620(v22, 0)) {
        v22 = *v20++;
      }
    }
  }
  return result;
}

void GameSubquestData_125dfc0(__int64 a1, unsigned __int8* a2)
{
  unsigned int v2;
  _QWORD* v4;
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

  v2 = a2[9];
  if (v2 > 2) {
    goto LABEL_33;
  }
  if (*(_BYTE*)(*(_QWORD*)a2 + 112LL) == 5) {
    GameRoutine_682bc0(&v15, &GameData_1aed6ab);
    if (v15 != 0) {
      v4 = *(_QWORD**)(GameData_21ca310 + 56);
      if (v4 != nullptr) {
        v5 = 250;
        while (1) {
          v6 = v4[55];
          if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && v4[49] == v15) {
            goto LABEL_28;
          }
          v7 = v4[333];
          if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && v4[327] == v15) {
            v4 += 278;
            goto LABEL_28;
          }
          v8 = v4[611];
          if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v4[605] == v15) {
            break;
          }
          v9 = v4[889];
          if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v4[883] == v15) {
            v11 = 6672;
            goto LABEL_27;
          }
          v10 = v4[1167];
          if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && v4[1161] == v15) {
            v11 = 8896;
          LABEL_27:
            v4 = (_QWORD*)((char*)v4 + v11);
            goto LABEL_28;
          }
          v4 += 1390;
          v5 -= 5;
          if (v5 == 0) {
            goto LABEL_23;
          }
        }
        v11 = 4448;
        goto LABEL_27;
      }
    }
    else {
    LABEL_23:
      v4 = nullptr;
    }
  LABEL_28:
    GameRoutine_1260d00(a2, v4);
    v12 = *(_QWORD*)a2;
    if (*(_BYTE*)(*(_QWORD*)a2 + 112LL) == 5 && *(_WORD*)(v12 + 552) != 0) {
      v13 = 8LL * *(unsigned __int16*)(v12 + 552);
      v14 = 0;
      do {
        v17 = *(_QWORD*)(*(_QWORD*)(v12 + 560) + v14);
        v16 = game_HashString(v17);
        game_VariableManager_SetFlag(&v16, 1);
        v14 += 8;
      } while (v13 != v14);
    }
    v2 = a2[9];
  LABEL_33:
    if (v2 > 3) {
      return;
    }
  }
  a2[9] = 4;
  GameRoutine_125e1a0(a2);
}

void GameSubquestData_125e1a0(__int64* a1)
{
  __int64 v2;
  int v3;
  unsigned int v4;
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
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  const char* v23;
  __int64 v24;
  _QWORD v25[2];
  struct {
    __int64* v26;
    __int64* v27;
  } v26_;

  if ((*(_BYTE*)(*a1 + 161) & 4) == 0) {
    game_12645e0_alt1(a1);
    v2 = *a1;
    if (*(_WORD*)(*a1 + 428) != 0) {
      GameRoutine_8b03f0_alt1(0, *(unsigned __int16*)(*a1 + 428), 0);
      v2 = *a1;
    }
    v3 = *(unsigned __int8*)(v2 + 112);
    v4 = *(unsigned __int8*)(v2 + 113) - 3;
    if (v3 == 7 && v4 <= 1) {
      GameRoutine_682bc0_alt1(v25, (__int64)&GameData_1a8d218);
      if (v25[0] != 0) {
        v6 = *(_QWORD**)(GameData_21ca310 + 56);
        if (v6 != nullptr) {
          v7 = 250;
          while (1) {
            v8 = v6[55];
            if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v6[49] == v25[0]) {
              goto LABEL_33;
            }
            v9 = v6[333];
            if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v6[327] == v25[0]) {
              v6 += 278;
              goto LABEL_33;
            }
            v10 = v6[611];
            if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && v6[605] == v25[0]) {
              break;
            }
            v11 = v6[889];
            if (v11 != 0 && *(_BYTE*)(v11 + 16) != 9 && v6[883] == v25[0]) {
              v13 = 6672;
              goto LABEL_32;
            }
            v12 = v6[1167];
            if (v12 != 0 && *(_BYTE*)(v12 + 16) != 9 && v6[1161] == v25[0]) {
              v13 = 8896;
            LABEL_32:
              v6 = (_QWORD*)((char*)v6 + v13);
              goto LABEL_33;
            }
            v6 += 1390;
            v7 -= 5;
            if (v7 == 0) {
              goto LABEL_28;
            }
          }
          v13 = 4448;
          goto LABEL_32;
        }
      }
      else {
      LABEL_28:
        v6 = nullptr;
      }
    LABEL_33:
      GameSubquestData_1260d00((__int64)a1, (__int64)v6);
      v14 = *a1;
      if (*(_BYTE*)(*a1 + 112) == 5 && *(_WORD*)(v14 + 552) != 0) {
        v15 = 8LL * *(unsigned __int16*)(v14 + 552);
        v16 = 0;
        do {
          v26_.v27 = *(__int64**)(*(_QWORD*)(v14 + 560) + v16);
          v26_.v26 = (__int64*)game_HashString_alt1((__int64)v26_.v27);
          game_VariableManager_SetFlag_alt1((__int64)&v26_.v26, 1);
          v16 += 8;
        } while (v15 != v16);
      }
    }
    GameSubquestData_1264da0((void*)((__int64*)&v26_.v26), a1);
    v17 = (__int64)v26_.v26;
    v18 = (__int64)v26_.v27;
    if (v26_.v26 != v26_.v27) {
      v19 = v26_.v26;
      do {
        v20 = *v19++;
        v25[1] = v20;
        v25[0] = game_HashString_alt1(v20);
        game_VariableManager_SetFlag_alt1((__int64)v25, 1);
      } while (v19 != (__int64*)v18);
    }
    if (v17 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v17);
    }
    v22 = *(_QWORD*)(*a1 + 208);
    if (v22 != 0) {
      v23 = *(const char**)(v22 + 8);
      if (game_GameModeData_instance_ != 0) {
        v24 = GameSubquestData_125b8e0_alt2(
            (_QWORD*)GameData_21c9718, v23,
            *(_BYTE*)(game_GameModeData_instance_ + 15));
        if (v24 == 0) {
          return;
        }
      }
      else {
        v24 = GameSubquestData_125b8e0_alt2((_QWORD*)GameData_21c9718, v23, 0);
        if (v24 == 0) {
          return;
        }
      }
      if ((*(_BYTE*)(v24 + 9) & 0xFE) == 2) {
        *(_WORD*)(v24 + 9) = 261;
      }
    }
  }
}

void GameSubquestData_125e460(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  char* v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  float v27;
  __int64 v28;
  __int64 v29;

  v4 = game_9a28e0(15);
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v4);
    if (v5 != 0 && *(_DWORD*)(v5 + 32) != 0) {
      v6 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v6 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      }
      v7 = a1 + 136LL * v6;
      v8 = *(__int64**)(v7 + 72);
      v9 = *(__int64**)(v7 + 80);
      if (v8 != v9) {
        v29 = a2;
        v10 = 0;
        v11 = nullptr;
        v12 = 0;
        v13 = (__int64*)fw_memory_g_heap_manager_ptr;
        do {
          v14 = *v8;
          if ((*(_BYTE*)(*v8 + 11) & 6) == 2) {
            if ((unsigned __int64)v11 < v12) {
              *(_QWORD*)v11 = v14;
              v11 += 8;
            }
            else {
              v15 = &v11[-v10];
              v16 = (__int64)&v11[-v10] >> 3;
              v17 = v16 + 1;
              if ((unsigned __int64)(v16 + 1) >> 61 != 0) {
                GameRoutine_1265540_alt1();
              }
              if ((__int64)(v12 - v10) >> 2 > v17) {
                v17 = (__int64)(v12 - v10) >> 2;
              }
              if (v12 - v10 >= 0x7FFFFFFFFFFFFFF8LL) {
                v18 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v18 = v17;
              }
              if (v18 != 0) {
                if (v18 >> 61 != 0) {
                  GameRoutine_60a210_alt1();
                }
                v19 = fw_memory_HeapManager_Allocate_alt1(*v13, 8 * v18, 16, 0);
              }
              else {
                v19 = 0;
              }
              v12 = v19 + 8 * v18;
              v20 = (unsigned __int64)&v11[-v10];
              v21 = (__int64)&v15[v19 + -8 * v16];
              *(_QWORD*)&v15[v19] = v14;
              v11 = &v15[v19 + 8];
              memcpy_alt1(v21, v10, v20);
              if (v10 != 0) {
                v22 = 128;
                if (*(_QWORD*)(*v13 + 200) == 0) {
                  v22 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v13 + v22, v10);
              }
              v10 = v21;
            }
          }
          ++v8;
        } while (v8 != v9);
        if (v11 == (char*)v10) {
          if (v11 != nullptr) {
            v28 = 128;
            if (*(_QWORD*)(*v13 + 200) == 0) {
              v28 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v13 + v28, v10);
          }
        }
        else {
          v23 = fw_memory_HeapManager_Allocate_alt1(*v13, 256, 16, 0);
          v24 = GameData_212c608[0];
          *(_QWORD*)(v23 + 96) = 0;
          *(_QWORD*)(v23 + 104) = 0;
          *(_QWORD*)(v23 + 112) = 0;
          *(_QWORD*)(v23 + 120) = 0;
          *(_QWORD*)(v23 + 128) = 0;
          *(_WORD*)(v23 + 136) = 0;
          *(_QWORD*)(v23 + 16) = 0;
          *(_QWORD*)(v23 + 24) = "NULL";
          *(_QWORD*)(v23 + 138) = 0;
          *(_QWORD*)(v23 + 144) = 0;
          *(_QWORD*)(v23 + 32) = 0;
          *(_QWORD*)(v23 + 40) = 0;
          *(_QWORD*)(v23 + 48) = 0;
          *(_QWORD*)(v23 + 56) = 0;
          *(_QWORD*)(v23 + 64) = 0;
          *(_QWORD*)(v23 + 72) = 0;
          *(_QWORD*)(v23 + 80) = 0;
          *(_QWORD*)(v23 + 88) = 0;
          *(_QWORD*)v23 = v24 + 16;
          *(_QWORD*)(v23 + 8) = 0;
          game_ProcInst_Register_alt2(v23);
          *(_QWORD*)(v23 + 152) = v10;
          *(_QWORD*)(v23 + 160) = v11;
          *(_QWORD*)(v23 + 168) = v12;
          *(_QWORD*)(v23 + 176) = 0;
          *(_QWORD*)(v23 + 184) = 0;
          *(_QWORD*)(v23 + 192) = 0;
          *(_QWORD*)(v23 + 200) = 0;
          *(_QWORD*)(v23 + 208) = 0;
          *(_QWORD*)(v23 + 216) = 0;
          *(_QWORD*)(v23 + 224) = 0;
          *(_QWORD*)(v23 + 232) = 0;
          *(_QWORD*)(v23 + 240) = 0;
          *(_QWORD*)(v23 + 248) = 0;
          *(_QWORD*)v23 = game_GameSubquestData_ProcRewardForSharedComp_vtable;
          GameHr_8679c0();
          v25 = game_ProcGameSkipView_instance_;
          if (game_ProcGameSkipView_instance_ != 0) {
            v26 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
            if ((v26 & 0x10) == 0) {
              v27 = *(float*)(game_ProcGameSkipView_instance_ + 224);
              *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
                  v26 & 0xFFFFFFE2 | 1;
              if (v27 > 0x0.0p+0f) {
                *(_DWORD*)(v25 + 224) = 0;
              }
            }
          }
          ProcInst_657850_alt1(v23, (__int64)&GameData_2170710,
                               "ProcRewardForSharedComp", 1, v29);
        }
      }
    }
  }
}

__int64 GameSubquestData_125e760(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64* v8;
  __int64 v9;
  unsigned int* v10;
  unsigned int* v11;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned int** v18;
  __int64 v19;
  __int64* v20;
  signed __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  unsigned int* v32;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  struct {
    _QWORD* v40;
    __int64 v41;
    _QWORD* v42;
  } v40_;

  v3 = a2;
  if (a3 != nullptr) {
    a3[1] = *a3;
    v5 = *(unsigned __int16*)(*(_QWORD*)a2 + 128LL);
    if (*(_WORD*)(*(_QWORD*)a2 + 128LL) != 0) {
      v6 = 8;
      v7 = 0;
      v8 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v10 = game_gmap_SpotMgr_FindSpot_alt1(
            *(unsigned int**)(*(_QWORD*)(*(_QWORD*)v3 + 136LL) + v6));
        if (v10 != nullptr) {
          v11 = v10;
          if (*((_BYTE*)v10 + 176) != 3 || *((_BYTE*)v10 + 112) != 0) {
            v13 = *((_QWORD*)v10 + 15);
            v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v8, 8, 16, 0);
            v40_.v40 = v14;
            *v14 = v13;
            v40_.v41 = (__int64)(v14 + 1);
            v40_.v42 = v14 + 1;
            SpotMgr_1332f00((__int64)&v40_.v40);
            if (v40_.v40 != nullptr) {
              v15 = *v8;
              v40_.v41 = (__int64)v40_.v40;
              if (*(_QWORD*)(v15 + 200) != 0) {
                v16 = 128;
              }
              else {
                v16 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(v15 + v16, (__int64)v40_.v40);
            }
            v18 = (unsigned int**)a3[1];
            v17 = a3[2];
            if ((unsigned __int64)v18 < v17) {
              *v18 = v11;
              v9 = (__int64)(v18 + 1);
            }
            else {
              v19 = *a3;
              v20 = v8;
              v21 = (signed __int64)v18 - *a3;
              v22 = (v21 >> 3) + 1;
              if (v22 >> 61 != 0) {
                GameRoutine_12680d0_alt1();
              }
              v23 = v17 - v19;
              if (v23 >> 2 > v22) {
                v22 = v23 >> 2;
              }
              if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
                v24 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v24 = v22;
              }
              if (v24 != 0) {
                if (v24 >> 61 != 0) {
                  GameRoutine_60a210_alt1();
                }
                v25 = fw_memory_HeapManager_Allocate_alt1(*v20, 8 * v24, 16, 0);
              }
              else {
                v25 = 0;
              }
              v26 = v25 + 8 * v24;
              v27 = v25 + v21 - 8 * (v21 >> 3);
              *(_QWORD*)(v25 + v21) = v11;
              v9 = v25 + v21 + 8;
              memcpy_alt1(v27, v19, v21);
              *a3 = v27;
              a3[1] = v9;
              a3[2] = v26;
              if (v19 != 0) {
                v8 = v20;
                if (*(_QWORD*)(*v20 + 200) != 0) {
                  v28 = 128;
                }
                else {
                  v28 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v20 + v28, v19);
                v3 = a2;
              }
              else {
                v8 = v20;
                v3 = a2;
              }
            }
            v7 = 1;
            a3[1] = v9;
          }
        }
        --v5;
        v6 += 16;
      } while (v5 != 0);
      return v7 & 1;
    }
  LABEL_48:
    v7 = 0;
    return v7 & 1;
  }
  v29 = *(unsigned __int16*)(*(_QWORD*)a2 + 128LL);
  if (*(_WORD*)(*(_QWORD*)a2 + 128LL) == 0) {
    goto LABEL_48;
  }
  v30 = 8;
  v7 = 0;
  v31 = (__int64*)fw_memory_g_heap_manager_ptr;
  do {
    v32 = game_gmap_SpotMgr_FindSpot_alt1(
        *(unsigned int**)(*(_QWORD*)(*(_QWORD*)v3 + 136LL) + v30));
    if (v32 != nullptr &&
        (*((_BYTE*)v32 + 176) != 3 || *((_BYTE*)v32 + 112) != 0)) {
      v34 = *((_QWORD*)v32 + 15);
      v35 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v31, 8, 16, 0);
      v40_.v40 = v35;
      *v35 = v34;
      v40_.v41 = (__int64)(v35 + 1);
      v40_.v42 = v35 + 1;
      SpotMgr_1332f00((__int64)&v40_.v40);
      if (v40_.v40 != nullptr) {
        v36 = *v31;
        v40_.v41 = (__int64)v40_.v40;
        if (*(_QWORD*)(v36 + 200) != 0) {
          v37 = 128;
        }
        else {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(v36 + v37, (__int64)v40_.v40);
      }
      v7 = 1;
    }
    --v29;
    v30 += 16;
  } while (v29 != 0);
  return v7 & 1;
}

__int64 GameSubquestData_125ea20()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;

  v0 = game_HashString(&GameData_1ae67be);
  if (v0 == 0) {
    return 0;
  }
  v1 = *(_QWORD*)(GameData_21ca050 + 96);
  if (v1 == 0 || *(_QWORD*)(GameData_21ca050 + 112) == 0) {
    return 0;
  }
  v3 = v1 - 1;
  if ((v1 & (v1 - 1)) != 0) {
    v4 = v0;
    if (v0 >= v1) {
      v4 = v0 % v1;
    }
  }
  else {
    v4 = v3 & v0;
  }
  v5 = *(_QWORD**)(*(_QWORD*)(GameData_21ca050 + 88) + 8 * v4);
  if (v5 == nullptr) {
    return 0;
  }
  v6 = (_QWORD*)*v5;
  if (v6 == nullptr) {
    return 0;
  }
  if ((v1 & v3) == 0) {
    while (1) {
      v9 = v6[1];
      if (v9 == v0) {
        if (v6[2] == v0) {
          goto LABEL_26;
        }
      }
      else if ((v9 & v3) != v4) {
        return 0;
      }
      v6 = (_QWORD*)*v6;
      v8 = 0;
      if (v6 == nullptr) {
        return v8;
      }
    }
  }
  while (1) {
    v7 = v6[1];
    if (v7 == v0) {
      break;
    }
    if (v7 >= v1) {
      v7 %= v1;
    }
    if (v7 != v4) {
      return 0;
    }
  LABEL_15:
    v6 = (_QWORD*)*v6;
    if (v6 == nullptr) {
      return 0;
    }
  }
  if (v6[2] != v0) {
    goto LABEL_15;
  }

LABEL_26:
  v10 = v6[3];
  if (v10 == 0) {
    return 0;
  }
  v11 = *(__int64***)(v10 + 40);
  v12 = *v11;
  v13 = v11[1];
  if (*v11 == v13) {
    return 0;
  }
  v14 = 0x7FFFFFFF;
  v15 = 0;
  do {
    v16 = *v12;
    if (*(_WORD*)(*v12 + 40) != 0) {
      v17 = 8LL * *(unsigned __int16*)(*v12 + 40);
      v18 = 0;
      while (1) {
        v19 = *(_QWORD*)(v16 + 48);
        v23 = *(_QWORD*)(v19 + v18);
        v22 = game_HashString(v23);
        if ((game_GameModeData_instance_ == 0 ||
             (v20 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), &v22)) == 0 ||
             *(_DWORD*)(v20 + 32) == 0) &&
            v14 > *(unsigned __int8*)(v16 + 32)) {
          break;
        }
        v18 += 8;
        if (v17 == v18) {
          goto LABEL_30;
        }
      }
      v15 = *(_QWORD*)(v19 + v18);
      v14 = *(unsigned __int8*)(v16 + 32);
    }
  LABEL_30:
    ++v12;
  } while (v12 != v13);
  v22 = v15;
  if (v15 == 0) {
    return 0;
  }
  return JobFile_676ef0(&v22);
}

void GameSubquestData_125ec20(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  char v9;
  char v10;
  int v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v19[2];
    _QWORD* v20;
    __int64 v21;
    int v22;
  } v19_;

  v19_.v20 = nullptr;
  v19_.v21 = 0;
  v19_.v19[0] = 0;
  v19_.v19[1] = 0;
  v19_.v22 = 1065353216;
  if (a1 != a2) {
    v3 = a1;
    v4 = game_TransporterConst_List_instance__ptr[0];
    do {
      v5 = *(unsigned int*)(v3 + 8);
      if ((v5 & 0x80000000) == 0) {
        if (*(_QWORD*)v3 != 0) {
          v6 = *(_QWORD*)v3 + 8 * v5;
          if (*(_WORD*)(v6 + 828) != 0) {
            *(_QWORD*)(v6 + 828) = 0;
            game_8f7120((float*)v19_.v19, (__int64*)v3, (__int64*)v3);
          }
        }
        else if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 8LL) +
                           12LL * (unsigned int)v5 + 4) != 0) {
          TransporterConst_89cb30((void*)((__int64)&v18), v5,
                                  *(_DWORD*)(v3 + 12));
        }
      }
      v3 += 16;
    } while (v3 != a2);
    v7 = v19_.v20;
    if (v19_.v20 != nullptr) {
      do {
        v8 = v7[2];
        v9 = game_UnitItemList_Sort_alt1(v8 + 828, 0, 6);
        v10 = game_UnitItemList_Sort_alt1(v8 + 828, 6u, 24);
        if ((v9 & 1) != 0 || (v10 & 1) != 0) {
          v11 = *(_DWORD*)(v8 + 416);
          if ((v11 & 0x10000000) == 0) {
            *(_DWORD*)(v8 + 416) = v11 | 0x10000000;
            game_6c51e0(v8);
            GameRoutine_6c6da0_alt1(v8);
            game_6c6ec0(v8);
            *(_DWORD*)(v8 + 416) &= ~0x10000000u;
          }
        }
        v7 = (_QWORD*)*v7;
      } while (v7 != nullptr);
      v12 = v19_.v20;
      if (v19_.v20 != nullptr) {
        v13 = fw_memory_g_heap_manager_ptr;
        do {
          v14 = (_QWORD*)*v12;
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v15, (__int64)v12);
          v12 = v14;
        } while (v14 != nullptr);
      }
    }
    v16 = v19_.v19[0];
    v19_.v19[0] = 0;
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
}

__int64 GameSubquestData_Unknown8(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  __int64 v16;
  char v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  unsigned int* v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* i;
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
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64* j;
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
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64* k;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  __int64* m;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  int v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64* v112;
  __int64* n;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  int v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64* v133;
  __int64* ii;
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
  int v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64* v154;
  __int64* jj;
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
  int v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64* v175;
  __int64* kk;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  int v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  unsigned __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64* v196;
  __int64* mm;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  int v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  unsigned __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64* v217;
  __int64* nn;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  int v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  unsigned __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64* v238;
  __int64* i1;
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
  int v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;

  v3 = *(_QWORD*)(a2 + 8);
  v2 = a2 + 8;
  v4 = *(_DWORD*)(result + 24);
  v5 = (int*)(v2 + 12);
  v6 = *(int*)(v2 + 12);
  *(_DWORD*)(v2 + 12) = v6 + 1;
  *(_BYTE*)(v3 + v6) = v4;
  v7 = *(int*)(v2 + 12);
  *(_DWORD*)(v2 + 12) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v7) = BYTE1(v4);
  v8 = *(int*)(v2 + 12);
  *(_DWORD*)(v2 + 12) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v8) = BYTE2(v4);
  v9 = *(int*)(v2 + 12);
  *(_DWORD*)(v2 + 12) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v9) = HIBYTE(v4);
  if (*(_DWORD*)(result + 24) != 0) {
    v10 = 0;
    v11 = 0;
    do {
      v21 = *(_QWORD*)(result + 16);
      v22 = *(unsigned int**)(v21 + v10);
      v23 = *v5;
      if (v22 != nullptr) {
        v24 = *v22;
        *v5 = v23 + 1;
        *(_BYTE*)(*(_QWORD*)v2 + v23) = v24;
        v25 = *v5;
        *v5 = v25 + 1;
        *(_BYTE*)(*(_QWORD*)v2 + v25) = BYTE1(v24);
        v26 = HIWORD(v24);
        LODWORD(v22) = HIBYTE(v24);
        v27 = *v5;
        *v5 = v27 + 1;
        *(_BYTE*)(*(_QWORD*)v2 + v27) = v26;
      }
      else {
        *v5 = v23 + 1;
        *(_BYTE*)(*(_QWORD*)v2 + v23) = 0;
        v12 = *v5;
        *v5 = v12 + 1;
        *(_BYTE*)(*(_QWORD*)v2 + v12) = 0;
        v13 = *v5;
        *v5 = v13 + 1;
        *(_BYTE*)(*(_QWORD*)v2 + v13) = 0;
      }
      v14 = *v5;
      v15 = (_BYTE*)(v21 + v10);
      ++v11;
      v10 += 16;
      *v5 = v14 + 1;
      *(_BYTE*)(*(_QWORD*)v2 + v14) = (_BYTE)v22;
      v16 = *v5;
      v17 = v15[8];
      *v5 = v16 + 1;
      *(_BYTE*)(*(_QWORD*)v2 + v16) = v17;
      v18 = *v5;
      v19 = v15[9];
      *v5 = v18 + 1;
      *(_BYTE*)(*(_QWORD*)v2 + v18) = v19;
      v20 = *v5;
      LOBYTE(v15) = v15[11];
      *v5 = v20 + 1;
      *(_BYTE*)(*(_QWORD*)v2 + v20) = (_BYTE)v15;
    } while (v11 < *(unsigned int*)(result + 24));
  }
  v28 = *v5;
  v29 = *(_QWORD*)(result + 1440) - *(_QWORD*)(result + 1432);
  *v5 = v28 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v28) = v29 >> 3;
  v30 = *v5;
  *v5 = v30 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v30) = v29 >> 11;
  v31 = *v5;
  *v5 = v31 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v31) = v29 >> 19;
  v32 = *v5;
  *v5 = v32 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v32) = v29 >> 27;
  v33 = *(__int64**)(result + 1432);
  for (i = *(__int64**)(result + 1440); v33 != i;
       *(_BYTE*)(*(_QWORD*)v2 + v43) = HIBYTE(v36)) {
    v35 = *v5;
    v36 = *v33++;
    *v5 = v35 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v35) = v36;
    v37 = *v5;
    *v5 = v37 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v37) = BYTE1(v36);
    v38 = *v5;
    *v5 = v38 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v38) = BYTE2(v36);
    v39 = *v5;
    *v5 = v39 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v39) = BYTE3(v36);
    v40 = *v5;
    *v5 = v40 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v40) = BYTE4(v36);
    v41 = *v5;
    *v5 = v41 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v41) = BYTE5(v36);
    v42 = *v5;
    *v5 = v42 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v42) = BYTE6(v36);
    v43 = *v5;
    *v5 = v43 + 1;
  }
  v44 = *v5;
  v45 = *(_QWORD*)(result + 176) - *(_QWORD*)(result + 168);
  *v5 = v44 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v44) = v45 >> 3;
  v46 = *v5;
  *v5 = v46 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v46) = v45 >> 11;
  v47 = *v5;
  *v5 = v47 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v47) = v45 >> 19;
  v48 = *v5;
  *v5 = v48 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v48) = v45 >> 27;
  v49 = *(__int64**)(result + 168);
  for (j = *(__int64**)(result + 176); v49 != j;
       *(_BYTE*)(*(_QWORD*)v2 + v59) = HIBYTE(v52)) {
    v51 = *v5;
    v52 = *v49++;
    *v5 = v51 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v51) = v52;
    v53 = *v5;
    *v5 = v53 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v53) = BYTE1(v52);
    v54 = *v5;
    *v5 = v54 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v54) = BYTE2(v52);
    v55 = *v5;
    *v5 = v55 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v55) = BYTE3(v52);
    v56 = *v5;
    *v5 = v56 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v56) = BYTE4(v52);
    v57 = *v5;
    *v5 = v57 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v57) = BYTE5(v52);
    v58 = *v5;
    *v5 = v58 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v58) = BYTE6(v52);
    v59 = *v5;
    *v5 = v59 + 1;
  }
  v60 = *v5;
  v61 = *(_DWORD*)(result + 200);
  *v5 = v60 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v60) = v61;
  v62 = *v5;
  *v5 = v62 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v62) = BYTE1(v61);
  v63 = *v5;
  *v5 = v63 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v63) = BYTE2(v61);
  v64 = *v5;
  *v5 = v64 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v64) = HIBYTE(v61);
  v65 = *v5;
  v66 = *(_QWORD*)(result + 312) - *(_QWORD*)(result + 304);
  *v5 = v65 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v65) = v66 >> 3;
  v67 = *v5;
  *v5 = v67 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v67) = v66 >> 11;
  v68 = *v5;
  *v5 = v68 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v68) = v66 >> 19;
  v69 = *v5;
  *v5 = v69 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v69) = v66 >> 27;
  v70 = *(__int64**)(result + 304);
  for (k = *(__int64**)(result + 312); v70 != k;
       *(_BYTE*)(*(_QWORD*)v2 + v80) = HIBYTE(v73)) {
    v72 = *v5;
    v73 = *v70++;
    *v5 = v72 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v72) = v73;
    v74 = *v5;
    *v5 = v74 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v74) = BYTE1(v73);
    v75 = *v5;
    *v5 = v75 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v75) = BYTE2(v73);
    v76 = *v5;
    *v5 = v76 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v76) = BYTE3(v73);
    v77 = *v5;
    *v5 = v77 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v77) = BYTE4(v73);
    v78 = *v5;
    *v5 = v78 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v78) = BYTE5(v73);
    v79 = *v5;
    *v5 = v79 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v79) = BYTE6(v73);
    v80 = *v5;
    *v5 = v80 + 1;
  }
  v81 = *v5;
  v82 = *(_DWORD*)(result + 336);
  *v5 = v81 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v81) = v82;
  v83 = *v5;
  *v5 = v83 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v83) = BYTE1(v82);
  v84 = *v5;
  *v5 = v84 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v84) = BYTE2(v82);
  v85 = *v5;
  *v5 = v85 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v85) = HIBYTE(v82);
  v86 = *v5;
  v87 = *(_QWORD*)(result + 448) - *(_QWORD*)(result + 440);
  *v5 = v86 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v86) = v87 >> 3;
  v88 = *v5;
  *v5 = v88 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v88) = v87 >> 11;
  v89 = *v5;
  *v5 = v89 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v89) = v87 >> 19;
  v90 = *v5;
  *v5 = v90 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v90) = v87 >> 27;
  v91 = *(__int64**)(result + 440);
  for (m = *(__int64**)(result + 448); v91 != m;
       *(_BYTE*)(*(_QWORD*)v2 + v101) = HIBYTE(v94)) {
    v93 = *v5;
    v94 = *v91++;
    *v5 = v93 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v93) = v94;
    v95 = *v5;
    *v5 = v95 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v95) = BYTE1(v94);
    v96 = *v5;
    *v5 = v96 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v96) = BYTE2(v94);
    v97 = *v5;
    *v5 = v97 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v97) = BYTE3(v94);
    v98 = *v5;
    *v5 = v98 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v98) = BYTE4(v94);
    v99 = *v5;
    *v5 = v99 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v99) = BYTE5(v94);
    v100 = *v5;
    *v5 = v100 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v100) = BYTE6(v94);
    v101 = *v5;
    *v5 = v101 + 1;
  }
  v102 = *v5;
  v103 = *(_DWORD*)(result + 472);
  *v5 = v102 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v102) = v103;
  v104 = *v5;
  *v5 = v104 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v104) = BYTE1(v103);
  v105 = *v5;
  *v5 = v105 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v105) = BYTE2(v103);
  v106 = *v5;
  *v5 = v106 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v106) = HIBYTE(v103);
  v107 = *v5;
  v108 = *(_QWORD*)(result + 584) - *(_QWORD*)(result + 576);
  *v5 = v107 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v107) = v108 >> 3;
  v109 = *v5;
  *v5 = v109 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v109) = v108 >> 11;
  v110 = *v5;
  *v5 = v110 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v110) = v108 >> 19;
  v111 = *v5;
  *v5 = v111 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v111) = v108 >> 27;
  v112 = *(__int64**)(result + 576);
  for (n = *(__int64**)(result + 584); v112 != n;
       *(_BYTE*)(*(_QWORD*)v2 + v122) = HIBYTE(v115)) {
    v114 = *v5;
    v115 = *v112++;
    *v5 = v114 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v114) = v115;
    v116 = *v5;
    *v5 = v116 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v116) = BYTE1(v115);
    v117 = *v5;
    *v5 = v117 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v117) = BYTE2(v115);
    v118 = *v5;
    *v5 = v118 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v118) = BYTE3(v115);
    v119 = *v5;
    *v5 = v119 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v119) = BYTE4(v115);
    v120 = *v5;
    *v5 = v120 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v120) = BYTE5(v115);
    v121 = *v5;
    *v5 = v121 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v121) = BYTE6(v115);
    v122 = *v5;
    *v5 = v122 + 1;
  }
  v123 = *v5;
  v124 = *(_DWORD*)(result + 608);
  *v5 = v123 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v123) = v124;
  v125 = *v5;
  *v5 = v125 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v125) = BYTE1(v124);
  v126 = *v5;
  *v5 = v126 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v126) = BYTE2(v124);
  v127 = *v5;
  *v5 = v127 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v127) = HIBYTE(v124);
  v128 = *v5;
  v129 = *(_QWORD*)(result + 720) - *(_QWORD*)(result + 712);
  *v5 = v128 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v128) = v129 >> 3;
  v130 = *v5;
  *v5 = v130 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v130) = v129 >> 11;
  v131 = *v5;
  *v5 = v131 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v131) = v129 >> 19;
  v132 = *v5;
  *v5 = v132 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v132) = v129 >> 27;
  v133 = *(__int64**)(result + 712);
  for (ii = *(__int64**)(result + 720); v133 != ii;
       *(_BYTE*)(*(_QWORD*)v2 + v143) = HIBYTE(v136)) {
    v135 = *v5;
    v136 = *v133++;
    *v5 = v135 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v135) = v136;
    v137 = *v5;
    *v5 = v137 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v137) = BYTE1(v136);
    v138 = *v5;
    *v5 = v138 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v138) = BYTE2(v136);
    v139 = *v5;
    *v5 = v139 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v139) = BYTE3(v136);
    v140 = *v5;
    *v5 = v140 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v140) = BYTE4(v136);
    v141 = *v5;
    *v5 = v141 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v141) = BYTE5(v136);
    v142 = *v5;
    *v5 = v142 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v142) = BYTE6(v136);
    v143 = *v5;
    *v5 = v143 + 1;
  }
  v144 = *v5;
  v145 = *(_DWORD*)(result + 744);
  *v5 = v144 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v144) = v145;
  v146 = *v5;
  *v5 = v146 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v146) = BYTE1(v145);
  v147 = *v5;
  *v5 = v147 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v147) = BYTE2(v145);
  v148 = *v5;
  *v5 = v148 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v148) = HIBYTE(v145);
  v149 = *v5;
  v150 = *(_QWORD*)(result + 856) - *(_QWORD*)(result + 848);
  *v5 = v149 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v149) = v150 >> 3;
  v151 = *v5;
  *v5 = v151 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v151) = v150 >> 11;
  v152 = *v5;
  *v5 = v152 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v152) = v150 >> 19;
  v153 = *v5;
  *v5 = v153 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v153) = v150 >> 27;
  v154 = *(__int64**)(result + 848);
  for (jj = *(__int64**)(result + 856); v154 != jj;
       *(_BYTE*)(*(_QWORD*)v2 + v164) = HIBYTE(v157)) {
    v156 = *v5;
    v157 = *v154++;
    *v5 = v156 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v156) = v157;
    v158 = *v5;
    *v5 = v158 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v158) = BYTE1(v157);
    v159 = *v5;
    *v5 = v159 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v159) = BYTE2(v157);
    v160 = *v5;
    *v5 = v160 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v160) = BYTE3(v157);
    v161 = *v5;
    *v5 = v161 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v161) = BYTE4(v157);
    v162 = *v5;
    *v5 = v162 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v162) = BYTE5(v157);
    v163 = *v5;
    *v5 = v163 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v163) = BYTE6(v157);
    v164 = *v5;
    *v5 = v164 + 1;
  }
  v165 = *v5;
  v166 = *(_DWORD*)(result + 880);
  *v5 = v165 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v165) = v166;
  v167 = *v5;
  *v5 = v167 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v167) = BYTE1(v166);
  v168 = *v5;
  *v5 = v168 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v168) = BYTE2(v166);
  v169 = *v5;
  *v5 = v169 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v169) = HIBYTE(v166);
  v170 = *v5;
  v171 = *(_QWORD*)(result + 992) - *(_QWORD*)(result + 984);
  *v5 = v170 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v170) = v171 >> 3;
  v172 = *v5;
  *v5 = v172 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v172) = v171 >> 11;
  v173 = *v5;
  *v5 = v173 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v173) = v171 >> 19;
  v174 = *v5;
  *v5 = v174 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v174) = v171 >> 27;
  v175 = *(__int64**)(result + 984);
  for (kk = *(__int64**)(result + 992); v175 != kk;
       *(_BYTE*)(*(_QWORD*)v2 + v185) = HIBYTE(v178)) {
    v177 = *v5;
    v178 = *v175++;
    *v5 = v177 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v177) = v178;
    v179 = *v5;
    *v5 = v179 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v179) = BYTE1(v178);
    v180 = *v5;
    *v5 = v180 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v180) = BYTE2(v178);
    v181 = *v5;
    *v5 = v181 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v181) = BYTE3(v178);
    v182 = *v5;
    *v5 = v182 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v182) = BYTE4(v178);
    v183 = *v5;
    *v5 = v183 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v183) = BYTE5(v178);
    v184 = *v5;
    *v5 = v184 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v184) = BYTE6(v178);
    v185 = *v5;
    *v5 = v185 + 1;
  }
  v186 = *v5;
  v187 = *(_DWORD*)(result + 1016);
  *v5 = v186 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v186) = v187;
  v188 = *v5;
  *v5 = v188 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v188) = BYTE1(v187);
  v189 = *v5;
  *v5 = v189 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v189) = BYTE2(v187);
  v190 = *v5;
  *v5 = v190 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v190) = HIBYTE(v187);
  v191 = *v5;
  v192 = *(_QWORD*)(result + 1128) - *(_QWORD*)(result + 1120);
  *v5 = v191 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v191) = v192 >> 3;
  v193 = *v5;
  *v5 = v193 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v193) = v192 >> 11;
  v194 = *v5;
  *v5 = v194 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v194) = v192 >> 19;
  v195 = *v5;
  *v5 = v195 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v195) = v192 >> 27;
  v196 = *(__int64**)(result + 1120);
  for (mm = *(__int64**)(result + 1128); v196 != mm;
       *(_BYTE*)(*(_QWORD*)v2 + v206) = HIBYTE(v199)) {
    v198 = *v5;
    v199 = *v196++;
    *v5 = v198 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v198) = v199;
    v200 = *v5;
    *v5 = v200 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v200) = BYTE1(v199);
    v201 = *v5;
    *v5 = v201 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v201) = BYTE2(v199);
    v202 = *v5;
    *v5 = v202 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v202) = BYTE3(v199);
    v203 = *v5;
    *v5 = v203 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v203) = BYTE4(v199);
    v204 = *v5;
    *v5 = v204 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v204) = BYTE5(v199);
    v205 = *v5;
    *v5 = v205 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v205) = BYTE6(v199);
    v206 = *v5;
    *v5 = v206 + 1;
  }
  v207 = *v5;
  v208 = *(_DWORD*)(result + 1152);
  *v5 = v207 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v207) = v208;
  v209 = *v5;
  *v5 = v209 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v209) = BYTE1(v208);
  v210 = *v5;
  *v5 = v210 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v210) = BYTE2(v208);
  v211 = *v5;
  *v5 = v211 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v211) = HIBYTE(v208);
  v212 = *v5;
  v213 = *(_QWORD*)(result + 1264) - *(_QWORD*)(result + 1256);
  *v5 = v212 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v212) = v213 >> 3;
  v214 = *v5;
  *v5 = v214 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v214) = v213 >> 11;
  v215 = *v5;
  *v5 = v215 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v215) = v213 >> 19;
  v216 = *v5;
  *v5 = v216 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v216) = v213 >> 27;
  v217 = *(__int64**)(result + 1256);
  for (nn = *(__int64**)(result + 1264); v217 != nn;
       *(_BYTE*)(*(_QWORD*)v2 + v227) = HIBYTE(v220)) {
    v219 = *v5;
    v220 = *v217++;
    *v5 = v219 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v219) = v220;
    v221 = *v5;
    *v5 = v221 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v221) = BYTE1(v220);
    v222 = *v5;
    *v5 = v222 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v222) = BYTE2(v220);
    v223 = *v5;
    *v5 = v223 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v223) = BYTE3(v220);
    v224 = *v5;
    *v5 = v224 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v224) = BYTE4(v220);
    v225 = *v5;
    *v5 = v225 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v225) = BYTE5(v220);
    v226 = *v5;
    *v5 = v226 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v226) = BYTE6(v220);
    v227 = *v5;
    *v5 = v227 + 1;
  }
  v228 = *v5;
  v229 = *(_DWORD*)(result + 1288);
  *v5 = v228 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v228) = v229;
  v230 = *v5;
  *v5 = v230 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v230) = BYTE1(v229);
  v231 = *v5;
  *v5 = v231 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v231) = BYTE2(v229);
  v232 = *v5;
  *v5 = v232 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v232) = HIBYTE(v229);
  v233 = *v5;
  v234 = *(_QWORD*)(result + 1400) - *(_QWORD*)(result + 1392);
  *v5 = v233 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v233) = v234 >> 3;
  v235 = *v5;
  *v5 = v235 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v235) = v234 >> 11;
  v236 = *v5;
  *v5 = v236 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v236) = v234 >> 19;
  v237 = *v5;
  *v5 = v237 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v237) = v234 >> 27;
  v238 = *(__int64**)(result + 1392);
  for (i1 = *(__int64**)(result + 1400); v238 != i1;
       *(_BYTE*)(*(_QWORD*)v2 + v248) = HIBYTE(v241)) {
    v240 = *v5;
    v241 = *v238++;
    *v5 = v240 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v240) = v241;
    v242 = *v5;
    *v5 = v242 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v242) = BYTE1(v241);
    v243 = *v5;
    *v5 = v243 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v243) = BYTE2(v241);
    v244 = *v5;
    *v5 = v244 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v244) = BYTE3(v241);
    v245 = *v5;
    *v5 = v245 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v245) = BYTE4(v241);
    v246 = *v5;
    *v5 = v246 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v246) = BYTE5(v241);
    v247 = *v5;
    *v5 = v247 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v247) = BYTE6(v241);
    v248 = *v5;
    *v5 = v248 + 1;
  }
  v249 = *v5;
  v250 = *(_DWORD*)(result + 1424);
  *v5 = v249 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v249) = v250;
  v251 = *v5;
  *v5 = v251 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v251) = BYTE1(v250);
  v252 = *v5;
  *v5 = v252 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v252) = BYTE2(v250);
  v253 = *v5;
  *v5 = v253 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v253) = HIBYTE(v250);
  return result;
}

unsigned __int64** GameSubquestData_Unknown9(unsigned __int64** result,
                                             __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64** v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v22;
  __int64 v23;
  __int64** v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  char v30;
  unsigned __int8* v31;
  int v32;
  bool v33;
  __int64 v34;
  __int64 v35;
  char v36;
  int v37;
  char v38;
  unsigned __int8* v39;
  int v40;
  bool v41;
  __int64 v42;
  __int64 v43;
  char v44;
  int v45;
  bool v46;
  unsigned __int8* v47;
  bool v48;
  int v49;
  bool v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  int v58;
  int v59;
  int v60;
  __int64 v61;
  __int64 v62;
  int v63;
  int v64;
  int v65;
  __int64 v66;
  __int64 v67;
  int v68;
  int v69;
  int v70;
  __int64 v71;
  __int64 v72;
  int v73;
  int v74;
  int v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  int v80;
  __int64 v81;
  __int64 v82;
  int v83;
  int v84;
  int v85;
  __int64 v86;
  __int64 v87;
  int v88;
  int v89;
  int v90;
  __int64 v91;
  __int64 v92;
  int v93;
  int v94;
  int v95;
  __int64 v96;
  __int64 v97;
  int v98;
  int v99;
  int v100;

  v3 = *(int*)(a2 + 20);
  v4 = *(_QWORD*)(a2 + 8);
  v7 = result;
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v8 = *(unsigned __int8*)(v4 + v3);
  *(_DWORD*)(a2 + 20) = v3 + 2;
  v9 = v8 | (*(unsigned __int8*)(v4 + v3 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v3 + 3;
  v10 = *(unsigned __int8*)(v4 + v3 + 2);
  *(_DWORD*)(a2 + 20) = v3 + 4;
  v11 = v9 | (v10 << 16) | (*(unsigned __int8*)(v4 + v3 + 3) << 24);
  if (v11 != 0) {
    if (a3 < 3) {
      if (a3 > 0) {
        do {
          result = (unsigned __int64**)GameRoutine_1268100(a2);
          v34 = *(int*)(a2 + 20);
          v35 = *(_QWORD*)(a2 + 8);
          *(_DWORD*)(a2 + 20) = v34 + 1;
          *(_DWORD*)(a2 + 20) = v34 + 2;
          v36 = *(_BYTE*)(v35 + v34 + 1);
          *(_DWORD*)(a2 + 20) = v34 + 3;
          v37 = *(unsigned __int8*)(v35 + v34 + 2);
          if ((unsigned int)a3 <= 1) {
            v38 = v37 != 0;
          }
          else {
            v38 = v37;
          }
          if (result != nullptr) {
            result = (unsigned __int64**)GameSubquestData_125b8e0(
                v7, (__int64)result[1]);
            if (result != nullptr) {
              v39 = (unsigned __int8*)*result;
              *((_BYTE*)result + 9) = v36;
              *((_BYTE*)result + 11) = v38;
              if ((v38 & 1) != 0) {
                *((_BYTE*)result + 11) = v38 & 0xFE;
                if ((unsigned int)v39[112] - 1 >= 3) {
                  v38 &= ~1u;
                }
                *((_BYTE*)result + 11) = v38;
              }
              v40 = v39[113];
              if (v40 == 1 ||
                  (v40 != 5 ? (v41 = (unsigned int)v39[112] - 5 >= 3)
                            : (v41 = false),
                   !v41 || (v39[161] & 0x10) == 0)) {
                *((_BYTE*)result + 11) = v38 & 0xF9;
              }
            }
          }
          --v11;
        } while (v11 != 0);
      }
      else {
        do {
          result = (unsigned __int64**)GameRoutine_1268100(a2);
          v42 = *(int*)(a2 + 20);
          v43 = *(_QWORD*)(a2 + 8);
          *(_DWORD*)(a2 + 20) = v42 + 1;
          v44 = *(_BYTE*)(v43 + v42);
          *(_DWORD*)(a2 + 20) = v42 + 2;
          v45 = *(unsigned __int8*)(v43 + v42 + 1);
          v46 = *(_BYTE*)(v43 + v42 + 1) != 0;
          if (result != nullptr) {
            result = (unsigned __int64**)GameSubquestData_125b8e0(
                v7, (__int64)result[1]);
            if (result != nullptr) {
              v47 = (unsigned __int8*)*result;
              *((_BYTE*)result + 9) = v44;
              *((_BYTE*)result + 11) = v46;
              if (v45 != 0) {
                *((_BYTE*)result + 11) = 0;
                v48 = (unsigned int)v47[112] - 1 < 3 && v46;
                *((_BYTE*)result + 11) = v48;
              }
              else {
                v48 = false;
              }
              v49 = v47[113];
              if (v49 == 1 ||
                  (v49 != 5 ? (v50 = (unsigned int)v47[112] - 5 >= 3)
                            : (v50 = false),
                   !v50 || (v47[161] & 0x10) == 0)) {
                *((_BYTE*)result + 11) = v48;
              }
            }
          }
          --v11;
        } while (v11 != 0);
      }
    }
    else {
      v12 = 0;
      v13 = GameData_212cb58[0];
      do {
        v14 = *(int*)(a2 + 20);
        v15 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v14 + 1;
        v16 = *(unsigned __int8*)(v15 + v14);
        *(_DWORD*)(a2 + 20) = v14 + 2;
        v17 = v16 | (*(unsigned __int8*)(v15 + v14 + 1) << 8);
        *(_DWORD*)(a2 + 20) = v14 + 3;
        v18 = v17 | (*(unsigned __int8*)(v15 + v14 + 2) << 16);
        *(_DWORD*)(a2 + 20) = v14 + 4;
        v19 = v18 | (*(unsigned __int8*)(v15 + v14 + 3) << 24);
        if ((_DWORD)v19 != 0) {
          v20 = *(_QWORD*)(*v13 + 136);
          if (v20 != 0 && *(_QWORD*)(*v13 + 152) != 0) {
            v22 = v20 - 1;
            if ((v20 & (v20 - 1)) != 0) {
              v23 = v18 | (*(unsigned __int8*)(v15 + v14 + 3) << 24);
              if (v20 <= v19) {
                v23 = (unsigned int)v19 % (unsigned int)v20;
              }
            }
            else {
              v23 = ((_DWORD)v20 - 1) & (unsigned int)v19;
            }
            v24 = *(__int64***)(*(_QWORD*)(*v13 + 128) + 8 * v23);
            if (v24 != nullptr) {
              v25 = *v24;
              if (v25 != nullptr) {
                if ((v20 & v22) == 0) {
                  while (1) {
                    v28 = v25[1];
                    if (v28 == v19) {
                      if (*((_DWORD*)v25 + 4) == (_DWORD)v19) {
                        goto LABEL_45;
                      }
                    }
                    else if ((v28 & v22) != v23) {
                      goto LABEL_30;
                    }
                    v25 = (__int64*)*v25;
                    v27 = 0;
                    if (v25 == nullptr) {
                      goto LABEL_31;
                    }
                  }
                }
                do {
                  v26 = v25[1];
                  if (v26 == v19) {
                    if (*((_DWORD*)v25 + 4) == (_DWORD)v19) {
                    LABEL_45:
                      v27 = v25[3];
                      goto LABEL_31;
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
                  v25 = (__int64*)*v25;
                } while (v25 != nullptr);
              }
            }
          }
        }
      LABEL_30:
        v27 = 0;
      LABEL_31:
        *(_DWORD*)(a2 + 20) = v14 + 5;
        *(_DWORD*)(a2 + 20) = v14 + 6;
        v29 = *(_BYTE*)(v15 + v14 + 5);
        *(_DWORD*)(a2 + 20) = v14 + 7;
        if (v27 != 0) {
          v30 = *(_BYTE*)(v15 + v14 + 6);
          result = (unsigned __int64**)GameSubquestData_125b8e0(
              v7, *(_QWORD*)(v27 + 8));
          if (result != nullptr) {
            v31 = (unsigned __int8*)*result;
            *((_BYTE*)result + 9) = v29;
            *((_BYTE*)result + 11) = v30;
            if ((v30 & 1) != 0) {
              *((_BYTE*)result + 11) = v30 & 0xFE;
              if ((unsigned int)v31[112] - 1 >= 3) {
                v30 &= ~1u;
              }
              *((_BYTE*)result + 11) = v30;
            }
            v32 = v31[113];
            if (v32 == 1 || (v32 != 5 ? (v33 = (unsigned int)v31[112] - 5 >= 3)
                                      : (v33 = false),
                             !v33 || (v31[161] & 0x10) == 0)) {
              *((_BYTE*)result + 11) = v30 & 0xF9;
            }
          }
        }
        ++v12;
      } while (v12 != v11);
    }
  }
  if (a3 > 1) {
    GameRoutine_1255aa0(v7 + 179, a2);
    GameRoutine_1255aa0(v7 + 21, a2);
    if ((unsigned int)a3 < 4) {
      GameRoutine_1255aa0(v7 + 38, a2);
      GameRoutine_1255aa0(v7 + 55, a2);
      GameRoutine_1255aa0(v7 + 72, a2);
      GameRoutine_1255aa0(v7 + 89, a2);
      GameRoutine_1255aa0(v7 + 106, a2);
      GameRoutine_1255aa0(v7 + 123, a2);
      GameRoutine_1255aa0(v7 + 140, a2);
      GameRoutine_1255aa0(v7 + 157, a2);
      return GameRoutine_1255aa0(v7 + 174, a2);
    }
    else {
      v51 = *(int*)(a2 + 20);
      v52 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v51 + 1;
      v53 = *(unsigned __int8*)(v52 + v51);
      *(_DWORD*)(a2 + 20) = v51 + 2;
      v54 = v53 | (*(unsigned __int8*)(v52 + v51 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v51 + 3;
      v55 = *(unsigned __int8*)(v52 + v51 + 2);
      *(_DWORD*)(a2 + 20) = v51 + 4;
      *((_DWORD*)v7 + 50) =
          v54 | (v55 << 16) | (*(unsigned __int8*)(v52 + v51 + 3) << 24);
      GameRoutine_1255aa0(v7 + 38, a2);
      v56 = *(int*)(a2 + 20);
      v57 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v56 + 1;
      v58 = *(unsigned __int8*)(v57 + v56);
      *(_DWORD*)(a2 + 20) = v56 + 2;
      v59 = v58 | (*(unsigned __int8*)(v57 + v56 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v56 + 3;
      v60 = *(unsigned __int8*)(v57 + v56 + 2);
      *(_DWORD*)(a2 + 20) = v56 + 4;
      *((_DWORD*)v7 + 84) =
          v59 | (v60 << 16) | (*(unsigned __int8*)(v57 + v56 + 3) << 24);
      GameRoutine_1255aa0(v7 + 55, a2);
      v61 = *(int*)(a2 + 20);
      v62 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v61 + 1;
      v63 = *(unsigned __int8*)(v62 + v61);
      *(_DWORD*)(a2 + 20) = v61 + 2;
      v64 = v63 | (*(unsigned __int8*)(v62 + v61 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v61 + 3;
      v65 = *(unsigned __int8*)(v62 + v61 + 2);
      *(_DWORD*)(a2 + 20) = v61 + 4;
      *((_DWORD*)v7 + 118) =
          v64 | (v65 << 16) | (*(unsigned __int8*)(v62 + v61 + 3) << 24);
      GameRoutine_1255aa0(v7 + 72, a2);
      v66 = *(int*)(a2 + 20);
      v67 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v66 + 1;
      v68 = *(unsigned __int8*)(v67 + v66);
      *(_DWORD*)(a2 + 20) = v66 + 2;
      v69 = v68 | (*(unsigned __int8*)(v67 + v66 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v66 + 3;
      v70 = *(unsigned __int8*)(v67 + v66 + 2);
      *(_DWORD*)(a2 + 20) = v66 + 4;
      *((_DWORD*)v7 + 152) =
          v69 | (v70 << 16) | (*(unsigned __int8*)(v67 + v66 + 3) << 24);
      GameRoutine_1255aa0(v7 + 89, a2);
      v71 = *(int*)(a2 + 20);
      v72 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v71 + 1;
      v73 = *(unsigned __int8*)(v72 + v71);
      *(_DWORD*)(a2 + 20) = v71 + 2;
      v74 = v73 | (*(unsigned __int8*)(v72 + v71 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v71 + 3;
      v75 = *(unsigned __int8*)(v72 + v71 + 2);
      *(_DWORD*)(a2 + 20) = v71 + 4;
      *((_DWORD*)v7 + 186) =
          v74 | (v75 << 16) | (*(unsigned __int8*)(v72 + v71 + 3) << 24);
      GameRoutine_1255aa0(v7 + 106, a2);
      v76 = *(int*)(a2 + 20);
      v77 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v76 + 1;
      v78 = *(unsigned __int8*)(v77 + v76);
      *(_DWORD*)(a2 + 20) = v76 + 2;
      v79 = v78 | (*(unsigned __int8*)(v77 + v76 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v76 + 3;
      v80 = *(unsigned __int8*)(v77 + v76 + 2);
      *(_DWORD*)(a2 + 20) = v76 + 4;
      *((_DWORD*)v7 + 220) =
          v79 | (v80 << 16) | (*(unsigned __int8*)(v77 + v76 + 3) << 24);
      GameRoutine_1255aa0(v7 + 123, a2);
      v81 = *(int*)(a2 + 20);
      v82 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v81 + 1;
      v83 = *(unsigned __int8*)(v82 + v81);
      *(_DWORD*)(a2 + 20) = v81 + 2;
      v84 = v83 | (*(unsigned __int8*)(v82 + v81 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v81 + 3;
      v85 = *(unsigned __int8*)(v82 + v81 + 2);
      *(_DWORD*)(a2 + 20) = v81 + 4;
      *((_DWORD*)v7 + 254) =
          v84 | (v85 << 16) | (*(unsigned __int8*)(v82 + v81 + 3) << 24);
      GameRoutine_1255aa0(v7 + 140, a2);
      v86 = *(int*)(a2 + 20);
      v87 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v86 + 1;
      v88 = *(unsigned __int8*)(v87 + v86);
      *(_DWORD*)(a2 + 20) = v86 + 2;
      v89 = v88 | (*(unsigned __int8*)(v87 + v86 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v86 + 3;
      v90 = *(unsigned __int8*)(v87 + v86 + 2);
      *(_DWORD*)(a2 + 20) = v86 + 4;
      *((_DWORD*)v7 + 288) =
          v89 | (v90 << 16) | (*(unsigned __int8*)(v87 + v86 + 3) << 24);
      GameRoutine_1255aa0(v7 + 157, a2);
      v91 = *(int*)(a2 + 20);
      v92 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v91 + 1;
      v93 = *(unsigned __int8*)(v92 + v91);
      *(_DWORD*)(a2 + 20) = v91 + 2;
      v94 = v93 | (*(unsigned __int8*)(v92 + v91 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v91 + 3;
      v95 = *(unsigned __int8*)(v92 + v91 + 2);
      *(_DWORD*)(a2 + 20) = v91 + 4;
      *((_DWORD*)v7 + 322) =
          v94 | (v95 << 16) | (*(unsigned __int8*)(v92 + v91 + 3) << 24);
      result = GameRoutine_1255aa0(v7 + 174, a2);
      v96 = *(int*)(a2 + 20);
      v97 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v96 + 1;
      v98 = *(unsigned __int8*)(v97 + v96);
      *(_DWORD*)(a2 + 20) = v96 + 2;
      v99 = v98 | (*(unsigned __int8*)(v97 + v96 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v96 + 3;
      v100 = *(unsigned __int8*)(v97 + v96 + 2);
      *(_DWORD*)(a2 + 20) = v96 + 4;
      *((_DWORD*)v7 + 356) =
          v99 | (v100 << 16) | (*(unsigned __int8*)(v97 + v96 + 3) << 24);
    }
  }
  return result;
}

__int64 GameSubquestData_Unknown10(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(result + 1440) - *(_QWORD*)(result + 1432);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3 >> 3;
  v4 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v3 >> 11;
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v3 >> 19;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v3 >> 27;
  v7 = *(__int64**)(result + 1432);
  for (i = *(__int64**)(result + 1440); v7 != i;
       *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = HIBYTE(v10)) {
    v9 = *(int*)(a2 + 20);
    v10 = *v7++;
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v10;
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE1(v10);
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE2(v10);
    v13 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE3(v10);
    v14 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE4(v10);
    v15 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE5(v10);
    v16 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE6(v10);
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
  }
  return result;
}

__int64 GameSubquestData_1260b40(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(result + 1432) - *(_QWORD*)(result + 1424);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3 >> 3;
  v4 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v3 >> 11;
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v3 >> 19;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v3 >> 27;
  v7 = *(__int64**)(result + 1424);
  for (i = *(__int64**)(result + 1432); v7 != i;
       *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = HIBYTE(v10)) {
    v9 = *(int*)(a2 + 20);
    v10 = *v7++;
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v10;
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE1(v10);
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE2(v10);
    v13 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE3(v10);
    v14 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE4(v10);
    v15 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE5(v10);
    v16 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE6(v10);
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
  }
  return result;
}

unsigned __int64** GameSubquestData_Unknown11(unsigned __int64** result,
                                              __int64 a2, int a3)
{
  if (a3 >= 2) {
    result[180] = result[179];
    return GameRoutine_1255aa0(result + 179, a2);
  }
  return result;
}

unsigned __int64** GameSubquestData_Unknown10_1260cb0(unsigned __int64** result,
                                                      __int64 a2, int a3)
{
  if (a3 >= 2) {
    result[179] = result[178];
    return GameSubquestData_1255aa0(result + 178, a2);
  }
  return result;
}

__attribute__((swiftcall)) void GameSubquestData_1264da0(PSEUDO_X8 x8_,
                                                         __int64* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
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
  __int64** v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  signed __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  __int64* v54;
  __int64* v55;
  __int64 v56;
  unsigned __int64 v57[2];

  v2 = *a1;
  v4 = *(unsigned __int8*)(*a1 + 112);
  if (v4 == 5) {
    goto LABEL_93;
  }
  if (v4 != 6) {
    if (*(_WORD*)(v2 + 552) == 0) {
      goto LABEL_93;
    }
    v10 = 0;
    v11 = 0;
    v12 = nullptr;
    v13 = 0;
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
    do {
      v14 = *(_QWORD*)(v2 + 560);
      if ((unsigned __int64)v12 < v11) {
        *v12++ = *(_QWORD*)(v14 + 8 * v13);
      }
      else {
        v15 = (unsigned __int64)v12 - v10;
        v16 = ((__int64)v12 - v10) >> 3;
        v17 = v16 + 1;
        if ((unsigned __int64)(v16 + 1) >> 61 != 0) {
          a2[1] = (__int64)v12;
          a2[2] = v11;
          *a2 = v10;
          GameRoutine_667c50_alt1();
        }
        if ((__int64)(v11 - v10) >> 2 > v17) {
          v17 = (__int64)(v11 - v10) >> 2;
        }
        if (v11 - v10 >= 0x7FFFFFFFFFFFFFF8LL) {
          v18 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v18 = v17;
        }
        if (v18 != 0) {
          if (v18 >> 61 != 0) {
            a2[1] = (__int64)v12;
            a2[2] = v11;
            *a2 = v10;
            GameRoutine_60a210_alt1();
          }
          v19 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
        }
        else {
          v19 = 0;
        }
        v20 = *(_QWORD*)(v14 + 8 * v13);
        v11 = v19 + 8 * v18;
        v21 = v19 + v15 - 8 * v16;
        *(_QWORD*)(v19 + v15) = v20;
        v12 = (_QWORD*)(v19 + v15 + 8);
        memcpy_alt1(v21, v10, v15);
        if (v10 != 0) {
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v10);
        }
        v10 = v21;
      }
      ++v13;
    } while (v13 < *(unsigned __int16*)(v2 + 552));
    a2[1] = (__int64)v12;
    a2[2] = v11;
    *a2 = v10;
    return;
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = *(_QWORD*)GameData_212c7b0[0] + 136LL * v5;
  v7 = *(_QWORD*)(v6 + 72);
  v8 = *(_QWORD*)(v6 + 80);
  if (v7 == v8) {
    v9 = 0;
  }
  else {
    v9 = 0;
    do {
      if (*(_BYTE*)(**(_QWORD**)v7 + 112LL) == 6 &&
          *(_BYTE*)(*(_QWORD*)v7 + 9LL) == 4) {
        ++v9;
      }
      v7 += 8;
    } while (v7 != v8);
  }
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v23 = game_HashString_alt1((__int64)&GameData_1ae67be);
  if (v23 == 0) {
    goto LABEL_93;
  }
  v24 = *(_QWORD*)(*GameData_212cb68[0] + 96);
  if (v24 == 0 || *(_QWORD*)(*GameData_212cb68[0] + 112) == 0) {
    goto LABEL_93;
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
  v28 = *(_QWORD**)(*(_QWORD*)(*GameData_212cb68[0] + 88) + 8 * v27);
  if (v28 == nullptr || (v29 = (_QWORD*)*v28) == nullptr) {
  LABEL_93:
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
    return;
  }
  if ((v24 & v26) == 0) {
    while (1) {
      v31 = v29[1];
      if (v31 == v23) {
        if (v29[2] == v23) {
          goto LABEL_59;
        }
      }
      else if ((v31 & v26) != v27) {
        goto LABEL_93;
      }
      v29 = (_QWORD*)*v29;
      if (v29 == nullptr) {
        goto LABEL_93;
      }
    }
  }
  while (1) {
    v30 = v29[1];
    if (v30 == v23) {
      break;
    }
    if (v30 >= v24) {
      v30 %= v24;
    }
    if (v30 != v27) {
      goto LABEL_93;
    }
  LABEL_48:
    v29 = (_QWORD*)*v29;
    if (v29 == nullptr) {
      goto LABEL_93;
    }
  }
  if (v29[2] != v23) {
    goto LABEL_48;
  }
LABEL_59:
  v32 = v29[3];
  if (v32 == 0) {
    goto LABEL_93;
  }
  v33 = *(__int64***)(v32 + 40);
  v34 = *v33;
  v54 = v33[1];
  if (*v33 == v54) {
    goto LABEL_93;
  }
  v35 = nullptr;
  v53 = v9;
  do {
    v36 = *v34;
    v55 = v34;
    if (v9 >= *(unsigned __int8*)(*v34 + 32)) {
      v37 = *(unsigned __int16*)(v36 + 40);
      if (*(_WORD*)(v36 + 40) != 0) {
        v38 = 8 * v37;
        v39 = 0;
        v56 = 8 * v37;
        do {
          v40 = *(_QWORD*)(*(_QWORD*)(v36 + 48) + v39);
          v57[1] = v40;
          v57[0] = game_HashString_alt1(v40);
          if (game_GameModeData_instance_ == 0 ||
              (v41 = game_GameVariableTable_Find_alt1(
                   *(_QWORD**)(game_GameModeData_instance_ + 48), v57)) == 0 ||
              *(_DWORD*)(v41 + 32) == 0) {
            v42 = a2[2];
            if ((unsigned __int64)v35 < v42) {
              *v35++ = v40;
            }
            else {
              v43 = *a2;
              v44 = (signed __int64)v35 - *a2;
              v45 = (v44 >> 3) + 1;
              if (v45 >> 61 != 0) {
                GameRoutine_667c50_alt1();
              }
              v46 = v42 - v43;
              if (v46 >> 2 > v45) {
                v45 = v46 >> 2;
              }
              if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF8LL) {
                v47 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v47 = v45;
              }
              if (v47 != 0) {
                if (v47 >> 61 != 0) {
                  GameRoutine_60a210_alt1();
                }
                v48 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v47, 16, 0);
              }
              else {
                v48 = 0;
              }
              v49 = v48 + 8 * v47;
              v50 = v48 + v44 - 8 * (v44 >> 3);
              *(_QWORD*)(v48 + v44) = v40;
              v35 = (__int64*)(v48 + v44 + 8);
              memcpy_alt1(v50, v43, v44);
              *a2 = v50;
              a2[2] = v49;
              if (v43 != 0) {
                v51 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v51 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v43);
              }
              v38 = v56;
            }
            a2[1] = (__int64)v35;
          }
          v39 += 8;
        } while (v38 != v39);
      }
    }
    v9 = v53;
    v34 = v55 + 1;
  } while (v55 + 1 != v54);
  if (v35 == (__int64*)*a2) {
    if (v35 != nullptr) {
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, *a2);
    }
    goto LABEL_93;
  }
}

void GameSubquestData_ProcReward_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  *(_QWORD*)a1 = game_GameSubquestData_ProcReward_vtable;
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v3 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v7 = v5 == v6;
    v8 = v3 - 1 + v4;
    v9 = v8 >> 7;
    v10 = v8 & 0x7F;
    v11 = 16 * (v5 - v6) - 1;
    v12 = *(_QWORD*)(v6 + 8 * v9);
    if (v7) {
      v11 = 0;
    }
    v13 = v12 + 32 * v10;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v13 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v13 + 24);
    v14 = *(_QWORD*)(v13 + 16);
    v2[27] = v3 - 1;
    v2[20] = v14;
    if ((unsigned __int64)(v11 - (v3 + v4) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v15 = *(_QWORD*)(v5 - 8);
      if (v15 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
        v5 = v2[24];
      }
      v2[24] = v5 - 8;
    }
  }
  v17 = *(_QWORD**)(a1 + 256);
  if (v17 == (_QWORD*)(a1 + 224)) {
    v18 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_15;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v17 + v18))((__int64)v17);
LABEL_15:
  v19 = *(_QWORD*)(a1 + 192);
  if (v19 != 0) {
    *(_QWORD*)(a1 + 200) = v19;
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v19);
  }
  v21 = *(_QWORD*)(a1 + 160);
  if (v21 != 0) {
    *(_QWORD*)(a1 + 168) = v21;
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v21);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void GameSubquestData_ProcReward_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  *(_QWORD*)a1 = game_GameSubquestData_ProcReward_vtable;
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  v3 = fw_memory_g_heap_manager_ptr;
  if (game_ProcGameSkipView_instance_ != 0) {
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v8 = v6 == v7;
    v9 = v4 - 1 + v5;
    v10 = v9 >> 7;
    v11 = v9 & 0x7F;
    v12 = 16 * (v6 - v7) - 1;
    v13 = *(_QWORD*)(v7 + 8 * v10);
    if (v8) {
      v12 = 0;
    }
    v14 = v13 + 32 * v11;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v14 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v14 + 24);
    v15 = *(_QWORD*)(v14 + 16);
    v2[27] = v4 - 1;
    v2[20] = v15;
    if ((unsigned __int64)(v12 - (v4 + v5) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v16 = *(_QWORD*)(v6 - 8);
      if (v16 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v17, v16);
        v6 = v2[24];
      }
      v2[24] = v6 - 8;
    }
  }
  v18 = *(_QWORD**)(a1 + 256);
  if (v18 == (_QWORD*)(a1 + 224)) {
    v19 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_15;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
LABEL_15:
  v20 = *(_QWORD*)(a1 + 192);
  if (v20 != 0) {
    v21 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 200) = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v21 + v22, v20);
  }
  v23 = *(_QWORD*)(a1 + 160);
  if (v23 != 0) {
    v24 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 168) = v23;
    v25 = 128;
    if (*(_QWORD*)(v24 + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v24 + v25, v23);
  }
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v26 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v26 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v26, a1);
}

__int64 GameSubquestData_1267be0(__int64 a1, __int64* a2, __int64 a3, _BYTE* a4)
{
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  unsigned int v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;

  GameRoutine_1260fa0(a1, a2, a4);
  v7 = *(_QWORD*)(*(_QWORD*)a1 + 208LL);
  v8 = (__int64*)GameData_212c7b0[0];
  if (v7 != 0) {
    v9 = *(_QWORD**)GameData_212c7b0[0];
    v10 = *(_QWORD*)(v7 + 8);
    if (game_GameModeData_instance_ != 0) {
      v11 = GameSubquestData_125b8e0(v9, v10);
      if (v11 == 0) {
        goto LABEL_8;
      }
    }
    else {
      v11 = GameSubquestData_125b8e0(v9, v10);
      if (v11 == 0) {
        goto LABEL_8;
      }
    }
    if ((*(_BYTE*)(v11 + 9) & 0xFE) == 2) {
      *(_WORD*)(v11 + 9) = 261;
    }
  }
LABEL_8:
  if ((*a4 & 1) != 0) {
    GameSubquestData_125bbc0(*v8);
    v13 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v13 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
    v14 = *v8 + 136LL * v13;
    v15 = *(__int64**)(v14 + 72);
    v16 = *(__int64**)(v14 + 80);
    while (v15 != v16) {
      v17 = *v15++;
      GameSubquestData_1257620(v17, 0);
    }
  }
  result = *(_QWORD*)(a3 + 32);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
  }
  return result;
}

__int64 GameSubquestData_1267cf0(__int64 a1, __int64 a2, __int64* a3,
                                 __int64 a4, _BYTE* a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  int v19;
  float v20;

  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v10 = GameData_212c608[0];
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v10 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  v11 = game_ProcInst_Register();
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 152) = a2;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_DWORD*)(a1 + 184) = 0;
  *(_QWORD*)a1 = game_GameSubquestData_ProcReward_vtable;
  v12 = *a3;
  v13 = a3[1] - *a3;
  if (v13 != 0) {
    if (v13 < 0) {
      GameRoutine_1267e70(v11);
    }
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v13, 16, 0);
    v15 = v14 + v13;
    *(_QWORD*)(a1 + 192) = v14;
    *(_QWORD*)(a1 + 200) = v14;
    *(_QWORD*)(a1 + 208) = v14 + v13;
    memcpy(v14, v12, v13);
    *(_QWORD*)(a1 + 200) = v15;
  }
  v16 = *(_QWORD*)(a4 + 32);
  if (v16 != 0) {
    if (v16 == a4) {
      *(_QWORD*)(a1 + 256) = a1 + 224;
      v16 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a4 + 32) + 24LL))(
          *(_QWORD*)(a4 + 32));
    }
    else {
      v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      *(_QWORD*)(a1 + 256) = v16;
    }
  }
  else {
    *(_QWORD*)(a1 + 256) = 0;
  }
  *(_BYTE*)(a1 + 272) = *a5;
  result = GameRoutine_8679c0(v16);
  v18 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v19 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v19 & 0x10) == 0) {
      v20 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v19 & 0xFFFFFFE2 | 1;
      if (v20 > 0.0) {
        *(_DWORD*)(v18 + 224) = 0;
      }
    }
  }
  return result;
}

__int64 game_GameSubquestData_Entity_IsTalked_lambda0_Invoke(
    __int64 a1, unsigned __int8* a2, unsigned __int8* a3)
{
  return *a3 | (unsigned int)*a2;
}

__int64 game_GameSubquestData_Entity_IsTalked_lambda1_Invoke(__int64 a1,
                                                             _BYTE* a2,
                                                             _BYTE* a3)
{
  return (unsigned __int8)(*a3 & *a2);
}

void GameSubquestData_1269cc0(__int64 a1, unsigned __int64* a2, __int64* a3,
                              __int64* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  float v18;
  _QWORD* v19;
  float v20;
  float v21;
  _BOOL8 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 primeEm;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  unsigned __int64 v32;

  v5 = *a2;
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    v10 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v5 >= v6) {
        v4 = v5 % v6;
      }
    }
    else {
      v4 = v10 & v5;
    }
    v11 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
    if (v11 != nullptr) {
      v12 = (_QWORD*)*v11;
      if (v12 != nullptr) {
        if ((v6 & v10) == 0) {
          while (1) {
            v14 = v12[1];
            if (v14 == v5) {
              if (v12[2] == v5) {
                return;
              }
            }
            else if ((v14 & v10) != v4) {
              goto LABEL_22;
            }
            v12 = (_QWORD*)*v12;
            if (v12 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = v12[1];
          if (v13 == v5) {
            if (v12[2] == v5) {
              return;
            }
          }
          else {
            if (v13 >= v6) {
              v13 %= v6;
            }
            if (v13 != v4) {
              break;
            }
          }
          v12 = (_QWORD*)*v12;
        } while (v12 != nullptr);
      }
    }
  }
LABEL_22:
  v15 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v16 = *a3;
  v17 = *a4;
  v18 = *(float*)(a1 + 32);
  v19 = v15;
  *v15 = 0;
  v15[1] = v5;
  v15[2] = v16;
  v15[3] = v17;
  v20 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v6 == 0 || (float)(v18 * (float)v6) < v20) {
    v21 = v20 / v18;
    v22 = true;
    if (v6 >= 3) {
      v22 = (v6 & (v6 - 1)) != 0;
    }
    v23 = v22 | (2 * v6);
    v24 = vcvtps_u64_f32(v21);
    if (v23 <= v24) {
      v25 = v24;
    }
    else {
      v25 = v23;
    }
    if (v25 == 1) {
      v25 = 2;
    }
    else if ((v25 & (v25 - 1)) != 0) {
      primeEm = std___1___next_prime(v25);
      v6 = *(_QWORD*)(a1 + 8);
      v25 = primeEm;
    }
    if (v25 > v6) {
      goto LABEL_34;
    }
    if (v25 < v6) {
      v27 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v27 = std___1___next_prime(v27);
      }
      else {
        v28 = 1LL << -(char)__clz(v27 - 1);
        if (v27 >= 2) {
          v27 = v28;
        }
      }
      if (v25 <= v27) {
        v25 = v27;
      }
      if (v25 < v6) {
      LABEL_34:
        GameRoutine_1269a20((__int64*)a1, v25);
      }
    }
    v6 = *(_QWORD*)(a1 + 8);
    if ((v6 & (v6 - 1)) != 0) {
      if (v5 >= v6) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = (v6 - 1) & v5;
    }
  }
  v29 = *(_QWORD*)a1;
  v30 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v30 != nullptr) {
    *v19 = *v30;
    *v30 = v19;
  }
  else {
    v31 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v19;
    *v19 = v31;
    *(_QWORD*)(v29 + 8 * v4) = a1 + 16;
    if (*v19 != 0) {
      v32 = *(_QWORD*)(*v19 + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v32 >= v6) {
          v32 %= v6;
        }
      }
      else {
        v32 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v32) = v19;
    }
  }
  ++*(_QWORD*)(a1 + 24);
}

__int64 GameSubquestData_1269fa0(__int64 result, __int64* a2,
                                 __int64 (**a3)(__int64, __int64),
                                 unsigned __int64 a4, __int64* a5,
                                 signed __int64 a6)
{
  _QWORD* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64* v23;
  __int64* v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  if (a4 >= 2) {
    v8 = (_QWORD*)result;
    if (a4 == 2) {
      result = (*a3)(*(a2 - 1), *(_QWORD*)result);
      if ((result & 1) != 0) {
        v9 = *v8;
        *v8 = *(a2 - 1);
        *(a2 - 1) = v9;
      }
    }
    else if ((__int64)a4 > 128) {
      v18 = a4 >> 1;
      v19 = a5;
      v20 = a4 - (a4 >> 1);
      if ((__int64)a4 <= a6) {
        GameSubquestData_126a200_alt1(result, result + 8 * v18, a3, a4 >> 1,
                                      a5);
        v23 = &v19[v18];
        result = GameSubquestData_126a200_alt1(&v8[v18], a2, a3, v20, v23);
        v24 = &v19[a4];
        v25 = v23;
        while (v25 != v24) {
          result = (*a3)(*v25, *v19);
          if ((result & 1) != 0) {
            v26 = v25;
          }
          else {
            v26 = v19;
          }
          if ((result & 1) != 0) {
            v27 = 0;
          }
          else {
            v27 = 8;
          }
          v28 = *v26;
          v19 = (__int64*)((char*)v19 + v27);
          if ((result & 1) != 0) {
            v29 = 8;
          }
          else {
            v29 = 0;
          }
          v25 = (__int64*)((char*)v25 + v29);
          *v8++ = v28;
          if (v19 == v23) {
            while (v25 != v24) {
              v31 = *v25++;
              *v8++ = v31;
            }
            return result;
          }
        }
        while (v19 != v23) {
          v30 = *v19++;
          *v8++ = v30;
        }
      }
      else {
        GameSubquestData_1269fa0(result, result + 8 * v18, a3, a4 >> 1, a5, a6);
        GameSubquestData_1269fa0(&v8[v18], a2, a3, v20, v19, a6);
        return GameSubquestData_126a420_alt1(v8, &v8[v18], a2, a3, v18, v20,
                                             v19, a6);
      }
    }
    else if ((__int64*)result != a2) {
      v10 = (__int64*)(result + 8);
      if ((__int64*)(result + 8) != a2) {
        v11 = 0;
        v12 = (__int64*)result;
        do {
          v15 = *v12;
          v14 = v12[1];
          v12 = v10;
          result = (*a3)(v14, v15);
          if ((result & 1) != 0) {
            v16 = *v12;
            v17 = v11;
            do {
              *(_QWORD*)((char*)v8 + v17 + 8) = *(_QWORD*)((char*)v8 + v17);
              if (v17 == 0) {
                v13 = v8;
                goto LABEL_11;
              }
              result = (*a3)(v16, *(_QWORD*)((char*)v8 + v17 - 8));
              v17 -= 8;
            } while ((result & 1) != 0);
            v13 = (_QWORD*)((char*)v8 + v17 + 8);
          LABEL_11:
            *v13 = v16;
          }
          v10 = v12 + 1;
          v11 += 8;
        } while (v12 + 1 != a2);
      }
    }
  }
  return result;
}

__int64 GameSubquestData_126a200(__int64 result, __int64* a2,
                                 __int64 (**a3)(__int64, __int64),
                                 unsigned __int64 a4, __int64* a5)
{
  __int64* v5;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  if (a4 != 0) {
    v5 = a5;
    v8 = (__int64*)result;
    if (a4 == 2) {
      result = (*a3)(*(a2 - 1), *(_QWORD*)result);
      if ((result & 1) != 0) {
        *v5 = *(a2 - 1);
        v9 = *v8;
      }
      else {
        *v5 = *v8;
        v9 = *(a2 - 1);
      }
      v5[1] = v9;
    }
    else if (a4 == 1) {
      *a5 = *(_QWORD*)result;
    }
    else if ((__int64)a4 > 8) {
      v17 = a4 >> 1;
      v19 = (__int64*)(result + 8 * (a4 >> 1));
      v20 = 8 * (a4 >> 1);
      GameSubquestData_1269fa0_alt1(result, v19, a3, v17, a5, v17);
      result = GameSubquestData_1269fa0_alt1((__int64)v19, a2, a3, a4 - v17,
                                             &v5[v17], a4 - v17);
      if (v20 != 0) {
        v21 = v19;
        while (v21 != a2) {
          result = (*a3)(*v21, *v8);
          if ((result & 1) != 0) {
            v22 = v21;
          }
          else {
            v22 = v8;
          }
          if ((result & 1) != 0) {
            v23 = 8;
          }
          else {
            v23 = 0;
          }
          v24 = *v22;
          v21 = (__int64*)((char*)v21 + v23);
          if ((result & 1) != 0) {
            v25 = 0;
          }
          else {
            v25 = 8;
          }
          v8 = (__int64*)((char*)v8 + v25);
          *v5++ = v24;
          if (v8 == v19) {
            goto LABEL_41;
          }
        }
        while (v8 != v19) {
          v26 = *v8++;
          *v5++ = v26;
        }
      }
      else {
        v21 = v19;
      LABEL_41:
        while (v21 != a2) {
          v27 = *v21++;
          *v5++ = v27;
        }
      }
    }
    else if ((__int64*)result != a2) {
      v10 = (__int64*)(result + 8);
      *a5 = *(_QWORD*)result;
      if ((__int64*)(result + 8) != a2) {
        v11 = 0;
        v12 = a5;
        v13 = a5;
        do {
          v14 = *v13++;
          result = (*a3)(*v10, v14);
          if ((result & 1) != 0) {
            v15 = v5;
            v12[1] = *v12;
            if (v12 != v5) {
              v16 = v11;
              while (1) {
                v15 = (__int64*)((char*)v5 + v16);
                result = (*a3)(*v10, *(__int64*)((char*)v5 + v16 - 8));
                if ((result & 1) == 0) {
                  break;
                }
                v16 -= 8;
                *v15 = *(v15 - 1);
                if (v16 == 0) {
                  v15 = v5;
                  break;
                }
              }
            }
            *v15 = *v10;
          }
          else {
            *v13 = *v10;
          }
          ++v10;
          v11 += 8;
          v12 = v13;
        } while (v10 != a2);
      }
    }
  }
  return result;
}

__int64 GameSubquestData_126a420(__int64 result, __int64* a2, __int64* a3,
                                 __int64 (**a4)(__int64, __int64), __int64 a5,
                                 __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10;
  __int64* v15;
  __int64 v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 (*v23)(__int64, __int64);
  unsigned __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  _QWORD* v37;
  __int64* v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;

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
      v53 = a3;
      if (a5 >= v10) {
        if (a5 == 1) {
          v44 = *v15;
          *v15 = *a2;
          *a2 = v44;
          return result;
        }
        v22 = a5 / 2;
        v17 = &v15[a5 / 2];
        if (a3 != a2) {
          v49 = v10;
          v23 = *a4;
          v24 = a3 - a2;
          a3 = a2;
          v47 = (_QWORD*)a7;
          do {
            v25 = &a3[v24 >> 1];
            v27 = *v25;
            v26 = v25 + 1;
            if ((v23(v27, *v17) & 1) != 0) {
              a3 = v26;
              v24 += ~(v24 >> 1);
            }
            else {
              v24 >>= 1;
            }
          } while (v24 != 0);
          a7 = (__int64)v47;
          v10 = v49;
          v22 = a5 / 2;
        }
        v16 = a3 - a2;
      }
      else {
        v16 = v10 / 2;
        a3 = &a2[v10 / 2];
        if (v15 == a2) {
          v17 = a2;
        }
        else {
          v51 = v10 / 2;
          v48 = v10;
          v50 = a8;
          v17 = v15;
          v18 = a2 - v15;
          do {
            v19 = &v17[v18 >> 1];
            v21 = *v19;
            v20 = v19 + 1;
            if (((*a4)(*a3, v21) & 1) != 0) {
              v18 >>= 1;
            }
            else {
              v17 = v20;
              v18 += ~(v18 >> 1);
            }
          } while (v18 != 0);
          v10 = v48;
          a8 = v50;
          v16 = v51;
        }
        v22 = v17 - v15;
      }
      a5 -= v22;
      v10 -= v16;
      v28 = v22;
      v29 = GameRoutine_12694e0(v17);
      v30 = v28;
      v31 = v28 + v16;
      v32 = (__int64*)v29;
      if (v31 >= a5 + v10) {
        v52 = v30;
        result = GameSubquestData_126a420(v29, a3, v53, a4, a5, v10, a7, a8);
        a5 = v52;
        a3 = v17;
        v10 = v16;
        v53 = v32;
      }
      else {
        result = GameSubquestData_126a420(v15, v17, v29, a4, v30, v16, a7, a8);
        v15 = v32;
      }
      a2 = a3;
      a3 = v53;
      if (v10 == 0) {
        return result;
      }
    }
    if (a5 <= v10) {
      if (v15 != a2) {
        v36 = -a7;
        v37 = (_QWORD*)a7;
        v38 = v15;
        do {
          v39 = *v38++;
          v36 -= 8;
          *v37++ = v39;
        } while (v38 != a2);
        while (a2 != a3) {
          result = (*a4)(*a2, *(_QWORD*)a7);
          if ((result & 1) != 0) {
            v40 = a2;
          }
          else {
            v40 = (__int64*)a7;
          }
          if ((result & 1) != 0) {
            v41 = 8;
          }
          else {
            v41 = 0;
          }
          v42 = *v40;
          a2 = (__int64*)((char*)a2 + v41);
          if ((result & 1) != 0) {
            v43 = 0;
          }
          else {
            v43 = 8;
          }
          a7 += v43;
          *v15++ = v42;
          if (v37 == (_QWORD*)a7) {
            return result;
          }
        }
        return memmove(v15, a7, -(a7 + v36));
      }
    }
    else if (a2 != a3) {
      v33 = 0;
      do {
        *(_QWORD*)(a7 + v33 * 8) = a2[v33];
        ++v33;
      } while (&a2[v33] != a3);
      v34 = (__int64*)(a7 + v33 * 8);
      while (a2 != v15) {
        result = (*a4)(*(v34 - 1), *(a2 - 1));
        if ((result & 1) != 0) {
          v35 = a2;
        }
        else {
          v35 = v34;
        }
        if ((result & 1) != 0) {
          --a2;
        }
        else {
          --v34;
        }
        *--a3 = *(v35 - 1);
        if (v34 == (__int64*)a7) {
          return result;
        }
      }
      if ((__int64*)a7 != v34) {
        v45 = 0x1FFFFFFFFFFFFFFFLL;
        do {
          v46 = *--v34;
          a3[v45--] = v46;
        } while (v34 != (__int64*)a7);
      }
    }
  }
  return result;
}

__int64 game_GameSubquestData_AcceptForShow_lambda0_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD v5[3];

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  memset(v5, 0, sizeof(v5));
  return GameRoutine_187d290(v3, v2, v5);
}

__int64 game_GameSubquestData_AcceptForShow_lambda1_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      208, 16, 0);
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 8, 16, 0);
  v7 = GameData_212c608[0];
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *v6 = v2;
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
  v8 = game_ProcInst_Register_alt1(v5);
  *(_QWORD*)(v5 + 152) = v6;
  *(_QWORD*)(v5 + 160) = v6 + 1;
  *(_QWORD*)(v5 + 168) = v6 + 1;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_BYTE*)(v5 + 200) = 0;
  *(_QWORD*)v5 = game_GameSubquestData_ProcAccept_vtable;
  GameRoutine_8679c0(v8);
  return ProcInst_657850(v5, &GameData_2170050, "ProcAccept", 1, v3);
}

#pragma GCC visibility pop
