#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
_DWORD* GameRoutine_174d4c0(__int64*, const char*, int);
_QWORD* AreaChangeIconList_Unknown3(_QWORD* result, __int64);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* LayoutAccessor_1560520(__int64*, __int64, const char*, __int64);
_QWORD* ui_LayoutAccessor_Setup_155dda0(__int64*, __int64*);
_QWORD* ui_LayoutAccessor_Setup_155dda0_alt1(_QWORD*, _QWORD*) __asm__(
    "ui_LayoutAccessor_Setup_155dda0");
_QWORD* ui_LayoutAccessor_Setup_155dea0(__int64*, __int64*, __int64);
_QWORD* ui_LayoutAccessor_Setup_155dfa0(__int64*, __int64*, const char*);
__attribute__((swiftcall)) void GameRoutine_13fa520(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_15733c0(PSEUDO_X8, __int64*,
                                                    __int64*);
__attribute__((swiftcall)) void GameRoutine_15b71b0(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_1612a90(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_16e4a60(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_17e7e90(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e7f60(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e8040(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e8110(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e8240(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e8310(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e84a0(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e89e0(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e9040(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e9480(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e9550(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e9730(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e99b0(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e9aa0(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e9b70(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e9c40(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_17e9f30(PSEUDO_X8);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void MapSimulator_102b410(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void ProcManager_18c88c0(PSEUDO_X8, __int64,
                                                    _QWORD**, _QWORD*, _QWORD*);
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
__attribute__((swiftcall)) void game_1604880(PSEUDO_X8, unsigned int,
                                             unsigned int);
__attribute__((swiftcall)) void game_1604c70(PSEUDO_X8, int, unsigned int,
                                             unsigned int);
__attribute__((swiftcall)) void game_16050d0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_16051a0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_1605540(PSEUDO_X8, __int64, int);
__attribute__((swiftcall)) void game_templates_17e8580(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e86a0(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e87c0(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e88c0(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e8ac0(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e8bd0(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e8ce0(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e8e00(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e8f30(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e9120(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e9250(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e9620(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e9850(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e9d20(PSEUDO_X8);
__attribute__((swiftcall)) void game_templates_17e9e30(PSEUDO_X8);
__int64* Element_18863e0(__int64, const char**, char);
__int64* GameRoutine_16e38c0(__int64*, const char**);
__int64* GameRoutine_175b180(__int64, __int64*);
__int64* GameRoutine_17a0100(__int64* result, int);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* Manager_bc6460(_QWORD*, __int64, char);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_8224a0(unsigned __int8);
__int64 Alignment_56b600(__int64 result);
__int64 AreaChangeIconList_Unknown2(__int64, __int64);
__int64 BasicMenu_16dea40(__int64 result, char, unsigned __int8,
                          unsigned __int8);
__int64 BelongingMenu_16ca580(__int64);
__int64 CondTalkIconList_Unknown2(__int64, __int64);
__int64 ControlCreator_13633c0(__int64 result);
__int64 DGame_111adc0(__int64);
__int64 Element_1884860(__int64, __int64, __int64, __int64);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 GameHr_1562680_alt1(__int64 result, const char*,
                            float) __asm__("GameHr_1562680");
__int64 GameHr_1651170(__int64);
__int64 GameHr_1696020();
__int64 GameHr_17b8bd0(__int64 result);
__int64 GameHr_7e74e0(__int64);
__int64 GameRoutine_1035980(__int64 result, __int64);
__int64 GameRoutine_111c720(unsigned __int8*);
__int64 GameRoutine_14a1520(__int64*, char);
__int64 GameRoutine_1553130(__int64 result);
__int64 GameRoutine_155f760(__int64, __int64, const char*);
__int64 GameRoutine_156bee0(__int64 result, __int64, __int64, __int64, char,
                            float, float);
__int64 GameRoutine_158ebe0(__int64*, _DWORD*, __int64, __int64);
__int64 GameRoutine_1593d90(__int64*, __int64);
__int64 GameRoutine_1597ab0(__int64, unsigned int, const char*, __int64, char);
__int64 GameRoutine_1679910(__int64);
__int64 GameRoutine_1691750();
__int64 GameRoutine_1691760();
__int64 GameRoutine_1691790();
__int64 GameRoutine_16917b0();
__int64 GameRoutine_16917c0();
__int64 GameRoutine_16917d0();
__int64 GameRoutine_1691800();
__int64 GameRoutine_1691870();
__int64 GameRoutine_16918a0();
__int64 GameRoutine_16918b0();
__int64 GameRoutine_16918e0();
__int64 GameRoutine_1691900();
__int64 GameRoutine_1691910();
__int64 GameRoutine_1691920();
__int64 GameRoutine_1691950();
__int64 GameRoutine_1694d20();
__int64 GameRoutine_1694d60();
__int64 GameRoutine_1694da0();
__int64 GameRoutine_1694db0();
__int64 GameRoutine_1694e10();
__int64 GameRoutine_1694e70();
__int64 GameRoutine_1694e80();
__int64 GameRoutine_1694e90();
__int64 GameRoutine_1694ea0();
__int64 GameRoutine_1694eb0();
__int64 GameRoutine_1694ec0();
__int64 GameRoutine_1694ed0();
__int64 GameRoutine_1694ee0();
__int64 GameRoutine_1694ef0();
__int64 GameRoutine_1694f30();
__int64 GameRoutine_1694f40();
__int64 GameRoutine_1694f60();
__int64 GameRoutine_1694f70();
__int64 GameRoutine_1694f90();
__int64 GameRoutine_1694fc0();
__int64 GameRoutine_1694fd0();
__int64 GameRoutine_1694ff0();
__int64 GameRoutine_1695020();
__int64 GameRoutine_1695030();
__int64 GameRoutine_1695090();
__int64 GameRoutine_1695120();
__int64 GameRoutine_1695130();
__int64 GameRoutine_1695190();
__int64 GameRoutine_1695220();
__int64 GameRoutine_1695230();
__int64 GameRoutine_1695240();
__int64 GameRoutine_1695260();
__int64 GameRoutine_1695270();
__int64 GameRoutine_16952a0();
__int64 GameRoutine_1695360();
__int64 GameRoutine_1695370();
__int64 GameRoutine_1695380();
__int64 GameRoutine_16953a0();
__int64 GameRoutine_16953b0();
__int64 GameRoutine_16953f0();
__int64 GameRoutine_1695430();
__int64 GameRoutine_1695440();
__int64 GameRoutine_1695450();
__int64 GameRoutine_1695470();
__int64 GameRoutine_1695480();
__int64 GameRoutine_1695490();
__int64 GameRoutine_16954b0();
__int64 GameRoutine_16954c0();
__int64 GameRoutine_16954d0();
__int64 GameRoutine_16954f0();
__int64 GameRoutine_1695530();
__int64 GameRoutine_1695570();
__int64 GameRoutine_1695580();
__int64 GameRoutine_16955a0();
__int64 GameRoutine_16955d0();
__int64 GameRoutine_16955e0();
__int64 GameRoutine_16955f0();
__int64 GameRoutine_1695610();
__int64 GameRoutine_1695620();
__int64 GameRoutine_1695630();
__int64 GameRoutine_16956c0();
__int64 GameRoutine_16956d0();
__int64 GameRoutine_16956f0();
__int64 GameRoutine_1695710();
__int64 GameRoutine_1695720();
__int64 GameRoutine_1695760();
__int64 GameRoutine_16957c0();
__int64 GameRoutine_16957d0();
__int64 GameRoutine_1695800();
__int64 GameRoutine_1695830();
__int64 GameRoutine_1695840();
__int64 GameRoutine_1695870();
__int64 GameRoutine_16958a0();
__int64 GameRoutine_16958b0();
__int64 GameRoutine_16958e0();
__int64 GameRoutine_1695920();
__int64 GameRoutine_1695940();
__int64 GameRoutine_1695a20();
__int64 GameRoutine_1695af0();
__int64 GameRoutine_1695b00();
__int64 GameRoutine_1695b40();
__int64 GameRoutine_1695c60();
__int64 GameRoutine_1695c70();
__int64 GameRoutine_1695c80();
__int64 GameRoutine_1695ca0();
__int64 GameRoutine_1695cb0();
__int64 GameRoutine_1695cd0();
__int64 GameRoutine_1695d00();
__int64 GameRoutine_1695d10();
__int64 GameRoutine_1695d20();
__int64 GameRoutine_1695dd0();
__int64 GameRoutine_1695de0();
__int64 GameRoutine_1695df0();
__int64 GameRoutine_1695e10();
__int64 GameRoutine_1695e20();
__int64 GameRoutine_1695e30();
__int64 GameRoutine_1695e50();
__int64 GameRoutine_1695e60();
__int64 GameRoutine_1695e80();
__int64 GameRoutine_1695f10();
__int64 GameRoutine_1695f20();
__int64 GameRoutine_1695f40();
__int64 GameRoutine_1695fd0();
__int64 GameRoutine_1695fe0();
__int64 GameRoutine_1695ff0();
__int64 GameRoutine_1696000();
__int64 GameRoutine_1696010();
__int64 GameRoutine_17358f0(__int64*, float);
__int64 GameRoutine_1797a90();
__int64 GameRoutine_1797d30();
__int64 GameRoutine_179fd30(__int64);
__int64 GameRoutine_17e7e30(__int64 result);
__int64 GameRoutine_17e7f00(__int64 result);
__int64 GameRoutine_17e7fe0(__int64 result);
__int64 GameRoutine_17e80b0(__int64 result);
__int64 GameRoutine_17e8180(__int64 result);
__int64 GameRoutine_17e81e0(__int64 result);
__int64 GameRoutine_17e82b0(__int64 result);
__int64 GameRoutine_17e8380(__int64 result);
__int64 GameRoutine_17e83e0(__int64 result);
__int64 GameRoutine_17e8440(__int64 result);
__int64 GameRoutine_17e8520(__int64 result);
__int64 GameRoutine_17e8640(__int64 result);
__int64 GameRoutine_17e8760(__int64 result);
__int64 GameRoutine_17e8860(__int64 result);
__int64 GameRoutine_17e8980(__int64 result);
__int64 GameRoutine_17e8a60(__int64 result);
__int64 GameRoutine_17e8b70(__int64 result);
__int64 GameRoutine_17e8c80(__int64 result);
__int64 GameRoutine_17e8da0(__int64 result);
__int64 GameRoutine_17e8ed0(__int64 result);
__int64 GameRoutine_17e8fe0(__int64 result);
__int64 GameRoutine_17e90c0(__int64 result);
__int64 GameRoutine_17e91f0(__int64 result);
__int64 GameRoutine_17e9300(__int64 result);
__int64 GameRoutine_17e9360(__int64 result);
__int64 GameRoutine_17e93c0(__int64 result);
__int64 GameRoutine_17e9420(__int64 result);
__int64 GameRoutine_17e94f0(__int64 result);
__int64 GameRoutine_17e95c0(__int64 result);
__int64 GameRoutine_17e96d0(__int64 result);
__int64 GameRoutine_17e97f0(__int64 result);
__int64 GameRoutine_17e98f0(__int64 result);
__int64 GameRoutine_17e9950(__int64 result);
__int64 GameRoutine_17e9a40(__int64 result);
__int64 GameRoutine_17e9b10(__int64 result);
__int64 GameRoutine_17e9be0(__int64 result);
__int64 GameRoutine_17e9cc0(__int64 result);
__int64 GameRoutine_17e9dd0(__int64 result);
__int64 GameRoutine_17e9ed0(__int64 result);
__int64 GameRoutine_17e9fa0(__int64 result);
__int64 GameRoutine_18438a0(__int64, int);
__int64 GameRoutine_18d6580(_QWORD*);
__int64 GameRoutine_18d9d20(__int64, __int64*, __int64);
__int64 GameRoutine_18db840(__int64, __int64*, __int64);
__int64 GameRoutine_18f4600(__int64);
__int64 GameRoutine_18f4720(__int64*, __int64);
__int64 GameRoutine_1917400(__int64 result, const char*, unsigned __int64,
                            int8x16_t*, char, char);
__int64 GameRoutine_191ea50(__int64, const char*, unsigned int);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_576600(__int64, const char*);
__int64 GameRoutine_88cee0(__int64);
__int64 GameRoutine_ffc660(unsigned int, const char*);
__int64 GameRoutine_ffccc0(int, __int64);
__int64 GmapUIDef_1653cd0(__int64, __int64, char);
__int64 Impl_13261c0(__int64);
__int64 Impl_1326420(__int64);
__int64 InfoTitle_18b9480(__int64, unsigned int*, __int64, _WORD*);
__int64 LayoutAccessor_155cda0(__int64 result, const char*, const char*);
__int64 LayoutAccessor_155e140(__int64*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 LayoutAccessor_1563030(__int64 result, unsigned int*, char);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 LayoutAccessor_15635a0(__int64*, __int64, char);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 LayoutAccessor_15740c0(__int64*, __int64, char, const char*, char);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136ad70(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136afb0(__int64, unsigned int, _BYTE*);
__int64 NpcIconList_Unknown2(__int64, __int64);
__int64 Pane_58dee0(__int64 result, __int64);
__int64 Pane_58df60(__int64 result, _QWORD*);
__int64 Pane_58f8a0(__int64);
__int64 ProcHelp_18b0bd0(__int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 QuestIconList_Unknown2(__int64, __int64**);
__int64 StatusItem_188df50(__int64*, unsigned int*, char, char);
__int64 Unit_6c8300(_QWORD*, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_1034e80(__int64, __int64, __int64, __int64);
__int64 game_14a3920(__int64 result);
__int64 game_1694cf0();
__int64 game_1694f00();
__int64 game_18dc580(float*, unsigned __int8*, __int64*, _DWORD*);
__int64 game_199d2e0(__int64, __int64*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_Unit_GetJob(__int64);
__int64 game_facility__1695500();
__int64 game_gameui_159b930(__int64*, unsigned int);
__int64 game_gameui_Util_SetGambitSkillStatus(__int64*, _DWORD*, __int64,
                                              const char*);
__int64 game_menu_16e75a0(__int64 result, int, int, int);
__int64 game_menu_TutorialInfo_CreateBind(__int64, __int64**);
__int64 memchr(__int64, int, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 nn_os_InitializeReaderWriterLock(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_startSurroundPan(__int64*, __int64, float);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindPartsLayout(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_IsPaneVisible(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneScale(__int64 result, const char*, _QWORD*);
__int64 ui_LayoutAccessor_SetPaneSize(__int64 result, const char*, float,
                                      float);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
__int64 ui_control_1888c80(__int64, __int64, __int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
bool GameRoutine_6fc380(__int64);
bool game_1864e60_alt1(__int64, __int64) __asm__("game_1864e60");
bool game_gmap_GmapUIDef_SetQuestIcon(__int64, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* GameRoutine_adf880(__int64, char);
char* Manager_a4aea0(__int64);
char* SpineSlotChecker_19220e0(char* result, const char*, char);
char* game_util_Format(const char*, ...);
const char* GameRoutine_191ece0(__int64, const char*);
const char* GameRoutine_576740(__int64, const char*);
const char* Pane_58fac0(__int64, const char*);
const char* game_HashString32(const char* result);
double ui_LayoutAccessor_GetPaneTranslate(__int64*, const char*);
extern _DWORD GameData_1c0313c[22];
extern _UNKNOWN* GameData_1fb14c0;
extern _UNKNOWN* GameData_1fb1520;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN GameData_1a878af;
extern _UNKNOWN GameData_1a89100;
extern _UNKNOWN GameData_1a8f6db;
extern _UNKNOWN GameData_1a9324e;
extern _UNKNOWN GameData_1a9ae2e;
extern _UNKNOWN GameData_1a9ed0c;
extern _UNKNOWN GameData_1a9ed22;
extern _UNKNOWN GameData_1aa67c2;
extern _UNKNOWN GameData_1aa67f8;
extern _UNKNOWN GameData_1aaa6bf;
extern _UNKNOWN GameData_1ab38f3;
extern _UNKNOWN GameData_1ab609d;
extern _UNKNOWN GameData_1aba427;
extern _UNKNOWN GameData_1aba42e;
extern _UNKNOWN GameData_1abdeba;
extern _UNKNOWN GameData_1ac1bf6;
extern _UNKNOWN GameData_1ac4744;
extern _UNKNOWN GameData_1ac8ff9;
extern _UNKNOWN GameData_1acaad4;
extern _UNKNOWN GameData_1ad4e4c;
extern _UNKNOWN GameData_1ad7b01;
extern _UNKNOWN GameData_1adca98;
extern _UNKNOWN GameData_1adcaca;
extern _UNKNOWN GameData_1adfa87;
extern _UNKNOWN GameData_1ae8036;
extern _UNKNOWN GameData_1ae9560;
extern _UNKNOWN GameData_1af1215;
extern _UNKNOWN GameData_1af4f9e;
extern _UNKNOWN GameData_1af7413;
extern _UNKNOWN GameData_1afb45b;
extern _UNKNOWN GameData_1afefa4;
extern _UNKNOWN GameData_1afefd7;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21c6868;
extern _UNKNOWN GameData_2263cc8;
extern _UNKNOWN GameData_2263d50;
extern _UNKNOWN GameData_226b198;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fa9430[])();
extern __int64 (*GameData_20839d0[])();
extern __int64 (*GameData_2083a80[])();
extern __int64 (*GameData_20d1818[])();
extern __int64 (*GameData_20d91a0[])();
extern __int64 (*GameData_20dbd70[])();
extern __int64 (*GameData_20dbe30[])();
extern __int64 (*GameData_20dbed8[])();
extern __int64 (*GameData_20dbf80[])();
extern __int64 (*GameData_20dc028[])();
extern __int64 (*GameData_20dc0d0[])();
extern __int64 (*GameData_20dc418[])();
extern __int64 (*GameData_20dc610[])();
extern __int64 (*GameData_20dc6b8[])();
extern __int64 (*GameData_20dd090[])();
extern __int64 (*GameData_20dd138[])();
extern __int64 (*GameData_20dd1e0[])();
extern __int64 (*GameData_20dd5d0[])();
extern __int64 (*game_cutscene_Signal_Camera_vtable[])();
extern __int64 (*game_cutscene_Signal_Clock_vtable[])();
extern __int64 (*game_cutscene_Signal_Env_vtable[])();
extern __int64 (*game_cutscene_Signal_FadeIn_vtable[])();
extern __int64 (*game_cutscene_Signal_FadeOut_vtable[])();
extern __int64 (*game_cutscene_Signal_MotionBlur_vtable[])();
extern __int64 (*game_cutscene_Signal_NegaPosi_vtable[])();
extern __int64 (*game_cutscene_Signal_OtherSetting_vtable[])();
extern __int64 (*game_cutscene_Signal_SceneShadow_vtable[])();
extern __int64 (*game_cutscene_Signal_ShowChara_vtable[])();
extern __int64 (*game_cutscene_Signal_ShowProp_vtable[])();
extern __int64 (*game_cutscene_Signal_SlowBegin_vtable[])();
extern __int64 (*game_cutscene_Signal_Version_vtable[])();
extern __int64 (*game_gameui_anonymous_ProcPopup_vtable[])();
extern __int64 (*game_gameui_control_KeyIcon_vtable[])();
extern __int64 (*game_map_MapSkillInfo_vtable[])();
extern __int64 (*game_menu_UnitMakeZoomCamera_vtable[])();
extern __int64 (*gfxa_UpscalerSetting_vtable[])();
extern __int64* GameData_212c868;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cda8[18];
extern __int64* GameData_212d458[7];
extern __int64* GameData_212d578[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d728[2];
extern __int64* GameData_212d890[2];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212e348;
extern __int64* GameData_212e550[26];
extern __int64* GameData_212e560[24];
extern __int64* GameData_212fc70[2];
extern __int64* GameData_212fca0[2];
extern __int64* GameData_2130fa8[2];
extern __int64* GameData_21318d0[2];
extern __int64* GameData_21319e8[10];
extern __int64* GameData_2131ac8[5];
extern __int64* GameData_2131ad0[4];
extern __int64* GameData_2131ae8;
extern __int64* GameData_21320c8[3];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_20c57c0;
extern __int64 GameData_20d1838;
extern __int64 GameData_20d1848;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212d690;
extern __int64 GameData_212d880;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212e520[4];
extern __int64 GameData_212e530[2];
extern __int64 GameData_2131c18[55];
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
extern __int64 GameData_21c9730;
extern __int64 GameData_21c9738;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99c0;
extern __int64 GameData_21c9b20;
extern __int64 GameData_21c9b28;
extern __int64 GameData_21d96c0;
extern __int64 GameData_21d96c8;
extern __int64 GameData_21d96d0;
extern __int64 GameData_21d96d8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_22416c0;
extern __int64 GameData_225e7b0;
extern __int64 GameData_225e7b8;
extern __int64 GameData_225e7d0;
extern __int64 GameData_225e7e0;
extern __int64 GameData_225e7e8;
extern __int64 GameData_225e800;
extern __int64 GameData_225e810;
extern __int64 GameData_225e818;
extern __int64 GameData_225e830;
extern __int64 GameData_225e840;
extern __int64 GameData_225e848;
extern __int64 GameData_225e860;
extern __int64 GameData_225e870;
extern __int64 GameData_225e878;
extern __int64 GameData_225e890;
extern __int64 GameData_225e8a0;
extern __int64 GameData_225e8a8;
extern __int64 GameData_225e8c0;
extern __int64 GameData_225e8d0;
extern __int64 GameData_225e8d8;
extern __int64 GameData_225e8f0;
extern __int64 GameData_225e900;
extern __int64 GameData_225e908;
extern __int64 GameData_225e920;
extern __int64 GameData_225e930;
extern __int64 GameData_225e938;
extern __int64 GameData_225e950;
extern __int64 GameData_225e960;
extern __int64 GameData_225e968;
extern __int64 GameData_225e980;
extern __int64 GameData_225e990;
extern __int64 GameData_225e998;
extern __int64 GameData_225e9b0;
extern __int64 GameData_225e9c0;
extern __int64 GameData_225e9c8;
extern __int64 GameData_225e9e0;
extern __int64 GameData_225e9f0;
extern __int64 GameData_225e9f8;
extern __int64 GameData_225ea10;
extern __int64 GameData_225ea20;
extern __int64 GameData_225ea28;
extern __int64 GameData_225ea40;
extern __int64 GameData_225ea50;
extern __int64 GameData_225ea58;
extern __int64 GameData_225ea70;
extern __int64 GameData_225ea80;
extern __int64 GameData_225ea88;
extern __int64 GameData_225eaa0;
extern __int64 GameData_225eab0;
extern __int64 GameData_225eab8;
extern __int64 GameData_225ead0;
extern __int64 GameData_225eae0;
extern __int64 GameData_225eae8;
extern __int64 GameData_225eb00;
extern __int64 GameData_225eb10;
extern __int64 GameData_225eb18;
extern __int64 GameData_225eb30;
extern __int64 GameData_225eb40;
extern __int64 GameData_225eb48;
extern __int64 GameData_225eb60;
extern __int64 GameData_225eb70;
extern __int64 GameData_225eb78;
extern __int64 GameData_225eb90;
extern __int64 GameData_225eba0;
extern __int64 GameData_225eba8;
extern __int64 GameData_225ebc0;
extern __int64 GameData_225ebd0;
extern __int64 GameData_225ebd8;
extern __int64 GameData_225ebf0;
extern __int64 GameData_225ec00;
extern __int64 GameData_225ec08;
extern __int64 GameData_225ec20;
extern __int64 GameData_225ec30;
extern __int64 GameData_225ec38;
extern __int64 GameData_225ec50;
extern __int64 GameData_225ec60;
extern __int64 GameData_225ec68;
extern __int64 GameData_225ec80;
extern __int64 GameData_225ec90;
extern __int64 GameData_225ec98;
extern __int64 GameData_225ecb0;
extern __int64 GameData_225ecc0;
extern __int64 GameData_225ecc8;
extern __int64 GameData_225ece0;
extern __int64 GameData_225ecf0;
extern __int64 GameData_225ecf8;
extern __int64 GameData_225ed10;
extern __int64 GameData_225ed20;
extern __int64 GameData_225ed28;
extern __int64 GameData_225ed40;
extern __int64 GameData_225ed50;
extern __int64 GameData_225ed58;
extern __int64 GameData_225ed70;
extern __int64 GameData_225ed80;
extern __int64 GameData_225ed88;
extern __int64 GameData_225eda0;
extern __int64 GameData_225edb0;
extern __int64 GameData_225edb8;
extern __int64 GameData_225edd0;
extern __int64 GameData_225ede0;
extern __int64 GameData_225ede8;
extern __int64 GameData_225ee00;
extern __int64 GameData_225ee10;
extern __int64 GameData_225ee18;
extern __int64 GameData_225ee30;
extern __int64 GameData_225ee40;
extern __int64 GameData_225ee48;
extern __int64 GameData_225ee60;
extern __int64 GameData_225ee70;
extern __int64 GameData_225ee78;
extern __int64 GameData_225ee90;
extern __int64 GameData_225eea0;
extern __int64 GameData_225eea8;
extern __int64 GameData_225eec0;
extern __int64 GameData_225eed0;
extern __int64 GameData_225eed8;
extern __int64 GameData_225eef0;
extern __int64 GameData_225ef00;
extern __int64 GameData_225ef08;
extern __int64 GameData_225ef20;
extern __int64 GameData_225ef30;
extern __int64 GameData_225ef38;
extern __int64 GameData_225ef50;
extern __int64 GameData_225ef60;
extern __int64 GameData_225ef68;
extern __int64 GameData_225ef80;
extern __int64 GameData_225ef90;
extern __int64 GameData_225ef98;
extern __int64 GameData_225efb0;
extern __int64 GameData_225efc0;
extern __int64 GameData_225efc8;
extern __int64 GameData_225efe0;
extern __int64 GameData_225eff0;
extern __int64 GameData_225eff8;
extern __int64 GameData_225f010;
extern __int64 GameData_225f020;
extern __int64 GameData_225f028;
extern __int64 GameData_225f040;
extern __int64 GameData_225f050;
extern __int64 GameData_225f058;
extern __int64 GameData_225f070;
extern __int64 GameData_225f080;
extern __int64 GameData_225f088;
extern __int64 GameData_225f0a0;
extern __int64 GameData_225f0b0;
extern __int64 GameData_225f0b8;
extern __int64 GameData_225f0d0;
extern __int64 GameData_225f0e0;
extern __int64 GameData_225f0e8;
extern __int64 GameData_225f100;
extern __int64 GameData_225f110;
extern __int64 GameData_225f118;
extern __int64 GameData_225f130;
extern __int64 GameData_225f140;
extern __int64 GameData_225f148;
extern __int64 GameData_225f160;
extern __int64 GameData_225f170;
extern __int64 GameData_225f178;
extern __int64 GameData_225f190;
extern __int64 GameData_225f1a0;
extern __int64 GameData_225f1a8;
extern __int64 GameData_225f1c0;
extern __int64 GameData_225f1d0;
extern __int64 GameData_225f1d8;
extern __int64 GameData_225f1f0;
extern __int64 GameData_225f200;
extern __int64 GameData_225f208;
extern __int64 GameData_225f220;
extern __int64 GameData_225f230;
extern __int64 GameData_225f238;
extern __int64 GameData_225f250;
extern __int64 GameData_225f260;
extern __int64 GameData_225f268;
extern __int64 GameData_225f280;
extern __int64 GameData_225f290;
extern __int64 GameData_225f298;
extern __int64 GameData_225f2b0;
extern __int64 GameData_225f2c0;
extern __int64 GameData_225f2c8;
extern __int64 GameData_225f2e0;
extern __int64 GameData_225f2f0;
extern __int64 GameData_225f2f8;
extern __int64 GameData_225f310;
extern __int64 GameData_225f320;
extern __int64 GameData_225f328;
extern __int64 GameData_225f340;
extern __int64 GameData_225f350;
extern __int64 GameData_225f358;
extern __int64 GameData_225f370;
extern __int64 GameData_225f380;
extern __int64 GameData_225f388;
extern __int64 GameData_225f3a0;
extern __int64 GameData_225f3b0;
extern __int64 GameData_225f3b8;
extern __int64 GameData_225f3d0;
extern __int64 GameData_225f3e0;
extern __int64 GameData_225f3e8;
extern __int64 GameData_225f400;
extern __int64 GameData_225f410;
extern __int64 GameData_225f418;
extern __int64 GameData_225f430;
extern __int64 GameData_225f440;
extern __int64 GameData_225f448;
extern __int64 GameData_225f460;
extern __int64 GameData_225f470;
extern __int64 GameData_225f478;
extern __int64 GameData_225f490;
extern __int64 GameData_225f4a0;
extern __int64 GameData_225f4a8;
extern __int64 GameData_225f4c0;
extern __int64 GameData_225f4d0;
extern __int64 GameData_225f4d8;
extern __int64 GameData_225f4f0;
extern __int64 GameData_225f500;
extern __int64 GameData_225f508;
extern __int64 GameData_225f520;
extern __int64 GameData_225f530;
extern __int64 GameData_225f538;
extern __int64 GameData_225f550;
extern __int64 GameData_225f560;
extern __int64 GameData_225f568;
extern __int64 GameData_225f580;
extern __int64 GameData_225f590;
extern __int64 GameData_225f598;
extern __int64 GameData_225f5b0;
extern __int64 GameData_225f5c0;
extern __int64 GameData_225f5c8;
extern __int64 GameData_225f5e0;
extern __int64 GameData_225f5f0;
extern __int64 GameData_225f5f8;
extern __int64 GameData_225f610;
extern __int64 GameData_225f620;
extern __int64 GameData_225f628;
extern __int64 GameData_225f640;
extern __int64 GameData_225f650;
extern __int64 GameData_225f658;
extern __int64 GameData_225f670;
extern __int64 GameData_225f680;
extern __int64 GameData_225f688;
extern __int64 GameData_225f6a0;
extern __int64 GameData_225f6b0;
extern __int64 GameData_225f6b8;
extern __int64 GameData_225f6d0;
extern __int64 GameData_225f6e0;
extern __int64 GameData_225f6e8;
extern __int64 GameData_225f700;
extern __int64 GameData_225f710;
extern __int64 GameData_225f718;
extern __int64 GameData_225f730;
extern __int64 GameData_225f740;
extern __int64 GameData_225f748;
extern __int64 GameData_225f760;
extern __int64 GameData_225f770;
extern __int64 GameData_225f778;
extern __int64 GameData_225f790;
extern __int64 GameData_225f7a0;
extern __int64 GameData_225f7a8;
extern __int64 GameData_225f7c0;
extern __int64 GameData_225f7d0;
extern __int64 GameData_225f7d8;
extern __int64 GameData_225f7f0;
extern __int64 GameData_225f800;
extern __int64 GameData_225f808;
extern __int64 GameData_225f820;
extern __int64 GameData_225f830;
extern __int64 GameData_225f838;
extern __int64 GameData_225f850;
extern __int64 GameData_225f860;
extern __int64 GameData_225f868;
extern __int64 GameData_225f880;
extern __int64 GameData_225f890;
extern __int64 GameData_225f898;
extern __int64 GameData_225f8b0;
extern __int64 GameData_225f8c0;
extern __int64 GameData_225f8c8;
extern __int64 GameData_225f8e0;
extern __int64 GameData_225f8f0;
extern __int64 GameData_225f8f8;
extern __int64 GameData_225f910;
extern __int64 GameData_225f920;
extern __int64 GameData_225f928;
extern __int64 GameData_225f940;
extern __int64 GameData_225f950;
extern __int64 GameData_225f958;
extern __int64 GameData_225f970;
extern __int64 GameData_225f980;
extern __int64 GameData_225f988;
extern __int64 GameData_225f9a0;
extern __int64 GameData_225f9b0;
extern __int64 GameData_225f9b8;
extern __int64 GameData_225f9d0;
extern __int64 GameData_225f9e0;
extern __int64 GameData_225f9e8;
extern __int64 GameData_225fa00;
extern __int64 GameData_225fa10;
extern __int64 GameData_225fa18;
extern __int64 GameData_225fa30;
extern __int64 GameData_225fa40;
extern __int64 GameData_225fa48;
extern __int64 GameData_225fa60;
extern __int64 GameData_225fa70;
extern __int64 GameData_225fa78;
extern __int64 GameData_225fa90;
extern __int64 GameData_225faa0;
extern __int64 GameData_225faa8;
extern __int64 GameData_225fac0;
extern __int64 GameData_225fad0;
extern __int64 GameData_225fad8;
extern __int64 GameData_225faf0;
extern __int64 GameData_225fb00;
extern __int64 GameData_225fb08;
extern __int64 GameData_225fb20;
extern __int64 GameData_225fb30;
extern __int64 GameData_225fb38;
extern __int64 GameData_225fb50;
extern __int64 GameData_225fb60;
extern __int64 GameData_225fb68;
extern __int64 GameData_225fb80;
extern __int64 GameData_225fb90;
extern __int64 GameData_225fb98;
extern __int64 GameData_225fbb0;
extern __int64 GameData_225fbc0;
extern __int64 GameData_225fbc8;
extern __int64 GameData_225fbe0;
extern __int64 GameData_225fbf0;
extern __int64 GameData_225fbf8;
extern __int64 GameData_225fc10;
extern __int64 GameData_225fc20;
extern __int64 GameData_225fc28;
extern __int64 GameData_225fc40;
extern __int64 GameData_225fc50;
extern __int64 GameData_225fc58;
extern __int64 GameData_225fc70;
extern __int64 GameData_225fc80;
extern __int64 GameData_225fc88;
extern __int64 GameData_225fca0;
extern __int64 GameData_225fcb0;
extern __int64 GameData_225fcb8;
extern __int64 GameData_225fcd0;
extern __int64 GameData_225fce0;
extern __int64 GameData_225fce8;
extern __int64 GameData_225fd00;
extern __int64 GameData_225fd10;
extern __int64 GameData_225fd18;
extern __int64 GameData_225fd30;
extern __int64 GameData_225fd40;
extern __int64 GameData_225fd48;
extern __int64 GameData_225fd60;
extern __int64 GameData_225fd70;
extern __int64 GameData_225fd78;
extern __int64 GameData_225fd90;
extern __int64 GameData_225fda0;
extern __int64 GameData_225fda8;
extern __int64 GameData_225fdc0;
extern __int64 GameData_225fdd0;
extern __int64 GameData_225fdd8;
extern __int64 GameData_225fdf0;
extern __int64 GameData_225fe00;
extern __int64 GameData_225fe08;
extern __int64 GameData_225fe20;
extern __int64 GameData_225fe30;
extern __int64 GameData_225fe38;
extern __int64 GameData_225fe50;
extern __int64 GameData_225fe60;
extern __int64 GameData_225fe68;
extern __int64 GameData_225fe80;
extern __int64 GameData_225fe90;
extern __int64 GameData_225fe98;
extern __int64 GameData_225feb0;
extern __int64 GameData_225fec0;
extern __int64 GameData_225fec8;
extern __int64 GameData_225fee0;
extern __int64 GameData_225fef0;
extern __int64 GameData_225fef8;
extern __int64 GameData_225ff10;
extern __int64 GameData_225ff20;
extern __int64 GameData_225ff28;
extern __int64 GameData_225ff40;
extern __int64 GameData_225ff50;
extern __int64 GameData_225ff58;
extern __int64 GameData_225ff70;
extern __int64 GameData_225ff80;
extern __int64 GameData_225ff88;
extern __int64 GameData_225ffa0;
extern __int64 GameData_225ffb0;
extern __int64 GameData_225ffb8;
extern __int64 GameData_225ffd0;
extern __int64 GameData_225ffe0;
extern __int64 GameData_225ffe8;
extern __int64 GameData_2260000;
extern __int64 GameData_2260010;
extern __int64 GameData_2260018;
extern __int64 GameData_2260030;
extern __int64 GameData_2260040;
extern __int64 GameData_2260048;
extern __int64 GameData_2260060;
extern __int64 GameData_2260070;
extern __int64 GameData_2260078;
extern __int64 GameData_2260090;
extern __int64 GameData_22600a0;
extern __int64 GameData_22600a8;
extern __int64 GameData_22600c0;
extern __int64 GameData_22600d0;
extern __int64 GameData_22600d8;
extern __int64 GameData_22600f0;
extern __int64 GameData_2260100;
extern __int64 GameData_2260108;
extern __int64 GameData_2260120;
extern __int64 GameData_2260130;
extern __int64 GameData_2260138;
extern __int64 GameData_2260150;
extern __int64 GameData_2260160;
extern __int64 GameData_2260168;
extern __int64 GameData_2260180;
extern __int64 GameData_2260190;
extern __int64 GameData_2260198;
extern __int64 GameData_22601b0;
extern __int64 GameData_22601c0;
extern __int64 GameData_22601c8;
extern __int64 GameData_22601e0;
extern __int64 GameData_22601f0;
extern __int64 GameData_22601f8;
extern __int64 GameData_2260210;
extern __int64 GameData_2260220;
extern __int64 GameData_2260228;
extern __int64 GameData_2260240;
extern __int64 GameData_2260250;
extern __int64 GameData_2260258;
extern __int64 GameData_2260270;
extern __int64 GameData_2260280;
extern __int64 GameData_2260288;
extern __int64 GameData_22602a0;
extern __int64 GameData_22602b0;
extern __int64 GameData_22602b8;
extern __int64 GameData_22602d0;
extern __int64 GameData_22602e0;
extern __int64 GameData_22602e8;
extern __int64 GameData_2260300;
extern __int64 GameData_2260310;
extern __int64 GameData_2260318;
extern __int64 GameData_2260330;
extern __int64 GameData_2260340;
extern __int64 GameData_2260348;
extern __int64 GameData_2260360;
extern __int64 GameData_2260370;
extern __int64 GameData_2260378;
extern __int64 GameData_2260390;
extern __int64 GameData_22603a0;
extern __int64 GameData_22603a8;
extern __int64 GameData_22603c0;
extern __int64 GameData_22603d0;
extern __int64 GameData_22603d8;
extern __int64 GameData_22603f0;
extern __int64 GameData_2260400;
extern __int64 GameData_2260408;
extern __int64 GameData_2260420;
extern __int64 GameData_2260430;
extern __int64 GameData_2260438;
extern __int64 GameData_2260450;
extern __int64 GameData_2260460;
extern __int64 GameData_2260468;
extern __int64 GameData_2260480;
extern __int64 GameData_2260490;
extern __int64 GameData_2260498;
extern __int64 GameData_22604b0;
extern __int64 GameData_22604c0;
extern __int64 GameData_22604c8;
extern __int64 GameData_22604e0;
extern __int64 GameData_22604f0;
extern __int64 GameData_22604f8;
extern __int64 GameData_2260510;
extern __int64 GameData_2260520;
extern __int64 GameData_2260528;
extern __int64 GameData_2260540;
extern __int64 GameData_2260550;
extern __int64 GameData_2260558;
extern __int64 GameData_2260570;
extern __int64 GameData_2260580;
extern __int64 GameData_2260588;
extern __int64 GameData_22605a0;
extern __int64 GameData_22605b0;
extern __int64 GameData_22605b8;
extern __int64 GameData_22605d0;
extern __int64 GameData_22605e0;
extern __int64 GameData_22605e8;
extern __int64 GameData_2260600;
extern __int64 GameData_2260610;
extern __int64 GameData_2260618;
extern __int64 GameData_2260630;
extern __int64 GameData_2260640;
extern __int64 GameData_2260648;
extern __int64 GameData_2260660;
extern __int64 GameData_2260678;
extern __int64 GameData_22606a0;
extern __int64 GameData_22606b8;
extern __int64 GameData_22606e0;
extern __int64 GameData_22606f8;
extern __int64 GameData_2260720;
extern __int64 GameData_2260738;
extern __int64 GameData_2260760;
extern __int64 GameData_2260778;
extern __int64 GameData_22607a0;
extern __int64 GameData_22607b8;
extern __int64 GameData_22607e0;
extern __int64 GameData_22607f8;
extern __int64 GameData_2260820;
extern __int64 GameData_2260838;
extern __int64 GameData_2260860;
extern __int64 GameData_2260878;
extern __int64 GameData_22608a0;
extern __int64 GameData_22608b8;
extern __int64 GameData_22608e0;
extern __int64 GameData_22608f8;
extern __int64 GameData_2260920;
extern __int64 GameData_2260938;
extern __int64 GameData_2260960;
extern __int64 GameData_2260978;
extern __int64 GameData_22609a0;
extern __int64 GameData_22609b8;
extern __int64 GameData_22609e0;
extern __int64 GameData_22609f8;
extern __int64 GameData_2260a20;
extern __int64 GameData_2260a38;
extern __int64 GameData_2260a60;
extern __int64 GameData_2260a78;
extern __int64 GameData_2260aa0;
extern __int64 GameData_2260ab8;
extern __int64 GameData_2260ae0;
extern __int64 GameData_2260af8;
extern __int64 GameData_2260b20;
extern __int64 GameData_2260b38;
extern __int64 GameData_2260b60;
extern __int64 GameData_2260b78;
extern __int64 GameData_2260ba0;
extern __int64 GameData_2260bb8;
extern __int64 GameData_2260be0;
extern __int64 GameData_2260bf8;
extern __int64 GameData_2260c20;
extern __int64 GameData_2260c38;
extern __int64 GameData_2260c60;
extern __int64 GameData_2260c78;
extern __int64 GameData_2260ca0;
extern __int64 GameData_2260cb8;
extern __int64 GameData_2260ce0;
extern __int64 GameData_2260cf8;
extern __int64 GameData_2260d20;
extern __int64 GameData_2260d38;
extern __int64 GameData_2260d60;
extern __int64 GameData_2260d78;
extern __int64 GameData_2260da0;
extern __int64 GameData_2260db8;
extern __int64 GameData_2260de0;
extern __int64 GameData_2260df8;
extern __int64 GameData_2260e20;
extern __int64 GameData_2260e38;
extern __int64 GameData_2260e60;
extern __int64 GameData_2262ae0;
extern __int64 GameData_2262c00;
extern __int64 GameData_2263c50;
extern __int64 GameData_2263c58;
extern __int64 GameData_2263c60;
extern __int64 GameData_2263c70;
extern __int64 GameData_2263c80;
extern __int64 GameData_2263c90;
extern __int64 GameData_2263c98;
extern __int64 GameData_2263ca0;
extern __int64 GameData_2263cb0;
extern __int64 GameData_2263cc0;
extern __int64 GameData_2263cd8;
extern __int64 GameData_2263ce0;
extern __int64 GameData_2263ce8;
extern __int64 GameData_2263cf8;
extern __int64 GameData_2263d08;
extern __int64 GameData_2263d18;
extern __int64 GameData_2263d20;
extern __int64 GameData_2263d28;
extern __int64 GameData_2263d38;
extern __int64 GameData_2263d48;
extern __int64 GameData_2264528;
extern __int64 GameData_2265728;
extern __int64 GameData_226b1c8;
extern __int64 GameData_226b1d0;
extern __int64 GameData_226b1d8;
extern __int64 GameData_226b1e0;
extern __int64 GameData_226b1e8;
extern __int64 GameData_226b1f0;
extern __int64 GameData_226b6b0;
extern __int64 as_g_base_frame_counter;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameGlobalData_unknown_;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64 ui_LayoutAccessor_empty_;
extern __int64 ui_Manager_instance_;
extern char* GameData_20d1830;
extern char* GameData_20d1840;
extern char* GameData_20d8a70[7];
extern char GameData_1a9f09e;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern char GameData_2263c48;
extern char GameData_2263c88;
extern char GameData_2263cd0;
extern char GameData_2263d10;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_2260670;
extern int GameData_22606b0;
extern int GameData_22606f0;
extern int GameData_2260730;
extern int GameData_2260770;
extern int GameData_22607b0;
extern int GameData_22607f0;
extern int GameData_2260830;
extern int GameData_2260870;
extern int GameData_22608b0;
extern int GameData_22608f0;
extern int GameData_2260930;
extern int GameData_2260970;
extern int GameData_22609b0;
extern int GameData_22609f0;
extern int GameData_2260a30;
extern int GameData_2260a70;
extern int GameData_2260ab0;
extern int GameData_2260af0;
extern int GameData_2260b30;
extern int GameData_2260b70;
extern int GameData_2260bb0;
extern int GameData_2260bf0;
extern int GameData_2260c30;
extern int GameData_2260c70;
extern int GameData_2260cb0;
extern int GameData_2260cf0;
extern int GameData_2260d30;
extern int GameData_2260d70;
extern int GameData_2260db0;
extern int GameData_2260df0;
extern int GameData_2260e30;
extern int GameData_2263c68;
extern int GameData_2263c78;
extern int GameData_2263ca8;
extern int GameData_2263cb8;
extern int GameData_2263cf0;
extern int GameData_2263d00;
extern int GameData_2263d30;
extern int GameData_2263d40;
extern int GameData_2265a00;
extern unsigned int GameData_1c0dec0[7];
float GameRoutine_1035060(float*, unsigned __int16*, __int64, float*);
float LayoutAccessor_15637c0(__int64*, __int64, char);
float LayoutAccessor_15638b0(__int64*, char*, char);
float LayoutAccessor_15638b0_alt1(__int64*, const char*,
                                  char) __asm__("LayoutAccessor_15638b0");
float cosf(float);
float fmodf(float, float);
float sinf(float);
float ui_LayoutAccessor_GetPaneSize(__int64*, const char*);
float ui_LayoutAccessor_SetPaneTranslate(__int64*, const char*, __int64);
float32x4_t* GameRoutine_156c240(float32x4_t* result);
int* GameRoutine_183b190(int* result, int*, int*, int*);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
int sprintf(__int64, const char*, ...);
int strcmp(const char*, const char*);
unsigned __int64 AsyncLoadImage_17e4db0(unsigned __int64 result, const char*,
                                        char);
unsigned __int64 GameRoutine_18f34a0(__int64, unsigned __int8*);
unsigned __int64 strlen(const char*);
unsigned __int8* Element_1886b50(__int64, int, _QWORD*);
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
void AreaChangeIconList_Unknown4(__int64, __int64, int*, _DWORD*, __int64);
void BasicMenuCursor_16de600(__int64);
void CondTalkIconList_Unknown4(__int64, __int64, int*, __int64, __int64);
void GameHr_157e0f0(__int64*, const char*, const char*);
void GameHr_a07960(__int64, __int64*, int*);
__attribute__((swiftcall)) void GameRoutine_1366ac0(PSEUDO_X8, __int64,
                                                    __int64);
void GameRoutine_1563f90(__int64, __int64);
void GameRoutine_1564060(__int64*);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void GameRoutine_1597960();
void GameRoutine_18f3b60(__int64, char, __int64*);
void GameRoutine_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void GameRoutine_191e700(__int64);
void GameRoutine_191f9e0(__int64, __int64*, __int64*, __int64*);
void GameRoutine_191ff40(__int64, __int64*, __int64*, __int64*);
void KeyIcon_17aa380(__int64, const char*, unsigned int);
void LayoutAccessor_1562060(__int64*, const char*, const char*);
void NpcIconList_Unknown4(__int64, __int64, int*, __int64, __int64);
void QuestIconList_Unknown3(_QWORD*, __int64, int*);
void QuestIconList_Unknown4(__int64, __int64, int*, float*, __int64);
void __attribute__((noreturn)) GameRoutine_18f46f0();
void __attribute__((noreturn)) GameRoutine_18f4900();
void __attribute__((noreturn)) GameRoutine_18f4920();
void __attribute__((noreturn)) GameRoutine_191f6c0();
void __attribute__((noreturn)) GameRoutine_191f6e0();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void __cxa_guard_release(__int64);
void fw_graphics_RegisterProperty(_QWORD*, __int64);
void game_112ce60(__int64, __int64*, __int64);
void game_18f26a0(__int64, double);
void game_191d2f0(__int64, __int64, float);
void game_19a0960(__int64, __int64*);
void game_menu_179fec0(char**);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_15ff1c0(__int64 a1, __int64 a2, int a3);
__int64 game_1607900(__int64 result, __int64 a2, __int64 a3);
__int64 game_161e600(__int64 a1, char a2);
__int64 game_1636f50(__int64* a1, char a2);
__int64 game_16503d0(__int64 a1, int a2);
__int64 game_1650510(__int64 a1);
__int64 game_1650cc0(__int64 a1, __int64 a2);
__int64* game_165e2a0(__int64* result, __int64* a2, __int64* a3, __int64 a4,
                      __int64 a5, __int64* a6, __int64 a7);
void game_165e760(__int64 a1, char a2);
__int64 game_165f010(__int64 a1, unsigned int* a2);
unsigned __int64 game_1660460(__int64 a1);
__int64 game_1679430(_QWORD* a1);
__int64 game_1679510(_QWORD* a1);
__int64 game_1693b00();
__int64 game_16db500(_QWORD* a1);
__int64 game_16dc3e0(__int64 a1);
void game_16f03e0(__int64* a1);
__int64 game_170cac0(__int64 result);
void game_170d120(__int64 a1);
__int64 game_17356e0(__int64* a1, const char* a2);
__int64 game_1735b60(__int64 result);
void game_174d800(__int64* a1, float a2, float a3);
void game_1785dc0(_QWORD* a1);
void game_1786640(__int64 a1);
__int64 game_1797850(__int64 a1, __int64* a2, char a3);
__int64 game_1797af0(__int64 a1, __int64* a2, char a3);
void game_17a9aa0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
void game_17b8320(__int64 a1);
__int64 game_17be300(__int64 a1);
__int64 game_17bea50(__int64* a1, __int64 a2, __int64 a3, const char* a4);
void game_17bed50(__int64* a1, __int16* a2);
void game_17bf070(__int64* a1, __int16* a2);
void game_17bf390(__int64* a1, __int16* a2);
void game_17bf980(__int64* a1, __int16* a2);
__int64 game_17bfc90(__int64* a1, __int16* a2);
__int64 game_17bfd70(__int64 result, __int16* a2, char a3);
__int64 game_17c0070(__int64 result, int a2, __int16* a3);
__int64 game_17c05e0(__int64 result, __int16* a2);
void game_17c0d30(__int64* a1, __int64 a2);
__int64 game_17c13d0(__int64* a1, char a2);
void game_17cdea0(__int64 a1);
__int64 game_17e6dc0();
__attribute__((swiftcall)) void game_17e70c0(PSEUDO_X8 x8_, int a1);
void game_181b800(__int64* a1);
void game_183a1a0(__int64 a1, __int16 a2, int a3);
bool game_183b340(int* a1, int* a2);
__int64 game_18415e0(__int64 a1, __int64 a2);
__int64 game_1841930(__int64 a1, __int64 a2);
__int64 game_1843070(__int64 a1, unsigned __int8 a2);
__int64 game_18431d0(__int64 a1, unsigned __int8 a2);
__int64 game_1843310(__int64 a1, unsigned __int8 a2);
__int64 game_1843470(__int64 a1, unsigned __int8 a2);
__int64 game_18435a0(__int64 a1, unsigned __int8 a2);
__int64 game_1843a40(__int64 a1);
__int64 game_18569d0();
__int64* game_1864080(__int64* result, __int64* a2, __int64 a3, char a4);
__int64* game_1864cd0(__int64* result, __int64* a2, __int64* a3, __int64* a4);
bool game_1864e60(__int64 a1, __int64* a2);
_QWORD* game_18b0d00(_QWORD* a1);
void game_18c3020(_QWORD* a1);
__attribute__((swiftcall)) void game_18c8580(PSEUDO_X8 x8_, __int64* result);
__int64 game_18ca1f0(__int64 result, float a2);
__int64 game_18d62f0(__int64 a1);
void game_18d6470(__int64 a1, __int64 a2, unsigned __int64 a3, int a4);
void game_18dcae0(__int64 a1);
void game_18e7ac0(__int64 a1);
unsigned __int64 game_18edba0(__int64 a1);
void game_18eeb40(__int64 a1);
void game_18f3260(__int64 a1, __int64 a2, int a3);
__int64 game_1919ef0();
__int64 game_191ba20(__int64 result, _BYTE* a2, float a3, double a4, float a5,
                     float a6, float a7);
__int64 game_191d030(__int64 a1, __int64 a2);
__int64 game_191d050(__int64 a1, __int64 a2);
void game_191d680(__int64 a1, char a2);
_QWORD* game_191f160(_QWORD* result, unsigned __int8* a2);
void game_191f280(__int64 a1, __int64 a2);
_QWORD* game_19209f0(_QWORD* result, int* a2, _QWORD* a3);
void game_1922c00(__int64 a1, unsigned __int8* a2);

__int64 game_15ff1c0(__int64 a1, __int64 a2, int a3)
{
  int v3;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  char* v9;
  unsigned __int32 v10;
  const char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int32x4_t* v19;
  __int128 v20;
  _QWORD* v21;
  __int64 v22;
  __int64* v23;
  unsigned int v24;
  __int64 result;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v30;
    __int64 v31;
    const char* v32;
    int v33;
    char gap28_[4];
    __int128 v34;
    __int128 v35;
    __int64 v36;
    __int64 v37;
  } v30_;

  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(a1 + 2424) = a3 - 1;
  v5 = *(_QWORD*)(a1 + 8);
  if (v5 != 0) {
    v6 = std___1___shared_weak_count_lock(v5),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v7 = &ui_LayoutAccessor_empty_;
    if (v6 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v7 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v8 = v6;
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v8),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  else {
    v7 = &ui_LayoutAccessor_empty_;
  }
  v9 = game_util_Format("L_Stock/IconHPStock%02d", *(_DWORD*)(a1 + 2424)),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = 0;
  if (v7[2] == 0 || v7[1] == 0) {
    goto LABEL_26;
  }
  v11 = v9;
  v12 = std___1___shared_weak_count_lock(v7[1]),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v12 == 0) {
  LABEL_18:
    v16 = v7[1];
    v10 = 0;
    if (v16 == 0 || *(_QWORD*)(v16 + 8) == -1) {
      goto LABEL_26;
    }
    goto LABEL_23;
  }
  v13 = *v7;
  if (*v7 != 0) {
    v3 = *(unsigned __int8*)(v13 + 24);
    v14 = v13 + 152;
    if (v3 == 0) {
      v14 = 0;
    }
    v15 = v14 != v7[2];
  }
  else {
    v15 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v15) {
      goto LABEL_18;
    }
  }
  else {
    v17 = v12;
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v17),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v15) {
      goto LABEL_18;
    }
  }
  v10 = 0;
  if ((v3 & 1) == 0) {
  LABEL_26:
    *(_QWORD*)&v20 = 0;
    goto LABEL_27;
  }
LABEL_23:
  v18 = v7[2];
  if (v18 == 0) {
    goto LABEL_26;
  }
  v19 = (int32x4_t*)GameRoutine_155f760((__int64)v7, v18, v11),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)&v20 = 0;
  v10 = 0;
  if (v19 != nullptr) {
    v10 = LANES128(v19[9]).n128_u32[3];
    LODWORD(v20) = LANES128_OF(vdupq_laneq_s32(v19[7], 3)).n128_u32[0];
    DWORD1(v20) = HIDWORD(LANES128(v19[8]).n128_u64[1]);
  }
LABEL_27:
  v30_.v30 = 0;
  v30_.v31 = 0;
  v21 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  *((_QWORD*)&v20 + 1) = v10;
  v30_.v33 = 9;
  v30_.v34 = v20;
  v30_.v35 = GameData_1a837f0;
  v22 = *((_QWORD*)GameData_212c540 + 1);
  v30_.v36 = *(_QWORD*)GameData_212c540;
  v30_.v37 = v22;
  v30_.v32 = "UI_Deco_HPStock_Erase";
  v23 = Manager_bc6460(v21, (__int64)&v30_.v30, 1),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result =
      GameHr_14a10d0(&v30_.v30, (__int64)v23, v24, (__int64)&GameData_1a9f09e),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = v30_.v30;
  v27 = v30_.v31;
  if (v30_.v31 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v30_.v31 + 8), 1u,
                              memory_order_relaxed);
  }
  v28 = *(_QWORD*)(a1 + 2416);
  *(_QWORD*)(a1 + 2408) = v26;
  *(_QWORD*)(a1 + 2416) = v27;
  if (v28 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak(v28),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v27 = *(_QWORD*)(a1 + 2416);
  }
  if (v27 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak(v27),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v29 = v30_.v31;
    if (v30_.v31 == 0) {
      return result;
    }
  }
  else {
    v29 = v30_.v31;
    if (v30_.v31 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return std___1___shared_weak_count___release_weak(v29);
  }
  return result;
}

__int64 game_1607900(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;
  _QWORD v19[2];

  v3 = *(_QWORD*)(result + 16);
  v4 = *(_QWORD*)(result + 24);
  v19[0] = a2;
  v19[1] = a3;
  if (v3 != v4) {
    v5 = result;
    while (1) {
      result = *(_QWORD*)(v3 + 24);
      if (result == 0) {
        break;
      }
      result = std___1___shared_weak_count_lock(result);
      if (result == 0) {
        break;
      }
      v6 = *(_QWORD*)(v3 + 16);
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v7 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v7);
      }
      if (v6 == 0) {
        break;
      }
      v3 += 48;
      if (v3 == v4) {
        if (*(_DWORD*)(v5 + 8) != 0) {
          v8 = *(unsigned __int64**)v5;
          result = *(_QWORD*)(*(_QWORD*)v5 + 8LL);
          if (result != 0) {
            result = std___1___shared_weak_count_lock(result);
            if (result != 0) {
              v9 = *v8;
              v10 = result;
              if (v9 != 0) {
                result =
                    X8CALL_X0(__int64, GameRoutine_15b71b0((void*)(&v17_.v17),
                                                           v9, (__int64)v19));
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
                result = std___1___shared_weak_count___release_weak(v10);
              }
              if (v9 != 0) {
                result = v17_.v18;
                if (v17_.v18 != 0) {
                  v11 = std___1___shared_weak_count_lock(v17_.v18);
                  v12 = v17_.v17;
                  result = v17_.v18;
                  if (v17_.v18 != 0) {
                    result =
                        std___1___shared_weak_count___release_weak(v17_.v18);
                  }
                  if (v11 != 0 && v12 != 0) {
                    Element_1886b50(v12, 1, *(_QWORD**)(v5 + 16));
                    v13 = *(_QWORD*)(v5 + 16);
                    v14 = *(_QWORD*)(v13 + 24);
                    if (v14 != 0 &&
                        (v15 = std___1___shared_weak_count_lock(v14)) != 0) {
                      v16 = v15;
                      result = (__int64)Element_1886b50(*(_QWORD*)(v13 + 16), 0,
                                                        v19);
                      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
                        result =
                            std___1___shared_weak_count___release_weak(v16);
                      }
                    }
                    else {
                      result = (__int64)Element_1886b50(0, 0, v19);
                    }
                  }
                  else if (v11 == 0) {
                    return result;
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
                    return std___1___shared_weak_count___release_weak(v11);
                  }
                }
              }
            }
          }
        }
        return result;
      }
    }
  }
  return result;
}

__int64 game_161e600(__int64 a1, char a2)
{
  __int64* v3;
  __int64 v5;
  const char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  atomic_ullong* v16;
  int v17;
  char* v18;
  __int64 v19;
  struct {
    __int64 v21;
    __int64 v22;
    __int64 v23;
  } v21_;
  __int64* v24;
  __int64 v25[2];
  struct {
    __int64 v26[4];
    int v27;
    char gap92_[4];
    __int64 v28;
    __int64 v29;
  } v26_;
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;
  struct {
    __int64* v32;
    __int64 v33;
  } v32_;
  __int64 v34[2];

  v3 = (__int64*)(a1 + 848);
  LayoutAccessor_1560070((void*)(&v32_.v32), (__int64*)(a1 + 848),
                         "L_UnitInfo");
  if ((a2 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 1168);
  }
  else {
    v5 = 0;
  }
  if (v32_.v33 != 0) {
    v6 = *(const char**)(a1 + 1176);
    v7 = std___1___shared_weak_count_lock(v32_.v33);
    if (v7 != 0) {
      v8 = v7;
      if (v32_.v32 != nullptr) {
        LayoutAccessor_15740c0(v32_.v32, v5, 1, v6, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
    if (v32_.v33 != 0) {
      std___1___shared_weak_count___release_weak(v32_.v33);
    }
  }
  v9 = *(_QWORD*)(a1 + 856);
  v30_.v30 = 0;
  v30_.v31 = 0;
  if (v9 != 0 &&
      (v10 = std___1___shared_weak_count_lock(v9), v30_.v31 = v10, v10 != 0)) {
    v11 = v10;
    v30_.v30 = *v3;
    ui_LayoutAccessor_Setup_155dfa0((__int64*)(a1 + 1064), &v30_.v30,
                                    "L_InfoDetail");
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dfa0((__int64*)(a1 + 1064), &v30_.v30,
                                    "L_InfoDetail");
  }
  v12 = *(_QWORD*)(a1 + 960);
  if (v12 != 0) {
    v13 = std___1___shared_weak_count_lock(v12);
    if (v13 != 0) {
      v14 = *(_QWORD*)(a1 + 952);
    }
    else {
      v14 = 0;
    }
  }
  else {
    v14 = 0;
    v13 = 0;
  }
  v15 = ui_LayoutAccessor_FindPartsLayout((__int64*)(a1 + 952),
                                          "L_MenuItem_InfoHeader");
  v25[0] = 0;
  v25[1] = 0;
  v21_.v21 = 0;
  v21_.v22 = 0;
  memset(v26_.v26, 0, sizeof(v26_.v26));
  v26_.v28 = 0;
  v26_.v29 = 0;
  v34[0] = v14;
  v34[1] = v13;
  v21_.v23 = 0;
  v24 = v25;
  v26_.v27 = 1065353216;
  if (v13 != 0) {
    v16 = (atomic_ullong*)(v13 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dea0(&v21_.v21, v34, v15);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v16, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_25;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
      if (atomic_fetch_add(v16, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      LABEL_25:
        v17 = *(_DWORD*)(a1 + 1188);
        if (v17 != 0) {
          goto LABEL_26;
        }
      LABEL_29:
        v18 = "Menu_10";
        goto LABEL_30;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
    v17 = *(_DWORD*)(a1 + 1188);
    if (v17 == 0) {
      goto LABEL_29;
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dea0(&v21_.v21, v34, v15);
    v17 = *(_DWORD*)(a1 + 1188);
    if (v17 == 0) {
      goto LABEL_29;
    }
  }
LABEL_26:
  if (v17 == 1) {
    GameHr_157e0f0(&v21_.v21, "MID_Menu_Detail", "MID_Sys_Remaining");
    v18 = "Menu_09_Header";
  LABEL_30:
    LayoutAccessor_1562cf0(a1 + 952, (unsigned int*)v18);
  }
  LayoutAccessor_155e140(&v21_.v21);
  v19 = v26_.v29;
  if (v26_.v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26_.v29 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  GameRoutine_1564060(v26_.v26);
  GameRoutine_1563f90((__int64)&v24, v25[0]);
  if (v21_.v22 != 0) {
    std___1___shared_weak_count___release_weak(v21_.v22);
  }
  return BelongingMenu_16ca580(a1);
}

__int64 game_1636f50(__int64* a1, char a2)
{

#pragma clang fp contract(off)
  const char* v2;
  char v5;
  char v6;
  char v7;
  float v8;
  float v9;
  const char* v10;
  float v11;
  double v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  __int64 v20;
  float v21;
  const char* v22;
  __int64 result;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  _BOOL4 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31[3];

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  v2 = "N_Key";
  v5 = ui_LayoutAccessor_IsPaneVisible(a1, "N_Key"),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, "N_Key", a2),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((a2 & 1) != 0 && (v5 & 1) == 0) {
    GameHr_1562680((__int64)a1, (unsigned int*)"KeyWait",
                   0x1.0000000000000p+0f),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if ((a2 & 1) != 0) {
    v6 = ui_LayoutAccessor_IsPaneVisible(a1, "A_Wdw"),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
    v7 = ui_LayoutAccessor_IsPaneVisible(a1, "A_WdwTitle"),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((v6 & 1) != 0) {
      ui_LayoutAccessor_GetPaneTranslate(a1, "A_Wdw"),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
      v9 = v8;
      v10 = "Wdw";
    }
    else {
      if ((v7 & 1) == 0) {
        ui_LayoutAccessor_SetPaneVisible((__int64)a1, "N_Key", 0),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
        goto LABEL_14;
      }
      ui_LayoutAccessor_GetPaneTranslate(a1, "A_WdwTitle"),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
      v9 = v11;
      v10 = "WdwTitle";
    }
    v12 = ui_LayoutAccessor_GetPaneTranslate(a1, v10),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
    v13 = *(float*)&v12;
    v15 = v14;
    v31[2] = v16;
    v17 = ui_LayoutAccessor_GetPaneSize(a1, v10),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
    v19 = v18;
    v20 = ui_LayoutAccessor_FindPane(a1, v10),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
    v21 = 0x0.0p+0f;
    if (v20 != 0) {
      v22 = Pane_58fac0(v20, "KeyOffset_X"),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v22 != nullptr) {
        v21 = (float)*(int*)&v22[*((unsigned int*)v22 + 1)];
      }
    }
    v31[0] = (float)(v13 + (float)(v17 * 0x1.0000000000000p-1f)) + v21;
    v31[1] = v9 + (float)(v15 - (float)(v19 * 0x1.0000000000000p-1f));
    ui_LayoutAccessor_SetPaneTranslate(a1, "N_Key", (__int64)v31),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  }
LABEL_14:
  result = (__int64)LayoutAccessor_155fbe0(a1, "L_IconAccess"),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v24 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  if (result == 0) {
    goto LABEL_24;
  }
  v25 = *v24;
  if (*v24 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v25 + 24);
    v26 = v25 + 152;
    if ((_DWORD)v2 == 0) {
      v26 = 0;
    }
    v27 = v26 != v24[2];
  }
  else {
    v27 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v27) {
    LABEL_24:
      v28 = v24[1];
      if (v28 == 0 || *(_QWORD*)(v28 + 8) == -1) {
        return result;
      }
      goto LABEL_29;
    }
  }
  else {
    v29 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
    result = std___1___shared_weak_count___release_weak(v29),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v27) {
      goto LABEL_24;
    }
  }
  if (((unsigned __int8)v2 & 1) == 0) {
    return result;
  }
LABEL_29:
  if ((LayoutAccessor_15635a0(v24, (__int64)"Wait", 0) & 1) == 0) {
    GameHr_1562680((__int64)v24, (unsigned int*)"Wait", 0x1.0000000000000p+0f),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  result = LayoutAccessor_15635a0(v24, (__int64)"WaitAccess", 0),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((a2 & 1) != 0) {
    if ((result & 1) == 0) {
      GameHr_1562680((__int64)v24, (unsigned int*)"WaitAccess",
                     0x1.0000000000000p+0f),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
      result = LayoutAccessor_15635a0(v24, (__int64)"Wait", 0),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
      if ((result & 1) != 0) {
        v30 = LayoutAccessor_15637c0(v24, (__int64)"Wait", 0),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
        return LayoutAccessor_15636c0((__int64)v24, (__int64)"WaitAccess", 0,
                                      v30);
      }
    }
  }
  else if ((result & 1) != 0) {
    LayoutAccessor_15636c0((__int64)v24, (__int64)"WaitAccess", 0, 0x0.0p+0f),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
    return LayoutAccessor_1563030((__int64)v24, (unsigned int*)"WaitAccess", 0);
  }
  return result;
}

__int64 game_16503d0(__int64 a1, int a2)
{
  __int64 result;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  _QWORD v10[2];

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = *(__int64**)a1;
      v6 = result;
      if (v5 != nullptr) {
        v7 = ui_LayoutAccessor_FindPane(v5, "T_Num");
        if (v7 != 0) {
          v8 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d690, 0);
          if (v8 != 0) {
            GameRoutine_156c910(v8, "%d", 1, (unsigned int)a2);
          }
        }
        if (a2 <= 1) {
          v9 = "Bg_Danger";
        }
        else {
          v9 = "Bg_Default";
        }
        result = LayoutAccessor_1563280(v5, (__int64)v9, 1);
        if ((result & 1) == 0) {
          result = GameHr_1562680((__int64)v5, (unsigned int*)v9,
                                  0x1.0000000000000p+0f);
          if (a2 <= 1) {
            v10[0] = v5;
            v10[1] = v6;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                      memory_order_relaxed);
            game_1650510((__int64)v10);
            result = std___1___shared_weak_count___release_weak(v6);
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        return std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  return result;
}

__int64 game_1650510(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64* v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(__int64**)a1;
      v4 = result;
      if (v3 != nullptr) {
        result = LayoutAccessor_1563280(v3, (__int64)"Bg_Danger", 0);
        if ((result & 1) != 0) {
          v5 = (float)(nn_os_ConvertToTimeSpan(
                           *(_QWORD*)(as_g_base_frame_counter + 128)) /
                       1000) /
               0x1.04ad660000000p+14f;
          v6 = LayoutAccessor_15638b0(v3, "Bg_Danger", 1);
          v7 = fmodf(v5, v6);
          result =
              LayoutAccessor_15636c0((__int64)v3, (__int64)"Bg_Danger", 1, v7);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

__int64 game_1650cc0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _BYTE* v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  const char* v18;
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
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  int v32;
  int v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  const char* v48;
  float32x4_t v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
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
  float v67;
  _DWORD v68[2];

  v3 = *(_QWORD*)(a1 + 8);
  if (v3 == 0 || (v5 = std___1___shared_weak_count_lock(v3)) == 0) {
    LODWORD(v6) = 0;
    return (unsigned int)v6 ^ 1;
  }
  v6 = *(__int64**)a1;
  v7 = v5;
  if (v6 != nullptr) {
    v8 = Impl_1326420(a2);
    if (v8 == 0) {
    LABEL_30:
      v23 = ui_LayoutAccessor_FindTextBox(v6, "T_Txt");
      if (v23 != 0) {
        v24 = v23;
        v25 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v6, "T_Txt");
        if (v25 != nullptr) {
          GameRoutine_190a0c0((float*)&v50, (__int64)v68, &v67, v25, v25[27]);
          v26 = v68[0];
          v27 = v68[1];
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
      v29 = ui_LayoutAccessor_FindTextBox(v6, "T_Num");
      if (v29 != 0) {
        v30 = v29;
        v31 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v6, "T_Num");
        if (v31 != nullptr) {
          GameRoutine_190a0c0((float*)&v50, (__int64)v68, &v67, v31, v31[27]);
          v32 = v68[0];
          v33 = v68[1];
        }
        else {
          v32 = 0;
          v33 = 0;
        }
        v34 = *(_BYTE*)(v30 + 88);
        *(_DWORD*)(v30 + 80) = v32;
        *(_DWORD*)(v30 + 84) = v33;
        *(_BYTE*)(v30 + 88) = v34 | 0x10;
      }
      v35 = std___1___shared_weak_count_lock(v6[1]);
      v36 = *v6;
      v37 = v35;
      v38 = *(_QWORD*)(*v6 + 176);
      v39 = ui_LayoutAccessor_FindPane(v6, "A_Txt");
      v40 = (_QWORD*)__dynamic_cast(v39, GameData_212d670[0],
                                    GameData_21318d0[0], 0);
      v41 = v40[3];
      if (v38 != 0 && v41 != 0) {
        v43 = v40;
        Pane_58df60(v40[3], v40);
        Pane_58dee0(v38, (__int64)v43);
        Alignment_56b600((__int64)v43);
        ControlCreator_13633c0(v36);
        Pane_58df60(v38, v43);
        Pane_58dee0(v41, (__int64)v43);
        v44 = v6[1];
        if (v44 != 0) {
          v45 = std___1___shared_weak_count_lock(v44);
          if (v45 != 0) {
            v46 = v45;
            if (*v6 != 0) {
              ControlCreator_13633c0(*v6);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
              std___1___shared_weak_count___release_weak(v46);
            }
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
        std___1___shared_weak_count___release_weak(v37);
      }
      v54 = 0;
      v55 = 0;
      v52 = 0;
      v53 = 0;
      v51 = 0;
      v47 = ui_LayoutAccessor_FindPane(v6, "Bg");
      LANES128(v50).n128_u64[0] = v47;
      LANES128(v50).n128_u64[1] = ui_LayoutAccessor_FindPane(v6, "A_Txt");
      BYTE1(v55) = 1;
      if (v47 != 0) {
        v48 = Pane_58fac0(v47, "Margin_Width");
        if (v48 != nullptr) {
          *(float*)&v53 = (float)*(int*)&v48[*((unsigned int*)v48 + 1)];
        }
      }
      GameRoutine_156c240(&v50);
      LODWORD(v6) = 0;
      goto LABEL_57;
    }
    v9 = v8;
    v10 = GameHr_1651170(a2);
    if (v10 == 3) {
      LayoutAccessor_1562cf0((__int64)v6, (unsigned int*)"Lv_Shortage");
      v13 = *(_BYTE**)(v9 + 88);
      if (v13 == nullptr || *v13 == 0 ||
          (v12 = game_GameModeData_instance_,
           game_GameModeData_instance_ == 0)) {
      LABEL_16:
        LANES128(v50).n128_u64[1] = *(_QWORD*)(v9 + 72);
        LANES128(v50).n128_u64[0] = game_HashString(LANES128(v50).n128_i64[1]);
        if (game_GameModeData_instance_ == 0 ||
            (v14 = game_GameVariableTable_Find(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 LANES128(v50).n128_u64)) == 0 ||
            *(_DWORD*)(v14 + 32) == 0) {
          v15 = *(unsigned __int16*)(v9 + 48);
        LABEL_21:
          v16 = ui_LayoutAccessor_FindPane(v6, "T_Num");
          if (v16 != 0) {
            v17 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d690, 0);
            if (v17 != 0) {
              GameRoutine_156c910(v17, "%d", 1, v15);
            }
          }
          v18 = "MID_Sys_HonorLv";
          if (game_GameModeData_instance_ != 0 &&
              *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
            v18 = "MID_Sys_HonorLV_Part3";
          }
          v54 = -1;
          v55 = -1;
          v56 = -1;
          v57 = -1;
          v19 = *msg_MessageManager_instance__ptr[0];
          v58 = -1;
          v59 = -1;
          v60 = -1;
          v61 = -1;
          v62 = -1;
          v63 = -1;
          v64 = -1;
          v65 = -1;
          LANES128(v50).n128_u64[0] = (unsigned __int64)(GameData_212e348 + 2);
          LANES128(v50).n128_u64[1] = 0xFFFF0001FFFF0000LL;
          v51 = 0xFFFF0004FFFF0002LL;
          v52 = 0xFFFF0006FFFF0005LL;
          v66 = 8;
          v53 = 0xFFFF0008FFFF0007LL;
          v20 = GameRoutine_a4dbe0(v19, v18, 0);
          if (v20 != nullptr) {
            v21 = (__int64)v20;
            v22 = ui_LayoutAccessor_FindTextBox(v6, "T_Txt");
            if (v22 != 0) {
              GameRoutine_156c5d0(v22, v21, 0);
            }
          }
          goto LABEL_30;
        }
      LABEL_19:
        v15 = 0;
        goto LABEL_21;
      }
    LABEL_15:
      if (*(_BYTE*)(v12 + 15) == 1) {
        goto LABEL_19;
      }
      goto LABEL_16;
    }
    if (v10 == 1) {
      LayoutAccessor_1562cf0((__int64)v6, (unsigned int*)"Lv_Complete");
      v11 = *(_BYTE**)(v9 + 88);
      if (v11 == nullptr) {
        goto LABEL_16;
      }
      if (*v11 == 0) {
        goto LABEL_16;
      }
      v12 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_16;
      }
      goto LABEL_15;
    }
    LODWORD(v6) = 1;
  }
LABEL_57:
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return (unsigned int)v6 ^ 1;
}

__int64* game_165e2a0(__int64* result, __int64* a2, __int64* a3, __int64 a4,
                      __int64 a5, __int64* a6, __int64 a7)
{
  __int64 v9;
  __int64 i;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  int v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  int v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64* j;
  __int64 v31;
  int v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  _BOOL4 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64* v50;
  int v51;
  int v52;
  bool v53;
  __int64* v54;
  __int64* v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64* v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64* v66;

  if (a5 != 0) {
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return result;
      }
      v9 = -a4;
      for (i = 0;; i += 2) {
        v11 = &result[i];
        if ((signed __int32)*((_DWORD*)a2 + 2) < SLODWORD(result[i + 1])) {
          break;
        }
        if (__CFADD__(v9++, 1)) {
          return result;
        }
      }
      v13 = -v9;
      if (-v9 >= a5) {
        if (v9 == -1) {
          v61 = &result[i];
          v62 = result[i];
          *v61 = *a2;
          *a2 = v62;
          LODWORD(v62) = *((_DWORD*)v61 + 2);
          *((_DWORD*)v61 + 2) = *((_DWORD*)a2 + 2);
          *((_DWORD*)a2 + 2) = v62;
          return result;
        }
        v22 = v13 / 2;
        v16 = &result[2 * (v13 / 2) + i];
        if (a3 == a2) {
          v15 = a3;
        }
        else {
          v23 = ((char*)a3 - (char*)a2) >> 4;
          v15 = a2;
          do {
            v24 = v23 >> 1;
            v25 = &v15[2 * (v23 >> 1)];
            v26 = *((_DWORD*)v25 + 2);
            v27 = v25 + 2;
            v23 += ~(v23 >> 1);
            if (v26 < (signed __int32)*((_DWORD*)v16 + 2)) {
              v15 = v27;
            }
            else {
              v23 = v24;
            }
          } while (v23 != 0);
        }
        v14 = ((char*)v15 - (char*)a2) >> 4;
      }
      else {
        v14 = a5 / 2;
        v15 = &a2[2 * (a5 / 2)];
        if (v11 == a2) {
          v16 = a2;
        }
        else {
          v16 = &result[i];
          v17 = ((char*)a2 - (char*)result - i * 8) >> 4;
          do {
            v18 = v17 >> 1;
            v19 = &v16[2 * (v17 >> 1)];
            v20 = *((_DWORD*)v19 + 2);
            v21 = v19 + 2;
            v17 += ~(v17 >> 1);
            if ((signed __int32)*((_DWORD*)v15 + 2) < v20) {
              v17 = v18;
            }
            else {
              v16 = v21;
            }
          } while (v17 != 0);
        }
        v22 = ((char*)v16 - (char*)result - i * 8) >> 4;
      }
      v28 = v15;
      if (v16 != a2) {
        v28 = v16;
        if (a2 != v15) {
          v29 = *v16;
          v28 = v16 + 2;
          *v16 = *a2;
          *a2 = v29;
          LODWORD(v29) = *((_DWORD*)v16 + 2);
          *((_DWORD*)v16 + 2) = *((_DWORD*)a2 + 2);
          *((_DWORD*)a2 + 2) = v29;
          for (j = a2 + 2; j != v15; j += 2) {
            v31 = *v28;
            if (v28 == a2) {
              a2 = j;
            }
            *v28 = *j;
            *j = v31;
            v32 = *((_DWORD*)v28 + 2);
            *((_DWORD*)v28 + 2) = *((_DWORD*)j + 2);
            *((_DWORD*)j + 2) = v32;
            v28 += 2;
          }
          if (v28 != a2) {
            v33 = v28;
            v34 = a2;
            while (1) {
              v35 = *v33;
              *v33 = *v34;
              *v34 = v35;
              LODWORD(v35) = *((_DWORD*)v33 + 2);
              *((_DWORD*)v33 + 2) = *((_DWORD*)v34 + 2);
              v33 += 2;
              *((_DWORD*)v34 + 2) = v35;
              v34 += 2;
              v36 = v33 == a2;
              if (v34 == v15) {
                if (v33 == a2) {
                  break;
                }
                v34 = a2 + 2;
                while (1) {
                  v37 = *v33;
                  *v33 = *a2;
                  *a2 = v37;
                  LODWORD(v37) = *((_DWORD*)v33 + 2);
                  *((_DWORD*)v33 + 2) = *((_DWORD*)a2 + 2);
                  v33 += 2;
                  *((_DWORD*)a2 + 2) = v37;
                  v36 = v33 == a2;
                  if (v34 != v15) {
                    break;
                  }
                  if (v33 == a2) {
                    goto LABEL_45;
                  }
                }
              }
              if (v36) {
                a2 = v34;
              }
            }
          }
        }
      }
    LABEL_45:
      v38 = a5 - v14;
      if (v22 + v14 >= a5 - (v22 + v14) - v9) {
        game_165e2a0(v28, v15, a3, -(v22 + v9), a5 - v14, a6, a7);
        v15 = v16;
        v38 = v14;
        a4 = v22;
        a3 = v28;
      }
      else {
        v39 = v11;
        v40 = v16;
        v41 = a3;
        v42 = -(v22 + v9);
        game_165e2a0(v39, v40, v28, v22, v14, a6, a7);
        a4 = v42;
        a3 = v41;
        v11 = v28;
      }
      a5 = v38;
      result = v11;
      a2 = v15;
      if (v38 == 0) {
        return result;
      }
    }
    if (a4 <= a5) {
      if (result != a2) {
        v55 = a6;
        v56 = result;
        do {
          v57 = *v56;
          v58 = v56[1];
          v56 += 2;
          *v55 = v57;
          v55[1] = v58;
          v55 += 2;
        } while (v56 != a2);
        v59 = v55 - 2;
        while (a2 != a3) {
          if ((signed __int32)*((_DWORD*)a2 + 2) >=
              (signed __int32)*((_DWORD*)a6 + 2)) {
            v60 = a6;
            a6 += 2;
          }
          else {
            v60 = a2;
            a2 += 2;
          }
          *result = *v60;
          *((_DWORD*)result + 2) = *((_DWORD*)v60 + 2);
          result += 2;
          if (v55 == a6) {
            return result;
          }
        }
        v64 = 0;
        do {
          v65 = &a6[v64];
          v66 = &result[v64];
          v64 += 2;
          *v66 = *v65;
          *((_DWORD*)v66 + 2) = *((_DWORD*)v65 + 2);
        } while (v59 != v65);
      }
    }
    else if (a2 != a3) {
      v43 = 0;
      do {
        v44 = &a2[v43];
        v45 = &a6[v43];
        v43 += 2;
        v47 = *v44;
        v46 = v44[1];
        *v45 = v47;
        v45[1] = v46;
      } while (&a2[v43] != a3);
      v48 = a3 - 1;
      v49 = &a6[v43];
      while (a2 != result) {
        v50 = a2 - 1;
        v51 = *((_DWORD*)a2 - 2);
        v52 = *((_DWORD*)v49 - 2);
        v53 = v52 < v51;
        if (v52 < v51) {
          v54 = a2 - 2;
        }
        else {
          v54 = v49 - 2;
        }
        if (v53) {
          a2 -= 2;
        }
        else {
          v50 = v49 - 1;
        }
        if (!v53) {
          v49 -= 2;
        }
        *(v48 - 1) = *v54;
        *(_DWORD*)v48 = *(_DWORD*)v50;
        v48 -= 2;
        if (v49 == a6) {
          return result;
        }
      }
      for (; v49 != a6; v48 -= 2) {
        v63 = *(v49 - 2);
        v49 -= 2;
        *(v48 - 1) = v63;
        *(_DWORD*)v48 = *((_DWORD*)v49 + 2);
      }
    }
  }
  return result;
}

void game_165e760(__int64 a1, char a2)
{
  int v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  struct {
    __int64 v33;
    __int64 v34;
  } v33_;
  _QWORD v35[2];

  if ((a2 & 1) != 0) {
    if ((LayoutAccessor_1563280(*(__int64**)a1, (__int64)"Select", 0) & 1) ==
        0) {
      GameHr_1562680(*(_QWORD*)a1, (unsigned int*)"Select",
                     0x1.0000000000000p+0f);
    }
  }
  else if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
    LayoutAccessor_1562cf0(*(_QWORD*)a1, (unsigned int*)"Default");
  }
  v5 = *(_QWORD*)(a1 + 16);
  v6 = *(_QWORD*)(v5 + 16);
  if (v6 != 0) {
    v7 = std___1___shared_weak_count_lock(v6);
    if (v7 != 0) {
      v8 = *(__int64**)(v5 + 8);
      v9 = v7;
      if (v8 != nullptr) {
        v2 = LayoutAccessor_155ea30(v8) ^ 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
      if (((v8 == nullptr) | v2 & 1) == 0) {
        v10 = *(_QWORD*)(a1 + 16);
        v11 = *(_QWORD*)(v10 + 16);
        if (v11 != 0) {
          v12 = std___1___shared_weak_count_lock(v11);
          if (v12 != 0) {
            v13 = *(__int64**)(v10 + 8);
            v14 = v12;
            if (v13 != nullptr) {
              v15 = game_util_Format("L_Icon%02d", 0);
              LayoutAccessor_1560070((void*)(&v33_.v33), v13, v15);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if (v13 != nullptr) {
                goto LABEL_19;
              }
            }
            else {
              (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
              std___1___shared_weak_count___release_weak(v14);
              if (v13 != nullptr) {
              LABEL_19:
                if ((a2 & 1) != 0) {
                LABEL_20:
                  v16 = v33_.v34;
                  v35[0] = v33_.v33;
                  v35[1] = v33_.v34;
                  if (v33_.v34 == 0) {
                    game_165f010((__int64)v35, (unsigned int*)"WaitAccess");
                    goto LABEL_31;
                  }
                  atomic_fetch_add_explicit(
                      (atomic_ullong* volatile)(v33_.v34 + 16), 1u,
                      memory_order_relaxed);
                  game_165f010((__int64)v35, (unsigned int*)"WaitAccess");
                  goto LABEL_22;
                }
              LABEL_26:
                if (v33_.v34 == 0) {
                  v26 = *(_QWORD*)(v10 + 16);
                  if (v26 == 0) {
                    goto LABEL_54;
                  }
                  v27 = std___1___shared_weak_count_lock(v26);
                  if (v27 == 0) {
                    goto LABEL_54;
                  }
                  v28 = *(__int64**)(v10 + 8);
                  v29 = v27;
                  if (v28 != nullptr) {
                    v30 = game_util_Format("L_Icon%02d", 1);
                    LayoutAccessor_1560070((void*)(&v33_.v33), v28, v30);
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
                    std___1___shared_weak_count___release_weak(v29);
                  }
                  if (v28 != nullptr) {
                    v24 = v33_.v34;
                  }
                  else {
                  LABEL_54:
                    v24 = 0;
                    v33_.v33 = 0;
                    v33_.v34 = 0;
                  }
                  goto LABEL_55;
                }
                v17 = std___1___shared_weak_count_lock(v33_.v34);
                if (v17 == 0) {
                  goto LABEL_31;
                }
                v18 = v33_.v33;
                v16 = v17;
                if (v33_.v33 != 0) {
                  LayoutAccessor_15636c0(v33_.v33, (__int64)"WaitAccess", 0,
                                         0x0.0p+0f);
                  LayoutAccessor_1563030(v18, (unsigned int*)"WaitAccess", 1);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) != 0) {
                LABEL_31:
                  if (v33_.v34 != 0) {
                    std___1___shared_weak_count___release_weak(v33_.v34);
                  }
                  v19 = *(_QWORD*)(v10 + 16);
                  if (v19 != 0) {
                    v20 = std___1___shared_weak_count_lock(v19);
                    if (v20 != 0) {
                      v21 = *(__int64**)(v10 + 8);
                      v22 = v20;
                      if (v21 != nullptr) {
                        v23 = game_util_Format("L_Icon%02d", 1);
                        LayoutAccessor_1560070((void*)(&v33_.v33), v21, v23);
                      }
                      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
                        std___1___shared_weak_count___release_weak(v22);
                      }
                      if (v21 != nullptr) {
                        v24 = v33_.v34;
                        if ((a2 & 1) != 0) {
                          v35[0] = v33_.v33;
                          v35[1] = v33_.v34;
                          if (v33_.v34 != 0) {
                            v25 = v33_.v34;
                            atomic_fetch_add_explicit(
                                (atomic_ullong* volatile)(v33_.v34 + 16), 1u,
                                memory_order_relaxed);
                            game_165f010((__int64)v35,
                                         (unsigned int*)"WaitAccess");
                          LABEL_61:
                            std___1___shared_weak_count___release_weak(v25);
                          LABEL_62:
                            if (v33_.v34 != 0) {
                              std___1___shared_weak_count___release_weak(
                                  v33_.v34);
                            }
                            return;
                          }
                        LABEL_45:
                          game_165f010((__int64)v35,
                                       (unsigned int*)"WaitAccess");
                          goto LABEL_62;
                        }
                      LABEL_55:
                        if (v24 == 0) {
                          return;
                        }
                        v31 = std___1___shared_weak_count_lock(v24);
                        if (v31 == 0) {
                          goto LABEL_62;
                        }
                        v32 = v33_.v33;
                        v25 = v31;
                        if (v33_.v33 != 0) {
                          LayoutAccessor_15636c0(
                              v33_.v33, (__int64)"WaitAccess", 0, 0x0.0p+0f);
                          LayoutAccessor_1563030(
                              v32, (unsigned int*)"WaitAccess", 1);
                        }
                        if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) != 0) {
                          goto LABEL_62;
                        }
                        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
                        goto LABEL_61;
                      }
                    }
                  }
                  v33_.v33 = 0;
                  v33_.v34 = 0;
                  if ((a2 & 1) == 0) {
                    return;
                  }
                  v35[0] = v33_.v33;
                  v35[1] = 0;
                  goto LABEL_45;
                }
                (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
              LABEL_22:
                std___1___shared_weak_count___release_weak(v16);
                goto LABEL_31;
              }
            }
          }
        }
        v33_.v33 = 0;
        v33_.v34 = 0;
        if ((a2 & 1) != 0) {
          goto LABEL_20;
        }
        goto LABEL_26;
      }
    }
  }
}

__int64 game_165f010(__int64 a1, unsigned int* a2)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64* v5;
  float v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = *(__int64**)a1;
      if (v5 != nullptr) {
        v6 = *(float*)(game_script_hub_g_frame_counter + 104) *
             0x1.0aef000000000p+4f;
        if (v6 != 0x0.0p+0f) {
          v7 = result;
          GameHr_1562680((__int64)v5, a2, 0x1.0000000000000p+0f);
          v8 = *(float*)(game_script_hub_g_frame_counter + 104) *
               (float)((float)(nn_os_ConvertToTimeSpan(
                                   *(_QWORD*)(game_script_hub_g_frame_counter +
                                              24)) /
                               1000000) /
                       v6);
          v9 = LayoutAccessor_15638b0(v5, (char*)a2, 1);
          v10 = fmodf(v8, v9);
          LayoutAccessor_15636c0((__int64)v5, (__int64)a2, 0, v10);
          result = v7;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v11 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        return std___1___shared_weak_count___release_weak(v11);
      }
    }
  }
  return result;
}

unsigned __int64 game_1660460(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  char* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  unsigned __int64 v25;
  char v26;
  __int64* v27;
  unsigned __int64 v28;
  const char* v29;
  char v30;
  __int64 v31;
  __int64 v32;
  char v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  int v44;
  char v45;
  float32x4_t v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  float32x4_t v52;
  float v53;

  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, "Bg", 0);
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, "T_Txt", 0);
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, "L_IconPin", 0);
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, "L_DagsionHp", 0);
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, "L_SpotDispatch", 0);
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, "L_HonorLv00", 0);
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, "L_Cost", 0);
  result = game_gmap_GmapUIDef_SetQuestIcon(*(_QWORD*)(a1 + 72),
                                            *(_QWORD*)(a1 + 88), 1);
  if ((result & 1) == 0) {
    goto LABEL_28;
  }
  v3 = *(_QWORD*)(a1 + 72);
  v4 = *(_QWORD*)(v3 + 16);
  if (v4 == 0) {
    goto LABEL_12;
  }
  v5 = std___1___shared_weak_count_lock(v4);
  if (v5 == 0) {
    goto LABEL_12;
  }
  v6 = *(__int64**)(v3 + 8);
  v7 = v5;
  if (v6 != nullptr) {
    v8 = game_util_Format("L_Icon%02d", 0);
    LayoutAccessor_1560070((void*)(&v52), v6, v8);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_8;
    }
  LABEL_12:
    v52 = (__typeof__(v52)){0};
    v46 = (__typeof__(v46)){0};
    goto LABEL_13;
  }
  (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  std___1___shared_weak_count___release_weak(v7);
  if (v6 == nullptr) {
    goto LABEL_12;
  }
LABEL_8:
  v9 = LANES128(v52).n128_i64[1];
  v46 = v52;
  if (LANES128(v52).n128_u64[1] != 0) {
    atomic_fetch_add_explicit(
        (atomic_ullong* volatile)(LANES128(v52).n128_u64[1] + 16), 1u,
        memory_order_relaxed);
    game_165f010((__int64)&v46, (unsigned int*)"Wait");
    std___1___shared_weak_count___release_weak(v9);
    v10 = LANES128(v52).n128_i64[1];
    if (LANES128(v52).n128_u64[1] == 0) {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
LABEL_13:
  game_165f010((__int64)&v46, (unsigned int*)"Wait");
  v10 = LANES128(v52).n128_i64[1];
  if (LANES128(v52).n128_u64[1] != 0) {
  LABEL_14:
    std___1___shared_weak_count___release_weak(v10);
  }
LABEL_15:
  v11 = *(_QWORD*)(v3 + 16);
  if (v11 != 0) {
    v12 = std___1___shared_weak_count_lock(v11);
    if (v12 != 0) {
      v13 = *(__int64**)(v3 + 8);
      v14 = v12;
      if (v13 != nullptr) {
        v15 = game_util_Format("L_Icon%02d", 1);
        LayoutAccessor_1560070((void*)(&v52), v13, v15);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v13 != nullptr) {
          goto LABEL_21;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v14);
        if (v13 != nullptr) {
        LABEL_21:
          v16 = LANES128(v52).n128_i64[1];
          v46 = v52;
          if (LANES128(v52).n128_u64[1] != 0) {
            atomic_fetch_add_explicit(
                (atomic_ullong* volatile)(LANES128(v52).n128_u64[1] + 16), 1u,
                memory_order_relaxed);
            game_165f010((__int64)&v46, (unsigned int*)"Wait");
            std___1___shared_weak_count___release_weak(v16);
            result = LANES128(v52).n128_u64[1];
            if (LANES128(v52).n128_u64[1] == 0) {
              goto LABEL_28;
            }
            goto LABEL_27;
          }
          goto LABEL_26;
        }
      }
    }
  }
  v52 = (__typeof__(v52)){0};
  v46 = (__typeof__(v46)){0};
LABEL_26:
  game_165f010((__int64)&v46, (unsigned int*)"Wait");
  result = LANES128(v52).n128_u64[1];
  if (LANES128(v52).n128_u64[1] != 0) {
  LABEL_27:
    result = std___1___shared_weak_count___release_weak(result);
  }
LABEL_28:
  v17 = *(_QWORD*)(a1 + 88);
  if (*(_QWORD*)(v17 + 120) == 0) {
    return result;
  }
  result = Impl_13261c0(*(_QWORD*)(a1 + 88));
  if ((unsigned __int8)result == 13) {
    return result;
  }
  result = Impl_13261c0(v17);
  if ((unsigned __int8)result == 12) {
    return result;
  }
  result = Impl_13261c0(v17);
  if ((unsigned __int8)result == 11) {
    return result;
  }
  v18 = *(_QWORD*)(*(_QWORD*)(a1 + 88) + 120LL);
  if (v18 == 0) {
    return result;
  }
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, "Bg", 1);
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, "T_Txt", 1);
  v19 = *(__int64**)a1;
  v20 = GameRoutine_adf880(v18, 0);
  LayoutAccessor_1562060(v19, "T_Txt", v20);
  v21 = *(__int64**)a1;
  v22 = ui_LayoutAccessor_FindTextBox(*(__int64**)a1, "T_Txt");
  if (v22 != 0) {
    v23 = v22;
    v24 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v21, "T_Txt");
    if (v24 != nullptr) {
      GameRoutine_190a0c0((float*)&v46, (__int64)&v52, &v53, v24, v24[27]);
      v25 = LANES128(v52).n128_u64[0];
    }
    else {
      v25 = 0;
    }
    v26 = *(_BYTE*)(v23 + 88);
    *(_QWORD*)(v23 + 80) = v25;
    *(_BYTE*)(v23 + 88) = v26 | 0x10;
  }
  v27 = *(__int64**)a1;
  v50 = 0;
  v51 = 0;
  v48 = 0;
  v49 = 0;
  v47 = 0;
  v28 = ui_LayoutAccessor_FindPane(v27, "Bg");
  LANES128(v46).n128_u64[0] = v28;
  LANES128(v46).n128_u64[1] =
      ui_LayoutAccessor_FindPane(*(__int64**)a1, "T_Txt");
  BYTE1(v51) = 1;
  if (v28 != 0) {
    v29 = Pane_58fac0(v28, "Margin_Width");
    if (v29 != nullptr) {
      *(float*)&v49 = (float)*(int*)&v29[*((unsigned int*)v29 + 1)];
    }
  }
  GameRoutine_156c240(&v46);
  LANES128(v46).n128_u64[0] =
      ui_LayoutAccessor_FindPane(*(__int64**)a1, "Overlay");
  GameRoutine_156c240(&v46);
  LayoutAccessor_1560070((void*)(&v46), *(__int64**)a1, "L_SpotDispatch");
  v30 = GmapUIDef_1653cd0((__int64)&v46, *(_QWORD*)(a1 + 88), 1);
  v31 = LANES128(v46).n128_i64[1];
  *(_BYTE*)(a1 + 107) = v30 & 1;
  if (v31 != 0) {
    std___1___shared_weak_count___release_weak(v31);
    v32 = *(_QWORD*)a1;
    if ((*(_BYTE*)(a1 + 107) & 1) != 0) {
    LABEL_43:
      v33 = (*(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5856LL) & 2) != 0;
      goto LABEL_46;
    }
  }
  else {
    v32 = *(_QWORD*)a1;
    if ((v30 & 1) != 0) {
      goto LABEL_43;
    }
  }
  v33 = 0;
LABEL_46:
  ui_LayoutAccessor_SetPaneVisible(v32, "L_SpotDispatch", v33);
  if ((unsigned __int8)Impl_13261c0(*(_QWORD*)(a1 + 88)) != 8) {
    goto LABEL_62;
  }
  v34 = *(_QWORD*)(a1 + 88);
  v35 = *(_QWORD*)(v34 + 280);
  if (v35 == 0 ||
      (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v35 + 24LL))(v35) == 1 &&
          ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v34 + 280) + 112LL))(
               *(_QWORD*)(v34 + 280)) &
           1) != 0) {
    goto LABEL_62;
  }
  v36 = *(_QWORD*)(v34 + 280);
  if (v36 == 0) {
    goto LABEL_62;
  }
  v37 = (*(__int64 (**)(__int64))(*(_QWORD*)v36 + 256LL))(v36);
  if ((signed __int32)*(_DWORD*)(a1 + 112) > v37) {
    LayoutAccessor_1560070((void*)(&v52), *(__int64**)a1,
                           "L_SpotDispatch/L_Fort");
    if (LANES128(v52).n128_u64[1] != 0) {
      v38 = std___1___shared_weak_count_lock(LANES128(v52).n128_i64[1]);
      v39 = LANES128(v52).n128_u64[0];
      if (LANES128(v52).n128_u64[1] != 0) {
        std___1___shared_weak_count___release_weak(LANES128(v52).n128_i64[1]);
      }
      if (v38 != 0 && v39 != 0) {
        GameHr_1562680(v39, (unsigned int*)"Damage", 0x1.0000000000000p+0f);
        goto LABEL_59;
      }
      if (v38 != 0) {
      LABEL_59:
        if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
          std___1___shared_weak_count___release_weak(v38);
        }
      }
    }
  }
  *(_DWORD*)(a1 + 112) = v37;
LABEL_62:
  v40 = ui_LayoutAccessor_FindAlignment(*(__int64**)a1, "A_Icon");
  if (v40 != 0) {
    Alignment_56b600(v40);
  }
  LayoutAccessor_1560070((void*)(&v46), *(__int64**)a1, "L_HonorLv00");
  result = LANES128(v46).n128_u64[1];
  if (LANES128(v46).n128_u64[1] != 0) {
    v41 = std___1___shared_weak_count_lock(LANES128(v46).n128_i64[1]);
    result = LANES128(v46).n128_u64[1];
    v42 = LANES128(v46).n128_u64[0];
    if (v41 != 0) {
      v43 = LANES128(v46).n128_u64[0];
    }
    else {
      v43 = 0;
    }
    if (LANES128(v46).n128_u64[1] != 0) {
      result =
          std___1___shared_weak_count___release_weak(LANES128(v46).n128_i64[1]);
    }
    if (v43 != 0) {
      v44 = (unsigned __int8)Impl_13261c0(*(_QWORD*)(a1 + 88));
      result = LayoutAccessor_155e830(v42, v44 == 4);
      if (v44 == 4) {
        LANES128(v46).n128_u64[0] = v43;
        LANES128(v46).n128_u64[1] = v41;
        if (v41 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 16), 1u,
                                    memory_order_relaxed);
        }
        v45 = game_1650cc0((__int64)&v46, *(_QWORD*)(a1 + 88));
        if (LANES128(v46).n128_u64[1] != 0) {
          std___1___shared_weak_count___release_weak(LANES128(v46).n128_i64[1]);
        }
        result = LayoutAccessor_155e830(v42, v45 & 1);
      }
    }
    if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v41 + 16LL))(v41);
      return std___1___shared_weak_count___release_weak(v41);
    }
  }
  return result;
}

__int64 game_1679430(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v10 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v10;
  if (v10 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_1560070((void*)(&v11_.v11), v6, "L_IconQuest");
  v8 = v11_.v11;
  result = v11_.v12;
  if (v11_.v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11_.v12 + 16), 1u,
                              memory_order_relaxed);
  }
  v9 = a1[15];
  a1[14] = v8;
  a1[15] = result;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
    result = v11_.v12;
  }
  a1[16] = 0x100000001LL;
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 game_1679510(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  atomic_ullong* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  atomic_ullong* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  atomic_ullong* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  atomic_ullong* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  atomic_ullong* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  atomic_ullong* v40;
  __int64* v41;
  __int64 result;
  __int64* v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  __int64* v49;
  __int64* v50;
  struct {
    __int64 v51;
    __int64 v52;
  } v51_;

  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v43 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v43;
  if (v43 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_1562cf0((__int64)v6, (unsigned int*)"Info_Off");
  v7 = a1[7];
  if (v7 == 0) {
    goto LABEL_10;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = v8;
  v10 = (atomic_ullong*)(v8 + 8);
  v11 = (__int64*)a1[6];
  if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v44 = v11;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak(v9);
  v11 = v44;
  if (v44 == nullptr) {
  LABEL_10:
    v11 = &ui_LayoutAccessor_empty_;
  }
LABEL_11:
  ui_LayoutAccessor_SetPaneVisible((__int64)v11, "L_Info", 0);
  v12 = a1[7];
  if (v12 == 0) {
    goto LABEL_15;
  }
  v13 = std___1___shared_weak_count_lock(v12);
  if (v13 == 0) {
    goto LABEL_15;
  }
  v14 = v13;
  v15 = (atomic_ullong*)(v13 + 8);
  v16 = (__int64*)a1[6];
  if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v16 != nullptr) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v45 = v16;
  (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
  std___1___shared_weak_count___release_weak(v14);
  v16 = v45;
  if (v45 == nullptr) {
  LABEL_15:
    v16 = &ui_LayoutAccessor_empty_;
  }
LABEL_16:
  ui_LayoutAccessor_SetPaneVisible((__int64)v16, "A_Txt", 1);
  v17 = a1[7];
  if (v17 == 0) {
    goto LABEL_20;
  }
  v18 = std___1___shared_weak_count_lock(v17);
  if (v18 == 0) {
    goto LABEL_20;
  }
  v19 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v19 != nullptr) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  v46 = v18;
  (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
  std___1___shared_weak_count___release_weak(v46);
  if (v19 == nullptr) {
  LABEL_20:
    v19 = &ui_LayoutAccessor_empty_;
  }
LABEL_21:
  v20 = GameRoutine_adf880(*(_QWORD*)(a1[11] + 120LL), 0);
  LayoutAccessor_1562060(v19, "T_Txt", v20);
  (*(void (**)(_QWORD*))(*a1 + 568LL))(a1);
  (*(void (**)(_QWORD*))(*a1 + 576LL))(a1);
  game_gmap_GmapUIDef_SetQuestIcon((__int64)(a1 + 13), a1[11], 1);
  (*(void (**)(_QWORD*))(*a1 + 560LL))(a1);
  v21 = a1[7];
  if (v21 == 0) {
    goto LABEL_25;
  }
  v22 = std___1___shared_weak_count_lock(v21);
  if (v22 == 0) {
    goto LABEL_25;
  }
  v23 = v22;
  v24 = (atomic_ullong*)(v22 + 8);
  v25 = (__int64*)a1[6];
  if (atomic_fetch_add(v24, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v25 != nullptr) {
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  v47 = v25;
  (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
  std___1___shared_weak_count___release_weak(v23);
  v25 = v47;
  if (v47 == nullptr) {
  LABEL_25:
    v25 = &ui_LayoutAccessor_empty_;
  }
LABEL_26:
  ui_LayoutAccessor_SetPaneVisible((__int64)v25, "L_SpotGauge", 0);
  v26 = a1[7];
  if (v26 == 0) {
    goto LABEL_30;
  }
  v27 = std___1___shared_weak_count_lock(v26);
  if (v27 == 0) {
    goto LABEL_30;
  }
  v28 = v27;
  v29 = (atomic_ullong*)(v27 + 8);
  v30 = (__int64*)a1[6];
  if (atomic_fetch_add(v29, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v48 = v30;
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
    v30 = v48;
    if (v48 != nullptr) {
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  if (v30 == nullptr) {
  LABEL_30:
    v30 = &ui_LayoutAccessor_empty_;
  }
LABEL_31:
  LayoutAccessor_1560070((void*)(&v51_.v51), v30, "L_SpotGauge");
  GmapUIDef_1653cd0((__int64)&v51_.v51, a1[11], 0);
  if (v51_.v52 != 0) {
    std___1___shared_weak_count___release_weak(v51_.v52);
  }
  GameRoutine_1679910((__int64)a1);
  v31 = a1[7];
  if (v31 == 0) {
    goto LABEL_37;
  }
  v32 = std___1___shared_weak_count_lock(v31);
  if (v32 == 0) {
    goto LABEL_37;
  }
  v33 = v32;
  v34 = (atomic_ullong*)(v32 + 8);
  v35 = (__int64*)a1[6];
  if (atomic_fetch_add(v34, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v49 = v35;
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    std___1___shared_weak_count___release_weak(v33);
    v35 = v49;
    if (v49 != nullptr) {
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  if (v35 == nullptr) {
  LABEL_37:
    v35 = &ui_LayoutAccessor_empty_;
  }
LABEL_38:
  v36 = ui_LayoutAccessor_FindAlignment(v35, "A_SpotInfo");
  if (v36 != 0) {
    Alignment_56b600(v36);
  }
  v37 = a1[7];
  if (v37 == 0) {
    goto LABEL_44;
  }
  v38 = std___1___shared_weak_count_lock(v37);
  if (v38 == 0) {
    goto LABEL_44;
  }
  v39 = v38;
  v40 = (atomic_ullong*)(v38 + 8);
  v41 = (__int64*)a1[6];
  if (atomic_fetch_add(v40, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v41 != nullptr) {
      goto LABEL_45;
    }
    goto LABEL_44;
  }
  v50 = v41;
  (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
  std___1___shared_weak_count___release_weak(v39);
  v41 = v50;
  if (v50 == nullptr) {
  LABEL_44:
    v41 = &ui_LayoutAccessor_empty_;
  }
LABEL_45:
  result = ui_LayoutAccessor_FindAlignment(v41, "A_Txt");
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

__int64 game_1693b00()
{
  GameRoutine_2b0();
  GameData_225e7b0 = (__int64)GameData_20839d0;
  GameData_225e7b8 = (__int64)GameRoutine_1691750;
  GameData_225e7d0 = (__int64)&GameData_225e7b0;
  GameData_225e9f0 = (__int64)GameData_20839d0;
  GameData_225e7e8 = (__int64)GameRoutine_1691760;
  GameData_225e9c0 = (__int64)GameData_2083a80;
  GameData_225ea20 = (__int64)GameData_2083a80;
  GameData_225ea50 = (__int64)GameData_2083a80;
  GameData_225e848 = (__int64)GameRoutine_16917b0;
  GameData_225ea80 = (__int64)GameData_2083a80;
  GameData_225e810 = (__int64)GameData_2083a80;
  GameData_225e830 = (__int64)&GameData_225e810;
  GameData_225ea88 = (__int64)GameRoutine_16917b0;
  GameData_225e818 = (__int64)GameRoutine_1691790;
  GameData_225e7e0 = (__int64)GameData_2083a80;
  GameData_225e878 = (__int64)GameRoutine_16917c0;
  GameData_225e840 = (__int64)GameData_2083a80;
  GameData_225e860 = (__int64)&GameData_225e840;
  GameData_225e800 = (__int64)&GameData_225e7e0;
  GameData_225e870 = (__int64)GameData_20839d0;
  GameData_225e8a8 = (__int64)GameRoutine_16917d0;
  GameData_225e890 = (__int64)&GameData_225e870;
  GameData_225e8a0 = (__int64)GameData_2083a80;
  GameData_225e8d0 = (__int64)GameData_2083a80;
  GameData_225e8d8 = (__int64)GameRoutine_1691800;
  GameData_225e8c0 = (__int64)&GameData_225e8a0;
  GameData_225e900 = (__int64)GameData_2083a80;
  GameData_225e908 = (__int64)GameRoutine_1691870;
  GameData_225e8f0 = (__int64)&GameData_225e8d0;
  GameData_225e930 = (__int64)GameData_20839d0;
  GameData_225e938 = (__int64)GameRoutine_16918a0;
  GameData_225e920 = (__int64)&GameData_225e900;
  GameData_225e960 = (__int64)GameData_2083a80;
  GameData_225e968 = (__int64)GameRoutine_16918b0;
  GameData_225e950 = (__int64)&GameData_225e930;
  GameData_225e990 = (__int64)GameData_2083a80;
  GameData_225e998 = (__int64)GameRoutine_16918e0;
  GameData_225e980 = (__int64)&GameData_225e960;
  GameData_225e9c8 = (__int64)GameRoutine_1691900;
  GameData_225e9b0 = (__int64)&GameData_225e990;
  GameData_225e9f8 = (__int64)GameRoutine_1691910;
  GameData_225e9e0 = (__int64)&GameData_225e9c0;
  GameData_225ea28 = (__int64)GameRoutine_1691920;
  GameData_225ea10 = (__int64)&GameData_225e9f0;
  GameData_225ea58 = (__int64)GameRoutine_1691950;
  GameData_225ea40 = (__int64)&GameData_225ea20;
  GameData_225ea70 = (__int64)&GameData_225ea50;
  GameData_225eaa0 = (__int64)&GameData_225ea80;
  GameRoutine_2b0();
  GameData_225eab0 = (__int64)GameData_20839d0;
  GameData_225eab8 = (__int64)game_1694cf0;
  GameData_225eb18 = (__int64)GameRoutine_1694d60;
  GameData_225ead0 = (__int64)&GameData_225eab0;
  GameData_225eb48 = (__int64)GameRoutine_16917b0;
  GameData_225ec00 = (__int64)GameData_2083a80;
  GameData_225ec08 = (__int64)GameRoutine_16917b0;
  GameData_225eb10 = (__int64)GameData_2083a80;
  GameData_225ecc0 = (__int64)GameData_2083a80;
  GameData_225ecc8 = (__int64)GameRoutine_16917b0;
  GameData_225ecf0 = (__int64)GameData_20839d0;
  GameData_225ed20 = (__int64)GameData_2083a80;
  GameData_225eae8 = (__int64)GameRoutine_1694d20;
  GameData_225eae0 = (__int64)GameData_2083a80;
  GameData_225eb30 = (__int64)&GameData_225eb10;
  GameData_225ed50 = (__int64)GameData_2083a80;
  GameData_225ed80 = (__int64)GameData_2083a80;
  GameData_225ed88 = (__int64)GameRoutine_16917b0;
  GameData_225edb0 = (__int64)GameData_20839d0;
  GameData_225ede0 = (__int64)GameData_2083a80;
  GameData_225eb00 = (__int64)&GameData_225eae0;
  GameData_225eb40 = (__int64)GameData_2083a80;
  GameData_225eb78 = (__int64)GameRoutine_1694da0;
  GameData_225ee10 = (__int64)GameData_2083a80;
  GameData_225ee40 = (__int64)GameData_2083a80;
  GameData_225ee48 = (__int64)GameRoutine_16917b0;
  GameData_225ee70 = (__int64)GameData_20839d0;
  GameData_225eea0 = (__int64)GameData_2083a80;
  GameData_225eb60 = (__int64)&GameData_225eb40;
  GameData_225eb70 = (__int64)GameData_20839d0;
  GameData_225eba8 = (__int64)GameRoutine_1694db0;
  GameData_225eed0 = (__int64)GameData_2083a80;
  GameData_225ef00 = (__int64)GameData_2083a80;
  GameData_225ef08 = (__int64)GameRoutine_16917b0;
  GameData_225eb90 = (__int64)&GameData_225eb70;
  GameData_225ebf0 = (__int64)&GameData_225ebd0;
  GameData_225eba0 = (__int64)GameData_2083a80;
  GameData_225ebc0 = (__int64)&GameData_225eba0;
  GameData_225ec30 = (__int64)GameData_20839d0;
  GameData_225ec38 = (__int64)GameRoutine_1694e70;
  GameData_225ebd0 = (__int64)GameData_2083a80;
  GameData_225ebd8 = (__int64)GameRoutine_1694e10;
  GameData_225ec60 = (__int64)GameData_2083a80;
  GameData_225ec68 = (__int64)GameRoutine_1694e80;
  GameData_225ec20 = (__int64)&GameData_225ec00;
  GameData_225ec90 = (__int64)GameData_2083a80;
  GameData_225ec98 = (__int64)GameRoutine_1694e90;
  GameData_225ec50 = (__int64)&GameData_225ec30;
  GameData_225ecf8 = (__int64)GameRoutine_1694ea0;
  GameData_225ec80 = (__int64)&GameData_225ec60;
  GameData_225ed28 = (__int64)GameRoutine_1694eb0;
  GameData_225ecb0 = (__int64)&GameData_225ec90;
  GameData_225ed58 = (__int64)GameRoutine_1694ec0;
  GameData_225ece0 = (__int64)&GameData_225ecc0;
  GameData_225edb8 = (__int64)GameRoutine_1694ed0;
  GameData_225ed10 = (__int64)&GameData_225ecf0;
  GameData_225ede8 = (__int64)GameRoutine_1694ee0;
  GameData_225ed40 = (__int64)&GameData_225ed20;
  GameData_225ee18 = (__int64)GameRoutine_1694ef0;
  GameData_225ed70 = (__int64)&GameData_225ed50;
  GameData_225ee78 = (__int64)game_1694f00;
  GameData_225eda0 = (__int64)&GameData_225ed80;
  GameData_225eea8 = (__int64)GameRoutine_1694f30;
  GameData_225edd0 = (__int64)&GameData_225edb0;
  GameData_225eed8 = (__int64)GameRoutine_1694f40;
  GameData_225ee00 = (__int64)&GameData_225ede0;
  GameData_225ee30 = (__int64)&GameData_225ee10;
  GameData_225ee60 = (__int64)&GameData_225ee40;
  GameData_225ee90 = (__int64)&GameData_225ee70;
  GameData_225eec0 = (__int64)&GameData_225eea0;
  GameData_225eef0 = (__int64)&GameData_225eed0;
  GameData_225ef20 = (__int64)&GameData_225ef00;
  GameRoutine_2b0();
  GameData_225ef30 = (__int64)GameData_20839d0;
  GameData_225ef38 = (__int64)GameRoutine_1694f60;
  GameData_225ef98 = (__int64)GameRoutine_1694f90;
  GameData_225ef50 = (__int64)&GameData_225ef30;
  GameData_225efc8 = (__int64)GameRoutine_16917b0;
  GameData_225f080 = (__int64)GameData_2083a80;
  GameData_225f088 = (__int64)GameRoutine_16917b0;
  GameData_225ef90 = (__int64)GameData_2083a80;
  GameData_225ef68 = (__int64)GameRoutine_1694f70;
  GameData_225ef60 = (__int64)GameData_2083a80;
  GameData_225efb0 = (__int64)&GameData_225ef90;
  GameData_225ef80 = (__int64)&GameData_225ef60;
  GameData_225efc0 = (__int64)GameData_2083a80;
  GameData_225eff8 = (__int64)GameRoutine_1694fc0;
  GameData_225efe0 = (__int64)&GameData_225efc0;
  GameData_225eff0 = (__int64)GameData_20839d0;
  GameData_225f028 = (__int64)GameRoutine_1694fd0;
  GameData_225f010 = (__int64)&GameData_225eff0;
  GameData_225f020 = (__int64)GameData_2083a80;
  GameData_225f050 = (__int64)GameData_2083a80;
  GameData_225f058 = (__int64)GameRoutine_1694ff0;
  GameData_225f040 = (__int64)&GameData_225f020;
  GameData_225f070 = (__int64)&GameData_225f050;
  GameData_225f0a0 = (__int64)&GameData_225f080;
  GameRoutine_2b0();
  GameData_225f0b0 = (__int64)GameData_20839d0;
  GameData_225f0b8 = (__int64)GameRoutine_1695020;
  GameData_225f118 = (__int64)GameRoutine_1695090;
  GameData_225f0d0 = (__int64)&GameData_225f0b0;
  GameData_225f148 = (__int64)GameRoutine_16917b0;
  GameData_225f200 = (__int64)GameData_2083a80;
  GameData_225f208 = (__int64)GameRoutine_16917b0;
  GameData_225f110 = (__int64)GameData_2083a80;
  GameData_225f0e8 = (__int64)GameRoutine_1695030;
  GameData_225f0e0 = (__int64)GameData_2083a80;
  GameData_225f130 = (__int64)&GameData_225f110;
  GameData_225f100 = (__int64)&GameData_225f0e0;
  GameData_225f140 = (__int64)GameData_2083a80;
  GameData_225f178 = (__int64)GameRoutine_1695120;
  GameData_225f160 = (__int64)&GameData_225f140;
  GameData_225f170 = (__int64)GameData_20839d0;
  GameData_225f1a8 = (__int64)GameRoutine_1695130;
  GameData_225f190 = (__int64)&GameData_225f170;
  GameData_225f1a0 = (__int64)GameData_2083a80;
  GameData_225f1d0 = (__int64)GameData_2083a80;
  GameData_225f1d8 = (__int64)GameRoutine_1695190;
  GameData_225f1c0 = (__int64)&GameData_225f1a0;
  GameData_225f1f0 = (__int64)&GameData_225f1d0;
  GameData_225f220 = (__int64)&GameData_225f200;
  GameRoutine_2b0();
  GameData_225f230 = (__int64)GameData_20839d0;
  GameData_225f238 = (__int64)GameRoutine_1695220;
  GameData_225f298 = (__int64)GameRoutine_1695240;
  GameData_225f250 = (__int64)&GameData_225f230;
  GameData_225f2c8 = (__int64)GameRoutine_16917b0;
  GameData_225f380 = (__int64)GameData_2083a80;
  GameData_225f388 = (__int64)GameRoutine_16917b0;
  GameData_225f290 = (__int64)GameData_2083a80;
  GameData_225f268 = (__int64)GameRoutine_1695230;
  GameData_225f260 = (__int64)GameData_2083a80;
  GameData_225f2b0 = (__int64)&GameData_225f290;
  GameData_225f280 = (__int64)&GameData_225f260;
  GameData_225f2c0 = (__int64)GameData_2083a80;
  GameData_225f2f8 = (__int64)GameRoutine_1695260;
  GameData_225f2e0 = (__int64)&GameData_225f2c0;
  GameData_225f2f0 = (__int64)GameData_20839d0;
  GameData_225f328 = (__int64)GameRoutine_1695270;
  GameData_225f310 = (__int64)&GameData_225f2f0;
  GameData_225f320 = (__int64)GameData_2083a80;
  GameData_225f350 = (__int64)GameData_2083a80;
  GameData_225f358 = (__int64)GameRoutine_16952a0;
  GameData_225f340 = (__int64)&GameData_225f320;
  GameData_225f370 = (__int64)&GameData_225f350;
  GameData_225f3a0 = (__int64)&GameData_225f380;
  GameRoutine_2b0();
  GameData_225f3b0 = (__int64)GameData_20839d0;
  GameData_225f3b8 = (__int64)GameRoutine_1695360;
  GameData_225f418 = (__int64)GameRoutine_1695380;
  GameData_225f3d0 = (__int64)&GameData_225f3b0;
  GameData_225f448 = (__int64)GameRoutine_16917b0;
  GameData_225f500 = (__int64)GameData_2083a80;
  GameData_225f508 = (__int64)GameRoutine_16917b0;
  GameData_225f410 = (__int64)GameData_2083a80;
  GameData_225f3e8 = (__int64)GameRoutine_1695370;
  GameData_225f3e0 = (__int64)GameData_2083a80;
  GameData_225f430 = (__int64)&GameData_225f410;
  GameData_225f400 = (__int64)&GameData_225f3e0;
  GameData_225f440 = (__int64)GameData_2083a80;
  GameData_225f478 = (__int64)GameRoutine_16953a0;
  GameData_225f460 = (__int64)&GameData_225f440;
  GameData_225f470 = (__int64)GameData_20839d0;
  GameData_225f4a8 = (__int64)GameRoutine_16953b0;
  GameData_225f490 = (__int64)&GameData_225f470;
  GameData_225f4a0 = (__int64)GameData_2083a80;
  GameData_225f4d0 = (__int64)GameData_2083a80;
  GameData_225f4d8 = (__int64)GameRoutine_16953f0;
  GameData_225f4c0 = (__int64)&GameData_225f4a0;
  GameData_225f4f0 = (__int64)&GameData_225f4d0;
  GameData_225f520 = (__int64)&GameData_225f500;
  GameRoutine_2b0();
  GameData_225f530 = (__int64)GameData_20839d0;
  GameData_225f538 = (__int64)GameRoutine_1695430;
  GameData_225f560 = (__int64)GameData_2083a80;
  GameData_225f550 = (__int64)&GameData_225f530;
  GameData_225f5c8 = (__int64)GameRoutine_16917b0;
  GameData_225f568 = (__int64)GameRoutine_1695440;
  GameData_225f590 = (__int64)GameData_2083a80;
  GameData_225f580 = (__int64)&GameData_225f560;
  GameData_225f5b0 = (__int64)&GameData_225f590;
  GameData_225f5c0 = (__int64)GameData_2083a80;
  GameData_225f598 = (__int64)GameRoutine_1695450;
  GameData_225f5e0 = (__int64)&GameData_225f5c0;
  GameRoutine_2b0();
  GameData_225f5f0 = (__int64)GameData_20839d0;
  GameData_225f5f8 = (__int64)GameRoutine_1695470;
  GameData_225f658 = (__int64)GameRoutine_1695490;
  GameData_225f610 = (__int64)&GameData_225f5f0;
  GameData_225f688 = (__int64)GameRoutine_16917b0;
  GameData_225f740 = (__int64)GameData_2083a80;
  GameData_225f748 = (__int64)GameRoutine_16917b0;
  GameData_225f650 = (__int64)GameData_2083a80;
  GameData_225f800 = (__int64)GameData_2083a80;
  GameData_225f808 = (__int64)GameRoutine_16917b0;
  GameData_225f628 = (__int64)GameRoutine_1695480;
  GameData_225f620 = (__int64)GameData_2083a80;
  GameData_225f670 = (__int64)&GameData_225f650;
  GameData_225f640 = (__int64)&GameData_225f620;
  GameData_225f680 = (__int64)GameData_2083a80;
  GameData_225f6b8 = (__int64)GameRoutine_16954b0;
  GameData_225f6a0 = (__int64)&GameData_225f680;
  GameData_225f6b0 = (__int64)GameData_20839d0;
  GameData_225f6e8 = (__int64)GameRoutine_16954c0;
  GameData_225f6d0 = (__int64)&GameData_225f6b0;
  GameData_225f6e0 = (__int64)GameData_2083a80;
  GameData_225f710 = (__int64)GameData_2083a80;
  GameData_225f718 = (__int64)GameRoutine_16954d0;
  GameData_225f700 = (__int64)&GameData_225f6e0;
  GameData_225f770 = (__int64)GameData_20839d0;
  GameData_225f778 = (__int64)GameRoutine_16954f0;
  GameData_225f730 = (__int64)&GameData_225f710;
  GameData_225f7a0 = (__int64)GameData_2083a80;
  GameData_225f7a8 = (__int64)game_facility__1695500;
  GameData_225f760 = (__int64)&GameData_225f740;
  GameData_225f7d0 = (__int64)GameData_2083a80;
  GameData_225f7d8 = (__int64)GameRoutine_1695530;
  GameData_225f790 = (__int64)&GameData_225f770;
  GameData_225f7c0 = (__int64)&GameData_225f7a0;
  GameData_225f7f0 = (__int64)&GameData_225f7d0;
  GameData_225f820 = (__int64)&GameData_225f800;
  GameRoutine_2b0();
  GameData_225f830 = (__int64)GameData_20839d0;
  GameData_225f838 = (__int64)GameRoutine_1695570;
  GameData_225f860 = (__int64)GameData_2083a80;
  GameData_225f850 = (__int64)&GameData_225f830;
  GameData_225f8c8 = (__int64)GameRoutine_16917b0;
  GameData_225f868 = (__int64)GameRoutine_1695580;
  GameData_225f890 = (__int64)GameData_2083a80;
  GameData_225f880 = (__int64)&GameData_225f860;
  GameData_225f8b0 = (__int64)&GameData_225f890;
  GameData_225f8c0 = (__int64)GameData_2083a80;
  GameData_225f898 = (__int64)GameRoutine_16955a0;
  GameData_225f8e0 = (__int64)&GameData_225f8c0;
  GameRoutine_2b0();
  GameData_225f8f0 = (__int64)GameData_20839d0;
  GameData_225f8f8 = (__int64)GameRoutine_16955d0;
  GameData_225f958 = (__int64)GameRoutine_16955f0;
  GameData_225f910 = (__int64)&GameData_225f8f0;
  GameData_225f988 = (__int64)GameRoutine_16917b0;
  GameData_225fa40 = (__int64)GameData_2083a80;
  GameData_225fa48 = (__int64)GameRoutine_16917b0;
  GameData_225f950 = (__int64)GameData_2083a80;
  GameData_225fb00 = (__int64)GameData_2083a80;
  GameData_225fb08 = (__int64)GameRoutine_16917b0;
  GameData_225f928 = (__int64)GameRoutine_16955e0;
  GameData_225f920 = (__int64)GameData_2083a80;
  GameData_225f970 = (__int64)&GameData_225f950;
  GameData_225f940 = (__int64)&GameData_225f920;
  GameData_225f980 = (__int64)GameData_2083a80;
  GameData_225f9b8 = (__int64)GameRoutine_1695610;
  GameData_225f9a0 = (__int64)&GameData_225f980;
  GameData_225f9b0 = (__int64)GameData_20839d0;
  GameData_225f9e8 = (__int64)GameRoutine_1695620;
  GameData_225f9d0 = (__int64)&GameData_225f9b0;
  GameData_225f9e0 = (__int64)GameData_2083a80;
  GameData_225fa10 = (__int64)GameData_2083a80;
  GameData_225fa18 = (__int64)GameRoutine_1695630;
  GameData_225fa00 = (__int64)&GameData_225f9e0;
  GameData_225fa70 = (__int64)GameData_20839d0;
  GameData_225fa78 = (__int64)GameRoutine_16956c0;
  GameData_225fa30 = (__int64)&GameData_225fa10;
  GameData_225faa0 = (__int64)GameData_2083a80;
  GameData_225faa8 = (__int64)GameRoutine_16956d0;
  GameData_225fa60 = (__int64)&GameData_225fa40;
  GameData_225fad0 = (__int64)GameData_2083a80;
  GameData_225fad8 = (__int64)GameRoutine_16956f0;
  GameData_225fa90 = (__int64)&GameData_225fa70;
  GameData_225fac0 = (__int64)&GameData_225faa0;
  GameData_225faf0 = (__int64)&GameData_225fad0;
  GameData_225fb20 = (__int64)&GameData_225fb00;
  GameRoutine_2b0();
  GameData_225fb30 = (__int64)GameData_20839d0;
  GameData_225fb38 = (__int64)GameRoutine_1695710;
  GameData_225fb98 = (__int64)GameRoutine_1695760;
  GameData_225fb50 = (__int64)&GameData_225fb30;
  GameData_225fbc8 = (__int64)GameRoutine_16917b0;
  GameData_225fc80 = (__int64)GameData_2083a80;
  GameData_225fc88 = (__int64)GameRoutine_16917b0;
  GameData_225fb90 = (__int64)GameData_2083a80;
  GameData_225fd40 = (__int64)GameData_2083a80;
  GameData_225fd48 = (__int64)GameRoutine_16917b0;
  GameData_225fd70 = (__int64)GameData_20839d0;
  GameData_225fda0 = (__int64)GameData_2083a80;
  GameData_225fb68 = (__int64)GameRoutine_1695720;
  GameData_225fb60 = (__int64)GameData_2083a80;
  GameData_225fbb0 = (__int64)&GameData_225fb90;
  GameData_225fdd0 = (__int64)GameData_2083a80;
  GameData_225fe00 = (__int64)GameData_2083a80;
  GameData_225fe08 = (__int64)GameRoutine_16917b0;
  GameData_225fe30 = (__int64)GameData_20839d0;
  GameData_225fe60 = (__int64)GameData_2083a80;
  GameData_225fb80 = (__int64)&GameData_225fb60;
  GameData_225fbc0 = (__int64)GameData_2083a80;
  GameData_225fbf8 = (__int64)GameRoutine_16957c0;
  GameData_225fe90 = (__int64)GameData_2083a80;
  GameData_225fec0 = (__int64)GameData_2083a80;
  GameData_225fec8 = (__int64)GameRoutine_16917b0;
  GameData_225fef0 = (__int64)GameData_20839d0;
  GameData_225ff20 = (__int64)GameData_2083a80;
  GameData_225fbe0 = (__int64)&GameData_225fbc0;
  GameData_225fbf0 = (__int64)GameData_20839d0;
  GameData_225fc28 = (__int64)GameRoutine_16957d0;
  GameData_225ff50 = (__int64)GameData_2083a80;
  GameData_225ff80 = (__int64)GameData_2083a80;
  GameData_225ff88 = (__int64)GameRoutine_16917b0;
  GameData_225fc10 = (__int64)&GameData_225fbf0;
  GameData_225fc70 = (__int64)&GameData_225fc50;
  GameData_225fc20 = (__int64)GameData_2083a80;
  GameData_225fc40 = (__int64)&GameData_225fc20;
  GameData_225fcb0 = (__int64)GameData_20839d0;
  GameData_225fcb8 = (__int64)GameRoutine_1695830;
  GameData_225fc50 = (__int64)GameData_2083a80;
  GameData_225fc58 = (__int64)GameRoutine_1695800;
  GameData_225fce0 = (__int64)GameData_2083a80;
  GameData_225fce8 = (__int64)GameRoutine_1695840;
  GameData_225fca0 = (__int64)&GameData_225fc80;
  GameData_225fd10 = (__int64)GameData_2083a80;
  GameData_225fd18 = (__int64)GameRoutine_1695870;
  GameData_225fcd0 = (__int64)&GameData_225fcb0;
  GameData_225fd78 = (__int64)GameRoutine_16958a0;
  GameData_225fd00 = (__int64)&GameData_225fce0;
  GameData_225fda8 = (__int64)GameRoutine_16958b0;
  GameData_225fd30 = (__int64)&GameData_225fd10;
  GameData_225fdd8 = (__int64)GameRoutine_16958e0;
  GameData_225fd60 = (__int64)&GameData_225fd40;
  GameData_225fe38 = (__int64)GameRoutine_1695920;
  GameData_225fd90 = (__int64)&GameData_225fd70;
  GameData_225fe68 = (__int64)GameRoutine_1695940;
  GameData_225fdc0 = (__int64)&GameData_225fda0;
  GameData_225fe98 = (__int64)GameRoutine_1695a20;
  GameData_225fdf0 = (__int64)&GameData_225fdd0;
  GameData_225fef8 = (__int64)GameRoutine_1695af0;
  GameData_225fe20 = (__int64)&GameData_225fe00;
  GameData_225ff28 = (__int64)GameRoutine_1695b00;
  GameData_225fe50 = (__int64)&GameData_225fe30;
  GameData_225ff58 = (__int64)GameRoutine_1695b40;
  GameData_225fe80 = (__int64)&GameData_225fe60;
  GameData_225feb0 = (__int64)&GameData_225fe90;
  GameData_225fee0 = (__int64)&GameData_225fec0;
  GameData_225ff10 = (__int64)&GameData_225fef0;
  GameData_225ff40 = (__int64)&GameData_225ff20;
  GameData_225ff70 = (__int64)&GameData_225ff50;
  GameData_225ffa0 = (__int64)&GameData_225ff80;
  GameRoutine_2b0();
  GameData_225ffb0 = (__int64)GameData_20839d0;
  GameData_225ffb8 = (__int64)GameRoutine_1695c60;
  GameData_225ffe0 = (__int64)GameData_2083a80;
  GameData_225ffd0 = (__int64)&GameData_225ffb0;
  GameData_2260048 = (__int64)GameRoutine_16917b0;
  GameData_225ffe8 = (__int64)GameRoutine_1695c70;
  GameData_2260010 = (__int64)GameData_2083a80;
  GameData_2260000 = (__int64)&GameData_225ffe0;
  GameData_2260030 = (__int64)&GameData_2260010;
  GameData_2260040 = (__int64)GameData_2083a80;
  GameData_2260018 = (__int64)GameRoutine_1695c80;
  GameData_2260060 = (__int64)&GameData_2260040;
  GameRoutine_2b0();
  GameData_2260070 = (__int64)GameData_20839d0;
  GameData_2260078 = (__int64)GameRoutine_1695ca0;
  GameData_22600a0 = (__int64)GameData_2083a80;
  GameData_2260090 = (__int64)&GameData_2260070;
  GameData_2260108 = (__int64)GameRoutine_16917b0;
  GameData_22600a8 = (__int64)GameRoutine_1695cb0;
  GameData_22600d0 = (__int64)GameData_2083a80;
  GameData_22600c0 = (__int64)&GameData_22600a0;
  GameData_22600f0 = (__int64)&GameData_22600d0;
  GameData_2260100 = (__int64)GameData_2083a80;
  GameData_22600d8 = (__int64)GameRoutine_1695cd0;
  GameData_2260120 = (__int64)&GameData_2260100;
  GameRoutine_2b0();
  GameData_2260130 = (__int64)GameData_20839d0;
  GameData_2260138 = (__int64)GameRoutine_1695d00;
  GameData_2260160 = (__int64)GameData_2083a80;
  GameData_2260150 = (__int64)&GameData_2260130;
  GameData_22601c8 = (__int64)GameRoutine_16917b0;
  GameData_2260168 = (__int64)GameRoutine_1695d10;
  GameData_2260190 = (__int64)GameData_2083a80;
  GameData_2260180 = (__int64)&GameData_2260160;
  GameData_22601b0 = (__int64)&GameData_2260190;
  GameData_22601c0 = (__int64)GameData_2083a80;
  GameData_2260198 = (__int64)GameRoutine_1695d20;
  GameData_22601e0 = (__int64)&GameData_22601c0;
  GameRoutine_2b0();
  GameData_22601f0 = (__int64)GameData_20839d0;
  GameData_22601f8 = (__int64)GameRoutine_1695dd0;
  GameData_2260220 = (__int64)GameData_2083a80;
  GameData_2260210 = (__int64)&GameData_22601f0;
  GameData_2260288 = (__int64)GameRoutine_16917b0;
  GameData_2260228 = (__int64)GameRoutine_1695de0;
  GameData_2260250 = (__int64)GameData_2083a80;
  GameData_2260240 = (__int64)&GameData_2260220;
  GameData_2260270 = (__int64)&GameData_2260250;
  GameData_2260280 = (__int64)GameData_2083a80;
  GameData_2260258 = (__int64)GameRoutine_1695df0;
  GameData_22602a0 = (__int64)&GameData_2260280;
  GameRoutine_2b0();
  GameData_22602b0 = (__int64)GameData_20839d0;
  GameData_22602b8 = (__int64)GameRoutine_1695e10;
  GameData_22602d0 = (__int64)&GameData_22602b0;
  GameData_2260348 = (__int64)GameRoutine_16917b0;
  GameData_22602e8 = (__int64)GameRoutine_1695e20;
  GameData_22602e0 = (__int64)GameData_2083a80;
  GameData_2260310 = (__int64)GameData_2083a80;
  GameData_2260300 = (__int64)&GameData_22602e0;
  GameData_2260330 = (__int64)&GameData_2260310;
  GameData_2260340 = (__int64)GameData_2083a80;
  GameData_2260318 = (__int64)GameRoutine_1695e30;
  GameData_2260360 = (__int64)&GameData_2260340;
  GameRoutine_2b0();
  GameData_2260370 = (__int64)GameData_20839d0;
  GameData_2260378 = (__int64)GameRoutine_1695e50;
  GameData_22603a0 = (__int64)GameData_2083a80;
  GameData_2260390 = (__int64)&GameData_2260370;
  GameData_2260408 = (__int64)GameRoutine_16917b0;
  GameData_22603a8 = (__int64)GameRoutine_1695e60;
  GameData_22603d0 = (__int64)GameData_2083a80;
  GameData_22603c0 = (__int64)&GameData_22603a0;
  GameData_22603f0 = (__int64)&GameData_22603d0;
  GameData_2260400 = (__int64)GameData_2083a80;
  GameData_22603d8 = (__int64)GameRoutine_1695e80;
  GameData_2260420 = (__int64)&GameData_2260400;
  GameRoutine_2b0();
  GameData_2260450 = (__int64)&GameData_2260430;
  GameData_2260430 = (__int64)GameData_20839d0;
  GameData_2260438 = (__int64)GameRoutine_1695f10;
  GameData_22604c8 = (__int64)GameRoutine_16917b0;
  GameData_2260468 = (__int64)GameRoutine_1695f20;
  GameData_2260460 = (__int64)GameData_2083a80;
  GameData_2260490 = (__int64)GameData_2083a80;
  GameData_2260480 = (__int64)&GameData_2260460;
  GameData_22604b0 = (__int64)&GameData_2260490;
  GameData_22604c0 = (__int64)GameData_2083a80;
  GameData_2260498 = (__int64)GameRoutine_1695f40;
  GameData_22604e0 = (__int64)&GameData_22604c0;
  GameRoutine_2b0();
  GameData_2260510 = (__int64)&GameData_22604f0;
  GameData_22604f0 = (__int64)GameData_20839d0;
  GameData_22604f8 = (__int64)GameRoutine_1695fd0;
  GameData_2260528 = (__int64)GameRoutine_1695fe0;
  GameData_2260520 = (__int64)GameData_2083a80;
  GameData_2260540 = (__int64)&GameData_2260520;
  GameData_2260550 = (__int64)GameData_2083a80;
  GameData_2260558 = (__int64)GameRoutine_1695ff0;
  GameData_2260570 = (__int64)&GameData_2260550;
  GameData_2260580 = (__int64)GameData_2083a80;
  GameData_2260588 = (__int64)GameRoutine_16917b0;
  GameData_22605a0 = (__int64)&GameData_2260580;
  GameRoutine_2b0();
  GameData_22605d0 = (__int64)&GameData_22605b0;
  GameData_22605b0 = (__int64)GameData_20839d0;
  GameData_22605b8 = (__int64)GameRoutine_1696000;
  GameData_22605e8 = (__int64)GameRoutine_1696010;
  GameData_22605e0 = (__int64)GameData_2083a80;
  GameData_2260600 = (__int64)&GameData_22605e0;
  GameData_2260610 = (__int64)GameData_2083a80;
  GameData_2260618 = (__int64)GameHr_1696020;
  GameData_2260630 = (__int64)&GameData_2260610;
  GameData_2260648 = (__int64)GameRoutine_16917b0;
  GameData_2260640 = (__int64)GameData_2083a80;
  GameData_2260660 = (__int64)&GameData_2260640;
  GameRoutine_2b0();
  GameData_2260738 = (__int64)&GameData_225ffb0;
  GameData_22606f8 = (__int64)&GameData_22605b0;
  GameData_2260878 = (__int64)&GameData_225fb30;
  GameData_22608b8 = (__int64)&GameData_225f8f0;
  GameData_22608f8 = (__int64)&GameData_225f5f0;
  GameData_2260778 = (__int64)&GameData_225f0b0;
  GameData_2260938 = (__int64)&GameData_225eab0;
  GameData_22609f8 = (__int64)&GameData_22604f0;
  GameData_2260b38 = (__int64)&GameData_22602b0;
  GameData_2260c78 = (__int64)&GameData_2260370;
  GameData_2260d78 = (__int64)&GameData_2260430;
  GameData_22607b8 = (__int64)&GameData_225f3b0;
  GameData_2260678 = (__int64)&GameData_225ef30;
  GameData_2260670 = 2;
  GameData_22606b0 = 2;
  GameData_2260770 = 2;
  GameData_22607b0 = 2;
  GameData_22607f0 = 4;
  GameData_2260ab0 = 2;
  GameData_22606f0 = 1;
  GameData_2260730 = 1;
  GameData_2260830 = 1;
  GameData_2260970 = 1;
  GameData_22609f0 = 1;
  GameData_2260b30 = 1;
  GameData_22607f8 = (__int64)&GameData_225e7b0;
  GameData_2260b70 = 1;
  GameData_2260b78 = (__int64)&GameData_22601f0;
  GameData_2260c70 = 1;
  GameData_2260d30 = 1;
  GameData_2260d70 = 1;
  GameData_2260db0 = 1;
  GameData_2260838 = (__int64)&GameData_225f530;
  GameData_22606a0 = 0;
  GameData_22606b8 = (__int64)&GameData_225f230;
  GameData_22606e0 = 0;
  GameData_2260720 = 0;
  GameData_2260760 = 0;
  GameData_22607a0 = 0;
  GameData_22607e0 = 0;
  GameData_2260820 = 0;
  GameData_2260860 = 0;
  GameData_2260870 = 6;
  GameData_2260930 = 6;
  GameData_22608a0 = 0;
  GameData_22608b0 = 3;
  GameData_22608e0 = 0;
  GameData_22608f0 = 3;
  GameData_2260920 = 0;
  GameData_2260960 = 0;
  GameData_22609a0 = 0;
  GameData_22609b0 = 0;
  GameData_2260978 = (__int64)&GameData_225f830;
  GameData_22609b8 = 0;
  GameData_22609e0 = 0;
  GameData_2260a20 = 0;
  GameData_2260a30 = 0;
  GameData_2260a38 = 0;
  GameData_2260a60 = 0;
  GameData_2260a70 = 0;
  GameData_2260a78 = 0;
  GameData_2260aa0 = 0;
  GameData_2260ab8 = (__int64)&GameData_225f230;
  GameData_2260ae0 = 0;
  GameData_2260af0 = 0;
  GameData_2260af8 = 0;
  GameData_2260b20 = 0;
  GameData_2260b60 = 0;
  GameData_2260ba0 = 0;
  GameData_2260bb0 = 0;
  GameData_2260bb8 = 0;
  GameData_2260be0 = 0;
  GameData_2260bf0 = 0;
  GameData_2260bf8 = 0;
  GameData_2260c20 = 0;
  GameData_2260c30 = 0;
  GameData_2260c38 = 0;
  GameData_2260c60 = 0;
  GameData_2260ca0 = 0;
  GameData_2260cb0 = 0;
  GameData_2260cb8 = 0;
  GameData_2260ce0 = 0;
  GameData_2260cf0 = 0;
  GameData_2260cf8 = 0;
  GameData_2260d20 = 0;
  GameData_2260d38 = (__int64)&GameData_2260130;
  GameData_2260d60 = 0;
  GameData_2260da0 = 0;
  GameData_2260db8 = (__int64)&GameData_2260070;
  GameData_2260de0 = 0;
  GameData_2260df0 = 0;
  GameData_2260df8 = 0;
  GameData_2260e20 = 0;
  GameData_2260e30 = 0;
  GameData_2260e38 = 0;
  GameData_2260e60 = 0;
  return GameRoutine_2b0();
}

__int64 game_16db500(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  const char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64* v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 result;
  int v34;
  struct {
    const char* v35;
    __int64 v36;
  } v35_;
  struct {
    __int64 v37;
    int v38;
    int v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    int v44;
  } v37_;
  struct {
    __int64* v45;
    __int64* v46;
    __int64 v47;
  } v45_;

  if (a1[108] != 0) {
    v3 = a1[107];
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3);
      if (v4 == 0) {
      LABEL_11:
        v8 = a1[107];
        if (v8 != 0 && *(_QWORD*)(v8 + 8) != -1) {
          goto LABEL_42;
        }
        goto LABEL_16;
      }
      v5 = a1[106];
      if (v5 != 0) {
        v1 = *(unsigned __int8*)(v5 + 24);
        v6 = v5 + 152;
        if (v1 == 0) {
          v6 = 0;
        }
        v7 = v6 != a1[108];
      }
      else {
        v7 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v7) {
          goto LABEL_11;
        }
      }
      else {
        v9 = v4;
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v9);
        if (v7) {
          goto LABEL_11;
        }
      }
      if ((v1 & 1) != 0) {
        goto LABEL_42;
      }
    }
  }
LABEL_16:
  v10 = (*(__int64 (**)(_QWORD*))(*a1 + 256LL))(a1);
  v11 = (*(__int64 (**)(_QWORD*))(*a1 + 264LL))(a1);
  if (v10 != 0 && v11 != 0) {
    v13 = v11;
    v45_.v45 = nullptr;
    v45_.v46 = nullptr;
    v45_.v47 = 0;
    v37_.v40 = 0;
    v37_.v41 = 0;
    v37_.v42 = 0;
    v37_.v43 = 0;
    v37_.v44 = 0;
    v37_.v37 = 0x800000018LL;
    v14 = (*(__int64 (**)(_QWORD*))(*a1 + 320LL))(a1);
    v15 = *a1;
    v37_.v38 = v14;
    v16 = (*(__int64 (**)(_QWORD*))(v15 + 328))(a1);
    v17 = *a1;
    v37_.v39 = v16;
    v18 = (*(__int64 (**)(_QWORD*))(v17 + 304))(a1);
    v19 = *a1;
    LODWORD(v37_.v40) = v18;
    v35_.v35 = (const char*)(*(__int64 (**)(_QWORD*))(v19 + 272))(a1);
    if (v35_.v35 != nullptr) {
      v45_.v46 = GameRoutine_16e38c0((__int64*)&v45_.v45, &v35_.v35);
    }
    game_1366bd0((void*)(&v35_.v35), v10, v13, (__int64)&v37_.v37);
    v20 = v35_.v35;
    v21 = v35_.v36;
    v22 = a1[105];
    v35_.v35 = nullptr;
    v35_.v36 = 0;
    a1[104] = v20;
    a1[105] = v21;
    if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v22);
    }
    v23 = v35_.v36;
    if (v35_.v36 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak(v23);
    }
    v24 = (__int64)v45_.v45;
    if (v45_.v45 != nullptr) {
      v25 = v45_.v46;
      v26 = fw_memory_g_heap_manager_ptr;
      if (v45_.v45 == v45_.v46) {
        goto LABEL_39;
      }
      v27 = v45_.v46;
      do {
        v28 = *((_BYTE*)v27 - 24);
        v27 -= 3;
        if ((v28 & 1) != 0) {
          v29 = *(v25 - 1);
          if (v29 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) != 0) {
              v30 = 128;
            }
            else {
              v30 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v26 + v30, v29);
          }
        }
        v25 = v27;
      } while (v27 != (__int64*)v24);
      v45_.v46 = (__int64*)v24;
      v24 = (__int64)v45_.v45;
      if (v45_.v45 != nullptr) {
      LABEL_39:
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) == 0) {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v26 + v31, v24);
      }
    }
  }
LABEL_42:
  v32 = a1[19];
  if (v32 == 0 || (result = __dynamic_cast(v32, GameData_2131c18[0],
                                           GameData_21319e8[0], 0)) == 0) {
    result = (*(__int64 (**)(_QWORD*))(*a1 + 192LL))(a1);
    if ((*((_BYTE*)a1 + 172) & 1) == 0) {
      v34 = result;
      result = GameRoutine_1553130(result);
      *((_DWORD*)a1 + 42) = v34;
      *((_BYTE*)a1 + 172) = 1;
    }
  }
  return result;
}

__int64 game_16dc3e0(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  _BYTE** v25;
  _BYTE** i;
  _BYTE* v27;
  const char* v29[2];
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;

  if (*(_QWORD*)(a1 + 968) == 0) {
    goto LABEL_35;
  }
  v3 = *(_QWORD*)(a1 + 960);
  if (v3 == 0) {
    goto LABEL_35;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_11;
  }
  v5 = *(_QWORD*)(a1 + 952);
  if (v5 != 0) {
    v1 = *(unsigned __int8*)(v5 + 24);
    v6 = v5 + 152;
    if (v1 == 0) {
      v6 = 0;
    }
    v7 = v6 != *(_QWORD*)(a1 + 968);
  }
  else {
    v7 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7) {
    LABEL_11:
      v8 = *(_QWORD*)(a1 + 960);
      if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
        goto LABEL_35;
      }
      goto LABEL_16;
    }
  }
  else {
    v9 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v9);
    if (v7) {
      goto LABEL_11;
    }
  }
  if ((v1 & 1) == 0) {
    goto LABEL_35;
  }
LABEL_16:
  v10 = *(__int64**)(a1 + 232);
  v11 = *(__int64**)(a1 + 240);
  if (v10 == v11) {
    v12 = 0;
  }
  else {
    v12 = 0;
    do {
      v13 = *v10++;
      v12 += (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 48LL))(v13) & 1;
    } while (v10 != v11);
  }
  v14 = *(_DWORD*)(a1 + 584) - 1;
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 176) + 16LL))(a1 + 176);
  game_menu_16e75a0(a1 + 408, v12, v14, v15);
  v29[0] = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 336LL))(a1);
  v29[1] = (const char*)strlen(v29[0]);
  v16 = *(_QWORD*)(a1 + 856);
  if (v16 != 0) {
    v17 = std___1___shared_weak_count_lock(v16);
    if (v17 != 0) {
      v18 = *(_QWORD*)(a1 + 848);
      v19 = v17;
      if (v18 != 0) {
        GameRoutine_16e4a60((void*)(&v30_.v30), *(_QWORD*)(a1 + 848),
                            (__int64)v29);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
      }
      if (v18 != 0) {
        v20 = v30_.v31;
        if (v30_.v31 != 0) {
          v21 = std___1___shared_weak_count_lock(v30_.v31);
          v22 = v30_.v30;
          v23 = v21;
          std___1___shared_weak_count___release_weak(v20);
          if (v23 != 0 && v22 != 0) {
            v24 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 360LL))(a1);
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v22 + 40LL))(v22, v24 & 1);
          }
          else if (v23 == 0) {
            goto LABEL_35;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
            std___1___shared_weak_count___release_weak(v23);
          }
        }
      }
    }
  }
LABEL_35:
  BasicMenuCursor_16de600(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 680LL))(a1);
  v25 = *(_BYTE***)(a1 + 232);
  for (i = *(_BYTE***)(a1 + 240); v25 != i; v27[78] = 1) {
    v27 = *v25++;
    (*(void (**)(_BYTE*))(*(_QWORD*)v27 + 136LL))(v27);
  }
  return BasicMenu_16dea40(a1, 1, 0, 0);
}

void game_16f03e0(__int64* a1)
{
  unsigned int* v1;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  const char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  const char* v17;
  __int64 v18;
  int v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  const char* v24;
  char v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64* v30;
  const char* v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  const char* v37;
  char v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  float v46;
  float v47;
  float v48;
  bool v49;
  float v50;
  unsigned int v51;
  __int64* v52;
  __int64 v53;
  float v54;
  __int64* v55;
  float v56;
  const char* v57[2];
  struct {
    const char* v58;
    __int64 v59;
  } v58_;
  float v60;

  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
  v1 = (unsigned int*)(a1 + 8);
  if ((a1[8] & 0xFFF) == 0) {
    v3 = *((unsigned __int8*)a1 + 8);
    v4 = (v3 & 1) != 0 ? a1[2] : v3 >> 1;
    if (v4 == 0) {
      v5 = *((unsigned __int8*)a1 + 32);
      v6 = (v5 & 1) != 0 ? a1[5] : v5 >> 1;
      if (v6 == 0) {
        return;
      }
    }
  }
  ui_LayoutAccessor_SetPaneVisible(*a1, "L_Remaining", 0),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
  ui_LayoutAccessor_SetPaneVisible(*a1, "L_KeyHelp", 0),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((a1[8] & 0xFFF) == 0) {
    LayoutAccessor_1562cf0(*a1, (unsigned int*)"Txt"),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    v12 = *((unsigned __int8*)a1 + 8);
    if ((v12 & 1) != 0) {
      v13 = a1[2];
    }
    else {
      v13 = v12 >> 1;
    }
    ui_LayoutAccessor_SetPaneVisible(*a1, "T_FlavorTxt", v13 != 0),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    v14 = *((unsigned __int8*)a1 + 8);
    v15 = a1[2];
    if ((v14 & 1) == 0) {
      v15 = v14 >> 1;
    }
    if (v15 != 0) {
      v16 = (__int64*)*a1;
      if ((v14 & 1) != 0) {
        v17 = (const char*)a1[3];
      }
      else {
        v17 = (char*)a1 + 9;
      }
      if (*((_BYTE*)a1 + 76) == 1) {
        if (v17 != nullptr) {
          v18 = ui_LayoutAccessor_FindTextBox(v16, "T_FlavorTxt"),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v18 != 0) {
            GameRoutine_156c5d0(v18, (__int64)v17, 0),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
        }
      }
      else {
        LayoutAccessor_1562060(v16, "T_FlavorTxt", v17),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v20 = (__int64*)*a1;
      v21 = ui_LayoutAccessor_FindTextBox((__int64*)*a1, "T_FlavorTxt"),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v21 != 0) {
        v22 = v21;
        v23 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v20, "T_FlavorTxt"),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v23 != nullptr) {
          GameRoutine_190a0c0((float*)&v58_.v58, (__int64)v57, &v60, v23,
                              v23[27]),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          v24 = v57[0];
        }
        else {
          v24 = nullptr;
        }
        v25 = *(_BYTE*)(v22 + 88);
        *(_QWORD*)(v22 + 80) = v24;
        *(_BYTE*)(v22 + 88) = v25 | 0x10;
      }
    }
    v26 = *((unsigned __int8*)a1 + 32);
    if ((v26 & 1) != 0) {
      v27 = a1[5];
    }
    else {
      v27 = v26 >> 1;
    }
    ui_LayoutAccessor_SetPaneVisible(*a1, "N_Annotation", v27 != 0),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    v28 = *((unsigned __int8*)a1 + 32);
    v29 = a1[5];
    if ((v28 & 1) == 0) {
      v29 = v28 >> 1;
    }
    if (v29 != 0) {
      v30 = (__int64*)*a1;
      if ((v28 & 1) != 0) {
        v31 = (const char*)a1[6];
      }
      else {
        v31 = (char*)a1 + 33;
      }
      if (*((_BYTE*)a1 + 77) == 1) {
        if (v31 != nullptr) {
          v32 = ui_LayoutAccessor_FindTextBox(v30, "T_Annotation"),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v32 != 0) {
            GameRoutine_156c5d0(v32, (__int64)v31, 0),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
        }
      }
      else {
        LayoutAccessor_1562060(v30, "T_Annotation", v31),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v33 = (__int64*)*a1;
      v34 = ui_LayoutAccessor_FindTextBox((__int64*)*a1, "T_Annotation"),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v34 != 0) {
        v35 = v34;
        v36 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v33, "T_Annotation"),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v36 != nullptr) {
          GameRoutine_190a0c0((float*)&v58_.v58, (__int64)v57, &v60, v36,
                              v36[27]),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          v37 = v57[0];
        }
        else {
          v37 = nullptr;
        }
        v38 = *(_BYTE*)(v35 + 88);
        *(_QWORD*)(v35 + 80) = v37;
        *(_BYTE*)(v35 + 88) = v38 | 0x10;
      }
      v39 = (__int64*)*a1;
      v40 = ui_LayoutAccessor_FindAlignment((__int64*)*a1, "A_InfoTxt"),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v40 != 0) {
        Alignment_56b600(v40),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
        v41 = v39[1];
        if (v41 != 0) {
          v42 = std___1___shared_weak_count_lock(v41),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v42 != 0) {
            v43 = v42;
            if (*v39 != 0) {
              ControlCreator_13633c0(*v39),
                  v56 = COERCE_AS(__typeof__(v56),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43),
                  v56 = COERCE_AS(__typeof__(v56),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
              std___1___shared_weak_count___release_weak(v43),
                  v56 = COERCE_AS(__typeof__(v56),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
            }
          }
        }
      }
    }
    v44 = ui_LayoutAccessor_FindPane((__int64*)*a1, "A_InfoTxt"),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    LOBYTE(v60) = 0;
    v58_.v58 = (const char*)0xFF7FFFFF7F7FFFFFLL;
    v57[0] = (const char*)0x7F7FFFFFFF7FFFFFLL;
    if (v44 != 0 &&
        (v45 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v44 + 128),
                                     *(float32x4_t*)(v44 + 128)))
                   .n128_u64[0],
         GameRoutine_156bee0(
             v44, (__int64)&v58_.v58, (__int64)v57, (__int64)&v60, 0,
             sqrtf((float)(*(float*)&v45 +
                           (float)(COERCE_FLOAT(*(_OWORD*)(v44 + 112)) *
                                   COERCE_FLOAT(*(_OWORD*)(v44 + 112)))) +
                   (float)(COERCE_FLOAT(*(_OWORD*)(v44 + 144)) *
                           COERCE_FLOAT(*(_OWORD*)(v44 + 144)))) /
                 *(float*)(v44 + 72),
             sqrtf(
                 (float)(*((float*)&v45 + 1) +
                         (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v44 + 112))) *
                                 COERCE_FLOAT(
                                     HIDWORD(*(_QWORD*)(v44 + 112))))) +
                 (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v44 + 144))) *
                         COERCE_FLOAT(HIDWORD(*(_QWORD*)(v44 + 144))))) /
                 *(float*)(v44 + 76)),
         LOBYTE(v60) == 1)) {
      v46 = vabds_f32(*((float*)v57 + 1), *((float*)&v58_.v58 + 1)) +
            0x1.1800000000000p+6f;
    }
    else {
      v46 = 0x1.1800000000000p+6f;
    }
    v47 = ui_LayoutAccessor_GetPaneSize((__int64*)*a1, "Wdw"),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    v48 = fmaxf(v46, 0x1.4c00000000000p+7f);
    v49 = *((int*)a1 + 18) <= -1 ||
          (float)(v46 + -0x1.4000000000000p+3f) <= 0x1.4c00000000000p+7f;
    v50 = v48 + 0x1.4000000000000p+3f;
    if (v49) {
      v50 = v48;
    }
    ui_LayoutAccessor_SetPaneSize(*a1, "Wdw", v47, v50),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    v51 = *((_DWORD*)a1 + 18);
    if ((v51 & 0x80000000) == 0) {
      game_gameui_159b930((__int64*)*a1, v51),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    goto LABEL_84;
  }
  v7 = (__int64*)*a1;
  v57[0] = "L_InfoTitle";
  v57[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 3);
  GameRoutine_13fa520((void*)(&v58_.v58), v7, v57),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
  v8 = GameData_212c880[0];
  if (v58_.v59 != 0) {
    v9 = std___1___shared_weak_count_lock(v58_.v59),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    v10 = v58_.v58;
    if (v58_.v59 != 0) {
      std___1___shared_weak_count___release_weak(v58_.v59),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    if (v9 != 0 && v10 != nullptr) {
      v11 = a1[7];
      LODWORD(v58_.v58) = 0;
      InfoTitle_18b9480((__int64)v10, v1, v11, &v58_.v58),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * (a1[8] & 0xFFF)) +
                    104LL) == 3) {
        v58_.v58 = "NumNone";
        v58_.v59 = 7;
        Element_18863e0((__int64)v10, &v58_.v58, 1),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      goto LABEL_32;
    }
    if (v9 != 0) {
    LABEL_32:
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v9),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
  }
  v19 = *(
      unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * (*v1 & 0xFFF)) +
                        104LL);
  switch (v19) {
  case 6:
    LayoutAccessor_1562cf0(*a1, (unsigned int*)"Status02"),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    GameRoutine_158ebe0((__int64*)*a1, v1, a1[7], 0),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    break;
  case 5:
    LayoutAccessor_1562cf0(*a1, (unsigned int*)"Status03"),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    game_gameui_Util_SetGambitSkillStatus((__int64*)*a1, v1, a1[7], nullptr),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    break;
  case 3:
    LayoutAccessor_1562cf0(*a1, (unsigned int*)"Status00"),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    break;
  default:
    break;
  }
LABEL_84:
  if (*((_DWORD*)a1 + 25) != 36) {
    ui_LayoutAccessor_SetPaneVisible(*a1, "L_KeyHelp", 1),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    v52 = LayoutAccessor_155fbe0((__int64*)*a1, "L_KeyHelp"),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    GameRoutine_1593d90(v52, (__int64)(a1 + 10)),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    v53 = ui_LayoutAccessor_FindAlignment((__int64*)*a1, "A_KeyHelp"),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v53 != 0) {
      Alignment_56b600(v53),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  v54 = ui_LayoutAccessor_GetPaneSize((__int64*)*a1, "Wdw"),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
  v55 = (__int64*)*a1;
  LODWORD(v58_.v59) = 0;
  *(float*)&v58_.v58 = v54 + -0x1.8000000000000p+4f;
  *((float*)&v58_.v58 + 1) = -(float)(v56 + -0x1.4000000000000p+3f);
  ui_LayoutAccessor_SetPaneTranslate(v55, "A_KeyHelp", (__int64)&v58_.v58),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w"));
}

__int64 game_170cac0(__int64 result)
{
  __int64 v1;
  char v2;
  const char* v3;
  __int64 v4;
  __int64* v5;
  const char* v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  __int64* v12;
  unsigned __int64* v13;
  _QWORD* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  unsigned int v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  unsigned int v26;
  char* v27;
  __int64 v28;
  __int128 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  unsigned int i;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int128 v37;
  struct {
    __int64 v38;
    __int64 v39;
  } v38_;
  struct {
    __int64* v40;
    __int64 v41;
    const char* v42;
    unsigned __int64 v43;
    unsigned __int64 v44;
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
  } v40_;

  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = GameData_2262ae0;
  if (GameData_2262ae0 == 0) {
    return result;
  }
  v2 = result;
  if ((result & 1) != 0) {
    v3 = "In_Good";
  }
  else {
    v3 = "In_Bad";
  }
  LayoutAccessor_155cda0(GameData_2262ae0 + 288, v3, nullptr),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LayoutAccessor_1560070((void*)(&v40_.v40), (__int64*)(v1 + 168), "L_Tlp"),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v40_.v41 != 0) {
    v4 = std___1___shared_weak_count_lock(v40_.v41),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v5 = v40_.v40;
    if (v40_.v41 != 0) {
      std___1___shared_weak_count___release_weak(v40_.v41),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (v4 != 0 && v5 != nullptr) {
      if ((v2 & 1) != 0) {
        v6 = "MID_Perch_QuetionCorrect_Message";
      }
      else {
        v6 = "MID_Perch_QuetionWrong_Message";
      }
      v40_.v45 = -1;
      v40_.v46 = -1;
      v40_.v47 = -1;
      v40_.v48 = -1;
      v7 = *msg_MessageManager_instance__ptr[0];
      v40_.v49 = -1;
      v40_.v50 = -1;
      v40_.v51 = -1;
      v40_.v52 = -1;
      v40_.v53 = -1;
      v40_.v54 = -1;
      v40_.v55 = -1;
      v40_.v56 = -1;
      v40_.v40 = GameData_212e348 + 2;
      v40_.v41 = 0xFFFF0001FFFF0000LL;
      v40_.v42 = (const char*)0xFFFF0004FFFF0002LL;
      v40_.v43 = 0xFFFF0006FFFF0005LL;
      v40_.v57 = 8;
      v40_.v44 = 0xFFFF0008FFFF0007LL;
      v8 = GameRoutine_a4dbe0(v7, v6, 0),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v8 != nullptr) {
        v9 = (__int64)v8;
        v10 = ui_LayoutAccessor_FindTextBox(v5, "T_Txt"),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v10 != 0) {
          GameRoutine_156c5d0(v10, v9, 0),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      goto LABEL_17;
    }
    if (v4 != 0) {
    LABEL_17:
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v4),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  if ((v2 & 1) != 0) {
    v11 = "Good";
  }
  else {
    v11 = "Bad";
  }
  LayoutAccessor_155cda0(v1 + 176LL * *(int*)(v1 + 992) + 464, v11, nullptr),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = GameRoutine_14a1520((__int64*)(v1 + 272), 1),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v2 & 1) != 0) {
    v12 = eft_g_effectSystem_ptr[0];
    v40_.v40 = nullptr;
    v40_.v41 = 0;
    v13 = (unsigned __int64*)GameData_212c540;
    v14 = (_QWORD*)*eft_g_effectSystem_ptr[0];
    v15 = *((_QWORD*)GameData_212c540 + 1);
    v40_.v44 = *(_QWORD*)GameData_212c540;
    v40_.v45 = v15;
    v16 = (__int64*)GameData_212c548;
    v40_.v48 = v40_.v44;
    v40_.v49 = v15;
    LODWORD(v40_.v43) = 0;
    v40_.v42 = "UI_Deco_Bird_ShineA_SideA";
    v17 = *((_QWORD*)GameData_212c548 + 1);
    v40_.v46 = *(_QWORD*)GameData_212c548;
    v40_.v47 = v17;
    v18 = Manager_bc6460(v14, (__int64)&v40_.v40, 0),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameHr_14a10d0(&v38_.v38, (__int64)v18, v19, (__int64)&GameData_1a9f09e),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v20 = v38_.v39;
    if (v38_.v39 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v38_.v39 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v20),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
      v36 = v13[1];
      *(_QWORD*)&GameData_21a6120 = *v13;
      *((_QWORD*)&GameData_21a6120 + 1) = v36;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v21 = (_QWORD*)*v12;
    v22 = *v16;
    v23 = v16[1];
    v40_.v40 = nullptr;
    v40_.v41 = 0;
    LODWORD(v40_.v43) = 0;
    v40_.v46 = v22;
    v40_.v47 = v23;
    v24 = v13[1];
    v40_.v44 = *v13;
    v40_.v45 = v24;
    v40_.v48 = v40_.v44;
    v40_.v49 = v24;
    v37 = GameData_21a6120;
    v40_.v42 = "UI_Deco_Bird_SelectA";
    v25 = Manager_bc6460(v21, (__int64)&v40_.v40, 0),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameHr_14a10d0(&v40_.v40, (__int64)v25, v26, (__int64)&GameData_1a9f09e),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v27 = game_util_Format("L_Icon%02d", *(_DWORD*)(v1 + 992)),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v28 = ui_LayoutAccessor_FindPane((__int64*)(v1 + 168), v27),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v29 = v37;
    if (v28 != 0) {
      LODWORD(v29) = *(_DWORD*)(v28 + 124);
      DWORD1(v29) = *(_DWORD*)(v28 + 140);
    }
    v30 = (__int64)v40_.v40;
    v31 = *v40_.v40;
    if (*v40_.v40 != 0 && *(_DWORD*)(v31 + 16) == *((_DWORD*)v40_.v40 + 2)) {
      v32 = *(_DWORD*)(v31 + 36);
      if (v32 != 0) {
        for (i = 0; i < v32; ++i) {
          if ((int)v32 > (int)i) {
            v34 = *(_QWORD*)(v31 + 40 + 8LL * (int)i);
            if (v34 != 0) {
              *(_OWORD*)(v34 + 16) = v29;
              *(_BYTE*)(v34 + 128) = 1;
              v32 = *(_DWORD*)(v31 + 36);
            }
          }
        }
      }
    }
    result = game_14a3920(v30),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v35 = v40_.v41;
    if (v40_.v41 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v40_.v41 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak(v35),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  ++*(_DWORD*)(v1 + 992);
  return result;
}

void game_170d120(__int64 a1)
{
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
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[6];
    int v17;
    char gap68_[4];
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v16_;

  v16_.v18 = 0;
  v16_.v19 = 0;
  v16_.v20 = 0;
  v16_.v17 = 0;
  v16_.v16[0] = 0x800000018LL;
  v16_.v16[1] = 0x500000050LL;
  v16_.v16[2] = 0x10000000100000LL;
  memset(&v16_.v16[3], 0, 24);
  game_1366bd0((void*)(&v14_.v14), (__int64)"Layout/Hub.arc",
               (__int64)"Hub_PerchQuestion", (__int64)v16_.v16);
  v2 = v14_.v14;
  v3 = v14_.v15;
  v4 = *(_QWORD*)(a1 + 160);
  v14_.v14 = 0;
  v14_.v15 = 0;
  *(_QWORD*)(a1 + 152) = v2;
  *(_QWORD*)(a1 + 160) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v14_.v15;
  if (v14_.v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v16_.v18;
  if (v16_.v18 != 0) {
    v7 = v16_.v19;
    v8 = fw_memory_g_heap_manager_ptr;
    if (v16_.v18 == v16_.v19) {
      goto LABEL_18;
    }
    v9 = v16_.v19;
    do {
      v10 = *(_BYTE*)(v9 - 24);
      v9 -= 24;
      if ((v10 & 1) != 0) {
        v11 = *(_QWORD*)(v7 - 8);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12, v11);
        }
      }
      v7 = v9;
    } while (v9 != v6);
    v16_.v19 = v6;
    v6 = v16_.v18;
    if (v16_.v18 != 0) {
    LABEL_18:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v13, v6);
    }
  }
}

__int64 game_17356e0(__int64* a1, const char* a2)
{
  __int64 result;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  unsigned __int64 v15;
  const char* v16;
  float v17;
  struct {
    unsigned __int64 v18;
    __int64 v19;
  } v18_;
  __int64 v20;
  _BYTE v21[4];

  LayoutAccessor_1560070((void*)(&v18_.v18), a1, "L_Bg");
  result = v18_.v19;
  if (v18_.v19 != 0) {
    v5 = std___1___shared_weak_count_lock(v18_.v19);
    v6 = (__int64*)v18_.v18;
    result = v18_.v19;
    if (v18_.v19 != 0) {
      result = std___1___shared_weak_count___release_weak(v18_.v19);
    }
    if (v5 == 0 || v6 == nullptr) {
      if (v5 == 0) {
        return result;
      }
    }
    else {
      result = ui_LayoutAccessor_FindPane(v6, "Bg");
      if (result != 0) {
        result =
            __dynamic_cast(result, GameData_212d670[0], GameData_212fc70[0], 0);
        if (result != 0) {
          v8 = result;
          v9 = ui_LayoutAccessor_FindAlignment(a1, a2);
          if (v9 != 0) {
            Alignment_56b600(v9);
            v10 = a1[1];
            if (v10 != 0) {
              v11 = std___1___shared_weak_count_lock(v10);
              if (v11 != 0) {
                v12 = v11;
                if (*a1 != 0) {
                  ControlCreator_13633c0(*a1);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
                  std___1___shared_weak_count___release_weak(v12);
                }
              }
            }
          }
          v13 = ui_LayoutAccessor_FindPane(a1, a2);
          v14 = 0x0.0p+0f;
          v21[0] = 0;
          v18_.v18 = 0xFF7FFFFF7F7FFFFFLL;
          v20 = 0x7F7FFFFFFF7FFFFFLL;
          if (v13 != 0) {
            v15 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v13 + 128),
                                        *(float32x4_t*)(v13 + 128)))
                      .n128_u64[0];
            GameRoutine_156bee0(
                v13, (__int64)&v18_.v18, (__int64)&v20, (__int64)v21, 0,
                sqrtf((float)(*(float*)&v15 +
                              (float)(COERCE_FLOAT(*(_OWORD*)(v13 + 112)) *
                                      COERCE_FLOAT(*(_OWORD*)(v13 + 112)))) +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v13 + 144)) *
                              COERCE_FLOAT(*(_OWORD*)(v13 + 144)))) /
                    *(float*)(v13 + 72),
                sqrtf((float)(*((float*)&v15 + 1) +
                              (float)(COERCE_FLOAT(
                                          HIDWORD(*(_QWORD*)(v13 + 112))) *
                                      COERCE_FLOAT(
                                          HIDWORD(*(_QWORD*)(v13 + 112))))) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v13 + 144))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v13 + 144))))) /
                    *(float*)(v13 + 76));
            if (v21[0] == 1) {
              v14 = vabds_f32(*((float*)&v20 + 1), *((float*)&v18_.v18 + 1));
            }
          }
          v16 = Pane_58fac0(v8, "Margin_Height");
          if (v16 != nullptr) {
            v17 = (float)*(int*)&v16[*((unsigned int*)v16 + 1)];
          }
          else {
            v17 = 0x1.0c00000000000p+6f;
          }
          result = GameRoutine_17358f0(a1, v14 + v17);
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak(v5);
    }
  }
  return result;
}

__int64 game_1735b60(__int64 result)
{
  __int64 v1;
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
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  struct {
    _QWORD v20[6];
    int v21;
    char gap68_[4];
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v20_;

  if (GameData_2262c00 == 0) {
    v1 = result;
    v2 = fw_memory_g_heap_manager_ptr;
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        336, 16, 0);
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
    game_ProcInst_Register(v3);
    *(_QWORD*)(v3 + 200) = 0;
    GameData_2262c00 = v3;
    *(_QWORD*)(v3 + 152) = 0;
    *(_QWORD*)(v3 + 160) = 0;
    *(_QWORD*)v3 = game_gameui_anonymous_ProcPopup_vtable;
    *(_QWORD*)(v3 + 192) = v3 + 200;
    *(_DWORD*)(v3 + 248) = 1065353216;
    *(_QWORD*)(v3 + 168) = 0;
    *(_QWORD*)(v3 + 176) = 0;
    *(_QWORD*)(v3 + 184) = 0;
    *(_QWORD*)(v3 + 208) = 0;
    *(_QWORD*)(v3 + 216) = 0;
    *(_QWORD*)(v3 + 224) = 0;
    *(_QWORD*)(v3 + 232) = 0;
    *(_QWORD*)(v3 + 240) = 0;
    *(_QWORD*)(v3 + 256) = 0;
    *(_QWORD*)(v3 + 264) = 0;
    *(_QWORD*)(v3 + 272) = 0;
    *(_QWORD*)(v3 + 280) = 0;
    *(_QWORD*)(v3 + 288) = 0;
    *(_QWORD*)(v3 + 296) = 0;
    *(_QWORD*)(v3 + 304) = 0;
    *(_QWORD*)(v3 + 312) = 0;
    *(_QWORD*)(v3 + 320) = 0;
    *(_QWORD*)(v3 + 328) = 0;
    v20_.v22 = 0;
    v20_.v23 = 0;
    v20_.v24 = 0;
    memset(&v20_.v20[2], 0, 32);
    v20_.v21 = 0;
    v20_.v20[0] = 0x800000018LL;
    v20_.v20[1] = 0x500000050LL;
    game_1366bd0((void*)(&v18_.v18), (__int64)"Layout/Common.arc",
                 (__int64)"Common_Popup", (__int64)v20_.v20);
    v5 = v18_.v18;
    v6 = v18_.v19;
    v7 = *(_QWORD*)(v3 + 160);
    v18_.v18 = 0;
    v18_.v19 = 0;
    *(_QWORD*)(v3 + 152) = v5;
    *(_QWORD*)(v3 + 160) = v6;
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    v8 = v18_.v19;
    if (v18_.v19 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v18_.v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
    v9 = *(_QWORD*)(v3 + 160);
    v18_.v18 = *(_QWORD*)(v3 + 152);
    v18_.v19 = v9;
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dda0((__int64*)(v3 + 168), &v18_.v18);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
    else {
      ui_LayoutAccessor_Setup_155dda0((__int64*)(v3 + 168), &v18_.v18);
    }
    ui_LayoutAccessor_SetPriority(v3 + 168, 1311);
    *(_QWORD*)(v3 + 280) =
        ui_LayoutAccessor_FindPane((__int64*)(v3 + 168), "N_IO");
    v10 = ui_LayoutAccessor_FindPane((__int64*)(v3 + 168), "N_Pool");
    *(_QWORD*)(v3 + 272) = v10;
    *(_BYTE*)(v10 + 88) &= ~1u;
    LayoutAccessor_155e830(v3 + 168, 1);
    v11 = v20_.v22;
    if (v20_.v22 != 0) {
      v12 = v20_.v23;
      if (v20_.v22 == v20_.v23) {
        goto LABEL_23;
      }
      v13 = v20_.v23;
      do {
        v14 = *(_BYTE*)(v13 - 24);
        v13 -= 24;
        if ((v14 & 1) != 0) {
          v15 = *(_QWORD*)(v12 - 8);
          if (v15 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
              v16 = 128;
            }
            else {
              v16 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v16, v15);
          }
        }
        v12 = v13;
      } while (v13 != v11);
      v20_.v23 = v11;
      v11 = v20_.v22;
      if (v20_.v22 != 0) {
      LABEL_23:
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v17, v11);
      }
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21c6868) != 0) {
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
      __cxa_guard_release((__int64)&GameData_21c6868);
    }
    return ProcInst_657850(v3, (__int64)&GameData_21c67a8, (__int64)"ProcPopup",
                           0, v1);
  }
  return result;
}

void game_174d800(__int64* a1, float a2, float a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v6;
  const char* v7;
  const char* v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  struct {
    char v19[16];
    __int64 v20;
  } v19_;
  struct {
    char v21[16];
    __int64 v22;
  } v21_;

  if (a2 >= a3) {
    v6 = 14;
  }
  else {
    v6 = 7;
  }
  if (a2 >= a3) {
    v7 = "GaugeUp_Change";
  }
  else {
    v7 = "GaugeUp";
  }
  if (a2 >= a3) {
    v8 = "GaugeUp";
  }
  else {
    v8 = "GaugeUp_Change";
  }
  if (a2 >= a3) {
    v9 = 7;
  }
  else {
    v9 = 14;
  }
  v21_.v21[0] = 2 * v6;
  if (a2 >= a3) {
    v10 = 44;
  }
  else {
    v10 = 43;
  }
  if (a2 >= a3) {
    v11 = 15;
  }
  else {
    v11 = 8;
  }
  if (a2 >= a3) {
    v12 = 8;
  }
  else {
    v12 = 15;
  }
  memcpy((__int64)&v21_.v21[1], (__int64)v7, v6);
  v21_.v21[v11] = 0;
  v19_.v19[0] = 2 * v9;
  memcpy((__int64)&v19_.v19[1], (__int64)v8, v9);
  v19_.v19[v12] = 0;
  GameRoutine_174d4c0(a1, "GaugeInside_Change", v10);
  GameHr_1562680((__int64)a1, (unsigned int*)&v21_.v21[1], 0x0.0p+0f);
  v13 = LayoutAccessor_15638b0(a1, &v21_.v21[1], 1);
  if (a2 <= 0x1.0000000000000p+0f) {
    v14 = a2;
  }
  else {
    v14 = 0x1.0000000000000p+0f;
  }
  if (a2 < 0x0.0p+0f) {
    v14 = 0x0.0p+0f;
  }
  LayoutAccessor_15636c0((__int64)a1, (__int64)&v21_.v21[1], 1, v14 * v13);
  GameHr_1562680((__int64)a1, (unsigned int*)&v19_.v19[1], 0x0.0p+0f);
  v15 = LayoutAccessor_15638b0(a1, &v19_.v19[1], 1);
  if (a3 <= 0x1.0000000000000p+0f) {
    v16 = a3;
  }
  else {
    v16 = 0x1.0000000000000p+0f;
  }
  if (a3 < 0x0.0p+0f) {
    v16 = 0x0.0p+0f;
  }
  LayoutAccessor_15636c0((__int64)a1, (__int64)&v19_.v19[1], 1, v16 * v15);
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v19_.v20);
  }
  if ((v21_.v21[0] & 1) != 0 && v21_.v22 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  v21_.v22);
  }
}

void game_1785dc0(_QWORD* a1)
{
  __int64 (*v2)(_QWORD*);
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v28;
    __int64 v29;
  } v28_;
  struct {
    _DWORD v30[6];
    __int64 v31;
    __int64 v32;
    __int64 v33;
    int v34;
    char gap68_[4];
    __int64 v35;
    __int64 v36;
    __int64 v37;
  } v30_;

  v30_.v35 = 0;
  v30_.v36 = 0;
  v30_.v37 = 0;
  v30_.v31 = 0;
  v30_.v32 = 0;
  v30_.v33 = 0;
  v30_.v34 = 0;
  v30_.v30[0] = 24;
  v2 = *(__int64 (**)(_QWORD*))(*a1 + 216LL);
  v30_.v30[3] = 5;
  v3 = v2(a1);
  v4 = *a1;
  v30_.v30[2] = v3;
  v5 = (*(__int64 (**)(_QWORD*))(v4 + 224))(a1);
  v6 = *a1;
  v30_.v30[1] = v5;
  v7 = (*(__int64 (**)(_QWORD*))(v6 + 232))(a1);
  v8 = *a1;
  v30_.v30[4] = v7;
  v9 = (*(__int64 (**)(_QWORD*))(v8 + 240))(a1);
  v10 = *a1;
  v30_.v30[5] = v9;
  v11 = (*(__int64 (**)(_QWORD*))(v10 + 200))(a1);
  v12 = (*(__int64 (**)(_QWORD*))(*a1 + 208LL))(a1);
  game_1366bd0((void*)(&v28_.v28), v11, v12, (__int64)v30_.v30);
  v13 = v28_.v28;
  v14 = v28_.v29;
  v15 = a1[24];
  v28_.v28 = 0;
  v28_.v29 = 0;
  a1[23] = v13;
  a1[24] = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = v28_.v29;
  if (v28_.v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28_.v29 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
    v17 = a1[19];
    if (v17 != 0) {
    LABEL_7:
      if (__dynamic_cast(v17, GameData_2131c18[0], &GameData_20c57c0, 0) != 0) {
        goto LABEL_12;
      }
    }
  }
  else {
    v17 = a1[19];
    if (v17 != 0) {
      goto LABEL_7;
    }
  }
  v18 = (*(__int64 (**)(_QWORD*))(*a1 + 192LL))(a1);
  if ((*((_BYTE*)a1 + 172) & 1) == 0) {
    v19 = v18;
    GameRoutine_1553130(v18);
    *((_DWORD*)a1 + 42) = v19;
    *((_BYTE*)a1 + 172) = 1;
  }
LABEL_12:
  v20 = v30_.v35;
  if (v30_.v35 != 0) {
    v21 = v30_.v36;
    v22 = fw_memory_g_heap_manager_ptr;
    if (v30_.v35 == v30_.v36) {
      goto LABEL_23;
    }
    v23 = v30_.v36;
    do {
      v24 = *(_BYTE*)(v23 - 24);
      v23 -= 24;
      if ((v24 & 1) != 0) {
        v25 = *(_QWORD*)(v21 - 8);
        if (v25 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
            v26 = 128;
          }
          else {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v26, v25);
        }
      }
      v21 = v23;
    } while (v23 != v20);
    v30_.v36 = v20;
    v20 = v30_.v35;
    if (v30_.v35 != 0) {
    LABEL_23:
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v27, v20);
    }
  }
}

void game_1786640(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64* v10;
    __int64* v11;
  } v10_;

  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a1 + 264LL))((void*)(&v10_.v10), (__int64)a1);
  game_menu_TutorialInfo_CreateBind(a1, &v10_.v10);
  v2 = v10_.v10;
  if (v10_.v10 != nullptr) {
    v3 = v10_.v11;
    v4 = fw_memory_g_heap_manager_ptr;
    if (v10_.v10 == v10_.v11) {
      goto LABEL_12;
    }
    v5 = v10_.v11;
    do {
      v6 = *((_BYTE*)v5 - 24);
      v5 -= 3;
      if ((v6 & 1) != 0) {
        v7 = *(v3 - 1);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
        }
      }
      v3 = v5;
    } while (v5 != v2);
    v10_.v11 = v2;
    v2 = v10_.v10;
    if (v10_.v10 != nullptr) {
    LABEL_12:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, (__int64)v2);
    }
  }
}

__int64 game_1797850(__int64 a1, __int64* a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2263cc8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2263cc8) != 0) {
    GameData_2263c48 = 14;
    GameData_2263c60 = 0;
    GameData_2263c68 = 0;
    GameData_2263c70 = 0;
    GameData_2263c78 = 0;
    GameData_2263c80 = 0;
    GameData_2263c88 = 0;
    GameData_2263cb0 = 0;
    GameData_2263cb8 = 0;
    GameData_2263cc0 = 0;
    GameData_2263c90 = 0;
    GameData_2263c98 = 0;
    GameData_2263ca0 = 0;
    GameData_2263ca8 = 0;
    GameData_2263c50 = 0;
    GameData_2263c58 = (__int64)GameRoutine_1797a90;
    __cxa_guard_release((__int64)&GameData_2263cc8);
  }
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  v8 = *a2;
  v7 = a2[1];
  v9 = v6;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  v10 = GameData_212c608[0];
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
  *(_QWORD*)v6 = v10 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  game_ProcInst_Register(v6);
  *(_QWORD*)(v9 + 152) = v8;
  *(_QWORD*)(v9 + 160) = v7;
  GameData_2264528 = v9;
  *(_QWORD*)v9 = game_menu_UnitMakeZoomCamera_vtable;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_DWORD*)(v9 + 172) = 0;
  *(_BYTE*)(v9 + 168) = a3 & 1;
  *(_BYTE*)(v9 + 169) = 1;
  if (a1 != 0) {
    v11 = *(_QWORD*)(a1 + 40);
    if (v11 != 0) {
      *(_QWORD*)(v11 + 48) = v9;
      *(_QWORD*)(v9 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v9;
    *(_QWORD*)(v9 + 24) = "UnitMakeZoomCamera";
    *(_QWORD*)(v9 + 32) = a1;
    *(_DWORD*)(v9 + 140) =
        (unsigned int)game_HashString32("UnitMakeZoomCamera");
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 24;
    *(_QWORD*)(v9 + 80) = 1;
    *(_QWORD*)(v9 + 8) = &GameData_2263c48;
    *(_QWORD*)(v9 + 16) = &GameData_2263c48;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 136LL))(v9) & 1) != 0 &&
        (*(_WORD*)(v9 + 136) & 0x100) == 0) {
      *(_WORD*)(v9 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v9 + 136) & 1) == 0) {
    ProcInst_657a50(v9, 1);
  }
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return v9;
}

__int64 game_1797af0(__int64 a1, __int64* a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2263d50,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2263d50) != 0) {
    GameData_2263cd0 = 14;
    GameData_2263ce8 = 0;
    GameData_2263cf0 = 0;
    GameData_2263cf8 = 0;
    GameData_2263d00 = 0;
    GameData_2263d08 = 0;
    GameData_2263d10 = 0;
    GameData_2263d38 = 0;
    GameData_2263d40 = 0;
    GameData_2263d48 = 0;
    GameData_2263d18 = 0;
    GameData_2263d20 = 0;
    GameData_2263d28 = 0;
    GameData_2263d30 = 0;
    GameData_2263cd8 = 0;
    GameData_2263ce0 = (__int64)GameRoutine_1797d30;
    __cxa_guard_release((__int64)&GameData_2263d50);
  }
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  v8 = *a2;
  v7 = a2[1];
  v9 = v6;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  v10 = GameData_212c608[0];
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
  *(_QWORD*)v6 = v10 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  game_ProcInst_Register(v6);
  *(_QWORD*)(v9 + 152) = v8;
  *(_QWORD*)(v9 + 160) = v7;
  GameData_2264528 = v9;
  *(_QWORD*)v9 = game_menu_UnitMakeZoomCamera_vtable;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_DWORD*)(v9 + 172) = 0;
  *(_BYTE*)(v9 + 168) = a3 & 1;
  *(_BYTE*)(v9 + 169) = 1;
  if (a1 != 0) {
    v11 = *(_QWORD*)(a1 + 40);
    if (v11 != 0) {
      *(_QWORD*)(v11 + 48) = v9;
      *(_QWORD*)(v9 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v9;
    *(_QWORD*)(v9 + 24) = "UnitMakeZoomCamera";
    *(_QWORD*)(v9 + 32) = a1;
    *(_DWORD*)(v9 + 140) =
        (unsigned int)game_HashString32("UnitMakeZoomCamera");
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 24;
    *(_QWORD*)(v9 + 80) = 1;
    *(_QWORD*)(v9 + 8) = &GameData_2263cd0;
    *(_QWORD*)(v9 + 16) = &GameData_2263cd0;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 136LL))(v9) & 1) != 0 &&
        (*(_WORD*)(v9 + 136) & 0x100) == 0) {
      *(_WORD*)(v9 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v9 + 136) & 1) == 0) {
    ProcInst_657a50(v9, 1);
  }
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return v9;
}

void game_17a9aa0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  const char* v12;
  const char* v13;
  const char* v14;
  __int64 v15;
  unsigned int v16;
  const char* v17;
  unsigned int v18;
  char v19;
  const char* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  struct {
    const char* v28;
    unsigned __int64 v29;
  } v28_;

  Element_1884860(a1, a2, a3, a4);
  *(_DWORD*)(a1 + 1036) = 0;
  *(_BYTE*)(a1 + 1040) = 0;
  *(_QWORD*)a1 = game_gameui_control_KeyIcon_vtable;
  *(_QWORD*)(a1 + 72) = GameData_20d1818;
  v6 = a1 + 72;
  *(_QWORD*)(a1 + 1028) = 0x2400000024LL;
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0);
  v9 = GameData_20d1838;
  *(_QWORD*)v8 = GameData_20d1830;
  *(_QWORD*)(v8 + 8) = v9;
  v10 = GameData_20d1848;
  *(_QWORD*)(v8 + 16) = GameData_20d1840;
  *(_QWORD*)(v8 + 24) = v10;
  v11 = (const char*)GameRoutine_576600(a2, "TextKey");
  if (v11 != nullptr) {
    v28_.v28 = v11;
    v28_.v29 = strlen(v11);
    if (v28_.v29 != 0) {
      ui_control_1888c80(a1 + 208, v8, (__int64)&v28_.v28);
    }
  }
  v12 = (const char*)GameRoutine_576600(a2, *(const char**)(v8 + 16));
  if (v12 != nullptr) {
    v28_.v28 = v12;
    v28_.v29 = strlen(v12);
    if (v28_.v29 != 0) {
      ui_control_1888c80(a1 + 208, v8 + 16, (__int64)&v28_.v28);
    }
  }
  v13 = Pane_58fac0(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL), "DisableModeChange");
  if (v13 != nullptr ||
      (v13 = GameRoutine_576740(a2, "DisableModeChange")) != nullptr) {
    *(_BYTE*)(a1 + 1040) = *(_DWORD*)&v13[*((unsigned int*)v13 + 1)] != 0;
  }
  v14 = Pane_58fac0(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL), "KeyIndex");
  if (v14 == nullptr) {
    v14 = GameRoutine_576740(a2, "KeyIndex");
    if (v14 == nullptr) {
      goto LABEL_30;
    }
  }
  v15 = *(unsigned int*)&v14[*((unsigned int*)v14 + 1)];
  if ((unsigned int)v15 > 0x15) {
    v16 = 36;
  }
  else {
    v16 = GameData_1c0313c[v15];
  }
  v17 = Pane_58fac0(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL), "Key2Index");
  if (v17 == nullptr) {
    v17 = GameRoutine_576740(a2, "Key2Index");
    if (v17 == nullptr) {
    LABEL_23:
      v18 = 36;
      v19 = 1;
      goto LABEL_24;
    }
  }
  v18 = *(_DWORD*)&v17[*((unsigned int*)v17 + 1)];
  if (v18 < 0x13) {
    v19 = 0;
    goto LABEL_24;
  }
  switch (v18) {
  case 0x15u:
    v19 = 0;
    v18 = 27;
    break;
  case 0x14u:
    v19 = 0;
    v18 = 23;
    break;
  case 0x13u:
    v19 = 0;
    v18 = 22;
    break;
  default:
    goto LABEL_23;
  }
LABEL_24:
  v20 = Pane_58fac0(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL), "MouseMode");
  if (v20 != nullptr ||
      (v20 = GameRoutine_576740(a2, "MouseMode")) != nullptr) {
    v21 = *(_DWORD*)&v20[*((unsigned int*)v20 + 1)];
    if ((unsigned int)(v21 - 1) >= 0x15) {
      v21 = 0;
    }
  }
  else {
    v21 = 0;
  }
  *(_DWORD*)(a1 + 1036) = v21;
  *(_DWORD*)(a1 + 1028) = v16;
  KeyIcon_17aa380(a1, "TextKey", v16);
  if ((v19 & 1) == 0) {
    *(_DWORD*)(a1 + 1032) = v18;
    KeyIcon_17aa380(a1, "TextKey2", v18);
  }
LABEL_30:
  v22 = ui_Manager_instance_;
  v23 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v24 = ui_Manager_instance_ + 1240;
  if (v23 == ui_Manager_instance_ + 1240) {
    goto LABEL_33;
  }
  while (*(_QWORD*)(v23 + 16) != v6) {
    v23 = *(_QWORD*)(v23 + 8);
    if (v23 == v24) {
      goto LABEL_33;
    }
  }
  if (v23 == v24) {
  LABEL_33:
    v25 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
    v25[1] = v24;
    v25[2] = v6;
    v26 = *(_QWORD*)(v22 + 1240);
    *v25 = v26;
    *(_QWORD*)(v26 + 8) = v25;
    *(_QWORD*)(v22 + 1240) = v25;
    ++*(_QWORD*)(v22 + 1256);
  }
  v27 = 128;
  if (*(_QWORD*)(*v7 + 200) == 0) {
    v27 = 56;
  }
  nn_mem_StandardAllocator_Free(*v7 + v27, v8);
}

void game_17b8320(__int64 a1)
{
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
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[6];
    int v17;
    char gap68_[4];
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v16_;

  v16_.v18 = 0;
  v16_.v19 = 0;
  v16_.v20 = 0;
  memset(&v16_.v16[2], 0, 32);
  v16_.v17 = 0;
  v16_.v16[0] = 0x800000018LL;
  v16_.v16[1] = 0x500000050LL;
  game_1366bd0((void*)(&v14_.v14), (__int64)"Layout/Common.arc",
               (__int64)"Common_Schedule", (__int64)v16_.v16);
  v2 = v14_.v14;
  v3 = v14_.v15;
  v4 = *(_QWORD*)(a1 + 160);
  v14_.v14 = 0;
  v14_.v15 = 0;
  *(_QWORD*)(a1 + 152) = v2;
  *(_QWORD*)(a1 + 160) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v14_.v15;
  if (v14_.v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v16_.v18;
  if (v16_.v18 != 0) {
    v7 = v16_.v19;
    v8 = fw_memory_g_heap_manager_ptr;
    if (v16_.v18 == v16_.v19) {
      goto LABEL_18;
    }
    v9 = v16_.v19;
    do {
      v10 = *(_BYTE*)(v9 - 24);
      v9 -= 24;
      if ((v10 & 1) != 0) {
        v11 = *(_QWORD*)(v7 - 8);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12, v11);
        }
      }
      v7 = v9;
    } while (v9 != v6);
    v16_.v19 = v6;
    v6 = v16_.v18;
    if (v16_.v18 != 0) {
    LABEL_18:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v13, v6);
    }
  }
}

__int64 game_17be300(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  _QWORD* v7;
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64* v28;
  float v29;
  unsigned __int8 v30;
  __int64* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  unsigned int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  double v40;
  unsigned int v41;
  int v42;
  __int64* v43;
  char v44;
  __int64 v45;
  __int64 v46;
  struct {
    __int64 v48;
    __int64 v49;
  } v48_;
  struct {
    __int64 v50;
    __int64 v51;
  } v50_;
  struct {
    __int64 v52;
    __int64 v53;
  } v52_;
  __int64 v54[2];
  __int64 v55[2];
  struct {
    __int64 v56;
    __int64 v57;
  } v56_;
  struct {
    _QWORD v58[6];
    int v59;
    char gap148_[4];
    __int64 v60;
    __int64 v61;
    __int64 v62;
  } v58_;

  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  v1 = a1 + 4096;
  v3 = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  do {
    v4 = a1 + v3;
    v3 += 560;
    *(_QWORD*)(v4 + 272) = 0;
    *(_QWORD*)(v4 + 280) = 0;
    *(_QWORD*)(v4 + 61) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_DWORD*)(v4 + 72) = 8;
    *(_QWORD*)(v4 + 76) = 0;
    *(_BYTE*)(v4 + 84) = 0;
    *(_QWORD*)(v4 + 88) = 0;
    *(_QWORD*)(v4 + 96) = 0;
    *(_QWORD*)(v4 + 104) = 0;
    *(_QWORD*)(v4 + 112) = 0;
    *(_QWORD*)(v4 + 117) = 0;
    *(_DWORD*)(v4 + 128) = 8;
    *(_QWORD*)(v4 + 132) = 0;
    *(_BYTE*)(v4 + 140) = 0;
    *(_QWORD*)(v4 + 144) = 0;
    *(_QWORD*)(v4 + 152) = 0;
    *(_QWORD*)(v4 + 160) = 0;
    *(_QWORD*)(v4 + 168) = 0;
    *(_QWORD*)(v4 + 173) = 0;
    *(_DWORD*)(v4 + 184) = 8;
    *(_QWORD*)(v4 + 188) = 0;
    *(_BYTE*)(v4 + 196) = 0;
    *(_QWORD*)(v4 + 200) = 0;
    *(_QWORD*)(v4 + 208) = 0;
    *(_QWORD*)(v4 + 216) = 0;
    *(_QWORD*)(v4 + 224) = 0;
    *(_QWORD*)(v4 + 285) = 0;
    *(_QWORD*)(v4 + 229) = 0;
    *(_DWORD*)(v4 + 240) = 8;
    *(_QWORD*)(v4 + 244) = 0;
    *(_BYTE*)(v4 + 252) = 0;
    *(_QWORD*)(v4 + 256) = 0;
    *(_QWORD*)(v4 + 264) = 0;
    *(_DWORD*)(v4 + 296) = 8;
    *(_BYTE*)(v4 + 308) = 0;
    *(_QWORD*)(v4 + 312) = 0;
    *(_QWORD*)(v4 + 320) = 0;
    *(_DWORD*)(v4 + 352) = 8;
    *(_BYTE*)(v4 + 364) = 0;
    *(_QWORD*)(v4 + 300) = 0;
    *(_QWORD*)(v4 + 368) = 0;
    *(_QWORD*)(v4 + 376) = 0;
    *(_DWORD*)(v4 + 408) = 8;
    *(_BYTE*)(v4 + 420) = 0;
    *(_QWORD*)(v4 + 424) = 0;
    *(_QWORD*)(v4 + 432) = 0;
    *(_DWORD*)(v4 + 464) = 8;
    *(_BYTE*)(v4 + 476) = 0;
    *(_QWORD*)(v4 + 480) = 0;
    *(_QWORD*)(v4 + 488) = 0;
    *(_DWORD*)(v4 + 520) = 8;
    *(_BYTE*)(v4 + 532) = 0;
    *(_QWORD*)(v4 + 552) = 0;
    *(_QWORD*)(v4 + 341) = 0;
    *(_QWORD*)(v4 + 328) = 0;
    *(_QWORD*)(v4 + 336) = 0;
    *(_QWORD*)(v4 + 544) = 0;
    *(_QWORD*)(v4 + 536) = 0;
    *(_DWORD*)(v4 + 576) = 8;
    *(_BYTE*)(v4 + 588) = 0;
    *(_QWORD*)(v4 + 356) = 0;
    *(_QWORD*)(v4 + 397) = 0;
    *(_QWORD*)(v4 + 384) = 0;
    *(_QWORD*)(v4 + 392) = 0;
    *(_QWORD*)(v4 + 412) = 0;
    *(_QWORD*)(v4 + 453) = 0;
    *(_QWORD*)(v4 + 440) = 0;
    *(_QWORD*)(v4 + 448) = 0;
    *(_QWORD*)(v4 + 468) = 0;
    *(_QWORD*)(v4 + 509) = 0;
    *(_QWORD*)(v4 + 496) = 0;
    *(_QWORD*)(v4 + 504) = 0;
    *(_QWORD*)(v4 + 524) = 0;
    *(_QWORD*)(v4 + 565) = 0;
    *(_QWORD*)(v4 + 560) = 0;
    *(_QWORD*)(v4 + 580) = 0;
  } while (v3 != 5600);
  *(_QWORD*)(a1 + 5640) = 0;
  *(_QWORD*)(a1 + 5632) = 0;
  *(_DWORD*)(a1 + 5648) = -1082130432;
  v5 = GameData_2131ac8[0];
  *(_QWORD*)(a1 + 5664) = 0;
  *(_QWORD*)(a1 + 5672) = 0;
  *(_QWORD*)(a1 + 5680) = 0;
  *(_DWORD*)(a1 + 5688) = 0;
  *(_QWORD*)(a1 + 5696) = 0;
  *(_QWORD*)(a1 + 5704) = 0;
  *(_QWORD*)(a1 + 5712) = 0;
  *(_DWORD*)(a1 + 5720) = 0;
  *(_QWORD*)(a1 + 5656) = v5 + 2;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  *(_QWORD*)(a1 + 5736) = 0;
  v8 = GameData_2131ae8;
  *(_QWORD*)(a1 + 5744) = 0;
  *(_QWORD*)(a1 + 5752) = 0;
  v9 = GameData_2130fa8[0] + 2;
  *v7 = v8 + 2;
  v7[1] = v9;
  v10 = GameData_212fca0[0] + 2;
  v7[2] = 0;
  v7[3] = v10;
  v11 = GameData_2131ad0[0];
  v7[6] = 0;
  v7[7] = 0;
  v7[4] = -1;
  v7[5] = 0;
  v7[8] = 0;
  *(_QWORD*)(a1 + 5728) = v7;
  *(_QWORD*)(a1 + 5760) = 0;
  *(_QWORD*)(a1 + 5768) = 0;
  *(_QWORD*)(a1 + 5776) = 0;
  *(_QWORD*)(a1 + 5784) = 0;
  *(_QWORD*)(a1 + 5792) = 0;
  *(_QWORD*)(a1 + 5800) = 0;
  *(_QWORD*)(a1 + 5808) = 0;
  *(_DWORD*)(a1 + 5824) = 0;
  *(_DWORD*)(a1 + 5832) = 0;
  *(_BYTE*)(v1 + 1743) = 0;
  *(_BYTE*)(v1 + 1748) = 0;
  *(_QWORD*)(a1 + 5864) = 0;
  *(_QWORD*)(a1 + 5888) = 0;
  *(_QWORD*)(a1 + 5896) = 0;
  *(_QWORD*)(a1 + 5904) = 0;
  *(_QWORD*)(a1 + 5912) = 0;
  v58_.v60 = 0;
  v58_.v61 = 0;
  v58_.v62 = 0;
  v58_.v58[4] = 0;
  v58_.v58[5] = 0;
  v58_.v59 = 0;
  *(_QWORD*)(a1 + 5656) = v11 + 2;
  *(_QWORD*)(a1 + 5816) = 1065353216;
  *(_BYTE*)(a1 + 5836) = 0;
  *(_WORD*)(v1 + 1741) = 1;
  *(_DWORD*)(a1 + 5840) = -1;
  *(_QWORD*)(a1 + 5856) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 5848) = 0x3F800000FFFFFFFFLL;
  *(_DWORD*)(a1 + 5872) = 0x800000;
  v58_.v58[0] = 0x800000018LL;
  v58_.v58[1] = 0x600000080LL;
  v58_.v58[2] = 0x20000000800000LL;
  v58_.v58[3] = 0;
  game_1366bd0((void*)(&v56_.v56), (__int64)"Layout/Gmap.arc",
               (__int64)"Gmap_UI", (__int64)v58_.v58),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  v12 = v56_.v56;
  v13 = v56_.v57;
  v14 = *(_QWORD*)(a1 + 8);
  v56_.v56 = 0;
  v56_.v57 = 0;
  *(_QWORD*)a1 = v12;
  *(_QWORD*)(a1 + 8) = v13;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
    std___1___shared_weak_count___release_weak(v14),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  v15 = v56_.v57;
  if (v56_.v57 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56_.v57 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
    std___1___shared_weak_count___release_weak(v15),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  v16 = v58_.v60;
  if (v58_.v60 != 0) {
    v17 = v58_.v61;
    if (v58_.v60 == v58_.v61) {
      goto LABEL_20;
    }
    v18 = v58_.v61;
    do {
      v19 = *(_BYTE*)(v18 - 24);
      v18 -= 24;
      if ((v19 & 1) != 0) {
        v20 = *(_QWORD*)(v17 - 8);
        if (v20 != 0) {
          if (*(_QWORD*)(*v6 + 200) != 0) {
            v21 = 128;
          }
          else {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v21, v20),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
      }
      v17 = v18;
    } while (v18 != v16);
    v58_.v61 = v16;
    v16 = v58_.v60;
    if (v58_.v60 != 0) {
    LABEL_20:
      v22 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v22, v16),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
    }
  }
  v23 = fw_memory_HeapManager_Allocate(*v6, 128, 16, 0),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  *(_QWORD*)(v23 + 16) = 0;
  v24 = GameData_212d880;
  v25 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(v23 + 32) = 0;
  *(_QWORD*)(v23 + 40) = 0;
  *(_QWORD*)(v23 + 64) = 0;
  *(_QWORD*)(v23 + 72) = 0;
  *(_QWORD*)(v23 + 80) = 0;
  *(_QWORD*)(v23 + 88) = 0;
  *(_QWORD*)(v23 + 96) = 0;
  *(_QWORD*)(v23 + 112) = 0;
  *(_QWORD*)(v23 + 120) = 0;
  *(_QWORD*)(a1 + 24) = v23;
  *(_QWORD*)v23 = v24 + 16;
  *(_QWORD*)(v23 + 8) = 0;
  *(_QWORD*)(v23 + 56) = 0;
  *(_QWORD*)(v23 + 48) = v23 + 56;
  *(_DWORD*)(v23 + 104) = 1065353216;
  *(_QWORD*)(v23 + 24) = 0;
  *(_QWORD*)(a1 + 16) = v23 + 24;
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
    std___1___shared_weak_count___release_weak(v25),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  v27 = *(_QWORD*)(a1 + 8);
  v26 = *(__int64**)(a1 + 16);
  v55[0] = *(_QWORD*)a1;
  v55[1] = v27;
  if (v27 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(v26, v55),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
    if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
      std___1___shared_weak_count___release_weak(v27),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(v26, v55),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  LayoutAccessor_155e830(*(_QWORD*)(a1 + 16), 1),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  ui_LayoutAccessor_SetPriority(*(_QWORD*)(a1 + 16), -1),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  GameHr_1562680(*(_QWORD*)(a1 + 16), (unsigned int*)"Out",
                 0x1.0000000000000p+0f),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  v28 = *(__int64**)(a1 + 16);
  v29 = LayoutAccessor_15638b0(v28, "Out", 1),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  v30 = LayoutAccessor_15636c0((__int64)v28, (__int64)"Out", 0, v29),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  v31 = (__int64*)game_hub_ProgressEventView_instance__ptr[0];
  v32 = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    v30 = LayoutAccessor_155ea30((__int64*)(v32 + 168)),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
    if ((v30 & 1) != 0) {
      LODWORD(v32) = 0x10000;
    }
    else {
      LODWORD(v32) = 0;
    }
  }
  v33 = *(_DWORD*)(a1 + 5856) & 0xFFFEFFFF | v32;
  *(_DWORD*)(a1 + 5856) = v33;
  v34 = game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ != 0) {
    v30 =
        LayoutAccessor_155ea30((__int64*)(game_gameui_Footer_instance_ + 168)),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
    v33 = *(_DWORD*)(a1 + 5856);
  }
  v35 = v33 & 0xFFFDFFFF;
  if (((v34 != 0) & v30) != 0) {
    v36 = 0x20000;
  }
  else {
    v36 = 0;
  }
  *(_DWORD*)(a1 + 5856) = v35 | v36;
  v37 = GameData_2265728;
  v38 = *(_QWORD*)(a1 + 24);
  v54[0] = *(_QWORD*)(a1 + 16);
  v54[1] = v38;
  if (v38 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 16), 1u,
                              memory_order_relaxed);
    game_199d2e0(v37, v54),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
    std___1___shared_weak_count___release_weak(v38),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  else {
    game_199d2e0(GameData_2265728, v54),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  v39 = *(_QWORD*)(a1 + 24);
  v52_.v52 = *(_QWORD*)(a1 + 16);
  v52_.v53 = v39;
  if (v39 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 16), 1u,
                              memory_order_relaxed);
  }
  game_19a0960(a1 + 32, &v52_.v52),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v52_.v53 != 0) {
    std___1___shared_weak_count___release_weak(v52_.v53),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  LayoutAccessor_1560070((void*)(&v50_.v50), *(__int64**)(a1 + 16),
                         "L_Command"),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  v40 = ui_LayoutAccessor_GetPaneTranslate(*(__int64**)(a1 + 16), "N_Command"),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  v58_.v58[0] = __PAIR64__(v41, LODWORD(v40));
  LODWORD(v58_.v58[1]) = v42;
  GameHr_a07960(a1 + 5736, &v50_.v50, (int*)v58_.v58),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v50_.v51 != 0) {
    std___1___shared_weak_count___release_weak(v50_.v51),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  v43 = *(__int64**)(a1 + 16);
  v58_.v58[0] = 0;
  LODWORD(v58_.v58[1]) = 0;
  ui_LayoutAccessor_SetPaneTranslate(v43, "N_Command", (__int64)v58_.v58),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  LayoutAccessor_1560070((void*)(&v48_.v48), *(__int64**)(a1 + 16),
                         "L_MiniMap"),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  GameRoutine_175b180(a1 + 5800, &v48_.v48),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v48_.v49 != 0) {
    std___1___shared_weak_count___release_weak(v48_.v49),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  v44 = game_GameGlobalData_unknown_;
  if (game_GameGlobalData_unknown_ != 0) {
    v44 = *(_BYTE*)game_GameGlobalData_unknown_;
  }
  *(_BYTE*)(v1 + 1742) = v44 & 1;
  v45 = *v31;
  if (*v31 != 0) {
    GameHr_17b8bd0(*v31),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w"));
    v46 = *(_QWORD*)(v45 + 8);
    if (v46 != 0) {
      while (1) {
        if (*(_BYTE*)v46 == 2) {
          if (*(_DWORD*)(v46 + 32) == 3) {
            *(_QWORD*)(v45 + 16) = v46;
            *(_WORD*)(v45 + 136) &= ~0x80u;
            return ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 16),
                                                    "L_Corps", 0);
          }
        }
        else if (*(_BYTE*)v46 == 0) {
          return ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 16),
                                                  "L_Corps", 0);
        }
        v46 += 64;
      }
    }
  }
  return ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 16), "L_Corps", 0);
}

__int64 game_17bea50(__int64* a1, __int64 a2, __int64 a3, const char* a4)
{

#pragma clang fp contract(off)
  const char* v5;
  const char* v8;
  const char* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  int v13;
  int v14;
  char v15;
  const char* v16;
  float v17;
  float v18;
  const char* v19;
  float v20;
  const char* v21;
  float v23;
  _DWORD v24[2];
  float v25;

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w"));
  v5 = (const char*)(a2 + 1);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v8 = *(const char**)(a2 + 16);
  }
  else {
    v8 = (const char*)(a2 + 1);
  }
  LayoutAccessor_1562060(a1, v8, a4),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((*(_BYTE*)a2 & 1) != 0) {
    v9 = *(const char**)(a2 + 16);
  }
  else {
    v9 = (const char*)(a2 + 1);
  }
  v10 = ui_LayoutAccessor_FindTextBox(a1, v9),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v10 != 0) {
    v11 = v10;
    v12 = (_QWORD*)ui_LayoutAccessor_FindTextBox(a1, v9),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v12 != nullptr) {
      GameRoutine_190a0c0(&v25, (__int64)v24, &v23, v12, v12[27]),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w"));
      v13 = v24[0];
      v14 = v24[1];
    }
    else {
      v13 = 0;
      v14 = 0;
    }
    v15 = *(_BYTE*)(v11 + 88);
    *(_DWORD*)(v11 + 80) = v13;
    *(_DWORD*)(v11 + 84) = v14;
    *(_BYTE*)(v11 + 88) = v15 | 0x10;
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    v16 = *(const char**)(a3 + 16);
  }
  else {
    v16 = (const char*)(a3 + 1);
  }
  ui_LayoutAccessor_GetPaneSize(a1, v16),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w"));
  v18 = v17;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v19 = *(const char**)(a2 + 16);
  }
  else {
    v19 = v5;
  }
  v20 = ui_LayoutAccessor_GetPaneSize(a1, v19),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((*(_BYTE*)a3 & 1) != 0) {
    v21 = *(const char**)(a3 + 16);
  }
  else {
    v21 = (const char*)(a3 + 1);
  }
  return ui_LayoutAccessor_SetPaneSize((__int64)a1, v21, v20, v18);
}

void game_17bed50(__int64* a1, __int16* a2)
{

#pragma clang fp contract(off)
  const char* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  _BOOL4 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  const char* v14;
  const char* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  int v19;
  int v20;
  char v21;
  float v22;
  float v23;
  const char* v24;
  float v25;
  __int64 v26;
  _DWORD v27[3];
  struct {
    __int64 v28[2];
    const char* v29;
  } v28_;
  float v30;
  _DWORD v31[2];
  float v32;

  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w"));
  game_1604c70((void*)(v28_.v28), *a2, a2[1], a2[2]),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v28_.v28[0] & 1) != 0) {
    v4 = v28_.v29;
  }
  else {
    v4 = (char*)v28_.v28 + 1;
  }
  if (v4 != nullptr) {
    v5 = ui_LayoutAccessor_FindTextBox(a1, "T_Date"),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, (__int64)v4, 0),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  if ((v28_.v28[0] & 1) != 0 && v28_.v29 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  (__int64)v28_.v29),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v7 = a2[2];
  LOBYTE(v28_.v28[0]) = 12;
  strcpy((char*)v28_.v28 + 1, "T_Week");
  v8 = a2[1];
  strcpy((char*)v27, "BgWeek");
  v9 = v8 < 3;
  if (v8 < 3) {
    v8 += 12;
  }
  v10 = *a2 - v9;
  v11 = v10 + 4502;
  v12 = v10 + 4505;
  if (v11 >= 0) {
    v12 = v11;
  }
  v13 =
      (v11 + v7 + (v12 >> 2) + v11 / -100 + v11 / 400 + (13 * v8 + 8) / 5) % 7;
  if (v13 < 0) {
    v14 = nullptr;
  }
  else {
    v14 = GameData_20d8a70[(unsigned __int8)v13];
  }
  LayoutAccessor_1562060(a1, (const char*)v28_.v28 + 1, v14),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v28_.v28[0] & 1) != 0) {
    v15 = v28_.v29;
  }
  else {
    v15 = (char*)v28_.v28 + 1;
  }
  v16 = ui_LayoutAccessor_FindTextBox(a1, v15),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v16 != 0) {
    v17 = v16;
    v18 = (_QWORD*)ui_LayoutAccessor_FindTextBox(a1, v15),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v18 != nullptr) {
      GameRoutine_190a0c0(&v32, (__int64)v31, &v30, v18, v18[27]),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w"));
      v19 = v31[0];
      v20 = v31[1];
    }
    else {
      v19 = 0;
      v20 = 0;
    }
    v21 = *(_BYTE*)(v17 + 88);
    *(_DWORD*)(v17 + 80) = v19;
    *(_DWORD*)(v17 + 84) = v20;
    *(_BYTE*)(v17 + 88) = v21 | 0x10;
  }
  ui_LayoutAccessor_GetPaneSize(a1, (const char*)v27),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w"));
  v23 = v22;
  if ((v28_.v28[0] & 1) != 0) {
    v24 = v28_.v29;
  }
  else {
    v24 = (char*)v28_.v28 + 1;
  }
  v25 = ui_LayoutAccessor_GetPaneSize(a1, v24),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w"));
  ui_LayoutAccessor_SetPaneSize((__int64)a1, (const char*)v27, v25, v23),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v28_.v28[0] & 1) != 0 && v28_.v29 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  (__int64)v28_.v29),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w"));
  }
}

void game_17bf070(__int64* a1, __int16* a2)
{

#pragma clang fp contract(off)
  int v4;
  const char* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  _BOOL4 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  const char* v15;
  const char* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  int v20;
  int v21;
  char v22;
  float v23;
  float v24;
  const char* v25;
  float v26;
  __int64 v27;
  _DWORD v28[3];
  struct {
    __int64 v29[2];
    const char* v30;
  } v29_;
  float v31;
  _DWORD v32[2];
  float v33;

  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
  game_1604880((void*)(v29_.v29), a2[1], a2[2]),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
  v4 = v29_.v29[0] & 1;
  if ((v29_.v29[0] & 1) != 0) {
    v5 = v29_.v30;
  }
  else {
    v5 = (char*)v29_.v29 + 1;
  }
  if (v5 != nullptr) {
    v6 = ui_LayoutAccessor_FindTextBox(a1, "T_Date"),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v6 != 0) {
      GameRoutine_156c5d0(v6, (__int64)v5, 0),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
      v4 = v29_.v29[0] & 1;
    }
  }
  if (v4 != 0 && v29_.v30 != nullptr) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  (__int64)v29_.v30),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v8 = a2[2];
  LOBYTE(v29_.v29[0]) = 12;
  strcpy((char*)v29_.v29 + 1, "T_Week");
  v9 = a2[1];
  strcpy((char*)v28, "BgWeek");
  v10 = v9 < 3;
  if (v9 < 3) {
    v9 += 12;
  }
  v11 = *a2 - v10;
  v12 = v11 + 4502;
  v13 = v11 + 4505;
  if (v12 >= 0) {
    v13 = v12;
  }
  v14 =
      (v12 + v8 + (v13 >> 2) + v12 / -100 + v12 / 400 + (13 * v9 + 8) / 5) % 7;
  if (v14 < 0) {
    v15 = nullptr;
  }
  else {
    v15 = GameData_20d8a70[(unsigned __int8)v14];
  }
  LayoutAccessor_1562060(a1, (const char*)v29_.v29 + 1, v15),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v29_.v29[0] & 1) != 0) {
    v16 = v29_.v30;
  }
  else {
    v16 = (char*)v29_.v29 + 1;
  }
  v17 = ui_LayoutAccessor_FindTextBox(a1, v16),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v17 != 0) {
    v18 = v17;
    v19 = (_QWORD*)ui_LayoutAccessor_FindTextBox(a1, v16),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v19 != nullptr) {
      GameRoutine_190a0c0(&v33, (__int64)v32, &v31, v19, v19[27]),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
      v20 = v32[0];
      v21 = v32[1];
    }
    else {
      v20 = 0;
      v21 = 0;
    }
    v22 = *(_BYTE*)(v18 + 88);
    *(_DWORD*)(v18 + 80) = v20;
    *(_DWORD*)(v18 + 84) = v21;
    *(_BYTE*)(v18 + 88) = v22 | 0x10;
  }
  ui_LayoutAccessor_GetPaneSize(a1, (const char*)v28),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
  v24 = v23;
  if ((v29_.v29[0] & 1) != 0) {
    v25 = v29_.v30;
  }
  else {
    v25 = (char*)v29_.v29 + 1;
  }
  v26 = ui_LayoutAccessor_GetPaneSize(a1, v25),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
  ui_LayoutAccessor_SetPaneSize((__int64)a1, (const char*)v28, v26, v24),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v29_.v29[0] & 1) != 0 && v29_.v30 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  (__int64)v29_.v30),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
  }
}

void game_17bf390(__int64* a1, __int16* a2)
{

#pragma clang fp contract(off)
  bool v4;
  bool v5;
  bool v6;
  _BOOL4 v7;
  int v10;
  const char* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  const char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  int v20;
  const char* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  const char* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  _BOOL4 v30;
  int v31;
  int v32;
  int v33;
  int v34;
  const char* v35;
  const char* v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  int v40;
  int v41;
  char v42;
  float v43;
  float v44;
  const char* v45;
  float v46;
  __int64 v47;
  _DWORD v48[3];
  struct {
    __int64 v49[2];
    const char* v50;
  } v49_;
  float v51;
  _DWORD v52[2];
  float v53;

  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((unsigned __int8)GameData_21759e0 > 0x6Au) {
    if ((unsigned __int8)GameData_21759e0 == 107) {
      if (BYTE1(GameData_21759e0) != 111 || BYTE2(GameData_21759e0) != 0) {
        goto LABEL_40;
      }
    }
    else {
      if ((unsigned __int8)GameData_21759e0 != 122 ||
          BYTE1(GameData_21759e0) != 104 || BYTE2(GameData_21759e0) != 45) {
        goto LABEL_40;
      }
      v5 = BYTE3(GameData_21759e0) == 72 && BYTE4(GameData_21759e0) == 97;
      v6 = v5 && BYTE5(GameData_21759e0) == 110;
      v7 = v6;
      if (!v6 || BYTE6(GameData_21759e0) != 116 ||
          HIBYTE(GameData_21759e0) != 0) {
        if (BYTE6(GameData_21759e0) != 115) {
          v7 = false;
        }
        if (!v7 || HIBYTE(GameData_21759e0) != 0) {
          goto LABEL_40;
        }
      }
    }
  }
  else if ((unsigned __int8)GameData_21759e0 == 101) {
    if (BYTE1(GameData_21759e0) != 110 || BYTE2(GameData_21759e0) != 45 ||
        BYTE3(GameData_21759e0) != 85) {
      goto LABEL_40;
    }
    if (BYTE4(GameData_21759e0) != 83 || BYTE5(GameData_21759e0) != 0) {
      goto LABEL_40;
    }
  }
  else if ((unsigned __int8)GameData_21759e0 != 106 ||
           (BYTE1(GameData_21759e0) == 97 ? (v4 = BYTE2(GameData_21759e0) == 0)
                                          : (v4 = false),
            !v4)) {
  LABEL_40:
    game_16051a0((void*)(v49_.v49), (unsigned int)a2[2]),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
    v10 = v49_.v49[0] & 1;
    if ((v49_.v49[0] & 1) != 0) {
      v11 = v49_.v50;
    }
    else {
      v11 = (char*)v49_.v49 + 1;
    }
    if (v11 != nullptr) {
      v12 = ui_LayoutAccessor_FindTextBox(a1, "T_Num00"),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v12 != 0) {
        GameRoutine_156c5d0(v12, (__int64)v11, 0),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
        v10 = v49_.v49[0] & 1;
      }
    }
    if (v10 != 0 && v49_.v50 != nullptr) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v49_.v50),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    game_16050d0((void*)(v49_.v49), (unsigned int)a2[1]),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
    v14 = v49_.v49[0] & 1;
    if ((v49_.v49[0] & 1) != 0) {
      v15 = v49_.v50;
    }
    else {
      v15 = (char*)v49_.v49 + 1;
    }
    if (v15 != nullptr) {
      v16 = ui_LayoutAccessor_FindTextBox(a1, "T_Num01"),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v16 != 0) {
        GameRoutine_156c5d0(v16, (__int64)v15, 0),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
        v14 = v49_.v49[0] & 1;
      }
    }
    if (v14 != 0 && v49_.v50 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v49_.v50),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v18 = "EUen";
    goto LABEL_91;
  }
  game_16050d0((void*)(v49_.v49), (unsigned int)a2[1]),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
  v20 = v49_.v49[0] & 1;
  if ((v49_.v49[0] & 1) != 0) {
    v21 = v49_.v50;
  }
  else {
    v21 = (char*)v49_.v49 + 1;
  }
  if (v21 != nullptr) {
    v22 = ui_LayoutAccessor_FindTextBox(a1, "T_Num00"),
    v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v22 != 0) {
      GameRoutine_156c5d0(v22, (__int64)v21, 0),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
      v20 = v49_.v49[0] & 1;
    }
  }
  if (v20 != 0 && v49_.v50 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  (__int64)v49_.v50),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  game_16051a0((void*)(v49_.v49), (unsigned int)a2[2]),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
  v24 = v49_.v49[0] & 1;
  if ((v49_.v49[0] & 1) != 0) {
    v25 = v49_.v50;
  }
  else {
    v25 = (char*)v49_.v49 + 1;
  }
  if (v25 != nullptr) {
    v26 = ui_LayoutAccessor_FindTextBox(a1, "T_Num01"),
    v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v26 != 0) {
      GameRoutine_156c5d0(v26, (__int64)v25, 0),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
      v24 = v49_.v49[0] & 1;
    }
  }
  if (v24 != 0 && v49_.v50 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  (__int64)v49_.v50),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v18 = "JPja";
LABEL_91:
  LayoutAccessor_1562cf0((__int64)a1, (unsigned int*)v18),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
  v28 = a2[2];
  LOBYTE(v49_.v49[0]) = 12;
  strcpy((char*)v49_.v49 + 1, "T_Week");
  v29 = a2[1];
  strcpy((char*)v48, "BgWeek");
  v30 = v29 < 3;
  if (v29 < 3) {
    v29 += 12;
  }
  v31 = *a2 - v30;
  v32 = v31 + 4502;
  v33 = v31 + 4505;
  if (v32 >= 0) {
    v33 = v32;
  }
  v34 = (v32 + v28 + (v33 >> 2) + v32 / -100 + v32 / 400 + (13 * v29 + 8) / 5) %
        7;
  if (v34 < 0) {
    v35 = nullptr;
  }
  else {
    v35 = GameData_20d8a70[(unsigned __int8)v34];
  }
  LayoutAccessor_1562060(a1, (const char*)v49_.v49 + 1, v35),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v49_.v49[0] & 1) != 0) {
    v36 = v49_.v50;
  }
  else {
    v36 = (char*)v49_.v49 + 1;
  }
  v37 = ui_LayoutAccessor_FindTextBox(a1, v36),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v37 != 0) {
    v38 = v37;
    v39 = (_QWORD*)ui_LayoutAccessor_FindTextBox(a1, v36),
    v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v39 != nullptr) {
      GameRoutine_190a0c0(&v53, (__int64)v52, &v51, v39, v39[27]),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
      v40 = v52[0];
      v41 = v52[1];
    }
    else {
      v40 = 0;
      v41 = 0;
    }
    v42 = *(_BYTE*)(v38 + 88);
    *(_DWORD*)(v38 + 80) = v40;
    *(_DWORD*)(v38 + 84) = v41;
    *(_BYTE*)(v38 + 88) = v42 | 0x10;
  }
  ui_LayoutAccessor_GetPaneSize(a1, (const char*)v48),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
  v44 = v43;
  if ((v49_.v49[0] & 1) != 0) {
    v45 = v49_.v50;
  }
  else {
    v45 = (char*)v49_.v49 + 1;
  }
  v46 = ui_LayoutAccessor_GetPaneSize(a1, v45),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
  ui_LayoutAccessor_SetPaneSize((__int64)a1, (const char*)v48, v46, v44),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v49_.v49[0] & 1) != 0 && v49_.v50 != nullptr) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                                  (__int64)v49_.v50),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s1", "=w"));
  }
}

void game_17bf980(__int64* a1, __int16* a2)
{

#pragma clang fp contract(off)
  const char* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  _BOOL4 v9;
  const char* v10;
  const char* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  int v15;
  int v16;
  char v17;
  float v18;
  float v19;
  const char* v20;
  float v21;
  __int64 v22;
  _DWORD v23[3];
  struct {
    __int64 v24[2];
    const char* v25;
  } v24_;
  float v26;
  _DWORD v27[2];
  float v28;

  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w"));
  game_1604c70((void*)(v24_.v24), *a2, a2[1], a2[2]),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v24_.v24[0] & 1) != 0) {
    v4 = v24_.v25;
  }
  else {
    v4 = (char*)v24_.v24 + 1;
  }
  if (v4 != nullptr) {
    v5 = ui_LayoutAccessor_FindTextBox(a1, "T_Date"),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, (__int64)v4, 0),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  if ((v24_.v24[0] & 1) != 0 && v24_.v25 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  (__int64)v24_.v25),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v7 = a2[2];
  LOBYTE(v24_.v24[0]) = 12;
  strcpy((char*)v24_.v24 + 1, "T_Week");
  v8 = a2[1];
  strcpy((char*)v23, "BgWeek");
  v9 = v8 < 3;
  if (v8 < 3) {
    v8 += 12;
  }
  if ((*a2 - v9 + v7 + (*a2 - v9) / 4 + (*a2 - v9) / -100 + (*a2 - v9) / 400 +
       (13 * v8 + 8) / 5) %
          7 <
      0) {
    v10 = nullptr;
  }
  else {
    v10 = GameData_20d8a70[(
        unsigned __int8)((*a2 - v9 + v7 + (*a2 - v9) / 4 + (*a2 - v9) / -100 +
                          (*a2 - v9) / 400 + (13 * v8 + 8) / 5) %
                         7)];
  }
  LayoutAccessor_1562060(a1, (const char*)v24_.v24 + 1, v10),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v24_.v24[0] & 1) != 0) {
    v11 = v24_.v25;
  }
  else {
    v11 = (char*)v24_.v24 + 1;
  }
  v12 = ui_LayoutAccessor_FindTextBox(a1, v11),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v12 != 0) {
    v13 = v12;
    v14 = (_QWORD*)ui_LayoutAccessor_FindTextBox(a1, v11),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v14 != nullptr) {
      GameRoutine_190a0c0(&v28, (__int64)v27, &v26, v14, v14[27]),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w"));
      v15 = v27[0];
      v16 = v27[1];
    }
    else {
      v15 = 0;
      v16 = 0;
    }
    v17 = *(_BYTE*)(v13 + 88);
    *(_DWORD*)(v13 + 80) = v15;
    *(_DWORD*)(v13 + 84) = v16;
    *(_BYTE*)(v13 + 88) = v17 | 0x10;
  }
  ui_LayoutAccessor_GetPaneSize(a1, (const char*)v23),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w"));
  v19 = v18;
  if ((v24_.v24[0] & 1) != 0) {
    v20 = v24_.v25;
  }
  else {
    v20 = (char*)v24_.v24 + 1;
  }
  v21 = ui_LayoutAccessor_GetPaneSize(a1, v20),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w"));
  ui_LayoutAccessor_SetPaneSize((__int64)a1, (const char*)v23, v21, v19),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v24_.v24[0] & 1) != 0 && v24_.v25 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  (__int64)v24_.v25),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w"));
  }
}

__int64 game_17bfc90(__int64* a1, __int16* a2)
{
  int v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  struct {
    __int64 v9[2];
    char* v10;
  } v9_;

  game_17bf980(a1, a2);
  game_1605540((void*)(v9_.v9), (unsigned int)a2[3], a2[4]);
  v4 = v9_.v9[0] & 1;
  if ((v9_.v9[0] & 1) != 0) {
    v5 = v9_.v10;
  }
  else {
    v5 = (char*)v9_.v9 + 1;
  }
  if (v5 != nullptr) {
    v6 = ui_LayoutAccessor_FindTextBox(a1, "T_Time");
    if (v6 != 0) {
      GameRoutine_156c5d0(v6, (__int64)v5, 0);
      v4 = v9_.v9[0] & 1;
    }
  }
  if (v4 != 0 && v9_.v10 != nullptr) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  (__int64)v9_.v10);
  }
  result = ui_LayoutAccessor_FindAlignment(a1, "A_Date");
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

__int64 game_17bfd70(__int64 result, __int16* a2, char a3)
{
  int v3;
  __int64* v4;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  int v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int64 v26[2];
    char* v27;
  } v26_;

  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v4 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_11;
  }
  v7 = *v4;
  if (*v4 != 0) {
    v3 = *(unsigned __int8*)(v7 + 24);
    v8 = v7 + 152;
    if (v3 == 0) {
      v8 = 0;
    }
    v9 = v8 != v4[2];
  }
  else {
    v9 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v11 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v11);
    if (v9) {
      goto LABEL_11;
    }
  LABEL_15:
    if ((v3 & 1) == 0) {
      return result;
    }
    goto LABEL_16;
  }
  if (!v9) {
    goto LABEL_15;
  }
LABEL_11:
  v10 = v4[1];
  if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
    return result;
  }
LABEL_16:
  v12 = *a2;
  if (a2[1] * v12 * a2[2] == 0) {
    return result;
  }
  v13 = game_util_Format("%d", v12);
  v14 = strlen(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17,
                                                16, 0);
    v26_.v26[1] = v15;
    v26_.v27 = v16;
    v26_.v26[0] = v17 | 1;
  }
  else {
    LOBYTE(v26_.v26[0]) = 2 * v14;
    v16 = (char*)v26_.v26 + 1;
    if (v14 == 0) {
      goto LABEL_26;
    }
  }
  memmove((__int64)v16, (__int64)v13, v15);
LABEL_26:
  v16[v15] = 0;
  v18 = v26_.v26[0] & 1;
  if ((v26_.v26[0] & 1) != 0) {
    v19 = v26_.v27;
  }
  else {
    v19 = (char*)v26_.v26 + 1;
  }
  if (v19 != nullptr) {
    v20 = ui_LayoutAccessor_FindTextBox(v4, "T_Year");
    if (v20 != 0) {
      GameRoutine_156c5d0(v20, (__int64)v19, 0);
      v18 = v26_.v26[0] & 1;
    }
  }
  if (v18 != 0 && v26_.v27 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  (__int64)v26_.v27);
  }
  game_17bf390(v4, a2);
  if ((a3 & 1) != 0 ||
      game_gmap_GmapClock_instance_ != 0 &&
          *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                  *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                  *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
              0) {
    GameHr_1562680((__int64)v4, (unsigned int*)"Num_On", 0x1.0000000000000p+0f);
    game_1605540((void*)(v26_.v26), (unsigned int)a2[3], a2[4]);
    v22 = v26_.v26[0] & 1;
    if ((v26_.v26[0] & 1) != 0) {
      v23 = v26_.v27;
    }
    else {
      v23 = (char*)v26_.v26 + 1;
    }
    if (v23 != nullptr) {
      v24 = ui_LayoutAccessor_FindTextBox(v4, "T_Time");
      if (v24 != 0) {
        GameRoutine_156c5d0(v24, (__int64)v23, 0);
        v22 = v26_.v26[0] & 1;
      }
    }
    if (v22 != 0 && v26_.v27 != nullptr) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, (__int64)v26_.v27);
    }
  }
  else {
    GameHr_1562680((__int64)v4, (unsigned int*)"Time_Off",
                   0x1.0000000000000p+0f);
  }
  result = ui_LayoutAccessor_FindAlignment(v4, "A_Date");
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

__int64 game_17c0070(__int64 result, int a2, __int16* a3)
{
  int v3;
  __int64* v4;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  __int16 v16;
  unsigned int v17;
  unsigned int v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  int v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  struct {
    __int64 v32[2];
    char* v33;
  } v32_;
  struct {
    __int16 v34[3];
    __int16 v35;
    __int16 v36;
    __int16 v37;
  } v34_;

  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v4 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_11;
  }
  v7 = *v4;
  if (*v4 != 0) {
    v3 = *(unsigned __int8*)(v7 + 24);
    v8 = v7 + 152;
    if (v3 == 0) {
      v8 = 0;
    }
    v9 = v8 != v4[2];
  }
  else {
    v9 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v11 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v11);
    if (v9) {
      goto LABEL_11;
    }
  LABEL_15:
    if ((v3 & 1) == 0) {
      return result;
    }
    goto LABEL_16;
  }
  if (!v9) {
    goto LABEL_15;
  }
LABEL_11:
  v10 = v4[1];
  if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
    return result;
  }
LABEL_16:
  v12 = *a3;
  v13 = a3[2];
  if (a3[1] * v12 * v13 == 0) {
    return result;
  }
  LOWORD(v14) = a3[3];
  LOWORD(v15) = a3[4];
  v34_.v34[1] = a3[1];
  v16 = a3[5];
  v34_.v34[0] = v12;
  v34_.v34[2] = v13;
  v34_.v35 = v14;
  v34_.v36 = v15;
  v34_.v37 = v16;
  if (a2 < 4320) {
    if (a2 < 360) {
      goto LABEL_21;
    }
  }
  else {
    v17 = 5 * (((26215 * (__int16)v14) >> 18) +
               ((unsigned int)(26215 * (__int16)v14) >> 31));
    v14 = 10 * (((26215 * (__int16)v14) >> 18) +
                ((unsigned int)(26215 * (__int16)v14) >> 31));
    v34_.v35 = 2 * v17;
  }
  v18 = 5 * (((26215 * (__int16)v15) >> 18) +
             ((unsigned int)(26215 * (__int16)v15) >> 31));
  v15 = 10 * (((26215 * (__int16)v15) >> 18) +
              ((unsigned int)(26215 * (__int16)v15) >> 31));
  v34_.v36 = 2 * v18;
LABEL_21:
  ui_LayoutAccessor_SetPaneVisible((__int64)v4, "A_Txt", 1);
  v19 = game_util_Format("%d", v12);
  v20 = strlen(v19);
  if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v21 = v20;
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v20 | 7) + 1;
    }
    v22 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v23,
                                                16, 0);
    v32_.v32[1] = v21;
    v32_.v33 = v22;
    v32_.v32[0] = v23 | 1;
  }
  else {
    LOBYTE(v32_.v32[0]) = 2 * v20;
    v22 = (char*)v32_.v32 + 1;
    if (v20 == 0) {
      goto LABEL_30;
    }
  }
  memmove((__int64)v22, (__int64)v19, v21);
LABEL_30:
  v22[v21] = 0;
  v24 = v32_.v32[0] & 1;
  if ((v32_.v32[0] & 1) != 0) {
    v25 = v32_.v33;
  }
  else {
    v25 = (char*)v32_.v32 + 1;
  }
  if (v25 != nullptr) {
    v26 = ui_LayoutAccessor_FindTextBox(v4, "T_Year");
    if (v26 != 0) {
      GameRoutine_156c5d0(v26, (__int64)v25, 0);
      v24 = v32_.v32[0] & 1;
    }
  }
  if (v24 != 0 && v32_.v33 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  (__int64)v32_.v33);
  }
  game_17bf390(v4, v34_.v34);
  game_1605540((void*)(v32_.v32), (unsigned int)(__int16)v14, (__int16)v15);
  v28 = v32_.v32[0] & 1;
  if ((v32_.v32[0] & 1) != 0) {
    v29 = v32_.v33;
  }
  else {
    v29 = (char*)v32_.v32 + 1;
  }
  if (v29 != nullptr) {
    v30 = ui_LayoutAccessor_FindTextBox(v4, "T_Time");
    if (v30 != 0) {
      GameRoutine_156c5d0(v30, (__int64)v29, 0);
      v28 = v32_.v32[0] & 1;
    }
  }
  if (v28 != 0 && v32_.v33 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v31,
                                  (__int64)v32_.v33);
  }
  result = ui_LayoutAccessor_FindAlignment(v4, "A_Date");
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

__int64 game_17c05e0(__int64 result, __int16* a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;

  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v3 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_11;
  }
  v5 = *v3;
  if (*v3 != 0) {
    v2 = *(unsigned __int8*)(v5 + 24);
    v6 = v5 + 152;
    if (v2 == 0) {
      v6 = 0;
    }
    v7 = v6 != v3[2];
  }
  else {
    v7 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7) {
    LABEL_11:
      v8 = v3[1];
      if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
        return result;
      }
      goto LABEL_16;
    }
  }
  else {
    v9 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v9);
    if (v7) {
      goto LABEL_11;
    }
  }
  if ((v2 & 1) == 0) {
    return result;
  }
LABEL_16:
  if (a2[1] * *a2 * a2[2] != 0) {
    v10 = (float)a2[4] / 0x1.e000000000000p+5f;
    v11 = LayoutAccessor_15638b0(v3, "Rotate", 1);
    v12 = v11 *
          (float)((float)((float)(v10 + (float)a2[3]) * 0x1.e000000000000p+5f) /
                  0x1.6800000000000p+10f);
    if (v12 >= v11) {
      v12 = fmodf(v12, v11);
    }
    return LayoutAccessor_15636c0((__int64)v3, (__int64)"Rotate", 0, v12);
  }
  return result;
}

void game_17c0d30(__int64* a1, __int64 a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  _BOOL4 v18;
  int v19;
  int v20;
  int v21;
  int v22;
  const char* v23;
  const char* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  int v28;
  int v29;
  char v30;
  float v31;
  float v32;
  const char* v33;
  float v34;
  const char* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  const char* v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _BYTE* v51;
  __int64 v52;
  const char* v53;
  struct {
    unsigned __int64 v54[2];
    const char* v55;
  } v54_;
  __int64 v56[3];
  float v57;
  _DWORD v58[2];
  float v59;

  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a1[2] == 0) {
    goto LABEL_71;
  }
  v5 = a1[1];
  if (v5 == 0) {
    goto LABEL_71;
  }
  v6 = std___1___shared_weak_count_lock(v5),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v6 == 0) {
    goto LABEL_11;
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
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9) {
    LABEL_11:
      v10 = a1[1];
      if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
        goto LABEL_71;
      }
      goto LABEL_16;
    }
  }
  else {
    v11 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak(v11),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v9) {
      goto LABEL_11;
    }
  }
  if ((v2 & 1) == 0) {
    goto LABEL_71;
  }
LABEL_16:
  if (*(__int16*)(a2 + 10) * *(__int16*)(a2 + 8) * *(__int16*)(a2 + 12) != 0) {
    ui_LayoutAccessor_SetPaneVisible((__int64)a1, "T_Time", 1),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    game_1604880((void*)(v56), *(__int16*)(a2 + 10), *(__int16*)(a2 + 12)),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    v12 = v56[0] & 1;
    if ((v56[0] & 1) != 0) {
      v13 = (char*)v56[2];
    }
    else {
      v13 = (char*)v56 + 1;
    }
    if (v13 != nullptr) {
      v14 = ui_LayoutAccessor_FindTextBox(a1, "T_Date"),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v14 != 0) {
        GameRoutine_156c5d0(v14, (__int64)v13, 0),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
        v12 = v56[0] & 1;
      }
    }
    if (v12 != 0 && v56[2] != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v56[2]),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v16 = *(__int16*)(a2 + 12);
    HIBYTE(v54_.v54[0]) = 0;
    LOBYTE(v56[0]) = 12;
    LOBYTE(v54_.v54[0]) = 12;
    strcpy((char*)v56 + 1, "T_Week");
    *(_WORD*)((char*)v54_.v54 + 5) = 27493;
    v17 = *(__int16*)(a2 + 10);
    *(_DWORD*)((char*)v54_.v54 + 1) = 1700226882;
    v18 = v17 < 3;
    if (v17 < 3) {
      v17 += 12;
    }
    v19 = *(__int16*)(a2 + 8) - v18;
    v20 = v19 + 4502;
    v21 = v19 + 4505;
    if (v20 >= 0) {
      v21 = v20;
    }
    v22 =
        (v20 + v16 + (v21 >> 2) + v20 / -100 + v20 / 400 + (13 * v17 + 8) / 5) %
        7;
    if (v22 < 0) {
      v23 = nullptr;
    }
    else {
      v23 = GameData_20d8a70[(unsigned __int8)v22];
    }
    LayoutAccessor_1562060(a1, (const char*)v56 + 1, v23),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((v56[0] & 1) != 0) {
      v24 = (const char*)v56[2];
    }
    else {
      v24 = (char*)v56 + 1;
    }
    v25 = ui_LayoutAccessor_FindTextBox(a1, v24),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v25 != 0) {
      v26 = v25;
      v27 = (_QWORD*)ui_LayoutAccessor_FindTextBox(a1, v24),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v27 != nullptr) {
        GameRoutine_190a0c0(&v59, (__int64)v58, &v57, v27, v27[27]),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
        v28 = v58[0];
        v29 = v58[1];
      }
      else {
        v28 = 0;
        v29 = 0;
      }
      v30 = *(_BYTE*)(v26 + 88);
      *(_DWORD*)(v26 + 80) = v28;
      *(_DWORD*)(v26 + 84) = v29;
      *(_BYTE*)(v26 + 88) = v30 | 0x10;
    }
    ui_LayoutAccessor_GetPaneSize(a1, (const char*)v54_.v54 + 1),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    v32 = v31;
    if ((v56[0] & 1) != 0) {
      v33 = (const char*)v56[2];
    }
    else {
      v33 = (char*)v56 + 1;
    }
    v34 = ui_LayoutAccessor_GetPaneSize(a1, v33),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((v54_.v54[0] & 1) != 0) {
      v35 = v54_.v55;
    }
    else {
      v35 = (char*)v54_.v54 + 1;
    }
    ui_LayoutAccessor_SetPaneSize((__int64)a1, v35, v34, v32),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((v54_.v54[0] & 1) != 0 && v54_.v55 != nullptr) {
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, (__int64)v54_.v55),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    if ((v56[0] & 1) != 0 && v56[2] != 0) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v56[2]),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    game_1605540((void*)(v56), (unsigned int)*(__int16*)(a2 + 14),
                 *(__int16*)(a2 + 16)),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    v38 = v56[0] & 1;
    if ((v56[0] & 1) != 0) {
      v39 = (char*)v56[2];
    }
    else {
      v39 = (char*)v56 + 1;
    }
    if (v39 != nullptr) {
      v40 = ui_LayoutAccessor_FindTextBox(a1, "T_Time"),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v40 != 0) {
        GameRoutine_156c5d0(v40, (__int64)v39, 0),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
        v38 = v56[0] & 1;
      }
    }
    if (v38 != 0 && v56[2] != 0) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v56[2]),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible((__int64)a1, "T_Time", 0),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
  }
LABEL_71:
  v42 = *(unsigned __int8*)(a2 + 56);
  v43 = *(_QWORD*)(a2 + 64);
  if ((v42 & 1) == 0) {
    v43 = v42 >> 1;
  }
  if (v43 != 0) {
    if ((v42 & 1) != 0) {
      v44 = *(const char**)(a2 + 72);
    }
    else {
      v44 = (const char*)(a2 + 57);
    }
    LayoutAccessor_1562060(a1, "T_Spot", v44),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    if (*(_BYTE*)(a2 + 80) != 0) {
      v45 = "IconSpot_Completed";
    }
    else {
      v45 = "IconSpot_Default";
    }
    GameHr_1562680((__int64)a1, (unsigned int*)v45, 0x1.0000000000000p+0f),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    v46 = ui_LayoutAccessor_FindAlignment(a1, "A_Date"),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v46 != 0) {
      Alignment_56b600(v46),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
      v47 = a1[1];
      if (v47 != 0) {
        v48 = std___1___shared_weak_count_lock(v47),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v48 != 0) {
          v49 = v48;
          if (*a1 != 0) {
            ControlCreator_13633c0(*a1),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak(v49),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
        }
      }
    }
  }
  else {
    LOBYTE(v56[0]) = 30;
    strcpy((char*)v56 + 1, "MID_Sys_Unknown");
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
        (unsigned int)(*(_DWORD*)(game_GameModeData_instance_ + 64) - 2) <= 3) {
      v54_.v54[1] = (unsigned __int64)&GameData_1adfa87;
      v54_.v54[0] = game_HashString((__int64)&GameData_1adfa87),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
      if (game_GameModeData_instance_ != 0 &&
          (v50 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48), v54_.v54)) != 0 &&
          *(_DWORD*)(v50 + 32) != 0) {
        v51 = (char*)&v56[2] + 6;
        qmemcpy(v56, "*MID_GmapMenu_Hellgate", 22);
      }
      else {
        v51 = (char*)&v56[1] + 6;
        LOBYTE(v56[0]) = 26;
        qmemcpy((char*)v56 + 1, "MID_Sys_Empty", 13);
      }
      *v51 = 0;
    }
    LayoutAccessor_1562060(a1, "T_Spot", (const char*)v56 + 1),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    GameHr_1562680((__int64)a1, (unsigned int*)"IconSpot_Default",
                   0x1.0000000000000p+0f),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((v56[0] & 1) != 0 && v56[2] != 0) {
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, v56[2]),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  if ((*(_BYTE*)(a2 + 24) & 1) != 0) {
    v53 = *(const char**)(a2 + 40);
  }
  else {
    v53 = (const char*)(a2 + 25);
  }
  LayoutAccessor_1562060(a1, "T_Txt", v53),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
}

__int64 game_17c13d0(__int64* a1, char a2)
{
  char* v3;
  __int64 result;
  __int64 v5;

  if ((a2 & 1) != 0) {
    v3 = "IconSpot_Completed";
  }
  else {
    v3 = "IconSpot_Default";
  }
  GameHr_1562680((__int64)a1, (unsigned int*)v3, 0x1.0000000000000p+0f);
  result = ui_LayoutAccessor_FindAlignment(a1, "A_Date");
  if (result != 0) {
    Alignment_56b600(result);
    result = a1[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v5 = result;
        result = *a1;
        if (*a1 != 0) {
          result = ControlCreator_13633c0(result);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return std___1___shared_weak_count___release_weak(v5);
        }
      }
    }
  }
  return result;
}

void game_17cdea0(__int64 a1)
{
  __int64 v2;
  struct {
    __int64 v3;
    __int64 v4;
  } v3_;

  if (*GameData_212d578[0] == 0) {
    *GameData_212d578[0] = a1;
    GameData_2265a00 = 1;
  }
  *(_DWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_BYTE*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 244) = 0;
  *(_QWORD*)(a1 + 236) = 0;
  *(_QWORD*)(a1 + 228) = 0;
  *(_QWORD*)(a1 + 220) = 0;
  *(_QWORD*)a1 = game_map_MapSkillInfo_vtable;
  *(_QWORD*)(a1 + 8) = GameData_20d91a0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = a1 + 72;
  *(_DWORD*)(a1 + 120) = 1065353216;
  GameRoutine_1366ac0((void*)(&v3_), (__int64)"Layout/Battle.arc",
                      (__int64)"Battle_SkillInfo");
  v2 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 24) = v3_.v3;
  *(_QWORD*)(a1 + 32) = v3_.v4;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
}

__int64 game_17e6dc0()
{
  nn_os_InitializeReaderWriterLock((__int64)&GameData_226b198);
  GameRoutine_2b0();
  GameData_226b1c8 = 0;
  GameData_226b1d0 = 0;
  GameData_226b1d8 = 0;
  GameData_226b1e0 = 0;
  GameData_226b1e8 = 0;
  GameData_226b1f0 = 0;
  return GameRoutine_2b0();
}

__attribute__((swiftcall)) void game_17e70c0(PSEUDO_X8 x8_, int a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  __int64 (**v5)();
  __int64 result;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
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
  _QWORD* v22;
  _QWORD* v23;
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
  _QWORD* v52;
  _QWORD* v53;
  _QWORD* v54;
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
  _QWORD* v65;
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
  __int64 v78;
  __int64 v79;
  struct {
    __int64 v80;
    __int64 v81;
  } v80_;

  if (a1 == (unsigned int)wld_Crc32(0, "Signal_FadeIn", 0xDu)) {
    v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    v4[1] = 0;
    v4[2] = 0;
    v4[4] = 0;
    v4[5] = 0;
    v4[6] = 0;
    *v4 = GameData_20dbd70;
    v5 = game_cutscene_Signal_FadeIn_vtable;
  LABEL_9:
    a2[1] = (__int64)v4;
    v4[3] = v5;
    result = (__int64)(v4 + 3);
  LABEL_10:
    *a2 = result;
    {
      result;
      return;
    }
  }
  if (a1 == (unsigned int)wld_Crc32(0, "Signal_FadeOut", 0xEu)) {
    v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    v4[1] = 0;
    v4[2] = 0;
    v4[4] = 0;
    v4[5] = 0;
    v4[6] = 0;
    *v4 = GameData_20dbe30;
    v5 = game_cutscene_Signal_FadeOut_vtable;
    goto LABEL_9;
  }
  if (a1 == (unsigned int)wld_Crc32(0, "Signal_Camera", 0xDu)) {
    v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
    v4[1] = 0;
    v4[2] = 0;
    v4[4] = 0;
    v4[5] = 0;
    v4[10] = 0;
    v4[11] = 0;
    v4[6] = 0;
    v4[7] = 0;
    v4[8] = 0;
    v4[9] = 0;
    *v4 = GameData_20dbed8;
    v5 = game_cutscene_Signal_Camera_vtable;
    goto LABEL_9;
  }
  if (a1 == (unsigned int)wld_Crc32(0, "Signal_Clock", 0xCu)) {
    v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    v4[1] = 0;
    v4[2] = 0;
    v4[4] = 0;
    v4[5] = 0;
    v4[6] = 0;
    *v4 = GameData_20dbf80;
    v5 = game_cutscene_Signal_Clock_vtable;
    goto LABEL_9;
  }
  if (a1 == (unsigned int)wld_Crc32(0, "Signal_Env", 0xAu)) {
    v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
    v7[1] = 0;
    v7[2] = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    v7[8] = 0;
    v7[9] = 0;
    v7[10] = 0;
    v7[11] = 0;
    v7[12] = 0;
    v7[13] = 0;
    a2[1] = (__int64)v7;
    *v7 = GameData_20dc028;
    v7[4] = game_cutscene_Signal_Env_vtable;
    result = (__int64)(v7 + 4);
    goto LABEL_10;
  }
  if (a1 == (unsigned int)wld_Crc32(0, "Signal_SlowBegin", 0x10u)) {
    v8 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    v8[1] = 0;
    v8[2] = 0;
    v8[4] = 0;
    v8[5] = 0;
    v8[6] = 0;
    a2[1] = (__int64)v8;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *v8 = GameData_20dc0d0;
    v8[3] = game_cutscene_Signal_SlowBegin_vtable;
    *a2 = (__int64)(v8 + 3);
    {
      GameRoutine_17e7e30((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_SlowEnd", 0xEu)) {
    GameRoutine_17e7e90((void*)(&v80_.v80));
    v9 = v80_.v80;
    v10 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v9;
    a2[1] = v10;
    {
      GameRoutine_17e7f00((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_GlobalWind", 0x11u)) {
    GameRoutine_17e7f60((void*)(&v80_.v80));
    v11 = v80_.v80;
    v12 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v11;
    a2[1] = v12;
    {
      GameRoutine_17e7fe0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Movie", 0xCu)) {
    GameRoutine_17e8040((void*)(&v80_.v80));
    v13 = v80_.v80;
    v14 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v13;
    a2[1] = v14;
    {
      GameRoutine_17e80b0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_MovieEnd", 0xFu)) {
    GameRoutine_17e8110((void*)(&v80_.v80));
    v15 = v80_.v80;
    v16 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v15;
    a2[1] = v16;
    {
      GameRoutine_17e8180((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_SceneShadow", 0x12u)) {
    v17 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    v17[1] = 0;
    v17[2] = 0;
    v17[4] = 0;
    v17[5] = 0;
    v17[6] = 0;
    a2[1] = (__int64)v17;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *v17 = GameData_20dc418;
    v17[3] = game_cutscene_Signal_SceneShadow_vtable;
    *a2 = (__int64)(v17 + 3);
    {
      GameRoutine_17e81e0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_PlayCharaAnim", 0x14u)) {
    GameRoutine_17e8240((void*)(&v80_.v80));
    v18 = v80_.v80;
    v19 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v18;
    a2[1] = v19;
    {
      GameRoutine_17e82b0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_PlayPropAnim", 0x13u)) {
    GameRoutine_17e8310((void*)(&v80_.v80));
    v20 = v80_.v80;
    v21 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v20;
    a2[1] = v21;
    {
      GameRoutine_17e8380((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_ShowChara", 0x10u)) {
    v22 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
    v22[1] = 0;
    v22[2] = 0;
    v22[5] = 0;
    v22[6] = 0;
    v22[7] = 0;
    v22[8] = 0;
    v22[9] = 0;
    v22[10] = 0;
    v22[11] = 0;
    v22[12] = 0;
    v22[13] = 0;
    a2[1] = (__int64)v22;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *v22 = GameData_20dc610;
    v22[4] = game_cutscene_Signal_ShowChara_vtable;
    *a2 = (__int64)(v22 + 4);
    {
      GameRoutine_17e83e0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_ShowProp", 0xFu)) {
    v23 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
    v23[1] = 0;
    v23[2] = 0;
    v23[5] = 0;
    v23[6] = 0;
    v23[7] = 0;
    v23[8] = 0;
    v23[9] = 0;
    v23[10] = 0;
    v23[11] = 0;
    v23[12] = 0;
    v23[13] = 0;
    a2[1] = (__int64)v23;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *v23 = GameData_20dc6b8;
    v23[4] = game_cutscene_Signal_ShowProp_vtable;
    *a2 = (__int64)(v23 + 4);
    {
      GameRoutine_17e8440((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_CharaCloth", 0x11u)) {
    GameRoutine_17e84a0((void*)(&v80_.v80));
    v24 = v80_.v80;
    v25 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v24;
    a2[1] = v25;
    {
      GameRoutine_17e8520((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_CharaWind", 0x10u)) {
    game_templates_17e8580((void*)(&v80_.v80));
    v26 = v80_.v80;
    v27 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v26;
    a2[1] = v27;
    {
      GameRoutine_17e8640((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Dissolve", 0xFu)) {
    game_templates_17e86a0((void*)(&v80_.v80));
    v28 = v80_.v80;
    v29 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v28;
    a2[1] = v29;
    {
      GameRoutine_17e8760((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Particle2", 0x10u)) {
    game_templates_17e87c0((void*)(&v80_.v80));
    v30 = v80_.v80;
    v31 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v30;
    a2[1] = v31;
    {
      GameRoutine_17e8860((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_ParticleMove", 0x13u)) {
    game_templates_17e88c0((void*)(&v80_.v80));
    v32 = v80_.v80;
    v33 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v32;
    a2[1] = v33;
    {
      GameRoutine_17e8980((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_MapEffect", 0x10u)) {
    GameRoutine_17e89e0((void*)(&v80_.v80));
    v34 = v80_.v80;
    v35 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v34;
    a2[1] = v35;
    {
      GameRoutine_17e8a60((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_DOF2", 0xBu)) {
    game_templates_17e8ac0((void*)(&v80_.v80));
    v36 = v80_.v80;
    v37 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v36;
    a2[1] = v37;
    {
      GameRoutine_17e8b70((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_RadialBlur", 0x11u)) {
    game_templates_17e8bd0((void*)(&v80_.v80));
    v38 = v80_.v80;
    v39 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v38;
    a2[1] = v39;
    {
      GameRoutine_17e8c80((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_ColorGrading", 0x13u)) {
    game_templates_17e8ce0((void*)(&v80_.v80));
    v40 = v80_.v80;
    v41 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v40;
    a2[1] = v41;
    {
      GameRoutine_17e8da0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_CustomGrad", 0x11u)) {
    game_templates_17e8e00((void*)(&v80_.v80));
    v42 = v80_.v80;
    v43 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v42;
    a2[1] = v43;
    {
      GameRoutine_17e8ed0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Fog", 0xAu)) {
    game_templates_17e8f30((void*)(&v80_.v80));
    v44 = v80_.v80;
    v45 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v44;
    a2[1] = v45;
    {
      GameRoutine_17e8fe0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Exposure", 0xFu)) {
    GameRoutine_17e9040((void*)(&v80_.v80));
    v46 = v80_.v80;
    v47 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v46;
    a2[1] = v47;
    {
      GameRoutine_17e90c0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Vignette", 0xFu)) {
    game_templates_17e9120((void*)(&v80_.v80));
    v48 = v80_.v80;
    v49 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v48;
    a2[1] = v49;
    {
      GameRoutine_17e91f0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Bloom", 0xCu)) {
    game_templates_17e9250((void*)(&v80_.v80));
    v50 = v80_.v80;
    v51 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v50;
    a2[1] = v51;
    {
      GameRoutine_17e9300((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_NegaPosi", 0xFu)) {
    v52 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
    v52[1] = 0;
    v52[2] = 0;
    v52[5] = 0;
    v52[6] = 0;
    v52[7] = 0;
    v52[8] = 0;
    v52[9] = 0;
    v52[10] = 0;
    v52[11] = 0;
    a2[1] = (__int64)v52;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *v52 = GameData_20dd090;
    v52[4] = game_cutscene_Signal_NegaPosi_vtable;
    *a2 = (__int64)(v52 + 4);
    {
      GameRoutine_17e9360((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_MotionBlur", 0x11u)) {
    v53 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
    v53[1] = 0;
    v53[2] = 0;
    v53[5] = 0;
    v53[6] = 0;
    v53[7] = 0;
    v53[8] = 0;
    v53[9] = 0;
    v53[10] = 0;
    v53[11] = 0;
    a2[1] = (__int64)v53;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *v53 = GameData_20dd138;
    v53[4] = game_cutscene_Signal_MotionBlur_vtable;
    *a2 = (__int64)(v53 + 4);
    {
      GameRoutine_17e93c0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_OtherSetting", 0x13u)) {
    v54 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    v54[1] = 0;
    v54[2] = 0;
    v54[4] = 0;
    v54[5] = 0;
    v54[6] = 0;
    a2[1] = (__int64)v54;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *v54 = GameData_20dd1e0;
    v54[3] = game_cutscene_Signal_OtherSetting_vtable;
    *a2 = (__int64)(v54 + 3);
    {
      GameRoutine_17e9420((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Sound", 0xCu)) {
    GameRoutine_17e9480((void*)(&v80_.v80));
    v55 = v80_.v80;
    v56 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v55;
    a2[1] = v56;
    {
      GameRoutine_17e94f0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Voice", 0xCu)) {
    GameRoutine_17e9550((void*)(&v80_.v80));
    v57 = v80_.v80;
    v58 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v57;
    a2[1] = v58;
    {
      GameRoutine_17e95c0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_LightMove", 0x10u)) {
    game_templates_17e9620((void*)(&v80_.v80));
    v59 = v80_.v80;
    v60 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v59;
    a2[1] = v60;
    {
      GameRoutine_17e96d0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_LightRange", 0x11u)) {
    GameRoutine_17e9730((void*)(&v80_.v80));
    v61 = v80_.v80;
    v62 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v61;
    a2[1] = v62;
    {
      GameRoutine_17e97f0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_LightShow", 0x10u)) {
    game_templates_17e9850((void*)(&v80_.v80));
    v63 = v80_.v80;
    v64 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v63;
    a2[1] = v64;
    {
      GameRoutine_17e98f0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Version", 0xEu)) {
    v65 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    v65[1] = 0;
    v65[2] = 0;
    v65[4] = 0;
    v65[5] = 0;
    v65[6] = 0;
    a2[1] = (__int64)v65;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *v65 = GameData_20dd5d0;
    v65[3] = game_cutscene_Signal_Version_vtable;
    *a2 = (__int64)(v65 + 3);
    {
      GameRoutine_17e9950((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_BackGround", 0x11u)) {
    GameRoutine_17e99b0((void*)(&v80_.v80));
    v66 = v80_.v80;
    v67 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v66;
    a2[1] = v67;
    {
      GameRoutine_17e9a40((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_SoundPreview", 0x13u)) {
    GameRoutine_17e9aa0((void*)(&v80_.v80));
    v68 = v80_.v80;
    v69 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v68;
    a2[1] = v69;
    {
      GameRoutine_17e9b10((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Actor", 0xCu)) {
    GameRoutine_17e9b70((void*)(&v80_.v80));
    v70 = v80_.v80;
    v71 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v70;
    a2[1] = v71;
    {
      GameRoutine_17e9be0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Prop", 0xBu)) {
    GameRoutine_17e9c40((void*)(&v80_.v80));
    v72 = v80_.v80;
    v73 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v72;
    a2[1] = v73;
    {
      GameRoutine_17e9cc0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Light", 0xCu)) {
    game_templates_17e9d20((void*)(&v80_.v80));
    v74 = v80_.v80;
    v75 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v74;
    a2[1] = v75;
    {
      GameRoutine_17e9dd0((__int64)&v80_.v80);
      return;
    }
  }
  else if (a1 == (unsigned int)wld_Crc32(0, "Signal_Constrain", 0x10u)) {
    game_templates_17e9e30((void*)(&v80_.v80));
    v76 = v80_.v80;
    v77 = v80_.v81;
    v80_.v80 = 0;
    v80_.v81 = 0;
    *a2 = v76;
    a2[1] = v77;
    {
      GameRoutine_17e9ed0((__int64)&v80_.v80);
      return;
    }
  }
  else {
    result = wld_Crc32(0, "Signal_Caption", 0xEu);
    if (a1 == (_DWORD)result) {
      GameRoutine_17e9f30((void*)(&v80_.v80));
      v78 = v80_.v80;
      v79 = v80_.v81;
      v80_.v80 = 0;
      v80_.v81 = 0;
      *a2 = v78;
      a2[1] = v79;
      {
        GameRoutine_17e9fa0((__int64)&v80_.v80);
        return;
      }
    }
    else {
      *a2 = 0;
      a2[1] = 0;
    }
  }
  {
    result;
    return;
  }
}

void game_181b800(__int64* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  v1 = (_QWORD*)a1[2];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v6 = (_QWORD*)*v1;
      v7 = (_QWORD*)v1[14];
      if (v7 == v1 + 10) {
        v8 = 32;
      }
      else {
        if (v7 == nullptr) {
          goto LABEL_14;
        }
        v8 = 40;
      }
      (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
    LABEL_14:
      v9 = (_QWORD*)v1[8];
      if (v9 == v1 + 4) {
        v4 = 32;
      }
      else {
        if (v9 == nullptr) {
          goto LABEL_5;
        }
        v4 = 40;
      }
      (*(void (**)(__int64))(*v9 + v4))((__int64)v9);
    LABEL_5:
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, (__int64)v1);
      v1 = v6;
    } while (v6 != nullptr);
  }
  v10 = *a1;
  *a1 = 0;
  if (v10 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, v10);
  }
}

void game_183a1a0(__int64 a1, __int16 a2, int a3)
{
  int v4;
  unsigned int v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64* v16;
    __int64 v17;
    int v18;
    int v19;
    int v20;
    char gap28_[4];
    __int64 v21;
    __int64 v22;
    __int64 v23;
    int v24;
  } v16_;
  const char* v25[2];

  if (*(_DWORD*)(**(_QWORD**)a1 + 4LL * a3) == 42) {
    return;
  }
  v4 = **(_DWORD**)(a1 + 8);
  if (v4 > 1) {
    return;
  }
  v5 = a2 & 0xFFF;
  v6 = GameData_212c880[0];
  v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (a2 & 0xFFF)) +
       2LL * (unsigned __int8)a3;
  v8 = *(__int16*)(v7 + 384);
  if (*(_WORD*)(v7 + 384) == 0) {
    return;
  }
  v9 = *(_QWORD*)(a1 + 16);
  v25[0] = game_util_Format("L_CommandInfo_Status%02d", v4);
  v25[1] = (const char*)strlen(v25[0]);
  GameRoutine_15733c0((void*)(&v16_.v16), (__int64*)(v9 + 24), (__int64*)v25);
  if (v16_.v17 == 0) {
    goto LABEL_18;
  }
  v12 = std___1___shared_weak_count_lock(v16_.v17);
  v13 = v16_.v16;
  if (v16_.v17 != 0) {
    std___1___shared_weak_count___release_weak(v16_.v17);
  }
  if (v12 != 0 && v13 != nullptr) {
    v14 = a1;
    if (*(_DWORD*)(**(_QWORD**)a1 + 4LL * a3) != 42) {
      LODWORD(v16_.v16) = *(_DWORD*)(**(_QWORD**)a1 + 4LL * a3);
      v16_.v21 = 0;
      v16_.v22 = 0;
      v16_.v23 = 0;
      v16_.v24 = 0;
      v16_.v18 = v8;
      v16_.v19 = v8;
      WORD2(v16_.v16) = 1;
      LODWORD(v16_.v17) = -1;
      v16_.v20 = -1;
      StatusItem_188df50(v13, (unsigned int*)&v16_.v16, 1, 1);
      if (v16_.v21 != 0) {
        v16_.v22 = v16_.v21;
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v16_.v21);
      }
      v14 = a1;
    }
  }
  else {
    v14 = a1;
    if (v12 == 0) {
      goto LABEL_19;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  LABEL_18:
    v14 = a1;
  }
LABEL_19:
  if (v8 < 0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * v5) + 272LL) == 1) {
    **(_BYTE**)(v14 + 24) = 1;
  }
  ++**(_DWORD**)(v14 + 8);
}

bool game_183b340(int* a1, int* a2)
{
  __int64 v2;
  int v3;
  int v4;
  int v7;
  int v8;
  __int64* v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int64* v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  int v24;
  int* v25;
  int v26;
  int v27;
  __int64* v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  unsigned int v34;
  int v35;
  int v36;
  int v37;
  int* v38;
  __int64 v39;
  __int64 v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  unsigned int v48;
  int* v49;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v16 = *a1;
      v17 = a1[1];
      v18 = GameData_212c880[0];
      v19 = *(_QWORD*)(*GameData_212c880[0] + 64);
      v20 = *(unsigned __int8*)(*(_QWORD*)(v19 + 8LL * (v17 & 0xFFF)) + 112LL);
      v21 = *(unsigned __int8*)(*(_QWORD*)(v19 + 8 * (*a1 & 0xFFFLL)) + 112LL);
      v22 = *(a2 - 1);
      v23 = *(unsigned __int8*)(*(_QWORD*)(v19 + 8LL * (v22 & 0xFFF)) + 112LL);
      if (v20 <= v21) {
        if (v23 > v20) {
          a1[1] = v22;
          *(a2 - 1) = v17;
          v36 = *a1;
          v35 = a1[1];
          if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                                             8LL * (v35 & 0xFFF)) +
                                  112LL) >
              (unsigned int)*(
                  unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                                               8 * (*a1 & 0xFFFLL)) +
                                    112LL)) {
            *a1 = v35;
            a1[1] = v36;
          }
        }
      }
      else if (v23 <= v20) {
        *a1 = v17;
        a1[1] = v16;
        v37 = *(a2 - 1);
        if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                                           8LL * (v37 & 0xFFF)) +
                                112LL) >
            (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                                                         8LL * (v16 & 0xFFF)) +
                                              112LL)) {
          a1[1] = v37;
          *(a2 - 1) = v16;
        }
      }
      else {
        *a1 = v22;
        *(a2 - 1) = v16;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 == 5) {
        GameRoutine_183b190(a1, a1 + 1, a1 + 2, a1 + 3);
        v7 = *(a2 - 1);
        v8 = a1[3];
        v9 = GameData_212c880[0];
        if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] +
                                                      64) +
                                           8LL * (v7 & 0xFFF)) +
                                112LL) >
            (unsigned int)*(
                unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] +
                                                        64) +
                                             8LL * (v8 & 0xFFF)) +
                                  112LL)) {
          a1[3] = v7;
          *(a2 - 1) = v8;
          v10 = *v9;
          v12 = a1[2];
          v11 = a1[3];
          v13 = v11 & 0xFFF;
          if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8 * v13) +
                                  112LL) >
              (unsigned int)*(
                  unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                               8LL * (v12 & 0xFFF)) +
                                    112LL)) {
            a1[2] = v11;
            a1[3] = v12;
            v14 = a1[1];
            if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * v13) +
                                    112LL) >
                (unsigned int)*(
                    unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                                                 8LL * (v14 & 0xFFF)) +
                                      112LL)) {
              a1[1] = v11;
              a1[2] = v14;
              v15 = *a1;
              if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                                 8 * v13) +
                                      112LL) >
                  (unsigned int)*(
                      unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                                   8 * (*a1 & 0xFFFLL)) +
                                        112LL)) {
                *a1 = v11;
                a1[1] = v15;
              }
            }
          }
        }
        return true;
      }
      goto LABEL_17;
    }
    GameRoutine_183b190(a1, a1 + 1, a1 + 2, a2 - 1);
    return true;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(a2 - 1);
    v4 = *a1;
    if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                       8LL * (v3 & 0xFFF)) +
                            112LL) >
        (unsigned int)*(
            unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                         8 * (*a1 & 0xFFFLL)) +
                              112LL)) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_17:
  v25 = a1 + 2;
  v24 = a1[2];
  v26 = *a1;
  v27 = a1[1];
  v28 = GameData_212c880[0];
  v29 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v30 = *(unsigned __int8*)(*(_QWORD*)(v29 + 8LL * (v27 & 0xFFF)) + 112LL);
  v31 = *a1 & 0xFFFLL;
  v32 = *(unsigned __int8*)(*(_QWORD*)(v29 + 8 * v31) + 112LL);
  v33 = v24 & 0xFFF;
  v34 = *(unsigned __int8*)(*(_QWORD*)(v29 + 8 * v33) + 112LL);
  if (v30 <= v32) {
    if (v34 > v30) {
      a1[1] = v24;
      a1[2] = v27;
      if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v28 + 64) + 8 * v33) +
                              112LL) >
          (unsigned int)*(
              unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v28 + 64) + 8 * v31) +
                                112LL)) {
        *a1 = v24;
        a1[1] = v26;
      }
    }
  }
  else {
    if (v34 <= v30) {
      *a1 = v27;
      a1[1] = v26;
      if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v28 + 64) + 8 * v33) +
                              112LL) <=
          (unsigned int)*(
              unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v28 + 64) + 8 * v31) +
                                112LL)) {
        goto LABEL_32;
      }
      a1[1] = v24;
    }
    else {
      *a1 = v24;
    }
    a1[2] = v26;
  }
LABEL_32:
  v38 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v39 = *v28;
  v40 = 12;
  v41 = 0;
  while (1) {
    v42 = *v38;
    v43 = *v25;
    if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v39 + 64) +
                                       8 * (*v38 & 0xFFFLL)) +
                            112LL) >
        (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v39 + 64) +
                                                     8 * (*v25 & 0xFFFLL)) +
                                          112LL)) {
      break;
    }
  LABEL_34:
    v25 = v38++;
    v40 += 4;
    if (v38 == a2) {
      return true;
    }
  }
  v44 = v40;
  while (1) {
    v45 = v44 - 4;
    *(int*)((char*)a1 + v44) = v43;
    if (v44 == 4) {
      break;
    }
    v43 = *(int*)((char*)a1 + v44 - 8);
    v46 = *(_QWORD*)(*v28 + 64);
    v47 = *(unsigned __int8*)(*(_QWORD*)(v46 + 8LL * (v42 & 0xFFF)) + 112LL);
    v48 = *(unsigned __int8*)(*(_QWORD*)(v46 + 8LL * (v43 & 0xFFF)) + 112LL);
    v44 = v45;
    if (v47 <= v48) {
      v49 = (int*)((char*)a1 + v45);
      goto LABEL_41;
    }
  }
  v49 = a1;
LABEL_41:
  ++v41;
  *v49 = v42;
  if (v41 != 8) {
    v39 = *v28;
    goto LABEL_34;
  }
  return v38 + 1 == a2;
}

__int64 game_18415e0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  char* v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  _QWORD v17[42];

  if (a1 == 0 || a2 == 0) {
    return 0;
  }
  v4 = 0;
  v17[0] = &GameData_1ad4e4c;
  v17[1] = "IconFactor_Advantage_Efficacy_Foot";
  v5 = ui_Manager_instance_;
  v17[2] = &GameData_1adca98;
  v17[3] = "IconFactor_Advantage_Efficacy_Heavy";
  v17[4] = &GameData_1aa67c2;
  v17[5] = "IconFactor_Advantage_Efficacy_Cavalry";
  v17[6] = &GameData_1ae8036;
  v17[7] = "IconFactor_Advantage_Efficacy_Fly";
  v17[8] = &GameData_1abdeba;
  v17[9] = "IconFactor_Advantage_Efficacy_Dragon";
  v17[10] = &GameData_1aaa6bf;
  v17[11] = "IconFactor_Advantage_Efficacy_Beast";
  v17[12] = &GameData_1a8f6db;
  v17[13] = "IconFactor_Advantage_Efficacy_Hell";
  v17[14] = &GameData_1aa67f8;
  v17[15] = "IconFactor_Advantage_Vantage_Foot";
  v17[16] = &GameData_1afefa4;
  v17[17] = "IconFactor_Advantage_Vantage_Heavy";
  v17[18] = &GameData_1ac1bf6;
  v17[19] = "IconFactor_Advantage_Vantage_Cavalry";
  v17[20] = &GameData_1ac8ff9;
  v17[21] = "IconFactor_Advantage_Vantage_Fly";
  v17[22] = &GameData_1adcaca;
  v17[23] = "IconFactor_Advantage_Vantage_Dragon";
  v17[24] = &GameData_1af7413;
  v17[25] = "IconFactor_Advantage_Vantage_Beast";
  v17[26] = &GameData_1a9ae2e;
  v17[27] = "IconFactor_Advantage_Vantage_Hell";
  v17[28] = &GameData_1ab38f3;
  v17[29] = "IconFactor_Efficacy_Foot";
  v17[30] = &GameData_1a89100;
  v17[31] = "IconFactor_Efficacy_Heavy";
  v17[32] = &GameData_1af4f9e;
  v17[33] = "IconFactor_Efficacy_Cavalry";
  v17[34] = &GameData_1af1215;
  v17[35] = "IconFactor_Efficacy_Fly";
  v17[36] = &GameData_1afefd7;
  v17[37] = "IconFactor_Efficacy_Dragon";
  v17[38] = &GameData_1a878af;
  v17[39] = "IconFactor_Efficacy_Beast";
  v17[40] = &GameData_1ad7b01;
  v17[41] = "IconFactor_Efficacy_Hell";
  v6 = &GameData_1a9f09e;
  while (1) {
    v8 = game_HashString(v17[v4]);
    if (v8 != 0) {
      v9 = *(_QWORD*)(GameData_21c99b0 + 96);
      if (v9 != 0 && *(_QWORD*)(GameData_21c99b0 + 112) != 0) {
        v11 = v9 - 1;
        if ((v9 & (v9 - 1)) != 0) {
          v12 = v8;
          if (v8 >= v9) {
            v12 = v8 % v9;
          }
        }
        else {
          v12 = v11 & v8;
        }
        v13 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b0 + 88) + 8 * v12);
        if (v13 != nullptr) {
          v14 = (_QWORD*)*v13;
          if (v14 != nullptr) {
            break;
          }
        }
      }
    }
  LABEL_6:
    v4 += 2;
    if (v4 == 42) {
      return Manager_136a920(v5 + 1264, a1, 0, 7u, v6);
    }
  }
  if ((v9 & v11) == 0) {
    while (1) {
      v16 = v14[1];
      if (v16 == v8) {
        if (v14[2] == v8) {
          goto LABEL_5;
        }
      }
      else if ((v16 & v11) != v12) {
        goto LABEL_6;
      }
      v14 = (_QWORD*)*v14;
      if (v14 == nullptr) {
        goto LABEL_6;
      }
    }
  }
  while (1) {
    v15 = v14[1];
    if (v15 == v8) {
      break;
    }
    if (v15 >= v9) {
      v15 %= v9;
    }
    if (v15 != v12) {
      goto LABEL_6;
    }
  LABEL_21:
    v14 = (_QWORD*)*v14;
    if (v14 == nullptr) {
      goto LABEL_6;
    }
  }
  if (v14[2] != v8) {
    goto LABEL_21;
  }
LABEL_5:
  if (a2 != v14[3]) {
    goto LABEL_6;
  }
  v6 = (char*)v17[v4 + 1];
  return Manager_136a920(v5 + 1264, a1, 0, 7u, v6);
}

__int64 game_1841930(__int64 a1, __int64 a2)
{
  char* v2;
  int v4;
  __int64 v5;
  _DWORD* v6;
  int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  bool v17;
  unsigned __int64 v18;
  char* v19;
  char* v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  char* v25;

  if (a1 == 0 || a2 == 0) {
    return 0;
  }
  v2 = *(char**)(a2 + 872);
  if (v2 != nullptr && *v2 != 0) {
    goto LABEL_10;
  }
  v4 = *(unsigned __int8*)(a2 + 104);
  if (v4 == 7) {
    v2 = *(char**)(a2 + 880);
    if (v2 != nullptr) {
      v12 = ui_Manager_instance_ + 1264;
    LABEL_70:
      v8 = 7;
      goto LABEL_71;
    }
    return 0;
  }
  if (v4 != 5) {
    if (v4 == 2) {
      v5 = *(_QWORD*)(a2 + 24);
      v6 = *(_DWORD**)(v5 + 160);
      if (v6 == *(_DWORD**)(v5 + 168)) {
        v7 = HIDWORD(GameData_21d96d8);
      }
      else {
        v7 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] +
                                                        64) +
                                             8LL * (*v6 & 0xFFF)) +
                                  16LL);
      }
      v23 = ui_Manager_instance_;
      if (v7 == (_DWORD)GameData_21d96c0) {
        v2 = "IconCombatArts_Sword";
      }
      else if (v7 == HIDWORD(GameData_21d96c0)) {
        v2 = "IconCombatArts_Lance";
      }
      else if (v7 == (_DWORD)GameData_21d96c8) {
        v2 = "IconCombatArts_Axe";
      }
      else if (v7 == HIDWORD(GameData_21d96c8)) {
        v2 = "IconCombatArts_Bow";
      }
      else if (v7 == (_DWORD)GameData_21d96d0) {
        v2 = "IconCombatArts_Fist";
      }
      else {
        GameRoutine_6fc380(a2);
        v2 = "IconCombatArts_Special";
      }
      v12 = v23 + 1264;
      goto LABEL_70;
    }
  LABEL_10:
    if ((*(_BYTE*)(*(_QWORD*)(a2 + 24) + 1120LL) & 1) != 0) {
      v8 = 7;
      v9 = ui_Manager_instance_;
      if (v2 == nullptr) {
        goto LABEL_30;
      }
    LABEL_29:
      if (*v2 != 0) {
        goto LABEL_65;
      }
      goto LABEL_30;
    }
    v10 = *(_QWORD*)(a2 + 576);
    if (v10 != 0 && (unsigned int)*(unsigned __int8*)(v10 + 72) - 5 < 2) {
      v8 = 2;
      v9 = ui_Manager_instance_;
      if (v2 != nullptr) {
        goto LABEL_29;
      }
    }
    else {
      if ((unsigned int)*(unsigned __int8*)(a2 + 104) - 3 > 6) {
        v8 = 3;
        v9 = ui_Manager_instance_;
        if (v2 == nullptr) {
          goto LABEL_30;
        }
        goto LABEL_29;
      }
      v8 = GameData_1c0dec0[(unsigned __int8)(*(_BYTE*)(a2 + 104) - 3)];
      v9 = ui_Manager_instance_;
      if (v2 != nullptr) {
        goto LABEL_29;
      }
    }
  LABEL_30:
    v2 = *(char**)(a2 + 880);
    if (v2 == nullptr) {
      v14 = *(_QWORD*)(a2 + 576);
      if (v14 != 0 && (unsigned int)*(unsigned __int8*)(v14 + 72) - 5 <= 1) {
        v15 = *(_QWORD*)(v14 + 24);
        v16 = *(unsigned __int8*)(v15 + 560);
        v17 = (v16 & 1) == 0;
        if ((v16 & 1) != 0) {
          v18 = *(_QWORD*)(v15 + 568);
        }
        else {
          v18 = v16 >> 1;
        }
        v19 = *(char**)(v15 + 576);
        v20 = (char*)(v15 + 561);
        if (!v17) {
          v20 = v19;
        }
        if (v18 != 0) {
          v2 = v20;
        }
        else {
          v2 = nullptr;
        }
        goto LABEL_65;
      }
      v21 = *(unsigned __int8*)(a2 + 104);
      v22 = v8;
      if (v21 > 9) {
        goto LABEL_62;
      }
      if (((1 << v21) & 0x2EC) != 0) {
        v2 = &GameData_1a9f09e;
      LABEL_64:
        v8 = v22;
        goto LABEL_65;
      }
      if (v21 == 8) {
        v25 = game_util_Format("IconBlood_%s", *(_QWORD*)(a2 + 8));
      }
      else {
      LABEL_62:
        v25 = game_util_Format("IconSkill_%s", *(_QWORD*)(a2 + 8));
      }
      v2 = v25;
      goto LABEL_64;
    }
  LABEL_65:
    v12 = v9 + 1264;
  LABEL_71:
    v24 = a1;
    return Manager_136a920(v12, v24, 0, v8, v2);
  }
  v11 = *(unsigned __int8*)(a2 + 250);
  if (v11 <= 9) {
    if (v11 == 7) {
      v2 = (char*)&GameData_1afb45b;
      goto LABEL_57;
    }
    if (v11 == 8) {
      v2 = (char*)&GameData_1a9ed0c;
      goto LABEL_57;
    }
  LABEL_56:
    v2 = &GameData_1a9f09e;
    goto LABEL_57;
  }
  if (v11 == 10 || v11 == 31) {
    v2 = (char*)&GameData_1a9ed22;
    goto LABEL_57;
  }
  if (v11 != 42) {
    goto LABEL_56;
  }
  v2 = (char*)&GameData_1a9324e;
LABEL_57:
  v12 = ui_Manager_instance_ + 1264;
  v24 = a1;
  v8 = 3;
  return Manager_136a920(v12, v24, 0, v8, v2);
}

__int64 game_1843070(__int64 a1, unsigned __int8 a2)
{

#pragma clang fp contract(off)
  char* v3;
  char v4;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  float v10;
  __int64 var4;

  if (a1 == 0) {
    v4 = 0;
    return v4 & 1;
  }
  if (a2 > 2u) {
    switch (a2) {
    case 3u:
      v3 = "IconPageTab_Ore";
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    case 4u:
      v3 = "IconPageTab_Pass";
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    case 5u:
      v3 = "IconPageTab_Stock";
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    default:
      break;
    }
  LABEL_17:
    v3 = &GameData_1a9f09e;
    return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
  }
  if (a2 == 0) {
    v4 = Manager_136ad70(ui_Manager_instance_ + 1264, a1, 0, 7u,
                         "IconPageTab_All");
    v6 = Pane_58f8a0(a1);
    if (v6 != 0) {
      v7 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 8LL);
      if (v7 != 0) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)v7 + 32LL))((void*)(&var4), (__int64)v7);
        LOWORD(v9) = WORD1(var4);
        LOWORD(v8) = var4;
        v10 = *(float*)(a1 + 84);
        *(_BYTE*)(a1 + 88) |= 0x10u;
        *(float*)(a1 + 80) = v10 * (float)((float)v8 / (float)v9);
      }
    }
    return v4 & 1;
  }
  if (a2 == 1) {
    v3 = "IconPageTab_Present";
    return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
  }
  if (a2 != 2) {
    goto LABEL_17;
  }
  v3 = "IconPageTab_Food";
  return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
}

__int64 game_18431d0(__int64 a1, unsigned __int8 a2)
{

#pragma clang fp contract(off)
  char* v3;
  char v4;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  float v10;
  __int64 var4;

  if (a1 == 0) {
    v4 = 0;
    return v4 & 1;
  }
  if (a2 <= 1u) {
    if (a2 != 0) {
      if (a2 == 1) {
        v3 = "IconPageTab_LegionSword";
        return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
      }
    LABEL_17:
      v3 = &GameData_1a9f09e;
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    }
    v4 = Manager_136ad70(ui_Manager_instance_ + 1264, a1, 0, 7u,
                         "IconPageTab_All");
    v6 = Pane_58f8a0(a1);
    if (v6 != 0) {
      v7 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 8LL);
      if (v7 != 0) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)v7 + 32LL))((void*)(&var4), (__int64)v7);
        LOWORD(v9) = WORD1(var4);
        LOWORD(v8) = var4;
        v10 = *(float*)(a1 + 84);
        *(_BYTE*)(a1 + 88) |= 0x10u;
        *(float*)(a1 + 80) = v10 * (float)((float)v8 / (float)v9);
      }
    }
    return v4 & 1;
  }
  if (a2 == 2) {
    v3 = "IconPageTab_LegionMagic";
    return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
  }
  if (a2 == 3) {
    v3 = "IconPageTab_LegionHeal";
    return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
  }
  if (a2 != 4) {
    goto LABEL_17;
  }
  v3 = "IconPageTab_LegionFormation";
  return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
}

__int64 game_1843310(__int64 a1, unsigned __int8 a2)
{

#pragma clang fp contract(off)
  char* v3;
  char v4;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  float v10;
  __int64 var4;

  if (a1 == 0) {
    v4 = 0;
    return v4 & 1;
  }
  if (a2 > 2u) {
    switch (a2) {
    case 3u:
      v3 = "IconPageTab_Pegasus";
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    case 4u:
      v3 = "IconPageTab_Dragon";
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    case 5u:
      v3 = "IconPageTab_Elephant";
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    default:
      break;
    }
  LABEL_17:
    v3 = &GameData_1a9f09e;
    return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
  }
  if (a2 == 0) {
    v4 = Manager_136ad70(ui_Manager_instance_ + 1264, a1, 0, 7u,
                         "IconPageTab_All");
    v6 = Pane_58f8a0(a1);
    if (v6 != 0) {
      v7 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 8LL);
      if (v7 != 0) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)v7 + 32LL))((void*)(&var4), (__int64)v7);
        LOWORD(v9) = WORD1(var4);
        LOWORD(v8) = var4;
        v10 = *(float*)(a1 + 84);
        *(_BYTE*)(a1 + 88) |= 0x10u;
        *(float*)(a1 + 80) = v10 * (float)((float)v8 / (float)v9);
      }
    }
    return v4 & 1;
  }
  if (a2 == 1) {
    v3 = "IconPageTab_Horse";
    return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
  }
  if (a2 != 2) {
    goto LABEL_17;
  }
  v3 = "IconPageTab_Ornius";
  return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
}

__int64 game_1843470(__int64 a1, unsigned __int8 a2)
{

#pragma clang fp contract(off)
  char* v3;
  char v4;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  float v10;
  __int64 var4;

  if (a1 == 0) {
    v4 = 0;
    return v4 & 1;
  }
  if (a2 > 1u) {
    if (a2 == 2) {
      v3 = "IconPageTab_Fish";
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    }
    if (a2 == 3) {
      v3 = "IconPageTab_Vegetable";
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    }
  LABEL_11:
    v3 = &GameData_1a9f09e;
    return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
  }
  if (a2 == 0) {
    v4 = Manager_136ad70(ui_Manager_instance_ + 1264, a1, 0, 7u,
                         "IconPageTab_All");
    v6 = Pane_58f8a0(a1);
    if (v6 != 0) {
      v7 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 8LL);
      if (v7 != 0) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)v7 + 32LL))((void*)(&var4), (__int64)v7);
        LOWORD(v9) = WORD1(var4);
        LOWORD(v8) = var4;
        v10 = *(float*)(a1 + 84);
        *(_BYTE*)(a1 + 88) |= 0x10u;
        *(float*)(a1 + 80) = v10 * (float)((float)v8 / (float)v9);
      }
    }
    return v4 & 1;
  }
  if (a2 != 1) {
    goto LABEL_11;
  }
  v3 = "IconPageTab_Meat";
  return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
}

__int64 game_18435a0(__int64 a1, unsigned __int8 a2)
{

#pragma clang fp contract(off)
  char* v3;
  char v4;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  float v10;
  __int64 var4;

  if (a1 == 0) {
    v4 = 0;
    return v4 & 1;
  }
  if (a2 <= 2u) {
    if (a2 != 0) {
      if (a2 == 1) {
        v3 = "IconPageTab_Battle";
        return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
      }
      if (a2 == 2) {
        v3 = "IconPageTab_Reliance";
        return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
      }
    LABEL_19:
      v3 = &GameData_1a9f09e;
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    }
    v4 = Manager_136ad70(ui_Manager_instance_ + 1264, a1, 0, 7u,
                         "IconPageTab_All");
    v6 = Pane_58f8a0(a1);
    if (v6 != 0) {
      v7 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 8LL);
      if (v7 != 0) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)v7 + 32LL))((void*)(&var4), (__int64)v7);
        LOWORD(v9) = WORD1(var4);
        LOWORD(v8) = var4;
        v10 = *(float*)(a1 + 84);
        *(_BYTE*)(a1 + 88) |= 0x10u;
        *(float*)(a1 + 80) = v10 * (float)((float)v8 / (float)v9);
      }
    }
    return v4 & 1;
  }
  if (a2 > 4u) {
    if (a2 == 5) {
      v3 = "IconPageTab_Tool";
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    }
    if (a2 == 6) {
      v3 = "IconPageTab_Report";
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    }
    goto LABEL_19;
  }
  if (a2 == 3) {
    v3 = "IconPageTab_Hub";
    return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
  }
  if (a2 != 4) {
    goto LABEL_19;
  }
  v3 = "IconPageTab_Gmap";
  return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
}

__int64 game_1843a40(__int64 a1)
{
  __int64 v1;
  char* v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64* v5;
  char v6;
  __int64 v7;
  __int64 v9[3];

  if (a1 != 0) {
    v1 = a1;
    strcpy((char*)v9, " Title_TitleLogo_");
    v2 = Manager_a4aea0(GameData_21759e0);
    v3 = strlen(v2);
    GameRoutine_1a09ce0((__int64)v9, v2, v3);
    v4 = (v9[0] & 1) != 0 ? (__int64*)v9[2] : (__int64*)((char*)v9 + 1);
    if ((Manager_136afb0(ui_Manager_instance_ + 1264, 0, v4) & 1) != 0) {
      v5 = (v9[0] & 1) != 0 ? (__int64*)v9[2] : (__int64*)((char*)v9 + 1);
    }
    else {
      v5 = (__int64*)"Title_TitleLogo_USen";
    }
    LOBYTE(a1) = Manager_136a920(ui_Manager_instance_ + 1264, v1, 0, 0, v5);
    if ((v9[0] & 1) != 0 && v9[2] != 0) {
      v6 = a1;
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v9[2]);
      LOBYTE(a1) = v6;
    }
  }
  return a1 & 1;
}

__int64 game_18569d0()
{
  __int64 v0;
  int v1;
  __int64 result;
  __int64 v5;
  struct {
    __int64 v7;
    void* v8;
  } v7_;

  v0 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  v1 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  if (v1 == 2) {
    if (game_gmap_GmapClock_instance_ == 0) {
      return 0;
    }
    return *(_WORD*)(game_gmap_GmapClock_instance_ + 22) != 0 &&
           *(_WORD*)(game_gmap_GmapClock_instance_ + 20) != 0 &&
           *(_WORD*)(game_gmap_GmapClock_instance_ + 24) != 0;
  }
  else {
    if (v1 == 3) {
      if (*(_DWORD*)(game_GameModeData_instance_ + 64) == 6) {
        v7_.v8 = &GameData_1ac4744;
        v7_.v7 = game_HashString((__int64)&GameData_1ac4744);
        if (game_GameModeData_instance_ != 0) {
          result = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)&v7_.v7);
          if (result != 0) {
            return *(_DWORD*)(result + 32) != 0;
          }
          return result;
        }
        return 0;
      }
      v7_.v8 = &GameData_1adfa87;
      v7_.v7 = game_HashString((__int64)&GameData_1adfa87);
      if (game_GameModeData_instance_ != 0) {
        v5 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v7_.v7);
        if (v5 != 0 && *(_DWORD*)(v5 + 32) != 0) {
          return 0;
        }
      }
      v0 = game_GameModeData_instance_;
      if (*(_BYTE*)(GameData_22416c0 + 55) != 1 ||
          game_GameModeData_instance_ == 0) {
        return 0;
      }
    }
    result = *(_QWORD*)(v0 + 24);
    if (result != 0) {
      result = GameRoutine_88cee0(result);
      if (result != 0) {
        result = (__int64)game_gmap_SpotMgr_FindSpot((unsigned int*)result);
        if (result != 0) {
          return (*(_QWORD*)(result + 120) != 0) & *(_BYTE*)(result + 178);
        }
      }
    }
  }
  return result;
}

__int64* game_1864080(__int64* result, __int64* a2, __int64 a3, char a4)
{
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  int v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  int v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  int v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  int v74;
  unsigned __int64 v75;
  __int64 v76;
  int v77;
  int v78;
  bool v79;
  unsigned __int64 v80;
  int v81;
  unsigned __int64 v82;
  int v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  int v86;
  __int64 v87;
  int v88;
  int v89;
  __int64 v90;
  int v91;
  int v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 v96;
  int v97;
  __int64 v98;
  __int64 v99;
  int v100;
  int v101;
  int v102;
  int v103;
  __int64* v104;
  bool v106;
  __int64 v107;
  __int64* v108;
  __int64 v109;
  int v110;
  int v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  int v119;
  int v120;
  bool v121;
  __int64 v122;
  unsigned __int64 v123;
  int v124;
  __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64 v128;
  int v129;
  bool v130;
  __int64 v131;
  __int64 v132;
  int v133;
  __int64 v134;
  unsigned __int64 v135;
  int v136;
  int v137;
  unsigned __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  int v145;
  unsigned __int64 v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  int v150;
  int v151;
  __int64 v152;
  __int64 v153;
  _DWORD* v154;
  int v155;
  int v156;
  __int64 v157;
  _DWORD* v158;
  _DWORD* v159;
  int v160;
  __int64 v161;

  v7 = result;
LABEL_2:
  v8 = (unsigned __int64)v7;
  while (1) {
    v7 = (__int64*)v8;
    v9 = (__int64)((__int64)a2 - v8) >> 4;
    if (v9 > 2) {
      break;
    }
    if ((unsigned __int64)v9 < 2) {
      return result;
    }
    if (v9 == 2) {
      if ((signed __int32)*((_DWORD*)a2 - 2) <=
          (signed __int32)*(_DWORD*)(v8 + 8)) {
        return result;
      }
      v99 = *(_QWORD*)v8;
    LABEL_115:
      *(_QWORD*)v8 = *(a2 - 2);
      *(a2 - 2) = v99;
      v103 = *(_DWORD*)(v8 + 8);
      *(_DWORD*)(v8 + 8) = *((_DWORD*)a2 - 2);
    LABEL_116:
      *((_DWORD*)a2 - 2) = v103;
      return result;
    }
  LABEL_10:
    if (v9 <= 23) {
      v104 = (__int64*)(v8 + 16);
      v106 = (__int64*)v8 == a2 || v104 == a2;
      if ((a4 & 1) != 0) {
        if (!v106) {
          v107 = 0;
          v108 = (__int64*)v8;
          do {
            v110 = *((_DWORD*)v108 + 6);
            v111 = *((_DWORD*)v108 + 2);
            v108 = v104;
            if (v110 > v111) {
              v112 = *v104;
              v113 = v107;
              do {
                v114 = v8 + v113;
                *(_QWORD*)(v114 + 16) = *(_QWORD*)(v8 + v113);
                *(_DWORD*)(v114 + 24) = *(_DWORD*)(v8 + v113 + 8);
                if (v113 == 0) {
                  v109 = v8;
                  goto LABEL_128;
                }
                v113 -= 16;
              } while (v110 > (signed __int32)*(_DWORD*)(v114 - 8));
              v109 = v8 + v113 + 16;
            LABEL_128:
              *(_QWORD*)v109 = v112;
              *(_DWORD*)(v109 + 8) = v110;
            }
            v104 = v108 + 2;
            v107 += 16;
          } while (v108 + 2 != a2);
        }
      }
      else if (!v106) {
        v154 = (_DWORD*)(v8 + 24);
        do {
          v155 = *((_DWORD*)v7 + 6);
          v156 = *((_DWORD*)v7 + 2);
          v7 = v104;
          if (v155 > v156) {
            v157 = *v104;
            v158 = v154;
            do {
              v159 = v158;
              *((_QWORD*)v158 - 1) = *((_QWORD*)v158 - 3);
              v160 = *(v158 - 4);
              v158 -= 4;
              *v159 = v160;
            } while (v155 > (signed __int32)*(v159 - 8));
            *((_QWORD*)v158 - 1) = v157;
            *v158 = v155;
          }
          v104 = v7 + 2;
          v154 += 4;
        } while (v7 + 2 != a2);
      }
      return result;
    }
    if (a3 == 0) {
      if ((__int64*)v8 != a2) {
        v115 = (unsigned __int64)(v9 - 2) >> 1;
        v116 = v115;
        do {
          if (v115 >= v116) {
            v117 = (2 * (v116 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            v118 = v8 + 16 * v117;
            if ((__int64)(2 * v116 + 2) < v9) {
              v119 = *(_DWORD*)(v118 + 8);
              v120 = *(_DWORD*)(v118 + 24);
              v121 = v119 <= v120;
              if (v119 <= v120) {
                v122 = 0;
              }
              else {
                v122 = 16;
              }
              if (!v121) {
                v117 = 2 * v116 + 2;
              }
              v118 += v122;
            }
            v123 = v8 + 16 * v116;
            v124 = *(_DWORD*)(v123 + 8);
            if ((signed __int32)*(_DWORD*)(v118 + 8) <= v124) {
              v125 = *(_QWORD*)v123;
              do {
                v126 = v123;
                v123 = v118;
                *(_QWORD*)v126 = *(_QWORD*)v118;
                *(_DWORD*)(v126 + 8) = *(_DWORD*)(v118 + 8);
                if ((__int64)v115 < v117) {
                  break;
                }
                v127 = (2 * (v117 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v128 = 2 * v117 + 2;
                v118 = v8 + 16 * v127;
                if (v128 < v9) {
                  v129 = *(_DWORD*)(v118 + 8);
                  result = (__int64*)*(unsigned int*)(v118 + 24);
                  v130 = v129 <= (int)result;
                  if (v129 <= (int)result) {
                    v131 = 0;
                  }
                  else {
                    v131 = 16;
                  }
                  if (!v130) {
                    v127 = v128;
                  }
                  v118 += v131;
                }
                v117 = v127;
              } while ((signed __int32)*(_DWORD*)(v118 + 8) <= v124);
              *(_QWORD*)v123 = v125;
              *(_DWORD*)(v123 + 8) = v124;
            }
          }
          v121 = (__int64)v116-- <= 0;
        } while (!v121);
        do {
          v132 = *(_QWORD*)v8;
          v133 = *(_DWORD*)(v8 + 8);
          v134 = 0;
          v135 = v8;
          do {
            v140 = v135 + 16 * v134;
            v141 = (2 * v134) | 1;
            v139 = v140 + 16;
            v134 = 2 * v134 + 2;
            if (v134 < v9) {
              v136 = *(_DWORD*)(v140 + 24);
              v137 = *(_DWORD*)(v140 + 40);
              v138 = v140 + 32;
              if (v136 <= v137) {
                v134 = v141;
              }
              else {
                v139 = v138;
              }
            }
            else {
              v134 = v141;
            }
            *(_QWORD*)v135 = *(_QWORD*)v139;
            *(_DWORD*)(v135 + 8) = *(_DWORD*)(v139 + 8);
            v135 = v139;
          } while (v134 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
          if ((__int64*)v139 == a2 - 2) {
            *(_QWORD*)v139 = v132;
            *(_DWORD*)(v139 + 8) = v133;
          }
          else {
            *(_QWORD*)v139 = *(a2 - 2);
            *(_DWORD*)(v139 + 8) = *((_DWORD*)a2 - 2);
            *(a2 - 2) = v132;
            *((_DWORD*)a2 - 2) = v133;
            v142 = (__int64)(v139 - v8 + 16) >> 4;
            v121 = v142 < 2;
            v143 = v142 - 2;
            if (!v121) {
              v144 = v143 >> 1;
              v145 = *(_DWORD*)(v139 + 8);
              v146 = v8 + 16 * v144;
              if ((signed __int32)*(_DWORD*)(v146 + 8) > v145) {
                v147 = *(_QWORD*)v139;
                do {
                  v148 = v139;
                  v139 = v146;
                  *(_QWORD*)v148 = *(_QWORD*)v146;
                  *(_DWORD*)(v148 + 8) = *(_DWORD*)(v146 + 8);
                  if (v144 == 0) {
                    break;
                  }
                  v144 = (v144 - 1) >> 1;
                  v146 = v8 + 16 * v144;
                } while ((signed __int32)*(_DWORD*)(v146 + 8) > v145);
                *(_QWORD*)v139 = v147;
                *(_DWORD*)(v139 + 8) = v145;
              }
            }
          }
          a2 -= 2;
          v121 = v9-- <= 2;
        } while (!v121);
      }
      return result;
    }
    v10 = *((_DWORD*)a2 - 2);
    v11 = v8 + 16 * ((unsigned __int64)v9 >> 1);
    if ((unsigned __int64)v9 < 0x81) {
      v16 = *(_DWORD*)(v8 + 8);
      v17 = *(_DWORD*)(v11 + 8);
      if (v16 <= v17) {
        if (v10 <= v16) {
          goto LABEL_38;
        }
        v25 = *(_QWORD*)v8;
        *(_QWORD*)v8 = *(a2 - 2);
        *(a2 - 2) = v25;
        LODWORD(v25) = *(_DWORD*)(v8 + 8);
        *(_DWORD*)(v8 + 8) = *((_DWORD*)a2 - 2);
        *((_DWORD*)a2 - 2) = v25;
        v26 = *(_DWORD*)(v8 + 8);
        v27 = *(_DWORD*)(v11 + 8);
        if (v26 <= v27) {
          goto LABEL_38;
        }
        v28 = *(_QWORD*)v11;
        v29 = *(_QWORD*)v8;
        *(_DWORD*)(v11 + 8) = v26;
        *(_DWORD*)(v8 + 8) = v27;
        *(_QWORD*)v11 = v29;
        *(_QWORD*)v8 = v28;
        --a3;
        if ((a4 & 1) == 0) {
          goto LABEL_63;
        }
      }
      else {
        v18 = *(_QWORD*)v11;
        if (v10 <= v16) {
          v41 = *(_QWORD*)v8;
          *(_DWORD*)(v11 + 8) = v16;
          *(_DWORD*)(v8 + 8) = v17;
          *(_QWORD*)v11 = v41;
          *(_QWORD*)v8 = v18;
          if ((signed __int32)*((_DWORD*)a2 - 2) > v17) {
            *(_QWORD*)v8 = *(a2 - 2);
            *(a2 - 2) = v18;
            v42 = *(_DWORD*)(v8 + 8);
            *(_DWORD*)(v8 + 8) = *((_DWORD*)a2 - 2);
            *((_DWORD*)a2 - 2) = v42;
          }
        LABEL_38:
          --a3;
          if ((a4 & 1) == 0) {
            goto LABEL_63;
          }
          goto LABEL_39;
        }
        *(_QWORD*)v11 = *(a2 - 2);
        *(a2 - 2) = v18;
        v19 = *(_DWORD*)(v11 + 8);
        *(_DWORD*)(v11 + 8) = *((_DWORD*)a2 - 2);
        *((_DWORD*)a2 - 2) = v19;
        --a3;
        if ((a4 & 1) == 0) {
          goto LABEL_63;
        }
      }
    LABEL_39:
      v43 = *(_QWORD*)v8;
      v44 = *(_DWORD*)(v8 + 8);
    LABEL_64:
      v67 = 0;
      do {
        v68 = v8 + v67;
        v67 += 16;
      } while ((signed __int32)*(_DWORD*)(v68 + 24) > v44);
      v69 = v8 + v67;
      v70 = (unsigned __int64)a2;
      if (v67 == 16) {
        v73 = (unsigned __int64)a2;
        while (v69 < v73) {
          v74 = *(_DWORD*)(v73 - 8);
          v72 = v73 - 16;
          v73 -= 16LL;
          if (v74 > v44) {
            goto LABEL_74;
          }
        }
        v72 = v73;
      }
      else {
        do {
          v71 = *(_DWORD*)(v70 - 8);
          v72 = v70 - 16;
          v70 -= 16LL;
        } while (v71 <= v44);
      }
    LABEL_74:
      v8 = v69;
      if (v69 < v72) {
        v75 = v72;
        do {
          v76 = *(_QWORD*)v8;
          *(_QWORD*)v8 = *(_QWORD*)v75;
          *(_QWORD*)v75 = v76;
          LODWORD(v76) = *(_DWORD*)(v8 + 8);
          *(_DWORD*)(v8 + 8) = *(_DWORD*)(v75 + 8);
          *(_DWORD*)(v75 + 8) = v76;
          do {
            v77 = *(_DWORD*)(v8 + 24);
            v8 += 16LL;
          } while (v77 > v44);
          do {
            v78 = *(_DWORD*)(v75 - 8);
            v75 -= 16LL;
          } while (v78 <= v44);
        } while (v8 < v75);
      }
      if (v7 != (__int64*)(v8 - 16)) {
        *v7 = *(_QWORD*)(v8 - 16);
        *((_DWORD*)v7 + 2) = *(_DWORD*)(v8 - 8);
      }
      *(_QWORD*)(v8 - 16) = v43;
      *(_DWORD*)(v8 - 8) = v44;
      if (v69 < v72) {
        goto LABEL_85;
      }
      v79 = game_1864e60_alt1((__int64)v7, v8 - 16);
      result = (__int64*)game_1864e60_alt1(v8, (__int64)a2);
      if (((unsigned __int8)result & 1) != 0) {
        a2 = (__int64*)(v8 - 16);
        if (!v79) {
          goto LABEL_2;
        }
        return result;
      }
      if (!v79) {
      LABEL_85:
        result = game_1864080(v7, v8 - 16, a3, a4 & 1);
        a4 = 0;
      }
    }
    else {
      v12 = *(_DWORD*)(v11 + 8);
      v13 = *(_DWORD*)(v8 + 8);
      if (v12 <= v13) {
        if (v10 > v12) {
          v20 = *(_QWORD*)v11;
          *(_QWORD*)v11 = *(a2 - 2);
          *(a2 - 2) = v20;
          LODWORD(v20) = *(_DWORD*)(v11 + 8);
          *(_DWORD*)(v11 + 8) = *((_DWORD*)a2 - 2);
          *((_DWORD*)a2 - 2) = v20;
          v21 = *(_DWORD*)(v11 + 8);
          v22 = *(_DWORD*)(v8 + 8);
          if (v21 > v22) {
            v23 = *(_QWORD*)v8;
            v24 = *(_QWORD*)v11;
            *(_DWORD*)(v8 + 8) = v21;
            *(_DWORD*)(v11 + 8) = v22;
            *(_QWORD*)v8 = v24;
            *(_QWORD*)v11 = v23;
          }
        }
      }
      else {
        v14 = *(_QWORD*)v8;
        if (v10 <= v12) {
          v30 = *(_QWORD*)v11;
          *(_DWORD*)(v8 + 8) = v12;
          *(_DWORD*)(v11 + 8) = v13;
          *(_QWORD*)v8 = v30;
          *(_QWORD*)v11 = v14;
          if ((signed __int32)*((_DWORD*)a2 - 2) <= v13) {
            goto LABEL_30;
          }
          *(_QWORD*)v11 = *(a2 - 2);
          *(a2 - 2) = v14;
          v15 = *(_DWORD*)(v11 + 8);
          *(_DWORD*)(v11 + 8) = *((_DWORD*)a2 - 2);
        }
        else {
          *(_QWORD*)v8 = *(a2 - 2);
          *(a2 - 2) = v14;
          v15 = *(_DWORD*)(v8 + 8);
          *(_DWORD*)(v8 + 8) = *((_DWORD*)a2 - 2);
        }
        *((_DWORD*)a2 - 2) = v15;
      }
    LABEL_30:
      v31 = *(_DWORD*)(v11 - 8);
      v32 = *(_DWORD*)(v8 + 24);
      v33 = *((_DWORD*)a2 - 6);
      if (v31 <= v32) {
        if (v33 > v31) {
          v36 = *(_QWORD*)(v11 - 16);
          *(_QWORD*)(v11 - 16) = *(a2 - 4);
          *(a2 - 4) = v36;
          LODWORD(v36) = *(_DWORD*)(v11 - 8);
          *(_DWORD*)(v11 - 8) = *((_DWORD*)a2 - 6);
          *((_DWORD*)a2 - 6) = v36;
          v37 = *(_DWORD*)(v11 - 8);
          v38 = *(_DWORD*)(v8 + 24);
          if (v37 > v38) {
            v39 = *(_QWORD*)(v8 + 16);
            v40 = *(_QWORD*)(v11 - 16);
            *(_DWORD*)(v8 + 24) = v37;
            *(_DWORD*)(v11 - 8) = v38;
            *(_QWORD*)(v8 + 16) = v40;
            *(_QWORD*)(v11 - 16) = v39;
          }
        }
      }
      else {
        v34 = *(_QWORD*)(v8 + 16);
        if (v33 <= v31) {
          v45 = *(_QWORD*)(v11 - 16);
          *(_DWORD*)(v8 + 24) = v31;
          *(_DWORD*)(v11 - 8) = v32;
          *(_QWORD*)(v8 + 16) = v45;
          *(_QWORD*)(v11 - 16) = v34;
          if ((signed __int32)*((_DWORD*)a2 - 6) <= v32) {
            goto LABEL_43;
          }
          *(_QWORD*)(v11 - 16) = *(a2 - 4);
          *(a2 - 4) = v34;
          v35 = *(_DWORD*)(v11 - 8);
          *(_DWORD*)(v11 - 8) = *((_DWORD*)a2 - 6);
        }
        else {
          *(_QWORD*)(v8 + 16) = *(a2 - 4);
          *(a2 - 4) = v34;
          v35 = *(_DWORD*)(v8 + 24);
          *(_DWORD*)(v8 + 24) = *((_DWORD*)a2 - 6);
        }
        *((_DWORD*)a2 - 6) = v35;
      }
    LABEL_43:
      v46 = *(_DWORD*)(v11 + 24);
      v47 = *(_DWORD*)(v8 + 40);
      v48 = *((_DWORD*)a2 - 10);
      if (v46 <= v47) {
        if (v48 > v46) {
          v51 = *(_QWORD*)(v11 + 16);
          *(_QWORD*)(v11 + 16) = *(a2 - 6);
          *(a2 - 6) = v51;
          LODWORD(v51) = *(_DWORD*)(v11 + 24);
          *(_DWORD*)(v11 + 24) = *((_DWORD*)a2 - 10);
          *((_DWORD*)a2 - 10) = v51;
          v52 = *(_DWORD*)(v11 + 24);
          v53 = *(_DWORD*)(v8 + 40);
          if (v52 > v53) {
            v54 = *(_QWORD*)(v8 + 32);
            v55 = *(_QWORD*)(v11 + 16);
            *(_DWORD*)(v8 + 40) = v52;
            *(_DWORD*)(v11 + 24) = v53;
            *(_QWORD*)(v8 + 32) = v55;
            *(_QWORD*)(v11 + 16) = v54;
          }
        }
      }
      else {
        v49 = *(_QWORD*)(v8 + 32);
        if (v48 <= v46) {
          v56 = *(_QWORD*)(v11 + 16);
          *(_DWORD*)(v8 + 40) = v46;
          *(_DWORD*)(v11 + 24) = v47;
          *(_QWORD*)(v8 + 32) = v56;
          *(_QWORD*)(v11 + 16) = v49;
          if ((signed __int32)*((_DWORD*)a2 - 10) <= v47) {
            goto LABEL_52;
          }
          *(_QWORD*)(v11 + 16) = *(a2 - 6);
          *(a2 - 6) = v49;
          v50 = *(_DWORD*)(v11 + 24);
          *(_DWORD*)(v11 + 24) = *((_DWORD*)a2 - 10);
        }
        else {
          *(_QWORD*)(v8 + 32) = *(a2 - 6);
          *(a2 - 6) = v49;
          v50 = *(_DWORD*)(v8 + 40);
          *(_DWORD*)(v8 + 40) = *((_DWORD*)a2 - 10);
        }
        *((_DWORD*)a2 - 10) = v50;
      }
    LABEL_52:
      v57 = *(_DWORD*)(v11 + 8);
      v58 = *(_DWORD*)(v11 - 8);
      v59 = *(_DWORD*)(v11 + 24);
      if (v57 <= v58) {
        v60 = *(_QWORD*)v11;
        if (v59 <= v57) {
          v58 = *(_DWORD*)(v11 + 8);
        }
        else {
          v62 = *(_QWORD*)(v11 + 16);
          *(_QWORD*)(v11 + 16) = v60;
          *(_DWORD*)(v11 + 8) = v59;
          *(_DWORD*)(v11 + 24) = v57;
          *(_QWORD*)v11 = v62;
          if (v59 <= v58) {
            v58 = v59;
            v60 = v62;
          }
          else {
            v60 = *(_QWORD*)(v11 - 16);
            *(_QWORD*)(v11 - 16) = v62;
            *(_DWORD*)(v11 - 8) = v59;
            *(_DWORD*)(v11 + 8) = v58;
            *(_QWORD*)v11 = v60;
          }
        }
      }
      else {
        v60 = *(_QWORD*)(v11 - 16);
        if (v59 <= v57) {
          v63 = *(_QWORD*)v11;
          *(_QWORD*)v11 = v60;
          *(_DWORD*)(v11 - 8) = v57;
          *(_DWORD*)(v11 + 8) = v58;
          *(_QWORD*)(v11 - 16) = v63;
          if (v59 > v58) {
            v64 = *(_QWORD*)(v11 + 16);
            *(_QWORD*)(v11 + 16) = v60;
            *(_DWORD*)(v11 + 8) = v59;
            v60 = v64;
            *(_QWORD*)v11 = v64;
            *(_DWORD*)(v11 + 24) = v58;
            v58 = v59;
          }
        }
        else {
          v61 = *(_QWORD*)(v11 + 16);
          *(_QWORD*)(v11 + 16) = v60;
          v60 = *(_QWORD*)v11;
          *(_DWORD*)(v11 - 8) = v59;
          *(_DWORD*)(v11 + 24) = v58;
          v58 = v57;
          *(_QWORD*)(v11 - 16) = v61;
        }
      }
      v65 = *(_QWORD*)v8;
      *(_QWORD*)v8 = v60;
      v66 = *(_DWORD*)(v8 + 8);
      *(_DWORD*)(v8 + 8) = v58;
      *(_QWORD*)v11 = v65;
      *(_DWORD*)(v11 + 8) = v66;
      --a3;
      if ((a4 & 1) != 0) {
        goto LABEL_39;
      }
    LABEL_63:
      v44 = *(_DWORD*)(v8 + 8);
      v43 = *(_QWORD*)v8;
      if ((signed __int32)*(_DWORD*)(v8 - 8) > v44) {
        goto LABEL_64;
      }
      if (v44 <= (signed __int32)*((_DWORD*)a2 - 2)) {
        v82 = v8 + 16;
        do {
          v8 = v82;
          if (v82 >= (unsigned __int64)a2) {
            break;
          }
          v83 = *(_DWORD*)(v82 + 8);
          v82 += 16LL;
        } while (v44 <= v83);
      }
      else {
        v80 = v8;
        do {
          v81 = *(_DWORD*)(v80 + 24);
          v8 = v80 + 16;
          v80 += 16LL;
        } while (v44 <= v81);
      }
      v84 = (unsigned __int64)a2;
      if (v8 < (unsigned __int64)a2) {
        v85 = (unsigned __int64)a2;
        do {
          v86 = *(_DWORD*)(v85 - 8);
          v84 = v85 - 16;
          v85 -= 16LL;
        } while (v44 > v86);
      }
      while (v8 < v84) {
        v87 = *(_QWORD*)v8;
        *(_QWORD*)v8 = *(_QWORD*)v84;
        *(_QWORD*)v84 = v87;
        LODWORD(v87) = *(_DWORD*)(v8 + 8);
        *(_DWORD*)(v8 + 8) = *(_DWORD*)(v84 + 8);
        *(_DWORD*)(v84 + 8) = v87;
        do {
          v88 = *(_DWORD*)(v8 + 24);
          v8 += 16LL;
        } while (v44 <= v88);
        do {
          v89 = *(_DWORD*)(v84 - 8);
          v84 -= 16LL;
        } while (v44 > v89);
      }
      if (v7 != (__int64*)(v8 - 16)) {
        *v7 = *(_QWORD*)(v8 - 16);
        *((_DWORD*)v7 + 2) = *(_DWORD*)(v8 - 8);
      }
      a4 = 0;
      *(_QWORD*)(v8 - 16) = v43;
      *(_DWORD*)(v8 - 8) = v44;
    }
  }
  if (v9 != 3) {
    if (v9 == 4) {
      return game_1864cd0((__int64*)v8, (__int64*)(v8 + 16),
                          (__int64*)(v8 + 32), a2 - 2);
    }
    if (v9 == 5) {
      result = game_1864cd0((__int64*)v8, (__int64*)(v8 + 16),
                            (__int64*)(v8 + 32), (__int64*)(v8 + 48));
      if ((signed __int32)*((_DWORD*)a2 - 2) >
          (signed __int32)*(_DWORD*)(v8 + 56)) {
        v90 = *(_QWORD*)(v8 + 48);
        *(_QWORD*)(v8 + 48) = *(a2 - 2);
        *(a2 - 2) = v90;
        LODWORD(v90) = *(_DWORD*)(v8 + 56);
        *(_DWORD*)(v8 + 56) = *((_DWORD*)a2 - 2);
        *((_DWORD*)a2 - 2) = v90;
        v91 = *(_DWORD*)(v8 + 56);
        v92 = *(_DWORD*)(v8 + 40);
        if (v91 > v92) {
          v93 = *(_QWORD*)(v8 + 32);
          v94 = *(_QWORD*)(v8 + 48);
          *(_DWORD*)(v8 + 56) = v92;
          v95 = *(_DWORD*)(v8 + 24);
          *(_DWORD*)(v8 + 40) = v91;
          *(_QWORD*)(v8 + 32) = v94;
          *(_QWORD*)(v8 + 48) = v93;
          if (v91 > v95) {
            v96 = *(_QWORD*)(v8 + 16);
            *(_DWORD*)(v8 + 40) = v95;
            v97 = *(_DWORD*)(v8 + 8);
            *(_QWORD*)(v8 + 16) = v94;
            *(_DWORD*)(v8 + 24) = v91;
            *(_QWORD*)(v8 + 32) = v96;
            if (v91 > v97) {
              v98 = *(_QWORD*)v8;
              *(_QWORD*)v8 = v94;
              *(_DWORD*)(v8 + 8) = v91;
              *(_DWORD*)(v8 + 24) = v97;
              *(_QWORD*)(v8 + 16) = v98;
            }
          }
        }
      }
      return result;
    }
    goto LABEL_10;
  }
  v100 = *(_DWORD*)(v8 + 24);
  v101 = *(_DWORD*)(v8 + 8);
  v102 = *((_DWORD*)a2 - 2);
  if (v100 <= v101) {
    if (v102 > v100) {
      v149 = *(_QWORD*)(v8 + 16);
      *(_QWORD*)(v8 + 16) = *(a2 - 2);
      *(a2 - 2) = v149;
      LODWORD(v149) = *(_DWORD*)(v8 + 24);
      *(_DWORD*)(v8 + 24) = *((_DWORD*)a2 - 2);
      *((_DWORD*)a2 - 2) = v149;
      v150 = *(_DWORD*)(v8 + 24);
      v151 = *(_DWORD*)(v8 + 8);
      if (v150 > v151) {
        v152 = *(_QWORD*)v8;
        v153 = *(_QWORD*)(v8 + 16);
        *(_DWORD*)(v8 + 8) = v150;
        *(_DWORD*)(v8 + 24) = v151;
        *(_QWORD*)v8 = v153;
        *(_QWORD*)(v8 + 16) = v152;
      }
    }
  }
  else {
    v99 = *(_QWORD*)v8;
    if (v102 > v100) {
      goto LABEL_115;
    }
    v161 = *(_QWORD*)(v8 + 16);
    *(_QWORD*)(v8 + 16) = v99;
    *(_DWORD*)(v8 + 8) = v100;
    *(_DWORD*)(v8 + 24) = v101;
    *(_QWORD*)v8 = v161;
    if ((signed __int32)*((_DWORD*)a2 - 2) > v101) {
      *(_QWORD*)(v8 + 16) = *(a2 - 2);
      *(a2 - 2) = v99;
      v103 = *(_DWORD*)(v8 + 24);
      *(_DWORD*)(v8 + 24) = *((_DWORD*)a2 - 2);
      goto LABEL_116;
    }
  }
  return result;
}

__int64* game_1864cd0(__int64* result, __int64* a2, __int64* a3, __int64* a4)
{
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v4 = *((_DWORD*)a2 + 2);
  v5 = *((_DWORD*)a3 + 2);
  if (v4 <= (signed __int32)*((_DWORD*)result + 2)) {
    if (v5 > v4) {
      v7 = *a2;
      *a2 = *a3;
      *a3 = v7;
      v5 = *((_DWORD*)a2 + 2);
      *((_DWORD*)a2 + 2) = *((_DWORD*)a3 + 2);
      *((_DWORD*)a3 + 2) = v5;
      if ((signed __int32)*((_DWORD*)a2 + 2) >
          (signed __int32)*((_DWORD*)result + 2)) {
        v8 = *result;
        *result = *a2;
        *a2 = v8;
        LODWORD(v8) = *((_DWORD*)result + 2);
        *((_DWORD*)result + 2) = *((_DWORD*)a2 + 2);
        *((_DWORD*)a2 + 2) = v8;
        v5 = *((_DWORD*)a3 + 2);
      }
    }
  }
  else {
    v6 = *result;
    if (v5 > v4) {
      *result = *a3;
      *a3 = v6;
      v5 = *((_DWORD*)result + 2);
      *((_DWORD*)result + 2) = *((_DWORD*)a3 + 2);
    LABEL_9:
      *((_DWORD*)a3 + 2) = v5;
      goto LABEL_10;
    }
    *result = *a2;
    *a2 = v6;
    v9 = *((_DWORD*)result + 2);
    *((_DWORD*)result + 2) = *((_DWORD*)a2 + 2);
    *((_DWORD*)a2 + 2) = v9;
    v5 = *((_DWORD*)a3 + 2);
    if (v5 > v9) {
      v10 = *a2;
      *a2 = *a3;
      *a3 = v10;
      v5 = *((_DWORD*)a2 + 2);
      *((_DWORD*)a2 + 2) = *((_DWORD*)a3 + 2);
      goto LABEL_9;
    }
  }
LABEL_10:
  if ((signed __int32)*((_DWORD*)a4 + 2) > v5) {
    v11 = *a3;
    *a3 = *a4;
    *a4 = v11;
    LODWORD(v11) = *((_DWORD*)a3 + 2);
    *((_DWORD*)a3 + 2) = *((_DWORD*)a4 + 2);
    *((_DWORD*)a4 + 2) = v11;
    if ((signed __int32)*((_DWORD*)a3 + 2) >
        (signed __int32)*((_DWORD*)a2 + 2)) {
      v12 = *a2;
      *a2 = *a3;
      *a3 = v12;
      LODWORD(v12) = *((_DWORD*)a2 + 2);
      *((_DWORD*)a2 + 2) = *((_DWORD*)a3 + 2);
      *((_DWORD*)a3 + 2) = v12;
      if ((signed __int32)*((_DWORD*)a2 + 2) >
          (signed __int32)*((_DWORD*)result + 2)) {
        v13 = *result;
        *result = *a2;
        *a2 = v13;
        LODWORD(v13) = *((_DWORD*)result + 2);
        *((_DWORD*)result + 2) = *((_DWORD*)a2 + 2);
        *((_DWORD*)a2 + 2) = v13;
      }
    }
  }
  return result;
}

bool game_1864e60(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;

  v2 = ((__int64)a2 - a1) >> 4;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v15 = *(_DWORD*)(a1 + 24);
      v16 = *(_DWORD*)(a1 + 8);
      v17 = *((_DWORD*)a2 - 2);
      if (v15 <= v16) {
        if (v17 > v15) {
          v24 = *(_QWORD*)(a1 + 16);
          *(_QWORD*)(a1 + 16) = *(a2 - 2);
          *(a2 - 2) = v24;
          LODWORD(v24) = *(_DWORD*)(a1 + 24);
          *(_DWORD*)(a1 + 24) = *((_DWORD*)a2 - 2);
          *((_DWORD*)a2 - 2) = v24;
          v25 = *(_DWORD*)(a1 + 24);
          v26 = *(_DWORD*)(a1 + 8);
          if (v25 > v26) {
            v27 = *(_QWORD*)a1;
            v28 = *(_QWORD*)(a1 + 16);
            *(_DWORD*)(a1 + 8) = v25;
            *(_DWORD*)(a1 + 24) = v26;
            *(_QWORD*)a1 = v28;
            *(_QWORD*)(a1 + 16) = v27;
          }
        }
        return true;
      }
      v3 = *(_QWORD*)a1;
      if (v17 <= v15) {
        v32 = *(_QWORD*)(a1 + 16);
        *(_QWORD*)(a1 + 16) = v3;
        *(_DWORD*)(a1 + 8) = v15;
        *(_DWORD*)(a1 + 24) = v16;
        *(_QWORD*)a1 = v32;
        if ((signed __int32)*((_DWORD*)a2 - 2) > v16) {
          *(_QWORD*)(a1 + 16) = *(a2 - 2);
          *(a2 - 2) = v3;
          v33 = *(_DWORD*)(a1 + 24);
          *(_DWORD*)(a1 + 24) = *((_DWORD*)a2 - 2);
          *((_DWORD*)a2 - 2) = v33;
        }
        return true;
      }
      goto LABEL_16;
    case 4LL:
      game_1864cd0((__int64*)a1, (__int64*)(a1 + 16), (__int64*)(a1 + 32),
                   a2 - 2);
      return true;
    case 5LL:
      game_1864cd0((__int64*)a1, (__int64*)(a1 + 16), (__int64*)(a1 + 32),
                   (__int64*)(a1 + 48));
      if ((signed __int32)*((_DWORD*)a2 - 2) >
          (signed __int32)*(_DWORD*)(a1 + 56)) {
        v6 = *(_QWORD*)(a1 + 48);
        *(_QWORD*)(a1 + 48) = *(a2 - 2);
        *(a2 - 2) = v6;
        LODWORD(v6) = *(_DWORD*)(a1 + 56);
        *(_DWORD*)(a1 + 56) = *((_DWORD*)a2 - 2);
        *((_DWORD*)a2 - 2) = v6;
        v7 = *(_DWORD*)(a1 + 56);
        v8 = *(_DWORD*)(a1 + 40);
        if (v7 > v8) {
          v9 = *(_QWORD*)(a1 + 32);
          v10 = *(_QWORD*)(a1 + 48);
          *(_DWORD*)(a1 + 56) = v8;
          v11 = *(_DWORD*)(a1 + 24);
          *(_DWORD*)(a1 + 40) = v7;
          *(_QWORD*)(a1 + 32) = v10;
          *(_QWORD*)(a1 + 48) = v9;
          if (v7 > v11) {
            v12 = *(_QWORD*)(a1 + 16);
            *(_DWORD*)(a1 + 40) = v11;
            v13 = *(_DWORD*)(a1 + 8);
            *(_QWORD*)(a1 + 16) = v10;
            *(_DWORD*)(a1 + 24) = v7;
            *(_QWORD*)(a1 + 32) = v12;
            if (v7 > v13) {
              v14 = *(_QWORD*)a1;
              *(_QWORD*)a1 = v10;
              *(_DWORD*)(a1 + 8) = v7;
              *(_DWORD*)(a1 + 24) = v13;
              *(_QWORD*)(a1 + 16) = v14;
            }
          }
        }
      }
      return true;
    default:
      break;
    }
  }
  else {
    if ((unsigned __int64)v2 < 2) {
      return true;
    }
    if (v2 == 2) {
      if ((signed __int32)*((_DWORD*)a2 - 2) >
          (signed __int32)*(_DWORD*)(a1 + 8)) {
        v3 = *(_QWORD*)a1;
      LABEL_16:
        *(_QWORD*)a1 = *(a2 - 2);
        *(a2 - 2) = v3;
        v18 = *(_DWORD*)(a1 + 8);
        *(_DWORD*)(a1 + 8) = *((_DWORD*)a2 - 2);
        *((_DWORD*)a2 - 2) = v18;
      }
      return true;
    }
  }
  v19 = *(_DWORD*)(a1 + 24);
  v20 = *(_DWORD*)(a1 + 8);
  v21 = *(_DWORD*)(a1 + 40);
  if (v19 <= v20) {
    if (v21 > v19) {
      v29 = *(_QWORD*)(a1 + 16);
      v30 = *(_QWORD*)(a1 + 32);
      *(_DWORD*)(a1 + 24) = v21;
      *(_DWORD*)(a1 + 40) = v19;
      *(_QWORD*)(a1 + 16) = v30;
      *(_QWORD*)(a1 + 32) = v29;
      if (v21 > v20) {
        v31 = *(_QWORD*)a1;
        *(_QWORD*)a1 = v30;
        *(_DWORD*)(a1 + 8) = v21;
        *(_DWORD*)(a1 + 24) = v20;
        *(_QWORD*)(a1 + 16) = v31;
      }
    }
  }
  else {
    v22 = *(_QWORD*)a1;
    if (v21 <= v19) {
      v34 = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(a1 + 16) = v22;
      *(_DWORD*)(a1 + 8) = v19;
      *(_DWORD*)(a1 + 24) = v20;
      *(_QWORD*)a1 = v34;
      if (v21 <= v20) {
        goto LABEL_32;
      }
      v35 = *(_QWORD*)(a1 + 32);
      *(_QWORD*)(a1 + 32) = v22;
      *(_DWORD*)(a1 + 24) = v21;
      *(_QWORD*)(a1 + 16) = v35;
    }
    else {
      v23 = *(_QWORD*)(a1 + 32);
      *(_QWORD*)(a1 + 32) = v22;
      *(_DWORD*)(a1 + 8) = v21;
      *(_QWORD*)a1 = v23;
    }
    *(_DWORD*)(a1 + 40) = v20;
  }
LABEL_32:
  v36 = (__int64*)(a1 + 48);
  if ((__int64*)(a1 + 48) == a2) {
    return true;
  }
  v37 = (__int64*)(a1 + 32);
  v38 = 0;
  v39 = 0;
  while (1) {
    v41 = *((_DWORD*)v36 + 2);
    if (v41 > (signed __int32)*((_DWORD*)v37 + 2)) {
      v42 = *v36;
      v43 = v38;
      do {
        v44 = a1 + v43;
        *(_QWORD*)(v44 + 48) = *(_QWORD*)(a1 + v43 + 32);
        *(_DWORD*)(v44 + 56) = *(_DWORD*)(a1 + v43 + 40);
        if (v43 == -32) {
          v40 = a1;
          goto LABEL_35;
        }
        v43 -= 16;
      } while (v41 > (signed __int32)*(_DWORD*)(v44 + 24));
      v40 = a1 + v43 + 48;
    LABEL_35:
      ++v39;
      *(_QWORD*)v40 = v42;
      *(_DWORD*)(v40 + 8) = v41;
      if (v39 == 8) {
        return v36 + 2 == a2;
      }
    }
    v37 = v36;
    v36 += 2;
    v38 += 16;
    if (v36 == a2) {
      return true;
    }
  }
}

_QWORD* game_18b0d00(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  char v7[4];
  struct {
    __int64* v8;
    int v9;
    char gap20_[4];
    __int64 v10;
  } v8_;

  v2 = a1[21];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = v3;
      v5 = a1[20];
      if (v5 != 0 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5) & 1) != 0) {
        ProcHelp_18b0bd0((__int64)a1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  result = (_QWORD*)a1[19];
  if (result != nullptr) {
    v8_.v10 = 0;
    v8_.v8 = GameData_212d890[0] + 2;
    v8_.v9 = 1;
    result = X8CALL_X0(
        _QWORD*,
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64**))(
            *result + 16LL))((void*)v7, result, &v8_.v8));
  }
  a1[19] = 0;
  return result;
}

void game_18c3020(_QWORD* a1)
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
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;
  struct {
    _QWORD v18[6];
    int v19;
    char gap84_[4];
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v18_;

  v18_.v20 = 0;
  v18_.v21 = 0;
  v18_.v22 = 0;
  v18_.v19 = 0;
  v18_.v18[0] = 0x800000018LL;
  v18_.v18[1] = 0x500000050LL;
  v18_.v18[2] = 0x10000000100000LL;
  memset(&v18_.v18[3], 0, 24);
  game_1366bd0((void*)(&v16_.v16), (__int64)"Layout/Battle.arc",
               (__int64)"Battle_BattleHud", (__int64)v18_.v18);
  v2 = v16_.v16;
  v3 = v16_.v17;
  v4 = a1[2];
  v16_.v16 = 0;
  v16_.v17 = 0;
  a1[1] = v2;
  a1[2] = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v16_.v17;
  if (v16_.v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16_.v17 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[2];
  v15[0] = a1[1];
  v15[1] = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0_alt1(a1 + 3, v15);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0_alt1(a1 + 3, v15);
  }
  v7 = v18_.v20;
  if (v18_.v20 != 0) {
    v8 = v18_.v21;
    v9 = fw_memory_g_heap_manager_ptr;
    if (v18_.v20 == v18_.v21) {
      goto LABEL_22;
    }
    v10 = v18_.v21;
    do {
      v11 = *(_BYTE*)(v10 - 24);
      v10 -= 24;
      if ((v11 & 1) != 0) {
        v12 = *(_QWORD*)(v8 - 8);
        if (v12 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v13 = 128;
          }
          else {
            v13 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v13, v12);
        }
      }
      v8 = v10;
    } while (v10 != v7);
    v18_.v21 = v7;
    v7 = v18_.v20;
    if (v18_.v20 != 0) {
    LABEL_22:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v14, v7);
    }
  }
}

__attribute__((swiftcall)) void game_18c8580(PSEUDO_X8 x8_, __int64* result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  int v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64** v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29[2];
  struct {
    __int64* v30;
    __int64* v31;
  } v30_;
  struct {
    __int64* v32;
    __int64 v33;
  } v32_;

  if (result[5] == 0) {
    goto LABEL_33;
  }
  v4 = result;
  result = (__int64*)result[4];
  if (result == nullptr) {
    goto LABEL_33;
  }
  result = (__int64*)std___1___shared_weak_count_lock((__int64)result);
  if (result == nullptr) {
  LABEL_11:
    v8 = v4[4];
    if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
      goto LABEL_33;
    }
    goto LABEL_16;
  }
  v5 = v4[3];
  if (v5 != 0) {
    v2 = *(unsigned __int8*)(v5 + 24);
    v6 = v5 + 152;
    if (v2 == 0) {
      v6 = 0;
    }
    v7 = v6 != v4[5];
  }
  else {
    v7 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 1),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7) {
      goto LABEL_11;
    }
  }
  else {
    v9 = (__int64)result;
    (*(void (**)(__int64*))(*result + 16))(result);
    result = (__int64*)std___1___shared_weak_count___release_weak(v9);
    if (v7) {
      goto LABEL_11;
    }
  }
  if ((v2 & 1) == 0) {
  LABEL_33:
    *a2 = 0;
    a2[1] = 0;
    {
      result;
      return;
    }
  }
LABEL_16:
  if (v4[16] == 0) {
    goto LABEL_33;
  }
  v10 = v4[20];
  if (v10 == 0) {
    goto LABEL_33;
  }
  if (v4[22] == 0) {
    goto LABEL_33;
  }
  v11 = *(_QWORD**)v4[19];
  if (v11 == nullptr) {
    goto LABEL_33;
  }
  v12 = (_QWORD*)*v11;
  if (*v11 == 0) {
    goto LABEL_33;
  }
  v13 = v10 - 1;
  if ((v10 & (v10 - 1)) == 0) {
    while (1) {
      v15 = v12[1];
      if (v15 != 0) {
        if ((v15 & v13) != 0) {
          goto LABEL_33;
        }
      }
      else if (v12[2] == 0) {
        goto LABEL_35;
      }
      v12 = (_QWORD*)*v12;
      if (v12 == nullptr) {
        goto LABEL_33;
      }
    }
  }
  while (1) {
    v14 = v12[1];
    if (v14 == 0) {
      break;
    }
    if (v14 < v10 || v14 % v10 != 0) {
      goto LABEL_33;
    }
  LABEL_24:
    v12 = (_QWORD*)*v12;
    if (v12 == nullptr) {
      goto LABEL_33;
    }
  }
  if (v12[2] != 0) {
    goto LABEL_24;
  }
LABEL_35:
  result = (__int64*)v12[4];
  v30_.v30 = nullptr;
  v30_.v31 = nullptr;
  if (result != nullptr &&
      (result = (__int64*)std___1___shared_weak_count_lock((__int64)result),
       v30_.v31 = result, result != nullptr) &&
      (v16 = result, result = (__int64*)v12[3], v30_.v30 = result,
       result != nullptr) &&
      (v17 = v16,
       (result = (__int64*)__dynamic_cast(
            result, GameData_212dfc0[0], GameData_21320c8[0], 0)) != nullptr)) {
    v18 = &v30_.v30;
    v32_.v32 = result;
    v32_.v33 = (__int64)v17;
  }
  else {
    v18 = &v32_.v32;
  }
  *v18 = nullptr;
  v18[1] = nullptr;
  v19 = (__int64)v30_.v31;
  if (v30_.v31 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v30_.v31 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    result = (__int64*)std___1___shared_weak_count___release_weak(v19);
  }
  v20 = v32_.v32;
  if (v32_.v32 == nullptr) {
    v28 = v32_.v33;
    if (v32_.v33 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
      result = (__int64*)std___1___shared_weak_count___release_weak(v28);
    }
    goto LABEL_33;
  }
  v21 = v32_.v33;
  v29[0] = v32_.v32;
  v29[1] = (_QWORD*)v32_.v33;
  if (v32_.v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32_.v33 + 16), 1u,
                              memory_order_relaxed);
  }
  result = (__int64*)v4[4];
  if (result == nullptr) {
    goto LABEL_58;
  }
  v22 = (_QWORD*)v4[16];
  result = (__int64*)std___1___shared_weak_count_lock((__int64)result);
  if (result == nullptr) {
    goto LABEL_58;
  }
  v23 = v4[3];
  v24 = (__int64)result;
  if (v23 != 0) {
    result = X8CALL_X0(__int64*, ProcManager_18c88c0((void*)(&v30_.v30), v23,
                                                     v29, v20 + 2, v22));
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    result = (__int64*)std___1___shared_weak_count___release_weak(v24);
  }
  if (v23 != 0) {
    v25 = (__int64)v30_.v31;
    *a2 = 0;
    a2[1] = 0;
    if (v25 != 0) {
      v26 = std___1___shared_weak_count_lock(v25);
      a2[1] = v26;
      if (v26 != 0) {
        *a2 = v30_.v30;
      }
      result = (__int64*)std___1___shared_weak_count___release_weak(v25);
    }
  }
  else {
  LABEL_58:
    *a2 = 0;
    a2[1] = 0;
  }
  if (v21 != 0) {
    result = (__int64*)std___1___shared_weak_count___release_weak(v21);
  }
  v27 = v32_.v33;
  if (v32_.v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    {
      (__int64*)std___1___shared_weak_count___release_weak(v27);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 game_18ca1f0(__int64 result, float a2)
{
  int v2;
  __int64 v3;
  int v4;
  float v5;
  float v6;
  float v8;
  float v9;
  float v10;
  float v12;
  float v13;
  const char* v14;
  float v15;
  float v16;
  float v17;
  _QWORD v18[25];

  v2 = *(_DWORD*)(result + 1152);
  v3 = result;
  if (v2 == 0) {
    v10 = *(float*)(result + 1112);
  LABEL_29:
    *(float*)(v3 + 1104) = v10;
    return result;
  }
  v4 = *(unsigned __int8*)(result + 1144);
  v5 = *(float*)(result + 1104);
  v6 = *(float*)(result + 1112);
  if (v4 != 1 || v5 < v6) {
    v8 = 0x0.0p+0f;
    if (v5 >= 0x1.4000000000000p+3f) {
      v9 = *(float*)(result + 1108);
      if (v5 >= (float)(v9 + 0x1.4000000000000p+3f)) {
        v8 = 0x0.0p+0f;
        if (v5 >= v6) {
          if ((v4 & 1) == 0) {
            v8 = 0x0.0p+0f;
            *(_DWORD*)(result + 1104) = 0;
          }
        }
        else {
          v8 = 0x1.0000000000000p+0f;
        }
      }
      else {
        v8 = (float)(v5 + -0x1.4000000000000p+3f) / v9;
      }
    }
    v12 = (float)*(int*)(result + 1148) + (float)((float)v2 * v8);
    v13 = 0x1.8000000000000p+3f;
    if (*(_BYTE*)(result + 1145) != 0) {
      v13 = 0x1.8000000000000p+2f;
    }
    if ((*(_BYTE*)(result + 1120) & 1) != 0) {
      v14 = *(const char**)(result + 1136);
    }
    else {
      v14 = (const char*)(result + 1121);
    }
    v15 = v12 / v13;
    if (*v14 != 0) {
      GameHr_1562680_alt1(result + 88, v14, 0x0.0p+0f);
      v16 = LayoutAccessor_15638b0_alt1((__int64*)(v3 + 88), v14, 1);
      v17 = 0x1.0000000000000p+0f;
      if (v15 <= 0x1.0000000000000p+0f) {
        v17 = v15;
      }
      if (v15 < 0x0.0p+0f) {
        v17 = 0x0.0p+0f;
      }
      LayoutAccessor_15636c0(v3 + 88, (__int64)v14, 1, v17 * v16);
    }
    result = snd_fnd_WeakHandle_isValid((__int64*)(v3 + 1088));
    if ((result & 1) != 0) {
      snd_Fade_Fade_10c830((__int64)v18, 0x0.0p+0f);
      snd_startSurroundPan((__int64*)(v3 + 1088), (__int64)v18, v15);
      result = snd_Fade_Destroy_Fade(v18);
    }
    v10 = a2 + *(float*)(v3 + 1104);
    goto LABEL_29;
  }
  return result;
}

__int64 game_18d62f0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  struct {
    __int64 v17[2];
    __int64 v18;
  } v17_;
  int v19;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)a1 = 0;
  *(_DWORD*)(a1 + 56) = 1065353216;
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      72, 16, 0),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_18d9d20(v3, (__int64*)"Fs.bin", 6),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = v3;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v5 = fw_memory_HeapManager_Allocate(*v2, 240, 16, 0),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_18db840(v5, (__int64*)"Fs.bin", 6),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = v5;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v19 = 0;
  LOBYTE(v17_.v17[0]) = 6;
  *(_DWORD*)((char*)v17_.v17 + 1) = 7368801;
  v7 = game_18dc580((float*)(a1 + 24), (unsigned __int8*)v17_.v17, v17_.v17,
                    &v19),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v8 & 1) == 0) {
    *(_DWORD*)(v7 + 40) = v19;
  }
  if ((v17_.v17[0] & 1) != 0 && v17_.v18 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v9, v17_.v18),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v10 = *(_QWORD*)(a1 + 16);
  v11 = *(unsigned __int8*)(v10 + 192);
  v12 = (v11 & 1) == 0;
  v13 = v11 >> 1;
  if (v12) {
    v14 = v10 + 193;
  }
  else {
    v14 = *(_QWORD*)(v10 + 208);
  }
  if (v12) {
    v15 = v13;
  }
  else {
    v15 = *(_QWORD*)(v10 + 200);
  }
  game_18d6470(a1, v14, v15, **(_DWORD**)(v10 + 168)),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return GameRoutine_18d6580((_QWORD*)a1);
}

void game_18d6470(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{

#pragma clang fp contract(off)
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  struct {
    __int64 v13[2];
    __int64 v14;
  } v13_;
  int v15;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = a4;
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (a3 >= 0x17) {
    v7 = a2;
    if ((a3 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (a3 | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    a2 = v7;
    v6 = (char*)v9;
    v13_.v13[1] = a3;
    v13_.v14 = v9;
    v13_.v13[0] = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(v13_.v13[0]) = 2 * a3;
  v6 = (char*)v13_.v13 + 1;
  if (a3 != 0) {
  LABEL_9:
    memmove((__int64)v6, a2, a3),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v6[a3] = 0;
  v10 = game_18dc580((float*)(a1 + 24), (unsigned __int8*)v13_.v13, v13_.v13,
                     &v15),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v11 & 1) == 0) {
    *(_DWORD*)(v10 + 40) = v15;
  }
  if ((v13_.v13[0] & 1) != 0 && v13_.v14 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  v13_.v14),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

void game_18dcae0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64** v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;

  v2 = GameData_212e530[0];
  *(_QWORD*)a1 = gfxa_UpscalerSetting_vtable;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  v3 = v2 + 16;
  *(_BYTE*)(a1 + 64) = 26;
  *(_BYTE*)(a1 + 78) = 0;
  *(_BYTE*)(a1 + 88) = 1;
  *(_QWORD*)(a1 + 56) = v2 + 16;
  v4 = (__int64**)(a1 + 56);
  qmemcpy((void*)(a1 + 65), "UpscalingType", 13);
  fw_graphics_RegisterProperty((_QWORD*)a1, a1 + 56);
  *(_BYTE*)(a1 + 92) = 0;
  *(_BYTE*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  v5 = GameData_212e550[0] + 2;
  *(_QWORD*)(a1 + 136) = v3;
  *(_DWORD*)(a1 + 128) = 1;
  *(_BYTE*)(a1 + 168) = 1;
  strcpy((char*)(a1 + 144), "(UpsacleQualityPreset");
  *v4 = v5;
  fw_graphics_RegisterProperty((_QWORD*)a1, a1 + 136);
  *(_QWORD*)(a1 + 216) = v3;
  *(_BYTE*)(a1 + 172) = 0;
  *(_BYTE*)(a1 + 224) = 20;
  *(_BYTE*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 136) = v5;
  *(_DWORD*)(a1 + 208) = 0;
  *(_BYTE*)(a1 + 248) = 1;
  strcpy((char*)(a1 + 225), "DLSSPreset");
  fw_graphics_RegisterProperty((_QWORD*)a1, a1 + 216);
  *(_BYTE*)(a1 + 252) = 0;
  *(_BYTE*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 216) = v5;
  *(_DWORD*)(a1 + 288) = 1;
  *(_QWORD*)(a1 + 296) = v3;
  *(_BYTE*)(a1 + 304) = 26;
  *(_BYTE*)(a1 + 328) = 1;
  strcpy((char*)(a1 + 305), "DLSSSharpness");
  fw_graphics_RegisterProperty((_QWORD*)a1, a1 + 296);
  *(_BYTE*)(a1 + 332) = 0;
  *(_BYTE*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  v6 = GameData_212e520[0] + 16;
  *(_DWORD*)(a1 + 368) = 1065353216;
  *(_QWORD*)(a1 + 376) = v3;
  *(_BYTE*)(a1 + 408) = 1;
  *(_QWORD*)(a1 + 296) = v6;
  strcpy((char*)(a1 + 384), " DLSSAutoExposure");
  fw_graphics_RegisterProperty((_QWORD*)a1, a1 + 376);
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_WORD*)(a1 + 409) = 0;
  v7 = GameData_212e560[0];
  *(_BYTE*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 376) = v7 + 2;
}

void game_18e7ac0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD v24[2];
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;
  struct {
    _QWORD v27[6];
    int v28;
    char gap84_[4];
    __int64 v29;
    __int64 v30;
    __int64 v31;
  } v27_;

  memset(&v27_.v27[3], 0, 24);
  v27_.v29 = 0;
  v27_.v30 = 0;
  v27_.v31 = 0;
  v27_.v28 = 0;
  v27_.v27[0] = 0x800000018LL;
  v27_.v27[1] = 0x500000030LL;
  v27_.v27[2] = 0x200000;
  game_1366bd0((void*)(&v25_.v25), (__int64)"Layout/Common.arc",
               (__int64)"Common_MiniMap", (__int64)v27_.v27);
  v2 = v25_.v25;
  v3 = v25_.v26;
  v4 = *(_QWORD*)(a1 + 32);
  v25_.v25 = 0;
  v25_.v26 = 0;
  *(_QWORD*)(a1 + 24) = v2;
  *(_QWORD*)(a1 + 32) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v25_.v26;
  if (v25_.v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      128, 16, 0);
  *(_QWORD*)(v7 + 16) = 0;
  v8 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(a1 + 48) = v7;
  *(_QWORD*)v7 = GameData_1fa9430;
  *(_QWORD*)(v7 + 8) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 48) = v7 + 56;
  *(_DWORD*)(v7 + 104) = 1065353216;
  *(_QWORD*)(v7 + 24) = 0;
  *(_QWORD*)(a1 + 40) = v7 + 24;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v10 = *(_QWORD*)(a1 + 32);
  v9 = *(_QWORD**)(a1 + 40);
  v24[0] = *(_QWORD*)(a1 + 24);
  v24[1] = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0_alt1(v9, v24);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0_alt1(v9, v24);
  }
  LayoutAccessor_155e830(*(_QWORD*)(a1 + 40), 0);
  ui_LayoutAccessor_SetPriority(*(_QWORD*)(a1 + 40), -1);
  ui_LayoutAccessor_SetPaneVisible_alt1(*(_QWORD*)(a1 + 40),
                                        (__int64)"L_Weapon0", 0);
  ui_LayoutAccessor_SetPaneVisible_alt1(*(_QWORD*)(a1 + 40),
                                        (__int64)"L_Efficacy0", 0);
  v11 = *(__int64**)(a1 + 40);
  *(_BYTE*)(a1 + 220) = 1;
  v12 = ui_LayoutAccessor_FindPane_alt1(v11, (__int64)"L_Terrain0");
  *(_BYTE*)(v12 + 88) &= ~1u;
  v13 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)(a1 + 40),
                                        (__int64)"L_Object0");
  *(_BYTE*)(v13 + 88) &= ~1u;
  v14 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)(a1 + 40),
                                        (__int64)"L_Unit0");
  *(_BYTE*)(v14 + 88) &= ~1u;
  v15 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)(a1 + 40),
                                        (__int64)"L_Unit_EnemyLeader0");
  *(_BYTE*)(v15 + 88) &= ~1u;
  v16 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)(a1 + 40),
                                        (__int64)"L_Unit_ThirdLeader0");
  v17 = v27_.v29;
  *(_BYTE*)(v16 + 88) &= ~1u;
  if (v17 != 0) {
    v18 = v27_.v30;
    if (v17 == v27_.v30) {
      goto LABEL_25;
    }
    v19 = v27_.v30;
    do {
      v20 = *(_BYTE*)(v19 - 24);
      v19 -= 24;
      if ((v20 & 1) != 0) {
        v21 = *(_QWORD*)(v18 - 8);
        if (v21 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
            v22 = 128;
          }
          else {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v22, v21);
        }
      }
      v18 = v19;
    } while (v19 != v17);
    v27_.v30 = v17;
    v17 = v27_.v29;
    if (v27_.v29 != 0) {
    LABEL_25:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v23, v17);
    }
  }
}

unsigned __int64 game_18edba0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 i;
  __int64 v6;
  int j;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
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
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 k;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int m;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
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
  unsigned __int64 result;
  __int64 v71;
  __int64 v72;
  struct {
    const char* v73;
    __int64 v74;
    __int64 v75;
    int v76;
    char gap44_[4];
    __int64 v77;
    __int64 v78;
    int v79;
  } v73_;
  struct {
    __int64* v80;
    __int64 v81;
  } v80_;
  struct {
    __int64* v82;
    __int64 v83;
  } v82_;
  struct {
    __int64* v84;
    __int64 v85;
  } v84_;
  struct {
    __int64* v86;
    __int64 v87;
  } v86_;
  struct {
    __int64* v88;
    __int64 v89;
  } v88_;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = *(__int64**)(a1 + 16);
    }
    else {
      v4 = nullptr;
    }
    if (*(_DWORD*)(a1 + 8) != 0) {
      goto LABEL_7;
    }
  }
  else {
    v3 = 0;
    v4 = nullptr;
    if (*(_DWORD*)(a1 + 8) != 0) {
      goto LABEL_7;
    }
  }
  ui_LayoutAccessor_SetPriority((__int64)v4, -1);
LABEL_7:
  v88_.v88 = v4;
  v88_.v89 = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  NpcIconList_Unknown2(a1 + 136, (__int64)&v88_.v88);
  if (v88_.v89 != 0) {
    std___1___shared_weak_count___release_weak(v88_.v89);
  }
  v86_.v86 = v4;
  v86_.v87 = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  CondTalkIconList_Unknown2(a1 + 216, (__int64)&v86_.v86);
  if (v86_.v87 != 0) {
    std___1___shared_weak_count___release_weak(v86_.v87);
  }
  v84_.v84 = v4;
  v84_.v85 = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  QuestIconList_Unknown2(a1 + 352, &v84_.v84);
  if (v84_.v85 != 0) {
    std___1___shared_weak_count___release_weak(v84_.v85);
  }
  v71 = v3;
  v6 = *(_QWORD*)(a1 + 432);
  for (i = *(_QWORD*)(a1 + 440); i != v6; GameRoutine_18f4600(i)) {
    i -= 208;
  }
  *(_QWORD*)(a1 + 440) = v6;
  for (j = 0; j != 48; ++j) {
    sprintf((__int64)&v82_.v82, "L_Facility%d", j);
    if (j != 0) {
      LayoutAccessor_1560520(v4, (__int64)"L_Facility0", "N_Facility",
                             (__int64)&v82_.v82);
    }
    LayoutAccessor_1560070((void*)(&v73_.v73), v4, (const char*)&v82_.v82);
    if (v73_.v74 != 0) {
      v8 = std___1___shared_weak_count_lock(v73_.v74);
      v9 = (__int64*)v73_.v73;
      if (v73_.v74 != 0) {
        std___1___shared_weak_count___release_weak(v73_.v74);
      }
      if (v8 != 0 && v9 != nullptr) {
        v10 = ui_LayoutAccessor_FindPane_alt1(v4, (__int64)&v82_.v82);
        v11 = ui_LayoutAccessor_FindPane_alt1(v9, (__int64)"IconFacility");
        if (v11 != 0) {
          v12 =
              __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
        }
        else {
          v12 = 0;
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        std___1___shared_weak_count___release_weak(v8);
        v13 = *(_QWORD*)(a1 + 440);
        v14 = *(_QWORD*)(a1 + 448);
        if (v13 >= v14) {
          v16 = *(_QWORD*)(a1 + 432);
          v17 = v13 - v16;
          v18 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(v13 - v16) >> 4) + 1;
          if (v18 > 0x13B13B13B13B13BLL) {
            GameRoutine_18f46f0();
          }
          v19 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(v14 - v16) >> 4);
          if (2 * v19 > v18) {
            v18 = 2 * v19;
          }
          if (v19 >= 0x9D89D89D89D89DLL) {
            v18 = 0x13B13B13B13B13BLL;
          }
          if (v18 > 0x13B13B13B13B13BLL) {
            GameRoutine_60a210();
          }
          v72 = 208 * v18;
          v20 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 208 * v18, 16, 0);
          v21 = v20 + v17;
          v22 = v20;
          *(_QWORD*)v21 = v10;
          *(_QWORD*)(v21 + 8) = v12;
          *(_QWORD*)(v21 + 16) = v9;
          *(_QWORD*)(v21 + 24) = v8;
          v23 = *(_QWORD*)(a1 + 432);
          v24 = *(_QWORD*)(a1 + 440);
          *(_DWORD*)(v21 + 152) = 32;
          *(_QWORD*)(v21 + 32) = 0;
          *(_BYTE*)(v21 + 88) = 0;
          *(_BYTE*)(v21 + 144) = 0;
          *(_QWORD*)(v21 + 48) = 0;
          *(_QWORD*)(v21 + 56) = 0;
          *(_QWORD*)(v21 + 64) = 0;
          *(_QWORD*)(v21 + 72) = 0;
          *(_DWORD*)(v21 + 80) = 0;
          *(_QWORD*)(v21 + 160) = 0;
          *(_QWORD*)(v21 + 168) = 0;
          *(_QWORD*)(v21 + 176) = 0;
          *(_QWORD*)(v21 + 184) = 0;
          *(_QWORD*)(v21 + 192) = 0;
          *(_BYTE*)(v21 + 204) = 0;
          *(_DWORD*)(v21 + 200) = 1117782016;
          v25 = v21 + v23 - v24;
          if (v23 != v24) {
            v26 = 0;
            do {
              v29 = v23 + v26;
              v30 = v25 + v26;
              *(_QWORD*)(v30 + 8) = *(_QWORD*)(v23 + v26 + 8);
              *(_QWORD*)v30 = *(_QWORD*)(v23 + v26);
              *(_QWORD*)(v30 + 16) = *(_QWORD*)(v23 + v26 + 16);
              *(_QWORD*)(v30 + 24) = *(_QWORD*)(v23 + v26 + 24);
              *(_QWORD*)(v29 + 16) = 0;
              *(_QWORD*)(v29 + 24) = 0;
              *(_QWORD*)(v30 + 32) = *(_QWORD*)(v23 + v26 + 32);
              *(_QWORD*)(v30 + 56) = *(_QWORD*)(v23 + v26 + 56);
              *(_QWORD*)(v30 + 48) = *(_QWORD*)(v23 + v26 + 48);
              *(_QWORD*)(v30 + 72) = *(_QWORD*)(v23 + v26 + 72);
              *(_QWORD*)(v30 + 64) = *(_QWORD*)(v23 + v26 + 64);
              v31 = *(_DWORD*)(v23 + v26 + 80);
              *(_BYTE*)(v30 + 144) = 0;
              *(_DWORD*)(v30 + 80) = v31;
              *(_BYTE*)(v25 + v26 + 88) = 0;
              if (*(_BYTE*)(v23 + v26 + 144) == 1) {
                v32 = *(_QWORD*)(v29 + 88);
                v33 = *(_QWORD*)(v29 + 104);
                *(_QWORD*)(v25 + v26 + 96) = *(_QWORD*)(v29 + 96);
                *(_QWORD*)(v25 + v26 + 104) = v33;
                *(_QWORD*)(v25 + v26 + 88) = v32;
                *(_QWORD*)(v29 + 96) = 0;
                *(_QWORD*)(v29 + 104) = 0;
                *(_QWORD*)(v29 + 88) = 0;
                *(_QWORD*)(v30 + 120) = *(_QWORD*)(v29 + 120);
                v34 = *(_QWORD*)(v29 + 112);
                *(_QWORD*)(v30 + 128) = *(_QWORD*)(v29 + 128);
                *(_QWORD*)(v30 + 112) = v34;
                *(_QWORD*)(v29 + 112) = 0;
                *(_QWORD*)(v29 + 120) = 0;
                *(_QWORD*)(v29 + 128) = 0;
                LODWORD(v34) = *(_DWORD*)(v29 + 136);
                LOBYTE(v32) = *(_BYTE*)(v29 + 140);
                *(_BYTE*)(v30 + 144) = 1;
                *(_BYTE*)(v30 + 140) = v32;
                *(_DWORD*)(v30 + 136) = v34;
              }
              v26 += 208;
              *(_DWORD*)(v30 + 152) = *(_DWORD*)(v29 + 152);
              *(_QWORD*)(v30 + 168) = *(_QWORD*)(v29 + 168);
              v27 = *(_QWORD*)(v29 + 160);
              *(_QWORD*)(v30 + 176) = *(_QWORD*)(v29 + 176);
              *(_QWORD*)(v30 + 160) = v27;
              *(_QWORD*)(v29 + 160) = 0;
              *(_QWORD*)(v29 + 168) = 0;
              *(_QWORD*)(v29 + 176) = 0;
              *(_QWORD*)(v30 + 184) = *(_QWORD*)(v29 + 184);
              v28 = *(_QWORD*)(v29 + 192);
              *(_QWORD*)(v30 + 197) = *(_QWORD*)(v29 + 197);
              *(_QWORD*)(v30 + 192) = v28;
            } while (v29 + 208 != v24);
            do {
              GameRoutine_18f4600(v23);
              v23 += 208;
            } while (v23 != v24);
            v23 = *(_QWORD*)(a1 + 432);
          }
          v35 = v22 + v72;
          v15 = v21 + 208;
          *(_QWORD*)(a1 + 432) = v25;
          *(_QWORD*)(a1 + 440) = v21 + 208;
          *(_QWORD*)(a1 + 448) = v35;
          if (v23 != 0) {
            v36 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v36 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v23);
          }
        }
        else {
          *(_QWORD*)v13 = v10;
          *(_QWORD*)(v13 + 8) = v12;
          *(_QWORD*)(v13 + 16) = v9;
          *(_QWORD*)(v13 + 24) = v8;
          v15 = v13 + 208;
          *(_QWORD*)(v13 + 32) = 0;
          *(_BYTE*)(v13 + 88) = 0;
          *(_BYTE*)(v13 + 144) = 0;
          *(_QWORD*)(v13 + 48) = 0;
          *(_QWORD*)(v13 + 56) = 0;
          *(_QWORD*)(v13 + 64) = 0;
          *(_QWORD*)(v13 + 72) = 0;
          *(_DWORD*)(v13 + 80) = 0;
          *(_QWORD*)(v13 + 160) = 0;
          *(_QWORD*)(v13 + 168) = 0;
          *(_QWORD*)(v13 + 176) = 0;
          *(_QWORD*)(v13 + 184) = 0;
          *(_DWORD*)(v13 + 152) = 32;
          *(_QWORD*)(v13 + 192) = 0;
          *(_BYTE*)(v13 + 204) = 0;
          *(_DWORD*)(v13 + 200) = 1117782016;
        }
        *(_QWORD*)(a1 + 440) = v15;
        std___1___shared_weak_count___release_weak(v8);
      }
      else if (v8 == 0) {
        continue;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
  }
  v80_.v80 = v4;
  v80_.v81 = v71;
  if (v71 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 16), 1u,
                              memory_order_relaxed);
  }
  AreaChangeIconList_Unknown2(a1 + 272, (__int64)&v80_.v80);
  if (v80_.v81 != 0) {
    std___1___shared_weak_count___release_weak(v80_.v81);
  }
  LayoutAccessor_1560070((void*)(&v82_.v82), v4, "L_Player");
  if (v82_.v83 != 0) {
    v37 = std___1___shared_weak_count_lock(v82_.v83);
    v38 = v82_.v82;
    if (v37 != 0) {
      v39 = (__int64)v82_.v82;
    }
    else {
      v39 = 0;
    }
    if (v82_.v83 != 0) {
      std___1___shared_weak_count___release_weak(v82_.v83);
    }
    if (v39 != 0) {
      if (v37 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 16), 1u,
                                  memory_order_relaxed);
      }
      v40 = *(_QWORD*)(a1 + 480);
      *(_QWORD*)(a1 + 472) = v39;
      *(_QWORD*)(a1 + 480) = v37;
      if (v40 != 0) {
        std___1___shared_weak_count___release_weak(v40);
      }
      *(_QWORD*)(a1 + 456) =
          ui_LayoutAccessor_FindPane_alt1(v38, (__int64)"Sight");
      *(_QWORD*)(a1 + 464) =
          ui_LayoutAccessor_FindPane_alt1(v38, (__int64)"Player");
      GameHr_1562680_alt1((__int64)v38, "Loop", 0x1.0000000000000p+0f);
    }
    if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
      std___1___shared_weak_count___release_weak(v37);
    }
  }
  v41 = *(_QWORD*)(a1 + 488);
  for (k = *(_QWORD*)(a1 + 496); k != v41; k -= 64) {
    v48 = *(_QWORD*)(k - 48);
    if (v48 != 0) {
      std___1___shared_weak_count___release_weak(v48);
    }
  }
  *(_QWORD*)(a1 + 496) = v41;
  sprintf((__int64)&v82_.v82, "L_PlayerPath%d", 0);
  LayoutAccessor_1560070((void*)(&v73_.v73), v4, (const char*)&v82_.v82);
  if (v73_.v74 != 0) {
    v43 = std___1___shared_weak_count_lock(v73_.v74);
    if (v43 != 0) {
      v44 = (__int64)v73_.v73;
    }
    else {
      v44 = 0;
    }
    if (v73_.v74 != 0) {
      std___1___shared_weak_count___release_weak(v73_.v74);
    }
    if (v44 != 0) {
      v45 = ui_LayoutAccessor_FindPane_alt1(v4, (__int64)&v82_.v82);
      v73_.v73 = (const char*)v45;
      v73_.v74 = v44;
      v73_.v75 = v43;
      if (v43 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                                  memory_order_relaxed);
      }
      v46 = *(_QWORD*)(a1 + 496);
      v47 = *(_QWORD*)(a1 + 504);
      v73_.v76 = 0;
      v73_.v77 = 0;
      v73_.v78 = 0;
      v73_.v79 = 0;
      if (v46 >= v47) {
        v49 = GameRoutine_18f4720((__int64*)(a1 + 488), (__int64)&v73_.v73);
        v50 = v73_.v75;
        *(_QWORD*)(a1 + 496) = v49;
        if (v50 != 0) {
          std___1___shared_weak_count___release_weak(v50);
        }
      }
      else {
        *(_QWORD*)v46 = v45;
        *(_QWORD*)(v46 + 8) = v44;
        *(_QWORD*)(v46 + 16) = v43;
        *(_DWORD*)(v46 + 24) = 0;
        *(_DWORD*)(v46 + 48) = 0;
        *(_QWORD*)(v46 + 32) = 0;
        *(_QWORD*)(v46 + 40) = 0;
        *(_QWORD*)(a1 + 496) = v46 + 64;
      }
    }
    if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      std___1___shared_weak_count___release_weak(v43);
    }
  }
  for (m = 1; m != 24; ++m) {
    sprintf((__int64)&v82_.v82, "L_PlayerPath%d", m);
    LayoutAccessor_1560520(v4, (__int64)"L_PlayerPath0", "N_PlayerPath",
                           (__int64)&v82_.v82);
    LayoutAccessor_1560070((void*)(&v73_.v73), v4, (const char*)&v82_.v82);
    if (v73_.v74 != 0) {
      v52 = std___1___shared_weak_count_lock(v73_.v74);
      if (v52 != 0) {
        v53 = (__int64)v73_.v73;
      }
      else {
        v53 = 0;
      }
      if (v73_.v74 != 0) {
        std___1___shared_weak_count___release_weak(v73_.v74);
      }
      if (v53 != 0) {
        v54 = ui_LayoutAccessor_FindPane_alt1(v4, (__int64)&v82_.v82);
        v73_.v73 = (const char*)v54;
        v73_.v74 = v53;
        v73_.v75 = v52;
        if (v52 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 16), 1u,
                                    memory_order_relaxed);
        }
        v55 = *(_QWORD*)(a1 + 496);
        v56 = *(_QWORD*)(a1 + 504);
        v73_.v76 = 0;
        v73_.v77 = 0;
        v73_.v78 = 0;
        v73_.v79 = 0;
        if (v55 >= v56) {
          v57 = GameRoutine_18f4720((__int64*)(a1 + 488), (__int64)&v73_.v73);
          v58 = v73_.v75;
          *(_QWORD*)(a1 + 496) = v57;
          if (v58 != 0) {
            std___1___shared_weak_count___release_weak(v58);
          }
        }
        else {
          *(_QWORD*)v55 = v54;
          *(_QWORD*)(v55 + 8) = v53;
          *(_QWORD*)(v55 + 16) = v52;
          *(_DWORD*)(v55 + 24) = 0;
          *(_DWORD*)(v55 + 48) = 0;
          *(_QWORD*)(v55 + 32) = 0;
          *(_QWORD*)(v55 + 40) = 0;
          *(_QWORD*)(a1 + 496) = v55 + 64;
        }
      }
      if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
        std___1___shared_weak_count___release_weak(v52);
      }
    }
  }
  LayoutAccessor_1560070((void*)(&v82_.v82), v4, "L_Target");
  if (v82_.v83 != 0) {
    v59 = std___1___shared_weak_count_lock(v82_.v83);
    v60 = (__int64)v82_.v82;
    if (v59 != 0) {
      v61 = (__int64)v82_.v82;
    }
    else {
      v61 = 0;
    }
    if (v82_.v83 != 0) {
      std___1___shared_weak_count___release_weak(v82_.v83);
    }
    if (v61 != 0) {
      if (v59 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 16), 1u,
                                  memory_order_relaxed);
      }
      v62 = *(_QWORD*)(a1 + 552);
      *(_QWORD*)(a1 + 544) = v61;
      *(_QWORD*)(a1 + 552) = v59;
      if (v62 != 0) {
        std___1___shared_weak_count___release_weak(v62);
      }
      *(_QWORD*)(a1 + 528) =
          ui_LayoutAccessor_FindPane_alt1(v4, (__int64)"L_Target");
      GameHr_1562680_alt1(v60, "Loop", 0x1.0000000000000p+0f);
    }
    if (v59 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
      std___1___shared_weak_count___release_weak(v59);
    }
  }
  v73_.v73 = "L_MapImage";
  v73_.v74 = 10;
  v63 = v4[1];
  if (v63 == 0) {
    goto LABEL_139;
  }
  v64 = std___1___shared_weak_count_lock(v63);
  if (v64 == 0) {
    goto LABEL_139;
  }
  v65 = *v4;
  v66 = v64;
  if (*v4 != 0) {
    GameRoutine_1612a90((void*)((__int64*)&v82_.v82), *v4, (__int64)&v73_.v73);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v65 != 0) {
      goto LABEL_137;
    }
  LABEL_139:
    v67 = 0;
    v68 = 0;
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
    std___1___shared_weak_count___release_weak(v66);
    if (v65 == 0) {
      goto LABEL_139;
    }
  LABEL_137:
    v68 = (__int64)v82_.v82;
    v67 = v82_.v83;
  }
  v69 = *(_QWORD*)(a1 + 48);
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  *(_QWORD*)(a1 + 40) = v68;
  *(_QWORD*)(a1 + 48) = v67;
  if (v69 != 0) {
    std___1___shared_weak_count___release_weak(v69);
    if (v82_.v83 != 0) {
      std___1___shared_weak_count___release_weak(v82_.v83);
    }
  }
  *(_DWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 88) = 0x43BA800044468000LL;
  *(_QWORD*)(a1 + 64) = 0x442F0000442F0000LL;
  *(_QWORD*)(a1 + 72) = 0x4380000043800000LL;
  *(_DWORD*)(a1 + 12) = 1065353216;
  result = GameRoutine_18f34a0(
      a1, (unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 64LL));
  *(_BYTE*)(a1 + 777) = 1;
  if (v71 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
    return std___1___shared_weak_count___release_weak(v71);
  }
  return result;
}

void game_18eeb40(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  char v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64* v17;
  const char* v18;
  const char* v19;
  __int64* v20;
  _BYTE* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64* v31;
  const char* v32;
  const char* v33;
  const char** v34;
  const char* v35;
  const char* v36;
  char v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  const char** v41;
  unsigned __int64 v42;
  const char* v43;
  const char* v44;
  const char** v45;
  const char* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int8* v49;
  __int64 v50;
  unsigned __int8 v51;
  __int64 v52;
  unsigned __int64 v53;
  int v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  char* v57;
  __int64 v58;
  unsigned __int64 v59;
  char v60;
  __int64 v61;
  __int64 v62;
  __int8* v63;
  _BYTE* v64;
  __int64 v65;
  __int8* v66;
  signed __int64 v67;
  char* v68;
  signed __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v73;
  __int8* v74;
  __int64 v75;
  __int64 v76;
  const char* v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64* v87;
  unsigned __int64* v88;
  unsigned int v89;
  unsigned __int64 v90;
  __int64 v91;
  _BYTE* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  int v97;
  char* v98;
  __int64 v99;
  char* v100;
  __int64 v101;
  char* v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  char v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  __int64 v113;
  bool v114;
  unsigned __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64* v119;
  int v120;
  float v121;
  float v122;
  float v123;
  __int64* v124;
  __int64* v125;
  float v126;
  float v127;
  float v128;
  __int64* v129;
  float v130;
  float v131;
  float v132;
  __int64* v133;
  __int64* v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  __int64 v141;
  int v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  unsigned __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64 v148;
  char v149;
  __int64 v150;
  const char* v151;
  _BYTE* v152;
  const char* v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int128 v157;
  unsigned __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  char v169;
  bool v170;
  unsigned __int64 v171;
  __int64 v172;
  unsigned __int64 v173;
  __int64* v174;
  unsigned __int64 v175;
  __int64 v176;
  __int64 v177;
  bool v178;
  unsigned __int64 v179;
  __int64 v180;
  unsigned __int64 v181;
  int v182;
  unsigned __int64 v183;
  __int64 v184;
  bool v185;
  unsigned __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  __int64* v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  _BYTE* v194;
  unsigned __int64 v195;
  bool v196;
  unsigned __int64 v197;
  unsigned __int64 v198;
  __int64 v199;
  unsigned __int64 v200;
  __int8* v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  const char* v205;
  unsigned __int64 v206;
  unsigned __int8 v207;
  unsigned __int64 v208;
  unsigned __int64 v209;
  __int8* v210;
  bool v211;
  int v212;
  __int64 v215;
  unsigned __int64 v216;
  unsigned __int64 v217;
  __int64 v218;
  unsigned __int64 v219;
  unsigned __int64 v220;
  unsigned __int64 v221;
  __int64 v222;
  __int64 v223;
  int v224;
  unsigned __int64 v225;
  bool v226;
  unsigned __int64 v227;
  unsigned __int64 v228;
  __int64 v229;
  unsigned __int64 v230;
  __int8* v231;
  unsigned __int64 v232;
  const char* v233;
  __int64 v234;
  bool v235;
  unsigned int v236;
  __int64 v237;
  const char* v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  unsigned __int64 v243;
  bool v244;
  unsigned __int64 v245;
  const char* v246;
  unsigned __int64 v247;
  unsigned __int64* v248;
  __int64 v249;
  unsigned __int64 v250;
  __int64 v251;
  __int8* v252;
  unsigned __int64 v253;
  bool v254;
  __int64 v255;
  unsigned __int64 v256;
  unsigned __int64 v257;
  __int64 v258;
  unsigned __int64 v259;
  _QWORD* v260;
  _QWORD* v261;
  unsigned __int64 v262;
  __int64 v263;
  unsigned __int64 v264;
  unsigned __int64 v265;
  unsigned __int64 v266;
  unsigned __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  unsigned __int64 v272;
  __int64 v273;
  __int64* v274;
  __int64 v275;
  const char* v276;
  const char* v277;
  __int64* v278;
  _BYTE* v279;
  float32x4_t* v280;
  float32x4_t* v281;
  __int64 v282;
  unsigned __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  __int64* v291;
  _QWORD* v292;
  float32x4_t* v293;
  float32x4_t* v294;
  float32x4_t** v295;
  __int64 v296;
  float v297;
  float32x4_t** v298;
  float v299;
  float32x4_t v300;
  int8x16_t v301;
  char* v302;
  __int64 v303;
  unsigned __int64 v304;
  unsigned __int64 v305;
  __int64 v306;
  unsigned __int64 v307;
  __int64 v308;
  __int64 v309;
  float32x4_t** i;
  __int64 v311;
  unsigned __int64 v312;
  unsigned __int64 v313;
  unsigned __int64 v314;
  __int64 v315;
  char* v316;
  __int64 v317;
  __int64* v318;
  unsigned __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  unsigned __int64 v323;
  __int64 v324;
  unsigned __int64 v325;
  __int64* v326;
  __int64 v327;
  int v328;
  char v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  __int64 v333;
  __int64 v334;
  __int64 v335;
  char* v336;
  char* v337;
  int v338;
  char* v339;
  __int64 v340;
  int v341;
  unsigned int v342;
  _BOOL4 v345;
  float v347;
  unsigned __int64 v348;
  __int64 v349;
  float v350;
  __int64 v351;
  bool v352;
  float32x4_t* v353;
  __int64 v354;
  float32x4_t v355;
  float32x4_t v356;
  int8x16_t v357;
  float32x4_t v358;
  float32x4_t v359;
  float32x4_t v360;
  __int64 v361;
  char* v362;
  __int64 v363;
  _BYTE* v364;
  __int64* v365;
  __int64* j;
  __int64 v367;
  __int64* v368;
  __int64* k;
  __int64 v370;
  __int64* v371;
  __int64* m;
  __int64 v373;
  __int64* v374;
  __int64* n;
  __int64 v376;
  __int64* v377;
  __int64* ii;
  __int64 v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  unsigned __int64 v383;
  __int64 v384;
  __int64 v385;
  __int64 v386;
  __int64 v387;
  unsigned __int64 v388;
  __int64* v389;
  __int64 v390;
  __int64 v391;
  __int64 v392;
  __int64 v393;
  unsigned __int64 v394;
  __int64 v395;
  __int64 v396;
  __int64 v397;
  __int64 v398;
  __int64 v399;
  unsigned __int64 v400;
  __int64 v401;
  __int64 v402;
  unsigned __int64 v403;
  __int64 v404;
  _QWORD* v405;
  __int64 v406;
  unsigned __int64 v407;
  unsigned __int64 v408;
  const char* v409;
  __int64 v410;
  unsigned __int64 v411;
  __int64 v412;
  unsigned __int64 v413;
  __int64 v414;
  __int64 v415;
  char v416;
  __int64 v417;
  __int64 v418;
  unsigned __int64 v419;
  __int64 v420;
  __int64 v421;
  unsigned __int64 v422;
  __int64 v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  __int64 v428;
  __int64 v429;
  unsigned __int64 v430;
  char v431;
  __int64 v432;
  __int64 v433;
  __int64 v434;
  __int64 v435;
  __int64 v436;
  __int64 v437;
  int v438;
  unsigned __int64 v439;
  unsigned __int64 v440;
  unsigned __int64 v441;
  unsigned __int64 v442;
  __int64 v443;
  __int64 v444;
  const char* v445;
  __int64 v446;
  unsigned __int64 v447;
  _QWORD** v448;
  __int64 v449;
  __int64 v450;
  __int64 v451;
  __int64 v452;
  const char* v453;
  __int64 v454;
  __int64 v455;
  float* v456;
  __int64* jj;
  float v458;
  __int64 v460;
  __int64 v461;
  __int128 v462;
  _DWORD* v463;
  __int64 v464;
  __int64 v465;
  __int64 v466;
  __int64 v467;
  __int64* v468;
  __int64 v469;
  int* v470;
  __int64 v471;
  double v472;
  __int64 v478;
  __int64 v479;
  unsigned __int64 v480;
  __int64 v481;
  __int64 v482;
  __int64 kk;
  __int64 v484;
  __int64* v485;
  __int64 v486;
  __int64 v487;
  __int64 v488;
  unsigned __int64 v489;
  bool v490;
  __int64 v491;
  const char* v492;
  __int64 v493;
  unsigned int v494;
  unsigned int v495;
  char v496;
  float* v497;
  float v498;
  float v499;
  float v500;
  float v501;
  float v502;
  float v503;
  float v504;
  float v505;
  char v506;
  unsigned __int64 v507;
  unsigned __int64 v508;
  unsigned __int64 v509;
  unsigned __int64 v510;
  __int64 v511;
  __int64 v512;
  __int64 v513;
  float v514;
  int16x4_t v515;
  unsigned __int32 v516;
  __int64 v517;
  __int128 v518;
  __int64 v519;
  int v520;
  __int64* v521;
  int v522;
  __int64 v523;
  __int64 v524;
  __int64 v525;
  __int64 v526;
  __int64* v527;
  int v528;
  __int64 v529;
  int v530;
  __int64 v533;
  __int64 v534;
  __int64 v535;
  __int64 v536;
  float v537;
  __int64 v538;
  __int64 v539;
  __int64 v540;
  float v541;
  float v542;
  float v543;
  float v544;
  __int128 v545;
  float v546;
  float v547;
  float v548;
  float v549;
  float v550;
  float v551;
  __int64 v552;
  __int64 v553;
  __int64 v554;
  __int64 v555;
  __int64 v556;
  __int64 v557;
  float v558;
  float v559;
  float v560;
  float v561;
  float v562;
  float v563;
  float v564;
  char v565;
  float v566;
  float v567;
  float v568;
  float v569;
  float v570;
  char v571;
  _BYTE* v572;
  _QWORD* v573;
  _QWORD* v574;
  int v575;
  float v576;
  float v577;
  float v578;
  float v579;
  float v580;
  float v581;
  float v582;
  float v583;
  __int64 v584;
  char v585;
  __int64 v586;
  float v587;
  char v588;
  float v589;
  float v590;
  float v591;
  float v592;
  float v593;
  float v594;
  float v595;
  float v596;
  __int64 v597;
  char v598;
  float v599;
  float v600;
  __int64 v601;
  char v602;
  __int64 v603;
  __int64 v604;
  __int64 mm;
  __int64 v606;
  __int64 v607;
  __int64 v608;
  __int64 v609;
  __int64 v610;
  __int64 v611;
  __int64 v612;
  __int64 v613;
  __int64 v614;
  unsigned __int64 add;
  _BOOL4 v616;
  __int64 v617;
  _BYTE* v618;
  float v619;
  float v620;
  float v621;
  float v622;
  float v623;
  float v624;
  float v625;
  float v626;
  __int64 v627;
  char v628;
  __int64 v629;
  __int64 v630;
  __int64 v631;
  unsigned __int64 v632;
  float v633;
  __int64 v634;
  __int64 v635;
  char v636;
  __int64 v637;
  char v638;
  float v639;
  float v640;
  float v641;
  float v642;
  float v643;
  __int64 v644;
  char v645;
  __int64 v646;
  char v647;
  float32x4_t v648;
  float32x4_t v649;
  float32x4_t v650;
  int8x16_t v651;
  __int64 v652;
  __int64 v653;
  float32x4_t v654;
  int16x4_t v655;
  __int64 v656;
  __int128 v657;
  __int64 v658;
  __int64 v659;
  __int64 v660;
  __int64 v661;
  __int64 v662;
  __int64 v663;
  __int128 v664;
  float v665;
  __int64 v666;
  __int128 v667;
  __int64 v668;
  __int128 v669;
  float v670;
  __int64 v671;
  __int128 v672;
  __int64 v673;
  __int64 v674;
  __int128 v675;
  float v676;
  __int64 v677;
  __int64 v678;
  __int128 v679;
  __int64 v680;
  unsigned __int64 v681;
  float v682;
  __int64 v683;
  float32x4_t* v684;
  float v685;
  float v686;
  float v687;
  float v688;
  unsigned __int64 v689;
  __int64 v690;
  __int64* v691;
  __int64 v692;
  __int64 v693;
  __int64 v694;
  int v695;
  __int64 v696;
  __int64 v697;
  _BOOL4 v698;
  __int64 v699;
  __int64 v700;
  __int64 v701;
  __int64 v702;
  char v703;
  int v704;
  __int64 v705;
  __int64 v706;
  __int64 v707;
  unsigned __int64 v708;
  __int64* v709;
  __int64* nn;
  float v711;
  float v712;
  unsigned __int64 v713;
  float v714;
  __int64 v715;
  float v716;
  float v717;
  __int64 v718;
  float v719;
  __int64 v720;
  float v721;
  const char* v722;
  unsigned __int64 v723;
  float v724;
  char v725;
  __int64 v726;
  __int64 v727;
  __int64 v728;
  unsigned __int64 v729;
  unsigned __int64 v730;
  unsigned __int64 v731;
  __int64 v732;
  __int64 v733;
  float32x4_t v734;
  float v735;
  float32x4_t v736;
  __int64 v737;
  struct {
    __int64 v738;
    __int64 v739;
    char* v740;
  } v738_;
  __int64 v741[3];
  struct {
    float32x4_t v742;
    char* v743;
  } v742_;
  struct {
    float32x4_t v744;
    __int8* v745;
  } v744_;
  struct {
    _BYTE v746[7];
    char v747;
  } v746_;

  v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
  v2 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v2 != 0) {
    v3 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v4 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock(v4),
    v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    std___1___shared_weak_count___release_weak(v2),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    v737 = v5;
    v6 = v5 == 0 || v3 == 0;
    v7 = v6;
  }
  else {
    v737 = 0;
    v7 = 1;
  }
  if (*(_BYTE*)(a1 + 777) != 1) {
    goto LABEL_741;
  }
  v8 = *(unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 64LL);
  v9 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 72LL);
  if ((v8 & 1) == 0) {
    v9 = v8 >> 1;
  }
  if (((v9 == 0) | v7 & 1) != 0) {
    goto LABEL_741;
  }
  v10 = *(_QWORD*)(a1 + 672);
  if (v10 == 0) {
    goto LABEL_741;
  }
  v11 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               64LL);
  if (v11 != 0 &&
      (v12 = *(unsigned __int16*)(v10 + 40), *(_WORD*)(v10 + 40) != 0)) {
    v13 = *(_QWORD*)(v10 + 48);
    v14 = *(unsigned __int16*)(v10 + 64);
    v15 = *(__int64**)(v10 + 72);
    v16 = 0;
    v17 = game_vstring_kEmpty_ptr[0];
    while (1) {
      v18 = *(const char**)(v13 + 8 * v16);
      if (v18 != nullptr) {
        v19 = (*(_BYTE*)(v11 + 64) & 1) != 0 ? *(const char**)(v11 + 80)
                                             : (const char*)(v11 + 65);
        if (v19 != nullptr && strcmp(v18, v19) == 0) {
          v20 = v16 >= v14 ? v17 : v15;
          v21 = (_BYTE*)*v20;
          if (v21 != nullptr) {
            break;
          }
        }
      }
      ++v16;
      ++v15;
      if (v12 == v16) {
        goto LABEL_29;
      }
    }
  }
  else {
  LABEL_29:
    v21 = *(_BYTE**)(v10 + 56);
  }
  if (v21 != nullptr && *v21 != 0) {
    v22 = *(_QWORD*)(a1 + 48);
    if (v22 != 0) {
      v23 = std___1___shared_weak_count_lock(v22),
      v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      if (v23 != 0) {
        if (*(_QWORD*)(a1 + 40) == 0) {
          v37 = 0;
          goto LABEL_155;
        }
        v726 = v23;
        v729 = *(_QWORD*)(a1 + 40);
        v24 = *(_QWORD*)(a1 + 672);
        v25 = *(
            _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL) +
                     64LL);
        if (v25 != 0 &&
            (v26 = *(unsigned __int16*)(v24 + 40), *(_WORD*)(v24 + 40) != 0)) {
          v27 = *(_QWORD*)(v24 + 48);
          v28 = *(unsigned __int16*)(v24 + 64);
          v29 = *(__int64**)(v24 + 72);
          v30 = 0;
          v31 = game_vstring_kEmpty_ptr[0];
          while (1) {
            v32 = *(const char**)(v27 + 8 * v30);
            if (v32 != nullptr) {
              v33 = (*(_BYTE*)(v25 + 64) & 1) != 0 ? *(const char**)(v25 + 80)
                                                   : (const char*)(v25 + 65);
              if (v33 != nullptr && strcmp(v32, v33) == 0) {
                v34 = (const char**)(v30 >= v28 ? v31 : v29);
                v35 = *v34;
                if (*v34 != nullptr) {
                  break;
                }
              }
            }
            ++v30;
            ++v29;
            if (v26 == v30) {
              goto LABEL_50;
            }
          }
          v36 = *(const char**)(a1 + 56);
        }
        else {
        LABEL_50:
          v35 = *(const char**)(v24 + 56);
          v36 = *(const char**)(a1 + 56);
          if (v35 == nullptr) {
            if (v36 == nullptr) {
              goto LABEL_149;
            }
            goto LABEL_56;
          }
        }
        if (v36 != nullptr && strcmp(v36, v35) == 0) {
        LABEL_149:
          if ((*(_BYTE*)(v729 + 240) & 1) != 0) {
            v23 = v726;
            v37 = 1;
          }
          else {
            if (((*(__int64 (**)(unsigned __int64))(*(_QWORD*)v729 + 160LL))(
                     v729) &
                 1) != 0) {
              v37 = 1;
            }
            else {
              v37 = 0;
              *(_DWORD*)(a1 + 32) = *(_DWORD*)(v729 + 192);
            }
            v23 = v726;
          }
        LABEL_155:
          if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v79 = v23;
            (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
                v472 = COERCE_AS(__typeof__(v472),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
            std___1___shared_weak_count___release_weak(v79),
                v472 = COERCE_AS(__typeof__(v472),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
          }
          if ((v37 & 1) != 0) {
            goto LABEL_741;
          }
          goto LABEL_158;
        }
      LABEL_56:
        if (v25 != 0 &&
            (v38 = *(unsigned __int16*)(v24 + 40), *(_WORD*)(v24 + 40) != 0)) {
          v39 = *(_QWORD*)(v24 + 48);
          v40 = *(unsigned __int16*)(v24 + 64);
          v41 = *(const char***)(v24 + 72);
          v42 = 0;
          while (1) {
            v43 = *(const char**)(v39 + 8 * v42);
            if (v43 != nullptr) {
              v44 = (*(_BYTE*)(v25 + 64) & 1) != 0 ? *(const char**)(v25 + 80)
                                                   : (const char*)(v25 + 65);
              if (v44 != nullptr && strcmp(v43, v44) == 0) {
                v45 = (const char**)game_vstring_kEmpty_ptr[0];
                if (v42 < v40) {
                  v45 = v41;
                }
                v46 = *v45;
                if (*v45 != nullptr) {
                  break;
                }
              }
            }
            ++v42;
            ++v41;
            if (v38 == v42) {
              goto LABEL_70;
            }
          }
        }
        else {
        LABEL_70:
          v46 = *(const char**)(v24 + 56);
        }
        *(_QWORD*)(a1 + 56) = v46;
        v47 = strlen(v46),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
        if (v47 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_981;
        }
        v48 = v47;
        if (v47 >= 0x17) {
          if ((v47 | 7) == 0x17) {
            v50 = 26;
          }
          else {
            v50 = (v47 | 7) + 1;
          }
          v49 = (__int8*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v50, 16, 0),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
          LANES128(v742_.v742).n128_u64[1] = v48;
          v742_.v743 = v49;
          LANES128(v742_.v742).n128_u64[0] = v50 | 1;
        }
        else {
          LANES128(v742_.v742).n128_u8[0] = 2 * v47;
          v49 = &LANES128(v742_.v742).n128_i8[1];
          if (v47 == 0) {
            goto LABEL_80;
          }
        }
        memmove((__int64)v49, (__int64)v46, v48),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
      LABEL_80:
        v49[v48] = 0;
        v51 = LANES128(v742_.v742).n128_u8[0];
        v53 = LANES128(v742_.v742).n128_u64[1];
        v52 = (__int64)v742_.v743;
        v54 = LANES128(v742_.v742).n128_u8[0] & 1;
        v55 = (unsigned __int64)LANES128(v742_.v742).n128_u8[0] >> 1;
        if (v54 != 0) {
          v56 = LANES128(v742_.v742).n128_u64[1];
        }
        else {
          v56 = (unsigned __int64)LANES128(v742_.v742).n128_u8[0] >> 1;
        }
        if ((LANES128(v742_.v742).n128_u8[0] & 1) != 0) {
          v57 = v742_.v743;
        }
        else {
          v57 = &LANES128(v742_.v742).n128_i8[1];
        }
        v58 = memchr((__int64)v57, 1, v56),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
        if (v58 == 0 || (char*)v58 != v57) {
          v59 = v56 + 24;
          if (v56 + 24 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_981;
          }
          if (v59 > 0x16) {
            if ((v59 | 7) == 0x17) {
              v62 = 26;
            }
            else {
              v62 = (v59 | 7) + 1;
            }
            v61 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v62, 16, 0),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            LANES128(v744_.v744).n128_u64[1] = v56 + 24;
            v744_.v745 = (__int8*)v61;
            LANES128(v744_.v744).n128_u64[0] = v62 | 1;
            v60 = v62 | 1;
          }
          else {
            v60 = 2 * v59;
            v61 = 0;
            v744_.v745 = nullptr;
            v744_.v744 = COERCE_AS(float32x4_t, (unsigned __int8)(2 * v59));
          }
          if ((v60 & 1) != 0) {
            v63 = (__int8*)v61;
          }
          else {
            v63 = &LANES128(v744_.v744).n128_i8[1];
          }
          qmemcpy(v63, "Layout/Textures/MiniMap/", 24);
          if ((v60 & 1) != 0) {
            v64 = (_BYTE*)(v61 + 24);
          }
          else {
            v64 = v746_.v746;
          }
          if (v56 != 0) {
            memmove((__int64)v64, (__int64)v57, v56),
                v472 = COERCE_AS(__typeof__(v472),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
          }
          v64[v56] = 0;
          if (v54 != 0 && v52 != 0) {
            v65 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v65 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, v52),
                v472 = COERCE_AS(__typeof__(v472),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
          }
          v53 = LANES128(v744_.v744).n128_u64[1];
          v52 = (__int64)v744_.v745;
          v51 = LANES128(v744_.v744).n128_u8[0];
          v54 = LANES128(v744_.v744).n128_u8[0] & 1;
          v55 = LANES128(v744_.v744).n128_u8[0] >> 1;
          v742_.v742 = v744_.v744;
          v742_.v743 = v744_.v745;
        }
        if (v54 != 0) {
          v66 = (__int8*)v52;
        }
        else {
          v66 = &LANES128(v742_.v742).n128_i8[1];
        }
        if (v54 != 0) {
          v67 = v53;
        }
        else {
          v67 = v55;
        }
        if (v67 >= 5) {
          v68 = &v66[v67];
          v69 = v67;
          v70 = (__int64)v66;
          while (1) {
            v71 = memchr(v70, 46, v69 - 4),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            if (v71 == 0) {
              goto LABEL_126;
            }
            if (*(_DWORD*)v71 == 1953391150 && *(_BYTE*)(v71 + 4) == 120) {
              break;
            }
            v70 = v71 + 1;
            v69 = (signed __int64)&v68[-v70];
            if ((__int64)&v68[-v70] < 5) {
              goto LABEL_126;
            }
          }
          if ((char*)v71 != v68 && v71 - (_QWORD)v66 != -1) {
            goto LABEL_141;
          }
        }
      LABEL_126:
        v73 = v67 + 5;
        if ((unsigned __int64)(v67 + 5) < 0xFFFFFFFFFFFFFFF7LL) {
          if (v73 >= 0x17) {
            if ((v73 | 7) == 0x17) {
              v75 = 26;
            }
            else {
              v75 = (v73 | 7) + 1;
            }
            v74 = (__int8*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v75, 16, 0),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            LANES128(v744_.v744).n128_u64[1] = v67 + 5;
            v744_.v745 = v74;
            LANES128(v744_.v744).n128_u64[0] = v75 | 1;
          }
          else {
            v744_.v745 = nullptr;
            v744_.v744 = COERCE_AS(float32x4_t, (unsigned __int8)(2 * v73));
            v74 = &LANES128(v744_.v744).n128_i8[1];
            if (v67 == 0) {
            LABEL_135:
              strcpy(&v74[v67], ".bntx");
              if (v54 != 0 && v52 != 0) {
                v76 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v76 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v52),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
              }
              v52 = (__int64)v744_.v745;
              v51 = LANES128(v744_.v744).n128_u8[0];
              v742_.v742 = v744_.v744;
              v742_.v743 = v744_.v745;
            LABEL_141:
              if ((v51 & 1) != 0) {
                v77 = (const char*)v52;
              }
              else {
                v77 = &LANES128(v742_.v742).n128_i8[1];
              }
              AsyncLoadImage_17e4db0(v729, v77, 0),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
              if ((LANES128(v742_.v742).n128_u8[0] & 1) != 0 &&
                  v742_.v743 != nullptr) {
                v78 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v78 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v78,
                    (__int64)v742_.v743),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
              }
              goto LABEL_149;
            }
          }
          memmove((__int64)v74, (__int64)v66, v67),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
          goto LABEL_135;
        }
      LABEL_981:
        String_60a1d0(), v472 = COERCE_AS(__typeof__(v472),
                                          PSEUDO_REGISTER(double, "d0", "=w"));
      }
    }
  }
LABEL_158:
  v80 = *(unsigned __int8*)(a1 + 624);
  v81 = *(_QWORD*)(a1 + 632);
  v82 = *(_QWORD*)(a1 + 656);
  if ((v80 & 1) != 0) {
    v83 = *(_QWORD*)(a1 + 632);
  }
  else {
    v83 = v80 >> 1;
  }
  v84 = *(unsigned __int8*)(a1 + 648);
  if ((v84 & 1) == 0) {
    v82 = v84 >> 1;
  }
  if (v83 != v82 ||
      ((v80 & 1) != 0 ? (v85 = *(_QWORD*)(a1 + 640)) : (v85 = a1 + 625),
       (v84 & 1) != 0 ? (v86 = *(_QWORD*)(a1 + 664)) : (v86 = a1 + 649),
       memcmp(v85, v86, v83) != 0)) {
    v87 = (unsigned __int64*)(a1 + 624);
    v88 = (unsigned __int64*)(a1 + 648);
    v89 = *(_DWORD*)(a1 + 8) - 1;
    if (v83 != 0) {
      v744_.v745 = nullptr;
      v744_.v744 = (__typeof__(v744_.v744)){0};
      if ((v80 & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)&v742_.v742,
                                      *(_QWORD*)(a1 + 640), v81),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
      }
      else {
        v90 = *(_QWORD*)(a1 + 632);
        LANES128(v742_.v742).n128_u64[0] = *v87;
        LANES128(v742_.v742).n128_u64[1] = v90;
        v742_.v743 = *(char**)(a1 + 640);
      }
      v91 = fw_memory_g_heap_manager_ptr;
      v92 = (_BYTE*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1, 16, 0),
      v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v741[0] = (__int64)v92;
      *v92 = 95;
      v741[1] = (__int64)(v92 + 1);
      v741[2] = (__int64)(v92 + 1);
      game_112ce60((__int64)&v742_.v742, v741, (__int64)&v744_.v744),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v93 = 128;
      if (*(_QWORD*)(*(_QWORD*)v91 + 200LL) == 0) {
        v93 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v91 + v93, (__int64)v92),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      if ((LANES128(v742_.v742).n128_u8[0] & 1) != 0 && v742_.v743 != nullptr) {
        v94 = 128;
        if (*(_QWORD*)(*(_QWORD*)v91 + 200LL) == 0) {
          v94 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v91 + v94, (__int64)v742_.v743),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
      }
      if ((*(_BYTE*)(LANES128(v744_.v744).n128_u64[1] - 24) & 1) != 0) {
        fw_text_String_CopyTerminated(
            &v738_.v738, *(_QWORD*)(LANES128(v744_.v744).n128_u64[1] - 8),
            *(_QWORD*)(LANES128(v744_.v744).n128_u64[1] - 16)),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
      }
      else {
        v95 = *(_QWORD*)(LANES128(v744_.v744).n128_u64[1] - 24);
        v96 = *(_QWORD*)(LANES128(v744_.v744).n128_u64[1] - 8);
        v738_.v739 = *(_QWORD*)(LANES128(v744_.v744).n128_u64[1] - 16);
        v738_.v740 = (char*)v96;
        v738_.v738 = v95;
      }
      v97 = v738_.v738 & 1;
      if (v97 != 0) {
        v98 = v738_.v740;
      }
      else {
        v98 = (char*)&v738_.v738 + 1;
      }
      if ((v738_.v738 & 1) != 0) {
        v99 = v738_.v739;
      }
      else {
        v99 = (unsigned __int64)(unsigned __int8)v738_.v738 >> 1;
      }
      if (v99 >= 1) {
        v100 = &v98[v99];
        v101 = (__int64)v98;
        do {
          v102 = (char*)memchr(v101, 65, v99),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
          if (v102 == nullptr) {
            break;
          }
          if (*v102 == 65) {
            if (v102 != v100 && v102 - v98 != -1) {
              GameRoutine_18f3b60(a1, v89 < 2, &v738_.v738),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
              v97 = v738_.v738 & 1;
            }
            break;
          }
          v101 = (__int64)(v102 + 1);
          v99 = (__int64)&v100[-v101];
        } while ((__int64)&v100[-v101] >= 1);
      }
      if (v97 != 0 && v738_.v740 != nullptr) {
        v103 = 128;
        if (*(_QWORD*)(*(_QWORD*)v91 + 200LL) == 0) {
          v103 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v91 + v103,
                                      (__int64)v738_.v740),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
      }
      v104 = LANES128(v744_.v744).n128_u64[0];
      if (LANES128(v744_.v744).n128_u64[0] != 0) {
        v105 = LANES128(v744_.v744).n128_u64[1];
        if (LANES128(v744_.v744).n128_u64[0] ==
            LANES128(v744_.v744).n128_u64[1]) {
          goto LABEL_219;
        }
        v106 = LANES128(v744_.v744).n128_u64[1];
        do {
          v107 = *(_BYTE*)(v106 - 24);
          v106 -= 24LL;
          if ((v107 & 1) != 0) {
            v108 = *(_QWORD*)(v105 - 8);
            if (v108 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v91 + 200LL) != 0) {
                v109 = 128;
              }
              else {
                v109 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v91 + v109, v108),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
            }
          }
          v105 = v106;
        } while (v106 != v104);
        LANES128(v744_.v744).n128_u64[1] = v104;
        v104 = LANES128(v744_.v744).n128_u64[0];
        if (LANES128(v744_.v744).n128_u64[0] != 0) {
        LABEL_219:
          v110 = 128;
          if (*(_QWORD*)(*(_QWORD*)v91 + 200LL) == 0) {
            v110 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v91 + v110, v104),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
        }
      }
    }
    else {
      LANES128(v744_.v744).n128_u16[0] = 0;
      GameRoutine_18f3b60(a1, v89 < 2, (__int64*)&v744_.v744),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    }
    v111 = *(unsigned __int8*)v87;
    if ((*(_BYTE*)v88 & 1) != 0) {
      v114 = (v111 & 1) == 0;
      v115 = v111 >> 1;
      if (v114) {
        v116 = a1 + 625;
      }
      else {
        v116 = *(_QWORD*)(a1 + 640);
      }
      if (v114) {
        v117 = v115;
      }
      else {
        v117 = *(_QWORD*)(a1 + 632);
      }
      SpineModel_64dde0((__int64*)(a1 + 648), v116, v117),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v113 = *(_QWORD*)(a1 + 24);
      if (v113 == 0) {
        goto LABEL_237;
      }
    }
    else if ((v111 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 648), *(_QWORD*)(a1 + 640),
                         *(_QWORD*)(a1 + 632)),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v113 = *(_QWORD*)(a1 + 24);
      if (v113 == 0) {
      LABEL_237:
        v119 = nullptr;
        v118 = 0;
        goto LABEL_238;
      }
    }
    else {
      v112 = *(_QWORD*)(a1 + 632);
      *v88 = *v87;
      *(_QWORD*)(a1 + 656) = v112;
      *(_QWORD*)(a1 + 664) = *(_QWORD*)(a1 + 640);
      v113 = *(_QWORD*)(a1 + 24);
      if (v113 == 0) {
        goto LABEL_237;
      }
    }
    v118 = std___1___shared_weak_count_lock(v113),
    v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    if (v118 != 0) {
      v119 = *(__int64**)(a1 + 16);
    }
    else {
      v119 = nullptr;
    }
  LABEL_238:
    v120 = *(_DWORD*)(a1 + 8);
    if (v120 == 1) {
      v121 = *(float*)(*(_QWORD*)(a1 + 672) + 92LL) * *(float*)(a1 + 12);
      v122 = *(float*)(a1 + 64) * v121;
      v123 = v121 * *(float*)(a1 + 68);
      ui_LayoutAccessor_SetPaneSize((__int64)v119, "Map_Base",
                                    v122 + 0x1.0000000000000p+4f,
                                    v123 + 0x1.0000000000000p+4f),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      ui_LayoutAccessor_SetPaneSize((__int64)v119, "S_Scissor", v122, v123),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v124 = LayoutAccessor_155fbe0(v119, "L_MapImage"),
      v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      ui_LayoutAccessor_SetPaneSize((__int64)v124, "Img_", v122, v123),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v125 = LayoutAccessor_155fbe0(v119, "L_MapImage"),
      v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      LANES128(v744_.v744).n128_u64[0] = 0x3F8000003F800000LL;
      ui_LayoutAccessor_SetPaneScale((__int64)v125, "Img_", &v744_.v744),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v119, (__int64)"Map_Base",
                                            0),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v120 = *(_DWORD*)(a1 + 8);
      if (v120 == 0) {
        goto LABEL_240;
      }
    }
    else if (v120 == 0) {
    LABEL_240:
      v126 = *(float*)(*(_QWORD*)(a1 + 672) + 88LL) * *(float*)(a1 + 12);
      v127 = v126 * *(float*)(a1 + 72);
      v128 = v126 * *(float*)(a1 + 76);
      *(float*)(a1 + 80) = v127;
      *(float*)(a1 + 84) = v128;
      ui_LayoutAccessor_SetPaneSize((__int64)v119, "Map_Base",
                                    v127 + 0x1.0000000000000p+4f,
                                    v128 + 0x1.0000000000000p+4f),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      ui_LayoutAccessor_SetPaneSize((__int64)v119, "S_Scissor",
                                    *(float*)(a1 + 80), *(float*)(a1 + 84)),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v129 = LayoutAccessor_155fbe0(v119, "L_MapImage"),
      v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      ui_LayoutAccessor_SetPaneSize((__int64)v129, "Img_", *(float*)(a1 + 80),
                                    *(float*)(a1 + 84)),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v119, (__int64)"Map_Base",
                                            1),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      if (*(_DWORD*)(a1 + 8) != 2) {
        goto LABEL_241;
      }
    LABEL_245:
      v130 = *(float*)(*(_QWORD*)(a1 + 672) + 92LL) * *(float*)(a1 + 12);
      v131 = *(float*)(a1 + 64) * v130;
      v132 = v130 * *(float*)(a1 + 68);
      ui_LayoutAccessor_SetPaneSize((__int64)v119, "Map_Base",
                                    v131 + 0x1.0000000000000p+4f,
                                    v132 + 0x1.0000000000000p+4f),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      ui_LayoutAccessor_SetPaneSize((__int64)v119, "S_Scissor", v131, v132),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v133 = LayoutAccessor_155fbe0(v119, "L_MapImage"),
      v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      ui_LayoutAccessor_SetPaneSize((__int64)v133, "Img_", v131, v132),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v134 = LayoutAccessor_155fbe0(v119, "L_MapImage"),
      v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      LANES128(v744_.v744).n128_u64[0] = 0x3F8000003F800000LL;
      ui_LayoutAccessor_SetPaneScale((__int64)v134, "Img_", &v744_.v744),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v119, (__int64)"Map_Base",
                                            0),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      if (v118 != 0) {
        goto LABEL_246;
      }
    LABEL_248:
      v135 = *(_QWORD*)(a1 + 608);
      if ((*(_BYTE*)(v135 + 8) & 1) != 0) {
        v136 = *(_QWORD*)(v135 + 16);
      }
      else {
        v136 = *(_BYTE*)(v135 + 8) >> 1;
      }
      if (v136 != 0) {
        v138 = *(_QWORD*)(v135 + 160);
        v137 = *(_QWORD*)(v135 + 168);
        if (v138 != v137) {
          v139 = 0;
          v718 = *(_QWORD*)(v135 + 168);
          while (1) {
            v140 = *(_QWORD*)(a1 + 728);
            v141 = *(_QWORD*)(a1 + 736);
            if (v140 == v141) {
            LABEL_273:
              v149 = 0;
            }
            else {
              v142 = *(_DWORD*)(v138 + 88);
              while (1) {
                if (*(_DWORD*)v140 == v142) {
                  v143 = *(unsigned __int8*)(v140 + 8);
                  if ((v143 & 1) != 0) {
                    v144 = *(_QWORD*)(v140 + 16);
                  }
                  else {
                    v144 = v143 >> 1;
                  }
                  v145 = *(unsigned __int8*)(v138 + 96);
                  v146 = *(_QWORD*)(v138 + 104);
                  if ((v145 & 1) == 0) {
                    v146 = v145 >> 1;
                  }
                  if (v144 == v146) {
                    v147 = (v143 & 1) != 0 ? *(_QWORD*)(v140 + 24) : v140 + 9;
                    v148 = (v145 & 1) != 0 ? *(_QWORD*)(v138 + 112) : v138 + 97;
                    if (memcmp(v147, v148, v144) == 0) {
                      break;
                    }
                  }
                }
                v140 += 80;
                if (v140 == v141) {
                  goto LABEL_273;
                }
              }
              v149 = 1;
            }
            v150 = 208 * v139;
            v151 = (const char*)(v138 + 97);
            *(_BYTE*)(*(_QWORD*)(a1 + 432) + 208 * v139 + 192) = v149;
            v152 = (_BYTE*)(v138 + 96);
            if ((*(_BYTE*)(v138 + 96) & 1) != 0) {
              v153 = *(const char**)(v138 + 112);
            }
            else {
              v153 = (const char*)(v138 + 97);
            }
            *(_BYTE*)(*(_QWORD*)(a1 + 432) + v150 +
                      193) =
                GameRoutine_ffc660(*(_DWORD*)(v138 + 88), v153) & 1,
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
            if ((*v152 & 1) != 0) {
              v154 = *(_QWORD*)(v138 + 112);
            }
            else {
              v154 = v138 + 97;
            }
            *(_BYTE*)(*(_QWORD*)(a1 + 432) + v150 +
                      194) =
                GameRoutine_ffccc0(*(_DWORD*)(v138 + 88), v154) & 1,
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
            *(_BYTE*)(*(_QWORD*)(a1 + 432) + v150 + 195) = 0;
            v155 = *(_QWORD*)(a1 + 432) + v150;
            *(_DWORD*)(v155 + 64) = *(_DWORD*)v138;
            v156 = v155 + 64;
            *(_DWORD*)(v156 + 4) = *(_DWORD*)(v138 + 4);
            v157 = *(_OWORD*)v156;
            *((_QWORD*)&v157 + 1) = *(unsigned int*)(v138 + 8);
            *(_OWORD*)v156 = v157;
            *(_DWORD*)(v156 + 16) = *(_DWORD*)(v138 + 16);
            if (*(unsigned __int8*)(v156 + 80) ==
                *(unsigned __int8*)(v138 + 80)) {
              if (*(_BYTE*)(v156 + 80) != 0) {
                if (v156 != v138) {
                  v158 = *(unsigned __int8*)(v138 + 24);
                  if ((*(_BYTE*)(v156 + 24) & 1) != 0) {
                    v170 = (v158 & 1) == 0;
                    v171 = v158 >> 1;
                    if (v170) {
                      v172 = v138 + 25;
                    }
                    else {
                      v172 = *(_QWORD*)(v138 + 40);
                    }
                    if (v170) {
                      v173 = v171;
                    }
                    else {
                      v173 = *(_QWORD*)(v138 + 32);
                    }
                    SpineModel_64dde0((__int64*)(v156 + 24), v172, v173),
                        v472 = COERCE_AS(__typeof__(v472),
                                         PSEUDO_REGISTER(double, "d0", "=w"));
                  }
                  else if ((v158 & 1) != 0) {
                    GameRoutine_64df20((_QWORD*)(v156 + 24),
                                       *(_QWORD*)(v138 + 40),
                                       *(_QWORD*)(v138 + 32)),
                        v472 = COERCE_AS(__typeof__(v472),
                                         PSEUDO_REGISTER(double, "d0", "=w"));
                  }
                  else {
                    v159 = *(_QWORD*)(v138 + 24);
                    v160 = *(_QWORD*)(v138 + 40);
                    *(_QWORD*)(v156 + 32) = *(_QWORD*)(v138 + 32);
                    *(_QWORD*)(v156 + 40) = v160;
                    *(_QWORD*)(v156 + 24) = v159;
                  }
                  v174 = (__int64*)(v156 + 48);
                  v175 = *(unsigned __int8*)(v138 + 48);
                  if ((*(_BYTE*)(v156 + 48) & 1) != 0) {
                    v178 = (v175 & 1) == 0;
                    v179 = v175 >> 1;
                    if (v178) {
                      v180 = v138 + 49;
                    }
                    else {
                      v180 = *(_QWORD*)(v138 + 64);
                    }
                    if (v178) {
                      v181 = v179;
                    }
                    else {
                      v181 = *(_QWORD*)(v138 + 56);
                    }
                    SpineModel_64dde0(v174, v180, v181),
                        v472 = COERCE_AS(__typeof__(v472),
                                         PSEUDO_REGISTER(double, "d0", "=w"));
                  }
                  else if ((v175 & 1) != 0) {
                    GameRoutine_64df20(v174, *(_QWORD*)(v138 + 64),
                                       *(_QWORD*)(v138 + 56)),
                        v472 = COERCE_AS(__typeof__(v472),
                                         PSEUDO_REGISTER(double, "d0", "=w"));
                  }
                  else {
                    v176 = *(_QWORD*)(v138 + 48);
                    v177 = *(_QWORD*)(v138 + 64);
                    *(_QWORD*)(v156 + 56) = *(_QWORD*)(v138 + 56);
                    *(_QWORD*)(v156 + 64) = v177;
                    *v174 = v176;
                  }
                }
                v182 = *(_DWORD*)(v138 + 72);
                *(_BYTE*)(v156 + 76) = *(_BYTE*)(v138 + 76);
                *(_DWORD*)(v156 + 72) = v182;
              }
            }
            else if (*(_BYTE*)(v156 + 80) != 0) {
              if ((*(_BYTE*)(v156 + 48) & 1) != 0) {
                v161 = *(_QWORD*)(v156 + 64);
                if (v161 != 0) {
                  v162 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v162 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v162, v161),
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
                }
              }
              if ((*(_BYTE*)(v156 + 24) & 1) != 0) {
                v163 = *(_QWORD*)(v156 + 40);
                if (v163 != 0) {
                  v164 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v164 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v164, v163),
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
                }
              }
              *(_BYTE*)(v156 + 80) = 0;
            }
            else {
              if ((*(_BYTE*)(v138 + 24) & 1) != 0) {
                fw_text_String_CopyTerminated((__int64*)(v156 + 24),
                                              *(_QWORD*)(v138 + 40),
                                              *(_QWORD*)(v138 + 32)),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
              }
              else {
                v165 = *(_QWORD*)(v138 + 24);
                v166 = *(_QWORD*)(v138 + 40);
                *(_QWORD*)(v156 + 32) = *(_QWORD*)(v138 + 32);
                *(_QWORD*)(v156 + 40) = v166;
                *(_QWORD*)(v156 + 24) = v165;
              }
              if ((*(_BYTE*)(v138 + 48) & 1) != 0) {
                fw_text_String_CopyTerminated((__int64*)(v156 + 48),
                                              *(_QWORD*)(v138 + 64),
                                              *(_QWORD*)(v138 + 56)),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
              }
              else {
                v167 = *(_QWORD*)(v138 + 48);
                v168 = *(_QWORD*)(v138 + 64);
                *(_QWORD*)(v156 + 56) = *(_QWORD*)(v138 + 56);
                *(_QWORD*)(v156 + 64) = v168;
                *(_QWORD*)(v156 + 48) = v167;
              }
              v169 = *(_BYTE*)(v138 + 76);
              *(_DWORD*)(v156 + 72) = *(_DWORD*)(v138 + 72);
              *(_BYTE*)(v156 + 76) = v169;
              *(_BYTE*)(v156 + 80) = 1;
            }
            *(_DWORD*)(v156 + 88) = *(_DWORD*)(v138 + 88);
            if (v156 != v138) {
              v183 = (unsigned __int8)*v152;
              if ((*(_BYTE*)(v156 + 96) & 1) != 0) {
                v185 = (v183 & 1) == 0;
                v186 = v183 >> 1;
                if (v185) {
                  v187 = v138 + 97;
                }
                else {
                  v187 = *(_QWORD*)(v138 + 112);
                }
                if (v185) {
                  v188 = v186;
                }
                else {
                  v188 = *(_QWORD*)(v138 + 104);
                }
                SpineModel_64dde0((__int64*)(v156 + 96), v187, v188),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
              }
              else if ((v183 & 1) != 0) {
                GameRoutine_64df20((_QWORD*)(v156 + 96), *(_QWORD*)(v138 + 112),
                                   *(_QWORD*)(v138 + 104)),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
              }
              else {
                *(_QWORD*)(v156 + 104) = *(_QWORD*)(v138 + 104);
                v184 = *(_QWORD*)v152;
                *(_QWORD*)(v156 + 112) = *(_QWORD*)(v138 + 112);
                *(_QWORD*)(v156 + 96) = v184;
              }
            }
            *(_QWORD*)(v156 + 120) = *(_QWORD*)(v138 + 120);
            v189 = (__int64*)(*(_QWORD*)(a1 + 432) + 208 * v139);
            v190 = *v189;
            v191 = v189[3];
            if (v191 != 0) {
              v192 = std___1___shared_weak_count_lock(v191),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
              if (v192 != 0) {
                v193 = v189[2];
                goto LABEL_342;
              }
            }
            else {
              v192 = 0;
            }
            v193 = 0;
          LABEL_342:
            if (*(_BYTE*)(v138 + 80) != 1) {
              goto LABEL_412;
            }
            v194 = *(_BYTE**)(*(_QWORD*)(a1 + 672) + 32LL);
            if (v194 == nullptr || *v194 == 0) {
              goto LABEL_388;
            }
            v195 = *(unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 40LL);
            v196 = (v195 & 1) == 0;
            v197 = v195 >> 1;
            if (v196) {
              v198 = v197;
            }
            else {
              v198 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 48LL);
            }
            if (v196) {
              v199 = *(_QWORD*)GameData_212dbb8[0] + 41LL;
            }
            else {
              v199 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 56LL);
            }
            v200 = v198 + 3;
            if (v198 + 3 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_981;
            }
            v730 = v193;
            if (v200 >= 0x17) {
              if ((v200 | 7) == 0x17) {
                v202 = 26;
              }
              else {
                v202 = (v200 | 7) + 1;
              }
              v203 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v202, 16, 0),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
              v204 = v202 | 1;
              v137 = v718;
              v201 = (__int8*)v203;
              LANES128(v744_.v744).n128_u64[1] = v198 + 3;
              v744_.v745 = (__int8*)v203;
              LANES128(v744_.v744).n128_u64[0] = v204;
            LABEL_359:
              memmove((__int64)v201, v199, v198),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
              goto LABEL_360;
            }
            v201 = &LANES128(v744_.v744).n128_i8[1];
            v744_.v745 = nullptr;
            v744_.v744 = COERCE_AS(float32x4_t, (unsigned __int8)(2 * v200));
            if (v198 != 0) {
              goto LABEL_359;
            }
          LABEL_360:
            *(_DWORD*)&v201[v198] = 3227999;
            v205 = *(const char**)(*(_QWORD*)(a1 + 672) + 32LL);
            v206 = strlen(v205),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            v207 = LANES128(v744_.v744).n128_u8[0];
            v208 = LANES128(v744_.v744).n128_u8[0] >> 1;
            if ((LANES128(v744_.v744).n128_u8[0] & 1) != 0) {
              v208 = LANES128(v744_.v744).n128_u64[1];
            }
            if (v206 == v208) {
              v209 = v206;
              if (v206 == -1) {
                goto LABEL_983;
              }
              if ((LANES128(v744_.v744).n128_u8[0] & 1) != 0) {
                v210 = v744_.v745;
              }
              else {
                v210 = &LANES128(v744_.v744).n128_i8[1];
              }
              if (memcmp((__int64)v210, (__int64)v205, v209) != 0) {
                v211 = false;
                if ((v207 & 1) != 0) {
                  goto LABEL_382;
                }
              }
              else {
                v212 = *(_DWORD*)(v138 + 88);
                v211 = v212 == 8 || v212 == 14 || v212 == 18;
                if ((v207 & 1) != 0) {
                LABEL_382:
                  if (v744_.v745 != nullptr) {
                    v215 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v215 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v215,
                        (__int64)v744_.v745),
                        v472 = COERCE_AS(__typeof__(v472),
                                         PSEUDO_REGISTER(double, "d0", "=w"));
                  }
                }
              }
            }
            else {
              v211 = false;
              if ((LANES128(v744_.v744).n128_u8[0] & 1) != 0) {
                goto LABEL_382;
              }
            }
            v151 = (const char*)(v138 + 97);
            v193 = v730;
            if (v211) {
              goto LABEL_412;
            }
            if ((*(_BYTE*)(v138 + 80) & 1) == 0) {
              GameRoutine_8123d0(),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
            }
          LABEL_388:
            v216 = *(unsigned __int8*)(v138 + 48);
            if ((v216 & 1) != 0) {
              v217 = *(_QWORD*)(v138 + 56);
            }
            else {
              v217 = v216 >> 1;
            }
            if (v217 == 0) {
              goto LABEL_412;
            }
            v218 = *(_QWORD*)(a1 + 608);
            v219 = *(unsigned __int8*)(v218 + 8);
            v220 = *(_QWORD*)(v218 + 16);
            if ((v219 & 1) == 0) {
              v220 = v219 >> 1;
            }
            if (v220 == v217) {
              v221 = v193;
              v222 = (v219 & 1) != 0 ? *(_QWORD*)(v218 + 24) : v218 + 9;
              v223 = (v216 & 1) != 0 ? *(_QWORD*)(v138 + 64) : v138 + 49;
              v224 = memcmp(v222, v223, v217),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
              v193 = v221;
              if (v224 == 0) {
              LABEL_412:
                *(_BYTE*)(v190 + 88) |= 1u;
              LABEL_413:
                v232 = *(unsigned __int8*)(v138 + 96);
                v234 = *(_QWORD*)(v138 + 104);
                v233 = *(const char**)(v138 + 112);
                v235 = (v232 & 1) == 0;
                v236 = *(_DWORD*)(v138 + 88);
                v237 = v232 >> 1;
                LANES128(v744_.v744).n128_u64[0] = v193;
                LANES128(v744_.v744).n128_u8[8] = 0;
                if (v235) {
                  v238 = v151;
                }
                else {
                  v238 = v233;
                }
                if (v235) {
                  v239 = v237;
                }
                else {
                  v239 = v234;
                }
                GameRoutine_1597ab0((__int64)&v744_.v744, v236, v238, v239, 1),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
                goto LABEL_420;
              }
            }
            v720 = v218;
            v722 = v151;
            v225 = *(unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 40LL);
            v226 = (v225 & 1) == 0;
            v227 = v225 >> 1;
            if (v226) {
              v228 = v227;
            }
            else {
              v228 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 48LL);
            }
            if (v226) {
              v229 = *(_QWORD*)GameData_212dbb8[0] + 41LL;
            }
            else {
              v229 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 56LL);
            }
            v230 = v228 + 1;
            if (v228 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_981;
            }
            v731 = v193;
            if (v230 >= 0x17) {
              if ((v230 | 7) == 0x17) {
                v240 = 26;
              }
              else {
                v240 = (v230 | 7) + 1;
              }
              v241 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v240, 16, 0),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
              v242 = v240 | 1;
              v137 = v718;
              v231 = (__int8*)v241;
              LANES128(v742_.v742).n128_u64[1] = v228 + 1;
              v742_.v743 = (char*)v241;
              LANES128(v742_.v742).n128_u64[0] = v242;
            }
            else {
              v231 = &LANES128(v742_.v742).n128_i8[1];
              v742_.v743 = nullptr;
              v742_.v742 = COERCE_AS(float32x4_t, (unsigned __int8)(2 * v230));
              if (v228 == 0) {
                goto LABEL_428;
              }
            }
            memmove((__int64)v231, v229, v228),
                v472 = COERCE_AS(__typeof__(v472),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
          LABEL_428:
            *(_WORD*)&v231[v228] = 95;
            v243 = *(unsigned __int8*)(v138 + 24);
            v244 = (v243 & 1) == 0;
            v245 = v243 >> 1;
            if (v244) {
              v246 = (const char*)(v138 + 25);
            }
            else {
              v246 = *(const char**)(v138 + 40);
            }
            if (v244) {
              v247 = v245;
            }
            else {
              v247 = *(_QWORD*)(v138 + 32);
            }
            v248 = (unsigned __int64*)GameRoutine_1a09ce0((__int64)&v742_.v742,
                                                          v246, v247),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            v250 = v248[1];
            v249 = v248[2];
            LANES128(v744_.v744).n128_u64[0] = *v248;
            LANES128(v744_.v744).n128_u64[1] = v250;
            v744_.v745 = (__int8*)v249;
            v248[1] = 0;
            v248[2] = 0;
            *v248 = 0;
            if ((LANES128(v742_.v742).n128_u8[0] & 1) != 0 &&
                v742_.v743 != nullptr) {
              v251 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v251 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v251,
                  (__int64)v742_.v743),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
            }
            if ((LANES128(v744_.v744).n128_u8[0] & 1) != 0) {
              v252 = v744_.v745;
            }
            else {
              v252 = &LANES128(v744_.v744).n128_i8[1];
            }
            v253 = game_HashString((__int64)v252),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            v151 = v722;
            v254 = false;
            if (v253 == 0) {
              goto LABEL_483;
            }
            v255 = *GameData_212cda8[0];
            v256 = *(_QWORD*)(*GameData_212cda8[0] + 96);
            if (v256 == 0 || *(_QWORD*)(v255 + 112) == 0) {
              goto LABEL_483;
            }
            v257 = v256 - 1;
            if ((v256 & (v256 - 1)) != 0) {
              v258 = v720;
              v259 = v253;
              if (v253 >= v256) {
                v259 = v253 % v256;
              }
            }
            else {
              v258 = v720;
              v259 = v257 & v253;
            }
            v260 = *(_QWORD**)(*(_QWORD*)(v255 + 88) + 8 * v259);
            if (v260 == nullptr || (v261 = (_QWORD*)*v260) == nullptr) {
            LABEL_482:
              v254 = false;
              goto LABEL_483;
            }
            if ((v256 & v257) == 0) {
              while (1) {
                v263 = v261[1];
                if (v263 == v253) {
                  if (v261[2] == v253) {
                    v258 = v720;
                    goto LABEL_465;
                  }
                }
                else if ((v263 & v257) != v259) {
                  goto LABEL_482;
                }
                v261 = (_QWORD*)*v261;
                v254 = false;
                if (v261 == nullptr) {
                  goto LABEL_483;
                }
              }
            }
            while (1) {
              v262 = v261[1];
              if (v262 == v253) {
                break;
              }
              if (v262 >= v256) {
                v262 %= v256;
              }
              if (v262 != v259) {
                goto LABEL_482;
              }
            LABEL_454:
              v261 = (_QWORD*)*v261;
              if (v261 == nullptr) {
                goto LABEL_482;
              }
            }
            if (v261[2] != v253) {
              goto LABEL_454;
            }
          LABEL_465:
            v715 = v261[3];
            if (v715 == 0) {
              goto LABEL_482;
            }
            v264 = *(unsigned __int8*)(v258 + 8);
            if ((v264 & 1) != 0) {
              v265 = *(_QWORD*)(v258 + 16);
            }
            else {
              v265 = v264 >> 1;
            }
            v266 = *(unsigned __int8*)(v138 + 48);
            v267 = *(_QWORD*)(v138 + 56);
            if ((v266 & 1) == 0) {
              v267 = v266 >> 1;
            }
            if (v265 == v267) {
              v268 = (v264 & 1) != 0 ? *(_QWORD*)(v258 + 24) : v258 + 9;
              v269 = (v266 & 1) != 0 ? *(_QWORD*)(v138 + 64) : v138 + 49;
              if (memcmp(v268, v269, v265) == 0) {
                goto LABEL_482;
              }
            }
            v270 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                                    32LL) -
                                         8LL) +
                              64LL);
            if (v270 != 0 && (v271 = *(unsigned __int16*)(v715 + 40),
                              *(_WORD*)(v715 + 40) != 0)) {
              v272 = 0;
              v273 = *(_QWORD*)(v715 + 48);
              v274 = *(__int64**)(v715 + 72);
              v713 = *(unsigned __int16*)(v715 + 64);
              while (1) {
                v276 = *(const char**)(v273 + 8 * v272);
                if (v276 != nullptr) {
                  v277 = (*(_BYTE*)(v270 + 64) & 1) != 0
                             ? *(const char**)(v270 + 80)
                             : (const char*)(v270 + 65);
                  if (v277 != nullptr && strcmp(v276, v277) == 0) {
                    v278 = game_vstring_kEmpty_ptr[0];
                    if (v272 < v713) {
                      v278 = v274;
                    }
                    v279 = (_BYTE*)*v278;
                    if (v279 != nullptr) {
                      break;
                    }
                  }
                }
                ++v272;
                ++v274;
                if (v271 == v272) {
                  goto LABEL_501;
                }
              }
            }
            else {
            LABEL_501:
              v279 = *(_BYTE**)(v715 + 56);
            }
            v137 = v718;
            v151 = v722;
            v254 = v279 == nullptr || *v279 == 0;
          LABEL_483:
            if ((LANES128(v744_.v744).n128_u8[0] & 1) != 0 &&
                v744_.v745 != nullptr) {
              v275 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v275 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v275,
                  (__int64)v744_.v745),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
            }
            v193 = v731;
            *(_BYTE*)(v190 + 88) = *(_BYTE*)(v190 + 88) & 0xFE | v254;
            if (v254) {
              goto LABEL_413;
            }
          LABEL_420:
            if (v192 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v192 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v192 + 16LL))(v192),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
              std___1___shared_weak_count___release_weak(v192),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
            }
            ++v139;
            v138 += 128;
            if (v138 == v137) {
              goto LABEL_506;
            }
          }
        }
      }
      v139 = 0;
    LABEL_506:
      v280 = *(float32x4_t**)(a1 + 432);
      v281 = *(float32x4_t**)(a1 + 440);
      if (v139 < 0x4EC4EC4EC4EC4EC5LL * (v281 - v280)) {
        v282 = 13 * v139;
        do {
          v283 = LANES128(v280[v282]).n128_u64[0];
          ++v139;
          v282 += 13;
          *(_BYTE*)(v283 + 88) &= ~1u;
          v280 = *(float32x4_t**)(a1 + 432);
          v281 = *(float32x4_t**)(a1 + 440);
        } while (v139 < 0x4EC4EC4EC4EC4EC5LL * (v281 - v280));
      }
      v284 = *(_QWORD*)(a1 + 792);
      v285 = *(_QWORD*)(a1 + 784);
      if (v285 != v284) {
        v286 = *(_QWORD*)(a1 + 792);
        v287 = fw_memory_g_heap_manager_ptr;
        do {
          v289 = *(_QWORD*)(v286 - 32);
          v286 -= 32;
          v288 = v289;
          if (v289 != 0) {
            *(_QWORD*)(v284 - 24) = v288;
            if (*(_QWORD*)(*(_QWORD*)v287 + 200LL) != 0) {
              v290 = 128;
            }
            else {
              v290 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v287 + v290, v288),
                v472 = COERCE_AS(__typeof__(v472),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
          }
          v284 = v286;
        } while (v286 != v285);
        v280 = *(float32x4_t**)(a1 + 432);
        v281 = *(float32x4_t**)(a1 + 440);
      }
      *(_QWORD*)(a1 + 792) = v285;
      if (v280 != v281) {
        v291 = (__int64*)fw_memory_g_heap_manager_ptr;
        do {
          if ((LANES128(v280[12]).n128_u8[3] & 1) == 0 &&
              (*(_BYTE*)(LANES128(*(v280)).n128_u64[0] + 88) & 1) != 0) {
            v292 = (_QWORD*)fw_memory_HeapManager_Allocate(*v291, 8, 16, 0),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            v294 = *(float32x4_t**)(a1 + 432);
            v293 = *(float32x4_t**)(a1 + 440);
            *v292 = v280;
            v295 = (float32x4_t**)(v292 + 1);
            v296 = (__int64)v292;
            if (v294 != v293) {
              v297 = 0x0.0p+0f;
              v298 = (float32x4_t**)(v292 + 1);
              while (1) {
                if ((LANES128(v294[12]).n128_u8[3] & 1) != 0 || v294 == v280 ||
                    (*(_BYTE*)(LANES128(*(v294)).n128_u64[0] + 88) & 1) == 0 ||
                    (v300 = vsubq_f32(v280[4], v294[4]),
                     v301 = vmulq_f32(v300, v300),
                     LANES128(v301).n128_u64[0] =
                         LANES64_OF(
                             vadd_f32(
                                 COERCE_AS(float32x2_t,
                                           LANES128_OF(vextq_s8(v301, v301, 8u))
                                               .n128_u64[0]),
                                 COERCE_AS(float32x2_t,
                                           LANES128(v301).n128_u64[0])))
                             .n64_u64[0],
                     (v299 = LANES64_OF(
                                 vsqrt_f32(vpadd_f32(
                                     COERCE_AS(float32x2_t,
                                               LANES128(v301).n128_u64[0]),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v301).n128_u64[0]))))
                                 .n64_f32[0]) >= 0x1.e000000000000p+2f)) {
                  v299 = v297;
                }
                else if (v295 >= v298) {
                  v302 = (char*)v295 - v296;
                  v303 = ((__int64)v295 - v296) >> 3;
                  v304 = v303 + 1;
                  if ((unsigned __int64)(v303 + 1) >> 61 != 0) {
                    goto LABEL_980;
                  }
                  if (((__int64)v298 - v296) >> 2 > v304) {
                    v304 = ((__int64)v298 - v296) >> 2;
                  }
                  if ((unsigned __int64)v298 - v296 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v305 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v305 = v304;
                  }
                  if (v305 != 0) {
                    if (v305 >> 61 != 0) {
                      goto LABEL_982;
                    }
                    v306 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v305, 16,
                        0),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
                  }
                  else {
                    v306 = 0;
                  }
                  v298 = (float32x4_t**)(v306 + 8 * v305);
                  v307 = (unsigned __int64)v295 - v296;
                  v308 = (__int64)&v302[v306 + -8 * v303];
                  *(_QWORD*)&v302[v306] = v294;
                  v295 = (float32x4_t**)&v302[v306 + 8];
                  memcpy(v308, v296, v307),
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
                  if (v296 != 0) {
                    v309 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v309 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v309, v296),
                        v472 = COERCE_AS(__typeof__(v472),
                                         PSEUDO_REGISTER(double, "d0", "=w"));
                  }
                  v296 = v308;
                }
                else {
                  *v295++ = v294;
                }
                v297 = v299;
                v294 += 13;
                if (v294 == v293) {
                  goto LABEL_549;
                }
              }
            }
            v299 = 0x0.0p+0f;
          LABEL_549:
            v291 = (__int64*)fw_memory_g_heap_manager_ptr;
            if ((unsigned __int64)v295 - v296 > 8) {
              for (i = (float32x4_t**)v296; i != v295;
                   *(_BYTE*)(v311 + 195) = 1) {
                v311 = (__int64)*i++;
              }
              v312 = *(_QWORD*)(a1 + 792);
              v313 = *(_QWORD*)(a1 + 800);
              if (v312 >= v313) {
                v318 = *(__int64**)(a1 + 784);
                v319 = ((__int64)(v312 - (_QWORD)v318) >> 5) + 1;
                if (v319 >> 59 != 0) {
                  GameRoutine_18f4920(),
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
                }
                v320 = v313 - (_QWORD)v318;
                if (v320 >> 4 > v319) {
                  v319 = v320 >> 4;
                }
                if ((unsigned __int64)v320 >= 0x7FFFFFFFFFFFFFE0LL) {
                  v319 = 0x7FFFFFFFFFFFFFFLL;
                }
                v723 = v319;
                v727 = (__int64)(v312 - (_QWORD)v318) >> 5;
                if (v319 != 0) {
                  if (v319 >> 59 != 0) {
                  LABEL_982:
                    GameRoutine_60a210(),
                        v472 = COERCE_AS(__typeof__(v472),
                                         PSEUDO_REGISTER(double, "d0", "=w"));
                  }
                  v321 =
                      fw_memory_HeapManager_Allocate(*v291, 32 * v319, 16, 0),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
                }
                else {
                  v321 = 0;
                }
                v322 = v321 + v312 - (_QWORD)v318;
                v323 = (unsigned __int64)v295 - v296;
                v732 = v321;
                *(_QWORD*)(v322 + 8) = 0;
                *(_QWORD*)(v322 + 16) = 0;
                *(_QWORD*)v322 = 0;
                if (v323 != 0) {
                  if ((v323 & 0x8000000000000000LL) != 0) {
                  LABEL_980:
                    GameRoutine_18f4900(),
                        v472 = COERCE_AS(__typeof__(v472),
                                         PSEUDO_REGISTER(double, "d0", "=w"));
                  }
                  v324 = fw_memory_HeapManager_Allocate(*v291, v323, 16, 0),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
                  v325 = v324 + v323;
                  *(_QWORD*)v322 = v324;
                  *(_QWORD*)(v322 + 16) = v324 + v323;
                  memcpy(v324, v296, v323),
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
                  *(_QWORD*)(v322 + 8) = v325;
                  v291 = (__int64*)fw_memory_g_heap_manager_ptr;
                  v321 = v732;
                }
                *(float*)(v322 + 24) = v299;
                *(_BYTE*)(v322 + 28) = 0;
                if (v318 != (__int64*)v312) {
                  v326 = v318;
                  v327 = v321 + 16;
                  do {
                    *(_QWORD*)(v327 - 8) = 0;
                    *(_QWORD*)v327 = 0;
                    *(_QWORD*)(v327 - 16) = *v326;
                    *(_QWORD*)(v327 - 8) = v326[1];
                    *(_QWORD*)v327 = v326[2];
                    v326[1] = 0;
                    v326[2] = 0;
                    *v326 = 0;
                    v328 = *((_DWORD*)v326 + 6);
                    v329 = *((_BYTE*)v326 + 28);
                    v326 += 4;
                    *(_BYTE*)(v327 + 12) = v329;
                    *(_DWORD*)(v327 + 8) = v328;
                    v327 += 32;
                  } while (v326 != (__int64*)v312);
                  do {
                    v330 = *v318;
                    if (*v318 != 0) {
                      v318[1] = v330;
                      if (*(_QWORD*)(*v291 + 200) != 0) {
                        v331 = 128;
                      }
                      else {
                        v331 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v291 + v331, v330),
                          v472 = COERCE_AS(__typeof__(v472),
                                           PSEUDO_REGISTER(double, "d0", "=w"));
                    }
                    v318 += 4;
                  } while (v318 != (__int64*)v312);
                  v318 = *(__int64**)(a1 + 784);
                  v321 = v732;
                }
                v332 = v322 - 32 * v727;
                v317 = v322 + 32;
                *(_QWORD*)(a1 + 792) = v317;
                *(_QWORD*)(a1 + 784) = v332;
                *(_QWORD*)(a1 + 800) = v321 + 32 * v723;
                if (v318 != nullptr) {
                  if (*(_QWORD*)(*v291 + 200) != 0) {
                    v333 = 128;
                  }
                  else {
                    v333 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v291 + v333, (__int64)v318),
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
                }
              }
              else {
                v314 = (unsigned __int64)v295 - v296;
                *(_QWORD*)(v312 + 8) = 0;
                *(_QWORD*)(v312 + 16) = 0;
                *(_QWORD*)v312 = 0;
                if (v295 != (float32x4_t**)v296) {
                  if ((v314 & 0x8000000000000000LL) != 0) {
                    goto LABEL_980;
                  }
                  v315 = fw_memory_HeapManager_Allocate(
                      *v291, (__int64)v295 - v296, 16, 0),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
                  v316 = (char*)(v315 + v314);
                  *(_QWORD*)v312 = v315;
                  *(_QWORD*)(v312 + 8) = v315;
                  *(_QWORD*)(v312 + 16) = v315 + v314;
                  memcpy(v315, v296, (unsigned __int64)v295 - v296),
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
                  *(_QWORD*)(v312 + 8) = v316;
                }
                *(float*)(v312 + 24) = v299;
                *(_BYTE*)(v312 + 28) = 0;
                v317 = v312 + 32;
              }
              *(_QWORD*)(a1 + 792) = v317;
            }
            if (v296 != 0) {
              if (*(_QWORD*)(*v291 + 200) != 0) {
                v334 = 128;
              }
              else {
                v334 = 56;
              }
              nn_mem_StandardAllocator_Free(*v291 + v334, v296),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
            }
          }
          v280 += 13;
        } while (v280 != v281);
        v285 = *(_QWORD*)(a1 + 792);
      }
      v335 = *(_QWORD*)(a1 + 784);
      if (v335 != v285) {
        while (1) {
          v336 = *(char**)v335;
          v337 = *(char**)(v335 + 8);
          if (*(char**)v335 == v337) {
            break;
          }
          v338 = 0;
          v339 = *(char**)v335;
          do {
            v340 = *(_QWORD*)v339;
            v339 += 8;
            v341 = v338;
            v342 = *(_DWORD*)(v340 + 152);
            v345 = v342 == 8 || v342 == 14 || v342 == 18;
            v338 = v341 | v345;
          } while (v339 != v337);
          if (*(float*)(v335 + 24) > 0x1.99999a0000000p-4f) {
          LABEL_617:
            if (v337 - v336 == 16) {
              v347 = 0x1.0f5c280000000p+2f;
              LODWORD(v348) = 2;
              v349 = 0;
              if (*(_DWORD*)(a1 + 8) == 0) {
                v347 = 0x1.cccccc0000000p+0f;
              }
              do {
                v350 = *(float*)(v335 + 24);
                v351 = v349 + 1;
                v352 = v350 <= 0x1.99999a0000000p-4f ||
                       v350 > 0x1.e000000000000p+2f;
                if (!v352) {
                  v353 = *(float32x4_t**)&v336[8 * v349];
                  if (v351 >= (int)v348) {
                    v354 = 0;
                  }
                  else {
                    v354 = v349 + 1;
                  }
                  v355 = v353[4];
                  v356 = vsubq_f32(
                      v355, *(float32x4_t*)(*(_QWORD*)&v336[8 * v354] + 64LL));
                  v357 = vmulq_f32(v356, v356);
                  LANES128(v357).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v357, v357, 8u))
                                            .n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v357).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v357).n128_u64[0] =
                      LANES64_OF(
                          vpadd_f32(COERCE_AS(float32x2_t,
                                              LANES128(v357).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v357).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v357).n128_u64[1] = LANES128(v357).n128_u64[0];
                  v358 = vrsqrteq_f32(v357);
                  v359 = vmulq_f32(v358,
                                   vrsqrtsq_f32(v358, vmulq_f32(v357, v358)));
                  v360 = vmulq_n_f32(
                      vbicq_s8(vmulq_f32(
                                   v356,
                                   vmulq_f32(v359,
                                             vrsqrtsq_f32(
                                                 v359, vmulq_f32(v357, v359)))),
                               vceqzq_f32(v357)),
                      v347);
                  v353[4] = vaddq_f32(v355, v360);
                  *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)v335 + 8 * v354) +
                                  64LL) =
                      vsubq_f32(*(float32x4_t*)(*(_QWORD*)(*(_QWORD*)v335 +
                                                           8 * v354) +
                                                64LL),
                                v360);
                  v336 = *(char**)v335;
                  v337 = *(char**)(v335 + 8);
                }
                v348 = (unsigned __int64)(v337 - v336) >> 3;
                v349 = v351;
              } while (v351 < (((v337 - v336) << 29) - 0x100000000LL) >> 32);
            }
            goto LABEL_595;
          }
          if ((v341 & 1) == 0 &&
              (v342 > 0x12 || ((1 << v342) & 0x44100) == 0)) {
            goto LABEL_630;
          }
          game_menu_179fec0((char**)v335),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
        LABEL_595:
          v335 += 32;
          if (v335 == v285) {
            goto LABEL_634;
          }
        }
        if (*(float*)(v335 + 24) > 0x1.99999a0000000p-4f) {
          goto LABEL_617;
        }
      LABEL_630:
        v361 = *(_QWORD*)v336;
        *(_BYTE*)(v361 + 204) = 1;
        *(_DWORD*)(v361 + 196) = 0;
        *(_BYTE*)(*(_QWORD*)v361 + 88LL) |= 1u;
        v362 = *(char**)v335;
        if ((int)((*(_QWORD*)(v335 + 8) - *(_QWORD*)v335) >> 3) >= 2) {
          v363 = 1;
          do {
            v364 = *(_BYTE**)&v362[8 * v363++];
            v364[204] = 0;
            *(_BYTE*)(*(_QWORD*)v364 + 88LL) &= ~1u;
            v362 = *(char**)v335;
          } while (v363 < (int)((*(_QWORD*)(v335 + 8) - *(_QWORD*)v335) >> 3));
        }
        *(_BYTE*)(v335 + 28) = 1;
        goto LABEL_595;
      }
    LABEL_634:
      *(_BYTE*)(a1 + 600) = 0;
      goto LABEL_635;
    }
    if (v120 != 2) {
    LABEL_241:
      if (v118 == 0) {
        goto LABEL_248;
      }
    LABEL_246:
      if (atomic_fetch_add((atomic_ullong* volatile)(v118 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v118 + 16LL))(v118),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        std___1___shared_weak_count___release_weak(v118),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
      }
      goto LABEL_248;
    }
    goto LABEL_245;
  }
  if (*(_BYTE*)(a1 + 600) == 1) {
    goto LABEL_248;
  }
LABEL_635:
  if (*(_DWORD*)(a1 + 8) == 2) {
    v365 = *(__int64**)(a1 + 160);
    for (j = *(__int64**)(a1 + 168); v365 != j; *(_BYTE*)(v367 + 88) &= ~1u) {
      v367 = *v365;
      v365 += 8;
    }
    v368 = *(__int64**)(a1 + 240);
    for (k = *(__int64**)(a1 + 248); v368 != k; *(_BYTE*)(v370 + 88) &= ~1u) {
      v370 = *v368;
      v368 += 8;
    }
    v371 = *(__int64**)(a1 + 376);
    for (m = *(__int64**)(a1 + 384); v371 != m; *(_BYTE*)(v373 + 88) &= ~1u) {
      v373 = *v371;
      v371 += 8;
    }
    v374 = *(__int64**)(a1 + 320);
    for (n = *(__int64**)(a1 + 328); v374 != n; *(_BYTE*)(v376 + 88) &= ~1u) {
      v376 = *v374;
      v374 += 8;
    }
    v377 = *(__int64**)(a1 + 296);
    for (ii = *(__int64**)(a1 + 304); v377 != ii; *(_BYTE*)(v379 + 88) &= ~1u) {
      v379 = *v377;
      v377 += 8;
    }
    *(_BYTE*)(*(_QWORD*)(a1 + 464) + 88LL) &= ~1u;
    *(_BYTE*)(*(_QWORD*)(a1 + 456) + 88LL) &= ~1u;
    *(_BYTE*)(*(_QWORD*)(a1 + 528) + 88LL) &= ~1u;
    v381 = *(_QWORD*)(a1 + 488);
    v380 = *(_QWORD*)(a1 + 496);
    if (v380 != v381) {
      v382 = 0;
      v383 = 0;
      do {
        if (*(float*)(v381 + v382 + 24) == 0x0.0p+0f) {
          *(_BYTE*)(*(_QWORD*)(v381 + v382) + 88LL) &= ~1u;
          v381 = *(_QWORD*)(a1 + 488);
          v380 = *(_QWORD*)(a1 + 496);
        }
        ++v383;
        v382 += 64;
      } while (v383 < (v380 - v381) >> 6);
    }
  }
  else {
    v384 = *(_QWORD*)(a1 + 608);
    v385 = *(_QWORD*)(v384 + 112);
    v386 = *(_QWORD*)(v384 + 120);
    if (v385 == v386) {
      v388 = 0;
    }
    else {
      v387 = 0;
      v388 = 0;
      do {
        v389 = (__int64*)(*(_QWORD*)(a1 + 160) + v387);
        v389[4] = *(_QWORD*)(v385 + 96);
        v391 = *v389;
        v390 = v389[1];
        v392 = *(_QWORD*)(a1 + 160) + v387;
        *(_QWORD*)(v392 + 48) = 0;
        *(_OWORD*)(v392 + 48) = *(unsigned __int64*)(v392 + 48);
        GameRoutine_18438a0(v390, *(_DWORD*)(v385 + 88)),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        ++v388;
        v385 += 112;
        v387 += 64;
        *(_BYTE*)(v391 + 88) |= 1u;
      } while (v385 != v386);
    }
    v393 = *(_QWORD*)(a1 + 160);
    if (v388 < (*(_QWORD*)(a1 + 168) - v393) >> 6) {
      v394 = v388 << 6;
      do {
        v395 = *(_QWORD*)(v393 + v394);
        ++v388;
        v394 += 64LL;
        *(_BYTE*)(v395 + 88) &= ~1u;
        v393 = *(_QWORD*)(a1 + 160);
      } while (v388 < (*(_QWORD*)(a1 + 168) - v393) >> 6);
    }
    v396 = *(_QWORD*)(a1 + 608);
    v397 = *(_QWORD*)(v396 + 136);
    v398 = *(_QWORD*)(v396 + 144);
    if (v397 == v398) {
      v400 = 0;
    }
    else {
      v399 = 0;
      v400 = 0;
      do {
        ++v400;
        v397 += 96;
        v401 = *(_QWORD*)(*(_QWORD*)(a1 + 240) + v399);
        v399 += 64;
        *(_BYTE*)(v401 + 88) |= 1u;
      } while (v397 != v398);
    }
    v402 = *(_QWORD*)(a1 + 240);
    if (v400 < (*(_QWORD*)(a1 + 248) - v402) >> 6) {
      v403 = v400 << 6;
      do {
        v404 = *(_QWORD*)(v402 + v403);
        ++v400;
        v403 += 64LL;
        *(_BYTE*)(v404 + 88) &= ~1u;
        v402 = *(_QWORD*)(a1 + 240);
      } while (v400 < (*(_QWORD*)(a1 + 248) - v402) >> 6);
    }
    QuestIconList_Unknown3((_QWORD*)(a1 + 352), *(_QWORD*)(a1 + 608),
                           (int*)(a1 + 8)),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    AreaChangeIconList_Unknown3((_QWORD*)(a1 + 272), *(_QWORD*)(a1 + 608)),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    v405 = *(_QWORD**)(a1 + 672);
    if (*v405 == 0) {
      goto LABEL_681;
    }
    v406 = *(_QWORD*)(a1 + 608);
    v407 = *(unsigned __int8*)(v406 + 8);
    v408 = *(_QWORD*)(v406 + 16);
    if ((v407 & 1) == 0) {
      v408 = v407 >> 1;
    }
    if (v408 == 0) {
      goto LABEL_681;
    }
    v409 = (const char*)v405[4];
    if (v409 == nullptr || *v409 == 0) {
      goto LABEL_681;
    }
    v410 = *(_QWORD*)GameData_212dbb8[0];
    v411 = strlen(v409),
    v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    v412 = *(_BYTE*)(v410 + 64) >> 1;
    if ((*(_BYTE*)(v410 + 64) & 1) != 0) {
      v412 = *(_QWORD*)(v410 + 72);
    }
    if (v411 != v412) {
      goto LABEL_681;
    }
    v413 = v411;
    if (v411 == -1) {
    LABEL_983:
      fs_60a230(), v472 = COERCE_AS(__typeof__(v472),
                                    PSEUDO_REGISTER(double, "d0", "=w"));
    }
    v414 = (*(_BYTE*)(v410 + 64) & 1) != 0 ? *(_QWORD*)(v410 + 80) : v410 + 65;
    if (memcmp(v414, (__int64)v409, v413) == 0) {
      *(_BYTE*)(*(_QWORD*)(a1 + 464) + 88LL) |= 1u;
      v415 = *(_QWORD*)(a1 + 456);
      v416 = *(_BYTE*)(v415 + 88) | 1;
    }
    else {
    LABEL_681:
      *(_BYTE*)(*(_QWORD*)(a1 + 464) + 88LL) &= ~1u;
      v415 = *(_QWORD*)(a1 + 456);
      v416 = *(_BYTE*)(v415 + 88) & 0xFE;
    }
    *(_BYTE*)(v415 + 88) = v416;
    v417 = *(_QWORD*)(a1 + 432);
    if (*(_QWORD*)(a1 + 440) != v417) {
      v418 = 0;
      v419 = 0;
      do {
        Pane_58df60(*(_QWORD*)(*(_QWORD*)(v417 + v418) + 24LL),
                    *(_QWORD**)(v417 + v418)),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        v417 = *(_QWORD*)(a1 + 432);
        v420 = *(_QWORD*)(a1 + 440);
        ++v419;
        v418 += 208;
      } while (0x4EC4EC4EC4EC4EC5LL * ((v420 - v417) >> 4) > v419);
      if (v420 != v417) {
        v421 = 0;
        v422 = 0;
        do {
          v426 = *(_QWORD*)(a1 + 24);
          if (v426 != 0 &&
              (v427 = std___1___shared_weak_count_lock(v426)) != 0) {
            v428 = v427;
            v423 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)(a1 + 16),
                                                   (__int64)"N_Facility"),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            if (atomic_fetch_add((atomic_ullong* volatile)(v428 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v429 = v423;
              (*(void (**)(__int64))(*(_QWORD*)v428 + 16LL))(v428),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
              std___1___shared_weak_count___release_weak(v428),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
              v423 = v429;
            }
          }
          else {
            v423 =
                ui_LayoutAccessor_FindPane_alt1(nullptr, (__int64)"N_Facility"),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
          }
          Pane_58dee0(v423, *(_QWORD*)(*(_QWORD*)(a1 + 432) + v421)),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
          v424 = *(_QWORD*)(a1 + 432);
          v425 = *(_QWORD*)(a1 + 440);
          ++v422;
          v421 += 208;
        } while (0x4EC4EC4EC4EC4EC5LL * ((v425 - v424) >> 4) > v422);
        if (v425 != v424) {
          v430 = 0;
          do {
            *(_BYTE*)(v424 + 208 * v430 + 192) = 0;
            v434 = *(_QWORD*)(a1 + 728);
            v435 = *(_QWORD*)(a1 + 736);
            v436 = *(_QWORD*)(a1 + 432);
            if (v434 == v435) {
            LABEL_695:
              v431 = 0;
            }
            else {
              v437 = v436 + 208 * v430;
              v438 = *(_DWORD*)(v437 + 152);
              while (1) {
                if (*(_DWORD*)v434 == v438) {
                  v439 = *(unsigned __int8*)(v434 + 8);
                  if ((v439 & 1) != 0) {
                    v440 = *(_QWORD*)(v434 + 16);
                  }
                  else {
                    v440 = v439 >> 1;
                  }
                  v441 = *(unsigned __int8*)(v437 + 160);
                  v442 = *(_QWORD*)(v437 + 168);
                  if ((v441 & 1) == 0) {
                    v442 = v441 >> 1;
                  }
                  if (v440 == v442) {
                    v443 = (v439 & 1) != 0 ? *(_QWORD*)(v434 + 24) : v434 + 9;
                    v444 =
                        (v441 & 1) != 0 ? *(_QWORD*)(v437 + 176) : v437 + 161;
                    if (memcmp(v443, v444, v440) == 0) {
                      break;
                    }
                  }
                }
                v434 += 80;
                if (v434 == v435) {
                  goto LABEL_695;
                }
              }
              v431 = 1;
            }
            v432 = v436 + 208 * v430++;
            *(_BYTE*)(v432 + 192) = v431;
            v424 = *(_QWORD*)(a1 + 432);
            v433 = *(_QWORD*)(a1 + 440);
          } while (0x4EC4EC4EC4EC4EC5LL * ((v433 - v424) >> 4) > v430);
          if (v433 != v424) {
            v445 = "N_Facility";
            v446 = 0;
            v447 = 0;
            do {
              v448 = (_QWORD**)(v424 + v446);
              v449 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 24)),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
              v450 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)(a1 + 16),
                                                     (__int64)v445),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
              v451 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 24)),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
              v452 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)(a1 + 16),
                                                     (__int64)"N_Select"),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
              if (*((_BYTE*)v448 + 192) == 1) {
                v453 = v445;
                v454 = v452;
                Pane_58df60(v450, *v448),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
                v455 = v454;
                v445 = v453;
                Pane_58dee0(v455, (__int64)*v448),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
              }
              GameRoutine_179fd30((__int64)v448),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
              if (atomic_fetch_add((atomic_ullong* volatile)(v451 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v451 + 16LL))(v451),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
                std___1___shared_weak_count___release_weak(v451),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v449 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v449 + 16LL))(v449),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
                std___1___shared_weak_count___release_weak(v449),
                    v472 = COERCE_AS(__typeof__(v472),
                                     PSEUDO_REGISTER(double, "d0", "=w"));
              }
              v424 = *(_QWORD*)(a1 + 432);
              ++v447;
              v446 += 208;
            } while (0x4EC4EC4EC4EC4EC5LL *
                         ((*(_QWORD*)(a1 + 440) - v424) >> 4) >
                     v447);
          }
        }
      }
    }
    v456 = *(float**)(a1 + 784);
    for (jj = *(__int64**)(a1 + 792); v456 != (float*)jj; v456 += 8) {
      v458 = v456[6];
      if (v458 > 0x1.99999a0000000p-4f && v458 <= 0x1.e000000000000p+2f) {
        v460 = *(_QWORD*)v456;
        v461 = *((_QWORD*)v456 + 1);
        while (v460 != v461) {
          v463 = *(_DWORD**)v460;
          v464 = *(_QWORD*)(*(_QWORD*)v460 + 184LL);
          if (v464 != 0) {
            v465 = *(_QWORD*)(a1 + 160);
            v466 = *(_QWORD*)(a1 + 168);
            if (v465 != v466) {
              while (v464 != *(_QWORD*)(v465 + 32)) {
                v465 += 64;
                if (v465 == v466) {
                  goto LABEL_733;
                }
              }
              *(_DWORD*)(v465 + 48) = v463[16];
              *(_DWORD*)(v465 + 52) = v463[17];
              v462 = *(_OWORD*)(v465 + 48);
              *((_QWORD*)&v462 + 1) = (unsigned int)v463[18];
              *(_OWORD*)(v465 + 48) = v462;
            }
          }
        LABEL_733:
          v460 += 8;
        }
      }
    }
  }
  v467 = *(_QWORD*)(a1 + 608);
  *(_BYTE*)(a1 + 776) = 1;
  GameRoutine_1035980(a1 + 136, v467),
      v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
  *(_BYTE*)(a1 + 777) = 0;
LABEL_741:
  v468 = *(__int64**)(a1 + 24);
  if (v468 != nullptr) {
    v469 = std___1___shared_weak_count_lock((__int64)v468),
    v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    if (v469 != 0) {
      v468 = *(__int64**)(a1 + 16);
    }
    else {
      v468 = nullptr;
    }
    if ((*(_BYTE*)(a1 + 777) & 1) != 0) {
      goto LABEL_750;
    }
  }
  else {
    v469 = 0;
    if ((*(_BYTE*)(a1 + 777) & 1) != 0) {
    LABEL_750:
      LayoutAccessor_155e830((__int64)v468, 0),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      goto LABEL_751;
    }
  }
  v470 = (int*)(a1 + 8);
  if (*(_DWORD*)(a1 + 8) == 0 && (*(_BYTE*)(a1 + 778) & 1) == 0) {
    goto LABEL_750;
  }
  v471 = (__int64)v468;
  if ((LayoutAccessor_155ea30(v468) & 1) == 0) {
    LayoutAccessor_155e830(v471, 1),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
  }
  if (*v470 == 2) {
    game_18f26a0(a1, v472),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    v478 = *(_QWORD*)(a1 + 608);
    if (v478 != 0) {
      v479 = *(_QWORD*)(a1 + 728);
      v733 = *(_QWORD*)(a1 + 736);
      if (v479 == v733 || *(_QWORD*)(v478 + 160) == *(_QWORD*)(v478 + 168)) {
        v480 = 0;
      }
      else {
        v480 = 0;
        do {
          v481 = *(_QWORD*)(a1 + 608);
          v482 = *(_QWORD*)(v481 + 160);
          for (kk = *(_QWORD*)(v481 + 168); v482 != kk; v482 += 128) {
            if (*(_DWORD*)v479 == *(_DWORD*)(v482 + 88)) {
              v507 = *(unsigned __int8*)(v479 + 8);
              v508 = (v507 & 1) != 0 ? *(_QWORD*)(v479 + 16) : v507 >> 1;
              if (v508 == 0) {
                goto LABEL_768;
              }
              v509 = *(unsigned __int8*)(v482 + 96);
              v510 = *(_QWORD*)(v482 + 104);
              if ((v509 & 1) == 0) {
                v510 = v509 >> 1;
              }
              if (v508 == v510) {
                v511 = (v507 & 1) != 0 ? *(_QWORD*)(v479 + 24) : v479 + 9;
                v512 = (v509 & 1) != 0 ? *(_QWORD*)(v482 + 112) : v482 + 97;
                if (memcmp(v511, v512, v508) == 0) {
                LABEL_768:
                  v484 = 208 * v480;
                  v485 = (__int64*)(*(_QWORD*)(a1 + 432) + 208 * v480);
                  v486 = *v485;
                  v487 = std___1___shared_weak_count_lock(v485[3]),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
                  v488 = v485[2];
                  LANES128(v744_.v744).n128_u8[8] = 0;
                  LANES128(v744_.v744).n128_u64[0] = v488;
                  LayoutAccessor_155e830(v488, 1),
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
                  v489 = *(unsigned __int8*)(v482 + 96);
                  v490 = (v489 & 1) == 0;
                  v491 = v489 >> 1;
                  if (v490) {
                    v492 = (const char*)(v482 + 97);
                  }
                  else {
                    v492 = *(const char**)(v482 + 112);
                  }
                  if (v490) {
                    v493 = v491;
                  }
                  else {
                    v493 = *(_QWORD*)(v482 + 104);
                  }
                  GameRoutine_1597ab0((__int64)&v744_.v744,
                                      *(_DWORD*)(v482 + 88), v492, v493, 1),
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
                  v494 = *(_DWORD*)(v482 + 88);
                  v352 = v494 > 0x1C;
                  v495 = 0x63FFFFFu >> v494;
                  v496 = v352;
                  ((void (*)(float32x4_t*, _QWORD))GameRoutine_1597960)(
                      &v744_.v744,
                      ((unsigned __int8)v496 | (unsigned __int8)v495) & 1),
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
                  *(_BYTE*)(*(_QWORD*)(a1 + 432) + v484 + 192) = 1;
                  GameRoutine_179fd30(*(_QWORD*)(a1 + 432) + v484),
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
                  v497 = *(float**)(a1 + 672);
                  v498 = v497[25] * *(float*)(a1 + 12);
                  v499 = v497[30];
                  v500 = v498 *
                         (float)(COERCE_FLOAT(*(_OWORD*)v482) -
                                 (float)(PSEUDO_UNFUSED(
                                     v497[26] *
                                     (float)(vcvts_n_f32_u32(
                                                 *(unsigned __int16*)(a1 + 32),
                                                 1u) -
                                             v497[28]))));
                  v501 = v498 *
                         (float)(COERCE_FLOAT(*(_QWORD*)(v482 + 8)) -
                                 (float)(PSEUDO_UNFUSED(
                                     v497[27] *
                                     (float)(vcvts_n_f32_u32(
                                                 *(unsigned __int16*)(a1 + 34),
                                                 1u) -
                                             v497[29]))));
                  v502 = fmodf(v499, 0x1.6800000000000p+8f),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
                  if (v499 >= 0x0.0p+0f) {
                    v503 = v502;
                  }
                  else {
                    v503 = v502 + 0x1.6800000000000p+8f;
                  }
                  v504 = sinf(v503 * 0x1.1df46a0000000p-6f),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
                  v505 = cosf(v503 * 0x1.1df46a0000000p-6f),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
                  v506 = *(_BYTE*)(v486 + 88);
                  *(_DWORD*)(v486 + 56) = 0;
                  *(_QWORD*)(v486 + 60) = 0;
                  ++v480;
                  *(float*)(v486 + 68) = v503;
                  *(_BYTE*)(v486 + 88) = v506 | 0x11;
                  *(float*)(v486 + 48) = (float)(v505 * v500) -
                                         (float)(PSEUDO_UNFUSED(v504 * v501));
                  *(float*)(v486 + 52) =
                      -(float)((float)(PSEUDO_UNFUSED(v501 * v505)) +
                               (float)(v504 * v500));
                  if (atomic_fetch_add((atomic_ullong* volatile)(v487 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v487 + 16LL))(v487),
                        v472 = COERCE_AS(__typeof__(v472),
                                         PSEUDO_REGISTER(double, "d0", "=w"));
                    std___1___shared_weak_count___release_weak(v487),
                        v472 = COERCE_AS(__typeof__(v472),
                                         PSEUDO_REGISTER(double, "d0", "=w"));
                  }
                }
              }
            }
          }
          v479 += 80;
        } while (v479 != v733);
      }
      v524 = *(_QWORD*)(a1 + 432);
      if (v480 < 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD*)(a1 + 440) - v524) >> 4)) {
        v525 = 208 * v480;
        do {
          v526 = *(_QWORD*)(v524 + v525);
          ++v480;
          v525 += 208;
          *(_BYTE*)(v526 + 88) &= ~1u;
          v524 = *(_QWORD*)(a1 + 432);
        } while (v480 <
                 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD*)(a1 + 440) - v524) >> 4));
      }
    }
    goto LABEL_751;
  }
  v513 = *(_QWORD*)(a1 + 608);
  if (v513 == 0 ||
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                            8LL) +
                 64LL) == 0) {
    goto LABEL_751;
  }
  if (*v470 == 0) {
    MapSimulator_102b410((void*)((__int64)&v744_.v744), v513),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    if (v746_.v747 == 1) {
      MapSimulator_102b410((void*)((__int64)&v744_.v744), *(_QWORD*)(a1 + 608)),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v734 = v744_.v744;
      MapSimulator_102b410((void*)((__int64)&v744_.v744), *(_QWORD*)(a1 + 608)),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v514 = *(float*)&v744_.v745;
      MapSimulator_102b410((void*)((__int64)&v744_.v744), *(_QWORD*)(a1 + 608)),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      LANES64(v515).n64_u64[0] =
          LANES64_OF(
              vmovn_s32(vmvnq_s8(vceqq_f32(v734, *(float32x4_t*)(a1 + 688)))))
              .n64_u64[0];
      if ((LANES64(v515).n64_u8[0] & 1) != 0 ||
          (LANES64(v515).n64_u8[2] & 1) != 0 ||
          (LANES64(v515).n64_u8[4] & 1) != 0 || v514 != *(float*)(a1 + 704) ||
          *((float*)&v744_.v745 + 1) != *(float*)(a1 + 708)) {
        *(_BYTE*)(a1 + 776) = 1;
      }
      MapSimulator_102b410((void*)((__int64)&v744_.v744), *(_QWORD*)(a1 + 608)),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v516 = LANES128(v744_.v744).n128_u32[2];
      v517 = *(_QWORD*)(a1 + 608);
      *(_QWORD*)(a1 + 688) = LANES128(v744_.v744).n128_u64[0];
      v518 = *(_OWORD*)(a1 + 688);
      *((_QWORD*)&v518 + 1) = v516;
      *(_OWORD*)(a1 + 688) = v518;
      MapSimulator_102b410((void*)((__int64)&v744_.v744), v517),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v519 = *(_QWORD*)(a1 + 608);
      *(_DWORD*)(a1 + 704) = (_DWORD)v744_.v745;
      MapSimulator_102b410((void*)((__int64)&v744_.v744), v519),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      *(_DWORD*)(a1 + 708) = HIDWORD(v744_.v745);
    }
    v520 = *(_DWORD*)(a1 + 712);
    v521 = game_8224a0(0x1Fu),
    v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    v522 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v523 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v521),
      v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      if (v523 != 0) {
        v522 = *(_DWORD*)(v523 + 32);
      }
      else {
        v522 = 0;
      }
    }
    if (v520 != v522) {
      *(_BYTE*)(a1 + 776) = 1;
    }
    v527 = game_8224a0(0x1Fu),
    v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    v528 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v529 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v527),
      v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      if (v529 != 0) {
        v528 = *(_DWORD*)(v529 + 32);
      }
      else {
        v528 = 0;
      }
    }
    *(_DWORD*)(a1 + 712) = v528;
  }
  if (*(_BYTE*)(a1 + 776) == 1) {
    v530 = *v470;
    if (*v470 == 1) {
      *(float*)&v472 =
          GameRoutine_1035060((float*)(a1 + 100), (unsigned __int16*)(a1 + 32),
                              *(_QWORD*)(a1 + 608), *(float**)(a1 + 672)),
      v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      v530 = *(_DWORD*)(a1 + 8);
    }
    if (v530 == 0) {
      game_1034e80(a1 + 116, a1 + 32, *(_QWORD*)(a1 + 608),
                   *(_QWORD*)(a1 + 672)),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    }
    game_18f26a0(a1, v472),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    NpcIconList_Unknown4(a1 + 136, *(_QWORD*)(a1 + 608), (int*)(a1 + 8),
                         a1 + 100, a1 + 116),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    CondTalkIconList_Unknown4(a1 + 216, *(_QWORD*)(a1 + 608), (int*)(a1 + 8),
                              a1 + 100, a1 + 116),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    v533 = *(_QWORD*)(a1 + 608);
    v728 = v469;
    v534 = *(_QWORD*)(v533 + 160);
    v535 = *(_QWORD*)(v533 + 168);
    if (v534 != v535) {
      v536 = 0;
      v735 = *((float*)GameData_212c190 + 1);
      v721 = -*(float*)GameData_212c190;
      v724 =
          *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
      v719 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
      v717 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
      v716 = *((float*)GameData_212c188 + 1);
      v712 =
          *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
      v714 = -*(float*)GameData_212c188;
      v711 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
      v537 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
      while (1) {
        v538 = 0;
        v539 = *(_QWORD*)(a1 + 432) + 208 * v536;
        v540 = *(_QWORD*)v539;
        if (*(_BYTE*)(v534 + 80) == 1 && *(_BYTE*)(v534 + 76) == 1) {
          break;
        }
      LABEL_845:
        v545 = *(_OWORD*)(v539 + 64);
        v546 = *(float*)&v545 - *(float*)&v538;
        v547 = *((float*)&v545 + 2) - *((float*)&v538 + 1);
        if (*v470 == 1) {
          v549 = *(float*)(a1 + 108);
          v548 = *(float*)(a1 + 112);
          v551 = *(float*)(a1 + 100);
          v550 = *(float*)(a1 + 104);
          v552 = *(_QWORD*)(a1 + 24);
          if (v552 != 0 &&
              (v553 = std___1___shared_weak_count_lock(v552)) != 0) {
            v554 = v553;
            v555 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)(a1 + 16),
                                                   (__int64)"N_Select"),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            if (atomic_fetch_add((atomic_ullong* volatile)(v554 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v556 = v555;
              (*(void (**)(__int64))(*(_QWORD*)v554 + 16LL))(v554),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
              std___1___shared_weak_count___release_weak(v554),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
              v555 = v556;
            }
          }
          else {
            v555 =
                ui_LayoutAccessor_FindPane_alt1(nullptr, (__int64)"N_Select"),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
          }
          v558 = (float)(v546 - v549) * v551;
          v559 = v551 * (float)(v547 - v548);
          if (v555 != 0 && *(_QWORD*)(v540 + 24) == v555) {
            v560 = fmodf(v550, 0x1.6800000000000p+8f),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            if (v550 < 0x0.0p+0f) {
              v560 = v560 + 0x1.6800000000000p+8f;
            }
            v561 = v560 * 0x1.1df46a0000000p-6f;
            v562 = sinf(v560 * 0x1.1df46a0000000p-6f),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            v563 = cosf(v561),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            v564 = -(float)(v562 * v559);
            v550 = 0x0.0p+0f;
            v559 = (float)(PSEUDO_UNFUSED(v559 * v563)) + (float)(v562 * v558);
            v558 = v564 + (float)(v563 * v558);
          }
          v565 = *(_BYTE*)(v540 + 88);
          *(_DWORD*)(v540 + 64) = 0;
          *(float*)(v540 + 68) = v550;
          *(float*)(v540 + 48) = v558;
          *(float*)(v540 + 52) = -v559;
          *(_QWORD*)(v540 + 56) = 0;
          *(_BYTE*)(v540 + 88) = v565 | 0x10;
          if (*v470 != 0) {
          LABEL_851:
            v557 = *(_QWORD*)(v534 + 120);
            if (v557 != 0) {
              goto LABEL_866;
            }
            goto LABEL_834;
          }
        }
        else if (*v470 != 0) {
          goto LABEL_851;
        }
        v567 = *(float*)(a1 + 124);
        v566 = *(float*)(a1 + 128);
        v568 = *(float*)(a1 + 116);
        if (*(_BYTE*)(a1 + 132) == 1) {
          v569 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 100LL);
          v570 = fmodf(v569, 0x1.6800000000000p+8f),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
          if (v569 < 0x0.0p+0f) {
            v570 = v570 + 0x1.6800000000000p+8f;
          }
        }
        else {
          v570 = *(float*)(a1 + 120);
        }
        v571 = *(_BYTE*)(v540 + 88);
        *(_DWORD*)(v540 + 56) = 0;
        *(_QWORD*)(v540 + 60) = 0;
        *(float*)(v540 + 68) = v570;
        *(float*)(v540 + 48) = (float)(v546 - v567) * v568;
        *(float*)(v540 + 52) = -(float)(v568 * (float)(v547 - v566));
        *(_BYTE*)(v540 + 88) = v571 | 0x10;
        v557 = *(_QWORD*)(v534 + 120);
        if (v557 != 0) {
        LABEL_866:
          v572 = *(_BYTE**)(v557 + 40);
          if (v572 == nullptr || *v572 == 0) {
            v573 = *(_QWORD**)(a1 + 160);
            v574 = *(_QWORD**)(a1 + 168);
            if (v573 != v574) {
              while (v557 != v573[4]) {
                v573 += 8;
                if (v573 == v574) {
                  goto LABEL_834;
                }
              }
              *(_BYTE*)(*v573 + 88LL) &= ~1u;
            }
          }
        }
      LABEL_834:
        ++v536;
        v534 += 128;
        if (v534 == v535) {
          v533 = *(_QWORD*)(a1 + 608);
          goto LABEL_873;
        }
      }
      v541 =
          (float)(PSEUDO_UNFUSED(*(float*)(v534 + 72) *
                                 0x1.1df46a0000000p-6f)) +
          (float)(roundf((float)(*(float*)(v534 + 72) * 0x1.1df46a0000000p-6f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
      v542 = -0x1.921fb60000000p+1f - v541;
      if (v541 >= -0x1.921fb60000000p+0f) {
        v542 = v541;
      }
      if (v541 <= 0x1.921fb60000000p+0f) {
        v544 = 0x1.0000000000000p+0f;
        if (v541 >= -0x1.921fb60000000p+0f) {
        LABEL_844:
          *(float*)&v538 =
              (float)(*(float*)(v540 + 80) *
                      (float)(v542 *
                              (float)((float)((float)(v717 +
                                                      (float)((float)(v724 +
                                                                      (float)((float)(v719 +
                                                                                      (float)((float)(v735 +
                                                                                                      (float)(v721 *
                                                                                                              (float)(v542 *
                                                                                                                      v542))) *
                                                                                              (float)(v542 *
                                                                                                      v542))) *
                                                                              (float)(v542 *
                                                                                      v542))) *
                                                              (float)(v542 *
                                                                      v542))) *
                                              (float)(v542 * v542)) +
                                      0x1.0000000000000p+0f))) *
              0x1.0000000000000p-1f;
          *((float*)&v538 + 1) =
              (float)(*(float*)(v540 + 84) *
                      (float)(v544 *
                              (float)((float)((float)(v537 +
                                                      (float)((float)(v712 +
                                                                      (float)((float)(v711 +
                                                                                      (float)((float)(v716 +
                                                                                                      (float)(v714 *
                                                                                                              (float)(v541 *
                                                                                                                      v541))) *
                                                                                              (float)(v541 *
                                                                                                      v541))) *
                                                                              (float)(v541 *
                                                                                      v541))) *
                                                              (float)(v541 *
                                                                      v541))) *
                                              (float)(v541 * v541)) +
                                      0x1.0000000000000p+0f))) *
              0x1.0000000000000p-1f;
          goto LABEL_845;
        }
        v543 = -0x1.921fb60000000p+1f;
      }
      else {
        v542 = 0x1.921fb60000000p+1f - v541;
        v543 = 0x1.921fb60000000p+1f;
      }
      v541 = v543 - v541;
      v544 = -0x1.0000000000000p+0f;
      goto LABEL_844;
    }
  LABEL_873:
    QuestIconList_Unknown4(a1 + 352, v533, (int*)(a1 + 8), (float*)(a1 + 100),
                           a1 + 116),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    AreaChangeIconList_Unknown4(a1 + 272, *(_QWORD*)(a1 + 608), (int*)(a1 + 8),
                                (_DWORD*)(a1 + 100), a1 + 116),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    v575 = *(_DWORD*)(a1 + 8);
    if (v575 == 1) {
      MapSimulator_102b410((void*)((__int64)&v744_.v744), *(_QWORD*)(a1 + 608)),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      if (v746_.v747 == 1) {
        MapSimulator_102b410((void*)((__int64)&v744_.v744),
                             *(_QWORD*)(a1 + 608)),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        v576 = *(float*)(a1 + 100);
        v577 = *(float*)(a1 + 104);
        v578 = (float)(LANES128(v744_.v744).n128_f32[0] - *(float*)(a1 + 108)) *
               v576;
        v579 = (float)(LANES128(v744_.v744).n128_f32[2] - *(float*)(a1 + 112)) *
               v576;
        v580 = fmodf(v577, 0x1.6800000000000p+8f),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
        if (v577 < 0x0.0p+0f) {
          v580 = v580 + 0x1.6800000000000p+8f;
        }
        v581 = v580 * 0x1.1df46a0000000p-6f;
        v582 = sinf(v580 * 0x1.1df46a0000000p-6f),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
        v583 = cosf(v581),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
        v584 = *(_QWORD*)(a1 + 456);
        v585 = *(_BYTE*)(v584 + 88);
        *(_DWORD*)(v584 + 56) = 0;
        *(float*)(v584 + 48) =
            (float)(v583 * v578) - (float)(PSEUDO_UNFUSED(v582 * v579));
        *(float*)(v584 + 52) = -(float)((float)(PSEUDO_UNFUSED(v579 * v583)) +
                                        (float)(v582 * v578));
        *(_BYTE*)(v584 + 88) = v585 | 0x10;
        MapSimulator_102b410((void*)((__int64)&v744_.v744),
                             *(_QWORD*)(a1 + 608)),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        v586 = *(_QWORD*)(a1 + 456);
        v587 = *((float*)&v744_.v745 + 1) + *(float*)(a1 + 104);
        v588 = *(_BYTE*)(v586 + 88);
        *(_QWORD*)(v586 + 60) = 0;
        *(float*)(v586 + 68) = v587;
        *(_BYTE*)(v586 + 88) = v588 | 0x10;
        MapSimulator_102b410((void*)((__int64)&v744_.v744),
                             *(_QWORD*)(a1 + 608)),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        v589 = *(float*)(a1 + 100);
        v590 = *(float*)(a1 + 104);
        v591 = (float)(LANES128(v744_.v744).n128_f32[0] - *(float*)(a1 + 108)) *
               v589;
        v592 = (float)(LANES128(v744_.v744).n128_f32[2] - *(float*)(a1 + 112)) *
               v589;
        v593 = fmodf(v590, 0x1.6800000000000p+8f),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
        if (v590 < 0x0.0p+0f) {
          v593 = v593 + 0x1.6800000000000p+8f;
        }
        v594 = v593 * 0x1.1df46a0000000p-6f;
        v595 = sinf(v593 * 0x1.1df46a0000000p-6f),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
        v596 = cosf(v594),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
        v597 = *(_QWORD*)(a1 + 464);
        v598 = *(_BYTE*)(v597 + 88);
        *(_DWORD*)(v597 + 56) = 0;
        *(float*)(v597 + 48) =
            (float)(v596 * v591) - (float)(PSEUDO_UNFUSED(v595 * v592));
        *(float*)(v597 + 52) = -(float)((float)(PSEUDO_UNFUSED(v592 * v596)) +
                                        (float)(v595 * v591));
        *(_BYTE*)(v597 + 88) = v598 | 0x10;
        MapSimulator_102b410((void*)((__int64)&v744_.v744),
                             *(_QWORD*)(a1 + 608)),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        v599 = (float)(*(float*)&v744_.v745 + 0x1.6800000000000p+7f) +
               *(float*)(a1 + 104);
        v600 = fmodf(v599, 0x1.6800000000000p+8f),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
        v601 = *(_QWORD*)(a1 + 464);
        v602 = *(_BYTE*)(v601 + 88);
        if (v599 < 0x0.0p+0f) {
          v600 = v600 + 0x1.6800000000000p+8f;
        }
        *(_QWORD*)(v601 + 60) = 0;
        *(float*)(v601 + 68) = v600;
        *(_BYTE*)(v601 + 88) = v602 | 0x10;
      }
      *(_BYTE*)(*(_QWORD*)(a1 + 528) + 88LL) &= ~1u;
      if (*(_BYTE*)(a1 + 592) == 1) {
        v603 = *(_QWORD*)(a1 + 608);
        v604 = *(_QWORD*)(v603 + 232);
        for (mm = *(_QWORD*)(v603 + 240); v604 != mm; v604 += 112) {
          v606 = std___1___shared_weak_count_lock(*(_QWORD*)(v604 + 96)),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
          v607 = *(_QWORD*)(v604 + 88);
          v608 = v606;
          v609 = *(_QWORD*)(v607 + 24);
          if (v609 != 0) {
            v610 = std___1___shared_weak_count_lock(v609),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            if (v610 != 0) {
              v611 = *(_QWORD*)(v607 + 16);
              goto LABEL_891;
            }
          }
          else {
            v610 = 0;
          }
          v611 = 0;
        LABEL_891:
          v612 = *(_QWORD*)(a1 + 720);
          v613 = *(_QWORD*)(v612 + 24);
          if (v613 != 0 &&
              (v614 = std___1___shared_weak_count_lock(v613)) != 0) {
            v6 = v611 == *(_QWORD*)(v612 + 16);
            add = atomic_fetch_add((atomic_ullong* volatile)(v614 + 8),
                                   0xFFFFFFFFFFFFFFFFLL);
            v616 = v6;
            if (add == 0) {
              v617 = v614;
              (*(void (**)(__int64))(*(_QWORD*)v614 + 16LL))(v614),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
              std___1___shared_weak_count___release_weak(v617),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
            }
          }
          else {
            v616 = v611 == 0;
          }
          if (v610 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v610 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v610 + 16LL))(v610),
                v472 = COERCE_AS(__typeof__(v472),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
            std___1___shared_weak_count___release_weak(v610),
                v472 = COERCE_AS(__typeof__(v472),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v608 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v608 + 16LL))(v608),
                v472 = COERCE_AS(__typeof__(v472),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
            std___1___shared_weak_count___release_weak(v608),
                v472 = COERCE_AS(__typeof__(v472),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
          }
          if (v616) {
            v618 = *(_BYTE**)(*(_QWORD*)(a1 + 672) + 32LL);
            if (v618 != nullptr && *v618 != 0) {
              v619 = *(float*)(a1 + 100);
              v620 = *(float*)(a1 + 104);
              v621 =
                  (float)(COERCE_FLOAT(*(_OWORD*)v604) - *(float*)(a1 + 108)) *
                  v619;
              v622 = v619 * (float)(COERCE_FLOAT(*(_QWORD*)(v604 + 8)) -
                                    *(float*)(a1 + 112));
              v623 = fmodf(v620, 0x1.6800000000000p+8f),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
              if (v620 < 0x0.0p+0f) {
                v623 = v623 + 0x1.6800000000000p+8f;
              }
              v624 = v623 * 0x1.1df46a0000000p-6f;
              v625 = sinf(v623 * 0x1.1df46a0000000p-6f),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
              v626 = cosf(v624),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
              v627 = *(_QWORD*)(a1 + 528);
              v628 = *(_BYTE*)(v627 + 88);
              *(_DWORD*)(v627 + 56) = 0;
              *(float*)(v627 + 48) =
                  (float)(v626 * v621) - (float)(PSEUDO_UNFUSED(v625 * v622));
              *(float*)(v627 + 52) =
                  -(float)((float)(PSEUDO_UNFUSED(v622 * v626)) +
                           (float)(v625 * v621));
              *(_BYTE*)(v627 + 88) = v628 | 0x11;
            }
          }
        }
      }
      v630 = *(_QWORD*)(a1 + 488);
      v629 = *(_QWORD*)(a1 + 496);
      v469 = v728;
      if (v629 != v630) {
        v631 = 0;
        v632 = 0;
        do {
          if (*(float*)(v630 + v631 + 24) == 0x0.0p+0f) {
            *(_BYTE*)(*(_QWORD*)(v630 + v631) + 88LL) &= ~1u;
            v630 = *(_QWORD*)(a1 + 488);
            v629 = *(_QWORD*)(a1 + 496);
          }
          ++v632;
          v631 += 64;
        } while (v632 < (v629 - v630) >> 6);
      }
      v575 = *v470;
    }
    if (v575 == 0) {
      MapSimulator_102b410((void*)((__int64)&v744_.v744), *(_QWORD*)(a1 + 608)),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      if (v746_.v747 == 1) {
        v633 = 0x0.0p+0f;
        if ((*(_BYTE*)(a1 + 132) & 1) == 0) {
          MapSimulator_102b410((void*)((__int64)&v744_.v744),
                               *(_QWORD*)(a1 + 608)),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
          v634 = *(_QWORD*)(a1 + 608);
          if ((float)(*((float*)&v744_.v745 + 1) + *(float*)(a1 + 120)) >=
              0x0.0p+0f) {
            MapSimulator_102b410((void*)((__int64)&v742_.v742), v634),
                v472 = COERCE_AS(__typeof__(v472),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
            v633 = fmodf(*((float*)&v742_.v743 + 1) + *(float*)(a1 + 120),
                         0x1.6800000000000p+8f),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
          }
          else {
            MapSimulator_102b410((void*)((__int64)&v742_.v742), v634),
                v472 = COERCE_AS(__typeof__(v472),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
            v633 = fmodf(*((float*)&v742_.v743 + 1) + *(float*)(a1 + 120),
                         0x1.6800000000000p+8f) +
                   0x1.6800000000000p+8f,
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
          }
        }
        v635 = *(_QWORD*)(a1 + 456);
        v636 = *(_BYTE*)(v635 + 88);
        *(_QWORD*)(v635 + 48) = 0;
        *(_DWORD*)(v635 + 56) = 0;
        *(_BYTE*)(v635 + 88) = v636 | 0x10;
        v637 = *(_QWORD*)(a1 + 456);
        v638 = *(_BYTE*)(v637 + 88);
        *(_QWORD*)(v637 + 60) = 0;
        *(float*)(v637 + 68) = v633;
        *(_BYTE*)(v637 + 88) = v638 | 0x10;
        MapSimulator_102b410((void*)((__int64)&v744_.v744),
                             *(_QWORD*)(a1 + 608)),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        v639 = *(float*)&v744_.v745;
        if (*(_BYTE*)(a1 + 132) == 1) {
          MapSimulator_102b410((void*)((__int64)&v744_.v744),
                               *(_QWORD*)(a1 + 608)),
              v472 = COERCE_AS(__typeof__(v472),
                               PSEUDO_REGISTER(double, "d0", "=w"));
          v640 = 0x1.6800000000000p+7f;
          v641 = v639 - *((float*)&v744_.v745 + 1);
        }
        else {
          v640 = *(float*)(a1 + 120);
          v641 = *(float*)&v744_.v745 + 0x1.6800000000000p+7f;
        }
        v642 = v641 + v640;
        v643 = fmodf(v641 + v640, 0x1.6800000000000p+8f),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
        if (v642 < 0x0.0p+0f) {
          v643 = v643 + 0x1.6800000000000p+8f;
        }
        v644 = *(_QWORD*)(a1 + 464);
        v645 = *(_BYTE*)(v644 + 88);
        *(_QWORD*)(v644 + 48) = 0;
        *(_DWORD*)(v644 + 56) = 0;
        *(_BYTE*)(v644 + 88) = v645 | 0x10;
        v646 = *(_QWORD*)(a1 + 464);
        v647 = *(_BYTE*)(v646 + 88);
        *(_QWORD*)(v646 + 60) = 0;
        *(float*)(v646 + 68) = v643;
        *(_BYTE*)(v646 + 88) = v647 | 0x10;
      }
      MapSimulator_102b410((void*)((__int64)&v744_.v744), *(_QWORD*)(a1 + 608)),
          v472 =
              COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
      if (v746_.v747 == 1) {
        MapSimulator_102b410((void*)((__int64)&v744_.v744),
                             *(_QWORD*)(a1 + 608)),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        v648 = v744_.v744;
        v649 = *(float32x4_t*)(a1 + 512);
        v650 = vsubq_f32(v649, v744_.v744);
        v651 = vmulq_f32(v650, v650);
        LANES128(v651).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v651, v651, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v651).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v651).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v651).n128_u64[0]))))
                .n64_f32[0] >= 0x1.4000000000000p+3f) {
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 24LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 88LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 152LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 216LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 280LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 344LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 408LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 472LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 536LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 600LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 664LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 728LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 792LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 856LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 920LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 984LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1048LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1112LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1176LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1240LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1304LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1368LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1432LL) = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1496LL) = 0;
          *(_QWORD*)(a1 + 512) = LANES128(v648).n128_u64[0];
          v649 = *(float32x4_t*)(a1 + 512);
          LANES128(v649).n128_u64[1] = LANES128(v648).n128_u32[2];
          *(float32x4_t*)(a1 + 512) = v649;
        }
        v652 = *(_QWORD*)(*GameData_212d458[0] + 88);
        if (v652 != 0) {
          v653 = (*(_QWORD*)(v652 + 16) - *(_QWORD*)(v652 + 8)) >> 5;
          if ((int)v653 >= 2) {
            v654 = *(float32x4_t*)(*(_QWORD*)(v652 + 16) - 64LL);
            LANES64(v655).n64_u64[0] =
                LANES64_OF(vmovn_s32(vceqq_f32(v649, v654))).n64_u64[0];
            if ((LANES64(v655).n64_u8[0] & 1) == 0 ||
                (LANES64(v655).n64_u8[2] & 1) == 0 ||
                (LANES64(v655).n64_u8[4] & 1) == 0) {
              *(_QWORD*)(a1 + 512) = LANES128(v654).n128_u64[0];
              v656 = *(_QWORD*)(a1 + 488);
              v657 = *(_OWORD*)(a1 + 512);
              *((_QWORD*)&v657 + 1) = LANES128(v654).n128_u32[2];
              *(_OWORD*)(a1 + 512) = v657;
              *(_DWORD*)(v656 + 1496) = *(_DWORD*)(v656 + 1432);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1432LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1368LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1368LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1304LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1304LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1240LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1240LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1176LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1176LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1112LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1112LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1048LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 1048LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 984LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 984LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 920LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 920LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 856LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 856LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 792LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 792LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 728LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 728LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 664LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 664LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 600LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 600LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 536LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 536LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 472LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 472LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 408LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 408LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 344LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 344LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 280LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 280LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 216LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 216LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 152LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 152LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 88LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 88LL) =
                  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 24LL);
              *(_DWORD*)(*(_QWORD*)(a1 + 488) + 24LL) = 1133903872;
              v658 = (unsigned int)v653 >= 0x18 ? 24LL : (unsigned int)v653;
              v659 = v658 - 1;
              if ((_DWORD)v653 == 2) {
                v660 = 1;
              }
              else {
                v661 = 96;
                v662 = 0;
                v660 = 1;
                do {
                  v660 += 2;
                  v663 = *(_QWORD*)(v652 + 16) + v662;
                  v664 = *(_OWORD*)(v663 - 64);
                  v665 = *(float*)(v663 - 48);
                  v666 = *(_QWORD*)(a1 + 488) + v661;
                  *(_QWORD*)(v666 - 64) = v664;
                  v667 = *(_OWORD*)(v666 - 64);
                  *((_QWORD*)&v667 + 1) = DWORD2(v664);
                  *(_OWORD*)(v666 - 64) = v667;
                  *(float*)(*(_QWORD*)(a1 + 488) + v661 - 48) =
                      v665 + 0x1.6800000000000p+7f;
                  v668 = *(_QWORD*)(v652 + 16) + v662;
                  v662 -= 64;
                  v669 = *(_OWORD*)(v668 - 96);
                  v670 = *(float*)(v668 - 80);
                  v671 = *(_QWORD*)(a1 + 488);
                  *(_QWORD*)(v671 + v661) = v669;
                  v672 = *(_OWORD*)(v671 + v661);
                  *((_QWORD*)&v672 + 1) = DWORD2(v669);
                  *(_OWORD*)(v671 + v661) = v672;
                  v673 = *(_QWORD*)(a1 + 488) + v661;
                  v661 += 128;
                  *(float*)(v673 + 16) = v670 + 0x1.6800000000000p+7f;
                } while (v660 - (v659 & 0xFFFFFFFFFFFFFFFELL) != 1);
              }
              if ((v659 & 1) != 0) {
                v674 = *(_QWORD*)(v652 + 16) + 32 * ~v660;
                v675 = *(_OWORD*)v674;
                v676 = *(float*)(v674 + 16);
                v677 = (v660 << 6) - 64;
                v678 = *(_QWORD*)(a1 + 488) + v677;
                *(_QWORD*)(v678 + 32) = v675;
                v679 = *(_OWORD*)(v678 + 32);
                *((_QWORD*)&v679 + 1) = DWORD2(v675);
                *(_OWORD*)(v678 + 32) = v679;
                *(float*)(*(_QWORD*)(a1 + 488) + v677 + 48) =
                    v676 + 0x1.6800000000000p+7f;
              }
            }
            v680 = 0;
            v681 = 0;
            v682 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                             104LL);
            while (1) {
              v683 = *(_QWORD*)(a1 + 488);
              v684 = (float32x4_t*)(v683 + v680);
              v685 = *(float*)(v683 + v680 + 24) - v682;
              *(float*)(v683 + v680 + 24) = v685;
              if (v685 >= 0x0.0p+0f) {
                break;
              }
              LANES128(v684[1]).n128_u32[2] = 0;
            LABEL_948:
              ++v681;
              v680 += 64;
              if (v681 == 24) {
                goto LABEL_970;
              }
            }
            v686 = *(float*)(a1 + 116);
            v688 = *(float*)(a1 + 124);
            v687 = *(float*)(a1 + 128);
            v689 = LANES128(*(v684)).n128_u64[0];
            v736 = v684[2];
            v690 =
                std___1___shared_weak_count_lock(LANES128(v684[1]).n128_i64[0]),
            v472 = COERCE_AS(__typeof__(v472),
                             PSEUDO_REGISTER(double, "d0", "=w"));
            v691 = (__int64*)LANES128(*(v684)).n128_u64[1];
            v692 = v690;
            if (v691[2] != 0) {
              v693 = v691[1];
              if (v693 != 0) {
                v694 = std___1___shared_weak_count_lock(v693),
                v472 = COERCE_AS(__typeof__(v472),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
                if (v694 == 0) {
                  goto LABEL_961;
                }
                v696 = *v691;
                if (*v691 != 0) {
                  v695 = *(unsigned __int8*)(v696 + 24);
                  v697 = v696 + 152;
                  if (v695 == 0) {
                    v697 = 0;
                  }
                  v698 = v697 != v691[2];
                }
                else {
                  v698 = true;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v694 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v699 = v694;
                  v725 = v695;
                  (*(void (**)(__int64))(*(_QWORD*)v694 + 16LL))(v694),
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
                  std___1___shared_weak_count___release_weak(v699),
                      v472 = COERCE_AS(__typeof__(v472),
                                       PSEUDO_REGISTER(double, "d0", "=w"));
                  LOBYTE(v695) = v725;
                }
                if (!v698) {
                  if ((v695 & 1) == 0) {
                    goto LABEL_968;
                  }
                }
                else {
                LABEL_961:
                  v700 = v691[1];
                  if (v700 == 0 || *(_QWORD*)(v700 + 8) == -1) {
                    goto LABEL_968;
                  }
                }
                v701 = v691[2];
                if (v701 != 0) {
                  v702 = *(_QWORD*)(v701 + 24);
                  if (v702 != 0) {
                    *(_BYTE*)(v702 + 89) =
                        (int)(float)((float)((float)((float)(fminf(
                                                                 fmaxf(
                                                                     (float)((float)
                                                                                 v681 /
                                                                             -0x1.8000000000000p+4f) +
                                                                         0x1.0000000000000p+0f,
                                                                     0x0.0p+0f),
                                                                 0x1.0000000000000p+0f) *
                                                             0x1.f5c2900000000p-1f) +
                                                     0x1.47ae140000000p-6f) *
                                             (float)((float)(fminf(
                                                                 fmaxf(
                                                                     v685 /
                                                                         0x1.2c00000000000p+8f,
                                                                     0x0.0p+0f),
                                                                 0x1.0000000000000p+0f) *
                                                             0x1.f5c2900000000p-1f) +
                                                     0x1.47ae140000000p-6f)) *
                                     0x1.fe00000000000p+7f);
                  }
                }
              }
            }
          LABEL_968:
            v703 = *(_BYTE*)(v689 + 88);
            *(_DWORD*)(v689 + 56) = 0;
            *(_BYTE*)(v689 + 88) = v703 | 0x10;
            *(float*)(v689 + 48) =
                (float)(LANES128(v736).n128_f32[0] - v688) * v686;
            *(float*)(v689 + 52) =
                -(float)(v686 * (float)(LANES128(v736).n128_f32[2] - v687));
            v704 = *(_DWORD*)(v683 + v680 + 48);
            *(_QWORD*)(v689 + 60) = 0;
            *(_BYTE*)(v689 + 88) = v703 | 0x11;
            *(_DWORD*)(v689 + 68) = v704;
            if (atomic_fetch_add((atomic_ullong* volatile)(v692 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v692 + 16LL))(v692),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
              std___1___shared_weak_count___release_weak(v692),
                  v472 = COERCE_AS(__typeof__(v472),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
            }
            goto LABEL_948;
          }
        }
      LABEL_970:
        v706 = *(_QWORD*)(a1 + 488);
        v705 = *(_QWORD*)(a1 + 496);
        if (v705 != v706) {
          v707 = 0;
          v708 = 0;
          do {
            if (*(float*)(v706 + v707 + 24) == 0x0.0p+0f) {
              *(_BYTE*)(*(_QWORD*)(v706 + v707) + 88LL) &= ~1u;
              v706 = *(_QWORD*)(a1 + 488);
              v705 = *(_QWORD*)(a1 + 496);
            }
            ++v708;
            v707 += 64;
          } while (v708 < (v705 - v706) >> 6);
        }
      }
      *(_BYTE*)(*(_QWORD*)(a1 + 528) + 88LL) &= ~1u;
    }
    *(_BYTE*)(a1 + 776) = 0;
  }
  v709 = *(__int64**)(a1 + 784);
  for (nn = *(__int64**)(a1 + 792); v709 != nn; v709 += 4) {
    GameRoutine_17a0100(v709, *(_DWORD*)(a1 + 596)),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
  }
LABEL_751:
  if (v469 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v469 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v469 + 16LL))(v469),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    std___1___shared_weak_count___release_weak(v469),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
  }
  if (v737 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v737 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v737 + 16LL))(v737),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
    std___1___shared_weak_count___release_weak(v737),
        v472 = COERCE_AS(__typeof__(v472), PSEUDO_REGISTER(double, "d0", "=w"));
  }
}

void game_18f3260(__int64 a1, __int64 a2, int a3)
{
  __int64 v4;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  bool v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v22;
    unsigned __int64 v23;
    char* v24;
  } v22_;
  struct {
    __int64 v25[2];
    __int64 v26;
  } v25_;

  *(_DWORD*)(a1 + 596) = a3;
  *(_QWORD*)(a1 + 720) = a2;
  *(_BYTE*)(a1 + 592) = a3 == 0;
  v4 = *(_QWORD*)(a2 + 24);
  if (v4 == 0) {
    goto LABEL_37;
  }
  v6 = std___1___shared_weak_count_lock(v4);
  if (v6 == 0) {
    goto LABEL_37;
  }
  v7 = *(_QWORD**)(a2 + 16);
  v8 = v6;
  if (v7 != nullptr) {
    if ((v7[47] & 1) != 0) {
      fw_text_String_CopyTerminated(v25_.v25, v7[49], v7[48]);
    }
    else {
      v9 = v7[47];
      v10 = v7[48];
      v11 = v7[49];
      v25_.v25[0] = v9;
      v25_.v25[1] = v10;
      v25_.v26 = v11;
    }
    if (*(_BYTE*)(a2 + 104) != 1 || *(_DWORD*)(a1 + 596) != 0) {
      GameRoutine_18f34a0(a1, (unsigned __int8*)v25_.v25);
    LABEL_30:
      if ((v25_.v25[0] & 1) != 0 && v25_.v26 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v25_.v26);
      }
      goto LABEL_35;
    }
    v12 = *(unsigned __int8*)(GameData_21f3d10 + 40);
    v13 = (v12 & 1) == 0;
    v14 = v12 >> 1;
    if (v13) {
      v15 = v14;
    }
    else {
      v15 = *(_QWORD*)(GameData_21f3d10 + 48);
    }
    if (v13) {
      v16 = GameData_21f3d10 + 41;
    }
    else {
      v16 = *(_QWORD*)(GameData_21f3d10 + 56);
    }
    v17 = v15 + 3;
    if (v15 + 3 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (v17 >= 0x17) {
      if ((v17 | 7) == 0x17) {
        v19 = 26;
      }
      else {
        v19 = (v17 | 7) + 1;
      }
      v18 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v19,
                                                  16, 0);
      v22_.v23 = v15 + 3;
      v22_.v24 = v18;
      v22_.v22 = v19 | 1;
    }
    else {
      v22_.v23 = 0;
      v22_.v24 = nullptr;
      v22_.v22 = (unsigned __int8)(2 * v17);
      v18 = (char*)&v22_.v22 + 1;
      if (v15 == 0) {
        goto LABEL_25;
      }
    }
    memmove((__int64)v18, v16, v15);
  LABEL_25:
    *(_DWORD*)&v18[v15] = 3227999;
    GameRoutine_18f34a0(a1, (unsigned __int8*)&v22_.v22);
    if ((v22_.v22 & 1) != 0 && v22_.v24 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, (__int64)v22_.v24);
    }
    goto LABEL_30;
  }
LABEL_35:
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
LABEL_37:
  *(_WORD*)(a1 + 776) = 257;
}

__int64 game_1919ef0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;

  v0 = GameData_21c9738;
  if (GameData_21c9738 == 0) {
    goto LABEL_10;
  }
  v1 = GameData_21c9730;
  v2 = GameData_21c9738;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(GameData_21c9738 + 16),
                            1u, memory_order_relaxed);
  v3 = std___1___shared_weak_count_lock(v2);
  std___1___shared_weak_count___release_weak(v0);
  if (v3 == 0 || v1 == 0) {
    if (v3 == 0) {
      goto LABEL_10;
    }
  }
  else {
    game_191d680(v1, 1);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
LABEL_10:
  result = GameData_226b6b0;
  if (GameData_226b6b0 != 0) {
    return DGame_111adc0(GameData_226b6b0);
  }
  return result;
}

__int64 game_191ba20(__int64 result, _BYTE* a2, float a3, double a4, float a5,
                     float a6, float a7)
{

#pragma clang fp contract(off)
  int8x16_t v7;
  int8x16_t v8;

  if (result != 0) {
    LOBYTE(a3) = *a2;
    LOBYTE(a5) = a2[1];
    LOBYTE(a6) = a2[2];
    LOBYTE(a7) = a2[3];
    LANES128(v7).n128_f32[0] = (float)LODWORD(a3) / 0x1.fe00000000000p+7f;
    LANES128(v7).n128_f32[1] = (float)LODWORD(a5) / 0x1.fe00000000000p+7f;
    LANES128(v7).n128_f32[2] = (float)LODWORD(a6) / 0x1.fe00000000000p+7f;
    LANES128(v7).n128_f32[3] = (float)LODWORD(a7) / 0x1.fe00000000000p+7f;
    v8 = v7;
    return GameRoutine_1917400(result, "_Hair", 5u, &v8, 1, 1);
  }
  return result;
}

__int64 game_191d030(__int64 a1, __int64 a2)
{
  game_191d2f0(a1, a2, 0x1.0000000000000p+0f);
  return 1;
}

__int64 game_191d050(__int64 a1, __int64 a2)
{
  game_191d2f0(a1, a2, 0x1.0000000000000p+1f);
  return 1;
}

void game_191d680(__int64 a1, char a2)
{
  __int64 v2;
  _QWORD* v3;
  _BYTE* v4;
  __int64 v5;
  unsigned __int16* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  _BYTE* v11;
  int v12;
  _BYTE* v13;
  bool v14;
  unsigned __int64 v15;
  _BYTE* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  int v20;
  int v22;
  unsigned __int64 v23;
  int v24;
  int v25;
  unsigned __int64 v26;
  int v27;
  _BYTE* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  int v34;
  int v35;
  int v36;
  int v37;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  int v43;
  _BYTE* v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64 i;
  int v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v67;
  unsigned __int64 v68;
  const char* v69;
  signed __int64 v70;
  const char* v71;
  __int64 v72;
  __int64 v73;
  _QWORD* v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  _QWORD* v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  const char** v90;
  int v91;
  unsigned __int64 v92;
  const char** v93;
  unsigned __int64 v94;
  const char** v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  _QWORD* v110;
  _QWORD* v111;
  unsigned __int64 v112;
  __int64 v113;
  _QWORD* v114;
  _QWORD* v115;
  unsigned __int64 v116;
  __int64 v117;
  const char** v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  const char** v123;
  unsigned __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  unsigned __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  __int64 v134;
  __int64 v135;
  const char** v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v143;
  unsigned __int64 v144;
  unsigned __int64 v145;
  _BYTE* v146;
  __int64 v147;
  __int64 v148;
  _BYTE* v149;
  int v150;
  __int64 v151;

  if ((a2 & 1) == 0 && (*(_BYTE*)(a1 + 216) & 1) != 0) {
    return;
  }
  GameRoutine_191e700(a1);
  v2 = GameData_21c9b20;
  v3 = *(_QWORD**)(GameData_21c9b20 + 64);
  if ((int)((*(_QWORD*)(GameData_21c9b20 + 72) - (_QWORD)v3) >> 3) < 1 ||
      (v4 = (_BYTE*)*v3, *v3 == 0)) {
    *(_BYTE*)(a1 + 216) = 1;
    return;
  }
  v143 = 0;
  v144 = 0;
  v145 = 0;
  do {
    v147 = *((unsigned __int16*)v4 + 16);
    if (*((_WORD*)v4 + 16) == 0) {
      goto LABEL_119;
    }
    v5 = 0;
    v146 = v4;
    while (2) {
      v6 = (unsigned __int16*)(*((_QWORD*)v4 + 5) + 16 * v5);
      v7 = *v6;
      if (*v6 == 0) {
        goto LABEL_10;
      }
      v8 = *((_QWORD*)v6 + 1);
      v148 = v5;
      v149 = nullptr;
      v9 = 0;
      v10 = 0;
      v11 = nullptr;
      v12 = 0;
      v150 = 0;
      do {
        v16 = *(_BYTE**)(v8 + 8 * v9);
        if (v16 == nullptr || *v16 == 0) {
          goto LABEL_25;
        }
        v17 = strlen(*(const char**)(v8 + 8 * v9));
        v18 = v17;
        if (v17 >= 4) {
          v19 = 4;
        }
        else {
          v19 = v17;
        }
        v20 = memcmp((__int64)v16, (__int64)"SID_", v19);
        if (v18 >= 4 && v20 == 0) {
          v12 = 3;
          goto LABEL_39;
        }
        v22 = memcmp((__int64)v16, (__int64)"JID_", v19);
        if (v18 >= 4 && v22 == 0) {
          v12 = 2;
        LABEL_39:
          v11 = v16;
          goto LABEL_40;
        }
        v35 = memcmp((__int64)v16, (__int64)"BID_", v19);
        if (v18 >= 4 && v35 == 0) {
          v12 = 4;
          goto LABEL_39;
        }
        if (v18 >= 0x16) {
          v39 = 22;
        }
        else {
          v39 = v18;
        }
        if (((v18 == 22) & (memcmp((__int64)v16, (__int64)&GameData_1ab609d,
                                   v39) == 0)) != 0) {
          v12 = 1;
          v11 = v16;
        }
      LABEL_40:
        if (v18 >= 3) {
          v23 = 3;
        }
        else {
          v23 = v18;
        }
        v24 = memcmp((__int64)v16, (__int64)&GameData_1ae9560, v23);
        if (v18 != 3 || v24 != 0) {
          v25 = v12;
          if (v18 >= 6) {
            v26 = 6;
          }
          else {
            v26 = v18;
          }
          v27 = memcmp((__int64)v16, (__int64)&GameData_1aba427, v26);
          if (v18 == 6 && v27 == 0) {
            v150 = 1;
            goto LABEL_52;
          }
          v34 = memcmp((__int64)v16, (__int64)&GameData_1acaad4, v23);
          if (v18 != 3 || v34 != 0) {
            v36 = memcmp((__int64)v16, (__int64)&GameData_1aba42e, v26);
            v37 = v150;
            if (v36 == 0 && v18 == 6) {
              v37 = 2;
            }
            v150 = v37;
            if ((__int64)v18 >= 6) {
            LABEL_52:
              v28 = &v16[v18];
              v29 = v18;
              v30 = v18;
              v31 = (__int64)v16;
              do {
                v32 = memchr(v31, 232, v30 - 5);
                if (v32 == 0) {
                  break;
                }
                if (*(_DWORD*)v32 == -393444632 &&
                    *(unsigned __int16*)(v32 + 4) == 45705) {
                  if ((_BYTE*)v32 != v28 && v32 - (_QWORD)v16 != -1) {
                    v149 = v16;
                    goto LABEL_19;
                  }
                  break;
                }
                v31 = v32 + 1;
                v30 = (unsigned __int64)&v28[-v31];
              } while ((__int64)&v28[-v31] >= 6);
              v40 = (__int64)v16;
              do {
                v41 = memchr(v40, 233, v29 - 5);
                if (v41 == 0) {
                  break;
                }
                if (*(_DWORD*)v41 == -391468055 &&
                    *(unsigned __int16*)(v41 + 4) == 45705) {
                  v13 = v149;
                  v14 = v41 - (_QWORD)v16 == -1 || v41 == (_QWORD)v28;
                  if (!v14) {
                    v13 = v16;
                  }
                  v149 = v13;
                  break;
                }
                v40 = v41 + 1;
                v29 = (unsigned __int64)&v28[-v40];
              } while ((__int64)&v28[-v40] >= 6);
            }
          }
          else {
            v150 = 2;
          }
        LABEL_19:
          v12 = v25;
          goto LABEL_20;
        }
        v150 = 1;
      LABEL_20:
        if (v18 >= 5) {
          v15 = 5;
        }
        else {
          v15 = v18;
        }
        if (memcmp((__int64)v16, (__int64)"Spine", v15) == 0) {
          v10 |= v18 == 5;
        }
      LABEL_25:
        ++v9;
      } while (v9 != v7);
      if ((v10 & 1) != 0 && v12 != 0) {
        v43 = v12;
        v14 = v12 == 1;
        v4 = v146;
        if (v14) {
          v44 = v149;
          if (v149 != nullptr && (v146[283] != 0 || v146[287] != 0)) {
          LABEL_101:
            if (v145 >= v144) {
              v45 = v145 - v143;
              v46 = (__int64)(v145 - v143) >> 5;
              v47 = v46 + 1;
              if ((unsigned __int64)(v46 + 1) >> 59 != 0) {
                GameRoutine_191f6c0();
              }
              if ((__int64)(v144 - v143) >> 4 > v47) {
                v47 = (__int64)(v144 - v143) >> 4;
              }
              if (v144 - v143 >= 0x7FFFFFFFFFFFFFE0LL) {
                v48 = 0x7FFFFFFFFFFFFFFLL;
              }
              else {
                v48 = v47;
              }
              if (v48 != 0) {
                if (v48 >> 59 != 0) {
                LABEL_274:
                  GameRoutine_60a210();
                }
                v49 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v48, 16, 0);
              }
              else {
                v49 = 0;
              }
              v50 = v49 + v45;
              v51 = v49 + v45 - 32 * v46;
              *(_QWORD*)v50 = v146;
              *(_QWORD*)(v50 + 8) = v11;
              *(_QWORD*)(v50 + 16) = v44;
              *(_DWORD*)(v50 + 28) = v43;
              v144 = v49 + 32 * v48;
              *(_BYTE*)(v50 + 24) = v150;
              v145 = v49 + v45 + 32;
              memcpy(v51, v143, v45);
              if (v143 != 0) {
                v52 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v52 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, v143);
              }
              v143 = v51;
            }
            else {
              *(_QWORD*)v145 = v146;
              *(_QWORD*)(v145 + 8) = v11;
              *(_QWORD*)(v145 + 16) = v44;
              *(_DWORD*)(v145 + 28) = v43;
              *(_BYTE*)(v145 + 24) = v150;
              v145 += 32LL;
            }
          }
        }
        else {
          v44 = v149;
          if (v146[267] != 0) {
            if (v149 == nullptr) {
              v44 = v11;
            }
            goto LABEL_101;
          }
        }
      }
      else {
        v4 = v146;
      }
      v5 = v148;
    LABEL_10:
      if (++v5 != v147) {
        continue;
      }
      break;
    }
    v2 = GameData_21c9b20;
  LABEL_119:
    v53 = *(_QWORD*)(v2 + 64);
    v54 = *((unsigned __int16*)v4 + 8) + 1LL;
    if ((int)v54 >= (int)((unsigned __int64)(*(_QWORD*)(v2 + 72) - v53) >> 3)) {
      break;
    }
    v4 = *(_BYTE**)(v53 + 8 * v54);
  } while (v4 != nullptr);
  v55 = a1;
  if (v143 != v145) {
    v56 = GameData_212c868;
    for (i = v143; i != v145; i += 32) {
      v58 = *(_DWORD*)(i + 28);
      if (v58 > 2) {
        if (v58 != 3) {
          if (v58 != 4) {
            continue;
          }
          v64 = game_HashString(*(_QWORD*)(i + 8));
          if (v64 != 0) {
            v65 = *(_QWORD*)(GameData_21c9b28 + 96);
            if (v65 != 0 && *(_QWORD*)(GameData_21c9b28 + 112) != 0) {
              v67 = v65 - 1;
              if ((v65 & (v65 - 1)) != 0) {
                v68 = v64;
                if (v64 >= v65) {
                  v68 = v64 % v65;
                }
              }
              else {
                v68 = v67 & v64;
              }
              v114 = *(_QWORD**)(*(_QWORD*)(GameData_21c9b28 + 88) + 8 * v68);
              if (v114 != nullptr) {
                v115 = (_QWORD*)*v114;
                if (v115 != nullptr) {
                  if ((v65 & v67) == 0) {
                    while (1) {
                      v117 = v115[1];
                      if (v117 == v64) {
                        if (v115[2] == v64) {
                          goto LABEL_259;
                        }
                      }
                      else if ((v117 & v67) != v68) {
                        goto LABEL_123;
                      }
                      v115 = (_QWORD*)*v115;
                      if (v115 == nullptr) {
                        goto LABEL_123;
                      }
                    }
                  }
                  do {
                    v116 = v115[1];
                    if (v116 == v64) {
                      if (v115[2] == v64) {
                      LABEL_259:
                        v151 = v115[3];
                        if (v151 != 0) {
                          GameRoutine_191f9e0(a1, &v151, &v151, (__int64*)i);
                        }
                        break;
                      }
                    }
                    else {
                      if (v116 >= v65) {
                        v116 %= v65;
                      }
                      if (v116 != v68) {
                        break;
                      }
                    }
                    v115 = (_QWORD*)*v115;
                  } while (v115 != nullptr);
                }
              }
            }
          }
        LABEL_123:
          v55 = a1;
          continue;
        }
        v75 = *(_QWORD**)(v55 + 128);
        v76 = *(_QWORD*)(v55 + 136);
        if ((unsigned __int64)v75 >= v76) {
          v78 = *(_QWORD*)(v55 + 120);
          v79 = (unsigned __int64)v75 - v78;
          v80 = ((__int64)v75 - v78) >> 4;
          v81 = v80 + 1;
          if ((unsigned __int64)(v80 + 1) >> 60 != 0) {
            goto LABEL_275;
          }
          v82 = v76 - v78;
          if (v82 >> 3 > v81) {
            v81 = v82 >> 3;
          }
          if ((unsigned __int64)v82 >= 0x7FFFFFFFFFFFFFF0LL) {
            v83 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v83 = v81;
          }
          if (v83 != 0) {
            if (v83 >> 60 != 0) {
              goto LABEL_274;
            }
            v84 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v83, 16, 0);
          }
          else {
            v84 = 0;
          }
          v85 = (_QWORD*)(v84 + v79);
          v86 = v84 + 16 * v83;
          v87 = v84 + v79 - 16 * v80;
          v77 = v84 + v79 + 16;
          *v85 = *(_QWORD*)(i + 8);
          v85[1] = *(_QWORD*)i;
          memcpy(v87, v78, v79);
          v55 = a1;
          *(_QWORD*)(a1 + 120) = v87;
          *(_QWORD*)(a1 + 128) = v77;
          *(_QWORD*)(a1 + 136) = v86;
          if (v78 != 0) {
            v88 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v88 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v88, v78);
            v55 = a1;
          }
        }
        else {
          v77 = (__int64)(v75 + 2);
          *v75 = *(_QWORD*)(i + 8);
          v75[1] = *(_QWORD*)i;
        }
        *(_QWORD*)(v55 + 128) = v77;
      }
      else {
        if (v58 != 1) {
          if (v58 != 2) {
            continue;
          }
          v59 = game_HashString(*(_QWORD*)(i + 8));
          if (v59 != 0) {
            v60 = *(_QWORD*)(*v56 + 96);
            if (v60 != 0 && *(_QWORD*)(*v56 + 112) != 0) {
              v62 = v60 - 1;
              if ((v60 & (v60 - 1)) != 0) {
                v63 = v59;
                if (v59 >= v60) {
                  v63 = v59 % v60;
                }
              }
              else {
                v63 = v62 & v59;
              }
              v110 = *(_QWORD**)(*(_QWORD*)(*v56 + 88) + 8 * v63);
              if (v110 != nullptr) {
                v111 = (_QWORD*)*v110;
                if (v111 != nullptr) {
                  if ((v60 & v62) == 0) {
                    while (1) {
                      v113 = v111[1];
                      if (v113 == v59) {
                        if (v111[2] == v59) {
                          goto LABEL_255;
                        }
                      }
                      else if ((v113 & v62) != v63) {
                        goto LABEL_123;
                      }
                      v111 = (_QWORD*)*v111;
                      if (v111 == nullptr) {
                        goto LABEL_123;
                      }
                    }
                  }
                  while (1) {
                    v112 = v111[1];
                    if (v112 == v59) {
                      if (v111[2] == v59) {
                      LABEL_255:
                        v151 = v111[3];
                        if (v151 != 0) {
                          v135 = 40;
                          if (*(_BYTE*)(i + 24) == 2) {
                            v135 = 80;
                          }
                          GameRoutine_191ff40(a1 + v135, &v151, &v151,
                                              (__int64*)i);
                        }
                        goto LABEL_123;
                      }
                    }
                    else {
                      if (v112 >= v60) {
                        v112 %= v60;
                      }
                      if (v112 != v63) {
                        goto LABEL_123;
                      }
                    }
                    v111 = (_QWORD*)*v111;
                    if (v111 == nullptr) {
                      goto LABEL_123;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_123;
        }
        v69 = *(const char**)(i + 16);
        v70 = strlen(v69);
        if (v70 < 6) {
          goto LABEL_176;
        }
        v71 = &v69[v70];
        v72 = (__int64)v69;
        while (1) {
          v73 = memchr(v72, 233, v70 - 5);
          if (v73 == 0) {
            goto LABEL_176;
          }
          if (*(_DWORD*)v73 == -391468055 &&
              *(unsigned __int16*)(v73 + 4) == 45705) {
            break;
          }
          v72 = v73 + 1;
          v70 = (signed __int64)&v71[-v73 - 1];
          if (v70 < 6) {
            goto LABEL_176;
          }
        }
        if ((const char*)v73 == v71 || v73 - (_QWORD)v69 == -1) {
        LABEL_176:
          v91 = *(unsigned __int8*)(i + 24);
          if (v91 == 1) {
            v55 = a1;
            v95 = *(const char***)(a1 + 152);
            v94 = *(_QWORD*)(a1 + 160);
            if ((unsigned __int64)v95 >= v94) {
              v103 = *(_QWORD*)(a1 + 144);
              v104 = (unsigned __int64)v95 - v103;
              v105 = ((__int64)v95 - v103) >> 4;
              v106 = v105 + 1;
              if ((unsigned __int64)(v105 + 1) >> 60 != 0) {
                goto LABEL_275;
              }
              v107 = v94 - v103;
              if (v107 >> 3 > v106) {
                v106 = v107 >> 3;
              }
              if ((unsigned __int64)v107 >= 0x7FFFFFFFFFFFFFF0LL) {
                v108 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v108 = v106;
              }
              if (v108 != 0) {
                if (v108 >> 60 != 0) {
                  goto LABEL_274;
                }
                v109 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v108, 16, 0);
                v69 = *(const char**)(i + 16);
              }
              else {
                v109 = 0;
              }
              v123 = (const char**)(v109 + v104);
              v124 = v109 + 16 * v108;
              *v123 = v69;
              v125 = v109 + v104 - 16 * v105;
              v126 = v109 + v104 + 16;
              v123[1] = *(const char**)i;
              memcpy(v125, v103, v104);
              v55 = a1;
              *(_QWORD*)(a1 + 144) = v125;
              *(_QWORD*)(a1 + 152) = v126;
              *(_QWORD*)(a1 + 160) = v124;
              if (v103 != 0) {
                v127 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v127 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v127, v103);
                v55 = a1;
              }
              v56 = &GameData_21c99c0;
              *(_QWORD*)(v55 + 152) = v126;
            }
            else {
              *v95 = v69;
              v95[1] = *(const char**)i;
              *(_QWORD*)(a1 + 152) = v95 + 2;
            }
          }
          else {
            v55 = a1;
            if (v91 == 2) {
              v93 = *(const char***)(a1 + 176);
              v92 = *(_QWORD*)(a1 + 184);
              if ((unsigned __int64)v93 >= v92) {
                v96 = *(_QWORD*)(a1 + 168);
                v97 = (unsigned __int64)v93 - v96;
                v98 = ((__int64)v93 - v96) >> 4;
                v99 = v98 + 1;
                if ((unsigned __int64)(v98 + 1) >> 60 != 0) {
                  goto LABEL_275;
                }
                v100 = v92 - v96;
                if (v100 >> 3 > v99) {
                  v99 = v100 >> 3;
                }
                if ((unsigned __int64)v100 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v101 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v101 = v99;
                }
                if (v101 != 0) {
                  if (v101 >> 60 != 0) {
                    goto LABEL_274;
                  }
                  v102 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v101, 16, 0);
                  v69 = *(const char**)(i + 16);
                }
                else {
                  v102 = 0;
                }
                v118 = (const char**)(v102 + v97);
                v119 = v102 + 16 * v101;
                *v118 = v69;
                v120 = v102 + v97 - 16 * v98;
                v121 = v102 + v97 + 16;
                v118[1] = *(const char**)i;
                memcpy(v120, v96, v97);
                v55 = a1;
                *(_QWORD*)(a1 + 168) = v120;
                *(_QWORD*)(a1 + 176) = v121;
                *(_QWORD*)(a1 + 184) = v119;
                if (v96 != 0) {
                  v122 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v122 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v122, v96);
                  v55 = a1;
                }
                v56 = &GameData_21c99c0;
                *(_QWORD*)(v55 + 176) = v121;
              }
              else {
                *v93 = v69;
                v93[1] = *(const char**)i;
                *(_QWORD*)(a1 + 176) = v93 + 2;
              }
            }
          }
        }
        else {
          v55 = a1;
          v90 = *(const char***)(a1 + 200);
          v89 = *(_QWORD*)(a1 + 208);
          if ((unsigned __int64)v90 >= v89) {
            v128 = *(_QWORD*)(a1 + 192);
            v129 = (unsigned __int64)v90 - v128;
            v130 = ((__int64)v90 - v128) >> 4;
            v131 = v130 + 1;
            if ((unsigned __int64)(v130 + 1) >> 60 != 0) {
            LABEL_275:
              GameRoutine_191f6e0();
            }
            v132 = v89 - v128;
            if (v132 >> 3 > v131) {
              v131 = v132 >> 3;
            }
            if ((unsigned __int64)v132 >= 0x7FFFFFFFFFFFFFF0LL) {
              v133 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v133 = v131;
            }
            if (v133 != 0) {
              if (v133 >> 60 != 0) {
                goto LABEL_274;
              }
              v134 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v133, 16, 0);
              v69 = *(const char**)(i + 16);
            }
            else {
              v134 = 0;
            }
            v136 = (const char**)(v134 + v129);
            v137 = v134 + 16 * v133;
            *v136 = v69;
            v138 = v134 + v129 - 16 * v130;
            v139 = v134 + v129 + 16;
            v136[1] = *(const char**)i;
            memcpy(v138, v128, v129);
            v55 = a1;
            *(_QWORD*)(a1 + 192) = v138;
            *(_QWORD*)(a1 + 200) = v139;
            *(_QWORD*)(a1 + 208) = v137;
            if (v128 != 0) {
              v140 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v140 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v140, v128);
              v55 = a1;
            }
            v56 = &GameData_21c99c0;
            *(_QWORD*)(v55 + 200) = v139;
          }
          else {
            *v90 = v69;
            v90[1] = *(const char**)i;
            *(_QWORD*)(a1 + 200) = v90 + 2;
          }
        }
      }
    }
  }
  *(_BYTE*)(v55 + 216) = 1;
  if (v143 != 0) {
    v141 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v141 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v141,
                                  v143);
  }
}

_QWORD* game_191f160(_QWORD* result, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *result = 0;
  result[1] = 0;
  v2 = GameData_21c9738;
  if (GameData_21c9738 != 0) {
    v3 = GameData_21c9730;
    v5 = result;
    v6 = GameData_21c9738;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(GameData_21c9738 + 16),
                              1u, memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v2),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v7 != 0) {
      if (v3 != 0) {
        v8 = (const char*)*(&GameData_1fb1520 + a2[36]);
        v9 = GameRoutine_191ea50(v3, (const char*)*(&GameData_1fb14c0 + a2[35]),
                                 a2[32]),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v11 = v10;
        result = GameRoutine_191ece0(v3, v8),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v5 = 0;
        v5[1] = 0;
        if (v9 != 0 && v11 != 0 && result != nullptr && v12 != 0) {
          *(_DWORD*)v5 = *(_DWORD*)(v11 + 280);
          *((_DWORD*)v5 + 1) = *(_DWORD*)(v11 + 300);
          *((_DWORD*)v5 + 2) = *(_DWORD*)(v12 + 284);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        return (_QWORD*)std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  return result;
}

void game_191f280(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  _DWORD* v23;
  __int64 v25;
  _QWORD* v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  struct {
    _QWORD v41[2];
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
  } v41_;
  __int64 v52;

  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  v2 = GameData_21c9738;
  if (GameData_21c9738 != 0) {
    v3 = (_QWORD*)GameData_21c9730;
    v6 = GameData_21c9738;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(GameData_21c9738 + 16),
                              1u, memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6);
    std___1___shared_weak_count___release_weak(v2);
    if (v7 != 0) {
      if (v3 != nullptr) {
        v8 = GameHr_7e74e0(a2);
        v41_.v41[0] = 0;
        v41_.v41[1] = 0;
        v41_.v42 = 0;
        v41_.v43 = 0;
        v41_.v44 = 0;
        v41_.v45 = 0;
        v41_.v46 = 0;
        v41_.v47 = 0;
        v41_.v48 = 0;
        v41_.v49 = 0;
        v41_.v50 = 0;
        v41_.v51 = 0;
        if (v8 != 0) {
          v9 = *(const char**)(v8 + 40);
          if (v9 != nullptr && *v9 != 0) {
            SpineSlotChecker_19220e0((char*)v41_.v41, v9, *(_BYTE*)(v8 + 48));
          }
        }
        if ((GameRoutine_111c720((unsigned __int8*)v41_.v41) & 1) != 0) {
          game_191f160((_QWORD*)a1, (unsigned __int8*)(a2 + 2104));
          goto LABEL_80;
        }
        v10 = *(_QWORD*)(a2 + 392);
        if (v10 != 0) {
          v11 = *(unsigned __int8*)(v10 + 441);
          if (v11 == 3) {
            if (*(unsigned __int8*)(a2 + 2136) <= 1u) {
              v11 = 1;
            }
            else {
              v11 = *(unsigned __int8*)(a2 + 2136);
            }
          }
        }
        else {
          v11 = 0;
        }
        v12 = Unit_6c8300((_QWORD*)a2, 0);
        v13 = game_Unit_GetJob(a2);
        if (v12 != 0) {
          v14 = v3[1];
          if (v14 != 0 && v3[3] != 0) {
            v52 = v12;
            v16 = std___1___hash_memory((__int64)&v52, 8u);
            v17 = v14 - 1;
            if ((v14 & (v14 - 1)) != 0) {
              v18 = v16;
              if (v16 >= v14) {
                v18 = v16 % v14;
              }
            }
            else {
              v18 = v16 & v17;
            }
            v19 = *(_QWORD**)(*v3 + 8 * v18);
            if (v19 != nullptr) {
              v20 = (_QWORD*)*v19;
              if (v20 != nullptr) {
                if ((v14 & v17) == 0) {
                  while (1) {
                    v22 = v20[1];
                    if (v16 == v22) {
                      if (v20[2] == v12) {
                        goto LABEL_41;
                      }
                    }
                    else if ((v22 & v17) != v18) {
                      goto LABEL_46;
                    }
                    v20 = (_QWORD*)*v20;
                    if (v20 == nullptr) {
                      goto LABEL_46;
                    }
                  }
                }
                do {
                  v21 = v20[1];
                  if (v16 == v21) {
                    if (v20[2] == v12) {
                    LABEL_41:
                      v23 = (_DWORD*)v20[3];
                      if (v20[2] != 0 && v23 != nullptr) {
                      LABEL_79:
                        *(_QWORD*)a1 = 0;
                        *(_QWORD*)(a1 + 8) = 0;
                        *(_DWORD*)a1 = v23[66];
                        *(_DWORD*)(a1 + 4) = v23[67];
                        *(_DWORD*)(a1 + 8) = v23[68];
                        goto LABEL_80;
                      }
                      break;
                    }
                  }
                  else {
                    if (v21 >= v14) {
                      v21 %= v14;
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
      LABEL_46:
        if (v13 != 0) {
          if (v11 == 1) {
            v25 = 5;
          }
          else {
            if (v11 != 2) {
              goto LABEL_80;
            }
            v25 = 10;
          }
          v26 = &v3[v25];
          v27 = v26[1];
          if (v27 != 0 && v26[3] != 0) {
            v52 = v13;
            v29 = std___1___hash_memory((__int64)&v52, 8u);
            v30 = v27 - 1;
            if ((v27 & (v27 - 1)) != 0) {
              v31 = v29;
              if (v29 >= v27) {
                v31 = v29 % v27;
              }
            }
            else {
              v31 = v29 & v30;
            }
            v32 = *(_QWORD**)(*v26 + 8 * v31);
            if (v32 != nullptr) {
              v33 = (_QWORD*)*v32;
              if (v33 != nullptr) {
                if ((v27 & v30) == 0) {
                  while (1) {
                    v35 = v33[1];
                    if (v29 == v35) {
                      if (v33[2] == v13) {
                        goto LABEL_75;
                      }
                    }
                    else if ((v35 & v30) != v31) {
                      goto LABEL_80;
                    }
                    v33 = (_QWORD*)*v33;
                    if (v33 == nullptr) {
                      goto LABEL_80;
                    }
                  }
                }
                do {
                  v34 = v33[1];
                  if (v29 == v34) {
                    if (v33[2] == v13) {
                    LABEL_75:
                      v23 = (_DWORD*)v33[3];
                      if (v33[2] != 0 && v23 != nullptr) {
                        goto LABEL_79;
                      }
                      break;
                    }
                  }
                  else {
                    if (v34 >= v27) {
                      v34 %= v27;
                    }
                    if (v34 != v31) {
                      break;
                    }
                  }
                  v33 = (_QWORD*)*v33;
                } while (v33 != nullptr);
              }
            }
          }
        }
      LABEL_80:
        if ((v41_.v49 & 1) != 0 && v41_.v51 != 0) {
          v37 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v37 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v41_.v51);
        }
        if ((v41_.v46 & 1) != 0 && v41_.v48 != 0) {
          v38 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v41_.v48);
        }
        if ((v41_.v43 & 1) != 0 && v41_.v45 != 0) {
          v39 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v41_.v45);
        }
        if ((v41_.v41[0] & 1) != 0 && v41_.v42 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v41_.v42);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
}

_QWORD* game_19209f0(_QWORD* result, int* a2, _QWORD* a3)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  int* v9;
  _QWORD* v10;
  int* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  int* v21;
  _QWORD* v22;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  if (result[4] == 0 && *a2 >= 1 && a2[1] >= 1) {
    v6 = *a3;
    if (*a3 != 0) {
      if (result[7] == 0) {
        v18 = a3[1];
        if (v18 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                    memory_order_relaxed);
        }
        v19 = result[8];
        result[7] = v6;
        result[8] = v18;
        if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v20 = result;
          v21 = a2;
          v22 = a3;
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
          a3 = v22;
          result = v20;
          a2 = v21;
        }
      }
      if (*(_DWORD*)(result[7] + 8LL) != *(_DWORD*)(*a3 + 8LL)) {
        v7 = result[6];
        result[5] = 0;
        result[6] = 0;
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          v8 = result;
          v9 = a2;
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
          result = v8;
          a2 = v9;
        }
      }
      v10 = (_QWORD*)result[5];
      if (v10 != nullptr) {
        return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                      PSEUDO_X8, _QWORD*, int*))(*v10 + 24LL))(
                                      (void*)v10, v10, a2));
      }
      v11 = a2;
      v12 = result;
      result = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
              *(_QWORD*)result[7] + 16LL))((void*)&v23_.v23, result[7]));
      v13 = v23_.v23;
      v14 = v23_.v24;
      v15 = v12[6];
      v16 = v12;
      v23_.v23 = 0;
      v23_.v24 = 0;
      v12[5] = v13;
      v12[6] = v14;
      if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v15);
        v16 = v12;
      }
      v17 = v23_.v24;
      if (v23_.v24 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v17);
        v16 = v12;
      }
      v10 = (_QWORD*)v16[5];
      a2 = v11;
      if (v10 != nullptr) {
        return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                      PSEUDO_X8, _QWORD*, int*))(*v10 + 24LL))(
                                      (void*)v10, v10, a2));
      }
    }
  }
  return result;
}

void game_1922c00(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int8* v5;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int8* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int8* v21;
  unsigned __int64 v22;
  unsigned __int8* v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  struct {
    __int64 v43;
    unsigned __int64 v44;
    char* v45;
  } v43_;

  v2 = *a2;
  v3 = *((_QWORD*)a2 + 1);
  v5 = a2 + 1;
  v7 = (v2 & 1) == 0;
  v8 = v2 >> 1;
  if (v7) {
    v9 = a2 + 1;
  }
  else {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  if (!v7) {
    v8 = v3;
  }
  if (v8 == 0) {
    v15 = 0;
    LOBYTE(v43_.v43) = 0;
    goto LABEL_16;
  }
  v10 = &v9[v8];
  v11 = -1;
  v12 = 0;
  do {
    if (v8 + v12 == 0) {
      goto LABEL_11;
    }
    v13 = &v10[v12--];
    ++v11;
  } while (*(v13 - 1) != 95);
  v14 = v8 + v12;
  if (v8 + v12 == -1) {
  LABEL_11:
    if (v8 >= 3) {
      v15 = 3;
    }
    else {
      v15 = v8;
    }
    LOBYTE(v43_.v43) = 2 * v15;
    memcpy((__int64)&v43_.v43 + 1, (__int64)v9, v15);
  LABEL_16:
    *((_BYTE*)&v43_.v43 + v15 + 1) = 0;
    if ((*(_BYTE*)a1 & 1) != 0) {
      v16 = *(_QWORD*)(a1 + 16);
      if (v16 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
      }
    }
    v18 = v43_.v44;
    *(_QWORD*)a1 = v43_.v43;
    *(_QWORD*)(a1 + 8) = v18;
    *(_QWORD*)(a1 + 16) = v43_.v45;
    v19 = *a2;
    v20 = *((_QWORD*)a2 + 1);
    if ((v19 & 1) == 0) {
      v20 = v19 >> 1;
    }
    if (v20 > 2) {
      v21 = *((unsigned __int8**)a2 + 2);
      v22 = v20 - 3;
      if ((v19 & 1) != 0) {
        v23 = v21;
      }
      else {
        v23 = v5;
      }
      if (v22 < 0xFFFFFFFFFFFFFFF7LL) {
        if (v22 >= 0x17) {
          if ((v22 | 7) == 0x17) {
            v25 = 26;
          }
          else {
            v25 = (v22 | 7) + 1;
          }
          v24 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v25, 16, 0);
          v43_.v44 = v22;
          v43_.v45 = v24;
          v43_.v43 = v25 | 1;
        }
        else {
          LOBYTE(v43_.v43) = 2 * v22;
          v24 = (char*)&v43_.v43 + 1;
          if (v20 == 3) {
          LABEL_36:
            v24[v22] = 0;
            if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
              v26 = *(_QWORD*)(a1 + 40);
              if (v26 != 0) {
                v27 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v27 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v26);
              }
            }
            v28 = v43_.v44;
            *(_QWORD*)(a1 + 24) = v43_.v43;
            *(_QWORD*)(a1 + 32) = v28;
            *(_QWORD*)(a1 + 40) = v43_.v45;
            return;
          }
        }
        memmove((__int64)v24, (__int64)(v23 + 3), v22);
        goto LABEL_36;
      }
    LABEL_78:
      String_60a1d0();
    }
  LABEL_79:
    fs_60a230();
  }
  if (v14 >= v8) {
    goto LABEL_79;
  }
  if (v12 <= 8) {
    goto LABEL_78;
  }
  v29 = ~v12;
  if (~v12 >= 0x17) {
    if ((v29 | 7) == 0x17) {
      v31 = 26;
    }
    else {
      v31 = (v29 | 7) + 1;
    }
    v30 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v31,
                                                16, 0);
    v43_.v44 = ~v12;
    v43_.v45 = v30;
    v43_.v43 = v31 | 1;
  }
  else {
    LOBYTE(v43_.v43) = 2 * v29;
    v30 = (char*)&v43_.v43 + 1;
    if (v12 == -1) {
      goto LABEL_53;
    }
  }
  memmove((__int64)v30, (__int64)&v10[v12 + 1], ~v12);
LABEL_53:
  v30[v11] = 0;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v32 = *(_QWORD*)(a1 + 64);
    if (v32 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v32);
    }
  }
  v34 = v43_.v44;
  *(_QWORD*)(a1 + 48) = v43_.v43;
  *(_QWORD*)(a1 + 56) = v34;
  *(_QWORD*)(a1 + 64) = v43_.v45;
  v35 = *a2;
  v36 = v35 >> 1;
  v7 = (v35 & 1) == 0;
  v37 = *((_QWORD*)a2 + 1);
  if (v7) {
    v37 = v36;
    v38 = (__int64)v5;
  }
  else {
    v38 = *((_QWORD*)a2 + 2);
  }
  if (v37 >= v14) {
    v39 = v14;
  }
  else {
    v39 = v37;
  }
  if (v39 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_78;
  }
  if (v39 >= 0x17) {
    if ((v39 | 7) == 0x17) {
      v41 = 26;
    }
    else {
      v41 = (v39 | 7) + 1;
    }
    v40 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v41,
                                                16, 0);
    v43_.v44 = v39;
    v43_.v45 = v40;
    v43_.v43 = v41 | 1;
  }
  else {
    LOBYTE(v43_.v43) = 2 * v39;
    v40 = (char*)&v43_.v43 + 1;
    if (v39 == 0) {
      goto LABEL_73;
    }
  }
  memmove((__int64)v40, v38, v39);
LABEL_73:
  v40[v39] = 0;
  game_1922c00(a1, (unsigned __int8*)&v43_.v43);
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v42,
                                  (__int64)v43_.v45);
  }
}

#pragma GCC visibility pop
