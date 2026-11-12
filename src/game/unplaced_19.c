#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_12f61a0(_QWORD*, __int64*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* LayoutAccessor_155c910(_QWORD*, __int64*);
_QWORD* LayoutAccessor_1560520(__int64*, const char*, const char*, const char*);
_QWORD* game_191f160(_QWORD* result, unsigned __int8*);
_QWORD* game_UnitPool_Find_6ead60(__int64*, int*);
_QWORD* ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
_QWORD* ui_LayoutAccessor_Setup_155dea0(_QWORD*, _QWORD*, __int64);
_WORD* game_UnitItemList_EachItem(_WORD* result, __int64);
__attribute__((swiftcall)) void GameHr_1366ac0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void GameRoutine_159e180(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_16e4a60(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_17d34b0(PSEUDO_X8, _DWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void LayoutAccessor_1839200(PSEUDO_X8, __int64*,
                                                       const char**);
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
__attribute__((swiftcall)) void game_196dfe0(PSEUDO_X8, __int64, int);
__int64* GameHr_17d3f20(__int64*, __int64, __int64, __int64**);
__int64* GameRoutine_17d3e70(__int64* result, __int64*);
__int64* GameRoutine_6380e0(__int64, __int64**);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* Situation_7641b0(__int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_820d50(int);
__int64* game_8224a0(unsigned __int8);
__int64* game_UnitPool_Get(_BYTE*);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 Element_18863e0(__int64, const char**, char);
__int64 GameHr_136ac50(__int64, __int64, __int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_1916dd0(__int64, int, const char*, float, __int64, char);
__int64 GameHr_7e74e0(__int64);
__int64 GameHr_fa5670();
__int64 GameRoutine_1033670(__int64, int);
__int64 GameRoutine_11ddb00(__int64);
__int64 GameRoutine_11de4f0(unsigned int, unsigned __int8*);
__int64 GameRoutine_12274e0(__int64 result, unsigned __int64*);
__int64 GameRoutine_155da20(__int64 result, float);
__int64 GameRoutine_155f760(__int64, __int64, const char*);
__int64 GameRoutine_15de630(char, __int64, unsigned int);
__int64 GameRoutine_15fc1d0(__int64 result, __int64);
__int64 GameRoutine_15fc630(__int64);
__int64 GameRoutine_15fedb0(__int64);
__int64 GameRoutine_15ff090(__int64);
__int64 GameRoutine_15ff160(__int64 result);
__int64 GameRoutine_1841000(__int64, int);
__int64 GameRoutine_19ef490(__int64 result);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_5766a0(__int64, const char*);
__int64 GameRoutine_5df100(__int64, unsigned int);
__int64 GameRoutine_5df110(_QWORD, long double);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_64be60();
__int64 GameRoutine_6c3980(__int64 result, __int64);
__int64 GameRoutine_fa54a0();
__int64 GameRoutine_fa5660();
__int64 GameRoutine_fa5840();
__int64 LayoutAccessor_155cda0(__int64 result, const char*, const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 LayoutEx_579160(__int64, __int64);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136ad70(__int64, __int64, int, unsigned int, _BYTE*);
__int64 MapOnMapInfo_15fee80(__int64, __int64);
__int64 MapUtil_756c20(__int64, __int64);
__int64 Pane_58f8a0(__int64);
__int64 ProcCmdBtlSeqBattleGrow_fa5db0();
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 SpineSlotChecker_19220e0(__int64 result, const char*, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_111c720(unsigned __int8*);
__int64 game_14a0820(_QWORD*);
__int64 game_14a3920(__int64 result);
__int64 game_15fc3b0(__int64, __int64, __int64);
__int64 game_6e8720(__int64 result, __int64);
__int64 game_996d60(__int64, int, int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_UnitItemList_Find_70f780(unsigned __int16*, __int64);
__int64 game_Unit_GetJob(__int64);
__int64 game_Unit_IsHeld(__int64);
__int64 game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_UpdateLearn();
__int64 game_gameui_SetHpStock(__int64 result, __int64);
__int64 game_map_BattleUtil_EachFactorSkill_7a8c20(__int64 result, __int64,
                                                   char, __int64, __int64);
__int64 game_map_BattleUtil_EachFactorSkill_7a8e00(__int64 result, __int64,
                                                   __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 spine_190b990(__int64 result, char);
__int64 spine_AnimationState_getCurrent(__int64, unsigned __int64);
__int64 spine_AnimationState_setTimeScale(float);
__int64 spine_TrackEntry_setTimeScale(float);
__int64 spine_TrackEntry_setTrackTime(_QWORD, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPartsLayout(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
__int64 ui_LayoutAccessor_SetScale(__int64 result, _QWORD*);
__int64 ui_control_1889230(__int64, __int64, __int64);
__n64 GameRoutine_a6c440(float32x4_t*, __int128*, float32x4_t*);
bool GameRoutine_11ddc40(const char*);
bool MapUtil_7536a0(_BOOL8 result);
bool UnitItem_6e8bc0(unsigned __int16*, __int64);
bool game_6ed370(__int64);
bool game_HasActiveSkill_843420(_DWORD*, _QWORD*);
bool game_gameui_UnitUtil_CheckDangerCritical(__int64, __int64);
bool nn_vfx_5d39a0(__int64, _QWORD*, int*, float32x4_t*, int, int, float);
char* GameHr_158f870(char* result, __int64, char, unsigned int);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
const char* GameRoutine_156d490(__int64*);
extern _DWORD* game_g_shared_system_skills_ptr;
extern _DWORD GameData_1c05754[3];
extern _DWORD GameData_1c05760[3];
extern _DWORD GameData_1c05784[3];
extern _QWORD game_g_shared_system_skills_ptr_alt1 __asm__(
    "game_g_shared_system_skills_ptr");
extern _UNKNOWN* GameData_212c840;
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN GameData_1a8b170;
extern _UNKNOWN GameData_1aad41d;
extern _UNKNOWN GameData_20e3128;
extern _UNKNOWN GameData_21c6868;
extern _UNKNOWN GameData_21ed530;
extern _UNKNOWN GameData_2229d70;
extern _UNKNOWN GameData_2259520;
extern __int64 (*GameData_1f91de8[])();
extern __int64 (*GameData_1f98e48[])();
extern __int64 (*GameData_1fa0f58[])();
extern __int64 (*GameData_2065bf0[])();
extern __int64 (*GameData_2065c70[])();
extern __int64 (*GameData_2065d70[])();
extern __int64 (*GameData_2065e70[])();
extern __int64 (*GameData_2065f70[])();
extern __int64 (*GameData_2065ff0[])();
extern __int64 (*GameData_20c9c00[])();
extern __int64 (*GameData_20c9c40[])();
extern __int64 (*GameData_20c9df8[])();
extern __int64 (*GameData_21108e8[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_vtable[])();
extern __int64 (*game_gameui_anonymous_ProcFastForward_vtable[])();
extern __int64 (*game_gameui_anonymous_ProcSkipHold_vtable[])();
extern __int64 (*game_gameui_control_KeyArrow_vtable[])();
extern __int64 (*game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr[])();
extern __int64* GameData_212c750;
extern __int64* GameData_212c838;
extern __int64* GameData_212c868;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212d448[9];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* GameData_212ea58;
extern __int64* GameData_212fff0[3];
extern __int64* game_g_empty_item_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c998[148];
extern __int64 GameData_212cd90[21];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d270;
extern __int64 GameData_212d690;
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
extern __int64 GameData_21c99c8;
extern __int64 GameData_21f49b8;
extern __int64 GameData_2229a78;
extern __int64 GameData_2229a80;
extern __int64 GameData_2229a88;
extern __int64 GameData_2229a98;
extern __int64 GameData_2229aa8;
extern __int64 GameData_2229ab8;
extern __int64 GameData_2229ac0;
extern __int64 GameData_2229ac8;
extern __int64 GameData_2229ad8;
extern __int64 GameData_2229ae8;
extern __int64 GameData_2229af8;
extern __int64 GameData_2229b00;
extern __int64 GameData_2229b08;
extern __int64 GameData_2229b18;
extern __int64 GameData_2229b28;
extern __int64 GameData_2229b38;
extern __int64 GameData_2229b40;
extern __int64 GameData_2229b48;
extern __int64 GameData_2229b58;
extern __int64 GameData_2229b68;
extern __int64 GameData_2229b78;
extern __int64 GameData_2229b80;
extern __int64 GameData_2229b88;
extern __int64 GameData_2229b98;
extern __int64 GameData_2229ba8;
extern __int64 GameData_2229bb8;
extern __int64 GameData_2229bc0;
extern __int64 GameData_2229bc8;
extern __int64 GameData_2229bd8;
extern __int64 GameData_2229be8;
extern __int64 GameData_2229bf8;
extern __int64 GameData_2229c00;
extern __int64 GameData_2229c08;
extern __int64 GameData_2229c18;
extern __int64 GameData_2229c28;
extern __int64 GameData_2229c38;
extern __int64 GameData_2229c40;
extern __int64 GameData_2229c48;
extern __int64 GameData_2229c58;
extern __int64 GameData_2229c68;
extern __int64 GameData_2229c78;
extern __int64 GameData_2229c80;
extern __int64 GameData_2229c88;
extern __int64 GameData_2229c98;
extern __int64 GameData_2229ca8;
extern __int64 GameData_2229cb8;
extern __int64 GameData_2229cc0;
extern __int64 GameData_2229cc8;
extern __int64 GameData_2229cd8;
extern __int64 GameData_2229ce8;
extern __int64 GameData_2229cf8;
extern __int64 GameData_2229d00;
extern __int64 GameData_2229d08;
extern __int64 GameData_2229d18;
extern __int64 GameData_2229d28;
extern __int64 GameData_2229d38;
extern __int64 GameData_2229d40;
extern __int64 GameData_2229d48;
extern __int64 GameData_2229d58;
extern __int64 GameData_2229d68;
extern __int64 GameData_22400f8;
extern __int64 GameData_2259510;
extern __int64 GameData_2259518;
extern __int64 GameData_22632e0;
extern __int64 GameData_22736d0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64 ui_Manager_instance_;
extern char* GameData_20e31e8[3];
extern char* GameData_21088f8[3];
extern char* game_menu_kTabAnimations[21];
extern char GameData_1a8ab53[];
extern char GameData_1a9f09e;
extern char GameData_1aad7f1[];
extern char GameData_1ac8466[];
extern char GameData_1ae33f4[];
extern char GameData_1af282e[];
extern char GameData_1af2841[];
extern char GameData_1af66ca[];
extern char GameData_1afa6de[];
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern char GameData_2229a70;
extern char GameData_2229ab0;
extern char GameData_2229af0;
extern char GameData_2229b30;
extern char GameData_2229b70;
extern char GameData_2229bb0;
extern char GameData_2229bf0;
extern char GameData_2229c30;
extern char GameData_2229c70;
extern char GameData_2229cb0;
extern char GameData_2229cf0;
extern char GameData_2229d30;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_21ed528;
extern int GameData_2229a90;
extern int GameData_2229aa0;
extern int GameData_2229ad0;
extern int GameData_2229ae0;
extern int GameData_2229b10;
extern int GameData_2229b20;
extern int GameData_2229b50;
extern int GameData_2229b60;
extern int GameData_2229b90;
extern int GameData_2229ba0;
extern int GameData_2229bd0;
extern int GameData_2229be0;
extern int GameData_2229c10;
extern int GameData_2229c20;
extern int GameData_2229c50;
extern int GameData_2229c60;
extern int GameData_2229c90;
extern int GameData_2229ca0;
extern int GameData_2229cd0;
extern int GameData_2229ce0;
extern int GameData_2229d10;
extern int GameData_2229d20;
extern int GameData_2229d50;
extern int GameData_2229d60;
float GameRoutine_5dbb00(float, __int64, __int64, int*, _DWORD*, int, __int128*,
                         __int128*, __int128*);
float LayoutAccessor_15638b0(__int64*, char*, char);
float game_5c0500(float32x4_t*, float32x2_t*, float32x2_t*, float32x2_t*,
                  float32x2_t*, float);
float task_618640(int, float result, float, float, float);
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
float32x4_t game_5dd870(float32x4_t*, float32x4_t*, signed __int32);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 GameHr_17d4ba0(__int64, _DWORD*);
unsigned __int64 Manager_6326c0(__int64*, const char*);
unsigned __int64 nn_os_GetThreadAvailableCoreMask();
unsigned __int64 strlen(const char*);
void BattleInfoStatus_19ad660(__int64, __int64, int, char);
void CinematicZoom_10e0dc0(__int64, float);
void CinematicZoom_10e1030(int);
void GameRoutine_1005e20(__int64*, __int64, unsigned __int8);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void GameRoutine_15fba20(_QWORD*, __int64, __int64);
void GameRoutine_5c2180(float, float, __int64, float32x4_t*, __int64,
                        float32x4_t*, float*);
void GameRoutine_6b7aa0(__int64, __int64*, __int64*, unsigned __int64);
void GameRoutine_fa5440();
void KeyIcon_17aa380(__int64, const char*, unsigned int);
void MapOnMapInfo_15fbb90(_QWORD*, unsigned int);
void SpineCaptureProcessor_191e360(_DWORD*, unsigned __int64, char);
void UnitMastery_7fe910(__int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_1918110();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_fa64f0();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void __cxa_guard_release(__int64);
void game_17a9aa0(__int64, __int64);
void game_191d680(__int64, char);
void nn_detail_UnexpectedDefaultImpl();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
__int64 game_5dbbc0(__int64 result, float32x4_t* a2);
__int64 game_82dd50(__int64 result, unsigned __int64* a2, char a3);
void game_cb4360(__int64* a1);
__int64 game_d5fb40(__int64 a1, int* a2);
void game_fa4f80(__int64 a1, __int64 a2);
__int64 game_10d4680(__int64 a1);
__int64 game_11e0320(unsigned __int8* a1);
__int64 game_12f2800(__int64 result, __int64 a2, __int64 a3, __int64 a4);
__int64 game_15fc820(__int64 a1, float32x4_t* a2);
__int64 game_16dbb80(__int64* a1);
__int64 game_171beb0(__int64 a1, char a2);
__int64 game_173df20(__int64 result);
__attribute__((swiftcall)) void game_1796700(PSEUDO_X8 x8_, __int64 a1);
__int64 game_17d3320(__int64 result, char a2);
__attribute__((swiftcall)) void game_17d3510(PSEUDO_X8 x8_,
                                             unsigned __int64 a1);
__attribute__((swiftcall)) void game_17d3fa0(PSEUDO_X8 x8_,
                                             unsigned __int64 a1);
void game_183ba60(int** a1, int a2, int a3, char a4, unsigned __int8 a5,
                  unsigned __int8 a6, int a7, int a8, int a9, int a10, char a11,
                  char a12, char a13, int a14);
__int64 game_1841fc0(__int64 a1, int a2);
__int64 game_1842ee0(__int64 a1, unsigned __int8 a2);
__int64 game_1843710(__int64 a1, int a2);
void game_18c9b10(__int64* a1, __int64 a2, int a3);
void game_1917fb0(__int64* a1, unsigned __int64 a2);
__attribute__((swiftcall)) void game_191d520(PSEUDO_X8 x8_, char a1);
void game_191eec0(__int64 a1, __int64 a2);
__int64 game_196e120(__int64 a1, int a2);
__int64 game_19aa5a0(_QWORD* a1);
__int64 game_19b1170(__int64 a1);
__int64 game_19ef080(__int64 result);

__int64 game_5dbbc0(__int64 result, float32x4_t* a2)
{
  unsigned __int64 v2;
  _DWORD* v3;
  _DWORD* v4;
  float v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  long double v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  float v15;
  float v16;
  int v17;
  unsigned int v18;
  int v19;
  _BOOL4 v21;
  int v22;
  float v23;
  float v24;
  _BOOL4 v25;
  bool v27;
  __int64 v29;
  int v30;
  float v31;
  int v32;
  unsigned __int64 v33;
  float32x4_t v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned int* v41;
  unsigned __int64 v42;
  int v43;
  unsigned int* v44;
  unsigned int* v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned int* v56;
  unsigned __int64 v57;
  int v58;
  unsigned int* v59;
  unsigned int* v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  int v65;
  unsigned __int64 v66;
  __int64 v67;
  float32x4_t v68;
  unsigned __int64 v69;
  unsigned int* v70;
  unsigned int* v71;
  unsigned int* v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  float32x4_t v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  float v88;
  float v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  float32x4_t v92;
  bool v93;
  char v94;
  unsigned __int64 v95;
  unsigned int* v96;
  unsigned int* v97;
  unsigned int* v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  unsigned __int64 v103;
  unsigned int* v104;
  unsigned int* v105;
  unsigned int* v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  unsigned __int64 v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  unsigned __int64 v116;
  __int64 v117;
  float32x4_t v118;
  unsigned __int64 v119;
  float32x4_t v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  float v124;
  float v125;
  unsigned __int64 v126;
  float32x4_t v127;
  int v128;
  float32x4_t v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  unsigned int* v132;
  unsigned int* v133;
  unsigned int* v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  unsigned __int64 v138;
  float32x4_t v139;
  float32x4_t v140;
  float32x4_t v141;
  float v142;
  unsigned __int32 v143;
  float32x4_t v144;
  float v145;
  __int64 v146;
  int v147;
  int v148;
  float* v149;
  float v150;
  unsigned __int32 v151;
  float32x4_t v152;
  float32x4_t v153;
  __int64 v154;
  __int64 v155;
  float v156;
  int v157;
  unsigned __int64 v158;
  float32x4_t v159;
  __int64 v160;
  unsigned __int64 v162;
  unsigned __int64 v163;
  unsigned __int64 v164;
  unsigned int* v165;
  unsigned __int64 v166;
  int v167;
  unsigned int* v168;
  unsigned int* v169;
  float32x4_t v170;
  float32x4_t v171;
  float32x4_t v172;
  float32x4_t v173;
  unsigned __int64 v174;
  __int64 v175;
  float32x4_t v176;
  bool v177;
  float32x4_t v178;
  unsigned __int64 v179;
  unsigned int* v180;
  unsigned int* v181;
  unsigned int* v182;
  float32x4_t v183;
  float32x4_t v184;
  float32x4_t v185;
  float32x4_t v186;
  unsigned __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  float v192;
  float v193;
  float32x4_t v194;
  float32x4_t v195;
  __int64 v196;
  unsigned __int64 v197;
  unsigned __int64 v198;
  unsigned int* v199;
  unsigned int* v200;
  unsigned int* v201;
  float32x4_t v202;
  float32x4_t v203;
  float32x4_t v204;
  float32x4_t v205;
  int v206;
  unsigned __int64 v207;
  float32x4_t v208;
  unsigned __int64 v209;
  unsigned __int64 v210;
  unsigned __int64 v211;
  unsigned int* v212;
  unsigned __int64 v213;
  int v214;
  unsigned int* v215;
  unsigned int* v216;
  float32x4_t v217;
  float32x4_t v218;
  float32x4_t v219;
  float32x4_t v220;
  float32x4_t v221;
  __int64 v222;
  unsigned __int64 v223;
  unsigned __int64 v224;
  unsigned int* v225;
  unsigned int* v226;
  unsigned int* v227;
  float32x4_t v228;
  float32x4_t v229;
  float32x4_t v230;
  float32x4_t v231;
  unsigned __int64 v232;
  float32x4_t v233;
  float32x4_t v234;
  unsigned __int64 v235;
  unsigned int* v236;
  unsigned int* v237;
  unsigned int* v238;
  float32x4_t v239;
  float32x4_t v240;
  float32x4_t v241;
  float32x4_t v242;
  unsigned __int64 v243;
  __int64 v244;
  int v245;
  unsigned __int64 v246;
  float32x4_t v247;
  __int64 v248;
  unsigned __int64 v249;
  unsigned __int64 v250;
  unsigned __int64 v251;
  unsigned __int64 v252;
  unsigned int* v253;
  unsigned int* v254;
  unsigned int* v255;
  int v256;
  float32x4_t v257;
  float32x4_t v258;
  float32x4_t v259;
  float32x4_t v260;
  __int64 v261;
  float32x4_t v262;
  unsigned __int64 v263;
  float32x4_t v264;
  float32x4_t v265;
  float32x4_t v266;
  unsigned __int64 v267;
  float32x4_t v268;
  float32x4_t v269;
  float32x4_t v270;
  unsigned __int64 v271;
  unsigned int* v272;
  unsigned int* v273;
  unsigned int* v274;
  float32x4_t v275;
  float32x4_t v276;
  float32x4_t v277;
  float32x4_t v278;
  unsigned __int64 v279;
  float32x4_t v280;
  float32x4_t v281;
  float v282;
  int v283;
  float v284;
  __int64 v285;
  unsigned __int32 v286;
  unsigned __int32 v287;
  float v288;
  __int32 v289;
  unsigned int v290;
  __int64 v291;
  float v292;
  unsigned __int32 v293;
  float32x4_t v294;
  int v295;
  float v296;
  float32x4_t v297;
  __int64 v298;
  __int64 v299;
  unsigned __int64 v300;
  __int64 v301;
  __int64 v302;
  float v303;
  float v304;
  int v305;
  float32x4_t v306;
  unsigned __int64 v307;
  float32x4_t v308;
  unsigned __int64 v309;
  unsigned __int64 v310;
  unsigned __int64 v311;
  unsigned int* v312;
  unsigned __int64 v313;
  int v314;
  unsigned int* v315;
  unsigned int* v316;
  float32x4_t v317;
  float32x4_t v318;
  float32x4_t v319;
  float32x4_t v320;
  unsigned __int64 v321;
  float v322;
  float32x4_t v323;
  float32x4_t v324;
  __int64 v325;
  unsigned __int64 v326;
  unsigned int* v327;
  unsigned int* v328;
  unsigned int* v329;
  float32x4_t v330;
  float32x4_t v331;
  float32x4_t v332;
  float32x4_t v333;
  signed __int32 v334;
  __int64 v335;
  unsigned __int64 v336;
  __int64 v337;
  float v338;
  int v339;
  int v340;
  __int64 v341;
  int v342;
  __int64 v343;
  _DWORD* v344;
  float32x4_t v345;
  float32x4_t v346;
  unsigned __int64 v347;
  float32x4_t v348;
  float32x4_t v349;
  float32x4_t v350;
  float32x4_t v351;
  float32x4_t v352;
  float32x4_t v353;
  float32x4_t v354;
  float32x4_t v355;
  float32x4_t v356;
  float32x4_t v357;
  __int64 v358;
  float32x4_t v359;
  float32x4_t v360;
  int v361;
  int v362;

  v335 = COERCE_AS(__typeof__(v335),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = LANES128(a2[65]).n128_u64[1];
  v3 = *(_DWORD**)(LANES128(a2[35]).n128_u64[1] + 824);
  *(_DWORD*)(v2 + 36) = 0;
  v4 = (_DWORD*)(v2 + 36);
  v344 = v3;
  if (LANES128(a2[127]).n128_u64[1] != 0) {
    v5 = LANES128(a2[4]).n128_f32[1];
    v6 = *(_QWORD*)(result + 24);
    v362 = 0;
    v358 = 0;
    result = nn_vfx_5d39a0(v6, &v358, &v362, a2, 1, 0, v5),
    v335 = COERCE_AS(__typeof__(v335),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v362 != 0) {
      v8 = GameRoutine_5df100((__int64)&LANES128(a2[122]).n128_i64[1],
                              *(_DWORD*)(v2 + 40)),
      v335 = COERCE_AS(__typeof__(v335),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v9 = LANES128(a2[35]).n128_i64[1];
      LODWORD(v10) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
      v11 = v362;
      v12 = *(_QWORD*)(v9 + 16);
      v14 = v344[4];
      v13 = v344[5];
      v16 = LANES128(a2[7]).n128_f32[0];
      v15 = LANES128(a2[7]).n128_f32[1];
      v343 = v8;
      v361 = 0;
      v17 = *(unsigned __int8*)(v12 + 1884);
      v18 = v13 - 1;
      v19 = *(unsigned __int8*)(v12 + 1878);
      v21 = v13 == 1 && v362 < 2;
      if (v18 >= 2) {
        v22 = v362;
      }
      else {
        v22 = v362 + 1;
      }
      if (v17 == 0) {
        v15 = 0x1.0000000000000p+0f;
      }
      v23 = v15 * v16;
      if (v19 != 0) {
        v24 = v23;
      }
      else {
        v24 = v15;
      }
      v25 = v14 != 0;
      v27 = v14 == 0 && v22 > 1 && !v21;
      if (!v27 && (v14 < 1 || v362 < 3)) {
        return GameRoutine_5df110(&LANES128(a2[122]).n128_i8[8], v10);
      }
      v29 = (unsigned int)(v362 - 1);
      v356 = (__typeof__(v356)){0};
      v354 = (__typeof__(v354)){0};
      v353 = (__typeof__(v353)){0};
      v340 = v13;
      v30 = v22 + (v22 - 1) * v14;
      v342 = v14;
      v31 = 0x1.0000000000000p+0f / (float)(v14 + 1);
      if (v13 == 1) {
        v32 = LANES128(a2[2]).n128_i32[2];
        v33 = LANES128(a2[29]).n128_u64[0];
        v34 = (__typeof__(v34)){0};
        v35 = *(int*)((char*)((_UNKNOWN*)0x4LL) + v358);
        v36 = *(int*)(v358 + 8LL * (int)v29 + 4);
        if (v32 >= (int)v36 && v33 != 0) {
          v38 = v33 + 16 * v36;
          LANES128(v34).n128_u64[0] = *(_QWORD*)v38;
          LANES128(v34).n128_u64[1] = *(unsigned int*)(v38 + 8);
        }
        v39 = LANES128(a2[33]).n128_u64[0];
        v40 = LANES128(a2[33]).n128_u64[1];
        v41 = (unsigned int*)(v39 + 16 * v36);
        v42 = LANES128(a2[34]).n128_u64[0];
        v43 = *(unsigned __int8*)(LANES128(a2[10]).n128_u64[0] + 1875);
        v44 = (unsigned int*)(v40 + 16 * v36);
        v45 = (unsigned int*)(v42 + 16 * v36);
        if (v43 == 2) {
          LANES128(v46).n128_u64[0] = *v41 | ((unsigned __int64)*v44 << 32);
          LANES128(v46).n128_u64[1] = *v45;
          LANES128(v47).n128_u64[0] = v41[1] | ((unsigned __int64)v44[1] << 32);
          LANES128(v47).n128_u64[1] = v45[1];
          LANES128(v48).n128_u64[0] = v41[2] | ((unsigned __int64)v44[2] << 32);
          LANES128(v48).n128_u64[1] = v45[2];
          LANES128(v49).n128_u64[0] = LANES128(a2[55]).n128_u64[0];
          v66 = LANES128(a2[55]).n128_u32[2];
        }
        else {
          if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) == 0) {
            v46 = a2[52];
            v47 = a2[53];
            v48 = a2[54];
            v49 = a2[55];
          LABEL_48:
            v67 = *(int*)((char*)((_UNKNOWN**)0x8LL) + v358 + 4);
            v357 = vaddq_f32(
                v49,
                vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v46, LANES128(v34).n128_f32[0]), v47,
                        COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]), 1),
                    v48, v34, 2));
            v68 = (__typeof__(v68)){0};
            if (v32 >= (int)v35 && v33 != 0) {
              v69 = v33 + 16 * v35;
              LANES128(v68).n128_u64[0] = *(_QWORD*)v69;
              LANES128(v68).n128_u64[1] = *(unsigned int*)(v69 + 8);
            }
            v70 = (unsigned int*)(v39 + 16 * v35);
            v71 = (unsigned int*)(v40 + 16 * v35);
            v72 = (unsigned int*)(v42 + 16 * v35);
            if (v43 == 2) {
              v78 = *v72;
              v77 = v72[1];
              LANES128(v73).n128_u64[0] = *v70 | ((unsigned __int64)*v71 << 32);
              v79 = v72[2];
              v80 = LANES128(a2[55]).n128_u32[2];
              LANES128(v73).n128_u64[1] = v78;
              LANES128(v74).n128_u64[0] =
                  v70[1] | ((unsigned __int64)v71[1] << 32);
              LANES128(v74).n128_u64[1] = v77;
              LANES128(v75).n128_u64[0] =
                  v70[2] | ((unsigned __int64)v71[2] << 32);
              LANES128(v75).n128_u64[1] = v79;
              LANES128(v76).n128_u64[0] = LANES128(a2[55]).n128_u64[0];
            }
            else {
              if (v43 == 0) {
                v73 = a2[52];
                v74 = a2[53];
                v75 = a2[54];
                v76 = a2[55];
                goto LABEL_57;
              }
              v81 = v72[1];
              v82 = *v72;
              v83 = v72[2];
              v80 = v72[3];
              LANES128(v73).n128_u64[0] = *v70 | ((unsigned __int64)*v71 << 32);
              LANES128(v73).n128_u64[1] = v82;
              LANES128(v74).n128_u64[0] =
                  v70[1] | ((unsigned __int64)v71[1] << 32);
              LANES128(v74).n128_u64[1] = v81;
              LANES128(v75).n128_u64[0] =
                  v70[2] | ((unsigned __int64)v71[2] << 32);
              LANES128(v75).n128_u64[1] = v83;
              LANES128(v76).n128_u64[0] =
                  v70[3] | ((unsigned __int64)v71[3] << 32);
            }
            LANES128(v76).n128_u64[1] = v80;
          LABEL_57:
            v355 = vaddq_f32(
                v76,
                vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v73, LANES128(v68).n128_f32[0]), v74,
                        COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]), 1),
                    v75, v68, 2));
            v84 = (__typeof__(v84)){0};
            if ((unsigned int)(*v344 - 1) <= 1) {
              if (v43 != 0) {
                LANES128(v84).n128_u32[0] = *(_DWORD*)(v39 + 16 * v36 + 4);
                LANES128(v84).n128_u32[1] = *(_DWORD*)(v40 + 16 * v36 + 4);
                LANES128(v84).n128_u32[2] = *(_DWORD*)(v42 + 16 * v36 + 4);
              }
              else {
                v84 = a2[53];
              }
            }
            v345 = v84;
            v85 = LANES128(a2[11]).n128_u64[0] + 32 * v36;
            v86 = 16 * v36;
            v87 = LANES128(a2[9]).n128_i64[1];
            v88 = *(float*)(v85 + 12);
            v89 = LANES128(a2[4]).n128_f32[1] - *(float*)(v85 + 8);
            v90 = LANES128(a2[30]).n128_u64[1];
            v360 = *(float32x4_t*)(LANES128(a2[31]).n128_u64[0] + v86);
            v359 = *(float32x4_t*)(v90 + v86);
            GameRoutine_5c2180(v88, v89, v87, &v353, v9, &v359, (float*)&v360),
                v335 =
                    COERCE_AS(__typeof__(v335),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v91 = LANES128(a2[29]).n128_u64[0];
            v10 = COERCE_LONG_DOUBLE(vmulq_f32(
                v353, *(float32x4_t*)(LANES128(a2[7]).n128_u64[1] + 320)));
            v92 = (__typeof__(v92)){0};
            v93 = (signed __int32)LANES128(a2[2]).n128_u32[2] < (int)v67 ||
                  v91 == 0;
            v353 = *(float32x4_t*)&v10;
            v94 = v93;
            if (v14 != 0) {
              if ((v94 & 1) == 0) {
                v95 = v91 + 16 * v67;
                LANES128(v92).n128_u64[0] = *(_QWORD*)v95;
                LANES128(v92).n128_u64[1] = *(unsigned int*)(v95 + 8);
              }
              v96 = (unsigned int*)(LANES128(a2[33]).n128_u64[0] + 16 * v67);
              v97 = (unsigned int*)(LANES128(a2[34]).n128_u64[0] + 16 * v67);
              v98 = (unsigned int*)(LANES128(a2[33]).n128_u64[1] + 16 * v67);
              if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) == 2) {
                LANES128(v99).n128_u64[0] =
                    *v96 | ((unsigned __int64)*v98 << 32);
                LANES128(v99).n128_u64[1] = *v97;
                LANES128(v100).n128_u64[0] =
                    v96[1] | ((unsigned __int64)v98[1] << 32);
                LANES128(v100).n128_u64[1] = v97[1];
                LANES128(v101).n128_u64[0] =
                    v96[2] | ((unsigned __int64)v98[2] << 32);
                LANES128(v101).n128_u64[1] = v97[2];
                LANES128(v102).n128_u64[0] = LANES128(a2[55]).n128_u64[0];
                v111 = LANES128(a2[55]).n128_u32[2];
              }
              else {
                if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) == 0) {
                  v99 = a2[52];
                  v100 = a2[53];
                  v101 = a2[54];
                  v102 = a2[55];
                LABEL_81:
                  v112 = v345;
                  v113 = vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v99, LANES128(v92).n128_f32[0]), v100,
                          COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0]), 1),
                      v101, v92, 2);
                  v114 = v357;
                  v356 = vsubq_f32(v355, v357);
                  LANES128(v115).n128_u64[0] = 0x3F0000003F000000LL;
                  LANES128(v115).n128_u64[1] = 0x3F0000003F000000LL;
                  v354 =
                      vmulq_f32(vsubq_f32(vaddq_f32(v102, v113), v357), v115);
                LABEL_106:
                  v142 = v24 * *(float*)&v10;
                  v65 = 1;
                  v361 = 1;
                  *(_QWORD*)v343 = LANES128(v114).n128_u64[0];
                  *(_QWORD*)(v343 + 32) = LANES128(v112).n128_u64[0];
                  *(_DWORD*)(v343 + 44) = 0;
                  *(_DWORD*)(v343 + 8) = LANES128(v114).n128_u32[2];
                  v143 = LANES128(v357).n128_u32[2];
                  *(_QWORD*)(v343 + 80) = LANES128(v357).n128_u64[0];
                  *(_DWORD*)(v343 + 88) = v143;
                  v144 = v356;
                  *(float*)(v343 + 12) = -(float)(v24 * *(float*)&v10);
                  DWORD1(v10) = 0;
                  *(_QWORD*)(v343 + 112) = LANES128(v112).n128_u64[0];
                  *(float*)(v343 + 92) = v24 * *(float*)&v10;
                  *(_DWORD*)(v343 + 124) = 0;
                  *(_DWORD*)(v343 + 24) = LANES128(v144).n128_u32[2];
                  *(_QWORD*)(v343 + 16) = LANES128(v144).n128_u64[0];
                  *(_QWORD*)(v343 + 96) = LANES128(v144).n128_u64[0];
                  *(_DWORD*)(v343 + 104) = LANES128(v144).n128_u32[2];
                  *(_DWORD*)(v343 + 40) = LANES128(v112).n128_u32[2];
                  *(_DWORD*)(v343 + 120) = LANES128(v112).n128_u32[2];
                  v145 = (float)(v30 - 1);
                  *(float*)&v10 = 0x0.0p+0f / v145;
                  *(float*)(v343 + 28) = 0x0.0p+0f / v145;
                  *(float*)(v343 + 108) = 0x0.0p+0f / v145;
                  *v4 += 2;
                  if (v14 != 0 && v18 <= 1) {
                    v146 = v11;
                    v147 = LANES128(v112).n128_i32[2];
                    v148 = v342;
                    v347 = LANES128(v112).n128_u64[0];
                    v149 = (float*)(v343 + 284);
                    do {
                      v360 = (__typeof__(v360)){0};
                      v150 = v31 * (float)(unsigned int)v65;
                      v349 = vaddq_f32(
                          vmulq_n_f32(v356, 0x1.0000000000000p+0f - v150),
                          vmulq_n_f32(v354, v150));
                      game_5c0500(&v360, (float32x2_t*)&v357,
                                  (float32x2_t*)&v356, (float32x2_t*)&v355,
                                  (float32x2_t*)&v354, v150),
                          v335 = COERCE_AS(
                              __typeof__(v335),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      v151 = LANES128(v360).n128_u32[2];
                      --v148;
                      *(_QWORD*)(v149 - 31) = LANES128(v360).n128_u64[0];
                      *((_DWORD*)v149 - 29) = v151;
                      v152 = v360;
                      *(v149 - 28) = -v142;
                      *(v149 - 8) = v142;
                      *(_QWORD*)(v149 - 11) = LANES128(v152).n128_u64[0];
                      *(v149 - 9) = LANES128(v152).n128_f32[2];
                      v10 = *(long double*)&v349;
                      *(v149 - 25) = LANES128(v349).n128_f32[2];
                      *(_QWORD*)(v149 - 27) = LANES128(v349).n128_u64[0];
                      *(_QWORD*)(v149 - 7) = LANES128(v349).n128_u64[0];
                      *(_QWORD*)(v149 - 23) = v347;
                      *(_QWORD*)(v149 - 3) = v347;
                      *(v149 - 5) = LANES128(v349).n128_f32[2];
                      *(float*)&v10 = (float)v65++;
                      *((_DWORD*)v149 - 21) = v147;
                      *(v149 - 20) = *(float*)&v10;
                      *((_DWORD*)v149 - 1) = v147;
                      *v149 = *(float*)&v10;
                      *(v149 - 24) = *(float*)&v10 / v145;
                      *(v149 - 4) = *(float*)&v10 / v145;
                      v149 += 40;
                      *v4 += 2;
                    } while (v148 != 0);
                    v25 = true;
                    v361 = v65;
                    v11 = v146;
                  }
                LABEL_111:
                  v357 = (__typeof__(v357)){0};
                  v356 = (__typeof__(v356)){0};
                  v355 = (__typeof__(v355)){0};
                  v354 = (__typeof__(v354)){0};
                  v353 = (__typeof__(v353)){0};
                  v339 = v30;
                  if ((int)v11 >= 2) {
                    v153 = (__typeof__(v153)){0};
                    v154 = 0;
                    v155 = v29;
                    v341 = (unsigned int)(v11 - 2);
                    v156 = (float)(v30 - 1);
                    while (1) {
                      v157 = LANES128(a2[2]).n128_i32[2];
                      v158 = LANES128(a2[29]).n128_u64[0];
                      v159 = (__typeof__(v159)){0};
                      v160 = *(int*)(v358 + 8 * v154 + 4);
                      if (v157 >= (int)v160 && v158 != 0) {
                        v162 = v158 + 16 * v160;
                        LANES128(v159).n128_u64[0] = *(_QWORD*)v162;
                        LANES128(v159).n128_u64[1] = *(unsigned int*)(v162 + 8);
                      }
                      v163 = LANES128(a2[33]).n128_u64[0];
                      v164 = LANES128(a2[33]).n128_u64[1];
                      v165 = (unsigned int*)(v163 + 16 * v160);
                      v166 = LANES128(a2[34]).n128_u64[0];
                      v167 = *(unsigned __int8*)(LANES128(a2[10]).n128_u64[0] +
                                                 1875);
                      v168 = (unsigned int*)(v164 + 16 * v160);
                      v169 = (unsigned int*)(v166 + 16 * v160);
                      if (v167 == 2) {
                        LANES128(v170).n128_u64[0] =
                            *v165 | ((unsigned __int64)*v168 << 32);
                        LANES128(v170).n128_u64[1] = *v169;
                        LANES128(v171).n128_u64[0] =
                            v165[1] | ((unsigned __int64)v168[1] << 32);
                        LANES128(v171).n128_u64[1] = v169[1];
                        LANES128(v172).n128_u64[0] =
                            v165[2] | ((unsigned __int64)v168[2] << 32);
                        LANES128(v172).n128_u64[1] = v169[2];
                        LANES128(v173).n128_u64[0] =
                            LANES128(a2[55]).n128_u64[0];
                        v174 = LANES128(a2[55]).n128_u32[2];
                      }
                      else {
                        if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) ==
                            0) {
                          v170 = a2[52];
                          v171 = a2[53];
                          v172 = a2[54];
                          v173 = a2[55];
                          goto LABEL_126;
                        }
                        LANES128(v170).n128_u64[0] =
                            *v165 | ((unsigned __int64)*v168 << 32);
                        LANES128(v170).n128_u64[1] = *v169;
                        LANES128(v171).n128_u64[0] =
                            v165[1] | ((unsigned __int64)v168[1] << 32);
                        v174 = v169[3];
                        LANES128(v171).n128_u64[1] = v169[1];
                        LANES128(v172).n128_u64[0] =
                            v165[2] | ((unsigned __int64)v168[2] << 32);
                        LANES128(v172).n128_u64[1] = v169[2];
                        LANES128(v173).n128_u64[0] =
                            v165[3] | ((unsigned __int64)v168[3] << 32);
                      }
                      LANES128(v173).n128_u64[1] = v174;
                    LABEL_126:
                      v29 = v154 + 1;
                      v175 = *(int*)(v358 + 8 * (v154 + 1) + 4);
                      v176 = vmlaq_laneq_f32(
                          vmlaq_lane_f32(
                              vmulq_n_f32(v170, LANES128(v159).n128_f32[0]),
                              v171,
                              COERCE_AS(float32x2_t,
                                        LANES128(v159).n128_u64[0]),
                              1),
                          v172, v159, 2);
                      v177 = v157 < (int)v175 || v158 == 0;
                      v357 = vaddq_f32(v173, v176);
                      v178 = (__typeof__(v178)){0};
                      if (!v177) {
                        v179 = v158 + 16 * v175;
                        LANES128(v178).n128_u64[0] = *(_QWORD*)v179;
                        LANES128(v178).n128_u64[1] = *(unsigned int*)(v179 + 8);
                      }
                      v180 = (unsigned int*)(v163 + 16 * v175);
                      v181 = (unsigned int*)(v164 + 16 * v175);
                      v182 = (unsigned int*)(v166 + 16 * v175);
                      if (v167 == 2) {
                        LANES128(v183).n128_u64[0] =
                            *v180 | ((unsigned __int64)*v181 << 32);
                        LANES128(v183).n128_u64[1] = *v182;
                        LANES128(v184).n128_u64[0] =
                            v180[1] | ((unsigned __int64)v181[1] << 32);
                        LANES128(v184).n128_u64[1] = v182[1];
                        LANES128(v185).n128_u64[0] =
                            v180[2] | ((unsigned __int64)v181[2] << 32);
                        LANES128(v185).n128_u64[1] = v182[2];
                        LANES128(v186).n128_u64[0] =
                            LANES128(a2[55]).n128_u64[0];
                        v187 = LANES128(a2[55]).n128_u32[2];
                      }
                      else {
                        if (v167 == 0) {
                          v183 = a2[52];
                          v184 = a2[53];
                          v185 = a2[54];
                          v186 = a2[55];
                          goto LABEL_137;
                        }
                        LANES128(v183).n128_u64[0] =
                            *v180 | ((unsigned __int64)*v181 << 32);
                        LANES128(v183).n128_u64[1] = *v182;
                        LANES128(v184).n128_u64[0] =
                            v180[1] | ((unsigned __int64)v181[1] << 32);
                        v187 = v182[3];
                        LANES128(v184).n128_u64[1] = v182[1];
                        LANES128(v185).n128_u64[0] =
                            v180[2] | ((unsigned __int64)v181[2] << 32);
                        LANES128(v185).n128_u64[1] = v182[2];
                        LANES128(v186).n128_u64[0] =
                            v180[3] | ((unsigned __int64)v181[3] << 32);
                      }
                      LANES128(v186).n128_u64[1] = v187;
                    LABEL_137:
                      v355 = vaddq_f32(
                          v186,
                          vmlaq_laneq_f32(
                              vmlaq_lane_f32(
                                  vmulq_n_f32(v183, LANES128(v178).n128_f32[0]),
                                  v184,
                                  COERCE_AS(float32x2_t,
                                            LANES128(v178).n128_u64[0]),
                                  1),
                              v185, v178, 2));
                      if ((unsigned int)(*v344 - 1) <= 1) {
                        if (v167 != 0) {
                          LANES128(v153).n128_u32[0] =
                              *(_DWORD*)(v163 + 16 * v160 + 4);
                          LANES128(v153).n128_u32[1] =
                              *(_DWORD*)(v164 + 16 * v160 + 4);
                          LANES128(v153).n128_u32[2] =
                              *(_DWORD*)(v166 + 16 * v160 + 4);
                        }
                        else {
                          v153 = a2[53];
                        }
                      }
                      v188 = LANES128(a2[30]).n128_u64[1];
                      v189 = LANES128(a2[11]).n128_u64[0] + 32 * v160;
                      v190 = LANES128(a2[9]).n128_i64[1];
                      v191 = LANES128(a2[35]).n128_i64[1];
                      v348 = v153;
                      v192 = *(float*)(v189 + 12);
                      v193 = LANES128(a2[4]).n128_f32[1] - *(float*)(v189 + 8);
                      v360 = *(float32x4_t*)(LANES128(a2[31]).n128_u64[0] +
                                             16 * v160);
                      v359 = *(float32x4_t*)(v188 + 16 * v160);
                      GameRoutine_5c2180(v192, v193, v190, &v353, v191, &v359,
                                         (float*)&v360),
                          v335 = COERCE_AS(
                              __typeof__(v335),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      v194 = vmulq_f32(
                          v353,
                          *(float32x4_t*)(LANES128(a2[7]).n128_u64[1] + 320));
                      v353 = v194;
                      if (!v25) {
                        v206 = LANES128(a2[2]).n128_i32[2];
                        v207 = LANES128(a2[29]).n128_u64[0];
                        v208 = (__typeof__(v208)){0};
                        if (v206 >= (int)v160 && v207 != 0) {
                          v209 = v207 + 16 * v160;
                          LANES128(v208).n128_u64[0] = *(_QWORD*)v209;
                          LANES128(v208).n128_u64[1] =
                              *(unsigned int*)(v209 + 8);
                        }
                        v210 = LANES128(a2[33]).n128_u64[0];
                        v211 = LANES128(a2[33]).n128_u64[1];
                        v212 = (unsigned int*)(v210 + 16 * v160);
                        v213 = LANES128(a2[34]).n128_u64[0];
                        v214 =
                            *(unsigned __int8*)(LANES128(a2[10]).n128_u64[0] +
                                                1875);
                        v215 = (unsigned int*)(v211 + 16 * v160);
                        v216 = (unsigned int*)(v213 + 16 * v160);
                        if (v214 == 2) {
                          LANES128(v217).n128_u64[0] =
                              *v212 | ((unsigned __int64)*v215 << 32);
                          LANES128(v217).n128_u64[1] = *v216;
                          LANES128(v218).n128_u64[0] =
                              v212[1] | ((unsigned __int64)v215[1] << 32);
                          LANES128(v218).n128_u64[1] = v216[1];
                          LANES128(v219).n128_u64[0] =
                              v212[2] | ((unsigned __int64)v215[2] << 32);
                          LANES128(v219).n128_u64[1] = v216[2];
                          LANES128(v220).n128_u64[0] =
                              LANES128(a2[55]).n128_u64[0];
                          v232 = LANES128(a2[55]).n128_u32[2];
                        }
                        else {
                          if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) ==
                              0) {
                            v217 = a2[52];
                            v218 = a2[53];
                            v219 = a2[54];
                            v220 = a2[55];
                          LABEL_165:
                            v233 = vaddq_f32(
                                v220,
                                vmlaq_laneq_f32(
                                    vmlaq_lane_f32(
                                        vmulq_n_f32(v217,
                                                    LANES128(v208).n128_f32[0]),
                                        v218,
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v208).n128_u64[0]),
                                        1),
                                    v219, v208, 2));
                            v234 = (__typeof__(v234)){0};
                            v357 = v233;
                            if (v206 >= (int)v175 && v207 != 0) {
                              v235 = v207 + 16 * v175;
                              LANES128(v234).n128_u64[0] = *(_QWORD*)v235;
                              LANES128(v234).n128_u64[1] =
                                  *(unsigned int*)(v235 + 8);
                            }
                            v236 = (unsigned int*)(v210 + 16 * v175);
                            v237 = (unsigned int*)(v211 + 16 * v175);
                            v238 = (unsigned int*)(v213 + 16 * v175);
                            if (v214 == 2) {
                              LANES128(v239).n128_u64[0] =
                                  *v236 | ((unsigned __int64)*v237 << 32);
                              LANES128(v239).n128_u64[1] = *v238;
                              LANES128(v240).n128_u64[0] =
                                  v236[1] | ((unsigned __int64)v237[1] << 32);
                              LANES128(v240).n128_u64[1] = v238[1];
                              LANES128(v241).n128_u64[0] =
                                  v236[2] | ((unsigned __int64)v237[2] << 32);
                              LANES128(v241).n128_u64[1] = v238[2];
                              LANES128(v242).n128_u64[0] =
                                  LANES128(a2[55]).n128_u64[0];
                              v243 = LANES128(a2[55]).n128_u32[2];
                            }
                            else {
                              if (v214 == 0) {
                                v239 = a2[52];
                                v240 = a2[53];
                                v241 = a2[54];
                                v242 = a2[55];
                                goto LABEL_174;
                              }
                              LANES128(v239).n128_u64[0] =
                                  *v236 | ((unsigned __int64)*v237 << 32);
                              LANES128(v239).n128_u64[1] = *v238;
                              LANES128(v240).n128_u64[0] =
                                  v236[1] | ((unsigned __int64)v237[1] << 32);
                              v243 = v238[3];
                              LANES128(v240).n128_u64[1] = v238[1];
                              LANES128(v241).n128_u64[0] =
                                  v236[2] | ((unsigned __int64)v237[2] << 32);
                              LANES128(v241).n128_u64[1] = v238[2];
                              LANES128(v242).n128_u64[0] =
                                  v236[3] | ((unsigned __int64)v237[3] << 32);
                            }
                            LANES128(v242).n128_u64[1] = v243;
                          LABEL_174:
                            v355 = vaddq_f32(
                                v242,
                                vmlaq_laneq_f32(
                                    vmlaq_lane_f32(
                                        vmulq_n_f32(v239,
                                                    LANES128(v234).n128_f32[0]),
                                        v240,
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v234).n128_u64[0]),
                                        1),
                                    v241, v234, 2));
                            v356 = vsubq_f32(v355, v233);
                          LABEL_203:
                            v153 = v348;
                            goto LABEL_204;
                          }
                          LANES128(v217).n128_u64[0] =
                              *v212 | ((unsigned __int64)*v215 << 32);
                          LANES128(v217).n128_u64[1] = *v216;
                          LANES128(v218).n128_u64[0] =
                              v212[1] | ((unsigned __int64)v215[1] << 32);
                          v232 = v216[3];
                          LANES128(v218).n128_u64[1] = v216[1];
                          LANES128(v219).n128_u64[0] =
                              v212[2] | ((unsigned __int64)v215[2] << 32);
                          LANES128(v219).n128_u64[1] = v216[2];
                          LANES128(v220).n128_u64[0] =
                              v212[3] | ((unsigned __int64)v215[3] << 32);
                        }
                        LANES128(v220).n128_u64[1] = v232;
                        goto LABEL_165;
                      }
                      if (v154 != 0) {
                        if (v154 != v341) {
                          v244 = v358 + 8 * v154;
                          v245 = LANES128(a2[2]).n128_i32[2];
                          v246 = LANES128(a2[29]).n128_u64[0];
                          v247 = (__typeof__(v247)){0};
                          v248 = *(int*)(v244 - 4);
                          if (v245 >= (int)v248 && v246 != 0) {
                            v249 = v246 + 16 * v248;
                            LANES128(v247).n128_u64[0] = *(_QWORD*)v249;
                            LANES128(v247).n128_u64[1] =
                                *(unsigned int*)(v249 + 8);
                          }
                          v250 = LANES128(a2[33]).n128_u64[0];
                          v251 = LANES128(a2[33]).n128_u64[1];
                          v252 = LANES128(a2[34]).n128_u64[0];
                          v253 = (unsigned int*)(v250 + 16 * v248);
                          v254 = (unsigned int*)(v251 + 16 * v248);
                          v255 = (unsigned int*)(v252 + 16 * v248);
                          v256 =
                              *(unsigned __int8*)(LANES128(a2[10]).n128_u64[0] +
                                                  1875);
                          if (v256 == 2) {
                            LANES128(v257).n128_u64[0] =
                                *v253 | ((unsigned __int64)*v254 << 32);
                            LANES128(v257).n128_u64[1] = *v255;
                            LANES128(v258).n128_u64[0] =
                                v253[1] | ((unsigned __int64)v254[1] << 32);
                            LANES128(v258).n128_u64[1] = v255[1];
                            LANES128(v259).n128_u64[0] =
                                v253[2] | ((unsigned __int64)v254[2] << 32);
                            LANES128(v259).n128_u64[1] = v255[2];
                            LANES128(v260).n128_u64[0] =
                                LANES128(a2[55]).n128_u64[0];
                            LANES128(v260).n128_u64[1] =
                                LANES128(a2[55]).n128_u32[2];
                            v261 = *(int*)(v244 + 20);
                            v262 = (__typeof__(v262)){0};
                            if (v245 >= (int)v261) {
                              goto LABEL_194;
                            }
                          }
                          else {
                            if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] +
                                          1875) != 0) {
                              LANES128(v257).n128_u64[0] =
                                  *v253 | ((unsigned __int64)*v254 << 32);
                              LANES128(v257).n128_u64[1] = *v255;
                              LANES128(v258).n128_u64[0] =
                                  v253[1] | ((unsigned __int64)v254[1] << 32);
                              LANES128(v258).n128_u64[1] = v255[1];
                              LANES128(v259).n128_u64[0] =
                                  v253[2] | ((unsigned __int64)v254[2] << 32);
                              LANES128(v259).n128_u64[1] = v255[2];
                              LANES128(v260).n128_u64[0] =
                                  v253[3] | ((unsigned __int64)v254[3] << 32);
                              LANES128(v260).n128_u64[1] = v255[3];
                              v261 = *(int*)(v244 + 20);
                              v262 = (__typeof__(v262)){0};
                              if (v245 < (int)v261) {
                                goto LABEL_196;
                              }
                            }
                            else {
                              v257 = a2[52];
                              v258 = a2[53];
                              v259 = a2[54];
                              v260 = a2[55];
                              v261 = *(int*)(v244 + 20);
                              v262 = (__typeof__(v262)){0};
                              if (v245 < (int)v261) {
                                goto LABEL_196;
                              }
                            }
                          LABEL_194:
                            if (v246 != 0) {
                              v271 = v246 + 16 * v261;
                              LANES128(v262).n128_u64[0] = *(_QWORD*)v271;
                              LANES128(v262).n128_u64[1] =
                                  *(unsigned int*)(v271 + 8);
                            }
                          }
                        LABEL_196:
                          v272 = (unsigned int*)(v250 + 16 * v261);
                          v273 = (unsigned int*)(v251 + 16 * v261);
                          v274 = (unsigned int*)(v252 + 16 * v261);
                          if (v256 == 2) {
                            LANES128(v275).n128_u64[0] =
                                *v272 | ((unsigned __int64)*v273 << 32);
                            LANES128(v275).n128_u64[1] = *v274;
                            LANES128(v276).n128_u64[0] =
                                v272[1] | ((unsigned __int64)v273[1] << 32);
                            LANES128(v276).n128_u64[1] = v274[1];
                            LANES128(v277).n128_u64[0] =
                                v272[2] | ((unsigned __int64)v273[2] << 32);
                            LANES128(v277).n128_u64[1] = v274[2];
                            LANES128(v278).n128_u64[0] =
                                LANES128(a2[55]).n128_u64[0];
                            v279 = LANES128(a2[55]).n128_u32[2];
                          }
                          else {
                            if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] +
                                          1875) == 0) {
                              v275 = a2[52];
                              v276 = a2[53];
                              v277 = a2[54];
                              v278 = a2[55];
                            LABEL_202:
                              v280 = vaddq_f32(
                                  v260,
                                  vmlaq_laneq_f32(
                                      vmlaq_lane_f32(
                                          vmulq_n_f32(
                                              v257, LANES128(v247).n128_f32[0]),
                                          v258,
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v247).n128_u64[0]),
                                          1),
                                      v259, v247, 2));
                              LANES128(v281).n128_u64[0] = 0x3F0000003F000000LL;
                              LANES128(v281).n128_u64[1] = 0x3F0000003F000000LL;
                              v356 = vmulq_f32(vsubq_f32(v355, v280), v281);
                              v233 = v357;
                              v354 = vmulq_f32(
                                  vsubq_f32(
                                      vaddq_f32(
                                          v278,
                                          vmlaq_laneq_f32(
                                              vmlaq_lane_f32(
                                                  vmulq_n_f32(v275,
                                                              LANES128(v262)
                                                                  .n128_f32[0]),
                                                  v276,
                                                  COERCE_AS(float32x2_t,
                                                            LANES128(v262)
                                                                .n128_u64[0]),
                                                  1),
                                              v277, v262, 2)),
                                      v357),
                                  v281);
                              goto LABEL_203;
                            }
                            LANES128(v275).n128_u64[0] =
                                *v272 | ((unsigned __int64)*v273 << 32);
                            LANES128(v275).n128_u64[1] = *v274;
                            LANES128(v276).n128_u64[0] =
                                v272[1] | ((unsigned __int64)v273[1] << 32);
                            v279 = v274[3];
                            LANES128(v276).n128_u64[1] = v274[1];
                            LANES128(v277).n128_u64[0] =
                                v272[2] | ((unsigned __int64)v273[2] << 32);
                            LANES128(v277).n128_u64[1] = v274[2];
                            LANES128(v278).n128_u64[0] =
                                v272[3] | ((unsigned __int64)v273[3] << 32);
                          }
                          LANES128(v278).n128_u64[1] = v279;
                          goto LABEL_202;
                        }
                        v195 = (__typeof__(v195)){0};
                        v196 = *(int*)(v358 + 8 * v341 - 4);
                        if ((signed __int32)LANES128(a2[2]).n128_u32[2] >=
                            (int)v196) {
                          v197 = LANES128(a2[29]).n128_u64[0];
                          if (v197 != 0) {
                            v198 = v197 + 16 * v196;
                            LANES128(v195).n128_u64[0] = *(_QWORD*)v198;
                            LANES128(v195).n128_u64[1] =
                                *(unsigned int*)(v198 + 8);
                          }
                        }
                        v199 = (unsigned int*)(LANES128(a2[33]).n128_u64[0] +
                                               16 * v196);
                        v200 = (unsigned int*)(LANES128(a2[33]).n128_u64[1] +
                                               16 * v196);
                        v201 = (unsigned int*)(LANES128(a2[34]).n128_u64[0] +
                                               16 * v196);
                        if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) ==
                            2) {
                          LANES128(v202).n128_u64[0] =
                              *v199 | ((unsigned __int64)*v200 << 32);
                          LANES128(v202).n128_u64[1] = *v201;
                          LANES128(v203).n128_u64[0] =
                              v199[1] | ((unsigned __int64)v200[1] << 32);
                          LANES128(v203).n128_u64[1] = v201[1];
                          LANES128(v204).n128_u64[0] =
                              v199[2] | ((unsigned __int64)v200[2] << 32);
                          LANES128(v204).n128_u64[1] = v201[2];
                          LANES128(v205).n128_u64[0] =
                              LANES128(a2[55]).n128_u64[0];
                          v267 = LANES128(a2[55]).n128_u32[2];
                        }
                        else {
                          if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) ==
                              0) {
                            v202 = a2[52];
                            v203 = a2[53];
                            v204 = a2[54];
                            v205 = a2[55];
                          LABEL_191:
                            v153 = v348;
                            v268 = vmlaq_laneq_f32(
                                vmlaq_lane_f32(
                                    vmulq_n_f32(v202,
                                                LANES128(v195).n128_f32[0]),
                                    v203,
                                    COERCE_AS(float32x2_t,
                                              LANES128(v195).n128_u64[0]),
                                    1),
                                v204, v195, 2);
                            LANES128(v269).n128_u64[0] = 0x3F0000003F000000LL;
                            LANES128(v269).n128_u64[1] = 0x3F0000003F000000LL;
                            v270 = vaddq_f32(v205, v268);
                            v356 = vmulq_f32(vsubq_f32(v355, v270), v269);
                            v233 = v357;
                            v265 = vaddq_f32(vsubq_f32(v357, v355),
                                             vsubq_f32(v357, v270));
                            LANES128(v266).n128_u64[0] = 0xBE800000BE800000LL;
                            LANES128(v266).n128_u64[1] = 0xBE800000BE800000LL;
                            goto LABEL_192;
                          }
                          LANES128(v202).n128_u64[0] =
                              *v199 | ((unsigned __int64)*v200 << 32);
                          LANES128(v202).n128_u64[1] = *v201;
                          LANES128(v203).n128_u64[0] =
                              v199[1] | ((unsigned __int64)v200[1] << 32);
                          v267 = v201[3];
                          LANES128(v203).n128_u64[1] = v201[1];
                          LANES128(v204).n128_u64[0] =
                              v199[2] | ((unsigned __int64)v200[2] << 32);
                          LANES128(v204).n128_u64[1] = v201[2];
                          LANES128(v205).n128_u64[0] =
                              v199[3] | ((unsigned __int64)v200[3] << 32);
                        }
                        LANES128(v205).n128_u64[1] = v267;
                        goto LABEL_191;
                      }
                      v221 = (__typeof__(v221)){0};
                      v222 = *(int*)((char*)((__int128*)0x10LL) + v358 + 4);
                      if ((signed __int32)LANES128(a2[2]).n128_u32[2] >=
                          (int)v222) {
                        v223 = LANES128(a2[29]).n128_u64[0];
                        if (v223 != 0) {
                          v224 = v223 + 16 * v222;
                          LANES128(v221).n128_u64[0] = *(_QWORD*)v224;
                          LANES128(v221).n128_u64[1] =
                              *(unsigned int*)(v224 + 8);
                        }
                      }
                      v225 = (unsigned int*)(LANES128(a2[33]).n128_u64[0] +
                                             16 * v222);
                      v226 = (unsigned int*)(LANES128(a2[33]).n128_u64[1] +
                                             16 * v222);
                      v227 = (unsigned int*)(LANES128(a2[34]).n128_u64[0] +
                                             16 * v222);
                      if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) == 2) {
                        LANES128(v228).n128_u64[0] =
                            *v225 | ((unsigned __int64)*v226 << 32);
                        LANES128(v228).n128_u64[1] = *v227;
                        LANES128(v229).n128_u64[0] =
                            v225[1] | ((unsigned __int64)v226[1] << 32);
                        LANES128(v229).n128_u64[1] = v227[1];
                        LANES128(v230).n128_u64[0] =
                            v225[2] | ((unsigned __int64)v226[2] << 32);
                        LANES128(v230).n128_u64[1] = v227[2];
                        LANES128(v231).n128_u64[0] =
                            LANES128(a2[55]).n128_u64[0];
                        v263 = LANES128(a2[55]).n128_u32[2];
                      LABEL_184:
                        LANES128(v231).n128_u64[1] = v263;
                        goto LABEL_185;
                      }
                      if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) != 0) {
                        LANES128(v228).n128_u64[0] =
                            *v225 | ((unsigned __int64)*v226 << 32);
                        LANES128(v228).n128_u64[1] = *v227;
                        LANES128(v229).n128_u64[0] =
                            v225[1] | ((unsigned __int64)v226[1] << 32);
                        v263 = v227[3];
                        LANES128(v229).n128_u64[1] = v227[1];
                        LANES128(v230).n128_u64[0] =
                            v225[2] | ((unsigned __int64)v226[2] << 32);
                        LANES128(v230).n128_u64[1] = v227[2];
                        LANES128(v231).n128_u64[0] =
                            v225[3] | ((unsigned __int64)v226[3] << 32);
                        goto LABEL_184;
                      }
                      v228 = a2[52];
                      v229 = a2[53];
                      v230 = a2[54];
                      v231 = a2[55];
                    LABEL_185:
                      v153 = v348;
                      v264 = vmlaq_laneq_f32(
                          vmlaq_lane_f32(
                              vmulq_n_f32(v228, LANES128(v221).n128_f32[0]),
                              v229,
                              COERCE_AS(float32x2_t,
                                        LANES128(v221).n128_u64[0]),
                              1),
                          v230, v221, 2);
                      v233 = v357;
                      v265 = vsubq_f32(vaddq_f32(v231, v264), v357);
                      v356 = vsubq_f32(v355, v357);
                      LANES128(v266).n128_u64[0] = 0x3F0000003F000000LL;
                      LANES128(v266).n128_u64[1] = 0x3F0000003F000000LL;
                    LABEL_192:
                      v354 = vmulq_f32(v265, v266);
                    LABEL_204:
                      v282 = v24 * LANES128(v194).n128_f32[0];
                      v283 = v65 + 1;
                      v361 = v65 + 1;
                      v284 = -(float)(v24 * LANES128(v194).n128_f32[0]);
                      v285 = v343 + 160LL * v65;
                      *(_QWORD*)v285 = LANES128(v233).n128_u64[0];
                      *(_DWORD*)(v285 + 8) = LANES128(v233).n128_u32[2];
                      v286 = LANES128(v357).n128_u32[2];
                      *(_QWORD*)(v285 + 80) = LANES128(v357).n128_u64[0];
                      *(_DWORD*)(v285 + 88) = v286;
                      v287 = LANES128(v356).n128_u32[2];
                      *(_QWORD*)(v285 + 16) = LANES128(v356).n128_u64[0];
                      *(_DWORD*)(v285 + 24) = v287;
                      v10 = *(long double*)&v356;
                      *(_QWORD*)(v285 + 32) = LANES128(v153).n128_u64[0];
                      *(_QWORD*)(v285 + 112) = LANES128(v153).n128_u64[0];
                      *(float*)(v285 + 12) = v284;
                      *(float*)(v285 + 92) = v282;
                      *(_QWORD*)(v285 + 96) = *(_QWORD*)&v10;
                      *(_DWORD*)(v285 + 104) = DWORD2(v10);
                      *(float*)&v10 = (float)v65;
                      *(_DWORD*)(v285 + 40) = LANES128(v153).n128_u32[2];
                      *(_DWORD*)(v285 + 120) = LANES128(v153).n128_u32[2];
                      v288 = (float)v65 / v156;
                      *(float*)(v285 + 44) = (float)v65;
                      *(float*)(v285 + 124) = (float)v65;
                      *(float*)(v285 + 28) = v288;
                      *(float*)(v285 + 108) = v288;
                      *v4 += 2;
                      if (v25) {
                        if (v342 != 0) {
                          v289 = LANES128(v153).n128_i32[2];
                          v290 = 1;
                          v291 = v343 + 80 + 160LL * v283;
                          do {
                            v360 = (__typeof__(v360)){0};
                            v292 = v31 * (float)v290;
                            v350 = vaddq_f32(
                                vmulq_n_f32(v356, 0x1.0000000000000p+0f - v292),
                                vmulq_n_f32(v354, v292));
                            game_5c0500(
                                &v360, (float32x2_t*)&v357, (float32x2_t*)&v356,
                                (float32x2_t*)&v355, (float32x2_t*)&v354, v292),
                                v335 = COERCE_AS(
                                    __typeof__(v335),
                                    PSEUDO_REGISTER(unsigned long long, "x0",
                                                    "=r"));
                            v293 = LANES128(v360).n128_u32[2];
                            *(_QWORD*)(v291 - 80) = LANES128(v360).n128_u64[0];
                            *(_DWORD*)(v291 - 72) = v293;
                            v294 = v360;
                            *(float*)(v291 - 68) = v284;
                            *(float*)(v291 + 12) = v282;
                            *(_QWORD*)v291 = LANES128(v294).n128_u64[0];
                            *(_DWORD*)(v291 + 8) = LANES128(v294).n128_u32[2];
                            v153 = v348;
                            v10 = *(long double*)&v350;
                            *(_DWORD*)(v291 - 56) = LANES128(v350).n128_u32[2];
                            *(_QWORD*)(v291 - 64) = LANES128(v350).n128_u64[0];
                            *(_QWORD*)(v291 + 16) = LANES128(v350).n128_u64[0];
                            *(_QWORD*)(v291 - 48) = LANES128(v348).n128_u64[0];
                            *(_QWORD*)(v291 + 32) = LANES128(v348).n128_u64[0];
                            *(_DWORD*)(v291 + 24) = LANES128(v350).n128_u32[2];
                            v295 = v65 + v290++;
                            *(float*)&v10 = (float)v295;
                            v296 = (float)v295 / v156;
                            *(_DWORD*)(v291 - 40) = v289;
                            *(float*)(v291 - 36) = (float)v295;
                            *(_DWORD*)(v291 + 40) = v289;
                            *(float*)(v291 + 44) = (float)v295;
                            *(float*)(v291 - 52) = v296;
                            *(float*)(v291 + 28) = v296;
                            v291 += 160;
                            *v4 += 2;
                          } while (v290 - v342 != 1);
                          v283 = v65 + v290;
                        }
                        v361 = v283;
                      }
                      v65 = v283;
                      v154 = v29;
                      v27 = v29 == v155;
                      LODWORD(v29) = v155;
                      if (v27) {
                        goto LABEL_210;
                      }
                    }
                  }
                  v283 = v65;
                LABEL_210:
                  if (v362 <= 1) {
                    return GameRoutine_5df110(&LANES128(a2[122]).n128_i8[8],
                                              v10);
                  }
                  v357 = (__typeof__(v357)){0};
                  v356 = (__typeof__(v356)){0};
                  v297 = (__typeof__(v297)){0};
                  v298 = *(int*)(v358 + 8LL * (int)v29 + 4);
                  if ((unsigned int)(*v344 - 1) <= 1) {
                    if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) != 0) {
                      LANES128(v297).n128_u32[0] =
                          *(_DWORD*)(LANES128(a2[33]).n128_u64[0] + 16 * v298 +
                                     4);
                      LANES128(v297).n128_u32[1] =
                          *(_DWORD*)(LANES128(a2[33]).n128_u64[1] + 16 * v298 +
                                     4);
                      LANES128(v297).n128_u32[2] =
                          *(_DWORD*)(LANES128(a2[34]).n128_u64[0] + 16 * v298 +
                                     4);
                    }
                    else {
                      v297 = a2[53];
                    }
                    v357 = v297;
                  }
                  v351 = v297;
                  v299 = LANES128(a2[11]).n128_u64[0] + 32 * v298;
                  v300 = LANES128(a2[30]).n128_u64[1];
                  v301 = LANES128(a2[9]).n128_i64[1];
                  v302 = LANES128(a2[35]).n128_i64[1];
                  v303 = *(float*)(v299 + 12);
                  v304 = LANES128(a2[4]).n128_f32[1] - *(float*)(v299 + 8);
                  v360 =
                      *(float32x4_t*)(LANES128(a2[31]).n128_u64[0] + 16 * v298);
                  v359 = *(float32x4_t*)(v300 + 16 * v298);
                  GameRoutine_5c2180(v303, v304, v301, &v356, v302, &v359,
                                     (float*)&v360),
                      v335 = COERCE_AS(
                          __typeof__(v335),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v305 = LANES128(a2[2]).n128_i32[2];
                  v306 = (__typeof__(v306)){0};
                  v307 = LANES128(a2[29]).n128_u64[0];
                  v308 = vmulq_f32(
                      v356, *(float32x4_t*)(LANES128(a2[7]).n128_u64[1] + 320));
                  v356 = v308;
                  if (v305 >= (int)v298 && v307 != 0) {
                    v309 = v307 + 16 * v298;
                    LANES128(v306).n128_u64[0] = *(_QWORD*)v309;
                    LANES128(v306).n128_u64[1] = *(unsigned int*)(v309 + 8);
                  }
                  v310 = LANES128(a2[33]).n128_u64[0];
                  v311 = LANES128(a2[33]).n128_u64[1];
                  v312 = (unsigned int*)(v310 + 16 * v298);
                  v313 = LANES128(a2[34]).n128_u64[0];
                  v314 =
                      *(unsigned __int8*)(LANES128(a2[10]).n128_u64[0] + 1875);
                  v315 = (unsigned int*)(v311 + 16 * v298);
                  v316 = (unsigned int*)(v313 + 16 * v298);
                  if (v314 == 2) {
                    LANES128(v317).n128_u64[0] =
                        *v312 | ((unsigned __int64)*v315 << 32);
                    LANES128(v317).n128_u64[1] = *v316;
                    LANES128(v318).n128_u64[0] =
                        v312[1] | ((unsigned __int64)v315[1] << 32);
                    LANES128(v318).n128_u64[1] = v316[1];
                    LANES128(v319).n128_u64[0] =
                        v312[2] | ((unsigned __int64)v315[2] << 32);
                    LANES128(v319).n128_u64[1] = v316[2];
                    LANES128(v320).n128_u64[0] = LANES128(a2[55]).n128_u64[0];
                    v321 = LANES128(a2[55]).n128_u32[2];
                  }
                  else {
                    if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) == 0) {
                      v317 = a2[52];
                      v318 = a2[53];
                      v319 = a2[54];
                      v320 = a2[55];
                      goto LABEL_225;
                    }
                    LANES128(v317).n128_u64[0] =
                        *v312 | ((unsigned __int64)*v315 << 32);
                    LANES128(v317).n128_u64[1] = *v316;
                    LANES128(v318).n128_u64[0] =
                        v312[1] | ((unsigned __int64)v315[1] << 32);
                    v321 = v316[3];
                    LANES128(v318).n128_u64[1] = v316[1];
                    LANES128(v319).n128_u64[0] =
                        v312[2] | ((unsigned __int64)v315[2] << 32);
                    LANES128(v319).n128_u64[1] = v316[2];
                    LANES128(v320).n128_u64[0] =
                        v312[3] | ((unsigned __int64)v315[3] << 32);
                  }
                  LANES128(v320).n128_u64[1] = v321;
                LABEL_225:
                  v322 = v24 * LANES128(v308).n128_f32[0];
                  v10 = COERCE_LONG_DOUBLE(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v317, LANES128(v306).n128_f32[0]), v318,
                          COERCE_AS(float32x2_t, LANES128(v306).n128_u64[0]),
                          1),
                      v319, v306, 2));
                  v323 = vaddq_f32(v320, *(float32x4_t*)&v10);
                  v360 = v323;
                  if ((v340 & 0xFFFFFFFD) != 0) {
                    if (v340 == 1) {
                      v352 = v323;
                      v334 = *(_DWORD*)((char*)((_UNKNOWN*)0x4LL) + v358);
                      v355 = (__typeof__(v355)){0};
                      game_5dd870(&v355, a2, v334),
                          v335 = COERCE_AS(
                              __typeof__(v335),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      v359 = vsubq_f32(v355, v352);
                      *(float*)&v10 = GameRoutine_5dbb00(
                          v322, v335, v343, &v361, v4, v339, (__int128*)&v360,
                          (__int128*)&v359, (__int128*)&v357),
                      v335 = COERCE_AS(
                          __typeof__(v335),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                    }
                    return GameRoutine_5df110(&LANES128(a2[122]).n128_i8[8],
                                              v10);
                  }
                  v324 = (__typeof__(v324)){0};
                  v325 = *(int*)(v358 + 8 * v11 - 12);
                  if (v305 >= (int)v325 && v307 != 0) {
                    v326 = v307 + 16 * v325;
                    LANES128(v324).n128_u64[0] = *(_QWORD*)v326;
                    LANES128(v324).n128_u64[1] = *(unsigned int*)(v326 + 8);
                  }
                  v327 = (unsigned int*)(v310 + 16 * v325);
                  v328 = (unsigned int*)(v311 + 16 * v325);
                  v329 = (unsigned int*)(v313 + 16 * v325);
                  if (v314 == 2) {
                    LANES128(v330).n128_u64[0] =
                        *v327 | ((unsigned __int64)*v328 << 32);
                    LANES128(v330).n128_u64[1] = *v329;
                    LANES128(v331).n128_u64[0] =
                        v327[1] | ((unsigned __int64)v328[1] << 32);
                    LANES128(v331).n128_u64[1] = v329[1];
                    LANES128(v332).n128_u64[0] =
                        v327[2] | ((unsigned __int64)v328[2] << 32);
                    LANES128(v332).n128_u64[1] = v329[2];
                    LANES128(v333).n128_u64[0] = LANES128(a2[55]).n128_u64[0];
                    v336 = LANES128(a2[55]).n128_u32[2];
                  }
                  else {
                    if (v314 == 0) {
                      v330 = a2[52];
                      v331 = a2[53];
                      v332 = a2[54];
                      v333 = a2[55];
                    LABEL_237:
                      v337 = v343 + 160LL * v283;
                      *(_QWORD*)v337 = LANES128(v323).n128_u64[0];
                      *(_QWORD*)(v337 + 80) = LANES128(v323).n128_u64[0];
                      *(_QWORD*)(v337 + 32) = LANES128(v351).n128_u64[0];
                      *(_QWORD*)(v337 + 112) = LANES128(v351).n128_u64[0];
                      *(float*)(v337 + 92) = v322;
                      *(_DWORD*)(v337 + 8) = LANES128(v323).n128_u32[2];
                      *(_DWORD*)(v337 + 88) = LANES128(v323).n128_u32[2];
                      v10 = COERCE_LONG_DOUBLE(vsubq_f32(
                          v323,
                          vaddq_f32(
                              v333,
                              vmlaq_laneq_f32(
                                  vmlaq_lane_f32(
                                      vmulq_n_f32(v330,
                                                  LANES128(v324).n128_f32[0]),
                                      v331,
                                      COERCE_AS(float32x2_t,
                                                LANES128(v324).n128_u64[0]),
                                      1),
                                  v332, v324, 2))));
                      *(_DWORD*)(v337 + 24) = DWORD2(v10);
                      *(_QWORD*)(v337 + 16) = *(_QWORD*)&v10;
                      *(_QWORD*)(v337 + 96) = *(_QWORD*)&v10;
                      *(_DWORD*)(v337 + 104) = DWORD2(v10);
                      *(_DWORD*)(v337 + 40) = LANES128(v351).n128_u32[2];
                      *(_DWORD*)(v337 + 120) = LANES128(v351).n128_u32[2];
                      *(float*)(v337 + 12) = -v322;
                      *(float*)&v10 = (float)v283;
                      *(float*)(v337 + 44) = (float)v283;
                      *(float*)(v337 + 124) = (float)v283;
                      v338 = (float)v283 / (float)(v339 - 1);
                      *(float*)(v337 + 28) = v338;
                      *(float*)(v337 + 108) = v338;
                      *v4 += 2;
                      return GameRoutine_5df110(&LANES128(a2[122]).n128_i8[8],
                                                v10);
                    }
                    LANES128(v330).n128_u64[0] =
                        *v327 | ((unsigned __int64)*v328 << 32);
                    LANES128(v330).n128_u64[1] = *v329;
                    LANES128(v331).n128_u64[0] =
                        v327[1] | ((unsigned __int64)v328[1] << 32);
                    v336 = v329[3];
                    LANES128(v331).n128_u64[1] = v329[1];
                    LANES128(v332).n128_u64[0] =
                        v327[2] | ((unsigned __int64)v328[2] << 32);
                    LANES128(v332).n128_u64[1] = v329[2];
                    LANES128(v333).n128_u64[0] =
                        v327[3] | ((unsigned __int64)v328[3] << 32);
                  }
                  LANES128(v333).n128_u64[1] = v336;
                  goto LABEL_237;
                }
                LANES128(v99).n128_u64[0] =
                    *v96 | ((unsigned __int64)*v98 << 32);
                LANES128(v99).n128_u64[1] = *v97;
                LANES128(v100).n128_u64[0] =
                    v96[1] | ((unsigned __int64)v98[1] << 32);
                v111 = v97[3];
                LANES128(v100).n128_u64[1] = v97[1];
                LANES128(v101).n128_u64[0] =
                    v96[2] | ((unsigned __int64)v98[2] << 32);
                LANES128(v101).n128_u64[1] = v97[2];
                LANES128(v102).n128_u64[0] =
                    v96[3] | ((unsigned __int64)v98[3] << 32);
              }
              LANES128(v102).n128_u64[1] = v111;
              goto LABEL_81;
            }
            if ((v94 & 1) == 0) {
              v103 = v91 + 16 * v67;
              LANES128(v92).n128_u64[0] = *(_QWORD*)v103;
              LANES128(v92).n128_u64[1] = *(unsigned int*)(v103 + 8);
            }
            v104 = (unsigned int*)(LANES128(a2[33]).n128_u64[0] + 16 * v67);
            v105 = (unsigned int*)(LANES128(a2[34]).n128_u64[0] + 16 * v67);
            v106 = (unsigned int*)(LANES128(a2[33]).n128_u64[1] + 16 * v67);
            if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) == 2) {
              LANES128(v107).n128_u64[0] =
                  *v104 | ((unsigned __int64)*v106 << 32);
              LANES128(v107).n128_u64[1] = *v105;
              LANES128(v108).n128_u64[0] =
                  v104[1] | ((unsigned __int64)v106[1] << 32);
              LANES128(v108).n128_u64[1] = v105[1];
              LANES128(v109).n128_u64[0] =
                  v104[2] | ((unsigned __int64)v106[2] << 32);
              LANES128(v109).n128_u64[1] = v105[2];
              LANES128(v110).n128_u64[0] = LANES128(a2[55]).n128_u64[0];
              v119 = LANES128(a2[55]).n128_u32[2];
            }
            else {
              if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) == 0) {
                v107 = a2[52];
                v108 = a2[53];
                v109 = a2[54];
                v110 = a2[55];
              LABEL_91:
                v112 = v345;
                v120 = vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v107, LANES128(v92).n128_f32[0]), v108,
                        COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0]), 1),
                    v109, v92, 2);
                v114 = v357;
                v356 = vsubq_f32(v355, v357);
                v354 = vsubq_f32(vaddq_f32(v110, v120), v355);
                goto LABEL_106;
              }
              LANES128(v107).n128_u64[0] =
                  *v104 | ((unsigned __int64)*v106 << 32);
              LANES128(v107).n128_u64[1] = *v105;
              LANES128(v108).n128_u64[0] =
                  v104[1] | ((unsigned __int64)v106[1] << 32);
              v119 = v105[3];
              LANES128(v108).n128_u64[1] = v105[1];
              LANES128(v109).n128_u64[0] =
                  v104[2] | ((unsigned __int64)v106[2] << 32);
              LANES128(v109).n128_u64[1] = v105[2];
              LANES128(v110).n128_u64[0] =
                  v104[3] | ((unsigned __int64)v106[3] << 32);
            }
            LANES128(v110).n128_u64[1] = v119;
            goto LABEL_91;
          }
          LANES128(v46).n128_u64[0] = *v41 | ((unsigned __int64)*v44 << 32);
          LANES128(v46).n128_u64[1] = *v45;
          LANES128(v47).n128_u64[0] = v41[1] | ((unsigned __int64)v44[1] << 32);
          v66 = v45[3];
          LANES128(v47).n128_u64[1] = v45[1];
          LANES128(v48).n128_u64[0] = v41[2] | ((unsigned __int64)v44[2] << 32);
          LANES128(v48).n128_u64[1] = v45[2];
          LANES128(v49).n128_u64[0] = v41[3] | ((unsigned __int64)v44[3] << 32);
        }
        LANES128(v49).n128_u64[1] = v66;
        goto LABEL_48;
      }
      if (v13 != 2) {
        v65 = 0;
        goto LABEL_111;
      }
      v50 = (__typeof__(v50)){0};
      v51 = *(int*)((char*)((_UNKNOWN*)0x4LL) + v358);
      if ((signed __int32)LANES128(a2[2]).n128_u32[2] >= (int)v51) {
        v52 = LANES128(a2[29]).n128_u64[0];
        if (v52 != 0) {
          v53 = v52 + 16 * v51;
          LANES128(v50).n128_u64[0] = *(_QWORD*)v53;
          LANES128(v50).n128_u64[1] = *(unsigned int*)(v53 + 8);
        }
      }
      v54 = LANES128(a2[33]).n128_u64[0];
      v55 = LANES128(a2[33]).n128_u64[1];
      v56 = (unsigned int*)(v54 + 16 * v51);
      v57 = LANES128(a2[34]).n128_u64[0];
      v58 = *(unsigned __int8*)(LANES128(a2[10]).n128_u64[0] + 1875);
      v59 = (unsigned int*)(v55 + 16 * v51);
      v60 = (unsigned int*)(v57 + 16 * v51);
      if (v58 == 2) {
        LANES128(v61).n128_u64[0] = *v56 | ((unsigned __int64)*v59 << 32);
        LANES128(v61).n128_u64[1] = *v60;
        LANES128(v62).n128_u64[0] = v56[1] | ((unsigned __int64)v59[1] << 32);
        LANES128(v62).n128_u64[1] = v60[1];
        LANES128(v63).n128_u64[0] = v56[2] | ((unsigned __int64)v59[2] << 32);
        LANES128(v63).n128_u64[1] = v60[2];
        LANES128(v64).n128_u64[0] = LANES128(a2[55]).n128_u64[0];
        v116 = LANES128(a2[55]).n128_u32[2];
      }
      else {
        if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) == 0) {
          v61 = a2[52];
          v62 = a2[53];
          v63 = a2[54];
          v64 = a2[55];
          goto LABEL_85;
        }
        LANES128(v61).n128_u64[0] = *v56 | ((unsigned __int64)*v59 << 32);
        LANES128(v61).n128_u64[1] = *v60;
        LANES128(v62).n128_u64[0] = v56[1] | ((unsigned __int64)v59[1] << 32);
        v116 = v60[3];
        LANES128(v62).n128_u64[1] = v60[1];
        LANES128(v63).n128_u64[0] = v56[2] | ((unsigned __int64)v59[2] << 32);
        LANES128(v63).n128_u64[1] = v60[2];
        LANES128(v64).n128_u64[0] = v56[3] | ((unsigned __int64)v59[3] << 32);
      }
      LANES128(v64).n128_u64[1] = v116;
    LABEL_85:
      v117 = *(int*)((char*)((_UNKNOWN**)0x8LL) + v358 + 4);
      v355 = vaddq_f32(
          v64, vmlaq_laneq_f32(
                   vmlaq_lane_f32(
                       vmulq_n_f32(v61, LANES128(v50).n128_f32[0]), v62,
                       COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]), 1),
                   v63, v50, 2));
      v118 = (__typeof__(v118)){0};
      if ((unsigned int)(*v344 - 1) <= 1) {
        if (v58 != 0) {
          LANES128(v118).n128_u32[0] = *(_DWORD*)(v54 + 16 * v51 + 4);
          LANES128(v118).n128_u32[1] = *(_DWORD*)(v55 + 16 * v51 + 4);
          LANES128(v118).n128_u32[2] = *(_DWORD*)(v57 + 16 * v51 + 4);
        }
        else {
          v118 = a2[53];
        }
      }
      v346 = v118;
      v121 = LANES128(a2[11]).n128_u64[0] + 32 * v51;
      v122 = 16 * v51;
      v123 = LANES128(a2[9]).n128_i64[1];
      v124 = *(float*)(v121 + 12);
      v125 = LANES128(a2[4]).n128_f32[1] - *(float*)(v121 + 8);
      v126 = LANES128(a2[30]).n128_u64[1];
      v360 = *(float32x4_t*)(LANES128(a2[31]).n128_u64[0] + v122);
      v359 = *(float32x4_t*)(v126 + v122);
      GameRoutine_5c2180(v124, v125, v123, &v353, v9, &v359, (float*)&v360),
          v335 = COERCE_AS(__typeof__(v335),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v10 = COERCE_LONG_DOUBLE(
          vmulq_f32(v353, *(float32x4_t*)(LANES128(a2[7]).n128_u64[1] + 320)));
      v353 = *(float32x4_t*)&v10;
      if (v14 == 0) {
        v357 = a2[55];
        v114 = v357;
        v356 = vsubq_f32(v355, v357);
      LABEL_105:
        v112 = v346;
        goto LABEL_106;
      }
      v127 = a2[52];
      v114 = a2[55];
      v128 = LANES128(a2[2]).n128_i32[2];
      v129 = (__typeof__(v129)){0};
      v357 = v114;
      if (v128 >= (int)v117) {
        v130 = LANES128(a2[29]).n128_u64[0];
        if (v130 != 0) {
          v131 = v130 + 16 * v117;
          LANES128(v129).n128_u64[0] = *(_QWORD*)v131;
          LANES128(v129).n128_u64[1] = *(unsigned int*)(v131 + 8);
        }
      }
      v132 = (unsigned int*)(LANES128(a2[33]).n128_u64[0] + 16 * v117);
      v133 = (unsigned int*)(LANES128(a2[34]).n128_u64[0] + 16 * v117);
      v134 = (unsigned int*)(LANES128(a2[33]).n128_u64[1] + 16 * v117);
      if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) == 2) {
        LANES128(v127).n128_u64[0] = *v132 | ((unsigned __int64)*v134 << 32);
        LANES128(v127).n128_u64[1] = *v133;
        LANES128(v135).n128_u64[0] =
            v132[1] | ((unsigned __int64)v134[1] << 32);
        LANES128(v135).n128_u64[1] = v133[1];
        LANES128(v136).n128_u64[0] =
            v132[2] | ((unsigned __int64)v134[2] << 32);
        LANES128(v136).n128_u64[1] = v133[2];
        LANES128(v137).n128_u64[0] = LANES128(v114).n128_u64[0];
        v138 = LANES128(v114).n128_u32[2];
      }
      else {
        if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) == 0) {
          v135 = a2[53];
          v136 = a2[54];
          v137 = v114;
        LABEL_104:
          v139 = vaddq_f32(
              v137,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v127, LANES128(v129).n128_f32[0]), v135,
                      COERCE_AS(float32x2_t, LANES128(v129).n128_u64[0]), 1),
                  v136, v129, 2));
          LANES128(v140).n128_u64[0] = 0x3E8000003E800000LL;
          LANES128(v140).n128_u64[1] = 0x3E8000003E800000LL;
          v356 = vmulq_f32(
              vaddq_f32(vsubq_f32(v355, v114), vsubq_f32(v355, v139)), v140);
          LANES128(v141).n128_u64[0] = 0x3F0000003F000000LL;
          LANES128(v141).n128_u64[1] = 0x3F0000003F000000LL;
          v354 = vmulq_f32(vsubq_f32(v139, v114), v141);
          goto LABEL_105;
        }
        LANES128(v127).n128_u64[0] = *v132 | ((unsigned __int64)*v134 << 32);
        LANES128(v127).n128_u64[1] = *v133;
        LANES128(v135).n128_u64[0] =
            v132[1] | ((unsigned __int64)v134[1] << 32);
        v138 = v133[3];
        LANES128(v135).n128_u64[1] = v133[1];
        LANES128(v136).n128_u64[0] =
            v132[2] | ((unsigned __int64)v134[2] << 32);
        LANES128(v136).n128_u64[1] = v133[2];
        LANES128(v137).n128_u64[0] =
            v132[3] | ((unsigned __int64)v134[3] << 32);
      }
      LANES128(v137).n128_u64[1] = v138;
      goto LABEL_104;
    }
  }
  return result;
}

__int64 game_82dd50(__int64 result, unsigned __int64* a2, char a3)
{
  _DWORD* v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  char v14;
  unsigned __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  char v23;
  unsigned __int64* v24;
  int v25;
  __int64 v26;
  unsigned __int64* v27;

  v3 = (_DWORD*)a2[1];
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed530,
                            memory_order_acquire) &
       1) == 0) {
    v26 = result;
    v23 = a3;
    v24 = a2;
    v25 = __cxa_guard_acquire((__int64)&GameData_21ed530);
    result = v26;
    a2 = v24;
    a3 = v23;
    if (v25 != 0) {
      GameData_21ed528 = 1598310733;
      __cxa_guard_release((__int64)&GameData_21ed530);
      result = v26;
      a2 = v24;
      a3 = v23;
    }
  }
  if (v3 == nullptr) {
    return result;
  }
  if (*v3 != GameData_21ed528) {
    return result;
  }
  v4 = *a2;
  if (*a2 == 0) {
    return result;
  }
  v5 = *(_QWORD*)(result + 8);
  v6 = *(_QWORD*)(v5 + 16);
  if (v6 == 0 || *(_QWORD*)(v5 + 32) == 0) {
    return result;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = *a2;
    if (v4 >= v6) {
      v9 = v4 % v6;
    }
  }
  else {
    v9 = v8 & v4;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(v5 + 8) + 8 * v9);
  if (v10 == nullptr) {
    return result;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    return result;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v4 == v13) {
        if (v11[2] == v4) {
          goto LABEL_29;
        }
      }
      else if ((v13 & v8) != v9) {
        return result;
      }
      v11 = (_QWORD*)*v11;
      if (v11 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v4 == v12) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      return result;
    }
  LABEL_18:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      return result;
    }
  }
  if (v11[2] != v4) {
    goto LABEL_18;
  }
LABEL_29:
  v14 = a3;
  result = game_GameVariableTable_Find(*(_QWORD**)(result + 8), a2);
  v15 = (unsigned __int64*)result;
  if ((v14 & 1) != 0) {
    if (result != 0 && *(_DWORD*)(result + 32) != 1) {
      *(_DWORD*)(result + 32) = 1;
      if ((*(_BYTE*)(v5 + 3932768) & 0xAE) == 0) {
        result = GameData_22400f8;
        if (GameData_22400f8 != 0) {
          result = GameRoutine_12274e0(GameData_22400f8, v15);
        }
      }
      v17 = v15[11];
      v16 = v15[12];
      if (v16 != v17) {
        while (1) {
          v27 = v15;
          v18 = *(_QWORD*)(v17 + 32);
          if (v18 == 0) {
            break;
          }
          result = (*(__int64 (**)(__int64, unsigned __int64**))(
              *(_QWORD*)v18 + 48LL))(v18, &v27);
          v17 += 48LL;
          if (v17 == v16) {
            return result;
          }
        }
        goto LABEL_50;
      }
    }
  }
  else if (result != 0) {
    v19 = *(_DWORD*)(result + 28);
    if (*(_DWORD*)(result + 32) != v19) {
      *(_DWORD*)(result + 32) = v19;
      if ((*(_BYTE*)(v5 + 3932768) & 0xAE) == 0) {
        result = GameData_22400f8;
        if (GameData_22400f8 != 0) {
          result = GameRoutine_12274e0(GameData_22400f8, v15);
        }
      }
      v21 = v15[11];
      v20 = v15[12];
      if (v20 != v21) {
        while (1) {
          v27 = v15;
          v22 = *(_QWORD*)(v21 + 32);
          if (v22 == 0) {
            break;
          }
          result = (*(__int64 (**)(__int64, unsigned __int64**))(
              *(_QWORD*)v22 + 48LL))(v22, &v27);
          v21 += 48LL;
          if (v21 == v20) {
            return result;
          }
        }
      LABEL_50:
        GameRoutine_60a310();
      }
    }
  }
  return result;
}

void game_cb4360(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = a1[1];
  v2 = a1[2];
  v4 = fw_memory_g_heap_manager_ptr;
  while (v1 != v2) {
    a1[2] = v2 - 176;
    v5 = *(_QWORD**)(v2 - 16);
    if (v5 == (_QWORD*)(v2 - 48)) {
      v6 = 32;
    }
    else {
      if (v5 == nullptr) {
        goto LABEL_9;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
  LABEL_9:
    v7 = *(_QWORD**)(v2 - 64);
    if (v7 == (_QWORD*)(v2 - 96)) {
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
    v9 = *(_QWORD**)(v2 - 112);
    if (v9 == (_QWORD*)(v2 - 144)) {
      v10 = 32;
    }
    else {
      if (v9 == nullptr) {
        goto LABEL_19;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
  LABEL_19:
    if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
      v11 = *(_QWORD*)(v2 - 160);
      if (v11 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v11);
      }
    }
    v2 = a1[2];
  }
  if (*a1 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v13, *a1);
  }
}

__int64 game_d5fb40(__int64 a1, int* a2)
{
  int v2;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;

  v2 = *a2;
  *(_BYTE*)(a1 + 4) = *((_BYTE*)a2 + 4);
  *(_DWORD*)a1 = v2;
  if ((int*)a1 != a2) {
    GameRoutine_6b7aa0(
        a1 + 8, *((__int64**)a2 + 1), *((__int64**)a2 + 2),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*((_QWORD*)a2 + 2) - *((_QWORD*)a2 + 1)) >> 3));
    v5 = (__int64*)(a1 + 32);
    v6 = *((unsigned __int8*)a2 + 32);
    if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
      v9 = (v6 & 1) == 0;
      v10 = v6 >> 1;
      if (v9) {
        v11 = (__int64)a2 + 33;
      }
      else {
        v11 = *((_QWORD*)a2 + 6);
      }
      if (v9) {
        v12 = v10;
      }
      else {
        v12 = *((_QWORD*)a2 + 5);
      }
      SpineModel_64dde0(v5, v11, v12);
    }
    else if ((v6 & 1) != 0) {
      GameRoutine_64df20(v5, *((_QWORD*)a2 + 6), *((_QWORD*)a2 + 5));
    }
    else {
      v7 = *((_QWORD*)a2 + 4);
      v8 = *((_QWORD*)a2 + 6);
      *(_QWORD*)(a1 + 40) = *((_QWORD*)a2 + 5);
      *(_QWORD*)(a1 + 48) = v8;
      *v5 = v7;
    }
    v13 = (__int64*)(a1 + 56);
    v14 = *((unsigned __int8*)a2 + 56);
    if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
      v17 = (v14 & 1) == 0;
      v18 = v14 >> 1;
      if (v17) {
        v19 = (__int64)a2 + 57;
      }
      else {
        v19 = *((_QWORD*)a2 + 9);
      }
      if (v17) {
        v20 = v18;
      }
      else {
        v20 = *((_QWORD*)a2 + 8);
      }
      SpineModel_64dde0(v13, v19, v20);
    }
    else if ((v14 & 1) != 0) {
      GameRoutine_64df20(v13, *((_QWORD*)a2 + 9), *((_QWORD*)a2 + 8));
    }
    else {
      v15 = *((_QWORD*)a2 + 7);
      v16 = *((_QWORD*)a2 + 9);
      *(_QWORD*)(a1 + 64) = *((_QWORD*)a2 + 8);
      *(_QWORD*)(a1 + 72) = v16;
      *v13 = v15;
    }
  }
  return a1;
}

void game_fa4f80(__int64 a1, __int64 a2)
{
  int v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    __int64 v21;
    _QWORD* v22;
    __int64 v23;
  } v21_;
  unsigned __int64 v24[2];

  v21_.v22 = nullptr;
  v21_.v23 = 0;
  v21_.v21 = 0;
  v24[1] = (unsigned __int64)&GameData_1aad41d;
  v24[0] = game_HashString((__int64)&GameData_1aad41d);
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v24);
    if (v5 != 0) {
      v4 = *(_DWORD*)(v5 + 32);
    }
    else {
      v4 = 0;
    }
  }
  if ((signed __int32)*(_DWORD*)(*GameData_212ea58 + 612) <= v4) {
    GameRoutine_1005e20(&v21_.v21, a2, 2u);
    GameRoutine_1005e20(&v21_.v21, a2, 0);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2229d70,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2229d70) != 0) {
    GameData_2229ab8 = 0;
    GameData_2229ac0 = (__int64)&GameRoutine_fa5440;
    GameData_2229ab0 = 13;
    GameData_2229b30 = 13;
    GameData_2229b70 = 13;
    GameData_2229bb0 = 13;
    GameData_2229bf0 = 13;
    GameData_2229c30 = 13;
    GameData_2229c70 = 13;
    GameData_2229a70 = 2;
    GameData_2229af0 = 2;
    GameData_2229b10 = 2;
    GameData_2229b38 = 0;
    GameData_2229b40 = (__int64)GameRoutine_fa54a0;
    GameData_2229c80 = (__int64)ProcCmdBtlSeqBattleGrow_fa5db0;
    GameData_2229cf0 = 2;
    GameData_2229a78 = 0;
    GameData_2229a80 = 0;
    GameData_2229a88 = 0;
    GameData_2229a90 = 1;
    GameData_2229a98 = 0;
    GameData_2229aa0 = 0;
    GameData_2229b78 = 0;
    GameData_2229b80 = (__int64)GameRoutine_fa5660;
    GameData_2229aa8 = 0;
    GameData_2229ac8 = 0;
    GameData_2229ad0 = 0;
    GameData_2229ad8 = 0;
    GameData_2229ae0 = 0;
    GameData_2229ae8 = 0;
    GameData_2229af8 = 0;
    GameData_2229b00 = 0;
    GameData_2229b08 = 0;
    GameData_2229b18 = 0;
    GameData_2229bb8 = 0;
    GameData_2229bc0 = (__int64)GameHr_fa5670;
    GameData_2229b20 = 0;
    GameData_2229b28 = 0;
    GameData_2229b48 = 0;
    GameData_2229b50 = 0;
    GameData_2229b58 = 0;
    GameData_2229b60 = 0;
    GameData_2229b68 = 0;
    GameData_2229b88 = 0;
    GameData_2229b90 = 0;
    GameData_2229bf8 = 0;
    GameData_2229c00 = (__int64)GameRoutine_fa5840;
    GameData_2229b98 = 0;
    GameData_2229ba0 = 0;
    GameData_2229ba8 = 0;
    GameData_2229bc8 = 0;
    GameData_2229bd0 = 0;
    GameData_2229bd8 = 0;
    GameData_2229be0 = 0;
    GameData_2229be8 = 0;
    GameData_2229c08 = 0;
    GameData_2229c10 = 0;
    GameData_2229c18 = 0;
    GameData_2229c20 = 0;
    GameData_2229c28 = 0;
    GameData_2229c38 = 0;
    GameData_2229c40 =
        (__int64)game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_UpdateLearn;
    GameData_2229c48 = 0;
    GameData_2229c50 = 0;
    GameData_2229c58 = 0;
    GameData_2229c60 = 0;
    GameData_2229c68 = 0;
    GameData_2229c78 = 0;
    GameData_2229c88 = 0;
    GameData_2229c90 = 0;
    GameData_2229c98 = 0;
    GameData_2229ca0 = 0;
    GameData_2229ca8 = 0;
    GameData_2229cb0 = 12;
    GameData_2229cc8 = 0;
    GameData_2229cc0 = 0;
    GameData_2229cb8 = 0;
    GameData_2229cd0 = 1;
    GameData_2229cd8 = 0;
    GameData_2229ce0 = 0;
    GameData_2229ce8 = 0;
    GameData_2229cf8 = 0;
    GameData_2229d00 = 0;
    GameData_2229d08 = 0;
    GameData_2229d10 = 3;
    GameData_2229d18 = 0;
    GameData_2229d20 = 0;
    GameData_2229d28 = 0;
    GameData_2229d30 = 0;
    GameData_2229d58 = 0;
    GameData_2229d60 = 0;
    GameData_2229d68 = 0;
    GameData_2229d50 = 0;
    GameData_2229d48 = 0;
    GameData_2229d40 = 0;
    GameData_2229d38 = 0;
    __cxa_guard_release((__int64)&GameData_2229d70);
  }
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      416, 16, 0);
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
  v9 = v21_.v21;
  v10 = v21_.v22;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = 0;
  v11 = (unsigned __int64)v10 - v9;
  *(_QWORD*)v7 = game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_vtable;
  *(_QWORD*)(v7 + 168) = 0;
  if (v10 != (_QWORD*)v9) {
    if ((v11 & 0x8000000000000000LL) != 0) {
      GameRoutine_fa64f0();
    }
    v12 = fw_memory_HeapManager_Allocate(*v6, (__int64)v10 - v9, 16, 0);
    *(_QWORD*)(v7 + 152) = v12;
    *(_QWORD*)(v7 + 160) = v12;
    v13 = (_QWORD*)v9;
    *(_QWORD*)(v7 + 168) = v12 + v11;
    do {
      *(_QWORD*)v12 = *v13;
      v14 = v13[1];
      *(_QWORD*)(v12 + 8) = v14;
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                  memory_order_relaxed);
      }
      v13 += 2;
      v12 += 16;
    } while (v13 != v10);
    *(_QWORD*)(v7 + 160) = v12;
  }
  *(_DWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 264) = 0;
  *(_QWORD*)(v7 + 272) = 0;
  *(_QWORD*)(v7 + 280) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 192) = 0;
  *(_QWORD*)(v7 + 200) = 0;
  *(_DWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 218) = 0;
  *(_QWORD*)(v7 + 226) = 0;
  *(_QWORD*)(v7 + 234) = 0;
  *(_QWORD*)(v7 + 242) = 0;
  v15 = *GameData_212c868;
  *(_QWORD*)(v7 + 249) = 0;
  if (v15 != 0) {
    v16 = *(_QWORD*)(v15 + 72) - *(_QWORD*)(v15 + 64);
    if ((unsigned int)((unsigned __int64)v16 >> 3) != 0) {
      UnitMastery_7fe910((__int64*)(v7 + 264), (int)(v16 >> 3));
      v17 = *(_QWORD*)(v7 + 264);
      v18 = *(_QWORD*)(v7 + 272);
      if (v17 != v18) {
        memset(v17, 0, v18 - v17);
      }
    }
  }
  *(_DWORD*)(v7 + 312) = 0;
  *(_QWORD*)(v7 + 296) = 0;
  *(_QWORD*)(v7 + 304) = 0;
  *(_QWORD*)(v7 + 288) = 0;
  *(_QWORD*)(v7 + 320) = 0;
  *(_QWORD*)(v7 + 328) = 0;
  *(_QWORD*)(v7 + 336) = 0;
  *(_QWORD*)(v7 + 344) = 0;
  *(_QWORD*)(v7 + 352) = 0;
  *(_QWORD*)(v7 + 360) = 0;
  *(_QWORD*)(v7 + 368) = 0;
  *(_QWORD*)(v7 + 376) = 0;
  *(_QWORD*)(v7 + 384) = 0;
  *(_QWORD*)(v7 + 392) = 0;
  *(_QWORD*)(v7 + 400) = 0;
  *(_QWORD*)(v7 + 408) = 0;
  ProcInst_657850(v7, (__int64)&GameData_2229a70,
                  (__int64)"ProcCmdBtlSeqBattleGrow", 1, a1);
  if (v9 != 0) {
    if (v10 == (_QWORD*)v9) {
      goto LABEL_27;
    }
    do {
      v19 = *(v10 - 1);
      if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
      }
      v10 -= 2;
    } while (v10 != (_QWORD*)v9);
    v9 = v21_.v21;
    if (v21_.v21 != 0) {
    LABEL_27:
      v20 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v20, v9);
    }
  }
}

__int64 game_10d4680(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  int v23;
  float v24;
  float v25;
  unsigned __int8 explicit;
  __int64* v27;
  int v29;
  float v30;

  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = 0x1.0000000000000p+0f;
  if (*GameData_212d448[0] != 0) {
    v3 = *(_QWORD*)(*GameData_212d448[0] + 8);
    if (v3 != 0 && (*(_BYTE*)(v3 + 113) & 0x80) != 0) {
      v1 = *(float*)(*(_QWORD*)GameData_212d270 + 456LL);
    }
  }
  v4 = game_script_hub_g_frame_counter_ptr[0];
  v5 = v1 * (float)(*(float*)(a1 + 48) * *(float*)(a1 + 44));
  CinematicZoom_10e0dc0(
      *GameData_212fff0[0],
      v5 *
          (float)((float)(*(float*)(*(_QWORD*)
                                        game_script_hub_g_frame_counter_ptr[0] +
                                    48LL) *
                          0x1.0aef000000000p+4f) /
                  0x1.f400000000000p+9f)),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
  CinematicZoom_10e1030(0),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
  v6 = *(_QWORD*)v4;
  v8 = v5 * v7;
  *(float*)(*(_QWORD*)v4 + 156LL) = v8;
  v9 = *(float*)(a1 + 40);
  if (v9 >= 0x0.0p+0f) {
    v10 = (float)(*(float*)(v6 + 160) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
    v11 = *(float*)(a1 + 24);
    if (*(_BYTE*)(a1 + 36) == 1) {
      if (v11 == 0x0.0p+0f) {
        v9 = v11 - v10;
      }
      else if (v11 < (float)(v9 + v10) && v9 <= v11) {
        v9 = v11 - v10;
      }
    }
    v13 = *(float*)(a1 + 28);
    v14 = *(float*)(a1 + 32);
    v15 = v10 + v9;
    *(float*)(a1 + 40) = v15;
    if (v15 > (float)(v14 + (float)(v11 + fmaxf(v13, 0x0.0p+0f)))) {
      *(_DWORD*)(a1 + 40) = -1082130432;
    }
  }
  CinematicZoom_10e1030(1),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
  v17 = *(float*)(a1 + 40);
  if (v17 < 0x0.0p+0f) {
    v18 = *(float*)(a1 + 8);
    goto LABEL_26;
  }
  v19 = *(float*)(a1 + 24);
  if (v17 == 0x0.0p+0f && v19 == 0x0.0p+0f) {
    goto LABEL_20;
  }
  if (v17 <= v19) {
    v22 = *(float*)(a1 + 8);
    v21 = *(float*)(a1 + 12);
    v23 = *(_DWORD*)(a1 + 16);
  }
  else {
    v20 = v19 + fmaxf(*(float*)(a1 + 28), 0x0.0p+0f);
    if (v20 >= v17) {
    LABEL_20:
      v18 = *(float*)(a1 + 12);
      goto LABEL_26;
    }
    v21 = *(float*)(a1 + 8);
    v22 = *(float*)(a1 + 12);
    v17 = v17 - v20;
    v19 = *(float*)(a1 + 32);
    v23 = *(_DWORD*)(a1 + 20);
  }
  v24 = v16;
  v18 = task_618640(v23, v22, v21, v17, v19),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
  v16 = v24;
LABEL_26:
  v25 = v16 * v18;
  if (v25 <= 0x0.0p+0f) {
    v25 = 0x1.4f8b580000000p-17f;
  }
  *(float*)(*(_QWORD*)v4 + 316LL) = v25;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v27 = GameData_212c838;
  if ((explicit & 1) == 0) {
    v30 = v25;
    v29 = __cxa_guard_acquire((__int64)GameData_212c840),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
    v25 = v30;
    v27 = GameData_212c838;
    if (v29 != 0) {
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c838) = 0;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v27 + 8) = 0;
      *v27 = 0;
      v27[1] = 0;
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v27) = 0;
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v27) = 0;
      *((_BYTE*)((char*)0x40LL) + (_QWORD)v27) = 0;
      *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v27) = 0;
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v27) =
          (_UNKNOWN*)1065353216;
      game_14a0820(GameData_212c838),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
      GameRoutine_2b0(),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
      __cxa_guard_release((__int64)GameData_212c840),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
      v25 = v30;
      v27 = GameData_212c838;
    }
  }
  *(float*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v27) = v8 * v25;
  return GameRoutine_19ef490(*(float*)(a1 + 44) > 0x1.0000000000000p+0f);
}

__int64 game_11e0320(unsigned __int8* a1)
{
  _BOOL4 v2;
  _BOOL4 v3;
  _BOOL4 v4;
  _BOOL4 v5;
  _BOOL4 v6;
  _BOOL4 v7;
  _BOOL4 v8;
  _BOOL4 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  int v12;
  unsigned __int8* v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  char v17;
  char v18;
  __int64 v19;
  struct {
    _QWORD v21[2];
    char* v22;
  } v21_;

  v2 = (GameRoutine_11ddb00((__int64)GameData_1ac8466) & 1) != 0 ||
       GameRoutine_11ddc40(GameData_1ac8466);
  v3 = (GameRoutine_11ddb00((__int64)GameData_1af282e) & 1) != 0 ||
       GameRoutine_11ddc40(GameData_1af282e);
  v4 = (GameRoutine_11ddb00((__int64)GameData_1a8ab53) & 1) != 0 ||
       GameRoutine_11ddc40(GameData_1a8ab53);
  v5 = (GameRoutine_11ddb00((__int64)GameData_1af66ca) & 1) != 0 ||
       GameRoutine_11ddc40(GameData_1af66ca);
  v6 = (GameRoutine_11ddb00((__int64)GameData_1aad7f1) & 1) != 0 ||
       GameRoutine_11ddc40(GameData_1aad7f1);
  v7 = (GameRoutine_11ddb00((__int64)GameData_1ae33f4) & 1) != 0 ||
       GameRoutine_11ddc40(GameData_1ae33f4);
  v8 = (GameRoutine_11ddb00((__int64)GameData_1afa6de) & 1) != 0 ||
       GameRoutine_11ddc40(GameData_1afa6de);
  v9 = (GameRoutine_11ddb00((__int64)GameData_1af2841) & 1) != 0 ||
       GameRoutine_11ddc40(GameData_1af2841);
  v10 = *a1;
  v11 = *((_QWORD*)a1 + 1);
  if ((v10 & 1) == 0) {
    v11 = v10 >> 1;
  }
  if (v11 <= 0x2C) {
    fs_60a230();
  }
  v12 = v3 + v2 + v4 + v5 + v6 + v7 + v8;
  if ((v10 & 1) != 0) {
    v13 = *((unsigned __int8**)a1 + 2);
  }
  else {
    v13 = a1 + 1;
  }
  v14 = v11 - 45;
  if (v11 - 45 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v14 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v16,
                                                16, 0);
    v21_.v21[1] = v14;
    v21_.v22 = v15;
    v21_.v21[0] = v16 | 1;
  }
  else {
    LOBYTE(v21_.v21[0]) = 2 * v14;
    v15 = (char*)v21_.v21 + 1;
    if (v11 == 45) {
      goto LABEL_39;
    }
  }
  memmove((__int64)v15, (__int64)(v13 + 45), v14);
LABEL_39:
  v15[v14] = 0;
  v17 = GameRoutine_11de4f0(v12 + v9, (unsigned __int8*)v21_.v21);
  if ((v21_.v21[0] & 1) != 0 && v21_.v22 != nullptr) {
    v18 = v17;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  (__int64)v21_.v22);
    v17 = v18;
  }
  return v17 & 1;
}

__int64 game_12f2800(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _WORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v28;

  v4 = game_TransporterConst_List_instance__ptr[0];
  v5 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  if (*(int*)(v5 + 72) >= 1) {
    v8 = result;
    v9 = 0;
    v10 = 0;
    v11 = GameData_212c878[0];
    v12 = GameData_212cd90[0];
    do {
      v14 = *(_QWORD*)(v5 + 8);
      v15 = (_WORD*)(v14 + v9 + 4);
      if (*v15 == 0 || *(_WORD*)(v14 + v9 + 2) == 0) {
        goto LABEL_5;
      }
      v16 = *v11;
      v17 = *(_QWORD*)(*v11 + 64);
      v28 = *(_QWORD*)(v17 + 8LL * *(unsigned __int16*)(v14 + v9 + 4));
      if (*(_QWORD*)v12 != 0) {
        result = (__int64)GameRoutine_12f61a0((_QWORD*)(*(_QWORD*)v12 + 264LL),
                                              &v28);
        if (result != 0) {
          v13 = *(_QWORD*)(v8 + 32);
          LODWORD(v28) = v10;
          if (v13 == 0) {
            goto LABEL_45;
          }
          goto LABEL_4;
        }
        v16 = *v11;
        v17 = *(_QWORD*)(*v11 + 64);
      }
      v18 = (unsigned __int16)*v15;
      v19 = *(_QWORD*)(v17 + 8 * v18);
      v20 = *(unsigned __int8*)(v19 + 72);
      if (v20 <= 7) {
        v21 = *(_QWORD*)v12;
        v28 = v19;
        if (v21 == 0 || (result = (__int64)GameRoutine_12f61a0(
                             (_QWORD*)(v21 + 264), &v28)) == 0) {
          v13 = *(_QWORD*)(a2 + 32);
          LODWORD(v28) = v10;
          if (v13 == 0) {
            goto LABEL_45;
          }
          goto LABEL_4;
        }
        v16 = *v11;
        v18 = (unsigned __int16)*v15;
        v19 = *(_QWORD*)(*(_QWORD*)(*v11 + 64) + 8 * v18);
        v20 = *(unsigned __int8*)(v19 + 72);
      }
      if (v20 == 14) {
        v22 = *(unsigned __int8*)(v19 + 73);
        if ((unsigned int)(v22 - 2) < 2) {
          goto LABEL_20;
        }
        if (v22 == 17) {
          result = *(_QWORD*)(v19 + 376);
          if (result != 0) {
            v23 = *(_DWORD*)(v14 + v9 + 8);
            if ((v23 & 0x3FF0) != 0) {
              result = game_996d60(result, ((v23 >> 4) & 0x3FF) - 1, 1000);
              if (result != 0) {
                v18 = (unsigned __int16)*v15;
                v16 = *v11;
                if (*(_QWORD*)(result + 40) != 0 &&
                    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v16 + 64) + 8 * v18) +
                              73LL) == 2) {
                LABEL_21:
                  LODWORD(v28) = v10;
                  v13 = *(_QWORD*)(a3 + 32);
                  if (v13 == 0) {
                    goto LABEL_45;
                  }
                  goto LABEL_4;
                }
              }
              else {
                v18 = (unsigned __int16)*v15;
                v16 = *v11;
              }
            }
          }
          goto LABEL_32;
        }
        if (v22 == 15) {
        LABEL_20:
          if (*(unsigned __int8*)(v19 + 88) >>
                      ((*(_BYTE*)(v14 + v9 + 7) & 8) != 0) !=
                  0 &&
              v22 == 2) {
            goto LABEL_21;
          }
        }
      }
    LABEL_32:
      v24 = *(_QWORD*)(*(_QWORD*)(v16 + 64) + 8 * v18);
      if (*(_BYTE*)(v24 + 72) != 14) {
        goto LABEL_5;
      }
      v25 = *(unsigned __int8*)(v24 + 73);
      if (v25 > 0x11) {
        goto LABEL_5;
      }
      if (((1 << v25) & 0x800C) != 0) {
        if (*(unsigned __int8*)(v24 + 88) >>
                ((*(_BYTE*)(v14 + v9 + 7) & 8) != 0) ==
            0) {
          goto LABEL_5;
        }
      }
      else if (((1 << v25) & 0x10030) == 0) {
        if (v25 != 17) {
          goto LABEL_5;
        }
        result = *(_QWORD*)(v24 + 376);
        if (result == 0) {
          goto LABEL_5;
        }
        v26 = *(_DWORD*)(v14 + v9 + 8);
        if ((v26 & 0x3FF0) == 0) {
          goto LABEL_5;
        }
        result = game_996d60(result, ((v26 >> 4) & 0x3FF) - 1, 1000);
        if (result == 0 || *(_QWORD*)(result + 40) == 0) {
          goto LABEL_5;
        }
        v25 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v11 + 64) +
                                             8LL * (unsigned __int16)*v15) +
                                  73LL);
      }
      if (v25 == 5) {
        v13 = *(_QWORD*)(a4 + 32);
        LODWORD(v28) = v10;
        if (v13 == 0) {
        LABEL_45:
          GameRoutine_60a310();
        }
      LABEL_4:
        result = (*(__int64 (**)(__int64, __int64*, __int64))(
            *(_QWORD*)v13 + 48LL))(v13, &v28, v14 + v9 + 4);
      }
    LABEL_5:
      ++v10;
      v9 += 12;
      v5 = *(_QWORD*)(*(_QWORD*)v4 + 8LL);
    } while (v10 < *(int*)(v5 + 72));
  }
  return result;
}

__int64 game_15fc820(__int64 a1, float32x4_t* a2)
{
  __int64 result;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  float32x4_t v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  __int128 v43;
  __int128 v44;
  float32x4_t v45;
  __int64 v46;
  float v47;
  float v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64* v55;
  __int64 v56;
  float v57;
  float v58;
  float v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  float v64;
  float v65;
  float v66;
  float32x4_t v67;
  int8x16_t v68;
  float v69;
  float v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  unsigned int v75;
  __int64 v76;
  int v77;
  const char* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  int v97;
  int v98;
  char v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  __int64* v103;
  __int64 v104;
  __int64 v105;
  __int64* v106;
  __int64* v107;
  char v108;
  unsigned int v109;
  __int64 v110;
  int v111;
  unsigned __int8 v112;
  __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  bool v116;
  const char* v117;
  __int64 v118;
  char v119;
  bool v120;
  unsigned __int64 v121;
  char* v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  int v126;
  int v127;
  char v128;
  __int64 v129;
  __int64 v130;
  char* v131;
  char* v132;
  const char* v133;
  unsigned __int64 v134;
  unsigned __int64* v135;
  __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64 v139;
  const char* v140;
  __int64 v141;
  __int64* v142;
  __int64 v143;
  int v144;
  __int64 v145;
  __int64 v146;
  __int64* v147;
  __int64* v148;
  __int64 v149;
  __int64* v150;
  __int64* v151;
  const char* v152;
  __int64 v153;
  char v154;
  __int64 v155;
  __int64 v156;
  _DWORD* v157;
  __int64 v158;
  __int64 v159;
  __int64* v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64* v167;
  __int64 v168;
  char* v169;
  unsigned __int32 v170;
  __int64 v171;
  __int64 v172;
  int v173;
  int v174;
  __int64 v175;
  int v176;
  __int64 v177;
  __int64 v178;
  _BOOL4 v179;
  __int128 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  int32x4_t* v184;
  __int64 v185;
  __int64 v186;
  unsigned int v187;
  unsigned int v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64* v192;
  __int64* v193;
  __int64* v194;
  __int64* v195;
  __int64 v196;
  __int64 v197;
  int v198;
  __int64 v199;
  __int64 v200;
  __int64* v201;
  __int64* v202;
  __int64 v203;
  __int64 v204;
  __int64* v205;
  __int64* v206;
  __int64 v207;
  __int64 v208;
  __int64* v209;
  __int64 v210;
  __int64 v211;
  __int16 v212;
  long double* v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64* v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64* v225;
  __int64* v226;
  int v227;
  __int64 v228;
  __int64 v229;
  unsigned __int64 v230;
  unsigned int* v231;
  long double* v232;
  int v233;
  int v234;
  int v235;
  unsigned int v236;
  int i;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64* v241;
  __int64* v242;
  _DWORD* v243;
  _DWORD* v244;
  int v245;
  unsigned int v246;
  _QWORD* v247;
  __int64 v248;
  int* v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64* v255;
  __int64* v256;
  __int64 v257;
  __int64 v258;
  unsigned int v259;
  char* v261;
  long double* v262;
  unsigned __int64 v263;
  unsigned int* v264;
  long double* v265;
  int v266;
  unsigned int v267;
  int j;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  int v275;
  __int64 v276;
  unsigned int v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  unsigned __int64 v281;
  __int64 v282;
  int v283;
  __int64 v284;
  __int64 v285;
  __int64* v286;
  __int64* v287;
  __int64 v288;
  __int64 v289;
  __int64* v290;
  __int64 v291;
  int v292;
  __int64 v293;
  __int64 v294;
  __int64* v295;
  __int64* v296;
  __int64 v297;
  __int64* v298;
  __int64* v299;
  __int64 v300;
  __int64 v301;
  char* v302;
  char* v303;
  __int64 v304;
  __int64 v305;
  char* v306;
  char* v307;
  __int64 v308;
  __int64 v309;
  char* v310;
  char* v311;
  __int64 v312;
  __int64 v313;
  char* v314;
  char* v315;
  __int64 v316;
  __int64 v317;
  char* v318;
  char* v319;
  __int64 v320;
  __int64 v321;
  char* v322;
  char* v323;
  __int64 v324;
  unsigned int v325;
  __int64 v326;
  __int64 v327;
  char* v328;
  __int64 v329;
  __int64 v330;
  char* v331;
  __int64 v332;
  __int64 v333;
  char* v334;
  __int64 v335;
  __int64 v336;
  char* v337;
  int v338;
  int v339;
  __int64 v340;
  __int64 v341;
  __int64* v342;
  float v343;
  float v344;
  __int64 v345;
  __int64 v346;
  _BOOL4 v347;
  __int64 v348;
  __int64 v349;
  __int64 v350;
  __int64 v351;
  int v352;
  __int64 v353;
  char v354;
  char v355;
  int v356;
  __int64 v357;
  __int64 v358;
  __int64 v359;
  float32x4_t v360;
  __int64* v361;
  const char* v362;
  __int64* v363;
  float32x4_t v364;
  __int64 v365;
  struct {
    long double v366;
    __int128 v367;
    __int128 v368;
    __int128 v369;
  } v366_;
  struct {
    long double v370;
    __int128 v371;
    __int128 v372;
    __int128 v373;
  } v370_;
  struct {
    float32x4_t v374;
    const char* v375;
    int v376;
  } v374_;
  __int64 v377;
  _DWORD v378[3];

  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
  result = (__int64)Situation_7641b0(*GameData_212ce90[0]),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v5 = *(unsigned __int8*)(a1 + 2372);
  v365 = result;
  if (v5 == 0) {
    return result;
  }
  v6 = *(_DWORD*)(a1 + 96);
  v7 = *(unsigned __int8*)(a1 + 2394);
  v9 = *(_QWORD*)(a1 + 24);
  v8 = *(_QWORD*)(a1 + 32);
  v10 = result;
  v11 = game_UnitPool_Get((_BYTE*)(a1 + 2372)),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (v11 != nullptr) {
    v12 = (__int64)v11;
    if (MapUtil_7536a0((_BOOL8)v11)) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v12 + 48) + 16LL))((void*)(&v364), v12 + 48),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      LANES128(v364).n128_f32[1] =
          LANES128(v364).n128_f32[1] + 0x1.0000000000000p+1f;
      v13 = *GameData_212cfc8[0] + 16;
      v370_.v370 =
          ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v13 + 16LL))(v13),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v370_.v371 = v14;
      v370_.v372 = v15;
      v370_.v373 = v16;
      v366_.v366 =
          ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v13 + 24LL))(v13),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v366_.v367 = v17;
      v366_.v368 = v18;
      v366_.v369 = v19;
      LANES128(v20).n128_u64[0] =
          LANES64_OF(GameRoutine_a6c440(&v364, (__int128*)&v370_.v370,
                                        (float32x4_t*)&v366_.v366))
              .n64_u64[0],
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      if (LANES128(v20).n128_f32[2] > 0x0.0p+0f) {
        goto LABEL_605;
      }
      v21 = *(_QWORD*)(a1 + 8);
      v360 = v20;
      if (v21 != 0) {
        v22 = std___1___shared_weak_count_lock(v21),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v23 = ui_LayoutAccessor_empty__ptr[0];
        if (v22 != 0) {
          if (*(_QWORD*)a1 != 0) {
            v23 = *(__int64**)a1;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v358 = v8;
            v24 = v10;
            v25 = v9;
            v26 = v6;
            v27 = v7;
            v28 = v23;
            (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            std___1___shared_weak_count___release_weak(v22),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            v23 = v28;
            v7 = v27;
            v6 = v26;
            v9 = v25;
            v10 = v24;
            v8 = v358;
          }
        }
      }
      else {
        v23 = ui_LayoutAccessor_empty__ptr[0];
      }
      LayoutAccessor_155e830((__int64)v23, 1),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v38 = *GameData_212cfc8[0] + 16;
      v37 = *(_QWORD*)v38;
      v374_.v374 = vaddq_f32(v364, *a2);
      v370_.v370 = ((long double (*)(__int64)) * (_QWORD*)(v37 + 16))(v38),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v370_.v371 = v39;
      v370_.v372 = v40;
      v370_.v373 = v41;
      v366_.v366 =
          ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v38 + 24LL))(v38),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v366_.v367 = v42;
      v366_.v368 = v43;
      v366_.v369 = v44;
      LANES128(v45).n128_u64[0] =
          LANES64_OF(GameRoutine_a6c440(&v374_.v374, (__int128*)&v370_.v370,
                                        (float32x4_t*)&v366_.v366))
              .n64_u64[0],
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v46 = *(_QWORD*)(a1 + 8);
      v47 = fabsf(LANES128_OF(vsubq_f32(v45, v360)).n128_f32[0]) /
            0x1.4000000000000p+5f;
      v48 = fminf(fmaxf(v47, 0x1.0000000000000p-1f), 0x1.0000000000000p+0f);
      if (v46 != 0) {
        v49 = std___1___shared_weak_count_lock(v46),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v50 = ui_LayoutAccessor_empty__ptr[0];
        if (v49 != 0) {
          if (*(_QWORD*)a1 != 0) {
            v50 = *(__int64**)a1;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v51 = v50;
            (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            std___1___shared_weak_count___release_weak(v49),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            v50 = v51;
          }
        }
      }
      else {
        v50 = ui_LayoutAccessor_empty__ptr[0];
      }
      *(float*)&v370_.v370 = v48;
      *((float*)&v370_.v370 + 1) = v48;
      ui_LayoutAccessor_SetScale((__int64)v50, &v370_.v370),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v52 = *(_QWORD*)(a1 + 8);
      if (v52 != 0) {
        v53 = std___1___shared_weak_count_lock(v52),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v54 = ui_LayoutAccessor_empty__ptr[0];
        if (v53 != 0) {
          if (*(_QWORD*)a1 != 0) {
            v54 = *(__int64**)a1;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v55 = v54;
            (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            std___1___shared_weak_count___release_weak(v53),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            v54 = v55;
          }
        }
      }
      else {
        v54 = ui_LayoutAccessor_empty__ptr[0];
      }
      v56 = ui_LayoutAccessor_FindPane(v54, (__int64)"N_Root"),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      if (v56 != 0) {
        v57 = *(float*)(a1 + 2440);
        v58 = (float)(0x1.0000000000000p+0f - v48) * *(float*)(a1 + 2436);
        v59 = *(float*)(a1 + 2432);
        *(_BYTE*)(v56 + 88) |= 0x10u;
        *(float*)(v56 + 52) =
            (float)(v59 - (float)((float)(0x1.0000000000000p+0f -
                                          fminf(fmaxf(v47, 0x0.0p+0f),
                                                0x1.0000000000000p+1f)) *
                                  v57)) -
            v58;
      }
      v60 = *(_QWORD*)(a1 + 8);
      if (v60 != 0) {
        v61 = std___1___shared_weak_count_lock(v60),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v62 = ui_LayoutAccessor_empty__ptr[0];
        if (v61 != 0) {
          if (*(_QWORD*)a1 != 0) {
            v62 = *(__int64**)a1;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v63 = v61;
            (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            std___1___shared_weak_count___release_weak(v63),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
          }
        }
      }
      else {
        v62 = ui_LayoutAccessor_empty__ptr[0];
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v12 + 48) + 16LL))((void*)(&v370_.v370), v12 + 48),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v64 = 0x1.0000000000000p+0f -
            fminf(fmaxf((float)(*(float*)(*GameData_212cfc8[0] + 104) +
                                -0x1.7000000000000p+5f) /
                            0x1.3000000000000p+5f,
                        0x0.0p+0f),
                  0x1.0000000000000p+0f);
      v65 = (float)(0x1.0e00000000000p+9f - LANES128(v360).n128_f32[1]) +
            (float)(v64 * -0x1.8000000000000p+3f);
      v66 = 0x1.0000000000000p+0f - v64;
      v67 = vsubq_f32(*(float32x4_t*)&v370_.v370,
                      *(float32x4_t*)(*GameData_212cfc8[0] + 32));
      v68 = vmulq_f32(v67, v67);
      LANES128(v68).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v68, v68, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
              .n64_u64[0];
      DWORD2(v366_.v366) =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
              .n64_u32[0];
      v69 = v65 + (float)((float)((float)(v65 / 0x1.0e00000000000p+9f) *
                                  -0x1.4000000000000p+3f) *
                          v66);
      v70 = v65 + (float)((float)((float)(v65 / 0x1.0e00000000000p+9f) *
                                  -0x1.8000000000000p+2f) *
                          v66);
      if (v65 <= 0x0.0p+0f) {
        v70 = v69;
      }
      *(float*)&v366_.v366 =
          (float)(LANES128(v360).n128_f32[0] + -0x1.e000000000000p+9f) +
          (float)((float)((float)(LANES128(v360).n128_f32[0] +
                                  -0x1.e000000000000p+9f) /
                          0x1.e000000000000p+9f) *
                  -0x1.0000000000000p+4f);
      *((float*)&v366_.v366 + 1) = v70;
      ui_LayoutAccessor_SetTranslate(v62, (__int64)&v366_.v366),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      if ((*(_BYTE*)(v12 + 419) & 8) != 0) {
      LABEL_605:
        *(_QWORD*)(a1 + 104) = v10;
        if (v10 != 0 && game_Unit_GetJob(v10) != 0) {
          v338 = *(unsigned __int16*)(game_Unit_GetJob(v10) + 16),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
        else {
          v338 = -1;
        }
        *(_DWORD*)(a1 + 2380) = v338;
        *(_DWORD*)(a1 + 2368) = *(_DWORD*)(v12 + 416);
        v339 = *(unsigned __int16*)(game_Unit_GetJob(v12) + 16),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v340 = *(_QWORD*)(a1 + 8);
        *(_DWORD*)(a1 + 2376) = v339;
        if (v340 != 0) {
          v341 = std___1___shared_weak_count_lock(v340),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
          v342 = ui_LayoutAccessor_empty__ptr[0];
          if (v341 != 0) {
            if (*(_QWORD*)a1 != 0) {
              v342 = *(__int64**)a1;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v341 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v10 = v341;
              (*(void (**)(__int64))(*(_QWORD*)v341 + 16LL))(v341),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
              std___1___shared_weak_count___release_weak(v10),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
            }
          }
        }
        else {
          v342 = ui_LayoutAccessor_empty__ptr[0];
        }
        result =
            (*(__int64 (**)(__int64))(*(_QWORD*)(v12 + 152) + 16LL))(v12 + 152),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
        if (v342[2] == 0) {
          goto LABEL_634;
        }
        result = v342[1];
        if (result == 0) {
          goto LABEL_634;
        }
        v344 = v343;
        result = std___1___shared_weak_count_lock(result),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
        if (result == 0) {
          goto LABEL_627;
        }
        v345 = *v342;
        if (*v342 != 0) {
          LODWORD(v10) = *(unsigned __int8*)(v345 + 24);
          v346 = v345 + 152;
          if ((_DWORD)v10 == 0) {
            v346 = 0;
          }
          v347 = v346 != v342[2];
        }
        else {
          v347 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v348 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
          result = std___1___shared_weak_count___release_weak(v348),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
        if (!v347) {
          if ((v10 & 1) == 0) {
          LABEL_634:
            *(_BYTE*)(a1 + 2397) = 1;
            return result;
          }
        }
        else {
        LABEL_627:
          v349 = v342[1];
          if (v349 == 0 || *(_QWORD*)(v349 + 8) == -1) {
            goto LABEL_634;
          }
        }
        v350 = v342[2];
        if (v350 != 0) {
          v351 = *(_QWORD*)(v350 + 24);
          if (v351 != 0) {
            *(_BYTE*)(v351 + 89) = (int)(float)(v344 * 0x1.fe00000000000p+7f);
          }
        }
        goto LABEL_634;
      }
      if (*(_QWORD*)(a1 + 104) == v10 && (GameRoutine_15fedb0(a1) & 1) == 0 &&
          (MapOnMapInfo_15fee80(a1, (__int64)&v365) & 1) == 0 &&
          (GameRoutine_15ff090(a1) & 1) == 0 &&
          (v10 == 0 || *(_DWORD*)(a1 + 2380) ==
                           *(unsigned __int16*)(game_Unit_GetJob(v10) + 16))) {
      LABEL_131:
        if (v12 == v10) {
          v99 = 0;
          v100 = *(_QWORD*)(a1 + 8);
          if (v100 != 0) {
          LABEL_133:
            v101 = std___1___shared_weak_count_lock(v100),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
            v102 = ui_LayoutAccessor_empty__ptr[0];
            if (v101 != 0) {
              if (*(_QWORD*)a1 != 0) {
                v102 = *(__int64**)a1;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v101 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v103 = v102;
                (*(void (**)(__int64))(*(_QWORD*)v101 + 16LL))(v101),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v343 = COERCE_AS(__typeof__(v343),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v42 = COERCE_AS(__typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v43 = COERCE_AS(__typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v44 = COERCE_AS(__typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                std___1___shared_weak_count___release_weak(v101),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v343 = COERCE_AS(__typeof__(v343),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v42 = COERCE_AS(__typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v43 = COERCE_AS(__typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v44 = COERCE_AS(__typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                v102 = v103;
              }
            }
          LABEL_140:
            ui_LayoutAccessor_SetPaneVisible((__int64)v102, (__int64)"IconTalk",
                                             v99 & 1),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            v359 = v8;
            if (*(_BYTE*)(a1 + 2392) != 1) {
              goto LABEL_241;
            }
            v104 = *(_QWORD*)(a1 + 8);
            if (v104 != 0) {
              v105 = std___1___shared_weak_count_lock(v104),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
              v106 = ui_LayoutAccessor_empty__ptr[0];
              if (v105 != 0) {
                if (*(_QWORD*)a1 != 0) {
                  v106 = *(__int64**)a1;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v105 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v107 = v106;
                  (*(void (**)(__int64))(*(_QWORD*)v105 + 16LL))(v105),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  std___1___shared_weak_count___release_weak(v105),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v106 = v107;
                }
              }
            }
            else {
              v106 = ui_LayoutAccessor_empty__ptr[0];
            }
            v361 = LayoutAccessor_155fbe0(v106, "L_Face"),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
            v108 = game_Unit_IsHeld(v12),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
            v109 = 12;
            *(_QWORD*)&v370_.v370 = 0x726579616C500CLL;
            v354 = v108;
            v110 = *(_QWORD*)(v12 + 440);
            if (v110 != 0) {
              v111 = *(unsigned __int8*)(v110 + 16);
              if (v111 > 1) {
                if (v111 != 2) {
                  if (v111 == 3) {
                    v109 = 8;
                    LOBYTE(v370_.v370) = 8;
                    strcpy((char*)&v370_.v370 + 1, "Ally");
                  }
                  goto LABEL_164;
                }
                v109 = 10;
                qmemcpy(&v370_.v370, "\nThir", 5);
                v112 = 100;
              }
              else {
                if (v111 == 0) {
                  v113 = *(_QWORD*)(v12 + 1744);
                  v114 = (unsigned int)*game_g_shared_system_skills_ptr;
                  v115 = *(_QWORD*)(v12 + 1752) - v113;
                  LODWORD(v366_.v366) =
                      *game_g_shared_system_skills_ptr & 0xFFF;
                  if (((v114 >> 5) & 0x7F) + 1 <= v115 >> 2 &&
                      ((*(_DWORD*)(v113 + 4 * ((v114 >> 5) & 0x7F)) >> v114) &
                       1) != 0) {
                    v116 = game_HasActiveSkill_843420(&v366_.v366,
                                                      (_QWORD*)(v12 + 1744)),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v343 = COERCE_AS(__typeof__(v343),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v42 = COERCE_AS(__typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v43 = COERCE_AS(__typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v44 = COERCE_AS(__typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                    v117 = "Player";
                    if (v116) {
                      v118 = *(_QWORD*)(v12 + 440);
                      v119 = v118 != 0 ? *(_BYTE*)(v118 + 16) : 9;
                      if (((1 << v119) & 0xF1) != 0) {
                        v117 = "Guest";
                      }
                    }
                  }
                  else {
                    v117 = "Player";
                  }
                  GameRoutine_60a020((__int64)&v370_.v370, v117),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v109 = LOBYTE(v370_.v370);
                  goto LABEL_164;
                }
                v109 = 10;
                qmemcpy(&v370_.v370, "\nEnem", 5);
                v112 = 121;
              }
              *(_WORD*)((char*)&v370_.v370 + 5) = v112;
            }
          LABEL_164:
            v120 = (v109 & 1) == 0;
            v121 = v109 >> 1;
            if (v120) {
              v122 = (char*)&v370_.v370 + 1;
            }
            else {
              v122 = (char*)v370_.v371;
            }
            if (v120) {
              v123 = v121;
            }
            else {
              v123 = *((_QWORD*)&v370_.v370 + 1);
            }
            v124 = v123 + 6;
            if (v123 + 6 >= 0xFFFFFFFFFFFFFFF7LL) {
              String_60a1d0(),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
            }
            v125 = v9;
            v126 = v6;
            v127 = v7;
            if (v124 > 0x16) {
              if ((v124 | 7) == 0x17) {
                v130 = 26;
              }
              else {
                v130 = (v124 | 7) + 1;
              }
              v129 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v130, 16, 0),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
              *((_QWORD*)&v366_.v366 + 1) = v123 + 6;
              *(_QWORD*)&v366_.v367 = v129;
              *(_QWORD*)&v366_.v366 = v130 | 1;
              v128 = v130 | 1;
            }
            else {
              v128 = 2 * v124;
              v129 = 0;
              *(_QWORD*)&v366_.v367 = 0;
              *(_OWORD*)&v366_.v366 = (unsigned __int8)(2 * v124);
            }
            if ((v128 & 1) != 0) {
              v131 = (char*)v129;
            }
            else {
              v131 = (char*)&v366_.v366 + 1;
            }
            *((_WORD*)v131 + 2) = 29557;
            *(_DWORD*)v131 = 1952543827;
            if ((v128 & 1) != 0) {
              v132 = (char*)(v129 + 6);
            }
            else {
              v132 = (char*)&v366_.v366 + 7;
            }
            if (v123 != 0) {
              memmove((__int64)v132, (__int64)v122, v123),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
            }
            v132[v123] = 0;
            if ((v354 & 1) != 0) {
              v133 = "_Fixed";
            }
            else {
              v133 = "_Default";
            }
            if ((v354 & 1) != 0) {
              v134 = 6;
            }
            else {
              v134 = 8;
            }
            v135 = (unsigned __int64*)GameRoutine_1a09ce0((__int64)&v366_.v366,
                                                          v133, v134),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
            v137 = v135[1];
            v136 = v135[2];
            LANES128(v374_.v374).n128_u64[0] = *v135;
            LANES128(v374_.v374).n128_u64[1] = v137;
            v374_.v375 = (const char*)v136;
            v135[1] = 0;
            v135[2] = 0;
            *v135 = 0;
            if ((LOBYTE(v366_.v366) & 1) != 0 && (_QWORD)v366_.v367 != 0) {
              v138 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v138 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v138, v366_.v367),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
            }
            v8 = v359;
            v7 = v127;
            if ((LOBYTE(v370_.v370) & 1) != 0 && (_QWORD)v370_.v371 != 0) {
              v139 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v139 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v139, v370_.v371),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
            }
            if ((LANES128(v374_.v374).n128_u8[0] & 1) != 0) {
              v140 = v374_.v375;
            }
            else {
              v140 = &LANES128(v374_.v374).n128_i8[1];
            }
            LayoutAccessor_1562cf0((__int64)v361, v140),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            v6 = v126;
            if ((LANES128(v374_.v374).n128_u8[0] & 1) != 0 &&
                v374_.v375 != nullptr) {
              v141 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v141 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v141,
                  (__int64)v374_.v375),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
            }
            v142 = game_8224a0(0xFu),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
            v9 = v125;
            v144 = game_GameModeData_instance_ != 0 &&
                   (v143 = game_GameVariableTable_Find(
                        *(_QWORD**)(game_GameModeData_instance_ + 48),
                        (unsigned __int64*)v142)) != 0 &&
                   *(_DWORD*)(v143 + 32) == 1,
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
            if (*(unsigned __int8*)(a1 + 2393) != v144) {
              v145 = *(_QWORD*)(a1 + 8);
              if (v144 != 0) {
                if (v145 != 0) {
                  v146 = std___1___shared_weak_count_lock(v145),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v147 = ui_LayoutAccessor_empty__ptr[0];
                  if (v146 != 0) {
                    if (*(_QWORD*)a1 != 0) {
                      v147 = *(__int64**)a1;
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v146 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      v148 = v147;
                      (*(void (**)(__int64))(*(_QWORD*)v146 + 16LL))(v146),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      std___1___shared_weak_count___release_weak(v146),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      v147 = v148;
                    }
                  }
                }
                else {
                  v147 = ui_LayoutAccessor_empty__ptr[0];
                }
                GameHr_1562680((__int64)v147, "FaceEnable_Keep",
                               0x1.0000000000000p+0f),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v343 = COERCE_AS(__typeof__(v343),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v42 = COERCE_AS(__typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v43 = COERCE_AS(__typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v44 = COERCE_AS(__typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                v152 = "FaceEnable";
              }
              else {
                if (v145 != 0) {
                  v149 = std___1___shared_weak_count_lock(v145),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v150 = ui_LayoutAccessor_empty__ptr[0];
                  if (v149 != 0) {
                    if (*(_QWORD*)a1 != 0) {
                      v150 = *(__int64**)a1;
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v149 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      v151 = v150;
                      (*(void (**)(__int64))(*(_QWORD*)v149 + 16LL))(v149),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      std___1___shared_weak_count___release_weak(v149),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      v150 = v151;
                    }
                  }
                }
                else {
                  v150 = ui_LayoutAccessor_empty__ptr[0];
                }
                v152 = "FaceDisable";
                GameHr_1562680((__int64)v150, "FaceDisable",
                               0x1.0000000000000p+0f),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v343 = COERCE_AS(__typeof__(v343),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v42 = COERCE_AS(__typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v43 = COERCE_AS(__typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v44 = COERCE_AS(__typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
              }
              LayoutAccessor_1562cf0((__int64)v361, v152),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
              *(_BYTE*)(a1 + 2393) = v144;
            }
            v153 = GameHr_7e74e0(v12),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
            if (v153 == 0 || *(_QWORD*)(a1 + 2400) == v153) {
              v154 = 0;
            }
            else {
              v154 = 1;
              *(_QWORD*)(a1 + 2400) = v153;
            }
            v155 = game_Unit_GetJob(v12),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
            if ((v154 & 1) != 0 ||
                *(_DWORD*)(a1 + 2376) != *(unsigned __int16*)(v155 + 16)) {
              v156 = ui_LayoutAccessor_FindPane(v361, (__int64)"Face"),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
              if (v156 != 0) {
                v156 = __dynamic_cast(v156, GameData_212d670[0],
                                      GameData_212d678[0], 0),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
              }
              GameHr_1840740(v156, 1u, v12, 6u, 1),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
            }
          LABEL_241:
            v157 = *(_DWORD**)(a1 + 2408);
            if (*(_QWORD*)v157 == 0 ||
                *(_DWORD*)(*(_QWORD*)v157 + 16LL) != v157[2]) {
              goto LABEL_294;
            }
            v158 = *(_QWORD*)(a1 + 8);
            if (v158 != 0) {
              v159 = std___1___shared_weak_count_lock(v158),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
              v160 = ui_LayoutAccessor_empty__ptr[0];
              if (v159 != 0) {
                if (*(_QWORD*)a1 != 0) {
                  v160 = *(__int64**)a1;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v159 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v161 = v159;
                  (*(void (**)(__int64))(*(_QWORD*)v159 + 16LL))(v159),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  std___1___shared_weak_count___release_weak(v161),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                }
              }
            }
            else {
              v160 = ui_LayoutAccessor_empty__ptr[0];
            }
            v162 = v160[1];
            if (v162 != 0) {
              v163 = std___1___shared_weak_count_lock(v162),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
              if (v163 != 0) {
                v164 = v163;
                if (*v160 != 0) {
                  ControlCreator_13633c0(*v160),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v164 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v164 + 16LL))(v164),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  std___1___shared_weak_count___release_weak(v164),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                }
              }
            }
            v165 = *(_QWORD*)(a1 + 8);
            if (v165 != 0) {
              v166 = std___1___shared_weak_count_lock(v165),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
              v167 = ui_LayoutAccessor_empty__ptr[0];
              if (v166 != 0) {
                if (*(_QWORD*)a1 != 0) {
                  v167 = *(__int64**)a1;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v166 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v168 = v166;
                  (*(void (**)(__int64))(*(_QWORD*)v166 + 16LL))(v166),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  std___1___shared_weak_count___release_weak(v168),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                }
              }
            }
            else {
              v167 = ui_LayoutAccessor_empty__ptr[0];
            }
            v169 = game_util_Format("L_Stock/IconHPStock%02d",
                                    *(_DWORD*)(a1 + 2424)),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
            v170 = 0;
            if (v167[2] == 0 || (v171 = v167[1]) == 0) {
              *(_QWORD*)&v180 = 0;
              goto LABEL_285;
            }
            v172 = v9;
            v173 = v6;
            v174 = v7;
            v362 = v169;
            v175 = std___1___shared_weak_count_lock(v171),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
            if (v175 == 0) {
              goto LABEL_275;
            }
            v177 = *v167;
            if (*v167 != 0) {
              v176 = *(unsigned __int8*)(v177 + 24);
              v178 = v177 + 152;
              if (v176 == 0) {
                v178 = 0;
              }
              v179 = v178 != v167[2];
            }
            else {
              v179 = true;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v175 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v181 = v175;
              v355 = v176;
              (*(void (**)(__int64))(*(_QWORD*)v175 + 16LL))(v175),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
              std___1___shared_weak_count___release_weak(v181),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
              LOBYTE(v176) = v355;
            }
            if (!v179) {
              v170 = 0;
              v7 = v174;
              if ((v176 & 1) != 0) {
              LABEL_277:
                v183 = v167[2];
                v6 = v173;
                if (v183 != 0) {
                  v184 = (int32x4_t*)GameRoutine_155f760((__int64)v167, v183,
                                                         v362),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
                  *(_QWORD*)&v180 = 0;
                  v9 = v172;
                  v170 = 0;
                  if (v184 != nullptr) {
                    v170 = LANES128(v184[9]).n128_u32[3];
                    LODWORD(v180) =
                        LANES128_OF(vdupq_laneq_s32(v184[7], 3)).n128_u32[0];
                    DWORD1(v180) = HIDWORD(LANES128(v184[8]).n128_u64[1]);
                  }
                  goto LABEL_285;
                }
                *(_QWORD*)&v180 = 0;
                goto LABEL_284;
              }
            }
            else {
            LABEL_275:
              v182 = v167[1];
              v170 = 0;
              if (v182 == 0) {
                *(_QWORD*)&v180 = 0;
                v7 = v174;
                v6 = v173;
                v9 = v172;
                goto LABEL_285;
              }
              v7 = v174;
              if (*(_QWORD*)(v182 + 8) != -1) {
                goto LABEL_277;
              }
            }
            *(_QWORD*)&v180 = 0;
            v6 = v173;
          LABEL_284:
            v9 = v172;
          LABEL_285:
            v185 = *(_QWORD*)(a1 + 2408);
            v186 = *(_QWORD*)v185;
            if (*(_QWORD*)v185 != 0 &&
                *(_DWORD*)(v186 + 16) == *(_DWORD*)(v185 + 8)) {
              v187 = *(_DWORD*)(v186 + 36);
              if (v187 != 0) {
                v188 = 0;
                *((_QWORD*)&v180 + 1) = v170;
                do {
                  if ((int)v187 > (int)v188) {
                    v189 = *(_QWORD*)(v186 + 40 + 8LL * (int)v188);
                    if (v189 != 0) {
                      *(_OWORD*)(v189 + 16) = v180;
                      *(_BYTE*)(v189 + 128) = 1;
                      v187 = *(_DWORD*)(v186 + 36);
                    }
                  }
                  ++v188;
                } while (v188 < v187);
              }
            }
            game_14a3920(v185),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
          LABEL_294:
            v190 = *(_QWORD*)(a1 + 8);
            if (v190 != 0) {
              v191 = std___1___shared_weak_count_lock(v190),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
              v192 = ui_LayoutAccessor_empty__ptr[0];
              if (v191 != 0) {
                if (*(_QWORD*)a1 != 0) {
                  v192 = *(__int64**)a1;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v191 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v193 = v192;
                  (*(void (**)(__int64))(*(_QWORD*)v191 + 16LL))(v191),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  std___1___shared_weak_count___release_weak(v191),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v192 = v193;
                }
              }
            }
            else {
              v192 = ui_LayoutAccessor_empty__ptr[0];
            }
            v194 = LayoutAccessor_155fbe0(v192, "L_Stock"),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
            game_gameui_SetHpStock((__int64)v194, v12),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            GameRoutine_15fc1d0(a1, v12),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            if (*(_BYTE*)(v12 + 1944) != 0 &&
                *(_BYTE*)(*(_QWORD*)(v12 + 400) + 96LL) == 1) {
              v195 = GameData_212ceb0;
              if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                GameData_212c998
                                                                    [0] +
                                                            64LL) +
                                                 8LL *
                                                     *(unsigned __int8*)(v12 +
                                                                         1944)) +
                                      50LL) <=
                      (unsigned int)*(unsigned __int8*)(v12 + 552) &&
                  (game_GameModeData_instance_ == 0 ||
                   (*(_BYTE*)(game_GameModeData_instance_ + 56) & 0xFE) != 6) &&
                  *(_QWORD*)(v12 + 408) == 0) {
                v195 = (__int64*)(v12 + 1944);
              }
            }
            else {
              v195 = GameData_212ceb0;
            }
            v196 = *(unsigned __int8*)v195;
            if (v196 != 0 &&
                (v197 =
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                          GameData_212c998[0] +
                                                      64LL) +
                                           8 * v196) +
                                64LL)) != 0) {
              v198 = *(unsigned __int16*)(v197 + 16);
              if (*(_DWORD*)(a1 + 2388) != v198) {
                v199 = *(_QWORD*)(a1 + 8);
                if (v199 != 0) {
                  v200 = std___1___shared_weak_count_lock(v199),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v201 = ui_LayoutAccessor_empty__ptr[0];
                  if (v200 != 0) {
                    if (*(_QWORD*)a1 != 0) {
                      v201 = *(__int64**)a1;
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v200 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      v202 = v201;
                      (*(void (**)(__int64))(*(_QWORD*)v200 + 16LL))(v200),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      std___1___shared_weak_count___release_weak(v200),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      v201 = v202;
                      v8 = v359;
                    }
                  }
                }
                else {
                  v201 = ui_LayoutAccessor_empty__ptr[0];
                }
                ui_LayoutAccessor_SetPaneVisible((__int64)v201,
                                                 (__int64)"IconLegion", 1),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v343 = COERCE_AS(__typeof__(v343),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v42 = COERCE_AS(__typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v43 = COERCE_AS(__typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v44 = COERCE_AS(__typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                v253 = *(_QWORD*)(a1 + 8);
                if (v253 != 0) {
                  v254 = std___1___shared_weak_count_lock(v253),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v255 = ui_LayoutAccessor_empty__ptr[0];
                  if (v254 != 0) {
                    if (*(_QWORD*)a1 != 0) {
                      v255 = *(__int64**)a1;
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v254 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      v256 = v255;
                      (*(void (**)(__int64))(*(_QWORD*)v254 + 16LL))(v254),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      std___1___shared_weak_count___release_weak(v254),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      v255 = v256;
                      v8 = v359;
                    }
                  }
                }
                else {
                  v255 = ui_LayoutAccessor_empty__ptr[0];
                }
                v257 = ui_LayoutAccessor_FindPane(v255, (__int64)"IconLegion"),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
                if (v257 != 0) {
                  v258 = __dynamic_cast(v257, GameData_212d670[0],
                                        GameData_212d678[0], 0),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
                  if (v258 != 0) {
                    v259 = *(unsigned __int8*)(v197 + 250);
                    if (v259 <= 9) {
                      if (v259 == 7) {
                        v261 = "OnMap_IconLegion_Sword";
                        goto LABEL_478;
                      }
                      if (v259 != 8) {
                        goto LABEL_477;
                      }
                      v261 = "OnMap_IconLegion_Magic";
                    }
                    else {
                      if (v259 != 10 && v259 != 31) {
                        if (v259 == 42) {
                          v261 = "OnMap_IconLegion_Formation";
                          goto LABEL_478;
                        }
                      LABEL_477:
                        v261 = &GameData_1a9f09e;
                        goto LABEL_478;
                      }
                      v261 = "OnMap_IconLegion_Heal";
                    }
                  LABEL_478:
                    Manager_136a920(ui_Manager_instance_ + 1264, v258, 0, 7u,
                                    v261),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                  }
                }
              }
            }
            else {
              if (*(_DWORD*)(a1 + 2388) != 0) {
                v203 = *(_QWORD*)(a1 + 8);
                if (v203 != 0) {
                  v204 = std___1___shared_weak_count_lock(v203),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v205 = ui_LayoutAccessor_empty__ptr[0];
                  if (v204 != 0) {
                    if (*(_QWORD*)a1 != 0) {
                      v205 = *(__int64**)a1;
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v204 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      v206 = v205;
                      (*(void (**)(__int64))(*(_QWORD*)v204 + 16LL))(v204),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      std___1___shared_weak_count___release_weak(v204),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      v205 = v206;
                    }
                  }
                }
                else {
                  v205 = ui_LayoutAccessor_empty__ptr[0];
                }
                ui_LayoutAccessor_SetPaneVisible((__int64)v205,
                                                 (__int64)"IconLegion", 0),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v343 = COERCE_AS(__typeof__(v343),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v42 = COERCE_AS(__typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v43 = COERCE_AS(__typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v44 = COERCE_AS(__typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
              }
              v198 = 0;
            }
            v207 = *(_QWORD*)(a1 + 8);
            *(_DWORD*)(a1 + 2388) = v198;
            if (v207 != 0) {
              v208 = std___1___shared_weak_count_lock(v207),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
              v209 = ui_LayoutAccessor_empty__ptr[0];
              if (v208 != 0) {
                if (*(_QWORD*)a1 != 0) {
                  v209 = *(__int64**)a1;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v208 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v210 = v208;
                  (*(void (**)(__int64))(*(_QWORD*)v208 + 16LL))(v208),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  std___1___shared_weak_count___release_weak(v210),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                }
              }
            }
            else {
              v209 = ui_LayoutAccessor_empty__ptr[0];
            }
            LODWORD(v366_.v366) = 0;
            *(_QWORD*)&v370_.v370 = GameData_1f91de8;
            *((_QWORD*)&v370_.v370 + 1) = &v366_.v366;
            *(_QWORD*)&v370_.v372 = &v370_.v370;
            game_UnitItemList_EachItem((_WORD*)(v12 + 828),
                                       (__int64)&v370_.v370),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            if ((long double*)v370_.v372 == &v370_.v370) {
              v211 = 32;
            }
            else {
              if ((_QWORD)v370_.v372 == 0) {
                goto LABEL_341;
              }
              v211 = 40;
            }
            (*(void (**)(__int64))(*(_QWORD*)v370_.v372 + v211))(
                (__int64)v370_.v372),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
          LABEL_341:
            ui_LayoutAccessor_SetPaneVisible((__int64)v209,
                                             (__int64)"IconItemDrop",
                                             SLODWORD(v366_.v366) > 0),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            v212 = *(_WORD*)(v12 + 1440);
            v377 = v12;
            if ((v212 & 0x2080) == 0) {
              v221 = *(_QWORD*)(a1 + 64);
              if (v221 != *(_QWORD*)(a1 + 72)) {
                v222 = *(_QWORD*)(a1 + 56);
                if (v222 != 0) {
                  *(_BYTE*)(v222 + 88) &= ~1u;
                  v221 = *(_QWORD*)(a1 + 64);
                }
                v223 = *(_QWORD*)(a1 + 8);
                *(_QWORD*)(a1 + 72) = v221;
                if (v223 != 0) {
                  v224 = std___1___shared_weak_count_lock(v223),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v225 = ui_LayoutAccessor_empty__ptr[0];
                  if (v224 != 0) {
                    if (*(_QWORD*)a1 != 0) {
                      v225 = *(__int64**)a1;
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v224 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      v226 = v225;
                      (*(void (**)(__int64))(*(_QWORD*)v224 + 16LL))(v224),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      std___1___shared_weak_count___release_weak(v224),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      v225 = v226;
                    }
                  }
                }
                else {
                  v225 = ui_LayoutAccessor_empty__ptr[0];
                }
                v252 = ui_LayoutAccessor_FindAlignment(v225, "A_Icon"),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
                if (v252 != 0) {
                  Alignment_56b600(v252),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                }
                *(_DWORD*)(a1 + 96) &= ~4u;
              }
            LABEL_500:
              v290 = game_8224a0(0x12u),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
              if (game_GameModeData_instance_ != 0 &&
                  (v291 = game_GameVariableTable_Find(
                       *(_QWORD**)(game_GameModeData_instance_ + 48),
                       (unsigned __int64*)v290)) != 0) {
                v292 = *(_DWORD*)(v291 + 32);
                v293 = *(_QWORD*)(a1 + 8);
                if (v292 != 0) {
                  if (v293 != 0) {
                    v294 = std___1___shared_weak_count_lock(v293),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v343 = COERCE_AS(__typeof__(v343),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v42 = COERCE_AS(__typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v43 = COERCE_AS(__typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v44 = COERCE_AS(__typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                    v295 = ui_LayoutAccessor_empty__ptr[0];
                    if (v294 != 0) {
                      if (*(_QWORD*)a1 != 0) {
                        v295 = *(__int64**)a1;
                      }
                      if (atomic_fetch_add((atomic_ullong* volatile)(v294 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        v296 = v295;
                        (*(void (**)(__int64))(*(_QWORD*)v294 + 16LL))(v294),
                            v14 =
                                COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v15 =
                                COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v16 =
                                COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v17 =
                                COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v18 =
                                COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v19 =
                                COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v343 =
                                COERCE_AS(__typeof__(v343),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v39 =
                                COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v40 =
                                COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v41 =
                                COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v42 =
                                COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v43 =
                                COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v44 =
                                COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                        std___1___shared_weak_count___release_weak(v294),
                            v14 =
                                COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v15 =
                                COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v16 =
                                COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v17 =
                                COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v18 =
                                COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v19 =
                                COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v343 =
                                COERCE_AS(__typeof__(v343),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v39 =
                                COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v40 =
                                COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v41 =
                                COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v42 =
                                COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v43 =
                                COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v44 =
                                COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v295 = v296;
                      }
                    }
                  }
                  else {
                    v295 = ui_LayoutAccessor_empty__ptr[0];
                  }
                  ui_LayoutAccessor_SetPaneVisible((__int64)v295,
                                                   (__int64)"N_SubInfo", 1),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  if (v292 <= 2) {
                    if (v292 == 1) {
                      v316 = *(_QWORD*)(a1 + 8);
                      if (v316 != 0) {
                        v317 = std___1___shared_weak_count_lock(v316),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v318 = (char*)ui_LayoutAccessor_empty__ptr[0];
                        if (v317 != 0) {
                          if (*(_QWORD*)a1 != 0) {
                            v318 = *(char**)a1;
                          }
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v317 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v319 = v318;
                            (*(void (**)(__int64))(*(_QWORD*)v317 + 16LL))(
                                v317),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            std___1___shared_weak_count___release_weak(v317),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            v318 = v319;
                          }
                        }
                      }
                      else {
                        v318 = (char*)ui_LayoutAccessor_empty__ptr[0];
                      }
                      GameHr_158f870(v318, v12, 1, 1u),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      v329 = *(_QWORD*)(a1 + 8);
                      if (v329 != 0) {
                        v330 = std___1___shared_weak_count_lock(v329),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v322 = (char*)ui_LayoutAccessor_empty__ptr[0];
                        if (v330 != 0) {
                          if (*(_QWORD*)a1 != 0) {
                            v322 = *(char**)a1;
                          }
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v330 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v331 = v322;
                            (*(void (**)(__int64))(*(_QWORD*)v330 + 16LL))(
                                v330),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            std___1___shared_weak_count___release_weak(v330),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            v322 = v331;
                          }
                        }
                      }
                      else {
                        v322 = (char*)ui_LayoutAccessor_empty__ptr[0];
                      }
                      v324 = v12;
                      v325 = 15;
                      goto LABEL_600;
                    }
                    if (v292 == 2) {
                      v304 = *(_QWORD*)(a1 + 8);
                      if (v304 != 0) {
                        v305 = std___1___shared_weak_count_lock(v304),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v306 = (char*)ui_LayoutAccessor_empty__ptr[0];
                        if (v305 != 0) {
                          if (*(_QWORD*)a1 != 0) {
                            v306 = *(char**)a1;
                          }
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v305 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v307 = v306;
                            (*(void (**)(__int64))(*(_QWORD*)v305 + 16LL))(
                                v305),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            std___1___shared_weak_count___release_weak(v305),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            v306 = v307;
                          }
                        }
                      }
                      else {
                        v306 = (char*)ui_LayoutAccessor_empty__ptr[0];
                      }
                      GameHr_158f870(v306, v12, 1, 2u),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      v335 = *(_QWORD*)(a1 + 8);
                      if (v335 != 0) {
                        v336 = std___1___shared_weak_count_lock(v335),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v322 = (char*)ui_LayoutAccessor_empty__ptr[0];
                        if (v336 != 0) {
                          if (*(_QWORD*)a1 != 0) {
                            v322 = *(char**)a1;
                          }
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v336 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v337 = v322;
                            (*(void (**)(__int64))(*(_QWORD*)v336 + 16LL))(
                                v336),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            std___1___shared_weak_count___release_weak(v336),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            v322 = v337;
                          }
                        }
                      }
                      else {
                        v322 = (char*)ui_LayoutAccessor_empty__ptr[0];
                      }
                      v324 = v12;
                      v325 = 16;
                      goto LABEL_600;
                    }
                  }
                  else {
                    switch (v292) {
                    case 3:
                      v308 = *(_QWORD*)(a1 + 8);
                      if (v308 != 0) {
                        v309 = std___1___shared_weak_count_lock(v308),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v310 = (char*)ui_LayoutAccessor_empty__ptr[0];
                        if (v309 != 0) {
                          if (*(_QWORD*)a1 != 0) {
                            v310 = *(char**)a1;
                          }
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v309 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v311 = v310;
                            (*(void (**)(__int64))(*(_QWORD*)v309 + 16LL))(
                                v309),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            std___1___shared_weak_count___release_weak(v309),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            v310 = v311;
                          }
                        }
                      }
                      else {
                        v310 = (char*)ui_LayoutAccessor_empty__ptr[0];
                      }
                      GameHr_158f870(v310, v12, 1, 0xAu),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      v320 = *(_QWORD*)(a1 + 8);
                      if (v320 != 0) {
                        v321 = std___1___shared_weak_count_lock(v320),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v322 = (char*)ui_LayoutAccessor_empty__ptr[0];
                        if (v321 != 0) {
                          if (*(_QWORD*)a1 != 0) {
                            v322 = *(char**)a1;
                          }
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v321 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v323 = v322;
                            (*(void (**)(__int64))(*(_QWORD*)v321 + 16LL))(
                                v321),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            std___1___shared_weak_count___release_weak(v321),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            v322 = v323;
                          }
                        }
                      }
                      else {
                        v322 = (char*)ui_LayoutAccessor_empty__ptr[0];
                      }
                      v324 = v12;
                      v325 = 12;
                      goto LABEL_600;
                    case 4:
                      v312 = *(_QWORD*)(a1 + 8);
                      if (v312 != 0) {
                        v313 = std___1___shared_weak_count_lock(v312),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v314 = (char*)ui_LayoutAccessor_empty__ptr[0];
                        if (v313 != 0) {
                          if (*(_QWORD*)a1 != 0) {
                            v314 = *(char**)a1;
                          }
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v313 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v315 = v314;
                            (*(void (**)(__int64))(*(_QWORD*)v313 + 16LL))(
                                v313),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            std___1___shared_weak_count___release_weak(v313),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            v314 = v315;
                          }
                        }
                      }
                      else {
                        v314 = (char*)ui_LayoutAccessor_empty__ptr[0];
                      }
                      GameHr_158f870(v314, v12, 1, 0xDu),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      v326 = *(_QWORD*)(a1 + 8);
                      if (v326 != 0) {
                        v327 = std___1___shared_weak_count_lock(v326),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v322 = (char*)ui_LayoutAccessor_empty__ptr[0];
                        if (v327 != 0) {
                          if (*(_QWORD*)a1 != 0) {
                            v322 = *(char**)a1;
                          }
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v327 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v328 = v322;
                            (*(void (**)(__int64))(*(_QWORD*)v327 + 16LL))(
                                v327),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            std___1___shared_weak_count___release_weak(v327),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            v322 = v328;
                          }
                        }
                      }
                      else {
                        v322 = (char*)ui_LayoutAccessor_empty__ptr[0];
                      }
                      v324 = v12;
                      v325 = 14;
                      goto LABEL_600;
                    case 5:
                      v300 = *(_QWORD*)(a1 + 8);
                      if (v300 != 0) {
                        v301 = std___1___shared_weak_count_lock(v300),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v302 = (char*)ui_LayoutAccessor_empty__ptr[0];
                        if (v301 != 0) {
                          if (*(_QWORD*)a1 != 0) {
                            v302 = *(char**)a1;
                          }
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v301 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v303 = v302;
                            (*(void (**)(__int64))(*(_QWORD*)v301 + 16LL))(
                                v301),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            std___1___shared_weak_count___release_weak(v301),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            v302 = v303;
                          }
                        }
                      }
                      else {
                        v302 = (char*)ui_LayoutAccessor_empty__ptr[0];
                      }
                      GameHr_158f870(v302, v12, 1, 0xBu),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      v332 = *(_QWORD*)(a1 + 8);
                      if (v332 != 0) {
                        v333 = std___1___shared_weak_count_lock(v332),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v322 = (char*)ui_LayoutAccessor_empty__ptr[0];
                        if (v333 != 0) {
                          if (*(_QWORD*)a1 != 0) {
                            v322 = *(char**)a1;
                          }
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v333 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v334 = v322;
                            (*(void (**)(__int64))(*(_QWORD*)v333 + 16LL))(
                                v333),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            std___1___shared_weak_count___release_weak(v333),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            v322 = v334;
                          }
                        }
                      }
                      else {
                        v322 = (char*)ui_LayoutAccessor_empty__ptr[0];
                      }
                      v325 = 37;
                      v324 = v12;
                    LABEL_600:
                      GameHr_158f870(v322, v324, 0, v325),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      break;
                    default:
                      break;
                    }
                  }
                LABEL_601:
                  if (v6 != *(_DWORD*)(a1 + 96) ||
                      v7 != *(unsigned __int8*)(a1 + 2394) ||
                      (v9 != v8) !=
                          (*(_QWORD*)(a1 + 24) != *(_QWORD*)(a1 + 32))) {
                    GameRoutine_15fc630(a1),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                  }
                  goto LABEL_605;
                }
                if (v293 == 0) {
                  goto LABEL_516;
                }
              }
              else {
                v293 = *(_QWORD*)(a1 + 8);
                if (v293 == 0) {
                LABEL_516:
                  v298 = ui_LayoutAccessor_empty__ptr[0];
                LABEL_517:
                  ui_LayoutAccessor_SetPaneVisible((__int64)v298,
                                                   (__int64)"N_SubInfo", 0),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  goto LABEL_601;
                }
              }
              v297 = std___1___shared_weak_count_lock(v293),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
              v298 = ui_LayoutAccessor_empty__ptr[0];
              if (v297 != 0) {
                if (*(_QWORD*)a1 != 0) {
                  v298 = *(__int64**)a1;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v297 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v299 = v298;
                  (*(void (**)(__int64))(*(_QWORD*)v297 + 16LL))(v297),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  std___1___shared_weak_count___release_weak(v297),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v298 = v299;
                }
              }
              goto LABEL_517;
            }
            v213 = &v370_.v370;
            v374_.v376 = 0;
            v374_.v375 = nullptr;
            v374_.v374 = (__typeof__(v374_.v374)){0};
            v357 = v9;
            *(_QWORD*)&v370_.v370 = GameData_2065f70;
            *((_QWORD*)&v370_.v370 + 1) = &v377;
            v214 = *(_QWORD*)(v12 + 1400);
            *(_QWORD*)&v370_.v372 = &v370_.v370;
            *(_QWORD*)&v370_.v371 = &v374_.v374;
            v215 = *(_QWORD*)(v12 + 1392);
            if ((int)((unsigned __int64)(v214 - v215) >> 2) >= 1) {
              v216 = 0;
              v217 = 0;
              v218 = GameData_212c880[0];
              v219 = *GameData_212c880[0];
              do {
                if (((1 << *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v219 + 64) +
                                                8LL * (*(_DWORD*)(v215 + v216) &
                                                       0xFFF)) +
                                     104LL)) &
                     0x2080) != 0) {
                  if ((_QWORD)v370_.v372 == 0) {
                  LABEL_642:
                    GameRoutine_60a310(),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                  }
                  (*(void (**)(_QWORD, __int64))(*(_QWORD*)v370_.v372 + 48LL))(
                      v370_.v372, v215 + v216),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v219 = *v218;
                  v214 = *(_QWORD*)(v12 + 1400);
                  v215 = *(_QWORD*)(v12 + 1392);
                }
                ++v217;
                v216 += 4;
              } while (v217 < (int)((unsigned __int64)(v214 - v215) >> 2));
              v213 = (long double*)v370_.v372;
              if ((long double*)v370_.v372 != &v370_.v370) {
                v8 = v359;
                if ((_QWORD)v370_.v372 != 0) {
                  v220 = 40;
                LABEL_362:
                  (*(void (**)(__int64))(*(_QWORD*)v213 + v220))((__int64)v213),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                }
                v227 = *(_DWORD*)(a1 + 96);
                if (v374_.v376 == 0) {
                  if ((v227 & 4) == 0) {
                    goto LABEL_496;
                  }
                  v238 = *(_QWORD*)(a1 + 56);
                  if (v238 != 0) {
                    *(_BYTE*)(v238 + 88) &= ~1u;
                  }
                  v239 = *(_QWORD*)(a1 + 8);
                  *(_QWORD*)(a1 + 72) = *(_QWORD*)(a1 + 64);
                  if (v239 != 0) {
                    v240 = std___1___shared_weak_count_lock(v239),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v343 = COERCE_AS(__typeof__(v343),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v42 = COERCE_AS(__typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v43 = COERCE_AS(__typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v44 = COERCE_AS(__typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                    v241 = ui_LayoutAccessor_empty__ptr[0];
                    if (v240 != 0) {
                      if (*(_QWORD*)a1 != 0) {
                        v241 = *(__int64**)a1;
                      }
                      if (atomic_fetch_add((atomic_ullong* volatile)(v240 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        v242 = v241;
                        (*(void (**)(__int64))(*(_QWORD*)v240 + 16LL))(v240),
                            v14 =
                                COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v15 =
                                COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v16 =
                                COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v17 =
                                COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v18 =
                                COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v19 =
                                COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v343 =
                                COERCE_AS(__typeof__(v343),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v39 =
                                COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v40 =
                                COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v41 =
                                COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v42 =
                                COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v43 =
                                COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v44 =
                                COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                        std___1___shared_weak_count___release_weak(v240),
                            v14 =
                                COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v15 =
                                COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v16 =
                                COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v17 =
                                COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v18 =
                                COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v19 =
                                COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v343 =
                                COERCE_AS(__typeof__(v343),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v39 =
                                COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v40 =
                                COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v41 =
                                COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v42 =
                                COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v43 =
                                COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v44 =
                                COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v241 = v242;
                      }
                    }
                  }
                  else {
                    v241 = ui_LayoutAccessor_empty__ptr[0];
                  }
                  v276 = ui_LayoutAccessor_FindAlignment(v241, "A_Icon"),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v15 = COERCE_AS(__typeof__(v15),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v16 = COERCE_AS(__typeof__(v16),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v343 = COERCE_AS(__typeof__(v343),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v43 = COERCE_AS(__typeof__(v43),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
                  if (v276 != 0) {
                    Alignment_56b600(v276),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                  }
                  v277 = *(_DWORD*)(a1 + 96) & 0xFFFFFFFB;
                LABEL_495:
                  *(_DWORD*)(a1 + 96) = v277;
                LABEL_496:
                  if (LANES128(v374_.v374).n128_u64[0] != 0) {
                    LANES128(v374_.v374).n128_u64[1] =
                        LANES128(v374_.v374).n128_u64[0];
                    v289 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v289 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v289,
                        LANES128(v374_.v374).n128_i64[0]),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                  }
                  goto LABEL_500;
                }
                v228 = a1 + 56;
                v363 = (__int64*)(a1 + 56);
                if ((v227 & 4) == 0) {
                  if (*(_QWORD*)v228 != 0) {
                    *(_BYTE*)(*(_QWORD*)v228 + 88LL) &= ~1u;
                  }
                  v229 = *(_QWORD*)(a1 + 64);
                  v230 = LANES128(v374_.v374).n128_u64[1];
                  v231 = (unsigned int*)LANES128(v374_.v374).n128_u64[0];
                  v232 = &v370_.v370;
                  *(_QWORD*)&v366_.v366 = GameData_2065ff0;
                  *((_QWORD*)&v366_.v366 + 1) = a1;
                  *(_QWORD*)&v370_.v372 = &v370_.v370;
                  *(_QWORD*)(a1 + 72) = v229;
                  *(_QWORD*)&v366_.v368 = &v366_.v366;
                  *(_QWORD*)&v370_.v370 = GameData_1fa0f58;
                  *((_QWORD*)&v370_.v370 + 1) = &v366_.v366;
                  if (v231 != (unsigned int*)v230) {
                    v233 = v6;
                    v234 = v7;
                    v235 = 0;
                    do {
                      v236 = *v231;
                      if (*v231 != 0) {
                        for (i = 0; i != 32; ++i) {
                          if (((v236 >> i) & 1) != 0) {
                            v378[0] = v235 + i;
                            if ((_QWORD)v370_.v372 == 0) {
                              goto LABEL_642;
                            }
                            (*(void (**)(_QWORD, _DWORD*))(
                                *(_QWORD*)v370_.v372 + 48LL))(v370_.v372, v378),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                          }
                        }
                      }
                      v235 += 32;
                      ++v231;
                    } while (v231 != (unsigned int*)v230);
                    v232 = (long double*)v370_.v372;
                    if ((long double*)v370_.v372 != &v370_.v370) {
                      v7 = v234;
                      v6 = v233;
                      v9 = v357;
                      v8 = v359;
                      if ((_QWORD)v370_.v372 != 0) {
                        v251 = 40;
                      LABEL_442:
                        (*(void (**)(__int64))(*(_QWORD*)v232 + v251))(
                            (__int64)v232),
                            v14 =
                                COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v15 =
                                COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v16 =
                                COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v17 =
                                COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v18 =
                                COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v19 =
                                COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v343 =
                                COERCE_AS(__typeof__(v343),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v39 =
                                COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v40 =
                                COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v41 =
                                COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v42 =
                                COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v43 =
                                COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v44 =
                                COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      }
                      if ((long double*)v366_.v368 == &v366_.v366) {
                        v270 = 32;
                      }
                      else {
                        if ((_QWORD)v366_.v368 == 0) {
                          goto LABEL_448;
                        }
                        v270 = 40;
                      }
                      (*(void (**)(__int64))(*(_QWORD*)v366_.v368 + v270))(
                          (__int64)v366_.v368),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                    LABEL_448:
                      if (*(_QWORD*)(a1 + 64) != *(_QWORD*)(a1 + 72)) {
                        if (*v363 != 0) {
                          *(_BYTE*)(*v363 + 88) |= 1u;
                          *(_QWORD*)(a1 + 88) = 0;
                          v271 = *(_QWORD*)(a1 + 56);
                          if (v271 != 0) {
                            v272 = *(_QWORD*)(a1 + 64);
                            v273 = *(_QWORD*)(a1 + 72) - v272;
                            if (v273 != 0) {
                              v274 = *(_QWORD*)(v272 + 8);
                              if (v274 != 0) {
                                *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v271) + 24) +
                                           8LL) = v274,
                                           v14 = COERCE_AS(
                                               __typeof__(v14),
                                               PSEUDO_REGISTER(__n128, "v1",
                                                               "=w")),
                                           v15 = COERCE_AS(
                                               __typeof__(v15),
                                               PSEUDO_REGISTER(__n128, "v2",
                                                               "=w")),
                                           v16 = COERCE_AS(
                                               __typeof__(v16),
                                               PSEUDO_REGISTER(__n128, "v3",
                                                               "=w")),
                                           v17 = COERCE_AS(
                                               __typeof__(v17),
                                               PSEUDO_REGISTER(__n128, "v1",
                                                               "=w")),
                                           v18 = COERCE_AS(
                                               __typeof__(v18),
                                               PSEUDO_REGISTER(__n128, "v2",
                                                               "=w")),
                                           v19 = COERCE_AS(
                                               __typeof__(v19),
                                               PSEUDO_REGISTER(__n128, "v3",
                                                               "=w")),
                                           v343 = COERCE_AS(
                                               __typeof__(v343),
                                               PSEUDO_REGISTER(float, "s0",
                                                               "=w")),
                                           v39 = COERCE_AS(
                                               __typeof__(v39),
                                               PSEUDO_REGISTER(__n128, "v1",
                                                               "=w")),
                                           v40 = COERCE_AS(
                                               __typeof__(v40),
                                               PSEUDO_REGISTER(__n128, "v2",
                                                               "=w")),
                                           v41 = COERCE_AS(
                                               __typeof__(v41),
                                               PSEUDO_REGISTER(__n128, "v3",
                                                               "=w")),
                                           v42 = COERCE_AS(
                                               __typeof__(v42),
                                               PSEUDO_REGISTER(__n128, "v1",
                                                               "=w")),
                                           v43 = COERCE_AS(
                                               __typeof__(v43),
                                               PSEUDO_REGISTER(__n128, "v2",
                                                               "=w")),
                                           v44 = COERCE_AS(
                                               __typeof__(v44),
                                               PSEUDO_REGISTER(__n128, "v3",
                                                               "=w"));
                                v275 = *(_DWORD*)(a1 + 92) + 1;
                                v273 = (__int64)(*(_QWORD*)(a1 + 72) -
                                                 *(_QWORD*)(a1 + 64)) >>
                                       4;
                              LABEL_481:
                                if (v273 <= (unsigned __int64)v275) {
                                  v283 = 0;
                                }
                                else {
                                  v283 = v275;
                                }
                                *(_DWORD*)(a1 + 92) = v283;
                                goto LABEL_485;
                              }
                              v273 >>= 4;
                            }
                            v275 = 1;
                            goto LABEL_481;
                          }
                        }
                        else {
                          *(_QWORD*)(a1 + 88) = 0;
                        }
                      }
                    LABEL_485:
                      v284 = *(_QWORD*)(a1 + 8);
                      if (v284 != 0) {
                        v285 = std___1___shared_weak_count_lock(v284),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v15 = COERCE_AS(__typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v16 = COERCE_AS(__typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v17 = COERCE_AS(__typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v343 = COERCE_AS(__typeof__(v343),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v43 = COERCE_AS(__typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v44 = COERCE_AS(__typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                        v286 = ui_LayoutAccessor_empty__ptr[0];
                        if (v285 != 0) {
                          if (*(_QWORD*)a1 != 0) {
                            v286 = *(__int64**)a1;
                          }
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v285 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v287 = v286;
                            (*(void (**)(__int64))(*(_QWORD*)v285 + 16LL))(
                                v285),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            std___1___shared_weak_count___release_weak(v285),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v18 = COERCE_AS(
                                    __typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v19 = COERCE_AS(
                                    __typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v343 = COERCE_AS(
                                    __typeof__(v343),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                                v39 = COERCE_AS(
                                    __typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v40 = COERCE_AS(
                                    __typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v41 = COERCE_AS(
                                    __typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                                v42 = COERCE_AS(
                                    __typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                                v43 = COERCE_AS(
                                    __typeof__(v43),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                                v44 = COERCE_AS(
                                    __typeof__(v44),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                            v286 = v287;
                          }
                        }
                      }
                      else {
                        v286 = ui_LayoutAccessor_empty__ptr[0];
                      }
                      v288 = ui_LayoutAccessor_FindAlignment(v286, "A_Icon"),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v343 = COERCE_AS(__typeof__(v343),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v39 = COERCE_AS(__typeof__(v39),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v42 = COERCE_AS(__typeof__(v42),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
                      if (v288 != 0) {
                        Alignment_56b600(v288),
                            v14 =
                                COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v15 =
                                COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v16 =
                                COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v17 =
                                COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v18 =
                                COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v19 =
                                COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v343 =
                                COERCE_AS(__typeof__(v343),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v39 =
                                COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v40 =
                                COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v41 =
                                COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v42 =
                                COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v43 =
                                COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v44 =
                                COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                      }
                      v277 = *(_DWORD*)(a1 + 96) | 4;
                      goto LABEL_495;
                    }
                    v7 = v234;
                    v6 = v233;
                    v9 = v357;
                    v8 = v359;
                  }
                  v251 = 32;
                  goto LABEL_442;
                }
                v244 = *(_DWORD**)(a1 + 64);
                v243 = *(_DWORD**)(a1 + 72);
                if (v244 == v243) {
                  v249 = (int*)(a1 + 92);
                  v250 = 0;
                  v245 = 0;
                }
                else {
                  v245 = 0;
                  do {
                    while (1) {
                      v246 = (*v244 >> 5) & 0x7F;
                      if (v246 + 1 >
                              (unsigned __int64)((__int64)(LANES128(v374_.v374)
                                                               .n128_u64[1] -
                                                           LANES128(v374_.v374)
                                                               .n128_u64[0]) >>
                                                 2) ||
                          ((*(_DWORD*)(LANES128(v374_.v374).n128_u64[0] +
                                       4LL * v246) >>
                            *v244) &
                           1) == 0) {
                        break;
                      }
                      v244 += 4;
                      if (v244 == v243) {
                        goto LABEL_396;
                      }
                    }
                    v247 = v244 + 4;
                    if (v244 + 4 == v243) {
                      v243 = v244;
                    }
                    else {
                      do {
                        v248 = v247[1];
                        *(v247 - 2) = *v247;
                        *(v247 - 1) = v248;
                        v247 += 2;
                      } while (v247 != (_QWORD*)v243);
                      v243 = v247 - 2;
                    }
                    *(_QWORD*)(a1 + 72) = v243;
                    v245 = 1;
                  } while (v244 != v243);
                LABEL_396:
                  v249 = (int*)(a1 + 92);
                  v250 = (__int64)v243 - *(_QWORD*)(a1 + 64);
                  if (*(int*)(a1 + 92) < (unsigned __int64)(v250 >> 4)) {
                    if ((v245 & 1) == 0) {
                      v245 = 0;
                    LABEL_426:
                      v262 = &v366_.v366;
                      *(_QWORD*)&v366_.v366 = GameData_2065bf0;
                      *((_QWORD*)&v366_.v366 + 1) = a1 + 56;
                      *(_QWORD*)&v366_.v368 = &v366_.v366;
                      if (v374_.v376 == 0) {
                        goto LABEL_468;
                      }
                      v353 = v250;
                      v356 = v7;
                      v263 = LANES128(v374_.v374).n128_u64[1];
                      v264 = (unsigned int*)LANES128(v374_.v374).n128_u64[0];
                      *(_QWORD*)&v370_.v370 = GameData_1fa0f58;
                      *((_QWORD*)&v370_.v370 + 1) = &v366_.v366;
                      v265 = &v370_.v370;
                      *(_QWORD*)&v370_.v372 = &v370_.v370;
                      if (LANES128(v374_.v374).n128_u64[0] ==
                          LANES128(v374_.v374).n128_u64[1]) {
                        v7 = v356;
                        v250 = v353;
                        v269 = 32;
                      }
                      else {
                        v352 = v6;
                        v266 = 0;
                        do {
                          v267 = *v264;
                          if (*v264 != 0) {
                            for (j = 0; j != 32; ++j) {
                              if (((v267 >> j) & 1) != 0) {
                                v378[0] = v266 + j;
                                if ((_QWORD)v370_.v372 == 0) {
                                  goto LABEL_642;
                                }
                                (*(void (**)(_QWORD, _DWORD*))(
                                    *(_QWORD*)v370_.v372 + 48LL))(v370_.v372,
                                                                  v378),
                                    v14 = COERCE_AS(
                                        __typeof__(v14),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                                    v15 = COERCE_AS(
                                        __typeof__(v15),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                                    v16 = COERCE_AS(
                                        __typeof__(v16),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                                    v17 = COERCE_AS(
                                        __typeof__(v17),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                                    v18 = COERCE_AS(
                                        __typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                                    v19 = COERCE_AS(
                                        __typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                                    v343 = COERCE_AS(
                                        __typeof__(v343),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                                    v39 = COERCE_AS(
                                        __typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                                    v40 = COERCE_AS(
                                        __typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                                    v41 = COERCE_AS(
                                        __typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                                    v42 = COERCE_AS(
                                        __typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                                    v43 = COERCE_AS(
                                        __typeof__(v43),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                                    v44 = COERCE_AS(
                                        __typeof__(v44),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                              }
                            }
                          }
                          v266 += 32;
                          ++v264;
                        } while (v264 != (unsigned int*)v263);
                        v265 = (long double*)v370_.v372;
                        if ((long double*)v370_.v372 == &v370_.v370) {
                          v9 = v357;
                          v8 = v359;
                          v7 = v356;
                          v269 = 32;
                          v6 = v352;
                          v250 = v353;
                        }
                        else {
                          v9 = v357;
                          v8 = v359;
                          v7 = v356;
                          v6 = v352;
                          v250 = v353;
                          if ((_QWORD)v370_.v372 == 0) {
                            goto LABEL_465;
                          }
                          v269 = 40;
                        }
                      }
                      (*(void (**)(__int64))(*(_QWORD*)v265 + v269))(
                          (__int64)v265),
                          v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v15 = COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v16 = COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v17 = COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v343 = COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v43 = COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                    LABEL_465:
                      v262 = (long double*)v366_.v368;
                      if ((long double*)v366_.v368 != &v366_.v366) {
                        if ((_QWORD)v366_.v368 == 0) {
                        LABEL_470:
                          v279 = *(_QWORD*)(a1 + 64);
                          v280 = *(_QWORD*)(a1 + 72) - v279;
                          if (((v280 == v250) & ~v245) == 0) {
                            v281 = *v249;
                            if (v281 < v280 >> 4) {
                              v282 = *(_QWORD*)(v279 + 16 * v281 + 8);
                              if (v282 != 0) {
                                *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(*v363) + 24) +
                                           8LL) = v282,
                                           v14 = COERCE_AS(
                                               __typeof__(v14),
                                               PSEUDO_REGISTER(__n128, "v1",
                                                               "=w")),
                                           v15 = COERCE_AS(
                                               __typeof__(v15),
                                               PSEUDO_REGISTER(__n128, "v2",
                                                               "=w")),
                                           v16 = COERCE_AS(
                                               __typeof__(v16),
                                               PSEUDO_REGISTER(__n128, "v3",
                                                               "=w")),
                                           v17 = COERCE_AS(
                                               __typeof__(v17),
                                               PSEUDO_REGISTER(__n128, "v1",
                                                               "=w")),
                                           v18 = COERCE_AS(
                                               __typeof__(v18),
                                               PSEUDO_REGISTER(__n128, "v2",
                                                               "=w")),
                                           v19 = COERCE_AS(
                                               __typeof__(v19),
                                               PSEUDO_REGISTER(__n128, "v3",
                                                               "=w")),
                                           v343 = COERCE_AS(
                                               __typeof__(v343),
                                               PSEUDO_REGISTER(float, "s0",
                                                               "=w")),
                                           v39 = COERCE_AS(
                                               __typeof__(v39),
                                               PSEUDO_REGISTER(__n128, "v1",
                                                               "=w")),
                                           v40 = COERCE_AS(
                                               __typeof__(v40),
                                               PSEUDO_REGISTER(__n128, "v2",
                                                               "=w")),
                                           v41 = COERCE_AS(
                                               __typeof__(v41),
                                               PSEUDO_REGISTER(__n128, "v3",
                                                               "=w")),
                                           v42 = COERCE_AS(
                                               __typeof__(v42),
                                               PSEUDO_REGISTER(__n128, "v1",
                                                               "=w")),
                                           v43 = COERCE_AS(
                                               __typeof__(v43),
                                               PSEUDO_REGISTER(__n128, "v2",
                                                               "=w")),
                                           v44 = COERCE_AS(
                                               __typeof__(v44),
                                               PSEUDO_REGISTER(__n128, "v3",
                                                               "=w"));
                              }
                            }
                          }
                          goto LABEL_496;
                        }
                        v278 = 40;
                      LABEL_469:
                        (*(void (**)(__int64))(*(_QWORD*)v262 + v278))(
                            (__int64)v262),
                            v14 =
                                COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v15 =
                                COERCE_AS(__typeof__(v15),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v16 =
                                COERCE_AS(__typeof__(v16),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v17 =
                                COERCE_AS(__typeof__(v17),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v18 =
                                COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v19 =
                                COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v343 =
                                COERCE_AS(__typeof__(v343),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v39 =
                                COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v40 =
                                COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v41 =
                                COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                            v42 =
                                COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v43 =
                                COERCE_AS(__typeof__(v43),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v44 =
                                COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                        goto LABEL_470;
                      }
                    LABEL_468:
                      v278 = 32;
                      goto LABEL_469;
                    }
                    v245 = 1;
                  LABEL_425:
                    *(_DWORD*)(a1 + 88) = 0;
                    goto LABEL_426;
                  }
                }
                *v249 = 0;
                goto LABEL_425;
              }
              v8 = v359;
            }
            v220 = 32;
            goto LABEL_362;
          }
        }
        else {
          v99 = MapUtil_756c20(v10, v12),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
          v100 = *(_QWORD*)(a1 + 8);
          if (v100 != 0) {
            goto LABEL_133;
          }
        }
        v102 = ui_LayoutAccessor_empty__ptr[0];
        goto LABEL_140;
      }
      v72 = a1 + 16;
      v71 = *(_QWORD*)(a1 + 16);
      if (v71 != 0) {
        *(_BYTE*)(v71 + 88) &= ~1u;
      }
      *(_QWORD*)(a1 + 32) = *(_QWORD*)(a1 + 24);
      if (v10 == 0 || v10 == v12) {
        goto LABEL_130;
      }
      v73 = *(_QWORD*)(v12 + 440);
      v74 = v73 != 0 ? *(unsigned __int8*)(v73 + 16) : 9;
      v75 = *(unsigned __int8*)(*(_QWORD*)(v10 + 440) + 16LL);
      if (v75 == v74) {
        goto LABEL_130;
      }
      if (*(_BYTE*)(*(_QWORD*)(v10 + 440) + 16LL) != 0) {
        if (v74 == 0 && v75 == 3 || v75 < 3 ||
            (*(_DWORD*)(v10 + 416) & 8) != 0) {
          goto LABEL_130;
        }
      }
      else if (v74 == 3 || (*(_BYTE*)(v10 + 416) & 8) != 0) {
        goto LABEL_130;
      }
      *(_QWORD*)&v366_.v366 = 0;
      *(_QWORD*)&v370_.v370 = GameData_1f98e48;
      *((_QWORD*)&v370_.v370 + 1) = &v366_.v366;
      *(_QWORD*)&v370_.v372 = &v370_.v370;
      game_map_BattleUtil_EachFactorSkill_7a8c20(v12, v10, 1, 0,
                                                 (__int64)&v370_.v370),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      if ((long double*)v370_.v372 == &v370_.v370) {
        v76 = 32;
      }
      else {
        if ((_QWORD)v370_.v372 == 0) {
          goto LABEL_82;
        }
        v76 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v370_.v372 + v76))((__int64)v370_.v372),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
    LABEL_82:
      if (*(_QWORD*)&v366_.v366 != 0) {
        v77 = *((unsigned __int8*)((_UNKNOWN*)0xF4LL) + *(_QWORD*)&v366_.v366 +
                6);
        if (v77 == 1) {
          v79 = *((unsigned __int8*)((_UNKNOWN*)0xF4LL) +
                  *(_QWORD*)&v366_.v366 + 6);
          v78 = "OnMap_IconFactor_Vantage";
        }
        else {
          if (v77 != 2) {
            goto LABEL_89;
          }
          v78 = "OnMap_IconFactor_Efficacy";
          v79 = 0;
        }
        v80 = GameHr_136ac50(ui_Manager_instance_ + 1264, 7, (__int64)v78),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
        if (v80 != 0) {
          GameRoutine_15fba20((_QWORD*)(a1 + 16), v79, v80),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
      }
    LABEL_89:
      if (game_gameui_UnitUtil_CheckDangerCritical(v12, v10)) {
        MapOnMapInfo_15fbb90((_QWORD*)(a1 + 16), 2u),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
      v81 = *(_QWORD*)GameData_212d020[0];
      if (*(_QWORD*)GameData_212d020[0] == 0) {
      LABEL_106:
        if (*(_QWORD*)(a1 + 128) != 0) {
          GameRoutine_6c3980(a1 + 144, v10),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
          v88 = game_UnitItemList_Find_70f780((unsigned __int16*)(a1 + 972),
                                              *(_QWORD*)(a1 + 128)),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
          if ((v88 & 0x80000000) == 0) {
            GameRoutine_15de630(1, a1 + 144, v88),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
          }
          v89 = *(_QWORD*)(a1 + 120);
          v90 = a1 + 144;
          *(_QWORD*)&v370_.v371 = a1;
          v91 = v12;
          *(_QWORD*)&v370_.v370 = GameData_2065d70;
          *((_QWORD*)&v370_.v370 + 1) = v12;
        }
        else {
          if ((*(_BYTE*)(a1 + 2396) & 1) != 0) {
            goto LABEL_117;
          }
          v89 = *(_QWORD*)(a1 + 120);
          *(_QWORD*)&v370_.v371 = a1;
          v90 = v10;
          v91 = v12;
          *(_QWORD*)&v370_.v370 = GameData_2065e70;
          *((_QWORD*)&v370_.v370 + 1) = v12;
        }
        *(_QWORD*)&v370_.v372 = &v370_.v370;
        game_map_BattleUtil_EachFactorSkill_7a8c20(v90, v91, 0, v89,
                                                   (__int64)&v370_.v370),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
        if ((long double*)v370_.v372 == &v370_.v370) {
          v92 = 32;
        }
        else {
          if ((_QWORD)v370_.v372 == 0) {
            goto LABEL_117;
          }
          v92 = 40;
        }
        (*(void (**)(__int64))(*(_QWORD*)v370_.v372 + v92))(
            (__int64)v370_.v372),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      LABEL_117:
        if (*(_QWORD*)(a1 + 24) != *(_QWORD*)(a1 + 32)) {
          if (*(_QWORD*)v72 != 0) {
            *(_BYTE*)(*(_QWORD*)v72 + 88LL) |= 1u;
            *(_QWORD*)(a1 + 48) = 0;
            v93 = *(_QWORD*)(a1 + 16);
            if (v93 != 0) {
              v94 = *(_QWORD*)(a1 + 24);
              v95 = *(_QWORD*)(a1 + 32) - v94;
              if (v95 != 0) {
                v96 = *(_QWORD*)(v94 + 8);
                if (v96 != 0) {
                  *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v93) + 24) +
                             8LL) = v96,
                             v14 =
                                 COERCE_AS(__typeof__(v14),
                                           PSEUDO_REGISTER(__n128, "v1", "=w")),
                             v15 =
                                 COERCE_AS(__typeof__(v15),
                                           PSEUDO_REGISTER(__n128, "v2", "=w")),
                             v16 =
                                 COERCE_AS(__typeof__(v16),
                                           PSEUDO_REGISTER(__n128, "v3", "=w")),
                             v17 =
                                 COERCE_AS(__typeof__(v17),
                                           PSEUDO_REGISTER(__n128, "v1", "=w")),
                             v18 =
                                 COERCE_AS(__typeof__(v18),
                                           PSEUDO_REGISTER(__n128, "v2", "=w")),
                             v19 =
                                 COERCE_AS(__typeof__(v19),
                                           PSEUDO_REGISTER(__n128, "v3", "=w")),
                             v343 =
                                 COERCE_AS(__typeof__(v343),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                             v39 =
                                 COERCE_AS(__typeof__(v39),
                                           PSEUDO_REGISTER(__n128, "v1", "=w")),
                             v40 =
                                 COERCE_AS(__typeof__(v40),
                                           PSEUDO_REGISTER(__n128, "v2", "=w")),
                             v41 =
                                 COERCE_AS(__typeof__(v41),
                                           PSEUDO_REGISTER(__n128, "v3", "=w")),
                             v42 =
                                 COERCE_AS(__typeof__(v42),
                                           PSEUDO_REGISTER(__n128, "v1", "=w")),
                             v43 =
                                 COERCE_AS(__typeof__(v43),
                                           PSEUDO_REGISTER(__n128, "v2", "=w")),
                             v44 =
                                 COERCE_AS(__typeof__(v44),
                                           PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v97 = *(_DWORD*)(a1 + 52) + 1;
                  v95 =
                      (__int64)(*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) >> 4;
                LABEL_126:
                  if (v95 <= (unsigned __int64)v97) {
                    v98 = 0;
                  }
                  else {
                    v98 = v97;
                  }
                  *(_DWORD*)(a1 + 52) = v98;
                  goto LABEL_130;
                }
                v95 >>= 4;
              }
              v97 = 1;
              goto LABEL_126;
            }
          }
          else {
            *(_QWORD*)(a1 + 48) = 0;
          }
        }
      LABEL_130:
        game_15fc3b0(a1, v12, v10),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v343 =
                COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
        goto LABEL_131;
      }
      v82 = *(_QWORD*)(v81 + 104);
      if (v82 != 0) {
        v83 = *(_QWORD*)(v81 + 96);
        v84 = *(_QWORD*)(v81 + 104);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v82 + 16), 1u,
                                  memory_order_relaxed);
        *(_QWORD*)&v366_.v366 = 0;
        *((_QWORD*)&v366_.v366 +
          1) = std___1___shared_weak_count_lock(v84),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
        if (*((_QWORD*)&v366_.v366 + 1) != 0) {
          *(_QWORD*)&v366_.v366 = v83;
          std___1___shared_weak_count___release_weak(v82),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
          if (v83 == 0) {
            goto LABEL_105;
          }
          if (*(_BYTE*)(v83 + 16) != 1 ||
              (v85 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                8LL * *(unsigned __int16*)(v83 + 8))) == 0) {
            if (*(_WORD*)(v10 + 1952) == 0) {
              goto LABEL_105;
            }
            v85 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                             8LL * *(unsigned __int16*)(v10 + 1952));
            if (v85 == 0) {
              goto LABEL_105;
            }
          }
          game_6e8720((__int64)&v370_.v370, v85),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
          if (!UnitItem_6e8bc0((unsigned __int16*)&v370_.v370, v10)) {
            goto LABEL_105;
          }
          v86 = *(_QWORD*)(v85 + 24);
          *(_QWORD*)&v370_.v371 = a1;
          *(_QWORD*)&v370_.v372 = &v370_.v370;
          *(_QWORD*)&v370_.v370 = GameData_2065c70;
          *((_QWORD*)&v370_.v370 + 1) = v12;
          game_map_BattleUtil_EachFactorSkill_7a8e00(v86 + 8, v12 + 1744,
                                                     (__int64)&v370_.v370),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
          if ((long double*)v370_.v372 == &v370_.v370) {
            v87 = 32;
            goto LABEL_641;
          }
          if ((_QWORD)v370_.v372 != 0) {
            v87 = 40;
          LABEL_641:
            (*(void (**)(__int64))(*(_QWORD*)v370_.v372 + v87))(
                (__int64)v370_.v372),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v343 = COERCE_AS(__typeof__(v343),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
          }
        }
        else {
          std___1___shared_weak_count___release_weak(v82),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
      }
      else {
        *(_OWORD*)&v366_.v366 = (__typeof__(*(_OWORD*)&v366_.v366)){0};
      }
    LABEL_105:
      GameRoutine_15ff160((__int64)&v366_.v366),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      goto LABEL_106;
    }
  }
  v29 = *(_QWORD*)(a1 + 8);
  if (v29 == 0) {
    result = LayoutAccessor_155ea30(ui_LayoutAccessor_empty__ptr[0]),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
    if ((result & 1) == 0) {
      return result;
    }
    goto LABEL_20;
  }
  v30 = std___1___shared_weak_count_lock(v29),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v31 = ui_LayoutAccessor_empty__ptr[0];
  if (v30 != 0) {
    if (*(_QWORD*)a1 != 0) {
      v31 = *(__int64**)a1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v32 = v31;
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      std___1___shared_weak_count___release_weak(v30),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v343 =
              COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v31 = v32;
    }
  }
  result = LayoutAccessor_155ea30(v31),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if ((result & 1) != 0) {
  LABEL_20:
    v33 = *(_QWORD*)(a1 + 8);
    if (v33 != 0) {
      v34 = std___1___shared_weak_count_lock(v33),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v343 = COERCE_AS(__typeof__(v343), PSEUDO_REGISTER(float, "s0", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v35 = ui_LayoutAccessor_empty__ptr[0];
      if (v34 != 0) {
        if (*(_QWORD*)a1 != 0) {
          v35 = *(__int64**)a1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v36 = v35;
          (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
          std___1___shared_weak_count___release_weak(v34),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
          v35 = v36;
        }
      }
    }
    else {
      v35 = ui_LayoutAccessor_empty__ptr[0];
    }
    return LayoutAccessor_155e830((__int64)v35, 0);
  }
  return result;
}

__int64 game_16dbb80(__int64* a1)
{

#pragma clang fp contract(off)
  int v1;
  int v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
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
  _BOOL4 v24;
  __int64 v25;
  __int64 v27;
  char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  const char* v35;
  int v36;
  int v37;
  const char* v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  float* v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  char v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  atomic_ullong* v64;
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
  float v76;
  int v77;
  int v78;
  const char* v80[2];
  struct {
    __int64 v81;
    __int64 v82;
    char* v83;
  } v81_;

  v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
  if (a1[121] == 0) {
    return (*(__int64 (**)(__int64*))(*a1 + 672))(a1);
  }
  v4 = a1[120];
  if (v4 == 0) {
    return (*(__int64 (**)(__int64*))(*a1 + 672))(a1);
  }
  v5 = a1 + 119;
  v6 = std___1___shared_weak_count_lock(v4),
  v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v6 == 0) {
    goto LABEL_11;
  }
  v7 = *v5;
  if (*v5 != 0) {
    v1 = *(unsigned __int8*)(v7 + 24);
    v8 = v7 + 152;
    if (v1 == 0) {
      v8 = 0;
    }
    v9 = v8 != a1[121];
  }
  else {
    v9 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v11 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    std___1___shared_weak_count___release_weak(v11),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v9) {
      goto LABEL_11;
    }
  LABEL_15:
    if ((v1 & 1) == 0) {
      return (*(__int64 (**)(__int64*))(*a1 + 672))(a1);
    }
    goto LABEL_16;
  }
  if (!v9) {
    goto LABEL_15;
  }
LABEL_11:
  v10 = a1[120];
  if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
    return (*(__int64 (**)(__int64*))(*a1 + 672))(a1);
  }
LABEL_16:
  (*(void (**)(__int64*))(*a1 + 664))(a1),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
  LayoutAccessor_1560070((void*)(&v81_.v81), a1 + 119, "L_Cursor"),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v81_.v82 != 0) {
    v12 = std___1___shared_weak_count_lock(v81_.v82),
    v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    v13 = (__int64*)v81_.v81;
    if (v81_.v82 != 0) {
      std___1___shared_weak_count___release_weak(v81_.v82),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    }
    if (v12 != 0 && v13 != nullptr) {
      if ((LayoutAccessor_1563280(v13, (__int64)"Idle", 0) & 1) == 0) {
        GameHr_1562680((__int64)v13, "Idle", 0x1.0000000000000p+0f),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
      }
      goto LABEL_24;
    }
    if (v12 != 0) {
    LABEL_24:
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
        std___1___shared_weak_count___release_weak(v12),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
      }
    }
  }
  v14 = ui_LayoutAccessor_FindPane(a1 + 119, (__int64)"MenuItemList"),
  v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v14 == 0) {
    goto LABEL_95;
  }
  v15 = v14;
  a1[72] = *(_QWORD*)(v14 + 24);
  v16 = ui_LayoutAccessor_FindPane(a1 + 119, (__int64)"L_Cursor"),
  v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v16 != 0) {
    v17 = a1[72];
    if (v17 != 0) {
      v18 = v16;
      if (v17 != *(_QWORD*)(v16 + 24)) {
        do {
          v19 = a1[121];
          if (v19 == 0) {
            goto LABEL_44;
          }
          v20 = a1[120];
          if (v20 == 0) {
            goto LABEL_48;
          }
          v21 = std___1___shared_weak_count_lock(v20),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
          if (v21 != 0) {
            v22 = *v5;
            if (*v5 != 0) {
              v2 = *(unsigned __int8*)(v22 + 24);
              v23 = v22 + 152;
              if (v2 == 0) {
                v23 = 0;
              }
              v24 = v23 != a1[121];
            }
            else {
              v24 = true;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if (!v24) {
                goto LABEL_47;
              }
            }
            else {
              v25 = v21;
              (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v78 = COERCE_AS(__typeof__(v78),
                                  PSEUDO_REGISTER(float, "s2", "=w"));
              std___1___shared_weak_count___release_weak(v25),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v78 = COERCE_AS(__typeof__(v78),
                                  PSEUDO_REGISTER(float, "s2", "=w"));
              if (!v24) {
              LABEL_47:
                if ((v2 & 1) == 0) {
                LABEL_48:
                  if (v17 == 0) {
                    break;
                  }
                  goto LABEL_49;
                }
                goto LABEL_42;
              }
            }
          }
          v19 = a1[120];
          if (v19 != 0) {
            if (*(_QWORD*)(v19 + 8) == -1) {
              goto LABEL_48;
            }
          LABEL_42:
            v19 = a1[121];
            if (v19 != 0) {
              v19 = *(_QWORD*)(v19 + 24);
            }
          }
        LABEL_44:
          if (v17 == v19) {
            break;
          }
        LABEL_49:
          v17 = *(_QWORD*)(a1[72] + 24);
          a1[72] = v17;
        } while (v17 != 0 && v17 != *(_QWORD*)(v18 + 24));
      }
    }
  }
  *((_DWORD*)a1 + 146) = 0;
  v27 = *(_QWORD*)(v15 + 40);
  if (v27 == v15 + 32) {
  LABEL_77:
    v35 = (const char*)(*(__int64 (**)(__int64*))(*a1 + 288))(a1),
    v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    if (ui_LayoutAccessor_FindPartsLayout(a1 + 119, v35) != 0) {
      v36 = (*(__int64 (**)(__int64*))(a1[22] + 8))(a1 + 22),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
      *((_DWORD*)a1 + 146) = v36 + 1;
      if ((v36 & 0x80000000) == 0) {
        v37 = 0;
        do {
          v38 = (const char*)(*(__int64 (**)(__int64*))(*a1 + 288))(a1),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
          v39 = game_util_Format("L_MenuItem%02d", v37),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
          LayoutAccessor_1560520(a1 + 119, v38, "MenuItemList", v39),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(float, "s2", "=w"));
          ++v37;
        } while (v37 < (signed __int32)*((_DWORD*)a1 + 146));
      }
      v40 = ui_LayoutAccessor_FindAlignment(a1 + 119, "MenuItemList"),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
      if (v40 != 0) {
        Alignment_56b600(v40),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
        v41 = a1[120];
        if (v41 != 0) {
          v42 = std___1___shared_weak_count_lock(v41),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
          if (v42 != 0) {
            v43 = v42;
            if (*v5 != 0) {
              ControlCreator_13633c0(*v5),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v78 = COERCE_AS(__typeof__(v78),
                                  PSEUDO_REGISTER(float, "s2", "=w"));
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v78 = COERCE_AS(__typeof__(v78),
                                  PSEUDO_REGISTER(float, "s2", "=w"));
              std___1___shared_weak_count___release_weak(v43),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v78 = COERCE_AS(__typeof__(v78),
                                  PSEUDO_REGISTER(float, "s2", "=w"));
            }
          }
        }
      }
    }
    goto LABEL_88;
  }
  do {
    v28 = game_util_Format("L_MenuItem%02d", *((_DWORD*)a1 + 146)),
    v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    v29 = strlen(v28),
    v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v29 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    }
    v30 = v29;
    if (v29 >= 0x17) {
      if ((v29 | 7) == 0x17) {
        v32 = 26;
      }
      else {
        v32 = (v29 | 7) + 1;
      }
      v31 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v32,
                                                  16, 0),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
      v81_.v82 = v30;
      v81_.v83 = v31;
      v81_.v81 = v32 | 1;
    LABEL_65:
      memmove((__int64)v31, (__int64)v28, v30),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
      goto LABEL_66;
    }
    v31 = (char*)&v81_.v81 + 1;
    LOBYTE(v81_.v81) = 2 * v29;
    if (v29 != 0) {
      goto LABEL_65;
    }
  LABEL_66:
    v31[v30] = 0;
    if ((v81_.v81 & 1) != 0) {
      v33 = v81_.v83;
    }
    else {
      v33 = (char*)&v81_.v81 + 1;
    }
    if (ui_LayoutAccessor_FindPane(a1 + 119, (__int64)v33) != 0) {
      ++*((_DWORD*)a1 + 146);
    }
    if ((v81_.v81 & 1) != 0 && v81_.v83 != nullptr) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, (__int64)v81_.v83),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    }
    v27 = *(_QWORD*)(v27 + 8);
  } while (v27 != v15 + 32);
  if (*((_DWORD*)a1 + 146) == 0) {
    goto LABEL_77;
  }
LABEL_88:
  v44 = ui_LayoutAccessor_FindPane(a1 + 119, (__int64)"MenuItemTemp"),
  v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v44 != 0) {
    *(_BYTE*)(v44 + 88) &= ~1u;
  }
  v45 = ui_LayoutAccessor_FindPane(a1 + 119, (__int64)"L_MenuItem00"),
  v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v45 != 0) {
    v46 = (float*)(v45 + 48);
    v47 = v45;
    v48 = a1[22];
    v49 = *(_DWORD*)(v45 + 56);
    *(__int64*)((char*)a1 + 204) = *(_QWORD*)(v45 + 48);
    *((_DWORD*)a1 + 53) = v49;
    v50 = (*(__int64 (**)(void*))(v48 + 16))((void*)&a1[22]),
    v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    v51 = game_util_Format("L_MenuItem%02d", v50),
    v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    v52 = ui_LayoutAccessor_FindPane(a1 + 119, (__int64)v51),
    v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v52 != 0) {
      *((float*)a1 + 55) = *(float*)(v52 + 52) - *(float*)(v47 + 52);
    }
    v53 = ui_LayoutAccessor_FindPane(a1 + 119, (__int64)"L_MenuItem01"),
    v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v53 != 0) {
      *((float*)a1 + 54) = *(float*)(v53 + 48) - *v46;
    }
  }
LABEL_95:
  if ((*((_BYTE*)a1 + 356) & 1) != 0) {
    v54 = std___1___shared_weak_count_lock(a1[120]),
    v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v55 = v54;
      (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
      std___1___shared_weak_count___release_weak(v55),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    }
    v56 = *((_DWORD*)a1 + 93);
    v57 = *(_QWORD*)(a1[121] + 24);
    *(_QWORD*)(v57 + 48) = *(__int64*)((char*)a1 + 364);
    v58 = *(_BYTE*)(v57 + 88);
    *(_DWORD*)(v57 + 56) = v56;
    *(_BYTE*)(v57 + 88) = v58 | 0x10;
  }
  v59 = ui_LayoutAccessor_FindPartsLayout(a1 + 119, "L_ScrollBar"),
  v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v59 != 0) {
    v60 = v59;
    v61 = a1[120];
    if (v61 != 0 && (v62 = std___1___shared_weak_count_lock(v61)) != 0) {
      v63 = *v5;
      v64 = (atomic_ullong*)(v62 + 8);
      v65 = v62;
      v81_.v81 = v63;
      v81_.v82 = v62;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dea0(a1 + 51, &v81_.v81, v60),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
      if (atomic_fetch_add(v64, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
        std___1___shared_weak_count___release_weak(v65),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
      }
      if (atomic_fetch_add(v64, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
        std___1___shared_weak_count___release_weak(v65),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
      }
    }
    else {
      v81_.v81 = 0;
      v81_.v82 = 0;
      ui_LayoutAccessor_Setup_155dea0(a1 + 51, &v81_.v81, v60),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    }
  }
  v80[0] = (const char*)(*(__int64 (**)(__int64*))(*a1 + 336))(a1),
  v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
  v80[1] = (const char*)strlen(v80[0]),
  v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
  v66 = a1[107];
  if (v66 != 0) {
    v67 = std___1___shared_weak_count_lock(v66),
    v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v67 != 0) {
      v68 = a1[106];
      v69 = v67;
      if (v68 != 0) {
        GameRoutine_16e4a60((void*)(&v81_.v81), a1[106], (__int64)v80),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
        std___1___shared_weak_count___release_weak(v69),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
      }
      if (v68 != 0) {
        v70 = v81_.v82;
        if (v81_.v82 != 0) {
          v71 = std___1___shared_weak_count_lock(v81_.v82),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s2", "=w"));
          v72 = v81_.v81;
          v73 = v71;
          std___1___shared_weak_count___release_weak(v70),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(float, "s2", "=w"));
          if (v73 != 0 && v72 != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)v72 + 40LL))(v72, 1),
                v77 = COERCE_AS(__typeof__(v77),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v78 = COERCE_AS(__typeof__(v78),
                                PSEUDO_REGISTER(float, "s2", "=w"));
            *(_DWORD*)(v72 + 1028) = 27;
            KeyIcon_17aa380(v72, "TextKey", 0x1Bu),
                v77 = COERCE_AS(__typeof__(v77),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v78 = COERCE_AS(__typeof__(v78),
                                PSEUDO_REGISTER(float, "s2", "=w"));
            v74 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v72 + 8) + 24LL) + 24LL);
            if (v74 != 0) {
              v75 = (*(__int64 (**)(__int64, const char*, __int64))(
                  *(_QWORD*)v74 + 120LL))(v74, "Wdw", 1),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(float, "s2", "=w"));
              if (v75 != 0) {
                v76 = *(float*)(v75 + 80);
                (*(void (**)(__int64))(*(_QWORD*)v72 + 48LL))(v72),
                    v77 = COERCE_AS(__typeof__(v77),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v78 = COERCE_AS(__typeof__(v78),
                                    PSEUDO_REGISTER(float, "s2", "=w"));
                HIDWORD(v81_.v81) = v77;
                LODWORD(v81_.v82) = v78;
                *(float*)&v81_.v81 = (float)(v76 * 0x1.0000000000000p-1f) +
                                     -0x1.8000000000000p+4f;
                (*(void (**)(__int64, __int64*))(*(_QWORD*)v72 + 56LL))(
                    v72, &v81_.v81),
                    v77 = COERCE_AS(__typeof__(v77),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v78 = COERCE_AS(__typeof__(v78),
                                    PSEUDO_REGISTER(float, "s2", "=w"));
              }
            }
          LABEL_122:
            if (atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v78 = COERCE_AS(__typeof__(v78),
                                  PSEUDO_REGISTER(float, "s2", "=w"));
              std___1___shared_weak_count___release_weak(v73),
                  v77 = COERCE_AS(__typeof__(v77),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v78 = COERCE_AS(__typeof__(v78),
                                  PSEUDO_REGISTER(float, "s2", "=w"));
            }
          }
          else if (v73 != 0) {
            goto LABEL_122;
          }
        }
      }
    }
  }
  return (*(__int64 (**)(__int64*))(*a1 + 672))(a1);
}

__int64 game_171beb0(__int64 a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  _QWORD v9[2];
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  v9[0] = "L_ArrowL";
  v9[1] = 8;
  GameRoutine_159e180((void*)(&v10_.v10), (__int64*)(a1 + 848), v9);
  if (v10_.v11 != 0) {
    v4 = std___1___shared_weak_count_lock(v10_.v11);
    v5 = v10_.v10;
    if (v10_.v11 != 0) {
      std___1___shared_weak_count___release_weak(v10_.v11);
    }
    if ((a2 & 1) != 0 && v4 != 0 && v5 != 0) {
      GameHr_1562680(
          v5 + 88,
          game_menu_kTabAnimations[3 * *(unsigned __int8*)(v5 + 1041) + 2],
          0x1.0000000000000p+0f);
    }
    else if (v4 == 0) {
      goto LABEL_11;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
LABEL_11:
  v9[0] = "L_ArrowR";
  v9[1] = 8;
  GameRoutine_159e180((void*)(&v10_.v10), (__int64*)(a1 + 848), v9);
  result = v10_.v11;
  if (v10_.v11 == 0) {
    return result;
  }
  v7 = std___1___shared_weak_count_lock(v10_.v11);
  v8 = v10_.v10;
  result = v10_.v11;
  if (v10_.v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v10_.v11);
  }
  if ((a2 & 1) == 0 && v7 != 0 && v8 != 0) {
    result = GameHr_1562680(
        v8 + 88,
        game_menu_kTabAnimations[3 * *(unsigned __int8*)(v8 + 1041) + 2],
        0x1.0000000000000p+0f);
  }
  else if (v7 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

__int64 game_173df20(__int64 result)
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
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;
  struct {
    _QWORD v19[6];
    int v20;
    char gap68_[4];
    __int64 v21;
    __int64 v22;
    __int64 v23;
  } v19_;

  if (GameData_22632e0 == 0) {
    v1 = result;
    v2 = fw_memory_g_heap_manager_ptr;
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        632, 16, 0);
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
    GameData_22632e0 = v3;
    *(_QWORD*)(v3 + 152) = 0;
    *(_QWORD*)(v3 + 160) = 0;
    *(_QWORD*)(v3 + 192) = v3 + 200;
    *(_QWORD*)v3 = game_gameui_anonymous_ProcSkipHold_vtable;
    *(_QWORD*)(v3 + 168) = 0;
    *(_QWORD*)(v3 + 176) = 0;
    *(_QWORD*)(v3 + 184) = 0;
    *(_QWORD*)(v3 + 208) = 0;
    *(_QWORD*)(v3 + 216) = 0;
    *(_QWORD*)(v3 + 224) = 0;
    *(_QWORD*)(v3 + 232) = 0;
    *(_QWORD*)(v3 + 240) = 0;
    *(_QWORD*)(v3 + 304) = 0;
    *(_QWORD*)(v3 + 312) = 0;
    *(_QWORD*)(v3 + 288) = 0;
    *(_QWORD*)(v3 + 296) = v3 + 304;
    *(_DWORD*)(v3 + 248) = 1065353216;
    *(_DWORD*)(v3 + 352) = 1065353216;
    *(_DWORD*)(v3 + 384) = 1065353216;
    *(_DWORD*)(v3 + 528) = 1065353216;
    *(_DWORD*)(v3 + 560) = 1065353216;
    *(_QWORD*)(v3 + 464) = 0;
    *(_QWORD*)(v3 + 472) = v3 + 480;
    *(_QWORD*)(v3 + 272) = 0;
    *(_QWORD*)(v3 + 280) = 0;
    *(_QWORD*)(v3 + 256) = 0;
    *(_QWORD*)(v3 + 264) = 0;
    *(_QWORD*)(v3 + 320) = 0;
    *(_QWORD*)(v3 + 328) = 0;
    *(_QWORD*)(v3 + 336) = 0;
    *(_QWORD*)(v3 + 344) = 0;
    *(_QWORD*)(v3 + 360) = 0;
    *(_QWORD*)(v3 + 368) = 0;
    *(_QWORD*)(v3 + 376) = 0;
    *(_WORD*)(v3 + 392) = 0;
    *(_WORD*)(v3 + 416) = 0;
    *(_BYTE*)(v3 + 440) = 0;
    *(_QWORD*)(v3 + 480) = 0;
    *(_QWORD*)(v3 + 488) = 0;
    *(_QWORD*)(v3 + 448) = 0;
    *(_QWORD*)(v3 + 456) = 0;
    *(_QWORD*)(v3 + 520) = 0;
    *(_QWORD*)(v3 + 504) = 0;
    *(_QWORD*)(v3 + 512) = 0;
    *(_QWORD*)(v3 + 496) = 0;
    *(_QWORD*)(v3 + 536) = 0;
    *(_QWORD*)(v3 + 544) = 0;
    *(_QWORD*)(v3 + 552) = 0;
    *(_WORD*)(v3 + 568) = 0;
    *(_WORD*)(v3 + 592) = 0;
    *(_BYTE*)(v3 + 616) = 0;
    *(_DWORD*)(v3 + 624) = 0;
    v19_.v21 = 0;
    v19_.v22 = 0;
    v19_.v23 = 0;
    __builtin_memset(&v19_.v19[2], 0, 32);
    v19_.v19[0] = 0x800000018LL;
    v19_.v19[1] = 0x500000050LL;
    v19_.v20 = 0;
    game_1366bd0((void*)(&v17_.v17), (__int64)"Layout/Common.arc",
                 (__int64)"Common_SkipHold", (__int64)v19_.v19);
    v5 = v17_.v17;
    v6 = v17_.v18;
    v7 = *(_QWORD*)(v3 + 160);
    v17_.v17 = 0;
    v17_.v18 = 0;
    *(_QWORD*)(v3 + 152) = v5;
    *(_QWORD*)(v3 + 160) = v6;
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    v8 = v17_.v18;
    if (v17_.v18 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v17_.v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
    v9 = *(_QWORD*)(v3 + 160);
    v17_.v17 = *(_QWORD*)(v3 + 152);
    v17_.v18 = v9;
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dda0((_QWORD*)(v3 + 168), &v17_.v17);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
    else {
      ui_LayoutAccessor_Setup_155dda0((_QWORD*)(v3 + 168), &v17_.v17);
    }
    ui_LayoutAccessor_SetPriority(v3 + 168, 1210);
    LayoutAccessor_155c910((_QWORD*)(v3 + 272), (__int64*)(v3 + 168));
    LayoutAccessor_155c910((_QWORD*)(v3 + 448), (__int64*)(v3 + 168));
    LayoutAccessor_155cda0(v3 + 448, "Gauge", nullptr);
    GameRoutine_155da20(v3 + 448, 0x0.0p+0f);
    v10 = v19_.v21;
    if (v19_.v21 != 0) {
      v11 = v19_.v22;
      if (v19_.v21 == v19_.v22) {
        goto LABEL_23;
      }
      v12 = v19_.v22;
      do {
        v13 = *(_BYTE*)(v12 - 24);
        v12 -= 24;
        if ((v13 & 1) != 0) {
          v14 = *(_QWORD*)(v11 - 8);
          if (v14 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
              v15 = 128;
            }
            else {
              v15 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v15, v14);
          }
        }
        v11 = v12;
      } while (v12 != v10);
      v19_.v22 = v10;
      v10 = v19_.v21;
      if (v19_.v21 != 0) {
      LABEL_23:
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v16, v10);
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
    return ProcInst_657850(v3, (__int64)&GameData_21c67a8,
                           (__int64)"ProcSkipHold", 0, v1);
  }
  return result;
}

__attribute__((swiftcall)) void game_1796700(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int8 v9;
  __int64 v10;
  const char* v11[2];

  v4 = (_QWORD*)LayoutEx_579160(1072, 8);
  v5 = (__int64)(v4 + 3);
  v6 = v4;
  v4[1] = 0;
  v4[2] = 0;
  *v4 = GameData_20c9c40;
  game_17a9aa0((__int64)(v4 + 3), a1);
  *((_BYTE*)v6 + 1065) = 0;
  v6[3] = game_gameui_control_KeyArrow_vtable;
  v6[12] = GameData_20c9c00;
  v7 = fw_memory_g_heap_manager_ptr;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  *v8 = "Wait";
  v8[1] = 4;
  v11[0] = (const char*)GameRoutine_5766a0(a1, "Wait");
  if (v11[0] != nullptr) {
    ui_control_1889230((__int64)(v6 + 34), (__int64)v8, (__int64)v11);
  }
  v11[0] = "Wait";
  v11[1] = (_BYTE*)((_UNKNOWN*)0x4LL);
  Element_18863e0(v5, v11, 0);
  v9 = (unsigned __int8)GameRoutine_156d490(v6 + 14);
  *((_BYTE*)v6 + 1065) = v9;
  GameHr_1562680((__int64)(v6 + 14), game_menu_kTabAnimations[3 * v9],
                 0x1.0000000000000p+0f);
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v10, (__int64)v8);
  *a2 = v5;
  a2[1] = (__int64)v6;
  v6[3] = game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr;
  v6[12] = GameData_20c9df8;
}

__int64 game_17d3320(__int64 result, char a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  const char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;

  v2 = *(unsigned __int8*)(result + 88);
  v3 = *(_QWORD*)(result + 96);
  if ((v2 & 1) == 0) {
    v3 = v2 >> 1;
  }
  if (v3 != 0) {
    v4 = result;
    if ((a2 & 1) != 0 ||
        ((v2 & 1) != 0 ? (v5 = *(const char**)(result + 104))
                       : (v5 = (const char*)(result + 89)),
         (v6 = strlen(v5), v7 = *(_QWORD*)(v4 + 80), v6 >= v7)
             ? (v8 = *(_QWORD*)(v4 + 80))
             : (v8 = v6),
         (result = memcmp(*(_QWORD*)(v4 + 72), (__int64)v5, v8), v7 == v6)
             ? (v9 = (_DWORD)result == 0)
             : (v9 = false),
         !v9)) {
      v10 = *(_QWORD*)v4;
      if (*(_BYTE*)(*(_QWORD*)v4 + 1041LL) == 1) {
        if (*(_QWORD*)(v10 + 104) == 0 ||
            (spine_AnimationState_setTimeScale(0x1.0000000000000p+0f),
             v10 = *(_QWORD*)v4, *(_BYTE*)(*(_QWORD*)v4 + 1041LL) == 1)) {
          v11 = *(_QWORD*)(v10 + 104);
          if (v11 != 0 && spine_AnimationState_getCurrent(v11, 0) != 0) {
            spine_TrackEntry_setTimeScale(0x1.0000000000000p+0f);
          }
        }
      }
      if (*(_BYTE*)(*(_QWORD*)v4 + 1041LL) == 1) {
        v12 = *(_QWORD*)(*(_QWORD*)v4 + 104LL);
        if (v12 != 0 && spine_AnimationState_getCurrent(v12, 5u) != 0) {
          spine_TrackEntry_setTimeScale(0x1.0000000000000p+0f);
        }
      }
      spine_190b990(*(_QWORD*)v4, 1);
      if ((*(_BYTE*)(v4 + 88) & 1) != 0) {
        v13 = *(const char**)(v4 + 104);
      }
      else {
        v13 = (const char*)(v4 + 89);
      }
      v14 = strlen(v13);
      v15 = *(_QWORD*)v4;
      *(_QWORD*)(v4 + 72) = v13;
      *(_QWORD*)(v4 + 80) = v14;
      v16 = strlen(v13);
      result = GameHr_1916dd0(v15, 0, v13, 0x1.0000000000000p-1f, v16, 0);
      if (*(_BYTE*)(*(_QWORD*)v4 + 1041LL) == 1) {
        result = *(_QWORD*)(*(_QWORD*)v4 + 104LL);
        if (result != 0) {
          result = spine_AnimationState_getCurrent(result, 0);
          if (result != 0) {
            return spine_TrackEntry_setTrackTime(result, 0x0.0p+0f);
          }
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_17d3510(PSEUDO_X8 x8_, unsigned __int64 a1)
{
  char* a2 = (char*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  const char* v4;
  int v5;
  char* v6;
  char* v7;
  int v8;
  const char* v9;
  char* v10;
  unsigned __int64 ThreadAvailableCoreMaskEv;
  char v12;
  char* v13;
  unsigned __int64 v14;
  char v15;
  char* v16;
  unsigned __int64 v17;
  char v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64* v21;
  unsigned __int64 v22;
  char v23;
  char* v24;
  __int64 v25;
  _BYTE* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  const char* v31;
  __int64 v32;
  const char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64** v39;
  int v40;
  const char* v41;
  __int64 v42;
  struct {
    unsigned __int64 v43;
    unsigned __int64 v44;
    __int64 v45;
  } v43_;
  struct {
    __int64 v46[2];
    unsigned __int64 v47;
    __int64 (*v48)();
    __int64 v49;
  } v46_;
  struct {
    _BYTE v50[256];
    _BYTE* v51;
  } v50_;
  struct {
    __int64* v52;
    __int64 v53;
    __int64* v54;
    __int64 v55;
  } v52_;
  struct {
    _BYTE v56[8];
    char v57;
  } v56_;
  struct {
    const char* v58;
    __int64** v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
  } v58_;

  if ((unsigned int)a1 >> 29 == 1) {
    v3 = HIDWORD(a1);
    switch (a1 & 0x1FFFFFFF) {
    case 0uLL:
      if (v3 > 4) {
        goto LABEL_44;
      }
      *((_QWORD*)a2 + 1) = 0;
      *((_QWORD*)a2 + 2) = 0;
      *(_QWORD*)a2 = 0;
      *((_WORD*)a2 + 16) = 0;
      *((_QWORD*)a2 + 6) = 0;
      *((_DWORD*)a2 + 6) = 16;
      *((_DWORD*)a2 + 9) = 0;
      *((_DWORD*)a2 + 10) = -1;
      nn_os_GetThreadAvailableCoreMask();
      *((_DWORD*)a2 + 6) = 16;
      *((_WORD*)a2 + 16) = 257;
      *((_DWORD*)a2 + 9) = v3;
      *((_DWORD*)a2 + 10) = -3;
      *((_QWORD*)a2 + 6) = 1LL << v3;
      if (v3 == 0) {
        v4 = "MainThread";
        goto LABEL_9;
      }
      v52_.v52 = (__int64*)v3;
      v52_.v53 = 0;
      v31 = "Basic_Worker{}";
      v46_.v49 = 0;
      v52_.v54 = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
      v58_.v60 = 3;
      v46_.v46[0] = (__int64)v50_.v50;
      v46_.v46[1] = 256;
      v46_.v47 = 0;
      v46_.v48 = GameRoutine_64be60;
      v32 = 14;
      goto LABEL_72;
    case 1uLL:
      if (v3 != 0) {
        goto LABEL_44;
      }
      *((_QWORD*)a2 + 1) = 0;
      *((_QWORD*)a2 + 2) = 0;
      *(_QWORD*)a2 = 0;
      *((_WORD*)a2 + 16) = 0;
      *((_QWORD*)a2 + 6) = 0;
      *((_DWORD*)a2 + 6) = 16;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFF00000000LL;
      nn_os_GetThreadAvailableCoreMask();
      *((_QWORD*)a2 + 6) = 16;
      *((_DWORD*)a2 + 6) = 17;
      *((_WORD*)a2 + 16) = 257;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000004LL;
      if ((*a2 & 1) != 0) {
        *((_QWORD*)a2 + 1) = 7;
        v16 = *((char**)a2 + 2);
      }
      else {
        *a2 = 14;
        v16 = a2 + 1;
      }
      *(_DWORD*)(v16 + 3) = 1684107084;
      v40 = 1281315654;
      goto LABEL_87;
    case 2uLL:
      if (v3 > 2) {
        goto LABEL_44;
      }
      *((_QWORD*)a2 + 1) = 0;
      *((_QWORD*)a2 + 2) = 0;
      *(_QWORD*)a2 = 0;
      v8 = GameData_1c05754[v3];
      *((_WORD*)a2 + 16) = 0;
      *((_QWORD*)a2 + 6) = 0;
      *((_DWORD*)a2 + 6) = 16;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFF00000000LL;
      nn_os_GetThreadAvailableCoreMask();
      v46_.v49 = 0;
      LODWORD(v58_.v60) = 0;
      v56_.v56[0] = 0;
      v56_.v57 = 0;
      *((_WORD*)a2 + 16) = 257;
      *((_DWORD*)a2 + 9) = v8;
      *((_DWORD*)a2 + 10) = -3;
      *((_DWORD*)a2 + 6) = 17;
      v43_.v43 = (unsigned int)(v3 + 1);
      *((_QWORD*)a2 + 6) = 1LL << v8;
      v43_.v44 = 0;
      v43_.v45 = 3;
      v58_.v61 = 0;
      v58_.v62 = 1;
      v52_.v52 = v46_.v46;
      v52_.v53 = 1;
      v46_.v46[0] = (__int64)v50_.v50;
      v46_.v46[1] = 256;
      v50_.v51 = v50_.v50;
      v46_.v47 = 0;
      v46_.v48 = GameRoutine_64be60;
      v9 = "FS_Decode{}";
      v10 = "";
      goto LABEL_32;
    case 3uLL:
      if (v3 != 0) {
        goto LABEL_44;
      }
      *((_QWORD*)a2 + 1) = 0;
      *((_QWORD*)a2 + 2) = 0;
      *(_QWORD*)a2 = 0;
      *((_WORD*)a2 + 16) = 0;
      *((_QWORD*)a2 + 6) = 0;
      *((_DWORD*)a2 + 6) = 16;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFF00000000LL;
      *((_QWORD*)a2 + 6) = nn_os_GetThreadAvailableCoreMask();
      *((_DWORD*)a2 + 6) = 17;
      a2[33] = 1;
      ThreadAvailableCoreMaskEv = nn_os_GetThreadAvailableCoreMask();
      v12 = *a2;
      *((_QWORD*)a2 + 6) = ThreadAvailableCoreMaskEv;
      if ((v12 & 1) != 0) {
        *((_QWORD*)a2 + 1) = 12;
        v13 = *((char**)a2 + 2);
      }
      else {
        *a2 = 24;
        v13 = a2 + 1;
      }
      strcpy(v13, "FS_DecodeExt");
      return;
    case 4uLL:
      if (v3 != 0) {
        goto LABEL_44;
      }
      *((_QWORD*)a2 + 1) = 0;
      *((_QWORD*)a2 + 2) = 0;
      *(_QWORD*)a2 = 0;
      *((_WORD*)a2 + 16) = 0;
      *((_QWORD*)a2 + 6) = 0;
      *((_DWORD*)a2 + 6) = 16;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFF00000000LL;
      nn_os_GetThreadAvailableCoreMask();
      *((_QWORD*)a2 + 6) = 16;
      *((_DWORD*)a2 + 6) = 17;
      *((_WORD*)a2 + 16) = 257;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000004LL;
      if ((*a2 & 1) != 0) {
        *((_QWORD*)a2 + 1) = 16;
        v6 = *((char**)a2 + 2);
      }
      else {
        *a2 = 32;
        v6 = a2 + 1;
      }
      v33 = "FS_PostProcAsync";
      v6[16] = 0;
      goto LABEL_70;
    case 5uLL:
      if (v3 != 0) {
        goto LABEL_44;
      }
      *((_QWORD*)a2 + 1) = 0;
      *((_QWORD*)a2 + 2) = 0;
      *(_QWORD*)a2 = 0;
      *((_WORD*)a2 + 16) = 0;
      *((_QWORD*)a2 + 6) = 0;
      *((_DWORD*)a2 + 6) = 16;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFF00000000LL;
      *((_QWORD*)a2 + 6) = nn_os_GetThreadAvailableCoreMask();
      *((_DWORD*)a2 + 6) = 30;
      a2[33] = 1;
      v17 = nn_os_GetThreadAvailableCoreMask();
      v18 = *a2;
      *((_QWORD*)a2 + 6) = v17;
      if ((v18 & 1) != 0) {
        *((_QWORD*)a2 + 1) = 7;
        v16 = *((char**)a2 + 2);
      }
      else {
        *a2 = 14;
        v16 = a2 + 1;
      }
      *(_DWORD*)(v16 + 3) = 1128744770;
      v40 = 1113543494;
    LABEL_87:
      *(_DWORD*)v16 = v40;
      v16[7] = 0;
      return;
    case 6uLL:
      if (v3 > 4) {
        goto LABEL_44;
      }
      *((_QWORD*)a2 + 1) = 0;
      *((_QWORD*)a2 + 2) = 0;
      *(_QWORD*)a2 = 0;
      *((_WORD*)a2 + 16) = 0;
      *((_QWORD*)a2 + 6) = 0;
      *((_DWORD*)a2 + 6) = 16;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFF00000000LL;
      nn_os_GetThreadAvailableCoreMask();
      *((_DWORD*)a2 + 6) = 16;
      v43_.v43 = v3;
      v46_.v49 = 0;
      LODWORD(v58_.v60) = 0;
      v56_.v56[0] = 0;
      v56_.v57 = 0;
      *((_WORD*)a2 + 16) = 257;
      *((_DWORD*)a2 + 9) = v3;
      *((_DWORD*)a2 + 10) = -3;
      v43_.v44 = 0;
      v43_.v45 = 3;
      v58_.v61 = 0;
      v58_.v62 = 1;
      *((_QWORD*)a2 + 6) = 1LL << v3;
      v52_.v52 = v46_.v46;
      v52_.v53 = 1;
      v46_.v46[0] = (__int64)v50_.v50;
      v46_.v46[1] = 256;
      v50_.v51 = v50_.v50;
      v46_.v47 = 0;
      v46_.v48 = GameRoutine_64be60;
      v9 = "GFX_Worker{}";
      v10 = "";
    LABEL_32:
      v58_.v58 = v9;
      v58_.v59 = (__int64**)v10;
      v52_.v54 = (__int64*)&v43_.v43;
      v52_.v55 = 3;
      GameRoutine_6380e0((__int64)&v58_.v58, &v52_.v52);
      if (v56_.v57 == 1) {
        std___1_locale_Destroy_locale((__int64)v56_.v56);
      }
      v19 = v46_.v47;
      if (v46_.v47 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v20 = (__int64)v50_.v51;
      if (v46_.v47 >= 0x17) {
        if ((v46_.v47 | 7) == 0x17) {
          v25 = 26;
        }
        else {
          v25 = (v46_.v47 | 7) + 1;
        }
        v21 = (__int64*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                       v25, 16, 0);
        v52_.v53 = v19;
        v52_.v54 = v21;
        v52_.v52 = (__int64*)(v25 | 1);
      }
      else {
        LOBYTE(v52_.v52) = 2 * v46_.v47;
        v21 = (__int64*)((char*)&v52_.v52 + 1);
        if (v46_.v47 == 0) {
          goto LABEL_50;
        }
      }
      memmove((__int64)v21, v20, v19);
    LABEL_50:
      v26 = v50_.v51;
      *((_BYTE*)v21 + v19) = 0;
      if (v26 != v50_.v50 && v26 != nullptr) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v26);
      }
      if ((*a2 & 1) != 0) {
        v28 = *((_QWORD*)a2 + 2);
        if (v28 != 0) {
          v29 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v28);
        }
      }
      v30 = v52_.v53;
      *(_QWORD*)a2 = v52_.v52;
      *((_QWORD*)a2 + 1) = v30;
      *((_QWORD*)a2 + 2) = v52_.v54;
      break;
    case 7uLL:
      if (v3 != 0) {
        goto LABEL_44;
      }
      *((_QWORD*)a2 + 1) = 0;
      *((_QWORD*)a2 + 2) = 0;
      *(_QWORD*)a2 = 0;
      *((_WORD*)a2 + 16) = 0;
      *((_QWORD*)a2 + 6) = 0;
      *((_DWORD*)a2 + 6) = 16;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFF00000000LL;
      *((_QWORD*)a2 + 6) = nn_os_GetThreadAvailableCoreMask();
      *((_DWORD*)a2 + 6) = 1;
      a2[33] = 1;
      v14 = nn_os_GetThreadAvailableCoreMask();
      v15 = *a2;
      *((_QWORD*)a2 + 6) = v14;
      if ((v15 & 1) != 0) {
        *((_QWORD*)a2 + 1) = 17;
        v6 = *((char**)a2 + 2);
      }
      else {
        *a2 = 34;
        v6 = a2 + 1;
      }
      *((_WORD*)v6 + 8) = 101;
      v33 = "HID_VibrationNode";
    LABEL_70:
      v35 = *(_QWORD*)v33;
      v34 = *((_QWORD*)v33 + 1);
      *(_QWORD*)v6 = v35;
      *((_QWORD*)v6 + 1) = v34;
      return;
    case 8uLL:
      if (v3 != 0) {
        goto LABEL_44;
      }
      *((_QWORD*)a2 + 1) = 0;
      *((_QWORD*)a2 + 2) = 0;
      *(_QWORD*)a2 = 0;
      *((_WORD*)a2 + 16) = 0;
      *((_QWORD*)a2 + 6) = 0;
      *((_DWORD*)a2 + 6) = 16;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFF00000000LL;
      nn_os_GetThreadAvailableCoreMask();
      *((_DWORD*)a2 + 6) = 17;
      *((_WORD*)a2 + 16) = 257;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000002LL;
      *((_QWORD*)a2 + 6) = 4;
      if ((*a2 & 1) != 0) {
        *((_QWORD*)a2 + 1) = 11;
        v24 = *((char**)a2 + 2);
      }
      else {
        *a2 = 22;
        v24 = a2 + 1;
      }
      *(_DWORD*)(v24 + 7) = 1919906933;
      v41 = "PX_Executor";
      goto LABEL_92;
    case 9uLL:
      if (v3 != 0) {
        goto LABEL_44;
      }
      *((_QWORD*)a2 + 1) = 0;
      *((_QWORD*)a2 + 2) = 0;
      *(_QWORD*)a2 = 0;
      *((_WORD*)a2 + 16) = 0;
      *((_QWORD*)a2 + 6) = 0;
      *((_DWORD*)a2 + 6) = 16;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFF00000000LL;
      nn_os_GetThreadAvailableCoreMask();
      *((_DWORD*)a2 + 6) = 29;
      *((_WORD*)a2 + 16) = 257;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000001LL;
      *((_QWORD*)a2 + 6) = 2;
      if ((*a2 & 1) != 0) {
        *((_QWORD*)a2 + 1) = 8;
        v7 = *((char**)a2 + 2);
      }
      else {
        *a2 = 16;
        v7 = a2 + 1;
      }
      strcpy(v7, "AS_Build");
      return;
    case 0xAuLL:
      if (v3 != 0) {
        goto LABEL_44;
      }
      *((_QWORD*)a2 + 1) = 0;
      *((_QWORD*)a2 + 2) = 0;
      *(_QWORD*)a2 = 0;
      *((_WORD*)a2 + 16) = 0;
      *((_QWORD*)a2 + 6) = 0;
      *((_DWORD*)a2 + 6) = 16;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFF00000000LL;
      *((_QWORD*)a2 + 6) = nn_os_GetThreadAvailableCoreMask();
      *((_DWORD*)a2 + 6) = 31;
      a2[33] = 1;
      v22 = nn_os_GetThreadAvailableCoreMask();
      v23 = *a2;
      *((_QWORD*)a2 + 6) = v22;
      if ((v23 & 1) != 0) {
        *((_QWORD*)a2 + 1) = 11;
        v24 = *((char**)a2 + 2);
      }
      else {
        *a2 = 22;
        v24 = a2 + 1;
      }
      *(_DWORD*)(v24 + 7) = 1919249266;
      v41 = "SAVE_Worker";
    LABEL_92:
      v42 = *(_QWORD*)v41;
      v24[11] = 0;
      *(_QWORD*)v24 = v42;
      return;
    case 0xBuLL:
      if (v3 > 2) {
        goto LABEL_44;
      }
      *((_QWORD*)a2 + 1) = 0;
      *((_QWORD*)a2 + 2) = 0;
      *(_QWORD*)a2 = 0;
      v5 = GameData_1c05760[v3];
      *((_WORD*)a2 + 16) = 0;
      *((_QWORD*)a2 + 6) = 0;
      *((_DWORD*)a2 + 6) = 16;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFF00000000LL;
      nn_os_GetThreadAvailableCoreMask();
      *((_DWORD*)a2 + 6) = 17;
      *((_DWORD*)a2 + 9) = v5;
      *((_DWORD*)a2 + 10) = -3;
      *((_WORD*)a2 + 16) = 257;
      *((_QWORD*)a2 + 6) = 1LL << v5;
      if (v3 != 0) {
        v52_.v52 = (__int64*)v3;
        v52_.v53 = 0;
        v31 = "MOCull_Worker{}";
        v46_.v49 = 0;
        v52_.v54 = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
        v58_.v60 = 3;
        v46_.v46[0] = (__int64)v50_.v50;
        v46_.v46[1] = 256;
        v46_.v47 = 0;
        v46_.v48 = GameRoutine_64be60;
        v32 = 15;
      LABEL_72:
        v50_.v51 = v50_.v50;
        v58_.v58 = (_BYTE*)(((_UNKNOWN*)0x0LL) + 1);
        v58_.v59 = &v52_.v52;
        GameHr_17d3f20(v46_.v46, (__int64)v31, v32, (__int64**)&v58_.v58);
        v43_.v43 = (unsigned __int64)v50_.v51;
        v43_.v44 = v46_.v47;
        GameRoutine_17d3e70((__int64*)&v58_.v58, (__int64*)&v43_.v43);
        if (v50_.v51 != v50_.v50 && v50_.v51 != nullptr) {
          v36 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v36 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, (__int64)v50_.v51);
        }
      }
      else {
        v4 = "MOCull_Leader";
      LABEL_9:
        Manager_6326c0((__int64*)&v58_.v58, v4);
      }
      if ((*a2 & 1) != 0) {
        v37 = *((_QWORD*)a2 + 2);
        if (v37 != 0) {
          v38 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v37);
        }
      }
      v39 = v58_.v59;
      *(_QWORD*)a2 = v58_.v58;
      *((_QWORD*)a2 + 1) = v39;
      *((_QWORD*)a2 + 2) = v58_.v60;
      return;
    default:
      nn_detail_UnexpectedDefaultImpl();
      return;
    }
  }
  else {
  LABEL_44:
    *((_QWORD*)a2 + 1) = 0;
    *((_QWORD*)a2 + 2) = 0;
    *(_QWORD*)a2 = 0;
    *((_WORD*)a2 + 16) = 0;
    *((_QWORD*)a2 + 6) = 0;
    *((_DWORD*)a2 + 6) = 16;
    *((_DWORD*)a2 + 9) = 0;
    *((_DWORD*)a2 + 10) = -1;
    *((_QWORD*)a2 + 6) = nn_os_GetThreadAvailableCoreMask();
  }
}

__attribute__((swiftcall)) void game_17d3fa0(PSEUDO_X8 x8_, unsigned __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  int v4;
  __int64 v5;
  const char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned __int64* v13;
  unsigned __int64 v14;
  int v15;
  const char* v16;
  __int64 v17;
  unsigned __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  int v22;
  __int64 v23;
  const char* v24;
  const char* v25;
  const char* v26;
  const char* v27;
  unsigned __int64 v28;
  int v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 ThreadAvailableCoreMaskEv;
  int v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  char v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64* v43;
  unsigned __int64 v44;
  char v45;
  __int64 v46;
  unsigned __int64 v47;
  char v48;
  unsigned __int64 v49;
  char v50;
  struct {
    unsigned __int64 v51;
    __int64 v52;
    __int64 v53;
  } v51_;
  __int64 v54[2];
  struct {
    __int64 v55[2];
    __int64 v56;
    __int64 (*v57)();
    __int64 v58;
  } v55_;
  struct {
    _BYTE v59[256];
    _BYTE* v60;
  } v59_;
  struct {
    __int64* v61;
    unsigned __int64* v62;
    __int64 v63;
  } v61_;

  v3 = HIDWORD(a1);
  if ((a1 & 0xE0000000) == 0x20000000) {
    switch (a1 & 0x1FFFFFFF) {
    case 0uLL:
      if (v3 > 4) {
        goto LABEL_78;
      }
      *(_QWORD*)(a2 + 8) = 0;
      *(_QWORD*)(a2 + 16) = 0;
      *(_QWORD*)a2 = 0;
      nn_os_GetThreadAvailableCoreMask();
      *(_DWORD*)(a2 + 24) = 16;
      *(_DWORD*)(a2 + 36) = v3;
      *(_DWORD*)(a2 + 40) = -3;
      *(_WORD*)(a2 + 32) = 257;
      *(_QWORD*)(a2 + 48) = 1LL << v3;
      if (v3 == 0) {
        v6 = "Main Thread";
        goto LABEL_48;
      }
      v51_.v51 = v3;
      v51_.v52 = 0;
      v16 = "Basic_Worker{}";
      v55_.v58 = 0;
      v51_.v53 = 3;
      v61_.v63 = 3;
      v55_.v55[0] = (__int64)v59_.v59;
      v55_.v55[1] = 256;
      v55_.v56 = 0;
      v55_.v57 = GameRoutine_64be60;
      v17 = 14;
      goto LABEL_124;
    case 1uLL:
      if (v3 != 0) {
        goto LABEL_78;
      }
      *(_QWORD*)(a2 + 8) = 0;
      *(_QWORD*)(a2 + 16) = 0;
      *(_QWORD*)a2 = 0;
      nn_os_GetThreadAvailableCoreMask();
      *(_DWORD*)(a2 + 24) = 19;
      *(_WORD*)(a2 + 32) = 257;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000003LL;
      *(_QWORD*)(a2 + 48) = 8;
      if ((*(_BYTE*)a2 & 1) != 0) {
        *(_QWORD*)(a2 + 8) = 7;
        v7 = *(_QWORD*)(a2 + 16);
      }
      else {
        *(_BYTE*)a2 = 14;
        v7 = a2 + 1;
      }
      *(_DWORD*)(v7 + 3) = 1684107084;
      v22 = 1281315654;
      goto LABEL_144;
    case 2uLL:
      if (v3 > 2) {
        goto LABEL_78;
      }
      *(_QWORD*)(a2 + 8) = 0;
      *(_QWORD*)(a2 + 16) = 0;
      *(_QWORD*)a2 = 0;
      v15 = GameData_1c05784[v3];
      nn_os_GetThreadAvailableCoreMask();
      v16 = "FS_Decode{}";
      v55_.v58 = 0;
      v51_.v51 = (unsigned int)(v3 + 1);
      *(_DWORD*)(a2 + 24) = 19;
      *(_WORD*)(a2 + 32) = 257;
      *(_DWORD*)(a2 + 36) = v15;
      *(_DWORD*)(a2 + 40) = -3;
      v55_.v55[0] = (__int64)v59_.v59;
      v55_.v55[1] = 256;
      v51_.v52 = 0;
      v51_.v53 = 3;
      *(_QWORD*)(a2 + 48) = 1LL << v15;
      v59_.v60 = v59_.v59;
      v17 = 11;
      v61_.v63 = 3;
      goto LABEL_71;
    case 3uLL:
      if (v3 != 0) {
        goto LABEL_78;
      }
      LODWORD(v55_.v55[0]) = 20;
      GameRoutine_17d34b0((void*)(a2), v55_.v55);
      if (*(_BYTE*)(a2 + 33) == 1) {
        v18 = (unsigned __int64*)(a2 + 48);
        v19 = *(_QWORD*)(a2 + 48) & 0xFFFFFFFFFFFFFFFDLL;
      }
      else {
        *(_BYTE*)(a2 + 33) = 1;
        ThreadAvailableCoreMaskEv = nn_os_GetThreadAvailableCoreMask();
        v34 = *(unsigned __int8*)(a2 + 33);
        v19 = ThreadAvailableCoreMaskEv & 0xFFFFFFFFFFFFFFFDLL;
        *(_QWORD*)(a2 + 48) = ThreadAvailableCoreMaskEv & 0xFFFFFFFFFFFFFFFDLL;
        v18 = (unsigned __int64*)(a2 + 48);
        if (v34 != 1) {
          *(_BYTE*)(a2 + 33) = 1;
          v49 = nn_os_GetThreadAvailableCoreMask();
          v50 = *(_BYTE*)(a2 + 33);
          v35 = v49 & 0xFFFFFFFFFFFFFFFBLL;
          *(_QWORD*)(a2 + 48) = v35;
          if ((v50 & 1) == 0) {
            *(_BYTE*)(a2 + 33) = 1;
            v35 = nn_os_GetThreadAvailableCoreMask();
          }
        LABEL_111:
          *(_QWORD*)(a2 + 48) = v35 & 0xFFFFFFFFFFFFFFEFLL;
          if ((*(_BYTE*)a2 & 1) != 0) {
            *(_QWORD*)(a2 + 8) = 12;
            v11 = *(_QWORD*)(a2 + 16);
          }
          else {
            *(_BYTE*)a2 = 24;
            v11 = a2 + 1;
          }
          strcpy((char*)(v11 + 8), "eExt");
          v27 = "FS_DecodeExt";
          goto LABEL_115;
        }
      }
      v35 = v19 & 0xFFFFFFFFFFFFFFF9LL;
      *v18 = v19 & 0xFFFFFFFFFFFFFFF9LL;
      goto LABEL_111;
    case 4uLL:
      if (v3 != 0) {
        goto LABEL_78;
      }
      LODWORD(v55_.v55[0]) = 19;
      GameRoutine_17d34b0((void*)(a2), v55_.v55);
      if (*(_BYTE*)(a2 + 33) == 1) {
        v13 = (unsigned __int64*)(a2 + 48);
        v14 = *(_QWORD*)(a2 + 48) & 0xFFFFFFFFFFFFFFFELL;
      }
      else {
        *(_BYTE*)(a2 + 33) = 1;
        v28 = nn_os_GetThreadAvailableCoreMask();
        v29 = *(unsigned __int8*)(a2 + 33);
        v14 = v28 & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD*)(a2 + 48) = v28 & 0xFFFFFFFFFFFFFFFELL;
        v13 = (unsigned __int64*)(a2 + 48);
        if (v29 != 1) {
          *(_BYTE*)(a2 + 33) = 1;
          v47 = nn_os_GetThreadAvailableCoreMask();
          v48 = *(_BYTE*)(a2 + 33);
          v30 = v47 & 0xFFFFFFFFFFFFFFFDLL;
          *(_QWORD*)(a2 + 48) = v30;
          if ((v48 & 1) == 0) {
            *(_BYTE*)(a2 + 33) = 1;
            v30 = nn_os_GetThreadAvailableCoreMask();
          }
        LABEL_101:
          *(_QWORD*)(a2 + 48) = v30 & 0xFFFFFFFFFFFFFFFBLL;
          if ((*(_BYTE*)a2 & 1) != 0) {
            *(_QWORD*)(a2 + 8) = 16;
            v9 = *(_QWORD*)(a2 + 16);
          }
          else {
            *(_BYTE*)a2 = 32;
            v9 = a2 + 1;
          }
          v24 = "FS_PostProcAsync";
          goto LABEL_105;
        }
      }
      v30 = v14 & 0xFFFFFFFFFFFFFFFCLL;
      *v13 = v14 & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_101;
    case 5uLL:
      if (v3 != 0) {
        goto LABEL_78;
      }
      LODWORD(v55_.v55[0]) = 19;
      GameRoutine_17d34b0((void*)(a2), v55_.v55);
      if (*(_BYTE*)(a2 + 33) == 1) {
        v21 = *(_QWORD*)(a2 + 48) & 0xFFFFFFFFFFFFFFFELL;
      }
      else {
        *(_BYTE*)(a2 + 33) = 1;
        v44 = nn_os_GetThreadAvailableCoreMask();
        v45 = *(_BYTE*)(a2 + 33);
        v21 = v44 & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD*)(a2 + 48) = v21;
        if ((v45 & 1) == 0) {
          *(_BYTE*)(a2 + 33) = 1;
          v21 = nn_os_GetThreadAvailableCoreMask();
        }
      }
      *(_QWORD*)(a2 + 48) = v21 & 0xFFFFFFFFFFFFFFDFLL;
      if ((*(_BYTE*)a2 & 1) != 0) {
        *(_QWORD*)(a2 + 8) = 7;
        v7 = *(_QWORD*)(a2 + 16);
      }
      else {
        *(_BYTE*)a2 = 14;
        v7 = a2 + 1;
      }
      *(_DWORD*)(v7 + 3) = 1128744770;
      v22 = 1113543494;
      goto LABEL_144;
    case 6uLL:
      if (v3 > 4) {
        goto LABEL_78;
      }
      *(_QWORD*)(a2 + 8) = 0;
      *(_QWORD*)(a2 + 16) = 0;
      *(_QWORD*)a2 = 0;
      nn_os_GetThreadAvailableCoreMask();
      v51_.v51 = v3;
      v16 = "GFX_Worker{}";
      v55_.v58 = 0;
      *(_DWORD*)(a2 + 24) = 16;
      *(_DWORD*)(a2 + 36) = v3;
      *(_DWORD*)(a2 + 40) = -3;
      v17 = 12;
      *(_WORD*)(a2 + 32) = 257;
      v51_.v52 = 0;
      v51_.v53 = 3;
      v61_.v63 = 3;
      *(_QWORD*)(a2 + 48) = 1LL << v3;
      v55_.v55[0] = (__int64)v59_.v59;
      v55_.v55[1] = 256;
      v59_.v60 = v59_.v59;
    LABEL_71:
      v55_.v56 = 0;
      v55_.v57 = GameRoutine_64be60;
      v61_.v61 = (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
      v61_.v62 = &v51_.v51;
      goto LABEL_125;
    case 7uLL:
      if (v3 != 0) {
        goto LABEL_78;
      }
      LODWORD(v55_.v55[0]) = 1;
      GameRoutine_17d34b0((void*)(a2), v55_.v55);
      if (*(_BYTE*)(a2 + 33) == 1) {
        v20 = *(_QWORD*)(a2 + 48) & 0xFFFFFFFFFFFFFFFELL;
      }
      else {
        *(_BYTE*)(a2 + 33) = 1;
        v36 = nn_os_GetThreadAvailableCoreMask();
        v37 = *(_BYTE*)(a2 + 33);
        v20 = v36 & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD*)(a2 + 48) = v20;
        if ((v37 & 1) == 0) {
          *(_BYTE*)(a2 + 33) = 1;
          v20 = nn_os_GetThreadAvailableCoreMask();
        }
      }
      *(_QWORD*)(a2 + 48) = v20 & 0xFFFFFFFFFFFFFFF7LL;
      if ((*(_BYTE*)a2 & 1) != 0) {
        *(_QWORD*)(a2 + 8) = 17;
        v5 = *(_QWORD*)(a2 + 16);
      }
      else {
        *(_BYTE*)a2 = 34;
        v5 = a2 + 1;
      }
      *(_WORD*)(v5 + 16) = 101;
      v26 = "HID_VibrationNode";
      goto LABEL_122;
    case 8uLL:
      if (v3 != 0) {
        goto LABEL_78;
      }
      *(_QWORD*)(a2 + 8) = 0;
      *(_QWORD*)(a2 + 16) = 0;
      *(_QWORD*)a2 = 0;
      nn_os_GetThreadAvailableCoreMask();
      *(_DWORD*)(a2 + 24) = 17;
      *(_WORD*)(a2 + 32) = 257;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000002LL;
      *(_QWORD*)(a2 + 48) = 4;
      if ((*(_BYTE*)a2 & 1) != 0) {
        *(_QWORD*)(a2 + 8) = 11;
        v10 = *(_QWORD*)(a2 + 16);
      }
      else {
        *(_BYTE*)a2 = 22;
        v10 = a2 + 1;
      }
      *(_DWORD*)(v10 + 7) = 1919906933;
      v25 = "PX_Executor";
      goto LABEL_149;
    case 9uLL:
      if (v3 != 0) {
        goto LABEL_78;
      }
      LODWORD(v55_.v55[0]) = 29;
      GameHr_17d4ba0(a2, v55_.v55);
      if ((*(_BYTE*)a2 & 1) != 0) {
        *(_QWORD*)(a2 + 8) = 8;
        v8 = *(_QWORD*)(a2 + 16);
      }
      else {
        *(_BYTE*)a2 = 16;
        v8 = a2 + 1;
      }
      v23 = 0x646C6975425F5341LL;
      goto LABEL_108;
    case 0xAuLL:
      if (v3 != 0) {
        goto LABEL_78;
      }
      LODWORD(v55_.v55[0]) = 31;
      GameRoutine_17d34b0((void*)(a2), v55_.v55);
      if ((*(_BYTE*)a2 & 1) != 0) {
        *(_QWORD*)(a2 + 8) = 11;
        v10 = *(_QWORD*)(a2 + 16);
      }
      else {
        *(_BYTE*)a2 = 22;
        v10 = a2 + 1;
      }
      *(_DWORD*)(v10 + 7) = 1919249266;
      v25 = "SAVE_Worker";
      goto LABEL_149;
    case 0xBuLL:
      if (v3 > 2) {
        goto LABEL_78;
      }
      *(_QWORD*)(a2 + 8) = 0;
      *(_QWORD*)(a2 + 16) = 0;
      *(_QWORD*)a2 = 0;
      v12 = GameData_1c05784[v3];
      nn_os_GetThreadAvailableCoreMask();
      *(_DWORD*)(a2 + 24) = 17;
      *(_DWORD*)(a2 + 36) = v12;
      *(_DWORD*)(a2 + 40) = -3;
      *(_WORD*)(a2 + 32) = 257;
      *(_QWORD*)(a2 + 48) = 1LL << v12;
      if (v3 != 0) {
        v51_.v51 = v3;
        v51_.v52 = 0;
        v16 = "MOCull_Worker{}";
        v55_.v58 = 0;
        v51_.v53 = 3;
        v61_.v63 = 3;
        v55_.v55[0] = (__int64)v59_.v59;
        v55_.v55[1] = 256;
        v55_.v56 = 0;
        v55_.v57 = GameRoutine_64be60;
        v17 = 15;
      LABEL_124:
        v59_.v60 = v59_.v59;
        v61_.v61 = (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
        v61_.v62 = &v51_.v51;
      LABEL_125:
        GameHr_17d3f20(v55_.v55, (__int64)v16, v17, &v61_.v61);
        v54[0] = (__int64)v59_.v60;
        v54[1] = v55_.v56;
        GameRoutine_17d3e70((__int64*)&v61_.v61, v54);
        if (v59_.v60 != v59_.v59 && v59_.v60 != nullptr) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, (__int64)v59_.v60);
        }
      }
      else {
        v6 = "MOCull_Leader";
      LABEL_48:
        Manager_6326c0((__int64*)&v61_.v61, v6);
      }
      if ((*(_BYTE*)a2 & 1) != 0) {
        v41 = *(_QWORD*)(a2 + 16);
        if (v41 != 0) {
          v42 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v42 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v41);
        }
      }
      v43 = v61_.v62;
      *(_QWORD*)a2 = v61_.v61;
      *(_QWORD*)(a2 + 8) = v43;
      *(_QWORD*)(a2 + 16) = v61_.v63;
      return;
    default:
      game_17d3510((void*)((char*)a2), a1);
      return;
    }
  }
  if ((a1 & 0xE0000000) != 0x40000000) {
    goto LABEL_78;
  }
  v4 = a1 & 0x1FFFFFFF;
  if ((a1 & 0x1FFFFFFF) > 3) {
    if ((a1 & 0x1FFFFFFF) > 5) {
      if (v4 == 6) {
        if (v3 == 0) {
          *(_QWORD*)(a2 + 8) = 0;
          *(_QWORD*)(a2 + 16) = 0;
          *(_QWORD*)a2 = 0;
          nn_os_GetThreadAvailableCoreMask();
          *(_DWORD*)(a2 + 24) = 16;
          *(_WORD*)(a2 + 32) = 257;
          *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000005LL;
          *(_QWORD*)(a2 + 48) = 32;
          if ((*(_BYTE*)a2 & 1) != 0) {
            *(_QWORD*)(a2 + 8) = 17;
            v5 = *(_QWORD*)(a2 + 16);
          }
          else {
            *(_BYTE*)a2 = 34;
            v5 = a2 + 1;
          }
          *(_WORD*)(v5 + 16) = 114;
          v26 = "MovieAudioHandler";
          goto LABEL_122;
        }
      }
      else if (v4 == 7) {
        if (v3 == 0) {
          *(_QWORD*)(a2 + 8) = 0;
          *(_QWORD*)(a2 + 16) = 0;
          *(_QWORD*)a2 = 0;
          nn_os_GetThreadAvailableCoreMask();
          *(_DWORD*)(a2 + 24) = 16;
          *(_WORD*)(a2 + 32) = 257;
          *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000005LL;
          *(_QWORD*)(a2 + 48) = 32;
          if ((*(_BYTE*)a2 & 1) != 0) {
            *(_QWORD*)(a2 + 8) = 17;
            v5 = *(_QWORD*)(a2 + 16);
          }
          else {
            *(_BYTE*)a2 = 34;
            v5 = a2 + 1;
          }
          *(_WORD*)(v5 + 16) = 114;
          v26 = "MovieVideoHandler";
          goto LABEL_122;
        }
      }
      else if (v4 == 8 && v3 == 0) {
        *(_QWORD*)(a2 + 8) = 0;
        *(_QWORD*)(a2 + 16) = 0;
        *(_QWORD*)a2 = 0;
        nn_os_GetThreadAvailableCoreMask();
        *(_DWORD*)(a2 + 24) = 6;
        *(_WORD*)(a2 + 32) = 257;
        *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000005LL;
        *(_QWORD*)(a2 + 48) = 32;
        if ((*(_BYTE*)a2 & 1) != 0) {
          *(_QWORD*)(a2 + 8) = 17;
          v5 = *(_QWORD*)(a2 + 16);
        }
        else {
          *(_BYTE*)a2 = 34;
          v5 = a2 + 1;
        }
        *(_WORD*)(v5 + 16) = 114;
        v26 = "MovieEventHandler";
      LABEL_122:
        v39 = *(_QWORD*)v26;
        v38 = *((_QWORD*)v26 + 1);
        *(_QWORD*)v5 = v39;
        *(_QWORD*)(v5 + 8) = v38;
        return;
      }
    LABEL_78:
      *(_QWORD*)(a2 + 8) = 0;
      *(_QWORD*)(a2 + 16) = 0;
      *(_QWORD*)a2 = 0;
      *(_WORD*)(a2 + 32) = 0;
      *(_QWORD*)(a2 + 48) = 0;
      *(_DWORD*)(a2 + 24) = 16;
      *(_DWORD*)(a2 + 36) = 0;
      *(_DWORD*)(a2 + 40) = -1;
      *(_QWORD*)(a2 + 48) = nn_os_GetThreadAvailableCoreMask();
      return;
    }
    if (v4 != 4) {
      if (v4 != 5 || v3 != 0) {
        goto LABEL_78;
      }
      LODWORD(v55_.v55[0]) = 17;
      GameHr_17d4ba0(a2, v55_.v55);
      if ((*(_BYTE*)a2 & 1) != 0) {
        *(_QWORD*)(a2 + 8) = 8;
        v8 = *(_QWORD*)(a2 + 16);
      }
      else {
        *(_BYTE*)a2 = 16;
        v8 = a2 + 1;
      }
      v23 = 0x6461657268544941LL;
    LABEL_108:
      *(_QWORD*)v8 = v23;
      *(_BYTE*)(v8 + 8) = 0;
      return;
    }
    if (v3 != 0) {
      goto LABEL_78;
    }
    *(_QWORD*)(a2 + 8) = 0;
    *(_QWORD*)(a2 + 16) = 0;
    *(_QWORD*)a2 = 0;
    nn_os_GetThreadAvailableCoreMask();
    *(_DWORD*)(a2 + 24) = 10;
    *(_WORD*)(a2 + 32) = 257;
    *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000005LL;
    *(_QWORD*)(a2 + 48) = 32;
    if ((*(_BYTE*)a2 & 1) != 0) {
      *(_QWORD*)(a2 + 8) = 10;
      v11 = *(_QWORD*)(a2 + 16);
    }
    else {
      *(_BYTE*)a2 = 20;
      v11 = a2 + 1;
    }
    strcpy((char*)(v11 + 8), "te");
    v27 = "SND_Update";
  LABEL_115:
    *(_QWORD*)v11 = *(_QWORD*)v27;
    return;
  }
  if ((a1 & 0x1FFFFFFF) <= 1) {
    if (v4 != 0) {
      if (v3 != 0) {
        goto LABEL_78;
      }
      *(_QWORD*)(a2 + 8) = 0;
      *(_QWORD*)(a2 + 16) = 0;
      *(_QWORD*)a2 = 0;
      nn_os_GetThreadAvailableCoreMask();
      *(_DWORD*)(a2 + 24) = 0;
      *(_WORD*)(a2 + 32) = 257;
      *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000004LL;
      *(_QWORD*)(a2 + 48) = 16;
      if ((*(_BYTE*)a2 & 1) != 0) {
        *(_QWORD*)(a2 + 8) = 7;
        v7 = *(_QWORD*)(a2 + 16);
      }
      else {
        *(_BYTE*)a2 = 14;
        v7 = a2 + 1;
      }
      *(_DWORD*)(v7 + 3) = 1802781023;
      v22 = 1598312019;
    LABEL_144:
      *(_DWORD*)v7 = v22;
      *(_BYTE*)(v7 + 7) = 0;
      return;
    }
    if (v3 != 0) {
      goto LABEL_78;
    }
    *(_QWORD*)(a2 + 8) = 0;
    *(_QWORD*)(a2 + 16) = 0;
    *(_QWORD*)a2 = 0;
    nn_os_GetThreadAvailableCoreMask();
    *(_DWORD*)(a2 + 24) = 0;
    *(_WORD*)(a2 + 32) = 257;
    *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000000LL;
    *(_QWORD*)(a2 + 48) = 1;
    if ((*(_BYTE*)a2 & 1) != 0) {
      *(_QWORD*)(a2 + 8) = 16;
      v9 = *(_QWORD*)(a2 + 16);
    }
    else {
      *(_BYTE*)a2 = 32;
      v9 = a2 + 1;
    }
    v24 = "SYS_Notification";
  LABEL_105:
    v32 = *(_QWORD*)v24;
    v31 = *((_QWORD*)v24 + 1);
    *(_BYTE*)(v9 + 16) = 0;
    *(_QWORD*)v9 = v32;
    *(_QWORD*)(v9 + 8) = v31;
    return;
  }
  if (v4 != 2) {
    if (v4 != 3 || v3 != 0) {
      goto LABEL_78;
    }
    *(_QWORD*)(a2 + 8) = 0;
    *(_QWORD*)(a2 + 16) = 0;
    *(_QWORD*)a2 = 0;
    nn_os_GetThreadAvailableCoreMask();
    *(_DWORD*)(a2 + 24) = 30;
    *(_WORD*)(a2 + 32) = 257;
    *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000005LL;
    *(_QWORD*)(a2 + 48) = 32;
    if ((*(_BYTE*)a2 & 1) != 0) {
      *(_QWORD*)(a2 + 8) = 8;
      v8 = *(_QWORD*)(a2 + 16);
    }
    else {
      *(_BYTE*)a2 = 16;
      v8 = a2 + 1;
    }
    v23 = 0x64616F4C5F444E53LL;
    goto LABEL_108;
  }
  if (v3 != 0) {
    goto LABEL_78;
  }
  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)a2 = 0;
  nn_os_GetThreadAvailableCoreMask();
  *(_DWORD*)(a2 + 24) = 0;
  *(_WORD*)(a2 + 32) = 257;
  *(_QWORD*)(a2 + 36) = 0xFFFFFFFD00000005LL;
  *(_QWORD*)(a2 + 48) = 32;
  if ((*(_BYTE*)a2 & 1) != 0) {
    *(_QWORD*)(a2 + 8) = 11;
    v10 = *(_QWORD*)(a2 + 16);
  }
  else {
    *(_BYTE*)a2 = 22;
    v10 = a2 + 1;
  }
  *(_DWORD*)(v10 + 7) = 1802723668;
  v25 = "SND_AtkTask";
LABEL_149:
  v46 = *(_QWORD*)v25;
  *(_BYTE*)(v10 + 11) = 0;
  *(_QWORD*)v10 = v46;
}

void game_183ba60(int** a1, int a2, int a3, char a4, unsigned __int8 a5,
                  unsigned __int8 a6, int a7, int a8, int a9, int a10, char a11,
                  char a12, char a13, int a14)
{
  unsigned int v14;
  bool v19;
  bool v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  int v24;
  __int64 (***v25)(_QWORD);
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  unsigned int v29;
  __int64 v30;
  __int64* v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  int** v45;
  _BOOL4 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int* v50;
  int* v51;
  __int16 v52;
  const char* v53;
  const char* v54;
  char* v55;
  char* v56;
  char* v57;
  char* v58;
  __int64* v59;
  const char* v60;
  __int64* v61;
  __int64* v62;
  const char* v63;
  const char* v64;
  __int64* v65;
  const char* v66;
  const char* v67;
  char v68;
  int** v69;
  _BOOL4 v70;
  char* v71;
  __int64* v72;
  const char* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  char* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char* v81;
  const char* v82;
  int v83;
  __int64 v84;
  const char* v85;
  char* v86;
  __int64 v87;
  const char* v88;
  char* v89;
  int v90;
  __int64 v91;
  __int64* v92;
  char* v93;
  char* v94;
  __int64 v95;
  char* v96;
  char* v97;
  unsigned int v98;
  char* v99;
  char* v100;
  __int64 v101;
  __int64 v102;
  int v103;
  __int64 v104;
  int* v105;
  int v106;
  int v107;
  __int64 v108;
  bool v109;
  const char* v110;
  char* v111;
  __int64* v112;
  int v113;
  __int64 v114;
  __int64 v115;
  char* v116;
  __int64 v117;
  __int64 v118;
  __int64* v119;
  char* v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  char* v124;
  __int64 v125;
  __int64 v126;
  _BOOL4 v127;
  int* v128;
  __int64 v129;
  char* v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64* v134;
  __int64 v135;
  char* v136;
  __int64 v137;
  __int64 v138;
  __int64* v139;
  __int64 v140;
  __int64* v141;
  char* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  char* v146;
  __int64 v147;
  __int64 v148;
  const char* v149;
  const char* v150;
  unsigned __int64 v151;
  const char* v152;
  unsigned __int64 v153;
  const char* v154;
  __int64 v155;
  signed int v156;
  const char* v157;
  __int64 v158;
  __int64 v159;
  __int64* v160;
  __int64 v161;
  __int64* v162;
  char* v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  char* v167;
  __int64 v168;
  __int64 v169;
  char* v170;
  __int64* v171;
  int v172;
  __int64 v173;
  __int64 v174;
  char* v175;
  __int64 v176;
  char* v177;
  __int64 v178;
  __int64* v179;
  __int64 v180;
  char* v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  const char* v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  int v197;
  const char* v198;
  unsigned __int8 v199;
  int v200;
  const char* v201;
  int v202;
  int v203;
  _BOOL4 v204;
  unsigned int v205;
  __int64* v206;
  unsigned __int8 v207;
  __int64 v208;
  unsigned __int8 v210;
  int** v212;
  int* v213;
  int v215;
  int* v216;
  struct {
    char* v217;
    unsigned __int64 v218;
    const char* v219;
  } v217_;
  struct {
    _QWORD v220[2];
    char* v221;
  } v220_;
  struct {
    _QWORD v222[2];
    char* v223;
  } v222_;
  struct {
    __int64 v224[2];
    const char* v225;
    unsigned __int64 v226;
    int v227;
    int v228;
    __int64 v229;
    __int64 v230;
    __int64 v231;
    __int64 v232;
    __int64 v233;
    __int64 v234;
    __int64 v235;
    __int64 v236;
    __int64 v237;
    __int64 v238;
    __int64 v239;
    __int64 v240;
    __int64 v241;
  } v224_;

  v14 = a5;
  v216 = a1[1];
  v203 = **a1;
  v19 = v203 != a2;
  v200 = (a5 & 0xFD) == 1;
  v20 = (a6 & 0xFD) != v200;
  if ((a3 & 1) == 0) {
    goto LABEL_19;
  }
  v21 = *((_QWORD*)v216 + 19);
  if (v21 == 0) {
    goto LABEL_19;
  }
  v22 = (_QWORD*)(v21 + 760LL * a5);
  v23 = v22[5];
  if (v23 != 0 && *(_QWORD*)(v23 + 392) != 0) {
  LABEL_9:
    v26 = *((_QWORD*)v216 + 23);
    if (v26 != 0 ||
        (v27 = v21 + 760LL * v14, (v26 = *(_QWORD*)(v27 + 72)) != 0)) {
      v28 = (_QWORD*)(*(_QWORD*)(v26 + 24) + 512LL);
      LODWORD(v224_.v224[0]) =
          *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x6CLL) +
                     game_g_shared_system_skills_ptr_alt1) &
          0xFFF;
      if ((game_HasSkill(v28, (unsigned int*)v224_.v224) & 1) != 0) {
      LABEL_12:
        v24 = 30;
        goto LABEL_20;
      }
    }
    else {
      v29 = *(unsigned __int16*)(v27 + 60);
      if (*(_WORD*)(v27 + 60) != 0 ||
          (((v30 = *(unsigned int*)(v27 + 56)) & 0x80000000) != 0
               ? (v31 = game_g_empty_item_ptr)
               : (v31 = (__int64*)(*(_QWORD*)(v27 + 40) + 8 * v30 + 828)),
           v29 = *(unsigned __int16*)v31, *(_WORD*)v31 != 0)) {
        if (game_6ed370(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8LL * v29))) {
          goto LABEL_12;
        }
      }
    }
    goto LABEL_19;
  }
  v24 = 0;
  if ((*(_BYTE*)(v22[3] + 11277LL) & 0x80) == 0) {
    v25 = (__int64 (***)(_QWORD))v22[6];
    if (v25 != nullptr) {
      if (((**v25)(v25) & 1) != 0) {
        v21 = *((_QWORD*)v216 + 19);
        goto LABEL_9;
      }
    LABEL_19:
      v24 = 0;
    }
  }
LABEL_20:
  if ((a13 & 1) != 0) {
    *(_BYTE*)a1[2] = 1;
  }
  v197 = v24;
  if (v14 == 2 && a12 == 4) {
    LOBYTE(v32) = 1;
  }
  else {
    LOBYTE(v224_.v224[0]) = a6;
    v32 = (a12 == 11) | (*(unsigned int (**)(int*, __int64*))(
                            *(_QWORD*)v216 + 40LL))(v216, v224_.v224);
  }
  v210 = v32;
  v207 = a3 | a13 | v20 | v19;
  v212 = a1;
  if (*(_BYTE*)a1[3] != 1 || (*((_BYTE*)a1[4] + 1) & 1) == 0) {
    v33 = *((_QWORD*)v216 + 19) + 16LL;
    v34 = *(_QWORD*)(v33 + 760LL * v14 + 24);
    if (v34 != 0 && (v35 = *(_QWORD*)(v34 + 440)) != 0) {
      v36 = *(unsigned __int8*)(v35 + 16);
    }
    else {
      v36 = 9;
    }
    v37 = *(_QWORD*)(v33 + 760LL * a6 + 24);
    if (v37 != 0 && (v38 = *(_QWORD*)(v37 + 440)) != 0) {
      v39 = *(unsigned __int8*)(v38 + 16);
    }
    else {
      v39 = 9;
    }
    v40 = (unsigned __int8)a3 & (v36 != v39);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v216 + 56LL))((__int64)v216) &
         1) != 0) {
      v41 = *((_QWORD*)v216 + 19) + 16LL;
      v42 = *(_QWORD*)(v41 + 760LL * v14 + 24);
      if (v42 != 0 && (v43 = *(_QWORD*)(v42 + 440)) != 0) {
        v44 = *(unsigned __int8*)(v43 + 16);
      }
      else {
        v44 = 9;
      }
      v45 = a1;
      v47 = *(_QWORD*)(v41 + 760LL * a6 + 24);
      if (v47 != 0 && (v48 = *(_QWORD*)(v47 + 440)) != 0) {
        v49 = *(unsigned __int8*)(v48 + 16);
      }
      else {
        v49 = 9;
      }
      v46 = v44 == v49;
    }
    else {
      v45 = a1;
      v46 = false;
    }
    if ((v40 | v46) == 1) {
      v50 = v45[3];
      if ((*(_BYTE*)v50 & 1) == 0) {
        *(_BYTE*)v50 = 1;
      }
      v51 = v45[4];
      if ((*((_BYTE*)v51 + 1) & 1) == 0) {
        if (v46) {
          v52 = 256;
        }
        else {
          v52 = v210 & 1 | 0x100;
        }
        *(_WORD*)v51 = v52;
      }
    }
  }
  v199 = a6 & 0xFD;
  if ((v210 & 1) != 0) {
    v53 = "Player";
  }
  else {
    v53 = "Target";
  }
  if ((v210 & 1) != 0) {
    v54 = "Target";
  }
  else {
    v54 = "Player";
  }
  v198 = v53;
  v55 = game_util_Format("L_%s_ChangeHPNum%02d");
  v201 = v54;
  v56 = game_util_Format("L_%s_ChangeHPNum%02d", v54, a2);
  v57 = game_util_Format("L_%s_ChangeHPNum%02d", "Player", a2);
  v58 = game_util_Format("L_AttackTurn_Arrow%02d", a2);
  v59 = LayoutAccessor_155fbe0((__int64*)v216 + 3, v55);
  if ((a13 & 1) != 0) {
    v60 = v57;
  }
  else {
    v60 = v56;
  }
  v61 = LayoutAccessor_155fbe0((__int64*)v216 + 3, v60);
  v62 = LayoutAccessor_155fbe0((__int64*)v216 + 3, v58);
  LayoutAccessor_155e830((__int64)v59, (a4 & 1) == 0);
  v206 = v61;
  LayoutAccessor_155e830((__int64)v61, 1);
  if ((a3 & 1) != 0) {
    v63 = "TypeDamage";
  }
  else {
    v63 = "TypeHeal";
  }
  GameHr_1562680((__int64)v59, v63, 0x1.0000000000000p+0f);
  if ((a11 & 1) != 0) {
    v64 = "IconDead_On";
  }
  else {
    v64 = "IconDead_Off";
  }
  GameHr_1562680((__int64)v59, v64, 0x1.0000000000000p+0f);
  v65 = v59;
  v66 = "IconBarrier00_On";
  if (a14 == 0) {
    v66 = "IconBarrier01_On";
  }
  if ((v207 & (a14 > -1) & (v210 ^ 1)) != 0) {
    v67 = v66;
  }
  else {
    v67 = "IconBarrier_Off";
  }
  LayoutAccessor_1562cf0((__int64)v59, v67);
  if (v203 != a2) {
    v68 = a12;
    if ((v14 & 0xFE) != 2 || v216[52] == 3) {
      ui_LayoutAccessor_SetPaneVisible((__int64)v59, (__int64)"IconLinkType",
                                       0);
      v69 = v212;
      goto LABEL_79;
    }
    v71 = game_util_Format("L_Player_ChangeHPNum%02d", a2);
    v72 = LayoutAccessor_155fbe0((__int64*)v216 + 3, v71);
    ui_LayoutAccessor_SetPaneVisible((__int64)v59, (__int64)"IconLinkType", 0);
    ui_LayoutAccessor_SetPaneVisible((__int64)v61, (__int64)"IconLinkType", 0);
    ui_LayoutAccessor_SetPaneVisible((__int64)v72, (__int64)"IconLinkType", 1);
    v69 = v212;
    if (a12 == 11) {
      v73 = "IconLinkType_Enemy";
    }
    else {
      if (a12 != 3) {
        GameHr_1562680((__int64)v72, "IconLinkType_Enemy",
                       0x1.0000000000000p+0f);
        v78 = ui_LayoutAccessor_FindPane(v72, (__int64)"IconLinkType");
        if (v78 != 0) {
          v79 =
              __dynamic_cast(v78, GameData_212d670[0], GameData_212d678[0], 0);
          if (v79 != 0) {
            v80 = (unsigned int)v216[52];
            if ((unsigned int)v80 > 2) {
              v81 = &GameData_1a9f09e;
            }
            else {
              v81 = GameData_20e31e8[v80];
            }
            Manager_136a920(ui_Manager_instance_ + 1264, v79, 0, 7u, v81);
          }
        }
      LABEL_79:
        if (a12 == 21) {
          v204 = false;
          goto LABEL_105;
        }
        goto LABEL_96;
      }
      v73 = "IconLinkType_Player";
    }
    GameHr_1562680((__int64)v72, v73, 0x1.0000000000000p+0f);
    v74 = ui_LayoutAccessor_FindPane(v72, (__int64)"IconLinkType");
    if (v74 != 0) {
      v75 = __dynamic_cast(v74, GameData_212d670[0], GameData_212d678[0], 0);
      if (v75 != 0) {
        v76 = (unsigned int)v216[52];
        if ((unsigned int)v76 > 2) {
          v77 = &GameData_1a9f09e;
        }
        else {
          v77 = GameData_20e31e8[v76];
        }
        Manager_136a920(ui_Manager_instance_ + 1264, v75, 0, 7u, v77);
      }
    }
  LABEL_96:
    LayoutAccessor_155e830((__int64)v62, 1);
    if (v200 == v199 || (a13 & 1) != 0) {
      GameHr_1562680((__int64)v62, "Border", 0x1.0000000000000p+0f);
    }
    else {
      if ((v210 & 1) != 0) {
        v82 = "Right";
      }
      else {
        v82 = "Left";
      }
      GameHr_1562680((__int64)v62, v82, 0x1.0000000000000p+0f);
      **v69 = a2;
    }
    v70 = true;
    goto LABEL_104;
  }
  v68 = a12;
  v69 = v212;
  v70 = a12 != 21;
LABEL_104:
  v204 = v70;
LABEL_105:
  v222_.v222[1] = 0;
  v222_.v223 = nullptr;
  v220_.v221 = nullptr;
  v222_.v222[0] = 0;
  v220_.v220[0] = 0;
  v220_.v220[1] = 0;
  v205 = v14;
  if ((a3 & 1) != 0) {
    v83 = a7;
  }
  else {
    v83 = -a7;
  }
  v202 = v83;
  if (a8 < 2) {
    if (v83 != 0) {
      v224_.v229 = -1;
      v224_.v230 = -1;
      v224_.v231 = -1;
      v224_.v232 = -1;
      v87 = *msg_MessageManager_instance__ptr[0];
      if ((a3 & 1) != 0) {
        v88 = "MID_Sys_Minus";
      }
      else {
        v88 = "MID_Sys_Plus";
      }
      v224_.v233 = -1;
      v224_.v234 = -1;
      v224_.v235 = -1;
      v224_.v236 = -1;
      v224_.v237 = -1;
      v224_.v238 = -1;
      v224_.v239 = -1;
      v224_.v240 = -1;
      v224_.v224[0] = (__int64)(GameData_212e348 + 2);
      v224_.v224[1] = 0xFFFF0001FFFF0000LL;
      v224_.v225 = (const char*)0xFFFF0004FFFF0002LL;
      v224_.v226 = 0xFFFF0006FFFF0005LL;
      v224_.v241 = 8;
      v224_.v227 = -65529;
      v224_.v228 = -65528;
      v89 = GameRoutine_a4dbe0(v87, v88, 0);
    }
    else {
      v89 = &GameData_1a9f09e;
    }
    if (a7 >= 0) {
      v98 = a7;
    }
    else {
      v98 = -a7;
    }
    v99 = game_util_Format("%s%d", v89, v98);
    GameRoutine_60a020((__int64)v222_.v222, v99);
    v97 = game_util_Format("%d", v98);
  }
  else {
    if (v83 != 0) {
      v224_.v229 = -1;
      v224_.v230 = -1;
      v224_.v231 = -1;
      v224_.v232 = -1;
      v84 = *msg_MessageManager_instance__ptr[0];
      if ((a3 & 1) != 0) {
        v85 = "MID_Sys_Minus";
      }
      else {
        v85 = "MID_Sys_Plus";
      }
      v224_.v233 = -1;
      v224_.v234 = -1;
      v224_.v235 = -1;
      v224_.v236 = -1;
      v224_.v237 = -1;
      v224_.v238 = -1;
      v224_.v239 = -1;
      v224_.v240 = -1;
      v224_.v224[0] = (__int64)(GameData_212e348 + 2);
      v224_.v224[1] = 0xFFFF0001FFFF0000LL;
      v224_.v225 = (const char*)0xFFFF0004FFFF0002LL;
      v224_.v226 = 0xFFFF0006FFFF0005LL;
      v224_.v241 = 8;
      v224_.v227 = -65529;
      v224_.v228 = -65528;
      v86 = GameRoutine_a4dbe0(v84, v85, 0);
    }
    else {
      v86 = &GameData_1a9f09e;
    }
    v224_.v229 = -1;
    v224_.v230 = -1;
    v224_.v231 = -1;
    v224_.v232 = -1;
    if (a7 >= 0) {
      v90 = a7;
    }
    else {
      v90 = -a7;
    }
    v91 = *msg_MessageManager_instance__ptr[0];
    v224_.v233 = -1;
    v224_.v234 = -1;
    v224_.v235 = -1;
    v224_.v236 = -1;
    v224_.v237 = -1;
    v224_.v238 = -1;
    v224_.v239 = -1;
    v224_.v240 = -1;
    v224_.v225 = (const char*)0xFFFF0004FFFF0002LL;
    v224_.v226 = 0xFFFF0006FFFF0005LL;
    v224_.v241 = 8;
    v224_.v227 = -65529;
    v224_.v228 = -65528;
    v92 = GameData_212e348 + 2;
    v224_.v224[0] = (__int64)(GameData_212e348 + 2);
    v224_.v224[1] = 0xFFFF0001FFFF0000LL;
    v93 = GameRoutine_a4dbe0(v91, "MID_Sys_Multiply", 0);
    v94 = game_util_Format("%s%d%s%d", v86, v90, v93, a8);
    GameRoutine_60a020((__int64)v222_.v222, v94);
    v224_.v225 = (const char*)0xFFFF0004FFFF0002LL;
    v224_.v226 = 0xFFFF0006FFFF0005LL;
    v224_.v229 = -1;
    v224_.v230 = -1;
    v224_.v231 = -1;
    v224_.v232 = -1;
    v224_.v233 = -1;
    v224_.v234 = -1;
    v95 = *msg_MessageManager_instance__ptr[0];
    v224_.v235 = -1;
    v224_.v236 = -1;
    v224_.v237 = -1;
    v224_.v238 = -1;
    v224_.v239 = -1;
    v224_.v240 = -1;
    v224_.v241 = 8;
    v224_.v227 = -65529;
    v224_.v228 = -65528;
    v224_.v224[0] = (__int64)v92;
    v224_.v224[1] = 0xFFFF0001FFFF0000LL;
    v96 = GameRoutine_a4dbe0(v95, "MID_Sys_Multiply", 0);
    v69 = v212;
    v65 = v59;
    v97 = game_util_Format("%d%s%d", v90, v96, a8);
    v68 = a12;
  }
  GameRoutine_60a020((__int64)v220_.v220, v97);
  ui_LayoutAccessor_SetPaneVisible((__int64)v65, (__int64)"T_Num_Attack", 1);
  if ((v222_.v222[0] & 1) != 0) {
    v100 = v222_.v223;
  }
  else {
    v100 = (char*)v222_.v222 + 1;
  }
  if (v100 != nullptr) {
    v101 = ui_LayoutAccessor_FindTextBox(v65, (__int64)"T_Num_Attack");
    if (v101 != 0) {
      GameRoutine_156c5d0(v101, (__int64)v100, 0);
    }
  }
  if ((a13 & 1) != 0) {
    v102 = 40;
  }
  else {
    v103 = (*(__int64 (**)(int*))(*(_QWORD*)v216 + 56LL))(v216);
    v104 = 48;
    if ((v210 & 1) == 0) {
      v104 = 40;
    }
    if (((a7 != 0) & v103 & (a3 ^ 1)) != 0) {
      v102 = 40;
    }
    else {
      v102 = v104;
    }
  }
  v105 = *(int**)((char*)v69 + v102);
  v106 = *v105;
  if (*v105 >= 2) {
    v107 = 2;
  }
  else {
    v107 = *v105;
  }
  v108 = (*(__int64 (**)(__int64))(*(_QWORD*)v216 + 216LL))((__int64)v216);
  if (v108 != 0) {
    v109 = true;
    if (((1 << *(_BYTE*)(v108 + 104)) & 0x28) != 0) {
      if ((a3 & 1) != 0) {
        goto LABEL_170;
      }
    }
    else {
      v109 = ((1 << *(_BYTE*)(v108 + 104)) & 0x40) != 0;
      if ((a3 & 1) != 0) {
        goto LABEL_170;
      }
    }
  }
  else {
    v109 = false;
    if ((a3 & 1) != 0) {
    LABEL_170:
      v213 = v105;
      v215 = v107;
      if (!v204) {
        goto LABEL_255;
      }
      v208 = v108;
      ui_LayoutAccessor_SetPaneVisible((__int64)v206, (__int64)"T_Num_Hit", 1);
      v224_.v229 = -1;
      v224_.v230 = -1;
      v224_.v231 = -1;
      v224_.v232 = -1;
      v118 = *msg_MessageManager_instance__ptr[0];
      v224_.v233 = -1;
      v224_.v234 = -1;
      v224_.v235 = -1;
      v224_.v236 = -1;
      v224_.v237 = -1;
      v224_.v238 = -1;
      v224_.v239 = -1;
      v224_.v240 = -1;
      v224_.v227 = -65529;
      v224_.v228 = -65528;
      v119 = GameData_212e348 + 2;
      v224_.v224[0] = (__int64)(GameData_212e348 + 2);
      v224_.v224[1] = 0xFFFF0001FFFF0000LL;
      v224_.v225 = (const char*)0xFFFF0004FFFF0002LL;
      v224_.v226 = 0xFFFF0006FFFF0005LL;
      v224_.v241 = 8;
      v120 = GameRoutine_a4dbe0(v118, "MID_Sys_Percent", 0);
      v121 = ui_LayoutAccessor_FindPane(v206, (__int64)"T_Num_Hit");
      if (v121 != 0) {
        v122 = __dynamic_cast(v121, GameData_212d670[0], GameData_212d690, 0);
        if (v122 != 0) {
          GameRoutine_156c910(v122, "%d%s", 2, (unsigned int)a9, v120);
        }
      }
      ui_LayoutAccessor_SetPaneVisible((__int64)v206, (__int64)"T_Num_Critical",
                                       1);
      v224_.v229 = -1;
      v224_.v230 = -1;
      v224_.v231 = -1;
      v224_.v232 = -1;
      v224_.v233 = -1;
      v224_.v234 = -1;
      v224_.v235 = -1;
      v224_.v236 = -1;
      v123 = *msg_MessageManager_instance__ptr[0];
      v224_.v237 = -1;
      v224_.v238 = -1;
      v224_.v239 = -1;
      v224_.v240 = -1;
      v224_.v227 = -65529;
      v224_.v228 = -65528;
      v224_.v224[0] = (__int64)v119;
      v224_.v224[1] = 0xFFFF0001FFFF0000LL;
      v224_.v225 = (const char*)0xFFFF0004FFFF0002LL;
      v224_.v226 = 0xFFFF0006FFFF0005LL;
      v224_.v241 = 8;
      v124 = GameRoutine_a4dbe0(v123, "MID_Sys_Percent", 0);
      v125 = ui_LayoutAccessor_FindPane(v206, (__int64)"T_Num_Critical");
      if (v125 != 0) {
        v126 = __dynamic_cast(v125, GameData_212d670[0], GameData_212d690, 0);
        if (v126 != 0) {
          GameRoutine_156c910(v126, "%d%s", 2, (unsigned int)a10, v124);
        }
      }
      v68 = a12;
      v14 = v205;
      v224_.v224[1] = 0;
      v224_.v225 = nullptr;
      v224_.v224[0] = 0;
      v217_.v218 = 0;
      v217_.v219 = nullptr;
      v217_.v217 = nullptr;
      if (a12 != 3) {
        v69 = v212;
        if (a12 != 11) {
          if (a12 == 5) {
            LOBYTE(v224_.v224[0]) = 24;
            strcpy((char*)v224_.v224 + 1, "MID_Sys_Arts");
          }
          goto LABEL_221;
        }
        goto LABEL_189;
      }
      v69 = v212;
      v127 =
          (v210 & 1 | (v208 == 0)) == 0 && *(unsigned __int8*)(v208 + 104) == 2;
      if (v109) {
        goto LABEL_221;
      }
      if (v205 == 1) {
        if (*(_BYTE*)v212[8] != 0) {
          v149 = "MID_Sys_FollowUp";
        }
        else {
          v149 = "MID_Sys_Attack";
        }
        GameRoutine_60a020((__int64)v224_.v224, v149);
        v128 = v212[8];
      }
      else {
        if (v205 != 0) {
        LABEL_189:
          LOBYTE(v224_.v224[0]) = 28;
          strcpy((char*)v224_.v224 + 1, "MID_Sys_Attack");
        LABEL_221:
          if ((v224_.v224[0] & 1) != 0) {
            v151 = v224_.v224[1];
          }
          else {
            v151 = (unsigned __int64)LOBYTE(v224_.v224[0]) >> 1;
          }
          if (v151 != 0) {
            ui_LayoutAccessor_SetPaneVisible((__int64)v206, (__int64)"T_Info",
                                             1);
            if ((v224_.v224[0] & 1) != 0) {
              v152 = v224_.v225;
            }
            else {
              v152 = (char*)v224_.v224 + 1;
            }
            LayoutAccessor_1562060((char*)v206, (__int64)"T_Info", v152);
          }
          if (((unsigned __int8)v217_.v217 & 1) != 0) {
            v153 = v217_.v218;
          }
          else {
            v153 = (unsigned __int64)(unsigned __int8)v217_.v217 >> 1;
          }
          if (v153 != 0) {
            ui_LayoutAccessor_SetPaneVisible((__int64)v65, (__int64)"T_Info",
                                             1);
            if (((unsigned __int8)v217_.v217 & 1) != 0) {
              v154 = v217_.v219;
            }
            else {
              v154 = (char*)&v217_.v217 + 1;
            }
            LayoutAccessor_1562060((char*)v65, (__int64)"T_Info", v154);
          }
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259520,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire((__int64)&GameData_2259520) != 0) {
            GameData_2259518 = (__int64)&GameData_1a8b170;
            GameData_2259510 = game_HashString((__int64)&GameData_1a8b170);
            __cxa_guard_release((__int64)&GameData_2259520);
          }
          if (game_GameModeData_instance_ != 0 &&
              (v155 = game_GameVariableTable_Find(
                   *(_QWORD**)(game_GameModeData_instance_ + 48),
                   (unsigned __int64*)&GameData_2259510)) != 0) {
            v156 = *(_DWORD*)(v155 + 32);
          }
          else {
            v156 = 100;
          }
          if (a10 >= v156) {
            v157 = "Caution_On";
          }
          else {
            v157 = "Caution_Off";
          }
          LayoutAccessor_1562cf0((__int64)v206, v157);
          if (((unsigned __int8)v217_.v217 & 1) != 0 && v217_.v219 != nullptr) {
            v158 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v158 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v158,
                (__int64)v217_.v219);
          }
          if ((v224_.v224[0] & 1) != 0 && v224_.v225 != nullptr) {
            v159 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v159 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v159,
                (__int64)v224_.v225);
          }
        LABEL_255:
          if (v68 == 21) {
            ui_LayoutAccessor_SetPaneVisible((__int64)v65, (__int64)"T_Num_Hit",
                                             1);
            v160 = msg_MessageManager_instance__ptr[0];
            v224_.v229 = -1;
            v224_.v230 = -1;
            v224_.v231 = -1;
            v224_.v232 = -1;
            v161 = *msg_MessageManager_instance__ptr[0];
            v224_.v233 = -1;
            v224_.v234 = -1;
            v224_.v235 = -1;
            v224_.v236 = -1;
            v224_.v237 = -1;
            v224_.v238 = -1;
            v224_.v239 = -1;
            v224_.v240 = -1;
            v224_.v225 = (const char*)0xFFFF0004FFFF0002LL;
            v224_.v226 = 0xFFFF0006FFFF0005LL;
            v224_.v227 = -65529;
            v224_.v228 = -65528;
            v162 = GameData_212e348 + 2;
            v224_.v224[0] = (__int64)(GameData_212e348 + 2);
            v224_.v224[1] = 0xFFFF0001FFFF0000LL;
            v224_.v241 = 8;
            v163 = GameRoutine_a4dbe0(v161, "MID_Sys_ValueEmpty", 0);
            if (v163 != nullptr) {
              v164 = (__int64)v163;
              v165 = ui_LayoutAccessor_FindTextBox(v65, (__int64)"T_Num_Hit");
              if (v165 != 0) {
                GameRoutine_156c5d0(v165, v164, 0);
              }
            }
            ui_LayoutAccessor_SetPaneVisible((__int64)v65,
                                             (__int64)"T_Num_Critical", 1);
            v166 = *v160;
            v224_.v229 = -1;
            v224_.v230 = -1;
            v224_.v231 = -1;
            v224_.v232 = -1;
            v224_.v233 = -1;
            v224_.v234 = -1;
            v224_.v235 = -1;
            v224_.v236 = -1;
            v224_.v237 = -1;
            v224_.v238 = -1;
            v224_.v239 = -1;
            v224_.v240 = -1;
            v224_.v225 = (const char*)0xFFFF0004FFFF0002LL;
            v224_.v226 = 0xFFFF0006FFFF0005LL;
            v224_.v227 = -65529;
            v224_.v228 = -65528;
            v224_.v224[0] = (__int64)v162;
            v224_.v224[1] = 0xFFFF0001FFFF0000LL;
            v224_.v241 = 8;
            v167 = GameRoutine_a4dbe0(v166, "MID_Sys_ValueEmpty", 0);
            if (v167 != nullptr) {
              v168 = (__int64)v167;
              v169 =
                  ui_LayoutAccessor_FindTextBox(v65, (__int64)"T_Num_Critical");
              if (v169 != 0) {
                GameRoutine_156c5d0(v169, v168, 0);
              }
            }
            LayoutAccessor_1562cf0((__int64)v65, "Caution_Off");
            v14 = v205;
            v69 = v212;
            v107 = v215;
          }
          if ((a4 & 1) != 0) {
            goto LABEL_292;
          }
          v170 = game_util_Format("L_%s_%s%s", v201, "Attack",
                                  *((const char**)&GameData_20e3128 + v107));
          v171 = LayoutAccessor_155fbe0((__int64*)v216 + 3, v170);
          v172 = *(_DWORD*)((char*)((_UNKNOWN*)0xCCLL) +
                            (_QWORD)GameData_212da30 + 4);
          v173 = ui_LayoutAccessor_FindTextBox(v171, (__int64)"T_Num");
          if (v173 != 0) {
            v174 = Pane_58f8a0(v173);
            if (v174 != 0) {
              *(_DWORD*)(v174 + 12) = v172;
            }
          }
          if ((v220_.v220[0] & 1) != 0) {
            v175 = v220_.v221;
          }
          else {
            v175 = (char*)v220_.v220 + 1;
          }
          if (v175 != nullptr) {
            v176 = ui_LayoutAccessor_FindTextBox(v171, (__int64)"T_Num");
            if (v176 != 0) {
              GameRoutine_156c5d0(v176, (__int64)v175, 0);
            }
          }
          v107 = v215;
          if (v106 == 0 || v14 == 0 && *(_BYTE*)v69[2] == 1 && v106 == 1) {
            v177 = game_util_Format("L_%s_Attack", v201);
            LayoutAccessor_1560070((void*)(v224_.v224), (__int64*)v216 + 3,
                                   v177);
            if (v224_.v224[1] != 0) {
              v178 = std___1___shared_weak_count_lock(v224_.v224[1]);
              v179 = (__int64*)v224_.v224[0];
              if (v224_.v224[1] != 0) {
                std___1___shared_weak_count___release_weak(v224_.v224[1]);
              }
              if (v178 != 0 && v179 != nullptr) {
                v224_.v229 = -1;
                v224_.v230 = -1;
                v224_.v231 = -1;
                v224_.v232 = -1;
                v180 = *msg_MessageManager_instance__ptr[0];
                v224_.v233 = -1;
                v224_.v234 = -1;
                v224_.v235 = -1;
                v224_.v236 = -1;
                v224_.v237 = -1;
                v224_.v238 = -1;
                v224_.v239 = -1;
                v224_.v240 = -1;
                v224_.v224[0] = (__int64)(GameData_212e348 + 2);
                v224_.v224[1] = 0xFFFF0001FFFF0000LL;
                v224_.v225 = (const char*)0xFFFF0004FFFF0002LL;
                v224_.v226 = 0xFFFF0006FFFF0005LL;
                v224_.v241 = 8;
                v224_.v227 = -65529;
                v224_.v228 = -65528;
                v181 = GameRoutine_a4dbe0(v180, "MID_Sys_Attack", 0);
                if (v181 != nullptr) {
                  v182 = (__int64)v181;
                  v183 =
                      ui_LayoutAccessor_FindTextBox(v179, (__int64)"T_Title");
                  if (v183 != 0) {
                    GameRoutine_156c5d0(v183, v182, 0);
                  }
                }
                v184 = ui_LayoutAccessor_FindPane(v179, (__int64)"Icon");
                if (v184 != 0) {
                  v184 = __dynamic_cast(v184, GameData_212d670[0],
                                        GameData_212d678[0], 0);
                }
                v107 = v215;
                GameRoutine_1841000(v184, v197);
              }
              else if (v178 == 0) {
                goto LABEL_291;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v178 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v178 + 16LL))(v178);
                std___1___shared_weak_count___release_weak(v178);
              }
            }
          }
        LABEL_291:
          if (!v204) {
            goto LABEL_306;
          }
        LABEL_292:
          v185 = *(_QWORD*)(*((_QWORD*)v216 + 19) + 760LL * v14 + 40);
          v186 = *((const char**)&GameData_20e3128 + v107);
          v217_.v217 = game_util_Format("L_%s_%s%s", v201, "Hit", v186);
          v217_.v218 = strlen(v217_.v217);
          LayoutAccessor_1839200((void*)(v224_.v224), (__int64*)v216 + 3,
                                 (const char**)&v217_.v217);
          v187 = v224_.v224[1];
          if (v224_.v224[1] == 0) {
            goto LABEL_299;
          }
          v188 = std___1___shared_weak_count_lock(v224_.v224[1]);
          v189 = v224_.v224[0];
          v190 = v188;
          std___1___shared_weak_count___release_weak(v187);
          if (v190 != 0 && v189 != 0) {
            BattleInfoStatus_19ad660(v189, v185, a9, 0);
            v105 = v213;
          }
          else {
            v105 = v213;
            if (v190 == 0) {
              goto LABEL_299;
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v190 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v190 + 16LL))(v190);
            std___1___shared_weak_count___release_weak(v190);
          }
        LABEL_299:
          v217_.v217 = game_util_Format("L_%s_%s%s", v201, "Critical", v186);
          v217_.v218 = strlen(v217_.v217);
          LayoutAccessor_1839200((void*)(v224_.v224), (__int64*)v216 + 3,
                                 (const char**)&v217_.v217);
          v191 = v224_.v224[1];
          if (v224_.v224[1] != 0) {
            v192 = std___1___shared_weak_count_lock(v224_.v224[1]);
            v193 = v224_.v224[0];
            v194 = v192;
            std___1___shared_weak_count___release_weak(v191);
            if (v194 != 0 && v193 != 0) {
              BattleInfoStatus_19ad660(v193, v185, a10, 1);
              goto LABEL_304;
            }
            if (v194 != 0) {
            LABEL_304:
              if (atomic_fetch_add((atomic_ullong* volatile)(v194 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v194 + 16LL))(v194);
                std___1___shared_weak_count___release_weak(v194);
              }
            }
          }
        LABEL_306:
          ++*v105;
          goto LABEL_307;
        }
        v128 = v212[7];
        if ((v127 & (*(unsigned __int8*)v128 ^ 1)) == 1) {
          LOBYTE(v224_.v224[0]) = 24;
          strcpy((char*)v224_.v224 + 1, "MID_Sys_Arts");
        }
        else {
          if (*(_BYTE*)v128 != 0) {
            v150 = "MID_Sys_FollowUp";
          }
          else {
            v150 = "MID_Sys_Attack";
          }
          GameRoutine_60a020((__int64)v224_.v224, v150);
          v128 = v212[7];
        }
      }
      *(_BYTE*)v128 = 1;
      goto LABEL_221;
    }
  }
  if ((a4 & 1) != 0) {
    goto LABEL_170;
  }
  if ((v207 & 1) != 0) {
    if (v202 >= 1) {
      if (((*(__int64 (**)(int*))(*(_QWORD*)v216 + 56LL))(v216) & 1) != 0) {
        v110 = v198;
      }
      else {
        v110 = v201;
      }
      v111 = game_util_Format("L_%s_%s%s", v110, "Attack",
                              *((_QWORD*)&GameData_20e3128 + v107));
      v112 = LayoutAccessor_155fbe0((__int64*)v216 + 3, v111);
      v113 = *(_DWORD*)((char*)((_UNKNOWN*)0xD4LL) + (_QWORD)GameData_212da30);
      v114 = ui_LayoutAccessor_FindTextBox(v112, (__int64)"T_Num");
      if (v114 != 0) {
        v115 = Pane_58f8a0(v114);
        if (v115 != 0) {
          *(_DWORD*)(v115 + 12) = v113;
        }
      }
      if ((v220_.v220[0] & 1) != 0) {
        v116 = v220_.v221;
      }
      else {
        v116 = (char*)v220_.v220 + 1;
      }
      if (v116 != nullptr) {
        v117 = ui_LayoutAccessor_FindTextBox(v112, (__int64)"T_Num");
        if (v117 != 0) {
          GameRoutine_156c5d0(v117, (__int64)v116, 0);
        }
      }
      if (v106 == 0) {
        if ((a13 & 1) != 0) {
          ++*v105;
        }
        else {
          v224_.v229 = -1;
          v224_.v230 = -1;
          v224_.v231 = -1;
          v224_.v232 = -1;
          v129 = *msg_MessageManager_instance__ptr[0];
          v224_.v233 = -1;
          v224_.v234 = -1;
          v224_.v235 = -1;
          v224_.v236 = -1;
          v224_.v237 = -1;
          v224_.v238 = -1;
          v224_.v239 = -1;
          v224_.v240 = -1;
          v224_.v224[0] = (__int64)(GameData_212e348 + 2);
          v224_.v224[1] = 0xFFFF0001FFFF0000LL;
          v224_.v225 = (const char*)0xFFFF0004FFFF0002LL;
          v224_.v226 = 0xFFFF0006FFFF0005LL;
          v224_.v241 = 8;
          v224_.v227 = -65529;
          v224_.v228 = -65528;
          v130 = GameRoutine_a4dbe0(v129, "MID_Sys_Recovery", 0);
          if (v130 != nullptr) {
            v131 = (__int64)v130;
            v132 = ui_LayoutAccessor_FindTextBox(v112, (__int64)"T_Title");
            if (v132 != 0) {
              GameRoutine_156c5d0(v132, v131, 0);
            }
          }
          v133 = ui_LayoutAccessor_FindPane(v112, (__int64)"Icon");
          if (v133 != 0) {
            v133 = __dynamic_cast(v133, GameData_212d670[0],
                                  GameData_212d678[0], 0);
          }
          GameRoutine_1841000(v133, 7);
        }
      }
      if (v200 == v199) {
        v134 = v65;
      }
      else {
        v134 = v206;
      }
      if (!v109) {
        ui_LayoutAccessor_SetPaneVisible((__int64)v134, (__int64)"T_Info", 1);
        v224_.v229 = -1;
        v224_.v230 = -1;
        v224_.v231 = -1;
        v224_.v232 = -1;
        v135 = *msg_MessageManager_instance__ptr[0];
        v224_.v233 = -1;
        v224_.v234 = -1;
        v224_.v235 = -1;
        v224_.v236 = -1;
        v224_.v237 = -1;
        v224_.v238 = -1;
        v224_.v239 = -1;
        v224_.v240 = -1;
        v224_.v224[0] = (__int64)(GameData_212e348 + 2);
        v224_.v224[1] = 0xFFFF0001FFFF0000LL;
        v224_.v225 = (const char*)0xFFFF0004FFFF0002LL;
        v224_.v226 = 0xFFFF0006FFFF0005LL;
        v224_.v241 = 8;
        v224_.v227 = -65529;
        v224_.v228 = -65528;
        v136 = GameRoutine_a4dbe0(v135, "MID_Sys_Recovery", 0);
        if (v136 != nullptr) {
          v137 = (__int64)v136;
          v138 = ui_LayoutAccessor_FindTextBox(v134, (__int64)"T_Info");
          if (v138 != 0) {
            GameRoutine_156c5d0(v138, v137, 0);
          }
        }
      }
      ui_LayoutAccessor_SetPaneVisible((__int64)v134, (__int64)"T_Num_Hit", 1);
      v139 = msg_MessageManager_instance__ptr[0];
      v224_.v229 = -1;
      v224_.v230 = -1;
      v224_.v231 = -1;
      v224_.v232 = -1;
      v140 = *msg_MessageManager_instance__ptr[0];
      v224_.v233 = -1;
      v224_.v234 = -1;
      v224_.v235 = -1;
      v224_.v236 = -1;
      v224_.v237 = -1;
      v224_.v238 = -1;
      v224_.v239 = -1;
      v224_.v240 = -1;
      v224_.v225 = (const char*)0xFFFF0004FFFF0002LL;
      v224_.v226 = 0xFFFF0006FFFF0005LL;
      v224_.v227 = -65529;
      v224_.v228 = -65528;
      v141 = GameData_212e348 + 2;
      v224_.v224[0] = (__int64)(GameData_212e348 + 2);
      v224_.v224[1] = 0xFFFF0001FFFF0000LL;
      v224_.v241 = 8;
      v142 = GameRoutine_a4dbe0(v140, "MID_Sys_ValueEmpty", 0);
      if (v142 != nullptr) {
        v143 = (__int64)v142;
        v144 = ui_LayoutAccessor_FindTextBox(v134, (__int64)"T_Num_Hit");
        if (v144 != 0) {
          GameRoutine_156c5d0(v144, v143, 0);
        }
      }
      ui_LayoutAccessor_SetPaneVisible((__int64)v134, (__int64)"T_Num_Critical",
                                       1);
      v145 = *v139;
      v224_.v229 = -1;
      v224_.v230 = -1;
      v224_.v231 = -1;
      v224_.v232 = -1;
      v224_.v233 = -1;
      v224_.v234 = -1;
      v224_.v235 = -1;
      v224_.v236 = -1;
      v224_.v237 = -1;
      v224_.v238 = -1;
      v224_.v239 = -1;
      v224_.v240 = -1;
      v224_.v224[0] = (__int64)v141;
      v224_.v224[1] = 0xFFFF0001FFFF0000LL;
      v224_.v225 = (const char*)0xFFFF0004FFFF0002LL;
      v224_.v226 = 0xFFFF0006FFFF0005LL;
      v224_.v241 = 8;
      v224_.v227 = -65529;
      v224_.v228 = -65528;
      v146 = GameRoutine_a4dbe0(v145, "MID_Sys_ValueEmpty", 0);
      if (v146 != nullptr) {
        v147 = (__int64)v146;
        v148 = ui_LayoutAccessor_FindTextBox(v134, (__int64)"T_Num_Critical");
        if (v148 != 0) {
          GameRoutine_156c5d0(v148, v147, 0);
        }
      }
    }
    LayoutAccessor_1562cf0((__int64)v206, "Caution_Off");
  }
LABEL_307:
  if ((v220_.v220[0] & 1) != 0 && v220_.v221 != nullptr) {
    v195 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v195 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v195,
                                  (__int64)v220_.v221);
  }
  if ((v222_.v222[0] & 1) != 0 && v222_.v223 != nullptr) {
    v196 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v196 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v196,
                                  (__int64)v222_.v223);
  }
}

__int64 game_1841fc0(__int64 a1, int a2)
{
  __int64 v2;
  char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64 v12[3];
  __int64 v13[3];

  v2 = a1;
  if (a1 == 0) {
    return v2 & 1;
  }
  strcpy((char*)v13, " IconRelianceUnit");
  if (a2 >= 1) {
    v3 = game_util_Format("%s%02d", (const char*)v13 + 1, a2);
    v4 = strlen(v3);
    if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v5 = v4;
    if (v4 >= 0x17) {
      if ((v4 | 7) == 0x17) {
        v7 = 26;
      }
      else {
        v7 = (v4 | 7) + 1;
      }
      v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7,
                                                 16, 0);
      v12[1] = v5;
      v12[2] = (__int64)v6;
      v12[0] = v7 | 1;
    }
    else {
      LOBYTE(v12[0]) = 2 * v4;
      v6 = (char*)v12 + 1;
      if (v4 == 0) {
        goto LABEL_13;
      }
    }
    memmove((__int64)v6, (__int64)v3, v5);
  LABEL_13:
    v6[v5] = 0;
    goto LABEL_14;
  }
  qmemcpy(v12, v13, sizeof(v12));
LABEL_14:
  if ((v12[0] & 1) != 0) {
    v8 = (_BYTE*)v12[2];
  }
  else {
    v8 = (char*)v12 + 1;
  }
  LOBYTE(v2) = Manager_136a920(ui_Manager_instance_ + 1264, v2, 0, 7u, v8);
  if ((v12[0] & 1) != 0 && v12[2] != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  v12[2]);
  }
  if ((v13[0] & 1) != 0 && v13[2] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v13[2]);
  }
  return v2 & 1;
}

__int64 game_1842ee0(__int64 a1, unsigned __int8 a2)
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
  if (a2 > 3u) {
    if (a2 > 5u) {
      if (a2 == 6) {
        v3 = "IconPageTab_Equipment";
        return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
      }
      if (a2 == 7) {
        v3 = "IconPageTab_Tool";
        return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
      }
    }
    else {
      if (a2 == 4) {
        v3 = "IconPageTab_Bow";
        return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
      }
      if (a2 == 5) {
        v3 = "IconPageTab_Fist";
        return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
      }
    }
  LABEL_24:
    v3 = &GameData_1a9f09e;
    return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
  }
  if (a2 > 1u) {
    if (a2 == 2) {
      v3 = "IconPageTab_Lance";
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    }
    if (a2 == 3) {
      v3 = "IconPageTab_Axe";
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    }
    goto LABEL_24;
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
  v3 = "IconPageTab_Sword";
  return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
}

__int64 game_1843710(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  char* v3;
  char v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  float v9;
  __int64 var4;

  if (a1 != 0) {
    v3 = "IconPageTab_Important";
    switch (a2) {
    case 0:
      return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
    case 1:
      v4 = Manager_136ad70(ui_Manager_instance_ + 1264, a1, 0, 7u,
                           "IconPageTab_All");
      v5 = Pane_58f8a0(a1);
      if (v5 != 0) {
        v6 = *(_QWORD*)(*(_QWORD*)(v5 + 24) + 8LL);
        if (v6 != 0) {
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
              *(_QWORD*)v6 + 32LL))((void*)(&var4), (__int64)v6);
          LOWORD(v8) = WORD1(var4);
          LOWORD(v7) = var4;
          v9 = *(float*)(a1 + 84);
          *(_BYTE*)(a1 + 88) |= 0x10u;
          *(float*)(a1 + 80) = v9 * (float)((float)v7 / (float)v8);
        }
      }
      return v4 & 1;
    case 2:
      v3 = "IconPageTab_GmapHub";
      break;
    case 3:
      v3 = "IconPageTab_GmapHubSimple";
      break;
    case 4:
      v3 = "IconPageTab_GmapTemple";
      break;
    case 5:
      v3 = "IconPageTab_GmapDungeon";
      break;
    case 6:
      v3 = "IconPageTab_GmapStation";
      break;
    case 7:
      v3 = "IconPageTab_GmapGate";
      break;
    case 8:
      v3 = "IconPageTab_GmapFort";
      break;
    case 9:
      v3 = "IconPageTab_GmapBanquet";
      break;
    case 10:
      v3 = "IconPageTab_GmapConstruction";
      break;
    case 11:
      v3 = "IconPageTab_GmapSightExplore";
      break;
    case 12:
      v3 = "IconPageTab_GmapSightAnimal";
      break;
    default:
      v3 = &GameData_1a9f09e;
      break;
    }
    return Manager_136a920(ui_Manager_instance_ + 1264, a1, 0, 7u, v3);
  }
  else {
    v4 = 0;
    return v4 & 1;
  }
}

void game_18c9b10(__int64* a1, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  char v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  const char* v18;
  int v19;
  __int64* v20;
  float v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  const char* v25;
  __int64 v26;
  __int64 v27;
  float v28;
  char* v29;
  float v30;
  float v31;
  char v32;
  __int64 v33;
  __int128 v34;
  char* v35;

  if (a2 == 0) {
    goto LABEL_43;
  }
  v4 = *(_QWORD*)(a2 + 440);
  v7 = v4 != 0 ? *(_BYTE*)(v4 + 16) : 9;
  if (((1 << v7) & 0xF1) == 0) {
    goto LABEL_43;
  }
  v8 = game_820d50(2);
  if (game_GameModeData_instance_ != 0) {
    v9 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v8);
    if (v9 != 0 && *(_DWORD*)(v9 + 32) != 0) {
      goto LABEL_43;
    }
  }
  v10 = *(_QWORD*)(a2 + 440);
  if (v10 != 0) {
    v11 = *(_BYTE*)(v10 + 16);
  }
  else {
    v11 = 9;
  }
  v12 = game_g_shared_system_skills_ptr_alt1;
  if (((1 << v11) & 0xF1) == 0 ||
      (v13 = game_820d50(2), game_GameModeData_instance_ != 0) &&
          (v14 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v13)) != 0 &&
          *(_DWORD*)(v14 + 32) != 0) {
    v15 = 0;
  }
  else {
    LODWORD(v34) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xDCLL) + v12) & 0xFFF;
    if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v34) & 1) != 0) {
      v15 = 12;
    }
    else {
      v15 = 6;
    }
  }
  v16 = *(unsigned __int8*)(a2 + 499);
  LODWORD(v34) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x17CLL) + v12) & 0xFFF;
  if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v34) & 1) == 0) {
    LODWORD(v34) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v12) & 0xFFF;
    if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v34) & 1) != 0) {
      v35 = nullptr;
      v17 = 1;
      LOBYTE(v34) = 22;
      *((_QWORD*)&v34 + 1) = 1953393007;
      v18 = "HeavenPoint";
      goto LABEL_24;
    }
    LODWORD(v34) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v12) & 0xFFF;
    if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v34) & 1) != 0) {
      v35 = nullptr;
      v34 = (__typeof__(v34)){0};
      if (v15 >= 7) {
        v25 = "HellPoint_Main";
      }
      else {
        v25 = "HellPoint_Sub";
      }
      GameRoutine_60a020((__int64)&v34, v25);
      v17 = 0;
      goto LABEL_25;
    }
  LABEL_43:
    (*(void (**)(__int64*, _QWORD))(*a1 + 40))(a1, 0);
    return;
  }
  *((_QWORD*)&v34 + 1) = 0x746E696F00LL;
  v35 = nullptr;
  v17 = 2;
  LOBYTE(v34) = 24;
  v18 = "MachinePoint";
LABEL_24:
  *(_QWORD*)((char*)&v34 + 1) = *(_QWORD*)v18;
LABEL_25:
  v19 = a3 - v16;
  v20 = a1 + 140;
  *((_DWORD*)a1 + 276) = 0;
  *((_DWORD*)a1 + 287) = v16;
  if (a3 < 0) {
    v19 = 0;
  }
  *((_BYTE*)a1 + 1145) = v15 < 7;
  *((_DWORD*)a1 + 288) = v19;
  v21 = fabsf((float)v19) * 0x1.0000000000000p+2f;
  *((float*)a1 + 277) = v21;
  *((float*)a1 + 278) =
      (float)(v21 + 0x1.4000000000000p+3f) + 0x1.4000000000000p+5f;
  if (v20 != (__int64*)&v34) {
    if ((*(_BYTE*)v20 & 1) != 0) {
      if ((v34 & 1) != 0) {
        v23 = v35;
      }
      else {
        v23 = (char*)&v34 + 1;
      }
      if ((v34 & 1) != 0) {
        v24 = *((_QWORD*)&v34 + 1);
      }
      else {
        v24 = (unsigned __int64)(unsigned __int8)v34 >> 1;
      }
      SpineModel_64dde0(v20, (__int64)v23, v24);
    }
    else if ((v34 & 1) != 0) {
      GameRoutine_64df20(v20, (__int64)v35, *((unsigned __int64*)&v34 + 1));
    }
    else {
      v22 = *((_QWORD*)&v34 + 1);
      *v20 = v34;
      a1[141] = v22;
      a1[142] = (__int64)v35;
    }
  }
  v26 = ui_LayoutAccessor_FindPane(a1 + 11, (__int64)"Icon");
  if (v26 != 0) {
    v27 = __dynamic_cast(v26, GameData_212d670[0], GameData_212d678[0], 0);
    if (v27 != 0) {
      Manager_136a920(ui_Manager_instance_ + 1264, v27, 0, 7u,
                      GameData_21088f8[v17]);
    }
  }
  v28 = 0x1.0000000000000p+0f;
  if (v15 != 0 && v15 >= v16) {
    v28 = (float)v16 / (float)v15;
  }
  if ((v34 & 1) != 0) {
    v29 = v35;
  }
  else {
    v29 = (char*)&v34 + 1;
  }
  if (*v29 != 0) {
    GameHr_1562680((__int64)(a1 + 11), v29, 0x0.0p+0f);
    v30 = LayoutAccessor_15638b0(a1 + 11, v29, 1);
    v31 = 0x1.0000000000000p+0f;
    if (v28 <= 0x1.0000000000000p+0f) {
      v31 = v28;
    }
    LayoutAccessor_15636c0((__int64)(a1 + 11), (__int64)v29, 1, v31 * v30);
  }
  (*(void (**)(__int64*, __int64))(*a1 + 40))(a1, 1);
  v32 = v34;
  a1[135] = a2;
  if ((v32 & 1) != 0 && v35 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33,
                                  (__int64)v35);
  }
}

void game_1917fb0(__int64* a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  signed __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  v3 = a1[1];
  v2 = a1[2];
  if (a2 <= (v2 - v3) >> 4) {
    memset(a1[1], 0, 16 * a2);
    a1[1] = v3 + 16 * a2;
  }
  else {
    v6 = *a1;
    v7 = v3 - *a1;
    v8 = v7 >> 4;
    v9 = (v7 >> 4) + a2;
    if (v9 >> 60 != 0) {
      GameRoutine_1918110();
    }
    v10 = v2 - v6;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 3 > v9) {
      v9 = v10 >> 3;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF0LL) {
      v12 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 60 != 0) {
        GameRoutine_60a210();
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + v7;
    v15 = v13 + 16 * v12;
    memset(v13 + v7, 0, 16 * a2);
    memcpy(v14 - 16 * v8, v6, v7);
    *a1 = v14 - 16 * v8;
    a1[1] = v14 + 16 * a2;
    a1[2] = v15;
    if (v6 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v6);
    }
  }
}

__attribute__((swiftcall)) void game_191d520(PSEUDO_X8 x8_, char a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v3 = GameData_212c750;
  v4 = *GameData_212c750;
  if ((a1 & 1) == 0 || v4 != 0) {
    goto LABEL_9;
  }
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      248, 16, 0);
  v6 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
  *(_QWORD*)(v5 + 8) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)v5 = GameData_21108e8;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_QWORD*)(v5 + 136) = 0;
  *(_DWORD*)(v5 + 56) = 1065353216;
  *(_DWORD*)(v5 + 96) = 1065353216;
  *(_DWORD*)(v5 + 136) = 1065353216;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_BYTE*)(v5 + 240) = 0;
  *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = (_UNKNOWN*)v5;
  *(_QWORD*)(v5 + 24) = 0;
  v7 = v5 + 24;
  *v3 = v7;
  if (v6 == 0) {
    goto LABEL_6;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    v7 = *v3;
    if (*v3 != 0) {
    LABEL_6:
      game_191d680(v7, 0);
      v4 = *v3;
      goto LABEL_9;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    v7 = *v3;
    if (*v3 != 0) {
      goto LABEL_6;
    }
  }
  v4 = 0;
LABEL_9:
  v8 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
  *a2 = v4;
  a2[1] = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
  }
}

void game_191eec0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  __int64 i;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  unsigned __int8* v14;
  unsigned __int64 v15;
  unsigned __int8* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v22;
    unsigned __int64 v23;
    unsigned __int8* v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
  } v22_;
  int v34;
  __int64 v35;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  v2 = GameData_21c9738;
  if (GameData_21c9738 != 0) {
    v3 = GameData_21c9730;
    v6 = GameData_21c9738;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(GameData_21c9738 + 16),
                              1u, memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    std___1___shared_weak_count___release_weak(v2),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v7 != 0) {
      if (v3 == 0) {
      LABEL_49:
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          std___1___shared_weak_count___release_weak(v7),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        return;
      }
      v22_.v32 = 0;
      v22_.v33 = 0;
      v22_.v30 = 0;
      v22_.v31 = 0;
      v22_.v28 = 0;
      v22_.v29 = 0;
      v22_.v26 = 0;
      v22_.v27 = 0;
      v22_.v24 = nullptr;
      v22_.v25 = 0;
      v22_.v22 = 0;
      v22_.v23 = 0;
      if (a2 != 0) {
        v8 = *(const char**)(a2 + 40);
        if (v8 != nullptr && *v8 != 0) {
          SpineSlotChecker_19220e0((__int64)&v22_.v22, v8, *(_BYTE*)(a2 + 48)),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
      }
      if ((game_111c720((unsigned __int8*)&v22_.v22) & 1) == 0) {
        if ((v22_.v22 & 1) != 0) {
          v15 = v22_.v23;
        }
        else {
          v15 = (unsigned __int64)(unsigned __int8)v22_.v22 >> 1;
        }
        if (v15 != 0) {
          v16 = v22_.v24;
          if ((v22_.v22 & 1) == 0) {
            v16 = (unsigned __int8*)&v22_.v22 + 1;
          }
          if ((unsigned int)*v16 - 51 <= 1) {
            SpineCaptureProcessor_191e360((_DWORD*)a1, 4u, *(_BYTE*)(a2 + 48)),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
        }
        goto LABEL_29;
      }
      v9 = game_GetHero(9u),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v9 != 0) {
        for (i = v9; i != 0; i = *(_QWORD*)(i + 624)) {
          v11 = i;
        }
        if (*(_BYTE*)(v11 + 441) == 3) {
          v12 = *(_QWORD*)(v9 + 624);
          if (v12 == 0) {
            v12 = v9;
          }
          v35 = v12;
          v34 = 241;
          v13 = game_UnitPool_Find_6ead60(&v35, &v34),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if (v13 != nullptr) {
            v14 = (unsigned __int8*)(v13 + 263);
          LABEL_28:
            game_191f160((_QWORD*)a1, v14),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          LABEL_29:
            if ((v22_.v31 & 1) != 0 && v22_.v33 != 0) {
              v18 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v18 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v22_.v33),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            if ((v22_.v28 & 1) != 0 && v22_.v30 != 0) {
              v19 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v19 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v22_.v30),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            if ((v22_.v25 & 1) != 0 && v22_.v27 != 0) {
              v20 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v20 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v22_.v27),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            if ((v22_.v22 & 1) != 0 && v22_.v24 != nullptr) {
              v21 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v21 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                  (__int64)v22_.v24),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            goto LABEL_49;
          }
          v17 = *(_QWORD*)(game_GameModeData_instance_ + 176);
          if (*(_BYTE*)(v17 + 144) != 0) {
            v14 = (unsigned __int8*)(v17 + 112);
            goto LABEL_28;
          }
        }
      }
      v14 = (unsigned __int8*)&GameData_21f49b8;
      goto LABEL_28;
    }
  }
}

__int64 game_196e120(__int64 a1, int a2)
{
  int v2;
  unsigned __int64 v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v17[2];
    char* v18;
  } v17_;

  game_196dfe0((void*)(v17_.v17), a1, a2);
  v2 = v17_.v17[0] & 1;
  v3 = (unsigned __int64)LOBYTE(v17_.v17[0]) >> 1;
  if (v2 != 0) {
    v3 = v17_.v17[1];
  }
  if (v3 == 0) {
    v10 = 0;
    if (v2 != 0) {
      goto LABEL_35;
    }
    return v10;
  }
  if (v2 != 0) {
    v4 = v17_.v18;
  }
  else {
    v4 = (char*)v17_.v17 + 1;
  }
  v5 = game_HashString((__int64)v4);
  if (v5 == 0) {
    goto LABEL_33;
  }
  v6 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v6 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_33;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = v5;
    if (v5 >= v6) {
      v9 = v5 % v6;
    }
  }
  else {
    v9 = v8 & v5;
  }
  v11 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v9);
  if (v11 == nullptr || (v12 = (_QWORD*)*v11) == nullptr) {
  LABEL_33:
    v10 = 0;
    goto LABEL_34;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v14 = v12[1];
      if (v14 == v5) {
        if (v12[2] == v5) {
          goto LABEL_40;
        }
      }
      else if ((v14 & v8) != v9) {
        goto LABEL_33;
      }
      v12 = (_QWORD*)*v12;
      v10 = 0;
      if (v12 == nullptr) {
        goto LABEL_34;
      }
    }
  }
  while (1) {
    v13 = v12[1];
    if (v13 == v5) {
      break;
    }
    if (v13 >= v6) {
      v13 %= v6;
    }
    if (v13 != v9) {
      goto LABEL_33;
    }
  LABEL_23:
    v12 = (_QWORD*)*v12;
    if (v12 == nullptr) {
      goto LABEL_33;
    }
  }
  if (v12[2] != v5) {
    goto LABEL_23;
  }
LABEL_40:
  v10 = v12[3];
LABEL_34:
  if ((v17_.v17[0] & 1) != 0) {
  LABEL_35:
    if (v17_.v18 != nullptr) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v17_.v18);
    }
  }
  return v10;
}

__int64 game_19aa5a0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v8[2];
  struct {
    __int64 v9;
    __int64 v10;
  } v9_;

  GameHr_1366ac0((void*)(&v9_.v9), (__int64)"Layout/Battle.arc",
                 (__int64)"Battle_Counter");
  v2 = v9_.v9;
  v3 = v9_.v10;
  v4 = a1[4];
  v9_.v9 = 0;
  v9_.v10 = 0;
  a1[3] = v2;
  a1[4] = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v9_.v10;
  if (v9_.v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9_.v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[4];
  v8[0] = a1[3];
  v8[1] = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(a1 + 5, v8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(a1 + 5, v8);
  }
  LayoutAccessor_155e830((__int64)(a1 + 5), 0);
  return ui_LayoutAccessor_SetPriority((__int64)(a1 + 5), -1);
}

__int64 game_19b1170(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;

  GameHr_1366ac0((void*)(&v7_.v7), (__int64)"Layout/Ending.arc",
                 (__int64)"Ending_Record");
  v2 = v7_.v7;
  v3 = v7_.v8;
  v4 = *(_QWORD*)(a1 + 224);
  v7_.v7 = 0;
  v7_.v8 = 0;
  *(_QWORD*)(a1 + 216) = v2;
  *(_QWORD*)(a1 + 224) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v7_.v8;
  if (v7_.v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7_.v8 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  return GameRoutine_1033670(a1, 0);
}

__int64 game_19ef080(__int64 result)
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
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;
  struct {
    _QWORD v19[6];
    int v20;
    char gap68_[4];
    __int64 v21;
    __int64 v22;
    __int64 v23;
  } v19_;

  if (GameData_22736d0 == 0) {
    v1 = result;
    v2 = fw_memory_g_heap_manager_ptr;
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        632, 16, 0);
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
    GameData_22736d0 = v3;
    *(_QWORD*)(v3 + 152) = 0;
    *(_QWORD*)(v3 + 160) = 0;
    *(_QWORD*)(v3 + 192) = v3 + 200;
    *(_QWORD*)v3 = game_gameui_anonymous_ProcFastForward_vtable;
    *(_QWORD*)(v3 + 168) = 0;
    *(_QWORD*)(v3 + 176) = 0;
    *(_QWORD*)(v3 + 184) = 0;
    *(_QWORD*)(v3 + 208) = 0;
    *(_QWORD*)(v3 + 216) = 0;
    *(_QWORD*)(v3 + 224) = 0;
    *(_QWORD*)(v3 + 232) = 0;
    *(_QWORD*)(v3 + 240) = 0;
    *(_QWORD*)(v3 + 304) = 0;
    *(_QWORD*)(v3 + 312) = 0;
    *(_QWORD*)(v3 + 288) = 0;
    *(_QWORD*)(v3 + 296) = v3 + 304;
    *(_DWORD*)(v3 + 248) = 1065353216;
    *(_DWORD*)(v3 + 352) = 1065353216;
    *(_DWORD*)(v3 + 384) = 1065353216;
    *(_DWORD*)(v3 + 528) = 1065353216;
    *(_DWORD*)(v3 + 560) = 1065353216;
    *(_QWORD*)(v3 + 464) = 0;
    *(_QWORD*)(v3 + 472) = v3 + 480;
    *(_QWORD*)(v3 + 272) = 0;
    *(_QWORD*)(v3 + 280) = 0;
    *(_QWORD*)(v3 + 256) = 0;
    *(_QWORD*)(v3 + 264) = 0;
    *(_QWORD*)(v3 + 320) = 0;
    *(_QWORD*)(v3 + 328) = 0;
    *(_QWORD*)(v3 + 336) = 0;
    *(_QWORD*)(v3 + 344) = 0;
    *(_QWORD*)(v3 + 360) = 0;
    *(_QWORD*)(v3 + 368) = 0;
    *(_QWORD*)(v3 + 376) = 0;
    *(_WORD*)(v3 + 392) = 0;
    *(_WORD*)(v3 + 416) = 0;
    *(_BYTE*)(v3 + 440) = 0;
    *(_QWORD*)(v3 + 480) = 0;
    *(_QWORD*)(v3 + 488) = 0;
    *(_QWORD*)(v3 + 448) = 0;
    *(_QWORD*)(v3 + 456) = 0;
    *(_QWORD*)(v3 + 520) = 0;
    *(_QWORD*)(v3 + 504) = 0;
    *(_QWORD*)(v3 + 512) = 0;
    *(_QWORD*)(v3 + 496) = 0;
    *(_QWORD*)(v3 + 536) = 0;
    *(_QWORD*)(v3 + 544) = 0;
    *(_QWORD*)(v3 + 552) = 0;
    *(_WORD*)(v3 + 568) = 0;
    *(_WORD*)(v3 + 592) = 0;
    *(_BYTE*)(v3 + 616) = 0;
    v19_.v21 = 0;
    v19_.v22 = 0;
    v19_.v23 = 0;
    __builtin_memset(&v19_.v19[2], 0, 32);
    v19_.v19[0] = 0x800000018LL;
    v19_.v19[1] = 0x500000050LL;
    v19_.v20 = 0;
    game_1366bd0((void*)(&v17_.v17), (__int64)"Layout/Common.arc",
                 (__int64)"Common_FastForward", (__int64)v19_.v19);
    v5 = v17_.v17;
    v6 = v17_.v18;
    v7 = *(_QWORD*)(v3 + 160);
    v17_.v17 = 0;
    v17_.v18 = 0;
    *(_QWORD*)(v3 + 152) = v5;
    *(_QWORD*)(v3 + 160) = v6;
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    v8 = v17_.v18;
    if (v17_.v18 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v17_.v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
    v9 = *(_QWORD*)(v3 + 160);
    v17_.v17 = *(_QWORD*)(v3 + 152);
    v17_.v18 = v9;
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dda0((_QWORD*)(v3 + 168), &v17_.v17);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
    else {
      ui_LayoutAccessor_Setup_155dda0((_QWORD*)(v3 + 168), &v17_.v17);
    }
    ui_LayoutAccessor_SetPriority(v3 + 168, 80);
    LayoutAccessor_155c910((_QWORD*)(v3 + 272), (__int64*)(v3 + 168));
    LayoutAccessor_155c910((_QWORD*)(v3 + 448), (__int64*)(v3 + 168));
    LayoutAccessor_155cda0(v3 + 448, "Wait", nullptr);
    v10 = v19_.v21;
    if (v19_.v21 != 0) {
      v11 = v19_.v22;
      if (v19_.v21 == v19_.v22) {
        goto LABEL_23;
      }
      v12 = v19_.v22;
      do {
        v13 = *(_BYTE*)(v12 - 24);
        v12 -= 24;
        if ((v13 & 1) != 0) {
          v14 = *(_QWORD*)(v11 - 8);
          if (v14 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
              v15 = 128;
            }
            else {
              v15 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v15, v14);
          }
        }
        v11 = v12;
      } while (v12 != v10);
      v19_.v22 = v10;
      v10 = v19_.v21;
      if (v19_.v21 != 0) {
      LABEL_23:
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v16, v10);
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
    result = ProcInst_657850(v3, (__int64)&GameData_21c67a8,
                             (__int64)"ProcFastForward", 0, v1);
    *(_DWORD*)(v3 + 624) = 1;
  }
  return result;
}

#pragma GCC visibility pop
