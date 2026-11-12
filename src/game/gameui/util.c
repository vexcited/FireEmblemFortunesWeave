#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_15870e0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_15883c0(PSEUDO_X8, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(_QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1571860(__int64*, __int64, char, char, char, char);
__int64 GameRoutine_1572ac0(__int64*, __int64, char, char);
__int64 GameRoutine_15735c0(__int64*, int, int*);
__int64 GameRoutine_15753b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1586d80(__int64, _DWORD*, _DWORD*, __int64, char, char,
                            char, __int64, char, char, char);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1841190(_QWORD, _QWORD);
__int64 GameRoutine_1841470(_QWORD, _QWORD);
__int64 GameRoutine_1841930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b3670(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19ac9e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3d00(_QWORD, _QWORD);
__int64 GameRoutine_6fbae0(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 game_UnitSkillList_GetMaxValue(_QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1b47d74;
extern _UNKNOWN GameData_22594f0;
extern _UNKNOWN* GameData_204f348;
extern _UNKNOWN* GameData_212da30;
extern __int64 (*GameData_204d4f8[])();
extern __int64 (*GameData_204d988[])();
extern __int64 (*GameData_204dd88[])();
extern __int64 (*GameData_204efb8[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_2259348;
extern __int64 GameData_2259350;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char GameData_1a9f09e;
extern char* GameData_204f370[8];
extern int GameData_21d992c;
extern int GameData_21d9948;
extern int GameData_22593d4;
extern int GameData_22594e8;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(void);
void __attribute__((noreturn)) GameRoutine_705570(void);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_gameui_Util_CountAvailableArtsNum_alt1(__int64 a1) __asm__(
    "game_gameui_Util_CountAvailableArtsNum");
__int64 Util_1575150(__int64 a1, __int64 a2, __int64* a3, __int64 a4, int a5,
                     unsigned int a6, unsigned int a7, int a8, char a9);
__int64 Util_1580a10(__int64 result, unsigned __int8 a2);
__int64 Util_1581060(__int64* a1, __int64 a2, unsigned __int16* a3, char a4,
                     unsigned __int8 a5);
_WORD* game_gameui_Util_GetMorphRage(__int64 a1, __int64 a2, __int64 a3);
__int64 game_gameui_Util_SetBasicStatusForUnitInfo_alt1(
    __int64 result,
    __int64 a2) __asm__("game_gameui_Util_SetBasicStatusForUnitInfo");
__int64 game_gameui_Util_IsVisibleSpecialPage(__int64 a1, __int64 a2);
__int64 game_gameui_Util_SetUnitInfoDetail_lambda0_Invoke(__int64 a1, int* a2);
__int64 game_gameui_Util_CountAvailableArtsNum_lambda0_Invoke(__int64 result,
                                                              unsigned int* a2);
__int64 game_gameui_Util_SetPartsItemIcon_lambda0_Invoke(__int64 a1,
                                                         __int64* a2);
__int64 game_gameui_Util_GetMorphRage_lambda0_Invoke(__int64 result,
                                                     _DWORD* a2);
__int64 game_gameui_Util_SetEfficacyIcons_lambda0_Invoke(__int64 result,
                                                         _DWORD* a2);
__int64 game_gameui_Util_SetEfficacyIcons_lambda1_Invoke(__int64 result,
                                                         _DWORD* a2);
__int64 game_gameui_Util_SetIconTxtNum_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 game_gameui_Util_SetIconTxtNum_lambda1_Invoke(__int64 a1, __int64* a2);
__int64 game_gameui_Util_SetIconTxtNum_lambda2_Invoke(__int64 a1, __int64* a2);
__int64 game_gameui_Util_SetIconTxtNum_lambda3_Invoke(__int64 a1, __int64* a2);
__int64 game_gameui_Util_SetIconTxtDelivery_lambda0_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_gameui_Util_SetStatusForClassChange_lambda1_Invoke_alt1(
    __int64 a1,
    __int64
        a2) __asm__("game_gameui_Util_SetStatusForClassChange_lambda1_Invoke");
__int64 game_gameui_Util_GetNewSkillList_lambda0_Invoke(__int64 result,
                                                        _DWORD* a2);
__int64 game_gameui_Util_GetNewSkillList_lambda2_Invoke(__int64 result,
                                                        int* a2);
__int64 game_gameui_Util_GetNewMagicList_lambda0_Invoke(__int64 a1, _DWORD* a2);
__int64 game_gameui_Util_GetNewMagicList_lambda2_Invoke(__int64 result,
                                                        int* a2);
__int64 game_gameui_Util_GetHealPower_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 game_gameui_Util_CollectArtsInfoList_lambda0_Invoke(__int64 result,
                                                            unsigned int* a2);
__int64 game_gameui_Util_CollectBlazeArtsInfo_lambda2_Invoke(__int64 result,
                                                             _DWORD* a2);
__int64 game_gameui_Util_CollectBlazeArtsInfo_lambda1_Invoke(__int64 result,
                                                             _DWORD* a2);
__int64 game_gameui_Util_IsVisibleSpecialPage_lambda0_Invoke(__int64 result,
                                                             _DWORD* a2);
__int64 game_Unit_GetUnknown6cba30(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e3e20(void);
__int64
game_gameui_Util_IsGrowStatusClearMerge_lambda0_Invoke(__int64 result,
                                                       unsigned __int8* a2);
__int64
game_gameui_Util_CollectBlazeArtsInfo_lambda0_Invoke_15b66a0(__int64 result,
                                                             int* a2);
__int64 game_gameui_Util_CollectBlazeArtsInfo_lambda0_Invoke_15b6a00_alt1(
    __int64 result, int* a2) __asm__("game_gameui_Util_CollectBlazeArtsInfo_"
                                     "lambda0_Invoke_15b6a00");
_BYTE* LayoutEx_58d200(_BYTE* result, _BYTE*);
_BYTE* Layout_579280(_QWORD*, __int64);
_DWORD* GameRoutine_157b170(__int64*, __int64, char);
_QWORD* GameRoutine_1579aa0(_QWORD* result, __int64*, unsigned __int16*,
                            _QWORD*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_15733c0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void
GameRoutine_15883c0_alt1(PSEUDO_X8, __int64*,
                         __int64*) __asm__("GameRoutine_15883c0");
__attribute__((swiftcall)) void GameRoutine_15ac7e0(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17d8560(PSEUDO_X8, int, __int64,
                                                    _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void
Layout_1363e00(PSEUDO_X8, unsigned __int64 result, _QWORD*);
__attribute__((swiftcall)) void SpotMgr_13306e0(PSEUDO_X8, _QWORD, _QWORD,
                                                _QWORD);
__attribute__((swiftcall)) void Util_157b9a0(PSEUDO_X8, __int64, char);
__attribute__((swiftcall)) void game_95e2c0(PSEUDO_X8, __int64 result, __int64);
__attribute__((swiftcall)) void game_95eaa0(PSEUDO_X8, __int64 result, __int64);
__attribute__((swiftcall)) void game_gameui_15ad0c0(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__int64* LayoutAccessor_155fbe0(__int64*, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_9a28e0(int);
__int64* game_UnitPool_Get(_BYTE*);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 BattleArea_8b9d00(_QWORD);
__int64 BattleInfo_7a3000(_QWORD);
__int64 BattleSide_7a1270(_QWORD);
__int64 BattleSide_Destructor(_QWORD);
__int64 ControlCreator_13633c0_alt1(void) __asm__("ControlCreator_13633c0");
__int64
ControlCreator_13633c0_alt2(__int64 result) __asm__("ControlCreator_13633c0");
__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0_alt1(__int64, __int64,
                                 char) __asm__("GameRoutine_156c5d0");
__int64 GameRoutine_156c850(void);
__int64 GameRoutine_156c910(__int64 result, const char*, int, ...);
__int64 GameRoutine_156d320();
__int64 GameRoutine_156d580(__int64);
__int64 GameRoutine_156d580_alt1(_QWORD) __asm__("GameRoutine_156d580");
__int64 GameRoutine_157a130(__int64*, unsigned __int16*, char);
__int64 GameRoutine_157a1e0(__int64*, unsigned int*, __int64, __int64, __int64,
                            __int64, __int64);
__int64 GameRoutine_157ac20(__int64*, __int64, char, char);
__int64 GameRoutine_157b310(__int64*, unsigned __int16*, __int64);
__int64 GameRoutine_157ecd0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157ee20(_QWORD, _QWORD);
__int64 GameRoutine_15847c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15869e0(_QWORD, _QWORD);
__int64 GameRoutine_1586d80_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _DWORD, _BYTE,
                                 _BYTE) __asm__("GameRoutine_1586d80");
__int64 GameRoutine_1586d80_alt2(__int64, _DWORD*, __int64, __int64, __int64,
                                 __int64, __int64, __int64, char, __int64,
                                 char) __asm__("GameRoutine_1586d80");
__int64 GameRoutine_1587220(__int64*, __int64, int, int, int, int, int, char,
                            char);
__int64 GameRoutine_158b160(_QWORD, _QWORD);
__int64 GameRoutine_15a19e0(void);
__int64 GameRoutine_15a73c0(__int64 result, int*, __int64, char);
__int64 GameRoutine_1651740(_QWORD*);
__int64 GameRoutine_16537e0(__int64, __int64);
__int64 GameRoutine_174d580(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_1840740_alt1(__int64, unsigned int, __int64,
                                 unsigned __int8,
                                 char) __asm__("GameRoutine_1840740");
__int64
GameRoutine_1841190_alt1(__int64,
                         unsigned __int8) __asm__("GameRoutine_1841190");
__int64 GameRoutine_1841300(_QWORD, _QWORD);
__int64
GameRoutine_1841470_alt1(__int64,
                         unsigned __int8) __asm__("GameRoutine_1841470");
__int64 GameRoutine_18415e0(__int64, __int64);
__int64 GameRoutine_1841930_alt1(__int64, __int64,
                                 __int64) __asm__("GameRoutine_1841930");
__int64 GameRoutine_1841fc0(_QWORD, _QWORD);
__int64 GameRoutine_1842180(_QWORD, _QWORD);
__int64 GameRoutine_188df50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190a0c0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("GameRoutine_190a0c0");
__int64 GameRoutine_19a8d80(__int64, __int64, char, unsigned int*, __int64, int,
                            char, char, __int16);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_66dd60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c2b50(__int64);
__int64 GameRoutine_6d5d00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(__int64 result, _QWORD*);
__int64 GameRoutine_6fb960(_QWORD, _QWORD);
__int64 GameRoutine_715440();
__int64 GameRoutine_790080(_QWORD);
__int64 GameRoutine_799290(_QWORD);
__int64 GameRoutine_7992e0(_QWORD);
__int64 GameRoutine_7a2f50(_QWORD);
__int64 GameRoutine_7fb7c0(_QWORD);
__int64 GameRoutine_7fb930(_QWORD);
__int64 GameRoutine_842cb0(_QWORD, _QWORD);
__int64 GameRoutine_842e20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8ca350(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8ca410(_QWORD);
__int64 GameRoutine_8ca500(_QWORD);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 GameRoutine_932040(_QWORD, _QWORD);
__int64 GameRoutine_932240(_QWORD, _QWORD);
__int64 GameRoutine_932360(unsigned __int8*, __int64*);
__int64 GameRoutine_95f500(char, __int64, __int64, __int64);
__int64 GameRoutine_960100();
__int64 GameRoutine_a4dbe0_alt1(_QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_a4dbe0");
__int64 Impl_13261c0(__int64);
__int64 Impl_13261c0_alt1(_QWORD) __asm__("Impl_13261c0");
__int64 JobIcon_19a9be0(__int64, __int64, __int64);
__int64 JobIcon_19a9dd0(__int64, __int64, __int64);
__int64 LayoutAccessor_155e830_alt2(_QWORD,
                                    _QWORD) __asm__("LayoutAccessor_155e830");
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562060_alt1(__int64 result, __int64,
                                    __int64) __asm__("LayoutAccessor_1562060");
__int64 LayoutAccessor_1562680_alt1(_QWORD, _QWORD,
                                    float) __asm__("LayoutAccessor_1562680");
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 LayoutAccessor_1562cf0_alt1(_QWORD,
                                    _QWORD) __asm__("LayoutAccessor_1562cf0");
__int64 LayoutEx_579180(__int64);
__int64 LayoutEx_5791a0(__int64);
__int64 LayoutEx_57b150(__int64, __int64, __int64, __int64, __int64);
__int64 LayoutEx_57cf40(__int64, __int64);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136a920_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD) __asm__("Manager_136a920");
__int64 Pane_58dee0(__int64 result, __int64);
__int64 Pane_58df60(__int64 result, _QWORD*);
__int64 Pane_58f8a0(__int64);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 Troop_133ed80(_QWORD, _QWORD);
__int64 UnitItem_6e8b20(_QWORD);
__int64 UnitUtil_15e0640(__int64, __int64, int, int, char);
__int64 Util_1575150_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _BYTE) __asm__("Util_1575150");
__int64 Util_1586140_alt1(_QWORD, _QWORD) __asm__("Util_1586140");
__int64 Util_15892d0_alt1(__int64**, unsigned __int8, unsigned __int8,
                          __int64) __asm__("Util_15892d0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_6fbae0(_QWORD, _QWORD);
__int64 game_95e950(__int64, __int64, __n128);
__int64 game_97e570(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GameVariableTable_Find_alt1(_QWORD, _QWORD) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString(__int64 result);
__int64 game_HashString_alt1(_QWORD) __asm__("game_HashString");
__int64 game_UnitMastery_GetMaxJobRank(__int64, __int64);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_UnitSkillList_EachIndirectSkill(__int64, _WORD*, __int64);
__int64 game_UnitSkillList_EachIndirectSkill_alt1(
    _QWORD, _QWORD, _QWORD) __asm__("game_UnitSkillList_EachIndirectSkill");
__int64 game_UnitSkillList_GetRangeAddImpl(_QWORD, _QWORD);
__int64 game_Unit_Destroy_Unit(__int64);
__int64 game_Unit_GetJob_alt1(__int64) __asm__("game_Unit_GetJob");
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParamLimit(_QWORD, _QWORD);
__int64
game_Unit_GetUnknown6cba30_alt1(__int64) __asm__("game_Unit_GetUnknown6cba30");
__int64 game_gameui_15a0300(_QWORD, _QWORD);
__int64 game_gameui_15a2ea0(_QWORD, _QWORD, _QWORD);
__int64 game_map_790ba0(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox_alt1(_QWORD, _QWORD) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneSize(_QWORD, _QWORD, float, float);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__n128 GameRoutine_1575ab0(__int64, __int64, __n128 result);
__n128 GameRoutine_1582e00(__int64, int);
__n128 GameRoutine_18b3670_alt1(__int64*, _DWORD*, __int64,
                                char) __asm__("GameRoutine_18b3670");
__n128 Layout_1364020(_QWORD*, __int64, __int64);
__n128 Util_1578f20_alt2(_QWORD*, __int64, char) __asm__("Util_1578f20");
__n128 Util_1583920_alt1(__int64*, __int64, __int64,
                         __n128 result) __asm__("Util_1583920");
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_7fcd20(__int64, __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
char* GameRoutine_6ed030(__int64);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
char* game_util_Format_alt1(__int64, __int64, __int64, __int64, __int64,
                            __int64, __int64, __int64,
                            char) __asm__("game_util_Format");
double ui_LayoutAccessor_GetPaneTranslate(__int64*, __int64);
double ui_LayoutAccessor_GetTextSize(__int64*, __int64);
extern _BYTE GameData_1be04b8[10];
extern _DWORD GameData_1b37744[5];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN* GameData_2131900;
extern _UNKNOWN GameData_1a98a4e;
extern _UNKNOWN GameData_1ab570b;
extern _UNKNOWN GameData_1abd4d1;
extern _UNKNOWN GameData_1ac6c8b;
extern _UNKNOWN GameData_21d3fb8;
extern _UNKNOWN GameData_21d40b0;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (***GameData_212dae8)();
extern __int64 (*GameData_1fa0f58[])();
extern __int64 (*GameData_204d608[])();
extern __int64 (*GameData_204d688[])();
extern __int64 (*GameData_204d788[])();
extern __int64 (*GameData_204d808[])();
extern __int64 (*GameData_204d888[])();
extern __int64 (*GameData_204d908[])();
extern __int64 (*GameData_204da08[])();
extern __int64 (*GameData_204da88[])();
extern __int64 (*GameData_204df98[])();
extern __int64 (*GameData_204e018[])();
extern __int64 (*GameData_204e198[])();
extern __int64 (*GameData_204e218[])();
extern __int64 (*GameData_204e298[])();
extern __int64 (*GameData_204e318[])();
extern __int64 (*GameData_204e518[])();
extern __int64 (*GameData_204e598[])();
extern __int64 (*GameData_204e718[])();
extern __int64 (*GameData_204e918[])();
extern __int64 (*GameData_204ed38[])();
extern __int64 (*GameData_204edb8[])();
extern __int64 (*GameData_204ee38[])();
extern __int64 (*GameData_204eeb8[])();
extern __int64 (*GameData_204ef38[])();
extern __int64* GameData_212c650[5];
extern __int64* GameData_212c790;
extern __int64* GameData_212c868;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212c9a0[147];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212d258[2];
extern __int64* GameData_212da50[3];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_212e348;
extern __int64* GameData_212fc70[2];
extern __int64* GameData_21318f8;
extern __int64* game_g_empty_item_ptr;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212d238[2];
extern __int64 GameData_212d690;
extern __int64 GameData_2130ec0[2];
extern __int64 GameData_2131968[8];
extern __int64 GameData_21759e0;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9868;
extern __int64 GameData_21c9870;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21d4018;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 GameData_21f4018[];
extern __int64 GameData_21f8118;
extern __int64 GameData_21f8120;
extern __int64 GameData_2203490;
extern __int64 GameData_22190c8;
extern __int64 game_GameModeData_instance_;
extern char* GameData_204d200[10];
extern char* GameData_204d230[4];
extern char* GameData_204d240[2];
extern char* GameData_204f220[37];
extern char GameData_1b37730[2];
extern int GameData_1bdcb48[];
extern int GameData_21d976c;
extern int GameData_21f8110;
extern int GameData_21f8130;
float GameRoutine_156c160(__int64);
float ui_LayoutAccessor_SetPaneTranslate(__int64*, __int64, __int64);
int* GameRoutine_932460(unsigned __int8*, __int64*);
unsigned __int8* Unit_931120(unsigned __int8*);
unsigned int* GameRoutine_159d0c0(unsigned int* result, char, char);
unsigned int* GameRoutine_190a0c0(unsigned int* result, __int64, float*,
                                  _QWORD*, __int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c5d0_alt2(__int64, __int64, char,
                              __n128) __asm__("GameRoutine_156c5d0");
void GameRoutine_157c220(__int64*, int, int, char, char);
void GameRoutine_1585290(__int64*, __int64, __int64);
void GameRoutine_6e3d00_alt1(__int64*, _DWORD*) __asm__("GameRoutine_6e3d00");
void LayoutAccessor_155e830_alt1(__int64*,
                                 char) __asm__("LayoutAccessor_155e830");
void LayoutAccessor_1562680(__int64*, __int64, float);
void Layout_13639a0(_QWORD*, __int64);
void Layout_1363bc0(__int64, _QWORD*);
void __attribute__((noreturn)) GameRoutine_159fb80(void);
void __attribute__((noreturn)) GameRoutine_15a7390(void);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_6e3e20_alt1() __asm__("GameRoutine_6e3e20");
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
void __attribute__((noreturn)) GameRoutine_740050(void);
void ui_LayoutAccessor_SetPaneSize_alt1(__int64*, __int64, float) __asm__(
    "ui_LayoutAccessor_SetPaneSize");
__int64 Util_1574d80(__int64* a1, char a2);
__int64 Util_15753b0_alt1(__int64 a1, __int64 a2, int a3,
                          unsigned __int8 a4) __asm__("Util_15753b0");
__int64 Util_15758f0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4,
                     unsigned int a5, char a6, char a7);
void Util_1575c70(__int64* a1, __int64 a2, int a3, const char* a4, char a5,
                  __int64 a6);
__int64 game_gameui_Util_SetUnitInfoMasteryLevel_alt1(
    _QWORD* a1, __int64 a2,
    __n128 a3) __asm__("game_gameui_Util_SetUnitInfoMasteryLevel");
__n128 Util_15760a0_alt1(__int64 a1, char a2) __asm__("Util_15760a0");
__int64 Util_15761f0(__int64* a1, __int64 a2);
void Util_1576480_alt1(__int64 a1, __int64 a2,
                       unsigned __int8 a3) __asm__("Util_1576480");
__int64 Util_15792c0_alt1(__int64* a1, unsigned __int16* a2, char a3, char a4,
                          _QWORD* a5, __int64 a6, __int64 a7,
                          char a8) __asm__("Util_15792c0");
bool Util_1579d20(__int64 a1, __int64 a2);
__n128 Util_157b410_alt1(__int64 a1, __int64 a2) __asm__("Util_157b410");
__n128 Util_157bd60_alt1(__int64 a1, __int64 a2, __int64 a3,
                         int* a4) __asm__("Util_157bd60");
__n128 Util_157c0a0_alt1(__int64** a1, char a2) __asm__("Util_157c0a0");
__int64 Util_157d280(__int64* a1, int a2, int a3, char a4, char a5, char a6);
__int64 Util_157d6f0(__int64* a1, __int64* a2);
__int64 Util_157da70(__int64 result, const char* a2, _QWORD* a3, _QWORD* a4);
__int64 Util_157e3a0_alt1(__int64* a1, unsigned int* a2, unsigned int a3,
                          __int64 a4) __asm__("Util_157e3a0");
__n128 Util_157f3e0_alt2(__int64** a1, unsigned int a2, __int64 a3, _DWORD* a4,
                         __int64 a5, __int64 a6, __int64 a7,
                         __int64 a8) __asm__("Util_157f3e0");
__int64* Util_1580bf0(__int64* result, __int64 a2, unsigned int a3, char a4,
                      char a5, char a6, char a7, char a8);
__n128 Util_1581550_alt1(__int64* a1, __int64 a2, unsigned __int16* a3,
                         unsigned __int8 a4,
                         unsigned __int8 a5) __asm__("Util_1581550");
__int64 game_gameui_Util_SetSkillExpBonus_alt1(__int64* a1, __int64 a2) __asm__(
    "game_gameui_Util_SetSkillExpBonus");
void Util_1582b50_alt2(__int64* a1, __int64 a2) __asm__("Util_1582b50");
__n128 Util_1583180_alt1(__int64* a1, unsigned __int8* a2,
                         __int64 a3) __asm__("Util_1583180");
__int64 Util_1583920(__int64 result, __int64 a2, __int64 a3);
bool Util_1584ac0(__int64 a1, unsigned __int8** a2);
void Util_1584ec0_alt1(__int64* a1, __int64 a2,
                       unsigned __int8 a3) __asm__("Util_1584ec0");
__int64 Util_1585690(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4);
__n128 Util_1586140_alt2(__int64* a1, __int64* a2) __asm__("Util_1586140");
__int64 Util_1586840(__int64* a1, char a2);
__int64 game_gameui_Util_SetGrowthRateInfo(__int64 result, __int64 a2,
                                           __int64 a3);
__int64 Util_1588700(__int64* a1, __int64 a2, __int64 a3);
__int64 Util_15892d0_alt2(__int64** a1, unsigned int a2, unsigned int a3,
                          __int64 a4) __asm__("Util_15892d0");
__int64 game_gameui_Util_SetGrowthRateForUnitInfo_alt1(
    __int64 result,
    __int64 a2) __asm__("game_gameui_Util_SetGrowthRateForUnitInfo");
__attribute__((swiftcall)) void game_gameui_Util_GetNewSkillList(PSEUDO_X8 x8_,
                                                                 __int64 result,
                                                                 __int64 a2,
                                                                 __int64 a3);
__attribute__((swiftcall)) void Util_158aec0(PSEUDO_X8 x8_, __int64 result,
                                             __int64 a2);
__attribute__((swiftcall)) void Util_158b280(PSEUDO_X8 x8_, __int64 result,
                                             __int64 a2);
__attribute__((swiftcall)) void game_gameui_Util_GetNewMagicList_alt1(
    PSEUDO_X8 x8_, _QWORD* result, _QWORD* a2,
    __int64 a3) __asm__("game_gameui_Util_GetNewMagicList");
__n128 game_gameui_Util_SetArtsSkillStatus_alt1(
    __int64 a1, _DWORD* a2, __int64 a3, char a4,
    char a5) __asm__("game_gameui_Util_SetArtsSkillStatus");
__n128 game_gameui_Util_SetArtsSkillStatusForCompare_alt1(
    __int64 a1, __int64 a2, __int64 a3,
    __int64 a4) __asm__("game_gameui_Util_SetArtsSkillStatusForCompare");
__int64 game_gameui_Util_SetGambitSkillStatus_alt1(
    __int64 a1, _DWORD* a2, __int64 a3,
    const char* a4) __asm__("game_gameui_Util_SetGambitSkillStatus");
__attribute__((swiftcall)) void game_gameui_Util_GetCorpsStatusUnitList_alt1(
    PSEUDO_X8 x8_, __int64 result, char a2,
    int a3) __asm__("game_gameui_Util_GetCorpsStatusUnitList");
__attribute__((swiftcall)) void
game_gameui_Util_CollectArtsInfoList(PSEUDO_X8 x8_, __int64 result, __int64 a2,
                                     __int64 a3, char a4);
__attribute__((swiftcall)) void
game_gameui_Util_CollectBlazeArtsInfo_159c780(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void
game_gameui_Util_CollectBlazeArtsInfo_159cce0(PSEUDO_X8 x8_, __int64 a1,
                                              __int64 a2);
__int64 game_gameui_Util_SetUnitInfoMasteryLevel_lambda0_Invoke(__int64 a1,
                                                                __int64 a2,
                                                                int* a3);
__int64 game_gameui_Util_SetMasteryInfo_lambda0_Invoke(__int64 a1, __int64 a2,
                                                       unsigned int* a3);
void game_gameui_Util_SetSkillExpBonus_lambda0_Invoke_alt1(
    __int64 a1, unsigned __int8* a2, __int64 a3, __int64 a4, __int64 a5,
    __int64 a6, __int64 a7,
    __int64 a8) __asm__("game_gameui_Util_SetSkillExpBonus_lambda0_Invoke");
__attribute__((swiftcall)) void
game_gameui_Util_SetBasicStatusForUnitInfo_lambda0_Invoke(PSEUDO_X8 x8_,
                                                          __int64 a1, int* a2);
__int64 game_gameui_Util_SetStatusForClassChange_lambda2_Invoke(__int64 a1,
                                                                int* a2,
                                                                _DWORD* a3);
__int64 game_gameui_Util_SetGrowthRateInfo_lambda0_Invoke_alt1(
    __int64 a1, int* a2,
    _DWORD* a3) __asm__("game_gameui_Util_SetGrowthRateInfo_lambda0_Invoke");
__attribute__((swiftcall)) void
game_gameui_Util_SetGrowthRateForUnitInfo_lambda0_Invoke(PSEUDO_X8 x8_,
                                                         __int64 result,
                                                         int* a2);
__attribute__((swiftcall)) void
game_gameui_Util_SetArtsSkillStatus_lambda0_Invoke(PSEUDO_X8 x8_,
                                                   __int64 result, int* a2);
__attribute__((swiftcall)) void
game_gameui_Util_SetArtsSkillStatusForCompare_lambda0_Invoke(PSEUDO_X8 x8_,
                                                             __int64 result,
                                                             int* a2);
__attribute__((swiftcall)) void
game_gameui_Util_SetBlazeSkillStatus_lambda0_Invoke(PSEUDO_X8 x8_,
                                                    unsigned __int64 result,
                                                    int* a2);
__attribute__((swiftcall)) void
game_gameui_Util_SetRageSkillStatus_lambda0_Invoke(PSEUDO_X8 x8_,
                                                   unsigned __int64 result,
                                                   int* a2);
__attribute__((swiftcall)) void
game_gameui_Util_SetGambitSkillStatus_lambda0_Invoke(PSEUDO_X8 x8_,
                                                     __int64 result, int* a2);
unsigned int Util_1660c60_alt1(__int64*** a1) __asm__("Util_1660c60");
__int64 GameRoutine_15748c0(_QWORD, _QWORD, _QWORD);
__int64 UnitDerivedParams_6deeb0(_QWORD, _QWORD);
__int64 UnitParams_6dd470(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetMaxRange(_QWORD, _QWORD);
__int64 game_Unit_GetMinRange(_QWORD, _QWORD);
__int64 game_Unit_GetUnknown4(_QWORD, _QWORD);
__int64 game_Unit_GetUnknown6(_QWORD, _QWORD);
__int64 game_Unit_IsImmobile(_QWORD);
__int64 game_gameui_1594bd0(_QWORD, _QWORD, _QWORD);
unsigned __int16* game_gameui_158d340(unsigned __int16* result);
__attribute__((swiftcall)) void
game_gameui_Util_SetUnitStatus_lambda0_Invoke(PSEUDO_X8 x8_, __int64 result,
                                              int* a2);
__int64 GameRoutine_1585290_alt1(_QWORD, _QWORD,
                                 _QWORD) __asm__("GameRoutine_1585290");
__int64 GameRoutine_1651740_alt1(_QWORD) __asm__("GameRoutine_1651740");
__int64 HistoryLogInfo_6fb810(_QWORD);
__int64 SpotAttachmentDungeon_151b000();
__int64 SpotAttachmentExplore_151a420();
__int64 SpotAttachmentFort_151b980();
__int64 SpotMgr_132ffa0(_QWORD);
__int64 Util_1582b50_alt1(_QWORD, _QWORD) __asm__("Util_1582b50");
__int64 game_UnitPool_Get_alt1(_QWORD) __asm__("game_UnitPool_Get");
bool SpotAttachmentExplore_15199c0(__int64, __int64);
extern __int64* GameData_212c780;
extern char* GameData_204f058[94];
void GameRoutine_156c910_alt1(__int64, __int64, int,
                              ...) __asm__("GameRoutine_156c910");
__int64 Util_157ee20(__int64* a1, char a2);
_DWORD* Util_15823b0(__int64* a1, unsigned __int8* a2, char a3, char a4,
                     __int64 a5);
void Util_1582f00(__int64* a1, unsigned __int8* a2, __int64 a3);
_QWORD* GameRoutine_15847c0_alt1(_QWORD* result, int,
                                 _DWORD*) __asm__("GameRoutine_15847c0");
__attribute__((swiftcall)) void
SpotMgr_13306e0_alt1(PSEUDO_X8, char**, char,
                     char**) __asm__("SpotMgr_13306e0");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 BattleInfo_7a3000_alt1() __asm__("BattleInfo_7a3000");
__int64 GameRoutine_174d580_alt1(__int64*, const char*, __int64,
                                 float) __asm__("GameRoutine_174d580");
__int64 GameRoutine_1842180_alt1(__int64, int) __asm__("GameRoutine_1842180");
__int64 GameRoutine_799290_alt1(_QWORD*) __asm__("GameRoutine_799290");
__int64 GameRoutine_932040_alt1(__int64, __int64) __asm__("GameRoutine_932040");
__int64 GameRoutine_932240_alt1(__int64, __int64) __asm__("GameRoutine_932240");
__int64
LayoutAccessor_1562cf0_alt2(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* game_util_Format_alt2(__int64, ...) __asm__("game_util_Format");
unsigned __int64 BattleSide_7a1270_alt1(_QWORD*) __asm__("BattleSide_7a1270");
void GameRoutine_157a1e0_alt1(__int64*, unsigned int*, unsigned __int8, char,
                              char, char, char) __asm__("GameRoutine_157a1e0");
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 Util_1586140(__int64* a1, __int64* a2);
unsigned int Util_1660c60(__int64 a1);
_QWORD* GameRoutine_8ca350_alt1(_QWORD* result, _QWORD*,
                                _QWORD*) __asm__("GameRoutine_8ca350");
__attribute__((swiftcall)) void
GameRoutine_15870e0_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_15870e0");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void
Layout_1363e00_alt1(PSEUDO_X8, unsigned __int64 result,
                    __int64) __asm__("Layout_1363e00");
__int64 GameHr_1586d80(__int64*, _DWORD*, _DWORD*, __int64, char, char, char,
                       __int64, char, char, char);
__int64 GameHr_18b3670(__int64*, _DWORD*, __int64, char);
__int64 GameHr_6d5d00(__int64, unsigned __int8*, __int64, __int64, char);
__int64 GameRoutine_1585290_alt2(__int64*, __int64,
                                 __int64) __asm__("GameRoutine_1585290");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 StatusTotal_19ac9e0(__int64, int, int, int, unsigned __int8, int);
__int64 game_6fbae0_alt1(__int64, __int64) __asm__("game_6fbae0");
__int64 game_97e570_alt1(__int64, _QWORD*, __int64,
                         __int64) __asm__("game_97e570");
__int64 game_UnitSkillList_GetMaxValue_alt1(_QWORD*, __int64*, __int64) __asm__(
    "game_UnitSkillList_GetMaxValue");
__int64 game_gameui_15a2ea0_alt1(__int64 result, __int64*, _QWORD**, __int64,
                                 char) __asm__("game_gameui_15a2ea0");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 ui_LayoutAccessor_SetPaneSize_alt2(
    __int64 result, const char*, float,
    float) __asm__("ui_LayoutAccessor_SetPaneSize");
__int64 ui_LayoutAccessor_SetPaneSize_alt3(
    __int64 result, __int64, float) __asm__("ui_LayoutAccessor_SetPaneSize");
char* GameRoutine_a4dbe0_alt2(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format_alt3(const char*, ...) __asm__("game_util_Format");
const char* Pane_58fac0_alt1(__int64, const char*) __asm__("Pane_58fac0");
extern _UNKNOWN GameData_1bdcb48_alt1 __asm__("GameData_1bdcb48");
extern unsigned __int8 GameData_1be04b8_alt1[10] __asm__("GameData_1be04b8");
float game_156c160(__int64, char);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_1587220_alt1(__int64, __int64, int, int, int, int, int, char,
                              char) __asm__("GameRoutine_1587220");
void GameRoutine_190a0c0_alt2(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");
void LayoutAccessor_1562060_alt2(__int64*, __int64,
                                 __int64) __asm__("LayoutAccessor_1562060");
void Layout_1363bc0_alt1(__int64, const char**) __asm__("Layout_1363bc0");
void Layout_1364020_alt1(_QWORD*, __int64, __int64) __asm__("Layout_1364020");
void Util_1578f20_alt1(_QWORD*, __int64, char) __asm__("Util_1578f20");
void __attribute__((noreturn))
GameRoutine_6e5c60_alt1() __asm__("GameRoutine_6e5c60");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__int64 game_gameui_Util_CountAvailableArtsNum(__int64 a1, __int64 a2,
                                               __int64 a3);
void Util_15753b0(__int64 a1, __int64 a2, int a3, unsigned __int8 a4);
__int64 Util_1576480(__int64 a1, __int64 a2, unsigned __int8 a3);
void Util_157bd60(__int64 a1, __int64 a2, __int64 a3, int* a4);
__int64 Util_1584ec0(__int64* a1, __int64 a2, unsigned __int8 a3);
__int64* game_gameui_Util_SetBasicStatusForUnitInfo(__int64* result,
                                                    __int64 a2);
__attribute__((swiftcall)) void game_gameui_Util_GetNewMagicList(PSEUDO_X8 x8_,
                                                                 __int64 a1,
                                                                 __int64 a2,
                                                                 __int64 a3);
__int64 game_gameui_Util_SetSkillExpBonus_lambda0_Invoke(__int64 result,
                                                         unsigned __int8* a2);
__int64 game_gameui_Util_SetStatusForClassChange_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2);
void game_gameui_Util_SetGrowthRateInfo_lambda0_Invoke(__int64 a1, int* a2,
                                                       _DWORD* a3);
void game_gameui_Util_CollectBlazeArtsInfo_lambda0_Invoke_15b6a00(__int64 a1,
                                                                  int* a2);
_DWORD* GameRoutine_932460_alt1(unsigned __int8*,
                                __int64*) __asm__("GameRoutine_932460");
_QWORD* GameRoutine_6d7e80(__int64, __int64, __int64);
__attribute__((swiftcall)) void Layout_1363f00(PSEUDO_X8, __int64, __int64);
__int64 LayoutAccessor_1571860(__int64*, __int64, char, char, char, char);
__int64 Util_1575c70_alt1(__int64, __int64, int, const char*, char,
                          __int64) __asm__("Util_1575c70");
__int64 Util_157f3e0_alt1(__int64*, int, const char*, __int64,
                          char) __asm__("Util_157f3e0");
__int64 ui_LayoutAccessor_FindAlignment_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64 ui_LayoutAccessor_GetPartsLayout(__int64*, const char*);
bool game_HasActiveSkill_843420_alt1(_DWORD*, __int64) __asm__(
    "game_HasActiveSkill_843420");
extern _UNKNOWN* GameData_212c8a8;
extern __int64 (*GameData_204d578[])();
extern __int64 (*GameData_204d708[])();
extern __int64 GameData_2131970[7];
extern int game_g_shared_system_skills;
__int64 game_gameui_Util_SetUnitInfoTraining(__int64 a1, __int64 a2);
__int64 game_gameui_Util_SetSkillInfo(__int64 result, __int64 a2);
__int64 game_gameui_Util_SetUnitInfoTraining_lambda0_Invoke(__int64 a1,
                                                            unsigned __int8* a2,
                                                            int* a3);
__int64 game_gameui_Util_SetSkillInfo_lambda0_Invoke(__int64 result,
                                                     __int64 a2);
__attribute__((swiftcall)) void
GameRoutine_15733c0_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_15733c0");
__attribute__((swiftcall)) void
GameRoutine_15883c0_alt2(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_15883c0");
__int64 GameHr_157b310(__int64*, unsigned __int16*, __int64);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_18b3670_alt1(__int64*, unsigned int*, _QWORD*,
                            char) __asm__("GameHr_18b3670");
__int64 GameHr_6c2b50(__int64);
__int64 GameHr_95f500(char, __int64, __int64, __int64);
__int64 GameRoutine_15748c0_alt1(__int64, unsigned __int16*,
                                 char) __asm__("GameRoutine_15748c0");
__int64 GameRoutine_157a1e0_alt2(__int64*, unsigned __int16*, unsigned __int8,
                                 char, char, char,
                                 char) __asm__("GameRoutine_157a1e0");
__int64 GameRoutine_157ac20_alt1(__int64*, const char*, char,
                                 char) __asm__("GameRoutine_157ac20");
__int64 GameRoutine_157c220_alt1(__int64*, int, int, char,
                                 char) __asm__("GameRoutine_157c220");
__int64 GameRoutine_157ecd0_alt1(__int64*, __int64,
                                 char) __asm__("GameRoutine_157ecd0");
__int64 GameRoutine_1585290_alt3(__int64*, const char*,
                                 const char*) __asm__("GameRoutine_1585290");
__int64 GameRoutine_790080_alt1(__int64) __asm__("GameRoutine_790080");
__int64 GameRoutine_7992e0_alt1(__int64) __asm__("GameRoutine_7992e0");
__int64 GmapUIDef_16537e0(__int64*, __int64);
__int64
LayoutAccessor_1562cf0_alt3(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 StatusItem_188df50(__int64*, unsigned int*, char, char);
__int64 Troop_133ed80_alt1(__int64 result, __int64) __asm__("Troop_133ed80");
__int64 game_1841930(__int64, __int64);
__int64 game_95e950_alt1(__int64, __int64) __asm__("game_95e950");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 ui_LayoutAccessor_FindPane_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt2(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__n128 BattleArea_8b9d00_alt1(__int64) __asm__("BattleArea_8b9d00");
char* GameHr_6ed030(__int64);
char* GameHr_6fb960(__int64);
const char* GameRoutine_159d0c0_alt1(const char* result, char,
                                     char) __asm__("GameRoutine_159d0c0");
float game_156c160_alt1(__int64) __asm__("game_156c160");
unsigned __int64 GameHr_1562680(unsigned __int64 result, char*, float);
unsigned __int64 GameRoutine_1582e00_alt1(__int64,
                                          int) __asm__("GameRoutine_1582e00");
unsigned __int64 GameRoutine_842cb0_alt1(_DWORD*,
                                         _QWORD*) __asm__("GameRoutine_842cb0");
unsigned __int64
GameRoutine_842e20_alt1(_DWORD*, _QWORD*,
                        unsigned __int16*) __asm__("GameRoutine_842e20");
void BattleSide_Destructor_alt1(_QWORD*) __asm__("BattleSide_Destructor");
void GameHr_156c850(__int64, const char*);
void GameRoutine_156c910_alt2(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
void GameRoutine_66dd60_alt1(__int64*, unsigned __int64,
                             _DWORD*) __asm__("GameRoutine_66dd60");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void LayoutAccessor_1562060_alt3(__int64*, const char*,
                                 const char*) __asm__("LayoutAccessor_1562060");
void __attribute__((noreturn))
GameRoutine_159fb80_alt1() __asm__("GameRoutine_159fb80");
void __attribute__((noreturn))
GameRoutine_6e5a20_alt1() __asm__("GameRoutine_6e5a20");
void __attribute__((noreturn))
GameRoutine_740050_alt1() __asm__("GameRoutine_740050");
void game_map_790ba0_alt1(__int64) __asm__("game_map_790ba0");
__int64 game_gameui_Util_SetUnitInfoMasteryLevel(_QWORD* a1, __int64 a2);
__int64 Util_15760a0(__int64 a1, char a2);
void Util_1578f20(_QWORD* a1, __int64 a2, char a3);
__int64 Util_15792c0(__int64* a1, unsigned __int16* a2, char a3, char a4,
                     _QWORD* a5, const char* a6, const char* a7, char a8);
__int64 Util_157b410(__int64 a1, __int64 a2);
__int64* Util_157c0a0(__int64** a1, char a2);
void Util_157e3a0(__int64* a1, unsigned int* a2, unsigned __int8 a3,
                  _QWORD* a4);
__int64 Util_157f3e0(__int64 a1, int a2, const char* a3, unsigned int* a4,
                     char a5);
void Util_1581550(__int64* a1, __int64 a2, unsigned __int16* a3,
                  unsigned __int8 a4, unsigned __int8 a5);
void game_gameui_Util_SetSkillExpBonus(__int64* a1, __int64 a2);
__int64 Util_1582b50(__int64* a1, __int64 a2);
void Util_1583180(__int64* a1, unsigned __int8* a2, __int64 a3);
void game_gameui_Util_SetGrowthRateForUnitInfo(__int64 a1, __int64 a2);
void game_gameui_Util_SetArtsSkillStatus(__int64* a1, _DWORD* a2, __int64 a3,
                                         char a4, char a5);
void game_gameui_Util_SetArtsSkillStatusForCompare(__int64* a1, __int64 a2,
                                                   __int64 a3, __int64 a4);
void game_gameui_Util_SetGambitSkillStatus(__int64* a1, _DWORD* a2, __int64 a3,
                                           const char* a4);
__attribute__((swiftcall)) void
game_gameui_Util_GetCorpsStatusUnitList(PSEUDO_X8 x8_, char a1, char a2,
                                        int a3);
_QWORD* GameRoutine_93eed0(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_fa73c0(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__attribute__((swiftcall)) void game_Unit_GetParams(PSEUDO_X8, __int64);
__int64 GameRoutine_93f040(__int64 result, __int64, int);
__int64 LayoutAccessor_1587520(__int64*, unsigned int, unsigned int,
                               unsigned int, unsigned int, char);
__int64 StatusClass_189d120(__int64*, _QWORD*, char, char, char, char, char);
__int64 game_Unit_GetParamLimit_alt1(_QWORD*, unsigned __int8*) __asm__(
    "game_Unit_GetParamLimit");
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
extern __int64 (*GameData_204de08[])();
extern __int64 (*GameData_204de88[])();
extern __int64 (*GameData_204df08[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 GameData_21c9988;
extern __int64 GameData_21f4374;
extern __int64 GameData_21f437c;
extern char* GameData_204f080[89];
void LayoutAccessor_1587220(__int64*, __int64, int, int, int, int, int, char,
                            char);
void __attribute__((noreturn)) GameRoutine_15a0040();
void __attribute__((noreturn)) GameRoutine_803010();
void Util_157f4e0(__int64* a1, __int64 a2, __int64 a3);
__int64 game_gameui_Util_SetStatusForClassChange(__int64 result, _QWORD* a2,
                                                 __int64 a3, char a4, char a5);
__int64 Util_15892d0(__int64** a1, unsigned __int8 a2, unsigned __int8 a3,
                     __int64 a4);

__int64 game_gameui_Util_CountAvailableArtsNum(__int64 a1, __int64 a2,
                                               __int64 a3)
{
  __int64 v4;
  __int64* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  struct {
    __int64 v14[4];
    __int64* v15;
  } v14_;
  int v16;
  __int64 v17;

  v17 = a1;
  v4 = 32;
  v5 = v14_.v14;
  v14_.v14[0] = 32;
  v6 = game_UnitSkillList_GetMaxValue_alt1((_QWORD*)(a1 + 1744), v14_.v14, a3);
  v16 = 0;
  v14_.v15 = v14_.v14;
  v14_.v14[0] = (__int64)GameData_204d4f8;
  v14_.v14[1] = (__int64)&v17;
  v14_.v14[2] = (__int64)&v16;
  if ((*(_BYTE*)(a1 + 1536) & 4) == 0) {
    goto LABEL_13;
  }
  v7 = *(_QWORD*)(a1 + 1496);
  v8 = *(_QWORD*)(a1 + 1488);
  if ((int)((unsigned __int64)(v7 - v8) >> 2) < 1) {
    v5 = v14_.v14;
  LABEL_12:
    v4 = 32;
    goto LABEL_13;
  }
  v9 = 0;
  v10 = 0;
  v11 = GameData_212c880[0];
  v12 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                             8LL * (*(_DWORD*)(v8 + v9) & 0xFFF)) +
                  104LL) == 2) {
      if (v14_.v15 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(__int64*, __int64))(*v14_.v15 + 48))(v14_.v15, v8 + v9);
      v12 = *v11;
      v7 = *(_QWORD*)(a1 + 1496);
      v8 = *(_QWORD*)(a1 + 1488);
    }
    ++v10;
    v9 += 4;
  } while (v10 < (int)((unsigned __int64)(v7 - v8) >> 2));
  v5 = v14_.v15;
  if (v14_.v15 == v14_.v14) {
    goto LABEL_12;
  }
  if (v14_.v15 != nullptr) {
    v4 = 40;
  LABEL_13:
    (*(void (**)(__int64*))(*v5 + v4))(v5);
  }
  return (unsigned int)(v6 + v16 + 3);
}

__int64 Util_1574d80(__int64* a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64* v5;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  int v14;
  int v15;
  char v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  int v26;
  int v27;
  char v28;
  __int64 result;
  struct {
    __int64* v30;
    __int64 v31;
    unsigned __int64 v32;
    unsigned __int64 v33;
    int v34;
    int v35;
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
  } v30_;
  float v49;
  _DWORD v50[2];

  LayoutAccessor_1560070_alt1((void*)(&v30_.v30), a1, "L_Info00");
  if (v30_.v31 != 0) {
    v4 = std___1___shared_weak_count_lock_alt1(v30_.v31);
    v5 = v30_.v30;
    if (v30_.v31 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v30_.v31);
    }
    if (v4 == 0 || v5 == nullptr) {
      if (v4 == 0) {
        goto LABEL_23;
      }
    }
    else {
      LayoutAccessor_155e830((__int64)v5, (a2 & 0x1A) != 0);
      if ((a2 & 0x1A) != 0) {
        v30_.v36 = -1;
        v30_.v37 = -1;
        v30_.v38 = -1;
        v30_.v39 = -1;
        v7 = *msg_MessageManager_instance__ptr[0];
        v30_.v40 = -1;
        v30_.v41 = -1;
        v30_.v42 = -1;
        v30_.v43 = -1;
        v30_.v44 = -1;
        v30_.v45 = -1;
        v30_.v46 = -1;
        v30_.v47 = -1;
        v30_.v30 = GameData_212e348 + 2;
        v30_.v31 = 0xFFFF0001FFFF0000LL;
        v30_.v32 = 0xFFFF0004FFFF0002LL;
        v30_.v33 = 0xFFFF0006FFFF0005LL;
        v30_.v48 = 8;
        v30_.v34 = -65529;
        v30_.v35 = -65528;
        v8 = GameRoutine_a4dbe0_alt2(v7, "MID_Menu_Cause_NotAvailable_Facility",
                                     0);
        if (v8 != nullptr) {
          v9 = (__int64)v8;
          v10 = ui_LayoutAccessor_FindTextBox_alt2(v5, "T_TxtState");
          if (v10 != 0) {
            GameRoutine_156c5d0(v10, v9, 0);
          }
        }
        LayoutAccessor_1562cf0_alt3((__int64)v5,
                                    (unsigned int*)"FacilityDisable");
        LayoutAccessor_1562cf0_alt3((__int64)v5, (unsigned int*)"IconDefault");
        v11 = ui_LayoutAccessor_FindTextBox_alt2(v5, "T_TxtState");
        if (v11 != 0) {
          v12 = v11;
          v13 = (_QWORD*)ui_LayoutAccessor_FindTextBox_alt2(v5, "T_TxtState");
          if (v13 != nullptr) {
            GameRoutine_190a0c0_alt2((float*)&v30_.v30, (__int64)v50, &v49, v13,
                                     v13[27]);
            v14 = v50[0];
            v15 = v50[1];
          }
          else {
            v14 = 0;
            v15 = 0;
          }
          v16 = *(_BYTE*)(v12 + 88);
          *(_DWORD*)(v12 + 80) = v14;
          *(_DWORD*)(v12 + 84) = v15;
          *(_BYTE*)(v12 + 88) = v16 | 0x10;
        }
        GameRoutine_1585290_alt3(v5, "A_Txt", "Bg");
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt2(v4);
    }
  }
LABEL_23:
  LayoutAccessor_1560070_alt1((void*)(&v30_.v30), a1, "L_Info01");
  if (v30_.v31 == 0) {
    goto LABEL_42;
  }
  v17 = std___1___shared_weak_count_lock_alt1(v30_.v31);
  v18 = v30_.v30;
  if (v30_.v31 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v30_.v31);
  }
  if (v17 != 0 && v18 != nullptr) {
    LayoutAccessor_155e830((__int64)v18, a2 & 1);
    if ((a2 & 1) != 0) {
      v30_.v36 = -1;
      v30_.v37 = -1;
      v30_.v38 = -1;
      v30_.v39 = -1;
      v19 = *msg_MessageManager_instance__ptr[0];
      v30_.v40 = -1;
      v30_.v41 = -1;
      v30_.v42 = -1;
      v30_.v43 = -1;
      v30_.v44 = -1;
      v30_.v45 = -1;
      v30_.v46 = -1;
      v30_.v47 = -1;
      v30_.v30 = GameData_212e348 + 2;
      v30_.v31 = 0xFFFF0001FFFF0000LL;
      v30_.v32 = 0xFFFF0004FFFF0002LL;
      v30_.v33 = 0xFFFF0006FFFF0005LL;
      v30_.v48 = 8;
      v30_.v34 = -65529;
      v30_.v35 = -65528;
      v20 = GameRoutine_a4dbe0_alt2(v19, "MID_Menu_Cause_NotPerson_Absence", 0);
      if (v20 != nullptr) {
        v21 = (__int64)v20;
        v22 = ui_LayoutAccessor_FindTextBox_alt2(v18, "T_TxtState");
        if (v22 != 0) {
          GameRoutine_156c5d0(v22, v21, 0);
        }
      }
      LayoutAccessor_1562cf0_alt3((__int64)v18,
                                  (unsigned int*)"FacilityDisable");
      LayoutAccessor_1562cf0_alt3((__int64)v18, (unsigned int*)"IconDefault");
      v23 = ui_LayoutAccessor_FindTextBox_alt2(v18, "T_TxtState");
      if (v23 != 0) {
        v24 = v23;
        v25 = (_QWORD*)ui_LayoutAccessor_FindTextBox_alt2(v18, "T_TxtState");
        if (v25 != nullptr) {
          GameRoutine_190a0c0_alt2((float*)&v30_.v30, (__int64)v50, &v49, v25,
                                   v25[27]);
          v26 = v50[0];
          v27 = v50[1];
        }
        else {
          v26 = 0;
          v27 = 0;
        }
        v28 = *(_BYTE*)(v24 + 88);
        *(_DWORD*)(v24 + 80) = v26;
        *(_DWORD*)(v24 + 84) = v27;
        *(_BYTE*)(v24 + 88) = v28 | 0x10;
      }
      GameRoutine_1585290_alt3(v18, "A_Txt", "Bg");
    }
  }
  else if (v17 == 0) {
    goto LABEL_42;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt2(v17);
  }
LABEL_42:
  result = ui_LayoutAccessor_FindAlignment_alt2(a1, "A_Info");
  if (result != 0) {
    return Alignment_56b600_alt1(result);
  }
  return result;
}

__int64 Util_1575150(__int64 a1, __int64 a2, __int64* a3, __int64 a4, int a5,
                     unsigned int a6, unsigned int a7, int a8, char a9)
{
  __int64 v10;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 result;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  _QWORD v28[2];

  v10 = *(_QWORD*)(a1 + 8);
  if (v10 == 0 || (v17 = std___1___shared_weak_count_lock(v10)) == 0) {
  LABEL_15:
    result = a3[1];
    if (result == 0) {
      return result;
    }
    goto LABEL_16;
  }
  v18 = *(__int64**)a1;
  v19 = v17;
  if (v18 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
    v20 = std___1___shared_weak_count_lock(v17);
    v21 = v20;
    if ((a9 & 1) != 0) {
      if (v20 != 0) {
        GameRoutine_1571860(v18, a4, 1, 0, 0, 0);
        goto LABEL_9;
      }
    }
    else if (v20 != 0) {
      GameRoutine_1572ac0(v18, a4, 0, 0);
    LABEL_9:
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak(v21);
      }
    }
    std___1___shared_weak_count___release_weak(v19);
    v22 = ui_LayoutAccessor_FindPane(v18, "Face");
    if (v22 != 0) {
      v22 = __dynamic_cast(v22, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1840740(v22, 0, a4, a7, 1);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_15;
  }
  (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
  std___1___shared_weak_count___release_weak(v19);
  result = a3[1];
  if (result == 0) {
    return result;
  }
LABEL_16:
  result = std___1___shared_weak_count_lock(result);
  if (result != 0) {
    v24 = result;
    result = *a3;
    if (*a3 != 0) {
      if ((unsigned __int8)a7 == 6) {
        v25 = 0;
      }
      else {
        v25 = (a6 != 2) & ((a5 != 0) | a8);
      }
      result = LayoutAccessor_155e830(result, v25);
      if (v25 != 0) {
        v26 = *a3;
        v27 = a3[1];
        v28[0] = v26;
        v28[1] = v27;
        if (v27 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                    memory_order_relaxed);
          GameRoutine_15753b0(v28, a4, a6, a7);
          result = std___1___shared_weak_count___release_weak(v27);
        }
        else {
          result = GameRoutine_15753b0(v28, a4, a6, a7);
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      return std___1___shared_weak_count___release_weak(v24);
    }
  }
  return result;
}

void Util_15753b0(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  bool v12;
  int v13;
  __int64 v14;
  const char* v15;
  char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  char* v26;
  char* v27;
  const char* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  int v38;
  int v39;
  char v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  const char* v45;
  float v46;
  float v47;
  __int64 v48;
  float v49;
  unsigned int v50;
  unsigned int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  struct {
    __int64 v55;
    __int64 v56;
  } v55_;
  struct {
    __int64 v57;
    __int64 v58;
  } v57_;
  struct {
    _QWORD v59[2];
    char* v60;
  } v59_;
  struct {
    _QWORD v61[2];
    char* v62;
  } v61_;
  struct {
    _QWORD v63[2];
    const char* v64;
  } v63_;
  float v65;
  _DWORD v66[2];

  v5 = *(_QWORD*)(a1 + 8);
  if (v5 != 0) {
    v9 = std___1___shared_weak_count_lock_alt1(v5);
    if (v9 != 0) {
      v10 = *(__int64**)a1;
      v11 = v9;
      if (v10 == nullptr ||
          (a3 != 2 ? (v12 = a4 == 6) : (v12 = false),
           v12 ? (v13 = 0) : (v13 = 1),
           LayoutAccessor_155e830((__int64)v10, v13), v13 == 0)) {
      LABEL_86:
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak_alt2(v11);
        }
        return;
      }
      v14 = a4;
      LayoutAccessor_1562cf0_alt3(
          (__int64)v10,
          (unsigned int*)((char*)GameData_1bdcb48 + GameData_1bdcb48[a4]));
      v63_.v63[1] = 0;
      v63_.v64 = nullptr;
      v63_.v63[0] = 0;
      if (a3 != 0) {
        v15 = "Strengths";
      }
      else {
        v15 = "Likes";
      }
      v16 = game_util_Format_alt3("MID_%s", v15);
      v17 = strlen_alt1(v16);
      if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_89;
      }
      v18 = v17;
      if (v17 >= 0x17) {
        if ((v17 | 7) == 0x17) {
          v20 = 26;
        }
        else {
          v20 = (v17 | 7) + 1;
        }
        v19 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v20, 16, 0);
        v61_.v61[1] = v18;
        v61_.v62 = v19;
        v61_.v61[0] = v20 | 1;
      }
      else {
        LOBYTE(v61_.v61[0]) = 2 * v17;
        v19 = (char*)v61_.v61 + 1;
        if (v17 == 0) {
        LABEL_23:
          v19[v18] = 0;
          v21 = game_util_Format_alt3("m%02d", (unsigned int)a4 + 1);
          v22 = strlen_alt1(v21);
          if (v22 < 0xFFFFFFFFFFFFFFF7LL) {
            v23 = v22;
            if (v22 >= 0x17) {
              if ((v22 | 7) == 0x17) {
                v25 = 26;
              }
              else {
                v25 = (v22 | 7) + 1;
              }
              v24 = (char*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v25, 16, 0);
              v59_.v59[1] = v23;
              v59_.v60 = v24;
              v59_.v59[0] = v25 | 1;
            }
            else {
              LOBYTE(v59_.v59[0]) = 2 * v22;
              v24 = (char*)v59_.v59 + 1;
              if (v22 == 0) {
                goto LABEL_32;
              }
            }
            memmove_alt1((__int64)v24, (__int64)v21, v23);
          LABEL_32:
            v24[v23] = 0;
            v57_.v57 = a2;
            v57_.v58 = 0;
            if (a2 != 0) {
              v57_.v58 = *(_QWORD*)(a2 + 392);
            }
            if ((v61_.v61[0] & 1) != 0) {
              v26 = v61_.v62;
            }
            else {
              v26 = (char*)v61_.v61 + 1;
            }
            if ((v59_.v59[0] & 1) != 0) {
              v27 = v59_.v60;
            }
            else {
              v27 = (char*)v59_.v59 + 1;
            }
            game_97e570_alt1((__int64)v63_.v63, &v57_.v57, (__int64)v26,
                             (__int64)v27);
            if ((v63_.v63[0] & 1) != 0) {
              v28 = v63_.v64;
            }
            else {
              v28 = (char*)v63_.v63 + 1;
            }
            LayoutAccessor_1562060_alt3(v10, "T_Txt", v28);
            LayoutAccessor_1560070_alt1((void*)(&v55_.v55), v10, "L_Favor");
            if (v55_.v56 != 0) {
              v29 = std___1___shared_weak_count_lock_alt1(v55_.v56);
              if (v29 != 0) {
                v30 = v29;
                if (v55_.v55 != 0) {
                  if (a4 == 6) {
                    LayoutAccessor_155e830(v55_.v55, 0);
                  }
                  else {
                    v31 = v55_.v55;
                    LayoutAccessor_155e830(v55_.v55, 1);
                    LayoutAccessor_1562cf0_alt3(
                        v31, (unsigned int*)GameData_204d200[v14]);
                  }
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
                  std___1___shared_weak_count___release_weak_alt2(v30);
                }
              }
              if (v55_.v56 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v55_.v56);
              }
            }
            v32 = ui_LayoutAccessor_FindPane_alt2(v10, "Wdw");
            if (v32 != 0) {
              v33 = __dynamic_cast(v32, GameData_212d670[0],
                                   GameData_212fc70[0], 0);
              if (v33 != 0) {
                v34 = v33;
                v35 = ui_LayoutAccessor_FindTextBox_alt2(v10, "T_Txt");
                if (v35 != 0) {
                  v36 = v35;
                  v37 =
                      (_QWORD*)ui_LayoutAccessor_FindTextBox_alt2(v10, "T_Txt");
                  if (v37 != nullptr) {
                    GameRoutine_190a0c0_alt2((float*)&v57_.v57, (__int64)v66,
                                             &v65, v37, v37[27]);
                    v38 = v66[0];
                    v39 = v66[1];
                  }
                  else {
                    v38 = 0;
                    v39 = 0;
                  }
                  v40 = *(_BYTE*)(v36 + 88);
                  *(_DWORD*)(v36 + 80) = v38;
                  *(_DWORD*)(v36 + 84) = v39;
                  *(_BYTE*)(v36 + 88) = v40 | 0x10;
                }
                v41 = ui_LayoutAccessor_FindAlignment_alt2(v10, "A_Contents");
                if (v41 != 0) {
                  Alignment_56b600_alt1(v41);
                  v42 = v10[1];
                  if (v42 != 0) {
                    v43 = std___1___shared_weak_count_lock_alt1(v42);
                    if (v43 != 0) {
                      v44 = v43;
                      if (*v10 != 0) {
                        ControlCreator_13633c0_alt2(*v10);
                      }
                      if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
                        std___1___shared_weak_count___release_weak_alt2(v44);
                      }
                    }
                  }
                }
                v45 = Pane_58fac0_alt1(v34, "Margin_Width");
                if (v45 != nullptr) {
                  v46 = (float)*(int*)&v45[*((unsigned int*)v45 + 1)];
                }
                else {
                  v46 = 0x1.e000000000000p+5f;
                }
                v47 = *(float*)(v34 + 84);
                v48 = ui_LayoutAccessor_FindPane_alt2(v10, "A_Contents");
                v49 = game_156c160_alt1(v48);
                LOWORD(v50) = *(_WORD*)(v34 + 218);
                LOWORD(v51) = *(_WORD*)(v34 + 220);
                ui_LayoutAccessor_SetPaneSize_alt2(
                    (__int64)v10, "Wdw",
                    fmaxf(v46 + v49, (float)v50 + (float)v51), v47);
              }
            }
            if ((v59_.v59[0] & 1) != 0 && v59_.v60 != nullptr) {
              v52 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v52 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v52,
                  (__int64)v59_.v60);
            }
            if ((v61_.v61[0] & 1) != 0 && v61_.v62 != nullptr) {
              v53 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v53 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                  (__int64)v61_.v62);
            }
            if ((v63_.v63[0] & 1) != 0 && v63_.v64 != nullptr) {
              v54 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v54 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v54,
                  (__int64)v63_.v64);
            }
            goto LABEL_86;
          }
        LABEL_89:
          String_60a1d0_alt1();
        }
      }
      memmove_alt1((__int64)v19, (__int64)v16, v18);
      goto LABEL_23;
    }
  }
}

__int64 Util_15758f0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4,
                     unsigned int a5, char a6, char a7)
{
  __int64 result;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[2];
  _QWORD v22[2];
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v15 = *(__int64**)a1;
      v16 = result;
      if (v15 == nullptr) {
      LABEL_19:
        if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          return std___1___shared_weak_count___release_weak(v16);
        }
        return result;
      }
      LayoutAccessor_1560070((void*)(&v27), v15, (__int64)"L_UnitInfo");
      LayoutAccessor_1560070((void*)(&v25), v15, (__int64)"L_Motivation");
      LayoutAccessor_1560070((void*)(&v23), v15, (__int64)"L_BlnFavor");
      v18 = v28;
      v22[0] = v27;
      v22[1] = v28;
      if (v28 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                                  memory_order_relaxed);
      }
      v19 = v26;
      if (v26 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 16), 1u,
                                  memory_order_relaxed);
      }
      v20 = v24;
      v21[0] = v23;
      v21[1] = v24;
      if (v24 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                  memory_order_relaxed);
        Util_1575150_alt1(v22, v17, v21, a2, a3, a4, a5, a6 & 1, a7 & 1);
        std___1___shared_weak_count___release_weak(v20);
        if (v19 == 0) {
        LABEL_11:
          if (v18 != 0) {
            std___1___shared_weak_count___release_weak(v18);
          }
          if (v24 != 0) {
            std___1___shared_weak_count___release_weak(v24);
          }
          if (v26 != 0) {
            std___1___shared_weak_count___release_weak(v26);
          }
          result = v28;
          if (v28 != 0) {
            result = std___1___shared_weak_count___release_weak(v28);
          }
          goto LABEL_19;
        }
      }
      else {
        Util_1575150_alt1(v22, v17, v21, a2, a3, a4, a5, a6 & 1, a7 & 1);
        if (v19 == 0) {
          goto LABEL_11;
        }
      }
      std___1___shared_weak_count___release_weak(v19);
      goto LABEL_11;
    }
  }
  return result;
}

__int64 game_gameui_Util_SetUnitInfoTraining(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 (**v11)();
    __int64 v12;
    __int64** v13;
    char gap24_[8];
    __int64 (***v14)();
  } v11_;
  struct {
    __int64* v15;
    __int64 v16;
  } v15_;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    v15_.v16 = result;
    if (result != 0) {
      v15_.v15 = *(__int64**)a1;
      if (v15_.v15 == nullptr) {
      LABEL_22:
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v10 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          return std___1___shared_weak_count___release_weak_alt2(v10);
        }
        return result;
      }
      LayoutAccessor_1560070_alt1((void*)(&v11_.v11), v15_.v15, "L_UnitInfo");
      if (v11_.v12 != 0) {
        v5 = std___1___shared_weak_count_lock_alt1(v11_.v12);
        v6 = (__int64*)v11_.v11;
        if (v11_.v12 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v11_.v12);
        }
        if (v5 != 0 && v6 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                    memory_order_relaxed);
          v7 = std___1___shared_weak_count_lock_alt1(v5);
          if (v7 != 0) {
            v8 = v7;
            LayoutAccessor_1571860(v6, a2, 1, 0, 0, 0);
            if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
              std___1___shared_weak_count___release_weak_alt2(v8);
            }
          }
          std___1___shared_weak_count___release_weak_alt2(v5);
        }
        else if (v5 == 0) {
          goto LABEL_16;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak_alt2(v5);
        }
      }
    LABEL_16:
      Util_1575c70_alt1((__int64)v15_.v15, a2, 0,
                        "L_MasteryInfoItem%02d/L_MasteryItem", 0, 0);
      v11_.v11 = GameData_204d578;
      v11_.v12 = a2;
      v11_.v13 = &v15_.v15;
      v11_.v14 = &v11_.v11;
      GameRoutine_156d580((__int64)&v11_.v11);
      if (v11_.v14 == &v11_.v11) {
        v9 = 4;
      }
      else {
        if (v11_.v14 == nullptr) {
          goto LABEL_21;
        }
        v9 = 5;
      }
      ((__int64 (*)(__int64))(*v11_.v14)[v9])((__int64)v11_.v14);
    LABEL_21:
      result = v15_.v16;
      if (v15_.v16 == 0) {
        return result;
      }
      goto LABEL_22;
    }
  }
  return result;
}

void Util_1575c70(__int64* a1, __int64 a2, int a3, const char* a4, char a5,
                  __int64 a6)
{
  const char* v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 (**v15)();
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  int v20;

  if (a2 == 0) {
    LayoutAccessor_155e830_alt1(a1, 0);
    return;
  }
  if (a4 != nullptr) {
    v11 = a4;
  }
  else {
    v11 = "L_MasteryInfoItem%02d";
  }
  LayoutAccessor_155e830_alt1(a1, 1);
  v18_.v18[2] = v11;
  v18_.v18[0] = GameData_204d888;
  v18_.v18[1] = a1;
  v18_.v19 = v18_.v18;
  GameRoutine_156d580((__int64)v18_.v18);
  if (v18_.v19 == v18_.v18) {
    v12 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_11;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v18_.v19 + v12))((__int64)v18_.v19);
LABEL_11:
  if (a3 == 2) {
    v20 = 0;
    v16 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
    *(_QWORD*)(v16 + 16) = a1;
    *(_QWORD*)(v16 + 24) = v11;
    *(_BYTE*)(v16 + 40) = a5 & 1;
    *(_QWORD*)(v16 + 48) = a6;
    *(_BYTE*)(v16 + 56) = 0;
    v18_.v19 = (_QWORD*)v16;
    *(_QWORD*)v16 = GameData_204d808;
    *(_QWORD*)(v16 + 8) = a2;
    *(_QWORD*)(v16 + 32) = &v20;
  }
  else {
    if (a3 == 1) {
      v20 = 0;
      v13 = a5 & 1;
      v14 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
      v15 = GameData_204d808;
    }
    else {
      if (a3 != 0) {
        return;
      }
      v20 = 0;
      v13 = a5 & 1;
      v14 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
      v15 = GameData_204d788;
    }
    *(_QWORD*)(v14 + 16) = a1;
    *(_QWORD*)(v14 + 24) = v11;
    *(_BYTE*)(v14 + 40) = v13;
    *(_QWORD*)(v14 + 48) = a6;
    v18_.v19 = (_QWORD*)v14;
    *(_QWORD*)v14 = v15;
    *(_QWORD*)(v14 + 8) = a2;
    *(_QWORD*)(v14 + 32) = &v20;
    *(_BYTE*)(v14 + 56) = 1;
  }
  GameRoutine_156d580((__int64)v18_.v18);
  if (v18_.v19 == v18_.v18) {
    v17 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      return;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*v18_.v19 + v17))((__int64)v18_.v19);
}

__int64 game_gameui_Util_SetUnitInfoMasteryLevel(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  _QWORD v10[2];

  v2 = a1[1];
  v10[0] = *a1;
  v10[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    game_gameui_Util_SetUnitInfoTraining((__int64)v10, a2);
    std___1___shared_weak_count___release_weak_alt2(v2);
    v5 = *a1;
    v4 = a1[1];
    if (v4 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  game_gameui_Util_SetUnitInfoTraining((__int64)v10, a2);
  v5 = *a1;
  v4 = a1[1];
  if (v4 != 0) {
  LABEL_3:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
LABEL_4:
  v8_.v8[2] = v4;
  v8_.v8[0] = GameData_204d608;
  v8_.v8[1] = v5;
  v8_.v9 = v8_.v8;
  GameRoutine_156d580((__int64)v8_.v8);
  result = (__int64)v8_.v9;
  if (v8_.v9 == v8_.v8) {
    v7 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8_.v9 + v7))((__int64)v8_.v9);
}

__int64 Util_15760a0(__int64 a1, char a2)
{
  __int64* v3;
  const char* v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  _QWORD v15[2];
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;

  v3 = *(__int64**)a1;
  if (a2 == 1) {
    v5 = "L_JobIconM";
  }
  else {
    v5 = "L_JobIconF";
  }
  v15[0] = v5;
  v15[1] = 10;
  GameRoutine_1587740((void*)(&v16_.v16), v3, v15);
  result = v16_.v17;
  if (v16_.v17 != 0) {
    v7 = std___1___shared_weak_count_lock_alt1(v16_.v17);
    v8 = v16_.v16;
    result = v16_.v17;
    if (v16_.v17 != 0) {
      result = std___1___shared_weak_count___release_weak_alt2(v16_.v17);
    }
    if (v7 == 0 || v8 == 0) {
      if (v7 == 0) {
        return result;
      }
    }
    else {
      *(_BYTE*)(v8 + 1109) = 0;
      *(_BYTE*)(v8 + 1107) = 0;
      *(_WORD*)(v8 + 1105) = 256;
      result = GameHr_1562680(v8 + 88, "Icon_On", 0x1.0000000000000p+0f);
      v10 = *(__int64**)(a1 + 16);
      v11 = **(_QWORD**)(a1 + 8);
      v12 = *v10;
      if (v11 != 0) {
        result = JobIcon_19a9be0(v8, v11, v12);
      }
      else if (v12 != 0) {
        v13 = *v10;
        v14 = **(_BYTE**)(a1 + 24);
        LODWORD(v16_.v16) = *(_DWORD*)((char*)((_UNKNOWN*)0x90LL) +
                                       (_QWORD)GameData_212da30 + 4);
        result = GameRoutine_19a8d80(v8, v13, a2, (unsigned int*)&v16_.v16, 0,
                                     -1, v14, 0, 0);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      return std___1___shared_weak_count___release_weak_alt2(v7);
    }
  }
  return result;
}

__int64 Util_15761f0(__int64* a1, __int64 a2)
{
  int v2;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  int v20;
  char* v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;

  if (a1[2] == 0) {
    return 0;
  }
  result = a1[1];
  if (result == 0) {
    return result;
  }
  v6 = std___1___shared_weak_count_lock_alt1(result);
  if (v6 == 0) {
    goto LABEL_12;
  }
  v7 = *a1;
  if (*a1 != 0) {
    v2 = *(unsigned __int8*)(v7 + 24);
    v8 = v7 + 152;
    if (v2 == 0) {
      v8 = 0;
    }
    v9 = v8 != a1[2];
  }
  else {
    v9 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v11 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt2(v11);
    if (v9) {
      goto LABEL_12;
    }
  LABEL_16:
    result = 0;
    if (a2 == 0) {
      return result;
    }
    goto LABEL_17;
  }
  if (!v9) {
    goto LABEL_16;
  }
LABEL_12:
  v10 = a1[1];
  if (v10 == 0) {
    return 0;
  }
  LOBYTE(v2) = *(_QWORD*)(v10 + 8) != -1;
  result = 0;
  if (a2 == 0) {
    return result;
  }
LABEL_17:
  if ((v2 & 1) == 0) {
    return result;
  }
  if (*(_BYTE*)(*(_QWORD*)(a2 + 400) + 96LL) != 2) {
    return 0;
  }
  v12 = ui_LayoutAccessor_FindPane_alt2(a1, "Img");
  if (v12 != 0) {
    v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v13 = 0;
  }
  LayoutAccessor_155e830((__int64)a1, 1);
  LayoutAccessor_1562cf0_alt3((__int64)a1, (unsigned int*)"BgAnimal");
  v14 = *(_QWORD*)(a2 + 400);
  v15 = *(unsigned __int8*)(a2 + 1880);
  v16 = (__int64*)(a2 + 1880);
  if (*(_BYTE*)(v14 + 96) == 2 && *(_BYTE*)(a2 + 1880) == 0) {
    v17 = *(_QWORD*)(v14 + 112);
    if (v17 != 0) {
      v16 = &GameData_21f4018[8 *
                              (unsigned __int64)*(unsigned __int8*)(v17 + 32)];
    }
    else {
      v16 = GameData_212c8b0[0];
    }
    v15 = *(unsigned __int8*)v16;
  }
  if (v15 == 0) {
    LayoutAccessor_1562cf0_alt3((__int64)a1, (unsigned int*)"Enable");
    if (v13 == 0) {
      return 1;
    }
  LABEL_43:
    v24 = "IconEmpty";
    v25 = v13;
    v26 = 7;
    v27 = ui_Manager_instance_ + 1264;
  LABEL_48:
    Manager_136a920(v27, v25, 0, v26, v24);
    return 1;
  }
  v18 = *(_QWORD*)(a2 + 408);
  v19 = GameData_212c8a0;
  v20 = *(_DWORD*)(a2 + 416);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * v15) +
                109LL) != 0 &&
      v18 == 0) {
    v22 = "Enable";
  }
  else {
    v22 = "Disable";
  }
  LayoutAccessor_1562cf0_alt3((__int64)a1, (unsigned int*)v22);
  if ((v20 & 0x40000) != 0) {
    if (v13 == 0) {
      return 1;
    }
    goto LABEL_43;
  }
  result = 1;
  if (v13 != 0) {
    v23 = *(_QWORD*)(*(_QWORD*)(*v19 + 64) + 8LL * *(unsigned __int8*)v16);
    if (v23 != 0) {
      if ((unsigned int)*(unsigned __int8*)(v23 + 32) - 1 > 4) {
        v24 = &GameData_1a9f09e;
      }
      else {
        v24 = (char*)*(&GameData_204f348 +
                       (unsigned __int8)(*(_BYTE*)(v23 + 32) - 1));
      }
      v27 = ui_Manager_instance_ + 1264;
      v26 = 2;
      v25 = v13;
      goto LABEL_48;
    }
  }
  return result;
}

__int64 Util_1576480(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 result;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  char* v8;
  char* v9;
  char* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  const char* v27;
  __int64 v28;
  const char* v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  bool v41;
  __int64 v42;
  __int64 v43;
  unsigned __int8 v44;
  __int64 v45;
  unsigned __int8 v46;
  unsigned int v47;
  double v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  unsigned int v55;
  __int64* v56;
  __int64 v57;
  float v58;
  __int64* v59;
  int v60;
  int v61;
  char* v62;
  double v63;
  const char** v64;
  float v65;
  __int64 v66;
  char* v67;
  __int64* v68;
  char* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  __int64* v79;
  bool v80;
  __int64 v81;
  __int64 v82;
  bool v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  int v89;
  __int16 v90;
  __int64 v91;
  __int64 v92;
  bool v93;
  __int64 v94;
  __int64 v95;
  unsigned int v96;
  __int64 v97;
  unsigned __int64 v98;
  unsigned int v99;
  bool v100;
  __int64 v101;
  char v103;
  char v104;
  char v105;
  __int64 v106;
  __int64 v107;
  _QWORD* v108;
  __int64 v109;
  _BYTE* v110;
  __int64 v111;
  __int64 i;
  __int64 v113;
  int* v114;
  __int64* v115;
  __int64 v116;
  int* v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  _QWORD* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  _QWORD* v125;
  __int64 v126;
  __int64* v127;
  __int64* v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  int v136;
  unsigned int v137;
  const char** v138;
  __int64 v139;
  char* v140;
  unsigned __int64 v141;
  const char* v142;
  unsigned __int64* v143;
  const char* v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64* v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  unsigned __int64* v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64* v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  unsigned __int64 v168;
  unsigned __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  unsigned __int64 v172;
  char* v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  const char* v176;
  unsigned __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  const char* v184;
  unsigned __int64 v185;
  unsigned __int64 v186;
  unsigned __int64 v187;
  char* v188;
  __int64* v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64* v194;
  char* v195;
  __int64 v196;
  unsigned __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  const char* v201;
  __int64 v202;
  const char* v203;
  __int64 v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  char* v207;
  unsigned __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  unsigned __int64 v212;
  unsigned __int64 v213;
  char* v214;
  unsigned __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  int v223;
  int v224;
  int v225;
  __int64 v226;
  unsigned __int64 v227;
  char* v228;
  char* v229;
  unsigned __int64* v230;
  const char* v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  unsigned __int64 v236;
  __int64 v237;
  __int64* v238;
  __int64 v239;
  __int64 v240;
  unsigned __int64* v241;
  const char* v242;
  __int64 v243;
  unsigned __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64* v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  unsigned __int64* v254;
  const char* v255;
  __int64 v256;
  unsigned __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64* v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  const char* v268;
  __int64 v269;
  __int64 v270;
  unsigned __int64 v271;
  unsigned __int64 v272;
  unsigned __int64 v273;
  unsigned __int64 v274;
  unsigned __int64 v275;
  unsigned __int64 v276;
  __int64 v277;
  const char* v278;
  __int64 v279;
  __int64 v280;
  unsigned __int64 v281;
  unsigned __int64 v282;
  unsigned __int64 v283;
  unsigned __int64 v284;
  unsigned __int64 v285;
  __int64 v286;
  unsigned __int64 v287;
  __int64 v288;
  unsigned __int64 v289;
  unsigned __int64* v290;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64* v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  unsigned __int64* v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64* v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  unsigned __int64 v313;
  unsigned __int64 v314;
  __int64 v315;
  __int64 v316;
  char* v317;
  __int64 v318;
  __int64 v319;
  unsigned __int64 v320;
  unsigned __int64 v321;
  unsigned __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64 v328;
  __int64 v329;
  unsigned int v330;
  __int64 v331;
  __int64 v332;
  _QWORD* v333;
  __int64 v334;
  int v335;
  __int64 v336;
  __int64 v337;
  char v338;
  unsigned int v339;
  __int64 v340;
  __int64 v341;
  __int64 v342;
  int v343;
  int v344;
  __int64 v345;
  __int64 v346;
  int v347;
  __int64 v348;
  struct {
    int* v349;
    __int64* v350;
    char* v351;
    int* v352;
    int* v353;
    int* v354;
    __int64** v355;
  } v349_;
  int v356;
  int v357;
  int v358;
  int v359;
  struct {
    const char* v360;
    unsigned __int64 v361;
  } v360_;
  struct {
    __int64 v362;
    __int64* v363;
    const char* v364;
  } v362_;
  struct {
    __int64 v365;
    unsigned __int64 v366;
    char* v367;
  } v365_;
  struct {
    const char* v368;
    const char* v369;
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
  } v368_;
  struct {
    _QWORD* v386;
    __int64 v387;
  } v386_;
  struct {
    __int64* v388;
    __int64 v389;
  } v388_;
  unsigned __int8 v390;
  struct {
    char* v391;
    __int64 v392;
  } v391_;
  struct {
    char* v393;
    unsigned __int64 v394;
  } v393_;
  struct {
    char* v395;
    __int64 v396;
  } v395_;
  __int64 v397;

  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  result = *(_QWORD*)(a1 + 8);
  v397 = a2;
  v390 = a3;
  if (result != 0 && *(_QWORD*)(result + 8) != -1) {
    v5 = std___1___shared_weak_count_lock_alt1(result),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    v6 = *(__int64**)a1;
    v388_.v388 = v6;
    v388_.v389 = v5;
    v7 = ui_LayoutAccessor_FindPane_alt1(v6, (__int64)"N_JobIcon"),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v7 != 0) {
      v8 = *(char**)(v7 + 40);
      v9 = (char*)(v7 + 32);
      if (v8 != (char*)(v7 + 32)) {
        do {
          v10 = v8;
          v8 = *((char**)v8 + 1);
          v11 = *(_QWORD*)v8;
          *(_QWORD*)(*(_QWORD*)v10 + 8LL) = v8;
          *(_QWORD*)v8 = *(_QWORD*)v10;
          *(_QWORD*)(v11 + 8) = v10;
          *(_QWORD*)v10 = v11;
          v368_.v368 = v10 + 168;
          v12 = v388_.v388;
          v368_.v369 = (const char*)strlen_alt1(v10 + 168),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
          v13 = v12[1];
          if (v13 != 0) {
            v14 = std___1___shared_weak_count_lock_alt1(v13),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
            if (v14 != 0) {
              v15 = v14;
              if (*v12 != 0) {
                Layout_1363bc0_alt1(*v12, &v368_.v368),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                std___1___shared_weak_count___release_weak_alt2(v15),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
              }
            }
          }
        } while (v8 != v9);
        v6 = v388_.v388;
      }
    }
    v368_.v368 = "L_JobIcon00";
    v368_.v369 = (_BYTE*)(((_UNKNOWN**)0x8LL) + 3);
    result = v6[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock_alt1(result),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
      if (result != 0) {
        v16 = *v6;
        v17 = result;
        if (v16 != 0) {
          result = X8CALL_X0(
              __int64, GameRoutine_15ac7e0((void*)((__int64*)&v386_.v386))),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          result = std___1___shared_weak_count___release_weak_alt2(v17),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        }
        if (v16 != 0) {
          result = v386_.v387;
          if (v386_.v387 != 0) {
            v18 = std___1___shared_weak_count_lock_alt1(v386_.v387),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
            if (v18 != 0) {
              v19 = v386_.v386;
              if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v20 = v18;
                (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                std___1___shared_weak_count___release_weak_alt2(v20),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
              }
              if (v19 != nullptr) {
                v21 = std___1___shared_weak_count_lock_alt1(v386_.v387),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s1", "=w"));
                (*(void (**)(_QWORD*, _QWORD))(*v386_.v386 + 40LL))(v386_.v386,
                                                                    0),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  std___1___shared_weak_count___release_weak_alt2(v21),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                }
                if ((v390 & 1) != 0) {
                  goto LABEL_69;
                }
                v22 = v388_.v388;
                v349_.v349 = (int*)"L_JobIcon00";
                v349_.v350 = (__int64*)(((_UNKNOWN**)0x8LL) + 3);
                v23 = v388_.v388[1];
                if (v23 == 0) {
                  goto LABEL_69;
                }
                v24 = std___1___shared_weak_count_lock_alt1(v23),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s1", "=w"));
                if (v24 == 0) {
                  goto LABEL_69;
                }
                v25 = *v22;
                v26 = v24;
                if (v25 != 0) {
                  GameRoutine_15ac7e0((void*)((__int64*)&v368_.v368)),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  std___1___shared_weak_count___release_weak_alt2(v26),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                }
                if (v25 == 0) {
                  goto LABEL_69;
                }
                v27 = v368_.v369;
                if (v368_.v369 == nullptr) {
                  goto LABEL_69;
                }
                v28 =
                    std___1___shared_weak_count_lock_alt1((__int64)v368_.v369),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s1", "=w"));
                v29 = v368_.v368;
                v30 = v28;
                std___1___shared_weak_count___release_weak_alt2((__int64)v27),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                if (v30 == 0 || v29 == nullptr) {
                  goto LABEL_66;
                }
                v31 = game_HashString((__int64)&GameData_1a98a4e),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s1", "=w"));
                v32 = 0;
                if (v31 == 0) {
                  goto LABEL_62;
                }
                v33 = *GameData_212c868;
                v34 = *(_QWORD*)(*GameData_212c868 + 96);
                if (v34 == 0 || *(_QWORD*)(v33 + 112) == 0) {
                  goto LABEL_62;
                }
                v35 = v34 - 1;
                if ((v34 & (v34 - 1)) != 0) {
                  v36 = v31;
                  if (v31 >= v34) {
                    v36 = v31 % v34;
                  }
                }
                else {
                  v36 = v35 & v31;
                }
                v37 = *(_QWORD**)(*(_QWORD*)(v33 + 88) + 8 * v36);
                if (v37 == nullptr || (v38 = (_QWORD*)*v37) == nullptr) {
                LABEL_61:
                  v32 = 0;
                  goto LABEL_62;
                }
                if ((v34 & v35) == 0) {
                  while (1) {
                    v40 = v38[1];
                    if (v40 == v31) {
                      if (v38[2] == v31) {
                        goto LABEL_782;
                      }
                    }
                    else if ((v40 & v35) != v36) {
                      goto LABEL_61;
                    }
                    v38 = (_QWORD*)*v38;
                    v32 = 0;
                    if (v38 == nullptr) {
                      goto LABEL_62;
                    }
                  }
                }
                while (1) {
                  v39 = v38[1];
                  if (v39 == v31) {
                    break;
                  }
                  if (v39 >= v34) {
                    v39 %= v34;
                  }
                  if (v39 != v36) {
                    goto LABEL_61;
                  }
                LABEL_51:
                  v38 = (_QWORD*)*v38;
                  if (v38 == nullptr) {
                    goto LABEL_61;
                  }
                }
                if (v38[2] != v31) {
                  goto LABEL_51;
                }
              LABEL_782:
                v32 = v38[3];
              LABEL_62:
                game_95eaa0((void*)((__int64)&v368_.v368), v397, v32),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                v41 = ((unsigned __int16)v368_.v368 & 0x201) == 0x200 &&
                      !GameRoutine_7fcd20(v397 + 512, v32),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s1", "=w"));
                v42 = v397;
                *((_BYTE*)v29 + 1105) = v41;
                *((_WORD*)v29 + 554) = 1;
                JobIcon_19a9be0((__int64)v29, v42, v32),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                JobIcon_19a9dd0((__int64)v29, v397, v32),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                (*(void (**)(const char*, __int64))(*(_QWORD*)v29 + 40LL))(v29,
                                                                           1),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
              LABEL_66:
                if (v30 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  std___1___shared_weak_count___release_weak_alt2(v30),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                }
              LABEL_69:
                v43 = ui_LayoutAccessor_FindPane_alt1(v388_.v388,
                                                      (__int64)"N_JobIcon"),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s1", "=w"));
                v44 = v390;
                v45 = v397;
                v333 = (_QWORD*)v43;
                v330 = (unsigned __int8)GameRoutine_960100(),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s1", "=w"));
                if ((v44 & 1) == 0 && v45 != 0) {
                  v46 = game_UnitMastery_GetMaxJobRank(v45 + 512, v45),
                  v50 = COERCE_AS(__typeof__(v50),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v52 = COERCE_AS(__typeof__(v52),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
                  v47 = v330;
                  if (v330 <= v46) {
                    v47 = v46;
                  }
                  v330 = v47;
                }
                v48 = ui_LayoutAccessor_GetPaneTranslate(
                    v388_.v388, (__int64)"N_JobIcon00_W"),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s1", "=w"));
                v49 = *(float*)&v48;
                ui_LayoutAccessor_GetPaneTranslate(v388_.v388,
                                                   (__int64)"N_JobIcon00_H"),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                v51 = v50;
                ui_LayoutAccessor_GetPaneTranslate(v388_.v388,
                                                   (__int64)"N_JobIcon00"),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                v53 = v52;
                if (v390 != 0) {
                  v54 = -v51;
                }
                else {
                  v54 = 0x0.0p+0f;
                }
                ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v388_.v388,
                                                      (__int64)"BgEquip", 0),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                if (v330 != 0) {
                  v335 = 0;
                  v55 = 1;
                  v331 = GameData_2130ec0[0] + 16;
                  v56 = GameData_212dfc8;
                  do {
                    v368_.v384 = 0;
                    v368_.v385 = 0;
                    v368_.v382 = 0;
                    v368_.v383 = 0;
                    v368_.v380 = 0;
                    v368_.v381 = 0;
                    v368_.v378 = 0;
                    v368_.v379 = 0;
                    v368_.v376 = 0;
                    v368_.v377 = 0;
                    v368_.v374 = 0;
                    v368_.v375 = 0;
                    v368_.v372 = 0;
                    v368_.v373 = 0;
                    v368_.v370 = 0;
                    v368_.v371 = 0;
                    v368_.v368 = nullptr;
                    v368_.v369 = nullptr;
                    UnitUtil_15e0640((__int64)&v368_.v368, v397, v55, v390, 1),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                    v57 = 0;
                    v339 = v55;
                    v58 = v54 + (float)(v53 + (float)(v51 * (float)v55));
                    do {
                      v59 = v388_.v388;
                      if ((int)v57 <= 1) {
                        v60 = 1;
                      }
                      else {
                        v60 = v57;
                      }
                      v61 = v60 - 1;
                      v62 = game_util_Format_alt3("N_JobIcon%02d",
                                                  (unsigned int)(v60 - 1)),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                      v63 =
                          ui_LayoutAccessor_GetPaneTranslate(v59, (__int64)v62),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                      v336 = v57;
                      v64 = &(&v368_.v368)[3 * v57];
                      if (v64[1] != *v64) {
                        v65 = *(float*)&v63;
                        v66 = 0;
                        v343 = v61;
                        while (1) {
                          v67 = game_util_Format_alt3(
                              "L_JobIcon_Rank%d_Attr%d_%02d", v55, v61, v66),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                          v68 = v388_.v388;
                          v69 = v67;
                          v70 = v388_.v388[1];
                          if (v70 == 0) {
                            goto LABEL_88;
                          }
                          v71 = std___1___shared_weak_count_lock_alt1(v70),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                          if (v71 == 0) {
                            goto LABEL_88;
                          }
                          v72 = *v68;
                          v73 = v71;
                          if (*v68 == 0) {
                            v81 = v345;
                            goto LABEL_125;
                          }
                          if (v386_.v387 == 0 ||
                              (v74 = std___1___shared_weak_count_lock_alt1(
                                   v386_.v387)) == 0) {
                            v81 = 0;
                            v346 = 0;
                            goto LABEL_125;
                          }
                          v75 = (__int64)v386_.v386;
                          if (v386_.v386 != nullptr) {
                            v76 = v386_.v386[1];
                            if (*(_QWORD*)(*(_QWORD*)(v76 + 24) + 24LL) != 0) {
                              break;
                            }
                          }
                          v55 = v339;
                        LABEL_115:
                          LODWORD(v76) = 0;
                        LABEL_116:
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v74 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v82 = v74;
                            (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            std___1___shared_weak_count___release_weak_alt2(
                                v82),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                          }
                          v83 = (_DWORD)v76 == 0;
                          v81 = v345;
                          v84 = v346;
                          if (v83) {
                            v81 = 0;
                          }
                          if (v83) {
                            v84 = 0;
                          }
                          v346 = v84;
                        LABEL_125:
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v73 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
                            if (v72 == 0) {
                              goto LABEL_87;
                            }
                          }
                          else {
                            (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            std___1___shared_weak_count___release_weak_alt2(
                                v73),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            if (v72 == 0) {
                            LABEL_87:
                              v61 = v343;
                              v345 = v81;
                              goto LABEL_88;
                            }
                          }
                          if (v81 != 0) {
                            v85 = std___1___shared_weak_count_lock_alt1(v81),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                            v86 = v81;
                            v87 = v85;
                            v345 = v86;
                            std___1___shared_weak_count___release_weak_alt2(
                                v86),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            if (v87 != 0 && v346 != 0) {
                              LODWORD(v349_.v350) = 0;
                              *(float*)&v349_.v349 =
                                  v65 + (float)(v49 * (float)(unsigned int)v66);
                              *((float*)&v349_.v349 + 1) = v58;
                              (*(void (**)(__int64, int**))(
                                  *(_QWORD*)v346 + 56LL))(v346, &v349_.v349),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              v88 = *(_QWORD*)&(*v64)[8 * v66];
                              game_95eaa0((void*)((__int64)&v365_.v365), v397,
                                          v88),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              v89 = v365_.v365 & 0x201;
                              game_95e2c0((void*)((__int16*)&v362_.v362), v397,
                                          v88),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              v90 = v362_.v362;
                              v91 = game_Unit_GetJob_alt1(v397),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                              v92 = v397;
                              v93 = false;
                              *(_BYTE*)(v346 + 1106) = 1;
                              if (v89 == 512) {
                                if (v88 != 0 &&
                                    (v94 = *(_QWORD*)(*(_QWORD*)(v88 + 24) +
                                                      1104LL)) != 0 &&
                                    (v95 = *(_QWORD*)(*(_QWORD*)(v94 + 24) +
                                                      1104LL)) != 0 &&
                                    (v96 = *(unsigned __int16*)(v95 + 412),
                                     *(_WORD*)(v95 + 412) != 0)) {
                                  v97 = *(_QWORD*)(v92 + 560);
                                  v98 = *(unsigned __int16*)(v95 + 16);
                                  if (v98 >= (*(_QWORD*)(v92 + 568) - v97) >>
                                      1) {
                                    v99 = 0;
                                  }
                                  else {
                                    v99 = *(_WORD*)(v97 + 2 * v98) & 0x3FF;
                                  }
                                  v93 = v99 < v96;
                                }
                                else {
                                  v93 = true;
                                }
                              }
                              v100 = (v90 & 0x400) != 0;
                              *(_BYTE*)(v346 + 1105) = v93;
                              game_95e2c0((void*)((__int16*)&v349_.v349), v92,
                                          v88),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              v101 = v397;
                              v103 = v89 != 512 && v91 != v88 || v100;
                              if (((unsigned __int16)v349_.v349 & 0xBC1) ==
                                  0x100) {
                                v104 = 2;
                              }
                              else {
                                v104 = v103;
                              }
                              *(_BYTE*)(v346 + 1109) = v104;
                              *(_BYTE*)(v346 + 1108) = 1;
                              JobIcon_19a9be0(v346, v101, v88),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              v105 = v397 != 0 &&
                                     game_Unit_GetJob_alt1(v397) == v88,
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                              v55 = v339;
                              GameRoutine_157ac20((__int64*)(v346 + 88),
                                                  (__int64)"IconEquip", v105,
                                                  1),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              (*(void (**)(__int64, __int64))(*(_QWORD*)v346 +
                                                              40LL))(v346, 1),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              if (v91 == v88) {
                                v61 = v343;
                                if (((v335 ^ 1) & 1) != 0) {
                                  v335 = 1;
                                  ui_LayoutAccessor_SetPaneVisible_alt1(
                                      (__int64)v388_.v388, (__int64)"BgEquip",
                                      1),
                                      v50 = COERCE_AS(
                                          __typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                                      v52 = COERCE_AS(
                                          __typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                                  *(float*)&v349_.v349 =
                                      v65 +
                                      (float)(v49 * (float)(unsigned int)v66);
                                  *((float*)&v349_.v349 + 1) = v58;
                                  LODWORD(v349_.v350) = 0;
                                  ui_LayoutAccessor_SetPaneTranslate(
                                      v388_.v388, (__int64)"BgEquip",
                                      (__int64)&v349_.v349),
                                      v50 = COERCE_AS(
                                          __typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                                      v52 = COERCE_AS(
                                          __typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                                }
                              }
                              else {
                                v61 = v343;
                              }
                            LABEL_160:
                              if (atomic_fetch_add(
                                      (atomic_ullong* volatile)(v87 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
                                (*(void (**)(__int64))(*(_QWORD*)v87 + 16LL))(
                                    v87),
                                    v50 = COERCE_AS(
                                        __typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                                    v52 = COERCE_AS(
                                        __typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                                std___1___shared_weak_count___release_weak_alt2(
                                    v87),
                                    v50 = COERCE_AS(
                                        __typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                                    v52 = COERCE_AS(
                                        __typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                              }
                              goto LABEL_88;
                            }
                            v61 = v343;
                            if (v87 != 0) {
                              goto LABEL_160;
                            }
                          }
                          else {
                            v61 = v343;
                            v345 = 0;
                          }
                        LABEL_88:
                          if (++v66 >=
                              (unsigned __int64)((v64[1] - *v64) >> 3)) {
                            goto LABEL_81;
                          }
                        }
                        v77 = v333;
                        v337 = v74;
                        if (*(_BYTE*)(v72 + 24) != 0) {
                          v78 = v72 + 152;
                        }
                        else {
                          v78 = 0;
                        }
                        v334 = v78;
                        if (v333 != nullptr) {
                          while (1) {
                            if ((atomic_load_explicit(
                                     (atomic_uchar* volatile)GameData_212dfd0,
                                     memory_order_acquire) &
                                 1) == 0 &&
                                __cxa_guard_acquire_alt1(
                                    (__int64)GameData_212dfd0) != 0) {
                              *v56 = (__int64)
                                  nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                              __cxa_guard_release_alt1(
                                  (__int64)GameData_212dfd0),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                            }
                            v79 = (__int64*)(*(__int64 (**)(_QWORD*))(
                                *v77 + 16LL))(v77),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                            if (v79 == v56) {
                              break;
                            }
                            do {
                              v79 = (__int64*)*v79;
                              v80 = v79 == v56 || v79 == nullptr;
                            } while (!v80);
                            if (v79 != nullptr) {
                              break;
                            }
                            v77 = (_QWORD*)v77[3];
                            if (v77 == nullptr) {
                              goto LABEL_163;
                            }
                          }
                          v334 = v77[29];
                        LABEL_163:
                          v74 = v337;
                          if (v76 == 0) {
                            goto LABEL_166;
                          }
                          v106 = (__int64)v333;
                          if (*(_QWORD*)(*(_QWORD*)(v76 + 24) + 24LL) == 0) {
                            LODWORD(v76) = 0;
                          LABEL_166:
                            v55 = v339;
                            goto LABEL_116;
                          }
                        }
                        else {
                          v106 = *(_QWORD*)(v72 + 176);
                        }
                        v332 = v106;
                        v107 = *game_g_frame_clock_ptr[0];
                        v108 = (_QWORD*)LayoutEx_579180(96),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                        if (v108 == nullptr) {
                          v55 = v339;
                          v74 = v337;
                          LODWORD(v76) = 0;
                          goto LABEL_116;
                        }
                        v109 = (__int64)v108;
                        v108[2] = v108 + 1;
                        *v108 = v331;
                        v108[1] = v108 + 1;
                        v108[9] = v108 + 9;
                        v108[10] = v108 + 9;
                        LayoutEx_57b150((__int64)v108, v107 + 568, v76, v334,
                                        0),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        v110 = *(_BYTE**)(v109 + 24);
                        LayoutEx_58d200(v110, v69),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        Pane_58dee0(v332, (__int64)v110),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        v111 = v76 + 72;
                        for (i = *(_QWORD*)(v76 + 80); i != v111;
                             i = *(_QWORD*)(i + 8)) {
                          v113 = LayoutEx_57cf40(v109, i - 40),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                          if (v113 != 0) {
                            Layout_1364020_alt1((_QWORD*)v72, i - 216, v113),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                          }
                        }
                        (*(__attribute__((swiftcall)) void (**)(
                            PSEUDO_X8, __int64, __int64))(
                            *(_QWORD*)v75 + 16LL))((void*)(&v365_.v365), v75,
                                                   v109),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        if (v365_.v365 != 0) {
                          v114 = (int*)__dynamic_cast(v365_.v365,
                                                      GameData_212dfc0[0],
                                                      GameData_2131968[0], 0),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                          v55 = v339;
                          if (v114 != nullptr) {
                            v349_.v349 = v114;
                            v349_.v350 = (__int64*)v365_.v366;
                            v115 = &v365_.v365;
                            goto LABEL_180;
                          }
                        }
                        else {
                          v55 = v339;
                        }
                        v115 = (__int64*)&v349_.v349;
                      LABEL_180:
                        *v115 = 0;
                        v115[1] = 0;
                        v74 = v337;
                        v116 = v365_.v366;
                        if (v365_.v366 != 0 &&
                            atomic_fetch_add(
                                (atomic_ullong* volatile)(v365_.v366 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v116 + 16LL))(v116),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          std___1___shared_weak_count___release_weak_alt2(v116),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          v74 = v337;
                          v117 = v349_.v349;
                          if (v349_.v349 != nullptr) {
                          LABEL_183:
                            v118 = (__int64)v349_.v350;
                            v365_.v365 = (__int64)v117;
                            v365_.v366 = (unsigned __int64)v349_.v350;
                            if (v349_.v350 != nullptr) {
                              atomic_fetch_add_explicit(
                                  (atomic_ullong* volatile)(v349_.v350 + 1), 1u,
                                  memory_order_relaxed);
                            }
                            v119 = *(_QWORD*)(v72 + 2280);
                            v120 = v72 + 2272;
                            if (v119 == v72 + 2272) {
                              goto LABEL_188;
                            }
                            while (*(int**)(v119 + 16) != v117) {
                              v119 = *(_QWORD*)(v119 + 8);
                              if (v119 == v120) {
                                goto LABEL_188;
                              }
                            }
                            if (v119 == v120) {
                            LABEL_188:
                              v121 =
                                  (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                                      *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                              v121[2] = v117;
                              v121[3] = v118;
                              if (v118 != 0) {
                                atomic_fetch_add_explicit(
                                    (atomic_ullong* volatile)(v118 + 8), 1u,
                                    memory_order_relaxed);
                              }
                              v121[1] = v120;
                              v122 = *(_QWORD*)(v72 + 2272);
                              *v121 = v122;
                              *(_QWORD*)(v122 + 8) = v121;
                              *(_QWORD*)(v72 + 2272) = v121;
                              ++*(_QWORD*)(v72 + 2288);
                              (*(void (**)(int*, __int64*))(
                                  *(_QWORD*)v117 + 128LL))(v117, &v365_.v365),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              v118 = v365_.v366;
                              v74 = v337;
                            }
                            if (v118 != 0 &&
                                atomic_fetch_add(
                                    (atomic_ullong* volatile)(v118 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
                              (*(void (**)(__int64))(*(_QWORD*)v118 + 16LL))(
                                  v118),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              std___1___shared_weak_count___release_weak_alt2(
                                  v118),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              v74 = v337;
                            }
                            v76 = (__int64)v349_.v350;
                            v346 = (__int64)v349_.v349;
                            if (v349_.v350 != nullptr) {
                              atomic_fetch_add_explicit(
                                  (atomic_ullong* volatile)(v349_.v350 + 2), 1u,
                                  memory_order_relaxed);
                              if (atomic_fetch_add(
                                      (atomic_ullong* volatile)(v76 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
                                (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(
                                    v76),
                                    v50 = COERCE_AS(
                                        __typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                                    v52 = COERCE_AS(
                                        __typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                                std___1___shared_weak_count___release_weak_alt2(
                                    v76),
                                    v50 = COERCE_AS(
                                        __typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                                    v52 = COERCE_AS(
                                        __typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                                v74 = v337;
                              }
                            }
                            v345 = v76;
                            LODWORD(v76) = 1;
                            goto LABEL_116;
                          }
                        }
                        else {
                          v117 = v349_.v349;
                          if (v349_.v349 != nullptr) {
                            goto LABEL_183;
                          }
                        }
                        v123 = (__int64)v349_.v350;
                        if (v349_.v350 != nullptr &&
                            atomic_fetch_add(
                                (atomic_ullong* volatile)(v349_.v350 + 1),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v123 + 16LL))(v123),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          std___1___shared_weak_count___release_weak_alt2(v123),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          v74 = v337;
                        }
                        v124 = v334 + 72;
                        if (*(_QWORD*)(v334 + 80) != v334 + 72) {
                          v125 = *(_QWORD**)(*(_QWORD*)v124 + 16LL);
                          if (v125 == (_QWORD*)v109) {
                            v126 = *game_g_frame_clock_ptr[0];
                            Layout_13639a0((_QWORD*)v72,
                                           *(_QWORD*)(*(_QWORD*)v124 + 16LL)),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            v127 = *(__int64**)v124;
                            v128 = *(__int64**)(*(_QWORD*)v124 + 8LL);
                            v129 = *v128;
                            *(_QWORD*)(**(_QWORD**)v124 + 8LL) = v128;
                            *v128 = *v127;
                            *(_QWORD*)(v129 + 8) = v127;
                            *v127 = v129;
                            Layout_579280(v125, v126 + 568),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            (*(void (**)(_QWORD*))(*v125 + 8LL))(v125),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            LayoutEx_5791a0((__int64)v125),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            v74 = v337;
                          }
                        }
                        goto LABEL_115;
                      }
                    LABEL_81:
                      v57 = v336 + 1;
                    } while (v336 != 5);
                    if (v368_.v383 != 0) {
                      v368_.v384 = v368_.v383;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v130 = 128;
                      }
                      else {
                        v130 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt3(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v130,
                          v368_.v383),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    if (v368_.v380 != 0) {
                      v368_.v381 = v368_.v380;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v131 = 128;
                      }
                      else {
                        v131 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt3(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v131,
                          v368_.v380),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    if (v368_.v377 != 0) {
                      v368_.v378 = v368_.v377;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v132 = 128;
                      }
                      else {
                        v132 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt3(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v132,
                          v368_.v377),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    if (v368_.v374 != 0) {
                      v368_.v375 = v368_.v374;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v133 = 128;
                      }
                      else {
                        v133 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt3(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v133,
                          v368_.v374),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    if (v368_.v371 != 0) {
                      v368_.v372 = v368_.v371;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v134 = 128;
                      }
                      else {
                        v134 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt3(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v134,
                          v368_.v371),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    if (v368_.v368 != nullptr) {
                      v368_.v369 = v368_.v368;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v135 = 128;
                      }
                      else {
                        v135 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt3(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v135,
                          (__int64)v368_.v368),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    v80 = v55++ == v330;
                  } while (!v80);
                }
                v347 = 1;
              LABEL_242:
                v136 = 0;
                LOWORD(v349_.v349) = 0;
                LOWORD(v365_.v365) = 0;
                LOWORD(v362_.v362) = 0;
                while (1) {
                  v368_.v384 = 0;
                  v368_.v385 = 0;
                  v368_.v382 = 0;
                  v368_.v383 = 0;
                  v368_.v380 = 0;
                  v368_.v381 = 0;
                  v368_.v378 = 0;
                  v368_.v379 = 0;
                  v368_.v376 = 0;
                  v368_.v377 = 0;
                  v368_.v374 = 0;
                  v368_.v375 = 0;
                  v368_.v372 = 0;
                  v368_.v373 = 0;
                  v368_.v370 = 0;
                  v368_.v371 = 0;
                  v368_.v368 = nullptr;
                  v368_.v369 = nullptr;
                  UnitUtil_15e0640((__int64)&v368_.v368, v397, v347, v390, 1),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  v344 = v136 + 1;
                  v137 = (unsigned int)(v136 + 1) < 5 ? v136 + 1 : 5;
                  v138 = &(&v368_.v368)[3 * v137];
                  if (v138[1] != *v138) {
                    break;
                  }
                LABEL_355:
                  if (v368_.v383 != 0) {
                    v368_.v384 = v368_.v383;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v178 = 128;
                    }
                    else {
                      v178 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt3(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v178,
                        v368_.v383),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                  }
                  if (v368_.v380 != 0) {
                    v368_.v381 = v368_.v380;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v179 = 128;
                    }
                    else {
                      v179 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt3(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v179,
                        v368_.v380),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                  }
                  if (v368_.v377 != 0) {
                    v368_.v378 = v368_.v377;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v180 = 128;
                    }
                    else {
                      v180 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt3(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v180,
                        v368_.v377),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                  }
                  if (v368_.v374 != 0) {
                    v368_.v375 = v368_.v374;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v181 = 128;
                    }
                    else {
                      v181 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt3(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v181,
                        v368_.v374),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                  }
                  if (v368_.v371 != 0) {
                    v368_.v372 = v368_.v371;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v182 = 128;
                    }
                    else {
                      v182 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt3(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v182,
                        v368_.v371),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                  }
                  if (v368_.v368 != nullptr) {
                    v368_.v369 = v368_.v368;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v183 = 128;
                    }
                    else {
                      v183 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt3(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v183,
                        (__int64)v368_.v368),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                  }
                  ++v136;
                  if (v344 == 6) {
                    if ((v365_.v365 & 1) != 0) {
                      if ((v362_.v362 & 1) != 0) {
                        v184 = v362_.v364;
                      }
                      else {
                        v184 = (char*)&v362_.v362 + 1;
                      }
                      if ((v362_.v362 & 1) != 0) {
                        v185 = (unsigned __int64)v362_.v363;
                      }
                      else {
                        v185 =
                            (unsigned __int64)(unsigned __int8)v362_.v362 >> 1;
                      }
                      SpineModel_64dde0(&v365_.v365, (__int64)v184, v185),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    else if ((v362_.v362 & 1) != 0) {
                      GameRoutine_64df20(&v365_.v365, (__int64)v362_.v364,
                                         (unsigned __int64)v362_.v363),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    else {
                      v365_.v365 = v362_.v362;
                      v365_.v366 = (unsigned __int64)v362_.v363;
                      v365_.v367 = (char*)v362_.v364;
                    }
                    v186 = (unsigned __int64)v349_.v350;
                    if (((unsigned __int8)v349_.v349 & 1) == 0) {
                      v186 = (unsigned __int64)(unsigned __int8)v349_.v349 >> 1;
                    }
                    if (v186 == 0) {
                      goto LABEL_481;
                    }
                    v187 =
                        (v365_.v365 & 1) != 0
                            ? v365_.v366
                            : (unsigned __int64)(unsigned __int8)v365_.v365 >>
                                  1;
                    if (v187 == 0) {
                      goto LABEL_481;
                    }
                    v188 = (char*)&v349_.v349 + 1;
                    v189 = v388_.v388;
                    if (((unsigned __int8)v349_.v349 & 1) != 0) {
                      v188 = v349_.v351;
                    }
                    v395_.v395 = v188;
                    v395_.v396 = v186;
                    v190 = v388_.v388[1];
                    if (v190 == 0) {
                      goto LABEL_412;
                    }
                    v191 = std___1___shared_weak_count_lock_alt1(v190),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                    if (v191 == 0) {
                      goto LABEL_412;
                    }
                    v192 = *v189;
                    v193 = v191;
                    if (*v189 != 0) {
                      GameRoutine_15ac7e0((void*)((__int64*)&v368_.v368)),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v193 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v193 + 16LL))(v193),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      std___1___shared_weak_count___release_weak_alt2(v193),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    if (v192 == 0) {
                    LABEL_412:
                      v368_.v368 = nullptr;
                      v368_.v369 = nullptr;
                    }
                    v194 = v388_.v388;
                    v195 = v365_.v367;
                    v196 = v388_.v388[1];
                    v197 = (unsigned __int64)(unsigned __int8)v365_.v365 >> 1;
                    if ((v365_.v365 & 1) != 0) {
                      v197 = v365_.v366;
                    }
                    else {
                      v195 = (char*)&v365_.v365 + 1;
                    }
                    v393_.v393 = v195;
                    v393_.v394 = v197;
                    if (v196 == 0) {
                      goto LABEL_425;
                    }
                    v198 = std___1___shared_weak_count_lock_alt1(v196),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                    if (v198 == 0) {
                      goto LABEL_425;
                    }
                    v199 = *v194;
                    v200 = v198;
                    if (*v194 != 0) {
                      GameRoutine_15ac7e0((void*)((__int64*)&v395_.v395)),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v200 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v200 + 16LL))(v200),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      std___1___shared_weak_count___release_weak_alt2(v200),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      if (v199 == 0) {
                        goto LABEL_425;
                      }
                    LABEL_422:
                      v201 = v368_.v369;
                      if (v368_.v369 != nullptr) {
                        goto LABEL_426;
                      }
                    LABEL_477:
                      if (v395_.v396 != 0) {
                        std___1___shared_weak_count___release_weak_alt2(
                            v395_.v396),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                      }
                      goto LABEL_479;
                    }
                    if (v199 != 0) {
                      goto LABEL_422;
                    }
                  LABEL_425:
                    v395_.v395 = nullptr;
                    v395_.v396 = 0;
                    v201 = v368_.v369;
                    if (v368_.v369 == nullptr) {
                      goto LABEL_477;
                    }
                  LABEL_426:
                    if (*((_QWORD*)v201 + 1) == -1) {
                      goto LABEL_477;
                    }
                    if (v395_.v396 != 0) {
                      if (*(_QWORD*)(v395_.v396 + 8) != -1) {
                        v202 = std___1___shared_weak_count_lock_alt1(
                            (__int64)v201),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                        v203 = v368_.v368;
                        v204 = v202;
                        if ((v365_.v365 & 1) != 0) {
                          v205 = v365_.v366;
                        }
                        else {
                          v205 =
                              (unsigned __int64)(unsigned __int8)v365_.v365 >>
                              1;
                        }
                        v206 = *((unsigned __int8*)v368_.v368 + 880);
                        if ((v365_.v365 & 1) != 0) {
                          v207 = v365_.v367;
                        }
                        else {
                          v207 = (char*)&v365_.v365 + 1;
                        }
                        if (v205 != 0) {
                          v208 = *((_QWORD*)v368_.v368 + 111);
                          if ((v206 & 1) == 0) {
                            v208 = v206 >> 1;
                          }
                          if (v208 != 0) {
                            if ((v206 & 1) != 0) {
                              **((_BYTE**)v368_.v368 + 112) = 0;
                              *((_QWORD*)v203 + 111) = 0;
                            }
                            else {
                              *((_WORD*)v368_.v368 + 440) = 0;
                            }
                          }
                          GameRoutine_60a060((char*)v203 + 880, (__int64)v207,
                                             v205),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                        else if ((v206 & 1) != 0) {
                          **((_BYTE**)v368_.v368 + 112) = 0;
                          *((_QWORD*)v203 + 111) = 0;
                        }
                        else {
                          *((_WORD*)v368_.v368 + 440) = 0;
                        }
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v204 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64, char*))(*(_QWORD*)v204 + 16LL))(
                              v204, v207),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          std___1___shared_weak_count___release_weak_alt2(v204),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                        v209 =
                            std___1___shared_weak_count_lock_alt1(v395_.v396),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                        v210 = (__int64)v395_.v395;
                        v211 = v209;
                        if (((unsigned __int8)v349_.v349 & 1) != 0) {
                          v212 = (unsigned __int64)v349_.v350;
                        }
                        else {
                          v212 =
                              (unsigned __int64)(unsigned __int8)v349_.v349 >>
                              1;
                        }
                        v213 = (unsigned __int8)v395_.v395[904];
                        if (((unsigned __int8)v349_.v349 & 1) != 0) {
                          v214 = v349_.v351;
                        }
                        else {
                          v214 = (char*)&v349_.v349 + 1;
                        }
                        if (v212 != 0) {
                          v215 = *((_QWORD*)v395_.v395 + 114);
                          if ((v213 & 1) == 0) {
                            v215 = v213 >> 1;
                          }
                          if (v215 != 0) {
                            if ((v213 & 1) != 0) {
                              **((_BYTE**)v395_.v395 + 115) = 0;
                              *(_QWORD*)(v210 + 912) = 0;
                            }
                            else {
                              *((_WORD*)v395_.v395 + 452) = 0;
                            }
                          }
                          GameRoutine_60a060((char*)(v210 + 904), (__int64)v214,
                                             v212),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                        else if ((v213 & 1) != 0) {
                          **((_BYTE**)v395_.v395 + 115) = 0;
                          *(_QWORD*)(v210 + 912) = 0;
                        }
                        else {
                          *((_WORD*)v395_.v395 + 452) = 0;
                        }
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v211 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64, char*))(*(_QWORD*)v211 + 16LL))(
                              v211, v214),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          std___1___shared_weak_count___release_weak_alt2(v211),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                        if (v368_.v369 != nullptr &&
                            (v216 = std___1___shared_weak_count_lock_alt1(
                                 (__int64)v368_.v369)) != 0) {
                          *((_BYTE*)v368_.v368 + 1110) = 2;
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v216 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v217 = v216;
                            (*(void (**)(__int64))(*(_QWORD*)v216 + 16LL))(
                                v216),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            std___1___shared_weak_count___release_weak_alt2(
                                v217),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                          }
                        }
                        else {
                          *(((_BYTE*)0x454LL) + 2) = 2;
                        }
                        if (v395_.v396 != 0 &&
                            (v218 = std___1___shared_weak_count_lock_alt1(
                                 v395_.v396)) != 0) {
                          v395_.v395[1110] = 1;
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v218 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v219 = v218;
                            (*(void (**)(__int64))(*(_QWORD*)v218 + 16LL))(
                                v218),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            std___1___shared_weak_count___release_weak_alt2(
                                v219),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                          }
                        }
                        else {
                          *(((_BYTE*)0x454LL) + 2) = 1;
                        }
                      }
                      goto LABEL_477;
                    }
                  LABEL_479:
                    if (v368_.v369 != nullptr) {
                      std___1___shared_weak_count___release_weak_alt2(
                          (__int64)v368_.v369),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                  LABEL_481:
                    if ((v362_.v362 & 1) != 0 && v362_.v364 != nullptr) {
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v220 = 128;
                      }
                      else {
                        v220 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt3(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v220,
                          (__int64)v362_.v364),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    if ((v365_.v365 & 1) != 0 && v365_.v367 != nullptr) {
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v221 = 128;
                      }
                      else {
                        v221 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt3(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v221,
                          (__int64)v365_.v367),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    if (((unsigned __int8)v349_.v349 & 1) != 0 &&
                        v349_.v351 != nullptr) {
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v222 = 128;
                      }
                      else {
                        v222 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt3(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v222,
                          (__int64)v349_.v351),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    if (++v347 != 6) {
                      goto LABEL_242;
                    }
                    v338 = 0;
                    v359 = 1;
                  LABEL_501:
                    v358 = 0;
                    while (1) {
                      v368_.v384 = 0;
                      v368_.v385 = 0;
                      v368_.v382 = 0;
                      v368_.v383 = 0;
                      v368_.v380 = 0;
                      v368_.v381 = 0;
                      v368_.v378 = 0;
                      v368_.v379 = 0;
                      v368_.v376 = 0;
                      v368_.v377 = 0;
                      v368_.v374 = 0;
                      v368_.v375 = 0;
                      v368_.v372 = 0;
                      v368_.v373 = 0;
                      v368_.v370 = 0;
                      v368_.v371 = 0;
                      v368_.v368 = nullptr;
                      v368_.v369 = nullptr;
                      UnitUtil_15e0640((__int64)&v368_.v368, v397, v359, v390,
                                       1),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      v225 = v358;
                      if (v358 >= 4) {
                        v225 = 4;
                      }
                      v226 = v225 + 1LL;
                      v356 = 0;
                      v357 = v226;
                      if ((&v368_.v368)[3 * v226 + 1] !=
                          (&v368_.v368)[3 * v226]) {
                        break;
                      }
                    LABEL_752:
                      if (v368_.v383 != 0) {
                        v368_.v384 = v368_.v383;
                        v323 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v323 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt3(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v323,
                            v368_.v383),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                      }
                      if (v368_.v380 != 0) {
                        v368_.v381 = v368_.v380;
                        v324 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v324 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt3(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v324,
                            v368_.v380),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                      }
                      if (v368_.v377 != 0) {
                        v368_.v378 = v368_.v377;
                        v325 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v325 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt3(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v325,
                            v368_.v377),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                      }
                      if (v368_.v374 != 0) {
                        v368_.v375 = v368_.v374;
                        v326 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v326 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt3(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v326,
                            v368_.v374),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                      }
                      if (v368_.v371 != 0) {
                        v368_.v372 = v368_.v371;
                        v327 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v327 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt3(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v327,
                            v368_.v371),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                      }
                      if (v368_.v368 != nullptr) {
                        v368_.v369 = v368_.v368;
                        v328 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v328 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt3(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v328,
                            (__int64)v368_.v368),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                      }
                      v224 = v358++;
                      if (v224 >= 5) {
                        v223 = v359++;
                        if (v223 >= 5) {
                          goto LABEL_776;
                        }
                        goto LABEL_501;
                      }
                    }
                    LODWORD(v227) = 0;
                    while (2) {
                      v228 = game_util_Format_alt3(
                          "L_JobIcon_Rank%d_Attr%d_%02d", v359, v358, v227),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                      if (ui_LayoutAccessor_FindPane_alt1(v388_.v388,
                                                          (__int64)v228) == 0) {
                        goto LABEL_507;
                      }
                      v349_.v349 = &v359;
                      v349_.v350 = &v397;
                      v349_.v351 = (char*)&v390;
                      v349_.v352 = &v357;
                      v349_.v353 = &v358;
                      v349_.v354 = &v356;
                      v349_.v355 = &v388_.v388;
                      v229 = game_util_Format_alt3(
                          "L_JobIcon_Rank%d_Attr%d_%02d", v359, v358, v356),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                      v230 = (unsigned __int64*)v388_.v388;
                      v231 = v229;
                      v393_.v393 = v229;
                      v393_.v394 = strlen_alt1(v229),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                      v232 = v230[1];
                      if (v232 != 0 &&
                          (v233 = std___1___shared_weak_count_lock_alt1(
                               v232)) != 0) {
                        v234 = v233;
                        if (*v230 != 0) {
                          Layout_1363e00_alt1((void*)(&v395_.v395), *v230,
                                              (__int64)&v393_.v393),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          v362_.v362 = 0;
                          v362_.v363 = nullptr;
                          if (v395_.v396 != 0 &&
                              (v235 = std___1___shared_weak_count_lock_alt1(
                                   v395_.v396),
                               v362_.v363 = (__int64*)v235, v235 != 0) &&
                              (v362_.v362 = (__int64)v395_.v395,
                               v395_.v395 != nullptr) &&
                              (v236 = v235,
                               (v237 = __dynamic_cast(
                                    v395_.v395, GameData_212dfc0[0],
                                    GameData_2131968[0], 0)) != 0)) {
                            v238 = &v362_.v362;
                            v365_.v365 = v237;
                            v365_.v366 = v236;
                          }
                          else {
                            v238 = &v365_.v365;
                          }
                          *v238 = 0;
                          v238[1] = 0;
                          v239 = v365_.v366;
                          v348 = v365_.v365;
                          if (v365_.v366 != 0 &&
                              (atomic_fetch_add_explicit(
                                   (atomic_ullong* volatile)(v365_.v366 + 16),
                                   1u, memory_order_relaxed),
                               atomic_fetch_add(
                                   (atomic_ullong* volatile)(v239 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
                            (*(void (**)(__int64))(*(_QWORD*)v239 + 16LL))(
                                v239),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            std___1___shared_weak_count___release_weak_alt2(
                                v239),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            v240 = (__int64)v362_.v363;
                            if (v362_.v363 != nullptr) {
                              goto LABEL_522;
                            }
                          }
                          else {
                            v240 = (__int64)v362_.v363;
                            if (v362_.v363 != nullptr) {
                            LABEL_522:
                              if (atomic_fetch_add(
                                      (atomic_ullong* volatile)(v240 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
                                (*(void (**)(__int64))(*(_QWORD*)v240 + 16LL))(
                                    v240),
                                    v50 = COERCE_AS(
                                        __typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                                    v52 = COERCE_AS(
                                        __typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                                std___1___shared_weak_count___release_weak_alt2(
                                    v240),
                                    v50 = COERCE_AS(
                                        __typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                                    v52 = COERCE_AS(
                                        __typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                              }
                            }
                          }
                          if (v395_.v396 != 0) {
                            std___1___shared_weak_count___release_weak_alt2(
                                v395_.v396),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                          }
                        }
                        else {
                          v239 = 0;
                          v348 = 0;
                        }
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v234 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v234 + 16LL))(v234),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          std___1___shared_weak_count___release_weak_alt2(v234),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                      }
                      else {
                        v348 = 0;
                        v239 = 0;
                      }
                      Util_1578f20_alt1(&v365_.v365, (__int64)&v349_.v349, 1),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      Util_1578f20_alt1(&v362_.v362, (__int64)&v349_.v349, 0),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      v241 = (unsigned __int64*)v388_.v388;
                      v242 = v365_.v367;
                      v243 = v388_.v388[1];
                      v244 = (unsigned __int64)(unsigned __int8)v365_.v365 >> 1;
                      if ((v365_.v365 & 1) != 0) {
                        v244 = v365_.v366;
                      }
                      else {
                        v242 = (char*)&v365_.v365 + 1;
                      }
                      v360_.v360 = v242;
                      v360_.v361 = v244;
                      if (v243 != 0 &&
                          (v245 = std___1___shared_weak_count_lock_alt1(
                               v243)) != 0) {
                        v246 = v245;
                        if (*v241 != 0) {
                          Layout_1363e00_alt1((void*)(&v391_.v391), *v241,
                                              (__int64)&v360_.v360),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          v393_.v393 = nullptr;
                          v393_.v394 = 0;
                          if (v391_.v392 != 0 &&
                              (v247 = std___1___shared_weak_count_lock_alt1(
                                   v391_.v392),
                               v393_.v394 = v247, v247 != 0) &&
                              (v393_.v393 = v391_.v391,
                               v391_.v391 != nullptr) &&
                              (v248 = v247,
                               (v249 = __dynamic_cast(
                                    v391_.v391, GameData_212dfc0[0],
                                    GameData_2131968[0], 0)) != 0)) {
                            v250 = (__int64*)&v393_.v393;
                            v395_.v395 = (char*)v249;
                            v395_.v396 = v248;
                          }
                          else {
                            v250 = (__int64*)&v395_.v395;
                          }
                          *v250 = 0;
                          v250[1] = 0;
                          v251 = (__int64)v395_.v395;
                          v252 = v395_.v396;
                          if (v395_.v396 != 0 &&
                              (atomic_fetch_add_explicit(
                                   (atomic_ullong* volatile)(v395_.v396 + 16),
                                   1u, memory_order_relaxed),
                               atomic_fetch_add(
                                   (atomic_ullong* volatile)(v252 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
                            (*(void (**)(__int64))(*(_QWORD*)v252 + 16LL))(
                                v252),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            std___1___shared_weak_count___release_weak_alt2(
                                v252),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            v253 = v393_.v394;
                            if (v393_.v394 != 0) {
                              goto LABEL_546;
                            }
                          }
                          else {
                            v253 = v393_.v394;
                            if (v393_.v394 != 0) {
                            LABEL_546:
                              if (atomic_fetch_add(
                                      (atomic_ullong* volatile)(v253 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
                                (*(void (**)(__int64))(*(_QWORD*)v253 + 16LL))(
                                    v253),
                                    v50 = COERCE_AS(
                                        __typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                                    v52 = COERCE_AS(
                                        __typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                                std___1___shared_weak_count___release_weak_alt2(
                                    v253),
                                    v50 = COERCE_AS(
                                        __typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                                    v52 = COERCE_AS(
                                        __typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                              }
                            }
                          }
                          if (v391_.v392 != 0) {
                            std___1___shared_weak_count___release_weak_alt2(
                                v391_.v392),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                          }
                        }
                        else {
                          v252 = 0;
                          v251 = 0;
                        }
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v246 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v246 + 16LL))(v246),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          std___1___shared_weak_count___release_weak_alt2(v246),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                      }
                      else {
                        v251 = 0;
                        v252 = 0;
                      }
                      v254 = (unsigned __int64*)v388_.v388;
                      v255 = v362_.v364;
                      v256 = v388_.v388[1];
                      v257 = (unsigned __int64)(unsigned __int8)v362_.v362 >> 1;
                      if ((v362_.v362 & 1) != 0) {
                        v257 = (unsigned __int64)v362_.v363;
                      }
                      else {
                        v255 = (char*)&v362_.v362 + 1;
                      }
                      v360_.v360 = v255;
                      v360_.v361 = v257;
                      if (v256 != 0) {
                        v258 = std___1___shared_weak_count_lock_alt1(v256),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                        if (v258 != 0) {
                          v259 = v258;
                          if (*v254 != 0) {
                            Layout_1363e00_alt1((void*)(&v391_.v391), *v254,
                                                (__int64)&v360_.v360),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            v393_.v393 = nullptr;
                            v393_.v394 = 0;
                            if (v391_.v392 != 0 &&
                                (v260 = std___1___shared_weak_count_lock_alt1(
                                     v391_.v392),
                                 v393_.v394 = v260, v260 != 0) &&
                                (v393_.v393 = v391_.v391,
                                 v391_.v391 != nullptr) &&
                                (v261 = v260,
                                 (v262 = __dynamic_cast(
                                      v391_.v391, GameData_212dfc0[0],
                                      GameData_2131968[0], 0)) != 0)) {
                              v263 = (__int64*)&v393_.v393;
                              v395_.v395 = (char*)v262;
                              v395_.v396 = v261;
                            }
                            else {
                              v263 = (__int64*)&v395_.v395;
                            }
                            *v263 = 0;
                            v263[1] = 0;
                            v264 = (__int64)v395_.v395;
                            v265 = v395_.v396;
                            if (v395_.v396 != 0 &&
                                (atomic_fetch_add_explicit(
                                     (atomic_ullong* volatile)(v395_.v396 + 16),
                                     1u, memory_order_relaxed),
                                 atomic_fetch_add(
                                     (atomic_ullong* volatile)(v265 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0)) {
                              (*(void (**)(__int64))(*(_QWORD*)v265 + 16LL))(
                                  v265),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              std___1___shared_weak_count___release_weak_alt2(
                                  v265),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              v266 = v393_.v394;
                              if (v393_.v394 != 0) {
                                goto LABEL_571;
                              }
                            }
                            else {
                              v266 = v393_.v394;
                              if (v393_.v394 != 0) {
                              LABEL_571:
                                if (atomic_fetch_add(
                                        (atomic_ullong* volatile)(v266 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
                                  (*(void (**)(__int64))(*(_QWORD*)v266 +
                                                         16LL))(v266),
                                      v50 = COERCE_AS(
                                          __typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                                      v52 = COERCE_AS(
                                          __typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                                  std___1___shared_weak_count___release_weak_alt2(
                                      v266),
                                      v50 = COERCE_AS(
                                          __typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                                      v52 = COERCE_AS(
                                          __typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                                }
                              }
                            }
                            if (v391_.v392 != 0) {
                              std___1___shared_weak_count___release_weak_alt2(
                                  v391_.v392),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                            }
                          }
                          else {
                            v265 = 0;
                            v264 = 0;
                          }
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v259 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
                            if (v252 != 0) {
                              goto LABEL_579;
                            }
                          }
                          else {
                            (*(void (**)(__int64))(*(_QWORD*)v259 + 16LL))(
                                v259),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            std___1___shared_weak_count___release_weak_alt2(
                                v259),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            if (v252 != 0) {
                              goto LABEL_579;
                            }
                          }
                          goto LABEL_615;
                        }
                      }
                      v264 = 0;
                      v265 = 0;
                      if (v252 == 0) {
                        goto LABEL_615;
                      }
                    LABEL_579:
                      if (v239 != 0 && *(_QWORD*)(v252 + 8) != -1 &&
                          *(_QWORD*)(v239 + 8) != -1) {
                        atomic_fetch_add_explicit(
                            (atomic_ullong* volatile)(v252 + 16), 1u,
                            memory_order_relaxed);
                        v267 = (__int64)v365_.v367;
                        v80 = (v365_.v365 & 1) == 0;
                        atomic_fetch_add_explicit(
                            (atomic_ullong* volatile)(v239 + 16), 1u,
                            memory_order_relaxed);
                        if (v80) {
                          v268 = (char*)&v365_.v365 + 1;
                        }
                        else {
                          v268 = (const char*)v267;
                        }
                        v269 = std___1___shared_weak_count_lock_alt1(v252),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                        v270 = std___1___shared_weak_count_lock_alt1(v239),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                        if (v270 == 0) {
                          goto LABEL_610;
                        }
                        if (v269 != 0 && v251 != 0 && v348 != 0) {
                          v271 = *(unsigned __int8*)(v251 + 856);
                          v272 = *(_QWORD*)(v251 + 864);
                          if ((v271 & 1) == 0) {
                            v272 = v271 >> 1;
                          }
                          if (v272 == 0) {
                            v340 = v270;
                            v273 = strlen_alt1(v231),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                            if (v273 != 0) {
                              GameRoutine_60a060((char*)(v251 + 856),
                                                 (__int64)v231, v273),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                            }
                            else if ((v271 & 1) != 0) {
                              **(_BYTE**)(v251 + 872) = 0;
                              *(_QWORD*)(v251 + 864) = 0;
                            }
                            else {
                              *(_WORD*)(v251 + 856) = 0;
                            }
                            v270 = v340;
                          }
                          v274 = *(unsigned __int8*)(v348 + 832);
                          v275 = *(_QWORD*)(v348 + 840);
                          if ((v274 & 1) == 0) {
                            v275 = v274 >> 1;
                          }
                          if (v275 == 0) {
                            v341 = v270;
                            v276 = strlen_alt1(v268),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                            if (v276 != 0) {
                              GameRoutine_60a060((char*)(v348 + 832),
                                                 (__int64)v268, v276),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                            }
                            else if ((v274 & 1) != 0) {
                              **(_BYTE**)(v348 + 848) = 0;
                              *(_QWORD*)(v348 + 840) = 0;
                            }
                            else {
                              *(_WORD*)(v348 + 832) = 0;
                            }
                            v270 = v341;
                          }
                        }
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v270 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          v277 = v270;
                          (*(void (**)(__int64))(*(_QWORD*)v270 + 16LL))(v270),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          std___1___shared_weak_count___release_weak_alt2(v277),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          if (v269 != 0) {
                            goto LABEL_611;
                          }
                        }
                        else {
                        LABEL_610:
                          if (v269 != 0) {
                          LABEL_611:
                            if (atomic_fetch_add(
                                    (atomic_ullong* volatile)(v269 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
                              (*(void (**)(__int64))(*(_QWORD*)v269 + 16LL))(
                                  v269),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              std___1___shared_weak_count___release_weak_alt2(
                                  v269),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                            }
                          }
                        }
                        std___1___shared_weak_count___release_weak_alt2(v239),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        std___1___shared_weak_count___release_weak_alt2(v252),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                      }
                    LABEL_615:
                      if (v265 != 0 && v239 != 0 &&
                          *(_QWORD*)(v265 + 8) != -1 &&
                          *(_QWORD*)(v239 + 8) != -1) {
                        atomic_fetch_add_explicit(
                            (atomic_ullong* volatile)(v239 + 16), 1u,
                            memory_order_relaxed);
                        atomic_fetch_add_explicit(
                            (atomic_ullong* volatile)(v265 + 16), 1u,
                            memory_order_relaxed);
                        if ((v362_.v362 & 1) != 0) {
                          v278 = v362_.v364;
                        }
                        else {
                          v278 = (char*)&v362_.v362 + 1;
                        }
                        v279 = std___1___shared_weak_count_lock_alt1(v239),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                        v280 = std___1___shared_weak_count_lock_alt1(v265),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                        if (v280 == 0) {
                          goto LABEL_645;
                        }
                        if (v279 != 0 && v348 != 0 && v264 != 0) {
                          v281 = *(unsigned __int8*)(v348 + 856);
                          v282 = *(_QWORD*)(v348 + 864);
                          if ((v281 & 1) == 0) {
                            v282 = v281 >> 1;
                          }
                          if (v282 == 0) {
                            v342 = v280;
                            v283 = strlen_alt1(v278),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                            if (v283 != 0) {
                              GameRoutine_60a060((char*)(v348 + 856),
                                                 (__int64)v278, v283),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                            }
                            else if ((v281 & 1) != 0) {
                              **(_BYTE**)(v348 + 872) = 0;
                              *(_QWORD*)(v348 + 864) = 0;
                            }
                            else {
                              *(_WORD*)(v348 + 856) = 0;
                            }
                            v280 = v342;
                          }
                          v284 = *(unsigned __int8*)(v264 + 832);
                          v285 = *(_QWORD*)(v264 + 840);
                          if ((v284 & 1) == 0) {
                            v285 = v284 >> 1;
                          }
                          if (v285 == 0) {
                            v286 = v280;
                            v287 = strlen_alt1(v231),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                            if (v287 != 0) {
                              GameRoutine_60a060((char*)(v264 + 832),
                                                 (__int64)v231, v287),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                            }
                            else if ((v284 & 1) != 0) {
                              **(_BYTE**)(v264 + 848) = 0;
                              *(_QWORD*)(v264 + 840) = 0;
                            }
                            else {
                              *(_WORD*)(v264 + 832) = 0;
                            }
                            v280 = v286;
                          }
                        }
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v280 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          v288 = v280;
                          (*(void (**)(__int64))(*(_QWORD*)v280 + 16LL))(v280),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          std___1___shared_weak_count___release_weak_alt2(v288),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          if (v279 != 0) {
                            goto LABEL_646;
                          }
                        }
                        else {
                        LABEL_645:
                          if (v279 != 0) {
                          LABEL_646:
                            if (atomic_fetch_add(
                                    (atomic_ullong* volatile)(v279 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
                              (*(void (**)(__int64))(*(_QWORD*)v279 + 16LL))(
                                  v279),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              std___1___shared_weak_count___release_weak_alt2(
                                  v279),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                            }
                          }
                        }
                        std___1___shared_weak_count___release_weak_alt2(v265),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        std___1___shared_weak_count___release_weak_alt2(v239),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                      }
                      if ((v390 & 1) != 0) {
                        goto LABEL_713;
                      }
                      v289 = (v365_.v365 & 1) != 0
                                 ? v365_.v366
                                 : (unsigned __int8)v365_.v365 >> 1;
                      if (v289 != 0) {
                        goto LABEL_713;
                      }
                      v290 = (unsigned __int64*)v388_.v388;
                      v360_.v360 = "L_JobIcon00";
                      v360_.v361 = 11;
                      v291 = v388_.v388[1];
                      if (v291 != 0 &&
                          (v292 = std___1___shared_weak_count_lock_alt1(
                               v291)) != 0) {
                        v293 = v292;
                        if (*v290 != 0) {
                          Layout_1363e00_alt1((void*)(&v391_.v391), *v290,
                                              (__int64)&v360_.v360),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          v393_.v393 = nullptr;
                          v393_.v394 = 0;
                          if (v391_.v392 != 0 &&
                              (v294 = std___1___shared_weak_count_lock_alt1(
                                   v391_.v392),
                               v393_.v394 = v294, v294 != 0) &&
                              (v393_.v393 = v391_.v391,
                               v391_.v391 != nullptr) &&
                              (v295 = v294,
                               (v296 = __dynamic_cast(
                                    v391_.v391, GameData_212dfc0[0],
                                    GameData_2131968[0], 0)) != 0)) {
                            v297 = (__int64*)&v393_.v393;
                            v395_.v395 = (char*)v296;
                            v395_.v396 = v295;
                          }
                          else {
                            v297 = (__int64*)&v395_.v395;
                          }
                          *v297 = 0;
                          v297[1] = 0;
                          v298 = (__int64)v395_.v395;
                          v299 = v395_.v396;
                          if (v395_.v396 != 0 &&
                              (atomic_fetch_add_explicit(
                                   (atomic_ullong* volatile)(v395_.v396 + 16),
                                   1u, memory_order_relaxed),
                               atomic_fetch_add(
                                   (atomic_ullong* volatile)(v299 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
                            (*(void (**)(__int64))(*(_QWORD*)v299 + 16LL))(
                                v299),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            std___1___shared_weak_count___release_weak_alt2(
                                v299),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            v300 = v393_.v394;
                            if (v393_.v394 != 0) {
                              goto LABEL_668;
                            }
                          }
                          else {
                            v300 = v393_.v394;
                            if (v393_.v394 != 0) {
                            LABEL_668:
                              if (atomic_fetch_add(
                                      (atomic_ullong* volatile)(v300 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
                                (*(void (**)(__int64))(*(_QWORD*)v300 + 16LL))(
                                    v300),
                                    v50 = COERCE_AS(
                                        __typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                                    v52 = COERCE_AS(
                                        __typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                                std___1___shared_weak_count___release_weak_alt2(
                                    v300),
                                    v50 = COERCE_AS(
                                        __typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                                    v52 = COERCE_AS(
                                        __typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                              }
                            }
                          }
                          if (v391_.v392 != 0) {
                            std___1___shared_weak_count___release_weak_alt2(
                                v391_.v392),
                                v50 = COERCE_AS(
                                    __typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v52 = COERCE_AS(
                                    __typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                          }
                        }
                        else {
                          v299 = 0;
                          v298 = 0;
                        }
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v293 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v293 + 16LL))(v293),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          std___1___shared_weak_count___release_weak_alt2(v293),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                      }
                      else {
                        v298 = 0;
                        v299 = 0;
                      }
                      v301 = (unsigned __int64*)v388_.v388;
                      v360_.v360 = v228;
                      v360_.v361 = strlen_alt1(v228),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                      v302 = v301[1];
                      if (v302 == 0) {
                        v309 = 0;
                        v310 = 0;
                        if (v299 != 0) {
                          goto LABEL_700;
                        }
                        goto LABEL_709;
                      }
                      v303 = std___1___shared_weak_count_lock_alt1(v302),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                      if (v303 == 0) {
                        v309 = 0;
                        v310 = 0;
                        if (v299 != 0) {
                          goto LABEL_700;
                        }
                        goto LABEL_709;
                      }
                      v304 = v303;
                      if (*v301 != 0) {
                        Layout_1363e00_alt1((void*)(&v391_.v391), *v301,
                                            (__int64)&v360_.v360),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        v393_.v393 = nullptr;
                        v393_.v394 = 0;
                        if (v391_.v392 != 0 &&
                            (v305 = std___1___shared_weak_count_lock_alt1(
                                 v391_.v392),
                             v393_.v394 = v305, v305 != 0) &&
                            (v393_.v393 = v391_.v391, v391_.v391 != nullptr) &&
                            (v306 = v305, (v307 = __dynamic_cast(
                                               v391_.v391, GameData_212dfc0[0],
                                               GameData_2131968[0], 0)) != 0)) {
                          v308 = (__int64*)&v393_.v393;
                          v395_.v395 = (char*)v307;
                          v395_.v396 = v306;
                        }
                        else {
                          v308 = (__int64*)&v395_.v395;
                        }
                        *v308 = 0;
                        v308[1] = 0;
                        v309 = (__int64)v395_.v395;
                        v310 = v395_.v396;
                        if (v395_.v396 != 0 &&
                            (atomic_fetch_add_explicit(
                                 (atomic_ullong* volatile)(v395_.v396 + 16), 1u,
                                 memory_order_relaxed),
                             atomic_fetch_add(
                                 (atomic_ullong* volatile)(v310 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0)) {
                          (*(void (**)(__int64))(*(_QWORD*)v310 + 16LL))(v310),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          std___1___shared_weak_count___release_weak_alt2(v310),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          v311 = v393_.v394;
                          if (v393_.v394 != 0) {
                            goto LABEL_692;
                          }
                        }
                        else {
                          v311 = v393_.v394;
                          if (v393_.v394 != 0) {
                          LABEL_692:
                            if (atomic_fetch_add(
                                    (atomic_ullong* volatile)(v311 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
                              (*(void (**)(__int64))(*(_QWORD*)v311 + 16LL))(
                                  v311),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                              std___1___shared_weak_count___release_weak_alt2(
                                  v311),
                                  v50 = COERCE_AS(
                                      __typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                                  v52 = COERCE_AS(
                                      __typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                            }
                          }
                        }
                        if (v391_.v392 != 0) {
                          std___1___shared_weak_count___release_weak_alt2(
                              v391_.v392),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                      }
                      else {
                        v310 = 0;
                        v309 = 0;
                      }
                      if (atomic_fetch_add((atomic_ullong* volatile)(v304 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) != 0) {
                        if (v299 != 0) {
                          goto LABEL_700;
                        }
                      LABEL_709:
                        if (v310 != 0) {
                        LABEL_710:
                          std___1___shared_weak_count___release_weak_alt2(v310),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                        if (v299 != 0) {
                        LABEL_712:
                          std___1___shared_weak_count___release_weak_alt2(v299),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                      LABEL_713:
                        if (v265 != 0) {
                          std___1___shared_weak_count___release_weak_alt2(v265),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                        if (v252 != 0) {
                          std___1___shared_weak_count___release_weak_alt2(v252),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                        if ((v362_.v362 & 1) != 0 && v362_.v364 != nullptr) {
                          v315 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v315 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt3(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v315,
                              (__int64)v362_.v364),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                        if ((v365_.v365 & 1) != 0 && v365_.v367 != nullptr) {
                          v316 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v316 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt3(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v316,
                              (__int64)v365_.v367),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                        if (v239 != 0) {
                          std___1___shared_weak_count___release_weak_alt2(v239),
                              v50 =
                                  COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v52 =
                                  COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        }
                      LABEL_507:
                        v227 = ++v356;
                        if (v227 >= ((&v368_.v368)[3 * v357 + 1] -
                                     (&v368_.v368)[3 * v357]) >>
                            3) {
                          goto LABEL_752;
                        }
                        continue;
                      }
                      break;
                    }
                    (*(void (**)(__int64))(*(_QWORD*)v304 + 16LL))(v304),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                    std___1___shared_weak_count___release_weak_alt2(v304),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                    if (v299 == 0) {
                      goto LABEL_709;
                    }
                  LABEL_700:
                    if (*(_QWORD*)(v299 + 8) == -1) {
                      goto LABEL_709;
                    }
                    if (v310 == 0) {
                      goto LABEL_712;
                    }
                    if (*(_QWORD*)(v310 + 8) == -1) {
                      goto LABEL_710;
                    }
                    v312 = std___1___shared_weak_count_lock_alt1(v310),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                    v313 = *(unsigned __int8*)(v309 + 832);
                    v314 = *(_QWORD*)(v309 + 840);
                    if ((v313 & 1) == 0) {
                      v314 = v313 >> 1;
                    }
                    if (v314 != 0) {
                      if ((v313 & 1) == 0) {
                        *(_BYTE*)(v309 + 833) = 0;
                        goto LABEL_732;
                      }
                      **(_BYTE**)(v309 + 848) = 0;
                      *(_QWORD*)(v309 + 840) = 0;
                      LOBYTE(v313) = *(_BYTE*)(v309 + 832);
                    }
                    if ((v313 & 1) != 0) {
                      *(_QWORD*)(v309 + 840) = 11;
                      v317 = *(char**)(v309 + 848);
                    }
                    else {
                    LABEL_732:
                      *(_BYTE*)(v309 + 832) = 22;
                      v317 = (char*)(v309 + 833);
                    }
                    strcpy(v317, "L_JobIcon00");
                    if (atomic_fetch_add((atomic_ullong* volatile)(v312 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) != 0) {
                      if ((v338 & 1) != 0) {
                      LABEL_736:
                        v338 = 1;
                        goto LABEL_710;
                      }
                    }
                    else {
                      v318 = v312;
                      (*(void (**)(__int64))(*(_QWORD*)v312 + 16LL))(v312),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      std___1___shared_weak_count___release_weak_alt2(v318),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      if ((v338 & 1) != 0) {
                        goto LABEL_736;
                      }
                    }
                    v319 = std___1___shared_weak_count_lock_alt1(v299),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                    v320 = strlen_alt1(v228),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                    v321 = *(unsigned __int8*)(v298 + 856);
                    if (v320 != 0) {
                      v322 = *(_QWORD*)(v298 + 864);
                      if ((v321 & 1) == 0) {
                        v322 = v321 >> 1;
                      }
                      if (v322 != 0) {
                        if ((v321 & 1) != 0) {
                          **(_BYTE**)(v298 + 872) = 0;
                          *(_QWORD*)(v298 + 864) = 0;
                        }
                        else {
                          *(_WORD*)(v298 + 856) = 0;
                        }
                      }
                      GameRoutine_60a060((char*)(v298 + 856), (__int64)v228,
                                         v320),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    else if ((v321 & 1) != 0) {
                      **(_BYTE**)(v298 + 872) = 0;
                      *(_QWORD*)(v298 + 864) = 0;
                    }
                    else {
                      *(_WORD*)(v298 + 856) = 0;
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v319 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v319 + 16LL))(v319),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      std___1___shared_weak_count___release_weak_alt2(v319),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    v338 = 1;
                    goto LABEL_710;
                  }
                }
                v139 = 0;
                while (1) {
                  v140 = game_util_Format_alt3("L_JobIcon_Rank%d_Attr%d_%02d",
                                               v347, v136, v139),
                  v50 = COERCE_AS(__typeof__(v50),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v52 = COERCE_AS(__typeof__(v52),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
                  v141 = (unsigned __int64)v362_.v363;
                  v142 = v140;
                  if ((v362_.v362 & 1) == 0) {
                    v141 = (unsigned __int64)(unsigned __int8)v362_.v362 >> 1;
                  }
                  if (v141 == 0) {
                    GameRoutine_60a020_alt1((__int64)&v362_.v362, v140),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                    goto LABEL_250;
                  }
                  v143 = (unsigned __int64*)v388_.v388;
                  v144 = (char*)&v362_.v362 + 1;
                  if ((v362_.v362 & 1) != 0) {
                    v144 = v362_.v364;
                  }
                  v145 = v388_.v388[1];
                  v360_.v360 = v144;
                  v360_.v361 = v141;
                  if (v145 == 0 ||
                      (v146 = std___1___shared_weak_count_lock_alt1(v145)) ==
                          0) {
                    v152 = 0;
                    v153 = 0;
                    goto LABEL_277;
                  }
                  v147 = v146;
                  if (*v143 != 0) {
                    break;
                  }
                  v153 = 0;
                  v152 = 0;
                LABEL_275:
                  if (atomic_fetch_add((atomic_ullong* volatile)(v147 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v147 + 16LL))(v147),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                    std___1___shared_weak_count___release_weak_alt2(v147),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                  }
                LABEL_277:
                  v155 = (unsigned __int64*)v388_.v388;
                  v360_.v360 = v142;
                  v360_.v361 = strlen_alt1(v142),
                  v50 = COERCE_AS(__typeof__(v50),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v52 = COERCE_AS(__typeof__(v52),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
                  v156 = v155[1];
                  if (v156 == 0 ||
                      (v157 = std___1___shared_weak_count_lock_alt1(v156)) ==
                          0) {
                    v163 = 0;
                    v164 = 0;
                    if (v152 == 0) {
                      goto LABEL_309;
                    }
                    goto LABEL_299;
                  }
                  v158 = v157;
                  if (*v155 == 0) {
                    v164 = 0;
                    v163 = 0;
                    goto LABEL_297;
                  }
                  Layout_1363e00_alt1((void*)(&v391_.v391), *v155,
                                      (__int64)&v360_.v360),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  v393_.v393 = nullptr;
                  v393_.v394 = 0;
                  if (v391_.v392 != 0 &&
                      (v159 = std___1___shared_weak_count_lock_alt1(v391_.v392),
                       v393_.v394 = v159, v159 != 0) &&
                      (v393_.v393 = v391_.v391, v391_.v391 != nullptr) &&
                      (v160 = v159,
                       (v161 = __dynamic_cast(v391_.v391, GameData_212dfc0[0],
                                              GameData_2131968[0], 0)) != 0)) {
                    v162 = (__int64*)&v393_.v393;
                    v395_.v395 = (char*)v161;
                    v395_.v396 = v160;
                  }
                  else {
                    v162 = (__int64*)&v395_.v395;
                  }
                  *v162 = 0;
                  v162[1] = 0;
                  v163 = (__int64)v395_.v395;
                  v164 = v395_.v396;
                  if (v395_.v396 != 0 &&
                      (atomic_fetch_add_explicit(
                           (atomic_ullong* volatile)(v395_.v396 + 16), 1u,
                           memory_order_relaxed),
                       atomic_fetch_add((atomic_ullong* volatile)(v164 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0)) {
                    (*(void (**)(__int64))(*(_QWORD*)v164 + 16LL))(v164),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                    std___1___shared_weak_count___release_weak_alt2(v164),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                    v165 = v393_.v394;
                    if (v393_.v394 != 0) {
                    LABEL_291:
                      if (atomic_fetch_add((atomic_ullong* volatile)(v165 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v165 + 16LL))(v165),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        std___1___shared_weak_count___release_weak_alt2(v165),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                      }
                    }
                  }
                  else {
                    v165 = v393_.v394;
                    if (v393_.v394 != 0) {
                      goto LABEL_291;
                    }
                  }
                  if (v391_.v392 != 0) {
                    std___1___shared_weak_count___release_weak_alt2(v391_.v392),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                  }
                LABEL_297:
                  if (atomic_fetch_add((atomic_ullong* volatile)(v158 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) != 0) {
                    if (v152 == 0) {
                      goto LABEL_309;
                    }
                  }
                  else {
                    (*(void (**)(__int64))(*(_QWORD*)v158 + 16LL))(v158),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                    std___1___shared_weak_count___release_weak_alt2(v158),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                    if (v152 == 0) {
                    LABEL_309:
                      if (v164 == 0) {
                        if (v152 == 0) {
                          goto LABEL_250;
                        }
                      LABEL_354:
                        std___1___shared_weak_count___release_weak_alt2(v152),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                        goto LABEL_250;
                      }
                      goto LABEL_353;
                    }
                  }
                LABEL_299:
                  if (*(_QWORD*)(v152 + 8) == -1) {
                    goto LABEL_309;
                  }
                  if (v164 == 0) {
                    goto LABEL_354;
                  }
                  if (*(_QWORD*)(v164 + 8) != -1) {
                    v166 = std___1___shared_weak_count_lock_alt1(v152),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                    v167 = strlen_alt1(v142),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                    v168 = *(unsigned __int8*)(v153 + 904);
                    if (v167 != 0) {
                      v169 = *(_QWORD*)(v153 + 912);
                      if ((v168 & 1) == 0) {
                        v169 = v168 >> 1;
                      }
                      if (v169 != 0) {
                        if ((v168 & 1) != 0) {
                          **(_BYTE**)(v153 + 920) = 0;
                          *(_QWORD*)(v153 + 912) = 0;
                        }
                        else {
                          *(_WORD*)(v153 + 904) = 0;
                        }
                      }
                      GameRoutine_60a060((char*)(v153 + 904), (__int64)v142,
                                         v167),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    else if ((v168 & 1) != 0) {
                      **(_BYTE**)(v153 + 920) = 0;
                      *(_QWORD*)(v153 + 912) = 0;
                    }
                    else {
                      *(_WORD*)(v153 + 904) = 0;
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v166 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v166 + 16LL))(v166),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      std___1___shared_weak_count___release_weak_alt2(v166),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    v170 = std___1___shared_weak_count_lock_alt1(v164),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                    if ((v362_.v362 & 1) != 0) {
                      v171 = (unsigned __int64)v362_.v363;
                    }
                    else {
                      v171 = (unsigned __int64)(unsigned __int8)v362_.v362 >> 1;
                    }
                    v172 = *(unsigned __int8*)(v163 + 880);
                    if ((v362_.v362 & 1) != 0) {
                      v173 = (char*)v362_.v364;
                    }
                    else {
                      v173 = (char*)&v362_.v362 + 1;
                    }
                    if (v171 != 0) {
                      v174 = *(_QWORD*)(v163 + 888);
                      if ((v172 & 1) == 0) {
                        v174 = v172 >> 1;
                      }
                      if (v174 != 0) {
                        if ((v172 & 1) != 0) {
                          **(_BYTE**)(v163 + 896) = 0;
                          *(_QWORD*)(v163 + 888) = 0;
                        }
                        else {
                          *(_WORD*)(v163 + 880) = 0;
                        }
                      }
                      GameRoutine_60a060((char*)(v163 + 880), (__int64)v173,
                                         v171),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    else if ((v172 & 1) != 0) {
                      **(_BYTE**)(v163 + 896) = 0;
                      *(_QWORD*)(v163 + 888) = 0;
                    }
                    else {
                      *(_WORD*)(v163 + 880) = 0;
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v170 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64, char*))(*(_QWORD*)v170 + 16LL))(
                          v170, v173),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      std___1___shared_weak_count___release_weak_alt2(v170),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    v175 = (unsigned __int64)v349_.v350;
                    if (((unsigned __int8)v349_.v349 & 1) == 0) {
                      v175 = (unsigned __int64)(unsigned __int8)v349_.v349 >> 1;
                    }
                    if (v175 == 0) {
                      if (((unsigned __int8)v349_.v349 & 1) != 0) {
                        if ((v362_.v362 & 1) != 0) {
                          v176 = v362_.v364;
                        }
                        else {
                          v176 = (char*)&v362_.v362 + 1;
                        }
                        if ((v362_.v362 & 1) != 0) {
                          v177 = (unsigned __int64)v362_.v363;
                        }
                        else {
                          v177 =
                              (unsigned __int64)(unsigned __int8)v362_.v362 >>
                              1;
                        }
                        SpineModel_64dde0((__int64*)&v349_.v349, (__int64)v176,
                                          v177),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                      }
                      else if ((v362_.v362 & 1) != 0) {
                        GameRoutine_64df20(&v349_.v349, (__int64)v362_.v364,
                                           (unsigned __int64)v362_.v363),
                            v50 = COERCE_AS(__typeof__(v50),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                            v52 = COERCE_AS(__typeof__(v52),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                      }
                      else {
                        v349_.v349 = (int*)v362_.v362;
                        v349_.v350 = v362_.v363;
                        v349_.v351 = (char*)v362_.v364;
                      }
                    }
                    GameRoutine_60a020_alt1((__int64)&v362_.v362, v142),
                        v50 = COERCE_AS(__typeof__(v50),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v52 = COERCE_AS(__typeof__(v52),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                  }
                LABEL_353:
                  std___1___shared_weak_count___release_weak_alt2(v164),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  if (v152 != 0) {
                    goto LABEL_354;
                  }
                LABEL_250:
                  if (++v139 >= (unsigned __int64)((v138[1] - *v138) >> 3)) {
                    goto LABEL_355;
                  }
                }
                Layout_1363e00_alt1((void*)(&v391_.v391), *v143,
                                    (__int64)&v360_.v360),
                    v50 = COERCE_AS(__typeof__(v50),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                v393_.v393 = nullptr;
                v393_.v394 = 0;
                if (v391_.v392 != 0 &&
                    (v148 = std___1___shared_weak_count_lock_alt1(v391_.v392),
                     v393_.v394 = v148, v148 != 0) &&
                    (v393_.v393 = v391_.v391, v391_.v391 != nullptr) &&
                    (v149 = v148,
                     (v150 = __dynamic_cast(v391_.v391, GameData_212dfc0[0],
                                            GameData_2131968[0], 0)) != 0)) {
                  v151 = (__int64*)&v393_.v393;
                  v395_.v395 = (char*)v150;
                  v395_.v396 = v149;
                }
                else {
                  v151 = (__int64*)&v395_.v395;
                }
                *v151 = 0;
                v151[1] = 0;
                v153 = (__int64)v395_.v395;
                v152 = v395_.v396;
                if (v395_.v396 != 0 &&
                    (atomic_fetch_add_explicit(
                         (atomic_ullong* volatile)(v395_.v396 + 16), 1u,
                         memory_order_relaxed),
                     atomic_fetch_add((atomic_ullong* volatile)(v152 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0)) {
                  (*(void (**)(__int64))(*(_QWORD*)v152 + 16LL))(v152),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  std___1___shared_weak_count___release_weak_alt2(v152),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  v154 = v393_.v394;
                  if (v393_.v394 != 0) {
                  LABEL_269:
                    if (atomic_fetch_add((atomic_ullong* volatile)(v154 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v154 + 16LL))(v154),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      std___1___shared_weak_count___release_weak_alt2(v154),
                          v50 = COERCE_AS(__typeof__(v50),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v52 = COERCE_AS(__typeof__(v52),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                  }
                }
                else {
                  v154 = v393_.v394;
                  if (v393_.v394 != 0) {
                    goto LABEL_269;
                  }
                }
                if (v391_.v392 != 0) {
                  std___1___shared_weak_count___release_weak_alt2(v391_.v392),
                      v50 = COERCE_AS(__typeof__(v50),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v52 = COERCE_AS(__typeof__(v52),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                }
                goto LABEL_275;
              }
            }
          LABEL_776:
            result = v386_.v387;
            if (v386_.v387 != 0) {
              result =
                  std___1___shared_weak_count___release_weak_alt2(v386_.v387),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(float, "s1", "=w"));
            }
          }
        }
      }
    }
    v329 = v388_.v389;
    if (v388_.v389 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v388_.v389 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v329 + 16LL))(v329),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
      return std___1___shared_weak_count___release_weak_alt2(v329);
    }
  }
  return result;
}

void Util_1578f20(_QWORD* a1, __int64 a2, char a3)
{
  int* v3;
  int v6;
  __int64 v7;
  int v8;
  __int64* v9;
  unsigned __int8* v10;
  char* v11;
  _BOOL4 v12;
  int v13;
  __int64 v14;
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
  unsigned __int64 v28;
  char* v29;
  bool v30;
  unsigned __int64 v31;
  int v32;
  char v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  struct {
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
  } v42_;
  struct {
    __int64 v60;
    unsigned __int64 v61;
    __int64 v62;
  } v60_;
  struct {
    __int64 v63;
    unsigned __int64 v64;
    __int64 v65;
  } v63_;

  v3 = *(int**)a2;
  v63_.v64 = 0;
  v63_.v65 = 0;
  v60_.v62 = 0;
  v63_.v63 = 0;
  v60_.v60 = 0;
  v60_.v61 = 0;
  v6 = *v3;
  v7 = fw_memory_g_heap_manager_ptr;
  if ((a3 & 1) != 0) {
    v8 = -1;
  }
  else {
    v8 = 1;
  }
  do {
    v9 = *(__int64**)(a2 + 8);
    v10 = *(unsigned __int8**)(a2 + 16);
    v42_.v58 = 0;
    v42_.v59 = 0;
    v6 += v8;
    v42_.v56 = 0;
    v42_.v57 = 0;
    v42_.v54 = 0;
    v42_.v55 = 0;
    v42_.v52 = 0;
    v42_.v53 = 0;
    v42_.v50 = 0;
    v42_.v51 = 0;
    v42_.v48 = 0;
    v42_.v49 = 0;
    v42_.v46 = 0;
    v42_.v47 = 0;
    v42_.v44 = 0;
    v42_.v45 = 0;
    v42_.v42 = 0;
    v42_.v43 = 0;
    UnitUtil_15e0640((__int64)&v42_.v42, *v9, v6, *v10, 1);
    if (*(&v42_.v42 + 3 * **(int**)(a2 + 24) + 1) !=
        *(&v42_.v42 + 3 * **(int**)(a2 + 24))) {
      v11 = game_util_Format_alt3("L_JobIcon_Rank%d_Attr%d_%02d", v6,
                                  **(_DWORD**)(a2 + 32), **(_DWORD**)(a2 + 40));
      if (ui_LayoutAccessor_FindPane_alt2(**(__int64***)(a2 + 48), v11) != 0) {
        GameRoutine_60a020_alt1((__int64)&v63_.v63, v11);
        v12 = false;
        v13 = 1;
        v14 = v42_.v57;
        if (v42_.v57 == 0) {
          goto LABEL_21;
        }
      LABEL_17:
        v16 = *(_QWORD*)v7;
        v42_.v58 = v14;
        if (*(_QWORD*)(v16 + 200) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(v16 + v17, v14);
        goto LABEL_21;
      }
    }
    if ((v60_.v60 & 1) != 0) {
      v15 = v60_.v61;
    }
    else {
      v15 = (unsigned __int64)(unsigned __int8)v60_.v60 >> 1;
    }
    if (v15 == 0) {
      v28 = (unsigned __int64)(*(&v42_.v42 + 3 * **(int**)(a2 + 24) + 1) -
                               *(&v42_.v42 + 3 * **(int**)(a2 + 24))) >>
            3;
      if ((v28 & 0x80000000) == 0) {
        while (1) {
          v29 = game_util_Format_alt3("L_JobIcon_Rank%d_Attr%d_%02d", v6,
                                      **(_DWORD**)(a2 + 32), v28);
          if (ui_LayoutAccessor_FindPane_alt2(**(__int64***)(a2 + 48), v29) !=
              0) {
            break;
          }
          v30 = __OFSUB__((_DWORD)v28, 1);
          LODWORD(v28) = v28 - 1;
          if (((v28 & 0x80000000) != 0LL) != v30) {
            goto LABEL_13;
          }
        }
        GameRoutine_60a020_alt1((__int64)&v60_.v60, v29);
      }
    }
  LABEL_13:
    v13 = 0;
    if ((a3 & 1) != 0) {
      v12 = v6 < 1;
    }
    else {
      v12 = v6 > 5;
    }
    v14 = v42_.v57;
    if (v42_.v57 != 0) {
      goto LABEL_17;
    }
  LABEL_21:
    if (v42_.v54 != 0) {
      v18 = *(_QWORD*)v7;
      v42_.v55 = v42_.v54;
      if (*(_QWORD*)(v18 + 200) != 0) {
        v19 = 128;
      }
      else {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(v18 + v19, v42_.v54);
    }
    if (v42_.v51 != 0) {
      v20 = *(_QWORD*)v7;
      v42_.v52 = v42_.v51;
      if (*(_QWORD*)(v20 + 200) != 0) {
        v21 = 128;
      }
      else {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(v20 + v21, v42_.v51);
    }
    if (v42_.v48 != 0) {
      v22 = *(_QWORD*)v7;
      v42_.v49 = v42_.v48;
      if (*(_QWORD*)(v22 + 200) != 0) {
        v23 = 128;
      }
      else {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(v22 + v23, v42_.v48);
    }
    if (v42_.v45 != 0) {
      v24 = *(_QWORD*)v7;
      v42_.v46 = v42_.v45;
      if (*(_QWORD*)(v24 + 200) != 0) {
        v25 = 128;
      }
      else {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(v24 + v25, v42_.v45);
    }
    if (v42_.v42 != 0) {
      v26 = *(_QWORD*)v7;
      v42_.v43 = v42_.v42;
      if (*(_QWORD*)(v26 + 200) != 0) {
        v27 = 128;
      }
      else {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(v26 + v27, v42_.v42);
    }
  } while ((v12 | v13) != 1);
  v31 = v63_.v64;
  v32 = v63_.v63 & 1;
  if (v32 == 0) {
    v31 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
  }
  v33 = v60_.v60;
  if (v31 != 0) {
    goto LABEL_55;
  }
  v38 = v60_.v61;
  if ((v60_.v60 & 1) == 0) {
    v38 = (unsigned __int64)(unsigned __int8)v60_.v60 >> 1;
  }
  if (v38 == 0) {
  LABEL_55:
    v34 = v63_.v63;
    v35 = v63_.v64;
    v63_.v63 = 0;
    v63_.v64 = 0;
    *a1 = v34;
    a1[1] = v35;
    v36 = v63_.v65;
    v63_.v65 = 0;
    a1[2] = v36;
    if ((v33 & 1) != 0 && v60_.v62 != 0) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v7 + v37, v60_.v62);
      if ((v63_.v63 & 1) != 0) {
      LABEL_65:
        if (v63_.v65 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v7 + v40, v63_.v65);
        }
      }
    }
  }
  else {
    v39 = v60_.v61;
    *a1 = v60_.v60;
    a1[1] = v39;
    a1[2] = v60_.v62;
    if (v32 != 0) {
      goto LABEL_65;
    }
  }
}

__int64 Util_15792c0(__int64* a1, unsigned __int16* a2, char a3, char a4,
                     _QWORD* a5, const char* a6, const char* a7, char a8)
{
  __int64* v15;
  __int64* v16;
  char v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  int* v24;
  const char* v25;
  __int64 v26;
  __int64 v27;
  int* v28;
  int v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _BOOL4 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  unsigned int v46;
  unsigned int v47;
  int v48;
  char* v49;
  int v50;
  char* v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v60;
  __int64 v61;
  char v62;
  char v63;
  __int64 v64[3];
  struct {
    __int64 v65;
    __int64* v66;
  } v65_;
  _QWORD** v67;
  struct {
    _QWORD* v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    _BYTE* v72;
    int v73;
    int v74;
    int v75;
  } v68_;
  __int64 v76;

  v15 = GameData_212c878[0];
  v16 = game_g_empty_item_ptr;
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) +
                73LL) == 18) {
    goto LABEL_33;
  }
  v17 = (*(_QWORD*)a2 != *game_g_empty_item_ptr) & (a8 ^ 1);
  LayoutAccessor_1560070_alt1((void*)(v64), a1, a6);
  if (v64[1] != 0) {
    v63 = a4;
    v18 = std___1___shared_weak_count_lock_alt1(v64[1]);
    v19 = (__int64*)v64[0];
    if (v64[1] != 0) {
      std___1___shared_weak_count___release_weak_alt2(v64[1]);
    }
    if (v18 != 0 && v19 != nullptr) {
      v62 = v17;
      v64[0] = (__int64)GameData_204d688;
      v65_.v66 = v64;
      GameHr_157b310(v19, a2, (__int64)v64);
      if (v65_.v66 == v64) {
        v20 = 32;
      }
      else {
        if (v65_.v66 == nullptr) {
          goto LABEL_14;
        }
        v20 = 40;
      }
      (*(void (**)(__int64))(*v65_.v66 + v20))((__int64)v65_.v66);
    LABEL_14:
      v21 = (*((_BYTE*)a2 + 3) & 2) != 0 ||
            (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v15 + 64) + 8LL * *a2) + 337LL) &
             2) != 0;
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v19, "IconDrop", v21);
      v22 = ui_LayoutAccessor_FindPane_alt2(v19, "Icon");
      a4 = v63;
      if (v22 != 0) {
        v23 = __dynamic_cast(v22, GameData_212d670[0], GameData_212d678[0], 0);
        if (v23 != 0) {
          if ((v17 & 1) != 0) {
            v24 = (int*)((char*)GameData_212da30 + 120);
          }
          else if ((atomic_load_explicit(
                        (atomic_uchar* volatile)&GameData_22594f0,
                        memory_order_acquire) &
                    1) != 0) {
            v24 = &GameData_22594e8;
          }
          else {
            v61 = v23;
            v24 = &GameData_22594e8;
            if (__cxa_guard_acquire_alt1((__int64)&GameData_22594f0) != 0) {
              GameData_22594e8 = -1;
              __cxa_guard_release_alt1((__int64)&GameData_22594f0);
            }
            v23 = v61;
          }
          v25 = (const char*)v23;
          LODWORD(v64[0]) = *v24;
          (*(void (**)(__int64, _QWORD, __int64*))(*(_QWORD*)v23 + 40LL))(
              v23, 0, v64);
          (*(void (**)(const char*, __int64, __int64*))(*(_QWORD*)v25 + 40LL))(
              v25, 1, v64);
          (*(void (**)(const char*, __int64, __int64*))(*(_QWORD*)v25 + 40LL))(
              v25, 2, v64);
          (*(void (**)(const char*, __int64, __int64*))(*(_QWORD*)v25 + 40LL))(
              v25, 3, v64);
          v17 = v62;
          GameRoutine_159d0c0_alt1(v25 + 32, v62, 1);
          a4 = v63;
        }
      }
      goto LABEL_24;
    }
    a4 = v63;
    if (v18 != 0) {
    LABEL_24:
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak_alt2(v18);
      }
    }
  }
  v26 = ui_LayoutAccessor_FindPane_alt2(a1, "IconEquip");
  v16 = game_g_empty_item_ptr;
  if (v26 != 0) {
    v27 = __dynamic_cast(v26, GameData_212d670[0], GameData_212d678[0], 0);
    if (v27 != 0) {
      if ((v17 & 1) != 0) {
        v28 = (int*)((char*)GameData_212da30 + 120);
      }
      else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                     memory_order_acquire) &
                1) != 0) {
        v28 = &GameData_22594e8;
      }
      else {
        v60 = v27;
        v28 = &GameData_22594e8;
        if (__cxa_guard_acquire_alt1((__int64)&GameData_22594f0) != 0) {
          GameData_22594e8 = -1;
          __cxa_guard_release_alt1((__int64)&GameData_22594f0);
        }
        v27 = v60;
        v16 = game_g_empty_item_ptr;
      }
      v29 = *v28;
      v30 = v27;
      LODWORD(v64[0]) = v29;
      (*(void (**)(__int64, _QWORD, __int64*))(*(_QWORD*)v27 + 40LL))(v27, 0,
                                                                      v64);
      (*(void (**)(__int64, __int64, __int64*))(*(_QWORD*)v30 + 40LL))(v30, 1,
                                                                       v64);
      (*(void (**)(__int64, __int64, __int64*))(*(_QWORD*)v30 + 40LL))(v30, 2,
                                                                       v64);
      (*(void (**)(__int64, __int64, __int64*))(*(_QWORD*)v30 + 40LL))(v30, 3,
                                                                       v64);
    }
  }
LABEL_33:
  if ((a3 & 1) == 0 || *a2 != 0) {
    ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, a7, *a2 != 0);
    v31 = GameHr_6ed030(*(_QWORD*)(*(_QWORD*)(*v15 + 64) + 8LL * *a2));
    if (a7 != nullptr) {
      v32 = (__int64)v31;
      if (v31 != nullptr) {
        v33 = ui_LayoutAccessor_FindTextBox_alt2(a1, a7);
        if (v33 != 0) {
          GameRoutine_156c5d0(v33, v32, 0);
        }
      }
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, a7, 1);
    LayoutAccessor_1562060_alt3(a1, a7, "MID_Sys_NoEquipment");
  }
  LODWORD(v65_.v65) = 0;
  memset(v64, 0, sizeof(v64));
  v76 = 6;
  GameRoutine_1579aa0(v64, &v76, a2, a5);
  if (a1[2] == 0) {
    goto LABEL_57;
  }
  v34 = a1[1];
  if (v34 == 0) {
    goto LABEL_58;
  }
  v35 = std___1___shared_weak_count_lock_alt1(v34);
  if (v35 != 0) {
    v36 = *a1;
    if (*a1 != 0) {
      LODWORD(a5) = *(unsigned __int8*)(v36 + 24);
      v37 = v36 + 152;
      if ((_DWORD)a5 == 0) {
        v37 = 0;
      }
      v38 = v37 != a1[2];
    }
    else {
      v38 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v38) {
        goto LABEL_50;
      }
    }
    else {
      v40 = v35;
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      std___1___shared_weak_count___release_weak_alt2(v40);
      if (v38) {
        goto LABEL_50;
      }
    }
    if (((unsigned __int8)a5 & 1) == 0) {
      goto LABEL_57;
    }
    goto LABEL_55;
  }
LABEL_50:
  v39 = a1[1];
  if (v39 != 0 && *(_QWORD*)(v39 + 8) != -1) {
  LABEL_55:
    v41 = a1[2];
    if (v41 != 0) {
      v34 = *(_QWORD*)(v41 + 24);
      goto LABEL_58;
    }
  }
LABEL_57:
  v34 = 0;
LABEL_58:
  Util_1579d20(v34, (__int64)v64);
  v42 = ui_LayoutAccessor_FindAlignment_alt2(a1, "A_Efficacy");
  if (v42 != 0) {
    Alignment_56b600_alt1(v42);
  }
  if (v64[0] != 0) {
    v64[1] = v64[0];
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v64[0]);
  }
  v44 = *(_QWORD*)(*(_QWORD*)(*v15 + 64) + 8LL * *a2);
  if (*(_BYTE*)(v44 + 73) == 18) {
    v45 = *(_DWORD*)(v44 + 76);
    if (v45 != 0) {
      v46 = *(unsigned __int8*)(v44 + 87);
      v47 = (v46 - *((unsigned __int8*)a2 + 2)) &
            ~((int)(v46 - *((unsigned __int8*)a2 + 2)) >> 31);
      if (v47 < v46) {
        v45 = (int)(v47 * v45) / (int)v46;
      }
      if (v45 <= 1) {
        v48 = 1;
      }
      else {
        v48 = v45;
      }
    }
    else {
      v48 = 0;
    }
    v55 = *v16;
    LODWORD(v64[0]) = 0;
    *(__int64*)((char*)v64 + 4) = v55;
    if (*(_BYTE*)GameData_212ceb0 != 0) {
      v56 = *GameData_212ceb0;
    }
    else {
      v56 = 0;
    }
    *(__int64*)((char*)&v64[1] + 4) = v56;
    WORD1(v65_.v65) = 0;
    HIDWORD(v65_.v65) = 0;
    v68_.v69 = 0;
    v68_.v70 = 0;
    v68_.v71 = 0;
    v68_.v72 = nullptr;
    v67 = &v68_.v68;
    v68_.v68 = nullptr;
    GameRoutine_930b90((__int64)&v65_.v65, (__int64)GameData_212c8b0[0]);
    v68_.v73 = 0;
    v68_.v74 = v48;
    v68_.v75 = 0;
    GameRoutine_157a1e0_alt2(a1, (unsigned __int16*)v64, 1u, 0, 1, 0, 0);
    LODWORD(v65_.v66) = 0;
    v65_.v65 = 0;
    if ((v68_.v70 & 1) != 0) {
      *v68_.v72 = 0;
      v68_.v71 = 0;
    }
    else {
      LOWORD(v68_.v70) = 0;
    }
    GameRoutine_6e3b50_alt1((__int64)&v67, v68_.v68);
    v68_.v68 = nullptr;
    v68_.v69 = 0;
    v67 = &v68_.v68;
    if ((v68_.v70 & 1) != 0) {
      v57 = v68_.v72;
      if (v68_.v72 != nullptr) {
        v58 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v58 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, (__int64)v68_.v72);
        v57 = v68_.v68;
      }
    }
    else {
      v57 = nullptr;
    }
    GameRoutine_6e3b50_alt1((__int64)&v67, v57);
  }
  else {
    if ((*((_DWORD*)a2 + 1) & 0xF) * *(unsigned __int8*)(v44 + 87) != 0) {
      v49 = "EnduranceOn";
    }
    else {
      v49 = "EnduranceOff";
    }
    LayoutAccessor_1562cf0_alt3((__int64)a1, (unsigned int*)v49);
    v50 =
        (*((_DWORD*)a2 + 1) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v15 + 64) + 8LL * *a2) +
                                87LL) -
        *((unsigned __int8*)a2 + 2);
    v51 = game_util_Format_alt3("%d", v50 & (unsigned int)~(v50 >> 31));
    v52 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_Num");
    if (v52 != 0) {
      GameRoutine_156c5d0(v52, (__int64)v51, 0);
    }
    v53 = game_util_Format_alt3(
        "%d",
        (*((_DWORD*)a2 + 1) & 0xF) *
            (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v15 + 64) +
                                                         8LL * *a2) +
                                              87LL));
    v54 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_MaxNum");
    if (v54 != 0) {
      GameRoutine_156c5d0(v54, (__int64)v53, 0);
    }
    GameRoutine_157a130(a1, a2, a8 & 1);
  }
  return GameRoutine_157ac20_alt1(a1, "IconEquip", a4 & *((_BYTE*)a2 + 3) & 1,
                                  a8 & 1);
}

bool Util_1579d20(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  int v5;
  unsigned int* v6;
  unsigned int* v7;
  _QWORD* v8;
  int v9;
  unsigned int v10;
  int i;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  int v16;
  unsigned int* v17;
  unsigned int* v18;
  _QWORD* v19;
  int v20;
  unsigned int v21;
  int j;
  __int64 v23;
  __int64 v24;
  int* v25;
  int* v26;
  unsigned __int64 v27;
  __int64* v28;
  atomic_uchar* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v42;
  struct {
    _QWORD v43[4];
    _QWORD* v44;
  } v43_;
  struct {
    int* v45;
    __int64 v46;
    __int64 v47;
  } v45_;
  struct {
    _QWORD v48[4];
    _QWORD* v49;
  } v48_;
  int v50;

  if (a1 == 0) {
    return false;
  }
  v3 = v43_.v43;
  v45_.v46 = 0;
  v45_.v47 = 0;
  v45_.v45 = nullptr;
  v43_.v43[0] = GameData_204da08;
  v43_.v43[1] = &v45_.v45;
  v5 = *(_DWORD*)(a2 + 24);
  v43_.v44 = v43_.v43;
  if (v5 == 0) {
    goto LABEL_21;
  }
  v6 = *(unsigned int**)a2;
  v7 = *(unsigned int**)(a2 + 8);
  v48_.v48[0] = GameData_1fa0f58;
  v48_.v48[1] = v43_.v43;
  v8 = v48_.v48;
  v48_.v49 = v48_.v48;
  if (v6 == v7) {
    goto LABEL_16;
  }
  v9 = 0;
  do {
    v10 = *v6;
    if (*v6 != 0) {
      for (i = 0; i != 32; ++i) {
        if (((v10 >> i) & 1) != 0) {
          v50 = v9 + i;
          if (v48_.v49 == nullptr) {
          LABEL_73:
            GameRoutine_60a310_alt1();
          }
          (*(void (**)(_QWORD*, int*))(*v48_.v49 + 48LL))(v48_.v49, &v50);
        }
      }
    }
    v9 += 32;
    ++v6;
  } while (v6 != v7);
  v8 = v48_.v49;
  if (v48_.v49 == v48_.v48) {
  LABEL_16:
    v13 = 32;
  }
  else {
    if (v48_.v49 == nullptr) {
      goto LABEL_18;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v8 + v13))((__int64)v8);
LABEL_18:
  v3 = v43_.v44;
  if (v43_.v44 == v43_.v43) {
  LABEL_21:
    v14 = 32;
    goto LABEL_22;
  }
  if (v43_.v44 != nullptr) {
    v14 = 40;
  LABEL_22:
    (*(void (**)(__int64))(*v3 + v14))((__int64)v3);
  }
  v15 = v43_.v43;
  v43_.v43[0] = GameData_204da88;
  v43_.v43[1] = &v45_.v45;
  v16 = *(_DWORD*)(a2 + 24);
  v43_.v44 = v43_.v43;
  if (v16 == 0) {
  LABEL_41:
    v24 = 32;
    goto LABEL_42;
  }
  v48_.v48[0] = GameData_1fa0f58;
  v48_.v48[1] = v43_.v43;
  v17 = *(unsigned int**)a2;
  v18 = *(unsigned int**)(a2 + 8);
  v19 = v48_.v48;
  v48_.v49 = v48_.v48;
  if (v17 == v18) {
    goto LABEL_36;
  }
  v20 = 0;
  do {
    v21 = *v17;
    if (*v17 != 0) {
      for (j = 0; j != 32; ++j) {
        if (((v21 >> j) & 1) != 0) {
          v50 = v20 + j;
          if (v48_.v49 == nullptr) {
            goto LABEL_73;
          }
          (*(void (**)(_QWORD*, int*))(*v48_.v49 + 48LL))(v48_.v49, &v50);
        }
      }
    }
    v20 += 32;
    ++v17;
  } while (v17 != v18);
  v19 = v48_.v49;
  if (v48_.v49 == v48_.v48) {
  LABEL_36:
    v23 = 32;
  }
  else {
    if (v48_.v49 == nullptr) {
      goto LABEL_38;
    }
    v23 = 40;
  }
  (*(void (**)(__int64))(*v19 + v23))((__int64)v19);
LABEL_38:
  v15 = v43_.v44;
  if (v43_.v44 == v43_.v43) {
    goto LABEL_41;
  }
  if (v43_.v44 != nullptr) {
    v24 = 40;
  LABEL_42:
    (*(void (**)(__int64))(*v15 + v24))((__int64)v15);
  }
  v25 = v45_.v45;
  v26 = (int*)v45_.v46;
  v42 = a2;
  if (v45_.v45 == (int*)v45_.v46) {
    v27 = 0;
  }
  else {
    v27 = 0;
    v28 = GameData_212c880[0];
    v29 = (atomic_uchar*)GameData_2131900;
    v30 = GameData_21318f8;
    do {
      while (v27 > 1) {
        ++v25;
        v27 = 2;
        if (v25 == v26) {
          goto LABEL_68;
        }
      }
      v31 = *(_QWORD*)(*(_QWORD*)(*v28 + 64) + 8LL * *v25);
      v32 = (*(__int64 (**)(__int64, char*, __int64))(*(_QWORD*)a1 + 120LL))(
          a1, GameData_204d240[v27], 1);
      if ((atomic_load_explicit(v29, memory_order_acquire) & 1) == 0) {
        v36 = v32;
        v37 = __cxa_guard_acquire_alt1((__int64)v29);
        v32 = v36;
        if (v37 != 0) {
          *v30 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
          __cxa_guard_release_alt1((__int64)v29);
          v32 = v36;
        }
      }
      if (v32 != 0) {
        v33 = v32;
        v34 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
        if (v34 == v30) {
          goto LABEL_56;
        }
        do {
          v34 = (__int64*)*v34;
        } while (v34 != v30 && v34 != nullptr);
        if (v34 != nullptr) {
        LABEL_56:
          *(_BYTE*)(v33 + 88) |= 1u;
          GameRoutine_18415e0(v33, v31);
          ++v27;
        }
      }
      ++v25;
    } while (v25 != v26);
    if (v27 > 1) {
      goto LABEL_68;
    }
  }
  v38 = (*(__int64 (**)(__int64, char*, __int64))(*(_QWORD*)a1 + 120LL))(
      a1, GameData_204d240[v27], 1);
  if (v38 != 0) {
    *(_BYTE*)(v38 + 88) &= ~1u;
  }
  if (v27 == 0) {
    v39 = (*(__int64 (**)(__int64, const char*, __int64))(
        *(_QWORD*)a1 + 120LL))(a1, "IconEfficacy01", 1);
    if (v39 != 0) {
      *(_BYTE*)(v39 + 88) &= ~1u;
    }
  }
LABEL_68:
  v12 = *(_DWORD*)(v42 + 24) != 0;
  if (v45_.v45 != nullptr) {
    v45_.v46 = (__int64)v45_.v45;
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, (__int64)v45_.v45);
  }
  return v12;
}

__int64 Util_157b410(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    _BYTE v9[32];
    _BYTE* v10;
  } v9_;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v5 = *(__int64**)a1;
      v6 = result;
      if (v5 == nullptr) {
        goto LABEL_14;
      }
      v7 = *(_QWORD*)(a2 + 32);
      if (v7 != 0) {
        if (v7 == a2) {
          v9_.v10 = v9_.v9;
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v7 + 24LL))(v7, v9_.v9);
        }
        else {
          v9_.v10 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        }
      }
      else {
        v9_.v10 = nullptr;
      }
      GameHr_157b310(v5, (unsigned __int16*)game_g_empty_item_ptr,
                     (__int64)v9_.v9);
      result = (__int64)v9_.v10;
      if (v9_.v10 == v9_.v9) {
        v8 = 32;
      }
      else {
        if (v9_.v10 == nullptr) {
          goto LABEL_14;
        }
        v8 = 40;
      }
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)v9_.v10 + v8))((__int64)v9_.v10);
    LABEL_14:
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        return std___1___shared_weak_count___release_weak_alt2(v6);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void Util_157b9a0(PSEUDO_X8 x8_, __int64 a1, char a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int16* v3;
  __int64 v4;
  char v5;
  _DWORD* v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _DWORD* v14;
  unsigned __int64 v15;
  _DWORD* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v50;

  v3 = (unsigned __int16*)(a1 + 876);
  v4 = -24;
  v5 = a2;
  v8 = nullptr;
  v50 = 0;
  a3[7] = 0;
  a3[8] = 0;
  a3[5] = 0;
  a3[6] = 0;
  a3[3] = 0;
  a3[4] = 0;
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  do {
    if (*v3 != 0) {
      v11 = GameRoutine_15748c0_alt1(a1, v3, 1);
      if ((_DWORD)v11 != 0) {
        if ((_DWORD)v11 == 2) {
          if ((v5 & 1) == 0 || (v11 & 0x100000000LL) != 0) {
            v14 = (_DWORD*)a3[4];
            v13 = a3[5];
            if ((unsigned __int64)v14 >= v13) {
              v24 = a3[3];
              v25 = (char*)v14 - v24;
              v26 = ((__int64)v14 - v24) >> 2;
              v27 = v26 + 1;
              if ((unsigned __int64)(v26 + 1) >> 62 != 0) {
              LABEL_64:
                *a3 = v50;
                GameRoutine_6e5a20_alt1();
              }
              v28 = v13 - v24;
              if (v28 >> 1 > v27) {
                v27 = v28 >> 1;
              }
              if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFFCLL) {
                v29 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v29 = v27;
              }
              if (v29 != 0) {
                if (v29 >> 62 != 0) {
                LABEL_65:
                  *a3 = v50;
                  GameRoutine_60a210_alt1();
                }
                v30 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v29, 16, 0);
              }
              else {
                v30 = 0;
              }
              v41 = v30 + 4 * v29;
              v42 = (unsigned __int64)v14 - v24;
              v43 = (__int64)&v25[v30 + -4 * v26];
              *(_DWORD*)&v25[v30] = v4 + 30;
              v44 = (__int64)&v25[v30 + 4];
              memcpy_alt1(v43, v24, v42);
              a3[3] = v43;
              a3[5] = v41;
              if (v24 != 0) {
                v45 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v45 = 56;
                }
                nn_mem_StandardAllocator_Free_alt3(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v24);
              }
              v5 = a2;
              a3[4] = v44;
            }
            else {
              *v14 = v4 + 30;
              a3[4] = (__int64)(v14 + 1);
            }
          }
        }
        else if ((_DWORD)v11 == 1 &&
                 ((v5 & 1) == 0 || (v11 & 0x100000000LL) != 0)) {
          v12 = a3[2];
          if ((unsigned __int64)v8 >= v12) {
            v31 = (unsigned __int64)v8 - v50;
            v32 = ((__int64)v8 - v50) >> 2;
            v33 = v32 + 1;
            if ((unsigned __int64)(v32 + 1) >> 62 != 0) {
              *a3 = v50;
              GameRoutine_6e5a20_alt1();
            }
            v34 = v12 - v50;
            if (v34 >> 1 > v33) {
              v33 = v34 >> 1;
            }
            if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFFCLL) {
              v35 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v35 = v33;
            }
            if (v35 != 0) {
              if (v35 >> 62 != 0) {
                *a3 = v50;
                GameRoutine_60a210_alt1();
              }
              v36 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v35, 16, 0);
            }
            else {
              v36 = 0;
            }
            v46 = v36 + 4 * v35;
            v47 = v36 + v31 - 4 * v32;
            *(_DWORD*)(v36 + v31) = v4 + 30;
            v8 = (_DWORD*)(v36 + v31 + 4);
            memcpy_alt1(v47, v50, v31);
            a3[1] = (__int64)v8;
            a3[2] = v46;
            if (v50 != 0) {
              v48 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v48 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v50);
            }
            v50 = v47;
            a3[1] = (__int64)v8;
          }
          else {
            *v8++ = v4 + 30;
            a3[1] = (__int64)v8;
          }
        }
      }
      else {
        v16 = (_DWORD*)a3[7];
        v15 = a3[8];
        if ((unsigned __int64)v16 < v15) {
          *v16 = v4 + 30;
          v9 = (__int64)(v16 + 1);
        }
        else {
          v17 = a3[6];
          v18 = (char*)v16 - v17;
          v19 = ((__int64)v16 - v17) >> 2;
          v20 = v19 + 1;
          if ((unsigned __int64)(v19 + 1) >> 62 != 0) {
            goto LABEL_64;
          }
          v21 = v15 - v17;
          if (v21 >> 1 > v20) {
            v20 = v21 >> 1;
          }
          if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFFCLL) {
            v22 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v22 = v20;
          }
          if (v22 != 0) {
            if (v22 >> 62 != 0) {
              goto LABEL_65;
            }
            v23 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v22, 16, 0);
          }
          else {
            v23 = 0;
          }
          v37 = v23 + 4 * v22;
          v38 = (unsigned __int64)v16 - v17;
          v39 = (__int64)&v18[v23 + -4 * v19];
          *(_DWORD*)&v18[v23] = v4 + 30;
          v9 = (__int64)&v18[v23 + 4];
          memcpy_alt1(v39, v17, v38);
          a3[6] = v39;
          a3[8] = v37;
          if (v17 != 0) {
            v40 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v40 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v17);
          }
          v5 = a2;
        }
        a3[7] = v9;
      }
    }
    v10 = __CFADD__(v4++, 1);
    v3 += 4;
  } while (!v10);
  *a3 = v50;
}

void Util_157bd60(__int64 a1, __int64 a2, __int64 a3, int* a4)
{
  int v8;
  int* v9;
  int* v10;
  int* v11;
  unsigned __int16* v12;
  int v13;
  int v14;
  __int64 v16;
  int v17;
  __int64 v18;
  int* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int* v24;
  int* v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  struct {
    __int64 v33[3];
    int* v34;
    int* v35;
    char gap40_[8];
    int* v36;
    int* v37;
  } v33_;
  int v38;

  Util_157b9a0((void*)(v33_.v33), a1, 1);
  v8 = *a4;
  if ((*a4 & 9) == 0) {
    goto LABEL_15;
  }
  v9 = v33_.v36;
  v10 = v33_.v37;
  if (v33_.v36 == v33_.v37) {
    goto LABEL_15;
  }
  v11 = v33_.v36;
  do {
    v12 = (unsigned __int16*)(a1 + 828 + 8LL * *v11);
    v13 = *v12;
    v14 = *((_BYTE*)v12 + 3) & 0x20;
    if (v13 != 0 && v14 == 0) {
      v16 = *(_QWORD*)(a3 + 32);
      v38 = 0;
      if (v16 != 0) {
        (*(void (**)(__int64, int*))(*(_QWORD*)v16 + 48LL))(v16, &v38);
        goto LABEL_12;
      }
      goto LABEL_41;
    }
    ++v11;
  } while (v11 != v33_.v37);
  do {
  LABEL_12:
    v17 = *v9++;
    v18 = *(_QWORD*)(a2 + 32);
    v38 = v17;
    if (v18 == 0) {
      goto LABEL_41;
    }
    (*(void (**)(__int64, int*))(*(_QWORD*)v18 + 48LL))(v18, &v38);
  } while (v9 != v10);
  v8 = *a4;
LABEL_15:
  if ((v8 & 3) != 0) {
    v19 = (int*)v33_.v33[0];
    v20 = v33_.v33[1];
    if (v33_.v33[0] != v33_.v33[1]) {
      v21 = *(_QWORD*)(a3 + 32);
      v38 = 1;
      if (v21 != 0) {
        (*(void (**)(__int64, int*))(*(_QWORD*)v21 + 48LL))(v21, &v38);
        do {
          v22 = *v19++;
          v23 = *(_QWORD*)(a2 + 32);
          v38 = v22;
          if (v23 == 0) {
            goto LABEL_41;
          }
          (*(void (**)(__int64, int*))(*(_QWORD*)v23 + 48LL))(v23, &v38);
        } while (v19 != (int*)v20);
        v8 = *a4;
        goto LABEL_22;
      }
    LABEL_41:
      GameRoutine_60a310_alt1();
    }
  }
LABEL_22:
  if ((v8 & 5) != 0) {
    v24 = v33_.v34;
    v25 = v33_.v35;
    if (v33_.v34 != v33_.v35) {
      v26 = *(_QWORD*)(a3 + 32);
      v38 = 2;
      if (v26 != 0) {
        (*(void (**)(__int64, int*))(*(_QWORD*)v26 + 48LL))(v26, &v38);
        while (1) {
          v27 = *v24++;
          v28 = *(_QWORD*)(a2 + 32);
          v38 = v27;
          if (v28 == 0) {
            break;
          }
          (*(void (**)(__int64, int*))(*(_QWORD*)v28 + 48LL))(v28, &v38);
          if (v24 == v25) {
            goto LABEL_28;
          }
        }
      }
      goto LABEL_41;
    }
  }
LABEL_28:
  v29 = fw_memory_g_heap_manager_ptr;
  if (v33_.v36 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, (__int64)v33_.v36);
  }
  if (v33_.v34 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v29 + v31, (__int64)v33_.v34);
  }
  if (v33_.v33[0] != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v29 + v32, v33_.v33[0]);
  }
}

__int64* Util_157c0a0(__int64** a1, char a2)
{
  __int64* result;
  __int64 v5;
  int v6;
  int* v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  int* v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  int v17;
  int* v18;
  __int64 v19;
  int* v20;
  int v21;
  unsigned __int64 v22;
  int v23;

  result = a1[1];
  if (result != nullptr) {
    result = (__int64*)std___1___shared_weak_count_lock_alt1((__int64)result);
    if (result != nullptr) {
      v5 = (__int64)result;
      result = *a1;
      if (*a1 != nullptr) {
        if (game_GameModeData_instance_ != 0) {
          v6 = *(_DWORD*)(game_GameModeData_instance_ + 60);
          v7 = &GameData_21f8110;
          if (v6 == 2) {
            v10 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
          }
          else if (v6 == 3) {
            v8 = *(_DWORD*)(game_GameModeData_instance_ + 64);
            v9 = v8 <= 1;
            if (v8 <= 1) {
              LODWORD(v10) = 1;
            }
            else {
              LODWORD(v10) =
                  (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
            }
            if (!v9) {
              v7 = &GameData_21f8130;
            }
          }
          else {
            LODWORD(v10) = 1;
          }
          v13 = v7 + 2;
          v12 = *((_QWORD*)v7 + 1);
          v14 = (unsigned __int64)(*((_QWORD*)v13 + 1) - v12) >> 2;
          if ((int)v10 < (int)v14) {
            LODWORD(v14) = v10;
          }
          v15 = v14 - 1;
          if ((int)v10 <= 0) {
            v16 = 0;
          }
          else {
            v16 = v15;
          }
          v17 = *(_DWORD*)(v12 + 4LL * v16);
          v18 = &GameData_21f8110;
          if (v6 == 3 && *(int*)(game_GameModeData_instance_ + 64) > 1) {
            v18 = &GameData_21f8130;
          }
          v20 = v18 + 2;
          v19 = *((_QWORD*)v18 + 1);
          v21 = *(_DWORD*)(game_GameModeData_instance_ + 76);
          v22 = (unsigned __int64)(*((_QWORD*)v20 + 1) - v19) >> 2;
          if ((int)v22 <= 1) {
            LODWORD(v22) = 1;
          }
          v23 = *(_DWORD*)(v19 + 4LL * (unsigned int)v22 - 4);
          if (v23 >= v21) {
            v23 = *(_DWORD*)(game_GameModeData_instance_ + 76);
          }
          if (v21 >= v17) {
            v11 = v23;
          }
          else {
            v11 = v17;
          }
        }
        else {
          v11 = 0;
        }
        result =
            (__int64*)GameRoutine_157c220_alt1(result, v11, v11, 1, a2 & 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return (__int64*)std___1___shared_weak_count___release_weak_alt2(v5);
      }
    }
  }
  return result;
}

__int64 Util_157d280(__int64* a1, int a2, int a3, char a4, char a5, char a6)
{
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  int* v16;
  int v17;
  __int64 v18;
  char* v19;
  const char* v20;
  const char* v21;
  const char* v22;
  bool v23;
  char v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 result;
  __int64 v42;
  int v43;
  char v44;
  __int64 v45;
  char v46;
  __int64 v47;
  struct {
    __int64 v48[2];
    char* v49;
    unsigned __int64 v50;
    int v51;
    int v52;
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
  } v48_;

  v12 = ui_LayoutAccessor_FindPane_alt2(a1, "Icon");
  if (v12 != 0) {
    v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v13 = 0;
  }
  v14 = (char*)GameData_212da30;
  if ((unsigned int)a2 > 7) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                              memory_order_acquire) &
         1) != 0) {
      v16 = &GameData_22594e8;
    }
    else {
      v43 = __cxa_guard_acquire_alt1((__int64)&GameData_22594f0);
      v16 = &GameData_22594e8;
      if (v43 != 0) {
        GameData_22594e8 = -1;
        __cxa_guard_release_alt1((__int64)&GameData_22594f0);
        v16 = &GameData_22594e8;
      }
    }
  }
  else {
    v15 = 72;
    if ((a6 & 1) != 0) {
      v15 = 36;
    }
    v16 = (int*)((char*)GameData_212da30 + v15);
  }
  if (v13 != 0) {
    v17 = *v16;
    v18 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v13 + 88LL))(v13, 0);
    if (v18 != 0) {
      *(_DWORD*)(v18 + 12) = v17;
    }
    if ((unsigned int)a2 > 7) {
      v19 = &GameData_1a9f09e;
    }
    else {
      v19 = GameData_204f370[a2];
    }
    Manager_136a920(ui_Manager_instance_ + 1264, v13, 0, 7u, v19);
  }
  if (a2 > 3) {
    if (a2 > 5) {
      if (a2 == 6) {
        v20 = "MID_Sys_Motivation";
      }
      else {
        v20 = nullptr;
        if (a2 == 7) {
          v42 = GameRoutine_156d320();
          if (v42 != 0) {
            v20 = *(const char**)(v42 + 32);
          }
          else {
            v20 = &GameData_1a9f09e;
          }
        }
      }
      goto LABEL_35;
    }
    v21 = "MID_Sys_Turn";
    v22 = "MID_Sys_Award";
    if (a2 != 5) {
      v21 = nullptr;
    }
    v23 = a2 == 4;
    goto LABEL_32;
  }
  if (a2 > 1) {
    v21 = "MID_Sys_Fragment";
    v22 = "MID_Sys_Rewind";
    if (a2 != 3) {
      v21 = nullptr;
    }
    v23 = a2 == 2;
  LABEL_32:
    if (v23) {
      v20 = v22;
    }
    else {
      v20 = v21;
    }
  LABEL_35:
    LayoutAccessor_1562060_alt3(a1, "T_Txt", v20);
    v46 = 0;
    v47 = GameData_21759e0;
    v45 = 0x200000000LL;
    v24 = 2;
    goto LABEL_36;
  }
  if (a2 != 0) {
    v20 = nullptr;
    if (a2 == 1) {
      v20 = "MID_Sys_HonorExp";
      if (game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v20 = "MID_Sys_HonorExp_Part3";
      }
    }
    goto LABEL_35;
  }
  LayoutAccessor_1562060_alt3(a1, "T_Txt", "MID_Sys_Gold");
  v46 = 0;
  v47 = GameData_21759e0;
  v45 = 0x200000000LL;
  v24 = 3;
LABEL_36:
  v44 = v24;
  GameRoutine_17d8560((void*)(v48_.v48), a3, (__int64)&v47, &v44);
  if ((v48_.v48[0] & 1) != 0) {
    v25 = v48_.v49;
  }
  else {
    v25 = (char*)v48_.v48 + 1;
  }
  if (v25 != nullptr) {
    v26 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_Num");
    if (v26 != 0) {
      GameRoutine_156c5d0(v26, (__int64)v25, 0);
    }
  }
  if ((v48_.v48[0] & 1) != 0 && v48_.v49 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v48_.v49);
  }
  v28 = 64;
  if ((a6 & 1) != 0) {
    v28 = 60;
  }
  v29 = 72;
  if ((a6 & 1) != 0) {
    v29 = 36;
  }
  if ((a4 & 1) != 0) {
    v30 = v28;
  }
  else {
    v30 = v29;
  }
  v31 = *(_DWORD*)&v14[v30];
  v32 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_Num");
  if (v32 != 0) {
    v33 = Pane_58f8a0(v32);
    if (v33 != 0) {
      *(_DWORD*)(v33 + 12) = v31;
    }
  }
  if ((a5 & 1) != 0) {
    v48_.v53 = -1;
    v48_.v54 = -1;
    v48_.v55 = -1;
    v48_.v56 = -1;
    v34 = *msg_MessageManager_instance__ptr[0];
    v48_.v57 = -1;
    v48_.v58 = -1;
    v48_.v59 = -1;
    v48_.v60 = -1;
    v48_.v61 = -1;
    v48_.v62 = -1;
    v48_.v63 = -1;
    v48_.v64 = -1;
    v48_.v48[0] = (__int64)(GameData_212e348 + 2);
    v48_.v48[1] = 0xFFFF0001FFFF0000LL;
    v48_.v49 = (char*)0xFFFF0004FFFF0002LL;
    v48_.v50 = 0xFFFF0006FFFF0005LL;
    v48_.v65 = 8;
    v48_.v51 = -65529;
    v48_.v52 = -65528;
    v35 = GameRoutine_a4dbe0_alt2(v34, "MID_Sys_Over", 0);
    if (v35 != nullptr) {
      v36 = (__int64)v35;
      v37 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_NumOver");
      if (v37 != 0) {
        GameRoutine_156c5d0(v37, v36, 0);
      }
    }
    v38 = *(_DWORD*)&v14[v30];
    v39 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_NumOver");
    if (v39 != 0) {
      v40 = Pane_58f8a0(v39);
      if (v40 != 0) {
        *(_DWORD*)(v40 + 12) = v38;
      }
    }
  }
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "T_NumOver", a5 & 1);
  result = ui_LayoutAccessor_FindAlignment_alt2(a1, "A_Num");
  if (result != 0) {
    return Alignment_56b600_alt1(result);
  }
  return result;
}

__int64 Util_157d6f0(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  unsigned int v11;
  __int64 (***v12)();
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  unsigned int v22;
  __int64 (***v23)();
  int v24;
  int v25;
  long double v26;
  int v27;
  int v28;
  int v29;
  _BOOL8 v30;
  __int64 v32;
  __int64 v33;
  _QWORD v34[2];
  __int64 v35;
  _QWORD v36[2];
  __int64 v37;

  v3 = *a2;
  v2 = a2[1];
  if (*a2 == 0 || v2 == 0) {
    goto LABEL_11;
  }
  v36[0] = 0;
  v36[1] = v3;
  v7 = *(_QWORD*)(v3 + 24);
  v34[0] = 0;
  v34[1] = v2;
  v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 24) + 1784LL) + 272LL);
  v37 = *(_QWORD*)(*(_QWORD*)(v7 + 1784) + 272LL);
  v35 = v8;
  v9 = v37 == 0 || v8 == 0;
  if (v9 || (v10 = *(_QWORD*)(game_GameModeData_instance_ + 128),
             ((v11 = GameReliance_8e17a0(v10, v36, v34)) & 0x80000000) != 0)) {
    v12 = GameData_212dae8;
    if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212dae8 + 2) == 0) {
      goto LABEL_11;
    }
  }
  else {
    v12 = (__int64 (***)())(*(_QWORD*)(v10 + 8) + 56LL * v11);
    if (*((_BYTE*)v12 + 10) == 0) {
    LABEL_11:
      v13 = 0;
      goto LABEL_14;
    }
  }
  v13 = *((unsigned __int8*)v12 + 11);
LABEL_14:
  v14 = ui_LayoutAccessor_FindPane(a1, "Icon");
  if (v14 != 0) {
    v14 = __dynamic_cast(v14, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1841fc0(v14, v13);
  LayoutAccessor_1560070((void*)(&v32), a1, (__int64)"L_Gauge");
  v15 = *a2;
  v16 = 0;
  if (*a2 != 0) {
    v17 = a2[1];
    if (v17 != 0) {
      v36[0] = 0;
      v36[1] = v15;
      v18 = *(_QWORD*)(v15 + 24);
      v34[0] = 0;
      v34[1] = v17;
      v19 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v17 + 24) + 1784LL) + 272LL);
      v37 = *(_QWORD*)(*(_QWORD*)(v18 + 1784) + 272LL);
      v35 = v19;
      v20 = v37 == 0 || v19 == 0;
      if (v20 ||
          (v21 = *(_QWORD*)(game_GameModeData_instance_ + 128),
           ((v22 = GameReliance_8e17a0(v21, v36, v34)) & 0x80000000) != 0)) {
        v23 = GameData_212dae8;
      }
      else {
        v23 = (__int64 (***)())(*(_QWORD*)(v21 + 8) + 56LL * v22);
      }
      v16 = *((unsigned __int16*)v23 + 6);
    }
  }
  v24 = GameRoutine_8ca410(a2);
  v25 = GameRoutine_8ca500(a2);
  LODWORD(v26) = 1.0;
  if (v25 >= 1) {
    v27 = v25 - v24;
    if (v25 != v24) {
      if (v16 <= v24) {
        v28 = v24;
      }
      else {
        v28 = v16;
      }
      v29 = v28 - v24;
      if (v27 < v29) {
        v29 = v25 - v24;
      }
      *(float*)&v26 = (float)v29 / (float)v27;
    }
  }
  GameRoutine_174d580(&v32, "GaugeUp", 7, v26);
  if (v33 != 0) {
    std___1___shared_weak_count___release_weak(v33);
  }
  v30 = (unsigned int)GameRoutine_8ca500(a2) != 0;
  return ui_LayoutAccessor_SetPaneVisible(a1, "L_Gauge", v30);
}

__int64 Util_157da70(__int64 result, const char* a2, _QWORD* a3, _QWORD* a4)
{
  __int64 v4;
  __int64 v5;
  __int64* v7;
  char* v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64* v12;
    __int64 v13;
  } v12_;
  __int64 v14[9];

  if (*a3 != 0 && *a4 != 0) {
    v14[7] = v4;
    v14[8] = v5;
    v7 = (__int64*)result;
    GameRoutine_8ca350_alt1(v14, a3, a4);
    v9 = game_util_Format_alt3("L_Reliance%s", a2);
    LayoutAccessor_1560070_alt1((void*)(&v12_.v12), v7, v9);
    result = v12_.v13;
    if (v12_.v13 != 0) {
      v10 = std___1___shared_weak_count_lock_alt1(v12_.v13);
      if (v10 != 0) {
        v11 = v10;
        if (v12_.v12 != nullptr) {
          Util_157d6f0(v12_.v12, v14);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak_alt2(v11);
        }
      }
      result = v12_.v13;
      if (v12_.v13 != 0) {
        return std___1___shared_weak_count___release_weak_alt2(v12_.v13);
      }
    }
  }
  return result;
}

void Util_157e3a0(__int64* a1, unsigned int* a2, unsigned __int8 a3, _QWORD* a4)
{
  __int64 v8;
  __int64* v9;
  __int64* v10;
  unsigned int v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BOOL4 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  char* v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  char* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _BOOL4 v43;
  unsigned int v44;
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
  __int64* v57;
  __int64 v58;
  int v59;
  __int64 v60;
  unsigned __int64 v61;
  char v62;
  __int64 v63;
  int v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _BOOL4 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  int v75;
  __int64 v76;
  int v77;
  __int64 v78;
  unsigned __int64 v79;
  char v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  int v87;
  struct {
    __int64* v88;
    __int64* v89;
    unsigned __int64 v90;
    unsigned __int64 v91;
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
  } v88_;

  if ((*(_WORD*)a2 & 0xFFF) != 0) {
    LayoutAccessor_1560070_alt1((void*)(&v88_.v88), a1, "L_Icon");
    if (v88_.v89 == nullptr) {
      goto LABEL_17;
    }
    v8 = std___1___shared_weak_count_lock_alt1((__int64)v88_.v89);
    v9 = v88_.v88;
    if (v88_.v89 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v88_.v89);
    }
    if (v8 != 0 && v9 != nullptr) {
      GameRoutine_157ecd0_alt1(
          v9,
          *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*a2 & 0xFFF)),
          0);
      goto LABEL_15;
    }
  LABEL_14:
    if (v8 == 0) {
      goto LABEL_17;
    }
    goto LABEL_15;
  }
  LayoutAccessor_1560070_alt1((void*)(&v88_.v88), a1, "L_Icon");
  if (v88_.v89 != nullptr) {
    v8 = std___1___shared_weak_count_lock_alt1((__int64)v88_.v89);
    v10 = v88_.v88;
    if (v88_.v89 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v88_.v89);
    }
    if (v8 == 0 || v10 == nullptr) {
      goto LABEL_14;
    }
    Util_157ee20(v10, a3);
  LABEL_15:
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt2(v8);
    }
  }
LABEL_17:
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "T_Txt",
                                        (*a2 & 0xFFF) != 0);
  v11 = *a2;
  if ((*a2 & 0xFFF) != 0) {
    v12 = GameHr_6fb960(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                   8 * (*a2 & 0xFFFLL)));
    if (v12 != nullptr) {
      v13 = (__int64)v12;
      v14 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_Txt");
      if (v14 != 0) {
        GameRoutine_156c5d0(v14, v13, 0);
      }
    }
    v11 = *a2;
  }
  if ((v11 & 0xFFF) == 0) {
    if (a1[2] == 0) {
      goto LABEL_96;
    }
    v19 = a1[1];
    if (v19 == 0) {
    LABEL_97:
      LODWORD(v88_.v91) = 0;
      v88_.v89 = nullptr;
      v88_.v90 = 0;
      v88_.v88 = nullptr;
      Util_1579d20(v19, (__int64)&v88_.v88);
      LayoutAccessor_1562cf0_alt3((__int64)a1, (unsigned int*)"NumNone");
      return;
    }
    v20 = std___1___shared_weak_count_lock_alt1(v19);
    if (v20 == 0) {
      goto LABEL_89;
    }
    v21 = *a1;
    if (*a1 != 0) {
      LODWORD(a4) = *(unsigned __int8*)(v21 + 24);
      v22 = v21 + 152;
      if ((_DWORD)a4 == 0) {
        v22 = 0;
      }
      v23 = v22 != a1[2];
    }
    else {
      v23 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v23) {
      LABEL_89:
        v50 = a1[1];
        if (v50 != 0 && *(_QWORD*)(v50 + 8) != -1) {
        LABEL_94:
          v52 = a1[2];
          if (v52 != 0) {
            v19 = *(_QWORD*)(v52 + 24);
            goto LABEL_97;
          }
        }
      LABEL_96:
        v19 = 0;
        goto LABEL_97;
      }
    }
    else {
      v51 = v20;
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak_alt2(v51);
      if (v23) {
        goto LABEL_89;
      }
    }
    if (((unsigned __int8)a4 & 1) == 0) {
      goto LABEL_96;
    }
    goto LABEL_94;
  }
  if (a3 > 4u) {
    if (a3 == 5) {
      v27 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (v11 & 0xFFF));
      LODWORD(a4) = *(unsigned __int8*)(v27 + 273);
      if ((unsigned int)*(unsigned __int8*)(v27 + 104) - 5 >= 2) {
        v28 = 0;
      }
      else {
        v28 = (v11 >> 19) & 0x1F;
      }
      LayoutAccessor_1562cf0_alt3((__int64)a1, (unsigned int*)"NumEndurance");
      v29 = game_util_Format_alt3(
          "%d", ((unsigned int)a4 - ((v11 >> 12) & 0x7F) + v28) &
                    ~((int)((_DWORD)a4 - ((v11 >> 12) & 0x7F) + v28) >> 31));
      v30 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_Num");
      if (v30 != 0) {
        GameRoutine_156c5d0(v30, (__int64)v29, 0);
      }
      v31 = game_util_Format_alt3("%d", v28 + (int)a4);
      v32 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_MaxNum");
      if (v32 == 0) {
      LABEL_62:
        if (a1[2] == 0) {
          goto LABEL_84;
        }
      LABEL_63:
        v39 = a1[1];
        if (v39 == 0) {
        LABEL_85:
          LODWORD(v88_.v91) = 0;
          v88_.v89 = nullptr;
          v88_.v90 = 0;
          v88_.v88 = nullptr;
          Util_1579d20(v39, (__int64)&v88_.v88);
          return;
        }
        v40 = std___1___shared_weak_count_lock_alt1(v39);
        if (v40 == 0) {
          goto LABEL_77;
        }
        v41 = *a1;
        if (*a1 != 0) {
          LODWORD(a4) = *(unsigned __int8*)(v41 + 24);
          v42 = v41 + 152;
          if ((_DWORD)a4 == 0) {
            v42 = 0;
          }
          v43 = v42 != a1[2];
        }
        else {
          v43 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v43) {
          LABEL_77:
            v47 = a1[1];
            if (v47 != 0 && *(_QWORD*)(v47 + 8) != -1) {
            LABEL_82:
              v49 = a1[2];
              if (v49 != 0) {
                v39 = *(_QWORD*)(v49 + 24);
                goto LABEL_85;
              }
            }
          LABEL_84:
            v39 = 0;
            goto LABEL_85;
          }
        }
        else {
          v48 = v40;
          (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
          std___1___shared_weak_count___release_weak_alt2(v48);
          if (v43) {
            goto LABEL_77;
          }
        }
        if (((unsigned __int8)a4 & 1) == 0) {
          goto LABEL_84;
        }
        goto LABEL_82;
      }
      v33 = v31;
    LABEL_61:
      GameRoutine_156c5d0(v32, (__int64)v33, 0);
      goto LABEL_62;
    }
    if (a3 == 6 || a3 == 9) {
      v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (v11 & 0xFFF));
      v16 = *(unsigned __int8*)(v15 + 273);
      if ((unsigned int)*(unsigned __int8*)(v15 + 104) - 5 >= 2) {
        LODWORD(a4) = 0;
      }
      else {
        LODWORD(a4) = (v11 >> 19) & 0x1F;
      }
      if (((unsigned int)a4 | v16) != 0) {
        LayoutAccessor_1562cf0_alt3((__int64)a1, (unsigned int*)"NumCost");
        v17 = ui_LayoutAccessor_FindPane_alt2(a1, "T_Cost");
        if (v17 != 0) {
          v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d690, 0);
          if (v18 != 0) {
            GameRoutine_156c910_alt2(
                v18, "%d", 1,
                (v16 - ((v11 >> 12) & 0x7F) + (unsigned int)a4) &
                    ~((int)(v16 - ((v11 >> 12) & 0x7F) + (_DWORD)a4) >> 31));
          }
        }
        goto LABEL_62;
      }
      LayoutAccessor_1562cf0_alt3((__int64)a1, (unsigned int*)"NumCost");
      v35 = ui_LayoutAccessor_FindPane_alt2(a1, "T_Cost");
      if (v35 == 0) {
        goto LABEL_62;
      }
      v36 = __dynamic_cast(v35, GameData_212d670[0], GameData_212d690, 0);
      if (v36 == 0) {
        goto LABEL_62;
      }
      v37 = v36;
      v88_.v94 = -1;
      v88_.v95 = -1;
      v88_.v96 = -1;
      v88_.v97 = -1;
      v38 = *msg_MessageManager_instance__ptr[0];
      v88_.v98 = -1;
      v88_.v99 = -1;
      v88_.v100 = -1;
      v88_.v101 = -1;
      v88_.v102 = -1;
      v88_.v103 = -1;
      v88_.v104 = -1;
      v88_.v88 = GameData_212e348 + 2;
      v88_.v89 = (__int64*)0xFFFF0001FFFF0000LL;
      v88_.v90 = 0xFFFF0004FFFF0002LL;
      v88_.v91 = 0xFFFF0006FFFF0005LL;
      v88_.v105 = -1;
      v88_.v106 = 8;
      v88_.v92 = -65529;
      v88_.v93 = -65528;
      v33 = GameRoutine_a4dbe0_alt2(v38, "MID_Sys_unlimited", 0);
      v32 = v37;
      goto LABEL_61;
    }
  LABEL_56:
    LayoutAccessor_1562cf0_alt3((__int64)a1, (unsigned int*)"NumNone");
    if (a1[2] == 0) {
      goto LABEL_84;
    }
    goto LABEL_63;
  }
  if (a3 != 2) {
    if (a3 != 3) {
      goto LABEL_56;
    }
    v24 = GameRoutine_842cb0_alt1(a2, a4);
    LayoutAccessor_1562cf0_alt3((__int64)a1, (unsigned int*)"NumCost");
    v25 = ui_LayoutAccessor_FindPane_alt2(a1, "T_Cost");
    if (v25 != 0) {
      v26 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d690, 0);
      if (v26 != 0) {
        if ((v24 & 0x80000000) != 0) {
          GameHr_156c850(v26, "MID_Sys_unlimited");
        }
        else {
          GameRoutine_156c910_alt2(v26, "%d", 1, v24);
        }
      }
    }
    LODWORD(v88_.v91) = 0;
    v88_.v89 = nullptr;
    v88_.v90 = 0;
    v71 = *a2 & 0xFFF;
    v88_.v88 = nullptr;
    v72 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v71);
    v55 = *(unsigned __int16*)(v72 + 496);
    if (*(_WORD*)(v72 + 496) != 0) {
      v73 = 8;
      do {
        v78 = *(_QWORD*)(*(_QWORD*)(v72 + 504) + v73);
        if (((1LL << *(_BYTE*)(v78 + 250)) & 6) != 0) {
          v79 = *(unsigned __int16*)(v78 + 16);
          v80 = v79;
          v81 = (v79 >> 5) & 0x7F;
          v74 = v88_.v88;
          v82 = ((char*)v88_.v89 - (char*)v88_.v88) >> 2;
          if (v81 + 1 > v82) {
            v87 = 0;
            GameRoutine_66dd60_alt1((__int64*)&v88_.v88, v81 + 1 - v82, &v87);
            v74 = v88_.v88;
            v75 = 1 << v80;
            v76 = (unsigned int)v81;
            v77 = *((_DWORD*)v88_.v88 + (unsigned int)v81);
          }
          else {
            v77 = *((_DWORD*)v88_.v88 + (unsigned int)v81);
            v75 = 1 << v80;
            if ((v77 & (1 << v80)) != 0) {
              goto LABEL_120;
            }
            v76 = (unsigned int)v81;
          }
          *((_DWORD*)v74 + v76) = v77 | v75;
          LODWORD(v88_.v91) = v88_.v91 + 1;
        }
      LABEL_120:
        --v55;
        v73 += 16;
      } while (v55 != 0);
    }
    if (a1[2] == 0) {
      goto LABEL_139;
    }
    v66 = a1[1];
    if (v66 == 0) {
      goto LABEL_140;
    }
    v67 = std___1___shared_weak_count_lock_alt1(v66);
    if (v67 == 0) {
      goto LABEL_133;
    }
    v68 = *a1;
    if (*a1 == 0) {
      goto LABEL_129;
    }
    goto LABEL_112;
  }
  if (*((_WORD*)a4 + 976) != 0) {
    v34 = (__int64*)a4[244];
  }
  else {
    v34 = nullptr;
  }
  v88_.v88 = v34;
  v44 = GameRoutine_842e20_alt1(a2, a4, (unsigned __int16*)&v88_.v88);
  LayoutAccessor_1562cf0_alt3((__int64)a1, (unsigned int*)"NumCost");
  v45 = ui_LayoutAccessor_FindPane_alt2(a1, "T_Cost");
  if (v45 != 0) {
    v46 = __dynamic_cast(v45, GameData_212d670[0], GameData_212d690, 0);
    if (v46 != 0) {
      if ((v44 & 0x80000000) != 0) {
        GameHr_156c850(v46, "MID_Sys_unlimited");
      }
      else {
        GameRoutine_156c910_alt2(v46, "%d", 1, v44);
      }
    }
  }
  LODWORD(v88_.v91) = 0;
  v88_.v89 = nullptr;
  v88_.v90 = 0;
  v53 = *a2 & 0xFFF;
  v88_.v88 = nullptr;
  v54 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v53);
  v55 = *(unsigned __int16*)(v54 + 496);
  if (*(_WORD*)(v54 + 496) != 0) {
    v56 = 8;
    do {
      v60 = *(_QWORD*)(*(_QWORD*)(v54 + 504) + v56);
      if (((1LL << *(_BYTE*)(v60 + 250)) & 6) != 0) {
        v61 = *(unsigned __int16*)(v60 + 16);
        v62 = v61;
        v63 = (v61 >> 5) & 0x7F;
        v57 = v88_.v88;
        v64 = 1 << v62;
        v65 = ((char*)v88_.v89 - (char*)v88_.v88) >> 2;
        if (v63 + 1 > v65) {
          v87 = 0;
          GameRoutine_66dd60_alt1((__int64*)&v88_.v88, v63 + 1 - v65, &v87);
          v57 = v88_.v88;
          v58 = (unsigned int)v63;
          v59 = *((_DWORD*)v88_.v88 + (unsigned int)v63);
        }
        else {
          v59 = *((_DWORD*)v88_.v88 + (unsigned int)v63);
          if ((v59 & v64) != 0) {
            goto LABEL_103;
          }
          v58 = (unsigned int)v63;
        }
        *((_DWORD*)v57 + v58) = v59 | v64;
        LODWORD(v88_.v91) = v88_.v91 + 1;
      }
    LABEL_103:
      --v55;
      v56 += 16;
    } while (v55 != 0);
  }
  if (a1[2] == 0) {
    goto LABEL_139;
  }
  v66 = a1[1];
  if (v66 == 0) {
    goto LABEL_140;
  }
  v67 = std___1___shared_weak_count_lock_alt1(v66);
  if (v67 == 0) {
    goto LABEL_133;
  }
  v68 = *a1;
  if (*a1 == 0) {
  LABEL_129:
    v70 = true;
    goto LABEL_130;
  }
LABEL_112:
  LODWORD(v55) = *(unsigned __int8*)(v68 + 24);
  v69 = v68 + 152;
  if ((_DWORD)v55 == 0) {
    v69 = 0;
  }
  v70 = v69 != a1[2];
LABEL_130:
  if (atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v83 = v67;
    (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
    std___1___shared_weak_count___release_weak_alt2(v83);
  }
  if (!v70) {
    if ((v55 & 1) == 0) {
      goto LABEL_139;
    }
    goto LABEL_137;
  }
LABEL_133:
  v84 = a1[1];
  if (v84 != 0 && *(_QWORD*)(v84 + 8) != -1) {
  LABEL_137:
    v85 = a1[2];
    if (v85 != 0) {
      v66 = *(_QWORD*)(v85 + 24);
      goto LABEL_140;
    }
  }
LABEL_139:
  v66 = 0;
LABEL_140:
  Util_1579d20(v66, (__int64)&v88_.v88);
  if (v88_.v88 != nullptr) {
    v88_.v89 = v88_.v88;
    v86 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v86 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v86, (__int64)v88_.v88);
  }
}

__int64 Util_157ee20(__int64* a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char* v7;

  v4 = ui_LayoutAccessor_FindPane_alt1(a1, (__int64)"Icon");
  if (v4 == 0 || (v5 = __dynamic_cast(v4, GameData_212d670[0],
                                      GameData_212d678[0], 0)) == 0) {
    v6 = ui_LayoutAccessor_FindPane_alt1(a1, (__int64)"Img");
    if (v6 != 0) {
      v5 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0);
    }
    else {
      v5 = 0;
    }
  }
  if (a2 == 5) {
    if (v5 != 0) {
      v7 = "IconEmptyLegion";
      goto LABEL_14;
    }
  }
  else if (a2 == 2) {
    if (v5 != 0) {
      v7 = "IconEmptyCombatArts";
    LABEL_14:
      Manager_136a920(ui_Manager_instance_ + 1264, v5, 0, 7u, v7);
    }
  }
  else if (v5 != 0) {
    v7 = "IconEmpty";
    goto LABEL_14;
  }
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, (__int64)"IconDamage", 0);
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, (__int64)"IconLock", 0);
  return ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, (__int64)"IconDrop",
                                               0);
}

__int64 game_gameui_Util_SetSkillInfo(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  int v6;
  char v7;
  char v8;
  const char** v9;
  int i;
  char* v11;
  __int64* v12;
  const char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v22;
  __int64* v23;
  __int64 (**v24)();
  __int64 (***v25)();
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  struct {
    __int64 (**v35)();
    __int64* v36;
    const char** v37;
    __int64* v38;
    __int64* v39;
  } v35_;
  struct {
    __int64* v40;
    __int64* v41;
  } v40_;
  struct {
    _BYTE v42[8];
    const char* v43;
    _DWORD v44[2];
    char v45;
    char gap105_[7];
    const char* v46;
    int v47;
    char gap124_[4];
    char v48;
    char gap129_[7];
    const char* v49;
    int v50;
    char gap148_[4];
    char v51;
    char gap153_[7];
    const char* v52;
    int v53;
  } v42_;
  __int64 v54;
  struct {
    __int64 v55;
    __int64 v56;
  } v55_;
  struct {
    __int64 v57;
    __int64 v58;
  } v57_;

  v54 = a2;
  if (a2 != 0) {
    v4 = 0;
    v42_.v42[0] = 10;
    v42_.v45 = 11;
    v42_.v44[0] = 1;
    v42_.v47 = 3;
    v42_.v50 = 1;
    v42_.v51 = 1;
    v42_.v43 = "Person";
    v42_.v46 = "Job";
    v42_.v48 = 12;
    v42_.v49 = "Ride";
    v5 = GameData_212dfc8;
    v42_.v52 = "Equip";
    v42_.v53 = 5;
    v33 = (__int64*)result;
    v40_.v40 = (__int64*)result;
    v40_.v41 = &v54;
    while (1) {
      v34 = v4;
      v9 = (const char**)&v42_.v42[v4];
      if (*(int*)((char*)v42_.v44 + v4) >= 1) {
        for (i = 0; i < (signed __int32)*((_DWORD*)v9 + 4); ++i) {
          v11 = game_util_Format_alt3("L_%s%02d", v9[1], i);
          v12 = v40_.v40;
          v13 = v11;
          v14 = v40_.v40[1];
          if (v14 == 0 ||
              (v15 = std___1___shared_weak_count_lock_alt1(v14)) == 0) {
          LABEL_11:
            v2 = nullptr;
            v3 = 0;
            continue;
          }
          v16 = *v12;
          v17 = v15;
          if (*v12 == 0 ||
              (v18 = ui_LayoutAccessor_GetPartsLayout(v12, v13)) == 0) {
            v26 = 1;
            goto LABEL_43;
          }
          v19 = *(_QWORD*)(v18 + 24);
          if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)GameData_212dfd0) != 0) {
            *v5 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
            __cxa_guard_release_alt1((__int64)GameData_212dfd0);
          }
          if (v19 == 0) {
            goto LABEL_26;
          }
          v20 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          if (v20 != v5) {
            do {
              v20 = (__int64*)*v20;
            } while (v20 != v5 && v20 != nullptr);
            if (v20 == nullptr) {
            LABEL_26:
              v19 = 0;
            }
          }
          Layout_1363f00((void*)(&v55_.v55), v16, v19);
          v57_.v57 = 0;
          v57_.v58 = 0;
          if (v55_.v56 != 0 &&
              (v22 = std___1___shared_weak_count_lock_alt1(v55_.v56),
               v57_.v58 = v22, v22 != 0) &&
              (v57_.v57 = v55_.v55, v55_.v55 != 0) &&
              (v23 = (__int64*)v22, (v24 = (__int64 (**)(void))__dynamic_cast(
                                         v55_.v55, GameData_212dfc0[0],
                                         GameData_2131970[0], 0)) != nullptr)) {
            v25 = (__int64 (***)(void))&v57_.v57;
            v35_.v35 = v24;
            v35_.v36 = v23;
          }
          else {
            v25 = &v35_.v35;
          }
          *v25 = nullptr;
          v25[1] = nullptr;
          v2 = (__int64*)v35_.v35;
          v3 = (__int64)v35_.v36;
          if (v35_.v36 != nullptr &&
              (atomic_fetch_add_explicit(
                   (atomic_ullong* volatile)(v35_.v36 + 2), 1u,
                   memory_order_relaxed),
               atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0)) {
            (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
            std___1___shared_weak_count___release_weak_alt2(v3);
            v27 = v57_.v58;
            if (v57_.v58 != 0) {
            LABEL_37:
              if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
                std___1___shared_weak_count___release_weak_alt2(v27);
              }
            }
          }
          else {
            v27 = v57_.v58;
            if (v57_.v58 != 0) {
              goto LABEL_37;
            }
          }
          if (v55_.v56 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v55_.v56);
          }
          v26 = 0;
        LABEL_43:
          if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if ((v26 & 1) != 0) {
              goto LABEL_11;
            }
          }
          else {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            std___1___shared_weak_count___release_weak_alt2(v17);
            if ((v26 & 1) != 0) {
              goto LABEL_11;
            }
          }
          if (v3 != 0) {
            v28 = std___1___shared_weak_count_lock_alt1(v3);
            std___1___shared_weak_count___release_weak_alt2(v3);
            if (v28 != 0 && v2 != nullptr) {
              GameHr_18b3670(v2, GameData_212c8a8, *v40_.v41, 1);
            LABEL_52:
              if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
                std___1___shared_weak_count___release_weak_alt2(v28);
              }
              continue;
            }
            if (v28 != 0) {
              goto LABEL_52;
            }
          }
        }
      }
      v29 = *(unsigned __int8*)v9;
      LODWORD(v57_.v57) = 0;
      if ((_DWORD)v29 == 12) {
        v30 = v54;
        LODWORD(v55_.v55) = 0;
        if (v54 == 0 || *(_BYTE*)(v54 + 1880) == 0) {
          LOWORD(v6) = 0;
          v7 = 0;
        }
        else {
          v35_.v35 = *(__int64 (***)(void))(v54 + 392);
          v35_.v36 = (__int64*)v54;
          v6 = *(_DWORD*)GameRoutine_932360((unsigned __int8*)(v54 + 1880),
                                            (__int64*)&v35_.v35);
          LODWORD(v55_.v55) = v6;
          if ((v6 & 0xFFF) != 0) {
            v7 = 1;
          }
          else {
            v35_.v35 = *(__int64 (***)(void))(v30 + 392);
            v35_.v36 = (__int64*)v30;
            v6 = *GameRoutine_932460_alt1((unsigned __int8*)(v30 + 1880),
                                          (__int64*)&v35_.v35);
            v7 = 0;
            LODWORD(v55_.v55) = v6;
          }
        }
        if ((v6 & 0xFFF) != 0) {
          v8 = v7;
        }
        else {
          v8 = 1;
        }
        Util_157f3e0_alt1((__int64*)&v40_.v40, v57_.v57, v9[1],
                          (__int64)&v55_.v55, v8);
        goto LABEL_8;
      }
      v35_.v35 = GameData_204d708;
      v35_.v36 = &v57_.v57;
      v35_.v39 = (__int64*)&v35_.v35;
      v35_.v37 = v9;
      v35_.v38 = (__int64*)&v40_.v40;
      GameRoutine_6d7e80(v54, v29, (__int64)&v35_.v35);
      if (v35_.v39 == (__int64*)&v35_.v35) {
        break;
      }
      if (v35_.v39 != nullptr) {
        v32 = 40;
      LABEL_67:
        (*(void (**)(__int64*))(*v35_.v39 + v32))(v35_.v39);
      }
    LABEL_8:
      v4 = v34 + 24;
      if (v34 == 72) {
        result = ui_LayoutAccessor_FindAlignment_alt2(v33, "A_Skill");
        if (result != 0) {
          return Alignment_56b600_alt1(result);
        }
        return result;
      }
    }
    v32 = 32;
    goto LABEL_67;
  }
  return result;
}

__int64 Util_157f3e0(__int64 a1, int a2, const char* a3, unsigned int* a4,
                     char a5)
{
  char* v8;
  __int64* v9;
  __int64 result;
  __int64 v11;
  __int64* v12;
  _QWORD v13[2];
  struct {
    __int64* v14;
    __int64 v15;
  } v14_;

  v8 = game_util_Format_alt3("L_%s%02d", a3, a2);
  v9 = *(__int64**)a1;
  v13[0] = v8;
  v13[1] = strlen_alt1(v8);
  GameRoutine_15883c0_alt2((void*)(&v14_.v14), v9, v13);
  result = v14_.v15;
  if (v14_.v15 != 0) {
    v11 = std___1___shared_weak_count_lock_alt1(v14_.v15);
    v12 = v14_.v14;
    result = v14_.v15;
    if (v14_.v15 != 0) {
      result = std___1___shared_weak_count___release_weak_alt2(v14_.v15);
    }
    if (v11 != 0 && v12 != nullptr) {
      result = GameHr_18b3670_alt1(v12, a4, **(_QWORD***)(a1 + 8), a5 & 1);
    }
    else if (v11 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      return std___1___shared_weak_count___release_weak_alt2(v11);
    }
  }
  return result;
}

void Util_157f4e0(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  int v4;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _BOOL4 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64* v25;
  __int64* v26;
  __int64* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  bool v30;
  __int64 v32;
  signed __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  unsigned int v56;
  __int64 v57;
  int v58;
  int v59;
  __int64 v60;
  __int64 v61;
  _BYTE* v62;
  __int64 v63;
  int v64;
  int v65;
  unsigned __int8* v66;
  int v67;
  int v68;
  __int64 v69;
  _BOOL4 v70;
  char v71;
  __int64 v72;
  int v73;
  int v74;
  unsigned __int8* v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  unsigned int v88;
  int v89;
  int v90;
  unsigned int v91;
  int v92;
  float v93;
  const char* v94;
  const char* v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  unsigned int v104;
  unsigned int v105;
  char v106;
  float v107;
  float v108;
  float v109;
  __int64 v110;
  float v111;
  float v112;
  unsigned int v113;
  float v114;
  __int64 v115;
  int v116;
  unsigned __int64 v117;
  unsigned __int8* v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  char* v124;
  float v125;
  __int64 v126;
  char* v127;
  char v128;
  __int64 v129;
  char* v130;
  char v131;
  __int64 v132;
  char* v133;
  char v134;
  __int64 v135;
  char* v136;
  char v137;
  __int64 v138;
  char* v139;
  char v140;
  __int64 v141;
  char* v142;
  char v143;
  __int64 v144;
  char* v145;
  char v146;
  __int64 v147;
  char* v148;
  char v149;
  __int64 v150;
  char v151;
  __int64 v152;
  __int64* v153;
  float v154;
  __int64 v155;
  int v156;
  float v157;
  __int64 v158;
  float v159;
  __int64 v160;
  float v161;
  struct {
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
    char v172;
  } v162_;

  if (a1[2] == 0) {
    return;
  }
  v6 = a1[1];
  if (v6 == 0) {
    return;
  }
  v8 = std___1___shared_weak_count_lock_alt1(v6);
  if (v8 == 0) {
    goto LABEL_11;
  }
  v9 = *a1;
  if (*a1 != 0) {
    v4 = *(unsigned __int8*)(v9 + 24);
    v10 = v9 + 152;
    if (v4 == 0) {
      v10 = 0;
    }
    v11 = v10 != a1[2];
  }
  else {
    v11 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v3 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt2(v3);
    if (v11) {
      goto LABEL_11;
    }
  LABEL_15:
    if ((v4 & 1) == 0) {
      return;
    }
    goto LABEL_16;
  }
  if (!v11) {
    goto LABEL_15;
  }
LABEL_11:
  v12 = a1[1];
  if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
    return;
  }
LABEL_16:
  v13 = ui_LayoutAccessor_FindPane_alt1(a1, (__int64)"RangeDataUnit");
  if (v13 != 0) {
    v13 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0], 0);
  }
  v158 = v13;
  v14 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 648, 16, 0);
  v15 = (_QWORD*)a1[2];
  v16 = v14;
  v155 = a3;
  if (v15 == nullptr) {
    goto LABEL_35;
  }
  v17 = a1[1];
  if (v17 == 0) {
  LABEL_34:
    v15 = nullptr;
    goto LABEL_35;
  }
  v18 = std___1___shared_weak_count_lock_alt1(v17);
  if (v18 != 0) {
    v19 = *a1;
    if (*a1 != 0) {
      LODWORD(v3) = *(unsigned __int8*)(v19 + 24);
      v20 = v19 + 152;
      if ((_DWORD)v3 == 0) {
        v20 = 0;
      }
      v21 = v20 != a1[2];
    }
    else {
      v21 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v22 = v18;
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak_alt2(v22);
    }
    if (!v21) {
      if ((v3 & 1) != 0) {
      LABEL_31:
        v15 = (_QWORD*)a1[2];
        if (v15 != nullptr) {
          v15 = (_QWORD*)v15[3];
        }
        goto LABEL_35;
      }
      goto LABEL_34;
    }
  }
  v15 = (_QWORD*)a1[1];
  if (v15 != nullptr) {
    if (v15[1] != -1) {
      goto LABEL_31;
    }
    goto LABEL_34;
  }
LABEL_35:
  v23 = v15[5];
  v24 = v15 + 4;
  if ((_QWORD*)v23 == v15 + 4) {
    goto LABEL_326;
  }
  v153 = a1;
  v25 = (__int64*)v16;
  v26 = GameData_212d670[0];
  v27 = GameData_212d678[0];
  v28 = v16 + 648;
  v160 = v16;
  do {
    v29 = strlen_alt1((const char*)(v23 + 168));
    if (v29 == 13) {
      v30 = *(_QWORD*)(v23 + 168) == 0x74614465676E6152LL &&
            *(_QWORD*)(v23 + 173) == 0x74696E5561746144LL;
      if (v30) {
        goto LABEL_38;
      }
    }
    else if (v29 < 9) {
      goto LABEL_38;
    }
    if (*(_QWORD*)(v23 + 168) == 0x74614465676E6152LL &&
        *(_BYTE*)(v23 + 176) == 97) {
      v32 = __dynamic_cast(v23 - 8, v26, v27, 0);
      if (v32 != 0) {
        if ((unsigned __int64)v25 < v28) {
          *v25++ = v32;
        }
        else {
          v33 = (signed __int64)v25 - v160;
          v34 = (v33 >> 3) + 1;
          if (v34 >> 61 != 0) {
            GameRoutine_15a0040();
          }
          if ((__int64)(v28 - v160) >> 2 > v34) {
            v34 = (__int64)(v28 - v160) >> 2;
          }
          if (v28 - v160 >= 0x7FFFFFFFFFFFFFF8LL) {
            v35 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v35 = v34;
          }
          if (v35 != 0) {
            if (v35 >> 61 != 0) {
              GameRoutine_60a210_alt1();
            }
            v36 = v32;
            v37 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v35, 16, 0);
            v32 = v36;
          }
          else {
            v37 = 0;
          }
          v28 = v37 + 8 * v35;
          v38 = v37 + v33 - 8 * (v33 >> 3);
          *(_QWORD*)(v37 + v33) = v32;
          v39 = v37 + v33 + 8;
          memcpy_alt1(v38, v160, v33);
          if (v160 != 0) {
            v40 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v40 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v160);
          }
          v160 = v38;
          v25 = (__int64*)v39;
          v26 = GameData_212d670[0];
        }
      }
    }
  LABEL_38:
    v23 = *(_QWORD*)(v23 + 8);
  } while ((_QWORD*)v23 != v24);
  v41 = v158;
  v16 = v160;
  if ((__int64*)v160 != v25) {
    v42 = (__int64*)v160;
    if (v158 != 0) {
      *(_BYTE*)(v158 + 88) &= ~1u;
      v42 = (__int64*)v160;
    }
    do {
      v43 = *v42++;
      *(_BYTE*)(v43 + 88) &= ~1u;
    } while (v42 != v25);
    if (v155 != 0) {
      v44 = *(unsigned __int8*)(v155 + 250);
      v45 = *(_QWORD*)(v155 + 624);
      v162_.v172 = 0;
      v162_.v170 = 0;
      v162_.v171 = 0;
      v162_.v168 = 0;
      v162_.v169 = 0;
      v162_.v166 = 0;
      v162_.v167 = 0;
      v162_.v164 = 0;
      v162_.v165 = 0;
      v162_.v162 = 0;
      v162_.v163 = 0;
      if (v45 != 0) {
        v46 = *(__int64**)(v45 + 40);
        v156 = v44;
        v47 = *v46;
        v48 = v46[1] - *v46;
        if ((int)(v48 >> 3) >= 1) {
          v49 = v25;
          v50 = (__int64)v48 >> 3;
          v51 = 0;
          v52 = 0;
          if ((unsigned int)(v48 >> 3) - 1 >= 8) {
            v53 = 8;
          }
          else {
            v53 = (v48 >> 3) - 1;
          }
          v54 = (unsigned int)(v53 + 1);
          while (1) {
            if (v51 == v50) {
              GameRoutine_803010();
            }
            v55 = *(_QWORD*)(v47 + 8 * v51);
            v56 = *(unsigned __int16*)(v55 + 32);
            if (*(_WORD*)(v55 + 32) != 0) {
              v57 = *(_QWORD*)(v55 + 40);
              v58 = v56 - 1;
              if (v56 - 1 >= 8) {
                v58 = 8;
              }
              v59 = v58 + 1;
              memcpy_alt1((__int64)&v162_.v162 + 9 * v51, v57,
                          (unsigned int)(v58 + 1));
              if (v56 >= 8) {
                break;
              }
              v60 = 0;
              v61 = v59 & 7;
              if ((v59 & 7) != 0) {
                goto LABEL_109;
              }
            }
          LABEL_80:
            if (++v51 == v54) {
              v68 = v156;
              v41 = v158;
              v69 = (__int64)v153;
              v25 = v49;
              v70 = v52 < 5;
              v71 = (unsigned int)(v52 - 2) < 3;
              if (v52 == 0) {
                goto LABEL_117;
              }
              goto LABEL_186;
            }
          }
          v62 = (_BYTE*)(v57 + 3);
          v63 = 0;
          do {
            v63 -= 8;
            if (*(v62 - 3) == 1) {
              v64 = v52 + 1;
            }
            else {
              v64 = v52;
            }
            if (*(v62 - 2) == 1) {
              ++v64;
            }
            if (*(v62 - 1) == 1) {
              ++v64;
            }
            if (*v62 == 1) {
              ++v64;
            }
            if (v62[1] == 1) {
              ++v64;
            }
            if (v62[2] == 1) {
              ++v64;
            }
            v30 = v62[3] == 1;
            v65 = (unsigned __int8)v62[4];
            v62 += 8;
            if (v30) {
              ++v64;
            }
            if (v65 == 1) {
              v52 = v64 + 1;
            }
            else {
              v52 = v64;
            }
          } while (-(__int64)(v59 & 0xFFFFFFF8) != v63);
          v60 = -v63;
          v61 = v59 & 7;
          if ((v59 & 7) == 0) {
            goto LABEL_80;
          }
        LABEL_109:
          v66 = (unsigned __int8*)(v57 + v60);
          do {
            v67 = *v66++;
            if (v67 == 1) {
              ++v52;
            }
            --v61;
          } while (v61 != 0);
          goto LABEL_80;
        }
        v68 = v44;
        v69 = (__int64)v153;
        v71 = 0;
        v70 = true;
      LABEL_117:
        v72 = 9;
        v73 = 0;
        v74 = 9;
        v75 = (unsigned __int8*)&v162_.v162 + 4;
        do {
          if (*(v75 - 4) > 1u) {
            v73 &= ~(v73 >> 31);
            v74 = 0;
          }
          if (v73 <= 1) {
            v76 = 1;
          }
          else {
            v76 = v73;
          }
          if (v74 >= 1) {
            v77 = 1;
          }
          else {
            v77 = v74;
          }
          if (*(v75 - 3) > 1u) {
            v73 = v76;
            v74 = v77;
          }
          if (v73 <= 2) {
            v78 = 2;
          }
          else {
            v78 = v73;
          }
          if (v74 >= 2) {
            v79 = 2;
          }
          else {
            v79 = v74;
          }
          if (*(v75 - 2) > 1u) {
            v73 = v78;
            v74 = v79;
          }
          if (v73 <= 3) {
            v80 = 3;
          }
          else {
            v80 = v73;
          }
          if (v74 >= 3) {
            v81 = 3;
          }
          else {
            v81 = v74;
          }
          if (*(v75 - 1) > 1u) {
            v73 = v80;
            v74 = v81;
          }
          if (v73 <= 4) {
            v82 = 4;
          }
          else {
            v82 = v73;
          }
          if (v74 >= 4) {
            v83 = 4;
          }
          else {
            v83 = v74;
          }
          if (*v75 > 1u) {
            v73 = v82;
            v74 = v83;
          }
          if (v73 <= 5) {
            v84 = 5;
          }
          else {
            v84 = v73;
          }
          if (v74 >= 5) {
            v85 = 5;
          }
          else {
            v85 = v74;
          }
          if (v75[1] > 1u) {
            v73 = v84;
            v74 = v85;
          }
          if (v73 <= 6) {
            v86 = 6;
          }
          else {
            v86 = v73;
          }
          if (v74 >= 6) {
            v87 = 6;
          }
          else {
            v87 = v74;
          }
          v88 = v75[3];
          if (v75[2] > 1u) {
            v73 = v86;
            v74 = v87;
          }
          if (v73 <= 7) {
            v89 = 7;
          }
          else {
            v89 = v73;
          }
          if (v74 >= 7) {
            v90 = 7;
          }
          else {
            v90 = v74;
          }
          if (v88 > 1) {
            v74 = v90;
          }
          v91 = v75[4];
          if (v88 > 1) {
            v73 = v89;
          }
          v75 += 9;
          if (v74 >= 8) {
            v92 = 8;
          }
          else {
            v92 = v74;
          }
          if (v91 > 1) {
            v73 = 8;
            v74 = v92;
          }
          --v72;
        } while (v72 != 0);
        if (v73 > v74) {
          v71 |= (_BYTE)v73 - (_BYTE)v74;
        }
      LABEL_186:
        v16 = v160;
        v93 = *(float*)(*(_QWORD*)v160 + 80LL);
        v94 = "Unit3x3";
        if (v70) {
          v94 = "Unit1x1";
        }
        if ((v71 & 1) != 0) {
          v95 = "Unit2x2";
        }
        else {
          v95 = v94;
        }
        v96 = v93 + 0x1.0000000000000p+2f;
        v97 = *(float*)(*(_QWORD*)v160 + 84LL) + 0x1.0000000000000p+2f;
        v98 = (float)(v93 + 0x1.0000000000000p+2f) * 0x1.0000000000000p-1f;
        v99 = v97 * 0x1.0000000000000p-1f;
        v100 = (float)((float)(v93 + 0x1.0000000000000p+2f) *
                       -0x1.2000000000000p+3f) *
               0x1.0000000000000p-1f;
        v101 = v98 + v100;
        if ((v71 & 1) != 0) {
          v102 = (float)((float)(v93 + 0x1.0000000000000p+2f) *
                         -0x1.2000000000000p+3f) *
                 0x1.0000000000000p-1f;
        }
        else {
          v102 = (float)(PSEUDO_UNFUSED((float)(v93 + 0x1.0000000000000p+2f) *
                                        0x1.0000000000000p-1f)) +
                 v100;
        }
        v103 = (float)(PSEUDO_UNFUSED((float)(v97 * 0x1.2000000000000p+3f) *
                                      0x1.0000000000000p-1f)) -
               v99;
        LayoutAccessor_1562cf0_alt2(v69, v95);
        if (v41 != 0) {
          if ((unsigned __int8)v162_.v162 == 1) {
            v104 = 0;
            v105 = 0;
            goto LABEL_235;
          }
          v105 = BYTE1(v162_.v162);
          if (BYTE1(v162_.v162) == 1) {
            v104 = 0;
            goto LABEL_235;
          }
          if (BYTE2(v162_.v162) == 1) {
            v104 = 0;
            v105 = 2;
            goto LABEL_235;
          }
          if (BYTE3(v162_.v162) == 1) {
            v104 = 0;
            v105 = 3;
            goto LABEL_235;
          }
          if (BYTE4(v162_.v162) == 1) {
            v104 = 0;
            v105 = 4;
            goto LABEL_235;
          }
          if (BYTE5(v162_.v162) == 1) {
            v104 = 0;
            v105 = 5;
            goto LABEL_235;
          }
          if (BYTE6(v162_.v162) == 1) {
            v104 = 0;
            v105 = 6;
            goto LABEL_235;
          }
          if (HIBYTE(v162_.v162) == 1) {
            v104 = 0;
            v105 = 7;
            goto LABEL_235;
          }
          if ((unsigned __int8)v162_.v163 == 1) {
            v104 = 0;
            v105 = 8;
            goto LABEL_234;
          }
          if (BYTE1(v162_.v163) == 1) {
            v105 = 0;
            goto LABEL_233;
          }
          v105 = BYTE2(v162_.v163);
          if (BYTE2(v162_.v163) == 1) {
          LABEL_233:
            v104 = 1;
            goto LABEL_234;
          }
          if (BYTE3(v162_.v163) == 1) {
            v105 = 2;
            goto LABEL_233;
          }
          if (BYTE4(v162_.v163) == 1) {
            v105 = 3;
            goto LABEL_233;
          }
          if (BYTE5(v162_.v163) == 1) {
            v105 = 4;
            goto LABEL_233;
          }
          if (BYTE6(v162_.v163) == 1) {
            v105 = 5;
            goto LABEL_233;
          }
          if (HIBYTE(v162_.v163) == 1) {
            v105 = 6;
            goto LABEL_233;
          }
          if ((unsigned __int8)v162_.v164 == 1) {
            v105 = 7;
            goto LABEL_233;
          }
          if (BYTE1(v162_.v164) == 1) {
            v105 = 8;
            goto LABEL_233;
          }
          if (BYTE2(v162_.v164) == 1) {
            v105 = 0;
            v104 = 2;
            goto LABEL_234;
          }
          v105 = BYTE3(v162_.v164);
          if (BYTE3(v162_.v164) == 1) {
            v104 = 2;
            goto LABEL_234;
          }
          if (BYTE4(v162_.v164) == 1) {
            v104 = 2;
            v105 = 2;
            goto LABEL_234;
          }
          if (BYTE5(v162_.v164) == 1) {
            v105 = 3;
            v104 = 2;
            goto LABEL_234;
          }
          if (BYTE6(v162_.v164) == 1) {
            v105 = 4;
            v104 = 2;
            goto LABEL_234;
          }
          if (HIBYTE(v162_.v164) == 1) {
            v105 = 5;
            v104 = 2;
            goto LABEL_234;
          }
          if ((unsigned __int8)v162_.v165 == 1) {
            v105 = 6;
            v104 = 2;
            goto LABEL_234;
          }
          if (BYTE1(v162_.v165) == 1) {
            v105 = 7;
            v104 = 2;
            goto LABEL_234;
          }
          if (BYTE2(v162_.v165) == 1) {
            v105 = 8;
            v104 = 2;
            goto LABEL_234;
          }
          if (BYTE3(v162_.v165) == 1) {
            v105 = 0;
            v104 = 3;
            goto LABEL_234;
          }
          v105 = BYTE4(v162_.v165);
          if (BYTE4(v162_.v165) == 1) {
            v104 = 3;
            goto LABEL_234;
          }
          if (BYTE5(v162_.v165) == 1) {
            v105 = 2;
            v104 = 3;
            goto LABEL_234;
          }
          if (BYTE6(v162_.v165) == 1) {
            v104 = 3;
            v105 = 3;
            goto LABEL_234;
          }
          if (HIBYTE(v162_.v165) == 1) {
            v105 = 4;
            v104 = 3;
            goto LABEL_234;
          }
          if ((unsigned __int8)v162_.v166 == 1) {
            v105 = 5;
            v104 = 3;
            goto LABEL_234;
          }
          if (BYTE1(v162_.v166) == 1) {
            v105 = 6;
            v104 = 3;
            goto LABEL_234;
          }
          if (BYTE2(v162_.v166) == 1) {
            v105 = 7;
            v104 = 3;
            goto LABEL_234;
          }
          if (BYTE3(v162_.v166) == 1) {
            v105 = 8;
            v104 = 3;
            goto LABEL_234;
          }
          if (BYTE4(v162_.v166) == 1) {
            v105 = 0;
            v104 = 4;
            goto LABEL_234;
          }
          v105 = BYTE5(v162_.v166);
          if (BYTE5(v162_.v166) == 1) {
            v104 = 4;
            goto LABEL_234;
          }
          if (BYTE6(v162_.v166) == 1) {
            v105 = 2;
            v104 = 4;
            goto LABEL_234;
          }
          if (HIBYTE(v162_.v166) == 1) {
            v105 = 3;
            v104 = 4;
            goto LABEL_234;
          }
          if ((unsigned __int8)v162_.v167 == 1) {
            v104 = 4;
            v105 = 4;
            goto LABEL_234;
          }
          if (BYTE1(v162_.v167) == 1) {
            v105 = 5;
            v104 = 4;
            goto LABEL_234;
          }
          if (BYTE2(v162_.v167) == 1) {
            v105 = 6;
            v104 = 4;
            goto LABEL_234;
          }
          if (BYTE3(v162_.v167) == 1) {
            v105 = 7;
            v104 = 4;
            goto LABEL_234;
          }
          if (BYTE4(v162_.v167) == 1) {
            v105 = 8;
            v104 = 4;
            goto LABEL_234;
          }
          if (BYTE5(v162_.v167) == 1) {
            v105 = 0;
            v104 = 5;
            goto LABEL_234;
          }
          v105 = BYTE6(v162_.v167);
          if (BYTE6(v162_.v167) == 1) {
            v104 = 5;
            goto LABEL_234;
          }
          if (HIBYTE(v162_.v167) == 1) {
            v105 = 2;
            v104 = 5;
            goto LABEL_234;
          }
          if ((unsigned __int8)v162_.v168 == 1) {
            v105 = 3;
            v104 = 5;
            goto LABEL_234;
          }
          if (BYTE1(v162_.v168) == 1) {
            v105 = 4;
            v104 = 5;
            goto LABEL_234;
          }
          if (BYTE2(v162_.v168) == 1) {
            v104 = 5;
            v105 = 5;
            goto LABEL_234;
          }
          if (BYTE3(v162_.v168) == 1) {
            v105 = 6;
            v104 = 5;
            goto LABEL_234;
          }
          if (BYTE4(v162_.v168) == 1) {
            v105 = 7;
            v104 = 5;
            goto LABEL_234;
          }
          if (BYTE5(v162_.v168) == 1) {
            v105 = 8;
            v104 = 5;
            goto LABEL_234;
          }
          if (BYTE6(v162_.v168) == 1) {
            v105 = 0;
            v104 = 6;
            goto LABEL_234;
          }
          v105 = HIBYTE(v162_.v168);
          if (HIBYTE(v162_.v168) == 1) {
            v104 = 6;
            goto LABEL_234;
          }
          if ((unsigned __int8)v162_.v169 == 1) {
            v105 = 2;
            v104 = 6;
            goto LABEL_234;
          }
          if (BYTE1(v162_.v169) == 1) {
            v105 = 3;
            v104 = 6;
            goto LABEL_234;
          }
          if (BYTE2(v162_.v169) == 1) {
            v105 = 4;
            v104 = 6;
            goto LABEL_234;
          }
          if (BYTE3(v162_.v169) == 1) {
            v105 = 5;
            v104 = 6;
            goto LABEL_234;
          }
          if (BYTE4(v162_.v169) == 1) {
            v104 = 6;
            v105 = 6;
            goto LABEL_234;
          }
          if (BYTE5(v162_.v169) == 1) {
            v105 = 7;
            v104 = 6;
            goto LABEL_234;
          }
          if (BYTE6(v162_.v169) == 1) {
            v105 = 8;
            v104 = 6;
            goto LABEL_234;
          }
          if (HIBYTE(v162_.v169) == 1) {
            v105 = 0;
            v104 = 7;
            goto LABEL_234;
          }
          v105 = (unsigned __int8)v162_.v170;
          if ((unsigned __int8)v162_.v170 == 1) {
            v104 = 7;
            goto LABEL_234;
          }
          if (BYTE1(v162_.v170) == 1) {
            v105 = 2;
            v104 = 7;
            goto LABEL_234;
          }
          if (BYTE2(v162_.v170) == 1) {
            v105 = 3;
            v104 = 7;
            goto LABEL_234;
          }
          if (BYTE3(v162_.v170) == 1) {
            v105 = 4;
            v104 = 7;
            goto LABEL_234;
          }
          if (BYTE4(v162_.v170) == 1) {
            v105 = 5;
            v104 = 7;
            goto LABEL_234;
          }
          if (BYTE5(v162_.v170) == 1) {
            v105 = 6;
            v104 = 7;
            goto LABEL_234;
          }
          if (BYTE6(v162_.v170) == 1) {
            v104 = 7;
            v105 = 7;
            goto LABEL_234;
          }
          if (HIBYTE(v162_.v170) == 1) {
            v105 = 8;
            v104 = 7;
            goto LABEL_234;
          }
          if ((unsigned __int8)v162_.v171 == 1) {
            v105 = 0;
            v104 = 8;
            goto LABEL_234;
          }
          v105 = BYTE1(v162_.v171);
          if (BYTE1(v162_.v171) == 1) {
            v104 = 8;
            goto LABEL_234;
          }
          if (BYTE2(v162_.v171) == 1) {
            v105 = 2;
            v104 = 8;
            goto LABEL_234;
          }
          if (BYTE3(v162_.v171) == 1) {
            v105 = 3;
            v104 = 8;
            goto LABEL_234;
          }
          if (BYTE4(v162_.v171) == 1) {
            v105 = 4;
            v104 = 8;
            goto LABEL_234;
          }
          if (BYTE5(v162_.v171) == 1) {
            v105 = 5;
            v104 = 8;
            goto LABEL_234;
          }
          if (BYTE6(v162_.v171) == 1) {
            v105 = 6;
            v104 = 8;
            goto LABEL_234;
          }
          if (HIBYTE(v162_.v171) == 1) {
            v105 = 7;
            v104 = 8;
          LABEL_234:
            v41 = v158;
            v16 = v160;
            v68 = v156;
          LABEL_235:
            v106 = *(_BYTE*)(v41 + 88);
            *(_DWORD*)(v41 + 56) = 0;
            v107 = v101 + (float)((float)v105 * v96);
            *(_BYTE*)(v41 + 88) = v106 | 0x11;
            v108 = v98 + (float)(v100 + (float)((float)v105 * v96));
            if (v70) {
              v109 = v103 - (float)((float)v104 * v97);
            }
            else {
              v107 = v101 + (float)((float)(v105 + 1) * v96);
              v109 = v103 - (float)((float)(v104 + 1) * v97);
            }
            v110 = ui_Manager_instance_ + 1264;
            if ((v71 & 1) != 0) {
              v111 = (float)(v103 - (float)((float)v104 * v97)) - v99;
            }
            else {
              v108 = v107;
              v111 = v109;
            }
            *(float*)(v41 + 48) = v108;
            *(float*)(v41 + 52) = v111;
            Manager_136a920(v110, v41, 0, 7u, "IconWorkRange_Unit");
          }
          else {
            v41 = v158;
            v16 = v160;
            v68 = v156;
            if (v162_.v172 == 1) {
              v104 = 8;
              v105 = 8;
              goto LABEL_235;
            }
          }
        }
        v112 = v102;
        v113 = v68 - 9;
        v114 = v96;
        v115 = 0;
        v116 = 0;
        v117 = ((__int64)v25 - v16) >> 3;
        v118 = (unsigned __int8*)&v162_.v162 + 4;
        v161 = v102 + (float)(v96 * 0x0.0p+0f);
        v159 = v96 + v102;
        v157 = v102 + (float)(v96 * 0x1.0000000000000p+1f);
        v154 = v102 + (float)(v96 * 0x1.8000000000000p+1f);
        v119 = v102 + (float)(v96 * 0x1.0000000000000p+2f);
        v120 = v112 + (float)(v96 * 0x1.4000000000000p+2f);
        v121 = v112 + (float)(v114 * 0x1.8000000000000p+2f);
        v122 = v112 + (float)(v114 * 0x1.c000000000000p+2f);
        v123 = v112 + (float)(v114 * 0x1.0000000000000p+3f);
        do {
          v125 = v103 - (float)((float)(unsigned int)v115 * v97);
          if (*(v118 - 4) >= 2u) {
            if (v117 > v116) {
              v126 = *(_QWORD*)(v16 + 8LL * v116);
              v127 = "IconWorkRange_RangeHeal";
              v128 = *(_BYTE*)(v126 + 88);
              *(_DWORD*)(v126 + 56) = 0;
              *(float*)(v126 + 48) = v161;
              *(float*)(v126 + 52) = v125;
              *(_BYTE*)(v126 + 88) = v128 | 0x11;
              if (v113 >= 2 && v68 != 31) {
                if (v68 == 42) {
                  v127 = "IconWorkRange_RangeInterference";
                }
                else {
                  v127 = "IconWorkRange_RangeAttack";
                }
              }
              Manager_136a920(ui_Manager_instance_ + 1264, v126, 0, 7u, v127);
            }
            ++v116;
          }
          if (*(v118 - 3) >= 2u) {
            if (v117 > v116) {
              v129 = *(_QWORD*)(v16 + 8LL * v116);
              v130 = "IconWorkRange_RangeHeal";
              v131 = *(_BYTE*)(v129 + 88);
              *(_DWORD*)(v129 + 56) = 0;
              *(float*)(v129 + 48) = v159;
              *(float*)(v129 + 52) = v125;
              *(_BYTE*)(v129 + 88) = v131 | 0x11;
              if (v113 >= 2 && v68 != 31) {
                if (v68 == 42) {
                  v130 = "IconWorkRange_RangeInterference";
                }
                else {
                  v130 = "IconWorkRange_RangeAttack";
                }
              }
              Manager_136a920(ui_Manager_instance_ + 1264, v129, 0, 7u, v130);
            }
            ++v116;
          }
          if (*(v118 - 2) >= 2u) {
            if (v117 > v116) {
              v132 = *(_QWORD*)(v16 + 8LL * v116);
              v133 = "IconWorkRange_RangeHeal";
              v134 = *(_BYTE*)(v132 + 88);
              *(_DWORD*)(v132 + 56) = 0;
              *(float*)(v132 + 48) = v157;
              *(float*)(v132 + 52) = v125;
              *(_BYTE*)(v132 + 88) = v134 | 0x11;
              if (v113 >= 2 && v68 != 31) {
                if (v68 == 42) {
                  v133 = "IconWorkRange_RangeInterference";
                }
                else {
                  v133 = "IconWorkRange_RangeAttack";
                }
              }
              Manager_136a920(ui_Manager_instance_ + 1264, v132, 0, 7u, v133);
            }
            ++v116;
          }
          if (*(v118 - 1) >= 2u) {
            if (v117 > v116) {
              v135 = *(_QWORD*)(v16 + 8LL * v116);
              v136 = "IconWorkRange_RangeHeal";
              v137 = *(_BYTE*)(v135 + 88);
              *(_DWORD*)(v135 + 56) = 0;
              *(float*)(v135 + 48) = v154;
              *(float*)(v135 + 52) = v125;
              *(_BYTE*)(v135 + 88) = v137 | 0x11;
              if (v113 >= 2 && v68 != 31) {
                if (v68 == 42) {
                  v136 = "IconWorkRange_RangeInterference";
                }
                else {
                  v136 = "IconWorkRange_RangeAttack";
                }
              }
              Manager_136a920(ui_Manager_instance_ + 1264, v135, 0, 7u, v136);
            }
            ++v116;
          }
          if (*v118 >= 2u) {
            if (v117 > v116) {
              v138 = *(_QWORD*)(v16 + 8LL * v116);
              v139 = "IconWorkRange_RangeHeal";
              v140 = *(_BYTE*)(v138 + 88);
              *(float*)(v138 + 48) = v119;
              *(float*)(v138 + 52) = v125;
              *(_DWORD*)(v138 + 56) = 0;
              *(_BYTE*)(v138 + 88) = v140 | 0x11;
              if (v113 >= 2 && v68 != 31) {
                if (v68 == 42) {
                  v139 = "IconWorkRange_RangeInterference";
                }
                else {
                  v139 = "IconWorkRange_RangeAttack";
                }
              }
              Manager_136a920(ui_Manager_instance_ + 1264, v138, 0, 7u, v139);
            }
            ++v116;
          }
          if (v118[1] >= 2u) {
            if (v117 > v116) {
              v141 = *(_QWORD*)(v16 + 8LL * v116);
              v142 = "IconWorkRange_RangeHeal";
              v143 = *(_BYTE*)(v141 + 88);
              *(float*)(v141 + 48) = v120;
              *(float*)(v141 + 52) = v125;
              *(_DWORD*)(v141 + 56) = 0;
              *(_BYTE*)(v141 + 88) = v143 | 0x11;
              if (v113 >= 2 && v68 != 31) {
                if (v68 == 42) {
                  v142 = "IconWorkRange_RangeInterference";
                }
                else {
                  v142 = "IconWorkRange_RangeAttack";
                }
              }
              Manager_136a920(ui_Manager_instance_ + 1264, v141, 0, 7u, v142);
            }
            ++v116;
          }
          if (v118[2] >= 2u) {
            if (v117 > v116) {
              v144 = *(_QWORD*)(v16 + 8LL * v116);
              v145 = "IconWorkRange_RangeHeal";
              v146 = *(_BYTE*)(v144 + 88);
              *(float*)(v144 + 48) = v121;
              *(float*)(v144 + 52) = v125;
              *(_DWORD*)(v144 + 56) = 0;
              *(_BYTE*)(v144 + 88) = v146 | 0x11;
              if (v113 >= 2 && v68 != 31) {
                if (v68 == 42) {
                  v145 = "IconWorkRange_RangeInterference";
                }
                else {
                  v145 = "IconWorkRange_RangeAttack";
                }
              }
              Manager_136a920(ui_Manager_instance_ + 1264, v144, 0, 7u, v145);
            }
            ++v116;
          }
          if (v118[3] >= 2u) {
            if (v117 > v116) {
              v147 = *(_QWORD*)(v16 + 8LL * v116);
              v148 = "IconWorkRange_RangeHeal";
              v149 = *(_BYTE*)(v147 + 88);
              *(float*)(v147 + 48) = v122;
              *(float*)(v147 + 52) = v125;
              *(_DWORD*)(v147 + 56) = 0;
              *(_BYTE*)(v147 + 88) = v149 | 0x11;
              if (v113 >= 2 && v68 != 31) {
                if (v68 == 42) {
                  v148 = "IconWorkRange_RangeInterference";
                }
                else {
                  v148 = "IconWorkRange_RangeAttack";
                }
              }
              Manager_136a920(ui_Manager_instance_ + 1264, v147, 0, 7u, v148);
            }
            ++v116;
          }
          if (v118[4] >= 2u) {
            if (v117 > v116) {
              v150 = *(_QWORD*)(v16 + 8LL * v116);
              v124 = "IconWorkRange_RangeHeal";
              v151 = *(_BYTE*)(v150 + 88);
              *(float*)(v150 + 48) = v123;
              *(float*)(v150 + 52) = v125;
              *(_DWORD*)(v150 + 56) = 0;
              *(_BYTE*)(v150 + 88) = v151 | 0x11;
              if (v113 >= 2 && v68 != 31) {
                if (v68 == 42) {
                  v124 = "IconWorkRange_RangeInterference";
                }
                else {
                  v124 = "IconWorkRange_RangeAttack";
                }
              }
              Manager_136a920(ui_Manager_instance_ + 1264, v150, 0, 7u, v124);
            }
            ++v116;
          }
          ++v115;
          v118 += 9;
        } while (v115 != 9);
      }
    }
  }
  if (v16 == 0) {
    return;
  }
LABEL_326:
  v152 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v152 = 56;
  }
  nn_mem_StandardAllocator_Free_alt3(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v152, v16);
}

__int64 Util_1580a10(__int64 result, unsigned __int8 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;

  if (result == 0) {
    return result;
  }
  v3 = result;
  result = game_Unit_GetJob(result);
  if (result == 0) {
    return result;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(result + 24) + 1112LL);
  if (a2 != 12) {
    if (v4 == 0 || a2 == 8 || *(int*)(v3 + 592) < 2) {
    LABEL_21:
      if (a2 == 10 &&
          (v14 = *(_QWORD*)(v3 + 1744), v15 = *(_QWORD*)(v3 + 1752) - v14,
           v21 = GameData_21d992c & 0xFFF,
           (v16 = ((unsigned __int64)(unsigned int)GameData_21d992c >> 5) &
                  0x7F) +
                   1 <=
               v15 >> 2) &&
          ((*(_DWORD*)(v14 + 4LL * (unsigned int)v16) >> GameData_21d992c) &
           1) != 0) {
        v17 = result;
        if ((game_HasActiveSkill_843420(&v21, v3 + 1744) & 1) != 0) {
          return 1;
        }
        v18 = 10;
        result = v17;
      }
      else {
        v18 = a2;
      }
      return *(char*)(result + v18 + 398) > -1;
    }
    if (*(_QWORD*)(result + 88) == 0) {
      v4 = result;
    }
    if (a2 == 10 &&
        (v9 = *(_QWORD*)(v3 + 1744), v10 = *(_QWORD*)(v3 + 1752) - v9,
         v20 = GameData_21d992c & 0xFFF,
         (v11 =
              ((unsigned __int64)(unsigned int)GameData_21d992c >> 5) & 0x7F) +
                 1 <=
             v10 >> 2) &&
        ((*(_DWORD*)(v9 + 4LL * (unsigned int)v11) >> GameData_21d992c) & 1) !=
            0) {
      v12 = result;
      if ((game_HasActiveSkill_843420(&v20, v3 + 1744) & 1) != 0) {
        return 1;
      }
      v13 = 10;
      result = v12;
    }
    else {
      v13 = a2;
    }
    if (*(char*)(v4 + v13 + 398) < 0) {
      goto LABEL_21;
    }
    return 1;
  }
  v5 = *(_QWORD*)(v3 + 1744);
  v6 = *(_QWORD*)(v3 + 1752) - v5;
  v19 = GameData_21d9948 & 0xFFF;
  v7 = ((unsigned __int64)(unsigned int)GameData_21d9948 >> 5) & 0x7F;
  if (v7 + 1 <= v6 >> 2 &&
      ((*(_DWORD*)(v5 + 4LL * (unsigned int)v7) >> GameData_21d9948) & 1) !=
          0) {
    v8 = game_HasActiveSkill_843420(&v19, v3 + 1744);
  }
  else {
    v8 = 0;
  }
  return (v4 == 0) & (v8 ^ 1u);
}

__int64* Util_1580bf0(__int64* result, __int64 a2, unsigned int a3, char a4,
                      char a5, char a6, char a7, char a8)
{
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  char v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  char v29;
  int v30;
  unsigned __int64 v31;
  int v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  int v37;
  long double v38;
  int v39;
  int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  const char* v48;
  const char* v49;
  float v50;
  __int64* v51;
  const char* v52;
  const char* v53;
  __int64 v54;
  char v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;

  if (a2 != 0) {
    v15 = result;
    LayoutAccessor_1560070((void*)(&v59), result, (__int64)"L_IconMasteryType");
    result = v60;
    if (v60 != nullptr) {
      v16 = std___1___shared_weak_count_lock(v60);
      v17 = v59;
      result = v60;
      if (v60 != nullptr) {
        result = (__int64*)std___1___shared_weak_count___release_weak(v60);
      }
      if (v16 != 0 && v17 != 0) {
        LayoutAccessor_155e830_alt2(v15, 1);
        v18 = ui_LayoutAccessor_FindPane(v17, "Img");
        if (v18 != 0) {
          v18 =
              __dynamic_cast(v18, GameData_212d670[0], GameData_212d678[0], 0);
        }
        v55 = a5;
        v56 = v17;
        GameRoutine_1841300(v18, a3);
        if ((a7 & 1) != 0) {
          v19 = 0;
        }
        else {
          v19 = *(unsigned __int8*)(a2 + (unsigned __int8)a3 + 540);
        }
        v20 = ui_LayoutAccessor_FindPane(v15, "IconMasteryLv");
        v54 = v16;
        if (v20 != 0) {
          v21 =
              __dynamic_cast(v20, GameData_212d670[0], GameData_212d678[0], 0);
        }
        else {
          v21 = 0;
        }
        v22 = a6;
        if ((unsigned __int8)a3 > 0xCu) {
          v23 = 0;
        }
        else {
          v23 = *(unsigned __int8*)(a2 + (unsigned __int8)a3 + 540);
        }
        v24 = 64;
        if ((a4 & 1) != 0) {
          v24 = 60;
        }
        v25 = 72;
        if ((a4 & 1) != 0) {
          v25 = 36;
        }
        if (v23 >= v19) {
          v26 = v25;
        }
        else {
          v26 = v24;
        }
        if (v21 != 0) {
          v27 = *(_DWORD*)((char*)GameData_212da30 + v26);
          v28 =
              (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v21 + 88LL))(v21, 0);
          if (v28 != 0) {
            *(_DWORD*)(v28 + 12) = v27;
          }
        }
        GameRoutine_1841470(v21, v19);
        if ((a7 & 1) != 0 || (a8 & 1) != 0) {
          ui_LayoutAccessor_SetPaneVisible(v15, "L_Gauge", 0);
          v33 = v56;
          v29 = v22;
          v16 = v54;
        }
        else {
          v29 = v22;
          v30 = *(unsigned __int8*)(a2 + (unsigned __int8)a3 + 540);
          if ((unsigned int)v30 <= 1) {
            v16 = v54;
            v32 = 0;
            v31 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
          }
          else {
            v16 = v54;
            v31 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
            if ((int)v31 <= (unsigned __int8)(v30 - 1)) {
              v32 = 0;
            }
            else {
              v32 = *(_DWORD*)(GameData_21d99a8 +
                               4LL * (unsigned __int8)(v30 - 1));
            }
          }
          if (v30 >= (int)v31) {
            v34 = v31;
          }
          else {
            v34 = *(unsigned __int8*)(a2 + (unsigned __int8)a3 + 540);
          }
          if (*(_BYTE*)(a2 + (unsigned __int8)a3 + 540) != 0) {
            v35 = v34;
          }
          else {
            v35 = 1;
          }
          if (v35 == (_DWORD)v31) {
            v36 = 0;
          }
          else {
            v36 = *(_DWORD*)(GameData_21d99a8 + 4LL * v35);
          }
          v37 = *(unsigned __int16*)(a2 + 2LL * (unsigned __int8)a3 + 514);
          ui_LayoutAccessor_SetPaneVisible(v15, "L_Gauge", 1);
          LayoutAccessor_1560070((void*)(&v57), v15, (__int64)"L_Gauge");
          LODWORD(v38) = 1.0;
          if (v36 >= 1) {
            v39 = v36 - v32;
            if (v36 != v32) {
              if (v37 <= v32) {
                v40 = v32;
              }
              else {
                v40 = v37;
              }
              v41 = v40 - v32;
              if (v39 < v41) {
                v41 = v36 - v32;
              }
              *(float*)&v38 = (float)v41 / (float)v39;
            }
          }
          GameRoutine_174d580(&v57, "GaugeUp", 7, v38);
          v33 = v56;
          if (v58 != 0) {
            std___1___shared_weak_count___release_weak(v58);
          }
        }
        v42 = ui_LayoutAccessor_FindPane(v33, &GameData_1ac6c8b);
        if (v42 != 0) {
          v43 =
              __dynamic_cast(v42, GameData_212d670[0], GameData_212d678[0], 0);
          if (v43 != 0) {
            Manager_136a920_alt1(ui_Manager_instance_ + 1264, v43, 0, 7,
                                 "IconMasteryOverlayBg_Default");
          }
        }
        if ((v29 & 1) == 0) {
          v44 = *(_QWORD*)(a2 + 392);
          if (v44 != 0) {
            v45 = *(char*)(v44 + (unsigned __int8)a3 + 597);
            v46 = ui_LayoutAccessor_FindPane(v33, &GameData_1ac6c8b);
            if (v46 != 0) {
              v47 = __dynamic_cast(v46, GameData_212d670[0],
                                   GameData_212d678[0], 0);
              if (v47 != 0) {
                v48 = "IconMasteryOverlayBg_Default";
                if (v45 < 0) {
                  v48 = "IconMasteryOverlayBg_Bad";
                }
                if (v45 <= 0) {
                  v49 = v48;
                }
                else {
                  v49 = "IconMasteryOverlayBg_Good";
                }
                Manager_136a920_alt1(ui_Manager_instance_ + 1264, v47, 0, 7,
                                     v49);
              }
            }
          }
        }
        if ((v55 & 1) != 0) {
          v50 = 1.0;
          v51 = v15;
          if ((a4 & 1) != 0) {
            v52 = "UpDefault";
          }
          else {
            v52 = "UpDisable";
          }
          if ((a4 & 1) != 0) {
            v53 = "Default";
          }
          else {
            v53 = "Disable";
          }
        }
        else {
          v50 = 1.0;
          v51 = v15;
          if ((a4 & 1) != 0) {
            v53 = "Default";
          }
          else {
            v53 = "Disable";
          }
          v52 = v53;
        }
        LayoutAccessor_1562680_alt1(v51, v52, v50);
        result = (__int64*)LayoutAccessor_1562680_alt1(v33, v53, 1.0);
      }
      else if (v16 == 0) {
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        return (__int64*)std___1___shared_weak_count___release_weak(v16);
      }
    }
  }
  return result;
}

__int64 Util_1581060(__int64* a1, __int64 a2, unsigned __int16* a3, char a4,
                     unsigned __int8 a5)
{
  __int64 v6;
  unsigned __int8* v7;
  unsigned __int8* v8;
  int v9;
  char* v10;
  char* v11;
  int v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  char v22;
  char* v23;
  char* v24;
  char* v25;
  char* v26;
  __int64 v27;
  int* v28;
  unsigned __int64 v29;
  unsigned int v30;
  char* v31;
  __int64 v32;
  unsigned int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  const char* v44;
  __int64* v45;
  __int64 v46;
  __int64 result;
  __int64 v48;
  __int64 v49;
  int* v50;
  int v51;
  int* v52;
  _QWORD v53[2];
  char* v54;
  _QWORD v55[2];
  char* v56;

  v6 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a3) +
                 24LL);
  v7 = *(unsigned __int8**)(v6 + 488);
  v8 = *(unsigned __int8**)(v6 + 496);
  if (v7 == v8) {
    ui_LayoutAccessor_SetPaneVisible(a1, "A_Mastery", 0);
    v39 = 0;
    goto LABEL_67;
  }
  v9 = 0;
  v51 = (a2 != 0) & a5;
  v10 = (char*)GameData_212da30 + 64;
  v11 = (char*)GameData_212da30 + 36;
  if ((a4 & 1) != 0) {
    v10 = (char*)GameData_212da30 + 60;
  }
  else {
    v11 = (char*)GameData_212da30 + 72;
  }
  v52 = (int*)v11;
  v49 = a2 + 540;
  v50 = (int*)v10;
  do {
    while (v9 > 1) {
      v7 += 2;
      v9 = 2;
      if (v7 == v8) {
        v44 = "A_Mastery";
        v45 = a1;
        v46 = 1;
        goto LABEL_70;
      }
    }
    v12 = v9;
    v13 = game_util_Format("IconMastery%02d", v9);
    v14 = strlen(v13);
    if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_79;
    }
    v15 = v14;
    if (v14 >= 0x17) {
      if ((v14 | 7) == 0x17) {
        v17 = 26;
      }
      else {
        v17 = (v14 | 7) + 1;
      }
      v16 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
      v55[1] = v15;
      v56 = v16;
      v55[0] = v17 | 1;
    LABEL_16:
      memmove(v16, v13, v15);
      goto LABEL_17;
    }
    v16 = (char*)v55 + 1;
    LOBYTE(v55[0]) = 2 * v14;
    if (v14 != 0) {
      goto LABEL_16;
    }
  LABEL_17:
    v16[v15] = 0;
    v18 = game_util_Format("IconMasteryLevel%02d", v12);
    v14 = strlen(v18);
    if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_79:
      String_60a1d0(v14);
    }
    v19 = v14;
    if (v14 >= 0x17) {
      if ((v14 | 7) == 0x17) {
        v21 = 26;
      }
      else {
        v21 = (v14 | 7) + 1;
      }
      v20 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v21, 16, 0);
      v53[1] = v19;
      v54 = v20;
      v53[0] = v21 | 1;
    LABEL_25:
      memmove(v20, v18, v19);
      goto LABEL_26;
    }
    v20 = (char*)v53 + 1;
    LOBYTE(v53[0]) = 2 * v14;
    if (v14 != 0) {
      goto LABEL_25;
    }
  LABEL_26:
    v22 = v55[0];
    v23 = v56;
    v20[v19] = 0;
    if ((v22 & 1) != 0) {
      v24 = v23;
    }
    else {
      v24 = (char*)v55 + 1;
    }
    ui_LayoutAccessor_SetPaneVisible(a1, v24, 1);
    if ((v53[0] & 1) != 0) {
      v25 = v54;
    }
    else {
      v25 = (char*)v53 + 1;
    }
    ui_LayoutAccessor_SetPaneVisible(a1, v25, 1);
    if ((v55[0] & 1) != 0) {
      v26 = v56;
    }
    else {
      v26 = (char*)v55 + 1;
    }
    v27 = ui_LayoutAccessor_FindPane(a1, v26);
    if (v27 != 0) {
      v27 = __dynamic_cast(v27, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1841190(v27, *v7);
    v28 = v52;
    if (v51 != 0) {
      v29 = *v7;
      if (v29 > 0xC) {
        v30 = 0;
      }
      else {
        v30 = *(unsigned __int8*)(v49 + v29);
      }
      if (v30 >= v7[1]) {
        v28 = v52;
      }
      else {
        v28 = v50;
      }
    }
    if ((v53[0] & 1) != 0) {
      v31 = v54;
    }
    else {
      v31 = (char*)v53 + 1;
    }
    v32 = ui_LayoutAccessor_FindPane(a1, v31);
    if (v32 != 0) {
      v32 = __dynamic_cast(v32, GameData_212d670[0], GameData_212d678[0], 0);
      v33 = v7[1];
      if (v32 != 0) {
        v34 = *v28;
        v35 = v32;
        v36 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v32 + 88LL))(v32, 0);
        if (v36 != 0) {
          *(_DWORD*)(v36 + 12) = v34;
        }
        v32 = v35;
      }
    }
    else {
      v33 = v7[1];
    }
    GameRoutine_1841470(v32, v33);
    if ((v53[0] & 1) != 0 && v54 != nullptr) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v54);
    }
    if ((v55[0] & 1) != 0 && v56 != nullptr) {
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v56);
    }
    v9 = v12 + 1;
    v7 += 2;
  } while (v7 != v8);
  v39 = 1;
  ui_LayoutAccessor_SetPaneVisible(a1, "A_Mastery", 1);
  if (v12 != 0) {
    goto LABEL_71;
  }
LABEL_67:
  v40 = game_util_Format("IconMastery%02d", v39);
  ui_LayoutAccessor_SetPaneVisible(a1, v40, 0);
  v41 = game_util_Format("IconMasteryLevel%02d", v39);
  ui_LayoutAccessor_SetPaneVisible(a1, v41, 0);
  v42 = v39 + 1;
  if (v42 != 2) {
    v43 = game_util_Format("IconMastery%02d", v42);
    ui_LayoutAccessor_SetPaneVisible(a1, v43, 0);
    v44 = (const char*)game_util_Format("IconMasteryLevel%02d", v42);
    v45 = a1;
    v46 = 0;
  LABEL_70:
    ui_LayoutAccessor_SetPaneVisible(v45, v44, v46);
  }
LABEL_71:
  result = ui_LayoutAccessor_FindAlignment(a1, "A_Mastery");
  if (result != 0) {
    Alignment_56b600();
    result = a1[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v48 = result;
        result = *a1;
        if (*a1 != 0) {
          result = ControlCreator_13633c0(result);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
          return std___1___shared_weak_count___release_weak(v48);
        }
      }
    }
  }
  return result;
}

void Util_1581550(__int64* a1, __int64 a2, unsigned __int16* a3,
                  unsigned __int8 a4, unsigned __int8 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int8* v26;
  unsigned __int8* v27;
  unsigned __int64 v28;
  unsigned int v29;
  unsigned int v30;
  char* v31;
  int v32;
  __int64 v33;
  int* v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned int v40;
  char* v41;
  int* v42;
  char* v43;
  int v44;
  char* v45;
  __int64 v46;
  char* v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned int v61;
  int v62;
  int* v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  int v67;
  int* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned int v74;
  int v75;
  unsigned int v76;
  int v77;
  unsigned int v78;
  int v79;

  v10 = ui_LayoutAccessor_FindPane_alt2(a1, "IconMastery00");
  if (v10 != 0) {
    v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v11 = 0;
  }
  v12 = ui_LayoutAccessor_FindPane_alt2(a1, "IconMasteryLevel00");
  if (v12 != 0) {
    v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v13 = 0;
  }
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  v15 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  *v15 = v11;
  v15[1] = v13;
  v16 = ui_LayoutAccessor_FindPane_alt2(a1, "IconMastery01");
  if (v16 != 0) {
    v17 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v17 = 0;
  }
  v18 = ui_LayoutAccessor_FindPane_alt2(a1, "IconMasteryLevel01");
  if (v18 != 0) {
    v19 = __dynamic_cast(v18, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v19 = 0;
  }
  v20 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v14, 32, 16, 0);
  v21 = *v15;
  v22 = v15[1];
  v20[2] = v17;
  v20[3] = v19;
  v23 = v20;
  *v20 = v21;
  v20[1] = v22;
  v24 = 128;
  if (*(_QWORD*)(*v14 + 200) == 0) {
    v24 = 56;
  }
  nn_mem_StandardAllocator_Free_alt3(*v14 + v24, (__int64)v15);
  if (a2 == 0) {
    v41 = (char*)GameData_212da30;
    if ((a4 & 1) != 0 || (a5 & 1) != 0) {
      v43 = (char*)GameData_212da30 + 36;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                memory_order_acquire) &
           1) != 0) {
        v42 = &GameData_22594e8;
      }
      else {
        v42 = &GameData_22594e8;
        if (__cxa_guard_acquire_alt1((__int64)&GameData_22594f0) != 0) {
          GameData_22594e8 = -1;
          __cxa_guard_release_alt1((__int64)&GameData_22594f0);
          v43 = v41 + 36;
        }
      }
    }
    else {
      v42 = (int*)((char*)GameData_212da30 + 120);
      v43 = (char*)GameData_212da30 + 72;
    }
    v54 = *v42;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_22594f0) != 0) {
      GameData_22594e8 = -1;
      __cxa_guard_release_alt1((__int64)&GameData_22594f0);
    }
    v55 = *(_DWORD*)v43;
    if (*v23 != 0) {
      v56 = (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*v23 + 88LL))(*v23, 0);
      if (v56 != 0) {
        *(_DWORD*)(v56 + 12) = v54;
      }
    }
    v57 = v23[1];
    if (v57 != 0) {
      v58 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v57 + 88LL))(v57, 0);
      if (v58 != 0) {
        *(_DWORD*)(v58 + 12) = v55;
      }
    }
    v59 = v23[2];
    if (v59 != 0) {
      v60 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v59 + 88LL))(v59, 0);
      if (v60 != 0) {
        *(_DWORD*)(v60 + 12) = v54;
      }
    }
    goto LABEL_77;
  }
  v25 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a3) +
                 24LL);
  v26 = *(unsigned __int8**)(v25 + 488);
  v27 = *(unsigned __int8**)(v25 + 496);
  if (v26 == v27) {
    goto LABEL_80;
  }
  v28 = *v26;
  if (v28 > 0xC) {
    v29 = 0;
    v30 = v26[1];
    if (((a4 | a5) & 1) == 0) {
      goto LABEL_19;
    }
  }
  else {
    v29 = *(unsigned __int8*)(a2 + v28 + 540);
    v30 = v26[1];
    if (((a4 | a5) & 1) == 0) {
    LABEL_19:
      v31 = (char*)GameData_212da30;
      v32 = *(_DWORD*)((char*)((_UNKNOWN*)0x78LL) + (_QWORD)GameData_212da30);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                memory_order_acquire) &
           1) == 0) {
        v74 = v30;
        v75 = __cxa_guard_acquire_alt1((__int64)&GameData_22594f0);
        v30 = v74;
        if (v75 != 0) {
          GameData_22594e8 = -1;
          __cxa_guard_release_alt1((__int64)&GameData_22594f0);
          v30 = v74;
        }
      }
      v33 = *v23;
      if (v29 >= v30) {
        v34 = (int*)(v31 + 72);
      }
      else {
        v34 = (int*)(v31 + 64);
      }
      v35 = *v34;
      if (v33 != 0) {
        v36 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v33 + 88LL))(v33, 0);
        if (v36 != 0) {
          *(_DWORD*)(v36 + 12) = v32;
        }
      }
      v37 = v23[1];
      if (v37 != 0) {
        v38 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v37 + 88LL))(v37, 0);
        if (v38 != 0) {
          *(_DWORD*)(v38 + 12) = v35;
        }
      }
      if (v26 + 2 != v27) {
        v39 = v26[2];
        if (v39 > 0xC) {
          v40 = 0;
        }
        else {
          v40 = *(unsigned __int8*)(a2 + v39 + 540);
        }
        v61 = v26[3];
        v62 = *(_DWORD*)((char*)((_UNKNOWN*)0x78LL) + (_QWORD)v31);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)&GameData_22594f0) != 0) {
          GameData_22594e8 = -1;
          __cxa_guard_release_alt1((__int64)&GameData_22594f0);
        }
        v63 = (int*)(v31 + 64);
        v64 = v23[2];
        if (v40 >= v61) {
          v63 = (int*)(v31 + 72);
        }
        v55 = *v63;
        if (v64 != 0) {
          v65 =
              (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v64 + 88LL))(v64, 0);
          if (v65 != 0) {
            *(_DWORD*)(v65 + 12) = v62;
          }
        }
      LABEL_77:
        v71 = v23[3];
        if (v71 != 0) {
          v72 =
              (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v71 + 88LL))(v71, 0);
          if (v72 != 0) {
            *(_DWORD*)(v72 + 12) = v55;
          }
        }
        goto LABEL_80;
      }
      goto LABEL_80;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                            memory_order_acquire) &
       1) == 0) {
    v76 = v30;
    v77 = __cxa_guard_acquire_alt1((__int64)&GameData_22594f0);
    v30 = v76;
    if (v77 != 0) {
      GameData_22594e8 = -1;
      __cxa_guard_release_alt1((__int64)&GameData_22594f0);
      v30 = v76;
    }
  }
  v44 = GameData_22594e8;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                            memory_order_acquire) &
       1) == 0) {
    v78 = v30;
    v79 = __cxa_guard_acquire_alt1((__int64)&GameData_22594f0);
    v30 = v78;
    if (v79 != 0) {
      GameData_22594e8 = -1;
      __cxa_guard_release_alt1((__int64)&GameData_22594f0);
      v30 = v78;
    }
  }
  v45 = (char*)GameData_212da30;
  v46 = *v23;
  if (v29 >= v30) {
    v47 = (char*)GameData_212da30 + 36;
  }
  else {
    v47 = (char*)GameData_212da30 + 60;
  }
  v48 = *(_DWORD*)v47;
  if (v46 != 0) {
    v49 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v46 + 88LL))(v46, 0);
    if (v49 != 0) {
      *(_DWORD*)(v49 + 12) = v44;
    }
  }
  v50 = v23[1];
  if (v50 != 0) {
    v51 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v50 + 88LL))(v50, 0);
    if (v51 != 0) {
      *(_DWORD*)(v51 + 12) = v48;
    }
  }
  if (v26 + 2 != v27) {
    v52 = v26[2];
    if (v52 > 0xC) {
      v53 = 0;
    }
    else {
      v53 = *(unsigned __int8*)(a2 + v52 + 540);
    }
    v66 = v26[3];
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_22594f0) != 0) {
      GameData_22594e8 = -1;
      __cxa_guard_release_alt1((__int64)&GameData_22594f0);
    }
    v67 = GameData_22594e8;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_22594f0) != 0) {
      GameData_22594e8 = -1;
      __cxa_guard_release_alt1((__int64)&GameData_22594f0);
    }
    v68 = (int*)(v45 + 60);
    v69 = v23[2];
    if (v53 >= v66) {
      v68 = (int*)(v45 + 36);
    }
    v55 = *v68;
    if (v69 != 0) {
      v70 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v69 + 88LL))(v69, 0);
      if (v70 != 0) {
        *(_DWORD*)(v70 + 12) = v67;
      }
    }
    goto LABEL_77;
  }
LABEL_80:
  v73 = 128;
  if (*(_QWORD*)(*v14 + 200) == 0) {
    v73 = 56;
  }
  nn_mem_StandardAllocator_Free_alt3(*v14 + v73, (__int64)v23);
}

void game_gameui_Util_SetSkillExpBonus(__int64* a1, __int64 a2)
{
  char* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v23[2];
    __int64* v24;
    int* v25;
    __int64* v26;
  } v23_;
  int v27;
  __int64 v28;

  v28 = a2;
  v3 = game_util_Format_alt3("L_Bonus_%02d", 0);
  LayoutAccessor_1560070_alt1((void*)(v23_.v23), a1, v3);
  if (v23_.v23[1] != 0) {
    v4 = std___1___shared_weak_count_lock_alt1(v23_.v23[1]);
    v5 = v23_.v23[0];
    if (v23_.v23[1] != 0) {
      std___1___shared_weak_count___release_weak_alt2(v23_.v23[1]);
    }
    if (v4 != 0 && v5 != 0) {
      LayoutAccessor_155e830(v5, 0);
    }
    else if (v4 == 0) {
      goto LABEL_10;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt2(v4);
    }
  }
LABEL_10:
  v6 = game_util_Format_alt3("L_Bonus_%02d", 1);
  LayoutAccessor_1560070_alt1((void*)(v23_.v23), a1, v6);
  if (v23_.v23[1] != 0) {
    v7 = std___1___shared_weak_count_lock_alt1(v23_.v23[1]);
    v8 = v23_.v23[0];
    if (v23_.v23[1] != 0) {
      std___1___shared_weak_count___release_weak_alt2(v23_.v23[1]);
    }
    if (v7 != 0 && v8 != 0) {
      LayoutAccessor_155e830(v8, 0);
    }
    else if (v7 == 0) {
      goto LABEL_19;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt2(v7);
    }
  }
LABEL_19:
  v9 = game_util_Format_alt3("L_Bonus_%02d", 2);
  LayoutAccessor_1560070_alt1((void*)(v23_.v23), a1, v9);
  if (v23_.v23[1] != 0) {
    v10 = std___1___shared_weak_count_lock_alt1(v23_.v23[1]);
    v11 = v23_.v23[0];
    if (v23_.v23[1] != 0) {
      std___1___shared_weak_count___release_weak_alt2(v23_.v23[1]);
    }
    if (v10 != 0 && v11 != 0) {
      LayoutAccessor_155e830(v11, 0);
    }
    else if (v10 == 0) {
      goto LABEL_28;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt2(v10);
    }
  }
LABEL_28:
  v12 = game_util_Format_alt3("L_Bonus_%02d", 3);
  LayoutAccessor_1560070_alt1((void*)(v23_.v23), a1, v12);
  if (v23_.v23[1] != 0) {
    v13 = std___1___shared_weak_count_lock_alt1(v23_.v23[1]);
    v14 = v23_.v23[0];
    if (v23_.v23[1] != 0) {
      std___1___shared_weak_count___release_weak_alt2(v23_.v23[1]);
    }
    if (v13 != 0 && v14 != 0) {
      LayoutAccessor_155e830(v14, 0);
    }
    else if (v13 == 0) {
      goto LABEL_37;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_alt2(v13);
    }
  }
LABEL_37:
  v15 = game_util_Format_alt3("L_Bonus_%02d", 4);
  LayoutAccessor_1560070_alt1((void*)(v23_.v23), a1, v15);
  if (v23_.v23[1] != 0) {
    v16 = std___1___shared_weak_count_lock_alt1(v23_.v23[1]);
    v17 = v23_.v23[0];
    if (v23_.v23[1] != 0) {
      std___1___shared_weak_count___release_weak_alt2(v23_.v23[1]);
    }
    if (v16 != 0 && v17 != 0) {
      LayoutAccessor_155e830(v17, 0);
    }
    else if (v16 == 0) {
      goto LABEL_46;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak_alt2(v16);
    }
  }
LABEL_46:
  v18 = game_util_Format_alt3("L_Bonus_%02d", 5);
  LayoutAccessor_1560070_alt1((void*)(v23_.v23), a1, v18);
  if (v23_.v23[1] != 0) {
    v19 = std___1___shared_weak_count_lock_alt1(v23_.v23[1]);
    v20 = v23_.v23[0];
    if (v23_.v23[1] != 0) {
      std___1___shared_weak_count___release_weak_alt2(v23_.v23[1]);
    }
    if (v19 != 0 && v20 != 0) {
      LayoutAccessor_155e830(v20, 0);
    }
    else if (v19 == 0) {
      goto LABEL_55;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak_alt2(v19);
    }
  }
LABEL_55:
  v27 = 0;
  v23_.v23[0] = (__int64)GameData_204d908;
  v23_.v23[1] = (__int64)a1;
  v23_.v26 = v23_.v23;
  v23_.v24 = &v28;
  v23_.v25 = &v27;
  GameRoutine_156d580((__int64)v23_.v23);
  if (v23_.v26 == v23_.v23) {
    v21 = 32;
  }
  else {
    if (v23_.v26 == nullptr) {
      goto LABEL_60;
    }
    v21 = 40;
  }
  (*(void (**)(__int64))(*v23_.v26 + v21))((__int64)v23_.v26);
LABEL_60:
  LOBYTE(v23_.v23[0]) = 16;
  strcpy((char*)v23_.v23 + 1, "Bonus_00");
  if (v27 < 1) {
    LOBYTE(v23_.v23[0]) = 20;
    strcpy((char*)v23_.v23 + 1, "Bonus_None");
  }
  LayoutAccessor_1562cf0_alt3((__int64)a1,
                              (unsigned int*)((char*)v23_.v23 + 1));
  if ((v23_.v23[0] & 1) != 0 && v23_.v24 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v23_.v24);
  }
}

_DWORD* Util_15823b0(__int64* a1, unsigned __int8* a2, char a3, char a4,
                     __int64 a5)
{
  int v5;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  unsigned __int8 v27;
  const char* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  char v44;
  const char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned int v50;
  unsigned int v51;
  bool v52;
  __int64 v53;
  __int64 v54;
  _BOOL8 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _DWORD* result;
  int v61;
  int v62;
  int v63;
  unsigned __int64 v64;
  char* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  int v68;
  int v69;
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
  __int64 v82;
  _BYTE v83[4];
  _DWORD v84[2];

  v5 = *a2;
  v11 = ui_LayoutAccessor_FindPane(a1, "Icon");
  v12 = GameData_212c998[0];
  if (v5 != 0) {
    if (v11 != 0) {
      v11 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1841930(
        v11, *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8LL * *a2) + 64LL),
        0);
  }
  else if (v11 != 0) {
    v20 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
    if (v20 != 0) {
      Manager_136a920_alt1(ui_Manager_instance_ + 1264, v20, 0, 7, "IconEmpty");
    }
  }
  ui_LayoutAccessor_SetPaneVisible(a1, "T_Txt", *a2 != 0);
  ui_LayoutAccessor_SetPaneVisible(a1, "T_GambitName", *a2 != 0);
  if (*a2 != 0) {
    v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8LL * *a2) + 32LL);
    v70 = -1;
    v71 = -1;
    v72 = -1;
    v73 = -1;
    v74 = -1;
    v75 = -1;
    v76 = -1;
    v77 = -1;
    v78 = -1;
    v79 = -1;
    v80 = -1;
    v81 = -1;
    v14 = *msg_MessageManager_instance__ptr[0];
    v64 = (unsigned __int64)(GameData_212e348 + 2);
    v65 = (char*)0xFFFF0001FFFF0000LL;
    v66 = 0xFFFF0004FFFF0002LL;
    v67 = 0xFFFF0006FFFF0005LL;
    v82 = 8;
    v68 = -65529;
    v69 = -65528;
    v15 = GameRoutine_a4dbe0_alt1(v14, v13, 0, &v64);
    if (v15 != 0) {
      v16 = v15;
      v17 = ui_LayoutAccessor_FindTextBox_alt1(a1, "T_Txt");
      if (v17 != 0) {
        GameRoutine_156c5d0_alt1(v17, v16, 0);
      }
    }
    v18 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8LL * *a2) + 64LL);
    if (v18 != 0) {
      v19 = (char*)HistoryLogInfo_6fb810(v18);
      if (v19 == nullptr) {
        goto LABEL_18;
      }
    }
    else {
      v19 = &GameData_1a9f09e;
    }
    v21 = ui_LayoutAccessor_FindTextBox_alt1(a1, "T_GambitName");
    if (v21 != 0) {
      GameRoutine_156c5d0_alt1(v21, (__int64)v19, 0);
    }
  }
LABEL_18:
  ui_LayoutAccessor_SetPaneVisible(a1, "IconBuff", 0);
  v22 = *((_DWORD*)a2 + 1);
  if (v22 != 0 && *GameData_212c780 != 0) {
    v64 = v22;
    v65 = &GameData_1a9f09e;
    v23 = SpotMgr_132ffa0(&v64);
    if (v23 != 0) {
      v24 = v23;
      if ((a3 & 1) == 0) {
        Util_1582b50_alt1(a1, v23);
        goto LABEL_70;
      }
      LayoutAccessor_1560070((void*)(&v64), a1, (__int64)"L_Help");
      if (v65 == nullptr) {
        goto LABEL_63;
      }
      v25 = std___1___shared_weak_count_lock(v65);
      v26 = (__int64*)v64;
      if (v65 != nullptr) {
        std___1___shared_weak_count___release_weak(v65);
      }
      if (v25 != 0 && v26 != nullptr) {
        v27 = Impl_13261c0_alt1(v24) - 5;
        if (v27 > 4u) {
          v28 = "Info_Reconstruction";
        }
        else {
          v28 = GameData_204f058[v27];
        }
        LayoutAccessor_1562cf0_alt1(a1, v28);
        v32 = a1[1];
        if (v32 != 0) {
          v33 = std___1___shared_weak_count_lock(v32);
          if (v33 != 0) {
            v34 = v33;
            if (*a1 != 0) {
              ControlCreator_13633c0_alt1();
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
              std___1___shared_weak_count___release_weak(v34);
            }
          }
        }
        v35 = ui_LayoutAccessor_FindPane(v26, "Icon");
        if (v35 != 0) {
          v36 =
              __dynamic_cast(v35, GameData_212d670[0], GameData_212d678[0], 0);
          v37 = GameRoutine_1651740_alt1(v24);
          if (v36 != 0) {
            if (v37 > 0x15) {
              v38 = &GameData_1a9f09e;
            }
            else {
              v38 = GameData_204f220[v37];
            }
            Manager_136a920_alt1(ui_Manager_instance_ + 1264, v36, 0, 7, v38);
          }
        }
        else {
          GameRoutine_1651740_alt1(v24);
        }
        v39 = ui_LayoutAccessor_FindTextBox_alt1(v26, "T_TxtState");
        if (v39 != 0) {
          v40 = v39;
          v41 = ui_LayoutAccessor_FindTextBox_alt1(v26, "T_TxtState");
          if (v41 != 0) {
            GameRoutine_190a0c0_alt1(&v64, v84, v83, v41,
                                     *(_QWORD*)(v41 + 216));
            v42 = v84[0];
            v43 = v84[1];
          }
          else {
            v42 = 0;
            v43 = 0;
          }
          v44 = *(_BYTE*)(v40 + 88);
          *(_DWORD*)(v40 + 80) = v42;
          *(_DWORD*)(v40 + 84) = v43;
          *(_BYTE*)(v40 + 88) = v44 | 0x10;
        }
        GameRoutine_1585290_alt1(v26, "A_Txt", &GameData_1ac6c8b);
        if ((a4 & 1) != 0) {
          v45 = "Default";
        }
        else {
          v45 = "Disable";
        }
        LayoutAccessor_1562cf0_alt1(v26, v45);
        LayoutAccessor_1562cf0_alt1(v26, "IconDefault");
      }
      else if (v25 == 0) {
      LABEL_63:
        if (ui_LayoutAccessor_FindAlignment(a1, "A_Help") != 0) {
          Alignment_56b600();
          v46 = a1[1];
          if (v46 != 0) {
            v47 = std___1___shared_weak_count_lock(v46);
            if (v47 != 0) {
              v48 = v47;
              if (*a1 != 0) {
                ControlCreator_13633c0_alt1();
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
                std___1___shared_weak_count___release_weak(v48);
              }
            }
          }
        }
        goto LABEL_70;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        std___1___shared_weak_count___release_weak(v25);
      }
      goto LABEL_63;
    }
  }
  if (a2[1] != 0 && (v29 = game_UnitPool_Get_alt1(a2 + 1)) != 0) {
    v30 = v29;
    LayoutAccessor_1562cf0_alt1(a1, "Info_Equip");
    v31 = ui_LayoutAccessor_FindPane(a1, "Face");
    if (v31 != 0) {
      v31 = __dynamic_cast(v31, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1840740(v31, 0, v30, 6, 1);
  }
  else {
    LayoutAccessor_1562cf0_alt1(a1, "Info_Default");
  }
LABEL_70:
  ui_LayoutAccessor_SetPaneVisible(a1, "IconTactics", *a2 != 0);
  if (*a2 == 0) {
    v55 = false;
    goto LABEL_88;
  }
  v49 = ui_LayoutAccessor_FindPane(a1, "IconTactics");
  if (v49 != 0) {
    v49 = __dynamic_cast(v49, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1841470(
      v49, *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8LL * *a2) +
                               50LL));
  if (a5 == 0 || *a2 == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_22594f0) != 0) {
      GameData_22594e8 = -1;
      __cxa_guard_release(&GameData_22594f0);
    }
    goto LABEL_80;
  }
  v50 = *(unsigned __int8*)(a5 + 552);
  v51 =
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8LL * *a2) + 50LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22594f0) != 0) {
    GameData_22594e8 = -1;
    __cxa_guard_release(&GameData_22594f0);
  }
  if (v50 >= v51) {
  LABEL_80:
    v52 = (a4 & 1) == 0;
    v53 = 72;
    v54 = 36;
    goto LABEL_81;
  }
  v52 = (a4 & 1) == 0;
  v53 = 64;
  v54 = 60;
LABEL_81:
  if (!v52) {
    v53 = v54;
  }
  v56 = *(_DWORD*)((char*)GameData_212da30 + v53);
  v57 = ui_LayoutAccessor_FindPane(a1, "IconTactics");
  if (v57 != 0) {
    v58 = __dynamic_cast(v57, GameData_212d670[0], GameData_212d678[0], 0);
    if (v58 != 0) {
      v59 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v58 + 88LL))(v58, 0);
      if (v59 != 0) {
        *(_DWORD*)(v59 + 12) = v56;
      }
    }
  }
  v55 = *a2 != 0;
LABEL_88:
  result = (_DWORD*)ui_LayoutAccessor_SetPaneVisible(a1, "ImgTactics", v55);
  if (*a2 != 0) {
    result = (_DWORD*)ui_LayoutAccessor_FindPane(a1, "ImgTactics");
    if (result != nullptr) {
      result = (_DWORD*)__dynamic_cast(result, GameData_212d670[0],
                                       GameData_212d678[0], 0);
      if (result != nullptr) {
        v61 = *(_DWORD*)((char*)((_UNKNOWN*)0x50LL) + (_QWORD)GameData_212da30);
        v62 = *(_DWORD*)((char*)((_UNKNOWN*)0x50LL) + (_QWORD)GameData_212da30 +
                         4);
        result = (_DWORD*)(*(__int64 (**)(_DWORD*, _QWORD))(*(_QWORD*)result +
                                                            88LL))(result, 0);
        if (result != nullptr) {
          if ((a4 & 1) != 0) {
            v63 = v61;
          }
          else {
            v63 = v62;
          }
          result[3] = v63;
        }
      }
    }
  }
  return result;
}

__int64 Util_1582b50(__int64* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  int v6;
  char* v7;
  __int64 v8;
  int v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  int v15;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  result = *(_QWORD*)(a2 + 280);
  if (result == 0) {
    return result;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
  if ((unsigned __int8)result == 1) {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 280) + 112LL))(
        *(_QWORD*)(a2 + 280));
    if ((result & 1) != 0) {
      return result;
    }
  }
  v5 = *(_QWORD*)(a2 + 280);
  if (v5 == 0) {
    return result;
  }
  if ((*(_BYTE*)(a2 + 178) & 4) != 0 && game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    GameHr_1562680((unsigned __int64)a1, "Info_Reconstruction",
                   0x1.0000000000000p+0f);
    LayoutAccessor_1560070_alt1((void*)(&v20_.v20), a1, "L_Gauge");
    v18_.v18 = v20_.v20;
    v18_.v19 = v20_.v21;
    if (v20_.v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20_.v21 + 16), 1u,
                                memory_order_relaxed);
    }
    GmapUIDef_16537e0(&v18_.v18, a2);
    if (v18_.v19 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v18_.v19);
    }
    result = v20_.v21;
    if (v20_.v21 == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak_alt2(result);
  }
  result = Impl_13261c0(a2);
  if ((unsigned __int8)result != 9) {
    if ((unsigned __int8)result == 8) {
      GameHr_1562680((unsigned __int64)a1, "Info_Fort", 0x1.0000000000000p+0f);
      LayoutAccessor_1560070_alt1((void*)(&v16_.v16), a1, "L_Fort");
      v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 256LL))(v5);
      GameRoutine_1582e00_alt1((__int64)&v16_.v16, v15);
      result = v16_.v17;
      if (v16_.v17 == 0) {
        return result;
      }
      return std___1___shared_weak_count___release_weak_alt2(result);
    }
    if ((unsigned __int8)result != 5) {
      return result;
    }
  }
  GameHr_1562680((unsigned __int64)a1, "Info_Explorer", 0x1.0000000000000p+0f);
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 248LL))(v5);
  v7 = game_util_Format_alt3("%d", v6);
  v8 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_InfoNum");
  if (v8 != 0) {
    GameRoutine_156c5d0(v8, (__int64)v7, 0);
  }
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 240LL))(v5);
  v10 = game_util_Format_alt3("%d", v9);
  v11 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_InfoMaxNum");
  if (v11 != 0) {
    GameRoutine_156c5d0(v11, (__int64)v10, 0);
  }
  v12 = ui_LayoutAccessor_FindPane_alt2(a1, "IconInfo");
  if (v12 == 0) {
    return GameRoutine_1651740((_QWORD*)a2);
  }
  v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
  result = GameRoutine_1651740((_QWORD*)a2);
  if (v13 != 0) {
    if ((unsigned int)result > 0x15) {
      v14 = &GameData_1a9f09e;
    }
    else {
      v14 = GameData_204f220[(unsigned int)result];
    }
    return Manager_136a920(ui_Manager_instance_ + 1264, v13, 0, 7u, v14);
  }
  return result;
}

void Util_1582f00(__int64* a1, unsigned __int8* a2, __int64 a3)
{
  __int64* v6;
  const char* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  int v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  bool v26;

  Util_15823b0(a1, a2, 0, 1, 0);
  if (a3 == 0) {
    LayoutAccessor_1562680(a1, (__int64)"Menu_Off", 0x1.0000000000000p+0f);
    return;
  }
  v6 = GameData_212c998[0];
  if ((*(_BYTE*)(a3 + 178) & 4) == 0 || game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    v8 = (unsigned __int8)Impl_13261c0(a3);
    switch (v8) {
    case 9:
      LayoutAccessor_1562680(a1, (__int64)"Menu_Explorer",
                             0x1.0000000000000p+0f);
      v9 = SpotAttachmentDungeon_151b000();
      break;
    case 8:
      LayoutAccessor_1562680(a1, (__int64)"Menu_Fort", 0x1.0000000000000p+0f);
      v9 = SpotAttachmentFort_151b980();
      break;
    case 5:
      LayoutAccessor_1562680(a1, (__int64)"Menu_Explorer",
                             0x1.0000000000000p+0f);
      v9 = SpotAttachmentExplore_151a420();
      break;
    default:
      v7 = "Menu_Off";
      goto LABEL_32;
    }
    v10 = 4;
    v11 = 3;
    v12 = 2;
    v13 = 1;
    v14 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * *a2);
    v15 = *(unsigned __int8*)(v14 + 50);
    v16 = *(_QWORD*)(v14 + 64);
    if (v15 >= 0xB) {
      v10 = 5;
    }
    if (v15 >= 9) {
      v11 = v10;
    }
    if (v15 >= 7) {
      v12 = v11;
    }
    if (v15 >= 5) {
      v13 = v12;
    }
    if (v15 >= 3) {
      v17 = v13;
    }
    else {
      v17 = 0;
    }
    if (v16 != 0 &&
        (v18 = *(unsigned __int16*)(v9 + 32), *(_WORD*)(v9 + 32) != 0)) {
      v19 = *(unsigned __int8**)(v9 + 40);
      v20 = *(unsigned __int8*)(v16 + 250);
      v21 = 72;
      while (1) {
        v22 = *v19++;
        if (v22 == v20) {
          break;
        }
        if (--v18 == 0) {
          goto LABEL_34;
        }
      }
      v21 = 56;
    }
    else {
      v21 = 72;
    }
  LABEL_34:
    v23 = *(unsigned __int8*)(*(_QWORD*)(v9 + v21) + v17);
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, (__int64)"T_Num", 1);
    v24 = ui_LayoutAccessor_FindPane_alt1(a1, (__int64)"T_Num");
    if (v24 != 0) {
      v25 = __dynamic_cast(v24, GameData_212d670[0], GameData_212d690, 0);
      if (v25 != 0) {
        GameRoutine_156c910_alt1(v25, (__int64)"%d", 1, v23);
      }
    }
    goto LABEL_37;
  }
  v7 = "Menu_Reconstruction";
LABEL_32:
  LayoutAccessor_1562680(a1, (__int64)v7, 0x1.0000000000000p+0f);
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, (__int64)"T_Num", 0);
LABEL_37:
  v26 = SpotAttachmentExplore_15199c0(
      a3, *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * *a2));
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, (__int64)"IconBuff", v26);
}

void Util_1583180(__int64* a1, unsigned __int8* a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  char* v14;
  unsigned __int8* v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int8* v24;
  unsigned int v25;
  unsigned __int8* v26;
  unsigned int v27;
  bool v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  unsigned int v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  char* v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  struct {
    __int64 v50;
    __int64 v51;
  } v50_;
  struct {
    __int64* v52;
    __int64 v53;
    unsigned __int64 v54;
    unsigned __int64 v55;
    int v56;
    int v57;
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
    __int64 v69;
    __int64 v70;
  } v52_;

  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "Face", 0);
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "N_Reliance", 0);
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "L_IconSkill", 0);
  if (*a2 == 0) {
    v52_.v58 = -1;
    v52_.v59 = -1;
    v52_.v60 = -1;
    v52_.v61 = -1;
    v8 = *msg_MessageManager_instance__ptr[0];
    v52_.v62 = -1;
    v52_.v63 = -1;
    v52_.v64 = -1;
    v52_.v65 = -1;
    v52_.v66 = -1;
    v52_.v67 = -1;
    v52_.v68 = -1;
    v52_.v69 = -1;
    v52_.v52 = GameData_212e348 + 2;
    v52_.v53 = 0xFFFF0001FFFF0000LL;
    v52_.v54 = 0xFFFF0004FFFF0002LL;
    v52_.v55 = 0xFFFF0006FFFF0005LL;
    v52_.v70 = 8;
    v52_.v56 = -65529;
    v52_.v57 = -65528;
    v9 = GameRoutine_a4dbe0_alt2(v8, "MID_Sys_Empty", 0);
    if (v9 != nullptr) {
      v10 = (__int64)v9;
      v11 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_Txt");
      if (v11 != 0) {
        GameRoutine_156c5d0(v11, v10, 0);
      }
    }
    return;
  }
  v6 = ui_LayoutAccessor_FindPane_alt2(a1, "Icon");
  if (v6 != 0) {
    v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v7 = 0;
  }
  v12 = GameData_212c8a0;
  if (v7 != 0) {
    v13 = *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *a2);
    if (v13 != 0) {
      if ((unsigned int)*(unsigned __int8*)(v13 + 32) - 1 > 4) {
        v14 = &GameData_1a9f09e;
      }
      else {
        v14 = (char*)*(&GameData_204f348 +
                       (unsigned __int8)(*(_BYTE*)(v13 + 32) - 1));
      }
      Manager_136a920(ui_Manager_instance_ + 1264, v7, 0, 2u, v14);
    }
  }
  v15 = Unit_931120(a2);
  if (v15 != nullptr) {
    v16 = (__int64)v15;
    v17 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_Txt");
    if (v17 != 0) {
      GameRoutine_156c5d0(v17, v16, 0);
    }
  }
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8LL * *a2) + 109LL) == 0) {
    return;
  }
  if (a2[3] != 0) {
    v18 = game_UnitPool_Get(a2 + 3);
    if (v18 != nullptr) {
      v19 = (__int64)v18;
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "Face", 1);
      v20 = ui_LayoutAccessor_FindPane_alt2(a1, "Face");
      if (v20 != 0) {
        v20 = __dynamic_cast(v20, GameData_212d670[0], GameData_212d678[0], 0);
      }
      GameHr_1840740(v20, 0, v19, 6u, 1);
    }
  }
  if (a3 == 0) {
    return;
  }
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "N_Reliance", 1);
  LayoutAccessor_1560070_alt1((void*)(&v50_.v50), a1, "L_Reliance");
  if (v50_.v51 != 0) {
    v21 = std___1___shared_weak_count_lock_alt1(v50_.v51);
    if (v21 != 0) {
      v22 = v21;
      if (v50_.v50 != 0) {
        Util_1583920(v50_.v50, (__int64)a2, a3);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak_alt2(v22);
      }
    }
    if (v50_.v51 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v50_.v51);
    }
  }
  v23 = *(_QWORD*)(a3 + 392);
  if (v23 == 0) {
    goto LABEL_44;
  }
  v24 = *((unsigned __int8**)a2 + 3);
  if (v24 == nullptr) {
    goto LABEL_44;
  }
  v25 = *(unsigned __int8*)(v23 + 48);
  v26 = a2 + 24;
  do {
    v27 = v24[26];
    v28 = v27 >= v25;
    if (v27 >= v25) {
      v29 = 0;
    }
    else {
      v29 = 8;
    }
    if (v28) {
      v26 = v24;
    }
    v24 = *(unsigned __int8**)&v24[v29];
  } while (v24 != nullptr);
  if (v26 != a2 + 24 && v25 >= v26[26]) {
    v30 = *((_WORD*)v26 + 14) & 0xFFF;
  }
  else {
  LABEL_44:
    v30 = 0;
  }
  v31 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v31 < 1) {
    v33 = 0;
    v40 = 0;
  }
  else {
    v32 = *(_DWORD*)GameData_21d9988;
    v33 = 0;
    v34 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v31 - 1));
    if (v34 >= v30) {
      v35 = v30;
    }
    else {
      v35 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v31 - 1));
    }
    if (v30 >= v32) {
      v36 = v35;
    }
    else {
      v36 = *(_DWORD*)GameData_21d9988;
    }
    v37 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
    while (1) {
      v38 = (unsigned int)(v33 + v37) >> 1;
      v39 = *(_DWORD*)(GameData_21d9988 + 4LL * v38);
      if (v36 == v39) {
        break;
      }
      if (v36 < v39) {
        v37 = (unsigned int)(v33 + v37) >> 1;
      }
      else {
        v33 = v38 + 1;
      }
      if (v33 >= v37) {
        goto LABEL_61;
      }
    }
    v33 = v38 + 1;
  LABEL_61:
    v40 = 0;
    if ((int)v31 >= 5) {
      v41 = 5;
    }
    else {
      v41 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
    }
    v42 = *(_DWORD*)(GameData_21d9988 + 4LL * v41 - 4);
    if (v34 >= v42) {
      v34 = v42;
    }
    if (v42 >= v32) {
      v32 = v34;
    }
    while (1) {
      v43 = (unsigned int)(v40 + v31) >> 1;
      v44 = *(_DWORD*)(GameData_21d9988 + 4LL * v43);
      if (v32 == v44) {
        break;
      }
      if (v32 < v44) {
        LODWORD(v31) = (unsigned int)(v40 + v31) >> 1;
      }
      else {
        v40 = v43 + 1;
      }
      if (v40 >= (int)v31) {
        goto LABEL_75;
      }
    }
    v40 = v43 + 1;
  }
LABEL_75:
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "L_Reliance/L_Gauge",
                                        v33 < v40);
  if (*a2 == 0) {
    LOWORD(v45) = 0;
  LABEL_80:
    v46 = "Disable";
    goto LABEL_81;
  }
  v52_.v52 = *(__int64**)(a3 + 392);
  v52_.v53 = a3;
  v45 = *(_DWORD*)GameRoutine_932360(a2, (__int64*)&v52_.v52);
  if ((v45 & 0xFFF) == 0) {
    v52_.v52 = *(__int64**)(a3 + 392);
    v52_.v53 = a3;
    v45 = *GameRoutine_932460(a2, (__int64*)&v52_.v52);
    goto LABEL_80;
  }
  v46 = "Enable";
LABEL_81:
  LayoutAccessor_1560070_alt1((void*)(&v52_.v52), a1, "L_IconSkill");
  if (v52_.v53 == 0) {
    return;
  }
  v47 = std___1___shared_weak_count_lock_alt1(v52_.v53);
  v48 = v52_.v52;
  if (v52_.v53 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v52_.v53);
  }
  if (v47 != 0 && v48 != nullptr) {
    LayoutAccessor_155e830((__int64)v48, 1);
    LayoutAccessor_1562cf0_alt3((__int64)v48, (unsigned int*)v46);
    v49 = ui_LayoutAccessor_FindPane_alt2(v48, "Img");
    if (v49 != 0) {
      v49 = __dynamic_cast(v49, GameData_212d670[0], GameData_212d678[0], 0);
    }
    game_1841930(v49, *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                 8LL * (v45 & 0xFFF)));
  }
  else if (v47 == 0) {
    return;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    std___1___shared_weak_count___release_weak_alt2(v47);
  }
}

__int64 Util_1583920(__int64 result, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  bool v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  bool v22;
  __int64 v23;
  int v24;
  int v26;
  int v27;
  __int64 v28;
  float v29;
  int v30;
  int v31;
  int v32;
  struct {
    __int64 v33;
    __int64 v34;
  } v33_;
  _QWORD v35[2];

  if (a3 == 0 || *(_BYTE*)a2 == 0) {
    return result;
  }
  v4 = *(_QWORD*)(a3 + 392);
  v5 = (__int64*)result;
  if (v4 == 0) {
    goto LABEL_15;
  }
  v6 = *(_QWORD*)(a2 + 24);
  if (v6 == 0) {
    goto LABEL_16;
  }
  v7 = *(unsigned __int8*)(v4 + 48);
  v8 = a2 + 24;
  do {
    v9 = *(unsigned __int8*)(v6 + 26);
    v10 = v9 >= v7;
    if (v9 >= v7) {
      v11 = 0;
    }
    else {
      v11 = 8;
    }
    if (v10) {
      v8 = v6;
    }
    v6 = *(_QWORD*)(v6 + v11);
  } while (v6 != 0);
  if (v8 != a2 + 24 && v7 >= *(unsigned __int8*)(v8 + 26)) {
    LODWORD(v6) = *(_WORD*)(v8 + 28) & 0xFFF;
  }
  else {
  LABEL_15:
    LODWORD(v6) = 0;
  }
LABEL_16:
  v12 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v12 < 1) {
    v13 = 0;
    if (v4 == 0) {
      goto LABEL_43;
    }
  }
  else {
    v13 = 0;
    v14 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v12 - 1));
    if (v14 >= (int)v6) {
      v14 = v6;
    }
    if ((int)v6 >= (signed __int32)*(_DWORD*)GameData_21d9988) {
      v15 = v14;
    }
    else {
      v15 = *(_DWORD*)GameData_21d9988;
    }
    while (1) {
      v16 = (unsigned int)(v13 + v12) >> 1;
      v17 = *(_DWORD*)(GameData_21d9988 + 4LL * v16);
      if (v15 == v17) {
        break;
      }
      if (v15 < v17) {
        LODWORD(v12) = (unsigned int)(v13 + v12) >> 1;
      }
      else {
        v13 = v16 + 1;
      }
      if (v13 >= (int)v12) {
        if (v4 != 0) {
          goto LABEL_32;
        }
        goto LABEL_43;
      }
    }
    v13 = v16 + 1;
    if (v4 == 0) {
      goto LABEL_43;
    }
  }
LABEL_32:
  v18 = *(_QWORD*)(a2 + 24);
  if (v18 != 0) {
    v19 = *(unsigned __int8*)(v4 + 48);
    v20 = a2 + 24;
    do {
      v21 = *(unsigned __int8*)(v18 + 26);
      v22 = v21 >= v19;
      if (v21 >= v19) {
        v23 = 0;
      }
      else {
        v23 = 8;
      }
      if (v22) {
        v20 = v18;
      }
      v18 = *(_QWORD*)(v18 + v23);
    } while (v18 != 0);
    if (v20 != a2 + 24 && v19 >= *(unsigned __int8*)(v20 + 26)) {
      v24 = *(_WORD*)(v20 + 28) & 0xFFF;
      goto LABEL_44;
    }
  }
LABEL_43:
  v24 = 0;
LABEL_44:
  v35[0] = *(_QWORD*)(a3 + 392);
  v35[1] = a3;
  v26 = GameRoutine_932040_alt1(a2, (__int64)v35);
  v35[0] = *(_QWORD*)(a3 + 392);
  v35[1] = a3;
  v27 = GameRoutine_932240_alt1(a2, (__int64)v35);
  v28 = ui_LayoutAccessor_FindPane_alt1(v5, (__int64)"Icon");
  if (v28 != 0) {
    v28 = __dynamic_cast(v28, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1842180_alt1(v28, v13);
  LayoutAccessor_1560070((void*)(&v33_.v33), v5, (__int64)"L_Gauge");
  v29 = 0x1.0000000000000p+0f;
  if (v27 >= 1) {
    v30 = v27 - v26;
    if (v27 != v26) {
      if (v24 <= v26) {
        v31 = v26;
      }
      else {
        v31 = v24;
      }
      v32 = v31 - v26;
      if (v30 < v32) {
        v32 = v27 - v26;
      }
      v29 = (float)v32 / (float)v30;
    }
  }
  GameRoutine_174d580_alt1(&v33_.v33, "GaugeUp", 7, v29);
  result = v33_.v34;
  if (v33_.v34 != 0) {
    return std___1___shared_weak_count___release_weak(v33_.v34);
  }
  return result;
}

_WORD* game_gameui_Util_GetMorphRage(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD* result;
  __int64 v5;
  bool v6;
  __int64 v7;
  void* v8;
  void** v9;
  _WORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[4];
  _QWORD* v20;
  __int64 v21;

  result = &GameData_1b47d74;
  if (a1 != 0 && a2 != 0) {
    v5 = *(_QWORD*)(a1 + 440);
    v21 = 0;
    if (v5 != 0) {
      v6 = (unsigned int)*(unsigned __int8*)(v5 + 16) - 1 >= 2;
      v7 = 288;
      if (!v6) {
        v7 = 384;
      }
    }
    else {
      v7 = 288;
    }
    v9 = (void**)(*(_QWORD*)(a2 + 24) + v7 + 32);
    v8 = *v9;
    v10 = (int)((unsigned __int64)((_BYTE*)v9[1] - (_BYTE*)*v9) >> 2) <= 0
              ? &GameData_1b47d74
              : v8;
    if ((*v10 & 0xFFF) != 0) {
      v11 = v19;
      v19[0] = GameData_204d988;
      v19[1] = v10;
      v20 = v19;
      v19[2] = &v21;
      if ((*(_BYTE*)(a1 + 1536) & 0x40) != 0) {
        v12 = *(_QWORD*)(a1 + 1496);
        v13 = *(_QWORD*)(a1 + 1488);
        if ((int)((unsigned __int64)(v12 - v13) >> 2) < 1) {
          v11 = v19;
        }
        else {
          v14 = 0;
          v15 = 0;
          v16 = GameData_212c880[0];
          v17 = *GameData_212c880[0];
          do {
            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v17 + 64) +
                                     8LL * (*(_DWORD*)(v13 + v14) & 0xFFF)) +
                          104LL) == 6) {
              if (v20 == nullptr) {
                GameRoutine_60a310(0, a2);
              }
              (*(void (**)(_QWORD*, __int64))(*v20 + 48LL))(v20, v13 + v14);
              v17 = *v16;
              v12 = *(_QWORD*)(a1 + 1496);
              v13 = *(_QWORD*)(a1 + 1488);
            }
            ++v15;
            v14 += 4;
          } while (v15 < (int)((unsigned __int64)(v12 - v13) >> 2));
          v11 = v20;
          if (v20 != v19) {
            if (v20 != nullptr) {
              v18 = 40;
            LABEL_24:
              (*(void (**)(_QWORD*, __int64, __int64))(*v11 + v18))(v11, a2,
                                                                    a3);
            }
            if (v21 != 0) {
              return (_WORD*)v21;
            }
            else {
              return v10;
            }
          }
        }
      }
      v18 = 32;
      goto LABEL_24;
    }
  }
  return result;
}

bool Util_1584ac0(__int64 a1, unsigned __int8** a2)
{
  _BOOL8 result;
  unsigned __int8* v4;
  unsigned __int8* v5;
  unsigned int v6;
  atomic_uchar* v7;
  __int64* v8;
  unsigned int v9;
  unsigned __int8 v10;
  unsigned __int8 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  char* v30;
  __int64 v31;
  __int64* v32;
  int v34;
  __int64 v35;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int8* v45;
  char v46;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  result = false;
  if (a1 != 0 && a2 != nullptr) {
    v4 = *a2;
    v5 = a2[1];
    if (*a2 == v5) {
      v42 = 0;
    }
    else {
      v6 = 0;
      v7 = (atomic_uchar*)GameData_2131900;
      v8 = GameData_21318f8;
      v45 = *a2;
      do {
        while (v6 > 1) {
          v4 += 2;
          v6 = 2;
          if (v4 == v5) {
            return *a2 != a2[1];
          }
        }
        v9 = v6;
        v10 = *v4;
        v11 = v4[1];
        v12 = (*(__int64 (**)(__int64, char*, __int64))(*(_QWORD*)a1 + 120LL))(
            a1, GameData_204d230[v6], 1),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v12 != 0) {
          v19 = v12;
          *(_BYTE*)(v12 + 88) |= 1u;
          v20 = game_util_Format_alt1((__int64)"IconMastery%02d", v9, v13, v14,
                                      v15, v16, v17, v18, (char)v45),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v27 = (*(__int64 (**)(__int64, char*, __int64))(*(_QWORD*)v19 +
                                                          120LL))(v19, v20, 1),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if ((atomic_load_explicit(v7, memory_order_acquire) & 1) == 0 &&
              (unsigned int)__cxa_guard_acquire(v7) != 0) {
            *v8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            __cxa_guard_release(v7),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v18 =
                    COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          if (v27 != 0) {
            v28 =
                (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            if (v28 == v8) {
              goto LABEL_17;
            }
            do {
              v28 = (__int64*)*v28;
            } while (v28 != v8 && v28 != nullptr);
            if (v28 != nullptr) {
            LABEL_17:
              GameRoutine_1841190_alt1(v27, v10),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v15 = COERCE_AS(
                      __typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v16 = COERCE_AS(
                      __typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v18 = COERCE_AS(
                      __typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v22 = COERCE_AS(
                      __typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v24 = COERCE_AS(
                      __typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v25 = COERCE_AS(
                      __typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v26 = COERCE_AS(
                      __typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
          }
          v30 = game_util_Format_alt1((__int64)"IconMasteryLevel%02d", v9, v21,
                                      v22, v23, v24, v25, v26, v46),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v31 = (*(__int64 (**)(__int64, char*, __int64))(*(_QWORD*)v19 +
                                                          120LL))(v19, v30, 1),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if ((atomic_load_explicit(v7, memory_order_acquire) & 1) == 0 &&
              (unsigned int)__cxa_guard_acquire(v7) != 0) {
            *v8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            __cxa_guard_release(v7),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v18 =
                    COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          if (v31 != 0) {
            v32 =
                (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            if (v32 == v8) {
              goto LABEL_27;
            }
            do {
              v32 = (__int64*)*v32;
            } while (v32 != v8 && v32 != nullptr);
            if (v32 != nullptr) {
            LABEL_27:
              v34 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
              v35 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v31 + 88LL))(
                  v31, 0),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              if (v35 != 0) {
                *(_DWORD*)(v35 + 12) = v34;
              }
              GameRoutine_1841470_alt1(v31, v11),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v15 = COERCE_AS(
                      __typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v16 = COERCE_AS(
                      __typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v18 = COERCE_AS(
                      __typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v22 = COERCE_AS(
                      __typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v24 = COERCE_AS(
                      __typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v25 = COERCE_AS(
                      __typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v26 = COERCE_AS(
                      __typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
          }
        }
        v6 = v9 + 1;
        v4 += 2;
      } while (v4 != v5);
      if (v9 != 0) {
        return *a2 != a2[1];
      }
      v4 = v45;
      v42 = 1;
    }
    v43 = (*(__int64 (**)(__int64, char*, __int64))(*(_QWORD*)a1 + 120LL))(
        a1, GameData_204d230[v42], 1),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v43 != 0) {
      *(_BYTE*)(v43 + 88) &= ~1u;
    }
    if (v4 == v5) {
      v44 = (*(__int64 (**)(__int64, const char*, __int64))(
          *(_QWORD*)a1 + 120LL))(a1, "N_Mastery01", 1),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v44 != 0) {
        *(_BYTE*)(v44 + 88) &= ~1u;
      }
    }
    return *a2 != a2[1];
  }
  return result;
}

__int64 Util_1584ec0(__int64* a1, __int64 a2, unsigned __int8 a3)
{

#pragma clang fp contract(off)
  char* v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  double v28;
  double v30;
  char v33;
  __int64 v34;
  char v35;
  __int64 v36;
  struct {
    __int64* v37;
    unsigned __int64 v38;
    char* v39;
    unsigned __int64 v40;
    int v41;
    int v42;
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
  } v37_;

  LayoutAccessor_155e830((__int64)a1, 1);
  if (*(_WORD*)(a2 + 4) != 0) {
    LayoutAccessor_1562cf0_alt2((__int64)a1, "Default");
    v6 = game_util_Format_alt3("%d", *(_DWORD*)(a2 + 92));
    v7 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Num");
    if (v7 != 0) {
      GameRoutine_156c5d0(v7, (__int64)v6, 0);
    }
    v8 = "MID_Menu_Stock";
  LABEL_5:
    v37_.v43 = -1;
    v37_.v44 = -1;
    v37_.v45 = -1;
    v37_.v46 = -1;
    v9 = *msg_MessageManager_instance__ptr[0];
    v37_.v47 = -1;
    v37_.v48 = -1;
    v37_.v49 = -1;
    v37_.v50 = -1;
    v37_.v51 = -1;
    v37_.v52 = -1;
    v37_.v53 = -1;
    v37_.v54 = -1;
    v37_.v37 = GameData_212e348 + 2;
    v37_.v38 = 0xFFFF0001FFFF0000LL;
    v37_.v39 = (char*)0xFFFF0004FFFF0002LL;
    v37_.v40 = 0xFFFF0006FFFF0005LL;
    v37_.v55 = 8;
    v37_.v41 = -65529;
    v37_.v42 = -65528;
    v10 = GameRoutine_a4dbe0_alt2(v9, v8, 0);
    if (v10 != nullptr) {
      v11 = (__int64)v10;
      v12 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
      if (v12 != 0) {
        GameRoutine_156c5d0(v12, v11, 0);
      }
    }
    v13 = 36;
    if ((a3 & ((signed __int32)*(_DWORD*)(a2 + 92) <
               (signed __int32)*(_DWORD*)(a2 + 96))) != 0) {
      v13 = 60;
    }
    v14 = *(_DWORD*)((char*)GameData_212da30 + v13);
    goto LABEL_11;
  }
  if (*(_DWORD*)a2 == 0) {
    LayoutAccessor_1562cf0_alt2((__int64)a1, "Cost");
    v24 = *(_DWORD*)(a2 + 92);
    v35 = 0;
    v36 = GameData_21759e0;
    v34 = 0x200000000LL;
    v33 = 3;
    GameRoutine_17d8560((void*)((__int64*)&v37_.v37), v24, (__int64)&v36, &v33);
    if (((unsigned __int8)v37_.v37 & 1) != 0) {
      v25 = v37_.v39;
    }
    else {
      v25 = (char*)&v37_.v37 + 1;
    }
    if (v25 != nullptr) {
      v26 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Num");
      if (v26 != 0) {
        GameRoutine_156c5d0(v26, (__int64)v25, 0);
      }
    }
    if (((unsigned __int8)v37_.v37 & 1) != 0 && v37_.v39 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v37_.v39);
    }
    v8 = "MID_Menu_StockGold";
    goto LABEL_5;
  }
  if (*(_DWORD*)a2 != 1) {
    goto LABEL_38;
  }
  if ((signed __int32)*(_DWORD*)(a2 + 92) >=
      (signed __int32)*(_DWORD*)(a2 + 96)) {
    LayoutAccessor_155e830((__int64)a1, 0);
    goto LABEL_38;
  }
  LayoutAccessor_1562cf0_alt2((__int64)a1, "Cost");
  v17 = game_util_Format_alt3("%d", *(_DWORD*)(a2 + 92));
  v18 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Num");
  if (v18 != 0) {
    GameRoutine_156c5d0(v18, (__int64)v17, 0);
  }
  v37_.v43 = -1;
  v37_.v44 = -1;
  v37_.v45 = -1;
  v37_.v46 = -1;
  v19 = *msg_MessageManager_instance__ptr[0];
  v37_.v47 = -1;
  v37_.v48 = -1;
  v37_.v49 = -1;
  v37_.v50 = -1;
  v37_.v51 = -1;
  v37_.v52 = -1;
  v37_.v53 = -1;
  v37_.v54 = -1;
  v37_.v37 = GameData_212e348 + 2;
  v37_.v38 = 0xFFFF0001FFFF0000LL;
  v37_.v39 = (char*)0xFFFF0004FFFF0002LL;
  v37_.v40 = 0xFFFF0006FFFF0005LL;
  v37_.v55 = 8;
  v37_.v41 = -65529;
  v37_.v42 = -65528;
  v20 = GameRoutine_a4dbe0_alt2(v19, "MID_Sys_NowLv", 0);
  if (v20 != nullptr) {
    v21 = (__int64)v20;
    v22 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
    if (v22 != 0) {
      GameRoutine_156c5d0(v22, v21, 0);
    }
  }
  v23 = 36;
  if ((a3 & 1) != 0) {
    v23 = 60;
  }
  v14 = *(_DWORD*)((char*)GameData_212da30 + v23);
LABEL_11:
  v15 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Num");
  if (v15 != 0) {
    v16 = Pane_58f8a0(v15);
    if (v16 != 0) {
      *(_DWORD*)(v16 + 12) = v14;
    }
  }
LABEL_38:
  v28 = ui_LayoutAccessor_GetTextSize(a1, (__int64)"T_Num");
  ui_LayoutAccessor_SetPaneSize_alt3((__int64)a1, (__int64)"T_Num",
                                     *(float*)&v28);
  v30 = ui_LayoutAccessor_GetTextSize(a1, (__int64)"T_Txt");
  ui_LayoutAccessor_SetPaneSize_alt3((__int64)a1, (__int64)"T_Txt",
                                     *(float*)&v30);
  return GameRoutine_1585290_alt2(a1, (__int64)"A_Info",
                                  (__int64)&GameData_1ac6c8b);
}

__int64 Util_1585690(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
  __int64 result;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  char v21;
  __int64 v22;
  __int64 v23;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v9 = *(__int64**)a1;
      v10 = result;
      if (v9 != nullptr) {
        if (a2[1] == *a2) {
          result = LayoutAccessor_155e830_alt2(v9, 0);
        }
        else {
          LayoutAccessor_155e830_alt2(v9, 1);
          LayoutAccessor_1560070((void*)(&v22), v9, (__int64)"L_ItemList");
          if (v23 != 0) {
            v11 = std___1___shared_weak_count_lock(v23);
            if (v11 != 0) {
              v12 = v11;
              if (v22 != 0) {
                Util_1586140_alt1(v22, a2);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
                std___1___shared_weak_count___release_weak(v12);
              }
            }
            if (v23 != 0) {
              std___1___shared_weak_count___release_weak(v23);
            }
          }
          result = ui_LayoutAccessor_FindPane(v9, &GameData_1ac6c8b);
          if (result != 0) {
            v13 = result;
            v14 = ui_LayoutAccessor_FindPane(v9, "L_ItemList");
            v15 = GameRoutine_156c160(v14);
            v17 = v16;
            v18 = Pane_58fac0(v13, "Margin_Width");
            if (v18 != 0) {
              v19 = (float)(2 * *(_DWORD*)(v18 + *(unsigned int*)(v18 + 4)));
            }
            else {
              v19 = 0x1.9000000000000p+6f;
            }
            result = Pane_58fac0(v13, "Margin_Height");
            if (result != 0) {
              v20 = (float)(2 *
                            *(_DWORD*)(result + *(unsigned int*)(result + 4)));
            }
            else {
              v20 = 0x1.9000000000000p+6f;
            }
            v21 = *(_BYTE*)(v13 + 88);
            *(float*)(v13 + 80) = v15 + v19;
            *(float*)(v13 + 84) = v17 + v20;
            *(_BYTE*)(v13 + 88) = v21 | 0x10;
          }
          if (a4 != 0) {
            result = LayoutAccessor_1562060(v9, "T_Txt", a3);
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        return std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  return result;
}

__int64 Util_1586140(__int64* a1, __int64* a2)
{
  int v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  _QWORD* v9;
  __int64 v10;
  char v11;
  char* v12;
  _QWORD* v13;
  __int64 v14;
  char v15;
  char* v16;
  _QWORD* v17;
  __int64 v18;
  char v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  _DWORD* v33;
  int v34;
  int v35;
  int v36;
  int* v37;
  int v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char v48;
  __int64 v49;
  char v50;
  __int64 v51;
  struct {
    __int64 v52[2];
    char* v53;
    unsigned __int64 v54;
    int v55;
    int v56;
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
    __int64 v69;
  } v52_;

  v3 = -1227133513 * ((a2[1] - *a2) >> 4);
  if (v3 == 0) {
    return LayoutAccessor_155e830((__int64)a1, 0);
  }
  if (v3 > 3) {
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, (__int64)"A_Center", 0);
    v21 = ui_LayoutAccessor_FindAlignment_alt1(a1, (__int64)"A_Left");
    if (v21 != 0) {
      Alignment_56b600_alt1(v21);
    }
    v22 = ui_LayoutAccessor_FindAlignment_alt1(a1, (__int64)"A_Right");
    if (v22 != 0) {
      Alignment_56b600_alt1(v22);
    }
  }
  else {
    v5 = ui_LayoutAccessor_FindAlignment_alt1(a1, (__int64)"A_Center");
    if (v5 != 0) {
      Alignment_56b600_alt1(v5);
    }
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, (__int64)"A_Left", 0);
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, (__int64)"A_Right", 0);
    v6 = ui_LayoutAccessor_FindPane_alt1(a1, (__int64)"A_Center");
    if (v6 != 0) {
      v7 = v6;
      v8 = game_util_Format_alt2((__int64)"L_Item%02d", 0);
      v9 = (_QWORD*)ui_LayoutAccessor_FindPane_alt1(a1, (__int64)v8);
      if (v9 != nullptr) {
        v10 = (__int64)v9;
        Pane_58df60(v9[3], v9);
        Pane_58dee0(v7, v10);
        v11 = *(_BYTE*)(v10 + 88);
        *(_QWORD*)(v10 + 48) = 0;
        *(_DWORD*)(v10 + 56) = 0;
        *(_BYTE*)(v10 + 88) = v11 | 0x10;
      }
      v12 = game_util_Format_alt2((__int64)"L_Item%02d", 1);
      v13 = (_QWORD*)ui_LayoutAccessor_FindPane_alt1(a1, (__int64)v12);
      if (v13 != nullptr) {
        v14 = (__int64)v13;
        Pane_58df60(v13[3], v13);
        Pane_58dee0(v7, v14);
        v15 = *(_BYTE*)(v14 + 88);
        *(_QWORD*)(v14 + 48) = 0;
        *(_DWORD*)(v14 + 56) = 0;
        *(_BYTE*)(v14 + 88) = v15 | 0x10;
      }
      v16 = game_util_Format_alt2((__int64)"L_Item%02d", 2);
      v17 = (_QWORD*)ui_LayoutAccessor_FindPane_alt1(a1, (__int64)v16);
      if (v17 != nullptr) {
        v18 = (__int64)v17;
        Pane_58df60(v17[3], v17);
        Pane_58dee0(v7, v18);
        v19 = *(_BYTE*)(v18 + 88);
        *(_QWORD*)(v18 + 48) = 0;
        *(_DWORD*)(v18 + 56) = 0;
        *(_BYTE*)(v18 + 88) = v19 | 0x10;
      }
    }
  }
  v23 = 0;
  v24 = 0;
  if (v3 <= 10) {
    v25 = 1120;
  }
  else {
    v25 = 1008;
  }
  do {
    v26 = game_util_Format_alt2((__int64)"L_Item%02d", v24);
    v27 = LayoutAccessor_155fbe0_alt1(a1, v26);
    LayoutAccessor_155e830((__int64)v27, v24 < v3);
    if (v24 < v3) {
      GameRoutine_157a1e0_alt1(v27, (unsigned int*)(*a2 + v23),
                               *(_BYTE*)(*a2 + v23 + 104),
                               *(_BYTE*)(*a2 + v23 + 105), 1, 0, 0);
    }
    ++v24;
    v23 += 112;
  } while (v25 != v23);
  if (v3 > 10) {
    v28 = LayoutAccessor_155fbe0_alt1(a1, "L_Item09");
    LayoutAccessor_155e830((__int64)v28, 1);
    v29 = *a2;
    v30 = ((_BYTE)v3 - 9) & 7;
    if ((unsigned __int64)(v3 & 0x7FFFFFFF) - 10 >= 7) {
      v33 = (_DWORD*)(v29 + 1100);
      v32 = 0;
      v31 = 9;
      do {
        v31 += 8;
        v34 = v33[196];
        v35 = v33[140] + v33[112] + v33[84] + v33[56] + v33[28] + *v33 + v32;
        v36 = v33[168];
        v33 += 224;
        v32 = v34 + v36 + v35;
      } while (v31 - (((v3 & 0x7FFFFFFF) - 9LL) & 0xFFFFFFFFFFFFFFF8LL) != 9);
    }
    else {
      v31 = 9;
      v32 = 0;
    }
    if ((((_BYTE)v3 - 9) & 7) != 0) {
      v37 = (int*)(v29 + 112 * v31 + 92);
      do {
        v38 = *v37;
        v37 += 28;
        --v30;
        v32 += v38;
      } while (v30 != 0);
    }
    LayoutAccessor_1562cf0_alt2((__int64)v28, "Other");
    v52_.v57 = -1;
    v52_.v58 = -1;
    v52_.v59 = -1;
    v52_.v60 = -1;
    v39 = *msg_MessageManager_instance__ptr[0];
    v52_.v61 = -1;
    v52_.v62 = -1;
    v52_.v63 = -1;
    v52_.v64 = -1;
    v52_.v65 = -1;
    v52_.v66 = -1;
    v52_.v67 = -1;
    v52_.v68 = -1;
    v52_.v52[0] = (__int64)(GameData_212e348 + 2);
    v52_.v52[1] = 0xFFFF0001FFFF0000LL;
    v52_.v53 = (char*)0xFFFF0004FFFF0002LL;
    v52_.v54 = 0xFFFF0006FFFF0005LL;
    v52_.v69 = 8;
    v52_.v55 = -65529;
    v52_.v56 = -65528;
    v40 = GameRoutine_a4dbe0(v39, "MID_Shop_Item_Other", 0);
    if (v40 != nullptr) {
      v41 = (__int64)v40;
      v42 = ui_LayoutAccessor_FindTextBox(v28, (__int64)"T_Txt");
      if (v42 != 0) {
        GameRoutine_156c5d0(v42, v41, 0);
      }
    }
    v50 = 0;
    v51 = GameData_21759e0;
    v49 = 0x200000000LL;
    v48 = 2;
    GameRoutine_17d8560((void*)(v52_.v52), v32, (__int64)&v51, &v48);
    if ((v52_.v52[0] & 1) != 0) {
      v43 = v52_.v53;
    }
    else {
      v43 = (char*)v52_.v52 + 1;
    }
    if (v43 != nullptr) {
      v44 = ui_LayoutAccessor_FindTextBox(v28, (__int64)"T_Num");
      if (v44 != 0) {
        GameRoutine_156c5d0(v44, (__int64)v43, 0);
      }
    }
    if ((v52_.v52[0] & 1) != 0 && v52_.v53 != nullptr) {
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, (__int64)v52_.v53);
    }
    v46 = ui_LayoutAccessor_FindAlignment_alt1(v28, (__int64)"A_Num");
    if (v46 != 0) {
      Alignment_56b600_alt1(v46);
    }
  }
  result = a1[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v47 = result;
      result = *a1;
      if (*a1 != 0) {
        result = ControlCreator_13633c0_alt2(result);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
        return std___1___shared_weak_count___release_weak_alt2(v47);
      }
    }
  }
  return result;
}

__int64 Util_1586840(__int64* a1, char a2)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  _BYTE v10[32];
  _QWORD v11[4];
  int v12;
  int v13;
  char v14;

  v14 = a2;
  v13 = 0;
  v12 = 0;
  v11[0] = &v12;
  v11[1] = a1;
  v11[2] = &v14;
  v11[3] = &v13;
  GameRoutine_15869e0(v11, 0);
  GameRoutine_15869e0(v11, 1);
  v3 = v12;
  if (v12 <= 24) {
    do {
      sprintf(v10, "L_Unit%02d", v3);
      LayoutAccessor_1560070((void*)(&v8), a1, (__int64)v10);
      if (v9 != 0) {
        v4 = std___1___shared_weak_count_lock(v9);
        if (v4 != 0) {
          v5 = v4;
          if (v8 != 0) {
            LayoutAccessor_155e830_alt2(v8, 0);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            std___1___shared_weak_count___release_weak(v5);
            v6 = v9;
            if (v9 == 0) {
              goto LABEL_3;
            }
          LABEL_10:
            std___1___shared_weak_count___release_weak(v6);
            goto LABEL_3;
          }
        }
        v6 = v9;
        if (v9 != 0) {
          goto LABEL_10;
        }
      }
    LABEL_3:
      ++v3;
    } while (v3 != 25);
  }
  sprintf(v10, "A_Unit%02d", 0);
  if (ui_LayoutAccessor_FindAlignment(a1, v10) != 0) {
    Alignment_56b600();
  }
  sprintf(v10, "A_Unit%02d", 1);
  if (ui_LayoutAccessor_FindAlignment(a1, v10) != 0) {
    Alignment_56b600();
  }
  sprintf(v10, "A_Unit%02d", 2);
  result = ui_LayoutAccessor_FindAlignment(a1, v10);
  if (result != 0) {
    return Alignment_56b600();
  }
  return result;
}

__int64* game_gameui_Util_SetBasicStatusForUnitInfo(__int64* result, __int64 a2)
{
  __int64* v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v7[2];
  struct {
    __int64 v8;
    __int64* v9;
  } v8_;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  __int64 v12;
  __int64 v13;

  v13 = a2;
  if (a2 == 0) {
    return result;
  }
  v2 = result;
  v12 = 0;
  v10_.v10[0] = GameData_204dd88;
  v10_.v10[1] = &v13;
  v10_.v11 = v10_.v10;
  v10_.v10[2] = (char*)&v12 + 4;
  v10_.v10[3] = &v12;
  v3 = GameHr_1586d80(result, (_DWORD*)GameData_2259348,
                      (_DWORD*)GameData_2259350, (__int64)v10_.v10, 1, 0, 1, a2,
                      0, 0, 0);
  if (v10_.v11 == v10_.v10) {
    v4 = 32;
    goto LABEL_6;
  }
  if (v10_.v11 != nullptr) {
    v4 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*v10_.v11 + v4))((__int64)v10_.v11);
  }
  v7[0] = "L_TotalNum";
  v7[1] = 10;
  GameRoutine_15870e0_alt1((void*)(&v8_.v8), v2, v7);
  result = v8_.v9;
  if (v8_.v9 == nullptr) {
    return result;
  }
  v5 = std___1___shared_weak_count_lock_alt1((__int64)v8_.v9);
  v6 = v8_.v8;
  result = v8_.v9;
  if (v8_.v9 != nullptr) {
    result = (__int64*)std___1___shared_weak_count___release_weak_alt2(
        (__int64)v8_.v9);
  }
  if (v5 != 0 && v6 != 0) {
    result = (__int64*)StatusTotal_19ac9e0(v6, v3, SHIDWORD(v12), v12, 1u, -1);
  }
  else if (v5 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return (__int64*)std___1___shared_weak_count___release_weak_alt2(v5);
  }
  return result;
}

__int64 game_gameui_Util_SetStatusForClassChange(__int64 result, _QWORD* a2,
                                                 __int64 a3, char a4, char a5)
{
  __int64 v6;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned int v17;
  const char* v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  __int64 (***v36)();
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  char v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned int v50;
  __int64 v51;
  unsigned int* v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  int v57;
  int v58;
  _QWORD* v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 (***v72)();
  __int64 (**v73)();
  __int64 (***v74)();
  __int64 v75;
  unsigned __int64 v76;
  int v77;
  __int64 v78;
  _QWORD v79[2];
  struct {
    __int64 v80;
    __int64 v81;
  } v80_;
  __int64 v82;
  _QWORD v83[4];
  _QWORD v84[4];
  struct {
    char* v85;
    unsigned __int64 v86;
  } v85_;
  _QWORD v87[3];
  _QWORD v88[3];
  _WORD v89[11];
  struct {
    __int64 v90;
    __int64 v91;
  } v90_;
  struct {
    __int64 v92;
    __int64 v93;
  } v92_;
  char v94;
  struct {
    __int64* v95;
    __int64 v96;
  } v95_;
  __int64 v97;
  _QWORD* v98;
  _QWORD* v99;
  struct {
    __int64 (**v100)();
    __int64** v101;
    char** v102;
    _QWORD** v103;
    __int64 (***v104)();
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
  } v100_;

  v98 = (_QWORD*)a3;
  v99 = a2;
  if (a2 == nullptr) {
    return result;
  }
  v6 = result;
  result = game_Unit_GetJob_alt1((__int64)a2);
  v97 = result;
  if (result == 0) {
    return result;
  }
  result = *(_QWORD*)(v6 + 8);
  v95_.v95 = nullptr;
  v95_.v96 = 0;
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    v95_.v96 = result;
    if (result != 0) {
      v8 = *(__int64**)v6;
      v95_.v95 = v8;
      if (v8 != nullptr) {
        LayoutAccessor_1562cf0_alt2((__int64)v8, "Default");
        v85_.v85 = "L_Class";
        v85_.v86 = 7;
        GameRoutine_fa73c0((void*)(&v100_.v100), v8, &v85_.v85);
        if (v100_.v101 != nullptr) {
          v9 = std___1___shared_weak_count_lock_alt1((__int64)v100_.v101);
          v10 = (__int64*)v100_.v100;
          if (v100_.v101 != nullptr) {
            std___1___shared_weak_count___release_weak_alt2(
                (__int64)v100_.v101);
          }
          if (v9 != 0 && v10 != nullptr) {
            StatusClass_189d120(v10, v99, 1, 1, 0, 0, 1);
          }
          else if (v9 == 0) {
            goto LABEL_15;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            std___1___shared_weak_count___release_weak_alt2(v9);
          }
        }
      LABEL_15:
        v85_.v85 = "L_JobIcon";
        v85_.v86 = 9;
        GameRoutine_1587740((void*)(&v100_.v100), v95_.v95, &v85_.v85);
        if (v100_.v101 == nullptr) {
          goto LABEL_24;
        }
        v11 = std___1___shared_weak_count_lock_alt1((__int64)v100_.v101);
        v12 = (__int64)v100_.v100;
        if (v100_.v101 != nullptr) {
          std___1___shared_weak_count___release_weak_alt2((__int64)v100_.v101);
        }
        if (v11 != 0 && v12 != 0) {
          v13 = v99;
          v14 = v97;
          *(_BYTE*)(v12 + 1109) = 0;
          *(_BYTE*)(v12 + 1106) = 1;
          *(_WORD*)(v12 + 1104) = 1;
          JobIcon_19a9be0(v12, (__int64)v13, v14);
        }
        else if (v11 == 0) {
          goto LABEL_24;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak_alt2(v11);
        }
      LABEL_24:
        v15 = v95_.v95;
        if (v99 == nullptr) {
          goto LABEL_31;
        }
        v16 = v99[49];
        if (v16 == 0 || v97 != GameData_21c9988) {
          goto LABEL_31;
        }
        if (*(_QWORD*)(*(_QWORD*)(v16 + 24) + 1784LL) != 0) {
          v16 = *(_QWORD*)(*(_QWORD*)(v16 + 24) + 1784LL);
        }
        v17 = *(unsigned __int8*)(v16 + 52) - 1;
        if (v17 < 3) {
          v18 = GameData_204f080[(unsigned __int8)v17];
        }
        else {
        LABEL_31:
          v18 = *(const char**)(v97 + 40);
          if (v18 == nullptr) {
            goto LABEL_35;
          }
        }
        v100_.v105 = -1;
        v100_.v106 = -1;
        v100_.v107 = -1;
        v100_.v108 = -1;
        v19 = *msg_MessageManager_instance__ptr[0];
        v100_.v109 = -1;
        v100_.v110 = -1;
        v100_.v111 = -1;
        v100_.v112 = -1;
        v100_.v113 = -1;
        v100_.v114 = -1;
        v100_.v115 = -1;
        v100_.v116 = -1;
        v100_.v100 = msg_TagSelector_vtable;
        v100_.v101 = (__int64**)0xFFFF0001FFFF0000LL;
        v100_.v102 = (char**)0xFFFF0004FFFF0002LL;
        v100_.v103 = (_QWORD**)0xFFFF0006FFFF0005LL;
        v100_.v117 = 8;
        v100_.v104 = (__int64 (***)(void))0xFFFF0008FFFF0007LL;
        v20 = GameRoutine_a4dbe0_alt2(v19, v18, 0);
        if (v20 != nullptr) {
          v21 = (__int64)v20;
          v22 = ui_LayoutAccessor_FindTextBox(v15, (__int64)"T_Message");
          if (v22 != 0) {
            GameRoutine_156c5d0(v22, v21, 0);
          }
        }
      LABEL_35:
        v100_.v100 = GameData_204de08;
        v100_.v101 = &v95_.v95;
        v100_.v104 = &v100_.v100;
        v100_.v102 = (char**)&v97;
        v100_.v103 = &v99;
        GameRoutine_156d580((__int64)&v100_.v100);
        if (v100_.v104 == &v100_.v100) {
          v23 = 4;
        }
        else {
          if (v100_.v104 == nullptr) {
            goto LABEL_40;
          }
          v23 = 5;
        }
        ((__int64 (*)(__int64))(*v100_.v104)[v23])((__int64)v100_.v104);
      LABEL_40:
        v24 = v95_.v95;
        v25 = game_Unit_GetJob_alt1((__int64)v99);
        game_gameui_Util_SetSkillExpBonus(v24, v25);
        v26 = v99;
        v27 = v95_.v95;
        v85_.v85 = game_util_Format_alt3("L_ClassSkillItem%02d", 0);
        v85_.v86 = strlen_alt1(v85_.v85);
        GameRoutine_15883c0_alt2((void*)(&v100_.v100), v27, &v85_.v85);
        if (v100_.v101 != nullptr) {
          v28 = std___1___shared_weak_count_lock_alt1((__int64)v100_.v101);
          v29 = (__int64*)v100_.v100;
          if (v100_.v101 != nullptr) {
            std___1___shared_weak_count___release_weak_alt2(
                (__int64)v100_.v101);
          }
          if (v28 != 0 && v29 != nullptr) {
            GameHr_18b3670_alt1(v29, (unsigned int*)GameData_212c8a8, v99, 1);
          }
          else if (v28 == 0) {
            goto LABEL_49;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
            std___1___shared_weak_count___release_weak_alt2(v28);
          }
        }
      LABEL_49:
        v30 = v95_.v95;
        v85_.v85 = game_util_Format_alt3("L_ClassSkillItem%02d", 1);
        v85_.v86 = strlen_alt1(v85_.v85);
        GameRoutine_15883c0_alt2((void*)(&v100_.v100), v30, &v85_.v85);
        if (v100_.v101 != nullptr) {
          v31 = std___1___shared_weak_count_lock_alt1((__int64)v100_.v101);
          v32 = (__int64*)v100_.v100;
          if (v100_.v101 != nullptr) {
            std___1___shared_weak_count___release_weak_alt2(
                (__int64)v100_.v101);
          }
          if (v31 != 0 && v32 != nullptr) {
            GameHr_18b3670_alt1(v32, (unsigned int*)GameData_212c8a8, v99, 1);
          }
          else if (v31 == 0) {
            goto LABEL_58;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
            std___1___shared_weak_count___release_weak_alt2(v31);
          }
        }
      LABEL_58:
        v33 = v95_.v95;
        v85_.v85 = game_util_Format_alt3("L_ClassSkillItem%02d", 2);
        v85_.v86 = strlen_alt1(v85_.v85);
        GameRoutine_15883c0_alt2((void*)(&v100_.v100), v33, &v85_.v85);
        if (v100_.v101 != nullptr) {
          v34 = std___1___shared_weak_count_lock_alt1((__int64)v100_.v101);
          v35 = (__int64*)v100_.v100;
          if (v100_.v101 != nullptr) {
            std___1___shared_weak_count___release_weak_alt2(
                (__int64)v100_.v101);
          }
          if (v34 != 0 && v35 != nullptr) {
            GameHr_18b3670_alt1(v35, (unsigned int*)GameData_212c8a8, v99, 1);
          }
          else if (v34 == 0) {
            goto LABEL_67;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
            std___1___shared_weak_count___release_weak_alt2(v34);
          }
        }
      LABEL_67:
        v36 = &v100_.v100;
        LODWORD(v85_.v85) = 0;
        v100_.v100 = GameData_204de88;
        v100_.v101 = &v95_.v95;
        v100_.v104 = &v100_.v100;
        v100_.v102 = &v85_.v85;
        v100_.v103 = &v99;
        if ((*((_BYTE*)v26 + 1825) & 8) != 0) {
          v37 = v26[223];
          v38 = v26[222];
          if ((int)((unsigned __int64)(v37 - v38) >> 2) < 1) {
            v36 = &v100_.v100;
          }
          else {
            v39 = 0;
            v40 = 0;
            v41 = GameData_212c880[0];
            v42 = *GameData_212c880[0];
            do {
              if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v42 + 64) +
                                       8LL * (*(_DWORD*)(v38 + v39) & 0xFFF)) +
                            104LL) == 11) {
                if (v100_.v104 == nullptr) {
                  GameRoutine_60a310_alt1();
                }
                ((void (*)(__int64 (***)(void), __int64))(*v100_.v104)[6])(
                    v100_.v104, v38 + v39);
                v42 = *v41;
                v37 = v26[223];
                v38 = v26[222];
              }
              ++v40;
              v39 += 4;
            } while (v40 < (int)((unsigned __int64)(v37 - v38) >> 2));
            v36 = v100_.v104;
            if (v100_.v104 != &v100_.v100) {
              if (v100_.v104 != nullptr) {
                v43 = 5;
              LABEL_80:
                ((__int64 (*)(__int64))(*v36)[v43])((__int64)v36);
              }
              v85_.v85 = "L_MasterSkill";
              v85_.v86 = 13;
              GameRoutine_15883c0_alt2((void*)(&v100_.v100), v95_.v95,
                                       &v85_.v85);
              if (v100_.v101 == nullptr) {
                goto LABEL_102;
              }
              v44 = std___1___shared_weak_count_lock_alt1((__int64)v100_.v101);
              v45 = (__int64*)v100_.v100;
              if (v100_.v101 != nullptr) {
                std___1___shared_weak_count___release_weak_alt2(
                    (__int64)v100_.v101);
              }
              if (v44 != 0 && v45 != nullptr) {
                if ((a5 & 1) != 0) {
                  v46 = 1;
                }
                else {
                  if (v97 != 0) {
                    v47 = v99[70];
                    v48 = *(_QWORD*)(*(_QWORD*)(v97 + 24) + 1104LL);
                    v49 = *(unsigned __int16*)(v48 + 16);
                    if (v49 >= (v99[71] - v47) >> 1) {
                      v50 = 0;
                    }
                    else {
                      v50 = *(_WORD*)(v47 + 2 * v49) & 0x3FF;
                    }
                  }
                  else {
                    v50 = 0;
                    v48 = (*(_UNKNOWN*)0x450LL);
                  }
                  v46 = v50 >= *(unsigned __int16*)(v48 + 412);
                }
                v51 = *(_QWORD*)(game_Unit_GetJob_alt1((__int64)v99) + 24);
                if (*(_QWORD*)(v51 + 800) == *(_QWORD*)(v51 + 808)) {
                  v52 = (unsigned int*)GameData_212c8a8;
                }
                else {
                  v52 = *(unsigned int**)(v51 + 800);
                }
                GameHr_18b3670_alt1(v45, v52, v99, v46);
              }
              else if (v44 == 0) {
                goto LABEL_102;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
                std___1___shared_weak_count___release_weak_alt2(v44);
              }
            LABEL_102:
              if ((a4 & 1) != 0) {
                v53 = *(__int64**)v6;
                v54 = *(_QWORD*)(v6 + 8);
                v79[0] = v53;
                v79[1] = v54;
                if (v54 == 0) {
                  result = game_gameui_Util_SetGrowthRateInfo(
                      (__int64)v79, (__int64)v99, (__int64)v98);
                  goto LABEL_129;
                }
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 16),
                                          1u, memory_order_relaxed);
                game_gameui_Util_SetGrowthRateInfo((__int64)v79, (__int64)v99,
                                                   (__int64)v98);
                result = v54;
                goto LABEL_128;
              }
              v55 = game_Unit_GetJob_alt1((__int64)v99);
              v56 = v98;
              v57 = *(unsigned __int16*)(v55 + 16);
              v58 = *(unsigned __int16*)(game_Unit_GetJob_alt1((__int64)v98) +
                                         16);
              if (v57 == v58) {
                v59 = v56;
              }
              else {
                v59 = v99;
              }
              v94 = v57 == v58;
              LayoutAccessor_1560070_alt1((void*)(&v92_.v92), v95_.v95,
                                          "L_HPGroup");
              LOBYTE(v100_.v100) = 0;
              v60 = game_Unit_GetParam_alt1((__int64)v56);
              LOBYTE(v85_.v85) = 0;
              v61 = game_Unit_GetParamLimit_alt1(v56,
                                                 (unsigned __int8*)&v85_.v85);
              LOBYTE(v100_.v100) = 0;
              v62 = game_Unit_GetParam_alt1((__int64)v99);
              LOBYTE(v100_.v100) = 0;
              v63 = game_Unit_GetParamLimit_alt1(v99,
                                                 (unsigned __int8*)&v100_.v100);
              LayoutAccessor_1587220(&v92_.v92, (__int64)v59, 28, v60, v61, v62,
                                     v63, v57 == v58, 0);
              if (v92_.v93 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v92_.v93);
              }
              LayoutAccessor_1560070_alt1((void*)(&v90_.v90), v95_.v95,
                                          "L_Move");
              LOBYTE(v100_.v100) = 10;
              v64 = game_Unit_GetParam_alt1((__int64)v56);
              LOBYTE(v85_.v85) = 10;
              v65 = game_Unit_GetParamLimit_alt1(v56,
                                                 (unsigned __int8*)&v85_.v85);
              LOBYTE(v100_.v100) = 10;
              v66 = game_Unit_GetParam_alt1((__int64)v99);
              LOBYTE(v100_.v100) = 10;
              v67 = game_Unit_GetParamLimit_alt1(v99,
                                                 (unsigned __int8*)&v100_.v100);
              LayoutAccessor_1587220(&v90_.v90, (__int64)v59, 37, v64, v65, v66,
                                     v67, v57 == v58, 0);
              if (v90_.v91 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v90_.v91);
              }
              game_Unit_GetParams((void*)(v89), (__int64)v99);
              v68 = game_Unit_GetJob_alt1((__int64)v56);
              if (v68 != 0) {
                v69 = v68;
                GameHr_6c2b50((__int64)&v100_.v100);
                if ((GameHr_95f500(1, (__int64)&v100_.v100, (__int64)v56, v69) &
                     1) != 0) {
                  game_Unit_GetParams((void*)(v88), (__int64)&v100_.v100);
                  game_Unit_Destroy_Unit((__int64)&v100_.v100);
                  goto LABEL_118;
                }
                game_Unit_Destroy_Unit((__int64)&v100_.v100);
              }
              v88[0] = GameData_21f4374;
              v88[1] = GameData_21f437c;
              *(_QWORD*)((char*)&v88[1] + 6) =
                  *(__int64*)((char*)&GameData_21f437c + 6);
            LABEL_118:
              GameRoutine_93f040((__int64)&v85_.v85, (__int64)v56, 0);
              GameRoutine_93f040((__int64)v84, (__int64)v56, 2);
              GameRoutine_93f040((__int64)v83, (__int64)v56, 1);
              v70 = game_Unit_GetJob_alt1((__int64)v56);
              if (v70 != 0) {
                v71 = v70;
                GameHr_6c2b50((__int64)&v100_.v100);
                if ((GameHr_95f500(1, (__int64)&v100_.v100, (__int64)v56, v71) &
                     1) != 0) {
                  game_Unit_GetParams((void*)(v87), (__int64)&v100_.v100);
                  game_Unit_Destroy_Unit((__int64)&v100_.v100);
                  goto LABEL_123;
                }
                game_Unit_Destroy_Unit((__int64)&v100_.v100);
              }
              v87[0] = GameData_21f4374;
              v87[1] = GameData_21f437c;
              *(_QWORD*)((char*)&v87[1] + 6) =
                  *(__int64*)((char*)&GameData_21f437c + 6);
            LABEL_123:
              GameRoutine_93eed0(v83);
              GameRoutine_93eed0(v84);
              GameRoutine_93eed0(&v85_.v85);
              LODWORD(v84[0]) = 0;
              LODWORD(v83[0]) = 0;
              v82 = 0;
              v72 = (__int64 (***)(void))fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
              v73 = GameData_204df08;
              v72[8] = (__int64 (**)(void))v84;
              v72[9] = (__int64 (**)(void))v83;
              v74 = v72;
              *v72 = GameData_204df08;
              v72[1] = (__int64 (**)(void))&v95_.v95;
              v72[2] = (__int64 (**)(void))v88;
              v72[3] = (__int64 (**)(void))v89;
              v72[4] = (__int64 (**)(void))&v98;
              v72[5] = (__int64 (**)(void))&v99;
              v72[6] = (__int64 (**)(void))v87;
              v72[7] = (__int64 (**)(void))&v94;
              v72[10] = (__int64 (**)(void))((char*)&v82 + 4);
              v72[11] = (__int64 (**)(void))&v82;
              v75 = GameData_2259348;
              if (GameData_2259350 != GameData_2259348) {
                v76 = 0;
                do {
                  v77 = *(_DWORD*)(v75 + 4 * v76);
                  LODWORD(v85_.v85) = v76;
                  LODWORD(v100_.v100) = v77;
                  ((void (*)(__int64 (***)(void), __int64 (***)(void), char**))(
                      *v74)[6])(v74, &v100_.v100, &v85_.v85);
                  v75 = GameData_2259348;
                  ++v76;
                } while (v76 < (GameData_2259350 - GameData_2259348) >> 2);
                v73 = *v74;
              }
              ((void (*)(__int64 (***)(void)))v73[5])(v74);
              LayoutAccessor_1560070_alt1((void*)(&v80_.v80), v95_.v95,
                                          "L_StatusTotal");
              LayoutAccessor_1587520(&v80_.v80, v84[0], HIDWORD(v82), v83[0],
                                     v82, v94);
              result = v80_.v81;
              if (v80_.v81 == 0) {
                goto LABEL_129;
              }
            LABEL_128:
              result = std___1___shared_weak_count___release_weak_alt2(result);
              goto LABEL_129;
            }
          }
        }
        v43 = 4;
        goto LABEL_80;
      }
    }
  }
LABEL_129:
  v78 = v95_.v96;
  if (v95_.v96 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v95_.v96 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v78 + 16LL))(v78);
    return std___1___shared_weak_count___release_weak_alt2(v78);
  }
  return result;
}

__int64 game_gameui_Util_SetGrowthRateInfo(__int64 result, __int64 a2,
                                           __int64 a3)
{
  __int64 v5;
  __int64* v6;
  int v7;
  bool v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 (***v18)();
  __int64 (**v19)();
  __int64 (***v20)();
  __int64 v21;
  unsigned __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;

  v30 = a3;
  v31 = a2;
  if (a2 != 0) {
    v5 = result;
    result = game_Unit_GetJob(a2);
    if (result != 0) {
      result = *(_QWORD*)(v5 + 8);
      if (result != 0) {
        result = std___1___shared_weak_count_lock(result);
        v29 = result;
        if (result != 0) {
          v6 = *(__int64**)v5;
          v28 = v6;
          if (v6 == nullptr) {
            goto LABEL_19;
          }
          v7 = *(unsigned __int16*)(game_Unit_GetJob(a2) + 16);
          v8 = v7 == *(unsigned __int16*)(game_Unit_GetJob(a3) + 16);
          v9 = v8;
          if (v8) {
            v10 = a3;
          }
          else {
            v10 = a2;
          }
          v27 = v9;
          LayoutAccessor_1560070((void*)(&v25), v6, (__int64)"L_HPGroup");
          v11 = *(_QWORD*)(a3 + 392);
          v12 = *(_QWORD*)(a3 + 400);
          LOBYTE(v33) = 0;
          v13 = GameRoutine_6d5d00(a3, &v33, v11, v12, 1);
          v14 = *(_QWORD*)(a2 + 392);
          v15 = *(_QWORD*)(a2 + 400);
          v16 = v13;
          LOBYTE(v32) = 0;
          v17 = GameRoutine_6d5d00(a2, &v32, v14, v15, 1);
          GameRoutine_1587220(&v25, v10, 28, v16, -1, v17, -1, v9, 1);
          if (v26 != 0) {
            std___1___shared_weak_count___release_weak(v26);
          }
          v18 = (__int64 (***)())fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
          v19 = GameData_204df98;
          v20 = v18;
          *v18 = GameData_204df98;
          v18[1] = (__int64 (**)())&v28;
          v18[2] = (__int64 (**)())&v30;
          v18[3] = (__int64 (**)())&v31;
          v18[4] = (__int64 (**)())&v27;
          v21 = GameData_2259348;
          if (GameData_2259350 != GameData_2259348) {
            v22 = 0;
            do {
              v23 = *(_DWORD*)(v21 + 4 * v22);
              v32 = v22;
              v33 = v23;
              ((void (*)(__int64 (***)(), int*, int*))(*v20)[6])(v20, &v33,
                                                                 &v32);
              v21 = GameData_2259348;
              ++v22;
            } while (v22 < (GameData_2259350 - GameData_2259348) >> 2);
            v19 = *v20;
          }
          ((void (*)(__int64 (***)()))v19[5])(v20);
          result = v29;
          if (v29 != 0) {
          LABEL_19:
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v24 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              return std___1___shared_weak_count___release_weak(v24);
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 Util_1588700(__int64* a1, __int64 a2, __int64 a3)
{
  char* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  unsigned int v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64* v38;
  __int64* v39;
  char* v40;
  char* v41;
  _BYTE* v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  int v46;
  unsigned int v47;
  char* v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  __int64 v54;
  char* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  char* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  char* v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  __int64* v75;
  __int64 v76;
  unsigned int v77;
  int v78;
  int v79;
  char* v80;
  __int64 v81;
  int* v82;
  int v83;
  __int64 v84;
  __int64 v85;
  int v86;
  char* v87;
  __int64 v88;
  int* v89;
  int v90;
  __int64 v91;
  __int64 v92;
  char* v93;
  __int64 v94;
  __int64 v95;
  __int64 v97;
  __int64 v98;
  __int64* v99[2];
  __int64* v100[2];
  _BYTE v101[2232];
  struct {
    __int64* v102;
    __int64 v103;
    unsigned __int64 v104;
    unsigned __int64 v105;
    int v106;
    int v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 v120;
  } v102_;

  GameHr_6c2b50((__int64)v101);
  v98 = a2;
  GameHr_95f500(1, (__int64)v101, a2, a3);
  v6 = game_util_Format_alt3("L_RequiredMastery%02d", 0);
  LayoutAccessor_1560070_alt1((void*)(&v102_.v102), a1, v6);
  if (v102_.v103 != 0) {
    v7 = std___1___shared_weak_count_lock_alt1(v102_.v103);
    v8 = (__int64)v102_.v102;
    if (v102_.v103 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v102_.v103);
    }
    if (v7 != 0 && v8 != 0) {
      LayoutAccessor_155e830(v8, 0);
    }
    else if (v7 == 0) {
      goto LABEL_10;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt2(v7);
    }
  }
LABEL_10:
  v9 = game_util_Format_alt3("L_EssentialMaste%02d", 0);
  LayoutAccessor_1560070_alt1((void*)(&v102_.v102), a1, v9);
  if (v102_.v103 != 0) {
    v10 = std___1___shared_weak_count_lock_alt1(v102_.v103);
    v11 = (__int64)v102_.v102;
    if (v102_.v103 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v102_.v103);
    }
    if (v10 != 0 && v11 != 0) {
      LayoutAccessor_155e830(v11, 0);
    }
    else if (v10 == 0) {
      goto LABEL_19;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt2(v10);
    }
  }
LABEL_19:
  v12 = game_util_Format_alt3("L_RequiredMastery%02d", 1);
  LayoutAccessor_1560070_alt1((void*)(&v102_.v102), a1, v12);
  if (v102_.v103 != 0) {
    v13 = std___1___shared_weak_count_lock_alt1(v102_.v103);
    v14 = (__int64)v102_.v102;
    if (v102_.v103 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v102_.v103);
    }
    if (v13 != 0 && v14 != 0) {
      LayoutAccessor_155e830(v14, 0);
    }
    else if (v13 == 0) {
      goto LABEL_28;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_alt2(v13);
    }
  }
LABEL_28:
  v15 = game_util_Format_alt3("L_EssentialMaste%02d", 1);
  LayoutAccessor_1560070_alt1((void*)(&v102_.v102), a1, v15);
  if (v102_.v103 != 0) {
    v16 = std___1___shared_weak_count_lock_alt1(v102_.v103);
    v17 = (__int64)v102_.v102;
    if (v102_.v103 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v102_.v103);
    }
    if (v16 != 0 && v17 != 0) {
      LayoutAccessor_155e830(v17, 0);
    }
    else if (v16 == 0) {
      goto LABEL_37;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak_alt2(v16);
    }
  }
LABEL_37:
  v18 = game_util_Format_alt3("L_RequiredMastery%02d", 2);
  LayoutAccessor_1560070_alt1((void*)(&v102_.v102), a1, v18);
  if (v102_.v103 != 0) {
    v19 = std___1___shared_weak_count_lock_alt1(v102_.v103);
    v20 = (__int64)v102_.v102;
    if (v102_.v103 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v102_.v103);
    }
    if (v19 != 0 && v20 != 0) {
      LayoutAccessor_155e830(v20, 0);
    }
    else if (v19 == 0) {
      goto LABEL_46;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak_alt2(v19);
    }
  }
LABEL_46:
  v21 = game_util_Format_alt3("L_EssentialMaste%02d", 2);
  LayoutAccessor_1560070_alt1((void*)(&v102_.v102), a1, v21);
  v97 = a3;
  if (v102_.v103 != 0) {
    v22 = std___1___shared_weak_count_lock_alt1(v102_.v103);
    v23 = (__int64)v102_.v102;
    if (v102_.v103 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v102_.v103);
    }
    if (v22 != 0 && v23 != 0) {
      LayoutAccessor_155e830(v23, 0);
      goto LABEL_53;
    }
    if (v22 != 0) {
    LABEL_53:
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak_alt2(v22);
      }
    }
  }
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "N_EssentialMasteryLv", 0);
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "N_RequiredMasteryLv", 0);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  do {
    v27 = game_Unit_GetJob_alt1((__int64)v101);
    v28 = *(unsigned __int8*)(v27 + v24 + 420);
    if (*(_BYTE*)(v27 + v24 + 420) == 0) {
      goto LABEL_58;
    }
    if (v24 !=
            *(unsigned __int8*)(game_Unit_GetJob_alt1((__int64)v101) + 433) &&
        v24 !=
            *(unsigned __int8*)(game_Unit_GetJob_alt1((__int64)v101) + 434) &&
        v24 !=
            *(unsigned __int8*)(game_Unit_GetJob_alt1((__int64)v101) + 435)) {
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "N_EssentialMasteryLv",
                                            1);
      if (v26 > 2) {
        goto LABEL_58;
      }
      v33 = game_util_Format_alt3("L_EssentialMaste%02d", v26);
      LayoutAccessor_1560070_alt1((void*)(&v102_.v102), a1, v33);
      if (v102_.v103 == 0) {
        goto LABEL_92;
      }
      v34 = std___1___shared_weak_count_lock_alt1(v102_.v103);
      v35 = (__int64)v102_.v102;
      if (v34 != 0) {
        v36 = v102_.v102;
      }
      else {
        v36 = nullptr;
      }
      if (v102_.v103 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v102_.v103);
      }
      if (v36 != nullptr) {
        LayoutAccessor_155e830(v35, 1);
        v99[0] = v36;
        v99[1] = (__int64*)v34;
        if (v34 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                                    memory_order_relaxed);
          Util_15892d0_alt2(v99, v24, v28, v98);
          if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
            std___1___shared_weak_count___release_weak_alt2(v34);
          }
          goto LABEL_89;
        }
        Util_15892d0_alt2(v99, v24, v28, v98);
      }
      else if (v34 != 0) {
      LABEL_89:
        if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
          std___1___shared_weak_count___release_weak_alt2(v34);
        }
      }
    LABEL_92:
      ++v26;
      goto LABEL_58;
    }
    ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "N_RequiredMasteryLv",
                                          1);
    if (v25 <= 2) {
      v29 = game_util_Format_alt3("L_RequiredMastery%02d", v25);
      LayoutAccessor_1560070_alt1((void*)(&v102_.v102), a1, v29);
      if (v102_.v103 != 0) {
        v30 = std___1___shared_weak_count_lock_alt1(v102_.v103);
        v31 = (__int64)v102_.v102;
        if (v30 != 0) {
          v32 = v102_.v102;
        }
        else {
          v32 = nullptr;
        }
        if (v102_.v103 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v102_.v103);
        }
        if (v32 != nullptr) {
          LayoutAccessor_155e830(v31, 1);
          v100[0] = v32;
          v100[1] = (__int64*)v30;
          if (v30 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                      memory_order_relaxed);
            Util_15892d0_alt2(v100, v24, v28, v98);
            if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
              std___1___shared_weak_count___release_weak_alt2(v30);
            }
          LABEL_86:
            if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
              std___1___shared_weak_count___release_weak_alt2(v30);
            }
          }
          else {
            Util_15892d0_alt2(v100, v24, v28, v98);
          }
        }
        else if (v30 != 0) {
          goto LABEL_86;
        }
      }
      ++v25;
    }
  LABEL_58:
    ++v24;
  } while (v24 != 13);
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "T_Empty00", v26 == 0);
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)a1, "T_Empty01", v25 == 0);
  v37 = ui_LayoutAccessor_FindAlignment_alt2(a1, "A_RequiredMasteryLv");
  if (v37 != 0) {
    Alignment_56b600_alt1(v37);
  }
  v38 = msg_MessageManager_instance__ptr[0];
  v39 = GameData_212e348;
  v40 = (char*)GameData_212da30;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v41 = "TrialJobSelect_Part3";
    goto LABEL_100;
  }
  v42 = (_BYTE*)(v97 + 49);
  if ((*(_BYTE*)(v97 + 49) & 0xFE) == 4) {
    v41 = "TrialJobSelect_Part1_2";
  LABEL_100:
    LayoutAccessor_1562cf0_alt3((__int64)a1, (unsigned int*)v41);
  }
  else {
    LayoutAccessor_1562cf0_alt3((__int64)a1, (unsigned int*)"TrialJobSelect");
    v66 = *v38;
    v102_.v108 = -1;
    v102_.v109 = -1;
    v102_.v110 = -1;
    v102_.v111 = -1;
    v102_.v112 = -1;
    v102_.v113 = -1;
    v102_.v114 = -1;
    v102_.v115 = -1;
    v102_.v116 = -1;
    v102_.v117 = -1;
    v102_.v118 = -1;
    v102_.v119 = -1;
    v102_.v102 = v39 + 2;
    v102_.v103 = 0xFFFF0001FFFF0000LL;
    v102_.v104 = 0xFFFF0004FFFF0002LL;
    v102_.v105 = 0xFFFF0006FFFF0005LL;
    v102_.v120 = 8;
    v102_.v106 = -65529;
    v102_.v107 = -65528;
    v67 = GameRoutine_a4dbe0_alt2(v66, "MID_Sys_HonorLv", 0);
    if (v67 != nullptr) {
      v68 = (__int64)v67;
      v69 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_RequiredHonorLv");
      if (v69 != 0) {
        GameRoutine_156c5d0(v69, v68, 0);
      }
    }
    if (*v42 != 0) {
      v70 = game_9a28e0(GameData_1b37744[(unsigned __int8)*v42 - 1]);
    }
    else {
      v70 = GameData_212c650[0];
    }
    v71 = *(_QWORD*)(*GameData_212c9a0[0] + 64);
    v72 = *(_QWORD*)(*GameData_212c9a0[0] + 72);
    if (v71 == v72) {
    LABEL_149:
      v77 = 0;
    }
    else {
      while (1) {
        v73 = *(_QWORD*)(*(_QWORD*)v71 + 24LL);
        v74 = *(__int64**)(v73 + 48);
        v75 = *(__int64**)(v73 + 56);
        if (v75 != v74) {
          break;
        }
      LABEL_143:
        v71 += 8;
        if (v71 == v72) {
          goto LABEL_149;
        }
      }
      while (1) {
        v76 = *v74;
        v74 += 2;
        if (v76 == *v70) {
          break;
        }
        if (v74 == v75) {
          goto LABEL_143;
        }
      }
      v77 = *(unsigned __int8*)(*(_QWORD*)v71 + 32LL);
    }
    if (v77 <= 1) {
      v78 = 1;
    }
    else {
      v78 = v77;
    }
    v79 = GameRoutine_715440();
    v80 = game_util_Format_alt3("%d", v78);
    v81 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_RequiredHonorLv_LvNum");
    if (v81 != 0) {
      GameRoutine_156c5d0(v81, (__int64)v80, 0);
    }
    v82 = (int*)(v40 + 60);
    if (v78 <= v79) {
      v82 = (int*)(v40 + 36);
    }
    v83 = *v82;
    v84 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_RequiredHonorLv_LvNum");
    if (v84 != 0) {
      v85 = Pane_58f8a0(v84);
      if (v85 != 0) {
        *(_DWORD*)(v85 + 12) = v83;
      }
    }
  }
  if (*(_BYTE*)(v97 + 49) != 0) {
    v43 = game_9a28e0(
        *(_DWORD*)&GameData_1b37730[4 * *(unsigned __int8*)(v97 + 49) - 4]);
    v44 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_113;
    }
  LABEL_105:
    v45 = game_GameVariableTable_Find(*(_QWORD**)(v44 + 48),
                                      (unsigned __int64*)v43);
    if (v45 != 0) {
      v46 = *(_DWORD*)(v45 + 32);
      if (v46 >= 1) {
        v47 = *(unsigned __int8*)(v98 + 498);
        v48 = game_util_Format_alt3("%d", v46);
        v49 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_RequiredLv_LvNum");
        if (v49 != 0) {
          GameRoutine_156c5d0(v49, (__int64)v48, 0);
        }
        v50 = *(_DWORD*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v40 + 4);
        v51 = *(int*)((char*)((int*)0x24LL) + (_QWORD)v40);
        v52 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_RequiredLv_LvNum");
        if (v52 != 0) {
          if (v46 <= v47) {
            v53 = v51;
          }
          else {
            v53 = v50;
          }
          goto LABEL_117;
        }
        goto LABEL_119;
      }
    }
  }
  else {
    v43 = GameData_212c650[0];
    v44 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      goto LABEL_105;
    }
  }
LABEL_113:
  v54 = *v38;
  v102_.v108 = -1;
  v102_.v109 = -1;
  v102_.v110 = -1;
  v102_.v111 = -1;
  v102_.v112 = -1;
  v102_.v113 = -1;
  v102_.v114 = -1;
  v102_.v115 = -1;
  v102_.v116 = -1;
  v102_.v117 = -1;
  v102_.v118 = -1;
  v102_.v119 = -1;
  v102_.v102 = v39 + 2;
  v102_.v103 = 0xFFFF0001FFFF0000LL;
  v102_.v104 = 0xFFFF0004FFFF0002LL;
  v102_.v105 = 0xFFFF0006FFFF0005LL;
  v102_.v120 = 8;
  v102_.v106 = -65529;
  v102_.v107 = -65528;
  v55 = GameRoutine_a4dbe0_alt2(v54, "MID_Sys_ValueEmpty", 0);
  if (v55 != nullptr) {
    v56 = (__int64)v55;
    v57 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_RequiredLv_LvNum");
    if (v57 != 0) {
      GameRoutine_156c5d0(v57, v56, 0);
    }
  }
  v53 = *(int*)((char*)((int*)0x24LL) + (_QWORD)v40);
  v52 = ui_LayoutAccessor_FindTextBox_alt2(a1, "T_RequiredLv_LvNum");
  if (v52 != 0) {
  LABEL_117:
    v58 = Pane_58f8a0(v52);
    if (v58 != 0) {
      *(_DWORD*)(v58 + 12) = v53;
    }
  }
LABEL_119:
  LayoutAccessor_1560070_alt1((void*)(&v102_.v102), a1, "L_Item");
  if (v102_.v103 != 0) {
    v59 = std___1___shared_weak_count_lock_alt1(v102_.v103);
    v60 = v102_.v102;
    if (v102_.v103 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v102_.v103);
    }
    if (v59 != 0 && v60 != nullptr) {
      v61 = GameHr_6ed030(*(_QWORD*)(v97 + 480));
      if (v61 != nullptr) {
        v62 = (__int64)v61;
        v63 = ui_LayoutAccessor_FindTextBox_alt2(v60, "T_Txt");
        if (v63 != 0) {
          GameRoutine_156c5d0(v63, v62, 0);
        }
      }
      LayoutAccessor_1560070_alt1((void*)(&v102_.v102), v60, "L_Icon");
      if (v102_.v103 != 0) {
        v64 = std___1___shared_weak_count_lock_alt1(v102_.v103);
        v65 = v102_.v102;
        if (v102_.v103 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v102_.v103);
        }
        if (v64 != 0 && v65 != nullptr) {
          GameRoutine_157b170(v65, *(_QWORD*)(v97 + 480), 0);
        LABEL_161:
          if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
            std___1___shared_weak_count___release_weak_alt2(v64);
          }
        }
        else if (v64 != 0) {
          goto LABEL_161;
        }
      }
      v86 = game_95e950_alt1(v98, v97);
      v87 = game_util_Format_alt3("%d", v86);
      v88 = ui_LayoutAccessor_FindTextBox_alt2(v60, "T_Num_Endurance");
      if (v88 != 0) {
        GameRoutine_156c5d0(v88, (__int64)v87, 0);
      }
      v89 = (int*)(v40 + 60);
      if (v86 != 0) {
        v89 = (int*)(v40 + 36);
      }
      v90 = *v89;
      v91 = ui_LayoutAccessor_FindTextBox_alt2(v60, "T_Num_Endurance");
      if (v91 != 0) {
        v92 = Pane_58f8a0(v91);
        if (v92 != 0) {
          *(_DWORD*)(v92 + 12) = v90;
        }
      }
      v93 = game_util_Format_alt3("%d", 1);
      v94 = ui_LayoutAccessor_FindTextBox_alt2(v60, "T_MaxNum");
      if (v94 != 0) {
        GameRoutine_156c5d0(v94, (__int64)v93, 0);
      }
      v95 = ui_LayoutAccessor_FindAlignment_alt2(v60, "A_Num");
      if (v95 != 0) {
        Alignment_56b600_alt1(v95);
      }
    LABEL_174:
      if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
        std___1___shared_weak_count___release_weak_alt2(v59);
      }
    }
    else if (v59 != 0) {
      goto LABEL_174;
    }
  }
  return game_Unit_Destroy_Unit((__int64)v101);
}

__int64 Util_15892d0(__int64** a1, unsigned __int8 a2, unsigned __int8 a3,
                     __int64 a4)
{
  __int64 v8;
  __int64* v9;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  char* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64* v19;
    __int64 v20;
  } v19_;

  LayoutAccessor_1560070_alt1((void*)(&v19_.v19), *a1, "L_IconMasteryType");
  if (v19_.v20 == 0) {
    goto LABEL_16;
  }
  v8 = std___1___shared_weak_count_lock_alt1(v19_.v20);
  v9 = v19_.v19;
  if (v19_.v20 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v19_.v20);
  }
  if (v8 == 0 || v9 == nullptr) {
    if (v8 == 0) {
      goto LABEL_16;
    }
  }
  else {
    v11 = ui_LayoutAccessor_FindPane_alt1(v9, (__int64)"Img");
    if (v11 != 0) {
      v11 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1841190_alt1(v11, a2);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt2(v8);
  }
LABEL_16:
  if (a2 > 0xCu) {
    v12 = 0;
  }
  else {
    v12 = *(unsigned __int8*)(a4 + (a2 & 0xF) + 540);
  }
  v13 = ui_LayoutAccessor_FindPane_alt1(*a1, (__int64)"IconMasteryLv");
  if (v13 != 0) {
    v13 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0], 0);
    v14 = (char*)GameData_212da30 + 36;
    if (v12 < a3) {
      v14 = (char*)GameData_212da30 + 60;
    }
    if (v13 != 0) {
      v15 = *(_DWORD*)v14;
      v16 = v13;
      v17 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v13 + 88LL))(v13, 0);
      if (v17 != 0) {
        *(_DWORD*)(v17 + 12) = v15;
      }
      v13 = v16;
    }
  }
  return GameRoutine_1841470_alt1(v13, a3);
}

void game_gameui_Util_SetGrowthRateForUnitInfo(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  char* v8;
  char* v9;
  char* v10;
  int* v11;
  __int64 v12;
  char* v13;
  int v14;
  signed __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  bool v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  struct {
    _QWORD v30[4];
    _QWORD* v31;
  } v30_;
  __int64 v32;
  int v33;

  v32 = a2;
  if (a2 != 0) {
    v3 = *(_QWORD*)(a1 + 8);
    if (v3 != 0) {
      v4 = a2;
      v5 = std___1___shared_weak_count_lock_alt1(v3);
      if (v5 != 0) {
        v6 = *(__int64**)a1;
        v7 = v5;
        if (*(_QWORD*)a1 == 0) {
        LABEL_39:
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            std___1___shared_weak_count___release_weak_alt2(v7);
          }
          return;
        }
        v8 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0);
        v9 = v8;
        *(_DWORD*)v8 = 28;
        v10 = v8 + 4;
        v11 = (int*)GameData_2259348;
        v12 = GameData_2259350;
        if (GameData_2259348 == GameData_2259350) {
          v13 = v8 + 4;
        }
        else {
          v29 = v6;
          v13 = v8 + 4;
          do {
            v14 = *v11;
            if (v13 < v10) {
              *(_DWORD*)v13 = v14;
              v13 += 4;
            }
            else {
              v15 = v13 - v9;
              v16 = (v13 - v9) >> 2;
              v17 = v16 + 1;
              if ((unsigned __int64)(v16 + 1) >> 62 != 0) {
                GameRoutine_159fb80_alt1();
              }
              if ((v10 - v9) >> 1 > v17) {
                v17 = (v10 - v9) >> 1;
              }
              if ((unsigned __int64)(v10 - v9) >= 0x7FFFFFFFFFFFFFFCLL) {
                v18 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v18 = v17;
              }
              if (v18 != 0) {
                if (v18 >> 62 != 0) {
                  GameRoutine_60a210_alt1();
                }
                v19 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v18, 16, 0);
              }
              else {
                v19 = 0;
              }
              v10 = (char*)(v19 + 4 * v18);
              v20 = v13 - v9;
              v21 = v19 + v15 - 4 * v16;
              *(_DWORD*)(v19 + v15) = v14;
              v13 = (char*)(v19 + v15 + 4);
              memcpy_alt1(v21, (__int64)v9, v20);
              if (v9 != nullptr) {
                v22 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v22 = 56;
                }
                nn_mem_StandardAllocator_Free_alt3(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v9);
              }
              v9 = (char*)v21;
            }
            ++v11;
          } while (v11 != (int*)v12);
          v4 = v32;
          v6 = v29;
        }
        v23 = *(_QWORD*)(v4 + 1744);
        v24 = *(unsigned int*)((char*)((_UNKNOWN*)0x15CLL) +
                               game_g_shared_system_skills_ptr);
        v25 = *(_QWORD*)(v4 + 1752) - v23;
        v33 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) +
                         game_g_shared_system_skills_ptr) &
              0xFFF;
        v26 = true;
        if (((v24 >> 5) & 0x7F) + 1 <= v25 >> 2 &&
            ((*(_DWORD*)(v23 + 4 * ((v24 >> 5) & 0x7F)) >> v24) & 1) != 0) {
          v26 = !game_HasActiveSkill_843420_alt1(&v33, v4 + 1744);
        }
        LOBYTE(v33) = v26;
        v30_.v31 = v30_.v30;
        v30_.v30[0] = GameData_204e018;
        v30_.v30[1] = &v33;
        v30_.v30[2] = &v32;
        GameHr_1586d80(v6, v9, v13, (__int64)v30_.v30, 1, 0, 1, v4, 1, 0, 0);
        if (v30_.v31 == v30_.v30) {
          v27 = 32;
        }
        else {
          if (v30_.v31 == nullptr) {
            goto LABEL_35;
          }
          v27 = 40;
        }
        (*(void (**)(__int64))(*v30_.v31 + v27))((__int64)v30_.v31);
      LABEL_35:
        if (v9 != nullptr) {
          v28 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v9);
        }
        goto LABEL_39;
      }
    }
  }
}

__attribute__((swiftcall)) void game_gameui_Util_GetNewSkillList(PSEUDO_X8 x8_,
                                                                 __int64 result,
                                                                 __int64 a2,
                                                                 __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  int v7;
  _QWORD* v8;
  unsigned __int16 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int16 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  _QWORD v27[4];
  _QWORD* v28;
  __int64 v29;

  v29 = a3;
  *a4 = 0;
  a4[1] = 0;
  a4[2] = 0;
  if (a2 != 0 && a3 != 0) {
    v6 = a2;
    v7 = 1 << result;
    v8 = v27;
    v27[0] = GameData_204e198;
    v27[1] = a4;
    v9 = *(_WORD*)(a3 + 1152);
    v28 = v27;
    if (((unsigned __int16)v7 & v9) != 0) {
      v10 = *(_QWORD*)(a3 + 1112);
      v11 = *(_QWORD*)(a3 + 1104);
      if ((int)((unsigned __int64)(v10 - v11) >> 2) < 1) {
        v8 = v27;
      }
      else {
        v12 = 0;
        v13 = 0;
        v14 = GameData_212c880[0];
        v15 = *GameData_212c880[0];
        do {
          if ((((unsigned __int16)v7 >>
                *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                                     8LL * (*(_DWORD*)(v11 + v12) & 0xFFF)) +
                          104LL)) &
               1) != 0) {
            v16 = v28;
            if (v28 == nullptr) {
            LABEL_25:
              GameRoutine_60a310(v16, a2);
            }
            (*(void (**)(_QWORD*, __int64))(*v28 + 48LL))(v28, v11 + v12);
            v15 = *v14;
            v10 = *(_QWORD*)(a3 + 1112);
            v11 = *(_QWORD*)(a3 + 1104);
          }
          ++v13;
          v12 += 4;
        } while (v13 < (int)((unsigned __int64)(v10 - v11) >> 2));
        v8 = v28;
        if (v28 != v27) {
          if (v28 != nullptr) {
            v17 = 40;
          LABEL_15:
            (*(void (**)(_QWORD*, __int64))(*v8 + v17))(v8, a2);
          }
          v18 = *a4;
          a2 = a4[1];
          v27[0] = &v29;
          if (v18 != a2) {
            game_gameui_15a0300(v18, a2);
          }
          result = (__int64)v27;
          v27[0] = GameData_204e218;
          v27[1] = a4;
          v19 = *(_WORD*)(v6 + 1152);
          v28 = v27;
          if ((v19 & (unsigned __int16)v7) != 0) {
            v20 = *(_QWORD*)(v6 + 1112);
            v21 = *(_QWORD*)(v6 + 1104);
            if ((int)((unsigned __int64)(v20 - v21) >> 2) < 1) {
              result = (__int64)v27;
            }
            else {
              v22 = 0;
              v23 = 0;
              v24 = GameData_212c880[0];
              v25 = *GameData_212c880[0];
              do {
                if ((((unsigned __int16)v7 >>
                      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v25 + 64) +
                                           8LL * (*(_DWORD*)(v21 + v22) &
                                                  0xFFF)) +
                                104LL)) &
                     1) != 0) {
                  v16 = v28;
                  if (v28 == nullptr) {
                    goto LABEL_25;
                  }
                  (*(void (**)(_QWORD*, __int64))(*v28 + 48LL))(v28, v21 + v22);
                  v25 = *v24;
                  v20 = *(_QWORD*)(v6 + 1112);
                  v21 = *(_QWORD*)(v6 + 1104);
                }
                ++v23;
                v22 += 4;
              } while (v23 < (int)((unsigned __int64)(v20 - v21) >> 2));
              result = (__int64)v28;
              if (v28 != v27) {
                if (v28 == nullptr) {
                  result;
                  return;
                }
                v26 = 40;
                {
                  (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + v26))(
                      result, a2);
                  return;
                }
              }
            }
          }
          v26 = 32;
          {
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + v26))(result,
                                                                        a2);
            return;
          }
        }
      }
    }
    v17 = 32;
    goto LABEL_15;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Util_158aec0(PSEUDO_X8 x8_, __int64 result,
                                             __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  char* v22;
  char* v23;

  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  if (result != 0 && a2 != 0) {
    v4 = (_QWORD*)result;
    v6 = (__int64*)GameData_21c9868;
    v7 = GameData_21c9870;
    if (GameData_21c9868 != GameData_21c9870) {
      do {
        v8 = *v6;
        if (*v6 != 0) {
          v9 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 1104LL);
          if (v9 != 0) {
            v10 = *(_QWORD*)(a2 + 560);
            v11 = *(unsigned __int16*)(v9 + 16);
            if (v11 < (*(_QWORD*)(a2 + 568) - v10) >> 1 &&
                *(_WORD*)(v10 + 2 * v11) != 0 && *(_BYTE*)(v8 + 49) != 0) {
              GameRoutine_158b160(a3, v6);
            }
          }
        }
        ++v6;
      } while (v6 != (__int64*)v7);
      result = *a3;
      if (*a3 != a3[1]) {
        result = GameRoutine_15a19e0();
      }
    }
    v12 = (__int64*)GameData_21c9868;
    v13 = GameData_21c9870;
    while (1) {
      if (v12 == (__int64*)v13) {
        result;
        return;
      }
      v14 = *v12;
      if (*v12 == 0 || (v15 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 1104LL)) == 0 ||
          (v16 = v4[70], (v17 = *(unsigned __int16*)(v15 + 16)) >=
                             (unsigned __int64)((v4[71] - v16) >> 1)) ||
          *(_WORD*)(v16 + 2 * v17) == 0 || *(_BYTE*)(v14 + 49) == 0) {
        if (v4[51] != 0) {
          if (v14 != 0) {
            goto LABEL_15;
          }
        }
        else if (*(_QWORD*)(*(_QWORD*)(v4[50] + 24LL) + 1104LL) != v14) {
          goto LABEL_15;
        }
      }
      v19 = (char*)*a3;
      v18 = (char*)a3[1];
      if ((char*)*a3 == v18) {
        goto LABEL_42;
      }
      v20 = v18 - v19 - 8;
      if ((~(_BYTE)v20 & 0x18) != 0) {
        break;
      }
    LABEL_31:
      if (v20 < 0x18) {
        goto LABEL_15;
      }
      v19 += 16;
      while (1) {
        if (*((_QWORD*)v19 - 2) == v14) {
          v19 -= 16;
          if (v19 != v18) {
            goto LABEL_43;
          }
          goto LABEL_49;
        }
        if (*((_QWORD*)v19 - 1) == v14) {
          v19 -= 8;
          goto LABEL_42;
        }
        if (*(_QWORD*)v19 == v14) {
          goto LABEL_42;
        }
        if (*((_QWORD*)v19 + 1) == v14) {
          break;
        }
        v22 = v19 + 16;
        v19 += 32;
        if (v22 == v18) {
          goto LABEL_15;
        }
      }
      v19 += 8;
      if (v19 != v18) {
        goto LABEL_43;
      }
    LABEL_49:
      if (v19 != v18) {
        a3[1] = (__int64)v19;
      }
    LABEL_15:
      ++v12;
    }
    v21 = ((unsigned __int8)((unsigned int)v20 >> 3) + 1) & 3;
    while (*(_QWORD*)v19 != v14) {
      v19 += 8;
      if (--v21 == 0) {
        goto LABEL_31;
      }
    }
  LABEL_42:
    if (v19 != v18) {
    LABEL_43:
      v23 = v19 + 8;
      if (v19 + 8 != v18) {
        do {
          if (*(_QWORD*)v23 != *v12) {
            *(_QWORD*)v19 = *(_QWORD*)v23;
            v19 += 8;
          }
          v23 += 8;
        } while (v23 != v18);
        v18 = (char*)a3[1];
      }
    }
    goto LABEL_49;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Util_158b280(PSEUDO_X8 x8_, __int64 result,
                                             __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  bool v18;
  unsigned int v19;

  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  if (result != 0 && a2 != 0) {
    v5 = GameData_21c9868;
    v6 = GameData_21c9870;
    if (GameData_21c9868 != GameData_21c9870) {
      v7 = result;
      do {
        if (*(_QWORD*)v5 != 0) {
          v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 24LL) + 1104LL);
          if (v8 != 0) {
            v9 = *(_QWORD*)(a2 + 560);
            v10 = *(unsigned __int16*)(v8 + 16);
            if (v10 < (*(_QWORD*)(a2 + 568) - v9) >> 1 &&
                *(_WORD*)(v9 + 2 * v10) != 0) {
              v11 = *(_QWORD*)(v7 + 560);
              if (v10 >= (*(_QWORD*)(v7 + 568) - v11) >> 1 ||
                  *(_WORD*)(v11 + 2 * v10) == 0) {
                goto LABEL_5;
              }
            }
            v12 = *(_QWORD*)(a2 + 560);
            v13 = *(unsigned __int16*)(v8 + 16);
            if (v13 < (*(_QWORD*)(a2 + 568) - v12) >> 1) {
              v14 = *(unsigned __int16*)(v12 + 2 * v13);
              if (v14 != 0) {
                v15 = *(_QWORD*)(v7 + 560);
                if (v13 < (*(_QWORD*)(v7 + 568) - v15) >> 1) {
                  v16 = *(unsigned __int16*)(v15 + 2 * v13);
                  v17 = v14 & 0x3FF;
                  v18 = v16 == 0;
                  v19 = v16 & 0x3FF;
                  if (!v18 && v17 > v19) {
                  LABEL_5:
                    result = GameRoutine_158b160(a3, v5);
                  }
                }
              }
            }
          }
        }
        v5 += 8;
      } while (v5 != v6);
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_gameui_Util_GetNewMagicList(PSEUDO_X8 x8_,
                                                                 __int64 a1,
                                                                 __int64 a2,
                                                                 __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  struct {
    _QWORD* v39[4];
    _QWORD** v40;
  } v39_;
  struct {
    __int64* v41;
    __int64* v42;
    __int64 v43;
  } v41_;
  __int64 v44;

  v44 = a2;
  *a4 = 0;
  a4[1] = 0;
  a4[2] = 0;
  if (a1 == 0 || a2 == 0) {
    return;
  }
  v7 = v39_.v39;
  v41_.v42 = nullptr;
  v41_.v43 = 0;
  v41_.v41 = nullptr;
  v39_.v39[0] = GameData_204e298;
  v39_.v39[1] = &v41_.v41;
  v8 = *(_QWORD*)(a2 + 1112);
  v39_.v40 = v39_.v39;
  v39_.v39[2] = &v44;
  v9 = *(_QWORD*)(a2 + 1104);
  if ((int)((unsigned __int64)(v8 - v9) >> 2) < 1) {
    goto LABEL_10;
  }
  v10 = 0;
  v11 = 0;
  do {
    if (v39_.v40 == nullptr) {
    LABEL_50:
      GameRoutine_60a310_alt1();
    }
    ((void (*)(_QWORD**, __int64))(*v39_.v40)[6])(v39_.v40, v9 + v10);
    v9 = *(_QWORD*)(a2 + 1104);
    ++v11;
    v10 += 4;
  } while (v11 < (int)((unsigned __int64)(*(_QWORD*)(a2 + 1112) - v9) >> 2));
  v7 = v39_.v40;
  if (v39_.v40 == v39_.v39) {
  LABEL_10:
    v12 = 32;
    goto LABEL_11;
  }
  if (v39_.v40 != nullptr) {
    v12 = 40;
  LABEL_11:
    (*(void (**)(_QWORD*, __int64, __int64))(*v7 + v12))(v7, a2, a3);
  }
  v13 = v41_.v42;
  v39_.v39[0] = &v44;
  if (v41_.v41 != v41_.v42) {
    game_gameui_15a2ea0_alt1((__int64)v41_.v41, v41_.v42, v39_.v39,
                             (2 * __clz(v41_.v42 - v41_.v41)) ^ 0x7E, 1);
  }
  v14 = v39_.v39;
  v39_.v39[0] = GameData_204e318;
  v39_.v39[1] = &v41_.v41;
  v15 = *(_QWORD*)(a1 + 1112);
  v16 = *(_QWORD*)(a1 + 1104);
  v39_.v40 = v39_.v39;
  if ((int)((unsigned __int64)(v15 - v16) >> 2) < 1) {
    goto LABEL_21;
  }
  v17 = 0;
  v18 = 0;
  do {
    if (v39_.v40 == nullptr) {
      goto LABEL_50;
    }
    ((void (*)(_QWORD**, __int64))(*v39_.v40)[6])(v39_.v40, v16 + v17);
    v16 = *(_QWORD*)(a1 + 1104);
    ++v18;
    v17 += 4;
  } while (v18 < (int)((unsigned __int64)(*(_QWORD*)(a1 + 1112) - v16) >> 2));
  v14 = v39_.v40;
  if (v39_.v40 == v39_.v39) {
  LABEL_21:
    v19 = 32;
  }
  else {
    if (v39_.v40 == nullptr) {
      goto LABEL_23;
    }
    v19 = 40;
  }
  (*(void (**)(_QWORD*, __int64*, __int64))(*v14 + v19))(v14, v13, a3);
LABEL_23:
  v20 = v41_.v41;
  v21 = v41_.v42;
  v22 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v41_.v41 == v41_.v42) {
    *a4 = 0;
    if (v20 == nullptr) {
      return;
    }
    goto LABEL_44;
  }
  v23 = nullptr;
  v24 = 0;
  do {
    v25 = game_6fbae0_alt1(*v20, v44);
    v26 = a4[2];
    if ((unsigned __int64)v23 < v26) {
      *v23++ = v25;
    }
    else {
      v27 = (unsigned __int64)v23 - v24;
      v28 = ((__int64)v23 - v24) >> 3;
      v29 = v28 + 1;
      if ((unsigned __int64)(v28 + 1) >> 61 != 0) {
        *a4 = v24;
        GameRoutine_6e5c60_alt1();
      }
      v30 = v26 - v24;
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
          *a4 = v24;
          GameRoutine_60a210_alt1();
        }
        v32 = v25;
        v33 = fw_memory_HeapManager_Allocate_alt1(*v22, 8 * v31, 16, 0);
        v25 = v32;
      }
      else {
        v33 = 0;
      }
      v34 = v33 + 8 * v31;
      v35 = v33 + v27 - 8 * v28;
      *(_QWORD*)(v33 + v27) = v25;
      v23 = (__int64*)(v33 + v27 + 8);
      memcpy_alt1(v35, v24, v27);
      a4[1] = (__int64)v23;
      a4[2] = v34;
      if (v24 != 0) {
        v36 = 128;
        if (*(_QWORD*)(*v22 + 200) == 0) {
          v36 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*v22 + v36, v24);
      }
      v24 = v35;
    }
    ++v20;
    a4[1] = (__int64)v23;
  } while (v20 != v21);
  v20 = v41_.v41;
  *a4 = v24;
  if (v20 != nullptr) {
  LABEL_44:
    v37 = *v22;
    v41_.v42 = v20;
    v38 = 128;
    if (*(_QWORD*)(v37 + 200) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(v37 + v38, (__int64)v20);
  }
}

void game_gameui_Util_SetArtsSkillStatus(__int64* a1, _DWORD* a2, __int64 a3,
                                         char a4, char a5)
{
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  _DWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  char v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v20[3];
    char v21;
    char gap57_[7];
    _QWORD* v22;
  } v20_;

  v9 = fw_memory_g_heap_manager_ptr;
  v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  if ((a4 & 1) != 0) {
    v11 = (_DWORD*)fw_memory_HeapManager_Allocate_alt1(v10, 12, 16, 0);
    v12 = v11 + 3;
    *(_QWORD*)v11 = 0xA00000004LL;
    v11[2] = 13;
  }
  else {
    v13 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v10, 16, 16, 0);
    v12 = v13 + 2;
    v11 = v13;
    *v13 = 0xA00000004LL;
    v13[1] = 0x110000000DLL;
  }
  v14 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (*(_BYTE*)(v14 + 105) == 4) {
    v15 = *(_QWORD*)(v14 + 608);
    if (v15 != 0) {
      v16 = *(_BYTE*)(v14 + 632) == 0;
      v17 = 1;
      LOBYTE(v15) = v16;
    }
    else {
      v17 = 0;
    }
  }
  else {
    v17 = 0;
    LOBYTE(v15) = 0;
  }
  v20_.v20[2] = a3;
  v20_.v20[0] = GameData_204e518;
  v20_.v20[1] = a2;
  v20_.v21 = a5 & 1;
  v20_.v22 = v20_.v20;
  GameHr_1586d80(a1, v11, v12, (__int64)v20_.v20, 1, 1, 0, 0, 0, v17, v15);
  if (v20_.v22 == v20_.v20) {
    v18 = 32;
  }
  else {
    if (v20_.v22 == nullptr) {
      goto LABEL_16;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v20_.v22 + v18))((__int64)v20_.v22);
LABEL_16:
  v19 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v9 + v19, (__int64)v11);
}

void game_gameui_Util_SetArtsSkillStatusForCompare(__int64* a1, __int64 a2,
                                                   __int64 a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;

  v8 = fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  v13_.v13[2] = a3;
  v13_.v13[3] = a4;
  v10 = v9;
  v13_.v14 = v13_.v13;
  *(_QWORD*)v9 = 0xA00000004LL;
  *(_QWORD*)(v9 + 8) = 0x110000000DLL;
  v13_.v13[0] = GameData_204e598;
  v13_.v13[1] = a2;
  GameHr_1586d80(a1, (_DWORD*)v9, (_DWORD*)(v9 + 16), (__int64)v13_.v13, 1, 1,
                 0, 0, 0, 0, 0);
  if (v13_.v14 == v13_.v13) {
    v11 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_6;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v11))((__int64)v13_.v14);
LABEL_6:
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
    v12 = 56;
  }
  nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v8 + v12, v10);
}

void game_gameui_Util_SetGambitSkillStatus(__int64* a1, _DWORD* a2, __int64 a3,
                                           const char* a4)
{
  __int64* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  bool v12;
  bool v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  bool v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  int v36;
  __int64* v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  struct {
    _BYTE v50[32];
    _QWORD* v51;
  } v50_;
  _QWORD v52[2];
  _QWORD v53[5];
  int v54;
  __int64 v55;
  __int64 v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  _QWORD v62[95];
  _QWORD v63[95];
  _QWORD v64[1120];
  int v65;
  __int16 v66;
  _QWORD v67[2];
  struct {
    __int64* v68;
    __int64 v69;
  } v68_;
  _QWORD v70[2];
  _QWORD v71[5];
  int v72;
  __int64 v73;
  __int64 v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  _QWORD v80[95];
  _QWORD v81[95];
  _DWORD v82[2244];
  __int16 v83;
  _QWORD v84[2];
  struct {
    __int64* v85;
    __int64 v86;
  } v85_;
  bool v87;
  __int64 v88;
  bool v89;
  char v90;
  bool v91;
  struct {
    __int64* v92;
    __int64 v93;
    char gap22752_[16];
    __int64 v94;
    __int64 v95;
  } v92_;
  const char* v96[4];

  v91 = a3 != 0;
  v8 = GameData_212c880[0];
  v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (v9 != 0) {
    v10 = *(unsigned __int8*)(v9 + 250);
  }
  else {
    v10 = 0;
  }
  v90 = v10;
  v89 = (unsigned int)(v10 - 7) < 2;
  if (a3 != 0) {
    v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                8LL * *(unsigned __int8*)(a3 + 1944)) +
                     64LL);
    v88 = v11;
    v12 = v11 != 0 && v10 == *(unsigned __int8*)(v11 + 250);
  }
  else {
    v11 = 0;
    v12 = false;
    v88 = 0;
  }
  v87 = v12;
  GameRoutine_790080_alt1((__int64)v70);
  GameRoutine_790080_alt1((__int64)v52);
  if (a3 != 0) {
    if (HIBYTE(v83) != 0) {
      GameRoutine_7992e0_alt1((__int64)v71);
      GameRoutine_7992e0_alt1((__int64)v80);
      GameRoutine_7992e0_alt1((__int64)v81);
      GameRoutine_7992e0_alt1((__int64)v82);
      v82[2240] = 0;
      v83 = 0;
      v84[0] = 0;
      *(_QWORD*)((char*)v84 + 6) = 0;
      BattleArea_8b9d00_alt1((__int64)&v85_.v85);
      v13 = HIBYTE(v83) == 0;
    }
    else {
      v13 = true;
    }
    v14 = *(char*)(a3 + 585);
    v15 = *(char*)(a3 + 584);
    v16 = *(_DWORD*)(a3 + 592);
    v71[3] = a3;
    v76 = v14;
    v78 = v14;
    v77 = v15;
    v79 = v16;
    v75 = v15;
    LOWORD(v15) = *a2;
    v72 = -1;
    v17 = *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * (v15 & 0xFFF));
    if (!v13) {
      GameRoutine_7992e0_alt1((__int64)v71);
      GameRoutine_7992e0_alt1((__int64)v80);
      GameRoutine_7992e0_alt1((__int64)v81);
      GameRoutine_7992e0_alt1((__int64)v82);
      v82[2240] = 0;
      v83 = 0;
      v84[0] = 0;
      *(_QWORD*)((char*)v84 + 6) = 0;
      BattleArea_8b9d00_alt1((__int64)&v85_.v85);
    }
    v74 = v17;
    if (v17 != 0) {
      v18 = *(_QWORD*)(v17 + 576);
      if (v18 != 0) {
        v73 = 0;
        v19 = *(unsigned __int16*)(v18 + 16);
        HIDWORD(v73) = 1;
        LOWORD(v73) = v19;
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v19) +
                      73LL) == 17) {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v20 = game_map_MapRandom_instance__ptr[0];
          v21 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v22 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v23 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v20 + 1) = v21;
          v24 = (v23 >> 8) ^ (v22 >> 19) ^ v23 ^ v22;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v20) = v22;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v20 + 4) = v24;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          HIDWORD(v73) =
              HIDWORD(v73) & 0xFFFFC00F |
              (16 *
               (((16 * (v24 - 1000 * ((v24 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
    }
    LODWORD(v84[0]) |= 1u;
    game_map_790ba0_alt1((__int64)v70);
    HIBYTE(v83) |= 1u;
    if (v11 != 0) {
      if (HIBYTE(v66) != 0) {
        GameRoutine_7992e0_alt1((__int64)v53);
        GameRoutine_7992e0_alt1((__int64)v62);
        GameRoutine_7992e0_alt1((__int64)v63);
        GameRoutine_7992e0_alt1((__int64)v64);
        v65 = 0;
        v66 = 0;
        v67[0] = 0;
        *(_QWORD*)((char*)v67 + 6) = 0;
        BattleArea_8b9d00_alt1((__int64)&v68_.v68);
        v25 = HIBYTE(v66) == 0;
      }
      else {
        v25 = true;
      }
      v26 = *(char*)(a3 + 584);
      v27 = *(char*)(a3 + 585);
      v28 = *(_DWORD*)(a3 + 592);
      v53[3] = a3;
      v58 = v27;
      v59 = v26;
      v60 = v27;
      v61 = v28;
      v57 = v26;
      v54 = -1;
      if (!v25) {
        GameRoutine_7992e0_alt1((__int64)v53);
        GameRoutine_7992e0_alt1((__int64)v62);
        GameRoutine_7992e0_alt1((__int64)v63);
        GameRoutine_7992e0_alt1((__int64)v64);
        v65 = 0;
        v66 = 0;
        v67[0] = 0;
        *(_QWORD*)((char*)v67 + 6) = 0;
        BattleArea_8b9d00_alt1((__int64)&v68_.v68);
      }
      v29 = *(_QWORD*)(v11 + 576);
      v56 = v11;
      if (v29 != 0) {
        v55 = 0;
        v30 = *(unsigned __int16*)(v29 + 16);
        HIDWORD(v55) = 1;
        LOWORD(v55) = v30;
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v30) +
                      73LL) == 17) {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
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
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          HIDWORD(v55) =
              HIDWORD(v55) & 0xFFFFC00F |
              (16 *
               (((16 * (v35 - 1000 * ((v35 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
      LODWORD(v67[0]) |= 1u;
      game_map_790ba0_alt1((__int64)v52);
      HIBYTE(v66) |= 1u;
    }
  }
  if (v10 > 9) {
    v36 = 9;
    if (v10 != 10 && v10 != 31) {
    LABEL_37:
      if (a3 != 0) {
        v36 = 3;
      }
      else {
        v36 = 4;
      }
    }
  }
  else {
    if (v10 != 7) {
      if (v10 == 8) {
        if (a3 != 0) {
          v36 = 2;
        }
        else {
          v36 = 6;
        }
        goto LABEL_43;
      }
      goto LABEL_37;
    }
    if (a3 != 0) {
      v36 = 1;
    }
    else {
      v36 = 5;
    }
  }
LABEL_43:
  v37 = (__int64*)fw_memory_g_heap_manager_ptr;
  v38 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 12, 16, 0);
  *(_DWORD*)v38 = v36;
  *(_QWORD*)(v38 + 4) = 0x280000000ALL;
  v39 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v37, 72, 16, 0);
  v40 = v39;
  *v39 = GameData_204e718;
  v39[1] = a2;
  v39[2] = v71;
  v39[3] = &v87;
  v39[4] = v52;
  v39[5] = &v91;
  v39[6] = &v88;
  v39[7] = &v89;
  v39[8] = &v90;
  if (a4 != nullptr) {
    v41 = 12;
    v42 = 0;
    while (1) {
      v96[0] = game_util_Format_alt3("%s%02d", a4, v42);
      v96[1] = (const char*)strlen_alt1(v96[0]);
      GameRoutine_15733c0_alt1((void*)(&v92_.v92), a1, v96);
      if (v92_.v93 != 0) {
        v43 = std___1___shared_weak_count_lock_alt1(v92_.v93);
        v44 = v92_.v92;
        if (v92_.v93 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v92_.v93);
        }
        if (v43 != 0 && v44 != nullptr) {
          LODWORD(v96[0]) = *(_DWORD*)(v38 + 4 * v42);
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*,
                                                  const char**))(*v40 + 48LL))(
              (void*)(&v92_.v92), v40, v96);
          StatusItem_188df50(v44, (unsigned int*)&v92_.v92, 1, 0);
          if (v92_.v94 != 0) {
            v92_.v95 = v92_.v94;
            v45 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v45 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v92_.v94);
          }
        LABEL_56:
          if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
            std___1___shared_weak_count___release_weak_alt2(v43);
          }
          goto LABEL_45;
        }
        if (v43 != 0) {
          goto LABEL_56;
        }
      }
    LABEL_45:
      ++v42;
      v41 -= 4;
      if (v41 == 0) {
        goto LABEL_59;
      }
    }
  }
  v50_.v51 = v39;
  GameHr_1586d80(a1, (_DWORD*)v38, (_DWORD*)(v38 + 12), (__int64)v50_.v50, 1, 0,
                 0, 0, 0, 0, 0);
LABEL_59:
  (*(void (**)(_QWORD*))(*v40 + 40LL))(v40);
  v46 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v46 = 56;
  }
  nn_mem_StandardAllocator_Free_alt3(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v38);
  v47 = GameData_212d238[0] + 16;
  v52[0] = GameData_212d238[0] + 16;
  v48 = GameData_212da50[0] + 2;
  v68_.v68 = GameData_212da50[0] + 2;
  if (v68_.v69 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v68_.v69 + 8LL))(v68_.v69);
    v68_.v69 = 0;
  }
  v49 = GameData_212d258[0] + 2;
  v52[1] = GameData_212d258[0] + 2;
  BattleSide_Destructor_alt1(v64);
  BattleSide_Destructor_alt1(v63);
  BattleSide_Destructor_alt1(v62);
  BattleSide_Destructor_alt1(v53);
  v85_.v85 = v48;
  v70[0] = v47;
  if (v85_.v86 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v85_.v86 + 8LL))(v85_.v86);
    v85_.v86 = 0;
  }
  v70[1] = v49;
  BattleSide_Destructor_alt1(v82);
  BattleSide_Destructor_alt1(v81);
  BattleSide_Destructor_alt1(v80);
  BattleSide_Destructor_alt1(v71);
}

__attribute__((swiftcall)) void

game_gameui_Util_GetCorpsStatusUnitList(PSEUDO_X8 x8_, char a1, char a2, int a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64* v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  signed __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  int v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  int v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  __int64* v49;
  int v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  signed __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned int v63;
  unsigned int v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  signed __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  unsigned int v79;
  struct {
    _QWORD v80[4];
    _QWORD* v81;
  } v80_;

  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  if ((a1 & 1) != 0) {
    if ((*(_QWORD*)(*(_QWORD*)GameData_212c6a0[0] + 328LL) & 4LL) != 0) {
      v5 = 1;
    }
    else {
      v5 = *(_DWORD*)(*(_QWORD*)GameData_212c6a0[0] + 308LL);
    }
    LODWORD(v80_.v80[0]) = 16;
    v6 = game_UnitPool_GetFirst_alt1((int*)v80_.v80);
    if (v6 != 0) {
      v7 = *(_QWORD*)(v6 + 432);
      v8 = v6;
      if (v7 == 0) {
        v7 = *(_QWORD*)(v6 + 440);
        if (v7 != 0) {
          v9 = *(unsigned __int8*)(v7 + 16);
          if (v9 <= 8) {
            v78 = v9 - 3;
            while (1) {
              if (v78 == 0) {
                v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v7 != 0) {
                  break;
                }
              }
              if (++v78 == 6) {
                goto LABEL_9;
              }
            }
          }
          else {
          LABEL_9:
            v7 = 0;
          }
        }
      }
      v10 = nullptr;
      v11 = 0;
      while (1) {
      LABEL_12:
        v12 = v7;
        if (v11 < v5) {
          v13 = a4[2];
          if ((unsigned __int64)v10 >= v13) {
            v14 = *a4;
            v15 = (signed __int64)v10 - *a4;
            v16 = (v15 >> 3) + 1;
            if (v16 >> 61 != 0) {
              goto LABEL_138;
            }
            v17 = v13 - v14;
            if (v17 >> 2 > v16) {
              v16 = v17 >> 2;
            }
            if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
              v18 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v18 = v16;
            }
            if (v18 != 0) {
              if (v18 >> 61 != 0) {
                goto LABEL_139;
              }
              v19 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
            }
            else {
              v19 = 0;
            }
            v20 = v19 + 8 * v18;
            v21 = v19 + v15 - 8 * (v15 >> 3);
            *(_QWORD*)(v19 + v15) = v8;
            v10 = (__int64*)(v19 + v15 + 8);
            memcpy_alt1(v21, v14, v15);
            *a4 = v21;
            a4[2] = v20;
            if (v14 != 0) {
              v22 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v22 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v14);
            }
          }
          else {
            *v10++ = v8;
          }
          a4[1] = (__int64)v10;
        }
        if (v12 == 0) {
          break;
        }
        v7 = *(_QWORD*)(v12 + 432);
        ++v11;
        v8 = v12;
        if (v7 == 0) {
          v23 = *(_QWORD*)(v12 + 440);
          v8 = v12;
          if (v23 != 0) {
            v24 = *(unsigned __int8*)(v23 + 16);
            v7 = 0;
            v8 = v12;
            if (v24 <= 8) {
              v25 = v24 - 3;
              while (1) {
                if (v25 == 0) {
                  v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                  if (v7 != 0) {
                    break;
                  }
                }
                if (++v25 == 6) {
                  v7 = 0;
                  v8 = v12;
                  goto LABEL_12;
                }
              }
              v8 = v12;
            }
          }
        }
      }
    }
  }
  else if ((a2 & 1) != 0) {
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v26 = *(_QWORD*)(*GameData_212c790 + 8);
      v27 = *(_DWORD*)(v26 + 56);
      if (a3 >= 0) {
        v27 = a3;
      }
      if (v27 < 0) {
        return;
      }
      v28 = *(__int64**)(v26 + 8);
      v29 = *(__int64**)(v26 + 16);
      if (v28 == v29) {
        return;
      }
      while (1) {
        v31 = *v28++;
        v30 = v31;
        if (*(_DWORD*)(v31 + 84) == v27) {
          break;
        }
        if (v28 == v29) {
          return;
        }
      }
    }
    else {
      v39 = *(_QWORD*)(GameData_21c96e8 + 8);
      v40 = *(_DWORD*)(v39 + 56);
      v41 = *(__int64**)(v39 + 8);
      v42 = *(__int64**)(v39 + 16);
      if (v40 < 0) {
        if (v41 == v42) {
          return;
        }
        while (1) {
          v30 = *v41;
          if (*(_QWORD*)(*v41 + 96) == 0 && *(_QWORD*)(v30 + 552) == 0) {
            break;
          }
          if (++v41 == v42) {
            return;
          }
        }
      }
      else {
        if (v41 == v42) {
          return;
        }
        while (1) {
          v43 = *v41++;
          v30 = v43;
          if (*(_DWORD*)(v43 + 84) == v40) {
            break;
          }
          if (v41 == v42) {
            return;
          }
        }
      }
    }
    v80_.v80[0] = GameData_204e918;
    v80_.v80[1] = a4;
    v80_.v81 = v80_.v80;
    Troop_133ed80_alt1(v30, (__int64)v80_.v80);
    if (v80_.v81 == v80_.v80) {
      v65 = 32;
    }
    else {
      if (v80_.v81 == nullptr) {
        return;
      }
      v65 = 40;
    }
    (*(void (**)(__int64))(*v80_.v81 + v65))((__int64)v80_.v81);
  }
  else if (GameData_2203490 != 0) {
    v32 = *(__int64**)(GameData_2203490 + 712);
    v33 = *(__int64**)(GameData_2203490 + 720);
    if (v32 != v33) {
      v34 = *(_QWORD*)(GameData_22190c8 + 192);
      v35 = *(__int64**)(GameData_2203490 + 712);
      while (1) {
        v36 = *v35;
        v35 += 2;
        v37 = *(_QWORD*)(v36 + 16);
        if (v37 == v34) {
          break;
        }
        if (v35 == v33) {
          v38 = nullptr;
          goto LABEL_109;
        }
      }
      v66 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      *v66 = v37;
      v38 = v66 + 1;
      a4[2] = (__int64)(v66 + 1);
      *a4 = (__int64)v66;
      a4[1] = (__int64)(v66 + 1);
      do {
      LABEL_109:
        v67 = *(_QWORD*)(*v32 + 16);
        if (v67 != v34) {
          v68 = a4[2];
          if ((unsigned __int64)v38 < v68) {
            *v38++ = v67;
          }
          else {
            v69 = *a4;
            v70 = (signed __int64)v38 - *a4;
            v71 = (v70 >> 3) + 1;
            if (v71 >> 61 != 0) {
              goto LABEL_138;
            }
            v72 = v68 - v69;
            if (v72 >> 2 > v71) {
              v71 = v72 >> 2;
            }
            if ((unsigned __int64)v72 >= 0x7FFFFFFFFFFFFFF8LL) {
              v73 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v73 = v71;
            }
            if (v73 != 0) {
              if (v73 >> 61 != 0) {
                goto LABEL_139;
              }
              v74 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v73, 16, 0);
            }
            else {
              v74 = 0;
            }
            v75 = v74 + 8 * v73;
            v76 = v74 + v70 - 8 * (v70 >> 3);
            *(_QWORD*)(v74 + v70) = v67;
            v38 = (_QWORD*)(v74 + v70 + 8);
            memcpy_alt1(v76, v69, v70);
            *a4 = v76;
            a4[2] = v75;
            if (v69 != 0) {
              v77 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v77 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v69);
            }
          }
          a4[1] = (__int64)v38;
        }
        v32 += 2;
      } while (v32 != v33);
    }
  }
  else {
    if ((*(_QWORD*)(*(_QWORD*)GameData_212c6a0[0] + 328LL) & 4LL) != 0) {
      v44 = 1;
    }
    else {
      v44 = *(_DWORD*)(*(_QWORD*)GameData_212c6a0[0] + 308LL);
    }
    LODWORD(v80_.v80[0]) = 16;
    v45 = game_UnitPool_GetFirst_alt1((int*)v80_.v80);
    if (v45 != 0) {
      v46 = *(_QWORD*)(v45 + 432);
      v47 = v45;
      if (v46 == 0) {
        v46 = *(_QWORD*)(v45 + 440);
        if (v46 != 0) {
          v48 = *(unsigned __int8*)(v46 + 16);
          if (v48 <= 8) {
            v79 = v48 - 3;
            while (1) {
              if (v79 == 0) {
                v46 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v46 != 0) {
                  break;
                }
              }
              if (++v79 == 6) {
                goto LABEL_67;
              }
            }
          }
          else {
          LABEL_67:
            v46 = 0;
          }
        }
      }
      v49 = nullptr;
      v50 = 0;
      while (1) {
      LABEL_70:
        v51 = v46;
        if (v50 < v44) {
          v52 = a4[2];
          if ((unsigned __int64)v49 >= v52) {
            v53 = *a4;
            v54 = (signed __int64)v49 - *a4;
            v55 = (v54 >> 3) + 1;
            if (v55 >> 61 != 0) {
            LABEL_138:
              GameRoutine_740050_alt1();
            }
            v56 = v52 - v53;
            if (v56 >> 2 > v55) {
              v55 = v56 >> 2;
            }
            if ((unsigned __int64)v56 >= 0x7FFFFFFFFFFFFFF8LL) {
              v57 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v57 = v55;
            }
            if (v57 != 0) {
              if (v57 >> 61 != 0) {
              LABEL_139:
                GameRoutine_60a210_alt1();
              }
              v58 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v57, 16, 0);
            }
            else {
              v58 = 0;
            }
            v59 = v58 + 8 * v57;
            v60 = v58 + v54 - 8 * (v54 >> 3);
            *(_QWORD*)(v58 + v54) = v47;
            v49 = (__int64*)(v58 + v54 + 8);
            memcpy_alt1(v60, v53, v54);
            *a4 = v60;
            a4[2] = v59;
            if (v53 != 0) {
              v61 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v61 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, v53);
            }
          }
          else {
            *v49++ = v47;
          }
          a4[1] = (__int64)v49;
        }
        if (v51 == 0) {
          break;
        }
        v46 = *(_QWORD*)(v51 + 432);
        ++v50;
        v47 = v51;
        if (v46 == 0) {
          v62 = *(_QWORD*)(v51 + 440);
          v47 = v51;
          if (v62 != 0) {
            v63 = *(unsigned __int8*)(v62 + 16);
            v46 = 0;
            v47 = v51;
            if (v63 <= 8) {
              v64 = v63 - 3;
              while (1) {
                if (v64 == 0) {
                  v46 =
                      *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                  if (v46 != 0) {
                    break;
                  }
                }
                if (++v64 == 6) {
                  v46 = 0;
                  v47 = v51;
                  goto LABEL_70;
                }
              }
              v47 = v51;
            }
          }
        }
      }
    }
  }
}

__attribute__((swiftcall)) void

game_gameui_Util_CollectArtsInfoList(PSEUDO_X8 x8_, __int64 result, __int64 a2,
                                     __int64 a3, char a4)
{
  __int64* a5 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _DWORD* v22;
  _DWORD* v23;
  __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  char* v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  char* v53;
  __int64 v54;
  _DWORD* v55;
  _DWORD* v56;
  __int64 v57;
  __int64 v58;
  char* v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  char v63;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  char* v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64* v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  char* v81;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  char* v89;
  __int64 v90;
  char* v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64* v99;
  _QWORD* v100;
  char* v101;
  __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  _QWORD* v113;
  __int64 v114;
  __int64 v115;
  char* v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  char v120;
  __int64 v121;
  __int64* v122;
  __int64 v123;
  __int64 v124;
  __int64* v125;
  __int64 v126;
  char v127;
  __int64* v128;
  __int64 v129;
  __int64 v130;
  _DWORD* v131;
  _DWORD* v132;
  _QWORD v134[4];
  _QWORD* v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  int v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  _DWORD* v148;
  _DWORD* v149;
  __int64 v150;
  _DWORD* v151;
  _DWORD* v152;
  __int64 v153;
  __int64 v154;

  v154 = result;
  if (result == 0) {
    a5[1] = 0;
    a5[2] = 0;
    *a5 = 0;
    {
      result;
      return;
    }
  }
  v7 = result;
  v152 = nullptr;
  v153 = 0;
  v150 = 0;
  v151 = nullptr;
  v148 = nullptr;
  v149 = nullptr;
  v139 = 0;
  v137 = 0;
  v138 = 0;
  v136 = 0;
  v140 = 0;
  v141 = 0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v147 = 0;
  if ((_DWORD)a2 == 1) {
    if (&v136 == (__int64*)(result + 1072)) {
      v139 = *(_DWORD*)(result + 1096);
    }
    else {
      GameRoutine_7fb7c0(&v136);
      v139 = *(_DWORD*)(v7 + 1096);
      GameRoutine_7fb930(&v140);
      result = GameRoutine_7fb930(&v143);
    }
    v8 = 1152;
  }
  else {
    if ((_DWORD)a2 != 0) {
      goto LABEL_14;
    }
    if (&v136 == (__int64*)(result + 1456)) {
      v139 = *(_DWORD*)(result + 1480);
    }
    else {
      GameRoutine_7fb7c0(&v136);
      v139 = *(_DWORD*)(v7 + 1480);
      GameRoutine_7fb930(&v140);
      result = GameRoutine_7fb930(&v143);
    }
    v8 = 1536;
  }
  v9 = (__int64*)(v7 + v8);
  v11 = *v9;
  v10 = v9[1];
  v146 = v11;
  v147 = v10;
LABEL_14:
  v12 = v140;
  v13 = v141;
  if (v140 != v141) {
    result = (__int64)v134;
    v134[0] = GameData_204ed38;
    v134[1] = &v154;
    v135 = v134;
    v134[2] = &v151;
    v134[3] = &v148;
    if ((v146 & 4) != 0) {
      if ((int)((unsigned __int64)(v141 - v140) >> 2) < 1) {
        result = (__int64)v134;
      }
      else {
        v14 = 0;
        v15 = 0;
        v16 = GameData_212c880[0];
        v17 = *GameData_212c880[0];
        do {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v17 + 64) +
                                   8LL * (*(_DWORD*)(v12 + v14) & 0xFFF)) +
                        104LL) == 2) {
            v18 = v135;
            if (v135 == nullptr) {
              goto LABEL_22;
            }
            (*(void (**)(_QWORD*, __int64))(*v135 + 48LL))(v135, v12 + v14);
            v17 = *v16;
            v12 = v140;
            v13 = v141;
          }
          ++v15;
          v14 += 4;
        } while (v15 < (int)((unsigned __int64)(v13 - v12) >> 2));
        result = (__int64)v135;
        if (v135 != v134) {
          if (v135 != nullptr) {
            v21 = 40;
          LABEL_30:
            result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v21))(
                (__int64)result);
          }
          v23 = v151;
          v22 = v152;
          v128 = a5;
          v127 = a4;
          if (v151 != v152) {
            v131 = v152;
            v24 = 0;
            if ((a4 & 1) != 0) {
              v25 = nullptr;
              v26 = 0;
              v27 = 0;
              v28 = nullptr;
              v29 = 0;
              while (1) {
                v31 = (unsigned int)*v23;
                v18 = *(_QWORD**)(a3 + 32);
                LODWORD(v134[0]) = *v23;
                if (v18 == nullptr) {
                  goto LABEL_22;
                }
                result =
                    (*(__int64 (**)(_QWORD*, _QWORD*))(*v18 + 48LL))(v18, v134);
                if ((result & 1) != 0) {
                  if ((unsigned __int64)v25 < v26) {
                    *v25++ = v31 | 0x1000000000000LL;
                  LABEL_35:
                    v30 = v27;
                    goto LABEL_36;
                  }
                  v32 = v24;
                  v33 = (__int64)v25 - v24;
                  v34 = v28;
                  v35 = v29;
                  v36 = (v33 >> 3) + 1;
                  if (v36 >> 61 != 0) {
                    goto LABEL_218;
                  }
                  v37 = v26 - v32;
                  v129 = v32;
                  v38 = (__int64)(v26 - v32) >> 2;
                  if (v38 > v36) {
                    v36 = v38;
                  }
                  if (v37 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v39 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v39 = v36;
                  }
                  if (v39 != 0) {
                    if (v39 >> 61 != 0) {
                      goto LABEL_219;
                    }
                    v40 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v39, 16, 0);
                  }
                  else {
                    v40 = 0;
                  }
                  v26 = v40 + 8 * v39;
                  v49 = v40 + v33 - 8 * (v33 >> 3);
                  *(_QWORD*)(v40 + v33) = v31 | 0x1000000000000LL;
                  v25 = (__int64*)(v40 + v33 + 8);
                  result = memcpy(v49, v129, v33);
                  if (v129 != 0) {
                    v50 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v50 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v50);
                  }
                  v22 = v131;
                  v51 = v49;
                  v30 = v27;
                  v29 = v35;
                  v28 = v34;
                  v24 = v51;
                }
                else {
                  if ((unsigned __int64)v28 < v29) {
                    *v28++ = v31;
                    goto LABEL_35;
                  }
                  v41 = v29;
                  v42 = (char*)v28 - v27;
                  v43 = ((__int64)v28 - v27) >> 3;
                  v44 = v43 + 1;
                  if ((unsigned __int64)(v43 + 1) >> 61 != 0) {
                    goto LABEL_218;
                  }
                  v45 = v41 - v27;
                  v46 = (__int64)(v41 - v27) >> 2;
                  if (v46 > v44) {
                    v44 = v46;
                  }
                  if (v45 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v47 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v47 = v44;
                  }
                  if (v47 != 0) {
                    if (v47 >> 61 != 0) {
                      goto LABEL_219;
                    }
                    v48 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v47, 16, 0);
                  }
                  else {
                    v48 = 0;
                  }
                  v52 = v48 + 8 * v47;
                  v53 = (char*)v28 - v27;
                  v30 = (__int64)&v42[v48 + -8 * v43];
                  *(_QWORD*)&v42[v48] = v31;
                  v28 = (__int64*)&v42[v48 + 8];
                  result = memcpy(v30, v27, v53);
                  if (v27 != 0) {
                    v54 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v54 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v54);
                  }
                  v29 = v52;
                  v22 = v131;
                }
              LABEL_36:
                ++v23;
                v27 = v30;
                if (v23 == v22) {
                  goto LABEL_74;
                }
              }
            }
            v26 = 0;
            v25 = nullptr;
            v113 = (_QWORD*)fw_memory_g_heap_manager_ptr;
            while (1) {
              v115 = (unsigned int)*v23;
              v18 = *(_QWORD**)(a3 + 32);
              LODWORD(v134[0]) = *v23;
              if (v18 == nullptr) {
                break;
              }
              result =
                  (*(__int64 (**)(_QWORD*, _QWORD*))(*v18 + 48LL))(v18, v134);
              if ((unsigned __int64)v25 < v26) {
                if ((result & 1) != 0) {
                  v114 = 0x1000000000000LL;
                }
                else {
                  v114 = 0;
                }
                *v25++ = v114 | v115;
              }
              else {
                v116 = (char*)v25 - v24;
                v117 = ((__int64)v25 - v24) >> 3;
                v118 = v117 + 1;
                if ((unsigned __int64)(v117 + 1) >> 61 != 0) {
                  goto LABEL_218;
                }
                if ((__int64)(v26 - v24) >> 2 > v118) {
                  v118 = (__int64)(v26 - v24) >> 2;
                }
                if (v26 - v24 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v119 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v119 = v118;
                }
                if (v119 != 0) {
                  if (v119 >> 61 != 0) {
                  LABEL_219:
                    GameRoutine_60a210(result);
                  }
                  v120 = result;
                  v121 = fw_memory_HeapManager_Allocate(*v113, 8 * v119, 16, 0);
                  LOBYTE(result) = v120;
                }
                else {
                  v121 = 0;
                }
                v122 = (__int64*)&v116[v121];
                v26 = v121 + 8 * v119;
                if ((result & 1) != 0) {
                  v123 = 0x1000000000000LL;
                }
                else {
                  v123 = 0;
                }
                v124 = v123 | v115;
                v125 = &v122[-v117];
                *v122 = v124;
                v25 = v122 + 1;
                result = memcpy(v125, v24, v116);
                if (v24 != 0) {
                  v126 = 128;
                  if (*(_QWORD*)(*v113 + 200LL) == 0) {
                    v126 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free_alt1(*v113 + v126);
                }
                v22 = v131;
                v24 = (__int64)v125;
              }
              if (++v23 == v22) {
                goto LABEL_73;
              }
            }
          LABEL_22:
            GameRoutine_60a310(v18, a2);
          }
          v24 = 0;
          v25 = nullptr;
          v26 = 0;
        LABEL_73:
          v29 = 0;
          v28 = nullptr;
          v30 = 0;
        LABEL_74:
          v55 = v148;
          v56 = v149;
          if (v148 != v149) {
            v132 = v149;
            if ((v127 & 1) == 0) {
              while (1) {
                v58 = (unsigned int)*v55;
                v18 = *(_QWORD**)(a3 + 32);
                LODWORD(v134[0]) = *v55;
                if (v18 == nullptr) {
                  goto LABEL_22;
                }
                result =
                    (*(__int64 (**)(_QWORD*, _QWORD*))(*v18 + 48LL))(v18, v134);
                if ((unsigned __int64)v25 < v26) {
                  v57 = 0x1000100000000LL;
                  if ((result & 1) == 0) {
                    v57 = 0x100000000LL;
                  }
                  *v25++ = v57 | v58;
                }
                else {
                  v59 = (char*)v25 - v24;
                  v60 = ((__int64)v25 - v24) >> 3;
                  v61 = v60 + 1;
                  if ((unsigned __int64)(v60 + 1) >> 61 != 0) {
                    goto LABEL_218;
                  }
                  if ((__int64)(v26 - v24) >> 2 > v61) {
                    v61 = (__int64)(v26 - v24) >> 2;
                  }
                  if (v26 - v24 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v62 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v62 = v61;
                  }
                  if (v62 != 0) {
                    if (v62 >> 61 != 0) {
                      goto LABEL_219;
                    }
                    v63 = result;
                    v64 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v62, 16, 0);
                    LOBYTE(result) = v63;
                  }
                  else {
                    v64 = 0;
                  }
                  v65 = (__int64*)&v59[v64];
                  v26 = v64 + 8 * v62;
                  v66 = 0x1000100000000LL;
                  if ((result & 1) == 0) {
                    v66 = 0x100000000LL;
                  }
                  v67 = v66 | v58;
                  v68 = &v65[-v60];
                  *v65 = v67;
                  v25 = v65 + 1;
                  result = memcpy(v68, v24, v59);
                  if (v24 != 0) {
                    v69 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v69 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v69);
                  }
                  v56 = v132;
                  v24 = (__int64)v68;
                }
                if (++v55 == v56) {
                  goto LABEL_138;
                }
              }
            }
            while (1) {
              v70 = (unsigned int)*v55;
              v18 = *(_QWORD**)(a3 + 32);
              LODWORD(v134[0]) = *v55;
              if (v18 == nullptr) {
                goto LABEL_22;
              }
              result =
                  (*(__int64 (**)(_QWORD*, _QWORD*))(*v18 + 48LL))(v18, v134);
              if ((result & 1) != 0) {
                if ((unsigned __int64)v25 < v26) {
                  *v25++ = v70 | 0x1000100000000LL;
                LABEL_101:
                  v19 = v30;
                  goto LABEL_102;
                }
                v71 = (char*)v25 - v24;
                v72 = v24;
                v73 = ((__int64)v25 - v24) >> 3;
                v74 = v73 + 1;
                if ((unsigned __int64)(v73 + 1) >> 61 != 0) {
                  goto LABEL_218;
                }
                v75 = v26 - v24;
                v130 = v24;
                v76 = v28;
                v77 = v29;
                v78 = (__int64)(v26 - v72) >> 2;
                if (v78 > v74) {
                  v74 = v78;
                }
                if (v75 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v79 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v79 = v74;
                }
                if (v79 != 0) {
                  if (v79 >> 61 != 0) {
                    goto LABEL_219;
                  }
                  v80 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v79, 16, 0);
                }
                else {
                  v80 = 0;
                }
                v26 = v80 + 8 * v79;
                v86 = (__int64)&v71[v80 + -8 * v73];
                *(_QWORD*)&v71[v80] = v70 | 0x1000100000000LL;
                v25 = (__int64*)&v71[v80 + 8];
                result = memcpy(v86, v130, v71);
                if (v130 != 0) {
                  v87 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v87 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v87);
                }
                v56 = v132;
                v19 = v30;
                v29 = v77;
                v28 = v76;
                v24 = v86;
              }
              else {
                if ((unsigned __int64)v28 < v29) {
                  *v28++ = v70 | 0x100000000LL;
                  goto LABEL_101;
                }
                v81 = (char*)v28 - v30;
                v82 = ((__int64)v28 - v30) >> 3;
                v83 = v82 + 1;
                if ((unsigned __int64)(v82 + 1) >> 61 != 0) {
                  goto LABEL_218;
                }
                if ((__int64)(v29 - v30) >> 2 > v83) {
                  v83 = (__int64)(v29 - v30) >> 2;
                }
                if (v29 - v30 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v84 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v84 = v83;
                }
                if (v84 != 0) {
                  if (v84 >> 61 != 0) {
                    goto LABEL_219;
                  }
                  v85 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v84, 16, 0);
                }
                else {
                  v85 = 0;
                }
                v88 = v70 | 0x100000000LL;
                v29 = v85 + 8 * v84;
                v89 = (char*)v28 - v30;
                v19 = (__int64)&v81[v85 + -8 * v82];
                *(_QWORD*)&v81[v85] = v88;
                v28 = (__int64*)&v81[v85 + 8];
                result = memcpy(v19, v30, v89);
                if (v30 != 0) {
                  v90 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v90 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v90);
                }
                v56 = v132;
              }
            LABEL_102:
              ++v55;
              v30 = v19;
              if (v55 == v56) {
                goto LABEL_139;
              }
            }
          }
        LABEL_138:
          v19 = v30;
        LABEL_139:
          v91 = (char*)v25 - v24;
          v92 = ((__int64)v25 - v24) >> 3;
          v93 = v92 + (((__int64)v28 - v19) >> 3);
          if (v93 <= (__int64)(v26 - v24) >> 3) {
            v96 = v24;
            if ((__int64*)v19 == v28) {
              goto LABEL_167;
            }
          }
          else {
            if (v93 >> 61 != 0) {
            LABEL_218:
              GameRoutine_15a7390();
            }
            v94 = fw_memory_g_heap_manager_ptr;
            v95 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v93, 16, 0);
            v25 = (__int64*)&v91[v95];
            v26 = v95 + 8 * v93;
            v96 = (__int64)&v91[v95 + -8 * v92];
            result = memcpy(v96, v24, v91);
            if (v24 != 0) {
              v97 = 128;
              if (*(_QWORD*)(*(_QWORD*)v94 + 200LL) == 0) {
                v97 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v94 + v97);
            }
            if ((__int64*)v19 == v28) {
            LABEL_167:
              *v128 = v96;
              v128[1] = (__int64)v25;
              v128[2] = v26;
              v20 = v143;
              if (v143 != 0) {
                goto LABEL_168;
              }
              goto LABEL_171;
            }
          }
          v98 = v96;
          v99 = (__int64*)v19;
          v100 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          while (1) {
            if ((unsigned __int64)v25 < v26) {
              *v25++ = *v99;
            }
            else {
              v101 = (char*)v25 - v98;
              v102 = ((__int64)v25 - v98) >> 3;
              v103 = v102 + 1;
              if ((unsigned __int64)(v102 + 1) >> 61 != 0) {
                goto LABEL_218;
              }
              if ((__int64)(v26 - v98) >> 2 > v103) {
                v103 = (__int64)(v26 - v98) >> 2;
              }
              if (v26 - v98 >= 0x7FFFFFFFFFFFFFF8LL) {
                v104 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v104 = v103;
              }
              if (v104 != 0) {
                if (v104 >> 61 != 0) {
                  goto LABEL_219;
                }
                v105 = fw_memory_HeapManager_Allocate(*v100, 8 * v104, 16, 0);
              }
              else {
                v105 = 0;
              }
              v26 = v105 + 8 * v104;
              v96 = (__int64)&v101[v105 + -8 * v102];
              *(_QWORD*)&v101[v105] = *v99;
              v25 = (__int64*)&v101[v105 + 8];
              result = memcpy(v96, v98, v101);
              if (v98 != 0) {
                v106 = 128;
                if (*(_QWORD*)(*v100 + 200LL) == 0) {
                  v106 = 56;
                }
                result = nn_mem_StandardAllocator_Free_alt1(*v100 + v106);
              }
              v98 = v96;
            }
            if (++v99 == v28) {
              goto LABEL_167;
            }
          }
        }
      }
    }
    v21 = 32;
    goto LABEL_30;
  }
  v19 = 0;
  a5[1] = 0;
  a5[2] = 0;
  *a5 = 0;
  v20 = v143;
  if (v143 != 0) {
  LABEL_168:
    v144 = v20;
    v107 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v107 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v107);
  }
LABEL_171:
  if (v140 != 0) {
    v141 = v140;
    v108 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v108 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v108);
  }
  if (v136 != 0) {
    v137 = v136;
    v109 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v109 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v109);
  }
  if (v148 != nullptr) {
    v149 = v148;
    v110 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v110 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v110);
  }
  if (v151 != nullptr) {
    v152 = v151;
    v111 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v111 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v111);
  }
  if (v19 != 0) {
    v112 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v112 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v112);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

game_gameui_Util_CollectBlazeArtsInfo_159c780(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  int* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 i;
  __int64 v11;
  __int16 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  int* v22;
  _DWORD* v23;
  _DWORD* v24;
  int* v25;
  char* v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  int* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  int* v35;
  int v36;
  int v37;
  int* v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _DWORD* v43;
  struct {
    __int64 (**v44)();
    __int64* v45;
    char gap48_[16];
    __int64 (***v46)();
  } v44_;
  _WORD v47[2];
  struct {
    _DWORD* v48;
    __int64 v49;
    __int64 v50;
  } v48_;

  if (a1 == 0) {
    a2[7] = 0;
    a2[8] = 0;
    a2[5] = 0;
    a2[6] = 0;
    a2[3] = 0;
    a2[4] = 0;
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
    return;
  }
  v3 = a1;
  v48_.v49 = 0;
  v48_.v50 = 0;
  v48_.v48 = nullptr;
  v47[0] = 8;
  v44_.v46 = &v44_.v44;
  v44_.v44 = GameData_204edb8;
  v44_.v45 = (__int64*)&v48_.v48;
  game_UnitSkillList_EachIndirectSkill(a1 + 1456, v47, (__int64)&v44_.v44);
  if (v44_.v46 == &v44_.v44) {
    v4 = 4;
    goto LABEL_7;
  }
  if (v44_.v46 != nullptr) {
    v4 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v44_.v46)[v4])((__int64)v44_.v46);
  }
  if ((unsigned __int8)game_Unit_GetUnknown6cba30_alt1(v3) != 2 ||
      (v5 = v48_.v48, v43 = (_DWORD*)v48_.v49, v48_.v48 == (_DWORD*)v48_.v49)) {
    v7 = nullptr;
    v6 = 0;
    v22 = nullptr;
    goto LABEL_35;
  }
  v42 = v3;
  v6 = 0;
  v7 = nullptr;
  v8 = 0;
  v9 = GameData_212c880[0];
  do {
    if ((*v5 & 0xFFF) != 0) {
      for (i = *(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * (*v5 & 0xFFF));;
           i = *(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8 * v13)) {
        v11 = *(_QWORD*)(i + 552);
        if (v11 == 0) {
          break;
        }
        v12 = *(_WORD*)(v11 + 16);
        v13 = v12 & 0xFFF;
        if ((v12 & 0xFFF) == 0) {
          break;
        }
        if ((unsigned __int64)v7 < v8) {
          *v7++ = v13;
        }
        else {
          v14 = (char*)v7 - v6;
          v15 = ((__int64)v7 - v6) >> 2;
          v16 = v15 + 1;
          if ((unsigned __int64)(v15 + 1) >> 62 != 0) {
            GameRoutine_6e3e20_alt1();
          }
          if ((__int64)(v8 - v6) >> 1 > v16) {
            v16 = (__int64)(v8 - v6) >> 1;
          }
          if (v8 - v6 >= 0x7FFFFFFFFFFFFFFCLL) {
            v17 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v17 = v16;
          }
          if (v17 != 0) {
            if (v17 >> 62 != 0) {
              GameRoutine_60a210_alt1();
            }
            v18 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v17, 16, 0);
          }
          else {
            v18 = 0;
          }
          v8 = v18 + 4 * v17;
          v19 = (unsigned __int64)v7 - v6;
          v20 = (__int64)&v14[v18 + -4 * v15];
          *(_DWORD*)&v14[v18] = v13;
          v7 = (int*)&v14[v18 + 4];
          memcpy_alt1(v20, v6, v19);
          if (v6 != 0) {
            v21 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v21 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v6);
          }
          v6 = v20;
        }
      }
    }
    ++v5;
  } while (v5 != v43);
  if ((int*)v6 == v7) {
    v3 = v42;
    v22 = (int*)v6;
  LABEL_35:
    if (v22 != v7) {
      v7 = v22;
    }
    goto LABEL_37;
  }
  GameRoutine_15a73c0(v6, v7, (2 * __clz(((__int64)v7 - v6) >> 2)) ^ 0x7E, 1);
  v3 = v42;
  v35 = (int*)(v6 + 4);
  while (v35 != v7) {
    v37 = *(v35 - 1);
    v36 = *v35++;
    if ((((unsigned __int16)v36 ^ (unsigned __int16)v37) & 0xFFF) == 0) {
      v38 = v35 - 2;
      while (v35 != v7) {
        v39 = *v35;
        if ((((unsigned __int16)*v35 ^ (unsigned __int16)v37) & 0xFFF) != 0) {
          v38[1] = v39;
          ++v38;
          LOWORD(v37) = v39;
        }
        ++v35;
      }
      v22 = v38 + 1;
      goto LABEL_35;
    }
  }
LABEL_37:
  v23 = v48_.v48;
  v24 = (_DWORD*)v48_.v49;
  if (v48_.v48 != (_DWORD*)v48_.v49) {
    do {
      v25 = (int*)v6;
      if ((int*)v6 != v7) {
        v25 = (int*)v6;
        while (((*v25 ^ *v23) & 0xFFF) != 0) {
          if (++v25 == v7) {
            goto LABEL_40;
          }
        }
      }
      if (v25 != v7) {
        v26 = (char*)v25 - v6;
        v27 = &v26[v6];
        v28 = (__int64)&v26[v6 + 4];
        v29 = (unsigned __int64)v7 - v28;
        if (v29 != 0) {
          memmove_alt1((__int64)&v26[v6], v28, v29);
        }
        v7 = (int*)&v27[v29];
      }
    LABEL_40:
      ++v23;
    } while (v23 != v24);
    v23 = v48_.v48;
    v24 = (_DWORD*)v48_.v49;
  }
  a2[7] = 0;
  a2[8] = 0;
  a2[5] = 0;
  a2[6] = 0;
  a2[3] = 0;
  a2[4] = 0;
  a2[1] = 0;
  a2[2] = 0;
  for (*a2 = 0; v23 != v24; ++v23) {
    LODWORD(v44_.v44) = *v23;
    if (((unsigned __int16)v44_.v44 & 0xFFF) != 0) {
      v30 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                       8LL * ((unsigned __int16)v44_.v44 & 0xFFF));
      if (v30 == 0 || *(_BYTE*)(v30 + 104) != 3 ||
          (unsigned int)*(unsigned __int8*)(v30 + 250) - 33 >= 2) {
        GameRoutine_6e3d00_alt1(a2, &v44_.v44);
      }
    }
  }
  if ((int*)v6 != v7) {
    v31 = (int*)v6;
    v32 = GameData_212c880[0];
    do {
      LODWORD(v44_.v44) = *v31;
      if (((unsigned __int16)v44_.v44 & 0xFFF) != 0) {
        v33 = *(_QWORD*)(*(_QWORD*)(*v32 + 64) +
                         8LL * ((unsigned __int16)v44_.v44 & 0xFFF));
        if (v33 == 0 || *(_BYTE*)(v33 + 104) != 3 ||
            (unsigned int)*(unsigned __int8*)(v33 + 250) - 33 >= 2) {
          GameRoutine_6e3d00_alt1(a2 + 3, &v44_.v44);
        }
      }
      ++v31;
    } while (v31 != v7);
  }
  if ((*(_BYTE*)(v3 + 1548) & 6) != 0) {
    v47[0] = 8;
    v44_.v46 = &v44_.v44;
    v44_.v44 = GameData_204ee38;
    v44_.v45 = a2;
    game_UnitSkillList_EachIndirectSkill(v3 + 1456, v47, (__int64)&v44_.v44);
    if (v44_.v46 == &v44_.v44) {
      v34 = 4;
      goto LABEL_82;
    }
    if (v44_.v46 != nullptr) {
      v34 = 5;
    LABEL_82:
      ((__int64 (*)(__int64))(*v44_.v46)[v34])((__int64)v44_.v46);
    }
  }
  if (v6 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v6);
  }
  if (v48_.v48 != nullptr) {
    v48_.v49 = (__int64)v48_.v48;
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, (__int64)v48_.v48);
  }
}

__attribute__((swiftcall)) void

game_gameui_Util_CollectBlazeArtsInfo_159cce0(PSEUDO_X8 x8_, __int64 a1,
                                              __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 result;
  __int64 i;
  __int64 v11;
  __int64 v12;
  __int16 v13;
  __int64 v14;
  unsigned __int64 v15;
  _DWORD* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD v29[4];
  _QWORD* v30;
  _WORD v31[2];
  int v32;
  __int64 v33;

  *a3 = 0;
  a3[1] = 0;
  a3[2] = 0;
  a3[3] = 0;
  a3[4] = 0;
  a3[5] = 0;
  a3[6] = 0;
  a3[7] = 0;
  a3[8] = 0;
  v33 = a1;
  v32 = 0;
  v31[0] = 8;
  v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v7[4] = a3;
  v30 = v7;
  *v7 = GameData_204eeb8;
  v7[1] = &v33;
  v7[2] = &v32;
  v7[3] = a2;
  game_UnitSkillList_EachIndirectSkill_alt1(a1 + 1456, v31, v29);
  if (v30 == v29) {
    v8 = 32;
    goto LABEL_5;
  }
  if (v30 != nullptr) {
    v8 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v30 + v8))((__int64)v30);
  }
  result = game_Unit_GetUnknown6cba30(v33);
  if ((unsigned __int8)result == 2 && (v32 & 0xFFF) != 0) {
    for (i = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                   8LL * (v32 & 0xFFF)) +
                        552LL);
         i != 0;
         i = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) + 8 * v14) + 552LL)) {
      v13 = *(_WORD*)(i + 16);
      v14 = v13 & 0xFFF;
      if ((v13 & 0xFFF) == 0) {
        break;
      }
      v16 = (_DWORD*)a3[4];
      v15 = a3[5];
      if ((unsigned __int64)v16 < v15) {
        *v16 = v14;
        v11 = (__int64)(v16 + 1);
      }
      else {
        v17 = a3[3];
        v18 = (char*)v16 - v17;
        v19 = ((__int64)v16 - v17) >> 2;
        v20 = v19 + 1;
        if ((unsigned __int64)(v19 + 1) >> 62 != 0) {
          GameRoutine_6e3e20();
        }
        v21 = v15 - v17;
        if (v21 >> 1 > v20) {
          v20 = v21 >> 1;
        }
        v22 = (unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFFCLL
                  ? 0x3FFFFFFFFFFFFFFFLL
                  : v20;
        if (v22 != 0) {
          if (v22 >> 62 != 0) {
            GameRoutine_60a210(result);
          }
          v23 = fw_memory_HeapManager_Allocate(*v6, 4 * v22, 16, 0);
        }
        else {
          v23 = 0;
        }
        v24 = v23 + 4 * v22;
        v25 = (char*)v16 - v17;
        v26 = (__int64)&v18[v23 + -4 * v19];
        *(_DWORD*)&v18[v23] = v14;
        v11 = (__int64)&v18[v23 + 4];
        result = memcpy(v26, v17, v25);
        a3[3] = v26;
        a3[4] = v11;
        a3[5] = v24;
        if (v17 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*v6 + 200LL) == 0) {
            v27 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt1(*v6 + v27);
        }
      }
      v12 = GameData_21c99b0;
      a3[4] = v11;
    }
  }
  if ((*(_BYTE*)(v33 + 1548) & 6) != 0) {
    v31[0] = 8;
    v29[0] = GameData_204ef38;
    v29[1] = a3;
    v30 = v29;
    game_UnitSkillList_EachIndirectSkill_alt1(v33 + 1456, v31, v29);
    result = (__int64)v30;
    if (v30 == v29) {
      v28 = 32;
    }
    else {
      if (v30 == nullptr) {
        result;
        return;
      }
      v28 = 40;
    }
    {
      (*(__int64 (**)(__int64))(*v30 + v28))((__int64)v30);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 game_gameui_Util_IsVisibleSpecialPage(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  unsigned __int8 v15;

  v3 = v13;
  v15 = 0;
  v13[0] = GameData_204efb8;
  v13[1] = &v15;
  v4 = *(_BYTE*)(a1 + 1536);
  v14 = v13;
  if ((v4 & 8) == 0) {
    goto LABEL_12;
  }
  v5 = *(_QWORD*)(a1 + 1496);
  v6 = *(_QWORD*)(a1 + 1488);
  if ((int)((unsigned __int64)(v5 - v6) >> 2) < 1) {
    v3 = v13;
  LABEL_12:
    v11 = 32;
    goto LABEL_13;
  }
  v7 = 0;
  v8 = 0;
  v9 = GameData_212c880[0];
  v10 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                             8LL * (*(_DWORD*)(v6 + v7) & 0xFFF)) +
                  104LL) == 3) {
      if (v14 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(v14, v6 + v7);
      v10 = *v9;
      v5 = *(_QWORD*)(a1 + 1496);
      v6 = *(_QWORD*)(a1 + 1488);
    }
    ++v8;
    v7 += 4;
  } while (v8 < (int)((unsigned __int64)(v5 - v6) >> 2));
  v3 = v14;
  if (v14 == v13) {
    goto LABEL_12;
  }
  if (v14 != nullptr) {
    v11 = 40;
  LABEL_13:
    (*(void (**)(_QWORD*, __int64))(*v3 + v11))(v3, a2);
  }
  return v15;
}

__int64 game_gameui_Util_SetUnitInfoDetail_lambda0_Invoke(__int64 a1, int* a2)
{
  int* v2;
  int v4;
  __int64* v5;

  v2 = *(int**)(a1 + 16);
  v4 = *v2;
  v5 = *(__int64**)(a1 + 8);
  ++*v2;
  return GameRoutine_15735c0(v5, v4, a2);
}

__int64 game_gameui_Util_CountAvailableArtsNum_lambda0_Invoke(__int64 result,
                                                              unsigned int* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *a2;
  v3 = **(_QWORD**)(result + 8);
  v4 = *(_QWORD*)(v3 + 1072);
  if (((v2 >> 5) & 0x7F) + 1 > (*(_QWORD*)(v3 + 1080) - v4) >> 2 ||
      ((*(_DWORD*)(v4 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) == 0) {
    ++**(_DWORD**)(result + 16);
  }
  return result;
}

__int64 game_gameui_Util_SetUnitInfoTraining_lambda0_Invoke(__int64 a1,
                                                            unsigned __int8* a2,
                                                            int* a3)
{
  __int64 v3;
  int v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  int v10;
  bool v11;
  __int64 v12;
  char* v13;
  __int64 v15;
  char* v16;
  _QWORD* v17;
  __int64 v18;
  unsigned int v19;
  unsigned __int64 v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  char v32;
  char v33;
  __int64 v34;
  int v35;
  int v36;

  v3 = *a2;
  v4 = *a3;
  if ((v3 & 0xFFFFFFFD) != 9) {
    goto LABEL_6;
  }
  v6 = *(_QWORD*)(a1 + 8);
  v7 = *(_QWORD*)(v6 + 1744);
  v8 = *(unsigned int*)((char*)((_UNKNOWN*)0x1B4LL) +
                        game_g_shared_system_skills_ptr);
  v9 = *(_QWORD*)(v6 + 1752) - v7;
  v35 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1B4LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if (((v8 >> 5) & 0x7F) + 1 > v9 >> 2) {
    goto LABEL_6;
  }
  if (((*(_DWORD*)(v7 + 4 * ((v8 >> 5) & 0x7F)) >> v8) & 1) != 0 &&
      (v10 = v4, v11 = game_HasActiveSkill_843420_alt1(&v35, v6 + 1744),
       v4 = v10, v11)) {
    v12 = **(_QWORD**)(a1 + 16);
    v13 = game_util_Format_alt3("L_MasteryInfoItem%02d/Bg", v4);
    return ui_LayoutAccessor_SetPaneVisible_alt1(v12, (__int64)v13, 0);
  }
  else {
  LABEL_6:
    v15 = **(_QWORD**)(a1 + 16);
    v16 = game_util_Format_alt3("L_MasteryInfoItem%02d/Bg", v4);
    v17 = *(_QWORD**)(a1 + 8);
    v18 = (__int64)v16;
    v19 = *((unsigned __int8*)v17 + v3 + 540);
    v20 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v20 < 1) {
      goto LABEL_31;
    }
    v21 = 0;
    if ((unsigned int)v20 >= 0xC) {
      v22 = 12;
    }
    else {
      v22 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v23 = *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v20 - 1));
    v24 = *(_DWORD*)(GameData_21d99a8 + 4LL * v22 - 4);
    if (v23 >= v24) {
      v23 = v24;
    }
    v25 = v24 >= (signed __int32)*(_DWORD*)GameData_21d99a8
              ? v23
              : *(_DWORD*)GameData_21d99a8;
    while (1) {
      v26 = (unsigned int)(v21 + v20) >> 1;
      v27 = *(_DWORD*)(GameData_21d99a8 + 4LL * v26);
      if (v25 == v27) {
        break;
      }
      if (v25 < v27) {
        LODWORD(v20) = (unsigned int)(v21 + v20) >> 1;
      }
      else {
        v21 = v26 + 1;
      }
      if (v21 >= (int)v20) {
        if (v19 >= (unsigned __int8)v21) {
          goto LABEL_31;
        }
        goto LABEL_24;
      }
    }
    if (v19 >= (unsigned __int8)(v26 + 1)) {
      goto LABEL_31;
    }
  LABEL_24:
    if ((v28 = v17[218], v29 = v17[219] - v28,
         v36 = game_g_shared_system_skills & 0xFFF,
         (v30 = ((unsigned __int64)(unsigned int)game_g_shared_system_skills >>
                 5) &
                0x7F) +
                 1 <=
             v29 >> 2) &&
        ((*(_DWORD*)(v28 + 4LL * (unsigned int)v30) >>
          game_g_shared_system_skills) &
         1) != 0 &&
        game_HasActiveSkill_843420_alt1(&v36, (__int64)(v17 + 218)) &&
        ((v31 = v17[55]) == 0 ? (v32 = 9) : (v32 = *(_BYTE*)(v31 + 16)),
         ((1 << v32) & 0xF1) != 0)) {
    LABEL_31:
      v33 = 0;
    }
    else {
      v34 = v17[55];
      v33 = v34 == 0 ||
            (unsigned int)*(unsigned __int8*)(v34 + 16) - 4 < 0xFFFFFFFD;
    }
    return ui_LayoutAccessor_SetPaneVisible_alt1(v15, v18, v33);
  }
}

__int64 game_gameui_Util_SetUnitInfoMasteryLevel_lambda0_Invoke(__int64 a1,
                                                                __int64 a2,
                                                                int* a3)
{
  __int64 result;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    v5 = *a3;
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v6 = *(__int64**)(a1 + 8);
      v7 = result;
      if (v6 != nullptr) {
        v8 = game_util_Format("L_MasteryInfoItem%02d", v5);
        LayoutAccessor_1560070((void*)(&v11), v6, v8);
        result = v12;
        if (v12 != 0) {
          v9 = std___1___shared_weak_count_lock(v12);
          v10 = v11;
          result = v12;
          if (v12 != 0) {
            result = std___1___shared_weak_count___release_weak(v12);
          }
          if (v9 != 0 && v10 != 0) {
            result = LayoutAccessor_1562680_alt1(v10, "Accent_Off", 1.0f);
            goto LABEL_11;
          }
          if (v9 != 0) {
          LABEL_11:
            if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
              result = std___1___shared_weak_count___release_weak(v9);
            }
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  return result;
}

__int64 game_gameui_Util_SetPartsItemIcon_lambda0_Invoke(__int64 a1,
                                                         __int64* a2)
{
  __int64 v2;

  v2 = *a2;
  if (v2 != 0) {
    return GameRoutine_136a920(ui_Manager_instance_ + 1264, v2, 0, 7,
                               "IconEmpty");
  }
  else {
    return 0;
  }
}

__int64 game_gameui_Util_SetSkillInfo_lambda0_Invoke(__int64 result, __int64 a2)
{
  __int64 v2;
  int v4;
  __int64 v5;

  v2 = *(_QWORD*)(result + 16);
  v4 = **(_DWORD**)(result + 8);
  if (v4 < (signed __int32)*(_DWORD*)(v2 + 16)) {
    v5 = result;
    result = Util_157f3e0_alt1(*(__int64**)(result + 24), v4,
                               *(const char**)(v2 + 8), a2, 1);
    ++**(_DWORD**)(v5 + 8);
  }
  return result;
}

__int64 game_gameui_Util_SetMasteryInfo_lambda0_Invoke(__int64 a1, __int64 a2,
                                                       unsigned int* a3)
{
  __int64* v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  _QWORD v9[2];
  _BYTE* v10;
  __int64 v11;

  v3 = *(__int64**)(a1 + 8);
  v9[0] = game_util_Format(*(const char**)(a1 + 16), *a3);
  v9[1] = strlen(v9[0]);
  result =
      X8CALL_X0(__int64, game_gameui_15ad0c0((void*)((__int64*)&v10), v3, v9));
  v5 = v11;
  if (v11 != 0) {
    v6 = std___1___shared_weak_count_lock(v11);
    v7 = v10;
    v8 = v6;
    result = std___1___shared_weak_count___release_weak(v5);
    if (v8 != 0 && v7 != nullptr) {
      v7[1073] = 15;
      result = (*(__int64 (**)(_BYTE*, _QWORD))(*(_QWORD*)v7 + 40LL))(v7, 0);
    }
    else if (v8 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      return std___1___shared_weak_count___release_weak(v8);
    }
  }
  return result;
}

__int64 game_gameui_Util_SetSkillExpBonus_lambda0_Invoke(__int64 result,
                                                         unsigned __int8* a2)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  char* v12;
  __int64 v13;
  struct {
    __int64* v14;
    __int64 v15;
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
  } v14_;

  v2 = *a2;
  v3 = *(char*)(**(_QWORD**)(result + 16) + v2 + 398);
  if (v3 >= 1) {
    v4 = *(__int64**)(result + 8);
    v5 = result;
    v6 = game_util_Format_alt3("L_Bonus_%02d", **(_DWORD**)(result + 24));
    LayoutAccessor_1560070_alt1((void*)(&v14_.v14), v4, v6);
    result = v14_.v15;
    if (v14_.v15 != 0) {
      v7 = std___1___shared_weak_count_lock_alt1(v14_.v15);
      v8 = v14_.v14;
      result = v14_.v15;
      if (v14_.v15 != 0) {
        result = std___1___shared_weak_count___release_weak_alt2(v14_.v15);
      }
      if (v7 != 0 && v8 != nullptr) {
        v9 = ui_LayoutAccessor_FindPane_alt1(v8, (__int64)"Img");
        if (v9 != 0) {
          v9 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d678[0], 0);
        }
        GameRoutine_1841190_alt1(v9, v2);
        v14_.v20 = -1;
        v14_.v21 = -1;
        v14_.v22 = -1;
        v14_.v23 = -1;
        v10 = *msg_MessageManager_instance__ptr[0];
        v14_.v24 = -1;
        v14_.v25 = -1;
        v14_.v26 = -1;
        v14_.v27 = -1;
        v14_.v28 = -1;
        v14_.v29 = -1;
        v14_.v30 = -1;
        v14_.v31 = -1;
        v14_.v14 = GameData_212e348 + 2;
        v14_.v15 = 0xFFFF0001FFFF0000LL;
        v14_.v16 = 0xFFFF0004FFFF0002LL;
        v14_.v17 = 0xFFFF0006FFFF0005LL;
        v14_.v32 = 8;
        v14_.v18 = -65529;
        v14_.v19 = -65528;
        v11 = GameRoutine_a4dbe0_alt2(v10, "MID_Sys_Plus", 0);
        v12 = game_util_Format_alt3("%s%d", v11, v3);
        v13 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Num");
        if (v13 != 0) {
          GameRoutine_156c5d0(v13, (__int64)v12, 0);
        }
        result = LayoutAccessor_155e830((__int64)v8, 1);
        goto LABEL_13;
      }
      if (v7 != 0) {
      LABEL_13:
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          result = std___1___shared_weak_count___release_weak_alt2(v7);
        }
      }
    }
    ++**(_DWORD**)(v5 + 24);
  }
  return result;
}

__int64 game_gameui_Util_GetMorphRage_lambda0_Invoke(__int64 result, _DWORD* a2)
{
  if (((*a2 ^ **(_DWORD**)(result + 8)) & 0xFFF) == 0) {
    **(_QWORD**)(result + 16) = a2;
  }
  return result;
}

__int64 game_gameui_Util_SetEfficacyIcons_lambda0_Invoke(__int64 result,
                                                         _DWORD* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *a2 & 0xFFF;
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v2) +
                250LL) == 2) {
    v3 = *(__int64**)(result + 8);
    v5 = (int*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 2) + 1;
      if (v9 >> 62 != 0) {
        GameRoutine_6e5a20();
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 1 > v9) {
        v9 = v10 >> 1;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFFCLL) {
        v12 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 62 != 0) {
          GameRoutine_60a210(result);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 4 * v12;
      v15 = v13 + v8 - 4 * (v8 >> 2);
      *(_DWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 4;
      result = memcpy(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
      }
    }
    else {
      *v5 = *a2 & 0xFFF;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

__int64 game_gameui_Util_SetEfficacyIcons_lambda1_Invoke(__int64 result,
                                                         _DWORD* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *a2 & 0xFFF;
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v2) +
                250LL) == 1) {
    v3 = *(__int64**)(result + 8);
    v5 = (int*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 2) + 1;
      if (v9 >> 62 != 0) {
        GameRoutine_6e5a20();
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 1 > v9) {
        v9 = v10 >> 1;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFFCLL) {
        v12 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 62 != 0) {
          GameRoutine_60a210(result);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 4 * v12;
      v15 = v13 + v8 - 4 * (v8 >> 2);
      *(_DWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 4;
      result = memcpy(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
      }
    }
    else {
      *v5 = *a2 & 0xFFF;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

__int64 game_gameui_Util_SetIconTxtNum_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  int v4;
  __int64 v5;

  v2 = *a2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22594f0) != 0) {
    GameData_22594e8 = -1;
    __cxa_guard_release(&GameData_22594f0);
  }
  if (v2 != 0) {
    v4 = GameData_22594e8;
    v5 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 88LL))(v2, 0);
    if (v5 != 0) {
      *(_DWORD*)(v5 + 12) = v4;
    }
  }
  return GameRoutine_1841930(
      v2,
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                            8LL * *(unsigned __int8*)(*(_QWORD*)(a1 + 8) +
                                                      12LL)) +
                 64LL),
      0);
}

__int64 game_gameui_Util_SetIconTxtNum_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  int v4;
  __int64 v5;
  __int64 v6;
  char* v7;

  v2 = *a2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22594f0) != 0) {
    GameData_22594e8 = -1;
    __cxa_guard_release(&GameData_22594f0);
  }
  if (v2 != 0) {
    v4 = GameData_22594e8;
    v5 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 88LL))(v2, 0);
    if (v5 != 0) {
      *(_DWORD*)(v5 + 12) = v4;
    }
  }
  if (v2 == 0) {
    return 0;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                  8LL * *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 24LL));
  if (v6 == 0) {
    return 0;
  }
  if ((unsigned int)*(unsigned __int8*)(v6 + 32) - 1 > 4) {
    v7 = &GameData_1a9f09e;
  }
  else {
    v7 =
        (char*)*(&GameData_204f348 + (unsigned __int8)(*(_BYTE*)(v6 + 32) - 1));
  }
  return GameRoutine_136a920(ui_Manager_instance_ + 1264, v2, 0, 2, v7);
}

__int64 game_gameui_Util_SetIconTxtNum_lambda2_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  int v4;
  __int64 v5;

  v2 = *a2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22594f0) != 0) {
    GameData_22594e8 = -1;
    __cxa_guard_release(&GameData_22594f0);
  }
  if (v2 != 0) {
    v4 = GameData_22594e8;
    v5 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 88LL))(v2, 0);
    if (v5 != 0) {
      *(_DWORD*)(v5 + 12) = v4;
    }
  }
  return GameRoutine_1841930(
      v2,
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                 8LL * (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 88LL) & 0xFFF)),
      0);
}

__int64 game_gameui_Util_SetIconTxtNum_lambda3_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int* v4;
  int v5;
  __int64 v6;
  char* v7;
  int v9;

  v2 = *a2;
  v3 = **(unsigned int**)(a1 + 8);
  if ((unsigned int)v3 >= 8) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                              memory_order_acquire) &
         1) != 0) {
      v4 = &GameData_22594e8;
    }
    else {
      v9 = __cxa_guard_acquire(&GameData_22594f0);
      v4 = &GameData_22594e8;
      if (v9 != 0) {
        GameData_22594e8 = -1;
        __cxa_guard_release(&GameData_22594f0);
        v4 = &GameData_22594e8;
      }
    }
  }
  else {
    v4 = &GameData_22593d4;
  }
  if (v2 == 0) {
    return 0;
  }
  v5 = *v4;
  v6 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 88LL))(v2, 0);
  if (v6 != 0) {
    *(_DWORD*)(v6 + 12) = v5;
  }
  if ((unsigned int)v3 > 7) {
    v7 = &GameData_1a9f09e;
  }
  else {
    v7 = GameData_204f370[v3];
  }
  return GameRoutine_136a920(ui_Manager_instance_ + 1264, v2, 0, 7, v7);
}

__int64 game_gameui_Util_SetIconTxtDelivery_lambda0_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int* v4;
  int v5;
  __int64 v6;
  char* v7;
  int v9;

  v2 = *a2;
  v3 = **(unsigned int**)(a1 + 8);
  if ((unsigned int)v3 >= 8) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                              memory_order_acquire) &
         1) != 0) {
      v4 = &GameData_22594e8;
    }
    else {
      v9 = __cxa_guard_acquire(&GameData_22594f0);
      v4 = &GameData_22594e8;
      if (v9 != 0) {
        GameData_22594e8 = -1;
        __cxa_guard_release(&GameData_22594f0);
        v4 = &GameData_22594e8;
      }
    }
  }
  else {
    v4 = &GameData_22593d4;
  }
  if (v2 == 0) {
    return 0;
  }
  v5 = *v4;
  v6 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 88LL))(v2, 0);
  if (v6 != 0) {
    *(_DWORD*)(v6 + 12) = v5;
  }
  if ((unsigned int)v3 > 7) {
    v7 = &GameData_1a9f09e;
  }
  else {
    v7 = GameData_204f370[v3];
  }
  return GameRoutine_136a920(ui_Manager_instance_ + 1264, v2, 0, 7, v7);
}

__attribute__((swiftcall)) void

game_gameui_Util_SetBasicStatusForUnitInfo_lambda0_Invoke(PSEUDO_X8 x8_,
                                                          __int64 a1, int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  unsigned int v6;
  char v7;
  _QWORD* v8;
  int v9;
  _QWORD* v10;
  int v11;
  int v12;
  _QWORD* v13;
  int v14;
  __int64 result;
  _DWORD* v16;
  char v17[4];
  char v18[4];
  char v19[4];

  v3 = *a2;
  v6 = *a2 - 28;
  if (v6 > 9) {
    v7 = 11;
  }
  else {
    v7 = GameData_1be04b8[v6];
  }
  v8 = *(_QWORD**)(a1 + 8);
  v19[0] = v7;
  v9 = game_Unit_GetParam(*v8, v19, 1);
  v10 = *(_QWORD**)(a1 + 8);
  v11 = v9;
  v18[0] = v7;
  v12 = game_Unit_GetParam(*v10, v18, 0);
  v13 = *(_QWORD**)(a1 + 8);
  v14 = v12;
  v17[0] = v7;
  result = game_Unit_GetParamLimit(*v13, v17);
  v16 = *(_DWORD**)(a1 + 16);
  *(_DWORD*)a3 = v3;
  *(_WORD*)(a3 + 4) = 1;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_DWORD*)(a3 + 56) = 0;
  *(_DWORD*)(a3 + 16) = v11;
  *(_DWORD*)(a3 + 20) = v14;
  *(_DWORD*)(a3 + 24) = result;
  *v16 += v14;
  **(_DWORD**)(a1 + 24) += result;
  *(_DWORD*)(a3 + 8) = -1;
  {
    result;
    return;
  }
}

__int64 game_gameui_Util_SetStatusForClassChange_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2)
{
  int* v2;
  int v5;
  __int64* v6;
  __int64 result;
  __int64 v8;
  __int64* v9;
  const char* v10[2];
  struct {
    __int64* v11;
    __int64 v12;
  } v11_;

  v2 = *(int**)(a1 + 16);
  v5 = *v2;
  v6 = **(__int64***)(a1 + 8);
  ++*v2;
  v10[0] = game_util_Format_alt3("L_ClassSkillItem%02d", v5);
  v10[1] = (const char*)strlen_alt1(v10[0]);
  GameRoutine_15883c0_alt1((void*)(&v11_.v11), v6, (__int64*)v10);
  result = v11_.v12;
  if (v11_.v12 != 0) {
    v8 = std___1___shared_weak_count_lock_alt1(v11_.v12);
    v9 = v11_.v11;
    result = v11_.v12;
    if (v11_.v12 != 0) {
      result = std___1___shared_weak_count___release_weak_alt2(v11_.v12);
    }
    if (v8 != 0 && v9 != nullptr) {
      result = GameHr_18b3670(v9, a2, **(_QWORD**)(a1 + 24), 1);
    }
    else if (v8 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      return std___1___shared_weak_count___release_weak_alt2(v8);
    }
  }
  return result;
}

__int64 game_gameui_Util_SetStatusForClassChange_lambda2_Invoke(__int64 a1,
                                                                int* a2,
                                                                _DWORD* a3)
{
  int v3;
  __int64* v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;

  v3 = *a2;
  v5 = **(__int64***)(a1 + 8);
  v6 = game_util_Format("L_Status%02d", *a3);
  LayoutAccessor_1560070((void*)(&v23), v5, v6);
  result = v24;
  if (v24 != 0) {
    v8 = std___1___shared_weak_count_lock(v24);
    result = v24;
    if (v8 != 0) {
      v9 = v23;
    }
    else {
      v9 = 0;
    }
    if (v24 != 0) {
      result = std___1___shared_weak_count___release_weak(v24);
    }
    if (v9 != 0) {
      if ((unsigned int)(v3 - 28) > 9) {
        v10 = 11;
      }
      else {
        v10 = (unsigned __int8)GameData_1be04b8[v3 - 28];
      }
      v11 = 2LL * v10;
      v12 = *(__int16*)(*(_QWORD*)(a1 + 16) + v11);
      v13 = *(__int16*)(*(_QWORD*)(a1 + 24) + v11);
      v14 = **(_QWORD**)(a1 + 32);
      LOBYTE(v23) = v10;
      v15 = game_Unit_GetParamLimit(v14, &v23);
      v16 = **(_QWORD**)(a1 + 40);
      LOBYTE(v23) = v10;
      v17 = game_Unit_GetParamLimit(v16, &v23);
      v18 = *(__int16*)(*(_QWORD*)(a1 + 48) + v11);
      v19 = **(_QWORD**)(a1 + 40);
      LOBYTE(v23) = v10;
      v20 = v12 - v18 + v15;
      v21 = game_Unit_GetParam(v19, &v23, 0);
      v23 = v9;
      v24 = v8;
      v22 = v13 - v21 + v17;
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_1587220(&v23, **(_QWORD**)(a1 + 40), v3, v12, v20, v13, v22,
                            **(_BYTE**)(a1 + 56), 0);
        result = std___1___shared_weak_count___release_weak(v8);
      }
      else {
        result = GameRoutine_1587220(&v23, **(_QWORD**)(a1 + 40), v3, v12, v20,
                                     v13, v22, **(_BYTE**)(a1 + 56), 0);
      }
      **(_DWORD**)(a1 + 64) += v12;
      **(_DWORD**)(a1 + 72) += v13;
      **(_DWORD**)(a1 + 80) += v20;
      **(_DWORD**)(a1 + 88) += v22;
    }
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      return std___1___shared_weak_count___release_weak(v8);
    }
  }
  return result;
}

void game_gameui_Util_SetGrowthRateInfo_lambda0_Invoke(__int64 a1, int* a2,
                                                       _DWORD* a3)
{
  int v3;
  __int64* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;

  v3 = *a2;
  v5 = **(__int64***)(a1 + 8);
  v6 = game_util_Format_alt3("L_Status%02d", *a3);
  LayoutAccessor_1560070_alt1((void*)(&v14_.v14), v5, v6);
  if (v14_.v15 != 0) {
    v7 = std___1___shared_weak_count_lock_alt1(v14_.v15);
    if (v7 != 0) {
      v8 = v14_.v14;
    }
    else {
      v8 = 0;
    }
    if (v14_.v15 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v14_.v15);
    }
    if (v8 != 0) {
      if ((unsigned int)(v3 - 28) > 9) {
        v9 = 11;
      }
      else {
        v9 = GameData_1be04b8_alt1[v3 - 28];
      }
      v10 = **(_QWORD**)(a1 + 16);
      LOBYTE(v14_.v14) = v9;
      v11 = GameHr_6d5d00(v10, (unsigned __int8*)&v14_.v14,
                          *(_QWORD*)(v10 + 392), *(_QWORD*)(v10 + 400), 1);
      v12 = **(_QWORD**)(a1 + 24);
      LOBYTE(v14_.v14) = v9;
      v13 = GameHr_6d5d00(v12, (unsigned __int8*)&v14_.v14,
                          *(_QWORD*)(v12 + 392), *(_QWORD*)(v12 + 400), 1);
      v14_.v14 = v8;
      v14_.v15 = v7;
      if (v7 == 0) {
        GameRoutine_1587220_alt1((__int64)&v14_.v14, **(_QWORD**)(a1 + 24), v3,
                                 v11, -1, v13, -1, **(_BYTE**)(a1 + 32), 1);
        return;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_1587220_alt1((__int64)&v14_.v14, **(_QWORD**)(a1 + 24), v3,
                               v11, -1, v13, -1, **(_BYTE**)(a1 + 32), 1);
      std___1___shared_weak_count___release_weak_alt2(v7);
    }
    else if (v7 == 0) {
      return;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt2(v7);
    }
  }
}

__attribute__((swiftcall)) void

game_gameui_Util_SetGrowthRateForUnitInfo_lambda0_Invoke(PSEUDO_X8 x8_,
                                                         __int64 result,
                                                         int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v4;
  char v5;
  bool v6;
  _QWORD* v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  int v11;
  int v13;
  char v14[4];
  char v15[4];

  v4 = *a2;
  if ((**(_BYTE**)(result + 8) & 1) == 0) {
    *(_DWORD*)a3 = v4;
    *(_WORD*)(a3 + 4) = 0;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 8) = -1;
    *(_BYTE*)(a3 + 16) = 1;
    if (v4 != 40) {
      result;
      return;
    }
    if ((unsigned __int8)GameData_21759e0 == 122) {
      v13 = 41;
      if ((GameData_21759e0 & 0xFFFFFF000000LL) != 0x6E6148000000LL ||
          BYTE1(GameData_21759e0) != 104 || BYTE2(GameData_21759e0) != 45) {
        goto LABEL_29;
      }
      if (BYTE6(GameData_21759e0) != 116 && BYTE6(GameData_21759e0) != 115 ||
          HIBYTE(GameData_21759e0) != 0) {
        goto LABEL_30;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 == 107) {
      if (BYTE1(GameData_21759e0) != 111 || BYTE2(GameData_21759e0) != 0) {
        goto LABEL_30;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 != 106 ||
             (BYTE1(GameData_21759e0) == 97
                  ? (v6 = BYTE2(GameData_21759e0) == 0)
                  : (v6 = false),
              !v6)) {
    LABEL_30:
      *(_DWORD*)a3 = 41;
      {
        result;
        return;
      }
    }
    v13 = 40;
  LABEL_29:
    *(_DWORD*)a3 = v13;
    {
      result;
      return;
    }
  }
  if ((unsigned int)(v4 - 28) > 9) {
    v5 = 11;
  }
  else {
    v5 = GameData_1be04b8[v4 - 28];
  }
  v7 = *(_QWORD**)(result + 16);
  v15[0] = v5;
  v8 = result;
  v9 = GameRoutine_6d5d00(*v7, v15, *(_QWORD*)(*v7 + 392LL),
                          *(_QWORD*)(*v7 + 400LL), 1);
  v10 = *(_QWORD**)(v8 + 16);
  v11 = v9;
  v14[0] = v5;
  result = GameRoutine_6d5d00(*v10, v14, *(_QWORD*)(*v10 + 392LL),
                              *(_QWORD*)(*v10 + 400LL), 0);
  *(_DWORD*)a3 = v4;
  *(_WORD*)(a3 + 4) = 1;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_DWORD*)(a3 + 56) = 0;
  *(_DWORD*)(a3 + 16) = v11;
  *(_DWORD*)(a3 + 20) = result;
  *(_DWORD*)(a3 + 8) = -1;
  *(_DWORD*)(a3 + 24) = -1;
  {
    result;
    return;
  }
}

__int64 game_gameui_Util_GetNewSkillList_lambda0_Invoke(__int64 result,
                                                        _DWORD* a2)
{
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(__int64**)(result + 8);
  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v5 = (_QWORD*)v2[1];
  v4 = v2[2];
  if ((unsigned __int64)v5 >= v4) {
    v7 = *v2;
    v8 = (__int64)v5 - *v2;
    v9 = (v8 >> 3) + 1;
    if (v9 >> 61 != 0) {
      GameRoutine_705570();
    }
    v10 = v4 - v7;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 2 > v9) {
      v9 = v10 >> 2;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 8 * v12;
    v15 = v13 + v8 - 8 * (v8 >> 3);
    *(_QWORD*)(v13 + v8) = v3;
    v6 = v13 + v8 + 8;
    result = memcpy(v15, v7, v8);
    *v2 = v15;
    v2[1] = v6;
    v2[2] = v14;
    if (v7 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
    }
  }
  else {
    *v5 = v3;
    v6 = (__int64)(v5 + 1);
  }
  v2[1] = v6;
  return result;
}

__int64 game_gameui_Util_GetNewSkillList_lambda2_Invoke(__int64 result, int* a2)
{
  char** v2;
  char* v3;
  char* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  char* v9;
  int v11;
  __int64 v12;
  char* v13;
  char* v14;
  __int64 v15;

  v2 = *(char***)(result + 8);
  v4 = *v2;
  v3 = v2[1];
  if (*v2 != v3) {
    v5 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    v6 = v3 - v4 - 8;
    if ((~(_BYTE)v6 & 0x18) != 0) {
      v7 = ((unsigned __int8)((unsigned int)v6 >> 3) + 1) & 3;
      while (*(_QWORD*)v4 != v5) {
        v4 += 8;
        if (--v7 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v6 < 0x18) {
        return result;
      }
      for (v4 += 16;; v4 += 32) {
        if (*((_QWORD*)v4 - 2) == v5) {
          v4 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD*)v4 - 1) == v5) {
          v4 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD*)v4 == v5) {
          goto LABEL_17;
        }
        if (*((_QWORD*)v4 + 1) == v5) {
          break;
        }
        v8 = v4 + 16;
        if (v8 == v3) {
          return result;
        }
      }
      v4 += 8;
    }
  }
LABEL_17:
  v9 = v4 + 8;
  if (v4 != v3 && v9 != v3) {
    v11 = *a2;
    v12 = GameData_21c99b0;
    do {
      if (*(_QWORD*)v9 !=
          *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (v11 & 0xFFF))) {
        *(_QWORD*)v4 = *(_QWORD*)v9;
        v4 += 8;
        v12 = GameData_21c99b0;
        v11 = *a2;
      }
      v9 += 8;
    } while (v9 != v3);
    v3 = *(char**)(*(_QWORD*)(result + 8) + 8LL);
  }
  if (v4 != v3) {
    v13 = v3;
    v14 = v2[1];
    v15 = v14 - v13;
    if (v14 != v13) {
      result = memmove(v4, v13, v14 - v13);
    }
    v2[1] = &v4[v15];
  }
  return result;
}

__int64 game_gameui_Util_GetNewMagicList_lambda0_Invoke(__int64 a1, _DWORD* a2)
{
  __int64* v4;
  __int64 result;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v4 = GameData_212c880[0];
  result = GameRoutine_6fbae0(
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF)),
      **(_QWORD**)(a1 + 16));
  if (result != 0 &&
      (unsigned int)*(unsigned __int8*)(*(_QWORD*)(result + 24) + 584LL) - 1 <=
          1) {
    v6 = *(__int64**)(a1 + 8);
    v7 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (*a2 & 0xFFF));
    v9 = (_QWORD*)v6[1];
    v8 = v6[2];
    if ((unsigned __int64)v9 >= v8) {
      v11 = *v6;
      v12 = (__int64)v9 - *v6;
      v13 = (v12 >> 3) + 1;
      if (v13 >> 61 != 0) {
        GameRoutine_705570();
      }
      v14 = v8 - v11;
      v15 = fw_memory_g_heap_manager_ptr;
      if (v14 >> 2 > v13) {
        v13 = v14 >> 2;
      }
      if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v13;
      }
      if (v16 != 0) {
        if (v16 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v17 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
      }
      else {
        v17 = 0;
      }
      v18 = v17 + 8 * v16;
      v19 = v17 + v12 - 8 * (v12 >> 3);
      *(_QWORD*)(v17 + v12) = v7;
      v10 = v17 + v12 + 8;
      result = memcpy(v19, v11, v12);
      *v6 = v19;
      v6[1] = v10;
      v6[2] = v18;
      if (v11 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v20 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v20, v11);
      }
    }
    else {
      *v9 = v7;
      v10 = (__int64)(v9 + 1);
    }
    v6[1] = v10;
  }
  return result;
}

__int64 game_gameui_Util_GetNewMagicList_lambda2_Invoke(__int64 result, int* a2)
{
  char** v2;
  char* v3;
  char* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  char* v9;
  int v11;
  __int64 v12;
  char* v13;
  char* v14;
  __int64 v15;

  v2 = *(char***)(result + 8);
  v4 = *v2;
  v3 = v2[1];
  if (*v2 != v3) {
    v5 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    v6 = v3 - v4 - 8;
    if ((~(_BYTE)v6 & 0x18) != 0) {
      v7 = ((unsigned __int8)((unsigned int)v6 >> 3) + 1) & 3;
      while (*(_QWORD*)v4 != v5) {
        v4 += 8;
        if (--v7 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v6 < 0x18) {
        return result;
      }
      for (v4 += 16;; v4 += 32) {
        if (*((_QWORD*)v4 - 2) == v5) {
          v4 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD*)v4 - 1) == v5) {
          v4 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD*)v4 == v5) {
          goto LABEL_17;
        }
        if (*((_QWORD*)v4 + 1) == v5) {
          break;
        }
        v8 = v4 + 16;
        if (v8 == v3) {
          return result;
        }
      }
      v4 += 8;
    }
  }
LABEL_17:
  v9 = v4 + 8;
  if (v4 != v3 && v9 != v3) {
    v11 = *a2;
    v12 = GameData_21c99b0;
    do {
      if (*(_QWORD*)v9 !=
          *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (v11 & 0xFFF))) {
        *(_QWORD*)v4 = *(_QWORD*)v9;
        v4 += 8;
        v12 = GameData_21c99b0;
        v11 = *a2;
      }
      v9 += 8;
    } while (v9 != v3);
    v3 = *(char**)(*(_QWORD*)(result + 8) + 8LL);
  }
  if (v4 != v3) {
    v13 = v3;
    v14 = v2[1];
    v15 = v14 - v13;
    if (v14 != v13) {
      result = memmove(v4, v13, v14 - v13);
    }
    v2[1] = &v4[v15];
  }
  return result;
}

__int64

game_gameui_Util_IsGrowStatusClearMerge_lambda0_Invoke(__int64 result,
                                                       unsigned __int8* a2)
{
  if (*(unsigned __int16*)(**(_QWORD**)(result + 8) + 2LL * *a2 + 514) !=
      *(unsigned __int16*)(**(_QWORD**)(result + 16) + 2LL * *a2 + 514)) {
    **(_BYTE**)(result + 24) = 1;
  }
  return result;
}

__attribute__((swiftcall)) void

game_gameui_Util_SetArtsSkillStatus_lambda0_Invoke(PSEUDO_X8 x8_,
                                                   __int64 result, int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  _BYTE* v16;
  int v17;
  int v18;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  _DWORD* v24;
  _DWORD* v25;
  __int64 v26;
  int v27;
  __int64 v28;
  _DWORD* v29;
  _DWORD* v30;
  _DWORD* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  int v45;

  v3 = *a2;
  v4 = **(_DWORD**)(result + 8);
  v5 = v4 & 0xFFF;
  if ((v4 & 0xFFF) == 0 ||
      (v6 = *(_QWORD*)(GameData_21c99b0 + 64),
       *(_BYTE*)((v7 = *(_QWORD*)(v6 + 8 * v5)) + 104) != 2)) {
    *(_DWORD*)a3 = v3;
    *(_WORD*)(a3 + 4) = 0;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 8) = -1;
    *(_BYTE*)(a3 + 16) = 1;
    if (v3 != 40) {
      result;
      return;
    }
    if ((unsigned __int8)GameData_21759e0 == 122) {
      v20 = 41;
      if ((GameData_21759e0 & 0xFFFFFF000000LL) != 0x6E6148000000LL ||
          BYTE1(GameData_21759e0) != 104 || BYTE2(GameData_21759e0) != 45) {
        goto LABEL_96;
      }
      if ((BYTE6(GameData_21759e0) == 116 || BYTE6(GameData_21759e0) == 115) &&
          HIBYTE(GameData_21759e0) == 0) {
        goto LABEL_88;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 == 107) {
      if (BYTE1(GameData_21759e0) == 111 && BYTE2(GameData_21759e0) == 0) {
        goto LABEL_88;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 == 106 &&
             BYTE1(GameData_21759e0) == 97 && BYTE2(GameData_21759e0) == 0) {
      goto LABEL_88;
    }
    goto LABEL_95;
  }
  if (v3 <= 12) {
    if (v3 != 4) {
      if (v3 == 10) {
        v8 = 4;
        if ((*(_WORD*)(v7 + 754) & 0x800) == 0) {
        LABEL_7:
          v9 = 0;
          goto LABEL_44;
        }
      LABEL_43:
        v22 = *(__int16*)(v7 + 2 * v8 + 330);
        v9 = v22 + v22 * ((v4 >> 19) & 0x1F);
      LABEL_44:
        v23 = *(_QWORD*)(v7 + 24);
        v24 = *(_DWORD**)(v23 + 544);
        v25 = *(_DWORD**)(v23 + 552);
        while (v24 != v25) {
          v26 = *(_QWORD*)(v6 + 8 * (*v24 & 0xFFFLL));
          if ((*(_WORD*)(v26 + 754) & 0x800) != 0) {
            v27 = *(__int16*)(v26 + 2 * v8 + 330);
            v9 += v27 + v27 * ((*v24 >> 19) & 0x1F);
          }
          ++v24;
        }
        *(_DWORD*)a3 = v3;
        *(_QWORD*)(a3 + 32) = 0;
        *(_QWORD*)(a3 + 40) = 0;
        *(_QWORD*)(a3 + 48) = 0;
        *(_DWORD*)(a3 + 56) = 0;
        *(_DWORD*)(a3 + 16) = v9;
        *(_DWORD*)(a3 + 20) = v9;
        goto LABEL_50;
      }
      goto LABEL_34;
    }
    if ((*(_WORD*)(v7 + 754) & 0x800) != 0) {
      v21 = *(__int16*)(v7 + 330) + *(__int16*)(v7 + 330) * ((v4 >> 19) & 0x1F);
    }
    else {
      v21 = 0;
    }
    v28 = *(_QWORD*)(v7 + 24);
    v29 = *(_DWORD**)(v28 + 544);
    v30 = *(_DWORD**)(v28 + 552);
    if (v29 != v30) {
      v31 = *(_DWORD**)(v28 + 544);
      do {
        v32 = *(_QWORD*)(v6 + 8 * (*v31 & 0xFFFLL));
        if ((*(_WORD*)(v32 + 754) & 0x800) != 0) {
          v21 += *(__int16*)(v32 + 330) +
                 *(__int16*)(v32 + 330) * ((*v31 >> 19) & 0x1F);
        }
        ++v31;
      } while (v31 != v30);
    }
    if ((*(_WORD*)(v7 + 754) & 0x800) != 0) {
      v33 = *(__int16*)(v7 + 332) + *(__int16*)(v7 + 332) * ((v4 >> 19) & 0x1F);
    }
    else {
      v33 = 0;
    }
    while (v29 != v30) {
      v34 = *(_QWORD*)(v6 + 8 * (*v29 & 0xFFFLL));
      if ((*(_WORD*)(v34 + 754) & 0x800) != 0) {
        v33 += *(__int16*)(v34 + 332) +
               *(__int16*)(v34 + 332) * ((*v29 >> 19) & 0x1F);
      }
      ++v29;
    }
    v35 = *(_QWORD*)(result + 16);
    LODWORD(v36) = *(unsigned __int16*)(v35 + 1952);
    if (*(_WORD*)(v35 + 1952) == 0 || (*(_BYTE*)(result + 24) & 1) != 0) {
      v38 = a3;
      goto LABEL_74;
    }
    if ((*(_BYTE*)(v28 + 1112) & 1) != 0) {
      v36 = *(unsigned __int16*)(v35 + 1952);
      v37 = *(_QWORD*)(GameData_21c99b8 + 64);
      v38 = a3;
      if (*(_QWORD*)(*(_QWORD*)(v37 + 8 * v36) + 192LL) != v7) {
        goto LABEL_74;
      }
    }
    else {
      v37 = *(_QWORD*)(GameData_21c99b8 + 64);
      v38 = a3;
    }
    if ((unsigned int)*(
            unsigned __int8*)(*(_QWORD*)(v37 + 8LL * (unsigned int)v36) +
                              72LL) -
            5 >=
        2) {
      v39 = result;
      result = UnitItem_6e8b20(v35 + 1952);
      if ((result & 1) != 0) {
        goto LABEL_77;
      }
      v6 = *(_QWORD*)(GameData_21c99b0 + 64);
      v5 = **(_DWORD**)(v39 + 8) & 0xFFFLL;
    }
  LABEL_74:
    v40 = *(_QWORD*)(*(_QWORD*)(v6 + 8 * v5) + 24LL);
    v41 = *(unsigned int*)((char*)((_UNKNOWN*)0x6CLL) +
                           game_g_shared_system_skills_ptr);
    v42 = *(_QWORD*)(v40 + 512);
    v43 = *(_QWORD*)(v40 + 520) - v42;
    v45 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x6CLL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    if (((v41 >> 5) & 0x7F) + 1 > v43 >> 2 ||
        ((*(_DWORD*)(v42 + 4 * ((v41 >> 5) & 0x7F)) >> v41) & 1) == 0 ||
        ((result = game_HasActiveSkill_843420(&v45, v40 + 512)) & 1) == 0) {
      v44 = 5;
      goto LABEL_79;
    }
  LABEL_77:
    v44 = 6;
    v21 = v33;
  LABEL_79:
    *(_DWORD*)v38 = v44;
    *(_QWORD*)(v38 + 32) = 0;
    *(_QWORD*)(v38 + 40) = 0;
    *(_QWORD*)(v38 + 48) = 0;
    *(_DWORD*)(v38 + 56) = 0;
    *(_DWORD*)(v38 + 16) = v21;
    *(_DWORD*)(v38 + 20) = v21;
    *(_WORD*)(v38 + 4) = 1;
    *(_DWORD*)(v38 + 8) = -1;
    *(_DWORD*)(v38 + 24) = -1;
    {
      result;
      return;
    }
  }
  if (v3 == 13) {
    v8 = 6;
    if ((*(_WORD*)(v7 + 754) & 0x800) == 0) {
      goto LABEL_7;
    }
    goto LABEL_43;
  }
  if (v3 != 17) {
  LABEL_34:
    *(_DWORD*)a3 = v3;
    *(_WORD*)(a3 + 4) = 0;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 8) = -1;
    *(_BYTE*)(a3 + 16) = 1;
    if (v3 != 40) {
      result;
      return;
    }
    switch ((unsigned __int8)GameData_21759e0) {
    case 'z':
      v20 = 41;
      if ((GameData_21759e0 & 0xFFFFFF000000LL) != 0x6E6148000000LL ||
          BYTE1(GameData_21759e0) != 104 || BYTE2(GameData_21759e0) != 45) {
        goto LABEL_96;
      }
      if ((BYTE6(GameData_21759e0) == 116 || BYTE6(GameData_21759e0) == 115) &&
          HIBYTE(GameData_21759e0) == 0) {
        goto LABEL_88;
      }
      break;
    case 'k':
      v20 = 41;
      if (BYTE1(GameData_21759e0) != 111) {
        goto LABEL_96;
      }
      goto LABEL_87;
    case 'j':
      v20 = 41;
      if (BYTE1(GameData_21759e0) == 97) {
      LABEL_87:
        if (BYTE2(GameData_21759e0) == 0) {
        LABEL_88:
          v20 = 40;
        }
      }
    LABEL_96:
      *(_DWORD*)a3 = v20;
      {
        result;
        return;
      }
    default:
      break;
    }
  LABEL_95:
    v20 = 41;
    goto LABEL_96;
  }
  v11 = *(_QWORD*)(result + 16);
  if (v11 != 0) {
    v12 = a3;
    v13 = *(unsigned __int8*)(v7 + 278);
    v14 = *(unsigned __int8*)(v7 + 279);
    v15 = result;
    result = game_UnitSkillList_GetRangeAddImpl(v11 + 1744,
                                                *(_QWORD*)(v7 + 24) + 224LL);
    v16 = *(_BYTE**)(*(_QWORD*)(GameData_21c99b0 + 64) +
                     8LL * (**(_DWORD**)(v15 + 8) & 0xFFF));
    if (v16[632] != 0) {
      v17 = (unsigned __int8)v16[633];
      v13 = (unsigned __int8)v16[632];
      v18 = v17;
    }
    else {
      v18 = (unsigned __int8)v16[279];
      v17 = result + v14;
    }
    a3 = v12;
    if (v17 + v13 >= 1) {
      *(_QWORD*)(v12 + 32) = 0;
      *(_QWORD*)(v12 + 40) = 0;
      *(_QWORD*)(v12 + 48) = 0;
      *(_DWORD*)(v12 + 56) = 0;
      *(_DWORD*)(v12 + 16) = v13;
      *(_DWORD*)(v12 + 20) = v17;
      *(_DWORD*)(v12 + 24) = v18;
      *(_DWORD*)v12 = 17;
      *(_WORD*)(v12 + 4) = 1;
      *(_DWORD*)(v12 + 8) = -1;
      {
        result;
        return;
      }
    }
    if (v16[106] == 3) {
      *(_QWORD*)(v12 + 32) = 0;
      *(_QWORD*)(v12 + 40) = 0;
      *(_QWORD*)(v12 + 48) = 0;
      *(_DWORD*)(v12 + 56) = 0;
      *(_DWORD*)v12 = 19;
      *(_QWORD*)(v12 + 16) = 0x300000003LL;
    LABEL_50:
      *(_WORD*)(a3 + 4) = 1;
      *(_DWORD*)(a3 + 8) = -1;
      *(_DWORD*)(a3 + 24) = -1;
      {
        result;
        return;
      }
    }
  }
  *(_WORD*)(a3 + 4) = 0;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_DWORD*)(a3 + 56) = 0;
  *(_DWORD*)a3 = 17;
  *(_DWORD*)(a3 + 8) = -1;
  *(_BYTE*)(a3 + 16) = 1;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

game_gameui_Util_SetArtsSkillStatusForCompare_lambda0_Invoke(PSEUDO_X8 x8_,
                                                             __int64 result,
                                                             int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  _DWORD* v22;
  _DWORD* v23;
  __int64 v24;
  int v25;
  unsigned int v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  _DWORD* v31;
  _DWORD* v32;
  __int64 v33;
  int v34;
  _QWORD* v35;
  _DWORD* v36;
  _DWORD* v37;
  _DWORD* v38;
  __int64 v39;
  int v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  _DWORD* v53;
  _DWORD* v54;
  _DWORD* v55;
  __int64 v56;
  __int64 v57;
  int v58;

  v3 = *a2;
  v4 = **(_DWORD**)(result + 8);
  if ((v4 & 0xFFF) == 0 ||
      (v5 = *(_QWORD*)(GameData_21c99b0 + 64),
       *(_BYTE*)((v6 = *(_QWORD*)(v5 + 8LL * (v4 & 0xFFF))) + 104) != 2)) {
    *(_DWORD*)a3 = v3;
    *(_WORD*)(a3 + 4) = 0;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 8) = -1;
    *(_BYTE*)(a3 + 16) = 1;
    if (v3 != 40) {
      result;
      return;
    }
    if ((unsigned __int8)GameData_21759e0 == 122) {
      v18 = 41;
      if ((GameData_21759e0 & 0xFFFFFF000000LL) != 0x6E6148000000LL ||
          BYTE1(GameData_21759e0) != 104 || BYTE2(GameData_21759e0) != 45) {
        goto LABEL_112;
      }
      if ((BYTE6(GameData_21759e0) == 116 || BYTE6(GameData_21759e0) == 115) &&
          HIBYTE(GameData_21759e0) == 0) {
        goto LABEL_104;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 == 107) {
      if (BYTE1(GameData_21759e0) == 111 && BYTE2(GameData_21759e0) == 0) {
        goto LABEL_104;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 == 106 &&
             BYTE1(GameData_21759e0) == 97 && BYTE2(GameData_21759e0) == 0) {
      goto LABEL_104;
    }
    goto LABEL_111;
  }
  if (v3 > 12) {
    if (v3 == 13) {
      v7 = 6;
      if ((*(_WORD*)(v6 + 754) & 0x800) == 0) {
        goto LABEL_7;
      }
      goto LABEL_43;
    }
    if (v3 == 17) {
      v10 = *(_QWORD*)(result + 24);
      if (v10 != 0) {
        v11 = a3;
        v12 = *(unsigned __int8*)(v6 + 278);
        v13 = *(unsigned __int8*)(v6 + 279);
        v14 = result;
        result = game_UnitSkillList_GetRangeAddImpl(
            v10 + 1744, *(_QWORD*)(v6 + 24) + 224LL);
        v15 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                         8LL * (**(_DWORD**)(v14 + 8) & 0xFFF));
        if ((int)result + v13 + v12 >= 1) {
          v16 = *(unsigned __int8*)(v15 + 279);
          *(_QWORD*)(v11 + 32) = 0;
          *(_QWORD*)(v11 + 40) = 0;
          *(_QWORD*)(v11 + 48) = 0;
          *(_DWORD*)(v11 + 56) = 0;
          *(_DWORD*)(v11 + 16) = v12;
          *(_DWORD*)(v11 + 20) = result + v13;
          *(_DWORD*)v11 = 17;
          *(_WORD*)(v11 + 4) = 1;
          *(_DWORD*)(v11 + 8) = -1;
          *(_DWORD*)(v11 + 24) = v16;
          {
            result;
            return;
          }
        }
        a3 = v11;
        if (*(_BYTE*)(v15 + 106) == 3) {
          *(_QWORD*)(v11 + 32) = 0;
          *(_QWORD*)(v11 + 40) = 0;
          *(_QWORD*)(v11 + 48) = 0;
          *(_DWORD*)(v11 + 56) = 0;
          *(_DWORD*)v11 = 19;
          *(_QWORD*)(v11 + 16) = 0x300000003LL;
          goto LABEL_101;
        }
      }
      *(_WORD*)(a3 + 4) = 0;
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      *(_DWORD*)a3 = 17;
      *(_DWORD*)(a3 + 8) = -1;
      *(_BYTE*)(a3 + 16) = 1;
      {
        result;
        return;
      }
    }
  }
  else {
    if (v3 == 4) {
      if ((*(_WORD*)(v6 + 754) & 0x800) != 0) {
        v19 =
            *(__int16*)(v6 + 330) + *(__int16*)(v6 + 330) * ((v4 >> 19) & 0x1F);
      }
      else {
        v19 = 0;
      }
      v35 = *(_QWORD**)(v6 + 24);
      v36 = (_DWORD*)v35[68];
      v37 = (_DWORD*)v35[69];
      if (v36 != v37) {
        v38 = (_DWORD*)v35[68];
        do {
          v39 = *(_QWORD*)(v5 + 8 * (*v38 & 0xFFFLL));
          if ((*(_WORD*)(v39 + 754) & 0x800) != 0) {
            v19 += *(__int16*)(v39 + 330) +
                   *(__int16*)(v39 + 330) * ((*v38 >> 19) & 0x1F);
          }
          ++v38;
        } while (v38 != v37);
      }
      if ((*(_WORD*)(v6 + 754) & 0x800) != 0) {
        v40 =
            *(__int16*)(v6 + 332) + *(__int16*)(v6 + 332) * ((v4 >> 19) & 0x1F);
      }
      else {
        v40 = 0;
      }
      while (v36 != v37) {
        v41 = *(_QWORD*)(v5 + 8 * (*v36 & 0xFFFLL));
        if ((*(_WORD*)(v41 + 754) & 0x800) != 0) {
          v40 += *(__int16*)(v41 + 332) +
                 *(__int16*)(v41 + 332) * ((*v36 >> 19) & 0x1F);
        }
        ++v36;
      }
      v42 = **(_DWORD**)(result + 16);
      if ((v42 & 0xFFF) != 0) {
        v43 = *(_QWORD*)(v5 + 8LL * (v42 & 0xFFF));
        v44 = (v42 >> 19) & 0x1F;
        if ((*(_WORD*)(v43 + 754) & 0x800) != 0) {
          v45 = *(__int16*)(v43 + 330) + *(__int16*)(v43 + 330) * v44;
        }
        else {
          v45 = 0;
        }
        v52 = *(_QWORD*)(v43 + 24);
        v53 = *(_DWORD**)(v52 + 544);
        v54 = *(_DWORD**)(v52 + 552);
        if (v53 != v54) {
          v55 = v53;
          do {
            v56 = *(_QWORD*)(v5 + 8 * (*v55 & 0xFFFLL));
            result = *(unsigned __int16*)(v56 + 754);
            if ((result & 0x800) != 0) {
              v45 += *(__int16*)(v56 + 330) +
                     *(__int16*)(v56 + 330) * ((*v55 >> 19) & 0x1F);
            }
            ++v55;
          } while (v55 != v54);
        }
        if ((*(_WORD*)(v43 + 754) & 0x800) != 0) {
          v46 = *(__int16*)(v43 + 332) + *(__int16*)(v43 + 332) * v44;
        }
        else {
          v46 = 0;
        }
        while (v53 != v54) {
          v57 = *(_QWORD*)(v5 + 8 * (*v53 & 0xFFFLL));
          if ((*(_WORD*)(v57 + 754) & 0x800) != 0) {
            v46 += *(__int16*)(v57 + 332) +
                   *(__int16*)(v57 + 332) * ((*v53 >> 19) & 0x1F);
          }
          ++v53;
        }
      }
      else {
        v45 = 0;
        v46 = 0;
      }
      v47 = v35[64];
      v48 = v35[65] - v47;
      v58 = GameData_21d976c & 0xFFF;
      v49 = ((unsigned __int64)(unsigned int)GameData_21d976c >> 5) & 0x7F;
      if (v49 + 1 <= v48 >> 2 &&
          ((*(_DWORD*)(v47 + 4LL * (unsigned int)v49) >> GameData_21d976c) &
           1) != 0) {
        v50 = a3;
        result = game_HasActiveSkill_843420(&v58, v35 + 64);
        if ((result & 1) != 0) {
          v51 = 6;
          v45 = v46;
          v19 = v40;
        }
        else {
          v51 = 5;
        }
        a3 = v50;
      }
      else {
        v51 = 5;
      }
      *(_DWORD*)a3 = v51;
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      *(_DWORD*)(a3 + 16) = v19;
      *(_DWORD*)(a3 + 20) = v45;
      goto LABEL_101;
    }
    if (v3 == 10) {
      v7 = 4;
      if ((*(_WORD*)(v6 + 754) & 0x800) == 0) {
      LABEL_7:
        v8 = 0;
        goto LABEL_44;
      }
    LABEL_43:
      v20 = *(__int16*)(v6 + 2 * v7 + 330);
      v8 = v20 + v20 * ((v4 >> 19) & 0x1F);
    LABEL_44:
      v21 = *(_QWORD*)(v6 + 24);
      v22 = *(_DWORD**)(v21 + 544);
      v23 = *(_DWORD**)(v21 + 552);
      while (v22 != v23) {
        v24 = *(_QWORD*)(v5 + 8 * (*v22 & 0xFFFLL));
        if ((*(_WORD*)(v24 + 754) & 0x800) != 0) {
          v25 = *(__int16*)(v24 + 2 * v7 + 330);
          v8 += v25 + v25 * ((*v22 >> 19) & 0x1F);
        }
        ++v22;
      }
      v26 = **(_DWORD**)(result + 16);
      if ((v26 & 0xFFF) != 0) {
        v27 = *(_QWORD*)(v5 + 8LL * (v26 & 0xFFF));
        if ((*(_WORD*)(v27 + 754) & 0x800) != 0) {
          v29 = *(__int16*)(v27 + 2 * v7 + 330);
          v28 = v29 + v29 * ((v26 >> 19) & 0x1F);
        }
        else {
          v28 = 0;
        }
        v30 = *(_QWORD*)(v27 + 24);
        v31 = *(_DWORD**)(v30 + 544);
        v32 = *(_DWORD**)(v30 + 552);
        while (v31 != v32) {
          v33 = *(_QWORD*)(v5 + 8 * (*v31 & 0xFFFLL));
          if ((*(_WORD*)(v33 + 754) & 0x800) != 0) {
            v34 = *(__int16*)(v33 + 2 * v7 + 330);
            v28 += v34 + v34 * ((*v31 >> 19) & 0x1F);
          }
          ++v31;
        }
      }
      else {
        v28 = 0;
      }
      *(_DWORD*)a3 = v3;
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      *(_DWORD*)(a3 + 16) = v8;
      *(_DWORD*)(a3 + 20) = v28;
    LABEL_101:
      *(_WORD*)(a3 + 4) = 1;
      *(_DWORD*)(a3 + 8) = -1;
      *(_DWORD*)(a3 + 24) = -1;
      {
        result;
        return;
      }
    }
  }
  *(_DWORD*)a3 = v3;
  *(_WORD*)(a3 + 4) = 0;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_DWORD*)(a3 + 56) = 0;
  *(_DWORD*)(a3 + 8) = -1;
  *(_BYTE*)(a3 + 16) = 1;
  if (v3 != 40) {
    result;
    return;
  }
  if ((unsigned __int8)GameData_21759e0 == 122) {
    v18 = 41;
    if ((GameData_21759e0 & 0xFFFFFF000000LL) != 0x6E6148000000LL ||
        BYTE1(GameData_21759e0) != 104 || BYTE2(GameData_21759e0) != 45) {
      goto LABEL_112;
    }
    if ((BYTE6(GameData_21759e0) == 116 || BYTE6(GameData_21759e0) == 115) &&
        HIBYTE(GameData_21759e0) == 0) {
      goto LABEL_104;
    }
    goto LABEL_111;
  }
  if ((unsigned __int8)GameData_21759e0 == 107) {
    v18 = 41;
    if (BYTE1(GameData_21759e0) != 111) {
      goto LABEL_112;
    }
    goto LABEL_103;
  }
  if ((unsigned __int8)GameData_21759e0 != 106) {
  LABEL_111:
    v18 = 41;
    goto LABEL_112;
  }
  v18 = 41;
  if (BYTE1(GameData_21759e0) == 97) {
  LABEL_103:
    if (BYTE2(GameData_21759e0) == 0) {
    LABEL_104:
      v18 = 40;
    }
  }
LABEL_112:
  *(_DWORD*)a3 = v18;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

game_gameui_Util_SetBlazeSkillStatus_lambda0_Invoke(PSEUDO_X8 x8_,
                                                    unsigned __int64 result,
                                                    int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  float v5;
  float v6;
  __int64 v7;
  int v8;
  int v9;
  float v10;
  int v11;
  _QWORD* v12;
  __int64 v13;
  void* v14;
  __int64 v15;
  _BYTE* v16;
  int v17;
  int v18;
  int* v19;
  int v20;
  int v21;
  _QWORD* v22;
  __int64 v23;
  void* v24;
  unsigned __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  int v30;
  int v31;
  int v32;
  unsigned __int64 v33;
  int v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  bool v40;
  int v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  unsigned __int64 v47;
  __int64 v48;
  __int16 v49;
  __int16 v50;
  float v51;
  float v52;
  float v53;
  int v54;
  float v55;
  int v56;
  int v57;
  int v58;
  unsigned __int64 v59;
  float v60;
  float v61;
  __int16 v62;
  int v63;
  int v64;
  int v65;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *a2;
  if (*a2 <= 12) {
    if (v3 <= 5) {
      if ((unsigned int)(v3 - 1) < 2) {
        result = BattleSide_7a1270_alt1(*(_QWORD**)(result + 8)),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v7 = HIDWORD(result) & 0x7FFF;
        *(_DWORD*)a3 = v3;
        *(_QWORD*)(a3 + 32) = 0;
        *(_QWORD*)(a3 + 40) = 0;
        *(_QWORD*)(a3 + 48) = 0;
        *(_DWORD*)(a3 + 56) = 0;
        v8 = (SHIDWORD(result) >> 16) & (SHIDWORD(result) >> 31);
        if ((result & 0x8000u) == 0LL) {
          v9 = 999;
        }
        else {
          v9 = 0;
        }
        if ((result & 0x8000u) == 0LL) {
          v8 = (SHIDWORD(result) >> 16) & ~(SHIDWORD(result) >> 31);
        }
        *(_WORD*)(a3 + 4) = 1;
        *(_DWORD*)(a3 + 8) = -1;
        *(_DWORD*)(a3 + 24) = -1;
        v10 = (float)((int)result >> 16) + (float)((float)(__int16)result * v5);
        v11 = (int)(float)(v10 * v6);
        if (v9 >= v11) {
          v9 = (int)(float)(v10 * v6);
        }
        if (v8 <= v11) {
          v8 = v9;
        }
        if ((result & 0x800000000000LL) != 0) {
          LODWORD(v7) = v8;
        }
        *(_DWORD*)(a3 + 16) = v7;
        *(_DWORD*)(a3 + 20) = v7;
        {
          result;
          return;
        }
      }
      if (v3 == 5) {
        v19 = *(int**)(result + 16);
        v20 = 5;
      LABEL_37:
        v21 = *v19;
        *(_DWORD*)a3 = v20;
        *(_WORD*)(a3 + 4) = 1;
      LABEL_38:
        *(_QWORD*)(a3 + 32) = 0;
        *(_QWORD*)(a3 + 40) = 0;
        *(_QWORD*)(a3 + 48) = 0;
        *(_DWORD*)(a3 + 56) = 0;
        *(_DWORD*)(a3 + 16) = v21;
        *(_DWORD*)(a3 + 20) = v21;
      LABEL_39:
        *(_DWORD*)(a3 + 8) = -1;
        *(_DWORD*)(a3 + 24) = -1;
        {
          result;
          return;
        }
      }
      goto LABEL_69;
    }
    if (v3 == 6) {
      v19 = *(int**)(result + 24);
      v20 = 6;
      goto LABEL_37;
    }
    if (v3 != 10) {
      goto LABEL_69;
    }
    if (**(_BYTE**)(result + 32) == 1) {
      if (**(_BYTE**)(result + 40) == 1) {
        v12 = *(_QWORD**)(result + 8);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21d40b0) != 0) {
          GameRoutine_799290_alt1(&GameData_21d3fb8),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          __cxa_guard_release(&GameData_21d40b0),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v13 = v12[21];
        if (v13 != 0) {
          v14 =
              (void*)(*(_QWORD*)(v12[17] +
                                 8 * ((unsigned __int64)(v13 + v12[20] - 1) >>
                                      4)) +
                      244LL * (((_DWORD)v13 + *((_DWORD*)v12 + 40) - 1) & 0xF));
        }
        else {
          v14 = &GameData_21d3fb8;
        }
        v47 = *((_QWORD*)v14 + 12);
        if ((v47 & 0x800000000000LL) != 0) {
          v49 = *((_WORD*)v14 + 115);
          v50 = *((_WORD*)v14 + 106);
          v52 = *((float*)v14 + 26);
          v51 = *((float*)v14 + 27);
          v54 = (SHIDWORD(v47) >> 16) & (SHIDWORD(v47) >> 31);
          v55 = (float)(__int16)(v49 + WORD1(v47) + v50);
          if ((v47 & 0x8000u) == 0LL) {
            v56 = 999;
          }
          else {
            v56 = 0;
          }
          if ((v47 & 0x8000u) == 0LL) {
            v54 = (SHIDWORD(v47) >> 16) & ~(SHIDWORD(v47) >> 31);
          }
          v53 = (float)(__int16)v47;
          v57 = (int)(float)((float)(v55 + (float)(v53 * v52)) * v51);
          if (v56 >= v57) {
            v58 = (int)(float)((float)(v55 + (float)(v53 * v52)) * v51);
          }
          else {
            v58 = v56;
          }
          if (v54 <= v57) {
            LODWORD(v48) = v58;
          }
          else {
            LODWORD(v48) = v54;
          }
        }
        else {
          v48 = HIDWORD(v47) & 0x7FFF;
        }
        result = BattleInfo_7a3000_alt1(),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_DWORD*)a3 = 10;
        *(_WORD*)(a3 + 4) = 1;
        if ((int)v48 <= (int)result) {
          v21 = result;
        }
        else {
          v21 = v48;
        }
        goto LABEL_38;
      }
      v43 = **(_DWORD**)(result + 48);
      v44 = 10;
      v45 = *(__int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                   8LL * (v43 & 0xFFF)) +
                        338LL);
    LABEL_85:
      *(_DWORD*)a3 = v44;
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      v46 = v45 + v45 * ((v43 >> 19) & 0x1F);
      *(_WORD*)(a3 + 4) = 1;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      *(_DWORD*)(a3 + 8) = -1;
      *(_DWORD*)(a3 + 24) = -1;
      *(_DWORD*)(a3 + 16) = v46;
      *(_DWORD*)(a3 + 20) = v46;
      {
        result;
        return;
      }
    }
    v42 = 10;
    goto LABEL_87;
  }
  if (v3 <= 19) {
    if (v3 == 13) {
      if (**(_BYTE**)(result + 32) == 1) {
        if (**(_BYTE**)(result + 40) == 1) {
          v22 = *(_QWORD**)(result + 8);
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                                    memory_order_acquire) &
               1) == 0) {
            result = __cxa_guard_acquire(&GameData_21d40b0),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((_DWORD)result != 0) {
              GameRoutine_799290_alt1(&GameData_21d3fb8),
                  v5 = COERCE_AS(
                      __typeof__(v5),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result = __cxa_guard_release(&GameData_21d40b0),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          v23 = v22[21];
          if (v23 != 0) {
            v24 =
                (void*)(*(_QWORD*)(v22[17] +
                                   8 * ((unsigned __int64)(v23 + v22[20] - 1) >>
                                        4)) +
                        244LL *
                            (((_DWORD)v23 + *((_DWORD*)v22 + 40) - 1) & 0xF));
          }
          else {
            v24 = &GameData_21d3fb8;
          }
          v59 = *((_QWORD*)v24 + 14);
          if ((v59 & 0x800000000000LL) != 0) {
            v61 = *((float*)v24 + 30);
            v60 = *((float*)v24 + 31);
            v62 = *((_WORD*)v24 + 116) + WORD1(v59) + *((_WORD*)v24 + 107);
            LODWORD(v24) = (SHIDWORD(v59) >> 16) & (SHIDWORD(v59) >> 31);
            if ((v59 & 0x8000u) == 0LL) {
              v63 = 999;
            }
            else {
              v63 = 0;
            }
            if ((v59 & 0x8000u) == 0LL) {
              LODWORD(v24) = (SHIDWORD(v59) >> 16) & ~(SHIDWORD(v59) >> 31);
            }
            v64 = (int)(float)((float)((float)v62 +
                                       (float)((float)(__int16)v59 * v61)) *
                               v60);
            if (v63 >= v64) {
              v65 = v64;
            }
            else {
              v65 = v63;
            }
            if ((int)v24 <= v64) {
              LODWORD(v24) = v65;
            }
          }
          else {
            v24 = (void*)(HIDWORD(v59) & 0x7FFF);
          }
          *(_QWORD*)(a3 + 32) = 0;
          *(_QWORD*)(a3 + 40) = 0;
          *(_QWORD*)(a3 + 48) = 0;
          *(_DWORD*)(a3 + 56) = 0;
          *(_DWORD*)(a3 + 16) = (_DWORD)v24;
          *(_DWORD*)(a3 + 20) = (_DWORD)v24;
          *(_DWORD*)a3 = 13;
          *(_WORD*)(a3 + 4) = 1;
          goto LABEL_39;
        }
        v43 = **(_DWORD**)(result + 48);
        v44 = 13;
        v45 = *(__int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                     8LL * (v43 & 0xFFF)) +
                          342LL);
        goto LABEL_85;
      }
      v42 = 13;
    LABEL_87:
      *(_DWORD*)a3 = v42;
      goto LABEL_88;
    }
    if (v3 == 17) {
      v15 = 633;
      v16 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (**(_DWORD**)(result + 48) & 0xFFF));
      v17 = (unsigned __int8)v16[632];
      if (v16[632] == 0) {
        v15 = 279;
        v17 = (unsigned __int8)v16[278];
      }
      v18 = (unsigned __int8)v16[v15];
      if ((v17 | v18) != 0) {
        *(_QWORD*)(a3 + 32) = 0;
        *(_QWORD*)(a3 + 40) = 0;
        *(_QWORD*)(a3 + 48) = 0;
        *(_DWORD*)(a3 + 56) = 0;
        *(_DWORD*)(a3 + 16) = v17;
        *(_DWORD*)(a3 + 20) = v18;
        *(_DWORD*)(a3 + 24) = v18;
        *(_DWORD*)a3 = 17;
        *(_WORD*)(a3 + 4) = 1;
        *(_DWORD*)(a3 + 8) = -1;
        {
          result;
          return;
        }
      }
      if (v16[106] == 3) {
        *(_QWORD*)(a3 + 32) = 0;
        *(_QWORD*)(a3 + 40) = 0;
        *(_QWORD*)(a3 + 48) = 0;
        *(_DWORD*)(a3 + 56) = 0;
        *(_DWORD*)a3 = 19;
        *(_QWORD*)(a3 + 16) = 0x300000003LL;
        *(_WORD*)(a3 + 4) = 1;
        *(_DWORD*)(a3 + 8) = -1;
        *(_DWORD*)(a3 + 24) = -1;
        {
          result;
          return;
        }
      }
      v42 = 17;
      goto LABEL_87;
    }
  LABEL_69:
    *(_DWORD*)a3 = v3;
  LABEL_88:
    *(_WORD*)(a3 + 4) = 0;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 8) = -1;
    *(_BYTE*)(a3 + 16) = 1;
    {
      result;
      return;
    }
  }
  if (v3 != 20) {
    if (v3 != 24) {
      if (v3 == 40) {
        (unsigned __int64)GameRoutine_15847c0_alt1((_QWORD*)a3, 40,
                                                   *(_DWORD**)(result + 48)),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        return;
      }
      goto LABEL_69;
    }
    v33 = result;
    result = game_Unit_GetUnknown6cba30_alt1(**(_QWORD**)(result + 56)),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((unsigned __int8)result == 2) {
      v34 = 26;
    }
    else {
      v34 = 25;
    }
    if ((unsigned __int8)result == 3) {
      v35 = 27;
    }
    else {
      v35 = v34;
    }
    v36 = **(_DWORD**)(v33 + 48);
    if (((v36 ^ *(_DWORD*)((char*)((_UNKNOWN*)0x240LL) +
                           game_g_shared_system_skills_ptr)) &
         0xFFF) != 0 &&
        ((*(_DWORD*)((char*)((_UNKNOWN*)0x240LL) +
                     game_g_shared_system_skills_ptr + 4) ^
          v36) &
         0xFFF) != 0) {
      v37 = *(_QWORD*)(GameData_21c99b0 + 64);
      v38 = *(_QWORD*)(GameData_21c99b0 + 72);
      v39 = v37;
      if (v37 != v38) {
        v39 = *(_QWORD*)(GameData_21c99b0 + 64);
        while (*(_QWORD*)(*(_QWORD*)v39 + 552LL) !=
               *(_QWORD*)(v37 + 8LL * (v36 & 0xFFF))) {
          v39 += 8;
          if (v39 == v38) {
            goto LABEL_78;
          }
        }
      }
      if (v39 == v38 || (v41 = *(unsigned __int8*)(*(_QWORD*)v39 + 560LL),
                         *(_BYTE*)(*(_QWORD*)v39 + 560LL) == 0)) {
      LABEL_78:
        if (*(_WORD*)(*(_QWORD*)(v37 + 8LL * (v36 & 0xFFF)) + 136LL) != 0) {
          v41 = 6;
        }
        else {
          v41 = 0;
        }
      }
    }
    else {
      v41 = 1;
    }
    *(_DWORD*)a3 = v35;
    *(_BYTE*)(a3 + 5) = 0;
    v40 = v41 != 0;
    *(_DWORD*)(a3 + 8) = -1;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 16) = v41;
    *(_DWORD*)(a3 + 20) = v41;
  LABEL_82:
    *(_DWORD*)(a3 + 24) = -1;
    *(_BYTE*)(a3 + 4) = v40;
    {
      result;
      return;
    }
  }
  v25 = result;
  result = game_Unit_GetUnknown6cba30_alt1(**(_QWORD**)(result + 56)),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((unsigned __int8)result == 2) {
    v26 = 22;
  }
  else {
    v26 = 21;
  }
  if ((unsigned __int8)result == 3) {
    v27 = 23;
  }
  else {
    v27 = v26;
  }
  v28 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (**(_DWORD**)(v25 + 48) & 0xFFF));
  v29 = *(char*)(v28 + 276);
  if (*(_BYTE*)(v28 + 104) != 3 ||
      (unsigned int)*(unsigned __int8*)(v28 + 250) - 33 > 1) {
    *(_DWORD*)a3 = v27;
    *(_BYTE*)(a3 + 5) = 0;
    v40 = v29 > 0;
    *(_DWORD*)(a3 + 8) = -1;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 16) = v29;
    *(_DWORD*)(a3 + 20) = v29;
    goto LABEL_82;
  }
  v30 = *(unsigned __int16*)(v28 + 256);
  if (*(_WORD*)(v28 + 256) != 0) {
    v30 = **(__int16**)(v28 + 264);
  }
  v31 = *(unsigned __int8*)(**(_QWORD**)(v25 + 56) + 499LL);
  *(_DWORD*)a3 = v27;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_DWORD*)(a3 + 56) = 0;
  *(_WORD*)(a3 + 4) = 1;
  *(_DWORD*)(a3 + 8) = -1;
  *(_DWORD*)(a3 + 24) = -1;
  v32 = v30 - v31;
  *(_DWORD*)(a3 + 16) = v32;
  *(_DWORD*)(a3 + 20) = v32;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

game_gameui_Util_SetRageSkillStatus_lambda0_Invoke(PSEUDO_X8 x8_,
                                                   unsigned __int64 result,
                                                   int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  float v5;
  float v6;
  __int64 v7;
  int v8;
  int v9;
  float v10;
  int v11;
  _QWORD* v12;
  __int64 v13;
  void* v14;
  unsigned __int64 v15;
  __int64 v16;
  int* v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  __int64* v22;
  __int64 v23;
  int v24;
  __int16 v25;
  __int16 v26;
  float v27;
  float v28;
  float v29;
  int v30;
  float v31;
  int v32;
  int v33;
  int v34;
  int v36;
  unsigned __int64 v37;

  v3 = *a2;
  if (*a2 > 5) {
    if (v3 == 6) {
      v17 = *(int**)(result + 24);
      v18 = 6;
      goto LABEL_25;
    }
    if (v3 != 10) {
    LABEL_28:
      *(_DWORD*)a3 = v3;
      *(_WORD*)(a3 + 4) = 0;
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      *(_DWORD*)(a3 + 8) = -1;
      *(_BYTE*)(a3 + 16) = 1;
      if (v3 != 40) {
        result;
        return;
      }
      switch ((unsigned __int8)GameData_21759e0) {
      case 'z':
        v20 = 41;
        if ((GameData_21759e0 & 0xFFFFFF000000LL) != 0x6E6148000000LL ||
            BYTE1(GameData_21759e0) != 104 || BYTE2(GameData_21759e0) != 45) {
          goto LABEL_64;
        }
        if (BYTE6(GameData_21759e0) != 116 && BYTE6(GameData_21759e0) != 115 ||
            HIBYTE(GameData_21759e0) != 0) {
          goto LABEL_63;
        }
        break;
      case 'k':
        if (BYTE1(GameData_21759e0) != 111 || BYTE2(GameData_21759e0) != 0) {
          goto LABEL_63;
        }
        break;
      case 'j':
        v20 = 41;
        if (BYTE1(GameData_21759e0) != 97 || BYTE2(GameData_21759e0) != 0) {
          goto LABEL_64;
        }
        break;
      default:
      LABEL_63:
        v20 = 41;
        goto LABEL_64;
      }
      v20 = 40;
    LABEL_64:
      *(_DWORD*)a3 = v20;
      {
        result;
        return;
      }
    }
    if (**(_BYTE**)(result + 32) != 1) {
      v21 = **(_DWORD**)(result + 40);
      v22 = GameData_212c880[0];
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      v23 = *(_QWORD*)(*(_QWORD*)(*v22 + 64) + 8LL * (v21 & 0xFFF));
      *(_DWORD*)a3 = 10;
      *(_WORD*)(a3 + 4) = 1;
      *(_DWORD*)(a3 + 8) = -1;
      *(_DWORD*)(a3 + 24) = -1;
      v24 = *(__int16*)(v23 + 338) +
            *(__int16*)(v23 + 338) * ((v21 >> 19) & 0x1F);
      *(_DWORD*)(a3 + 16) = v24;
      *(_DWORD*)(a3 + 20) = v24;
      {
        result;
        return;
      }
    }
    v12 = *(_QWORD**)(result + 8);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                              memory_order_acquire) &
         1) == 0) {
      v37 = result;
      v36 = __cxa_guard_acquire(&GameData_21d40b0);
      result = v37;
      if (v36 != 0) {
        GameRoutine_799290(&GameData_21d3fb8);
        __cxa_guard_release(&GameData_21d40b0);
        result = v37;
      }
    }
    v13 = v12[21];
    if (v13 != 0) {
      v14 =
          (void*)(*(_QWORD*)(v12[17] +
                             8 * ((unsigned __int64)(v13 + v12[20] - 1) >> 4)) +
                  244LL * (((_DWORD)v13 + *((_DWORD*)v12 + 40) - 1) & 0xF));
      v15 = *((_QWORD*)v14 + 12);
      if ((v15 & 0x800000000000LL) == 0) {
      LABEL_21:
        v16 = HIDWORD(v15) & 0x7FFF;
      LABEL_48:
        result = BattleInfo_7a3000(*(_QWORD*)(result + 8));
        *(_DWORD*)a3 = 10;
        *(_DWORD*)(a3 + 8) = -1;
        *(_WORD*)(a3 + 4) = 1;
        if ((int)v16 <= (int)result) {
          v19 = result;
        }
        else {
          v19 = v16;
        }
        goto LABEL_26;
      }
    }
    else {
      v14 = &GameData_21d3fb8;
      v15 = GameData_21d4018;
      if ((GameData_21d4018 & 0x800000000000LL) == 0) {
        goto LABEL_21;
      }
    }
    v25 = *((_WORD*)v14 + 115);
    v26 = *((_WORD*)v14 + 106);
    v28 = *((float*)v14 + 26);
    v27 = *((float*)v14 + 27);
    v30 = (SHIDWORD(v15) >> 16) & (SHIDWORD(v15) >> 31);
    v31 = (float)(__int16)(v25 + WORD1(v15) + v26);
    if ((v15 & 0x8000u) == 0LL) {
      v32 = 999;
    }
    else {
      v32 = 0;
    }
    if ((v15 & 0x8000u) == 0LL) {
      v30 = (SHIDWORD(v15) >> 16) & ~(SHIDWORD(v15) >> 31);
    }
    v29 = (float)(__int16)v15;
    v33 = (int)(float)((float)(v31 + (float)(v29 * v28)) * v27);
    if (v32 >= v33) {
      v34 = (int)(float)((float)(v31 + (float)(v29 * v28)) * v27);
    }
    else {
      v34 = v32;
    }
    if (v30 <= v33) {
      LODWORD(v16) = v34;
    }
    else {
      LODWORD(v16) = v30;
    }
    goto LABEL_48;
  }
  if ((unsigned int)(v3 - 1) >= 2) {
    if (v3 == 5) {
      v17 = *(int**)(result + 16);
      v18 = 5;
    LABEL_25:
      v19 = *v17;
      *(_DWORD*)a3 = v18;
      *(_WORD*)(a3 + 4) = 1;
      *(_DWORD*)(a3 + 8) = -1;
    LABEL_26:
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      *(_DWORD*)(a3 + 16) = v19;
      *(_DWORD*)(a3 + 20) = v19;
      *(_DWORD*)(a3 + 24) = -1;
      {
        result;
        return;
      }
    }
    goto LABEL_28;
  }
  result = BattleSide_7a1270(*(_QWORD*)(result + 8));
  v7 = HIDWORD(result) & 0x7FFF;
  *(_DWORD*)a3 = v3;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_DWORD*)(a3 + 56) = 0;
  v8 = (SHIDWORD(result) >> 16) & (SHIDWORD(result) >> 31);
  if ((result & 0x8000u) == 0LL) {
    v9 = 999;
  }
  else {
    v9 = 0;
  }
  if ((result & 0x8000u) == 0LL) {
    v8 = (SHIDWORD(result) >> 16) & ~(SHIDWORD(result) >> 31);
  }
  *(_WORD*)(a3 + 4) = 1;
  *(_DWORD*)(a3 + 8) = -1;
  *(_DWORD*)(a3 + 24) = -1;
  v10 = (float)((int)result >> 16) + (float)((float)(__int16)result * v5);
  v11 = (int)(float)(v10 * v6);
  if (v9 >= v11) {
    v9 = (int)(float)(v10 * v6);
  }
  if (v8 <= v11) {
    v8 = v9;
  }
  if ((result & 0x800000000000LL) != 0) {
    LODWORD(v7) = v8;
  }
  *(_DWORD*)(a3 + 16) = v7;
  *(_DWORD*)(a3 + 20) = v7;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

game_gameui_Util_SetGambitSkillStatus_lambda0_Invoke(PSEUDO_X8 x8_,
                                                     __int64 result, int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned int* v3;
  int v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v10;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  float v21;
  int v22;
  unsigned __int8* v23;
  int v24;
  int v25;
  int v26;
  int v27;
  float v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  __int64 v39;
  int v40;
  int v42;
  __int64 v43;
  float v44;
  float v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;

  v3 = *(unsigned int**)(result + 8);
  v4 = *a2;
  v5 = *v3;
  v6 = *v3 & 0xFFFLL;
  if ((*v3 & 0xFFF) == 0) {
    *(_DWORD*)a3 = v4;
    *(_WORD*)(a3 + 4) = 0;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 8) = -1;
    *(_BYTE*)(a3 + 16) = 1;
    if (v4 != 40) {
      result;
      return;
    }
    if ((unsigned __int8)GameData_21759e0 == 122) {
      v37 = 41;
      if ((GameData_21759e0 & 0xFFFFFF000000LL) != 0x6E6148000000LL ||
          BYTE1(GameData_21759e0) != 104 || BYTE2(GameData_21759e0) != 45) {
        goto LABEL_89;
      }
      if ((BYTE6(GameData_21759e0) == 116 || BYTE6(GameData_21759e0) == 115) &&
          HIBYTE(GameData_21759e0) == 0) {
        goto LABEL_88;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 == 107) {
      if (BYTE1(GameData_21759e0) == 111 && BYTE2(GameData_21759e0) == 0) {
        goto LABEL_88;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 == 106 &&
             BYTE1(GameData_21759e0) == 97 && BYTE2(GameData_21759e0) == 0) {
      goto LABEL_88;
    }
    goto LABEL_77;
  }
  if (v4 <= 8) {
    if ((unsigned int)(v4 - 1) >= 2) {
      if (v4 == 5) {
        v7 = 5;
        v8 =
            *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v6) +
                        330LL);
        goto LABEL_62;
      }
      if (v4 == 6) {
        v7 = 6;
        v8 = *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                    8LL * (unsigned int)v6) +
                         332LL);
      LABEL_62:
        *(_DWORD*)a3 = v7;
        *(_QWORD*)(a3 + 32) = 0;
        *(_QWORD*)(a3 + 40) = 0;
        v38 = v8 + v8 * ((v5 >> 19) & 0x1F);
        *(_WORD*)(a3 + 4) = 1;
        *(_QWORD*)(a3 + 48) = 0;
        *(_DWORD*)(a3 + 56) = 0;
        *(_DWORD*)(a3 + 8) = -1;
        *(_DWORD*)(a3 + 24) = -1;
        *(_DWORD*)(a3 + 16) = v38;
        *(_DWORD*)(a3 + 20) = v38;
        {
          result;
          return;
        }
      }
      goto LABEL_54;
    }
    v16 = result;
    result = BattleSide_7a1270(*(_QWORD*)(result + 16));
    v18 = v16;
    v23 = *(unsigned __int8**)(v16 + 24);
    v19 = HIDWORD(v17);
    v20 = result;
    v21 = *(float*)&v17;
    v22 = *v23;
    LODWORD(v23) = HIDWORD(v17);
    if (v22 == 1) {
      result = BattleSide_7a1270(*(_QWORD*)(v18 + 32) + 16LL);
      v23 = (unsigned __int8*)HIDWORD(v17);
    }
    *(_DWORD*)a3 = v4;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    v24 = (SHIDWORD(v20) >> 16) & (SHIDWORD(v20) >> 31);
    if ((v20 & 0x8000u) == 0LL) {
      v25 = 999;
    }
    else {
      v25 = 0;
    }
    if ((v20 & 0x8000u) == 0LL) {
      v24 = (SHIDWORD(v20) >> 16) & ~(SHIDWORD(v20) >> 31);
    }
    *(_WORD*)(a3 + 4) = 1;
    v26 = (int)(float)((float)((float)((int)v20 >> 16) +
                               (float)((float)(__int16)v20 * v21)) *
                       *(float*)&v19);
    if (v25 >= v26) {
      v27 = (int)(float)((float)((float)((int)v20 >> 16) +
                                 (float)((float)(__int16)v20 * v21)) *
                         *(float*)&v19);
    }
    else {
      v27 = v25;
    }
    if (v24 <= v26) {
      v24 = v27;
    }
    if ((v20 & 0x800000000000LL) == 0) {
      v24 = WORD2(v20) & 0x7FFF;
    }
    v28 = (float)((float)SWORD1(result) +
                  (float)((float)(__int16)result * *(float*)&v17)) *
          *(float*)&v23;
    v29 = SHIDWORD(result) >> 16;
    v30 = SHIDWORD(result) >> 31;
    if ((result & 0x8000u) == 0LL) {
      v31 = 999;
    }
    else {
      v31 = 0;
    }
    *(_DWORD*)(a3 + 8) = -1;
    *(_DWORD*)(a3 + 24) = -1;
    v32 = v29 & ~v30;
    v33 = v29 & v30;
    v34 = (int)v28;
    if ((result & 0x8000u) == 0LL) {
      v33 = v32;
    }
    if (v31 >= v34) {
      v35 = (int)v28;
    }
    else {
      v35 = v31;
    }
    if (v33 <= v34) {
      v36 = v35;
    }
    else {
      v36 = v33;
    }
    if ((result & 0x800000000000LL) == 0) {
      v36 = WORD2(result) & 0x7FFF;
    }
    *(_DWORD*)(a3 + 16) = v24;
    *(_DWORD*)(a3 + 20) = v36;
    {
      result;
      return;
    }
  }
  if ((unsigned int)(v4 - 40) < 2) {
    if (**(_BYTE**)(result + 64) == 7) {
      GameRoutine_15847c0(a3, (unsigned int)v4, v3);
      return;
    }
    *(_DWORD*)a3 = v4;
    *(_WORD*)(a3 + 4) = 0;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 8) = -1;
    *(_BYTE*)(a3 + 16) = 1;
    if (v4 != 40) {
      result;
      return;
    }
    switch ((unsigned __int8)GameData_21759e0) {
    case 'z':
      v37 = 41;
      if ((GameData_21759e0 & 0xFFFFFF000000LL) != 0x6E6148000000LL ||
          BYTE1(GameData_21759e0) != 104 || BYTE2(GameData_21759e0) != 45) {
        goto LABEL_89;
      }
      if ((BYTE6(GameData_21759e0) == 116 || BYTE6(GameData_21759e0) == 115) &&
          HIBYTE(GameData_21759e0) == 0) {
        goto LABEL_88;
      }
      break;
    case 'k':
      v37 = 41;
      if (BYTE1(GameData_21759e0) != 111) {
        goto LABEL_89;
      }
      goto LABEL_87;
    case 'j':
      v37 = 41;
      if (BYTE1(GameData_21759e0) == 97) {
      LABEL_87:
        if (BYTE2(GameData_21759e0) == 0) {
        LABEL_88:
          v37 = 40;
        }
      }
    LABEL_89:
      *(_DWORD*)a3 = v37;
      {
        result;
        return;
      }
    default:
      break;
    }
  LABEL_77:
    *(_DWORD*)a3 = 41;
    {
      result;
      return;
    }
  }
  if (v4 == 9) {
    v39 =
        *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (unsigned int)v6);
    if (*(_WORD*)(v39 + 256) != 0) {
      v40 = **(__int16**)(v39 + 264);
    }
    else {
      v40 = 0;
    }
    v42 = v40;
    if (**(_BYTE**)(result + 40) == 1) {
      v42 = v40;
      if (**(_BYTE**)(result + 24) == 1) {
        v43 = **(_QWORD**)(result + 48);
        if (*(_WORD*)(v43 + 256) != 0) {
          v42 = **(__int16**)(v43 + 264);
        }
        else {
          v42 = 0;
        }
      }
    }
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 16) = v40;
    *(_DWORD*)(a3 + 20) = v42;
    *(_DWORD*)a3 = 9;
    *(_WORD*)(a3 + 4) = 1;
    *(_DWORD*)(a3 + 8) = -1;
    *(_DWORD*)(a3 + 24) = -1;
  }
  else {
    if (v4 != 10) {
    LABEL_54:
      *(_DWORD*)a3 = v4;
    LABEL_79:
      *(_WORD*)(a3 + 4) = 0;
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      *(_DWORD*)(a3 + 8) = -1;
      *(_BYTE*)(a3 + 16) = 1;
      {
        result;
        return;
      }
    }
    if (**(_BYTE**)(result + 56) != 1) {
      *(_DWORD*)a3 = 10;
      goto LABEL_79;
    }
    if (**(_BYTE**)(result + 40) != 1) {
      v7 = 10;
      v8 = *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                  8LL * (unsigned int)v6) +
                       338LL);
      goto LABEL_62;
    }
    v10 = result;
    v12 = GameRoutine_7a2f50(*(_QWORD*)(result + 16));
    v13 = *(_QWORD*)(v12 + 96);
    if ((v13 & 0x800000000000LL) != 0) {
      v46 = (SHIDWORD(v13) >> 16) & (SHIDWORD(v13) >> 31);
      if ((v13 & 0x8000u) == 0LL) {
        v47 = 999;
      }
      else {
        v47 = 0;
      }
      if ((v13 & 0x8000u) == 0LL) {
        v46 = (SHIDWORD(v13) >> 16) & ~(SHIDWORD(v13) >> 31);
      }
      v44 = (float)(__int16)v13;
      v45 = (float)(__int16)(*(_WORD*)(v12 + 230) + WORD1(v13) +
                             *(_WORD*)(v12 + 212));
      v48 = (int)(float)((float)(v45 + (float)(v44 * *(float*)(v12 + 104))) *
                         *(float*)(v12 + 108));
      if (v47 >= v48) {
        v49 = (int)(float)((float)(v45 + (float)(v44 * *(float*)(v12 + 104))) *
                           *(float*)(v12 + 108));
      }
      else {
        v49 = v47;
      }
      if (v46 <= v48) {
        LODWORD(v14) = v49;
      }
      else {
        LODWORD(v14) = v46;
      }
    }
    else {
      v14 = HIDWORD(v13) & 0x7FFF;
    }
    result = BattleInfo_7a3000(*(_QWORD*)(v10 + 16));
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)a3 = 10;
    *(_DWORD*)(a3 + 8) = -1;
    *(_DWORD*)(a3 + 24) = -1;
    *(_WORD*)(a3 + 4) = 1;
    if ((int)v14 <= (int)result) {
      v50 = result;
    }
    else {
      v50 = v14;
    }
    *(_DWORD*)(a3 + 16) = v50;
    *(_DWORD*)(a3 + 20) = v50;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

game_gameui_Util_SetUnitStatus_lambda0_Invoke(PSEUDO_X8 x8_, __int64 result,
                                              int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v4;
  __int64 v5;
  char v6;
  __int64 v7;
  int v8;
  _WORD* v9;
  unsigned __int16* v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  bool v16;
  bool v17;
  unsigned __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  float v32;
  float v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  _BYTE* v41;
  bool v42;
  int v43;
  float v44;
  float v45;
  __int64 v46;
  unsigned int v47;
  bool v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  int v52;
  bool v53;
  __int64 v54;
  int v55;
  float v56;
  float v57;
  __int64 v58;
  int v59;
  float v60;
  float v61;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  int v68;
  int v69;
  __int64 v70;
  int v71;
  __int64 v72;
  int v73;
  int v74;
  __int64 v75;
  int v76;
  int v77;
  __int64 v78;
  int v79;
  int v80;
  __int64 v81;
  int v82;
  char v83;
  char v84;
  __int64 v85;
  __int64 v86;
  unsigned int v87;
  int v88;
  int v89;
  int v90;
  bool v91;
  int v92;
  bool v93;
  bool v94;
  unsigned __int8* v95;
  int v96;
  __int64 v97;

  v4 = *a2;
  v5 = **(_QWORD**)(result + 8);
  if (v5 != 0) {
    v6 = 1;
    v7 = result;
    switch (*a2) {
    case 0:
    case 1:
    case 2:
    case 7:
      v8 = *(unsigned __int16*)(v5 + 1952);
      v9 = (_WORD*)(v5 + 1952);
      if (*(_WORD*)(v5 + 1952) != 0) {
        v10 = (unsigned __int16*)(v5 + 1952);
      }
      else {
        v10 = nullptr;
      }
      v11 = (unsigned int)game_gameui_158d340(v10);
      if (v8 != 0 && *v9 != 0) {
        v12 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                         8LL * (unsigned __int16)*v9);
        v13 = *(unsigned __int8*)(v12 + 72);
        if (v13 - 5 > 1) {
          v17 = v13 < 8;
        }
        else {
          v14 = *(unsigned __int8*)(v12 + 73);
          if (v14 == 1) {
            v17 = true;
          }
          else {
            v16 = v11 == 4 || v11 == 7;
            v17 = v14 == 2 && v16;
          }
        }
      }
      else {
        v17 = false;
      }
      v92 = game_gameui_1594bd0(**(_QWORD**)(v7 + 8), v10, 1);
      result = game_gameui_1594bd0(**(_QWORD**)(v7 + 8), v10, 0);
      if (v11 == 1) {
        if (v8 == 0) {
          v93 = false;
        LABEL_164:
          *(_DWORD*)a3 = v11;
          *(_BYTE*)(a3 + 4) = v17;
          *(_BYTE*)(a3 + 5) = v93;
          goto LABEL_165;
        }
      }
      else if (
          v8 == 0 ||
          (v11 == 2
               ? (v94 =
                      (unsigned int)*(
                          unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878
                                                                      [0] +
                                                                  64) +
                                                       8LL *
                                                           (unsigned __int16)*v9) +
                                            72LL) -
                          5 >=
                      2)
               : (v94 = false),
           !v94)) {
        *(_DWORD*)a3 = v11;
        *(_BYTE*)(a3 + 4) = v17;
        *(_BYTE*)(a3 + 5) = 0;
      LABEL_165:
        *(_QWORD*)(a3 + 32) = 0;
        *(_QWORD*)(a3 + 40) = 0;
        *(_QWORD*)(a3 + 48) = 0;
        *(_DWORD*)(a3 + 56) = 0;
        *(_DWORD*)(a3 + 16) = v92;
        goto LABEL_166;
      }
      v93 = (*(_BYTE*)(v5 + 1955) & 8) != 0;
      goto LABEL_164;
    case 10:
      v49 = *(unsigned __int16*)(v5 + 1952);
      if (*(_WORD*)(v5 + 1952) != 0) {
        v50 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v49);
        v51 = *(unsigned __int8*)(v50 + 72);
        if (v51 - 5 > 1) {
          v53 = v51 < 8 || v51 == 13;
        }
        else {
          v52 = *(unsigned __int8*)(v50 + 73);
          v53 = v52 == 1 || v52 == 7;
        }
        v84 = v53;
      }
      else {
        v84 = 0;
      }
      v90 = game_Unit_GetUnknown4(**(_QWORD**)(result + 8), 1);
      result = game_Unit_GetUnknown4(**(_QWORD**)(v7 + 8), 0);
      v91 = (_DWORD)v49 != 0 && (*(_BYTE*)(v5 + 1955) & 8) != 0;
      *(_BYTE*)(a3 + 5) = v91;
      *(_BYTE*)(a3 + 4) = v84;
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      *(_DWORD*)(a3 + 16) = v90;
      *(_DWORD*)a3 = 10;
      goto LABEL_166;
    case 11:
      v34 = UnitDerivedParams_6deeb0(**(_QWORD**)(result + 8), 1);
      result = UnitDerivedParams_6deeb0(**(_QWORD**)(v7 + 8), 0);
      v36 = 11;
      goto LABEL_44;
    case 12:
      v43 = UnitDerivedParams_6deeb0(**(_QWORD**)(result + 8), 1) +
            *(__int16*)(v5 + 636);
      if (*(_WORD*)(v5 + 1952) != 0) {
        v43 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                      8LL * *(unsigned __int16*)(v5 + 1952)) +
                           118LL);
      }
      v44 = *(float*)(v5 + 688);
      if (v44 <= 1.0f) {
        v45 = v44 * (float)(v43 + *(__int16*)(v5 + 684));
      }
      else {
        v45 = (float)*(__int16*)(v5 + 684) + (float)((float)v43 * v44);
      }
      v74 = (int)v45;
      if ((int)v45 >= 999) {
        v74 = 999;
      }
      v69 = (v74 + *(__int16*)(v5 + 686)) &
            ~((v74 + *(__int16*)(v5 + 686)) >> 31);
      v75 = **(_QWORD**)(v7 + 8);
      result = UnitDerivedParams_6deeb0(v75, 0);
      v76 = result + *(__int16*)(v75 + 636);
      if (*(_WORD*)(v75 + 1952) != 0) {
        v76 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                      8LL * *(unsigned __int16*)(v75 + 1952)) +
                           118LL);
      }
      LODWORD(v72) = v76 & ~(v76 >> 31);
      v73 = 12;
      goto LABEL_128;
    case 13:
      if (*(_WORD*)(v5 + 1952) != 0) {
        v46 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                         8LL * *(unsigned __int16*)(v5 + 1952));
        v47 = *(unsigned __int8*)(v46 + 72);
        if (v47 - 5 > 1) {
          v48 = v47 < 8 || v47 == 13;
        }
        else {
          v48 = *(_BYTE*)(v46 + 73) == 1;
        }
        v83 = v48;
      }
      else {
        v83 = 0;
      }
      result = game_Unit_GetUnknown6(**(_QWORD**)(result + 8), 1);
      v85 = **(_QWORD**)(v7 + 8);
      v72 = *(unsigned __int16*)(v85 + 1952);
      if (*(_WORD*)(v85 + 1952) != 0) {
        v86 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v72);
        if (*(_BYTE*)(v86 + 73) == 1) {
          v87 = result;
          v88 = *(__int16*)(v85 + 638) + *(__int16*)(v86 + 120);
          LOBYTE(v97) = 5;
          v89 = game_Unit_GetParam(v85, &v97, 0);
          LOBYTE(v97) = 3;
          LODWORD(v72) = game_Unit_GetParam(v85, &v97, 0) + v89;
          result = v87;
          LODWORD(v72) = (v88 + (int)v72 / 2) & ~((v88 + (int)v72 / 2) >> 31);
        }
        else {
          LODWORD(v72) = 0;
        }
      }
      *(_BYTE*)(a3 + 4) = v83;
      *(_BYTE*)(a3 + 5) = 0;
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      *(_DWORD*)(a3 + 16) = result;
      *(_DWORD*)a3 = 13;
      goto LABEL_129;
    case 14:
      v58 = **(_QWORD**)(result + 8);
      LOBYTE(v97) = 5;
      v59 = game_Unit_GetParam(v58, &v97, 1) + *(__int16*)(v5 + 640);
      if (*(_WORD*)(v5 + 1952) != 0) {
        v59 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                      8LL * *(unsigned __int16*)(v5 + 1952)) +
                           122LL);
      }
      v60 = *(float*)(v5 + 704);
      if (v60 <= 1.0f) {
        v61 = v60 * (float)(v59 + *(__int16*)(v5 + 700));
      }
      else {
        v61 = (float)*(__int16*)(v5 + 700) + (float)((float)v59 * v60);
      }
      v80 = (int)v61;
      if ((int)v61 >= 999) {
        v80 = 999;
      }
      v69 = (v80 + *(__int16*)(v5 + 702)) &
            ~((v80 + *(__int16*)(v5 + 702)) >> 31);
      v81 = **(_QWORD**)(v7 + 8);
      LOBYTE(v97) = 5;
      result = game_Unit_GetParam(v81, &v97, 0);
      v82 = result + *(__int16*)(v81 + 640);
      if (*(_WORD*)(v81 + 1952) != 0) {
        v82 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                      8LL * *(unsigned __int16*)(v81 + 1952)) +
                           122LL);
      }
      LODWORD(v72) = v82 & ~(v82 >> 31);
      v73 = 14;
      goto LABEL_128;
    case 15:
      v54 = **(_QWORD**)(result + 8);
      LOBYTE(v97) = 6;
      v55 = game_Unit_GetParam(v54, &v97, 1) + *(__int16*)(v5 + 630);
      if (*(_WORD*)(v5 + 1952) != 0) {
        v55 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                      8LL * *(unsigned __int16*)(v5 + 1952)) +
                           112LL);
      }
      v56 = *(float*)(v5 + 664);
      if (v56 <= 1.0f) {
        v57 = v56 * (float)(v55 + *(__int16*)(v5 + 660));
      }
      else {
        v57 = (float)*(__int16*)(v5 + 660) + (float)((float)v55 * v56);
      }
      v77 = (int)v57;
      if ((int)v57 >= 999) {
        v77 = 999;
      }
      v69 = (v77 + *(__int16*)(v5 + 662)) &
            ~((v77 + *(__int16*)(v5 + 662)) >> 31);
      v78 = **(_QWORD**)(v7 + 8);
      LOBYTE(v97) = 6;
      result = game_Unit_GetParam(v78, &v97, 0);
      v79 = result + *(__int16*)(v78 + 630);
      if (*(_WORD*)(v78 + 1952) != 0) {
        v79 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                      8LL * *(unsigned __int16*)(v78 + 1952)) +
                           112LL);
      }
      LODWORD(v72) = v79 & ~(v79 >> 31);
      v73 = 15;
      goto LABEL_128;
    case 16:
      v30 = **(_QWORD**)(result + 8);
      LOBYTE(v97) = 7;
      v31 = game_Unit_GetParam(v30, &v97, 1) + *(__int16*)(v5 + 632);
      if (*(_WORD*)(v5 + 1952) != 0) {
        v31 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                      8LL * *(unsigned __int16*)(v5 + 1952)) +
                           114LL);
      }
      v32 = *(float*)(v5 + 672);
      if (v32 <= 1.0f) {
        v33 = v32 * (float)(v31 + *(__int16*)(v5 + 668));
      }
      else {
        v33 = (float)*(__int16*)(v5 + 668) + (float)((float)v31 * v32);
      }
      v68 = (int)v33;
      if ((int)v33 >= 999) {
        v68 = 999;
      }
      v69 = (v68 + *(__int16*)(v5 + 670)) &
            ~((v68 + *(__int16*)(v5 + 670)) >> 31);
      v70 = **(_QWORD**)(v7 + 8);
      LOBYTE(v97) = 7;
      result = game_Unit_GetParam(v70, &v97, 0);
      v71 = result + *(__int16*)(v70 + 632);
      if (*(_WORD*)(v70 + 1952) != 0) {
        v71 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                      8LL * *(unsigned __int16*)(v70 + 1952)) +
                           114LL);
      }
      LODWORD(v72) = v71 & ~(v71 >> 31);
      v73 = 16;
    LABEL_128:
      *(_DWORD*)a3 = v73;
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      *(_DWORD*)(a3 + 16) = v69;
      *(_WORD*)(a3 + 4) = 1;
    LABEL_129:
      *(_DWORD*)(a3 + 8) = -1;
      *(_DWORD*)(a3 + 20) = v72;
      *(_DWORD*)(a3 + 24) = -1;
      {
        result;
        return;
      }
    case 17:
      if (*(_WORD*)(v5 + 1952) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL *
                                             *(unsigned __int16*)(v5 + 1952)) +
                              72LL) <= 7u) {
        v37 = **(_QWORD**)(result + 8);
        v97 = *(_QWORD*)(v5 + 1952);
        v38 = game_Unit_GetMinRange(v37, &v97);
        v39 = **(_QWORD**)(v7 + 8);
        v97 = *(_QWORD*)(v5 + 1952);
        result = game_Unit_GetMaxRange(v39, &v97);
        v40 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                         8LL * *(unsigned __int16*)(v5 + 1952));
        v41 = *(_BYTE**)(v40 + 192);
        v42 = v41 == nullptr || *(unsigned __int8*)(v40 + 72) > 7u;
        if (v42 || v41[105] == 0) {
          v41 = nullptr;
        }
        else if (v41[104] == 2) {
          v41 = nullptr;
        }
        v95 = (unsigned __int8*)(v40 + 93);
        if (v41 != nullptr) {
          v95 = v41 + 279;
        }
        v96 = *v95;
        *(_DWORD*)a3 = 17;
        *(_QWORD*)(a3 + 32) = 0;
        *(_QWORD*)(a3 + 40) = 0;
        *(_QWORD*)(a3 + 48) = 0;
        *(_DWORD*)(a3 + 56) = 0;
        *(_DWORD*)(a3 + 16) = v38;
        *(_DWORD*)(a3 + 20) = result;
        *(_WORD*)(a3 + 4) = 1;
        *(_DWORD*)(a3 + 8) = -1;
        *(_DWORD*)(a3 + 24) = v96;
        if (((int)result + v38 < 0) ^ __OFADD__((_DWORD)result, v38) |
            ((_DWORD)result + v38 == 0)) {
          *(_BYTE*)(a3 + 4) = 0;
        }
      }
      else {
        *(_WORD*)(a3 + 4) = 0;
        *(_QWORD*)(a3 + 32) = 0;
        *(_QWORD*)(a3 + 40) = 0;
        *(_QWORD*)(a3 + 48) = 0;
        *(_DWORD*)(a3 + 56) = 0;
        *(_DWORD*)a3 = 17;
        *(_DWORD*)(a3 + 8) = -1;
        *(_BYTE*)(a3 + 16) = 1;
      }
      {
        result;
        return;
      }
    case 28:
      LOBYTE(v97) = 0;
      v34 = game_Unit_GetParam(v5, &v97, 1);
      v35 = **(_QWORD**)(v7 + 8);
      LOBYTE(v97) = 0;
      result = game_Unit_GetParam(v35, &v97, 0);
      v36 = 28;
    LABEL_44:
      *(_DWORD*)a3 = v36;
      *(_WORD*)(a3 + 4) = 1;
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      *(_DWORD*)(a3 + 16) = v34;
    LABEL_166:
      *(_DWORD*)(a3 + 8) = -1;
      *(_DWORD*)(a3 + 20) = result;
      *(_DWORD*)(a3 + 24) = -1;
      {
        result;
        return;
      }
    case 29:
      goto LABEL_98;
    case 30:
      v6 = 2;
      goto LABEL_98;
    case 31:
      v6 = 3;
      goto LABEL_98;
    case 32:
      v6 = 4;
      goto LABEL_98;
    case 33:
      v6 = 5;
      goto LABEL_98;
    case 34:
      v6 = 6;
      goto LABEL_98;
    case 35:
      v6 = 7;
      goto LABEL_98;
    case 36:
      v6 = 8;
    LABEL_98:
      LOBYTE(v97) = v6;
      v24 = game_Unit_GetParam(v5, &v97, 1);
      v64 = **(_QWORD**)(v7 + 8);
      LOBYTE(v97) = v6;
      v29 = game_Unit_GetParam(v64, &v97, 0);
      v65 = **(_QWORD**)(v7 + 8);
      LOBYTE(v97) = v6;
      result = game_Unit_GetParamLimit(v65, &v97);
      *(_DWORD*)a3 = v4;
      *(_WORD*)(a3 + 4) = 1;
      goto LABEL_99;
    case 37:
      v23 = **(_QWORD**)(result + 8);
      LOBYTE(v97) = 10;
      v24 = game_Unit_GetParam(v23, &v97, 1);
      v25 = **(_QWORD**)(v7 + 8);
      if ((game_Unit_IsImmobile(v25) & 1) != 0 &&
          (*(_BYTE*)(v25 + 416) & 4) == 0 &&
          (v26 = *(_QWORD*)(v25 + 392)) != 0 &&
          (v27 = *(unsigned __int16*)(v26 + 470),
           (v28 = game_Unit_GetJob(v25)) != 0)) {
        if (v27 == 0) {
          LOWORD(v27) = *(_WORD*)(v28 + 308);
        }
        v29 = *(__int16*)(v28 + 330) + (__int16)v27;
      }
      else {
        LOBYTE(v97) = 10;
        v66 = game_Unit_GetJob(v25);
        v29 = UnitParams_6dd470(v25, &v97, v66, 0);
      }
      v67 = **(_QWORD**)(v7 + 8);
      LOBYTE(v97) = 10;
      result = game_Unit_GetParamLimit(v67, &v97);
      *(_DWORD*)a3 = 37;
      *(_WORD*)(a3 + 4) = 1;
    LABEL_99:
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      *(_DWORD*)(a3 + 16) = v24;
      *(_DWORD*)(a3 + 20) = v29;
      *(_DWORD*)(a3 + 24) = result;
      *(_DWORD*)(a3 + 8) = -1;
      {
        result;
        return;
      }
    default:
      *(_DWORD*)a3 = v4;
      *(_WORD*)(a3 + 4) = 0;
      *(_BYTE*)(a3 + 16) = 1;
      *(_QWORD*)(a3 + 32) = 0;
      *(_QWORD*)(a3 + 40) = 0;
      *(_QWORD*)(a3 + 48) = 0;
      *(_DWORD*)(a3 + 56) = 0;
      *(_DWORD*)(a3 + 8) = -1;
      if (v4 != 40) {
        result;
        return;
      }
      v18 = GameData_21759e0;
      v19 = BYTE1(GameData_21759e0);
      v20 = BYTE2(GameData_21759e0);
      v21 = (unsigned __int8)GameData_21759e0;
      if ((unsigned __int8)GameData_21759e0 == 122) {
        goto LABEL_87;
      }
      if ((unsigned __int8)GameData_21759e0 == 107) {
        goto LABEL_81;
      }
      goto LABEL_22;
    }
  }
  *(_DWORD*)a3 = v4;
  *(_WORD*)(a3 + 4) = 0;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_DWORD*)(a3 + 56) = 0;
  *(_DWORD*)(a3 + 8) = -1;
  *(_BYTE*)(a3 + 16) = 1;
  if (v4 == 40) {
    v18 = GameData_21759e0;
    v19 = BYTE1(GameData_21759e0);
    v20 = BYTE2(GameData_21759e0);
    v21 = (unsigned __int8)GameData_21759e0;
    if ((unsigned __int8)GameData_21759e0 == 122) {
    LABEL_87:
      v63 = 41;
      if ((v18 & 0xFFFFFF000000LL) != 0x6E6148000000LL || v19 != 104 ||
          v20 != 45) {
        goto LABEL_95;
      }
      if (BYTE6(v18) != 116 && BYTE6(v18) != 115 || HIBYTE(v18) != 0) {
        goto LABEL_94;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 == 107) {
    LABEL_81:
      if (v19 != 111 || v20 != 0) {
      LABEL_94:
        v63 = 41;
        goto LABEL_95;
      }
    }
    else {
    LABEL_22:
      if (v21 != 106) {
        goto LABEL_94;
      }
      if (v19 != 97 || v20 != 0) {
        goto LABEL_94;
      }
    }
    v63 = 40;
  LABEL_95:
    *(_DWORD*)a3 = v63;
  }
  {
    result;
    return;
  }
}

__int64 game_gameui_Util_GetHealPower_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return game_HasActiveSkill_843420(
      a2, *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                8LL * **(unsigned __int16**)(a1 + 8)) +
                     24LL) +
              8LL);
}

__int64 game_gameui_Util_CollectArtsInfoList_lambda0_Invoke(__int64 result,
                                                            unsigned int* a2)
{
  unsigned __int64 v2;
  _BYTE* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = *a2;
  v3 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8 * (v2 & 0xFFF)) +
                  80LL);
  if (v3 == nullptr || *v3 == 0) {
    v4 = **(_QWORD**)(result + 8);
    v5 = *(_QWORD*)(v4 + 1080);
    v6 = *(_QWORD*)(v4 + 1072);
    if (((v2 >> 5) & 0x7F) + 1 <= (v5 - v6) >> 2 &&
        ((*(_DWORD*)(v6 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) != 0) {
      v7 = *(_QWORD*)(result + 16);
    }
    else {
      v7 = *(_QWORD*)(result + 24);
    }
    return GameRoutine_6e3d00(v7, a2);
  }
  return result;
}

__int64

game_gameui_Util_CollectBlazeArtsInfo_lambda0_Invoke_15b66a0(__int64 result,
                                                             int* a2)
{
  int v2;
  __int64* v3;
  unsigned __int64 v4;
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *a2;
  if ((*a2 & 0xFFF) != 0) {
    v3 = *(__int64**)(result + 8);
    v5 = (_DWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 2) + 1;
      if (v9 >> 62 != 0) {
        GameRoutine_6e3e20();
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 1 > v9) {
        v9 = v10 >> 1;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFFCLL) {
        v12 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 62 != 0) {
          GameRoutine_60a210(result);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 4 * v12;
      v15 = v13 + v8 - 4 * (v8 >> 2);
      *(_DWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 4;
      result = memcpy(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
      }
    }
    else {
      *v5 = v2;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

__int64 game_gameui_Util_CollectBlazeArtsInfo_lambda2_Invoke(__int64 result,
                                                             _DWORD* a2)
{
  __int64 v2;

  if ((*a2 & 0xFFF) != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a2 & 0xFFF));
    if (v2 != 0 && *(_BYTE*)(v2 + 104) == 3 &&
        (unsigned int)*(unsigned __int8*)(v2 + 250) - 33 <= 1) {
      return GameRoutine_6e3d00(*(_QWORD*)(result + 8) + 48LL, a2);
    }
  }
  return result;
}

void game_gameui_Util_CollectBlazeArtsInfo_lambda0_Invoke_15b6a00(__int64 a1,
                                                                  int* a2)
{
  __int64 v4;
  char v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  int* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  int* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  signed __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;

  if ((*a2 & 0xFFF) == 0) {
    return;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (v4 != 0 && *(_BYTE*)(v4 + 104) == 3 &&
      (unsigned int)*(unsigned __int8*)(v4 + 250) - 33 < 2) {
    return;
  }
  v5 = game_Unit_GetUnknown6cba30_alt1(**(_QWORD**)(a1 + 8));
  v6 = *a2;
  if (v5 == 2) {
    **(_DWORD**)(a1 + 16) = v6;
  }
  if ((v6 & 0xFFF) == 0) {
    goto LABEL_12;
  }
  v7 = *(_QWORD*)(a1 + 24);
  v39 = v6;
  v8 = *(_QWORD*)(v7 + 32);
  if (v8 == 0) {
    GameRoutine_60a310_alt1();
  }
  if (((*(__int64 (**)(__int64, int*))(*(_QWORD*)v8 + 48LL))(v8, &v39) & 1) ==
      0) {
  LABEL_12:
    v12 = *(_QWORD**)(a1 + 32);
    v14 = (int*)v12[4];
    v13 = v12[5];
    if ((unsigned __int64)v14 >= v13) {
      v16 = v12[3];
      v17 = (unsigned __int64)v14 - v16;
      v18 = ((__int64)v14 - v16) >> 2;
      v19 = v18 + 1;
      if ((unsigned __int64)(v18 + 1) >> 62 != 0) {
        goto LABEL_46;
      }
      v20 = v13 - v16;
      if (v20 >> 1 > v19) {
        v19 = v20 >> 1;
      }
      if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFFCLL) {
        v21 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v21 = v19;
      }
      if (v21 != 0) {
        if (v21 >> 62 != 0) {
          goto LABEL_47;
        }
        v22 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v21, 16, 0);
      }
      else {
        v22 = 0;
      }
      v30 = *a2;
      v31 = v22 + 4 * v21;
      v32 = v22 + v17 - 4 * v18;
      *(_DWORD*)(v22 + v17) = v30;
      v15 = v22 + v17 + 4;
      memcpy_alt1(v32, v16, v17);
      v12[3] = v32;
      v12[4] = v15;
      v12[5] = v31;
      if (v16 != 0) {
        v33 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v16);
      }
    }
    else {
      *v14 = *a2;
      v15 = (__int64)(v14 + 1);
    }
    v12[4] = v15;
    return;
  }
  v9 = *(__int64**)(a1 + 32);
  v11 = (int*)v9[1];
  v10 = v9[2];
  if ((unsigned __int64)v11 < v10) {
    *v11 = *a2;
    v9[1] = (__int64)(v11 + 1);
    return;
  }
  v23 = *v9;
  v24 = (signed __int64)v11 - *v9;
  v25 = (v24 >> 2) + 1;
  if (v25 >> 62 != 0) {
  LABEL_46:
    GameRoutine_6e3e20_alt1();
  }
  v26 = v10 - v23;
  v27 = fw_memory_g_heap_manager_ptr;
  if (v26 >> 1 > v25) {
    v25 = v26 >> 1;
  }
  if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFFCLL) {
    v28 = 0x3FFFFFFFFFFFFFFFLL;
  }
  else {
    v28 = v25;
  }
  if (v28 == 0) {
    v29 = 0;
    goto LABEL_40;
  }
  if (v28 >> 62 != 0) {
  LABEL_47:
    GameRoutine_60a210_alt1();
  }
  v29 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v28, 16, 0);
LABEL_40:
  v34 = *a2;
  v35 = v29 + 4 * v28;
  v36 = v29 + v24 - 4 * (v24 >> 2);
  *(_DWORD*)(v29 + v24) = v34;
  v37 = v29 + v24 + 4;
  memcpy_alt1(v36, v23, v24);
  *v9 = v36;
  v9[1] = v37;
  v9[2] = v35;
  if (v23 != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v27 + v38, v23);
  }
  v9[1] = v37;
}

__int64 game_gameui_Util_CollectBlazeArtsInfo_lambda1_Invoke(__int64 result,
                                                             _DWORD* a2)
{
  __int64 v2;

  if ((*a2 & 0xFFF) != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a2 & 0xFFF));
    if (v2 != 0 && *(_BYTE*)(v2 + 104) == 3 &&
        (unsigned int)*(unsigned __int8*)(v2 + 250) - 33 <= 1) {
      return GameRoutine_6e3d00(*(_QWORD*)(result + 8) + 48LL, a2);
    }
  }
  return result;
}

__int64 game_gameui_Util_IsVisibleSpecialPage_lambda0_Invoke(__int64 result,
                                                             _DWORD* a2)
{
  **(_BYTE**)(result + 8) |=
      (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                            8LL * (*a2 & 0xFFF)) +
                 754LL) &
       0x400) == 0;
  return result;
}

unsigned int Util_1660c60(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  char* v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v22;
  __int64 v23;
  char v24;
  _BOOL4 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  char* v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  float v46;
  __int64 v47;
  __int64 v48;
  float v49;
  __int64* v50;
  __int64* v51;
  int v52;
  __int64 v53;
  float v55;
  signed int v56;
  __int64 v57;
  __int64 v58;
  signed int v59;
  signed int v60;
  struct {
    char* v61;
    char* v62;
    __int64 v63;
  } v61_;
  struct {
    char* v64;
    char* v65;
    __int64 v66;
  } v64_;
  struct {
    char* v67;
    char* v68;
  } v67_;

  v1 = *(_QWORD*)(a1 + 16);
  v67_.v68 = (char*)&GameData_1abd4d1;
  v67_.v67 = (char*)game_HashString((__int64)&GameData_1abd4d1);
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v67_.v67);
    if (v3 != 0) {
      v4 = *(_DWORD*)(v3 + 32);
      v5 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_8;
      }
    }
    else {
      v4 = 3;
      v5 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_8;
      }
    }
    if (*(_DWORD*)(v5 + 60) == 3) {
    LABEL_11:
      v7 = *(_QWORD*)(v1 + 88);
      v8 = **(_QWORD**)(a1 + 8);
      v9 = (__int64*)fw_memory_g_heap_manager_ptr;
      v10 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
      *(_QWORD*)v10 = v8;
      *(_QWORD*)(v10 + 8) = v7;
      v61_.v63 = 0;
      v64_.v64 = (char*)v10;
      v61_.v61 = nullptr;
      v61_.v62 = nullptr;
      v64_.v65 = (char*)(v10 + 16);
      v64_.v66 = v10 + 16;
      SpotMgr_13306e0_alt1((void*)(&v67_.v67), &v64_.v64, 1, &v61_.v61);
      v11 = v67_.v67;
      v12 = v67_.v68;
      if (v67_.v67 != nullptr) {
        v13 = *v9;
        v67_.v68 = v67_.v67;
        v14 = 128;
        if (*(_QWORD*)(v13 + 200) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(v13 + v14, (__int64)v67_.v67);
      }
      v15 = v12 - v11;
      if (v61_.v61 != nullptr) {
        v16 = *v9;
        v61_.v62 = v61_.v61;
        v17 = 128;
        if (*(_QWORD*)(v16 + 200) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(v16 + v17, (__int64)v61_.v61);
      }
      v18 = v15 >> 3;
      if (v64_.v64 != nullptr) {
        v19 = *v9;
        v64_.v65 = v64_.v64;
        v20 = 128;
        if (*(_QWORD*)(v19 + 200) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(v19 + v20, (__int64)v64_.v64);
      }
      return vcvtps_s32_f32((float)(unsigned __int64)v18 / (float)v4);
    }
  }
  else {
    v4 = 3;
  }
LABEL_8:
  v67_.v68 = (char*)&GameData_1ab570b;
  v67_.v67 = (char*)game_HashString((__int64)&GameData_1ab570b);
  if (game_GameModeData_instance_ != 0) {
    v6 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v67_.v67);
    if (v6 != 0 && *(_DWORD*)(v6 + 32) != 0) {
      goto LABEL_11;
    }
  }
  v22 = 17;
  if ((unsigned __int8)Impl_13261c0(***(_QWORD***)a1) == 4) {
    v23 = ***(_QWORD***)a1;
    v24 = Impl_13261c0(v23);
    v25 = (*(_BYTE*)(v23 + 178) & 2) != 0;
    if (v24 != 4) {
      v25 = true;
    }
    if (v25) {
      v22 = 17;
    }
    else {
      v22 = 81;
    }
  }
  v26 = *(_QWORD*)(v1 + 88);
  v27 = **(_QWORD**)(a1 + 8);
  v28 = (__int64*)fw_memory_g_heap_manager_ptr;
  v29 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  *(_QWORD*)v29 = v27;
  *(_QWORD*)(v29 + 8) = v26;
  v61_.v63 = 0;
  v64_.v64 = (char*)v29;
  v61_.v61 = nullptr;
  v61_.v62 = nullptr;
  v64_.v65 = (char*)(v29 + 16);
  v64_.v66 = v29 + 16;
  SpotMgr_13306e0_alt1((void*)(&v67_.v67), &v64_.v64, v22, &v61_.v61);
  v30 = v67_.v67;
  v31 = v67_.v68;
  if (v67_.v67 != nullptr) {
    v32 = *v28;
    v67_.v68 = v67_.v67;
    v33 = 128;
    if (*(_QWORD*)(v32 + 200) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(v32 + v33, (__int64)v67_.v67);
  }
  if (v61_.v61 != nullptr) {
    v34 = *v28;
    v61_.v62 = v61_.v61;
    v35 = 128;
    if (*(_QWORD*)(v34 + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(v34 + v35, (__int64)v61_.v61);
  }
  if (v64_.v64 != nullptr) {
    v36 = *v28;
    v64_.v65 = v64_.v64;
    v37 = 128;
    if (*(_QWORD*)(v36 + 200) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(v36 + v37, (__int64)v64_.v64);
  }
  v38 = v31 - v30;
  v39 = *(__int64**)(a1 + 8);
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    v67_.v68 = (char*)&GameData_1ab570b;
    v67_.v67 = (char*)game_HashString((__int64)&GameData_1ab570b);
    if (game_GameModeData_instance_ != 0 &&
        (v40 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v67_.v67)) != 0) {
      if (*(_DWORD*)(v40 + 32) == 0) {
        v22 = v22 & 0xC1 | 0x20;
      }
    }
    else {
      v22 = v22 & 0xC1 | 0x20;
    }
  }
  v41 = *v39;
  v42 = *(_QWORD*)(v1 + 88);
  v43 = fw_memory_HeapManager_Allocate_alt1(*v28, 16, 16, 0);
  *(_QWORD*)v43 = v41;
  *(_QWORD*)(v43 + 8) = v42;
  v61_.v63 = 0;
  v64_.v64 = (char*)v43;
  v61_.v61 = nullptr;
  v61_.v62 = nullptr;
  v64_.v65 = (char*)(v43 + 16);
  v64_.v66 = v43 + 16;
  SpotMgr_13306e0_alt1((void*)(&v67_.v67), &v64_.v64, v22, &v61_.v61);
  if (v61_.v61 != nullptr) {
    v44 = *v28;
    v61_.v62 = v61_.v61;
    v45 = 128;
    if (*(_QWORD*)(v44 + 200) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(v44 + v45, (__int64)v61_.v61);
  }
  v46 = (float)v4;
  if (v64_.v64 != nullptr) {
    v47 = *v28;
    v64_.v65 = v64_.v64;
    v48 = 128;
    if (*(_QWORD*)(v47 + 200) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(v47 + v48, (__int64)v64_.v64);
  }
  v49 = (float)(unsigned __int64)(v38 >> 3) / v46;
  v50 = (__int64*)v67_.v67;
  v51 = (__int64*)v67_.v68;
  if (v67_.v67 != v67_.v68) {
    v52 = 0;
    do {
      v53 = *v50;
      ++v52;
      if ((unsigned __int8)Impl_13261c0(*v50) == 4 &&
          (*(_BYTE*)(v53 + 178) & 2) == 0) {
        v52 = (int)(float)(ceilf((float)v52 / v46) * v46);
      }
      ++v50;
    } while (v50 != v51);
    v50 = (__int64*)v67_.v67;
    v55 = (float)v52;
    v56 = vcvtps_s32_f32(v49);
    if (v67_.v67 == nullptr) {
      goto LABEL_71;
    }
    goto LABEL_68;
  }
  v55 = 0x0.0p+0f;
  v56 = vcvtps_s32_f32(v49);
  if (v67_.v67 != nullptr) {
  LABEL_68:
    v57 = *v28;
    v67_.v68 = (char*)v50;
    v58 = 128;
    if (*(_QWORD*)(v57 + 200) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(v57 + v58, (__int64)v50);
  }
LABEL_71:
  v59 = vcvtps_s32_f32(v55 / v46);
  if (v59 >= v56) {
    v60 = v56;
  }
  else {
    v60 = v59;
  }
  if (v59 == 0) {
    v60 = v56;
  }
  if (v56 != 0) {
    return v60;
  }
  else {
    return v59;
  }
}

#pragma GCC visibility pop
