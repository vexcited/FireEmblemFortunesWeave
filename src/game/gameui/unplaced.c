#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
_QWORD* LayoutAccessor_1560520(__int64*, __int64, __int64, _BYTE*);
__attribute__((swiftcall)) void GameRoutine_1114920(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1366bd0(PSEUDO_X8, __int64, __int64,
                                                    unsigned int*);
__attribute__((swiftcall)) void
GameRoutine_1366bd0_alt1(PSEUDO_X8, __int64, __int64,
                         __int64) __asm__("GameRoutine_1366bd0");
__attribute__((swiftcall)) void GameRoutine_15725c0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1572840(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_15ab7b0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_fa73c0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void Layout_1363f00(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void TimelineFile_890540(PSEUDO_X8, unsigned __int8);
__attribute__((swiftcall)) void Util_158aec0(PSEUDO_X8, __int64 result,
                                             __int64);
__attribute__((swiftcall)) void game_1603f20(PSEUDO_X8, _QWORD*);
__attribute__((swiftcall)) void game_Unit_GetParams(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void
    game_gameui_15ad0c0_alt1(PSEUDO_X8, _QWORD,
                             _QWORD) __asm__("game_gameui_15ad0c0");
__attribute__((swiftcall)) void
game_gameui_15ad0c0_alt2(PSEUDO_X8, __int64*, __int64*,
                         __n128 result) __asm__("game_gameui_15ad0c0");
__attribute__((swiftcall)) void
game_gameui_Util_GetNewMagicList(PSEUDO_X8, _QWORD* result, _QWORD*, __int64);
__attribute__((swiftcall)) void
game_gameui_Util_GetNewSkillList(PSEUDO_X8, __int64 result, __int64, __int64);
__int64* LayoutAccessor_155fbe0(__int64*, __int64);
__int64* Util_1580bf0(__int64* result, __int64, unsigned int, char, char, char,
                      char, char);
__int64 Alignment_56b600(__int64 result);
__int64 Alignment_56b600_alt1(_QWORD, _QWORD) __asm__("Alignment_56b600");
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_133f1d0(__int64, __int64, __int64, __int64, __int64,
                            __int64, __int64, __int64);
__int64 GameRoutine_156c5d0(__int64, __int64, char);
__int64 GameRoutine_156c910_alt1(__int64 result, const char*, int,
                                 ...) __asm__("GameRoutine_156c910");
__int64 GameRoutine_156d580(_QWORD);
__int64 GameRoutine_157a1e0(__int64*, unsigned int*, unsigned __int8, char,
                            char, char, char);
__int64 GameRoutine_1584650(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1586d80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _DWORD, _BYTE, _BYTE);
__int64 GameRoutine_1586d80_alt1(__int64, _DWORD*, __int64, __int64, __int64,
                                 __int64, __int64, __int64, char, __int64,
                                 char) __asm__("GameRoutine_1586d80");
__int64 GameRoutine_1587220(__int64*, __int64, int, int, int, int, int, char,
                            char);
__int64 GameRoutine_1587520(__int64*, unsigned int, unsigned int, unsigned int,
                            unsigned int, char);
__int64 GameRoutine_158a7c0(_QWORD);
__int64 GameRoutine_1593d90(__int64*, __int64);
__int64 GameRoutine_1595ff0(__int64 result);
__int64 GameRoutine_159a340(__int64, __int64, __int64*, int, unsigned int*,
                            char);
__int64 GameRoutine_15a1190(__int64*, __int64*, __int64*, _QWORD**);
__int64 GameRoutine_15a13c0(__int64*, __int64*, __int64*, __int64*, __int64**);
__int64 GameRoutine_15a1540(__int64*, __int64*, __int64*, __int64*, __int64*,
                            __int64**);
__int64 GameRoutine_15a3d30(__int64*, __int64*, __int64*, __int64**);
__int64 GameRoutine_15a3f60(__int64*, __int64*, __int64*, __int64*, __int64**);
__int64 GameRoutine_15a40e0(__int64*, __int64*, __int64*, __int64*, __int64*,
                            __int64**);
__int64 GameRoutine_15a4580(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15a71f0(__int64, __int64*, _QWORD*, int*, __int64, int*);
__int64 GameRoutine_15b5f20(__int64);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1842580(__int64, unsigned int, __int64);
__int64 GameRoutine_189d120(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_6c3980(_QWORD, _QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_842b40(_QWORD, _QWORD);
__int64 GameRoutine_90c930(_QWORD);
__int64 GameRoutine_90dc20(void);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_957180(_QWORD);
__int64 GameRoutine_95f500(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_96de20(void);
__int64 GameRoutine_ae0560();
__int64 GameRoutine_ffc660(unsigned int, char*);
__int64 GameRoutine_ffccc0(int, __int64);
__int64 JobIcon_19a8c50(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830_alt1(_QWORD,
                                    _QWORD) __asm__("LayoutAccessor_155e830");
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0_alt1(__int64 result,
                                    __int64) __asm__("LayoutAccessor_1562cf0");
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_136afb0(_QWORD, _QWORD);
__int64 Pane_58f8a0(void);
__int64 Pane_58f8a0_alt1(_QWORD, _QWORD, _QWORD) __asm__("Pane_58f8a0");
__int64 StatusLV_18a2d70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 StatusLV_18a2e20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 StatusLV_18a3070(_QWORD, _QWORD, _QWORD);
__int64 StatusLV_18a30a0(_QWORD, _QWORD);
__int64 StatusLV_18a3250(_QWORD, _QWORD, _QWORD);
__int64 UnitName_19ab4a0(_QWORD, _QWORD);
__int64 UnitUtil_1212520(_QWORD);
__int64 Util_15792c0(__int64*, unsigned __int16*, char, unsigned __int8,
                     __int64, __int64, __int64, int);
__int64 Util_157e3a0(__int64*, unsigned int*, unsigned int, __int64);
__int64 Util_1580a10(_QWORD, _QWORD);
__int64 Util_1580a10_alt1(__int64 result,
                          unsigned __int8) __asm__("Util_1580a10");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_6c51e0(_QWORD);
__int64 game_6c6ec0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetSkillInfo(_DWORD*, __int64);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 game_HashString32(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_TransporterConst_List_Impl_EachData(_QWORD, _QWORD, _QWORD);
__int64 game_UnitSkillList_GetRangeAddImpl(_QWORD, _QWORD);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 game_Unit_GetAttack(__int64, char, int, int, char);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_GetJob_alt1(__int64) __asm__("game_Unit_GetJob");
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParamLimit(_QWORD, _QWORD);
__int64 game_Unit_Unknown6c8630(_QWORD);
__int64 game_gameui_15d2910(_QWORD, _QWORD);
__int64
game_gameui_15d2910_alt1(__int64,
                         unsigned __int16*) __asm__("game_gameui_15d2910");
__int64 game_gameui_anonymous_15d23a0(_QWORD, _QWORD);
__int64 game_gameui_anonymous_15d2480(_QWORD, _QWORD);
__int64 game_map_BattleUtil_GetHealPower(__int64 result, __int64,
                                         unsigned __int16*, _DWORD*, __int64,
                                         __int64);
__int64 game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindAlignment_alt1(_QWORD, _QWORD) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_GetPartsLayout(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD, long double);
__int64 ui_LayoutAccessor_Setup_155dda0_alt1(_QWORD, _QWORD) __asm__(
    "ui_LayoutAccessor_Setup_155dda0");
__n128 GameRoutine_15940f0(__int64, unsigned int, unsigned int);
__n128 GameRoutine_174d580(__int64, __int64, __int64, __n128 result);
__n128 Util_1580bf0_alt1(__int64*, __int64, unsigned int, char, char, char,
                         char, char, __n128 result) __asm__("Util_1580bf0");
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
__n128 ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
bool GameRoutine_15a1740(__int64*, __int64*, __int64**);
bool GameRoutine_15a42e0(__int64*, __int64*, __int64**);
bool game_HasActiveSkill_843420_alt1(_DWORD*, __int64) __asm__(
    "game_HasActiveSkill_843420");
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _BYTE GameData_1be04b8[10];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c8a8;
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN GameData_1ab3ea6;
extern _UNKNOWN GameData_1ac6c8b;
extern _UNKNOWN GameData_21c6868;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1f990c8[])();
extern __int64 (*GameData_1fa9430[])();
extern __int64 (*GameData_204d3f8[])();
extern __int64 (*GameData_204e098[])();
extern __int64 (*GameData_204e118[])();
extern __int64 (*GameData_204e818[])();
extern __int64 (*GameData_204e898[])();
extern __int64 (*GameData_204e998[])();
extern __int64 (*GameData_204eca8[])();
extern __int64 (*anonymous_ProcTransitionAnim_vtable[])();
extern __int64 (*game_UnitEquipScope_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212c950;
extern __int64* GameData_212ccd0[45];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d7f0[5];
extern __int64* GameData_212ddb8[4];
extern __int64* GameData_212de48[5];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* game_g_empty_item_ptr;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_212d690;
extern __int64 GameData_2131978[6];
extern __int64 GameData_21759e0;
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
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca240;
extern __int64 GameData_21ca248;
extern __int64 GameData_21ca310;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 GameData_2229a48;
extern __int64 GameData_2229a58;
extern __int64 GameData_2259348;
extern __int64 GameData_2259350;
extern __int64 as_g_base_frame_counter;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_gameui_MenuAnimator_instance_;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern float GameData_2259360[2];
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_21d992c;
extern int GameData_21d9948;
extern int game_g_shared_system_skills;
float LayoutAccessor_15637c0(__int64*, __int64, char);
float LayoutAccessor_15638b0(__int64*, char*, char);
float fmodf(float, float);
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
void GameRoutine_156c910(__int64, __int64, int, ...);
void GameRoutine_1585290(_QWORD*, __int64, __int64);
void GameRoutine_15a70a0(__int64, __int64, __int64);
void GameSideStoryData_12b5380(__int64, __int64*);
void LayoutAccessor_155e830(__int64*, char);
void LayoutAccessor_1562680(__int64*, __int64, float);
void LayoutAccessor_1563030(__int64*, __int64, char);
void LayoutAccessor_15636c0(__int64*, __int64, char, float);
void __attribute__((noreturn)) GameRoutine_15a7080();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
void game_gameui_159aff0_alt1(__int64*, __int64, __int64, __int64,
                              __int64) __asm__("game_gameui_159aff0");
void game_gameui_1569ce0(__int64 a1);
__int64 game_gameui_1584200_alt1(_QWORD* a1,
                                 __int64 a2) __asm__("game_gameui_1584200");
__int64 game_gameui_1589ce0(__int64 result, __int64 a2, __int64 a3, char a4,
                            char a5, unsigned int a6);
__int64 game_gameui_158b720(__int64 a1, _QWORD* a2, _QWORD* a3);
unsigned __int16* game_gameui_158d340(unsigned __int16* result);
__int64 game_gameui_158d440(__int64 result, __int64* a2, __int64 a3, char a4);
__n128 game_gameui_158dbc0(__int64 a1, _WORD* a2, __int64 a3, char a4);
__int64 game_gameui_158df80_alt1(__int64* a1, unsigned __int16* a2,
                                 unsigned __int16* a3,
                                 __int64 a4) __asm__("game_gameui_158df80");
__n128 game_gameui_1590740(__int64* a1, unsigned int a2, unsigned int a3);
__n128 game_gameui_1590950_alt1(__int64* a1, unsigned int a2,
                                unsigned int a3) __asm__("game_gameui_1590950");
bool game_gameui_1591680();
__int64 game_gameui_1592340(__int64 result, __int64 a2, int a3);
__n128 game_gameui_1593c60(__int64* a1, int a2);
__int64 game_gameui_1594bd0(__int64 a1, unsigned __int16* a2, char a3);
__attribute__((swiftcall)) void
game_gameui_1594d10(PSEUDO_X8 x8_, _WORD* result, int a2, __int64 a3);
void game_gameui_1596b00(__int64 a1);
__n128 game_gameui_15970e0(__int64 a1, unsigned int a2, char* a3, __int64 a4,
                           char a5);
__n128 game_gameui_1597c00(__int64* a1, char a2);
__int64 game_gameui_15999a0(__int64* a1, int a2, int a3, __int64** a4);
__n128 game_gameui_159a5c0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, __int64 a8);
void game_gameui_159aff0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                         unsigned int* a5);
void game_gameui_159b930(__int64* a1, unsigned int a2);
__int64 game_gameui_15a0300(__int64 result, __int64* a2, __int64** a3,
                            __int64 a4, char a5);
__int64 game_gameui_15a2ea0(__int64 result, __int64* a2, __int64** a3,
                            __int64 a4, char a5);
__attribute__((swiftcall)) void
game_gameui_15a4990(PSEUDO_X8 x8_, __int64 result, unsigned int* a2);
__int64*
game_gameui_15acda0_alt1(__int64 a1,
                         unsigned __int8* a2) __asm__("game_gameui_15acda0");
__attribute__((swiftcall)) void
game_gameui_15ad0c0_alt3(PSEUDO_X8 x8_, __int64* a1,
                         _QWORD* a2) __asm__("game_gameui_15ad0c0");
void game_gameui_15ad3e0(__int64 a1, unsigned __int8* a2);
__int64 game_gameui_15b0290_alt1(__int64 a1, int* a2,
                                 _DWORD* a3) __asm__("game_gameui_15b0290");
__int64 game_gameui_15b05c0(__int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void
game_gameui_15b4800(PSEUDO_X8 x8_, __int64 result, unsigned int* a2);
__attribute__((swiftcall)) void
game_gameui_15b4fa0(PSEUDO_X8 x8_, __int64 unused_int0, int* a1);
__int64
game_gameui_15d2a40_alt1(__int64 a1,
                         unsigned __int16* a2) __asm__("game_gameui_15d2a40");
_QWORD* game_gameui_15e51e0(_QWORD* result);
_QWORD* game_gameui_15e53d0(_QWORD* result);
_QWORD* game_TransporterConst_List_Impl_EachData_alt1(
    _QWORD* result, __int64,
    __int64) __asm__("game_TransporterConst_List_Impl_EachData");
_QWORD* ui_LayoutAccessor_Setup_155dda0_alt2(_QWORD*, _QWORD*) __asm__(
    "ui_LayoutAccessor_Setup_155dda0");
__attribute__((swiftcall)) void
GameRoutine_15ab7b0_alt1(PSEUDO_X8, __int64,
                         __int64) __asm__("GameRoutine_15ab7b0");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void
Layout_1363f00_alt1(PSEUDO_X8, __int64, __int64) __asm__("Layout_1363f00");
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1586d80(__int64*, _DWORD*, _DWORD*, __int64, char, char, char,
                       __int64, char, char, char);
__int64 GameRoutine_15a4580_alt1(__int64 result, __int64, unsigned __int16*,
                                 char) __asm__("GameRoutine_15a4580");
__int64 GameRoutine_174d580_alt1(__int64, const char*, __int64,
                                 float) __asm__("GameRoutine_174d580");
__int64 GameRoutine_6c6da0_alt1(__int64) __asm__("GameRoutine_6c6da0");
__int64 GameRoutine_90c930_alt1(__int64) __asm__("GameRoutine_90c930");
__int64
GameRoutine_90dc20_alt1(__int64,
                        unsigned __int64*) __asm__("GameRoutine_90dc20");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 GameRoutine_957180_alt1(__int64) __asm__("GameRoutine_957180");
__int64 LayoutAccessor_155e830_alt2(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64
LayoutAccessor_1562cf0_alt2(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 LayoutAccessor_1563030_alt1(__int64 result, __int64,
                                    char) __asm__("LayoutAccessor_1563030");
__int64 LayoutAccessor_15636c0_alt1(__int64 result, __int64, char,
                                    float) __asm__("LayoutAccessor_15636c0");
__int64 Manager_136a920_alt1(__int64, __int64, int, unsigned int,
                             const char*) __asm__("Manager_136a920");
__int64 Pane_58f8a0_alt2(__int64) __asm__("Pane_58f8a0");
__int64 StatusLV_18a3070_alt1(__int64 result, char,
                              char) __asm__("StatusLV_18a3070");
__int64 StatusLV_18a3250_alt1(__int64 result, __int64,
                              int) __asm__("StatusLV_18a3250");
__int64 UnitUtil_1212520_alt1(unsigned __int16*) __asm__("UnitUtil_1212520");
__int64 game_6c51e0_alt1(__int64 result) __asm__("game_6c51e0");
__int64 game_6c6ec0_alt1(__int64) __asm__("game_6c6ec0");
__int64 game_Unit_GetParamLimit_alt1(_QWORD*, unsigned __int8*) __asm__(
    "game_Unit_GetParamLimit");
__int64 game_gameui_anonymous_15d23a0_alt1(__int64, __int64) __asm__(
    "game_gameui_anonymous_15d23a0");
__int64 game_gameui_anonymous_15d2480_alt1(__int64, __int64) __asm__(
    "game_gameui_anonymous_15d2480");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_GetPartsLayout_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_GetPartsLayout");
__int64 ui_LayoutAccessor_SetPriority_alt1(__int64 result, int) __asm__(
    "ui_LayoutAccessor_SetPriority");
char* game_util_Format_alt2(const char*, ...) __asm__("game_util_Format");
extern unsigned __int8 GameData_1be04b8_alt1[10] __asm__("GameData_1be04b8");
float LayoutAccessor_15638b0_alt1(__int64*, const char*,
                                  char) __asm__("LayoutAccessor_15638b0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_156c910_alt2(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
void GameRoutine_157a1e0_alt1(__int64*, unsigned int*, unsigned __int8, char,
                              char, char, char) __asm__("GameRoutine_157a1e0");
void GameRoutine_1587220_alt1(__int64, __int64, int, int, int, int, int, char,
                              char) __asm__("GameRoutine_1587220");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 game_gameui_1584200(__int64 a1, __int64 a2);
void game_gameui_158df80(__int64* a1, unsigned __int16* a2,
                         unsigned __int16* a3, __int64 a4);
__int64 game_gameui_1590950(__int64* a1, int a2, int a3);
__int64 game_gameui_15acda0(__int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void game_gameui_15ad0c0(PSEUDO_X8 x8_, __int64* a1,
                                                    __int64* a2);
void game_gameui_15b0290(__int64 a1, int* a2, _DWORD* a3);
__int64 game_gameui_15d2a40(__int64* a1, unsigned __int16* a2);

void game_gameui_1569ce0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  long double v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  long double v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  char* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  char v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  struct {
    unsigned __int64 v89;
    __int64 v90;
  } v89_;
  struct {
    _QWORD v91[2];
    int v92;
    int v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    int v97;
    char gap68_[4];
    __int64 v98;
    __int64 v99;
    __int64 v100;
  } v91_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v61 = COERCE_AS(__typeof__(v61),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v63 = COERCE_AS(__typeof__(v63),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v65 = COERCE_AS(__typeof__(v65),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v70 = COERCE_AS(__typeof__(v70),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v71 = COERCE_AS(__typeof__(v71),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v75 = COERCE_AS(__typeof__(v75),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v76 = COERCE_AS(__typeof__(v76),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v79 = COERCE_AS(__typeof__(v79),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (game_gameui_MenuAnimator_instance_ == 0) {
    v2 = fw_memory_g_heap_manager_ptr;
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        2608, 16, 0),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v70 = COERCE_AS(__typeof__(v70),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v75 = COERCE_AS(__typeof__(v75),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
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
    game_ProcInst_Register(v3),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    *(_QWORD*)(v3 + 200) = 0;
    game_gameui_MenuAnimator_instance_ = v3;
    *(_QWORD*)(v3 + 152) = 0;
    *(_QWORD*)(v3 + 160) = 0;
    *(_QWORD*)(v3 + 320) = 0;
    *(_QWORD*)(v3 + 328) = v3 + 336;
    *(_QWORD*)v3 = anonymous_ProcTransitionAnim_vtable;
    *(_QWORD*)(v3 + 192) = v3 + 200;
    *(_QWORD*)(v3 + 176) = 0;
    *(_QWORD*)(v3 + 184) = 0;
    *(_QWORD*)(v3 + 168) = 0;
    *(_QWORD*)(v3 + 560) = v3 + 568;
    *(_DWORD*)(v3 + 248) = 1065353216;
    *(_DWORD*)(v3 + 280) = 2;
    *(_DWORD*)(v3 + 384) = 1065353216;
    *(_DWORD*)(v3 + 416) = 1065353216;
    *(_DWORD*)(v3 + 512) = 2;
    *(_DWORD*)(v3 + 616) = 1065353216;
    *(_DWORD*)(v3 + 648) = 1065353216;
    *(_DWORD*)(v3 + 744) = 2;
    *(_DWORD*)(v3 + 848) = 1065353216;
    *(_DWORD*)(v3 + 880) = 1065353216;
    *(_QWORD*)(v3 + 792) = v3 + 800;
    *(_DWORD*)(v3 + 976) = 2;
    *(_DWORD*)(v3 + 1080) = 1065353216;
    *(_DWORD*)(v3 + 1112) = 1065353216;
    *(_DWORD*)(v3 + 1208) = 2;
    *(_DWORD*)(v3 + 1312) = 1065353216;
    *(_DWORD*)(v3 + 1344) = 1065353216;
    *(_DWORD*)(v3 + 1440) = 2;
    *(_DWORD*)(v3 + 1544) = 1065353216;
    *(_DWORD*)(v3 + 1576) = 1065353216;
    *(_DWORD*)(v3 + 1672) = 2;
    *(_QWORD*)(v3 + 1024) = v3 + 1032;
    *(_DWORD*)(v3 + 1776) = 1065353216;
    *(_DWORD*)(v3 + 1808) = 1065353216;
    *(_DWORD*)(v3 + 1904) = 2;
    *(_DWORD*)(v3 + 2008) = 1065353216;
    *(_DWORD*)(v3 + 2040) = 1065353216;
    *(_DWORD*)(v3 + 2136) = 2;
    *(_DWORD*)(v3 + 2240) = 1065353216;
    *(_DWORD*)(v3 + 2272) = 1065353216;
    *(_DWORD*)(v3 + 2368) = 2;
    *(_QWORD*)(v3 + 1256) = v3 + 1264;
    *(_DWORD*)(v3 + 2472) = 1065353216;
    *(_DWORD*)(v3 + 2504) = 1065353216;
    *(_QWORD*)(v3 + 2416) = v3 + 2424;
    v91_.v91[0] = 0x800000018LL;
    v91_.v91[1] = 0x500000050LL;
    v91_.v93 = 0;
    *(_QWORD*)(v3 + 1488) = v3 + 1496;
    v91_.v92 = 0x100000;
    *(_QWORD*)(v3 + 208) = 0;
    *(_QWORD*)(v3 + 216) = 0;
    *(_QWORD*)(v3 + 224) = 0;
    *(_QWORD*)(v3 + 232) = 0;
    *(_QWORD*)(v3 + 240) = 0;
    *(_QWORD*)(v3 + 256) = 0;
    *(_QWORD*)(v3 + 264) = 0;
    *(_QWORD*)(v3 + 272) = -1;
    *(_QWORD*)(v3 + 336) = 0;
    *(_QWORD*)(v3 + 344) = 0;
    *(_QWORD*)(v3 + 288) = 0;
    *(_QWORD*)(v3 + 296) = 0;
    *(_QWORD*)(v3 + 304) = 0;
    *(_QWORD*)(v3 + 312) = 0;
    *(_QWORD*)(v3 + 1720) = v3 + 1728;
    *(_QWORD*)(v3 + 352) = 0;
    *(_QWORD*)(v3 + 360) = 0;
    *(_QWORD*)(v3 + 368) = 0;
    *(_QWORD*)(v3 + 376) = 0;
    *(_QWORD*)(v3 + 392) = 0;
    *(_QWORD*)(v3 + 400) = 0;
    *(_QWORD*)(v3 + 408) = 0;
    *(_WORD*)(v3 + 424) = 0;
    *(_WORD*)(v3 + 448) = 0;
    *(_BYTE*)(v3 + 472) = 0;
    *(_QWORD*)(v3 + 480) = 0;
    *(_QWORD*)(v3 + 488) = 0;
    *(_QWORD*)(v3 + 496) = 0;
    *(_QWORD*)(v3 + 504) = -1;
    *(_QWORD*)(v3 + 568) = 0;
    *(_QWORD*)(v3 + 1952) = v3 + 1960;
    *(_QWORD*)(v3 + 576) = 0;
    *(_QWORD*)(v3 + 552) = 0;
    *(_QWORD*)(v3 + 544) = 0;
    *(_QWORD*)(v3 + 536) = 0;
    *(_QWORD*)(v3 + 528) = 0;
    *(_QWORD*)(v3 + 520) = 0;
    *(_QWORD*)(v3 + 608) = 0;
    *(_QWORD*)(v3 + 600) = 0;
    *(_QWORD*)(v3 + 592) = 0;
    *(_QWORD*)(v3 + 584) = 0;
    *(_QWORD*)(v3 + 640) = 0;
    *(_QWORD*)(v3 + 632) = 0;
    *(_QWORD*)(v3 + 624) = 0;
    *(_WORD*)(v3 + 656) = 0;
    *(_WORD*)(v3 + 680) = 0;
    *(_BYTE*)(v3 + 704) = 0;
    *(_QWORD*)(v3 + 728) = 0;
    *(_QWORD*)(v3 + 720) = 0;
    *(_QWORD*)(v3 + 712) = 0;
    *(_QWORD*)(v3 + 736) = -1;
    *(_QWORD*)(v3 + 808) = 0;
    *(_QWORD*)(v3 + 800) = 0;
    *(_QWORD*)(v3 + 784) = 0;
    *(_QWORD*)(v3 + 776) = 0;
    *(_QWORD*)(v3 + 768) = 0;
    *(_QWORD*)(v3 + 760) = 0;
    *(_QWORD*)(v3 + 752) = 0;
    *(_QWORD*)(v3 + 840) = 0;
    *(_QWORD*)(v3 + 832) = 0;
    *(_QWORD*)(v3 + 824) = 0;
    *(_QWORD*)(v3 + 816) = 0;
    *(_QWORD*)(v3 + 872) = 0;
    *(_QWORD*)(v3 + 864) = 0;
    *(_QWORD*)(v3 + 856) = 0;
    *(_WORD*)(v3 + 888) = 0;
    *(_WORD*)(v3 + 912) = 0;
    *(_BYTE*)(v3 + 936) = 0;
    *(_QWORD*)(v3 + 960) = 0;
    *(_QWORD*)(v3 + 952) = 0;
    *(_QWORD*)(v3 + 944) = 0;
    *(_QWORD*)(v3 + 968) = -1;
    *(_QWORD*)(v3 + 1040) = 0;
    *(_QWORD*)(v3 + 1032) = 0;
    *(_QWORD*)(v3 + 1016) = 0;
    *(_QWORD*)(v3 + 1008) = 0;
    *(_QWORD*)(v3 + 1000) = 0;
    *(_QWORD*)(v3 + 992) = 0;
    *(_QWORD*)(v3 + 984) = 0;
    *(_QWORD*)(v3 + 1072) = 0;
    *(_QWORD*)(v3 + 1064) = 0;
    *(_QWORD*)(v3 + 1056) = 0;
    *(_QWORD*)(v3 + 1048) = 0;
    *(_QWORD*)(v3 + 1104) = 0;
    *(_QWORD*)(v3 + 1096) = 0;
    *(_QWORD*)(v3 + 1088) = 0;
    *(_WORD*)(v3 + 1120) = 0;
    *(_WORD*)(v3 + 1144) = 0;
    *(_BYTE*)(v3 + 1168) = 0;
    *(_QWORD*)(v3 + 1192) = 0;
    *(_QWORD*)(v3 + 1184) = 0;
    *(_QWORD*)(v3 + 1176) = 0;
    *(_QWORD*)(v3 + 1200) = -1;
    *(_QWORD*)(v3 + 1272) = 0;
    *(_QWORD*)(v3 + 1264) = 0;
    *(_QWORD*)(v3 + 1248) = 0;
    *(_QWORD*)(v3 + 1240) = 0;
    *(_QWORD*)(v3 + 1232) = 0;
    *(_QWORD*)(v3 + 1224) = 0;
    *(_QWORD*)(v3 + 1216) = 0;
    *(_QWORD*)(v3 + 1304) = 0;
    *(_QWORD*)(v3 + 1296) = 0;
    *(_QWORD*)(v3 + 1288) = 0;
    *(_QWORD*)(v3 + 1280) = 0;
    *(_QWORD*)(v3 + 1336) = 0;
    *(_QWORD*)(v3 + 1328) = 0;
    *(_QWORD*)(v3 + 1320) = 0;
    *(_WORD*)(v3 + 1352) = 0;
    *(_WORD*)(v3 + 1376) = 0;
    *(_BYTE*)(v3 + 1400) = 0;
    *(_QWORD*)(v3 + 1424) = 0;
    *(_QWORD*)(v3 + 1416) = 0;
    *(_QWORD*)(v3 + 1408) = 0;
    *(_QWORD*)(v3 + 1432) = -1;
    *(_QWORD*)(v3 + 1504) = 0;
    *(_QWORD*)(v3 + 1496) = 0;
    *(_QWORD*)(v3 + 1480) = 0;
    *(_QWORD*)(v3 + 1472) = 0;
    *(_QWORD*)(v3 + 1464) = 0;
    *(_QWORD*)(v3 + 1456) = 0;
    *(_QWORD*)(v3 + 1448) = 0;
    *(_QWORD*)(v3 + 1536) = 0;
    *(_QWORD*)(v3 + 1528) = 0;
    *(_QWORD*)(v3 + 1520) = 0;
    *(_QWORD*)(v3 + 1512) = 0;
    *(_QWORD*)(v3 + 1568) = 0;
    *(_QWORD*)(v3 + 1560) = 0;
    *(_QWORD*)(v3 + 1552) = 0;
    *(_WORD*)(v3 + 1584) = 0;
    *(_WORD*)(v3 + 1608) = 0;
    *(_BYTE*)(v3 + 1632) = 0;
    *(_QWORD*)(v3 + 1656) = 0;
    *(_QWORD*)(v3 + 1648) = 0;
    *(_QWORD*)(v3 + 1640) = 0;
    *(_QWORD*)(v3 + 1664) = -1;
    *(_QWORD*)(v3 + 1736) = 0;
    *(_QWORD*)(v3 + 1728) = 0;
    *(_QWORD*)(v3 + 1712) = 0;
    *(_QWORD*)(v3 + 1704) = 0;
    *(_QWORD*)(v3 + 1696) = 0;
    *(_QWORD*)(v3 + 1688) = 0;
    *(_QWORD*)(v3 + 1680) = 0;
    *(_QWORD*)(v3 + 1768) = 0;
    *(_QWORD*)(v3 + 1760) = 0;
    *(_QWORD*)(v3 + 1752) = 0;
    *(_QWORD*)(v3 + 1744) = 0;
    *(_QWORD*)(v3 + 1800) = 0;
    *(_QWORD*)(v3 + 1792) = 0;
    *(_QWORD*)(v3 + 1784) = 0;
    *(_WORD*)(v3 + 1816) = 0;
    *(_WORD*)(v3 + 1840) = 0;
    *(_BYTE*)(v3 + 1864) = 0;
    *(_QWORD*)(v3 + 1888) = 0;
    *(_QWORD*)(v3 + 1880) = 0;
    *(_QWORD*)(v3 + 1872) = 0;
    *(_QWORD*)(v3 + 1896) = -1;
    *(_QWORD*)(v3 + 1968) = 0;
    *(_QWORD*)(v3 + 1960) = 0;
    *(_QWORD*)(v3 + 1944) = 0;
    *(_QWORD*)(v3 + 1936) = 0;
    *(_QWORD*)(v3 + 1928) = 0;
    *(_QWORD*)(v3 + 1920) = 0;
    *(_QWORD*)(v3 + 1912) = 0;
    *(_QWORD*)(v3 + 2000) = 0;
    *(_QWORD*)(v3 + 1992) = 0;
    *(_QWORD*)(v3 + 1984) = 0;
    *(_QWORD*)(v3 + 1976) = 0;
    *(_QWORD*)(v3 + 2032) = 0;
    *(_QWORD*)(v3 + 2024) = 0;
    *(_QWORD*)(v3 + 2016) = 0;
    *(_WORD*)(v3 + 2048) = 0;
    *(_WORD*)(v3 + 2072) = 0;
    *(_BYTE*)(v3 + 2096) = 0;
    *(_QWORD*)(v3 + 2120) = 0;
    *(_QWORD*)(v3 + 2112) = 0;
    *(_QWORD*)(v3 + 2104) = 0;
    *(_QWORD*)(v3 + 2128) = -1;
    *(_QWORD*)(v3 + 2200) = 0;
    *(_QWORD*)(v3 + 2192) = 0;
    *(_QWORD*)(v3 + 2176) = 0;
    *(_QWORD*)(v3 + 2168) = 0;
    *(_QWORD*)(v3 + 2160) = 0;
    *(_QWORD*)(v3 + 2152) = 0;
    *(_QWORD*)(v3 + 2144) = 0;
    *(_QWORD*)(v3 + 2184) = v3 + 2192;
    *(_QWORD*)(v3 + 2232) = 0;
    *(_QWORD*)(v3 + 2224) = 0;
    *(_QWORD*)(v3 + 2216) = 0;
    *(_QWORD*)(v3 + 2208) = 0;
    *(_QWORD*)(v3 + 2264) = 0;
    *(_QWORD*)(v3 + 2256) = 0;
    *(_QWORD*)(v3 + 2248) = 0;
    *(_WORD*)(v3 + 2280) = 0;
    *(_WORD*)(v3 + 2304) = 0;
    *(_BYTE*)(v3 + 2328) = 0;
    *(_QWORD*)(v3 + 2352) = 0;
    *(_QWORD*)(v3 + 2344) = 0;
    *(_QWORD*)(v3 + 2336) = 0;
    *(_QWORD*)(v3 + 2360) = -1;
    *(_QWORD*)(v3 + 2432) = 0;
    *(_QWORD*)(v3 + 2424) = 0;
    *(_QWORD*)(v3 + 2408) = 0;
    *(_QWORD*)(v3 + 2400) = 0;
    *(_QWORD*)(v3 + 2392) = 0;
    *(_QWORD*)(v3 + 2384) = 0;
    *(_QWORD*)(v3 + 2376) = 0;
    *(_QWORD*)(v3 + 2464) = 0;
    *(_QWORD*)(v3 + 2456) = 0;
    *(_QWORD*)(v3 + 2448) = 0;
    *(_QWORD*)(v3 + 2440) = 0;
    *(_QWORD*)(v3 + 2496) = 0;
    *(_QWORD*)(v3 + 2488) = 0;
    *(_QWORD*)(v3 + 2480) = 0;
    *(_WORD*)(v3 + 2512) = 0;
    *(_WORD*)(v3 + 2536) = 0;
    *(_BYTE*)(v3 + 2560) = 0;
    *(_BYTE*)(v3 + 2600) = 0;
    *(_QWORD*)(v3 + 2592) = 0;
    *(_QWORD*)(v3 + 2584) = 0;
    *(_QWORD*)(v3 + 2576) = 0;
    *(_QWORD*)(v3 + 2568) = 0;
    v91_.v98 = 0;
    v91_.v99 = 0;
    v91_.v100 = 0;
    v91_.v94 = 0;
    v91_.v95 = 0;
    v91_.v96 = 0;
    v91_.v97 = 0;
    GameRoutine_1366bd0((void*)(&v89_.v89), (__int64)"Layout/Common.arc",
                        (__int64)"Common_AnimInOut", (unsigned int*)v91_.v91),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v6 = v89_.v89;
    v7 = v89_.v90;
    v8 = *(_QWORD*)(v3 + 160);
    v89_.v89 = 0;
    v89_.v90 = 0;
    *(_QWORD*)(v3 + 152) = v6;
    *(_QWORD*)(v3 + 160) = v7;
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v70 = COERCE_AS(__typeof__(v70),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v73 = COERCE_AS(__typeof__(v73),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v75 = COERCE_AS(__typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *(__n128*)&v5 = std___1___shared_weak_count___release_weak(),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v70 = COERCE_AS(__typeof__(v70),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v75 = COERCE_AS(__typeof__(v75),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v76 = COERCE_AS(__typeof__(v76),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v9 = v89_.v90;
    if (v89_.v90 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v89_.v90 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(v9, v5),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v70 = COERCE_AS(__typeof__(v70),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v73 = COERCE_AS(__typeof__(v73),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v75 = COERCE_AS(__typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      std___1___shared_weak_count___release_weak(),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v70 = COERCE_AS(__typeof__(v70),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v73 = COERCE_AS(__typeof__(v73),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v75 = COERCE_AS(__typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v10 = *(_QWORD*)(v3 + 160);
    v89_.v89 = *(_QWORD*)(v3 + 152);
    v89_.v90 = v10;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      *(__n128*)&v11 =
          ui_LayoutAccessor_Setup_155dda0((_QWORD*)(v3 + 168), &v89_.v89),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v70 = COERCE_AS(__typeof__(v70),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v75 = COERCE_AS(__typeof__(v75),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v76 = COERCE_AS(__typeof__(v76),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v10 + 16LL))(v10, v11),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v38 = COERCE_AS(__typeof__(v38),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v42 = COERCE_AS(__typeof__(v42),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v45 = COERCE_AS(__typeof__(v45),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v49 = COERCE_AS(__typeof__(v49),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v52 = COERCE_AS(__typeof__(v52),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v57 = COERCE_AS(__typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v64 = COERCE_AS(__typeof__(v64),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v70 = COERCE_AS(__typeof__(v70),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v72 = COERCE_AS(__typeof__(v72),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v73 = COERCE_AS(__typeof__(v73),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v75 = COERCE_AS(__typeof__(v75),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v76 = COERCE_AS(__typeof__(v76),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v77 = COERCE_AS(__typeof__(v77),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        std___1___shared_weak_count___release_weak(),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v38 = COERCE_AS(__typeof__(v38),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v42 = COERCE_AS(__typeof__(v42),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v45 = COERCE_AS(__typeof__(v45),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v49 = COERCE_AS(__typeof__(v49),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v52 = COERCE_AS(__typeof__(v52),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v57 = COERCE_AS(__typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v64 = COERCE_AS(__typeof__(v64),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v70 = COERCE_AS(__typeof__(v70),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v72 = COERCE_AS(__typeof__(v72),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v73 = COERCE_AS(__typeof__(v73),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v75 = COERCE_AS(__typeof__(v75),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v76 = COERCE_AS(__typeof__(v76),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v77 = COERCE_AS(__typeof__(v77),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
    else {
      ui_LayoutAccessor_Setup_155dda0((_QWORD*)(v3 + 168), &v89_.v89),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v70 = COERCE_AS(__typeof__(v70),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v73 = COERCE_AS(__typeof__(v73),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v75 = COERCE_AS(__typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    LayoutAccessor_155e830((__int64*)(v3 + 168), 1),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v18 = game_util_Format((__int64)"L_Anim_%02d", 0, v12, v13, v14, v15, v16,
                           v17, v89_.v89),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v70 = COERCE_AS(__typeof__(v70),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v75 = COERCE_AS(__typeof__(v75),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    LayoutAccessor_1560520((__int64*)(v3 + 168), (__int64)"L_Anim", 0, v18),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v25 = game_util_Format((__int64)"L_Anim_%02d", 1, v19, v20, v21, v22, v23,
                           v24, v89_.v89),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v70 = COERCE_AS(__typeof__(v70),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v75 = COERCE_AS(__typeof__(v75),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    LayoutAccessor_1560520((__int64*)(v3 + 168), (__int64)"L_Anim", 0, v25),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v32 = game_util_Format((__int64)"L_Anim_%02d", 2, v26, v27, v28, v29, v30,
                           v31, v89_.v89),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v70 = COERCE_AS(__typeof__(v70),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v75 = COERCE_AS(__typeof__(v75),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    LayoutAccessor_1560520((__int64*)(v3 + 168), (__int64)"L_Anim", 0, v32),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v39 = game_util_Format((__int64)"L_Anim_%02d", 3, v33, v34, v35, v36, v37,
                           v38, v89_.v89),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v70 = COERCE_AS(__typeof__(v70),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v75 = COERCE_AS(__typeof__(v75),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    LayoutAccessor_1560520((__int64*)(v3 + 168), (__int64)"L_Anim", 0, v39),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v46 = game_util_Format((__int64)"L_Anim_%02d", 4, v40, v41, v42, v43, v44,
                           v45, v89_.v89),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v70 = COERCE_AS(__typeof__(v70),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v75 = COERCE_AS(__typeof__(v75),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    LayoutAccessor_1560520((__int64*)(v3 + 168), (__int64)"L_Anim", 0, v46),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v53 = game_util_Format((__int64)"L_Anim_%02d", 5, v47, v48, v49, v50, v51,
                           v52, v89_.v89),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v70 = COERCE_AS(__typeof__(v70),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v75 = COERCE_AS(__typeof__(v75),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    LayoutAccessor_1560520((__int64*)(v3 + 168), (__int64)"L_Anim", 0, v53),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v60 = game_util_Format((__int64)"L_Anim_%02d", 6, v54, v55, v56, v57, v58,
                           v59, v89_.v89),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v70 = COERCE_AS(__typeof__(v70),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v75 = COERCE_AS(__typeof__(v75),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    LayoutAccessor_1560520((__int64*)(v3 + 168), (__int64)"L_Anim", 0, v60),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v67 = game_util_Format((__int64)"L_Anim_%02d", 7, v61, v62, v63, v64, v65,
                           v66, v89_.v89),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v70 = COERCE_AS(__typeof__(v70),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v75 = COERCE_AS(__typeof__(v75),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    LayoutAccessor_1560520((__int64*)(v3 + 168), (__int64)"L_Anim", 0, v67),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v74 = game_util_Format((__int64)"L_Anim_%02d", 8, v68, v69, v70, v71, v72,
                           v73, v89_.v89),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v70 = COERCE_AS(__typeof__(v70),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v75 = COERCE_AS(__typeof__(v75),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    LayoutAccessor_1560520((__int64*)(v3 + 168), (__int64)"L_Anim", 0, v74),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v81 = game_util_Format((__int64)"L_Anim_%02d", 9, v75, v76, v77, v78, v79,
                           v80, v89_.v89),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v70 = COERCE_AS(__typeof__(v70),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v75 = COERCE_AS(__typeof__(v75),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v76 = COERCE_AS(__typeof__(v76),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    LayoutAccessor_1560520((__int64*)(v3 + 168), (__int64)"L_Anim", 0, v81),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v82 = v91_.v98;
    if (v91_.v98 != 0) {
      v83 = v91_.v99;
      if (v91_.v98 == v91_.v99) {
        goto LABEL_24;
      }
      v84 = v91_.v99;
      do {
        v85 = *(_BYTE*)(v84 - 24);
        v84 -= 24;
        if ((v85 & 1) != 0 && *(_QWORD*)(v83 - 8) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v86 = 128;
          }
          else {
            v86 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v86),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v45 = COERCE_AS(__typeof__(v45),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v47 = COERCE_AS(__typeof__(v47),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v48 = COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v73 = COERCE_AS(__typeof__(v73),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v75 = COERCE_AS(__typeof__(v75),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        v83 = v84;
      } while (v84 != v82);
      v91_.v99 = v82;
      if (v91_.v98 != 0) {
      LABEL_24:
        v87 = 128;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
          v87 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v87),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v38 = COERCE_AS(__typeof__(v38),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v42 = COERCE_AS(__typeof__(v42),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v45 = COERCE_AS(__typeof__(v45),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v49 = COERCE_AS(__typeof__(v49),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v52 = COERCE_AS(__typeof__(v52),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v57 = COERCE_AS(__typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v64 = COERCE_AS(__typeof__(v64),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v70 = COERCE_AS(__typeof__(v70),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v72 = COERCE_AS(__typeof__(v72),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v73 = COERCE_AS(__typeof__(v73),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v75 = COERCE_AS(__typeof__(v75),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v76 = COERCE_AS(__typeof__(v76),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v77 = COERCE_AS(__typeof__(v77),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
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
      __cxa_guard_release(&GameData_21c6868),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v70 = COERCE_AS(__typeof__(v70),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v73 = COERCE_AS(__typeof__(v73),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v75 = COERCE_AS(__typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if (a1 != 0) {
      v88 = *(_QWORD*)(a1 + 40);
      if (v88 != 0) {
        *(_QWORD*)(v88 + 48) = v3;
        *(_QWORD*)(v3 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v3;
      *(_QWORD*)(v3 + 24) = "ProcTransitionAnim";
      *(_QWORD*)(v3 + 32) = a1;
      *(_DWORD*)(v3 +
                 140) = game_HashString32((__int64)"ProcTransitionAnim"),
                 v12 =
                     COERCE_AS(__typeof__(v12),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                 v13 =
                     COERCE_AS(__typeof__(v13),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                 v14 =
                     COERCE_AS(__typeof__(v14),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                 v15 =
                     COERCE_AS(__typeof__(v15),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                 v16 =
                     COERCE_AS(__typeof__(v16),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                 v17 =
                     COERCE_AS(__typeof__(v17),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                 v19 =
                     COERCE_AS(__typeof__(v19),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                 v20 =
                     COERCE_AS(__typeof__(v20),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                 v21 =
                     COERCE_AS(__typeof__(v21),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                 v22 =
                     COERCE_AS(__typeof__(v22),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                 v23 =
                     COERCE_AS(__typeof__(v23),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                 v24 =
                     COERCE_AS(__typeof__(v24),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                 v26 =
                     COERCE_AS(__typeof__(v26),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                 v27 =
                     COERCE_AS(__typeof__(v27),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                 v28 =
                     COERCE_AS(__typeof__(v28),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                 v29 =
                     COERCE_AS(__typeof__(v29),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                 v30 =
                     COERCE_AS(__typeof__(v30),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                 v31 =
                     COERCE_AS(__typeof__(v31),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                 v33 =
                     COERCE_AS(__typeof__(v33),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                 v34 =
                     COERCE_AS(__typeof__(v34),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                 v35 =
                     COERCE_AS(__typeof__(v35),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                 v36 =
                     COERCE_AS(__typeof__(v36),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                 v37 =
                     COERCE_AS(__typeof__(v37),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                 v38 =
                     COERCE_AS(__typeof__(v38),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                 v40 =
                     COERCE_AS(__typeof__(v40),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                 v41 =
                     COERCE_AS(__typeof__(v41),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                 v42 =
                     COERCE_AS(__typeof__(v42),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                 v43 =
                     COERCE_AS(__typeof__(v43),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                 v44 =
                     COERCE_AS(__typeof__(v44),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                 v45 =
                     COERCE_AS(__typeof__(v45),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                 v47 =
                     COERCE_AS(__typeof__(v47),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                 v48 =
                     COERCE_AS(__typeof__(v48),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                 v49 =
                     COERCE_AS(__typeof__(v49),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                 v5 = COERCE_AS(__typeof__(v5),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                 v50 =
                     COERCE_AS(__typeof__(v50),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                 v51 =
                     COERCE_AS(__typeof__(v51),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                 v52 =
                     COERCE_AS(__typeof__(v52),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                 v54 =
                     COERCE_AS(__typeof__(v54),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                 v55 =
                     COERCE_AS(__typeof__(v55),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                 v56 =
                     COERCE_AS(__typeof__(v56),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                 v57 =
                     COERCE_AS(__typeof__(v57),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                 v58 =
                     COERCE_AS(__typeof__(v58),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                 v59 =
                     COERCE_AS(__typeof__(v59),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                 v61 =
                     COERCE_AS(__typeof__(v61),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                 v62 =
                     COERCE_AS(__typeof__(v62),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                 v63 =
                     COERCE_AS(__typeof__(v63),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                 v64 =
                     COERCE_AS(__typeof__(v64),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                 v65 =
                     COERCE_AS(__typeof__(v65),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                 v66 =
                     COERCE_AS(__typeof__(v66),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                 v68 =
                     COERCE_AS(__typeof__(v68),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                 v69 =
                     COERCE_AS(__typeof__(v69),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                 v70 =
                     COERCE_AS(__typeof__(v70),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                 v71 =
                     COERCE_AS(__typeof__(v71),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                 v72 =
                     COERCE_AS(__typeof__(v72),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                 v73 =
                     COERCE_AS(__typeof__(v73),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                 v75 =
                     COERCE_AS(__typeof__(v75),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                 v76 =
                     COERCE_AS(__typeof__(v76),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                 v77 =
                     COERCE_AS(__typeof__(v77),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                 v78 =
                     COERCE_AS(__typeof__(v78),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                 v79 =
                     COERCE_AS(__typeof__(v79),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                 v80 =
                     COERCE_AS(__typeof__(v80),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *(_QWORD*)(v3 + 64) = 0;
      *(_QWORD*)(v3 + 72) = 24;
      *(_QWORD*)(v3 + 80) = 1;
      *(_QWORD*)(v3 + 8) = &GameData_21c67a8;
      *(_QWORD*)(v3 + 16) = &GameData_21c67a8;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v70 = COERCE_AS(__typeof__(v70),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v73 = COERCE_AS(__typeof__(v73),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v75 = COERCE_AS(__typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3) & 1) != 0 &&
          (*(_WORD*)(v3 + 136) & 0x100) == 0) {
        *(_WORD*)(v3 + 136) |= 0x100u;
      }
    }
    else if ((*(_WORD*)(v3 + 136) & 1) == 0) {
      ProcInst_657a50(v3, 1),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v70 = COERCE_AS(__typeof__(v70),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v73 = COERCE_AS(__typeof__(v73),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v75 = COERCE_AS(__typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
  }
}

__int64 game_gameui_1584200(__int64 a1, __int64 a2)
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
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  const char* v35;
  int v36;
  struct {
    __int64 v37;
    __int64 v38;
  } v37_;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v6 = *(__int64**)a1;
      v7 = result;
      if (v6 == nullptr) {
      LABEL_61:
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          return std___1___shared_weak_count___release_weak_alt2(v7);
        }
        return result;
      }
      if (v6[2] == 0) {
        goto LABEL_21;
      }
      v8 = v6[1];
      if (v8 == 0) {
        goto LABEL_21;
      }
      v9 = std___1___shared_weak_count_lock_alt1(v8);
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
        std___1___shared_weak_count___release_weak_alt2(v13);
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
      LABEL_22:
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)GameData_212dfd0) != 0) {
          *GameData_212dfc8 =
              (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
          __cxa_guard_release_alt1((__int64)GameData_212dfd0);
        }
        if (v16 == 0) {
          goto LABEL_31;
        }
        v17 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        if (v17 != GameData_212dfc8) {
          do {
            v17 = (__int64*)*v17;
          } while (v17 != GameData_212dfc8 && v17 != nullptr);
          if (v17 == nullptr) {
          LABEL_31:
            v16 = 0;
          }
        }
        v19 = v6[1];
        if (v19 == 0) {
          goto LABEL_54;
        }
        v20 = std___1___shared_weak_count_lock_alt1(v19);
        if (v20 == 0) {
          goto LABEL_54;
        }
        v21 = *v6;
        v22 = v20;
        if (*v6 != 0) {
          GameRoutine_15ab7b0_alt1((void*)(&v37_.v37), *v6, v16);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
          std___1___shared_weak_count___release_weak_alt2(v22);
        }
        if (v21 == 0 || v37_.v38 == 0) {
          goto LABEL_54;
        }
        v23 = std___1___shared_weak_count_lock_alt1(v37_.v38);
        v24 = v37_.v37;
        if (v37_.v38 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v37_.v38);
        }
        if (v23 != 0 && v24 != 0) {
          v25 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v26 = game_GameModeData_instance_ + 152;
          }
          else {
            v26 = 0;
          }
          v27 = GameRoutine_90dc20_alt1(game_GameModeData_instance_ + 152,
                                        *(unsigned __int64**)(a2 + 112));
          StatusLV_18a3250_alt1(v24, v26, v27);
          v28 = *(_QWORD*)(v25 + 160);
          v29 = v28 + 32;
          v30 = *(_QWORD*)(v28 + 8) + 32LL * (unsigned int)v27;
          if (v27 >= 0) {
            v31 = v30;
          }
          else {
            v31 = v29;
          }
          v32 = (unsigned int)GameRoutine_90c930_alt1(v31) != 0;
          StatusLV_18a3070_alt1(v24, v32, 1);
        }
        else if (v23 == 0) {
        LABEL_54:
          v33 = ui_LayoutAccessor_FindPane_alt1(v6, (__int64)"IconGod");
          if (v33 != 0) {
            v34 = __dynamic_cast(v33, GameData_212d670[0], GameData_212d678[0],
                                 0);
            v35 = (const char*)GameRoutine_957180_alt1(a2);
            if (v34 != 0) {
              Manager_136a920_alt1(ui_Manager_instance_ + 1264, v34, 0, 7u,
                                   v35);
            }
          }
          else {
            GameRoutine_957180_alt1(a2);
          }
          v36 =
              *(_DWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212da30);
          result =
              ui_LayoutAccessor_FindTextBox_alt1(v6, (__int64)"L_Lv/T_Num");
          if (result != 0) {
            result = Pane_58f8a0_alt2(result);
            if (result != 0) {
              *(_DWORD*)(result + 12) = v36;
            }
          }
          goto LABEL_61;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
          std___1___shared_weak_count___release_weak_alt2(v23);
        }
        goto LABEL_54;
      }
    LABEL_21:
      v16 = 0;
      goto LABEL_22;
    }
  }
  return result;
}

__int64 game_gameui_1589ce0(__int64 result, __int64 a2, __int64 a3, char a4,
                            char a5, unsigned int a6)
{
  __int64** v7;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  const char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  const char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  bool v59;
  int v60;
  int v61;
  int v62;
  int v63;
  bool v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 (***v70)();
  __int64 (**v71)();
  __int64 (***v72)();
  __int64 v73;
  unsigned __int64 v74;
  int v75;
  bool v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  _QWORD v85[3];
  _QWORD v86[3];
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64* v95;
  __int64 v96;
  _BYTE v97[4];
  _BYTE v98[4];
  __int64 v99;
  __int64 v100;
  int v101;
  __int64 v102;
  __int64 v103;
  __int64* v104;

  v99 = a3;
  v100 = a2;
  v98[0] = a4;
  v97[0] = a5;
  if (a2 != 0 && a3 != 0) {
    v7 = (__int64**)result;
    result = *(_QWORD*)(result + 8);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      v96 = result;
      if (result != 0) {
        v9 = *v7;
        v95 = v9;
        if (v9 == nullptr) {
        LABEL_150:
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v80 = result;
            (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
            return std___1___shared_weak_count___release_weak_alt1(v80);
          }
          return result;
        }
        v86[0] = "L_Name";
        v86[1] = 6;
        GameRoutine_15725c0((void*)(&v102), v9, v86);
        if (v103 != 0) {
          v10 = std___1___shared_weak_count_lock(v103);
          v11 = v102;
          if (v103 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v103);
          }
          if (v10 != 0 && v11 != 0) {
            UnitName_19ab4a0(v11, a3);
          }
          else if (v10 == 0) {
            goto LABEL_15;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            std___1___shared_weak_count___release_weak_alt1(v10);
          }
        }
      LABEL_15:
        v12 = v95;
        v13 = ui_LayoutAccessor_FindPane(v95, "Face");
        if (v13 != 0) {
          v13 =
              __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0], 0);
        }
        v14 = v99;
        GameRoutine_1840740(v13, 0, v99, 6, 1);
        v15 = ui_LayoutAccessor_FindPane(v12, "IconClan");
        if (v15 != 0) {
          v16 =
              __dynamic_cast(v15, GameData_212d670[0], GameData_212d678[0], 0);
          if ((_BYTE)a6 != 0) {
            goto LABEL_19;
          }
        }
        else {
          v16 = 0;
          if ((_BYTE)a6 != 0) {
          LABEL_19:
            v17 = GameRoutine_158a7c0(a6);
            if (v16 == 0) {
              goto LABEL_30;
            }
            goto LABEL_20;
          }
        }
        if (game_GameModeData_instance_ != 0) {
          v20 = *(_QWORD*)(game_GameModeData_instance_ + 96);
          if (v20 == 0) {
            goto LABEL_30;
          }
          if (*(_QWORD*)(v20 + 336) == 0) {
            goto LABEL_30;
          }
          v17 = GameRoutine_96de20();
          if (v16 == 0) {
            goto LABEL_30;
          }
        LABEL_20:
          if (v17 != 0) {
            v18 = *(_BYTE**)(v17 + 48);
            if (v18 != nullptr && *v18 != 0) {
              v19 = v17;
              if ((Manager_136afb0(ui_Manager_instance_ + 1264, 5) & 1) != 0) {
                Manager_136a920(ui_Manager_instance_ + 1264, v16, 0, 5,
                                *(_QWORD*)(v19 + 48));
              }
            }
          }
        }
      LABEL_30:
        v21 = v100;
        v22 = (_QWORD*)game_Unit_GetJob(v100);
        v23 = *(_QWORD*)game_Unit_GetJob(v14);
        v24 = v98[0];
        if (*v22 == v23) {
          v25 = 1;
        }
        else {
          v25 = v98[0];
        }
        LayoutAccessor_1560070((void*)(&v93), v12, (__int64)"L_Class");
        if (v94 == 0) {
          goto LABEL_79;
        }
        v26 = std___1___shared_weak_count_lock(v94);
        if (v26 == 0) {
        LABEL_77:
          if (v94 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v94);
          }
        LABEL_79:
          if (*(_DWORD*)(v21 + 504) >= *(_DWORD*)(v14 + 504)) {
            v38 = 1;
          }
          else {
            v38 = v24;
          }
          if (*(unsigned __int8*)(v21 + 498) >=
              (unsigned int)*(unsigned __int8*)(v14 + 498)) {
            v39 = 1;
          }
          else {
            v39 = v24;
          }
          LayoutAccessor_1560070((void*)(&v91), v12, (__int64)"L_LvGroup");
          if (v92 == 0) {
            goto LABEL_120;
          }
          v40 = std___1___shared_weak_count_lock(v92);
          if (v40 == 0) {
          LABEL_118:
            if (v92 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v92);
            }
          LABEL_120:
            LOBYTE(v102) = 0;
            v53 = game_Unit_GetParam(v21, &v102, 0);
            LOBYTE(v102) = 0;
            v54 = game_Unit_GetParamLimit(v21, &v102);
            LOBYTE(v102) = 0;
            v55 = game_Unit_GetParam(v14, &v102, 0);
            LOBYTE(v102) = 0;
            v56 = game_Unit_GetParamLimit(v14, &v102);
            v57 = v97[0];
            v58 = v56;
            if (v97[0] != 0) {
              v59 = v53 >= v55;
            }
            else {
              v59 = v53 == v55;
            }
            LayoutAccessor_1560070((void*)(&v89), v12, (__int64)"L_HPGroup");
            GameRoutine_1587220(&v89, v14, 28, v53, v54, v55, v58, v59 | v24,
                                0);
            if (v90 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v90);
            }
            LOBYTE(v102) = 10;
            v60 = game_Unit_GetParam(v21, &v102, 0);
            LOBYTE(v102) = 10;
            v61 = game_Unit_GetParamLimit(v21, &v102);
            LOBYTE(v102) = 10;
            v62 = game_Unit_GetParam(v14, &v102, 0);
            LOBYTE(v102) = 10;
            v63 = game_Unit_GetParamLimit(v14, &v102);
            if (v57 != 0) {
              v64 = v60 >= v62;
            }
            else {
              v64 = v60 == v62;
            }
            LayoutAccessor_1560070((void*)(&v87), v12, (__int64)"L_Move");
            GameRoutine_1587220(&v87, v14, 37, v60, v61, v62, v63, v64 | v24,
                                0);
            if (v88 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v88);
            }
            game_Unit_GetParams((void*)(v86), v14, 0);
            v65 = game_Unit_GetJob(v21);
            if (v65 != 0) {
              v66 = v65;
              GameRoutine_6c2b50(&v102);
              if ((GameRoutine_95f500(1, &v102, v21, v66) & 1) != 0) {
                game_Unit_GetParams((void*)(v85), &v102, 0);
                game_Unit_Destroy_Unit(&v102);
                goto LABEL_135;
              }
              game_Unit_Destroy_Unit(&v102);
            }
            v67 = GameData_212de48[0][1];
            v68 = *(__int64*)((char*)GameData_212de48[0] +
                              (unsigned __int64)((_UNKNOWN**)0x8LL) + 6);
            v85[0] = *GameData_212de48[0];
            v85[1] = v67;
            *(_QWORD*)((char*)&v85[1] + 6) = v68;
          LABEL_135:
            v83 = 0;
            v84 = 0;
            v69 = (__int64*)fw_memory_g_heap_manager_ptr;
            v70 = (__int64 (***)())fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
            v71 = GameData_204e098;
            v72 = v70;
            *v70 = GameData_204e098;
            v70[1] = (__int64 (**)())&v95;
            v70[2] = (__int64 (**)())v85;
            v70[3] = (__int64 (**)())v86;
            v70[4] = (__int64 (**)())&v100;
            v70[5] = (__int64 (**)())&v99;
            v70[6] = (__int64 (**)())v97;
            v70[7] = (__int64 (**)())v98;
            v70[8] = (__int64 (**)())((char*)&v84 + 4);
            v70[9] = (__int64 (**)())&v84;
            v70[10] = (__int64 (**)())((char*)&v83 + 4);
            v70[11] = (__int64 (**)())&v83;
            v73 = GameData_2259348;
            if (GameData_2259350 != GameData_2259348) {
              v74 = 0;
              do {
                v75 = *(_DWORD*)(v73 + 4 * v74);
                v101 = v74;
                LODWORD(v102) = v75;
                ((void (*)(__int64 (***)(), __int64*, int*))(*v72)[6])(
                    v72, &v102, &v101);
                v73 = GameData_2259348;
                ++v74;
              } while (v74 < (GameData_2259350 - GameData_2259348) >> 2);
              v71 = *v72;
            }
            ((void (*)(__int64 (***)()))v71[5])(v72);
            if (v97[0] != 0) {
              v76 = SHIDWORD(v84) >= (int)v84;
            }
            else {
              v76 = HIDWORD(v84) == (_DWORD)v84;
            }
            LayoutAccessor_1560070((void*)(&v81), v95,
                                   (__int64)"L_StatusTotal");
            GameRoutine_1587520(&v81, HIDWORD(v84), HIDWORD(v83), v84, v83,
                                (v98[0] | v76) & 1);
            if (v82 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v82);
            }
            v77 = *v69;
            LODWORD(v86[0]) = 0;
            v78 = (__int64*)fw_memory_HeapManager_Allocate_alt1(v77, 56, 16, 0);
            v104 = v78;
            *v78 = (__int64)GameData_204e118;
            v78[1] = (__int64)&v100;
            v78[2] = (__int64)&v99;
            v78[3] = (__int64)v97;
            v78[4] = (__int64)v86;
            v78[5] = (__int64)&v95;
            v78[6] = (__int64)v98;
            GameRoutine_156d580(&v102);
            if (v104 == &v102) {
              v79 = 32;
            }
            else {
              if (v104 == nullptr) {
                goto LABEL_149;
              }
              v79 = 40;
            }
            (*(void (**)(__int64))(*v104 + v79))((__int64)v104);
          LABEL_149:
            result = v96;
            if (v96 == 0) {
              return result;
            }
            goto LABEL_150;
          }
          v41 = v91;
          v42 = v40;
          if (v91 == 0) {
            goto LABEL_116;
          }
          v43 = v38 & v39;
          if ((v38 & v39) != 0) {
            v44 = "After_Off";
          }
          else {
            v44 = "Default";
          }
          LayoutAccessor_1562cf0(v91, v44);
          v86[0] = "L_Status_00";
          v86[1] = 11;
          GameRoutine_1572840((void*)(&v102), v41, v86);
          if (v103 != 0) {
            v45 = std___1___shared_weak_count_lock(v103);
            v46 = v102;
            if (v103 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v103);
            }
            if (v45 != 0 && v46 != 0) {
              StatusLV_18a30a0(v46, v21);
              v47 = *(_QWORD*)(v46 + 1096);
              if (v47 != 0) {
                *(_BYTE*)(v47 + 88) &= ~1u;
                ui_LayoutAccessor_SetPaneVisible(v46 + 88, "Border", 1);
              }
            }
            else if (v45 == 0) {
              goto LABEL_101;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
              std___1___shared_weak_count___release_weak_alt1(v45);
            }
          }
        LABEL_101:
          if ((v43 & 1) == 0) {
            v86[0] = "L_Status_01";
            v86[1] = 11;
            GameRoutine_1572840((void*)(&v102), v41, v86);
            if (v103 != 0) {
              v48 = std___1___shared_weak_count_lock(v103);
              v49 = v102;
              if (v103 != 0) {
                std___1___shared_weak_count___release_weak_alt1(v103);
              }
              if (v48 != 0 && v49 != 0) {
                StatusLV_18a30a0(v49, v14);
                v50 = *(unsigned __int8*)(v21 + 498);
                v51 = *(unsigned __int8*)(v14 + 498);
                if (v38 != 0) {
                  StatusLV_18a2d70(v49, v50, v51, 99);
                }
                else {
                  StatusLV_18a2e20(v49, v50, v51, 99);
                }
                v52 = *(_QWORD*)(v49 + 1096);
                if (v52 != 0) {
                  *(_BYTE*)(v52 + 88) &= ~1u;
                  ui_LayoutAccessor_SetPaneVisible(v49 + 88, "Border", 1);
                }
                goto LABEL_114;
              }
              if (v48 != 0) {
              LABEL_114:
                if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
                  std___1___shared_weak_count___release_weak_alt1(v48);
                }
              }
            }
          }
        LABEL_116:
          if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
            std___1___shared_weak_count___release_weak_alt1(v42);
          }
          goto LABEL_118;
        }
        v27 = v93;
        v28 = v26;
        if (v93 == 0) {
          goto LABEL_75;
        }
        if (v25 != 0) {
          v29 = "Before_Off";
        }
        else {
          v29 = "Default";
        }
        LayoutAccessor_1562cf0(v93, v29);
        v86[0] = "L_Status_00";
        v86[1] = 11;
        GameRoutine_fa73c0((void*)(&v102), v27, v86);
        if (v103 != 0) {
          v30 = std___1___shared_weak_count_lock(v103);
          v31 = v102;
          if (v103 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v103);
          }
          if (v30 != 0 && v31 != 0) {
            GameRoutine_189d120(v31, v21, 0, 1, 0, 0, 1);
          }
          else if (v30 == 0) {
            goto LABEL_48;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
            std___1___shared_weak_count___release_weak_alt1(v30);
          }
        }
      LABEL_48:
        v86[0] = "L_JobIcon_00";
        v86[1] = 12;
        GameRoutine_1587740((void*)(&v102), v27, v86);
        if (v103 != 0) {
          v32 = std___1___shared_weak_count_lock(v103);
          v33 = v102;
          if (v103 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v103);
          }
          if (v32 != 0 && v33 != 0) {
            JobIcon_19a8c50(v33, v21);
          }
          else if (v32 == 0) {
            goto LABEL_57;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
            std___1___shared_weak_count___release_weak_alt1(v32);
          }
        }
      LABEL_57:
        v86[0] = "L_Status_01";
        v86[1] = 11;
        GameRoutine_fa73c0((void*)(&v102), v27, v86);
        if (v103 != 0) {
          v34 = std___1___shared_weak_count_lock(v103);
          v35 = v102;
          if (v103 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v103);
          }
          if (v34 != 0 && v35 != 0) {
            GameRoutine_189d120(v35, v14, 0, 1, 0, 0, 1);
          }
          else if (v34 == 0) {
            goto LABEL_66;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
            std___1___shared_weak_count___release_weak_alt1(v34);
          }
        }
      LABEL_66:
        v86[0] = "L_JobIcon_01";
        v86[1] = 12;
        GameRoutine_1587740((void*)(&v102), v27, v86);
        if (v103 != 0) {
          v36 = std___1___shared_weak_count_lock(v103);
          v37 = v102;
          if (v103 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v103);
          }
          if (v36 != 0 && v37 != 0) {
            JobIcon_19a8c50(v37, v21);
            goto LABEL_73;
          }
          if (v36 != 0) {
          LABEL_73:
            if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
              std___1___shared_weak_count___release_weak_alt1(v36);
            }
          }
        }
      LABEL_75:
        if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
          std___1___shared_weak_count___release_weak_alt1(v28);
        }
        goto LABEL_77;
      }
    }
  }
  return result;
}

__int64 game_gameui_158b720(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 result;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  int v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64* v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  int v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  unsigned int v50;
  unsigned int i;
  __int64 v52;
  __int64 v53;
  bool v54;
  __int64* v55;
  unsigned int v56;
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
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  __int64* v81;

  result = *(_QWORD*)(a1 + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    return result;
  }
  v6 = *(__int64**)a1;
  if (*(_QWORD*)a1 == 0) {
    goto LABEL_144;
  }
  v71 = result;
  game_gameui_Util_GetNewSkillList((void*)(&v75), 1, (__int64)a2, (__int64)a3);
  v7 = v76;
  v73 = a2;
  if (v75 == v76) {
    v15 = 0;
    while (1) {
    LABEL_94:
      v57 = game_util_Format_alt1("L_Skill%02d", v15);
      LayoutAccessor_1560070((void*)(&v80), v6, v57);
      if (v81 != nullptr) {
        v58 = std___1___shared_weak_count_lock(v81);
        v59 = (__int64)v80;
        if (v81 != nullptr) {
          std___1___shared_weak_count___release_weak_alt1(v81);
        }
        if (v58 != 0 && v59 != 0) {
          LayoutAccessor_155e830_alt1(v59, 0);
        LABEL_101:
          if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
            std___1___shared_weak_count___release_weak_alt1(v58);
          }
          goto LABEL_93;
        }
        if (v58 != 0) {
          goto LABEL_101;
        }
      }
    LABEL_93:
      if (++v15 == 4) {
        goto LABEL_21;
      }
    }
  }
  v8 = v75 + 8;
  v9 = 0;
  if ((unsigned __int64)(v76 - v75) > 0x20) {
    v10 = 2;
  }
  else {
    v10 = 3;
  }
  do {
    v11 = *(_QWORD*)(v8 - 8);
    v12 = game_util_Format_alt1("L_Skill%02d", v9);
    LayoutAccessor_1560070((void*)(&v80), v6, v12);
    if (v81 != nullptr) {
      v13 = std___1___shared_weak_count_lock(v81);
      v14 = v80;
      if (v81 != nullptr) {
        std___1___shared_weak_count___release_weak_alt1(v81);
      }
      if (v13 != 0 && v14 != nullptr) {
        LODWORD(v80) = 0;
        GameRoutine_842b40(&v80, v11);
        Util_157e3a0(v14, (unsigned int*)&v80, 1u, (__int64)a3);
        LayoutAccessor_155e830_alt1(v14, 1);
      }
      else if (v13 == 0) {
        goto LABEL_17;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak_alt1(v13);
      }
    }
  LABEL_17:
    v15 = v9 + 1;
    if (v10 == v9) {
      break;
    }
    ++v9;
    v16 = v8 == v7;
    v8 += 8;
  } while (!v16);
  a2 = v73;
  if ((unsigned int)(v15 - 1) <= 2) {
    goto LABEL_94;
  }
LABEL_21:
  v17 = fw_memory_g_heap_manager_ptr;
  if (v75 != 0) {
    v18 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v76 = v75;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v18 + v19);
  }
  game_gameui_Util_GetNewSkillList((void*)(&v75), 2, (__int64)a2, (__int64)a3);
  v20 = v76;
  if (v75 == v76) {
    v29 = 0;
    while (1) {
    LABEL_106:
      v60 = game_util_Format_alt1("L_CombatArts%02d", v29);
      LayoutAccessor_1560070((void*)(&v80), v6, v60);
      if (v81 != nullptr) {
        v61 = std___1___shared_weak_count_lock(v81);
        v62 = (__int64)v80;
        if (v81 != nullptr) {
          std___1___shared_weak_count___release_weak_alt1(v81);
        }
        if (v61 != 0 && v62 != 0) {
          LayoutAccessor_155e830_alt1(v62, 0);
        LABEL_113:
          if (atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
            std___1___shared_weak_count___release_weak_alt1(v61);
          }
          goto LABEL_105;
        }
        if (v61 != 0) {
          goto LABEL_113;
        }
      }
    LABEL_105:
      if (++v29 == 4) {
        goto LABEL_42;
      }
    }
  }
  v21 = v75 + 8;
  v22 = 0;
  if ((unsigned __int64)(v76 - v75) > 0x20) {
    v23 = 2;
  }
  else {
    v23 = 3;
  }
  while (2) {
    v24 = *(_QWORD*)(v21 - 8);
    v25 = game_util_Format_alt1("L_CombatArts%02d", v22);
    LayoutAccessor_1560070((void*)(&v80), v6, v25);
    if (v81 != nullptr) {
      v27 = std___1___shared_weak_count_lock(v81);
      v28 = v80;
      if (v81 != nullptr) {
        std___1___shared_weak_count___release_weak_alt1(v81);
      }
      if (v27 != 0 && v28 != nullptr) {
        LODWORD(v80) = 0;
        GameRoutine_842b40(&v80, v24);
        Util_157e3a0(v28, (unsigned int*)&v80, 2u, (__int64)a3);
        LayoutAccessor_155e830_alt1(v28, 1);
      LABEL_36:
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak_alt1(v27);
        }
      }
      else if (v27 != 0) {
        goto LABEL_36;
      }
    }
    v29 = v22 + 1;
    if (v23 != v22) {
      ++v22;
      v16 = v21 == v20;
      v21 += 8;
      if (!v16) {
        continue;
      }
    }
    break;
  }
  v17 = fw_memory_g_heap_manager_ptr;
  a2 = v73;
  if ((unsigned int)(v29 - 1) <= 2) {
    goto LABEL_106;
  }
LABEL_42:
  if (v75 != 0) {
    v30 = *(_QWORD*)v17;
    v76 = v75;
    v31 = 128;
    if (*(_QWORD*)(v30 + 200) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v30 + v31);
  }
  game_gameui_Util_GetNewMagicList((void*)(&v75), a2, a3, v26);
  v32 = v76;
  if (v75 == v76) {
    v46 = 0;
    while (1) {
    LABEL_118:
      v63 = game_util_Format_alt1("L_Magic%02d", v46);
      LayoutAccessor_1560070((void*)(&v80), v6, v63);
      if (v81 != nullptr) {
        v64 = std___1___shared_weak_count_lock(v81);
        v65 = (__int64)v80;
        if (v81 != nullptr) {
          std___1___shared_weak_count___release_weak_alt1(v81);
        }
        if (v64 != 0 && v65 != 0) {
          LayoutAccessor_155e830_alt1(v65, 0);
        LABEL_125:
          if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
            std___1___shared_weak_count___release_weak_alt1(v64);
          }
          goto LABEL_117;
        }
        if (v64 != 0) {
          goto LABEL_125;
        }
      }
    LABEL_117:
      if (++v46 == 4) {
        goto LABEL_66;
      }
    }
  }
  v33 = v75 + 8;
  v34 = 0;
  v72 = v76;
  if ((unsigned __int64)(v76 - v75) > 0x20) {
    v35 = 2;
  }
  else {
    v35 = 3;
  }
  while (2) {
    v36 = *(_QWORD*)(v33 - 8);
    v37 = game_util_Format_alt1("L_Magic%02d", v34);
    LayoutAccessor_1560070((void*)(&v80), v6, v37);
    if (v81 != nullptr) {
      v38 = std___1___shared_weak_count_lock(v81);
      v39 = v80;
      if (v81 != nullptr) {
        std___1___shared_weak_count___release_weak_alt1(v81);
      }
      if (v38 != 0 && v39 != nullptr) {
        v80 = nullptr;
        if (v36 != 0) {
          v40 = *(unsigned __int16*)(v36 + 16);
          HIDWORD(v80) = 1;
          LOWORD(v80) = v40;
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v40) +
                        73LL) == 17) {
            nn_os_LockMutex(&game_g_random_mutex);
            v41 = game_map_MapRandom_instance__ptr[0];
            v42 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v43 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v44 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v41 + 1) = v42;
            v45 = (v44 >> 8) ^ (v43 >> 19) ^ v44 ^ v43;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v41) = v43;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v41 + 4) = v45;
            nn_os_UnlockMutex(&game_g_random_mutex);
            v32 = v72;
            HIDWORD(v80) =
                (16 * ((_WORD)v45 -
                       1000 * (unsigned __int16)((v45 & 0x7FFFFFFFu) / 0x3E8)) +
                 16) &
                    0x3FF0 |
                1;
          }
        }
        Util_15792c0(v39, (unsigned __int16*)&v80, 0, 0, (__int64)a3,
                     (__int64)"L_Icon", (__int64)"T_Txt", 1);
        LayoutAccessor_155e830_alt1(v39, 1);
      LABEL_60:
        if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
          std___1___shared_weak_count___release_weak_alt1(v38);
        }
      }
      else if (v38 != 0) {
        goto LABEL_60;
      }
    }
    v46 = v34 + 1;
    if (v35 != v34) {
      ++v34;
      v16 = v33 == v32;
      v33 += 8;
      if (!v16) {
        continue;
      }
    }
    break;
  }
  v17 = fw_memory_g_heap_manager_ptr;
  a2 = v73;
  if ((unsigned int)(v46 - 1) <= 2) {
    goto LABEL_118;
  }
LABEL_66:
  if (v75 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v47);
  }
  Util_158aec0((void*)((__int64*)&v80), (__int64)a2, (__int64)a3);
  v49 = v80;
  v48 = v81;
  if ((unsigned __int64)((char*)v81 - (char*)v80) > 0x20) {
    v50 = 3;
  }
  else {
    v50 = 4;
  }
  if (v81 == v80) {
    v56 = 0;
    v55 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
    LABEL_130:
      v78 = game_util_Format_alt1("L_Class%02d", v56);
      v79 = strlen(v78);
      GameRoutine_fa73c0((void*)(&v75), v6, &v78);
      if (v76 != 0) {
        v66 = std___1___shared_weak_count_lock(v76);
        v67 = v75;
        if (v76 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v76);
        }
        if (v66 != 0 && v67 != 0) {
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)v67 + 40LL))(v67, 0);
        LABEL_137:
          if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
            std___1___shared_weak_count___release_weak_alt1(v66);
          }
          goto LABEL_129;
        }
        if (v66 != 0) {
          goto LABEL_137;
        }
      }
    LABEL_129:
      if (++v56 == 4) {
        goto LABEL_139;
      }
    }
  }
  for (i = 0;; ++i) {
    v78 = game_util_Format_alt1("L_Class%02d", i);
    v79 = strlen(v78);
    GameRoutine_fa73c0((void*)(&v75), v6, &v78);
    if (v76 == 0) {
      goto LABEL_87;
    }
    v52 = std___1___shared_weak_count_lock(v76);
    v53 = v75;
    if (v76 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v76);
    }
    if (v52 != 0 && v53 != 0) {
      GameRoutine_6c2b50(&v75);
      GameRoutine_6c3980(&v75, a3);
      if (v77 != *v49) {
        v77 = *v49;
        game_Unit_Unknown6c8630(&v75);
      }
      GameRoutine_189d120(v53, &v75, 0, 1, 0, 0, 1);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v53 + 40LL))(v53, 1);
      v54 = i + 1 >= v50;
      game_Unit_Destroy_Unit(&v75);
    }
    else {
      v54 = false;
      if (v52 == 0) {
        goto LABEL_86;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
      std___1___shared_weak_count___release_weak_alt1(v52);
    }
  LABEL_86:
    if (v54) {
      break;
    }
  LABEL_87:
    if (++v49 == v48) {
      break;
    }
  }
  v55 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (i <= 2) {
    v56 = i + 1;
    goto LABEL_130;
  }
LABEL_139:
  if (v80 != nullptr) {
    v68 = *v55;
    v81 = v80;
    v69 = 128;
    if (*(_QWORD*)(v68 + 200) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v68 + v69);
  }
  result = v71;
LABEL_144:
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v70 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    return std___1___shared_weak_count___release_weak_alt1(v70);
  }
  return result;
}

unsigned __int16* game_gameui_158d340(unsigned __int16* result)
{
  __int64 v1;
  unsigned int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int16* v9;
  int v10;

  if (result != nullptr) {
    if (*result != 0) {
      v1 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *result);
      v2 = *(unsigned __int8*)(v1 + 72);
      if (v2 > 7) {
        return nullptr;
      }
      else {
        v3 = *(unsigned __int8*)(v1 + 73);
        if (v3 == 2) {
          return (_WORD*)((_UNKNOWN*)0x7LL);
        }
        else if (v3 == 1) {
          v4 = *(_QWORD*)(v1 + 24);
          v6 = *(_QWORD*)(v4 + 8);
          v7 = *(_QWORD*)(v4 + 16);
          v5 = v4 + 8;
          v8 = *(unsigned int*)((char*)((_UNKNOWN*)0x70LL) +
                                game_g_shared_system_skills_ptr);
          v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x70LL) +
                           game_g_shared_system_skills_ptr) &
                0xFFF;
          if (((v8 >> 5) & 0x7F) + 1 <= (v7 - v6) >> 2 &&
              ((*(_DWORD*)(v6 + 4 * ((v8 >> 5) & 0x7F)) >> v8) & 1) != 0) {
            v9 = result;
            if ((game_HasActiveSkill_843420(&v10, v5) & 1) != 0) {
              return (_WORD*)(((_UNKNOWN*)0x0LL) + 2);
            }
            v2 = *(
                unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                             8LL * *v9) +
                                  72LL);
          }
          if (v2 - 5 >= 2) {
            return (_WORD*)(((_UNKNOWN*)0x0LL) + 1);
          }
          else {
            return (_WORD*)(((_UNKNOWN*)0x0LL) + 2);
          }
        }
        else {
          return (_WORD*)(((_UNKNOWN*)0x0LL) + 3);
        }
      }
    }
    else {
      return nullptr;
    }
  }
  return result;
}

__int64 game_gameui_158d440(__int64 result, __int64* a2, __int64 a3, char a4)
{
  __int64 v5;
  __int64* v8;
  unsigned __int8* v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  bool v57;
  char v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  char v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD* v70;
  char v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  char v81;
  __int64 v82;

  if (a2 == nullptr || a3 == 0) {
    return result;
  }
  v71 = 0;
  v69 = 0;
  v70 = nullptr;
  v5 = *(unsigned __int16*)a2;
  v67 = 0;
  v68 = 0;
  v66 = 0;
  v8 = GameData_212c878[0];
  v9 = *(unsigned __int8**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v5);
  v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v9[72] >= 8u) {
    v11 = (__int64*)result;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v65 = 0;
    v63 = 0;
    v64 = nullptr;
    v61 = 0;
    v62 = 0;
    v60 = 0;
    goto LABEL_23;
  }
  if ((*((_BYTE*)a2 + 3) & 0x20) != 0 || (v9[336] & 8) != 0 ||
      ((1LL << v9[73]) & 0x7DC) != 0) {
    v11 = (__int64*)result;
    v12 = a3;
    v13 = a2;
    v14 = 0;
  }
  else {
    v11 = (__int64*)result;
    v12 = a3;
    v14 = 1;
    v13 = game_g_empty_item_ptr;
  }
  GameRoutine_15a4580(&v76, v12, v13, v14);
  v68 = v78;
  v69 = v79;
  v70 = v80;
  v71 = v81;
  v66 = v76;
  v67 = v77;
  v15 =
      *(unsigned __int8**)(*(_QWORD*)(*v8 + 64) + 8LL * *(unsigned __int16*)a2);
  v65 = 0;
  v63 = 0;
  v64 = nullptr;
  v61 = 0;
  v62 = 0;
  v60 = 0;
  if (v15[72] <= 7u) {
    if ((*((_BYTE*)a2 + 3) & 0x20) != 0 || (v15[336] & 8) != 0 ||
        ((1LL << v15[73]) & 0x7DC) != 0) {
      GameRoutine_15a4580(&v76, a3, a2, 1);
    }
    else {
      v36 = *(_QWORD*)(a3 + 2208);
      v37 = GameData_212ddb8[0] + 2;
      v38 = *a2;
      v72 = GameData_212ddb8[0] + 2;
      v73 = a3;
      v74 = v38;
      v75 = v36;
      *(_QWORD*)(a3 + 2208) = &v72;
      v39 = *(_DWORD*)(a3 + 416);
      if ((v39 & 0x10000000) == 0) {
        *(_DWORD*)(a3 + 416) = v39 | 0x10000000;
        game_6c51e0(a3);
        GameRoutine_6c6da0(a3);
        game_6c6ec0(a3);
        *(_DWORD*)(a3 + 416) &= ~0x10000000u;
      }
      GameRoutine_15a4580(&v76, a3, a2, 1);
      v72 = v37;
      v40 = v73;
      if (v73 != 0 && *(__int64***)(v73 + 2208) == &v72) {
        *(_QWORD*)(v73 + 2208) = v75;
        v41 = *(_DWORD*)(v40 + 416);
        if ((v41 & 0x10000000) == 0) {
          *(_DWORD*)(v40 + 416) = v41 | 0x10000000;
          game_6c51e0(v40);
          GameRoutine_6c6da0(v40);
          game_6c6ec0(v40);
          *(_DWORD*)(v40 + 416) &= ~0x10000000u;
        }
      }
    }
    v16 = *(unsigned __int16*)a2;
    v62 = v78;
    v63 = v79;
    v64 = v80;
    v65 = v81;
    v60 = v76;
    v61 = v77;
    v17 = *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v16);
    v18 = *(unsigned __int8*)(v17 + 72);
    if (v18 <= 7) {
      if ((_DWORD)v16 == 0) {
        v25 = 0;
        goto LABEL_52;
      }
      v19 = *(unsigned __int8*)(v17 + 73);
      if (v19 == 2) {
        v25 = 7;
        goto LABEL_52;
      }
      if (v19 != 1) {
        v25 = 3;
        goto LABEL_52;
      }
      v20 = *(_QWORD*)(v17 + 24);
      v22 = *(_QWORD*)(v20 + 8);
      v23 = *(_QWORD*)(v20 + 16);
      v21 = v20 + 8;
      v24 = *(unsigned int*)((char*)((_UNKNOWN*)0x70LL) +
                             game_g_shared_system_skills_ptr);
      LODWORD(v76) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x70LL) +
                                game_g_shared_system_skills_ptr) &
                     0xFFF;
      if (((v24 >> 5) & 0x7F) + 1 <= (v23 - v22) >> 2 &&
          ((*(_DWORD*)(v22 + 4 * ((v24 >> 5) & 0x7F)) >> v24) & 1) != 0) {
        if ((game_HasActiveSkill_843420(&v76, v21) & 1) != 0) {
          v25 = 2;
          goto LABEL_52;
        }
        v18 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                             8LL * *(unsigned __int16*)a2) +
                                  72LL);
      }
      if (v18 - 5 >= 2) {
        v25 = 1;
      }
      else {
        v25 = 2;
      }
    LABEL_52:
      v42 = fw_memory_HeapManager_Allocate_alt1(*v10, 32, 16, 0);
      v28 = v42 + 32;
      v29 = v42;
      *(_DWORD*)v42 = v25;
      *(_DWORD*)(v42 + 28) = 39;
      *(_QWORD*)(v42 + 4) = 0xD0000000ALL;
      *(_QWORD*)(v42 + 12) = 0xB00000014LL;
      *(_QWORD*)(v42 + 20) = 0x110000000CLL;
      if (*(_WORD*)a2 == 0 ||
          (v43 =
               *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * *(unsigned __int16*)a2),
           (unsigned int)(v44 = *(unsigned __int8*)(v43 + 72)) > 7)) {
        v51 = v10;
        v52 = 0;
        goto LABEL_61;
      }
      v45 = *(unsigned __int8*)(v43 + 73);
      if (v45 == 2) {
        v51 = v10;
        v52 = 7;
        goto LABEL_61;
      }
      if (v45 != 1) {
        v51 = v10;
        v52 = 3;
        goto LABEL_61;
      }
      v46 = *(_QWORD*)(v43 + 24);
      v48 = *(_QWORD*)(v46 + 8);
      v49 = *(_QWORD*)(v46 + 16);
      v47 = v46 + 8;
      v50 = *(unsigned int*)((char*)((_UNKNOWN*)0x70LL) +
                             game_g_shared_system_skills_ptr);
      LODWORD(v76) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x70LL) +
                                game_g_shared_system_skills_ptr) &
                     0xFFF;
      if (((v50 >> 5) & 0x7F) + 1 <= (v49 - v48) >> 2 &&
          ((*(_DWORD*)(v48 + 4 * ((v50 >> 5) & 0x7F)) >> v50) & 1) != 0) {
        v51 = v10;
        if ((game_HasActiveSkill_843420(&v76, v47) & 1) != 0) {
          v52 = 2;
          goto LABEL_61;
        }
        v44 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                             8LL * *(unsigned __int16*)a2) +
                                  72LL);
      }
      else {
        v51 = v10;
      }
      if ((unsigned int)(v44 - 5) >= 2) {
        v52 = 1;
      }
      else {
        v52 = 2;
      }
    LABEL_61:
      v53 = fw_memory_HeapManager_Allocate_alt1(*v51, 28, 16, 0);
      *(_DWORD*)v53 = v52;
      v26 = v53 + 28;
      v27 = v53;
      *(_QWORD*)(v53 + 4) = 0xD0000000ALL;
      *(_QWORD*)(v53 + 12) = 0xB00000014LL;
      *(_QWORD*)(v53 + 20) = 0x270000000CLL;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * *(unsigned __int16*)a2) +
                    72LL) == 7 &&
          (X8CALL_X0(__int64, LayoutAccessor_1560070((void*)(&v76), v11,
                                                     (__int64)"L_InfoTitle")),
           v77 != 0)) {
        v59 = std___1___shared_weak_count_lock(v77);
        v54 = v76;
        v10 = v51;
        if (v77 != 0) {
          v55 = v76;
          std___1___shared_weak_count___release_weak_alt1(v77);
          v54 = v55;
        }
        if (v59 != 0 && v54 != 0) {
          v56 = ui_LayoutAccessor_FindPane(v54, "T_Info");
          v57 = (*((_DWORD*)a2 + 1) & 0xF) == 0 ||
                *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *(unsigned __int16*)a2) +
                          87LL) == 0;
          v58 = *(_BYTE*)(v56 + 88) & 0xFE;
          if (!v57) {
            ++v58;
          }
          *(_BYTE*)(v56 + 88) = v58;
          goto LABEL_75;
        }
        if (v59 != 0) {
        LABEL_75:
          if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
            std___1___shared_weak_count___release_weak_alt1(v59);
          }
        }
      }
      else {
        v10 = v51;
      }
    LABEL_23:
      v30 = *v10;
      v31 = (a4 & 1) == 0;
      v72 = a2;
      v82 = a3;
      if ((a4 & 1) != 0) {
        v32 = v27;
      }
      else {
        v32 = v29;
      }
      if (v31) {
        v26 = v28;
      }
      v33 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v30, 40, 16, 0);
      v80 = v33;
      *v33 = GameData_204d3f8;
      v33[1] = &v72;
      v33[2] = &v60;
      v33[3] = &v66;
      v33[4] = &v82;
      GameRoutine_1586d80(v11, v32, v26, &v76, 1, 0, 0, a3, 0, 0, 0);
      result = (*(__int64 (**)(_QWORD*))(*v33 + 40LL))(v33);
      if (v27 != 0) {
        v34 = 128;
        if (*(_QWORD*)(*v10 + 200LL) == 0) {
          v34 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(*v10 + v34);
      }
      if (v29 != 0) {
        v35 = 128;
        if (*(_QWORD*)(*v10 + 200LL) == 0) {
          v35 = 56;
        }
        return nn_mem_StandardAllocator_Free_alt1(*v10 + v35);
      }
      return result;
    }
  }
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  goto LABEL_23;
}

__n128 game_gameui_158dbc0(__int64 a1, _WORD* a2, __int64 a3, char a4)
{
  __int64* v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _DWORD* v32;
  __int64 v33;
  int v34;
  unsigned __int64 v35;
  bool v36;
  __int64 v37;
  _DWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __n128 result;
  __int64 v44;
  struct {
    _QWORD v45[4];
    _QWORD* v46;
  } v45_;
  __int64 v47;
  _WORD* v48;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a2 == nullptr) {
    return result;
  }
  v8 = GameData_212c878[0];
  if (*a2 == 0 || (v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8LL * (unsigned __int16)*a2),
                   (unsigned int)(v10 = *(unsigned __int8*)(v9 + 72)) > 7)) {
  LABEL_12:
    v17 = 5;
    goto LABEL_13;
  }
  v11 = *(unsigned __int8*)(v9 + 73);
  if (v11 != 2) {
    if (v11 == 1) {
      v12 = *(_QWORD*)(v9 + 24);
      v14 = *(_QWORD*)(v12 + 8);
      v15 = *(_QWORD*)(v12 + 16);
      v13 = v12 + 8;
      v16 = *(unsigned int*)((char*)((_UNKNOWN*)0x70LL) +
                             game_g_shared_system_skills_ptr);
      LODWORD(v45_.v45[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x70LL) +
                                        game_g_shared_system_skills_ptr) &
                             0xFFF;
      if (((v16 >> 5) & 0x7F) + 1 <= (v15 - v14) >> 2 &&
          ((*(_DWORD*)(v14 + 4 * ((v16 >> 5) & 0x7F)) >> v16) & 1) != 0) {
        if (game_HasActiveSkill_843420_alt1(v45_.v45, v13)) {
        LABEL_11:
          v17 = 6;
          goto LABEL_13;
        }
        v10 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                             8LL * (unsigned __int16)*a2) +
                                  72LL);
      }
      if ((unsigned int)(v10 - 5) < 2) {
        goto LABEL_11;
      }
    }
    goto LABEL_12;
  }
  v17 = 8;
LABEL_13:
  v18 = (__int64*)fw_memory_g_heap_manager_ptr;
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_DWORD*)v19 = v17;
  *(_DWORD*)(v19 + 28) = 39;
  *(_QWORD*)(v19 + 4) = 0xD0000000ALL;
  *(_QWORD*)(v19 + 12) = 0x2600000014LL;
  *(_QWORD*)(v19 + 20) = 0x110000000CLL;
  if (*a2 == 0) {
    goto LABEL_23;
  }
  v20 = *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * (unsigned __int16)*a2);
  v21 = *(unsigned __int8*)(v20 + 72);
  if (v21 > 7) {
    goto LABEL_23;
  }
  v22 = *(unsigned __int8*)(v20 + 73);
  if (v22 == 2) {
    v28 = 8;
    goto LABEL_24;
  }
  if (v22 != 1) {
    goto LABEL_23;
  }
  v23 = *(_QWORD*)(v20 + 24);
  v25 = *(_QWORD*)(v23 + 8);
  v26 = *(_QWORD*)(v23 + 16);
  v24 = v23 + 8;
  v27 = *(unsigned int*)((char*)((_UNKNOWN*)0x70LL) +
                         game_g_shared_system_skills_ptr);
  LODWORD(v45_.v45[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x70LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
  if (((v27 >> 5) & 0x7F) + 1 > (v26 - v25) >> 2 ||
      ((*(_DWORD*)(v25 + 4 * ((v27 >> 5) & 0x7F)) >> v27) & 1) == 0) {
  LABEL_21:
    if (v21 - 5 < 2) {
      goto LABEL_22;
    }
  LABEL_23:
    v28 = 5;
    goto LABEL_24;
  }
  if (!game_HasActiveSkill_843420_alt1(v45_.v45, v24)) {
    v21 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                         8LL * (unsigned __int16)*a2) +
                              72LL);
    goto LABEL_21;
  }
LABEL_22:
  v28 = 6;
LABEL_24:
  v29 = fw_memory_HeapManager_Allocate(*v18, 28, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v30 = *v8;
  *(_DWORD*)v29 = v28;
  v31 = v29 + 28;
  v32 = (_DWORD*)v29;
  *(_QWORD*)(v29 + 4) = 0xD0000000ALL;
  *(_QWORD*)(v29 + 12) = 0x2600000014LL;
  *(_QWORD*)(v29 + 20) = 0x270000000CLL;
  v33 = *(_QWORD*)(*(_QWORD*)(v30 + 64) + 8LL * (unsigned __int16)*a2);
  v34 = *(unsigned __int8*)(v33 + 72);
  if (v34 == 15 ||
      ((v35 = ((1LL << *(_BYTE*)(v33 + 73)) | (0x10000000000LL << v34)) &
              0xFFBFFFFFFFA39FFFLL,
        v34 != 14)
           ? (v36 = v35 == 0)
           : (v36 = true),
       v36)) {
    LOBYTE(v44) = 0;
    v37 = a1;
    if ((a4 & 1) != 0) {
      v38 = v32;
    }
    else {
      v38 = (_DWORD*)v19;
    }
    if ((a4 & 1) != 0) {
      v39 = v31;
    }
    else {
      v39 = v19 + 32;
    }
    v45_.v45[0] = GameData_204e898;
    v45_.v46 = v45_.v45;
  }
  else {
    v47 = a3;
    v48 = a2;
    LOBYTE(v44) = 0;
    v37 = a1;
    if ((a4 & 1) != 0) {
      v38 = v32;
    }
    else {
      v38 = (_DWORD*)v19;
    }
    if ((a4 & 1) != 0) {
      v39 = v31;
    }
    else {
      v39 = v19 + 32;
    }
    v45_.v45[0] = GameData_204e818;
    v45_.v45[1] = &v48;
    v45_.v46 = v45_.v45;
    v45_.v45[2] = &v47;
  }
  GameRoutine_1586d80_alt1(v37, v38, v39, (__int64)v45_.v45, 1, 0, 0, 0, 0, v44,
                           0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v45_.v46 == v45_.v45) {
    v40 = 32;
    goto LABEL_48;
  }
  if (v45_.v46 != nullptr) {
    v40 = 40;
  LABEL_48:
    (*(void (**)(__int64))(*v45_.v46 + v40))((__int64)v45_.v46),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (*(_QWORD*)(*v18 + 200) != 0) {
    v41 = 128;
  }
  else {
    v41 = 56;
  }
  nn_mem_StandardAllocator_Free(*v18 + v41),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_QWORD*)(*v18 + 200) != 0) {
    v42 = 128;
  }
  else {
    v42 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v18 + v42);
}

void game_gameui_158df80(__int64* a1, unsigned __int16* a2,
                         unsigned __int16* a3, __int64 a4)
{
  __int64 v4;
  __int64* v8;
  __int64 v9;
  unsigned __int8* v10;
  __int64 v11;
  unsigned __int8* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  int v23;
  _DWORD* v24;
  _DWORD* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  int v30;
  unsigned __int16* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  bool v43;
  char v44;
  struct {
    __int64 (**v45)();
    __int64 v46;
    __int64 v47;
    __int64 v48;
    _QWORD* v49;
    char v50;
  } v45_;
  struct {
    __int64 (**v51)();
    __int64 v52;
    __int64 v53;
    __int64 v54;
    _QWORD* v55;
    char v56;
  } v51_;
  struct {
    __int64 (**v57)();
    __int64 v58;
    __int64 v59;
    __int64 v60;
  } v57_;
  struct {
    __int64 (**v61)();
    __int64 v62;
    __int64 v63;
    __int64 v64;
    _QWORD* v65;
    char v66;
  } v61_;
  __int64 v67;

  v51_.v56 = 0;
  v51_.v54 = 0;
  v51_.v55 = nullptr;
  v4 = *a3;
  v51_.v52 = 0;
  v51_.v53 = 0;
  v51_.v51 = nullptr;
  v8 = GameData_212c878[0];
  v9 = *(_QWORD*)(*GameData_212c878[0] + 64);
  v10 = *(unsigned __int8**)(v9 + 8 * v4);
  if (v10[72] <= 7u) {
    if ((*((_BYTE*)a3 + 3) & 0x20) != 0 || (v10[336] & 8) != 0 ||
        ((1LL << v10[73]) & 0x7DC) != 0) {
      GameRoutine_15a4580_alt1((__int64)&v61_.v61, a4, a3, 1);
    }
    else {
      v45_.v47 = 0;
      v45_.v48 = 0;
      v45_.v45 = game_UnitEquipScope_vtable;
      v45_.v46 = 0;
      if (a4 != 0) {
        v29 = *(_QWORD*)a3;
        v45_.v46 = a4;
        v45_.v47 = v29;
        v45_.v48 = *(_QWORD*)(a4 + 2208);
        *(_QWORD*)(a4 + 2208) = &v45_.v45;
        v30 = *(_DWORD*)(a4 + 416);
        if ((v30 & 0x10000000) == 0) {
          v31 = a3;
          *(_DWORD*)(a4 + 416) = v30 | 0x10000000;
          game_6c51e0_alt1(a4);
          GameRoutine_6c6da0_alt1(a4);
          game_6c6ec0_alt1(a4);
          a3 = v31;
          *(_DWORD*)(a4 + 416) &= ~0x10000000u;
        }
      }
      GameRoutine_15a4580_alt1((__int64)&v61_.v61, a4, a3, 1);
      v45_.v45 = game_UnitEquipScope_vtable;
      v32 = v45_.v46;
      if (v45_.v46 != 0 && *(__int64 (****)())(v45_.v46 + 2208) == &v45_.v45) {
        *(_QWORD*)(v45_.v46 + 2208) = v45_.v48;
        v33 = *(_DWORD*)(v32 + 416);
        if ((v33 & 0x10000000) == 0) {
          *(_DWORD*)(v32 + 416) = v33 | 0x10000000;
          game_6c51e0_alt1(v32);
          GameRoutine_6c6da0_alt1(v32);
          game_6c6ec0_alt1(v32);
          *(_DWORD*)(v32 + 416) &= ~0x10000000u;
        }
      }
    }
    v51_.v53 = v61_.v63;
    v51_.v54 = v61_.v64;
    v51_.v55 = v61_.v65;
    v51_.v56 = v61_.v66;
    v51_.v51 = v61_.v61;
    v51_.v52 = v61_.v62;
    v9 = *(_QWORD*)(*v8 + 64);
  }
  v11 = *a2;
  v45_.v50 = 0;
  v45_.v48 = 0;
  v45_.v49 = nullptr;
  v45_.v46 = 0;
  v45_.v47 = 0;
  v45_.v45 = nullptr;
  v12 = *(unsigned __int8**)(v9 + 8 * v11);
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v12[72] > 7u) {
    goto LABEL_20;
  }
  if ((*((_BYTE*)a2 + 3) & 0x20) != 0 || (v12[336] & 8) != 0 ||
      ((1LL << v12[73]) & 0x7DC) != 0) {
    GameRoutine_15a4580_alt1((__int64)&v61_.v61, a4, a2, 1);
  }
  else {
    v57_.v59 = 0;
    v57_.v60 = 0;
    v57_.v57 = game_UnitEquipScope_vtable;
    v57_.v58 = 0;
    if (a4 != 0) {
      v34 = *(_QWORD*)a2;
      v57_.v58 = a4;
      v57_.v59 = v34;
      v57_.v60 = *(_QWORD*)(a4 + 2208);
      *(_QWORD*)(a4 + 2208) = &v57_.v57;
      v35 = *(_DWORD*)(a4 + 416);
      if ((v35 & 0x10000000) == 0) {
        *(_DWORD*)(a4 + 416) = v35 | 0x10000000;
        game_6c51e0_alt1(a4);
        GameRoutine_6c6da0_alt1(a4);
        game_6c6ec0_alt1(a4);
        *(_DWORD*)(a4 + 416) &= ~0x10000000u;
      }
    }
    GameRoutine_15a4580_alt1((__int64)&v61_.v61, a4, a2, 1);
    v57_.v57 = game_UnitEquipScope_vtable;
    v36 = v57_.v58;
    if (v57_.v58 != 0 && *(__int64 (****)())(v57_.v58 + 2208) == &v57_.v57) {
      *(_QWORD*)(v57_.v58 + 2208) = v57_.v60;
      v37 = *(_DWORD*)(v36 + 416);
      if ((v37 & 0x10000000) == 0) {
        *(_DWORD*)(v36 + 416) = v37 | 0x10000000;
        game_6c51e0_alt1(v36);
        GameRoutine_6c6da0_alt1(v36);
        game_6c6ec0_alt1(v36);
        *(_DWORD*)(v36 + 416) &= ~0x10000000u;
      }
    }
  }
  v14 = *a2;
  v45_.v47 = v61_.v63;
  v45_.v48 = v61_.v64;
  v45_.v49 = v61_.v65;
  v45_.v50 = v61_.v66;
  v45_.v45 = v61_.v61;
  v45_.v46 = v61_.v62;
  v15 = *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v14);
  v16 = *(unsigned __int8*)(v15 + 72);
  if (v16 > 7) {
  LABEL_20:
    v24 = nullptr;
    v25 = nullptr;
    goto LABEL_21;
  }
  if ((_DWORD)v14 == 0) {
    v23 = 0;
    goto LABEL_47;
  }
  v17 = *(unsigned __int8*)(v15 + 73);
  if (v17 == 2) {
    v23 = 7;
    goto LABEL_47;
  }
  if (v17 != 1) {
    v23 = 3;
    goto LABEL_47;
  }
  v18 = *(_QWORD*)(v15 + 24);
  v20 = *(_QWORD*)(v18 + 8);
  v21 = *(_QWORD*)(v18 + 16);
  v19 = v18 + 8;
  v22 = *(unsigned int*)((char*)((_UNKNOWN*)0x70LL) +
                         game_g_shared_system_skills_ptr);
  LODWORD(v61_.v61) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x70LL) +
                                 game_g_shared_system_skills_ptr) &
                      0xFFF;
  if (((v22 >> 5) & 0x7F) + 1 <= (v21 - v20) >> 2 &&
      ((*(_DWORD*)(v20 + 4 * ((v22 >> 5) & 0x7F)) >> v22) & 1) != 0) {
    if (game_HasActiveSkill_843420_alt1(&v61_.v61, v19)) {
      v23 = 2;
      goto LABEL_47;
    }
    v16 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * *a2) +
                              72LL);
  }
  if (v16 - 5 >= 2) {
    v23 = 1;
  }
  else {
    v23 = 2;
  }
LABEL_47:
  v38 = fw_memory_HeapManager_Allocate(*v13, 32, 16, 0);
  v39 = *v8;
  *(_DWORD*)v38 = v23;
  v24 = (_DWORD*)(v38 + 32);
  v25 = (_DWORD*)v38;
  *(_QWORD*)(v38 + 4) = 0xD0000000ALL;
  *(_QWORD*)(v38 + 12) = 0xB00000014LL;
  *(_QWORD*)(v38 + 20) = 0x110000000CLL;
  *(_DWORD*)(v38 + 28) = 39;
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v39 + 64) + 8LL * *a2) + 72LL) == 7) {
    LayoutAccessor_1560070_alt1((void*)(&v61_.v61), a1, "L_InfoTitle");
    if (v61_.v62 != 0) {
      v40 = std___1___shared_weak_count_lock_alt1(v61_.v62);
      v41 = (__int64*)v61_.v61;
      if (v61_.v62 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v61_.v62);
      }
      if (v40 != 0 && v41 != nullptr) {
        v42 = ui_LayoutAccessor_FindPane_alt1(v41, (__int64)"T_Info");
        v43 =
            (*((_DWORD*)a2 + 1) & 0xF) == 0 ||
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * *a2) + 87LL) == 0;
        v44 = *(_BYTE*)(v42 + 88) & 0xFE;
        if (!v43) {
          ++v44;
        }
        *(_BYTE*)(v42 + 88) = v44;
      }
      else if (v40 == 0) {
        goto LABEL_21;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
        std___1___shared_weak_count___release_weak_alt2(v40);
      }
    }
  }
LABEL_21:
  v26 = *v13;
  v57_.v57 = (__int64 (**)(void))a2;
  v67 = a4;
  v27 = (_QWORD*)fw_memory_HeapManager_Allocate(v26, 40, 16, 0);
  v61_.v65 = v27;
  *v27 = GameData_204d3f8;
  v27[1] = &v57_.v57;
  v27[2] = &v45_.v45;
  v27[3] = &v51_.v51;
  v27[4] = &v67;
  GameHr_1586d80(a1, v25, v24, (__int64)&v61_.v61, 1, 0, 0, a4, 0, 0, 0);
  (*(void (**)(_QWORD*))(*v27 + 40LL))(v27);
  if (v25 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*v13 + 200) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v13 + v28, (__int64)v25);
  }
}

__n128 game_gameui_1590740(__int64* a1, unsigned int a2, unsigned int a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __n128 result;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __n128 v18;
  _QWORD v19[2];
  struct {
    __int64* v20;
    __int64 v21;
  } v20_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v6 = ui_LayoutAccessor_FindPane_alt1(a1, (__int64)"T_HPNum"),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v6 != 0) {
    v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d690, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v7 != 0) {
      GameRoutine_156c910(v7, (__int64)"%d", 1, a2),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v8 = ui_LayoutAccessor_FindPane_alt1(a1, (__int64)"T_HpMaxNum"),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v8 != 0) {
    v9 = __dynamic_cast(v8, GameData_212d670[0], GameData_212d690, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v9 != 0) {
      GameRoutine_156c910(v9, (__int64)"%d", 1, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v10 = ui_LayoutAccessor_FindAlignment(a1, (__int64)"A_HPNum"),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v10 != 0) {
    Alignment_56b600(v10),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v11 = a1[1];
    if (v11 != 0) {
      v12 = std___1___shared_weak_count_lock(v11),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v12 != 0) {
        v13 = v12;
        if (*a1 != 0) {
          ControlCreator_13633c0(*a1),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
    }
  }
  LayoutAccessor_1560070((void*)(&v20_.v20), a1, (__int64)"L_Gauge_HP"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v20_.v21 != 0) {
    v15 = std___1___shared_weak_count_lock(v20_.v21),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v16 = v20_.v20;
    if (v15 != 0) {
      v17 = v20_.v20;
    }
    else {
      v17 = nullptr;
    }
    if (v20_.v21 != 0) {
      result = std___1___shared_weak_count___release_weak();
    }
    if (v17 != nullptr) {
      LayoutAccessor_1562680(v16, (__int64)"Color_Player",
                             0x1.0000000000000p+0f),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v19[0] = v17;
      v19[1] = v15;
      if (v15 == 0) {
        PSEUDO_LOW_LANE128(v18, n128_f32, (float)(int)a2 / (float)(int)a3);
        return GameRoutine_174d580((__int64)v19, (__int64)"Gauge", 5, v18);
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                memory_order_relaxed);
      PSEUDO_LOW_LANE128(v18, n128_f32, (float)(int)a2 / (float)(int)a3);
      GameRoutine_174d580((__int64)v19, (__int64)"Gauge", 5, v18),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      result = std___1___shared_weak_count___release_weak();
    }
    else if (v15 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 16LL))(
          v15, *(long double*)&result),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      return std___1___shared_weak_count___release_weak();
    }
  }
  return result;
}

__int64 game_gameui_1590950(__int64* a1, int a2, int a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;

  v6 = ui_LayoutAccessor_FindPane_alt1(a1, (__int64)"T_LPNum");
  if (v6 != 0) {
    v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d690, 0);
    if (v7 != 0) {
      GameRoutine_156c910_alt2(v7, "%d", 1, (unsigned int)a2);
    }
  }
  v8 = ui_LayoutAccessor_FindPane_alt1(a1, (__int64)"T_LPMaxNum");
  if (v8 != 0) {
    v9 = __dynamic_cast(v8, GameData_212d670[0], GameData_212d690, 0);
    if (v9 != 0) {
      GameRoutine_156c910_alt2(v9, "%d", 1, (unsigned int)a3);
    }
  }
  v10 = ui_LayoutAccessor_FindAlignment(a1, (__int64)"A_LPNum");
  if (v10 != 0) {
    Alignment_56b600(v10);
    v11 = a1[1];
    if (v11 != 0) {
      v12 = std___1___shared_weak_count_lock_alt1(v11);
      if (v12 != 0) {
        v13 = v12;
        if (*a1 != 0) {
          ControlCreator_13633c0(*a1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak_alt2(v13);
        }
      }
    }
  }
  LayoutAccessor_1560070_alt1((void*)(&v18_.v18), a1, "L_Gauge_LP");
  result = v18_.v19;
  if (v18_.v19 != 0) {
    v15 = std___1___shared_weak_count_lock_alt1(v18_.v19);
    result = v18_.v19;
    if (v15 != 0) {
      v16 = v18_.v18;
    }
    else {
      v16 = 0;
    }
    if (v18_.v19 != 0) {
      result = std___1___shared_weak_count___release_weak_alt2(v18_.v19);
    }
    if (v16 != 0) {
      v17[0] = v16;
      v17[1] = v15;
      if (v15 == 0) {
        return GameRoutine_174d580_alt1((__int64)v17, "Gauge", 5,
                                        (float)a2 / (float)a3);
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_174d580_alt1((__int64)v17, "Gauge", 5, (float)a2 / (float)a3);
      result = std___1___shared_weak_count___release_weak_alt2(v15);
    }
    else if (v15 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      return std___1___shared_weak_count___release_weak_alt2(v15);
    }
  }
  return result;
}

bool game_gameui_1591680()
{
  __int64 v0;
  struct {
    _QWORD v2[4];
    _QWORD* v3;
  } v2_;
  __int64 v4;

  v4 = 0;
  v2_.v2[0] = GameData_204eca8;
  v2_.v2[1] = &v4;
  v2_.v3 = v2_.v2;
  GameRoutine_15b5f20((__int64)v2_.v2);
  if (v2_.v3 == v2_.v2) {
    v0 = 32;
    goto LABEL_5;
  }
  if (v2_.v3 != nullptr) {
    v0 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v2_.v3 + v0))((__int64)v2_.v3);
  }
  return v4 != 0;
}

__int64 game_gameui_1592340(__int64 result, __int64 a2, int a3)
{
  int v3;
  __int64* v5;
  int v6;
  __int64* v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  __int64* v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  __int64* v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if (a2 == 0) {
    return result;
  }
  v3 = *(unsigned __int8*)(a2 + 73);
  v5 = (__int64*)result;
  v6 = *(unsigned __int8*)(a2 + 72);
  if ((((0x10000000000LL << v6) | (1LL << v3)) & 0xFFBFFFFFFFA39FFFLL) != 0) {
    if (v3 == 21 || v6 == 14) {
      v25 = 0x100000000LL;
      LOWORD(v25) = *(_WORD*)(a2 + 16);
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * (unsigned __int16)v25) +
                    73LL) == 17) {
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v12 = game_map_MapRandom_instance__ptr[0];
        v13 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v15 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v12 + 1) = v13;
        v16 = (v15 >> 8) ^ (v14 >> 19) ^ v15 ^ v14;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) = v14;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4) = v16;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        HIDWORD(v25) =
            (16 * ((_WORD)v16 -
                   1000 * (unsigned __int16)((v16 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
      result = game_gameui_anonymous_15d2480_alt1((__int64)v5, (__int64)&v25);
      if (a3 < 2) {
        return result;
      }
    LABEL_17:
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v5, (__int64)"A_Quantity",
                                            1);
      v22 = ui_LayoutAccessor_FindPane_alt1(v5, (__int64)"T_QuantityNum");
      if (v22 != 0) {
        v23 = __dynamic_cast(v22, GameData_212d670[0], GameData_212d690, 0);
        if (v23 != 0) {
          GameRoutine_156c910_alt1(v23, "%d", 1, (unsigned int)a3);
        }
      }
      v24 = ui_LayoutAccessor_FindAlignment(v5, (__int64)"A_Quantity");
      if (v24 != 0) {
        Alignment_56b600(v24);
      }
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v5,
                                            (__int64)"L_InfoTitle/N_Count", 0);
      return ui_LayoutAccessor_SetPaneVisible_alt1(
          (__int64)v5, (__int64)"L_InfoTitle/T_Info", 0);
    }
    v25 = 0x100000000LL;
    LOWORD(v25) = *(_WORD*)(a2 + 16);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                             8LL * (unsigned __int16)v25) +
                  73LL) == 17) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v17 = game_map_MapRandom_instance__ptr[0];
      v18 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v19 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v20 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v17 + 1) = v18;
      v21 = (v20 >> 8) ^ (v19 >> 19) ^ v20 ^ v19;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17) = v19;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17 + 4) = v21;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      HIDWORD(v25) =
          (16 * ((_WORD)v21 -
                 1000 * (unsigned __int16)((v21 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    result = game_gameui_anonymous_15d23a0_alt1((__int64)v5, (__int64)&v25);
    if (a3 >= 2) {
      goto LABEL_17;
    }
  }
  else {
    v25 = 0x100000000LL;
    LOWORD(v25) = *(_WORD*)(a2 + 16);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                             8LL * (unsigned __int16)v25) +
                  73LL) == 17) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v7 = game_map_MapRandom_instance__ptr[0];
      v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL));
      v9 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v10 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v7 + 1) = v8;
      v11 = (v10 >> 8) ^ (v9 >> 19) ^ v10 ^ v9;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7) = v9;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 4) = v11;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      HIDWORD(v25) =
          (16 * ((_WORD)v11 -
                 1000 * (unsigned __int16)((v11 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    result = game_gameui_15d2910_alt1((__int64)v5, (unsigned __int16*)&v25);
    if (a3 >= 2) {
      goto LABEL_17;
    }
  }
  return result;
}

__n128 game_gameui_1593c60(__int64* a1, int a2)
{
  unsigned __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64* v7;
  __n128 result;
  _QWORD v10[2];
  struct {
    _QWORD v11[2];
    char v12;
    char gap41_[3];
    int v13;
    int v14;
    char v15;
    char gap53_[3];
    __int64 v16;
  } v11_;

  v4 = (unsigned __int64)(GameData_21ca248 - GameData_21ca240) >> 3;
  v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v5 != 0) {
    v6 = 0;
    do {
      v5 = *(_QWORD*)(v5 + 432);
      ++v6;
    } while (v5 != 0);
  }
  else {
    v6 = 0;
  }
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, (__int64)"L_Num", 1);
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, (__int64)"L_Num/L_KeyHelp",
                                        1);
  v7 = LayoutAccessor_155fbe0(a1, (__int64)"L_Num/L_KeyHelp");
  v11_.v12 = 1;
  v11_.v16 = 0;
  v11_.v11[0] = &GameData_1a9f09e;
  v11_.v11[1] = "MID_SysMenu_StartBattle";
  v11_.v13 = 11;
  v11_.v14 = a2;
  v11_.v15 = 3;
  GameRoutine_1593d90(v7, (__int64)v11_.v11);
  LayoutAccessor_1560070((void*)(v10), a1, (__int64)"L_Num");
  result = GameRoutine_15940f0((__int64)v10, v6, v4);
  if (v10[1] != 0) {
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64 game_gameui_1594bd0(__int64 a1, unsigned __int16* a2, char a3)
{
  __int64 v3;
  unsigned int v4;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  int v12;
  char v13;
  __int64 result;
  unsigned __int16* v15;
  __int64* v16;
  _DWORD* v17;
  __int64 v18;
  unsigned int v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;

  if (a2 != nullptr && *a2 != 0) {
    v11 =
        *(unsigned __int8**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
    if (a1 == 0) {
      return v11[88] >> ((*((_BYTE*)a2 + 3) & 8) != 0);
    }
    if (v11[72] <= 7u) {
      v12 = v11[73];
      if (v12 == 2) {
        if ((a3 & 1) != 0) {
          v15 = a2;
          v20_.v20[0] = GameData_204e998;
          v20_.v20[1] = a2;
          v20_.v21 = v20_.v20;
          v16 = (__int64*)(a1 + 1744);
          v17 = GameData_212c8a8;
        }
        else {
          v15 = a2;
          v20_.v20[0] = GameData_1f990c8;
          v20_.v21 = v20_.v20;
          v17 = GameData_212c8a8;
          v16 = GameData_212c950;
        }
        result = game_map_BattleUtil_GetHealPower(a1, 0, v15, v17, (__int64)v16,
                                                  (__int64)v20_.v20);
        if (v20_.v21 == v20_.v20) {
          v19 = result;
          v18 = 32;
        }
        else {
          if (v20_.v21 == nullptr) {
            return result;
          }
          v18 = 40;
          v19 = result;
        }
        (*(void (**)(_QWORD*))(*v20_.v21 + v18))(v20_.v21);
        return v19;
      }
      if (v12 != 1) {
        return v11[88] >> ((*((_BYTE*)a2 + 3) & 8) != 0);
      }
      v13 = a3 & 1;
      v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
      v4 = *(unsigned __int8*)(v3 + 72);
      if (v4 > 7 || *(_BYTE*)(v3 + 73) != 1) {
        return 0;
      }
      v6 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 8LL);
      v7 = *(unsigned int*)((char*)((_UNKNOWN*)0x60LL) +
                            game_g_shared_system_skills_ptr + 4);
      v8 = (*(_QWORD*)(*(_QWORD*)(v3 + 24) + 16LL) - v6) >> 2;
      if (v8 >= ((v7 >> 5) & 0x7F) + 1 &&
          ((*(_DWORD*)(v6 + 4 * ((v7 >> 5) & 0x7F)) >> v7) & 1) != 0) {
        v9 = 0;
      }
      else {
        v10 = *(unsigned int*)((char*)((_UNKNOWN*)0x6CLL) +
                               game_g_shared_system_skills_ptr);
        v9 = v8 >= ((v10 >> 5) & 0x7F) + 1 &&
                 ((*(_DWORD*)(v6 + 4 * ((v10 >> 5) & 0x7F)) >> v10) & 1) != 0 ||
             v4 - 5 < 2;
      }
      return game_Unit_GetAttack(a1, v9,
                                 *(unsigned __int8*)(v3 + 88) >>
                                     ((*((_BYTE*)a2 + 3) & 8) != 0),
                                 1, v13 & 1);
    }
  }
  return 0;
}

__attribute__((swiftcall)) void

game_gameui_1594d10(PSEUDO_X8 x8_, _WORD* result, int a2, __int64 a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int8* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v9;
  unsigned __int8* v10;
  bool v11;
  int v12;
  bool v13;
  unsigned __int8* v14;
  __int64 v15;
  unsigned __int8* v16;
  __int64 v17;
  _WORD* v18;
  int v19;
  __int64 v20;
  unsigned __int8* v21;
  int v22;
  _BYTE* v23;
  bool v24;
  unsigned __int8* v25;
  int v26;
  __int64 v27;
  unsigned int v28;
  int v29;
  bool v31;
  int v33;

  if (result == nullptr) {
    goto LABEL_64;
  }
  v4 = (unsigned __int8*)(unsigned __int16)*result;
  v5 = GameData_212c878[0];
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * (_QWORD)v4);
  if (a3 == 0) {
    v10 = *(unsigned __int8**)(v6 + 192);
    v11 = v10 == nullptr || *(unsigned __int8*)(v6 + 72) > 7u;
    if (v11 || v10[105] == 0) {
      v10 = nullptr;
      v14 = (unsigned __int8*)(v6 + 92);
    }
    else {
      v12 = v10[104];
      v13 = v12 == 2;
      if (v12 == 2) {
        v10 = nullptr;
      }
      v14 = v10 + 278;
      if (v13) {
        v14 = (unsigned __int8*)(v6 + 92);
      }
    }
    v9 = *v14;
    if (v10 != nullptr) {
      v4 = v10 + 279;
    }
    else {
      v4 = (unsigned __int8*)(v6 + 93);
    }
    LODWORD(v4) = *v4;
    goto LABEL_43;
  }
  if (*result != 0) {
    v7 = *(_QWORD*)(v6 + 192);
    if (v7 == 0 || *(unsigned __int8*)(v6 + 72) > 7u) {
      v9 = *(unsigned __int8*)(v6 + 92);
    }
    else {
      if (*(_BYTE*)(v7 + 105) != 0) {
        if (*(_BYTE*)(v7 + 104) == 2) {
          v15 = 0;
        }
        else {
          v15 = *(_QWORD*)(v6 + 192);
        }
      }
      else {
        v15 = 0;
      }
      if (v15 != 0) {
        v16 = (unsigned __int8*)(v15 + 278);
      }
      else {
        v16 = (unsigned __int8*)(v6 + 92);
      }
      v9 = *v16;
      if (*(_BYTE*)(v7 + 105) != 0) {
        v17 = a4;
        v18 = result;
        v19 = a2;
        if (*(_BYTE*)(v7 + 104) == 2) {
          v20 = 0;
        }
        else {
          v20 = *(_QWORD*)(v6 + 192);
        }
      LABEL_39:
        if (v20 != 0) {
          v21 = (unsigned __int8*)(v20 + 279);
        }
        else {
          v21 = (unsigned __int8*)(v6 + 93);
        }
        v22 = *v21;
        LODWORD(v4) = game_UnitSkillList_GetRangeAddImpl(
                          a3 + 1744, *(_QWORD*)(v6 + 24) + 8LL) +
                      v22;
        a4 = v17;
        a2 = v19;
        result = v18;
        goto LABEL_43;
      }
    }
    v18 = result;
    v19 = a2;
    v17 = a4;
    v20 = 0;
    goto LABEL_39;
  }
  v9 = 0;
LABEL_43:
  if ((int)v4 + v9 >= 1) {
    v23 = *(_BYTE**)(v6 + 192);
    v24 = v23 == nullptr || *(unsigned __int8*)(v6 + 72) > 7u;
    if (v24 || v23[105] == 0) {
      v23 = nullptr;
    }
    else if (v23[104] == 2) {
      v23 = nullptr;
    }
    *(_DWORD*)a4 = a2;
    *(_QWORD*)(a4 + 32) = 0;
    *(_QWORD*)(a4 + 40) = 0;
    if (v23 != nullptr) {
      v25 = v23 + 279;
    }
    else {
      v25 = (unsigned __int8*)(v6 + 93);
    }
    *(_QWORD*)(a4 + 48) = 0;
    *(_DWORD*)(a4 + 56) = 0;
    v26 = *v25;
    *(_WORD*)(a4 + 4) = 1;
    *(_DWORD*)(a4 + 16) = v9;
    *(_DWORD*)(a4 + 8) = -1;
    goto LABEL_57;
  }
  if (((unsigned int)v4 | v9) == 0) {
    v27 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (unsigned __int16)*result);
    v28 = *(unsigned __int8*)(v27 + 72);
    v29 = *(unsigned __int8*)(v27 + 73);
    if (v28 > 7 || v29 != 1) {
      *(_QWORD*)(a4 + 32) = 0;
      *(_QWORD*)(a4 + 40) = 0;
      *(_QWORD*)(a4 + 48) = 0;
      *(_DWORD*)(a4 + 56) = 0;
      *(_DWORD*)a4 = 19;
      LODWORD(v4) = *(unsigned __int8*)(v6 + 74);
      *(_WORD*)(a4 + 4) = 1;
      v26 = -1;
      *(_DWORD*)(a4 + 8) = -1;
      *(_DWORD*)(a4 + 16) = (_DWORD)v4;
    LABEL_57:
      *(_DWORD*)(a4 + 20) = (_DWORD)v4;
      *(_DWORD*)(a4 + 24) = v26;
      {
        result;
        return;
      }
    }
  }
LABEL_64:
  *(_DWORD*)a4 = a2;
  *(_WORD*)(a4 + 4) = 0;
  *(_QWORD*)(a4 + 32) = 0;
  *(_QWORD*)(a4 + 40) = 0;
  *(_QWORD*)(a4 + 48) = 0;
  *(_DWORD*)(a4 + 56) = 0;
  *(_DWORD*)(a4 + 8) = -1;
  *(_BYTE*)(a4 + 16) = 1;
  if (a2 != 40) {
    result;
    return;
  }
  if ((unsigned __int8)GameData_21759e0 == 122) {
    v33 = 41;
    if ((GameData_21759e0 & 0xFFFFFF000000LL) != 0x6E6148000000LL ||
        BYTE1(GameData_21759e0) != 104 || BYTE2(GameData_21759e0) != 45) {
      goto LABEL_88;
    }
    if (BYTE6(GameData_21759e0) != 116 && BYTE6(GameData_21759e0) != 115 ||
        HIBYTE(GameData_21759e0) != 0) {
      goto LABEL_87;
    }
  }
  else if ((unsigned __int8)GameData_21759e0 == 107) {
    if (BYTE1(GameData_21759e0) != 111 || BYTE2(GameData_21759e0) != 0) {
      goto LABEL_87;
    }
  }
  else if ((unsigned __int8)GameData_21759e0 != 106 ||
           (BYTE1(GameData_21759e0) == 97 ? (v31 = BYTE2(GameData_21759e0) == 0)
                                          : (v31 = false),
            !v31)) {
  LABEL_87:
    v33 = 41;
    goto LABEL_88;
  }
  v33 = 40;
LABEL_88:
  *(_DWORD*)a4 = v33;
  {
    result;
    return;
  }
}

void game_gameui_1596b00(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float v11;
  int v12;
  float v13;
  float v14;
  bool v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  char* v22;
  float v23;
  float v24;
  __int64 v25;
  unsigned __int64 v26;
  char v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  struct {
    __int64 v46;
    __int64 v47;
    int v48;
    char v49;
  } v46_;

  v3 = *(_QWORD*)(a1 + 16);
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock_alt1(v3);
    if (v4 != 0) {
      v5 = *(__int64**)(a1 + 8);
      v6 = v4;
      if (v5 == nullptr) {
        goto LABEL_61;
      }
      v7 = *(_QWORD*)(a1 + 16);
      if (v7 == 0) {
        goto LABEL_61;
      }
      v8 = std___1___shared_weak_count_lock_alt1(v7);
      if (v8 == 0) {
        goto LABEL_61;
      }
      v9 = *(_QWORD*)(a1 + 8);
      v10 = v8;
      if (v9 != 0) {
        v1 = LayoutAccessor_155ea30(*(__int64**)(a1 + 8)) ^ 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak_alt2(v10);
      }
      if (((v9 == 0) | v1 & 1) != 0) {
        goto LABEL_61;
      }
      if (0xAAAAAAAAAAAAAAABLL *
              ((__int64)(*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 4) >=
          2) {
        v11 = LayoutAccessor_15637c0(v5, (__int64)"Change", 1);
        v12 = *(_DWORD*)(a1 + 60);
        v13 = v11 + *(float*)(as_g_base_frame_counter + 104);
        v14 = 0x1.3000000000000p+7f;
        if (v12 == 0) {
          v14 = 0x1.2000000000000p+6f;
        }
        if (*(float*)(a1 + 68) >= v14 || v13 < v14) {
          *(float*)(a1 + 68) = v13;
        }
        else {
          v15 = v12 < -1;
          v16 = *(_QWORD*)(a1 + 16);
          *(_BYTE*)(a1 + 64) = 1;
          v17 = ((_BYTE)v12 + 1) & 1;
          if (v15) {
            v18 = -v17;
          }
          else {
            v18 = v17;
          }
          *(_DWORD*)(a1 + 56) =
              (*(int*)(a1 + 56) + 1LL) %
              (0xAAAAAAAAAAAAAAABLL *
               ((__int64)(*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 4));
          *(_DWORD*)(a1 + 60) = v18;
          if (v16 == 0) {
            goto LABEL_26;
          }
          v19 = std___1___shared_weak_count_lock_alt1(v16);
          if (v19 == 0) {
            goto LABEL_26;
          }
          v20 = *(__int64**)(a1 + 8);
          v21 = v19;
          if (v20 != nullptr) {
            v22 = game_util_Format_alt2("L_Icon%02d", v18);
            LayoutAccessor_1560070_alt1((void*)(&v46_.v46), v20, v22);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
            std___1___shared_weak_count___release_weak_alt2(v21);
          }
          if (v20 == nullptr) {
          LABEL_26:
            v46_.v46 = 0;
            v46_.v47 = 0;
          }
          v23 = LayoutAccessor_15638b0_alt1(v5, "Change", 1);
          v24 = fmodf(v13, v23);
          v25 = v46_.v47;
          *(float*)(a1 + 68) = v24;
          if (v25 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v25);
          }
        }
      }
      if (*(_BYTE*)(a1 + 64) == 1) {
        v26 = 0xAAAAAAAAAAAAAAABLL *
              ((__int64)(*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 4);
        v27 = LayoutAccessor_1563280(v5, (__int64)"Change", 1);
        if (v26 < 2) {
          if ((v27 & 1) != 0) {
            LayoutAccessor_15636c0_alt1((__int64)v5, (__int64)"Change", 1,
                                        0x0.0p+0f);
            LayoutAccessor_1563030_alt1((__int64)v5, (__int64)"Change", 0);
            *(_DWORD*)(a1 + 60) = 0;
          }
        }
        else {
          if ((v27 & 1) == 0) {
            GameHr_1562680((__int64)v5, "Change", 0x1.0000000000000p+0f);
          }
          v28 = GameData_2259360[*(int*)(a1 + 28)] +
                (float)((float)(nn_os_ConvertToTimeSpan(
                                    *(_QWORD*)(as_g_base_frame_counter + 128)) /
                                1000) /
                        0x1.04ad660000000p+14f);
          v29 = LayoutAccessor_15638b0_alt1(v5, "Change", 1);
          v30 = fmodf(v28, v29);
          LayoutAccessor_15636c0_alt1((__int64)v5, (__int64)"Change", 1, v30);
        }
      }
      if (*(_BYTE*)(a1 + 64) == 1) {
        v31 = *(_QWORD*)(a1 + 32);
        v32 = *(_QWORD*)(a1 + 40);
        if (v31 != v32) {
          v33 = *(_QWORD*)(a1 + 16);
          v34 = -1 - 1431655765 * ((unsigned __int64)(v32 - v31) >> 4);
          v35 = *(_DWORD*)(a1 + 56);
          if (v34 >= v35) {
            v34 = *(_DWORD*)(a1 + 56);
          }
          if (v35 < 0) {
            v34 = 0;
          }
          *(_DWORD*)(a1 + 56) = v34;
          if (v33 != 0) {
            v36 = *(_DWORD*)(a1 + 60);
            v37 = std___1___shared_weak_count_lock_alt1(v33);
            if (v37 != 0) {
              v38 = *(__int64**)(a1 + 8);
              v39 = v37;
              if (v38 != nullptr) {
                v40 = game_util_Format_alt2("L_Icon%02d", v36);
                LayoutAccessor_1560070_alt1((void*)(&v46_.v46), v38, v40);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
                std___1___shared_weak_count___release_weak_alt2(v39);
              }
              if (v38 != nullptr && v46_.v47 != 0) {
                v41 = std___1___shared_weak_count_lock_alt1(v46_.v47);
                v42 = v46_.v46;
                if (v46_.v47 != 0) {
                  std___1___shared_weak_count___release_weak_alt2(v46_.v47);
                }
                if (v41 != 0 && v42 != 0) {
                  v43 = *(_DWORD*)(a1 + 24);
                  v46_.v46 = v42;
                  BYTE4(v46_.v47) = 0;
                  v46_.v48 = 0;
                  LODWORD(v46_.v47) = v43;
                  LayoutAccessor_1562cf0_alt2(v42, "Status_Default");
                  LayoutAccessor_1562cf0_alt2(v42, "Enable");
                  v44 = *(_QWORD*)(a1 + 32);
                  v46_.v49 = 1;
                  v45 = *(_QWORD*)(v44 + 48LL * *(int*)(a1 + 56) + 32);
                  if (v45 == 0) {
                    GameRoutine_60a310();
                  }
                  (*(void (**)(__int64, __int64*))(*(_QWORD*)v45 + 48LL))(
                      v45, &v46_.v46);
                  GameRoutine_1595ff0((__int64)&v46_.v46);
                  goto LABEL_58;
                }
                if (v41 != 0) {
                LABEL_58:
                  if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
                    std___1___shared_weak_count___release_weak_alt2(v41);
                  }
                }
              }
            }
          }
        }
      }
      *(_BYTE*)(a1 + 64) = 0;
    LABEL_61:
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt2(v6);
      }
    }
  }
}

__n128 game_gameui_15970e0(__int64 a1, unsigned int a2, char* a3, __int64 a4,
                           char a5)
{
  __int64 v9;
  __int64 v10;
  __int64* v16;
  __n128 result;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  char v25;
  char* v26;
  char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  char* v41;
  __int64 v42;
  char v43;
  char* v44;
  char* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  char* v59;
  __int64 v60;
  char v61;
  char* v62;
  char* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  char* v67;
  __int64 v68;
  char* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  struct {
    __int64 v75;
    unsigned __int64 v76;
  } v75_;
  struct {
    _QWORD v77[2];
    unsigned __int64 v78;
  } v77_;
  struct {
    char* v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 vars0;
    __int64 vars8;
  } v79_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(a1 + 8) = 0;
  if (a2 == 32 ||
      (v9 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)a1,
                                            (__int64)"IconFacility")) == 0 ||
      (v10 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d678[0], 0)) ==
          0 ||
      (GameRoutine_1842580(v10, a2, (__int64)a3) & 1) == 0) {
    v16 = *(__int64**)a1;
    *(_BYTE*)(a1 + 8) = 1;
    LayoutAccessor_155e830(v16, 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return result;
  }
  LayoutAccessor_155e830(*(__int64**)a1, 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((a5 & 1) != 0) {
    if ((GameRoutine_ffccc0(a2, (__int64)a3) & 1) != 0) {
      v79_.v80 = v79_.vars0;
      v79_.v81 = v79_.vars8;
      v18 = (__int64*)a1;
      v19 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)a1,
                                            (__int64)"IconStatus"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v20 = __dynamic_cast(v19, GameData_212d670[0], GameData_212d678[0], 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_BYTE*)(v20 + 88) |= 1u;
      v21 = strlen("Status"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_53;
      }
      v22 = v21;
      if (v21 >= 0x17) {
        if ((v21 | 7) == 0x17) {
          v24 = 26;
        }
        else {
          v24 = (v21 | 7) + 1;
        }
        v23 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v24, 16, 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v77_.v78 = v22;
        v79_.v79 = v23;
        v77_.v77[1] = v24 | 1;
      }
      else {
        LOBYTE(v77_.v77[1]) = 2 * v21;
        v23 = (char*)&v77_.v77[1] + 1;
        if (v21 == 0) {
        LABEL_24:
          v23[v22] = 0;
          v25 = v77_.v77[1];
          v26 = v79_.v79;
          if ((v77_.v77[1] & 1) != 0) {
            v27 = v79_.v79;
          }
          else {
            v27 = (char*)&v77_.v77[1] + 1;
          }
          if ((v77_.v77[1] & 1) != 0) {
            v28 = v77_.v78;
          }
          else {
            v28 = (unsigned __int64)LOBYTE(v77_.v77[1]) >> 1;
          }
          v29 = v28 + 6;
          if (v28 + 6 < 0xFFFFFFFFFFFFFFF7LL) {
            v30 = *v18;
            if (v29 >= 0x17) {
              if ((v29 | 7) == 0x17) {
                v32 = 26;
              }
              else {
                v32 = (v29 | 7) + 1;
              }
              v31 = (char*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v32, 16, 0),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
              v75_.v76 = v28 + 6;
              v77_.v77[0] = v31;
              v75_.v75 = v32 | 1;
            }
            else {
              v75_.v76 = 0;
              v77_.v77[0] = 0;
              v75_.v75 = (unsigned __int8)(2 * v29);
              v31 = (char*)&v75_.v75 + 1;
              if (v28 == 0) {
                goto LABEL_39;
              }
            }
            memmove(v31, v27, v28),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          LABEL_39:
            strcpy(&v31[v28], "_Check");
            if ((v75_.v75 & 1) != 0) {
              v33 = (char*)v77_.v77[0];
            }
            else {
              v33 = (char*)&v75_.v75 + 1;
            }
            LayoutAccessor_1562cf0_alt1(v30, (__int64)v33),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            if ((v75_.v75 & 1) != 0 && v77_.v77[0] != 0) {
              v34 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v34 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v34);
            }
            if ((v25 & 1) != 0 && v26 != nullptr) {
              v35 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v35 = 56;
              }
              return nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v35);
            }
            return result;
          }
        LABEL_53:
          String_60a1d0(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      memcpy(v23, "Status", v22),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_24;
    }
    if ((GameRoutine_ffc660(a2, a3) & 1) != 0) {
      if (a2 <= 0x1C && ((1 << a2) & 0x19C00000) != 0) {
        v79_.v80 = v79_.vars0;
        v79_.v81 = v79_.vars8;
        v36 = (__int64*)a1;
        v37 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)a1,
                                              (__int64)"IconStatus"),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v38 = __dynamic_cast(v37, GameData_212d670[0], GameData_212d678[0], 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        *(_BYTE*)(v38 + 88) |= 1u;
        v39 = strlen("Status"),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v39 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_92;
        }
        v40 = v39;
        if (v39 >= 0x17) {
          if ((v39 | 7) == 0x17) {
            v42 = 26;
          }
          else {
            v42 = (v39 | 7) + 1;
          }
          v41 = (char*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v42, 16, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          v77_.v78 = v40;
          v79_.v79 = v41;
          v77_.v77[1] = v42 | 1;
        }
        else {
          LOBYTE(v77_.v77[1]) = 2 * v39;
          v41 = (char*)&v77_.v77[1] + 1;
          if (v39 == 0) {
          LABEL_63:
            v41[v40] = 0;
            v43 = v77_.v77[1];
            v44 = v79_.v79;
            if ((v77_.v77[1] & 1) != 0) {
              v45 = v79_.v79;
            }
            else {
              v45 = (char*)&v77_.v77[1] + 1;
            }
            if ((v77_.v77[1] & 1) != 0) {
              v46 = v77_.v78;
            }
            else {
              v46 = (unsigned __int64)LOBYTE(v77_.v77[1]) >> 1;
            }
            v47 = v46 + 11;
            if (v46 + 11 < 0xFFFFFFFFFFFFFFF7LL) {
              v48 = *v36;
              if (v47 >= 0x17) {
                if ((v47 | 7) == 0x17) {
                  v50 = 26;
                }
                else {
                  v50 = (v47 | 7) + 1;
                }
                v49 = (char*)fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v50, 16, 0),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
                v75_.v76 = v46 + 11;
                v77_.v77[0] = v49;
                v75_.v75 = v50 | 1;
              }
              else {
                v75_.v76 = 0;
                v77_.v77[0] = 0;
                v75_.v75 = (unsigned __int8)(2 * v47);
                v49 = (char*)&v75_.v75 + 1;
                if (v46 == 0) {
                  goto LABEL_78;
                }
              }
              memmove(v49, v45, v46),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
            LABEL_78:
              strcpy(&v49[v46], "_Acceptable");
              if ((v75_.v75 & 1) != 0) {
                v51 = (char*)v77_.v77[0];
              }
              else {
                v51 = (char*)&v75_.v75 + 1;
              }
              LayoutAccessor_1562cf0_alt1(v48, (__int64)v51),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              if ((v75_.v75 & 1) != 0 && v77_.v77[0] != 0) {
                v52 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v52 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v52);
              }
              if ((v43 & 1) != 0 && v44 != nullptr) {
                v53 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v53 = 56;
                }
                return nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v53);
              }
              return result;
            }
          LABEL_92:
            String_60a1d0(),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
        memcpy(v41, "Status", v40),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        goto LABEL_63;
      }
      v79_.v80 = v79_.vars0;
      v79_.v81 = v79_.vars8;
      v54 = (__int64*)a1;
      v55 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)a1,
                                            (__int64)"IconStatus"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v56 = __dynamic_cast(v55, GameData_212d670[0], GameData_212d678[0], 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_BYTE*)(v56 + 88) |= 1u;
      v57 = strlen("Status"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v57 >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_131:
        String_60a1d0(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v58 = v57;
      if (v57 >= 0x17) {
        if ((v57 | 7) == 0x17) {
          v60 = 26;
        }
        else {
          v60 = (v57 | 7) + 1;
        }
        v59 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v60, 16, 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v77_.v78 = v58;
        v79_.v79 = v59;
        v77_.v77[1] = v60 | 1;
        goto LABEL_101;
      }
      LOBYTE(v77_.v77[1]) = 2 * v57;
      v59 = (char*)&v77_.v77[1] + 1;
      if (v57 != 0) {
      LABEL_101:
        memcpy(v59, "Status", v58),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v59[v58] = 0;
      v61 = v77_.v77[1];
      v62 = v79_.v79;
      if ((v77_.v77[1] & 1) != 0) {
        v63 = v79_.v79;
      }
      else {
        v63 = (char*)&v77_.v77[1] + 1;
      }
      if ((v77_.v77[1] & 1) != 0) {
        v64 = v77_.v78;
      }
      else {
        v64 = (unsigned __int64)LOBYTE(v77_.v77[1]) >> 1;
      }
      v65 = v64 + 4;
      if (v64 + 4 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_131;
      }
      v66 = *v54;
      if (v65 >= 0x17) {
        if ((v65 | 7) == 0x17) {
          v68 = 26;
        }
        else {
          v68 = (v65 | 7) + 1;
        }
        v67 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v68, 16, 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v75_.v76 = v64 + 4;
        v77_.v77[0] = v67;
        v75_.v75 = v68 | 1;
      }
      else {
        v75_.v76 = 0;
        v77_.v77[0] = 0;
        v75_.v75 = (unsigned __int8)(2 * v65);
        v67 = (char*)&v75_.v75 + 1;
        if (v64 == 0) {
          goto LABEL_117;
        }
      }
      memmove(v67, v63, v64),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_117:
      strcpy(&v67[v64], "_New");
      if ((v75_.v75 & 1) != 0) {
        v69 = (char*)v77_.v77[0];
      }
      else {
        v69 = (char*)&v75_.v75 + 1;
      }
      LayoutAccessor_1562cf0_alt1(v66, (__int64)v69),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((v75_.v75 & 1) != 0 && v77_.v77[0] != 0) {
        v70 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v70 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v70);
      }
      if ((v61 & 1) != 0 && v62 != nullptr) {
        v71 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v71 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v71);
      }
      return result;
    }
  }
  v79_.v82 = v79_.vars0;
  v79_.v83 = v79_.vars8;
  v72 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)a1, (__int64)"IconStatus"),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v73 = __dynamic_cast(v72, GameData_212d670[0], GameData_212d678[0], 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v73 + 88) &= ~1u;
  memcpy(&v79_.v79, "Status", 6),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v74 = *(__int64**)a1;
  BYTE6(v79_.v79) = 0;
  v77_.v77[1] = 0;
  v77_.v78 = 0;
  v77_.v77[0] = 28;
  memcpy((char*)v77_.v77 + 1, &v79_.v79, 6),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  strcpy((char*)v77_.v77 + 7, "_Default");
  LayoutAccessor_1562cf0_alt1((__int64)v74, (__int64)v77_.v77 + 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  return result;
}

__n128 game_gameui_1597c00(__int64* a1, char a2)
{

#pragma clang fp contract(off)
  __n128 result;
  __int64 v4;
  __int64 v5;
  _QWORD v7[2];
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  v7[0] = "L_Special";
  v7[1] = 9;
  result = X8CALL_V0(__n128, GameRoutine_1114920((void*)(&v8_.v8), a1, v7));
  if (v8_.v9 != 0) {
    v4 = std___1___shared_weak_count_lock(v8_.v9);
    v5 = v8_.v8;
    if (v8_.v9 != 0) {
      result = std___1___shared_weak_count___release_weak();
    }
    if (v4 == 0 || v5 == 0) {
      if (v4 == 0) {
        return result;
      }
    }
    else {
      (*(void (**)(__int64, _QWORD, long double))(*(_QWORD*)v5 + 40LL))(
          v5, a2 & 1, *(long double*)&result);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 16LL))(
          v4, *(long double*)&result);
      return std___1___shared_weak_count___release_weak();
    }
  }
  return result;
}

__int64 game_gameui_15999a0(__int64* a1, int a2, int a3, __int64** a4)
{
  __int64 v8;
  __int64* v9;
  char* v11;
  char* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  int v16;
  __int64 v17;
  char* v18;
  __int64 result;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  __int16 v27;
  unsigned __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  _BYTE v36[20];
  _QWORD v37[2];
  _QWORD** v38;
  struct {
    _QWORD* v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    _BYTE* v43;
    __int64 v44;
    int v45;
  } v39_;

  LayoutAccessor_1560070_alt1((void*)(v36), a1, "L_Condition");
  if (*(_QWORD*)&v36[8] != 0) {
    v8 = std___1___shared_weak_count_lock_alt1(*(__int64*)&v36[8]);
    v9 = *(__int64**)v36;
    if (*(_QWORD*)&v36[8] != 0) {
      std___1___shared_weak_count___release_weak_alt2(*(__int64*)&v36[8]);
    }
    if (v8 == 0 || v9 == nullptr) {
      if (v8 == 0) {
        goto LABEL_15;
      }
    }
    else {
      v11 = game_util_Format_alt2("Item%02d", a2 - 1);
      LayoutAccessor_1562cf0_alt2((__int64)v9, v11);
      v12 = game_util_Format_alt2("%d", a3);
      v13 = ui_LayoutAccessor_FindTextBox_alt1(v9, (__int64)"T_TotalMaxNum");
      if (v13 != 0) {
        GameRoutine_156c5d0_alt1(v13, (__int64)v12, 0);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt2(v8);
    }
  }
LABEL_15:
  v15 = *a4;
  v14 = a4[1];
  if (*a4 == v14) {
    v16 = 0;
    while (1) {
    LABEL_50:
      v32 = game_util_Format_alt2("L_Condition/L_ConditionItem%02d", v16);
      LayoutAccessor_1560070_alt1((void*)(v36), a1, v32);
      result = *(_QWORD*)&v36[8];
      if (*(_QWORD*)&v36[8] != 0) {
        v33 = std___1___shared_weak_count_lock_alt1(*(__int64*)&v36[8]);
        v34 = *(_QWORD*)v36;
        result = *(_QWORD*)&v36[8];
        if (*(_QWORD*)&v36[8] != 0) {
          result = std___1___shared_weak_count___release_weak_alt2(
              *(__int64*)&v36[8]);
        }
        if (v33 != 0 && v34 != 0) {
          result = LayoutAccessor_155e830_alt2(v34, 0);
        LABEL_57:
          if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
            result = std___1___shared_weak_count___release_weak_alt2(v33);
          }
          goto LABEL_49;
        }
        if (v33 != 0) {
          goto LABEL_57;
        }
      }
    LABEL_49:
      if (++v16 == 6) {
        return result;
      }
    }
  }
  v16 = 0;
  v35 = v14;
  do {
    v17 = *v15;
    v18 = game_util_Format_alt2("L_Condition/L_ConditionItem%02d",
                                (unsigned int)v16);
    LayoutAccessor_1560070_alt1((void*)(v36), a1, v18);
    result = *(_QWORD*)&v36[8];
    if (*(_QWORD*)&v36[8] == 0) {
      goto LABEL_17;
    }
    v20 = std___1___shared_weak_count_lock_alt1(*(__int64*)&v36[8]);
    v21 = *(__int64**)v36;
    result = *(_QWORD*)&v36[8];
    if (*(_QWORD*)&v36[8] != 0) {
      result =
          std___1___shared_weak_count___release_weak_alt2(*(__int64*)&v36[8]);
    }
    if (v20 != 0 && v21 != nullptr) {
      if (v17 != 0) {
        v17 = *(unsigned __int16*)(v17 + 16);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v17) +
                      73LL) == 17) {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v22 = game_map_MapRandom_instance__ptr[0];
          v23 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v24 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v25 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v22 + 1) = v23;
          v26 = (v25 >> 8) ^ (v24 >> 19) ^ v25 ^ v24;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22) = v24;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22 + 4) = v26;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          v27 = v26 - 1000 * ((v26 & 0x7FFFFFFFu) / 0x3E8);
          v14 = v35;
          v28 = (unsigned __int64)((16 * v27 + 16) & 0x3FF0 | 1u) << 32;
        }
        else {
          v28 = 0x100000000LL;
        }
      }
      else {
        v28 = 0;
      }
      *(_QWORD*)&v36[4] = v28 | v17;
      *(_DWORD*)v36 = 8;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v29 = *GameData_212ceb0;
      }
      else {
        v29 = 0;
      }
      *(_QWORD*)&v36[12] = v29;
      WORD1(v37[0]) = 0;
      HIDWORD(v37[0]) = 0;
      v39_.v39 = nullptr;
      v39_.v40 = 0;
      v38 = &v39_.v39;
      v39_.v41 = 0;
      v39_.v42 = 0;
      v39_.v43 = nullptr;
      GameRoutine_930b90_alt1((__int64)v37, (__int64)GameData_212c8b0[0]);
      v39_.v44 = 0;
      v39_.v45 = -1;
      GameRoutine_157a1e0_alt1(v21, (unsigned int*)v36, 1u, 0, 1, 0, 0);
      LODWORD(v37[1]) = 0;
      v37[0] = 0;
      if ((v39_.v41 & 1) != 0) {
        *v39_.v43 = 0;
        v39_.v42 = 0;
      }
      else {
        LOWORD(v39_.v41) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)&v38, v39_.v39);
      v39_.v39 = nullptr;
      v39_.v40 = 0;
      v38 = &v39_.v39;
      if ((v39_.v41 & 1) != 0) {
        v30 = v39_.v43;
        if (v39_.v43 != nullptr) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, (__int64)v39_.v43);
          v30 = v39_.v39;
        }
      }
      else {
        v30 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)&v38, v30);
      LayoutAccessor_155e830_alt2((__int64)v21, 1);
      result = LayoutAccessor_1562cf0_alt2((__int64)v21, "NumOff");
      ++v16;
    }
    else if (v20 == 0) {
      goto LABEL_17;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      result = std___1___shared_weak_count___release_weak_alt2(v20);
    }
  LABEL_17:
    ++v15;
  } while (v15 != v14);
  if (v16 <= 5) {
    goto LABEL_50;
  }
  return result;
}

__n128 game_gameui_159a5c0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  char v8;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __n128 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  _DWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  _DWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _DWORD* v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int8** v50;
  unsigned __int8** v51;
  __int64* v52;
  unsigned __int8* v53;
  __int64 v54;
  unsigned __int8* v55;
  bool v56;
  int v57;
  __int64 v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  unsigned int v65;
  __int64 v66;
  __int64 v67;
  unsigned int* v68;
  unsigned int* v69;
  __int64 v70;
  char v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  struct {
    __int64 v75[2];
    __int64 v76;
  } v75_;
  struct {
    __int64 v77;
    unsigned __int64 v78;
    __int64 v79;
  } v77_;
  _WORD v80[12];
  struct {
    __int64 v81;
    __int64 v82;
    char* v83;
  } v81_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v8 = a2;
  if (game_GameModeData_instance_ == 0) {
  LABEL_89:
    v81_.v82 = 0;
    v81_.v83 = nullptr;
    v81_.v81 = 0;
    GameSideStoryData_12b5380(*(_QWORD*)GameData_212c7b8[0], &v81_.v81),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v50 = (unsigned __int8**)v81_.v81;
    v51 = (unsigned __int8**)v81_.v82;
    if (v81_.v81 == v81_.v82) {
    LABEL_138:
      if (v50 != nullptr) {
        v81_.v82 = (__int64)v50;
        v74 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v74 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v74);
      }
      return result;
    }
    v52 = GameData_212ccd0[0];
    while (1) {
      v53 = *v50;
      v54 = *(_QWORD*)*v50;
      v55 = *(unsigned __int8**)(v54 + 24);
      v56 = *v55 == v55[2] && v55[1] == v55[3];
      v57 = v53[8];
      if (v57 != 2) {
        v56 = false;
      }
      if (!v56 && v57 != 3) {
        goto LABEL_91;
      }
      v58 = *(_QWORD*)(v54 + 56);
      if (*(_BYTE*)(v58 + 272) == 0) {
        goto LABEL_91;
      }
      if ((v8 & 1) != 0) {
        v59 = *(__int64**)(*v52 + 64);
        v60 = *(__int64**)(*v52 + 72);
        if (v59 == v60) {
        LABEL_104:
          v63 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v64 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&GameData_2229a48),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
            if (v64 != 0) {
              v63 = *(_DWORD*)(v64 + 32);
            }
            else {
              v63 = 0;
            }
          }
          if (v63 != *(_DWORD*)v58) {
            goto LABEL_91;
          }
        }
        else {
          while (1) {
            v62 = *v59++;
            v61 = v62;
            if (*(_QWORD*)(v62 + 56) == v58) {
              break;
            }
            if (v59 == v60) {
              goto LABEL_104;
            }
          }
          v65 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v66 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&GameData_2229a58),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
            if (v66 != 0) {
              v65 = *(_DWORD*)(v66 + 32);
            }
            else {
              v65 = 0;
            }
          }
          if (((v65 >> *(_WORD*)(v61 + 16)) & 1) == 0) {
            goto LABEL_91;
          }
        }
        v54 = *(_QWORD*)v53;
      }
      game_1603f20((void*)(&v77_.v77), *(_QWORD**)(v54 + 40)),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v67 = *(_QWORD*)v53;
      v68 = *(unsigned int**)(*(_QWORD*)v53 + 200LL);
      if (v68 != nullptr &&
          (v69 = game_gmap_SpotMgr_FindSpot(v68)) != nullptr) {
        v70 = *((_QWORD*)v69 + 15);
        v71 = v77_.v77;
        if ((v77_.v77 & 1) == 0) {
          goto LABEL_122;
        }
      }
      else if ((unsigned int)strcmp(*(_QWORD*)(v67 + 8), &GameData_1ab3ea6) !=
               0) {
        v70 = 0;
        v71 = v77_.v77;
        if ((v77_.v77 & 1) == 0) {
          goto LABEL_122;
        }
      }
      else {
        v70 = GameRoutine_ae0560(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v71 = v77_.v77;
        if ((v77_.v77 & 1) == 0) {
        LABEL_122:
          v75_.v75[0] = v77_.v77;
          v75_.v75[1] = v77_.v78;
          v75_.v76 = v77_.v79;
          goto LABEL_125;
        }
      }
      fw_text_String_CopyTerminated(v75_.v75, v77_.v79, v77_.v78),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_125:
      game_gameui_159aff0_alt1(a1, v58, (__int64)v75_.v75, 1, v70),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((v75_.v75[0] & 1) != 0 && v75_.v76 != 0) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v72 = 128;
        }
        else {
          v72 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v72);
      }
      if ((v71 & 1) != 0 && v77_.v79 != 0) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v73 = 128;
        }
        else {
          v73 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v73);
      }
    LABEL_91:
      if (++v50 == v51) {
        v50 = (unsigned __int8**)v81_.v81;
        goto LABEL_138;
      }
    }
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    v26 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v26 != 0) {
      v27 = *(unsigned __int8*)(v26 + 88);
      v28 = *(unsigned __int8*)(v26 + 89);
      while (1) {
        if (*(unsigned __int8*)(v26 + 88) != v27 ||
            *(unsigned __int8*)(v26 + 89) != v28) {
          goto LABEL_89;
        }
        v29 = *(_DWORD**)(v26 + 136);
        if (v29 != nullptr && *(_BYTE*)(v26 + 32) == 0) {
          break;
        }
        v26 = *(_QWORD*)(*(_QWORD*)(v26 + 24) + 16LL);
        if (v26 == 0) {
          goto LABEL_89;
        }
      }
      TimelineFile_890540((void*)(&v81_.v81), 0xCu),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v30 = v81_.v81;
      v31 = v81_.v82;
      if (v81_.v81 != v81_.v82) {
        if ((v8 & 1) != 0) {
          v32 = GameData_212ccd0[0];
          while (1) {
            v37 = *(_QWORD*)v30;
            v38 = *(_QWORD*)v30;
            do {
              if (*(unsigned __int8*)(*(_QWORD*)v30 + 88LL) !=
                  *(unsigned __int8*)(v38 + 88)) {
                break;
              }
              v39 = *(_DWORD**)(v38 + 136);
              if (v39 != nullptr) {
                goto LABEL_66;
              }
              v38 = *(_QWORD*)(*(_QWORD*)(v38 + 24) + 16LL);
            } while (v38 != 0);
            v39 = nullptr;
          LABEL_66:
            if (v29 != v39) {
              goto LABEL_60;
            }
            v40 = *(__int64**)(*v32 + 64);
            v41 = *(__int64**)(*v32 + 72);
            if (v40 == v41) {
            LABEL_70:
              v44 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v45 = game_GameVariableTable_Find(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)&GameData_2229a48),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
                if (v45 != 0) {
                  v44 = *(_DWORD*)(v45 + 32);
                }
                else {
                  v44 = 0;
                }
              }
              if (v44 != *v29) {
                goto LABEL_60;
              }
            }
            else {
              while (1) {
                v43 = *v40++;
                v42 = v43;
                if (*(_DWORD**)(v43 + 56) == v29) {
                  break;
                }
                if (v40 == v41) {
                  goto LABEL_70;
                }
              }
              v46 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v47 = game_GameVariableTable_Find(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)&GameData_2229a58),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
                if (v47 != 0) {
                  v46 = *(_DWORD*)(v47 + 32);
                }
                else {
                  v46 = 0;
                }
              }
              if (((v46 >> *(_WORD*)(v42 + 16)) & 1) == 0) {
                goto LABEL_60;
              }
            }
            v80[0] = 0;
            do {
              v48 = *(_QWORD*)(v37 + 120);
              if (v48 != 0) {
                break;
              }
              v37 = *(_QWORD*)(*(_QWORD*)(v37 + 24) + 8LL);
            } while (v37 != 0);
            game_gameui_159aff0_alt1(a1, (__int64)v29, (__int64)v80, 0, v48),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          LABEL_60:
            v30 += 8;
            if (v30 == v31) {
              goto LABEL_85;
            }
          }
        }
        do {
          v33 = *(_QWORD*)v30;
          v34 = *(_QWORD*)v30;
          do {
            if (*(unsigned __int8*)(*(_QWORD*)v30 + 88LL) !=
                *(unsigned __int8*)(v34 + 88)) {
              break;
            }
            v35 = *(_DWORD**)(v34 + 136);
            if (v35 != nullptr) {
              goto LABEL_54;
            }
            v34 = *(_QWORD*)(*(_QWORD*)(v34 + 24) + 16LL);
          } while (v34 != 0);
          v35 = nullptr;
        LABEL_54:
          if (v29 == v35) {
            v80[0] = 0;
            do {
              v36 = *(_QWORD*)(v33 + 120);
              if (v36 != 0) {
                break;
              }
              v33 = *(_QWORD*)(*(_QWORD*)(v33 + 24) + 8LL);
            } while (v33 != 0);
            game_gameui_159aff0_alt1(a1, (__int64)v29, (__int64)v80, 0, v36),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          v30 += 8;
        } while (v30 != v31);
      }
    LABEL_85:
      if (v81_.v81 != 0) {
        v81_.v82 = v81_.v81;
        v49 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v49 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v49),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    goto LABEL_89;
  }
  v10 = *(_QWORD*)(*GameData_212c790 + 8);
  v11 = *(__int64**)(v10 + 8);
  v12 = *(__int64**)(v10 + 16);
  if (v11 != v12) {
    while (1) {
      v13 = (_QWORD*)*v11;
      v14 = *(_QWORD*)(*v11 + 96);
      if (v14 != 0 && (unsigned int)*(unsigned __int8*)(v14 + 32) - 3 <= 1) {
        v15 = *(_QWORD*)(v13[11] + 40LL);
        if (v15 != 0) {
          LODWORD(v15) = *(unsigned __int8*)(v15 + 64);
        }
        if ((_DWORD)v15 !=
            *(char*)(*(_QWORD*)(game_GameModeData_instance_ + 24) + 89LL)) {
          goto LABEL_16;
        }
        if ((GameRoutine_133f1d0(*v11, a2, a3, a4, a5, a6, a7, a8) & 1) == 0) {
          break;
        }
        v14 = v13[12];
        if (v14 != 0) {
        LABEL_16:
          if (*(_BYTE*)(v14 + 32) == 4 && game_GameModeData_instance_ != 0 &&
              *(int*)(game_GameModeData_instance_ + 64) >= 6 &&
              (GameRoutine_133f1d0((__int64)v13, a2, a3, a4, a5, a6, a7, a8) &
               1) == 0) {
            break;
          }
        }
      }
    LABEL_5:
      if (++v11 == v12) {
        return result;
      }
    }
    v17 = *(_QWORD*)(v13[11] + 40LL);
    if (v17 != 0) {
      v18 = *(_QWORD*)(v17 + 56);
    }
    else {
      v18 = 0;
    }
    v19 = *(_QWORD*)(v13[12] + 40LL);
    v20 = strlen(v19),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                          PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v21 = v20;
    if (v20 >= 0x17) {
      if ((v20 | 7) == 0x17) {
        v23 = 26;
      }
      else {
        v23 = (v20 | 7) + 1;
      }
      v22 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v23, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v81_.v82 = v21;
      v81_.v83 = v22;
      v81_.v81 = v23 | 1;
    }
    else {
      v22 = (char*)&v81_.v81 + 1;
      LOBYTE(v81_.v81) = 2 * v20;
      if (v20 == 0) {
      LABEL_29:
        v22[v21] = 0;
        if (*v13 != 0) {
          v24 = *(_QWORD*)(*v13 + 120LL);
        }
        else {
          v24 = 0;
        }
        game_gameui_159aff0_alt1(a1, v18, (__int64)&v81_.v81, 2, v24),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((v81_.v81 & 1) != 0) {
          a2 = (__int64)v81_.v83;
          if (v81_.v83 != nullptr) {
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v25 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
          }
        }
        goto LABEL_5;
      }
    }
    memmove(v22, v19, v21),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_29;
  }
  return result;
}

void game_gameui_159aff0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                         unsigned int* a5)
{
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  unsigned int* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int* v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int* v38;
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
  int v52;
  int v53;
  struct {
    const char* v54;
    __int64 v55;
    __int64 v56;
  } v54_;
  __int64 v57;

  v57 = a2;
  v53 = a4;
  if (a5 == nullptr) {
    v10 = a1[1];
    v11 = a1[2];
    v54_.v54 = "MID_Sys_ValueEmptyLong";
    v52 = 22;
    if (v10 >= v11) {
      v23 = v10 - *a1;
      v24 = 1 - 0x71C71C71C71C71C7LL * (v23 >> 3);
      if (v24 > 0x38E38E38E38E38ELL) {
        goto LABEL_53;
      }
      v25 = 0x8E38E38E38E38E39LL * ((__int64)(v11 - *a1) >> 3);
      v26 = 2 * v25;
      if (2 * v25 <= v24) {
        v26 = 1 - 0x71C71C71C71C71C7LL * (v23 >> 3);
      }
      if (v25 >= 0x1C71C71C71C71C7LL) {
        v27 = 0x38E38E38E38E38ELL;
      }
      else {
        v27 = v26;
      }
      if (v27 != 0) {
        if (v27 > 0x38E38E38E38E38ELL) {
          goto LABEL_54;
        }
        v28 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 72 * v27,
                                             16, 0);
      }
      else {
        v28 = 0;
      }
      v46 = v28 + v23;
      v47 = v28 + 72 * v27;
      GameRoutine_15a71f0(v46, &v57, &v54_.v54, &v52, a3, &v53);
      v48 = a1[1];
      v12 = v46 + 72;
      v49 = v46 + *a1 - v48;
      GameRoutine_15a70a0(*a1, v48, v49);
      v50 = *a1;
      *a1 = v49;
      a1[1] = v46 + 72;
      a1[2] = v47;
      if (v50 != 0) {
        v51 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v51);
      }
    }
    else {
      v12 = GameRoutine_15a71f0(v10, &v57, &v54_.v54, &v52, a3, &v53) + 72;
    }
    a1[1] = v12;
    return;
  }
  v8 = a1[1];
  v7 = a1[2];
  if (v8 < v7) {
    if ((*(_BYTE*)a3 & 1) != 0) {
      v29 = a2;
      v30 = a5;
      v31 = a4;
      fw_text_String_CopyTerminated((__int64*)&v54_.v54, *(_QWORD*)(a3 + 16),
                                    *(_QWORD*)(a3 + 8));
      a2 = v29;
      LODWORD(a4) = v31;
      a5 = v30;
    }
    else {
      v9 = *(_QWORD*)(a3 + 8);
      v54_.v54 = *(const char**)a3;
      v54_.v55 = v9;
      v54_.v56 = *(_QWORD*)(a3 + 16);
    }
    GameRoutine_159a340(v8, a2, (__int64*)&v54_.v54, a4, a5, 1);
    if (((unsigned __int8)v54_.v54 & 1) != 0 && v54_.v56 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v32);
    }
    a1[1] = v8 + 72;
    return;
  }
  v13 = v8 - *a1;
  v14 = 1 - 0x71C71C71C71C71C7LL * (v13 >> 3);
  if (v14 > 0x38E38E38E38E38ELL) {
  LABEL_53:
    GameRoutine_15a7080();
  }
  v15 = fw_memory_g_heap_manager_ptr;
  v16 = 0x8E38E38E38E38E39LL * ((__int64)(v7 - *a1) >> 3);
  v17 = 2 * v16;
  if (2 * v16 <= v14) {
    v17 = 1 - 0x71C71C71C71C71C7LL * (v13 >> 3);
  }
  if (v16 >= 0x1C71C71C71C71C7LL) {
    v18 = 0x38E38E38E38E38ELL;
  }
  else {
    v18 = v17;
  }
  if (v18 == 0) {
    v22 = 0;
    goto LABEL_33;
  }
  if (v18 > 0x38E38E38E38E38ELL) {
  LABEL_54:
    GameRoutine_60a210();
  }
  v19 = a2;
  v20 = a4;
  v21 = a5;
  v22 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       72 * v18, 16, 0);
  a5 = v21;
  LODWORD(a4) = v20;
  a2 = v19;
LABEL_33:
  v33 = v22 + v13;
  if ((*(_BYTE*)a3 & 1) != 0) {
    v35 = *(_QWORD*)(a3 + 8);
    v36 = *(_QWORD*)(a3 + 16);
    v37 = a2;
    v38 = a5;
    v39 = a4;
    fw_text_String_CopyTerminated((__int64*)&v54_.v54, v36, v35);
    a2 = v37;
    LODWORD(a4) = v39;
    a5 = v38;
  }
  else {
    v34 = *(_QWORD*)(a3 + 8);
    v54_.v54 = *(const char**)a3;
    v54_.v55 = v34;
    v54_.v56 = *(_QWORD*)(a3 + 16);
  }
  v40 = v22 + 72 * v18;
  GameRoutine_159a340(v33, a2, (__int64*)&v54_.v54, a4, a5, 1);
  if (((unsigned __int8)v54_.v54 & 1) != 0 && v54_.v56 != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v41);
  }
  v42 = a1[1];
  v43 = v33 + *a1 - v42;
  GameRoutine_15a70a0(*a1, v42, v43);
  v44 = *a1;
  *a1 = v43;
  a1[1] = v33 + 72;
  a1[2] = v40;
  if (v44 != 0) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v45);
  }
  a1[1] = v33 + 72;
}

void game_gameui_159b930(__int64* a1, unsigned int a2)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;
  char* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  char v19;
  _QWORD* v20;
  __int64 v21;
  _BYTE v22[4];
  _DWORD v23[2];

  LayoutAccessor_1560070((void*)(&v20), a1, (__int64)"L_Remaining");
  if (v21 != 0) {
    v3 = std___1___shared_weak_count_lock(v21);
    v4 = v20;
    if (v21 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v21);
    }
    if (v3 == 0 || v4 == nullptr) {
      if (v3 == 0) {
        return;
      }
    }
    else {
      LayoutAccessor_155e830_alt1(v4, 1);
      v6 = ui_LayoutAccessor_FindPane(v4, "T_Num");
      if (v6 != 0) {
        v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d690, 0);
        if (v7 != 0) {
          GameRoutine_156c910_alt1(v7, "%d", 1, a2);
        }
      }
      v8 = (char*)GameData_212da30 + 36;
      if (a2 == 0) {
        v8 = (char*)GameData_212da30 + 60;
      }
      v9 = *(_DWORD*)v8;
      v10 = ui_LayoutAccessor_FindTextBox(v4, "T_Num");
      if (v10 != 0) {
        v13 = Pane_58f8a0_alt1(v10, v11, v12);
        if (v13 != 0) {
          *(_DWORD*)(v13 + 12) = v9;
        }
      }
      v14 = ui_LayoutAccessor_FindTextBox(v4, "T_Txt");
      if (v14 != 0) {
        v15 = v14;
        v16 = ui_LayoutAccessor_FindTextBox(v4, "T_Txt");
        if (v16 != 0) {
          GameRoutine_190a0c0(&v20, v23, v22, v16, *(_QWORD*)(v16 + 216));
          v17 = v23[0];
          v18 = v23[1];
        }
        else {
          v17 = 0;
          v18 = 0;
        }
        v19 = *(_BYTE*)(v15 + 88);
        *(_DWORD*)(v15 + 80) = v17;
        *(_DWORD*)(v15 + 84) = v18;
        *(_BYTE*)(v15 + 88) = v19 | 0x10;
      }
      GameRoutine_1585290(v4, (__int64)"T_Txt", (__int64)&GameData_1ac6c8b);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
  }
}

__int64 game_gameui_15a0300(__int64 result, __int64* a2, __int64** a3,
                            __int64 a4, char a5)
{
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  int v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  bool v44;
  __int64 v45;
  int v46;
  __int64 v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  unsigned int v54;
  int v55;
  __int64 v56;
  __int64* v57;
  unsigned int v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned int v63;
  int v64;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  unsigned int v74;
  __int64 v75;
  __int64* v76;
  bool v78;
  __int64 v79;
  __int64* v80;
  __int64* v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  unsigned int v85;
  __int64 v86;
  __int64 v87;
  unsigned int v88;
  int v89;
  __int64 v90;
  signed __int64 v91;
  signed __int64 v92;
  __int64 v93;
  __int64* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned int v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  unsigned int v102;
  __int64 v103;
  int v104;
  unsigned int v105;
  __int64* v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  unsigned int v111;
  __int64 v112;
  bool v113;
  __int64 v114;
  __int64* v115;
  __int64* v116;
  __int64 v117;
  __int64* v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64* v122;
  __int64 v123;
  unsigned int v124;
  __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  __int64* v128;
  __int64 v129;
  __int64 v130;
  unsigned int v131;
  __int64 v132;
  int v133;
  unsigned int v134;
  __int64* v135;
  __int64 v136;
  __int64* v137;
  __int64 v138;
  __int64 v139;
  unsigned int v140;
  __int64 v141;
  __int64* v142;
  unsigned int v143;
  int v144;
  __int64 v145;
  __int64* v146;
  __int64* v147;
  signed __int64 v148;
  __int64* v149;
  signed __int64 v150;
  __int64 v151;
  __int64* v152;
  __int64* v153;
  int v154;
  int v155;

  v8 = (__int64*)result;
LABEL_2:
  v9 = v8;
  v147 = a2 - 2;
  v149 = a2 - 1;
  v152 = a2;
  v146 = a2 - 3;
  while (1) {
    v10 = v152;
    v8 = v9;
    v11 = v152 - v9;
    if (v11 > 2) {
      switch (v11) {
      case 3LL:
        return GameRoutine_15a1190(v9, v9 + 1, v149, a3);
      case 4LL:
        return GameRoutine_15a13c0(v9, v9 + 1, v9 + 2, v149, a3);
      case 5LL:
        return GameRoutine_15a1540(v9, v9 + 1, v9 + 2, v9 + 3, v149, a3);
      default:
        break;
      }
    }
    else {
      if ((unsigned __int64)v11 < 2) {
        return result;
      }
      if (v11 == 2) {
        v72 = *(v152 - 1);
        if (v72 != 0) {
          LODWORD(v72) = *(_WORD*)(v72 + 16) & 0xFFF;
        }
        v155 = v72;
        v73 = *v9;
        if (*v9 != 0) {
          LODWORD(v73) = *(_WORD*)(v73 + 16) & 0xFFF;
        }
        v154 = v73;
        v74 = game_GetSkillInfo(&v155, **a3);
        result = game_GetSkillInfo(&v154, **a3);
        if (v74 > (unsigned int)result) {
          v75 = *v9;
          *v9 = *(v152 - 1);
          *(v152 - 1) = v75;
        }
        return result;
      }
    }
    if (v11 <= 23) {
      break;
    }
    if (a4 == 0) {
      if (v9 == v152) {
        return result;
      }
      v91 = (unsigned __int64)(v11 - 2) >> 1;
      v150 = v91;
      while (1) {
        v92 = v91;
        if (v150 >= v91) {
          v148 = v91;
          v93 = (2 * (v91 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
          v94 = &v8[v93];
          if (2 * v91 + 2 < v11) {
            v95 = *v94;
            if (*v94 != 0) {
              LODWORD(v95) = *(_WORD*)(v95 + 16) & 0xFFF;
            }
            v155 = v95;
            v97 = v94[1];
            ++v94;
            v96 = v97;
            if (v97 != 0) {
              LODWORD(v96) = *(_WORD*)(v96 + 16) & 0xFFF;
            }
            v154 = v96;
            v98 = game_GetSkillInfo(&v155, **a3);
            if (v98 > (unsigned int)game_GetSkillInfo(&v154, **a3)) {
              v93 = 2 * v92 + 2;
            }
            else {
              v94 = &v8[v93];
            }
          }
          v99 = *v94;
          if (*v94 != 0) {
            LODWORD(v99) = *(_WORD*)(v99 + 16) & 0xFFF;
          }
          v100 = &v8[v92];
          v155 = v99;
          v101 = *v100;
          if (*v100 != 0) {
            LODWORD(v101) = *(_WORD*)(v101 + 16) & 0xFFF;
          }
          v154 = v101;
          v102 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
          if (v102 <= (unsigned int)result) {
            break;
          }
        }
      LABEL_153:
        v91 = v92 - 1;
        if (v92 == 0) {
          do {
            v153 = v10;
            v114 = 0;
            v115 = v8;
            v151 = *v8;
            do {
              v116 = &v115[v114];
              v117 = (2 * v114) | 1;
              v118 = v116 + 1;
              v119 = 2 * v114 + 2;
              if (v119 >= v11) {
                v114 = (2 * v114) | 1;
              }
              else {
                v120 = *v118;
                if (*v118 != 0) {
                  LODWORD(v120) = *(_WORD*)(v120 + 16) & 0xFFF;
                }
                v155 = v120;
                v123 = v116[2];
                v122 = v116 + 2;
                v121 = v123;
                if (v123 != 0) {
                  LODWORD(v121) = *(_WORD*)(v121 + 16) & 0xFFF;
                }
                v154 = v121;
                v124 = game_GetSkillInfo(&v155, **a3);
                result = game_GetSkillInfo(&v154, **a3);
                if (v124 <= (unsigned int)result) {
                  v114 = v117;
                }
                else {
                  v118 = v122;
                  v114 = v119;
                }
              }
              *v115 = *v118;
              v115 = v118;
            } while (v114 <= (__int64)((unsigned __int64)(v11 - 2) >> 1));
            v10 = v153 - 1;
            if (v118 == v153 - 1) {
              *v118 = v151;
            }
            else {
              *v118 = *v10;
              *v10 = v151;
              v125 = ((char*)v118 - (char*)v8 + 8) >> 3;
              v113 = v125 < 2;
              v126 = v125 - 2;
              if (!v113) {
                v127 = v126 >> 1;
                v128 = &v8[v126 >> 1];
                v129 = *v128;
                if (*v128 != 0) {
                  LODWORD(v129) = *(_WORD*)(v129 + 16) & 0xFFF;
                }
                v155 = v129;
                v130 = *v118;
                if (*v118 != 0) {
                  LODWORD(v130) = *(_WORD*)(v130 + 16) & 0xFFF;
                }
                v154 = v130;
                v131 = game_GetSkillInfo(&v155, **a3);
                result = game_GetSkillInfo(&v154, **a3);
                if (v131 > (unsigned int)result) {
                  v132 = *v118;
                  do {
                    v135 = v128;
                    *v118 = *v128;
                    if (v127 == 0) {
                      break;
                    }
                    v127 = (v127 - 1) >> 1;
                    v128 = &v8[v127];
                    v136 = *v128;
                    if (*v128 != 0) {
                      LODWORD(v136) = *(_WORD*)(v136 + 16) & 0xFFF;
                    }
                    v155 = v136;
                    v133 = v132 != 0 ? *(_WORD*)(v132 + 16) & 0xFFF : 0;
                    v154 = v133;
                    v134 = game_GetSkillInfo(&v155, **a3);
                    result = game_GetSkillInfo(&v154, **a3);
                    v118 = v135;
                  } while (v134 > (unsigned int)result);
                  *v135 = v132;
                }
              }
            }
            v113 = v11-- <= 2;
          } while (!v113);
          return result;
        }
      }
      v103 = *v100;
      while (1) {
        v106 = v94;
        *v100 = *v94;
        if (v150 < v93) {
        LABEL_152:
          *v106 = v103;
          v10 = v152;
          v92 = v148;
          goto LABEL_153;
        }
        v107 = (2 * v93) | 1;
        v94 = &v8[v107];
        if (2 * v93 + 2 < v11) {
          break;
        }
        v93 = (2 * v93) | 1;
        v112 = *v94;
        if (*v94 != 0) {
          goto LABEL_183;
        }
      LABEL_184:
        v155 = v112;
        if (v103 != 0) {
          v104 = *(_WORD*)(v103 + 16) & 0xFFF;
        }
        else {
          v104 = 0;
        }
        v154 = v104;
        v105 = game_GetSkillInfo(&v155, **a3);
        result = game_GetSkillInfo(&v154, **a3);
        v100 = v106;
        if (v105 > (unsigned int)result) {
          goto LABEL_152;
        }
      }
      v108 = *v94;
      if (*v94 != 0) {
        LODWORD(v108) = *(_WORD*)(v108 + 16) & 0xFFF;
      }
      v155 = v108;
      v110 = v94[1];
      ++v94;
      v109 = v110;
      if (v110 != 0) {
        LODWORD(v109) = *(_WORD*)(v109 + 16) & 0xFFF;
      }
      v154 = v109;
      v111 = game_GetSkillInfo(&v155, **a3);
      if (v111 > (unsigned int)game_GetSkillInfo(&v154, **a3)) {
        v93 = 2 * v93 + 2;
      }
      else {
        v94 = &v8[v107];
        v93 = (2 * v93) | 1;
      }
      v112 = *v94;
      if (*v94 == 0) {
        goto LABEL_184;
      }
    LABEL_183:
      LODWORD(v112) = *(_WORD*)(v112 + 16) & 0xFFF;
      goto LABEL_184;
    }
    v12 = &v9[(unsigned __int64)v11 >> 1];
    if ((unsigned __int64)v11 < 0x81) {
      GameRoutine_15a1190(&v8[(unsigned __int64)v11 >> 1], v8, v149, a3);
      --a4;
      if ((a5 & 1) != 0) {
        goto LABEL_21;
      }
    }
    else {
      GameRoutine_15a1190(v8, &v8[(unsigned __int64)v11 >> 1], v149, a3);
      GameRoutine_15a1190(v8 + 1, v12 - 1, v147, a3);
      GameRoutine_15a1190(v8 + 2, v12 + 1, v146, a3);
      GameRoutine_15a1190(v12 - 1, &v8[(unsigned __int64)v11 >> 1], v12 + 1,
                          a3);
      v13 = *v8;
      *v8 = *v12;
      *v12 = v13;
      --a4;
      if ((a5 & 1) != 0) {
        goto LABEL_21;
      }
    }
    v14 = *(v8 - 1);
    if (v14 != 0) {
      LODWORD(v14) = *(_WORD*)(v14 + 16) & 0xFFF;
    }
    v155 = v14;
    v15 = *v8;
    if (*v8 != 0) {
      LODWORD(v15) = *(_WORD*)(v15 + 16) & 0xFFF;
    }
    v154 = v15;
    v16 = game_GetSkillInfo(&v155, **a3);
    if (v16 <= (unsigned int)game_GetSkillInfo(&v154, **a3)) {
      v45 = *v8;
      if (*v8 != 0) {
        v46 = *(_WORD*)(v45 + 16) & 0xFFF;
      }
      else {
        v46 = 0;
      }
      v155 = v46;
      v47 = *v149;
      if (*v149 != 0) {
        LODWORD(v47) = *(_WORD*)(v47 + 16) & 0xFFF;
      }
      v154 = v47;
      v48 = game_GetSkillInfo(&v155, **a3);
      result = game_GetSkillInfo(&v154, **a3);
      if (v48 <= (unsigned int)result) {
        v53 = v8 + 1;
        do {
          v9 = v53;
          if (v53 >= v152) {
            break;
          }
          if (v45 != 0) {
            v55 = *(_WORD*)(v45 + 16) & 0xFFF;
          }
          else {
            v55 = 0;
          }
          v155 = v55;
          v56 = *v9;
          if (*v9 != 0) {
            LODWORD(v56) = *(_WORD*)(v56 + 16) & 0xFFF;
          }
          v154 = v56;
          v54 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
          v53 = v9 + 1;
        } while (v54 <= (unsigned int)result);
      }
      else {
        v9 = v8;
        do {
          if (v45 != 0) {
            v50 = *(_WORD*)(v45 + 16) & 0xFFF;
          }
          else {
            v50 = 0;
          }
          v155 = v50;
          v52 = v9[1];
          ++v9;
          v51 = v52;
          if (v52 != 0) {
            LODWORD(v51) = *(_WORD*)(v51 + 16) & 0xFFF;
          }
          v154 = v51;
          v49 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
        } while (v49 <= (unsigned int)result);
      }
      v57 = v152;
      if (v9 < v152) {
        v57 = v152;
        do {
          if (v45 != 0) {
            v59 = *(_WORD*)(v45 + 16) & 0xFFF;
          }
          else {
            v59 = 0;
          }
          v155 = v59;
          v61 = *--v57;
          v60 = v61;
          if (v61 != 0) {
            LODWORD(v60) = *(_WORD*)(v60 + 16) & 0xFFF;
          }
          v154 = v60;
          v58 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
        } while (v58 > (unsigned int)result);
      }
      while (v9 < v57) {
        v62 = *v9;
        *v9 = *v57;
        *v57 = v62;
        do {
          if (v45 != 0) {
            v64 = *(_WORD*)(v45 + 16) & 0xFFF;
          }
          else {
            v64 = 0;
          }
          v155 = v64;
          v66 = v9[1];
          ++v9;
          v65 = v66;
          if (v66 != 0) {
            LODWORD(v65) = *(_WORD*)(v65 + 16) & 0xFFF;
          }
          v154 = v65;
          v63 = game_GetSkillInfo(&v155, **a3);
        } while (v63 <= (unsigned int)game_GetSkillInfo(&v154, **a3));
        do {
          if (v45 != 0) {
            v68 = *(_WORD*)(v45 + 16) & 0xFFF;
          }
          else {
            v68 = 0;
          }
          v155 = v68;
          v70 = *--v57;
          v69 = v70;
          if (v70 != 0) {
            LODWORD(v69) = *(_WORD*)(v69 + 16) & 0xFFF;
          }
          v154 = v69;
          v67 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
        } while (v67 > (unsigned int)result);
      }
      v71 = v9 - 1;
      if (v8 != v9 - 1) {
        *v8 = *v71;
      }
      a5 = 0;
      *v71 = v45;
    }
    else {
    LABEL_21:
      v17 = *v8;
      v18 = 0;
      do {
        v21 = v8[v18 + 1];
        if (v21 != 0) {
          LODWORD(v21) = *(_WORD*)(v21 + 16) & 0xFFF;
        }
        v155 = v21;
        if (v17 != 0) {
          v19 = *(_WORD*)(v17 + 16) & 0xFFF;
        }
        else {
          v19 = 0;
        }
        v154 = v19;
        v20 = game_GetSkillInfo(&v155, **a3);
        ++v18;
      } while (v20 > (unsigned int)game_GetSkillInfo(&v154, **a3));
      v22 = &v8[v18];
      v23 = v152;
      if (v18 == 1) {
        v23 = v152;
        do {
          if (v22 >= v23) {
            break;
          }
          v31 = *--v23;
          v30 = v31;
          if (v31 != 0) {
            LODWORD(v30) = *(_WORD*)(v30 + 16) & 0xFFF;
          }
          v155 = v30;
          v28 = v17 != 0 ? *(_WORD*)(v17 + 16) & 0xFFF : 0;
          v154 = v28;
          v29 = game_GetSkillInfo(&v155, **a3);
        } while (v29 <= (unsigned int)game_GetSkillInfo(&v154, **a3));
      }
      else {
        do {
          v27 = *--v23;
          v26 = v27;
          if (v27 != 0) {
            LODWORD(v26) = *(_WORD*)(v26 + 16) & 0xFFF;
          }
          v155 = v26;
          if (v17 != 0) {
            v24 = *(_WORD*)(v17 + 16) & 0xFFF;
          }
          else {
            v24 = 0;
          }
          v154 = v24;
          v25 = game_GetSkillInfo(&v155, **a3);
        } while (v25 <= (unsigned int)game_GetSkillInfo(&v154, **a3));
      }
      if (v22 >= v23) {
        v43 = v22 - 1;
        if (v8 != v22 - 1) {
          goto LABEL_62;
        }
      }
      else {
        v32 = &v8[v18];
        v33 = v23;
        do {
          v34 = *v32;
          *v32 = *v33;
          *v33 = v34;
          do {
            v38 = v32[1];
            ++v32;
            v37 = v38;
            if (v38 != 0) {
              LODWORD(v37) = *(_WORD*)(v37 + 16) & 0xFFF;
            }
            v155 = v37;
            if (v17 != 0) {
              v35 = *(_WORD*)(v17 + 16) & 0xFFF;
            }
            else {
              v35 = 0;
            }
            v154 = v35;
            v36 = game_GetSkillInfo(&v155, **a3);
          } while (v36 > (unsigned int)game_GetSkillInfo(&v154, **a3));
          do {
            v42 = *--v33;
            v41 = v42;
            if (v42 != 0) {
              LODWORD(v41) = *(_WORD*)(v41 + 16) & 0xFFF;
            }
            v155 = v41;
            if (v17 != 0) {
              v39 = *(_WORD*)(v17 + 16) & 0xFFF;
            }
            else {
              v39 = 0;
            }
            v154 = v39;
            v40 = game_GetSkillInfo(&v155, **a3);
          } while (v40 <= (unsigned int)game_GetSkillInfo(&v154, **a3));
        } while (v32 < v33);
        v43 = v32 - 1;
        if (v8 != v32 - 1) {
        LABEL_62:
          *v8 = *v43;
        }
      }
      *v43 = v17;
      if (v22 < v23) {
        goto LABEL_66;
      }
      v9 = v43 + 1;
      v44 = GameRoutine_15a1740(v8, v43, a3);
      result = GameRoutine_15a1740(v43 + 1, v152, a3);
      if ((result & 1) != 0) {
        a2 = v43;
        if (v44) {
          return result;
        }
        goto LABEL_2;
      }
      if (!v44) {
      LABEL_66:
        result = game_gameui_15a0300((__int64)v8, v43, a3, a4, a5 & 1);
        a5 = 0;
        v9 = v43 + 1;
      }
    }
  }
  v76 = v9 + 1;
  v78 = v9 == v152 || v76 == v152;
  if ((a5 & 1) != 0) {
    if (v78) {
      return result;
    }
    v79 = 0;
    v80 = v9;
    while (1) {
      v82 = v76;
      v83 = v80[1];
      if (v83 != 0) {
        LODWORD(v83) = *(_WORD*)(v83 + 16) & 0xFFF;
      }
      v155 = v83;
      v84 = *v80;
      if (*v80 != 0) {
        LODWORD(v84) = *(_WORD*)(v84 + 16) & 0xFFF;
      }
      v154 = v84;
      v85 = game_GetSkillInfo(&v155, **a3);
      result = game_GetSkillInfo(&v154, **a3);
      if (v85 > (unsigned int)result) {
        v86 = *v82;
        v87 = v79;
        do {
          *(__int64*)((char*)v9 + v87 + 8) = *(__int64*)((char*)v9 + v87);
          if (v87 == 0) {
            v81 = v9;
            goto LABEL_134;
          }
          if (v86 != 0) {
            v89 = *(_WORD*)(v86 + 16) & 0xFFF;
          }
          else {
            v89 = 0;
          }
          v155 = v89;
          v90 = *(__int64*)((char*)v9 + v87 - 8);
          if (v90 != 0) {
            LODWORD(v90) = *(_WORD*)(v90 + 16) & 0xFFF;
          }
          v154 = v90;
          v88 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
          v87 -= 8;
        } while (v88 > (unsigned int)result);
        v81 = (__int64*)((char*)v9 + v87 + 8);
      LABEL_134:
        *v81 = v86;
      }
      v76 = v82 + 1;
      v79 += 8;
      v80 = v82;
      if (v82 + 1 == v152) {
        return result;
      }
    }
  }
  if (!v78) {
    do {
      v137 = v76;
      v138 = v8[1];
      if (v138 != 0) {
        LODWORD(v138) = *(_WORD*)(v138 + 16) & 0xFFF;
      }
      v155 = v138;
      v139 = *v8;
      if (*v8 != 0) {
        LODWORD(v139) = *(_WORD*)(v139 + 16) & 0xFFF;
      }
      v154 = v139;
      v140 = game_GetSkillInfo(&v155, **a3);
      result = game_GetSkillInfo(&v154, **a3);
      if (v140 > (unsigned int)result) {
        v141 = *v137;
        v142 = v137;
        do {
          *v142 = *(v142 - 1);
          if (v141 != 0) {
            v144 = *(_WORD*)(v141 + 16) & 0xFFF;
          }
          else {
            v144 = 0;
          }
          v155 = v144;
          v145 = *(v142 - 2);
          if (v145 != 0) {
            LODWORD(v145) = *(_WORD*)(v145 + 16) & 0xFFF;
          }
          v154 = v145;
          v143 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
          --v142;
        } while (v143 > (unsigned int)result);
        *v142 = v141;
      }
      v76 = v137 + 1;
      v8 = v137;
    } while (v137 + 1 != v152);
  }
  return result;
}

__int64 game_gameui_15a2ea0(__int64 result, __int64* a2, __int64** a3,
                            __int64 a4, char a5)
{
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  int v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  bool v44;
  __int64 v45;
  int v46;
  __int64 v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  unsigned int v54;
  int v55;
  __int64 v56;
  __int64* v57;
  unsigned int v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned int v63;
  int v64;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  unsigned int v74;
  __int64 v75;
  __int64* v76;
  bool v78;
  __int64 v79;
  __int64* v80;
  __int64* v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  unsigned int v85;
  __int64 v86;
  __int64 v87;
  unsigned int v88;
  int v89;
  __int64 v90;
  signed __int64 v91;
  signed __int64 v92;
  __int64 v93;
  __int64* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned int v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  unsigned int v102;
  __int64 v103;
  int v104;
  unsigned int v105;
  __int64* v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  unsigned int v111;
  __int64 v112;
  bool v113;
  __int64 v114;
  __int64* v115;
  __int64* v116;
  __int64 v117;
  __int64* v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64* v122;
  __int64 v123;
  unsigned int v124;
  __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  __int64* v128;
  __int64 v129;
  __int64 v130;
  unsigned int v131;
  __int64 v132;
  int v133;
  unsigned int v134;
  __int64* v135;
  __int64 v136;
  __int64* v137;
  __int64 v138;
  __int64 v139;
  unsigned int v140;
  __int64 v141;
  __int64* v142;
  unsigned int v143;
  int v144;
  __int64 v145;
  __int64* v146;
  __int64* v147;
  signed __int64 v148;
  __int64* v149;
  signed __int64 v150;
  __int64 v151;
  __int64* v152;
  __int64* v153;
  int v154;
  int v155;

  v8 = (__int64*)result;
LABEL_2:
  v9 = v8;
  v147 = a2 - 2;
  v149 = a2 - 1;
  v152 = a2;
  v146 = a2 - 3;
  while (1) {
    v10 = v152;
    v8 = v9;
    v11 = v152 - v9;
    if (v11 > 2) {
      switch (v11) {
      case 3LL:
        return GameRoutine_15a3d30(v9, v9 + 1, v149, a3);
      case 4LL:
        return GameRoutine_15a3f60(v9, v9 + 1, v9 + 2, v149, a3);
      case 5LL:
        return GameRoutine_15a40e0(v9, v9 + 1, v9 + 2, v9 + 3, v149, a3);
      default:
        break;
      }
    }
    else {
      if ((unsigned __int64)v11 < 2) {
        return result;
      }
      if (v11 == 2) {
        v72 = *(v152 - 1);
        if (v72 != 0) {
          LODWORD(v72) = *(_WORD*)(v72 + 16) & 0xFFF;
        }
        v155 = v72;
        v73 = *v9;
        if (*v9 != 0) {
          LODWORD(v73) = *(_WORD*)(v73 + 16) & 0xFFF;
        }
        v154 = v73;
        v74 = game_GetSkillInfo(&v155, **a3);
        result = game_GetSkillInfo(&v154, **a3);
        if (v74 > (unsigned int)result) {
          v75 = *v9;
          *v9 = *(v152 - 1);
          *(v152 - 1) = v75;
        }
        return result;
      }
    }
    if (v11 <= 23) {
      break;
    }
    if (a4 == 0) {
      if (v9 == v152) {
        return result;
      }
      v91 = (unsigned __int64)(v11 - 2) >> 1;
      v150 = v91;
      while (1) {
        v92 = v91;
        if (v150 >= v91) {
          v148 = v91;
          v93 = (2 * (v91 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
          v94 = &v8[v93];
          if (2 * v91 + 2 < v11) {
            v95 = *v94;
            if (*v94 != 0) {
              LODWORD(v95) = *(_WORD*)(v95 + 16) & 0xFFF;
            }
            v155 = v95;
            v97 = v94[1];
            ++v94;
            v96 = v97;
            if (v97 != 0) {
              LODWORD(v96) = *(_WORD*)(v96 + 16) & 0xFFF;
            }
            v154 = v96;
            v98 = game_GetSkillInfo(&v155, **a3);
            if (v98 > (unsigned int)game_GetSkillInfo(&v154, **a3)) {
              v93 = 2 * v92 + 2;
            }
            else {
              v94 = &v8[v93];
            }
          }
          v99 = *v94;
          if (*v94 != 0) {
            LODWORD(v99) = *(_WORD*)(v99 + 16) & 0xFFF;
          }
          v100 = &v8[v92];
          v155 = v99;
          v101 = *v100;
          if (*v100 != 0) {
            LODWORD(v101) = *(_WORD*)(v101 + 16) & 0xFFF;
          }
          v154 = v101;
          v102 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
          if (v102 <= (unsigned int)result) {
            break;
          }
        }
      LABEL_153:
        v91 = v92 - 1;
        if (v92 == 0) {
          do {
            v153 = v10;
            v114 = 0;
            v115 = v8;
            v151 = *v8;
            do {
              v116 = &v115[v114];
              v117 = (2 * v114) | 1;
              v118 = v116 + 1;
              v119 = 2 * v114 + 2;
              if (v119 >= v11) {
                v114 = (2 * v114) | 1;
              }
              else {
                v120 = *v118;
                if (*v118 != 0) {
                  LODWORD(v120) = *(_WORD*)(v120 + 16) & 0xFFF;
                }
                v155 = v120;
                v123 = v116[2];
                v122 = v116 + 2;
                v121 = v123;
                if (v123 != 0) {
                  LODWORD(v121) = *(_WORD*)(v121 + 16) & 0xFFF;
                }
                v154 = v121;
                v124 = game_GetSkillInfo(&v155, **a3);
                result = game_GetSkillInfo(&v154, **a3);
                if (v124 <= (unsigned int)result) {
                  v114 = v117;
                }
                else {
                  v118 = v122;
                  v114 = v119;
                }
              }
              *v115 = *v118;
              v115 = v118;
            } while (v114 <= (__int64)((unsigned __int64)(v11 - 2) >> 1));
            v10 = v153 - 1;
            if (v118 == v153 - 1) {
              *v118 = v151;
            }
            else {
              *v118 = *v10;
              *v10 = v151;
              v125 = ((char*)v118 - (char*)v8 + 8) >> 3;
              v113 = v125 < 2;
              v126 = v125 - 2;
              if (!v113) {
                v127 = v126 >> 1;
                v128 = &v8[v126 >> 1];
                v129 = *v128;
                if (*v128 != 0) {
                  LODWORD(v129) = *(_WORD*)(v129 + 16) & 0xFFF;
                }
                v155 = v129;
                v130 = *v118;
                if (*v118 != 0) {
                  LODWORD(v130) = *(_WORD*)(v130 + 16) & 0xFFF;
                }
                v154 = v130;
                v131 = game_GetSkillInfo(&v155, **a3);
                result = game_GetSkillInfo(&v154, **a3);
                if (v131 > (unsigned int)result) {
                  v132 = *v118;
                  do {
                    v135 = v128;
                    *v118 = *v128;
                    if (v127 == 0) {
                      break;
                    }
                    v127 = (v127 - 1) >> 1;
                    v128 = &v8[v127];
                    v136 = *v128;
                    if (*v128 != 0) {
                      LODWORD(v136) = *(_WORD*)(v136 + 16) & 0xFFF;
                    }
                    v155 = v136;
                    v133 = v132 != 0 ? *(_WORD*)(v132 + 16) & 0xFFF : 0;
                    v154 = v133;
                    v134 = game_GetSkillInfo(&v155, **a3);
                    result = game_GetSkillInfo(&v154, **a3);
                    v118 = v135;
                  } while (v134 > (unsigned int)result);
                  *v135 = v132;
                }
              }
            }
            v113 = v11-- <= 2;
          } while (!v113);
          return result;
        }
      }
      v103 = *v100;
      while (1) {
        v106 = v94;
        *v100 = *v94;
        if (v150 < v93) {
        LABEL_152:
          *v106 = v103;
          v10 = v152;
          v92 = v148;
          goto LABEL_153;
        }
        v107 = (2 * v93) | 1;
        v94 = &v8[v107];
        if (2 * v93 + 2 < v11) {
          break;
        }
        v93 = (2 * v93) | 1;
        v112 = *v94;
        if (*v94 != 0) {
          goto LABEL_183;
        }
      LABEL_184:
        v155 = v112;
        if (v103 != 0) {
          v104 = *(_WORD*)(v103 + 16) & 0xFFF;
        }
        else {
          v104 = 0;
        }
        v154 = v104;
        v105 = game_GetSkillInfo(&v155, **a3);
        result = game_GetSkillInfo(&v154, **a3);
        v100 = v106;
        if (v105 > (unsigned int)result) {
          goto LABEL_152;
        }
      }
      v108 = *v94;
      if (*v94 != 0) {
        LODWORD(v108) = *(_WORD*)(v108 + 16) & 0xFFF;
      }
      v155 = v108;
      v110 = v94[1];
      ++v94;
      v109 = v110;
      if (v110 != 0) {
        LODWORD(v109) = *(_WORD*)(v109 + 16) & 0xFFF;
      }
      v154 = v109;
      v111 = game_GetSkillInfo(&v155, **a3);
      if (v111 > (unsigned int)game_GetSkillInfo(&v154, **a3)) {
        v93 = 2 * v93 + 2;
      }
      else {
        v94 = &v8[v107];
        v93 = (2 * v93) | 1;
      }
      v112 = *v94;
      if (*v94 == 0) {
        goto LABEL_184;
      }
    LABEL_183:
      LODWORD(v112) = *(_WORD*)(v112 + 16) & 0xFFF;
      goto LABEL_184;
    }
    v12 = &v9[(unsigned __int64)v11 >> 1];
    if ((unsigned __int64)v11 < 0x81) {
      GameRoutine_15a3d30(&v8[(unsigned __int64)v11 >> 1], v8, v149, a3);
      --a4;
      if ((a5 & 1) != 0) {
        goto LABEL_21;
      }
    }
    else {
      GameRoutine_15a3d30(v8, &v8[(unsigned __int64)v11 >> 1], v149, a3);
      GameRoutine_15a3d30(v8 + 1, v12 - 1, v147, a3);
      GameRoutine_15a3d30(v8 + 2, v12 + 1, v146, a3);
      GameRoutine_15a3d30(v12 - 1, &v8[(unsigned __int64)v11 >> 1], v12 + 1,
                          a3);
      v13 = *v8;
      *v8 = *v12;
      *v12 = v13;
      --a4;
      if ((a5 & 1) != 0) {
        goto LABEL_21;
      }
    }
    v14 = *(v8 - 1);
    if (v14 != 0) {
      LODWORD(v14) = *(_WORD*)(v14 + 16) & 0xFFF;
    }
    v155 = v14;
    v15 = *v8;
    if (*v8 != 0) {
      LODWORD(v15) = *(_WORD*)(v15 + 16) & 0xFFF;
    }
    v154 = v15;
    v16 = game_GetSkillInfo(&v155, **a3);
    if (v16 <= (unsigned int)game_GetSkillInfo(&v154, **a3)) {
      v45 = *v8;
      if (*v8 != 0) {
        v46 = *(_WORD*)(v45 + 16) & 0xFFF;
      }
      else {
        v46 = 0;
      }
      v155 = v46;
      v47 = *v149;
      if (*v149 != 0) {
        LODWORD(v47) = *(_WORD*)(v47 + 16) & 0xFFF;
      }
      v154 = v47;
      v48 = game_GetSkillInfo(&v155, **a3);
      result = game_GetSkillInfo(&v154, **a3);
      if (v48 <= (unsigned int)result) {
        v53 = v8 + 1;
        do {
          v9 = v53;
          if (v53 >= v152) {
            break;
          }
          if (v45 != 0) {
            v55 = *(_WORD*)(v45 + 16) & 0xFFF;
          }
          else {
            v55 = 0;
          }
          v155 = v55;
          v56 = *v9;
          if (*v9 != 0) {
            LODWORD(v56) = *(_WORD*)(v56 + 16) & 0xFFF;
          }
          v154 = v56;
          v54 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
          v53 = v9 + 1;
        } while (v54 <= (unsigned int)result);
      }
      else {
        v9 = v8;
        do {
          if (v45 != 0) {
            v50 = *(_WORD*)(v45 + 16) & 0xFFF;
          }
          else {
            v50 = 0;
          }
          v155 = v50;
          v52 = v9[1];
          ++v9;
          v51 = v52;
          if (v52 != 0) {
            LODWORD(v51) = *(_WORD*)(v51 + 16) & 0xFFF;
          }
          v154 = v51;
          v49 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
        } while (v49 <= (unsigned int)result);
      }
      v57 = v152;
      if (v9 < v152) {
        v57 = v152;
        do {
          if (v45 != 0) {
            v59 = *(_WORD*)(v45 + 16) & 0xFFF;
          }
          else {
            v59 = 0;
          }
          v155 = v59;
          v61 = *--v57;
          v60 = v61;
          if (v61 != 0) {
            LODWORD(v60) = *(_WORD*)(v60 + 16) & 0xFFF;
          }
          v154 = v60;
          v58 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
        } while (v58 > (unsigned int)result);
      }
      while (v9 < v57) {
        v62 = *v9;
        *v9 = *v57;
        *v57 = v62;
        do {
          if (v45 != 0) {
            v64 = *(_WORD*)(v45 + 16) & 0xFFF;
          }
          else {
            v64 = 0;
          }
          v155 = v64;
          v66 = v9[1];
          ++v9;
          v65 = v66;
          if (v66 != 0) {
            LODWORD(v65) = *(_WORD*)(v65 + 16) & 0xFFF;
          }
          v154 = v65;
          v63 = game_GetSkillInfo(&v155, **a3);
        } while (v63 <= (unsigned int)game_GetSkillInfo(&v154, **a3));
        do {
          if (v45 != 0) {
            v68 = *(_WORD*)(v45 + 16) & 0xFFF;
          }
          else {
            v68 = 0;
          }
          v155 = v68;
          v70 = *--v57;
          v69 = v70;
          if (v70 != 0) {
            LODWORD(v69) = *(_WORD*)(v69 + 16) & 0xFFF;
          }
          v154 = v69;
          v67 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
        } while (v67 > (unsigned int)result);
      }
      v71 = v9 - 1;
      if (v8 != v9 - 1) {
        *v8 = *v71;
      }
      a5 = 0;
      *v71 = v45;
    }
    else {
    LABEL_21:
      v17 = *v8;
      v18 = 0;
      do {
        v21 = v8[v18 + 1];
        if (v21 != 0) {
          LODWORD(v21) = *(_WORD*)(v21 + 16) & 0xFFF;
        }
        v155 = v21;
        if (v17 != 0) {
          v19 = *(_WORD*)(v17 + 16) & 0xFFF;
        }
        else {
          v19 = 0;
        }
        v154 = v19;
        v20 = game_GetSkillInfo(&v155, **a3);
        ++v18;
      } while (v20 > (unsigned int)game_GetSkillInfo(&v154, **a3));
      v22 = &v8[v18];
      v23 = v152;
      if (v18 == 1) {
        v23 = v152;
        do {
          if (v22 >= v23) {
            break;
          }
          v31 = *--v23;
          v30 = v31;
          if (v31 != 0) {
            LODWORD(v30) = *(_WORD*)(v30 + 16) & 0xFFF;
          }
          v155 = v30;
          v28 = v17 != 0 ? *(_WORD*)(v17 + 16) & 0xFFF : 0;
          v154 = v28;
          v29 = game_GetSkillInfo(&v155, **a3);
        } while (v29 <= (unsigned int)game_GetSkillInfo(&v154, **a3));
      }
      else {
        do {
          v27 = *--v23;
          v26 = v27;
          if (v27 != 0) {
            LODWORD(v26) = *(_WORD*)(v26 + 16) & 0xFFF;
          }
          v155 = v26;
          if (v17 != 0) {
            v24 = *(_WORD*)(v17 + 16) & 0xFFF;
          }
          else {
            v24 = 0;
          }
          v154 = v24;
          v25 = game_GetSkillInfo(&v155, **a3);
        } while (v25 <= (unsigned int)game_GetSkillInfo(&v154, **a3));
      }
      if (v22 >= v23) {
        v43 = v22 - 1;
        if (v8 != v22 - 1) {
          goto LABEL_62;
        }
      }
      else {
        v32 = &v8[v18];
        v33 = v23;
        do {
          v34 = *v32;
          *v32 = *v33;
          *v33 = v34;
          do {
            v38 = v32[1];
            ++v32;
            v37 = v38;
            if (v38 != 0) {
              LODWORD(v37) = *(_WORD*)(v37 + 16) & 0xFFF;
            }
            v155 = v37;
            if (v17 != 0) {
              v35 = *(_WORD*)(v17 + 16) & 0xFFF;
            }
            else {
              v35 = 0;
            }
            v154 = v35;
            v36 = game_GetSkillInfo(&v155, **a3);
          } while (v36 > (unsigned int)game_GetSkillInfo(&v154, **a3));
          do {
            v42 = *--v33;
            v41 = v42;
            if (v42 != 0) {
              LODWORD(v41) = *(_WORD*)(v41 + 16) & 0xFFF;
            }
            v155 = v41;
            if (v17 != 0) {
              v39 = *(_WORD*)(v17 + 16) & 0xFFF;
            }
            else {
              v39 = 0;
            }
            v154 = v39;
            v40 = game_GetSkillInfo(&v155, **a3);
          } while (v40 <= (unsigned int)game_GetSkillInfo(&v154, **a3));
        } while (v32 < v33);
        v43 = v32 - 1;
        if (v8 != v32 - 1) {
        LABEL_62:
          *v8 = *v43;
        }
      }
      *v43 = v17;
      if (v22 < v23) {
        goto LABEL_66;
      }
      v9 = v43 + 1;
      v44 = GameRoutine_15a42e0(v8, v43, a3);
      result = GameRoutine_15a42e0(v43 + 1, v152, a3);
      if ((result & 1) != 0) {
        a2 = v43;
        if (v44) {
          return result;
        }
        goto LABEL_2;
      }
      if (!v44) {
      LABEL_66:
        result = game_gameui_15a2ea0((__int64)v8, v43, a3, a4, a5 & 1);
        a5 = 0;
        v9 = v43 + 1;
      }
    }
  }
  v76 = v9 + 1;
  v78 = v9 == v152 || v76 == v152;
  if ((a5 & 1) != 0) {
    if (v78) {
      return result;
    }
    v79 = 0;
    v80 = v9;
    while (1) {
      v82 = v76;
      v83 = v80[1];
      if (v83 != 0) {
        LODWORD(v83) = *(_WORD*)(v83 + 16) & 0xFFF;
      }
      v155 = v83;
      v84 = *v80;
      if (*v80 != 0) {
        LODWORD(v84) = *(_WORD*)(v84 + 16) & 0xFFF;
      }
      v154 = v84;
      v85 = game_GetSkillInfo(&v155, **a3);
      result = game_GetSkillInfo(&v154, **a3);
      if (v85 > (unsigned int)result) {
        v86 = *v82;
        v87 = v79;
        do {
          *(__int64*)((char*)v9 + v87 + 8) = *(__int64*)((char*)v9 + v87);
          if (v87 == 0) {
            v81 = v9;
            goto LABEL_134;
          }
          if (v86 != 0) {
            v89 = *(_WORD*)(v86 + 16) & 0xFFF;
          }
          else {
            v89 = 0;
          }
          v155 = v89;
          v90 = *(__int64*)((char*)v9 + v87 - 8);
          if (v90 != 0) {
            LODWORD(v90) = *(_WORD*)(v90 + 16) & 0xFFF;
          }
          v154 = v90;
          v88 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
          v87 -= 8;
        } while (v88 > (unsigned int)result);
        v81 = (__int64*)((char*)v9 + v87 + 8);
      LABEL_134:
        *v81 = v86;
      }
      v76 = v82 + 1;
      v79 += 8;
      v80 = v82;
      if (v82 + 1 == v152) {
        return result;
      }
    }
  }
  if (!v78) {
    do {
      v137 = v76;
      v138 = v8[1];
      if (v138 != 0) {
        LODWORD(v138) = *(_WORD*)(v138 + 16) & 0xFFF;
      }
      v155 = v138;
      v139 = *v8;
      if (*v8 != 0) {
        LODWORD(v139) = *(_WORD*)(v139 + 16) & 0xFFF;
      }
      v154 = v139;
      v140 = game_GetSkillInfo(&v155, **a3);
      result = game_GetSkillInfo(&v154, **a3);
      if (v140 > (unsigned int)result) {
        v141 = *v137;
        v142 = v137;
        do {
          *v142 = *(v142 - 1);
          if (v141 != 0) {
            v144 = *(_WORD*)(v141 + 16) & 0xFFF;
          }
          else {
            v144 = 0;
          }
          v155 = v144;
          v145 = *(v142 - 2);
          if (v145 != 0) {
            LODWORD(v145) = *(_WORD*)(v145 + 16) & 0xFFF;
          }
          v154 = v145;
          v143 = game_GetSkillInfo(&v155, **a3);
          result = game_GetSkillInfo(&v154, **a3);
          --v142;
        } while (v143 > (unsigned int)result);
        *v142 = v141;
      }
      v76 = v137 + 1;
      v8 = v137;
    } while (v137 + 1 != v152);
  }
  return result;
}

__attribute__((swiftcall)) void

game_gameui_15a4990(PSEUDO_X8 x8_, __int64 result, unsigned int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int16* v4;
  int* v6;
  int* v7;
  int v8;
  int v10;
  int v11;
  bool v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  __int64 v16;
  __int64 v18;
  int v19;
  int v20;
  _QWORD* v21;
  _BOOL4 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  int* v30;
  int v31;
  int v33;
  __int64 v34;
  bool v35;
  int v37;
  int v38;

  v3 = *a2;
  v4 = **(unsigned __int16***)(result + 8);
  if ((unsigned int)v3 <= 0x10 && ((1 << v3) & 0x1D800) != 0) {
  LABEL_5:
    if ((unsigned int)v3 <= 0x2A) {
      switch (v3) {
      case 0LL:
      case 1LL:
      case 2LL:
      case 7LL:
        v6 = *(int**)(result + 16);
        v7 = *(int**)(result + 24);
        v8 = *((unsigned __int8*)v6 + 40);
        if ((unsigned int)v3 > 7 || ((1 << v3) & 0xE7) == 0) {
          v10 = 0;
        }
        else {
          v10 = *v6;
        }
        v11 = v10;
        if (*((unsigned __int8*)v7 + 40) != v8) {
          goto LABEL_17;
        }
        v11 = 0;
        if ((unsigned int)v3 <= 7 && ((1 << v3) & 0xE7) != 0) {
          v11 = *v7;
        LABEL_17:
          if ((_DWORD)v3 == 1) {
            if (v4 == nullptr) {
              v12 = false;
            LABEL_32:
              *(_DWORD*)a3 = v3;
              goto LABEL_85;
            }
          LABEL_31:
            v12 = (*((_BYTE*)v4 + 3) & 8) != 0;
            goto LABEL_32;
          }
        }
        if (v4 != nullptr && (_DWORD)v3 == 2 &&
            (unsigned int)*(
                unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *v4) +
                                  72LL) -
                    5 >=
                2) {
          goto LABEL_31;
        }
      LABEL_42:
        *(_DWORD*)a3 = v3;
      LABEL_46:
        *(_WORD*)(a3 + 4) = 1;
        break;
      case 3LL:
      case 4LL:
      case 5LL:
      case 6LL:
      case 8LL:
      case 9LL:
      case 13LL:
      case 14LL:
      case 15LL:
      case 16LL:
      case 18LL:
      case 19LL:
      case 21LL:
      case 22LL:
      case 23LL:
      case 24LL:
      case 25LL:
      case 26LL:
      case 27LL:
      case 28LL:
      case 29LL:
      case 30LL:
      case 31LL:
      case 32LL:
      case 33LL:
      case 34LL:
      case 35LL:
      case 36LL:
      case 37LL:
        goto LABEL_56;
      case 10LL:
        v10 = *(_DWORD*)(*(_QWORD*)(result + 16) + 4LL);
        v11 = *(_DWORD*)(*(_QWORD*)(result + 24) + 4LL);
        if (v4 != nullptr) {
          goto LABEL_55;
        }
        v12 = false;
        goto LABEL_84;
      case 11LL:
      case 12LL:
        if (v4 != nullptr) {
          v16 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v4);
          if (*(unsigned __int8*)(v16 + 72) <= 7u &&
              ((1LL << *(_BYTE*)(v16 + 73)) & 0x7DC) != 0) {
            *(_DWORD*)a3 = v3;
            *(_WORD*)(a3 + 4) = 0;
            *(_BYTE*)(a3 + 16) = 1;
            *(_DWORD*)(a3 + 8) = -1;
            goto LABEL_68;
          }
        }
        v18 = 28;
        if ((_DWORD)v3 == 11) {
          v18 = 16;
        }
        v11 = *(_DWORD*)(*(_QWORD*)(result + 24) + v18);
        v10 = *(_DWORD*)(*(_QWORD*)(result + 16) + v18);
        goto LABEL_42;
      case 17LL: {
        (__int64)X8CALL_X0(
            _WORD*, game_gameui_1594d10((void*)(a3), **(_WORD***)(result + 8),
                                        17, **(_QWORD**)(result + 32)));
        return;
      }
      case 20LL:
        v23 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                    8LL * *v4) +
                         24LL);
        v25 = *(_QWORD*)(v23 + 8);
        v26 = *(_QWORD*)(v23 + 16);
        v24 = v23 + 8;
        v27 = *(unsigned int*)((char*)((_UNKNOWN*)0x1C0LL) +
                               game_g_shared_system_skills_ptr);
        v38 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1C0LL) +
                         game_g_shared_system_skills_ptr) &
              0xFFF;
        if (((v27 >> 5) & 0x7F) + 1 <= (v26 - v25) >> 2 &&
            ((*(_DWORD*)(v25 + 4 * ((v27 >> 5) & 0x7F)) >> v27) & 1) != 0) {
          v28 = result;
          v29 = a3;
          result = game_HasActiveSkill_843420(&v38, v24);
          a3 = v29;
          if ((result & 1) != 0) {
            v19 = 20;
            v10 = *(_DWORD*)(*(_QWORD*)(v28 + 16) + 32LL);
            v11 = *(_DWORD*)(*(_QWORD*)(v28 + 24) + 32LL);
          LABEL_45:
            *(_DWORD*)a3 = v19;
            goto LABEL_46;
          }
        }
        v20 = 20;
      LABEL_67:
        *(_DWORD*)a3 = v20;
        *(_WORD*)(a3 + 4) = 0;
        *(_DWORD*)(a3 + 8) = -1;
        *(_BYTE*)(a3 + 16) = 1;
      LABEL_68:
        *(_QWORD*)(a3 + 32) = 0;
        *(_QWORD*)(a3 + 40) = 0;
        *(_QWORD*)(a3 + 48) = 0;
        *(_DWORD*)(a3 + 56) = 0;
        {
          result;
          return;
        }
      case 38LL:
        v19 = 38;
        v10 = *(_DWORD*)(*(_QWORD*)(result + 16) + 36LL);
        v11 = *(_DWORD*)(*(_QWORD*)(result + 24) + 36LL);
        goto LABEL_45;
      case 39LL:
        v21 = *(_QWORD**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v4);
        *(_DWORD*)a3 = 39;
        v22 = v21 != nullptr && *v21 != 0;
        v34 = 0;
        *(_BYTE*)(a3 + 4) = v22;
        *(_BYTE*)(a3 + 5) = 0;
        *(_QWORD*)(a3 + 32) = 0;
        *(_QWORD*)(a3 + 40) = 0;
        *(_QWORD*)(a3 + 48) = 0;
        *(_DWORD*)(a3 + 56) = 0;
        *(_DWORD*)(a3 + 8) = -1;
        *(_BYTE*)(a3 + 16) = 1;
        if (v22) {
          v34 = v21[3] + 488LL;
        }
        *(_QWORD*)(a3 + 16) = v34;
        {
          result;
          return;
        }
      case 40LL:
      case 41LL: {
        GameRoutine_1584650(a3, v3, v4, **(_QWORD**)(result + 32));
        return;
      }
      case 42LL:
        v20 = 42;
        goto LABEL_67;
      default:
        abort();
      }
      goto LABEL_86;
    }
  LABEL_56:
    v30 = *(int**)(result + 16);
    v31 = 0;
    if ((int)v3 <= 12) {
      if ((unsigned int)(v3 - 5) < 4 || (unsigned int)v3 < 3) {
        v31 = *v30;
      }
      goto LABEL_62;
    }
    if ((int)v3 > 15) {
      switch ((_DWORD)v3) {
      case 0x10:
        v31 = v30[6];
        v33 = *(_DWORD*)(*(_QWORD*)(result + 24) + 24LL);
        break;
      case 0x14:
        v31 = v30[8];
        v33 = *(_DWORD*)(*(_QWORD*)(result + 24) + 32LL);
        break;
      case 0x26:
        v31 = v30[9];
        v33 = *(_DWORD*)(*(_QWORD*)(result + 24) + 36LL);
        break;
      default:
      LABEL_62:
        v33 = 0;
        if ((int)v3 <= 12 &&
            ((unsigned int)(v3 - 5) < 4 || (unsigned int)v3 < 3)) {
          v33 = **(_DWORD**)(result + 24);
        }
        break;
      }
    }
    else if ((_DWORD)v3 == 13) {
      v31 = v30[2];
      v33 = *(_DWORD*)(*(_QWORD*)(result + 24) + 8LL);
    }
    else if ((_DWORD)v3 == 14) {
      v31 = v30[3];
      v33 = *(_DWORD*)(*(_QWORD*)(result + 24) + 12LL);
    }
    else {
      v31 = v30[5];
      v33 = *(_DWORD*)(*(_QWORD*)(result + 24) + 20LL);
    }
    *(_DWORD*)a3 = v3;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 16) = v31;
    *(_DWORD*)(a3 + 20) = v33;
    *(_WORD*)(a3 + 4) = 1;
    *(_DWORD*)(a3 + 8) = -1;
    *(_DWORD*)(a3 + 24) = -1;
    {
      result;
      return;
    }
  }
  if (v4 != nullptr && *v4 != 0) {
    v13 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *v4);
    v14 = *(unsigned __int8*)(v13 + 72);
    if (v14 - 5 > 1) {
      if (v14 < 8 || v14 == 13 && (unsigned int)v3 <= 0x26 &&
                         ((1LL << v3) & 0x4000143400LL) != 0) {
        goto LABEL_5;
      }
    }
    else {
      v15 = *(unsigned __int8*)(v13 + 73);
      if (v15 == 1) {
        if ((_DWORD)v3 != 39) {
          goto LABEL_5;
        }
      }
      else if (v15 == 2) {
        if ((unsigned int)v3 <= 0x11 && ((1 << v3) & 0x20190) != 0) {
          goto LABEL_5;
        }
      }
      else {
        if ((_DWORD)v3 == 17) {
          (__int64)X8CALL_X0(
              _WORD*, game_gameui_1594d10((void*)(a3), **(_WORD***)(result + 8),
                                          17, **(_QWORD**)(result + 32)));
          return;
        }
        if ((_DWORD)v3 == 10 && v15 == 7) {
          v10 = *(_DWORD*)(*(_QWORD*)(result + 16) + 4LL);
          v11 = *(_DWORD*)(*(_QWORD*)(result + 24) + 4LL);
        LABEL_55:
          v12 = (*((_BYTE*)v4 + 3) & 8) != 0;
        LABEL_84:
          *(_DWORD*)a3 = 10;
        LABEL_85:
          *(_BYTE*)(a3 + 5) = v12;
          *(_BYTE*)(a3 + 4) = 1;
        LABEL_86:
          *(_QWORD*)(a3 + 32) = 0;
          *(_QWORD*)(a3 + 40) = 0;
          *(_QWORD*)(a3 + 48) = 0;
          *(_DWORD*)(a3 + 56) = 0;
          *(_DWORD*)(a3 + 16) = v10;
          *(_DWORD*)(a3 + 20) = v11;
          *(_DWORD*)(a3 + 8) = -1;
          *(_DWORD*)(a3 + 24) = -1;
          {
            result;
            return;
          }
        }
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
  if ((_DWORD)v3 == 40) {
    if ((unsigned __int8)GameData_21759e0 == 122) {
      v37 = 41;
      if ((GameData_21759e0 & 0xFFFFFF000000LL) != 0x6E6148000000LL ||
          BYTE1(GameData_21759e0) != 104 || BYTE2(GameData_21759e0) != 45) {
        goto LABEL_123;
      }
      if (BYTE6(GameData_21759e0) != 116 && BYTE6(GameData_21759e0) != 115 ||
          HIBYTE(GameData_21759e0) != 0) {
        goto LABEL_124;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 == 107) {
      if (BYTE1(GameData_21759e0) != 111 || BYTE2(GameData_21759e0) != 0) {
        goto LABEL_124;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 != 106 ||
             (BYTE1(GameData_21759e0) == 97
                  ? (v35 = BYTE2(GameData_21759e0) == 0)
                  : (v35 = false),
              !v35)) {
    LABEL_124:
      *(_DWORD*)a3 = 41;
      {
        result;
        return;
      }
    }
    v37 = 40;
  LABEL_123:
    *(_DWORD*)a3 = v37;
  }
  {
    result;
    return;
  }
}

__int64 game_gameui_15acda0(__int64 a1, unsigned __int8* a2)
{
  __int64 v3;
  char v4;
  _DWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  _QWORD* v11;
  __int64 v12;
  unsigned int v13;
  char v14;
  unsigned __int64 v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  char v28;
  __int64 v29;
  __int64* v30;
  __int64 result;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  const char* v38[2];
  struct {
    __int64 v39;
    __int64 v40;
  } v39_;

  v3 = *a2;
  v4 = Util_1580a10_alt1(*(_QWORD*)(a1 + 8), *a2);
  v5 = (_DWORD*)game_g_shared_system_skills_ptr;
  v10 = false;
  if ((v3 & 0xFFFFFFFD) == 9) {
    v6 = *(_QWORD*)(a1 + 8);
    v7 = *(unsigned int*)((char*)((_UNKNOWN*)0x1B4LL) +
                          game_g_shared_system_skills_ptr);
    v8 = *(_QWORD*)(v6 + 1752);
    v9 = *(_QWORD*)(v6 + 1744);
    LODWORD(v39_.v39) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1B4LL) +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF;
    if (((v7 >> 5) & 0x7F) + 1 <= (v8 - v9) >> 2 &&
        ((*(_DWORD*)(v9 + 4 * ((v7 >> 5) & 0x7F)) >> v7) & 1) != 0 &&
        game_HasActiveSkill_843420_alt1(&v39_.v39, v6 + 1744)) {
      v10 = true;
    }
  }
  v11 = *(_QWORD**)(a1 + 8);
  v12 = *(_QWORD*)(a1 + 48);
  v13 = *((unsigned __int8*)v11 + v3 + 540);
  v14 = v12 != 0 && v13 > *(unsigned __int8*)(v12 + v3 + 540);
  v15 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  if ((int)v15 < 1) {
    LOBYTE(v16) = 0;
  LABEL_26:
    if (v13 >= (unsigned __int8)v16) {
      goto LABEL_36;
    }
  }
  else {
    v16 = 0;
    if ((unsigned int)v15 >= 0xC) {
      v17 = 12;
    }
    else {
      v17 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v18 = *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v15 - 1));
    v19 = *(_DWORD*)(GameData_21d99a8 + 4LL * v17 - 4);
    if (v18 >= v19) {
      v18 = v19;
    }
    if (v19 >= (signed __int32)*(_DWORD*)GameData_21d99a8) {
      v20 = v18;
    }
    else {
      v20 = *(_DWORD*)GameData_21d99a8;
    }
    while (1) {
      v21 = (unsigned int)(v16 + v15) >> 1;
      v22 = *(_DWORD*)(GameData_21d99a8 + 4LL * v21);
      if (v20 == v22) {
        break;
      }
      if (v20 < v22) {
        LODWORD(v15) = (unsigned int)(v16 + v15) >> 1;
      }
      else {
        v16 = v21 + 1;
      }
      if (v16 >= (int)v15) {
        goto LABEL_26;
      }
    }
    if (v13 >= (unsigned __int8)(v21 + 1)) {
      goto LABEL_36;
    }
  }
  v23 = (unsigned int)*v5;
  v24 = v11[218];
  v25 = v11[219] - v24;
  LODWORD(v39_.v39) = *v5 & 0xFFF;
  if (((v23 >> 5) & 0x7F) + 1 <= v25 >> 2 &&
      ((*(_DWORD*)(v24 + 4 * ((v23 >> 5) & 0x7F)) >> v23) & 1) != 0 &&
      game_HasActiveSkill_843420_alt1(&v39_.v39, (__int64)(v11 + 218))) {
    v26 = v11[55];
    v27 = v26 != 0 ? *(_BYTE*)(v26 + 16) : 9;
    if (((1 << v27) & 0xF1) != 0) {
    LABEL_36:
      v28 = *(_BYTE*)(a1 + 56);
      goto LABEL_40;
    }
  }
  v29 = v11[55];
  if (v29 != 0) {
    LOBYTE(v29) = (unsigned int)*(unsigned __int8*)(v29 + 16) - 1 < 3;
  }
  v28 = v29 & *(_BYTE*)(a1 + 56);
LABEL_40:
  v30 = *(__int64**)(a1 + 16);
  v38[0] = game_util_Format_alt2(*(const char**)(a1 + 24),
                                 **(unsigned int**)(a1 + 32));
  v38[1] = (const char*)strlen_alt1(v38[0]);
  result = X8CALL_X0(__int64,
                     game_gameui_15ad0c0_alt3((void*)(&v39_.v39), v30, v38));
  v32 = v39_.v40;
  if (v39_.v40 != 0) {
    v33 = std___1___shared_weak_count_lock_alt1(v39_.v40);
    v34 = v39_.v39;
    v35 = v33;
    result = std___1___shared_weak_count___release_weak_alt2(v32);
    if (v35 != 0 && v34 != 0) {
      v36 = *(_BYTE*)(a1 + 40);
      v37 = *(_QWORD*)(a1 + 8);
      *(_BYTE*)(v34 + 1073) = v3;
      result = (__int64)Util_1580bf0((__int64*)(v34 + 88), v37, v3,
                                     (v4 | v36) & 1, v14, 0, v10, v28 & 1);
    }
    else if (v35 == 0) {
      goto LABEL_47;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      result = std___1___shared_weak_count___release_weak_alt2(v35);
    }
  }
LABEL_47:
  ++**(_DWORD**)(a1 + 32);
  return result;
}

__attribute__((swiftcall)) void game_gameui_15ad0c0(PSEUDO_X8 x8_, __int64* a1,
                                                    __int64* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;
  struct {
    __int64 v21;
    __int64 v22;
  } v21_;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  result = a1[1];
  if (result == 0) {
    goto LABEL_33;
  }
  result = std___1___shared_weak_count_lock_alt1(result);
  if (result == 0) {
    goto LABEL_33;
  }
  v7 = *a1;
  v8 = result;
  if (*a1 != 0 &&
      (result = ui_LayoutAccessor_GetPartsLayout_alt1(a1, *a2)) != 0) {
    v9 = *(_QWORD*)(result + 24);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)GameData_212dfd0) != 0) {
      *GameData_212dfc8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
      __cxa_guard_release_alt1((__int64)GameData_212dfd0);
    }
    if (v9 == 0) {
      goto LABEL_14;
    }
    v10 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    if (v10 != GameData_212dfc8) {
      do {
        v10 = (__int64*)*v10;
      } while (v10 != GameData_212dfc8 && v10 != nullptr);
      if (v10 == nullptr) {
      LABEL_14:
        v9 = 0;
      }
    }
    Layout_1363f00_alt1((void*)(&v19_.v19), v7, v9);
    v21_.v21 = 0;
    v21_.v22 = 0;
    if (v19_.v20 != 0 &&
        (v12 = std___1___shared_weak_count_lock_alt1(v19_.v20), v21_.v22 = v12,
         v12 != 0) &&
        (v21_.v21 = v19_.v19, v19_.v19 != 0) &&
        (v13 = v12, (v14 = __dynamic_cast(v19_.v19, GameData_212dfc0[0],
                                          GameData_2131978[0], 0)) != 0)) {
      v15 = &v21_.v21;
      v23_.v23 = v14;
      v23_.v24 = v13;
    }
    else {
      v15 = &v23_.v23;
    }
    *v15 = 0;
    v15[1] = 0;
    v17 = v23_.v24;
    *a3 = v23_.v23;
    a3[1] = v17;
    if (v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak_alt2(v17);
      }
    }
    v18 = v21_.v22;
    if (v21_.v22 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v21_.v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak_alt2(v18);
    }
    result = v19_.v20;
    if (v19_.v20 != 0) {
      result = std___1___shared_weak_count___release_weak_alt2(v19_.v20);
    }
    v16 = 0;
  }
  else {
    v16 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v16 == 0) {
      result;
      return;
    }
    goto LABEL_33;
  }
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  result = std___1___shared_weak_count___release_weak_alt2(v8);
  if (v16 != 0) {
  LABEL_33:
    *a3 = 0;
    a3[1] = 0;
  }
  {
    result;
    return;
  }
}

void game_gameui_15ad3e0(__int64 a1, unsigned __int8* a2)
{

#pragma clang fp contract(off)
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
  unsigned __int64 v14;
  __int64 v15;
  bool v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _BOOL4 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  int v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  int v49;
  int v50;
  int v51;
  int v52;
  __int64 v53;
  char v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  char v59;
  _QWORD* v60;
  unsigned int v61;
  unsigned __int64 v62;
  int v63;
  unsigned int v64;
  int v65;
  int v66;
  int v67;
  unsigned int v68;
  int v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  char v74;
  char v75;
  __int64 v76;
  __int64* v77;
  __n128 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __n128 v82;
  char v83;
  __int64 v84;
  __int64 v85[2];
  struct {
    __int64 v86;
    __int64 v87;
  } v86_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  v3 = *a2;
  v4 = game_Unit_GetJob_alt1(*(_QWORD*)(a1 + 8)),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  if (v4 == 0) {
    LOBYTE(v19) = 0;
    v17 = 0;
    goto LABEL_70;
  }
  v11 = *(_QWORD*)(a1 + 8);
  if (v11 == 0 || (_DWORD)v3 != 10) {
    v17 = *(char*)(v4 + v3 + 398) > -1;
  LABEL_10:
    v18 = v4 + v3;
    goto LABEL_11;
  }
  v12 = *(_QWORD*)(v11 + 1744);
  v13 = *(_QWORD*)(v11 + 1752) - v12;
  LODWORD(v86_.v86) = GameData_21d992c & 0xFFF;
  v14 = ((unsigned __int64)(unsigned int)GameData_21d992c >> 5) & 0x7F;
  if (v14 + 1 <= v13 >> 2 &&
      ((*(_DWORD*)(v12 + 4LL * (unsigned int)v14) >> GameData_21d992c) & 1) !=
          0) {
    v15 = v4;
    v16 = game_HasActiveSkill_843420_alt1(&v86_.v86, v11 + 1744),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
    v11 = *(_QWORD*)(a1 + 8);
    if (v16) {
      v17 = 1;
      v4 = v15;
      if (v11 == 0) {
        goto LABEL_10;
      }
    }
    else {
      v4 = v15;
      v17 = *(char*)(v15 + 408) > -1;
      if (v11 == 0) {
        goto LABEL_10;
      }
    }
  }
  else {
    v17 = *(char*)(v4 + v3 + 398) > -1;
  }
  v35 = *(_QWORD*)(v11 + 1744);
  v36 = *(_QWORD*)(v11 + 1752) - v35;
  LODWORD(v86_.v86) = GameData_21d992c & 0xFFF;
  v37 = ((unsigned __int64)(unsigned int)GameData_21d992c >> 5) & 0x7F;
  if (v37 + 1 > v36 >> 2 ||
      ((*(_DWORD*)(v35 + 4LL * (unsigned int)v37) >> GameData_21d992c) & 1) ==
          0) {
    goto LABEL_10;
  }
  v38 = v4;
  if (game_HasActiveSkill_843420_alt1(&v86_.v86, v11 + 1744)) {
    LOBYTE(v19) = 1;
    v4 = v38;
    goto LABEL_18;
  }
  v4 = v38;
  v18 = v38 + 10;
LABEL_11:
  LOBYTE(v19) = *(char*)(v18 + 398) > -1;
  if ((_DWORD)v3 == 12) {
    v20 = *(_QWORD*)(a1 + 8);
    v21 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 1112LL);
    v22 = *(_QWORD*)(v20 + 1744);
    v23 = *(_QWORD*)(v20 + 1752) - v22;
    LODWORD(v86_.v86) = GameData_21d9948 & 0xFFF;
    v24 = ((unsigned __int64)(unsigned int)GameData_21d9948 >> 5) & 0x7F;
    if (v24 + 1 <= v23 >> 2 &&
        ((*(_DWORD*)(v22 + 4LL * (unsigned int)v24) >> GameData_21d9948) & 1) !=
            0) {
      v25 = v4;
      v26 = game_HasActiveSkill_843420_alt1(&v86_.v86, v20 + 1744),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
      v4 = v25;
    }
    else {
      v26 = false;
    }
    v19 = v21 == 0 && !v26;
    v17 = v19;
  }
LABEL_18:
  if (*(_QWORD*)(*(_QWORD*)(v4 + 24) + 1112LL) != 0 && (_DWORD)v3 != 8) {
    v27 = *(_QWORD*)(a1 + 8);
    if (*(int*)(v27 + 592) >= 2) {
      v28 = v4;
      if (*(_QWORD*)(v4 + 88) != 0) {
        v29 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 1112LL);
      }
      else {
        v29 = v4;
      }
      if ((_DWORD)v3 == 10 &&
          (v30 = *(_QWORD*)(v27 + 1744), v31 = *(_QWORD*)(v27 + 1752) - v30,
           LODWORD(v86_.v86) = GameData_21d992c & 0xFFF,
           (v32 = ((unsigned __int64)(unsigned int)GameData_21d992c >> 5) &
                  0x7F) +
                   1 <=
               v31 >> 2) &&
          ((*(_DWORD*)(v30 + 4LL * (unsigned int)v32) >> GameData_21d992c) &
           1) != 0) {
        if (game_HasActiveSkill_843420_alt1(&v86_.v86, v27 + 1744)) {
          goto LABEL_31;
        }
        v33 = 10;
      }
      else {
        v33 = v3;
      }
      if (*(char*)(v29 + v33 + 398) < 0) {
        goto LABEL_53;
      }
    LABEL_31:
      v34 = *(_QWORD*)(a1 + 8);
      if (*(_BYTE*)(a1 + 56) == 1) {
        LOBYTE(v19) = Util_1580a10_alt1(v34, v3),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
      LABEL_52:
        v17 = 1;
        goto LABEL_53;
      }
      if (v34 != 0) {
        if ((_DWORD)v3 == 10 &&
            (v39 = *(_QWORD*)(v34 + 1744), v40 = *(_QWORD*)(v34 + 1752) - v39,
             LODWORD(v86_.v86) = GameData_21d992c & 0xFFF,
             (v41 = ((unsigned __int64)(unsigned int)GameData_21d992c >> 5) &
                    0x7F) +
                     1 <=
                 v40 >> 2) &&
            ((*(_DWORD*)(v39 + 4LL * (unsigned int)v41) >> GameData_21d992c) &
             1) != 0) {
          if (game_HasActiveSkill_843420_alt1(&v86_.v86, v34 + 1744)) {
            v42 = *(char*)(v28 + 408);
            if (v42 <= 1) {
              v42 = 1;
            }
            goto LABEL_51;
          }
          v43 = v28 + 10;
        }
        else {
          v43 = v28 + v3;
        }
      }
      else {
        v43 = v28 + v3;
      }
      v42 = *(char*)(v43 + 398);
    LABEL_51:
      LOBYTE(v19) = v42 >= 0;
      goto LABEL_52;
    }
  }
LABEL_53:
  v44 = *(_QWORD**)(a1 + 8);
  if (v44[51] == 0) {
    goto LABEL_70;
  }
  v45 = v44[50];
  if ((_DWORD)v3 == 10) {
    v46 = v44[218];
    v47 = v44[219] - v46;
    LODWORD(v86_.v86) = GameData_21d992c & 0xFFF;
    v48 = ((unsigned __int64)(unsigned int)GameData_21d992c >> 5) & 0x7F;
    if (v48 + 1 <= v47 >> 2 &&
        ((*(_DWORD*)(v46 + 4LL * (unsigned int)v48) >> GameData_21d992c) & 1) !=
            0 &&
        game_HasActiveSkill_843420_alt1(&v86_.v86, (__int64)(v44 + 218))) {
      LOBYTE(v19) = 0;
      v49 = 1;
    }
    else {
      v52 = *(char*)(v45 + 408);
      LOBYTE(v19) = v19 & (v52 < 0);
      if (v52 > -1) {
        v49 = 1;
      }
      else {
        v49 = v17;
      }
    }
  LABEL_68:
    v51 = 1;
    goto LABEL_69;
  }
  v50 = *(char*)(v45 + v3 + 398);
  LOBYTE(v19) = v19 & (v50 < 0);
  if (v50 > -1) {
    v49 = 1;
  }
  else {
    v49 = v17;
  }
  if ((unsigned int)v3 > 0xC || ((1 << v3) & 0x1B00) == 0) {
    goto LABEL_68;
  }
  v51 = 0;
LABEL_69:
  v17 = v49 & v51;
LABEL_70:
  v53 = *(_QWORD*)(a1 + 48);
  v54 = v53 != 0 && *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + v3 + 540) >
                        (unsigned int)*(unsigned __int8*)(v53 + v3 + 540);
  v59 = false;
  if ((v3 & 0xFFFFFFFD) == 9) {
    v55 = *(_QWORD*)(a1 + 8);
    v56 = *(_QWORD*)(v55 + 1744);
    v57 = *(unsigned int*)((char*)((_UNKNOWN*)0x1B4LL) +
                           game_g_shared_system_skills_ptr);
    v58 = *(_QWORD*)(v55 + 1752) - v56;
    LODWORD(v86_.v86) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1B4LL) +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF;
    if (((v57 >> 5) & 0x7F) + 1 <= v58 >> 2 &&
        ((*(_DWORD*)(v56 + 4 * ((v57 >> 5) & 0x7F)) >> v57) & 1) != 0 &&
        game_HasActiveSkill_843420_alt1(&v86_.v86, v55 + 1744)) {
      v59 = true;
    }
  }
  v60 = *(_QWORD**)(a1 + 8);
  v61 = *((unsigned __int8*)v60 + v3 + 540);
  v62 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  if ((int)v62 < 1) {
  LABEL_99:
    v75 = 1;
    if (v17 == 0) {
      return;
    }
    goto LABEL_108;
  }
  v63 = 0;
  if ((unsigned int)v62 >= 0xC) {
    v64 = 12;
  }
  else {
    v64 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  }
  v65 = *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v62 - 1));
  v66 = *(_DWORD*)(GameData_21d99a8 + 4LL * v64 - 4);
  if (v65 >= v66) {
    v65 = v66;
  }
  if (v66 >= *(_DWORD*)GameData_21d99a8) {
    v67 = v65;
  }
  else {
    v67 = *(_DWORD*)GameData_21d99a8;
  }
  while (1) {
    v68 = (unsigned int)(v63 + v62) >> 1;
    v69 = *(_DWORD*)(GameData_21d99a8 + 4LL * v68);
    if (v67 == v69) {
      break;
    }
    if (v67 < v69) {
      LODWORD(v62) = (unsigned int)(v63 + v62) >> 1;
    }
    else {
      v63 = v68 + 1;
    }
    if (v63 >= (int)v62) {
      if (v61 >= (unsigned __int8)v63) {
        goto LABEL_99;
      }
      goto LABEL_94;
    }
  }
  if (v61 >= (unsigned __int8)(v68 + 1)) {
    goto LABEL_99;
  }
LABEL_94:
  v70 = v60[218];
  v71 = v60[219] - v70;
  LODWORD(v86_.v86) = game_g_shared_system_skills & 0xFFF;
  v72 =
      ((unsigned __int64)(unsigned int)game_g_shared_system_skills >> 5) & 0x7F;
  if (v72 + 1 > v71 >> 2 ||
      ((*(_DWORD*)(v70 + 4LL * (unsigned int)v72) >>
        game_g_shared_system_skills) &
       1) == 0 ||
      !game_HasActiveSkill_843420_alt1(&v86_.v86, (__int64)(v60 + 218)) ||
      ((v73 = v60[55]) == 0 ? (v74 = 9) : (v74 = *(_BYTE*)(v73 + 16)), v75 = 1,
       ((1 << v74) & 0xF1) == 0)) {
    v76 = v60[55];
    if (v76 == 0) {
      v75 = 0;
      if (v17 == 0) {
        return;
      }
      goto LABEL_108;
    }
    v75 = (unsigned int)*(unsigned __int8*)(v76 + 16) - 1 < 3;
  }
  if (v17 == 0) {
    return;
  }
LABEL_108:
  v77 = *(__int64**)(a1 + 16);
  v85[0] = (__int64)game_util_Format(*(_QWORD*)(a1 + 24),
                                     **(unsigned int**)(a1 + 32), v5, v6, v7,
                                     v8, v9, v10, v85[0]),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  v85[1] = strlen(v85[0]),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  game_gameui_15ad0c0_alt2((void*)(&v86_.v86), v77, v85, v78),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  if (v86_.v87 != 0) {
    v79 = std___1___shared_weak_count_lock(v86_.v87),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
    v80 = v86_.v86;
    v81 = v79;
    v82 = std___1___shared_weak_count___release_weak(),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
    if (v81 != 0 && v80 != 0) {
      v83 = *(_BYTE*)(a1 + 40);
      v84 = *(_QWORD*)(a1 + 8);
      *(_BYTE*)(v80 + 1073) = v3;
      v82 = Util_1580bf0_alt1((__int64*)(v80 + 88), v84, v3, (v19 | v83) & 1,
                              v54, 0, v59, v75, v82),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
      goto LABEL_115;
    }
    if (v81 != 0) {
    LABEL_115:
      if (atomic_fetch_add((atomic_ullong* volatile)(v81 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v81 + 16LL))(
            v81, *(long double*)&v82),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
        std___1___shared_weak_count___release_weak(),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
      }
    }
  }
  ++**(_DWORD**)(a1 + 32);
}

void game_gameui_15b0290(__int64 a1, int* a2, _DWORD* a3)
{
  int v3;
  __int64* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  int v12;
  _QWORD* v13;
  int v14;
  _QWORD* v15;
  int v16;
  int v17;
  bool v18;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  v3 = *a2;
  v5 = **(__int64***)(a1 + 8);
  v6 = game_util_Format_alt2("L_Status%02d", *a3);
  LayoutAccessor_1560070_alt1((void*)(&v19_.v19), v5, v6);
  if (v19_.v20 != 0) {
    v7 = std___1___shared_weak_count_lock_alt1(v19_.v20);
    if (v7 != 0) {
      v8 = v19_.v19;
    }
    else {
      v8 = 0;
    }
    if (v19_.v20 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v19_.v20);
    }
    if (v8 != 0) {
      if ((unsigned int)(v3 - 28) > 9) {
        v9 = 11;
      }
      else {
        v9 = GameData_1be04b8_alt1[v3 - 28];
      }
      v10 = 2LL * v9;
      v11 = *(unsigned __int16*)(*(_QWORD*)(a1 + 16) + v10);
      v12 = *(unsigned __int16*)(*(_QWORD*)(a1 + 24) + v10);
      v13 = **(_QWORD***)(a1 + 32);
      LOBYTE(v19_.v19) = v9;
      v14 = game_Unit_GetParamLimit_alt1(v13, (unsigned __int8*)&v19_.v19);
      v15 = **(_QWORD***)(a1 + 40);
      LOBYTE(v19_.v19) = v9;
      v16 = game_Unit_GetParamLimit_alt1(v15, (unsigned __int8*)&v19_.v19);
      v17 = **(unsigned __int8**)(a1 + 48);
      v19_.v19 = v8;
      v19_.v20 = v7;
      if (v17 != 0) {
        v18 = (__int16)v11 >= (__int16)v12;
      }
      else {
        v18 = v11 == v12;
      }
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_1587220_alt1((__int64)&v19_.v19, **(_QWORD**)(a1 + 40), v3,
                                 (__int16)v11, v14, (__int16)v12, v16,
                                 (v18 | **(_BYTE**)(a1 + 56)) & 1, 0);
        std___1___shared_weak_count___release_weak_alt2(v7);
      }
      else {
        GameRoutine_1587220_alt1((__int64)&v19_.v19, **(_QWORD**)(a1 + 40), v3,
                                 (__int16)v11, v14, (__int16)v12, v16,
                                 (v18 | **(_BYTE**)(a1 + 56)) & 1, 0);
      }
      **(_DWORD**)(a1 + 64) += (__int16)v11;
      **(_DWORD**)(a1 + 72) += (__int16)v12;
      **(_DWORD**)(a1 + 80) += v14;
      **(_DWORD**)(a1 + 88) += v16;
    }
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt2(v7);
    }
  }
}

__int64 game_gameui_15b05c0(__int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  unsigned int v4;
  unsigned int v5;
  bool v6;
  bool v7;
  char v8;
  unsigned __int8 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  char* v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  unsigned __int8 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  const char* v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
  char v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  char v47;
  char v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  _QWORD v54[2];
  char* v55;
  __int64* v56;
  __int64 v57;

  v2 = *a2;
  v4 = *(unsigned __int16*)(**(_QWORD**)(a1 + 8) + 2 * v2 + 514);
  v5 = *(unsigned __int16*)(**(_QWORD**)(a1 + 16) + 2 * v2 + 514);
  v6 = v4 == v5;
  v7 = v4 >= v5;
  v8 = v6;
  if (**(_BYTE**)(a1 + 24) != 0) {
    v9 = v7;
  }
  else {
    v9 = v8;
  }
  ++**(_DWORD**)(a1 + 32);
  v10 = game_util_Format_alt1("L_MasteryInfoItem%02d");
  v11 = strlen(v10);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(v11);
  }
  v12 = v11;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v13 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v14, 16, 0);
    v54[1] = v12;
    v55 = v13;
    v54[0] = v14 | 1;
    goto LABEL_15;
  }
  LOBYTE(v54[0]) = 2 * v11;
  v13 = (char*)v54 + 1;
  if (v11 != 0) {
  LABEL_15:
    memmove(v13, v10, v12);
  }
  v13[v12] = 0;
  if ((v54[0] & 1) != 0) {
    v15 = v55;
  }
  else {
    v15 = (char*)v54 + 1;
  }
  LayoutAccessor_1560070((void*)(&v52), **(__int64***)(a1 + 40), (__int64)v15);
  result = v53;
  if (v53 == 0) {
    goto LABEL_83;
  }
  v17 = **(_QWORD**)(a1 + 8);
  v18 = **(_QWORD**)(a1 + 16);
  v19 = **(_BYTE**)(a1 + 48);
  v20 = std___1___shared_weak_count_lock(v53);
  if (v20 != 0) {
    v21 = v52;
    v22 = v20;
    if (v52 == nullptr) {
      goto LABEL_79;
    }
    if (((v9 | v19) & 1) != 0) {
      v23 = "After_Off";
    }
    else {
      v23 = "Default";
    }
    LayoutAccessor_1562cf0(v52, v23);
    LayoutAccessor_1560070((void*)(&v56), v21, (__int64)"L_Status_00");
    if (v57 == 0) {
    LABEL_55:
      LayoutAccessor_1560070((void*)(&v56), v21, (__int64)"L_Status_01");
      if (v57 != 0) {
        v40 = std___1___shared_weak_count_lock(v57);
        v41 = v56;
        if (v57 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v57);
        }
        if (v40 != 0 && v41 != nullptr) {
          v42 = game_Unit_GetJob(v18);
          v48 = (_DWORD)v2 == 10 &&
                    (v43 = *(_QWORD*)(v18 + 1744),
                     v44 = *(_QWORD*)(v18 + 1752) - v43,
                     LODWORD(v56) = GameData_21d992c & 0xFFF,
                     (v45 = ((unsigned __int64)(unsigned int)GameData_21d992c >>
                             5) &
                            0x7F) +
                             1 <=
                         v44 >> 2) &&
                    ((*(_DWORD*)(v43 + 4LL * (unsigned int)v45) >>
                      GameData_21d992c) &
                     1) != 0 &&
                    (v46 = v42,
                     v47 = game_HasActiveSkill_843420(&v56, v18 + 1744),
                     v42 = v46, (v47 & 1) != 0) ||
                *(char*)(v42 + v2 + 398) > -1;
          Util_1580bf0(
              v41, v18, v2, v48,
              *(unsigned __int16*)(v17 + 2 * v2 + 514) <
                  (unsigned int)*(unsigned __int16*)(v18 + 2 * v2 + 514),
              0, 0, 0);
          LayoutAccessor_1560070((void*)(&v56), v41, (__int64)"L_Gauge");
          if (v57 != 0) {
            v49 = std___1___shared_weak_count_lock(v57);
            v50 = v56;
            if (v57 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v57);
            }
            if (v49 != 0 && v50 != nullptr) {
              LayoutAccessor_155e830_alt1(v50, 0);
              goto LABEL_75;
            }
            if (v49 != 0) {
            LABEL_75:
              if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
                std___1___shared_weak_count___release_weak_alt1(v49);
              }
            }
          }
        LABEL_77:
          if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
            std___1___shared_weak_count___release_weak_alt1(v40);
          }
          goto LABEL_79;
        }
        if (v40 != 0) {
          goto LABEL_77;
        }
      }
    LABEL_79:
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak_alt1(v22);
      }
      goto LABEL_81;
    }
    v24 = std___1___shared_weak_count_lock(v57);
    v25 = v56;
    if (v57 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v57);
    }
    if (v24 == 0 || v25 == nullptr) {
      if (v24 == 0) {
        goto LABEL_55;
      }
      goto LABEL_53;
    }
    v26 = game_g_shared_system_skills_ptr;
    v30 = false;
    if ((v2 & 0xFFFFFFFD) == 9) {
      v27 = *(unsigned int*)((char*)((_UNKNOWN*)0x1B4LL) +
                             game_g_shared_system_skills_ptr);
      v28 = *(_QWORD*)(v17 + 1744);
      v29 = *(_QWORD*)(v17 + 1752) - v28;
      LODWORD(v56) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1B4LL) +
                                game_g_shared_system_skills_ptr) &
                     0xFFF;
      if (((v27 >> 5) & 0x7F) + 1 <= v29 >> 2 &&
          ((*(_DWORD*)(v28 + 4 * ((v27 >> 5) & 0x7F)) >> v27) & 1) != 0 &&
          (game_HasActiveSkill_843420(&v56, v17 + 1744) & 1) != 0) {
        v30 = true;
      }
    }
    v31 = game_Unit_GetJob(v17);
    v37 = (_DWORD)v2 == 10 &&
              (v32 = *(unsigned int*)((char*)((_UNKNOWN*)0x228LL) + v26 + 4),
               v33 = *(_QWORD*)(v17 + 1744), v34 = *(_QWORD*)(v17 + 1752) - v33,
               LODWORD(v56) =
                   *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x228LL) + v26 + 4) & 0xFFF,
               ((v32 >> 5) & 0x7F) + 1 <= v34 >> 2) &&
              ((*(_DWORD*)(v33 + 4 * ((v32 >> 5) & 0x7F)) >> v32) & 1) != 0 &&
              (v35 = v31, v36 = game_HasActiveSkill_843420(&v56, v17 + 1744),
               v31 = v35, (v36 & 1) != 0) ||
          *(char*)(v31 + v2 + 398) > -1;
    Util_1580bf0(v25, v17, v2, v37, 0, 0, v30, 0);
    LayoutAccessor_1560070((void*)(&v56), v25, (__int64)"L_Gauge");
    if (v57 != 0) {
      v38 = std___1___shared_weak_count_lock(v57);
      v39 = v56;
      if (v57 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v57);
      }
      if (v38 != 0 && v39 != nullptr) {
        LayoutAccessor_155e830_alt1(v39, 0);
        goto LABEL_51;
      }
      if (v38 != 0) {
      LABEL_51:
        if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
          std___1___shared_weak_count___release_weak_alt1(v38);
        }
      }
    }
  LABEL_53:
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak_alt1(v24);
    }
    goto LABEL_55;
  }
LABEL_81:
  result = v53;
  if (v53 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v53);
  }
LABEL_83:
  if ((v54[0] & 1) != 0 && v55 != nullptr) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v51);
  }
  return result;
}

__attribute__((swiftcall)) void

game_gameui_15b4800(PSEUDO_X8 x8_, __int64 result, unsigned int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int16* v4;
  __int64 v6;
  int v7;
  unsigned __int16* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  int v13;
  unsigned __int16* v14;
  __int64 v15;
  char v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int16* v22;
  int v23;
  bool v25;
  _QWORD* v26;
  _BOOL4 v27;
  char v28;
  unsigned __int16* v29;
  int v30;
  int v31;
  int v32;
  bool v33;
  char v34;
  int v35;
  unsigned __int8* v36;
  bool v37;
  int v38;
  bool v39;
  unsigned __int8* v40;
  unsigned __int64 v41;
  int v42;
  int v43;
  int v44;
  __int64 v46;
  unsigned __int16* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  unsigned __int8* v57;
  int v58;
  int v59;
  __int64 v60;
  int v62;
  int v63;

  v3 = *a2;
  v4 = **(unsigned __int16***)(result + 8);
  if ((unsigned int)v3 > 0x10 || ((1 << v3) & 0x1D800) == 0) {
    if (v4 != nullptr && *v4 != 0) {
      v10 = *(_QWORD*)(GameData_21c99b8 + 64);
      v11 = *(_QWORD*)(v10 + 8LL * *v4);
      v12 = *(unsigned __int8*)(v11 + 72);
      if (v12 - 5 > 1) {
        if (v12 < 8 || v12 == 13 && (unsigned int)v3 <= 0x26 &&
                           ((1LL << v3) & 0x4000143400LL) != 0) {
          goto LABEL_5;
        }
      }
      else {
        v13 = *(unsigned __int8*)(v11 + 73);
        if (v13 == 1) {
          if ((_DWORD)v3 != 39) {
            goto LABEL_5;
          }
        }
        else if (v13 == 2) {
          if ((unsigned int)v3 <= 0x11 && ((1 << v3) & 0x20190) != 0) {
            goto LABEL_5;
          }
        }
        else {
          if ((_DWORD)v3 == 17) {
          LABEL_47:
            v36 = *(unsigned __int8**)(v11 + 192);
            v37 = v36 == nullptr || v12 > 7;
            if (v37 || v36[105] == 0) {
              v36 = nullptr;
              v40 = (unsigned __int8*)(v11 + 92);
            }
            else {
              v38 = v36[104];
              v39 = v38 == 2;
              if (v38 == 2) {
                v36 = nullptr;
              }
              v40 = v36 + 278;
              if (v39) {
                v40 = (unsigned __int8*)(v11 + 92);
              }
            }
            v57 = (unsigned __int8*)(v11 + 93);
            v58 = *v40;
            if (v36 != nullptr) {
              v57 = v36 + 279;
            }
            v59 = *v57;
            *(_DWORD*)a3 = 17;
            *(_QWORD*)(a3 + 32) = 0;
            *(_QWORD*)(a3 + 40) = 0;
            *(_QWORD*)(a3 + 48) = 0;
            *(_DWORD*)(a3 + 56) = 0;
            *(_WORD*)(a3 + 4) = 1;
            *(_DWORD*)(a3 + 8) = -1;
            *(_DWORD*)(a3 + 16) = v58;
            *(_DWORD*)(a3 + 20) = v59;
            *(_DWORD*)(a3 + 24) = v59;
            if ((v59 | v58) == 0) {
              *(_BYTE*)(a3 + 4) = 0;
            }
            {
              result;
              return;
            }
          }
          if ((_DWORD)v3 == 10 && v13 == 7) {
          LABEL_36:
            v28 = (*((_BYTE*)v4 + 3) & 8) != 0;
            v29 = **(unsigned __int16***)(result + 16);
            v30 = *(__int16*)(v11 + 116) >> v28;
            v31 = v30;
            if (v29 != nullptr) {
              v31 = *(__int16*)(*(_QWORD*)(v10 + 8LL * *v29) + 116LL) >>
                    ((*((_BYTE*)v29 + 3) & 8) != 0);
            }
            v32 = *(unsigned __int8*)(v11 + 72);
            *(_BYTE*)(a3 + 5) = v28;
            *(_QWORD*)(a3 + 32) = 0;
            *(_QWORD*)(a3 + 40) = 0;
            v33 = v30 == 0 && v32 == 13;
            *(_DWORD*)a3 = 10;
            *(_QWORD*)(a3 + 48) = 0;
            *(_DWORD*)(a3 + 56) = 0;
            *(_DWORD*)(a3 + 16) = v30;
            *(_DWORD*)(a3 + 20) = v31;
            v34 = !v33;
            *(_BYTE*)(a3 + 4) = v34;
            v35 = -1;
            *(_DWORD*)(a3 + 8) = -1;
          LABEL_45:
            *(_DWORD*)(a3 + 24) = v35;
            {
              result;
              return;
            }
          }
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
    if ((_DWORD)v3 != 40) {
      result;
      return;
    }
    v41 = GameData_21759e0;
    v42 = BYTE1(GameData_21759e0);
    v43 = BYTE2(GameData_21759e0);
    v44 = (unsigned __int8)GameData_21759e0;
    if ((unsigned __int8)GameData_21759e0 == 122) {
    LABEL_104:
      v62 = 41;
      if ((v41 & 0xFFFFFF000000LL) != 0x6E6148000000LL || v42 != 104 ||
          v43 != 45) {
        goto LABEL_112;
      }
      if (BYTE6(v41) != 116 && BYTE6(v41) != 115 || HIBYTE(v41) != 0) {
        goto LABEL_111;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 == 107) {
    LABEL_60:
      if (v42 != 111 || v43 != 0) {
      LABEL_111:
        v62 = 41;
        goto LABEL_112;
      }
    }
    else {
    LABEL_97:
      if (v44 != 106) {
        goto LABEL_111;
      }
      if (v42 != 97 || v43 != 0) {
        goto LABEL_111;
      }
    }
    v62 = 40;
  LABEL_112:
    *(_DWORD*)a3 = v62;
    {
      result;
      return;
    }
  }
LABEL_5:
  switch ((int)v3) {
  case 4:
  case 8:
    v6 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v7 = *(unsigned __int8*)(*(_QWORD*)(v6 + 8LL * *v4) + 88LL) >>
         ((*((_BYTE*)v4 + 3) & 8) != 0);
    v8 = **(unsigned __int16***)(result + 16);
    v9 = v7;
    if (v8 != nullptr) {
      v9 = *(unsigned __int8*)(*(_QWORD*)(v6 + 8LL * *v8) + 88LL) >>
           ((*((_BYTE*)v8 + 3) & 8) != 0);
    }
    *(_DWORD*)a3 = v3;
    goto LABEL_68;
  case 5:
  case 6:
    v14 = **(unsigned __int16***)(result + 16);
    v15 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v16 = (*((_BYTE*)v4 + 3) & 8) != 0;
    v17 = *(unsigned __int8*)(*(_QWORD*)(v15 + 8LL * *v4) + 88LL) >> v16;
    v18 = v17;
    if (v14 != nullptr) {
      v18 = *(unsigned __int8*)(*(_QWORD*)(v15 + 8LL * *v14) + 88LL) >>
            ((*((_BYTE*)v14 + 3) & 8) != 0);
    }
    *(_BYTE*)(a3 + 5) = v16;
    *(_DWORD*)a3 = v3;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 16) = v17;
    *(_DWORD*)(a3 + 20) = v18;
    *(_BYTE*)(a3 + 4) = 1;
    *(_DWORD*)(a3 + 8) = -1;
    *(_DWORD*)(a3 + 24) = -1;
    {
      result;
      return;
    }
  case 10:
    v10 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v11 = *(_QWORD*)(v10 + 8LL * *v4);
    goto LABEL_36;
  case 12:
  case 13:
    v19 = *(_QWORD*)(*GameData_212c878[0] + 64);
    if ((_DWORD)v3 == 13) {
      v20 = 6;
    }
    else {
      v20 = 5;
    }
    v21 = *(_QWORD*)(v19 + 8LL * *v4);
    v22 = **(unsigned __int16***)(result + 16);
    v7 = *(__int16*)(v21 + 2 * v20 + 108);
    v9 = v7;
    if (v22 != nullptr) {
      v9 = *(__int16*)(*(_QWORD*)(v19 + 8LL * *v22) + 2 * v20 + 108);
    }
    v23 = *(unsigned __int8*)(v21 + 72);
    *(_DWORD*)a3 = v3;
    *(_BYTE*)(a3 + 5) = 0;
    v25 = v7 != 0 || v23 != 13;
    *(_BYTE*)(a3 + 4) = v25;
    goto LABEL_69;
  case 17:
    v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v4);
    v12 = *(unsigned __int8*)(v11 + 72);
    goto LABEL_47;
  case 20:
    v48 = GameData_212c878[0];
    v49 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v4) +
                 24LL);
    v51 = *(_QWORD*)(v49 + 8);
    v52 = *(_QWORD*)(v49 + 16);
    v50 = v49 + 8;
    v53 = *(unsigned int*)((char*)((_UNKNOWN*)0x1C0LL) +
                           game_g_shared_system_skills_ptr);
    v63 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1C0LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    if (((v53 >> 5) & 0x7F) + 1 <= (v52 - v51) >> 2 &&
        ((*(_DWORD*)(v51 + 4 * ((v53 >> 5) & 0x7F)) >> v53) & 1) != 0) {
      v54 = result;
      v55 = a3;
      result = game_HasActiveSkill_843420(&v63, v50);
      a3 = v55;
      if ((result & 1) != 0) {
        v56 =
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v48 + 64) +
                                           8LL * ***(unsigned __int16***)(v54 +
                                                                          8)) +
                                90LL);
        *(_DWORD*)v55 = 20;
        *(_QWORD*)(v55 + 32) = 0;
        *(_QWORD*)(v55 + 40) = 0;
        *(_QWORD*)(v55 + 48) = 0;
        *(_DWORD*)(v55 + 56) = 0;
        *(_WORD*)(v55 + 4) = 1;
        *(_DWORD*)(v55 + 8) = -1;
        *(_DWORD*)(v55 + 16) = v56;
        *(_DWORD*)(v55 + 20) = v56;
        v35 = 12;
        goto LABEL_45;
      }
    }
    *(_WORD*)(a3 + 4) = 0;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)a3 = 20;
    *(_DWORD*)(a3 + 8) = -1;
    *(_BYTE*)(a3 + 16) = 1;
    break;
  case 38:
    v46 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v47 = **(unsigned __int16***)(result + 16);
    v7 = *(unsigned __int8*)(*(_QWORD*)(v46 + 8LL * *v4) + 89LL);
    v9 = v7;
    if (v47 != nullptr) {
      v9 = *(unsigned __int8*)(*(_QWORD*)(v46 + 8LL * *v47) + 89LL);
    }
    *(_DWORD*)a3 = 38;
  LABEL_68:
    *(_WORD*)(a3 + 4) = 1;
  LABEL_69:
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 16) = v7;
    *(_DWORD*)(a3 + 20) = v9;
    *(_DWORD*)(a3 + 8) = -1;
    *(_DWORD*)(a3 + 24) = -1;
    {
      result;
      return;
    }
  case 39:
    v26 = *(_QWORD**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v4);
    *(_DWORD*)a3 = 39;
    v27 = v26 != nullptr && *v26 != 0;
    v60 = 0;
    *(_BYTE*)(a3 + 4) = v27;
    *(_BYTE*)(a3 + 5) = 0;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 8) = -1;
    *(_BYTE*)(a3 + 16) = 1;
    if (v27) {
      v60 = v26[3] + 488LL;
    }
    *(_QWORD*)(a3 + 16) = v60;
    {
      result;
      return;
    }
  case 40:
  case 41: {
    GameRoutine_1584650(a3, v3, v4, 0);
    return;
  }
  default:
    *(_DWORD*)a3 = v3;
    *(_WORD*)(a3 + 4) = 0;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_DWORD*)(a3 + 56) = 0;
    *(_DWORD*)(a3 + 8) = -1;
    *(_BYTE*)(a3 + 16) = 1;
    if ((_DWORD)v3 != 40) {
      result;
      return;
    }
    v41 = GameData_21759e0;
    v42 = BYTE1(GameData_21759e0);
    v43 = BYTE2(GameData_21759e0);
    v44 = (unsigned __int8)GameData_21759e0;
    if ((unsigned __int8)GameData_21759e0 == 122) {
      goto LABEL_104;
    }
    if ((unsigned __int8)GameData_21759e0 == 107) {
      goto LABEL_60;
    }
    goto LABEL_97;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

game_gameui_15b4fa0(PSEUDO_X8 x8_, __int64 unused_int0, int* a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v2;
  bool v3;
  int v5;

  v2 = *a1;
  *(_WORD*)(a2 + 4) = 0;
  *(_QWORD*)(a2 + 32) = 0;
  *(_QWORD*)(a2 + 40) = 0;
  *(_QWORD*)(a2 + 48) = 0;
  *(_DWORD*)(a2 + 56) = 0;
  *(_DWORD*)(a2 + 8) = -1;
  *(_BYTE*)(a2 + 16) = 1;
  *(_DWORD*)a2 = v2;
  if (v2 == 40) {
    if ((unsigned __int8)GameData_21759e0 == 122) {
      v5 = 41;
      if ((GameData_21759e0 & 0xFFFFFF000000LL) != 0x6E6148000000LL ||
          BYTE1(GameData_21759e0) != 104 || BYTE2(GameData_21759e0) != 45) {
        goto LABEL_25;
      }
      if (BYTE6(GameData_21759e0) != 116 && BYTE6(GameData_21759e0) != 115 ||
          HIBYTE(GameData_21759e0) != 0) {
        goto LABEL_24;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 == 107) {
      if (BYTE1(GameData_21759e0) != 111 || BYTE2(GameData_21759e0) != 0) {
        goto LABEL_24;
      }
    }
    else if ((unsigned __int8)GameData_21759e0 != 106 ||
             (BYTE1(GameData_21759e0) == 97
                  ? (v3 = BYTE2(GameData_21759e0) == 0)
                  : (v3 = false),
              !v3)) {
    LABEL_24:
      v5 = 41;
      goto LABEL_25;
    }
    v5 = 40;
  LABEL_25:
    *(_DWORD*)a2 = v5;
  }
}

__int64 game_gameui_15d2a40(__int64* a1, unsigned __int16* a2)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  int v10;
  __int64 result;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  int v21;

  game_gameui_15d2910_alt1((__int64)a1, a2);
  LayoutAccessor_1562cf0_alt2((__int64)a1, "Default_Stock");
  v5 = UnitUtil_1212520_alt1(a2);
  v6 = ui_LayoutAccessor_FindPane_alt1(a1, (__int64)"T_StockNum");
  if (v6 != 0) {
    v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d690, 0);
    if (v7 != 0) {
      GameRoutine_156c910_alt1(v7, "%d", 1, v5);
    }
  }
  v8 = GameData_212c878[0];
  v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
  if ((((0x10000000000LL << *(_BYTE*)(v9 + 72)) | (1LL << *(_BYTE*)(v9 + 73))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    v10 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
    result = ui_LayoutAccessor_FindTextBox_alt1(a1, (__int64)"T_StockNum");
    if (result == 0) {
      return result;
    }
    result = Pane_58f8a0_alt2(result);
    if (result == 0) {
      return result;
    }
  LABEL_23:
    *(_DWORD*)(result + 12) = v10;
    return result;
  }
  v21 = 0;
  v12 =
      *(_QWORD**)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v19_.v20 = v19_.v19;
  v19_.v19[0] = GameData_212d7f0[0] + 2;
  v19_.v19[1] = &v21;
  game_TransporterConst_List_Impl_EachData_alt1(v12, v9, (__int64)v19_.v19);
  if (v19_.v20 == v19_.v19) {
    v13 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      goto LABEL_13;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v19_.v20 + v13))((__int64)v19_.v20);
LABEL_13:
  if (*a2 != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * *a2);
    if ((((0x10000000000LL << *(_BYTE*)(v14 + 72)) |
          (1LL << *(_BYTE*)(v14 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0) {
      v15 = 1;
    }
    else {
      v15 = 999;
    }
  }
  else {
    v15 = 0;
  }
  v16 = v21;
  v17 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
  v18 = *(_DWORD*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)GameData_212da30 + 4);
  result = ui_LayoutAccessor_FindTextBox_alt1(a1, (__int64)"T_StockNum");
  if (result != 0) {
    v10 = v16 >= v15 ? v18 : v17;
    result = Pane_58f8a0_alt2(result);
    if (result != 0) {
      goto LABEL_23;
    }
  }
  return result;
}

_QWORD* game_gameui_15e51e0(_QWORD* result)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;
  struct {
    __int64 v22;
    int v23;
    int v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    int v29;
    char gap68_[4];
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v22_;

  if (result[21] == 0) {
    v3 = result;
    v4 = (*(__int64 (**)(_QWORD*))(*result + 144LL))(result);
    result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*v3 + 152LL))(v3);
    if (v4 != 0 && result != nullptr) {
      v6 = (__int64)result;
      v22_.v30 = 0;
      v22_.v31 = 0;
      v22_.v32 = 0;
      v22_.v25 = 0;
      v22_.v26 = 0;
      v22_.v27 = 0;
      v22_.v28 = 0;
      v22_.v29 = 0;
      v22_.v22 = 0x800000018LL;
      v22_.v24 = 5;
      v7 = (*(__int64 (**)(_QWORD*))(*v3 + 168LL))(v3);
      v8 = *v3;
      v22_.v23 = v7;
      LODWORD(v22_.v25) = (*(__int64 (**)(_QWORD*))(v8 + 160))(v3);
      result = (_QWORD*)X8CALL_X0(
          __int64, GameRoutine_1366bd0_alt1((void*)(&v20_.v20), v4, v6,
                                            (__int64)&v22_.v22));
      v9 = v20_.v20;
      v10 = v20_.v21;
      v11 = v3[20];
      v20_.v20 = 0;
      v20_.v21 = 0;
      v3[19] = v9;
      v3[20] = v10;
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v11);
      }
      v12 = v20_.v21;
      if (v20_.v21 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v12);
      }
      v13 = v22_.v30;
      if (v22_.v30 != 0) {
        v14 = v22_.v31;
        v15 = fw_memory_g_heap_manager_ptr;
        if (v22_.v30 == v22_.v31) {
          goto LABEL_23;
        }
        v16 = v22_.v31;
        do {
          v17 = *(_BYTE*)(v16 - 24);
          v16 -= 24;
          if ((v17 & 1) != 0 && *(_QWORD*)(v14 - 8) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 +
                                                                 v18);
          }
          v14 = v16;
        } while (v16 != v13);
        v22_.v31 = v13;
        if (v22_.v30 != 0) {
        LABEL_23:
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
            v19 = 56;
          }
          return (_QWORD*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 +
                                                             v19);
        }
      }
    }
  }
  return result;
}

_QWORD* game_gameui_15e53d0(_QWORD* result)
{

#pragma clang fp contract(off)
  __int64 v1;
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int128 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int8* v16;
  unsigned int v17;
  bool v18;
  int v19;
  _QWORD v21[2];

  v1 = result[19];
  v2 = result;
  if (v1 != 0) {
    if (*(_BYTE*)(v1 + 24) != 1) {
      return result;
    }
    *(_BYTE*)(v1 + 2369) = 0;
    v3 = (__int64*)result[21];
    if (v3 != nullptr) {
      v4 = v3[1];
      if (v4 == 0) {
        goto LABEL_15;
      }
      v5 = std___1___shared_weak_count_lock_alt1(v4);
      if (v5 == 0) {
        goto LABEL_15;
      }
      v6 = *v3;
      if (*v3 != 0) {
        LODWORD(v3) = *(_DWORD*)(v6 + 2372);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v11 = v5;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt2(v11);
      }
      if (v6 == 0) {
      LABEL_15:
        LODWORD(v3) = 0;
      }
      goto LABEL_23;
    }
    v7 = (*(__int64 (**)(_QWORD*))(*result + 208LL))(result);
    if (((*(__int64 (**)(_QWORD*))(*v2 + 216LL))(v2) & 1) != 0) {
      v8 = game_ProcFadeView_instance_;
      if (game_ProcFadeView_instance_ == 0) {
      LABEL_22:
        LODWORD(v3) = v8 + v7;
      LABEL_23:
        v12 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
        *(_QWORD*)(v12 + 16) = 0;
        v13 = v2[22];
        *(_QWORD*)(v12 + 32) = 0;
        *(_QWORD*)(v12 + 40) = 0;
        *(_QWORD*)(v12 + 64) = 0;
        *(_QWORD*)(v12 + 72) = 0;
        *(_QWORD*)(v12 + 80) = 0;
        *(_QWORD*)(v12 + 88) = 0;
        *(_QWORD*)(v12 + 96) = 0;
        *(_QWORD*)(v12 + 112) = 0;
        *(_QWORD*)(v12 + 120) = 0;
        v2[22] = v12;
        *(_QWORD*)v12 = GameData_1fa9430;
        *(_QWORD*)(v12 + 8) = 0;
        *(_QWORD*)(v12 + 56) = 0;
        *(_QWORD*)(v12 + 48) = v12 + 56;
        *(_DWORD*)(v12 + 104) = 1065353216;
        *(_QWORD*)(v12 + 24) = 0;
        v2[21] = v12 + 24;
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak_alt2(v13);
        }
        v15 = v2[20];
        v14 = (_QWORD*)v2[21];
        v21[0] = v2[19];
        v21[1] = v15;
        if (v15 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                    memory_order_relaxed);
          ui_LayoutAccessor_Setup_155dda0_alt2(v14, v21);
          if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
            std___1___shared_weak_count___release_weak_alt2(v15);
          }
        }
        else {
          ui_LayoutAccessor_Setup_155dda0_alt2(v14, v21);
        }
        result = (_QWORD*)ui_LayoutAccessor_SetPriority_alt1(v2[21], (int)v3);
        goto LABEL_31;
      }
      v9 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v9 + 172) == *(float*)(v9 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v9 + 160) + 16LL))(v9 + 160);
      }
      else {
        v10 = *(_OWORD*)(v9 + 208);
      }
      if (*((float*)&v10 + 3) == 0x1.0000000000000p+0f) {
        if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
                            v9 + 160, *((float*)&v10 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
          v8 = 1010;
        }
        else {
          v8 = 0;
        }
        goto LABEL_22;
      }
    }
    v8 = 0;
    goto LABEL_22;
  }
LABEL_31:
  v16 = (unsigned __int8*)v2[2];
  if (v16 != nullptr) {
    v17 = *v16;
    v18 = v17 > 0x10;
    v19 = (1 << v17) & 0x1CE00;
    if (!v18 && v19 != 0) {
      *((_WORD*)v2 + 68) |= 0x80u;
    }
  }
  *((_WORD*)v2 + 68) |= 8u;
  return result;
}

#pragma GCC visibility pop
