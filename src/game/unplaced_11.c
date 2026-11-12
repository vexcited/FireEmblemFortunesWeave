#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
_QWORD* TelopParts_17cdaa0(_QWORD* result, __int64*);
__attribute__((swiftcall)) void GameRoutine_622450(PSEUDO_X8, float32x4_t*,
                                                   float32x4_t*, int8x16_t*);
__attribute__((swiftcall)) void GameRoutine_622ac0(PSEUDO_X8, float32x2_t*);
__attribute__((swiftcall)) void GameRoutine_eb5ba0(PSEUDO_X8, int);
__attribute__((swiftcall)) void MapSimulator_102b410(PSEUDO_X8, __int64,
                                                     __n128 result);
__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void TransporterConst_89bd90(PSEUDO_X8, _QWORD,
                                                        _QWORD, _QWORD);
__attribute__((swiftcall)) void
game_108d130(PSEUDO_X8, __int64, char*, float32x4_t*, __int64*, long double);
__attribute__((swiftcall)) void game_f31080(PSEUDO_X8, __int64, unsigned int,
                                            float32x4_t*, __int128*);
__attribute__((swiftcall)) void game_hub_d6fba0(PSEUDO_X8, __int64, __int64,
                                                unsigned __int64, __int64);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64* CharacterModel_1070c00(__int64, __int64);
__int64* TelopParts_17cd840(__int64**, __int64*);
__int64* game_8224a0(unsigned __int8);
__int64 CharacterBuilder_1084780(_QWORD);
__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 CmdbtlCameraNatives_ed68d0();
__int64 CombatCamera_1097e40(__int64);
__int64 CombatCamera_1098000(__int64, unsigned int, char, long double);
__int64 Cursor_734a80(_QWORD, _QWORD);
__int64 GameRoutine_1096780(__int64, unsigned __int8*, char);
__int64 GameRoutine_109efe0(__int64);
__int64 GameRoutine_10f1120(__int64, char, __n128);
__int64 GameRoutine_10f9f00(__int64, __int64, long double);
__int64 GameRoutine_111d240(void);
__int64 GameRoutine_118e690();
__int64 GameRoutine_120ccf0(_QWORD, _QWORD);
__int64 GameRoutine_2b0();
__int64 GameRoutine_60a020(_QWORD);
__int64 GameRoutine_60a020_alt1(__int64, __int64) __asm__("GameRoutine_60a020");
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_89aac0(_QWORD, _QWORD);
__int64 GameRoutine_a7c540(__int64, __int64);
__int64 GameRoutine_bd3bc0(__int64, __int64*);
__int64 GameRoutine_eb6f10(_QWORD, _QWORD);
__int64 GameRoutine_f9cf10();
__int64 GameRoutine_f9d200();
__int64 GameRoutine_f9e050();
__int64 HubCharacterNatives_cabfc0(__int64 result, char);
__int64 HubTalkNatives_e14270(__int64, __int64);
__int64 HubUiNatives_10da250();
__int64 HubUiNatives_10db830();
__int64 Image_72a260(_QWORD);
__int64 Image_72b4a0(_QWORD);
__int64 Image_72b6c0(_QWORD);
__int64 LocatorModule_a7bee0(__int64, __int64);
__int64 Model_a661a0(__int64, int, __int64, int);
__int64 PhysicsObject_10f9fe0(__int64 result, _OWORD*, long double, long double,
                              long double, long double);
__int64 PhysicsObject_10fa1a0(__int64 result, _OWORD*, long double,
                              long double);
__int64 ProcCmdBtlSeqSupportAttack_f9d810();
__int64 ProcCmdBtlSeqSupportAttack_f9da60();
__int64 ProcCmdBtlSeqSupportAttack_f9dc40();
__int64 ProcCmdBtlSeqSupportAttack_f9ddf0();
__int64 ProcCmdBtlSeqSupportAttack_f9df80();
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ProcManager_659d40(__int64 result);
__int64 Registration_a4da40(_QWORD, _QWORD, long double);
__int64 ScheduleNatives_11c05d0();
__int64 ScheduleNatives_11c0b80();
__int64 Set();
__int64 TelopParts_17cbd60(__int64 result);
__int64 UnitActor_819f40(__int64);
__int64 UnitActor_81a540(__int64, int, __int64);
__int64 UnitActor_81ba20(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 cmdbtl_camera_StartSelfie();
__int64 cmdbtl_record_NewBtlInfoArts();
__int64 cmdbtl_record_NewViewerArts();
__int64 cmdbtl_record_PushViewerMotion();
__int64 event_Demo();
__int64 event_Dialog_118d790();
__int64 event_Dialog_118da50();
__int64 event_Dialog_118dd90();
__int64 event_Dialog_118e230();
__int64 event_Movie();
__int64 event_NoticeNewAction();
__int64 event_SideStoryReward();
__int64 event_StrapGuide();
__int64 event_Talk_118e9e0();
__int64 event_Talk_118ecb0();
__int64 event_Talk_118efc0();
__int64 event_Talk_118f300();
__int64 event_TelopJoin();
__int64 event_TelopMessage();
__int64 event_TelopMessagePosBottom();
__int64 event_TelopSkillAcquisition();
__int64 event_TelopWinLoseRule();
__int64 event_Tutorial();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_10f0680(__int64);
__int64 game_10f0920(__int64);
__int64 game_10f21c0(_BYTE*, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_HashString32(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_Unit_GetParam(__int64);
__int64 game_cmdbtl_anonymous_ProcCmdBtlSeqSupportAttack_CharaSetupPos();
__int64 game_f9ce00();
__int64 game_fbb5a0(__int64, __int128*, float);
__int64 game_script_GetGameVersion();
__int64 game_script_cmdbtl_camera_GetPitchDeg();
__int64 game_script_cmdbtl_camera_GetWorldPosition();
__int64 game_script_cmdbtl_camera_GetYawDeg();
__int64 game_script_cmdbtl_camera_QuakeFade();
__int64 game_script_cmdbtl_camera_QuakeLoopEnd();
__int64 game_script_cmdbtl_camera_QuakeLoopStart();
__int64 game_script_cmdbtl_camera_QuakeOnce();
__int64 game_script_cmdbtl_camera_QuakeStopAll();
__int64 game_script_cmdbtl_camera_StartEvent();
__int64 game_script_cmdbtl_camera_WaitTransition();
__int64 game_script_cmdbtl_record_NewBtlInfoAssist();
__int64 game_script_cmdbtl_record_NewBtlInfoAttack();
__int64 game_script_cmdbtl_record_NewViewerAssist();
__int64 game_script_cmdbtl_record_NewViewerAttack();
__int64 game_script_cmdbtl_record_SetSimplePower_ebdbb0();
__int64 game_script_cmdbtl_record_SetSimplePower_ebdc90();
__int64 game_script_config_GetAssistAnimeType();
__int64 game_script_config_GetBattleAnimeType();
__int64 game_script_data_GetFlagByKey();
__int64 game_script_data_GetPidByKey();
__int64 game_script_difficulty_GetDifficulty();
__int64 game_script_event_GetLatestChoiceMenuIndex();
__int64 game_script_event_TutorialNoticeTelop();
__int64 game_script_force_IsAllied();
__int64 game_script_gamemode_GetMode();
__int64 game_script_gameroute_GetRoute();
__int64 game_script_hero_GetPID();
__int64 game_script_hub_math_CornerAngleDegree();
__int64 game_script_hub_math_CornerAngleRadian();
__int64 game_script_hub_math_Lerp();
__int64 game_script_hub_math_Linearstep();
__int64 game_script_hub_math_MoveTowards();
__int64 game_script_hub_ui_GetMessageDirect();
__int64 game_script_hub_ui_GetTalkMainQuestResultWithReset();
__int64 game_script_hub_ui_GetTalkSideStoryResultWithReset();
__int64 game_script_hub_ui_HideAllOnPlayable();
__int64 game_script_hub_ui_SetBindHideAll();
__int64 game_script_hub_ui_SetBindHideCommon();
__int64 game_script_hub_ui_SetBindHideSchedule();
__int64 game_script_hub_ui_SetMsgArg_10dcc80();
__int64 game_script_hub_ui_SetMsgArg_10dcd60();
__int64 game_script_item_GetIID();
__int64 game_script_item_GetItemName();
__int64 game_script_item_GoldGain();
__int64 game_script_item_HasEquipSkill();
__int64 game_script_item_IsMagicAttack();
__int64 game_script_item_ItemChange();
__int64 game_script_person_GetName();
__int64 game_script_schedule_Progress();
__int64 game_script_schedule_ProgressWait();
__int64 game_script_situation_GetEnemyScore();
__int64 game_script_situation_GetPhase();
__int64 game_script_situation_GetPlayerScore();
__int64 game_script_situation_GetTurn();
__int64 game_script_situation_SetEnemyScore();
__int64 game_script_situation_SetPlayerScore();
__int64 game_script_situation_ShowScoreInfo();
__int64 game_script_situation_rule_SetLoseMID();
__int64 game_script_situation_rule_SetWinDestroyBoss();
__int64 game_script_situation_rule_SetWinEnemyNumLessThanOrEqualTo();
__int64 game_script_situation_rule_SetWinLimitTurn();
__int64 game_script_situation_rule_SetWinMID();
__int64 game_script_variable_Entry();
__int64 game_script_variable_Get();
__int64 game_zview_d12d30(__int64 result, int32x2_t*, char);
__int64 game_zview_d16b40(float, double, double, double, double, double,
                          long double, __int64, __int64, __int128*,
                          unsigned __int64*, __int64);
__int64 hub_math_EaseInOutRate();
__int64 hub_ui_ExDialog();
__int64 hub_ui_GainGoldFund();
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__int64 wld_Crc32_alt1(_QWORD, _QWORD, _QWORD) __asm__("wld_Crc32");
__n128 GameRoutine_109ded0(__int128*, int8x16_t*, __int64, long double,
                           long double, long double, long double, double);
__n128 GameRoutine_10db040(int);
__n128 GameRoutine_10db5c0(int);
__n128 GameRoutine_10dbe60(__int64);
__n128 GameRoutine_10dc380(char*);
__n128 GameRoutine_10dc600(_DWORD*, char*);
__n128 GameRoutine_10dc960(__int64);
__n128 GameRoutine_10dce60(__int64);
__n128 GameRoutine_a867a0(_QWORD*, __n128 result);
__n128 GameRoutine_a8c380(__int64, _QWORD*);
__n128 hub_ui_RunReminderTelop();
__n128 hub_ui_Tutorial(__int64);
__n128 hub_ui_TutorialForceShow(__int64);
__n128 nn_os_LockMutex_alt1(_QWORD) __asm__("nn_os_LockMutex");
__n128 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__n128 sprintf(_QWORD, const char*, ...);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
double cos(double);
double sin(double);
extern _DWORD* GameData_212d168;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN* GameData_212ceb8;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212ea08;
extern _UNKNOWN GameData_1a8a3b5;
extern _UNKNOWN GameData_1a94a43;
extern _UNKNOWN GameData_1ad7123;
extern _UNKNOWN GameData_1af5ec9;
extern _UNKNOWN GameData_1bb5f20;
extern _UNKNOWN GameData_1bb5f24;
extern _UNKNOWN GameData_1bb5f28;
extern _UNKNOWN GameData_1bb5f2c;
extern _UNKNOWN GameData_1bb5f30;
extern _UNKNOWN GameData_1bb5f34;
extern _UNKNOWN GameData_1bb5f38;
extern _UNKNOWN GameData_1bb5f3c;
extern _UNKNOWN GameData_1bb5f40;
extern _UNKNOWN GameData_1bb5f44;
extern _UNKNOWN GameData_1bb5f48;
extern _UNKNOWN GameData_1bb5f4c;
extern _UNKNOWN GameData_1bb5f50;
extern _UNKNOWN GameData_1bb5f54;
extern _UNKNOWN GameData_1bb5f58;
extern _UNKNOWN GameData_1bb5f5c;
extern _UNKNOWN GameData_1bb5f60;
extern _UNKNOWN GameData_1bb5f64;
extern _UNKNOWN GameData_1bb5f68;
extern _UNKNOWN GameData_1bb5f6c;
extern _UNKNOWN GameData_1bb5f70;
extern _UNKNOWN GameData_1bb5f74;
extern _UNKNOWN GameData_1bb5f78;
extern _UNKNOWN GameData_1bb5f7c;
extern _UNKNOWN GameData_1bb5f80;
extern _UNKNOWN GameData_1bb5f84;
extern _UNKNOWN GameData_1bb5f88;
extern _UNKNOWN GameData_1bb5f8c;
extern _UNKNOWN GameData_21a55c0;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a61b0;
extern _UNKNOWN GameData_2229a40;
extern _UNKNOWN GameData_2236788;
extern _UNKNOWN GameData_223da48;
extern _UNKNOWN GameData_2258e00;
extern _UNKNOWN GameData_2258e30;
extern _UNKNOWN GameData_2258e60;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82a80;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a82ee0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83100;
extern __int128 GameData_1a83570;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a61a0;
extern __int64 (*GameData_2014940[])();
extern __int64 (*GameData_20149d8[])();
extern __int64 (*GameData_201fa48[])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d060[8])();
extern __int64 (*anonymous_MotionProc_vtable[])();
extern __int64 (*game_80a790_ptr[10])();
extern __int64 (*game_character_GrassInteractionModule_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqSupportAttack_vtable[])();
extern __int64* GameData_212bf18[9];
extern __int64* GameData_212bf40[4];
extern __int64* GameData_212bf48[3];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d458[7];
extern __int64* GameData_212e348;
extern __int64* GameData_212ea58;
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ebd0[3];
extern __int64* GameData_212eda8[10];
extern __int64* GameData_212ee68[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_2130f48;
extern __int64 GameData_2131678;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99d0;
extern __int64 GameData_21c99d8;
extern __int64 GameData_21c9f40;
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_220f8c8;
extern __int64 GameData_221d580;
extern __int64 GameData_221d588;
extern __int64 GameData_221d590;
extern __int64 GameData_221d598;
extern __int64 GameData_221d5a0;
extern __int64 GameData_221d5a8;
extern __int64 GameData_221d5c0;
extern __int64 GameData_221d5c8;
extern __int64 GameData_221d5d0;
extern __int64 GameData_221d5d8;
extern __int64 GameData_221d5e0;
extern __int64 GameData_221d5e8;
extern __int64 GameData_221d600;
extern __int64 GameData_221d608;
extern __int64 GameData_221d610;
extern __int64 GameData_221d618;
extern __int64 GameData_221d620;
extern __int64 GameData_221d628;
extern __int64 GameData_221d640;
extern __int64 GameData_221d648;
extern __int64 GameData_221d650;
extern __int64 GameData_221d658;
extern __int64 GameData_221d660;
extern __int64 GameData_221d668;
extern __int64 GameData_221d680;
extern __int64 GameData_221d688;
extern __int64 GameData_221d690;
extern __int64 GameData_221d698;
extern __int64 GameData_221d6a0;
extern __int64 GameData_221d6a8;
extern __int64 GameData_221d6c0;
extern __int64 GameData_221d6c8;
extern __int64 GameData_221d6d0;
extern __int64 GameData_221d6d8;
extern __int64 GameData_221d6e0;
extern __int64 GameData_221d6e8;
extern __int64 GameData_221d700;
extern __int64 GameData_221d708;
extern __int64 GameData_221d710;
extern __int64 GameData_221d718;
extern __int64 GameData_221d720;
extern __int64 GameData_221d728;
extern __int64 GameData_221d740;
extern __int64 GameData_221d748;
extern __int64 GameData_221d750;
extern __int64 GameData_221d758;
extern __int64 GameData_221d760;
extern __int64 GameData_221d768;
extern __int64 GameData_221d780;
extern __int64 GameData_221d788;
extern __int64 GameData_221d790;
extern __int64 GameData_221d798;
extern __int64 GameData_221d7a0;
extern __int64 GameData_221d7a8;
extern __int64 GameData_221d7c0;
extern __int64 GameData_221d7c8;
extern __int64 GameData_221f310;
extern __int64 GameData_221f318;
extern __int64 GameData_221f320;
extern __int64 GameData_221f328;
extern __int64 GameData_221f330;
extern __int64 GameData_221f338;
extern __int64 GameData_221f350;
extern __int64 GameData_221f358;
extern __int64 GameData_221f360;
extern __int64 GameData_221f368;
extern __int64 GameData_221f370;
extern __int64 GameData_221f378;
extern __int64 GameData_221f390;
extern __int64 GameData_221f398;
extern __int64 GameData_221f3a0;
extern __int64 GameData_221f3a8;
extern __int64 GameData_221f3b0;
extern __int64 GameData_221f3b8;
extern __int64 GameData_221f3d0;
extern __int64 GameData_221f3d8;
extern __int64 GameData_221f3e0;
extern __int64 GameData_221f3e8;
extern __int64 GameData_221f3f0;
extern __int64 GameData_221f3f8;
extern __int64 GameData_221f410;
extern __int64 GameData_221f418;
extern __int64 GameData_221f420;
extern __int64 GameData_221f428;
extern __int64 GameData_221f430;
extern __int64 GameData_221f438;
extern __int64 GameData_221f450;
extern __int64 GameData_221f458;
extern __int64 GameData_221f460;
extern __int64 GameData_221f468;
extern __int64 GameData_221f470;
extern __int64 GameData_221f478;
extern __int64 GameData_221f490;
extern __int64 GameData_221f498;
extern __int64 GameData_221f4a0;
extern __int64 GameData_221f4a8;
extern __int64 GameData_221f4b0;
extern __int64 GameData_221f4b8;
extern __int64 GameData_221f4d0;
extern __int64 GameData_221f4d8;
extern __int64 GameData_221f4e0;
extern __int64 GameData_221f4e8;
extern __int64 GameData_221f4f0;
extern __int64 GameData_221f4f8;
extern __int64 GameData_221f510;
extern __int64 GameData_221f518;
extern __int64 GameData_221f520;
extern __int64 GameData_221f528;
extern __int64 GameData_221f530;
extern __int64 GameData_221f538;
extern __int64 GameData_221f550;
extern __int64 GameData_221f558;
extern __int64 GameData_221f560;
extern __int64 GameData_221f568;
extern __int64 GameData_221f570;
extern __int64 GameData_221f578;
extern __int64 GameData_221f590;
extern __int64 GameData_221f598;
extern __int64 GameData_221f5a0;
extern __int64 GameData_221f5a8;
extern __int64 GameData_221f5b0;
extern __int64 GameData_221f5b8;
extern __int64 GameData_221f5d0;
extern __int64 GameData_221f5d8;
extern __int64 GameData_221f5e0;
extern __int64 GameData_221f5e8;
extern __int64 GameData_221f5f0;
extern __int64 GameData_221f5f8;
extern __int64 GameData_221f610;
extern __int64 GameData_221f618;
extern __int64 GameData_221f620;
extern __int64 GameData_221f628;
extern __int64 GameData_221f630;
extern __int64 GameData_221f638;
extern __int64 GameData_221f650;
extern __int64 GameData_221f658;
extern __int64 GameData_221f660;
extern __int64 GameData_221f668;
extern __int64 GameData_221f670;
extern __int64 GameData_221f678;
extern __int64 GameData_221f690;
extern __int64 GameData_221f698;
extern __int64 GameData_22293c8;
extern __int64 GameData_22293d0;
extern __int64 GameData_22293d8;
extern __int64 GameData_22293e8;
extern __int64 GameData_22293f8;
extern __int64 GameData_2229408;
extern __int64 GameData_2229410;
extern __int64 GameData_2229418;
extern __int64 GameData_2229428;
extern __int64 GameData_2229438;
extern __int64 GameData_2229448;
extern __int64 GameData_2229450;
extern __int64 GameData_2229458;
extern __int64 GameData_2229468;
extern __int64 GameData_2229478;
extern __int64 GameData_2229488;
extern __int64 GameData_2229490;
extern __int64 GameData_2229498;
extern __int64 GameData_22294a8;
extern __int64 GameData_22294b8;
extern __int64 GameData_22294c8;
extern __int64 GameData_22294d0;
extern __int64 GameData_22294d8;
extern __int64 GameData_22294e8;
extern __int64 GameData_22294f8;
extern __int64 GameData_2229508;
extern __int64 GameData_2229510;
extern __int64 GameData_2229518;
extern __int64 GameData_2229528;
extern __int64 GameData_2229538;
extern __int64 GameData_2229548;
extern __int64 GameData_2229550;
extern __int64 GameData_2229558;
extern __int64 GameData_2229568;
extern __int64 GameData_2229578;
extern __int64 GameData_2229588;
extern __int64 GameData_2229590;
extern __int64 GameData_2229598;
extern __int64 GameData_22295a8;
extern __int64 GameData_22295b8;
extern __int64 GameData_22295c8;
extern __int64 GameData_22295d0;
extern __int64 GameData_22295d8;
extern __int64 GameData_22295e8;
extern __int64 GameData_22295f8;
extern __int64 GameData_2229608;
extern __int64 GameData_2229610;
extern __int64 GameData_2229628;
extern __int64 GameData_2229638;
extern __int64 GameData_2229648;
extern __int64 GameData_2229650;
extern __int64 GameData_2229668;
extern __int64 GameData_2229678;
extern __int64 GameData_2229688;
extern __int64 GameData_2229690;
extern __int64 GameData_2229698;
extern __int64 GameData_22296a8;
extern __int64 GameData_22296b8;
extern __int64 GameData_22296c8;
extern __int64 GameData_22296d0;
extern __int64 GameData_22296d8;
extern __int64 GameData_22296e8;
extern __int64 GameData_22296f8;
extern __int64 GameData_2229708;
extern __int64 GameData_2229710;
extern __int64 GameData_2229718;
extern __int64 GameData_2229728;
extern __int64 GameData_2229738;
extern __int64 GameData_2229748;
extern __int64 GameData_2229750;
extern __int64 GameData_2229758;
extern __int64 GameData_2229768;
extern __int64 GameData_2229778;
extern __int64 GameData_2229788;
extern __int64 GameData_2229790;
extern __int64 GameData_2229798;
extern __int64 GameData_22297a8;
extern __int64 GameData_22297b8;
extern __int64 GameData_22297c8;
extern __int64 GameData_22297d0;
extern __int64 GameData_22297d8;
extern __int64 GameData_22297e8;
extern __int64 GameData_22297f8;
extern __int64 GameData_2229808;
extern __int64 GameData_2229810;
extern __int64 GameData_2229818;
extern __int64 GameData_2229828;
extern __int64 GameData_2229838;
extern __int64 GameData_2229848;
extern __int64 GameData_2229850;
extern __int64 GameData_2229858;
extern __int64 GameData_2229868;
extern __int64 GameData_2229878;
extern __int64 GameData_2229888;
extern __int64 GameData_2229890;
extern __int64 GameData_2229898;
extern __int64 GameData_22298a8;
extern __int64 GameData_22298b8;
extern __int64 GameData_22298c8;
extern __int64 GameData_22298d0;
extern __int64 GameData_22298e8;
extern __int64 GameData_22298f8;
extern __int64 GameData_2229908;
extern __int64 GameData_2229910;
extern __int64 GameData_2229918;
extern __int64 GameData_2229928;
extern __int64 GameData_2229938;
extern __int64 GameData_2229948;
extern __int64 GameData_2229950;
extern __int64 GameData_2229958;
extern __int64 GameData_2229968;
extern __int64 GameData_2229978;
extern __int64 GameData_2229988;
extern __int64 GameData_2229990;
extern __int64 GameData_2229998;
extern __int64 GameData_22299a8;
extern __int64 GameData_22299b8;
extern __int64 GameData_22299c8;
extern __int64 GameData_22299d0;
extern __int64 GameData_22299d8;
extern __int64 GameData_22299e8;
extern __int64 GameData_22299f8;
extern __int64 GameData_2229a08;
extern __int64 GameData_2229a10;
extern __int64 GameData_2229a18;
extern __int64 GameData_2229a28;
extern __int64 GameData_2229a38;
extern __int64 GameData_2231e60;
extern __int64 GameData_2231e68;
extern __int64 GameData_2231e70;
extern __int64 GameData_2231e78;
extern __int64 GameData_2231e80;
extern __int64 GameData_2231e88;
extern __int64 GameData_2231ea0;
extern __int64 GameData_2231ea8;
extern __int64 GameData_2231eb0;
extern __int64 GameData_2231eb8;
extern __int64 GameData_2231ec0;
extern __int64 GameData_2231ec8;
extern __int64 GameData_2231ee0;
extern __int64 GameData_2231ee8;
extern __int64 GameData_2231ef0;
extern __int64 GameData_2231ef8;
extern __int64 GameData_2231f00;
extern __int64 GameData_2231f08;
extern __int64 GameData_2231f20;
extern __int64 GameData_2231f28;
extern __int64 GameData_2231f30;
extern __int64 GameData_2231f38;
extern __int64 GameData_2231f40;
extern __int64 GameData_2231f48;
extern __int64 GameData_2231f60;
extern __int64 GameData_2231f68;
extern __int64 GameData_2231f70;
extern __int64 GameData_2231f78;
extern __int64 GameData_2231f80;
extern __int64 GameData_2231f88;
extern __int64 GameData_2231fa0;
extern __int64 GameData_2231fa8;
extern __int64 GameData_2231fb0;
extern __int64 GameData_2231fb8;
extern __int64 GameData_2231fc0;
extern __int64 GameData_2231fc8;
extern __int64 GameData_2231fe0;
extern __int64 GameData_2231fe8;
extern __int64 GameData_2233708;
extern __int64 GameData_2233710;
extern __int64 GameData_2233718;
extern __int64 GameData_2233720;
extern __int64 GameData_2233728;
extern __int64 GameData_2233730;
extern __int64 GameData_2235e30;
extern __int64 GameData_2235ec0;
extern __int64 GameData_2235ec8;
extern __int64 GameData_2235ed0;
extern __int64 GameData_2235ed8;
extern __int64 GameData_2235ee0;
extern __int64 GameData_2235ee8;
extern __int64 GameData_2235f00;
extern __int64 GameData_2235f08;
extern __int64 GameData_2235f10;
extern __int64 GameData_2235f18;
extern __int64 GameData_2235f20;
extern __int64 GameData_2235f28;
extern __int64 GameData_2235f40;
extern __int64 GameData_2235f48;
extern __int64 GameData_2235f50;
extern __int64 GameData_2235f58;
extern __int64 GameData_2235f60;
extern __int64 GameData_2235f68;
extern __int64 GameData_2235f80;
extern __int64 GameData_2235f88;
extern __int64 GameData_2235f90;
extern __int64 GameData_2235f98;
extern __int64 GameData_2235fa0;
extern __int64 GameData_2235fa8;
extern __int64 GameData_2235fc0;
extern __int64 GameData_2235fc8;
extern __int64 GameData_2235fd0;
extern __int64 GameData_2235fd8;
extern __int64 GameData_2235fe0;
extern __int64 GameData_2235fe8;
extern __int64 GameData_2236000;
extern __int64 GameData_2236008;
extern __int64 GameData_2236010;
extern __int64 GameData_2236018;
extern __int64 GameData_2236020;
extern __int64 GameData_2236028;
extern __int64 GameData_2236040;
extern __int64 GameData_2236048;
extern __int64 GameData_2236050;
extern __int64 GameData_2236058;
extern __int64 GameData_2236060;
extern __int64 GameData_2236068;
extern __int64 GameData_2236080;
extern __int64 GameData_2236088;
extern __int64 GameData_2236090;
extern __int64 GameData_2236098;
extern __int64 GameData_22360a0;
extern __int64 GameData_22360a8;
extern __int64 GameData_22360c0;
extern __int64 GameData_22360c8;
extern __int64 GameData_22360d0;
extern __int64 GameData_22360d8;
extern __int64 GameData_22360e0;
extern __int64 GameData_22360e8;
extern __int64 GameData_2236100;
extern __int64 GameData_2236108;
extern __int64 GameData_2236110;
extern __int64 GameData_2236118;
extern __int64 GameData_2236120;
extern __int64 GameData_2236128;
extern __int64 GameData_2236140;
extern __int64 GameData_2236148;
extern __int64 GameData_2236150;
extern __int64 GameData_2236158;
extern __int64 GameData_2236160;
extern __int64 GameData_2236168;
extern __int64 GameData_2236180;
extern __int64 GameData_2236188;
extern __int64 GameData_2236190;
extern __int64 GameData_2236198;
extern __int64 GameData_22361a0;
extern __int64 GameData_22361a8;
extern __int64 GameData_22361c0;
extern __int64 GameData_22361c8;
extern __int64 GameData_22361d0;
extern __int64 GameData_22361d8;
extern __int64 GameData_22361e0;
extern __int64 GameData_22361e8;
extern __int64 GameData_2236200;
extern __int64 GameData_2236208;
extern __int64 GameData_2236210;
extern __int64 GameData_2236218;
extern __int64 GameData_2236220;
extern __int64 GameData_2236228;
extern __int64 GameData_2236240;
extern __int64 GameData_2236248;
extern __int64 GameData_2236250;
extern __int64 GameData_2236258;
extern __int64 GameData_2236260;
extern __int64 GameData_2236268;
extern __int64 GameData_2236280;
extern __int64 GameData_2236288;
extern __int64 GameData_2236290;
extern __int64 GameData_2236298;
extern __int64 GameData_22362a0;
extern __int64 GameData_22362a8;
extern __int64 GameData_22362c0;
extern __int64 GameData_22362c8;
extern __int64 GameData_22362d0;
extern __int64 GameData_22362d8;
extern __int64 GameData_22362e0;
extern __int64 GameData_22362e8;
extern __int64 GameData_2236300;
extern __int64 GameData_2236308;
extern __int64 GameData_2236310;
extern __int64 GameData_2236318;
extern __int64 GameData_2236320;
extern __int64 GameData_2236328;
extern __int64 GameData_2236340;
extern __int64 GameData_2236348;
extern __int64 GameData_2236350;
extern __int64 GameData_2236358;
extern __int64 GameData_2236360;
extern __int64 GameData_2236368;
extern __int64 GameData_2236380;
extern __int64 GameData_2236388;
extern __int64 GameData_2236390;
extern __int64 GameData_2236398;
extern __int64 GameData_22363a0;
extern __int64 GameData_22363a8;
extern __int64 GameData_22363c0;
extern __int64 GameData_22363c8;
extern __int64 GameData_22363d0;
extern __int64 GameData_22363d8;
extern __int64 GameData_22363e0;
extern __int64 GameData_22363e8;
extern __int64 GameData_2236400;
extern __int64 GameData_2236408;
extern __int64 GameData_2236410;
extern __int64 GameData_2236418;
extern __int64 GameData_2236420;
extern __int64 GameData_2236428;
extern __int64 GameData_2236440;
extern __int64 GameData_2236448;
extern __int64 GameData_2236450;
extern __int64 GameData_2236458;
extern __int64 GameData_2236460;
extern __int64 GameData_2236468;
extern __int64 GameData_2236480;
extern __int64 GameData_2236488;
extern __int64 GameData_2236490;
extern __int64 GameData_2236498;
extern __int64 GameData_22364a0;
extern __int64 GameData_22364a8;
extern __int64 GameData_22364c0;
extern __int64 GameData_22364c8;
extern __int64 GameData_22364d0;
extern __int64 GameData_22364d8;
extern __int64 GameData_22364e0;
extern __int64 GameData_22364e8;
extern __int64 GameData_2236500;
extern __int64 GameData_2236508;
extern __int64 GameData_22367d8;
extern __int64 GameData_22367e0;
extern __int64 GameData_22367e8;
extern __int64 GameData_2236808;
extern __int64 GameData_2236810;
extern __int64 GameData_2236818;
extern __int64 GameData_2236820;
extern __int64 GameData_2236828;
extern __int64 GameData_2236830;
extern __int64 GameData_2236838;
extern __int64 GameData_2236840;
extern __int64 GameData_2236848;
extern __int64 GameData_2236858;
extern __int64 GameData_2236860;
extern __int64 GameData_223d9d0;
extern __int64 GameData_223d9d8;
extern __int64 GameData_223d9e0;
extern __int64 GameData_223d9f0;
extern __int64 GameData_223da00;
extern __int64 GameData_223da10;
extern __int64 GameData_223da18;
extern __int64 GameData_223da20;
extern __int64 GameData_223da30;
extern __int64 GameData_223da40;
extern __int64 GameData_223dad8;
extern __int64 GameData_223dae0;
extern __int64 GameData_223dae8;
extern __int64 GameData_223daf0;
extern __int64 GameData_223daf8;
extern __int64 GameData_223db00;
extern __int64 GameData_223db18;
extern __int64 GameData_223db20;
extern __int64 GameData_223db28;
extern __int64 GameData_223db30;
extern __int64 GameData_223db38;
extern __int64 GameData_223db40;
extern __int64 GameData_223db58;
extern __int64 GameData_223db60;
extern __int64 GameData_223db68;
extern __int64 GameData_223db70;
extern __int64 GameData_223db78;
extern __int64 GameData_223db80;
extern __int64 GameData_223db98;
extern __int64 GameData_223dba0;
extern __int64 GameData_223dba8;
extern __int64 GameData_223dbb0;
extern __int64 GameData_223dbb8;
extern __int64 GameData_223dbc0;
extern __int64 GameData_223dbd8;
extern __int64 GameData_223dbe0;
extern __int64 GameData_223dbe8;
extern __int64 GameData_223dbf0;
extern __int64 GameData_223dbf8;
extern __int64 GameData_223dc00;
extern __int64 GameData_223dc18;
extern __int64 GameData_223dc20;
extern __int64 GameData_223dc28;
extern __int64 GameData_223dc30;
extern __int64 GameData_223dc38;
extern __int64 GameData_223dc40;
extern __int64 GameData_223dc58;
extern __int64 GameData_223dc60;
extern __int64 GameData_223dc68;
extern __int64 GameData_223dc70;
extern __int64 GameData_223dc78;
extern __int64 GameData_223dc80;
extern __int64 GameData_223dc98;
extern __int64 GameData_223dca0;
extern __int64 GameData_223dca8;
extern __int64 GameData_223dcb0;
extern __int64 GameData_223dcb8;
extern __int64 GameData_223dcc0;
extern __int64 GameData_223dcd8;
extern __int64 GameData_223dce0;
extern __int64 GameData_223dce8;
extern __int64 GameData_223dcf0;
extern __int64 GameData_223dcf8;
extern __int64 GameData_223dd00;
extern __int64 GameData_223dd18;
extern __int64 GameData_223dd20;
extern __int64 GameData_223dd28;
extern __int64 GameData_223dd30;
extern __int64 GameData_223dd38;
extern __int64 GameData_223dd40;
extern __int64 GameData_223dd58;
extern __int64 GameData_223dd60;
extern __int64 GameData_223dd68;
extern __int64 GameData_223dd70;
extern __int64 GameData_223dd78;
extern __int64 GameData_223dd80;
extern __int64 GameData_223dd98;
extern __int64 GameData_223dda0;
extern __int64 GameData_223dda8;
extern __int64 GameData_223ddb0;
extern __int64 GameData_223ddb8;
extern __int64 GameData_223ddc0;
extern __int64 GameData_223ddd8;
extern __int64 GameData_223dde0;
extern __int64 GameData_223dde8;
extern __int64 GameData_223ddf0;
extern __int64 GameData_223ddf8;
extern __int64 GameData_223de00;
extern __int64 GameData_223de18;
extern __int64 GameData_223de20;
extern __int64 GameData_223de28;
extern __int64 GameData_223de30;
extern __int64 GameData_223de38;
extern __int64 GameData_223de40;
extern __int64 GameData_223de58;
extern __int64 GameData_223de60;
extern __int64 GameData_223de68;
extern __int64 GameData_223de70;
extern __int64 GameData_223de78;
extern __int64 GameData_223de80;
extern __int64 GameData_223de98;
extern __int64 GameData_223dea0;
extern __int64 GameData_223dea8;
extern __int64 GameData_223deb0;
extern __int64 GameData_223deb8;
extern __int64 GameData_223dec0;
extern __int64 GameData_223ded8;
extern __int64 GameData_223dee0;
extern __int64 GameData_223dee8;
extern __int64 GameData_223def0;
extern __int64 GameData_223def8;
extern __int64 GameData_223df00;
extern __int64 GameData_223df18;
extern __int64 GameData_223df20;
extern __int64 GameData_223df28;
extern __int64 GameData_223df30;
extern __int64 GameData_223df38;
extern __int64 GameData_223df40;
extern __int64 GameData_223df58;
extern __int64 GameData_223df60;
extern __int64 GameData_223df68;
extern __int64 GameData_223df70;
extern __int64 GameData_223df78;
extern __int64 GameData_223df80;
extern __int64 GameData_223df98;
extern __int64 GameData_223dfa0;
extern __int64 GameData_223dfa8;
extern __int64 GameData_223dfb0;
extern __int64 GameData_223dfb8;
extern __int64 GameData_223dfc0;
extern __int64 GameData_223dfd8;
extern __int64 GameData_223dfe0;
extern __int64 GameData_223dfe8;
extern __int64 GameData_223dff0;
extern __int64 GameData_223dff8;
extern __int64 GameData_223e000;
extern __int64 GameData_223e018;
extern __int64 GameData_223e020;
extern __int64 GameData_223e028;
extern __int64 GameData_223e030;
extern __int64 GameData_223e038;
extern __int64 GameData_223e040;
extern __int64 GameData_223e058;
extern __int64 GameData_223e060;
extern __int64 GameData_223f3b8;
extern __int64 GameData_223f3c0;
extern __int64 GameData_223f3c8;
extern __int64 GameData_223f3d0;
extern __int64 GameData_223f3d8;
extern __int64 GameData_223f3e0;
extern __int64 GameData_223f3f8;
extern __int64 GameData_223f400;
extern __int64 GameData_223f408;
extern __int64 GameData_223f410;
extern __int64 GameData_223f418;
extern __int64 GameData_223f420;
extern __int64 GameData_223f428;
extern __int64 GameData_223f430;
extern __int64 GameData_223f438;
extern __int64 GameData_223f440;
extern __int64 GameData_223f448;
extern __int64 GameData_223f450;
extern __int64 GameData_223f458;
extern __int64 GameData_223f460;
extern __int64 GameData_223f468;
extern __int64 GameData_223f470;
extern __int64 GameData_223f478;
extern __int64 GameData_223f480;
extern __int64 GameData_223f498;
extern __int64 GameData_223f4a0;
extern __int64 GameData_223f4a8;
extern __int64 GameData_223f4b0;
extern __int64 GameData_223f4b8;
extern __int64 GameData_223f4c0;
extern __int64 GameData_223f4c8;
extern __int64 GameData_223f4d0;
extern __int64 GameData_223f4d8;
extern __int64 GameData_223f4e0;
extern __int64 GameData_223f4e8;
extern __int64 GameData_223f4f0;
extern __int64 GameData_223f4f8;
extern __int64 GameData_223f500;
extern __int64 GameData_223f518;
extern __int64 GameData_223f520;
extern __int64 GameData_223f528;
extern __int64 GameData_223f530;
extern __int64 GameData_223f538;
extern __int64 GameData_223f540;
extern __int64 GameData_223f548;
extern __int64 GameData_223f550;
extern __int64 GameData_223f558;
extern __int64 GameData_223f560;
extern __int64 GameData_223f568;
extern __int64 GameData_223f570;
extern __int64 GameData_223f578;
extern __int64 GameData_223f580;
extern __int64 GameData_223f588;
extern __int64 GameData_223f590;
extern __int64 GameData_223f598;
extern __int64 GameData_223f5a0;
extern __int64 GameData_223f5a8;
extern __int64 GameData_223f5b0;
extern __int64 GameData_223f5b8;
extern __int64 GameData_223f5c0;
extern __int64 GameData_223f5c8;
extern __int64 GameData_223f5d0;
extern __int64 GameData_223f5d8;
extern __int64 GameData_223f5e0;
extern __int64 GameData_223f5e8;
extern __int64 GameData_223f5f0;
extern __int64 GameData_223f5f8;
extern __int64 GameData_223f600;
extern __int64 GameData_223f608;
extern __int64 GameData_223f610;
extern __int64 GameData_223f618;
extern __int64 GameData_223f620;
extern __int64 GameData_223f628;
extern __int64 GameData_223f630;
extern __int64 GameData_223f638;
extern __int64 GameData_223f640;
extern __int64 GameData_223f648;
extern __int64 GameData_223f650;
extern __int64 GameData_223f658;
extern __int64 GameData_223f660;
extern __int64 GameData_223f668;
extern __int64 GameData_223f670;
extern __int64 GameData_223f678;
extern __int64 GameData_223f680;
extern __int64 GameData_223f698;
extern __int64 GameData_223f6a0;
extern __int64 GameData_223f6a8;
extern __int64 GameData_223f6b0;
extern __int64 GameData_223f6b8;
extern __int64 GameData_223f6c0;
extern __int64 GameData_223f6d8;
extern __int64 GameData_223f6e0;
extern __int64 GameData_223f6e8;
extern __int64 GameData_223f6f0;
extern __int64 GameData_223f6f8;
extern __int64 GameData_223f700;
extern __int64 GameData_223f718;
extern __int64 GameData_223f720;
extern __int64 GameData_223f728;
extern __int64 GameData_223f730;
extern __int64 GameData_223f738;
extern __int64 GameData_223f740;
extern __int64 GameData_223f758;
extern __int64 GameData_223f760;
extern __int64 GameData_223f768;
extern __int64 GameData_223f770;
extern __int64 GameData_223f778;
extern __int64 GameData_223f780;
extern __int64 GameData_223f798;
extern __int64 GameData_223f7a0;
extern __int64 GameData_223f7a8;
extern __int64 GameData_223f7b0;
extern __int64 GameData_223f7b8;
extern __int64 GameData_223f7c0;
extern __int64 GameData_223f7d8;
extern __int64 GameData_223f7e0;
extern __int64 GameData_223f7e8;
extern __int64 GameData_223f7f0;
extern __int64 GameData_223f7f8;
extern __int64 GameData_223f800;
extern __int64 GameData_223f818;
extern __int64 GameData_223f820;
extern __int64 GameData_223f828;
extern __int64 GameData_223f830;
extern __int64 GameData_223f838;
extern __int64 GameData_223f840;
extern __int64 GameData_223f858;
extern __int64 GameData_223f860;
extern __int64 GameData_223f868;
extern __int64 GameData_223f870;
extern __int64 GameData_223f878;
extern __int64 GameData_223f880;
extern __int64 GameData_223f898;
extern __int64 GameData_223f8a0;
extern __int64 GameData_223f8a8;
extern __int64 GameData_223f8b0;
extern __int64 GameData_223f8b8;
extern __int64 GameData_223f8c0;
extern __int64 GameData_223f8d8;
extern __int64 GameData_223f8e0;
extern __int64 GameData_223f8e8;
extern __int64 GameData_223f8f0;
extern __int64 GameData_223f8f8;
extern __int64 GameData_223f900;
extern __int64 GameData_223f918;
extern __int64 GameData_223f920;
extern __int64 GameData_223f928;
extern __int64 GameData_223f930;
extern __int64 GameData_223f938;
extern __int64 GameData_223f940;
extern __int64 GameData_223f958;
extern __int64 GameData_223f960;
extern __int64 GameData_223f968;
extern __int64 GameData_223f970;
extern __int64 GameData_223f978;
extern __int64 GameData_223f980;
extern __int64 GameData_223f998;
extern __int64 GameData_223f9a0;
extern __int64 GameData_223f9a8;
extern __int64 GameData_223f9b0;
extern __int64 GameData_223f9b8;
extern __int64 GameData_223f9c0;
extern __int64 GameData_223f9d8;
extern __int64 GameData_223f9e0;
extern __int64 GameData_223f9e8;
extern __int64 GameData_223f9f0;
extern __int64 GameData_223f9f8;
extern __int64 GameData_223fa00;
extern __int64 GameData_223fa18;
extern __int64 GameData_223fa20;
extern __int64 GameData_223fa28;
extern __int64 GameData_223fa30;
extern __int64 GameData_223fa38;
extern __int64 GameData_223fa40;
extern __int64 GameData_223fa58;
extern __int64 GameData_223fa60;
extern __int64 GameData_223fa68;
extern __int64 GameData_223fa70;
extern __int64 GameData_223fa78;
extern __int64 GameData_223fa80;
extern __int64 GameData_223fa98;
extern __int64 GameData_223faa0;
extern __int64 GameData_223faa8;
extern __int64 GameData_223fab0;
extern __int64 GameData_223fab8;
extern __int64 GameData_223fac0;
extern __int64 GameData_223fad8;
extern __int64 GameData_223fae0;
extern __int64 GameData_223fae8;
extern __int64 GameData_223faf0;
extern __int64 GameData_223faf8;
extern __int64 GameData_223fb00;
extern __int64 GameData_223fb18;
extern __int64 GameData_223fb20;
extern __int64 GameData_223fb28;
extern __int64 GameData_223fb30;
extern __int64 GameData_223fb38;
extern __int64 GameData_223fb40;
extern __int64 GameData_223fb58;
extern __int64 GameData_223fb60;
extern __int64 GameData_223fb68;
extern __int64 GameData_223fb70;
extern __int64 GameData_223fb78;
extern __int64 GameData_223fb80;
extern __int64 GameData_223fb98;
extern __int64 GameData_223fba0;
extern __int64 GameData_223fba8;
extern __int64 GameData_223fbb0;
extern __int64 GameData_223fbb8;
extern __int64 GameData_223fbc0;
extern __int64 GameData_223fbd8;
extern __int64 GameData_223fbe0;
extern __int64 GameData_223fbe8;
extern __int64 GameData_223fbf0;
extern __int64 GameData_223fbf8;
extern __int64 GameData_223fc00;
extern __int64 GameData_223fc18;
extern __int64 GameData_223fc20;
extern __int64 GameData_223fc28;
extern __int64 GameData_223fc30;
extern __int64 GameData_223fc38;
extern __int64 GameData_223fc40;
extern __int64 GameData_223fc58;
extern __int64 GameData_223fc60;
extern __int64 GameData_223fc68;
extern __int64 GameData_223fc70;
extern __int64 GameData_223fc78;
extern __int64 GameData_223fc80;
extern __int64 GameData_223fc98;
extern __int64 GameData_223fca0;
extern __int64 GameData_223fca8;
extern __int64 GameData_223fcb0;
extern __int64 GameData_223fcb8;
extern __int64 GameData_223fcc0;
extern __int64 GameData_223fcd8;
extern __int64 GameData_223fce0;
extern __int64 GameData_223fce8;
extern __int64 GameData_223fcf0;
extern __int64 GameData_223fcf8;
extern __int64 GameData_223fd00;
extern __int64 GameData_223fd08;
extern __int64 GameData_223fd10;
extern __int64 GameData_223fd18;
extern __int64 GameData_223fd20;
extern __int64 GameData_223fd28;
extern __int64 GameData_223fd30;
extern __int64 GameData_223fd38;
extern __int64 GameData_223fd40;
extern __int64 GameData_223fd48;
extern __int64 GameData_223fd50;
extern __int64 GameData_223fd58;
extern __int64 GameData_223fd60;
extern __int64 GameData_223fd68;
extern __int64 GameData_223fd70;
extern __int64 GameData_223fd78;
extern __int64 GameData_223fd80;
extern __int64 GameData_223fd88;
extern __int64 GameData_223fd90;
extern __int64 GameData_223fd98;
extern __int64 GameData_223fda0;
extern __int64 GameData_223fda8;
extern __int64 GameData_223fdb0;
extern __int64 GameData_223fdb8;
extern __int64 GameData_223fdc0;
extern __int64 GameData_223fdc8;
extern __int64 GameData_223fdd0;
extern __int64 GameData_223fdd8;
extern __int64 GameData_223fde0;
extern __int64 GameData_223fde8;
extern __int64 GameData_223fdf0;
extern __int64 GameData_223fdf8;
extern __int64 GameData_223fe00;
extern __int64 GameData_223fe18;
extern __int64 GameData_223fe20;
extern __int64 GameData_223fe28;
extern __int64 GameData_223fe30;
extern __int64 GameData_223fe38;
extern __int64 GameData_223fe40;
extern __int64 GameData_223fe48;
extern __int64 GameData_223fe50;
extern __int64 GameData_223fe58;
extern __int64 GameData_223fe60;
extern __int64 GameData_223fe68;
extern __int64 GameData_223fe70;
extern __int64 GameData_223fe78;
extern __int64 GameData_223fe80;
extern __int64 GameData_223fe88;
extern __int64 GameData_223fe90;
extern __int64 GameData_223fe98;
extern __int64 GameData_223fea0;
extern __int64 GameData_223fea8;
extern __int64 GameData_223feb0;
extern __int64 GameData_223feb8;
extern __int64 GameData_223fec0;
extern __int64 GameData_223fec8;
extern __int64 GameData_223fed0;
extern __int64 GameData_223fed8;
extern __int64 GameData_223fee0;
extern __int64 GameData_223fef8;
extern __int64 GameData_223ff00;
extern __int64 GameData_223ff08;
extern __int64 GameData_223ff10;
extern __int64 GameData_223ff18;
extern __int64 GameData_223ff20;
extern __int64 GameData_223ff38;
extern __int64 GameData_223ff40;
extern __int64 GameData_223ff48;
extern __int64 GameData_223ff50;
extern __int64 GameData_223ff58;
extern __int64 GameData_223ff60;
extern __int64 GameData_223ff78;
extern __int64 GameData_223ff80;
extern __int64 GameData_223ff88;
extern __int64 GameData_223ff90;
extern __int64 GameData_223ff98;
extern __int64 GameData_223ffa0;
extern __int64 GameData_223ffb8;
extern __int64 GameData_223ffc0;
extern __int64 GameData_223ffc8;
extern __int64 GameData_223ffd0;
extern __int64 GameData_223ffd8;
extern __int64 GameData_223ffe0;
extern __int64 GameData_223fff8;
extern __int64 GameData_2240000;
extern __int64 GameData_2240008;
extern __int64 GameData_2240010;
extern __int64 GameData_2240018;
extern __int64 GameData_2240020;
extern __int64 GameData_2240038;
extern __int64 GameData_2240040;
extern __int64 GameData_22400f8;
extern __int64 GameData_2258dd8;
extern __int64 GameData_2258de0;
extern __int64 GameData_2258de8;
extern __int64 GameData_2258df0;
extern __int64 GameData_2258df8;
extern __int64 GameData_2258e08;
extern __int64 GameData_2258e10;
extern __int64 GameData_2258e18;
extern __int64 GameData_2258e20;
extern __int64 GameData_2258e28;
extern __int64 GameData_2258e38;
extern __int64 GameData_2258e40;
extern __int64 GameData_2258e48;
extern __int64 GameData_2258e50;
extern __int64 GameData_2258e58;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_map_UnitFlags_instance_;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64 game_talk_g_window_layout;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
extern char GameData_221d5b0;
extern char GameData_221d5b8;
extern char GameData_221d5f0;
extern char GameData_221d5f8;
extern char GameData_221d630;
extern char GameData_221d638;
extern char GameData_221d670;
extern char GameData_221d678;
extern char GameData_221d6b0;
extern char GameData_221d6b8;
extern char GameData_221d6f0;
extern char GameData_221d6f8;
extern char GameData_221d730;
extern char GameData_221d738;
extern char GameData_221d770;
extern char GameData_221d778;
extern char GameData_221d7b0;
extern char GameData_221d7b8;
extern char GameData_221f340;
extern char GameData_221f348;
extern char GameData_221f380;
extern char GameData_221f388;
extern char GameData_221f3c0;
extern char GameData_221f3c8;
extern char GameData_221f400;
extern char GameData_221f408;
extern char GameData_221f440;
extern char GameData_221f448;
extern char GameData_221f480;
extern char GameData_221f488;
extern char GameData_221f4c0;
extern char GameData_221f4c8;
extern char GameData_221f500;
extern char GameData_221f508;
extern char GameData_221f540;
extern char GameData_221f548;
extern char GameData_221f580;
extern char GameData_221f588;
extern char GameData_221f5c0;
extern char GameData_221f5c8;
extern char GameData_221f600;
extern char GameData_221f608;
extern char GameData_221f640;
extern char GameData_221f648;
extern char GameData_221f680;
extern char GameData_221f688;
extern char GameData_22293c0;
extern char GameData_2229400;
extern char GameData_2229440;
extern char GameData_2229480;
extern char GameData_22294c0;
extern char GameData_2229500;
extern char GameData_2229540;
extern char GameData_2229580;
extern char GameData_22295c0;
extern char GameData_2229600;
extern char GameData_2229640;
extern char GameData_2229680;
extern char GameData_22296c0;
extern char GameData_2229700;
extern char GameData_2229740;
extern char GameData_2229780;
extern char GameData_22297c0;
extern char GameData_2229800;
extern char GameData_2229840;
extern char GameData_2229880;
extern char GameData_22298c0;
extern char GameData_2229900;
extern char GameData_2229940;
extern char GameData_2229980;
extern char GameData_22299c0;
extern char GameData_2229a00;
extern char GameData_2231e90;
extern char GameData_2231e98;
extern char GameData_2231ed0;
extern char GameData_2231ed8;
extern char GameData_2231f10;
extern char GameData_2231f18;
extern char GameData_2231f50;
extern char GameData_2231f58;
extern char GameData_2231f90;
extern char GameData_2231f98;
extern char GameData_2231fd0;
extern char GameData_2231fd8;
extern char GameData_22336f0;
extern char GameData_2235ef0;
extern char GameData_2235ef8;
extern char GameData_2235f30;
extern char GameData_2235f38;
extern char GameData_2235f70;
extern char GameData_2235f78;
extern char GameData_2235fb0;
extern char GameData_2235fb8;
extern char GameData_2235ff0;
extern char GameData_2235ff8;
extern char GameData_2236030;
extern char GameData_2236038;
extern char GameData_2236070;
extern char GameData_2236078;
extern char GameData_22360b0;
extern char GameData_22360b8;
extern char GameData_22360f0;
extern char GameData_22360f8;
extern char GameData_2236130;
extern char GameData_2236138;
extern char GameData_2236170;
extern char GameData_2236178;
extern char GameData_22361b0;
extern char GameData_22361b8;
extern char GameData_22361f0;
extern char GameData_22361f8;
extern char GameData_2236230;
extern char GameData_2236238;
extern char GameData_2236270;
extern char GameData_2236278;
extern char GameData_22362b0;
extern char GameData_22362b8;
extern char GameData_22362f0;
extern char GameData_22362f8;
extern char GameData_2236330;
extern char GameData_2236338;
extern char GameData_2236370;
extern char GameData_2236378;
extern char GameData_22363b0;
extern char GameData_22363b8;
extern char GameData_22363f0;
extern char GameData_22363f8;
extern char GameData_2236430;
extern char GameData_2236438;
extern char GameData_2236470;
extern char GameData_2236478;
extern char GameData_22364b0;
extern char GameData_22364b8;
extern char GameData_22364f0;
extern char GameData_22364f8;
extern char GameData_223d9c8;
extern char GameData_223da08;
extern char GameData_223db08;
extern char GameData_223db10;
extern char GameData_223db48;
extern char GameData_223db50;
extern char GameData_223db88;
extern char GameData_223db90;
extern char GameData_223dbc8;
extern char GameData_223dbd0;
extern char GameData_223dc08;
extern char GameData_223dc10;
extern char GameData_223dc48;
extern char GameData_223dc50;
extern char GameData_223dc88;
extern char GameData_223dc90;
extern char GameData_223dcc8;
extern char GameData_223dcd0;
extern char GameData_223dd08;
extern char GameData_223dd10;
extern char GameData_223dd48;
extern char GameData_223dd50;
extern char GameData_223dd88;
extern char GameData_223dd90;
extern char GameData_223ddc8;
extern char GameData_223ddd0;
extern char GameData_223de08;
extern char GameData_223de10;
extern char GameData_223de48;
extern char GameData_223de50;
extern char GameData_223de88;
extern char GameData_223de90;
extern char GameData_223dec8;
extern char GameData_223ded0;
extern char GameData_223df08;
extern char GameData_223df10;
extern char GameData_223df48;
extern char GameData_223df50;
extern char GameData_223df88;
extern char GameData_223df90;
extern char GameData_223dfc8;
extern char GameData_223dfd0;
extern char GameData_223e008;
extern char GameData_223e010;
extern char GameData_223e048;
extern char GameData_223e050;
extern char GameData_223f3e8;
extern char GameData_223f3f0;
extern char GameData_223f488;
extern char GameData_223f490;
extern char GameData_223f508;
extern char GameData_223f510;
extern char GameData_223f688;
extern char GameData_223f690;
extern char GameData_223f6c8;
extern char GameData_223f6d0;
extern char GameData_223f708;
extern char GameData_223f710;
extern char GameData_223f748;
extern char GameData_223f750;
extern char GameData_223f788;
extern char GameData_223f790;
extern char GameData_223f7c8;
extern char GameData_223f7d0;
extern char GameData_223f808;
extern char GameData_223f810;
extern char GameData_223f848;
extern char GameData_223f850;
extern char GameData_223f888;
extern char GameData_223f890;
extern char GameData_223f8c8;
extern char GameData_223f8d0;
extern char GameData_223f908;
extern char GameData_223f910;
extern char GameData_223f948;
extern char GameData_223f950;
extern char GameData_223f988;
extern char GameData_223f990;
extern char GameData_223f9c8;
extern char GameData_223f9d0;
extern char GameData_223fa08;
extern char GameData_223fa10;
extern char GameData_223fa48;
extern char GameData_223fa50;
extern char GameData_223fa88;
extern char GameData_223fa90;
extern char GameData_223fac8;
extern char GameData_223fad0;
extern char GameData_223fb08;
extern char GameData_223fb10;
extern char GameData_223fb48;
extern char GameData_223fb50;
extern char GameData_223fb88;
extern char GameData_223fb90;
extern char GameData_223fbc8;
extern char GameData_223fbd0;
extern char GameData_223fc08;
extern char GameData_223fc10;
extern char GameData_223fc48;
extern char GameData_223fc50;
extern char GameData_223fc88;
extern char GameData_223fc90;
extern char GameData_223fcc8;
extern char GameData_223fcd0;
extern char GameData_223fe08;
extern char GameData_223fe10;
extern char GameData_223fee8;
extern char GameData_223fef0;
extern char GameData_223ff28;
extern char GameData_223ff30;
extern char GameData_223ff68;
extern char GameData_223ff70;
extern char GameData_223ffa8;
extern char GameData_223ffb0;
extern char GameData_223ffe8;
extern char GameData_223fff0;
extern char GameData_2240028;
extern char GameData_2240030;
extern int* GameData_212df08;
extern int* GameData_212ea00;
extern int GameData_21d92e0;
extern int GameData_22293e0;
extern int GameData_22293f0;
extern int GameData_2229420;
extern int GameData_2229430;
extern int GameData_2229460;
extern int GameData_2229470;
extern int GameData_22294a0;
extern int GameData_22294b0;
extern int GameData_22294e0;
extern int GameData_22294f0;
extern int GameData_2229520;
extern int GameData_2229530;
extern int GameData_2229560;
extern int GameData_2229570;
extern int GameData_22295a0;
extern int GameData_22295b0;
extern int GameData_22295e0;
extern int GameData_22295f0;
extern int GameData_2229620;
extern int GameData_2229630;
extern int GameData_2229660;
extern int GameData_2229670;
extern int GameData_22296a0;
extern int GameData_22296b0;
extern int GameData_22296e0;
extern int GameData_22296f0;
extern int GameData_2229720;
extern int GameData_2229730;
extern int GameData_2229760;
extern int GameData_2229770;
extern int GameData_22297a0;
extern int GameData_22297b0;
extern int GameData_22297e0;
extern int GameData_22297f0;
extern int GameData_2229820;
extern int GameData_2229830;
extern int GameData_2229860;
extern int GameData_2229870;
extern int GameData_22298a0;
extern int GameData_22298b0;
extern int GameData_22298e0;
extern int GameData_22298f0;
extern int GameData_2229920;
extern int GameData_2229930;
extern int GameData_2229960;
extern int GameData_2229970;
extern int GameData_22299a0;
extern int GameData_22299b0;
extern int GameData_22299e0;
extern int GameData_22299f0;
extern int GameData_2229a20;
extern int GameData_2229a30;
extern int GameData_2235720;
extern int GameData_2236780;
extern int GameData_2236850;
extern int GameData_223d9e8;
extern int GameData_223d9f8;
extern int GameData_223da28;
extern int GameData_223da38;
float* LegionGambitCamera_e5a880(float* result, _BYTE*, long double);
float GameRoutine_d70270(__int64, __int64, unsigned __int64, __int64);
float Height_7c4d10(__int64, float, float);
float Unit_6c7fa0(_QWORD, _QWORD);
float atan2f(long double, float);
float cosf(float);
float fmodf(float, float);
float game_combat_e401e0(float*, float*);
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
float sinf(float);
long double asin(long double, long double);
long double atan2(double, double);
void CharacterRotate_d519c0(int8x16_t*);
void GameRoutine_10da940(__int64);
void GameRoutine_8cfec0(__int64*, unsigned __int64);
void GameRoutine_f8eee0(__int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_d38e30();
void __attribute__((noreturn)) String_60a250(_QWORD);
void cmdbtl_camera_StartDefaultWithRelocate(char, float);
void game_script_ed6550(int, __int128*, float, float, float, float);
void hub_ui_GainItemCount(__int64, int);
__attribute__((swiftcall)) void game_eb68e0(PSEUDO_X8 x8_, int a1);
__int64 game_eb6a20(__int64 a1, __int64 a2);
void game_ebe800();
void game_ed7400();
void game_f313e0(__int64 a1, signed int a2, float32x4_t* a3, float32x4_t* a4);
__int64 game_f42400(__int64 a1, _DWORD* a2, _DWORD* a3, bool* a4);
bool game_f8f140(float32x4_t* a1, float* a2);
void game_f92170(__int64 a1);
__int64 game_f9c820(__int64 a1);
__int64 game_fba950(__int64 a1, char* a2, int a3, __int64 a4);
void game_fe66a0();
__int64 game_100ff50();
__int64 game_1034e80_alt1(__int64 a1, __n128 a2, __int64 a3, __int64 a4,
                          __int64 a5) __asm__("game_1034e80");
__attribute__((swiftcall)) void game_108dd30(PSEUDO_X8 x8_, __int64 a1,
                                             char* a2, float32x4_t* a3,
                                             float32x4_t* a4, int8x16_t* a5,
                                             long double a7);
__attribute__((swiftcall)) void game_108df10(PSEUDO_X8 x8_, __int64 a1,
                                             char* a2, int8x16_t* a3,
                                             long double a5);
__attribute__((swiftcall)) void
game_108e100(PSEUDO_X8 x8_, __int64 a1, char* a2, const char* a3, float a5);
float game_109d070();
__int64 game_109d0f0();
void game_109d2e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5);
__attribute__((swiftcall)) void game_109e470(PSEUDO_X8 x8_, int32x2_t* a1,
                                             int32x2_t* a2, float a4);
__int64 game_109ecc0(_BYTE* a1, unsigned __int64 a2, __int64 a3, __int64 a4);
__int64 game_109f1e0(__int64 a1, _BYTE* a2);
__int64 game_109f3c0(__int64 a1, _QWORD* a2, __int64 a3);
__attribute__((swiftcall)) void game_109f820(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2);
_QWORD* game_10a0100(_QWORD* result, __int64 a2);
bool game_10a0340(_BYTE* a1);
void game_10c29f0(__int64 a1, long double a2, long double a3, long double a4,
                  long double a5, double a6);
void game_10ca6e0(__int64 a1, __n128 a2, long double a3, long double a4);
float32x4_t game_10d95c0(__int64 a1);
void game_10dd210();
void game_10f03a0_alt1(long double a1) __asm__("game_10f03a0");
__int64 game_10f1b40();
__int64 game_1116110(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_111d140(PSEUDO_X8 x8_, __int64 result);
__attribute__((swiftcall)) void game_112eec0(PSEUDO_X8 x8_, __int64 result,
                                             unsigned int a2, unsigned int a3);
__int64 game_113fc70();
__int64 game_1189190(__int64 result, char a2, char a3);
__int64 game_1189a20(__int64 result, __int64 a2, __int64 a3, char a4);
__int64 game_11912b0(__int64 a1, _BYTE** a2, __int64 a3, __int64 a4);
__int64 game_1191430(__int64 a1, _BYTE** a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6);
void game_11918e0();
void* game_11c2370();
_QWORD* game_1244680(__int64 a1, unsigned __int64* a2, __int64* a3);
__int64 game_127cc60(__int64* a1, int a2);
_QWORD* TelopParts_17cd840_alt1(__int64*,
                                __int64*) __asm__("TelopParts_17cd840");
__attribute__((swiftcall)) void
MapSimulator_102b410_alt1(PSEUDO_X8,
                          __int64 result) __asm__("MapSimulator_102b410");
__int64 CombatCamera_1098000_alt1(__int64, __int64,
                                  char) __asm__("CombatCamera_1098000");
__int64 GameHr_10f1120(__int64, __int64);
__int64 GameHr_f9cf10();
__int64 Registration_a4da40_alt1(__int64,
                                 __int64) __asm__("Registration_a4da40");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* GameRoutine_60a020_alt2(char*, const char*) __asm__("GameRoutine_60a020");
float*
LegionGambitCamera_e5a880_alt1(float* result,
                               _BYTE*) __asm__("LegionGambitCamera_e5a880");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
void GameHr_f8eee0(__int64);
void TelopParts_17cbd60_alt1(__int64) __asm__("TelopParts_17cbd60");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__int64 game_1034e80(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
void game_10f03a0();

__attribute__((swiftcall)) void game_eb68e0(PSEUDO_X8 x8_, int a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 result;
  int v14;
  struct {
    __int64* v15;
    __int64* v16;
    __int64 v17;
  } v15_;

  *(_QWORD*)(a2 + 32) = 0;
  *(_DWORD*)a2 = a1;
  GameRoutine_eb5ba0((void*)((__int64*)&v15_.v15), a1);
  v3 = v15_.v15;
  v4 = v15_.v16;
  v5 = v15_.v17;
  *(_QWORD*)(a2 + 8) = v15_.v15;
  *(_QWORD*)(a2 + 16) = v4;
  *(_QWORD*)(a2 + 24) = v5;
  if (v3 == v4) {
    v9 = 0;
    *(_DWORD*)(a2 + 36) = 0;
  }
  else {
    v6 = 0;
    v7 = v3;
    do {
      v8 = *v7++;
      LOBYTE(v15_.v15) = 0;
      v6 += game_Unit_GetParam(v8);
    } while (v7 != v4);
    v9 = 0;
    *(_DWORD*)(a2 + 36) = v6;
    do {
      v10 = *v3++;
      v9 += *(__int16*)(v10 + 492);
    } while (v3 != v4);
  }
  *(_DWORD*)(a2 + 32) = v9;
  v15_.v16 = (__int64*)&GameData_1ad7123;
  v15_.v15 = (__int64*)game_HashString((__int64)&GameData_1ad7123);
  v11 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v12 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v15_.v15);
    if (v12 != 0) {
      v11 = *(_DWORD*)(v12 + 32);
    }
    else {
      v11 = 0;
    }
  }
  *(_DWORD*)(a2 + 44) = v11;
  v15_.v16 = (__int64*)&GameData_1af5ec9;
  result = game_HashString((__int64)&GameData_1af5ec9);
  v14 = game_GameModeData_instance_;
  v15_.v15 = (__int64*)result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v15_.v15);
    if (result != 0) {
      v14 = *(_DWORD*)(result + 32);
    }
    else {
      v14 = 0;
    }
  }
  *(_DWORD*)(a2 + 40) = v14;
  {
    result;
    return;
  }
}

__int64 game_eb6a20(__int64 a1, __int64 a2)
{
  int v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int16* v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  bool v37;
  bool v38;
  bool v39;
  bool v40;
  __int64 v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;

  LODWORD(v3) = 0;
  v49 = a2;
  if (a1 != 0 && a2 != 0) {
    v5 = *(_QWORD*)(GameData_21ca310 + 56);
    if (v5 == 0) {
      goto LABEL_101;
    }
    v3 = 250;
    while (1) {
      v6 = *(_QWORD*)(v5 + 440);
      if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && *(_QWORD*)(v5 + 392) == a1) {
        break;
      }
      v7 = *(_QWORD*)(v5 + 2664);
      if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && *(_QWORD*)(v5 + 2616) == a1) {
        v5 += 2224;
        break;
      }
      v8 = *(_QWORD*)(v5 + 4888);
      if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && *(_QWORD*)(v5 + 4840) == a1) {
        v11 = 4448;
        goto LABEL_25;
      }
      v9 = *(_QWORD*)(v5 + 7112);
      if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && *(_QWORD*)(v5 + 7064) == a1) {
        v11 = 6672;
        goto LABEL_25;
      }
      v10 = *(_QWORD*)(v5 + 9336);
      if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && *(_QWORD*)(v5 + 9288) == a1) {
        v11 = 8896;
      LABEL_25:
        v5 += v11;
        break;
      }
      v5 += 11120;
      v3 -= 5;
      if (v3 == 0) {
        return (unsigned int)v3;
      }
    }
    v48 = v5;
    v12 = GameData_212c878[0];
    if (*(_WORD*)(v5 + 1952) != 0 &&
        *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                   8LL * *(unsigned __int16*)(v5 + 1952)) == a2) {
      LODWORD(v3) = 1;
      return (unsigned int)v3;
    }
    if ((GameRoutine_eb6f10(&v48, &v49) & 1) != 0) {
      LODWORD(v3) = 2;
      return (unsigned int)v3;
    }
    v13 = *v12;
    v47 = 0x100000000LL;
    v14 = *(_QWORD*)(v13 + 64);
    LOWORD(v47) = *(_WORD*)(a2 + 16);
    if (*(_BYTE*)(*(_QWORD*)(v14 + 8LL * (unsigned __int16)v47) + 73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v15 = game_map_MapRandom_instance__ptr[0];
      v16 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v17 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v18 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v15 + 1) = v16;
      v2 = (v18 >> 8) ^ (v17 >> 19) ^ v18 ^ v17;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15) = v17;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15 + 4) = v2;
      nn_os_UnlockMutex(&game_g_random_mutex);
      HIDWORD(v47) =
          (16 * ((_WORD)v2 -
                 1000 * (unsigned __int16)((v2 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    v19 = game_TransporterConst_List_instance__ptr[0];
    v20 = GameRoutine_89aac0(
        *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL),
        &v47);
    if ((v20 & 0x80000000) == 0) {
      TransporterConst_89bd90((void*)(&v47), *(_QWORD*)(*(_QWORD*)v19 + 8LL),
                              v20, v5);
      if ((v47 & 0x8000000000000000LL) == 0 &&
          (GameRoutine_eb6f10(&v48, &v49) & 1) != 0) {
        LODWORD(v3) = 3;
        return (unsigned int)v3;
      }
    }
    if (*(_WORD*)(v5 + 844) != 0) {
      v21 = *(_WORD*)(v5 + 836) == 0;
    }
    else {
      v21 = 2;
    }
    if (*(_WORD*)(v5 + 852) != 0) {
      v22 = v21;
    }
    else {
      v22 = 3;
    }
    if (*(_WORD*)(v5 + 860) == 0) {
      v22 = 4;
    }
    if (*(_WORD*)(v5 + 868) == 0) {
      v22 = 5;
    }
    if ((v46 = v22, *(_WORD*)(v5 + 868) != 0) && *(_WORD*)(v5 + 860) != 0 &&
            *(_WORD*)(v5 + 852) != 0 && *(_WORD*)(v5 + 844) != 0 &&
            *(_WORD*)(v5 + 836) != 0 && *(_WORD*)(v5 + 828) != 0 ||
        (LODWORD(v47) = 241, (v23 = game_UnitPool_GetFirst(&v47)) == 0)) {
    LABEL_101:
      LODWORD(v3) = 0;
      return (unsigned int)v3;
    }
    v24 = *(_QWORD*)(v23 + 432);
    v25 = (unsigned __int16*)v23;
    if (v24 == 0) {
      v24 = *(_QWORD*)(v23 + 440);
      if (v24 != 0) {
        v26 = *(unsigned __int8*)(v24 + 16);
        if (v26 <= 8) {
          do {
            v45 = v26 + 1;
            if ((((unsigned int)v47 >> v26) & 2) != 0) {
              v24 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                               24LL * (unsigned __int8)(v26 + 1) + 556000);
              if (v24 != 0) {
                goto LABEL_60;
              }
            }
            v26 = v45;
          } while (v45 != 9);
        }
        v24 = 0;
        goto LABEL_60;
      }
    }
    while (1) {
    LABEL_60:
      v27 = v24;
      v28 = v2 & 0xFFFFFF00;
      v29 = *(_QWORD*)(*GameData_212c878[0] + 64);
      v30 = *(_QWORD*)(v29 + 8LL * v25[414]);
      v31 = *(_QWORD*)(v29 + 8LL * v25[418]);
      v32 = *(_QWORD*)(v29 + 8LL * v25[422]);
      v33 = *(_QWORD*)(v29 + 8LL * v25[426]);
      v34 = *(_QWORD*)(v29 + 8LL * v25[430]);
      v35 = *(_QWORD*)(v29 + 8LL * v25[434]);
      if (v30 == a2) {
        v28 = 0;
      }
      if (v31 == a2) {
        v28 = 1;
      }
      if (v32 == a2) {
        v28 = 2;
      }
      if (v33 == a2) {
        v28 = 3;
      }
      if (v34 == a2) {
        v28 = 4;
      }
      v2 = v35 == a2 ? 5 : v28;
      v36 = v30 == a2 || v31 == a2;
      v37 = v36 || v32 == a2;
      v38 = v37 || v33 == a2;
      v39 = v38 || v34 == a2;
      v40 = v39 || v35 == a2;
      if (v40 && (GameRoutine_120ccf0(v5, v46) & 1) != 0 &&
          (GameRoutine_eb6f10(&v48, &v49) & 1) != 0) {
        break;
      }
      if (v27 == 0) {
        goto LABEL_101;
      }
      v24 = *(_QWORD*)(v27 + 432);
      v25 = (unsigned __int16*)v27;
      if (v24 == 0) {
        v41 = *(_QWORD*)(v27 + 440);
        v25 = (unsigned __int16*)v27;
        if (v41 != 0) {
          v42 = *(unsigned __int8*)(v41 + 16);
          v24 = 0;
          v25 = (unsigned __int16*)v27;
          if (v42 <= 8) {
            while (1) {
              v43 = v42 + 1;
              if ((((unsigned int)v47 >> v42) & 2) != 0) {
                v24 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                 24LL * (unsigned __int8)(v42 + 1) + 556000);
                if (v24 != 0) {
                  break;
                }
              }
              ++v42;
              if (v43 == 9) {
                v24 = 0;
                v25 = (unsigned __int16*)v27;
                goto LABEL_60;
              }
            }
            v25 = (unsigned __int16*)v27;
          }
        }
      }
    }
    LODWORD(v3) = 4;
  }
  return (unsigned int)v3;
}

void game_ebe800()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;

  GameData_221d590 = (__int64)"cmdbtl::record";
  GameData_221d598 = (__int64)game_script_cmdbtl_record_SetSimplePower_ebdbb0;
  GameData_221d5a0 = 0;
  GameData_221d5a8 = 0;
  v0 = GameData_212bf18[0];
  GameData_221d5d0 = (__int64)"cmdbtl::record";
  GameData_221d5d8 = (__int64)game_script_cmdbtl_record_SetSimplePower_ebdc90;
  GameData_221d5b0 = 0;
  GameData_221d5e0 = 0;
  GameData_221d5e8 = 0;
  GameData_221d5f0 = 0;
  v1 = *GameData_212bf18[0];
  GameData_221d5b8 = 2;
  GameData_221d5f8 = 2;
  GameData_221d5c0 = (__int64)"void SetSimplePower(int force, int powerMain)";
  GameData_221d5c8 = v1;
  GameData_221d600 =
      (__int64)"void SetSimplePower(int force, int powerMain, int powerLink)";
  GameData_221d608 = (__int64)&GameData_221d590;
  v2 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_221d580;
  GameData_221d620 = 0;
  GameData_221d628 = 0;
  GameData_221d630 = 0;
  GameData_221d638 = 2;
  GameData_221d610 = (__int64)"cmdbtl::record";
  GameData_221d618 = (__int64)game_script_cmdbtl_record_NewBtlInfoAttack;
  GameData_221d640 = (__int64)"void NewBtlInfoAttack(int force)";
  GameData_221d648 = (__int64)&GameData_221d5d0;
  GameData_221d580 = (__int64)"cmdbtl::record";
  GameData_221d588 = v2;
  GameData_221d650 = (__int64)"cmdbtl::record";
  GameData_221d658 = (__int64)game_script_cmdbtl_record_NewBtlInfoAssist;
  GameData_221d660 = 0;
  GameData_221d668 = 0;
  GameData_221d670 = 0;
  GameData_221d678 = 2;
  GameData_221d680 = (__int64)"void NewBtlInfoAssist(int force)";
  GameData_221d688 = (__int64)&GameData_221d610;
  GameData_221d690 = (__int64)"cmdbtl::record";
  GameData_221d698 = (__int64)cmdbtl_record_NewBtlInfoArts;
  GameData_221d6b0 = 0;
  GameData_221d6a0 = 0;
  GameData_221d6a8 = 0;
  GameData_221d6b8 = 2;
  GameData_221d6c0 =
      (__int64)"void NewBtlInfoArts(int force, const string& sid)";
  GameData_221d6c8 = (__int64)&GameData_221d650;
  GameData_221d6d0 = (__int64)"cmdbtl::record";
  GameData_221d6d8 = (__int64)game_script_cmdbtl_record_NewViewerAttack;
  GameData_221d6f0 = 0;
  GameData_221d6e0 = 0;
  GameData_221d6e8 = 0;
  GameData_221d6f8 = 2;
  GameData_221d700 = (__int64)"void NewViewerAttack(int force)";
  GameData_221d708 = (__int64)&GameData_221d690;
  GameData_221d710 = (__int64)"cmdbtl::record";
  GameData_221d718 = (__int64)game_script_cmdbtl_record_NewViewerAssist;
  GameData_221d730 = 0;
  GameData_221d720 = 0;
  GameData_221d728 = 0;
  GameData_221d738 = 2;
  GameData_221d740 = (__int64)"void NewViewerAssist(int force)";
  GameData_221d748 = (__int64)&GameData_221d6d0;
  GameData_221d750 = (__int64)"cmdbtl::record";
  GameData_221d758 = (__int64)cmdbtl_record_NewViewerArts;
  GameData_221d770 = 0;
  GameData_221d760 = 0;
  GameData_221d768 = 0;
  GameData_221d778 = 2;
  GameData_221d780 =
      (__int64)"void NewViewerArts(int force, const string& sid)";
  GameData_221d788 = (__int64)&GameData_221d710;
  *v0 = (__int64)&GameData_221d790;
  GameData_221d7b0 = 0;
  GameData_221d7a0 = 0;
  GameData_221d7a8 = 0;
  GameData_221d7b8 = 2;
  GameData_221d790 = (__int64)"cmdbtl::record";
  GameData_221d798 = (__int64)cmdbtl_record_PushViewerMotion;
  GameData_221d7c0 = (__int64)"void PushViewerMotion(string phaseMotion, "
                              "string reverseMotion)";
  GameData_221d7c8 = (__int64)&GameData_221d750;
}

void game_ed7400()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  __int64 v2;

  GameData_221f320 = (__int64)"cmdbtl::camera";
  GameData_221f328 = (__int64)game_script_cmdbtl_camera_StartEvent;
  GameData_221f330 = 0;
  GameData_221f338 = 0;
  v0 = GameData_212bf18[0];
  GameData_221f360 = (__int64)"cmdbtl::camera";
  GameData_221f368 = (__int64)cmdbtl_camera_StartSelfie;
  GameData_221f340 = 0;
  GameData_221f348 = 2;
  GameData_221f370 = 0;
  GameData_221f378 = 0;
  GameData_221f380 = 0;
  GameData_221f388 = 2;
  v1 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_221f310;
  GameData_221f390 =
      (__int64)"void StartSelfie(int unitId, float offsetAngle, float sec, "
               "float addLength, math::Vec3 offsetPos, float fov)";
  GameData_221f398 = (__int64)&GameData_221f320;
  GameData_221f3b0 = 0;
  GameData_221f3b8 = 0;
  GameData_221f3c0 = 0;
  GameData_221f3c8 = 2;
  GameData_221f3a0 = (__int64)"cmdbtl::camera";
  GameData_221f3a8 = (__int64)game_script_ed6550;
  GameData_221f310 = (__int64)"cmdbtl::camera";
  GameData_221f318 = v1;
  v2 = *v0;
  GameData_221f350 = (__int64)"void StartEvent( float px, float py, float pz, "
                              "float rx, float ry, float rz, float sec = 0.f )";
  GameData_221f358 = v2;
  GameData_221f3d0 =
      (__int64)"void StartSelfieHead(int unitId, float offsetAngle, float sec, "
               "float addLength, math::Vec3 of"
               "fsetPos, float fov)";
  GameData_221f3d8 = (__int64)&GameData_221f360;
  GameData_221f3e0 = (__int64)"cmdbtl::camera";
  GameData_221f3e8 = (__int64)game_script_cmdbtl_camera_WaitTransition;
  GameData_221f3f0 = 0;
  GameData_221f3f8 = 0;
  GameData_221f400 = 0;
  GameData_221f408 = 2;
  GameData_221f4e0 = (__int64)"cmdbtl::camera";
  GameData_221f4e8 = (__int64)game_script_cmdbtl_camera_GetYawDeg;
  GameData_221f500 = 0;
  GameData_221f4f0 = 0;
  GameData_221f4f8 = 0;
  GameData_221f508 = 2;
  GameData_221f410 = (__int64)"void WaitTransition()";
  GameData_221f418 = (__int64)&GameData_221f3a0;
  GameData_221f420 = (__int64)"cmdbtl::camera";
  GameData_221f428 = (__int64)CmdbtlCameraNatives_ed68d0;
  GameData_221f440 = 0;
  GameData_221f430 = 0;
  GameData_221f438 = 0;
  GameData_221f448 = 2;
  GameData_221f450 =
      (__int64)"void StartDefault( float sec = 0.5f, bool isPlayer = true )";
  GameData_221f458 = (__int64)&GameData_221f3e0;
  GameData_221f460 = (__int64)"cmdbtl::camera";
  GameData_221f468 = (__int64)cmdbtl_camera_StartDefaultWithRelocate;
  GameData_221f480 = 0;
  GameData_221f470 = 0;
  GameData_221f478 = 0;
  GameData_221f488 = 2;
  GameData_221f490 = (__int64)"void StartDefaultWithRelocate( float sec = "
                              "0.5f, bool isPlayer = true )";
  GameData_221f498 = (__int64)&GameData_221f420;
  GameData_221f4a0 = (__int64)"cmdbtl::camera";
  GameData_221f4a8 = (__int64)game_script_cmdbtl_camera_GetWorldPosition;
  GameData_221f4c0 = 0;
  GameData_221f4b0 = 0;
  GameData_221f4b8 = 0;
  GameData_221f4c8 = 2;
  GameData_221f4d0 = (__int64)"math::Vec3 GetWorldPosition()";
  GameData_221f4d8 = (__int64)&GameData_221f460;
  GameData_221f510 = (__int64)"float GetYawDeg()";
  GameData_221f518 = (__int64)&GameData_221f4a0;
  GameData_221f540 = 0;
  GameData_221f530 = 0;
  GameData_221f538 = 0;
  GameData_221f548 = 2;
  GameData_221f520 = (__int64)"cmdbtl::camera";
  GameData_221f528 = (__int64)game_script_cmdbtl_camera_GetPitchDeg;
  GameData_221f550 = (__int64)"float GetPitchDeg()";
  GameData_221f558 = (__int64)&GameData_221f4e0;
  GameData_221f560 = (__int64)"cmdbtl::camera";
  GameData_221f568 = (__int64)game_script_cmdbtl_camera_QuakeOnce;
  GameData_221f580 = 0;
  GameData_221f570 = 0;
  GameData_221f578 = 0;
  GameData_221f588 = 2;
  GameData_221f590 =
      (__int64)"void QuakeOnce( float powerRate = 1.0f, float sec = 0.1f )";
  GameData_221f598 = (__int64)&GameData_221f520;
  GameData_221f5a0 = (__int64)"cmdbtl::camera";
  GameData_221f5a8 = (__int64)game_script_cmdbtl_camera_QuakeFade;
  GameData_221f5c0 = 0;
  GameData_221f5b0 = 0;
  GameData_221f5b8 = 0;
  GameData_221f5c8 = 2;
  GameData_221f5d0 = (__int64)"void QuakeFade( float sec, float powerRate = "
                              "1.0f, float noizeSpeedRate = 1.0f)";
  GameData_221f5d8 = (__int64)&GameData_221f560;
  GameData_221f5e0 = (__int64)"cmdbtl::camera";
  GameData_221f5e8 = (__int64)game_script_cmdbtl_camera_QuakeLoopStart;
  GameData_221f600 = 0;
  GameData_221f5f0 = 0;
  GameData_221f5f8 = 0;
  GameData_221f608 = 2;
  GameData_221f610 = (__int64)"void QuakeLoopStart( float powerRate = 1.0f, "
                              "float noizeSpeedRate = 1.0f )";
  GameData_221f618 = (__int64)&GameData_221f5a0;
  GameData_221f620 = (__int64)"cmdbtl::camera";
  GameData_221f628 = (__int64)game_script_cmdbtl_camera_QuakeLoopEnd;
  GameData_221f640 = 0;
  GameData_221f630 = 0;
  GameData_221f638 = 0;
  GameData_221f648 = 2;
  GameData_221f650 = (__int64)"void QuakeLoopEnd( float fadeSec = 0.5f )";
  GameData_221f658 = (__int64)&GameData_221f5e0;
  *v0 = (__int64)&GameData_221f660;
  GameData_221f680 = 0;
  GameData_221f670 = 0;
  GameData_221f678 = 0;
  GameData_221f688 = 2;
  GameData_221f660 = (__int64)"cmdbtl::camera";
  GameData_221f668 = (__int64)game_script_cmdbtl_camera_QuakeStopAll;
  GameData_221f690 = (__int64)"void QuakeStopAll()";
  GameData_221f698 = (__int64)&GameData_221f620;
}

void game_f313e0(__int64 a1, signed int a2, float32x4_t* a3, float32x4_t* a4)
{
  float32x4_t v8;
  float32x4_t v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD** v17;
  _QWORD** v18;
  _QWORD* v19;
  long double v20;
  long double v21;
  unsigned __int32 v22;
  float v23;
  int8x16_t v24;
  float v25;
  float v26;
  float32x4_t v27;
  int8x16_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  int8x16_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  long double v46;
  __int64 v47;
  float32x4_t v48;
  float32x4_t v49;
  struct {
    __int64* v50;
    __int64 v51;
  } v50_;
  float32x4_t v52;
  float32x4_t v53;
  int8x16_t v54;

  nn_os_LockMutex_alt1(a1 + 576);
  v8 = *a3;
  v9 = *a4;
  v10 = ((((unsigned int)a2 - 0x61C8864680B583EBLL) << 12) +
         (((unsigned __int64)(unsigned int)a2 - 0x61C8864680B583EBLL) >> 4) +
         LANES128(*(a3)).n128_u32[0] - 0x61C8864680B583EBLL) ^
        ((unsigned int)a2 - 0x61C8864680B583EBLL);
  v11 = (HIDWORD(LANES128(*(a3)).n128_u64[0]) + (v10 << 12) + (v10 >> 4) -
         0x61C8864680B583EBLL) ^
        v10;
  v12 = ((unsigned int)LANES128(*(a3)).n128_u64[1] + (v11 << 12) + (v11 >> 4) -
         0x61C8864680B583EBLL) ^
        v11;
  v13 = (LANES128(*(a4)).n128_u32[0] + (v12 << 12) + (v12 >> 4) -
         0x61C8864680B583EBLL) ^
        v12;
  v14 = (HIDWORD(LANES128(*(a4)).n128_u64[0]) + (v13 << 12) + (v13 >> 4) -
         0x61C8864680B583EBLL) ^
        v13;
  v15 = ((unsigned int)LANES128(*(a4)).n128_u64[1] + (v14 << 12) + (v14 >> 4) -
         0x61C8864680B583EBLL) ^
        v14;
  v16 = a1 + 24LL * a2;
  v17 = *(_QWORD***)(v16 + 32);
  v18 = *(_QWORD***)(v16 + 40);
  if (v17 != v18) {
    while (**v17 != v15) {
      v17 += 2;
      if (v17 == v18) {
        goto LABEL_8;
      }
    }
  }
  if (v17 != v18) {
    v19 = *v17;
    if (v19 != nullptr) {
      *((_BYTE*)v19 + 152) = 1;
      goto LABEL_16;
    }
  }
LABEL_8:
  v20 = COERCE_LONG_DOUBLE(vsubq_f32(v8, v9));
  v21 = v20;
  v22 = LANES128_OF(vsubq_f32(v9, v8)).n128_u32[1];
  DWORD1(v21) = 0;
  v48 = *(float32x4_t*)&v21;
  v23 = atan2f(v20, *((float*)&v20 + 2));
  v24 = vmulq_f32(v48, v48);
  LANES128(v24).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u64[0];
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u64[0];
  LODWORD(v25) =
      LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u32[0];
  PSEUDO_LOW_LANE128(v24, n128_u32, v22);
  v26 = atan2f(*(long double*)&v24, v25);
  math_Quat_FromYawPitchRoll((void*)(&v54), v23, v26, 0x0.0p+0f);
  LANES128(v27).n128_u64[0] = 0;
  v28 = vmulq_f32(v54, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83100),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83100),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[1] = LANES128(v29).n128_u64[0];
  LANES128(v31).n128_u64[1] = LANES128(v30).n128_u64[0];
  *(int8x8_t*)&LANES128(v27).n128_i8[8] =
      vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v32 = vmulq_f32(v27, v31);
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83100),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[1] = LANES128(v33).n128_u64[0];
  *(int32x2_t*)&LANES128(v33).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v28).n128_u64[0]), 1);
  v34 =
      vmlaq_f32(vmlaq_f32(vmulq_f32(v28, v29),
                          COERCE_AS(float32x4_t, GameData_1a83800), v32),
                COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v33, v27));
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v33).n128_i8[8] =
      vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v28).n128_u64[1] = LANES128(v28).n128_u64[0];
  v35 = vmlsq_f32(v34, v33, v30);
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[0] = LANES128(v54).n128_u64[0];
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[1] = LANES128(v33).n128_u64[0];
  *(int8x8_t*)&LANES128(v36).n128_i8[8] =
      vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v38).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v35).n128_u64[0]), 1);
  v39 = vmlaq_f32(vmulq_f32(v28, v35), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v37, v36));
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v33).n128_u64[1] = LANES128(v36).n128_u64[0];
  LANES128(v36).n128_u64[1] = LANES128(v54).n128_u64[0];
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v40).n128_i8[8] =
      vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v41 = vmlsq_f32(vmlaq_f32(v39, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v36, v38)),
                  v40, v33);
  LANES128(v41).n128_u32[3] = 0;
  v53 = vaddq_f32(*a3, v41);
  GameRoutine_622ac0((void*)(&v52), (float32x2_t*)&v54);
  v49 = vmulq_f32(v52, vdupq_n_s32(0x42652EE1u));
  game_f31080((void*)((__int64*)&v50_.v50), a1, a2, &v53, (__int128*)&v49);
  v42 = v50_.v51;
  if (v50_.v51 != 0) {
    v43 = std___1___shared_weak_count_lock(v50_.v51);
    if (v43 == 0) {
      v47 = v42;
      goto LABEL_15;
    }
    v44 = v50_.v50;
    v45 = v43;
    *(__n128*)&v46 = std___1___shared_weak_count___release_weak(v42);
    if (v44 != nullptr) {
      *v44 = v15;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v45 + 16LL))(v45, v46);
      v47 = v45;
    LABEL_15:
      std___1___shared_weak_count___release_weak(v47);
    }
  }
LABEL_16:
  nn_os_UnlockMutex_alt1(a1 + 576);
}

__int64 game_f42400(__int64 a1, _DWORD* a2, _DWORD* a3, bool* a4)
{
  __int64 v11;
  __int64 result;
  __int64 v13;
  float32x4_t* v16;
  unsigned __int64 v17;
  __int64 v18;
  float v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  __int64 v26;
  float32x4_t v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  float32x4_t v31;
  float32x4_t v32;
  long double v33;
  __int64* v34;
  float32x4_t v35;
  __int64 v36;
  int8x16_t v37;
  float32x4_t v38;
  unsigned __int64 v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  int8x16_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  int8x16_t v50;
  float32x4_t v51;
  int8x16_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  int8x16_t v60;
  float32x4_t v61;
  float32x4_t v62;
  unsigned __int32 v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  int8x16_t v68;
  unsigned int v69;
  __int128 v70;
  int8x16_t v71;
  long double v72;
  __int64 v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  int8x16_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  int8x16_t v85;
  float32x4_t v86;
  int8x16_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  int8x16_t v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  unsigned __int32 v100;
  float32x4_t v101;
  float32x4_t v102;
  int8x16_t v103;
  float v104;
  __int128 v105;
  int8x16_t v106;
  long double v107;
  __int64 v108;
  float32x4_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float32x4_t v113;
  int8x16_t v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  int8x16_t v120;
  float32x4_t v121;
  int8x16_t v122;
  float32x4_t v123;
  float32x4_t v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  int8x16_t v130;
  float32x4_t v131;
  float32x4_t v132;
  float32x4_t v133;
  float32x4_t v134;
  unsigned __int32 v135;
  float32x4_t v136;
  float32x4_t v137;
  int8x16_t v138;
  float v139;
  __int128 v140;
  int8x16_t v141;
  long double v142;
  __int64 v143;
  float32x4_t v144;
  float32x4_t v145;
  float32x4_t v146;
  float32x4_t v147;
  float32x4_t v148;
  int8x16_t v149;
  float32x4_t v150;
  float32x4_t v151;
  float32x4_t v152;
  float32x4_t v153;
  float32x4_t v154;
  int8x16_t v155;
  float32x4_t v156;
  int8x16_t v157;
  float32x4_t v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x4_t v162;
  float32x4_t v163;
  float32x4_t v164;
  int8x16_t v165;
  float32x4_t v166;
  float32x4_t v167;
  float32x4_t v168;
  float32x4_t v169;
  unsigned __int32 v170;
  float32x4_t v171;
  float32x4_t v172;
  int8x16_t v173;
  float v174;
  __int128 v175;
  int8x16_t v176;
  long double v177;
  __int64 v178;
  float32x4_t v179;
  float32x4_t v180;
  float32x4_t v181;
  float32x4_t v182;
  float32x4_t v183;
  int8x16_t v184;
  float32x4_t v185;
  float32x4_t v186;
  float32x4_t v187;
  float32x4_t v188;
  float32x4_t v189;
  int8x16_t v190;
  float32x4_t v191;
  int8x16_t v192;
  float32x4_t v193;
  float32x4_t v194;
  float32x4_t v195;
  float32x4_t v196;
  float32x4_t v197;
  float32x4_t v198;
  float32x4_t v199;
  int8x16_t v200;
  float32x4_t v201;
  float32x4_t v202;
  unsigned __int32 v203;
  float32x4_t v204;
  float32x4_t v205;
  float32x4_t v206;
  float32x4_t v207;
  int8x16_t v208;
  __int128 v209;
  float32x4_t v210;
  float v211;
  float32x4_t v212;
  unsigned __int64 v213;
  unsigned __int64 v214;
  float32x4_t v215;
  float v216;
  float32x4_t v217;
  int8x16_t v218;
  float32x4_t v219;
  _QWORD v220[5];
  float32x4_t v221;

  *a4 = false;
  v11 = *GameData_212eba8[0];
  if (*GameData_212eba8[0] == 0 || *(int*)(v11 + 216) > 0) {
    return 0;
  }
  v13 = *(_QWORD*)(v11 + 56);
  v221 = (__typeof__(v221)){0};
  LOBYTE(v220[0]) = 0;
  BYTE4(v220[1]) = 0;
  LOBYTE(v220[2]) = 0;
  LOBYTE(v220[4]) = 0;
  if (v13 != 0) {
    v16 = *(float32x4_t**)(v13 + 16);
    LODWORD(v17) = 0;
    v18 = *(_QWORD*)(v13 + 312);
    v19 = *(float*)(v13 + 544) * 0x1.99999a0000000p-1f;
    v20 = v16[35];
    v220[2] = *(_QWORD*)(v13 + 304);
    v220[3] = v18;
    *((float*)&v17 + 1) = v19;
    v220[4] = *(_QWORD*)(v13 + 320);
    v21 = vaddq_f32(v20, COERCE_AS(float32x4_t, v17));
    LODWORD(v17) = *(_DWORD*)(v13 + 528);
    v24 = v13 + 288;
    v22 = *(_QWORD*)(v13 + 288);
    v23 = *(_QWORD*)(v24 + 8);
    LANES128(v221).n128_u64[0] = LANES128(v21).n128_u64[0];
    v220[0] = v22;
    v220[1] = v23;
    LANES128(v20).n128_u64[0] = LANES128(v21).n128_u64[0];
    v216 = *(float*)&v17;
    LANES128(v20).n128_u64[1] = LANES128(v21).n128_u32[2];
    v25 =
        (float)(PSEUDO_UNFUSED(LANES128(v16[42]).n128_f32[0] *
                               LANES128(v16[42]).n128_f32[0])) +
        (float)(LANES128(v16[41]).n128_f32[3] * LANES128(v16[41]).n128_f32[3]);
    v210 = v20;
    v221 = v20;
  LABEL_8:
    *a4 = v25 > 0x0.0p+0f;
    goto LABEL_9;
  }
  if (*GameData_212eda8[0] != 0) {
    v26 = *(_QWORD*)(*GameData_212eda8[0] + 8);
    LANES128(v27).n128_u64[0] = *(_QWORD*)(v26 + 280);
    v28 = LANES64_OF(
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v27).n128_u64[0]), 1))
              .n64_u64[0];
    LANES128(v27).n128_u32[1] = *(_DWORD*)(v26 + 168);
    v29 = *(_QWORD*)(v26 + 368);
    v220[2] = *(_QWORD*)(v26 + 360);
    v220[3] = v29;
    LANES128(v27).n128_u64[1] = v28;
    v220[4] = *(_QWORD*)(v26 + 376);
    v30 = *(_QWORD*)(v26 + 352);
    v31 = vaddq_f32(v27, COERCE_AS(float32x4_t, GameData_1a83570));
    v220[0] = *(_QWORD*)(v26 + 344);
    v220[1] = v30;
    LANES128(v221).n128_u64[0] = LANES128(v31).n128_u64[0];
    LANES128(v32).n128_u64[0] = LANES128(v31).n128_u64[0];
    LANES128(v32).n128_u64[1] = LANES128(v31).n128_u32[2];
    LANES128(v31).n128_u32[0] = *(_DWORD*)(v26 + 296);
    v210 = v32;
    v221 = v32;
    v25 = (float)(PSEUDO_UNFUSED(*(float*)(v26 + 300) * *(float*)(v26 + 300))) +
          (float)(LANES128(v31).n128_f32[0] * LANES128(v31).n128_f32[0]);
    v216 = 0x1.cccccc0000000p-2f;
    goto LABEL_8;
  }
  v210 = (__typeof__(v210)){0};
  v216 = 0x1.99999a0000000p-4f;
LABEL_9:
  v219 = (__typeof__(v219)){0};
  math_Quat_FromYawPitchRoll((void*)(&v218), 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f);
  *(_QWORD*)&v33 = 0;
  v34 = GameData_212ebd0[0];
  LANES128(v35).n128_u64[1] = 1040187392;
  v36 = *GameData_212ebd0[0];
  v37 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82ee0),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  v39 = LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82ee0),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v38).n128_u64[1] = LANES128(v38).n128_u64[0];
  LANES128(v40).n128_u64[1] = v39;
  *((int8x8_t*)&v33 + 1) =
      vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v41).n128_u64[0] = v39;
  v215 = v38;
  v42 = vmulq_f32(*(float32x4_t*)&v33, v40);
  *(int8x8_t*)&v33 = vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82ee0),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL));
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v213 = *(_QWORD*)&v33;
  v214 = v39;
  LANES128(v41).n128_u64[1] = *(_QWORD*)&v33;
  *((int32x2_t*)&v33 + 1) =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v37).n128_u64[0]), 1);
  v43 = vmulq_f32(*(float32x4_t*)&v33, v35);
  *(_QWORD*)&v33 = LANES128(v218).n128_u64[0];
  v44 = vmlaq_f32(vmlaq_f32(vmulq_f32(v37, v38),
                            COERCE_AS(float32x4_t, GameData_1a83800), v42),
                  COERCE_AS(float32x4_t, GameData_1a83800), v43);
  LANES128(v43).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v43).n128_i8[8] =
      vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v212 = vnegq_f32(v41);
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  v45 = vmlsq_f32(v44, v43, v41);
  LANES128(v43).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[1] = LANES128(v37).n128_u64[0];
  LANES128(v42).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *((_QWORD*)&v33 + 1) = LANES128(v43).n128_u64[0];
  *(int8x8_t*)&LANES128(v42).n128_i8[8] =
      vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v46 = vmulq_f32(*(float32x4_t*)&v33, v42);
  *(int32x2_t*)&v33 =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v45).n128_u64[0]), 1);
  v47 = vmlaq_f32(vmulq_f32(v37, v45), COERCE_AS(float32x4_t, GameData_1a83800),
                  v46);
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v41).n128_u64[1] = *(_QWORD*)&v33;
  LANES128(v43).n128_u64[1] = LANES128(v46).n128_u64[0];
  LANES128(v46).n128_u64[1] = LANES128(v218).n128_u64[0];
  LANES128(v48).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v48).n128_i8[8] =
      vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v49 = vmlsq_f32(vmlaq_f32(v47, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v46, v41)),
                  v48, v43);
  LANES128(v49).n128_u32[3] = 0;
  v217 = vaddq_f32(v210, v49);
  if ((game_zview_d16b40(v216, LANES128(v48).n128_f64[1],
                         LANES128(v49).n128_f64[0], LANES128(v43).n128_f64[0],
                         LANES128(v46).n128_f64[0], LANES128(v41).n128_f64[0],
                         v33, v36, (__int64)v220, (__int128*)&v219,
                         LANES128(v221).n128_u64, (__int64)&v217) &
       1) != 0) {
    LANES128(v50).n128_u64[0] = 0;
    LANES128(v51).n128_u64[0] = 0;
    v52 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v53).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v50).n128_u64[1] = LODWORD(v216);
    *(int8x8_t*)&LANES128(v51).n128_i8[8] =
        vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v55).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v50).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v54).n128_u64[1] = LANES128(v54).n128_u64[0];
    LANES128(v53).n128_u64[1] = LANES128(v55).n128_u64[0];
    LANES128(v55).n128_u64[1] = LANES128(v50).n128_u64[0];
    *(int32x2_t*)&LANES128(v50).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v52).n128_u64[0]), 1);
    LANES128(v56).n128_u64[0] = LANES128(v218).n128_u64[0];
    v57 = vmulq_f32(v51, v53);
    v58 = vmlaq_f32(vmulq_f32(v52, v54),
                    COERCE_AS(float32x4_t, GameData_1a83800), v57);
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v59 = vmlaq_f32(v58, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v50, v57));
    LANES128(v50).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v50).n128_i8[8] =
        vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v52).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v52).n128_u64[1] = LANES128(v52).n128_u64[0];
    v60 = vmlsq_f32(v59, v50, v55);
    LANES128(v50).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v55).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v56).n128_u64[1] = LANES128(v50).n128_u64[0];
    *(int8x8_t*)&LANES128(v55).n128_i8[8] =
        vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v61 =
        vmlaq_f32(vmulq_f32(v52, v60), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v56, v55));
    LANES128(v55).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v57).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v60).n128_u64[0]), 1);
    LANES128(v50).n128_u64[1] = LANES128(v55).n128_u64[0];
    LANES128(v55).n128_u64[1] = LANES128(v218).n128_u64[0];
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v62).n128_i8[8] =
        vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v63 = LANES128(v221).n128_u32[1];
    v64 = vmlsq_f32(vmlaq_f32(v61, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v55, v57)),
                    v62, v50);
    LANES128(v64).n128_u32[3] = 0;
    v65 = vaddq_f32(v219, v64);
    v66 = v65;
    LANES128(v66).n128_u32[1] = LANES128(v221).n128_u32[1];
    v67 = vsubq_f32(v66, v221);
    v68 = vmulq_f32(v67, v67);
    LANES128(v68).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v68, v68, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
            .n64_u64[0];
    v211 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
            .n64_f32[0];
    if (v211 < 0x1.fffffe0000000p+127f) {
      *a2 = LANES128(v65).n128_u32[0];
      a2[1] = v63;
      v69 = 1;
      v70 = *(_OWORD*)a2;
      *((_QWORD*)&v70 + 1) = LANES128(v65).n128_u32[2];
      *(_OWORD*)a2 = v70;
      *a3 = 0;
      goto LABEL_15;
    }
    v69 = 0;
  }
  else {
    v69 = 0;
  }
  v211 = 0x1.fffffe0000000p+127f;
LABEL_15:
  math_Quat_FromYawPitchRoll((void*)(&v218), 0x1.921fb60000000p+0f, 0x0.0p+0f,
                             0x0.0p+0f);
  v71 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a829d0));
  *(_QWORD*)&v72 = LANES128(v218).n128_u64[0];
  v73 = *v34;
  LANES128(v74).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v74).n128_u64[1] = v214;
  LANES128(v75).n128_u64[0] = 0;
  *(int8x8_t*)&LANES128(v75).n128_i8[8] =
      vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v76 = vmulq_f32(v75, v74);
  LANES128(v75).n128_u64[0] = v213;
  v77 = vmlaq_f32(vmulq_f32(v215, v71),
                  COERCE_AS(float32x4_t, GameData_1a83800), v76);
  LANES128(v76).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v75).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v71).n128_u64[0]), 1);
  v78 = vmlaq_f32(v77, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v75, v76));
  LANES128(v76).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v76).n128_i8[8] =
      vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v79 = vmlaq_f32(v78, v76, v212);
  LANES128(v71).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v76).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v80).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v71).n128_u64[1] = LANES128(v71).n128_u64[0];
  *((_QWORD*)&v72 + 1) = LANES128(v76).n128_u64[0];
  *(int8x8_t*)&LANES128(v80).n128_i8[8] =
      vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v75).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v81 = vmulq_f32(*(float32x4_t*)&v72, v80);
  *(int32x2_t*)&v72 =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v79).n128_u64[0]), 1);
  v82 = vmlaq_f32(vmulq_f32(v71, v79), COERCE_AS(float32x4_t, GameData_1a83800),
                  v81);
  LANES128(v81).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v75).n128_u64[1] = *(_QWORD*)&v72;
  LANES128(v76).n128_u64[1] = LANES128(v81).n128_u64[0];
  LANES128(v81).n128_u64[1] = LANES128(v218).n128_u64[0];
  LANES128(v83).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v83).n128_i8[8] =
      vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v84 = vmlsq_f32(vmlaq_f32(v82, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v81, v75)),
                  v83, v76);
  LANES128(v84).n128_u32[3] = 0;
  v217 = vaddq_f32(v221, v84);
  if ((game_zview_d16b40(v216, LANES128(v83).n128_f64[0],
                         LANES128(v84).n128_f64[0], LANES128(v76).n128_f64[0],
                         LANES128(v81).n128_f64[0], LANES128(v75).n128_f64[0],
                         v72, v73, (__int64)v220, (__int128*)&v219,
                         LANES128(v221).n128_u64, (__int64)&v217) &
       1) != 0) {
    LANES128(v85).n128_u64[0] = 0;
    LANES128(v86).n128_u64[0] = 0;
    v87 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v88).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v85).n128_u64[1] = LODWORD(v216);
    *(int8x8_t*)&LANES128(v86).n128_i8[8] =
        vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v89).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v90).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v85).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v88).n128_u64[1] = LANES128(v89).n128_u64[0];
    LANES128(v90).n128_u64[1] = LANES128(v90).n128_u64[0];
    LANES128(v89).n128_u64[1] = LANES128(v85).n128_u64[0];
    *(int32x2_t*)&LANES128(v85).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v87).n128_u64[0]), 1);
    LANES128(v91).n128_u64[0] = LANES128(v218).n128_u64[0];
    v92 = vmulq_f32(v86, v88);
    v93 = vmlaq_f32(vmulq_f32(v87, v90),
                    COERCE_AS(float32x4_t, GameData_1a83800), v92);
    LANES128(v92).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v94 = vmlaq_f32(v93, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v85, v92));
    LANES128(v85).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v85).n128_i8[8] =
        vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v87).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v87).n128_u64[1] = LANES128(v87).n128_u64[0];
    v95 = vmlsq_f32(v94, v85, v89);
    LANES128(v85).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v89).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v95, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v91).n128_u64[1] = LANES128(v85).n128_u64[0];
    *(int8x8_t*)&LANES128(v89).n128_i8[8] =
        vqtbl1_s8(v95, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v92).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v95, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v96 =
        vmlaq_f32(vmulq_f32(v87, v95), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v91, v89));
    LANES128(v89).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v92).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v95).n128_u64[0]), 1);
    LANES128(v85).n128_u64[1] = LANES128(v89).n128_u64[0];
    LANES128(v89).n128_u64[1] = LANES128(v218).n128_u64[0];
    LANES128(v97).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v95, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v97).n128_i8[8] =
        vqtbl1_s8(v95, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v98 = vmlsq_f32(vmlaq_f32(v96, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v89, v92)),
                    v97, v85);
    LANES128(v98).n128_u32[3] = 0;
    v99 = vaddq_f32(v219, v98);
    v100 = LANES128(v221).n128_u32[1];
    v101 = v99;
    LANES128(v101).n128_u32[1] = LANES128(v221).n128_u32[1];
    v102 = vsubq_f32(v101, v221);
    v103 = vmulq_f32(v102, v102);
    LANES128(v103).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v103, v103, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0])))
            .n64_u64[0];
    v104 = LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0])))
               .n64_f32[0];
    if (v104 < v211) {
      *a2 = LANES128(v99).n128_u32[0];
      a2[1] = v100;
      v69 = 1;
      v211 = v104;
      v105 = *(_OWORD*)a2;
      *((_QWORD*)&v105 + 1) = LANES128(v99).n128_u32[2];
      *(_OWORD*)a2 = v105;
      *a3 = 1070141403;
    }
  }
  math_Quat_FromYawPitchRoll((void*)(&v218), 0x1.921fb60000000p+1f, 0x0.0p+0f,
                             0x0.0p+0f);
  v106 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a829d0));
  *(_QWORD*)&v107 = LANES128(v218).n128_u64[0];
  v108 = *v34;
  LANES128(v109).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v109).n128_u64[1] = v214;
  LANES128(v110).n128_u64[0] = 0;
  *(int8x8_t*)&LANES128(v110).n128_i8[8] =
      vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v111 = vmulq_f32(v110, v109);
  LANES128(v110).n128_u64[0] = v213;
  v112 = vmlaq_f32(vmulq_f32(v215, v106),
                   COERCE_AS(float32x4_t, GameData_1a83800), v111);
  LANES128(v111).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v110).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v106).n128_u64[0]), 1);
  v113 = vmlaq_f32(v112, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v110, v111));
  LANES128(v111).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v111).n128_i8[8] =
      vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v114 = vmlaq_f32(v113, v111, v212);
  LANES128(v106).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v111).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v115).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v114, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v106).n128_u64[1] = LANES128(v106).n128_u64[0];
  *((_QWORD*)&v107 + 1) = LANES128(v111).n128_u64[0];
  *(int8x8_t*)&LANES128(v115).n128_i8[8] =
      vqtbl1_s8(v114, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v110).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v114, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v116 = vmulq_f32(*(float32x4_t*)&v107, v115);
  *(int32x2_t*)&v107 =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v114).n128_u64[0]), 1);
  v117 = vmlaq_f32(vmulq_f32(v106, v114),
                   COERCE_AS(float32x4_t, GameData_1a83800), v116);
  LANES128(v116).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v110).n128_u64[1] = *(_QWORD*)&v107;
  LANES128(v111).n128_u64[1] = LANES128(v116).n128_u64[0];
  LANES128(v116).n128_u64[1] = LANES128(v218).n128_u64[0];
  LANES128(v118).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v114, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v118).n128_i8[8] =
      vqtbl1_s8(v114, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v119 = vmlsq_f32(vmlaq_f32(v117, COERCE_AS(float32x4_t, GameData_1a83800),
                             vmulq_f32(v116, v110)),
                   v118, v111);
  LANES128(v119).n128_u32[3] = 0;
  v217 = vaddq_f32(v221, v119);
  if ((game_zview_d16b40(v216, LANES128(v118).n128_f64[0],
                         LANES128(v119).n128_f64[0], LANES128(v111).n128_f64[0],
                         LANES128(v116).n128_f64[0], LANES128(v110).n128_f64[0],
                         v107, v108, (__int64)v220, (__int128*)&v219,
                         LANES128(v221).n128_u64, (__int64)&v217) &
       1) != 0) {
    LANES128(v120).n128_u64[0] = 0;
    LANES128(v121).n128_u64[0] = 0;
    v122 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v123).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v120).n128_u64[1] = LODWORD(v216);
    *(int8x8_t*)&LANES128(v121).n128_i8[8] =
        vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v124).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v125).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v120).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v123).n128_u64[1] = LANES128(v124).n128_u64[0];
    LANES128(v125).n128_u64[1] = LANES128(v125).n128_u64[0];
    LANES128(v124).n128_u64[1] = LANES128(v120).n128_u64[0];
    *(int32x2_t*)&LANES128(v120).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v122).n128_u64[0]), 1);
    LANES128(v126).n128_u64[0] = LANES128(v218).n128_u64[0];
    v127 = vmulq_f32(v121, v123);
    v128 = vmlaq_f32(vmulq_f32(v122, v125),
                     COERCE_AS(float32x4_t, GameData_1a83800), v127);
    LANES128(v127).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v129 = vmlaq_f32(v128, COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v120, v127));
    LANES128(v120).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v120).n128_i8[8] =
        vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v122).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v122).n128_u64[1] = LANES128(v122).n128_u64[0];
    v130 = vmlsq_f32(v129, v120, v124);
    LANES128(v120).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v124).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v130, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v126).n128_u64[1] = LANES128(v120).n128_u64[0];
    *(int8x8_t*)&LANES128(v124).n128_i8[8] =
        vqtbl1_s8(v130, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v127).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v130, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v131 = vmlaq_f32(vmulq_f32(v122, v130),
                     COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v126, v124));
    LANES128(v124).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v127).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v130).n128_u64[0]), 1);
    LANES128(v120).n128_u64[1] = LANES128(v124).n128_u64[0];
    LANES128(v124).n128_u64[1] = LANES128(v218).n128_u64[0];
    LANES128(v132).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v130, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v132).n128_i8[8] =
        vqtbl1_s8(v130, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v133 = vmlsq_f32(vmlaq_f32(v131, COERCE_AS(float32x4_t, GameData_1a83800),
                               vmulq_f32(v124, v127)),
                     v132, v120);
    LANES128(v133).n128_u32[3] = 0;
    v134 = vaddq_f32(v219, v133);
    v135 = LANES128(v221).n128_u32[1];
    v136 = v134;
    LANES128(v136).n128_u32[1] = LANES128(v221).n128_u32[1];
    v137 = vsubq_f32(v136, v221);
    v138 = vmulq_f32(v137, v137);
    LANES128(v138).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v138, v138, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v138).n128_u64[0])))
            .n64_u64[0];
    v139 = LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v138).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v138).n128_u64[0])))
               .n64_f32[0];
    if (v139 < v211) {
      *a2 = LANES128(v134).n128_u32[0];
      a2[1] = v135;
      v69 = 1;
      v211 = v139;
      v140 = *(_OWORD*)a2;
      *((_QWORD*)&v140 + 1) = LANES128(v134).n128_u32[2];
      *(_OWORD*)a2 = v140;
      *a3 = 1078530011;
    }
  }
  math_Quat_FromYawPitchRoll((void*)(&v218), 0x1.2d97c80000000p+2f, 0x0.0p+0f,
                             0x0.0p+0f);
  v141 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a829d0));
  *(_QWORD*)&v142 = LANES128(v218).n128_u64[0];
  v143 = *v34;
  LANES128(v144).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v141, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v144).n128_u64[1] = v214;
  LANES128(v145).n128_u64[0] = 0;
  *(int8x8_t*)&LANES128(v145).n128_i8[8] =
      vqtbl1_s8(v141, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v146 = vmulq_f32(v145, v144);
  LANES128(v145).n128_u64[0] = v213;
  v147 = vmlaq_f32(vmulq_f32(v215, v141),
                   COERCE_AS(float32x4_t, GameData_1a83800), v146);
  LANES128(v146).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v141, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v145).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v141).n128_u64[0]), 1);
  v148 = vmlaq_f32(v147, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v145, v146));
  LANES128(v146).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v141, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v146).n128_i8[8] =
      vqtbl1_s8(v141, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v149 = vmlaq_f32(v148, v146, v212);
  LANES128(v141).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v146).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v150).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v149, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v141).n128_u64[1] = LANES128(v141).n128_u64[0];
  *((_QWORD*)&v142 + 1) = LANES128(v146).n128_u64[0];
  *(int8x8_t*)&LANES128(v150).n128_i8[8] =
      vqtbl1_s8(v149, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v145).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v149, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v151 = vmulq_f32(*(float32x4_t*)&v142, v150);
  *(int32x2_t*)&v142 =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v149).n128_u64[0]), 1);
  v152 = vmlaq_f32(vmulq_f32(v141, v149),
                   COERCE_AS(float32x4_t, GameData_1a83800), v151);
  LANES128(v151).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v145).n128_u64[1] = *(_QWORD*)&v142;
  LANES128(v146).n128_u64[1] = LANES128(v151).n128_u64[0];
  LANES128(v151).n128_u64[1] = LANES128(v218).n128_u64[0];
  LANES128(v153).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v149, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v153).n128_i8[8] =
      vqtbl1_s8(v149, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v154 = vmlsq_f32(vmlaq_f32(v152, COERCE_AS(float32x4_t, GameData_1a83800),
                             vmulq_f32(v151, v145)),
                   v153, v146);
  LANES128(v154).n128_u32[3] = 0;
  v217 = vaddq_f32(v221, v154);
  if ((game_zview_d16b40(v216, LANES128(v153).n128_f64[0],
                         LANES128(v154).n128_f64[0], LANES128(v146).n128_f64[0],
                         LANES128(v151).n128_f64[0], LANES128(v145).n128_f64[0],
                         v142, v143, (__int64)v220, (__int128*)&v219,
                         LANES128(v221).n128_u64, (__int64)&v217) &
       1) != 0) {
    LANES128(v155).n128_u64[0] = 0;
    LANES128(v156).n128_u64[0] = 0;
    v157 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v158).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v157, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v155).n128_u64[1] = LODWORD(v216);
    *(int8x8_t*)&LANES128(v156).n128_i8[8] =
        vqtbl1_s8(v157, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v159).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v155, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v160).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v155, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v155).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v155, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v158).n128_u64[1] = LANES128(v159).n128_u64[0];
    LANES128(v160).n128_u64[1] = LANES128(v160).n128_u64[0];
    LANES128(v159).n128_u64[1] = LANES128(v155).n128_u64[0];
    *(int32x2_t*)&LANES128(v155).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v157).n128_u64[0]), 1);
    LANES128(v161).n128_u64[0] = LANES128(v218).n128_u64[0];
    v162 = vmulq_f32(v156, v158);
    v163 = vmlaq_f32(vmulq_f32(v157, v160),
                     COERCE_AS(float32x4_t, GameData_1a83800), v162);
    LANES128(v162).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v157, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v164 = vmlaq_f32(v163, COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v155, v162));
    LANES128(v155).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v157, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v155).n128_i8[8] =
        vqtbl1_s8(v157, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v157).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v157).n128_u64[1] = LANES128(v157).n128_u64[0];
    v165 = vmlsq_f32(v164, v155, v159);
    LANES128(v155).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v159).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v165, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v161).n128_u64[1] = LANES128(v155).n128_u64[0];
    *(int8x8_t*)&LANES128(v159).n128_i8[8] =
        vqtbl1_s8(v165, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v162).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v165, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v166 = vmlaq_f32(vmulq_f32(v157, v165),
                     COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v161, v159));
    LANES128(v159).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v162).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v165).n128_u64[0]), 1);
    LANES128(v155).n128_u64[1] = LANES128(v159).n128_u64[0];
    LANES128(v159).n128_u64[1] = LANES128(v218).n128_u64[0];
    LANES128(v167).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v165, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v167).n128_i8[8] =
        vqtbl1_s8(v165, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v168 = vmlsq_f32(vmlaq_f32(v166, COERCE_AS(float32x4_t, GameData_1a83800),
                               vmulq_f32(v159, v162)),
                     v167, v155);
    LANES128(v168).n128_u32[3] = 0;
    v169 = vaddq_f32(v219, v168);
    v170 = LANES128(v221).n128_u32[1];
    v171 = v169;
    LANES128(v171).n128_u32[1] = LANES128(v221).n128_u32[1];
    v172 = vsubq_f32(v171, v221);
    v173 = vmulq_f32(v172, v172);
    LANES128(v173).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v173, v173, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v173).n128_u64[0])))
            .n64_u64[0];
    v174 = LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v173).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v173).n128_u64[0])))
               .n64_f32[0];
    if (v174 < v211) {
      *a2 = LANES128(v169).n128_u32[0];
      a2[1] = v170;
      v69 = 1;
      v211 = v174;
      v175 = *(_OWORD*)a2;
      *((_QWORD*)&v175 + 1) = LANES128(v169).n128_u32[2];
      *(_OWORD*)a2 = v175;
      *a3 = 1083624420;
    }
  }
  math_Quat_FromYawPitchRoll((void*)(&v218), 0x1.921fb60000000p+2f, 0x0.0p+0f,
                             0x0.0p+0f);
  v176 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a829d0));
  *(_QWORD*)&v177 = LANES128(v218).n128_u64[0];
  v178 = *v34;
  LANES128(v179).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v176, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v179).n128_u64[1] = v214;
  LANES128(v180).n128_u64[0] = 0;
  *(int8x8_t*)&LANES128(v180).n128_i8[8] =
      vqtbl1_s8(v176, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v181 = vmulq_f32(v180, v179);
  LANES128(v180).n128_u64[0] = v213;
  v182 = vmlaq_f32(vmulq_f32(v215, v176),
                   COERCE_AS(float32x4_t, GameData_1a83800), v181);
  LANES128(v181).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v176, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v180).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v176).n128_u64[0]), 1);
  v183 = vmlaq_f32(v182, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v180, v181));
  LANES128(v181).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v176, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v181).n128_i8[8] =
      vqtbl1_s8(v176, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v184 = vmlaq_f32(v183, v181, v212);
  LANES128(v176).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v181).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v185).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v184, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v176).n128_u64[1] = LANES128(v176).n128_u64[0];
  *((_QWORD*)&v177 + 1) = LANES128(v181).n128_u64[0];
  *(int8x8_t*)&LANES128(v185).n128_i8[8] =
      vqtbl1_s8(v184, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v180).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v184, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v186 = vmulq_f32(*(float32x4_t*)&v177, v185);
  *(int32x2_t*)&v177 =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v184).n128_u64[0]), 1);
  v187 = vmlaq_f32(vmulq_f32(v176, v184),
                   COERCE_AS(float32x4_t, GameData_1a83800), v186);
  LANES128(v186).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v180).n128_u64[1] = *(_QWORD*)&v177;
  LANES128(v181).n128_u64[1] = LANES128(v186).n128_u64[0];
  LANES128(v186).n128_u64[1] = LANES128(v218).n128_u64[0];
  LANES128(v188).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v184, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v188).n128_i8[8] =
      vqtbl1_s8(v184, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v189 = vmlsq_f32(vmlaq_f32(v187, COERCE_AS(float32x4_t, GameData_1a83800),
                             vmulq_f32(v186, v180)),
                   v188, v181);
  LANES128(v189).n128_u32[3] = 0;
  v217 = vaddq_f32(v221, v189);
  if ((game_zview_d16b40(v216, LANES128(v188).n128_f64[0],
                         LANES128(v189).n128_f64[0], LANES128(v181).n128_f64[0],
                         LANES128(v186).n128_f64[0], LANES128(v180).n128_f64[0],
                         v177, v178, (__int64)v220, (__int128*)&v219,
                         LANES128(v221).n128_u64, (__int64)&v217) &
       1) == 0) {
    return v69;
  }
  LANES128(v190).n128_u64[0] = 0;
  LANES128(v191).n128_u64[0] = 0;
  result = v69;
  v192 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v193).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v192, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v190).n128_u64[1] = LODWORD(v216);
  *(int8x8_t*)&LANES128(v191).n128_i8[8] =
      vqtbl1_s8(v192, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v194).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v190, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v195).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v190, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v190).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v190, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v193).n128_u64[1] = LANES128(v194).n128_u64[0];
  LANES128(v195).n128_u64[1] = LANES128(v195).n128_u64[0];
  LANES128(v194).n128_u64[1] = LANES128(v190).n128_u64[0];
  *(int32x2_t*)&LANES128(v190).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v192).n128_u64[0]), 1);
  LANES128(v196).n128_u64[0] = LANES128(v218).n128_u64[0];
  v197 = vmulq_f32(v191, v193);
  v198 = vmlaq_f32(vmulq_f32(v192, v195),
                   COERCE_AS(float32x4_t, GameData_1a83800), v197);
  LANES128(v197).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v192, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v199 = vmlaq_f32(v198, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v190, v197));
  LANES128(v190).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v192, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v190).n128_i8[8] =
      vqtbl1_s8(v192, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v192).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v192).n128_u64[1] = LANES128(v192).n128_u64[0];
  v200 = vmlsq_f32(v199, v190, v194);
  LANES128(v190).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v194).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v200, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v196).n128_u64[1] = LANES128(v190).n128_u64[0];
  *(int8x8_t*)&LANES128(v194).n128_i8[8] =
      vqtbl1_s8(v200, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v197).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v200, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v201 =
      vmlaq_f32(vmulq_f32(v192, v200), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v196, v194));
  LANES128(v194).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v218, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v197).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v200).n128_u64[0]), 1);
  LANES128(v190).n128_u64[1] = LANES128(v194).n128_u64[0];
  LANES128(v194).n128_u64[1] = LANES128(v218).n128_u64[0];
  LANES128(v202).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v200, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v202).n128_i8[8] =
      vqtbl1_s8(v200, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v203 = LANES128(v221).n128_u32[1];
  v204 = vmlsq_f32(vmlaq_f32(v201, COERCE_AS(float32x4_t, GameData_1a83800),
                             vmulq_f32(v194, v197)),
                   v202, v190);
  LANES128(v204).n128_u32[3] = 0;
  v205 = vaddq_f32(v219, v204);
  v206 = v205;
  LANES128(v206).n128_u32[1] = LANES128(v221).n128_u32[1];
  v207 = vsubq_f32(v206, v221);
  v208 = vmulq_f32(v207, v207);
  LANES128(v208).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v208, v208, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v208).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v208).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v208).n128_u64[0])))
          .n64_f32[0] < v211) {
    *a2 = LANES128(v205).n128_u32[0];
    a2[1] = v203;
    v209 = *(_OWORD*)a2;
    *((_QWORD*)&v209 + 1) = LANES128(v205).n128_u32[2];
    *(_OWORD*)a2 = v209;
    *a3 = 1086918619;
    return 1;
  }
  return result;
}

bool game_f8f140(float32x4_t* a1, float* a2)
{

#pragma clang fp contract(off)
  float v4;
  float v5;
  float32x4_t v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int128 v10;
  float v11;
  _BOOL4 v12;
  float v13;
  float v14;
  float32x4_t v15;
  int8x16_t v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float32x4_t v24;
  float v26;
  float32x4_t v27;

  if (a2 != nullptr) {
    v6 = COERCE_FLOAT32X4_T(
        ((long double (*)(float*)) * (_QWORD*)(*(_QWORD*)a2 + 40LL))(a2));
    v5 = a2[21];
    v4 = a2[22];
    LANES128(v6).n128_u32[3] = 0;
  }
  else {
    v6 = (__typeof__(v6)){0};
    v5 = 0x0.0p+0f;
    v4 = 0x0.0p+0f;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v7 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v8 = (v7 & 8) != 0 ? 2 : 3;
    if ((v8 & v7) == 0) {
      goto LABEL_35;
    }
  }
  v27 = v6;
  if (game_ProcFadeView_instance_ == 0 ||
      (*(float*)((v9 = game_ProcFadeView_instance_ +
                       ((unsigned __int64)*(
                            unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                        << 6)) +
                 172) != *(float*)(v9 + 168)
           ? (v10 = *(_OWORD*)(v9 + 208))
           : (__int128)((*(void (**)(unsigned __int64))(*(_QWORD*)(v9 + 160) +
                                                        16LL))(v9 + 160),
                        v6 = v27),
       *((float*)&v10 + 3) != 0x1.0000000000000p+0f)) {
    if (LANES128(a1[5]).n128_u8[0] == 1) {
    LABEL_19:
      if (*GameData_212d168 == 1) {
        v13 = 0x1.e000000000000p+5f;
      }
      else {
        v13 = 0x1.e000000000000p+4f;
      }
      v14 = 0x1.4000000000000p+2f;
      if (*GameData_212d168 == 1) {
        v14 = 0x1.4000000000000p+4f;
      }
      v15 = vsubq_f32(a1[3], v6);
      v16 = vmulq_f32(v15, v15);
      LANES128(v16).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
              .n64_u64[0];
      v26 = LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]))))
                .n64_f32[0] /
            v14;
      v17 = fmodf(LANES128(a1[4]).n128_f32[0] - v5, 0x1.6800000000000p+8f);
      if (v17 >= 0x0.0p+0f) {
        v18 = v17 + 0x0.0p+0f;
      }
      else {
        v18 = (float)(v17 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
      }
      if (v18 > 0x1.6800000000000p+7f) {
        v18 = v18 + -0x1.6800000000000p+8f;
      }
      v19 = fabsf(v18) / v13;
      v20 = fmodf(LANES128(a1[4]).n128_f32[1] - v4, 0x1.6800000000000p+8f);
      v21 = fmaxf(v19, 0x0.0p+0f);
      if (v20 >= 0x0.0p+0f) {
        v22 = v20 + 0x0.0p+0f;
      }
      else {
        v22 = (float)(v20 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
      }
      v23 = fminf(v21, 0x1.0000000000000p+0f);
      if (v22 > 0x1.6800000000000p+7f) {
        v22 = v22 + -0x1.6800000000000p+8f;
      }
      v6 = v27;
      v12 = (float)((float)((float)(fminf(fmaxf(v26, 0x0.0p+0f),
                                          0x1.0000000000000p+0f) +
                                    0x0.0p+0f) +
                            v23) +
                    fminf(fmaxf(fabsf(v22) / v13, 0x0.0p+0f),
                          0x1.0000000000000p+0f)) >= 0x1.0000000000000p+0f;
      goto LABEL_36;
    }
  LABEL_35:
    v12 = true;
    goto LABEL_36;
  }
  LODWORD(v11) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                              (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
                                 v9 + 160, *((float*)&v10 + 3)))
                     .n128_u32[3];
  v12 = true;
  if (v11 == 0x1.0000000000000p+0f) {
    v6 = v27;
    goto LABEL_36;
  }
  v6 = v27;
  if ((LANES128(a1[5]).n128_u8[0] & 1) != 0) {
    goto LABEL_19;
  }
LABEL_36:
  if (LANES128(a1[5]).n128_u8[0] == 1) {
    LANES128(a1[3]).n128_u64[0] = LANES128(v6).n128_u64[0];
    LANES128(a1[4]).n128_f32[0] = v5;
    v24 = a1[3];
    LANES128(v24).n128_u64[1] = LANES128(v6).n128_u32[2];
    v6 = v24;
  }
  else {
    LANES128(a1[4]).n128_f32[0] = v5;
    LANES128(a1[5]).n128_u8[0] = 1;
  }
  a1[3] = v6;
  LANES128(a1[4]).n128_f32[1] = v4;
  if (v12) {
    GameHr_f8eee0((__int64)a1);
  }
  return v12;
}

void game_f92170(__int64 a1)
{
  __int64 v1;
  char* v2;
  __int64* v3;
  __int64 v5;
  int v6;
  int* v8;
  int v9;
  int v10;
  unsigned __int16* v12;
  __int64* v13;
  __int64 v14;
  float32x4_t* v15;
  __int64 v16;
  __int64 v17;
  __int64* v19;
  __int64 v20;
  unsigned __int64 v21;
  int8x16_t v22;
  float v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  __int64 v32;
  int8x16_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  int8x16_t v41;
  __int64 v42;
  unsigned __int32 v43;
  float32x4_t v44;
  _QWORD* v45;
  float v46;
  __int64 v47;
  int8x16_t* v48;
  int v49;
  __int64 v50;
  float32x4_t v51;
  float32x4_t v52;
  struct {
    int8x16_t v53[4];
    char v54;
  } v53_;

  v1 = *(_QWORD*)(a1 + 160);
  v2 = &GameData_1a9f09e;
  if ((*(_BYTE*)(a1 + 152) & 1) == 0) {
    v1 = *(_BYTE*)(a1 + 152) >> 1;
  }
  switch (v1) {
  case 3LL:
    if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
      v12 = *(unsigned __int16**)(a1 + 168);
    }
    else {
      v12 = (unsigned __int16*)(a1 + 153);
    }
    if ((*v12 ^ 0xB8E6 | *((unsigned __int8*)v12 + 2) ^ 0xAF) == 0) {
      v2 = "Hub_000_A2:Obj_BirdWood_A000_002";
    }
    break;
  case 6LL:
    if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
      v8 = *(int**)(a1 + 168);
    }
    else {
      v8 = (int*)(a1 + 153);
    }
    v9 = *v8;
    v10 = *((unsigned __int16*)v8 + 2);
    if (v9 == -377319451 && v10 == 37761) {
      v2 = "Hub_000_A4:Obj_BirdWood_A000_001";
    }
    break;
  case 9LL:
    if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
      v3 = *(__int64**)(a1 + 168);
    }
    else {
      v3 = (__int64*)(a1 + 153);
    }
    if (*v3 == 0x9CE597A1E882B8E5LL && *((unsigned __int8*)v3 + 8) == 176) {
      v2 = "Obj_BirdWood_A000_001";
    }
    else {
      v5 = *v3;
      v6 = *((unsigned __int8*)v3 + 8);
      if (v5 == 0x8CE595A3E88CAFE5LL && v6 == 186) {
        v2 = "Hub_000_A7:Obj_BirdWood_A000_001";
      }
    }
    break;
  default:
    break;
  }
  v13 = GameData_212d458[0];
  v14 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v14 != 0) {
    v15 = *(float32x4_t**)(*GameData_212d458[0] + 72);
    v16 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
    v17 = std___1___shared_weak_count_lock(v16);
    std___1___shared_weak_count___release_weak_alt1(v14);
    if (v17 == 0 || v15 == nullptr) {
      if (v17 == 0) {
        return;
      }
    }
    else {
      v19 = (__int64*)GameData_212dbc0[0];
      v20 = *(_QWORD*)GameData_212dbc0[0];
      v21 = strlen(v2);
      game_hub_d6fba0((void*)((__int64)v53_.v53), v20, (__int64)v2, v21,
                      (__int64)"Loc_Perch_Bird_001");
      if (v53_.v54 == 1) {
        game_hub_d6fba0((void*)((__int64)v53_.v53), *v19, (__int64)v2, v21,
                        (__int64)"Loc_Perch_Bird_001");
        if (v53_.v54 == 1) {
          v22 = v53_.v53[3];
        }
        else {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
            v50 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v50;
            __cxa_guard_release(&GameData_21a6130);
          }
          v22 = COERCE_AS(int8x16_t, GameData_21a6120);
        }
        v51 = v22;
        v23 = GameRoutine_d70270(*v19, (__int64)v2, v21,
                                 (__int64)"Loc_Perch_Bird_001");
        math_Quat_FromYawPitchRoll((void*)(v53_.v53),
                                   v23 * 0x1.1df46a0000000p-6f, 0x0.0p+0f,
                                   0x0.0p+0f);
        LANES128(v24).n128_u64[0] = 0;
        v25 = vmulq_f32(v53_.v53[0], COERCE_AS(float32x4_t, GameData_1a829d0));
        LANES128(v26).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82a80),
                                 COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v27).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82a80),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v28).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v26).n128_u64[1] = LANES128(v26).n128_u64[0];
        LANES128(v28).n128_u64[1] = LANES128(v27).n128_u64[0];
        *(int8x8_t*)&LANES128(v24).n128_i8[8] =
            vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v29 = vmulq_f32(v24, v28);
        LANES128(v24).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v30).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82a80),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v27).n128_u64[1] = LANES128(v30).n128_u64[0];
        *(int32x2_t*)&LANES128(v30).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v25).n128_u64[0]), 1);
        v31 = vmlaq_f32(
            vmlaq_f32(vmulq_f32(v25, v26),
                      COERCE_AS(float32x4_t, GameData_1a83800), v29),
            COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v30, v24));
        LANES128(v30).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        v32 = *(_QWORD*)(LANES128(v15[1]).n128_u64[1] + 16);
        *(int8x8_t*)&LANES128(v30).n128_i8[8] =
            vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        LANES128(v25).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v53_.v53[0],
                                 COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v25).n128_u64[1] = LANES128(v25).n128_u64[0];
        v33 = vmlsq_f32(v31, v30, v27);
        LANES128(v30).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v53_.v53[0],
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v34).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v35).n128_u64[0] = LANES128(v53_.v53[0]).n128_u64[0];
        LANES128(v36).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v35).n128_u64[1] = LANES128(v30).n128_u64[0];
        *(int8x8_t*)&LANES128(v34).n128_i8[8] =
            vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        *(int32x2_t*)&LANES128(v36).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v33).n128_u64[0]), 1);
        v37 = vmlaq_f32(vmulq_f32(v25, v33),
                        COERCE_AS(float32x4_t, GameData_1a83800),
                        vmulq_f32(v35, v34));
        LANES128(v34).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v53_.v53[0],
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v30).n128_u64[1] = LANES128(v34).n128_u64[0];
        LANES128(v34).n128_u64[1] = LANES128(v53_.v53[0]).n128_u64[0];
        LANES128(v38).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v38).n128_i8[8] =
            vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v39 = vmlsq_f32(vmlaq_f32(v37, COERCE_AS(float32x4_t, GameData_1a83800),
                                  vmulq_f32(v34, v36)),
                        v38, v30);
        LANES128(v39).n128_u32[3] = 0;
        v52 = vaddq_f32(v51, v39);
        game_zview_d12d30(v32, (int32x2_t*)&v52, 1);
        v40 = vsubq_f32(
            v15[79],
            *(float32x4_t*)(*(_QWORD*)(LANES128(v15[1]).n128_u64[1] + 16) +
                            560LL));
        v41 = vmulq_f32(v40, v40);
        LANES128(v41).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v41, v41, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
                .n64_f32[0] > 0x1.0000000000000p-23f) {
          v42 = *(_QWORD*)(*v13 + 120);
          if ((*(_BYTE*)(v42 + 12) & 1) == 0) {
            *(_BYTE*)(v42 + 12) = 1;
          }
        }
        v43 = LANES128(v52).n128_u32[2];
        LANES128(v15[79]).n128_u64[0] = LANES128(v52).n128_u64[0];
        v44 = v15[79];
        LANES128(v44).n128_u64[1] = v43;
        v15[79] = v44;
        HubCharacterNatives_cabfc0((__int64)v15, 1);
        if ((LANES128(v15[83]).n128_u8[1] & 1) == 0) {
          LANES128(v15[83]).n128_u8[1] = 1;
        }
        v45 = *(_QWORD**)(LANES128(v15[1]).n128_u64[1] + 16);
        v46 = (float)(v23 + 0x1.6800000000000p+7f) * 0x1.1df46a0000000p-6f;
        if (v45[107] != 0) {
          v47 = v45[108];
          v45[107] = 0;
          v45[108] = 0;
          if (v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
            std___1___shared_weak_count___release_weak_alt1(v47);
          }
        }
        v48 = (int8x16_t*)v45[61];
        v49 = LANES128(v48[11]).n128_u8[4];
        LANES128(v48[2]).n128_f32[0] = v46;
        LANES128(v48[2]).n128_f32[1] = v46;
        if (v49 == 1) {
          LANES128(v48[11]).n128_u8[4] = 0;
        }
        CharacterRotate_d519c0(v48);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak_alt1(v17);
    }
  }
}

__int64 game_f9c820(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  struct {
    __int64 v13[3];
    int v14;
    char gap36_[4];
    __int64 v15;
    __int64 v16;
    __int16 v17;
    char gap58_[6];
    __int64 v18;
    __int64 v19;
    _QWORD v20[2];
    __int16 v21;
    char gap98_[22];
    __int16 v22;
    char gap122_[22];
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v13_;
  struct {
    _BYTE v28[11];
    char gap195_[1];
    int v29;
    __int16 v30;
    char gap202_[22];
    int v31;
    char gap228_[4];
    __int16 v32;
  } v28_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2229a40,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_2229a40) != 0) {
    GameData_2229408 = 0;
    GameData_2229410 = (__int64)game_f9ce00;
    GameData_22293c0 = 2;
    GameData_22293c8 = 0;
    GameData_22293d0 = 0;
    GameData_22293d8 = 0;
    GameData_22293e0 = 1;
    GameData_22293e8 = 0;
    GameData_22293f0 = 0;
    GameData_22293f8 = 0;
    GameData_2229400 = 13;
    GameData_2229418 = 0;
    GameData_2229420 = 0;
    GameData_2229428 = 0;
    GameData_2229430 = 0;
    GameData_2229438 = 0;
    GameData_2229440 = 2;
    GameData_2229448 = 0;
    GameData_2229450 = 0;
    GameData_2229458 = 0;
    GameData_2229460 = 3;
    GameData_2229468 = 0;
    GameData_2229470 = 0;
    GameData_2229478 = 0;
    GameData_2229480 = 13;
    GameData_2229488 = 0;
    GameData_2229490 = (__int64)GameHr_f9cf10;
    GameData_2229498 = 0;
    GameData_22294a0 = 0;
    GameData_22294a8 = 0;
    GameData_22294b0 = 0;
    GameData_22294b8 = 0;
    GameData_22294c0 = 15;
    GameData_22294c8 = 0;
    GameData_22294d0 = (__int64)GameRoutine_f9d200;
    GameData_22294d8 = 0;
    GameData_22294e0 = 0;
    GameData_22294e8 = 0;
    GameData_22294f0 = 0;
    GameData_22294f8 = 0;
    GameData_2229500 = 13;
    GameData_2229508 = 0;
    GameData_2229510 =
        (__int64)game_cmdbtl_anonymous_ProcCmdBtlSeqSupportAttack_CharaSetupPos;
    GameData_2229518 = 0;
    GameData_2229520 = 0;
    GameData_2229528 = 0;
    GameData_2229530 = 0;
    GameData_2229538 = 0;
    GameData_2229540 = 13;
    GameData_2229548 = 0;
    GameData_2229550 = (__int64)ProcCmdBtlSeqSupportAttack_f9d810;
    GameData_2229558 = 0;
    GameData_2229560 = 0;
    GameData_2229568 = 0;
    GameData_2229570 = 0;
    GameData_2229578 = 0;
    GameData_2229580 = 12;
    GameData_2229590 = 0;
    GameData_2229598 = 0;
    GameData_2229588 = 0;
    GameData_22295a0 = 4;
    GameData_22295a8 = 0;
    GameData_22295b0 = 0;
    GameData_22295b8 = 0;
    GameData_22295c0 = 2;
    GameData_22295c8 = 0;
    GameData_22295d0 = 0;
    GameData_22295d8 = 0;
    GameData_22295e0 = 2;
    GameData_22295e8 = 0;
    GameData_22295f0 = 0;
    GameData_22295f8 = 0;
    GameData_2229600 = 19;
    GameData_2229608 = 0;
    GameData_2229610 = (__int64)game_80a790_ptr[0];
    GameData_2229628 = 0;
    GameData_2229630 = 0;
    GameData_2229638 = 0;
    GameData_2229648 = 0;
    GameData_2229620 = 150;
    GameData_2229640 = 10;
    GameData_2229690 = (__int64)GameHr_f9cf10;
    GameData_2229800 = 3;
    GameData_2229660 = 0;
    GameData_2229668 = 0;
    GameData_2229670 = 0;
    GameData_2229678 = 0;
    GameData_2229680 = 13;
    GameData_2229688 = 0;
    GameData_2229698 = 0;
    GameData_22296a0 = 0;
    GameData_22296a8 = 0;
    GameData_22296b0 = 0;
    GameData_22296b8 = 0;
    GameData_22296c0 = 15;
    GameData_22296c8 = 0;
    GameData_22296d0 = (__int64)GameRoutine_f9d200;
    GameData_22296d8 = 0;
    GameData_22296e0 = 0;
    GameData_22296e8 = 0;
    GameData_22296f0 = 0;
    GameData_22296f8 = 0;
    GameData_2229700 = 13;
    GameData_2229708 = 0;
    GameData_2229710 =
        (__int64)game_cmdbtl_anonymous_ProcCmdBtlSeqSupportAttack_CharaSetupPos;
    GameData_2229718 = 0;
    GameData_2229720 = 0;
    GameData_2229728 = 0;
    GameData_2229750 = (__int64)ProcCmdBtlSeqSupportAttack_f9da60;
    GameData_2229730 = 0;
    GameData_2229738 = 0;
    GameData_2229740 = 13;
    GameData_2229748 = 0;
    GameData_2229758 = 0;
    GameData_2229760 = 0;
    GameData_2229768 = 0;
    GameData_2229770 = 0;
    GameData_2229778 = 0;
    GameData_2229790 = (__int64)ProcCmdBtlSeqSupportAttack_f9dc40;
    GameData_2229780 = 13;
    GameData_2229788 = 0;
    GameData_2229798 = 0;
    GameData_22297a0 = 0;
    GameData_22297a8 = 0;
    GameData_22297b0 = 0;
    GameData_22297b8 = 0;
    GameData_22297c0 = 13;
    GameData_22297c8 = 0;
    GameData_22297d0 = (__int64)ProcCmdBtlSeqSupportAttack_f9ddf0;
    GameData_22297d8 = 0;
    GameData_22297e0 = 0;
    GameData_22297e8 = 0;
    GameData_22297f0 = 0;
    GameData_22297f8 = 0;
    GameData_2229828 = 0;
    GameData_2229830 = 0;
    GameData_2229838 = 0;
    GameData_2229820 = 0;
    GameData_2229818 = 0;
    GameData_2229810 = 0;
    GameData_2229650 = (__int64)GameData_212c720;
    GameData_2229808 = 0;
    GameData_2229840 = 13;
    GameData_2229848 = 0;
    GameData_2229850 = (__int64)ProcCmdBtlSeqSupportAttack_f9df80;
    GameData_2229858 = 0;
    GameData_2229860 = 0;
    GameData_2229868 = 0;
    GameData_2229870 = 0;
    GameData_2229878 = 0;
    GameData_2229880 = 13;
    GameData_2229888 = 0;
    GameData_2229890 = (__int64)ProcCmdBtlSeqSupportAttack_f9d810;
    GameData_2229898 = 0;
    GameData_22298a0 = 0;
    GameData_22298a8 = 0;
    GameData_22298b0 = 0;
    GameData_22298b8 = 0;
    GameData_22298c0 = 19;
    GameData_22298c8 = 0;
    GameData_2229920 = 1;
    GameData_2229980 = 2;
    GameData_22298e8 = 0;
    GameData_22298f0 = 0;
    GameData_22298f8 = 0;
    GameData_2229900 = 4;
    GameData_2229918 = 0;
    GameData_2229910 = 0;
    GameData_2229908 = 0;
    GameData_2229928 = 0;
    GameData_2229930 = 500;
    GameData_2229938 = 0;
    GameData_2229940 = 12;
    GameData_2229948 = 0;
    GameData_2229950 = 0;
    GameData_2229958 = 0;
    GameData_2229960 = 4;
    GameData_2229968 = 0;
    GameData_2229970 = 0;
    GameData_2229978 = 0;
    GameData_2229998 = 0;
    GameData_2229990 = 0;
    GameData_2229988 = 0;
    GameData_22299a0 = 4;
    GameData_22299a8 = 0;
    GameData_22299b0 = 0;
    GameData_22299b8 = 0;
    GameData_22299c0 = 13;
    GameData_22299c8 = 0;
    GameData_22299d0 = (__int64)GameRoutine_f9e050;
    GameData_22299d8 = 0;
    GameData_22299e0 = 0;
    GameData_22299e8 = 0;
    GameData_22299f0 = 0;
    GameData_22299f8 = 0;
    GameData_22298d0 = (__int64)GameData_212d060[0];
    GameData_2229a00 = 0;
    GameData_2229a28 = 0;
    GameData_2229a30 = 0;
    GameData_2229a38 = 0;
    GameData_2229a08 = 0;
    GameData_2229a10 = 0;
    GameData_2229a18 = 0;
    GameData_2229a20 = 0;
    GameData_22298e0 = 250;
    __cxa_guard_release_alt1((__int64)&GameData_2229a40);
  }
  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  v3 = GameData_212c608[0];
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_WORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = "NULL";
  *(_QWORD*)(v2 + 138) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)v2 = v3 + 16;
  *(_QWORD*)(v2 + 8) = 0;
  game_ProcInst_Register(v2);
  *(_QWORD*)(v2 + 160) = 0;
  *(_QWORD*)(v2 + 168) = 0;
  *(_QWORD*)(v2 + 176) = 0;
  *(_QWORD*)(v2 + 184) = 0;
  *(_QWORD*)v2 = game_cmdbtl_anonymous_ProcCmdBtlSeqSupportAttack_vtable;
  v4 = *(_QWORD*)(*GameData_212ea58 + 1232);
  v5 = *(_QWORD*)(*GameData_212ea58 + 1240);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
  }
  v6 = std___1___shared_weak_count_lock_alt1(v5);
  std___1___shared_weak_count___release_weak_alt2(v5);
  v7 = *(__int64**)GameData_2130f48;
  if (*(_QWORD*)GameData_2130f48 != 0) {
    v8 = *(_QWORD*)(v4 + 16);
    v9 = (_QWORD*)v7[206];
    v13_.v14 = 0;
    v13_.v13[1] = 0;
    v13_.v13[2] = 0;
    v13_.v21 = 0;
    v13_.v22 = 0;
    v10 = *(_QWORD*)(v8 + 392);
    v13_.v17 = 15;
    v28_.v29 = -1;
    v13_.v18 = 0;
    v13_.v19 = 0;
    v13_.v20[0] = 0;
    *(_QWORD*)((char*)v13_.v20 + 7) = 0;
    v13_.v23 = 0;
    v13_.v24 = 0;
    v13_.v25 = 0;
    v13_.v26 = 0;
    v13_.v27 = 0;
    memset(v28_.v28, 0, sizeof(v28_.v28));
    v28_.v30 = 0;
    v28_.v31 = 0;
    LODWORD(v13_.v13[0]) = 9;
    v28_.v32 = 0;
    v13_.v15 = v10;
    v13_.v16 = 0;
    if ((unsigned __int64)v9 >= v7[207]) {
      v11 = TelopParts_17cd840_alt1(v7 + 205, v13_.v13);
    }
    else {
      TelopParts_17cdaa0(v9, v13_.v13);
      v11 = v9 + 31;
    }
    v7[206] = (__int64)v11;
    TelopParts_17cbd60_alt1((__int64)v13_.v13);
  }
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt2(v6);
  }
  return ProcInst_657850(v2, (__int64)&GameData_22293c0,
                         (__int64)"ProcCmdBtlSeqSupportAttack", 1, a1);
}

__int64 game_fba950(__int64 a1, char* a2, int a3, __int64 a4)
{
  float v5;
  float v6;
  float v7;
  float v8;
  bool v9;
  float v10;
  float v11;
  float v12;
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
  float v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;
  __int64 v28;
  float32x4_t v29;
  float v30;
  float32x4_t v31;
  float v32;
  float32x4_t v33;
  float v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float v39;
  float v40;
  float v41;
  float v42;
  struct {
    float32x4_t v43;
    char gap64_[88];
    float v44;
    float v45;
  } v43_;

  v5 = fabsf(COERCE_FLOAT(*(_OWORD*)a4));
  LODWORD(v6) = *(_QWORD*)(a4 + 8);
  v7 = 0x1.0e00000000000p+8f;
  v8 = fabsf(v6);
  if (COERCE_FLOAT(*(_OWORD*)a4) > 0x0.0p+0f) {
    v7 = 0x1.6800000000000p+6f;
  }
  v9 = v6 <= 0x0.0p+0f;
  v10 = 0x1.6800000000000p+7f;
  if (!v9) {
    v10 = 0x0.0p+0f;
  }
  if (v5 <= v8) {
    v11 = v10;
  }
  else {
    v11 = v7;
  }
  v12 = (float)(PSEUDO_UNFUSED(v11 * 0x1.1df46a0000000p-6f)) +
        (float)(roundf((float)(v11 * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v12 <= 0x1.921fb60000000p+0f) {
    v14 = 0x1.0000000000000p+0f;
    if (v12 >= -0x1.921fb60000000p+0f) {
      goto LABEL_13;
    }
    v13 = -0x1.921fb60000000p+1f;
  }
  else {
    v13 = 0x1.921fb60000000p+1f;
  }
  v14 = -0x1.0000000000000p+0f;
  v12 = v13 - v12;
LABEL_13:
  v15 = *(float*)GameData_212c190;
  v16 = *((float*)GameData_212c190 + 1);
  v17 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v18 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v19 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v20 = *(float*)GameData_212c188;
  v21 = *((float*)GameData_212c188 + 1);
  v22 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v23 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v24 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v25 = (float)((float)((float)(unsigned int)(*a2 + 256) *
                        0x1.4000000000000p+2f) +
                0x1.4000000000000p+1f) +
        -0x1.4000000000000p+10f;
  v26 = (float)((float)((float)(unsigned int)(a2[1] + 256) *
                        0x1.4000000000000p+2f) +
                0x1.4000000000000p+1f) +
        -0x1.4000000000000p+10f;
  if (GameData_21ca2e8 != 0) {
    v27 = a1;
    v43_.v44 = v14;
    v43_.v45 = v11;
    v41 = v20;
    v42 = v15;
    v39 = v26;
    v28 = *(_QWORD*)(GameData_21ca2e8 + 61456);
    v40 = v21;
    LANES128(v29).n128_u64[0] = __PAIR64__(
        COERCE_UNSIGNED_INT(Height_7c4d10(v28, v25, v26)), LODWORD(v25));
    LANES128(v29).n128_u64[1] = LODWORD(v39);
    v43_.v43 = v29;
    v30 = Height_7c4d10(v28, LANES128(v29).n128_f32[0], v39);
    v21 = v40;
    v20 = v41;
    v15 = v42;
    v14 = v43_.v44;
    v11 = v43_.v45;
    a1 = v27;
  }
  else {
    LANES128(v31).n128_u64[0] = LODWORD(v25);
    v30 = 0x0.0p+0f;
    LANES128(v31).n128_u64[1] = LODWORD(v26);
    v43_.v43 = v31;
  }
  LANES128(v43_.v43).n128_f32[1] = v30;
  v32 = -(
      float)(v24 -
             (float)((float)(v23 +
                             (float)((float)-(
                                         float)(v22 -
                                                (float)((float)(v21 -
                                                                (float)(v20 *
                                                                        (float)(v12 *
                                                                                v12))) *
                                                        (float)(v12 * v12))) *
                                     (float)(v12 * v12))) *
                     (float)(v12 * v12)));
  LANES128(v33).n128_u32[1] = 0;
  LANES128(v33).n128_u32[3] = 0;
  v34 = (float)(unsigned int)(a3 - 1) * 0x1.4000000000000p+1f;
  if (a3 <= 0) {
    v34 = 0x0.0p+0f;
  }
  LANES128(v35).n128_u64[0] = 0x4020000040200000LL;
  LANES128(v35).n128_u64[1] = 0x4020000040200000LL;
  LANES128(v33).n128_f32[2] =
      v14 * (float)((float)(v32 * (float)(v12 * v12)) + 0x1.0000000000000p+0f);
  LANES128(v33).n128_f32[0] =
      v12 *
      (float)((float)((float)-(
                          float)(v19 -
                                 (float)((float)(v18 +
                                                 (float)((float)-(
                                                             float)(v17 -
                                                                    (float)((float)(v16 -
                                                                                    (float)(v15 *
                                                                                            (float)(v12 *
                                                                                                    v12))) *
                                                                            (float)(v12 *
                                                                                    v12))) *
                                                         (float)(v12 * v12))) *
                                         (float)(v12 * v12))) *
                      (float)(v12 * v12)) +
              0x1.0000000000000p+0f);
  v36 = vaddq_f32(vmulq_n_f32(vmulq_f32(v33, v35), (float)a3), v43_.v43);
  LANES128(v37).n128_u64[0] = __PAIR64__(0x1.4000000000000p+1f, LODWORD(v34));
  LANES128(v37).n128_u64[1] = LODWORD(v34);
  v43_.v43 = vaddq_f32(v37, v36);
  return game_fbb5a0(a1, (__int128*)&v43_.v43, v11) & 1;
}

void game_fe66a0()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  __int64 v2;

  GameData_2231e70 = (__int64)"hub::math";
  GameData_2231e78 = (__int64)game_script_hub_math_Lerp;
  v0 = GameData_212bf18[0];
  GameData_2231eb0 = (__int64)"hub::math";
  GameData_2231eb8 = (__int64)game_script_hub_math_Linearstep;
  GameData_2231e80 = 0;
  GameData_2231e88 = 0;
  GameData_2231e90 = 0;
  GameData_2231ec0 = 0;
  GameData_2231ec8 = 0;
  GameData_2231ed0 = 0;
  v1 = *GameData_212bf18[0];
  GameData_2231e98 = 2;
  GameData_2231ed8 = 2;
  GameData_2231ea0 = (__int64)"float Lerp(float from, float to, float t)";
  GameData_2231ea8 = v1;
  GameData_2231ee0 =
      (__int64)"float Linearstep(float edge0, float edge1, float x)";
  GameData_2231ee8 = (__int64)&GameData_2231e70;
  v2 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_2231e60;
  GameData_2231f00 = 0;
  GameData_2231f08 = 0;
  GameData_2231f10 = 0;
  GameData_2231f18 = 2;
  GameData_2231e60 = (__int64)"hub::math";
  GameData_2231e68 = v2;
  GameData_2231ef0 = (__int64)"hub::math";
  GameData_2231ef8 = (__int64)game_script_hub_math_MoveTowards;
  GameData_2231f20 =
      (__int64)"float MoveTowards(float current, float target, float maxDelta)";
  GameData_2231f28 = (__int64)&GameData_2231eb0;
  GameData_2231f30 = (__int64)"hub::math";
  GameData_2231f38 = (__int64)game_script_hub_math_CornerAngleRadian;
  GameData_2231f40 = 0;
  GameData_2231f48 = 0;
  GameData_2231f50 = 0;
  GameData_2231f58 = 2;
  GameData_2231f60 =
      (__int64)"float CornerAngleRadian(float angle1, float angle2)";
  GameData_2231f68 = (__int64)&GameData_2231ef0;
  GameData_2231f70 = (__int64)"hub::math";
  GameData_2231f78 = (__int64)game_script_hub_math_CornerAngleDegree;
  GameData_2231f90 = 0;
  GameData_2231f80 = 0;
  GameData_2231f88 = 0;
  GameData_2231f98 = 2;
  GameData_2231fa0 =
      (__int64)"float CornerAngleDegree(float angle1, float angle2)";
  GameData_2231fa8 = (__int64)&GameData_2231f30;
  *v0 = (__int64)&GameData_2231fb0;
  GameData_2231fd0 = 0;
  GameData_2231fc0 = 0;
  GameData_2231fc8 = 0;
  GameData_2231fd8 = 2;
  GameData_2231fb0 = (__int64)"hub::math";
  GameData_2231fb8 = (__int64)hub_math_EaseInOutRate;
  GameData_2231fe0 =
      (__int64)"float EaseInOutRate(float weight, float easeRate)";
  GameData_2231fe8 = (__int64)&GameData_2231f70;
}

__int64 game_100ff50()
{
  __int64* v0;
  char* v1;
  char* v2;

  strcpy(&GameData_22336f0, "&UI/3DUI/3DUI_Cursor");
  v0 = (__int64*)fw_memory_g_heap_manager_ptr;
  v1 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  GameData_2233710 = 26;
  GameData_2233718 = (__int64)v1;
  GameData_2233708 = 33;
  strcpy(v1, "UI/3DUI/3DUI_Cursor_Select");
  v2 = (char*)fw_memory_HeapManager_Allocate(*v0, 32, 16, 0);
  GameData_2233720 = 33;
  GameData_2233728 = 25;
  GameData_2233730 = (__int64)v2;
  strcpy(v2, "UI/3DUI/3DUI_Cursor_Color");
  return GameRoutine_2b0();
}

__int64 game_1034e80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 result;
  char v19;
  _DWORD v20[12];

  v4 = a4;
  if (a4 == 0) {
    v7 = game_HashString((__int64)"NoMap");
    if (v7 == 0) {
      goto LABEL_26;
    }
    v8 = *(_QWORD*)(GameData_21c9f40 + 96);
    if (v8 == 0 || *(_QWORD*)(GameData_21c9f40 + 112) == 0) {
      goto LABEL_26;
    }
    v10 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v11 = v7;
      if (v7 >= v8) {
        v11 = v7 % v8;
      }
    }
    else {
      v11 = v10 & v7;
    }
    v12 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v11);
    if (v12 == nullptr || (v13 = (_QWORD*)*v12) == nullptr) {
    LABEL_26:
      v4 = 0;
      goto LABEL_27;
    }
    if ((v8 & v10) == 0) {
      while (1) {
        v15 = v13[1];
        if (v15 == v7) {
          if (v13[2] == v7) {
            goto LABEL_34;
          }
        }
        else if ((v15 & v10) != v11) {
          goto LABEL_26;
        }
        v13 = (_QWORD*)*v13;
        v4 = 0;
        if (v13 == nullptr) {
          goto LABEL_27;
        }
      }
    }
    do {
      v14 = v13[1];
      if (v14 == v7) {
        if (v13[2] == v7) {
        LABEL_34:
          v4 = v13[3];
          break;
        }
      }
      else {
        if (v14 >= v8) {
          v14 %= v8;
        }
        if (v14 != v11) {
          goto LABEL_26;
        }
      }
      v13 = (_QWORD*)*v13;
      v4 = 0;
    } while (v13 != nullptr);
  }
LABEL_27:
  MapSimulator_102b410_alt1((void*)((__int64)v20), a3);
  *(_DWORD*)(a1 + 8) = v20[0];
  MapSimulator_102b410_alt1((void*)((__int64)v20), a3);
  *(_DWORD*)(a1 + 12) = v20[2];
  v16 = *(float*)(v4 + 120);
  v17 = fmodf(v16, 0x1.6800000000000p+8f);
  if (v16 < 0x0.0p+0f) {
    v17 = v17 + 0x1.6800000000000p+8f;
  }
  *(float*)(a1 + 4) = v17;
  *(_DWORD*)a1 = *(_DWORD*)(v4 + 96);
  result = (__int64)game_8224a0(0x1Fu);
  v19 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)result);
    v19 = result != 0 && *(_DWORD*)(result + 32) == 1;
  }
  *(_BYTE*)(a1 + 16) = v19;
  return result;
}

__attribute__((swiftcall)) void game_108dd30(PSEUDO_X8 x8_, __int64 a1,
                                             char* a2, float32x4_t* a3,
                                             float32x4_t* a4, int8x16_t* a5,
                                             long double a7)
{
  _QWORD* a6 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v7;
  int8x16_t v8;
  _QWORD* v9;
  __int64 v10;
  char* v11;
  float32x4_t* v12;
  int v13;
  int8x16_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  double v18;
  long double v19;
  float v20;
  long double v21;
  long double v22;
  long double v23;
  float32x4_t v24;
  double v25;
  float32x4_t v26;
  unsigned __int32 v27;
  long double v28;
  int8x16_t v29;
  int32x4_t v30[4];
  float32x4_t v31;

  v7 = *a4;
  v31 = (__typeof__(v31)){0};
  v8 = vmulq_f32(v7, v7);
  LANES128(v8).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_f32[0] > 0x1.a36e2e0000000p-14f) {
    v9 = a6;
    v10 = a1;
    v11 = a2;
    v12 = a3;
    v13 = LODWORD(a7);
    GameRoutine_622450((void*)(v30), a3, a4, a5);
    Quat_624bc0((void*)(&v29), (__int64)v30);
    v14 = vmulq_f32(v29, COERCE_AS(float32x4_t, GameData_1a829d0));
    v15 = vmulq_f32(v29, v29);
    LANES128(v15).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
            .n64_u64[0];
    LANES128(v15).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
            .n64_u64[0];
    LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
    v16 = vrecpeq_f32(v15);
    v17 = vmulq_f32(v16, vrecpsq_f32(v16, v15));
    v29 = vbslq_s8(vceqzq_f32(v15), v14,
                   vmulq_f32(v14, vmulq_f32(v17, vrecpsq_f32(v17, v15))));
    LANES128(v15).n128_f32[0] =
        vmuls_lane_f32(LANES128(v29).n128_f32[1], v29, 2) +
        (float)(LANES128(v29).n128_f32[0] * LANES128(v29).n128_f32[3]);
    v18 = vmuls_lane_f32(LANES128(v29).n128_f32[1],
                         COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]), 1);
    v19 = atan2(LANES128(v15).n128_f32[0] + LANES128(v15).n128_f32[0],
                (LANES128_OF(vmulq_f32(v29, v29)).n128_f32[0] + v18) *
                        -0x1.0000000000000p+1 +
                    0x1.0000000000000p+0);
    *(float*)&v19 = *(double*)&v19;
    v28 = v19;
    *((_QWORD*)&v22 + 1) = LANES128(v29).n128_u64[1];
    v20 = vmuls_lane_f32(-LANES128(v29).n128_f32[0], v29, 2) +
          (float)(LANES128(v29).n128_f32[1] * LANES128(v29).n128_f32[3]);
    *(_QWORD*)&v21 = -0x1.0000000000000p+0;
    *(double*)&v22 = v20 + v20;
    if (*(double*)&v22 > 0x1.0000000000000p+0) {
      *(double*)&v22 = 0x1.0000000000000p+0;
    }
    if (*(double*)&v22 < -0x1.0000000000000p+0) {
      *(double*)&v22 = -0x1.0000000000000p+0;
    }
    v23 = asin(v22, v21);
    *(float*)&v23 = *(double*)&v23;
    v27 = LODWORD(v23);
    *(float*)&v23 =
        vmuls_lane_f32(LANES128(v29).n128_f32[0],
                       COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]), 1);
    a7 = atan2((float)(*(float*)&v23 + (float)(LANES128(v29).n128_f32[2] *
                                               LANES128(v29).n128_f32[3])) +
                   (float)(*(float*)&v23 + (float)(LANES128(v29).n128_f32[2] *
                                                   LANES128(v29).n128_f32[3])),
               (v18 + vmuls_lane_f32(LANES128(v29).n128_f32[2], v29, 2)) *
                       -0x1.0000000000000p+1 +
                   0x1.0000000000000p+0);
    v24 = *(float32x4_t*)&v28;
    v25 = *(double*)&a7;
    LODWORD(a7) = v13;
    a6 = v9;
    a1 = v10;
    a2 = v11;
    a3 = v12;
    *(float*)&v25 = v25;
    LANES128(v24).n128_u32[1] = v27;
    LANES128(v24).n128_u32[2] = LODWORD(v25);
    v26 = vmulq_f32(v24, vdupq_n_s32(0x42652EE1u));
    LANES128(v24).n128_u64[0] = LANES128(v26).n128_u64[0];
    LANES128(v24).n128_u64[1] = LANES128(v26).n128_u32[2];
    v31 = v24;
  }
  game_108d130((void*)(a6), a1, a2, a3, (__int64*)&v31, a7);
}

__attribute__((swiftcall)) void

game_108df10(PSEUDO_X8 x8_, __int64 a1, char* a2, int8x16_t* a3, long double a5)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v5;
  float32x4_t v6;
  int8x16_t v7;
  _QWORD* v8;
  __int64 v9;
  char* v10;
  int v11;
  int8x16_t v12;
  int8x16_t v13;
  float32x4_t v14;
  float32x4_t v15;
  double v16;
  long double v17;
  float v18;
  long double v19;
  long double v20;
  long double v21;
  float32x4_t v22;
  double v23;
  float32x4_t v24;
  unsigned __int32 v25;
  long double v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  int32x4_t v31[4];
  float32x4_t v32;

  v5 = a3[2];
  v6 = a3[3];
  v32 = (__typeof__(v32)){0};
  v28 = v5;
  v29 = v6;
  v7 = vmulq_f32(v5, v5);
  v27 = a3[1];
  LANES128(v7).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v7, v7, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
          .n64_f32[0] > 0x1.a36e2e0000000p-14f) {
    v8 = a4;
    v9 = a1;
    v10 = a2;
    v11 = LODWORD(a5);
    GameRoutine_622450((void*)(v31), &v29, &v28, &v27);
    Quat_624bc0((void*)(&v30), (__int64)v31);
    v12 = vmulq_f32(v30, COERCE_AS(float32x4_t, GameData_1a829d0));
    v13 = vmulq_f32(v30, v30);
    LANES128(v13).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
            .n64_u64[0];
    LANES128(v13).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
            .n64_u64[0];
    LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
    v14 = vrecpeq_f32(v13);
    v15 = vmulq_f32(v14, vrecpsq_f32(v14, v13));
    v30 = vbslq_s8(vceqzq_f32(v13), v12,
                   vmulq_f32(v12, vmulq_f32(v15, vrecpsq_f32(v15, v13))));
    LANES128(v13).n128_f32[0] =
        vmuls_lane_f32(LANES128(v30).n128_f32[1], v30, 2) +
        (float)(LANES128(v30).n128_f32[0] * LANES128(v30).n128_f32[3]);
    v16 = vmuls_lane_f32(LANES128(v30).n128_f32[1],
                         COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]), 1);
    v17 = atan2(LANES128(v13).n128_f32[0] + LANES128(v13).n128_f32[0],
                (LANES128_OF(vmulq_f32(v30, v30)).n128_f32[0] + v16) *
                        -0x1.0000000000000p+1 +
                    0x1.0000000000000p+0);
    *(float*)&v17 = *(double*)&v17;
    v26 = v17;
    *((_QWORD*)&v20 + 1) = LANES128(v30).n128_u64[1];
    v18 = vmuls_lane_f32(-LANES128(v30).n128_f32[0], v30, 2) +
          (float)(LANES128(v30).n128_f32[1] * LANES128(v30).n128_f32[3]);
    *(_QWORD*)&v19 = -0x1.0000000000000p+0;
    *(double*)&v20 = v18 + v18;
    if (*(double*)&v20 > 0x1.0000000000000p+0) {
      *(double*)&v20 = 0x1.0000000000000p+0;
    }
    if (*(double*)&v20 < -0x1.0000000000000p+0) {
      *(double*)&v20 = -0x1.0000000000000p+0;
    }
    v21 = asin(v20, v19);
    *(float*)&v21 = *(double*)&v21;
    v25 = LODWORD(v21);
    *(float*)&v21 =
        vmuls_lane_f32(LANES128(v30).n128_f32[0],
                       COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]), 1);
    a5 = atan2((float)(*(float*)&v21 + (float)(LANES128(v30).n128_f32[2] *
                                               LANES128(v30).n128_f32[3])) +
                   (float)(*(float*)&v21 + (float)(LANES128(v30).n128_f32[2] *
                                                   LANES128(v30).n128_f32[3])),
               (v16 + vmuls_lane_f32(LANES128(v30).n128_f32[2], v30, 2)) *
                       -0x1.0000000000000p+1 +
                   0x1.0000000000000p+0);
    v22 = *(float32x4_t*)&v26;
    v23 = *(double*)&a5;
    LODWORD(a5) = v11;
    a4 = v8;
    a1 = v9;
    a2 = v10;
    *(float*)&v23 = v23;
    LANES128(v22).n128_u32[1] = v25;
    LANES128(v22).n128_u32[2] = LODWORD(v23);
    v24 = vmulq_f32(v22, vdupq_n_s32(0x42652EE1u));
    LANES128(v22).n128_u64[0] = LANES128(v24).n128_u64[0];
    LANES128(v22).n128_u64[1] = LANES128(v24).n128_u32[2];
    v32 = v22;
  }
  game_108d130((void*)(a4), a1, a2, &v29, (__int64*)&v32, a5);
}

__attribute__((swiftcall)) void game_108e100(PSEUDO_X8 x8_, __int64 a1,
                                             char* a2, const char* a3, float a5)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v7;
  __int64 v10;
  __int64 v11;
  char* v15;
  float32x4_t* v16;
  unsigned __int64 v17;
  float32x4_t* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  float v22;
  double v23;
  long double v24;
  float v25;
  long double v26;
  long double v27;
  long double v28;
  float32x4_t v29;
  long double v30;
  float32x4_t v31;
  float32x4_t v32;
  unsigned int v33;
  unsigned int v34;
  struct {
    float32x4_t v35;
    unsigned __int64 v36;
    unsigned __int64 v37;
    unsigned __int64 v38;
    unsigned __int64 v39;
    unsigned __int64 v40;
    unsigned __int64 v41;
  } v35_;
  int8x16_t v42;

  if (a2 == nullptr) {
    goto LABEL_16;
  }
  v6 = *(_QWORD*)(a1 + 32);
  if (v6 == 0) {
    GameData_2235720 = 0;
    goto LABEL_16;
  }
  v7 = *(_QWORD*)(a1 + 40);
  if (*(_QWORD*)(v6 + 8) == -1 || v7 == 0) {
    GameData_2235720 = 0;
    goto LABEL_11;
  }
  if ((*(_BYTE*)(v7 + 340) & 1) != 0) {
  LABEL_16:
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         296, 16, 0);
    *(_QWORD*)(v10 + 16) = 0;
    v11 = GameData_2131678;
    *(_DWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_DWORD*)(v10 + 48) = 0x2000;
    *(_DWORD*)(v10 + 104) = 0;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_WORD*)(v10 + 80) = 0;
    *(_WORD*)(v10 + 116) = 0;
    *(_WORD*)(v10 + 136) = 0;
    *(_BYTE*)(v10 + 160) = 0;
    *(_BYTE*)(v10 + 288) = 0;
    *(_QWORD*)(v10 + 272) = 0;
    *(_QWORD*)(v10 + 280) = 0;
    *(_QWORD*)(v10 + 256) = 0;
    *(_QWORD*)(v10 + 264) = 0;
    *(_QWORD*)(v10 + 240) = 0;
    *(_QWORD*)(v10 + 248) = 0;
    *(_QWORD*)(v10 + 224) = 0;
    *(_QWORD*)(v10 + 232) = 0;
    *(_QWORD*)(v10 + 208) = 0;
    *(_QWORD*)(v10 + 216) = 0;
    *(_QWORD*)(v10 + 192) = 0;
    *(_QWORD*)(v10 + 200) = 0;
    *(_QWORD*)(v10 + 176) = 0;
    *(_QWORD*)(v10 + 184) = 0;
    *(_QWORD*)(v10 + 168) = 0;
    *(_QWORD*)(v10 + 120) = 0;
    *(_DWORD*)(v10 + 127) = 0;
    a4[1] = v10;
    *(_QWORD*)v10 = v11 + 16;
    *(_QWORD*)(v10 + 8) = 0;
    *(_WORD*)(v10 + 108) = 256;
    *(_DWORD*)(v10 + 112) = -1082130432;
    *(_DWORD*)(v10 + 292) = 2;
    *(_QWORD*)(v10 + 24) = 0;
    *a4 = v10 + 24;
    return;
  }
LABEL_11:
  if (*(_QWORD*)(v6 + 8) == -1 || v7 == 0) {
    goto LABEL_16;
  }
  v15 = a3 != nullptr ? (char*)a3 : "-Loc_C_Center";
  v16 = (float32x4_t*)CharacterBuilder_1084a50(v7, v15);
  if (v16 == nullptr) {
    goto LABEL_16;
  }
  v17 = LANES128(v16[3]).n128_u64[1];
  v18 = v16;
  v35_.v39 = LANES128(v16[2]).n128_u64[1];
  v35_.v41 = v17;
  v19 = LANES128(v16[1]).n128_u64[1];
  LANES128(v35_.v35).n128_u64[1] = LANES128(*(v16)).n128_u64[1];
  v35_.v37 = v19;
  v20 = LANES128(*(v16)).n128_u64[0];
  v35_.v36 = LANES128(v16[1]).n128_u64[0];
  LANES128(v35_.v35).n128_u64[0] = v20;
  v21 = LANES128(v16[3]).n128_u64[0];
  v35_.v38 = LANES128(v16[2]).n128_u64[0];
  v35_.v40 = v21;
  Quat_624bc0((void*)(&v42), (__int64)&v35_.v35);
  v22 = vmuls_lane_f32(LANES128(v42).n128_f32[1], v42, 2) +
        (float)(LANES128(v42).n128_f32[0] * LANES128(v42).n128_f32[3]);
  v23 = vmuls_lane_f32(LANES128(v42).n128_f32[1],
                       COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]), 1);
  v24 = atan2(v22 + v22, (LANES128_OF(vmulq_f32(v42, v42)).n128_f32[0] + v23) *
                                 -0x1.0000000000000p+1 +
                             0x1.0000000000000p+0);
  *(float*)&v24 = *(double*)&v24;
  v34 = LODWORD(v24);
  *((_QWORD*)&v27 + 1) = LANES128(v42).n128_u64[1];
  v25 = vmuls_lane_f32(-LANES128(v42).n128_f32[0], v42, 2) +
        (float)(LANES128(v42).n128_f32[1] * LANES128(v42).n128_f32[3]);
  *(_QWORD*)&v26 = -0x1.0000000000000p+0;
  *(double*)&v27 = v25 + v25;
  if (*(double*)&v27 > 0x1.0000000000000p+0) {
    *(double*)&v27 = 0x1.0000000000000p+0;
  }
  if (*(double*)&v27 < -0x1.0000000000000p+0) {
    *(double*)&v27 = -0x1.0000000000000p+0;
  }
  v28 = asin(v27, v26);
  v29 = v42;
  *(float*)&v28 = *(double*)&v28;
  v33 = LODWORD(v28);
  *(float*)&v28 =
      vmuls_lane_f32(LANES128(v29).n128_f32[0],
                     COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]), 1);
  v30 = atan2((float)(*(float*)&v28 + (float)(LANES128(v42).n128_f32[2] *
                                              LANES128(v42).n128_f32[3])) +
                  (float)(*(float*)&v28 + (float)(LANES128(v42).n128_f32[2] *
                                                  LANES128(v42).n128_f32[3])),
              (v23 + vmuls_lane_f32(LANES128(v29).n128_f32[2], v29, 2)) *
                      -0x1.0000000000000p+1 +
                  0x1.0000000000000p+0);
  *(float*)&v30 = *(double*)&v30;
  LANES128(v31).n128_u64[0] = __PAIR64__(v33, v34);
  LANES128(v31).n128_u64[1] = LODWORD(v30);
  v35_.v35 = v18[3];
  v32 = vmulq_f32(v31, vdupq_n_s32(0x42652EE1u));
  v42 = v32;
  PSEUDO_LOW_LANE128(v32, n128_f32, a5);
  game_108d130((void*)(a4), a1, a2, &v35_.v35, (__int64*)&v42,
               *(long double*)&v32);
}

float game_109d070()
{
  __int64* v0;
  int v1;
  unsigned int v2;
  unsigned int v3;
  int v4;
  unsigned int v5;

  nn_os_LockMutex(&game_g_random_mutex);
  v0 = game_map_MapRandom_instance__ptr[0];
  v1 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v2 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v3 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v0 + 1) = v1;
  v4 = (v3 >> 8) ^ (v2 >> 19) ^ v3 ^ v2;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v0) = v2;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v0 + 4) = v4;
  v5 = v4 & 0x7FFFFFFF;
  nn_os_UnlockMutex(&game_g_random_mutex);
  return (double)v5 / 0x1.fffffffc00000p+30;
}

__int64 game_109d0f0()
{
  __int64* v0;
  int v1;
  unsigned int v2;
  unsigned int v3;
  int v4;

  nn_os_LockMutex(&game_g_random_mutex);
  v0 = game_map_MapRandom_instance__ptr[0];
  v1 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v2 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v3 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v0 + 1) = v1;
  v4 = (v3 >> 8) ^ (v2 >> 19) ^ v3 ^ v2;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v0) = v2;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v0 + 4) = v4;
  nn_os_UnlockMutex(&game_g_random_mutex);
  return v4 & 0x7FFFFFFF;
}

void game_109d2e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int8 explicit;
  int* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  bool v25;
  unsigned __int64 v26;
  unsigned __int16* v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v44;
  __int128 v45;
  struct {
    _BYTE v46[32];
    _BYTE* v47;
  } v46_;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v6 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v38 = a1;
    v39 = a2;
    v40 = a5;
    v41 = a4;
    v42 = a3;
    v43 = __cxa_guard_acquire(GameData_212df10);
    a3 = v42;
    a4 = v41;
    a5 = v40;
    a2 = v39;
    v44 = v43;
    a1 = v38;
    if (v44 != 0) {
      *v6 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release(GameData_212df10);
      a3 = v42;
      a4 = v41;
      a5 = v40;
      a1 = v38;
      a2 = v39;
    }
  }
  v7 = *(_QWORD*)(a2 + 512);
  v8 = v7;
  do {
    if (v8 == *(_QWORD*)(a2 + 504)) {
      return;
    }
    v9 = *(_DWORD*)(v8 - 16);
    v8 -= 16;
    v7 -= 16;
  } while (v9 != *v6);
  if (*(_QWORD*)(a2 + 512) != v7) {
    v10 = *(_QWORD*)(v7 + 8);
    if (v10 != 0) {
      v11 = *(_QWORD*)(v10 + 24);
      if (v11 != 0) {
        v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 112) + 24LL) + 8LL);
        if (v12 != 0) {
          if (a3 != 0) {
            v13 = a1;
            v14 = a2;
            v15 = a5;
            v16 = a4;
            v17 = a3;
            v18 = strlen(a3);
            a3 = v17;
            a4 = v16;
            a5 = v15;
            a2 = v14;
            v19 = v18;
            a1 = v13;
          }
          else {
            v19 = 0;
          }
          v20 = v12 + 8;
          v21 = *(unsigned __int16*)(v12 + 12);
          v22 = v12 + 8 + 16 * v21;
          v23 = *(_DWORD*)v22;
          if (*(_DWORD*)(v12 + 8) < *(_DWORD*)v22) {
            do {
              v26 = (__int64)v23 >> 3;
              if (v19 > v26) {
                v24 = (*(unsigned __int8*)(a3 + v19 + ~v26) >> (v23 & 7)) & 1;
              }
              else {
                v24 = 0;
              }
              v21 = *(unsigned __int16*)(v12 + 12 + 16 * v21 + 2 * v24);
              v25 = v23 < *(_DWORD*)(v20 + 16 * v21);
              v23 = *(_DWORD*)(v20 + 16 * v21);
            } while (v25);
            v22 = v20 + 16 * v21;
          }
          v27 = *(unsigned __int16**)(v22 + 8);
          if (v19 == *v27) {
            v28 = a1;
            v29 = a2;
            v30 = a5;
            v31 = a4;
            if ((unsigned int)memcmp(v27 + 1, a3, v19) == 0) {
              v32 = (unsigned __int64)(v22 - v12 - 24) >> 4;
              if ((_DWORD)v32 != -1) {
                v33 = *(_QWORD*)(v31 + 32);
                if (v33 != 0) {
                  if (v33 == v31) {
                    v46_.v47 = v46_.v46;
                    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v33 + 24LL))(
                        v33, v46_.v46);
                  }
                  else {
                    v46_.v47 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v33 +
                                                                 16LL))(v33);
                  }
                  v34 = v30;
                }
                else {
                  v34 = v30;
                  v46_.v47 = nullptr;
                }
                *(_DWORD*)v28 = Model_a661a0(v11, v32, (__int64)v46_.v46, v34);
                if (v46_.v47 == v46_.v46) {
                  v35 = 32;
                }
                else {
                  if (v46_.v47 == nullptr) {
                  LABEL_33:
                    game_111d140((void*)(&v45), v29);
                    v36 = *(_QWORD*)(v28 + 24);
                    v37 = v28;
                    *(_OWORD*)(v28 + 16) = v45;
                    if (v36 != 0) {
                      std___1___shared_weak_count___release_weak(v36);
                      v37 = v28;
                    }
                    *(_QWORD*)(v37 + 8) = v29;
                    return;
                  }
                  v35 = 40;
                }
                (*(void (**)(__int64))(*(_QWORD*)v46_.v47 + v35))(
                    (__int64)v46_.v47);
                goto LABEL_33;
              }
            }
          }
        }
      }
    }
  }
}

__attribute__((swiftcall)) void game_109e470(PSEUDO_X8 x8_, int32x2_t* a1,
                                             int32x2_t* a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  int8x16_t v7;
  unsigned __int32 v9;
  float32x2_t v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  int8x16_t v14;
  float32x4_t v15;
  int8x16_t v16;
  unsigned __int32 v17;
  float32x4_t v18;
  float v19;
  float v20;
  unsigned __int8 explicit;
  float v22;
  int8x16_t v23;
  float32x4_t v24;
  unsigned __int32 v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  double v52;
  double v53;
  double v54;
  int8x16_t v55;
  float32x4_t v56;
  unsigned int v57;
  unsigned __int64 v58;
  unsigned int v59;
  float32x4_t v60;
  float32x4_t v61;
  int8x16_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  int8x16_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  int32x2_t v73;
  unsigned __int64 v74;
  int v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  int8x16_t v80;
  unsigned __int64 v81;
  float32x4_t v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  float32x4_t v85;

  if (a4 <= 0x0.0p+0f) {
    LANES64(v73).n64_u64[0] = LANES64(*(a1)).n64_u64[0];
    v74 = LANES64(a1[1]).n64_u64[0];
  LABEL_24:
    LANES128(*(a3)).n128_u64[0] = LANES64(v73).n64_u64[0];
    LANES128(*(a3)).n128_u64[1] = v74;
    return;
  }
  if (a4 >= 0x1.0000000000000p+0f) {
    LANES64(v73).n64_u64[0] = LANES64(*(a2)).n64_u64[0];
    v74 = LANES64(a2[1]).n64_u64[0];
    goto LABEL_24;
  }
  v7 = *(int8x16_t*)LANES64(*(a1)).n64_u64;
  v9 = LANES128_OF(vextq_s8(v7, v7, 8u)).n128_u32[0];
  LANES128(v7).n128_u32[1] = 0;
  LANES128(v7).n128_u64[1] = v9;
  LANES64(v10).n64_u64[0] =
      LANES64_OF(
          vadd_f32(vmul_f32(*(float32x2_t*)&LANES128(v7).n128_i8[8],
                            *(float32x2_t*)&LANES128(v7).n128_i8[8]),
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u32[0]),
                            COERCE_AS(float32x2_t, LANES128(v7).n128_u32[0]))))
          .n64_u64[0];
  LANES128(v11).n128_u64[0] = LANES64_OF(vpadd_f32(v10, v10)).n64_u64[0];
  LANES128(v11).n128_u64[1] = LANES128(v11).n128_u64[0];
  v12 = vrsqrteq_f32(v11);
  v15 = vmulq_f32(v12, vrsqrtsq_f32(v12, vmulq_f32(v11, v12)));
  v13 = vmulq_f32(v7, vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v11, v15))));
  LANES128(v15).n128_u32[1] = 0;
  v14 = vbicq_s8(v13, vceqzq_f32(v11));
  v80 = v14;
  LANES128(v14).n128_u32[1] = 0;
  LANES128(v15).n128_f32[0] = -LANES128(v14).n128_f32[2];
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0) {
    v83 = LANES128(v15).n128_u64[0];
    v79 = LANES128(v14).n128_u64[0];
    v75 = __cxa_guard_acquire(&GameData_21a61b0);
    LANES128(v14).n128_u64[0] = v79;
    LANES128(v15).n128_u64[0] = v83;
    if (v75 != 0) {
      v76 = *((_QWORD*)GameData_212c560 + 1);
      *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
      *((_QWORD*)&GameData_21a61a0 + 1) = v76;
      __cxa_guard_release(&GameData_21a61b0);
      LANES128(v14).n128_u64[0] = v79;
      LANES128(v15).n128_u64[0] = v83;
    }
  }
  v16 = *(int8x16_t*)LANES64(*(a1)).n64_u64;
  LANES128(v15).n128_u64[1] = LANES128(v14).n128_u64[0];
  v17 = LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u32[0];
  v82 = v15;
  LANES128(v18).n128_u32[0] = 0;
  LANES128(v18).n128_u32[1] = LANES64(*(a1)).n64_u32[1];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(
          vadd_f32(vmul_f32(COERCE_AS(float32x2_t, v17),
                            COERCE_AS(float32x2_t, v17)),
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v16).n128_u32[0]),
                            COERCE_AS(float32x2_t, LANES128(v16).n128_u32[0]))))
          .n64_u64[0];
  LANES128(v18).n128_u64[1] =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]))))
          .n64_u32[0];
  v85 = v18;
  v19 = math_Vec3_Angle((float32x4_t*)&GameData_21a61a0, &v85);
  v20 = LANES64(*(a1)).n64_f32[1];
  explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                                  memory_order_acquire);
  if (v20 < 0x0.0p+0f) {
    v22 = -v19;
  }
  else {
    v22 = v19;
  }
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a61b0) != 0) {
    v77 = *((_QWORD*)GameData_212c560 + 1);
    *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
    *((_QWORD*)&GameData_21a61a0 + 1) = v77;
    __cxa_guard_release(&GameData_21a61b0);
  }
  v23 = *(int8x16_t*)LANES64(*(a2)).n64_u64;
  LANES128(v24).n128_u32[0] = 0;
  LANES128(v24).n128_u32[1] = LANES64(*(a2)).n64_u32[1];
  v25 = LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u32[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(
          vadd_f32(vmul_f32(COERCE_AS(float32x2_t, v25),
                            COERCE_AS(float32x2_t, v25)),
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u32[0]),
                            COERCE_AS(float32x2_t, LANES128(v23).n128_u32[0]))))
          .n64_u64[0];
  LANES128(v24).n128_u64[1] =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]))))
          .n64_u32[0];
  v85 = v24;
  v26 = math_Vec3_Angle((float32x4_t*)&GameData_21a61a0, &v85);
  if (LANES64(*(a2)).n64_f32[1] < 0x0.0p+0f) {
    v26 = -v26;
  }
  v27 = (float)(PSEUDO_UNFUSED((float)(v22 + (float)((float)(v26 - v22) * a4)) *
                               0x1.0000000000000p-1f)) +
        (float)(roundf((float)((float)(v22 + (float)((float)(v26 - v22) * a4)) *
                               0x1.0000000000000p-1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v27 < -0x1.921fb60000000p+0f) {
    v28 = -0x1.0000000000000p+0f;
  }
  else {
    v28 = 0x1.0000000000000p+0f;
  }
  v29 = -0x1.921fb60000000p+1f - v27;
  if (v27 >= -0x1.921fb60000000p+0f) {
    v29 = v27;
  }
  if (v27 > 0x1.921fb60000000p+0f) {
    v30 = 0x1.921fb60000000p+1f - v27;
  }
  else {
    v30 = v29;
  }
  if (v27 > 0x1.921fb60000000p+0f) {
    v31 = -0x1.0000000000000p+0f;
  }
  else {
    v31 = v28;
  }
  v32 = vmulq_f32(v82, v82);
  LANES128(v32).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
          .n64_u64[0];
  LANES128(v32).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
          .n64_u64[0];
  LANES128(v32).n128_u64[1] = LANES128(v32).n128_u64[0];
  v33 = vrsqrteq_f32(v32);
  v34 = vmulq_f32(v33, vrsqrtsq_f32(v33, vmulq_f32(v32, v33)));
  v35 = vbicq_s8(
      vmulq_f32(v82, vmulq_f32(v34, vrsqrtsq_f32(v34, vmulq_f32(v32, v34)))),
      vceqzq_f32(v32));
  LANES128(v34).n128_f32[0] = v30 * v30;
  LANES128(v36).n128_u64[0] = LANES128(v80).n128_u64[0];
  v37 =
      v31 *
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
                                                                                            LANES128(
                                                                                                v34)
                                                                                                .n128_f32
                                                                                                    [0])) *
                                                                            LANES128(
                                                                                v34)
                                                                                .n128_f32
                                                                                    [0])) *
                                                         LANES128(v34)
                                                             .n128_f32[0])) *
                                         LANES128(v34).n128_f32[0])) *
                      LANES128(v34).n128_f32[0]) +
              0x1.0000000000000p+0f);
  v38 = vmulq_n_f32(
      v35,
      v30 *
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
                                                                                                (float)(v30 *
                                                                                                        v30))) *
                                                                                (float)(v30 *
                                                                                        v30))) *
                                                             (float)(v30 *
                                                                     v30))) *
                                             (float)(v30 * v30))) *
                          (float)(v30 * v30)) +
                  0x1.0000000000000p+0f));
  v39 = v38;
  LANES128(v39).n128_f32[3] = v37;
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v80, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v36).n128_u64[1] = LANES128(v34).n128_u64[0];
  v40 = vmulq_f32(v39, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v80, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v42).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v41).n128_u64[1] = LANES128(v41).n128_u64[0];
  *(int8x8_t*)&LANES128(v42).n128_i8[8] =
      vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v43).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v44 = vmlaq_f32(vmulq_f32(v41, v40), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v36, v42));
  LANES128(v42).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v80, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v43).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v40).n128_u64[0]), 1);
  LANES128(v34).n128_u64[1] = LANES128(v42).n128_u64[0];
  LANES128(v42).n128_u64[1] = LANES128(v80).n128_u64[0];
  v45 = vmulq_f32(v42, v43);
  LANES128(v43).n128_u64[0] = LANES128(v38).n128_u64[0];
  v46 = vmlaq_f32(v44, COERCE_AS(float32x4_t, GameData_1a83800), v45);
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v45).n128_i8[8] =
      vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v47 = COERCE_AS(int8x16_t, __PAIR128__(LANES128(v39).n128_u64[1],
                                         LANES128(v38).n128_u64[0]));
  v48 = vmlsq_f32(v46, v45, v34);
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v39).n128_u64[1],
                                                 LANES128(v38).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v39).n128_u64[1] = LANES128(v39).n128_u64[0];
  *(int8x8_t*)&LANES128(v34).n128_i8[8] =
      vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v49 = vmulq_f32(v39, v48);
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v43).n128_u64[1] = LANES128(v39).n128_u64[0];
  LANES128(v39).n128_u64[1] = LANES128(v47).n128_u64[0];
  LANES128(v47).n128_u64[1] = LANES128(v38).n128_u64[0];
  v50 = vmlaq_f32(v49, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v43, v34));
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v34).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v48).n128_u64[0]), 1);
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v38).n128_i8[8] =
      vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v51 = vmlsq_f32(vmlaq_f32(v50, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v47, v34)),
                  v38, v39);
  v78 = LANES128(v51).n128_u64[0];
  LANES128(v51).n128_u32[3] = 0;
  v81 = LANES128(v51).n128_u64[1];
  LANES128(v85).n128_u64[0] =
      LANES64_OF(
          vzip1_s32(
              COERCE_AS(int32x2_t, LANES64(*(a1)).n64_u64[0]),
              COERCE_AS(
                  int32x2_t,
                  LANES128_OF(vextq_s8(*(int8x16_t*)LANES64(*(a1)).n64_u64,
                                       *(int8x16_t*)LANES64(*(a1)).n64_u64, 8u))
                      .n128_u64[0])))
          .n64_u64[0];
  v84 = LANES64_OF(
            vzip1_s32(
                COERCE_AS(int32x2_t, LANES64(*(a2)).n64_u64[0]),
                COERCE_AS(int32x2_t,
                          LANES128_OF(
                              vextq_s8(*(int8x16_t*)LANES64(*(a2)).n64_u64,
                                       *(int8x16_t*)LANES64(*(a2)).n64_u64, 8u))
                              .n128_u64[0])))
            .n64_u64[0];
  v52 = (float)(a4 * game_combat_e401e0((float*)&v85, (float*)&v84)) *
        0x1.0000000000000p-1;
  v53 = cos(v52);
  v54 = sin(v52);
  LANES128(v55).n128_u64[0] = v78;
  LANES128(v56).n128_u64[0] = v78;
  *(float*)&v57 = v53 + PSEUDO_UNFUSED(v54 * 0x0.0p+0);
  *(float*)&v58 = PSEUDO_UNFUSED(v54 * -0x0.0p+0) + v53 * 0x0.0p+0;
  *(float*)&v59 = v54 + PSEUDO_UNFUSED(v53 * 0x0.0p+0);
  LANES128(v60).n128_u64[0] = __PAIR64__(v59, v58);
  LANES128(v55).n128_u64[1] = v81;
  LANES128(v60).n128_u64[1] = __PAIR64__(v57, v58);
  LANES128(v61).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  HIDWORD(v58) = v59;
  LANES128(v61).n128_u64[1] = LANES128(v61).n128_u64[0];
  v62 = vmulq_f32(v60, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v63).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v55).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v64).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v65).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v56).n128_u64[1] = LANES128(v63).n128_u64[0];
  LANES128(v63).n128_u64[1] = LANES128(v55).n128_u64[0];
  LANES128(v55).n128_u64[1] = v78;
  *(int8x8_t*)&LANES128(v65).n128_i8[8] =
      vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v66 = vmlaq_f32(vmulq_f32(v61, v62), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v56, v65));
  LANES128(v65).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v65).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v62).n128_u64[0]), 1);
  v67 = vmulq_f32(v55, v65);
  LANES128(v65).n128_u64[0] = v58;
  v68 = vmlaq_f32(v66, COERCE_AS(float32x4_t, GameData_1a83800), v67);
  LANES128(v67).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v65).n128_u64[1] = LANES128(v64).n128_u64[0];
  *(int8x8_t*)&LANES128(v67).n128_i8[8] =
      vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v62).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v60).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v62).n128_u64[1] = LANES128(v62).n128_u64[0];
  LANES128(v64).n128_u64[1] = LANES128(v60).n128_u64[0];
  LANES128(v60).n128_u64[1] = v58;
  v69 = vmlsq_f32(v68, v67, v63);
  LANES128(v67).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v67).n128_i8[8] =
      vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v70 = vmlaq_f32(vmulq_f32(v62, v69), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v65, v67));
  LANES128(v67).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v67).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v69).n128_u64[0]), 1);
  LANES128(v71).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v71).n128_i8[8] =
      vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v72 = vmlsq_f32(vmlaq_f32(v70, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v60, v67)),
                  v71, v64);
  LANES128(v72).n128_u32[3] = 0;
  *a3 = v72;
}

__int64 game_109ecc0(_BYTE* a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE* v4;
  _BYTE* v5;
  __int64 v6;
  _BYTE* v7;
  int v8;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  unsigned __int64 v14;
  _BYTE* v15;
  unsigned __int64 v16;
  _BYTE* v17;
  int v18;
  unsigned __int64 v19;
  unsigned __int64 v23;
  _BYTE* v24;
  __int64 v25;
  _BYTE* v26;
  __int64 v27;
  unsigned __int64 v28;
  _BYTE* v29;
  __int64 v30;
  int v31;
  unsigned __int64 v32;
  unsigned __int64 v33;

  if (a2 == 0) {
    return 0;
  }
  v4 = &a1[a2];
  v5 = a1 - 1;
  v6 = 0;
  v7 = a1 - 1;
  do {
    if (a2 == v6) {
      return 0;
    }
    v8 = (unsigned __int8)v7[a2];
    ++v6;
    --v7;
  } while (v8 != 41);
  if (a2 + 1 == v6) {
    return 0;
  }
  v10 = a2 - v6;
  v11 = 0;
  do {
    if (a2 + v11 == 0) {
      return 0;
    }
    v12 = &v4[v11--];
  } while (*(v12 - 1) != 40);
  v13 = a2 + v11;
  if (a2 + v11 == -1) {
    return 0;
  }
  v14 = a2 & 3;
  v15 = a1;
  if ((a2 & 3) != 0) {
    while (*v15 == 32) {
      ++v15;
      if (--v14 == 0) {
        goto LABEL_14;
      }
    }
  }
  else {
  LABEL_14:
    if (a2 < 4) {
    LABEL_15:
      v16 = -1;
      goto LABEL_27;
    }
    v15 += 3;
    while (1) {
      if (*(v15 - 3) != 32) {
        v15 -= 3;
        goto LABEL_26;
      }
      if (*(v15 - 2) != 32) {
        v15 -= 2;
        goto LABEL_26;
      }
      if (*(v15 - 1) != 32) {
        break;
      }
      if (*v15 != 32) {
        goto LABEL_26;
      }
      v17 = v15 + 1;
      v15 += 4;
      if (v17 == v4) {
        goto LABEL_15;
      }
    }
    --v15;
  }
LABEL_26:
  v16 = v15 - a1;
LABEL_27:
  if (v13 - 1 >= a2) {
    v13 = a2;
  }
  while (v13 != 0) {
    v18 = (unsigned __int8)v5[v13--];
    if (v18 != 32) {
      goto LABEL_33;
    }
  }
  v13 = -1;
LABEL_33:
  if (a2 < v16) {
  LABEL_68:
    String_60a250("string_view::substr");
  }
  v19 = v13 - v16;
  if (a2 - v16 >= v19 + 1) {
    v23 = v19 + 1;
  }
  else {
    v23 = a2 - v16;
  }
  GameRoutine_60a060(a3, &a1[v16], v23);
  if (a2 + v11 + 1 >= a2) {
    v28 = -1;
    v25 = a4;
    v24 = a1;
  }
  else {
    v24 = a1;
    v25 = a4;
    v26 = &a1[a2 + 1 + v11];
    if ((~(_BYTE)v11 & 3) != 0) {
      v27 = ~(_BYTE)v11 & 3;
      while (*v26 == 32) {
        ++v26;
        if (--v27 == 0) {
          goto LABEL_42;
        }
      }
    }
    else {
    LABEL_42:
      if ((unsigned __int64)(-2 - v11) < 3) {
      LABEL_43:
        v28 = -1;
        goto LABEL_56;
      }
      v26 += 3;
      while (1) {
        if (*(v26 - 3) != 32) {
          v26 -= 3;
          goto LABEL_55;
        }
        if (*(v26 - 2) != 32) {
          v26 -= 2;
          goto LABEL_55;
        }
        if (*(v26 - 1) != 32) {
          break;
        }
        if (*v26 != 32) {
          goto LABEL_55;
        }
        v29 = v26 + 1;
        v26 += 4;
        if (v29 == v4) {
          goto LABEL_43;
        }
      }
      --v26;
    }
  LABEL_55:
    v28 = v26 - a1;
  }
LABEL_56:
  if (~v6 + a2 >= a2) {
    v30 = a2;
  }
  else {
    v30 = v10;
  }
  while (v30 != 0) {
    v31 = (unsigned __int8)v5[v30--];
    if (v31 != 32) {
      goto LABEL_63;
    }
  }
  v30 = -1;
LABEL_63:
  if (a2 < v28) {
    goto LABEL_68;
  }
  v32 = v30 - v28;
  if (a2 - v28 >= v32 + 1) {
    v33 = v32 + 1;
  }
  else {
    v33 = a2 - v28;
  }
  GameRoutine_60a060(v25, &v24[v28], v33);
  return 1;
}

__int64 game_109f1e0(__int64 a1, _BYTE* a2)
{
  __int64 result;
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _BYTE* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  bool v22;
  unsigned __int64 v23;
  unsigned __int16* v24;
  __int64 v25;
  __int64 v26;
  _BYTE* v27;
  int v28;

  if (a2 == nullptr) {
    return 0;
  }
  result = 0;
  if (*a2 != 0 && *a2 != 45) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v5 = GameData_212df08;
    if ((explicit & 1) == 0) {
      v26 = a1;
      v27 = a2;
      v28 = __cxa_guard_acquire(GameData_212df10);
      a2 = v27;
      a1 = v26;
      if (v28 != 0) {
        *v5 = wld_Crc32(0, "ModelModule", 0xBu);
        __cxa_guard_release(GameData_212df10);
        a1 = v26;
        a2 = v27;
      }
    }
    v7 = *(_QWORD*)(a1 + 504);
    v6 = *(_QWORD*)(a1 + 512);
    v8 = v6;
    v9 = v6;
    do {
      if (v9 == v7) {
        return 0;
      }
      v10 = *(_DWORD*)(v9 - 16);
      v9 -= 16;
      v8 -= 16;
    } while (v10 != *v5);
    if (v6 == v8) {
      return 0;
    }
    v11 = *(_QWORD*)(v8 + 8);
    if (v11 == 0) {
      return 0;
    }
    v12 = *(_QWORD*)(v11 + 24);
    if (v12 == 0) {
      return 0;
    }
    v13 = *(_QWORD**)(v12 + 168);
    if (v13 == nullptr) {
      return 0;
    }
    v14 = *(_QWORD*)(*v13 + 8LL);
    if (v14 == 0) {
      return 0;
    }
    v15 = a2;
    v16 = strlen(a2);
    v17 = v14 + 8;
    v18 = *(unsigned __int16*)(v14 + 12);
    v19 = v14 + 8 + 16 * v18;
    v20 = *(_DWORD*)v19;
    if (*(_DWORD*)(v14 + 8) < *(_DWORD*)v19) {
      do {
        v23 = (__int64)v20 >> 3;
        if (v16 > v23) {
          v21 = ((unsigned __int8)v15[v16 + ~v23] >> (v20 & 7)) & 1;
        }
        else {
          v21 = 0;
        }
        v18 = *(unsigned __int16*)(v14 + 12 + 16 * v18 + 2 * v21);
        v22 = v20 < *(_DWORD*)(v17 + 16 * v18);
        v20 = *(_DWORD*)(v17 + 16 * v18);
      } while (v22);
      v19 = v17 + 16 * v18;
    }
    v24 = *(unsigned __int16**)(v19 + 8);
    if (v16 != *v24) {
      return 0;
    }
    if ((unsigned int)memcmp(v24 + 1, v15, v16) != 0) {
      return 0;
    }
    v25 = v19 - v14 - 24;
    if ((~v25 & 0xFFFFFFFF0LL) == 0) {
      return 0;
    }
    return v13[4] + ((__int64)(int)(v25 >> 4) << 6);
  }
  return result;
}

__int64 game_109f3c0(__int64 a1, _QWORD* a2, __int64 a3)
{
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
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
  int v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  unsigned __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  unsigned __int64 v27;
  unsigned __int16* v28;
  __int64 result;
  unsigned __int16* v30;
  __int64 v31;
  unsigned __int16* v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  int v40;
  int v41;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v4 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v37 = a1;
    v38 = a2;
    v39 = a3;
    v40 = __cxa_guard_acquire(GameData_212df10);
    a3 = v39;
    a2 = v38;
    v41 = v40;
    a1 = v37;
    if (v41 != 0) {
      *v4 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release(GameData_212df10);
      a1 = v37;
      a3 = v39;
      a2 = v38;
    }
  }
  v5 = *(_QWORD*)(a1 + 512);
  v6 = v5;
  while (v6 != *(_QWORD*)(a1 + 504)) {
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    v5 -= 16;
    if (v7 == *v4) {
      if (*(_QWORD*)(a1 + 512) != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        if (v8 != 0) {
          v9 = *(_QWORD*)(v8 + 24);
          if (v9 != 0) {
            v10 = *(_QWORD*)(v9 + 168);
            if (v10 != 0) {
              if (a3 == 0) {
                return 1;
              }
              v11 = *(_QWORD*)(*(_QWORD*)v10 + 8LL);
              if (v11 != 0) {
                v12 = v11 + 12;
                v13 = v11 + 8;
                v14 = *(unsigned __int16*)(v11 + 12);
                v15 = v11 + 8 + 16 * v14;
                v16 = *(_DWORD*)v15;
                if (*(_DWORD*)(v11 + 8) >= *(_DWORD*)v15) {
                  if (((-16 * v14) & 0xFFFFFFFF0LL) != 0) {
                    v30 = *(unsigned __int16**)(v15 + 8);
                    v31 = 8 * a3;
                    v34 = *v30;
                    v32 = v30 + 1;
                    v33 = v34;
                    while (1) {
                      v35 = *a2;
                      v36 = a2;
                      if (*a2 != 0) {
                        if (strlen(*a2) != v33) {
                          return 0;
                        }
                      }
                      else if (v33 != 0) {
                        return 0;
                      }
                      if ((unsigned int)memcmp(v32, v35, v33) != 0) {
                        break;
                      }
                      a2 = v36 + 1;
                      v31 -= 8;
                      result = 1;
                      if (v31 == 0) {
                        return result;
                      }
                    }
                  }
                }
                else {
                  v17 = &a2[a3];
                  v18 = v11 + 16;
                  while (1) {
                    v19 = *a2;
                    v20 = a2;
                    v21 = *a2 != 0 ? strlen(*a2) : 0LL;
                    v22 = v16;
                    v23 = v14;
                    do {
                      v27 = (__int64)v22 >> 3;
                      if (v21 > v27) {
                        v24 = (*(unsigned __int8*)(v19 + v21 + ~v27) >>
                               (v22 & 7)) &
                              1;
                      }
                      else {
                        v24 = 0;
                      }
                      v23 = *(unsigned __int16*)(v12 + 16 * v23 + 2 * v24);
                      v25 = 16 * v23;
                      v26 = v22 < *(_DWORD*)(v13 + 16 * v23);
                      v22 = *(_DWORD*)(v13 + 16 * v23);
                    } while (v26);
                    v28 = *(unsigned __int16**)(v18 + 16 * v23);
                    if (v21 != *v28 ||
                        (unsigned int)memcmp(v28 + 1, v19, v21) != 0 ||
                        (-v25 & 0xFFFFFFFF0LL) == 0) {
                      break;
                    }
                    a2 = v20 + 1;
                    result = 1;
                    if (v20 + 1 == v17) {
                      return result;
                    }
                  }
                }
              }
            }
          }
        }
      }
      return 0;
    }
  }
  return 0;
}

__attribute__((swiftcall)) void game_109f820(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int16* v16;
  unsigned __int64 v17;
  char v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  __int64 v24;
  int v25;
  unsigned __int64 v26;
  float32x4_t v27;
  unsigned int v28;
  float v29;
  float v30;
  double v31;
  double v32;
  double v33;
  double v34;
  double v35;
  double v36;
  double v37;
  double v38;
  double v39;
  int8x16_t v40;
  float v41;
  float v42;
  float32x4_t v43;
  float32x4_t v44;
  unsigned __int64 v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  int8x16x2_t v60;
  int8x16x2_t v61;
  int8x16x2_t v62;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 112) + 24LL);
  if (v4 != 0) {
    v5 = *(_QWORD*)(v4 + 8);
    if (v5 != 0) {
      if (a2 != 0) {
        v6 = a2;
        v7 = strlen(a2);
        a2 = v6;
        v8 = v7;
      }
      else {
        v8 = 0;
      }
      v9 = v5 + 8;
      v10 = *(unsigned __int16*)(v5 + 12);
      v11 = v5 + 8 + 16 * v10;
      v12 = *(_DWORD*)v11;
      if (*(_DWORD*)(v5 + 8) < *(_DWORD*)v11) {
        do {
          v15 = (__int64)v12 >> 3;
          if (v8 > v15) {
            v13 = (*(unsigned __int8*)(a2 + v8 + ~v15) >> (v12 & 7)) & 1;
          }
          else {
            v13 = 0;
          }
          v10 = *(unsigned __int16*)(v5 + 12 + 16 * v10 + 2 * v13);
          v14 = v12 < *(_DWORD*)(v9 + 16 * v10);
          v12 = *(_DWORD*)(v9 + 16 * v10);
        } while (v14);
        v11 = v9 + 16 * v10;
      }
      v16 = *(unsigned __int16**)(v11 + 8);
      if (v8 == *v16 && (unsigned int)memcmp(v16 + 1, a2, v8) == 0) {
        v17 = (unsigned __int64)(v11 - v5 - 24) >> 4;
        if ((_DWORD)v17 != 0xFFFF && (_DWORD)v17 != -1) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21a55c0) != 0) {
            v52 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 +
                             8);
            *(_QWORD*)&GameData_21a55a0 =
                *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
            *((_QWORD*)&GameData_21a55a0 + 1) = v52;
            v53 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                              (_QWORD)GameData_212c2a0);
            *(_QWORD*)&GameData_21a55b0 =
                *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                            (_QWORD)GameData_212c2a0);
            *((_QWORD*)&GameData_21a55b0 + 1) = v53;
            v54 = *((_QWORD*)GameData_212c2a0 + 1);
            *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
            *((_QWORD*)&GameData_21a5580 + 1) = v54;
            v55 = *(_QWORD*)((char*)((__int128*)0x10LL) +
                             (_QWORD)GameData_212c2a0 + 8);
            *(_QWORD*)&GameData_21a5590 = *(
                _QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
            *((_QWORD*)&GameData_21a5590 + 1) = v55;
            __cxa_guard_release(&GameData_21a55c0);
          }
          v20 = COERCE_AS(float32x4_t, GameData_21a5580);
          v21 = COERCE_AS(float32x4_t, GameData_21a5590);
          v23 = COERCE_AS(float32x4_t, GameData_21a55a0);
          v22 = COERCE_AS(float32x4_t, GameData_21a55b0);
          while (1) {
            v24 = *(_QWORD*)(v4 + 16) + 96LL * (int)v17;
            v25 = *(_DWORD*)(v24 + 52);
            if ((v25 & 0x3000000) != 0) {
              if ((v25 & 0x4000000) != 0) {
                goto LABEL_27;
              }
            }
            else {
              LODWORD(v26) = 0;
              LANES128(v27).n128_u64[0] = 0;
              HIDWORD(v26) = HIDWORD(*(_QWORD*)(v24 + 56));
              v28 = *(_QWORD*)(v24 + 56);
              LANES128(v27).n128_u64[1] = (unsigned int)*(_QWORD*)(v24 + 64);
              v21 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, v28),
                                  LANES128(v21).n128_f32[0]),
                      COERCE_AS(float32x4_t, v26),
                      COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1),
                  v27, v21, 2);
              v22 = vaddq_f32(
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(COERCE_AS(float32x4_t, v28),
                                      LANES128(v22).n128_f32[0]),
                          COERCE_AS(float32x4_t, v26),
                          COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]), 1),
                      v27, v22, 2),
                  COERCE_AS(float32x4_t, 0));
              v23 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, v28),
                                  LANES128(v23).n128_f32[0]),
                      COERCE_AS(float32x4_t, v26),
                      COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]), 1),
                  v27, v23, 2);
              v20 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, v28),
                                  LANES128(v20).n128_f32[0]),
                      COERCE_AS(float32x4_t, v26),
                      COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1),
                  v27, v20, 2);
              if ((v25 & 0x4000000) != 0) {
              LABEL_27:
                if ((v25 & 0x8000000) == 0) {
                  goto LABEL_31;
                }
                goto LABEL_24;
              }
            }
            v29 = *(float*)(v24 + 72);
            v30 = *(float*)(v24 + 68);
            v59 = v22;
            v57 = v21;
            v58 = v23;
            v56 = v20;
            v31 = *(float*)(v24 + 76) * 0x1.0000000000000p-1;
            v32 = cos(v31);
            v33 = sin(v31);
            v34 = v30 * 0x1.0000000000000p-1;
            v35 = cos(v34);
            v36 = sin(v34);
            v37 = v29 * 0x1.0000000000000p-1;
            v38 = cos(v37);
            v39 = sin(v37);
            LANES128(v40).n128_f32[0] =
                v32 * v36 * v38 - PSEUDO_UNFUSED(v39 * (v33 * v35));
            v41 = PSEUDO_UNFUSED(v33 * v36 * v38) +
                  PSEUDO_UNFUSED(v32 * v35) * v39;
            v42 = PSEUDO_UNFUSED(v33 * v36 * v39) +
                  PSEUDO_UNFUSED(v32 * v35) * v38;
            *(float*)&v39 = v33 * v35 * v38 - PSEUDO_UNFUSED(v39 * (v32 * v36));
            LANES128(v40).n128_f32[1] = v41;
            LANES128(v40).n128_u64[1] = LODWORD(v39);
            LANES128(v43).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v44).n128_u64[0] =
                LANES64_OF(
                    vrev64_s32(COERCE_AS(int32x2_t, LANES128(v40).n128_u64[0])))
                    .n64_u64[0];
            v45 = LANES64_OF(
                      vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                      .n64_u64[0];
            LANES128(v46).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v43).n128_i8[8] =
                vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            LANES128(v44).n128_u64[1] = LANES128(v43).n128_u64[1];
            LANES128(v46).n128_u64[1] = v45;
            v47 = vmulq_f32(v43, v40);
            v48 = vmulq_f32(v44, v44);
            v60.val[1] = vmulq_f32(v46, v46);
            v49 = vaddq_f32(v47, v47);
            LANES128(v43).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v43).n128_u64[1] = v45;
            v60.val[0] = vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                                   vaddq_f32(vaddq_f32(v60.val[1], v60.val[1]),
                                             vaddq_f32(v48, v48)));
            v50 = vmulq_n_f32(v43, v42);
            v51 = vaddq_f32(v50, v50);
            v61.val[0] = vaddq_f32(v51, v49);
            v61.val[1] = vsubq_f32(v49, v51);
            LANES128(v60.val[1]).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v61, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                    .n64_u64[0];
            LANES128(v62.val[1]).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v61, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v62.val[1]).n128_i8[8] =
                vqtbl2_s8(v61, COERCE_AS(int8x8_t, 0x706050413121110LL));
            *(int8x8_t*)&LANES128(v60.val[1]).n128_i8[8] =
                vqtbl2_s8(v61, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
            v62.val[0] = v60.val[0];
            LANES128(v49).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v62, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v49).n128_i8[8] =
                vqtbl2_s8(v62, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
            LANES128(v51).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v62, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v51).n128_i8[8] =
                vqtbl2_s8(v62, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
            LANES128(v61.val[0]).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v60, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v61.val[0]).n128_i8[8] =
                vqtbl2_s8(v60, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
            v23 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v49, LANES128(v58).n128_f32[0]), v51,
                    COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]), 1),
                v61.val[0], v58, 2);
            v20 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v49, LANES128(v56).n128_f32[0]), v51,
                    COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]), 1),
                v61.val[0], v56, 2);
            v21 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v49, LANES128(v57).n128_f32[0]), v51,
                    COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]), 1),
                v61.val[0], v57, 2);
            v22 = vaddq_f32(
                vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v49, LANES128(v59).n128_f32[0]), v51,
                        COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0]), 1),
                    v61.val[0], v59, 2),
                COERCE_AS(float32x4_t, 0));
            if ((v25 & 0x8000000) == 0) {
            LABEL_31:
              v22 = vaddq_f32(
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                      LANES128(v22).n128_f32[0]),
                          COERCE_AS(float32x4_t, GameData_1a83610),
                          COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]), 1),
                      COERCE_AS(float32x4_t, GameData_1a83090), v22, 2),
                  *(float32x4_t*)(v24 + 84));
              v23 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v23).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v23, 2);
              v21 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v21).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v21, 2);
              v20 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v20).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v20, 2);
            }
          LABEL_24:
            v17 = *(unsigned __int16*)(v24 + 42);
            if (v17 == 0xFFFF) {
              v19 = 1;
              *a3 = v20;
              a3[1] = v21;
              a3[2] = v23;
              a3[3] = v22;
              goto LABEL_21;
            }
          }
        }
      }
    }
  }
  v19 = 0;
  LANES128(*(a3)).n128_u8[0] = 0;
LABEL_21:
  LANES128(a3[4]).n128_u8[0] = v19;
}

_QWORD* game_10a0100(_QWORD* result, __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned __int8 v8;
  int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  int v21;
  int v22;
  _QWORD* v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;

  if (result != nullptr) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea08,
                                    memory_order_acquire);
    v3 = GameData_212ea00;
    if ((explicit & 1) == 0) {
      v19 = result;
      v20 = a2;
      v21 = __cxa_guard_acquire(GameData_212ea08);
      a2 = v20;
      v22 = v21;
      result = v19;
      if (v22 != 0) {
        *v3 = wld_Crc32(0, "LocatorModule", 0xDu);
        __cxa_guard_release(GameData_212ea08);
        a2 = v20;
        result = v19;
      }
    }
    v4 = result[64];
    v5 = v4;
    do {
      if (v5 == result[63]) {
        goto LABEL_8;
      }
      v6 = *(_DWORD*)(v5 - 16);
      v5 -= 16;
      v4 -= 16;
    } while (v6 != *v3);
    if (result[64] == v4 || (v7 = *(_QWORD*)(v4 + 8)) == 0) {
    LABEL_8:
      v8 = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                memory_order_acquire);
      v9 = GameData_212df08;
      if ((v8 & 1) == 0) {
        v23 = result;
        v24 = a2;
        v25 = __cxa_guard_acquire(GameData_212df10);
        a2 = v24;
        v26 = v25;
        result = v23;
        if (v26 != 0) {
          *v9 = wld_Crc32(0, "ModelModule", 0xBu);
          __cxa_guard_release(GameData_212df10);
          a2 = v24;
          result = v23;
        }
      }
      v10 = result[64];
      v11 = v10;
      while (v11 != result[63]) {
        v12 = *(_DWORD*)(v11 - 16);
        v11 -= 16;
        v10 -= 16;
        if (v12 == *v9) {
          if (result[64] == v10) {
            return nullptr;
          }
          v13 = *(_QWORD*)(v10 + 8);
          if (v13 == 0) {
            return nullptr;
          }
          v14 = a2;
          v15 = result;
          v27 = *(_QWORD*)(v13 + 24);
          v16 = GameRoutine_bd3bc0((__int64)result, &v27);
          a2 = v14;
          v7 = v16;
          result = v15;
          if (v7 == 0) {
            return nullptr;
          }
          goto LABEL_15;
        }
      }
      return nullptr;
    }
  LABEL_15:
    v17 = result;
    v18 = a2;
    result = (_QWORD*)GameRoutine_a7c540(v7, a2);
    if (result == nullptr) {
      result = (_QWORD*)LocatorModule_a7bee0(v7, v18);
      if (result == nullptr) {
        if ((unsigned int)strcmp(v18, "Export") != 0) {
          return nullptr;
        }
        result = game_10a0100(v17, (__int64)"nw4f_root");
        if (result == nullptr) {
          result = (_QWORD*)GameRoutine_109efe0((__int64)v17);
          if (result != nullptr) {
            return game_10a0100(
                v17,
                **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(result[3] + 112LL) + 24LL) +
                             16LL) +
                    2LL);
          }
        }
      }
    }
  }
  return result;
}

bool game_10a0340(_BYTE* a1)
{
  __int64 v1;
  _BYTE* v2;
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _BYTE* v8;
  _BYTE* v9;
  __int64 v10;

  if (game_GameModeData_instance_ == 0) {
    return false;
  }
  v1 = *(_QWORD*)(game_GameModeData_instance_ + 16);
  if (v1 == 0) {
    return false;
  }
  v2 = *(_BYTE**)(v1 + 112);
  if (v2 == nullptr || *v2 == 0) {
    return false;
  }
  v3 = *(_QWORD*)(v1 + 8);
  v5 = strlen(*(_QWORD*)(v1 + 112));
  if (v5 != 0) {
    v6 = v5;
    v7 = v5;
    v8 = a1;
    do {
      if (v7 == 0) {
        goto LABEL_14;
      }
      v9 = &v2[v7--];
    } while (*(v9 - 1) != 47);
    if (v7 == -1) {
    LABEL_14:
      v10 = 0;
      goto LABEL_16;
    }
    if (v7 >= v6) {
      String_60a250("string_view::substr");
    }
    v10 = (__int64)&v2[v7 + 1];
  }
  else {
    v10 = 0;
    v8 = a1;
  }
LABEL_16:
  if (*v8 == 47) {
    ++v8;
  }
  else {
    v10 = v3;
  }
  return (unsigned int)strcmp(v8, v10) == 0;
}

void game_10c29f0(__int64 a1, long double a2, long double a3, long double a4,
                  long double a5, double a6)
{

#pragma clang fp contract(off)
  __int64 v7;
  float v8;
  __n128 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v14;
  long double v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  _BOOL4 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float32x4_t v31;
  long double v32;
  __int64 v33;
  __int64* v34;
  int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  long double v40;
  int v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  long double v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  long double v51;
  long double v52;
  __int64 v54;
  __int64 v55;
  __int128 v56;
  _DWORD* v57;
  __int128 v58;
  __int128 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  float v63;
  float v64;
  __int64 v65;
  long double v66;
  long double v67;
  int8x16_t v68;
  struct {
    float32x4_t v69;
    __int64 v70;
    __int64 v71;
  } v69_;

  if (*GameData_212d168 != 3 ||
      GameData_21ec7b0 != 0 && (v7 = *(_QWORD*)(GameData_21ec7b0 + 8)) != 0 &&
          (*(_BYTE*)(v7 + 114) & 1) != 0) {
    *(_DWORD*)(a1 + 128) = -1082130432;
  }
  v8 = *(float*)(a1 + 128) +
       (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                       -0x1.0aef000000000p+4f) /
               0x1.f400000000000p+9f);
  *(float*)(a1 + 128) = v8;
  if (v8 >= 0x0.0p+0f) {
    if (v8 <= 0x1.4000000000000p+3f) {
      goto LABEL_15;
    }
    v10 = *(_QWORD*)(a1 + 56);
    if (v10 == 0) {
      goto LABEL_15;
    }
    v11 = *(_QWORD*)(v10 + 8);
    v12 = *(_QWORD*)(a1 + 64);
    if (v11 == -1 || v12 == 0) {
      goto LABEL_15;
    }
    if ((*(_BYTE*)(v12 + 800) & 4) == 0) {
      goto LABEL_15;
    }
    v60 = *(_QWORD*)(a1 + 8);
    LODWORD(a3) = *(_DWORD*)(a1 + 116);
    LODWORD(a4) = COERCE_UNSIGNED_INT((float)(0x1.8000000000000p+0f));
    v69_.v70 = 0;
    v69_.v71 = 0;
    v69_.v69 = (__typeof__(v69_.v69)){0};
    v62 = *(_QWORD*)(v60 + 304);
    v61 = *(_QWORD*)(v60 + 312);
    LANES128(v68).n128_u32[0] = v62;
    LANES128(v68).n128_u64[1] = v61;
    LODWORD(a2) = HIDWORD(v62);
    *(float*)&a3 = *((float*)&v62 + 1) - *(float*)&a3;
    v63 = *(float*)&a3 * 0x1.8000000000000p+0f;
    v64 = *((float*)&v62 + 1) + (float)(*(float*)&a3 * 0x1.8000000000000p+0f);
    LANES128(v68).n128_f32[1] = v64;
    GameRoutine_109ded0((__int128*)&v69_.v69, &v68, 0, a2, a3, a4, a5, a6);
    if (v64 < LANES128(v69_.v69).n128_f32[1] ||
        (v65 = *(_QWORD*)(a1 + 72)) != 0 &&
            (float)(v63 + *(float*)(v65 + 52)) <
                LANES128(v69_.v69).n128_f32[1]) {
      v14 = 1;
      *(_DWORD*)(a1 + 128) = 1092616192;
    }
    else {
    LABEL_15:
      v14 = 0;
    }
    (*(void (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
    LODWORD(v19) = *(_DWORD*)(a1 + 128);
    if (*(float*)&v19 > 0x1.4000000000000p+3f &&
        ((v20 = *(_QWORD*)(a1 + 56)) == 0 ||
         (*(_QWORD*)(v20 + 8) != -1 ? (v21 = *(_QWORD*)(a1 + 64) == 0)
                                    : (v21 = true),
          v21))) {
      v22 = *(_QWORD*)(a1 + 32);
      if (v22 == 0 || *(_QWORD*)(v22 + 8) == -1) {
        v23 = 0;
      }
      else {
        v23 = *(_QWORD*)(a1 + 40);
      }
      v24 = v23 != 0;
    }
    else {
      v24 = false;
    }
    if ((v14 | v24) == 1) {
      if (*(_BYTE*)(a1 + 80) == 1) {
        *(_DWORD*)(a1 + 128) = -1082130432;
      }
      else {
        *(_DWORD*)(a1 + 128) = 1092616192;
        v25 = *(_QWORD*)(a1 + 32);
        if (v25 == 0 || *(_QWORD*)(v25 + 8) == -1) {
          v26 = 0;
        }
        else {
          v26 = *(_QWORD*)(a1 + 40);
        }
        v27 = GameRoutine_10f9f00(v26, *(_QWORD*)(a1 + 8), v19);
        if (v14 != 0) {
          v31 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(a1 + 8) + 304LL),
                          *(float32x4_t*)(a1 + 112));
          *(_QWORD*)&v32 = 0x4170000041700000LL;
          *((_QWORD*)&v32 + 1) = 0x4170000041700000LL;
        }
        else {
          v33 = v27;
          nn_os_LockMutex(&game_g_random_mutex);
          v34 = game_map_MapRandom_instance__ptr[0];
          v35 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v36 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v37 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v34 + 1) = v35;
          v38 = (v37 >> 8) ^ (v36 >> 19) ^ v37 ^ v36;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v34) = v36;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v34 + 4) = v38;
          v39 = v38 & 0x7FFFFFFF;
          *((_QWORD*)&v40 + 1) =
              LANES128_OF(nn_os_UnlockMutex_alt1(&game_g_random_mutex))
                  .n128_u64[1];
          *(double*)&v40 = (double)v39 / 0x1.fffffffc00000p+30;
          *(float*)&v40 = *(double*)&v40;
          *(float*)&v40 =
              (float)((float)(*(float*)&v40 + -0x1.0000000000000p-1f) +
                      (float)(*(float*)&v40 + -0x1.0000000000000p-1f)) *
              0x1.921fb60000000p+2f;
          v67 = v40;
          nn_os_LockMutex(&game_g_random_mutex);
          v41 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v34);
          v42 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v34 + 4);
          v43 = *(_DWORD*)v34 ^ (*(_DWORD*)v34 << 11);
          *(_DWORD*)v34 = *((_DWORD*)v34 + 1);
          *((_DWORD*)v34 + 1) = v41;
          v44 = (v43 >> 8) ^ (v42 >> 19) ^ v43 ^ v42;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v34) = v42;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v34 + 4) = v44;
          v45 = v44 & 0x7FFFFFFF;
          *((_QWORD*)&v46 + 1) =
              LANES128_OF(nn_os_UnlockMutex_alt1(&game_g_random_mutex))
                  .n128_u64[1];
          *(double*)&v46 = (double)v45 / 0x1.fffffffc00000p+30;
          *(float*)&v46 = *(double*)&v46;
          *(float*)&v46 =
              (float)((float)(*(float*)&v46 + -0x1.0000000000000p-1f) +
                      (float)(*(float*)&v46 + -0x1.0000000000000p-1f)) *
              0x1.921fb60000000p+2f;
          v66 = v46;
          nn_os_LockMutex(&game_g_random_mutex);
          v47 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v34);
          v48 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v34 + 4);
          v49 = *(_DWORD*)v34 ^ (*(_DWORD*)v34 << 11);
          *(_DWORD*)v34 = *((_DWORD*)v34 + 1);
          *((_DWORD*)v34 + 1) = v47;
          v50 = (v49 >> 8) ^ (v48 >> 19) ^ v49 ^ v48;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v34) = v48;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v34 + 4) = v50;
          LODWORD(v34) = v50 & 0x7FFFFFFF;
          *((_QWORD*)&v51 + 1) =
              LANES128_OF(nn_os_UnlockMutex_alt1(&game_g_random_mutex))
                  .n128_u64[1];
          *(double*)&v51 = (double)(unsigned int)v34 / 0x1.fffffffc00000p+30;
          *(_QWORD*)&v52 = __PAIR64__(LODWORD(v66), LODWORD(v67));
          *(float*)&v51 = *(double*)&v51;
          *(float*)&v51 =
              (float)((float)(*(float*)&v51 + -0x1.0000000000000p-1f) +
                      (float)(*(float*)&v51 + -0x1.0000000000000p-1f)) *
              0x1.921fb60000000p+2f;
          *((_QWORD*)&v52 + 1) = LODWORD(v51);
          v69_.v69 = *(float32x4_t*)&v52;
          PhysicsObject_10f9fe0(v33, &v69_.v69, v51, v52, v66, v67);
          v27 = v33;
          v31 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(a1 + 8) + 304LL),
                          *(float32x4_t*)(a1 + 112));
          *(_QWORD*)&v32 = 0x4120000041200000LL;
          *((_QWORD*)&v32 + 1) = 0x4120000041200000LL;
        }
        v69_.v69 = vmulq_f32(v31, *(float32x4_t*)&v32);
        PhysicsObject_10fa1a0(v27, &v69_.v69, *(long double*)&v69_.v69, v32);
        v54 = *(_QWORD*)(a1 + 56);
        if (v54 != 0 && *(_QWORD*)(v54 + 8) != -1) {
          v55 = *(_QWORD*)(a1 + 64);
          if (v55 != 0) {
            *(_DWORD*)(v55 + 800) |= 0x80u;
          }
        }
      }
    }
    v56 = *(_OWORD*)(a1 + 96);
    v57 = *(_DWORD**)(a1 + 8);
    *(_QWORD*)(a1 + 112) = v56;
    v58 = *(_OWORD*)(a1 + 112);
    *((_QWORD*)&v58 + 1) = DWORD2(v56);
    *(_OWORD*)(a1 + 112) = v58;
    *(_DWORD*)(a1 + 96) = v57[76];
    *(_DWORD*)(a1 + 100) = v57[77];
    v59 = *(_OWORD*)(a1 + 96);
    *((_QWORD*)&v59 + 1) = (unsigned int)v57[78];
    *(_OWORD*)(a1 + 96) = v59;
  }
  else {
    v9 = GameRoutine_a8c380(*(_QWORD*)(a1 + 8), nullptr);
    LANES128(v69_.v69).n128_u64[0] = *(_QWORD*)(a1 + 8);
    GameRoutine_a867a0(&v69_.v69, v9);
  }
}

void game_10ca6e0(__int64 a1, __n128 a2, long double a3, long double a4)
{

#pragma clang fp contract(off)
  _QWORD* v4;
  _QWORD* v5;
  __int64 v7;
  __int64 v8;
  float v9;
  int v10;
  _QWORD* v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v4 = *(_QWORD**)a1;
  v5 = *(_QWORD**)(a1 + 8);
  if (*(_QWORD**)a1 != v5) {
    *(_QWORD*)&a4 = 0;
    PSEUDO_LOW_LANE128(a2, n128_u32, 1099265920);
    LODWORD(a3) = 1148846080;
    v7 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0];
    do {
      v8 = *v4;
      v9 = (float)(*(float*)(v7 + 160) * 0x1.0aef000000000p+4f) /
           0x1.f400000000000p+9f;
      *(float*)(*v4 + 48LL) = fmaxf(*(float*)(*v4 + 48LL) - v9, 0x0.0p+0f);
      if (v9 > 0x0.0p+0f) {
        v10 = *(_DWORD*)(v8 + 52);
        if (v10 <= 1) {
          v10 = 1;
        }
        *(_DWORD*)(v8 + 52) = v10 - 1;
      }
      v4 += 2;
    } while (v4 != v5);
    v4 = *(_QWORD**)a1;
    v5 = *(_QWORD**)(a1 + 8);
  }
  if (v4 != v5) {
    while (1) {
      if (*(_DWORD*)(*v4 + 52LL) == 0) {
        PSEUDO_LOW_LANE128(a2, n128_u32, *(_DWORD*)(*v4 + 48LL));
        if (LANES128(a2).n128_f32[0] <= 0x0.0p+0f) {
          break;
        }
      }
      v4 += 2;
      if (v4 == v5) {
        return;
      }
    }
  }
  v11 = v4 + 2;
  if (v4 != v5 && v11 != v5) {
    do {
      v13 = *v11;
      if (*(_DWORD*)(*v11 + 52LL) != 0 ||
          (LANES128(a2).n128_u32[0] = *(_DWORD*)(v13 + 48),
           LANES128(a2).n128_f32[0] > 0x0.0p+0f)) {
        v14 = v11[1];
        *v11 = 0;
        v11[1] = 0;
        v15 = v4[1];
        *v4 = v13;
        v4[1] = v14;
        if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double, long double, long double))(
              *(_QWORD*)v15 + 16LL))(v15, *(long double*)&a2, a3, a4);
          a2 = std___1___shared_weak_count___release_weak(v15);
        }
        v4 += 2;
      }
      v11 += 2;
    } while (v11 != v5);
    v5 = *(_QWORD**)(a1 + 8);
  }
  if (v4 != v5) {
    do {
      v16 = *(v5 - 1);
      if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double, long double, long double))(
            *(_QWORD*)v16 + 16LL))(v16, *(long double*)&a2, a3, a4);
        a2 = std___1___shared_weak_count___release_weak(v16);
      }
      v5 -= 2;
    } while (v5 != v4);
    *(_QWORD*)(a1 + 8) = v4;
  }
}

float32x4_t game_10d95c0(__int64 a1)
{
  _QWORD* v1;
  float32x4_t v3;
  float32x4_t v4;
  float32x4_t v5;
  __int128 v6;
  float32x4_t* v7;
  float32x4_t v8;
  int8x16_t v9;
  float32x4_t v10;
  float32x2_t v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  int8x16_t v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float32x4_t v29;
  float32x4_t v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  int8x16_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  int8x16_t v45;
  float32x4_t v46;
  float v47;
  float v48;
  float v49;
  float v50;
  unsigned int v51;
  float v52;
  float v53;
  float32x4_t v54;
  float32x4_t result;
  __int128 v56;
  float32x4_t v57;
  float v58;
  float32x4_t v59;
  float32x4_t v60;

  v1 = *(_QWORD**)(a1 + 8);
  v3 = *(float32x4_t*)(v1[1] + 48LL);
  v4 = *(float32x4_t*)(v1[5] + 48LL);
  v60 = v3;
  v5 = *(float32x4_t*)(v1[9] + 48LL);
  v1[2] = LANES128(v3).n128_u64[0];
  v6 = *((_OWORD*)v1 + 1);
  *((_QWORD*)&v6 + 1) = LANES128(v3).n128_u32[2];
  *((_OWORD*)v1 + 1) = v6;
  v7 = *(float32x4_t**)(a1 + 8);
  v8 = vsubq_f32(v7[5], v3);
  v9 = vmulq_f32(v8, v8);
  LANES128(v9).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  LANES64(v11).n64_u64[0] =
      LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  LANES128(v10).n128_u64[1] = LANES128(v10).n128_u64[0];
  v12 = vrsqrteq_f32(v10);
  v13 = vmulq_f32(v12, vrsqrtsq_f32(v12, vmulq_f32(v10, v12)));
  v14 = vbicq_s8(
      vmulq_f32(v8, vmulq_f32(v13, vrsqrtsq_f32(v13, vmulq_f32(v10, v13)))),
      vceqzq_f32(v10));
  v15 = vsubq_f32(v3, v4);
  v16 = vsubq_f32(v4, v5);
  v17 = vmulq_f32(v15, v15);
  v18 = vmulq_f32(v16, v16);
  LANES128(v17).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
          .n64_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
          .n64_u64[0];
  v19 = LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]))))
            .n64_f32[0];
  v20 = LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]))))
            .n64_f32[0];
  v21 = 0x0.0p+0f;
  v58 = v19;
  v59 = v14;
  if (LANES64(v11).n64_f32[0] >= (float)(v19 + v20)) {
    v29 = vaddq_f32(v3, vmulq_n_f32(v14, v19 + v20));
    LANES128(v7[5]).n128_u64[0] = LANES128(v29).n128_u64[0];
    v30 = v7[5];
    LANES128(v30).n128_u64[1] = LANES128(v29).n128_u32[2];
    v7[5] = v30;
    goto LABEL_17;
  }
  v22 = (float)((float)(LANES64_OF(vmul_f32(v11, v11)).n64_f32[0] +
                        (float)(v19 * v19)) -
                (float)(v20 * v20)) /
        (float)(LANES64(v11).n64_f32[0] * (float)(v19 + v19));
  if (v22 <= 0x1.0000000000000p+0f) {
    v23 = v22;
  }
  else {
    v23 = 0x1.0000000000000p+0f;
  }
  if (v22 >= -0x1.0000000000000p+0f) {
    v24 = v23;
  }
  else {
    v24 = -0x1.0000000000000p+0f;
  }
  v25 = sqrtf(0x1.0000000000000p+0f - (float)(v24 * v24));
  if (v24 >= 0x0.0p+0f) {
    v32 = *(float*)GameData_212c2f0;
    v33 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
    v34 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
    v35 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
    if (v24 > 0x1.6a09e60000000p-1f) {
      v36 = v25 / v24;
      v21 = v36 * (float)((
                              float)((
                                         float)((float)((float)(v35 + (float)((float)((float)((float)(v34 + (float)((float)((float)((float)(v33 + (float)((float)((float)(v32 * (float)(v36 * v36)) - *((float*)GameData_212c2f0 + 1)) * (float)(v36 * v36))) * (float)(v36 * v36)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) * (float)(v36 *
                                                                                                                                                                                                                                                                                                                                                                      v36))) *
                                                                                              (float)(v36 *
                                                                                                      v36)) -
                                                                                      *(float*)((char*)((
                                                                                                    __int128*)0x10LL) +
                                                                                                (_QWORD)
                                                                                                    GameData_212c2f0 +
                                                                                                4)) *
                                                                              (float)(v36 *
                                                                                      v36))) *
                                                        (float)(v36 * v36)) -
                                                *(float*)((char*)((
                                                              __int128*)0x10LL) +
                                                          (_QWORD)
                                                              GameData_212c2f0 +
                                                          12)) *
                                     (float)(v36 * v36)) +
                          0x1.0000000000000p+0f);
      goto LABEL_17;
    }
    v26 = v24 / v25;
    v27 = 0x1.921fb60000000p+0f;
    v28 =
        (float)((float)((float)((float)(v35 +
                                        (float)((float)((float)((float)(v34 +
                                                                        (float)((float)((float)((float)(v33 +
                                                                                                        (float)((float)((float)(v32 *
                                                                                                                                (float)(v26 *
                                                                                                                                        v26)) -
                                                                                                                        *((float*)
                                                                                                                              GameData_212c2f0 +
                                                                                                                          1)) *
                                                                                                                (float)(v26 *
                                                                                                                        v26))) *
                                                                                                (float)(v26 *
                                                                                                        v26)) -
                                                                                        *(float*)((char*)((
                                                                                                      _UNKNOWN**)0x8LL) +
                                                                                                  (_QWORD)
                                                                                                      GameData_212c2f0 +
                                                                                                  4)) *
                                                                                (float)(v26 *
                                                                                        v26))) *
                                                                (float)(v26 *
                                                                        v26)) -
                                                        *(float*)((char*)((
                                                                      __int128*)0x10LL) +
                                                                  (_QWORD)
                                                                      GameData_212c2f0 +
                                                                  4)) *
                                                (float)(v26 * v26))) *
                                (float)(v26 * v26)) -
                        *(float*)((char*)((__int128*)0x10LL) +
                                  (_QWORD)GameData_212c2f0 + 12)) *
                (float)(v26 * v26)) +
        0x1.0000000000000p+0f;
  }
  else {
    if (v24 >= -0x1.6a09e60000000p-1f) {
      v31 = (float)-v24 / v25;
      v21 =
          (float)(PSEUDO_UNFUSED(
              v31 * (float)((float)((float)-(
                                        float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                         (_QWORD)
                                                             GameData_212c2f0 +
                                                         12) -
                                               (float)((
                                                           float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((
                                                                                                                                                                                                                                                                                                               char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v31 *
                                                                                                                                                                                                                                                                                                                                                                                                v31))) *
                                                                                                                                                                                                                                                                                                       (float)(v31 *
                                                                                                                                                                                                                                                                                                               v31))) *
                                                                                                                                                                                                                                                                                    (float)(v31 *
                                                                                                                                                                                                                                                                                            v31))) *
                                                                                                                                                                                                                                                            (float)(v31 *
                                                                                                                                                                                                                                                                    v31))) *
                                                                                                                                                                         (float)(v31 *
                                                                                                                                                                                 v31))) *
                                                                          (float)(v31 *
                                                                                  v31))) *
                                                       (float)(v31 * v31))) *
                                    (float)(v31 * v31)) +
                            0x1.0000000000000p+0f))) +
          0x1.921fb60000000p+0f;
      goto LABEL_17;
    }
    v26 = (float)-v25 / v24;
    v27 = 0x1.921fb60000000p+1f;
    v28 = (float)((float)-(
                      float)(*(float*)((char*)((__int128*)0x10LL) +
                                       (_QWORD)GameData_212c2f0 + 12) -
                             (float)((float)(*(float*)((char*)((
                                                           __int128*)0x10LL) +
                                                       (_QWORD)
                                                           GameData_212c2f0 +
                                                       8) +
                                             (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((
                                                                                                                                                                                                                                           float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                          (float)((
                                                                                                                                                                                                                                                                      float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(
                                                                                                                                                                                                                                                                                                                                                            float)(*(
                                                                                                                                                                                                                                                                                                                                                                       (float*)
                                                                                                                                                                                                                                                                                                                                                                           GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                                                       1) -
                                                                                                                                                                                                                                                                                                                                                                   (float)(*(float*)GameData_212c2f0 * (float)(v26 *
                                                                                                                                                                                                                                                                                                                                                                                                               v26))) *
                                                                                                                                                                                                                                                                                                                                                        (float)(v26 *
                                                                                                                                                                                                                                                                                                                                                                v26))) *
                                                                                                                                                                                                                                                                  (float)(v26 *
                                                                                                                                                                                                                                                                          v26))) *
                                                                                                                                                                                                                                       (float)(v26 *
                                                                                                                                                                                                                                               v26))) *
                                                                                                                                                    (float)(v26 *
                                                                                                                                                            v26))) *
                                                     (float)(v26 * v26))) *
                                     (float)(v26 * v26))) *
                  (float)(v26 * v26)) +
          0x1.0000000000000p+0f;
  }
  v21 = v27 - (float)(PSEUDO_UNFUSED(v26 * v28));
LABEL_17:
  v57 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 40LL) + 32LL);
  if (*(float*)(a1 + 72) >= 0x0.0p+0f) {
    v37 = -v21;
  }
  else {
    v37 = v21;
  }
  v38 = sinf(v37);
  v39 = cosf(v37);
  v40 = *(_QWORD*)(a1 + 8);
  v41 = vmulq_f32(v57, v57);
  LANES128(v41).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v41, v41, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
          .n64_u64[0];
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
          .n64_u64[0];
  LANES128(v41).n128_u64[1] = LANES128(v41).n128_u64[0];
  v42 = vrsqrteq_f32(v41);
  v43 = vmulq_f32(v42, vrsqrtsq_f32(v42, vmulq_f32(v41, v42)));
  v44 = vmulq_f32(v43, vrsqrtsq_f32(v43, vmulq_f32(v41, v43)));
  v45 = vceqzq_f32(v41);
  LANES128(v41).n128_u32[3] = 0;
  v46 = vbicq_s8(vmulq_f32(v57, v44), v45);
  v47 = (float)(0x1.0000000000000p+0f - v39) * LANES128(v46).n128_f32[0];
  v48 = vmuls_lane_f32(0x1.0000000000000p+0f - v39,
                       COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]), 1);
  v49 = vmuls_lane_f32(v38, v46, 2) + (float)(v47 * LANES128(v46).n128_f32[1]);
  v50 = (float)(v48 * LANES128(v46).n128_f32[2]) -
        (float)(PSEUDO_UNFUSED(v38 * LANES128(v46).n128_f32[0]));
  *(float*)&v51 = (float)(PSEUDO_UNFUSED(v38 * LANES128(v46).n128_f32[0])) +
                  (float)(v48 * LANES128(v46).n128_f32[2]);
  v52 = vmuls_lane_f32(LANES128(v46).n128_f32[2], v46, 2);
  PSEUDO_LOW_LANE128(v45, n128_f32,
                     -(float)(PSEUDO_UNFUSED(v38 * LANES128(v46).n128_f32[1])));
  v53 =
      v39 + (float)((float)(0x1.0000000000000p+0f - v39) *
                    vmuls_lane_f32(
                        LANES128(v46).n128_f32[1],
                        COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]), 1));
  LANES128(v54).n128_u32[3] = 0;
  LANES128(v41).n128_f32[0] =
      vmuls_lane_f32(v38, COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]),
                     1) +
      (float)(v47 * LANES128(v46).n128_f32[2]);
  LANES128(v54).n128_f32[0] =
      v39 + (float)((float)(0x1.0000000000000p+0f - v39) *
                    LANES128_OF(vmulq_f32(v46, v46)).n128_f32[0]);
  LANES128(v46).n128_f32[0] =
      (float)(v47 * LANES128(v46).n128_f32[1]) -
      (float)(PSEUDO_UNFUSED(v38 * LANES128(v46).n128_f32[2]));
  LANES128(v41).n128_f32[1] = v50;
  LANES128(v54).n128_f32[1] = v49;
  LANES128(v46).n128_f32[1] = v53;
  LANES128(v41).n128_f32[2] =
      v39 + (float)((float)(0x1.0000000000000p+0f - v39) * v52);
  LANES128(v54).n128_f32[2] =
      LANES128(v45).n128_f32[0] + (float)(v47 * LANES128(v46).n128_f32[2]);
  LANES128(v46).n128_u64[1] = v51;
  result = vaddq_f32(
      v60,
      vmulq_n_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v54, LANES128(v59).n128_f32[0]), v46,
                          COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0]), 1),
                      v41, v59, 2),
                  v58));
  *(_QWORD*)(v40 + 48) = LANES128(result).n128_u64[0];
  v56 = *(_OWORD*)(v40 + 48);
  *((_QWORD*)&v56 + 1) = LANES128(result).n128_u32[2];
  *(_OWORD*)(v40 + 48) = v56;
  return result;
}

void game_10dd210()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;

  GameData_2235ed0 = (__int64)"hub::ui";
  GameData_2235ed8 = (__int64)game_script_hub_ui_HideAllOnPlayable;
  GameData_2235ee0 = 0;
  GameData_2235ee8 = 0;
  v0 = GameData_212bf18[0];
  GameData_2235f10 = (__int64)"hub::ui";
  GameData_2235f18 = (__int64)HubUiNatives_10da250;
  GameData_2235ef0 = 0;
  GameData_2235ef8 = 2;
  GameData_2235f20 = 0;
  GameData_2235f28 = 0;
  GameData_2235f30 = 0;
  GameData_2235f38 = 2;
  v1 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_2235ec0;
  GameData_2235f40 = (__int64)"void TryClearOnPlayableSchedule()";
  GameData_2235f48 = (__int64)&GameData_2235ed0;
  GameData_2235f60 = 0;
  GameData_2235f68 = 0;
  GameData_2235f70 = 0;
  GameData_2235f78 = 2;
  GameData_2235f50 = (__int64)"hub::ui";
  GameData_2235f58 = (__int64)game_script_hub_ui_SetBindHideAll;
  GameData_2235ec0 = (__int64)"hub::ui";
  GameData_2235ec8 = v1;
  v2 = *v0;
  GameData_2235f00 = (__int64)"void HideAllOnPlayable()";
  GameData_2235f08 = v2;
  GameData_2235f80 = (__int64)"void SetBindHideAll(bool isBind)";
  GameData_2235f88 = (__int64)&GameData_2235f10;
  GameData_2235f90 = (__int64)"hub::ui";
  GameData_2235f98 = (__int64)game_script_hub_ui_SetBindHideCommon;
  GameData_2235fa0 = 0;
  GameData_2235fa8 = 0;
  GameData_2235fb0 = 0;
  GameData_2235fb8 = 2;
  GameData_2236050 = (__int64)"hub::ui";
  GameData_2236058 = (__int64)GameRoutine_10da940;
  GameData_2236070 = 0;
  GameData_2236060 = 0;
  GameData_2236068 = 0;
  GameData_2236078 = 2;
  GameData_2235fc0 = (__int64)"void SetBindHideCommon(bool isBind)";
  GameData_2235fc8 = (__int64)&GameData_2235f50;
  GameData_2235fd0 = (__int64)"hub::ui";
  GameData_2235fd8 = (__int64)game_script_hub_ui_SetBindHideSchedule;
  GameData_2235ff0 = 0;
  GameData_2235fe0 = 0;
  GameData_2235fe8 = 0;
  GameData_2235ff8 = 2;
  GameData_2236000 = (__int64)"void SetBindHideSchedule(bool isBind)";
  GameData_2236008 = (__int64)&GameData_2235f90;
  GameData_2236010 = (__int64)"hub::ui";
  GameData_2236018 = (__int64)hub_ui_RunReminderTelop;
  GameData_2236030 = 0;
  GameData_2236020 = 0;
  GameData_2236028 = 0;
  GameData_2236038 = 2;
  GameData_2236040 = (__int64)"void RunReminderTelop()";
  GameData_2236048 = (__int64)&GameData_2235fd0;
  GameData_2236080 = (__int64)"void GainItem(string iid)";
  GameData_2236088 = (__int64)&GameData_2236010;
  GameData_22360b0 = 0;
  GameData_22360a0 = 0;
  GameData_22360a8 = 0;
  GameData_22360b8 = 2;
  GameData_2236090 = (__int64)"hub::ui";
  GameData_2236098 = (__int64)hub_ui_GainItemCount;
  GameData_22360c0 = (__int64)"void GainItemCount(string iid, int count)";
  GameData_22360c8 = (__int64)&GameData_2236050;
  GameData_22360d0 = (__int64)"hub::ui";
  GameData_22360d8 = (__int64)GameRoutine_10db040;
  GameData_22360f0 = 0;
  GameData_22360e0 = 0;
  GameData_22360e8 = 0;
  GameData_22360f8 = 2;
  GameData_22361d0 = (__int64)"hub::ui";
  GameData_22361d8 = (__int64)hub_ui_Tutorial;
  GameData_22361f0 = 0;
  GameData_22361e0 = 0;
  GameData_22361e8 = 0;
  GameData_22361f8 = 2;
  GameData_2236100 = (__int64)"void GainGold(as_s32 gold)";
  GameData_2236108 = (__int64)&GameData_2236090;
  GameData_2236110 = (__int64)"hub::ui";
  GameData_2236118 = (__int64)hub_ui_GainGoldFund;
  GameData_2236130 = 0;
  GameData_2236120 = 0;
  GameData_2236128 = 0;
  GameData_2236138 = 2;
  GameData_2236140 = (__int64)"void GainGoldFund(as_s32 gold)";
  GameData_2236148 = (__int64)&GameData_22360d0;
  GameData_2236150 = (__int64)"hub::ui";
  GameData_2236158 = (__int64)GameRoutine_10db5c0;
  GameData_2236170 = 0;
  GameData_2236160 = 0;
  GameData_2236168 = 0;
  GameData_2236178 = 2;
  GameData_2236180 = (__int64)"void GainHonor(as_s32 honor)";
  GameData_2236188 = (__int64)&GameData_2236110;
  GameData_2236190 = (__int64)"hub::ui";
  GameData_2236198 = (__int64)HubUiNatives_10db830;
  GameData_22361b0 = 0;
  GameData_22361a0 = 0;
  GameData_22361a8 = 0;
  GameData_22361b8 = 2;
  GameData_22361c0 = (__int64)"bool IsNeedShowTutorial(const string& id)";
  GameData_22361c8 = (__int64)&GameData_2236150;
  GameData_2236200 = (__int64)"void Tutorial(const string& id)";
  GameData_2236208 = (__int64)&GameData_2236190;
  GameData_2236230 = 0;
  GameData_2236220 = 0;
  GameData_2236228 = 0;
  GameData_2236238 = 2;
  GameData_2236210 = (__int64)"hub::ui";
  GameData_2236218 = (__int64)hub_ui_TutorialForceShow;
  GameData_2236240 = (__int64)"void TutorialForceShow(const string& id)";
  GameData_2236248 = (__int64)&GameData_22361d0;
  GameData_2236250 = (__int64)"hub::ui";
  GameData_2236258 = (__int64)GameRoutine_10dbe60;
  GameData_2236270 = 0;
  GameData_2236260 = 0;
  GameData_2236268 = 0;
  GameData_2236278 = 2;
  GameData_2236350 = (__int64)"hub::ui";
  GameData_2236358 =
      (__int64)game_script_hub_ui_GetTalkMainQuestResultWithReset;
  GameData_2236370 = 0;
  GameData_2236360 = 0;
  GameData_2236368 = 0;
  GameData_2236378 = 2;
  GameData_2236280 = (__int64)"void Dialog(const string& mid)";
  GameData_2236288 = (__int64)&GameData_2236210;
  GameData_2236290 = (__int64)"hub::ui";
  GameData_2236298 = (__int64)hub_ui_ExDialog;
  GameData_22362b0 = 0;
  GameData_22362a0 = 0;
  GameData_22362a8 = 0;
  GameData_22362b8 = 2;
  GameData_22362c0 = (__int64)"void ExDialog(const string& mid)";
  GameData_22362c8 = (__int64)&GameData_2236250;
  GameData_22362d0 = (__int64)"hub::ui";
  GameData_22362d8 = (__int64)GameRoutine_10dc380;
  GameData_22362f0 = 0;
  GameData_22362e0 = 0;
  GameData_22362e8 = 0;
  GameData_22362f8 = 2;
  GameData_2236300 = (__int64)"void TalkMainQuest(const string& head=\"\")";
  GameData_2236308 = (__int64)&GameData_2236290;
  GameData_2236310 = (__int64)"hub::ui";
  GameData_2236318 = (__int64)GameRoutine_10dc600;
  GameData_2236330 = 0;
  GameData_2236320 = 0;
  GameData_2236328 = 0;
  GameData_2236338 = 2;
  GameData_2236340 = (__int64)"void TalkMainQuest(const hub::schedule::Date& "
                              "date, const string& head=\"\")";
  GameData_2236348 = (__int64)&GameData_22362d0;
  GameData_2236380 = (__int64)"int GetTalkMainQuestResultWithReset()";
  GameData_2236388 = (__int64)&GameData_2236310;
  GameData_22363b0 = 0;
  GameData_22363a0 = 0;
  GameData_22363a8 = 0;
  GameData_22363b8 = 2;
  GameData_2236390 = (__int64)"hub::ui";
  GameData_2236398 = (__int64)GameRoutine_10dc960;
  GameData_22363c0 = (__int64)"void TalkSideStory(const string& ssid)";
  GameData_22363c8 = (__int64)&GameData_2236350;
  GameData_22363d0 = (__int64)"hub::ui";
  GameData_22363d8 =
      (__int64)game_script_hub_ui_GetTalkSideStoryResultWithReset;
  GameData_22363f0 = 0;
  GameData_22363e0 = 0;
  GameData_22363e8 = 0;
  GameData_22363f8 = 2;
  GameData_2236400 = (__int64)"int GetTalkSideStoryResultWithReset()";
  GameData_2236408 = (__int64)&GameData_2236390;
  GameData_2236410 = (__int64)"hub::ui";
  GameData_2236418 = (__int64)game_script_hub_ui_SetMsgArg_10dcc80;
  GameData_2236430 = 0;
  GameData_2236420 = 0;
  GameData_2236428 = 0;
  GameData_2236438 = 2;
  GameData_2236440 = (__int64)"void SetMsgArg(int index, int count)";
  GameData_2236448 = (__int64)&GameData_22363d0;
  GameData_2236450 = (__int64)"hub::ui";
  GameData_2236458 = (__int64)game_script_hub_ui_SetMsgArg_10dcd60;
  GameData_2236470 = 0;
  GameData_2236460 = 0;
  GameData_2236468 = 0;
  GameData_2236478 = 2;
  GameData_2236480 = (__int64)"void SetMsgArg(int index, const string& arg)";
  GameData_2236488 = (__int64)&GameData_2236410;
  GameData_2236490 = (__int64)"hub::ui";
  GameData_2236498 = (__int64)GameRoutine_10dce60;
  GameData_22364b0 = 0;
  GameData_22364a0 = 0;
  GameData_22364a8 = 0;
  GameData_22364b8 = 2;
  GameData_22364c0 = (__int64)"void RunRecruitResult(const string& arg)";
  GameData_22364c8 = (__int64)&GameData_2236450;
  *v0 = (__int64)&GameData_22364d0;
  GameData_22364f0 = 0;
  GameData_22364e0 = 0;
  GameData_22364e8 = 0;
  GameData_22364f8 = 2;
  GameData_22364d0 = (__int64)"hub::ui";
  GameData_22364d8 = (__int64)game_script_hub_ui_GetMessageDirect;
  GameData_2236500 = (__int64)"string GetMessageDirect(const string& label)";
  GameData_2236508 = (__int64)&GameData_2236490;
}

void game_10f03a0()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  __int64* v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  bool v15;
  _BYTE* v16;
  int v17;
  int* v18;
  int* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  _BYTE* v29;

  v0 = *(_QWORD*)(GameData_21ec7b0 + 8);
  if (v0 != 0 && (*(_BYTE*)(v0 + 113) & 0x80) != 0) {
    return;
  }
  v1 = *(_QWORD*)(v0 + 32);
  v2 = *(_QWORD*)(v0 + 40);
  if (v1 == v2) {
    v5 = &GameData_2235e30;
    v6 = *(_BYTE**)(v0 + 760);
    if (v6 == nullptr) {
      goto LABEL_15;
    }
  }
  else {
    v3 = 954437177 * ((unsigned __int64)(v2 - v1) >> 4) - 1;
    v4 = *(_DWORD*)(v0 + 56);
    if (v4 < v3) {
      v3 = *(_DWORD*)(v0 + 56);
    }
    if (v4 < 0) {
      v3 = 0;
    }
    v5 = (__int64*)(v1 + 144LL * v3);
    v6 = *(_BYTE**)(v0 + 760);
    if (v6 == nullptr) {
      goto LABEL_15;
    }
  }
  if (*v6 == 60) {
    if ((game_10f21c0(v6 + 1, 1u) & 1) != 0) {
      return;
    }
  }
  else if ((game_10f21c0(v6, 0) & 1) != 0) {
    return;
  }
LABEL_15:
  if (GameData_21ec7b0 != 0) {
    v7 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v7 != 0 && (*(_BYTE*)(v7 + 112) & 8) != 0) {
      v8 = *(_QWORD*)(GameData_21ec7b0 + 120);
      if (v8 != 0) {
        v9 = *(_QWORD*)(v8 + 40);
        v10 = *(_QWORD*)(v9 + 176);
        if ((*(_BYTE*)(v9 + 168) & 1) == 0) {
          v10 = *(_BYTE*)(v9 + 168) >> 1;
        }
        if (v10 == 12) {
          if ((*(_BYTE*)(v9 + 168) & 1) != 0) {
            v11 = *(__int64**)(v9 + 184);
          }
          else {
            v11 = (__int64*)(v9 + 169);
          }
          v12 = *v11;
          v13 = *((unsigned int*)v11 + 2);
          v15 =
              v12 == *(_QWORD*)"GambitAwake1" && v13 == *(unsigned int*)"ake1";
        }
        else {
          v15 = false;
        }
        *(_BYTE*)(*(_QWORD*)(v9 + 96) + 149LL) = v15;
        if ((*(_BYTE*)(v9 + 168) & 1) != 0) {
          v29 = *(_BYTE**)(v9 + 184);
        }
        else {
          v29 = (_BYTE*)(v9 + 169);
        }
        LegionGambitCamera_e5a880_alt1(*(float**)(v9 + 96), v29);
        return;
      }
    }
  }
  if ((game_10f0680((__int64)v5) & 1) != 0 ||
      (game_10f0920((__int64)v5) & 1) != 0) {
    return;
  }
  if ((*(_BYTE*)v5 & 0x80) == 0 ||
      (((v17 = *((_DWORD*)v5 + 2)) & 0xFFFFFFFE) != 2 ||
       ((v18 = (int*)v5 + 3 * (v17 & 1))[26] & 0x80000000) == 0 ||
       v18[24] <= 0) &&
          (((v19 = (int*)v5 + 3 * v17 + 24)[2] & 0x80000000) == 0 ||
           *v19 <= 0) &&
          *(__int64*)((char*)v5 + 12 * (((v17 - 1) & 0xFFFFFFFD) != 0) + 96) !=
              0) {
    v16 = (_BYTE*)v5[6];
    if (v16 != nullptr && (*v16 & 0x80) != 0) {
      return;
    }
    goto LABEL_51;
  }
  v20 = *(_QWORD*)(GameData_220f8c8 + 8);
  v21 = *(_QWORD*)(GameData_220f8c8 + 16);
  v22 = v21 - v20;
  if (v21 == v20) {
  LABEL_47:
    v24 = 0xFFFFFFFFLL;
  }
  else {
    v23 = (int*)(v20 + 24);
    v24 = 0;
    v25 = 0x4EC4EC4EC4EC4EC5LL * (v22 >> 3);
    while (1) {
      v26 = *v23;
      v23 += 26;
      if (v26 == 1986002266) {
        break;
      }
      if (v25 == ++v24) {
        goto LABEL_47;
      }
    }
  }
  if (GameData_21ec7b0 == 0 ||
      (v27 = *(_QWORD*)(GameData_21ec7b0 + 128)) == 0 ||
      (CombatCamera_1098000_alt1(v27, v24, *((_DWORD*)v5 + 3) == 0) & 1) == 0) {
  LABEL_51:
    if ((GameHr_10f1120((__int64)v5, 0) & 1) == 0 && GameData_21ec7b0 != 0) {
      v28 = *(_QWORD*)(GameData_21ec7b0 + 128);
      if (v28 != 0) {
        CombatCamera_1097e40(v28);
      }
    }
  }
}

__int64 game_10f1b40()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  int v5;
  __int64* v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  bool v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64* v28;
  unsigned int v29;
  char* v30;
  __int64 result;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  int* v37;
  int v38;
  unsigned __int8* v39;

  if (GameData_21ec7b0 == 0) {
    return 0;
  }
  v0 = *(_QWORD*)(GameData_21ec7b0 + 8);
  if (v0 != 0) {
    if ((*(_BYTE*)(v0 + 113) & 0x80) != 0) {
      return 0;
    }
    v1 = *(_QWORD*)(v0 + 32);
    v2 = *(_QWORD*)(v0 + 40);
    if (v1 == v2) {
      v6 = &GameData_2235e30;
    }
    else {
      v3 = *(_DWORD*)(v0 + 56);
      v4 = 954437177 * ((unsigned __int64)(v2 - v1) >> 4) - 1;
      if (v3 < v4) {
        v4 = v3;
      }
      if (v3 >= 0) {
        v5 = v4;
      }
      else {
        v5 = 0;
      }
      if (v1 == 0) {
        goto LABEL_29;
      }
      v6 = (__int64*)(v1 + 144LL * v5);
    }
    v7 = *((_DWORD*)v6 + 3);
    if (v7 <= 3) {
      v8 = GameData_21ec7b0 + 24LL * v7;
      v9 = *(_QWORD*)(v8 + 32);
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                  memory_order_relaxed);
        v10 = *(_QWORD**)(v8 + 40);
        v11 = *(_QWORD*)(v9 + 8) == -1 || v10 == nullptr;
        if (v11 || (v12 = v10[10]) == 0 ||
            (*(_QWORD*)(v12 + 8) != -1 ? (v13 = v10[11] == 0) : (v13 = true),
             v13 || *(_QWORD*)(v9 + 8) == -1)) {
          std___1___shared_weak_count___release_weak(v9);
        }
        else {
          std___1___shared_weak_count___release_weak(v9);
          v14 = *((unsigned int*)v6 + 17);
          v15 = *(_QWORD*)(v10[46] + 40LL);
          v16 = *(_QWORD*)(v15 + 392);
          v17 = *(_QWORD*)(v15 + 400);
          if (v17 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                      memory_order_relaxed);
            v18 = CharacterModel_1070c00(*(_QWORD*)(v16 + 11608), v14);
            if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v19 = v18;
              (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
              std___1___shared_weak_count___release_weak(v17);
              v18 = v19;
            }
          }
          else {
            v18 = CharacterModel_1070c00(*(_QWORD*)(v16 + 11608), v14);
          }
          if ((v18[12] & 1) != 0) {
            return 0;
          }
        }
      }
    }
  }
LABEL_29:
  v20 = GameData_21ec7b0;
  if (GameData_21ec7b0 == 0) {
    return 0;
  }
  v21 = *(_DWORD*)(*(_QWORD*)(GameData_21ec7b0 + 8) + 116LL);
  if ((v21 & 1) != 0) {
    if ((v21 & 0x800) != 0) {
      v29 = 1;
      if ((v21 & 0x80) != 0) {
      LABEL_44:
        v30 = "DieN";
        goto LABEL_48;
      }
    }
    else {
      if ((v21 & 0x400) == 0) {
        goto LABEL_31;
      }
      v29 = 0;
      if ((v21 & 0x80) != 0) {
        goto LABEL_44;
      }
    }
    if ((game_10f21c0("DieE",
                      (*(_DWORD*)(*(_QWORD*)(GameData_21ec7b0 + 8) + 116LL) &
                       0x800) == 0) &
         1) != 0) {
      return 1;
    }
    v30 = (char*)&GameData_1a8a3b5;
  LABEL_48:
    if ((game_10f21c0(v30, v29) & 1) == 0) {
      v20 = GameData_21ec7b0;
      if (GameData_21ec7b0 == 0) {
        return 0;
      }
      goto LABEL_31;
    }
    return 1;
  }
LABEL_31:
  v22 = *(_QWORD*)(v20 + 8);
  if (v22 == 0) {
    return 0;
  }
  if ((*(_BYTE*)(v22 + 114) & 0x80) != 0) {
    return 0;
  }
  v23 = *(_DWORD*)(v22 + 112);
  if ((v23 & 0x400000) == 0) {
    return 0;
  }
  v24 = *(_QWORD*)(v22 + 32);
  v25 = *(_QWORD*)(v22 + 40);
  if (v24 == v25) {
    v28 = &GameData_2235e30;
  }
  else {
    v26 = 954437177 * ((unsigned __int64)(v25 - v24) >> 4) - 1;
    v27 = *(_DWORD*)(v22 + 56);
    if (v27 < v26) {
      v26 = *(_DWORD*)(v22 + 56);
    }
    if (v27 < 0) {
      v26 = 0;
    }
    if (v24 == 0) {
      return 0;
    }
    v28 = (__int64*)(v24 + 144LL * v26);
  }
  if ((*(_BYTE*)v28 & 0x40) == 0 || (*(_BYTE*)(v22 + 116) & 1) != 0) {
    return 0;
  }
  *(_DWORD*)(v22 + 112) = v23 | 0x800000;
  v32 = *(_QWORD*)(*GameData_212ee68[0] + 8);
  v33 = *(_QWORD*)(*GameData_212ee68[0] + 16);
  v34 = v33 - v32;
  if (v33 == v32) {
  LABEL_59:
    result = *(_QWORD*)(v20 + 128);
    if (result == 0) {
      return result;
    }
    goto LABEL_60;
  }
  v35 = 0;
  v36 = 0x4EC4EC4EC4EC4EC5LL * (v34 >> 3);
  v37 = (int*)(v32 + 24);
  while (1) {
    v38 = *v37;
    v37 += 26;
    if (v38 == 1509688079) {
      break;
    }
    if (v36 == ++v35) {
      goto LABEL_59;
    }
  }
  result = *(_QWORD*)(v20 + 128);
  if (result != 0) {
    if ((v35 & 0x8000000000000000LL) == 0) {
      if (v36 <= (unsigned int)v35) {
        GameRoutine_d38e30();
      }
      v39 = (unsigned __int8*)(v32 + 104LL * (unsigned int)v35);
      return GameRoutine_1096780(
          result, v39, (*(_DWORD*)(*(_QWORD*)(v20 + 8) + 116LL) & 0x800) != 0);
    }
  LABEL_60:
    v39 = nullptr;
    return GameRoutine_1096780(
        result, v39, (*(_DWORD*)(*(_QWORD*)(v20 + 8) + 116LL) & 0x800) != 0);
  }
  return result;
}

__int64 game_1116110(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  char v7;

  *(_BYTE*)(a1 + 16) = 0;
  *(_BYTE*)(a1 + 21) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_QWORD*)a1 = game_character_GrassInteractionModule_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  if ((GameData_21d92e0 | 2) == 7) {
    v4 = game_109f1e0(a2, "Jnt_C_Spine1");
    if (v4 == 0) {
      v4 = game_109f1e0(a2, "Jnt_C_Hip");
      if (v4 == 0) {
        v4 = game_109f1e0(a2, "Loc_C_Trans");
      }
    }
    *(_QWORD*)(a1 + 48) = v4;
    v5 = game_109f1e0(a2, "Jnt_L_Nail21");
    if (v5 == 0) {
      v5 = game_109f1e0(a2, "Jnt_L_Toe");
    }
    *(_QWORD*)(a1 + 56) = v5;
    result = game_109f1e0(a2, "Jnt_R_Nail21");
    if (result == 0) {
      result = game_109f1e0(a2, "Jnt_R_Toe");
    }
    *(_QWORD*)(a1 + 64) = result;
    v7 = 1;
  }
  else {
    result = game_109f1e0(a2, "Loc_C_Trans");
    v7 = 0;
    *(_QWORD*)(a1 + 56) = result;
    *(_QWORD*)(a1 + 64) = result;
    *(_QWORD*)(a1 + 48) = result;
  }
  *(_BYTE*)(a1 + 21) = v7;
  return result;
}

__attribute__((swiftcall)) void game_111d140(PSEUDO_X8 x8_, __int64 result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236788,
                            memory_order_acquire) &
       1) == 0) {
    v10 = result;
    v9 = __cxa_guard_acquire(&GameData_2236788);
    result = v10;
    if (v9 != 0) {
      GameData_2236780 = wld_Crc32_alt1(0, "LifetimeModule", 14);
      __cxa_guard_release(&GameData_2236788);
      result = v10;
    }
  }
  v3 = *(_QWORD*)(result + 512);
  v4 = v3;
  do {
    if (v4 == *(_QWORD*)(result + 504)) {
      goto LABEL_7;
    }
    v5 = *(_DWORD*)(v4 - 16);
    v4 -= 16;
    v3 -= 16;
  } while (v5 != GameData_2236780);
  if (*(_QWORD*)(result + 512) == v3 || (v6 = *(_QWORD*)(v3 + 8)) == 0) {
  LABEL_7:
    result = GameRoutine_111d240();
    v6 = result;
  }
  v8 = *(_QWORD*)(v6 + 40);
  v7 = *(_QWORD*)(v6 + 48);
  *a2 = v8;
  a2[1] = v7;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_112eec0(PSEUDO_X8 x8_, __int64 a1,
                                             unsigned int a2, unsigned int a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  const char* v4;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 i;
  const char* v12;
  struct {
    __int64 v13;
    __int64 v14;
    __int64 v15;
  } v13_;
  char v16[64];

  if (a1 != 0) {
    v4 = *(const char**)(a1 + 40);
    if (v4 != nullptr && *v4 != 0) {
      v13_.v14 = 0;
      v13_.v15 = 0;
      v13_.v13 = 0;
      sprintf_alt1((__int64)v16, "MID_LGV_%d_M%02d_%s_m01", a2, a3, v4);
      v8 = msg_MessageManager_instance__ptr[0];
      if ((Registration_a4da40_alt1(*msg_MessageManager_instance__ptr[0],
                                    (__int64)v16) &
           1) != 0) {
      LABEL_5:
        GameRoutine_60a020_alt2((char*)&v13_.v13, v16);
        v9 = v13_.v14;
        *a4 = v13_.v13;
        a4[1] = v9;
        a4[2] = v13_.v15;
        return;
      }
      v10 = GameData_21c99d0;
      for (i = GameData_21c99d8; v10 != i; v10 += 24) {
        v12 = (*(_BYTE*)v10 & 1) != 0 ? *(const char**)(v10 + 16)
                                      : (const char*)(v10 + 1);
        sprintf_alt1((__int64)v16, "MID_LGV_%d_M%02d_%s_%s_m01", a2, a3, v4,
                     v12);
        if ((Registration_a4da40_alt1(*v8, (__int64)v16) & 1) != 0) {
          goto LABEL_5;
        }
        sprintf_alt1((__int64)v16, "MID_LGV_%d_M%02d_%s_%s_m01", a2, a3, v12,
                     v4);
        if ((Registration_a4da40_alt1(*v8, (__int64)v16) & 1) != 0) {
          goto LABEL_5;
        }
      }
      *(_WORD*)a4 = 0;
    }
    else {
      *(_WORD*)a4 = 0;
    }
  }
  else {
    *(_WORD*)a4 = 0;
  }
}

__int64 game_113fc70()
{
  _QWORD* v0;
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

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2258e00,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2258e00) != 0) {
    BYTE4(GameData_2258df0) = 0;
    GameData_2258df8 = 0;
    GameData_2258dd8 = (__int64)"TalkLog";
    GameData_2258de0 = (__int64)"MID_KeyHelp_TalkLog";
    LOBYTE(GameData_2258de8) = 1;
    *(__int64*)((char*)&GameData_2258de8 + 4) = 0x1300000004LL;
    __cxa_guard_release(&GameData_2258e00);
  }
  v4 = GameData_2258de8;
  v5 = GameData_2258df0;
  v6 = GameData_2258df8;
  v2 = GameData_2258dd8;
  v3 = GameData_2258de0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2258e60,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2258e60) != 0) {
    BYTE4(GameData_2258e50) = 0;
    GameData_2258e58 = 0;
    GameData_2258e38 = (__int64)"AutoPlay";
    GameData_2258e40 = (__int64)"MID_KeyHelp_AutoPlay";
    LOBYTE(GameData_2258e48) = 1;
    *(__int64*)((char*)&GameData_2258e48 + 4) = 0x1300000002LL;
    __cxa_guard_release(&GameData_2258e60);
  }
  v9 = GameData_2258e48;
  v10 = GameData_2258e50;
  v11 = GameData_2258e58;
  v7 = GameData_2258e38;
  v8 = GameData_2258e40;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2258e30,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2258e30) != 0) {
    BYTE4(GameData_2258e20) = 0;
    GameData_2258e28 = 0;
    GameData_2258e08 = (__int64)"WindowHide";
    GameData_2258e10 = (__int64)"MID_KeyHelp_WindowHide";
    LOBYTE(GameData_2258e18) = 1;
    *(__int64*)((char*)&GameData_2258e18 + 4) = 0x130000000ALL;
    __cxa_guard_release(&GameData_2258e30);
  }
  v14 = GameData_2258e18;
  v15 = GameData_2258e20;
  v16 = GameData_2258e28;
  v12 = GameData_2258e08;
  v13 = GameData_2258e10;
  v0 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 120,
                                               16, 0);
  GameData_22367d8 = (__int64)v0;
  v0[12] = v14;
  v0[13] = v15;
  v0[14] = v16;
  v0[8] = v10;
  v0[9] = v11;
  GameData_22367e0 = (__int64)(v0 + 15);
  GameData_22367e8 = (__int64)(v0 + 15);
  v0[10] = v12;
  v0[11] = v13;
  v0[4] = v6;
  v0[5] = v7;
  v0[6] = v8;
  v0[7] = v9;
  *v0 = v2;
  v0[1] = v3;
  v0[2] = v4;
  v0[3] = v5;
  GameRoutine_2b0();
  GameRoutine_2b0();
  GameData_2236820 = 0;
  game_talk_g_window_layout = 0;
  GameData_2236808 = 0;
  GameData_2236828 = 0;
  GameData_2236830 = 0;
  GameData_2236838 = 0;
  GameData_2236840 = 0;
  GameData_2236848 = 0;
  GameData_2236810 = 0;
  GameData_2236818 = (__int64)&GameData_2236820;
  GameData_2236850 = 1065353216;
  GameData_2236858 = 0;
  GameData_2236860 = 0;
  return GameRoutine_2b0();
}

__int64 game_1189190(__int64 result, char a2, char a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  float v11;
  __int128 v12;
  __int128 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int128 v26;

  if (result != 0 && *(_QWORD*)(result + 392) != 0) {
    v3 = *(_QWORD*)(result + 440);
    if (v3 != 0 && *(unsigned __int8*)(v3 + 16) <= 3u) {
      v4 = *(_QWORD*)(result + 8);
      *(_BYTE*)(result + 584) = a2;
      *(_BYTE*)(result + 585) = a3;
      v5 = result;
      if (v4 != 0) {
        v6 = *(char*)(v4 + 584);
        if ((v6 & 0x80000000) == 0) {
          v7 = *(char*)(v4 + 585);
          if ((v7 & 0x80000000) == 0) {
            v8 = *(_DWORD*)(v4 + 592);
            v9 = v6 | 0x100;
            v10 = v7 | 0x100;
            v11 = (float)(unsigned int)(v8 - 1) * 2.5f;
            if (v8 <= 0) {
              v11 = 0.0f;
            }
            *(_QWORD*)&v12 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v9 * 5.0f) + 2.5f) +
                        -0x1.4000000000000p+10f) +
                v11);
            v24 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v10 * 5.0f) + 2.5f) +
                        -0x1.4000000000000p+10f) +
                v11);
            *(float*)&v25 = (float)((float)((float)((float)v9 * 5.0f) + 2.5f) +
                                    -0x1.4000000000000p+10f) +
                            v11;
            *((_QWORD*)&v12 + 1) = v24;
            v26 = v12;
            *(_QWORD*)&v13 =
                __PAIR64__(COERCE_UNSIGNED_INT(Unit_6c7fa0(v4, &v26)), v25);
            *((_QWORD*)&v13 + 1) = v24;
            v26 = v13;
            Cursor_734a80(v5 + 48, &v26);
            UnitActor_81ba20(v5);
            result = v5;
          }
        }
        if (*(_QWORD*)(result + 264) != 0) {
          CharacterBuilder_1084780(*(_QWORD*)(result + 264));
          result = v5;
        }
      }
      if (*(_WORD*)(result + 1964) != 0) {
        v14 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                         8LL * *(unsigned __int16*)(result + 1964));
        if (v14 != 0 && (unsigned int)*(unsigned __int8*)(v14 + 105) - 3 <= 1) {
          v15 = *(char*)(result + 584);
          v16 = *(char*)(result + 585);
          v17 = v15 - *(unsigned __int8*)(result + 1960);
          v18 = v16 - *(unsigned __int8*)(result + 1961);
          if (((v18 * v18) | (v17 * v17)) != 0) {
            *(_BYTE*)(result + 1960) = v15;
            v19 = *(_BYTE*)(result + 1962);
            *(_BYTE*)(result + 1961) = v16;
            *(_BYTE*)(result + 1962) = v19 + v17;
            *(_BYTE*)(result + 1963) += v18;
          }
        }
      }
      v20 = GameData_21ca300;
      if (GameData_21ca300 != 0) {
        v21 = *(_QWORD*)(GameData_21ca300 + 96);
        Image_72b4a0(v21);
        Image_72b6c0(v21);
        Image_72a260(*(_QWORD*)(v20 + 152));
        result = v5;
      }
      if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
          (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
        v22 = *(_QWORD*)(result + 440);
        if (v22 != 0 && *(unsigned __int8*)(v22 + 16) <= 8u &&
            game_map_UnitFlags_instance_ != 0) {
          v23 = *(unsigned __int8*)(result + 2088);
          if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v23) & 1) != 0) {
            *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v23) |= 2u;
          }
        }
      }
    }
  }
  return result;
}

__int64 game_1189a20(__int64 result, __int64 a2, __int64 a3, char a4)
{
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned __int8* v8;
  int v9;
  unsigned __int8* v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  unsigned __int64* v15;
  __int64* v16;
  _QWORD* v17;
  __int64* v18;
  _BYTE* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  int v28;
  __int64 v29;
  int v30;
  struct {
    __int64 (**v31)();
    __int64* v32;
    _BYTE* v33;
    _BYTE* v34;
    __int64 (***v35)();
  } v31_;
  _BYTE v36[4];
  _BYTE v37[4];
  struct {
    _QWORD v38[4];
    _QWORD* v39;
  } v38_;
  struct {
    unsigned __int64 v40;
    int v41;
    char v42;
    char gap125_[19];
    _QWORD* v43;
  } v40_;
  __int64 v44;

  v44 = a2;
  v37[0] = a4;
  if (a2 == 0) {
    return result;
  }
  if (*(_QWORD*)(a2 + 392) == 0) {
    return result;
  }
  v4 = *(_QWORD*)(a2 + 440);
  if (v4 == 0 || *(unsigned __int8*)(v4 + 16) > 3u) {
    return result;
  }
  v5 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_223da48,
                            memory_order_acquire) &
       1) == 0) {
    v29 = a3;
    v30 = __cxa_guard_acquire(&GameData_223da48);
    a3 = v29;
    if (v30 != 0) {
      GameData_223d9c8 = 14;
      GameData_223d9e8 = 0;
      GameData_223d9f0 = 0;
      GameData_223d9f8 = 0;
      GameData_223da00 = 0;
      GameData_223da08 = 0;
      GameData_223da30 = 0;
      GameData_223da38 = 0;
      GameData_223da40 = 0;
      GameData_223da10 = 0;
      GameData_223da18 = 0;
      GameData_223da20 = 0;
      GameData_223da28 = 0;
      GameData_223d9d0 = 0;
      GameData_223d9d8 = 16;
      GameData_223d9e0 = 1;
      __cxa_guard_release(&GameData_223da48);
      a3 = v29;
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v7 = 2)
           : (v7 = 3),
       (v7 & v6) != 0)) {
    v8 = *(unsigned __int8**)(a3 + 16);
    if ((*(_BYTE*)a3 & 1) == 0) {
      v8 = (unsigned __int8*)(a3 + 1);
    }
    v11 = *v8;
    v10 = v8 + 1;
    v9 = v11;
    if (v11 != 0) {
      v12 = 0;
      do {
        v12 = v9 - v12 + 32 * v12;
        v13 = *v10++;
        v9 = v13;
      } while (v13 != 0);
    }
    else {
      v12 = 0;
    }
    v14 = v44;
    v15 = (unsigned __int64*)GameData_212ceb8;
    goto LABEL_20;
  }
  v40_.v42 = 0;
  v40_.v40 = 0xBF800000BF800000LL;
  v40_.v41 = 1065353216;
  v28 = UnitActor_819f40(*(_QWORD*)(v44 + 8));
  if (v28 != *(_DWORD*)(v44 + 16)) {
    v15 = &v40_.v40;
    v12 = v28;
    v14 = v44;
  LABEL_20:
    UnitActor_81a540(v14, v12, (__int64)v15);
  }
  v36[0] = 0;
  v31_.v31 = GameData_20149d8;
  v31_.v32 = &v44;
  v31_.v33 = v36;
  v31_.v34 = v37;
  v31_.v35 = &v31_.v31;
  v38_.v38[3] = v37;
  v38_.v39 = v38_.v38;
  v38_.v38[0] = GameData_20149d8;
  v38_.v38[1] = &v44;
  v38_.v38[2] = v36;
  v16 = (__int64*)fw_memory_g_heap_manager_ptr;
  v17 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v18 = v31_.v32;
  v19 = v31_.v33;
  v20 = v17;
  v40_.v43 = v17;
  *v17 = GameData_2014940;
  v17[2] = GameData_20149d8;
  v17[3] = v18;
  v17[4] = v19;
  v17[5] = v31_.v34;
  v17[6] = v17 + 2;
  ProcManager_659d40((__int64)&v40_.v40);
  (*(void (**)(_QWORD*))(*v20 + 40LL))(v20);
  if (v38_.v39 == v38_.v38) {
    v21 = 32;
  }
  else {
    if (v38_.v39 == nullptr) {
      goto LABEL_26;
    }
    v21 = 40;
  }
  (*(void (**)(__int64))(*v38_.v39 + v21))((__int64)v38_.v39);
LABEL_26:
  result = (__int64)v31_.v35;
  if (v31_.v35 == &v31_.v31) {
    v22 = 4;
  }
  else {
    if (v31_.v35 == nullptr) {
      goto LABEL_31;
    }
    v22 = 5;
  }
  result = ((__int64 (*)(__int64))(*v31_.v35)[v22])((__int64)v31_.v35);
LABEL_31:
  if ((v36[0] & 1) == 0) {
    v23 = fw_memory_HeapManager_Allocate(*v16, 168, 16, 0);
    v24 = GameData_212c608[0];
    v25 = v44;
    v26 = v37[0];
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
    *(_QWORD*)(v23 + 80) = 0;
    *(_QWORD*)(v23 + 88) = 0;
    *(_QWORD*)(v23 + 64) = 0;
    *(_QWORD*)(v23 + 72) = 0;
    *(_QWORD*)(v23 + 48) = 0;
    *(_QWORD*)(v23 + 56) = 0;
    *(_QWORD*)(v23 + 32) = 0;
    *(_QWORD*)(v23 + 40) = 0;
    *(_QWORD*)v23 = v24 + 16;
    *(_QWORD*)(v23 + 8) = 0;
    result = game_ProcInst_Register(v23);
    *(_QWORD*)(v23 + 152) = v25;
    *(_BYTE*)(v23 + 160) = v26;
    *(_QWORD*)v23 = anonymous_MotionProc_vtable;
    if (v5 != 0) {
      v27 = *(_QWORD*)(v5 + 40);
      if (v27 != 0) {
        *(_QWORD*)(v27 + 48) = v23;
        *(_QWORD*)(v23 + 56) = *(_QWORD*)(v5 + 40);
      }
      *(_QWORD*)(v5 + 40) = v23;
      *(_QWORD*)(v23 + 24) = "MotionProc";
      *(_QWORD*)(v23 + 32) = v5;
      *(_DWORD*)(v23 + 140) = game_HashString32((__int64)"MotionProc");
      *(_QWORD*)(v23 + 64) = 0;
      *(_QWORD*)(v23 + 72) = 24;
      *(_QWORD*)(v23 + 80) = 1;
      *(_QWORD*)(v23 + 8) = &GameData_223d9c8;
      *(_QWORD*)(v23 + 16) = &GameData_223d9c8;
      (*(void (**)(__int64))(*(_QWORD*)v23 + 32LL))(v23);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 136LL))(v23);
      if ((result & 1) != 0 && (*(_WORD*)(v23 + 136) & 0x100) == 0) {
        *(_WORD*)(v23 + 136) |= 0x100u;
      }
    }
    else if ((*(_WORD*)(v23 + 136) & 1) == 0) {
      return (__int64)ProcInst_657a50(v23, 1);
    }
  }
  return result;
}

__int64 game_11912b0(__int64 a1, _BYTE** a2, __int64 a3, __int64 a4)
{
  _BYTE* v4;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
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
  } v15_;

  v4 = *a2;
  if (*a2 != nullptr) {
    v6 = a1;
    v7 = msg_MessageManager_instance__ptr[0];
    if (a3 != 0) {
      v8 = a3;
    }
    else {
      v8 = (__int64)*msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020_alt1(*msg_MessageManager_instance__ptr[0] + 14704, v8);
    v9 = *v7;
    v15_.v17 = -1;
    v15_.v18 = -1;
    v15_.v19 = -1;
    v15_.v20 = -1;
    v15_.v21 = -1;
    v15_.v22 = -1;
    v15_.v23 = -1;
    v15_.v24 = -1;
    v15_.v25 = -1;
    v15_.v26 = -1;
    v15_.v27 = -1;
    v15_.v28 = -1;
    v15_.v15[0] = GameData_212e348 + 2;
    v15_.v15[1] = 0xFFFF0001FFFF0000LL;
    v15_.v15[2] = 0xFFFF0004FFFF0002LL;
    v15_.v15[3] = 0xFFFF0006FFFF0005LL;
    v15_.v29 = 8;
    v15_.v16 = (_QWORD*)0xFFFF0008FFFF0007LL;
    v10 = GameRoutine_a4dbe0(v9, v4, 0);
    a1 = v6;
  }
  else {
    v10 = nullptr;
  }
  v15_.v15[0] = v10;
  v11 = HubTalkNatives_e14270(a1, (__int64)v15_.v15);
  if (v11 != 0) {
    v12 = *(_QWORD*)(a4 + 32);
    if (v12 != 0) {
      if (v12 == a4) {
        v15_.v16 = v15_.v15;
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v12 + 24LL))(v12, v15_.v15);
      }
      else {
        v15_.v16 =
            (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      }
    }
    else {
      v15_.v16 = nullptr;
    }
    GameRoutine_6680e0(v15_.v15, (_QWORD*)(v11 + 1248));
    if (v15_.v16 == v15_.v15) {
      v13 = 32;
      goto LABEL_17;
    }
    if (v15_.v16 != nullptr) {
      v13 = 40;
    LABEL_17:
      (*(void (**)(__int64))(*v15_.v16 + v13))((__int64)v15_.v16);
    }
  }
  return v11;
}

__int64 game_1191430(__int64 a1, _BYTE** a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6)
{
  _BYTE* v6;
  __int64 v8;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    _QWORD v22[4];
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
  } v22_;

  v6 = *a2;
  if (*a2 != nullptr) {
    v8 = a1;
    v11 = msg_MessageManager_instance__ptr[0];
    v12 = (__int64*)msg_MessageManager_empty_text__ptr;
    if (a3 != 0) {
      v13 = a3;
    }
    else {
      v13 = (__int64)*msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020_alt1(*msg_MessageManager_instance__ptr[0] + 14704, v13);
    if (a4 != 0) {
      v14 = a4;
    }
    else {
      v14 = *v12;
    }
    GameRoutine_60a020_alt1(*v11 + 14728, v14);
    if (a5 != 0) {
      v15 = a5;
    }
    else {
      v15 = *v12;
    }
    GameRoutine_60a020_alt1(*v11 + 14752, v15);
    v16 = *v11;
    v22_.v24 = -1;
    v22_.v25 = -1;
    v22_.v26 = -1;
    v22_.v27 = -1;
    v22_.v28 = -1;
    v22_.v29 = -1;
    v22_.v30 = -1;
    v22_.v31 = -1;
    v22_.v32 = -1;
    v22_.v33 = -1;
    v22_.v34 = -1;
    v22_.v35 = -1;
    v22_.v22[0] = GameData_212e348 + 2;
    v22_.v22[1] = 0xFFFF0001FFFF0000LL;
    v22_.v22[2] = 0xFFFF0004FFFF0002LL;
    v22_.v22[3] = 0xFFFF0006FFFF0005LL;
    v22_.v36 = 8;
    v22_.v23 = (_QWORD*)0xFFFF0008FFFF0007LL;
    v17 = GameRoutine_a4dbe0(v16, v6, 0);
    a1 = v8;
  }
  else {
    v17 = nullptr;
  }
  v22_.v22[0] = v17;
  v18 = HubTalkNatives_e14270(a1, (__int64)v22_.v22);
  if (v18 != 0) {
    v19 = *(_QWORD*)(a6 + 32);
    if (v19 != 0) {
      if (v19 == a6) {
        v22_.v23 = v22_.v22;
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v19 + 24LL))(v19, v22_.v22);
      }
      else {
        v22_.v23 =
            (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      }
    }
    else {
      v22_.v23 = nullptr;
    }
    GameRoutine_6680e0(v22_.v22, (_QWORD*)(v18 + 1248));
    if (v22_.v23 == v22_.v22) {
      v20 = 32;
      goto LABEL_23;
    }
    if (v22_.v23 != nullptr) {
      v20 = 40;
    LABEL_23:
      (*(void (**)(__int64))(*v22_.v23 + v20))((__int64)v22_.v23);
    }
  }
  return v18;
}

void game_11918e0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;

  GameData_223dae8 = (__int64)"event";
  GameData_223daf0 = (__int64)event_TelopWinLoseRule;
  GameData_223daf8 = 0;
  GameData_223db00 = 0;
  v0 = GameData_212bf18[0];
  GameData_223db28 = (__int64)"event";
  GameData_223db30 = (__int64)event_Dialog_118d790;
  GameData_223db08 = 0;
  GameData_223db10 = 2;
  GameData_223db38 = 0;
  GameData_223db40 = 0;
  GameData_223db48 = 0;
  GameData_223db50 = 2;
  v1 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_223dad8;
  GameData_223db58 = (__int64)"void Dialog(const string& label)";
  GameData_223db60 = (__int64)&GameData_223dae8;
  GameData_223db78 = 0;
  GameData_223db80 = 0;
  GameData_223db88 = 0;
  GameData_223db90 = 2;
  GameData_223db68 = (__int64)"event";
  GameData_223db70 = (__int64)event_Dialog_118da50;
  GameData_223dbb8 = 0;
  GameData_223dbc0 = 0;
  GameData_223dbc8 = 0;
  GameData_223dbd0 = 2;
  GameData_223dad8 = (__int64)"event";
  GameData_223dae0 = v1;
  v2 = *v0;
  GameData_223db18 = (__int64)"void TelopWinLoseRule()";
  GameData_223db20 = v2;
  GameData_223db98 =
      (__int64)"void Dialog(const string& label, const string arg0)";
  GameData_223dba0 = (__int64)&GameData_223db28;
  GameData_223dba8 = (__int64)"event";
  GameData_223dbb0 = (__int64)event_Dialog_118dd90;
  GameData_223dbd8 = (__int64)"void Dialog(const string& label, const string "
                              "arg0, const string arg1)";
  GameData_223dbe0 = (__int64)&GameData_223db68;
  GameData_223dc08 = 0;
  GameData_223dbf8 = 0;
  GameData_223dc00 = 0;
  GameData_223dc10 = 2;
  GameData_223dd28 = (__int64)"event";
  GameData_223dd30 = (__int64)event_Talk_118f300;
  GameData_223dd48 = 0;
  GameData_223dd38 = 0;
  GameData_223dd40 = 0;
  GameData_223dd50 = 2;
  GameData_223dbe8 = (__int64)"event";
  GameData_223dbf0 = (__int64)event_Dialog_118e230;
  GameData_223dc18 = (__int64)"void Dialog(const string& label, const string "
                              "arg0, const string arg1, const string arg2)";
  GameData_223dc20 = (__int64)&GameData_223dba8;
  GameData_223dc28 = (__int64)"event";
  GameData_223dc30 = (__int64)GameRoutine_118e690;
  GameData_223dc48 = 0;
  GameData_223dc38 = 0;
  GameData_223dc40 = 0;
  GameData_223dc50 = 2;
  GameData_223dc58 = (__int64)"void YesNoDialog(const string& label)";
  GameData_223dc60 = (__int64)&GameData_223dbe8;
  GameData_223dc68 = (__int64)"event";
  GameData_223dc70 = (__int64)event_Talk_118e9e0;
  GameData_223dc88 = 0;
  GameData_223dc78 = 0;
  GameData_223dc80 = 0;
  GameData_223dc90 = 2;
  GameData_223dc98 = (__int64)"void Talk(const string& label)";
  GameData_223dca0 = (__int64)&GameData_223dc28;
  GameData_223dca8 = (__int64)"event";
  GameData_223dcb0 = (__int64)event_Talk_118ecb0;
  GameData_223dcc8 = 0;
  GameData_223dcb8 = 0;
  GameData_223dcc0 = 0;
  GameData_223dcd0 = 2;
  GameData_223dcd8 =
      (__int64)"void Talk(const string& label, const string arg0)";
  GameData_223dce0 = (__int64)&GameData_223dc68;
  GameData_223dce8 = (__int64)"event";
  GameData_223dcf0 = (__int64)event_Talk_118efc0;
  GameData_223dd08 = 0;
  GameData_223dcf8 = 0;
  GameData_223dd00 = 0;
  GameData_223dd10 = 2;
  GameData_223dd18 = (__int64)"void Talk(const string& label, const string "
                              "arg0, const string arg1)";
  GameData_223dd20 = (__int64)&GameData_223dca8;
  GameData_223dd58 = (__int64)"void Talk(const string& label, const string "
                              "arg0, const string arg1, const string arg2)";
  GameData_223dd60 = (__int64)&GameData_223dce8;
  GameData_223dd88 = 0;
  GameData_223dd78 = 0;
  GameData_223dd80 = 0;
  GameData_223dd90 = 2;
  GameData_223dd68 = (__int64)"event";
  GameData_223dd70 = (__int64)event_Demo;
  GameData_223dd98 = (__int64)"void Demo(const string& demoName)";
  GameData_223dda0 = (__int64)&GameData_223dd28;
  GameData_223dda8 = (__int64)"event";
  GameData_223ddb0 = (__int64)event_Movie;
  GameData_223ddc8 = 0;
  GameData_223ddb8 = 0;
  GameData_223ddc0 = 0;
  GameData_223ddd0 = 2;
  GameData_223dea8 = (__int64)"event";
  GameData_223deb0 = (__int64)game_script_event_GetLatestChoiceMenuIndex;
  GameData_223dec8 = 0;
  GameData_223deb8 = 0;
  GameData_223dec0 = 0;
  GameData_223ded0 = 2;
  GameData_223ddd8 = (__int64)"void Movie(const string& movieName)";
  GameData_223dde0 = (__int64)&GameData_223dd68;
  GameData_223dde8 = (__int64)"event";
  GameData_223ddf0 = (__int64)event_SideStoryReward;
  GameData_223de08 = 0;
  GameData_223ddf8 = 0;
  GameData_223de00 = 0;
  GameData_223de10 = 2;
  GameData_223de18 = (__int64)"void SideStoryReward(const string& ssid)";
  GameData_223de20 = (__int64)&GameData_223dda8;
  GameData_223de28 = (__int64)"event";
  GameData_223de30 = (__int64)event_Tutorial;
  GameData_223de48 = 0;
  GameData_223de38 = 0;
  GameData_223de40 = 0;
  GameData_223de50 = 2;
  GameData_223de58 = (__int64)"void Tutorial(const string& tutid)";
  GameData_223de60 = (__int64)&GameData_223dde8;
  GameData_223de68 = (__int64)"event";
  GameData_223de70 = (__int64)game_script_event_TutorialNoticeTelop;
  GameData_223de88 = 0;
  GameData_223de78 = 0;
  GameData_223de80 = 0;
  GameData_223de90 = 2;
  GameData_223de98 = (__int64)"void TutorialNoticeTelop(const string& tutid)";
  GameData_223dea0 = (__int64)&GameData_223de28;
  GameData_223ded8 = (__int64)"int GetLatestChoiceMenuIndex()";
  GameData_223dee0 = (__int64)&GameData_223de68;
  GameData_223df08 = 0;
  GameData_223def8 = 0;
  GameData_223df00 = 0;
  GameData_223df10 = 2;
  GameData_223dee8 = (__int64)"event";
  GameData_223def0 = (__int64)event_TelopJoin;
  GameData_223df18 = (__int64)"void TelopJoin(const string& pid)";
  GameData_223df20 = (__int64)&GameData_223dea8;
  GameData_223df28 = (__int64)"event";
  GameData_223df30 = (__int64)event_NoticeNewAction;
  GameData_223df48 = 0;
  GameData_223df38 = 0;
  GameData_223df40 = 0;
  GameData_223df50 = 2;
  GameData_223df58 = (__int64)"void NoticeNewAction(const string& id)";
  GameData_223df60 = (__int64)&GameData_223dee8;
  GameData_223df68 = (__int64)"event";
  GameData_223df70 = (__int64)event_TelopMessage;
  GameData_223df88 = 0;
  GameData_223df78 = 0;
  GameData_223df80 = 0;
  GameData_223df90 = 2;
  GameData_223df98 = (__int64)"void TelopMessage(const string& label)";
  GameData_223dfa0 = (__int64)&GameData_223df28;
  GameData_223dfa8 = (__int64)"event";
  GameData_223dfb0 = (__int64)event_TelopMessagePosBottom;
  GameData_223dfc8 = 0;
  GameData_223dfb8 = 0;
  GameData_223dfc0 = 0;
  GameData_223dfd0 = 2;
  GameData_223dfd8 = (__int64)"void TelopMessagePosBottom(const string& label)";
  GameData_223dfe0 = (__int64)&GameData_223df68;
  GameData_223dfe8 = (__int64)"event";
  GameData_223dff0 = (__int64)event_TelopSkillAcquisition;
  GameData_223e008 = 0;
  GameData_223dff8 = 0;
  GameData_223e000 = 0;
  GameData_223e010 = 2;
  GameData_223e018 = (__int64)"void TelopSkillAcquisition(const string& pid, "
                              "const string& sid)";
  GameData_223e020 = (__int64)&GameData_223dfa8;
  *v0 = (__int64)&GameData_223e028;
  GameData_223e048 = 0;
  GameData_223e038 = 0;
  GameData_223e040 = 0;
  GameData_223e050 = 2;
  GameData_223e028 = (__int64)"event";
  GameData_223e030 = (__int64)event_StrapGuide;
  GameData_223e058 = (__int64)"void StrapGuide()";
  GameData_223e060 = (__int64)&GameData_223dfe8;
}

void* game_11c2370()
{
  __int64* v0;
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  GameData_223f3c8 = (__int64)"game";
  GameData_223f3d0 = (__int64)game_script_GetGameVersion;
  GameData_223f408 = (__int64)"game::difficulty";
  GameData_223f410 = (__int64)"const as_s32 Normal";
  GameData_223f3d8 = 0;
  GameData_223f3e0 = 0;
  GameData_223f3e8 = 0;
  GameData_223f3f0 = 2;
  GameData_223f428 = (__int64)"game::difficulty";
  GameData_223f430 = (__int64)"const as_s32 Hard";
  v0 = GameData_212bf18[0];
  v1 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_223f3b8;
  v3 = GameData_212bf40[0];
  GameData_223f3b8 = (__int64)"game";
  GameData_223f3c0 = v1;
  GameData_223f438 = (__int64)&GameData_1bb5f24;
  GameData_223f440 = (__int64)&GameData_223f408;
  v4 = *v0;
  v5 = *GameData_212bf40[0];
  GameData_223f3f8 = (__int64)"int GetGameVersion()";
  GameData_223f400 = v4;
  GameData_223f418 = (__int64)&GameData_1bb5f20;
  GameData_223f420 = v5;
  GameData_223f458 = (__int64)&GameData_1bb5f28;
  GameData_223f460 = (__int64)&GameData_223f428;
  GameData_223f448 = (__int64)"game::difficulty";
  GameData_223f450 = (__int64)"const as_s32 Lunatic";
  GameData_223f468 = (__int64)"game::difficulty";
  GameData_223f470 = (__int64)game_script_difficulty_GetDifficulty;
  GameData_223f478 = 0;
  GameData_223f480 = 0;
  GameData_223f488 = 0;
  GameData_223f490 = 2;
  GameData_223f498 = (__int64)"int GetDifficulty()";
  GameData_223f4a0 = (__int64)&GameData_223f3c8;
  GameData_223f4a8 = (__int64)"game::gamemode";
  GameData_223f4b0 = (__int64)"const as_s32 Casual";
  GameData_223f4b8 = (__int64)&GameData_1bb5f2c;
  GameData_223f4c0 = (__int64)&GameData_223f448;
  GameData_223f4c8 = (__int64)"game::gamemode";
  GameData_223f4d0 = (__int64)"const as_s32 Classic";
  GameData_223f4d8 = (__int64)&GameData_1bb5f30;
  GameData_223f4e0 = (__int64)&GameData_223f4a8;
  GameData_223f4e8 = (__int64)"game::gamemode";
  GameData_223f4f0 = (__int64)game_script_gamemode_GetMode;
  GameData_223f508 = 0;
  GameData_223f4f8 = 0;
  GameData_223f500 = 0;
  GameData_223f510 = 2;
  GameData_223f518 = (__int64)"int GetMode()";
  GameData_223f520 = (__int64)&GameData_223f468;
  GameData_223f528 = (__int64)"game::gameroute";
  GameData_223f530 = (__int64)"const as_s32 None";
  GameData_223f538 = (__int64)&GameData_1bb5f34;
  GameData_223f540 = (__int64)&GameData_223f4c8;
  GameData_223f548 = (__int64)"game::gameroute";
  GameData_223f550 = (__int64)"const as_s32 Kai";
  GameData_223f558 = (__int64)&GameData_1bb5f38;
  GameData_223f560 = (__int64)&GameData_223f528;
  GameData_223f568 = (__int64)"game::gameroute";
  GameData_223f570 = (__int64)"const as_s32 Dietrich";
  GameData_223f578 = (__int64)&GameData_1bb5f3c;
  GameData_223f580 = (__int64)&GameData_223f548;
  GameData_223f588 = (__int64)"game::gameroute";
  GameData_223f590 = (__int64)"const as_s32 Theodora";
  GameData_223f598 = (__int64)&GameData_1bb5f40;
  GameData_223f5a0 = (__int64)&GameData_223f568;
  GameData_223f5a8 = (__int64)"game::gameroute";
  GameData_223f5b0 = (__int64)"const as_s32 Leda";
  GameData_223f5b8 = (__int64)&GameData_1bb5f44;
  GameData_223f5c0 = (__int64)&GameData_223f588;
  GameData_223f5c8 = (__int64)"game::gameroute";
  GameData_223f5d0 = (__int64)"const as_s32 Bertrand";
  GameData_223f5d8 = (__int64)&GameData_1bb5f48;
  GameData_223f5e0 = (__int64)&GameData_223f5a8;
  GameData_223f5e8 = (__int64)"game::gameroute";
  GameData_223f5f0 = (__int64)"const as_s32 Talimoon";
  GameData_223f5f8 = (__int64)&GameData_1bb5f4c;
  GameData_223f600 = (__int64)&GameData_223f5c8;
  GameData_223f608 = (__int64)"game::gameroute";
  GameData_223f610 = (__int64)"const as_s32 Orgel";
  GameData_223f618 = (__int64)&GameData_1bb5f50;
  GameData_223f620 = (__int64)&GameData_223f5e8;
  GameData_223f628 = (__int64)"game::gameroute";
  GameData_223f630 = (__int64)"const as_s32 Anatolia";
  GameData_223f638 = (__int64)&GameData_1bb5f54;
  GameData_223f640 = (__int64)&GameData_223f608;
  GameData_223f648 = (__int64)"game::gameroute";
  GameData_223f650 = (__int64)"const as_s32 Ishmael";
  *GameData_212bf40[0] = (__int64)&GameData_223f648;
  GameData_223f658 = (__int64)&GameData_1bb5f58;
  GameData_223f660 = (__int64)&GameData_223f628;
  GameData_223f668 = (__int64)"game::gameroute";
  GameData_223f670 = (__int64)game_script_gameroute_GetRoute;
  GameData_223f688 = 0;
  GameData_223f678 = 0;
  GameData_223f680 = 0;
  GameData_223f690 = 2;
  GameData_223f6c8 = 0;
  GameData_223f6b8 = 0;
  GameData_223f6c0 = 0;
  GameData_223f6d0 = 2;
  GameData_223f698 = (__int64)"int GetRoute()";
  GameData_223f6a0 = (__int64)&GameData_223f4e8;
  GameData_223f6a8 = (__int64)"game::situation";
  GameData_223f6b0 = (__int64)game_script_situation_GetTurn;
  GameData_223f6d8 = (__int64)"int GetTurn()";
  GameData_223f6e0 = (__int64)&GameData_223f668;
  GameData_223f6e8 = (__int64)"game::situation";
  GameData_223f6f0 = (__int64)game_script_situation_GetPhase;
  GameData_223f708 = 0;
  GameData_223f6f8 = 0;
  GameData_223f700 = 0;
  GameData_223f710 = 2;
  GameData_223f718 = (__int64)"int GetPhase()";
  GameData_223f720 = (__int64)&GameData_223f6a8;
  GameData_223f728 = (__int64)"game::situation";
  GameData_223f730 = (__int64)game_script_situation_ShowScoreInfo;
  GameData_223f748 = 0;
  GameData_223f738 = 0;
  GameData_223f740 = 0;
  GameData_223f750 = 2;
  GameData_223f7e8 = (__int64)"game::situation";
  GameData_223f7f0 = (__int64)game_script_situation_SetPlayerScore;
  GameData_223f808 = 0;
  GameData_223f7f8 = 0;
  GameData_223f800 = 0;
  GameData_223f810 = 2;
  GameData_223f758 = (__int64)"void ShowScoreInfo(bool isPlayerOnly)";
  GameData_223f760 = (__int64)&GameData_223f6e8;
  GameData_223f768 = (__int64)"game::situation";
  GameData_223f770 = (__int64)game_script_situation_GetPlayerScore;
  GameData_223f788 = 0;
  GameData_223f778 = 0;
  GameData_223f780 = 0;
  GameData_223f790 = 2;
  GameData_223f798 = (__int64)"int GetPlayerScore()";
  GameData_223f7a0 = (__int64)&GameData_223f728;
  GameData_223f7a8 = (__int64)"game::situation";
  GameData_223f7b0 = (__int64)game_script_situation_GetEnemyScore;
  GameData_223f7c8 = 0;
  GameData_223f7b8 = 0;
  GameData_223f7c0 = 0;
  GameData_223f7d0 = 2;
  GameData_223f7d8 = (__int64)"int GetEnemyScore()";
  GameData_223f7e0 = (__int64)&GameData_223f768;
  GameData_223f818 = (__int64)"void SetPlayerScore(int score)";
  GameData_223f820 = (__int64)&GameData_223f7a8;
  GameData_223f848 = 0;
  GameData_223f838 = 0;
  GameData_223f840 = 0;
  GameData_223f850 = 2;
  GameData_223f828 = (__int64)"game::situation";
  GameData_223f830 = (__int64)game_script_situation_SetEnemyScore;
  GameData_223f858 = (__int64)"void SetEnemyScore(int score)";
  GameData_223f860 = (__int64)&GameData_223f7e8;
  GameData_223f868 = (__int64)"game::situation::rule";
  GameData_223f870 = (__int64)game_script_situation_rule_SetWinDestroyBoss;
  GameData_223f888 = 0;
  GameData_223f878 = 0;
  GameData_223f880 = 0;
  GameData_223f890 = 2;
  GameData_223f928 = (__int64)"game::situation::rule";
  GameData_223f930 = (__int64)game_script_situation_rule_SetWinMID;
  GameData_223f948 = 0;
  GameData_223f938 = 0;
  GameData_223f940 = 0;
  GameData_223f950 = 2;
  GameData_223f898 = (__int64)"void SetWinDestroyBoss(bool isEnable)";
  GameData_223f8a0 = (__int64)&GameData_223f828;
  GameData_223f8a8 = (__int64)"game::situation::rule";
  GameData_223f8b0 =
      (__int64)game_script_situation_rule_SetWinEnemyNumLessThanOrEqualTo;
  GameData_223f8c8 = 0;
  GameData_223f8b8 = 0;
  GameData_223f8c0 = 0;
  GameData_223f8d0 = 2;
  GameData_223f8d8 =
      (__int64)"void SetWinEnemyNumLessThanOrEqualTo(int enemyNum)";
  GameData_223f8e0 = (__int64)&GameData_223f868;
  GameData_223f8e8 = (__int64)"game::situation::rule";
  GameData_223f8f0 = (__int64)game_script_situation_rule_SetWinLimitTurn;
  GameData_223f908 = 0;
  GameData_223f8f8 = 0;
  GameData_223f900 = 0;
  GameData_223f910 = 2;
  GameData_223f918 = (__int64)"void SetWinLimitTurn(int turn)";
  GameData_223f920 = (__int64)&GameData_223f8a8;
  GameData_223f958 = (__int64)"void SetWinMID(const string& mid, int arg0 = 0, "
                              "int arg1 = 0, int arg2 = 0)";
  GameData_223f960 = (__int64)&GameData_223f8e8;
  GameData_223f988 = 0;
  GameData_223f978 = 0;
  GameData_223f980 = 0;
  GameData_223f990 = 2;
  GameData_223f968 = (__int64)"game::situation::rule";
  GameData_223f970 = (__int64)game_script_situation_rule_SetLoseMID;
  GameData_223f998 = (__int64)"void SetLoseMID(const string& mid, int arg0 = "
                              "0, int arg1 = 0, int arg2 = 0)";
  GameData_223f9a0 = (__int64)&GameData_223f928;
  GameData_223f9a8 = (__int64)"game::variable";
  GameData_223f9b0 = (__int64)game_script_variable_Entry;
  GameData_223f9c8 = 0;
  GameData_223f9b8 = 0;
  GameData_223f9c0 = 0;
  GameData_223f9d0 = 2;
  GameData_223f9d8 = (__int64)"void Entry(string& name, int value)";
  GameData_223f9e0 = (__int64)&GameData_223f968;
  GameData_223f9e8 = (__int64)"game::variable";
  GameData_223f9f0 = (__int64)game_script_variable_Get;
  GameData_223fa08 = 0;
  GameData_223f9f8 = 0;
  GameData_223fa00 = 0;
  GameData_223fa10 = 2;
  GameData_223fa18 = (__int64)"int Get(string& name)";
  GameData_223fa20 = (__int64)&GameData_223f9a8;
  GameData_223fa28 = (__int64)"game::variable";
  GameData_223fa30 = (__int64)Set;
  GameData_223fa48 = 0;
  GameData_223fa38 = 0;
  GameData_223fa40 = 0;
  GameData_223fa50 = 2;
  GameData_223fa58 = (__int64)"void Set(string& name, int value)";
  GameData_223fa60 = (__int64)&GameData_223f9e8;
  GameData_223fa88 = 0;
  GameData_223fa78 = 0;
  GameData_223fa80 = 0;
  GameData_223fa90 = 2;
  GameData_223fa68 = (__int64)"game::person";
  GameData_223fa70 = (__int64)game_script_person_GetName;
  GameData_223fa98 = (__int64)"string GetName(const string& pid)";
  GameData_223faa0 = (__int64)&GameData_223fa28;
  GameData_223fb88 = 0;
  GameData_223fb78 = 0;
  GameData_223fb80 = 0;
  GameData_223fb90 = 2;
  GameData_223faa8 = (__int64)"game::item";
  GameData_223fab0 = (__int64)game_script_item_GetIID;
  GameData_223fac8 = 0;
  GameData_223fab8 = 0;
  GameData_223fac0 = 0;
  GameData_223fad0 = 2;
  GameData_223fb68 = (__int64)"game::item";
  GameData_223fb70 = (__int64)game_script_item_IsMagicAttack;
  GameData_223fad8 = (__int64)"string GetIID(int itemIndex)";
  GameData_223fae0 = (__int64)&GameData_223fa68;
  GameData_223fae8 = (__int64)"game::item";
  GameData_223faf0 = (__int64)game_script_item_GetItemName;
  GameData_223fb08 = 0;
  GameData_223faf8 = 0;
  GameData_223fb00 = 0;
  GameData_223fb10 = 2;
  GameData_223fb18 = (__int64)"string GetItemName(const string& iid)";
  GameData_223fb20 = (__int64)&GameData_223faa8;
  GameData_223fb28 = (__int64)"game::item";
  GameData_223fb30 = (__int64)game_script_item_HasEquipSkill;
  GameData_223fb48 = 0;
  GameData_223fb38 = 0;
  GameData_223fb40 = 0;
  GameData_223fb50 = 2;
  GameData_223fb58 =
      (__int64)"bool HasEquipSkill(const string& iid, const string& sid)";
  GameData_223fb60 = (__int64)&GameData_223fae8;
  GameData_223fb98 = (__int64)"bool IsMagicAttack(const string& iid)";
  GameData_223fba0 = (__int64)&GameData_223fb28;
  GameData_223fbc8 = 0;
  GameData_223fbb8 = 0;
  GameData_223fbc0 = 0;
  GameData_223fbd0 = 2;
  GameData_223fba8 = (__int64)"game::item";
  GameData_223fbb0 = (__int64)ScheduleNatives_11c05d0;
  GameData_223fbd8 = (__int64)"void ItemGain(int unitIndex, const string& iid, "
                              "bool isSetDrop = false, bool isLocked = false"
                              ", const string& mid = \"\")";
  GameData_223fbe0 = (__int64)&GameData_223fb68;
  GameData_223fbe8 = (__int64)"game::item";
  GameData_223fbf0 = (__int64)ScheduleNatives_11c0b80;
  GameData_223fc08 = 0;
  GameData_223fbf8 = 0;
  GameData_223fc00 = 0;
  GameData_223fc10 = 2;
  GameData_223fc18 = (__int64)"void ItemGain(const string& pid, const string& "
                              "iid, bool isSetDrop = false, bool isLocked = f"
                              "alse, const string& mid = \"\")";
  GameData_223fc20 = (__int64)&GameData_223fba8;
  GameData_223fc28 = (__int64)"game::item";
  GameData_223fc30 = (__int64)game_script_item_GoldGain;
  GameData_223fc48 = 0;
  GameData_223fc38 = 0;
  GameData_223fc40 = 0;
  GameData_223fc50 = 2;
  GameData_223fc58 = (__int64)"void GoldGain(int gold, const string& mid)";
  GameData_223fc60 = (__int64)&GameData_223fbe8;
  GameData_223fc68 = (__int64)"game::item";
  GameData_223fc70 = (__int64)game_script_item_ItemChange;
  GameData_223fc88 = 0;
  GameData_223fc78 = 0;
  GameData_223fc80 = 0;
  GameData_223fc90 = 2;
  GameData_223fc98 = (__int64)"void ItemChange(const string& iidOld)";
  GameData_223fca0 = (__int64)&GameData_223fc28;
  GameData_223fca8 = (__int64)"game::hero";
  GameData_223fcb0 = (__int64)game_script_hero_GetPID;
  GameData_223fcc8 = 0;
  GameData_223fcb8 = 0;
  GameData_223fcc0 = 0;
  GameData_223fcd0 = 2;
  GameData_223fcd8 = (__int64)"string GetPID()";
  GameData_223fce0 = (__int64)&GameData_223fc68;
  v6 = *v3;
  GameData_223fce8 = (__int64)"game::force";
  GameData_223fcf0 = (__int64)"const as_s32 Player";
  GameData_223fcf8 = (__int64)&GameData_1bb5f5c;
  GameData_223fd00 = v6;
  GameData_223fd08 = (__int64)"game::force";
  GameData_223fd10 = (__int64)"const as_s32 Enemy";
  GameData_223fd18 = (__int64)&GameData_1bb5f60;
  GameData_223fd20 = (__int64)&GameData_223fce8;
  GameData_223fd28 = (__int64)"game::force";
  GameData_223fd30 = (__int64)"const as_s32 Third";
  GameData_223fd38 = (__int64)&GameData_1bb5f64;
  GameData_223fd40 = (__int64)&GameData_223fd08;
  GameData_223fd48 = (__int64)"game::force";
  GameData_223fd50 = (__int64)"const as_s32 Ally";
  GameData_223fd58 = (__int64)&GameData_1bb5f68;
  GameData_223fd60 = (__int64)&GameData_223fd28;
  GameData_223fd68 = (__int64)"game::force";
  GameData_223fd70 = (__int64)"const as_s32 Absent";
  GameData_223fd78 = (__int64)&GameData_1bb5f6c;
  GameData_223fd80 = (__int64)&GameData_223fd48;
  GameData_223fd88 = (__int64)"game::force";
  GameData_223fd90 = (__int64)"const as_s32 Dead";
  GameData_223fd98 = (__int64)&GameData_1bb5f70;
  GameData_223fda0 = (__int64)&GameData_223fd68;
  GameData_223fda8 = (__int64)"game::force";
  GameData_223fdb0 = (__int64)"const as_s32 Away";
  GameData_223fdb8 = (__int64)&GameData_1bb5f74;
  GameData_223fdc0 = (__int64)&GameData_223fd88;
  GameData_223fdc8 = (__int64)"game::force";
  GameData_223fdd0 = (__int64)"const as_s32 All";
  GameData_223fdd8 = (__int64)&GameData_1bb5f78;
  GameData_223fde0 = (__int64)&GameData_223fda8;
  GameData_223fde8 = (__int64)"game::force";
  GameData_223fdf0 = (__int64)game_script_force_IsAllied;
  GameData_223fe08 = 0;
  GameData_223fdf8 = 0;
  GameData_223fe00 = 0;
  GameData_223fe10 = 2;
  GameData_223fe18 = (__int64)"bool IsAllied(int force1, int force2)";
  GameData_223fe20 = (__int64)&GameData_223fca8;
  GameData_223fe28 = (__int64)"game::config::animetype";
  GameData_223fe30 = (__int64)"const as_s32 Off";
  GameData_223fe38 = (__int64)&GameData_1bb5f7c;
  GameData_223fe40 = (__int64)&GameData_223fdc8;
  GameData_223fe48 = (__int64)"game::config::animetype";
  GameData_223fe50 = (__int64)"const as_s32 Simple";
  GameData_223fe58 = (__int64)&GameData_1bb5f80;
  GameData_223fe60 = (__int64)&GameData_223fe28;
  GameData_223fe68 = (__int64)"game::config::animetype";
  GameData_223fe70 = (__int64)"const as_s32 Detail";
  GameData_223fe78 = (__int64)&GameData_1bb5f84;
  GameData_223fe80 = (__int64)&GameData_223fe48;
  GameData_223fe88 = (__int64)"game::config::animetype";
  GameData_223fe90 = (__int64)"const as_s32 PlayerUnit";
  GameData_223fe98 = (__int64)&GameData_1bb5f88;
  GameData_223fea0 = (__int64)&GameData_223fe68;
  *v3 = (__int64)&GameData_223fea8;
  GameData_223fee8 = 0;
  GameData_223fed8 = 0;
  GameData_223fee0 = 0;
  GameData_223fef0 = 2;
  GameData_223fea8 = (__int64)"game::config::animetype";
  GameData_223feb0 = (__int64)"const as_s32 PlayerPhase";
  GameData_223feb8 = (__int64)&GameData_1bb5f8c;
  GameData_223fec0 = (__int64)&GameData_223fe88;
  GameData_223ff28 = 0;
  GameData_223ff18 = 0;
  GameData_223ff20 = 0;
  GameData_223ff30 = 2;
  GameData_223fec8 = (__int64)"game::config";
  GameData_223fed0 = (__int64)game_script_config_GetBattleAnimeType;
  GameData_223ff08 = (__int64)"game::config";
  GameData_223ff10 = (__int64)game_script_config_GetAssistAnimeType;
  GameData_223fef8 = (__int64)"int GetBattleAnimeType()";
  GameData_223ff00 = (__int64)&GameData_223fde8;
  GameData_223ff38 = (__int64)"int GetAssistAnimeType()";
  GameData_223ff40 = (__int64)&GameData_223fec8;
  GameData_223ff78 = (__int64)"void ProgressWait(int minute)";
  GameData_223ff80 = (__int64)&GameData_223ff08;
  GameData_223ff68 = 0;
  GameData_223ff58 = 0;
  GameData_223ff60 = 0;
  GameData_223ff70 = 2;
  GameData_223ff48 = (__int64)"game::schedule";
  GameData_223ff50 = (__int64)game_script_schedule_ProgressWait;
  GameData_223ffb0 = 2;
  GameData_223fff0 = 2;
  GameData_223ffa8 = 0;
  GameData_223ff98 = 0;
  GameData_223ffa0 = 0;
  GameData_223ffe8 = 0;
  GameData_223ffd8 = 0;
  GameData_223ffe0 = 0;
  GameData_223ff88 = (__int64)"game::schedule";
  GameData_223ff90 = (__int64)game_script_schedule_Progress;
  GameData_223ffb8 = (__int64)"void Progress(int minute)";
  GameData_223ffc0 = (__int64)&GameData_223ff48;
  GameData_223fff8 = (__int64)"string GetFlagByKey(uint key)";
  GameData_2240000 = (__int64)&GameData_223ff88;
  GameData_223ffc8 = (__int64)"game::data";
  GameData_223ffd0 = (__int64)game_script_data_GetFlagByKey;
  *v0 = (__int64)&GameData_2240008;
  GameData_2240030 = 2;
  GameData_2240028 = 0;
  GameData_2240018 = 0;
  GameData_2240020 = 0;
  GameData_2240008 = (__int64)"game::data";
  GameData_2240010 = (__int64)game_script_data_GetPidByKey;
  GameData_2240038 = (__int64)"string GetPidByKey(uint key)";
  GameData_2240040 = (__int64)&GameData_223ffc8;
  return &GameData_1bb5f20;
}

_QWORD* game_1244680(__int64 a1, unsigned __int64* a2, __int64* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v8;
  _QWORD** v9;
  _QWORD* result;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  _BOOL8 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 primeEm;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  unsigned __int64 v29;

  v4 = *a2;
  v5 = *(_QWORD*)(a1 + 8);
  if (v5 != 0) {
    v8 = v5 - 1;
    if ((v5 & (v5 - 1)) != 0) {
      v3 = *a2;
      if (v4 >= v5) {
        v3 = v4 % v5;
      }
    }
    else {
      v3 = v8 & v4;
    }
    v9 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v3);
    if (v9 != nullptr) {
      result = *v9;
      if (*v9 != nullptr) {
        if ((v5 & v8) == 0) {
          while (1) {
            v12 = result[1];
            if (v12 == v4) {
              if (result[2] == v4) {
                return result;
              }
            }
            else if ((v12 & v8) != v3) {
              goto LABEL_23;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_23;
            }
          }
        }
        do {
          v11 = result[1];
          if (v11 == v4) {
            if (result[2] == v4) {
              return result;
            }
          }
          else {
            if (v11 >= v5) {
              v11 %= v5;
            }
            if (v11 != v3) {
              break;
            }
          }
          result = (_QWORD*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_23:
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v13 = *a3;
  v14 = *(float*)(a1 + 32);
  *result = 0;
  result[1] = v4;
  result[2] = v13;
  v15 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v5 == 0 || (float)(v14 * (float)v5) < v15) {
    v16 = v15 / v14;
    v17 = true;
    if (v5 >= 3) {
      v17 = (v5 & (v5 - 1)) != 0;
    }
    v18 = v17 | (2 * v5);
    v19 = vcvtps_u64_f32(v16);
    if (v18 <= v19) {
      primeEm = v19;
    }
    else {
      primeEm = v18;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v21 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v21;
      v5 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm > v5) {
      goto LABEL_35;
    }
    if (primeEm < v5) {
      v23 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v5 < 3 || (v5 & (v5 - 1)) != 0) {
        v25 = result;
        v23 = std___1___next_prime(v23);
        result = v25;
      }
      else {
        v24 = 1LL << -(char)__clz(v23 - 1);
        if (v23 >= 2) {
          v23 = v24;
        }
      }
      if (primeEm <= v23) {
        primeEm = v23;
      }
      if (primeEm < v5) {
      LABEL_35:
        v22 = result;
        GameRoutine_8cfec0((__int64*)a1, primeEm);
        result = v22;
      }
    }
    v5 = *(_QWORD*)(a1 + 8);
    if ((v5 & (v5 - 1)) != 0) {
      if (v4 >= v5) {
        v3 = v4 % v5;
      }
      else {
        v3 = v4;
      }
    }
    else {
      v3 = (v5 - 1) & v4;
    }
  }
  v26 = *(_QWORD*)a1;
  v27 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v27 != nullptr) {
    *result = *v27;
    *v27 = result;
  }
  else {
    v28 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *result = v28;
    *(_QWORD*)(v26 + 8 * v3) = a1 + 16;
    if (*result != 0) {
      v29 = *(_QWORD*)(*result + 8LL);
      if ((v5 & (v5 - 1)) != 0) {
        if (v29 >= v5) {
          v29 %= v5;
        }
      }
      else {
        v29 &= v5 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v29) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

__int64 game_127cc60(__int64* a1, int a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  const char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
  } v24_;
  _QWORD v26[10];

  v2 = *a1;
  v3 = v24_.v24;
  v24_.v24[0] = GameData_201fa48;
  v24_.v25 = v24_.v24;
  if (v2 == 0 || (v4 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 24LL)) == 0 ||
      ((unsigned int)a2 >= 0x50 ? (v5 = 80) : (v5 = a2),
       (v6 = v5 - 1, a2 <= 0) ? (v7 = 0) : (v7 = v6), (v7 & 0x80000000) != 0)) {
    v20 = 0;
    v22 = 32;
  LABEL_44:
    (*(void (**)(_QWORD*))(*v3 + v22))(v3);
    return v20;
  }
  v8 = v4 + 40;
  v9 = GameData_212c998[0];
  while (1) {
    v11 = *(const char**)(v8 + 8 * v7);
    if (v11 != nullptr) {
      if ((unsigned int)strcmp(*(_QWORD*)(v8 + 8 * v7), &GameData_1a94a43) ==
          0) {
        goto LABEL_38;
      }
      nn_util_SNPrintf(v26, 80, "%s%s", "LID_", v11);
      v12 = game_HashString((__int64)v26);
      if (v12 == 0) {
        goto LABEL_38;
      }
      v13 = *(_QWORD*)(*v9 + 96);
      if (v13 == 0 || *(_QWORD*)(*v9 + 112) == 0) {
        goto LABEL_38;
      }
      v15 = v13 - 1;
      if ((v13 & (v13 - 1)) != 0) {
        v16 = v12;
        if (v12 >= v13) {
          v16 = v12 % v13;
        }
      }
      else {
        v16 = v15 & v12;
      }
      v17 = *(_QWORD**)(*(_QWORD*)(*v9 + 88) + 8 * v16);
      if (v17 == nullptr || (v18 = (_QWORD*)*v17) == nullptr) {
      LABEL_38:
        v20 = 0;
        goto LABEL_39;
      }
      if ((v13 & v15) == 0) {
        while (1) {
          v21 = v18[1];
          if (v21 == v12) {
            if (v18[2] == v12) {
              goto LABEL_42;
            }
          }
          else if ((v21 & v15) != v16) {
            goto LABEL_38;
          }
          v18 = (_QWORD*)*v18;
          v20 = 0;
          if (v18 == nullptr) {
            goto LABEL_39;
          }
        }
      }
      while (1) {
        v19 = v18[1];
        if (v19 == v12) {
          break;
        }
        if (v19 >= v13) {
          v19 %= v13;
        }
        if (v19 != v16) {
          goto LABEL_38;
        }
      LABEL_28:
        v18 = (_QWORD*)*v18;
        if (v18 == nullptr) {
          goto LABEL_38;
        }
      }
      if (v18[2] != v12) {
        goto LABEL_28;
      }
    LABEL_42:
      v20 = v18[3];
    LABEL_39:
      v26[0] = v20;
      if (v24_.v25 == nullptr) {
        GameRoutine_60a310();
      }
      if (((*(__int64 (**)(_QWORD*, _QWORD*))(*v24_.v25 + 48LL))(v24_.v25,
                                                                 v26) &
           1) != 0) {
        break;
      }
    }
    if (v7-- <= 0) {
      v20 = 0;
      break;
    }
  }
  if (v24_.v25 == v24_.v24) {
    v22 = 32;
  LABEL_51:
    v3 = v24_.v25;
    goto LABEL_44;
  }
  if (v24_.v25 != nullptr) {
    v22 = 40;
    goto LABEL_51;
  }
  return v20;
}

#pragma GCC visibility pop
